/**
 * Burnout 3 - Recompiled code chunk 24
 * Functions: 250 (0x0022F850 - 0x0023EAF0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_0022F850
 * Original: 0x0022F850 - 0x0022F88B (59 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022F850(void)
{
    int _flags = 0; /* fallback flag var */

loc_0022F850: ;
    if (CMP_EQ(edx, ecx)) goto loc_0022F88A; /* je: equal / zero */

loc_0022F854: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);

loc_0022F857: ;
    ecx = ecx - 0x18;
    eax = eax - 0x18;
    (void)0; /* cmp ecx, edx - flags set for next jcc */
    esi = ecx;
    ebx = MEM32(esi);
    edi = eax;
    MEM32(edi) = ebx;
    ebx = MEM32(esi + 4);
    MEM32(edi + 4) = ebx;
    ebx = MEM32(esi + 8);
    MEM32(edi + 8) = ebx;
    ebx = MEM32(esi + 0xC);
    MEM32(edi + 0xC) = ebx;
    ebx = MEM32(esi + 0x10);
    MEM32(edi + 0x10) = ebx;
    esi = MEM32(esi + 0x14);
    MEM32(edi + 0x14) = esi;
    if (CMP_NE(ecx, edx)) goto loc_0022F857; /* jne: not equal / not zero */

loc_0022F887: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0022F88A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0022F890
 * Original: 0x0022F890 - 0x0022F8BD (45 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022F890(void)
{
    int _flags = 0; /* fallback flag var */

loc_0022F890: ;
    if (TEST_Z(esi, esi)) goto loc_0022F8BC; /* je: equal / zero */

loc_0022F894: ;
    eax = MEM32(edi);
    MEM32(esi) = eax;
    ecx = MEM32(edi + 4);
    edx = esi + 8;
    MEM32(esi + 4) = ecx;
    ecx = edi + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0022D8F0(); /* call 0x0022D8F0 */

loc_0022F8AA: ;
    SET_LO8(eax, MEM8(edi + 0x18));
    MEM8(esi + 0x18) = LO8(eax);
    ecx = MEM32(edi + 0x1C);
    MEM32(esi + 0x1C) = ecx;
    edx = MEM32(edi + 0x20);
    MEM32(esi + 0x20) = edx;

loc_0022F8BC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0022F8C0
 * Original: 0x0022F8C0 - 0x0022F8E1 (33 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022F8C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0022F8C0: ;
    if (TEST_Z(esi, esi)) goto loc_0022F8E0; /* je: equal / zero */

loc_0022F8C4: ;
    eax = MEM32(edi);
    MEM32(esi) = eax;
    ecx = MEM32(edi + 4);
    edx = esi + 8;
    MEM32(esi + 4) = ecx;
    ecx = edi + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0022D8F0(); /* call 0x0022D8F0 */

loc_0022F8DA: ;
    eax = MEM32(edi + 0x18);
    MEM32(esi + 0x18) = eax;

loc_0022F8E0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0022F8F0
 * Original: 0x0022F8F0 - 0x0022F91E (46 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022F8F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0022F8F0: ;
    PUSH32(esp, ecx);
    eax = MEM32(esi + 0xC);
    if (TEST_Z(eax, eax)) goto loc_0022F907; /* je: equal / zero */

loc_0022F8F8: ;
    MEM32(esp) = eax;
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0022F904: ;
    esp = esp + 4;

loc_0022F907: ;
    MEM32(esi + 0xC) = 0;
    MEM32(esi + 0x10) = 0;
    MEM32(esi + 0x14) = 0;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0022F920
 * Original: 0x0022F920 - 0x0022FC99 (889 bytes, 237 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022F920(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022F920: ;
    esp = esp - 0x418;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x424);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x42C);
    ecx = ebp;
    ecx = ecx - ebx;
    eax = 0xDD67C8A7u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + ecx;
    edx = (uint32_t)((int32_t)edx >> 7);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = eax - edx;
    edi = eax;
    edi = (uint32_t)((int32_t)edi >> 1);
    edi = (uint32_t)((int32_t)edi * (int32_t)0x94);
    eax = ebp + -148;
    PUSH32(esp, eax);
    edi = edi + ebx;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_002300E0(); /* call 0x002300E0 */

loc_0022F96C: ;
    esp = esp + 0xC;
    (void)0; /* cmp ebx, edi - flags set for next jcc */
    esi = edi + 0x94;
    MEM32(esp + 0x10) = esi;
    if (CMP_AE(ebx, edi)) goto loc_0022F9C0; /* jae: above or equal (unsigned >=) */

loc_0022F97D: ;
    eax = edi + -16;

loc_0022F980: ;
    ecx = MEM32(eax);
    edx = MEM32(eax + 0x94);
    if (CMP_L(ecx, edx)) goto loc_0022F9C0; /* jl: less (signed <) */

loc_0022F98C: ;
    if (CMP_NE(ecx, edx)) goto loc_0022F9C0; /* jne: not equal / not zero */

loc_0022F98E: ;
    ebx = MEM32(eax + 4);
    if (CMP_GE(ebx, MEM32(eax + 0x98))) goto loc_0022F9C0; /* jge: greater or equal (signed >=) */

loc_0022F999: ;
    (void)0; /* cmp edx, ecx - flags set for next jcc */
    ebx = MEM32(esp + 0x430);
    if (CMP_L(edx, ecx)) goto loc_0022F9B1; /* jl: less (signed <) */

loc_0022F9A4: ;
    if (CMP_NE(edx, ecx)) goto loc_0022F9C0; /* jne: not equal / not zero */

loc_0022F9A6: ;
    ecx = MEM32(eax + 0x98);
    if (CMP_GE(ecx, MEM32(eax + 4))) goto loc_0022F9C0; /* jge: greater or equal (signed >=) */

loc_0022F9B1: ;
    edi = edi - 0x94;
    eax = eax - 0x94;
    if (CMP_B(ebx, edi)) goto loc_0022F980; /* jb: below (unsigned <) */

loc_0022F9C0: ;
    if (CMP_AE(esi, ebp)) goto loc_0022FA06; /* jae: above or equal (unsigned >=) */

loc_0022F9C4: ;
    ecx = MEM32(edi + 0x84);
    /* nop */

loc_0022F9D0: ;
    eax = MEM32(esi + 0x84);
    if (CMP_L(eax, ecx)) goto loc_0022FA02; /* jl: less (signed <) */

loc_0022F9DA: ;
    if (CMP_NE(eax, ecx)) goto loc_0022FA02; /* jne: not equal / not zero */

loc_0022F9DC: ;
    edx = MEM32(esi + 0x88);
    ebx = MEM32(edi + 0x88);
    if (CMP_GE(edx, ebx)) goto loc_0022FA02; /* jge: greater or equal (signed >=) */

loc_0022F9EC: ;
    if (CMP_L(ecx, eax)) goto loc_0022F9F8; /* jl: less (signed <) */

loc_0022F9F0: ;
    if (CMP_NE(ecx, eax)) goto loc_0022FA02; /* jne: not equal / not zero */

loc_0022F9F2: ;
    eax = ebx;
    if (CMP_GE(eax, edx)) goto loc_0022FA02; /* jge: greater or equal (signed >=) */

loc_0022F9F8: ;
    esi = esi + 0x94;
    if (CMP_B(esi, ebp)) goto loc_0022F9D0; /* jb: below (unsigned <) */

loc_0022FA02: ;
    MEM32(esp + 0x10) = esi;

loc_0022FA06: ;
    ebx = esi;
    MEM32(esp + 0x14) = edi;
    /* nop */

loc_0022FA10: ;
    if (CMP_AE(ebx, ebp)) goto loc_0022FA98; /* jae: above or equal (unsigned >=) */

loc_0022FA18: ;
    goto loc_0022FA20;

    /* nop */

loc_0022FA20: ;
    eax = MEM32(ebx + 0x84);
    ecx = MEM32(edi + 0x84);
    if (CMP_L(ecx, eax)) goto loc_0022FA98; /* jl: less (signed <) */

loc_0022FA30: ;
    if (CMP_NE(ecx, eax)) goto loc_0022FA8E; /* jne: not equal / not zero */

loc_0022FA32: ;
    edx = MEM32(edi + 0x88);
    if (CMP_GE(edx, MEM32(ebx + 0x88))) goto loc_0022FA8E; /* jge: greater or equal (signed >=) */

loc_0022FA40: ;
    if (CMP_L(eax, ecx)) goto loc_0022FA52; /* jl: less (signed <) */

loc_0022FA44: ;
    if (CMP_NE(eax, ecx)) goto loc_0022FA98; /* jne: not equal / not zero */

loc_0022FA46: ;
    eax = MEM32(ebx + 0x88);
    ecx = edx;
    if (CMP_GE(eax, ecx)) goto loc_0022FA98; /* jge: greater or equal (signed >=) */

loc_0022FA52: ;
    ebp = esi;
    esi = esi + 0x94;
    MEM32(esp + 0x10) = esi;
    esi = ebp;
    eax = esp + 0x300;
    PUSH32(esp, 0); sub_0022F190(); /* call 0x0022F190 */

loc_0022FA6C: ;
    esi = ebx;
    eax = ebp;
    PUSH32(esp, 0); sub_0022F190(); /* call 0x0022F190 */

loc_0022FA75: ;
    esi = esp + 0x300;
    eax = ebx;
    PUSH32(esp, 0); sub_0022F190(); /* call 0x0022F190 */

loc_0022FA83: ;
    esi = MEM32(esp + 0x10);
    ebp = MEM32(esp + 0x434);

loc_0022FA8E: ;
    ebx = ebx + 0x94;
    if (CMP_B(ebx, ebp)) goto loc_0022FA20; /* jb: below (unsigned <) */

loc_0022FA98: ;
    eax = MEM32(esp + 0x14);
    if (CMP_BE(eax, MEM32(esp + 0x430))) goto loc_0022FB41; /* jbe: below or equal (unsigned <=) */

loc_0022FAA9: ;
    ebp = eax + -16;
    /* nop */

loc_0022FAB0: ;
    eax = MEM32(ebp);
    ecx = MEM32(edi + 0x84);
    if (CMP_L(eax, ecx)) goto loc_0022FB2D; /* jl: less (signed <) */

loc_0022FABD: ;
    if (CMP_NE(eax, ecx)) goto loc_0022FB0D; /* jne: not equal / not zero */

loc_0022FABF: ;
    edx = MEM32(ebp + 4);
    if (CMP_GE(edx, MEM32(edi + 0x88))) goto loc_0022FB0D; /* jge: greater or equal (signed >=) */

loc_0022FACA: ;
    if (CMP_L(ecx, eax)) goto loc_0022FADC; /* jl: less (signed <) */

loc_0022FACE: ;
    if (CMP_NE(ecx, eax)) goto loc_0022FB2D; /* jne: not equal / not zero */

loc_0022FAD0: ;
    eax = MEM32(edi + 0x88);
    ecx = edx;
    if (CMP_GE(eax, ecx)) goto loc_0022FB2D; /* jge: greater or equal (signed >=) */

loc_0022FADC: ;
    edi = edi - 0x94;
    esi = edi;
    eax = esp + 0x1C;
    PUSH32(esp, 0); sub_0022F190(); /* call 0x0022F190 */

loc_0022FAED: ;
    esi = ebp + -132;
    eax = edi;
    PUSH32(esp, 0); sub_0022F190(); /* call 0x0022F190 */

loc_0022FAFA: ;
    esi = esp + 0x1C;
    eax = ebp + -132;
    PUSH32(esp, 0); sub_0022F190(); /* call 0x0022F190 */

loc_0022FB09: ;
    esi = MEM32(esp + 0x10);

loc_0022FB0D: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x430);
    eax = eax - 0x94;
    ebp = ebp - 0x94;
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    MEM32(esp + 0x14) = eax;
    if (CMP_B(ecx, eax)) goto loc_0022FAB0; /* jb: below (unsigned <) */

loc_0022FB2B: ;
    goto loc_0022FB31;

loc_0022FB2D: ;
    eax = MEM32(esp + 0x14);

loc_0022FB31: ;
    ecx = MEM32(esp + 0x430);
    ebp = MEM32(esp + 0x434);
    (void)0; /* cmp eax, ecx - flags set for next jcc */

loc_0022FB41: ;
    if (CMP_NE(eax, ecx)) goto loc_0022FBD1; /* jne: not equal / not zero */

loc_0022FB47: ;
    if (CMP_EQ(ebx, ebp)) { sub_0022FC99(); return; } /* je: equal / zero */

loc_0022FB4F: ;
    if (CMP_EQ(esi, ebx)) goto loc_0022FB7E; /* je: equal / zero */

loc_0022FB53: ;
    esi = edi;
    eax = esp + 0x1D8;
    PUSH32(esp, 0); sub_0022F190(); /* call 0x0022F190 */

loc_0022FB61: ;
    ebp = MEM32(esp + 0x10);
    esi = ebp;
    eax = edi;
    PUSH32(esp, 0); sub_0022F190(); /* call 0x0022F190 */

loc_0022FB6E: ;
    esi = esp + 0x1D8;
    eax = ebp;
    PUSH32(esp, 0); sub_0022F190(); /* call 0x0022F190 */

loc_0022FB7C: ;
    esi = ebp;

loc_0022FB7E: ;
    esi = esi + 0x94;
    MEM32(esp + 0x10) = esi;
    esi = edi;
    ebp = ebx;
    eax = esp + 0xB0;
    ebx = ebx + 0x94;
    MEM32(esp + 0x18) = esi;
    edi = edi + 0x94;
    PUSH32(esp, 0); sub_0022F190(); /* call 0x0022F190 */

loc_0022FBA8: ;
    eax = MEM32(esp + 0x18);
    esi = ebp;
    PUSH32(esp, 0); sub_0022F190(); /* call 0x0022F190 */

loc_0022FBB3: ;
    esi = esp + 0xB0;
    eax = ebp;
    PUSH32(esp, 0); sub_0022F190(); /* call 0x0022F190 */

loc_0022FBC1: ;
    esi = MEM32(esp + 0x10);
    ebp = MEM32(esp + 0x434);
    goto loc_0022FA10;

loc_0022FBD1: ;
    eax = eax - 0x94;
    (void)0; /* cmp ebx, ebp - flags set for next jcc */
    MEM32(esp + 0x14) = eax;
    if (CMP_NE(ebx, ebp)) goto loc_0022FC54; /* jne: not equal / not zero */

loc_0022FBDE: ;
    edi = edi - 0x94;
    if (CMP_EQ(eax, edi)) goto loc_0022FC13; /* je: equal / zero */

loc_0022FBE8: ;
    esi = eax;
    eax = esp + 0x144;
    PUSH32(esp, 0); sub_0022F190(); /* call 0x0022F190 */

loc_0022FBF6: ;
    eax = MEM32(esp + 0x14);
    esi = edi;
    PUSH32(esp, 0); sub_0022F190(); /* call 0x0022F190 */

loc_0022FC01: ;
    esi = esp + 0x144;
    eax = edi;
    PUSH32(esp, 0); sub_0022F190(); /* call 0x0022F190 */

loc_0022FC0F: ;
    esi = MEM32(esp + 0x10);

loc_0022FC13: ;
    esi = esi - 0x94;
    MEM32(esp + 0x10) = esi;
    esi = edi;
    eax = esp + 0x26C;
    PUSH32(esp, 0); sub_0022F190(); /* call 0x0022F190 */

loc_0022FC2B: ;
    ebp = MEM32(esp + 0x10);
    esi = ebp;
    eax = edi;
    PUSH32(esp, 0); sub_0022F190(); /* call 0x0022F190 */

loc_0022FC38: ;
    esi = esp + 0x26C;
    eax = ebp;
    PUSH32(esp, 0); sub_0022F190(); /* call 0x0022F190 */

loc_0022FC46: ;
    esi = ebp;
    ebp = MEM32(esp + 0x434);
    goto loc_0022FA10;

loc_0022FC54: ;
    esi = ebx;
    eax = esp + 0x394;
    MEM32(esp + 0x18) = esi;
    ebx = ebx + 0x94;
    PUSH32(esp, 0); sub_0022F190(); /* call 0x0022F190 */

loc_0022FC6C: ;
    ebp = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x18);
    esi = ebp;
    PUSH32(esp, 0); sub_0022F190(); /* call 0x0022F190 */

loc_0022FC7B: ;
    esi = esp + 0x394;
    eax = ebp;
    PUSH32(esp, 0); sub_0022F190(); /* call 0x0022F190 */

loc_0022FC89: ;
    esi = MEM32(esp + 0x10);
    ebp = MEM32(esp + 0x434);
    goto loc_0022FA10;

}

/**
 * sub_0022FCB0
 * Original: 0x0022FCB0 - 0x0022FD62 (178 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022FCB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022FCB0: ;
    esp = esp - 0x94;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xA0);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xA0);
    ebx = ebx - ebp;
    eax = 0xDD67C8A7u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ebx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + ebx;
    edx = (uint32_t)((int32_t)edx >> 7);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    (void)0; /* cmp eax, 1 - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_LE(eax, 1)) goto loc_0022FD57; /* jle: less or equal (signed <=) */

loc_0022FCE2: ;
    edi = ebx + ebp + -148;
    esi = edi;
    eax = esp + 0x10;
    PUSH32(esp, 0); sub_0022F190(); /* call 0x0022F190 */

loc_0022FCF4: ;
    esi = ebp;
    eax = edi;
    PUSH32(esp, 0); sub_0022F190(); /* call 0x0022F190 */

loc_0022FCFD: ;
    ecx = ebx + -148;
    eax = 0xDD67C8A7u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + ecx;
    edx = (uint32_t)((int32_t)edx >> 7);
    edi = edx;
    esp = esp - 0x94;
    edi = edi >> 0x1F;
    esi = esp + 0xA4;
    eax = esp;
    edi = edi + edx;
    PUSH32(esp, 0); sub_0022F190(); /* call 0x0022F190 */

loc_0022FD2A: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_002302C0(); /* call 0x002302C0 */

loc_0022FD33: ;
    ebx = ebx - 0x94;
    eax = 0xDD67C8A7u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ebx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + ebx;
    edx = (uint32_t)((int32_t)edx >> 7);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    esp = esp + 0xA0;
    if (CMP_G(eax, 1)) goto loc_0022FCE2; /* jg: greater (signed >) */

loc_0022FD57: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x94;
    esp += 4; return; /* ret */

}

/**
 * sub_0022FD70
 * Original: 0x0022FD70 - 0x0022FE20 (176 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022FD70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022FD70: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    if (CMP_EQ(ebx, ebp)) goto loc_0022FE1D; /* je: equal / zero */

loc_0022FD82: ;
    PUSH32(esp, esi);
    esi = ebx + 0x94;
    if (CMP_EQ(esi, ebp)) goto loc_0022FE1C; /* je: equal / zero */

loc_0022FD91: ;
    PUSH32(esp, edi);

loc_0022FD92: ;
    edx = MEM32(esi + 0x84);
    ecx = MEM32(ebx + 0x84);
    (void)0; /* cmp edx, ecx - flags set for next jcc */
    eax = esi + 0x84;
    if (CMP_L(edx, ecx)) goto loc_0022FDCB; /* jl: less (signed <) */

loc_0022FDA8: ;
    if (CMP_NE(edx, ecx)) goto loc_0022FDB8; /* jne: not equal / not zero */

loc_0022FDAA: ;
    ecx = MEM32(esi + 0x88);
    if (CMP_L(ecx, MEM32(ebx + 0x88))) goto loc_0022FDCB; /* jl: less (signed <) */

loc_0022FDB8: ;
    (void)0; /* cmp ebx, esi - flags set for next jcc */
    eax = esi + 0x94;
    if (CMP_EQ(ebx, esi)) goto loc_0022FE0D; /* je: equal / zero */

loc_0022FDC2: ;
    if (CMP_EQ(esi, eax)) goto loc_0022FE0D; /* je: equal / zero */

loc_0022FDC6: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    goto loc_0022FE05;

loc_0022FDCB: ;
    edi = esi;
    /* nop */

loc_0022FDD0: ;
    ecx = MEM32(eax + -148);
    eax = eax - 0x94;
    if (CMP_L(edx, ecx)) goto loc_0022FDF4; /* jl: less (signed <) */

loc_0022FDDF: ;
    if (CMP_NE(edx, ecx)) goto loc_0022FDEC; /* jne: not equal / not zero */

loc_0022FDE1: ;
    ecx = MEM32(esi + 0x88);
    if (CMP_L(ecx, MEM32(eax + 4))) goto loc_0022FDF4; /* jl: less (signed <) */

loc_0022FDEC: ;
    edi = eax + -132;
    goto loc_0022FDD0;

loc_0022FDF4: ;
    if (CMP_EQ(edi, esi)) goto loc_0022FE0D; /* je: equal / zero */

loc_0022FDF8: ;
    eax = esi + 0x94;
    if (CMP_EQ(esi, eax)) goto loc_0022FE0D; /* je: equal / zero */

loc_0022FE02: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, edi);

loc_0022FE05: ;
    PUSH32(esp, 0); sub_00230410(); /* call 0x00230410 */

loc_0022FE0A: ;
    esp = esp + 0xC;

loc_0022FE0D: ;
    esi = esi + 0x94;
    if (CMP_NE(esi, ebp)) goto loc_0022FD92; /* jne: not equal / not zero */

loc_0022FE1B: ;
    POP32(esp, edi);

loc_0022FE1C: ;
    POP32(esp, esi);

loc_0022FE1D: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0022FE20
 * Original: 0x0022FE20 - 0x0022FE76 (86 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022FE20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0022FE20: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47F380);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    edi = MEM32(ebp + 0xC);
    ebx = ecx;
    esi = MEM32(ebp + 8);
    MEM32(ebp + -4) = 0;

loc_0022FE50: ;
    if (CMP_EQ(esi, ebx)) { sub_0022FE76(); return; } /* je: equal / zero */

loc_0022FE54: ;
    MEM32(ebp + -20) = edi;
    if (TEST_Z(edi, edi)) goto loc_0022FE62; /* je: equal / zero */

loc_0022FE5B: ;
    eax = edi;
    PUSH32(esp, 0); sub_0022F190(); /* call 0x0022F190 */

loc_0022FE62: ;
    edi = edi + 0x94;
    MEM32(ebp + 0xC) = edi;
    esi = esi + 0x94;
    MEM32(ebp + 8) = esi;
    goto loc_0022FE50;

}

/**
 * sub_0022FEA0
 * Original: 0x0022FEA0 - 0x0022FEEB (75 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022FEA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0022FEA0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47F2D0);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    edi = MEM32(ebp + 0x10);
    MEM32(ebp + -4) = 0;
    ebx = MEM32(ebp + 0xC);
    esi = MEM32(ebp + 8);
    /* nop */

loc_0022FED0: ;
    if (CMP_EQ(esi, ebx)) { sub_0022FEEB(); return; } /* je: equal / zero */

loc_0022FED4: ;
    ecx = esi;
    eax = edi;
    PUSH32(esp, 0); sub_001CD940(); /* call 0x001CD940 */

loc_0022FEDD: ;
    edi = edi + 0x18;
    MEM32(ebp + 0x10) = edi;
    esi = esi + 0x18;
    MEM32(ebp + 8) = esi;
    goto loc_0022FED0;

}

/**
 * sub_0022FF10
 * Original: 0x0022FF10 - 0x0022FF5A (74 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022FF10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0022FF10: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47FE30);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    esi = MEM32(ebp + 0xC);
    ebx = ecx;
    edi = MEM32(ebp + 8);
    MEM32(ebp + -20) = esi;
    MEM32(ebp + -4) = 0;

loc_0022FF43: ;
    if (CMP_EQ(edi, ebx)) { sub_0022FF5A(); return; } /* je: equal / zero */

loc_0022FF47: ;
    PUSH32(esp, 0); sub_0022F890(); /* call 0x0022F890 */

loc_0022FF4C: ;
    esi = esi + 0x24;
    MEM32(ebp + 0xC) = esi;
    edi = edi + 0x24;
    MEM32(ebp + 8) = edi;
    goto loc_0022FF43;

}

/**
 * sub_0022FFA0
 * Original: 0x0022FFA0 - 0x0022FFEA (74 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022FFA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0022FFA0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47FE20);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    esi = MEM32(ebp + 0xC);
    ebx = ecx;
    edi = MEM32(ebp + 8);
    MEM32(ebp + -20) = esi;
    MEM32(ebp + -4) = 0;

loc_0022FFD3: ;
    if (CMP_EQ(edi, ebx)) { sub_0022FFEA(); return; } /* je: equal / zero */

loc_0022FFD7: ;
    PUSH32(esp, 0); sub_0022F8C0(); /* call 0x0022F8C0 */

loc_0022FFDC: ;
    esi = esi + 0x1C;
    MEM32(ebp + 0xC) = esi;
    edi = edi + 0x1C;
    MEM32(ebp + 8) = edi;
    goto loc_0022FFD3;

}

/**
 * sub_00230030
 * Original: 0x00230030 - 0x0023007B (75 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00230030(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00230030: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47F2C0);
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

loc_00230060: ;
    if (CMP_EQ(esi, ebx)) { sub_0023007B(); return; } /* je: equal / zero */

loc_00230064: ;
    ecx = esi;
    eax = edi;
    PUSH32(esp, 0); sub_001CD940(); /* call 0x001CD940 */

loc_0023006D: ;
    edi = edi + 0x18;
    MEM32(ebp + 0xC) = edi;
    esi = esi + 0x18;
    MEM32(ebp + 8) = esi;
    goto loc_00230060;

}

/**
 * sub_002300A0
 * Original: 0x002300A0 - 0x002300DB (59 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002300A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002300A0: ;
    if (CMP_EQ(ecx, edx)) goto loc_002300DA; /* je: equal / zero */

loc_002300A4: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);

loc_002300A7: ;
    esi = ecx;
    ebx = MEM32(esi);
    edi = eax;
    MEM32(edi) = ebx;
    ebx = MEM32(esi + 4);
    MEM32(edi + 4) = ebx;
    ebx = MEM32(esi + 8);
    MEM32(edi + 8) = ebx;
    ebx = MEM32(esi + 0xC);
    MEM32(edi + 0xC) = ebx;
    ebx = MEM32(esi + 0x10);
    MEM32(edi + 0x10) = ebx;
    esi = MEM32(esi + 0x14);
    ecx = ecx + 0x18;
    eax = eax + 0x18;
    (void)0; /* cmp ecx, edx - flags set for next jcc */
    MEM32(edi + 0x14) = esi;
    if (CMP_NE(ecx, edx)) goto loc_002300A7; /* jne: not equal / not zero */

loc_002300D7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_002300DA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002300E0
 * Original: 0x002300E0 - 0x0023016D (141 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002300E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002300E0: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = ebp;
    esi = esi - ecx;
    eax = 0xDD67C8A7u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)esi;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + esi;
    edx = (uint32_t)((int32_t)edx >> 7);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    if (CMP_LE(eax, 0x28)) { sub_0023016D(); return; } /* jle: less or equal (signed <=) */

loc_00230106: ;
    eax++;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 7;
    eax = eax + edx;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    eax = (uint32_t)((int32_t)eax >> 3);
    edi = eax;
    esi = eax;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x128);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x94);
    edx = edi + ecx;
    eax = esi + ecx;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, 0); sub_00230230(); /* call 0x00230230 */

loc_00230134: ;
    ebx = MEM32(esp + 0x24);
    ecx = esi + ebx;
    PUSH32(esp, ecx);
    eax = ebx;
    eax = eax - esi;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00230230(); /* call 0x00230230 */

loc_00230147: ;
    ecx = MEM32(esp + 0x34);
    PUSH32(esp, ecx);
    eax = ecx;
    ebp = ebp - esi;
    eax = eax - edi;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00230230(); /* call 0x00230230 */

loc_00230159: ;
    eax = MEM32(esp + 0x38);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00230230(); /* call 0x00230230 */

loc_00230165: ;
    esp = esp + 0x30;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00230180
 * Original: 0x00230180 - 0x002301C0 (64 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00230180(void)
{

loc_00230180: ;
    esp = esp - 0x94;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xA4);
    esi = edi;
    eax = esp + 0xC;
    PUSH32(esp, 0); sub_0022F190(); /* call 0x0022F190 */

loc_0023019B: ;
    ebx = MEM32(esp + 0xA8);
    esi = ebx;
    eax = edi;
    PUSH32(esp, 0); sub_0022F190(); /* call 0x0022F190 */

loc_002301AB: ;
    esi = esp + 0xC;
    eax = ebx;
    PUSH32(esp, 0); sub_0022F190(); /* call 0x0022F190 */

loc_002301B6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x94;
    esp += 4; return; /* ret */

}

/**
 * sub_002301C0
 * Original: 0x002301C0 - 0x0023022B (107 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002301C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002301C0: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    ecx = ecx - ebp;
    eax = 0xDD67C8A7u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + ecx;
    edx = (uint32_t)((int32_t)edx >> 7);
    ebx = edx;
    ebx = ebx >> 0x1F;
    ebx = ebx + edx;
    eax = ebx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, esi);
    eax = eax - edx;
    PUSH32(esp, edi);
    edi = eax;
    edi = (uint32_t)((int32_t)edi >> 1);
    if (CMP_LE(edi & edi, 0)) goto loc_00230226; /* jle: less or equal (signed <=) */

loc_002301EE: ;
    esi = edi;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x94);
    esi = esi + ebp;
    goto loc_00230200;

    /* nop */

loc_00230200: ;
    esp = esp - 0x94;
    esi = esi - 0x94;
    eax = esp;
    edi--;
    PUSH32(esp, 0); sub_0022F190(); /* call 0x0022F190 */

loc_00230214: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_002302C0(); /* call 0x002302C0 */

loc_0023021C: ;
    esp = esp + 0xA0;
    if (CMP_G(edi & edi, 0)) goto loc_00230200; /* jg: greater (signed >) */

loc_00230226: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00230230
 * Original: 0x00230230 - 0x002302BF (143 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00230230(void)
{
    int _flags = 0; /* fallback flag var */

loc_00230230: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ecx = MEM32(esi + 0x84);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 0x84);
    if (CMP_L(ecx, eax)) goto loc_00230264; /* jl: less (signed <) */

loc_0023024A: ;
    if (CMP_NE(ecx, eax)) goto loc_0023025A; /* jne: not equal / not zero */

loc_0023024C: ;
    eax = MEM32(esi + 0x88);
    if (CMP_L(eax, MEM32(edi + 0x88))) goto loc_00230264; /* jl: less (signed <) */

loc_0023025A: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00230180(); /* call 0x00230180 */

loc_00230261: ;
    esp = esp + 8;

loc_00230264: ;
    edx = MEM32(esp + 0x14);
    eax = MEM32(esi + 0x84);
    ecx = MEM32(edx + 0x84);
    if (CMP_L(ecx, eax)) goto loc_00230292; /* jl: less (signed <) */

loc_00230278: ;
    if (CMP_NE(ecx, eax)) goto loc_00230288; /* jne: not equal / not zero */

loc_0023027A: ;
    ecx = MEM32(edx + 0x88);
    if (CMP_L(ecx, MEM32(esi + 0x88))) goto loc_00230292; /* jl: less (signed <) */

loc_00230288: ;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00230180(); /* call 0x00230180 */

loc_0023028F: ;
    esp = esp + 8;

loc_00230292: ;
    eax = MEM32(edi + 0x84);
    ecx = MEM32(esi + 0x84);
    if (CMP_L(ecx, eax)) goto loc_002302BC; /* jl: less (signed <) */

loc_002302A2: ;
    if (CMP_NE(ecx, eax)) goto loc_002302B2; /* jne: not equal / not zero */

loc_002302A4: ;
    edx = MEM32(esi + 0x88);
    if (CMP_L(edx, MEM32(edi + 0x88))) goto loc_002302BC; /* jl: less (signed <) */

loc_002302B2: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00230180(); /* call 0x00230180 */

loc_002302B9: ;
    esp = esp + 8;

loc_002302BC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002302C0
 * Original: 0x002302C0 - 0x00230384 (196 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002302C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002302C0: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ebp + ebp + 2;
    (void)0; /* cmp edi, eax - flags set for next jcc */
    MEM32(esp + 0x18) = ebp;
    if (CMP_GE(edi, eax)) goto loc_00230330; /* jge: greater or equal (signed >=) */

loc_002302DC: ;
    /* nop */

loc_002302E0: ;
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x94);
    ecx = MEM32(eax + ebx + 0x84);
    edx = MEM32(eax + ebx + -16);
    eax = eax + ebx;
    if (CMP_L(ecx, edx)) goto loc_00230307; /* jl: less (signed <) */

loc_002302F9: ;
    if (CMP_NE(ecx, edx)) goto loc_00230306; /* jne: not equal / not zero */

loc_002302FB: ;
    ecx = MEM32(eax + 0x88);
    if (CMP_L(ecx, MEM32(eax + -12))) goto loc_00230307; /* jl: less (signed <) */

loc_00230306: ;
    edi--;

loc_00230307: ;
    esi = edi;
    eax = ebp;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x94);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x94);
    esi = esi + ebx;
    eax = eax + ebx;
    PUSH32(esp, 0); sub_0022F190(); /* call 0x0022F190 */

loc_00230320: ;
    eax = MEM32(esp + 0x1C);
    ebp = edi;
    edi = edi + edi + 2;
    if (CMP_L(edi, eax)) goto loc_002302E0; /* jl: less (signed <) */

loc_0023032E: ;
    (void)0; /* cmp edi, eax - flags set for next jcc */

loc_00230330: ;
    if (CMP_NE(edi, eax)) goto loc_00230355; /* jne: not equal / not zero */

loc_00230332: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x94);
    ebp = (uint32_t)((int32_t)ebp * (int32_t)0x94);
    ebp = ebp + ebx;
    esi = eax + ebx + -148;
    eax = ebp;
    PUSH32(esp, 0); sub_0022F190(); /* call 0x0022F190 */

loc_0023034E: ;
    edx = MEM32(esp + 0x1C);
    ebp = edx + -1;

loc_00230355: ;
    esp = esp - 0x94;
    esi = esp + 0xB4;
    eax = esp;
    PUSH32(esp, 0); sub_0022F190(); /* call 0x0022F190 */

loc_00230369: ;
    eax = MEM32(esp + 0xAC);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = ebp;
    PUSH32(esp, 0); sub_00230390(); /* call 0x00230390 */

loc_00230379: ;
    esp = esp + 0x9C;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00230390
 * Original: 0x00230390 - 0x00230410 (128 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00230390(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00230390: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    eax = ecx + -1;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(esp + 0x14);
    edi = (uint32_t)((int32_t)edi >> 1);
    if (CMP_GE(eax, ecx)) goto loc_002303F9; /* jge: greater or equal (signed >=) */

loc_002303A9: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xA0);

loc_002303B1: ;
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x94);
    esi = eax + ebx;
    eax = MEM32(esi + 0x84);
    if (CMP_L(eax, ebp)) goto loc_002303F8; /* jl: less (signed <) */

loc_002303C6: ;
    if (CMP_NE(eax, ebp)) goto loc_002303D7; /* jne: not equal / not zero */

loc_002303C8: ;
    edx = MEM32(esp + 0xA4);
    if (CMP_L(MEM32(esi + 0x88), edx)) goto loc_002303F8; /* jl: less (signed <) */

loc_002303D7: ;
    eax = ecx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x94);
    eax = eax + ebx;
    PUSH32(esp, 0); sub_0022F190(); /* call 0x0022F190 */

loc_002303E6: ;
    eax = edi + -1;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)((int32_t)eax >> 1);
    ecx = edi;
    edi = eax;
    if (CMP_L(MEM32(esp + 0x18), ecx)) goto loc_002303B1; /* jl: less (signed <) */

loc_002303F8: ;
    POP32(esp, ebp);

loc_002303F9: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x94);
    ecx = ecx + ebx;
    eax = ecx;
    esi = esp + 0x18;
    PUSH32(esp, 0); sub_0022F190(); /* call 0x0022F190 */

loc_0023040C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00230410
 * Original: 0x00230410 - 0x00230555 (325 bytes, 107 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00230410(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00230410: ;
    ecx = MEM32(esp + 8);
    esp = esp - 0xA8;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xB0);
    ecx = ecx - ebx;
    eax = 0xDD67C8A7u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + ecx;
    ecx = MEM32(esp + 0xB8);
    edx = (uint32_t)((int32_t)edx >> 7);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = edx;
    ecx = ecx - ebx;
    edi = edi >> 0x1F;
    edi = edi + edx;
    eax = 0xDD67C8A7u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + ecx;
    edx = (uint32_t)((int32_t)edx >> 7);
    ecx = edx;
    ecx = ecx >> 0x1F;
    ecx = ecx + edx;
    (void)0; /* test edi, edi - flags set for next jcc */
    eax = ecx;
    esi = edi;
    if (TEST_Z(edi, edi)) goto loc_0023046B; /* je: equal / zero */

loc_0023045D: ;
    /* nop */

loc_00230460: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    eax = esi;
    (void)0; /* test edx, edx - flags set for next jcc */
    esi = edx;
    if (TEST_NZ(edx, edx)) goto loc_00230460; /* jne: not equal / not zero */

loc_0023046B: ;
    if (CMP_GE(eax, ecx)) goto loc_0023054B; /* jge: greater or equal (signed >=) */

loc_00230473: ;
    if (CMP_LE(eax & eax, 0)) goto loc_0023054B; /* jle: less or equal (signed <=) */

loc_0023047B: ;
    PUSH32(esp, ebp);
    ecx = edi;
    ebp = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x94);
    ebp = (uint32_t)((int32_t)ebp * (int32_t)0x94);
    MEM32(esp + 0x10) = ecx;
    ebp = ebp + ebx;
    MEM32(esp + 0x14) = eax;

loc_00230496: ;
    esi = ebp;
    eax = esp + 0x24;
    ebx = ebp;
    PUSH32(esp, 0); sub_0022F190(); /* call 0x0022F190 */

loc_002304A3: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC4);
    eax = eax + ebp;
    if (CMP_NE(eax, ecx)) goto loc_002304BD; /* jne: not equal / not zero */

loc_002304B4: ;
    eax = esp + 0xBC;
    goto loc_002304C5;

loc_002304BD: ;
    MEM32(esp + 0x18) = eax;
    eax = esp + 0x18;

loc_002304C5: ;
    esi = MEM32(eax);
    if (CMP_EQ(esi, ebp)) goto loc_0023052A; /* je: equal / zero */

loc_002304CB: ;
    goto loc_002304D0;

    /* nop */

loc_002304D0: ;
    eax = ebx;
    PUSH32(esp, 0); sub_0022F190(); /* call 0x0022F190 */

loc_002304D7: ;
    ecx = MEM32(esp + 0xC4);
    ecx = ecx - esi;
    eax = 0xDD67C8A7u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + ecx;
    edx = (uint32_t)((int32_t)edx >> 7);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    (void)0; /* cmp edi, eax - flags set for next jcc */
    ebx = esi;
    if (CMP_GE(edi, eax)) goto loc_00230509; /* jge: greater or equal (signed >=) */

loc_002304F9: ;
    ecx = MEM32(esp + 0x10);
    ecx = ecx + esi;
    MEM32(esp + 0x20) = ecx;
    eax = esp + 0x20;
    goto loc_00230524;

loc_00230509: ;
    edx = edi;
    edx = edx - eax;
    eax = MEM32(esp + 0xBC);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x94);
    edx = edx + eax;
    MEM32(esp + 0x1C) = edx;
    eax = esp + 0x1C;

loc_00230524: ;
    esi = MEM32(eax);
    if (CMP_NE(esi, ebp)) goto loc_002304D0; /* jne: not equal / not zero */

loc_0023052A: ;
    esi = esp + 0x24;
    eax = ebx;
    PUSH32(esp, 0); sub_0022F190(); /* call 0x0022F190 */

loc_00230535: ;
    eax = MEM32(esp + 0x14);
    ebp = ebp - 0x94;
    eax--;
    MEM32(esp + 0x14) = eax;
    if ((eax != 0)) goto loc_00230496; /* jne: not equal / not zero */

loc_0023054A: ;
    POP32(esp, ebp);

loc_0023054B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0xA8;
    esp += 4; return; /* ret */

}

/**
 * sub_00230560
 * Original: 0x00230560 - 0x0023057A (26 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00230560(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00230560: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 8);
    if (CMP_NE(eax, 0xFFFFFFFFu)) { sub_0023057A(); return; } /* jne: not equal / not zero */

loc_0023056C: ;
    eax = 0; /* xor self */
    eax = MEM32(eax * 4 + 0x8470FC);
    esi = MEM32(eax + 8);
    g_seh_ebp = ebp; sub_00230590(); return; /* tail jmp 0x00230590 */

}

/**
 * sub_002305F0
 * Original: 0x002305F0 - 0x0023063E (78 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002305F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002305F0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 8);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esi) = 0x5F9D20;
    if (TEST_Z(ecx, ecx)) goto loc_00230608; /* je: equal / zero */

loc_00230601: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00230608: ;
    eax = MEM32(esi + 0x10);
    if (TEST_Z(eax, eax)) goto loc_00230620; /* je: equal / zero */

loc_0023060F: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    MEM32(esp + 8) = eax;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0023061D: ;
    esp = esp + 4;

loc_00230620: ;
    MEM32(esi + 0x10) = 0;
    MEM32(esi + 0x14) = 0;
    MEM32(esi + 0x18) = 0;
    MEM32(esi) = 0x5F7704;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00230640
 * Original: 0x00230640 - 0x0023066A (42 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00230640(void)
{
    int _flags = 0; /* fallback flag var */

loc_00230640: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0); sub_002305F0(); /* call 0x002305F0 */

loc_00230648: ;
    if (TEST_Z(MEM8(esp + 8), 1)) goto loc_00230664; /* je: equal / zero */

loc_0023064F: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(esp + 8) = esi;
    if (TEST_Z(esi, esi)) goto loc_00230664; /* je: equal / zero */

loc_00230657: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00230661: ;
    esp = esp + 4;

loc_00230664: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00230670
 * Original: 0x00230670 - 0x0023068A (26 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00230670(void)
{

loc_00230670: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0xC);
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_0003C1E0(); /* call 0x0003C1E0 */

loc_0023067B: ;
    eax = MEM32(eax + 0x10);
    ecx = MEM32(eax + esi * 4);
    eax = eax + esi * 4;
    MEM8(ecx + 0x30) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00230690
 * Original: 0x00230690 - 0x002306BD (45 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00230690(void)
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

loc_00230690: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 8;
    ecx = edi;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023069E: ;
    fp_push(MEMF(esi)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp >= 0) /* fcompi */) { sub_002306BD(); return; } /* jae: above or equal (unsigned >=) */

loc_002306A8: ;
    ecx = edi;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_002306AF: ;
    fp_push(MEMF(esi + 4)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) { sub_002306BD(); return; } /* ja: above (unsigned >) */

loc_002306B8: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_002306D0
 * Original: 0x002306D0 - 0x002307A2 (210 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002306D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002306D0: ;
    xmm0 = MEMF(esp + 4); /* movss */
    /* ucomiss xmm0, MEMF(0x648D14) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = ecx;
    if (1 /* jp after test - parity */) goto loc_0023079E; /* jp: parity */

loc_002306EA: ;
    eax = MEM32(ebp + 0x8C);
    if (TEST_NZ(eax, eax)) goto loc_00230782; /* jne: not equal / not zero */

loc_002306F8: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0); sub_001F6EA0(); /* call 0x001F6EA0 */

loc_00230700: ;
    esi = eax;
    esp = esp + 4;
    if (TEST_Z(esi, esi)) goto loc_00230736; /* je: equal / zero */

loc_00230709: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x7F2);
    PUSH32(esp, 0x600444);
    edi = ebp + 8;
    PUSH32(esp, 0); sub_002AF210(); /* call 0x002AF210 */

loc_0023071C: ;
    esp = esp + 8;
    MEM32(esi) = eax;
    MEM8(esi + 8) = 0;
    MEM32(esi + 4) = 0;
    MEM32(esi + 0xC) = 0x100000;
    POP32(esp, edi);
    goto loc_00230738;

loc_00230736: ;
    esi = 0; /* xor self */

loc_00230738: ;
    MEM32(ebp + 0x8C) = esi;
    eax = MEM32(esi + 4);
    if (TEST_NZ(eax, eax)) goto loc_0023074F; /* jne: not equal / not zero */

loc_00230745: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00253A10(); /* call 0x00253A10 */

loc_0023074B: ;
    if (TEST_NZ(eax, eax)) goto loc_00230781; /* jne: not equal / not zero */

loc_0023074F: ;
    eax = MEM32(esi + 4);
    MEM8(esi + 8) = 1;
    MEM32(eax + 0x2C) = 0;
    PUSH32(esp, 0); sub_00252A80(); /* call 0x00252A80 */

loc_00230762: ;
    ecx = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x253BC0);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = 0x253C10;
    PUSH32(esp, 0); sub_002520D0(); /* call 0x002520D0 */

loc_0023077E: ;
    esp = esp + 0x18;

loc_00230781: ;
    POP32(esp, esi);

loc_00230782: ;
    eax = 0x75E4C0;
    ecx = 0x75E4C8;
    PUSH32(esp, 0); sub_00252CB0(); /* call 0x00252CB0 */

loc_00230791: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00222B10(); /* call 0x00222B10 */

loc_0023079B: ;
    esp = esp + 4;

loc_0023079E: ;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002307B0
 * Original: 0x002307B0 - 0x002307FF (79 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002307B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002307B0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ebp = 0; /* xor self */
    MEM32(esi + 4) = ebp;
    PUSH32(esp, edi);
    MEM32(esi) = 0x5F9D20;
    PUSH32(esp, 0); sub_002272E0(); /* call 0x002272E0 */

loc_002307CF: ;
    esp = esp + 0x10;
    MEM32(esi + 8) = eax;
    (void)0; /* cmp edi, ebp - flags set for next jcc */
    POP32(esp, edi);
    MEM32(esi + 0x10) = ebp;
    MEM32(esi + 0x14) = ebp;
    MEM32(esi + 0x18) = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_EQ(edi, ebp)) goto loc_002307FA; /* je: equal / zero */

loc_002307E5: ;
    eax = MEM32(esp + 8);
    MEM32(eax) = MEM32(eax) - 1;
    if ((MEM32(eax) != 0)) goto loc_002307FA; /* jne: not equal / not zero */

loc_002307ED: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_002307F7: ;
    esp = esp + 4;

loc_002307FA: ;
    eax = esi;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00230800
 * Original: 0x00230800 - 0x00230808 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00230800(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00230800: ;
    ecx = MEM32(ecx + 8);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 8)); return; /* indirect tail jmp */

}

/**
 * sub_002308A0
 * Original: 0x002308A0 - 0x00230A1B (379 bytes, 115 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002308A0(void)
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

loc_002308A0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, edi);
    esi = ecx;
    if (CMP_NE(eax, ebx)) goto loc_002309D0; /* jne: not equal / not zero */

loc_002308B3: ;
    if (CMP_NE(MEM8(0x7819D5), LO8(ebx))) goto loc_002308C4; /* jne: not equal / not zero */

loc_002308BB: ;
    if (CMP_NE(MEM32(0x7FA1F8), 0x46)) goto loc_002308CB; /* jne: not equal / not zero */

loc_002308C4: ;
    edi = 0xC43A605;
    goto loc_002308D7;

loc_002308CB: ;
    eax = 0x5F6C14;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_002308D5: ;
    edi = eax;

loc_002308D7: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x5FA0F8);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00206470(); /* call 0x00206470 */

loc_002308E7: ;
    esp = esp + 0xC;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(esi + 0x1C) = eax;
    if (CMP_NE(eax, ebx)) goto loc_00230907; /* jne: not equal / not zero */

loc_002308F1: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x5FA0F8);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00206470(); /* call 0x00206470 */

loc_00230901: ;
    esp = esp + 0xC;
    MEM32(esi + 0x1C) = eax;

loc_00230907: ;
    eax = MEM32(esi + 0x1C);
    eax = MEM32(eax + 0x10);
    if (CMP_EQ(eax, ebx)) goto loc_00230937; /* je: equal / zero */

loc_00230911: ;
    eax = eax + 4;
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00036760(); /* call 0x00036760 */

loc_0023091B: ;
    if (CMP_EQ(eax, ebx)) goto loc_00230937; /* je: equal / zero */

loc_0023091F: ;
    MEM32(eax + 0xF4) = 1;
    MEM16(eax + 0x1DA) = LO16(ebx);
    MEM16(eax + 0x1D8) = LO16(ebx);

loc_00230937: ;
    ecx = MEM32(esi + 0x1C);
    eax = MEM32(ecx + 0x10);
    if (CMP_EQ(eax, ebx)) goto loc_00230953; /* je: equal / zero */

loc_00230941: ;
    PUSH32(esp, 0x40000000);
    eax = eax + 4;
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00036830(); /* call 0x00036830 */

loc_00230950: ;
    esp = esp + 4;

loc_00230953: ;
    (void)0; /* cmp MEM8(0x7FA23C), LO8(ebx) - flags set for next jcc */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esi + 0x20) = xmm0; /* movss */
    xmm1 = xmm0; /* movaps */
    if (CMP_NE(MEM8(0x7FA23C), LO8(ebx))) goto loc_0023096E; /* jne: not equal / not zero */

loc_00230966: ;
    xmm1 = MEMF(0x7F9F48); /* movss */

loc_0023096E: ;
    (void)0; /* cmp MEM32(0x75E500), ebx - flags set for next jcc */
    MEMF(esp + 0x14) = xmm1; /* movss */
    if (CMP_NE(MEM32(0x75E500), ebx)) goto loc_00230994; /* jne: not equal / not zero */

loc_0023097C: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648E64)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_002309D3; /* ja: above (unsigned >) */

loc_00230994: ;
    ecx = MEM32(0x847024);
    eax = MEM32(ecx + 0x44);
    eax = MEM32(eax + 0xC);
    edx = MEM32(ecx + 0x40);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    eax = eax + 4;
    eax = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 4);
    PUSH32(esp, edx);
    edx = edx | 0xFFFFFFFFu;
    eax = eax | 0xFFFFFFFFu;
    ecx = 0xAD0;
    MEMF(0x75E504) = xmm1; /* movss */
    MEM32(0x75E500) = ebx;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_002309D0: ;
    xmm0 = 0.0f; /* xorps self = zero */

loc_002309D3: ;
    eax = MEM32(esi + 0x1C);
    eax = MEM32(eax + 0x10);
    if (CMP_EQ(eax, ebx)) goto loc_002309F3; /* je: equal / zero */

loc_002309DD: ;
    eax = eax + 4;
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00036760(); /* call 0x00036760 */

loc_002309E7: ;
    if (CMP_EQ(eax, ebx)) goto loc_002309F3; /* je: equal / zero */

loc_002309EB: ;
    xmm0 = MEMF(eax + 0xDC); /* movss */

loc_002309F3: ;
    eax = MEM32(esp + 0x10);
    edx = 0; /* xor self */
    /* comiss xmm0, MEMF(esi + 0x28) - sets EFLAGS */
    ebx = eax;
    if ((xmm0 < MEMF(esi + 0x28))) { sub_00230A1B(); return; } /* jb: below (unsigned <) */

loc_00230A01: ;
    ecx = 0x230A40;
    MEM32(ebx) = ecx;
    esi = 0; /* xor self */
    MEM32(ebx + 4) = edx;
    MEM32(ebx + 8) = esi;
    edi = 0; /* xor self */
    MEM32(ebx + 0xC) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00230A40
 * Original: 0x00230A40 - 0x00230A91 (81 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00230A40(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_00230A40: ;
    xmm0 = MEMF(0x75E4BC); /* movss */
    xmm0 = xmm0 * MEMF(0x7FA218); /* mulss */
    xmm0 = xmm0 + MEMF(ecx + 0x20); /* addss */
    xmm1 = MEMF(0x648D14); /* movss */
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    edx = 0; /* xor self */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    PUSH32(esp, edi);
    MEMF(ecx + 0x20) = xmm0; /* movss */
    ebx = eax;
    if ((xmm0 <= xmm1)) { sub_00230A91(); return; } /* jbe: below or equal (unsigned <=) */

loc_00230A74: ;
    MEMF(ecx + 0x20) = xmm1; /* movss */
    ecx = 0x230AB0;
    MEM32(ebx) = ecx;
    MEM32(ebx + 4) = edx;
    MEM32(ebx + 8) = esi;
    edi = 0; /* xor self */
    MEM32(ebx + 0xC) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00230AB0
 * Original: 0x00230AB0 - 0x00230B03 (83 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00230AB0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00230AB0: ;
    eax = MEM32(esp + 8);
    if (TEST_NZ(eax, eax)) goto loc_00230AC5; /* jne: not equal / not zero */

loc_00230AB8: ;
    xmm0 = MEMF(0x648D18); /* movss */
    MEMF(ecx + 0x24) = xmm0; /* movss */

loc_00230AC5: ;
    SET_LO8(eax, MEM8(ecx + 0x30));
    xmm0 = MEMF(ecx + 0x24); /* movss */
    xmm0 = xmm0 - MEMF(0x7FA218); /* subss */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    edx = 0; /* xor self */
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    eax = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    MEMF(ecx + 0x24) = xmm0; /* movss */
    ebx = eax;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_00230B03(); return; } /* jne: not equal / not zero */

loc_00230AEB: ;
    ecx = 0x230B20;
    MEM32(ebx) = ecx;
    MEM32(ebx + 4) = edx;
    MEM32(ebx + 8) = esi;
    edi = 0; /* xor self */
    MEM32(ebx + 0xC) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00230B20
 * Original: 0x00230B20 - 0x00230BDB (187 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00230B20(void)
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

loc_00230B20: ;
    eax = MEM32(esp + 8);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    if (TEST_NZ(eax, eax)) goto loc_00230BB1; /* jne: not equal / not zero */

loc_00230B31: ;
    SET_LO8(eax, MEM8(0x7FA23C));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = 0.0f; /* xorps self = zero */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00230B45; /* jne: not equal / not zero */

loc_00230B3D: ;
    xmm0 = MEMF(0x7F9F48); /* movss */

loc_00230B45: ;
    ecx = MEM32(0x75E500);
    eax = 1;
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    MEMF(esp + 0x14) = xmm0; /* movss */
    if (CMP_NE(ecx, eax)) goto loc_00230B72; /* jne: not equal / not zero */

loc_00230B5A: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648E64)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_00230BB1; /* ja: above (unsigned >) */

loc_00230B72: ;
    ecx = MEM32(0x847024);
    MEM32(0x75E500) = eax;
    eax = MEM32(ecx + 0x44);
    eax = MEM32(eax + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = eax + 4;
    eax = MEM32(eax);
    PUSH32(esp, eax);
    eax = MEM32(ecx + 0x40);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    edx = edx | 0xFFFFFFFFu;
    eax = eax | 0xFFFFFFFFu;
    ecx = 0xAD1;
    MEMF(0x75E504) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_00230BB1: ;
    eax = MEM32(esp + 0x10);
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esi + 0x20) = xmm0; /* movss */
    ecx = 0x230BE0;
    ebx = eax;
    MEM32(ebx) = ecx;
    edx = 0; /* xor self */
    MEM32(ebx + 4) = edx;
    esi = 0; /* xor self */
    MEM32(ebx + 8) = esi;
    edi = 0; /* xor self */
    MEM32(ebx + 0xC) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00230BE0
 * Original: 0x00230BE0 - 0x00230F05 (805 bytes, 187 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00230BE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00230BE0: ;
    esp = esp - 0x11C;
    eax = MEM32(esp + 0x124);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(esp + 0xC) = edi;
    if (TEST_NZ(eax, eax)) goto loc_00230EE5; /* jne: not equal / not zero */

loc_00230BFE: ;
    eax = MEM32(edi + 0x1C);
    eax = MEM32(eax + 0x10);
    if (TEST_Z(eax, eax)) goto loc_00230EC9; /* je: equal / zero */

loc_00230C0C: ;
    PUSH32(esp, 1);
    esi = eax + 4;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x5FA0B8);
    edx = 0; /* xor self */
    eax = esi;
    MEM32(esp + 0x1C) = esi;
    PUSH32(esp, 0); sub_000367A0(); /* call 0x000367A0 */

loc_00230C28: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_00230C4C; /* je: equal / zero */

loc_00230C2F: ;
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(eax + 0x1BC) = xmm0; /* movss */
    MEMF(eax + 0x1C4) = xmm0; /* movss */
    goto loc_00230EC9;

loc_00230C4C: ;
    PUSH32(esp, ebp);
    ebx = 0; /* xor self */
    eax = esi;
    PUSH32(esp, 0); sub_00035F90(); /* call 0x00035F90 */

loc_00230C56: ;
    edx = 0; /* xor self */
    eax = esi;
    PUSH32(esp, 0); sub_00036760(); /* call 0x00036760 */

loc_00230C5F: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xB1);
    PUSH32(esp, 0x5D4B84);
    PUSH32(esp, 0x200);
    ebx = eax;
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_00230C77: ;
    ebp = eax;
    esp = esp + 0x10;
    if (TEST_Z(ebp, ebp)) goto loc_00230EC8; /* je: equal / zero */

loc_00230C84: ;
    eax = 0; /* xor self */
    ecx = 0x80;
    edi = ebp;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    PUSH32(esp, 0xB8);
    PUSH32(esp, 0x5D4B84);
    edi = 0x5FA0B8;
    PUSH32(esp, 0); sub_002AF210(); /* call 0x002AF210 */

loc_00230CA3: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(ebp + 0xC) = eax;
    eax = 0; /* xor self */
    esp = esp + 8;
    (void)0; /* cmp ebx, eax - flags set for next jcc */
    MEMF(ebp + 0x1B0) = xmm0; /* movss */
    MEMF(ebp + 0x1B4) = xmm0; /* movss */
    MEMF(ebp + 0x1B8) = xmm0; /* movss */
    MEM32(ebp + 8) = eax;
    MEM16(ebp + 0x1D8) = LO16(eax);
    MEM16(ebp + 0x1DA) = LO16(eax);
    MEM32(ebp + 0x1DC) = eax;
    MEM8(ebp + 0x1F0) = LO8(eax);
    MEM8(ebp + 0x1F1) = LO8(eax);
    if (CMP_EQ(ebx, eax)) goto loc_00230D4C; /* je: equal / zero */

loc_00230CED: ;
    ecx = MEM32(ebx + 0x1BC);
    MEM32(ebp + 0x1BC) = ecx;
    edx = MEM32(ebx + 0x1C0);
    MEM32(ebp + 0x1C0) = edx;
    eax = MEM32(ebx + 0x1C8);
    MEM32(ebp + 0x1C8) = eax;
    xmm1 = MEMF(ebx + 0x1C8); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(ebx + 0x1BC) = xmm0; /* movss */
    MEMF(ebx + 0x1C0) = xmm0; /* movss */
    MEMF(ebx + 0x1C4) = xmm0; /* movss */
    if (1 /* jp after test - parity */) goto loc_00230D6C; /* jp: parity */

loc_00230D3A: ;
    ebx = 0; /* xor self */
    eax = esi;
    PUSH32(esp, 0); sub_00036700(); /* call 0x00036700 */

loc_00230D43: ;
    MEM8(0x84A5BD) = 1;
    goto loc_00230D6C;

loc_00230D4C: ;
    xmm1 = MEMF(0x648D14); /* movss */
    MEMF(ebp + 0x1BC) = xmm1; /* movss */
    MEMF(ebp + 0x1C0) = xmm0; /* movss */
    MEMF(ebp + 0x1C8) = xmm1; /* movss */

loc_00230D6C: ;
    ebx = 0; /* xor self */
    eax = esi;
    PUSH32(esp, 0); sub_00036700(); /* call 0x00036700 */

loc_00230D75: ;
    xmm0 = MEMF(0x648D14); /* movss */
    PUSH32(esp, 0x104);
    PUSH32(esp, 0x5FA0B8);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    MEM8(0x84A5BD) = 1;
    MEMF(ebp + 0x1C4) = xmm0; /* movss */
    MEM8(ebp + 0x1D4) = LO8(ebx);
    MEM8(ebp + 0x1D6) = LO8(ebx);
    PUSH32(esp, 0); sub_0042DD7A(); /* call 0x0042DD7A */

loc_00230DAC: ;
    eax = esp + 0x18;
    MEM32(esp + 0x128) = 0x1D;
    MEM32(esp + 0x18) = ebx;
    MEM32(esp + 0x20) = ebx;
    MEM32(esp + 0x1C) = ebx;
    PUSH32(esp, 0); sub_00063680(); /* call 0x00063680 */

loc_00230DCC: ;
    esi = esp + 0x18;
    PUSH32(esp, 0); sub_00063730(); /* call 0x00063730 */

loc_00230DD5: ;
    eax = MEM32(esp + 0x1C);
    if (CMP_NE(MEM32(eax + 4), ebx)) goto loc_00230E77; /* jne: not equal / not zero */

loc_00230DE2: ;
    edx = MEM32(eax + 0x18);
    (void)0; /* cmp edx, ebx - flags set for next jcc */
    ecx = eax + 0x18;
    if (CMP_EQ(edx, ebx)) goto loc_00230DF0; /* je: equal / zero */

loc_00230DEC: ;
    MEM16(eax + 0x2C) = MEM16(eax + 0x2C) + 1;

loc_00230DF0: ;
    edi = MEM32(ecx);
    ecx = esp + 0x18;
    PUSH32(esp, 0); sub_000636D0(); /* call 0x000636D0 */

loc_00230DFB: ;
    esi = ebp + 0x10;
    eax = edi;
    ecx = esi;
    PUSH32(esp, 0); sub_003CBF10(); /* call 0x003CBF10 */

loc_00230E07: ;
    xmm2 = 0.0f; /* xorps self = zero */
    PUSH32(esp, 0x3F800000);
    ecx = esi;
    MEM16(ebp + 0xF8) = LO16(ebx);
    MEMF(ebp + 0xDC) = xmm2; /* movss */
    PUSH32(esp, 0); sub_003CC2A0(); /* call 0x003CC2A0 */

loc_00230E25: ;
    MEM32(ebp + 0xF4) = 1;
    MEM32(ebp + 0xF0) = 2;
    fp_push(MEMF(esi + 0xD8)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    esp = esp + 4;
    MEMF(esi + 0xD8) = (float)fp_top(); fp_popp(); /* fstp */
    /* comiss xmm2, MEMF(ebp + 0xE8) - sets EFLAGS */
    edx = MEM32(esi);
    MEMF(ebp + 0xDC) = xmm2; /* movss */
    xmm0 = MEMF(edx); /* movss */
    xmm0 = xmm0 * xmm2; /* mulss */
    MEMF(ebp + 0x1CC) = xmm0; /* movss */
    if ((xmm2 > MEMF(ebp + 0xE8))) goto loc_00230E87; /* ja: above (unsigned >) */

loc_00230E6D: ;
    xmm0 = xmm0 - MEMF(0x648D2C); /* subss */
    goto loc_00230E8F;

loc_00230E77: ;
    PUSH32(esp, 0); sub_001F0580(); /* call 0x001F0580 */

loc_00230E7C: ;
    ecx = esp + 0x18;
    PUSH32(esp, 0); sub_000636D0(); /* call 0x000636D0 */

loc_00230E85: ;
    goto loc_00230EC4;

loc_00230E87: ;
    xmm0 = xmm0 + MEMF(0x648D2C); /* addss */

loc_00230E8F: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, ebx);
    MEM32(ebp + 0x1E0) = ebx;
    MEM32(ebp + 0x1E4) = ebx;
    MEM16(ebp + 0x1E8) = LO16(ebx);
    MEM32(ebp + 0x1EC) = ebx;
    PUSH32(esp, 0x366E0);
    ebx = ebp;
    MEMF(ebp + 0x1D0) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1890(); /* call 0x003E1890 */

loc_00230EC1: ;
    esp = esp + 8;

loc_00230EC4: ;
    edi = MEM32(esp + 0x10);

loc_00230EC8: ;
    POP32(esp, ebp);

loc_00230EC9: ;
    eax = MEM32(edi + 0x1C);
    eax = MEM32(eax + 0x10);
    if (TEST_Z(eax, eax)) goto loc_00230EE5; /* je: equal / zero */

loc_00230ED3: ;
    PUSH32(esp, 0x4019999A);
    eax = eax + 4;
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00036830(); /* call 0x00036830 */

loc_00230EE2: ;
    esp = esp + 4;

loc_00230EE5: ;
    SET_LO8(eax, MEM8(edi + 0x30));
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00230F05(); return; } /* je: equal / zero */

loc_00230EEC: ;
    ecx = MEM32(edi + 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00206780(); /* call 0x00206780 */

loc_00230EF5: ;
    esp = esp + 4;
    edx = 0; /* xor self */
    esi = 0; /* xor self */
    ecx = 0x2308A0;
    edi = 0; /* xor self */
    g_seh_ebp = ebp; sub_00230F74(); return; /* tail jmp 0x00230F74 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00230FA0
 * Original: 0x00230FA0 - 0x00230FCC (44 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00230FA0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00230FA0: ;
    SET_LO8(eax, MEM8(ecx + 0x30));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    edx = 0; /* xor self */
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    eax = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    ebx = eax;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00230FCC(); return; } /* je: equal / zero */

loc_00230FB4: ;
    ecx = 0x2308A0;
    MEM32(ebx) = ecx;
    MEM32(ebx + 4) = edx;
    MEM32(ebx + 8) = esi;
    edi = 0; /* xor self */
    MEM32(ebx + 0xC) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00230FF0
 * Original: 0x00230FF0 - 0x00231032 (66 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00230FF0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00230FF0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x38);
    if (TEST_Z(ecx, ecx)) goto loc_00231018; /* je: equal / zero */

loc_00230FFB: ;
    SET_LO8(eax, MEM8(esi + 0x30));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00231018; /* je: equal / zero */

loc_00231002: ;
    xmm0 = MEMF(esi + 0x20); /* movss */
    /* ucomiss xmm0, MEMF(0x648D14) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_00231018; /* jp: parity */

loc_00231014: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_00231018: ;
    eax = MEM32(esi + 0x1C);
    if (TEST_Z(eax, eax)) goto loc_00231024; /* je: equal / zero */

loc_0023101F: ;
    PUSH32(esp, 0); sub_002066F0(); /* call 0x002066F0 */

loc_00231024: ;
    ebx = esi;
    PUSH32(esp, 0); sub_00232E50(); /* call 0x00232E50 */

loc_0023102B: ;
    MEM8(esi + 0x30) = 0;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00231040
 * Original: 0x00231040 - 0x0023104B (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00231040(void)
{
    int _flags = 0; /* fallback flag var */

loc_00231040: ;
    edx = MEM32(ecx + 0x1C);
    eax = 0; /* xor self */
    (void)0; /* test edx, edx - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(edx, edx)) ? 1 : 0); /* setne */
    esp += 4; return; /* ret */

}

/**
 * sub_00231050
 * Original: 0x00231050 - 0x00231167 (279 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00231050(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_00231050: ;
    eax = MEM32(esi + 0x1C);
    esp = esp - 8;
    if (TEST_Z(eax, eax)) goto loc_00231161; /* je: equal / zero */

loc_0023105E: ;
    eax = MEM32(esi + 0x34);
    xmm0 = MEMF(0x648E54); /* movss */
    eax = eax << 4;
    xmm1 = MEMF(eax + 0x6BD710); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x6BD714); /* movss */
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 0x6BD70C);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x6BD708);
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0xC) = xmm1; /* movss */
    PUSH32(esp, 0); sub_002025B0(); /* call 0x002025B0 */

loc_002310A2: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0x14);
    xmm0 = MEMF(edx); /* movss */
    xmm0 = xmm0 + MEMF(0x75E4B8); /* addss */
    edx = MEM32(esi + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00206AB0(); /* call 0x00206AB0 */

loc_002310CC: ;
    eax = MEM32(esi + 0x38);
    esp = esp + 0x14;
    if (TEST_Z(eax, eax)) goto loc_0023115F; /* je: equal / zero */

loc_002310DA: ;
    edi = MEM32(esi + 0x2C);
    ebx = MEM32(0x849ADC);
    (void)0; /* cmp edi, ebx - flags set for next jcc */
    MEM8(esp + 0x14) = 1;
    if (CMP_EQ(edi, ebx)) goto loc_00231116; /* je: equal / zero */

loc_002310EC: ;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x103C);
    ebx = ebx + 0x85E580;
    PUSH32(esp, 0); sub_00200A60(); /* call 0x00200A60 */

loc_002310FD: ;
    ebx = edi;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x103C);
    ebx = ebx + 0x85E580;
    MEM32(0x849ADC) = edi;
    PUSH32(esp, 0); sub_00200860(); /* call 0x00200860 */

loc_00231116: ;
    edi = MEM32(esi + 0x1C);
    PUSH32(esp, 0); sub_00222CF0(); /* call 0x00222CF0 */

loc_0023111E: ;
    ecx = MEM32(esi + 0x38);
    edx = MEM32(esi + 0x20);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_0023112A: ;
    ecx = MEM32(0x862680);
    edx = MEM32(0x86267C);
    (void)0; /* test edx, edx - flags set for next jcc */
    eax = MEM32(ecx + -4);
    MEM32(0x849AA4) = eax;
    if (TEST_Z(edx, edx)) goto loc_00231156; /* je: equal / zero */

loc_00231142: ;
    eax = ecx;
    eax = eax - edx;
    eax = (uint32_t)((int32_t)eax >> 2);
    if (TEST_Z(eax, eax)) goto loc_00231156; /* je: equal / zero */

loc_0023114D: ;
    ecx = ecx - 4;
    MEM32(0x862680) = ecx;

loc_00231156: ;
    eax = esp + 0x14;
    PUSH32(esp, 0); sub_001F6FC0(); /* call 0x001F6FC0 */

loc_0023115F: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_00231161: ;
    esp = esp + 8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00231170
 * Original: 0x00231170 - 0x0023128E (286 bytes, 87 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00231170(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00231170: ;
    esp = esp - 0x14;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00397C70(); /* call 0x00397C70 */

loc_00231180: ;
    ebx = 0; /* xor self */
    MEM32(ebp + 4) = eax;
    (void)0; /* cmp MEM32(0x84A19C), ebx - flags set for next jcc */
    MEM32(ebp + 8) = ebx;
    MEM32(ebp + 0x10) = ebx;
    MEM32(ebp + 0x14) = ebx;
    MEM32(ebp + 0x18) = ebx;
    MEM32(ebp + 0x1C) = ebx;
    if (CMP_NE(MEM32(0x84A19C), ebx)) goto loc_002311A1; /* jne: not equal / not zero */

loc_0023119C: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_002311A1: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (CMP_EQ(esi, ebx)) goto loc_002311E9; /* je: equal / zero */

loc_002311C7: ;
    if (CMP_B(MEM32(esi + 0x80), 0x40)) goto loc_002311E9; /* jb: below (unsigned <) */

loc_002311D0: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002311DA: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002311E2: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_0023120A; /* jne: not equal / not zero */

loc_002311E9: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002311FB: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00231203: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) goto loc_00231286; /* je: equal / zero */

loc_0023120A: ;
    xmm0 = MEMF(0x648D14); /* movss */
    ebp = MEM32(esp + 0x28);
    ecx = 0x230FA0;
    edi = eax;
    MEM32(edi) = ecx;
    edx = 0; /* xor self */
    MEM32(edi + 4) = edx;
    esi = 0; /* xor self */
    MEM32(edi + 8) = esi;
    MEM8(eax + 0x10) = LO8(ebx);
    MEM32(edi + 0xC) = ebx;
    MEM32(eax + 0x18) = ebx;
    MEM32(eax + 0x1C) = ebx;
    MEMF(eax + 0x28) = xmm0; /* movss */
    MEM32(eax + 0x2C) = 1;
    MEM8(eax + 0x30) = LO8(ebx);
    MEM8(eax + 0x31) = LO8(ebx);
    MEM32(eax + 0x34) = ebx;
    MEM32(eax + 0x38) = ebx;
    ecx = MEM32(eax + 0x18);
    esi = eax;
    ecx++;
    MEM32(esp + 0x18) = esi;
    MEM32(eax + 0x18) = ecx;

loc_0023125A: ;
    edi = esp + 0x20;
    MEM32(esp + 0x20) = ebx;
    MEM32(esp + 0x10) = esi;
    PUSH32(esp, 0); sub_00232EC0(); /* call 0x00232EC0 */

loc_0023126B: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0); sub_001FFB50(); /* call 0x001FFB50 */

loc_00231272: ;
    esp = esp + 4;
    if (CMP_EQ(eax, ebx)) { sub_0023128E(); return; } /* je: equal / zero */

loc_00231279: ;
    MEM32(eax + 4) = ebx;
    MEM32(eax) = 0x5F77B4;
    edi = eax;
    g_seh_ebp = ebp; sub_00231290(); return; /* tail jmp 0x00231290 */

loc_00231286: ;
    esi = 0; /* xor self */
    MEM32(esp + 0x18) = esi;
    goto loc_0023125A;

}

/**
 * sub_00232A70
 * Original: 0x00232A70 - 0x00232B5D (237 bytes, 87 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00232A70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00232A70: ;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    eax = MEM32(ebp + 0x1C);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(eax, ebx)) goto loc_00232B02; /* je: equal / zero */

loc_00232A84: ;
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0); sub_001FFB50(); /* call 0x001FFB50 */

loc_00232A8B: ;
    esp = esp + 4;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(esp + 0x24) = eax;
    if (CMP_EQ(eax, ebx)) goto loc_00232AB9; /* je: equal / zero */

loc_00232A96: ;
    edi = MEM32(ebp + 0x1C);
    PUSH32(esp, ebx);
    esp = esp - 8;
    eax = esp;
    esi = 0; /* xor self */
    PUSH32(esp, 0); sub_00060900(); /* call 0x00060900 */

loc_00232AA6: ;
    ecx = esi;
    esi = MEM32(esp + 0x30);
    eax = ebx;
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_002307B0(); /* call 0x002307B0 */

loc_00232AB5: ;
    edi = eax;
    goto loc_00232ABB;

loc_00232AB9: ;
    edi = 0; /* xor self */

loc_00232ABB: ;
    eax = MEM32(ebp + 0x10);
    esi = MEM32(eax + 0x44);
    ecx = MEM32(esi + 0x38);
    eax = eax + 0x44;
    (void)0; /* cmp ecx, ebx - flags set for next jcc */
    MEM8(esi + 0x31) = LO8(ebx);
    if (CMP_EQ(ecx, ebx)) goto loc_00232AD5; /* je: equal / zero */

loc_00232ACE: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00232AD5: ;
    xmm1 = 0.0f; /* xorps self = zero */
    MEM32(esi + 0x38) = edi;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(eax + 0x44);
    eax = eax + 0x44;
    MEM8(ecx + 0x30) = 1;
    xmm0 = MEMF(ebp + 0x20); /* movss */
    xmm0 = xmm0 - MEMF(0x7FA218); /* subss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(ebp + 0x20) = xmm0; /* movss */
    if ((xmm1 <= xmm0)) goto loc_00232B02; /* jbe: below or equal (unsigned <=) */

loc_00232AFF: ;
    MEM32(ebp + 0x1C) = ebx;

loc_00232B02: ;
    PUSH32(esp, 0x230690);
    ebx = ebp;
    PUSH32(esp, 0); sub_00233230(); /* call 0x00233230 */

loc_00232B0E: ;
    eax = MEM32(ebp + 4);
    ecx = MEM32(eax);
    PUSH32(esp, 0x230670);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00129430(); /* call 0x00129430 */

loc_00232B24: ;
    edi = MEM32(ebp + 0x10);
    ebp = MEM32(ebp + 0x14);
    ebx = esp;
    eax = 0x230FF0;
    MEM32(ebx) = eax;
    ecx = 0; /* xor self */
    MEM32(ebx + 4) = ecx;
    PUSH32(esp, edi);
    edx = 0; /* xor self */
    eax = esp + 0x24;
    MEM32(ebx + 8) = edx;
    PUSH32(esp, ebp);
    esi = 0; /* xor self */
    PUSH32(esp, eax);
    MEM32(ebx + 0xC) = esi;
    PUSH32(esp, 0); sub_002332A0(); /* call 0x002332A0 */

loc_00232B4E: ;
    esp = esp + 0x1C;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00232B60
 * Original: 0x00232B60 - 0x00232B9A (58 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00232B60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00232B60: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0); sub_001FFB50(); /* call 0x001FFB50 */

loc_00232B69: ;
    esi = eax;
    esp = esp + 4;
    if (TEST_Z(esi, esi)) { sub_00232B9A(); return; } /* je: equal / zero */

loc_00232B72: ;
    eax = MEM32(esp + 0x10);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    esp = esp - 8;
    eax = esp;
    PUSH32(esp, 0); sub_00060900(); /* call 0x00060900 */

loc_00232B85: ;
    eax = MEM32(esp + 0x28);
    ecx = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x20);
    PUSH32(esp, 0); sub_002307B0(); /* call 0x002307B0 */

loc_00232B96: ;
    edi = eax;
    g_seh_ebp = ebp; sub_00232B9C(); return; /* tail jmp 0x00232B9C */

}

/**
 * sub_00232BD0
 * Original: 0x00232BD0 - 0x00232C0C (60 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00232BD0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00232BD0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(ebx + 0x10);
    edi = edi << 2;
    esi = MEM32(eax + edi);
    ecx = MEM32(esi + 0x38);
    eax = eax + edi;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    SET_LO8(eax, MEM8(esp + 0x10));
    MEM8(esi + 0x31) = LO8(eax);
    if (TEST_Z(ecx, ecx)) goto loc_00232BF4; /* je: equal / zero */

loc_00232BED: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_00232BF4: ;
    eax = MEM32(esp + 0xC);
    MEM32(esi + 0x38) = eax;
    eax = MEM32(ebx + 0x10);
    ecx = MEM32(eax + edi);
    eax = eax + edi;
    POP32(esp, edi);
    MEM8(ecx + 0x30) = 1;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00232C10
 * Original: 0x00232C10 - 0x00232D61 (337 bytes, 101 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00232C10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00232C10: ;
    PUSH32(esp, ecx);
    SET_LO8(eax, MEM8(0x87BFBC));
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    (void)0; /* test LO8(eax), 1 - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_NZ(LO8(eax), 1)) goto loc_00232C40; /* jne: not equal / not zero */

loc_00232C1F: ;
    MEM32(0x87BFBC) = MEM32(0x87BFBC) | 1;
    MEM32(0x87BFB0) = 0x75E400;
    MEM32(0x87BFB4) = 0x2E;
    MEM32(0x87BFB8) = esi;

loc_00232C40: ;
    edi = MEM32(ebx + 0x14);
    xmm0 = 0.0f; /* xorps self = zero */
    esp = esp - 0x10;
    ebp = esp;
    eax = 0x231040;
    MEM32(ebp) = eax;
    eax = MEM32(ebx + 0x10);
    ecx = 0; /* xor self */
    MEM32(ebp + 4) = ecx;
    edx = 0; /* xor self */
    MEM32(ebp + 8) = edx;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    MEMF(esp + 0x24) = xmm0; /* movss */
    MEM32(ebp + 0xC) = esi;
    PUSH32(esp, 0); sub_002332F0(); /* call 0x002332F0 */

loc_00232C70: ;
    esp = esp + 0x18;
    if (TEST_Z(eax, eax)) goto loc_00232D5C; /* je: equal / zero */

loc_00232C7B: ;
    esi = MEM32(0x5499E8);
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_00232C97; /* jb: below (unsigned <) */

loc_00232C88: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_00232C97: ;
    MEM32(eax) = 0x4030C;
    edi = 0; /* xor self */
    MEM32(eax + 4) = edi;
    ecx = MEM32(0x549B40);
    MEM32(eax + 8) = 0x41D78;
    MEM32(eax + 0xC) = ecx;
    eax = eax + 0x10;
    MEM32(esi) = eax;
    eax = MEM32(0x549C34);
    (void)0; /* cmp eax, 2 - flags set for next jcc */
    MEM32(0x549C34) = edi;
    if (CMP_NE(eax, 2)) goto loc_00232CF6; /* jne: not equal / not zero */

loc_00232CC7: ;
    PUSH32(esp, 0); sub_005384E0(); /* call 0x005384E0 */

loc_00232CCC: ;
    PUSH32(esp, 0); sub_00536810(); /* call 0x00536810 */

loc_00232CD1: ;
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_00232CE7; /* jb: below (unsigned <) */

loc_00232CD8: ;
    eax = MEM32(0x54A8B8);
    edx = eax;
    edx = edx >> 1;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_00232CE7: ;
    PUSH32(esp, esi);
    edx = eax;
    PUSH32(esp, 0); sub_00538030(); /* call 0x00538030 */

loc_00232CEF: ;
    PUSH32(esp, 0); sub_00537E30(); /* call 0x00537E30 */

loc_00232CF4: ;
    MEM32(esi) = eax;

loc_00232CF6: ;
    edx = 1;
    ecx = 0x4035C;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00232D05: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, edi);
    PUSH32(esp, 3);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    MEM32(0x549AF8) = 1;
    PUSH32(esp, 0); sub_0053B9F0(); /* call 0x0053B9F0 */

loc_00232D1F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00202C40(); /* call 0x00202C40 */

loc_00232D25: ;
    edi = MEM32(ebx + 0x10);
    eax = MEM32(ebx + 0x14);
    esp = esp + 4;
    if (CMP_EQ(edi, eax)) goto loc_00232D5C; /* je: equal / zero */

loc_00232D32: ;
    esi = MEM32(edi);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00231050(); /* call 0x00231050 */

loc_00232D3E: ;
    xmm0 = MEMF(esp + 0xC); /* movss */
    eax = MEM32(ebx + 0x14);
    xmm0 = xmm0 + MEMF(0x648F38); /* addss */
    edi = edi + 4;
    (void)0; /* cmp edi, eax - flags set for next jcc */
    MEMF(esp + 0xC) = xmm0; /* movss */
    if (CMP_NE(edi, eax)) goto loc_00232D32; /* jne: not equal / not zero */

loc_00232D5C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00232D70
 * Original: 0x00232D70 - 0x00232DAB (59 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00232D70(void)
{
    uint32_t ebp;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00232D70: ;
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 0x14);
    eax = MEM32(eax + 0x10);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esp = esp - 0x10;
    ebp = esp;
    ecx = 0x231040;
    MEM32(ebp) = ecx;
    edx = 0; /* xor self */
    MEM32(ebp + 4) = edx;
    esi = 0; /* xor self */
    PUSH32(esp, ebx);
    edi = 0; /* xor self */
    MEM32(ebp + 8) = esi;
    PUSH32(esp, eax);
    MEM32(ebp + 0xC) = edi;
    PUSH32(esp, 0); sub_002332F0(); /* call 0x002332F0 */

loc_00232D9D: ;
    esp = esp + 0x18;
    POP32(esp, edi);
    eax = (uint32_t)(-(int32_t)eax);
    POP32(esp, esi);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    POP32(esp, ebp);
    eax = (uint32_t)(-(int32_t)eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00232DB0
 * Original: 0x00232DB0 - 0x00232DDF (47 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00232DB0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00232DB0: ;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x10);

loc_00232DB4: ;
    SET_LO8(eax, 0); /* xor self */

loc_00232DB6: ;
    edx++;
    if (TEST_Z(edi, edi)) { sub_00232DDF(); return; } /* je: equal / zero */

loc_00232DBB: ;
    ecx = MEM32(esi + 0x14);
    ecx = ecx - edi;
    ecx = (uint32_t)((int32_t)ecx >> 2);
    if (CMP_AE(edx, ecx)) { sub_00232DDF(); return; } /* jae: above or equal (unsigned >=) */

loc_00232DC7: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00232DDB; /* jne: not equal / not zero */

loc_00232DCB: ;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(eax + edx * 4);
    eax = eax + edx * 4;
    eax = MEM32(ecx + 0x1C);
    if (TEST_Z(eax, eax)) goto loc_00232DB4; /* je: equal / zero */

loc_00232DDB: ;
    SET_LO8(eax, 1);
    goto loc_00232DB6;

}

/**
 * sub_00232DF0
 * Original: 0x00232DF0 - 0x00232DFD (13 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00232DF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00232DF0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = MEM32(esi + 4);
    if (TEST_NZ(edi, edi)) { sub_00232DFD(); return; } /* jne: not equal / not zero */

loc_00232DF9: ;
    edx = 0; /* xor self */
    g_seh_ebp = ebp; sub_00232E05(); return; /* tail jmp 0x00232E05 */

}

/**
 * sub_00232E50
 * Original: 0x00232E50 - 0x00232E7D (45 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00232E50(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00232E50: ;
    SET_LO8(ecx, MEM8(esi + 0x10));
    esp = esp - 0x10;
    eax = 0; /* xor self */
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    ecx = MEM32(esi + 4);
    SET_LO8(eax, (TEST_NZ(LO8(ecx), LO8(ecx))) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ecx = ecx + ebx;
    PUSH32(esp, eax);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(esi), _icall_esp); /* indirect call */
    }

loc_00232E6C: ;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    edi = MEM32(eax + 8);
    eax = MEM32(eax + 0xC);
    MEM8(esi + 0x10) = 1;
    g_seh_ebp = ebp; sub_00232E80(); return; /* tail jmp 0x00232E80 */

}

/**
 * sub_00232EC0
 * Original: 0x00232EC0 - 0x00232F10 (80 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00232EC0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00232EC0: ;
    PUSH32(esp, ecx);
    eax = MEM32(edi);
    if (TEST_Z(eax, eax)) goto loc_00232F08; /* je: equal / zero */

loc_00232EC7: ;
    MEM32(eax + 0x18) = MEM32(eax + 0x18) - 1;
    PUSH32(esp, esi);
    esi = MEM32(edi);
    eax = MEM32(esi + 0x18);
    if (TEST_NZ(eax, eax)) goto loc_00232F07; /* jne: not equal / not zero */

loc_00232ED4: ;
    if (TEST_Z(esi, esi)) goto loc_00232F07; /* je: equal / zero */

loc_00232ED8: ;
    ecx = MEM32(esi + 0x38);
    if (TEST_Z(ecx, ecx)) goto loc_00232EE6; /* je: equal / zero */

loc_00232EDF: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00232EE6: ;
    eax = MEM32(esi + 0x1C);
    if (TEST_Z(eax, eax)) goto loc_00232EF6; /* je: equal / zero */

loc_00232EED: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00206780(); /* call 0x00206780 */

loc_00232EF3: ;
    esp = esp + 4;

loc_00232EF6: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    MEM32(esp + 8) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00232F04: ;
    esp = esp + 4;

loc_00232F07: ;
    POP32(esp, esi);

loc_00232F08: ;
    MEM32(edi) = 0;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00232F10
 * Original: 0x00232F10 - 0x00232F57 (71 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00232F10(void)
{
    int _flags = 0; /* fallback flag var */

loc_00232F10: ;
    PUSH32(esp, ecx);
    eax = MEM32(esi + 4);
    if (TEST_Z(eax, eax)) goto loc_00232F40; /* je: equal / zero */

loc_00232F18: ;
    ecx = MEM32(esp);
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00233460(); /* call 0x00233460 */

loc_00232F25: ;
    eax = MEM32(esi + 4);
    esp = esp + 4;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 4) = eax;
    POP32(esp, ebx);
    if (TEST_Z(eax, eax)) goto loc_00232F40; /* je: equal / zero */

loc_00232F34: ;
    edx = esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00232F3D: ;
    esp = esp + 4;

loc_00232F40: ;
    MEM32(esi + 4) = 0;
    MEM32(esi + 8) = 0;
    MEM32(esi + 0xC) = 0;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00232F60
 * Original: 0x00232F60 - 0x00232FA1 (65 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00232F60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00232F60: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47FE10);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    esp = esp - 0x50;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    edi = MEM32(ebp + 0x10);
    esi = MEM32(ebp + 8);
    eax = MEM32(ebp + 0x14);
    eax = MEM32(eax);
    MEM32(ebp + -24) = eax;
    if (TEST_Z(eax, eax)) goto loc_00232F96; /* je: equal / zero */

loc_00232F93: ;
    MEM32(eax + 0x18) = MEM32(eax + 0x18) + 1;

loc_00232F96: ;
    edx = MEM32(esi + 4);
    if (TEST_NZ(edx, edx)) { sub_00232FA1(); return; } /* jne: not equal / not zero */

loc_00232F9D: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_00232FA9(); return; /* tail jmp 0x00232FA9 */

}

/**
 * sub_00233230
 * Original: 0x00233230 - 0x0023329D (109 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00233230(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00233230: ;
    PUSH32(esp, ebp);
    ebp = MEM32(ebx + 4);
    PUSH32(esp, esi);
    esi = MEM32(ebp);
    if (CMP_EQ(esi, ebp)) goto loc_00233298; /* je: equal / zero */

loc_0023323C: ;
    PUSH32(esp, edi);
    /* nop */

loc_00233240: ;
    ecx = esi + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(esp + 0x10), _icall_esp); /* indirect call */
    }

loc_00233247: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00233291; /* je: equal / zero */

loc_0023324B: ;
    (void)0; /* cmp esi, MEM32(ebx + 4) - flags set for next jcc */
    edi = MEM32(esi);
    if (CMP_EQ(esi, MEM32(ebx + 4))) goto loc_0023328D; /* je: equal / zero */

loc_00233252: ;
    eax = MEM32(esi + 4);
    MEM32(eax) = edi;
    ecx = MEM32(esi);
    edx = MEM32(esi + 4);
    PUSH32(esp, esi);
    MEM32(ecx + 4) = edx;
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_00233265: ;
    if (TEST_NZ(eax, eax)) goto loc_0023328A; /* jne: not equal / not zero */

loc_00233269: ;
    eax = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    eax++;
    edx--;
    PUSH32(esp, esi);
    MEM32(0x7FA490) = eax;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_00233287: ;
    esp = esp + 4;

loc_0023328A: ;
    MEM32(ebx + 8) = MEM32(ebx + 8) - 1;

loc_0023328D: ;
    esi = edi;
    goto loc_00233293;

loc_00233291: ;
    esi = MEM32(esi);

loc_00233293: ;
    if (CMP_NE(esi, ebp)) goto loc_00233240; /* jne: not equal / not zero */

loc_00233297: ;
    POP32(esp, edi);

loc_00233298: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002332A0
 * Original: 0x002332A0 - 0x002332E4 (68 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002332A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002332A0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x18);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    if (CMP_EQ(esi, edi)) goto loc_002332C6; /* je: equal / zero */

loc_002332B8: ;
    ecx = MEM32(esi + -4);
    ecx = ecx + ebx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ebp, _icall_esp); /* indirect call */
    }

loc_002332BF: ;
    esi = esi + 0xFFFFFFFCu;
    if (CMP_NE(esi, edi)) goto loc_002332B8; /* jne: not equal / not zero */

loc_002332C6: ;
    eax = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x28);
    ecx = eax;
    MEM32(ecx) = ebp;
    POP32(esp, edi);
    MEM32(ecx + 4) = ebx;
    POP32(esp, esi);
    MEM32(ecx + 8) = edx;
    edx = MEM32(esp + 0x24);
    POP32(esp, ebp);
    MEM32(ecx + 0xC) = edx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002332F0
 * Original: 0x002332F0 - 0x00233330 (64 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002332F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002332F0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    eax = 0; /* xor self */
    (void)0; /* cmp esi, ebp - flags set for next jcc */
    MEM32(esp + 8) = eax;
    if (CMP_EQ(esi, ebp)) goto loc_0023332C; /* je: equal / zero */

loc_00233305: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x1C);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x24);
    /* nop */

loc_00233310: ;
    eax = MEM32(esi);
    ecx = eax + edi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ebx, _icall_esp); /* indirect call */
    }

loc_00233317: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0023331F; /* je: equal / zero */

loc_0023331B: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 1;

loc_0023331F: ;
    esi = esi + 4;
    if (CMP_NE(esi, ebp)) goto loc_00233310; /* jne: not equal / not zero */

loc_00233326: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, ebx);

loc_0023332C: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00233330
 * Original: 0x00233330 - 0x00233346 (22 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00233330(void)
{

loc_00233330: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00233550(); /* call 0x00233550 */

loc_00233340: ;
    esp = esp + 0xC;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00233350
 * Original: 0x00233350 - 0x002333BE (110 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00233350(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00233350: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = eax;
    if (CMP_EQ(edi, ebx)) goto loc_002333BA; /* je: equal / zero */

loc_0023335D: ;
    PUSH32(esp, esi);
    edi = edi;

loc_00233360: ;
    eax = MEM32(ebp);
    if (CMP_EQ(eax, MEM32(edi))) goto loc_002333B2; /* je: equal / zero */

loc_00233367: ;
    if (TEST_Z(eax, eax)) goto loc_0023336E; /* je: equal / zero */

loc_0023336B: ;
    MEM32(eax + 0x18) = MEM32(eax + 0x18) + 1;

loc_0023336E: ;
    esi = MEM32(edi);
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(edi) = eax;
    if (TEST_Z(esi, esi)) goto loc_002333B2; /* je: equal / zero */

loc_00233376: ;
    ecx = MEM32(esi + 0x18);
    ecx--;
    eax = ecx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 0x18) = ecx;
    if (TEST_NZ(eax, eax)) goto loc_002333B2; /* jne: not equal / not zero */

loc_00233383: ;
    ecx = MEM32(esi + 0x38);
    if (TEST_Z(ecx, ecx)) goto loc_00233391; /* je: equal / zero */

loc_0023338A: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00233391: ;
    eax = MEM32(esi + 0x1C);
    if (TEST_Z(eax, eax)) goto loc_002333A1; /* je: equal / zero */

loc_00233398: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00206780(); /* call 0x00206780 */

loc_0023339E: ;
    esp = esp + 4;

loc_002333A1: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    MEM32(esp + 0x10) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_002333AF: ;
    esp = esp + 4;

loc_002333B2: ;
    edi = edi + 4;
    if (CMP_NE(edi, ebx)) goto loc_00233360; /* jne: not equal / not zero */

loc_002333B9: ;
    POP32(esp, esi);

loc_002333BA: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002333C0
 * Original: 0x002333C0 - 0x0023341A (90 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002333C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_002333C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47FD40);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    esi = ecx;
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 8);
    MEM32(ebp + -20) = ecx;
    MEM32(ebp + -4) = 0;

loc_002333F3: ;
    if (CMP_BE(edx & edx, 0)) { sub_0023341A(); return; } /* jbe: below or equal (unsigned <=) */

loc_002333F7: ;
    MEM32(ebp + -24) = ecx;
    if (TEST_Z(ecx, ecx)) goto loc_0023340E; /* je: equal / zero */

loc_002333FE: ;
    eax = MEM32(esi);
    MEM32(ecx) = eax;
    if (TEST_Z(eax, eax)) goto loc_0023340E; /* je: equal / zero */

loc_00233406: ;
    eax = eax + 0x18;
    MEM32(ebp + -28) = eax;
    MEM32(eax) = MEM32(eax) + 1;

loc_0023340E: ;
    edx--;
    MEM32(ebp + 0xC) = edx;
    ecx = ecx + 4;
    MEM32(ebp + 8) = ecx;
    goto loc_002333F3;

}

/**
 * sub_00233460
 * Original: 0x00233460 - 0x002334C6 (102 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00233460(void)
{
    int _flags = 0; /* fallback flag var */

loc_00233460: ;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = eax;
    if (CMP_EQ(edi, ebx)) goto loc_002334C3; /* je: equal / zero */

loc_00233468: ;
    PUSH32(esp, esi);
    /* nop */

loc_00233470: ;
    eax = MEM32(edi);
    if (TEST_Z(eax, eax)) goto loc_002334B5; /* je: equal / zero */

loc_00233476: ;
    MEM32(eax + 0x18) = MEM32(eax + 0x18) - 1;
    esi = MEM32(edi);
    eax = MEM32(esi + 0x18);
    if (TEST_NZ(eax, eax)) goto loc_002334B5; /* jne: not equal / not zero */

loc_00233482: ;
    if (TEST_Z(esi, esi)) goto loc_002334B5; /* je: equal / zero */

loc_00233486: ;
    ecx = MEM32(esi + 0x38);
    if (TEST_Z(ecx, ecx)) goto loc_00233494; /* je: equal / zero */

loc_0023348D: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00233494: ;
    eax = MEM32(esi + 0x1C);
    if (TEST_Z(eax, eax)) goto loc_002334A4; /* je: equal / zero */

loc_0023349B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00206780(); /* call 0x00206780 */

loc_002334A1: ;
    esp = esp + 4;

loc_002334A4: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_002334B2: ;
    esp = esp + 4;

loc_002334B5: ;
    MEM32(edi) = 0;
    edi = edi + 4;
    if (CMP_NE(edi, ebx)) goto loc_00233470; /* jne: not equal / not zero */

loc_002334C2: ;
    POP32(esp, esi);

loc_002334C3: ;
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002334D0
 * Original: 0x002334D0 - 0x00233546 (118 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002334D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002334D0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    ebx = ecx;
    (void)0; /* cmp ebp, ebx - flags set for next jcc */
    PUSH32(esp, edi);
    edi = eax;
    if (CMP_EQ(ebp, ebx)) goto loc_00233540; /* je: equal / zero */

loc_002334DF: ;
    PUSH32(esp, esi);

loc_002334E0: ;
    eax = MEM32(ebx + -4);
    ecx = MEM32(edi + -4);
    ebx = ebx - 4;
    edi = edi - 4;
    if (CMP_EQ(eax, ecx)) goto loc_0023353B; /* je: equal / zero */

loc_002334F0: ;
    if (TEST_Z(eax, eax)) goto loc_002334F7; /* je: equal / zero */

loc_002334F4: ;
    MEM32(eax + 0x18) = MEM32(eax + 0x18) + 1;

loc_002334F7: ;
    esi = MEM32(edi);
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(edi) = eax;
    if (TEST_Z(esi, esi)) goto loc_0023353B; /* je: equal / zero */

loc_002334FF: ;
    ecx = MEM32(esi + 0x18);
    ecx--;
    eax = ecx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 0x18) = ecx;
    if (TEST_NZ(eax, eax)) goto loc_0023353B; /* jne: not equal / not zero */

loc_0023350C: ;
    ecx = MEM32(esi + 0x38);
    if (TEST_Z(ecx, ecx)) goto loc_0023351A; /* je: equal / zero */

loc_00233513: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_0023351A: ;
    eax = MEM32(esi + 0x1C);
    if (TEST_Z(eax, eax)) goto loc_0023352A; /* je: equal / zero */

loc_00233521: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00206780(); /* call 0x00206780 */

loc_00233527: ;
    esp = esp + 4;

loc_0023352A: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    MEM32(esp + 0x18) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00233538: ;
    esp = esp + 4;

loc_0023353B: ;
    if (CMP_NE(ebx, ebp)) goto loc_002334E0; /* jne: not equal / not zero */

loc_0023353F: ;
    POP32(esp, esi);

loc_00233540: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00233550
 * Original: 0x00233550 - 0x002335AC (92 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00233550(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00233550: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47FE00);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    eax = MEM32(ebp + 0xC);
    esi = ecx;
    edx = MEM32(ebp + 8);
    MEM32(ebp + -20) = eax;
    MEM32(ebp + -4) = 0;

loc_00233583: ;
    if (CMP_EQ(edx, esi)) { sub_002335AC(); return; } /* je: equal / zero */

loc_00233587: ;
    MEM32(ebp + -24) = eax;
    if (TEST_Z(eax, eax)) goto loc_0023359E; /* je: equal / zero */

loc_0023358E: ;
    ecx = MEM32(edx);
    MEM32(eax) = ecx;
    if (TEST_Z(ecx, ecx)) goto loc_0023359E; /* je: equal / zero */

loc_00233596: ;
    ecx = ecx + 0x18;
    MEM32(ebp + -28) = ecx;
    MEM32(ecx) = MEM32(ecx) + 1;

loc_0023359E: ;
    eax = eax + 4;
    MEM32(ebp + 0xC) = eax;
    edx = edx + 4;
    MEM32(ebp + 8) = edx;
    goto loc_00233583;

}

/**
 * sub_002335F0
 * Original: 0x002335F0 - 0x00233630 (64 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002335F0(void)
{

loc_002335F0: ;
    esp = esp - 0x800;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5F9B74);
    ecx = esp + 0xC;
    PUSH32(esp, 0x400);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046EE4A(); /* call 0x0046EE4A */

loc_0023360C: ;
    esp = esp + 0x10;
    edi = esp + 4;
    eax = esi;
    PUSH32(esp, 0); sub_00060900(); /* call 0x00060900 */

loc_0023361A: ;
    edx = MEM32(esp + 0x808);
    MEM32(esi + 8) = edx;
    eax = esi;
    POP32(esp, edi);
    esp = esp + 0x800;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00233630
 * Original: 0x00233630 - 0x0023368A (90 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00233630(void)
{
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00233630: ;
    esp = esp - 0x10;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = esp + 0x10;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023363E: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    ecx = esp + 0x10;
    MEMF(esp + 8) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023364F: ;
    esi = MEM32(ebx + 4);
    MEMF(esp + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    ecx = MEM32(esi + 4);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = esp + 0x10;
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0); sub_00245180(); /* call 0x00245180 */

loc_0023366C: ;
    ecx = 1;
    edx = ebx;
    edi = eax;
    PUSH32(esp, 0); sub_00140E80(); /* call 0x00140E80 */

loc_0023367A: ;
    MEM32(esi + 4) = edi;
    edx = MEM32(edi + 4);
    MEM32(edx) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00233690
 * Original: 0x00233690 - 0x002336BA (42 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00233690(void)
{
    int _flags = 0; /* fallback flag var */

loc_00233690: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0); sub_00241F90(); /* call 0x00241F90 */

loc_00233698: ;
    if (TEST_Z(MEM8(esp + 8), 1)) goto loc_002336B4; /* je: equal / zero */

loc_0023369F: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(esp + 8) = esi;
    if (TEST_Z(esi, esi)) goto loc_002336B4; /* je: equal / zero */

loc_002336A7: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_002336B1: ;
    esp = esp + 4;

loc_002336B4: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002336C0
 * Original: 0x002336C0 - 0x0023370B (75 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002336C0(void)
{

loc_002336C0: ;
    ecx = 0; /* xor self */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = 0xFFFFFFFFu;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x2C) = ecx;
    MEM8(eax + 0x30) = LO8(ecx);
    MEM16(eax + 0x32) = LO16(ecx);
    MEM32(eax) = 0x5FA1B0;
    MEM32(eax + 0x38) = 2;
    MEM8(eax + 0x3D) = LO8(ecx);
    MEM8(eax + 0x3C) = LO8(ecx);
    MEM8(eax + 0x3E) = LO8(ecx);
    MEM8(eax + 0x3F) = LO8(ecx);
    MEM8(eax + 0x40) = LO8(ecx);
    MEM8(eax + 0x41) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00233710
 * Original: 0x00233710 - 0x00233716 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00233710(void)
{

loc_00233710: ;
    eax = 0xB;
    esp += 4; return; /* ret */

}

/**
 * sub_00233720
 * Original: 0x00233720 - 0x002337A3 (131 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00233720(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00233720: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_0023372B: ;
    edx = 0; /* xor self */
    ecx = 0x6BE940;

loc_00233732: ;
    if (CMP_EQ(MEM32(ecx), eax)) { sub_002337A3(); return; } /* je: equal / zero */

loc_00233736: ;
    ecx = ecx + 0x10;
    edx++;
    if (CMP_L(ecx, 0x6BED90)) goto loc_00233732; /* jl: less (signed <) */

loc_00233742: ;
    edx = 0x600E6C;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x3D);
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x3C);
    ebp = MEM32(esp + 0x18);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x38);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x5FBC80);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_0023376A: ;
    SET_LO8(ecx, MEM8(esi + 0x3C));
    esp = esp + 0x1C;
    edi = 0; /* xor self */
    if (CMP_LE(LO8(ecx) & LO8(ecx), 0)) goto loc_0023379C; /* jle: less or equal (signed <=) */

loc_00233776: ;
    if (CMP_LE(eax & eax, 0)) goto loc_0023379C; /* jle: less or equal (signed <=) */

loc_0023377A: ;
    edx = ZX8(MEM8(edi + esi + 0x3E));
    PUSH32(esp, edx);
    ebp = ebp - eax;
    PUSH32(esp, 0x5FBC78);
    ebx = ebx + eax;
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_00233790: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x3C);
    esp = esp + 0x10;
    edi++;
    if (CMP_L(edi, ecx)) goto loc_00233776; /* jl: less (signed <) */

loc_0023379C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002337B0
 * Original: 0x002337B0 - 0x002337F9 (73 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002337B0(void)
{

loc_002337B0: ;
    SET_LO8(edx, MEM8(esp + 8));
    ecx = 0; /* xor self */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x2C) = ecx;
    MEM8(eax + 0x30) = LO8(ecx);
    MEM16(eax + 0x32) = LO16(ecx);
    SET_LO8(ecx, MEM8(esp + 4));
    MEM8(eax + 0x34) = LO8(ecx);
    SET_LO8(ecx, MEM8(esp + 0xC));
    MEM32(eax + 8) = 0xFFFFFFFFu;
    MEM32(eax) = 0x5FA230;
    MEM8(eax + 0x36) = LO8(edx);
    MEM8(eax + 0x35) = LO8(ecx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00233800
 * Original: 0x00233800 - 0x00233806 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00233800(void)
{

loc_00233800: ;
    eax = 0x1E;
    esp += 4; return; /* ret */

}

/**
 * sub_00233810
 * Original: 0x00233810 - 0x00233860 (80 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00233810(void)
{
    int _flags = 0; /* fallback flag var */

loc_00233810: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_00233818: ;
    edx = 0; /* xor self */
    ecx = 0x6BE940;
    /* nop */

loc_00233820: ;
    if (CMP_EQ(MEM32(ecx), eax)) { sub_00233860(); return; } /* je: equal / zero */

loc_00233824: ;
    ecx = ecx + 0x10;
    edx++;
    if (CMP_L(ecx, 0x6BED90)) goto loc_00233820; /* jl: less (signed <) */

loc_00233830: ;
    edx = 0x600E6C;
    ecx = ZX8(MEM8(esi + 0x36));
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x35);
    PUSH32(esp, ecx);
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x34);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, 0x5FBC50);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_00233859: ;
    esp = esp + 0x1C;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00233870
 * Original: 0x00233870 - 0x002338E1 (113 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00233870(void)
{
    int _flags = 0; /* fallback flag var */

loc_00233870: ;
    esp = esp - 0x200;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x100);
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    MEM32(ebx) = eax;
    esi = ebx + 4;
    PUSH32(esp, edx);
    MEM32(esi) = 0;
    PUSH32(esp, 0); sub_0046FCD6(); /* call 0x0046FCD6 */

loc_00233893: ;
    PUSH32(esp, 0x100);
    eax = esp + 0x18;
    PUSH32(esp, 0x5FBC18);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470655(); /* call 0x00470655 */

loc_002338A7: ;
    eax = MEM32(esi);
    esp = esp + 0x18;
    if (TEST_Z(eax, eax)) goto loc_002338CB; /* je: equal / zero */

loc_002338B0: ;
    ecx = MEM32(esi + 4);
    edi = MEM32(ecx);
    eax = esi + 4;
    edi--;
    MEM32(ecx) = edi;
    ecx = MEM32(eax);
    if (CMP_NE(MEM32(ecx), 0)) goto loc_002338CB; /* jne: not equal / not zero */

loc_002338C2: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_002338C8: ;
    esp = esp + 4;

loc_002338CB: ;
    edi = esp + 8;
    eax = esi;
    PUSH32(esp, 0); sub_00060900(); /* call 0x00060900 */

loc_002338D6: ;
    POP32(esp, edi);
    eax = ebx;
    POP32(esp, esi);
    esp = esp + 0x200;
    esp += 4; return; /* ret */

}

/**
 * sub_002338F0
 * Original: 0x002338F0 - 0x0023396B (123 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002338F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002338F0: ;
    esp = esp - 0x200;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 4);
    PUSH32(esp, edi);
    esi = esi + 4;
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046FCD6(); /* call 0x0046FCD6 */

loc_00233910: ;
    edx = MEM32(esp + 0x218);
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E470(); /* call 0x0046E470 */

loc_00233922: ;
    ecx = esp + 0x1C;
    PUSH32(esp, 0x5FBC18);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046E470(); /* call 0x0046E470 */

loc_00233931: ;
    eax = MEM32(esi);
    esp = esp + 0x1C;
    if (TEST_Z(eax, eax)) goto loc_00233955; /* je: equal / zero */

loc_0023393A: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx);
    eax = esi + 4;
    edx--;
    MEM32(ecx) = edx;
    edx = MEM32(eax);
    if (CMP_NE(MEM32(edx), 0)) goto loc_00233955; /* jne: not equal / not zero */

loc_0023394C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00233952: ;
    esp = esp + 4;

loc_00233955: ;
    edi = esp + 8;
    eax = esi;
    PUSH32(esp, 0); sub_00060900(); /* call 0x00060900 */

loc_00233960: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x200;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00233970
 * Original: 0x00233970 - 0x00233B09 (409 bytes, 122 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00233970(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00233970: ;
    esp = esp - 0x28C;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x298);
    eax = MEM32(ebp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_EQ(eax, edi)) goto loc_0023399B; /* je: equal / zero */

loc_0023398A: ;
    MEM32(esp + 0x10) = eax;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00233998: ;
    esp = esp + 4;

loc_0023399B: ;
    ecx = MEM32(esp + 0x2A8);
    ebx = 1;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5FBC0C);
    edx = esp + 0xA8;
    PUSH32(esp, 0x100);
    PUSH32(esp, edx);
    MEM32(ebp + 4) = edi;
    MEM32(ebp + 8) = edi;
    MEM32(ebp + 0xC) = edi;
    PUSH32(esp, 0); sub_0046EE4A(); /* call 0x0046EE4A */

loc_002339C9: ;
    eax = esp + 0xB0;
    PUSH32(esp, eax);
    PUSH32(esp, 0x5D718C);
    ecx = esp + 0x38;
    PUSH32(esp, 0x7F);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_002339E2: ;
    esi = MEM32(esp + 0x2C8);
    ecx = MEM32(esi + 4);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    eax = esp + 0x44;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEM8(esp + 0xCB) = 0;
    PUSH32(esp, 0); sub_003F9D60(); /* call 0x003F9D60 */

loc_00233A04: ;
    esp = esp + 0x30;
    if (TEST_Z(eax, eax)) goto loc_00233AFC; /* je: equal / zero */

loc_00233A0F: ;
    goto loc_00233A20;

loc_00233A11: ;
    esi = MEM32(esp + 0x2A4);
    edi = 0; /* xor self */
    /* nop */

loc_00233A20: ;
    if (CMP_NE(MEM16(esp + 0x9C), LO16(edi))) goto loc_00233A30; /* jne: not equal / not zero */

loc_00233A2A: ;
    MEM32(esp + 0x10) = edi;
    goto loc_00233A62;

loc_00233A30: ;
    ecx = MEM32(esi + 4);
    edi = MEM32(esi);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    eax = esp + 0xA0;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003F9CB0(); /* call 0x003F9CB0 */

loc_00233A48: ;
    esp = esp + 0xC;
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_00233A5A; /* jne: not equal / not zero */

loc_00233A50: ;
    MEM32(esp + 0x10) = 0x5F654C;
    goto loc_00233A62;

loc_00233A5A: ;
    edx = MEM32(esp + 0x18);
    MEM32(esp + 0x10) = edx;

loc_00233A62: ;
    edi = MEM32(ebp + 0x18);
    esi = MEM32(ebp + 0x14);
    if (CMP_EQ(esi, edi)) goto loc_00233A8C; /* je: equal / zero */

loc_00233A6C: ;
    /* nop */

loc_00233A70: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00470101(); /* call 0x00470101 */

loc_00233A7E: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_00233A8C; /* je: equal / zero */

loc_00233A85: ;
    esi = esi + 0x18;
    if (CMP_NE(esi, edi)) goto loc_00233A70; /* jne: not equal / not zero */

loc_00233A8C: ;
    ecx = esi;
    eax = ebp;
    PUSH32(esp, 0); sub_001CD5F0(); /* call 0x001CD5F0 */

loc_00233A95: ;
    edx = MEM32(esp + 0x2A8);
    ebx++;
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x5FBC0C);
    eax = esp + 0xA8;
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046EE4A(); /* call 0x0046EE4A */

loc_00233AB6: ;
    ecx = esp + 0xB0;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5D718C);
    edx = esp + 0x38;
    PUSH32(esp, 0x7F);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_00233ACF: ;
    edx = MEM32(esp + 0x2C8);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    eax = MEM32(edx + 4);
    ecx = esp + 0x44;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    MEM8(esp + 0xCB) = 0;
    PUSH32(esp, 0); sub_003F9D60(); /* call 0x003F9D60 */

loc_00233AF1: ;
    esp = esp + 0x30;
    if (TEST_NZ(eax, eax)) goto loc_00233A11; /* jne: not equal / not zero */

loc_00233AFC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x28C;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00233B10
 * Original: 0x00233B10 - 0x00233BB7 (167 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00233B10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00233B10: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(edi + 0x18);
    PUSH32(esp, esi);
    esi = MEM32(edi + 0x14);
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(edi + 0x2C) = 0xFFFFFFFFu;
    if (CMP_EQ(esi, ebx)) goto loc_00233B36; /* je: equal / zero */

loc_00233B24: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00252030(); /* call 0x00252030 */

loc_00233B2C: ;
    esi = esi + 0x18;
    esp = esp + 4;
    if (CMP_NE(esi, ebx)) goto loc_00233B24; /* jne: not equal / not zero */

loc_00233B36: ;
    esi = MEM32(edi + 0x28);
    if (TEST_Z(esi, esi)) goto loc_00233B55; /* je: equal / zero */

loc_00233B3D: ;
    eax = esi;
    PUSH32(esp, 0); sub_001F4FC0(); /* call 0x001F4FC0 */

loc_00233B44: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00233B52: ;
    esp = esp + 4;

loc_00233B55: ;
    eax = MEM32(esp + 0x10);
    ebx = 0; /* xor self */
    eax = eax - ebx;
    if ((eax == 0)) goto loc_00233B85; /* je: equal / zero */

loc_00233B5F: ;
    eax = eax - 2;
    if ((eax == 0)) goto loc_00233B77; /* je: equal / zero */

loc_00233B64: ;
    eax = eax - 2;
    if ((eax != 0)) goto loc_00233B91; /* jne: not equal / not zero */

loc_00233B69: ;
    ebx = 0x5FBBD4;
    MEM32(edi + 0x30) = 2;
    goto loc_00233B91;

loc_00233B77: ;
    ebx = 0x5FBBE4;
    MEM32(edi + 0x30) = 1;
    goto loc_00233B91;

loc_00233B85: ;
    ebx = 0x5FBBF8;
    MEM32(edi + 0x30) = 0;

loc_00233B91: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0); sub_00043830(); /* call 0x00043830 */

loc_00233B98: ;
    esi = eax;
    esp = esp + 4;
    if (TEST_Z(esi, esi)) { sub_00233BB7(); return; } /* je: equal / zero */

loc_00233BA1: ;
    edx = esi + 4;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    ecx = 0x5FBBC0;
    eax = ebx;
    PUSH32(esp, 0); sub_001F51A0(); /* call 0x001F51A0 */

loc_00233BB2: ;
    esp = esp + 8;
    g_seh_ebp = ebp; sub_00233BB9(); return; /* tail jmp 0x00233BB9 */

}

/**
 * sub_00233BD0
 * Original: 0x00233BD0 - 0x00233D96 (454 bytes, 138 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00233BD0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00233BD0: ;
    esp = esp - 0x230;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x238);
    eax = MEM32(ebp + 0x20);
    ecx = MEM32(ebp + 4);
    eax = eax + eax * 2;
    PUSH32(esp, esi);
    eax = ecx + eax * 8;
    eax = MEM32(eax + 0x14);
    edx = esp + 0x1C;
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_002928E0(); /* call 0x002928E0 */

loc_00233BF9: ;
    eax = MEM32(ebp + 0x20);
    ecx = MEM32(ebp + 4);
    xmm0 = MEMF(0x648D14); /* movss */
    eax = eax + eax * 2;
    esi = ebp + 0x34;
    edi = ebp + 0x38;
    SET_LO8(edx, 0); /* xor self */
    eax = ecx + eax * 8;
    MEMF(esi) = xmm0; /* movss */
    MEMF(edi) = xmm0; /* movss */
    ecx = MEM32(eax + 0x14);
    esp = esp + 4;
    (void)0; /* cmp ecx, 5 - flags set for next jcc */
    MEM8(esp + 0x27) = LO8(edx);
    MEM8(esp + 0x34) = LO8(edx);
    MEM8(esp + 0x36) = LO8(edx);
    MEM8(esp + 0x38) = LO8(edx);
    if (CMP_A(ecx, 5)) goto loc_00233C48; /* ja: above (unsigned >) */

loc_00233C38: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(ecx * 4 + 0x233DA0)); return; /* indirect tail jmp */

    MEM8(esp + 0x27) = LO8(edx);
    MEM8(esp + 0x31) = 0x14;

loc_00233C48: ;
    edx = MEM32(eax + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x100);
    PUSH32(esp, edx);
    eax = esp + 0x48;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046FCD6(); /* call 0x0046FCD6 */

loc_00233C5C: ;
    ecx = esp + 0x4C;
    PUSH32(esp, 0x5FBB98);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046E470(); /* call 0x0046E470 */

loc_00233C6B: ;
    eax = MEM32(ebp + 0x20);
    edx = eax + eax * 2;
    eax = MEM32(ebp + 4);
    ecx = MEM32(eax + edx * 8 + 0x10);
    eax = eax + edx * 8;
    eax = MEM32(ebp + 0x28);
    esp = esp + 0x14;
    ebx = esp + 0x18;
    PUSH32(esp, 0); sub_00233870(); /* call 0x00233870 */

loc_00233C8A: ;
    ecx = esp + 0x13;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5FBB84);
    eax = ebx;
    PUSH32(esp, 0); sub_002467C0(); /* call 0x002467C0 */

loc_00233C9B: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00233CA7; /* je: equal / zero */

loc_00233C9F: ;
    SET_LO8(edx, MEM8(esp + 0x13));
    MEM8(esp + 0x35) = LO8(edx);

loc_00233CA7: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x5FBB6C);
    eax = esp + 0x20;
    PUSH32(esp, 0); sub_00246F90(); /* call 0x00246F90 */

loc_00233CBA: ;
    ebx = MEM32(esp + 0x14);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    PUSH32(esp, esi);
    PUSH32(esp, 0x5FBB50);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & ebx;
    MEM32(ebp + 0x3C) = eax;
    eax = esp + 0x20;
    PUSH32(esp, 0); sub_00246870(); /* call 0x00246870 */

loc_00233CD6: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x5FBB30);
    eax = esp + 0x20;
    PUSH32(esp, 0); sub_00246870(); /* call 0x00246870 */

loc_00233CE5: ;
    ecx = 6;
    esi = esp + 0x24;
    edi = 0x862C84;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM16(edi) = MEM16(esi); esi += 2; edi += 2; /* movsw */
    eax = MEM32(ebp + 0x20);
    edx = MEM32(ebp + 4);
    ecx = eax + eax * 2;
    eax = edx + ecx * 8;
    ecx = MEM32(ebp + 0x24);
    edx = MEM32(eax + 0x10);
    eax = MEM32(ebp + 0x28);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0023E4E0(); /* call 0x0023E4E0 */

loc_00233D14: ;
    SET_LO8(eax, MEM8(esp + 0x254));
    esp = esp + 0xC;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    POP32(esp, ebx);
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00233D6D; /* jne: not equal / not zero */

loc_00233D23: ;
    ecx = esp + 0xF;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0x5FBB20);
    eax = esp + 0x20;
    PUSH32(esp, 0); sub_00247040(); /* call 0x00247040 */

loc_00233D3B: ;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    ecx = 2;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00233D48; /* je: equal / zero */

loc_00233D44: ;
    ecx = MEM32(esp + 0x10);

loc_00233D48: ;
    eax = ZX8(MEM8(0x864EBF));
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    MEM32(ebp + 0x2C) = eax;
    PUSH32(esp, 0); sub_00263010(); /* call 0x00263010 */

loc_00233D59: ;
    MEM8(0x864EBF) = LO8(eax);
    SET_LO8(eax, MEM8(0x86E983));
    esp = esp + 8;
    SET_LO8(eax, LO8(eax) | 1);
    MEM8(0x86E983) = LO8(eax);

loc_00233D6D: ;
    eax = MEM32(esp + 0x18);
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    if (TEST_Z(eax, eax)) goto loc_00233D8D; /* je: equal / zero */

loc_00233D78: ;
    eax = MEM32(esp + 0x10);
    MEM32(eax) = MEM32(eax) - 1;
    if ((MEM32(eax) != 0)) goto loc_00233D8D; /* jne: not equal / not zero */

loc_00233D80: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00233D8A: ;
    esp = esp + 4;

loc_00233D8D: ;
    esp = esp + 0x230;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00233DC0
 * Original: 0x00233DC0 - 0x00233DD4 (20 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00233DC0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00233DC0: ;
    eax = MEM32(esi + 4);
    if (TEST_NZ(eax, eax)) { sub_00233DD4(); return; } /* jne: not equal / not zero */

loc_00233DC7: ;
    edx = MEM32(esi + 0x20);
    ecx = 0; /* xor self */
    (void)0; /* cmp edx, eax - flags set for next jcc */
    SET_LO8(ecx, (CMP_EQ(edx, eax)) ? 1 : 0); /* sete */
    SET_LO8(eax, LO8(ecx));
    esp += 4; return; /* ret */

}

/**
 * sub_00233E00
 * Original: 0x00233E00 - 0x00233E46 (70 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00233E00(void)
{
    int _flags = 0; /* fallback flag var */

loc_00233E00: ;
    SET_LO8(ecx, MEM8(0x877DBC));
    eax = 1;
    if (TEST_NZ(LO8(eax), LO8(ecx))) goto loc_00233E40; /* jne: not equal / not zero */

loc_00233E0F: ;
    edx = MEM32(0x877DBC);
    edx = edx | eax;
    eax = 0; /* xor self */
    PUSH32(esp, 0x48C8B0);
    MEM32(0x877DBC) = edx;
    MEM32(0x877DAC) = eax;
    MEM32(0x877DB0) = eax;
    MEM32(0x877DB4) = eax;
    MEM32(0x877DB8) = eax;
    PUSH32(esp, 0); sub_0046ED65(); /* call 0x0046ED65 */

loc_00233E3D: ;
    esp = esp + 4;

loc_00233E40: ;
    eax = 0x877DA8;
    esp += 4; return; /* ret */

}

/**
 * sub_00233E50
 * Original: 0x00233E50 - 0x00233E70 (32 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00233E50(void)
{
    int _flags = 0; /* fallback flag var */

loc_00233E50: ;
    edx = MEM32(ecx + 4);
    if (CMP_NE(edx, MEM32(eax + 4))) { sub_00233E70(); return; } /* jne: not equal / not zero */

loc_00233E58: ;
    eax = MEM32(eax);
    ecx = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00470101(); /* call 0x00470101 */

loc_00233E63: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) { sub_00233E70(); return; } /* jne: not equal / not zero */

loc_00233E6A: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00233E80
 * Original: 0x00233E80 - 0x00233EA7 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00233E80(void)
{
    int _flags = 0; /* fallback flag var */

loc_00233E80: ;
    (void)0; /* test MEM8(esp + 4), 1 - flags set for next jcc */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x5FA19C;
    if (TEST_Z(MEM8(esp + 4), 1)) goto loc_00233EA1; /* je: equal / zero */

loc_00233E90: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00233E9E: ;
    esp = esp + 4;

loc_00233EA1: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00233EB0
 * Original: 0x00233EB0 - 0x00233EC5 (21 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00233EB0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00233EB0: ;
    SET_LO8(eax, MEM8(ecx + 0xC));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00233EC2; /* je: equal / zero */

loc_00233EB7: ;
    eax = MEM32(esp + 4);
    MEM8(eax + 0x108) = 1;

loc_00233EC2: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00233ED0
 * Original: 0x00233ED0 - 0x00233ED6 (6 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00233ED0(void)
{

loc_00233ED0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx + 8), _icall_esp); /* indirect call */
    }

loc_00233ED3: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_00233EE0
 * Original: 0x00233EE0 - 0x00233F09 (41 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00233EE0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00233EE0: ;
    edx = MEM32(esp + 4);
    MEM8(edx + 0x101) = 1;
    SET_LO8(eax, MEM8(ecx + 0xC));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    ecx = MEM32(ecx + 8);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(ecx));
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00233F09(); return; } /* je: equal / zero */

loc_00233EF8: ;
    eax = 0; /* xor self */
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    SET_LO8(eax, (TEST_Z(LO8(ebx), LO8(ebx))) ? 1 : 0); /* sete */
    MEM8(edx + 0x102) = LO8(eax);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00233F20
 * Original: 0x00233F20 - 0x00233F25 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00233F20(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00233F20: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 4)); return; /* indirect tail jmp */

}

/**
 * sub_00233F40
 * Original: 0x00233F40 - 0x00233F77 (55 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00233F40(void)
{

loc_00233F40: ;
    ecx = 0; /* xor self */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = edx;
    SET_LO8(edx, MEM8(esp + 4));
    MEM8(eax + 0xC) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 8));
    MEM8(eax + 0xD) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x10));
    MEM8(eax + 0xE) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0xC));
    MEM8(eax + 0xF) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x14));
    MEM32(eax) = 0x5FA124;
    MEM8(eax + 0x10) = LO8(edx);
    MEM32(eax + 0x14) = ecx;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00233F80
 * Original: 0x00233F80 - 0x00233FB5 (53 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00233F80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00233F80: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x10));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00233FB5(); return; } /* je: equal / zero */

loc_00233F8B: ;
    eax = MEM32(esi + 8);
    if (CMP_NE(MEM8(eax), 0)) { sub_00233FB5(); return; } /* jne: not equal / not zero */

loc_00233F93: ;
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x5F818C;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_00233F9F: ;
    edi = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    ecx = edi + 0x80;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046E49A(); /* call 0x0046E49A */

loc_00233FB0: ;
    esp = esp + 8;
    g_seh_ebp = ebp; sub_00233FFA(); return; /* tail jmp 0x00233FFA */

}

/**
 * sub_00234030
 * Original: 0x00234030 - 0x00234059 (41 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00234030(void)
{
    int _flags = 0; /* fallback flag var */

loc_00234030: ;
    eax = MEM32(ecx + 8);
    SET_LO8(edx, MEM8(ecx + 0xE));
    PUSH32(esp, ebx);
    MEM8(eax) = MEM8(eax) + LO8(edx);
    edx = MEM32(ecx + 8);
    SET_LO8(ebx, MEM8(edx));
    SET_LO8(eax, MEM8(ecx + 0xD));
    (void)0; /* cmp LO8(ebx), LO8(eax) - flags set for next jcc */
    POP32(esp, ebx);
    if (CMP_LE(LO8(ebx), LO8(eax))) { sub_00234059(); return; } /* jle: less or equal (signed <=) */

loc_00234046: ;
    SET_LO8(edx, MEM8(ecx + 0xF));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_00234050; /* je: equal / zero */

loc_0023404D: ;
    SET_LO8(eax, MEM8(ecx + 0xC));

loc_00234050: ;
    edx = MEM32(ecx + 8);
    MEM8(edx) = LO8(eax);
    SET_LO8(eax, MEM8(ecx + 0xF));
    esp += 4; return; /* ret */

}

/**
 * sub_00234060
 * Original: 0x00234060 - 0x00234089 (41 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00234060(void)
{
    int _flags = 0; /* fallback flag var */

loc_00234060: ;
    eax = MEM32(ecx + 8);
    SET_LO8(edx, MEM8(ecx + 0xE));
    PUSH32(esp, ebx);
    MEM8(eax) = MEM8(eax) - LO8(edx);
    edx = MEM32(ecx + 8);
    SET_LO8(ebx, MEM8(edx));
    SET_LO8(eax, MEM8(ecx + 0xC));
    (void)0; /* cmp LO8(ebx), LO8(eax) - flags set for next jcc */
    POP32(esp, ebx);
    if (CMP_GE(LO8(ebx), LO8(eax))) { sub_00234089(); return; } /* jge: greater or equal (signed >=) */

loc_00234076: ;
    SET_LO8(edx, MEM8(ecx + 0xF));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_00234080; /* je: equal / zero */

loc_0023407D: ;
    SET_LO8(eax, MEM8(ecx + 0xD));

loc_00234080: ;
    edx = MEM32(ecx + 8);
    MEM8(edx) = LO8(eax);
    SET_LO8(eax, MEM8(ecx + 0xF));
    esp += 4; return; /* ret */

}

/**
 * sub_00234090
 * Original: 0x00234090 - 0x0023413E (174 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00234090(void)
{
    int _flags = 0; /* fallback flag var */

loc_00234090: ;
    eax = MEM32(0x875800);
    if (TEST_NZ(eax, eax)) goto loc_0023413D; /* jne: not equal / not zero */

loc_0023409D: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_002340AB; /* jne: not equal / not zero */

loc_002340A6: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_002340AB: ;
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
    if (TEST_Z(esi, esi)) goto loc_002340FD; /* je: equal / zero */

loc_002340D3: ;
    if (CMP_B(MEM32(esi + 0x80), 0x220)) goto loc_002340FD; /* jb: below (unsigned <) */

loc_002340DF: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002340E9: ;
    PUSH32(esp, 0x220);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002340F4: ;
    esi = eax;
    esp = esp + 8;
    if (TEST_NZ(esi, esi)) goto loc_00234123; /* jne: not equal / not zero */

loc_002340FD: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0023410F: ;
    PUSH32(esp, 0x220);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0023411A: ;
    esi = eax;
    esp = esp + 8;
    if (TEST_Z(esi, esi)) goto loc_00234134; /* je: equal / zero */

loc_00234123: ;
    eax = esi;
    PUSH32(esp, 0); sub_00234140(); /* call 0x00234140 */

loc_0023412A: ;
    eax = esi;
    POP32(esp, edi);
    MEM32(0x875800) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00234134: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    MEM32(0x875800) = eax;
    POP32(esp, esi);

loc_0023413D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00234140
 * Original: 0x00234140 - 0x00234193 (83 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00234140(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00234140: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = eax;
    ebp = 0x75E7A0;
    /* nop */
    esi = MEM32(0x8755F4);
    (void)0; /* test esi, esi - flags set for next jcc */
    edi = MEM32(ebp);
    if (TEST_NZ(esi, esi)) goto loc_00234189; /* jne: not equal / not zero */

loc_0023415D: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0); sub_00043830(); /* call 0x00043830 */

loc_00234164: ;
    esi = eax;
    esp = esp + 4;
    if (TEST_Z(esi, esi)) goto loc_00234181; /* je: equal / zero */

loc_0023416D: ;
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = 0x5D4FB4;
    PUSH32(esp, 0); sub_001F5020(); /* call 0x001F5020 */

loc_0023417C: ;
    esp = esp + 8;
    goto loc_00234183;

loc_00234181: ;
    esi = 0; /* xor self */

loc_00234183: ;
    MEM32(0x8755F4) = esi;

loc_00234189: ;
    if (CMP_NE(MEM16(edi), 0)) { sub_00234193(); return; } /* jne: not equal / not zero */

loc_0023418F: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_002341B5(); return; /* tail jmp 0x002341B5 */

}

/**
 * sub_002341E0
 * Original: 0x002341E0 - 0x00234221 (65 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002341E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002341E0: ;
    eax = MEM32(0x862CD0);
    if (TEST_Z(eax, eax)) { sub_00234221(); return; } /* je: equal / zero */

loc_002341E9: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    edi = ecx;
    /* nop */

loc_002341F0: ;
    eax = MEM32(0x862CD0);
    PUSH32(esp, 0x10);
    ecx = esi + eax + 0x1202;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0046FCD6(); /* call 0x0046FCD6 */

loc_00234205: ;
    MEM16(edi + 0x20) = 0;
    esi = esi + 0x22;
    esp = esp + 0xC;
    edi = edi + 0x22;
    if (CMP_L(esi, 0x220)) goto loc_002341F0; /* jl: less (signed <) */

loc_0023421C: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00234230
 * Original: 0x00234230 - 0x00234249 (25 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00234230(void)
{
    int _flags = 0; /* fallback flag var */

loc_00234230: ;
    eax = MEM32(0x863D04);
    if (CMP_EQ(eax, 3)) { sub_00234249(); return; } /* je: equal / zero */

loc_0023423A: ;
    if (CMP_EQ(eax, 2)) { sub_00234249(); return; } /* je: equal / zero */

loc_0023423F: ;
    MEM8(0x849C0F) = 0;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_00234260
 * Original: 0x00234260 - 0x00234299 (57 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00234260(void)
{
    int _flags = 0; /* fallback flag var */

loc_00234260: ;
    edx = MEM32(0x8626E8);
    (void)0; /* test edx, edx - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(0x8626EC);
    if (TEST_Z(edx, edx)) { sub_00234299(); return; } /* je: equal / zero */

loc_00234271: ;
    ecx = MEM32(0x8626F0);
    eax = esi;
    eax = eax - edx;
    ecx = ecx - edx;
    eax = (uint32_t)((int32_t)eax >> 2);
    ecx = (uint32_t)((int32_t)ecx >> 2);
    if (CMP_AE(eax, ecx)) { sub_00234299(); return; } /* jae: above or equal (unsigned >=) */

loc_00234287: ;
    ecx = MEM32(esp + 8);
    eax = esi;
    MEM32(esi) = ecx;
    eax = eax + 4;
    MEM32(0x8626EC) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002342B0
 * Original: 0x002342B0 - 0x002342DC (44 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002342B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002342B0: ;
    eax = MEM32(0x8626EC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + -4), _icall_esp); /* indirect call */
    }

loc_002342B8: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002342DB; /* je: equal / zero */

loc_002342BC: ;
    ecx = MEM32(0x8626E8);
    if (TEST_Z(ecx, ecx)) goto loc_002342DB; /* je: equal / zero */

loc_002342C6: ;
    eax = MEM32(0x8626EC);
    eax = eax - ecx;
    eax = (uint32_t)((int32_t)eax >> 2);
    if (TEST_Z(eax, eax)) goto loc_002342DB; /* je: equal / zero */

loc_002342D4: ;
    MEM32(0x8626EC) = MEM32(0x8626EC) - 4;

loc_002342DB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002342E0
 * Original: 0x002342E0 - 0x00234314 (52 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002342E0(void)
{

loc_002342E0: ;
    esp = esp - 8;
    ecx = MEM32(0x849B84);
    PUSH32(esp, esi);
    edx = esp + 4;
    esi = 0x8626D4;
    MEM32(0x6BD930) = eax;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    PUSH32(esp, 0); sub_001DFC00(); /* call 0x001DFC00 */

loc_00234305: ;
    MEM32(0x849B84) = 0x26;
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00234320
 * Original: 0x00234320 - 0x00234361 (65 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00234320(void)
{
    int _flags = 0; /* fallback flag var */

loc_00234320: ;
    ecx = MEM32(0x8626DC);
    eax = MEM32(ecx + -8);
    edx = MEM32(0x8626D8);
    (void)0; /* test edx, edx - flags set for next jcc */
    MEM32(0x849B84) = eax;
    MEM32(0x6BD930) = 0xA;
    MEM32(0x776238) = 0;
    if (TEST_Z(edx, edx)) goto loc_00234360; /* je: equal / zero */

loc_0023434C: ;
    eax = ecx;
    eax = eax - edx;
    eax = (uint32_t)((int32_t)eax >> 3);
    if (TEST_Z(eax, eax)) goto loc_00234360; /* je: equal / zero */

loc_00234357: ;
    ecx = ecx - 8;
    MEM32(0x8626DC) = ecx;

loc_00234360: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00234370
 * Original: 0x00234370 - 0x002343AF (63 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00234370(void)
{

loc_00234370: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x8626D8);
    ecx = MEM32(eax);
    edx = esp;
    PUSH32(esp, edx);
    MEM32(0x849B84) = ecx;
    MEM32(0x6BD930) = 0xA;
    MEM32(esp + 4) = eax;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00234395: ;
    eax = 0; /* xor self */
    MEM32(0x8626D8) = eax;
    MEM32(0x8626DC) = eax;
    MEM32(0x8626E0) = eax;
    MEM32(0x776238) = eax;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_002343B0
 * Original: 0x002343B0 - 0x002343CD (29 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002343B0(void)
{

loc_002343B0: ;
    PUSH32(esp, esi);
    esi = MEM32(0x6BD930);
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_0003C1E0(); /* call 0x0003C1E0 */

loc_002343BE: ;
    eax = MEM32(eax + 0x10);
    ecx = MEM32(eax + esi * 4);
    eax = eax + esi * 4;
    MEM8(ecx + 0x30) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002343D0
 * Original: 0x002343D0 - 0x002345B0 (480 bytes, 131 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002343D0(void)
{

loc_002343D0: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x5FB52C);
    MEM32(0x777EC4) = 0;
    PUSH32(esp, 0); sub_002347D0(); /* call 0x002347D0 */

loc_002343E8: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x5FB50C);
    PUSH32(esp, 0); sub_002347D0(); /* call 0x002347D0 */

loc_002343F6: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x5FB4EC);
    PUSH32(esp, 0); sub_002347D0(); /* call 0x002347D0 */

loc_00234404: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x5FB4D0);
    PUSH32(esp, 0); sub_002347D0(); /* call 0x002347D0 */

loc_00234412: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x5FB4B4);
    PUSH32(esp, 0); sub_002347D0(); /* call 0x002347D0 */

loc_00234420: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x5FB498);
    PUSH32(esp, 0); sub_002347D0(); /* call 0x002347D0 */

loc_0023442E: ;
    esp = esp + 0x48;
    PUSH32(esp, 1);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x5FB47C);
    PUSH32(esp, 0); sub_002347D0(); /* call 0x002347D0 */

loc_0023443F: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x5FB45C);
    PUSH32(esp, 0); sub_002347D0(); /* call 0x002347D0 */

loc_0023444D: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x5FB440);
    PUSH32(esp, 0); sub_002347D0(); /* call 0x002347D0 */

loc_0023445B: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x5FB428);
    PUSH32(esp, 0); sub_002347D0(); /* call 0x002347D0 */

loc_00234469: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x5FB40C);
    PUSH32(esp, 0); sub_002347D0(); /* call 0x002347D0 */

loc_00234477: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x5FB3F4);
    PUSH32(esp, 0); sub_002347D0(); /* call 0x002347D0 */

loc_00234485: ;
    esp = esp + 0x48;
    PUSH32(esp, 2);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x5FB3D0);
    PUSH32(esp, 0); sub_002347D0(); /* call 0x002347D0 */

loc_00234496: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x5FB3AC);
    PUSH32(esp, 0); sub_002347D0(); /* call 0x002347D0 */

loc_002344A4: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x5FB388);
    PUSH32(esp, 0); sub_002347D0(); /* call 0x002347D0 */

loc_002344B2: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x5FB368);
    PUSH32(esp, 0); sub_002347D0(); /* call 0x002347D0 */

loc_002344C0: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x5FB348);
    PUSH32(esp, 0); sub_002347D0(); /* call 0x002347D0 */

loc_002344CE: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x5FB328);
    PUSH32(esp, 0); sub_002347D0(); /* call 0x002347D0 */

loc_002344DC: ;
    esp = esp + 0x48;
    PUSH32(esp, 1);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x5FB308);
    PUSH32(esp, 0); sub_002347D0(); /* call 0x002347D0 */

loc_002344ED: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x5FB2E4);
    PUSH32(esp, 0); sub_002347D0(); /* call 0x002347D0 */

loc_002344FB: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x5FB2C4);
    PUSH32(esp, 0); sub_002347D0(); /* call 0x002347D0 */

loc_00234509: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x5FB2A8);
    PUSH32(esp, 0); sub_002347D0(); /* call 0x002347D0 */

loc_00234517: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x5FB288);
    PUSH32(esp, 0); sub_002347D0(); /* call 0x002347D0 */

loc_00234525: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x5FB26C);
    PUSH32(esp, 0); sub_002347D0(); /* call 0x002347D0 */

loc_00234533: ;
    esp = esp + 0x48;
    PUSH32(esp, 0);
    PUSH32(esp, 0x5DF7D4);
    PUSH32(esp, 0); sub_00234B30(); /* call 0x00234B30 */

loc_00234542: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x5FB260);
    PUSH32(esp, 0); sub_00234B30(); /* call 0x00234B30 */

loc_0023454E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x5FB258);
    PUSH32(esp, 0); sub_00234B30(); /* call 0x00234B30 */

loc_0023455A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x5FB250);
    PUSH32(esp, 0); sub_00234B30(); /* call 0x00234B30 */

loc_00234566: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x5FB244);
    PUSH32(esp, 0); sub_00234B30(); /* call 0x00234B30 */

loc_00234572: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x5FB238);
    PUSH32(esp, 0); sub_00234B30(); /* call 0x00234B30 */

loc_0023457E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x5FB22C);
    PUSH32(esp, 0); sub_00234B30(); /* call 0x00234B30 */

loc_0023458A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x5FB224);
    PUSH32(esp, 0); sub_00234B30(); /* call 0x00234B30 */

loc_00234596: ;
    esp = esp + 0x40;
    PUSH32(esp, 0); sub_00234630(); /* call 0x00234630 */

loc_0023459E: ;
    eax = 0x5FB208;
    PUSH32(esp, 0); sub_002353D0(); /* call 0x002353D0 */

loc_002345A8: ;
    MEM8(0x849B80) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_002345B0
 * Original: 0x002345B0 - 0x00234626 (118 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002345B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002345B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = ebx;
    PUSH32(esp, 0); sub_00060BD0(); /* call 0x00060BD0 */

loc_002345B9: ;
    esi = eax;
    esp = esp + 4;
    if (TEST_Z(esi, esi)) goto loc_00234624; /* je: equal / zero */

loc_002345C2: ;
    PUSH32(esp, edi);

loc_002345C3: ;
    ecx = MEM32(esi + 0x44);
    SET_LO8(eax, MEM8(ecx + 0x124));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002345DD; /* jne: not equal / not zero */

loc_002345D0: ;
    edx = esi + 0x10;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00234B30(); /* call 0x00234B30 */

loc_002345DA: ;
    esp = esp + 8;

loc_002345DD: ;
    esi = MEM32(esi + 0xC);
    if (TEST_Z(esi, esi)) goto loc_00234623; /* je: equal / zero */

loc_002345E4: ;
    SET_LO8(ecx, MEM8(esi + 0x10));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    eax = esi + 0x10;
    edx = ebx;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0023461F; /* je: equal / zero */

loc_002345F0: ;
    edi = eax;
    edi = edi - ebx;

loc_002345F4: ;
    SET_LO8(eax, MEM8(edx));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0023461F; /* je: equal / zero */

loc_002345FA: ;
    if (CMP_EQ(LO8(ecx), 0x2A)) goto loc_0023461F; /* je: equal / zero */

loc_002345FF: ;
    if (CMP_EQ(LO8(eax), 0x2A)) goto loc_0023461F; /* je: equal / zero */

loc_00234603: ;
    if (CMP_EQ(LO8(ecx), LO8(eax))) goto loc_0023460D; /* je: equal / zero */

loc_00234607: ;
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    if (TEST_NZ(LO8(eax), 0xDF)) goto loc_00234618; /* jne: not equal / not zero */

loc_0023460D: ;
    SET_LO8(ecx, MEM8(edi + edx + 1));
    edx++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_002345F4; /* jne: not equal / not zero */

loc_00234616: ;
    goto loc_0023461F;

loc_00234618: ;
    esi = MEM32(esi + 0xC);
    if (TEST_NZ(esi, esi)) goto loc_002345E4; /* jne: not equal / not zero */

loc_0023461F: ;
    if (TEST_NZ(esi, esi)) goto loc_002345C3; /* jne: not equal / not zero */

loc_00234623: ;
    POP32(esp, edi);

loc_00234624: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00234630
 * Original: 0x00234630 - 0x00234753 (291 bytes, 85 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00234630(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00234630: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_0023463E; /* jne: not equal / not zero */

loc_00234639: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0023463E: ;
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
    if (TEST_Z(esi, esi)) goto loc_0023468A; /* je: equal / zero */

loc_00234666: ;
    if (CMP_B(MEM32(esi + 0x80), 0x4C)) goto loc_0023468A; /* jb: below (unsigned <) */

loc_0023466F: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00234679: ;
    PUSH32(esp, 0x4C);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00234681: ;
    edi = eax;
    esp = esp + 8;
    if (TEST_NZ(edi, edi)) goto loc_002346A9; /* jne: not equal / not zero */

loc_0023468A: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0023469C: ;
    PUSH32(esp, 0x4C);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002346A4: ;
    esp = esp + 8;
    edi = eax;

loc_002346A9: ;
    eax = 0; /* xor self */
    MEM32(0x849C00) = edi;
    ecx = 0x13;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    PUSH32(esp, 0); sub_00243940(); /* call 0x00243940 */

loc_002346BD: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_002346CB; /* jne: not equal / not zero */

loc_002346C6: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_002346CB: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (TEST_Z(esi, esi)) goto loc_00234713; /* je: equal / zero */

loc_002346F1: ;
    if (CMP_B(MEM32(esi + 0x80), 0x10)) goto loc_00234713; /* jb: below (unsigned <) */

loc_002346FA: ;
    ecx = 4;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00234704: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0023470C: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_00234730; /* jne: not equal / not zero */

loc_00234713: ;
    esi = MEM32(0x84A184);
    ecx = 4;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00234725: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0023472D: ;
    esp = esp + 8;

loc_00234730: ;
    xmm0 = MEMF(0x648E5C); /* movss */
    ecx = 0; /* xor self */
    edx = eax;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    POP32(esp, edi);
    MEM32(edx + 0xC) = ecx;
    MEM32(0x849C04) = eax;
    MEMF(eax) = xmm0; /* movss */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00234760
 * Original: 0x00234760 - 0x002347C2 (98 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00234760(void)
{
    int _flags = 0; /* fallback flag var */

loc_00234760: ;
    esp = esp - 0x100;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 8;
    PUSH32(esp, 0x5AC8A0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046EC2D(); /* call 0x0046EC2D */

loc_00234777: ;
    eax = esp + 0x10;
    esp = esp + 0x10;
    edx = eax + 1;

loc_00234781: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00234781; /* jne: not equal / not zero */

loc_00234788: ;
    PUSH32(esp, 0xFFFFFFFFu);
    eax = eax - edx;
    PUSH32(esp, 0x2B2);
    eax++;
    PUSH32(esp, 0x5FB1B8);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_0023479D: ;
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_002347BB; /* je: equal / zero */

loc_002347A4: ;
    PUSH32(esp, esi);
    ecx = esp + 4;
    esi = eax;
    edx = ecx;
    esi = esi - edx;
    /* nop */

loc_002347B0: ;
    SET_LO8(edx, MEM8(ecx));
    MEM8(esi + ecx) = LO8(edx);
    ecx++;
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_002347B0; /* jne: not equal / not zero */

loc_002347BA: ;
    POP32(esp, esi);

loc_002347BB: ;
    esp = esp + 0x100;
    esp += 4; return; /* ret */

}

/**
 * sub_002347D0
 * Original: 0x002347D0 - 0x00234B24 (852 bytes, 247 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002347D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002347D0: ;
    esp = esp - 0x128;
    PUSH32(esp, ebp);
    ebp = MEM32(0x777EC4);
    (void)0; /* cmp ebp, 0x71 - flags set for next jcc */
    MEM32(esp + 0xC) = 0xFFFFFFFFu;
    if (CMP_GE(ebp, 0x71)) goto loc_00234B1C; /* jge: greater or equal (signed >=) */

loc_002347EE: ;
    eax = MEM32(esp + 0x134);
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_00234816; /* je: equal / zero */

loc_002347FC: ;
    edi = MEM32(esp + 0x138);
    ecx = eax + 1;
    eax = eax + 2;
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x10) = eax;
    goto loc_002348D2;

loc_00234816: ;
    if (CMP_NE(MEM32(esp + 0x140), 2)) goto loc_0023482C; /* jne: not equal / not zero */

loc_00234820: ;
    esi = 0x1A1;
    eax = 0x34;
    goto loc_00234836;

loc_0023482C: ;
    esi = 0x1D5;
    eax = 0x30;

loc_00234836: ;
    eax = eax + esi;
    if (CMP_GE(esi, eax)) goto loc_00234B1A; /* jge: greater or equal (signed >=) */

loc_00234840: ;
    ecx = MEM32(esi * 4 + 0x6A58F0);
    if (TEST_Z(ecx, ecx)) goto loc_0023485A; /* je: equal / zero */

loc_0023484B: ;
    esi++;
    if (CMP_L(esi, eax)) goto loc_00234840; /* jl: less (signed <) */

loc_00234850: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x128;
    esp += 4; return; /* ret */

loc_0023485A: ;
    edi = MEM32(esp + 0x138);
    eax = edi;
    ecx = 0x5FB1B0;
    PUSH32(esp, 0); sub_00234760(); /* call 0x00234760 */

loc_0023486D: ;
    (void)0; /* cmp esi, 0xFFFFFFFFu - flags set for next jcc */
    MEM32(esi * 4 + 0x6A58F0) = eax;
    MEM32(esp + 0x13C) = esi;
    if (CMP_EQ(esi, 0xFFFFFFFFu)) goto loc_00234B1A; /* je: equal / zero */

loc_00234884: ;
    eax = edi;
    ecx = 0x5FB1A0;
    esi++;
    PUSH32(esp, 0); sub_00234760(); /* call 0x00234760 */

loc_00234891: ;
    MEM32(esi * 4 + 0x6A58F0) = eax;
    MEM32(esp + 0x14) = esi;
    eax = edi;
    ecx = 0x5FB194;
    esi++;
    PUSH32(esp, 0); sub_00234760(); /* call 0x00234760 */

loc_002348A9: ;
    MEM32(esi * 4 + 0x6A58F0) = eax;
    MEM32(esp + 0x18) = esi;
    eax = edi;
    ecx = 0x5FB188;
    esi++;
    PUSH32(esp, 0); sub_00234760(); /* call 0x00234760 */

loc_002348C1: ;
    ebp = MEM32(0x777EC4);
    MEM32(esi * 4 + 0x6A58F0) = eax;
    MEM32(esp + 0x10) = esi;

loc_002348D2: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x5FB17C);
    ebp = ebp << 6;
    esi = 0; /* xor self */
    PUSH32(esp, 0x17);
    eax = esp + 0x3C;
    ebp = ebp + 0x777ED0;
    MEM32(esp + 0x1C) = esi;
    PUSH32(esp, 0); sub_0005E4E0(); /* call 0x0005E4E0 */

loc_002348F3: ;
    esp = esp + 0xC;
    PUSH32(esp, 0x84D458);
    eax = esp + 0x34;
    MEM32(esp + 0x138) = 0x17;
    MEM32(esp + 0x28) = esi;
    MEM32(esp + 0x30) = esi;
    MEM32(esp + 0x2C) = esi;
    PUSH32(esp, 0); sub_00061ED0(); /* call 0x00061ED0 */

loc_0023491B: ;
    (void)0; /* cmp eax, esi - flags set for next jcc */
    MEM32(esp + 0x28) = eax;
    if (CMP_NE(eax, esi)) goto loc_00234942; /* jne: not equal / not zero */

loc_00234923: ;
    edx = MEM32(esp + 0x134);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x84D458);
    ebx = esp + 0x3C;
    PUSH32(esp, 0); sub_00061C40(); /* call 0x00061C40 */

loc_0023493A: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x28) = eax;
    if (TEST_Z(eax, eax)) goto loc_00234960; /* je: equal / zero */

loc_00234942: ;
    MEM16(eax + 0x2C) = MEM16(eax + 0x2C) + 1;
    esi = MEM32(esp + 0x28);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0005E5A0(); /* call 0x0005E5A0 */

loc_00234954: ;
    esp = esp + 4;

loc_00234957: ;
    eax = MEM32(esp + 0x28);
    goto loc_00234960;

    /* nop */

loc_00234960: ;
    ecx = MEM32(eax + 4);
    if (CMP_L(ecx, 0x3E4)) goto loc_0023497A; /* jl: less (signed <) */

loc_0023496B: ;
    if (CMP_G(ecx, 0x3E5)) goto loc_0023497A; /* jg: greater (signed >) */

loc_00234973: ;
    PUSH32(esp, 0); sub_002A37B0(); /* call 0x002A37B0 */

loc_00234978: ;
    goto loc_00234957;

loc_0023497A: ;
    ecx = MEM32(eax + 4);
    if (TEST_Z(ecx, ecx)) goto loc_00234985; /* je: equal / zero */

loc_00234981: ;
    ebx = ecx;
    goto loc_002349AE;

loc_00234985: ;
    edx = MEM32(eax + 0x18);
    (void)0; /* test edx, edx - flags set for next jcc */
    ecx = eax + 0x18;
    if (TEST_Z(edx, edx)) goto loc_00234997; /* je: equal / zero */

loc_0023498F: ;
    MEM16(eax + 0x2C) = MEM16(eax + 0x2C) + 1;
    eax = MEM32(esp + 0x28);

loc_00234997: ;
    ecx = MEM32(ecx);
    ebx = 0; /* xor self */
    if (TEST_Z(ecx, ecx)) goto loc_002349AE; /* je: equal / zero */

loc_0023499F: ;
    ecx = MEM32(ecx);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esp + 0x10) = ecx;
    if (TEST_NZ(ecx, ecx)) goto loc_002349AE; /* jne: not equal / not zero */

loc_002349A9: ;
    ebx = 0xD;

loc_002349AE: ;
    ecx = MEM32(esp + 0x24);
    if (TEST_Z(ecx, ecx)) goto loc_002349DA; /* je: equal / zero */

loc_002349B6: ;
    esi = ecx;
    PUSH32(esp, 0); sub_000636D0(); /* call 0x000636D0 */

loc_002349BD: ;
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    MEM32(esp + 0x24) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_002349CB: ;
    eax = MEM32(esp + 0x2C);
    esp = esp + 4;
    MEM32(esp + 0x24) = 0;

loc_002349DA: ;
    if (TEST_Z(eax, eax)) goto loc_00234A3D; /* je: equal / zero */

loc_002349DE: ;
    MEM16(eax + 0x2C) = MEM16(eax + 0x2C) - 1;
    eax = MEM32(esp + 0x28);
    if (CMP_NE(MEM16(eax + 0x2C), 0)) goto loc_00234A3D; /* jne: not equal / not zero */

loc_002349ED: ;
    esi = eax + 4;
    edi = eax;
    eax = MEM32(esi);
    if (CMP_L(eax, 0x3E4)) goto loc_00234A14; /* jl: less (signed <) */

loc_002349FB: ;
    if (CMP_G(eax, 0x3E5)) goto loc_00234A14; /* jg: greater (signed >) */

loc_00234A02: ;
    PUSH32(esp, 0); sub_00062180(); /* call 0x00062180 */

loc_00234A07: ;
    ecx = eax;
    if (TEST_Z(ecx, ecx)) goto loc_00234A14; /* je: equal / zero */

loc_00234A0D: ;
    eax = edi;
    PUSH32(esp, 0); sub_000629A0(); /* call 0x000629A0 */

loc_00234A14: ;
    if (CMP_NE(MEM32(esi), 0)) goto loc_00234A23; /* jne: not equal / not zero */

loc_00234A19: ;
    ecx = MEM32(edi + 0x18);
    eax = edi;
    PUSH32(esp, 0); sub_0005EA20(); /* call 0x0005EA20 */

loc_00234A23: ;
    PUSH32(esp, 0x84D458);
    eax = edi;
    PUSH32(esp, 0); sub_00061DD0(); /* call 0x00061DD0 */

loc_00234A2F: ;
    edi = MEM32(esp + 0x28);
    eax = 0x84D458;
    PUSH32(esp, 0); sub_00061D60(); /* call 0x00061D60 */

loc_00234A3D: ;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    POP32(esp, ebx);
    if (TEST_NZ(ebx, ebx)) goto loc_00234B1A; /* jne: not equal / not zero */

loc_00234A46: ;
    esi = MEM32(esp + 0xC);
    ecx = 0x10;
    edi = ebp;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    edi = MEM32(ebp);
    eax = edi;
    edx = eax + 1;
    goto loc_00234A60;

    /* nop */

loc_00234A60: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00234A60; /* jne: not equal / not zero */

loc_00234A67: ;
    PUSH32(esp, 0xFFFFFFFFu);
    eax = eax - edx;
    PUSH32(esp, 0x32C);
    eax++;
    PUSH32(esp, 0x5FB1B8);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_00234A7C: ;
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00234A9A; /* je: equal / zero */

loc_00234A83: ;
    esi = eax;
    ecx = edi;
    esi = esi - edi;
    /* nop */

loc_00234A90: ;
    SET_LO8(edx, MEM8(ecx));
    MEM8(esi + ecx) = LO8(edx);
    ecx++;
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_00234A90; /* jne: not equal / not zero */

loc_00234A9A: ;
    SET_LO16(edx, MEM16(0x777EC4));
    MEM32(ebp) = eax;
    eax = MEM32(esp + 0x138);
    MEM16(ebp + 0x28) = LO16(edx);
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_00234AB4: ;
    ecx = MEM32(esp + 0x18);
    esi = MEM32(esp + 0xC);
    edx = MEM32(esp + 0x10);
    MEM32(ebp + 0x2C) = eax;
    eax = MEM32(esp + 0x13C);
    MEM32(ebp + 0x34) = eax;
    eax = MEM32(esp + 0x14);
    MEM32(ebp + 0x38) = ecx;
    esi = esi + 0xFFFFFFF4u;
    ecx = esi;
    edi = 0x84D458;
    MEM32(ebp + 0x3C) = edx;
    MEM32(ebp + 0x30) = eax;
    PUSH32(esp, 0); sub_00061F40(); /* call 0x00061F40 */

loc_00234AE9: ;
    edi = eax;
    if (TEST_Z(edi, edi)) goto loc_00234B14; /* je: equal / zero */

loc_00234AEF: ;
    eax = MEM32(edi + 0x18);
    if (TEST_Z(eax, eax)) goto loc_00234AFA; /* je: equal / zero */

loc_00234AF6: ;
    MEM16(edi + 0x2C) = MEM16(edi + 0x2C) - 1;

loc_00234AFA: ;
    if (CMP_NE(MEM16(edi + 0x2C), 0)) goto loc_00234B14; /* jne: not equal / not zero */

loc_00234B01: ;
    ecx = esi;
    eax = edi;
    PUSH32(esp, 0); sub_0005EA20(); /* call 0x0005EA20 */

loc_00234B0A: ;
    eax = 0x84D458;
    PUSH32(esp, 0); sub_00061D60(); /* call 0x00061D60 */

loc_00234B14: ;
    MEM32(0x777EC4) = MEM32(0x777EC4) + 1;

loc_00234B1A: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00234B1C: ;
    POP32(esp, ebp);
    esp = esp + 0x128;
    esp += 4; return; /* ret */

}

/**
 * sub_00234B30
 * Original: 0x00234B30 - 0x00234C8F (351 bytes, 102 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00234B30(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00234B30: ;
    eax = MEM32(0x777EC0);
    esp = esp - 0x11C;
    (void)0; /* cmp eax, 0x64 - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x124);
    if (CMP_GE(eax, 0x64)) goto loc_00234C87; /* jge: greater or equal (signed >=) */

loc_00234B4C: ;
    if (CMP_NE(MEM8(ebp), 0x4D)) goto loc_00234C87; /* jne: not equal / not zero */

loc_00234B56: ;
    PUSH32(esp, ebx);
    ebx = eax + eax * 4;
    eax = eax + 0x4B;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    MEM32(esp + 0x10) = eax;
    eax = MEM32(esp + 0x130);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    (void)0; /* cmp eax, esi - flags set for next jcc */
    ebx = ebx * 8 + 0x776F20;
    MEM32(esp + 0x10) = esi;
    if (CMP_EQ(eax, esi)) goto loc_00234B86; /* je: equal / zero */

loc_00234B7D: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    eax = ebp;
    goto loc_00234BAA;

loc_00234B86: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    eax = ebp;
    ecx = 0x5FB16C;
    PUSH32(esp, 0); sub_0005EE70(); /* call 0x0005EE70 */

loc_00234B97: ;
    esp = esp + 4;
    if (CMP_EQ(eax, esi)) goto loc_00234BBF; /* je: equal / zero */

loc_00234B9E: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    edi = 0; /* xor self */
    eax = 0x5FB244;

loc_00234BAA: ;
    ecx = 0x5FB16C;
    PUSH32(esp, 0); sub_0005EEE0(); /* call 0x0005EEE0 */

loc_00234BB4: ;
    esp = esp + 4;
    if (CMP_NE(eax, esi)) goto loc_00234C84; /* jne: not equal / not zero */

loc_00234BBF: ;
    eax = MEM32(0x84A14C);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x13);
    eax = esp + 0x30;
    PUSH32(esp, 0); sub_0005E4E0(); /* call 0x0005E4E0 */

loc_00234BD1: ;
    esp = esp + 0xC;
    eax = esp + 0x18;
    MEM32(esp + 0x128) = 0x13;
    MEM32(esp + 0x18) = esi;
    MEM32(esp + 0x20) = esi;
    MEM32(esp + 0x1C) = esi;
    PUSH32(esp, 0); sub_00063680(); /* call 0x00063680 */

loc_00234BF4: ;
    esi = esp + 0x18;
    PUSH32(esp, 0); sub_00063730(); /* call 0x00063730 */

loc_00234BFD: ;
    ecx = MEM32(esp + 0x1C);
    eax = MEM32(ecx + 4);
    if (TEST_NZ(eax, eax)) goto loc_00234C67; /* jne: not equal / not zero */

loc_00234C08: ;
    edx = MEM32(esp + 0x14);
    esi = MEM32(esp + 0x10);
    eax = ebp;
    MEM32(ebx + 8) = esi;
    MEM32(ebx) = edx;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_00234C1C: ;
    PUSH32(esp, 0x38C);
    PUSH32(esp, 0x5FB1B8);
    edi = ebp;
    MEM32(ebx + 4) = eax;
    PUSH32(esp, 0); sub_002AF210(); /* call 0x002AF210 */

loc_00234C30: ;
    edx = MEM32(0x777EC0);
    ecx = MEM32(esp + 0x1C);
    edx++;
    PUSH32(esp, esi);
    edi = ebx;
    MEM32(ecx * 4 + 0x69CF90) = eax;
    MEM32(0x777EC0) = edx;
    PUSH32(esp, 0); sub_00235160(); /* call 0x00235160 */

loc_00234C50: ;
    esp = esp + 0xC;
    ecx = esp + 0x18;
    PUSH32(esp, 0); sub_000636D0(); /* call 0x000636D0 */

loc_00234C5C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp = esp + 0x11C;
    esp += 4; return; /* ret */

loc_00234C67: ;
    eax = MEM32(esp + 0x134);
    if (TEST_NZ(eax, eax)) goto loc_00234C7B; /* jne: not equal / not zero */

loc_00234C72: ;
    ecx = esp + 0x18;
    PUSH32(esp, 0); sub_00063780(); /* call 0x00063780 */

loc_00234C7B: ;
    ecx = esp + 0x18;
    PUSH32(esp, 0); sub_000636D0(); /* call 0x000636D0 */

loc_00234C84: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00234C87: ;
    POP32(esp, ebp);
    esp = esp + 0x11C;
    esp += 4; return; /* ret */

}

/**
 * sub_00234C90
 * Original: 0x00234C90 - 0x00234CB1 (33 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00234C90(void)
{
    int _flags = 0; /* fallback flag var */

loc_00234C90: ;
    edx = MEM32(0x777EC0);
    eax = 0; /* xor self */
    if (CMP_LE(edx & edx, 0)) goto loc_00234CAD; /* jle: less or equal (signed <=) */

loc_00234C9C: ;
    ecx = 0x776F24;

loc_00234CA1: ;
    if (CMP_EQ(MEM32(ecx), esi)) goto loc_00234CB0; /* je: equal / zero */

loc_00234CA5: ;
    eax++;
    ecx = ecx + 0x28;
    if (CMP_L(eax, edx)) goto loc_00234CA1; /* jl: less (signed <) */

loc_00234CAD: ;
    eax = eax | 0xFFFFFFFFu;

loc_00234CB0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00234CC0
 * Original: 0x00234CC0 - 0x00234CEC (44 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00234CC0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00234CC0: ;
    PUSH32(esp, esi);
    esi = MEM32(0x777EC0);
    eax = eax | 0xFFFFFFFFu;
    ecx = 0; /* xor self */
    if (CMP_LE(esi & esi, 0)) goto loc_00234CEA; /* jle: less or equal (signed <=) */

loc_00234CD0: ;
    edx = 0x776F24;

loc_00234CD5: ;
    if (CMP_NE(MEM16(edx + 2), LO16(edi))) goto loc_00234CE2; /* jne: not equal / not zero */

loc_00234CDB: ;
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_00234CE2; /* jne: not equal / not zero */

loc_00234CE0: ;
    eax = ecx;

loc_00234CE2: ;
    ecx++;
    edx = edx + 0x28;
    if (CMP_L(ecx, esi)) goto loc_00234CD5; /* jl: less (signed <) */

loc_00234CEA: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00234CF0
 * Original: 0x00234CF0 - 0x00234D11 (33 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00234CF0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00234CF0: ;
    edx = MEM32(0x777EC4);
    eax = 0; /* xor self */
    if (CMP_LE(edx & edx, 0)) goto loc_00234D0D; /* jle: less or equal (signed <=) */

loc_00234CFC: ;
    ecx = 0x777EFC;

loc_00234D01: ;
    if (CMP_EQ(MEM32(ecx), esi)) goto loc_00234D10; /* je: equal / zero */

loc_00234D05: ;
    eax++;
    ecx = ecx + 0x40;
    if (CMP_L(eax, edx)) goto loc_00234D01; /* jl: less (signed <) */

loc_00234D0D: ;
    eax = eax | 0xFFFFFFFFu;

loc_00234D10: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00234D20
 * Original: 0x00234D20 - 0x00234D7F (95 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00234D20(void)
{
    int _flags = 0; /* fallback flag var */

loc_00234D20: ;
    esp = esp - 0x120;
    ecx = MEM32(0x84A14C);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ebx = 0; /* xor self */
    PUSH32(esp, 0x13);
    eax = esp + 0x28;
    MEM8(esp + 0x13) = LO8(ebx);
    PUSH32(esp, 0); sub_0005E4E0(); /* call 0x0005E4E0 */

loc_00234D40: ;
    esp = esp + 0xC;
    eax = esp + 0x10;
    MEM32(esp + 0x120) = 0x13;
    MEM32(esp + 0x10) = ebx;
    MEM32(esp + 0x18) = ebx;
    MEM32(esp + 0x14) = ebx;
    PUSH32(esp, 0); sub_00063680(); /* call 0x00063680 */

loc_00234D63: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(ecx + 4);
    if (CMP_L(eax, 0x3E4)) { sub_00234D7F(); return; } /* jl: less (signed <) */

loc_00234D71: ;
    if (CMP_G(eax, 0x3E5)) { sub_00234D7F(); return; } /* jg: greater (signed >) */

loc_00234D78: ;
    PUSH32(esp, 0); sub_002A37B0(); /* call 0x002A37B0 */

loc_00234D7D: ;
    goto loc_00234D63;

}

/**
 * sub_00234F40
 * Original: 0x00234F40 - 0x00234F9F (95 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00234F40(void)
{
    int _flags = 0; /* fallback flag var */

loc_00234F40: ;
    esp = esp - 0x120;
    ecx = MEM32(0x84A14C);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ebx = 0; /* xor self */
    PUSH32(esp, 0x13);
    eax = esp + 0x28;
    MEM8(esp + 0x13) = LO8(ebx);
    PUSH32(esp, 0); sub_0005E4E0(); /* call 0x0005E4E0 */

loc_00234F60: ;
    esp = esp + 0xC;
    eax = esp + 0x10;
    MEM32(esp + 0x120) = 0x13;
    MEM32(esp + 0x10) = ebx;
    MEM32(esp + 0x18) = ebx;
    MEM32(esp + 0x14) = ebx;
    PUSH32(esp, 0); sub_00063680(); /* call 0x00063680 */

loc_00234F83: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(ecx + 4);
    if (CMP_L(eax, 0x3E4)) { sub_00234F9F(); return; } /* jl: less (signed <) */

loc_00234F91: ;
    if (CMP_G(eax, 0x3E5)) { sub_00234F9F(); return; } /* jg: greater (signed >) */

loc_00234F98: ;
    PUSH32(esp, 0); sub_002A37B0(); /* call 0x002A37B0 */

loc_00234F9D: ;
    goto loc_00234F83;

}

/**
 * sub_00235160
 * Original: 0x00235160 - 0x0023525B (251 bytes, 87 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00235160(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00235160: ;
    eax = MEM32(edi);
    PUSH32(esp, ebx);
    ebx = MEM32(eax * 4 + 0x69CF90);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = ebp + 0x58;
    PUSH32(esp, esi);
    eax = ebx;
    PUSH32(esp, 0); sub_00234D20(); /* call 0x00234D20 */

loc_0023517B: ;
    esp = esp + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002351E7; /* jne: not equal / not zero */

loc_00235182: ;
    ecx = MEM32(edi);
    eax = MEM32(ecx * 4 + 0x69CF90);
    edx = eax + 1;
    edi = edi;

loc_00235190: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00235190; /* jne: not equal / not zero */

loc_00235197: ;
    PUSH32(esp, 0xFFFFFFFFu);
    eax = eax - edx;
    PUSH32(esp, 0x474);
    edx = eax + eax + 1;
    PUSH32(esp, 0x5FB1B8);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_002351AF: ;
    MEM32(esi) = eax;
    ecx = MEM32(edi);
    esi = MEM32(ecx * 4 + 0x69CF90);
    SET_LO8(edx, MEM8(esi));
    esp = esp + 0x10;
    ecx = 0; /* xor self */
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_002351E1; /* je: equal / zero */

loc_002351C5: ;
    goto loc_002351D0;

    /* nop */
    edi = edi;

loc_002351D0: ;
    SET_LO16(edx, SX8(LO8(edx)));
    MEM16(eax + ecx * 2) = LO16(edx);
    SET_LO8(edx, MEM8(ecx + esi + 1));
    ecx++;
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_002351D0; /* jne: not equal / not zero */

loc_002351E1: ;
    MEM16(eax + ecx * 2) = 0;

loc_002351E7: ;
    esi = ebp + 0x6C;
    PUSH32(esp, esi);
    eax = ebx;
    PUSH32(esp, 0); sub_00234F40(); /* call 0x00234F40 */

loc_002351F2: ;
    esp = esp + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00235257; /* jne: not equal / not zero */

loc_002351F9: ;
    eax = MEM32(edi);
    eax = MEM32(eax * 4 + 0x69CF90);
    edx = eax + 1;

loc_00235205: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00235205; /* jne: not equal / not zero */

loc_0023520C: ;
    PUSH32(esp, 0xFFFFFFFFu);
    eax = eax - edx;
    PUSH32(esp, 0x47D);
    ecx = eax + eax + 1;
    PUSH32(esp, 0x5FB1B8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_00235224: ;
    MEM32(esi) = eax;
    edx = MEM32(edi);
    esi = MEM32(edx * 4 + 0x69CF90);
    SET_LO8(edx, MEM8(esi));
    esp = esp + 0x10;
    ecx = 0; /* xor self */
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_00235251; /* je: equal / zero */

loc_0023523A: ;
    /* nop */

loc_00235240: ;
    SET_LO16(edx, SX8(LO8(edx)));
    MEM16(eax + ecx * 2) = LO16(edx);
    SET_LO8(edx, MEM8(ecx + esi + 1));
    ecx++;
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_00235240; /* jne: not equal / not zero */

loc_00235251: ;
    MEM16(eax + ecx * 2) = 0;

loc_00235257: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00235260
 * Original: 0x00235260 - 0x002353CA (362 bytes, 115 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00235260(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00235260: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    ebx = MEM32(0x776F18);
    (void)0; /* cmp ebx, 0xA - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    if (CMP_GE(ebx, 0xA)) goto loc_002353C4; /* jge: greater or equal (signed >=) */

loc_00235278: ;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x38);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    esi = 0; /* xor self */
    edi = 0; /* xor self */
    eax = ebp;
    ecx = 0x5FB128;
    ebx = ebx + 0x776CE8;
    MEM32(esp + 0x14) = esi;
    PUSH32(esp, 0); sub_0005EE70(); /* call 0x0005EE70 */

loc_0023529C: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_002352BA; /* je: equal / zero */

loc_002352A3: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    eax = 0x5FB244;
    ecx = 0x5FB16C;
    PUSH32(esp, 0); sub_0005EEE0(); /* call 0x0005EEE0 */

loc_002352B7: ;
    esp = esp + 4;

loc_002352BA: ;
    PUSH32(esp, ebp);
    edi = ebx + 4;
    PUSH32(esp, 0x5AC808);
    PUSH32(esp, edi);
    MEM32(ebx) = esi;
    MEM16(ebx + 0x28) = LO16(esi);
    PUSH32(esp, 0); sub_0046EC2D(); /* call 0x0046EC2D */

loc_002352CF: ;
    esp = esp + 0xC;
    eax = edi;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_002352D9: ;
    MEM32(ebx + 0x24) = eax;
    MEM32(esp + 0x14) = esi;

loc_002352E0: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(edx + esi * 4);
    edi = 0x5FB11C;
    esi = eax;
    ecx = 9;
    edx = 0; /* xor self */
    /* repe cmpsb - string compare, ecx iterations */
    if (1 /* strings matched (repe cmpsb) */) goto loc_002353A5; /* je: equal / zero */

loc_002352FD: ;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_00235302: ;
    MEM32(esp + 0x18) = eax;
    eax = MEM32(0x777EC0);
    esi = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_002353A5; /* jle: less or equal (signed <=) */

loc_00235315: ;
    edi = 0x776F24;
    /* nop */

loc_00235320: ;
    eax = MEM32(esp + 0x18);
    if (CMP_NE(MEM32(edi), eax)) goto loc_00235394; /* jne: not equal / not zero */

loc_00235328: ;
    PUSH32(esp, ebx);
    eax = ebp;
    PUSH32(esp, 0); sub_00234D20(); /* call 0x00234D20 */

loc_00235330: ;
    esp = esp + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00235387; /* jne: not equal / not zero */

loc_00235337: ;
    eax = ebp;
    edx = eax + 1;
    /* nop */

loc_00235340: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00235340; /* jne: not equal / not zero */

loc_00235347: ;
    PUSH32(esp, 0xFFFFFFFFu);
    eax = eax - edx;
    PUSH32(esp, 0x4E0);
    ecx = eax + eax + 1;
    PUSH32(esp, 0x5FB1B8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_0023535F: ;
    MEM32(ebx) = eax;
    SET_LO8(edx, MEM8(ebp));
    esp = esp + 0x10;
    ecx = 0; /* xor self */
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_00235381; /* je: equal / zero */

loc_0023536D: ;
    /* nop */

loc_00235370: ;
    SET_LO16(edx, SX8(LO8(edx)));
    MEM16(eax + ecx * 2) = LO16(edx);
    SET_LO8(edx, MEM8(ecx + ebp + 1));
    ecx++;
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_00235370; /* jne: not equal / not zero */

loc_00235381: ;
    MEM16(eax + ecx * 2) = 0;

loc_00235387: ;
    eax = (uint32_t)(int32_t)SMEM16(ebx + 0x28);
    MEM16(ebx + eax * 2 + 0x2A) = LO16(esi);
    MEM16(ebx + 0x28) = MEM16(ebx + 0x28) + 1;

loc_00235394: ;
    eax = MEM32(0x777EC0);
    esi++;
    edi = edi + 0x28;
    if (CMP_L(esi, eax)) goto loc_00235320; /* jl: less (signed <) */

loc_002353A5: ;
    esi = MEM32(esp + 0x14);
    esi++;
    (void)0; /* cmp esi, 6 - flags set for next jcc */
    MEM32(esp + 0x14) = esi;
    if (CMP_L(esi, 6)) goto loc_002352E0; /* jl: less (signed <) */

loc_002353B7: ;
    eax = MEM32(0x776F18);
    eax++;
    POP32(esp, edi);
    MEM32(0x776F18) = eax;
    POP32(esp, esi);

loc_002353C4: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_002353D0
 * Original: 0x002353D0 - 0x00235445 (117 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002353D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002353D0: ;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = 0x575574;
    PUSH32(esp, 0); sub_00060BD0(); /* call 0x00060BD0 */

loc_002353DC: ;
    esi = eax;
    esp = esp + 4;
    if (TEST_Z(esi, esi)) goto loc_00235443; /* je: equal / zero */

loc_002353E5: ;
    PUSH32(esp, edi);

loc_002353E6: ;
    ecx = esi + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00235260(); /* call 0x00235260 */

loc_002353EF: ;
    esi = MEM32(esi + 0xC);
    esp = esp + 4;
    if (TEST_Z(esi, esi)) goto loc_00235442; /* je: equal / zero */

loc_002353F9: ;
    /* nop */

loc_00235400: ;
    SET_LO8(ecx, MEM8(esi + 0x10));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    eax = esi + 0x10;
    edx = 0x575574;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0023543E; /* je: equal / zero */

loc_0023540F: ;
    edi = eax;
    edi = edi - edx;

loc_00235413: ;
    SET_LO8(eax, MEM8(edx));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0023543E; /* je: equal / zero */

loc_00235419: ;
    if (CMP_EQ(LO8(ecx), 0x2A)) goto loc_0023543E; /* je: equal / zero */

loc_0023541E: ;
    if (CMP_EQ(LO8(eax), 0x2A)) goto loc_0023543E; /* je: equal / zero */

loc_00235422: ;
    if (CMP_EQ(LO8(ecx), LO8(eax))) goto loc_0023542C; /* je: equal / zero */

loc_00235426: ;
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    if (TEST_NZ(LO8(eax), 0xDF)) goto loc_00235437; /* jne: not equal / not zero */

loc_0023542C: ;
    SET_LO8(ecx, MEM8(edi + edx + 1));
    edx++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00235413; /* jne: not equal / not zero */

loc_00235435: ;
    goto loc_0023543E;

loc_00235437: ;
    esi = MEM32(esi + 0xC);
    if (TEST_NZ(esi, esi)) goto loc_00235400; /* jne: not equal / not zero */

loc_0023543E: ;
    if (TEST_NZ(esi, esi)) goto loc_002353E6; /* jne: not equal / not zero */

loc_00235442: ;
    POP32(esp, edi);

loc_00235443: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00235450
 * Original: 0x00235450 - 0x00235CBA (2154 bytes, 511 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00235450(void)
{
    uint32_t ebp;
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
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00235450: ;
    esp = esp - 0xC;
    SET_LO8(eax, MEM8(0x849B84));
    xmm0 = MEMF(0x8497DC); /* movss */
    MEM8(esp + 3) = LO8(eax);
    eax = MEM32(0x6BAF28);
    MEMF(0x84B508) = xmm0; /* movss */
    xmm0 = MEMF(eax + 4); /* movss */
    MEMF(0x77615C) = xmm0; /* movss */
    xmm0 = MEMF(eax + 8); /* movss */
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    MEMF(0x77615C) = xmm0; /* movss */
    xmm0 = MEMF(0x776220); /* movss */
    /* comiss xmm0, MEMF(0x648D14) - sets EFLAGS */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(0x776158) = ebx;
    if ((xmm0 < MEMF(0x648D14))) goto loc_00235B0E; /* jb: below (unsigned <) */

loc_002354AB: ;
    PUSH32(esp, 1);
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x5F8E40;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_002354B9: ;
    ecx = eax;
    PUSH32(esp, 0); sub_0020DB10(); /* call 0x0020DB10 */

loc_002354C0: ;
    esp = esp + 4;
    PUSH32(esp, 2);
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x5F8F20;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_002354D1: ;
    ecx = eax;
    PUSH32(esp, 0); sub_00216220(); /* call 0x00216220 */

loc_002354D8: ;
    SET_LO8(eax, MEM8(0x75A168));
    esp = esp + 4;
    if (CMP_NE(LO8(eax), LO8(ebx))) goto loc_00235900; /* jne: not equal / not zero */

loc_002354E8: ;
    eax = MEM32(0x849B84);
    if (CMP_A(eax, 0x2B)) goto loc_00235900; /* ja: above (unsigned >) */

loc_002354F6: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x235CBC); /* switch: 44 entries, 42 targets */
    if (_jt == 0x002354FDu) goto loc_002354FD;
    if (_jt == 0x00235507u) goto loc_00235507;
    if (_jt == 0x00235517u) goto loc_00235517;
    if (_jt == 0x00235521u) goto loc_00235521;
    if (_jt == 0x0023552Bu) goto loc_0023552B;
    if (_jt == 0x00235535u) goto loc_00235535;
    if (_jt == 0x0023553Fu) goto loc_0023553F;
    if (_jt == 0x00235549u) goto loc_00235549;
    if (_jt == 0x00235553u) goto loc_00235553;
    if (_jt == 0x0023555Du) goto loc_0023555D;
    if (_jt == 0x00235567u) goto loc_00235567;
    if (_jt == 0x00235571u) goto loc_00235571;
    if (_jt == 0x0023557Bu) goto loc_0023557B;
    if (_jt == 0x00235585u) goto loc_00235585;
    if (_jt == 0x002356A2u) goto loc_002356A2;
    if (_jt == 0x002356E3u) goto loc_002356E3;
    if (_jt == 0x002356EDu) goto loc_002356ED;
    if (_jt == 0x002356F7u) goto loc_002356F7;
    if (_jt == 0x00235701u) goto loc_00235701;
    if (_jt == 0x0023570Bu) goto loc_0023570B;
    if (_jt == 0x00235715u) goto loc_00235715;
    if (_jt == 0x0023571Fu) goto loc_0023571F;
    if (_jt == 0x00235729u) goto loc_00235729;
    if (_jt == 0x002357EBu) goto loc_002357EB;
    if (_jt == 0x00235842u) goto loc_00235842;
    if (_jt == 0x0023584Cu) goto loc_0023584C;
    if (_jt == 0x00235856u) goto loc_00235856;
    if (_jt == 0x00235900u) goto loc_00235900;
    if (_jt == 0x0023596Au) goto loc_0023596A;
    if (_jt == 0x00235974u) goto loc_00235974;
    if (_jt == 0x0023597Eu) goto loc_0023597E;
    if (_jt == 0x00235988u) goto loc_00235988;
    if (_jt == 0x00235992u) goto loc_00235992;
    if (_jt == 0x0023599Cu) goto loc_0023599C;
    if (_jt == 0x002359A6u) goto loc_002359A6;
    if (_jt == 0x002359B0u) goto loc_002359B0;
    if (_jt == 0x002359BAu) goto loc_002359BA;
    if (_jt == 0x002359C4u) goto loc_002359C4;
    if (_jt == 0x00235AB0u) goto loc_00235AB0;
    if (_jt == 0x00235AD5u) goto loc_00235AD5;
    if (_jt == 0x00235ADFu) goto loc_00235ADF;
    if (_jt == 0x00235B04u) goto loc_00235B04;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_002354FD: ;
    PUSH32(esp, 0); sub_002343B0(); /* call 0x002343B0 */

loc_00235502: ;
    goto loc_00235900;

loc_00235507: ;
    MEM8(0x849C0F) = LO8(ebx);
    PUSH32(esp, 0); sub_00236030(); /* call 0x00236030 */

loc_00235512: ;
    goto loc_00235900;

loc_00235517: ;
    PUSH32(esp, 0); sub_0023BDC0(); /* call 0x0023BDC0 */

loc_0023551C: ;
    goto loc_00235900;

loc_00235521: ;
    PUSH32(esp, 0); sub_002371C0(); /* call 0x002371C0 */

loc_00235526: ;
    goto loc_00235900;

loc_0023552B: ;
    PUSH32(esp, 0); sub_00237340(); /* call 0x00237340 */

loc_00235530: ;
    goto loc_00235900;

loc_00235535: ;
    PUSH32(esp, 0); sub_00237810(); /* call 0x00237810 */

loc_0023553A: ;
    goto loc_00235900;

loc_0023553F: ;
    PUSH32(esp, 0); sub_0023C660(); /* call 0x0023C660 */

loc_00235544: ;
    goto loc_00235900;

loc_00235549: ;
    PUSH32(esp, 0); sub_0023D600(); /* call 0x0023D600 */

loc_0023554E: ;
    goto loc_00235900;

loc_00235553: ;
    PUSH32(esp, 0); sub_0023CFA0(); /* call 0x0023CFA0 */

loc_00235558: ;
    goto loc_00235900;

loc_0023555D: ;
    PUSH32(esp, 0); sub_0023E680(); /* call 0x0023E680 */

loc_00235562: ;
    goto loc_00235900;

loc_00235567: ;
    PUSH32(esp, 0); sub_0023ECB0(); /* call 0x0023ECB0 */

loc_0023556C: ;
    goto loc_00235900;

loc_00235571: ;
    PUSH32(esp, 0); sub_0023D970(); /* call 0x0023D970 */

loc_00235576: ;
    goto loc_00235900;

loc_0023557B: ;
    PUSH32(esp, 0); sub_0023F410(); /* call 0x0023F410 */

loc_00235580: ;
    goto loc_00235900;

loc_00235585: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00290F60(); /* call 0x00290F60 */

loc_0023558B: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_002355CE; /* je: equal / zero */

loc_00235592: ;
    if (TEST_Z(MEM8(0x776238), 0x20)) goto loc_002355CE; /* je: equal / zero */

loc_0023559B: ;
    SET_LO8(ebx, 0); /* xor self */
    edi = 0x17;
    PUSH32(esp, 0); sub_002423B0(); /* call 0x002423B0 */

loc_002355A7: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002355CE; /* je: equal / zero */

loc_002355AB: ;
    eax = 1;
    PUSH32(esp, 0); sub_002431E0(); /* call 0x002431E0 */

loc_002355B5: ;
    PUSH32(esp, 4);
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_002355BE: ;
    ecx = MEM32(0x84B11C);
    edx = MEM32(ecx);
    esp = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_002355CE: ;
    PUSH32(esp, 0); sub_00233E00(); /* call 0x00233E00 */

loc_002355D3: ;
    ecx = MEM32(eax + 0x10);
    if (TEST_Z(ecx, ecx)) goto loc_00235900; /* je: equal / zero */

loc_002355DE: ;
    MEM32(esp + 0x10) = 0x5FB100;
    MEM32(esp + 0x14) = 0;
    PUSH32(esp, 0); sub_00233E00(); /* call 0x00233E00 */

loc_002355F3: ;
    edx = eax;
    PUSH32(esp, 0); sub_00244810(); /* call 0x00244810 */

loc_002355FA: ;
    ecx = eax;
    eax = esp + 0x10;
    PUSH32(esp, 0); sub_00233E50(); /* call 0x00233E50 */

loc_00235605: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00235636; /* je: equal / zero */

loc_00235609: ;
    SET_LO8(ebx, 0); /* xor self */
    edi = 0x21;
    PUSH32(esp, 0); sub_002423B0(); /* call 0x002423B0 */

loc_00235615: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00235636; /* je: equal / zero */

loc_00235619: ;
    PUSH32(esp, 0); sub_00233E00(); /* call 0x00233E00 */

loc_0023561E: ;
    PUSH32(esp, 0); sub_00244840(); /* call 0x00244840 */

loc_00235623: ;
    PUSH32(esp, 4);
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_0023562C: ;
    esp = esp + 4;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_002431E0(); /* call 0x002431E0 */

loc_00235636: ;
    MEM32(esp + 0x10) = 0x5FB0D4;
    MEM32(esp + 0x14) = 0;
    PUSH32(esp, 0); sub_00233E00(); /* call 0x00233E00 */

loc_0023564B: ;
    edx = eax;
    PUSH32(esp, 0); sub_00244810(); /* call 0x00244810 */

loc_00235652: ;
    ecx = eax;
    eax = esp + 0x10;
    PUSH32(esp, 0); sub_00233E50(); /* call 0x00233E50 */

loc_0023565D: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00235900; /* je: equal / zero */

loc_00235665: ;
    SET_LO8(ebx, 0); /* xor self */
    edi = 0x1A;
    PUSH32(esp, 0); sub_002423B0(); /* call 0x002423B0 */

loc_00235671: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00235900; /* je: equal / zero */

loc_00235679: ;
    PUSH32(esp, 0); sub_00233E00(); /* call 0x00233E00 */

loc_0023567E: ;
    PUSH32(esp, 0); sub_00244840(); /* call 0x00244840 */

loc_00235683: ;
    PUSH32(esp, 4);
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_0023568C: ;
    PUSH32(esp, 0x23);
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_00235693: ;
    esp = esp + 8;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_002431E0(); /* call 0x002431E0 */

loc_0023569D: ;
    goto loc_00235900;

loc_002356A2: ;
    PUSH32(esp, 0); sub_00291CF0(); /* call 0x00291CF0 */

loc_002356A7: ;
    if (TEST_Z(MEM8(0x776238), 0x20)) goto loc_00235900; /* je: equal / zero */

loc_002356B4: ;
    edi = 0x1D;

loc_002356B9: ;
    SET_LO8(ebx, 0); /* xor self */
    PUSH32(esp, 0); sub_002423B0(); /* call 0x002423B0 */

loc_002356C0: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00235900; /* je: equal / zero */

loc_002356C8: ;
    PUSH32(esp, 4);
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_002356D1: ;
    esp = esp + 4;
    eax = 1;
    PUSH32(esp, 0); sub_002431E0(); /* call 0x002431E0 */

loc_002356DE: ;
    goto loc_00235900;

loc_002356E3: ;
    PUSH32(esp, 0); sub_0023F6D0(); /* call 0x0023F6D0 */

loc_002356E8: ;
    goto loc_00235900;

loc_002356ED: ;
    PUSH32(esp, 0); sub_002384E0(); /* call 0x002384E0 */

loc_002356F2: ;
    goto loc_00235900;

loc_002356F7: ;
    PUSH32(esp, 0); sub_0023FA10(); /* call 0x0023FA10 */

loc_002356FC: ;
    goto loc_00235900;

loc_00235701: ;
    PUSH32(esp, 0); sub_00238600(); /* call 0x00238600 */

loc_00235706: ;
    goto loc_00235900;

loc_0023570B: ;
    PUSH32(esp, 0); sub_0023A2B0(); /* call 0x0023A2B0 */

loc_00235710: ;
    goto loc_00235900;

loc_00235715: ;
    PUSH32(esp, 0); sub_0023A5C0(); /* call 0x0023A5C0 */

loc_0023571A: ;
    goto loc_00235900;

loc_0023571F: ;
    PUSH32(esp, 0); sub_0023A910(); /* call 0x0023A910 */

loc_00235724: ;
    goto loc_00235900;

loc_00235729: ;
    PUSH32(esp, 0); sub_00234230(); /* call 0x00234230 */

loc_0023572E: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00235757; /* je: equal / zero */

loc_00235732: ;
    SET_LO8(ebx, 0); /* xor self */
    edi = 0x11;
    PUSH32(esp, 0); sub_002423B0(); /* call 0x002423B0 */

loc_0023573E: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00235900; /* je: equal / zero */

loc_00235746: ;
    eax = 0; /* xor self */
    MEM32(0x776238) = eax;
    MEM8(0x849FBA) = LO8(eax);
    goto loc_002356C8;

loc_00235757: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00290F60(); /* call 0x00290F60 */

loc_0023575D: ;
    SET_LO8(ecx, MEM8(0x776238));
    esp = esp + 4;
    if (TEST_Z(LO8(ecx), 0x20)) goto loc_002357A2; /* je: equal / zero */

loc_0023576B: ;
    if (CMP_EQ(eax, ebx)) goto loc_002357A2; /* je: equal / zero */

loc_0023576F: ;
    SET_LO8(ebx, 0); /* xor self */
    edi = 0x11;
    PUSH32(esp, 0); sub_002423B0(); /* call 0x002423B0 */

loc_0023577B: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002357A2; /* je: equal / zero */

loc_0023577F: ;
    PUSH32(esp, 4);
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_00235788: ;
    ecx = MEM32(0x84B11C);
    eax = MEM32(ecx);
    esp = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_00235798: ;
    eax = 1;
    PUSH32(esp, 0); sub_002431E0(); /* call 0x002431E0 */

loc_002357A2: ;
    PUSH32(esp, 0); sub_00233E00(); /* call 0x00233E00 */

loc_002357A7: ;
    ecx = MEM32(eax + 0x10);
    if (TEST_Z(ecx, ecx)) goto loc_00235900; /* je: equal / zero */

loc_002357B2: ;
    MEM32(esp + 0x10) = 0x5FB100;
    MEM32(esp + 0x14) = 0;
    PUSH32(esp, 0); sub_00233E00(); /* call 0x00233E00 */

loc_002357C7: ;
    edx = eax;
    PUSH32(esp, 0); sub_00244810(); /* call 0x00244810 */

loc_002357CE: ;
    ecx = eax;
    eax = esp + 0x10;
    PUSH32(esp, 0); sub_00233E50(); /* call 0x00233E50 */

loc_002357D9: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00235900; /* je: equal / zero */

loc_002357E1: ;
    edi = 0x23;
    goto loc_00235A7F;

loc_002357EB: ;
    PUSH32(esp, 0); sub_00291CF0(); /* call 0x00291CF0 */

loc_002357F0: ;
    if (TEST_NZ(MEM8(0x776238), 0x20)) goto loc_00235806; /* jne: not equal / not zero */

loc_002357F9: ;
    PUSH32(esp, 0); sub_00234230(); /* call 0x00234230 */

loc_002357FE: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00235900; /* je: equal / zero */

loc_00235806: ;
    SET_LO8(ebx, 0); /* xor self */
    edi = 0x12;
    PUSH32(esp, 0); sub_002423B0(); /* call 0x002423B0 */

loc_00235812: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00235900; /* je: equal / zero */

loc_0023581A: ;
    PUSH32(esp, 4);
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_00235823: ;
    ecx = MEM32(0x84B11C);
    edx = MEM32(ecx);
    esp = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_00235833: ;
    eax = 1;
    PUSH32(esp, 0); sub_002431E0(); /* call 0x002431E0 */

loc_0023583D: ;
    goto loc_00235900;

loc_00235842: ;
    PUSH32(esp, 0); sub_0023AB30(); /* call 0x0023AB30 */

loc_00235847: ;
    goto loc_00235900;

loc_0023584C: ;
    PUSH32(esp, 0); sub_00238770(); /* call 0x00238770 */

loc_00235851: ;
    goto loc_00235900;

loc_00235856: ;
    PUSH32(esp, 0); sub_00238A10(); /* call 0x00238A10 */

loc_0023585B: ;
    if (CMP_NE(MEM8(0x86E988), LO8(ebx))) goto loc_00235900; /* jne: not equal / not zero */

loc_00235867: ;
    if (TEST_NZ(MEM8(0x87B388), 1)) goto loc_00235893; /* jne: not equal / not zero */

loc_00235870: ;
    eax = MEM32(0x87B388);
    eax = eax | 1;
    ecx = 0x87B384;
    MEM32(0x87B388) = eax;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00235887: ;
    MEMF(0x87B37C) = (float)fp_top(); fp_pop(); /* fst */
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */

loc_00235893: ;
    PUSH32(esp, 0); sub_0021D790(); /* call 0x0021D790 */

loc_00235898: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00235900; /* je: equal / zero */

loc_0023589C: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_002358A6: ;
    fp_push(MEMF(0x87B37C)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp >= 0) /* fcompi */) goto loc_002358CA; /* jae: above or equal (unsigned >=) */

loc_002358B4: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_002358BE: ;
    fp_push(MEMF(0x87B380)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_00235900; /* jbe: below or equal (unsigned <=) */

loc_002358CA: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_002358D4: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    ecx = 0x87B384;
    MEMF(0x87B37C) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_002358EA: ;
    esi = 0x862C40;
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_002966D0(); /* call 0x002966D0 */

loc_002358FA: ;
    MEM32(0x849B84) = ebx;

loc_00235900: ;
    SET_LO8(eax, MEM8(0x862D08));
    ebx = 0; /* xor self */
    if (CMP_NE(LO8(eax), LO8(ebx))) goto loc_00235912; /* jne: not equal / not zero */

loc_0023590B: ;
    MEM32(0x776238) = MEM32(0x776238) & 0xFFFFFFDFu;

loc_00235912: ;
    eax = MEM32(0x849B84);
    esi = 0x24;
    if (CMP_NE(eax, esi)) goto loc_00235C28; /* jne: not equal / not zero */

loc_00235924: ;
    eax = MEM32(0x7FA1F8);
    if (CMP_EQ(eax, 0x1D)) goto loc_00235C0D; /* je: equal / zero */

loc_00235932: ;
    if (CMP_NE(eax, 0x46)) goto loc_00235BBB; /* jne: not equal / not zero */

loc_0023593B: ;
    PUSH32(esp, 0); sub_002170B0(); /* call 0x002170B0 */

loc_00235940: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00235C28; /* je: equal / zero */

loc_00235948: ;
    if (CMP_NE(MEM8(0x76EC82), LO8(ebx))) goto loc_00235C28; /* jne: not equal / not zero */

loc_00235954: ;
    eax = MEM32(0x847024);
    if (CMP_EQ(eax, ebx)) goto loc_00235BD5; /* je: equal / zero */

loc_00235961: ;
    ecx = MEM32(eax + 0x40);
    PUSH32(esp, ecx);
    goto loc_00235BD0;

loc_0023596A: ;
    PUSH32(esp, 0); sub_00238FF0(); /* call 0x00238FF0 */

loc_0023596F: ;
    goto loc_0023585B;

loc_00235974: ;
    PUSH32(esp, 0); sub_00239F50(); /* call 0x00239F50 */

loc_00235979: ;
    goto loc_0023585B;

loc_0023597E: ;
    PUSH32(esp, 0); sub_0023A010(); /* call 0x0023A010 */

loc_00235983: ;
    goto loc_0023585B;

loc_00235988: ;
    PUSH32(esp, 0); sub_0023A200(); /* call 0x0023A200 */

loc_0023598D: ;
    goto loc_0023585B;

loc_00235992: ;
    PUSH32(esp, 0); sub_0023A200(); /* call 0x0023A200 */

loc_00235997: ;
    goto loc_0023585B;

loc_0023599C: ;
    PUSH32(esp, 0); sub_002395B0(); /* call 0x002395B0 */

loc_002359A1: ;
    goto loc_0023585B;

loc_002359A6: ;
    PUSH32(esp, 0); sub_00239420(); /* call 0x00239420 */

loc_002359AB: ;
    goto loc_00235900;

loc_002359B0: ;
    PUSH32(esp, 0); sub_00239860(); /* call 0x00239860 */

loc_002359B5: ;
    goto loc_0023585B;

loc_002359BA: ;
    PUSH32(esp, 0); sub_00239CA0(); /* call 0x00239CA0 */

loc_002359BF: ;
    goto loc_0023585B;

loc_002359C4: ;
    PUSH32(esp, 0); sub_00234230(); /* call 0x00234230 */

loc_002359C9: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002359F2; /* je: equal / zero */

loc_002359CD: ;
    SET_LO8(ebx, 0); /* xor self */
    edi = 0xA;
    PUSH32(esp, 0); sub_002423B0(); /* call 0x002423B0 */

loc_002359D9: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00235900; /* je: equal / zero */

loc_002359E1: ;
    eax = 0; /* xor self */
    MEM32(0x776238) = eax;
    MEM8(0x849FBA) = LO8(eax);
    goto loc_002356C8;

loc_002359F2: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00290F60(); /* call 0x00290F60 */

loc_002359F8: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_00235A3B; /* je: equal / zero */

loc_002359FF: ;
    if (TEST_Z(MEM8(0x776238), 0x20)) goto loc_00235A3B; /* je: equal / zero */

loc_00235A08: ;
    SET_LO8(ebx, 0); /* xor self */
    edi = 0xA;
    PUSH32(esp, 0); sub_002423B0(); /* call 0x002423B0 */

loc_00235A14: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00235A3B; /* je: equal / zero */

loc_00235A18: ;
    PUSH32(esp, 4);
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_00235A21: ;
    ecx = MEM32(0x84B11C);
    eax = MEM32(ecx);
    esp = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_00235A31: ;
    eax = 1;
    PUSH32(esp, 0); sub_002431E0(); /* call 0x002431E0 */

loc_00235A3B: ;
    PUSH32(esp, 0); sub_00233E00(); /* call 0x00233E00 */

loc_00235A40: ;
    ecx = MEM32(eax + 0x10);
    if (TEST_Z(ecx, ecx)) goto loc_00235900; /* je: equal / zero */

loc_00235A4B: ;
    MEM32(esp + 0x10) = 0x5FB100;
    MEM32(esp + 0x14) = 0;
    PUSH32(esp, 0); sub_00233E00(); /* call 0x00233E00 */

loc_00235A60: ;
    edx = eax;
    PUSH32(esp, 0); sub_00244810(); /* call 0x00244810 */

loc_00235A67: ;
    ecx = eax;
    eax = esp + 0x10;
    PUSH32(esp, 0); sub_00233E50(); /* call 0x00233E50 */

loc_00235A72: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00235900; /* je: equal / zero */

loc_00235A7A: ;
    edi = 0x22;

loc_00235A7F: ;
    SET_LO8(ebx, 0); /* xor self */
    PUSH32(esp, 0); sub_002423B0(); /* call 0x002423B0 */

loc_00235A86: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00235900; /* je: equal / zero */

loc_00235A8E: ;
    PUSH32(esp, 0); sub_00233E00(); /* call 0x00233E00 */

loc_00235A93: ;
    PUSH32(esp, 0); sub_00244840(); /* call 0x00244840 */

loc_00235A98: ;
    PUSH32(esp, 4);
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_00235AA1: ;
    esp = esp + 4;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_002431E0(); /* call 0x002431E0 */

loc_00235AAB: ;
    goto loc_00235900;

loc_00235AB0: ;
    PUSH32(esp, 0); sub_00291CF0(); /* call 0x00291CF0 */

loc_00235AB5: ;
    if (TEST_NZ(MEM8(0x776238), 0x20)) goto loc_00235ACB; /* jne: not equal / not zero */

loc_00235ABE: ;
    PUSH32(esp, 0); sub_00234230(); /* call 0x00234230 */

loc_00235AC3: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00235900; /* je: equal / zero */

loc_00235ACB: ;
    edi = 0xB;
    goto loc_002356B9;

loc_00235AD5: ;
    PUSH32(esp, 0); sub_00243B70(); /* call 0x00243B70 */

loc_00235ADA: ;
    goto loc_00235900;

loc_00235ADF: ;
    SET_LO8(ebx, 0); /* xor self */
    edi = 0x16;
    PUSH32(esp, 0); sub_002423B0(); /* call 0x002423B0 */

loc_00235AEB: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00235900; /* je: equal / zero */

loc_00235AF3: ;
    eax = 0; /* xor self */
    esi = 0x862C40;
    PUSH32(esp, 0); sub_002978E0(); /* call 0x002978E0 */

loc_00235AFF: ;
    goto loc_00235900;

loc_00235B04: ;
    PUSH32(esp, 0); sub_00244020(); /* call 0x00244020 */

loc_00235B09: ;
    goto loc_00235900;

loc_00235B0E: ;
    SET_LO8(ecx, MEM8(0x87B388));
    eax = 1;
    if (TEST_NZ(LO8(eax), LO8(ecx))) goto loc_00235B39; /* jne: not equal / not zero */

loc_00235B1D: ;
    MEM32(0x87B388) = MEM32(0x87B388) | eax;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00235B2D: ;
    MEMF(0x87B37C) = (float)fp_top(); fp_pop(); /* fst */
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */

loc_00235B39: ;
    PUSH32(esp, 0); sub_0021D790(); /* call 0x0021D790 */

loc_00235B3E: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00235900; /* je: equal / zero */

loc_00235B46: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00235B50: ;
    fp_push(MEMF(0x87B37C)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp >= 0) /* fcompi */) goto loc_00235B78; /* jae: above or equal (unsigned >=) */

loc_00235B5E: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00235B68: ;
    fp_push(MEMF(0x87B380)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_00235900; /* jbe: below or equal (unsigned <=) */

loc_00235B78: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00235B82: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    ecx = 0x87B384;
    MEMF(0x87B37C) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00235B98: ;
    esi = 0x862C40;
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_002966D0(); /* call 0x002966D0 */

loc_00235BA8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(0x849B84) = ebx;
    MEM8(0x849B88) = LO8(ebx);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_00235BBB: ;
    if (CMP_NE(MEM8(0x76EC82), LO8(ebx))) goto loc_00235C28; /* jne: not equal / not zero */

loc_00235BC3: ;
    eax = MEM32(0x847024);
    if (CMP_EQ(eax, ebx)) goto loc_00235BD5; /* je: equal / zero */

loc_00235BCC: ;
    edx = MEM32(eax + 0x40);
    PUSH32(esp, edx);

loc_00235BD0: ;
    PUSH32(esp, 0); sub_00025720(); /* call 0x00025720 */

loc_00235BD5: ;
    if (CMP_NE(MEM8(0x771130), LO8(ebx))) goto loc_00235C28; /* jne: not equal / not zero */

loc_00235BDD: ;
    MEM16(0x800400) = LO16(ebx);
    MEM32(0x7FA1E8) = 1;
    MEM32(0x7FA1E4) = ebx;
    MEM32(0x7FA1F4) = 0x1D;
    MEM8(0x771B9C) = LO8(ebx);
    MEM8(0x7819D6) = 2;
    goto loc_00235C28;

loc_00235C0D: ;
    edx = MEM32(0x776238);
    edx = edx | 0x20;
    PUSH32(esp, 5);
    edi = 0; /* xor self */
    MEM32(0x776238) = edx;
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_00235C25: ;
    esp = esp + 4;

loc_00235C28: ;
    xmm0 = MEMF(0x776220); /* movss */
    /* ucomiss xmm0, MEMF(0x648D14) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_00235C9E; /* jp: parity */

loc_00235C3D: ;
    if (CMP_NE(MEM32(0x7FA1F8), 0x1D)) goto loc_00235C9E; /* jne: not equal / not zero */

loc_00235C46: ;
    if (CMP_EQ(MEM32(0x849B84), esi)) goto loc_00235C9E; /* je: equal / zero */

loc_00235C4E: ;
    if (CMP_NE(MEM8(0x76EC82), LO8(ebx))) goto loc_00235C9E; /* jne: not equal / not zero */

loc_00235C56: ;
    eax = MEM32(0x847024);
    if (CMP_EQ(eax, ebx)) goto loc_00235C68; /* je: equal / zero */

loc_00235C5F: ;
    eax = MEM32(eax + 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00025720(); /* call 0x00025720 */

loc_00235C68: ;
    if (CMP_NE(MEM8(0x771130), LO8(ebx))) goto loc_00235C9E; /* jne: not equal / not zero */

loc_00235C70: ;
    MEM16(0x800400) = LO16(ebx);
    MEM32(0x7FA1E8) = 1;
    MEM32(0x7FA1E4) = ebx;
    MEM32(0x7FA1F4) = 0x46;
    MEM8(0x771B9C) = LO8(ebx);
    MEM8(0x7819D6) = 2;

loc_00235C9E: ;
    ecx = (uint32_t)(int32_t)SMEM8(esp + 0xF);
    eax = MEM32(0x849B84);
    POP32(esp, edi);
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    SET_LO8(edx, (CMP_NE(eax, ecx)) ? 1 : 0); /* setne */
    POP32(esp, esi);
    MEM8(0x849B89) = LO8(edx);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00235D70
 * Original: 0x00235D70 - 0x00235F4F (479 bytes, 113 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00235D70(void)
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

loc_00235D70: ;
    eax = MEM32(0x863D04);
    (void)0; /* cmp eax, 2 - flags set for next jcc */
    PUSH32(esp, ebx);
    ebx = 1;
    if (CMP_NE(eax, 2)) goto loc_00235E1F; /* jne: not equal / not zero */

loc_00235D84: ;
    if (TEST_NZ(MEM8(0x87B388), LO8(ebx))) goto loc_00235DAE; /* jne: not equal / not zero */

loc_00235D8C: ;
    eax = MEM32(0x87B388);
    eax = eax | ebx;
    ecx = 0x87B384;
    MEM32(0x87B388) = eax;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00235DA2: ;
    MEMF(0x87B37C) = (float)fp_top(); fp_pop(); /* fst */
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */

loc_00235DAE: ;
    PUSH32(esp, 0); sub_0021D790(); /* call 0x0021D790 */

loc_00235DB3: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00235F4D; /* je: equal / zero */

loc_00235DBB: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00235DC5: ;
    fp_push(MEMF(0x87B37C)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp >= 0) /* fcompi */) goto loc_00235DED; /* jae: above or equal (unsigned >=) */

loc_00235DD3: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00235DDD: ;
    fp_push(MEMF(0x87B380)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_00235F4D; /* jbe: below or equal (unsigned <=) */

loc_00235DED: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00235DF7: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    ecx = 0x87B384;
    MEMF(0x87B37C) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00235E0D: ;
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(0x849B84) = 0xF;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00235E1F: ;
    (void)0; /* cmp eax, 3 - flags set for next jcc */
    SET_LO8(eax, MEM8(0x87B388));
    if (CMP_NE(eax, 3)) goto loc_00235EC0; /* jne: not equal / not zero */

loc_00235E2D: ;
    if (TEST_NZ(LO8(ebx), LO8(eax))) goto loc_00235E53; /* jne: not equal / not zero */

loc_00235E31: ;
    eax = MEM32(0x87B388);
    eax = eax | ebx;
    ecx = 0x87B384;
    MEM32(0x87B388) = eax;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00235E47: ;
    MEMF(0x87B37C) = (float)fp_top(); fp_pop(); /* fst */
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */

loc_00235E53: ;
    PUSH32(esp, 0); sub_0021D790(); /* call 0x0021D790 */

loc_00235E58: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00235F4D; /* je: equal / zero */

loc_00235E60: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00235E6A: ;
    fp_push(MEMF(0x87B37C)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp >= 0) /* fcompi */) goto loc_00235E92; /* jae: above or equal (unsigned >=) */

loc_00235E78: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00235E82: ;
    fp_push(MEMF(0x87B380)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_00235F4D; /* jbe: below or equal (unsigned <=) */

loc_00235E92: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00235E9C: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    ecx = 0x87B384;
    MEMF(0x87B37C) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00235EB2: ;
    MEM32(0x849B84) = ebx;
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00235EC0: ;
    if (TEST_NZ(LO8(ebx), LO8(eax))) goto loc_00235EE6; /* jne: not equal / not zero */

loc_00235EC4: ;
    eax = MEM32(0x87B388);
    eax = eax | ebx;
    ecx = 0x87B384;
    MEM32(0x87B388) = eax;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00235EDA: ;
    MEMF(0x87B37C) = (float)fp_top(); fp_pop(); /* fst */
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */

loc_00235EE6: ;
    PUSH32(esp, 0); sub_0021D790(); /* call 0x0021D790 */

loc_00235EEB: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00235F4D; /* je: equal / zero */

loc_00235EEF: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00235EF9: ;
    fp_push(MEMF(0x87B37C)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp >= 0) /* fcompi */) goto loc_00235F1D; /* jae: above or equal (unsigned >=) */

loc_00235F07: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00235F11: ;
    fp_push(MEMF(0x87B380)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_00235F4D; /* jbe: below or equal (unsigned <=) */

loc_00235F1D: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00235F27: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    ecx = 0x87B384;
    MEMF(0x87B37C) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00235F3D: ;
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(0x849B84) = 0x20;

loc_00235F4D: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00235F50
 * Original: 0x00235F50 - 0x00235FEB (155 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00235F50(void)
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

loc_00235F50: ;
    if (TEST_NZ(MEM8(0x87B388), 1)) goto loc_00235F7C; /* jne: not equal / not zero */

loc_00235F59: ;
    eax = MEM32(0x87B388);
    eax = eax | 1;
    ecx = 0x87B384;
    MEM32(0x87B388) = eax;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00235F70: ;
    MEMF(0x87B37C) = (float)fp_top(); fp_pop(); /* fst */
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */

loc_00235F7C: ;
    PUSH32(esp, 0); sub_0021D790(); /* call 0x0021D790 */

loc_00235F81: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00235FEA; /* je: equal / zero */

loc_00235F85: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00235F8F: ;
    fp_push(MEMF(0x87B37C)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp >= 0) /* fcompi */) goto loc_00235FB3; /* jae: above or equal (unsigned >=) */

loc_00235F9D: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00235FA7: ;
    fp_push(MEMF(0x87B380)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_00235FEA; /* jbe: below or equal (unsigned <=) */

loc_00235FB3: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00235FBD: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    ecx = 0x87B384;
    MEMF(0x87B37C) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00235FD3: ;
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(0x849B84) = 7;
    MEM8(0x849B89) = 1;

loc_00235FEA: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00235FF0
 * Original: 0x00235FF0 - 0x00236024 (52 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00235FF0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00235FF0: ;
    edx = MEM32(0x84D44C);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x84D450);
    ecx = 0; /* xor self */

loc_00236000: ;
    if (TEST_Z(edx, edx)) { sub_00236024(); return; } /* je: equal / zero */

loc_00236004: ;
    eax = esi;
    eax = eax - edx;
    eax = (uint32_t)((int32_t)eax >> 2);
    if (CMP_AE(ecx, eax)) { sub_00236024(); return; } /* jae: above or equal (unsigned >=) */

loc_0023600F: ;
    eax = MEM32(edx + ecx * 4);
    SET_LO8(ebx, MEM8(eax + 0x124));
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_0023601F; /* jne: not equal / not zero */

loc_0023601C: ;
    ecx++;
    goto loc_00236000;

loc_0023601F: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00236030
 * Original: 0x00236030 - 0x00236086 (86 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00236030(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00236030: ;
    SET_LO8(eax, MEM8(0x75E6FC));
    esp = esp - 0x18;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00236048; /* je: equal / zero */

loc_0023603C: ;
    PUSH32(esp, 0); sub_00237960(); /* call 0x00237960 */

loc_00236041: ;
    MEM8(0x75E6FC) = 0;

loc_00236048: ;
    eax = MEM32(0x86422C);
    if (TEST_Z(eax, eax)) { sub_00236086(); return; } /* je: equal / zero */

loc_00236051: ;
    SET_LO8(eax, MEM8(eax + 0x64));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0023606B; /* jne: not equal / not zero */

loc_00236058: ;
    SET_LO8(eax, 1);
    MEM8(0x8757FD) = LO8(eax);
    MEM32(0x776238) = 0x10;
    g_seh_ebp = ebp; sub_0023608B(); return; /* tail jmp 0x0023608B */

loc_0023606B: ;
    (void)0; /* cmp LO8(eax), 1 - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(LO8(eax), 1)) ? 1 : 0); /* sete */
    SET_LO8(eax, LO8(eax) - 1);
    MEM32(0x776238) = 0x10;
    eax = eax & 2;
    MEM8(0x8757FD) = LO8(eax);
    g_seh_ebp = ebp; sub_0023608B(); return; /* tail jmp 0x0023608B */

}

/**
 * sub_00236260
 * Original: 0x00236260 - 0x00236328 (200 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00236260(void)
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

loc_00236260: ;
    SET_LO8(eax, MEM8(0x87B388));
    PUSH32(esp, ebx);
    ebx = 1;
    if (TEST_NZ(LO8(ebx), LO8(eax))) goto loc_00236291; /* jne: not equal / not zero */

loc_0023626F: ;
    eax = MEM32(0x87B388);
    eax = eax | ebx;
    ecx = 0x87B384;
    MEM32(0x87B388) = eax;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00236285: ;
    MEMF(0x87B37C) = (float)fp_top(); fp_pop(); /* fst */
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */

loc_00236291: ;
    PUSH32(esp, 0); sub_0021D790(); /* call 0x0021D790 */

loc_00236296: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00236326; /* je: equal / zero */

loc_0023629E: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_002362A8: ;
    fp_push(MEMF(0x87B37C)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp >= 0) /* fcompi */) goto loc_002362CC; /* jae: above or equal (unsigned >=) */

loc_002362B6: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_002362C0: ;
    fp_push(MEMF(0x87B380)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_00236326; /* jbe: below or equal (unsigned <=) */

loc_002362CC: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_002362D6: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    ecx = 0x87B384;
    MEMF(0x87B37C) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_002362EC: ;
    ecx = MEM32(0x863D04);
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */
    SET_LO8(eax, 0); /* xor self */
    (void)0; /* cmp ecx, ebx - flags set for next jcc */
    MEM32(0x849B84) = 0x16;
    if (CMP_NE(ecx, ebx)) goto loc_00236310; /* jne: not equal / not zero */

loc_00236308: ;
    if (CMP_EQ(MEM8(0x75E9A2), LO8(eax))) goto loc_0023631B; /* je: equal / zero */

loc_00236310: ;
    MEM8(0x75E9A2) = LO8(eax);
    MEM32(0x863D04) = ebx;

loc_0023631B: ;
    MEM8(0x862C5C) = LO8(ebx);
    MEM8(0x862C9E) = LO8(eax);

loc_00236326: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00236330
 * Original: 0x00236330 - 0x002363E2 (178 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00236330(void)
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

loc_00236330: ;
    PUSH32(esp, ecx);
    SET_LO8(ecx, MEM8(0x87B388));
    eax = 1;
    if (TEST_NZ(LO8(eax), LO8(ecx))) goto loc_0023635C; /* jne: not equal / not zero */

loc_00236340: ;
    MEM32(0x87B388) = MEM32(0x87B388) | eax;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00236350: ;
    MEMF(0x87B37C) = (float)fp_top(); fp_pop(); /* fst */
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */

loc_0023635C: ;
    PUSH32(esp, 0); sub_0021D790(); /* call 0x0021D790 */

loc_00236361: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002363E0; /* je: equal / zero */

loc_00236365: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023636F: ;
    fp_push(MEMF(0x87B37C)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp >= 0) /* fcompi */) goto loc_00236393; /* jae: above or equal (unsigned >=) */

loc_0023637D: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00236387: ;
    fp_push(MEMF(0x87B380)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_002363E0; /* jbe: below or equal (unsigned <=) */

loc_00236393: ;
    PUSH32(esp, edi);
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023639E: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    ecx = 0x87B384;
    MEMF(0x87B37C) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_002363B4: ;
    PUSH32(esp, 0xC);
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */
    edi = 0; /* xor self */
    MEM32(0x849B84) = 0x13;
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_002363CD: ;
    MEM32(esp + 8) = edi;
    PUSH32(esp, 0xE);
    edi = esp + 0xC;
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_002363DC: ;
    esp = esp + 8;
    POP32(esp, edi);

loc_002363E0: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_002363F0
 * Original: 0x002363F0 - 0x002364E7 (247 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002363F0(void)
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

loc_002363F0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_004185D0(); /* call 0x004185D0 */

loc_002363F6: ;
    SET_LO8(ebx, 0); /* xor self */
    (void)0; /* cmp LO8(eax), LO8(ebx) - flags set for next jcc */
    MEM8(0x863D12) = LO8(eax);
    if (CMP_L(LO8(eax), LO8(ebx))) goto loc_002364E5; /* jl: less (signed <) */

loc_00236405: ;
    SET_LO8(ecx, MEM8(0x87B388));
    eax = 1;
    if (TEST_NZ(LO8(eax), LO8(ecx))) goto loc_00236430; /* jne: not equal / not zero */

loc_00236414: ;
    MEM32(0x87B388) = MEM32(0x87B388) | eax;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00236424: ;
    MEMF(0x87B37C) = (float)fp_top(); fp_pop(); /* fst */
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */

loc_00236430: ;
    PUSH32(esp, 0); sub_0021D790(); /* call 0x0021D790 */

loc_00236435: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002364E5; /* je: equal / zero */

loc_0023643D: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00236447: ;
    fp_push(MEMF(0x87B37C)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp >= 0) /* fcompi */) goto loc_0023646B; /* jae: above or equal (unsigned >=) */

loc_00236455: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023645F: ;
    fp_push(MEMF(0x87B380)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_002364E5; /* jbe: below or equal (unsigned <=) */

loc_0023646B: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00236475: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    ecx = 0x87B384;
    MEMF(0x87B37C) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023648B: ;
    ecx = MEM32(0x863D04);
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */
    eax = 2;
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    MEM32(0x849B84) = 0xF;
    if (CMP_NE(ecx, eax)) goto loc_002364B2; /* jne: not equal / not zero */

loc_002364AA: ;
    if (CMP_EQ(MEM8(0x75E9A2), LO8(ebx))) goto loc_002364C3; /* je: equal / zero */

loc_002364B2: ;
    MEM8(0x75E9A2) = LO8(ebx);
    MEM8(0x863D10) = LO8(ebx);
    MEM32(0x863D04) = eax;

loc_002364C3: ;
    if (CMP_NE(MEM8(0x863D11), LO8(ebx))) goto loc_002364D3; /* jne: not equal / not zero */

loc_002364CB: ;
    if (CMP_EQ(MEM8(0x75E9A0), LO8(ebx))) goto loc_002364DF; /* je: equal / zero */

loc_002364D3: ;
    MEM8(0x75E9A0) = LO8(ebx);
    MEM8(0x863D11) = LO8(ebx);

loc_002364DF: ;
    MEM8(0x862C66) = LO8(ebx);

loc_002364E5: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_002364F0
 * Original: 0x002364F0 - 0x002365E9 (249 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002364F0(void)
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

loc_002364F0: ;
    SET_LO8(ecx, MEM8(0x87B388));
    eax = 1;
    if (TEST_NZ(LO8(eax), LO8(ecx))) goto loc_0023651B; /* jne: not equal / not zero */

loc_002364FF: ;
    MEM32(0x87B388) = MEM32(0x87B388) | eax;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023650F: ;
    MEMF(0x87B37C) = (float)fp_top(); fp_pop(); /* fst */
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */

loc_0023651B: ;
    PUSH32(esp, 0); sub_0021D790(); /* call 0x0021D790 */

loc_00236520: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002365E8; /* je: equal / zero */

loc_00236528: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00236532: ;
    fp_push(MEMF(0x87B37C)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp >= 0) /* fcompi */) goto loc_0023655A; /* jae: above or equal (unsigned >=) */

loc_00236540: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023654A: ;
    fp_push(MEMF(0x87B380)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_002365E8; /* jbe: below or equal (unsigned <=) */

loc_0023655A: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00236564: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    ecx = 0x87B384;
    MEMF(0x87B37C) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023657A: ;
    edx = MEM32(0x863D04);
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */
    eax = 0; /* xor self */
    ecx = 3;
    (void)0; /* cmp edx, ecx - flags set for next jcc */
    MEM32(0x849B84) = 6;
    MEM8(0x849B88) = LO8(eax);
    if (CMP_NE(edx, ecx)) goto loc_002365A8; /* jne: not equal / not zero */

loc_002365A0: ;
    if (CMP_EQ(MEM8(0x75E9A2), LO8(eax))) goto loc_002365B3; /* je: equal / zero */

loc_002365A8: ;
    MEM8(0x75E9A2) = LO8(eax);
    MEM32(0x863D04) = ecx;

loc_002365B3: ;
    if (CMP_NE(MEM8(0x863D11), LO8(eax))) goto loc_002365C3; /* jne: not equal / not zero */

loc_002365BB: ;
    if (CMP_EQ(MEM8(0x75E9A0), LO8(eax))) goto loc_002365CD; /* je: equal / zero */

loc_002365C3: ;
    MEM8(0x75E9A0) = LO8(eax);
    MEM8(0x863D11) = LO8(eax);

loc_002365CD: ;
    MEM8(0x8497F5) = LO8(eax);
    SET_LO8(ecx, 0x10);

loc_002365D4: ;
    if (TEST_Z(MEM8(eax * 4 + 0x77623C), LO8(ecx))) goto loc_002365E2; /* je: equal / zero */

loc_002365DD: ;
    MEM8(0x8497F5) = LO8(eax);

loc_002365E2: ;
    eax++;
    if (CMP_L(eax, 4)) goto loc_002365D4; /* jl: less (signed <) */

loc_002365E8: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_002365F0
 * Original: 0x002365F0 - 0x00236618 (40 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002365F0(void)
{

loc_002365F0: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    MEM8(0x849C10) = LO8(ebx);
    MEM32(0x776238) = ebx;
    MEM32(0x776240) = ebx;
    MEM32(0x77623C) = ebx;
    PUSH32(esp, 0); sub_00234320(); /* call 0x00234320 */

loc_00236610: ;
    MEM8(0x849C11) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00236620
 * Original: 0x00236620 - 0x00236687 (103 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00236620(void)
{

loc_00236620: ;
    esp = esp - 0xC00;
    ecx = MEM32(0x84B120);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x10), _icall_esp); /* indirect call */
    }

loc_00236632: ;
    ecx = (uint32_t)(int32_t)SMEM8(eax + 4);
    ebx = 0; /* xor self */
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    MEM32(esp + 0x14) = 2;
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x20) = ebx;
    MEM32(esp + 0x18) = ebx;
    PUSH32(esp, 0); sub_002A3EA0(); /* call 0x002A3EA0 */

loc_00236659: ;
    esp = esp + 0x10;
    MEM8(0x849C10) = LO8(ebx);
    MEM32(0x776238) = ebx;
    MEM32(0x776240) = ebx;
    MEM32(0x77623C) = ebx;
    PUSH32(esp, 0); sub_00234320(); /* call 0x00234320 */

loc_00236679: ;
    MEM8(0x849C11) = LO8(ebx);
    POP32(esp, ebx);
    esp = esp + 0xC00;
    esp += 4; return; /* ret */

}

/**
 * sub_00236690
 * Original: 0x00236690 - 0x00236715 (133 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00236690(void)
{
    int _cf = 0; /* carry flag */

loc_00236690: ;
    esp = esp - 0xC00;
    ecx = MEM32(0x84B120);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x10), _icall_esp); /* indirect call */
    }

loc_002366A3: ;
    ecx = MEM32(0x84B120);
    edx = MEM32(ecx);
    esi = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x10), _icall_esp); /* indirect call */
    }

loc_002366B0: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_002366B7: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 4);
    (void)0; /* cmp eax, 0x19 - flags set for next jcc */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ebx = 0; /* xor self */
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    eax = eax & 0x19;
    PUSH32(esp, ebx);
    MEM32(esp + 0x18) = 2;
    MEM32(esp + 0x20) = ecx;
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x1C) = ebx;
    PUSH32(esp, 0); sub_002A3EA0(); /* call 0x002A3EA0 */

loc_002366E6: ;
    esp = esp + 0x10;
    MEM8(0x849C10) = LO8(ebx);
    MEM32(0x776238) = ebx;
    MEM32(0x776240) = ebx;
    MEM32(0x77623C) = ebx;
    PUSH32(esp, 0); sub_00234320(); /* call 0x00234320 */

loc_00236706: ;
    POP32(esp, esi);
    MEM8(0x849C11) = LO8(ebx);
    POP32(esp, ebx);
    esp = esp + 0xC00;
    esp += 4; return; /* ret */

}

/**
 * sub_00236720
 * Original: 0x00236720 - 0x0023692B (523 bytes, 152 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00236720(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00236720: ;
    esp = esp - 0x20C;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ecx = ecx + 0xFFFFFFAEu;
    (void)0; /* cmp ecx, 0x65 - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_A(ecx, 0x65)) { sub_0023692B(); return; } /* ja: above (unsigned >) */

loc_00236736: ;
    ecx = ZX8(MEM8(ecx + 0x236A5C));
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(ecx * 4 + 0x236A4C)); return; /* indirect tail jmp */

    PUSH32(esp, eax);
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x5FB074;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_00236751: ;
    PUSH32(esp, eax);
    edx = esp + 0x24;
    PUSH32(esp, 0x100);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046EE4A(); /* call 0x0046EE4A */

loc_00236761: ;
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x5FB04C;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_0023676D: ;
    PUSH32(esp, 0x1C);
    MEM32(esp + 0x24) = eax;
    PUSH32(esp, 0); sub_001FFB50(); /* call 0x001FFB50 */

loc_00236778: ;
    esi = eax;
    esp = esp + 0x14;
    if (TEST_Z(esi, esi)) goto loc_002367A5; /* je: equal / zero */

loc_00236781: ;
    ebp = 0; /* xor self */
    PUSH32(esp, ebp);
    esp = esp - 8;
    eax = esp;
    edi = esp + 0x28;
    ebx = 0; /* xor self */
    PUSH32(esp, 0); sub_00060900(); /* call 0x00060900 */

loc_00236794: ;
    edx = MEM32(esp + 0x1C);
    eax = ebx;
    ecx = ebp;
    PUSH32(esp, 0); sub_002307B0(); /* call 0x002307B0 */

loc_002367A1: ;
    esi = eax;
    goto loc_002367A7;

loc_002367A5: ;
    esi = 0; /* xor self */

loc_002367A7: ;
    MEM32(esp + 0x10) = 0x100;
    MEM32(esp + 0x14) = 0x2365F0;
    MEM32(esp + 0x18) = 0xFFFFFFFFu;
    eax = esi + 0xC;
    g_seh_ebp = ebp; sub_002369D5(); return; /* tail jmp 0x002369D5 */

    PUSH32(esp, eax);
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x5FB020;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_002367D4: ;
    PUSH32(esp, eax);
    eax = esp + 0x24;
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046EE4A(); /* call 0x0046EE4A */

loc_002367E4: ;
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x5FAFFC;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_002367F0: ;
    ebp = eax;
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x5FB04C;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_002367FE: ;
    PUSH32(esp, 0x1C);
    MEM32(esp + 0x24) = eax;
    PUSH32(esp, 0); sub_001FFB50(); /* call 0x001FFB50 */

loc_00236809: ;
    esi = eax;
    esp = esp + 0x14;
    if (TEST_Z(esi, esi)) goto loc_00236834; /* je: equal / zero */

loc_00236812: ;
    ebx = 0; /* xor self */
    PUSH32(esp, ebx);
    esp = esp - 8;
    eax = esp;
    edi = esp + 0x28;
    PUSH32(esp, 0); sub_00060900(); /* call 0x00060900 */

loc_00236823: ;
    ecx = MEM32(esp + 0x1C);
    eax = ebx;
    edx = ebp;
    PUSH32(esp, 0); sub_002307B0(); /* call 0x002307B0 */

loc_00236830: ;
    esi = eax;
    goto loc_00236836;

loc_00236834: ;
    esi = 0; /* xor self */

loc_00236836: ;
    ebx = ebx | 0xFFFFFFFFu;
    edi = esi + 0xC;
    ecx = esp + 0x10;
    eax = edi;
    MEM32(esp + 0x10) = 0x100;
    MEM32(esp + 0x14) = 0x236620;
    MEM32(esp + 0x18) = ebx;
    PUSH32(esp, 0); sub_002692D0(); /* call 0x002692D0 */

loc_0023685B: ;
    MEM32(esp + 0x14) = 0x2365F0;
    g_seh_ebp = ebp; sub_002369C7(); return; /* tail jmp 0x002369C7 */

    ecx = MEM32(0x84B120);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x10), _icall_esp); /* indirect call */
    }

loc_00236873: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_0023687A: ;
    if (CMP_AE(eax, 0x19)) goto loc_00236888; /* jae: above or equal (unsigned >=) */

loc_0023687F: ;
    ecx = 0x19;
    ecx = ecx - eax;
    goto loc_0023688A;

loc_00236888: ;
    ecx = 0; /* xor self */

loc_0023688A: ;
    PUSH32(esp, ecx);
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x5FAFD4;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_00236897: ;
    PUSH32(esp, eax);
    eax = esp + 0x24;
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046EE4A(); /* call 0x0046EE4A */

loc_002368A7: ;
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x5FAF90;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_002368B3: ;
    ebp = eax;
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x5FAF58;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_002368C1: ;
    PUSH32(esp, 0x1C);
    MEM32(esp + 0x24) = eax;
    PUSH32(esp, 0); sub_001FFB50(); /* call 0x001FFB50 */

loc_002368CC: ;
    esi = eax;
    esp = esp + 0x14;
    if (TEST_Z(esi, esi)) goto loc_002368F7; /* je: equal / zero */

loc_002368D5: ;
    ebx = 0; /* xor self */
    PUSH32(esp, ebx);
    esp = esp - 8;
    eax = esp;
    edi = esp + 0x28;
    PUSH32(esp, 0); sub_00060900(); /* call 0x00060900 */

loc_002368E6: ;
    ecx = MEM32(esp + 0x1C);
    eax = ebx;
    edx = ebp;
    PUSH32(esp, 0); sub_002307B0(); /* call 0x002307B0 */

loc_002368F3: ;
    esi = eax;
    goto loc_002368F9;

loc_002368F7: ;
    esi = 0; /* xor self */

loc_002368F9: ;
    ebx = ebx | 0xFFFFFFFFu;
    edi = esi + 0xC;
    ecx = esp + 0x10;
    eax = edi;
    MEM32(esp + 0x10) = 0x100;
    MEM32(esp + 0x14) = 0x2365F0;
    MEM32(esp + 0x18) = ebx;
    PUSH32(esp, 0); sub_002692D0(); /* call 0x002692D0 */

loc_0023691E: ;
    MEM32(esp + 0x14) = 0x236690;
    g_seh_ebp = ebp; sub_002369C7(); return; /* tail jmp 0x002369C7 */

}

/**
 * sub_00236B40
 * Original: 0x00236B40 - 0x00236B97 (87 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00236B40(void)
{

loc_00236B40: ;
    esp = esp - 8;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00234090(); /* call 0x00234090 */

loc_00236B49: ;
    ecx = eax;
    PUSH32(esp, 0); sub_002341E0(); /* call 0x002341E0 */

loc_00236B50: ;
    ecx = MEM32(0x862CD0);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_00236B5B: ;
    ecx = MEM32(0x862CD0);
    PUSH32(esp, 0xE);
    edi = esp + 8;
    MEM32(esp + 8) = ecx;
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_00236B70: ;
    PUSH32(esp, 0xE);
    edi = esp + 0x10;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_00236B83: ;
    esp = esp + 8;
    MEM8(0x849C11) = 1;
    PUSH32(esp, 0); sub_00234320(); /* call 0x00234320 */

loc_00236B92: ;
    POP32(esp, edi);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00236BA0
 * Original: 0x00236BA0 - 0x00236C03 (99 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00236BA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00236BA0: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0); sub_001FFB50(); /* call 0x001FFB50 */

loc_00236BAE: ;
    ebx = 0; /* xor self */
    esp = esp + 4;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    if (CMP_EQ(eax, ebx)) { sub_00236C03(); return; } /* je: equal / zero */

loc_00236BBB: ;
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x5FAEF0;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_00236BC7: ;
    ebp = eax;
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x5FAED8;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_00236BD5: ;
    esi = eax;
    PUSH32(esp, ebx);
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x5FAEAC;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_00236BE4: ;
    esp = esp - 8;
    edi = eax;
    eax = esp;
    PUSH32(esp, 0); sub_00060900(); /* call 0x00060900 */

loc_00236BF0: ;
    edx = esi;
    esi = MEM32(esp + 0x1C);
    eax = ebx;
    ecx = ebp;
    PUSH32(esp, 0); sub_002307B0(); /* call 0x002307B0 */

loc_00236BFF: ;
    edi = eax;
    g_seh_ebp = ebp; sub_00236C05(); return; /* tail jmp 0x00236C05 */

}

/**
 * sub_00236CC0
 * Original: 0x00236CC0 - 0x00236D09 (73 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00236CC0(void)
{

loc_00236CC0: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x8626D8);
    ecx = MEM32(eax);
    edx = esp;
    PUSH32(esp, edx);
    MEM32(0x849B84) = ecx;
    MEM32(0x6BD930) = 0xA;
    MEM32(esp + 4) = eax;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00236CE5: ;
    eax = 0; /* xor self */
    MEM32(0x8626D8) = eax;
    MEM32(0x8626DC) = eax;
    MEM32(0x8626E0) = eax;
    MEM32(0x776240) = eax;
    MEM32(0x77623C) = eax;
    MEM32(0x776238) = eax;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00236D10
 * Original: 0x00236D10 - 0x00236D50 (64 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00236D10(void)
{
    int _flags = 0; /* fallback flag var */

loc_00236D10: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(0x84B10C);
    edx = MEM32(0x849C14);
    eax = MEM32(ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00236D23: ;
    if (TEST_NZ(eax, eax)) goto loc_00236D2C; /* jne: not equal / not zero */

loc_00236D27: ;
    PUSH32(esp, 0); sub_0034F860(); /* call 0x0034F860 */

loc_00236D2C: ;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    PUSH32(esp, 0xE);
    edi = esp + 8;
    MEM32(0x849C14) = eax;
    MEM32(esp + 8) = eax;
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_00236D43: ;
    esp = esp + 4;
    MEM8(0x849C11) = 1;
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00236E20
 * Original: 0x00236E20 - 0x00236E37 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00236E20(void)
{

loc_00236E20: ;
    PUSH32(esp, 0); sub_00234320(); /* call 0x00234320 */

loc_00236E25: ;
    eax = 0; /* xor self */
    MEM32(0x776240) = eax;
    MEM32(0x77623C) = eax;
    MEM32(0x776238) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00236E40
 * Original: 0x00236E40 - 0x00236E9C (92 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00236E40(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00236E40: ;
    PUSH32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x5FAE90;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_00236E4D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x776BE8);
    PUSH32(esp, 0); sub_0046F4CA(); /* call 0x0046F4CA */

loc_00236E58: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) { sub_00236E9C(); return; } /* jne: not equal / not zero */

loc_00236E5F: ;
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x5F8818;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_00236E6B: ;
    esi = eax;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_0003C1E0(); /* call 0x0003C1E0 */

loc_00236E74: ;
    xmm0 = MEMF(0x648D20); /* movss */
    MEM32(eax + 0x1C) = esi;
    MEMF(eax + 0x20) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00234320(); /* call 0x00234320 */

loc_00236E89: ;
    eax = 0; /* xor self */
    MEM32(0x776240) = eax;
    MEM32(0x77623C) = eax;
    MEM32(0x776238) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00236F90
 * Original: 0x00236F90 - 0x00237000 (112 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00236F90(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00236F90: ;
    eax = MEM32(0x849C14);
    esp = esp - 8;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x80);
    PUSH32(esp, eax);
    edi = 0x776BE8;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0046FCD6(); /* call 0x0046FCD6 */

loc_00236FAC: ;
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x5FAE14;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_00236FB8: ;
    PUSH32(esp, 0x28);
    ebp = eax;
    PUSH32(esp, 0); sub_001FFB50(); /* call 0x001FFB50 */

loc_00236FC1: ;
    esi = eax;
    esp = esp + 0x10;
    if (TEST_Z(esi, esi)) { sub_00237000(); return; } /* je: equal / zero */

loc_00236FCA: ;
    MEM32(esi + 4) = 0;
    eax = esi + 0x1C;
    MEM32(esi) = 0x5F77D4;
    MEM32(esi + 8) = 0x236E40;
    MEM32(esi + 0xC) = 0x236E20;
    MEM8(esi + 0x10) = 1;
    PUSH32(esp, 0); sub_00060900(); /* call 0x00060900 */

loc_00236FF1: ;
    MEM32(esi + 0x14) = ebp;
    MEM32(esi + 0x18) = edi;
    MEM32(esi + 0x24) = 0x10;
    g_seh_ebp = ebp; sub_00237002(); return; /* tail jmp 0x00237002 */

}

/**
 * sub_00237070
 * Original: 0x00237070 - 0x002370D3 (99 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00237070(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00237070: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0); sub_001FFB50(); /* call 0x001FFB50 */

loc_0023707E: ;
    ebx = 0; /* xor self */
    esp = esp + 4;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    if (CMP_EQ(eax, ebx)) { sub_002370D3(); return; } /* je: equal / zero */

loc_0023708B: ;
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x5FAEF0;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_00237097: ;
    ebp = eax;
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x5FAED8;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_002370A5: ;
    esi = eax;
    PUSH32(esp, ebx);
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x5FADDC;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_002370B4: ;
    esp = esp - 8;
    edi = eax;
    eax = esp;
    PUSH32(esp, 0); sub_00060900(); /* call 0x00060900 */

loc_002370C0: ;
    edx = esi;
    esi = MEM32(esp + 0x1C);
    eax = ebx;
    ecx = ebp;
    PUSH32(esp, 0); sub_002307B0(); /* call 0x002307B0 */

loc_002370CF: ;
    edi = eax;
    g_seh_ebp = ebp; sub_002370D5(); return; /* tail jmp 0x002370D5 */

}

/**
 * sub_00237190
 * Original: 0x00237190 - 0x002371B2 (34 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00237190(void)
{

loc_00237190: ;
    PUSH32(esp, edi);
    PUSH32(esp, 8);
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_0023719A: ;
    SET_LO8(eax, 0); /* xor self */
    esp = esp + 4;
    MEM8(0x862D30) = 0x23;
    MEM8(0x862D31) = LO8(eax);
    MEM8(0x862D13) = LO8(eax);
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_002371C0
 * Original: 0x002371C0 - 0x00237304 (324 bytes, 82 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002371C0(void)
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

loc_002371C0: ;
    eax = MEM32(0x849C14);
    esp = esp - 0x200;
    PUSH32(esp, eax);
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x5FACA8;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_002371D8: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x5FAC98);
    ecx = esp + 0xC;
    PUSH32(esp, 0x100);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046EE4A(); /* call 0x0046EE4A */

loc_002371ED: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x11);
    PUSH32(esp, 0x5F59F0);
    PUSH32(esp, 0x8757FC);
    PUSH32(esp, 0x75E6A8);
    PUSH32(esp, 0); sub_00240570(); /* call 0x00240570 */

loc_00237205: ;
    edx = esp + 0x28;
    PUSH32(esp, 0x84C318);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00470101(); /* call 0x00470101 */

loc_00237214: ;
    esp = esp + 0x30;
    if (TEST_Z(eax, eax)) goto loc_00237236; /* je: equal / zero */

loc_0023721B: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x84C318);
    PUSH32(esp, 0x84C6B0);
    PUSH32(esp, 0); sub_0046FCD6(); /* call 0x0046FCD6 */

loc_0023722C: ;
    esp = esp + 0xC;
    MEM8(0x849930) = 1;

loc_00237236: ;
    PUSH32(esp, 0x40);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x84C318);
    PUSH32(esp, 0); sub_0046FCD6(); /* call 0x0046FCD6 */

loc_00237247: ;
    SET_LO8(eax, MEM8(0x776238));
    esp = esp + 0xC;
    if (TEST_Z(LO8(eax), 0x20)) goto loc_002372FD; /* je: equal / zero */

loc_00237257: ;
    if (TEST_NZ(MEM8(0x87B388), 1)) goto loc_00237283; /* jne: not equal / not zero */

loc_00237260: ;
    eax = MEM32(0x87B388);
    eax = eax | 1;
    ecx = 0x87B384;
    MEM32(0x87B388) = eax;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00237277: ;
    MEMF(0x87B37C) = (float)fp_top(); fp_pop(); /* fst */
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */

loc_00237283: ;
    PUSH32(esp, 0); sub_0021D790(); /* call 0x0021D790 */

loc_00237288: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002372FD; /* je: equal / zero */

loc_0023728C: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00237296: ;
    fp_push(MEMF(0x87B37C)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp >= 0) /* fcompi */) goto loc_002372BA; /* jae: above or equal (unsigned >=) */

loc_002372A4: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_002372AE: ;
    fp_push(MEMF(0x87B380)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_002372FD; /* jbe: below or equal (unsigned <=) */

loc_002372BA: ;
    PUSH32(esp, edi);
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_002372C5: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    ecx = 0x87B384;
    MEMF(0x87B37C) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_002372DB: ;
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(0x849B84) = 0x13;
    PUSH32(esp, 0); sub_00236BA0(); /* call 0x00236BA0 */

loc_002372F0: ;
    PUSH32(esp, 5);
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_002372F9: ;
    esp = esp + 4;
    POP32(esp, edi);

loc_002372FD: ;
    esp = esp + 0x200;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00237310
 * Original: 0x00237310 - 0x0023731F (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00237310(void)
{
    int _flags = 0; /* fallback flag var */

loc_00237310: ;
    ecx = MEM32(esp + 4);
    SET_LO8(edx, MEM8(ecx + 1));
    eax = 0; /* xor self */
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(LO8(edx), LO8(edx))) ? 1 : 0); /* setne */
    esp += 4; return; /* ret */

}

/**
 * sub_00237320
 * Original: 0x00237320 - 0x0023732F (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00237320(void)
{
    int _flags = 0; /* fallback flag var */

loc_00237320: ;
    ecx = MEM32(esp + 4);
    SET_LO8(edx, MEM8(ecx + 5));
    eax = 0; /* xor self */
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(LO8(edx), LO8(edx))) ? 1 : 0); /* setne */
    esp += 4; return; /* ret */

}

/**
 * sub_00237330
 * Original: 0x00237330 - 0x0023733F (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00237330(void)
{
    int _flags = 0; /* fallback flag var */

loc_00237330: ;
    ecx = MEM32(esp + 4);
    SET_LO8(edx, MEM8(ecx + 3));
    eax = 0; /* xor self */
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(LO8(edx), LO8(edx))) ? 1 : 0); /* setne */
    esp += 4; return; /* ret */

}

/**
 * sub_00237340
 * Original: 0x00237340 - 0x0023744B (267 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00237340(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00237340: ;
    SET_LO8(eax, MEM8(0x87B394));
    esp = esp - 0x24;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* test LO8(eax), 1 - flags set for next jcc */
    PUSH32(esp, esi);
    if (TEST_NZ(LO8(eax), 1)) goto loc_0023737B; /* jne: not equal / not zero */

loc_00237350: ;
    MEM32(0x87B394) = MEM32(0x87B394) | 1;
    MEM8(0x87B38C) = LO8(ebx);
    MEM8(0x87B38D) = LO8(ebx);
    MEM8(0x87B38E) = LO8(ebx);
    MEM8(0x87B38F) = LO8(ebx);
    MEM8(0x87B390) = LO8(ebx);
    MEM8(0x87B391) = LO8(ebx);

loc_0023737B: ;
    (void)0; /* cmp MEM8(0x75E6A0), LO8(ebx) - flags set for next jcc */
    MEM32(esp + 0x10) = ebx;
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x18) = ebx;
    if (CMP_EQ(MEM8(0x75E6A0), LO8(ebx))) goto loc_002373BD; /* je: equal / zero */

loc_0023738F: ;
    esi = MEM32(0x862CD0);
    PUSH32(esp, 0); sub_00352320(); /* call 0x00352320 */

loc_0023739A: ;
    eax = MEM32(0x862CD0);
    eax = eax + 0x1438;
    ecx = MEM32(eax);
    MEM32(0x87B38C) = ecx;
    SET_LO16(edx, MEM16(eax + 4));
    MEM16(0x87B390) = LO16(edx);
    MEM8(0x75E6A0) = LO8(ebx);

loc_002373BD: ;
    if (CMP_NE(MEM32(0x84A19C), ebx)) goto loc_002373CA; /* jne: not equal / not zero */

loc_002373C5: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_002373CA: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    PUSH32(esp, edi);
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (CMP_EQ(esi, ebx)) goto loc_00237413; /* je: equal / zero */

loc_002373F1: ;
    if (CMP_B(MEM32(esi + 0x80), 0x10)) goto loc_00237413; /* jb: below (unsigned <) */

loc_002373FA: ;
    ecx = 4;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00237404: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0023740C: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_00237434; /* jne: not equal / not zero */

loc_00237413: ;
    esi = MEM32(0x84A184);
    ecx = 4;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00237425: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0023742D: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) { sub_0023744B(); return; } /* je: equal / zero */

loc_00237434: ;
    MEM32(eax + 4) = ebx;
    MEM32(eax) = 0x5FA138;
    MEM32(eax + 8) = 0x87B38C;
    MEM8(eax + 0xC) = LO8(ebx);
    edi = eax;
    g_seh_ebp = ebp; sub_0023744D(); return; /* tail jmp 0x0023744D */

}

/**
 * sub_002377E0
 * Original: 0x002377E0 - 0x0023780F (47 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002377E0(void)
{

loc_002377E0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(0x862CD0);
    eax = MEM32(ecx + 0x1428);
    ecx = MEM32(ecx + 0x11B0);
    MEM32(esp) = eax;
    PUSH32(esp, edi);
    eax = esp + 4;
    PUSH32(esp, 0); sub_0023B7A0(); /* call 0x0023B7A0 */

loc_00237800: ;
    PUSH32(esp, 0xD);
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_00237809: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00237810
 * Original: 0x00237810 - 0x0023792E (286 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00237810(void)
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

loc_00237810: ;
    eax = MEM32(0x86422C);
    if (TEST_Z(eax, eax)) goto loc_00237820; /* je: equal / zero */

loc_00237819: ;
    MEM32(0x776238) = MEM32(0x776238) | 0x10;

loc_00237820: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x862CD0);
    PUSH32(esp, 0); sub_00351C60(); /* call 0x00351C60 */

loc_0023782D: ;
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_00237870; /* je: equal / zero */

loc_00237833: ;
    PUSH32(esp, 0x84C318);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00470101(); /* call 0x00470101 */

loc_0023783E: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_00237860; /* je: equal / zero */

loc_00237845: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x84C318);
    PUSH32(esp, 0x84C6B0);
    PUSH32(esp, 0); sub_0046FCD6(); /* call 0x0046FCD6 */

loc_00237856: ;
    esp = esp + 0xC;
    MEM8(0x849930) = 1;

loc_00237860: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, esi);
    PUSH32(esp, 0x84C318);
    PUSH32(esp, 0); sub_0046FCD6(); /* call 0x0046FCD6 */

loc_0023786D: ;
    esp = esp + 0xC;

loc_00237870: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x21);
    PUSH32(esp, 0x5F59F0);
    PUSH32(esp, 0x8757F4);
    PUSH32(esp, 0x75E67C);
    PUSH32(esp, 0); sub_00240570(); /* call 0x00240570 */

loc_00237888: ;
    SET_LO8(eax, MEM8(0x776238));
    esp = esp + 0x14;
    (void)0; /* test LO8(eax), 0x20 - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, esi);
    if (TEST_Z(LO8(eax), 0x20)) goto loc_0023792D; /* je: equal / zero */

loc_0023789A: ;
    if (TEST_NZ(MEM8(0x87B388), 1)) goto loc_002378C6; /* jne: not equal / not zero */

loc_002378A3: ;
    eax = MEM32(0x87B388);
    eax = eax | 1;
    ecx = 0x87B384;
    MEM32(0x87B388) = eax;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_002378BA: ;
    MEMF(0x87B37C) = (float)fp_top(); fp_pop(); /* fst */
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */

loc_002378C6: ;
    PUSH32(esp, 0); sub_0021D790(); /* call 0x0021D790 */

loc_002378CB: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0023792D; /* je: equal / zero */

loc_002378CF: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_002378D9: ;
    fp_push(MEMF(0x87B37C)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp >= 0) /* fcompi */) goto loc_002378FD; /* jae: above or equal (unsigned >=) */

loc_002378E7: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_002378F1: ;
    fp_push(MEMF(0x87B380)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_0023792D; /* jbe: below or equal (unsigned <=) */

loc_002378FD: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00237907: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    ecx = 0x87B384;
    MEMF(0x87B37C) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023791D: ;
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(0x849B84) = 0x13;

loc_0023792D: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00237930
 * Original: 0x00237930 - 0x00237952 (34 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00237930(void)
{

loc_00237930: ;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0xE);
    edi = esp + 8;
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_00237945: ;
    esp = esp + 4;
    MEM8(0x849C11) = 1;
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00237960
 * Original: 0x00237960 - 0x00237A5F (255 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00237960(void)
{
    int _flags = 0; /* fallback flag var */

loc_00237960: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ebx = esp + 8;
    edi = 0x84B146;
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0); sub_0034FC40(); /* call 0x0034FC40 */

loc_00237979: ;
    ebx = MEM32(esp + 8);
    if (TEST_Z(ebx, ebx)) goto loc_00237A59; /* je: equal / zero */

loc_00237985: ;
    eax = MEM32(0x862CD0);
    if (TEST_NZ(eax, eax)) goto loc_00237A24; /* jne: not equal / not zero */

loc_00237992: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_002379A0; /* jne: not equal / not zero */

loc_0023799B: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_002379A0: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    edx++;
    PUSH32(esp, esi);
    esi = MEM32(0x84A190);
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (TEST_Z(esi, esi)) goto loc_002379EF; /* je: equal / zero */

loc_002379C7: ;
    if (CMP_B(MEM32(esi + 0x80), 0x1440)) goto loc_002379EF; /* jb: below (unsigned <) */

loc_002379D3: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002379DD: ;
    PUSH32(esp, 0x1440);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002379E8: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_00237A13; /* jne: not equal / not zero */

loc_002379EF: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00237A01: ;
    PUSH32(esp, 0x1440);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00237A0C: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_00237A1C; /* je: equal / zero */

loc_00237A13: ;
    edi = eax;
    PUSH32(esp, 0); sub_00351B70(); /* call 0x00351B70 */

loc_00237A1A: ;
    goto loc_00237A1E;

loc_00237A1C: ;
    eax = 0; /* xor self */

loc_00237A1E: ;
    MEM32(0x862CD0) = eax;
    POP32(esp, esi);

loc_00237A24: ;
    ecx = MEM32(0x84B10C);
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ebx;
    ecx = MEM32(0x862CD0);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_00237A3B: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    ecx = MEM32(0x862CD0);
    if (TEST_Z(eax, eax)) { sub_00237A5F(); return; } /* je: equal / zero */

loc_00237A45: ;
    if (TEST_Z(ecx, ecx)) goto loc_00237A4F; /* je: equal / zero */

loc_00237A49: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_00237A4F: ;
    MEM32(0x862CD0) = 0;

loc_00237A59: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00237A80
 * Original: 0x00237A80 - 0x00237B27 (167 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00237A80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00237A80: ;
    ecx = MEM32(ebx * 4 + 0x862CD0);
    if (TEST_Z(ecx, ecx)) goto loc_00237A9C; /* je: equal / zero */

loc_00237A8B: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_00237A91: ;
    MEM32(ebx * 4 + 0x862CD0) = 0;

loc_00237A9C: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_00237AAA; /* jne: not equal / not zero */

loc_00237AA5: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_00237AAA: ;
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
    if (TEST_Z(esi, esi)) goto loc_00237AFA; /* je: equal / zero */

loc_00237AD2: ;
    if (CMP_B(MEM32(esi + 0x80), 0x1440)) goto loc_00237AFA; /* jb: below (unsigned <) */

loc_00237ADE: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00237AE8: ;
    PUSH32(esp, 0x1440);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00237AF3: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_00237B1E; /* jne: not equal / not zero */

loc_00237AFA: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00237B0C: ;
    PUSH32(esp, 0x1440);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00237B17: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) { sub_00237B27(); return; } /* je: equal / zero */

loc_00237B1E: ;
    edi = eax;
    PUSH32(esp, 0); sub_00351B70(); /* call 0x00351B70 */

loc_00237B25: ;
    g_seh_ebp = ebp; sub_00237B29(); return; /* tail jmp 0x00237B29 */

}

/**
 * sub_00237C20
 * Original: 0x00237C20 - 0x00237C5A (58 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00237C20(void)
{

loc_00237C20: ;
    eax = MEM32(0x849C08);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    MEM16(eax) = LO16(ebx);
    PUSH32(esp, 5);
    edi = 0; /* xor self */
    MEM16(0x862D84) = LO16(ebx);
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_00237C3C: ;
    esp = esp + 4;
    POP32(esp, edi);
    MEM8(0x849C0C) = LO8(ebx);
    MEM32(0x776240) = ebx;
    MEM32(0x77623C) = ebx;
    MEM32(0x776238) = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00237C60
 * Original: 0x00237C60 - 0x00237C9D (61 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00237C60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00237C60: ;
    eax = MEM32(0x849C08);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E45A(); /* call 0x0046E45A */

loc_00237C6D: ;
    esp = esp + 4;
    ebx = 0; /* xor self */
    if (TEST_Z(eax, eax)) { sub_00237C9D(); return; } /* je: equal / zero */

loc_00237C76: ;
    esi = MEM32(0x849C08);
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x5FAE90;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_00237C88: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0046F4CA(); /* call 0x0046F4CA */

loc_00237C8F: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) { sub_00237C9D(); return; } /* je: equal / zero */

loc_00237C96: ;
    PUSH32(esp, 0); sub_00242460(); /* call 0x00242460 */

loc_00237C9B: ;
    g_seh_ebp = ebp; sub_00237CE6(); return; /* tail jmp 0x00237CE6 */

}

/**
 * sub_00237D00
 * Original: 0x00237D00 - 0x00237D1C (28 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00237D00(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00237D00: ;
    esp = esp - 0x114;
    eax = MEM32(0x870E8C);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    MEM32(esp + 0x18) = ebx;
    if (CMP_NE(eax, ebx)) { sub_00237D1C(); return; } /* jne: not equal / not zero */

loc_00237D18: ;
    ebp = 0; /* xor self */
    g_seh_ebp = ebp; sub_00237D27(); return; /* tail jmp 0x00237D27 */

}

/**
 * sub_002384E0
 * Original: 0x002384E0 - 0x002385F0 (272 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002384E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _fpu_cmp = 0; /* FPU compare result: -1/0/1 */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002384E0: ;
    eax = MEM32(0x849800);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x31C);
    if (TEST_Z(esi, esi)) goto loc_0023852D; /* je: equal / zero */

loc_002384F0: ;
    PUSH32(esp, 0x84C318);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00470101(); /* call 0x00470101 */

loc_002384FB: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0023851D; /* je: equal / zero */

loc_00238502: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x84C318);
    PUSH32(esp, 0x84C6B0);
    PUSH32(esp, 0); sub_0046FCD6(); /* call 0x0046FCD6 */

loc_00238513: ;
    esp = esp + 0xC;
    MEM8(0x849930) = 1;

loc_0023851D: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, esi);
    PUSH32(esp, 0x84C318);
    PUSH32(esp, 0); sub_0046FCD6(); /* call 0x0046FCD6 */

loc_0023852A: ;
    esp = esp + 0xC;

loc_0023852D: ;
    ecx = (uint32_t)(int32_t)SMEM8(0x849B89);
    PUSH32(esp, 0x140);
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00237D00(); /* call 0x00237D00 */

loc_00238541: ;
    esp = esp + 0xC;
    eax--;
    POP32(esp, esi);
    if ((eax == 0)) goto loc_002385EB; /* je: equal / zero */

loc_0023854C: ;
    eax--;
    if ((eax != 0)) { sub_002385F0(); return; } /* jne: not equal / not zero */

loc_00238553: ;
    if (TEST_NZ(MEM8(0x87B388), 1)) goto loc_0023857F; /* jne: not equal / not zero */

loc_0023855C: ;
    eax = MEM32(0x87B388);
    eax = eax | 1;
    ecx = 0x87B384;
    MEM32(0x87B388) = eax;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00238573: ;
    MEMF(0x87B37C) = (float)fp_top(); fp_pop(); /* fst */
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */

loc_0023857F: ;
    PUSH32(esp, 0); sub_0021D790(); /* call 0x0021D790 */

loc_00238584: ;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_002385F0(); return; } /* je: equal / zero */

loc_00238588: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00238592: ;
    fp_push(MEMF(0x87B37C)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp >= 0) /* fcompi */) goto loc_002385B6; /* jae: above or equal (unsigned >=) */

loc_002385A0: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_002385AA: ;
    fp_push(MEMF(0x87B380)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) { sub_002385F0(); return; } /* jbe: below or equal (unsigned <=) */

loc_002385B6: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_002385C0: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    ecx = 0x87B384;
    MEMF(0x87B37C) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_002385D6: ;
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(0x849B84) = 0x16;
    g_seh_ebp = ebp; sub_0004DDD0(); return; /* tail jmp 0x0004DDD0 */

loc_002385EB: ;
    g_seh_ebp = ebp; sub_0023C1F0(); return; /* tail jmp 0x0023C1F0 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00238600
 * Original: 0x00238600 - 0x0023876D (365 bytes, 88 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00238600(void)
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

loc_00238600: ;
    eax = (uint32_t)(int32_t)SMEM8(0x849B89);
    PUSH32(esp, 0x140);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00237D00(); /* call 0x00237D00 */

loc_00238614: ;
    esp = esp + 0xC;
    eax--;
    if ((eax == 0)) goto loc_002386DA; /* je: equal / zero */

loc_0023861E: ;
    eax--;
    if ((eax != 0)) goto loc_0023876C; /* jne: not equal / not zero */

loc_00238625: ;
    SET_LO8(ecx, MEM8(0x87B388));
    eax = 1;
    if (TEST_NZ(LO8(eax), LO8(ecx))) goto loc_00238650; /* jne: not equal / not zero */

loc_00238634: ;
    MEM32(0x87B388) = MEM32(0x87B388) | eax;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00238644: ;
    MEMF(0x87B37C) = (float)fp_top(); fp_pop(); /* fst */
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */

loc_00238650: ;
    PUSH32(esp, 0); sub_0021D790(); /* call 0x0021D790 */

loc_00238655: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0023876C; /* je: equal / zero */

loc_0023865D: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00238667: ;
    fp_push(MEMF(0x87B37C)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp >= 0) /* fcompi */) goto loc_0023868F; /* jae: above or equal (unsigned >=) */

loc_00238675: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023867F: ;
    fp_push(MEMF(0x87B380)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_0023876C; /* jbe: below or equal (unsigned <=) */

loc_0023868F: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023869B: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    ecx = 0x87B384;
    MEMF(0x87B37C) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_002386B1: ;
    esi = 0x862C40;
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_002966D0(); /* call 0x002966D0 */

loc_002386C1: ;
    PUSH32(esp, 0xD);
    edi = 0; /* xor self */
    MEM32(0x849B84) = 0;
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_002386D4: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002386DA: ;
    SET_LO8(ecx, MEM8(0x87B388));
    eax = 1;
    if (TEST_NZ(LO8(eax), LO8(ecx))) goto loc_00238705; /* jne: not equal / not zero */

loc_002386E9: ;
    MEM32(0x87B388) = MEM32(0x87B388) | eax;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_002386F9: ;
    MEMF(0x87B37C) = (float)fp_top(); fp_pop(); /* fst */
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */

loc_00238705: ;
    PUSH32(esp, 0); sub_0021D790(); /* call 0x0021D790 */

loc_0023870A: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0023876C; /* je: equal / zero */

loc_0023870E: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00238718: ;
    fp_push(MEMF(0x87B37C)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp >= 0) /* fcompi */) goto loc_0023873C; /* jae: above or equal (unsigned >=) */

loc_00238726: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00238730: ;
    fp_push(MEMF(0x87B380)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_0023876C; /* jbe: below or equal (unsigned <=) */

loc_0023873C: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00238746: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    ecx = 0x87B384;
    MEMF(0x87B37C) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023875C: ;
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(0x849B84) = 0x29;

loc_0023876C: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00238770
 * Original: 0x00238770 - 0x00238870 (256 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00238770(void)
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

loc_00238770: ;
    (void)0; /* cmp MEM32(0x849E54), 2 - flags set for next jcc */
    SET_LO8(eax, MEM8(0x849B88));
    if (CMP_NE(MEM32(0x849E54), 2)) goto loc_002387AC; /* jne: not equal / not zero */

loc_0023877E: ;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(0x849B84) = 1;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0023886F; /* je: equal / zero */

loc_00238790: ;
    SET_LO8(eax, MEM8(0x862D08));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0023886F; /* je: equal / zero */

loc_0023879D: ;
    MEM8(0x862D08) = 0;
    MEM8(0x862D12) = 0x1B;
    esp += 4; return; /* ret */

loc_002387AC: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002387C4; /* jne: not equal / not zero */

loc_002387B0: ;
    SET_LO8(eax, MEM8(0x8497F5));
    SET_LO8(eax, LO8(eax) + 1);
    MEM8(0x862D08) = LO8(eax);
    MEM8(0x849B88) = 1;
    esp += 4; return; /* ret */

loc_002387C4: ;
    SET_LO8(eax, MEM8(0x862D08));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0023886F; /* jne: not equal / not zero */

loc_002387D1: ;
    SET_LO8(ecx, MEM8(0x87B388));
    eax = 1;
    if (TEST_NZ(LO8(eax), LO8(ecx))) goto loc_002387FC; /* jne: not equal / not zero */

loc_002387E0: ;
    MEM32(0x87B388) = MEM32(0x87B388) | eax;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_002387F0: ;
    MEMF(0x87B37C) = (float)fp_top(); fp_pop(); /* fst */
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */

loc_002387FC: ;
    PUSH32(esp, 0); sub_0021D790(); /* call 0x0021D790 */

loc_00238801: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0023886F; /* je: equal / zero */

loc_00238805: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023880F: ;
    fp_push(MEMF(0x87B37C)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp >= 0) /* fcompi */) goto loc_00238833; /* jae: above or equal (unsigned >=) */

loc_0023881D: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00238827: ;
    fp_push(MEMF(0x87B380)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_0023886F; /* jbe: below or equal (unsigned <=) */

loc_00238833: ;
    PUSH32(esp, esi);
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023883E: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    ecx = 0x87B384;
    MEMF(0x87B37C) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00238854: ;
    esi = 0x862C40;
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_002966D0(); /* call 0x002966D0 */

loc_00238864: ;
    MEM32(0x849B84) = 0;
    POP32(esp, esi);

loc_0023886F: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00238920
 * Original: 0x00238920 - 0x002389B3 (147 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00238920(void)
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

loc_00238920: ;
    SET_LO8(ecx, MEM8(0x87B388));
    eax = 1;
    if (TEST_NZ(LO8(eax), LO8(ecx))) goto loc_0023894B; /* jne: not equal / not zero */

loc_0023892F: ;
    MEM32(0x87B388) = MEM32(0x87B388) | eax;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023893F: ;
    MEMF(0x87B37C) = (float)fp_top(); fp_pop(); /* fst */
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */

loc_0023894B: ;
    PUSH32(esp, 0); sub_0021D790(); /* call 0x0021D790 */

loc_00238950: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002389B2; /* je: equal / zero */

loc_00238954: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023895E: ;
    fp_push(MEMF(0x87B37C)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp >= 0) /* fcompi */) goto loc_00238982; /* jae: above or equal (unsigned >=) */

loc_0023896C: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00238976: ;
    fp_push(MEMF(0x87B380)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_002389B2; /* jbe: below or equal (unsigned <=) */

loc_00238982: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023898C: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    ecx = 0x87B384;
    MEMF(0x87B37C) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_002389A2: ;
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(0x849B84) = 0x2B;

loc_002389B2: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_002389C0
 * Original: 0x002389C0 - 0x002389FF (63 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002389C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002389C0: ;
    PUSH32(esp, 0); sub_0042C91F(); /* call 0x0042C91F */

loc_002389C5: ;
    if (CMP_EQ(eax, 4)) { sub_002389FF(); return; } /* je: equal / zero */

loc_002389CA: ;
    PUSH32(esp, 0); sub_0042C91F(); /* call 0x0042C91F */

loc_002389CF: ;
    if (CMP_EQ(eax, 5)) { sub_002389FF(); return; } /* je: equal / zero */

loc_002389D4: ;
    PUSH32(esp, 0); sub_0042C91F(); /* call 0x0042C91F */

loc_002389D9: ;
    if (CMP_EQ(eax, 6)) { sub_002389FF(); return; } /* je: equal / zero */

loc_002389DE: ;
    PUSH32(esp, 0); sub_0042C91F(); /* call 0x0042C91F */

loc_002389E3: ;
    if (CMP_EQ(eax, 3)) { sub_002389FF(); return; } /* je: equal / zero */

loc_002389E8: ;
    PUSH32(esp, 0); sub_0042E387(); /* call 0x0042E387 */

loc_002389ED: ;
    if (CMP_EQ(eax, 4)) { sub_002389FF(); return; } /* je: equal / zero */

loc_002389F2: ;
    PUSH32(esp, 0); sub_0042E387(); /* call 0x0042E387 */

loc_002389F7: ;
    if (CMP_EQ(eax, 2)) { sub_002389FF(); return; } /* je: equal / zero */

loc_002389FC: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_00238A10
 * Original: 0x00238A10 - 0x00238C8E (638 bytes, 171 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00238A10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _fpu_cmp = 0; /* FPU compare result: -1/0/1 */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00238A10: ;
    eax = ZX8(MEM8(0x862D13));
    esp = esp - 0x8A4;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(0x87BFAC) = 0x75E628;
    esi = 7;
    PUSH32(esp, 0); sub_00420110(); /* call 0x00420110 */

loc_00238A33: ;
    if (TEST_NZ(eax, eax)) goto loc_00238A46; /* jne: not equal / not zero */

loc_00238A37: ;
    MEM32(0x87BFAC) = 0x75E5E0;
    esi = 6;

loc_00238A46: ;
    eax = MEM32(0x86422C);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, ebp);
    if (CMP_EQ(eax, ebx)) goto loc_00238A63; /* je: equal / zero */

loc_00238A53: ;
    MEM8(0x8757EC) = LO8(ebx);
    MEM32(0x776238) = 0x10;

loc_00238A63: ;
    edi = esp + 0x34;
    PUSH32(esp, 0); sub_00289650(); /* call 0x00289650 */

loc_00238A6C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x5F9B74);
    eax = esp + 0xBC;
    PUSH32(esp, 0x400);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046EE4A(); /* call 0x0046EE4A */

loc_00238A84: ;
    esp = esp + 0x10;
    edi = esp + 0xB4;
    eax = esp + 0x10;
    PUSH32(esp, 0); sub_00060900(); /* call 0x00060900 */

loc_00238A97: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x84CA48);
    PUSH32(esp, 0x84CDE0);
    PUSH32(esp, 0); sub_0046FCD6(); /* call 0x0046FCD6 */

loc_00238AA8: ;
    ebp = MEM32(esp + 0x1C);
    PUSH32(esp, 0x40);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x84CA48);
    PUSH32(esp, 0); sub_0046FCD6(); /* call 0x0046FCD6 */

loc_00238AB9: ;
    SET_LO8(eax, MEM8(0x75E5D8));
    esp = esp + 0x18;
    (void)0; /* cmp LO8(eax), LO8(ebx) - flags set for next jcc */
    MEM8(0x849931) = 1;
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_00238B20; /* je: equal / zero */

loc_00238ACC: ;
    PUSH32(esp, 0); sub_002389C0(); /* call 0x002389C0 */

loc_00238AD1: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00238B1A; /* je: equal / zero */

loc_00238AD5: ;
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x5FABA0;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_00238AE6: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00227390(); /* call 0x00227390 */

loc_00238AEC: ;
    esp = esp + 0x10;
    PUSH32(esp, eax);
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_0003C1E0(); /* call 0x0003C1E0 */

loc_00238AF7: ;
    ebx = eax;
    eax = 0xE;
    PUSH32(esp, 0); sub_00232BD0(); /* call 0x00232BD0 */

loc_00238B03: ;
    PUSH32(esp, 0x40400000);
    PUSH32(esp, 0xE);
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_0003C1E0(); /* call 0x0003C1E0 */

loc_00238B11: ;
    ebx = eax;
    PUSH32(esp, 0); sub_00233630(); /* call 0x00233630 */

loc_00238B18: ;
    ebx = 0; /* xor self */

loc_00238B1A: ;
    MEM8(0x75E5D8) = LO8(ebx);

loc_00238B20: ;
    if (CMP_LE(esi, ebx)) goto loc_00238B2E; /* jle: less or equal (signed <=) */

loc_00238B24: ;
    ecx = esi;
    eax = 0; /* xor self */
    edi = esp + 0x18;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */

loc_00238B2E: ;
    eax = ZX8(MEM8(0x862D13));
    PUSH32(esp, 0); sub_004200A0(); /* call 0x004200A0 */

loc_00238B3A: ;
    if (TEST_Z(eax, eax)) goto loc_00238B56; /* je: equal / zero */

loc_00238B3E: ;
    eax = ZX8(MEM8(0x862D13));
    PUSH32(esp, 0); sub_00420400(); /* call 0x00420400 */

loc_00238B4A: ;
    if (TEST_Z(eax, eax)) goto loc_00238B56; /* je: equal / zero */

loc_00238B4E: ;
    MEM32(esp + 0x28) = 0x5FAB78;

loc_00238B56: ;
    edx = MEM32(0x87BFAC);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0xCA);
    PUSH32(esp, 0x8757EC);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_002401F0(); /* call 0x002401F0 */

loc_00238B73: ;
    SET_LO8(eax, MEM8(0x776238));
    esp = esp + 0x14;
    if (TEST_NZ(LO8(eax), 0x20)) goto loc_00238BA5; /* jne: not equal / not zero */

loc_00238B7F: ;
    eax = MEM32(0x863D04);
    if (CMP_EQ(eax, 3)) goto loc_00238B99; /* je: equal / zero */

loc_00238B89: ;
    if (CMP_EQ(eax, 2)) goto loc_00238B99; /* je: equal / zero */

loc_00238B8E: ;
    MEM8(0x849C0F) = LO8(ebx);
    goto loc_00238C4A;

loc_00238B99: ;
    if (CMP_EQ(MEM8(0x849C0F), LO8(ebx))) goto loc_00238C4A; /* je: equal / zero */

loc_00238BA5: ;
    if (TEST_NZ(MEM8(0x87B388), 1)) goto loc_00238BD1; /* jne: not equal / not zero */

loc_00238BAE: ;
    eax = MEM32(0x87B388);
    eax = eax | 1;
    ecx = 0x87B384;
    MEM32(0x87B388) = eax;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00238BC5: ;
    MEMF(0x87B37C) = (float)fp_top(); fp_pop(); /* fst */
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */

loc_00238BD1: ;
    PUSH32(esp, 0); sub_0021D790(); /* call 0x0021D790 */

loc_00238BD6: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00238C4A; /* je: equal / zero */

loc_00238BDA: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00238BE4: ;
    fp_push(MEMF(0x87B37C)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp >= 0) /* fcompi */) goto loc_00238C08; /* jae: above or equal (unsigned >=) */

loc_00238BF2: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00238BFC: ;
    fp_push(MEMF(0x87B380)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_00238C4A; /* jbe: below or equal (unsigned <=) */

loc_00238C08: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00238C12: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    ecx = 0x87B384;
    MEMF(0x87B37C) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00238C28: ;
    esi = 0x862C40;
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_002966D0(); /* call 0x002966D0 */

loc_00238C38: ;
    PUSH32(esp, 5);
    edi = 0; /* xor self */
    MEM32(0x849B84) = ebx;
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_00238C47: ;
    esp = esp + 4;

loc_00238C4A: ;
    (void)0; /* cmp ebp, ebx - flags set for next jcc */
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_EQ(ebp, ebx)) goto loc_00238C85; /* je: equal / zero */

loc_00238C50: ;
    esi = MEM32(esp + 0xC);
    MEM32(esi) = MEM32(esi) - 1;
    if ((MEM32(esi) != 0)) goto loc_00238C85; /* jne: not equal / not zero */

loc_00238C58: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_00238C5E: ;
    if (TEST_NZ(eax, eax)) goto loc_00238C85; /* jne: not equal / not zero */

loc_00238C62: ;
    edi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    edi++;
    edx--;
    PUSH32(esp, esi);
    MEM32(0x7FA490) = edi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_00238C82: ;
    esp = esp + 4;

loc_00238C85: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x8A4;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00238C90
 * Original: 0x00238C90 - 0x00238D23 (147 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00238C90(void)
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

loc_00238C90: ;
    SET_LO8(ecx, MEM8(0x87B388));
    eax = 1;
    if (TEST_NZ(LO8(eax), LO8(ecx))) goto loc_00238CBB; /* jne: not equal / not zero */

loc_00238C9F: ;
    MEM32(0x87B388) = MEM32(0x87B388) | eax;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00238CAF: ;
    MEMF(0x87B37C) = (float)fp_top(); fp_pop(); /* fst */
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */

loc_00238CBB: ;
    PUSH32(esp, 0); sub_0021D790(); /* call 0x0021D790 */

loc_00238CC0: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00238D22; /* je: equal / zero */

loc_00238CC4: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00238CCE: ;
    fp_push(MEMF(0x87B37C)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp >= 0) /* fcompi */) goto loc_00238CF2; /* jae: above or equal (unsigned >=) */

loc_00238CDC: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00238CE6: ;
    fp_push(MEMF(0x87B380)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_00238D22; /* jbe: below or equal (unsigned <=) */

loc_00238CF2: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00238CFC: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    ecx = 0x87B384;
    MEMF(0x87B37C) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00238D12: ;
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(0x849B84) = 2;

loc_00238D22: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00238D30
 * Original: 0x00238D30 - 0x00238DC3 (147 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00238D30(void)
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

loc_00238D30: ;
    SET_LO8(ecx, MEM8(0x87B388));
    eax = 1;
    if (TEST_NZ(LO8(eax), LO8(ecx))) goto loc_00238D5B; /* jne: not equal / not zero */

loc_00238D3F: ;
    MEM32(0x87B388) = MEM32(0x87B388) | eax;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00238D4F: ;
    MEMF(0x87B37C) = (float)fp_top(); fp_pop(); /* fst */
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */

loc_00238D5B: ;
    PUSH32(esp, 0); sub_0021D790(); /* call 0x0021D790 */

loc_00238D60: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00238DC2; /* je: equal / zero */

loc_00238D64: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00238D6E: ;
    fp_push(MEMF(0x87B37C)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp >= 0) /* fcompi */) goto loc_00238D92; /* jae: above or equal (unsigned >=) */

loc_00238D7C: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00238D86: ;
    fp_push(MEMF(0x87B380)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_00238DC2; /* jbe: below or equal (unsigned <=) */

loc_00238D92: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00238D9C: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    ecx = 0x87B384;
    MEMF(0x87B37C) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00238DB2: ;
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(0x849B84) = 0xE;

loc_00238DC2: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00238DD0
 * Original: 0x00238DD0 - 0x00238E84 (180 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00238DD0(void)
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

loc_00238DD0: ;
    SET_LO8(ecx, MEM8(0x87B388));
    eax = 1;
    if (TEST_NZ(LO8(eax), LO8(ecx))) goto loc_00238DFB; /* jne: not equal / not zero */

loc_00238DDF: ;
    MEM32(0x87B388) = MEM32(0x87B388) | eax;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00238DEF: ;
    MEMF(0x87B37C) = (float)fp_top(); fp_pop(); /* fst */
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */

loc_00238DFB: ;
    PUSH32(esp, 0); sub_0021D790(); /* call 0x0021D790 */

loc_00238E00: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00238E83; /* je: equal / zero */

loc_00238E04: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00238E0E: ;
    fp_push(MEMF(0x87B37C)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp >= 0) /* fcompi */) goto loc_00238E32; /* jae: above or equal (unsigned >=) */

loc_00238E1C: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00238E26: ;
    fp_push(MEMF(0x87B380)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_00238E83; /* jbe: below or equal (unsigned <=) */

loc_00238E32: ;
    PUSH32(esp, edi);
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00238E3D: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    ecx = 0x87B384;
    MEMF(0x87B37C) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00238E53: ;
    PUSH32(esp, 0xA);
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */
    edi = 0; /* xor self */
    MEM32(0x849B84) = 3;
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_00238E6C: ;
    esp = esp + 4;
    SET_LO8(eax, 0); /* xor self */
    MEM8(0x862D30) = 0x21;
    MEM8(0x862D31) = LO8(eax);
    MEM8(0x862D13) = LO8(eax);
    POP32(esp, edi);

loc_00238E83: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00238E90
 * Original: 0x00238E90 - 0x00238F32 (162 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00238E90(void)
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

loc_00238E90: ;
    if (TEST_NZ(MEM8(0x87B388), 1)) goto loc_00238EBC; /* jne: not equal / not zero */

loc_00238E99: ;
    eax = MEM32(0x87B388);
    eax = eax | 1;
    ecx = 0x87B384;
    MEM32(0x87B388) = eax;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00238EB0: ;
    MEMF(0x87B37C) = (float)fp_top(); fp_pop(); /* fst */
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */

loc_00238EBC: ;
    PUSH32(esp, 0); sub_0021D790(); /* call 0x0021D790 */

loc_00238EC1: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00238F31; /* je: equal / zero */

loc_00238EC5: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00238ECF: ;
    fp_push(MEMF(0x87B37C)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp >= 0) /* fcompi */) goto loc_00238EF3; /* jae: above or equal (unsigned >=) */

loc_00238EDD: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00238EE7: ;
    fp_push(MEMF(0x87B380)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_00238F31; /* jbe: below or equal (unsigned <=) */

loc_00238EF3: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00238EFD: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    ecx = 0x87B384;
    MEMF(0x87B37C) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00238F13: ;
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(0x849B84) = 4;
    MEM8(0x862D30) = 1;
    MEM8(0x862D31) = 0;

loc_00238F31: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00238F40
 * Original: 0x00238F40 - 0x00238FE1 (161 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00238F40(void)
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

loc_00238F40: ;
    SET_LO8(ecx, MEM8(0x87B388));
    eax = 1;
    if (TEST_NZ(LO8(eax), LO8(ecx))) goto loc_00238F6B; /* jne: not equal / not zero */

loc_00238F4F: ;
    MEM32(0x87B388) = MEM32(0x87B388) | eax;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00238F5F: ;
    MEMF(0x87B37C) = (float)fp_top(); fp_pop(); /* fst */
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */

loc_00238F6B: ;
    PUSH32(esp, 0); sub_0021D790(); /* call 0x0021D790 */

loc_00238F70: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00238FE0; /* je: equal / zero */

loc_00238F74: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00238F7E: ;
    fp_push(MEMF(0x87B37C)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp >= 0) /* fcompi */) goto loc_00238FA2; /* jae: above or equal (unsigned >=) */

loc_00238F8C: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00238F96: ;
    fp_push(MEMF(0x87B380)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_00238FE0; /* jbe: below or equal (unsigned <=) */

loc_00238FA2: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00238FAC: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    ecx = 0x87B384;
    MEMF(0x87B37C) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00238FC2: ;
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(0x849B84) = 5;
    MEM8(0x862D30) = 0x33;
    MEM8(0x862D31) = 0;

loc_00238FE0: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00238FF0
 * Original: 0x00238FF0 - 0x00239137 (327 bytes, 90 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00238FF0(void)
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

loc_00238FF0: ;
    eax = MEM32(0x86422C);
    if (TEST_Z(eax, eax)) goto loc_00239010; /* je: equal / zero */

loc_00238FF9: ;
    (void)0; /* cmp MEM8(eax), 0 - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(MEM8(eax), 0)) ? 1 : 0); /* sete */
    SET_LO8(eax, LO8(eax) + 1);
    MEM8(0x8757EB) = LO8(eax);
    MEM32(0x776238) = 0x10;

loc_00239010: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(0x862CD0);
    (void)0; /* test edi, edi - flags set for next jcc */
    ebx = 1;
    if (TEST_Z(edi, edi)) goto loc_00239051; /* je: equal / zero */

loc_00239021: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00351C60(); /* call 0x00351C60 */

loc_00239027: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x84CA48);
    PUSH32(esp, 0x84CDE0);
    esi = eax;
    PUSH32(esp, 0); sub_0046FCD6(); /* call 0x0046FCD6 */

loc_0023903A: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, esi);
    PUSH32(esp, 0x84CA48);
    PUSH32(esp, 0); sub_0046FCD6(); /* call 0x0046FCD6 */

loc_00239047: ;
    esp = esp + 0x18;
    MEM8(0x849931) = LO8(ebx);
    POP32(esp, esi);

loc_00239051: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xF);
    PUSH32(esp, 0xD3);
    PUSH32(esp, 0x8757EB);
    PUSH32(esp, 0x75E59C);
    PUSH32(esp, 0); sub_002401F0(); /* call 0x002401F0 */

loc_00239069: ;
    SET_LO8(eax, MEM8(0x776238));
    esp = esp + 0x14;
    if (TEST_NZ(LO8(eax), 0x20)) goto loc_0023909B; /* jne: not equal / not zero */

loc_00239075: ;
    eax = MEM32(0x863D04);
    if (CMP_EQ(eax, 3)) goto loc_0023908E; /* je: equal / zero */

loc_0023907F: ;
    if (CMP_EQ(eax, 2)) goto loc_0023908E; /* je: equal / zero */

loc_00239084: ;
    POP32(esp, edi);
    MEM8(0x849C0F) = 0;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0023908E: ;
    SET_LO8(eax, MEM8(0x849C0F));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00239134; /* je: equal / zero */

loc_0023909B: ;
    if (TEST_NZ(MEM8(0x87B388), LO8(ebx))) goto loc_002390C5; /* jne: not equal / not zero */

loc_002390A3: ;
    eax = MEM32(0x87B388);
    eax = eax | ebx;
    ecx = 0x87B384;
    MEM32(0x87B388) = eax;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_002390B9: ;
    MEMF(0x87B37C) = (float)fp_top(); fp_pop(); /* fst */
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */

loc_002390C5: ;
    PUSH32(esp, 0); sub_0021D790(); /* call 0x0021D790 */

loc_002390CA: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00239134; /* je: equal / zero */

loc_002390CE: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_002390D8: ;
    fp_push(MEMF(0x87B37C)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp >= 0) /* fcompi */) goto loc_002390FC; /* jae: above or equal (unsigned >=) */

loc_002390E6: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_002390F0: ;
    fp_push(MEMF(0x87B380)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_00239134; /* jbe: below or equal (unsigned <=) */

loc_002390FC: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00239106: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    ecx = 0x87B384;
    MEMF(0x87B37C) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023911C: ;
    PUSH32(esp, 5);
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */
    edi = 0; /* xor self */
    MEM32(0x849B84) = ebx;
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_00239131: ;
    esp = esp + 4;

loc_00239134: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00239140
 * Original: 0x00239140 - 0x002391D3 (147 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00239140(void)
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

loc_00239140: ;
    SET_LO8(ecx, MEM8(0x87B388));
    eax = 1;
    if (TEST_NZ(LO8(eax), LO8(ecx))) goto loc_0023916B; /* jne: not equal / not zero */

loc_0023914F: ;
    MEM32(0x87B388) = MEM32(0x87B388) | eax;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023915F: ;
    MEMF(0x87B37C) = (float)fp_top(); fp_pop(); /* fst */
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */

loc_0023916B: ;
    PUSH32(esp, 0); sub_0021D790(); /* call 0x0021D790 */

loc_00239170: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002391D2; /* je: equal / zero */

loc_00239174: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023917E: ;
    fp_push(MEMF(0x87B37C)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp >= 0) /* fcompi */) goto loc_002391A2; /* jae: above or equal (unsigned >=) */

loc_0023918C: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00239196: ;
    fp_push(MEMF(0x87B380)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_002391D2; /* jbe: below or equal (unsigned <=) */

loc_002391A2: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_002391AC: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    ecx = 0x87B384;
    MEMF(0x87B37C) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_002391C2: ;
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(0x849B84) = 8;

loc_002391D2: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_002391E0
 * Original: 0x002391E0 - 0x00239273 (147 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002391E0(void)
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

loc_002391E0: ;
    SET_LO8(ecx, MEM8(0x87B388));
    eax = 1;
    if (TEST_NZ(LO8(eax), LO8(ecx))) goto loc_0023920B; /* jne: not equal / not zero */

loc_002391EF: ;
    MEM32(0x87B388) = MEM32(0x87B388) | eax;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_002391FF: ;
    MEMF(0x87B37C) = (float)fp_top(); fp_pop(); /* fst */
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */

loc_0023920B: ;
    PUSH32(esp, 0); sub_0021D790(); /* call 0x0021D790 */

loc_00239210: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00239272; /* je: equal / zero */

loc_00239214: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023921E: ;
    fp_push(MEMF(0x87B37C)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp >= 0) /* fcompi */) goto loc_00239242; /* jae: above or equal (unsigned >=) */

loc_0023922C: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00239236: ;
    fp_push(MEMF(0x87B380)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_00239272; /* jbe: below or equal (unsigned <=) */

loc_00239242: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023924C: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    ecx = 0x87B384;
    MEMF(0x87B37C) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00239262: ;
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(0x849B84) = 9;

loc_00239272: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00239280
 * Original: 0x00239280 - 0x00239363 (227 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00239280(void)
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

loc_00239280: ;
    if (TEST_NZ(MEM8(0x87B388), 1)) goto loc_002392AC; /* jne: not equal / not zero */

loc_00239289: ;
    eax = MEM32(0x87B388);
    eax = eax | 1;
    ecx = 0x87B384;
    MEM32(0x87B388) = eax;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_002392A0: ;
    MEMF(0x87B37C) = (float)fp_top(); fp_pop(); /* fst */
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */

loc_002392AC: ;
    PUSH32(esp, 0); sub_0021D790(); /* call 0x0021D790 */

loc_002392B1: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00239362; /* je: equal / zero */

loc_002392B9: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_002392C3: ;
    fp_push(MEMF(0x87B37C)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp >= 0) /* fcompi */) goto loc_002392E7; /* jae: above or equal (unsigned >=) */

loc_002392D1: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_002392DB: ;
    fp_push(MEMF(0x87B380)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_00239362; /* jbe: below or equal (unsigned <=) */

loc_002392E7: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_002392F1: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    ecx = 0x87B384;
    MEMF(0x87B37C) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00239307: ;
    eax = MEM32(esp + 4);
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */
    ecx = 0; /* xor self */
    eax = eax - ecx;
    MEM32(0x849B84) = 0xA;
    MEM32(0x86EA40) = 2;
    if ((eax == 0)) goto loc_0023934E; /* je: equal / zero */

loc_0023932B: ;
    eax--;
    if ((eax != 0)) goto loc_0023934E; /* jne: not equal / not zero */

loc_0023932E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x1A);
    edi = 0; /* xor self */
    MEM8(0x86E98B) = 1;
    MEM32(0x86EA40) = 3;
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_00239349: ;
    esp = esp + 4;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0023934E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x1A);
    edi = 0; /* xor self */
    MEM8(0x86E98B) = LO8(ecx);
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_0023935E: ;
    esp = esp + 4;
    POP32(esp, edi);

loc_00239362: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00239370
 * Original: 0x00239370 - 0x00239418 (168 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00239370(void)
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

loc_00239370: ;
    SET_LO8(ecx, MEM8(0x87B388));
    eax = 1;
    (void)0; /* test LO8(eax), LO8(ecx) - flags set for next jcc */
    MEM8(0x86E98B) = 0;
    if (TEST_NZ(LO8(eax), LO8(ecx))) goto loc_002393A2; /* jne: not equal / not zero */

loc_00239386: ;
    MEM32(0x87B388) = MEM32(0x87B388) | eax;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00239396: ;
    MEMF(0x87B37C) = (float)fp_top(); fp_pop(); /* fst */
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */

loc_002393A2: ;
    PUSH32(esp, 0); sub_0021D790(); /* call 0x0021D790 */

loc_002393A7: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00239417; /* je: equal / zero */

loc_002393AB: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_002393B5: ;
    fp_push(MEMF(0x87B37C)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp >= 0) /* fcompi */) goto loc_002393D9; /* jae: above or equal (unsigned >=) */

loc_002393C3: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_002393CD: ;
    fp_push(MEMF(0x87B380)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_00239417; /* jbe: below or equal (unsigned <=) */

loc_002393D9: ;
    PUSH32(esp, edi);
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_002393E4: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    ecx = 0x87B384;
    MEMF(0x87B37C) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_002393FA: ;
    PUSH32(esp, 0x1A);
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */
    edi = 0; /* xor self */
    MEM32(0x849B84) = 0xA;
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_00239413: ;
    esp = esp + 4;
    POP32(esp, edi);

loc_00239417: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00239420
 * Original: 0x00239420 - 0x002395A1 (385 bytes, 97 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00239420(void)
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

loc_00239420: ;
    SET_LO8(eax, MEM8(0x849B89));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(0x86EA40) = 0;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0023943E; /* je: equal / zero */

loc_00239433: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(0x776220) = xmm0; /* movss */

loc_0023943E: ;
    eax = MEM32(0x863D08);
    PUSH32(esp, edi);
    edi = 2;
    if (CMP_NE(eax, edi)) goto loc_0023951F; /* jne: not equal / not zero */

loc_00239451: ;
    PUSH32(esp, 0); sub_0028CAF0(); /* call 0x0028CAF0 */

loc_00239456: ;
    eax = MEM32(0x863D08);
    if (CMP_NE(eax, 3)) goto loc_0023946A; /* jne: not equal / not zero */

loc_00239460: ;
    PUSH32(esp, 0); sub_00252A80(); /* call 0x00252A80 */

loc_00239465: ;
    eax = MEM32(0x863D08);

loc_0023946A: ;
    if (TEST_Z(eax, eax)) goto loc_00239477; /* je: equal / zero */

loc_0023946E: ;
    if (CMP_NE(eax, 4)) goto loc_0023958F; /* jne: not equal / not zero */

loc_00239477: ;
    SET_LO8(ecx, MEM8(0x87B388));
    eax = 1;
    if (TEST_NZ(LO8(eax), LO8(ecx))) goto loc_002394A2; /* jne: not equal / not zero */

loc_00239486: ;
    MEM32(0x87B388) = MEM32(0x87B388) | eax;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00239496: ;
    MEMF(0x87B37C) = (float)fp_top(); fp_pop(); /* fst */
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */

loc_002394A2: ;
    PUSH32(esp, 0); sub_0021D790(); /* call 0x0021D790 */

loc_002394A7: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0023958F; /* je: equal / zero */

loc_002394AF: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_002394B9: ;
    fp_push(MEMF(0x87B37C)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp >= 0) /* fcompi */) goto loc_002394E1; /* jae: above or equal (unsigned >=) */

loc_002394C7: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_002394D1: ;
    fp_push(MEMF(0x87B380)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_0023958F; /* jbe: below or equal (unsigned <=) */

loc_002394E1: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_002394EB: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    ecx = 0x87B384;
    MEMF(0x87B37C) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00239501: ;
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(0x849B84) = edi;
    MEMF(0x776220) = xmm0; /* movss */
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0023951F: ;
    if (CMP_EQ(eax, 5)) goto loc_0023958F; /* je: equal / zero */

loc_00239524: ;
    if (CMP_EQ(eax, 3)) goto loc_0023958F; /* je: equal / zero */

loc_00239529: ;
    if (CMP_EQ(eax, 4)) goto loc_0023958F; /* je: equal / zero */

loc_0023952E: ;
    PUSH32(esp, 0); sub_002592D0(); /* call 0x002592D0 */

loc_00239533: ;
    if (CMP_EQ(MEM32(0x863D08), 1)) goto loc_0023958F; /* je: equal / zero */

loc_0023953C: ;
    if (TEST_NZ(MEM8(0x776238), 0x20)) goto loc_0023954E; /* jne: not equal / not zero */

loc_00239545: ;
    PUSH32(esp, 0); sub_00234230(); /* call 0x00234230 */

loc_0023954A: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0023958F; /* je: equal / zero */

loc_0023954E: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, 0); /* xor self */
    PUSH32(esp, 0); sub_002423B0(); /* call 0x002423B0 */

loc_00239556: ;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    POP32(esp, ebx);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0023958F; /* je: equal / zero */

loc_0023955B: ;
    PUSH32(esp, 0); sub_00421450(); /* call 0x00421450 */

loc_00239560: ;
    eax = MEM32(0x84BFA4);
    if (TEST_Z(eax, eax)) goto loc_0023956E; /* je: equal / zero */

loc_00239569: ;
    PUSH32(esp, 0); sub_00422220(); /* call 0x00422220 */

loc_0023956E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 5);
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_00239578: ;
    esp = esp + 4;
    eax = 0; /* xor self */
    esi = 0x862C40;
    PUSH32(esp, 0); sub_002978E0(); /* call 0x002978E0 */

loc_00239587: ;
    MEM8(0x862D91) = 0xFF;
    POP32(esp, esi);

loc_0023958F: ;
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(0x776220) = xmm0; /* movss */
    POP32(esp, edi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_002395B0
 * Original: 0x002395B0 - 0x0023985F (687 bytes, 167 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002395B0(void)
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

loc_002395B0: ;
    SET_LO8(eax, MEM8(0x849B89));
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp LO8(eax), LO8(ebx) - flags set for next jcc */
    MEM32(0x86EA40) = ebx;
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_002395CD; /* je: equal / zero */

loc_002395C2: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(0x776220) = xmm0; /* movss */

loc_002395CD: ;
    eax = MEM32(0x863D08);
    if (CMP_NE(eax, 2)) goto loc_002396A7; /* jne: not equal / not zero */

loc_002395DB: ;
    PUSH32(esp, 0); sub_0028CAF0(); /* call 0x0028CAF0 */

loc_002395E0: ;
    if (CMP_NE(MEM32(0x863D08), 3)) goto loc_002395EE; /* jne: not equal / not zero */

loc_002395E9: ;
    PUSH32(esp, 0); sub_00252A80(); /* call 0x00252A80 */

loc_002395EE: ;
    if (CMP_NE(MEM32(0x863D08), ebx)) goto loc_0023984D; /* jne: not equal / not zero */

loc_002395FA: ;
    SET_LO8(eax, MEM8(0x87B388));
    ebx = 1;
    if (TEST_NZ(LO8(ebx), LO8(eax))) goto loc_0023962A; /* jne: not equal / not zero */

loc_00239608: ;
    eax = MEM32(0x87B388);
    eax = eax | ebx;
    ecx = 0x87B384;
    MEM32(0x87B388) = eax;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023961E: ;
    MEMF(0x87B37C) = (float)fp_top(); fp_pop(); /* fst */
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */

loc_0023962A: ;
    PUSH32(esp, 0); sub_0021D790(); /* call 0x0021D790 */

loc_0023962F: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0023984D; /* je: equal / zero */

loc_00239637: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00239641: ;
    fp_push(MEMF(0x87B37C)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp >= 0) /* fcompi */) goto loc_00239669; /* jae: above or equal (unsigned >=) */

loc_0023964F: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00239659: ;
    fp_push(MEMF(0x87B380)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_0023984D; /* jbe: below or equal (unsigned <=) */

loc_00239669: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00239673: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    ecx = 0x87B384;
    MEMF(0x87B37C) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00239689: ;
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(0x849B84) = ebx;
    MEMF(0x776220) = xmm0; /* movss */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_002396A7: ;
    (void)0; /* cmp eax, 5 - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_NE(eax, 5)) goto loc_00239709; /* jne: not equal / not zero */

loc_002396AD: ;
    PUSH32(esp, 0x17);
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_002396B6: ;
    PUSH32(esp, 0x1A);
    MEM32(0x849B84) = 0xA;
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_002396C7: ;
    eax = MEM32(0x863D08);
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_002396DF; /* jne: not equal / not zero */

loc_002396D3: ;
    if (CMP_EQ(MEM8(0x75E9A1), LO8(ebx))) goto loc_0023984C; /* je: equal / zero */

loc_002396DF: ;
    MEM8(0x75E9A1) = LO8(ebx);
    MEM32(0x863D08) = ebx;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_002396F0: ;
    MEMF(0x863D0C) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0 = MEMF(0x648D14); /* movss */
    POP32(esp, edi);
    MEMF(0x776220) = xmm0; /* movss */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00239709: ;
    if (CMP_EQ(eax, 3)) goto loc_0023984C; /* je: equal / zero */

loc_00239712: ;
    (void)0; /* test MEM8(0x776238), 0x20 - flags set for next jcc */
    PUSH32(esp, esi);
    if (TEST_NZ(MEM8(0x776238), 0x20)) goto loc_0023978A; /* jne: not equal / not zero */

loc_0023971C: ;
    PUSH32(esp, 0); sub_00234230(); /* call 0x00234230 */

loc_00239721: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0023978A; /* jne: not equal / not zero */

loc_00239725: ;
    eax = MEM32(0x849800);
    esi = MEM32(eax + 0x470);
    if (CMP_EQ(esi, ebx)) goto loc_00239771; /* je: equal / zero */

loc_00239734: ;
    PUSH32(esp, 0x84C318);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00470101(); /* call 0x00470101 */

loc_0023973F: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_00239761; /* je: equal / zero */

loc_00239746: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x84C318);
    PUSH32(esp, 0x84C6B0);
    PUSH32(esp, 0); sub_0046FCD6(); /* call 0x0046FCD6 */

loc_00239757: ;
    esp = esp + 0xC;
    MEM8(0x849930) = 1;

loc_00239761: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, esi);
    PUSH32(esp, 0x84C318);
    PUSH32(esp, 0); sub_0046FCD6(); /* call 0x0046FCD6 */

loc_0023976E: ;
    esp = esp + 0xC;

loc_00239771: ;
    PUSH32(esp, 0); sub_00258F60(); /* call 0x00258F60 */

loc_00239776: ;
    xmm0 = MEMF(0x648D14); /* movss */
    POP32(esp, esi);
    POP32(esp, edi);
    MEMF(0x776220) = xmm0; /* movss */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0023978A: ;
    SET_LO8(eax, MEM8(0x87B388));
    ebx = 1;
    if (TEST_NZ(LO8(ebx), LO8(eax))) goto loc_002397BA; /* jne: not equal / not zero */

loc_00239798: ;
    eax = MEM32(0x87B388);
    eax = eax | ebx;
    ecx = 0x87B384;
    MEM32(0x87B388) = eax;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_002397AE: ;
    MEMF(0x87B37C) = (float)fp_top(); fp_pop(); /* fst */
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */

loc_002397BA: ;
    PUSH32(esp, 0); sub_0021D790(); /* call 0x0021D790 */

loc_002397BF: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0023984B; /* je: equal / zero */

loc_002397C7: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_002397D1: ;
    fp_push(MEMF(0x87B37C)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp >= 0) /* fcompi */) goto loc_002397F5; /* jae: above or equal (unsigned >=) */

loc_002397DF: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_002397E9: ;
    fp_push(MEMF(0x87B380)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_0023984B; /* jbe: below or equal (unsigned <=) */

loc_002397F5: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_002397FF: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    ecx = 0x87B384;
    MEMF(0x87B37C) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00239815: ;
    PUSH32(esp, 5);
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */
    edi = 0; /* xor self */
    MEM32(0x849B84) = 2;
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_0023982E: ;
    PUSH32(esp, 0x17);
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_00239835: ;
    esp = esp + 8;
    eax = 0; /* xor self */
    esi = 0x862C40;
    PUSH32(esp, 0); sub_002978E0(); /* call 0x002978E0 */

loc_00239844: ;
    MEM8(0x862D91) = 0xFF;

loc_0023984B: ;
    POP32(esp, esi);

loc_0023984C: ;
    POP32(esp, edi);

loc_0023984D: ;
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(0x776220) = xmm0; /* movss */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00239860
 * Original: 0x00239860 - 0x00239B78 (792 bytes, 205 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00239860(void)
{
    uint32_t ebp;
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
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00239860: ;
    PUSH32(esp, ecx);
    SET_LO8(eax, MEM8(0x849B89));
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    (void)0; /* cmp LO8(eax), LO8(ebx) - flags set for next jcc */
    edi = 1;
    MEM32(0x86EA40) = edi;
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_00239886; /* je: equal / zero */

loc_0023987B: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(0x776220) = xmm0; /* movss */

loc_00239886: ;
    eax = MEM32(0x863D08);
    if (CMP_NE(eax, 2)) goto loc_00239959; /* jne: not equal / not zero */

loc_00239894: ;
    PUSH32(esp, 0); sub_0028CAF0(); /* call 0x0028CAF0 */

loc_00239899: ;
    eax = MEM32(0x863D08);
    if (CMP_NE(eax, 3)) goto loc_002398AD; /* jne: not equal / not zero */

loc_002398A3: ;
    PUSH32(esp, 0); sub_00252A80(); /* call 0x00252A80 */

loc_002398A8: ;
    eax = MEM32(0x863D08);

loc_002398AD: ;
    if (CMP_EQ(eax, ebx)) goto loc_002398BA; /* je: equal / zero */

loc_002398B1: ;
    if (CMP_NE(eax, 4)) goto loc_00239B62; /* jne: not equal / not zero */

loc_002398BA: ;
    if (TEST_NZ(MEM8(0x87B388), 1)) goto loc_002398E5; /* jne: not equal / not zero */

loc_002398C3: ;
    eax = MEM32(0x87B388);
    eax = eax | edi;
    ecx = 0x87B384;
    MEM32(0x87B388) = eax;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_002398D9: ;
    MEMF(0x87B37C) = (float)fp_top(); fp_pop(); /* fst */
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */

loc_002398E5: ;
    PUSH32(esp, 0); sub_0021D790(); /* call 0x0021D790 */

loc_002398EA: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00239B62; /* je: equal / zero */

loc_002398F2: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_002398FC: ;
    fp_push(MEMF(0x87B37C)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp >= 0) /* fcompi */) goto loc_00239924; /* jae: above or equal (unsigned >=) */

loc_0023990A: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00239914: ;
    fp_push(MEMF(0x87B380)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_00239B62; /* jbe: below or equal (unsigned <=) */

loc_00239924: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023992E: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    ecx = 0x87B384;
    MEMF(0x87B37C) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00239944: ;
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(0x849B84) = 2;
    goto loc_00239B62;

loc_00239959: ;
    if (CMP_NE(eax, 5)) goto loc_002399AD; /* jne: not equal / not zero */

loc_0023995E: ;
    PUSH32(esp, 0x17);
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_00239967: ;
    eax = MEM32(0x863D08);
    esp = esp + 4;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(0x849B84) = 0xA;
    if (CMP_NE(eax, ebx)) goto loc_00239985; /* jne: not equal / not zero */

loc_0023997D: ;
    if (CMP_EQ(MEM8(0x75E9A1), LO8(ebx))) goto loc_0023999C; /* je: equal / zero */

loc_00239985: ;
    MEM8(0x75E9A1) = LO8(ebx);
    MEM32(0x863D08) = ebx;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00239996: ;
    MEMF(0x863D0C) = (float)fp_top(); fp_popp(); /* fstp */

loc_0023999C: ;
    PUSH32(esp, 0x1A);
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_002399A5: ;
    esp = esp + 4;
    goto loc_00239B62;

loc_002399AD: ;
    if (CMP_EQ(eax, 3)) goto loc_00239B62; /* je: equal / zero */

loc_002399B6: ;
    eax = MEM32(0x849800);
    esi = MEM32(eax + 0x474);
    if (CMP_EQ(esi, ebx)) goto loc_00239A02; /* je: equal / zero */

loc_002399C5: ;
    PUSH32(esp, 0x84C318);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00470101(); /* call 0x00470101 */

loc_002399D0: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_002399F2; /* je: equal / zero */

loc_002399D7: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x84C318);
    PUSH32(esp, 0x84C6B0);
    PUSH32(esp, 0); sub_0046FCD6(); /* call 0x0046FCD6 */

loc_002399E8: ;
    esp = esp + 0xC;
    MEM8(0x849930) = 1;

loc_002399F2: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, esi);
    PUSH32(esp, 0x84C318);
    PUSH32(esp, 0); sub_0046FCD6(); /* call 0x0046FCD6 */

loc_002399FF: ;
    esp = esp + 0xC;

loc_00239A02: ;
    eax = MEM32(0x86EC60);
    if (CMP_EQ(eax, 2)) goto loc_00239A11; /* je: equal / zero */

loc_00239A0C: ;
    if (CMP_NE(eax, 3)) goto loc_00239A2B; /* jne: not equal / not zero */

loc_00239A11: ;
    if (CMP_EQ(MEM8(0x84A138), LO8(ebx))) goto loc_00239A24; /* je: equal / zero */

loc_00239A19: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(0x776220) = xmm0; /* movss */

loc_00239A24: ;
    PUSH32(esp, 0); sub_0025AB60(); /* call 0x0025AB60 */

loc_00239A29: ;
    goto loc_00239A89;

loc_00239A2B: ;
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0); sub_001FFB50(); /* call 0x001FFB50 */

loc_00239A32: ;
    esp = esp + 4;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    if (CMP_EQ(eax, ebx)) goto loc_00239A6D; /* je: equal / zero */

loc_00239A3D: ;
    PUSH32(esp, ebx);
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x5FAB28;
    esi = 0; /* xor self */
    ebp = 0; /* xor self */
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_00239A4E: ;
    esp = esp - 8;
    ecx = esp;
    edi = eax;
    eax = ecx;
    PUSH32(esp, 0); sub_00060900(); /* call 0x00060900 */

loc_00239A5C: ;
    ecx = esi;
    esi = MEM32(esp + 0x1C);
    eax = ebx;
    edx = ebp;
    PUSH32(esp, 0); sub_002307B0(); /* call 0x002307B0 */

loc_00239A6B: ;
    goto loc_00239A6F;

loc_00239A6D: ;
    eax = 0; /* xor self */

loc_00239A6F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_0003C1E0(); /* call 0x0003C1E0 */

loc_00239A78: ;
    ebx = eax;
    eax = 0xA;
    PUSH32(esp, 0); sub_00232BD0(); /* call 0x00232BD0 */

loc_00239A84: ;
    edi = 1;

loc_00239A89: ;
    if (TEST_NZ(MEM8(0x776238), 0x20)) goto loc_00239A9F; /* jne: not equal / not zero */

loc_00239A92: ;
    PUSH32(esp, 0); sub_00234230(); /* call 0x00234230 */

loc_00239A97: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00239B62; /* je: equal / zero */

loc_00239A9F: ;
    if (TEST_NZ(MEM8(0x87B388), 1)) goto loc_00239ACA; /* jne: not equal / not zero */

loc_00239AA8: ;
    eax = MEM32(0x87B388);
    eax = eax | edi;
    ecx = 0x87B384;
    MEM32(0x87B388) = eax;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00239ABE: ;
    MEMF(0x87B37C) = (float)fp_top(); fp_pop(); /* fst */
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */

loc_00239ACA: ;
    PUSH32(esp, 0); sub_0021D790(); /* call 0x0021D790 */

loc_00239ACF: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00239B62; /* je: equal / zero */

loc_00239AD7: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00239AE1: ;
    fp_push(MEMF(0x87B37C)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp >= 0) /* fcompi */) goto loc_00239B05; /* jae: above or equal (unsigned >=) */

loc_00239AEF: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00239AF9: ;
    fp_push(MEMF(0x87B380)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_00239B62; /* jbe: below or equal (unsigned <=) */

loc_00239B05: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00239B0F: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    ecx = 0x87B384;
    MEMF(0x87B37C) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00239B25: ;
    eax = edi;
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(0x849B84) = 2;
    PUSH32(esp, 0); sub_002431E0(); /* call 0x002431E0 */

loc_00239B3C: ;
    PUSH32(esp, 5);
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_00239B45: ;
    PUSH32(esp, 0x17);
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_00239B4C: ;
    esp = esp + 8;
    eax = 0; /* xor self */
    esi = 0x862C40;
    PUSH32(esp, 0); sub_002978E0(); /* call 0x002978E0 */

loc_00239B5B: ;
    MEM8(0x862D91) = 0xFF;

loc_00239B62: ;
    xmm0 = MEMF(0x648D14); /* movss */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEMF(0x776220) = xmm0; /* movss */
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
 * sub_00239B80
 * Original: 0x00239B80 - 0x00239BE6 (102 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00239B80(void)
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

loc_00239B80: ;
    if (TEST_NZ(MEM8(0x87B388), 1)) goto loc_00239BAC; /* jne: not equal / not zero */

loc_00239B89: ;
    eax = MEM32(0x87B388);
    eax = eax | 1;
    ecx = 0x87B384;
    MEM32(0x87B388) = eax;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00239BA0: ;
    MEMF(0x87B37C) = (float)fp_top(); fp_pop(); /* fst */
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */

loc_00239BAC: ;
    PUSH32(esp, 0); sub_0021D790(); /* call 0x0021D790 */

loc_00239BB1: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00239BE3; /* je: equal / zero */

loc_00239BB5: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00239BBF: ;
    fp_push(MEMF(0x87B37C)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp >= 0) /* fcompi */) { sub_00239BE6(); return; } /* jae: above or equal (unsigned >=) */

loc_00239BCD: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00239BD7: ;
    fp_push(MEMF(0x87B380)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) { sub_00239BE6(); return; } /* ja: above (unsigned >) */

loc_00239BE3: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00239C20
 * Original: 0x00239C20 - 0x00239C9A (122 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00239C20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00239C20: ;
    if (CMP_NE(MEM32(0x86EA40), 3)) goto loc_00239C99; /* jne: not equal / not zero */

loc_00239C29: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x5FAB0C;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_00239C3F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00227390(); /* call 0x00227390 */

loc_00239C45: ;
    ebp = eax;
    esp = esp + 0x10;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_0003C1E0(); /* call 0x0003C1E0 */

loc_00239C51: ;
    edi = eax;
    eax = MEM32(edi + 0x10);
    esi = MEM32(eax + 0x38);
    ecx = MEM32(esi + 0x38);
    eax = eax + 0x38;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    ebx = 1;
    MEM8(esi + 0x31) = LO8(ebx);
    if (TEST_Z(ecx, ecx)) goto loc_00239C71; /* je: equal / zero */

loc_00239C6B: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00239C71: ;
    MEM32(esi + 0x38) = ebp;
    eax = MEM32(edi + 0x10);
    ecx = MEM32(eax + 0x38);
    eax = eax + 0x38;
    PUSH32(esp, 0x40800000);
    PUSH32(esp, 0xE);
    SET_LO8(eax, 0); /* xor self */
    MEM8(ecx + 0x30) = LO8(ebx);
    PUSH32(esp, 0); sub_0003C1E0(); /* call 0x0003C1E0 */

loc_00239C8E: ;
    ebx = eax;
    PUSH32(esp, 0); sub_00233630(); /* call 0x00233630 */

loc_00239C95: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00239C99: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00239CA0
 * Original: 0x00239CA0 - 0x00239D1D (125 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00239CA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00239CA0: ;
    PUSH32(esp, ecx);
    (void)0; /* cmp MEM32(0x863D04), 3 - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(MEM32(0x863D04), 3)) { sub_00239D1D(); return; } /* jne: not equal / not zero */

loc_00239CAE: ;
    eax = MEM32(0x86EC60);
    if (CMP_EQ(eax, 2)) { sub_00239D1D(); return; } /* je: equal / zero */

loc_00239CB8: ;
    if (CMP_EQ(eax, 3)) { sub_00239D1D(); return; } /* je: equal / zero */

loc_00239CBD: ;
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0); sub_001FFB50(); /* call 0x001FFB50 */

loc_00239CC4: ;
    esp = esp + 4;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    if (TEST_Z(eax, eax)) goto loc_00239CFF; /* je: equal / zero */

loc_00239CCF: ;
    esi = 0; /* xor self */
    PUSH32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x5FAAB8;
    ebx = 0; /* xor self */
    ebp = 0; /* xor self */
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_00239CE2: ;
    esp = esp - 8;
    edi = eax;
    eax = esp;
    PUSH32(esp, 0); sub_00060900(); /* call 0x00060900 */

loc_00239CEE: ;
    edx = esi;
    esi = MEM32(esp + 0x1C);
    eax = ebx;
    ecx = ebp;
    PUSH32(esp, 0); sub_002307B0(); /* call 0x002307B0 */

loc_00239CFD: ;
    goto loc_00239D01;

loc_00239CFF: ;
    eax = 0; /* xor self */

loc_00239D01: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_0003C1E0(); /* call 0x0003C1E0 */

loc_00239D0B: ;
    ebx = eax;
    eax = 0xA;
    PUSH32(esp, 0); sub_00232BD0(); /* call 0x00232BD0 */

loc_00239D17: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00239F50
 * Original: 0x00239F50 - 0x0023A009 (185 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00239F50(void)
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

loc_00239F50: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0026AE10(); /* call 0x0026AE10 */

loc_00239F57: ;
    SET_LO8(eax, MEM8(0x862D30));
    esp = esp + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0023A008; /* jne: not equal / not zero */

loc_00239F67: ;
    if (TEST_NZ(MEM8(0x87B388), 1)) goto loc_00239F93; /* jne: not equal / not zero */

loc_00239F70: ;
    eax = MEM32(0x87B388);
    eax = eax | 1;
    ecx = 0x87B384;
    MEM32(0x87B388) = eax;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00239F87: ;
    MEMF(0x87B37C) = (float)fp_top(); fp_pop(); /* fst */
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */

loc_00239F93: ;
    PUSH32(esp, 0); sub_0021D790(); /* call 0x0021D790 */

loc_00239F98: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0023A008; /* je: equal / zero */

loc_00239F9C: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00239FA6: ;
    fp_push(MEMF(0x87B37C)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp >= 0) /* fcompi */) goto loc_00239FCA; /* jae: above or equal (unsigned >=) */

loc_00239FB4: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00239FBE: ;
    fp_push(MEMF(0x87B380)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_0023A008; /* jbe: below or equal (unsigned <=) */

loc_00239FCA: ;
    PUSH32(esp, edi);
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00239FD5: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    ecx = 0x87B384;
    MEMF(0x87B37C) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00239FEB: ;
    PUSH32(esp, 0xB);
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */
    edi = 0; /* xor self */
    MEM32(0x849B84) = 1;
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_0023A004: ;
    esp = esp + 4;
    POP32(esp, edi);

loc_0023A008: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0023A010
 * Original: 0x0023A010 - 0x0023A1F3 (483 bytes, 125 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023A010(void)
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

loc_0023A010: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = 1;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0026AE10(); /* call 0x0026AE10 */

loc_0023A01D: ;
    SET_LO8(eax, MEM8(0x86E988));
    esp = esp + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0023A14F; /* jne: not equal / not zero */

loc_0023A02D: ;
    SET_LO8(eax, MEM8(0x7FA23C));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = 0.0f; /* xorps self = zero */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0023A041; /* jne: not equal / not zero */

loc_0023A039: ;
    xmm0 = MEMF(0x7F9F48); /* movss */

loc_0023A041: ;
    (void)0; /* cmp MEM32(0x75E500), ebx - flags set for next jcc */
    MEMF(esp + 4) = xmm0; /* movss */
    if (CMP_NE(MEM32(0x75E500), ebx)) goto loc_0023A067; /* jne: not equal / not zero */

loc_0023A04F: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648E64)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_0023A0A7; /* ja: above (unsigned >) */

loc_0023A067: ;
    ecx = MEM32(0x847024);
    eax = MEM32(ecx + 0x44);
    eax = MEM32(eax + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = eax + 4;
    eax = MEM32(eax);
    PUSH32(esp, eax);
    eax = MEM32(ecx + 0x40);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    edx = edx | 0xFFFFFFFFu;
    eax = eax | 0xFFFFFFFFu;
    ecx = 0xAD1;
    MEMF(0x75E504) = xmm0; /* movss */
    MEM32(0x75E500) = ebx;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_0023A0A7: ;
    if (TEST_NZ(MEM8(0x87B388), LO8(ebx))) goto loc_0023A0D1; /* jne: not equal / not zero */

loc_0023A0AF: ;
    eax = MEM32(0x87B388);
    eax = eax | ebx;
    ecx = 0x87B384;
    MEM32(0x87B388) = eax;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023A0C5: ;
    MEMF(0x87B37C) = (float)fp_top(); fp_pop(); /* fst */
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */

loc_0023A0D1: ;
    PUSH32(esp, 0); sub_0021D790(); /* call 0x0021D790 */

loc_0023A0D6: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0023A1F0; /* je: equal / zero */

loc_0023A0DE: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023A0E8: ;
    fp_push(MEMF(0x87B37C)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp >= 0) /* fcompi */) goto loc_0023A110; /* jae: above or equal (unsigned >=) */

loc_0023A0F6: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023A100: ;
    fp_push(MEMF(0x87B380)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_0023A1F0; /* jbe: below or equal (unsigned <=) */

loc_0023A110: ;
    PUSH32(esp, esi);
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023A11B: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    ecx = 0x87B384;
    MEMF(0x87B37C) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023A131: ;
    esi = 0x862C40;
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_002966D0(); /* call 0x002966D0 */

loc_0023A141: ;
    POP32(esp, esi);
    MEM32(0x849B84) = 0;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0023A14F: ;
    SET_LO8(eax, MEM8(0x862D30));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0023A1F0; /* jne: not equal / not zero */

loc_0023A15C: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_002431E0(); /* call 0x002431E0 */

loc_0023A163: ;
    if (TEST_NZ(MEM8(0x87B388), LO8(ebx))) goto loc_0023A18D; /* jne: not equal / not zero */

loc_0023A16B: ;
    eax = MEM32(0x87B388);
    eax = eax | ebx;
    ecx = 0x87B384;
    MEM32(0x87B388) = eax;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023A181: ;
    MEMF(0x87B37C) = (float)fp_top(); fp_pop(); /* fst */
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */

loc_0023A18D: ;
    PUSH32(esp, 0); sub_0021D790(); /* call 0x0021D790 */

loc_0023A192: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0023A1F0; /* je: equal / zero */

loc_0023A196: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023A1A0: ;
    fp_push(MEMF(0x87B37C)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp >= 0) /* fcompi */) goto loc_0023A1C4; /* jae: above or equal (unsigned >=) */

loc_0023A1AE: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023A1B8: ;
    fp_push(MEMF(0x87B380)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_0023A1F0; /* jbe: below or equal (unsigned <=) */

loc_0023A1C4: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023A1CE: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    ecx = 0x87B384;
    MEMF(0x87B37C) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023A1E4: ;
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(0x849B84) = ebx;

loc_0023A1F0: ;
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
 * sub_0023A200
 * Original: 0x0023A200 - 0x0023A2AB (171 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023A200(void)
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

loc_0023A200: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0026AE10(); /* call 0x0026AE10 */

loc_0023A207: ;
    SET_LO8(eax, MEM8(0x862D30));
    esp = esp + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0023A2AA; /* jne: not equal / not zero */

loc_0023A217: ;
    if (TEST_NZ(MEM8(0x87B388), 1)) goto loc_0023A243; /* jne: not equal / not zero */

loc_0023A220: ;
    eax = MEM32(0x87B388);
    eax = eax | 1;
    ecx = 0x87B384;
    MEM32(0x87B388) = eax;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023A237: ;
    MEMF(0x87B37C) = (float)fp_top(); fp_pop(); /* fst */
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */

loc_0023A243: ;
    PUSH32(esp, 0); sub_0021D790(); /* call 0x0021D790 */

loc_0023A248: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0023A2AA; /* je: equal / zero */

loc_0023A24C: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023A256: ;
    fp_push(MEMF(0x87B37C)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp >= 0) /* fcompi */) goto loc_0023A27A; /* jae: above or equal (unsigned >=) */

loc_0023A264: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023A26E: ;
    fp_push(MEMF(0x87B380)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_0023A2AA; /* jbe: below or equal (unsigned <=) */

loc_0023A27A: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023A284: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    ecx = 0x87B384;
    MEMF(0x87B37C) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023A29A: ;
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(0x849B84) = 1;

loc_0023A2AA: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0023A2B0
 * Original: 0x0023A2B0 - 0x0023A3FD (333 bytes, 87 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023A2B0(void)
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

loc_0023A2B0: ;
    eax = MEM32(0x86422C);
    if (TEST_Z(eax, eax)) goto loc_0023A2CE; /* je: equal / zero */

loc_0023A2B9: ;
    (void)0; /* cmp MEM8(eax), 0 - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(MEM8(eax), 0)) ? 1 : 0); /* sete */
    MEM8(0x8757EA) = LO8(eax);
    MEM32(0x776238) = 0x10;

loc_0023A2CE: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x118);
    PUSH32(esp, 0x8757EA);
    PUSH32(esp, 0x75E578);
    PUSH32(esp, 0); sub_002401F0(); /* call 0x002401F0 */

loc_0023A2E8: ;
    edi = MEM32(0x862CD0);
    esp = esp + 0x14;
    PUSH32(esp, 0); sub_00351C60(); /* call 0x00351C60 */

loc_0023A2F6: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x84CA48);
    PUSH32(esp, 0x84CDE0);
    esi = eax;
    PUSH32(esp, 0); sub_0046FCD6(); /* call 0x0046FCD6 */

loc_0023A309: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, esi);
    PUSH32(esp, 0x84CA48);
    PUSH32(esp, 0); sub_0046FCD6(); /* call 0x0046FCD6 */

loc_0023A316: ;
    SET_LO8(eax, MEM8(0x776238));
    esp = esp + 0x18;
    (void)0; /* test LO8(eax), 0x20 - flags set for next jcc */
    ecx = 1;
    MEM8(0x849931) = LO8(ecx);
    if (TEST_NZ(LO8(eax), 0x20)) goto loc_0023A353; /* jne: not equal / not zero */

loc_0023A32D: ;
    eax = MEM32(0x863D04);
    if (CMP_EQ(eax, 3)) goto loc_0023A346; /* je: equal / zero */

loc_0023A337: ;
    if (CMP_EQ(eax, 2)) goto loc_0023A346; /* je: equal / zero */

loc_0023A33C: ;
    POP32(esp, edi);
    MEM8(0x849C0F) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0023A346: ;
    SET_LO8(eax, MEM8(0x849C0F));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0023A3FA; /* je: equal / zero */

loc_0023A353: ;
    if (TEST_NZ(MEM8(0x87B388), LO8(ecx))) goto loc_0023A37D; /* jne: not equal / not zero */

loc_0023A35B: ;
    eax = MEM32(0x87B388);
    eax = eax | ecx;
    ecx = 0x87B384;
    MEM32(0x87B388) = eax;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023A371: ;
    MEMF(0x87B37C) = (float)fp_top(); fp_pop(); /* fst */
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */

loc_0023A37D: ;
    PUSH32(esp, 0); sub_0021D790(); /* call 0x0021D790 */

loc_0023A382: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0023A3FA; /* je: equal / zero */

loc_0023A386: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023A390: ;
    fp_push(MEMF(0x87B37C)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp >= 0) /* fcompi */) goto loc_0023A3B4; /* jae: above or equal (unsigned >=) */

loc_0023A39E: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023A3A8: ;
    fp_push(MEMF(0x87B380)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_0023A3FA; /* jbe: below or equal (unsigned <=) */

loc_0023A3B4: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023A3BE: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    ecx = 0x87B384;
    MEMF(0x87B37C) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023A3D4: ;
    esi = 0x862C40;
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_002966D0(); /* call 0x002966D0 */

loc_0023A3E4: ;
    PUSH32(esp, 5);
    edi = 0; /* xor self */
    MEM32(0x849B84) = 0;
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_0023A3F7: ;
    esp = esp + 4;

loc_0023A3FA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0023A400
 * Original: 0x0023A400 - 0x0023A4A1 (161 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023A400(void)
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

loc_0023A400: ;
    SET_LO8(ecx, MEM8(0x87B388));
    eax = 1;
    if (TEST_NZ(LO8(eax), LO8(ecx))) goto loc_0023A42B; /* jne: not equal / not zero */

loc_0023A40F: ;
    MEM32(0x87B388) = MEM32(0x87B388) | eax;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023A41F: ;
    MEMF(0x87B37C) = (float)fp_top(); fp_pop(); /* fst */
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */

loc_0023A42B: ;
    PUSH32(esp, 0); sub_0021D790(); /* call 0x0021D790 */

loc_0023A430: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0023A4A0; /* je: equal / zero */

loc_0023A434: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023A43E: ;
    fp_push(MEMF(0x87B37C)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp >= 0) /* fcompi */) goto loc_0023A462; /* jae: above or equal (unsigned >=) */

loc_0023A44C: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023A456: ;
    fp_push(MEMF(0x87B380)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_0023A4A0; /* jbe: below or equal (unsigned <=) */

loc_0023A462: ;
    PUSH32(esp, edi);
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023A46D: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    ecx = 0x87B384;
    MEMF(0x87B37C) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023A483: ;
    PUSH32(esp, 0x16);
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */
    edi = 0; /* xor self */
    MEM32(0x849B84) = 0x10;
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_0023A49C: ;
    esp = esp + 4;
    POP32(esp, edi);

loc_0023A4A0: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0023A4B0
 * Original: 0x0023A4B0 - 0x0023A58A (218 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023A4B0(void)
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

loc_0023A4B0: ;
    PUSH32(esp, edi);
    PUSH32(esp, 4);
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_0023A4BA: ;
    SET_LO8(ecx, MEM8(0x87B388));
    eax = 1;
    esp = esp + 4;
    if (TEST_NZ(LO8(eax), LO8(ecx))) goto loc_0023A4E8; /* jne: not equal / not zero */

loc_0023A4CC: ;
    MEM32(0x87B388) = MEM32(0x87B388) | eax;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023A4DC: ;
    MEMF(0x87B37C) = (float)fp_top(); fp_pop(); /* fst */
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */

loc_0023A4E8: ;
    PUSH32(esp, 0); sub_0021D790(); /* call 0x0021D790 */

loc_0023A4ED: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0023A588; /* je: equal / zero */

loc_0023A4F5: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023A4FF: ;
    fp_push(MEMF(0x87B37C)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp >= 0) /* fcompi */) goto loc_0023A523; /* jae: above or equal (unsigned >=) */

loc_0023A50D: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023A517: ;
    fp_push(MEMF(0x87B380)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_0023A588; /* jbe: below or equal (unsigned <=) */

loc_0023A523: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023A52D: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    ecx = 0x87B384;
    MEMF(0x87B37C) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023A543: ;
    PUSH32(esp, 0x1A);
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */
    edi = 0; /* xor self */
    MEM32(0x849B84) = 0x11;
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_0023A55C: ;
    ecx = MEM32(0x863D08);
    eax = 0; /* xor self */
    esp = esp + 4;
    if (CMP_NE(ecx, eax)) goto loc_0023A573; /* jne: not equal / not zero */

loc_0023A56B: ;
    if (CMP_EQ(MEM8(0x75E9A1), LO8(eax))) goto loc_0023A588; /* je: equal / zero */

loc_0023A573: ;
    MEM8(0x75E9A1) = LO8(eax);
    MEM32(0x863D08) = eax;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023A582: ;
    MEMF(0x863D0C) = (float)fp_top(); fp_popp(); /* fstp */

loc_0023A588: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0023A590
 * Original: 0x0023A590 - 0x0023A5AC (28 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023A590(void)
{
    int _flags = 0; /* fallback flag var */

loc_0023A590: ;
    eax = MEM32(0x849B84);
    if (CMP_EQ(eax, 1)) { sub_0023A5AC(); return; } /* je: equal / zero */

loc_0023A59A: ;
    if (CMP_EQ(eax, 3)) { sub_0023A5AC(); return; } /* je: equal / zero */

loc_0023A59F: ;
    if (CMP_EQ(eax, 4)) { sub_0023A5AC(); return; } /* je: equal / zero */

loc_0023A5A4: ;
    if (CMP_EQ(eax, 5)) { sub_0023A5AC(); return; } /* je: equal / zero */

loc_0023A5A9: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0023A5C0
 * Original: 0x0023A5C0 - 0x0023A905 (837 bytes, 212 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023A5C0(void)
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

loc_0023A5C0: ;
    PUSH32(esp, ecx);
    SET_LO8(eax, MEM8(0x849B89));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0023A5D5; /* je: equal / zero */

loc_0023A5CA: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(0x776220) = xmm0; /* movss */

loc_0023A5D5: ;
    eax = MEM32(0x863D08);
    eax = eax - 2;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if ((eax == 0)) goto loc_0023A833; /* je: equal / zero */

loc_0023A5E6: ;
    eax--;
    if ((eax == 0)) goto loc_0023A8F0; /* je: equal / zero */

loc_0023A5ED: ;
    edi = 0; /* xor self */
    eax = eax - 2;
    if ((eax == 0)) goto loc_0023A7E0; /* je: equal / zero */

loc_0023A5F8: ;
    PUSH32(esp, 0x16);
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_0023A5FF: ;
    eax = MEM32(0x849800);
    esi = MEM32(eax + 0x460);
    esp = esp + 4;
    (void)0; /* test esi, esi - flags set for next jcc */
    ebx = 1;
    if (TEST_Z(esi, esi)) goto loc_0023A652; /* je: equal / zero */

loc_0023A616: ;
    PUSH32(esp, 0x84C318);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00470101(); /* call 0x00470101 */

loc_0023A621: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0023A642; /* je: equal / zero */

loc_0023A628: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x84C318);
    PUSH32(esp, 0x84C6B0);
    PUSH32(esp, 0); sub_0046FCD6(); /* call 0x0046FCD6 */

loc_0023A639: ;
    esp = esp + 0xC;
    MEM8(0x849930) = LO8(ebx);

loc_0023A642: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, esi);
    PUSH32(esp, 0x84C318);
    PUSH32(esp, 0); sub_0046FCD6(); /* call 0x0046FCD6 */

loc_0023A64F: ;
    esp = esp + 0xC;

loc_0023A652: ;
    PUSH32(esp, 0); sub_00258F60(); /* call 0x00258F60 */

loc_0023A657: ;
    edi = MEM32(0x862CD0);
    PUSH32(esp, 0); sub_00351C60(); /* call 0x00351C60 */

loc_0023A662: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x84CA48);
    PUSH32(esp, 0x84CDE0);
    esi = eax;
    PUSH32(esp, 0); sub_0046FCD6(); /* call 0x0046FCD6 */

loc_0023A675: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, esi);
    PUSH32(esp, 0x84CA48);
    PUSH32(esp, 0); sub_0046FCD6(); /* call 0x0046FCD6 */

loc_0023A682: ;
    SET_LO8(eax, MEM8(0x776238));
    esp = esp + 0x18;
    (void)0; /* test LO8(eax), 0x20 - flags set for next jcc */
    MEM8(0x849931) = LO8(ebx);
    if (TEST_NZ(LO8(eax), 0x20)) goto loc_0023A6A1; /* jne: not equal / not zero */

loc_0023A694: ;
    PUSH32(esp, 0); sub_00234230(); /* call 0x00234230 */

loc_0023A699: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0023A8F0; /* je: equal / zero */

loc_0023A6A1: ;
    if (TEST_NZ(MEM8(0x87B388), LO8(ebx))) goto loc_0023A6CB; /* jne: not equal / not zero */

loc_0023A6A9: ;
    eax = MEM32(0x87B388);
    eax = eax | ebx;
    ecx = 0x87B384;
    MEM32(0x87B388) = eax;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023A6BF: ;
    MEMF(0x87B37C) = (float)fp_top(); fp_pop(); /* fst */
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */

loc_0023A6CB: ;
    PUSH32(esp, 0); sub_0021D790(); /* call 0x0021D790 */

loc_0023A6D0: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0023A8F0; /* je: equal / zero */

loc_0023A6D8: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023A6E2: ;
    fp_push(MEMF(0x87B37C)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp >= 0) /* fcompi */) goto loc_0023A70A; /* jae: above or equal (unsigned >=) */

loc_0023A6F0: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023A6FA: ;
    fp_push(MEMF(0x87B380)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_0023A8F0; /* jbe: below or equal (unsigned <=) */

loc_0023A70A: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023A714: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    ecx = 0x87B384;
    MEMF(0x87B37C) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023A72A: ;
    PUSH32(esp, 5);
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */
    edi = 0; /* xor self */
    MEM32(0x849B84) = 0xF;
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_0023A743: ;
    PUSH32(esp, 0x17);
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_0023A74A: ;
    esp = esp + 8;
    eax = 0; /* xor self */
    esi = 0x862C40;
    PUSH32(esp, 0); sub_002978E0(); /* call 0x002978E0 */

loc_0023A759: ;
    SET_LO8(eax, MEM8(0x7FA23C));
    xmm0 = 0.0f; /* xorps self = zero */
    edx = edx | 0xFFFFFFFFu;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(0x862D91) = LO8(edx);
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0023A776; /* jne: not equal / not zero */

loc_0023A76E: ;
    xmm0 = MEMF(0x7F9F48); /* movss */

loc_0023A776: ;
    (void)0; /* cmp MEM32(0x75E500), ebx - flags set for next jcc */
    MEMF(esp + 0xC) = xmm0; /* movss */
    if (CMP_NE(MEM32(0x75E500), ebx)) goto loc_0023A7A0; /* jne: not equal / not zero */

loc_0023A784: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648E64)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_0023A8F0; /* ja: above (unsigned >) */

loc_0023A7A0: ;
    ecx = MEM32(0x847024);
    eax = MEM32(ecx + 0x44);
    eax = MEM32(eax + 0xC);
    ecx = MEM32(ecx + 0x40);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = eax + 4;
    eax = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, ecx);
    eax = edx;
    ecx = 0xAD1;
    MEMF(0x75E504) = xmm0; /* movss */
    MEM32(0x75E500) = ebx;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_0023A7DB: ;
    goto loc_0023A8F0;

loc_0023A7E0: ;
    PUSH32(esp, 0x17);
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_0023A7E7: ;
    eax = MEM32(0x863D08);
    esp = esp + 4;
    if (TEST_NZ(eax, eax)) goto loc_0023A7FC; /* jne: not equal / not zero */

loc_0023A7F3: ;
    SET_LO8(eax, MEM8(0x75E9A1));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0023A818; /* je: equal / zero */

loc_0023A7FC: ;
    MEM8(0x75E9A1) = 0;
    MEM32(0x863D08) = 0;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023A812: ;
    MEMF(0x863D0C) = (float)fp_top(); fp_popp(); /* fstp */

loc_0023A818: ;
    PUSH32(esp, 0x1A);
    edi = 0; /* xor self */
    MEM32(0x849B84) = 0x11;
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_0023A82B: ;
    esp = esp + 4;
    goto loc_0023A8F0;

loc_0023A833: ;
    PUSH32(esp, 0); sub_0028CAF0(); /* call 0x0028CAF0 */

loc_0023A838: ;
    eax = MEM32(0x863D08);
    if (CMP_NE(eax, 3)) goto loc_0023A84C; /* jne: not equal / not zero */

loc_0023A842: ;
    PUSH32(esp, 0); sub_00252A80(); /* call 0x00252A80 */

loc_0023A847: ;
    goto loc_0023A8F0;

loc_0023A84C: ;
    if (TEST_Z(eax, eax)) goto loc_0023A859; /* je: equal / zero */

loc_0023A850: ;
    if (CMP_NE(eax, 4)) goto loc_0023A8F0; /* jne: not equal / not zero */

loc_0023A859: ;
    SET_LO8(eax, MEM8(0x87B388));
    ebx = 1;
    if (TEST_NZ(LO8(ebx), LO8(eax))) goto loc_0023A889; /* jne: not equal / not zero */

loc_0023A867: ;
    eax = MEM32(0x87B388);
    eax = eax | ebx;
    ecx = 0x87B384;
    MEM32(0x87B388) = eax;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023A87D: ;
    MEMF(0x87B37C) = (float)fp_top(); fp_pop(); /* fst */
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */

loc_0023A889: ;
    PUSH32(esp, 0); sub_0021D790(); /* call 0x0021D790 */

loc_0023A88E: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0023A8F0; /* je: equal / zero */

loc_0023A892: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023A89C: ;
    fp_push(MEMF(0x87B37C)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp >= 0) /* fcompi */) goto loc_0023A8C0; /* jae: above or equal (unsigned >=) */

loc_0023A8AA: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023A8B4: ;
    fp_push(MEMF(0x87B380)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_0023A8F0; /* jbe: below or equal (unsigned <=) */

loc_0023A8C0: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023A8CA: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    ecx = 0x87B384;
    MEMF(0x87B37C) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023A8E0: ;
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(0x849B84) = 0x10;

loc_0023A8F0: ;
    xmm0 = MEMF(0x648D14); /* movss */
    POP32(esp, edi);
    POP32(esp, esi);
    MEMF(0x776220) = xmm0; /* movss */
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
 * sub_0023A910
 * Original: 0x0023A910 - 0x0023AB25 (533 bytes, 125 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023A910(void)
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

loc_0023A910: ;
    PUSH32(esp, 0); sub_0023FF70(); /* call 0x0023FF70 */

loc_0023A915: ;
    eax--;
    if ((eax == 0)) goto loc_0023AA84; /* je: equal / zero */

loc_0023A91C: ;
    eax--;
    if ((eax == 0)) goto loc_0023A9CC; /* je: equal / zero */

loc_0023A923: ;
    eax--;
    if ((eax != 0)) goto loc_0023AB24; /* jne: not equal / not zero */

loc_0023A92A: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_002431E0(); /* call 0x002431E0 */

loc_0023A931: ;
    SET_LO8(ecx, MEM8(0x87B388));
    eax = 1;
    if (TEST_NZ(LO8(eax), LO8(ecx))) goto loc_0023A95C; /* jne: not equal / not zero */

loc_0023A940: ;
    MEM32(0x87B388) = MEM32(0x87B388) | eax;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023A950: ;
    MEMF(0x87B37C) = (float)fp_top(); fp_pop(); /* fst */
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */

loc_0023A95C: ;
    PUSH32(esp, 0); sub_0021D790(); /* call 0x0021D790 */

loc_0023A961: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0023AB24; /* je: equal / zero */

loc_0023A969: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023A973: ;
    fp_push(MEMF(0x87B37C)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp >= 0) /* fcompi */) goto loc_0023A99B; /* jae: above or equal (unsigned >=) */

loc_0023A981: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023A98B: ;
    fp_push(MEMF(0x87B380)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_0023AB24; /* jbe: below or equal (unsigned <=) */

loc_0023A99B: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023A9A5: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    ecx = 0x87B384;
    MEMF(0x87B37C) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023A9BB: ;
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(0x849B84) = 0x12;
    esp += 4; return; /* ret */

loc_0023A9CC: ;
    SET_LO8(ecx, MEM8(0x87B388));
    eax = 1;
    if (TEST_NZ(LO8(eax), LO8(ecx))) goto loc_0023A9F7; /* jne: not equal / not zero */

loc_0023A9DB: ;
    MEM32(0x87B388) = MEM32(0x87B388) | eax;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023A9EB: ;
    MEMF(0x87B37C) = (float)fp_top(); fp_pop(); /* fst */
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */

loc_0023A9F7: ;
    PUSH32(esp, 0); sub_0021D790(); /* call 0x0021D790 */

loc_0023A9FC: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0023AB24; /* je: equal / zero */

loc_0023AA04: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023AA0E: ;
    fp_push(MEMF(0x87B37C)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp >= 0) /* fcompi */) goto loc_0023AA36; /* jae: above or equal (unsigned >=) */

loc_0023AA1C: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023AA26: ;
    fp_push(MEMF(0x87B380)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_0023AB24; /* jbe: below or equal (unsigned <=) */

loc_0023AA36: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023AA40: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    ecx = 0x87B384;
    MEMF(0x87B37C) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023AA56: ;
    ecx = MEM32(0x847024);
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */
    edx = MEM32(ecx + 0x3C);
    PUSH32(esp, 7);
    PUSH32(esp, 0);
    eax = 0xAC;
    PUSH32(esp, edx);
    MEM32(0x849B84) = 0x10;
    MEM32(0x87C8F4) = eax;
    PUSH32(esp, 0); sub_0001FC70(); /* call 0x0001FC70 */

loc_0023AA83: ;
    esp += 4; return; /* ret */

loc_0023AA84: ;
    SET_LO8(ecx, MEM8(0x87B388));
    eax = 1;
    if (TEST_NZ(LO8(eax), LO8(ecx))) goto loc_0023AAAF; /* jne: not equal / not zero */

loc_0023AA93: ;
    MEM32(0x87B388) = MEM32(0x87B388) | eax;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023AAA3: ;
    MEMF(0x87B37C) = (float)fp_top(); fp_pop(); /* fst */
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */

loc_0023AAAF: ;
    PUSH32(esp, 0); sub_0021D790(); /* call 0x0021D790 */

loc_0023AAB4: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0023AB24; /* je: equal / zero */

loc_0023AAB8: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023AAC2: ;
    fp_push(MEMF(0x87B37C)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp >= 0) /* fcompi */) goto loc_0023AAE6; /* jae: above or equal (unsigned >=) */

loc_0023AAD0: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023AADA: ;
    fp_push(MEMF(0x87B380)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_0023AB24; /* jbe: below or equal (unsigned <=) */

loc_0023AAE6: ;
    PUSH32(esp, edi);
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023AAF1: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    ecx = 0x87B384;
    MEMF(0x87B37C) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023AB07: ;
    PUSH32(esp, 0x1B);
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */
    edi = 0; /* xor self */
    MEM32(0x849B84) = 0xF;
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_0023AB20: ;
    esp = esp + 4;
    POP32(esp, edi);

loc_0023AB24: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0023AB30
 * Original: 0x0023AB30 - 0x0023ABDE (174 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023AB30(void)
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

loc_0023AB30: ;
    SET_LO8(eax, MEM8(0x862D30));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_0023ABDE(); return; } /* jne: not equal / not zero */

loc_0023AB3D: ;
    SET_LO8(ecx, MEM8(0x87B388));
    eax = 1;
    if (TEST_NZ(LO8(eax), LO8(ecx))) goto loc_0023AB68; /* jne: not equal / not zero */

loc_0023AB4C: ;
    MEM32(0x87B388) = MEM32(0x87B388) | eax;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023AB5C: ;
    MEMF(0x87B37C) = (float)fp_top(); fp_pop(); /* fst */
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */

loc_0023AB68: ;
    PUSH32(esp, 0); sub_0021D790(); /* call 0x0021D790 */

loc_0023AB6D: ;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_0023ABDE(); return; } /* je: equal / zero */

loc_0023AB71: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023AB7B: ;
    fp_push(MEMF(0x87B37C)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp >= 0) /* fcompi */) goto loc_0023AB9F; /* jae: above or equal (unsigned >=) */

loc_0023AB89: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023AB93: ;
    fp_push(MEMF(0x87B380)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) { sub_0023ABDE(); return; } /* jbe: below or equal (unsigned <=) */

loc_0023AB9F: ;
    PUSH32(esp, edi);
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023ABAA: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    ecx = 0x87B384;
    MEMF(0x87B37C) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023ABC0: ;
    PUSH32(esp, 9);
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */
    edi = 0; /* xor self */
    MEM32(0x849B84) = 0x25;
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_0023ABD9: ;
    esp = esp + 4;
    POP32(esp, edi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0023ABF0
 * Original: 0x0023ABF0 - 0x0023AC02 (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023ABF0(void)
{

loc_0023ABF0: ;
    eax = MEM32(ecx + 8);
    edx = MEM32(eax + 0x2C8);
    ecx = MEM32(ecx + 4);
    eax = edx + ecx * 4;
    SET_LO8(eax, MEM8(eax));
    esp += 4; return; /* ret */

}

/**
 * sub_0023AC10
 * Original: 0x0023AC10 - 0x0023AC14 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023AC10(void)
{

loc_0023AC10: ;
    SET_LO8(eax, MEM8(ecx + 0x24));
    esp += 4; return; /* ret */

}

/**
 * sub_0023AC20
 * Original: 0x0023AC20 - 0x0023AC58 (56 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023AC20(void)
{
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_0023AC20: ;
    eax = MEM32(ecx + 8);
    SET_LO8(edx, MEM8(eax + 0x294));
    if (TEST_NZ(LO8(edx), LO8(edx))) { sub_0023AC58(); return; } /* jne: not equal / not zero */

loc_0023AC2D: ;
    edx = MEM32(eax + 0x2A8);
    if (TEST_NZ(edx, edx)) goto loc_0023AC43; /* jne: not equal / not zero */

loc_0023AC37: ;
    edx = MEM32(ecx + 4);
    eax = 0; /* xor self */
    (void)0; /* cmp edx, eax - flags set for next jcc */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = (uint32_t)(-(int32_t)eax);
    esp += 4; return; /* ret */

loc_0023AC43: ;
    eax = MEM32(eax + 0x2AC);
    eax = eax - edx;
    edx = MEM32(ecx + 4);
    eax = (uint32_t)((int32_t)eax >> 2);
    (void)0; /* cmp edx, eax - flags set for next jcc */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = (uint32_t)(-(int32_t)eax);
    esp += 4; return; /* ret */

}

/**
 * sub_0023AC90
 * Original: 0x0023AC90 - 0x0023ACB8 (40 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023AC90(void)
{
    int _flags = 0; /* fallback flag var */

loc_0023AC90: ;
    eax = MEM32(ecx + 8);
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x296);
    PUSH32(esp, esi);
    esi = eax + eax * 4;
    eax = MEM32(ecx + 4);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 5;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = esi + edx;
    (void)0; /* cmp eax, 0x17 - flags set for next jcc */
    POP32(esp, esi);
    if (CMP_L(eax, 0x17)) goto loc_0023ACB7; /* jl: less (signed <) */

loc_0023ACB2: ;
    eax = 0x17;

loc_0023ACB7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0023ACC0
 * Original: 0x0023ACC0 - 0x0023ACC3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023ACC0(void)
{

loc_0023ACC0: ;
    SET_LO8(eax, LO8(eax) | 0xFF);
    esp += 4; return; /* ret */

}

/**
 * sub_0023ACD0
 * Original: 0x0023ACD0 - 0x0023ACD7 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023ACD0(void)
{

loc_0023ACD0: ;
    eax = eax | 0xFFFFFFFFu;
    edx = edx | 0xFFFFFFFFu;
    esp += 4; return; /* ret */

}

/**
 * sub_0023ACE0
 * Original: 0x0023ACE0 - 0x0023AD51 (113 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023ACE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0023ACE0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF8u;
    esp = esp - 0x104;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = ecx;
    MEM8(esp + 0x10) = 0;
    eax = 0; /* xor self */
    ecx = 0x3F;
    edi = esp + 0x11;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += 2; /* stosw */
    MEM8(edi) = LO8(eax); edi++; /* stosb */
    edi = MEM32(ebp + 4);
    esi = esp + 0x10;
    PUSH32(esp, 0); sub_00234090(); /* call 0x00234090 */

loc_0023AD12: ;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x22);
    eax = eax + edi;
    if (CMP_EQ(MEM16(eax), 0)) goto loc_0023AD2E; /* je: equal / zero */

loc_0023AD1D: ;
    /* nop */

loc_0023AD20: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(esi) = LO8(ecx);
    eax = eax + 2;
    esi++;
    if (CMP_NE(MEM16(eax), 0)) goto loc_0023AD20; /* jne: not equal / not zero */

loc_0023AD2E: ;
    PUSH32(esp, 0x10);
    edx = esp + 0x14;
    MEM8(esi) = 0;
    PUSH32(esp, edx);
    esi = ebp + 0xC;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0046EEC0(); /* call 0x0046EEC0 */

loc_0023AD41: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    eax = esi;
    MEM8(ebp + 0x1C) = 0;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0023AD60
 * Original: 0x0023AD60 - 0x0023ADB1 (81 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023AD60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0023AD60: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    SET_LO8(ecx, MEM8(eax + 0x294));
    edx = 0; /* xor self */
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    SET_LO8(edx, (TEST_Z(LO8(ecx), LO8(ecx))) ? 1 : 0); /* sete */
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    PUSH32(esp, edi);
    edi = eax + 0x2A4;
    ebp = edx;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0023ADA9; /* je: equal / zero */

loc_0023AD82: ;
    edi = eax + 0x2B4;
    ebx = eax + 0x2A4;

loc_0023AD8E: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_0023AD95: ;
    if (CMP_NE(eax, ebp)) { sub_0023ADB1(); return; } /* jne: not equal / not zero */

loc_0023AD99: ;
    edx = MEM32(edi + 4);
    ecx = MEM32(esi + 4);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = edx + ecx * 4;
    eax = MEM32(eax);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0023ADA9: ;
    ebx = eax + 0x2B4;
    goto loc_0023AD8E;

}

/**
 * sub_0023ADE0
 * Original: 0x0023ADE0 - 0x0023ADE5 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023ADE0(void)
{

loc_0023ADE0: ;
    SET_LO16(eax, LO16(eax) | 0xFFFF);
    esp += 4; return; /* ret */

}

/**
 * sub_0023ADF0
 * Original: 0x0023ADF0 - 0x0023AE9C (172 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023ADF0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0023ADF0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = eax;
    eax = edi + 0x2A4;
    ecx = esi + 0x2A4;
    PUSH32(esp, 0); sub_002274D0(); /* call 0x002274D0 */

loc_0023AE05: ;
    eax = edi + 0x2B4;
    ecx = esi + 0x2B4;
    PUSH32(esp, 0); sub_002274D0(); /* call 0x002274D0 */

loc_0023AE16: ;
    SET_LO8(eax, MEM8(edi + 0x295));
    MEM8(esi + 0x295) = LO8(eax);
    SET_LO8(ecx, MEM8(edi + 0x296));
    MEM8(esi + 0x296) = LO8(ecx);
    SET_LO8(edx, MEM8(edi + 0x297));
    MEM8(esi + 0x297) = LO8(edx);
    SET_LO8(eax, MEM8(edi + 0x298));
    MEM8(esi + 0x298) = LO8(eax);
    SET_LO8(ecx, MEM8(edi + 0x299));
    MEM8(esi + 0x299) = LO8(ecx);
    SET_LO8(edx, MEM8(edi + 0x2A0));
    MEM8(esi + 0x2A0) = LO8(edx);
    eax = MEM32(edi + 0x29C);
    MEM32(esi + 0x29C) = eax;
    eax = MEM32(esi + 0x2C8);
    edi = 0; /* xor self */
    if (CMP_EQ(eax, edi)) goto loc_0023AE87; /* je: equal / zero */

loc_0023AE76: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    MEM32(esp + 8) = eax;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0023AE84: ;
    esp = esp + 4;

loc_0023AE87: ;
    MEM32(esi + 0x2C8) = edi;
    MEM32(esi + 0x2CC) = edi;
    MEM32(esi + 0x2D0) = edi;
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0023AEA0
 * Original: 0x0023AEA0 - 0x0023AF4E (174 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023AEA0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0023AEA0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = eax;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x44);
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    edx = esi + ecx * 4 + 8;
    PUSH32(esp, edx);
    eax = esi + 8;
    PUSH32(esp, eax);
    ecx = edi + 0x2A4;
    PUSH32(esp, 0); sub_00246920(); /* call 0x00246920 */

loc_0023AEC1: ;
    edx = (uint32_t)(int32_t)SMEM8(esi + 0x84);
    ecx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    eax = esi + edx * 4 + 0x48;
    PUSH32(esp, eax);
    ecx = esi + 0x48;
    PUSH32(esp, ecx);
    ecx = edi + 0x2B4;
    PUSH32(esp, 0); sub_00246920(); /* call 0x00246920 */

loc_0023AEE1: ;
    SET_LO8(edx, MEM8(esi));
    MEM8(edi + 0x296) = LO8(edx);
    SET_LO8(eax, MEM8(esi + 1));
    MEM8(edi + 0x297) = LO8(eax);
    SET_LO8(ecx, MEM8(esi + 2));
    MEM8(edi + 0x298) = LO8(ecx);
    SET_LO8(edx, MEM8(esi + 3));
    MEM8(edi + 0x299) = LO8(edx);
    MEM8(edi + 0x2A0) = 1;
    eax = (uint32_t)(int32_t)SMEM8(esi + 4);
    MEM32(edi + 0x29C) = eax;
    eax = MEM32(edi + 0x2C8);
    esi = 0; /* xor self */
    if (CMP_EQ(eax, esi)) goto loc_0023AF32; /* je: equal / zero */

loc_0023AF21: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    MEM32(esp + 8) = eax;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0023AF2F: ;
    esp = esp + 4;

loc_0023AF32: ;
    eax = edi;
    MEM32(edi + 0x2C8) = esi;
    MEM32(edi + 0x2CC) = esi;
    MEM32(edi + 0x2D0) = esi;
    PUSH32(esp, 0); sub_0023B2C0(); /* call 0x0023B2C0 */

loc_0023AF4B: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0023AF50
 * Original: 0x0023AF50 - 0x0023AF5E (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023AF50(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0023AF50: ;
    edx = MEM32(eax + 0x2A8);
    if (TEST_NZ(edx, edx)) { sub_0023AF5E(); return; } /* jne: not equal / not zero */

loc_0023AF5A: ;
    ecx = 0; /* xor self */
    g_seh_ebp = ebp; sub_0023AF69(); return; /* tail jmp 0x0023AF69 */

}

/**
 * sub_0023B000
 * Original: 0x0023B000 - 0x0023B01D (29 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023B000(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0023B000: ;
    esp = esp - 0x2C;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = eax + 8;
    edi = edi | 0xFFFFFFFFu;
    edx = ecx;
    esi = 0xF;
    ebp = 0x5FA14C;
    ebx = 0; /* xor self */
    g_seh_ebp = ebp; sub_0023B020(); return; /* tail jmp 0x0023B020 */

}

/**
 * sub_0023B110
 * Original: 0x0023B110 - 0x0023B17F (111 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023B110(void)
{
    int _flags = 0; /* fallback flag var */

loc_0023B110: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    ecx = ecx | 0xFFFFFFFFu;
    eax = edi + 8;
    edx = 0xF;
    esi = 0; /* xor self */

loc_0023B121: ;
    MEM32(eax + -8) = 0x5FA14C;
    MEM32(eax + -4) = ecx;
    MEM32(eax) = esi;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    eax = eax + 0x2C;
    edx--;
    if ((edx != 0)) goto loc_0023B121; /* jne: not equal / not zero */

loc_0023B139: ;
    eax = MEM32(esp + 0xC);
    MEM32(edi + 0x2A8) = esi;
    MEM32(edi + 0x2AC) = esi;
    MEM32(edi + 0x2B0) = esi;
    MEM32(edi + 0x2B8) = esi;
    MEM32(edi + 0x2BC) = esi;
    MEM32(edi + 0x2C0) = esi;
    MEM32(edi + 0x2C8) = esi;
    MEM32(edi + 0x2CC) = esi;
    MEM32(edi + 0x2D0) = esi;
    PUSH32(esp, 0); sub_0023AEA0(); /* call 0x0023AEA0 */

loc_0023B178: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0023B180
 * Original: 0x0023B180 - 0x0023B1EF (111 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023B180(void)
{
    int _flags = 0; /* fallback flag var */

loc_0023B180: ;
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, edi);
    ecx = ecx | 0xFFFFFFFFu;
    eax = esi + 8;
    edx = 0xF;
    edi = 0; /* xor self */

loc_0023B191: ;
    MEM32(eax + -8) = 0x5FA14C;
    MEM32(eax + -4) = ecx;
    MEM32(eax) = edi;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    eax = eax + 0x2C;
    edx--;
    if ((edx != 0)) goto loc_0023B191; /* jne: not equal / not zero */

loc_0023B1A9: ;
    eax = MEM32(esp + 0xC);
    MEM32(esi + 0x2A8) = edi;
    MEM32(esi + 0x2AC) = edi;
    MEM32(esi + 0x2B0) = edi;
    MEM32(esi + 0x2B8) = edi;
    MEM32(esi + 0x2BC) = edi;
    MEM32(esi + 0x2C0) = edi;
    MEM32(esi + 0x2C8) = edi;
    MEM32(esi + 0x2CC) = edi;
    MEM32(esi + 0x2D0) = edi;
    PUSH32(esp, 0); sub_0023ADF0(); /* call 0x0023ADF0 */

loc_0023B1E8: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0023B1F0
 * Original: 0x0023B1F0 - 0x0023B271 (129 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023B1F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0023B1F0: ;
    ecx = esi + 0x2B4;
    eax = edi + 0x2B4;
    PUSH32(esp, 0); sub_00246230(); /* call 0x00246230 */

loc_0023B201: ;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_0023B271(); return; } /* je: equal / zero */

loc_0023B205: ;
    ecx = esi + 0x2A4;
    eax = edi + 0x2A4;
    PUSH32(esp, 0); sub_00246230(); /* call 0x00246230 */

loc_0023B216: ;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_0023B271(); return; } /* je: equal / zero */

loc_0023B21A: ;
    SET_LO8(eax, MEM8(edi + 0x296));
    if (CMP_NE(LO8(eax), MEM8(esi + 0x296))) { sub_0023B271(); return; } /* jne: not equal / not zero */

loc_0023B228: ;
    SET_LO8(ecx, MEM8(edi + 0x297));
    if (CMP_NE(LO8(ecx), MEM8(esi + 0x297))) { sub_0023B271(); return; } /* jne: not equal / not zero */

loc_0023B236: ;
    SET_LO8(edx, MEM8(edi + 0x298));
    if (CMP_NE(LO8(edx), MEM8(esi + 0x298))) { sub_0023B271(); return; } /* jne: not equal / not zero */

loc_0023B244: ;
    SET_LO8(eax, MEM8(edi + 0x299));
    if (CMP_NE(LO8(eax), MEM8(esi + 0x299))) { sub_0023B271(); return; } /* jne: not equal / not zero */

loc_0023B252: ;
    SET_LO8(ecx, MEM8(edi + 0x2A0));
    if (CMP_NE(LO8(ecx), MEM8(esi + 0x2A0))) { sub_0023B271(); return; } /* jne: not equal / not zero */

loc_0023B260: ;
    edx = MEM32(edi + 0x29C);
    if (CMP_NE(edx, MEM32(esi + 0x29C))) { sub_0023B271(); return; } /* jne: not equal / not zero */

loc_0023B26E: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_0023B280
 * Original: 0x0023B280 - 0x0023B2B9 (57 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023B280(void)
{
    int _flags = 0; /* fallback flag var */

loc_0023B280: ;
    ecx = MEM32(edx + 0x2CC);
    eax = MEM32(edx + 0x2C8);
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    if (CMP_EQ(eax, ecx)) goto loc_0023B2A5; /* je: equal / zero */

loc_0023B296: ;
    if (CMP_EQ(MEM32(eax), esi)) goto loc_0023B2A1; /* je: equal / zero */

loc_0023B29A: ;
    eax = eax + 4;
    if (CMP_NE(eax, ecx)) goto loc_0023B296; /* jne: not equal / not zero */

loc_0023B2A1: ;
    if (CMP_NE(eax, ecx)) goto loc_0023B2B4; /* jne: not equal / not zero */

loc_0023B2A5: ;
    eax = edx + 0x2C4;
    edi = esp + 0xC;
    PUSH32(esp, 0); sub_003500B0(); /* call 0x003500B0 */

loc_0023B2B4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0023B2C0
 * Original: 0x0023B2C0 - 0x0023B2CE (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023B2C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0023B2C0: ;
    edx = MEM32(eax + 0x2A8);
    if (TEST_NZ(edx, edx)) { sub_0023B2CE(); return; } /* jne: not equal / not zero */

loc_0023B2CA: ;
    ecx = 0; /* xor self */
    g_seh_ebp = ebp; sub_0023B2D9(); return; /* tail jmp 0x0023B2D9 */

}

/**
 * sub_0023B320
 * Original: 0x0023B320 - 0x0023B344 (36 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023B320(void)
{
    int _flags = 0; /* fallback flag var */

loc_0023B320: ;
    SET_LO8(edx, MEM8(0x876760));
    ecx = 1;
    if (TEST_NZ(LO8(ecx), LO8(edx))) { sub_0023B344(); return; } /* jne: not equal / not zero */

loc_0023B32F: ;
    MEM32(0x876760) = MEM32(0x876760) | ecx;
    MEM8(0x87675C) = 0;
    MEM8(0x87675D) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0023B420
 * Original: 0x0023B420 - 0x0023B4AE (142 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023B420(void)
{
    int _flags = 0; /* fallback flag var */

loc_0023B420: ;
    PUSH32(esp, ecx);
    eax = MEM32(esi + 0x2C8);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_EQ(eax, edi)) goto loc_0023B43F; /* je: equal / zero */

loc_0023B42E: ;
    MEM32(esp + 4) = eax;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0023B43C: ;
    esp = esp + 4;

loc_0023B43F: ;
    MEM32(esi + 0x2C8) = edi;
    MEM32(esi + 0x2CC) = edi;
    MEM32(esi + 0x2D0) = edi;
    eax = MEM32(esi + 0x2B8);
    if (CMP_EQ(eax, edi)) goto loc_0023B46C; /* je: equal / zero */

loc_0023B45B: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    MEM32(esp + 8) = eax;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0023B469: ;
    esp = esp + 4;

loc_0023B46C: ;
    MEM32(esi + 0x2B8) = edi;
    MEM32(esi + 0x2BC) = edi;
    MEM32(esi + 0x2C0) = edi;
    eax = MEM32(esi + 0x2A8);
    if (CMP_EQ(eax, edi)) goto loc_0023B499; /* je: equal / zero */

loc_0023B488: ;
    edx = esp + 4;
    PUSH32(esp, edx);
    MEM32(esp + 8) = eax;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0023B496: ;
    esp = esp + 4;

loc_0023B499: ;
    MEM32(esi + 0x2A8) = edi;
    MEM32(esi + 0x2AC) = edi;
    MEM32(esi + 0x2B0) = edi;
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0023B4B0
 * Original: 0x0023B4B0 - 0x0023B5C1 (273 bytes, 75 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023B4B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0023B4B0: ;
    esp = esp - 0x5BC;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(0x776BE0);
    (void)0; /* test ebp, ebp - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = eax;
    if (TEST_Z(ebp, ebp)) goto loc_0023B5B6; /* je: equal / zero */

loc_0023B4CA: ;
    esi = MEM32(0x8629D4);
    eax = MEM32(0x8629D0);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    edi = esp + 0x1C;
    eax = esp + 0x18;
    MEM32(esp + 0x1C) = ebp;
    MEM32(esp + 0x20) = ebx;
    PUSH32(esp, 0); sub_00246290(); /* call 0x00246290 */

loc_0023B4EC: ;
    eax = MEM32(esp + 0x18);
    esp = esp + 8;
    if (CMP_NE(eax, esi)) goto loc_0023B5A9; /* jne: not equal / not zero */

loc_0023B4FB: ;
    ecx = (uint32_t)(int32_t)SMEM8(0x77627C);
    edx = ebx + ebx * 4;
    eax = MEM32(edx * 8 + 0x776F28);
    MEM32(esp + 0x10) = ecx;
    MEM8(0x77627C) = LO8(ebx);
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x11);
    ecx--;
    PUSH32(esp, ecx);
    eax = esp + 0x20;
    PUSH32(esp, 0); sub_0023B000(); /* call 0x0023B000 */

loc_0023B525: ;
    esp = esp - 0x2D4;
    edx = esp + 0x2F0;
    eax = esp;
    PUSH32(esp, edx);
    MEM8(esp + 0x594) = 1;
    PUSH32(esp, 0); sub_0023B180(); /* call 0x0023B180 */

loc_0023B542: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    edi = esp + 0x5CC;
    PUSH32(esp, 0); sub_002462C0(); /* call 0x002462C0 */

loc_0023B550: ;
    ecx = eax;
    esp = esp + 0x2DC;
    eax = 0x8629CC;
    PUSH32(esp, 0); sub_00244C90(); /* call 0x00244C90 */

loc_0023B562: ;
    esi = esp + 0x2F8;
    PUSH32(esp, 0); sub_0023B420(); /* call 0x0023B420 */

loc_0023B56E: ;
    eax = esp + 0x1C;
    esi = 0x8626F8;
    PUSH32(esp, 0); sub_0023ADF0(); /* call 0x0023ADF0 */

loc_0023B57C: ;
    eax = ebx;
    PUSH32(esp, 0); sub_0023E5D0(); /* call 0x0023E5D0 */

loc_0023B583: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0023B5D0(); /* call 0x0023B5D0 */

loc_0023B589: ;
    SET_LO8(eax, MEM8(esp + 0x14));
    esp = esp + 4;
    esi = esp + 0x1C;
    MEM8(0x77627C) = LO8(eax);
    PUSH32(esp, 0); sub_0023B420(); /* call 0x0023B420 */

loc_0023B59E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x5BC;
    esp += 4; return; /* ret */

loc_0023B5A9: ;
    eax = eax + 8;
    esi = 0x8626F8;
    PUSH32(esp, 0); sub_0023ADF0(); /* call 0x0023ADF0 */

loc_0023B5B6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x5BC;
    esp += 4; return; /* ret */

}

/**
 * sub_0023B5D0
 * Original: 0x0023B5D0 - 0x0023B61F (79 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023B5D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0023B5D0: ;
    eax = MEM32(0x776BE0);
    esp = esp - 0xC;
    if (TEST_Z(eax, eax)) goto loc_0023B61B; /* je: equal / zero */

loc_0023B5DC: ;
    ecx = MEM32(0x8629D4);
    edx = MEM32(0x8629D0);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = eax;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, edx);
    edi = esp + 0x14;
    eax = esp + 0x10;
    PUSH32(esp, 0); sub_00246290(); /* call 0x00246290 */

loc_0023B605: ;
    esi = MEM32(esp + 0x10);
    esp = esp + 8;
    esi = esi + 8;
    eax = 0x8626F8;
    PUSH32(esp, 0); sub_0023ADF0(); /* call 0x0023ADF0 */

loc_0023B619: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0023B61B: ;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_0023B620
 * Original: 0x0023B620 - 0x0023B64F (47 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023B620(void)
{
    int _flags = 0; /* fallback flag var */

loc_0023B620: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    edx = MEM32(eax);
    PUSH32(esp, esi);
    if (CMP_NE(edx, MEM32(ecx))) { sub_0023B64F(); return; } /* jne: not equal / not zero */

loc_0023B62F: ;
    edx = MEM32(eax + 4);
    if (CMP_NE(edx, MEM32(ecx + 4))) { sub_0023B64F(); return; } /* jne: not equal / not zero */

loc_0023B637: ;
    PUSH32(esp, edi);
    esi = eax + 8;
    edi = ecx + 8;
    PUSH32(esp, 0); sub_0023B1F0(); /* call 0x0023B1F0 */

loc_0023B643: ;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    POP32(esp, edi);
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_0023B64F(); return; } /* je: equal / zero */

loc_0023B648: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0023B660
 * Original: 0x0023B660 - 0x0023B6C4 (100 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023B660(void)
{
    int _flags = 0; /* fallback flag var */

loc_0023B660: ;
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0023B6D0(); /* call 0x0023B6D0 */

loc_0023B66B: ;
    edx = MEM32(0x862CD0);
    esi = eax;
    eax = MEM32(esp + 8);
    esp = esp + 4;
    PUSH32(esp, esi);
    ecx = 0x90;
    PUSH32(esp, 0); sub_00352080(); /* call 0x00352080 */

loc_0023B685: ;
    ecx = MEM32(0x862CD0);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_0023B692: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_0023B698: ;
    if (TEST_NZ(eax, eax)) goto loc_0023B6C1; /* jne: not equal / not zero */

loc_0023B69C: ;
    if (TEST_Z(esi, esi)) goto loc_0023B6C1; /* je: equal / zero */

loc_0023B6A0: ;
    eax = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    eax++;
    edx--;
    PUSH32(esp, esi);
    MEM32(0x7FA490) = eax;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_0023B6BE: ;
    esp = esp + 4;

loc_0023B6C1: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0023B6D0
 * Original: 0x0023B6D0 - 0x0023B6E6 (22 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023B6D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0023B6D0: ;
    PUSH32(esp, esi);
    esi = MEM32(0x8629D4);
    PUSH32(esp, edi);
    edi = MEM32(0x8629D0);
    if (TEST_NZ(edi, edi)) { sub_0023B6E6(); return; } /* jne: not equal / not zero */

loc_0023B6E2: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_0023B6FD(); return; /* tail jmp 0x0023B6FD */

}

/**
 * sub_0023B7A0
 * Original: 0x0023B7A0 - 0x0023B840 (160 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023B7A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0023B7A0: ;
    esp = esp - 0x5B0;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x8629CC);
    ebx = ecx;
    PUSH32(esp, 0); sub_00244FB0(); /* call 0x00244FB0 */

loc_0023B7B8: ;
    ecx = esi;
    edx = 0x8629CC;
    PUSH32(esp, 0); sub_00244B30(); /* call 0x00244B30 */

loc_0023B7C4: ;
    if (TEST_Z(esi, esi)) goto loc_0023B835; /* je: equal / zero */

loc_0023B7C8: ;
    ebp = esi;
    /* nop */

loc_0023B7D0: ;
    ecx = ebx + 8;
    PUSH32(esp, ecx);
    eax = esp + 0x14;
    PUSH32(esp, 0); sub_0023B110(); /* call 0x0023B110 */

loc_0023B7DD: ;
    esp = esp - 0x2D4;
    edx = esp + 0x2E4;
    eax = esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0023B180(); /* call 0x0023B180 */

loc_0023B7F2: ;
    eax = MEM32(ebx + 4);
    ecx = MEM32(ebx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edi = esp + 0x5C0;
    PUSH32(esp, 0); sub_002462C0(); /* call 0x002462C0 */

loc_0023B805: ;
    ecx = eax;
    esp = esp + 0x2DC;
    eax = 0x8629CC;
    PUSH32(esp, 0); sub_00244C90(); /* call 0x00244C90 */

loc_0023B817: ;
    esi = esp + 0x2EC;
    PUSH32(esp, 0); sub_0023B420(); /* call 0x0023B420 */

loc_0023B823: ;
    esi = esp + 0x10;
    ebx = ebx + 0x90;
    PUSH32(esp, 0); sub_0023B420(); /* call 0x0023B420 */

loc_0023B832: ;
    ebp--;
    if ((ebp != 0)) goto loc_0023B7D0; /* jne: not equal / not zero */

loc_0023B835: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x5B0;
    esp += 4; return; /* ret */

}

/**
 * sub_0023B840
 * Original: 0x0023B840 - 0x0023B907 (199 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023B840(void)
{

loc_0023B840: ;
    esp = esp - 0x5C4;
    PUSH32(esp, esi);
    PUSH32(esp, 0xB);
    eax = esp + 0x24;
    PUSH32(esp, 0); sub_0023B000(); /* call 0x0023B000 */

loc_0023B852: ;
    PUSH32(esp, 0xB);
    eax = esp + 0x2F8;
    PUSH32(esp, 0); sub_0023B000(); /* call 0x0023B000 */

loc_0023B860: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = 0x8629CC;
    MEM8(esp + 0x2BA) = 5;
    PUSH32(esp, 0); sub_002448D0(); /* call 0x002448D0 */

loc_0023B877: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0023B6D0(); /* call 0x0023B6D0 */

loc_0023B881: ;
    ecx = eax;
    eax = esp + 8;
    PUSH32(esp, 0); sub_0023B7A0(); /* call 0x0023B7A0 */

loc_0023B88C: ;
    edx = MEM32(0x8629D0);
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, 0x23B620);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00246960(); /* call 0x00246960 */

loc_0023B8AC: ;
    esp = esp + 0x18;
    PUSH32(esp, 0x8629CC);
    PUSH32(esp, 0); sub_00244FB0(); /* call 0x00244FB0 */

loc_0023B8B9: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0023B6D0(); /* call 0x0023B6D0 */

loc_0023B8C3: ;
    ecx = eax;
    esp = esp + 4;
    eax = esp + 4;
    PUSH32(esp, 0); sub_0023B7A0(); /* call 0x0023B7A0 */

loc_0023B8D1: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    eax = 0x8629CC;
    PUSH32(esp, 0); sub_00244980(); /* call 0x00244980 */

loc_0023B8E0: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00244FB0(); /* call 0x00244FB0 */

loc_0023B8EA: ;
    esi = esp + 0x2F4;
    PUSH32(esp, 0); sub_0023B420(); /* call 0x0023B420 */

loc_0023B8F6: ;
    esi = esp + 0x20;
    PUSH32(esp, 0); sub_0023B420(); /* call 0x0023B420 */

loc_0023B8FF: ;
    POP32(esp, esi);
    esp = esp + 0x5C4;
    esp += 4; return; /* ret */

}

/**
 * sub_0023B910
 * Original: 0x0023B910 - 0x0023B922 (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023B910(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0023B910: ;
    edx = MEM32(esp + 4);
    eax = MEM32(edx + 0x2A8);
    if (TEST_NZ(eax, eax)) { sub_0023B922(); return; } /* jne: not equal / not zero */

loc_0023B91E: ;
    ecx = 0; /* xor self */
    g_seh_ebp = ebp; sub_0023B92D(); return; /* tail jmp 0x0023B92D */

}

/**
 * sub_0023B970
 * Original: 0x0023B970 - 0x0023B982 (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023B970(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0023B970: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 0x2A8);
    if (TEST_NZ(edx, edx)) { sub_0023B982(); return; } /* jne: not equal / not zero */

loc_0023B97E: ;
    ecx = 0; /* xor self */
    g_seh_ebp = ebp; sub_0023B98D(); return; /* tail jmp 0x0023B98D */

}

/**
 * sub_0023B9C0
 * Original: 0x0023B9C0 - 0x0023B9E6 (38 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023B9C0(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0023B9C0: ;
    PUSH32(esp, 0);
    ecx = 0; /* xor self */
    edx = 0x86299C;
    PUSH32(esp, 0); sub_00068500(); /* call 0x00068500 */

loc_0023B9CE: ;
    PUSH32(esp, 0);
    ecx = 0; /* xor self */
    edx = 0x8629AC;
    PUSH32(esp, 0); sub_00068500(); /* call 0x00068500 */

loc_0023B9DC: ;
    eax = 0x8626F8;
    g_seh_ebp = ebp; sub_0023B2C0(); return; /* tail jmp 0x0023B2C0 */

}

/**
 * sub_0023B9F0
 * Original: 0x0023B9F0 - 0x0023BA5C (108 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023B9F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0023B9F0: ;
    eax = (uint32_t)(int32_t)SMEM8(0x77627C);
    ecx--;
    (void)0; /* cmp ecx, 5 - flags set for next jcc */
    eax = eax + eax * 4;
    eax = MEM32(eax * 8 + 0x776F28);
    if (CMP_A(ecx, 5)) { sub_0023BA5C(); return; } /* ja: above (unsigned >) */

loc_0023BA07: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x23BA60); /* switch: 6 entries, 6 targets */
    if (_jt == 0x0023BA0Eu) goto loc_0023BA0E;
    if (_jt == 0x0023BA1Bu) goto loc_0023BA1B;
    if (_jt == 0x0023BA28u) goto loc_0023BA28;
    if (_jt == 0x0023BA35u) goto loc_0023BA35;
    if (_jt == 0x0023BA42u) goto loc_0023BA42;
    if (_jt == 0x0023BA4Fu) goto loc_0023BA4F;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0023BA0E: ;
    SET_LO8(edx, MEM8(eax + 0x3C));
    ecx = 0; /* xor self */
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    SET_LO8(ecx, (TEST_Z(LO8(edx), LO8(edx))) ? 1 : 0); /* sete */
    SET_LO8(eax, LO8(ecx));
    esp += 4; return; /* ret */

loc_0023BA1B: ;
    SET_LO8(ecx, MEM8(eax + 0x40));
    edx = 0; /* xor self */
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    SET_LO8(edx, (TEST_Z(LO8(ecx), LO8(ecx))) ? 1 : 0); /* sete */
    SET_LO8(eax, LO8(edx));
    esp += 4; return; /* ret */

loc_0023BA28: ;
    SET_LO8(edx, MEM8(eax + 0x3D));
    ecx = 0; /* xor self */
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    SET_LO8(ecx, (TEST_Z(LO8(edx), LO8(edx))) ? 1 : 0); /* sete */
    SET_LO8(eax, LO8(ecx));
    esp += 4; return; /* ret */

loc_0023BA35: ;
    SET_LO8(ecx, MEM8(eax + 0x3B));
    edx = 0; /* xor self */
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    SET_LO8(edx, (TEST_Z(LO8(ecx), LO8(ecx))) ? 1 : 0); /* sete */
    SET_LO8(eax, LO8(edx));
    esp += 4; return; /* ret */

loc_0023BA42: ;
    SET_LO8(edx, MEM8(eax + 0x3F));
    ecx = 0; /* xor self */
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    SET_LO8(ecx, (TEST_Z(LO8(edx), LO8(edx))) ? 1 : 0); /* sete */
    SET_LO8(eax, LO8(ecx));
    esp += 4; return; /* ret */

loc_0023BA4F: ;
    SET_LO8(ecx, MEM8(eax + 0x3E));
    edx = 0; /* xor self */
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    SET_LO8(edx, (TEST_Z(LO8(ecx), LO8(ecx))) ? 1 : 0); /* sete */
    SET_LO8(eax, LO8(edx));
    esp += 4; return; /* ret */

}

/**
 * sub_0023BB00
 * Original: 0x0023BB00 - 0x0023BB9D (157 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023BB00(void)
{
    int _flags = 0; /* fallback flag var */

loc_0023BB00: ;
    eax = MEM32(ecx + 8);
    SET_LO8(edx, MEM8(ecx + 0xE));
    PUSH32(esp, ebx);
    MEM8(eax) = MEM8(eax) - LO8(edx);
    edx = MEM32(ecx + 8);
    SET_LO8(ebx, MEM8(edx));
    SET_LO8(eax, MEM8(ecx + 0xC));
    (void)0; /* cmp LO8(ebx), LO8(eax) - flags set for next jcc */
    POP32(esp, ebx);
    if (CMP_GE(LO8(ebx), LO8(eax))) goto loc_0023BB2C; /* jge: greater or equal (signed >=) */

loc_0023BB16: ;
    SET_LO8(edx, MEM8(ecx + 0xF));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0023BB20; /* je: equal / zero */

loc_0023BB1D: ;
    SET_LO8(eax, MEM8(ecx + 0xD));

loc_0023BB20: ;
    edx = MEM32(ecx + 8);
    MEM8(edx) = LO8(eax);
    SET_LO8(eax, MEM8(ecx + 0xF));
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_0023BB9D(); return; } /* je: equal / zero */

loc_0023BB2C: ;
    edx = MEM32(ecx + 0x1C);
    eax = MEM32(edx + 4);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    if (TEST_NZ(eax, eax)) goto loc_0023BB3B; /* jne: not equal / not zero */

loc_0023BB37: ;
    esi = 0; /* xor self */
    goto loc_0023BB43;

loc_0023BB3B: ;
    esi = MEM32(edx + 8);
    esi = esi - eax;
    esi = (uint32_t)((int32_t)esi >> 2);

loc_0023BB43: ;
    ecx = MEM32(ecx + 0x20);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 4);
    if (TEST_NZ(edi, edi)) goto loc_0023BB52; /* jne: not equal / not zero */

loc_0023BB4E: ;
    eax = 0; /* xor self */
    goto loc_0023BB5A;

loc_0023BB52: ;
    eax = MEM32(ecx + 8);
    eax = eax - edi;
    eax = (uint32_t)((int32_t)eax >> 2);

loc_0023BB5A: ;
    (void)0; /* cmp esi, eax - flags set for next jcc */
    POP32(esp, edi);
    if (CMP_BE(esi, eax)) goto loc_0023BB7E; /* jbe: below or equal (unsigned <=) */

loc_0023BB5F: ;
    esi = MEM32(edx + 4);
    if (TEST_Z(esi, esi)) goto loc_0023BB99; /* je: equal / zero */

loc_0023BB66: ;
    ecx = MEM32(edx + 8);
    eax = ecx;
    eax = eax - esi;
    eax = (uint32_t)((int32_t)eax >> 2);
    if (TEST_Z(eax, eax)) goto loc_0023BB99; /* je: equal / zero */

loc_0023BB74: ;
    ecx = ecx + 0xFFFFFFFCu;
    MEM32(edx + 8) = ecx;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0023BB7E: ;
    esi = MEM32(ecx + 4);
    if (TEST_Z(esi, esi)) goto loc_0023BB99; /* je: equal / zero */

loc_0023BB85: ;
    edx = MEM32(ecx + 8);
    eax = edx;
    eax = eax - esi;
    eax = (uint32_t)((int32_t)eax >> 2);
    if (TEST_Z(eax, eax)) goto loc_0023BB99; /* je: equal / zero */

loc_0023BB93: ;
    edx = edx + 0xFFFFFFFCu;
    MEM32(ecx + 8) = edx;

loc_0023BB99: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0023BBA0
 * Original: 0x0023BBA0 - 0x0023BCCA (298 bytes, 81 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023BBA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm5, xmm6;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0023BBA0: ;
    esp = esp - 0x30;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm5 = MEMF(0x648D10); /* movss */
    xmm6 = MEMF(0x648EA4); /* movss */
    eax = 0; /* xor self */
    MEM32(esp + 4) = eax;
    PUSH32(esp, ebx);
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x3C);
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, esi);
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, edi);
    MEM32(esp + 0x28) = 1;
    MEM32(esp + 0x2C) = 2;
    MEM32(esp + 0x30) = 3;
    MEM32(esp + 0x34) = 4;
    MEM32(esp + 0x38) = 5;
    MEM32(esp + 0x3C) = 6;
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEM32(esp + 0x24) = eax;
    esi = 0; /* xor self */
    /* nop */

loc_0023BC10: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0023BC15: ;
    ecx = MEM32(esp + esi + 0x28);
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + esi + 0x10) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0023B9F0(); /* call 0x0023B9F0 */

loc_0023BC28: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0023BC36; /* je: equal / zero */

loc_0023BC2C: ;
    xmm0 = xmm0 + xmm6; /* addss */
    MEMF(esp + esi + 0x10) = xmm0; /* movss */

loc_0023BC36: ;
    esi = esi + 4;
    if (CMP_L(esi, 0x18)) goto loc_0023BC10; /* jl: less (signed <) */

loc_0023BC3E: ;
    edi = MEM32(ebp + 4);
    ebx = MEM32(ebp + 8);
    ecx = edi;
    if (CMP_EQ(ecx, ebx)) goto loc_0023BC95; /* je: equal / zero */

loc_0023BC4A: ;
    xmm0 = MEMF(0x648D14); /* movss */
    esi = ebx;

loc_0023BC54: ;
    edx = MEM32(ecx);
    eax = esp + 0x28;
    /* nop */

loc_0023BC60: ;
    if (CMP_EQ(MEM32(eax), edx)) goto loc_0023BC6F; /* je: equal / zero */

loc_0023BC64: ;
    eax = eax + 4;
    ebp = esp + 0x40;
    if (CMP_NE(eax, ebp)) goto loc_0023BC60; /* jne: not equal / not zero */

loc_0023BC6F: ;
    edx = esp + 0x28;
    eax = eax - edx;
    eax = (uint32_t)((int32_t)eax >> 2);
    xmm1 = MEMF(esp + eax * 4 + 0x10); /* movss */
    eax = esp + eax * 4 + 0x10;
    ecx = ecx + 4;
    (void)0; /* cmp ecx, esi - flags set for next jcc */
    xmm1 = xmm1 + xmm0; /* addss */
    MEMF(eax) = xmm1; /* movss */
    if (CMP_NE(ecx, esi)) goto loc_0023BC54; /* jne: not equal / not zero */

loc_0023BC91: ;
    ebp = MEM32(esp + 0x44);

loc_0023BC95: ;
    eax = esp + 0x10;
    ecx = esp + 0x14;
    /* nop */

loc_0023BCA0: ;
    xmm0 = MEMF(eax); /* movss */
    /* comiss xmm0, MEMF(ecx) - sets EFLAGS */
    if ((xmm0 > MEMF(ecx))) eax = ecx; /* cmova */
    ecx = ecx + 4;
    edx = esp + 0x28;
    if (CMP_NE(ecx, edx)) goto loc_0023BCA0; /* jne: not equal / not zero */

loc_0023BCB5: ;
    ecx = esp + 0x10;
    eax = eax - ecx;
    eax = (uint32_t)((int32_t)eax >> 2);
    (void)0; /* test edi, edi - flags set for next jcc */
    edx = esp + eax * 4 + 0x28;
    if (TEST_NZ(edi, edi)) { sub_0023BCCA(); return; } /* jne: not equal / not zero */

loc_0023BCC6: ;
    ecx = 0; /* xor self */
    g_seh_ebp = ebp; sub_0023BCD1(); return; /* tail jmp 0x0023BCD1 */

}

/**
 * sub_0023BD20
 * Original: 0x0023BD20 - 0x0023BD69 (73 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023BD20(void)
{
    int _flags = 0; /* fallback flag var */

loc_0023BD20: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x14);
    if (TEST_Z(eax, eax)) goto loc_0023BD45; /* je: equal / zero */

loc_0023BD2A: ;
    ecx = MEM32(esi + 0x18);
    edx = MEM32(ecx);
    eax = esi + 0x18;
    edx--;
    MEM32(ecx) = edx;
    ecx = MEM32(eax);
    if (CMP_NE(MEM32(ecx), 0)) goto loc_0023BD45; /* jne: not equal / not zero */

loc_0023BD3C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0023BD42: ;
    esp = esp + 4;

loc_0023BD45: ;
    (void)0; /* test MEM8(esp + 8), 1 - flags set for next jcc */
    MEM32(esi) = 0x5FA19C;
    if (TEST_Z(MEM8(esp + 8), 1)) goto loc_0023BD63; /* je: equal / zero */

loc_0023BD52: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0023BD60: ;
    esp = esp + 4;

loc_0023BD63: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0023BD70
 * Original: 0x0023BD70 - 0x0023BDBB (75 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023BD70(void)
{
    int _flags = 0; /* fallback flag var */

loc_0023BD70: ;
    SET_LO8(eax, MEM8(0x86298D));
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_0023BDBB(); return; } /* je: equal / zero */

loc_0023BD79: ;
    ecx = MEM32(0x8629B0);
    if (TEST_Z(ecx, ecx)) goto loc_0023BD91; /* je: equal / zero */

loc_0023BD83: ;
    eax = MEM32(0x8629B4);
    eax = eax - ecx;
    eax = (uint32_t)((int32_t)eax >> 2);
    if (TEST_NZ(eax, eax)) goto loc_0023BD9A; /* jne: not equal / not zero */

loc_0023BD91: ;
    MEM32(edx) = 1;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_0023BD9A: ;
    ecx = MEM32(0x8629A0);
    if (TEST_Z(ecx, ecx)) goto loc_0023BDB2; /* je: equal / zero */

loc_0023BDA4: ;
    eax = MEM32(0x8629A4);
    eax = eax - ecx;
    eax = (uint32_t)((int32_t)eax >> 2);
    if (TEST_NZ(eax, eax)) { sub_0023BDBB(); return; } /* jne: not equal / not zero */

loc_0023BDB2: ;
    MEM32(edx) = 0;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_0023BDC0
 * Original: 0x0023BDC0 - 0x0023BF70 (432 bytes, 102 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023BDC0(void)
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

loc_0023BDC0: ;
    PUSH32(esp, ecx);
    (void)0; /* test MEM8(0x876760), 1 - flags set for next jcc */
    MEM32(0x776BE0) = 1;
    if (TEST_NZ(MEM8(0x876760), 1)) goto loc_0023BDDB; /* jne: not equal / not zero */

loc_0023BDD4: ;
    MEM32(0x876760) = MEM32(0x876760) | 1;

loc_0023BDDB: ;
    eax = MEM32(0x86422C);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM8(0x87675C) = LO8(ebx);
    MEM8(0x87675D) = LO8(ebx);
    MEM8(0x862998) = 1;
    if (CMP_EQ(eax, ebx)) goto loc_0023BE0C; /* je: equal / zero */

loc_0023BDFC: ;
    MEM8(0x8757E9) = LO8(ebx);
    MEM32(0x776238) = 0x10;

loc_0023BE0C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x11);
    PUSH32(esp, 0x5FAA10);
    PUSH32(esp, 0x8757E9);
    PUSH32(esp, 0x75E53C);
    MEM8(0x849B80) = LO8(ebx);
    PUSH32(esp, 0); sub_00240570(); /* call 0x00240570 */

loc_0023BE29: ;
    edi = MEM32(0x862CD0);
    esp = esp + 0x14;
    MEM32(0x8497AC) = 0x849AAC;
    MEM32(0x849FC4) = 0x849AB4;
    PUSH32(esp, 0); sub_00351C60(); /* call 0x00351C60 */

loc_0023BE4B: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x84CA48);
    PUSH32(esp, 0x84CDE0);
    esi = eax;
    PUSH32(esp, 0); sub_0046FCD6(); /* call 0x0046FCD6 */

loc_0023BE5E: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, esi);
    PUSH32(esp, 0x84CA48);
    PUSH32(esp, 0); sub_0046FCD6(); /* call 0x0046FCD6 */

loc_0023BE6B: ;
    SET_LO8(eax, MEM8(0x776238));
    esp = esp + 0x18;
    (void)0; /* test LO8(eax), 0x20 - flags set for next jcc */
    MEM8(0x849931) = 1;
    MEM32(0x8497AC) = ebx;
    MEM32(0x849FC4) = ebx;
    if (TEST_Z(LO8(eax), 0x20)) goto loc_0023BF6B; /* je: equal / zero */

loc_0023BE8E: ;
    if (TEST_NZ(MEM8(0x87B388), 1)) goto loc_0023BEBA; /* jne: not equal / not zero */

loc_0023BE97: ;
    eax = MEM32(0x87B388);
    eax = eax | 1;
    ecx = 0x87B384;
    MEM32(0x87B388) = eax;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023BEAE: ;
    MEMF(0x87B37C) = (float)fp_top(); fp_pop(); /* fst */
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */

loc_0023BEBA: ;
    PUSH32(esp, 0); sub_0021D790(); /* call 0x0021D790 */

loc_0023BEBF: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0023BF6B; /* je: equal / zero */

loc_0023BEC7: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023BED1: ;
    fp_push(MEMF(0x87B37C)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp >= 0) /* fcompi */) goto loc_0023BEF5; /* jae: above or equal (unsigned >=) */

loc_0023BEDF: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023BEE9: ;
    fp_push(MEMF(0x87B380)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_0023BF6B; /* jbe: below or equal (unsigned <=) */

loc_0023BEF5: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023BEFF: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    ecx = 0x87B384;
    MEMF(0x87B37C) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023BF15: ;
    esi = 0x862C40;
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_002966D0(); /* call 0x002966D0 */

loc_0023BF25: ;
    esi = MEM32(0x875670);
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(0x849B84) = ebx;
    MEM32(0x776BE0) = ebx;
    edi = esi;
    if (CMP_EQ(esi, ebx)) goto loc_0023BF53; /* je: equal / zero */

loc_0023BF3D: ;
    PUSH32(esp, 0); sub_001C7480(); /* call 0x001C7480 */

loc_0023BF42: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    MEM32(esp + 0x10) = edi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0023BF50: ;
    esp = esp + 4;

loc_0023BF53: ;
    PUSH32(esp, 5);
    edi = 0; /* xor self */
    MEM32(0x875670) = ebx;
    MEM8(0x862998) = LO8(ebx);
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_0023BF68: ;
    esp = esp + 4;

loc_0023BF6B: ;
    POP32(esp, edi);
    POP32(esp, esi);
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
 * sub_0023BF70
 * Original: 0x0023BF70 - 0x0023C02D (189 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023BF70(void)
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

loc_0023BF70: ;
    SET_LO8(ecx, MEM8(0x87B388));
    eax = 1;
    if (TEST_NZ(LO8(eax), LO8(ecx))) goto loc_0023BF9B; /* jne: not equal / not zero */

loc_0023BF7F: ;
    MEM32(0x87B388) = MEM32(0x87B388) | eax;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023BF8F: ;
    MEMF(0x87B37C) = (float)fp_top(); fp_pop(); /* fst */
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */

loc_0023BF9B: ;
    PUSH32(esp, 0); sub_0021D790(); /* call 0x0021D790 */

loc_0023BFA0: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0023C02C; /* je: equal / zero */

loc_0023BFA8: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023BFB2: ;
    fp_push(MEMF(0x87B37C)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp >= 0) /* fcompi */) goto loc_0023BFD6; /* jae: above or equal (unsigned >=) */

loc_0023BFC0: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023BFCA: ;
    fp_push(MEMF(0x87B380)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_0023C02C; /* jbe: below or equal (unsigned <=) */

loc_0023BFD6: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023BFE0: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    ecx = 0x87B384;
    MEMF(0x87B37C) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023BFF6: ;
    SET_LO8(eax, MEM8(0x86298D));
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */
    SET_LO8(ecx, MEM8(0x862990));
    MEM8(0x864228) = LO8(eax);
    eax = MEM32(0x68C31C);
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    SET_LO8(ecx, (TEST_Z(LO8(ecx), LO8(ecx))) ? 1 : 0); /* sete */
    eax++;
    MEM32(0x849B84) = 0x15;
    MEM8(0x862C66) = LO8(ecx);
    MEM32(0x68C31C) = eax;

loc_0023C02C: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0023C030
 * Original: 0x0023C030 - 0x0023C0D4 (164 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023C030(void)
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

loc_0023C030: ;
    if (TEST_NZ(MEM8(0x87B388), 1)) goto loc_0023C05C; /* jne: not equal / not zero */

loc_0023C039: ;
    eax = MEM32(0x87B388);
    eax = eax | 1;
    ecx = 0x87B384;
    MEM32(0x87B388) = eax;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023C050: ;
    MEMF(0x87B37C) = (float)fp_top(); fp_pop(); /* fst */
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */

loc_0023C05C: ;
    PUSH32(esp, 0); sub_0021D790(); /* call 0x0021D790 */

loc_0023C061: ;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_0023C0D4(); return; } /* je: equal / zero */

loc_0023C065: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023C06F: ;
    fp_push(MEMF(0x87B37C)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp >= 0) /* fcompi */) goto loc_0023C093; /* jae: above or equal (unsigned >=) */

loc_0023C07D: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023C087: ;
    fp_push(MEMF(0x87B380)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) { sub_0023C0D4(); return; } /* jbe: below or equal (unsigned <=) */

loc_0023C093: ;
    PUSH32(esp, edi);
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023C09E: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    ecx = 0x87B384;
    MEMF(0x87B37C) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023C0B4: ;
    PUSH32(esp, 0x28);
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */
    edi = 0; /* xor self */
    MEM32(0x849B84) = 0x2A;
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_0023C0CD: ;
    esp = esp + 4;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0023C0E0
 * Original: 0x0023C0E0 - 0x0023C1E8 (264 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023C0E0(void)
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

loc_0023C0E0: ;
    SET_LO8(eax, MEM8(0x87B388));
    esp = esp - 8;
    PUSH32(esp, ebx);
    ebx = 1;
    (void)0; /* test LO8(ebx), LO8(eax) - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(0x849B84);
    if (TEST_NZ(LO8(ebx), LO8(eax))) goto loc_0023C11B; /* jne: not equal / not zero */

loc_0023C0F9: ;
    eax = MEM32(0x87B388);
    eax = eax | ebx;
    ecx = 0x87B384;
    MEM32(0x87B388) = eax;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023C10F: ;
    MEMF(0x87B37C) = (float)fp_top(); fp_pop(); /* fst */
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */

loc_0023C11B: ;
    PUSH32(esp, 0); sub_0021D790(); /* call 0x0021D790 */

loc_0023C120: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0023C1E2; /* je: equal / zero */

loc_0023C128: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023C132: ;
    fp_push(MEMF(0x87B37C)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp >= 0) /* fcompi */) goto loc_0023C15A; /* jae: above or equal (unsigned >=) */

loc_0023C140: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023C14A: ;
    fp_push(MEMF(0x87B380)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_0023C1E2; /* jbe: below or equal (unsigned <=) */

loc_0023C15A: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023C164: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    ecx = 0x87B384;
    MEMF(0x87B37C) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023C17A: ;
    ecx = MEM32(0x863D04);
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */
    SET_LO8(eax, 0); /* xor self */
    (void)0; /* cmp ecx, ebx - flags set for next jcc */
    MEM32(0x849B84) = 0x27;
    if (CMP_NE(ecx, ebx)) goto loc_0023C19E; /* jne: not equal / not zero */

loc_0023C196: ;
    if (CMP_EQ(MEM8(0x75E9A2), LO8(eax))) goto loc_0023C1A9; /* je: equal / zero */

loc_0023C19E: ;
    MEM8(0x75E9A2) = LO8(eax);
    MEM32(0x863D04) = ebx;

loc_0023C1A9: ;
    PUSH32(esp, 0x23C030);
    MEM8(0x862C5C) = LO8(ebx);
    MEM8(0x862C9E) = LO8(eax);
    MEM8(0x862990) = 2;
    PUSH32(esp, 0); sub_00234260(); /* call 0x00234260 */

loc_0023C1C5: ;
    MEM32(esp + 0xC) = esi;
    esp = esp + 4;
    edx = esp + 8;
    esi = 0x8626D4;
    MEM32(esp + 0xC) = 0xA;
    PUSH32(esp, 0); sub_001DFC00(); /* call 0x001DFC00 */

loc_0023C1E2: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0023C1F0
 * Original: 0x0023C1F0 - 0x0023C2C6 (214 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023C1F0(void)
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

loc_0023C1F0: ;
    SET_LO8(eax, MEM8(0x87B388));
    PUSH32(esp, ebx);
    ebx = 1;
    if (TEST_NZ(LO8(ebx), LO8(eax))) goto loc_0023C221; /* jne: not equal / not zero */

loc_0023C1FF: ;
    eax = MEM32(0x87B388);
    eax = eax | ebx;
    ecx = 0x87B384;
    MEM32(0x87B388) = eax;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023C215: ;
    MEMF(0x87B37C) = (float)fp_top(); fp_pop(); /* fst */
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */

loc_0023C221: ;
    PUSH32(esp, 0); sub_0021D790(); /* call 0x0021D790 */

loc_0023C226: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0023C2C4; /* je: equal / zero */

loc_0023C22E: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023C238: ;
    fp_push(MEMF(0x87B37C)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp >= 0) /* fcompi */) goto loc_0023C25C; /* jae: above or equal (unsigned >=) */

loc_0023C246: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023C250: ;
    fp_push(MEMF(0x87B380)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_0023C2C4; /* jbe: below or equal (unsigned <=) */

loc_0023C25C: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023C266: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    ecx = 0x87B384;
    MEMF(0x87B37C) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023C27C: ;
    ecx = MEM32(0x863D04);
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */
    SET_LO8(eax, 0); /* xor self */
    (void)0; /* cmp ecx, ebx - flags set for next jcc */
    MEM32(0x849B84) = 0x17;
    if (CMP_NE(ecx, ebx)) goto loc_0023C2A0; /* jne: not equal / not zero */

loc_0023C298: ;
    if (CMP_EQ(MEM8(0x75E9A2), LO8(eax))) goto loc_0023C2AB; /* je: equal / zero */

loc_0023C2A0: ;
    MEM8(0x75E9A2) = LO8(eax);
    MEM32(0x863D04) = ebx;

loc_0023C2AB: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x1A);
    edi = 0; /* xor self */
    MEM8(0x862C5C) = LO8(ebx);
    MEM8(0x862C9E) = LO8(eax);
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_0023C2C0: ;
    esp = esp + 4;
    POP32(esp, edi);

loc_0023C2C4: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0023C2D0
 * Original: 0x0023C2D0 - 0x0023C352 (130 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023C2D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0023C2D0: ;
    esp = esp - 0x80;
    PUSH32(esp, 0x7F);
    PUSH32(esp, 0x5FAA04);
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM8(0x849B80) = 1;
    PUSH32(esp, 0); sub_0042DD7A(); /* call 0x0042DD7A */

loc_0023C2EE: ;
    eax = 0; /* xor self */

loc_0023C2F0: ;
    SET_LO8(ecx, MEM8(esp + eax));
    MEM8(eax + 0x8629E0) = LO8(ecx);
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0023C2F0; /* jne: not equal / not zero */

loc_0023C2FE: ;
    eax = MEM32(0x876760);
    (void)0; /* test LO8(eax), 1 - flags set for next jcc */
    MEM32(0x776BE0) = 3;
    if (TEST_NZ(LO8(eax), 1)) goto loc_0023C325; /* jne: not equal / not zero */

loc_0023C311: ;
    eax = eax | 1;
    (void)0; /* test LO8(eax), 1 - flags set for next jcc */
    MEM32(0x876760) = eax;
    if (TEST_NZ(LO8(eax), 1)) goto loc_0023C325; /* jne: not equal / not zero */

loc_0023C31D: ;
    eax = eax | 1;
    MEM32(0x876760) = eax;

loc_0023C325: ;
    (void)0; /* test LO8(eax), 1 - flags set for next jcc */
    MEM8(0x87675C) = 1;
    if (TEST_NZ(LO8(eax), 1)) goto loc_0023C33F; /* jne: not equal / not zero */

loc_0023C330: ;
    eax = eax | 1;
    MEM32(0x876760) = eax;
    MEM8(0x87675C) = 0;

loc_0023C33F: ;
    MEM8(0x87675D) = 1;
    PUSH32(esp, 0); sub_0023BF70(); /* call 0x0023BF70 */

loc_0023C34B: ;
    esp = esp + 0x80;
    esp += 4; return; /* ret */

}

/**
 * sub_0023C360
 * Original: 0x0023C360 - 0x0023C40D (173 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023C360(void)
{
    int _flags = 0; /* fallback flag var */

loc_0023C360: ;
    PUSH32(esp, ecx);
    if (CMP_LE(MEM32(0x68C31C), 1)) goto loc_0023C379; /* jle: less or equal (signed <=) */

loc_0023C36A: ;
    PUSH32(esp, 0); sub_001FF9C0(); /* call 0x001FF9C0 */

loc_0023C36F: ;
    PUSH32(esp, 0); sub_0004DDD0(); /* call 0x0004DDD0 */

loc_0023C374: ;
    PUSH32(esp, 0); sub_00207FB0(); /* call 0x00207FB0 */

loc_0023C379: ;
    SET_LO8(edx, MEM8(0x86E980));
    SET_LO8(ecx, MEM8(0x86E982));
    SET_LO8(eax, 0xFD);
    SET_LO8(edx, LO8(edx) & LO8(eax));
    SET_LO8(ecx, LO8(ecx) & LO8(eax));
    MEM8(0x86E980) = LO8(edx);
    SET_LO8(edx, MEM8(0x86E981));
    MEM8(0x86E982) = LO8(ecx);
    SET_LO8(ecx, MEM8(0x862CC8));
    PUSH32(esp, ebx);
    SET_LO8(edx, LO8(edx) & LO8(eax));
    SET_LO8(ecx, LO8(ecx) & LO8(eax));
    SET_LO8(eax, MEM8(0x6BCFEC));
    ebx = 0; /* xor self */
    (void)0; /* cmp LO8(eax), 2 - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM8(0x849B80) = LO8(ebx);
    MEM8(0x86E981) = LO8(edx);
    MEM8(0x862E58) = LO8(ebx);
    MEM8(0x862CC8) = LO8(ecx);
    if (CMP_NE(LO8(eax), 2)) goto loc_0023C3D4; /* jne: not equal / not zero */

loc_0023C3CD: ;
    MEM8(0x6BCFEC) = 1;

loc_0023C3D4: ;
    esi = MEM32(0x875670);
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(0x776BE0) = ebx;
    edi = esi;
    if (CMP_EQ(esi, ebx)) goto loc_0023C3FC; /* je: equal / zero */

loc_0023C3E6: ;
    PUSH32(esp, 0); sub_001C7480(); /* call 0x001C7480 */

loc_0023C3EB: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    MEM32(esp + 0x10) = edi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0023C3F9: ;
    esp = esp + 4;

loc_0023C3FC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(0x875670) = ebx;
    MEM8(0x862998) = LO8(ebx);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0023C410
 * Original: 0x0023C410 - 0x0023C45D (77 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023C410(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0023C410: ;
    eax = MEM32(0x876760);
    esp = esp - 0x80;
    if (TEST_NZ(LO8(eax), 1)) goto loc_0023C427; /* jne: not equal / not zero */

loc_0023C41F: ;
    eax = eax | 1;
    MEM32(0x876760) = eax;

loc_0023C427: ;
    (void)0; /* test LO8(eax), 1 - flags set for next jcc */
    MEM8(0x87675D) = 0;
    if (TEST_NZ(LO8(eax), 1)) goto loc_0023C441; /* jne: not equal / not zero */

loc_0023C432: ;
    eax = eax | 1;
    MEM32(0x876760) = eax;
    MEM8(0x87675D) = 0;

loc_0023C441: ;
    PUSH32(esp, 0x7F);
    PUSH32(esp, 0x5FA9F8);
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM8(0x87675C) = 1;
    PUSH32(esp, 0); sub_0042DD7A(); /* call 0x0042DD7A */

loc_0023C459: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_0023C460(); return; /* tail jmp 0x0023C460 */

}

/**
 * sub_0023C490
 * Original: 0x0023C490 - 0x0023C54F (191 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023C490(void)
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

loc_0023C490: ;
    SET_LO8(ecx, MEM8(0x87B388));
    eax = 1;
    if (TEST_NZ(LO8(eax), LO8(ecx))) goto loc_0023C4BB; /* jne: not equal / not zero */

loc_0023C49F: ;
    MEM32(0x87B388) = MEM32(0x87B388) | eax;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023C4AF: ;
    MEMF(0x87B37C) = (float)fp_top(); fp_pop(); /* fst */
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */

loc_0023C4BB: ;
    PUSH32(esp, 0); sub_0021D790(); /* call 0x0021D790 */

loc_0023C4C0: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0023C54E; /* je: equal / zero */

loc_0023C4C8: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023C4D2: ;
    fp_push(MEMF(0x87B37C)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp >= 0) /* fcompi */) goto loc_0023C4F6; /* jae: above or equal (unsigned >=) */

loc_0023C4E0: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023C4EA: ;
    fp_push(MEMF(0x87B380)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_0023C54E; /* jbe: below or equal (unsigned <=) */

loc_0023C4F6: ;
    PUSH32(esp, edi);
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023C501: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    ecx = 0x87B384;
    MEMF(0x87B37C) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023C517: ;
    PUSH32(esp, 0xF);
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */
    edi = 0; /* xor self */
    MEM32(0x849B84) = 0x1F;
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_0023C530: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_0023C537: ;
    esp = esp + 8;
    SET_LO8(eax, 0); /* xor self */
    MEM8(0x862D30) = 0x27;
    MEM8(0x862D31) = LO8(eax);
    MEM8(0x862D13) = LO8(eax);
    POP32(esp, edi);

loc_0023C54E: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0023C550
 * Original: 0x0023C550 - 0x0023C5A6 (86 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023C550(void)
{
    int _flags = 0; /* fallback flag var */

loc_0023C550: ;
    esp = esp - 0x80;
    PUSH32(esp, 0x7F);
    PUSH32(esp, 0x5FA9EC);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042DD7A(); /* call 0x0042DD7A */

loc_0023C567: ;
    eax = 0; /* xor self */
    /* nop */

loc_0023C570: ;
    SET_LO8(ecx, MEM8(esp + eax));
    MEM8(eax + 0x8629E0) = LO8(ecx);
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0023C570; /* jne: not equal / not zero */

loc_0023C57E: ;
    SET_LO8(eax, MEM8(0x862990));
    SET_LO8(ecx, MEM8(0x86298D));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    SET_LO8(edx, (TEST_Z(LO8(eax), LO8(eax))) ? 1 : 0); /* sete */
    MEM8(0x864228) = LO8(ecx);
    MEM8(0x862C66) = LO8(edx);
    PUSH32(esp, 0); sub_0023C1F0(); /* call 0x0023C1F0 */

loc_0023C59F: ;
    esp = esp + 0x80;
    esp += 4; return; /* ret */

}

/**
 * sub_0023C5B0
 * Original: 0x0023C5B0 - 0x0023C651 (161 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023C5B0(void)
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

loc_0023C5B0: ;
    SET_LO8(ecx, MEM8(0x87B388));
    eax = 1;
    if (TEST_NZ(LO8(eax), LO8(ecx))) goto loc_0023C5DB; /* jne: not equal / not zero */

loc_0023C5BF: ;
    MEM32(0x87B388) = MEM32(0x87B388) | eax;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023C5CF: ;
    MEMF(0x87B37C) = (float)fp_top(); fp_pop(); /* fst */
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */

loc_0023C5DB: ;
    PUSH32(esp, 0); sub_0021D790(); /* call 0x0021D790 */

loc_0023C5E0: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0023C650; /* je: equal / zero */

loc_0023C5E4: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023C5EE: ;
    fp_push(MEMF(0x87B37C)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp >= 0) /* fcompi */) goto loc_0023C612; /* jae: above or equal (unsigned >=) */

loc_0023C5FC: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023C606: ;
    fp_push(MEMF(0x87B380)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_0023C650; /* jbe: below or equal (unsigned <=) */

loc_0023C612: ;
    PUSH32(esp, edi);
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023C61D: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    ecx = 0x87B384;
    MEMF(0x87B37C) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023C633: ;
    PUSH32(esp, 0x23);
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */
    edi = 0; /* xor self */
    MEM32(0x849B84) = 0x1A;
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_0023C64C: ;
    esp = esp + 4;
    POP32(esp, edi);

loc_0023C650: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0023C660
 * Original: 0x0023C660 - 0x0023C7A0 (320 bytes, 77 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023C660(void)
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

loc_0023C660: ;
    eax = MEM32(0x86422C);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_EQ(eax, ebx)) goto loc_0023C67D; /* je: equal / zero */

loc_0023C66D: ;
    MEM8(0x8757E8) = LO8(ebx);
    MEM32(0x776238) = 0x10;

loc_0023C67D: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x21);
    PUSH32(esp, 0x5FAA98);
    PUSH32(esp, 0x8757E8);
    PUSH32(esp, 0x75E50C);
    PUSH32(esp, 0); sub_00240570(); /* call 0x00240570 */

loc_0023C695: ;
    edi = MEM32(0x862CD0);
    esp = esp + 0x14;
    MEM32(0x8497AC) = 0x849AAC;
    MEM32(0x849FC4) = 0x849AB4;
    PUSH32(esp, 0); sub_00351C60(); /* call 0x00351C60 */

loc_0023C6B7: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x84CA48);
    PUSH32(esp, 0x84CDE0);
    esi = eax;
    PUSH32(esp, 0); sub_0046FCD6(); /* call 0x0046FCD6 */

loc_0023C6CA: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, esi);
    PUSH32(esp, 0x84CA48);
    PUSH32(esp, 0); sub_0046FCD6(); /* call 0x0046FCD6 */

loc_0023C6D7: ;
    SET_LO8(ecx, MEM8(0x776238));
    esp = esp + 0x18;
    (void)0; /* test LO8(ecx), 0x20 - flags set for next jcc */
    eax = 1;
    MEM8(0x849931) = LO8(eax);
    MEM32(0x8497AC) = ebx;
    MEM32(0x849FC4) = ebx;
    POP32(esp, esi);
    if (TEST_Z(LO8(ecx), 0x20)) goto loc_0023C79D; /* je: equal / zero */

loc_0023C700: ;
    if (TEST_NZ(MEM8(0x87B388), LO8(eax))) goto loc_0023C724; /* jne: not equal / not zero */

loc_0023C708: ;
    MEM32(0x87B388) = MEM32(0x87B388) | eax;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023C718: ;
    MEMF(0x87B37C) = (float)fp_top(); fp_pop(); /* fst */
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */

loc_0023C724: ;
    PUSH32(esp, 0); sub_0021D790(); /* call 0x0021D790 */

loc_0023C729: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0023C79D; /* je: equal / zero */

loc_0023C72D: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023C737: ;
    fp_push(MEMF(0x87B37C)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp >= 0) /* fcompi */) goto loc_0023C75B; /* jae: above or equal (unsigned >=) */

loc_0023C745: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023C74F: ;
    fp_push(MEMF(0x87B380)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_0023C79D; /* jbe: below or equal (unsigned <=) */

loc_0023C75B: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023C765: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    ecx = 0x87B384;
    MEMF(0x87B37C) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023C77B: ;
    PUSH32(esp, 5);
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */
    edi = 0; /* xor self */
    MEM32(0x849B84) = 0x16;
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_0023C794: ;
    esp = esp + 4;
    MEM8(0x862998) = LO8(ebx);

loc_0023C79D: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0023C8C0
 * Original: 0x0023C8C0 - 0x0023CA2F (367 bytes, 88 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023C8C0(void)
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

loc_0023C8C0: ;
    if (TEST_NZ(MEM8(0x87B388), 1)) goto loc_0023C8EC; /* jne: not equal / not zero */

loc_0023C8C9: ;
    eax = MEM32(0x87B388);
    eax = eax | 1;
    ecx = 0x87B384;
    MEM32(0x87B388) = eax;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023C8E0: ;
    MEMF(0x87B37C) = (float)fp_top(); fp_pop(); /* fst */
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */

loc_0023C8EC: ;
    PUSH32(esp, 0); sub_0021D790(); /* call 0x0021D790 */

loc_0023C8F1: ;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_0023CA2F(); return; } /* je: equal / zero */

loc_0023C8F9: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023C903: ;
    fp_push(MEMF(0x87B37C)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp >= 0) /* fcompi */) goto loc_0023C92B; /* jae: above or equal (unsigned >=) */

loc_0023C911: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023C91B: ;
    fp_push(MEMF(0x87B380)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) { sub_0023CA2F(); return; } /* jbe: below or equal (unsigned <=) */

loc_0023C92B: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023C935: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    ecx = 0x87B384;
    MEMF(0x87B37C) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023C94B: ;
    eax = (uint32_t)(int32_t)SMEM8(0x86298E);
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    SET_LO8(eax, 0); /* xor self */
    MEM32(0x849B84) = 0x1E;
    PUSH32(esp, 0); sub_001C74F0(); /* call 0x001C74F0 */

loc_0023C96C: ;
    edi = eax;
    PUSH32(esp, 0); sub_00233B10(); /* call 0x00233B10 */

loc_0023C973: ;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_001C74F0(); /* call 0x001C74F0 */

loc_0023C97A: ;
    ecx = MEM32(eax + 0x20);
    edx = MEM32(eax + 4);
    ecx = ecx + ecx * 2;
    eax = edx + ecx * 8;
    SET_LO8(eax, MEM8(eax + 0x14));
    MEM8(0x77627B) = LO8(eax);
    MEM8(0x77627D) = 1;
    MEM8(0x77627C) = LO8(eax);
    MEM8(0x862C66) = 0;
    MEM8(0x862C9F) = 2;
    PUSH32(esp, 0); sub_002892C0(); /* call 0x002892C0 */

loc_0023C9AD: ;
    esi = eax;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_001C74F0(); /* call 0x001C74F0 */

loc_0023C9B6: ;
    MEM32(eax + 0x24) = esi;
    PUSH32(esp, 1);
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_001C74F0(); /* call 0x001C74F0 */

loc_0023C9C2: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00233BD0(); /* call 0x00233BD0 */

loc_0023C9C8: ;
    (void)0; /* cmp MEM32(0x863D08), 2 - flags set for next jcc */
    MEM8(0x862CA1) = 1;
    if (CMP_NE(MEM32(0x863D08), 2)) goto loc_0023C9E1; /* jne: not equal / not zero */

loc_0023C9D8: ;
    SET_LO8(eax, MEM8(0x75E9A1));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0023C9FD; /* je: equal / zero */

loc_0023C9E1: ;
    MEM8(0x75E9A1) = 0;
    MEM32(0x863D08) = 2;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023C9F7: ;
    MEMF(0x863D0C) = (float)fp_top(); fp_popp(); /* fstp */

loc_0023C9FD: ;
    SET_LO8(eax, MEM8(0x86E978));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0023CA17; /* je: equal / zero */

loc_0023CA06: ;
    eax = MEM32(0x86E990);
    MEM8(0x86E978) = 0;
    PUSH32(esp, 0); sub_00421FB0(); /* call 0x00421FB0 */

loc_0023CA17: ;
    PUSH32(esp, 0x12);
    edi = 0; /* xor self */
    MEM8(0x862C64) = 0x10;
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_0023CA27: ;
    esp = esp + 4;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0023CA40
 * Original: 0x0023CA40 - 0x0023CB17 (215 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023CA40(void)
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

loc_0023CA40: ;
    SET_LO8(ecx, MEM8(0x87B388));
    eax = 1;
    esp = esp - 0x14;
    if (TEST_NZ(LO8(eax), LO8(ecx))) goto loc_0023CA6E; /* jne: not equal / not zero */

loc_0023CA52: ;
    MEM32(0x87B388) = MEM32(0x87B388) | eax;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023CA62: ;
    MEMF(0x87B37C) = (float)fp_top(); fp_pop(); /* fst */
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */

loc_0023CA6E: ;
    PUSH32(esp, 0); sub_0021D790(); /* call 0x0021D790 */

loc_0023CA73: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0023CB13; /* je: equal / zero */

loc_0023CA7B: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023CA85: ;
    fp_push(MEMF(0x87B37C)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp >= 0) /* fcompi */) goto loc_0023CAA9; /* jae: above or equal (unsigned >=) */

loc_0023CA93: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023CA9D: ;
    fp_push(MEMF(0x87B380)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_0023CB13; /* jbe: below or equal (unsigned <=) */

loc_0023CAA9: ;
    PUSH32(esp, edi);
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023CAB4: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    ecx = 0x87B384;
    MEMF(0x87B37C) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023CACA: ;
    eax = 0; /* xor self */
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0x25);
    edi = esp + 8;
    MEM32(0x849B84) = 0x1D;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = 6;
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_0023CAFF: ;
    PUSH32(esp, 0x24);
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_0023CB08: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_0023CB0F: ;
    esp = esp + 0xC;
    POP32(esp, edi);

loc_0023CB13: ;
    esp = esp + 0x14;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0023CB20
 * Original: 0x0023CB20 - 0x0023CB63 (67 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023CB20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0023CB20: ;
    SET_LO8(eax, MEM8(0x862990));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0023CB3F; /* jne: not equal / not zero */

loc_0023CB29: ;
    eax = (uint32_t)(int32_t)SMEM8(0x77627C);
    ecx = MEM32(0x84B11C);
    PUSH32(esp, 0); sub_00352A50(); /* call 0x00352A50 */

loc_0023CB3B: ;
    MEM8(eax + 0x14) = 0;

loc_0023CB3F: ;
    eax = (uint32_t)(int32_t)SMEM8(0x77627B);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0023B5D0(); /* call 0x0023B5D0 */

loc_0023CB4C: ;
    esp = esp + 4;
    PUSH32(esp, 0); sub_0023B840(); /* call 0x0023B840 */

loc_0023CB54: ;
    PUSH32(esp, 0); sub_0023B660(); /* call 0x0023B660 */

loc_0023CB59: ;
    PUSH32(esp, 0); sub_00234320(); /* call 0x00234320 */

loc_0023CB5E: ;
    g_seh_ebp = ebp; sub_0023CA40(); return; /* tail jmp 0x0023CA40 */

}

/**
 * sub_0023CBA0
 * Original: 0x0023CBA0 - 0x0023CC86 (230 bytes, 69 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023CBA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0023CBA0: ;
    SET_LO8(eax, MEM8(0x86298D));
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = 0; /* xor self */
    (void)0; /* cmp LO8(eax), LO8(ebx) - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(LO8(eax), LO8(ebx))) { sub_0023CC86(); return; } /* jne: not equal / not zero */

loc_0023CBB6: ;
    if (CMP_NE(MEM8(0x849B80), LO8(ebx))) { sub_0023CC86(); return; } /* jne: not equal / not zero */

loc_0023CBC2: ;
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0); sub_001FFB50(); /* call 0x001FFB50 */

loc_0023CBC9: ;
    esp = esp + 4;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    if (CMP_EQ(eax, ebx)) goto loc_0023CC1C; /* je: equal / zero */

loc_0023CBD4: ;
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x5FA98C;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_0023CBE0: ;
    ebp = eax;
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x5FA97C;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_0023CBEE: ;
    esi = eax;
    PUSH32(esp, ebx);
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x5FA964;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_0023CBFD: ;
    esp = esp - 8;
    edi = eax;
    eax = esp;
    PUSH32(esp, 0); sub_00060900(); /* call 0x00060900 */

loc_0023CC09: ;
    edx = esi;
    esi = MEM32(esp + 0x1C);
    eax = ebx;
    ecx = ebp;
    PUSH32(esp, 0); sub_002307B0(); /* call 0x002307B0 */

loc_0023CC18: ;
    esi = eax;
    goto loc_0023CC1E;

loc_0023CC1C: ;
    esi = 0; /* xor self */

loc_0023CC1E: ;
    edi = esi + 0xC;
    ecx = esp + 0x10;
    eax = edi;
    MEM32(esp + 0x10) = 0x100;
    MEM32(esp + 0x14) = 0x23CB70;
    MEM32(esp + 0x18) = ebx;
    PUSH32(esp, 0); sub_002692D0(); /* call 0x002692D0 */

loc_0023CC40: ;
    ecx = esp + 0x10;
    eax = edi;
    MEM32(esp + 0x10) = 0x200;
    MEM32(esp + 0x14) = 0x23CB90;
    MEM32(esp + 0x18) = ebx;
    PUSH32(esp, 0); sub_002692D0(); /* call 0x002692D0 */

loc_0023CC5F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_0003C1E0(); /* call 0x0003C1E0 */

loc_0023CC68: ;
    ebx = eax;
    eax = 0xA;
    PUSH32(esp, 0); sub_00232BD0(); /* call 0x00232BD0 */

loc_0023CC74: ;
    eax = 0xA;
    PUSH32(esp, 0); sub_002342E0(); /* call 0x002342E0 */

loc_0023CC7E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_0023CDA0
 * Original: 0x0023CDA0 - 0x0023CE06 (102 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023CDA0(void)
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

loc_0023CDA0: ;
    if (TEST_NZ(MEM8(0x87B388), 1)) goto loc_0023CDCC; /* jne: not equal / not zero */

loc_0023CDA9: ;
    eax = MEM32(0x87B388);
    eax = eax | 1;
    ecx = 0x87B384;
    MEM32(0x87B388) = eax;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023CDC0: ;
    MEMF(0x87B37C) = (float)fp_top(); fp_pop(); /* fst */
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */

loc_0023CDCC: ;
    PUSH32(esp, 0); sub_0021D790(); /* call 0x0021D790 */

loc_0023CDD1: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0023CE03; /* je: equal / zero */

loc_0023CDD5: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023CDDF: ;
    fp_push(MEMF(0x87B37C)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp >= 0) /* fcompi */) { sub_0023CE06(); return; } /* jae: above or equal (unsigned >=) */

loc_0023CDED: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023CDF7: ;
    fp_push(MEMF(0x87B380)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) { sub_0023CE06(); return; } /* ja: above (unsigned >) */

loc_0023CE03: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0023CE40
 * Original: 0x0023CE40 - 0x0023CF8F (335 bytes, 83 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023CE40(void)
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

loc_0023CE40: ;
    SET_LO8(ecx, MEM8(0x87B388));
    esp = esp - 8;
    eax = 1;
    (void)0; /* test LO8(eax), LO8(ecx) - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(0x849B84);
    if (TEST_NZ(LO8(eax), LO8(ecx))) goto loc_0023CE75; /* jne: not equal / not zero */

loc_0023CE59: ;
    MEM32(0x87B388) = MEM32(0x87B388) | eax;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023CE69: ;
    MEMF(0x87B37C) = (float)fp_top(); fp_pop(); /* fst */
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */

loc_0023CE75: ;
    PUSH32(esp, 0); sub_0021D790(); /* call 0x0021D790 */

loc_0023CE7A: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0023CF8A; /* je: equal / zero */

loc_0023CE82: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023CE8C: ;
    fp_push(MEMF(0x87B37C)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp >= 0) /* fcompi */) goto loc_0023CEB4; /* jae: above or equal (unsigned >=) */

loc_0023CE9A: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023CEA4: ;
    fp_push(MEMF(0x87B380)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_0023CF8A; /* jbe: below or equal (unsigned <=) */

loc_0023CEB4: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023CEBE: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    ecx = 0x87B384;
    MEMF(0x87B37C) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0023CED4: ;
    SET_LO8(eax, MEM8(0x7FA23C));
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(0x849B84) = 0x27;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0023CEF8; /* jne: not equal / not zero */

loc_0023CEF0: ;
    xmm0 = MEMF(0x7F9F48); /* movss */

loc_0023CEF8: ;
    eax = MEM32(0x75E500);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEMF(esp + 4) = xmm0; /* movss */
    if (TEST_NZ(eax, eax)) goto loc_0023CF1F; /* jne: not equal / not zero */

loc_0023CF07: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648E64)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_0023CF63; /* ja: above (unsigned >) */

loc_0023CF1F: ;
    ecx = MEM32(0x847024);
    eax = MEM32(ecx + 0x44);
    eax = MEM32(eax + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = eax + 4;
    eax = MEM32(eax);
    PUSH32(esp, eax);
    eax = MEM32(ecx + 0x40);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    edx = edx | 0xFFFFFFFFu;
    eax = eax | 0xFFFFFFFFu;
    ecx = 0xAD0;
    MEMF(0x75E504) = xmm0; /* movss */
    MEM32(0x75E500) = 0;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_0023CF63: ;
    PUSH32(esp, 0x23CDA0);
    PUSH32(esp, 0); sub_00234260(); /* call 0x00234260 */

loc_0023CF6D: ;
    MEM32(esp + 8) = esi;
    esp = esp + 4;
    edx = esp + 4;
    esi = 0x8626D4;
    MEM32(esp + 8) = 0xA;
    PUSH32(esp, 0); sub_001DFC00(); /* call 0x001DFC00 */

loc_0023CF8A: ;
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0023CF90
 * Original: 0x0023CF90 - 0x0023CF9A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023CF90(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0023CF90: ;
    eax = 0x8626F8;
    g_seh_ebp = ebp; sub_0023E400(); return; /* tail jmp 0x0023E400 */

}

/**
 * sub_0023CFA0
 * Original: 0x0023CFA0 - 0x0023D0C2 (290 bytes, 82 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023CFA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0023CFA0: ;
    esp = esp - 0x308;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    PUSH32(esp, 0xF);
    eax = esp + 0x48;
    MEM32(esp + 0x28) = ebx;
    MEM32(esp + 0x2C) = ebx;
    MEM32(esp + 0x30) = ebx;
    PUSH32(esp, 0); sub_0023B000(); /* call 0x0023B000 */

loc_0023CFC3: ;
    if (CMP_EQ(MEM8(0x75E508), LO8(ebx))) goto loc_0023CFD1; /* je: equal / zero */

loc_0023CFCB: ;
    MEM8(0x75E508) = LO8(ebx);

loc_0023CFD1: ;
    SET_LO8(eax, MEM8(0x862990));
    (void)0; /* cmp LO8(eax), 1 - flags set for next jcc */
    MEM8(0x862990) = LO8(eax);
    if (CMP_L(LO8(eax), 1)) goto loc_0023CFE6; /* jl: less (signed <) */

loc_0023CFDF: ;
    MEM8(0x862990) = 1;

loc_0023CFE6: ;
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x5FB0D4;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_0023CFF2: ;
    esi = eax;
    if (CMP_EQ(esi, ebx)) goto loc_0023D035; /* je: equal / zero */

loc_0023CFF8: ;
    PUSH32(esp, 0x84C318);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00470101(); /* call 0x00470101 */

loc_0023D003: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0023D025; /* je: equal / zero */

loc_0023D00A: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x84C318);
    PUSH32(esp, 0x84C6B0);
    PUSH32(esp, 0); sub_0046FCD6(); /* call 0x0046FCD6 */

loc_0023D01B: ;
    esp = esp + 0xC;
    MEM8(0x849930) = 1;

loc_0023D025: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, esi);
    PUSH32(esp, 0x84C318);
    PUSH32(esp, 0); sub_0046FCD6(); /* call 0x0046FCD6 */

loc_0023D032: ;
    esp = esp + 0xC;

loc_0023D035: ;
    if (CMP_NE(MEM32(0x84A19C), ebx)) goto loc_0023D042; /* jne: not equal / not zero */

loc_0023D03D: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0023D042: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (CMP_EQ(esi, ebx)) goto loc_0023D08A; /* je: equal / zero */

loc_0023D068: ;
    if (CMP_B(MEM32(esi + 0x80), 0x10)) goto loc_0023D08A; /* jb: below (unsigned <) */

loc_0023D071: ;
    ecx = 4;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0023D07B: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0023D083: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_0023D0AB; /* jne: not equal / not zero */

loc_0023D08A: ;
    esi = MEM32(0x84A184);
    ecx = 4;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0023D09C: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0023D0A4: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) { sub_0023D0C2(); return; } /* je: equal / zero */

loc_0023D0AB: ;
    MEM32(eax + 4) = ebx;
    MEM32(eax) = 0x5FA138;
    MEM32(eax + 8) = 0x862990;
    MEM8(eax + 0xC) = LO8(ebx);
    edi = eax;
    g_seh_ebp = ebp; sub_0023D0C4(); return; /* tail jmp 0x0023D0C4 */

}

/**
 * sub_0023D510
 * Original: 0x0023D510 - 0x0023D54E (62 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023D510(void)
{
    int _flags = 0; /* fallback flag var */

loc_0023D510: ;
    eax = MEM32(0x8470FC);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(eax + 8);
    SET_LO8(eax, MEM8(esi));
    ebx = 0; /* xor self */
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_0023D53F; /* je: equal / zero */

loc_0023D522: ;
    eax = ZX8(MEM8(esi + 2));
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x100);
    PUSH32(esp, 0); sub_003D2460(); /* call 0x003D2460 */

loc_0023D535: ;
    esp = esp + 8;
    eax = esi;
    PUSH32(esp, 0); sub_0004E0D0(); /* call 0x0004E0D0 */

loc_0023D53F: ;
    POP32(esp, esi);
    MEM32(0x776238) = ebx;
    MEM8(0x849C1E) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0023D550
 * Original: 0x0023D550 - 0x0023D5BC (108 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023D550(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0023D550: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = (uint32_t)(int32_t)SMEM8(0x849C1F);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00234090(); /* call 0x00234090 */

loc_0023D560: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x22);
    edi = eax;
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x5FA87C;
    edi = edi + esi;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_0023D573: ;
    PUSH32(esp, 0x28);
    ebp = eax;
    PUSH32(esp, 0); sub_001FFB50(); /* call 0x001FFB50 */

loc_0023D57C: ;
    esi = eax;
    esp = esp + 4;
    (void)0; /* test esi, esi - flags set for next jcc */
    ebx = 1;
    if (TEST_Z(esi, esi)) { sub_0023D5BC(); return; } /* je: equal / zero */

loc_0023D58A: ;
    MEM32(esi + 4) = 0;
    eax = 0x23D510;
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = eax;
    eax = esi + 0x1C;
    MEM32(esi) = 0x5F77D4;
    MEM8(esi + 0x10) = LO8(ebx);
    PUSH32(esp, 0); sub_00060900(); /* call 0x00060900 */

loc_0023D5AD: ;
    MEM32(esi + 0x14) = ebp;
    MEM32(esi + 0x18) = edi;
    MEM32(esi + 0x24) = 0x10;
    g_seh_ebp = ebp; sub_0023D5BE(); return; /* tail jmp 0x0023D5BE */

}

/**
 * sub_0023D600
 * Original: 0x0023D600 - 0x0023D629 (41 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023D600(void)
{
    int _flags = 0; /* fallback flag var */

loc_0023D600: ;
    SET_LO8(eax, MEM8(0x849C1E));
    esp = esp - 0x300;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_0023D629(); return; } /* je: equal / zero */

loc_0023D60F: ;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_0003C1E0(); /* call 0x0003C1E0 */

loc_0023D616: ;
    eax = MEM32(eax + 0x10);
    eax = eax + 0x3C;
    eax = MEM32(eax);
    MEM8(eax + 0x30) = 1;
    esp = esp + 0x300;
    esp += 4; return; /* ret */

}

/**
 * sub_0023D740
 * Original: 0x0023D740 - 0x0023D76F (47 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023D740(void)
{
    int _flags = 0; /* fallback flag var */

loc_0023D740: ;
    eax = MEM32(0x849C20);
    if (TEST_NZ(eax, eax)) { sub_0023D76F(); return; } /* jne: not equal / not zero */

loc_0023D749: ;
    eax = MEM32(0x8629A0);
    if (TEST_NZ(eax, eax)) goto loc_0023D75C; /* jne: not equal / not zero */

loc_0023D752: ;
    ecx = 0; /* xor self */
    eax = 0; /* xor self */
    (void)0; /* test ecx, ecx - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(ecx, ecx)) ? 1 : 0); /* setne */
    esp += 4; return; /* ret */

loc_0023D75C: ;
    ecx = MEM32(0x8629A4);
    ecx = ecx - eax;
    ecx = (uint32_t)((int32_t)ecx >> 2);
    eax = 0; /* xor self */
    (void)0; /* test ecx, ecx - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(ecx, ecx)) ? 1 : 0); /* setne */
    esp += 4; return; /* ret */

}

/**
 * sub_0023D790
 * Original: 0x0023D790 - 0x0023D7EB (91 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023D790(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0023D790: ;
    eax = MEM32(0x849C20);
    if (TEST_NZ(eax, eax)) goto loc_0023D7C2; /* jne: not equal / not zero */

loc_0023D799: ;
    ecx = MEM32(0x8629A0);
    if (TEST_Z(ecx, ecx)) goto loc_0023D7E1; /* je: equal / zero */

loc_0023D7A3: ;
    eax = MEM32(0x8629A4);
    eax = eax - ecx;
    eax = (uint32_t)((int32_t)eax >> 2);
    if (TEST_Z(eax, eax)) goto loc_0023D7E1; /* je: equal / zero */

loc_0023D7B1: ;
    MEM32(0x8629A4) = MEM32(0x8629A4) - 4;
    eax = 0x8626F8;
    g_seh_ebp = ebp; sub_0023B2C0(); return; /* tail jmp 0x0023B2C0 */

loc_0023D7C2: ;
    ecx = MEM32(0x8629B0);
    if (TEST_Z(ecx, ecx)) goto loc_0023D7E1; /* je: equal / zero */

loc_0023D7CC: ;
    eax = MEM32(0x8629B4);
    eax = eax - ecx;
    eax = (uint32_t)((int32_t)eax >> 2);
    if (TEST_Z(eax, eax)) goto loc_0023D7E1; /* je: equal / zero */

loc_0023D7DA: ;
    MEM32(0x8629B4) = MEM32(0x8629B4) - 4;

loc_0023D7E1: ;
    eax = 0x8626F8;
    g_seh_ebp = ebp; sub_0023B2C0(); return; /* tail jmp 0x0023B2C0 */

}

/**
 * sub_0023D830
 * Original: 0x0023D830 - 0x0023D863 (51 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023D830(void)
{
    int _flags = 0; /* fallback flag var */

loc_0023D830: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x849C20);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    MEM32(esp + 4) = 4;
    edx = esp + 4;
    esi = 0x86299C;
    if (TEST_Z(eax, eax)) goto loc_0023D851; /* je: equal / zero */

loc_0023D84C: ;
    esi = 0x8629AC;

loc_0023D851: ;
    PUSH32(esp, 0); sub_00244D20(); /* call 0x00244D20 */

loc_0023D856: ;
    eax = 0x8626F8;
    PUSH32(esp, 0); sub_0023B2C0(); /* call 0x0023B2C0 */

loc_0023D860: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0023D870
 * Original: 0x0023D870 - 0x0023D8A3 (51 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023D870(void)
{
    int _flags = 0; /* fallback flag var */

loc_0023D870: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x849C20);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    MEM32(esp + 4) = 5;
    edx = esp + 4;
    esi = 0x86299C;
    if (TEST_Z(eax, eax)) goto loc_0023D891; /* je: equal / zero */

loc_0023D88C: ;
    esi = 0x8629AC;

loc_0023D891: ;
    PUSH32(esp, 0); sub_00244D20(); /* call 0x00244D20 */

loc_0023D896: ;
    eax = 0x8626F8;
    PUSH32(esp, 0); sub_0023B2C0(); /* call 0x0023B2C0 */

loc_0023D8A0: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0023D8B0
 * Original: 0x0023D8B0 - 0x0023D8E3 (51 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023D8B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0023D8B0: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x849C20);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    MEM32(esp + 4) = 6;
    edx = esp + 4;
    esi = 0x86299C;
    if (TEST_Z(eax, eax)) goto loc_0023D8D1; /* je: equal / zero */

loc_0023D8CC: ;
    esi = 0x8629AC;

loc_0023D8D1: ;
    PUSH32(esp, 0); sub_00244D20(); /* call 0x00244D20 */

loc_0023D8D6: ;
    eax = 0x8626F8;
    PUSH32(esp, 0); sub_0023B2C0(); /* call 0x0023B2C0 */

loc_0023D8E0: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0023D8F0
 * Original: 0x0023D8F0 - 0x0023D923 (51 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023D8F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0023D8F0: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x849C20);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    MEM32(esp + 4) = 1;
    edx = esp + 4;
    esi = 0x86299C;
    if (TEST_Z(eax, eax)) goto loc_0023D911; /* je: equal / zero */

loc_0023D90C: ;
    esi = 0x8629AC;

loc_0023D911: ;
    PUSH32(esp, 0); sub_00244D20(); /* call 0x00244D20 */

loc_0023D916: ;
    eax = 0x8626F8;
    PUSH32(esp, 0); sub_0023B2C0(); /* call 0x0023B2C0 */

loc_0023D920: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0023D930
 * Original: 0x0023D930 - 0x0023D963 (51 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023D930(void)
{
    int _flags = 0; /* fallback flag var */

loc_0023D930: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x849C20);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    MEM32(esp + 4) = 2;
    edx = esp + 4;
    esi = 0x86299C;
    if (TEST_Z(eax, eax)) goto loc_0023D951; /* je: equal / zero */

loc_0023D94C: ;
    esi = 0x8629AC;

loc_0023D951: ;
    PUSH32(esp, 0); sub_00244D20(); /* call 0x00244D20 */

loc_0023D956: ;
    eax = 0x8626F8;
    PUSH32(esp, 0); sub_0023B2C0(); /* call 0x0023B2C0 */

loc_0023D960: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0023D970
 * Original: 0x0023D970 - 0x0023DA85 (277 bytes, 80 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023D970(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0023D970: ;
    esp = esp - 0x5C;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    PUSH32(esp, esi);
    eax = 0x5F59F0;
    MEM32(esp + 0x30) = ebx;
    MEM32(esp + 0x34) = ebx;
    MEM32(esp + 0x38) = ebx;
    MEM32(esp + 0x20) = ebx;
    MEM32(esp + 0x24) = ebx;
    MEM32(esp + 0x28) = ebx;
    MEM32(esp + 0x10) = ebx;
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x18) = ebx;
    PUSH32(esp, 0); sub_0020DAB0(); /* call 0x0020DAB0 */

loc_0023D9A5: ;
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x5FA89C;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_0023D9B1: ;
    esi = eax;
    if (CMP_EQ(esi, ebx)) goto loc_0023D9F4; /* je: equal / zero */

loc_0023D9B7: ;
    PUSH32(esp, 0x84C318);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00470101(); /* call 0x00470101 */

loc_0023D9C2: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0023D9E4; /* je: equal / zero */

loc_0023D9C9: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x84C318);
    PUSH32(esp, 0x84C6B0);
    PUSH32(esp, 0); sub_0046FCD6(); /* call 0x0046FCD6 */

loc_0023D9DA: ;
    esp = esp + 0xC;
    MEM8(0x849930) = 1;

loc_0023D9E4: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, esi);
    PUSH32(esp, 0x84C318);
    PUSH32(esp, 0); sub_0046FCD6(); /* call 0x0046FCD6 */

loc_0023D9F1: ;
    esp = esp + 0xC;

loc_0023D9F4: ;
    if (CMP_NE(MEM32(0x84A19C), ebx)) goto loc_0023DA01; /* jne: not equal / not zero */

loc_0023D9FC: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0023DA01: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    PUSH32(esp, ebp);
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    PUSH32(esp, edi);
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    ebp = 0x10;
    if (CMP_EQ(esi, ebx)) goto loc_0023DA4E; /* je: equal / zero */

loc_0023DA2E: ;
    if (CMP_B(MEM32(esi + 0x80), ebp)) goto loc_0023DA4E; /* jb: below (unsigned <) */

loc_0023DA36: ;
    ecx = 4;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0023DA40: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0023DA47: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_0023DA6E; /* jne: not equal / not zero */

loc_0023DA4E: ;
    esi = MEM32(0x84A184);
    ecx = 4;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0023DA60: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0023DA67: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) { sub_0023DA85(); return; } /* je: equal / zero */

loc_0023DA6E: ;
    MEM32(eax + 4) = ebx;
    MEM32(eax) = 0x5FA188;
    MEM32(eax + 8) = 0x23B9C0;
    MEM8(eax + 0xC) = LO8(ebx);
    edi = eax;
    g_seh_ebp = ebp; sub_0023DA87(); return; /* tail jmp 0x0023DA87 */

}

/**
 * sub_0023E400
 * Original: 0x0023E400 - 0x0023E4DC (220 bytes, 75 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023E400(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0023E400: ;
    esp = esp - 0x18;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = 0; /* xor self */
    PUSH32(esp, edi);
    PUSH32(esp, 0x25);
    edi = esp + 0x18;
    esi = eax;
    MEM32(esp + 0x18) = ebp;
    MEM32(esp + 0x1C) = ebp;
    MEM32(esp + 0x20) = ebp;
    MEM32(esp + 0x24) = ebp;
    MEM32(esp + 0x28) = 6;
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_0023E42E: ;
    eax = MEM32(esi + 0x2A8);
    ebx = esi + 0x2A4;
    esp = esp + 4;
    if (CMP_EQ(eax, ebp)) goto loc_0023E452; /* je: equal / zero */

loc_0023E441: ;
    MEM32(esp + 0x10) = eax;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0023E44F: ;
    esp = esp + 4;

loc_0023E452: ;
    edi = esi + 0x2B4;
    MEM32(ebx + 4) = ebp;
    MEM32(ebx + 8) = ebp;
    MEM32(ebx + 0xC) = ebp;
    eax = MEM32(edi + 4);
    if (CMP_EQ(eax, ebp)) goto loc_0023E479; /* je: equal / zero */

loc_0023E468: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0023E476: ;
    esp = esp + 4;

loc_0023E479: ;
    MEM32(edi + 4) = ebp;
    MEM32(edi + 8) = ebp;
    MEM32(edi + 0xC) = ebp;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x295);
    eax = ecx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    esi = eax;
    esi = (uint32_t)((int32_t)esi >> 1);
    ecx = ecx - esi;
    MEM32(esp + 0x10) = ecx;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0023E49D: ;
    /* comiss xmm0, MEMF(0x648D10) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x648D10))) goto loc_0023E4B0; /* jbe: below or equal (unsigned <=) */

loc_0023E4A6: ;
    eax = esi;
    esi = MEM32(esp + 0x10);
    MEM32(esp + 0x10) = eax;

loc_0023E4B0: ;
    if (CMP_EQ(esi, ebp)) goto loc_0023E4C0; /* je: equal / zero */

loc_0023E4B4: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0023BBA0(); /* call 0x0023BBA0 */

loc_0023E4BA: ;
    esp = esp + 4;
    esi--;
    if ((esi != 0)) goto loc_0023E4B4; /* jne: not equal / not zero */

loc_0023E4C0: ;
    esi = MEM32(esp + 0x10);
    if (CMP_EQ(esi, ebp)) goto loc_0023E4D4; /* je: equal / zero */

loc_0023E4C8: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0023BBA0(); /* call 0x0023BBA0 */

loc_0023E4CE: ;
    esp = esp + 4;
    esi--;
    if ((esi != 0)) goto loc_0023E4C8; /* jne: not equal / not zero */

loc_0023E4D4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_0023E4E0
 * Original: 0x0023E4E0 - 0x0023E562 (130 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023E4E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0023E4E0: ;
    eax = MEM32(0x8629A0);
    esp = esp - 0x10;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    if (CMP_EQ(eax, esi)) goto loc_0023E500; /* je: equal / zero */

loc_0023E4EF: ;
    MEM32(esp + 4) = eax;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0023E4FD: ;
    esp = esp + 4;

loc_0023E500: ;
    eax = MEM32(0x8629B0);
    (void)0; /* cmp eax, esi - flags set for next jcc */
    MEM32(0x8629A0) = esi;
    MEM32(0x8629A4) = esi;
    MEM32(0x8629A8) = esi;
    if (CMP_EQ(eax, esi)) goto loc_0023E52C; /* je: equal / zero */

loc_0023E51B: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    MEM32(esp + 8) = eax;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0023E529: ;
    esp = esp + 4;

loc_0023E52C: ;
    ecx = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, ebx);
    ebx = esp + 0xC;
    MEM32(0x8629B0) = esi;
    MEM32(0x8629B4) = esi;
    MEM32(0x8629B8) = esi;
    PUSH32(esp, 0); sub_00233870(); /* call 0x00233870 */

loc_0023E550: ;
    (void)0; /* cmp MEM32(esp + 0x24), esi - flags set for next jcc */
    POP32(esp, ebx);
    eax = esp + 8;
    if (CMP_NE(MEM32(esp + 0x24), esi)) { sub_0023E562(); return; } /* jne: not equal / not zero */

loc_0023E55B: ;
    PUSH32(esp, 0x5FA724);
    g_seh_ebp = ebp; sub_0023E567(); return; /* tail jmp 0x0023E567 */

}

/**
 * sub_0023E5D0
 * Original: 0x0023E5D0 - 0x0023E64D (125 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023E5D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0023E5D0: ;
    esp = esp - 0x2DC;
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(0x776BE0);
    if (TEST_Z(eax, eax)) goto loc_0023E645; /* je: equal / zero */

loc_0023E5E2: ;
    if (CMP_B(edi, 8)) goto loc_0023E5E9; /* jb: below (unsigned <) */

loc_0023E5E7: ;
    edi = 0; /* xor self */

loc_0023E5E9: ;
    PUSH32(esp, esi);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = 0x5FA6C0;
    eax = 0x8629E0;
    PUSH32(esp, 0); sub_001F51A0(); /* call 0x001F51A0 */

loc_0023E603: ;
    esp = esp + 8;
    PUSH32(esp, 0xF);
    eax = esp + 0x14;
    PUSH32(esp, 0); sub_0023B000(); /* call 0x0023B000 */

loc_0023E611: ;
    esi = 0x8626F8;
    PUSH32(esp, 0); sub_0023ADF0(); /* call 0x0023ADF0 */

loc_0023E61B: ;
    esi = esp + 0x10;
    PUSH32(esp, 0); sub_0023B420(); /* call 0x0023B420 */

loc_0023E624: ;
    edx = MEM32(edi * 4 + 0x6BD938);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0023E4E0(); /* call 0x0023E4E0 */

loc_0023E638: ;
    esp = esp + 0xC;
    eax = esp + 8;
    PUSH32(esp, 0); sub_001F4FC0(); /* call 0x001F4FC0 */

loc_0023E644: ;
    POP32(esp, esi);

loc_0023E645: ;
    POP32(esp, edi);
    esp = esp + 0x2DC;
    esp += 4; return; /* ret */

}

/**
 * sub_0023E650
 * Original: 0x0023E650 - 0x0023E658 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023E650(void)
{

loc_0023E650: ;
    MEM8(0x86298E) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0023E660
 * Original: 0x0023E660 - 0x0023E668 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023E660(void)
{

loc_0023E660: ;
    MEM8(0x86298E) = 2;
    esp += 4; return; /* ret */

}

/**
 * sub_0023E670
 * Original: 0x0023E670 - 0x0023E678 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023E670(void)
{

loc_0023E670: ;
    MEM8(0x86298E) = 4;
    esp += 4; return; /* ret */

}

/**
 * sub_0023E680
 * Original: 0x0023E680 - 0x0023E722 (162 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023E680(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0023E680: ;
    esp = esp - 0x24;
    eax = MEM32(0x84A19C);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    MEM32(esp + 0x10) = ebx;
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x18) = ebx;
    if (CMP_NE(eax, ebx)) goto loc_0023E6A1; /* jne: not equal / not zero */

loc_0023E69C: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0023E6A1: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    PUSH32(esp, edi);
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (CMP_EQ(esi, ebx)) goto loc_0023E6EA; /* je: equal / zero */

loc_0023E6C8: ;
    if (CMP_B(MEM32(esi + 0x80), 0x10)) goto loc_0023E6EA; /* jb: below (unsigned <) */

loc_0023E6D1: ;
    ecx = 4;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0023E6DB: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0023E6E3: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_0023E70B; /* jne: not equal / not zero */

loc_0023E6EA: ;
    esi = MEM32(0x84A184);
    ecx = 4;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0023E6FC: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0023E704: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) { sub_0023E722(); return; } /* je: equal / zero */

loc_0023E70B: ;
    MEM32(eax + 4) = ebx;
    MEM32(eax) = 0x5FA188;
    MEM32(eax + 8) = 0x23E650;
    MEM8(eax + 0xC) = LO8(ebx);
    edi = eax;
    g_seh_ebp = ebp; sub_0023E724(); return; /* tail jmp 0x0023E724 */

}

/**
 * sub_0023EAD0
 * Original: 0x0023EAD0 - 0x0023EAE6 (22 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023EAD0(void)
{

loc_0023EAD0: ;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_001C74F0(); /* call 0x001C74F0 */

loc_0023EAD7: ;
    MEM32(eax + 0x20) = 0;
    MEM8(0x849C24) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0023EAF0
 * Original: 0x0023EAF0 - 0x0023EB06 (22 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023EAF0(void)
{

loc_0023EAF0: ;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_001C74F0(); /* call 0x001C74F0 */

loc_0023EAF7: ;
    ecx = 1;
    MEM32(eax + 0x20) = ecx;
    MEM8(0x849C24) = LO8(ecx);
    esp += 4; return; /* ret */

}
