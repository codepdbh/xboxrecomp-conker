/**
 * Burnout 3 - Recompiled code chunk 12
 * Functions: 250 (0x0010E0D0 - 0x00122540)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_0010E0D0
 * Original: 0x0010E0D0 - 0x0010E0F3 (35 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010E0D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010E0D0: ;
    ecx = MEM32(esp + 0x24);
    eax = 0; /* xor self */
    SET_LO8(eax, LO8(ecx));
    SET_LO8(eax, LO8(eax) - 0x40);
    SET_LO8(edx, LO8(eax));
    esp = esp - 0x3C;
    SET_LO8(edx, LO8(edx) & 0xC0);
    (void)0; /* test LO8(eax), 0x40 - flags set for next jcc */
    PUSH32(esp, esi);
    if (TEST_Z(LO8(eax), 0x40)) { sub_0010E0F3(); return; } /* je: equal / zero */

loc_0010E0E7: ;
    eax = eax & 0x3F;
    esi = 0x40;
    esi = esi - eax;
    g_seh_ebp = ebp; sub_0010E0F8(); return; /* tail jmp 0x0010E0F8 */

}

/**
 * sub_0010E330
 * Original: 0x0010E330 - 0x0010E35F (47 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010E330(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010E330: ;
    PUSH32(esp, ecx);
    eax = ZX8(LO8(eax));
    eax--;
    PUSH32(esp, esi);
    esi = ecx;
    if ((eax == 0)) goto loc_0010E34E; /* je: equal / zero */

loc_0010E33A: ;
    eax--;
    if ((eax != 0)) { sub_0010E35F(); return; } /* jne: not equal / not zero */

loc_0010E33D: ;
    PUSH32(esp, 0x5F3DA8);
    eax = edi;
    PUSH32(esp, 0); sub_002F77D0(); /* call 0x002F77D0 */

loc_0010E349: ;
    esp = esp + 4;
    g_seh_ebp = ebp; sub_0010E363(); return; /* tail jmp 0x0010E363 */

loc_0010E34E: ;
    PUSH32(esp, 0x5F3DB4);
    eax = edi;
    PUSH32(esp, 0); sub_002F77D0(); /* call 0x002F77D0 */

loc_0010E35A: ;
    esp = esp + 4;
    g_seh_ebp = ebp; sub_0010E363(); return; /* tail jmp 0x0010E363 */

}

/**
 * sub_0010E390
 * Original: 0x0010E390 - 0x0010E520 (400 bytes, 102 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010E390(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm5, xmm6, xmm7;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0010E390: ;
    esp = esp - 0x30;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x38);
    eax = MEM32(edi + 0x3C8);
    if (TEST_Z(eax, eax)) goto loc_0010E51B; /* je: equal / zero */

loc_0010E3A6: ;
    xmm0 = MEMF(edi + 0x264); /* movss */
    xmm0 = xmm0 + MEMF(edi + 0x260); /* addss */
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    SET_LO8(eax, MEM8(esp + 0x3C));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = esp + 0x30;
    MEMF(esp + 0x40) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0010E330(); /* call 0x0010E330 */

loc_0010E3D3: ;
    xmm5 = MEMF(esp + 0x40); /* movss */
    xmm0 = xmm5; /* movaps */
    xmm0 = xmm0 * MEMF(0x648D18); /* mulss */
    xmm6 = xmm5; /* movaps */
    xmm6 = xmm6 * MEMF(0x6493A8); /* mulss */
    xmm7 = xmm5; /* movaps */
    xmm7 = xmm7 * MEMF(0x648F8C); /* mulss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEMF(esp + 0x14) = xmm6; /* movss */
    MEMF(esp + 0x10) = xmm7; /* movss */
    MEM32(esp + 0xC) = 0x1E;
    edi = 0xB;
    SET_LO8(ebx, 0x46);
    goto loc_0010E430;

loc_0010E41D: ;
    xmm5 = MEMF(esp + 0x40); /* movss */
    xmm7 = MEMF(esp + 0x10); /* movss */
    xmm6 = MEMF(esp + 0x14); /* movss */
    /* nop */

loc_0010E430: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0010E435: ;
    xmm0 = xmm0 * MEMF(0x648D30); /* mulss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    /* FPU: fsincos  */
    MEMF(esp + 0x20) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */
    xmm1 = MEMF(esp + 0x1C); /* movss */
    xmm0 = MEMF(0x648CE4); /* movss */
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    xmm1 = xmm1 * xmm5; /* mulss */
    xmm1 = xmm1 * xmm0; /* mulss */
    PUSH32(esp, 1);
    MEMF(esp + 0x38) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x34); /* movss */
    PUSH32(esp, 0);
    xmm1 = xmm1 * xmm5; /* mulss */
    PUSH32(esp, 0);
    xmm1 = xmm1 * xmm0; /* mulss */
    PUSH32(esp, 0);
    MEMF(esp + 0x4C) = xmm1; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0010E499: ;
    PUSH32(esp, ecx);
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm0 = xmm0 + xmm7; /* addss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0010E4AC: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = edi;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + 0x12);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0010E4BA: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 6;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = esp + 0x4C;
    ecx = esp + 0x58;
    edx = edx + 5;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0); sub_00141FC0(); /* call 0x00141FC0 */

loc_0010E4D7: ;
    esi = eax;
    esp = esp + 0x34;
    if (TEST_Z(esi, esi)) goto loc_0010E50F; /* je: equal / zero */

loc_0010E4E0: ;
    MEM32(esi + 0x3C) = 4;
    MEM8(esi + 0x38) = LO8(ebx);
    MEM8(esi + 0x39) = LO8(ebx);
    MEM8(esi + 0x3A) = 0x69;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0010E4F6: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 7;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM16(esi + 0x5C) = 0x16;
    MEM16(esi + 0x5E) = LO16(edi);
    edx = edx + 0x16;
    MEM16(esi + 0x2C) = LO16(edx);

loc_0010E50F: ;
    MEM32(esp + 0xC) = MEM32(esp + 0xC) - 1;
    if ((MEM32(esp + 0xC) != 0)) goto loc_0010E41D; /* jne: not equal / not zero */

loc_0010E519: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0010E51B: ;
    POP32(esp, edi);
    esp = esp + 0x30;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0010E640
 * Original: 0x0010E640 - 0x0010E660 (32 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010E640(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010E640: ;
    ecx = MEM32(edx + 0x78);
    esp = esp - 0xC;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    MEM32(edi) = ecx;
    xmm0 = MEMF(edx + 0x294); /* movss */
    /* comiss xmm0, MEMF(0x6499B8) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x6499B8))) { sub_0010E660(); return; } /* jbe: below or equal (unsigned <=) */

loc_0010E65E: ;
    g_seh_ebp = ebp; sub_0010E665(); return; /* tail jmp 0x0010E665 */

}

/**
 * sub_0010E6E0
 * Original: 0x0010E6E0 - 0x0010E82F (335 bytes, 98 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010E6E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0010E6E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x104;
    edx = MEM32(ebp + 8);
    eax = MEM32(edx + 0x3C8);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(eax, eax)) goto loc_0010E828; /* je: equal / zero */

loc_0010E700: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    eax = esp + 0x64;
    PUSH32(esp, 0); sub_0010E640(); /* call 0x0010E640 */

loc_0010E70E: ;
    xmm0 = MEMF(0x64A9EC); /* movss */
    PUSH32(esp, 0xF);
    PUSH32(esp, 0xC);
    SET_LO8(ebx, LO8(eax));
    PUSH32(esp, 0x3A03126F);
    PUSH32(esp, 0x44FA0000);
    eax = esp + 0x28;
    PUSH32(esp, 0); sub_0019B600(); /* call 0x0019B600 */

loc_0010E72F: ;
    PUSH32(esp, 5);
    esi = 0x4022;
    PUSH32(esp, 0); sub_00110990(); /* call 0x00110990 */

loc_0010E73B: ;
    esp = esp + 0x18;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_0010E828; /* je: equal / zero */

loc_0010E746: ;
    ebx = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0x2C;
    PUSH32(esp, 0); sub_004288F5(); /* call 0x004288F5 */

loc_0010E75E: ;
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0x5F3DC0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001DD750(); /* call 0x001DD750 */

loc_0010E773: ;
    esp = esp + 0x10;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0010E828; /* jne: not equal / not zero */

loc_0010E77E: ;
    ecx = MEM32(0x84A148);
    edx = MEM32(0x8470DC);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x770);
    eax = (int32_t)MEMF(esp + 0x1C); /* cvttss2si */
    xmm0 = MEMF(ecx + edx + 0x3BC); /* movss */
    ecx = (int32_t)MEMF(esp + 0x14); /* cvttss2si */
    xmm0 = xmm0 * MEMF(0x649220); /* mulss */
    edi = (int32_t)MEMF(esp + 0x18); /* cvttss2si */
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    PUSH32(esp, 0x12);
    PUSH32(esp, 0x19);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edi = edi + 6;
    PUSH32(esp, 0xFFFFFFFFu);
    SET_LO8(eax, LO8(eax) | 0xFF);
    esi = (int32_t)xmm0; /* cvttss2si */
    PUSH32(esp, 0); sub_000DF0E0(); /* call 0x000DF0E0 */

loc_0010E7D0: ;
    esp = esp + 0x1C;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 5);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0010E7E5: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xB;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edi = esi + -60;
    esi = esi + 0x3C;
    edx = edx + 0x1E;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0010E7FD: ;
    xmm0 = xmm0 * MEMF(0x648F08); /* mulss */
    xmm0 = xmm0 + MEMF(0x6490B8); /* addss */
    edx = MEM32(esp + 0x34);
    eax = MEM32(esp + 0x30);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = edi;
    PUSH32(esp, 0); sub_00112C50(); /* call 0x00112C50 */

loc_0010E825: ;
    esp = esp + 0x2C;

loc_0010E828: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0010E830
 * Original: 0x0010E830 - 0x0010E86E (62 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010E830(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0010E830: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x54;
    (void)0; /* cmp LO8(eax), 1 - flags set for next jcc */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    esi = ecx;
    if (CMP_EQ(LO8(eax), 1)) goto loc_0010E855; /* je: equal / zero */

loc_0010E848: ;
    if (CMP_EQ(LO8(eax), 2)) { sub_0010E86E(); return; } /* je: equal / zero */

loc_0010E84C: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0010E855: ;
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x5F3DFC);
    PUSH32(esp, 0); sub_002F7810(); /* call 0x002F7810 */

loc_0010E864: ;
    esp = esp + 8;
    eax = 0x595C90;
    g_seh_ebp = ebp; sub_0010E885(); return; /* tail jmp 0x0010E885 */

}

/**
 * sub_0010E900
 * Original: 0x0010E900 - 0x0010ED7F (1151 bytes, 277 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010E900(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    float xmm0, xmm1, xmm5, xmm6, xmm7;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0010E900: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x234;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ecx + 0x3C8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    (void)0; /* cmp eax, esi - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_EQ(eax, esi)) goto loc_0010ED78; /* je: equal / zero */

loc_0010E922: ;
    ebx = MEM32(ebp + 0xC);
    eax = esp + 0x190;
    PUSH32(esp, eax);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    SET_LO8(eax, LO8(ebx));
    PUSH32(esp, 0); sub_0010E830(); /* call 0x0010E830 */

loc_0010E939: ;
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0010ED78; /* je: equal / zero */

loc_0010E944: ;
    edx = MEM32(0x7FA200);
    edi = MEM32(0x8470DC);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x770);
    PUSH32(esp, 1);
    edx = edx + edi;
    ecx = 7;
    PUSH32(esp, 0); sub_00047FA0(); /* call 0x00047FA0 */

loc_0010E964: ;
    eax = MEM32(esp + 0x24);
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x1C);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0x3C;
    PUSH32(esp, 0); sub_004288F5(); /* call 0x004288F5 */

loc_0010E97F: ;
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0x5F3DDC);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001DD750(); /* call 0x001DD750 */

loc_0010E994: ;
    esp = esp + 0x10;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0010ED78; /* jne: not equal / not zero */

loc_0010E99F: ;
    xmm0 = MEMF(0x64A244); /* movss */
    PUSH32(esp, 0xF);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x39AEC33E);
    PUSH32(esp, 0x453B8000);
    eax = esp + 0x28;
    PUSH32(esp, 0); sub_0019B600(); /* call 0x0019B600 */

loc_0010E9BE: ;
    xmm0 = MEMF(esp + 0x30); /* movss */
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    eax = esp + 0x38;
    ecx = esp + 0x40;
    PUSH32(esp, 0); sub_00555A40(); /* call 0x00555A40 */

loc_0010E9D6: ;
    fp_push(MEMF(esp + 0x28)); /* fld float */
    esp = esp + 0x14;
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0010E9E2: ;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    MEM8(esp + 0x12) = LO8(eax);
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0010E9EF: ;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    MEM8(esp + 0x13) = LO8(eax);
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0010E9FC: ;
    MEM8(esp + 0x11) = LO8(eax);
    eax = esp + 0x78;
    PUSH32(esp, 0); sub_000AF180(); /* call 0x000AF180 */

loc_0010EA09: ;
    SET_LO16(edx, ZX8(MEM8(esp + 0x11)));
    SET_LO16(eax, ZX8(MEM8(esp + 0x12)));
    SET_LO16(ecx, ZX8(MEM8(esp + 0x13)));
    xmm6 = 0.0f; /* xorps self = zero */
    MEM16(esp + 0x34) = LO16(edx);
    MEM16(esp + 0x3E) = LO16(edx);
    MEM16(esp + 0x48) = LO16(edx);
    MEM16(esp + 0x52) = LO16(edx);
    edx = ebx;
    edx--;
    edi = 0xFF;
    edx = (uint32_t)(-(int32_t)edx);
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    MEM16(esp + 0x36) = LO16(edi);
    MEM16(esp + 0x40) = LO16(edi);
    MEM16(esp + 0x4A) = LO16(edi);
    MEM16(esp + 0x54) = LO16(edi);
    edi = 2;
    edx = edx + 0x4C;
    MEMF(esp + 0xC4) = xmm6; /* movss */
    MEM32(esp + 0xC0) = 0x303;
    MEM16(esp + 0x30) = LO16(eax);
    MEM16(esp + 0x32) = LO16(ecx);
    MEM16(esp + 0x38) = LO16(esi);
    MEM16(esp + 0x3A) = LO16(eax);
    MEM16(esp + 0x3C) = LO16(ecx);
    MEM16(esp + 0x42) = LO16(esi);
    MEM16(esp + 0x44) = LO16(eax);
    MEM16(esp + 0x46) = LO16(ecx);
    MEM16(esp + 0x4C) = LO16(esi);
    MEM16(esp + 0x4E) = LO16(eax);
    MEM16(esp + 0x50) = LO16(ecx);
    MEM16(esp + 0x56) = LO16(esi);
    MEM8(esp + 0xC8) = 1;
    MEM32(esp + 0xCC) = edx;
    MEM32(esp + 0xD8) = edi;
    MEM32(esp + 0xE0) = edi;
    MEM32(esp + 0xE4) = esi;
    MEM32(esp + 0xE8) = 4;
    MEM32(esp + 0xF0) = esi;
    MEM32(esp + 0xF4) = edi;
    MEM16(esp + 0x7A) = LO16(edi);
    MEMF(esp + 0xD0) = xmm6; /* movss */
    MEMF(esp + 0xD4) = xmm6; /* movss */
    MEM32(esp + 0xF8) = esi;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0010EB0A: ;
    xmm7 = MEMF(0x648D2C); /* movss */
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 * MEMF(0x648F08); /* mulss */
    xmm0 = MEMF(esp + 0x18); /* movss */
    xmm5 = xmm5 + MEMF(0x64A9E8); /* addss */
    xmm5 = xmm5 * xmm7; /* mulss */
    MEMF(esp + 0x84) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x190); /* movss */
    MEMF(esp + 0x80) = xmm5; /* movss */
    MEMF(esp + 0x7C) = xmm5; /* movss */
    xmm0 = xmm0 + MEMF(0x648CE4); /* addss */
    MEMF(esp + 0x88) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x20); /* movss */
    MEMF(esp + 0x8C) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x90) = xmm6; /* movss */
    MEMF(esp + 0x94) = xmm6; /* movss */
    MEMF(esp + 0x98) = xmm6; /* movss */
    MEMF(esp + 0x9C) = xmm0; /* movss */
    MEMF(esp + 0xA0) = xmm0; /* movss */
    MEMF(esp + 0xA4) = xmm0; /* movss */
    MEM32(esp + 0xA8) = 0x40000000;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0010EBBE: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x33;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM8(esp + 0xBC) = 0xFF;
    MEM8(esp + 0xBD) = 0xFF;
    MEM8(esp + 0xBE) = 0xFF;
    SET_LO8(edx, LO8(edx) - 0x60);
    MEM8(esp + 0xBF) = LO8(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0010EBED: ;
    eax = eax & 0x80000003u;
    if (((int32_t)eax >= 0)) goto loc_0010EBF9; /* jns: not sign (positive) */

loc_0010EBF4: ;
    eax--;
    eax = eax | 0xFFFFFFFCu;
    eax++;

loc_0010EBF9: ;
    eax = eax + 7;
    MEM16(esp + 0x24) = LO16(eax);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0010EC06: ;
    edx = MEM32(ebp + 8);
    SET_LO16(eax, ZX8(MEM8(edx + 0x175)));
    PUSH32(esp, 0xFF);
    PUSH32(esp, 8);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    ebx--;
    ebx = (uint32_t)(-(int32_t)ebx);
    ebx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ecx = esp + 0x1B4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x43FA0000);
    PUSH32(esp, 0x43FA0000);
    ebx = ebx & 0x10;
    ebx = ebx + 0xFFFFFFF8u;
    eax = eax - ebx;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    xmm1 = xmm0; /* movaps */
    xmm0 = MEMF(0x648E5C); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    PUSH32(esp, 0x17);
    xmm1 = xmm1 + xmm0; /* addss */
    edx = esp + 0xA8;
    xmm1 = xmm1 * xmm5; /* mulss */
    PUSH32(esp, esi);
    xmm1 = xmm1 * xmm7; /* mulss */
    PUSH32(esp, edx);
    eax = esp + 0x68;
    MEMF(esp + 0x60) = xmm1; /* movss */
    PUSH32(esp, 0); sub_00150820(); /* call 0x00150820 */

loc_0010EC73: ;
    ebx = eax;
    esp = esp + 0x38;
    if (CMP_EQ(ebx, esi)) goto loc_0010ECAE; /* je: equal / zero */

loc_0010EC7C: ;
    eax = MEM32(esp + 0x24);
    ecx = MEM32(esp + 0x28);
    MEM32(ebx + 0x328) = eax;
    PUSH32(esp, edi);
    edi = MEM32(0x849390);
    eax = ebx;
    MEM32(ebx + 0x32C) = ecx;
    PUSH32(esp, 0); sub_001376A0(); /* call 0x001376A0 */

loc_0010EC9E: ;
    esp = esp + 4;
    if (TEST_NZ(eax, eax)) goto loc_0010ECAE; /* jne: not equal / not zero */

loc_0010ECA5: ;
    esi = ebx;
    PUSH32(esp, 0); sub_000DADD0(); /* call 0x000DADD0 */

loc_0010ECAC: ;
    esi = 0; /* xor self */

loc_0010ECAE: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0010ECB3: ;
    eax = eax & 0x8000000Fu;
    if (((int32_t)eax >= 0)) goto loc_0010ECBF; /* jns: not sign (positive) */

loc_0010ECBA: ;
    eax--;
    eax = eax | 0xFFFFFFF0u;
    eax++;

loc_0010ECBF: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    eax = eax + 0xA;
    PUSH32(esp, 0xE);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0010ECD3: ;
    xmm0 = xmm0 * MEMF(0x64A2FC); /* mulss */
    xmm0 = xmm0 + MEMF(0x6493A8); /* addss */
    edx = MEM32(esp + 0x3C);
    eax = MEM32(esp + 0x38);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x38);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = 0xFF;
    PUSH32(esp, 0); sub_00112C50(); /* call 0x00112C50 */

loc_0010ED02: ;
    esp = esp + 0x2C;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0010ED0A: ;
    eax = eax & 0x8000000Fu;
    if (((int32_t)eax >= 0)) goto loc_0010ED16; /* jns: not sign (positive) */

loc_0010ED11: ;
    eax--;
    eax = eax | 0xFFFFFFF0u;
    eax++;

loc_0010ED16: ;
    SET_LO8(ecx, MEM8(esp + 0x13));
    SET_LO8(edx, MEM8(esp + 0x12));
    PUSH32(esp, 0xFF);
    MEM8(esp + 0x19) = LO8(ecx);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    eax = eax + 5;
    PUSH32(esp, 0xF);
    MEM8(esp + 0x28) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x25));
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    MEM8(esp + 0x32) = LO8(edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0010ED46: ;
    xmm0 = xmm0 * MEMF(0x64A2FC); /* mulss */
    xmm0 = xmm0 + MEMF(0x6490B4); /* addss */
    edx = MEM32(esp + 0x3C);
    eax = MEM32(esp + 0x38);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x38);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = 0xFF;
    PUSH32(esp, 0); sub_00112C50(); /* call 0x00112C50 */

loc_0010ED75: ;
    esp = esp + 0x2C;

loc_0010ED78: ;
    POP32(esp, edi);
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
 * sub_0010ED80
 * Original: 0x0010ED80 - 0x0010EDA5 (37 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010ED80(void)
{
    int _flags = 0; /* fallback flag var */

loc_0010ED80: ;
    ecx = MEM32(esp + 4);
    SET_LO16(eax, MEM16(ecx + 0x38));
    if (CMP_GE(LO16(eax), 0x20)) goto loc_0010ED9F; /* jge: greater or equal (signed >=) */

loc_0010ED8E: ;
    edx = ZX8(MEM8(ecx + 0x4C));
    eax = SX16(LO16(eax));
    eax = eax << 3;
    if (CMP_LE(edx, eax)) goto loc_0010ED9F; /* jle: less or equal (signed <=) */

loc_0010ED9C: ;
    MEM8(ecx + 0x4C) = LO8(eax);

loc_0010ED9F: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0010EDB0
 * Original: 0x0010EDB0 - 0x0010EFE6 (566 bytes, 111 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010EDB0(void)
{
    float xmm0, xmm1, xmm2, xmm5, xmm6, xmm7;

loc_0010EDB0: ;
    esp = esp - 0xD4;
    xmm0 = MEMF(esp + 0xE0); /* movss */
    xmm1 = 0.0f; /* xorps self = zero */
    xmm2 = MEMF(0x648E64); /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xE4); /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xE8); /* movss */
    PUSH32(esp, ebx);
    MEMF(esp + 0x40) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    PUSH32(esp, edi);
    MEMF(esp + 0x30) = xmm0; /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    MEM32(esp + 0x70) = 0x29E8;
    MEMF(esp + 0x18) = xmm1; /* movss */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    MEMF(esp + 0x20) = xmm1; /* movss */
    MEMF(esp + 0xC) = xmm2; /* movss */
    MEMF(esp + 0x64) = xmm1; /* movss */
    MEMF(esp + 8) = xmm0; /* movss */
    MEM32(esp + 0x78) = 0x20;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0010EE43: ;
    xmm6 = MEMF(0x648D80); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm0 = MEMF(0x5A005C); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    PUSH32(esp, ecx);
    xmm1 = xmm1 + xmm0; /* addss */
    xmm1 = xmm1 * xmm6; /* mulss */
    MEMF(esp) = xmm1; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0010EE6D: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x24;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edi = esp + 0x58;
    edx = edx - 0x37;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x108);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00110510(); /* call 0x00110510 */

loc_0010EE8A: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0010EE8F: ;
    xmm5 = MEMF(0x64925C); /* movss */
    xmm7 = MEMF(0x64A64C); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 - xmm7; /* subss */
    xmm0 = xmm0 * xmm6; /* mulss */
    MEMF(esp + 0x6C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0010EEB6: ;
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 - xmm7; /* subss */
    xmm0 = xmm0 * xmm6; /* mulss */
    MEMF(esp + 0x74) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0010EECD: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x21;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = edx + 0x20;
    MEM32(esp + 0x80) = edx;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0010EEE4: ;
    xmm0 = xmm0 * MEMF(0x64ADC0); /* mulss */
    xmm0 = xmm0 - MEMF(0x64ADBC); /* subss */
    xmm6 = MEMF(0x648D2C); /* movss */
    xmm0 = xmm0 * xmm6; /* mulss */
    MEMF(esp + 0x78) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0010EF0B: ;
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 + MEMF(0x64A4E4); /* addss */
    ebx = 0; /* xor self */
    xmm0 = xmm0 * xmm6; /* mulss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEM8(esp + 0x88) = LO8(ebx);
    MEM32(esp + 0x8C) = ebx;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0010EF3C: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x65;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM32(esp + 0x94) = 0x157100;
    SET_LO8(edx, LO8(edx) - LO8(ecx));
    MEM8(esp + 0x90) = LO8(edx);
    edx = MEM32(esp + 0x124);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x7F);
    PUSH32(esp, 3);
    eax = esp + 0x2C;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    MEM32(esp + 0xB8) = ebx;
    MEM32(esp + 0xBC) = ebx;
    MEM32(esp + 0xC0) = ebx;
    MEM32(esp + 0xC4) = ebx;
    MEM32(esp + 0xC8) = ebx;
    MEM32(esp + 0xCC) = 0x13E6E0;
    MEM32(esp + 0xD0) = 0x13E8F0;
    MEM8(esp + 0xD8) = 2;
    MEM32(esp + 0xDC) = ebx;
    MEM8(esp + 0xE0) = LO8(ebx);
    MEM16(esp + 0xE2) = 0x20;
    MEM16(esp + 0xE4) = 7;
    PUSH32(esp, 0); sub_0013D5D0(); /* call 0x0013D5D0 */

loc_0010EFD5: ;
    esp = esp + 0x2C;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0xD4;
    esp += 4; return; /* ret */

}

/**
 * sub_0010EFF0
 * Original: 0x0010EFF0 - 0x0010F05F (111 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010EFF0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_0010EFF0: ;
    eax = MEM32(esp + 4);
    SET_LO16(ecx, MEM16(0x7FA20C));
    MEM16(eax + 0x328) = MEM16(eax + 0x328) - LO16(ecx);
    if (CMP_LE(MEM16(eax + 0x328), 0)) goto loc_0010F038; /* jle: less or equal (signed <=) */

loc_0010F00C: ;
    xmm0 = MEMF(eax + 0x32C); /* movss */
    xmm0 = xmm0 * MEMF(0x7FA24C); /* mulss */
    xmm1 = MEMF(eax + 0x38); /* movss */
    xmm1 = xmm1 + xmm0; /* addss */
    MEMF(eax + 0x38) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x3C); /* movss */
    xmm1 = xmm1 + xmm0; /* addss */
    MEMF(eax + 0x3C) = xmm1; /* movss */

loc_0010F038: ;
    if (TEST_Z(MEM8(eax + 0x64), 1)) goto loc_0010F059; /* je: equal / zero */

loc_0010F03E: ;
    SET_LO16(ecx, MEM16(eax + 0x36));
    if (CMP_GE(LO16(ecx), 0x20)) goto loc_0010F059; /* jge: greater or equal (signed >=) */

loc_0010F048: ;
    edx = ZX8(MEM8(eax + 0x7B));
    ecx = SX16(LO16(ecx));
    ecx = ecx << 3;
    if (CMP_LE(edx, ecx)) goto loc_0010F059; /* jle: less or equal (signed <=) */

loc_0010F056: ;
    MEM8(eax + 0x7B) = LO8(ecx);

loc_0010F059: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0010F060
 * Original: 0x0010F060 - 0x0010F223 (451 bytes, 93 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010F060(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm6;

loc_0010F060: ;
    esp = esp - 0x80;
    PUSH32(esp, edi);
    MEM32(esp + 0x30) = 0x303;
    MEM32(esp + 0x34) = 0x29;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0010F07C: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x29;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    xmm6 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0xC) = xmm6; /* movss */
    MEMF(esp + 0x10) = xmm6; /* movss */
    MEM8(esp + 0x14) = 0xB0;
    MEM8(esp + 0x15) = 0xA0;
    MEM8(esp + 0x16) = 0x2A;
    edx = edx + 0x28;
    MEM16(esp + 8) = LO16(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0010F0AF: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x9D;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + 0x64);
    MEM8(esp + 0x17) = LO8(edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0010F0C3: ;
    xmm0 = xmm0 * MEMF(0x64A330); /* mulss */
    xmm0 = xmm0 + MEMF(0x64925C); /* addss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x90); /* movss */
    MEMF(esp + 0x4C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x94); /* movss */
    MEMF(esp + 0x50) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x98); /* movss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0010F111: ;
    xmm0 = xmm0 * MEMF(0x5A0060); /* mulss */
    xmm0 = xmm0 + MEMF(0x59D944); /* addss */
    xmm0 = xmm0 * MEMF(0x648E54); /* mulss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0010F134: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x1A;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edi = esp + 0x68;
    edx = edx - 0x19;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xB0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00110510(); /* call 0x00110510 */

loc_0010F151: ;
    esp = esp + 0xC;
    MEMF(esp + 0x70) = xmm6; /* movss */
    MEM32(esp + 0x74) = 0xE05;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0010F167: ;
    (void)0; /* test LO8(eax), 1 - flags set for next jcc */
    POP32(esp, edi);
    if (TEST_Z(LO8(eax), 1)) goto loc_0010F174; /* je: equal / zero */

loc_0010F16C: ;
    MEM32(esp + 0x70) = 0xE45;

loc_0010F174: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0010F179: ;
    if (TEST_Z(LO8(eax), 1)) goto loc_0010F185; /* je: equal / zero */

loc_0010F17D: ;
    MEM32(esp + 0x70) = MEM32(esp + 0x70) | 0x80;

loc_0010F185: ;
    xmm0 = MEMF(0x649E48); /* movss */
    eax = 2;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x24) = eax;
    eax = MEM32(esp + 0xBC);
    PUSH32(esp, eax);
    PUSH32(esp, 4);
    PUSH32(esp, 0);
    ecx = esp + 0x10;
    MEMF(esp + 0x48) = xmm0; /* movss */
    xmm0 = MEMF(0x64A4E0); /* movss */
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    MEM8(esp + 0x8C) = 7;
    MEM8(esp + 0x8D) = 0xFF;
    MEM16(esp + 0x48) = 0x19;
    MEM16(esp + 0x4A) = 0xA;
    MEM16(esp + 0x4C) = 0x3C;
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEM32(esp + 0x30) = 0;
    MEM32(esp + 0x34) = 4;
    MEM32(esp + 0x3C) = 0;
    PUSH32(esp, 0); sub_00105450(); /* call 0x00105450 */

loc_0010F207: ;
    esp = esp + 0x14;
    if (TEST_Z(eax, eax)) goto loc_0010F217; /* je: equal / zero */

loc_0010F20E: ;
    edx = MEM32(esp);
    MEM32(eax + 0x170) = edx;

loc_0010F217: ;
    eax = 1;
    esp = esp + 0x80;
    esp += 4; return; /* ret */

}

/**
 * sub_0010F230
 * Original: 0x0010F230 - 0x0010F276 (70 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010F230(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0010F230: ;
    ecx = MEM32(0x7FA20C);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = MEM32(esp + 4);
    if (TEST_Z(ecx, ecx)) goto loc_0010F273; /* je: equal / zero */

loc_0010F23E: ;
    edi = edi;

loc_0010F240: ;
    ecx--;
    xmm0 = MEMF(eax + 0x88); /* movss */
    xmm0 = xmm0 * MEMF(eax + 0x170); /* mulss */
    MEMF(eax + 0x88) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x170); /* movss */
    xmm0 = xmm0 * MEMF(eax + 0x90); /* mulss */
    MEMF(eax + 0x90) = xmm0; /* movss */
    if ((ecx != 0)) goto loc_0010F240; /* jne: not equal / not zero */

loc_0010F273: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_0010F280
 * Original: 0x0010F280 - 0x0010F28F (15 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010F280(void)
{

loc_0010F280: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 0x64) = MEM32(eax + 0x64) | 1;
    MEM16(eax + 0x36) = 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_0010F290
 * Original: 0x0010F290 - 0x0010F2B1 (33 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010F290(void)
{
    int _flags = 0; /* fallback flag var */

loc_0010F290: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x25);
    eax = 0x44;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_0010F2A1: ;
    ecx = 0; /* xor self */
    esp = esp + 8;
    if (CMP_NE(eax, ecx)) { sub_0010F2B1(); return; } /* jne: not equal / not zero */

loc_0010F2AA: ;
    MEM32(0x849390) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0010F2E0
 * Original: 0x0010F2E0 - 0x0010F351 (113 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010F2E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0010F2E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x40;
    eax = ZX8(LO8(eax));
    eax = eax + 0xFFFFFFFDu;
    if (CMP_A(eax, 5)) { sub_0010F351(); return; } /* ja: above (unsigned >) */

loc_0010F2F4: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x10F358); /* switch: 6 entries, 6 targets */
    if (_jt == 0x0010F2FBu) goto loc_0010F2FB;
    if (_jt == 0x0010F302u) goto loc_0010F302;
    if (_jt == 0x0010F309u) goto loc_0010F309;
    if (_jt == 0x0010F310u) goto loc_0010F310;
    if (_jt == 0x0010F317u) goto loc_0010F317;
    if (_jt == 0x0010F31Eu) goto loc_0010F31E;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0010F2FB: ;
    PUSH32(esp, 0x5F3E34);
    goto loc_0010F323;

loc_0010F302: ;
    PUSH32(esp, 0x5F3CF4);
    goto loc_0010F323;

loc_0010F309: ;
    PUSH32(esp, 0x5F3E2C);
    goto loc_0010F323;

loc_0010F310: ;
    PUSH32(esp, 0x5F3E24);
    goto loc_0010F323;

loc_0010F317: ;
    PUSH32(esp, 0x5F3D08);
    goto loc_0010F323;

loc_0010F31E: ;
    PUSH32(esp, 0x5F3E1C);

loc_0010F323: ;
    eax = esi;
    PUSH32(esp, 0); sub_002F77D0(); /* call 0x002F77D0 */

loc_0010F32A: ;
    esp = esp + 4;
    edx = eax;
    PUSH32(esp, esi);
    eax = esp + 4;
    PUSH32(esp, 0); sub_002F7870(); /* call 0x002F7870 */

loc_0010F339: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x595CB4);
    PUSH32(esp, 0); sub_001101F0(); /* call 0x001101F0 */

loc_0010F348: ;
    esp = esp + 0x10;
    SET_LO8(eax, 1);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0010F370
 * Original: 0x0010F370 - 0x0010F3E7 (119 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010F370(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0010F370: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x58;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x3C8);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(eax, eax)) goto loc_0010F3E1; /* je: equal / zero */

loc_0010F388: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    SET_LO8(eax, MEM8(ebp + 0xC));
    PUSH32(esp, 0); sub_0010F2E0(); /* call 0x0010F2E0 */

loc_0010F395: ;
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x18);
    esp = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = esp + 0x2C;
    PUSH32(esp, 0); sub_004288F5(); /* call 0x004288F5 */

loc_0010F3B0: ;
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0xBF800000u);
    ecx = eax;
    PUSH32(esp, 0x5F3E04);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001DD750(); /* call 0x001DD750 */

loc_0010F3C7: ;
    esp = esp + 0x10;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0010F3E1; /* jne: not equal / not zero */

loc_0010F3CE: ;
    PUSH32(esp, 0xFF);
    eax = 0; /* xor self */
    edi = esp + 0x18;
    PUSH32(esp, 0); sub_000BCCA0(); /* call 0x000BCCA0 */

loc_0010F3DE: ;
    esp = esp + 4;

loc_0010F3E1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0010F3F0
 * Original: 0x0010F3F0 - 0x0010F417 (39 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010F3F0(void)
{

loc_0010F3F0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x30);
    ecx = (uint32_t)((int32_t)ecx >> 1);
    ecx = ecx & 0x7F;
    ecx = SX16(LO16(ecx));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x10001);
    MEM16(eax + 0x54) = 0x12C;
    MEM8(eax + 0x56) = 0xA;
    MEM32(eax + 0x30) = ecx;
    MEM8(eax + 0x57) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0010F420
 * Original: 0x0010F420 - 0x0010F586 (358 bytes, 104 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010F420(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010F420: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    if (CMP_NE(eax, ebx)) goto loc_0010F581; /* jne: not equal / not zero */

loc_0010F42E: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0x771E30;
    ebp = 0x771FE4;
    edi = 0x772014;

loc_0010F440: ;
    eax = (uint32_t)(int32_t)SMEM8(0x7FA230);
    ecx = ZX8(MEM8(esi + -180));
    eax++;
    if (CMP_NE(ecx, eax)) goto loc_0010F4AA; /* jne: not equal / not zero */

loc_0010F453: ;
    eax = MEM32(edi);
    eax = (uint32_t)(-(int32_t)eax);
    if (((int32_t)eax >= 0)) goto loc_0010F45B; /* jns: not sign (positive) */

loc_0010F459: ;
    eax = (uint32_t)(-(int32_t)eax);

loc_0010F45B: ;
    if (CMP_GE(eax, 0x12C)) goto loc_0010F4A4; /* jge: greater or equal (signed >=) */

loc_0010F462: ;
    eax = ZX16(MEM16(ebp));
    SET_LO8(ecx, MEM8(esi));
    (void)0; /* cmp LO8(ecx), 0xFF - flags set for next jcc */
    MEM32(0x771FE0) = eax;
    if (CMP_EQ(LO8(ecx), 0xFF)) goto loc_0010F4A4; /* je: equal / zero */

loc_0010F472: ;
    edx = SX8(LO8(ecx));
    ecx = eax;
    ecx = ecx & 0x3E;
    ecx = ecx << 2;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    ecx = ecx >> 3;
    eax = eax >> 8;
    ecx = ecx & 0xF8;
    PUSH32(esp, ecx);
    eax = eax & 0xF8;
    PUSH32(esp, eax);
    eax = esi + -192;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx * 4 + 0x595BA4), _icall_esp); /* indirect call */
    }

loc_0010F4A1: ;
    esp = esp + 0x10;

loc_0010F4A4: ;
    MEM8(esi + -180) = LO8(ebx);

loc_0010F4AA: ;
    edi = edi + 4;
    ebp = ebp + 8;
    esi = esi + 0xD0;
    if (CMP_L(edi, 0x772020)) goto loc_0010F440; /* jl: less (signed <) */

loc_0010F4BE: ;
    ebp = 0x772014;
    edi = 0x771D7C;
    ebx = 0x771FFC;
    /* nop */

loc_0010F4D0: ;
    if (CMP_NE(MEM8(edi), 3)) goto loc_0010F566; /* jne: not equal / not zero */

loc_0010F4D9: ;
    SET_LO8(ecx, MEM8(0x7FA230));
    xmm0 = MEMF(edi + -12); /* movss */
    SET_LO8(ecx, LO8(ecx) + 1);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    edx = MEM32(edi + -8);
    MEM8(edi) = LO8(ecx);
    ecx = MEM32(edi + -4);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = 0; /* xor self */
    esi = esp + 0x28;
    ecx = 0; /* xor self */
    MEM16(ebx) = 0xFFFF;
    PUSH32(esp, 0); sub_002A8700(); /* call 0x002A8700 */

loc_0010F50C: ;
    ecx = (int32_t)MEMF(esp + 0x28); /* cvttss2si */
    eax = (int32_t)MEMF(esp + 0x20); /* cvttss2si */
    edx = (int32_t)MEMF(esp + 0x24); /* cvttss2si */
    MEM32(ebp) = ecx;
    ecx = MEM32(0x84A13C);
    esi = (int32_t)MEMF(ecx + 0x21C); /* cvttss2si */
    esp = esp + 0x10;
    if (CMP_L(eax, esi)) goto loc_0010F566; /* jl: less (signed <) */

loc_0010F536: ;
    esi = (int32_t)MEMF(ecx + 0x220); /* cvttss2si */
    if (CMP_GE(eax, esi)) goto loc_0010F566; /* jge: greater or equal (signed >=) */

loc_0010F542: ;
    eax = (int32_t)MEMF(ecx + 0x214); /* cvttss2si */
    if (CMP_L(edx, eax)) goto loc_0010F566; /* jl: less (signed <) */

loc_0010F54E: ;
    ecx = (int32_t)MEMF(ecx + 0x218); /* cvttss2si */
    if (CMP_GE(edx, ecx)) goto loc_0010F566; /* jge: greater or equal (signed >=) */

loc_0010F55A: ;
    eax = MEM32(0x84A148);
    ecx = 0; /* xor self */
    PUSH32(esp, 0); sub_002A8410(); /* call 0x002A8410 */

loc_0010F566: ;
    ebx = ebx + 8;
    edi = edi + 0xD0;
    ebp = ebp + 4;
    if (CMP_L(ebx, 0x772014)) goto loc_0010F4D0; /* jl: less (signed <) */

loc_0010F57E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);

loc_0010F581: ;
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_0010F590
 * Original: 0x0010F590 - 0x0010F6F5 (357 bytes, 100 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010F590(void)
{
    uint32_t ebp;
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;

loc_0010F590: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x64;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    eax = MEM32(ebx + 0x360);
    ecx = MEM32(eax + 0x68);
    edx = MEM32(eax + 0x64);
    xmm1 = MEMF(eax + 0x44); /* movss */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x60);
    PUSH32(esp, edx);
    edx = MEM32(eax + 0x40);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x3C);
    PUSH32(esp, edx);
    edx = MEM32(eax + 0x38);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x34);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    esi = esp + 0x4C;
    edi = ebx + 0x294;
    PUSH32(esp, 0); sub_0010FF70(); /* call 0x0010FF70 */

loc_0010F5D5: ;
    xmm0 = MEMF(ebx + 0x40); /* movss */
    esp = esp + 0x1C;
    edx = esi;
    PUSH32(esp, edx);
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0x44); /* movss */
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0x48); /* movss */
    PUSH32(esp, ecx);
    MEMF(esp + 0x2C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_0010F60B: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0xC);
    xmm2 = MEMF(esp + 0x24); /* movss */
    xmm5 = MEMF(esp + 0x28); /* movss */
    eax = eax << 2;
    xmm0 = MEMF(eax + 0x77148C); /* movss */
    xmm0 = xmm0 * MEMF(ebx + 0x38); /* mulss */
    xmm1 = MEMF(eax + 0x77149C); /* movss */
    xmm1 = xmm1 * MEMF(ebx + 0x38); /* mulss */
    eax = 0; /* xor self */
    MEM16(edi + 0x18) = LO16(eax);
    MEM16(edi + 0x34) = LO16(eax);
    MEM16(edi + 0x50) = LO16(eax);
    MEM16(edi + 0x6C) = LO16(eax);
    xmm3 = xmm2; /* movaps */
    xmm3 = xmm3 + xmm0; /* addss */
    edx = (int32_t)xmm3; /* cvttss2si */
    eax = SX16(LO16(edx));
    xmm3 = (float)(int32_t)eax; /* cvtsi2ss */
    ecx = (int32_t)xmm5; /* cvttss2si */
    edx = SX16(LO16(ecx));
    MEMF(edi + 0x54) = xmm3; /* movss */
    MEMF(edi) = xmm3; /* movss */
    xmm3 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(edi + 0x20) = xmm3; /* movss */
    MEMF(edi + 4) = xmm3; /* movss */
    xmm3 = MEMF(esp + 0x2C); /* movss */
    xmm2 = xmm2 - xmm0; /* subss */
    xmm4 = xmm3; /* movaps */
    xmm4 = xmm4 - xmm1; /* subss */
    eax = (int32_t)xmm4; /* cvttss2si */
    ecx = SX16(LO16(eax));
    edx = (int32_t)xmm2; /* cvttss2si */
    eax = SX16(LO16(edx));
    xmm4 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(edi + 0x38) = xmm0; /* movss */
    MEMF(edi + 0x1C) = xmm0; /* movss */
    MEMF(edi + 0x5C) = xmm4; /* movss */
    MEMF(edi + 8) = xmm4; /* movss */
    xmm0 = MEMF(ebx + 0x3C); /* movss */
    xmm0 = xmm0 + xmm5; /* addss */
    ecx = (int32_t)xmm0; /* cvttss2si */
    edx = SX16(LO16(ecx));
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm3 = xmm3 + xmm1; /* addss */
    eax = (int32_t)xmm3; /* cvttss2si */
    ecx = SX16(LO16(eax));
    MEMF(edi + 0x58) = xmm0; /* movss */
    MEMF(edi + 0x3C) = xmm0; /* movss */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(edi + 0x40) = xmm0; /* movss */
    MEMF(edi + 0x24) = xmm0; /* movss */
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0010F700
 * Original: 0x0010F700 - 0x0010F755 (85 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010F700(void)
{
    int _flags = 0; /* fallback flag var */

loc_0010F700: ;
    eax = MEM32(eax * 4 + 0x6A6108);
    PUSH32(esp, 1);
    ecx = 0x5F3E7C;
    PUSH32(esp, 0); sub_00086490(); /* call 0x00086490 */

loc_0010F713: ;
    esp = esp + 4;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi) = eax;
    if (TEST_Z(eax, eax)) goto loc_0010F752; /* je: equal / zero */

loc_0010F71C: ;
    eax = MEM32(eax + 0x24);
    if (TEST_Z(eax, eax)) goto loc_0010F752; /* je: equal / zero */

loc_0010F723: ;
    ecx = MEM32(eax + 8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x36);
    PUSH32(esp, 0x5F3E3C);
    PUSH32(esp, 0); sub_003ED030(); /* call 0x003ED030 */

loc_0010F734: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_0010F73A: ;
    ecx = MEM32(esp + 0x14);
    MEM32(ecx) = eax;
    edx = MEM32(esi);
    PUSH32(esp, eax);
    eax = MEM32(edx + 0x24);
    ecx = MEM32(eax + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_000865C0(); /* call 0x000865C0 */

loc_0010F74F: ;
    esp = esp + 0x18;

loc_0010F752: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0010F760
 * Original: 0x0010F760 - 0x0010F786 (38 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010F760(void)
{
    int _flags = 0; /* fallback flag var */

loc_0010F760: ;
    eax = MEM32(esi + 0x24);
    if (TEST_Z(eax, eax)) goto loc_0010F774; /* je: equal / zero */

loc_0010F767: ;
    edx = MEM32(eax + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00075640(); /* call 0x00075640 */

loc_0010F771: ;
    esp = esp + 8;

loc_0010F774: ;
    SET_LO8(eax, MEM8(esi + 0xC));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    eax = MEM32(esi + 8);
    if (CMP_BE(eax, 1)) { sub_0010F786(); return; } /* jbe: below or equal (unsigned <=) */

loc_0010F781: ;
    eax--;
    MEM32(esi + 8) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0010F830
 * Original: 0x0010F830 - 0x0010F9F1 (449 bytes, 113 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010F830(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010F830: ;
    esp = esp - 0x18;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0035E140(); /* call 0x0035E140 */

loc_0010F83C: ;
    ebx = 5;
    MEM32(eax + 0x8004) = ebx;
    eax = MEM32(0x801ECC);
    (void)0; /* test eax, eax - flags set for next jcc */
    ebp = 6;
    if (TEST_NZ(eax, eax)) goto loc_0010F886; /* jne: not equal / not zero */

loc_0010F855: ;
    MEM32(0x801ECC) = 1;
    PUSH32(esp, 0); sub_0035E140(); /* call 0x0035E140 */

loc_0010F864: ;
    if (CMP_GE(MEM32(eax + 0x8004), ebp)) goto loc_0010F878; /* jge: greater or equal (signed >=) */

loc_0010F86C: ;
    MEM32(0x801F1C) = 0xFA;
    goto loc_0010F886;

loc_0010F878: ;
    eax = MEM32(esp + 0x24);
    MEM32(0x801F1C) = eax;
    PUSH32(esp, 0); sub_0035E140(); /* call 0x0035E140 */

loc_0010F886: ;
    esi = MEM32(esp + 0x2C);
    xmm0 = (float)(int32_t)MEM32(0x801F1C); /* cvtsi2ss */
    ecx = MEM32(esi + 0x3C);
    xmm0 = xmm0 * MEMF(0x648E54); /* mulss */
    MEMF(ecx + 0x38) = xmm0; /* movss */
    eax = MEM32(esi + 0x3C);
    edx = MEM32(eax + 0x38);
    MEM32(eax + 0x34) = edx;
    eax = MEM32(esi + 0x38);
    edi = eax;
    edi = (uint32_t)(-(int32_t)edi);
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, 0); sub_0035E140(); /* call 0x0035E140 */

loc_0010F8BB: ;
    MEM32(eax + 0x8004) = ebx;
    eax = MEM32(0x801EC0);
    if (TEST_NZ(eax, eax)) goto loc_0010F8FF; /* jne: not equal / not zero */

loc_0010F8CA: ;
    MEM32(0x801EC0) = 1;
    PUSH32(esp, 0); sub_0035E140(); /* call 0x0035E140 */

loc_0010F8D9: ;
    if (CMP_GE(MEM32(eax + 0x8004), ebp)) goto loc_0010F8F0; /* jge: greater or equal (signed >=) */

loc_0010F8E1: ;
    eax = MEM32(esp + 0x20);
    eax = eax + edi;
    eax = (uint32_t)((int32_t)eax >> 1);
    MEM32(0x801F10) = eax;
    goto loc_0010F904;

loc_0010F8F0: ;
    ecx = MEM32(esp + 0x24);
    MEM32(0x801F10) = ecx;
    PUSH32(esp, 0); sub_0035E140(); /* call 0x0035E140 */

loc_0010F8FF: ;
    eax = MEM32(0x801F10);

loc_0010F904: ;
    edx = MEM32(esi + 0x3C);
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 + MEMF(esi + 0x2C); /* addss */
    MEMF(edx + 0x60) = xmm0; /* movss */
    eax = MEM32(esi + 0x38);
    edi = eax;
    edi = (uint32_t)(-(int32_t)edi);
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, 0); sub_0035E140(); /* call 0x0035E140 */

loc_0010F925: ;
    MEM32(eax + 0x8004) = ebx;
    eax = MEM32(0x801EC4);
    if (TEST_NZ(eax, eax)) goto loc_0010F969; /* jne: not equal / not zero */

loc_0010F934: ;
    MEM32(0x801EC4) = 1;
    PUSH32(esp, 0); sub_0035E140(); /* call 0x0035E140 */

loc_0010F943: ;
    if (CMP_GE(MEM32(eax + 0x8004), ebp)) goto loc_0010F95A; /* jge: greater or equal (signed >=) */

loc_0010F94B: ;
    eax = MEM32(esp + 0x20);
    eax = eax + edi;
    eax = (uint32_t)((int32_t)eax >> 1);
    MEM32(0x801F14) = eax;
    goto loc_0010F96E;

loc_0010F95A: ;
    ecx = MEM32(esp + 0x24);
    MEM32(0x801F14) = ecx;
    PUSH32(esp, 0); sub_0035E140(); /* call 0x0035E140 */

loc_0010F969: ;
    eax = MEM32(0x801F14);

loc_0010F96E: ;
    edx = MEM32(esi + 0x3C);
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 + MEMF(esi + 0x30); /* addss */
    MEMF(edx + 0x64) = xmm0; /* movss */
    eax = MEM32(esi + 0x38);
    edi = eax;
    edi = (uint32_t)(-(int32_t)edi);
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, 0); sub_0035E140(); /* call 0x0035E140 */

loc_0010F98F: ;
    MEM32(eax + 0x8004) = ebx;
    eax = MEM32(0x801EC8);
    if (TEST_NZ(eax, eax)) goto loc_0010F9D3; /* jne: not equal / not zero */

loc_0010F99E: ;
    MEM32(0x801EC8) = 1;
    PUSH32(esp, 0); sub_0035E140(); /* call 0x0035E140 */

loc_0010F9AD: ;
    if (CMP_GE(MEM32(eax + 0x8004), ebp)) goto loc_0010F9C4; /* jge: greater or equal (signed >=) */

loc_0010F9B5: ;
    eax = MEM32(esp + 0x20);
    eax = eax + edi;
    eax = (uint32_t)((int32_t)eax >> 1);
    MEM32(0x801F18) = eax;
    goto loc_0010F9D8;

loc_0010F9C4: ;
    ecx = MEM32(esp + 0x24);
    MEM32(0x801F18) = ecx;
    PUSH32(esp, 0); sub_0035E140(); /* call 0x0035E140 */

loc_0010F9D3: ;
    eax = MEM32(0x801F18);

loc_0010F9D8: ;
    edx = MEM32(esi + 0x3C);
    POP32(esp, edi);
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 + MEMF(esi + 0x34); /* addss */
    POP32(esp, esi);
    POP32(esp, ebp);
    MEMF(edx + 0x68) = xmm0; /* movss */
    POP32(esp, ebx);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_0010FA00
 * Original: 0x0010FA00 - 0x0010FB82 (386 bytes, 104 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010FA00(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0010FA00: ;
    esp = esp - 0x18;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x20);
    eax = MEM32(esi + 0x2C);
    ecx = MEM32(eax + 0x64);
    if (TEST_Z(ecx, ecx)) { sub_0010FB82(); return; } /* je: equal / zero */

loc_0010FA16: ;
    SET_LO8(ecx, MEM8(eax + 0x10B));
    if (CMP_NE(LO8(ecx), MEM8(esi + 0x30))) { sub_0010FB82(); return; } /* jne: not equal / not zero */

loc_0010FA25: ;
    ecx = MEM32(eax + 0x3C8);
    if (TEST_Z(ecx, ecx)) goto loc_0010FB7D; /* je: equal / zero */

loc_0010FA33: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0035E140(); /* call 0x0035E140 */

loc_0010FA3A: ;
    ebx = 5;
    MEM32(eax + 0x8004) = ebx;
    eax = MEM32(0x801ED0);
    if (TEST_NZ(eax, eax)) goto loc_0010FA81; /* jne: not equal / not zero */

loc_0010FA4E: ;
    MEM32(0x801ED0) = 1;
    PUSH32(esp, 0); sub_0035E140(); /* call 0x0035E140 */

loc_0010FA5D: ;
    if (CMP_GE(MEM32(eax + 0x8004), 6)) goto loc_0010FA72; /* jge: greater or equal (signed >=) */

loc_0010FA66: ;
    MEM32(0x801F20) = 0xFA;
    goto loc_0010FA81;

loc_0010FA72: ;
    edx = MEM32(esp + 0x20);
    MEM32(0x801F20) = edx;
    PUSH32(esp, 0); sub_0035E140(); /* call 0x0035E140 */

loc_0010FA81: ;
    xmm0 = (float)(int32_t)MEM32(0x801F20); /* cvtsi2ss */
    eax = MEM32(esi + 0x38);
    xmm0 = xmm0 * MEMF(0x648E54); /* mulss */
    MEMF(eax + 0x38) = xmm0; /* movss */
    eax = MEM32(esi + 0x38);
    ecx = MEM32(eax + 0x38);
    MEM32(eax + 0x34) = ecx;
    edi = ZX8(MEM8(esi + 0x32));
    edi--;
    PUSH32(esp, 0); sub_0035E140(); /* call 0x0035E140 */

loc_0010FAAC: ;
    MEM32(eax + 0x8004) = ebx;
    eax = MEM32(0x801ECC);
    if (TEST_NZ(eax, eax)) goto loc_0010FAEC; /* jne: not equal / not zero */

loc_0010FABB: ;
    MEM32(0x801ECC) = 1;
    PUSH32(esp, 0); sub_0035E140(); /* call 0x0035E140 */

loc_0010FACA: ;
    if (CMP_GE(MEM32(eax + 0x8004), 6)) goto loc_0010FADD; /* jge: greater or equal (signed >=) */

loc_0010FAD3: ;
    edi = (uint32_t)((int32_t)edi >> 1);
    MEM32(0x801F1C) = edi;
    goto loc_0010FAEC;

loc_0010FADD: ;
    edx = MEM32(esp + 0x20);
    MEM32(0x801F1C) = edx;
    PUSH32(esp, 0); sub_0035E140(); /* call 0x0035E140 */

loc_0010FAEC: ;
    SET_LO8(eax, MEM8(0x801F1C));
    ecx = MEM32(esi + 0x2C);
    edx = MEM32(esi + 0x34);
    ebx = ZX8(LO8(eax));
    MEM8(esi + 0x31) = LO8(eax);
    edi = MEM32(ecx + 0x3C8);
    eax = MEM32(esi + 0x38);
    ecx = eax + 0x68;
    ebx = ebx << 6;
    PUSH32(esp, ecx);
    MEM32(esp + 0x2C) = edx;
    ebx = ebx + edi;
    edi = edx;
    edx = eax + 0x64;
    PUSH32(esp, edx);
    eax = eax + 0x60;
    PUSH32(esp, eax);
    ecx = edi;
    ecx = (uint32_t)(-(int32_t)ecx);
    edx = edi;
    eax = 0x5F3E84;
    esi = 2;
    PUSH32(esp, 0); sub_0010FBD0(); /* call 0x0010FBD0 */

loc_0010FB32: ;
    PUSH32(esp, ecx);
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    ecx = edi;
    ecx = (uint32_t)(-(int32_t)ecx);
    edx = edi;
    eax = 0x5F3E88;
    esi = 1;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0010FBD0(); /* call 0x0010FBD0 */

loc_0010FB51: ;
    PUSH32(esp, ecx);
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    ecx = edi;
    ecx = (uint32_t)(-(int32_t)ecx);
    edx = edi;
    eax = 0x5F3E8C;
    esi = 0; /* xor self */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0010FBD0(); /* call 0x0010FBD0 */

loc_0010FB6D: ;
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    eax = ebx;
    PUSH32(esp, 0); sub_0029C1B0(); /* call 0x0029C1B0 */

loc_0010FB78: ;
    esp = esp + 0x14;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_0010FB7D: ;
    POP32(esp, esi);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_0010FBD0
 * Original: 0x0010FBD0 - 0x0010FC09 (57 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010FBD0(void)
{

loc_0010FBD0: ;
    esp = esp - 0x14;
    MEM32(esp) = esi;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = edx;
    PUSH32(esp, 0); sub_0035E140(); /* call 0x0035E140 */

loc_0010FBEF: ;
    MEM32(eax + 0x8004) = 5;
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00377980(); /* call 0x00377980 */

loc_0010FC05: ;
    esp = esp + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_0010FC10
 * Original: 0x0010FC10 - 0x0010FC25 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010FC10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010FC10: ;
    SET_LO8(ecx, LO8(eax));
    SET_LO8(ecx, LO8(ecx) & 0xC0);
    if (TEST_Z(LO8(eax), 0x40)) { sub_0010FC25(); return; } /* je: equal / zero */

loc_0010FC19: ;
    eax = eax & 0x3F;
    edx = 0x40;
    edx = edx - eax;
    g_seh_ebp = ebp; sub_0010FC2A(); return; /* tail jmp 0x0010FC2A */

}

/**
 * sub_0010FC50
 * Original: 0x0010FC50 - 0x0010FD42 (242 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010FC50(void)
{
    uint32_t ebp;
    float xmm0, xmm1, xmm5;

loc_0010FC50: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x88;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esp = esp - 0xC;
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(ebp + 0x20); /* mulss */
    xmm0 = xmm0 * MEMF(ebp + 0x18); /* mulss */
    MEMF(esp + 8) = xmm1; /* movss */
    xmm1 = MEMF(ebp + 8); /* movss */
    xmm1 = xmm1 * MEMF(ebp + 0x1C); /* mulss */
    ecx = 0x10;
    esi = 0x5A0350;
    edi = esp + 0x5C;
    MEMF(esp + 4) = xmm1; /* movss */
    eax = esp + 0x5C;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0042889D(); /* call 0x0042889D */

loc_0010FCA2: ;
    xmm0 = MEMF(0x648E18); /* movss */
    xmm1 = MEMF(ebp + 0x14); /* movss */
    xmm5 = MEMF(0x648D14); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    esp = esp - 0xC;
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 8) = xmm1; /* movss */
    xmm1 = MEMF(ebp + 0x10); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 4) = xmm1; /* movss */
    xmm1 = MEMF(ebp + 0xC); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp) = xmm1; /* movss */
    PUSH32(esp, 0x3F800000);
    eax = esp + 0x2C;
    PUSH32(esp, 0x3F800000);
    ecx = 0x10;
    esi = 0x5A0350;
    edi = esp + 0x30;
    PUSH32(esp, eax);
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    PUSH32(esp, 0); sub_003E2E60(); /* call 0x003E2E60 */

loc_0010FD0B: ;
    esp = esp + 0x24;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    eax = esp + 0x54;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_0010FD1E: ;
    xmm0 = MEMF(ebp + 0x24); /* movss */
    MEMF(edx + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 0x28); /* movss */
    MEMF(edx + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 0x2C); /* movss */
    POP32(esp, edi);
    MEMF(edx + 0x38) = xmm0; /* movss */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0010FD50
 * Original: 0x0010FD50 - 0x0010FF65 (533 bytes, 116 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010FD50(void)
{
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;

loc_0010FD50: ;
    PUSH32(esp, ecx);
    xmm2 = MEMF(esp + 0x2C); /* movss */
    xmm2 = xmm2 - MEMF(esp + 0x20); /* subss */
    xmm3 = MEMF(esp + 0x30); /* movss */
    xmm3 = xmm3 - MEMF(esp + 0x24); /* subss */
    xmm1 = MEMF(esp + 0x28); /* movss */
    xmm1 = xmm1 - MEMF(esp + 0x1C); /* subss */
    xmm0 = xmm3; /* movaps */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm4 = xmm2; /* movaps */
    xmm4 = xmm4 * xmm2; /* mulss */
    xmm0 = xmm0 + xmm4; /* addss */
    xmm4 = xmm1; /* movaps */
    xmm4 = xmm4 * xmm1; /* mulss */
    xmm0 = xmm0 + xmm4; /* addss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = sqrtf(MEMF(esp + 0x28)); /* sqrtss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm7 = MEMF(0x648D14); /* movss */
    xmm6 = xmm7; /* movaps */
    xmm6 = xmm6 / MEMF(esp + 0x2C); /* divss */
    xmm4 = xmm6; /* movaps */
    xmm5 = xmm6; /* movaps */
    xmm6 = xmm6 * xmm3; /* mulss */
    xmm3 = 0.0f; /* xorps self = zero */
    xmm4 = xmm4 * xmm1; /* mulss */
    xmm5 = xmm5 * xmm2; /* mulss */
    xmm1 = xmm3; /* movaps */
    xmm1 = xmm1 - xmm4; /* subss */
    xmm0 = xmm1; /* movaps */
    xmm2 = xmm6; /* movaps */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm2 = xmm2 * xmm6; /* mulss */
    xmm0 = xmm0 + xmm2; /* addss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = sqrtf(MEMF(esp + 0x28)); /* sqrtss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm2 = xmm7; /* movaps */
    xmm2 = xmm2 / MEMF(esp + 0x2C); /* divss */
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm7 = xmm1; /* movaps */
    xmm0 = xmm2; /* movaps */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm2 = xmm7; /* movaps */
    xmm1 = xmm0; /* movaps */
    MEMF(esp + 0x30) = xmm0; /* movss */
    MEMF(esp) = xmm7; /* movss */
    xmm7 = xmm7 * xmm4; /* mulss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm3 = xmm3 - xmm0; /* subss */
    xmm1 = xmm1 * xmm6; /* mulss */
    xmm1 = xmm1 - xmm7; /* subss */
    xmm0 = xmm3; /* movaps */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm7 = xmm1; /* movaps */
    xmm7 = xmm7 * xmm1; /* mulss */
    xmm0 = xmm0 + xmm7; /* addss */
    xmm2 = xmm2 * xmm5; /* mulss */
    xmm7 = xmm2; /* movaps */
    xmm7 = xmm7 * xmm2; /* mulss */
    xmm0 = xmm0 + xmm7; /* addss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = sqrtf(MEMF(esp + 0x28)); /* sqrtss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 / MEMF(esp + 0x2C); /* divss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x30); /* movss */
    xmm0 = xmm0 * MEMF(esp + 8); /* mulss */
    xmm0 = xmm0 * MEMF(esp + 0x10); /* mulss */
    xmm7 = MEMF(esp + 0x28); /* movss */
    MEMF(eax) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x10); /* movss */
    xmm2 = xmm2 * xmm7; /* mulss */
    xmm2 = xmm2 * MEMF(esp + 0xC); /* mulss */
    xmm2 = xmm2 * xmm0; /* mulss */
    MEMF(eax + 0x10) = xmm2; /* movss */
    xmm2 = MEMF(esp + 8); /* movss */
    xmm4 = xmm4 * xmm2; /* mulss */
    xmm4 = xmm4 * xmm0; /* mulss */
    xmm0 = MEMF(esp + 0x1C); /* movss */
    MEMF(eax + 0x30) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(eax + 0x20) = xmm4; /* movss */
    MEMF(eax + 4) = xmm0; /* movss */
    xmm4 = MEMF(esp + 0x14); /* movss */
    xmm1 = xmm1 * xmm7; /* mulss */
    xmm1 = xmm1 * MEMF(esp + 0xC); /* mulss */
    xmm1 = xmm1 * xmm4; /* mulss */
    MEMF(eax + 0x14) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x20); /* movss */
    MEMF(eax + 0x34) = xmm1; /* movss */
    xmm1 = MEMF(esp); /* movss */
    xmm5 = xmm5 * xmm2; /* mulss */
    xmm5 = xmm5 * xmm4; /* mulss */
    xmm4 = MEMF(esp + 0x18); /* movss */
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm3 = xmm3 * xmm7; /* mulss */
    xmm3 = xmm3 * MEMF(esp + 0xC); /* mulss */
    MEMF(eax + 8) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x24); /* movss */
    xmm6 = xmm6 * xmm2; /* mulss */
    MEMF(eax + 0xC) = xmm0; /* movss */
    MEMF(eax + 0x1C) = xmm0; /* movss */
    MEMF(eax + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    xmm3 = xmm3 * xmm4; /* mulss */
    xmm6 = xmm6 * xmm4; /* mulss */
    MEMF(eax + 0x24) = xmm5; /* movss */
    MEMF(eax + 0x18) = xmm3; /* movss */
    MEMF(eax + 0x28) = xmm6; /* movss */
    MEMF(eax + 0x38) = xmm1; /* movss */
    MEMF(eax + 0x3C) = xmm0; /* movss */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0010FF70
 * Original: 0x0010FF70 - 0x0011015D (493 bytes, 107 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010FF70(void)
{
    float xmm0, xmm1, xmm2, xmm5;

loc_0010FF70: ;
    esp = esp - 0xC;
    xmm0 = MEMF(0x648E18); /* movss */
    xmm5 = MEMF(0x648D14); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    esp = esp - 0xC;
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 8) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x34); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 4) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x30); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp) = xmm1; /* movss */
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003E2E60(); /* call 0x003E2E60 */

loc_0010FFC5: ;
    xmm0 = MEMF(esp + 0x44); /* movss */
    xmm2 = MEMF(esp + 0x34); /* movss */
    MEMF(esi + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x48); /* movss */
    MEMF(esi + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x4C); /* movss */
    MEMF(esi + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(esi); /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(esi + 4); /* movss */
    eax = esp + 0x24;
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(esi + 8); /* movss */
    ecx = eax;
    esp = esp + 0x24;
    MEMF(esp + 8) = xmm0; /* movss */
    MEMF(esp + 0x20) = xmm2; /* movss */
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = ecx;
    xmm0 = MEMF(esp + 0x20); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x18);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x1C);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    xmm0 = MEMF(esp); /* movss */
    MEMF(esi) = xmm0; /* movss */
    xmm0 = MEMF(esp + 4); /* movss */
    MEMF(esi + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 8); /* movss */
    MEMF(esi + 8) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x10); /* movss */
    MEMF(esp) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x14); /* movss */
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x18); /* movss */
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x14); /* movss */
    edx = ecx;
    eax = ecx;
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x1C) = eax;
    xmm0 = MEMF(esp + 0x20); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x18);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x1C);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    xmm0 = MEMF(esp); /* movss */
    MEMF(esi + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(esp + 4); /* movss */
    MEMF(esi + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(esp + 8); /* movss */
    MEMF(esi + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x20); /* movss */
    MEMF(esp) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x24); /* movss */
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x28); /* movss */
    edx = ecx;
    MEMF(esp + 8) = xmm0; /* movss */
    MEMF(esp + 0x20) = xmm2; /* movss */
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x1C) = edx;
    xmm0 = MEMF(esp + 0x20); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x18);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x1C);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    xmm0 = MEMF(esp); /* movss */
    MEMF(esi + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(esp + 4); /* movss */
    MEMF(esi + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(esp + 8); /* movss */
    MEMF(esi + 0x28) = xmm0; /* movss */
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00110160
 * Original: 0x00110160 - 0x001101EC (140 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00110160(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00110160: ;
    (void)0; /* cmp edi, MEM32(0x771488) - flags set for next jcc */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    if (CMP_NE(edi, MEM32(0x771488))) goto loc_0011018A; /* jne: not equal / not zero */

loc_00110172: ;
    if (CMP_NE(ebp, MEM32(0x771484))) goto loc_0011018A; /* jne: not equal / not zero */

loc_0011017A: ;
    if (CMP_NE(ebx, MEM32(0x771480))) goto loc_0011018A; /* jne: not equal / not zero */

loc_00110182: ;
    if (CMP_EQ(ecx, MEM32(0x8472B4))) goto loc_001101E9; /* je: equal / zero */

loc_0011018A: ;
    if (CMP_NE(MEM8(eax), 1)) goto loc_00110192; /* jne: not equal / not zero */

loc_0011018F: ;
    MEM8(eax) = 0;

loc_00110192: ;
    eax = MEM32(0x7FA1F8);
    if (CMP_EQ(eax, 0x18)) goto loc_001101B9; /* je: equal / zero */

loc_0011019C: ;
    if (CMP_EQ(eax, 0x13)) goto loc_001101B9; /* je: equal / zero */

loc_001101A1: ;
    if (CMP_EQ(eax, 6)) goto loc_001101B9; /* je: equal / zero */

loc_001101A6: ;
    if (CMP_EQ(eax, 0x3B)) goto loc_001101B9; /* je: equal / zero */

loc_001101AB: ;
    if (CMP_EQ(eax, 2)) goto loc_001101B9; /* je: equal / zero */

loc_001101B0: ;
    SET_LO8(eax, MEM8(0x7819D5));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001101C1; /* je: equal / zero */

loc_001101B9: ;
    MEM32(esp + 0x18) = 3;

loc_001101C1: ;
    eax = MEM32(esp + 0xC);
    eax = (uint32_t)((int32_t)eax >> 8);
    PUSH32(esp, 0); sub_00356490(); /* call 0x00356490 */

loc_001101CD: ;
    eax = 0x801860;
    PUSH32(esp, 0); sub_00356550(); /* call 0x00356550 */

loc_001101D7: ;
    MEM32(0x771488) = edi;
    MEM32(0x771484) = ebp;
    MEM32(0x771480) = ebx;

loc_001101E9: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001101F0
 * Original: 0x001101F0 - 0x001102C7 (215 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001101F0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;

loc_001101F0: ;
    eax = MEM32(esp + 0xC);
    xmm0 = MEMF(eax + 0x38); /* movss */
    xmm1 = MEMF(eax + 0x34); /* movss */
    ecx = MEM32(esp + 8);
    eax = MEM32(eax + 0x30);
    edx = MEM32(esp + 4);
    esp = esp - 0x10;
    (void)0; /* test edx, edx - flags set for next jcc */
    MEM32(ecx) = eax;
    MEMF(ecx + 4) = xmm1; /* movss */
    MEMF(ecx + 8) = xmm0; /* movss */
    if (TEST_Z(edx, edx)) goto loc_001102C3; /* je: equal / zero */

loc_00110220: ;
    xmm1 = MEMF(edx); /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0011024C; /* jp: parity */

loc_00110230: ;
    xmm1 = MEMF(edx + 4); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0011024C; /* jp: parity */

loc_0011023E: ;
    xmm1 = MEMF(edx + 8); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_001102C3; /* jnp: not parity */

loc_0011024C: ;
    ecx = esp + 4;
    MEM32(esp) = ecx;
    eax = MEM32(esp + 0x14);
    xmm2 = MEMF(eax); /* movss */
    ecx = MEM32(esp + 0x1C);
    /* shufps xmm2, xmm2, 0 */
    /* mulps: xmm2 *= MEMF(ecx) (packed 4xfloat) */
    xmm1 = MEMF(eax + 4); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm1 *= MEMF(ecx + 0x10) (packed 4xfloat) */
    xmm3 = MEMF(eax + 8); /* movss */
    /* shufps xmm3, xmm3, 0 */
    /* mulps: xmm3 *= MEMF(ecx + 0x20) (packed 4xfloat) */
    /* addps: xmm2 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp);
    /* addps: xmm2 += xmm3 (packed 4xfloat) */
    MEMD(eax) = xmm2; /* movlps */
    /* TODO: movhlps xmm2, xmm2 */
    MEMF(eax + 8) = xmm2; /* movss */
    edx = esp + 4;
    MEM32(esp + 0x1C) = edx;
    ecx = MEM32(esp + 0x1C);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x18);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x18);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */

loc_001102C3: ;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_001102D0
 * Original: 0x001102D0 - 0x00110489 (441 bytes, 116 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001102D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm5, xmm6, xmm7;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001102D0: ;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(esi + 0x15));
    esp = esp - 8;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    eax = eax & 3;
    eax = eax - 0;
    if ((eax == 0)) { sub_00110489(); return; } /* je: equal / zero */

loc_001102E9: ;
    eax--;
    if ((eax == 0)) goto loc_00110401; /* je: equal / zero */

loc_001102F0: ;
    eax--;
    if ((eax == 0)) goto loc_00110338; /* je: equal / zero */

loc_001102F3: ;
    eax = (uint32_t)(int32_t)SMEM16(esi);
    ecx = MEM32(esp + 0x10);
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(ecx) = xmm0; /* movss */
    edx = (uint32_t)(int32_t)SMEM16(esi + 4);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(ebx) = xmm0; /* movss */
    eax = (uint32_t)(int32_t)SMEM16(esi + 8);
    ecx = (uint32_t)(int32_t)SMEM16(esi + 2);
    eax = eax + ecx;
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(ebp) = xmm0; /* movss */
    edx = (uint32_t)(int32_t)SMEM16(esi + 2);
    eax = (uint32_t)(int32_t)SMEM16(esi + 8);
    edx = edx - eax;
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(edi) = xmm0; /* movss */
    POP32(esp, ebp);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_00110338: ;
    fp_push(MEMF(esi + 0x10)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00110346: ;
    MEM8(esp + 7) = LO8(eax);
    SET_LO8(eax, LO8(eax) - 0x40);
    PUSH32(esp, 0); sub_0010FC10(); /* call 0x0010FC10 */

loc_00110351: ;
    SET_LO8(eax, MEM8(esp + 7));
    xmm6 = xmm0; /* movaps */
    PUSH32(esp, 0); sub_0010FC10(); /* call 0x0010FC10 */

loc_0011035D: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 6);
    xmm7 = xmm0; /* movaps */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(esp + 8) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00110373: ;
    edx = (uint32_t)(int32_t)SMEM16(esi + 0xA);
    xmm5 = xmm0; /* movaps */
    xmm0 = MEMF(esp + 8); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(0x648CE0); /* mulss */
    xmm5 = xmm5 * xmm1; /* mulss */
    xmm5 = xmm5 - xmm0; /* subss */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(esp + 8) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001103A2: ;
    xmm1 = MEMF(esp + 8); /* movss */
    eax = (uint32_t)(int32_t)SMEM16(esi);
    ecx = MEM32(esp + 0x10);
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * MEMF(0x648CE0); /* mulss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm0 = xmm0 - xmm1; /* subss */
    xmm2 = xmm0; /* movaps */
    xmm1 = xmm5; /* movaps */
    xmm1 = xmm1 * xmm7; /* mulss */
    xmm2 = xmm2 * xmm6; /* mulss */
    xmm1 = xmm1 + xmm2; /* addss */
    xmm2 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1 = xmm1 + xmm2; /* addss */
    MEMF(ecx) = xmm1; /* movss */
    edx = (uint32_t)(int32_t)SMEM16(esi + 4);
    xmm0 = xmm0 * xmm7; /* mulss */
    xmm5 = xmm5 * xmm6; /* mulss */
    xmm0 = xmm0 - xmm5; /* subss */
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 + xmm1; /* addss */
    MEMF(ebx) = xmm0; /* movss */
    g_seh_ebp = ebp; sub_001104E7(); return; /* tail jmp 0x001104E7 */

loc_00110401: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00110406: ;
    MEM8(esp + 7) = LO8(eax);
    SET_LO8(eax, LO8(eax) - 0x40);
    PUSH32(esp, 0); sub_0010FC10(); /* call 0x0010FC10 */

loc_00110411: ;
    SET_LO8(eax, MEM8(esp + 7));
    xmm5 = xmm0; /* movaps */
    PUSH32(esp, 0); sub_0010FC10(); /* call 0x0010FC10 */

loc_0011041D: ;
    xmm6 = xmm0; /* movaps */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00110425: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 6);
    ecx = (uint32_t)(int32_t)SMEM16(esi);
    edx = MEM32(esp + 0x10);
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm2 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1 = xmm1 * xmm6; /* mulss */
    xmm1 = xmm1 + xmm2; /* addss */
    MEMF(edx) = xmm1; /* movss */
    eax = (uint32_t)(int32_t)SMEM16(esi + 4);
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(ebx) = xmm1; /* movss */
    ecx = (uint32_t)(int32_t)SMEM16(esi + 8);
    edx = (uint32_t)(int32_t)SMEM16(esi + 2);
    ecx = ecx + edx;
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(ebp) = xmm0; /* movss */
    eax = (uint32_t)(int32_t)SMEM16(esi + 2);
    ecx = (uint32_t)(int32_t)SMEM16(esi + 8);
    eax = eax - ecx;
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(edi) = xmm0; /* movss */
    POP32(esp, ebp);
    esp = esp + 8;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00110510
 * Original: 0x00110510 - 0x00110534 (36 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00110510(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00110510: ;
    SET_LO8(ecx, MEM8(esp + 4));
    SET_LO8(eax, MEM8(esp + 8));
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    SET_LO8(ebx, LO8(ecx));
    SET_LO8(edx, LO8(ecx));
    SET_LO8(edx, LO8(edx) & 0xC0);
    PUSH32(esp, esi);
    ebx = ebx & 0x3F;
    if (TEST_Z(LO8(ecx), 0x40)) { sub_00110534(); return; } /* je: equal / zero */

loc_0011052B: ;
    esi = 0x40;
    esi = esi - ebx;
    g_seh_ebp = ebp; sub_00110536(); return; /* tail jmp 0x00110536 */

}

/**
 * sub_00110650
 * Original: 0x00110650 - 0x0011066E (30 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00110650(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00110650: ;
    SET_LO8(eax, MEM8(esp + 4));
    edx = 0; /* xor self */
    SET_LO8(edx, LO8(eax));
    SET_LO8(ecx, LO8(eax));
    SET_LO8(ecx, LO8(ecx) & 0xC0);
    PUSH32(esp, esi);
    edx = edx & 0x3F;
    if (TEST_Z(LO8(eax), 0x40)) { sub_0011066E(); return; } /* je: equal / zero */

loc_00110665: ;
    esi = 0x40;
    esi = esi - edx;
    g_seh_ebp = ebp; sub_00110670(); return; /* tail jmp 0x00110670 */

}

/**
 * sub_001106F0
 * Original: 0x001106F0 - 0x00110709 (25 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001106F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001106F0: ;
    esp = esp - 0x30;
    edx = MEM32(esp + 0x34);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    (void)0; /* cmp ebx, edi - flags set for next jcc */
    MEM32(esp + 4) = edi;
    if (CMP_NE(ebx, edi)) { sub_00110709(); return; } /* jne: not equal / not zero */

loc_00110702: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    esp = esp + 0x30;
    esp += 4; return; /* ret */

}

/**
 * sub_00110990
 * Original: 0x00110990 - 0x00110A8C (252 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00110990(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm5, xmm6;

loc_00110990: ;
    ecx = MEM32(0x84A5F8);
    esp = esp - 0x14;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(0x84A144));
    SET_LO8(ebx, LO8(ebx) + 1);
    SET_LO8(eax, 0); /* xor self */

loc_001109A4: ;
    if (CMP_GE(LO8(eax), LO8(ebx))) { sub_00110A8C(); return; } /* jge: greater or equal (signed >=) */

loc_001109AC: ;
    edx = SX8(LO8(eax));
    edx = (uint32_t)((int32_t)edx * (int32_t)0x6D0);
    if (CMP_NE(MEM16(edx + ecx + 0x3AE), 0)) goto loc_001109C4; /* jne: not equal / not zero */

loc_001109C0: ;
    SET_LO8(eax, LO8(eax) + 1);
    goto loc_001109A4;

loc_001109C4: ;
    SET_LO8(eax, 0); /* xor self */
    MEM8(esp + 7) = LO8(eax);
    /* nop */

loc_001109D0: ;
    if (CMP_GE(LO8(eax), LO8(ebx))) { sub_00110A8C(); return; } /* jge: greater or equal (signed >=) */

loc_001109D8: ;
    ecx = SX8(LO8(eax));
    eax = esi;
    PUSH32(esp, 0); sub_003C68E0(); /* call 0x003C68E0 */

loc_001109E2: ;
    if (TEST_Z(eax, eax)) goto loc_001109F2; /* je: equal / zero */

loc_001109E6: ;
    SET_LO8(eax, MEM8(esp + 7));
    SET_LO8(eax, LO8(eax) + 1);
    MEM8(esp + 7) = LO8(eax);
    goto loc_001109D0;

loc_001109F2: ;
    edx = MEM32(0x7FA200);
    ecx = MEM32(0x8470DC);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x770);
    ebx = 1;
    edx = edx + ecx;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00047FA0(); /* call 0x00047FA0 */

loc_00110A15: ;
    MEM8(esp + 0xC) = LO8(ebx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00110A1E: ;
    eax = eax & 0x8000000Fu;
    if (((int32_t)eax >= 0)) goto loc_00110A2A; /* jns: not sign (positive) */

loc_00110A25: ;
    eax--;
    eax = eax | 0xFFFFFFF0u;
    eax++;

loc_00110A2A: ;
    eax = eax + 0x14;
    MEM16(esp + 0xE) = LO16(eax);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00110A37: ;
    xmm5 = MEMF(0x649B80); /* movss */
    xmm6 = MEMF(0x648D10); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 + xmm6; /* addss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00110A5A: ;
    PUSH32(esp, 0xFF);
    eax = esp + 0x10;
    xmm0 = xmm0 * xmm5; /* mulss */
    PUSH32(esp, 0);
    xmm0 = xmm0 + xmm6; /* addss */
    PUSH32(esp, eax);
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEM8(esp + 0x25) = 0xFF;
    MEM8(esp + 0x24) = LO8(ebx);
    PUSH32(esp, 0); sub_0015A3F0(); /* call 0x0015A3F0 */

loc_00110A82: ;
    esp = esp + 0x10;
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00110AA0
 * Original: 0x00110AA0 - 0x00110AE2 (66 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00110AA0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00110AA0: ;
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(eax + 0x15));
    ecx = ecx & 3;
    if (((int32_t)ecx < 0)) { sub_00110AE2(); return; } /* jl: less (signed <) */

loc_00110AAA: ;
    if (CMP_LE(ecx, 1)) goto loc_00110ACC; /* jle: less or equal (signed <=) */

loc_00110AAF: ;
    if (CMP_NE(ecx, 2)) { sub_00110AE2(); return; } /* jne: not equal / not zero */

loc_00110AB4: ;
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = (uint32_t)(int32_t)SMEM16(eax + 6);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx);
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x648D18); /* mulss */
    esp += 4; return; /* ret */

loc_00110ACC: ;
    eax = (uint32_t)(int32_t)SMEM16(eax + 6);
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x648D88); /* mulss */
    esp += 4; return; /* ret */

}

/**
 * sub_00110AF0
 * Original: 0x00110AF0 - 0x00110B3F (79 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00110AF0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_00110AF0: ;
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(eax + 0x15));
    ecx = ecx & 3;
    ecx = ecx - 0;
    if ((ecx == 0)) { sub_00110B3F(); return; } /* je: equal / zero */

loc_00110AFD: ;
    ecx--;
    if ((ecx == 0)) goto loc_00110B23; /* je: equal / zero */

loc_00110B00: ;
    ecx--;
    if ((ecx == 0)) goto loc_00110B0C; /* je: equal / zero */

loc_00110B03: ;
    xmm0 = MEMF(0x648D14); /* movss */
    esp += 4; return; /* ret */

loc_00110B0C: ;
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = (uint32_t)(int32_t)SMEM16(eax + 8);
    eax = (uint32_t)(int32_t)SMEM16(eax + 6);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    esp += 4; return; /* ret */

loc_00110B23: ;
    ecx = (uint32_t)(int32_t)SMEM16(eax + 6);
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 * MEMF(0x6491F4); /* mulss */
    esp += 4; return; /* ret */

}

/**
 * sub_00110B70
 * Original: 0x00110B70 - 0x00110D73 (515 bytes, 130 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00110B70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00110B70: ;
    esp = esp - 0x18;
    eax = (uint32_t)(int32_t)SMEM16(esi + 6);
    ecx = (uint32_t)(int32_t)SMEM16(esi + 8);
    edx = (uint32_t)(int32_t)SMEM16(esi + 0xA);
    xmm7 = MEMF(esi + 0x24); /* movss */
    xmm5 = (float)(int32_t)eax; /* cvtsi2ss */
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(esi + 0x15));
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x28); /* movss */
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x2C); /* movss */
    eax = eax & 3;
    eax = eax - 0;
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x30); /* movss */
    MEMF(esp + 0xC) = xmm5; /* movss */
    MEMF(esp) = xmm0; /* movss */
    if ((eax == 0)) { sub_00110D73(); return; } /* je: equal / zero */

loc_00110BD3: ;
    eax--;
    if ((eax == 0)) goto loc_00110CD3; /* je: equal / zero */

loc_00110BDA: ;
    eax--;
    if ((eax == 0)) goto loc_00110C06; /* je: equal / zero */

loc_00110BDD: ;
    eax = (uint32_t)(int32_t)SMEM16(esi);
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(edi) = xmm0; /* movss */
    ecx = (uint32_t)(int32_t)SMEM16(esi + 2);
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(edi + 4) = xmm0; /* movss */
    edx = (uint32_t)(int32_t)SMEM16(esi + 4);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(edi + 8) = xmm0; /* movss */
    esp = esp + 0x18;
    esp += 4; return; /* ret */

loc_00110C06: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00110C0B: ;
    xmm5 = xmm0; /* movaps */
    xmm0 = MEMF(esp + 0xC); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(0x648CE0); /* mulss */
    xmm5 = xmm5 * xmm1; /* mulss */
    xmm1 = 0.0f; /* xorps self = zero */
    xmm1 = xmm1 - xmm0; /* subss */
    xmm5 = xmm5 + xmm1; /* addss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00110C33: ;
    xmm6 = xmm0; /* movaps */
    xmm6 = xmm6 * MEMF(esp + 0x10); /* mulss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00110C41: ;
    xmm2 = MEMF(esp + 0x14); /* movss */
    eax = (uint32_t)(int32_t)SMEM16(esi);
    xmm1 = xmm2; /* movaps */
    xmm1 = xmm1 * MEMF(0x648CE0); /* mulss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm1 = 0.0f; /* xorps self = zero */
    xmm1 = xmm1 - xmm2; /* subss */
    xmm2 = MEMF(esp + 8); /* movss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm4 = xmm0; /* movaps */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm1 = xmm6; /* movaps */
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm4 = xmm4 * xmm7; /* mulss */
    xmm6 = xmm6 * xmm7; /* mulss */
    xmm0 = xmm0 + xmm6; /* addss */
    xmm6 = MEMF(esp); /* movss */
    xmm1 = xmm1 - xmm4; /* subss */
    xmm4 = MEMF(esp + 4); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm3 = xmm5; /* movaps */
    xmm3 = xmm3 * xmm4; /* mulss */
    xmm2 = xmm2 * xmm4; /* mulss */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm0 = xmm0 - xmm3; /* subss */
    xmm5 = xmm5 * xmm6; /* mulss */
    xmm2 = xmm2 + xmm5; /* addss */
    xmm3 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm3 = xmm3 + xmm2; /* addss */
    MEMF(edi) = xmm3; /* movss */
    ecx = (uint32_t)(int32_t)SMEM16(esi + 2);
    xmm2 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm2 = xmm2 + xmm1; /* addss */
    MEMF(edi + 4) = xmm2; /* movss */
    g_seh_ebp = ebp; sub_00110E1D(); return; /* tail jmp 0x00110E1D */

loc_00110CD3: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00110CD8: ;
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00110CE6: ;
    xmm5 = MEMF(0x648D30); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 4) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00110CFD: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    /* FPU: fcos  */
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 8) = xmm0; /* movss */
    eax = (uint32_t)(int32_t)SMEM16(esi);
    fp_push(MEMF(esp + 8)); /* fld float */
    /* FPU: fsin  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(esp + 4)); /* fld float */
    /* FPU: fsin  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 8)); /* fld float */
    MEM32(esp + 8) = eax;
    /* FPU: fcos  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push((double)SMEM32(esp + 8)); /* fild */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(edi) = (float)fp_top(); fp_popp(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM16(esi + 2);
    MEM32(esp + 8) = ecx;
    /* fstp st(0) */
    /* fstp st(0) */
    fp_push((double)SMEM32(esp + 8)); /* fild */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(edi + 4) = (float)fp_top(); fp_popp(); /* fstp */
    edx = (uint32_t)(int32_t)SMEM16(esi + 4);
    MEM32(esp + 8) = edx;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(edi + 8) = (float)fp_top(); fp_popp(); /* fstp */
    esp = esp + 0x18;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00110E40
 * Original: 0x00110E40 - 0x00110E7D (61 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00110E40(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_00110E40: ;
    ecx = MEM32(0x8470DC);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x770);
    xmm0 = MEMF(eax + ecx + 0x3BC); /* movss */
    xmm1 = MEMF(0x648F60); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_00110E6B; /* jbe: below or equal (unsigned <=) */

loc_00110E62: ;
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 > xmm1)) goto loc_00110E62; /* ja: above (unsigned >) */

loc_00110E6B: ;
    xmm2 = 0.0f; /* xorps self = zero */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 <= xmm0)) goto loc_00110E7C; /* jbe: below or equal (unsigned <=) */

loc_00110E73: ;
    xmm0 = xmm0 + xmm1; /* addss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 > xmm0)) goto loc_00110E73; /* ja: above (unsigned >) */

loc_00110E7C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00110E80
 * Original: 0x00110E80 - 0x00110F1E (158 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00110E80(void)
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

loc_00110E80: ;
    PUSH32(esp, ecx);
    xmm0 = MEMF(0x648D30); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(esp) = xmm1; /* movss */
    if ((xmm1 <= xmm0)) goto loc_00110EA1; /* jbe: below or equal (unsigned <=) */

loc_00110E93: ;
    xmm1 = xmm1 - xmm0; /* subss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 > xmm0)) goto loc_00110E93; /* ja: above (unsigned >) */

loc_00110E9C: ;
    MEMF(esp) = xmm1; /* movss */

loc_00110EA1: ;
    xmm2 = 0.0f; /* xorps self = zero */
    /* comiss xmm2, xmm1 - sets EFLAGS */
    if ((xmm2 <= xmm1)) goto loc_00110EBE; /* jbe: below or equal (unsigned <=) */

loc_00110EA9: ;
    /* nop */

loc_00110EB0: ;
    xmm1 = xmm1 + xmm0; /* addss */
    /* comiss xmm2, xmm1 - sets EFLAGS */
    if ((xmm2 > xmm1)) goto loc_00110EB0; /* ja: above (unsigned >) */

loc_00110EB9: ;
    MEMF(esp) = xmm1; /* movss */

loc_00110EBE: ;
    xmm1 = MEMF(esp + 8); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(esp + 8) = xmm1; /* movss */
    if ((xmm1 <= xmm0)) goto loc_00110EDF; /* jbe: below or equal (unsigned <=) */

loc_00110ECF: ;
    /* nop */

loc_00110ED0: ;
    xmm1 = xmm1 - xmm0; /* subss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 > xmm0)) goto loc_00110ED0; /* ja: above (unsigned >) */

loc_00110ED9: ;
    MEMF(esp + 8) = xmm1; /* movss */

loc_00110EDF: ;
    /* comiss xmm2, xmm1 - sets EFLAGS */
    if ((xmm2 <= xmm1)) goto loc_00110EF3; /* jbe: below or equal (unsigned <=) */

loc_00110EE4: ;
    xmm1 = xmm1 + xmm0; /* addss */
    /* comiss xmm2, xmm1 - sets EFLAGS */
    if ((xmm2 > xmm1)) goto loc_00110EE4; /* ja: above (unsigned >) */

loc_00110EED: ;
    MEMF(esp + 8) = xmm1; /* movss */

loc_00110EF3: ;
    fp_push(MEMF(esp)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 8) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(0x648D88)); /* fld float */
    xmm0 = xmm0 - MEMF(esp + 8); /* subss */
    fp_push(MEMF(esp + 8)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_00110F1C; /* ja: above (unsigned >) */

loc_00110F16: ;
    xmm0 = MEMF(esp + 8); /* movss */

loc_00110F1C: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00110F20
 * Original: 0x00110F20 - 0x0011102B (267 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00110F20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00110F20: ;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    if (TEST_NZ(ecx, ecx)) goto loc_00110F34; /* jne: not equal / not zero */

loc_00110F30: ;
    ecx = esp + 0x20;

loc_00110F34: ;
    if (TEST_NZ(edi, edi)) goto loc_00110F3C; /* jne: not equal / not zero */

loc_00110F38: ;
    edi = esp + 0x18;

loc_00110F3C: ;
    edx = MEM32(esp + 0x1C);
    if (TEST_NZ(edx, edx)) goto loc_00110F4C; /* jne: not equal / not zero */

loc_00110F44: ;
    edx = esp + 0x20;
    MEM32(esp + 0x1C) = edx;

loc_00110F4C: ;
    ebp = ZX8(MEM8(esp + 0x20));
    edx = MEM32(eax + 4);
    xmm0 = MEMF(eax); /* movss */
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 8);
    esi = ebx + 4;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    ecx = ebp;
    ecx = ecx << 6;
    PUSH32(esp, edx);
    ecx = ecx + 0x76F7C0;
    PUSH32(esp, ecx);
    edx = ebx;
    PUSH32(esp, 0); sub_0029C210(); /* call 0x0029C210 */

loc_00110F76: ;
    xmm0 = MEMF(edi); /* movss */
    esp = esp + 0x18;
    /* comiss xmm0, MEMF(0x6491F0) - sets EFLAGS */
    if ((xmm0 >= MEMF(0x6491F0))) { sub_0011102B(); return; } /* jae: above or equal (unsigned >=) */

loc_00110F8A: ;
    xmm0 = MEMF(0x76F7AC); /* movss */
    /* comiss xmm0, MEMF(edi) - sets EFLAGS */
    if ((xmm0 >= MEMF(edi))) { sub_0011102B(); return; } /* jae: above or equal (unsigned >=) */

loc_00110F9B: ;
    xmm0 = MEMF(edi); /* movss */
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) { sub_0011102B(); return; } /* jnp: not parity */

loc_00110FAC: ;
    edx = MEM32(esp + 0x1C);
    xmm1 = MEMF(0x648D14); /* movss */
    xmm2 = MEMF(0x648D1C); /* movss */
    eax = ebp;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2B0);
    xmm1 = xmm1 / xmm0; /* divss */
    MEMF(edx) = xmm1; /* movss */
    ecx = MEM32(0x84A13C);
    xmm3 = MEMF(eax + ecx + 0x1FC); /* movss */
    xmm0 = MEMF(eax + ecx + 0x200); /* movss */
    xmm3 = xmm3 + xmm2; /* addss */
    xmm3 = xmm3 * MEMF(ebx); /* mulss */
    xmm3 = xmm3 * xmm1; /* mulss */
    xmm3 = xmm3 + MEMF(eax + ecx + 0x224); /* addss */
    MEMF(ebx) = xmm3; /* movss */
    xmm0 = xmm0 + xmm2; /* addss */
    xmm0 = xmm0 * MEMF(esi); /* mulss */
    xmm0 = xmm0 * MEMF(edx); /* mulss */
    edx = MEM32(0x84A13C);
    xmm1 = MEMF(eax + edx + 0x228); /* movss */
    POP32(esp, edi);
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(esi) = xmm1; /* movss */
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00111040
 * Original: 0x00111040 - 0x0011107F (63 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00111040(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00111040: ;
    esp = esp - 0x24;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x38);
    PUSH32(esp, esi);
    esi = eax;
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_NZ(esi, esi)) goto loc_00111055; /* jne: not equal / not zero */

loc_00111051: ;
    esi = esp + 0x28;

loc_00111055: ;
    edi = MEM32(esp + 0x38);
    xmm0 = MEMF(edi + 0x40); /* movss */
    xmm0 = xmm0 - MEMF(edi + 0x4C); /* subss */
    ecx = edi + 0x40;
    ebx = edi + 0x4C;
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm0 = 0.0f; /* xorps self = zero */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 < xmm1)) { sub_0011107F(); return; } /* jb: below (unsigned <) */

loc_00111078: ;
    edx = 1;
    g_seh_ebp = ebp; sub_00111081(); return; /* tail jmp 0x00111081 */

}

/**
 * sub_001112B0
 * Original: 0x001112B0 - 0x001112FB (75 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001112B0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;

loc_001112B0: ;
    esp = esp - 8;
    if (TEST_NZ(ecx, ecx)) goto loc_001112BB; /* jne: not equal / not zero */

loc_001112B7: ;
    ecx = esp + 4;

loc_001112BB: ;
    xmm2 = MEMF(edx + 4); /* movss */
    xmm1 = MEMF(edx + 8); /* movss */
    xmm0 = MEMF(edx); /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm0 = xmm0 * xmm0; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm0 = xmm0 + xmm3; /* addss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm0 = xmm0 + xmm2; /* addss */
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(esp) = xmm0; /* movss */
    if (1 /* jp after test - parity */) { sub_001112FB(); return; } /* jp: parity */

loc_001112F5: ;
    SET_LO8(eax, 0); /* xor self */
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00111360
 * Original: 0x00111360 - 0x00111395 (53 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00111360(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00111360: ;
    esp = esp - 0x18;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x20);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x30);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_003E2270(); /* call 0x003E2270 */

loc_00111373: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) { sub_00111395(); return; } /* je: equal / zero */

loc_0011137A: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(ebx) = xmm0; /* movss */
    MEMF(ebx + 4) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(ebx + 8) = xmm0; /* movss */
    g_seh_ebp = ebp; sub_001113A9(); return; /* tail jmp 0x001113A9 */

}

/**
 * sub_00111580
 * Original: 0x00111580 - 0x001116BB (315 bytes, 89 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00111580(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00111580: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    ebx = eax;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_NZ(ebx, ebx)) goto loc_00111594; /* jne: not equal / not zero */

loc_00111590: ;
    ebx = esp + 0xC;

loc_00111594: ;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    edi = ebx;
    if (TEST_NZ(ebx, ebx)) goto loc_0011159E; /* jne: not equal / not zero */

loc_0011159A: ;
    edi = esp + 0x10;

loc_0011159E: ;
    xmm2 = MEMF(ecx + 4); /* movss */
    xmm1 = MEMF(ecx + 8); /* movss */
    xmm0 = MEMF(ecx); /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm0 = xmm0 * xmm0; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm0 = xmm0 + xmm3; /* addss */
    xmm0 = xmm0 + xmm2; /* addss */
    xmm2 = 0.0f; /* xorps self = zero */
    /* ucomiss xmm0, xmm2 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_001116A4; /* jnp: not parity */

loc_001115D6: ;
    xmm1 = MEMF(ebp + 4); /* movss */
    xmm1 = xmm1 * MEMF(ecx + 4); /* mulss */
    xmm3 = MEMF(ebp + 8); /* movss */
    xmm3 = xmm3 * MEMF(ecx + 8); /* mulss */
    xmm4 = MEMF(edx + 8); /* movss */
    xmm4 = xmm4 * MEMF(ecx + 8); /* mulss */
    xmm1 = xmm1 + xmm3; /* addss */
    xmm3 = MEMF(ecx); /* movss */
    xmm3 = xmm3 * MEMF(ebp); /* mulss */
    xmm1 = xmm1 + xmm3; /* addss */
    xmm3 = MEMF(edx); /* movss */
    xmm3 = xmm3 * MEMF(ecx); /* mulss */
    xmm3 = xmm3 + xmm4; /* addss */
    xmm4 = MEMF(edx + 4); /* movss */
    xmm4 = xmm4 * MEMF(ecx + 4); /* mulss */
    xmm3 = xmm3 + xmm4; /* addss */
    xmm1 = xmm1 - xmm3; /* subss */
    xmm1 = xmm1 / xmm0; /* divss */
    MEMF(edi) = xmm1; /* movss */
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + MEMF(edx); /* addss */
    MEMF(esi) = xmm0; /* movss */
    xmm0 = MEMF(edi); /* movss */
    xmm0 = xmm0 * MEMF(ecx + 4); /* mulss */
    xmm0 = xmm0 + MEMF(edx + 4); /* addss */
    MEMF(esi + 4) = xmm0; /* movss */
    xmm0 = MEMF(edi); /* movss */
    xmm0 = xmm0 * MEMF(ecx + 8); /* mulss */
    xmm0 = xmm0 + MEMF(edx + 8); /* addss */
    MEMF(esi + 8) = xmm0; /* movss */
    /* comiss xmm2, MEMF(ebx) - sets EFLAGS */
    if ((xmm2 > MEMF(ebx))) goto loc_001116A4; /* ja: above (unsigned >) */

loc_00111666: ;
    xmm0 = MEMF(ebx); /* movss */
    /* comiss xmm0, MEMF(0x648D14) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x648D14))) goto loc_001116B4; /* jbe: below or equal (unsigned <=) */

loc_00111673: ;
    xmm0 = MEMF(edx); /* movss */
    xmm0 = xmm0 + MEMF(ecx); /* addss */
    MEMF(esi) = xmm0; /* movss */
    xmm0 = MEMF(edx + 4); /* movss */
    xmm0 = xmm0 + MEMF(ecx + 4); /* addss */
    POP32(esp, edi);
    MEMF(esi + 4) = xmm0; /* movss */
    xmm0 = MEMF(edx + 8); /* movss */
    xmm0 = xmm0 + MEMF(ecx + 8); /* addss */
    POP32(esp, ebp);
    MEMF(esi + 8) = xmm0; /* movss */
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_001116A4: ;
    eax = MEM32(edx);
    MEM32(esi) = eax;
    ecx = MEM32(edx + 4);
    MEM32(esi + 4) = ecx;
    edx = MEM32(edx + 8);
    MEM32(esi + 8) = edx;

loc_001116B4: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_001116C0
 * Original: 0x001116C0 - 0x00111705 (69 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001116C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001116C0: ;
    ecx = MEM32(edx + 0x68);
    esp = esp - 0x14;
    (void)0; /* cmp ecx, 0x96 - flags set for next jcc */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x1C);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    if (CMP_EQ(ecx, 0x96)) goto loc_001116E5; /* je: equal / zero */

loc_001116D5: ;
    if (CMP_EQ(ecx, 0x111)) goto loc_001116E5; /* je: equal / zero */

loc_001116DD: ;
    if (CMP_NE(ecx, 0x114)) { sub_00111705(); return; } /* jne: not equal / not zero */

loc_001116E5: ;
    esi = MEM32(edx + 0x568);
    SET_LO8(eax, MEM8(esi + 0xB2));
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00111705(); return; } /* je: equal / zero */

loc_001116F5: ;
    SET_LO16(eax, MEM16(esi + 0xB6));
    SET_LO16(eax, LO16(eax) + MEM16(edx + 0x174));
    g_seh_ebp = ebp; sub_00111736(); return; /* tail jmp 0x00111736 */

}

/**
 * sub_00111880
 * Original: 0x00111880 - 0x001118CE (78 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00111880(void)
{
    float xmm0;

loc_00111880: ;
    esp = esp - 0xC;
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x43480000);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 5);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = esp + 0x34;
    MEMF(esp + 0x34) = xmm0; /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00141FC0(); /* call 0x00141FC0 */

loc_001118CA: ;
    esp = esp + 0x40;
    esp += 4; return; /* ret */

}

/**
 * sub_001118D0
 * Original: 0x001118D0 - 0x0011192D (93 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001118D0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm3;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_001118D0: ;
    ecx = MEM32(eax + 8);
    PUSH32(esp, ecx);
    ecx = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003E3CA0(); /* call 0x003E3CA0 */

loc_001118DC: ;
    xmm3 = MEMF(0x648D78); /* movss */
    ecx = MEM32(esp + 0xC);
    esp = esp + 8;
    (void)0; /* test edx, edx - flags set for next jcc */
    xmm0 = xmm0 * xmm3; /* mulss */
    MEMF(ecx) = xmm0; /* movss */
    if (TEST_Z(edx, edx)) goto loc_0011192C; /* je: equal / zero */

loc_001118F7: ;
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_push(MEMF(eax)); /* fld float */
    eax = MEM32(eax + 4);
    /* fld st(1) */
    PUSH32(esp, eax);
    fp_st1() *= fp_top(); fp_pop(); /* fmulp */
    PUSH32(esp, ecx);
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    /* fstp st(1) */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_003E3CA0(); /* call 0x003E3CA0 */

loc_00111919: ;
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm0 = xmm0 - MEMF(0x648E3C); /* subss */
    esp = esp + 8;
    MEMF(edx) = xmm0; /* movss */

loc_0011192C: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00111930
 * Original: 0x00111930 - 0x00111959 (41 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00111930(void)
{
    int _flags = 0; /* fallback flag var */

loc_00111930: ;
    if (TEST_Z(eax, eax)) goto loc_00111958; /* je: equal / zero */

loc_00111934: ;
    eax = MEM32(eax + 0x68);
    if (CMP_EQ(eax, 0xFFFF)) goto loc_00111958; /* je: equal / zero */

loc_0011193E: ;
    if (CMP_L(eax, 0x205)) goto loc_00111958; /* jl: less (signed <) */

loc_00111945: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x637FD0);
    PUSH32(esp, 0x7FDB98);
    PUSH32(esp, 0); sub_0046EC2D(); /* call 0x0046EC2D */

loc_00111955: ;
    esp = esp + 0xC;

loc_00111958: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00111960
 * Original: 0x00111960 - 0x001119E2 (130 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00111960(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00111960: ;
    PUSH32(esp, esi);
    esi = eax;
    (void)0; /* cmp MEM32(0x7FA1F8), 0x33 - flags set for next jcc */
    MEM8(esi + 0xA1) = 3;
    if (CMP_EQ(MEM32(0x7FA1F8), 0x33)) goto loc_001119E0; /* je: equal / zero */

loc_00111973: ;
    SET_LO8(ecx, MEM8(0x7819D5));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00111997; /* jne: not equal / not zero */

loc_0011197D: ;
    eax = MEM32(esi + 0x64);
    if (CMP_EQ(eax, 5)) goto loc_00111997; /* je: equal / zero */

loc_00111985: ;
    if (CMP_EQ(eax, 1)) goto loc_00111997; /* je: equal / zero */

loc_0011198A: ;
    if (CMP_EQ(eax, 0x15)) goto loc_00111997; /* je: equal / zero */

loc_0011198F: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_002DB120(); return; /* tail jmp 0x002DB120 */

loc_00111997: ;
    eax = MEM32(esi + 0x568);
    if (TEST_Z(eax, eax)) goto loc_001119B3; /* je: equal / zero */

loc_001119A1: ;
    if (CMP_NE(MEM32(eax + 0xBC), 2)) goto loc_001119B3; /* jne: not equal / not zero */

loc_001119AA: ;
    MEM16(esi + 0x3AE) = 0;

loc_001119B3: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_001119C0; /* je: equal / zero */

loc_001119B7: ;
    MEM8(esi + 0xB4) = 0;
    goto loc_001119CC;

loc_001119C0: ;
    PUSH32(esp, 5);
    eax = esi;
    PUSH32(esp, 0); sub_002E57E0(); /* call 0x002E57E0 */

loc_001119C9: ;
    esp = esp + 4;

loc_001119CC: ;
    esi = MEM32(esi + 0x568);
    if (TEST_Z(esi, esi)) goto loc_001119E0; /* je: equal / zero */

loc_001119D6: ;
    MEM32(esi + 0xA0) = 0;

loc_001119E0: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001119F0
 * Original: 0x001119F0 - 0x001119F7 (7 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001119F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001119F0: ;
    if (CMP_GE(eax & eax, 0)) { sub_001119F7(); return; } /* jge: greater or equal (signed >=) */

loc_001119F4: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_00111A20
 * Original: 0x00111A20 - 0x00111B34 (276 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00111A20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm5;

loc_00111A20: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x64;
    xmm0 = MEMF(0x648E18); /* movss */
    xmm1 = MEMF(edx + 0xC); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    xmm5 = MEMF(0x648D14); /* movss */
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    esp = esp - 0xC;
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 8) = xmm1; /* movss */
    xmm1 = MEMF(edx + 8); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 4) = xmm1; /* movss */
    xmm1 = MEMF(edx + 4); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp) = xmm1; /* movss */
    PUSH32(esp, 0x3F800000);
    esi = eax;
    eax = esp + 0x4C;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, eax);
    edi = ecx;
    PUSH32(esp, 0); sub_003E2E60(); /* call 0x003E2E60 */

loc_00111A89: ;
    ecx = (uint32_t)(int32_t)SMEM16(edx + 0x14);
    eax = (uint32_t)(int32_t)SMEM16(edx + 0x16);
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = (uint32_t)(int32_t)SMEM16(edx + 0x18);
    MEMF(esp + 0x84) = xmm0; /* movss */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    esp = esp + 0x24;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEMF(esp + 0x64) = xmm0; /* movss */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(esp + 0x68) = xmm0; /* movss */
    if (CMP_LE(esi & esi, 0)) goto loc_00111B2D; /* jle: less or equal (signed <=) */

loc_00111ABD: ;
    ebx = MEM32(ebp + 8);
    ebx = ebx - edi;
    MEM32(esp + 0x14) = esi;

loc_00111AC6: ;
    eax = MEM32(edi);
    xmm0 = MEMF(eax); /* movss */
    esi = MEM32(ebx + edi);
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(eax + 4); /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(eax + 8); /* movss */
    edx = esp + 0x30;
    PUSH32(esp, edx);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    MEMF(esp + 0x2C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_00111AFF: ;
    xmm0 = MEMF(esp + 0x24); /* movss */
    eax = MEM32(esp + 0x14);
    MEMF(esi) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x28); /* movss */
    MEMF(esi + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x2C); /* movss */
    edi = edi + 4;
    eax--;
    MEMF(esi + 8) = xmm0; /* movss */
    MEM32(esp + 0x14) = eax;
    if ((eax != 0)) goto loc_00111AC6; /* jne: not equal / not zero */

loc_00111B2D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00111B40
 * Original: 0x00111B40 - 0x00111C5C (284 bytes, 78 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00111B40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm5;

loc_00111B40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x64;
    xmm0 = MEMF(0x648E18); /* movss */
    xmm1 = MEMF(edx + 0xC); /* movss */
    PUSH32(esp, ebx);
    xmm5 = MEMF(0x648D14); /* movss */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    esp = esp - 0xC;
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 8) = xmm1; /* movss */
    xmm1 = MEMF(edx + 8); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 4) = xmm1; /* movss */
    xmm1 = MEMF(edx + 4); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp) = xmm1; /* movss */
    PUSH32(esp, 0x3F800000);
    edi = eax;
    eax = esp + 0x4C;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E2E60(); /* call 0x003E2E60 */

loc_00111BA7: ;
    ecx = (uint32_t)(int32_t)SMEM16(edx + 0x14);
    eax = (uint32_t)(int32_t)SMEM16(edx + 0x16);
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = (uint32_t)(int32_t)SMEM16(edx + 0x18);
    MEMF(esp + 0x84) = xmm0; /* movss */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esp + 0x88) = xmm0; /* movss */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = MEM32(ebp + 0xC);
    esp = esp + 0x24;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEMF(esp + 0x68) = xmm0; /* movss */
    if (CMP_LE(ecx & ecx, 0)) goto loc_00111C55; /* jle: less or equal (signed <=) */

loc_00111BE1: ;
    eax = MEM32(ebp + 8);
    ebx = edi;
    esi = eax + 8;
    ebx = ebx - eax;
    MEM32(esp + 0x14) = ecx;
    /* nop */

loc_00111BF0: ;
    xmm0 = MEMF(esi + -8); /* movss */
    edx = esp + 0x30;
    PUSH32(esp, edx);
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(esi + -4); /* movss */
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(esi); /* movss */
    PUSH32(esp, ecx);
    MEMF(esp + 0x2C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_00111C24: ;
    xmm0 = MEMF(esp + 0x24); /* movss */
    eax = MEM32(esp + 0x14);
    MEMF(edi) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x28); /* movss */
    MEMF(edi + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x2C); /* movss */
    MEMF(ebx + esi) = xmm0; /* movss */
    esi = esi + 0xC;
    edi = edi + 0xC;
    eax--;
    MEM32(esp + 0x14) = eax;
    if ((eax != 0)) goto loc_00111BF0; /* jne: not equal / not zero */

loc_00111C55: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00111C60
 * Original: 0x00111C60 - 0x00111D42 (226 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00111C60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm4;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00111C60: ;
    esp = esp - 0x1C;
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x28);
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_LE(eax & eax, 0)) goto loc_00111D3C; /* jle: less or equal (signed <=) */

loc_00111C73: ;
    xmm4 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x2C);
    PUSH32(esp, esi);
    ebp = ebp - edi;
    MEM32(esp + 0x10) = eax;

loc_00111C82: ;
    ecx = MEM32(edi);
    if (TEST_Z(ecx, ecx)) goto loc_00111D0C; /* je: equal / zero */

loc_00111C8C: ;
    xmm0 = MEMF(ecx); /* movss */
    /* ucomiss xmm0, xmm4 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_00111CB5; /* jp: parity */

loc_00111C99: ;
    xmm0 = MEMF(ecx + 4); /* movss */
    /* ucomiss xmm0, xmm4 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_00111CB5; /* jp: parity */

loc_00111CA7: ;
    xmm0 = MEMF(ecx + 8); /* movss */
    /* ucomiss xmm0, xmm4 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_00111D0C; /* jnp: not parity */

loc_00111CB5: ;
    eax = MEM32(edi);
    xmm0 = MEMF(eax); /* movss */
    esi = MEM32(edi + ebp);
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(eax + 4); /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(eax + 8); /* movss */
    PUSH32(esp, ebx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    MEMF(esp + 0x28) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_00111CEA: ;
    xmm0 = MEMF(esp + 0x20); /* movss */
    MEMF(esi) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x24); /* movss */
    MEMF(esi + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x28); /* movss */
    MEMF(esi + 8) = xmm0; /* movss */
    goto loc_00111D28;

loc_00111D0C: ;
    eax = MEM32(edi + ebp);
    edx = MEM32(ebx + 0x30);
    xmm0 = MEMF(ebx + 0x38); /* movss */
    xmm1 = MEMF(ebx + 0x34); /* movss */
    MEM32(eax) = edx;
    MEMF(eax + 4) = xmm1; /* movss */
    MEMF(eax + 8) = xmm0; /* movss */

loc_00111D28: ;
    eax = MEM32(esp + 0x10);
    edi = edi + 4;
    eax--;
    MEM32(esp + 0x10) = eax;
    if ((eax != 0)) goto loc_00111C82; /* jne: not equal / not zero */

loc_00111D3A: ;
    POP32(esp, esi);
    POP32(esp, ebp);

loc_00111D3C: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_00111D50
 * Original: 0x00111D50 - 0x00111D8B (59 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00111D50(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00111D50: ;
    xmm1 = MEMF(ecx); /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    esp = esp - 0xC;
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    if (1 /* jp after test - parity */) { sub_00111D8B(); return; } /* jp: parity */

loc_00111D68: ;
    xmm1 = MEMF(ecx + 4); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) { sub_00111D8B(); return; } /* jp: parity */

loc_00111D76: ;
    xmm1 = MEMF(ecx + 8); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) { sub_00111D8B(); return; } /* jp: parity */

loc_00111D84: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebp);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00111F90
 * Original: 0x00111F90 - 0x001120DB (331 bytes, 131 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00111F90(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00111F90: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    edx = 0; /* xor self */
    (void)0; /* cmp ebx, edx - flags set for next jcc */
    PUSH32(esp, edi);
    edi = eax;
    esi = ecx;
    if (CMP_EQ(ebx, edx)) { sub_001120DB(); return; } /* je: equal / zero */

loc_00111FA6: ;
    if (CMP_EQ(esi, edx)) { sub_001120DB(); return; } /* je: equal / zero */

loc_00111FAE: ;
    ecx = MEM32(ebx + 0x3C8);
    if (CMP_EQ(ecx, edx)) { sub_001120DB(); return; } /* je: equal / zero */

loc_00111FBC: ;
    eax = MEM32(esi + 0xC4);
    (void)0; /* cmp eax, edx - flags set for next jcc */
    PUSH32(esp, ebp);
    if (CMP_EQ(eax, edx)) goto loc_00111FDD; /* je: equal / zero */

loc_00111FC7: ;
    SET_LO8(ecx, MEM8(eax + 8));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0011201F; /* je: equal / zero */

loc_00111FCE: ;
    eax = MEM32(eax);
    ecx = MEM32(eax + 0xC);
    edi = edi << 6;
    edi = edi + ecx;
    goto loc_0011206C;

loc_00111FDD: ;
    SET_LO16(ebp, MEM16(esi + 0x28));
    if (CMP_EQ(LO16(ebp), LO16(edx))) goto loc_00112059; /* je: equal / zero */

loc_00111FE6: ;
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x10) = edx;
    SET_LO8(edx, MEM8(ebx + 0x10B));
    ecx = 0; /* xor self */
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0011201F; /* je: equal / zero */

loc_00111FFA: ;
    edi = MEM32(0x847200);
    if (TEST_Z(edi, edi)) goto loc_0011201F; /* je: equal / zero */

loc_00112004: ;
    (void)0; /* cmp MEM8(edi), LO8(edx) - flags set for next jcc */
    eax = MEM32(edi + 0xE0);
    if (CMP_NE(MEM8(edi), LO8(edx))) goto loc_00112019; /* jne: not equal / not zero */

loc_0011200E: ;
    if (CMP_NE(MEM16(edi + 0xA), LO16(ebp))) goto loc_00112019; /* jne: not equal / not zero */

loc_00112014: ;
    if (TEST_Z(ecx, ecx)) goto loc_00112027; /* je: equal / zero */

loc_00112018: ;
    ecx--;

loc_00112019: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    edi = eax;
    if (TEST_NZ(eax, eax)) goto loc_00112004; /* jne: not equal / not zero */

loc_0011201F: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00112027: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00077F70(); /* call 0x00077F70 */

loc_00112038: ;
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_0011201F; /* je: equal / zero */

loc_0011203F: ;
    eax = MEM32(edi + 0xC4);
    if (TEST_Z(eax, eax)) goto loc_00112053; /* je: equal / zero */

loc_00112049: ;
    edi = ZX16(MEM16(esi + 0x2A));
    eax = MEM32(esp + 0x18);
    goto loc_00112067;

loc_00112053: ;
    edi = MEM32(esp + 0x18);
    goto loc_0011206C;

loc_00112059: ;
    eax = MEM32(esi + 0x60);
    if (CMP_EQ(eax, edx)) goto loc_001120B4; /* je: equal / zero */

loc_00112060: ;
    edi = (uint32_t)(int32_t)SMEM8(0x7FA230);

loc_00112067: ;
    edi = edi << 6;
    edi = edi + eax;

loc_0011206C: ;
    if (TEST_Z(edi, edi)) goto loc_0011201F; /* je: equal / zero */

loc_00112070: ;
    ebp = MEM32(esp + 0x24);
    if (CMP_LE(ebp & ebp, 0)) goto loc_001120AC; /* jle: less or equal (signed <=) */

loc_00112078: ;
    esi = MEM32(esp + 0x1C);
    ebx = MEM32(esp + 0x20);
    ebx = ebx - esi;

loc_00112082: ;
    eax = MEM32(ebx + esi);
    ecx = MEM32(esi);
    xmm0 = MEMF(ecx); /* movss */
    edx = eax + 8;
    PUSH32(esp, edx);
    edx = eax + 4;
    PUSH32(esp, edx);
    edx = MEM32(ecx + 4);
    PUSH32(esp, eax);
    eax = MEM32(ecx + 8);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    eax = edi;
    PUSH32(esp, 0); sub_0029C1B0(); /* call 0x0029C1B0 */

loc_001120A3: ;
    esp = esp + 0x14;
    esi = esi + 4;
    ebp--;
    if ((ebp != 0)) goto loc_00112082; /* jne: not equal / not zero */

loc_001120AC: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_001120B4: ;
    eax = ZX16(MEM16(esi + 4));
    eax = eax << 6;
    eax = eax + ecx;
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x28);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, 0); sub_00111C60(); /* call 0x00111C60 */

loc_001120D0: ;
    esp = esp + 8;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001120F0
 * Original: 0x001120F0 - 0x001121D8 (232 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001120F0(void)
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

loc_001120F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF8u;
    esp = esp - 8;
    eax = MEM32(esi);
    MEM32(esp + 4) = eax;
    fp_push(MEMF(esp + 4)); /* fld float */
    esp = esp - 8;
    MEMD(esp) = fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_0046EB27(); /* call 0x0046EB27 */

loc_0011210E: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) { sub_001121D8(); return; } /* jne: not equal / not zero */

loc_00112119: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    esp = esp - 8;
    MEMD(esp) = fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_0046EB12(); /* call 0x0046EB12 */

loc_00112128: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) { sub_001121D8(); return; } /* je: equal / zero */

loc_00112133: ;
    ecx = MEM32(esi + 4);
    MEM32(esp + 4) = ecx;
    fp_push(MEMF(esp + 4)); /* fld float */
    esp = esp - 8;
    MEMD(esp) = fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_0046EB27(); /* call 0x0046EB27 */

loc_00112149: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) { sub_001121D8(); return; } /* jne: not equal / not zero */

loc_00112154: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    esp = esp - 8;
    MEMD(esp) = fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_0046EB12(); /* call 0x0046EB12 */

loc_00112163: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) { sub_001121D8(); return; } /* je: equal / zero */

loc_0011216A: ;
    edx = MEM32(esi + 8);
    MEM32(esp + 4) = edx;
    fp_push(MEMF(esp + 4)); /* fld float */
    esp = esp - 8;
    MEMD(esp) = fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_0046EB27(); /* call 0x0046EB27 */

loc_00112180: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) { sub_001121D8(); return; } /* jne: not equal / not zero */

loc_00112187: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    esp = esp - 8;
    MEMD(esp) = fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_0046EB12(); /* call 0x0046EB12 */

loc_00112196: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) { sub_001121D8(); return; } /* je: equal / zero */

loc_0011219D: ;
    fp_push(MEMF(esi)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x64975C)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) { sub_001121D8(); return; } /* jbe: below or equal (unsigned <=) */

loc_001121AD: ;
    fp_push(MEMF(esi + 4)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x64975C)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) { sub_001121D8(); return; } /* jbe: below or equal (unsigned <=) */

loc_001121BE: ;
    fp_push(MEMF(esi + 8)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x64975C)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) { sub_001121D8(); return; } /* jbe: below or equal (unsigned <=) */

loc_001121CF: ;
    eax = 1;
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
 * sub_001121E0
 * Original: 0x001121E0 - 0x00112393 (435 bytes, 140 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001121E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001121E0: ;
    ecx = MEM32(esp + 4);
    esp = esp - 0x14;
    PUSH32(esp, ebx);
    ebx = eax;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x28);
    if (TEST_Z(ebx, ebx)) goto loc_0011238D; /* je: equal / zero */

loc_001121F7: ;
    PUSH32(esp, esi);
    esi = ecx;
    esi = (uint32_t)((int32_t)esi * (int32_t)ebx);
    esi = esi >> 2;
    eax = esi + 5;
    (void)0; /* cmp eax, 0x7FF - flags set for next jcc */
    MEM32(esp + 0xC) = 0;
    if (CMP_A(eax, 0x7FF)) goto loc_00112268; /* ja: above (unsigned >) */

loc_00112212: ;
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    edi = esp + 0x14;
    PUSH32(esp, 0); sub_000A75E0(); /* call 0x000A75E0 */

loc_00112221: ;
    eax = MEM32(esp + 0x14);
    edx = esi * 4;
    esi = MEM32(esp + 0x38);
    ecx = edx;
    ebx = ecx;
    ecx = ecx >> 2;
    edi = eax;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = ebx;
    eax = eax + edx;
    edx = MEM32(0x5499E8);
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    esp = esp + 8;
    MEM32(eax) = 0x417FC;
    eax = eax + 4;
    POP32(esp, esi);
    MEM32(eax) = 0;
    eax = eax + 4;
    POP32(esp, edi);
    MEM32(edx) = eax;
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_00112268: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edi);
    ecx = ecx >> 2;
    eax = 0x7FA;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    PUSH32(esp, ebp);
    edx = 0; /* xor self */
    esi = 0; /* xor self */
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x14) = esi;
    ebp = eax;
    eax = ebx;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)edi);
      edx = (uint32_t)(_dividend % (uint32_t)edi); }
    ebx = ebp;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)ecx);
    MEM32(esp + 0x20) = ebp;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x18) = eax;
    if (CMP_LE(eax & eax, 0)) goto loc_0011238B; /* jle: less or equal (signed <=) */

loc_0011229E: ;
    edx = MEM32(0x5499E8);
    goto loc_001122B2;

loc_001122A6: ;
    edi = MEM32(esp + 0x30);
    ecx = MEM32(esp + 0x1C);
    ebp = MEM32(esp + 0x20);

loc_001122B2: ;
    (void)0; /* cmp eax, ebp - flags set for next jcc */
    MEM32(esp + 0x10) = ebp;
    if (CMP_GE(eax, ebp)) goto loc_001122C3; /* jge: greater or equal (signed >=) */

loc_001122BA: ;
    ebx = eax;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)ecx);
    MEM32(esp + 0x10) = eax;

loc_001122C3: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(esp + 0x28));
    esi = (uint32_t)((int32_t)esi * (int32_t)edi);
    edi = MEM32(esp + 0x34);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    esi = esi + edi;
    PUSH32(esp, 0); sub_00543200(); /* call 0x00543200 */

loc_001122D9: ;
    ecx = MEM32(0x5499E8);
    eax = MEM32(ecx);
    ecx = MEM32(ecx + 4);
    edx = eax + ebx * 4 + 0x18;
    ecx = ecx + 0x200;
    if (CMP_B(edx, ecx)) goto loc_00112313; /* jb: below (unsigned <) */

loc_001122F2: ;
    ecx = MEM32(0x54A8B8);
    eax = ecx;
    edx = ebx * 4 + 0x21C;
    ecx = ecx >> 1;
    (void)0; /* cmp edx, ecx - flags set for next jcc */
    if (CMP_A(edx, ecx)) ecx = edx; /* cmova */
    (void)0; /* cmp edx, eax - flags set for next jcc */
    PUSH32(esp, ecx);
    if (CMP_A(edx, eax)) eax = edx; /* cmova */
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_00112313: ;
    edx = MEM32(esp + 0x2C);
    MEM32(eax) = 0x417FC;
    MEM32(eax + 4) = edx;
    eax = eax + 4;
    eax = eax + 4;
    ecx = ebx;
    ecx = ecx << 0x12;
    ecx = ecx + 0x40001818;
    MEM32(eax) = ecx;
    eax = eax + 4;
    edx = ebx * 4;
    ecx = edx;
    ebp = ecx;
    edi = eax;
    ecx = ecx >> 2;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    eax = eax + edx;
    edx = MEM32(0x5499E8);
    ecx = ebp;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    ecx = MEM32(esp + 0x10);
    esi = MEM32(esp + 0x14);
    MEM32(eax) = 0x417FC;
    eax = eax + 4;
    MEM32(eax) = 0;
    eax = eax + 4;
    MEM32(edx) = eax;
    eax = MEM32(esp + 0x18);
    eax = eax - ecx;
    esi = esi + ecx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x14) = esi;
    MEM32(esp + 0x18) = eax;
    if (CMP_G(eax & eax, 0)) goto loc_001122A6; /* jg: greater (signed >) */

loc_0011238B: ;
    POP32(esp, ebp);
    POP32(esp, esi);

loc_0011238D: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_001123A0
 * Original: 0x001123A0 - 0x001125C9 (553 bytes, 149 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001123A0(void)
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

loc_001123A0: ;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(esi + 0x15));
    esp = esp - 8;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    eax = eax & 3;
    eax = eax - 0;
    if ((eax == 0)) { sub_001125C9(); return; } /* je: equal / zero */

loc_001123B9: ;
    eax--;
    if ((eax == 0)) goto loc_00112514; /* je: equal / zero */

loc_001123C0: ;
    eax--;
    if ((eax == 0)) goto loc_00112418; /* je: equal / zero */

loc_001123C3: ;
    eax = (uint32_t)(int32_t)SMEM16(esi);
    ecx = MEM32(esp + 0x10);
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    eax = MEM32(esp + 0x14);
    MEMF(ecx) = xmm0; /* movss */
    edx = (uint32_t)(int32_t)SMEM16(esi + 4);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(eax) = xmm0; /* movss */
    ecx = (uint32_t)(int32_t)SMEM16(esi + 2);
    edx = (uint32_t)(int32_t)SMEM16(esi + 8);
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 + xmm1; /* addss */
    MEMF(ebp) = xmm0; /* movss */
    eax = (uint32_t)(int32_t)SMEM16(esi + 2);
    ecx = (uint32_t)(int32_t)SMEM16(esi + 8);
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = xmm0 - xmm1; /* subss */
    MEMF(ebx) = xmm0; /* movss */
    POP32(esp, ebp);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_00112418: ;
    fp_push(MEMF(esi + 0x10)); /* fld float */
    PUSH32(esp, edi);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    edi = (uint32_t)(int32_t)SMEM16(esi + 6);
    /* fld st(0) */
    /* FPU: fsin  */
    MEMF(esp + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    /* FPU: fcos  */
    MEMF(esp + 8) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00112439: ;
    xmm2 = MEMF(0x649694); /* movss */
    xmm3 = MEMF(0x648CE0); /* movss */
    eax = eax & 0xFFFF;
    xmm0 = (float)(int32_t)edi; /* cvtsi2ss */
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm0 = xmm0 * xmm3; /* mulss */
    edi = (uint32_t)(-(int32_t)edi);
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm0 = (float)(int32_t)edi; /* cvtsi2ss */
    edi = (uint32_t)(int32_t)SMEM16(esi + 0xA);
    xmm1 = xmm1 + xmm0; /* addss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00112475: ;
    edx = (uint32_t)(int32_t)SMEM16(esi);
    eax = eax & 0xFFFF;
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    eax = MEM32(esp + 0x14);
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm2 = (float)(int32_t)edi; /* cvtsi2ss */
    xmm2 = xmm2 * xmm3; /* mulss */
    xmm3 = MEMF(esp + 0xC); /* movss */
    xmm0 = xmm0 * xmm2; /* mulss */
    edi = (uint32_t)(-(int32_t)edi);
    xmm2 = (float)(int32_t)edi; /* cvtsi2ss */
    xmm0 = xmm0 + xmm2; /* addss */
    xmm2 = MEMF(esp + 8); /* movss */
    xmm5 = xmm0; /* movaps */
    xmm4 = xmm1; /* movaps */
    xmm4 = xmm4 * xmm2; /* mulss */
    xmm5 = xmm5 * xmm3; /* mulss */
    xmm4 = xmm4 + xmm5; /* addss */
    xmm5 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = MEM32(esp + 0x18);
    xmm4 = xmm4 + xmm5; /* addss */
    MEMF(eax) = xmm4; /* movss */
    ecx = (uint32_t)(int32_t)SMEM16(esi + 4);
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm0 = xmm0 - xmm1; /* subss */
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = xmm0 + xmm1; /* addss */
    MEMF(edx) = xmm0; /* movss */
    eax = (uint32_t)(int32_t)SMEM16(esi + 8);
    ecx = (uint32_t)(int32_t)SMEM16(esi + 2);
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = xmm0 + xmm1; /* addss */
    MEMF(ebp) = xmm0; /* movss */
    edx = (uint32_t)(int32_t)SMEM16(esi + 2);
    POP32(esp, edi);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(ebx) = xmm0; /* movss */
    POP32(esp, ebp);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_00112514: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00112519: ;
    eax = eax & 0xFFFF;
    MEM32(esp + 8) = eax;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00112537: ;
    eax = eax & 0xFFFF;
    MEM32(esp + 8) = eax;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    eax = (uint32_t)(int32_t)SMEM16(esi + 6);
    MEM32(esp + 8) = eax;
    ecx = (uint32_t)(int32_t)SMEM16(esi);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fimul dword ptr [esp + 8] */
    edx = MEM32(esp + 0x10);
    MEM32(esp + 8) = ecx;
    ecx = MEM32(esp + 0x14);
    MEMF(esp + 4) = (float)fp_top(); fp_popp(); /* fstp */
    /* fld st(0) */
    /* FPU: fcos  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fiadd dword ptr [esp + 8] */
    MEMF(edx) = (float)fp_top(); fp_popp(); /* fstp */
    eax = (uint32_t)(int32_t)SMEM16(esi + 4);
    MEM32(esp + 8) = eax;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    /* FPU: fsin  */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    MEMF(ecx) = (float)fp_top(); fp_popp(); /* fstp */
    edx = (uint32_t)(int32_t)SMEM16(esi + 6);
    eax = (uint32_t)(int32_t)SMEM16(esi + 2);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 + xmm1; /* addss */
    MEMF(ebp) = xmm0; /* movss */
    ecx = (uint32_t)(int32_t)SMEM16(esi + 2);
    edx = (uint32_t)(int32_t)SMEM16(esi + 6);
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 - xmm1; /* subss */
    MEMF(ebx) = xmm0; /* movss */
    POP32(esp, ebp);
    esp = esp + 8;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00112680
 * Original: 0x00112680 - 0x001126E8 (104 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00112680(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00112680: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    if (TEST_NZ(edi, edi)) goto loc_00112698; /* jne: not equal / not zero */

loc_00112694: ;
    edi = esp + 0x1C;

loc_00112698: ;
    eax = SX16(LO16(eax));
    esi = ecx + eax * 4;
    MEM8(edi) = 0;
    if (CMP_NE(MEM32(esi), 0)) goto loc_001126CC; /* jne: not equal / not zero */

loc_001126A6: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x26);
    edx = ebx + ebx;
    PUSH32(esp, 0x5F3E90);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_001126B8: ;
    esp = esp + 0x10;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi) = eax;
    if (TEST_NZ(eax, eax)) goto loc_001126C9; /* jne: not equal / not zero */

loc_001126C1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp) = eax;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001126C9: ;
    MEM8(edi) = 1;

loc_001126CC: ;
    SET_LO8(ecx, MEM8(0x7FA230));
    eax = 0; /* xor self */
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    ecx = MEM32(esi);
    SET_LO8(eax, (TEST_NZ(LO8(ecx), LO8(ecx))) ? 1 : 0); /* setne */
    POP32(esp, edi);
    POP32(esp, esi);
    eax--;
    eax = eax & ebx;
    eax = eax + ecx;
    MEM32(ebp) = eax;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001126F0
 * Original: 0x001126F0 - 0x00112748 (88 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001126F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001126F0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    edi = 4;
    /* nop */

loc_00112700: ;
    eax = MEM32(esi);
    if (TEST_Z(eax, eax)) goto loc_0011273F; /* je: equal / zero */

loc_00112706: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_0011270C: ;
    if (TEST_NZ(eax, eax)) goto loc_0011273F; /* jne: not equal / not zero */

loc_00112710: ;
    eax = MEM32(esi);
    if (TEST_Z(eax, eax)) goto loc_0011273F; /* je: equal / zero */

loc_00112716: ;
    ecx = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    ecx++;
    edx--;
    PUSH32(esp, eax);
    MEM32(0x7FA490) = ecx;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_00112736: ;
    esp = esp + 4;
    MEM32(esi) = 0;

loc_0011273F: ;
    esi = esi + 4;
    edi--;
    if ((edi != 0)) goto loc_00112700; /* jne: not equal / not zero */

loc_00112745: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00112750
 * Original: 0x00112750 - 0x0011293D (493 bytes, 130 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00112750(void)
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

loc_00112750: ;
    esp = esp - 8;
    ecx = MEM32(esp + 0xC);
    fp_push(MEMF(ecx)); /* fld float */
    PUSH32(esp, ebx);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    SET_LO8(ebx, LO8(eax));
    eax = MEM32(esp + 0x18);
    xmm0 = MEMF(eax); /* movss */
    /* fld st(0) */
    PUSH32(esp, ebp);
    /* FPU: fcos  */
    MEMF(esp + 0xC) = xmm0; /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0011277E: ;
    /* FPU: fsin  */
    ebp = eax;
    MEM32(esp + 8) = ebp;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0011278F: ;
    SET_LO8(ebx, LO8(ebx) >> 1);
    ebx = ZX8(LO8(ebx));
    ecx = 0; /* xor self */
    (void)0; /* cmp ebx, 4 - flags set for next jcc */
    MEM32(esp + 0x18) = eax;
    if (CMP_L(ebx, 4)) goto loc_001128A7; /* jl: less (signed <) */

loc_001127A3: ;
    edx = LO16(ebp);
    ebp = edx;
    xmm2 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = SX16(LO16(eax));
    ebp = (uint32_t)(-(int32_t)ebp);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1 = (float)(int32_t)ebp; /* cvtsi2ss */
    eax = ebx + -3;
    edx = ebx + edi + 1;

loc_001127C0: ;
    ebp = ZX8(MEM8(edi + ecx));
    ebp = (uint32_t)((int32_t)ebp * (int32_t)0x1C);
    MEMF(esi + ebp) = xmm1; /* movss */
    ebp = ZX8(MEM8(edi + ecx));
    ebp = (uint32_t)((int32_t)ebp * (int32_t)0x1C);
    MEMF(esi + ebp + 4) = xmm0; /* movss */
    ebp = ZX8(MEM8(edx + ecx + -1));
    ebp = (uint32_t)((int32_t)ebp * (int32_t)0x1C);
    MEMF(esi + ebp) = xmm2; /* movss */
    ebp = ZX8(MEM8(edx + ecx + -1));
    ebp = (uint32_t)((int32_t)ebp * (int32_t)0x1C);
    MEMF(esi + ebp + 4) = xmm0; /* movss */
    ebp = ZX8(MEM8(edi + ecx + 1));
    ebp = (uint32_t)((int32_t)ebp * (int32_t)0x1C);
    MEMF(esi + ebp) = xmm1; /* movss */
    ebp = ZX8(MEM8(edi + ecx + 1));
    ebp = (uint32_t)((int32_t)ebp * (int32_t)0x1C);
    MEMF(esi + ebp + 4) = xmm0; /* movss */
    ebp = ZX8(MEM8(edx + ecx));
    ebp = (uint32_t)((int32_t)ebp * (int32_t)0x1C);
    MEMF(esi + ebp) = xmm2; /* movss */
    ebp = ZX8(MEM8(edx + ecx));
    ebp = (uint32_t)((int32_t)ebp * (int32_t)0x1C);
    MEMF(esi + ebp + 4) = xmm0; /* movss */
    ebp = ZX8(MEM8(edi + ecx + 2));
    ebp = (uint32_t)((int32_t)ebp * (int32_t)0x1C);
    MEMF(esi + ebp) = xmm1; /* movss */
    ebp = ZX8(MEM8(edi + ecx + 2));
    ebp = (uint32_t)((int32_t)ebp * (int32_t)0x1C);
    MEMF(esi + ebp + 4) = xmm0; /* movss */
    ebp = ZX8(MEM8(edx + ecx + 1));
    ebp = (uint32_t)((int32_t)ebp * (int32_t)0x1C);
    MEMF(esi + ebp) = xmm2; /* movss */
    ebp = ZX8(MEM8(edx + ecx + 1));
    ebp = (uint32_t)((int32_t)ebp * (int32_t)0x1C);
    MEMF(esi + ebp + 4) = xmm0; /* movss */
    ebp = ZX8(MEM8(edi + ecx + 3));
    ebp = (uint32_t)((int32_t)ebp * (int32_t)0x1C);
    MEMF(esi + ebp) = xmm1; /* movss */
    ebp = ZX8(MEM8(edi + ecx + 3));
    ebp = (uint32_t)((int32_t)ebp * (int32_t)0x1C);
    MEMF(esi + ebp + 4) = xmm0; /* movss */
    ebp = ZX8(MEM8(edx + ecx + 2));
    ebp = (uint32_t)((int32_t)ebp * (int32_t)0x1C);
    MEMF(esi + ebp) = xmm2; /* movss */
    ebp = ZX8(MEM8(edx + ecx + 2));
    ebp = (uint32_t)((int32_t)ebp * (int32_t)0x1C);
    ecx = ecx + 4;
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    MEMF(esi + ebp + 4) = xmm0; /* movss */
    if (CMP_L(ecx, eax)) goto loc_001127C0; /* jl: less (signed <) */

loc_0011289F: ;
    ebp = MEM32(esp + 8);
    eax = MEM32(esp + 0x18);

loc_001128A7: ;
    if (CMP_GE(ecx, ebx)) goto loc_001128FB; /* jge: greater or equal (signed >=) */

loc_001128AB: ;
    edx = LO16(ebp);
    eax = SX16(LO16(eax));
    ebp = edx;
    ebp = (uint32_t)(-(int32_t)ebp);
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1 = (float)(int32_t)ebp; /* cvtsi2ss */
    xmm2 = (float)(int32_t)edx; /* cvtsi2ss */
    eax = ebx + edi;

loc_001128C4: ;
    edx = ZX8(MEM8(ecx + edi));
    edx = (uint32_t)((int32_t)edx * (int32_t)0x1C);
    MEMF(edx + esi) = xmm1; /* movss */
    edx = ZX8(MEM8(ecx + edi));
    edx = (uint32_t)((int32_t)edx * (int32_t)0x1C);
    MEMF(edx + esi + 4) = xmm0; /* movss */
    edx = ZX8(MEM8(eax + ecx));
    edx = (uint32_t)((int32_t)edx * (int32_t)0x1C);
    MEMF(edx + esi) = xmm2; /* movss */
    edx = ZX8(MEM8(eax + ecx));
    edx = (uint32_t)((int32_t)edx * (int32_t)0x1C);
    ecx++;
    (void)0; /* cmp ecx, ebx - flags set for next jcc */
    MEMF(edx + esi + 4) = xmm0; /* movss */
    if (CMP_L(ecx, ebx)) goto loc_001128C4; /* jl: less (signed <) */

loc_001128FB: ;
    eax = MEM32(esp + 0x14);
    xmm0 = (float)(int32_t)MEM32(0x7FA20C); /* cvtsi2ss */
    xmm1 = MEMF(esp + 0xC); /* movss */
    xmm2 = MEMF(esp + 0x20); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + MEMF(eax); /* addss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    POP32(esp, ebp);
    MEMF(eax) = xmm0; /* movss */
    POP32(esp, ebx);
    if ((xmm0 < xmm2)) { sub_0011293D(); return; } /* jb: below (unsigned <) */

loc_00112926: ;
    xmm0 = 0.0f; /* xorps self = zero */
    ecx = MEM32(esp + 0x14);
    xmm0 = xmm0 - xmm1; /* subss */
    MEMF(ecx) = xmm0; /* movss */
    MEMF(eax) = xmm2; /* movss */
    esp = esp + 8;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00112960
 * Original: 0x00112960 - 0x00112A92 (306 bytes, 103 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00112960(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00112960: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0x24));
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_LE(MEM16(esp + 0x30), LO16(edi))) goto loc_00112A8C; /* jle: less or equal (signed <=) */

loc_00112976: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x20);
    PUSH32(esp, ebp);
    /* nop */

loc_00112980: ;
    eax = 0; /* xor self */
    SET_LO8(eax, LO8(ebx));
    SET_LO8(eax, LO8(eax) - 0x40);
    SET_LO8(ecx, LO8(eax));
    SET_LO8(ecx, LO8(ecx) & 0xC0);
    if (TEST_Z(LO8(eax), 0x40)) goto loc_0011299B; /* je: equal / zero */

loc_0011298F: ;
    eax = eax & 0x3F;
    edx = 0x40;
    edx = edx - eax;
    goto loc_001129A0;

loc_0011299B: ;
    eax = eax & 0x3F;
    edx = eax;

loc_001129A0: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_001129B7; /* je: equal / zero */

loc_001129A4: ;
    if (CMP_EQ(LO8(ecx), 0xC0)) goto loc_001129B7; /* je: equal / zero */

loc_001129A9: ;
    xmm1 = 0.0f; /* xorps self = zero */
    xmm1 = xmm1 - MEMF(edx * 4 + 0x743090); /* subss */
    goto loc_001129C0;

loc_001129B7: ;
    xmm1 = MEMF(edx * 4 + 0x743090); /* movss */

loc_001129C0: ;
    SET_LO8(edx, LO8(ebx));
    SET_LO8(edx, LO8(edx) & 0xC0);
    (void)0; /* test LO8(ebx), 0x40 - flags set for next jcc */
    ecx = ZX8(LO8(ebx));
    if (TEST_Z(LO8(ebx), 0x40)) goto loc_001129DB; /* je: equal / zero */

loc_001129CD: ;
    ebp = ecx;
    ebp = ebp & 0x3F;
    eax = 0x40;
    eax = eax - ebp;
    goto loc_001129E0;

loc_001129DB: ;
    eax = ecx;
    eax = eax & 0x3F;

loc_001129E0: ;
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_001129F7; /* je: equal / zero */

loc_001129E4: ;
    if (CMP_EQ(LO8(edx), 0xC0)) goto loc_001129F7; /* je: equal / zero */

loc_001129E9: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm0 = xmm0 - MEMF(eax * 4 + 0x743090); /* subss */
    goto loc_00112A00;

loc_001129F7: ;
    xmm0 = MEMF(eax * 4 + 0x743090); /* movss */

loc_00112A00: ;
    eax = ZX8(MEM8(esp + 0x3C));
    xmm2 = MEMF(esp + 0x2C); /* movss */
    eax = MEM32(eax * 4 + 0x6B46D0);
    (void)0; /* test eax, eax - flags set for next jcc */
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm1 = xmm1 + MEMF(esp + 0x20); /* addss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm0 = xmm0 + MEMF(esp + 0x28); /* addss */
    MEMF(esp + 0x10) = xmm1; /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    if (TEST_Z(eax, eax)) goto loc_00112A78; /* je: equal / zero */

loc_00112A36: ;
    edx = MEM32(esp + 0x4C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x4C);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x4C);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x4C);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x3C);
    PUSH32(esp, edx);
    edx = ZX8(MEM8(esp + 0x44));
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x38);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x44);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x38);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x38);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00112A71: ;
    esp = esp + 0x3C;
    if (TEST_Z(eax, eax)) goto loc_00112A8A; /* je: equal / zero */

loc_00112A78: ;
    SET_LO8(ecx, MEM8(esp + 0x34));
    edi++;
    SET_LO8(ebx, LO8(ebx) + LO8(ecx));
    if (CMP_L(LO16(edi), MEM16(esp + 0x38))) goto loc_00112980; /* jl: less (signed <) */

loc_00112A8A: ;
    POP32(esp, ebp);
    POP32(esp, esi);

loc_00112A8C: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00112AA0
 * Original: 0x00112AA0 - 0x00112C47 (423 bytes, 109 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00112AA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00112AA0: ;
    xmm0 = MEMF(0x648CE0); /* movss */
    xmm4 = MEMF(esp + 0x1C); /* movss */
    esp = esp - 0x18;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    /* comiss xmm0, xmm4 - sets EFLAGS */
    if ((xmm0 > xmm4)) goto loc_00112C42; /* ja: above (unsigned >) */

loc_00112ABD: ;
    xmm0 = MEMF(0x648D14); /* movss */
    xmm5 = MEMF(esp + 0x20); /* movss */
    xmm7 = MEMF(esp + 0x28); /* movss */
    xmm6 = MEMF(esp + 0x24); /* movss */
    xmm1 = xmm4; /* movaps */
    xmm1 = xmm1 - xmm0; /* subss */
    xmm0 = xmm0 / xmm1; /* divss */
    xmm1 = MEMF(esp + 0x2C); /* movss */
    eax = (int32_t)xmm4; /* cvttss2si */
    (void)0; /* test LO8(eax), 1 - flags set for next jcc */
    xmm1 = xmm1 - xmm5; /* subss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 4) = xmm1; /* movss */
    if (TEST_Z(LO8(eax), 1)) goto loc_00112B28; /* je: equal / zero */

loc_00112AFE: ;
    xmm2 = MEMF(esp + 0x30); /* movss */
    xmm3 = MEMF(esp + 0x34); /* movss */
    xmm2 = xmm2 - xmm6; /* subss */
    xmm3 = xmm3 - xmm7; /* subss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm3 = xmm3 * xmm0; /* mulss */
    MEMF(esp + 8) = xmm2; /* movss */
    MEMF(esp + 0xC) = xmm3; /* movss */
    goto loc_00112B62;

loc_00112B28: ;
    xmm1 = MEMF(esp + 0x30); /* movss */
    xmm1 = xmm1 - xmm6; /* subss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 8) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x34); /* movss */
    xmm2 = MEMF(esp + 8); /* movss */
    xmm1 = xmm1 - xmm7; /* subss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0xC) = xmm1; /* movss */
    xmm1 = MEMF(esp + 4); /* movss */
    xmm3 = MEMF(esp + 0xC); /* movss */

loc_00112B62: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x2C);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x2C);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x50);
    MEMF(esp + 0x1C) = xmm5; /* movss */
    MEMF(esp + 0x20) = xmm6; /* movss */
    MEMF(esp + 0x24) = xmm7; /* movss */
    goto loc_00112B90;

loc_00112B85: ;
    xmm4 = MEMF(esp + 0x44); /* movss */
    goto loc_00112B90;

    /* nop */

loc_00112B90: ;
    eax = ZX8(MEM8(esp + 0x48));
    eax = MEM32(eax * 4 + 0x6B46D0);
    if (TEST_Z(eax, eax)) goto loc_00112BF0; /* je: equal / zero */

loc_00112BA0: ;
    ecx = MEM32(esp + 0x58);
    edx = MEM32(esp + 0x54);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x50);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x34);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x34);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x48);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x48);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00112BD1: ;
    esp = esp + 0x3C;
    if (TEST_Z(eax, eax)) goto loc_00112C3F; /* je: equal / zero */

loc_00112BD8: ;
    xmm4 = MEMF(esp + 0x44); /* movss */
    xmm1 = MEMF(esp + 0x10); /* movss */
    xmm2 = MEMF(esp + 0x14); /* movss */
    xmm3 = MEMF(esp + 0x18); /* movss */

loc_00112BF0: ;
    xmm0 = MEMF(esp + 0x1C); /* movss */
    xmm4 = xmm4 - MEMF(0x648D14); /* subss */
    xmm0 = xmm0 + xmm1; /* addss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x20); /* movss */
    xmm0 = xmm0 + xmm2; /* addss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x24); /* movss */
    xmm0 = xmm0 + xmm3; /* addss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = xmm4; /* movaps */
    esi++;
    /* comiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    MEMF(esp + 0x44) = xmm0; /* movss */
    if ((xmm0 > MEMF(0x648CF8))) goto loc_00112B85; /* ja: above (unsigned >) */

loc_00112C3F: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00112C42: ;
    POP32(esp, esi);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_00112C50
 * Original: 0x00112C50 - 0x00112C68 (24 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00112C50(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00112C50: ;
    esp = esp - 0x14;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x2C);
    if (CMP_LE(LO16(ebp), LO16(eax))) { sub_00112C68(); return; } /* jle: less or equal (signed <=) */

loc_00112C5D: ;
    ecx = ebp;
    ecx = ecx - eax;
    ecx++;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00112C71(); return; /* tail jmp 0x00112C71 */

}

/**
 * sub_00112DC0
 * Original: 0x00112DC0 - 0x00112DE9 (41 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00112DC0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00112DC0: ;
    esp = esp - 0x1C;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0x34));
    PUSH32(esp, esi);
    esi = eax;
    eax = 0; /* xor self */
    SET_LO8(eax, LO8(ebx));
    SET_LO8(eax, LO8(eax) - 0x40);
    PUSH32(esp, edi);
    edi = ecx;
    SET_LO8(ecx, LO8(eax));
    SET_LO8(ecx, LO8(ecx) & 0xC0);
    if (TEST_Z(LO8(eax), 0x40)) { sub_00112DE9(); return; } /* je: equal / zero */

loc_00112DDD: ;
    eax = eax & 0x3F;
    edx = 0x40;
    edx = edx - eax;
    g_seh_ebp = ebp; sub_00112DEE(); return; /* tail jmp 0x00112DEE */

}

/**
 * sub_00112FE0
 * Original: 0x00112FE0 - 0x00113236 (598 bytes, 131 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00112FE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00112FE0: ;
    esp = esp - 0x70;
    ecx = MEM32(0x8470DC);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x84A148);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x770);
    xmm0 = MEMF(eax + ecx + 0x3BC); /* movss */
    xmm0 = xmm0 * MEMF(0x649220); /* mulss */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x84);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0xF);
    PUSH32(esp, 0x3A8163D3);
    ebp = (int32_t)xmm0; /* cvttss2si */
    xmm0 = MEMF(0x64A200); /* movss */
    PUSH32(esp, 0x447D4000);
    eax = esi;
    PUSH32(esp, 0); sub_0019B600(); /* call 0x0019B600 */

loc_00113033: ;
    xmm2 = MEMF(0x64A59C); /* movss */
    xmm1 = MEMF(0x64A598); /* movss */
    xmm0 = MEMF(0x64A200); /* movss */
    PUSH32(esp, edi);
    PUSH32(esp, 5);
    eax = esi;
    PUSH32(esp, 0); sub_0019B530(); /* call 0x0019B530 */

loc_00113055: ;
    PUSH32(esp, edi);
    eax = esi;
    PUSH32(esp, 0); sub_0019B6C0(); /* call 0x0019B6C0 */

loc_0011305D: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0019A300(); /* call 0x0019A300 */

loc_00113064: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x43AF0000);
    PUSH32(esp, 0x3F800000);
    ebx = 1;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_000F60F0(); /* call 0x000F60F0 */

loc_00113087: ;
    xmm0 = MEMF(0x648EB8); /* movss */
    xmm1 = MEMF(0x648CE4); /* movss */
    MEMF(esp + 0x74) = xmm0; /* movss */
    xmm0 = MEMF(0x648D1C); /* movss */
    MEMF(esp + 0x80) = xmm0; /* movss */
    xmm0 = MEMF(0x648F38); /* movss */
    MEMF(esp + 0x88) = xmm0; /* movss */
    MEMF(esp + 0x8C) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x90) = xmm0; /* movss */
    MEMF(esp + 0x94) = xmm0; /* movss */
    MEMF(esp + 0x98) = xmm0; /* movss */
    xmm0 = MEMF(0x648D80); /* movss */
    MEMF(esp + 0x9C) = xmm0; /* movss */
    xmm0 = MEMF(0x648E64); /* movss */
    edx = esi;
    ecx = MEM32(edx);
    MEMF(esp + 0xA0) = xmm0; /* movss */
    xmm0 = MEMF(0x6493B0); /* movss */
    MEM32(esp + 0x64) = ecx;
    ecx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEMF(esp + 0xA4) = xmm0; /* movss */
    xmm0 = MEMF(0x64B0E8); /* movss */
    esp = esp + 0x40;
    eax = 0x32;
    ebp = ebp + 0xFFFFFFC0u;
    MEMF(esp + 0x68) = xmm0; /* movss */
    xmm0 = MEMF(0x649354); /* movss */
    MEM16(esp + 0x20) = LO16(eax);
    MEM32(esp + 0x1C) = 0x1B;
    MEM16(esp + 0x30) = 0xBE;
    MEM16(esp + 0x38) = LO16(ebp);
    MEM16(esp + 0x3A) = 0x80;
    MEM16(esp + 0x3C) = 0xFFC1;
    MEM16(esp + 0x3E) = 0x5A;
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 0x2C) = edx;
    MEMF(esp + 0x44) = xmm1; /* movss */
    MEMF(esp + 0x6C) = xmm0; /* movss */
    PUSH32(esp, edi);
    MEM16(esp + 0x7E) = LO16(eax);
    eax = esp + 0x20;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    MEMF(esp + 0x7C) = xmm1; /* movss */
    MEM8(esp + 0x88) = 0;
    MEM8(esp + 0x80) = LO8(ebx);
    MEM8(esp + 0x81) = LO8(ebx);
    MEM8(esp + 0x82) = LO8(ebx);
    MEM16(esp + 0x84) = 0x64;
    PUSH32(esp, 0); sub_00173610(); /* call 0x00173610 */

loc_001131C9: ;
    ecx = MEM32(esi + 4);
    ebp = MEM32(esi);
    esi = MEM32(esi + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x2A);
    eax = 0x58;
    MEM32(esp + 0x28) = ecx;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_001131E2: ;
    esp = esp + 0x14;
    if (TEST_Z(eax, eax)) goto loc_0011322E; /* je: equal / zero */

loc_001131E9: ;
    xmm0 = MEMF(0x648F38); /* movss */
    SET_LO8(ecx, LO8(ecx) | 0xFF);
    MEM8(eax + 0x39) = LO8(ecx);
    MEM8(eax + 0x3A) = LO8(ecx);
    MEMF(eax + 0x30) = xmm0; /* movss */
    MEMF(eax + 0x34) = xmm0; /* movss */
    MEM8(eax + 0x38) = 8;
    MEM8(eax + 0x2C) = LO8(ebx);
    MEM8(eax + 0x3B) = 0;
    edx = 0; /* xor self */
    ecx = eax + 0x3C;
    MEM32(ecx) = edx;
    MEM32(ecx + 4) = edx;
    MEM32(ecx + 8) = edx;
    MEM32(ecx + 0xC) = edx;
    edx = MEM32(esp + 0x14);
    eax = eax + 0x4C;
    MEM32(eax) = ebp;
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = esi;

loc_0011322E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x70;
    esp += 4; return; /* ret */

}

/**
 * sub_00113240
 * Original: 0x00113240 - 0x001132D3 (147 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113240(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_00113240: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xD4;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    xmm0 = MEMF(esi + 0x4C); /* movss */
    xmm1 = MEMF(esi + 0x54); /* movss */
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    esi = esi + 0x4C;
    PUSH32(esp, 0);
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(esi + 4); /* movss */
    xmm0 = xmm0 + MEMF(0x5A0060); /* addss */
    eax = esp + 0x38;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = xmm0 - MEMF(0x59D944); /* subss */
    MEMF(esp) = xmm0; /* movss */
    ecx = esp + 0x28;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    SET_LO8(ebx, 0); /* xor self */
    MEMF(esp + 0x38) = xmm1; /* movss */
    PUSH32(esp, 0); sub_0029FF30(); /* call 0x0029FF30 */

loc_001132A3: ;
    esp = esp + 0x18;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_001132D3(); return; } /* je: equal / zero */

loc_001132AA: ;
    xmm0 = MEMF(esi); /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x30); /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(esi + 8); /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    SET_LO8(ebx, 1);
    edi = esp + 0x18;
    g_seh_ebp = ebp; sub_001132D5(); return; /* tail jmp 0x001132D5 */

}

/**
 * sub_00113390
 * Original: 0x00113390 - 0x0011343E (174 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113390(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm2, xmm5;

loc_00113390: ;
    esp = esp - 0x48;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x50);
    eax = esi;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001133B3: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001133B8: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001133BD: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001133C2: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001133C7: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 3;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx++;
    if (CMP_LE(edx & edx, 0)) goto loc_00113439; /* jle: less or equal (signed <=) */

loc_001133D4: ;
    xmm5 = MEMF(0x648E5C); /* movss */
    PUSH32(esp, edi);
    edi = edx;
    /* nop */

loc_001133E0: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001133EF: ;
    eax = eax & 0xFF;
    PUSH32(esp, eax);
    xmm2 = xmm5; /* movaps */
    PUSH32(esp, 0); sub_00110650(); /* call 0x00110650 */

loc_001133FD: ;
    xmm0 = MEMF(esi); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x14); /* addss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x1C); /* movss */
    xmm0 = xmm0 + MEMF(esi + 8); /* addss */
    esp = esp + 0xC;
    MEMF(esp + 0x10) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00113426: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0011342B: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00113430: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00113435: ;
    edi--;
    if ((edi != 0)) goto loc_001133E0; /* jne: not equal / not zero */

loc_00113438: ;
    POP32(esp, edi);

loc_00113439: ;
    POP32(esp, esi);
    esp = esp + 0x48;
    esp += 4; return; /* ret */

}

/**
 * sub_00113440
 * Original: 0x00113440 - 0x001134A4 (100 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113440(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00113440: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xF4;
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    ecx = 0xA;
    edi = esp + 0x10;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    esi = 0; /* xor self */
    (void)0; /* cmp LO16(eax), 0xFFFF - flags set for next jcc */
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(0x6494DC); /* movss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    MEM32(esp + 0xE0) = esi;
    MEM8(esp + 0xE4) = 0;
    MEM8(esp + 0xE5) = 0;
    MEM32(esp + 0xE8) = esi;
    if (CMP_NE(LO16(eax), 0xFFFF)) { sub_001134A4(); return; } /* jne: not equal / not zero */

loc_0011349A: ;
    xmm0 = MEMF(0x64925C); /* movss */
    g_seh_ebp = ebp; sub_001134AB(); return; /* tail jmp 0x001134AB */

}

/**
 * sub_00113550
 * Original: 0x00113550 - 0x00113583 (51 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113550(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00113550: ;
    esp = esp - 0x14;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    SET_LO8(eax, MEM8(ebp + 0x71));
    if (CMP_EQ(LO8(eax), 0xFF)) { sub_00113583(); return; } /* je: equal / zero */

loc_0011355F: ;
    eax = SX8(LO8(eax));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax * 4 + 0x849394), _icall_esp); /* indirect call */
    }

loc_0011356A: ;
    esp = esp + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_00113583(); return; } /* jne: not equal / not zero */

loc_00113571: ;
    xmm0 = MEMF(0x648D34); /* movss */
    MEMF(ebp + 0x30) = xmm0; /* movss */
    POP32(esp, ebp);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00113680
 * Original: 0x00113680 - 0x001136B2 (50 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113680(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00113680: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x50);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    ebx = ebp + 8;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_001102D0(); /* call 0x001102D0 */

loc_001136A1: ;
    edx = MEM32(esp + 0x24);
    eax = MEM32(edx);
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp + 4) = eax;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001136C0
 * Original: 0x001136C0 - 0x00113726 (102 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001136C0(void)
{
    float xmm0, xmm2;

loc_001136C0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    ebx = edi + 8;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001136D5: ;
    xmm0 = xmm0 * MEMF(esi + 0x6C); /* mulss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001136DF: ;
    eax = eax & 0xFF;
    PUSH32(esp, eax);
    xmm2 = xmm0; /* movaps */
    PUSH32(esp, 0); sub_00110650(); /* call 0x00110650 */

loc_001136ED: ;
    xmm0 = MEMF(esi + 0x5C); /* movss */
    xmm0 = xmm0 + MEMF(edi); /* addss */
    edx = MEM32(esp + 0x24);
    MEMF(edi) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x64); /* movss */
    xmm0 = xmm0 + MEMF(ebx); /* addss */
    MEMF(ebx) = xmm0; /* movss */
    eax = MEM32(esi + 0x60);
    MEM32(edi + 4) = eax;
    ecx = MEM32(esi + 0x60);
    esp = esp + 0xC;
    MEM32(edx) = ecx;
    eax = MEM32(esi + 0x68);
    ecx = MEM32(esp + 0x1C);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ecx) = eax;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00113730
 * Original: 0x00113730 - 0x0011376F (63 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113730(void)
{
    int _flags = 0; /* fallback flag var */

loc_00113730: ;
    eax = MEM32(esp + 4);
    ecx = ZX8(MEM8(eax + 0x70));
    ecx--;
    if ((ecx != 0)) goto loc_0011376E; /* jne: not equal / not zero */

loc_0011373B: ;
    ecx = MEM32(esp + 0xC);
    if (CMP_NE(ecx, 0x17)) goto loc_00113757; /* jne: not equal / not zero */

loc_00113744: ;
    edx = MEM32(esp + 8);
    SET_LO8(ecx, MEM8(eax + 0x13C));
    if (CMP_NE(LO8(ecx), MEM8(edx))) goto loc_0011376E; /* jne: not equal / not zero */

loc_00113752: ;
    MEM8(eax + 0x4C) = MEM8(eax + 0x4C) | 1;
    esp += 4; return; /* ret */

loc_00113757: ;
    if (CMP_NE(ecx, 0x18)) goto loc_0011376E; /* jne: not equal / not zero */

loc_0011375C: ;
    edx = MEM32(esp + 8);
    SET_LO8(ecx, MEM8(eax + 0x13C));
    if (CMP_NE(LO8(ecx), MEM8(edx))) goto loc_0011376E; /* jne: not equal / not zero */

loc_0011376A: ;
    MEM8(eax + 0x4C) = MEM8(eax + 0x4C) & 0xFE;

loc_0011376E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00113770
 * Original: 0x00113770 - 0x00113799 (41 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113770(void)
{
    int _flags = 0; /* fallback flag var */

loc_00113770: ;
    ecx = MEM32(esp + 4);
    MEM8(ecx + 0x16) = MEM8(ecx + 0x16) | 4;
    eax = MEM32(ecx + 0x18);
    if (TEST_S(eax, eax)) goto loc_00113796; /* jl: less (signed <) */

loc_0011377F: ;
    if (CMP_GE(eax, 8)) goto loc_00113796; /* jge: greater or equal (signed >=) */

loc_00113784: ;
    edx = MEM32(eax * 4 + 0x595EF4);
    if (TEST_Z(edx, edx)) goto loc_00113796; /* je: equal / zero */

loc_0011378F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(edx, _icall_esp); /* indirect call */
    }

loc_00113793: ;
    esp = esp + 8;

loc_00113796: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_001137A0
 * Original: 0x001137A0 - 0x00113852 (178 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001137A0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_001137A0: ;
    esp = esp - 0x28;
    xmm0 = 0.0f; /* xorps self = zero */
    ecx = MEM32(esp + 0x2C);
    xmm2 = MEMF(0x64A4DC); /* movss */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x34);
    eax = ebx;
    edx = 1;
    eax = eax & edx;
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEM8(esp + 4) = 2;
    MEM32(esp + 8) = ecx;
    if (1 /* jp after test - parity */) goto loc_001137DE; /* jp: parity */

loc_001137D6: ;
    xmm2 = MEMF(0x64A4D8); /* movss */

loc_001137DE: ;
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    xmm1 = MEMF(0x64A4D4); /* movss */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(esp + 0xC) = xmm2; /* movss */
    if (1 /* jp after test - parity */) goto loc_001137FD; /* jp: parity */

loc_001137F5: ;
    xmm1 = MEMF(0x64A4D0); /* movss */

loc_001137FD: ;
    ecx = esp + 4;
    eax = eax | 0xFFFFFFFFu;
    PUSH32(esp, 0xFF);
    PUSH32(esp, ecx);
    MEMF(esp + 0x18) = xmm1; /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    MEM8(esp + 0x30) = LO8(edx);
    MEM8(esp + 0x31) = LO8(eax);
    MEM8(esp + 0x32) = 0;
    PUSH32(esp, 0); sub_00113440(); /* call 0x00113440 */

loc_00113840: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0011384D; /* je: equal / zero */

loc_00113847: ;
    MEM8(eax + 0x13C) = LO8(ebx);

loc_0011384D: ;
    POP32(esp, ebx);
    esp = esp + 0x28;
    esp += 4; return; /* ret */

}

/**
 * sub_00113860
 * Original: 0x00113860 - 0x00113960 (256 bytes, 75 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113860(void)
{
    float xmm0, xmm1;

loc_00113860: ;
    esp = esp - 0x44;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEM32(esp + 0x48) = 0x303;
    MEM32(esp + 0xC) = 0xF;
    MEM32(esp + 0x10) = 0x10;
    MEM32(esp + 0x14) = 0x11;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0011388A: ;
    xmm1 = xmm0; /* movaps */
    xmm0 = MEMF(0x648F78); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + xmm0; /* addss */
    MEMF(esp + 8) = xmm1; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001138A8: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 3;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    esi = MEM32(esp + 0x50);
    xmm0 = 0.0f; /* xorps self = zero */
    SET_LO8(eax, 0xFF);
    MEM8(esp + 0x30) = LO8(eax);
    MEM8(esp + 0x31) = LO8(eax);
    MEM8(esp + 0x35) = LO8(eax);
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(esi + 4));
    ebx = 0; /* xor self */
    MEM8(esp + 0x24) = LO8(ebx);
    MEM8(esp + 0x36) = LO8(ebx);
    MEM8(esp + 0x37) = 7;
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    MEM32(esp + 0x18) = 0x1301;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x7F);
    PUSH32(esp, ecx);
    MEM16(esp + 0x2C) = 0x3C;
    MEM8(esp + 0x42) = LO8(ebx);
    MEM8(esp + 0x43) = LO8(ebx);
    MEM8(esp + 0x44) = LO8(ebx);
    edx = MEM32(esp + edx * 4 + 0x1C);
    MEM32(esp + 0x30) = edx;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00113912: ;
    SET_LO8(eax, LO8(eax) & 1);
    MEM8(esp + 0x60) = LO8(eax);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0011391D: ;
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(esp + 0x60));
    SET_LO8(eax, LO8(eax) & 1);
    SET_LO8(ecx, LO8(ecx) + LO8(eax));
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0011392D: ;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x74);
    ecx = MEM32(eax + 8);
    edx = MEM32(eax + 4);
    eax = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    esi = esi + 0x8C;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ecx = esp + 0x4C;
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0014F960(); /* call 0x0014F960 */

loc_00113957: ;
    esp = esp + 0x3C;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x44;
    esp += 4; return; /* ret */

}

/**
 * sub_00113960
 * Original: 0x00113960 - 0x00113B30 (464 bytes, 132 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113960(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00113960: ;
    esp = esp - 0x3C;
    (void)0; /* cmp LO8(eax), 9 - flags set for next jcc */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x48);
    if (CMP_AE(LO8(eax), 9)) goto loc_00113B2B; /* jae: above or equal (unsigned >=) */

loc_00113970: ;
    SET_LO8(ecx, MEM8(esp + 0x44));
    SET_LO8(ecx, LO8(ecx) & 3);
    SET_LO8(ecx, LO8(ecx) << 2);
    (void)0; /* test ebx, ebx - flags set for next jcc */
    SET_LO8(edx, (TEST_Z(ebx, ebx)) ? 1 : 0); /* sete */
    SET_LO8(edx, LO8(edx) - 1);
    eax = ZX8(LO8(eax));
    PUSH32(esp, ebp);
    ebp = eax + eax * 4;
    ebp = ebp << 2;
    xmm0 = MEMF(ebp + 0x596078); /* movss */
    edx = edx & 2;
    SET_LO8(ecx, LO8(ecx) | LO8(edx));
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x54);
    SET_LO8(ecx, LO8(ecx) | 1);
    (void)0; /* test esi, esi - flags set for next jcc */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 0x59607C); /* movss */
    MEM8(esp + 0x20) = LO8(ecx);
    MEM32(esp + 0x24) = ebx;
    MEMF(esp + 0x2C) = xmm0; /* movss */
    if (TEST_Z(esi, esi)) goto loc_001139D8; /* je: equal / zero */

loc_001139C0: ;
    eax = esi;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x30) = ecx;
    MEM32(esp + 0x34) = edx;
    MEM32(esp + 0x38) = eax;
    goto loc_001139ED;

loc_001139D8: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x30) = xmm0; /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */

loc_001139ED: ;
    ecx = MEM32(esp + 0x64);
    xmm0 = MEMF(esp + 0x58); /* movss */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x64);
    PUSH32(esp, ecx);
    edx = esp + 0x28;
    MEMF(esp + 0x44) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x64); /* movss */
    PUSH32(esp, edx);
    edx = 0x2C;
    eax = edi;
    MEMF(esp + 0x4C) = xmm0; /* movss */
    MEM8(esp + 0x50) = 2;
    MEM8(esp + 0x51) = 0xFF;
    MEM8(esp + 0x52) = 1;
    PUSH32(esp, 0); sub_00113440(); /* call 0x00113440 */

loc_00113A2F: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_00113A6A; /* je: equal / zero */

loc_00113A36: ;
    esi = MEM32(ebp + 0x596088);
    eax = eax + 0x13C;
    ecx = 0xB;
    edi = eax;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    SET_LO8(ecx, MEM8(esp + 0x50));
    if (TEST_Z(LO8(ecx), 8)) goto loc_00113A57; /* je: equal / zero */

loc_00113A53: ;
    MEM8(eax + 0x28) = MEM8(eax + 0x28) | 1;

loc_00113A57: ;
    (void)0; /* test LO8(ecx), 0x10 - flags set for next jcc */
    esi = MEM32(esp + 0x58);
    edi = MEM32(esp + 0x64);
    if (TEST_Z(LO8(ecx), 0x10)) goto loc_00113A6E; /* je: equal / zero */

loc_00113A64: ;
    MEM8(eax + 0x28) = MEM8(eax + 0x28) | 2;
    goto loc_00113A6E;

loc_00113A6A: ;
    SET_LO8(ecx, MEM8(esp + 0x50));

loc_00113A6E: ;
    if (TEST_Z(LO8(ecx), 4)) goto loc_00113B28; /* je: equal / zero */

loc_00113A77: ;
    (void)0; /* cmp LO16(edi), 0xFFFFFFFFu - flags set for next jcc */
    SET_LO8(eax, (CMP_NE(LO16(edi), 0xFFFFFFFFu)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) | 2);
    (void)0; /* cmp LO16(edi), 0xFFFFFFFFu - flags set for next jcc */
    MEM8(esp + 0x10) = LO8(eax);
    MEM8(esp + 0x11) = 2;
    MEM16(esp + 0x12) = 0x12C;
    if (CMP_EQ(LO16(edi), 0xFFFFFFFFu)) goto loc_00113A9B; /* je: equal / zero */

loc_00113A96: ;
    MEM16(esp + 0x12) = LO16(edi);

loc_00113A9B: ;
    SET_LO8(ecx, MEM8(ebp + 0x596083));
    eax = 0; /* xor self */
    (void)0; /* cmp esi, eax - flags set for next jcc */
    MEM8(esp + 0x16) = LO8(ecx);
    if (CMP_EQ(esi, eax)) goto loc_00113AC7; /* je: equal / zero */

loc_00113AAB: ;
    edx = (int32_t)MEMF(esi); /* cvttss2si */
    ecx = (int32_t)MEMF(esi + 4); /* cvttss2si */
    MEM32(esp + 0x18) = edx;
    edx = (int32_t)MEMF(esi + 8); /* cvttss2si */
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x20) = edx;
    goto loc_00113AF0;

loc_00113AC7: ;
    if (CMP_EQ(ebx, eax)) goto loc_00113AE4; /* je: equal / zero */

loc_00113ACB: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebx);
    edx = (uint32_t)(int32_t)SMEM16(ebx + 2);
    MEM32(esp + 0x18) = ecx;
    ecx = (uint32_t)(int32_t)SMEM16(ebx + 4);
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x20) = ecx;
    goto loc_00113AF0;

loc_00113AE4: ;
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x18) = eax;

loc_00113AF0: ;
    edx = ZX8(MEM8(ebp + 0x596082));
    ecx = ZX8(MEM8(ebp + 0x596080));
    PUSH32(esp, 0xFF);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    eax = ZX8(MEM8(ebp + 0x596081));
    PUSH32(esp, 0x7F);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    SET_LO8(eax, MEM8(ebp + 0x596084));
    PUSH32(esp, ecx);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    ecx = esp + 0x38;
    PUSH32(esp, 0); sub_00120000(); /* call 0x00120000 */

loc_00113B25: ;
    esp = esp + 0x20;

loc_00113B28: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);

loc_00113B2B: ;
    POP32(esp, ebx);
    esp = esp + 0x3C;
    esp += 4; return; /* ret */

}

/**
 * sub_00113C50
 * Original: 0x00113C50 - 0x00113D5D (269 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113C50(void)
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

loc_00113C50: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xD4;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = 0; /* xor self */
    (void)0; /* cmp esi, ecx - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_NE(esi, ecx)) goto loc_00113C99; /* jne: not equal / not zero */

loc_00113C6A: ;
    xmm0 = MEMF(0x6494DC); /* movss */
    esi = esp + 0x30;
    MEMF(esp + 0x30) = xmm0; /* movss */
    MEM32(esp + 0xD0) = ecx;
    MEM8(esp + 0xD4) = 7;
    MEM8(esp + 0xD5) = LO8(ecx);
    MEM32(esp + 0xD8) = ecx;

loc_00113C99: ;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    xmm0 = MEMF(ebx + 4); /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    if (CMP_LE(eax, ecx)) goto loc_00113D56; /* jle: less or equal (signed <=) */

loc_00113CAC: ;
    MEM32(esp + 0xC) = eax;

loc_00113CB0: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00113CB5: ;
    xmm0 = xmm0 * MEMF(ebp + 0x10); /* mulss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00113CC5: ;
    xmm0 = xmm0 * MEMF(0x648D30); /* mulss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    eax = MEM32(ebp + 0xC);
    /* FPU: fsin  */
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    edi = esp + 0x24;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    /* FPU: fcos  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 0x24) = (float)fp_top(); fp_popp(); /* fstp */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_002A0180(); /* call 0x002A0180 */

loc_00113D07: ;
    esp = esp + 0xC;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00113D4C; /* je: equal / zero */

loc_00113D0E: ;
    edx = MEM32(ebp + 0x1C);
    eax = MEM32(ebp + 0x18);
    xmm0 = MEMF(esp + 0x18); /* movss */
    ecx = ZX8(MEM8(ebp + 0x14));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(esi); /* movss */
    edx = esp + 0x2C;
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x28); /* movss */
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    MEMF(esp + 0x3C) = xmm0; /* movss */
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx * 4 + 0x59612C), _icall_esp); /* indirect call */
    }

loc_00113D49: ;
    esp = esp + 0x10;

loc_00113D4C: ;
    MEM32(esp + 0xC) = MEM32(esp + 0xC) - 1;
    if ((MEM32(esp + 0xC) != 0)) goto loc_00113CB0; /* jne: not equal / not zero */

loc_00113D56: ;
    POP32(esp, edi);
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
 * sub_00113D60
 * Original: 0x00113D60 - 0x00114327 (1479 bytes, 350 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113D60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;

loc_00113D60: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x174;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_EQ(ebx, edi)) goto loc_00114320; /* je: equal / zero */

loc_00113D7C: ;
    if (CMP_EQ(MEM32(ebx + 0x3C8), edi)) goto loc_00113DC3; /* je: equal / zero */

loc_00113D84: ;
    PUSH32(esp, 0x5F0C74);
    eax = ebx;
    PUSH32(esp, 0); sub_002F77D0(); /* call 0x002F77D0 */

loc_00113D90: ;
    esi = esp + 0x28;
    edx = ebx;
    PUSH32(esp, 0); sub_002F7940(); /* call 0x002F7940 */

loc_00113D9B: ;
    PUSH32(esp, 0x5F0C7C);
    eax = ebx;
    PUSH32(esp, 0); sub_002F77D0(); /* call 0x002F77D0 */

loc_00113DA7: ;
    esi = esp + 0x38;
    edx = ebx;
    PUSH32(esp, 0); sub_002F7940(); /* call 0x002F7940 */

loc_00113DB2: ;
    PUSH32(esp, 0x5D5828);
    eax = ebx;
    PUSH32(esp, 0); sub_002F77D0(); /* call 0x002F77D0 */

loc_00113DBE: ;
    esp = esp + 0xC;
    goto loc_00113E14;

loc_00113DC3: ;
    xmm0 = MEMF(ebx + 0x78); /* movss */
    xmm3 = MEMF(0x64908C); /* movss */
    xmm1 = MEMF(ebx + 0x7C); /* movss */
    xmm2 = MEMF(ebx + 0x80); /* movss */
    xmm1 = xmm1 + MEMF(0x649248); /* addss */
    xmm4 = xmm0; /* movaps */
    xmm4 = xmm4 + xmm3; /* addss */
    xmm0 = xmm0 - xmm3; /* subss */
    MEMF(esp + 0x24) = xmm4; /* movss */
    MEMF(esp + 0x28) = xmm1; /* movss */
    MEMF(esp + 0x2C) = xmm2; /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    MEMF(esp + 0x34) = xmm1; /* movss */
    MEMF(esp + 0x38) = xmm2; /* movss */

loc_00113E14: ;
    SET_LO16(eax, ZX8(MEM8(ebx + 0x171)));
    edx = 0; /* xor self */
    SET_LO8(edx, LO8(eax));
    SET_LO8(ecx, LO8(eax));
    SET_LO8(ecx, LO8(ecx) & 0xC0);
    edx = edx & 0x3F;
    if (TEST_Z(LO8(eax), 0x40)) goto loc_00113E35; /* je: equal / zero */

loc_00113E2C: ;
    esi = 0x40;
    esi = esi - edx;
    goto loc_00113E37;

loc_00113E35: ;
    esi = edx;

loc_00113E37: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00113E4E; /* je: equal / zero */

loc_00113E3B: ;
    if (CMP_EQ(LO8(ecx), 0xC0)) goto loc_00113E4E; /* je: equal / zero */

loc_00113E40: ;
    xmm2 = 0.0f; /* xorps self = zero */
    xmm2 = xmm2 - MEMF(esi * 4 + 0x743090); /* subss */
    goto loc_00113E57;

loc_00113E4E: ;
    xmm2 = MEMF(esi * 4 + 0x743090); /* movss */

loc_00113E57: ;
    SET_LO8(eax, LO8(eax) + 0x40);
    SET_LO8(ecx, LO8(eax));
    SET_LO8(ecx, LO8(ecx) & 0xC0);
    if (TEST_Z(LO8(eax), 0x40)) goto loc_00113E6E; /* je: equal / zero */

loc_00113E62: ;
    eax = eax & 0x3F;
    edx = 0x40;
    edx = edx - eax;
    goto loc_00113E73;

loc_00113E6E: ;
    eax = eax & 0x3F;
    edx = eax;

loc_00113E73: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00113E8A; /* je: equal / zero */

loc_00113E77: ;
    if (CMP_EQ(LO8(ecx), 0xC0)) goto loc_00113E8A; /* je: equal / zero */

loc_00113E7C: ;
    xmm1 = 0.0f; /* xorps self = zero */
    xmm1 = xmm1 - MEMF(edx * 4 + 0x743090); /* subss */
    goto loc_00113E93;

loc_00113E8A: ;
    xmm1 = MEMF(edx * 4 + 0x743090); /* movss */

loc_00113E93: ;
    xmm0 = MEMF(ebx + 0x110); /* movss */
    (void)0; /* cmp MEM32(ebx + 0x3C8), edi - flags set for next jcc */
    xmm0 = xmm0 * xmm2; /* mulss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0x110); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    if (CMP_EQ(MEM32(ebx + 0x3C8), edi)) goto loc_00113F26; /* je: equal / zero */

loc_00113EBF: ;
    eax = esp + 0x140;
    PUSH32(esp, eax);
    PUSH32(esp, 0x5F0C84);
    esi = ebx;
    PUSH32(esp, 0); sub_002F7810(); /* call 0x002F7810 */

loc_00113ED3: ;
    ecx = esp + 0x148;
    PUSH32(esp, ecx);
    edx = esp + 0x128;
    PUSH32(esp, edx);
    PUSH32(esp, 0x596140);
    PUSH32(esp, 0); sub_001101F0(); /* call 0x001101F0 */

loc_00113EED: ;
    eax = esp + 0x154;
    PUSH32(esp, eax);
    ecx = esp + 0x14C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x59614C);
    PUSH32(esp, 0); sub_001101F0(); /* call 0x001101F0 */

loc_00113F07: ;
    edx = esp + 0x160;
    PUSH32(esp, edx);
    eax = esp + 0x14C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x596158);
    PUSH32(esp, 0); sub_001101F0(); /* call 0x001101F0 */

loc_00113F21: ;
    esp = esp + 0x2C;
    goto loc_00113F3E;

loc_00113F26: ;
    esi = esp + 0x20;
    edi = esp + 0x3C;
    ecx = esp + 0x11C;
    eax = ebx;
    PUSH32(esp, 0); sub_001C2A60(); /* call 0x001C2A60 */

loc_00113F3C: ;
    edi = 0; /* xor self */

loc_00113F3E: ;
    xmm0 = MEMF(ebx + 0x260); /* movss */
    xmm0 = xmm0 * MEMF(0x648D1C); /* mulss */
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0x5F3ED4);
    PUSH32(esp, ecx);
    eax = ebx + 0x78;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001DD800(); /* call 0x001DD800 */

loc_00113F6B: ;
    xmm0 = MEMF(0x649228); /* movss */
    xmm3 = MEMF(0x648D14); /* movss */
    xmm1 = MEMF(ebx + 0x260); /* movss */
    xmm5 = 0.0f; /* xorps self = zero */
    xmm2 = MEMF(0x648D10); /* movss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0x1C0); /* movss */
    MEMF(esp + 0x60) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0x114); /* movss */
    MEMF(esp + 0x64) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0x1CC); /* movss */
    eax = 0xFF;
    esp = esp + 0x10;
    /* comiss xmm1, xmm3 - sets EFLAGS */
    MEMF(esp + 0x58) = xmm0; /* movss */
    xmm0 = MEMF(0x64ADB8); /* movss */
    MEM32(esp + 0xB0) = edi;
    MEM32(esp + 0xAC) = 0x12C;
    MEMF(esp + 0x68) = xmm3; /* movss */
    MEMF(esp + 0x6C) = xmm3; /* movss */
    MEMF(esp + 0x70) = xmm3; /* movss */
    MEMF(esp + 0xA0) = xmm5; /* movss */
    MEM32(esp + 0xA8) = 0x196D;
    MEMF(esp + 0xA4) = xmm0; /* movss */
    MEM8(esp + 0xB4) = 0;
    MEM32(esp + 0xB8) = edi;
    MEM8(esp + 0xBC) = LO8(eax);
    MEM32(esp + 0xC0) = 0x13E180;
    MEM32(esp + 0xC4) = edi;
    MEM32(esp + 0xC8) = 0xFA930;
    MEM32(esp + 0xCC) = edi;
    MEM32(esp + 0xD0) = 0xFAEE0;
    MEM32(esp + 0xD4) = edi;
    MEM32(esp + 0xD8) = 0x13E6E0;
    MEM32(esp + 0xDC) = 0x13E8F0;
    MEM8(esp + 0xE4) = 0;
    MEM32(esp + 0xE8) = edi;
    MEM8(esp + 0xEC) = 0;
    MEM16(esp + 0xEE) = 1;
    MEM16(esp + 0xF0) = LO16(eax);
    if ((xmm1 <= xmm3)) goto loc_001140A4; /* jbe: below or equal (unsigned <=) */

loc_0011409F: ;
    xmm1 = xmm3; /* movaps */
    goto loc_001140AC;

loc_001140A4: ;
    /* comiss xmm2, xmm1 - sets EFLAGS */
    if ((xmm2 <= xmm1)) goto loc_001140AC; /* jbe: below or equal (unsigned <=) */

loc_001140A9: ;
    xmm1 = xmm2; /* movaps */

loc_001140AC: ;
    xmm0 = MEMF(ebx + 0x264); /* movss */
    /* comiss xmm0, xmm3 - sets EFLAGS */
    if ((xmm0 <= xmm3)) goto loc_001140BE; /* jbe: below or equal (unsigned <=) */

loc_001140B9: ;
    xmm0 = xmm3; /* movaps */
    goto loc_001140C6;

loc_001140BE: ;
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 <= xmm0)) goto loc_001140C6; /* jbe: below or equal (unsigned <=) */

loc_001140C3: ;
    xmm0 = xmm2; /* movaps */

loc_001140C6: ;
    xmm3 = xmm0; /* movaps */
    xmm3 = xmm3 + xmm1; /* addss */
    xmm3 = xmm3 * MEMF(0x648FF0); /* mulss */
    xmm3 = xmm3 * xmm2; /* mulss */
    MEMF(esp + 0x40) = xmm3; /* movss */
    xmm3 = MEMF(0x648D20); /* movss */
    xmm0 = xmm0 * xmm3; /* mulss */
    MEMF(esp + 0x4C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x18); /* movss */
    xmm0 = xmm0 * xmm2; /* mulss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x1C); /* movss */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm0 = xmm0 * xmm2; /* mulss */
    MEMF(esp + 0x48) = xmm1; /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    edi = esp + 0x24;
    MEM32(esp + 0x18) = 2;
    goto loc_00114130;

loc_00114129: ;
    xmm5 = 0.0f; /* xorps self = zero */
    ebx = MEM32(ebp + 8);
    /* nop */

loc_00114130: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00114135: ;
    xmm6 = MEMF(0x648E5C); /* movss */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm0 = xmm0 * MEMF(ebx + 0x264); /* mulss */
    xmm0 = xmm0 + MEMF(0x648CE4); /* addss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00114156: ;
    ebx = eax;
    ebx = ebx & 0x7F;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00114160: ;
    edx = 0; /* xor self */
    ecx = eax;
    ecx = ecx & 0x1F;
    SET_LO8(edx, LO8(ebx));
    eax = 0xFFFFFFE0u;
    eax = eax - ecx;
    SET_LO8(ecx, LO8(ebx));
    SET_LO8(ecx, LO8(ecx) & 0xC0);
    edx = edx & 0x3F;
    if (TEST_Z(LO8(ebx), 0x40)) goto loc_00114186; /* je: equal / zero */

loc_0011417D: ;
    esi = 0x40;
    esi = esi - edx;
    goto loc_00114188;

loc_00114186: ;
    esi = edx;

loc_00114188: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0011419F; /* je: equal / zero */

loc_0011418C: ;
    if (CMP_EQ(LO8(ecx), 0xC0)) goto loc_0011419F; /* je: equal / zero */

loc_00114191: ;
    xmm4 = xmm5; /* movaps */
    xmm4 = xmm4 - MEMF(esi * 4 + 0x743090); /* subss */
    goto loc_001141A8;

loc_0011419F: ;
    xmm4 = MEMF(esi * 4 + 0x743090); /* movss */

loc_001141A8: ;
    SET_LO8(ebx, LO8(ebx) - 0x40);
    SET_LO8(ecx, LO8(ebx));
    SET_LO8(ecx, LO8(ecx) & 0xC0);
    if (TEST_Z(LO8(ebx), 0x40)) goto loc_001141C1; /* je: equal / zero */

loc_001141B5: ;
    ebx = ebx & 0x3F;
    edx = 0x40;
    edx = edx - ebx;
    goto loc_001141C6;

loc_001141C1: ;
    ebx = ebx & 0x3F;
    edx = ebx;

loc_001141C6: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_001141DD; /* je: equal / zero */

loc_001141CA: ;
    if (CMP_EQ(LO8(ecx), 0xC0)) goto loc_001141DD; /* je: equal / zero */

loc_001141CF: ;
    xmm3 = xmm5; /* movaps */
    xmm3 = xmm3 - MEMF(edx * 4 + 0x743090); /* subss */
    goto loc_001141E6;

loc_001141DD: ;
    xmm3 = MEMF(edx * 4 + 0x743090); /* movss */

loc_001141E6: ;
    SET_LO8(edx, LO8(eax));
    SET_LO8(edx, LO8(edx) & 0xC0);
    if (TEST_Z(LO8(eax), 0x40)) goto loc_001141FF; /* je: equal / zero */

loc_001141EF: ;
    ebx = 0; /* xor self */
    SET_LO8(ebx, LO8(eax));
    ecx = 0x40;
    ebx = ebx & 0x3F;
    ecx = ecx - ebx;
    goto loc_00114206;

loc_001141FF: ;
    ecx = 0; /* xor self */
    SET_LO8(ecx, LO8(eax));
    ecx = ecx & 0x3F;

loc_00114206: ;
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0011421D; /* je: equal / zero */

loc_0011420A: ;
    if (CMP_EQ(LO8(edx), 0xC0)) goto loc_0011421D; /* je: equal / zero */

loc_0011420F: ;
    xmm1 = xmm5; /* movaps */
    xmm1 = xmm1 - MEMF(ecx * 4 + 0x743090); /* subss */
    goto loc_00114226;

loc_0011421D: ;
    xmm1 = MEMF(ecx * 4 + 0x743090); /* movss */

loc_00114226: ;
    SET_LO8(eax, LO8(eax) - 0x40);
    SET_LO8(ecx, LO8(eax));
    SET_LO8(ecx, LO8(ecx) & 0xC0);
    if (TEST_Z(LO8(eax), 0x40)) goto loc_0011423D; /* je: equal / zero */

loc_00114231: ;
    eax = eax & 0x3F;
    edx = 0x40;
    edx = edx - eax;
    goto loc_00114242;

loc_0011423D: ;
    eax = eax & 0x3F;
    edx = eax;

loc_00114242: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00114259; /* je: equal / zero */

loc_00114246: ;
    if (CMP_EQ(LO8(ecx), 0xC0)) goto loc_00114259; /* je: equal / zero */

loc_0011424B: ;
    xmm2 = xmm5; /* movaps */
    xmm2 = xmm2 - MEMF(edx * 4 + 0x743090); /* subss */
    goto loc_00114262;

loc_00114259: ;
    xmm2 = MEMF(edx * 4 + 0x743090); /* movss */

loc_00114262: ;
    edx = edi;
    eax = MEM32(edx);
    ecx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    xmm7 = xmm1; /* movaps */
    xmm7 = xmm7 * xmm3; /* mulss */
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm7 = xmm7 * xmm0; /* mulss */
    xmm7 = xmm7 + MEMF(esp + 0x20); /* addss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(esp + 0x1C); /* addss */
    xmm5 = xmm5 - xmm2; /* subss */
    MEM32(esp + 0x74) = eax;
    MEM32(esp + 0x78) = ecx;
    MEM32(esp + 0x7C) = edx;
    MEMF(esp + 0x8C) = xmm7; /* movss */
    MEMF(esp + 0x90) = xmm5; /* movss */
    MEMF(esp + 0x94) = xmm1; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001142BF: ;
    xmm5 = MEMF(0x648E38); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm1 = xmm6; /* movaps */
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(esp + 0x98) = xmm1; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001142E0: ;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, 3);
    ecx = esp + 0x58;
    xmm0 = xmm0 * xmm5; /* mulss */
    PUSH32(esp, 0);
    xmm6 = xmm6 - xmm0; /* subss */
    PUSH32(esp, ecx);
    MEMF(esp + 0xBC) = xmm6; /* movss */
    PUSH32(esp, 0); sub_0013D5D0(); /* call 0x0013D5D0 */

loc_0011430B: ;
    eax = MEM32(esp + 0x38);
    esp = esp + 0x20;
    edi = edi + 0xC;
    eax--;
    MEM32(esp + 0x18) = eax;
    if ((eax != 0)) goto loc_00114129; /* jne: not equal / not zero */

loc_00114320: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00114330
 * Original: 0x00114330 - 0x00114512 (482 bytes, 100 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00114330(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm2, xmm5;

loc_00114330: ;
    esp = esp - 0x80;
    xmm0 = MEMF(0x64A4CC); /* movss */
    PUSH32(esp, esi);
    MEM32(esp + 0x30) = 0x303;
    MEMF(esp + 4) = xmm0; /* movss */
    MEM32(esp + 0x34) = 0x29;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0011435A: ;
    eax = eax & 0x8000000Fu;
    if (((int32_t)eax >= 0)) goto loc_00114366; /* jns: not sign (positive) */

loc_00114361: ;
    eax--;
    eax = eax | 0xFFFFFFF0u;
    eax++;

loc_00114366: ;
    xmm5 = 0.0f; /* xorps self = zero */
    eax = eax + 0x19;
    MEM16(esp + 8) = LO16(eax);
    MEMF(esp + 0xC) = xmm5; /* movss */
    MEMF(esp + 0x10) = xmm5; /* movss */
    MEM8(esp + 0x14) = 0xB0;
    MEM8(esp + 0x15) = 0xA0;
    MEM8(esp + 0x16) = 0x2A;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00114391: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x47;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + 0x3C);
    MEM8(esp + 0x17) = LO8(edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001143A5: ;
    xmm0 = xmm0 * MEMF(0x64A4C8); /* mulss */
    xmm0 = xmm0 + MEMF(0x64A4C4); /* addss */
    xmm0 = xmm0 * MEMF(0x648E54); /* mulss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x90); /* movss */
    MEMF(esp + 0x4C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x94); /* movss */
    edx = esp + 0x6C;
    PUSH32(esp, edx);
    eax = esp + 0x68;
    MEMF(esp + 0x54) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x9C); /* movss */
    PUSH32(esp, eax);
    MEMF(esp + 0x5C) = xmm0; /* movss */
    MEMF(esp + 0x60) = xmm5; /* movss */
    MEMF(esp + 0x64) = xmm5; /* movss */
    MEMF(esp + 0x68) = xmm5; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00114417: ;
    ecx = MEM32(esp + 0xB0);
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * MEMF(0x649BB8); /* mulss */
    xmm2 = xmm2 + MEMF(0x649AD0); /* addss */
    xmm2 = xmm2 * MEMF(0x648D80); /* mulss */
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00110650(); /* call 0x00110650 */

loc_0011443F: ;
    MEMF(esp + 0x74) = xmm5; /* movss */
    MEMF(esp + 0x7C) = xmm5; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00114450: ;
    esi = eax;
    esi = esi & 1;
    esi = esi << 1;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0011445C: ;
    edx = MEM32(esp + 0xCC);
    xmm0 = MEMF(0x64A4C0); /* movss */
    eax = eax & 1;
    esi = esi | eax;
    SET_LO8(eax, LO8(eax) | 0xFF);
    PUSH32(esp, edx);
    ecx = 4;
    PUSH32(esp, ecx);
    MEM8(esp + 0x91) = LO8(eax);
    MEM8(esp + 0x92) = LO8(eax);
    eax = 2;
    PUSH32(esp, 0);
    MEM32(esp + 0x34) = eax;
    MEM32(esp + 0x40) = eax;
    esi = esi << 6;
    eax = esp + 0x20;
    PUSH32(esp, 1);
    esi = esi | 0xCE05;
    PUSH32(esp, eax);
    MEM32(esp + 0x94) = esi;
    MEM8(esp + 0x9C) = 0xA;
    MEM16(esp + 0x58) = 0x1C;
    MEM16(esp + 0x5A) = 9;
    MEM16(esp + 0x5C) = 0x19;
    MEMF(esp + 0x60) = xmm0; /* movss */
    MEM8(esp + 0x9F) = 0;
    MEM32(esp + 0x38) = ecx;
    MEM32(esp + 0x40) = 0;
    MEM32(esp + 0x44) = ecx;
    MEM32(esp + 0x4C) = 0;
    PUSH32(esp, 0); sub_00105450(); /* call 0x00105450 */

loc_001144F5: ;
    esp = esp + 0x20;
    POP32(esp, esi);
    if (TEST_Z(eax, eax)) goto loc_00114506; /* je: equal / zero */

loc_001144FD: ;
    ecx = MEM32(esp);
    MEM32(eax + 0x170) = ecx;

loc_00114506: ;
    eax = 1;
    esp = esp + 0x80;
    esp += 4; return; /* ret */

}

/**
 * sub_00114520
 * Original: 0x00114520 - 0x0011464D (301 bytes, 90 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00114520(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm5, xmm6;

loc_00114520: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x68;
    PUSH32(esp, esi);
    esi = eax;
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(esi, esi)) goto loc_00114647; /* je: equal / zero */

loc_00114535: ;
    eax = MEM32(esi + 0x3C8);
    if (TEST_Z(eax, eax)) goto loc_00114647; /* je: equal / zero */

loc_00114543: ;
    edx = MEM32(0x7FA200);
    eax = MEM32(0x8470DC);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x770);
    PUSH32(esp, 1);
    edx = edx + eax;
    ecx = 6;
    PUSH32(esp, 0); sub_00047FA0(); /* call 0x00047FA0 */

loc_00114562: ;
    SET_LO16(edi, ZX8(MEM8(esi + 0x175)));
    eax = esp + 0x34;
    PUSH32(esp, eax);
    PUSH32(esp, 0x5D58BC);
    edi = edi + 0x40;
    PUSH32(esp, 0); sub_002F7810(); /* call 0x002F7810 */

loc_0011457C: ;
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    PUSH32(esp, 0x596170);
    PUSH32(esp, 0); sub_001101F0(); /* call 0x001101F0 */

loc_00114590: ;
    esp = esp + 0x18;
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 8);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001145A1: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x1F;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = MEM32(esp + 0x2C);
    ecx = MEM32(esp + 0x28);
    edx = edx + 0x28;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x34);
    PUSH32(esp, edi);
    PUSH32(esp, 0x41200000);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = 0xFF;
    ecx = 0; /* xor self */
    PUSH32(esp, 0); sub_00112DC0(); /* call 0x00112DC0 */

loc_001145CE: ;
    MEM8(esp + 0x4C) = 1;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001145D8: ;
    eax = eax & 0x8000000Fu;
    if (((int32_t)eax >= 0)) goto loc_001145E4; /* jns: not sign (positive) */

loc_001145DF: ;
    eax--;
    eax = eax | 0xFFFFFFF0u;
    eax++;

loc_001145E4: ;
    eax = eax + 0xC;
    MEM16(esp + 0x4E) = LO16(eax);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001145F1: ;
    xmm5 = MEMF(0x649B80); /* movss */
    xmm6 = MEMF(0x64A0D4); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 + xmm6; /* addss */
    MEMF(esp + 0x50) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00114614: ;
    PUSH32(esp, ebx);
    edx = esp + 0x50;
    xmm0 = xmm0 * xmm5; /* mulss */
    PUSH32(esp, 0);
    xmm0 = xmm0 + xmm6; /* addss */
    PUSH32(esp, edx);
    MEMF(esp + 0x60) = xmm0; /* movss */
    MEM8(esp + 0x65) = 0xFF;
    MEM8(esp + 0x64) = 1;
    PUSH32(esp, 0); sub_0015A3F0(); /* call 0x0015A3F0 */

loc_00114639: ;
    eax = esp + 0x4C;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0019A300(); /* call 0x0019A300 */

loc_00114644: ;
    esp = esp + 0x40;

loc_00114647: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00114650
 * Original: 0x00114650 - 0x00114673 (35 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00114650(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00114650: ;
    ecx = MEM32(esp + 0x28);
    eax = 0; /* xor self */
    SET_LO8(eax, LO8(ecx));
    SET_LO8(eax, LO8(eax) - 0x40);
    SET_LO8(edx, LO8(eax));
    esp = esp - 0x3C;
    SET_LO8(edx, LO8(edx) & 0xC0);
    (void)0; /* test LO8(eax), 0x40 - flags set for next jcc */
    PUSH32(esp, esi);
    if (TEST_Z(LO8(eax), 0x40)) { sub_00114673(); return; } /* je: equal / zero */

loc_00114667: ;
    eax = eax & 0x3F;
    esi = 0x40;
    esi = esi - eax;
    g_seh_ebp = ebp; sub_00114678(); return; /* tail jmp 0x00114678 */

}

/**
 * sub_001148C0
 * Original: 0x001148C0 - 0x001148FF (63 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001148C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001148C0: ;
    esp = esp - 0x14;
    PUSH32(esp, ebx);
    SET_LO16(ebx, MEM16(esp + 0x1C));
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x43AF0000);
    edi = eax;
    PUSH32(esp, 0x40000000);
    esi = edi + 0x78;
    PUSH32(esp, 3);
    PUSH32(esp, 0); sub_000F60F0(); /* call 0x000F60F0 */

loc_001148EF: ;
    esp = esp + 0x1C;
    if (TEST_NZ(edi, edi)) { sub_001148FF(); return; } /* jne: not equal / not zero */

loc_001148F6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00114990
 * Original: 0x00114990 - 0x00114B75 (485 bytes, 125 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00114990(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00114990: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x4C);
    eax = MEM32(esi + 0x64);
    if (TEST_Z(eax, eax)) goto loc_00114B64; /* je: equal / zero */

loc_001149A5: ;
    SET_LO8(eax, MEM8(esi + 0x10B));
    if (CMP_NE(LO8(eax), MEM8(ebx + 0x50))) goto loc_00114B64; /* jne: not equal / not zero */

loc_001149B4: ;
    if (CMP_EQ(MEM32(esi + 0x68), 0xFFFF)) goto loc_00114B64; /* je: equal / zero */

loc_001149C1: ;
    SET_LO8(eax, MEM8(esi + 0x1AC));
    if (CMP_EQ(LO8(eax), 6)) goto loc_001149E7; /* je: equal / zero */

loc_001149CB: ;
    if (CMP_EQ(LO8(eax), 7)) goto loc_001149E7; /* je: equal / zero */

loc_001149CF: ;
    MEM8(esi + 0x1AD) = 0;
    MEM32(esi + 0x1A8) = 0x1EFFFFFF;
    MEM8(esi + 0x1AE) = 0xA;

loc_001149E7: ;
    MEM8(esi + 0x1AC) = 6;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001149F3: ;
    xmm0 = xmm0 * MEMF(0x64A894); /* mulss */
    xmm0 = xmm0 + MEMF(0x64A890); /* addss */
    xmm0 = xmm0 * MEMF(0x7FA24C); /* mulss */
    xmm0 = xmm0 + MEMF(ebx + 0x54); /* addss */
    /* comiss xmm0, MEMF(0x648D14) - sets EFLAGS */
    MEMF(ebx + 0x54) = xmm0; /* movss */
    if ((xmm0 <= MEMF(0x648D14))) goto loc_00114AE5; /* jbe: below or equal (unsigned <=) */

loc_00114A22: ;
    PUSH32(esp, ebp);
    MEM8(esp + 0x16) = 0xBA;
    MEM8(esp + 0x15) = 0xD2;
    MEM8(esp + 0x14) = 0xFF;
    PUSH32(esp, edi);

loc_00114A33: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00114A38: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x7E;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = esp + 0x18;
    SET_LO8(edx, LO8(edx) - LO8(ecx));
    MEM8(esp + 0x1B) = LO8(edx);
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(ebx + 4));
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00114A5A: ;
    xmm0 = xmm0 * MEMF(0x649550); /* mulss */
    xmm0 = xmm0 + MEMF(0x648FD8); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0x43010000);
    PUSH32(esp, 0x43480000);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00114A7F: ;
    ebp = eax;
    ebp = ebp & 0x8000000Fu;
    if (((int32_t)ebp >= 0)) goto loc_00114A8E; /* jns: not sign (positive) */

loc_00114A89: ;
    ebp--;
    ebp = ebp | 0xFFFFFFF0u;
    ebp++;

loc_00114A8E: ;
    ebp = ebp + 0xF;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00114A96: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x65;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = edx;
    eax = eax - 0x3F;
    MEM32(esp + 0x2C) = eax;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00114AAC: ;
    edi = eax;
    eax = ebp;
    ebp = MEM32(esp + 0x2C);
    edi = edi & 0xFF;
    ecx = ebp;
    PUSH32(esp, 0); sub_000A9110(); /* call 0x000A9110 */

loc_00114AC1: ;
    xmm0 = MEMF(ebx + 0x54); /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    esp = esp + 0x1C;
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(ebx + 0x54) = xmm0; /* movss */
    if ((xmm0 > xmm1)) goto loc_00114A33; /* ja: above (unsigned >) */

loc_00114AE3: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_00114AE5: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00114AEA: ;
    xmm0 = xmm0 * MEMF(0x64A88C); /* mulss */
    xmm0 = xmm0 + MEMF(0x649E78); /* addss */
    xmm0 = xmm0 * MEMF(0x7FA24C); /* mulss */
    xmm0 = xmm0 + MEMF(ebx + 0x58); /* addss */
    /* comiss xmm0, MEMF(0x648D14) - sets EFLAGS */
    MEMF(ebx + 0x58) = xmm0; /* movss */
    if ((xmm0 <= MEMF(0x648D14))) goto loc_00114B71; /* jbe: below or equal (unsigned <=) */

loc_00114B15: ;
    edx = ebx + 4;
    MEM32(esp + 0x10) = edx;
    /* nop */

loc_00114B20: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00114B25: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x65;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = edx - 0x3F;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00114B36: ;
    eax = eax & 0xFF;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_000A96D0(); /* call 0x000A96D0 */

loc_00114B42: ;
    xmm0 = MEMF(ebx + 0x58); /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    esp = esp + 0xC;
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(ebx + 0x58) = xmm0; /* movss */
    if ((xmm0 > xmm1)) goto loc_00114B20; /* ja: above (unsigned >) */

loc_00114B60: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00114B64: ;
    xmm0 = MEMF(0x648D34); /* movss */
    MEMF(ebx + 0x30) = xmm0; /* movss */

loc_00114B71: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00114B80
 * Original: 0x00114B80 - 0x00114C09 (137 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00114B80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00114B80: ;
    eax = MEM32(esp + 0xC);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (TEST_NZ(eax, eax)) goto loc_00114BD9; /* jne: not equal / not zero */

loc_00114B8D: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(eax);
    if (CMP_EQ(ecx, MEM32(esi + 0x4C))) goto loc_00114BA0; /* je: equal / zero */

loc_00114B98: ;
    SET_LO8(edx, MEM8(eax + 4));
    if (CMP_NE(LO8(edx), MEM8(esi + 0x50))) goto loc_00114C07; /* jne: not equal / not zero */

loc_00114BA0: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00114C07; /* jne: not equal / not zero */

loc_00114BA9: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_00114BB0: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_00114C07; /* jl: less (signed <) */

loc_00114BB7: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) goto loc_00114BCC; /* je: equal / zero */

loc_00114BC4: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00114BC7: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00114BCC: ;
    eax = esi;
    edx = 1;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000DA5E0(); return; /* tail jmp 0x000DA5E0 */

loc_00114BD9: ;
    if (CMP_NE(eax, 0x2D)) goto loc_00114C07; /* jne: not equal / not zero */

loc_00114BDE: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esi + 0x4C);
    edx = MEM32(eax);
    if (CMP_NE(ecx, edx)) goto loc_00114BF9; /* jne: not equal / not zero */

loc_00114BEB: ;
    ecx = MEM32(eax + 4);
    MEM32(esi + 0x4C) = ecx;
    SET_LO8(edx, MEM8(eax + 9));
    MEM8(esi + 0x50) = LO8(edx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00114BF9: ;
    if (CMP_NE(ecx, MEM32(eax + 4))) goto loc_00114C07; /* jne: not equal / not zero */

loc_00114BFE: ;
    MEM32(esi + 0x4C) = edx;
    SET_LO8(eax, MEM8(eax + 8));
    MEM8(esi + 0x50) = LO8(eax);

loc_00114C07: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00114C10
 * Original: 0x00114C10 - 0x00114F18 (776 bytes, 181 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00114C10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00114C10: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 9);
    eax = 0xD0;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_00114C23: ;
    edi = eax;
    ebx = 0; /* xor self */
    esp = esp + 8;
    if (CMP_EQ(edi, ebx)) goto loc_00114F15; /* je: equal / zero */

loc_00114C32: ;
    if (CMP_NE(MEM32(0x84A19C), ebx)) goto loc_00114C3F; /* jne: not equal / not zero */

loc_00114C3A: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_00114C3F: ;
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
    if (CMP_EQ(esi, ebx)) goto loc_00114C8F; /* je: equal / zero */

loc_00114C67: ;
    if (CMP_B(MEM32(esi + 0x80), 0x780)) goto loc_00114C8F; /* jb: below (unsigned <) */

loc_00114C73: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00114C7D: ;
    PUSH32(esp, 0x780);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00114C88: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_00114CAF; /* jne: not equal / not zero */

loc_00114C8F: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    ebp = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00114CA1: ;
    PUSH32(esp, 0x780);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00114CAC: ;
    esp = esp + 8;

loc_00114CAF: ;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(edi + 0xC4) = eax;
    if (CMP_NE(eax, ebx)) goto loc_00114CFF; /* jne: not equal / not zero */

loc_00114CB9: ;
    if (CMP_NE(MEM8(0x8472BD), LO8(ebx))) goto loc_00114F13; /* jne: not equal / not zero */

loc_00114CC5: ;
    edx = edi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_00114CCC: ;
    eax = MEM32(edi);
    if (CMP_L(eax, 2)) goto loc_00114F13; /* jl: less (signed <) */

loc_00114CD7: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (CMP_EQ(eax, ebx)) goto loc_00114CEF; /* je: equal / zero */

loc_00114CE4: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00114CE7: ;
    esp = esp + 4;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00114CEF: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = edi;
    POP32(esp, edi);
    edx = 1;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_000DA5E0(); return; /* tail jmp 0x000DA5E0 */

loc_00114CFF: ;
    xmm0 = MEMF(esp + 0x14); /* movss */
    SET_LO16(eax, MEM16(esp + 0x24));
    MEMF(edi + 0xB0) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x18); /* movss */
    MEMF(edi + 0xB4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x1C); /* movss */
    MEMF(edi + 0xB8) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x2C); /* movss */
    MEMF(edi + 0xBC) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x30); /* movss */
    MEMF(edi + 0xC0) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    esi = 0; /* xor self */
    MEM16(edi + 0xC8) = LO16(ebx);
    MEM16(edi + 0xCA) = LO16(eax);
    ebp = 0; /* xor self */
    /* nop */

loc_00114D60: ;
    if (CMP_GE(ebp, 0x168)) goto loc_00114DCA; /* jge: greater or equal (signed >=) */

loc_00114D68: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00114D6D: ;
    edx = MEM32(edi + 0xC4);
    eax = eax & 0xF;
    ecx = 7;
    ecx = ecx - eax;
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(esi + edx + 0x80) = xmm1; /* movss */
    eax = MEM32(edi + 0xC4);
    MEMF(esi + eax + 0x84) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00114D9E: ;
    eax = eax & 0x3F;
    ecx = eax + ebp + -30;

loc_00114DA5: ;
    edx = MEM32(edi + 0xC4);
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(esi + edx + 0x88) = xmm1; /* movss */
    eax = MEM32(edi + 0xC4);
    MEM8(esi + eax + 0x98) = LO8(ebx);
    goto loc_00114E72;

loc_00114DCA: ;
    if (CMP_GE(ebp, 0x2D0)) goto loc_00114E14; /* jge: greater or equal (signed >=) */

loc_00114DD2: ;
    ecx = MEM32(edi + 0xC4);
    MEMF(esi + ecx + 0x80) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00114DE6: ;
    eax = eax & 0x3F;
    edx = eax + ebp + -570;
    eax = MEM32(edi + 0xC4);
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(esi + eax + 0x84) = xmm1; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00114E08: ;
    eax = eax & 0xF;
    ecx = 7;
    ecx = ecx - eax;
    goto loc_00114DA5;

loc_00114E14: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00114E19: ;
    edx = MEM32(edi + 0xC4);
    eax = eax & 0x3F;
    ecx = eax + ebp + -30;
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(esi + edx + 0x80) = xmm1; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00114E38: ;
    edx = MEM32(edi + 0xC4);
    eax = eax & 0xF;
    ecx = 0x61;
    ecx = ecx - eax;
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(esi + edx + 0x84) = xmm1; /* movss */
    eax = MEM32(edi + 0xC4);
    MEMF(esi + eax + 0x88) = xmm0; /* movss */
    ecx = MEM32(edi + 0xC4);
    MEM8(esi + ecx + 0x98) = 1;

loc_00114E72: ;
    eax = MEM32(esp + 0x20);
    if (CMP_L(eax, 4)) goto loc_00114EA3; /* jl: less (signed <) */

loc_00114E7B: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00114E80: ;
    ecx = MEM32(esp + 0x20);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = (uint32_t)((int32_t)ecx >> 2);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = edx + MEM32(esp + 0x20);
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = MEM32(edi + 0xC4);
    MEMF(esi + edx + 0x8C) = xmm1; /* movss */
    goto loc_00114EB6;

loc_00114EA3: ;
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    eax = MEM32(edi + 0xC4);
    MEMF(esi + eax + 0x8C) = xmm1; /* movss */

loc_00114EB6: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00114EBB: ;
    ecx = MEM32(edi + 0xC4);
    eax = eax & 0xF;
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esi + ecx + 0x90) = xmm1; /* movss */
    edx = MEM32(edi + 0xC4);
    MEM16(esi + edx + 0x94) = LO16(ebx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00114EE4: ;
    ecx = MEM32(esp + 0x28);
    edx = MEM32(edi + 0xC4);
    eax = eax & ecx;
    ecx = MEM32(esp + 0x24);
    ecx = ecx - eax;
    MEM16(esi + edx + 0x96) = LO16(ecx);
    ebp = ebp + 0x5A;
    esi = esi + 0xA0;
    if (CMP_L(ebp, 0x438)) goto loc_00114D60; /* jl: less (signed <) */

loc_00114F13: ;
    POP32(esp, esi);
    POP32(esp, ebp);

loc_00114F15: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00114F20
 * Original: 0x00114F20 - 0x00115315 (1013 bytes, 207 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00114F20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00114F20: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    SET_LO16(eax, MEM16(esi + 0xC8));
    if (CMP_GE(LO16(eax) & LO16(eax), 0)) goto loc_00114F81; /* jge: greater or equal (signed >=) */

loc_00114F31: ;
    eax = esi + 0xC4;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00114F3D: ;
    SET_LO8(eax, MEM8(0x8472BD));
    esp = esp + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00115313; /* jne: not equal / not zero */

loc_00114F4D: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_00114F54: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_00115313; /* jl: less (signed <) */

loc_00114F5F: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) goto loc_00114F74; /* je: equal / zero */

loc_00114F6C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00114F6F: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00114F74: ;
    eax = esi;
    edx = 1;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000DA5E0(); return; /* tail jmp 0x000DA5E0 */

loc_00114F81: ;
    PUSH32(esp, edi);
    edi = MEM32(0x7FA20C);
    eax = eax + edi;
    (void)0; /* cmp LO16(eax), MEM16(esi + 0xCA) - flags set for next jcc */
    MEM16(esi + 0xC8) = LO16(eax);
    if (CMP_LE(LO16(eax), MEM16(esi + 0xCA))) goto loc_00114FA6; /* jle: less or equal (signed <=) */

loc_00114F9A: ;
    POP32(esp, edi);
    MEM16(esi + 0xC8) = 0xFFF6;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00114FA6: ;
    if (TEST_S(LO16(eax), LO16(eax))) goto loc_00115312; /* jl: less (signed <) */

loc_00114FAF: ;
    xmm1 = MEMF(0x648F94); /* movss */
    eax = 0; /* xor self */
    /* nop */

loc_00114FC0: ;
    ecx = MEM32(esi + 0xC4);
    SET_LO16(edx, MEM16(ecx + eax + 0x94));
    ecx = ecx + eax;
    if (CMP_GE(LO16(edx), MEM16(ecx + 0x96))) goto loc_0011504B; /* jge: greater or equal (signed >=) */

loc_00114FD9: ;
    MEM16(ecx + 0x94) = MEM16(ecx + 0x94) + LO16(edi);
    ecx = MEM32(esi + 0xC4);
    SET_LO16(edx, MEM16(ecx + eax + 0x96));
    ecx = ecx + eax;
    if (CMP_LE(MEM16(ecx + 0x94), LO16(edx))) goto loc_00115000; /* jle: less or equal (signed <=) */

loc_00114FF9: ;
    MEM16(ecx + 0x94) = LO16(edx);

loc_00115000: ;
    edx = MEM32(esi + 0xC4);
    xmm0 = MEMF(eax + edx + 0x8C); /* movss */
    ecx = eax + edx;
    edx = (uint32_t)(int32_t)SMEM16(ecx + 0x94);
    xmm3 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = (uint32_t)(int32_t)SMEM16(ecx + 0x96);
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm2 = xmm2 * xmm3; /* mulss */
    xmm3 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm2 = xmm2 / xmm3; /* divss */
    xmm0 = xmm0 - xmm2; /* subss */
    xmm0 = xmm0 + MEMF(ecx + 0x90); /* addss */
    MEMF(ecx + 0x90) = xmm0; /* movss */

loc_0011504B: ;
    ecx = MEM32(esi + 0xC4);
    SET_LO16(edx, MEM16(ecx + eax + 0x134));
    ecx = ecx + eax;
    if (CMP_GE(LO16(edx), MEM16(ecx + 0x136))) goto loc_001150D6; /* jge: greater or equal (signed >=) */

loc_00115064: ;
    MEM16(ecx + 0x134) = MEM16(ecx + 0x134) + LO16(edi);
    ecx = MEM32(esi + 0xC4);
    SET_LO16(edx, MEM16(ecx + eax + 0x136));
    ecx = ecx + eax;
    if (CMP_LE(MEM16(ecx + 0x134), LO16(edx))) goto loc_0011508B; /* jle: less or equal (signed <=) */

loc_00115084: ;
    MEM16(ecx + 0x134) = LO16(edx);

loc_0011508B: ;
    edx = MEM32(esi + 0xC4);
    xmm0 = MEMF(eax + edx + 0x12C); /* movss */
    ecx = eax + edx;
    edx = (uint32_t)(int32_t)SMEM16(ecx + 0x134);
    xmm3 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = (uint32_t)(int32_t)SMEM16(ecx + 0x136);
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm2 = xmm2 * xmm3; /* mulss */
    xmm3 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm2 = xmm2 / xmm3; /* divss */
    xmm0 = xmm0 - xmm2; /* subss */
    xmm0 = xmm0 + MEMF(ecx + 0x130); /* addss */
    MEMF(ecx + 0x130) = xmm0; /* movss */

loc_001150D6: ;
    ecx = MEM32(esi + 0xC4);
    SET_LO16(edx, MEM16(ecx + eax + 0x1D4));
    ecx = ecx + eax;
    if (CMP_GE(LO16(edx), MEM16(ecx + 0x1D6))) goto loc_00115161; /* jge: greater or equal (signed >=) */

loc_001150EF: ;
    MEM16(ecx + 0x1D4) = MEM16(ecx + 0x1D4) + LO16(edi);
    ecx = MEM32(esi + 0xC4);
    SET_LO16(edx, MEM16(ecx + eax + 0x1D6));
    ecx = ecx + eax;
    if (CMP_LE(MEM16(ecx + 0x1D4), LO16(edx))) goto loc_00115116; /* jle: less or equal (signed <=) */

loc_0011510F: ;
    MEM16(ecx + 0x1D4) = LO16(edx);

loc_00115116: ;
    edx = MEM32(esi + 0xC4);
    xmm0 = MEMF(eax + edx + 0x1CC); /* movss */
    ecx = eax + edx;
    edx = (uint32_t)(int32_t)SMEM16(ecx + 0x1D4);
    xmm3 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = (uint32_t)(int32_t)SMEM16(ecx + 0x1D6);
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm2 = xmm2 * xmm3; /* mulss */
    xmm3 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm2 = xmm2 / xmm3; /* divss */
    xmm0 = xmm0 - xmm2; /* subss */
    xmm0 = xmm0 + MEMF(ecx + 0x1D0); /* addss */
    MEMF(ecx + 0x1D0) = xmm0; /* movss */

loc_00115161: ;
    ecx = MEM32(esi + 0xC4);
    SET_LO16(edx, MEM16(ecx + eax + 0x274));
    ecx = ecx + eax;
    if (CMP_GE(LO16(edx), MEM16(ecx + 0x276))) goto loc_001151EC; /* jge: greater or equal (signed >=) */

loc_0011517A: ;
    MEM16(ecx + 0x274) = MEM16(ecx + 0x274) + LO16(edi);
    ecx = MEM32(esi + 0xC4);
    SET_LO16(edx, MEM16(ecx + eax + 0x276));
    ecx = ecx + eax;
    if (CMP_LE(MEM16(ecx + 0x274), LO16(edx))) goto loc_001151A1; /* jle: less or equal (signed <=) */

loc_0011519A: ;
    MEM16(ecx + 0x274) = LO16(edx);

loc_001151A1: ;
    edx = MEM32(esi + 0xC4);
    xmm0 = MEMF(eax + edx + 0x26C); /* movss */
    ecx = eax + edx;
    edx = (uint32_t)(int32_t)SMEM16(ecx + 0x274);
    xmm3 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = (uint32_t)(int32_t)SMEM16(ecx + 0x276);
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm2 = xmm2 * xmm3; /* mulss */
    xmm3 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm2 = xmm2 / xmm3; /* divss */
    xmm0 = xmm0 - xmm2; /* subss */
    xmm0 = xmm0 + MEMF(ecx + 0x270); /* addss */
    MEMF(ecx + 0x270) = xmm0; /* movss */

loc_001151EC: ;
    ecx = MEM32(esi + 0xC4);
    SET_LO16(edx, MEM16(ecx + eax + 0x314));
    ecx = ecx + eax;
    if (CMP_GE(LO16(edx), MEM16(ecx + 0x316))) goto loc_00115277; /* jge: greater or equal (signed >=) */

loc_00115205: ;
    MEM16(ecx + 0x314) = MEM16(ecx + 0x314) + LO16(edi);
    ecx = MEM32(esi + 0xC4);
    SET_LO16(edx, MEM16(ecx + eax + 0x316));
    ecx = ecx + eax;
    if (CMP_LE(MEM16(ecx + 0x314), LO16(edx))) goto loc_0011522C; /* jle: less or equal (signed <=) */

loc_00115225: ;
    MEM16(ecx + 0x314) = LO16(edx);

loc_0011522C: ;
    edx = MEM32(esi + 0xC4);
    xmm0 = MEMF(eax + edx + 0x30C); /* movss */
    ecx = eax + edx;
    edx = (uint32_t)(int32_t)SMEM16(ecx + 0x314);
    xmm3 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = (uint32_t)(int32_t)SMEM16(ecx + 0x316);
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm2 = xmm2 * xmm3; /* mulss */
    xmm3 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm2 = xmm2 / xmm3; /* divss */
    xmm0 = xmm0 - xmm2; /* subss */
    xmm0 = xmm0 + MEMF(ecx + 0x310); /* addss */
    MEMF(ecx + 0x310) = xmm0; /* movss */

loc_00115277: ;
    ecx = MEM32(esi + 0xC4);
    SET_LO16(edx, MEM16(ecx + eax + 0x3B4));
    ecx = ecx + eax;
    if (CMP_GE(LO16(edx), MEM16(ecx + 0x3B6))) goto loc_00115302; /* jge: greater or equal (signed >=) */

loc_00115290: ;
    MEM16(ecx + 0x3B4) = MEM16(ecx + 0x3B4) + LO16(edi);
    ecx = MEM32(esi + 0xC4);
    SET_LO16(edx, MEM16(ecx + eax + 0x3B6));
    ecx = ecx + eax;
    if (CMP_LE(MEM16(ecx + 0x3B4), LO16(edx))) goto loc_001152B7; /* jle: less or equal (signed <=) */

loc_001152B0: ;
    MEM16(ecx + 0x3B4) = LO16(edx);

loc_001152B7: ;
    edx = MEM32(esi + 0xC4);
    xmm0 = MEMF(eax + edx + 0x3AC); /* movss */
    ecx = eax + edx;
    edx = (uint32_t)(int32_t)SMEM16(ecx + 0x3B4);
    xmm3 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = (uint32_t)(int32_t)SMEM16(ecx + 0x3B6);
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm2 = xmm2 * xmm3; /* mulss */
    xmm3 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm2 = xmm2 / xmm3; /* divss */
    xmm0 = xmm0 - xmm2; /* subss */
    xmm0 = xmm0 + MEMF(ecx + 0x3B0); /* addss */
    MEMF(ecx + 0x3B0) = xmm0; /* movss */

loc_00115302: ;
    eax = eax + 0x3C0;
    if (CMP_L(eax, 0x780)) goto loc_00114FC0; /* jl: less (signed <) */

loc_00115312: ;
    POP32(esp, edi);

loc_00115313: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00115320
 * Original: 0x00115320 - 0x0011556D (589 bytes, 143 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00115320(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm5;

loc_00115320: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x94;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    (void)0; /* cmp MEM16(ebx + 0xC8), 0 - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_L(MEM16(ebx + 0xC8), 0)) goto loc_00115566; /* jl: less (signed <) */

loc_00115340: ;
    xmm0 = MEMF(ebx + 0xB0); /* movss */
    eax = (uint32_t)(int32_t)SMEM8(0x7FA230);
    ecx = 0x10;
    esi = 0x5A0350;
    edi = esp + 0x20;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEMF(esp + 0x50) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0xB4); /* movss */
    eax = eax << 6;
    MEMF(esp + 0x54) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0xB8); /* movss */
    edi = eax + ebx + 0x30;
    ecx = 0x10;
    esi = esp + 0x20;
    MEMF(esp + 0x58) = xmm0; /* movss */
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = MEM32(0x8472C0);
    edx = 0; /* xor self */
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x14) = edx;
    goto loc_001153B0;

loc_001153A5: ;
    edx = MEM32(esp + 0x14);
    /* nop */

loc_001153B0: ;
    eax = MEM32(ebx + 0xC4);
    xmm0 = MEMF(eax + edx + 0x90); /* movss */
    eax = eax + edx;
    ecx = 0x10;
    esi = 0x5A0350;
    edi = esp + 0x20;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEMF(esp + 0x50) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x54) = xmm0; /* movss */
    MEMF(esp + 0x58) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0xC0); /* movss */
    xmm0 = xmm0 * MEMF(esp + 0x20); /* mulss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0xBC); /* movss */
    xmm0 = xmm0 * MEMF(esp + 0x34); /* mulss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0xBC); /* movss */
    xmm0 = xmm0 * MEMF(esp + 0x48); /* mulss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    SET_LO8(ecx, MEM8(eax + 0x98));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    ecx = MEM32(ebx + 0xC4);
    eax = edx + ecx;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0011549C; /* jne: not equal / not zero */

loc_00115435: ;
    xmm0 = MEMF(0x648E18); /* movss */
    xmm1 = MEMF(eax + 0x88); /* movss */
    xmm5 = MEMF(0x648D14); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    esp = esp - 0xC;
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 8) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x84); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 4) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x80); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp) = xmm1; /* movss */
    PUSH32(esp, 0x3F800000);
    eax = esp + 0x7C;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E2E60(); /* call 0x003E2E60 */

loc_00115497: ;
    esp = esp + 0x24;
    goto loc_001154BD;

loc_0011549C: ;
    ecx = MEM32(eax + 0x88);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x84);
    eax = MEM32(eax + 0x80);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = esp + 0x6C;
    PUSH32(esp, 0); sub_00115570(); /* call 0x00115570 */

loc_001154BA: ;
    esp = esp + 0xC;

loc_001154BD: ;
    ecx = esp + 0x60;
    PUSH32(esp, ecx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    ecx = eax;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_001154CF: ;
    eax = (uint32_t)(int32_t)SMEM8(0x7FA230);
    edi = MEM32(ebx + 0xC4);
    eax = eax << 6;
    MEM32(esp + 0x1C) = eax;
    edi = edi + edx;
    edi = edi + eax;
    ecx = 0x10;
    esi = esp + 0x20;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    eax = MEM32(ebx + 0xC4);
    ecx = (uint32_t)(int32_t)SMEM16(eax + edx + 0x96);
    eax = eax + edx;
    edx = (uint32_t)(int32_t)SMEM16(eax + 0x94);
    eax = ecx;
    eax = eax - edx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xFF);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = eax;
    eax = MEM32(esp + 0x1C);
    ecx = eax + ebx + 0x30;
    PUSH32(esp, ecx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    ecx = eax;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_0011552E: ;
    ecx = MEM32(esp + 0x18);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x6B4760);
    PUSH32(esp, 0x6B47C0);
    PUSH32(esp, 4);
    PUSH32(esp, edx);
    eax = 9;
    PUSH32(esp, 0); sub_0013B810(); /* call 0x0013B810 */

loc_0011554E: ;
    eax = MEM32(esp + 0x14);
    eax = eax + 0xA0;
    (void)0; /* cmp eax, 0x780 - flags set for next jcc */
    MEM32(esp + 0x14) = eax;
    if (CMP_L(eax, 0x780)) goto loc_001153A5; /* jl: less (signed <) */

loc_00115566: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00115570
 * Original: 0x00115570 - 0x00115688 (280 bytes, 75 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00115570(void)
{
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00115570: ;
    esp = esp - 0xC;
    fp_push(MEMF(0x75DDCC)); /* fld float */
    PUSH32(esp, esi);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, edi);
    fp_push(MEMF(0x75DDCC)); /* fld float */
    ecx = 0x10;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    esi = 0x5A0350;
    fp_push(MEMF(0x75DDCC)); /* fld float */
    edi = eax;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEMF(esp + 0x20) = (float)fp_top(); fp_popp(); /* fstp */
    /* fld st(1) */
    /* FPU: fsin  */
    POP32(esp, edi);
    POP32(esp, esi);
    MEMF(esp + 8) = (float)fp_top(); fp_popp(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    /* FPU: fcos  */
    xmm5 = MEMF(esp + 8); /* movss */
    MEMF(eax + 0x18) = xmm5; /* movss */
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    /* fld st(0) */
    /* FPU: fsin  */
    MEMF(esp + 4) = (float)fp_top(); fp_popp(); /* fstp */
    xmm4 = MEMF(esp + 4); /* movss */
    /* FPU: fcos  */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    xmm3 = MEMF(esp); /* movss */
    /* FPU: fsin  */
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    /* FPU: fcos  */
    xmm1 = MEMF(esp + 0x14); /* movss */
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * xmm5; /* mulss */
    MEMF(esp + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    xmm6 = MEMF(esp + 0x18); /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm0 = xmm6; /* movaps */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm7 = xmm0; /* movaps */
    xmm7 = xmm7 - xmm2; /* subss */
    fp_top() = -fp_top(); /* fchs */
    xmm2 = MEMF(esp + 0x14); /* movss */
    MEMF(eax + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    MEMF(eax) = xmm7; /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm6 = xmm6 * xmm4; /* mulss */
    xmm4 = xmm4 * MEMF(esp + 0x10); /* mulss */
    xmm2 = xmm2 * xmm3; /* mulss */
    xmm3 = xmm3 * MEMF(esp + 0x10); /* mulss */
    MEMF(eax + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    xmm7 = xmm6; /* movaps */
    xmm7 = xmm7 * xmm5; /* mulss */
    xmm7 = xmm7 + xmm2; /* addss */
    MEMF(eax + 4) = xmm7; /* movss */
    xmm7 = 0.0f; /* xorps self = zero */
    xmm2 = xmm2 * xmm5; /* mulss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm7 = xmm7 - xmm4; /* subss */
    xmm2 = xmm2 + xmm6; /* addss */
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(eax + 8) = xmm7; /* movss */
    MEMF(eax + 0x20) = xmm2; /* movss */
    MEMF(eax + 0x24) = xmm1; /* movss */
    MEMF(eax + 0x28) = xmm3; /* movss */
    esp = esp + 0xC;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00115690
 * Original: 0x00115690 - 0x001156AD (29 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00115690(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00115690: ;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    eax = eax + 0x190;
    PUSH32(esp, 0x3B);
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_001156A2: ;
    ebp = eax;
    esp = esp + 8;
    if (TEST_NZ(ebp, ebp)) { sub_001156AD(); return; } /* jne: not equal / not zero */

loc_001156AB: ;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001157F0
 * Original: 0x001157F0 - 0x001158DE (238 bytes, 84 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001157F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001157F0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    SET_LO8(eax, MEM8(esi + 0x2C));
    SET_LO8(ebx, 0); /* xor self */
    if (TEST_Z(LO8(eax), 1)) goto loc_00115810; /* je: equal / zero */

loc_001157FF: ;
    SET_LO16(eax, MEM16(0x7FA20C));
    MEM16(esi + 0x2E) = MEM16(esi + 0x2E) - LO16(eax);
    if (CMP_L(MEM16(esi + 0x2E), 0)) goto loc_0011587D; /* jl: less (signed <) */

loc_00115810: ;
    SET_LO8(eax, MEM8(esi + 0x48));
    if (CMP_EQ(LO8(eax), 0xFF)) goto loc_00115831; /* je: equal / zero */

loc_00115817: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    edx = esi + 0x30;
    PUSH32(esp, edx);
    ecx = SX8(LO8(eax));
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx * 4 + 0x5961AC), _icall_esp); /* indirect call */
    }

loc_00115828: ;
    esp = esp + 0xC;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00115831; /* jne: not equal / not zero */

loc_0011582F: ;
    SET_LO8(ebx, 1);

loc_00115831: ;
    SET_LO8(eax, MEM8(esi + 0x49));
    if (CMP_EQ(LO8(eax), 0xFF)) goto loc_00115852; /* je: equal / zero */

loc_00115838: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi + 0x3C;
    PUSH32(esp, ecx);
    eax = SX8(LO8(eax));
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax * 4 + 0x5961AC), _icall_esp); /* indirect call */
    }

loc_00115849: ;
    esp = esp + 0xC;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00115852; /* jne: not equal / not zero */

loc_00115850: ;
    SET_LO8(ebx, 1);

loc_00115852: ;
    SET_LO8(eax, MEM8(esi + 0x2C));
    if (TEST_NZ(LO8(eax), 0xC)) goto loc_00115874; /* jne: not equal / not zero */

loc_00115859: ;
    SET_LO8(eax, MEM8(esi + 0x50));
    if (CMP_EQ(LO8(eax), 0xFF)) goto loc_00115879; /* je: equal / zero */

loc_00115860: ;
    edx = SX8(LO8(eax));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx * 4 + 0x5961B4), _icall_esp); /* indirect call */
    }

loc_0011586B: ;
    esp = esp + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00115879; /* jne: not equal / not zero */

loc_00115872: ;
    goto loc_0011587D;

loc_00115874: ;
    SET_LO8(eax, LO8(eax) | 2);
    MEM8(esi + 0x2C) = LO8(eax);

loc_00115879: ;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_001158DB; /* je: equal / zero */

loc_0011587D: ;
    eax = MEM32(esi + 0x168);
    if (TEST_Z(eax, eax)) goto loc_00115897; /* je: equal / zero */

loc_00115887: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053B870(); /* call 0x0053B870 */

loc_0011588D: ;
    MEM32(esi + 0x168) = 0;

loc_00115897: ;
    eax = MEM32(esi + 0x160);
    if (TEST_Z(eax, eax)) goto loc_001158B1; /* je: equal / zero */

loc_001158A1: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053B870(); /* call 0x0053B870 */

loc_001158A7: ;
    MEM32(esi + 0x160) = 0;

loc_001158B1: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001158DB; /* jne: not equal / not zero */

loc_001158BA: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_001158C1: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_001158DB; /* jl: less (signed <) */

loc_001158C8: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) { sub_001158DE(); return; } /* je: equal / zero */

loc_001158D5: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_001158D8: ;
    esp = esp + 4;

loc_001158DB: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00115A20
 * Original: 0x00115A20 - 0x00115A39 (25 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00115A20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00115A20: ;
    ecx = MEM32(esp + 4);
    eax = ZX8(MEM8(ecx + 0x60));
    eax = MEM32(eax * 4 + 0x5961CC);
    if (TEST_Z(eax, eax)) { sub_00115A39(); return; } /* je: equal / zero */

loc_00115A33: ;
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; RECOMP_ITAIL(eax); return; /* indirect tail jmp */

}

/**
 * sub_00115A40
 * Original: 0x00115A40 - 0x00115D60 (800 bytes, 195 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00115A40(void)
{
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6;

loc_00115A40: ;
    esp = esp - 0xC;
    eax = MEM32(esp + 0x10);
    xmm1 = MEMF(eax + 0x3C); /* movss */
    xmm2 = MEMF(eax + 0x40); /* movss */
    xmm3 = MEMF(eax + 0x44); /* movss */
    edx = MEM32(eax + 0x30);
    xmm1 = xmm1 - MEMF(eax + 0x30); /* subss */
    xmm2 = xmm2 - MEMF(eax + 0x34); /* subss */
    xmm3 = xmm3 - MEMF(eax + 0x38); /* subss */
    xmm0 = MEMF(0x6491E8); /* movss */
    MEM32(esp) = edx;
    xmm4 = MEMF(esp); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x34);
    MEM32(esp + 0xC) = esi;
    xmm5 = MEMF(esp + 0xC); /* movss */
    ecx = eax + 0x64;
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm3 = xmm3 * xmm0; /* mulss */
    xmm0 = 0.0f; /* xorps self = zero */
    ebx = ecx;
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x38);
    MEM32(ebx) = edx;
    MEM32(ebx + 4) = esi;
    MEMF(ecx + 0xC) = xmm0; /* movss */
    MEM32(ebx + 8) = edi;
    MEMF(ecx + 0x10) = xmm0; /* movss */
    MEMF(ecx + 0x14) = xmm0; /* movss */
    ecx = eax + 0x7C;
    xmm4 = xmm4 + xmm1; /* addss */
    MEMF(esp + 0xC) = xmm4; /* movss */
    esi = MEM32(esp + 0xC);
    edx = ecx;
    MEM32(edx) = esi;
    xmm5 = xmm5 + xmm2; /* addss */
    MEMF(esp + 0x10) = xmm5; /* movss */
    esi = MEM32(esp + 0x10);
    MEM32(edx + 4) = esi;
    MEM32(esp + 0x14) = edi;
    xmm6 = MEMF(esp + 0x14); /* movss */
    xmm6 = xmm6 + xmm3; /* addss */
    MEMF(esp + 0x14) = xmm6; /* movss */
    esi = MEM32(esp + 0x14);
    MEM32(edx + 8) = esi;
    MEMF(ecx + 0xC) = xmm0; /* movss */
    MEMF(ecx + 0x10) = xmm0; /* movss */
    MEMF(ecx + 0x14) = xmm0; /* movss */
    ecx = eax + 0x94;
    xmm4 = xmm4 + xmm1; /* addss */
    MEMF(esp + 0xC) = xmm4; /* movss */
    esi = MEM32(esp + 0xC);
    edx = ecx;
    MEM32(edx) = esi;
    xmm5 = xmm5 + xmm2; /* addss */
    MEMF(esp + 0x10) = xmm5; /* movss */
    esi = MEM32(esp + 0x10);
    MEM32(edx + 4) = esi;
    xmm6 = xmm6 + xmm3; /* addss */
    MEMF(esp + 0x14) = xmm6; /* movss */
    esi = MEM32(esp + 0x14);
    MEM32(edx + 8) = esi;
    MEMF(ecx + 0xC) = xmm0; /* movss */
    MEMF(ecx + 0x10) = xmm0; /* movss */
    MEMF(ecx + 0x14) = xmm0; /* movss */
    ecx = eax + 0xAC;
    xmm4 = xmm4 + xmm1; /* addss */
    MEMF(esp + 0xC) = xmm4; /* movss */
    esi = MEM32(esp + 0xC);
    edx = ecx;
    MEM32(edx) = esi;
    xmm5 = xmm5 + xmm2; /* addss */
    MEMF(esp + 0x10) = xmm5; /* movss */
    esi = MEM32(esp + 0x10);
    xmm6 = xmm6 + xmm3; /* addss */
    MEM32(edx + 4) = esi;
    MEMF(esp + 0x14) = xmm6; /* movss */
    esi = MEM32(esp + 0x14);
    MEM32(edx + 8) = esi;
    MEMF(ecx + 0xC) = xmm0; /* movss */
    MEMF(ecx + 0x10) = xmm0; /* movss */
    MEMF(ecx + 0x14) = xmm0; /* movss */
    xmm4 = xmm4 + xmm1; /* addss */
    MEMF(esp + 0xC) = xmm4; /* movss */
    esi = MEM32(esp + 0xC);
    ecx = eax + 0xC4;
    edx = ecx;
    MEM32(edx) = esi;
    xmm5 = xmm5 + xmm2; /* addss */
    MEMF(esp + 0x10) = xmm5; /* movss */
    esi = MEM32(esp + 0x10);
    MEM32(edx + 4) = esi;
    xmm6 = xmm6 + xmm3; /* addss */
    MEMF(esp + 0x14) = xmm6; /* movss */
    esi = MEM32(esp + 0x14);
    MEM32(edx + 8) = esi;
    MEMF(ecx + 0xC) = xmm0; /* movss */
    MEMF(ecx + 0x10) = xmm0; /* movss */
    MEMF(ecx + 0x14) = xmm0; /* movss */
    ecx = eax + 0xDC;
    xmm4 = xmm4 + xmm1; /* addss */
    MEMF(esp + 0xC) = xmm4; /* movss */
    esi = MEM32(esp + 0xC);
    edx = ecx;
    MEM32(edx) = esi;
    xmm5 = xmm5 + xmm2; /* addss */
    MEMF(esp + 0x10) = xmm5; /* movss */
    esi = MEM32(esp + 0x10);
    MEM32(edx + 4) = esi;
    xmm6 = xmm6 + xmm3; /* addss */
    MEMF(esp + 0x14) = xmm6; /* movss */
    esi = MEM32(esp + 0x14);
    MEM32(edx + 8) = esi;
    MEMF(ecx + 0xC) = xmm0; /* movss */
    MEMF(ecx + 0x10) = xmm0; /* movss */
    MEMF(ecx + 0x14) = xmm0; /* movss */
    ecx = eax + 0xF4;
    xmm4 = xmm4 + xmm1; /* addss */
    MEMF(esp + 0xC) = xmm4; /* movss */
    esi = MEM32(esp + 0xC);
    edx = ecx;
    MEM32(edx) = esi;
    xmm5 = xmm5 + xmm2; /* addss */
    MEMF(esp + 0x10) = xmm5; /* movss */
    esi = MEM32(esp + 0x10);
    MEM32(edx + 4) = esi;
    xmm6 = xmm6 + xmm3; /* addss */
    MEMF(esp + 0x14) = xmm6; /* movss */
    esi = MEM32(esp + 0x14);
    MEM32(edx + 8) = esi;
    MEMF(ecx + 0xC) = xmm0; /* movss */
    MEMF(ecx + 0x10) = xmm0; /* movss */
    MEMF(ecx + 0x14) = xmm0; /* movss */
    ecx = eax + 0x10C;
    xmm4 = xmm4 + xmm1; /* addss */
    MEMF(esp + 0xC) = xmm4; /* movss */
    esi = MEM32(esp + 0xC);
    edx = ecx;
    MEM32(edx) = esi;
    xmm5 = xmm5 + xmm2; /* addss */
    MEMF(esp + 0x10) = xmm5; /* movss */
    esi = MEM32(esp + 0x10);
    MEM32(edx + 4) = esi;
    xmm6 = xmm6 + xmm3; /* addss */
    MEMF(esp + 0x14) = xmm6; /* movss */
    esi = MEM32(esp + 0x14);
    MEM32(edx + 8) = esi;
    MEMF(ecx + 0xC) = xmm0; /* movss */
    MEMF(ecx + 0x10) = xmm0; /* movss */
    MEMF(ecx + 0x14) = xmm0; /* movss */
    xmm4 = xmm4 + xmm1; /* addss */
    ecx = eax + 0x124;
    MEMF(esp + 0xC) = xmm4; /* movss */
    esi = MEM32(esp + 0xC);
    edx = ecx;
    xmm5 = xmm5 + xmm2; /* addss */
    MEMF(esp + 0x10) = xmm5; /* movss */
    xmm6 = xmm6 + xmm3; /* addss */
    MEM32(edx) = esi;
    esi = MEM32(esp + 0x10);
    MEMF(esp + 0x14) = xmm6; /* movss */
    MEM32(edx + 4) = esi;
    esi = MEM32(esp + 0x14);
    MEM32(edx + 8) = esi;
    MEMF(ecx + 0xC) = xmm0; /* movss */
    MEMF(ecx + 0x10) = xmm0; /* movss */
    MEMF(ecx + 0x14) = xmm0; /* movss */
    ecx = eax + 0x13C;
    xmm4 = xmm4 + xmm1; /* addss */
    edx = ecx;
    MEMF(esp + 0xC) = xmm4; /* movss */
    esi = MEM32(esp + 0xC);
    MEM32(edx) = esi;
    xmm5 = xmm5 + xmm2; /* addss */
    MEMF(esp + 0x10) = xmm5; /* movss */
    esi = MEM32(esp + 0x10);
    MEM32(edx + 4) = esi;
    xmm6 = xmm6 + xmm3; /* addss */
    MEMF(esp + 0x14) = xmm6; /* movss */
    esi = MEM32(esp + 0x14);
    MEM32(edx + 8) = esi;
    MEMF(ecx + 0xC) = xmm0; /* movss */
    MEMF(ecx + 0x10) = xmm0; /* movss */
    MEMF(ecx + 0x14) = xmm0; /* movss */
    SET_LO8(ecx, MEM8(eax + 0x2C));
    POP32(esp, edi);
    SET_LO8(ecx, LO8(ecx) & 0xFD);
    POP32(esp, esi);
    MEM8(eax + 0x2C) = LO8(ecx);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00115F60
 * Original: 0x00115F60 - 0x00115FC8 (104 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00115F60(void)
{
    int _flags = 0; /* fallback flag var */

loc_00115F60: ;
    SET_LO8(ecx, MEM8(esp + 0xC));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    SET_LO8(eax, 1);
    if (TEST_Z(LO8(ecx), LO8(ecx))) { sub_00115FC8(); return; } /* je: equal / zero */

loc_00115F6A: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx + 0x190);
    PUSH32(esp, esi);
    esi = MEM32(edx + 0x64);
    if (TEST_Z(esi, esi)) goto loc_00115FBB; /* je: equal / zero */

loc_00115F7C: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(edx + 0x10B));
    (void)0; /* cmp LO8(ebx), MEM8(ecx + 0x194) - flags set for next jcc */
    POP32(esp, ebx);
    if (CMP_NE(LO8(ebx), MEM8(ecx + 0x194))) goto loc_00115FBB; /* jne: not equal / not zero */

loc_00115F8C: ;
    esi = MEM32(edx + 0x78);
    edx = MEM32(esp + 0xC);
    MEM32(edx) = esi;
    esi = MEM32(ecx + 0x190);
    esi = MEM32(esi + 0x7C);
    MEM32(edx + 4) = esi;
    esi = MEM32(ecx + 0x190);
    esi = MEM32(esi + 0x80);
    MEM32(edx + 8) = esi;
    SET_LO8(edx, MEM8(ecx + 0x2C));
    SET_LO8(edx, LO8(edx) & 0xFB);
    POP32(esp, esi);
    MEM8(ecx + 0x2C) = LO8(edx);
    esp += 4; return; /* ret */

loc_00115FBB: ;
    SET_LO8(edx, MEM8(ecx + 0x2C));
    SET_LO8(eax, 0); /* xor self */
    SET_LO8(edx, LO8(edx) | 0xC);
    POP32(esp, esi);
    MEM8(ecx + 0x2C) = LO8(edx);
    esp += 4; return; /* ret */

}

/**
 * sub_00115FF0
 * Original: 0x00115FF0 - 0x00116248 (600 bytes, 145 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00115FF0(void)
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

loc_00115FF0: ;
    esp = esp - 0x38;
    eax = MEM32(esp + 0x3C);
    fp_push(MEMF(eax + 0x3C)); /* fld float */
    xmm7 = MEMF(eax + 0x44); /* movss */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    xmm0 = MEMF(eax + 0x40); /* movss */
    xmm7 = xmm7 - MEMF(eax + 0x38); /* subss */
    xmm0 = xmm0 - MEMF(eax + 0x34); /* subss */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(esp + 8) = xmm7; /* movss */
    fp_push(MEMF(esp)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648D54)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_00116045; /* ja: above (unsigned >) */

loc_0011602D: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648D54)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_00116242; /* jbe: below or equal (unsigned <=) */

loc_00116045: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    xmm1 = MEMF(0x648D10); /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm2 = MEMF(esp); /* movss */
    fp_push(MEMF(esp)); /* fld float */
    xmm0 = xmm0 * xmm1; /* mulss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm0 = xmm0 + MEMF(eax + 0x34); /* addss */
    xmm6 = MEMF(eax + 0x30); /* movss */
    xmm4 = xmm0; /* movaps */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    xmm0 = MEMF(eax + 0x34); /* movss */
    xmm0 = xmm0 - xmm4; /* subss */
    xmm2 = xmm2 * xmm1; /* mulss */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    xmm2 = xmm2 + MEMF(eax + 0x30); /* addss */
    MEMF(esp + 0x30) = xmm4; /* movss */
    xmm3 = xmm7; /* movaps */
    xmm3 = xmm3 * xmm1; /* mulss */
    xmm1 = MEMF(eax + 0x3C); /* movss */
    xmm3 = xmm3 + MEMF(eax + 0x38); /* addss */
    xmm1 = xmm1 - xmm2; /* subss */
    MEMF(esp + 0x14) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x40); /* movss */
    xmm1 = xmm1 - xmm4; /* subss */
    xmm4 = MEMF(eax + 0x44); /* movss */
    xmm4 = xmm4 - xmm3; /* subss */
    MEMF(esp + 0x1C) = xmm4; /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x38); /* movss */
    xmm1 = xmm1 - MEMF(esp + 0x24); /* subss */
    xmm0 = xmm0 - xmm3; /* subss */
    xmm6 = xmm6 - xmm2; /* subss */
    /* FPU: fdivr dword ptr [0x648d14] */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_popp(); /* fstp */
    xmm4 = MEMF(esp + 0x3C); /* movss */
    xmm5 = xmm4; /* movaps */
    xmm4 = xmm4 * MEMF(esp); /* mulss */
    xmm5 = xmm5 * xmm7; /* mulss */
    xmm7 = xmm4; /* movaps */
    xmm4 = xmm5; /* movaps */
    xmm4 = xmm4 * xmm0; /* mulss */
    xmm0 = xmm7; /* movaps */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm4 = xmm4 + xmm0; /* addss */
    MEMF(esp + 0x10) = xmm7; /* movss */
    xmm7 = xmm7 * MEMF(esp + 0x14); /* mulss */
    xmm0 = xmm5; /* movaps */
    xmm0 = xmm0 * MEMF(esp + 0x1C); /* mulss */
    xmm0 = xmm0 + xmm7; /* addss */
    xmm0 = xmm0 - xmm4; /* subss */
    xmm7 = xmm1; /* movaps */
    xmm1 = xmm1 * xmm7; /* mulss */
    xmm4 = xmm0; /* movaps */
    xmm4 = xmm4 * xmm0; /* mulss */
    xmm1 = xmm1 + xmm4; /* addss */
    MEMF(esp + 0x3C) = xmm1; /* movss */
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    xmm1 = xmm1 * MEMF(0x648E14); /* mulss */
    /* comiss xmm1, MEMF(eax + 0x178) - sets EFLAGS */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    xmm4 = MEMF(0x648D14); /* movss */
    MEMF(esp) = xmm1; /* movss */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    xmm4 = xmm4 / MEMF(esp + 0x3C); /* divss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm6 = xmm4; /* movaps */
    xmm6 = xmm6 * xmm0; /* mulss */
    xmm4 = xmm4 * xmm7; /* mulss */
    MEMF(esp + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    if ((xmm1 <= MEMF(eax + 0x178))) goto loc_00116192; /* jbe: below or equal (unsigned <=) */

loc_00116186: ;
    esp = esp + 0x38;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00115A40(); return; /* tail jmp 0x00115A40 */

loc_00116192: ;
    fp_push(MEMF(eax + 0x178)); /* fld float */
    xmm0 = 0.0f; /* xorps self = zero */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    eax = eax + 0x6C;
    ecx = 0xA;
    fp_top() = sqrt(fp_top()); /* fsqrt */
    edi = edi;

loc_001161B0: ;
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    eax = eax + 0x18;
    ecx--;
    /* FPU: fcos  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    xmm1 = MEMF(esp); /* movss */
    /* FPU: fsin  */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm1 = xmm1 * xmm4; /* mulss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 4) = (float)fp_top(); fp_popp(); /* fstp */
    xmm7 = MEMF(esp + 4); /* movss */
    xmm7 = xmm7 * xmm4; /* mulss */
    xmm0 = xmm0 - xmm7; /* subss */
    xmm7 = MEMF(esp + 4); /* movss */
    xmm7 = xmm7 * xmm6; /* mulss */
    xmm1 = xmm1 - xmm7; /* subss */
    xmm7 = xmm1; /* movaps */
    xmm7 = xmm7 + MEMF(esp + 0x30); /* addss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 0x10); /* mulss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 + xmm3; /* addss */
    MEMF(eax + -24) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x3C); /* movss */
    xmm0 = xmm0 + MEMF(0x649690); /* addss */
    xmm1 = xmm1 + xmm2; /* addss */
    MEMF(eax + -32) = xmm1; /* movss */
    MEMF(eax + -28) = xmm7; /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    if ((ecx != 0)) goto loc_001161B0; /* jne: not equal / not zero */

loc_00116240: ;
    /* fstp st(0) */

loc_00116242: ;
    SET_LO8(eax, 1);
    esp = esp + 0x38;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00116250
 * Original: 0x00116250 - 0x001166CC (1148 bytes, 276 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00116250(void)
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

loc_00116250: ;
    esp = esp - 0x54;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x5C);
    fp_push(MEMF(esi + 0x3C)); /* fld float */
    xmm7 = MEMF(esi + 0x44); /* movss */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    xmm0 = MEMF(esi + 0x40); /* movss */
    xmm7 = xmm7 - MEMF(esi + 0x38); /* subss */
    xmm0 = xmm0 - MEMF(esi + 0x34); /* subss */
    MEMF(esp + 0x34) = (float)fp_top(); fp_popp(); /* fstp */
    SET_LO8(eax, 1);
    fp_push(MEMF(esp + 0x34)); /* fld float */
    MEM8(esp + 7) = LO8(eax);
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0x3C) = xmm7; /* movss */
    fp_push(MEMF(0x648D54)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_001162AE; /* ja: above (unsigned >) */

loc_00116296: ;
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648D54)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_001166C3; /* jbe: below or equal (unsigned <=) */

loc_001162AE: ;
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    xmm1 = MEMF(0x648D10); /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm2 = MEMF(esp + 0x34); /* movss */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    xmm0 = xmm0 * xmm1; /* mulss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm0 = xmm0 + MEMF(esi + 0x34); /* addss */
    xmm6 = MEMF(esi + 0x30); /* movss */
    xmm4 = xmm0; /* movaps */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    xmm0 = MEMF(esi + 0x34); /* movss */
    xmm0 = xmm0 - xmm4; /* subss */
    xmm2 = xmm2 * xmm1; /* mulss */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    xmm2 = xmm2 + MEMF(esi + 0x30); /* addss */
    MEMF(esp + 0x50) = xmm4; /* movss */
    xmm3 = xmm7; /* movaps */
    xmm3 = xmm3 * xmm1; /* mulss */
    xmm1 = MEMF(esi + 0x3C); /* movss */
    xmm3 = xmm3 + MEMF(esi + 0x38); /* addss */
    xmm1 = xmm1 - xmm2; /* subss */
    MEMF(esp + 0x40) = xmm1; /* movss */
    xmm1 = MEMF(esi + 0x40); /* movss */
    xmm1 = xmm1 - xmm4; /* subss */
    xmm4 = MEMF(esi + 0x44); /* movss */
    xmm4 = xmm4 - xmm3; /* subss */
    MEMF(esp + 0x48) = xmm4; /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x38); /* movss */
    xmm1 = xmm1 - MEMF(esp + 0x2C); /* subss */
    xmm0 = xmm0 - xmm3; /* subss */
    xmm6 = xmm6 - xmm2; /* subss */
    MEMF(esp + 0x4C) = xmm2; /* movss */
    MEMF(esp + 0x54) = xmm3; /* movss */
    /* FPU: fdivr dword ptr [0x648d14] */
    MEMF(esp + 0x5C) = (float)fp_top(); fp_popp(); /* fstp */
    xmm4 = MEMF(esp + 0x5C); /* movss */
    xmm5 = xmm4; /* movaps */
    xmm4 = xmm4 * MEMF(esp + 0x34); /* mulss */
    xmm5 = xmm5 * xmm7; /* mulss */
    xmm7 = xmm4; /* movaps */
    xmm4 = xmm5; /* movaps */
    xmm4 = xmm4 * xmm0; /* mulss */
    xmm0 = xmm7; /* movaps */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm4 = xmm4 + xmm0; /* addss */
    MEMF(esp + 0x18) = xmm7; /* movss */
    xmm7 = xmm7 * MEMF(esp + 0x40); /* mulss */
    xmm0 = xmm5; /* movaps */
    xmm0 = xmm0 * MEMF(esp + 0x48); /* mulss */
    xmm0 = xmm0 + xmm7; /* addss */
    xmm0 = xmm0 - xmm4; /* subss */
    xmm6 = xmm1; /* movaps */
    xmm1 = xmm1 * xmm6; /* mulss */
    xmm4 = xmm0; /* movaps */
    xmm4 = xmm4 * xmm0; /* mulss */
    xmm1 = xmm1 + xmm4; /* addss */
    MEMF(esp + 0x5C) = xmm1; /* movss */
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    xmm4 = MEMF(0x648D14); /* movss */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    xmm1 = xmm1 * MEMF(0x648E14); /* mulss */
    /* comiss xmm1, MEMF(esi + 0x178) - sets EFLAGS */
    MEMF(esp + 0x24) = xmm5; /* movss */
    MEMF(esp + 8) = xmm1; /* movss */
    MEMF(esp + 0x5C) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    xmm4 = xmm4 / MEMF(esp + 0x5C); /* divss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm7 = xmm4; /* movaps */
    xmm4 = xmm4 * xmm6; /* mulss */
    xmm7 = xmm7 * xmm0; /* mulss */
    xmm6 = xmm4; /* movaps */
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(esp + 0xC) = xmm7; /* movss */
    MEMF(esp + 0x10) = xmm6; /* movss */
    if ((xmm1 <= MEMF(esi + 0x178))) goto loc_0011642C; /* jbe: below or equal (unsigned <=) */

loc_00116415: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00115A40(); /* call 0x00115A40 */

loc_0011641B: ;
    SET_LO8(ecx, MEM8(esi + 0x2C));
    esp = esp + 4;
    SET_LO8(ecx, LO8(ecx) & 0xFD);
    MEM8(esi + 0x2C) = LO8(ecx);
    POP32(esp, esi);
    esp = esp + 0x54;
    esp += 4; return; /* ret */

loc_0011642C: ;
    fp_push(MEMF(esi + 0x178)); /* fld float */
    xmm0 = 0.0f; /* xorps self = zero */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    xmm4 = MEMF(0x7FA24C); /* movss */
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    fp_top() = sqrt(fp_top()); /* fsqrt */
    MEMF(esp + 0x64) = xmm0; /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    ecx = esi + 0x70;
    edi = 0xA;
    goto loc_00116461;

loc_0011645B: ;
    xmm6 = MEMF(esp + 0x18); /* movss */

loc_00116461: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    edx = ecx + -12;
    /* FPU: fsin  */
    eax = edx;
    ebp = MEM32(eax);
    MEM32(esp + 0x48) = ebp;
    ebp = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x50) = eax;
    (void)0; /* test MEM8(esi + 0x2C), 2 - flags set for next jcc */
    MEM32(esp + 0x4C) = ebp;
    MEMF(esp + 0x24) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x64)); /* fld float */
    /* FPU: fcos  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x30) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x64)); /* fld float */
    xmm1 = MEMF(esp + 0x30); /* movss */
    /* FPU: fsin  */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 * xmm7; /* mulss */
    xmm1 = xmm1 * xmm6; /* mulss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x34) = (float)fp_top(); fp_popp(); /* fstp */
    xmm7 = MEMF(esp + 0x34); /* movss */
    xmm7 = xmm7 * xmm6; /* mulss */
    xmm6 = MEMF(esp + 0x34); /* movss */
    xmm0 = xmm0 - xmm7; /* subss */
    xmm7 = MEMF(esp + 0x14); /* movss */
    xmm6 = xmm6 * xmm7; /* mulss */
    xmm1 = xmm1 - xmm6; /* subss */
    xmm6 = xmm1; /* movaps */
    xmm6 = xmm6 + MEMF(esp + 0x58); /* addss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 0x20); /* mulss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm1 = xmm1 + xmm2; /* addss */
    xmm0 = xmm0 + xmm3; /* addss */
    MEMF(esp + 0x3C) = xmm1; /* movss */
    MEMF(esp + 0x40) = xmm6; /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    if (TEST_Z(MEM8(esi + 0x2C), 2)) goto loc_0011652C; /* je: equal / zero */

loc_00116507: ;
    eax = MEM32(esp + 0x3C);
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(edx) = eax;
    eax = MEM32(esp + 0x40);
    MEM32(edx + 4) = eax;
    eax = MEM32(esp + 0x44);
    MEM32(edx + 8) = eax;
    MEMF(ecx) = xmm0; /* movss */
    MEMF(ecx + 8) = xmm0; /* movss */
    goto loc_00116684;

loc_0011652C: ;
    eax = MEM32(0x762E40);
    if (TEST_Z(eax, eax)) goto loc_00116567; /* je: equal / zero */

loc_00116535: ;
    eax = MEM32(esp + 0x3C);
    MEM32(edx) = eax;
    eax = MEM32(esp + 0x40);
    MEM32(edx + 4) = eax;
    eax = MEM32(esp + 0x44);
    MEM32(edx + 8) = eax;
    eax = MEM32(0x595D14);
    edx = ecx;
    MEM32(edx) = eax;
    eax = MEM32(0x595D18);
    MEM32(edx + 4) = eax;
    eax = MEM32(0x595D1C);
    MEM32(edx + 8) = eax;
    goto loc_00116689;

loc_00116567: ;
    xmm0 = MEMF(esp + 0x48); /* movss */
    xmm3 = MEMF(esp + 0x24); /* movss */
    xmm2 = MEMF(esp + 0x50); /* movss */
    xmm2 = xmm2 - MEMF(esp + 0x44); /* subss */
    xmm0 = xmm0 - xmm1; /* subss */
    xmm1 = MEMF(esp + 0x4C); /* movss */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm0 = xmm0 * MEMF(esi + 0x5C); /* mulss */
    xmm2 = xmm2 * xmm3; /* mulss */
    xmm2 = xmm2 * MEMF(esi + 0x5C); /* mulss */
    xmm1 = xmm1 - xmm6; /* subss */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm1 = xmm1 * MEMF(esi + 0x5C); /* mulss */
    xmm7 = xmm2; /* movaps */
    xmm2 = xmm2 + MEMF(esp + 0x44); /* addss */
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 + MEMF(esp + 0x3C); /* addss */
    MEMF(edx) = xmm5; /* movss */
    xmm6 = xmm1; /* movaps */
    xmm6 = xmm6 + MEMF(esp + 0x40); /* addss */
    MEMF(ecx + -4) = xmm2; /* movss */
    MEMF(ecx + -8) = xmm6; /* movss */
    xmm3 = MEMF(esi + 0x58); /* movss */
    xmm3 = xmm3 * xmm0; /* mulss */
    xmm0 = MEMF(esi + 0x58); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm1 = MEMF(esi + 0x58); /* movss */
    xmm1 = xmm1 * xmm7; /* mulss */
    xmm3 = xmm3 * xmm4; /* mulss */
    MEMF(esp + 0x28) = xmm3; /* movss */
    xmm7 = xmm3; /* movaps */
    xmm3 = MEMF(0x648D10); /* movss */
    xmm7 = xmm7 * xmm3; /* mulss */
    xmm7 = xmm7 + MEMF(ecx); /* addss */
    xmm7 = xmm7 * xmm4; /* mulss */
    xmm7 = xmm7 + xmm5; /* addss */
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm5 = xmm0; /* movaps */
    xmm0 = xmm0 + MEMF(ecx + 4); /* addss */
    xmm5 = xmm5 * xmm3; /* mulss */
    xmm5 = xmm5 + MEMF(ecx + 4); /* addss */
    xmm5 = xmm5 * xmm4; /* mulss */
    xmm5 = xmm5 + xmm6; /* addss */
    MEMF(ecx + -8) = xmm5; /* movss */
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm5 = xmm1; /* movaps */
    xmm1 = xmm1 + MEMF(ecx + 8); /* addss */
    xmm5 = xmm5 * xmm3; /* mulss */
    xmm5 = xmm5 + MEMF(ecx + 8); /* addss */
    xmm3 = MEMF(esp + 0x5C); /* movss */
    xmm5 = xmm5 * xmm4; /* mulss */
    xmm5 = xmm5 + xmm2; /* addss */
    xmm2 = MEMF(esp + 0x28); /* movss */
    xmm2 = xmm2 + MEMF(ecx); /* addss */
    MEMF(edx) = xmm7; /* movss */
    xmm7 = MEMF(esp + 0x14); /* movss */
    MEMF(ecx + -4) = xmm5; /* movss */
    xmm5 = MEMF(esp + 0x2C); /* movss */
    MEMF(ecx) = xmm2; /* movss */
    xmm2 = MEMF(esp + 0x54); /* movss */
    MEMF(ecx + 8) = xmm1; /* movss */

loc_00116684: ;
    MEMF(ecx + 4) = xmm0; /* movss */

loc_00116689: ;
    xmm1 = MEMF(esp + 0x64); /* movss */
    xmm0 = MEMF(0x649690); /* movss */
    xmm1 = xmm1 + xmm0; /* addss */
    MEMF(esp + 0x64) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x10); /* movss */
    ecx = ecx + 0x18;
    edi--;
    xmm1 = xmm1 + xmm0; /* addss */
    MEMF(esp + 0x10) = xmm1; /* movss */
    if ((edi != 0)) goto loc_0011645B; /* jne: not equal / not zero */

loc_001166BB: ;
    SET_LO8(eax, MEM8(esp + 0xF));
    /* fstp st(0) */
    POP32(esp, edi);
    POP32(esp, ebp);

loc_001166C3: ;
    MEM8(esi + 0x2C) = MEM8(esi + 0x2C) & 0xFD;
    POP32(esp, esi);
    esp = esp + 0x54;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_001166D0
 * Original: 0x001166D0 - 0x0011684F (383 bytes, 98 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001166D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_001166D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x48;
    PUSH32(esp, ebx);
    ebx = MEM32(edi + 0x14);
    PUSH32(esp, esi);
    esi = MEM32(edi);
    edx = MEM32(esi + 0x3C8);
    if (TEST_Z(edx, edx)) { sub_0011684F(); return; } /* je: equal / zero */

loc_001166EE: ;
    edx = MEM32(ebx + 0x3C8);
    if (TEST_Z(edx, edx)) { sub_0011684F(); return; } /* je: equal / zero */

loc_001166FC: ;
    edx = MEM32(esi + 0x64);
    if (TEST_Z(edx, edx)) goto loc_00116847; /* je: equal / zero */

loc_00116707: ;
    SET_LO8(edx, MEM8(esi + 0x10B));
    if (CMP_NE(LO8(edx), MEM8(edi + 4))) goto loc_00116847; /* jne: not equal / not zero */

loc_00116716: ;
    edx = MEM32(ebx + 0x64);
    if (TEST_Z(edx, edx)) goto loc_00116847; /* je: equal / zero */

loc_00116721: ;
    SET_LO8(edx, MEM8(ebx + 0x10B));
    if (CMP_NE(LO8(edx), MEM8(edi + 0x18))) goto loc_00116847; /* jne: not equal / not zero */

loc_00116730: ;
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    SET_LO8(edx, (TEST_Z(LO8(ecx), LO8(ecx))) ? 1 : 0); /* sete */
    edx = edx * 4 + 4;
    SET_LO8(edx, ~LO8(edx));
    MEM8(eax + 0x2C) = MEM8(eax + 0x2C) & LO8(edx);
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    eax = esp + 0x10;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_001167BC; /* je: equal / zero */

loc_00116749: ;
    edx = ZX8(MEM8(edi + 5));
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002F7870(); /* call 0x002F7870 */

loc_00116753: ;
    eax = MEM32(0x7FA1F8);
    esp = esp + 4;
    if (CMP_NE(eax, 0x14)) goto loc_001167B7; /* jne: not equal / not zero */

loc_00116760: ;
    if (CMP_EQ(MEM8(0x76F0E0), 1)) goto loc_001167B7; /* je: equal / zero */

loc_00116769: ;
    xmm0 = MEMF(esi + 0x84); /* movss */
    xmm0 = xmm0 - MEMF(esi + 0x78); /* subss */
    xmm0 = xmm0 + MEMF(esp + 0x40); /* addss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x88); /* movss */
    xmm0 = xmm0 - MEMF(esi + 0x7C); /* subss */
    xmm0 = xmm0 + MEMF(esp + 0x44); /* addss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x8C); /* movss */
    xmm0 = xmm0 - MEMF(esi + 0x80); /* subss */
    xmm0 = xmm0 + MEMF(esp + 0x48); /* addss */
    MEMF(esp + 0x48) = xmm0; /* movss */

loc_001167B7: ;
    eax = edi + 8;
    goto loc_0011682D;

loc_001167BC: ;
    edx = ZX8(MEM8(edi + 0x19));
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_002F7870(); /* call 0x002F7870 */

loc_001167C6: ;
    eax = MEM32(0x7FA1F8);
    esp = esp + 4;
    if (CMP_NE(eax, 0x14)) goto loc_0011682A; /* jne: not equal / not zero */

loc_001167D3: ;
    if (CMP_EQ(MEM8(0x76F0E0), 1)) goto loc_0011682A; /* je: equal / zero */

loc_001167DC: ;
    xmm0 = MEMF(ebx + 0x84); /* movss */
    xmm0 = xmm0 - MEMF(ebx + 0x78); /* subss */
    xmm0 = xmm0 + MEMF(esp + 0x40); /* addss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0x88); /* movss */
    xmm0 = xmm0 - MEMF(ebx + 0x7C); /* subss */
    xmm0 = xmm0 + MEMF(esp + 0x44); /* addss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0x8C); /* movss */
    xmm0 = xmm0 - MEMF(ebx + 0x80); /* subss */
    xmm0 = xmm0 + MEMF(esp + 0x48); /* addss */
    MEMF(esp + 0x48) = xmm0; /* movss */

loc_0011682A: ;
    eax = edi + 0x1C;

loc_0011682D: ;
    edx = MEM32(ebp + 8);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001101F0(); /* call 0x001101F0 */

loc_0011683C: ;
    esp = esp + 0xC;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00116847: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00116990
 * Original: 0x00116990 - 0x00116AD2 (322 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00116990(void)
{
    float xmm0, xmm1;

loc_00116990: ;
    eax = MEM32(esp + 4);
    xmm0 = MEMF(0x6491DC); /* movss */
    xmm1 = MEMF(0x6491D8); /* movss */
    MEMF(eax + 0x64) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(eax + 0x7C) = xmm1; /* movss */
    xmm1 = MEMF(0x6491D4); /* movss */
    MEMF(eax + 0x94) = xmm1; /* movss */
    xmm1 = MEMF(0x6491D0); /* movss */
    MEMF(eax + 0xAC) = xmm1; /* movss */
    xmm1 = MEMF(0x6491CC); /* movss */
    MEMF(eax + 0xC4) = xmm1; /* movss */
    xmm1 = MEMF(0x6491C8); /* movss */
    MEMF(eax + 0x68) = xmm0; /* movss */
    MEMF(eax + 0x6C) = xmm0; /* movss */
    MEMF(eax + 0x80) = xmm0; /* movss */
    MEMF(eax + 0x84) = xmm0; /* movss */
    MEMF(eax + 0xDC) = xmm1; /* movss */
    xmm1 = MEMF(0x6491C4); /* movss */
    MEMF(eax + 0x98) = xmm0; /* movss */
    MEMF(eax + 0x9C) = xmm0; /* movss */
    MEMF(eax + 0xB0) = xmm0; /* movss */
    MEMF(eax + 0xB4) = xmm0; /* movss */
    MEMF(eax + 0xF4) = xmm1; /* movss */
    xmm1 = MEMF(0x6491C0); /* movss */
    MEMF(eax + 0xC8) = xmm0; /* movss */
    MEMF(eax + 0xCC) = xmm0; /* movss */
    MEMF(eax + 0xE0) = xmm0; /* movss */
    MEMF(eax + 0xE4) = xmm0; /* movss */
    MEMF(eax + 0x10C) = xmm1; /* movss */
    xmm1 = MEMF(0x6491BC); /* movss */
    MEMF(eax + 0xF8) = xmm0; /* movss */
    MEMF(eax + 0xFC) = xmm0; /* movss */
    MEMF(eax + 0x110) = xmm0; /* movss */
    MEMF(eax + 0x114) = xmm0; /* movss */
    MEMF(eax + 0x124) = xmm1; /* movss */
    xmm1 = MEMF(0x6491B8); /* movss */
    MEMF(eax + 0x128) = xmm0; /* movss */
    MEMF(eax + 0x12C) = xmm0; /* movss */
    MEMF(eax + 0x13C) = xmm1; /* movss */
    MEMF(eax + 0x140) = xmm0; /* movss */
    MEMF(eax + 0x144) = xmm0; /* movss */
    MEM8(eax + 0x2C) = MEM8(eax + 0x2C) & 0xFD;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_00116AE0
 * Original: 0x00116AE0 - 0x00116B33 (83 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00116AE0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00116AE0: ;
    eax = MEM32(esi + 0x168);
    if (TEST_Z(eax, eax)) goto loc_00116AFA; /* je: equal / zero */

loc_00116AEA: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053B870(); /* call 0x0053B870 */

loc_00116AF0: ;
    MEM32(esi + 0x168) = 0;

loc_00116AFA: ;
    eax = MEM32(esi + 0x160);
    if (TEST_Z(eax, eax)) goto loc_00116B14; /* je: equal / zero */

loc_00116B04: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053B870(); /* call 0x0053B870 */

loc_00116B0A: ;
    MEM32(esi + 0x160) = 0;

loc_00116B14: ;
    eax = esi + 0x180;
    PUSH32(esp, 0); sub_001126F0(); /* call 0x001126F0 */

loc_00116B1F: ;
    eax = ZX8(MEM8(esi + 0x60));
    eax = MEM32(eax * 4 + 0x5961D4);
    if (TEST_Z(eax, eax)) goto loc_00116B32; /* je: equal / zero */

loc_00116B2E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00116B31: ;
    POP32(esp, ecx);

loc_00116B32: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00116B40
 * Original: 0x00116B40 - 0x00116B89 (73 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00116B40(void)
{
    int _flags = 0; /* fallback flag var */

loc_00116B40: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x168);
    if (TEST_Z(eax, eax)) goto loc_00116B5F; /* je: equal / zero */

loc_00116B4F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053B870(); /* call 0x0053B870 */

loc_00116B55: ;
    MEM32(esi + 0x168) = 0;

loc_00116B5F: ;
    eax = MEM32(esi + 0x160);
    if (TEST_Z(eax, eax)) goto loc_00116B79; /* je: equal / zero */

loc_00116B69: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053B870(); /* call 0x0053B870 */

loc_00116B6F: ;
    MEM32(esi + 0x160) = 0;

loc_00116B79: ;
    PUSH32(esp, 0); sub_00116AE0(); /* call 0x00116AE0 */

loc_00116B7E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_000DAE40(); /* call 0x000DAE40 */

loc_00116B84: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00116B90
 * Original: 0x00116B90 - 0x00116BA5 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00116B90(void)
{

loc_00116B90: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0); sub_00116AE0(); /* call 0x00116AE0 */

loc_00116B9A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_000DAE40(); /* call 0x000DAE40 */

loc_00116BA0: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00116BB0
 * Original: 0x00116BB0 - 0x00116CE6 (310 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00116BB0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00116BB0: ;
    esp = esp - 0x24;
    xmm0 = MEMF(0x648F8C); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    MEMF(esp + 0x24) = xmm0; /* movss */

loc_00116BC5: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00116BCA: ;
    xmm0 = xmm0 * MEMF(0x648D30); /* mulss */
    MEMF(esp + 8) = xmm0; /* movss */
    fp_push(MEMF(esp + 8)); /* fld float */
    /* FPU: fsincos  */
    MEMF(esp + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00116BEB: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    xmm0 = xmm0 * MEMF(0x64925C); /* mulss */
    xmm0 = xmm0 + MEMF(0x648F08); /* addss */
    xmm1 = MEMF(esp + 0x14); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x50);
    PUSH32(esp, 0);
    PUSH32(esp, 0xAA);
    PUSH32(esp, 0xAB);
    PUSH32(esp, 0xAB);
    PUSH32(esp, 0x3E4CCCCD);
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * xmm0; /* mulss */
    PUSH32(esp, 0x40000000);
    MEMF(esp + 0x54) = xmm2; /* movss */
    xmm2 = MEMF(esp + 0x44); /* movss */
    PUSH32(esp, 0);
    xmm3 = xmm2; /* movaps */
    PUSH32(esp, 0x41200000);
    xmm3 = xmm3 * xmm0; /* mulss */
    xmm0 = MEMF(0x648EA4); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(esi + 0x78); /* addss */
    PUSH32(esp, 0x3DCCCCCD);
    eax = esp + 0x54;
    PUSH32(esp, eax);
    MEMF(esp + 0x58) = xmm1; /* movss */
    xmm1 = MEMF(esi + 0x7C); /* movss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm2 = xmm2 + MEMF(esi + 0x80); /* addss */
    PUSH32(esp, 0);
    edi = esp + 0x68;
    MEMF(esp + 0x70) = xmm3; /* movss */
    MEMF(esp + 0x60) = xmm1; /* movss */
    MEMF(esp + 0x64) = xmm2; /* movss */
    PUSH32(esp, 0); sub_001AF030(); /* call 0x001AF030 */

loc_00116CA3: ;
    esp = esp + 0x48;
    if (TEST_Z(eax, eax)) goto loc_00116CCA; /* je: equal / zero */

loc_00116CAA: ;
    xmm0 = MEMF(0x649118); /* movss */
    MEMF(eax + 0xFC) = xmm0; /* movss */
    xmm0 = MEMF(0x648CF0); /* movss */
    MEMF(eax + 0xF8) = xmm0; /* movss */

loc_00116CCA: ;
    xmm1 = MEMF(0x648E5C); /* movss */
    ebx++;
    xmm0 = (float)(int32_t)ebx; /* cvtsi2ss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 > xmm0)) goto loc_00116BC5; /* ja: above (unsigned >) */

loc_00116CE0: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00116CF0
 * Original: 0x00116CF0 - 0x00116D16 (38 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00116CF0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00116CF0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x144);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x38);
    eax = eax << 5;
    if (CMP_LE(eax, 0xFF)) goto loc_00116D0D; /* jle: less or equal (signed <=) */

loc_00116D08: ;
    eax = 0xFF;

loc_00116D0D: ;
    MEM8(ecx + 0x21) = LO8(eax);
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00116D20
 * Original: 0x00116D20 - 0x00117241 (1313 bytes, 335 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00116D20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _fpu_cmp = 0; /* FPU compare result: -1/0/1 */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00116D20: ;
    esp = esp - 0xC0;
    xmm0 = MEMF(0x648D14); /* movss */
    SET_LO8(eax, MEM8(0x773775));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = xmm0 / MEMF(0x7FA21C); /* divss */
    xmm1 = MEMF(0x648F38); /* movss */
    xmm1 = xmm1 / xmm0; /* divss */
    MEMF(esp + 0x18) = xmm1; /* movss */
    MEM32(esp + 0xC) = 0;
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_001171E9; /* jbe: below or equal (unsigned <=) */

loc_00116D5D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0x773780;
    goto loc_00116D70;

    /* nop */
    /* nop */

loc_00116D70: ;
    eax = MEM32(esp + 0x1C);
    eax = ZX8(MEM8(eax + 0x773778));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    xmm6 = MEMF(eax + 0x6B47D8); /* movss */
    xmm0 = MEMF(eax + 0x6B47DC); /* movss */
    xmm0 = xmm0 * MEMF(0x648E40); /* mulss */
    esi = 0; /* xor self */
    xmm5 = xmm6; /* movaps */
    xmm5 = xmm5 * MEMF(0x648E64); /* mulss */
    MEM32(esp + 0x20) = esi;
    MEM32(esp + 0x24) = esi;
    MEMF(esp + 0x30) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00116DB6: ;
    xmm2 = MEMF(0x648D10); /* movss */
    xmm1 = xmm6; /* movaps */
    xmm1 = xmm1 * MEMF(0x64A60C); /* mulss */
    xmm1 = xmm1 - xmm5; /* subss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + xmm5; /* addss */
    xmm0 = xmm0 + MEMF(0x875638); /* addss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm1 = xmm6; /* movaps */
    xmm1 = xmm1 * xmm2; /* mulss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    xmm3 = xmm0; /* movaps */
    if ((xmm0 > xmm1)) goto loc_00116DF3; /* ja: above (unsigned >) */

loc_00116DF0: ;
    xmm3 = xmm1; /* movaps */

loc_00116DF3: ;
    xmm2 = xmm6; /* movaps */
    xmm2 = xmm2 * MEMF(0x648E1C); /* mulss */
    /* comiss xmm2, xmm3 - sets EFLAGS */
    if ((xmm2 <= xmm3)) goto loc_00116E0D; /* jbe: below or equal (unsigned <=) */

loc_00116E03: ;
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 > xmm1)) goto loc_00116E10; /* ja: above (unsigned >) */

loc_00116E08: ;
    xmm0 = xmm1; /* movaps */
    goto loc_00116E10;

loc_00116E0D: ;
    xmm0 = xmm2; /* movaps */

loc_00116E10: ;
    MEMF(0x875638) = xmm0; /* movss */
    xmm0 = xmm0 + xmm6; /* addss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    ecx = esp + 0x38;
    MEMF(esp + 0x34) = xmm0; /* movss */
    MEM32(esp + 0x18) = 1;
    MEM32(esp + 0x10) = ecx;
    goto loc_00116E40;

    /* nop */

loc_00116E40: ;
    edx = MEM32(esp + 0x10);
    ebx = MEM32(0x84A5F8);
    ebp = 0; /* xor self */
    MEMF(edx) = xmm0; /* movss */
    ebx = ebx + 0xA4;

loc_00116E56: ;
    eax = MEM32(ebx + -64);
    if (TEST_Z(eax, eax)) goto loc_00116EAB; /* je: equal / zero */

loc_00116E5D: ;
    esi = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x18);
    ecx = ebx + -164;
    PUSH32(esp, 0); sub_00117780(); /* call 0x00117780 */

loc_00116E70: ;
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    if (CMP_NE(MEM32(ebx), 0x4B)) goto loc_00116E81; /* jne: not equal / not zero */

loc_00116E79: ;
    xmm0 = xmm0 * MEMF(0x648CE0); /* mulss */

loc_00116E81: ;
    eax = MEM32(esp + 0x10);
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 + MEMF(eax); /* addss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(eax) = xmm1; /* movss */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_00116EA7; /* jnp: not parity */

loc_00116EA0: ;
    eax = ebp + 1;
    MEM32(esp + 0x20) = eax;

loc_00116EA7: ;
    esi = MEM32(esp + 0x20);

loc_00116EAB: ;
    ebp++;
    ebx = ebx + 0x6D0;
    if (CMP_L(ebp, 4)) goto loc_00116E56; /* jl: less (signed <) */

loc_00116EB7: ;
    eax = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x10);
    eax++;
    edx = edx + 4;
    (void)0; /* cmp eax, 0x27 - flags set for next jcc */
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x10) = edx;
    if (CMP_L(eax, 0x27)) goto loc_00116E40; /* jl: less (signed <) */

loc_00116ED4: ;
    MEM32(esp + 0x18) = 3;
    /* nop */

loc_00116EE0: ;
    xmm2 = MEMF(esp + 0x30); /* movss */
    xmm1 = MEMF(esp + 0x2C); /* movss */
    eax = 0xC;
    edx = esp + 0x3C;
    goto loc_00116F00;

    /* nop */
    edi = edi;

loc_00116F00: ;
    ecx = MEM32(edi);
    xmm3 = MEMF(ecx + eax + 0x14); /* movss */
    xmm3 = xmm3 - MEMF(ecx + eax + 8); /* subss */
    xmm4 = MEMF(ecx + eax + -4); /* movss */
    xmm4 = xmm4 - MEMF(ecx + eax + 8); /* subss */
    ecx = ecx + eax;
    xmm3 = xmm3 + xmm4; /* addss */
    xmm3 = xmm3 + xmm1; /* addss */
    MEMF(ecx) = xmm3; /* movss */
    ecx = MEM32(edi);
    xmm3 = MEMF(edx + -4); /* movss */
    xmm3 = xmm3 + MEMF(ecx + eax); /* addss */
    MEMF(ecx + eax) = xmm3; /* movss */
    ecx = ecx + eax;
    ecx = MEM32(edi);
    xmm3 = MEMF(ecx + eax); /* movss */
    xmm3 = xmm3 + MEMF(ecx + eax + 4); /* addss */
    ecx = ecx + eax;
    MEMF(ecx + 4) = xmm3; /* movss */
    ecx = MEM32(edi);
    xmm3 = MEMF(eax + ecx + 4); /* movss */
    ecx = eax + ecx + 4;
    xmm3 = xmm3 * xmm2; /* mulss */
    MEMF(ecx) = xmm3; /* movss */
    ecx = MEM32(edi);
    fp_push(MEMF(eax + ecx + 4)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648D14)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_00116F7D; /* jbe: below or equal (unsigned <=) */

loc_00116F77: ;
    MEMF(eax + ecx + 4) = xmm0; /* movss */

loc_00116F7D: ;
    ecx = MEM32(edi);
    xmm3 = MEMF(ecx + eax + 0x20); /* movss */
    xmm3 = xmm3 - MEMF(ecx + eax + 0x14); /* subss */
    xmm4 = MEMF(ecx + eax + 8); /* movss */
    xmm4 = xmm4 - MEMF(ecx + eax + 0x14); /* subss */
    ecx = ecx + eax;
    xmm3 = xmm3 + xmm4; /* addss */
    xmm3 = xmm3 + xmm1; /* addss */
    MEMF(ecx + 0xC) = xmm3; /* movss */
    ecx = MEM32(edi);
    xmm3 = MEMF(eax + ecx + 0xC); /* movss */
    xmm3 = xmm3 + MEMF(edx); /* addss */
    MEMF(eax + ecx + 0xC) = xmm3; /* movss */
    ecx = eax + ecx + 0xC;
    ecx = MEM32(edi);
    xmm3 = MEMF(ecx + eax + 0xC); /* movss */
    xmm3 = xmm3 + MEMF(ecx + eax + 0x10); /* addss */
    ecx = ecx + eax;
    MEMF(ecx + 0x10) = xmm3; /* movss */
    ecx = MEM32(edi);
    xmm3 = MEMF(eax + ecx + 0x10); /* movss */
    ecx = eax + ecx + 0x10;
    xmm3 = xmm3 * xmm2; /* mulss */
    MEMF(ecx) = xmm3; /* movss */
    ecx = MEM32(edi);
    fp_push(MEMF(eax + ecx + 0x10)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648D14)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_00116FFF; /* jbe: below or equal (unsigned <=) */

loc_00116FF9: ;
    MEMF(eax + ecx + 0x10) = xmm0; /* movss */

loc_00116FFF: ;
    eax = eax + 0x18;
    edx = edx + 8;
    if (CMP_L(eax, 0x1D4)) goto loc_00116F00; /* jl: less (signed <) */

loc_00117010: ;
    eax = 0xC;

loc_00117015: ;
    edx = MEM32(edi);
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fst */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x59D944)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_00117050; /* jbe: below or equal (unsigned <=) */

loc_00117033: ;
    /* comiss xmm0, MEMF(esp + 0x10) - sets EFLAGS */
    edx = 0xFFFFFC18u;
    if ((xmm0 > MEMF(esp + 0x10))) goto loc_00117044; /* ja: above (unsigned >) */

loc_0011703F: ;
    edx = 0x3E8;

loc_00117044: ;
    ecx = MEM32(edi);
    ecx = eax + ecx + 8;
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    goto loc_0011705C;

loc_00117050: ;
    edx = MEM32(edi);
    xmm1 = MEMF(esp + 0x10); /* movss */
    ecx = eax + edx + 8;

loc_0011705C: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    xmm1 = xmm1 + MEMF(ecx); /* addss */
    MEMF(ecx) = xmm1; /* movss */
    if (TEST_Z(esi, esi)) goto loc_00117081; /* je: equal / zero */

loc_00117068: ;
    ecx = MEM32(edi);
    xmm1 = MEMF(0x649388); /* movss */
    /* comiss xmm1, MEMF(eax + ecx + 4) - sets EFLAGS */
    if ((xmm1 <= MEMF(eax + ecx + 4))) goto loc_00117081; /* jbe: below or equal (unsigned <=) */

loc_00117079: ;
    MEM32(esp + 0x24) = 1;

loc_00117081: ;
    edx = MEM32(edi);
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fst */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x59D944)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_001170C0; /* jbe: below or equal (unsigned <=) */

loc_0011709F: ;
    /* comiss xmm0, MEMF(esp + 0x10) - sets EFLAGS */
    edx = 0xFFFFFC18u;
    if ((xmm0 > MEMF(esp + 0x10))) goto loc_001170B0; /* ja: above (unsigned >) */

loc_001170AB: ;
    edx = 0x3E8;

loc_001170B0: ;
    ecx = MEM32(edi);
    ecx = eax + ecx + 0x14;
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1 = xmm1 + MEMF(ecx); /* addss */
    goto loc_001170D2;

loc_001170C0: ;
    edx = MEM32(edi);
    xmm1 = MEMF(eax + edx + 0x14); /* movss */
    xmm1 = xmm1 + MEMF(esp + 0x10); /* addss */
    ecx = eax + edx + 0x14;

loc_001170D2: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEMF(ecx) = xmm1; /* movss */
    if (TEST_Z(esi, esi)) goto loc_001170F3; /* je: equal / zero */

loc_001170DA: ;
    ecx = MEM32(edi);
    xmm1 = MEMF(0x649388); /* movss */
    /* comiss xmm1, MEMF(eax + ecx + 0x10) - sets EFLAGS */
    if ((xmm1 <= MEMF(eax + ecx + 0x10))) goto loc_001170F3; /* jbe: below or equal (unsigned <=) */

loc_001170EB: ;
    MEM32(esp + 0x24) = 1;

loc_001170F3: ;
    eax = eax + 0x18;
    if (CMP_L(eax, 0x1D4)) goto loc_00117015; /* jl: less (signed <) */

loc_00117101: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    ebp = MEM32(esp + 0x1C);
    if (TEST_NZ(esi, esi)) goto loc_0011711A; /* jne: not equal / not zero */

loc_00117109: ;
    edx = ZX8(MEM8(ebp + 0x773778));
    edx = (uint32_t)((int32_t)edx * (int32_t)0x1C);
    MEM8(edx + 0x6B47EF) = 0;

loc_0011711A: ;
    eax = MEM32(esp + 0x24);
    (void)0; /* test eax, eax - flags set for next jcc */
    eax = ZX8(MEM8(ebp + 0x773778));
    if (TEST_Z(eax, eax)) { sub_00117241(); return; } /* je: equal / zero */

loc_0011712D: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    SET_LO8(ecx, MEM8(eax + 0x6B47EF));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_001171C0; /* jne: not equal / not zero */

loc_0011713E: ;
    SET_LO8(ecx, MEM8(ebp + 0x773778));
    MEM8(esp + 0x17) = LO8(ecx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0011714D: ;
    fp_push(MEMF(0x7F9F5C)); /* fld float */
    ebx = eax;
    SET_LO8(ebx, LO8(ebx) & 0x3F);
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0011715D: ;
    SET_LO8(edx, 3);
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)LO8(edx);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    SET_LO8(ebx, LO8(ebx) + LO8(eax));
    SET_LO8(eax, MEM8(esp + 0x17));
    ecx = ZX8(LO8(eax));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x1C);
    (void)0; /* cmp LO8(eax), 2 - flags set for next jcc */
    MEM8(ecx + 0x6B47EF) = LO8(ebx);
    if (CMP_EQ(LO8(eax), 2)) goto loc_001171F0; /* je: equal / zero */

loc_00117177: ;
    if (CMP_EQ(MEM8(ebp + 0x773778), LO8(edx))) goto loc_001171F0; /* je: equal / zero */

loc_0011717F: ;
    eax = MEM32(0x84A5F8);
    edx = esi;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x6D0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = edx + eax + -1624;
    edx = MEM32(0x847024);
    eax = MEM32(edx + 0x40);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    edx = edx | 0xFFFFFFFFu;
    eax = eax | 0xFFFFFFFFu;
    ecx = 0xF;

loc_001171B8: ;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_001171BD: ;
    xmm0 = 0.0f; /* xorps self = zero */

loc_001171C0: ;
    MEM32(esp + 0x18) = MEM32(esp + 0x18) - 1;
    if ((MEM32(esp + 0x18) != 0)) goto loc_00116EE0; /* jne: not equal / not zero */

loc_001171CA: ;
    eax = MEM32(esp + 0x1C);
    edx = ZX8(MEM8(0x773775));
    eax++;
    edi = edi + 4;
    (void)0; /* cmp eax, edx - flags set for next jcc */
    MEM32(esp + 0x1C) = eax;
    if (CMP_L(eax, edx)) goto loc_00116D70; /* jl: less (signed <) */

loc_001171E5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_001171E9: ;
    esp = esp + 0xC0;
    esp += 4; return; /* ret */

loc_001171F0: ;
    ecx = MEM32(0x847024);
    ebx = MEM32(ecx + 0x40);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001171FE: ;
    eax = eax & 8;
    eax = eax + 0x507;
    if ((eax == 0)) goto loc_001171BD; /* je: equal / zero */

loc_00117208: ;
    ecx = MEM32(0x84A5F8);
    edx = esi;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x6D0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    edx = edx + ecx + -1624;
    PUSH32(esp, edx);
    PUSH32(esp, 0xBF800000u);
    ecx = eax;
    PUSH32(esp, 0);
    ecx = ecx & 0x7FFF;
    edx = edx | 0xFFFFFFFFu;
    PUSH32(esp, ebx);
    eax = eax | 0xFFFFFFFFu;
    goto loc_001171B8;

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00117280
 * Original: 0x00117280 - 0x00117487 (519 bytes, 130 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00117280(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm4, xmm5;

loc_00117280: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x64;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    ebx = MEM32(esi + 0x8C);
    ecx = ZX8(MEM8(ebx + 0x773778));
    eax = (uint32_t)(int32_t)SMEM8(0x7FA230);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x1C);
    edx = (uint32_t)(int32_t)SMEM16(ecx + 0x6B47E8);
    xmm5 = MEMF(0x648D14); /* movss */
    PUSH32(esp, edi);
    edi = MEM32(esi + eax * 4 + 0x70);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    edx = (uint32_t)(-(int32_t)edx);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x648E18); /* mulss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    eax = esp + 0x4C;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E2E60(); /* call 0x003E2E60 */

loc_001172EB: ;
    eax = ZX8(MEM8(ebx + 0x773778));
    edx = MEM32(0x8471B8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x6B47EA);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x150);
    esp = esp + 0x24;
    (void)0; /* cmp MEM16(ecx + edx + 0x1A), 0 - flags set for next jcc */
    MEM32(esp + 0x14) = 0;
    if (CMP_BE(MEM16(ecx + edx + 0x1A), 0)) goto loc_00117480; /* jbe: below or equal (unsigned <=) */

loc_0011731F: ;
    xmm4 = 0.0f; /* xorps self = zero */
    xmm5 = MEMF(0x649060); /* movss */
    MEM32(esp + 0x10) = 0;
    edi = edi + 8;
    goto loc_00117340;

    /* nop */
    edi = edi;

loc_00117340: ;
    ecx = MEM32(esi + 0x78);
    edx = MEM32(esp + 0x10);
    ecx = (int32_t)MEMF(edx + ecx + 8); /* cvttss2si */
    ecx = ecx + ecx * 4;
    ecx = ecx << 3;
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(eax + 0x6B47E0); /* mulss */
    /* comiss xmm4, xmm0 - sets EFLAGS */
    if ((xmm4 <= xmm0)) goto loc_00117369; /* jbe: below or equal (unsigned <=) */

loc_00117364: ;
    xmm0 = xmm4; /* movaps */
    goto loc_00117371;

loc_00117369: ;
    /* comiss xmm0, xmm5 - sets EFLAGS */
    if ((xmm0 <= xmm5)) goto loc_00117371; /* jbe: below or equal (unsigned <=) */

loc_0011736E: ;
    xmm0 = xmm5; /* movaps */

loc_00117371: ;
    eax = (int32_t)xmm0; /* cvttss2si */
    edx = eax + 1;
    if (CMP_LE(edx, 0x27)) goto loc_00117382; /* jle: less or equal (signed <=) */

loc_0011737D: ;
    edx = 0x27;

loc_00117382: ;
    ecx = MEM32(ebx * 4 + 0x773780);
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 - xmm1; /* subss */
    xmm1 = MEMF(0x648D14); /* movss */
    xmm2 = xmm0; /* movaps */
    edx = edx + edx * 2;
    xmm0 = MEMF(ecx + edx * 4 + 8); /* movss */
    eax = eax + eax * 2;
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm1 = xmm1 - xmm2; /* subss */
    xmm1 = xmm1 * MEMF(ecx + eax * 4 + 8); /* mulss */
    eax = MEM32(esi + 0x78);
    ecx = MEM32(esp + 0x10);
    xmm2 = MEMF(eax + ecx); /* movss */
    xmm0 = xmm0 + xmm1; /* addss */
    eax = eax + ecx;
    edx = (int32_t)xmm0; /* cvttss2si */
    edx = (uint32_t)((int32_t)edx >> 4);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 + MEMF(eax + 4); /* addss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(eax + 8); /* movss */
    eax = esp + 0x30;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    MEMF(esp + 0x24) = xmm2; /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_00117403: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x14);
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 + MEMF(esp + 0x24); /* addss */
    MEMF(edi + -8) = xmm0; /* movss */
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x16);
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = xmm0 + MEMF(esp + 0x28); /* addss */
    ecx = MEM32(esp + 0x10);
    MEMF(edi + -4) = xmm0; /* movss */
    edx = (uint32_t)(int32_t)SMEM16(esi + 0x18);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 + MEMF(esp + 0x2C); /* addss */
    edx = MEM32(esp + 0x14);
    MEMF(edi) = xmm0; /* movss */
    eax = ZX8(MEM8(ebx + 0x773778));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    ecx = ecx + 0x1C;
    MEM32(esp + 0x10) = ecx;
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x6B47EA);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x150);
    edx++;
    MEM32(esp + 0x14) = edx;
    edx = MEM32(0x8471B8);
    ecx = ZX16(MEM16(ecx + edx + 0x1A));
    edx = MEM32(esp + 0x14);
    edi = edi + 0x1C;
    if (CMP_L(edx, ecx)) goto loc_00117340; /* jl: less (signed <) */

loc_00117480: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00117490
 * Original: 0x00117490 - 0x00117736 (678 bytes, 165 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00117490(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm5;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00117490: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x98;
    eax = MEM32(edi + 0x3C4);
    ecx = ZX16(MEM16(eax + 0x10));
    eax = MEM32(edi + 0x10C);
    eax = eax - 0x6F07E05;
    PUSH32(esp, ebx);
    MEM32(esp + 0x20) = ecx;
    PUSH32(esp, esi);
    ecx = 1;
    if ((eax == 0)) goto loc_001174D2; /* je: equal / zero */

loc_001174BE: ;
    eax = eax - 0x20A539C;
    if ((eax == 0)) goto loc_001174D2; /* je: equal / zero */

loc_001174C5: ;
    eax--;
    if ((eax != 0)) goto loc_00117730; /* jne: not equal / not zero */

loc_001174CC: ;
    MEM32(esp + 0x18) = ecx;
    goto loc_001174DA;

loc_001174D2: ;
    MEM32(esp + 0x18) = 0;

loc_001174DA: ;
    eax = MEM32(0x7FA1F8);
    if (CMP_NE(eax, 0x29)) goto loc_001174EC; /* jne: not equal / not zero */

loc_001174E4: ;
    MEM8(esp + 0x17) = LO8(ecx);
    eax = ecx;
    goto loc_00117532;

loc_001174EC: ;
    (void)0; /* cmp eax, 0x39 - flags set for next jcc */
    MEM8(esp + 0x17) = 0;
    if (CMP_NE(eax, 0x39)) goto loc_00117530; /* jne: not equal / not zero */

loc_001174F6: ;
    xmm0 = MEMF(0x64993C); /* movss */
    MEMF(edi + 0x78) = xmm0; /* movss */
    xmm0 = MEMF(0x64944C); /* movss */
    MEMF(edi + 0x7C) = xmm0; /* movss */
    xmm0 = MEMF(0x648FC8); /* movss */
    MEMF(edi + 0x80) = xmm0; /* movss */
    xmm0 = MEMF(0x649938); /* movss */
    MEMF(edi + 0x114) = xmm0; /* movss */

loc_00117530: ;
    eax = 0; /* xor self */

loc_00117532: ;
    esi = esp + 0x48;
    edx = edi;
    PUSH32(esp, 0); sub_002F7940(); /* call 0x002F7940 */

loc_0011753D: ;
    ecx = MEM32(esp + 0x24);
    xmm0 = MEMF(esp + 0x4C); /* movss */
    xmm5 = 0.0f; /* xorps self = zero */
    eax = 0; /* xor self */
    ebx = 0; /* xor self */
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEMF(esp + 0x4C) = xmm5; /* movss */
    if (CMP_LE(ecx, eax)) goto loc_00117730; /* jle: less or equal (signed <=) */

loc_00117562: ;
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x1C) = eax;
    /* nop */

loc_00117570: ;
    SET_LO8(edx, MEM8(esp + 0x17));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_001175CD; /* je: equal / zero */

loc_00117578: ;
    if (TEST_Z(eax, eax)) goto loc_00117711; /* je: equal / zero */

loc_00117580: ;
    if (CMP_EQ(eax, 0x24)) goto loc_00117711; /* je: equal / zero */

loc_00117589: ;
    ecx--;
    if (CMP_NE(ebx, ecx)) goto loc_001175CD; /* jne: not equal / not zero */

loc_0011758E: ;
    esi = esp + 0x54;
    eax = ebx;
    edx = edi;
    PUSH32(esp, 0); sub_002F7940(); /* call 0x002F7940 */

loc_0011759B: ;
    edx = MEM32(esp + 0x18);
    eax = ZX8(MEM8(edx + 0x773778));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x6B47EC);
    MEM32(esp + 0x38) = ecx;
    ecx = esi;
    fp_push((double)SMEM32(esp + 0x38)); /* fild */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 0x58) = (float)fp_top(); fp_popp(); /* fstp */
    goto loc_00117701;

loc_001175CD: ;
    edx = ZX8(MEM8(edi + 0x3A8));
    ecx = MEM32(edi + edx * 4 + 0x4EC);
    ecx = MEM32(ecx + 0x34);
    edx = MEM32(ecx + eax + 0xC);
    xmm1 = MEMF(ecx + eax + 0x14); /* movss */
    xmm0 = MEMF(ecx + eax + 0x10); /* movss */
    ecx = ecx + eax;
    eax = MEM32(edi + 0x3C8);
    PUSH32(esp, edx);
    eax = eax + MEM32(esp + 0x24);
    ecx = esp + 0x64;
    PUSH32(esp, 0); sub_003E26B0(); /* call 0x003E26B0 */

loc_00117604: ;
    xmm0 = MEMF(esp + 0x94); /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x98); /* movss */
    eax = MEM32(esp + 0x30);
    MEMF(esp + 0x34) = xmm0; /* movss */
    ecx = MEM32(esp + 0x34);
    xmm0 = MEMF(esp + 0x9C); /* movss */
    MEM32(esp + 0x40) = eax;
    MEM32(esp + 0x44) = ecx;
    eax = esp + 0x4C;
    MEMF(esp + 0x38) = xmm0; /* movss */
    edx = MEM32(esp + 0x38);
    PUSH32(esp, eax);
    ecx = esp + 0x44;
    PUSH32(esp, ecx);
    MEM32(esp + 0x50) = edx;
    MEMF(esp + 0x4C) = xmm5; /* movss */
    PUSH32(esp, 0); sub_003E1EE0(); /* call 0x003E1EE0 */

loc_0011765E: ;
    eax = (int32_t)xmm0; /* cvttss2si */
    edx = eax + eax * 4;
    edx = edx << 3;
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = MEM32(esp + 0x24);
    eax = ZX8(MEM8(edx + 0x773778));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    xmm0 = MEMF(eax + 0x6B47E0); /* movss */
    esp = esp + 0xC;
    xmm0 = xmm0 * xmm1; /* mulss */
    /* comiss xmm5, xmm0 - sets EFLAGS */
    if ((xmm5 <= xmm0)) goto loc_00117693; /* jbe: below or equal (unsigned <=) */

loc_0011768E: ;
    xmm0 = xmm5; /* movaps */
    goto loc_001176A3;

loc_00117693: ;
    xmm1 = MEMF(0x649060); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_001176A3; /* jbe: below or equal (unsigned <=) */

loc_001176A0: ;
    xmm0 = xmm1; /* movaps */

loc_001176A3: ;
    eax = (int32_t)xmm0; /* cvttss2si */
    ecx = eax + 1;
    if (CMP_LE(ecx, 0x27)) goto loc_001176B4; /* jle: less or equal (signed <=) */

loc_001176AF: ;
    ecx = 0x27;

loc_001176B4: ;
    edx = MEM32(edx * 4 + 0x773780);
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 - xmm1; /* subss */
    xmm1 = MEMF(0x648D14); /* movss */
    xmm1 = xmm1 - xmm0; /* subss */
    ecx = ecx + ecx * 2;
    xmm2 = MEMF(edx + ecx * 4 + 8); /* movss */
    eax = eax + eax * 2;
    xmm1 = xmm1 * MEMF(edx + eax * 4 + 8); /* mulss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm1 = xmm1 + xmm2; /* addss */
    xmm1 = xmm1 * MEMF(0x648D44); /* mulss */
    xmm1 = xmm1 + MEMF(esp + 0x28); /* addss */
    MEMF(esp + 0x30) = xmm1; /* movss */
    ecx = esp + 0x2C;

loc_00117701: ;
    esi = edi;
    edx = ebx;
    PUSH32(esp, 0); sub_002F79B0(); /* call 0x002F79B0 */

loc_0011770A: ;
    xmm5 = 0.0f; /* xorps self = zero */
    eax = MEM32(esp + 0x1C);

loc_00117711: ;
    esi = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x24);
    ebx++;
    eax = eax + 0x24;
    esi = esi + 0x40;
    (void)0; /* cmp ebx, ecx - flags set for next jcc */
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x20) = esi;
    if (CMP_L(ebx, ecx)) goto loc_00117570; /* jl: less (signed <) */

loc_00117730: ;
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
 * sub_00117740
 * Original: 0x00117740 - 0x00117775 (53 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00117740(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_00117740: ;
    edx = ZX8(MEM8(ecx + 0x773778));
    xmm1 = 0.0f; /* xorps self = zero */
    edx = (uint32_t)((int32_t)edx * (int32_t)0x1C);
    eax = eax + eax * 4;
    eax = eax << 3;
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(edx + 0x6B47E0); /* mulss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 > xmm0)) goto loc_00117771; /* ja: above (unsigned >) */

loc_00117764: ;
    xmm1 = MEMF(0x649060); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_00117774; /* jbe: below or equal (unsigned <=) */

loc_00117771: ;
    xmm0 = xmm1; /* movaps */

loc_00117774: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00117780
 * Original: 0x00117780 - 0x001177A4 (36 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00117780(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00117780: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x4C;
    xmm0 = MEMF(ecx + 0xDC); /* movss */
    /* comiss xmm0, MEMF(0x648D20) - sets EFLAGS */
    PUSH32(esp, edi);
    edi = eax;
    if ((xmm0 <= MEMF(0x648D20))) { sub_001177A4(); return; } /* jbe: below or equal (unsigned <=) */

loc_0011779D: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001178B0
 * Original: 0x001178B0 - 0x001178C2 (18 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001178B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001178B0: ;
    SET_LO8(eax, MEM8(0x773775));
    if (CMP_NE(LO8(eax), 6)) { sub_001178C2(); return; } /* jne: not equal / not zero */

loc_001178B9: ;
    /* nop */

loc_001178C0: ;
    goto loc_001178C0;

}

/**
 * sub_00117B30
 * Original: 0x00117B30 - 0x00117B9B (107 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00117B30(void)
{
    int _flags = 0; /* fallback flag var */

loc_00117B30: ;
    SET_LO8(eax, MEM8(0x773775));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    esi = 0; /* xor self */
    if (CMP_BE(LO8(eax), LO8(ebx))) goto loc_00117B92; /* jbe: below or equal (unsigned <=) */

loc_00117B3F: ;
    /* nop */

loc_00117B40: ;
    eax = MEM32(esi * 4 + 0x773780);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_00117B4D: ;
    if (TEST_NZ(eax, eax)) goto loc_00117B86; /* jne: not equal / not zero */

loc_00117B51: ;
    eax = MEM32(esi * 4 + 0x773780);
    if (CMP_EQ(eax, ebx)) goto loc_00117B86; /* je: equal / zero */

loc_00117B5C: ;
    ecx = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    ecx++;
    edx--;
    PUSH32(esp, eax);
    MEM32(0x7FA490) = ecx;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_00117B7C: ;
    esp = esp + 4;
    MEM32(esi * 4 + 0x773780) = ebx;

loc_00117B86: ;
    eax = ZX8(MEM8(0x773775));
    esi++;
    if (CMP_L(esi, eax)) goto loc_00117B40; /* jl: less (signed <) */

loc_00117B92: ;
    POP32(esp, esi);
    MEM8(0x773775) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00117BA0
 * Original: 0x00117BA0 - 0x00117F56 (950 bytes, 220 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00117BA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm5, xmm6;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00117BA0: ;
    esp = esp - 0x8C;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00117BAB: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xB;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = 0; /* xor self */
    edx = edx + 0x19;
    (void)0; /* cmp LO16(edx), LO16(eax) - flags set for next jcc */
    MEM32(esp + 8) = edx;
    if (CMP_LE(LO16(edx), LO16(eax))) goto loc_00117F4F; /* jle: less or equal (signed <=) */

loc_00117BC5: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = SX16(LO16(edx));
    PUSH32(esp, 0xFFFFFFFFu);
    ebp = ebp + ebp * 2;
    PUSH32(esp, 0xDE);
    ebp = ebp << 2;
    edi = 2;
    ebx = ebp + 0xC;
    PUSH32(esp, 0x5F3EDC);
    PUSH32(esp, ebx);
    MEM32(esp + 0x58) = 0x303;
    MEM32(esp + 0x40) = edi;
    MEM32(esp + 0x44) = edi;
    MEM32(esp + 0x48) = eax;
    MEM32(esp + 0x4C) = 4;
    MEM32(esp + 0x50) = eax;
    MEM32(esp + 0x54) = edi;
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_00117C11: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xE0);
    PUSH32(esp, 0x5F3EDC);
    PUSH32(esp, ebx);
    esi = eax;
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_00117C25: ;
    esp = esp + 0x20;
    (void)0; /* test esi, esi - flags set for next jcc */
    ebx = eax;
    if (TEST_Z(esi, esi)) goto loc_00117F4B; /* je: equal / zero */

loc_00117C32: ;
    if (TEST_Z(ebx, ebx)) goto loc_00117F4B; /* je: equal / zero */

loc_00117C3A: ;
    eax = MEM32(esp + 0x18);
    (void)0; /* test LO16(eax), LO16(eax) - flags set for next jcc */
    xmm6 = MEMF(0x6492BC); /* movss */
    if (CMP_LE(LO16(eax) & LO16(eax), 0)) goto loc_00117CB6; /* jle: less or equal (signed <=) */

loc_00117C4B: ;
    xmm5 = MEMF(0x648D88); /* movss */
    eax = ZX16(LO16(eax));
    edx = esi + 4;
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x14) = eax;

loc_00117C61: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00117C66: ;
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 + xmm5; /* addss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    eax = MEM32(esp + 0x1C);
    /* FPU: fcos  */
    MEMF(eax) = xmm6; /* movss */
    eax = eax + 0xC;
    MEM32(esp + 0x1C) = eax;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(eax + -8) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    /* FPU: fsin  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(eax + -16) = (float)fp_top(); fp_popp(); /* fstp */
    eax = MEM32(esp + 0x14);
    eax--;
    MEM32(esp + 0x14) = eax;
    if ((eax != 0)) goto loc_00117C61; /* jne: not equal / not zero */

loc_00117CB2: ;
    eax = MEM32(esp + 0x18);

loc_00117CB6: ;
    xmm0 = MEMF(0x64A0B4); /* movss */
    edx = MEM32(esp + 0xA0);
    eax = SX16(LO16(eax));
    eax++;
    PUSH32(esp, eax);
    MEMF(esi + ebp) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, esi);
    eax = ebx;
    MEMF(esi + ebp + 4) = xmm6; /* movss */
    MEMF(esi + ebp + 8) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00111B40(); /* call 0x00111B40 */

loc_00117CE6: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    MEMF(esp + 0x78) = xmm0; /* movss */
    MEMF(esp + 0x7C) = xmm0; /* movss */
    MEMF(esp + 0x80) = xmm0; /* movss */
    xmm0 = MEMF(0x64A0B0); /* movss */
    SET_LO8(eax, 0x9E);
    MEMF(esp + 0x60) = xmm0; /* movss */
    xmm0 = MEMF(0x64A0AC); /* movss */
    esp = esp + 8;
    MEM32(esp + 0x4C) = 0x6C;
    MEM8(esp + 0x2C) = LO8(eax);
    MEM8(esp + 0x2D) = LO8(eax);
    MEM8(esp + 0x2E) = 0x62;
    MEM16(esp + 0x50) = 0x19;
    MEM16(esp + 0x52) = 0xA;
    MEM32(esp + 0x8C) = 0x80CE07;
    MEM8(esp + 0x94) = 0x10;
    MEM8(esp + 0x95) = 0xFF;
    MEM8(esp + 0x96) = 0xFF;
    MEM8(esp + 0x97) = 0;
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEM32(esp + 0x10) = 0;

loc_00117D81: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00117D86: ;
    esi = eax;
    esi = esi & 1;
    esi = esi << 1;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00117D92: ;
    ecx = MEM32(esp + 0x8C);
    eax = eax & 1;
    esi = esi | eax;
    ecx = ecx & 0xFFFFFF3Fu;
    esi = esi << 6;
    esi = esi | ecx;
    MEM32(esp + 0x8C) = esi;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00117DB5: ;
    xmm6 = MEMF(0x648D2C); /* movss */
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 * MEMF(0x64A0A8); /* mulss */
    xmm5 = xmm5 + MEMF(0x648EB8); /* addss */
    xmm5 = xmm5 * xmm6; /* mulss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00117DD9: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x1A;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = edx + 0x19;
    MEM16(esp + 0x20) = LO16(edx);
    MEM16(esp + 0x54) = LO16(edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00117DF3: ;
    xmm0 = xmm0 * MEMF(0x6491B4); /* mulss */
    xmm0 = xmm0 + MEMF(0x648EC8); /* addss */
    eax = (uint32_t)(int32_t)SMEM16(esp + 0x10);
    MEMF(esp + 0x60) = xmm0; /* movss */
    MEMF(esp + 0x5C) = xmm0; /* movss */
    edx = eax + eax * 2;
    xmm0 = MEMF(ebx + edx * 4); /* movss */
    xmm0 = xmm0 - MEMF(ebx + ebp); /* subss */
    eax = ebx + edx * 4;
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x7C) = xmm0; /* movss */
    xmm0 = MEMF(eax + 4); /* movss */
    xmm0 = xmm0 - MEMF(ebx + ebp + 4); /* subss */
    ecx = eax;
    edx = MEM32(ecx);
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x80) = xmm0; /* movss */
    xmm0 = MEMF(eax + 8); /* movss */
    xmm0 = xmm0 - MEMF(ebx + ebp + 8); /* subss */
    MEM32(esp + 0x64) = edx;
    edx = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    xmm0 = xmm0 * xmm5; /* mulss */
    MEM32(esp + 0x68) = edx;
    MEM32(esp + 0x6C) = ecx;
    MEMF(esp + 0x84) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00117E79: ;
    xmm0 = xmm0 * MEMF(0x64A0A4); /* mulss */
    xmm0 = xmm0 + MEMF(0x6498C4); /* addss */
    xmm0 = xmm0 * xmm6; /* mulss */
    MEMF(esp + 0x88) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00117E9B: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xB0;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = MEM32(0x771CD0);
    esi = 0; /* xor self */
    MEM32(esp + 0x30) = edi;
    MEM32(esp + 0x34) = edi;
    MEM32(esp + 0x38) = esi;
    MEM32(esp + 0x3C) = 4;
    MEM32(esp + 0x40) = edi;
    MEM32(esp + 0x44) = esi;
    SET_LO8(edx, LO8(edx) + 0x50);
    (void)0; /* cmp eax, 0x2EE - flags set for next jcc */
    MEM8(esp + 0x2F) = LO8(edx);
    if (CMP_GE(eax, 0x2EE)) goto loc_00117F30; /* jge: greater or equal (signed >=) */

loc_00117ED4: ;
    edx = MEM32(esp + 0xA4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x6C);
    eax = 0x174;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_00117EE8: ;
    esp = esp + 8;
    if (CMP_EQ(eax, esi)) goto loc_00117F30; /* je: equal / zero */

loc_00117EEF: ;
    edx = eax + 0x2C;
    edi = edx;
    ecx = 0x1F;
    esi = esp + 0x20;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    SET_LO16(ecx, MEM16(edx));
    edx = MEM32(esp + 0x14);
    MEM16(eax + 0x2E) = LO16(ecx);
    ecx = MEM32(0x771CD0);
    ecx++;
    MEM8(eax + 0x154) = 0;
    MEM8(eax + 0x160) = 0;
    MEM32(0x771CD0) = ecx;
    MEM32(eax + 0x170) = edx;
    edi = 2;

loc_00117F30: ;
    eax = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x10);
    eax--;
    edx++;
    (void)0; /* test LO16(eax), LO16(eax) - flags set for next jcc */
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x10) = edx;
    if (CMP_G(LO16(eax) & LO16(eax), 0)) goto loc_00117D81; /* jg: greater (signed >) */

loc_00117F4B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00117F4F: ;
    esp = esp + 0x8C;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00117F60
 * Original: 0x00117F60 - 0x00117FD8 (120 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00117F60(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00117F60: ;
    esp = esp - 0xC;
    SET_LO8(eax, MEM8(esi + 0x10B));
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ecx);
    MEM8(esp + 8) = LO8(eax);
    PUSH32(esp, 0x2A);
    eax = 0x58;
    MEMF(esp + 0x10) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_00117F83: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_00117FD4; /* je: equal / zero */

loc_00117F8A: ;
    xmm0 = MEMF(0x64925C); /* movss */
    SET_LO8(ecx, LO8(ecx) | 0xFF);
    MEM8(eax + 0x38) = LO8(ecx);
    MEM8(eax + 0x3A) = LO8(ecx);
    MEMF(eax + 0x30) = xmm0; /* movss */
    MEMF(eax + 0x34) = xmm0; /* movss */
    MEM8(eax + 0x39) = 0x38;
    MEM8(eax + 0x2C) = 0;
    MEM8(eax + 0x3B) = 0x28;
    edx = 0; /* xor self */
    ecx = eax + 0x3C;
    MEM32(ecx) = edx;
    MEM32(ecx + 4) = edx;
    MEM32(ecx + 8) = edx;
    MEM32(ecx + 0xC) = edx;
    edx = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    eax = eax + 0x4C;
    MEM32(eax) = esi;
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;

loc_00117FD4: ;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00117FE0
 * Original: 0x00117FE0 - 0x00118027 (71 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00117FE0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00117FE0: ;
    eax = MEM32(esp + 0xC);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (TEST_Z(eax, eax)) { sub_00118027(); return; } /* je: equal / zero */

loc_00117FED: ;
    if (CMP_EQ(eax, 0x2F)) { sub_00118027(); return; } /* je: equal / zero */

loc_00117FF2: ;
    if (CMP_EQ(eax, 3)) { sub_00118027(); return; } /* je: equal / zero */

loc_00117FF7: ;
    if (CMP_NE(eax, 0x2D)) goto loc_00118015; /* jne: not equal / not zero */

loc_00117FFC: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esi + 0x4C);
    edx = MEM32(eax);
    if (CMP_NE(ecx, edx)) goto loc_00118017; /* jne: not equal / not zero */

loc_00118009: ;
    ecx = MEM32(eax + 4);
    MEM32(esi + 0x4C) = ecx;
    SET_LO8(edx, MEM8(eax + 9));
    MEM8(esi + 0x50) = LO8(edx);

loc_00118015: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00118017: ;
    if (CMP_NE(ecx, MEM32(eax + 4))) goto loc_00118015; /* jne: not equal / not zero */

loc_0011801C: ;
    MEM32(esi + 0x4C) = edx;
    SET_LO8(eax, MEM8(eax + 8));
    MEM8(esi + 0x50) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00118080
 * Original: 0x00118080 - 0x001180D7 (87 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00118080(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00118080: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = edi + 0x78;
    eax = esi;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 8) = ecx;
    ecx = MEM32(edi + 0x298);
    MEM32(esp + 0xC) = edx;
    xmm0 = MEMF(esp + 0xC); /* movss */
    xmm0 = xmm0 + MEMF(0x648F08); /* addss */
    SET_LO8(ecx, LO8(ecx) & 0x1F);
    (void)0; /* cmp LO8(ecx), 8 - flags set for next jcc */
    PUSH32(esp, 0xBF800000u);
    MEM32(esp + 0x14) = eax;
    MEMF(esp + 0x10) = xmm0; /* movss */
    PUSH32(esp, edi);
    if (CMP_NE(LO8(ecx), 8)) { sub_001180D7(); return; } /* jne: not equal / not zero */

loc_001180C6: ;
    edx = MEM32(0x847024);
    eax = MEM32(edx + 0x40);
    PUSH32(esp, 0x434);
    PUSH32(esp, eax);
    g_seh_ebp = ebp; sub_001180E6(); return; /* tail jmp 0x001180E6 */

}

/**
 * sub_001181F0
 * Original: 0x001181F0 - 0x00118681 (1169 bytes, 243 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001181F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm5, xmm6;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001181F0: ;
    esp = esp - 0xA8;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xB4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x3C) = 0x303;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0011820E: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xB;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    xmm0 = MEMF(0x64A0A0); /* movss */
    xmm6 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x98) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 0x78); /* movss */
    MEMF(esp + 0x58) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 0x7C); /* movss */
    xmm0 = xmm0 + MEMF(0x648E38); /* addss */
    MEMF(esp + 0x5C) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 0x80); /* movss */
    SET_LO8(eax, 0x14);
    MEMF(esp + 0x60) = xmm0; /* movss */
    xmm0 = MEMF(0x64A09C); /* movss */
    MEM32(esp + 0x40) = 0x6C;
    MEMF(esp + 0x18) = xmm6; /* movss */
    MEMF(esp + 0x1C) = xmm6; /* movss */
    MEM8(esp + 0x20) = LO8(eax);
    MEM8(esp + 0x21) = LO8(eax);
    MEM8(esp + 0x22) = LO8(eax);
    MEMF(esp + 0x64) = xmm6; /* movss */
    MEMF(esp + 0x68) = xmm6; /* movss */
    MEMF(esp + 0x6C) = xmm6; /* movss */
    MEM16(esp + 0x44) = 0xF;
    MEM16(esp + 0x46) = 0x11;
    MEMF(esp + 0x4C) = xmm0; /* movss */
    MEM32(esp + 0x80) = 0x84DE01;
    MEM8(esp + 0x88) = 0x1E;
    esi = edx;
    SET_LO8(edx, MEM8(ebp + 0x10B));
    esi = esi + 0xF;
    ebx = 0; /* xor self */
    MEM32(esp + 0x10) = esi;
    MEM8(esp + 0x94) = LO8(edx);
    MEM8(esp + 0x89) = 0xFF;
    MEM8(esp + 0x8A) = 0xFF;
    MEM8(esp + 0x8B) = 8;
    MEM32(esp + 0x84) = ebx;
    MEM8(esp + 0x8C) = 0xFF;

loc_001182F8: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001182FD: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x9C;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + 0x64);
    MEM8(esp + 0x23) = LO8(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00118311: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xE;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = edx + 8;
    MEM16(esp + 0x14) = LO16(edx);
    MEM16(esp + 0x48) = LO16(edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0011832B: ;
    xmm0 = xmm0 * MEMF(0x64A098); /* mulss */
    xmm0 = xmm0 + MEMF(0x64A094); /* addss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    MEMF(esp + 0x50) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0011834C: ;
    xmm0 = xmm0 * MEMF(0x648E5C); /* mulss */
    xmm0 = xmm0 + MEMF(0x648F78); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00118367: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x24;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = edx - 0x19;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00118378: ;
    eax = eax & 0xFF;
    PUSH32(esp, eax);
    edi = esp + 0x7C;
    PUSH32(esp, 0); sub_00110510(); /* call 0x00110510 */

loc_00118387: ;
    esp = esp + 0xC;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0011838F: ;
    xmm0 = xmm0 * xmm6; /* mulss */
    MEMF(esp + 0x7C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0011839E: ;
    edi = eax;
    edi = edi & 1;
    edi = edi << 1;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001183AA: ;
    edx = MEM32(esp + 0x80);
    eax = eax & 1;
    edi = edi | eax;
    eax = MEM32(0x771CD0);
    edi = edi << 6;
    edx = edx & 0xFFFFFF3Fu;
    edi = edi | edx;
    (void)0; /* cmp eax, 0x2EE - flags set for next jcc */
    MEM32(esp + 0x80) = edi;
    edi = 2;
    MEM32(esp + 0x24) = edi;
    MEM32(esp + 0x28) = edi;
    MEM32(esp + 0x2C) = ebx;
    MEM32(esp + 0x30) = 4;
    MEM32(esp + 0x34) = edi;
    MEM32(esp + 0x38) = ebx;
    if (CMP_GE(eax, 0x2EE)) goto loc_00118467; /* jge: greater or equal (signed >=) */

loc_001183F5: ;
    eax = MEM32(esp + 0xC0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x6C);
    eax = 0x17C;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_00118409: ;
    xmm6 = 0.0f; /* xorps self = zero */
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) goto loc_00118467; /* je: equal / zero */

loc_00118413: ;
    edx = eax + 0x2C;
    edi = edx;
    ecx = 0x1F;
    esi = esp + 0x14;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    SET_LO16(ecx, MEM16(edx));
    edx = MEM32(esp + 0x94);
    esi = MEM32(esp + 0x10);
    MEM16(eax + 0x2E) = LO16(ecx);
    ecx = MEM32(0x771CD0);
    MEM8(eax + 0x154) = LO8(ebx);
    MEM8(eax + 0x160) = LO8(ebx);
    ecx++;
    eax = eax + 0x170;
    MEM32(eax) = ebp;
    MEM32(0x771CD0) = ecx;
    ecx = MEM32(esp + 0x98);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    edi = 2;

loc_00118467: ;
    esi--;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(esp + 0x10) = esi;
    if (CMP_G(esi, ebx)) goto loc_001182F8; /* jg: greater (signed >) */

loc_00118474: ;
    SET_LO8(edx, MEM8(ebp + 0x10B));
    xmm0 = MEMF(0x64A090); /* movss */
    MEM32(esp + 0x3C) = 0x303;
    MEM32(esp + 0x9C) = ebp;
    MEM8(esp + 0xA0) = LO8(edx);
    MEMF(esp + 0xA4) = xmm6; /* movss */
    MEMF(esp + 0xAC) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001184AF: ;
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 * MEMF(0x648D20); /* mulss */
    xmm5 = xmm5 + MEMF(0x649278); /* addss */
    MEMF(esp + 0xA8) = xmm5; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001184D0: ;
    xmm0 = xmm0 * MEMF(0x6493A8); /* mulss */
    xmm0 = xmm0 + MEMF(0x648EA4); /* addss */
    MEMF(esp + 0xB0) = xmm0; /* movss */
    fp_push(MEMF(esp + 0xB0)); /* fld float */
    xmm1 = xmm5; /* movaps */
    xmm1 = xmm1 * xmm5; /* mulss */
    xmm0 = xmm0 / xmm1; /* divss */
    MEMF(esp + 0xB4) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00118509: ;
    xmm1 = MEMF(ebp + 0x78); /* movss */
    ecx = MEM32(0x595D18);
    edx = MEM32(0x595D1C);
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x58) = xmm1; /* movss */
    xmm1 = MEMF(ebp + 0x7C); /* movss */
    xmm1 = xmm1 + MEMF(0x648E38); /* addss */
    MEMF(esp + 0x5C) = xmm1; /* movss */
    xmm1 = MEMF(ebp + 0x80); /* movss */
    MEM8(esp + 0x23) = LO8(eax);
    eax = MEM32(0x595D14);
    esi = 1;
    MEMF(esp + 0x60) = xmm1; /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    MEM32(esp + 0x40) = 0x79;
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEM8(esp + 0x20) = 0xFF;
    MEM8(esp + 0x21) = 0xFF;
    MEM8(esp + 0x22) = 0xDF;
    MEM32(esp + 0x64) = eax;
    MEM32(esp + 0x68) = ecx;
    MEM32(esp + 0x6C) = edx;
    MEM16(esp + 0x44) = LO16(esi);
    MEM16(esp + 0x46) = 0xFF;
    MEM16(esp + 0x48) = LO16(esi);
    MEMF(esp + 0x4C) = xmm1; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001185A5: ;
    ebp = eax;
    ebp = ebp & esi;
    ebp = ebp | 0x980;
    ebp = ebp << 1;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001185B6: ;
    ecx = MEM32(0x595D18);
    edx = MEM32(0x595D1C);
    eax = eax & esi;
    ebp = ebp | eax;
    eax = MEM32(0x595D14);
    ebp = ebp << 6;
    MEM32(esp + 0x80) = ebp;
    MEM8(esp + 0x88) = 0x1F;
    MEM8(esp + 0x89) = 0xFF;
    MEM8(esp + 0x8A) = 0xFF;
    MEM8(esp + 0x8B) = 9;
    MEM32(esp + 0x84) = ebx;
    MEM8(esp + 0x8C) = 0xFF;
    MEM32(esp + 0x70) = eax;
    MEM32(esp + 0x74) = ecx;
    MEM32(esp + 0x78) = edx;
    MEM16(esp + 0x14) = 0x12C;
    MEMF(esp + 0x54) = xmm0; /* movss */
    MEMF(esp + 0x50) = xmm0; /* movss */
    MEMF(esp + 0x7C) = xmm0; /* movss */
    MEM32(esp + 0x24) = edi;
    MEM32(esp + 0x28) = edi;
    MEM32(esp + 0x2C) = ebx;
    MEM32(esp + 0x30) = 4;
    MEM32(esp + 0x34) = edi;
    MEM32(esp + 0x38) = ebx;
    eax = MEM32(esp + 0xC0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1C);
    PUSH32(esp, ebx);
    ecx = esp + 0x20;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00105450(); /* call 0x00105450 */

loc_0011865B: ;
    esp = esp + 0x14;
    if (CMP_EQ(eax, ebx)) goto loc_00118676; /* je: equal / zero */

loc_00118662: ;
    edi = eax + 0x170;
    ecx = 7;
    esi = esp + 0x9C;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */

loc_00118676: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xA8;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00118690
 * Original: 0x00118690 - 0x001187E7 (343 bytes, 72 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00118690(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;

loc_00118690: ;
    esp = esp - 0xC;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    eax = MEM32(esi + 0x170);
    ecx = MEM32(eax + 0x64);
    if (TEST_Z(ecx, ecx)) { sub_001187E7(); return; } /* je: equal / zero */

loc_001186A9: ;
    SET_LO8(ecx, MEM8(eax + 0x10B));
    if (CMP_NE(LO8(ecx), MEM8(esi + 0x174))) { sub_001187E7(); return; } /* jne: not equal / not zero */

loc_001186BB: ;
    edx = MEM32(eax + 0x78);
    xmm4 = MEMF(0x7FA24C); /* movss */
    MEM32(esi + 0x70) = edx;
    xmm0 = MEMF(eax + 0x7C); /* movss */
    xmm0 = xmm0 + MEMF(0x648E38); /* addss */
    MEMF(esi + 0x74) = xmm0; /* movss */
    eax = MEM32(eax + 0x80);
    MEM32(esi + 0x78) = eax;
    xmm0 = MEMF(esi + 0x94); /* movss */
    eax = esi + 0x88;
    ecx = eax;
    edx = MEM32(ecx);
    MEM32(esp + 4) = edx;
    edx = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x8C); /* addss */
    MEMF(esi + 0x8C) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x178); /* movss */
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = ecx;
    PUSH32(esp, 0); sub_00106150(); /* call 0x00106150 */

loc_00118729: ;
    xmm5 = MEMF(esp + 4); /* movss */
    xmm0 = MEMF(0x7FA248); /* movss */
    xmm1 = MEMF(eax); /* movss */
    xmm2 = MEMF(esi + 0x8C); /* movss */
    xmm2 = xmm2 - MEMF(esp + 8); /* subss */
    xmm3 = MEMF(esi + 0x90); /* movss */
    xmm3 = xmm3 - MEMF(esp + 0xC); /* subss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm1 = xmm1 - xmm5; /* subss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm3 = xmm3 * xmm0; /* mulss */
    xmm0 = xmm4; /* movaps */
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm6 = xmm0; /* movaps */
    xmm7 = xmm4; /* movaps */
    xmm7 = xmm7 * xmm5; /* mulss */
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 * xmm2; /* mulss */
    xmm6 = xmm6 * xmm1; /* mulss */
    xmm1 = MEMF(0x648D10); /* movss */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm2 = xmm4; /* movaps */
    xmm2 = xmm2 * MEMF(esp + 8); /* mulss */
    xmm4 = xmm4 * MEMF(esp + 0xC); /* mulss */
    xmm6 = xmm6 * xmm1; /* mulss */
    xmm5 = xmm5 * xmm1; /* mulss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm6 = xmm6 + xmm7; /* addss */
    xmm6 = xmm6 + MEMF(esi + 0x7C); /* addss */
    xmm5 = xmm5 + xmm2; /* addss */
    xmm5 = xmm5 + MEMF(esi + 0x80); /* addss */
    xmm0 = xmm0 + xmm4; /* addss */
    xmm0 = xmm0 + MEMF(esi + 0x84); /* addss */
    MEMF(esi + 0x7C) = xmm6; /* movss */
    MEMF(esi + 0x80) = xmm5; /* movss */
    MEMF(esi + 0x84) = xmm0; /* movss */
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_001187F0
 * Original: 0x001187F0 - 0x0011888E (158 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001187F0(void)
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

loc_001187F0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x170);
    ecx = MEM32(eax + 0x64);
    if (TEST_Z(ecx, ecx)) { sub_0011888E(); return; } /* je: equal / zero */

loc_00118806: ;
    SET_LO8(ecx, MEM8(eax + 0x10B));
    if (CMP_NE(LO8(ecx), MEM8(esi + 0x174))) { sub_0011888E(); return; } /* jne: not equal / not zero */

loc_00118814: ;
    edx = MEM32(eax + 0x78);
    MEM32(esi + 0x70) = edx;
    xmm0 = MEMF(eax + 0x7C); /* movss */
    xmm0 = xmm0 + MEMF(0x648E38); /* addss */
    MEMF(esi + 0x74) = xmm0; /* movss */
    eax = MEM32(eax + 0x80);
    MEM32(esi + 0x78) = eax;
    fp_push(MEMF(esi + 0x178)); /* fld float */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esi + 0x6C) = (float)fp_top(); fp_pop(); /* fst */
    MEMF(esi + 0x68) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esi + 0x188)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fsubr dword ptr [esi + 0x184] */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00118866: ;
    MEM8(esi + 0x3B) = LO8(eax);
    xmm0 = MEMF(esi + 0x178); /* movss */
    xmm0 = xmm0 + MEMF(0x7FA24C); /* addss */
    /* comiss xmm0, MEMF(esi + 0x17C) - sets EFLAGS */
    MEMF(esi + 0x178) = xmm0; /* movss */
    if ((xmm0 > MEMF(esi + 0x17C))) { sub_0011888E(); return; } /* ja: above (unsigned >) */

loc_0011888A: ;
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
 * sub_001188A0
 * Original: 0x001188A0 - 0x0011890C (108 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001188A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001188A0: ;
    eax = MEM32(esp + 0xC);
    (void)0; /* cmp eax, 0x2D - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (CMP_NE(eax, 0x2D)) goto loc_001188E8; /* jne: not equal / not zero */

loc_001188AE: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esi + 0x170);
    edx = MEM32(eax);
    if (CMP_NE(ecx, edx)) goto loc_001188D2; /* jne: not equal / not zero */

loc_001188BE: ;
    ecx = MEM32(eax + 4);
    MEM32(esi + 0x170) = ecx;
    SET_LO8(edx, MEM8(eax + 9));
    MEM8(esi + 0x174) = LO8(edx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001188D2: ;
    if (CMP_NE(ecx, MEM32(eax + 4))) goto loc_0011890A; /* jne: not equal / not zero */

loc_001188D7: ;
    MEM32(esi + 0x170) = edx;
    SET_LO8(eax, MEM8(eax + 8));
    MEM8(esi + 0x174) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001188E8: ;
    if (TEST_NZ(eax, eax)) goto loc_0011890A; /* jne: not equal / not zero */

loc_001188EC: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(eax);
    if (CMP_EQ(ecx, MEM32(esi + 0x170))) goto loc_00118905; /* je: equal / zero */

loc_001188FA: ;
    SET_LO8(edx, MEM8(eax + 4));
    if (CMP_NE(LO8(edx), MEM8(esi + 0x174))) goto loc_0011890A; /* jne: not equal / not zero */

loc_00118905: ;
    PUSH32(esp, 0); sub_000DADD0(); /* call 0x000DADD0 */

loc_0011890A: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00118910
 * Original: 0x00118910 - 0x00118B0B (507 bytes, 149 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00118910(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm5;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00118910: ;
    esp = esp - 0x4C;
    xmm0 = MEMF(0x64908C); /* movss */
    xmm5 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x54);
    SET_LO8(eax, MEM8(ebp + 0x10B));
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(esp + 0x29) = 0x19;
    MEM16(esp + 0x20) = 0x12C;
    MEM16(esp + 0x22) = 0x12;
    MEM32(esp + 0x24) = 0xF;
    MEM8(esp + 0x28) = 1;
    MEMF(esp + 0x50) = xmm0; /* movss */
    MEMF(esp + 0x4C) = xmm0; /* movss */
    MEM8(esp + 0x39) = 1;
    MEMF(esp + 0x3C) = xmm5; /* movss */
    MEM32(esp + 0x44) = esi;
    MEM32(esp + 0x48) = esi;
    MEM32(esp + 0x34) = ebp;
    MEM8(esp + 0x38) = LO8(eax);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00118B05; /* je: equal / zero */

loc_0011897B: ;
    eax = MEM32(0x847200);
    if (CMP_EQ(eax, esi)) goto loc_00118B05; /* je: equal / zero */

loc_00118988: ;
    SET_LO8(edx, MEM8(ebp + 0x10B));
    PUSH32(esp, ebx);
    PUSH32(esp, edi);

loc_00118990: ;
    (void)0; /* cmp MEM8(eax), LO8(edx) - flags set for next jcc */
    ecx = MEM32(eax + 0xE0);
    if (CMP_NE(MEM8(eax), LO8(edx))) goto loc_001189B5; /* jne: not equal / not zero */

loc_0011899A: ;
    edi = MEM32(ebp + 0x68);
    ebx = 0; /* xor self */
    (void)0; /* cmp edi, 0x48 - flags set for next jcc */
    edi = ZX16(MEM16(eax + 0xA));
    SET_LO8(ebx, (CMP_EQ(edi, 0x48)) ? 1 : 0); /* sete */
    ebx = ebx + 0x79;
    if (CMP_NE(edi, ebx)) goto loc_001189B5; /* jne: not equal / not zero */

loc_001189B0: ;
    if (TEST_Z(esi, esi)) goto loc_001189C3; /* je: equal / zero */

loc_001189B4: ;
    esi--;

loc_001189B5: ;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = ecx;
    if (TEST_NZ(ecx, ecx)) goto loc_00118990; /* jne: not equal / not zero */

loc_001189BB: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x4C;
    esp += 4; return; /* ret */

loc_001189C3: ;
    MEM32(esp + 0x48) = eax;
    PUSH32(esp, eax);
    eax = ebp;
    ecx = esp + 0x14;
    edx = esp + 0x20;
    PUSH32(esp, 0); sub_00119A30(); /* call 0x00119A30 */

loc_001189D7: ;
    esp = esp + 4;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001189E5; /* je: equal / zero */

loc_001189DE: ;
    MEM8(esp + 0x2A) = MEM8(esp + 0x2A) | 4;
    goto loc_00118A11;

loc_001189E5: ;
    xmm0 = MEMF(0x5A0060); /* movss */
    MEMF(esp + 0x1C) = xmm5; /* movss */
    MEMF(esp + 0x20) = xmm5; /* movss */
    MEMF(esp + 0x24) = xmm5; /* movss */
    MEMF(esp + 0x10) = xmm5; /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEMF(esp + 0x18) = xmm5; /* movss */

loc_00118A11: ;
    SET_LO8(edx, MEM8(esp + 0x64));
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0);
    eax = esp + 0x34;
    PUSH32(esp, 0x14);
    PUSH32(esp, eax);
    eax = 0x20;
    PUSH32(esp, 0); sub_0017A580(); /* call 0x0017A580 */

loc_00118A32: ;
    esp = esp + 0x20;
    if (TEST_Z(eax, eax)) goto loc_00118B03; /* je: equal / zero */

loc_00118A3D: ;
    ebx = MEM32(eax + 0x144);
    ecx = 8;
    esi = esp + 0x3C;
    edi = ebx;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    if (CMP_NE(MEM32(ebp + 0x64), 1)) goto loc_00118A91; /* jne: not equal / not zero */

loc_00118A56: ;
    esi = MEM32(0x84A5F8);
    edi = 0; /* xor self */
    edi = edi;

loc_00118A60: ;
    ecx = MEM32(0x84A5FC);
    if (CMP_EQ(MEM8(edi + ecx), 0)) goto loc_00118A82; /* je: equal / zero */

loc_00118A6C: ;
    if (CMP_NE(MEM32(esi + 0x68), 0x90)) goto loc_00118A82; /* jne: not equal / not zero */

loc_00118A75: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0); sub_00139840(); /* call 0x00139840 */

loc_00118A7F: ;
    esp = esp + 4;

loc_00118A82: ;
    esi = esi + 0x6D0;
    edi++;
    if (CMP_L(edi, 0x81)) goto loc_00118A60; /* jl: less (signed <) */

loc_00118A91: ;
    SET_LO8(eax, MEM8(0x846FF8));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00118AAD; /* je: equal / zero */

loc_00118A9A: ;
    esi = MEM32(0x847024);
    PUSH32(esp, 0x5F3F0C);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_00118AAA: ;
    esp = esp + 4;

loc_00118AAD: ;
    edx = MEM32(0x847024);
    edi = MEM32(edx + 0x40);
    esi = ebp;
    PUSH32(esp, 0); sub_002F82C0(); /* call 0x002F82C0 */

loc_00118ABD: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00118B03; /* je: equal / zero */

loc_00118AC1: ;
    eax = MEM32(ebp + 0x564);
    if (TEST_Z(eax, eax)) goto loc_00118ADD; /* je: equal / zero */

loc_00118ACB: ;
    eax = MEM32(0x847024);
    eax = MEM32(eax + 0x44);
    eax = MEM32(eax + 0xC);
    eax = eax + 8;
    eax = MEM32(eax);
    goto loc_00118AE3;

loc_00118ADD: ;
    eax = MEM32(ebp + 0x580);

loc_00118AE3: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0xE);
    ebp = ebp + 0x78;
    PUSH32(esp, ebp);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0);
    edx = 0x5B3;
    PUSH32(esp, edi);
    eax = ebx;
    ecx = edx;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_00118B03: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_00118B05: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x4C;
    esp += 4; return; /* ret */

}

/**
 * sub_00118B10
 * Original: 0x00118B10 - 0x00118EEC (988 bytes, 296 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00118B10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00118B10: ;
    esp = esp - 0x28;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x38);
    esi = MEM32(edi + 0x144);
    ecx = MEM32(esi);
    eax = MEM32(edi + 0x140);
    edx = MEM32(ecx + 0x64);
    (void)0; /* test edx, edx - flags set for next jcc */
    MEM32(esp + 0x38) = eax;
    eax = MEM32(esi + 0xC);
    MEM32(esp + 0xC) = ecx;
    if (TEST_Z(edx, edx)) { sub_00118EEC(); return; } /* je: equal / zero */

loc_00118B3E: ;
    SET_LO8(edx, MEM8(ecx + 0x10B));
    if (CMP_NE(LO8(edx), MEM8(esi + 4))) { sub_00118EEC(); return; } /* jne: not equal / not zero */

loc_00118B4D: ;
    edx = MEM32(0x7FA20C);
    (void)0; /* test edx, edx - flags set for next jcc */
    PUSH32(esp, ebp);
    if (CMP_LE(edx & edx, 0)) goto loc_00118E55; /* jle: less or equal (signed <=) */

loc_00118B5C: ;
    ebp = edi + 0x2C;
    edx = ebp;
    ebx = MEM32(edx);
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    PUSH32(esp, eax);
    MEM32(esp + 0x20) = edx;
    eax = ecx;
    ecx = esp + 0x24;
    edx = ebp;
    MEM32(esp + 0x1C) = ebx;
    PUSH32(esp, 0); sub_00119A30(); /* call 0x00119A30 */

loc_00118B83: ;
    eax = ZX8(LO8(eax));
    esp = esp + 4;
    eax = eax - 0;
    if ((eax == 0)) goto loc_00118EC2; /* je: equal / zero */

loc_00118B92: ;
    eax--;
    if ((eax == 0)) goto loc_00118BE3; /* je: equal / zero */

loc_00118B95: ;
    eax--;
    if ((eax != 0)) goto loc_00118C93; /* jne: not equal / not zero */

loc_00118B9C: ;
    SET_LO16(eax, MEM16(edi + 0x3A));
    if (TEST_NZ(LO8(eax), 4)) goto loc_00118BBA; /* jne: not equal / not zero */

loc_00118BA4: ;
    ecx = ebp;
    edx = MEM32(ecx);
    MEM32(esp + 0x14) = edx;
    edx = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x1C) = ecx;

loc_00118BBA: ;
    eax = eax | 4;
    MEM16(edi + 0x3A) = LO16(eax);
    eax = MEM32(esi + 0x10);
    (void)0; /* test eax, eax - flags set for next jcc */
    ecx = 0xFFFFFFFDu;
    if (TEST_Z(eax, eax)) goto loc_00118BD0; /* je: equal / zero */

loc_00118BCD: ;
    MEM32(eax + 0x64) = MEM32(eax + 0x64) & ecx;

loc_00118BD0: ;
    eax = MEM32(esi + 0x14);
    if (TEST_Z(eax, eax)) goto loc_00118C93; /* je: equal / zero */

loc_00118BDB: ;
    MEM32(eax + 0x64) = MEM32(eax + 0x64) & ecx;
    goto loc_00118C93;

loc_00118BE3: ;
    SET_LO16(eax, MEM16(edi + 0x3A));
    if (TEST_NZ(LO8(eax), 4)) goto loc_00118C01; /* jne: not equal / not zero */

loc_00118BEB: ;
    edx = ebp;
    ecx = MEM32(edx);
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x1C) = edx;

loc_00118C01: ;
    eax = eax | 4;
    MEM16(edi + 0x3A) = LO16(eax);
    eax = MEM32(esi + 0x10);
    (void)0; /* test eax, eax - flags set for next jcc */
    ecx = 0xFFFFFFFBu;
    if (TEST_Z(eax, eax)) goto loc_00118C50; /* je: equal / zero */

loc_00118C14: ;
    eax = eax + 0x40;
    edx = ebp;
    ebx = MEM32(edx);
    MEM32(eax) = ebx;
    ebx = MEM32(edx + 4);
    MEM32(eax + 4) = ebx;
    edx = MEM32(edx + 8);
    MEM32(eax + 8) = edx;
    eax = MEM32(esi + 0x10);
    edx = MEM32(esp + 0x20);
    eax = eax + 0x4C;
    MEM32(eax) = edx;
    edx = MEM32(esp + 0x24);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x28);
    MEM32(eax + 8) = edx;
    eax = MEM32(esi + 0x10);
    MEM32(eax + 0x64) = MEM32(eax + 0x64) & ecx;
    eax = MEM32(esi + 0x10);
    MEM32(eax + 0x64) = MEM32(eax + 0x64) | 2;

loc_00118C50: ;
    eax = MEM32(esi + 0x14);
    if (TEST_Z(eax, eax)) goto loc_00118C93; /* je: equal / zero */

loc_00118C57: ;
    eax = eax + 0x40;
    edx = ebp;
    ebx = MEM32(edx);
    MEM32(eax) = ebx;
    ebx = MEM32(edx + 4);
    MEM32(eax + 4) = ebx;
    edx = MEM32(edx + 8);
    MEM32(eax + 8) = edx;
    eax = MEM32(esi + 0x14);
    edx = MEM32(esp + 0x20);
    eax = eax + 0x4C;
    MEM32(eax) = edx;
    edx = MEM32(esp + 0x24);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x28);
    MEM32(eax + 8) = edx;
    eax = MEM32(esi + 0x14);
    MEM32(eax + 0x64) = MEM32(eax + 0x64) & ecx;
    eax = MEM32(esi + 0x14);
    MEM32(eax + 0x64) = MEM32(eax + 0x64) | 2;

loc_00118C93: ;
    xmm0 = MEMF(ebp); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x14); /* subss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(edi + 0x30); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x18); /* subss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(edi + 0x34); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x1C); /* subss */
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    MEMF(esp + 0x38) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1F60(); /* call 0x003E1F60 */

loc_00118CD0: ;
    eax = (uint32_t)(int32_t)SMEM8(edi + 0x4E);
    edx = MEM32(esp + 0x40);
    ecx = eax + eax * 4;
    eax = edx + ecx * 4;
    ecx = ebp;
    ebx = MEM32(ecx);
    edx = eax;
    MEM32(edx) = ebx;
    ebx = MEM32(ecx + 4);
    MEM32(edx + 4) = ebx;
    ecx = MEM32(ecx + 8);
    MEMF(eax + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(0x648EA4); /* movss */
    MEM32(edx + 8) = ecx;
    MEMF(eax + 0x10) = xmm0; /* movss */
    SET_LO8(ecx, MEM8(edi + 0x4E));
    esp = esp + 4;
    SET_LO8(ecx, LO8(ecx) + 1);
    SET_LO8(eax, LO8(ecx));
    MEM8(edi + 0x4E) = LO8(ecx);
    ecx = ZX8(MEM8(edi + 0x41));
    edx = SX8(LO8(eax));
    if (CMP_NE(edx, ecx)) goto loc_00118D20; /* jne: not equal / not zero */

loc_00118D1C: ;
    MEM8(edi + 0x4E) = 0;

loc_00118D20: ;
    SET_LO8(eax, MEM8(edi + 0x4C));
    SET_LO8(ebx, MEM8(edi + 0x4E));
    SET_LO8(eax, LO8(eax) + 1);
    MEM8(edi + 0x4C) = LO8(eax);
    SET_LO8(edx, LO8(eax));
    SET_LO8(eax, MEM8(edi + 0x4D));
    if (CMP_NE(LO8(ebx), LO8(eax))) goto loc_00118D49; /* jne: not equal / not zero */

loc_00118D34: ;
    SET_LO8(eax, LO8(eax) + 1);
    MEM8(edi + 0x4D) = LO8(eax);
    eax = SX8(LO8(eax));
    if (CMP_NE(eax, ecx)) goto loc_00118D44; /* jne: not equal / not zero */

loc_00118D40: ;
    MEM8(edi + 0x4D) = 0;

loc_00118D44: ;
    SET_LO8(edx, LO8(edx) - 1);
    MEM8(edi + 0x4C) = LO8(edx);

loc_00118D49: ;
    edx = MEM32(esp + 0x10);
    ecx = MEM32(edx + 0x568);
    if (TEST_Z(ecx, ecx)) goto loc_00118E55; /* je: equal / zero */

loc_00118D5B: ;
    eax = MEM32(esi + 0x14);
    if (TEST_Z(eax, eax)) goto loc_00118D6A; /* je: equal / zero */

loc_00118D62: ;
    ebx = eax + 0x36C;
    goto loc_00118D6C;

loc_00118D6A: ;
    ebx = 0; /* xor self */

loc_00118D6C: ;
    SET_LO8(eax, MEM8(esi + 5));
    MEM8(esp + 0x3C) = LO8(eax);
    if (CMP_NE(MEM32(ecx + 0xBC), 1)) goto loc_00118DB0; /* jne: not equal / not zero */

loc_00118D7C: ;
    xmm0 = MEMF(edx + 0x118); /* movss */
    /* comiss xmm0, MEMF(0x6490F4) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x6490F4))) goto loc_00118D93; /* jbe: below or equal (unsigned <=) */

loc_00118D8D: ;
    MEM8(esi + 5) = 0;
    goto loc_00118DE3;

loc_00118D93: ;
    xmm0 = MEMF(edx + 0x118); /* movss */
    /* comiss xmm0, MEMF(0x648D20) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x648D20))) goto loc_00118DAA; /* jbe: below or equal (unsigned <=) */

loc_00118DA4: ;
    MEM8(esi + 5) = 1;
    goto loc_00118DE3;

loc_00118DAA: ;
    MEM8(esi + 5) = 2;
    goto loc_00118DE3;

loc_00118DB0: ;
    SET_LO8(edx, MEM8(edx + 0x60));
    eax = ZX8(LO8(edx));
    PUSH32(esp, 0); sub_0004DFE0(); /* call 0x0004DFE0 */

loc_00118DBB: ;
    if (CMP_BE(LO8(edx), 3)) goto loc_00118DC6; /* jbe: below or equal (unsigned <=) */

loc_00118DC0: ;
    MEM8(esi + 5) = 1;
    goto loc_00118DDF;

loc_00118DC6: ;
    eax = MEM32(eax + 8);
    if (CMP_LE(eax, 0x14)) goto loc_00118DD4; /* jle: less or equal (signed <=) */

loc_00118DCE: ;
    MEM8(esi + 5) = 0;
    goto loc_00118DDF;

loc_00118DD4: ;
    (void)0; /* cmp eax, 0xFFFFFFECu - flags set for next jcc */
    SET_LO8(ecx, (CMP_L(eax, 0xFFFFFFECu)) ? 1 : 0); /* setl */
    SET_LO8(ecx, LO8(ecx) + 1);
    MEM8(esi + 5) = LO8(ecx);

loc_00118DDF: ;
    edx = MEM32(esp + 0x10);

loc_00118DE3: ;
    SET_LO8(eax, MEM8(esi + 5));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00118E7E; /* jne: not equal / not zero */

loc_00118DEE: ;
    if (TEST_Z(ebx, ebx)) goto loc_00118DFF; /* je: equal / zero */

loc_00118DF2: ;
    xmm0 = MEMF(0x648ECC); /* movss */
    MEMF(ebx + 4) = xmm0; /* movss */

loc_00118DFF: ;
    SET_LO8(eax, MEM8(esp + 0x3C));
    (void)0; /* cmp LO8(eax), MEM8(esi + 5) - flags set for next jcc */
    xmm0 = MEMF(0x648F08); /* movss */
    MEMF(esi + 0x1C) = xmm0; /* movss */
    if (CMP_EQ(LO8(eax), MEM8(esi + 5))) goto loc_00118E55; /* je: equal / zero */

loc_00118E15: ;
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    eax = edx;
    MEM32(esp + 0x40) = 0;
    PUSH32(esp, 0); sub_001C2970(); /* call 0x001C2970 */

loc_00118E29: ;
    esp = esp + 4;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    eax = 0x595D14;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00118E39; /* je: equal / zero */

loc_00118E35: ;
    eax = MEM32(esp + 0x3C);

loc_00118E39: ;
    ecx = MEM32(esp + 0x10);
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(edi + 4));
    PUSH32(esp, edx);
    edx = MEM32(ecx + 0x114);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = ebp;
    PUSH32(esp, 0); sub_00119C80(); /* call 0x00119C80 */

loc_00118E52: ;
    esp = esp + 0xC;

loc_00118E55: ;
    xmm0 = MEMF(esi + 0x1C); /* movss */
    xmm0 = xmm0 - MEMF(esi + 0x18); /* subss */
    xmm0 = xmm0 * MEMF(0x6495C8); /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x18); /* addss */
    POP32(esp, ebp);
    POP32(esp, edi);
    MEMF(esi + 0x18) = xmm0; /* movss */
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0x28;
    esp += 4; return; /* ret */

loc_00118E7E: ;
    if (CMP_NE(LO8(eax), 2)) goto loc_00118EA2; /* jne: not equal / not zero */

loc_00118E82: ;
    if (TEST_Z(ebx, ebx)) goto loc_00118E93; /* je: equal / zero */

loc_00118E86: ;
    xmm0 = MEMF(0x648E64); /* movss */
    MEMF(ebx + 4) = xmm0; /* movss */

loc_00118E93: ;
    xmm0 = MEMF(0x648CE4); /* movss */
    MEMF(esi + 0x1C) = xmm0; /* movss */
    goto loc_00118E55;

loc_00118EA2: ;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    xmm0 = MEMF(0x64908C); /* movss */
    MEMF(esi + 0x1C) = xmm0; /* movss */
    if (TEST_Z(ebx, ebx)) goto loc_00118E55; /* je: equal / zero */

loc_00118EB3: ;
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(ebx + 4) = xmm0; /* movss */
    goto loc_00118E55;

loc_00118EC2: ;
    eax = MEM32(esi + 0x10);
    (void)0; /* test eax, eax - flags set for next jcc */
    ecx = 0xFFFFFFFDu;
    if (TEST_Z(eax, eax)) goto loc_00118ED1; /* je: equal / zero */

loc_00118ECE: ;
    MEM32(eax + 0x64) = MEM32(eax + 0x64) & ecx;

loc_00118ED1: ;
    esi = MEM32(esi + 0x14);
    if (TEST_Z(esi, esi)) goto loc_00118EDB; /* je: equal / zero */

loc_00118ED8: ;
    MEM32(esi + 0x64) = MEM32(esi + 0x64) & ecx;

loc_00118EDB: ;
    MEM8(edi + 0x3A) = MEM8(edi + 0x3A) & 0xFB;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0x28;
    esp += 4; return; /* ret */

}

/**
 * sub_00118F00
 * Original: 0x00118F00 - 0x00118F9F (159 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00118F00(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm4, xmm6;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00118F00: ;
    esp = esp - 8;
    SET_LO8(ecx, MEM8(0x76F0E0));
    xmm6 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    eax = MEM32(esi + 0x144);
    ebp = MEM32(esi + 0x140);
    ebx = 0; /* xor self */
    (void)0; /* cmp LO8(ecx), 1 - flags set for next jcc */
    MEM32(esp + 0xC) = ebx;
    MEM32(esp + 0x10) = eax;
    if (CMP_EQ(LO8(ecx), 1)) goto loc_00118F86; /* je: equal / zero */

loc_00118F2E: ;
    eax = MEM32(eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001C2970(); /* call 0x001C2970 */

loc_00118F3A: ;
    esp = esp + 4;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00118F81; /* je: equal / zero */

loc_00118F41: ;
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
    MEMF(esp + 0x18) = xmm1; /* movss */
    xmm0 = MEMF(0x648CE4); /* movss */
    xmm4 = MEMF(esp + 0x18); /* movss */
    /* comiss xmm0, xmm4 - sets EFLAGS */
    if ((xmm0 <= xmm4)) { sub_00118F9F(); return; } /* jbe: below or equal (unsigned <=) */

loc_00118F81: ;
    xmm4 = xmm6; /* movaps */
    g_seh_ebp = ebp; sub_00118FBE(); return; /* tail jmp 0x00118FBE */

loc_00118F86: ;
    edx = MEM32(0x8470DC);
    if (TEST_NZ(MEM8(edx + 0x420), 4)) goto loc_00118F81; /* jne: not equal / not zero */

loc_00118F95: ;
    xmm4 = MEMF(0x648F8C); /* movss */
    g_seh_ebp = ebp; sub_00118FBE(); return; /* tail jmp 0x00118FBE */

}

/**
 * sub_00119140
 * Original: 0x00119140 - 0x001198CD (1933 bytes, 541 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00119140(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00119140: ;
    esp = esp - 0x4C;
    eax = MEM32(0x771760);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x58);
    MEM32(esp + 0x2C) = eax;
    SET_LO8(eax, MEM8(edi + 0x4C));
    ebp = 0; /* xor self */
    (void)0; /* cmp LO8(eax), 2 - flags set for next jcc */
    MEM32(esp + 0x14) = ebp;
    if (CMP_L(LO8(eax), 2)) goto loc_001198C7; /* jl: less (signed <) */

loc_00119163: ;
    eax = MEM32(edi + 0x144);
    ecx = MEM32(edi + 0x140);
    eax = MEM32(eax);
    MEM32(esp + 0x20) = ecx;
    if (CMP_EQ(MEM32(eax + 0x3C8), ebp)) goto loc_001198C7; /* je: equal / zero */

loc_00119181: ;
    SET_LO8(edx, MEM8(eax + 0x16E));
    SET_LO8(edx, LO8(edx) & 0xF);
    if (CMP_EQ(LO8(edx), 0xF)) goto loc_001198C7; /* je: equal / zero */

loc_00119193: ;
    edx = ZX8(MEM8(edi + 0x41));
    edx = edx + 5;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x54);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x64);
    eax = esp + 0x13;
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = edi + 0x130;
    eax = esi;
    PUSH32(esp, 0); sub_00112680(); /* call 0x00112680 */

loc_001191BB: ;
    SET_LO8(eax, MEM8(esp + 0x1F));
    esp = esp + 0xC;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    SET_LO8(ecx, 0xFF);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00119260; /* je: equal / zero */

loc_001191CC: ;
    ebx = ZX8(MEM8(edi + 0x41));
    eax = SX16(LO16(esi));
    eax = MEM32(edi + eax * 4 + 0x130);
    ebx = ebx + ebx + 0xA;
    edx = 0; /* xor self */
    if (CMP_LE(ebx & ebx, 0)) goto loc_00119260; /* jle: less or equal (signed <=) */

loc_001191E4: ;
    xmm1 = MEMF(0x648D1C); /* movss */
    xmm2 = MEMF(0x64B274); /* movss */
    xmm3 = MEMF(0x64B270); /* movss */
    eax = eax + 0x14;
    /* nop */

loc_00119200: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(eax + -4) = xmm1; /* movss */
    MEMF(eax) = xmm0; /* movss */
    MEM16(eax + 4) = LO16(ebp);
    MEM8(eax + -8) = LO8(ecx);
    MEM8(eax + -7) = LO8(ecx);
    MEM8(eax + -6) = LO8(ecx);
    MEM8(eax + -5) = LO8(ecx);
    MEMF(eax + 0x18) = xmm2; /* movss */
    MEMF(eax + 0x1C) = xmm0; /* movss */
    MEM16(eax + 0x20) = LO16(ebp);
    MEM8(eax + 0x14) = LO8(ecx);
    MEM8(eax + 0x15) = LO8(ecx);
    MEM8(eax + 0x16) = LO8(ecx);
    MEM8(eax + 0x17) = LO8(ecx);
    MEMF(eax + 0x34) = xmm3; /* movss */
    MEMF(eax + 0x38) = xmm0; /* movss */
    MEM16(eax + 0x3C) = LO16(ebp);
    MEM8(eax + 0x30) = LO8(ecx);
    MEM8(eax + 0x31) = LO8(ecx);
    MEM8(eax + 0x32) = LO8(ecx);
    MEM8(eax + 0x33) = LO8(ecx);
    ebx = ZX8(MEM8(edi + 0x41));
    eax = eax + 0x54;
    edx++;
    ebx = ebx + ebx + 0xA;
    if (CMP_L(edx, ebx)) goto loc_00119200; /* jl: less (signed <) */

loc_00119260: ;
    edx = MEM32(0x8470DC);
    ecx = SX16(LO16(esi));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x770);
    ebx = ecx + edx + 0x330;
    SET_LO8(eax, 2);
    MEM32(esp + 0x24) = ebx;
    PUSH32(esp, 0); sub_000D9910(); /* call 0x000D9910 */

loc_00119281: ;
    esi = eax;
    SET_LO8(eax, MEM8(0x75BD14));
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_00119324; /* jbe: below or equal (unsigned <=) */

loc_00119290: ;
    ebp = MEM32(0x75BD10);
    eax = MEM32(ebp + 8);
    if (TEST_NZ(eax, eax)) goto loc_001192C6; /* jne: not equal / not zero */

loc_0011929D: ;
    eax = MEM32(ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5E0D08);
    PUSH32(esp, 0x14);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_0005E4E0(); /* call 0x0005E4E0 */

loc_001192AF: ;
    esp = esp + 0xC;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_001192B7: ;
    ecx = MEM32(0x75BD10);
    MEM32(ecx + 8) = eax;
    ebp = MEM32(0x75BD10);

loc_001192C6: ;
    eax = MEM32(ebp + 0x10);
    if (TEST_NZ(eax, eax)) goto loc_001192F2; /* jne: not equal / not zero */

loc_001192CD: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, 0); sub_0034F320(); /* call 0x0034F320 */

loc_001192D5: ;
    MEM32(ebp + 0x10) = eax;
    ebp = MEM32(0x75BD10);
    eax = MEM32(ebp + 0x10);
    if (TEST_NZ(eax, eax)) goto loc_001192F2; /* jne: not equal / not zero */

loc_001192E5: ;
    MEM32(ebp + 0x10) = 0xFFFFFFFFu;
    ebp = MEM32(0x75BD10);

loc_001192F2: ;
    ecx = MEM32(ebp + 0x10);
    if (CMP_NE(ecx, 0xFFFFFFFFu)) goto loc_0011931C; /* jne: not equal / not zero */

loc_001192FA: ;
    ecx = MEM32(ebp + 4);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = ebp + 4;
    if (TEST_NZ(ecx, ecx)) goto loc_00119317; /* jne: not equal / not zero */

loc_00119304: ;
    edx = MEM32(ebp);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00075E90(); /* call 0x00075E90 */

loc_0011930E: ;
    ebp = MEM32(0x75BD10);
    esp = esp + 8;

loc_00119317: ;
    ebp = MEM32(ebp + 4);
    goto loc_00119324;

loc_0011931C: ;
    PUSH32(esp, 0); sub_0034F360(); /* call 0x0034F360 */

loc_00119321: ;
    ebp = MEM32(eax + 4);

loc_00119324: ;
    if (CMP_EQ(MEM32(esi + 0x3838), ebp)) goto loc_00119337; /* je: equal / zero */

loc_0011932C: ;
    PUSH32(esp, 0); sub_0013C160(); /* call 0x0013C160 */

loc_00119331: ;
    MEM32(esi + 0x3838) = ebp;

loc_00119337: ;
    eax = (uint32_t)(int32_t)SMEM8(edi + 0x4E);
    eax--;
    if (((int32_t)eax >= 0)) goto loc_00119343; /* jns: not sign (positive) */

loc_0011933E: ;
    eax = ZX8(MEM8(edi + 0x41));
    eax--;

loc_00119343: ;
    ecx = eax + -1;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esp + 0x14) = ecx;
    if (CMP_GE(ecx & ecx, 0)) goto loc_00119357; /* jge: greater or equal (signed >=) */

loc_0011934E: ;
    ecx = ZX8(MEM8(edi + 0x41));
    ecx--;
    MEM32(esp + 0x14) = ecx;

loc_00119357: ;
    edx = eax + eax * 4;
    eax = MEM32(esp + 0x28);
    edx = eax + edx * 4;
    edi = edx;
    ebp = MEM32(edi);
    ecx = ecx + ecx * 4;
    xmm0 = MEMF(eax + ecx * 4 + 0x10); /* movss */
    eax = eax + ecx * 4;
    MEM32(esp + 0x50) = ebp;
    ebp = MEM32(edi + 4);
    edi = MEM32(edi + 8);
    xmm4 = MEMF(esp + 0x50); /* movss */
    MEM32(esp + 0x58) = edi;
    ecx = eax;
    edi = MEM32(ecx);
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x58); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm0 = xmm0 - MEMF(ebx + 8); /* subss */
    MEM32(esp + 0x44) = edi;
    edi = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    xmm1 = xmm0; /* movaps */
    MEM32(esp + 0x54) = ebp;
    xmm3 = MEMF(esp + 0x54); /* movss */
    xmm7 = xmm3; /* movaps */
    xmm3 = xmm3 - MEMF(ebx + 4); /* subss */
    xmm5 = xmm3; /* movaps */
    MEM32(esp + 0x48) = edi;
    xmm7 = xmm7 - MEMF(esp + 0x48); /* subss */
    MEM32(esp + 0x4C) = ecx;
    xmm2 = xmm2 - MEMF(esp + 0x4C); /* subss */
    xmm5 = xmm5 * xmm2; /* mulss */
    xmm6 = xmm4; /* movaps */
    xmm4 = xmm4 - MEMF(ebx); /* subss */
    xmm6 = xmm6 - MEMF(esp + 0x44); /* subss */
    xmm1 = xmm1 * xmm7; /* mulss */
    xmm1 = xmm1 - xmm5; /* subss */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm5 = xmm4; /* movaps */
    xmm5 = xmm5 * xmm2; /* mulss */
    xmm5 = xmm5 - xmm0; /* subss */
    xmm3 = xmm3 * xmm6; /* mulss */
    xmm4 = xmm4 * xmm7; /* mulss */
    xmm3 = xmm3 - xmm4; /* subss */
    xmm0 = xmm3; /* movaps */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm2 = xmm5; /* movaps */
    xmm2 = xmm2 * xmm5; /* mulss */
    xmm0 = xmm0 + xmm2; /* addss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * xmm1; /* mulss */
    MEMF(esp + 0x38) = xmm1; /* movss */
    xmm1 = 0.0f; /* xorps self = zero */
    xmm0 = xmm0 + xmm2; /* addss */
    /* ucomiss xmm0, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(esp + 0x3C) = xmm5; /* movss */
    MEMF(esp + 0x40) = xmm3; /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    if (1 /* jnp after test - parity */) goto loc_00119481; /* jnp: not parity */

loc_00119448: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    /* FPU: fdivr dword ptr [edx + 0x10] */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x38) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    xmm0 = MEMF(esp + 0x38); /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_popp(); /* fstp */
    xmm2 = MEMF(esp + 0x3C); /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x40) = (float)fp_top(); fp_popp(); /* fstp */
    xmm1 = MEMF(esp + 0x40); /* movss */
    goto loc_00119487;

loc_00119481: ;
    xmm0 = xmm1; /* movaps */
    xmm2 = xmm1; /* movaps */

loc_00119487: ;
    eax = (int32_t)MEMF(esp + 0x50); /* cvttss2si */
    ecx = (int32_t)MEMF(esp + 0x54); /* cvttss2si */
    ebp = (int32_t)xmm0; /* cvttss2si */
    edi = eax + ebp;
    xmm0 = (float)(int32_t)edi; /* cvtsi2ss */
    edi = MEM32(esp + 0x1C);
    MEMF(edi) = xmm0; /* movss */
    ebx = (int32_t)xmm2; /* cvttss2si */
    MEM32(esp + 0x30) = ebx;
    ebx = ebx + ecx;
    xmm0 = (float)(int32_t)ebx; /* cvtsi2ss */
    MEMF(edi + 4) = xmm0; /* movss */
    edx = (int32_t)xmm1; /* cvttss2si */
    MEM32(esp + 0x20) = edx;
    edx = (int32_t)MEMF(esp + 0x58); /* cvttss2si */
    ebx = MEM32(esp + 0x20);
    ebx = ebx + edx;
    xmm0 = (float)(int32_t)ebx; /* cvtsi2ss */
    ebx = MEM32(esp + 0x30);
    MEMF(edi + 8) = xmm0; /* movss */
    edi = edi + 0x1C;
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(edi) = xmm0; /* movss */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(edi + 4) = xmm0; /* movss */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(edi + 8) = xmm0; /* movss */
    edi = edi + 0x1C;
    eax = eax - ebp;
    ecx = ecx - ebx;
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(edi) = xmm0; /* movss */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = MEM32(esp + 0x20);
    MEMF(edi + 4) = xmm0; /* movss */
    edx = edx - ecx;
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(edi + 8) = xmm0; /* movss */
    edi = edi + 0x1C;

loc_00119521: ;
    eax = MEM32(esp + 0x24);
    xmm2 = MEMF(esp + 0x4C); /* movss */
    xmm0 = MEMF(esp + 0x48); /* movss */
    xmm6 = MEMF(esp + 0x54); /* movss */
    xmm7 = MEMF(esp + 0x58); /* movss */
    xmm1 = MEMF(esp + 0x44); /* movss */
    xmm5 = MEMF(esp + 0x50); /* movss */
    xmm6 = xmm6 - xmm0; /* subss */
    xmm0 = xmm0 - MEMF(eax + 4); /* subss */
    xmm5 = xmm5 - xmm1; /* subss */
    xmm1 = xmm1 - MEMF(eax); /* subss */
    xmm7 = xmm7 - xmm2; /* subss */
    xmm2 = xmm2 - MEMF(eax + 8); /* subss */
    xmm4 = xmm0; /* movaps */
    xmm4 = xmm4 * xmm7; /* mulss */
    xmm3 = xmm2; /* movaps */
    xmm3 = xmm3 * xmm6; /* mulss */
    xmm3 = xmm3 - xmm4; /* subss */
    xmm4 = xmm1; /* movaps */
    xmm1 = xmm1 * xmm6; /* mulss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 - xmm1; /* subss */
    xmm4 = xmm4 * xmm7; /* mulss */
    xmm2 = xmm2 * xmm5; /* mulss */
    xmm4 = xmm4 - xmm2; /* subss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    xmm0 = xmm0 * xmm0; /* mulss */
    xmm1 = xmm4; /* movaps */
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = xmm3; /* movaps */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = 0.0f; /* xorps self = zero */
    /* ucomiss xmm0, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(esp + 0x38) = xmm3; /* movss */
    MEMF(esp + 0x3C) = xmm4; /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    if (1 /* jnp after test - parity */) goto loc_00119608; /* jnp: not parity */

loc_001195CE: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    /* FPU: fdivr dword ptr [esp + 0x2c] */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x38) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    xmm0 = MEMF(esp + 0x38); /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_popp(); /* fstp */
    xmm2 = MEMF(esp + 0x3C); /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x40) = (float)fp_top(); fp_popp(); /* fstp */
    xmm1 = MEMF(esp + 0x40); /* movss */
    goto loc_0011960E;

loc_00119608: ;
    xmm0 = xmm1; /* movaps */
    xmm2 = xmm1; /* movaps */

loc_0011960E: ;
    edx = (int32_t)MEMF(esp + 0x4C); /* cvttss2si */
    ebp = (int32_t)xmm0; /* cvttss2si */
    eax = (int32_t)xmm2; /* cvttss2si */
    MEM32(esp + 0x20) = eax;
    eax = (int32_t)MEMF(esp + 0x44); /* cvttss2si */
    ebx = eax + ebp;
    xmm0 = (float)(int32_t)ebx; /* cvtsi2ss */
    ebx = MEM32(esp + 0x20);
    MEMF(edi) = xmm0; /* movss */
    ecx = (int32_t)xmm1; /* cvttss2si */
    MEM32(esp + 0x1C) = ecx;
    ecx = (int32_t)MEMF(esp + 0x48); /* cvttss2si */
    ebx = ebx + ecx;
    xmm0 = (float)(int32_t)ebx; /* cvtsi2ss */
    ebx = MEM32(esp + 0x1C);
    MEMF(edi + 4) = xmm0; /* movss */
    ebx = ebx + edx;
    xmm0 = (float)(int32_t)ebx; /* cvtsi2ss */
    ebx = MEM32(esp + 0x20);
    MEMF(edi + 8) = xmm0; /* movss */
    edi = edi + 0x1C;
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(edi) = xmm0; /* movss */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(edi + 4) = xmm0; /* movss */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(edi + 8) = xmm0; /* movss */
    edi = edi + 0x1C;
    eax = eax - ebp;
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(edi) = xmm0; /* movss */
    ecx = ecx - ebx;
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    edx = edx - MEM32(esp + 0x1C);
    MEMF(edi + 4) = xmm0; /* movss */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(edi + 8) = xmm0; /* movss */
    edi = edi + 0x1C;
    PUSH32(esp, 0xFF);
    edx = edi + -168;
    PUSH32(esp, edx);
    eax = 6;
    ecx = esi;
    PUSH32(esp, 0); sub_0013BB50(); /* call 0x0013BB50 */

loc_001196BE: ;
    eax = MEM32(esi + 0x24);
    eax = eax + 3;
    (void)0; /* cmp eax, 0x3FF - flags set for next jcc */
    ebx = 0x1FF;
    if (CMP_GE(eax, 0x3FF)) goto loc_001196D5; /* jge: greater or equal (signed >=) */

loc_001196D0: ;
    if (CMP_L(MEM32(esi + 0x20), ebx)) goto loc_001196DA; /* jl: less (signed <) */

loc_001196D5: ;
    PUSH32(esp, 0); sub_0013C160(); /* call 0x0013C160 */

loc_001196DA: ;
    ecx = MEM32(esi + 0x24);
    edx = MEM32(esi + 0x28);
    SET_LO16(eax, MEM16(esi + 0x30));
    MEM16(edx + ecx * 2) = LO16(eax);
    ebp = MEM32(esi + 0x24);
    SET_LO16(ecx, MEM16(esi + 0x30));
    edx = MEM32(esi + 0x28);
    ebp++;
    SET_LO16(ecx, LO16(ecx) + 1);
    MEM32(esi + 0x24) = ebp;
    eax = ebp;
    MEM16(edx + eax * 2) = LO16(ecx);
    eax = MEM32(esi + 0x24);
    SET_LO16(ecx, MEM16(esi + 0x30));
    edx = MEM32(esi + 0x28);
    eax++;
    MEM32(esi + 0x24) = eax;
    SET_LO16(ecx, LO16(ecx) + 3);
    MEM16(edx + eax * 2) = LO16(ecx);
    edx = MEM32(esi + 0x24);
    edx++;
    eax = edx;
    eax = eax + 3;
    (void)0; /* cmp eax, 0x3FF - flags set for next jcc */
    MEM32(esi + 0x24) = edx;
    if (CMP_GE(eax, 0x3FF)) goto loc_0011972C; /* jge: greater or equal (signed >=) */

loc_00119727: ;
    if (CMP_L(MEM32(esi + 0x20), ebx)) goto loc_00119731; /* jl: less (signed <) */

loc_0011972C: ;
    PUSH32(esp, 0); sub_0013C160(); /* call 0x0013C160 */

loc_00119731: ;
    SET_LO16(eax, MEM16(esi + 0x30));
    ecx = MEM32(esi + 0x24);
    edx = MEM32(esi + 0x28);
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(edx + ecx * 2) = LO16(eax);
    ebp = MEM32(esi + 0x24);
    SET_LO16(ecx, MEM16(esi + 0x30));
    edx = MEM32(esi + 0x28);
    ebp++;
    SET_LO16(ecx, LO16(ecx) + 4);
    MEM32(esi + 0x24) = ebp;
    eax = ebp;
    MEM16(edx + eax * 2) = LO16(ecx);
    eax = MEM32(esi + 0x24);
    SET_LO16(ecx, MEM16(esi + 0x30));
    edx = MEM32(esi + 0x28);
    eax++;
    MEM32(esi + 0x24) = eax;
    SET_LO16(ecx, LO16(ecx) + 3);
    MEM16(edx + eax * 2) = LO16(ecx);
    edx = MEM32(esi + 0x24);
    edx++;
    eax = edx;
    eax = eax + 3;
    (void)0; /* cmp eax, 0x3FF - flags set for next jcc */
    MEM32(esi + 0x24) = edx;
    if (CMP_GE(eax, 0x3FF)) goto loc_00119787; /* jge: greater or equal (signed >=) */

loc_00119782: ;
    if (CMP_L(MEM32(esi + 0x20), ebx)) goto loc_0011978C; /* jl: less (signed <) */

loc_00119787: ;
    PUSH32(esp, 0); sub_0013C160(); /* call 0x0013C160 */

loc_0011978C: ;
    SET_LO16(eax, MEM16(esi + 0x30));
    ecx = MEM32(esi + 0x24);
    edx = MEM32(esi + 0x28);
    SET_LO16(eax, LO16(eax) + 2);
    MEM16(edx + ecx * 2) = LO16(eax);
    ebp = MEM32(esi + 0x24);
    SET_LO16(ecx, MEM16(esi + 0x30));
    edx = MEM32(esi + 0x28);
    ebp++;
    SET_LO16(ecx, LO16(ecx) + 1);
    MEM32(esi + 0x24) = ebp;
    eax = ebp;
    MEM16(edx + eax * 2) = LO16(ecx);
    eax = MEM32(esi + 0x24);
    SET_LO16(ecx, MEM16(esi + 0x30));
    edx = MEM32(esi + 0x28);
    eax++;
    MEM32(esi + 0x24) = eax;
    SET_LO16(ecx, LO16(ecx) + 5);
    MEM16(edx + eax * 2) = LO16(ecx);
    edx = MEM32(esi + 0x24);
    edx++;
    eax = edx;
    eax = eax + 3;
    (void)0; /* cmp eax, 0x3FF - flags set for next jcc */
    MEM32(esi + 0x24) = edx;
    if (CMP_GE(eax, 0x3FF)) goto loc_001197E2; /* jge: greater or equal (signed >=) */

loc_001197DD: ;
    if (CMP_L(MEM32(esi + 0x20), ebx)) goto loc_001197E7; /* jl: less (signed <) */

loc_001197E2: ;
    PUSH32(esp, 0); sub_0013C160(); /* call 0x0013C160 */

loc_001197E7: ;
    ecx = MEM32(esi + 0x24);
    SET_LO16(eax, MEM16(esi + 0x30));
    edx = MEM32(esi + 0x28);
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(edx + ecx * 2) = LO16(eax);
    ebx = MEM32(esi + 0x24);
    SET_LO16(ecx, MEM16(esi + 0x30));
    edx = MEM32(esi + 0x28);
    ebx++;
    SET_LO16(ecx, LO16(ecx) + 4);
    MEM32(esi + 0x24) = ebx;
    eax = ebx;
    MEM16(edx + eax * 2) = LO16(ecx);
    eax = MEM32(esi + 0x24);
    SET_LO16(ecx, MEM16(esi + 0x30));
    edx = MEM32(esi + 0x28);
    eax++;
    MEM32(esi + 0x24) = eax;
    SET_LO16(ecx, LO16(ecx) + 5);
    MEM16(edx + eax * 2) = LO16(ecx);
    eax = MEM32(esp + 0x14);
    ebx = MEM32(esi + 0x24);
    ebx++;
    ecx = eax;
    eax--;
    MEM32(esi + 0x24) = ebx;
    MEM32(esp + 0x14) = eax;
    if (((int32_t)eax >= 0)) goto loc_00119846; /* jns: not sign (positive) */

loc_00119839: ;
    eax = MEM32(esp + 0x60);
    eax = ZX8(MEM8(eax + 0x41));
    eax--;
    MEM32(esp + 0x14) = eax;

loc_00119846: ;
    edx = MEM32(esp + 0x60);
    edx = (uint32_t)(int32_t)SMEM8(edx + 0x4D);
    (void)0; /* cmp ecx, edx - flags set for next jcc */
    MEM32(esp + 0x30) = edx;
    if (CMP_EQ(ecx, edx)) goto loc_001198A8; /* je: equal / zero */

loc_00119856: ;
    edx = MEM32(esp + 0x28);
    ebx = ecx + ecx * 4;
    ebx = edx + ebx * 4;
    ebp = MEM32(ebx);
    MEM32(esp + 0x50) = ebp;
    ebp = MEM32(ebx + 4);
    ebx = MEM32(ebx + 8);
    eax = eax + eax * 4;
    xmm0 = MEMF(edx + eax * 4 + 0x10); /* movss */
    eax = edx + eax * 4;
    MEM32(esp + 0x58) = ebx;
    edx = eax;
    ebx = MEM32(edx);
    MEM32(esp + 0x44) = ebx;
    ebx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(esp + 0x4C) = edx;
    edx = MEM32(esp + 0x30);
    (void)0; /* cmp ecx, edx - flags set for next jcc */
    MEM32(esp + 0x54) = ebp;
    MEM32(esp + 0x48) = ebx;
    MEMF(esp + 0x2C) = xmm0; /* movss */
    if (CMP_NE(ecx, edx)) goto loc_00119521; /* jne: not equal / not zero */

loc_001198A8: ;
    PUSH32(esp, 0); sub_0013C160(); /* call 0x0013C160 */

loc_001198AD: ;
    esi = MEM32(esp + 0x34);
    if (CMP_EQ(MEM32(0x771760), esi)) goto loc_001198C5; /* je: equal / zero */

loc_001198B9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_001198BF: ;
    MEM32(0x771760) = esi;

loc_001198C5: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_001198C7: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp = esp + 0x4C;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_001198D0
 * Original: 0x001198D0 - 0x001199D2 (258 bytes, 97 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001198D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001198D0: ;
    eax = MEM32(esp + 0xC);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = MEM32(edi + 0x144);
    if (TEST_Z(eax, eax)) { sub_001199D2(); return; } /* je: equal / zero */

loc_001198E8: ;
    if (CMP_EQ(eax, 0x2E)) { sub_001199D2(); return; } /* je: equal / zero */

loc_001198F1: ;
    if (CMP_EQ(eax, 3)) { sub_001199D2(); return; } /* je: equal / zero */

loc_001198FA: ;
    if (CMP_NE(eax, 0x2D)) goto loc_00119968; /* jne: not equal / not zero */

loc_001198FF: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(esi);
    ecx = MEM32(eax);
    (void)0; /* cmp edx, ecx - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    if (CMP_NE(edx, ecx)) goto loc_0011996B; /* jne: not equal / not zero */

loc_0011990D: ;
    ecx = MEM32(eax + 4);
    MEM32(esi) = ecx;
    SET_LO8(edx, MEM8(eax + 9));
    edi = ecx;
    MEM8(esi + 4) = LO8(edx);
    SET_LO8(eax, MEM8(edi + 0x10B));
    ebp = 0; /* xor self */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00119961; /* je: equal / zero */

loc_00119926: ;
    eax = MEM32(0x847200);
    if (TEST_Z(eax, eax)) goto loc_00119961; /* je: equal / zero */

loc_0011992F: ;
    /* nop */

loc_00119930: ;
    SET_LO8(edx, MEM8(edi + 0x10B));
    (void)0; /* cmp MEM8(eax), LO8(edx) - flags set for next jcc */
    ecx = MEM32(eax + 0xE0);
    if (CMP_NE(MEM8(eax), LO8(edx))) goto loc_0011995B; /* jne: not equal / not zero */

loc_00119940: ;
    ebx = MEM32(edi + 0x68);
    edx = 0; /* xor self */
    (void)0; /* cmp ebx, 0x48 - flags set for next jcc */
    ebx = ZX16(MEM16(eax + 0xA));
    SET_LO8(edx, (CMP_EQ(ebx, 0x48)) ? 1 : 0); /* sete */
    edx = edx + 0x79;
    if (CMP_NE(ebx, edx)) goto loc_0011995B; /* jne: not equal / not zero */

loc_00119956: ;
    if (TEST_Z(ebp, ebp)) goto loc_00119963; /* je: equal / zero */

loc_0011995A: ;
    ebp--;

loc_0011995B: ;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = ecx;
    if (TEST_NZ(ecx, ecx)) goto loc_00119930; /* jne: not equal / not zero */

loc_00119961: ;
    eax = 0; /* xor self */

loc_00119963: ;
    MEM32(esi + 0xC) = eax;

loc_00119966: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00119968: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0011996B: ;
    if (CMP_NE(edx, MEM32(eax + 4))) goto loc_00119966; /* jne: not equal / not zero */

loc_00119970: ;
    MEM32(esi) = ecx;
    SET_LO8(eax, MEM8(eax + 8));
    edi = ecx;
    MEM8(esi + 4) = LO8(eax);
    SET_LO8(edx, MEM8(edi + 0x10B));
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    MEM32(esp + 0x14) = 0;
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_00119961; /* je: equal / zero */

loc_0011998C: ;
    eax = MEM32(0x847200);
    if (TEST_Z(eax, eax)) goto loc_00119961; /* je: equal / zero */

loc_00119995: ;
    (void)0; /* cmp MEM8(eax), LO8(edx) - flags set for next jcc */
    ecx = MEM32(eax + 0xE0);
    if (CMP_NE(MEM8(eax), LO8(edx))) goto loc_001199C4; /* jne: not equal / not zero */

loc_0011999F: ;
    ebp = MEM32(edi + 0x68);
    ebx = 0; /* xor self */
    (void)0; /* cmp ebp, 0x48 - flags set for next jcc */
    ebp = ZX16(MEM16(eax + 0xA));
    SET_LO8(ebx, (CMP_EQ(ebp, 0x48)) ? 1 : 0); /* sete */
    ebx = ebx + 0x79;
    if (CMP_NE(ebp, ebx)) goto loc_001199C4; /* jne: not equal / not zero */

loc_001199B5: ;
    ebx = MEM32(esp + 0x14);
    if (TEST_Z(ebx, ebx)) goto loc_00119963; /* je: equal / zero */

loc_001199BD: ;
    eax = ebx;
    eax--;
    MEM32(esp + 0x14) = eax;

loc_001199C4: ;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = ecx;
    if (TEST_NZ(ecx, ecx)) goto loc_00119995; /* jne: not equal / not zero */

loc_001199CA: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, edi);
    MEM32(esi + 0xC) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00119A30
 * Original: 0x00119A30 - 0x00119A7B (75 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00119A30(void)
{
    int _flags = 0; /* fallback flag var */

loc_00119A30: ;
    esp = esp - 0x10;
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x3C8);
    if (TEST_Z(esi, esi)) { sub_00119A7B(); return; } /* je: equal / zero */

loc_00119A3E: ;
    MEM32(esp + 8) = ecx;
    PUSH32(esp, 2);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x20);
    MEM32(esp + 0xC) = edx;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    MEM32(esp + 0x1C) = 0x596254;
    MEM32(esp + 0x20) = 0x596260;
    PUSH32(esp, 0); sub_00111F90(); /* call 0x00111F90 */

loc_00119A6E: ;
    esp = esp + 0x10;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(LO8(eax), LO8(eax))) ? 1 : 0); /* setne */
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00119AD0
 * Original: 0x00119AD0 - 0x00119B02 (50 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00119AD0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00119AD0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    eax = ebx;
    PUSH32(esp, 0); sub_00119B40(); /* call 0x00119B40 */

loc_00119ADC: ;
    eax = ebx + 0x130;
    PUSH32(esp, 0); sub_001126F0(); /* call 0x001126F0 */

loc_00119AE7: ;
    PUSH32(esp, 0); sub_0017A450(); /* call 0x0017A450 */

loc_00119AEC: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_00119B02(); return; } /* jne: not equal / not zero */

loc_00119AF5: ;
    eax = ebx;
    edx = 1;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_000DA5E0(); return; /* tail jmp 0x000DA5E0 */

}

/**
 * sub_00119B10
 * Original: 0x00119B10 - 0x00119B37 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00119B10(void)
{

loc_00119B10: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    eax = ebx;
    PUSH32(esp, 0); sub_00119B40(); /* call 0x00119B40 */

loc_00119B1C: ;
    eax = ebx + 0x130;
    PUSH32(esp, 0); sub_001126F0(); /* call 0x001126F0 */

loc_00119B27: ;
    PUSH32(esp, 0); sub_0017A450(); /* call 0x0017A450 */

loc_00119B2C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_000DAE40(); /* call 0x000DAE40 */

loc_00119B32: ;
    esp = esp + 4;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00119B40
 * Original: 0x00119B40 - 0x00119BD6 (150 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00119B40(void)
{
    int _flags = 0; /* fallback flag var */

loc_00119B40: ;
    ecx = MEM32(0x847024);
    edx = MEM32(ecx + 0x40);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x144);
    PUSH32(esp, 0x5B3);
    PUSH32(esp, edx);
    eax = edi;
    ecx = 0xE;
    PUSH32(esp, 0); sub_00025660(); /* call 0x00025660 */

loc_00119B63: ;
    esi = MEM32(edi + 0x10);
    if (TEST_Z(esi, esi)) goto loc_00119BA2; /* je: equal / zero */

loc_00119B6A: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00119BA2; /* jne: not equal / not zero */

loc_00119B73: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_00119B7A: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_00119BA2; /* jl: less (signed <) */

loc_00119B81: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) goto loc_00119B96; /* je: equal / zero */

loc_00119B8E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00119B91: ;
    esp = esp + 4;
    goto loc_00119BA2;

loc_00119B96: ;
    edx = 1;
    eax = esi;
    PUSH32(esp, 0); sub_000DA5E0(); /* call 0x000DA5E0 */

loc_00119BA2: ;
    edi = MEM32(edi + 0x14);
    if (TEST_Z(edi, edi)) goto loc_00119BD3; /* je: equal / zero */

loc_00119BA9: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00119BD3; /* jne: not equal / not zero */

loc_00119BB2: ;
    edx = edi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_00119BB9: ;
    eax = MEM32(edi);
    if (CMP_L(eax, 2)) goto loc_00119BD3; /* jl: less (signed <) */

loc_00119BC0: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) { sub_00119BD6(); return; } /* je: equal / zero */

loc_00119BCD: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00119BD0: ;
    esp = esp + 4;

loc_00119BD3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00119C80
 * Original: 0x00119C80 - 0x00119F4A (714 bytes, 167 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00119C80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm6;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00119C80: ;
    esp = esp - 0x80;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    MEM32(esp + 0x3C) = 0x303;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00119C99: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xB;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    xmm0 = 0.0f; /* xorps self = zero */
    ecx = MEM32(edi + 4);
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x4C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x98); /* movss */
    xmm0 = xmm0 * MEMF(0x6491F8); /* mulss */
    MEM32(esp + 0x5C) = ecx;
    ecx = MEM32(0x595D14);
    ebp = (int32_t)xmm0; /* cvttss2si */
    SET_LO16(ebp, (uint32_t)((int32_t)LO16(ebp) >> 8));
    MEM32(esp + 0x64) = ecx;
    ecx = MEM32(0x595D1C);
    SET_LO8(eax, 0xFF);
    ebx = 0; /* xor self */
    MEM32(esp + 0x6C) = ecx;
    SET_LO8(ecx, LO8(ecx) | 0xFF);
    MEM8(esp + 0x20) = LO8(eax);
    MEM8(esp + 0x21) = LO8(eax);
    MEM8(esp + 0x22) = LO8(eax);
    MEM16(esp + 0x44) = 0xA;
    MEM16(esp + 0x46) = 0x19;
    MEM16(esp + 0x48) = 1;
    MEM32(esp + 0x80) = 0x4C207;
    MEM8(esp + 0x88) = LO8(ecx);
    esi = edx;
    edx = MEM32(edi);
    MEM32(esp + 0x58) = edx;
    edx = MEM32(edi + 8);
    esi = esi + 0xA;
    MEM32(esp + 0x60) = edx;
    edx = MEM32(0x595D18);
    MEM32(esp + 0x10) = esi;
    MEM32(esp + 0x68) = edx;
    MEM8(esp + 0x89) = LO8(ecx);
    MEM8(esp + 0x8A) = LO8(ecx);
    MEM8(esp + 0x8B) = LO8(ebx);
    MEM32(esp + 0x84) = ebx;
    MEM8(esp + 0x8C) = LO8(eax);
    ebp = ebp + 0x40;

loc_00119D72: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00119D77: ;
    xmm6 = xmm0; /* movaps */
    xmm6 = xmm6 * MEMF(0x64A08C); /* mulss */
    xmm6 = xmm6 + MEMF(0x64A088); /* addss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00119D8F: ;
    eax = eax & 0x80000003u;
    if (((int32_t)eax >= 0)) goto loc_00119D9B; /* jns: not sign (positive) */

loc_00119D96: ;
    eax--;
    eax = eax | 0xFFFFFFFCu;
    eax++;

loc_00119D9B: ;
    edx = MEM32(eax * 4 + 0x596244);
    MEM32(esp + 0x40) = edx;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00119DAB: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x12;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = edx + 0x1B;
    MEM16(esp + 0x14) = LO16(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00119DC0: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x9C;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + 0x64);
    MEM8(esp + 0x23) = LO8(edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00119DD4: ;
    xmm0 = xmm0 * MEMF(0x64A084); /* mulss */
    xmm0 = xmm0 + MEMF(0x64A080); /* addss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    MEMF(esp + 0x50) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00119DF5: ;
    xmm0 = xmm0 * MEMF(0x648CE4); /* mulss */
    xmm0 = xmm0 + MEMF(0x648D1C); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00119E10: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x51;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = edx - 0x40;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00119E21: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x82;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edi = esp + 0x78;
    edx = edx + ebp;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00110510(); /* call 0x00110510 */

loc_00119E35: ;
    eax = MEM32(esp + 0xA0);
    xmm0 = MEMF(eax); /* movss */
    xmm1 = MEMF(esp + 0x7C); /* movss */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm1 = xmm1 - xmm0; /* subss */
    xmm0 = MEMF(eax + 8); /* movss */
    MEMF(esp + 0x7C) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x84); /* movss */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm1 = xmm1 - xmm0; /* subss */
    esp = esp + 0xC;
    MEMF(esp + 0x78) = xmm1; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00119E78: ;
    xmm0 = xmm0 * MEMF(0x64A07C); /* mulss */
    xmm0 = xmm0 - MEMF(0x64A078); /* subss */
    MEMF(esp + 0x7C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00119E93: ;
    edi = eax;
    edi = edi & 1;
    edi = edi << 1;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00119E9F: ;
    edx = MEM32(esp + 0x80);
    eax = eax & 1;
    edi = edi | eax;
    eax = 2;
    edi = edi << 6;
    edx = edx & 0xFFFFFF3Fu;
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x34) = eax;
    eax = MEM32(0x771CD0);
    edi = edi | edx;
    (void)0; /* cmp eax, 0x2EE - flags set for next jcc */
    MEM32(esp + 0x80) = edi;
    MEM32(esp + 0x2C) = ebx;
    MEM32(esp + 0x30) = 4;
    MEM32(esp + 0x38) = ebx;
    if (CMP_GE(eax, 0x2EE)) goto loc_00119F32; /* jge: greater or equal (signed >=) */

loc_00119EEA: ;
    eax = MEM32(esp + 0x9C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x6C);
    eax = 0x170;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_00119EFE: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) goto loc_00119F32; /* je: equal / zero */

loc_00119F05: ;
    edx = eax + 0x2C;
    ecx = 0x1F;
    esi = esp + 0x14;
    edi = edx;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    SET_LO16(ecx, MEM16(edx));
    esi = MEM32(esp + 0x10);
    MEM16(eax + 0x2E) = LO16(ecx);
    MEM8(eax + 0x154) = LO8(ebx);
    MEM8(eax + 0x160) = LO8(ebx);
    MEM32(0x771CD0) = MEM32(0x771CD0) + 1;

loc_00119F32: ;
    esi--;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(esp + 0x10) = esi;
    if (CMP_G(esi, ebx)) goto loc_00119D72; /* jg: greater (signed >) */

loc_00119F3F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x80;
    esp += 4; return; /* ret */

}

/**
 * sub_00119F50
 * Original: 0x00119F50 - 0x0011A109 (441 bytes, 136 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00119F50(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00119F50: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    (void)0; /* test ebx, ebx - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    if (TEST_Z(ebx, ebx)) goto loc_0011A106; /* je: equal / zero */

loc_00119F62: ;
    SET_LO8(eax, MEM8(ebx + 0x135));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00119F97; /* je: equal / zero */

loc_00119F6C: ;
    ecx = MEM32(0x84A5F8);
    eax = ZX8(LO8(eax));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    eax = eax + ecx + -1744;
    eax = MEM32(eax + 0x64);
    if (CMP_EQ(eax, 0x35)) goto loc_0011A106; /* je: equal / zero */

loc_00119F8E: ;
    if (CMP_EQ(eax, 0x1E)) goto loc_0011A106; /* je: equal / zero */

loc_00119F97: ;
    eax = MEM32(ebx + 0x70);
    if (TEST_NZ(eax, eax)) goto loc_0011A106; /* jne: not equal / not zero */

loc_00119FA2: ;
    SET_LO8(eax, MEM8(0x7819D5));
    PUSH32(esp, edi);
    edi = edi | 0xFFFFFFFFu;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00119FF7; /* jne: not equal / not zero */

loc_00119FAF: ;
    edx = (int32_t)MEMF(ebx + 0x80); /* cvttss2si */
    ecx = (int32_t)MEMF(ebx + 0x7C); /* cvttss2si */
    eax = (int32_t)MEMF(ebx + 0x78); /* cvttss2si */
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0); sub_003C7CF0(); /* call 0x003C7CF0 */

loc_00119FCD: ;
    esp = esp + 0x14;
    if (TEST_NZ(eax, eax)) goto loc_00119FE2; /* jne: not equal / not zero */

loc_00119FD4: ;
    edx = MEM32(ebx + 0x298);
    edx = edx & 0x1F;
    if (CMP_NE(LO8(edx), 7)) goto loc_00119FF7; /* jne: not equal / not zero */

loc_00119FE2: ;
    if (TEST_NZ(ebp, ebp)) goto loc_00119FF7; /* jne: not equal / not zero */

loc_00119FE6: ;
    ecx = eax;
    eax = ebx;
    PUSH32(esp, 0); sub_0011A9B0(); /* call 0x0011A9B0 */

loc_00119FEF: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0011A105; /* jne: not equal / not zero */

loc_00119FF7: ;
    eax = MEM32(ebx + 0x298);
    eax = eax & 0x1F;
    eax--;
    (void)0; /* cmp eax, 0x19 - flags set for next jcc */
    PUSH32(esp, esi);
    if (CMP_A(eax, 0x19)) goto loc_0011A055; /* ja: above (unsigned >) */

loc_0011A007: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x11A11C); /* switch: 31 entries, 16 targets */
    if (_jt == 0x0011A00Eu) goto loc_0011A00E;
    if (_jt == 0x0011A015u) goto loc_0011A015;
    if (_jt == 0x0011A01Fu) goto loc_0011A01F;
    if (_jt == 0x0011A028u) goto loc_0011A028;
    if (_jt == 0x0011A032u) goto loc_0011A032;
    if (_jt == 0x0011A03Cu) goto loc_0011A03C;
    if (_jt == 0x0011A048u) goto loc_0011A048;
    if (_jt == 0x0011A052u) goto loc_0011A052;
    if (_jt == 0x0011A072u) goto loc_0011A072;
    if (_jt == 0x0011A079u) goto loc_0011A079;
    if (_jt == 0x0011A082u) goto loc_0011A082;
    if (_jt == 0x0011A08Eu) goto loc_0011A08E;
    if (_jt == 0x0011A097u) goto loc_0011A097;
    if (_jt == 0x0011A09Eu) goto loc_0011A09E;
    if (_jt == 0x0011A0A5u) goto loc_0011A0A5;
    if (_jt == 0x0011A0ACu) goto loc_0011A0AC;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0011A00E: ;
    esi = 0; /* xor self */
    edi = edi | 0xFFFFFFFFu;
    goto loc_0011A057;

loc_0011A015: ;
    esi = 7;
    edi = edi | 0xFFFFFFFFu;
    goto loc_0011A057;

loc_0011A01F: ;
    esi = 1;
    edi = 0; /* xor self */
    goto loc_0011A057;

loc_0011A028: ;
    esi = 3;
    edi = edi | 0xFFFFFFFFu;
    goto loc_0011A057;

loc_0011A032: ;
    esi = 2;
    edi = edi | 0xFFFFFFFFu;
    goto loc_0011A057;

loc_0011A03C: ;
    esi = 4;
    edi = 1;
    goto loc_0011A057;

loc_0011A048: ;
    esi = 6;
    edi = edi | 0xFFFFFFFFu;
    goto loc_0011A057;

loc_0011A052: ;
    edi = edi | 0xFFFFFFFFu;

loc_0011A055: ;
    esi = 0; /* xor self */

loc_0011A057: ;
    eax = MEM32(0x7FA1F8);
    ecx = eax + -2;
    if (CMP_A(ecx, 0x47)) goto loc_0011A0AC; /* ja: above (unsigned >) */

loc_0011A064: ;
    ecx = ZX8(MEM8(ecx + 0x11A198));
    { uint32_t _jt = MEM32(ecx * 4 + 0x11A184); /* switch: 5 entries, 5 targets */
    if (_jt == 0x0011A08Eu) goto loc_0011A08E;
    if (_jt == 0x0011A097u) goto loc_0011A097;
    if (_jt == 0x0011A09Eu) goto loc_0011A09E;
    if (_jt == 0x0011A0A5u) goto loc_0011A0A5;
    if (_jt == 0x0011A0ACu) goto loc_0011A0AC;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0011A072: ;
    edi = 2;
    goto loc_0011A055;

loc_0011A079: ;
    esi = 3;
    edi = esi;
    goto loc_0011A057;

loc_0011A082: ;
    esi = 5;
    edi = 4;
    goto loc_0011A057;

loc_0011A08E: ;
    PUSH32(esp, 0); sub_00064030(); /* call 0x00064030 */

loc_0011A093: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0011A0AC; /* je: equal / zero */

loc_0011A097: ;
    ecx = 0x6B4948;
    goto loc_0011A0B1;

loc_0011A09E: ;
    ecx = 0x6B4B48;
    goto loc_0011A0B1;

loc_0011A0A5: ;
    ecx = 0x6B4A48;
    goto loc_0011A0B1;

loc_0011A0AC: ;
    ecx = 0x6B4848;

loc_0011A0B1: ;
    if (CMP_EQ(esi, 0xFFFFFFFFu)) goto loc_0011A0DE; /* je: equal / zero */

loc_0011A0B6: ;
    eax = ebp;
    eax = eax - 0;
    if ((eax == 0)) goto loc_0011A0D0; /* je: equal / zero */

loc_0011A0BD: ;
    eax--;
    if ((eax != 0)) goto loc_0011A0DE; /* jne: not equal / not zero */

loc_0011A0C0: ;
    eax = esi;
    eax = eax << 5;
    eax = eax + ecx;
    ecx = ebx;
    PUSH32(esp, 0); sub_0011A6F0(); /* call 0x0011A6F0 */

loc_0011A0CE: ;
    goto loc_0011A0DE;

loc_0011A0D0: ;
    eax = esi;
    eax = eax << 5;
    eax = eax + ecx;
    edx = ebx;
    PUSH32(esp, 0); sub_0011A1E0(); /* call 0x0011A1E0 */

loc_0011A0DE: ;
    (void)0; /* cmp edi, 0xFFFFFFFFu - flags set for next jcc */
    POP32(esp, esi);
    if (CMP_EQ(edi, 0xFFFFFFFFu)) goto loc_0011A105; /* je: equal / zero */

loc_0011A0E4: ;
    if (TEST_Z(ebp, ebp)) { sub_0011A109(); return; } /* je: equal / zero */

loc_0011A0E8: ;
    if (CMP_NE(ebp, 3)) goto loc_0011A105; /* jne: not equal / not zero */

loc_0011A0ED: ;
    eax = MEM32(edi * 4 + 0x6B4C48);
    edx = MEM32(esp + 0x18);
    xmm1 = MEMF(0x648D14); /* movss */
    PUSH32(esp, 0); sub_0011A430(); /* call 0x0011A430 */

loc_0011A105: ;
    POP32(esp, edi);

loc_0011A106: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0011A1E0
 * Original: 0x0011A1E0 - 0x0011A421 (577 bytes, 110 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011A1E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;

loc_0011A1E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x98;
    xmm0 = MEMF(0x64938C); /* movss */
    /* comiss xmm0, MEMF(edx + 0xD0) - sets EFLAGS */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if ((xmm0 < MEMF(edx + 0xD0))) goto loc_0011A41B; /* jb: below (unsigned <) */

loc_0011A203: ;
    xmm0 = MEMF(edx + 0x78); /* movss */
    xmm2 = MEMF(0x648F60); /* movss */
    xmm1 = MEMF(0x648CE4); /* movss */
    xmm3 = MEMF(0x648CE0); /* movss */
    MEMF(esp + 0x3C) = xmm2; /* movss */
    xmm2 = MEMF(0x64935C); /* movss */
    ecx = 0x10;
    esi = 0x5A0350;
    edi = esp + 0x60;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEMF(esp + 0x90) = xmm0; /* movss */
    xmm0 = MEMF(edx + 0x7C); /* movss */
    xmm0 = xmm0 + xmm1; /* addss */
    MEMF(esp + 0x28) = xmm2; /* movss */
    xmm2 = MEMF(0x648FD8); /* movss */
    MEMF(esp + 0x94) = xmm0; /* movss */
    xmm0 = MEMF(edx + 0x80); /* movss */
    MEMF(esp + 0x48) = xmm1; /* movss */
    xmm1 = MEMF(0x59A8D8); /* movss */
    MEMF(esp + 0x2C) = xmm2; /* movss */
    xmm2 = MEMF(0x648EB8); /* movss */
    MEMF(esp + 0x98) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x50) = xmm1; /* movss */
    xmm1 = MEMF(0x648F20); /* movss */
    MEMF(esp + 0x30) = xmm2; /* movss */
    xmm2 = MEMF(0x648CF0); /* movss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(0x6492BC); /* movss */
    /* comiss xmm0, MEMF(edx + 0xD0) - sets EFLAGS */
    MEMF(esp + 0x10) = xmm1; /* movss */
    MEMF(esp + 0x58) = xmm2; /* movss */
    MEMF(esp + 0x5C) = xmm2; /* movss */
    xmm2 = MEMF(0x6492E4); /* movss */
    MEMF(esp + 0x24) = xmm1; /* movss */
    xmm1 = MEMF(0x649418); /* movss */
    MEMF(esp + 0x4C) = xmm3; /* movss */
    MEMF(esp + 0x20) = xmm2; /* movss */
    MEMF(esp + 0x18) = xmm1; /* movss */
    if ((xmm0 < MEMF(edx + 0xD0))) goto loc_0011A366; /* jb: below (unsigned <) */

loc_0011A328: ;
    xmm0 = MEMF(0x648E68); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(0x648E64); /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(0x648FDC); /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(0x648D80); /* movss */
    MEMF(esp + 0x20) = xmm3; /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */

loc_0011A366: ;
    xmm0 = MEMF(eax); /* movss */
    MEMF(0x6B7A08) = xmm0; /* movss */
    xmm0 = MEMF(eax + 4); /* movss */
    MEMF(0x6B7A0C) = xmm0; /* movss */
    xmm0 = MEMF(eax + 8); /* movss */
    MEMF(0x6B7A10) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0xC); /* movss */
    MEMF(0x6B7A14) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x10); /* movss */
    PUSH32(esp, 0x1030002);
    MEMF(0x6B7A18) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x14); /* movss */
    PUSH32(esp, 0x191380);
    MEMF(0x6B7A1C) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x18); /* movss */
    MEMF(0x6B7A20) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x1C); /* movss */
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    edx = esp + 0x68;
    PUSH32(esp, edx);
    eax = esp + 0x44;
    PUSH32(esp, eax);
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    eax = esp + 0x68;
    PUSH32(esp, eax);
    ecx = esp + 0x5C;
    PUSH32(esp, ecx);
    edx = esp + 0x68;
    PUSH32(esp, edx);
    eax = esp + 0x8C;
    PUSH32(esp, eax);
    eax = esp + 0x80;
    MEMF(0x6B7A24) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00190E40(); /* call 0x00190E40 */

loc_0011A418: ;
    esp = esp + 0x30;

loc_0011A41B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0011A430
 * Original: 0x0011A430 - 0x0011A6AB (635 bytes, 130 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011A430(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;

loc_0011A430: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x98;
    xmm0 = 0.0f; /* xorps self = zero */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if ((xmm1 <= xmm0)) goto loc_0011A6A5; /* jbe: below or equal (unsigned <=) */

loc_0011A44A: ;
    (void)0; /* test edx, edx - flags set for next jcc */
    xmm2 = MEMF(0x648D14); /* movss */
    edi = esp + 0x60;
    esi = 0x5A0350;
    ecx = 0x10;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    if (TEST_Z(edx, edx)) goto loc_0011A491; /* je: equal / zero */

loc_0011A466: ;
    xmm3 = MEMF(edx); /* movss */
    MEMF(esp + 0x90) = xmm3; /* movss */
    xmm3 = MEMF(edx + 4); /* movss */
    MEMF(esp + 0x94) = xmm3; /* movss */
    xmm3 = MEMF(edx + 8); /* movss */
    MEMF(esp + 0x98) = xmm3; /* movss */
    goto loc_0011A4E3;

loc_0011A491: ;
    if (TEST_Z(ebx, ebx)) goto loc_0011A4C8; /* je: equal / zero */

loc_0011A495: ;
    xmm3 = MEMF(ebx + 0x78); /* movss */
    MEMF(esp + 0x90) = xmm3; /* movss */
    xmm3 = MEMF(ebx + 0x7C); /* movss */
    xmm3 = xmm3 + xmm2; /* addss */
    MEMF(esp + 0x94) = xmm3; /* movss */
    xmm3 = MEMF(ebx + 0x80); /* movss */
    MEMF(esp + 0x98) = xmm3; /* movss */
    goto loc_0011A4E3;

loc_0011A4C8: ;
    MEMF(esp + 0x90) = xmm0; /* movss */
    MEMF(esp + 0x94) = xmm0; /* movss */
    MEMF(esp + 0x98) = xmm0; /* movss */

loc_0011A4E3: ;
    xmm3 = MEMF(0x6490B0); /* movss */
    MEMF(esp + 0x40) = xmm3; /* movss */
    xmm3 = MEMF(0x648E5C); /* movss */
    MEMF(esp + 0x44) = xmm3; /* movss */
    xmm3 = MEMF(0x648F60); /* movss */
    MEMF(esp + 0x34) = xmm3; /* movss */
    xmm3 = MEMF(0x648CDC); /* movss */
    xmm5 = xmm1; /* movaps */
    xmm5 = xmm5 * MEMF(0x6490B8); /* mulss */
    MEMF(esp + 0x10) = xmm2; /* movss */
    MEMF(esp + 0x2C) = xmm2; /* movss */
    MEMF(esp + 0x20) = xmm3; /* movss */
    xmm4 = MEMF(0x648D18); /* movss */
    MEMF(esp + 0x50) = xmm5; /* movss */
    xmm5 = xmm1; /* movaps */
    xmm5 = xmm5 * xmm3; /* mulss */
    xmm3 = xmm1; /* movaps */
    xmm3 = xmm3 * MEMF(0x648D20); /* mulss */
    ecx = eax;
    ecx = ecx >> 0x10;
    MEMF(esp + 0x38) = xmm3; /* movss */
    xmm3 = xmm1; /* movaps */
    xmm3 = xmm3 * MEMF(0x648CE0); /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * MEMF(0x648EB8); /* mulss */
    xmm1 = xmm1 * MEMF(0x649248); /* mulss */
    MEMF(esp + 0x58) = xmm2; /* movss */
    ecx = ecx & 0xFF;
    edx = eax;
    edx = edx >> 8;
    MEMF(esp + 0x5C) = xmm1; /* movss */
    xmm1 = MEMF(0x6491DC); /* movss */
    xmm2 = (float)(int32_t)ecx; /* cvtsi2ss */
    edx = edx & 0xFF;
    ecx = eax;
    MEMF(esp + 0x18) = xmm1; /* movss */
    xmm1 = MEMF(0x648CEC); /* movss */
    xmm2 = xmm2 * xmm1; /* mulss */
    MEMF(0x6B7A08) = xmm2; /* movss */
    PUSH32(esp, 0x21030000);
    xmm2 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm2 = xmm2 * xmm1; /* mulss */
    ecx = ecx & 0xFF;
    MEMF(0x6B7A10) = xmm2; /* movss */
    PUSH32(esp, 0x1911F0);
    xmm2 = (float)(int32_t)ecx; /* cvtsi2ss */
    eax = eax >> 0x18;
    xmm2 = xmm2 * xmm1; /* mulss */
    MEMF(0x6B7A18) = xmm2; /* movss */
    xmm2 = (float)(int32_t)eax; /* cvtsi2ss */
    edx = esp + 0x20;
    PUSH32(esp, edx);
    eax = esp + 0x64;
    PUSH32(esp, eax);
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    edx = esp + 0x5C;
    PUSH32(esp, edx);
    eax = esp + 0x50;
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    MEMF(esp + 0x58) = xmm3; /* movss */
    xmm3 = MEMF(0x648CF4); /* movss */
    PUSH32(esp, ecx);
    edx = esp + 0x40;
    xmm2 = xmm2 * xmm1; /* mulss */
    MEMF(esp + 0x50) = xmm0; /* movss */
    MEMF(esp + 0x44) = xmm4; /* movss */
    MEMF(esp + 0x74) = xmm5; /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    MEMF(esp + 0x68) = xmm4; /* movss */
    MEMF(esp + 0x6C) = xmm0; /* movss */
    MEMF(esp + 0x48) = xmm3; /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    MEMF(0x6B7A0C) = xmm0; /* movss */
    MEMF(0x6B7A14) = xmm0; /* movss */
    MEMF(0x6B7A1C) = xmm0; /* movss */
    MEMF(0x6B7A20) = xmm2; /* movss */
    MEMF(0x6B7A24) = xmm0; /* movss */
    PUSH32(esp, edx);
    eax = esp + 0x54;
    PUSH32(esp, eax);
    ecx = esp + 0x68;
    PUSH32(esp, ecx);
    edx = esp + 0x8C;
    PUSH32(esp, edx);
    eax = esp + 0x80;
    PUSH32(esp, 0); sub_00190E40(); /* call 0x00190E40 */

loc_0011A6A2: ;
    esp = esp + 0x30;

loc_0011A6A5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0011A6B0
 * Original: 0x0011A6B0 - 0x0011A6EE (62 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011A6B0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_0011A6B0: ;
    xmm0 = MEMF(0x64938C); /* movss */
    PUSH32(esp, ebx);
    ebx = ecx;
    /* comiss xmm0, MEMF(ebx + 0xD0) - sets EFLAGS */
    if ((xmm0 < MEMF(ebx + 0xD0))) goto loc_0011A6EC; /* jb: below (unsigned <) */

loc_0011A6C4: ;
    xmm0 = MEMF(0x6499A0); /* movss */
    /* comiss xmm0, MEMF(ebx + 0xD0) - sets EFLAGS */
    xmm1 = MEMF(0x649BAC); /* movss */
    if ((xmm0 < MEMF(ebx + 0xD0))) goto loc_0011A6E5; /* jb: below (unsigned <) */

loc_0011A6DD: ;
    xmm1 = MEMF(0x648D14); /* movss */

loc_0011A6E5: ;
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_0011A430(); /* call 0x0011A430 */

loc_0011A6EC: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0011A6F0
 * Original: 0x0011A6F0 - 0x0011A9AA (698 bytes, 159 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011A6F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm5;

loc_0011A6F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x74;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, edi);
    eax = esp + 0x10;
    edi = ecx;
    PUSH32(esp, eax);
    eax = edi;
    MEM32(esp + 0x14) = 0;
    PUSH32(esp, 0); sub_001C2970(); /* call 0x001C2970 */

loc_0011A714: ;
    esp = esp + 4;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0011A9A3; /* je: equal / zero */

loc_0011A71F: ;
    ecx = ZX16(MEM16(edi + 0x170));
    xmm5 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm5 = xmm5 * MEMF(0x64A074); /* mulss */
    xmm5 = xmm5 - MEMF(0x648E3C); /* subss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0011A73F: ;
    xmm0 = xmm0 * MEMF(0x648D88); /* mulss */
    xmm0 = xmm0 - MEMF(0x648DE0); /* subss */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    xmm0 = xmm0 + xmm5; /* addss */
    xmm0 = xmm0 * MEMF(0x648E18); /* mulss */
    xmm5 = MEMF(0x648D14); /* movss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    edx = esp + 0x60;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E2E60(); /* call 0x003E2E60 */

loc_0011A787: ;
    xmm0 = MEMF(edi + 0x78); /* movss */
    MEMF(esp + 0x94) = xmm0; /* movss */
    xmm0 = MEMF(edi + 0x7C); /* movss */
    xmm0 = xmm0 + MEMF(0x648CDC); /* addss */
    MEMF(esp + 0x98) = xmm0; /* movss */
    xmm0 = MEMF(edi + 0x80); /* movss */
    MEMF(esp + 0x9C) = xmm0; /* movss */
    xmm0 = MEMF(esi); /* movss */
    MEMF(0x6B7A08) = xmm0; /* movss */
    xmm0 = MEMF(esi + 4); /* movss */
    MEMF(0x6B7A0C) = xmm0; /* movss */
    xmm0 = MEMF(esi + 8); /* movss */
    MEMF(0x6B7A10) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0xC); /* movss */
    MEMF(0x6B7A14) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x10); /* movss */
    MEMF(0x6B7A18) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x14); /* movss */
    MEMF(0x6B7A1C) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x18); /* movss */
    ecx = esp + 0x4C;
    eax = edx;
    MEMF(0x6B7A20) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x1C); /* movss */
    esi = MEM32(esp + 0x34);
    edx = ecx;
    esp = esp + 0x24;
    MEMF(0x6B7A24) = xmm0; /* movss */
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x14) = edx;
    ebx = 0x75DDD0;

loc_0011A843: ;
    eax = ebx;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x34) = ecx;
    ecx = esp + 0x40;
    MEM32(esp + 0x38) = edx;
    PUSH32(esp, ecx);
    edx = esp + 0x38;
    MEM32(esp + 0x40) = eax;
    PUSH32(esp, edx);
    eax = edx;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_0011A86B: ;
    edi = 2;

loc_0011A870: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0011A875: ;
    xmm0 = xmm0 * MEMF(0x648EB0); /* mulss */
    xmm0 = xmm0 + MEMF(0x648E14); /* addss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0011A890: ;
    xmm0 = xmm0 * MEMF(0x64908C); /* mulss */
    xmm0 = xmm0 + MEMF(0x648E38); /* addss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0011A8AB: ;
    xmm1 = MEMF(0x649294); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x28) = xmm1; /* movss */
    MEMF(esp + 0x2C) = xmm1; /* movss */
    xmm1 = MEMF(0x6491E0); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEMF(esp + 0x30) = xmm1; /* movss */
    eax = MEM32(esp + 0x1C);
    xmm2 = MEMF(eax); /* movss */
    ecx = MEM32(esp + 0x18);
    /* shufps xmm2, xmm2, 0 */
    /* mulps: xmm2 *= MEMF(ecx) (packed 4xfloat) */
    xmm1 = MEMF(eax + 4); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm1 *= MEMF(ecx + 0x10) (packed 4xfloat) */
    xmm3 = MEMF(eax + 8); /* movss */
    /* shufps xmm3, xmm3, 0 */
    /* mulps: xmm3 *= MEMF(ecx + 0x20) (packed 4xfloat) */
    /* addps: xmm2 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x14);
    /* addps: xmm2 += xmm3 (packed 4xfloat) */
    MEMD(eax) = xmm2; /* movlps */
    /* TODO: movhlps xmm2, xmm2 */
    MEMF(eax + 8) = xmm2; /* movss */
    xmm0 = xmm0 * MEMF(0x64A070); /* mulss */
    xmm0 = xmm0 * MEMF(0x648D80); /* mulss */
    xmm1 = MEMF(esp + 0x28); /* movss */
    xmm1 = xmm1 - MEMF(esi); /* subss */
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x38);
    MEMF(esp + 0x3C) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x40); /* movss */
    xmm1 = xmm1 - MEMF(esi + 4); /* subss */
    PUSH32(esp, eax);
    ecx = esp + 0x4C;
    MEMF(esp + 0x44) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x48); /* movss */
    xmm1 = xmm1 - MEMF(esi + 8); /* subss */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    MEMF(esp + 0x50) = xmm1; /* movss */
    PUSH32(esp, 0); sub_00191380(); /* call 0x00191380 */

loc_0011A98A: ;
    esp = esp + 0x20;
    edi--;
    if ((edi != 0)) goto loc_0011A870; /* jne: not equal / not zero */

loc_0011A994: ;
    ebx = ebx + 0xC;
    if (CMP_L(ebx, 0x75DDE8)) goto loc_0011A843; /* jl: less (signed <) */

loc_0011A9A3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0011A9B0
 * Original: 0x0011A9B0 - 0x0011AA0E (94 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011A9B0(void)
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

loc_0011A9B0: ;
    edx = 0; /* xor self */
    esp = esp - 0x54;
    if (CMP_EQ(ecx, edx)) goto loc_0011A9FC; /* je: equal / zero */

loc_0011A9B9: ;
    ecx = MEM32(ecx + 0x1C);
    ecx = ecx & 0xFFFF;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esp) = ecx;
    fp_push((double)SMEM32(esp)); /* fild */
    if (CMP_GE(ecx & ecx, 0)) goto loc_0011A9D2; /* jge: greater or equal (signed >=) */

loc_0011A9CC: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_0011A9D2: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm1 = MEMF(0x648D14); /* movss */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp)); /* fld float */
    fp_push(MEMF(0x648CE4)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) { sub_0011AA0E(); return; } /* jbe: below or equal (unsigned <=) */

loc_0011A9F2: ;
    xmm0 = MEMF(0x648CE4); /* movss */
    g_seh_ebp = ebp; sub_0011AA13(); return; /* tail jmp 0x0011AA13 */

loc_0011A9FC: ;
    xmm0 = MEMF(0x648D18); /* movss */
    xmm1 = MEMF(0x648D40); /* movss */
    g_seh_ebp = ebp; sub_0011AA13(); return; /* tail jmp 0x0011AA13 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0011AB60
 * Original: 0x0011AB60 - 0x0011AD1B (443 bytes, 111 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011AB60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0011AB60: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x10C;
    (void)0; /* test edi, edi - flags set for next jcc */
    PUSH32(esp, esi);
    if (TEST_Z(edi, edi)) goto loc_0011AD16; /* je: equal / zero */

loc_0011AB75: ;
    eax = MEM32(edi + 0x3C8);
    if (TEST_Z(eax, eax)) goto loc_0011AD16; /* je: equal / zero */

loc_0011AB83: ;
    esi = 0; /* xor self */

loc_0011AB85: ;
    PUSH32(esp, edi);
    eax = esp + 0xD4;
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_002F7870(); /* call 0x002F7870 */

loc_0011AB94: ;
    PUSH32(esp, eax);
    ecx = esp + esi + 0x18;
    PUSH32(esp, ecx);
    edx = esi + 0x596290;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001101F0(); /* call 0x001101F0 */

loc_0011ABA6: ;
    eax = esp + 0xE0;
    PUSH32(esp, eax);
    ecx = esp + esi + 0xB4;
    PUSH32(esp, ecx);
    edx = esi + 0x5962C0;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001101F0(); /* call 0x001101F0 */

loc_0011ABC2: ;
    eax = esp + 0xEC;
    PUSH32(esp, eax);
    ecx = esp + esi + 0x90;
    PUSH32(esp, ecx);
    edx = esi + 0x5962F0;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001101F0(); /* call 0x001101F0 */

loc_0011ABDE: ;
    esi = esi + 0xC;
    esp = esp + 0x28;
    if (CMP_L(esi, 0x30)) goto loc_0011AB85; /* jl: less (signed <) */

loc_0011ABE9: ;
    xmm0 = MEMF(esp + 0x88); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0xB8); /* subss */
    PUSH32(esp, ebx);
    MEMF(esp + 0x5C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x90); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0xC0); /* subss */
    eax = esp + 0x5C;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    MEMF(esp + 0x68) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x9C); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0xCC); /* subss */
    PUSH32(esp, 0);
    PUSH32(esp, 0xD);
    MEMF(esp + 0x74) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0011AC42: ;
    xmm0 = xmm0 * MEMF(0x648CE4); /* mulss */
    xmm0 = xmm0 + MEMF(0x648E5C); /* addss */
    edx = MEM32(esp + 0x4C);
    eax = MEM32(esp + 0x48);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x54);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x4C);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x4C);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x4C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00112AA0(); /* call 0x00112AA0 */

loc_0011AC7B: ;
    xmm0 = MEMF(esp + 0xC4); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0xF4); /* subss */
    esp = esp + 0x30;
    PUSH32(esp, ebx);
    MEMF(esp + 0x68) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x9C); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0xCC); /* subss */
    ecx = esp + 0x68;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    MEMF(esp + 0x74) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xA8); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0xD8); /* subss */
    PUSH32(esp, 0);
    PUSH32(esp, 0xD);
    MEMF(esp + 0x80) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0011ACDA: ;
    xmm0 = xmm0 * MEMF(0x648CE4); /* mulss */
    edx = MEM32(esp + 0x2C);
    xmm0 = xmm0 + MEMF(0x648E5C); /* addss */
    eax = MEM32(esp + 0x28);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x28);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x58);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x58);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x58);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00112AA0(); /* call 0x00112AA0 */

loc_0011AD13: ;
    esp = esp + 0x30;

loc_0011AD16: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0011AD20
 * Original: 0x0011AD20 - 0x0011AE7E (350 bytes, 78 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011AD20(void)
{
    float xmm0, xmm1, xmm5;

loc_0011AD20: ;
    esp = esp - 0x4C;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x48) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x58); /* movss */
    MEMF(esp) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x5C); /* movss */
    PUSH32(esp, ebx);
    MEMF(esp + 8) = xmm0; /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x64); /* movss */
    SET_LO8(ebx, 0xFF);
    MEM32(esp + 0x14) = 1;
    MEM16(esp + 0x12) = 1;
    MEMF(esp + 0xC) = xmm0; /* movss */
    MEM8(esp + 0x40) = 9;
    MEM8(esp + 0x41) = LO8(ebx);
    MEM32(esp + 0x3C) = 0x28;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0011AD7D: ;
    eax = MEM32(esp + 0x88);
    xmm0 = xmm0 * MEMF(0x6493A8); /* mulss */
    xmm0 = xmm0 + MEMF(0x6490B8); /* addss */
    xmm5 = MEMF(0x648D2C); /* movss */
    xmm1 = MEMF(eax); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x28) = xmm1; /* movss */
    xmm1 = MEMF(eax + 4); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x2C) = xmm1; /* movss */
    xmm1 = MEMF(eax + 8); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x30) = xmm1; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0011ADD1: ;
    MEM8(esp + 0x45) = 0x32;
    MEM8(esp + 0x42) = LO8(ebx);
    MEM8(esp + 0x43) = LO8(ebx);
    MEM8(esp + 0x44) = LO8(ebx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0011ADE7: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 3;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + 2);
    MEM8(esp + 0x19) = LO8(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0011ADFB: ;
    MEM16(esp + 0x10) = 0x3C;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0011AE07: ;
    xmm1 = xmm0; /* movaps */
    xmm0 = MEMF(0x5A005C); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + xmm0; /* addss */
    xmm1 = xmm1 * MEMF(0x648E54); /* mulss */
    MEMF(esp + 0x24) = xmm1; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0011AE2D: ;
    edx = MEM32(esp + 0x8C);
    xmm0 = xmm0 * MEMF(0x64A06C); /* mulss */
    xmm0 = xmm0 + MEMF(0x64A068); /* addss */
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xB);
    PUSH32(esp, 1);
    eax = esp + 0x4C;
    PUSH32(esp, 0);
    xmm0 = xmm0 * xmm5; /* mulss */
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    MEMF(esp + 0x64) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0017AA40(); /* call 0x0017AA40 */

loc_0011AE71: ;
    esp = esp + 0x30;
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0x4C;
    esp += 4; return; /* ret */

}

/**
 * sub_0011AE80
 * Original: 0x0011AE80 - 0x0011AEA2 (34 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011AE80(void)
{
    int _flags = 0; /* fallback flag var */

loc_0011AE80: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x144);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x38);
    edx = ZX8(MEM8(ecx + 0x21));
    eax = eax << 3;
    if (CMP_LE(edx, eax)) goto loc_0011AE9C; /* jle: less or equal (signed <=) */

loc_0011AE99: ;
    MEM8(ecx + 0x21) = LO8(eax);

loc_0011AE9C: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0011AEB0
 * Original: 0x0011AEB0 - 0x0011AFB5 (261 bytes, 83 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011AEB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0011AEB0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xC8;
    PUSH32(esp, esi);
    esi = eax;
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(esi, esi)) goto loc_0011AFAF; /* je: equal / zero */

loc_0011AEC8: ;
    edx = esi;
    eax = esp + 0x20;
    PUSH32(esp, 0); sub_002A0430(); /* call 0x002A0430 */

loc_0011AED3: ;
    xmm0 = MEMF(esi + 0x78); /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x7C); /* movss */
    xmm0 = xmm0 + MEMF(0x59D944); /* addss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x80); /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x7C); /* movss */
    xmm0 = xmm0 - MEMF(0x6491E4); /* subss */
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0);
    esi = eax;
    edi = esp + 0x20;
    PUSH32(esp, 0); sub_002A0180(); /* call 0x002A0180 */

loc_0011AF21: ;
    esp = esp + 0xC;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0011AFAF; /* je: equal / zero */

loc_0011AF2C: ;
    eax = MEM32(esp + 0x20);
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0011AF39: ;
    eax = eax & 0x8000000Fu;
    if (((int32_t)eax >= 0)) goto loc_0011AF45; /* jns: not sign (positive) */

loc_0011AF40: ;
    eax--;
    eax = eax | 0xFFFFFFF0u;
    eax++;

loc_0011AF45: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x17);
    eax = eax + 0x23;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x437B0000);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = 0xFF;
    PUSH32(esp, 0); sub_00112C50(); /* call 0x00112C50 */

loc_0011AF72: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0011AF77: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x15;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = MEM32(esp + 0x44);
    ecx = MEM32(esp + 0x40);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x18);
    edx = edx + 0x1E;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x60);
    PUSH32(esp, 0);
    PUSH32(esp, 0x43910000);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = 0xFF;
    PUSH32(esp, 0); sub_00112C50(); /* call 0x00112C50 */

loc_0011AFAC: ;
    esp = esp + 0x58;

loc_0011AFAF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0011AFC0
 * Original: 0x0011AFC0 - 0x0011B186 (454 bytes, 96 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011AFC0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm6;

loc_0011AFC0: ;
    esp = esp - 0x80;
    PUSH32(esp, edi);
    MEM32(esp + 0x30) = 0x303;
    MEM32(esp + 0x34) = 0x29;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0011AFDC: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x29;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    xmm6 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0xC) = xmm6; /* movss */
    MEMF(esp + 0x10) = xmm6; /* movss */
    MEM8(esp + 0x14) = 0xB0;
    MEM8(esp + 0x15) = 0xA0;
    MEM8(esp + 0x16) = 0x2A;
    edx = edx + 0x32;
    MEM16(esp + 8) = LO16(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0011B00F: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x65;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + 0x64);
    MEM8(esp + 0x17) = LO8(edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0011B023: ;
    xmm0 = xmm0 * MEMF(0x64A330); /* mulss */
    xmm0 = xmm0 + MEMF(0x649E90); /* addss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x90); /* movss */
    MEMF(esp + 0x4C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x94); /* movss */
    MEMF(esp + 0x50) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x98); /* movss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0011B071: ;
    xmm1 = xmm0; /* movaps */
    xmm0 = MEMF(0x648EC8); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    PUSH32(esp, ecx);
    xmm1 = xmm1 + xmm0; /* addss */
    xmm1 = xmm1 * MEMF(0x648D80); /* mulss */
    MEMF(esp) = xmm1; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0011B097: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x14;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edi = esp + 0x68;
    edx = edx - 0x13;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xB0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00110510(); /* call 0x00110510 */

loc_0011B0B4: ;
    esp = esp + 0xC;
    MEMF(esp + 0x70) = xmm6; /* movss */
    MEM32(esp + 0x74) = 0xE05;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0011B0CA: ;
    (void)0; /* test LO8(eax), 1 - flags set for next jcc */
    POP32(esp, edi);
    if (TEST_Z(LO8(eax), 1)) goto loc_0011B0D7; /* je: equal / zero */

loc_0011B0CF: ;
    MEM32(esp + 0x70) = 0xE45;

loc_0011B0D7: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0011B0DC: ;
    if (TEST_Z(LO8(eax), 1)) goto loc_0011B0E8; /* je: equal / zero */

loc_0011B0E0: ;
    MEM32(esp + 0x70) = MEM32(esp + 0x70) | 0x80;

loc_0011B0E8: ;
    xmm0 = MEMF(0x64A4BC); /* movss */
    eax = 2;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x24) = eax;
    eax = MEM32(esp + 0xBC);
    PUSH32(esp, eax);
    ecx = 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    MEM32(esp + 0x20) = ecx;
    MEM32(esp + 0x2C) = ecx;
    ecx = esp + 0x10;
    MEMF(esp + 0x48) = xmm0; /* movss */
    xmm0 = MEMF(0x64A4B8); /* movss */
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    MEM8(esp + 0x8C) = 0xA;
    MEM8(esp + 0x8D) = 0xFF;
    MEM16(esp + 0x48) = 0x1E;
    MEM16(esp + 0x4A) = 8;
    MEM16(esp + 0x4C) = 0x46;
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEM32(esp + 0x30) = 0;
    MEM32(esp + 0x3C) = 0;
    PUSH32(esp, 0); sub_00105450(); /* call 0x00105450 */

loc_0011B16A: ;
    esp = esp + 0x14;
    if (TEST_Z(eax, eax)) goto loc_0011B17A; /* je: equal / zero */

loc_0011B171: ;
    edx = MEM32(esp);
    MEM32(eax + 0x170) = edx;

loc_0011B17A: ;
    eax = 1;
    esp = esp + 0x80;
    esp += 4; return; /* ret */

}

/**
 * sub_0011B190
 * Original: 0x0011B190 - 0x0011B3C7 (567 bytes, 109 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011B190(void)
{
    float xmm0, xmm1, xmm2, xmm5, xmm6, xmm7;

loc_0011B190: ;
    esp = esp - 0xD4;
    xmm0 = MEMF(esp + 0xE0); /* movss */
    xmm1 = 0.0f; /* xorps self = zero */
    xmm2 = MEMF(0x648E64); /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xE4); /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xE8); /* movss */
    PUSH32(esp, ebx);
    MEMF(esp + 0x40) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    PUSH32(esp, edi);
    MEMF(esp + 0x30) = xmm0; /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    MEM32(esp + 0x70) = 0x29E8;
    MEMF(esp + 0x18) = xmm1; /* movss */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    MEMF(esp + 0x20) = xmm1; /* movss */
    MEMF(esp + 0xC) = xmm2; /* movss */
    MEMF(esp + 0x64) = xmm1; /* movss */
    MEMF(esp + 8) = xmm0; /* movss */
    MEM32(esp + 0x78) = 0x20;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0011B223: ;
    xmm0 = xmm0 * MEMF(0x64A4E4); /* mulss */
    xmm0 = xmm0 + MEMF(0x648EC8); /* addss */
    xmm6 = MEMF(0x648D80); /* movss */
    PUSH32(esp, ecx);
    xmm0 = xmm0 * xmm6; /* mulss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0011B24A: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x29;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edi = esp + 0x58;
    edx = edx - 0x3D;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x108);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00110510(); /* call 0x00110510 */

loc_0011B267: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0011B26C: ;
    xmm5 = MEMF(0x649298); /* movss */
    xmm7 = MEMF(0x649248); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 - xmm7; /* subss */
    xmm0 = xmm0 * xmm6; /* mulss */
    MEMF(esp + 0x6C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0011B293: ;
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 - xmm7; /* subss */
    xmm0 = xmm0 * xmm6; /* mulss */
    MEMF(esp + 0x74) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0011B2AA: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x15;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = edx + 0x32;
    MEM32(esp + 0x80) = edx;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0011B2C1: ;
    xmm0 = xmm0 * MEMF(0x64ADB4); /* mulss */
    xmm0 = xmm0 - MEMF(0x64ADB0); /* subss */
    xmm5 = MEMF(0x648D2C); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x78) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0011B2E8: ;
    xmm0 = xmm0 * MEMF(0x64ADAC); /* mulss */
    xmm0 = xmm0 + MEMF(0x64A780); /* addss */
    ebx = 0; /* xor self */
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEM8(esp + 0x88) = LO8(ebx);
    MEM32(esp + 0x8C) = ebx;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0011B31D: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x4C;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM32(esp + 0x94) = 0x157100;
    MEM32(esp + 0x98) = ebx;
    MEM32(esp + 0x9C) = ebx;
    SET_LO8(edx, LO8(edx) - LO8(ecx));
    MEM8(esp + 0x90) = LO8(edx);
    edx = MEM32(esp + 0x124);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x7F);
    PUSH32(esp, 3);
    eax = esp + 0x2C;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    MEM32(esp + 0xC0) = ebx;
    MEM32(esp + 0xC4) = ebx;
    MEM32(esp + 0xC8) = ebx;
    MEM32(esp + 0xCC) = 0x13E6E0;
    MEM32(esp + 0xD0) = 0x13E8F0;
    MEM8(esp + 0xD8) = 2;
    MEM32(esp + 0xDC) = ebx;
    MEM8(esp + 0xE0) = LO8(ebx);
    MEM16(esp + 0xE2) = 0x20;
    MEM16(esp + 0xE4) = 7;
    PUSH32(esp, 0); sub_0013D5D0(); /* call 0x0013D5D0 */

loc_0011B3B6: ;
    esp = esp + 0x2C;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0xD4;
    esp += 4; return; /* ret */

}

/**
 * sub_0011B3D0
 * Original: 0x0011B3D0 - 0x0011B702 (818 bytes, 215 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011B3D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm5, xmm6, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011B3D0: ;
    eax = MEM32(0x84A144);
    xmm1 = MEMF(0x648E5C); /* movss */
    esp = esp - 0x5C;
    (void)0; /* test eax, eax - flags set for next jcc */
    ecx = 2;
    if (TEST_Z(eax, eax)) goto loc_0011B3F1; /* je: equal / zero */

loc_0011B3E9: ;
    xmm1 = MEMF(0x648F38); /* movss */

loc_0011B3F1: ;
    xmm0 = (float)(int32_t)MEM32(0x849428); /* cvtsi2ss */
    xmm0 = xmm0 / xmm1; /* divss */
    xmm1 = MEMF(0x648D14); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 >= xmm1)) goto loc_0011B41A; /* jae: above or equal (unsigned >=) */

loc_0011B40A: ;
    xmm1 = xmm1 - xmm0; /* subss */
    xmm1 = xmm1 * MEMF(0x648CE0); /* mulss */
    ecx = (int32_t)xmm1; /* cvttss2si */

loc_0011B41A: ;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    xmm0 = MEMF(esp + 0x68); /* movss */
    xmm7 = 0.0f; /* xorps self = zero */
    SET_LO8(eax, 0xFF);
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x6C); /* movss */
    edx = 1;
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x70); /* movss */
    MEMF(esp + 0x58) = xmm7; /* movss */
    MEM32(esp + 0x20) = edx;
    MEM16(esp + 0x1E) = LO16(edx);
    MEM8(esp + 0x4C) = 0xA;
    MEM8(esp + 0x4D) = LO8(eax);
    MEM32(esp + 0x48) = 8;
    MEM8(esp + 0x51) = LO8(eax);
    MEM8(esp + 0x4E) = LO8(eax);
    MEM8(esp + 0x4F) = LO8(eax);
    MEM8(esp + 0x50) = LO8(eax);
    MEMF(esp + 0x18) = xmm0; /* movss */
    if (TEST_Z(ecx, ecx)) { sub_0011B702(); return; } /* je: equal / zero */

loc_0011B480: ;
    eax = MEM32(esp + 0x80);
    SET_LO8(edx, LO8(eax));
    PUSH32(esp, ebx);
    SET_LO8(edx, LO8(edx) & 0xC0);
    PUSH32(esp, ebp);
    ebp = eax;
    MEM8(esp + 0x74) = LO8(edx);
    SET_LO8(edx, LO8(eax));
    SET_LO8(eax, LO8(eax) - 0x40);
    SET_LO8(ebx, LO8(eax));
    SET_LO8(eax, LO8(eax) & 0xC0);
    MEM8(esp + 0xB) = LO8(eax);
    SET_LO8(edx, LO8(edx) & 0x40);
    SET_LO8(eax, LO8(ebx));
    ebp = ebp & 0x3F;
    PUSH32(esp, esi);
    SET_LO8(eax, LO8(eax) & 0x40);
    PUSH32(esp, edi);
    MEM8(esp + 0x78) = LO8(edx);
    MEM8(esp + 0x80) = LO8(eax);
    MEM32(esp + 0x1C) = ecx;
    goto loc_0011B4C0;

loc_0011B4BD: ;
    xmm7 = 0.0f; /* xorps self = zero */

loc_0011B4C0: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0011B4C5: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xD;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ecx = 0; /* xor self */
    edx = edx - 0x3F;
    SET_LO8(ecx, LO8(edx));
    SET_LO8(eax, LO8(edx));
    SET_LO8(eax, LO8(eax) & 0xC0);
    ecx = ecx & 0x3F;
    if (TEST_Z(LO8(edx), 0x40)) goto loc_0011B4E9; /* je: equal / zero */

loc_0011B4E0: ;
    esi = 0x40;
    esi = esi - ecx;
    goto loc_0011B4EB;

loc_0011B4E9: ;
    esi = ecx;

loc_0011B4EB: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0011B501; /* je: equal / zero */

loc_0011B4EF: ;
    if (CMP_EQ(LO8(eax), 0xC0)) goto loc_0011B501; /* je: equal / zero */

loc_0011B4F3: ;
    xmm6 = xmm7; /* movaps */
    xmm6 = xmm6 - MEMF(esi * 4 + 0x743090); /* subss */
    goto loc_0011B50A;

loc_0011B501: ;
    xmm6 = MEMF(esi * 4 + 0x743090); /* movss */

loc_0011B50A: ;
    SET_LO8(edx, LO8(edx) - 0x40);
    SET_LO8(eax, LO8(edx));
    SET_LO8(eax, LO8(eax) & 0xC0);
    if (TEST_Z(LO8(edx), 0x40)) goto loc_0011B522; /* je: equal / zero */

loc_0011B516: ;
    edx = edx & 0x3F;
    ecx = 0x40;
    ecx = ecx - edx;
    goto loc_0011B527;

loc_0011B522: ;
    edx = edx & 0x3F;
    ecx = edx;

loc_0011B527: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0011B53D; /* je: equal / zero */

loc_0011B52B: ;
    if (CMP_EQ(LO8(eax), 0xC0)) goto loc_0011B53D; /* je: equal / zero */

loc_0011B52F: ;
    xmm0 = xmm7; /* movaps */
    xmm0 = xmm0 - MEMF(ecx * 4 + 0x743090); /* subss */
    goto loc_0011B546;

loc_0011B53D: ;
    xmm0 = MEMF(ecx * 4 + 0x743090); /* movss */

loc_0011B546: ;
    SET_LO8(eax, MEM8(esp + 0x78));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEMF(esp + 0x14) = xmm0; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0011B55D; /* je: equal / zero */

loc_0011B554: ;
    eax = 0x40;
    eax = eax - ebp;
    goto loc_0011B55F;

loc_0011B55D: ;
    eax = ebp;

loc_0011B55F: ;
    SET_LO8(ecx, MEM8(esp + 0x7C));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0011B57A; /* je: equal / zero */

loc_0011B567: ;
    if (CMP_EQ(LO8(ecx), 0xC0)) goto loc_0011B57A; /* je: equal / zero */

loc_0011B56C: ;
    xmm0 = xmm7; /* movaps */
    xmm0 = xmm0 - MEMF(eax * 4 + 0x743090); /* subss */
    goto loc_0011B583;

loc_0011B57A: ;
    xmm0 = MEMF(eax * 4 + 0x743090); /* movss */

loc_0011B583: ;
    SET_LO8(eax, MEM8(esp + 0x80));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEMF(esp + 0x18) = xmm0; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0011B5A4; /* je: equal / zero */

loc_0011B594: ;
    edx = 0; /* xor self */
    SET_LO8(edx, LO8(ebx));
    eax = 0x40;
    edx = edx & 0x3F;
    eax = eax - edx;
    goto loc_0011B5AB;

loc_0011B5A4: ;
    eax = 0; /* xor self */
    SET_LO8(eax, LO8(ebx));
    eax = eax & 0x3F;

loc_0011B5AB: ;
    SET_LO8(ecx, MEM8(esp + 0x13));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0011B5C1; /* je: equal / zero */

loc_0011B5B3: ;
    (void)0; /* cmp LO8(ecx), 0xC0 - flags set for next jcc */
    xmm7 = xmm7 - MEMF(eax * 4 + 0x743090); /* subss */
    if (CMP_NE(LO8(ecx), 0xC0)) goto loc_0011B5CA; /* jne: not equal / not zero */

loc_0011B5C1: ;
    xmm7 = MEMF(eax * 4 + 0x743090); /* movss */

loc_0011B5CA: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0011B5CF: ;
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 * MEMF(0x64A064); /* mulss */
    xmm5 = xmm5 + MEMF(0x64A060); /* addss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0011B5E7: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 5;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + 4);
    MEM8(esp + 0x35) = LO8(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0011B5FB: ;
    eax = eax & 0x3F;
    eax = eax + 0x5A;
    MEM16(esp + 0x2C) = LO16(eax);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0011B60B: ;
    xmm0 = xmm0 * MEMF(0x648CE4); /* mulss */
    xmm0 = xmm0 + MEMF(0x648F38); /* addss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0011B626: ;
    xmm0 = xmm0 * MEMF(0x648E64); /* mulss */
    xmm0 = xmm0 + MEMF(0x648D40); /* addss */
    xmm1 = 0.0f; /* xorps self = zero */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEMF(esp + 0x5C) = xmm0; /* movss */
    PUSH32(esp, 1);
    xmm0 = xmm5; /* movaps */
    PUSH32(esp, 0);
    xmm0 = xmm0 * xmm7; /* mulss */
    xmm0 = xmm0 * xmm6; /* mulss */
    PUSH32(esp, 1);
    MEMF(esp + 0x5C) = xmm0; /* movss */
    xmm0 = xmm5; /* movaps */
    xmm0 = xmm0 * MEMF(esp + 0x2C); /* mulss */
    xmm5 = xmm5 * MEMF(esp + 0x30); /* mulss */
    edx = esp + 0x38;
    PUSH32(esp, 0x14);
    PUSH32(esp, edx);
    SET_LO8(edx, MEM8(esp + 0xC8));
    xmm1 = xmm1 - xmm0; /* subss */
    xmm5 = xmm5 * xmm6; /* mulss */
    eax = 0x34;
    MEMF(esp + 0x68) = xmm1; /* movss */
    MEMF(esp + 0x6C) = xmm5; /* movss */
    MEM32(esp + 0x50) = 1;
    PUSH32(esp, 0); sub_0017A580(); /* call 0x0017A580 */

loc_0011B69F: ;
    esp = esp + 0x20;
    if (TEST_Z(eax, eax)) goto loc_0011B6EB; /* je: equal / zero */

loc_0011B6A6: ;
    eax = MEM32(eax + 0x144);
    edi = eax;
    ecx = 0xB;
    esi = esp + 0x40;
    MEM8(eax + 0x2C) = 1;
    MEM8(eax + 0x2D) = 5;
    MEM8(eax + 0x2E) = 0;
    MEM8(eax + 0x2F) = 0;
    MEM8(eax + 0x30) = 0;
    MEM8(eax + 0x31) = 0;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    eax = MEM32(0x849428);
    eax++;
    (void)0; /* cmp eax, 0x1E - flags set for next jcc */
    MEM32(0x849428) = eax;
    if (CMP_LE(eax, 0x1E)) goto loc_0011B6EB; /* jle: less or equal (signed <=) */

loc_0011B6E1: ;
    MEM32(0x849428) = 0x1E;

loc_0011B6EB: ;
    MEM32(esp + 0x1C) = MEM32(esp + 0x1C) - 1;
    if ((MEM32(esp + 0x1C) != 0)) goto loc_0011B4BD; /* jne: not equal / not zero */

loc_0011B6F5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0x5C;
    esp += 4; return; /* ret */

}

/**
 * sub_0011B710
 * Original: 0x0011B710 - 0x0011B748 (56 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011B710(void)
{
    float xmm0;

loc_0011B710: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0011B715: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0011B71A: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0011B71F: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0011B724: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0011B729: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0011B72E: ;
    xmm0 = xmm0 * MEMF(0x64A428); /* mulss */
    eax = MEM32(esp + 4);
    xmm0 = xmm0 + MEMF(0x648E68); /* addss */
    MEMF(eax + 0x30) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0011B750
 * Original: 0x0011B750 - 0x0011B904 (436 bytes, 108 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011B750(void)
{
    int _flags = 0; /* fallback flag var */
    int _fpu_cmp = 0; /* FPU compare result: -1/0/1 */
    float xmm0, xmm1, xmm2, xmm3, xmm5, xmm6, xmm7;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0011B750: ;
    esp = esp - 8;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0011B75D: ;
    xmm0 = xmm0 * MEMF(0x64908C); /* mulss */
    xmm0 = xmm0 * MEMF(0x7FA24C); /* mulss */
    xmm0 = xmm0 * MEMF(0x64A4B4); /* mulss */
    xmm0 = xmm0 + MEMF(edi + 0x4C); /* addss */
    xmm7 = MEMF(0x648D14); /* movss */
    /* comiss xmm0, xmm7 - sets EFLAGS */
    MEMF(edi + 0x4C) = xmm0; /* movss */
    if ((xmm0 <= xmm7)) goto loc_0011B8FF; /* jbe: below or equal (unsigned <=) */

loc_0011B790: ;
    eax = MEM32(0x84A148);
    ecx = MEM32(0x8470DC);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x770);
    xmm2 = MEMF(eax + ecx + 0x330); /* movss */
    xmm1 = MEMF(eax + ecx + 0x338); /* movss */
    PUSH32(esp, esi);
    esi = eax + ecx + 0x330;
    xmm3 = xmm2; /* movaps */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm3 = xmm3 + xmm2; /* addss */
    /* comiss xmm3, MEMF(0x649928) - sets EFLAGS */
    if ((xmm3 <= MEMF(0x649928))) goto loc_0011B8F0; /* jbe: below or equal (unsigned <=) */

loc_0011B7DA: ;
    xmm5 = MEMF(0x648D30); /* movss */
    xmm6 = 0.0f; /* xorps self = zero */

loc_0011B7E5: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0011B7EA: ;
    edx = MEM32(esi + 8);
    eax = MEM32(esi);
    xmm3 = xmm0; /* movaps */
    xmm3 = xmm3 * MEMF(0x64A4B0); /* mulss */
    xmm3 = xmm3 + MEMF(0x64A4AC); /* addss */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E3CA0(); /* call 0x003E3CA0 */

loc_0011B809: ;
    esp = esp + 8;
    /* comiss xmm0, xmm5 - sets EFLAGS */
    MEMF(esp + 0x14) = xmm0; /* movss */
    if ((xmm0 <= xmm5)) goto loc_0011B826; /* jbe: below or equal (unsigned <=) */

loc_0011B817: ;
    xmm0 = xmm0 - xmm5; /* subss */
    /* comiss xmm0, xmm5 - sets EFLAGS */
    if ((xmm0 > xmm5)) goto loc_0011B817; /* ja: above (unsigned >) */

loc_0011B820: ;
    MEMF(esp + 0x14) = xmm0; /* movss */

loc_0011B826: ;
    /* comiss xmm6, xmm0 - sets EFLAGS */
    if ((xmm6 <= xmm0)) goto loc_0011B83F; /* jbe: below or equal (unsigned <=) */

loc_0011B82B: ;
    goto loc_0011B830;

    /* nop */

loc_0011B830: ;
    xmm0 = xmm0 + xmm5; /* addss */
    /* comiss xmm6, xmm0 - sets EFLAGS */
    if ((xmm6 > xmm0)) goto loc_0011B830; /* ja: above (unsigned >) */

loc_0011B839: ;
    MEMF(esp + 0x14) = xmm0; /* movss */

loc_0011B83F: ;
    /* comiss xmm3, xmm5 - sets EFLAGS */
    xmm0 = xmm3; /* movaps */
    MEMF(esp + 8) = xmm0; /* movss */
    if ((xmm3 <= xmm5)) goto loc_0011B85F; /* jbe: below or equal (unsigned <=) */

loc_0011B84D: ;
    /* nop */

loc_0011B850: ;
    xmm0 = xmm0 - xmm5; /* subss */
    /* comiss xmm0, xmm5 - sets EFLAGS */
    if ((xmm0 > xmm5)) goto loc_0011B850; /* ja: above (unsigned >) */

loc_0011B859: ;
    MEMF(esp + 8) = xmm0; /* movss */

loc_0011B85F: ;
    /* comiss xmm6, xmm0 - sets EFLAGS */
    if ((xmm6 <= xmm0)) goto loc_0011B873; /* jbe: below or equal (unsigned <=) */

loc_0011B864: ;
    xmm0 = xmm0 + xmm5; /* addss */
    /* comiss xmm6, xmm0 - sets EFLAGS */
    if ((xmm6 > xmm0)) goto loc_0011B864; /* ja: above (unsigned >) */

loc_0011B86D: ;
    MEMF(esp + 8) = xmm0; /* movss */

loc_0011B873: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(0x648D88)); /* fld float */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_0011B89C; /* jbe: below or equal (unsigned <=) */

loc_0011B891: ;
    xmm0 = xmm5; /* movaps */
    xmm0 = xmm0 - MEMF(esp + 0xC); /* subss */
    goto loc_0011B8A2;

loc_0011B89C: ;
    xmm0 = MEMF(esp + 0xC); /* movss */

loc_0011B8A2: ;
    xmm1 = MEMF(0x648EA8); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_0011B8CD; /* jbe: below or equal (unsigned <=) */

loc_0011B8AF: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0011B8B4: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0011B8B9: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0011B8BE: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0011B8C3: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0011B8C8: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0011B8CD: ;
    xmm0 = MEMF(edi + 0x4C); /* movss */
    xmm0 = xmm0 - xmm7; /* subss */
    /* comiss xmm0, xmm7 - sets EFLAGS */
    MEMF(edi + 0x4C) = xmm0; /* movss */
    if ((xmm0 > xmm7)) goto loc_0011B7E5; /* ja: above (unsigned >) */

loc_0011B8E4: ;
    POP32(esp, esi);
    POP32(esp, edi);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_0011B8F0: ;
    xmm0 = xmm0 - xmm7; /* subss */
    /* comiss xmm0, xmm7 - sets EFLAGS */
    if ((xmm0 > xmm7)) goto loc_0011B8F0; /* ja: above (unsigned >) */

loc_0011B8F9: ;
    MEMF(edi + 0x4C) = xmm0; /* movss */
    POP32(esp, esi);

loc_0011B8FF: ;
    POP32(esp, edi);
    esp = esp + 8;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0011B910
 * Original: 0x0011B910 - 0x0011B9A1 (145 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011B910(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_0011B910: ;
    eax = MEM32(esp + 4);
    xmm0 = MEMF(eax + 0x350); /* movss */
    xmm0 = xmm0 * MEMF(eax + 0x38); /* mulss */
    xmm1 = MEMF(eax + 0x38); /* movss */
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(eax + 0x38) = xmm1; /* movss */
    xmm0 = MEMF(eax + 0x350); /* movss */
    xmm0 = xmm0 * MEMF(eax + 0x3C); /* mulss */
    xmm1 = MEMF(eax + 0x3C); /* movss */
    xmm1 = xmm1 - xmm0; /* subss */
    xmm0 = MEMF(eax + 0x58); /* movss */
    MEMF(eax + 0x3C) = xmm1; /* movss */
    xmm1 = MEMF(0x7FA24C); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * MEMF(0x648D10); /* mulss */
    xmm2 = xmm2 + MEMF(eax + 0x5C); /* addss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm1 = MEMF(eax + 0x5C); /* movss */
    xmm2 = xmm2 + MEMF(eax + 0x44); /* addss */
    xmm1 = xmm1 + xmm0; /* addss */
    xmm0 = MEMF(0x648CE4); /* movss */
    /* comiss xmm0, MEMF(eax + 0x38) - sets EFLAGS */
    MEMF(eax + 0x44) = xmm2; /* movss */
    MEMF(eax + 0x5C) = xmm1; /* movss */
    if ((xmm0 > MEMF(eax + 0x38))) { sub_0011B9A1(); return; } /* ja: above (unsigned >) */

loc_0011B995: ;
    /* comiss xmm0, MEMF(eax + 0x3C) - sets EFLAGS */
    if ((xmm0 > MEMF(eax + 0x3C))) { sub_0011B9A1(); return; } /* ja: above (unsigned >) */

loc_0011B99B: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0011B9B0
 * Original: 0x0011B9B0 - 0x0011BA3A (138 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011B9B0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_0011B9B0: ;
    edx = MEM32(esp + 4);
    if (CMP_LE(MEM16(edx + 0x36), 5)) goto loc_0011BA34; /* jle: less or equal (signed <=) */

loc_0011B9BB: ;
    eax = MEM32(0x84A148);
    ecx = MEM32(0x8470DC);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x770);
    xmm1 = MEMF(eax + ecx + 0x330); /* movss */
    xmm0 = MEMF(eax + ecx + 0x338); /* movss */
    eax = eax + ecx + 0x330;
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm0 = MEMF(0x649928); /* movss */
    xmm2 = xmm2 + xmm1; /* addss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 > xmm2)) goto loc_0011BA2E; /* ja: above (unsigned >) */

loc_0011BA04: ;
    ecx = MEM32(edx + 0x360);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 8);
    eax = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E3CA0(); /* call 0x003E3CA0 */

loc_0011BA17: ;
    esp = esp + 8;
    xmm1 = xmm0; /* movaps */
    PUSH32(esp, 0); sub_00110E80(); /* call 0x00110E80 */

loc_0011BA22: ;
    esp = esp + 4;
    /* comiss xmm0, MEMF(0x648EA8) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x648EA8))) goto loc_0011BA34; /* jbe: below or equal (unsigned <=) */

loc_0011BA2E: ;
    MEM16(edx + 0x36) = 5;

loc_0011BA34: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0011BA40
 * Original: 0x0011BA40 - 0x0011BA53 (19 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011BA40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011BA40: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, LO8(eax));
    (void)0; /* cmp MEM8(esp + 8), 2 - flags set for next jcc */
    PUSH32(esp, ebp);
    SET_LO16(ebp, MEM16(esp + 0x24));
    PUSH32(esp, esi);
    if (CMP_B(MEM8(esp + 8), 2)) { sub_0011BA53(); return; } /* jb: below (unsigned <) */

loc_0011BA51: ;
    goto loc_0011BA51;

}

/**
 * sub_0011BBC0
 * Original: 0x0011BBC0 - 0x0011BD19 (345 bytes, 87 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011BBC0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0011BBC0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    SET_LO16(ecx, MEM16(esi + 0xC4));
    SET_LO16(edx, (uint32_t)(int32_t)SMEM8(esi + 0xBC));
    MEM16(esi + 0xB4) = MEM16(esi + 0xB4) + LO16(ecx);
    SET_LO16(ecx, (uint32_t)(int32_t)SMEM8(esi + 0xBD));
    SET_LO16(eax, MEM16(esi + 0xC0));
    MEM16(esi + 0xB6) = MEM16(esi + 0xB6) + LO16(edx);
    MEM16(esi + 0xB0) = MEM16(esi + 0xB0) + LO16(eax);
    SET_LO16(edx, (uint32_t)(int32_t)SMEM8(esi + 0xBE));
    MEM16(esi + 0xB8) = MEM16(esi + 0xB8) + LO16(ecx);
    SET_LO16(eax, MEM16(esi + 0xC2));
    SET_LO16(ecx, MEM16(esi + 0xCC));
    MEM16(esi + 0xB2) = MEM16(esi + 0xB2) - LO16(eax);
    MEM16(esi + 0xBA) = MEM16(esi + 0xBA) + LO16(edx);
    if (CMP_NE(LO16(ecx), 5)) goto loc_0011BC31; /* jne: not equal / not zero */

loc_0011BC29: ;
    eax++;
    MEM16(esi + 0xC2) = LO16(eax);

loc_0011BC31: ;
    if (CMP_AE(MEM16(esi + 0xC6), LO16(ecx))) goto loc_0011BC9A; /* jae: above or equal (unsigned >=) */

loc_0011BC3A: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0011BC3F: ;
    ecx = ZX16(MEM16(esi + 0xCE));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 0xC0));
    ecx = 0; /* xor self */
    (void)0; /* test LO16(eax), LO16(eax) - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(LO16(eax) & LO16(eax), 0)) ? 1 : 0); /* setge */
    ecx = ecx + ecx + -1;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx);
    eax = eax - ecx;
    MEM16(esi + 0xC0) = LO16(eax);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0011BC6F: ;
    ecx = ZX16(MEM16(esi + 0xCE));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 0xC4));
    ecx = 0; /* xor self */
    (void)0; /* test LO16(eax), LO16(eax) - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(LO16(eax) & LO16(eax), 0)) ? 1 : 0); /* setge */
    ecx = ecx + ecx + -1;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx);
    eax = eax - ecx;
    MEM16(esi + 0xC4) = LO16(eax);

loc_0011BC9A: ;
    ecx = ZX16(MEM16(esi + 0xC6));
    eax = MEM32(0x7FA20C);
    ecx = ecx - eax;
    if (((int32_t)ecx >= 0)) goto loc_0011BCC6; /* jns: not sign (positive) */

loc_0011BCAA: ;
    edx = eax * 4;
    eax = ZX8(MEM8(esi + 0xD3));
    ecx = 0; /* xor self */
    eax = eax - edx;
    if (((int32_t)eax >= 0)) goto loc_0011BCC0; /* jns: not sign (positive) */

loc_0011BCBE: ;
    eax = 0; /* xor self */

loc_0011BCC0: ;
    MEM8(esi + 0xD3) = LO8(eax);

loc_0011BCC6: ;
    SET_LO8(eax, MEM8(esi + 0xD3));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM16(esi + 0xC6) = LO16(ecx);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0011BCED; /* je: equal / zero */

loc_0011BCD7: ;
    SET_LO8(eax, MEM8(esi + 0xD2));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0011BD17; /* je: equal / zero */

loc_0011BCE1: ;
    SET_LO8(ecx, LO8(eax));
    SET_LO8(ecx, LO8(ecx) & 0xF);
    SET_LO8(eax, LO8(eax) >> 4);
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    if ((LO8(ecx) != 0)) goto loc_0011BD17; /* jne: not equal / not zero */

loc_0011BCED: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0011BD17; /* jne: not equal / not zero */

loc_0011BCF6: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_0011BCFD: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_0011BD17; /* jl: less (signed <) */

loc_0011BD04: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) { sub_0011BD19(); return; } /* je: equal / zero */

loc_0011BD11: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0011BD14: ;
    esp = esp + 4;

loc_0011BD17: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0011BF20
 * Original: 0x0011BF20 - 0x0011C0E7 (455 bytes, 116 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011BF20(void)
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

loc_0011BF20: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = (int32_t)MEMF(esp + 0x14); /* cvttss2si */
    ebp = 0; /* xor self */
    (void)0; /* cmp edi, ebp - flags set for next jcc */
    SET_LO16(ebx, LO16(eax));
    if (CMP_EQ(edi, ebp)) goto loc_0011C0E2; /* je: equal / zero */

loc_0011BF37: ;
    if (CMP_B(MEM8(esp + 0x18), 2)) goto loc_0011BF42; /* jb: below (unsigned <) */

loc_0011BF3E: ;
    edi = edi;

loc_0011BF40: ;
    goto loc_0011BF40;

loc_0011BF42: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xC);
    eax = 0xE0;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_0011BF54: ;
    esi = eax;
    esp = esp + 8;
    if (CMP_EQ(esi, ebp)) goto loc_0011C0E1; /* je: equal / zero */

loc_0011BF61: ;
    eax = (uint32_t)(int32_t)SMEM16(esp + 0x24);
    edx = (uint32_t)(int32_t)SMEM16(esp + 0x20);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, ebp);
    fp_push((double)SMEM32(esp + 0x24)); /* fild */
    ecx = SX16(LO16(ebx));
    MEMF(esp + 0x24) = (float)fp_top(); fp_popp(); /* fstp */
    eax = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    MEM32(0x780AB0) = 0x5F3F30;
    MEM32(0x6C0210) = 0x199;
    MEM8(0x84B538) = 1;
    MEM32(0x74FA2C) = 0x4000;
    PUSH32(esp, 0); sub_00065CB0(); /* call 0x00065CB0 */

loc_0011BFCC: ;
    ecx = (int32_t)MEMF(esp + 0x48); /* cvttss2si */
    SET_LO16(edx, MEM16(esp + 0x58));
    eax = 0; /* xor self */
    SET_LO16(eax, LO16(ecx));
    esp = esp + 0x38;
    MEM32(0x780AB0) = ebp;
    MEM32(0x6C0210) = 0xFFFFFFFFu;
    MEM8(0x84B538) = 0;
    MEM32(0x74FA2C) = ebp;
    MEM16(esi + 0xB0) = LO16(edx);
    eax = eax + 3;
    MEM16(esi + 0xD0) = LO16(eax);
    MEM16(esi + 0xB2) = LO16(eax);
    MEM16(esi + 0xB4) = LO16(ebx);
    MEM16(esi + 0xB6) = 0x5A;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0011C029: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x168;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM16(esi + 0xBA) = LO16(ebp);
    MEM16(esi + 0xC0) = LO16(ebp);
    MEM16(esi + 0xC4) = LO16(ebp);
    MEM16(esi + 0xB8) = LO16(edx);
    SET_LO8(edx, MEM8(esp + 0x1C));
    MEM8(esi + 0xBF) = LO8(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0011C05C: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x50;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = edx + 0x64;
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x648E54); /* mulss */
    MEMF(esi + 0xC8) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x18); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(0x648EA8); /* mulss */
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    edx = (int32_t)xmm1; /* cvttss2si */
    MEM16(esi + 0xC2) = LO16(edx);
    ebx = (int32_t)xmm0; /* cvttss2si */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0011C0A8: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    SET_LO8(edx, LO8(edx) - LO8(ebx));
    MEM8(esi + 0xBC) = LO8(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0011C0B8: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    SET_LO8(edx, LO8(edx) - LO8(ebx));
    MEM8(esi + 0xBD) = LO8(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0011C0C8: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    MEM16(esi + 0xC6) = LO16(ebp);
    MEM8(esi + 0xD3) = 0xFF;
    SET_LO8(edx, LO8(edx) - LO8(ebx));
    MEM8(esi + 0xBE) = LO8(edx);

loc_0011C0E1: ;
    POP32(esp, esi);

loc_0011C0E2: ;
    POP32(esp, edi);
    POP32(esp, ebp);
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
 * sub_0011C0F0
 * Original: 0x0011C0F0 - 0x0011C1B5 (197 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011C0F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0011C0F0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = ZX16(MEM16(esi + 0xC6));
    if (TEST_NZ(eax, eax)) { sub_0011C1B5(); return; } /* jne: not equal / not zero */

loc_0011C104: ;
    SET_LO16(eax, MEM16(esi + 0xC0));
    MEM16(esi + 0xB0) = MEM16(esi + 0xB0) + LO16(eax);
    SET_LO16(ecx, MEM16(esi + 0xC4));
    MEM16(esi + 0xB4) = MEM16(esi + 0xB4) + LO16(ecx);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 0xC2));
    MEM16(esi + 0xB2) = MEM16(esi + 0xB2) + LO16(eax);
    if (CMP_LE(LO16(eax) & LO16(eax), 0)) goto loc_0011C14B; /* jle: less or equal (signed <=) */

loc_0011C135: ;
    eax--;
    (void)0; /* test LO16(eax), LO16(eax) - flags set for next jcc */
    MEM16(esi + 0xC2) = LO16(eax);
    if (CMP_G(LO16(eax) & LO16(eax), 0)) goto loc_0011C14B; /* jg: greater (signed >) */

loc_0011C142: ;
    MEM16(esi + 0xC2) = 0xFFFD;

loc_0011C14B: ;
    SET_LO16(eax, MEM16(esi + 0xD0));
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0xB2);
    edx = SX16(LO16(eax));
    ecx = ecx - edx;
    if (CMP_G(ecx & ecx, 0)) goto loc_0011C186; /* jg: greater (signed >) */

loc_0011C162: ;
    MEM16(esi + 0xB6) = 0x5A;
    MEM16(esi + 0xBA) = 0;
    MEM16(esi + 0xC6) = 0x3C;
    MEM16(esi + 0xB2) = LO16(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0011C186: ;
    SET_LO16(edx, (uint32_t)(int32_t)SMEM8(esi + 0xBC));
    SET_LO16(eax, (uint32_t)(int32_t)SMEM8(esi + 0xBD));
    SET_LO16(ecx, (uint32_t)(int32_t)SMEM8(esi + 0xBE));
    MEM16(esi + 0xB6) = MEM16(esi + 0xB6) + LO16(edx);
    MEM16(esi + 0xB8) = MEM16(esi + 0xB8) + LO16(eax);
    MEM16(esi + 0xBA) = MEM16(esi + 0xBA) + LO16(ecx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0011C230
 * Original: 0x0011C230 - 0x0011C2EB (187 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011C230(void)
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

loc_0011C230: ;
    PUSH32(esp, ecx);
    xmm1 = MEMF(0x649030); /* movss */
    xmm0 = MEMF(esp + 8); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    PUSH32(esp, ebx);
    ebx = eax;
    if ((xmm1 > xmm0)) goto loc_0011C2E8; /* ja: above (unsigned >) */

loc_0011C24B: ;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(0x648CDC); /* mulss */
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    PUSH32(esp, ebp);
    ebp = (int32_t)xmm1; /* cvttss2si */
    MEMF(esp + 0x10) = xmm0; /* movss */
    if (CMP_LE(ebx & ebx, 0)) goto loc_0011C2E7; /* jle: less or equal (signed <=) */

loc_0011C26D: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    /* nop */

loc_0011C270: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0011C275: ;
    edi = eax;
    edi = edi & 0x3F;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0011C27F: ;
    esi = eax;
    esi = esi & 0x3F;
    esi = esi - 0x20;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0011C28C: ;
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ebp);
      edx = (uint32_t)(_dividend % (uint32_t)ebp); }
    edx = edx >> 4;
    (void)0; /* test edx, edx - flags set for next jcc */
    MEM32(esp + 0x10) = edx;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    if (CMP_GE(edx & edx, 0)) goto loc_0011C2A5; /* jge: greater or equal (signed >=) */

loc_0011C29F: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_0011C2A5: ;
    eax = MEM32(esp + 0x24);
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x1C);
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    esi = esi + eax;
    PUSH32(esp, ecx);
    eax = edx + edi + -32;
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0011C2C6: ;
    eax = eax & 0x80000001u;
    if (((int32_t)eax >= 0)) goto loc_0011C2D2; /* jns: not sign (positive) */

loc_0011C2CD: ;
    eax--;
    eax = eax | 0xFFFFFFFEu;
    eax++;

loc_0011C2D2: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esi;
    PUSH32(esp, 0); sub_0011BF20(); /* call 0x0011BF20 */

loc_0011C2DF: ;
    esp = esp + 0x10;
    ebx--;
    if ((ebx != 0)) goto loc_0011C270; /* jne: not equal / not zero */

loc_0011C2E5: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0011C2E7: ;
    POP32(esp, ebp);

loc_0011C2E8: ;
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
 * sub_0011C2F0
 * Original: 0x0011C2F0 - 0x0011C311 (33 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011C2F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011C2F0: ;
    eax = MEM32(0x849398);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(eax, eax)) { sub_0011C311(); return; } /* je: equal / zero */

loc_0011C2FC: ;
    ecx = MEM32(eax + 0x24);
    if (TEST_Z(ecx, ecx)) goto loc_0011C30C; /* je: equal / zero */

loc_0011C303: ;
    eax = ecx;
    ecx = MEM32(eax + 0x24);
    if (TEST_NZ(ecx, ecx)) goto loc_0011C303; /* jne: not equal / not zero */

loc_0011C30C: ;
    ebp = eax + 0x24;
    g_seh_ebp = ebp; sub_0011C316(); return; /* tail jmp 0x0011C316 */

}

/**
 * sub_0011C3D0
 * Original: 0x0011C3D0 - 0x0011C3E3 (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011C3D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011C3D0: ;
    eax = MEM32(0x849398);
    if (CMP_NE(esi, eax)) { sub_0011C3E3(); return; } /* jne: not equal / not zero */

loc_0011C3D9: ;
    eax = MEM32(esi + 0x24);
    MEM32(0x849398) = eax;
    g_seh_ebp = ebp; sub_0011C3FB(); return; /* tail jmp 0x0011C3FB */

}

/**
 * sub_0011C430
 * Original: 0x0011C430 - 0x0011C5A9 (377 bytes, 84 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011C430(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0011C430: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x64;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    eax = MEM32(0x6B826C);
    edi = ecx;
    (void)0; /* cmp MEM32(0x771760), eax - flags set for next jcc */
    ebx = eax;
    if (CMP_EQ(MEM32(0x771760), eax)) goto loc_0011C45B; /* je: equal / zero */

loc_0011C44F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_0011C455: ;
    MEM32(0x771760) = ebx;

loc_0011C45B: ;
    eax = MEM32(edi + 0x2C);
    ecx = MEM32(0x84A13C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2B0);
    edx = eax + ecx + 0x100;
    PUSH32(esp, 0x10);
    ecx = 0x88;
    PUSH32(esp, 0); sub_00536C00(); /* call 0x00536C00 */

loc_0011C47D: ;
    edx = MEM32(edi + 0x2C);
    eax = MEM32(0x84A13C);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x2B0);
    PUSH32(esp, 0x10);
    edx = edx + eax + 0xC0;
    ecx = 0x92;
    PUSH32(esp, 0); sub_00536C00(); /* call 0x00536C00 */

loc_0011C49E: ;
    PUSH32(esp, 0x1B02);
    PUSH32(esp, 0); sub_00537840(); /* call 0x00537840 */

loc_0011C4A8: ;
    ebx = 0; /* xor self */
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00537070(); /* call 0x00537070 */

loc_0011C4B0: ;
    edx = 0; /* xor self */
    ecx = 0x40300;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0011C4BC: ;
    PUSH32(esp, 1);
    MEM32(0x549AE8) = ebx;
    PUSH32(esp, 0); sub_00537190(); /* call 0x00537190 */

loc_0011C4C9: ;
    edx = esi;
    ecx = 0x40354;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0011C4D5: ;
    edx = 0; /* xor self */
    ecx = 0x4035C;
    MEM32(0x549ADC) = esi;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0011C4E7: ;
    ecx = MEM32(0x5499F0);
    ecx = ecx | 0x1200;
    eax = 0; /* xor self */
    MEM32(0x549AF8) = ebx;
    MEM32(0x5499F0) = ecx;
    MEM32(0x549B90) = ebx;
    PUSH32(esp, 0); sub_00538690(); /* call 0x00538690 */

loc_0011C50C: ;
    ecx = MEM32(ebp + 8);
    eax = 0; /* xor self */
    if (CMP_EQ(ecx, ebx)) { sub_0011C5A9(); return; } /* je: equal / zero */

loc_0011C519: ;
    PUSH32(esp, 0); sub_003FA570(); /* call 0x003FA570 */

loc_0011C51E: ;
    ecx = 4;
    MEM32(0x547360) = ecx;
    MEM32(0x547370) = ecx;
    ecx = MEM32(0x5499F0);
    ecx = ecx | 0x800;
    eax = 2;
    MEM32(0x5499F0) = ecx;
    edx = 1;
    ecx = 0x40304;
    MEM32(0x547368) = ebx;
    MEM32(0x54736C) = eax;
    MEM32(0x547378) = ebx;
    MEM32(0x54737C) = eax;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0011C56B: ;
    edx = 0x302;
    ecx = 0x40344;
    MEM32(0x549AE4) = 1;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0011C584: ;
    edx = 0x303;
    ecx = 0x40348;
    MEM32(0x549AF0) = 0x302;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0011C59D: ;
    MEM32(0x549AF4) = 0x303;
    g_seh_ebp = ebp; sub_0011C5EB(); return; /* tail jmp 0x0011C5EB */

}

/**
 * sub_0011C7F0
 * Original: 0x0011C7F0 - 0x0011C813 (35 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011C7F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011C7F0: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x73);
    eax = 0x98;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_0011C807: ;
    edi = eax;
    esp = esp + 8;
    if (TEST_NZ(edi, edi)) { sub_0011C813(); return; } /* jne: not equal / not zero */

loc_0011C810: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0011C8F0
 * Original: 0x0011C8F0 - 0x0011C956 (102 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011C8F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0011C8F0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0xFF;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x73);
    eax = 0x98;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_0011C904: ;
    esi = eax;
    esp = esp + 8;
    if (TEST_Z(esi, esi)) goto loc_0011C951; /* je: equal / zero */

loc_0011C90D: ;
    PUSH32(esp, 0); sub_0011E130(); /* call 0x0011E130 */

loc_0011C912: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_0011C956(); return; } /* jne: not equal / not zero */

loc_0011C916: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0011C951; /* jne: not equal / not zero */

loc_0011C91F: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_0011C926: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_0011C951; /* jl: less (signed <) */

loc_0011C92D: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) goto loc_0011C945; /* je: equal / zero */

loc_0011C93A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0011C93D: ;
    esp = esp + 4;
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0011C945: ;
    edx = 1;
    eax = esi;
    PUSH32(esp, 0); sub_000DA5E0(); /* call 0x000DA5E0 */

loc_0011C951: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0011C9C0
 * Original: 0x0011C9C0 - 0x0011C9E5 (37 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011C9C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011C9C0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x73);
    eax = 0x98;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_0011C9D8: ;
    edi = eax;
    esp = esp + 8;
    if (TEST_NZ(edi, edi)) { sub_0011C9E5(); return; } /* jne: not equal / not zero */

loc_0011C9E1: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0011CAF0
 * Original: 0x0011CAF0 - 0x0011CDE7 (759 bytes, 216 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011CAF0(void)
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

loc_0011CAF0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x64;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    xmm0 = MEMF(ebx + 0x30); /* movss */
    /* ucomiss xmm0, MEMF(0x648D34) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (1 /* jnp after test - parity */) goto loc_0011CB72; /* jnp: not parity */

loc_0011CB11: ;
    xmm0 = xmm0 - MEMF(0x7FA21C); /* subss */
    xmm1 = 0.0f; /* xorps self = zero */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(ebx + 0x30) = xmm0; /* movss */
    if ((xmm1 < xmm0)) goto loc_0011CB72; /* jb: below (unsigned <) */

loc_0011CB26: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0011CDE0; /* jne: not equal / not zero */

loc_0011CB33: ;
    edx = ebx;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_0011CB3A: ;
    eax = MEM32(ebx);
    if (CMP_L(eax, 2)) goto loc_0011CDE0; /* jl: less (signed <) */

loc_0011CB45: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) goto loc_0011CB5F; /* je: equal / zero */

loc_0011CB52: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0011CB55: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0011CB5F: ;
    edx = 1;
    eax = ebx;
    PUSH32(esp, 0); sub_000DA5E0(); /* call 0x000DA5E0 */

loc_0011CB6B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0011CB72: ;
    esi = ebx;
    PUSH32(esp, 0); sub_0011D950(); /* call 0x0011D950 */

loc_0011CB79: ;
    eax = MEM32(ebx + 0x34);
    if (TEST_Z(eax, eax)) goto loc_0011CC7D; /* je: equal / zero */

loc_0011CB84: ;
    edx = MEM32(eax + 0x3C8);
    ecx = MEM32(ebx + 0x5C);
    eax = MEM32(eax + 0x4B0);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x24);
    eax = MEM32(ebx + 0x60);
    ecx = MEM32(ecx + 8);
    esi = ebx + 0x38;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003ECC70(); /* call 0x003ECC70 */

loc_0011CBA6: ;
    edx = MEM32(ebx + 0x34);
    eax = ebx + 0x4C;
    PUSH32(esp, eax);
    eax = MEM32(edx + 0x4B0);
    ecx = MEM32(eax + 0x24);
    eax = MEM32(ebx + 0x60);
    ecx = MEM32(ecx + 8);
    esi = ebx + 0x48;
    edi = ebx + 0x44;
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_003ECF40(); /* call 0x003ECF40 */

loc_0011CBC9: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E2270(); /* call 0x003E2270 */

loc_0011CBCF: ;
    esp = esp + 0x14;
    if (TEST_NZ(eax, eax)) goto loc_0011CC22; /* jne: not equal / not zero */

loc_0011CBD6: ;
    eax = MEM32(ebx + 0x34);
    edx = MEM32(eax + 0x3C8);
    eax = MEM32(eax + 0x4B0);
    ecx = ebx + 0x4C;
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x24);
    eax = MEM32(ebx + 0x60);
    ecx = MEM32(ecx + 8);
    PUSH32(esp, edx);
    esi = ebx + 0x48;
    PUSH32(esp, 0); sub_003ECF40(); /* call 0x003ECF40 */

loc_0011CBFB: ;
    edx = MEM32(ebx + 0x4C);
    eax = MEM32(ebx + 0x48);
    ecx = MEM32(edi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp + 0x44;
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_003E48E0(); /* call 0x003E48E0 */

loc_0011CC11: ;
    esp = esp + 0x14;
    edx = eax;
    PUSH32(esp, edx);
    PUSH32(esp, 0x5A02F0);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_0011CC22: ;
    xmm0 = MEMF(ebx + 0x38); /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0x3C); /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0x40); /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */

loc_0011CC43: ;
    edx = MEM32(esp + 0x20);
    xmm0 = MEMF(esp + 0x18); /* movss */
    edi = ebx + 0x58;
    PUSH32(esp, edi);
    eax = ebx + 0x54;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x24);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    edx = 0; /* xor self */
    esi = esp + 0x24;
    ecx = 0; /* xor self */
    PUSH32(esp, 0); sub_002A8700(); /* call 0x002A8700 */

loc_0011CC68: ;
    esp = esp + 0x10;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    SET_LO8(ecx, 1);
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0011CD05; /* jne: not equal / not zero */

loc_0011CC75: ;
    MEM8(ebx + 0x64) = LO8(ecx);
    goto loc_0011CD09;

loc_0011CC7D: ;
    SET_LO8(eax, MEM8(ebx + 0x50));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0011CC22; /* je: equal / zero */

loc_0011CC84: ;
    eax = MEM32(ebx + 0x2C);
    ecx = MEM32(0x8470DC);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x770);
    xmm0 = MEMF(eax + ecx + 0x338); /* movss */
    xmm1 = MEMF(eax + ecx + 0x334); /* movss */
    xmm2 = MEMF(eax + ecx + 0x330); /* movss */
    eax = eax + ecx;
    edx = ebx + 0x38;
    eax = esp + 0x24;
    ecx = esp + 0x18;
    MEMF(esp + 0x24) = xmm2; /* movss */
    MEMF(esp + 0x28) = xmm1; /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0xC) = ecx;
    ecx = MEM32(esp + 0x14);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x10);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0xC);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    goto loc_0011CC43;

loc_0011CD05: ;
    MEM8(ebx + 0x64) = 0;

loc_0011CD09: ;
    eax = MEM32(ebx + 0x34);
    if (TEST_Z(eax, eax)) goto loc_0011CD1D; /* je: equal / zero */

loc_0011CD10: ;
    edx = MEM32(eax + 0x3C8);
    if (TEST_NZ(edx, edx)) goto loc_0011CD1D; /* jne: not equal / not zero */

loc_0011CD1A: ;
    MEM8(ebx + 0x64) = LO8(ecx);

loc_0011CD1D: ;
    xmm1 = MEMF(0x648D10); /* movss */
    xmm2 = (float)(int32_t)MEM32(0x7F9FF0); /* cvtsi2ss */
    xmm0 = MEMF(ebx + 0x54); /* movss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm0 = xmm0 - xmm2; /* subss */
    xmm2 = (float)(int32_t)MEM32(0x7F9FEC); /* cvtsi2ss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm1 = MEMF(edi); /* movss */
    xmm1 = xmm1 - xmm2; /* subss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm2 = xmm2 + xmm1; /* addss */
    MEMF(esp + 0x14) = xmm2; /* movss */
    xmm0 = sqrtf(MEMF(esp + 0x14)); /* sqrtss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    eax = (int32_t)MEMF(esp + 0x10); /* cvttss2si */
    if (TEST_NZ(eax, eax)) goto loc_0011CD8C; /* jne: not equal / not zero */

loc_0011CD7C: ;
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    goto loc_0011CDC8;

loc_0011CD8C: ;
    xmm1 = MEMF(0x648D14); /* movss */
    xmm2 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm2 = xmm2 * MEMF(0x649404); /* mulss */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 - xmm2; /* subss */
    xmm2 = 0.0f; /* xorps self = zero */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    MEMF(esp + 0xC) = xmm0; /* movss */
    if ((xmm2 <= xmm0)) goto loc_0011CDBD; /* jbe: below or equal (unsigned <=) */

loc_0011CDB5: ;
    MEMF(esp + 0xC) = xmm2; /* movss */
    goto loc_0011CDC8;

loc_0011CDBD: ;
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_0011CDC8; /* jbe: below or equal (unsigned <=) */

loc_0011CDC2: ;
    MEMF(esp + 0xC) = xmm1; /* movss */

loc_0011CDC8: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0011CDDA: ;
    MEM8(ebx + 0x86) = LO8(eax);

loc_0011CDE0: ;
    POP32(esp, edi);
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
 * sub_0011CDF0
 * Original: 0x0011CDF0 - 0x0011D0E9 (761 bytes, 186 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011CDF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011CDF0: ;
    eax = MEM32(0x6B842C);
    (void)0; /* cmp MEM32(0x771760), eax - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    if (CMP_EQ(MEM32(0x771760), eax)) goto loc_0011CE0D; /* je: equal / zero */

loc_0011CE01: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_0011CE07: ;
    MEM32(0x771760) = esi;

loc_0011CE0D: ;
    eax = MEM32(0x77182C);
    esi = 0x1B02;
    if (CMP_EQ(eax, esi)) goto loc_0011CE27; /* je: equal / zero */

loc_0011CE1B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00537840(); /* call 0x00537840 */

loc_0011CE21: ;
    MEM32(0x77182C) = esi;

loc_0011CE27: ;
    eax = MEM32(0x771828);
    esi = 0x901;
    if (CMP_EQ(eax, esi)) goto loc_0011CE41; /* je: equal / zero */

loc_0011CE35: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00537070(); /* call 0x00537070 */

loc_0011CE3B: ;
    MEM32(0x771828) = esi;

loc_0011CE41: ;
    eax = MEM32(0x771824);
    PUSH32(esp, ebp);
    ebp = 1;
    if (CMP_EQ(eax, ebp)) goto loc_0011CE68; /* je: equal / zero */

loc_0011CE50: ;
    edx = ebp;
    ecx = 0x40304;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0011CE5C: ;
    MEM32(0x549AE4) = ebp;
    MEM32(0x771824) = ebp;

loc_0011CE68: ;
    eax = MEM32(0x771820);
    edi = 0; /* xor self */
    if (CMP_EQ(eax, edi)) goto loc_0011CE8B; /* je: equal / zero */

loc_0011CE73: ;
    edx = 0; /* xor self */
    ecx = 0x40300;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0011CE7F: ;
    MEM32(0x549AE8) = edi;
    MEM32(0x771820) = edi;

loc_0011CE8B: ;
    (void)0; /* cmp MEM32(0x77181C), edi - flags set for next jcc */
    PUSH32(esp, ebx);
    ebx = 2;
    if (CMP_EQ(MEM32(0x77181C), edi)) goto loc_0011CF17; /* je: equal / zero */

loc_0011CE99: ;
    esi = MEM32(0x5499E8);
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_0011CEB5; /* jb: below (unsigned <) */

loc_0011CEA6: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_0011CEB5: ;
    MEM32(eax) = 0x4030C;
    MEM32(eax + 4) = edi;
    ecx = MEM32(0x549B40);
    MEM32(eax + 8) = 0x41D78;
    MEM32(eax + 0xC) = ecx;
    eax = eax + 0x10;
    MEM32(esi) = eax;
    eax = MEM32(0x549C34);
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(0x549C34) = edi;
    if (CMP_NE(eax, ebx)) goto loc_0011CF11; /* jne: not equal / not zero */

loc_0011CEE2: ;
    PUSH32(esp, 0); sub_005384E0(); /* call 0x005384E0 */

loc_0011CEE7: ;
    PUSH32(esp, 0); sub_00536810(); /* call 0x00536810 */

loc_0011CEEC: ;
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_0011CF02; /* jb: below (unsigned <) */

loc_0011CEF3: ;
    eax = MEM32(0x54A8B8);
    edx = eax;
    edx = edx >> 1;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_0011CF02: ;
    PUSH32(esp, esi);
    edx = eax;
    PUSH32(esp, 0); sub_00538030(); /* call 0x00538030 */

loc_0011CF0A: ;
    PUSH32(esp, 0); sub_00537E30(); /* call 0x00537E30 */

loc_0011CF0F: ;
    MEM32(esi) = eax;

loc_0011CF11: ;
    MEM32(0x77181C) = edi;

loc_0011CF17: ;
    eax = MEM32(0x771818);
    esi = 0x203;
    if (CMP_EQ(eax, esi)) goto loc_0011CF3D; /* je: equal / zero */

loc_0011CF25: ;
    edx = esi;
    ecx = 0x40354;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0011CF31: ;
    MEM32(0x549ADC) = esi;
    MEM32(0x771818) = esi;

loc_0011CF3D: ;
    if (CMP_EQ(MEM32(0x771814), edi)) goto loc_0011CF5D; /* je: equal / zero */

loc_0011CF45: ;
    edx = 0; /* xor self */
    ecx = 0x4035C;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0011CF51: ;
    MEM32(0x549AF8) = edi;
    MEM32(0x771814) = edi;

loc_0011CF5D: ;
    if (CMP_EQ(MEM32(0x771810), edi)) goto loc_0011CF7B; /* je: equal / zero */

loc_0011CF65: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | 0x1200;
    MEM32(0x549B90) = edi;
    MEM32(0x771810) = edi;

loc_0011CF7B: ;
    ecx = MEM32(0x7717E4);
    eax = 4;
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    ecx = 0x800;
    if (CMP_EQ(ecx, eax)) goto loc_0011CF9F; /* je: equal / zero */

loc_0011CF8F: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | ecx;
    MEM32(0x547360) = eax;
    MEM32(0x7717E4) = eax;

loc_0011CF9F: ;
    if (CMP_EQ(MEM32(0x7717C4), edi)) goto loc_0011CFB9; /* je: equal / zero */

loc_0011CFA7: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | ecx;
    MEM32(0x547368) = edi;
    MEM32(0x7717C4) = edi;

loc_0011CFB9: ;
    if (CMP_EQ(MEM32(0x7717B4), ebx)) goto loc_0011CFD3; /* je: equal / zero */

loc_0011CFC1: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | ecx;
    MEM32(0x54736C) = ebx;
    MEM32(0x7717B4) = ebx;

loc_0011CFD3: ;
    if (CMP_EQ(MEM32(0x7717A4), eax)) goto loc_0011CFEB; /* je: equal / zero */

loc_0011CFDB: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | ecx;
    MEM32(0x547370) = eax;
    MEM32(0x7717A4) = eax;

loc_0011CFEB: ;
    if (CMP_EQ(MEM32(0x771784), edi)) goto loc_0011D005; /* je: equal / zero */

loc_0011CFF3: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | ecx;
    MEM32(0x547378) = edi;
    MEM32(0x771784) = edi;

loc_0011D005: ;
    if (CMP_EQ(MEM32(0x771774), ebx)) goto loc_0011D01F; /* je: equal / zero */

loc_0011D00D: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | ecx;
    MEM32(0x54737C) = ebx;
    MEM32(0x771774) = ebx;

loc_0011D01F: ;
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    PUSH32(esp, 0); sub_005379C0(); /* call 0x005379C0 */

loc_0011D027: ;
    eax = MEM32(0x5499F0);
    ecx = 3;
    MEM32(0x547330) = ecx;
    MEM32(0x547334) = ecx;
    ecx = MEM32(0x7717E8);
    eax = eax | ebp;
    (void)0; /* cmp ecx, ebp - flags set for next jcc */
    POP32(esp, ebx);
    if (CMP_EQ(ecx, ebp)) goto loc_0011D05B; /* je: equal / zero */

loc_0011D04A: ;
    eax = eax | 0x800;
    MEM32(0x5473E0) = ebp;
    MEM32(0x7717E8) = ebp;

loc_0011D05B: ;
    if (CMP_EQ(MEM32(0x7717A8), ebp)) goto loc_0011D074; /* je: equal / zero */

loc_0011D063: ;
    eax = eax | 0x800;
    MEM32(0x5473F0) = ebp;
    MEM32(0x7717A8) = ebp;

loc_0011D074: ;
    eax = eax | 0x400;
    MEM32(0x5499F0) = eax;
    eax = MEM32(0x77180C);
    esi = 0x302;
    (void)0; /* cmp eax, esi - flags set for next jcc */
    MEM32(0x547384) = edi;
    POP32(esp, ebp);
    if (CMP_EQ(eax, esi)) goto loc_0011D0AB; /* je: equal / zero */

loc_0011D093: ;
    edx = esi;
    ecx = 0x40344;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0011D09F: ;
    MEM32(0x549AF0) = esi;
    MEM32(0x77180C) = esi;

loc_0011D0AB: ;
    eax = MEM32(0x771808);
    esi = 0x303;
    if (CMP_EQ(eax, esi)) goto loc_0011D0D1; /* je: equal / zero */

loc_0011D0B9: ;
    edx = esi;
    ecx = 0x40348;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0011D0C5: ;
    MEM32(0x549AF4) = esi;
    MEM32(0x771808) = esi;

loc_0011D0D1: ;
    if (CMP_EQ(MEM32(0x77175C), edi)) goto loc_0011D0E6; /* je: equal / zero */

loc_0011D0D9: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00538690(); /* call 0x00538690 */

loc_0011D0E0: ;
    MEM32(0x77175C) = edi;

loc_0011D0E6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0011D0F0
 * Original: 0x0011D0F0 - 0x0011D7ED (1789 bytes, 397 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011D0F0(void)
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

loc_0011D0F0: ;
    esp = esp - 0x118;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x120);
    SET_LO8(eax, MEM8(esi + 0x64));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0011D7E5; /* jne: not equal / not zero */

loc_0011D109: ;
    eax = MEM32(esi + 0x2C);
    PUSH32(esp, edi);
    edi = (uint32_t)(int32_t)SMEM16(esp + 0x128);
    if (CMP_NE(eax, edi)) goto loc_0011D7E4; /* jne: not equal / not zero */

loc_0011D11D: ;
    edx = MEM32(0x8470DC);
    ecx = edi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x770);
    eax = esi + 0x38;
    MEM32(esp + 8) = eax;
    eax = ecx + edx + 0x330;
    ecx = esp + 0x18;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(esp + 0xC);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 8);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x10);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    edx = esp + 0x18;
    MEM32(esp + 0xC) = edx;
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
    MEMF(esp + 0x10) = xmm1; /* movss */
    xmm2 = MEMF(esp + 0x10); /* movss */
    xmm2 = xmm2 / MEMF(esi + 0x68); /* divss */
    xmm1 = MEMF(0x648D14); /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 - xmm2; /* subss */
    xmm2 = 0.0f; /* xorps self = zero */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    MEMF(esp + 8) = xmm0; /* movss */
    if ((xmm2 <= xmm0)) goto loc_0011D1D1; /* jbe: below or equal (unsigned <=) */

loc_0011D1C9: ;
    MEMF(esp + 8) = xmm2; /* movss */
    goto loc_0011D1DC;

loc_0011D1D1: ;
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_0011D1DC; /* jbe: below or equal (unsigned <=) */

loc_0011D1D6: ;
    MEMF(esp + 8) = xmm1; /* movss */

loc_0011D1DC: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = esi + 0x44;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_003E2270(); /* call 0x003E2270 */

loc_0011D1E7: ;
    esp = esp + 4;
    if (TEST_NZ(eax, eax)) goto loc_0011D246; /* jne: not equal / not zero */

loc_0011D1EE: ;
    eax = esp + 0x20;
    ebx = eax;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_0011D1F9: ;
    xmm0 = MEMF(ebp + 8); /* movss */
    xmm0 = xmm0 * MEMF(esp + 0x28); /* mulss */
    xmm1 = MEMF(ebp + 4); /* movss */
    xmm1 = xmm1 * MEMF(esp + 0x24); /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(ebp); /* movss */
    xmm1 = xmm1 * MEMF(esp + 0x20); /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = 0.0f; /* xorps self = zero */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 > xmm0)) goto loc_0011D237; /* ja: above (unsigned >) */

loc_0011D22A: ;
    xmm1 = MEMF(0x648D14); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_0011D23A; /* jbe: below or equal (unsigned <=) */

loc_0011D237: ;
    xmm0 = xmm1; /* movaps */

loc_0011D23A: ;
    xmm0 = xmm0 * MEMF(esp + 0x10); /* mulss */
    MEMF(esp + 0x10) = xmm0; /* movss */

loc_0011D246: ;
    eax = ZX8(MEM8(esi + 0x86));
    MEM32(esp + 0x14) = eax;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0011D25E: ;
    xmm1 = 0.0f; /* xorps self = zero */
    ecx = ZX8(LO8(eax));
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x648E54); /* mulss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEM8(esi + 0x86) = LO8(eax);
    MEMF(esp + 0x10) = xmm0; /* movss */
    if ((xmm1 > xmm0)) goto loc_0011D28E; /* ja: above (unsigned >) */

loc_0011D281: ;
    xmm1 = MEMF(0x648D14); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_0011D294; /* jbe: below or equal (unsigned <=) */

loc_0011D28E: ;
    MEMF(esp + 0x10) = xmm1; /* movss */

loc_0011D294: ;
    eax = ZX8(MEM8(esi + 0x87));
    edx = ZX8(MEM8(esi + 0x8A));
    edx = edx - eax;
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x18) = eax;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fiadd dword ptr [esp + 0x18] */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0011D2BD: ;
    ecx = ZX8(MEM8(esi + 0x8B));
    MEM8(esp + 0x1E) = LO8(eax);
    eax = ZX8(MEM8(esi + 0x88));
    ecx = ecx - eax;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = eax;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fiadd dword ptr [esp + 0x18] */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0011D2EA: ;
    edx = ZX8(MEM8(esi + 0x8C));
    MEM8(esp + 0x1D) = LO8(eax);
    eax = ZX8(MEM8(esi + 0x89));
    edx = edx - eax;
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x18) = eax;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fiadd dword ptr [esp + 0x18] */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0011D317: ;
    ecx = MEM32(0x84A13C);
    MEM8(esp + 0x1F) = LO8(eax);
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2B0);
    xmm1 = MEMF(eax + ecx + 0x200); /* movss */
    xmm0 = MEMF(eax + ecx + 0x1FC); /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm2 = xmm2 + xmm1; /* addss */
    MEMF(esp + 0x14) = xmm2; /* movss */
    xmm0 = sqrtf(MEMF(esp + 0x14)); /* sqrtss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    ecx = MEM32(0x84A13C);
    xmm0 = MEMF(eax + ecx + 0x224); /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    xmm0 = MEMF(eax + ecx + 0x228); /* movss */
    eax = MEM32(esi + 0x90);
    ebp = 0; /* xor self */
    (void)0; /* cmp eax, ebp - flags set for next jcc */
    MEMF(esp + 0x40) = xmm0; /* movss */
    MEM32(esp + 0x18) = ebp;
    if (CMP_BE(eax, ebp)) goto loc_0011D60C; /* jbe: below or equal (unsigned <=) */

loc_0011D397: ;
    xmm3 = MEMF(0x648D14); /* movss */
    xmm2 = xmm3; /* movaps */
    xmm2 = xmm2 / MEMF(esp + 0x10); /* divss */
    MEMF(esp + 0x14) = xmm2; /* movss */
    goto loc_0011D3C0;

loc_0011D3B0: ;
    xmm3 = MEMF(0x648D14); /* movss */
    xmm2 = MEMF(esp + 0x14); /* movss */
    edi = edi;

loc_0011D3C0: ;
    xmm1 = MEMF(esi + 0x58); /* movss */
    xmm1 = xmm1 - MEMF(esp + 0x40); /* subss */
    xmm0 = MEMF(esi + 0x54); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x3C); /* subss */
    xmm4 = xmm1; /* movaps */
    xmm4 = xmm4 * xmm1; /* mulss */
    MEMF(esp + 0x34) = xmm1; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm4 = xmm4 + xmm1; /* addss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    MEMF(esp + 0x2C) = xmm4; /* movss */
    xmm0 = sqrtf(MEMF(esp + 0x2C)); /* sqrtss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm1 = 0.0f; /* xorps self = zero */
    xmm0 = xmm2; /* movaps */
    xmm0 = xmm0 * MEMF(esp + 0x38); /* mulss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(esp + 0x10) = xmm0; /* movss */
    if ((xmm1 <= xmm0)) goto loc_0011D425; /* jbe: below or equal (unsigned <=) */

loc_0011D41D: ;
    MEMF(esp + 0x10) = xmm1; /* movss */
    goto loc_0011D430;

loc_0011D425: ;
    /* comiss xmm0, xmm3 - sets EFLAGS */
    if ((xmm0 <= xmm3)) goto loc_0011D430; /* jbe: below or equal (unsigned <=) */

loc_0011D42A: ;
    MEMF(esp + 0x10) = xmm3; /* movss */

loc_0011D430: ;
    eax = MEM32(esi + 0x94);
    eax = MEM32(eax + ebp + 8);
    PUSH32(esp, 0);
    ecx = 0; /* xor self */
    PUSH32(esp, 0); sub_000761F0(); /* call 0x000761F0 */

loc_0011D443: ;
    edi = eax;
    esp = esp + 4;
    if (TEST_NZ(edi, edi)) goto loc_0011D45A; /* jne: not equal / not zero */

loc_0011D44C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_0011D452: ;
    MEM32(0x771764) = edi;
    goto loc_0011D471;

loc_0011D45A: ;
    if (CMP_EQ(MEM32(0x771764), edi)) goto loc_0011D471; /* je: equal / zero */

loc_0011D462: ;
    eax = 0; /* xor self */
    ecx = edi;
    PUSH32(esp, 0); sub_003FA570(); /* call 0x003FA570 */

loc_0011D46B: ;
    MEM32(0x771764) = edi;

loc_0011D471: ;
    ecx = MEM32(esi + 0x94);
    xmm1 = MEMF(ecx + ebp); /* movss */
    xmm3 = MEMF(ecx + ebp); /* movss */
    xmm0 = MEMF(esp + 0x10); /* movss */
    xmm0 = xmm0 * MEMF(ecx + ebp + 4); /* mulss */
    xmm0 = xmm0 * MEMF(0x648CF4); /* mulss */
    xmm0 = xmm0 + MEMF(ecx + ebp + 4); /* addss */
    edx = ZX8(MEM8(esi + 0x86));
    xmm1 = xmm1 * MEMF(esp + 0x30); /* mulss */
    xmm3 = xmm3 * MEMF(esp + 0x34); /* mulss */
    xmm5 = MEMF(0x648D1C); /* movss */
    eax = ecx + ebp;
    xmm2 = xmm0; /* movaps */
    xmm0 = MEMF(esi + 0x54); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    xmm1 = MEMF(esi + 0x58); /* movss */
    xmm1 = xmm1 - xmm3; /* subss */
    MEM32(esp + 0x44) = edx;
    fp_push((double)SMEM32(esp + 0x44)); /* fild */
    xmm3 = xmm0; /* movaps */
    xmm4 = xmm1; /* movaps */
    xmm0 = xmm0 + xmm2; /* addss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm1 = xmm1 + xmm2; /* addss */
    xmm3 = xmm3 - xmm2; /* subss */
    xmm4 = xmm4 - xmm2; /* subss */
    MEMF(esp + 0xD4) = xmm0; /* movss */
    MEMF(esp + 0xF0) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0xF4) = xmm1; /* movss */
    MEMF(esp + 0x110) = xmm1; /* movss */
    xmm1 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0xB8) = xmm3; /* movss */
    MEMF(esp + 0xBC) = xmm4; /* movss */
    MEMF(esp + 0xC0) = xmm5; /* movss */
    MEMF(esp + 0xD8) = xmm4; /* movss */
    MEMF(esp + 0xDC) = xmm5; /* movss */
    MEMF(esp + 0xF8) = xmm5; /* movss */
    MEMF(esp + 0x10C) = xmm3; /* movss */
    MEMF(esp + 0x114) = xmm5; /* movss */
    MEMF(esp + 0xC8) = xmm1; /* movss */
    MEMF(esp + 0xE4) = xmm0; /* movss */
    MEMF(esp + 0x100) = xmm0; /* movss */
    MEMF(esp + 0x11C) = xmm1; /* movss */
    MEMF(esp + 0xCC) = xmm1; /* movss */
    MEMF(esp + 0xE8) = xmm1; /* movss */
    MEMF(esp + 0x104) = xmm0; /* movss */
    MEMF(esp + 0x120) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0011D5B6: ;
    ecx = esp + 0xC5;
    edx = 4;

loc_0011D5C2: ;
    SET_LO8(ebx, MEM8(esp + 0x1F));
    MEM8(ecx + -1) = LO8(ebx);
    SET_LO8(ebx, MEM8(esp + 0x1D));
    MEM8(ecx) = LO8(ebx);
    SET_LO8(ebx, MEM8(esp + 0x1E));
    MEM8(ecx + 1) = LO8(ebx);
    MEM8(ecx + 2) = LO8(eax);
    ecx = ecx + 0x1C;
    edx--;
    if ((edx != 0)) goto loc_0011D5C2; /* jne: not equal / not zero */

loc_0011D5DF: ;
    PUSH32(esp, 0x1C);
    eax = esp + 0xBC;
    PUSH32(esp, eax);
    PUSH32(esp, 4);
    PUSH32(esp, 8);
    PUSH32(esp, 0); sub_0053A600(); /* call 0x0053A600 */

loc_0011D5F2: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esi + 0x90);
    eax++;
    ebp = ebp + 0xC;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x18) = eax;
    if (CMP_B(eax, ecx)) goto loc_0011D3B0; /* jb: below (unsigned <) */

loc_0011D60C: ;
    SET_LO8(eax, MEM8(0x75C0B4));
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_0011D6AF; /* jbe: below or equal (unsigned <=) */

loc_0011D619: ;
    edi = MEM32(0x75C0B0);
    eax = MEM32(edi + 8);
    if (TEST_NZ(eax, eax)) goto loc_0011D64E; /* jne: not equal / not zero */

loc_0011D626: ;
    ecx = MEM32(edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5E0D08);
    PUSH32(esp, 0x14);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_0005E4E0(); /* call 0x0005E4E0 */

loc_0011D637: ;
    esp = esp + 0xC;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_0011D63F: ;
    edx = MEM32(0x75C0B0);
    MEM32(edx + 8) = eax;
    edi = MEM32(0x75C0B0);

loc_0011D64E: ;
    eax = MEM32(edi + 0x10);
    if (TEST_NZ(eax, eax)) goto loc_0011D67A; /* jne: not equal / not zero */

loc_0011D655: ;
    eax = MEM32(edi + 8);
    PUSH32(esp, 0); sub_0034F320(); /* call 0x0034F320 */

loc_0011D65D: ;
    MEM32(edi + 0x10) = eax;
    edi = MEM32(0x75C0B0);
    eax = MEM32(edi + 0x10);
    if (TEST_NZ(eax, eax)) goto loc_0011D67A; /* jne: not equal / not zero */

loc_0011D66D: ;
    MEM32(edi + 0x10) = 0xFFFFFFFFu;
    edi = MEM32(0x75C0B0);

loc_0011D67A: ;
    ecx = MEM32(edi + 0x10);
    if (CMP_NE(ecx, 0xFFFFFFFFu)) goto loc_0011D6A3; /* jne: not equal / not zero */

loc_0011D682: ;
    ecx = MEM32(edi + 4);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = edi + 4;
    if (TEST_NZ(ecx, ecx)) goto loc_0011D69E; /* jne: not equal / not zero */

loc_0011D68C: ;
    PUSH32(esp, eax);
    eax = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00075E90(); /* call 0x00075E90 */

loc_0011D695: ;
    edi = MEM32(0x75C0B0);
    esp = esp + 8;

loc_0011D69E: ;
    edi = MEM32(edi + 4);
    goto loc_0011D6AB;

loc_0011D6A3: ;
    PUSH32(esp, 0); sub_0034F360(); /* call 0x0034F360 */

loc_0011D6A8: ;
    edi = MEM32(eax + 4);

loc_0011D6AB: ;
    if (TEST_NZ(edi, edi)) goto loc_0011D6C4; /* jne: not equal / not zero */

loc_0011D6AF: ;
    PUSH32(esp, 0);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_0011D6B8: ;
    MEM32(0x771764) = 0;
    goto loc_0011D6DB;

loc_0011D6C4: ;
    if (CMP_EQ(MEM32(0x771764), edi)) goto loc_0011D6DB; /* je: equal / zero */

loc_0011D6CC: ;
    eax = 0; /* xor self */
    ecx = edi;
    PUSH32(esp, 0); sub_003FA570(); /* call 0x003FA570 */

loc_0011D6D5: ;
    MEM32(0x771764) = edi;

loc_0011D6DB: ;
    xmm3 = MEMF(0x649108); /* movss */
    xmm1 = MEMF(esi + 0x58); /* movss */
    xmm0 = MEMF(esi + 0x54); /* movss */
    xmm4 = MEMF(0x648D1C); /* movss */
    xmm2 = MEMF(esi + 0x54); /* movss */
    SET_LO8(edx, MEM8(esi + 0x86));
    xmm1 = xmm1 - xmm3; /* subss */
    MEMF(esp + 0x4C) = xmm1; /* movss */
    MEMF(esp + 0x68) = xmm1; /* movss */
    xmm1 = MEMF(esi + 0x58); /* movss */
    xmm0 = xmm0 - xmm3; /* subss */
    xmm1 = xmm1 + xmm3; /* addss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    xmm2 = xmm2 + xmm3; /* addss */
    MEMF(esp + 0x84) = xmm1; /* movss */
    MEMF(esp + 0x9C) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0xA0) = xmm1; /* movss */
    xmm1 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x50) = xmm4; /* movss */
    MEMF(esp + 0x64) = xmm2; /* movss */
    MEMF(esp + 0x6C) = xmm4; /* movss */
    MEMF(esp + 0x80) = xmm2; /* movss */
    MEMF(esp + 0x88) = xmm4; /* movss */
    MEMF(esp + 0xA4) = xmm4; /* movss */
    MEMF(esp + 0x58) = xmm1; /* movss */
    MEMF(esp + 0x74) = xmm0; /* movss */
    MEMF(esp + 0x90) = xmm0; /* movss */
    MEMF(esp + 0xAC) = xmm1; /* movss */
    MEMF(esp + 0x5C) = xmm1; /* movss */
    MEMF(esp + 0x78) = xmm1; /* movss */
    MEMF(esp + 0x94) = xmm0; /* movss */
    MEMF(esp + 0xB0) = xmm0; /* movss */
    eax = esp + 0x55;
    ecx = 4;
    SET_LO8(ebx, 0xFF);

loc_0011D7C1: ;
    MEM8(eax + -1) = LO8(ebx);
    MEM8(eax) = LO8(ebx);
    MEM8(eax + 1) = LO8(ebx);
    MEM8(eax + 2) = LO8(edx);
    eax = eax + 0x1C;
    ecx--;
    if ((ecx != 0)) goto loc_0011D7C1; /* jne: not equal / not zero */

loc_0011D7D2: ;
    PUSH32(esp, 0x1C);
    ecx = esp + 0x4C;
    PUSH32(esp, ecx);
    PUSH32(esp, 4);
    PUSH32(esp, 8);
    PUSH32(esp, 0); sub_0053A600(); /* call 0x0053A600 */

loc_0011D7E2: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0011D7E4: ;
    POP32(esp, edi);

loc_0011D7E5: ;
    POP32(esp, esi);
    esp = esp + 0x118;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0011D7F0
 * Original: 0x0011D7F0 - 0x0011D812 (34 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011D7F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011D7F0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = esi;
    PUSH32(esp, 0); sub_0011D840(); /* call 0x0011D840 */

loc_0011D7FC: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_0011D812(); return; } /* jne: not equal / not zero */

loc_0011D805: ;
    eax = esi;
    edx = 1;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000DA5E0(); return; /* tail jmp 0x000DA5E0 */

}

/**
 * sub_0011D820
 * Original: 0x0011D820 - 0x0011D837 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011D820(void)
{

loc_0011D820: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = esi;
    PUSH32(esp, 0); sub_0011D840(); /* call 0x0011D840 */

loc_0011D82C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_000DAE40(); /* call 0x000DAE40 */

loc_0011D832: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0011D840
 * Original: 0x0011D840 - 0x0011D8E5 (165 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011D840(void)
{
    int _flags = 0; /* fallback flag var */

loc_0011D840: ;
    PUSH32(esp, esi);
    esi = eax;
    ecx = MEM32(esi + 0x7C);
    if (CMP_EQ(ecx, 0xFFFFFFFFu)) goto loc_0011D882; /* je: equal / zero */

loc_0011D84B: ;
    eax = ecx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0x1F;
    eax = eax + edx;
    eax = (uint32_t)((int32_t)eax >> 5);
    ecx = ecx & 0x8000001Fu;
    if (((int32_t)ecx >= 0)) goto loc_0011D863; /* jns: not sign (positive) */

loc_0011D85E: ;
    ecx--;
    ecx = ecx | 0xFFFFFFE0u;
    ecx++;

loc_0011D863: ;
    edx = 1;
    edx = edx << LO8(ecx);
    ecx = MEM32(eax * 4 + 0x7FDD58);
    edx = ~edx;
    ecx = ecx & edx;
    MEM32(eax * 4 + 0x7FDD58) = ecx;
    MEM32(0x7FDD44) = MEM32(0x7FDD44) - 1;

loc_0011D882: ;
    ecx = MEM32(esi + 0x80);
    if (CMP_EQ(ecx, 0xFFFFFFFFu)) goto loc_0011D8C4; /* je: equal / zero */

loc_0011D88D: ;
    eax = ecx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0x1F;
    eax = eax + edx;
    eax = (uint32_t)((int32_t)eax >> 5);
    ecx = ecx & 0x8000001Fu;
    if (((int32_t)ecx >= 0)) goto loc_0011D8A5; /* jns: not sign (positive) */

loc_0011D8A0: ;
    ecx--;
    ecx = ecx | 0xFFFFFFE0u;
    ecx++;

loc_0011D8A5: ;
    edx = 1;
    edx = edx << LO8(ecx);
    ecx = MEM32(eax * 4 + 0x7FDD58);
    edx = ~edx;
    ecx = ecx & edx;
    MEM32(eax * 4 + 0x7FDD58) = ecx;
    MEM32(0x7FDD44) = MEM32(0x7FDD44) - 1;

loc_0011D8C4: ;
    eax = MEM32(esi + 0x94);
    esi = esi + 0x94;
    if (TEST_Z(eax, eax)) goto loc_0011D8E3; /* je: equal / zero */

loc_0011D8D4: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0011D8DA: ;
    esp = esp + 4;
    MEM32(esi) = 0;

loc_0011D8E3: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0011D8F0
 * Original: 0x0011D8F0 - 0x0011D939 (73 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011D8F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0011D8F0: ;
    eax = MEM32(esp + 0xC);
    if (TEST_Z(eax, eax)) goto loc_0011D8FD; /* je: equal / zero */

loc_0011D8F8: ;
    if (CMP_NE(eax, 3)) goto loc_0011D938; /* jne: not equal / not zero */

loc_0011D8FD: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (CMP_NE(ecx, MEM32(esi + 0x34))) goto loc_0011D937; /* jne: not equal / not zero */

loc_0011D90D: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0011D937; /* jne: not equal / not zero */

loc_0011D916: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_0011D91D: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_0011D937; /* jl: less (signed <) */

loc_0011D924: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) { sub_0011D939(); return; } /* je: equal / zero */

loc_0011D931: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0011D934: ;
    esp = esp + 4;

loc_0011D937: ;
    POP32(esp, esi);

loc_0011D938: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0011D950
 * Original: 0x0011D950 - 0x0011DB80 (560 bytes, 156 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011D950(void)
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

loc_0011D950: ;
    PUSH32(esp, ecx);
    SET_LO8(ecx, MEM8(esi + 0x84));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ebx = 1;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0011D970; /* jne: not equal / not zero */

loc_0011D962: ;
    SET_LO8(eax, MEM8(esi + 0x85));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0011DAA7; /* je: equal / zero */

loc_0011D970: ;
    eax = MEM32(esi + 0x7C);
    edi = MEM32(0x5499E8);
    ecx = eax;
    ecx = ecx >> 8;
    edx = MEM32(edi + ecx * 4 + 0x7D4);
    eax = eax & 0xFF;
    eax = eax << 4;
    ecx = MEM32(eax + edx + 0xC);
    eax = eax + edx;
    if (CMP_NE(ecx, 0xFFFFFFFFu)) goto loc_0011D9B4; /* jne: not equal / not zero */

loc_0011D998: ;
    edx = MEM32(eax);
    if (CMP_NE(edx, MEM32(edi + 0x2C))) goto loc_0011D9AC; /* jne: not equal / not zero */

loc_0011D99F: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_0053BEA0(); /* call 0x0053BEA0 */

loc_0011D9A6: ;
    edi = MEM32(0x5499E8);

loc_0011D9AC: ;
    MEM8(esi + 0x84) = LO8(ebx);
    goto loc_0011D9C2;

loc_0011D9B4: ;
    eax = MEM32(eax + 8);
    MEM32(esp + 8) = eax;
    MEM8(esi + 0x84) = 0;

loc_0011D9C2: ;
    eax = MEM32(esi + 0x80);
    ecx = eax;
    ecx = ecx >> 8;
    edx = MEM32(edi + ecx * 4 + 0x7D4);
    eax = eax & 0xFF;
    eax = eax << 4;
    ecx = MEM32(eax + edx + 0xC);
    eax = eax + edx;
    if (CMP_NE(ecx, 0xFFFFFFFFu)) goto loc_0011DA07; /* jne: not equal / not zero */

loc_0011D9E7: ;
    edx = MEM32(eax);
    if (CMP_NE(edx, MEM32(edi + 0x2C))) goto loc_0011D9FB; /* jne: not equal / not zero */

loc_0011D9EE: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_0053BEA0(); /* call 0x0053BEA0 */

loc_0011D9F5: ;
    edi = MEM32(0x5499E8);

loc_0011D9FB: ;
    eax = MEM32(esp + 8);
    MEM8(esi + 0x85) = LO8(ebx);
    goto loc_0011DA11;

loc_0011DA07: ;
    eax = MEM32(eax + 8);
    MEM8(esi + 0x85) = 0;

loc_0011DA11: ;
    SET_LO8(ecx, MEM8(esi + 0x84));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0011DB58; /* jne: not equal / not zero */

loc_0011DA1F: ;
    SET_LO8(edx, MEM8(esi + 0x85));
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_0011DAAD; /* jne: not equal / not zero */

loc_0011DA2D: ;
    edx = MEM32(esp + 8);
    if (TEST_NZ(edx, edx)) goto loc_0011DA3F; /* jne: not equal / not zero */

loc_0011DA35: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esi + 0x74) = xmm0; /* movss */
    goto loc_0011DAAD;

loc_0011DA3F: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 8) = eax;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    if (CMP_GE(eax & eax, 0)) goto loc_0011DA51; /* jge: greater or equal (signed >=) */

loc_0011DA4B: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_0011DA51: ;
    (void)0; /* test edx, edx - flags set for next jcc */
    MEM32(esp + 8) = edx;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    if (CMP_GE(edx & edx, 0)) goto loc_0011DA63; /* jge: greater or equal (signed >=) */

loc_0011DA5D: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_0011DA63: ;
    fp_st1() /= fp_top(); fp_pop(); /* fdivp */
    MEMF(esp + 8) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_push(MEMF(0x648CF8)); /* fld float */
    eax = MEM32(esp + 8);
    MEM32(esi + 0x74) = eax;
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_0011DA8A; /* jbe: below or equal (unsigned <=) */

loc_0011DA80: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esi + 0x74) = xmm0; /* movss */
    goto loc_0011DAAD;

loc_0011DA8A: ;
    xmm0 = MEMF(esp + 8); /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_0011DAA0; /* jbe: below or equal (unsigned <=) */

loc_0011DA9D: ;
    xmm0 = xmm1; /* movaps */

loc_0011DAA0: ;
    MEMF(esi + 0x74) = xmm0; /* movss */
    goto loc_0011DAAD;

loc_0011DAA7: ;
    edi = MEM32(0x5499E8);

loc_0011DAAD: ;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0011DB58; /* jne: not equal / not zero */

loc_0011DAB5: ;
    SET_LO8(eax, MEM8(esi + 0x85));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0011DB58; /* jne: not equal / not zero */

loc_0011DAC3: ;
    eax = MEM32(edi);
    if (CMP_B(eax, MEM32(edi + 4))) goto loc_0011DAD9; /* jb: below (unsigned <) */

loc_0011DACA: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_0011DAD9: ;
    MEM32(eax) = 0x817C8;
    MEM32(eax + 4) = ebx;
    MEM32(eax + 8) = ebx;
    eax = eax + 0xC;
    MEM32(edi) = eax;
    PUSH32(esp, 0);
    eax = 0x207;
    ecx = esi;
    PUSH32(esp, 0); sub_0011C430(); /* call 0x0011C430 */

loc_0011DAF8: ;
    eax = MEM32(esi + 0x7C);
    esp = esp + 4;
    PUSH32(esp, 0); sub_00539C00(); /* call 0x00539C00 */

loc_0011DB03: ;
    edi = MEM32(0x5499E8);
    eax = MEM32(edi);
    if (CMP_B(eax, MEM32(edi + 4))) goto loc_0011DB1F; /* jb: below (unsigned <) */

loc_0011DB10: ;
    eax = MEM32(0x54A8B8);
    edx = eax;
    edx = edx >> 1;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_0011DB1F: ;
    MEM32(eax) = 0x817C8;
    MEM32(eax + 4) = ebx;
    MEM32(eax + 8) = ebx;
    eax = eax + 0xC;
    MEM32(edi) = eax;
    PUSH32(esp, 0);
    eax = 0x203;
    ecx = esi;
    PUSH32(esp, 0); sub_0011C430(); /* call 0x0011C430 */

loc_0011DB3E: ;
    eax = MEM32(esi + 0x80);
    esp = esp + 4;
    PUSH32(esp, 0); sub_00539C00(); /* call 0x00539C00 */

loc_0011DB4C: ;
    MEM8(esi + 0x84) = LO8(ebx);
    MEM8(esi + 0x85) = LO8(ebx);

loc_0011DB58: ;
    eax = MEM32(esi + 0x74);
    xmm0 = MEMF(0x7FA21C); /* movss */
    PUSH32(esp, 0x41700000);
    PUSH32(esp, 0x41200000);
    ecx = esi + 0x78;
    PUSH32(esp, eax);
    edx = esi + 0x70;
    PUSH32(esp, 0); sub_002B0760(); /* call 0x002B0760 */

loc_0011DB79: ;
    esp = esp + 0xC;
    POP32(esp, edi);
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
 * sub_0011DB80
 * Original: 0x0011DB80 - 0x0011DB99 (25 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011DB80(void)
{
    int _flags = 0; /* fallback flag var */

loc_0011DB80: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x74);
    eax = 0x40;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_0011DB91: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) { sub_0011DB99(); return; } /* jne: not equal / not zero */

loc_0011DB98: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0011DBC0
 * Original: 0x0011DBC0 - 0x0011DD0E (334 bytes, 81 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011DBC0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011DBC0: ;
    eax = MEM32(0x6B826C);
    (void)0; /* cmp MEM32(0x771760), eax - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    if (CMP_EQ(MEM32(0x771760), eax)) goto loc_0011DBDF; /* je: equal / zero */

loc_0011DBD3: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_0011DBD9: ;
    MEM32(0x771760) = esi;

loc_0011DBDF: ;
    esi = (uint32_t)(int32_t)SMEM16(esp + 0x18);
    eax = MEM32(0x84A13C);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x2B0);
    PUSH32(esp, 0x10);
    edx = esi + eax + 0x100;
    ecx = 0x88;
    PUSH32(esp, 0); sub_00536C00(); /* call 0x00536C00 */

loc_0011DC02: ;
    ecx = MEM32(0x84A13C);
    edx = esi + ecx + 0xC0;
    PUSH32(esp, 0x10);
    ecx = 0x92;
    PUSH32(esp, 0); sub_00536C00(); /* call 0x00536C00 */

loc_0011DC1B: ;
    eax = MEM32(0x77182C);
    esi = 0x1B02;
    if (CMP_EQ(eax, esi)) goto loc_0011DC35; /* je: equal / zero */

loc_0011DC29: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00537840(); /* call 0x00537840 */

loc_0011DC2F: ;
    MEM32(0x77182C) = esi;

loc_0011DC35: ;
    eax = MEM32(0x771828);
    ebx = 0; /* xor self */
    if (CMP_EQ(eax, ebx)) goto loc_0011DC4C; /* je: equal / zero */

loc_0011DC40: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00537070(); /* call 0x00537070 */

loc_0011DC46: ;
    MEM32(0x771828) = ebx;

loc_0011DC4C: ;
    if (CMP_EQ(MEM32(0x771820), ebx)) goto loc_0011DC6C; /* je: equal / zero */

loc_0011DC54: ;
    edx = 0; /* xor self */
    ecx = 0x40300;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0011DC60: ;
    MEM32(0x549AE8) = ebx;
    MEM32(0x771820) = ebx;

loc_0011DC6C: ;
    eax = MEM32(0x77181C);
    edi = 1;
    if (CMP_EQ(eax, edi)) goto loc_0011DC86; /* je: equal / zero */

loc_0011DC7A: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00537190(); /* call 0x00537190 */

loc_0011DC80: ;
    MEM32(0x77181C) = edi;

loc_0011DC86: ;
    eax = MEM32(0x771818);
    esi = 0x203;
    if (CMP_EQ(eax, esi)) goto loc_0011DCAC; /* je: equal / zero */

loc_0011DC94: ;
    edx = esi;
    ecx = 0x40354;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0011DCA0: ;
    MEM32(0x549ADC) = esi;
    MEM32(0x771818) = esi;

loc_0011DCAC: ;
    if (CMP_EQ(MEM32(0x771814), ebx)) goto loc_0011DCCC; /* je: equal / zero */

loc_0011DCB4: ;
    edx = 0; /* xor self */
    ecx = 0x4035C;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0011DCC0: ;
    MEM32(0x549AF8) = ebx;
    MEM32(0x771814) = ebx;

loc_0011DCCC: ;
    if (CMP_EQ(MEM32(0x771810), ebx)) goto loc_0011DCEA; /* je: equal / zero */

loc_0011DCD4: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | 0x1200;
    MEM32(0x549B90) = ebx;
    MEM32(0x771810) = ebx;

loc_0011DCEA: ;
    if (CMP_EQ(MEM32(0x77175C), ebx)) goto loc_0011DCFF; /* je: equal / zero */

loc_0011DCF2: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00538690(); /* call 0x00538690 */

loc_0011DCF9: ;
    MEM32(0x77175C) = ebx;

loc_0011DCFF: ;
    if (CMP_A(MEM8(0x75C054), LO8(ebx))) { sub_0011DD0E(); return; } /* ja: above (unsigned >) */

loc_0011DD07: ;
    esi = 0; /* xor self */
    g_seh_ebp = ebp; sub_0011DD9E(); return; /* tail jmp 0x0011DD9E */

}

/**
 * sub_0011DF40
 * Original: 0x0011DF40 - 0x0011E00E (206 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011DF40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_0011DF40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x64;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x3C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, eax);
    ecx = eax;
    PUSH32(esp, ecx);
    eax = esp + 0x3C;
    PUSH32(esp, 0); sub_0042889D(); /* call 0x0042889D */

loc_0011DF64: ;
    edx = (uint32_t)(int32_t)SMEM16(ebp + 0xC);
    ecx = MEM32(0x84A13C);
    eax = edx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2B0);
    eax = eax + ecx + 0x80;
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    eax = ecx;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_0011DF8B: ;
    SET_LO8(eax, MEM8(esi + 0x38));
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_0011E00E(); return; } /* je: equal / zero */

loc_0011DF92: ;
    ecx = MEM32(0x8470DC);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x770);
    xmm0 = MEMF(edx + ecx + 0x338); /* movss */
    xmm1 = MEMF(edx + ecx + 0x334); /* movss */
    xmm2 = MEMF(edx + ecx + 0x330); /* movss */
    eax = edx + ecx;
    esi = esi + 0x2C;
    edx = esp + 0x24;
    eax = esp + 0x18;
    MEMF(esp + 0x24) = xmm2; /* movss */
    MEMF(esp + 0x28) = xmm1; /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    MEM32(esp + 0x10) = esi;
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0xC) = eax;
    ecx = MEM32(esp + 0x14);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x10);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0xC);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    g_seh_ebp = ebp; sub_0011E02F(); return; /* tail jmp 0x0011E02F */

}

/**
 * sub_0011E0F0
 * Original: 0x0011E0F0 - 0x0011E122 (50 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E0F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0011E0F0: ;
    eax = MEM32(ebx + 0x570);
    PUSH32(esp, edi);
    edi = (uint32_t)(int32_t)SMEM8(eax + 0xD08);
    if (TEST_Z(edi, edi)) goto loc_0011E120; /* je: equal / zero */

loc_0011E102: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    if (CMP_LE(edi & edi, 0)) goto loc_0011E11F; /* jle: less or equal (signed <=) */

loc_0011E109: ;
    /* nop */

loc_0011E110: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0011C9C0(); /* call 0x0011C9C0 */

loc_0011E117: ;
    esp = esp + 8;
    esi++;
    if (CMP_L(esi, edi)) goto loc_0011E110; /* jl: less (signed <) */

loc_0011E11F: ;
    POP32(esp, esi);

loc_0011E120: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0011E130
 * Original: 0x0011E130 - 0x0011E2C7 (407 bytes, 100 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E130(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0011E130: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00313B70(); /* call 0x00313B70 */

loc_0011E136: ;
    MEM32(esi + 0x7C) = eax;
    PUSH32(esp, 0); sub_00313B70(); /* call 0x00313B70 */

loc_0011E13E: ;
    ecx = MEM32(esi + 0x7C);
    edi = edi | 0xFFFFFFFFu;
    (void)0; /* cmp ecx, edi - flags set for next jcc */
    MEM32(esi + 0x80) = eax;
    if (CMP_EQ(ecx, edi)) { sub_0011E2C7(); return; } /* je: equal / zero */

loc_0011E152: ;
    if (CMP_EQ(eax, edi)) { sub_0011E2C7(); return; } /* je: equal / zero */

loc_0011E15A: ;
    xmm0 = 0.0f; /* xorps self = zero */
    eax = 0; /* xor self */
    MEM32(esi + 0x34) = eax;
    MEMF(esi + 0x38) = xmm0; /* movss */
    MEMF(esi + 0x3C) = xmm0; /* movss */
    MEMF(esi + 0x40) = xmm0; /* movss */
    MEMF(esi + 0x44) = xmm0; /* movss */
    MEMF(esi + 0x48) = xmm0; /* movss */
    MEMF(esi + 0x4C) = xmm0; /* movss */
    MEMF(esi + 0x54) = xmm0; /* movss */
    MEMF(esi + 0x58) = xmm0; /* movss */
    SET_LO8(ecx, 0xFF);
    MEMF(esi + 0x70) = xmm0; /* movss */
    MEMF(esi + 0x74) = xmm0; /* movss */
    MEMF(esi + 0x78) = xmm0; /* movss */
    xmm0 = MEMF(0x64908C); /* movss */
    MEMF(esi + 0x6C) = xmm0; /* movss */
    xmm0 = MEMF(0x6491E4); /* movss */
    PUSH32(esp, ebx);
    MEMF(esi + 0x68) = xmm0; /* movss */
    xmm0 = MEMF(0x648D34); /* movss */
    PUSH32(esp, 8);
    ebx = 5;
    MEM32(esi + 0x5C) = eax;
    MEM32(esi + 0x60) = edi;
    MEM32(esi + 0x2C) = eax;
    MEM8(esi + 0x64) = LO8(eax);
    MEM8(esi + 0x86) = LO8(ecx);
    MEM8(esi + 0x84) = LO8(eax);
    MEM8(esi + 0x85) = LO8(eax);
    MEM8(esi + 0x50) = LO8(eax);
    MEMF(esi + 0x30) = xmm0; /* movss */
    MEM8(esi + 0x87) = LO8(ecx);
    MEM8(esi + 0x88) = LO8(ecx);
    MEM8(esi + 0x89) = LO8(ecx);
    MEM8(esi + 0x8A) = LO8(ecx);
    MEM8(esi + 0x8B) = LO8(ecx);
    MEM8(esi + 0x8C) = LO8(ecx);
    PUSH32(esp, 0); sub_003E2500(); /* call 0x003E2500 */

loc_0011E214: ;
    PUSH32(esp, edi);
    MEM32(esi + 0x90) = eax;
    PUSH32(esp, 0x664);
    eax = eax + eax * 2;
    eax = eax << 2;
    PUSH32(esp, 0x5F3F64);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_0011E231: ;
    esp = esp + 0x14;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 0x94) = eax;
    if (TEST_NZ(eax, eax)) goto loc_0011E243; /* jne: not equal / not zero */

loc_0011E23E: ;
    POP32(esp, ebx);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0011E243: ;
    eax = MEM32(esi + 0x90);
    ebx = 0; /* xor self */
    if (CMP_BE(eax & eax, 0)) goto loc_0011E2C2; /* jbe: below or equal (unsigned <=) */

loc_0011E24F: ;
    edi = 0; /* xor self */

loc_0011E251: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0011E256: ;
    xmm0 = xmm0 * MEMF(0x648CF4); /* mulss */
    ecx = MEM32(esi + 0x94);
    xmm0 = xmm0 - MEMF(0x648F58); /* subss */
    MEMF(edi + ecx) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0011E276: ;
    edx = MEM32(esi + 0x94);
    xmm0 = xmm0 * MEMF(0x649534); /* mulss */
    xmm0 = xmm0 + MEMF(0x6490F4); /* addss */
    MEMF(edx + edi + 4) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0011E297: ;
    PUSH32(esp, 0);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, 3);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004710C0(); /* call 0x004710C0 */

loc_0011E2A3: ;
    edx = MEM32(eax * 4 + 0x6B4D44);
    ecx = MEM32(esi + 0x94);
    MEM32(ecx + edi + 8) = edx;
    eax = MEM32(esi + 0x90);
    ebx++;
    edi = edi + 0xC;
    if (CMP_B(ebx, eax)) goto loc_0011E251; /* jb: below (unsigned <) */

loc_0011E2C2: ;
    POP32(esp, ebx);
    SET_LO8(eax, 1);
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0011E2D0
 * Original: 0x0011E2D0 - 0x0011E2E4 (20 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E2D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0011E2D0: ;
    esp = esp - 0x20;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0x28));
    if (CMP_BE(LO8(ebx), 1)) { sub_0011E2E4(); return; } /* jbe: below or equal (unsigned <=) */

loc_0011E2DD: ;
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_0011E470
 * Original: 0x0011E470 - 0x0011E788 (792 bytes, 161 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E470(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011E470: ;
    esp = esp - 0x9C;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xA4);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0011E483: ;
    xmm0 = xmm0 * MEMF(0x6499C0); /* mulss */
    xmm0 = xmm0 + MEMF(0x64A4A8); /* addss */
    xmm0 = xmm0 * MEMF(0x648D2C); /* mulss */
    xmm0 = xmm0 * MEMF(0x7FA24C); /* mulss */
    xmm0 = xmm0 + MEMF(ebp + 0x58); /* addss */
    /* comiss xmm0, MEMF(0x648D14) - sets EFLAGS */
    MEMF(ebp + 0x58) = xmm0; /* movss */
    if ((xmm0 <= MEMF(0x648D14))) goto loc_0011E780; /* jbe: below or equal (unsigned <=) */

loc_0011E4BA: ;
    xmm0 = 0.0f; /* xorps self = zero */
    SET_LO8(eax, LO8(eax) | 0xFF);
    MEM8(esp + 0x91) = LO8(eax);
    MEM8(esp + 0x92) = LO8(eax);
    eax = ZX8(MEM8(ebp + 0x4C));
    eax = eax + eax * 2;
    eax = eax << 2;
    PUSH32(esp, ebx);
    ecx = eax + 0x596408;
    edx = eax + 0x596420;
    PUSH32(esp, esi);
    MEM32(esp + 0xA0) = ecx;
    MEM32(esp + 0xA4) = edx;
    esi = 2;
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    MEMF(esp + 0x8C) = xmm0; /* movss */
    xmm0 = MEMF(0x64A4A4); /* movss */
    eax = esp + 0x68;
    ecx = esp + 0xC;
    edx = esp + 0x18;
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(0x64A4A0); /* movss */
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x20) = ecx;
    PUSH32(esp, edx);
    edx = MEM32(ebp + 0x50);
    eax = esi;
    ecx = esp + 0xA8;
    MEM32(esp + 0x54) = 0x303;
    MEM32(esp + 0x3C) = esi;
    MEM32(esp + 0x40) = esi;
    MEM32(esp + 0x44) = ebx;
    MEM32(esp + 0x48) = 4;
    MEM32(esp + 0x4C) = ebx;
    MEM32(esp + 0x50) = esi;
    MEM32(esp + 0x58) = 0x29;
    MEM16(esp + 0x5C) = 0x21;
    MEM16(esp + 0x5E) = 7;
    MEM32(esp + 0x98) = 0x1CE05;
    MEM8(esp + 0xA0) = 0x10;
    MEM8(esp + 0xA3) = LO8(ebx);
    MEM16(esp + 0x60) = 0x27;
    MEMF(esp + 0x64) = xmm0; /* movss */
    MEM8(esp + 0x38) = 0xAE;
    MEM8(esp + 0x39) = 0xAA;
    MEM8(esp + 0x3A) = 0xB4;
    PUSH32(esp, 0); sub_00111A20(); /* call 0x00111A20 */

loc_0011E5BC: ;
    xmm0 = MEMF(esp + 0x14); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x70); /* subss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x18); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x74); /* subss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x1C); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x78); /* subss */
    esp = esp + 4;
    MEMF(esp + 0x18) = xmm0; /* movss */
    goto loc_0011E600;

    /* nop */
    edi = edi;

loc_0011E600: ;
    MEM32(esp + 0x94) = MEM32(esp + 0x94) & 0xFFFFFF3Fu;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0011E610: ;
    edi = eax;
    edi = edi & 1;
    edi = edi << 1;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0011E61C: ;
    edx = MEM32(esp + 0x94);
    xmm0 = 0.0f; /* xorps self = zero */
    eax = eax & 1;
    edi = edi | eax;
    edi = edi << 6;
    edx = edx | edi;
    MEM32(esp + 0x94) = edx;
    MEMF(esp + 0x78) = xmm0; /* movss */
    MEMF(esp + 0x7C) = xmm0; /* movss */
    MEMF(esp + 0x80) = xmm0; /* movss */
    MEM8(esp + 0x37) = 0xFF;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0011E656: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x11;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = edx + 0x32;
    MEM16(esp + 0x28) = LO16(edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0011E66B: ;
    xmm0 = xmm0 * MEMF(0x64A338); /* mulss */
    xmm0 = xmm0 + MEMF(0x64A49C); /* addss */
    MEMF(esp + 0x68) = xmm0; /* movss */
    MEMF(esp + 0x64) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0011E68C: ;
    xmm0 = xmm0 * MEMF(0x64A498); /* mulss */
    xmm0 = xmm0 + MEMF(0x64A06C); /* addss */
    xmm0 = xmm0 * MEMF(0x648D2C); /* mulss */
    SET_LO8(edx, MEM8(ebp + 4));
    eax = 4;
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 0x10); /* mulss */
    MEMF(esp + 0x84) = xmm1; /* movss */
    MEM32(esp + 0x38) = eax;
    MEM32(esp + 0x44) = eax;
    (void)0; /* cmp MEM32(0x771CD0), 0x2EE - flags set for next jcc */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 0x14); /* mulss */
    xmm0 = xmm0 * MEMF(esp + 0x18); /* mulss */
    MEMF(esp + 0x88) = xmm1; /* movss */
    MEMF(esp + 0x8C) = xmm0; /* movss */
    MEM32(esp + 0x3C) = esi;
    MEM32(esp + 0x40) = ebx;
    MEM32(esp + 0x48) = esi;
    MEM32(esp + 0x4C) = ebx;
    MEM8(esp + 0x1C) = LO8(edx);
    if (CMP_GE(MEM32(0x771CD0), 0x2EE)) goto loc_0011E75E; /* jge: greater or equal (signed >=) */

loc_0011E707: ;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x6C);
    eax = 0x174;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_0011E718: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) goto loc_0011E75E; /* je: equal / zero */

loc_0011E71F: ;
    edx = eax + 0x2C;
    edi = edx;
    ecx = 0x1F;
    esi = esp + 0x28;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    SET_LO16(ecx, MEM16(edx));
    edx = MEM32(esp + 0x24);
    MEM16(eax + 0x2E) = LO16(ecx);
    ecx = MEM32(0x771CD0);
    ecx++;
    MEM8(eax + 0x154) = LO8(ebx);
    MEM8(eax + 0x160) = LO8(ebx);
    MEM32(0x771CD0) = ecx;
    MEM32(eax + 0x170) = edx;
    esi = 2;

loc_0011E75E: ;
    xmm0 = MEMF(ebp + 0x58); /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(ebp + 0x58) = xmm0; /* movss */
    if ((xmm0 > xmm1)) goto loc_0011E600; /* ja: above (unsigned >) */

loc_0011E77D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0011E780: ;
    POP32(esp, ebp);
    esp = esp + 0x9C;
    esp += 4; return; /* ret */

}

/**
 * sub_0011E790
 * Original: 0x0011E790 - 0x0011E853 (195 bytes, 75 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E790(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0011E790: ;
    xmm0 = MEMF(esp + 8); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    SET_LO16(eax, MEM16(esi + 2));
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    MEM16(esi + 4) = LO16(eax);
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0011E7C2; /* jp: parity */

loc_0011E7B4: ;
    xmm0 = MEMF(0x649B7C); /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */

loc_0011E7C2: ;
    eax = ZX8(MEM8(esp + 0x24));
    PUSH32(esp, edi);
    edx = ZX8(LO8(edx));
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x28);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x28);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x28);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x28);
    PUSH32(esp, edx);
    edx = MEM32(ecx + 8);
    PUSH32(esp, eax);
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00124100(); /* call 0x00124100 */

loc_0011E7F1: ;
    ebx = eax;
    esp = esp + 0x28;
    if (CMP_EQ(ebx, edi)) { sub_0011E853(); return; } /* je: equal / zero */

loc_0011E7FA: ;
    edx = MEM32(esp + 0x2C);
    eax = MEM32(esp + 0x28);
    PUSH32(esp, edx);
    eax = eax + 0x38;
    PUSH32(esp, 0x3C);
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_0011E80D: ;
    esp = esp + 8;
    if (CMP_NE(eax, edi)) goto loc_0011E83B; /* jne: not equal / not zero */

loc_0011E814: ;
    edx = ebx;
    esi = 0; /* xor self */
    PUSH32(esp, 0); sub_00123F50(); /* call 0x00123F50 */

loc_0011E81D: ;
    eax = MEM32(ebx + 4);
    (void)0; /* cmp eax, edi - flags set for next jcc */
    ecx = MEM32(ebx);
    MEM32(ecx + 4) = eax;
    if (CMP_EQ(eax, edi)) goto loc_0011E82B; /* je: equal / zero */

loc_0011E829: ;
    MEM32(eax) = ecx;

loc_0011E82B: ;
    MEM32(ebx) = edi;
    MEM32(ebx + 4) = edi;
    PUSH32(esp, 0); sub_00128E60(); /* call 0x00128E60 */

loc_0011E835: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0011E83B: ;
    ecx = MEM32(esi);
    MEM32(eax + 0x2C) = ecx;
    edx = MEM32(esi + 4);
    POP32(esp, edi);
    MEM32(eax + 0x34) = ebx;
    SET_LO8(ecx, LO8(ecx) | 2);
    POP32(esp, esi);
    MEM32(eax + 0x30) = edx;
    MEM8(eax + 0x2C) = LO8(ecx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0011E860
 * Original: 0x0011E860 - 0x0011E8DB (123 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E860(void)
{
    int _flags = 0; /* fallback flag var */

loc_0011E860: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    SET_LO8(eax, MEM8(edi + 0x2C));
    SET_LO8(ebx, 0); /* xor self */
    if (TEST_Z(LO8(eax), 1)) goto loc_0011E880; /* je: equal / zero */

loc_0011E86F: ;
    SET_LO16(eax, MEM16(0x7FA20C));
    MEM16(edi + 0x2E) = MEM16(edi + 0x2E) - LO16(eax);
    if (CMP_L(MEM16(edi + 0x2E), 0)) goto loc_0011E8AE; /* jl: less (signed <) */

loc_0011E880: ;
    SET_LO8(eax, MEM8(edi + 0x2D));
    if (CMP_EQ(LO8(eax), 0xFF)) goto loc_0011E8D8; /* je: equal / zero */

loc_0011E887: ;
    ecx = SX8(LO8(eax));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx * 4 + 0x596458), _icall_esp); /* indirect call */
    }

loc_0011E892: ;
    esp = esp + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0011E89B; /* jne: not equal / not zero */

loc_0011E899: ;
    SET_LO8(ebx, 1);

loc_0011E89B: ;
    PUSH32(esp, esi);
    esi = MEM32(edi + 0x34);
    PUSH32(esp, 0x870EEC);
    PUSH32(esp, 0); sub_001213A0(); /* call 0x001213A0 */

loc_0011E8A9: ;
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    POP32(esp, esi);
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_0011E8D8; /* je: equal / zero */

loc_0011E8AE: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0011E8D8; /* jne: not equal / not zero */

loc_0011E8B7: ;
    edx = edi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_0011E8BE: ;
    eax = MEM32(edi);
    if (CMP_L(eax, 2)) goto loc_0011E8D8; /* jl: less (signed <) */

loc_0011E8C5: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) { sub_0011E8DB(); return; } /* je: equal / zero */

loc_0011E8D2: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0011E8D5: ;
    esp = esp + 4;

loc_0011E8D8: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0011EA30
 * Original: 0x0011EA30 - 0x0011EA43 (19 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011EA30(void)
{

loc_0011EA30: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = edi + 0x38;
    PUSH32(esp, 0); sub_00120A90(); /* call 0x00120A90 */

loc_0011EA3E: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0011EA50
 * Original: 0x0011EA50 - 0x0011EB03 (179 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011EA50(void)
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

loc_0011EA50: ;
    xmm1 = 0.0f; /* xorps self = zero */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    xmm0 = MEMF(esi + 0x48); /* movss */
    xmm0 = xmm0 - MEMF(0x7FA21C); /* subss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(esi + 0x48) = xmm0; /* movss */
    if ((xmm1 <= xmm0)) goto loc_0011EAC8; /* jbe: below or equal (unsigned <=) */

loc_0011EA6F: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0011EA74: ;
    xmm0 = xmm0 * MEMF(esi + 0x4C); /* mulss */
    MEMF(esi + 0x48) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0011EA83: ;
    eax = eax & 0x80000003u;
    if (((int32_t)eax >= 0)) goto loc_0011EA8F; /* jns: not sign (positive) */

loc_0011EA8A: ;
    eax--;
    eax = eax | 0xFFFFFFFCu;
    eax++;

loc_0011EA8F: ;
    if ((eax == 0)) goto loc_0011EAAB; /* je: equal / zero */

loc_0011EA91: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0011EA96: ;
    xmm1 = MEMF(esi + 0x38); /* movss */
    xmm1 = xmm1 - MEMF(esi + 0x3C); /* subss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x3C); /* addss */
    goto loc_0011EAC3;

loc_0011EAAB: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0011EAB0: ;
    xmm1 = MEMF(esi + 0x40); /* movss */
    xmm1 = xmm1 - MEMF(esi + 0x38); /* subss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x38); /* addss */

loc_0011EAC3: ;
    MEMF(esi + 0x44) = xmm0; /* movss */

loc_0011EAC8: ;
    xmm0 = MEMF(esi + 0x44); /* movss */
    xmm0 = xmm0 - MEMF(esi + 0x54); /* subss */
    xmm0 = xmm0 * MEMF(esi + 0x50); /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x54); /* addss */
    MEMF(esp + 8) = xmm0; /* movss */
    fp_push(MEMF(esp + 8)); /* fld float */
    MEMF(esi + 0x54) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0011EAF0: ;
    ecx = MEM32(esi + 0x34);
    eax = ZX8(LO8(eax));
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(ecx + 0x4C) = xmm0; /* movss */
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
 * sub_0011EB10
 * Original: 0x0011EB10 - 0x0011EC0B (251 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011EB10(void)
{
    uint32_t ebp;
    float xmm0, xmm1, xmm2, xmm5;

loc_0011EB10: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x5C;
    xmm0 = MEMF(0x648E18); /* movss */
    xmm5 = MEMF(0x648D14); /* movss */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x38);
    xmm1 = MEMF(eax + 0xC); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    esp = esp - 0xC;
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 8) = xmm1; /* movss */
    xmm1 = MEMF(eax + 8); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 4) = xmm1; /* movss */
    xmm1 = MEMF(eax + 4); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp) = xmm1; /* movss */
    PUSH32(esp, 0x3F800000);
    eax = esp + 0x3C;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E2E60(); /* call 0x003E2E60 */

loc_0011EB79: ;
    eax = MEM32(esi + 0x38);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x18);
    edx = (uint32_t)(int32_t)SMEM16(eax + 0x16);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x14);
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    esp = esp + 0x24;
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    xmm2 = (float)(int32_t)eax; /* cvtsi2ss */
    edx = esp + 0xC;
    PUSH32(esp, edx);
    eax = esp + 0x1C;
    MEMF(esp + 0x5C) = xmm1; /* movss */
    xmm1 = MEMF(0x64968C); /* movss */
    MEMF(esp + 0x60) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, eax);
    MEMF(esp + 0x5C) = xmm2; /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEMF(esp + 0x18) = xmm1; /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_0011EBDA: ;
    ecx = MEM32(esi + 0x34);
    xmm0 = MEMF(esp + 0x14); /* movss */
    MEMF(ecx + 0xC) = xmm0; /* movss */
    edx = MEM32(esi + 0x34);
    xmm0 = MEMF(esp + 0x18); /* movss */
    MEMF(edx + 0x10) = xmm0; /* movss */
    eax = MEM32(esi + 0x34);
    xmm0 = MEMF(esp + 0x1C); /* movss */
    MEMF(eax + 0x14) = xmm0; /* movss */
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0011EC10
 * Original: 0x0011EC10 - 0x0011EC2B (27 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011EC10(void)
{
    int _flags = 0; /* fallback flag var */

loc_0011EC10: ;
    eax = MEM32(0x84A5F8);
    ecx = MEM32(eax + 0x64);
    esp = esp - 0xC;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    if (TEST_NZ(ecx, ecx)) { sub_0011EC2B(); return; } /* jne: not equal / not zero */

loc_0011EC24: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_0011ECA0
 * Original: 0x0011ECA0 - 0x0011ED5D (189 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011ECA0(void)
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

loc_0011ECA0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    SET_LO16(ecx, MEM16(edi + 0x48));
    (void)0; /* test LO16(ecx), LO16(ecx) - flags set for next jcc */
    esi = edi + 0x38;
    if (TEST_Z(LO16(ecx), LO16(ecx))) goto loc_0011ED06; /* je: equal / zero */

loc_0011ECB3: ;
    xmm0 = 0.0f; /* xorps self = zero */
    /* comiss xmm0, MEMF(esi + 0xC) - sets EFLAGS */
    ebx = esi + 0xC;
    if ((xmm0 <= MEMF(esi + 0xC))) goto loc_0011ECF4; /* jbe: below or equal (unsigned <=) */

loc_0011ECBF: ;
    xmm0 = MEMF(esi + 8); /* movss */
    xmm0 = xmm0 * MEMF(0x7FA24C); /* mulss */
    xmm0 = xmm0 + MEMF(esi + 4); /* addss */
    /* comiss xmm0, MEMF(esi) - sets EFLAGS */
    edx = esi + 8;
    eax = esi + 4;
    MEMF(eax) = xmm0; /* movss */
    if ((xmm0 <= MEMF(esi))) goto loc_0011ED40; /* jbe: below or equal (unsigned <=) */

loc_0011ECE0: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esi);
    ecx--;
    (void)0; /* test LO16(ecx), LO16(ecx) - flags set for next jcc */
    MEM32(eax) = ebp;
    MEM16(esi + 0x10) = LO16(ecx);
    POP32(esp, ebp);
    if (TEST_Z(LO16(ecx), LO16(ecx))) goto loc_0011ED40; /* je: equal / zero */

loc_0011ECF0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    goto loc_0011ED35;

loc_0011ECF4: ;
    xmm0 = MEMF(ebx); /* movss */
    xmm0 = xmm0 - MEMF(0x7FA24C); /* subss */
    MEMF(ebx) = xmm0; /* movss */
    goto loc_0011ED40;

loc_0011ED06: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0011ED0B: ;
    xmm1 = MEMF(0x649E88); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_0011ED40; /* jbe: below or equal (unsigned <=) */

loc_0011ED18: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0011ED1D: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 5;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = esi + 8;
    edx++;
    MEM16(esi + 0x10) = LO16(edx);
    edx = esi + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = esi + 4;

loc_0011ED35: ;
    ecx = edi;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0011ED60(); /* call 0x0011ED60 */

loc_0011ED3D: ;
    esp = esp + 0xC;

loc_0011ED40: ;
    fp_push(MEMF(esi + 4)); /* fld float */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0011ED48: ;
    edx = MEM32(edi + 0x34);
    ecx = ZX8(LO8(eax));
    POP32(esp, edi);
    POP32(esp, esi);
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(edx + 0x4C) = xmm0; /* movss */
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0011ED60
 * Original: 0x0011ED60 - 0x0011EE03 (163 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011ED60(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_0011ED60: ;
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, esi);
    esi = ecx;
    MEMF(eax) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0011ED6F: ;
    ecx = MEM32(esp + 8);
    xmm0 = xmm0 * MEMF(0x649030); /* mulss */
    xmm1 = MEMF(ecx); /* movss */
    xmm0 = xmm0 + MEMF(0x648CDC); /* addss */
    edx = MEM32(esp + 0xC);
    xmm1 = xmm1 / xmm0; /* divss */
    MEMF(edx) = xmm1; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0011ED98: ;
    eax = MEM32(esp + 0x10);
    xmm0 = xmm0 * MEMF(0x648FF0); /* mulss */
    xmm0 = xmm0 + MEMF(0x648D14); /* addss */
    MEMF(eax) = xmm0; /* movss */
    SET_LO8(eax, MEM8(esi + 0x4A));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0011EE01; /* je: equal / zero */

loc_0011EDB7: ;
    esi = MEM32(esi + 0x34);
    ecx = MEM32(0x847024);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x40);
    esi = esi + 0xC;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0011EDCC: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xA;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ecx = edx;
    ecx = ecx + 0x44B;
    if ((ecx == 0)) goto loc_0011EE00; /* je: equal / zero */

loc_0011EDDE: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0);
    ecx = ecx & 0x7FFF;
    PUSH32(esp, edi);
    edx = edx | 0xFFFFFFFFu;
    eax = eax | 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_0011EE00: ;
    POP32(esp, edi);

loc_0011EE01: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0011EE10
 * Original: 0x0011EE10 - 0x0011EE21 (17 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011EE10(void)
{
    int _flags = 0; /* fallback flag var */

loc_0011EE10: ;
    esp = esp - 0x2C;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, edi);
    edi = eax;
    if (TEST_NZ(ecx, ecx)) { sub_0011EE21(); return; } /* jne: not equal / not zero */

loc_0011EE1A: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0011EF00
 * Original: 0x0011EF00 - 0x0011EF2D (45 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011EF00(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0011EF00: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x58;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x38);
    ecx = MEM32(eax + 0x64);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    SET_LO8(ebx, 1);
    if (TEST_Z(ecx, ecx)) goto loc_0011EF25; /* je: equal / zero */

loc_0011EF1A: ;
    SET_LO8(ecx, MEM8(eax + 0x10B));
    if (CMP_EQ(LO8(ecx), MEM8(esi + 0x3C))) { sub_0011EF2D(); return; } /* je: equal / zero */

loc_0011EF25: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0011F060
 * Original: 0x0011F060 - 0x0011F094 (52 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011F060(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0011F060: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x174;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    eax = MEM32(ebx + 0x38);
    ecx = MEM32(eax + 0x64);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = eax;
    if (TEST_Z(ecx, ecx)) goto loc_0011F08B; /* je: equal / zero */

loc_0011F080: ;
    SET_LO8(ecx, MEM8(eax + 0x10B));
    if (CMP_EQ(LO8(ecx), MEM8(ebx + 0x3C))) { sub_0011F094(); return; } /* je: equal / zero */

loc_0011F08B: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0011F360
 * Original: 0x0011F360 - 0x0011F412 (178 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011F360(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_0011F360: ;
    esp = esp - 0x2C;
    xmm0 = MEMF(0x64908C); /* movss */
    xmm1 = MEMF(0x648F08); /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(0x648F94); /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(0x648E5C); /* movss */
    MEMF(esp + 0x14) = xmm1; /* movss */
    MEMF(esp) = xmm0; /* movss */
    xmm0 = sqrtf(MEMF(esp)); /* sqrtss */
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = MEMF(0x6498F0); /* movss */
    xmm0 = xmm0 / MEMF(esp + 4); /* divss */
    PUSH32(esp, eax);
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(0x648D70); /* movss */
    PUSH32(esp, 0x3C);
    eax = 0x58;
    MEMF(esp + 0x30) = xmm0; /* movss */
    MEM8(esp + 0xC) = 0;
    MEM8(esp + 0xD) = 2;
    MEM16(esp + 0xE) = 0xA;
    MEM8(esp + 0x12) = 6;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_0011F407: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) { sub_0011F412(); return; } /* jne: not equal / not zero */

loc_0011F40E: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0011F440
 * Original: 0x0011F440 - 0x0011F4B1 (113 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011F440(void)
{
    int _flags = 0; /* fallback flag var */

loc_0011F440: ;
    edx = MEM32(0x76FD10);
    esp = esp - 8;
    eax = 0; /* xor self */
    (void)0; /* test edx, edx - flags set for next jcc */
    PUSH32(esp, esi);
    if (CMP_LE(edx & edx, 0)) goto loc_0011F470; /* jle: less or equal (signed <=) */

loc_0011F450: ;
    esi = MEM32(0x8471B8);
    ecx = esi + 0xC6;
    /* nop */

loc_0011F460: ;
    if (CMP_EQ(MEM8(ecx), 0xF9)) goto loc_0011F4A5; /* je: equal / zero */

loc_0011F465: ;
    eax++;
    ecx = ecx + 0x150;
    if (CMP_L(eax, edx)) goto loc_0011F460; /* jl: less (signed <) */

loc_0011F470: ;
    esi = 0; /* xor self */

loc_0011F472: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C);
    eax = 0x3C;
    MEM8(esp + 0xC) = 0;
    MEM8(esp + 0xD) = 3;
    MEM16(esp + 0xE) = 0xA;
    MEM8(esp + 0x12) = 8;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_0011F499: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) { sub_0011F4B1(); return; } /* jne: not equal / not zero */

loc_0011F4A0: ;
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_0011F4A5: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x150);
    eax = eax + esi;
    esi = eax;
    goto loc_0011F472;

}

/**
 * sub_0011F4D0
 * Original: 0x0011F4D0 - 0x0011F534 (100 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011F4D0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0011F4D0: ;
    esp = esp - 0x18;
    xmm0 = MEMF(0x648D70); /* movss */
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(0x648EA4); /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, eax);
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(0x648EF8); /* movss */
    PUSH32(esp, 0x3C);
    eax = 0x48;
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEM8(esp + 8) = 0;
    MEM8(esp + 9) = 1;
    MEM16(esp + 0xA) = 0xA;
    MEM8(esp + 0xE) = 5;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_0011F529: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) { sub_0011F534(); return; } /* jne: not equal / not zero */

loc_0011F530: ;
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_0011F570
 * Original: 0x0011F570 - 0x0011F5E2 (114 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011F570(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0011F570: ;
    esp = esp - 0x18;
    xmm0 = MEMF(0x648FF0); /* movss */
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(0x649B0C); /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0011F594: ;
    eax = MEM32(esp + 0x20);
    xmm0 = xmm0 * MEMF(0x648D30); /* mulss */
    PUSH32(esp, eax);
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(0x64A05C); /* movss */
    PUSH32(esp, 0x3C);
    eax = 0x48;
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEM8(esp + 8) = 0;
    MEM8(esp + 9) = 1;
    MEM16(esp + 0xA) = 0xA;
    MEM8(esp + 0xE) = 5;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_0011F5D7: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) { sub_0011F5E2(); return; } /* jne: not equal / not zero */

loc_0011F5DE: ;
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_0011F620
 * Original: 0x0011F620 - 0x0011F68C (108 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011F620(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0011F620: ;
    esp = esp - 0x1C;
    if (CMP_AE(LO8(eax), 9)) goto loc_0011F686; /* jae: above or equal (unsigned >=) */

loc_0011F627: ;
    eax = ZX8(LO8(eax));
    xmm0 = MEMF(eax * 4 + 0x59658C); /* movss */
    eax = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    MEMF(esp + 0xC) = xmm0; /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, 0x3C);
    eax = 0x4C;
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEM16(esp + 0x20) = 0;
    MEM8(esp + 0x22) = LO8(ecx);
    MEM8(esp + 8) = 0;
    MEM8(esp + 9) = 4;
    MEM16(esp + 0xA) = 0xA;
    MEM8(esp + 0xE) = LO8(edx);
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_0011F67F: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) { sub_0011F68C(); return; } /* jne: not equal / not zero */

loc_0011F686: ;
    eax = 0; /* xor self */
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_0011F6D0
 * Original: 0x0011F6D0 - 0x0011F6F2 (34 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011F6D0(void)
{

loc_0011F6D0: ;
    esp = esp - 8;
    edx = MEM32(esp + 0xC);
    MEM8(esp) = LO8(eax);
    PUSH32(esp, edx);
    eax = esp + 4;
    PUSH32(esp, eax);
    eax = 0x3C;
    MEM32(esp + 0xC) = ecx;
    PUSH32(esp, 0); sub_000DAC40(); /* call 0x000DAC40 */

loc_0011F6EE: ;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0011F700
 * Original: 0x0011F700 - 0x0011F729 (41 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011F700(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011F700: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ebx = MEM32(esi + 0x38);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001C4D90(); /* call 0x001C4D90 */

loc_0011F70F: ;
    SET_LO8(eax, MEM8(0x8472BD));
    esp = esp + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_0011F729(); return; } /* jne: not equal / not zero */

loc_0011F71B: ;
    eax = esi;
    POP32(esp, esi);
    edx = 1;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_000DA5E0(); return; /* tail jmp 0x000DA5E0 */

}

/**
 * sub_0011F730
 * Original: 0x0011F730 - 0x0011F74B (27 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011F730(void)
{

loc_0011F730: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ebx = MEM32(esi + 0x38);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001C4D90(); /* call 0x001C4D90 */

loc_0011F73F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_000DAE40(); /* call 0x000DAE40 */

loc_0011F745: ;
    esp = esp + 8;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0011F750
 * Original: 0x0011F750 - 0x0011F798 (72 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011F750(void)
{
    int _flags = 0; /* fallback flag var */

loc_0011F750: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (TEST_Z(MEM8(esi + 0x2C), 2)) goto loc_0011F787; /* je: equal / zero */

loc_0011F75B: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 0x34);
    edx = ebx;
    PUSH32(esp, 0); sub_00123F50(); /* call 0x00123F50 */

loc_0011F766: ;
    eax = MEM32(ebx + 4);
    (void)0; /* test eax, eax - flags set for next jcc */
    ecx = MEM32(ebx);
    MEM32(ecx + 4) = eax;
    if (TEST_Z(eax, eax)) goto loc_0011F774; /* je: equal / zero */

loc_0011F772: ;
    MEM32(eax) = ecx;

loc_0011F774: ;
    MEM32(ebx) = 0;
    MEM32(ebx + 4) = 0;
    PUSH32(esp, 0); sub_00128E60(); /* call 0x00128E60 */

loc_0011F786: ;
    POP32(esp, ebx);

loc_0011F787: ;
    eax = ZX8(MEM8(esi + 0x32));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax * 4 + 0x5965B0), _icall_esp); /* indirect call */
    }

loc_0011F793: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0011F7A0
 * Original: 0x0011F7A0 - 0x0011F7E8 (72 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011F7A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0011F7A0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (TEST_Z(MEM8(esi + 0x2C), 2)) goto loc_0011F7D7; /* je: equal / zero */

loc_0011F7AB: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 0x34);
    edx = ebx;
    PUSH32(esp, 0); sub_00123F50(); /* call 0x00123F50 */

loc_0011F7B6: ;
    eax = MEM32(ebx + 4);
    (void)0; /* test eax, eax - flags set for next jcc */
    ecx = MEM32(ebx);
    MEM32(ecx + 4) = eax;
    if (TEST_Z(eax, eax)) goto loc_0011F7C4; /* je: equal / zero */

loc_0011F7C2: ;
    MEM32(eax) = ecx;

loc_0011F7C4: ;
    MEM32(ebx) = 0;
    MEM32(ebx + 4) = 0;
    PUSH32(esp, 0); sub_00128E60(); /* call 0x00128E60 */

loc_0011F7D6: ;
    POP32(esp, ebx);

loc_0011F7D7: ;
    eax = ZX8(MEM8(esi + 0x32));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax * 4 + 0x596658), _icall_esp); /* indirect call */
    }

loc_0011F7E3: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0011F7F0
 * Original: 0x0011F7F0 - 0x0011F838 (72 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011F7F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0011F7F0: ;
    eax = MEM32(0x847024);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x40);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0011F7FE: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xA;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ecx = edx;
    ecx = ecx + 0x44B;
    if ((ecx == 0)) goto loc_0011F836; /* je: equal / zero */

loc_0011F810: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0);
    ecx = ecx & 0x7FFF;
    PUSH32(esp, esi);
    edx = edx | 0xFFFFFFFFu;
    eax = eax | 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_0011F836: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0011F840
 * Original: 0x0011F840 - 0x0011F95E (286 bytes, 80 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011F840(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0011F840: ;
    SET_LO8(eax, MEM8(0x76EC82));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0011F85B; /* jne: not equal / not zero */

loc_0011F84E: ;
    if (CMP_NE(MEM8(0x76F0E0), 1)) goto loc_0011F95A; /* jne: not equal / not zero */

loc_0011F85B: ;
    eax = MEM32(esi + 0x38);
    ecx = MEM32(0x76E884);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x44);
    edx = MEM32(eax + ecx);
    xmm1 = 0.0f; /* xorps self = zero */
    xmm3 = MEMF(0x648EEC); /* movss */
    eax = eax + ecx;
    ecx = MEM32(esi + 0x34);
    MEM32(ecx + 0xC) = edx;
    ecx = MEM32(esi + 0x34);
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x10) = edx;
    ecx = MEM32(esi + 0x34);
    edx = MEM32(eax + 8);
    MEM32(ecx + 0x14) = edx;
    /* comiss xmm1, MEMF(eax + 0x24) - sets EFLAGS */
    if ((xmm1 <= MEMF(eax + 0x24))) goto loc_0011F89A; /* jbe: below or equal (unsigned <=) */

loc_0011F895: ;
    xmm0 = xmm1; /* movaps */
    goto loc_0011F8AC;

loc_0011F89A: ;
    xmm0 = MEMF(eax + 0x24); /* movss */
    /* comiss xmm0, xmm3 - sets EFLAGS */
    xmm0 = xmm3; /* movaps */
    if ((xmm0 > xmm3)) goto loc_0011F8AC; /* ja: above (unsigned >) */

loc_0011F8A7: ;
    xmm0 = MEMF(eax + 0x24); /* movss */

loc_0011F8AC: ;
    xmm2 = MEMF(0x648CEC); /* movss */
    MEMF(eax + 0x24) = xmm0; /* movss */
    ecx = MEM32(esi + 0x34);
    xmm0 = xmm0 * xmm2; /* mulss */
    MEMF(ecx + 0x18) = xmm0; /* movss */
    /* comiss xmm1, MEMF(eax + 0x28) - sets EFLAGS */
    if ((xmm1 <= MEMF(eax + 0x28))) goto loc_0011F8D0; /* jbe: below or equal (unsigned <=) */

loc_0011F8CB: ;
    xmm0 = xmm1; /* movaps */
    goto loc_0011F8E2;

loc_0011F8D0: ;
    xmm0 = MEMF(eax + 0x28); /* movss */
    /* comiss xmm0, xmm3 - sets EFLAGS */
    xmm0 = xmm3; /* movaps */
    if ((xmm0 > xmm3)) goto loc_0011F8E2; /* ja: above (unsigned >) */

loc_0011F8DD: ;
    xmm0 = MEMF(eax + 0x28); /* movss */

loc_0011F8E2: ;
    MEMF(eax + 0x28) = xmm0; /* movss */
    edx = MEM32(esi + 0x34);
    xmm0 = xmm0 * xmm2; /* mulss */
    MEMF(edx + 0x1C) = xmm0; /* movss */
    /* comiss xmm1, MEMF(eax + 0x2C) - sets EFLAGS */
    if ((xmm1 <= MEMF(eax + 0x2C))) goto loc_0011F8FE; /* jbe: below or equal (unsigned <=) */

loc_0011F8F9: ;
    xmm0 = xmm1; /* movaps */
    goto loc_0011F910;

loc_0011F8FE: ;
    xmm0 = MEMF(eax + 0x2C); /* movss */
    /* comiss xmm0, xmm3 - sets EFLAGS */
    xmm0 = xmm3; /* movaps */
    if ((xmm0 > xmm3)) goto loc_0011F910; /* ja: above (unsigned >) */

loc_0011F90B: ;
    xmm0 = MEMF(eax + 0x2C); /* movss */

loc_0011F910: ;
    MEMF(eax + 0x2C) = xmm0; /* movss */
    ecx = MEM32(esi + 0x34);
    xmm0 = xmm0 * xmm2; /* mulss */
    MEMF(ecx + 0x20) = xmm0; /* movss */
    /* comiss xmm1, MEMF(eax + 0x18) - sets EFLAGS */
    if ((xmm1 > MEMF(eax + 0x18))) goto loc_0011F937; /* ja: above (unsigned >) */

loc_0011F927: ;
    xmm0 = MEMF(eax + 0x18); /* movss */
    /* comiss xmm0, xmm3 - sets EFLAGS */
    xmm1 = xmm3; /* movaps */
    if ((xmm0 > xmm3)) goto loc_0011F937; /* ja: above (unsigned >) */

loc_0011F934: ;
    xmm1 = xmm0; /* movaps */

loc_0011F937: ;
    MEMF(esp + 8) = xmm1; /* movss */
    fp_push(MEMF(esp + 8)); /* fld float */
    MEMF(eax + 0x18) = xmm1; /* movss */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0011F94B: ;
    edx = ZX8(LO8(eax));
    eax = MEM32(esi + 0x34);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(eax + 0x4C) = xmm0; /* movss */

loc_0011F95A: ;
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
 * sub_0011F960
 * Original: 0x0011F960 - 0x0011F96D (13 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011F960(void)
{
    int _flags = 0; /* fallback flag var */

loc_0011F960: ;
    esp = esp - 0x10;
    if (TEST_NZ(esi, esi)) { sub_0011F96D(); return; } /* jne: not equal / not zero */

loc_0011F967: ;
    eax = 0; /* xor self */
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0011F9F0
 * Original: 0x0011F9F0 - 0x0011F9FC (12 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011F9F0(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011F9F0: ;
    eax = MEM32(esp + 4);
    ecx = eax + 0x38;
    g_seh_ebp = ebp; sub_00120B30(); return; /* tail jmp 0x00120B30 */

}

/**
 * sub_0011FAB0
 * Original: 0x0011FAB0 - 0x0011FB6A (186 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011FAB0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0011FAB0: ;
    esp = esp - 0x2C;
    xmm0 = MEMF(0x648F38); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(0x649B78); /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(0x6490B0); /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(0x648F94); /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(0x648E5C); /* movss */
    MEMF(esp) = xmm0; /* movss */
    xmm0 = sqrtf(MEMF(esp)); /* sqrtss */
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = MEMF(0x6498F0); /* movss */
    xmm0 = xmm0 / MEMF(esp + 4); /* divss */
    PUSH32(esp, eax);
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(0x648D70); /* movss */
    PUSH32(esp, 0x3C);
    eax = 0x58;
    MEMF(esp + 0x30) = xmm0; /* movss */
    MEM8(esp + 0xC) = 0;
    MEM8(esp + 0xD) = 2;
    MEM16(esp + 0xE) = 0xA;
    MEM8(esp + 0x12) = 6;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_0011FB5F: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) { sub_0011FB6A(); return; } /* jne: not equal / not zero */

loc_0011FB66: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0011FBA0
 * Original: 0x0011FBA0 - 0x0011FC5A (186 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011FBA0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_0011FBA0: ;
    esp = esp - 0x20;
    xmm0 = MEMF(0x6491FC); /* movss */
    xmm1 = MEMF(0x64A058); /* movss */
    xmm2 = MEMF(0x64A054); /* movss */
    MEMF(esp) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 8) = xmm0; /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(0x649F4C); /* movss */
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x2A);
    eax = 0x6C;
    MEMF(esp + 0xC) = xmm1; /* movss */
    MEMF(esp + 0x14) = xmm2; /* movss */
    MEMF(esp + 0x18) = xmm1; /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_0011FC06: ;
    edx = 0; /* xor self */
    esp = esp + 8;
    if (CMP_EQ(eax, edx)) goto loc_0011FC56; /* je: equal / zero */

loc_0011FC0F: ;
    xmm0 = MEMF(0x64925C); /* movss */
    SET_LO8(ecx, LO8(ecx) | 0xFF);
    MEM8(eax + 0x38) = LO8(ecx);
    MEM8(eax + 0x3A) = LO8(ecx);
    MEM8(eax + 0x2C) = LO8(edx);
    MEM8(eax + 0x3B) = LO8(edx);
    ecx = 0; /* xor self */
    MEMF(eax + 0x30) = xmm0; /* movss */
    MEMF(eax + 0x34) = xmm0; /* movss */
    MEM8(eax + 0x39) = 0x1E;
    edx = eax + 0x3C;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    PUSH32(esp, esi);
    MEM32(edx + 8) = ecx;
    PUSH32(esp, edi);
    MEM32(edx + 0xC) = ecx;
    edi = eax + 0x4C;
    ecx = 8;
    esi = esp + 8;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    POP32(esp, edi);
    POP32(esp, esi);

loc_0011FC56: ;
    esp = esp + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_0011FC60
 * Original: 0x0011FC60 - 0x0011FCF1 (145 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011FC60(void)
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

loc_0011FC60: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    fp_push(MEMF(esi + 0x64)); /* fld float */
    /* FPU: fsin  */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0011FC78: ;
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = ZX8(LO8(eax));
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 4) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0011FC92: ;
    ecx = ZX8(LO8(eax));
    SET_LO8(eax, MEM8(0x773CD0));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    if (CMP_A(LO8(eax) & LO8(eax), 0)) { sub_0011FCF1(); return; } /* ja: above (unsigned >) */

loc_0011FCA8: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0011FCB3: ;
    edx = ZX8(LO8(eax));
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(0x773CC4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xC); /* movss */
    MEMF(0x773CC8) = xmm0; /* movss */
    xmm0 = MEMF(esp + 4); /* movss */
    MEMF(0x773CCC) = xmm0; /* movss */
    MEM32(0x773C68) = 1;
    MEM8(0x773CD0) = 0;
    g_seh_ebp = ebp; sub_0011FCF3(); return; /* tail jmp 0x0011FCF3 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0011FD50
 * Original: 0x0011FD50 - 0x0011FD5D (13 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011FD50(void)
{
    int _flags = 0; /* fallback flag var */

loc_0011FD50: ;
    esp = esp - 0x28;
    if (CMP_B(LO8(eax), 3)) { sub_0011FD5D(); return; } /* jb: below (unsigned <) */

loc_0011FD57: ;
    eax = 0; /* xor self */
    esp = esp + 0x28;
    esp += 4; return; /* ret */

}

/**
 * sub_0011FE30
 * Original: 0x0011FE30 - 0x0011FED3 (163 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011FE30(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0011FE30: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    fp_push(MEMF(esi + 0x50)); /* fld float */
    /* FPU: fsin  */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0011FE47: ;
    /* fld st(0) */
    ecx = MEM32(esi + 0x34);
    eax = ZX8(LO8(eax));
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(ecx + 0x18) = xmm0; /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0011FE63: ;
    edx = ZX8(LO8(eax));
    eax = MEM32(esi + 0x34);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(eax + 0x1C) = xmm0; /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0011FE7D: ;
    edx = MEM32(esi + 0x34);
    xmm1 = MEMF(0x648D30); /* movss */
    ecx = ZX8(LO8(eax));
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(edx + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x54); /* movss */
    xmm0 = xmm0 * MEMF(0x7FA24C); /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x50); /* addss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(esi + 0x50) = xmm0; /* movss */
    if ((xmm0 <= xmm1)) goto loc_0011FEB9; /* jbe: below or equal (unsigned <=) */

loc_0011FEB0: ;
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 > xmm1)) goto loc_0011FEB0; /* ja: above (unsigned >) */

loc_0011FEB9: ;
    xmm2 = 0.0f; /* xorps self = zero */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 <= xmm0)) goto loc_0011FECA; /* jbe: below or equal (unsigned <=) */

loc_0011FEC1: ;
    xmm0 = xmm0 + xmm1; /* addss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 > xmm0)) goto loc_0011FEC1; /* ja: above (unsigned >) */

loc_0011FECA: ;
    MEMF(esi + 0x50) = xmm0; /* movss */
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
 * sub_0011FEE0
 * Original: 0x0011FEE0 - 0x0011FFC9 (233 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011FEE0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0011FEE0: ;
    esp = esp - 0x2C;
    if (CMP_AE(LO8(eax), 0x18)) goto loc_0011FFC3; /* jae: above or equal (unsigned >=) */

loc_0011FEEB: ;
    eax = ZX8(LO8(eax));
    eax = eax << 2;
    xmm0 = MEMF(eax + 0x5967C8); /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x596768); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x596828); /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(0x648F94); /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(0x648E5C); /* movss */
    MEMF(esp) = xmm0; /* movss */
    xmm0 = sqrtf(MEMF(esp)); /* sqrtss */
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = MEMF(0x6498F0); /* movss */
    xmm0 = xmm0 / MEMF(esp + 4); /* divss */
    SET_LO8(eax, MEM8(esp + 0x38));
    MEM8(esp + 4) = LO8(eax);
    MEM8(esp + 5) = LO8(ecx);
    ecx = (uint32_t)(int32_t)SMEM16(esp + 0x3C);
    eax = 0x88888889u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + ecx;
    SET_LO8(ecx, MEM8(esp + 0x34));
    edx = (uint32_t)((int32_t)edx >> 4);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    edx = MEM32(esp + 0x40);
    PUSH32(esp, edx);
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(0x648D70); /* movss */
    MEM16(esp + 0xA) = LO16(eax);
    PUSH32(esp, 0x3C);
    eax = 0x58;
    MEMF(esp + 0x30) = xmm0; /* movss */
    MEM8(esp + 0x12) = LO8(ecx);
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_0011FFBC: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) { sub_0011FFC9(); return; } /* jne: not equal / not zero */

loc_0011FFC3: ;
    eax = 0; /* xor self */
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00120000
 * Original: 0x00120000 - 0x0012000D (13 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120000(void)
{
    int _flags = 0; /* fallback flag var */

loc_00120000: ;
    esp = esp - 0x34;
    if (CMP_B(LO8(eax), 0x18)) { sub_0012000D(); return; } /* jb: below (unsigned <) */

loc_00120007: ;
    eax = 0; /* xor self */
    esp = esp + 0x34;
    esp += 4; return; /* ret */

}

/**
 * sub_00120130
 * Original: 0x00120130 - 0x00120290 (352 bytes, 80 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120130(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4;

loc_00120130: ;
    esp = esp - 0x34;
    if (CMP_AE(LO8(eax), 5)) goto loc_0012028A; /* jae: above or equal (unsigned >=) */

loc_0012013B: ;
    eax = ZX8(LO8(eax));
    eax = eax << 2;
    xmm0 = MEMF(eax + 0x596888); /* movss */
    xmm4 = MEMF(eax + 0x5968C4); /* movss */
    xmm3 = MEMF(eax + 0x5968B0); /* movss */
    /* comiss xmm4, xmm3 - sets EFLAGS */
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x59689C); /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x596888); /* movss */
    xmm0 = xmm0 - MEMF(eax + 0x59689C); /* subss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x5968D8); /* movss */
    xmm0 = xmm0 * MEMF(0x648CE0); /* mulss */
    MEM8(esp + 0x2D) = LO8(ecx);
    SET_LO8(ecx, MEM8(esp + 0x4C));
    MEM8(esp + 0x2E) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x50));
    xmm1 = xmm4; /* movaps */
    xmm1 = xmm1 + MEMF(eax + 0x5968EC); /* addss */
    xmm1 = xmm1 + MEMF(eax + 0x5968D8); /* addss */
    xmm2 = xmm4; /* movaps */
    xmm2 = xmm2 + MEMF(eax + 0x5968D8); /* addss */
    xmm0 = xmm0 + xmm4; /* addss */
    xmm0 = xmm0 + MEMF(eax + 0x5968EC); /* addss */
    MEM8(esp + 0x2F) = LO8(ecx);
    MEM8(esp + 0x30) = LO8(edx);
    MEMF(esp + 0x14) = xmm3; /* movss */
    MEMF(esp + 0x18) = xmm4; /* movss */
    MEMF(esp + 0x1C) = xmm2; /* movss */
    MEMF(esp + 0x20) = xmm1; /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    if ((xmm4 <= xmm3)) goto loc_001201FF; /* jbe: below or equal (unsigned <=) */

loc_001201F8: ;
    MEM8(esp + 0x2C) = 0;
    goto loc_00120226;

loc_001201FF: ;
    /* comiss xmm2, xmm3 - sets EFLAGS */
    if ((xmm2 <= xmm3)) goto loc_0012020B; /* jbe: below or equal (unsigned <=) */

loc_00120204: ;
    MEM8(esp + 0x2C) = 1;
    goto loc_00120226;

loc_0012020B: ;
    /* comiss xmm1, xmm3 - sets EFLAGS */
    if ((xmm1 <= xmm3)) goto loc_00120217; /* jbe: below or equal (unsigned <=) */

loc_00120210: ;
    MEM8(esp + 0x2C) = 2;
    goto loc_00120226;

loc_00120217: ;
    /* comiss xmm0, xmm3 - sets EFLAGS */
    MEM8(esp + 0x2C) = 3;
    if ((xmm0 > xmm3)) goto loc_00120226; /* ja: above (unsigned >) */

loc_00120221: ;
    MEM8(esp + 0x2C) = 4;

loc_00120226: ;
    xmm0 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 / MEMF(eax + 0x5968D8); /* divss */
    SET_LO8(ecx, MEM8(esp + 0x48));
    SET_LO8(eax, MEM8(esp + 0x40));
    MEM8(esp) = LO8(eax);
    MEM8(esp + 1) = LO8(ecx);
    ecx = (uint32_t)(int32_t)SMEM16(esp + 0x44);
    eax = 0x88888889u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + ecx;
    SET_LO8(ecx, MEM8(esp + 0x3C));
    edx = (uint32_t)((int32_t)edx >> 4);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    edx = MEM32(esp + 0x58);
    MEM16(esp + 2) = LO16(eax);
    eax = MEM32(esp + 0x54);
    PUSH32(esp, edx);
    eax = eax + 0x64;
    PUSH32(esp, 0x3C);
    MEMF(esp + 0x30) = xmm0; /* movss */
    MEM8(esp + 0xE) = LO8(ecx);
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_00120283: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) { sub_00120290(); return; } /* jne: not equal / not zero */

loc_0012028A: ;
    eax = 0; /* xor self */
    esp = esp + 0x34;
    esp += 4; return; /* ret */

}

/**
 * sub_001202C0
 * Original: 0x001202C0 - 0x001202F4 (52 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001202C0(void)
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

loc_001202C0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    xmm0 = MEMF(esi + 0x48); /* movss */
    /* comiss xmm0, MEMF(esi + 0x44) - sets EFLAGS */
    SET_LO8(ebx, MEM8(esi + 0x5C));
    if ((xmm0 <= MEMF(esi + 0x44))) { sub_001202F4(); return; } /* jbe: below or equal (unsigned <=) */

loc_001202D4: ;
    fp_push(MEMF(esi + 0x3C)); /* fld float */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_001202DC: ;
    ecx = MEM32(esi + 0x34);
    eax = ZX8(LO8(eax));
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(ecx + 0x4C) = xmm0; /* movss */
    MEM8(esi + 0x5C) = 0;
    g_seh_ebp = ebp; sub_0012037D(); return; /* tail jmp 0x0012037D */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00120440
 * Original: 0x00120440 - 0x00120479 (57 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120440(void)
{
    int _flags = 0; /* fallback flag var */

loc_00120440: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    SET_LO8(edx, MEM8(esi + 0x64));
    PUSH32(esp, 0); sub_0006ADD0(); /* call 0x0006ADD0 */

loc_0012044D: ;
    if (TEST_Z(eax, eax)) goto loc_00120458; /* je: equal / zero */

loc_00120451: ;
    MEM32(eax + 0xD8) = MEM32(eax + 0xD8) & 0xFFFFFFFEu;

loc_00120458: ;
    SET_LO8(eax, MEM8(esi + 0x32));
    PUSH32(esp, 0x25);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    SET_LO8(eax, LO8(eax) - 0x15);
    PUSH32(esp, 4);
    PUSH32(esp, 0x6B710C);
    MEM8(esp + 0x18) = LO8(eax);
    PUSH32(esp, 0); sub_000DAA60(); /* call 0x000DAA60 */

loc_00120474: ;
    esp = esp + 0x10;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00120480
 * Original: 0x00120480 - 0x00120576 (246 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120480(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_00120480: ;
    esp = esp - 0x3C;
    if (CMP_AE(LO8(eax), 3)) goto loc_00120570; /* jae: above or equal (unsigned >=) */

loc_0012048B: ;
    xmm0 = 0.0f; /* xorps self = zero */
    eax = ZX8(LO8(eax));
    eax = eax << 2;
    ecx = MEM32(eax + 0x59692C);
    xmm1 = MEMF(eax + 0x596908); /* movss */
    edx = MEM32(eax + 0x596938);
    MEMF(esp + 8) = xmm0; /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x596944); /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x596950); /* movss */
    MEMF(esp + 0xC) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x596914); /* movss */
    MEM32(esp + 0x20) = ecx;
    SET_LO8(ecx, MEM8(esp + 0x50));
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x59695C); /* movss */
    MEMF(esp + 0x14) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x596920); /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x596968); /* movss */
    SET_LO8(eax, MEM8(esp + 0x48));
    MEM8(esp) = LO8(eax);
    MEM8(esp + 1) = LO8(ecx);
    ecx = (uint32_t)(int32_t)SMEM16(esp + 0x4C);
    MEM32(esp + 0x24) = edx;
    eax = 0x88888889u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + ecx;
    SET_LO8(ecx, MEM8(esp + 0x44));
    edx = (uint32_t)((int32_t)edx >> 4);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    edx = MEM32(esp + 0x54);
    PUSH32(esp, edx);
    MEM16(esp + 6) = LO16(eax);
    PUSH32(esp, 0x3C);
    eax = 0x6C;
    MEMF(esp + 0x20) = xmm1; /* movss */
    MEM32(esp + 0x24) = 0;
    MEMF(esp + 0x40) = xmm0; /* movss */
    MEM8(esp + 0xE) = LO8(ecx);
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_00120569: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) { sub_00120576(); return; } /* jne: not equal / not zero */

loc_00120570: ;
    eax = 0; /* xor self */
    esp = esp + 0x3C;
    esp += 4; return; /* ret */

}

/**
 * sub_001206A0
 * Original: 0x001206A0 - 0x001206DB (59 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001206A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001206A0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x38);
    ecx = MEM32(ecx);
    edx = MEM32(eax + 0x34);
    MEM32(edx + 0xC) = ecx;
    edx = MEM32(eax + 0x3C);
    ecx = MEM32(eax + 0x34);
    edx = MEM32(edx);
    MEM32(ecx + 0x10) = edx;
    ecx = MEM32(eax + 0x40);
    ecx = MEM32(ecx);
    edx = MEM32(eax + 0x34);
    MEM32(edx + 0x14) = ecx;
    SET_LO8(ecx, MEM8(eax + 0x44));
    if (CMP_EQ(LO8(ecx), 0xFF)) { sub_001206DB(); return; } /* je: equal / zero */

loc_001206CD: ;
    edx = SX8(LO8(ecx));
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx * 4 + 0x596974)); return; /* indirect tail jmp */

}

/**
 * sub_001206E0
 * Original: 0x001206E0 - 0x001206F9 (25 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001206E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001206E0: ;
    ecx = MEM32(esp + 4);
    eax = ZX8(MEM8(ecx + 0x45));
    eax = MEM32(eax * 4 + 0x596978);
    if (TEST_Z(eax, eax)) { sub_001206F9(); return; } /* je: equal / zero */

loc_001206F3: ;
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; RECOMP_ITAIL(eax); return; /* indirect tail jmp */

}

/**
 * sub_00120700
 * Original: 0x00120700 - 0x001207A0 (160 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120700(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00120700: ;
    esp = esp - 0x18;
    if (CMP_AE(LO8(eax), 0xE)) goto loc_0012079A; /* jae: above or equal (unsigned >=) */

loc_0012070B: ;
    PUSH32(esp, esi);
    esi = ZX8(LO8(eax));
    esi = esi << 2;
    xmm0 = MEMF(esi + 0x59697C); /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x5969B4); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00120733: ;
    SET_LO8(eax, MEM8(esp + 0x2C));
    ecx = (uint32_t)(int32_t)SMEM16(esp + 0x28);
    xmm0 = xmm0 * MEMF(0x648D30); /* mulss */
    MEM8(esp + 4) = LO8(eax);
    eax = 0x88888889u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    eax = MEM32(esp + 0x30);
    edx = edx + ecx;
    edx = (uint32_t)((int32_t)edx >> 4);
    ecx = edx;
    ecx = ecx >> 0x1F;
    ecx = ecx + edx;
    SET_LO8(edx, MEM8(esp + 0x24));
    PUSH32(esp, eax);
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x5969EC); /* movss */
    PUSH32(esp, 0x3C);
    eax = 0x48;
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEM8(esp + 0xD) = 1;
    MEM16(esp + 0xE) = LO16(ecx);
    MEM8(esp + 0x12) = LO8(edx);
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_00120792: ;
    esp = esp + 8;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, esi);
    if (TEST_NZ(eax, eax)) { sub_001207A0(); return; } /* jne: not equal / not zero */

loc_0012079A: ;
    eax = 0; /* xor self */
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_001207E0
 * Original: 0x001207E0 - 0x0012085C (124 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001207E0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_001207E0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    fp_push(MEMF(esi + 0x40)); /* fld float */
    /* FPU: fsin  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_001207F5: ;
    ecx = MEM32(esi + 0x34);
    xmm1 = MEMF(0x648D30); /* movss */
    eax = ZX8(LO8(eax));
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(ecx + 0x4C) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x44); /* movss */
    xmm0 = xmm0 * MEMF(0x7FA24C); /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x40); /* addss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(esi + 0x40) = xmm0; /* movss */
    if ((xmm0 <= xmm1)) goto loc_00120839; /* jbe: below or equal (unsigned <=) */

loc_00120828: ;
    goto loc_00120830;

    /* nop */

loc_00120830: ;
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 > xmm1)) goto loc_00120830; /* ja: above (unsigned >) */

loc_00120839: ;
    xmm2 = 0.0f; /* xorps self = zero */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 <= xmm0)) goto loc_0012084A; /* jbe: below or equal (unsigned <=) */

loc_00120841: ;
    xmm0 = xmm0 + xmm1; /* addss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 > xmm0)) goto loc_00120841; /* ja: above (unsigned >) */

loc_0012084A: ;
    /* comiss xmm0, MEMF(0x648D88) - sets EFLAGS */
    MEMF(esi + 0x40) = xmm0; /* movss */
    POP32(esp, esi);
    if ((xmm0 <= MEMF(0x648D88))) { sub_0012085C(); return; } /* jbe: below or equal (unsigned <=) */

loc_00120859: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00120860
 * Original: 0x00120860 - 0x001208AD (77 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120860(void)
{
    int _flags = 0; /* fallback flag var */

loc_00120860: ;
    esp = esp - 8;
    MEM8(esp) = LO8(eax);
    MEM8(esp + 1) = LO8(ecx);
    ecx = (uint32_t)(int32_t)SMEM16(esp + 0x10);
    eax = 0x88888889u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + ecx;
    SET_LO8(ecx, MEM8(esp + 0x14));
    edx = (uint32_t)((int32_t)edx >> 4);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    edx = MEM32(esp + 0x1C);
    MEM16(esp + 2) = LO16(eax);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    eax = eax + 0x38;
    PUSH32(esp, 0x3C);
    MEM8(esp + 0xE) = LO8(ecx);
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_001208A2: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) { sub_001208AD(); return; } /* jne: not equal / not zero */

loc_001208A9: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_001208D0
 * Original: 0x001208D0 - 0x0012091A (74 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001208D0(void)
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

loc_001208D0: ;
    ecx = MEM32(0x773F94);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x38);
    if (CMP_GE(eax, ecx)) goto loc_001208F8; /* jge: greater or equal (signed >=) */

loc_001208E2: ;
    if (TEST_S(eax, eax)) goto loc_001208F8; /* jl: less (signed <) */

loc_001208E6: ;
    eax = eax + eax * 8;
    xmm0 = MEMF(eax * 4 + 0x773FA4); /* movss */
    MEMF(esp + 8) = xmm0; /* movss */

loc_001208F8: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00120907: ;
    edx = MEM32(esi + 0x34);
    ecx = ZX8(LO8(eax));
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(edx + 0x4C) = xmm0; /* movss */
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
 * sub_00120920
 * Original: 0x00120920 - 0x00120935 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120920(void)
{
    int _flags = 0; /* fallback flag var */

loc_00120920: ;
    eax = MEM32(esp + 0xC);
    if (CMP_NE(eax, 0x27)) { sub_00120935(); return; } /* jne: not equal / not zero */

loc_00120929: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x34);
    MEM8(ecx + 0x5A) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00120950
 * Original: 0x00120950 - 0x00120965 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120950(void)
{
    int _flags = 0; /* fallback flag var */

loc_00120950: ;
    eax = MEM32(esp + 0xC);
    if (CMP_NE(eax, 0x27)) { sub_00120965(); return; } /* jne: not equal / not zero */

loc_00120959: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x34);
    MEM8(ecx + 0x5A) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00120980
 * Original: 0x00120980 - 0x0012099E (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120980(void)
{
    int _flags = 0; /* fallback flag var */

loc_00120980: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = edi + 0x38;
    PUSH32(esp, 0); sub_00120A90(); /* call 0x00120A90 */

loc_0012098E: ;
    eax = MEM32(edi + 0x48);
    (void)0; /* cmp MEM8(eax + 0xC2), 1 - flags set for next jcc */
    POP32(esp, edi);
    SET_LO8(eax, (CMP_NE(MEM8(eax + 0xC2), 1)) ? 1 : 0); /* setne */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001209A0
 * Original: 0x001209A0 - 0x00120A17 (119 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001209A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001209A0: ;
    esp = esp - 0x14;
    xmm0 = MEMF(0x648E38); /* movss */
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = MEMF(0x648E5C); /* movss */
    PUSH32(esp, ebx);
    MEMF(esp + 0xC) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001209C5: ;
    eax = MEM32(esi + 0x4B0);
    ecx = MEM32(eax + 0x24);
    edx = MEM32(ecx + 8);
    xmm0 = xmm0 * MEMF(0x648D30); /* mulss */
    eax = MEM32(edx + 0x10);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(0x64A494); /* movss */
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    ebx = 0x5D58D8;
    MEMF(esp + 0x20) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00415EC0(); /* call 0x00415EC0 */

loc_00120A03: ;
    esp = esp + 0xC;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ebx);
    if (TEST_Z(eax, eax)) { sub_00120A17(); return; } /* je: equal / zero */

loc_00120A0B: ;
    eax = MEM32(esp);
    if (TEST_Z(eax, eax)) { sub_00120A17(); return; } /* je: equal / zero */

loc_00120A12: ;
    eax = MEM32(eax + 8);
    g_seh_ebp = ebp; sub_00120A19(); return; /* tail jmp 0x00120A19 */

}

/**
 * sub_00120A70
 * Original: 0x00120A70 - 0x00120A83 (19 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120A70(void)
{

loc_00120A70: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = edi + 0x5C;
    PUSH32(esp, 0); sub_00120A90(); /* call 0x00120A90 */

loc_00120A7E: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00120A90
 * Original: 0x00120A90 - 0x00120AC4 (52 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120A90(void)
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

loc_00120A90: ;
    PUSH32(esp, ecx);
    fp_push(MEMF(esi + 8)); /* fld float */
    eax = MEM32(0x7FA1F8);
    (void)0; /* cmp eax, 0x40 - flags set for next jcc */
    /* FPU: fsin  */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    if (CMP_NE(eax, 0x40)) { sub_00120AC4(); return; } /* jne: not equal / not zero */

loc_00120AA3: ;
    xmm0 = MEMF(esi + 4); /* movss */
    eax = MEM32(edi + 0x34);
    xmm0 = xmm0 * MEMF(esp); /* mulss */
    xmm0 = xmm0 + MEMF(esi); /* addss */
    MEMF(eax + 0x4C) = xmm0; /* movss */
    eax = MEM32(edi + 0x34);
    ecx = MEM32(eax + 0x4C);
    MEM32(eax + 0x24) = ecx;
    g_seh_ebp = ebp; sub_00120AE0(); return; /* tail jmp 0x00120AE0 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00120B30
 * Original: 0x00120B30 - 0x00120C33 (259 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120B30(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;

loc_00120B30: ;
    esp = esp - 8;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi);
    edx = MEM32(ecx + 0x64);
    if (TEST_Z(edx, edx)) { sub_00120C33(); return; } /* je: equal / zero */

loc_00120B43: ;
    SET_LO8(edx, MEM8(ecx + 0x10B));
    if (CMP_NE(LO8(edx), MEM8(esi + 4))) { sub_00120C33(); return; } /* jne: not equal / not zero */

loc_00120B52: ;
    edx = MEM32(eax + 0x34);
    esi = MEM32(ecx + 0x78);
    MEM32(edx + 0xC) = esi;
    edx = MEM32(eax + 0x34);
    esi = MEM32(ecx + 0x7C);
    MEM32(edx + 0x10) = esi;
    edx = MEM32(eax + 0x34);
    esi = MEM32(ecx + 0x80);
    MEM32(edx + 0x14) = esi;
    if (CMP_NE(MEM32(ecx + 0x64), 1)) goto loc_00120B8B; /* jne: not equal / not zero */

loc_00120B76: ;
    ecx = MEM32(eax + 0x34);
    xmm0 = MEMF(ecx + 0x10); /* movss */
    xmm0 = xmm0 + MEMF(0x6490B8); /* addss */
    MEMF(ecx + 0x10) = xmm0; /* movss */

loc_00120B8B: ;
    if (TEST_Z(MEM8(eax + 0x2C), 4)) goto loc_00120C2C; /* je: equal / zero */

loc_00120B95: ;
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x2E);
    edx = (uint32_t)(int32_t)SMEM16(eax + 0x30);
    xmm3 = 0.0f; /* xorps self = zero */
    xmm5 = MEMF(0x648D14); /* movss */
    xmm4 = MEMF(0x648E64); /* movss */
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm2 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 / xmm2; /* divss */
    /* comiss xmm3, xmm0 - sets EFLAGS */
    if ((xmm3 <= xmm0)) goto loc_00120BC9; /* jbe: below or equal (unsigned <=) */

loc_00120BC4: ;
    xmm0 = xmm3; /* movaps */
    goto loc_00120BD3;

loc_00120BC9: ;
    /* comiss xmm0, xmm5 - sets EFLAGS */
    if ((xmm0 > xmm5)) goto loc_00120C2C; /* ja: above (unsigned >) */

loc_00120BCE: ;
    /* comiss xmm4, xmm0 - sets EFLAGS */
    if ((xmm4 <= xmm0)) goto loc_00120C2C; /* jbe: below or equal (unsigned <=) */

loc_00120BD3: ;
    xmm2 = xmm2 * xmm4; /* mulss */
    xmm1 = xmm1 / xmm2; /* divss */
    /* comiss xmm3, xmm1 - sets EFLAGS */
    if ((xmm3 <= xmm1)) goto loc_00120BE5; /* jbe: below or equal (unsigned <=) */

loc_00120BE0: ;
    xmm1 = xmm3; /* movaps */
    goto loc_00120BED;

loc_00120BE5: ;
    /* comiss xmm1, xmm5 - sets EFLAGS */
    if ((xmm1 <= xmm5)) goto loc_00120BED; /* jbe: below or equal (unsigned <=) */

loc_00120BEA: ;
    xmm1 = xmm5; /* movaps */

loc_00120BED: ;
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = sqrtf(MEMF(esp + 4)); /* sqrtss */
    MEMF(esp + 8) = xmm0; /* movss */
    ecx = MEM32(eax + 0x34);
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 * MEMF(ecx + 0x18); /* mulss */
    MEMF(ecx + 0x18) = xmm0; /* movss */
    ecx = MEM32(eax + 0x34);
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 * MEMF(ecx + 0x1C); /* mulss */
    MEMF(ecx + 0x1C) = xmm0; /* movss */
    eax = MEM32(eax + 0x34);
    xmm1 = xmm1 * MEMF(eax + 0x20); /* mulss */
    MEMF(eax + 0x20) = xmm1; /* movss */

loc_00120C2C: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00120C40
 * Original: 0x00120C40 - 0x00120CEA (170 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120C40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00120C40: ;
    ecx = MEM32(esp + 0xC);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (TEST_NZ(ecx, ecx)) goto loc_00120C9D; /* jne: not equal / not zero */

loc_00120C4D: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(eax);
    if (CMP_EQ(ecx, MEM32(esi + 0x38))) goto loc_00120C64; /* je: equal / zero */

loc_00120C58: ;
    SET_LO8(edx, MEM8(eax + 4));
    if (CMP_NE(LO8(edx), MEM8(esi + 0x3C))) goto loc_00120CE8; /* jne: not equal / not zero */

loc_00120C64: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00120CE8; /* jne: not equal / not zero */

loc_00120C6D: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_00120C74: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_00120CE8; /* jl: less (signed <) */

loc_00120C7B: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) goto loc_00120C90; /* je: equal / zero */

loc_00120C88: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00120C8B: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00120C90: ;
    eax = esi;
    edx = 1;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000DA5E0(); return; /* tail jmp 0x000DA5E0 */

loc_00120C9D: ;
    if (CMP_NE(ecx, 0x2D)) goto loc_00120CCD; /* jne: not equal / not zero */

loc_00120CA2: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esi + 0x38);
    edx = MEM32(eax);
    if (CMP_NE(ecx, edx)) goto loc_00120CBD; /* jne: not equal / not zero */

loc_00120CAF: ;
    ecx = MEM32(eax + 4);
    MEM32(esi + 0x38) = ecx;
    SET_LO8(edx, MEM8(eax + 9));
    MEM8(esi + 0x3C) = LO8(edx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00120CBD: ;
    if (CMP_NE(ecx, MEM32(eax + 4))) goto loc_00120CE8; /* jne: not equal / not zero */

loc_00120CC2: ;
    MEM32(esi + 0x38) = edx;
    SET_LO8(eax, MEM8(eax + 8));
    MEM8(esi + 0x3C) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00120CCD: ;
    edx = ZX8(MEM8(esi + 0x4D));
    eax = MEM32(edx * 4 + 0x596A30);
    if (TEST_Z(eax, eax)) goto loc_00120CE8; /* je: equal / zero */

loc_00120CDC: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00120CE5: ;
    esp = esp + 0xC;

loc_00120CE8: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00120CF0
 * Original: 0x00120CF0 - 0x00120D46 (86 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120CF0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00120CF0: ;
    (void)0; /* cmp MEM32(esp + 0xC), 0x29 - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (CMP_NE(MEM32(esp + 0xC), 0x29)) goto loc_00120D44; /* jne: not equal / not zero */

loc_00120CFC: ;
    eax = MEM32(esp + 0xC);
    eax = MEM32(eax + 4);
    ecx = MEM32(esi + 0x38);
    SET_LO8(edx, MEM8(eax + 4));
    if (CMP_EQ(ecx, MEM32(eax))) goto loc_00120D1A; /* je: equal / zero */

loc_00120D0D: ;
    if (CMP_EQ(MEM8(esi + 0x3C), LO8(edx))) goto loc_00120D1A; /* je: equal / zero */

loc_00120D12: ;
    if (CMP_NE(MEM8(ecx + 0x10B), LO8(edx))) goto loc_00120D44; /* jne: not equal / not zero */

loc_00120D1A: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00120D44; /* jne: not equal / not zero */

loc_00120D23: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_00120D2A: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_00120D44; /* jl: less (signed <) */

loc_00120D31: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) { sub_00120D46(); return; } /* je: equal / zero */

loc_00120D3E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00120D41: ;
    esp = esp + 4;

loc_00120D44: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00120E10
 * Original: 0x00120E10 - 0x00120E4E (62 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120E10(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00120E10: ;
    esp = esp - 0x10;
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ecx);
    MEM8(esp + 0x10) = LO8(eax);
    PUSH32(esp, 0x3C);
    eax = 0x40;
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEM8(esp + 8) = 0;
    MEM8(esp + 9) = 0x14;
    MEM16(esp + 0xA) = 0xA;
    MEM8(esp + 0xE) = 0x27;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_00120E43: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) { sub_00120E4E(); return; } /* jne: not equal / not zero */

loc_00120E4A: ;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00120E80
 * Original: 0x00120E80 - 0x00120EBB (59 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120E80(void)
{
    float xmm0, xmm1;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00120E80: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    fp_push(MEMF(esi + 0x38)); /* fld float */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00120E8D: ;
    ecx = MEM32(esi + 0x34);
    eax = ZX8(LO8(eax));
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(ecx + 0x4C) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x38); /* movss */
    xmm1 = MEMF(esi + 0x38); /* movss */
    xmm0 = xmm0 * MEMF(0x649688); /* mulss */
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(esi + 0x38) = xmm1; /* movss */
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
 * sub_00120EC0
 * Original: 0x00120EC0 - 0x00120F0D (77 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120EC0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00120EC0: ;
    (void)0; /* cmp MEM32(esp + 0xC), 0x33 - flags set for next jcc */
    ecx = MEM32(esp + 4);
    if (CMP_NE(MEM32(esp + 0xC), 0x33)) goto loc_00120F0C; /* jne: not equal / not zero */

loc_00120ECB: ;
    eax = MEM32(esp + 8);
    SET_LO8(edx, MEM8(ecx + 0x3C));
    if (CMP_NE(LO8(edx), MEM8(eax + 4))) goto loc_00120F0C; /* jne: not equal / not zero */

loc_00120ED7: ;
    edx = MEM32(eax);
    MEM32(ecx + 0x38) = edx;
    edx = ZX8(MEM8(eax + 5));
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = MEM32(ecx + 0x34);
    MEMF(edx + 0x18) = xmm0; /* movss */
    edx = ZX8(MEM8(eax + 6));
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = MEM32(ecx + 0x34);
    MEMF(edx + 0x1C) = xmm0; /* movss */
    eax = ZX8(MEM8(eax + 7));
    ecx = MEM32(ecx + 0x34);
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(ecx + 0x20) = xmm0; /* movss */

loc_00120F0C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00120F10
 * Original: 0x00120F10 - 0x00120F22 (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120F10(void)
{
    int _flags = 0; /* fallback flag var */

loc_00120F10: ;
    ecx = MEM32(esp + 0xC);
    (void)0; /* cmp ecx, 0x40 - flags set for next jcc */
    eax = MEM32(esp + 4);
    if (CMP_NE(ecx, 0x40)) { sub_00120F22(); return; } /* jne: not equal / not zero */

loc_00120F1D: ;
    MEM8(eax + 0x5C) = MEM8(eax + 0x5C) | 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00120F30
 * Original: 0x00120F30 - 0x00120F91 (97 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120F30(void)
{
    float xmm0;

loc_00120F30: ;
    esp = esp - 0x10;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    edx = esi + 0x38;
    eax = esp + 8;
    ecx = esp + 0x18;
    MEM32(esp + 4) = edx;
    edx = MEM32(edx + 0xC);
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, ecx);
    eax = 1;
    ecx = esp + 8;
    PUSH32(esp, 0); sub_00111A20(); /* call 0x00111A20 */

loc_00120F5D: ;
    edx = MEM32(esi + 0x34);
    xmm0 = MEMF(esp + 0xC); /* movss */
    MEMF(edx + 0xC) = xmm0; /* movss */
    eax = MEM32(esi + 0x34);
    xmm0 = MEMF(esp + 0x10); /* movss */
    MEMF(eax + 0x10) = xmm0; /* movss */
    ecx = MEM32(esi + 0x34);
    xmm0 = MEMF(esp + 0x14); /* movss */
    esp = esp + 4;
    MEMF(ecx + 0x14) = xmm0; /* movss */
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00120FA0
 * Original: 0x00120FA0 - 0x00120FD5 (53 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120FA0(void)
{
    float xmm0, xmm1;

loc_00120FA0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x40);
    xmm1 = MEMF(eax + 0xC); /* movss */
    xmm0 = MEMF(eax + 4); /* movss */
    xmm0 = xmm0 * MEMF(esi + 0x3C); /* mulss */
    eax = MEM32(esi + 0x38);
    xmm1 = xmm1 * MEMF(esi + 0x3C); /* mulss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, eax);
    edx = esi + 0x44;
    PUSH32(esp, 0); sub_00121110(); /* call 0x00121110 */

loc_00120FCE: ;
    esp = esp + 8;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00120FE0
 * Original: 0x00120FE0 - 0x00121058 (120 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120FE0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_00120FE0: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x2E);
    edx = (uint32_t)(int32_t)SMEM16(eax + 0x30);
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = xmm0 / xmm1; /* divss */
    xmm1 = 0.0f; /* xorps self = zero */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 > xmm0)) goto loc_0012100E; /* ja: above (unsigned >) */

loc_00121001: ;
    xmm1 = MEMF(0x648D14); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_00121011; /* jbe: below or equal (unsigned <=) */

loc_0012100E: ;
    xmm0 = xmm1; /* movaps */

loc_00121011: ;
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = sqrtf(MEMF(esp + 8)); /* sqrtss */
    MEMF(esp) = xmm0; /* movss */
    ecx = MEM32(eax + 0x34);
    xmm0 = MEMF(esp); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(ecx + 0x18); /* mulss */
    MEMF(ecx + 0x18) = xmm1; /* movss */
    ecx = MEM32(eax + 0x34);
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(ecx + 0x1C); /* mulss */
    MEMF(ecx + 0x1C) = xmm1; /* movss */
    eax = MEM32(eax + 0x34);
    xmm0 = xmm0 * MEMF(eax + 0x20); /* mulss */
    MEMF(eax + 0x20) = xmm0; /* movss */
    SET_LO8(eax, 1);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00121060
 * Original: 0x00121060 - 0x00121093 (51 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121060(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00121060: ;
    eax = MEM32(esp + 4);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x2E);
    edx = (uint32_t)(int32_t)SMEM16(eax + 0x30);
    xmm2 = 0.0f; /* xorps self = zero */
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = xmm0 / xmm1; /* divss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    xmm1 = MEMF(0x648D14); /* movss */
    MEMF(esp + 4) = xmm0; /* movss */
    if ((xmm2 <= xmm0)) { sub_00121093(); return; } /* jbe: below or equal (unsigned <=) */

loc_0012108E: ;
    xmm0 = xmm2; /* movaps */
    g_seh_ebp = ebp; sub_0012109B(); return; /* tail jmp 0x0012109B */

}

/**
 * sub_00121110
 * Original: 0x00121110 - 0x001211DD (205 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121110(void)
{
    uint32_t ebp;
    float xmm0, xmm1, xmm5;

loc_00121110: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x60;
    xmm0 = MEMF(0x648E18); /* movss */
    xmm5 = MEMF(0x648D14); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp) = xmm1; /* movss */
    xmm1 = MEMF(ebp + 0xC); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp) = xmm1; /* movss */
    PUSH32(esp, 0x3F800000);
    eax = esp + 0x3C;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E2E60(); /* call 0x003E2E60 */

loc_0012115E: ;
    xmm0 = MEMF(edx); /* movss */
    xmm1 = MEMF(ebp + 8); /* movss */
    MEMF(esp + 0x74) = xmm0; /* movss */
    xmm0 = MEMF(edx + 4); /* movss */
    esp = esp + 0x24;
    MEMF(esp + 0x54) = xmm0; /* movss */
    xmm0 = MEMF(edx + 8); /* movss */
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    eax = esp + 0x1C;
    MEMF(esp + 0x60) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, eax);
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEMF(esp + 0x18) = xmm1; /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_001211AF: ;
    ecx = MEM32(esi + 0x34);
    xmm0 = MEMF(esp + 0x14); /* movss */
    MEMF(ecx + 0xC) = xmm0; /* movss */
    edx = MEM32(esi + 0x34);
    xmm0 = MEMF(esp + 0x18); /* movss */
    MEMF(edx + 0x10) = xmm0; /* movss */
    eax = MEM32(esi + 0x34);
    xmm0 = MEMF(esp + 0x1C); /* movss */
    MEMF(eax + 0x14) = xmm0; /* movss */
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001211E0
 * Original: 0x001211E0 - 0x00121309 (297 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001211E0(void)
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

loc_001211E0: ;
    MEM8(0x77379B) = LO8(eax);
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    eax = MEM32(0x7FA1F8);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0012128D; /* je: equal / zero */

loc_001211F2: ;
    (void)0; /* cmp eax, 6 - flags set for next jcc */
    ecx = 1;
    if (CMP_EQ(eax, 6)) goto loc_0012120B; /* je: equal / zero */

loc_001211FC: ;
    if (CMP_EQ(eax, 0xB)) goto loc_00121308; /* je: equal / zero */

loc_00121205: ;
    if (CMP_EQ(eax, 0x39)) goto loc_00121215; /* je: equal / zero */

loc_0012120A: ;
    esp += 4; return; /* ret */

loc_0012120B: ;
    edx = 0xA;
    PUSH32(esp, 0); sub_00128E30(); /* call 0x00128E30 */

loc_00121215: ;
    SET_LO8(eax, MEM8(0x773CD0));
    if (CMP_A(LO8(eax) & LO8(eax), 0)) goto loc_0012125B; /* ja: above (unsigned >) */

loc_0012121E: ;
    xmm0 = MEMF(0x6B7428); /* movss */
    MEMF(0x773CC4) = xmm0; /* movss */
    xmm0 = MEMF(0x6B742C); /* movss */
    MEMF(0x773CC8) = xmm0; /* movss */
    xmm0 = MEMF(0x6B7430); /* movss */
    MEMF(0x773CCC) = xmm0; /* movss */
    MEM32(0x773C68) = ecx;
    MEM8(0x773CD0) = 0;

loc_0012125B: ;
    fp_push(MEMF(0x6B7434)); /* fld float */
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00121267: ;
    esi = MEM32(0x8471A4);
    MEM8(esi) = LO8(eax);
    fp_push(MEMF(0x6B7438)); /* fld float */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0012127A: ;
    MEM8(esi + 1) = LO8(eax);
    fp_push(MEMF(0x6B743C)); /* fld float */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00121288: ;
    MEM8(esi + 2) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0012128D: ;
    eax = eax + 0xFFFFFFFAu;
    if (CMP_A(eax, 0x33)) goto loc_00121308; /* ja: above (unsigned >) */

loc_00121295: ;
    eax = ZX8(MEM8(eax + 0x12131C));
    { uint32_t _jt = MEM32(eax * 4 + 0x12130C); /* switch: 4 entries, 3 targets */
    if (_jt == 0x001212A3u) goto loc_001212A3;
    if (_jt == 0x001212AFu) goto loc_001212AF;
    if (_jt == 0x00121308u) goto loc_00121308;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001212A3: ;
    SET_LO8(ecx, 0); /* xor self */
    edx = 0xA;
    PUSH32(esp, 0); sub_00128E30(); /* call 0x00128E30 */

loc_001212AF: ;
    SET_LO8(eax, MEM8(0x773CD0));
    if (CMP_A(LO8(eax) & LO8(eax), 0)) goto loc_001212F9; /* ja: above (unsigned >) */

loc_001212B8: ;
    xmm0 = MEMF(0x6B7440); /* movss */
    MEMF(0x773CC4) = xmm0; /* movss */
    xmm0 = MEMF(0x6B7444); /* movss */
    MEMF(0x773CC8) = xmm0; /* movss */
    xmm0 = MEMF(0x6B7448); /* movss */
    MEMF(0x773CCC) = xmm0; /* movss */
    MEM32(0x773C68) = 1;
    MEM8(0x773CD0) = 0;

loc_001212F9: ;
    eax = MEM32(0x8471A4);
    SET_LO8(ecx, 0xFF);
    MEM8(eax) = LO8(ecx);
    MEM8(eax + 1) = LO8(ecx);
    MEM8(eax + 2) = LO8(ecx);

loc_00121308: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_001213A0
 * Original: 0x001213A0 - 0x0012145D (189 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001213A0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_001213A0: ;
    esp = esp - 0x24;
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 0x64);
    if (TEST_Z(ebx, ebx)) goto loc_00121456; /* je: equal / zero */

loc_001213AF: ;
    PUSH32(esp, 0x3C23D70A);
    ecx = esi;
    PUSH32(esp, 0); sub_00124C10(); /* call 0x00124C10 */

loc_001213BB: ;
    xmm1 = MEMF(0x648E84); /* movss */
    esp = esp + 4;
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_001213CE; /* jbe: below or equal (unsigned <=) */

loc_001213CB: ;
    xmm0 = xmm1; /* movaps */

loc_001213CE: ;
    xmm1 = MEMF(esi + 0xC); /* movss */
    /* ucomiss xmm1, MEMF(0x649194) - sets EFLAGS */
    edx = esi + 0xC;
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_001213ED; /* jnp: not parity */

loc_001213E3: ;
    eax = MEM32(edx);
    ecx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    goto loc_00121428;

loc_001213ED: ;
    xmm1 = MEMF(esi + 0x10); /* movss */
    MEMF(esp + 4) = xmm1; /* movss */
    eax = MEM32(esp + 4);
    xmm1 = MEMF(eax); /* movss */
    MEMF(esp + 8) = xmm1; /* movss */
    xmm1 = MEMF(eax + 4); /* movss */
    MEMF(esp + 0xC) = xmm1; /* movss */
    xmm1 = MEMF(eax + 8); /* movss */
    ecx = MEM32(esp + 0xC);
    eax = MEM32(esp + 8);
    MEMF(esp + 0x10) = xmm1; /* movss */
    edx = MEM32(esp + 0x10);

loc_00121428: ;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = ecx;
    ecx = MEM32(esp + 0x2C);
    MEMF(esp + 0x24) = xmm0; /* movss */
    eax = MEM32(esp + 0x24);
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = edx;
    edx = MEM32(ecx);
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, edx);
    edi = esp + 0x10;
    eax = ebx;
    PUSH32(esp, 0); sub_00356170(); /* call 0x00356170 */

loc_00121455: ;
    POP32(esp, edi);

loc_00121456: ;
    POP32(esp, ebx);
    esp = esp + 0x24;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00121460
 * Original: 0x00121460 - 0x00121489 (41 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121460(void)
{
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00121460: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x290);
    ecx = MEM32(eax + 0x34);
    fp_push(MEMF(ecx + 0x4C)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0012147C: ;
    MEM8(esi + 0xA8) = LO8(eax);
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00121490
 * Original: 0x00121490 - 0x001214A7 (23 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121490(void)
{

loc_00121490: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    ecx = 0x10;
    esi = 0x5A0350;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001214B0
 * Original: 0x001214B0 - 0x0012168F (479 bytes, 129 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001214B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm5;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_001214B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x84;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    SET_LO8(eax, MEM8(esi + 0x90));
    esi = esi + 0x4C;
    SET_LO8(ecx, 1);
    (void)0; /* test LO8(ecx), LO8(eax) - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(LO8(ecx), LO8(eax))) { sub_0012168F(); return; } /* je: equal / zero */

loc_001214D5: ;
    xmm3 = MEMF(0x7FA24C); /* movss */
    xmm2 = MEMF(esi + 0x20); /* movss */
    xmm0 = MEMF(esi + 0x18); /* movss */
    xmm1 = MEMF(esi + 0x1C); /* movss */
    xmm5 = MEMF(0x648D14); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    xmm2 = xmm2 * xmm3; /* mulss */
    xmm2 = xmm2 + MEMF(esi + 0x14); /* addss */
    PUSH32(esp, 0);
    esp = esp - 0xC;
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0xC); /* addss */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm3 = MEMF(0x648E18); /* movss */
    xmm1 = xmm1 + MEMF(esi + 0x10); /* addss */
    MEMF(esi + 0x14) = xmm2; /* movss */
    MEMF(esi + 0x10) = xmm1; /* movss */
    xmm2 = xmm2 * xmm3; /* mulss */
    MEMF(esp + 8) = xmm2; /* movss */
    MEMF(esi + 0xC) = xmm0; /* movss */
    xmm1 = xmm1 * xmm3; /* mulss */
    MEMF(esp + 4) = xmm1; /* movss */
    xmm0 = xmm0 * xmm3; /* mulss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0x3F800000);
    eax = esp + 0x6C;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E2E60(); /* call 0x003E2E60 */

loc_00121560: ;
    eax = 0x596A5C;
    ecx = esi + 0x24;
    esp = esp + 0x24;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x14) = ecx;

loc_00121573: ;
    edx = MEM32(esp + 0x14);
    edi = MEM32(edx);
    if (TEST_Z(edi, edi)) goto loc_0012166B; /* je: equal / zero */

loc_00121581: ;
    xmm0 = MEMF(eax + -4); /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(eax); /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    xmm0 = MEMF(eax + 4); /* movss */
    eax = esp + 0x50;
    PUSH32(esp, eax);
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    edx = esp + 0x4C;
    PUSH32(esp, edx);
    MEMF(esp + 0x4C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_001215B5: ;
    xmm0 = MEMF(esp + 0x44); /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x48); /* movss */
    eax = esp + 0x20;
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x4C); /* movss */
    ebx = eax;
    MEMF(esp + 0x28) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_001215E4: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    ecx = esp + 0x50;
    PUSH32(esp, ecx);
    edx = esp + 0x50;
    PUSH32(esp, edx);
    eax = esp + 0x50;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0); sub_002A0580(); /* call 0x002A0580 */

loc_0012160E: ;
    ecx = MEM32(edi + 0x34);
    esp = esp + 0x30;
    if (TEST_Z(eax, eax)) goto loc_00121663; /* je: equal / zero */

loc_00121618: ;
    xmm0 = MEMF(esp + 0x2C); /* movss */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    MEM8(ecx + 0x5A) = 0;
    edx = MEM32(edi + 0x34);
    MEMF(edx + 0xC) = xmm0; /* movss */
    eax = MEM32(edi + 0x34);
    xmm0 = MEMF(esp + 0x30); /* movss */
    MEMF(eax + 0x10) = xmm0; /* movss */
    ecx = MEM32(edi + 0x34);
    xmm0 = MEMF(esp + 0x34); /* movss */
    MEMF(ecx + 0x14) = xmm0; /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00121652: ;
    edx = ZX8(LO8(eax));
    eax = MEM32(edi + 0x34);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(eax + 0x4C) = xmm0; /* movss */
    goto loc_00121667;

loc_00121663: ;
    MEM8(ecx + 0x5A) = 1;

loc_00121667: ;
    eax = MEM32(esp + 0x18);

loc_0012166B: ;
    edi = MEM32(esp + 0x14);
    eax = eax + 0xC;
    edi = edi + 4;
    (void)0; /* cmp eax, 0x596AA4 - flags set for next jcc */
    MEM32(esp + 0x14) = edi;
    MEM32(esp + 0x18) = eax;
    if (CMP_L(eax, 0x596AA4)) goto loc_00121573; /* jl: less (signed <) */

loc_00121688: ;
    POP32(esp, edi);
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
 * sub_001216F0
 * Original: 0x001216F0 - 0x00121724 (52 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001216F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001216F0: ;
    eax = MEM32(esp + 0xC);
    (void)0; /* cmp eax, 0x32 - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (CMP_NE(eax, 0x32)) { sub_00121724(); return; } /* jne: not equal / not zero */

loc_001216FE: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edx = eax;
    edi = MEM32(edx);
    ecx = esi + 0x64;
    MEM32(ecx) = edi;
    edi = MEM32(edx + 4);
    MEM32(ecx + 4) = edi;
    edx = MEM32(edx + 8);
    MEM32(ecx + 8) = edx;
    eax = MEM32(eax + 0xC);
    POP32(esp, edi);
    MEM32(esi + 0x88) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00121790
 * Original: 0x00121790 - 0x001217E8 (88 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121790(void)
{
    int _flags = 0; /* fallback flag var */

loc_00121790: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    edi = edi + 0x70;
    ebx = 6;
    /* nop */

loc_001217A0: ;
    esi = MEM32(edi);
    if (TEST_Z(esi, esi)) goto loc_001217DE; /* je: equal / zero */

loc_001217A6: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001217DE; /* jne: not equal / not zero */

loc_001217AF: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_001217B6: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_001217DE; /* jl: less (signed <) */

loc_001217BD: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) goto loc_001217D2; /* je: equal / zero */

loc_001217CA: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_001217CD: ;
    esp = esp + 4;
    goto loc_001217DE;

loc_001217D2: ;
    edx = 1;
    eax = esi;
    PUSH32(esp, 0); sub_000DA5E0(); /* call 0x000DA5E0 */

loc_001217DE: ;
    edi = edi + 4;
    ebx--;
    if ((ebx != 0)) goto loc_001217A0; /* jne: not equal / not zero */

loc_001217E4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001217F0
 * Original: 0x001217F0 - 0x0012180F (31 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001217F0(void)
{

loc_001217F0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = esi;
    PUSH32(esp, 0); sub_00121790(); /* call 0x00121790 */

loc_001217FC: ;
    eax = esi + 0x3C;
    PUSH32(esp, 0); sub_001126F0(); /* call 0x001126F0 */

loc_00121804: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_000DAE40(); /* call 0x000DAE40 */

loc_0012180A: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00121810
 * Original: 0x00121810 - 0x0012183A (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121810(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00121810: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = esi;
    PUSH32(esp, 0); sub_00121790(); /* call 0x00121790 */

loc_0012181C: ;
    eax = esi + 0x3C;
    PUSH32(esp, 0); sub_001126F0(); /* call 0x001126F0 */

loc_00121824: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_0012183A(); return; } /* jne: not equal / not zero */

loc_0012182D: ;
    eax = esi;
    edx = 1;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000DA5E0(); return; /* tail jmp 0x000DA5E0 */

}

/**
 * sub_00121840
 * Original: 0x00121840 - 0x00121886 (70 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121840(void)
{
    int _flags = 0; /* fallback flag var */

loc_00121840: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (TEST_Z(MEM8(esi + 0x9C), 1)) goto loc_00121884; /* je: equal / zero */

loc_0012184E: ;
    ecx = MEM32(esi + 0x58);
    eax = MEM32(0x7FA20C);
    ecx = ecx - eax;
    MEM32(esi + 0x58) = ecx;
    if (((int32_t)ecx >= 0)) goto loc_00121884; /* jns: not sign (positive) */

loc_0012185D: ;
    eax = MEM32(esi + 0x4C);
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(esi + 4));
    edx = esi + 0x5C;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00121890(); /* call 0x00121890 */

loc_0012186F: ;
    esp = esp + 8;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00121877: ;
    ecx = MEM32(esi + 0x54);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = edx + MEM32(esi + 0x50);
    MEM32(esi + 0x58) = edx;

loc_00121884: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00121890
 * Original: 0x00121890 - 0x00121A08 (376 bytes, 97 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121890(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm5;

loc_00121890: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x84;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001218A8: ;
    xmm0 = xmm0 * MEMF(0x648D30); /* mulss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001218BB: ;
    xmm0 = xmm0 * MEMF(0x648EA8); /* mulss */
    xmm5 = MEMF(0x648D3C); /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 + xmm5; /* addss */
    xmm1 = xmm1 / xmm0; /* divss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEMF(esp + 0x2C) = xmm1; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001218EC: ;
    xmm0 = xmm0 * MEMF(0x649E64); /* mulss */
    xmm0 = xmm0 + xmm5; /* addss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00121903: ;
    (void)0; /* test LO8(eax), 1 - flags set for next jcc */
    xmm1 = 0.0f; /* xorps self = zero */
    if (TEST_Z(LO8(eax), 1)) goto loc_00121917; /* je: equal / zero */

loc_0012190A: ;
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 - xmm0; /* subss */
    MEMF(esp + 0x30) = xmm2; /* movss */

loc_00121917: ;
    esi = MEM32(ebp + 8);
    SET_LO8(eax, 0xFF);
    ebx = 0; /* xor self */
    ecx = 0x10;
    edi = esp + 0x40;
    MEMF(esp + 0x34) = xmm1; /* movss */
    MEMF(esp + 0x38) = xmm1; /* movss */
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM8(esp + 0x14) = LO8(eax);
    MEM8(esp + 0x15) = LO8(eax);
    MEM8(esp + 0x16) = LO8(eax);
    MEM8(esp + 0x17) = LO8(eax);
    MEM8(esp + 0x18) = LO8(ebx);
    MEM8(esp + 0x19) = LO8(ebx);
    MEM8(esp + 0x1A) = LO8(ebx);
    MEM8(esp + 0x1B) = LO8(eax);
    MEM8(esp + 0x1C) = LO8(ebx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0012195E: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 3;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = ZX8(LO8(edx));
    eax = eax + eax * 2;
    SET_LO8(edx, MEM8(esp + eax + 0x14));
    SET_LO8(ecx, MEM8(esp + eax + 0x15));
    MEM8(esp + 0x80) = LO8(edx);
    SET_LO8(edx, MEM8(esp + eax + 0x16));
    MEM8(esp + 0x81) = LO8(ecx);
    MEM8(esp + 0x82) = LO8(edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00121992: ;
    eax = MEM32(ebp + 0xC);
    xmm1 = MEMF(0x6492E4); /* movss */
    PUSH32(esp, eax);
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    PUSH32(esp, 0x2A);
    eax = 0xBC;
    MEMF(esp + 0x18) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_001219B8: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) goto loc_00121A01; /* je: equal / zero */

loc_001219BF: ;
    xmm0 = MEMF(esp + 0x10); /* movss */
    SET_LO8(ecx, LO8(ecx) | 0xFF);
    MEM8(eax + 0x38) = LO8(ecx);
    MEM8(eax + 0x3A) = LO8(ecx);
    ecx = 0; /* xor self */
    MEMF(eax + 0x30) = xmm0; /* movss */
    MEMF(eax + 0x34) = xmm0; /* movss */
    MEM8(eax + 0x39) = 0x32;
    MEM8(eax + 0x2C) = 1;
    MEM8(eax + 0x3B) = LO8(ebx);
    edx = eax + 0x3C;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    MEM32(edx + 0xC) = ecx;
    edi = eax + 0x4C;
    ecx = 0x1C;
    esi = esp + 0x20;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */

loc_00121A01: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00121A10
 * Original: 0x00121A10 - 0x00121D18 (776 bytes, 156 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121A10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm5, xmm6, xmm7;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00121A10: ;
    xmm1 = MEMF(0x7FA24C); /* movss */
    esp = esp - 0x144;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14C);
    xmm0 = MEMF(ebp + 0x54); /* movss */
    xmm2 = MEMF(ebp + 0x64); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + MEMF(ebp + 0x60); /* addss */
    /* comiss xmm0, MEMF(0x648D14) - sets EFLAGS */
    xmm2 = xmm2 + xmm1; /* addss */
    MEMF(ebp + 0x60) = xmm0; /* movss */
    MEMF(ebp + 0x64) = xmm2; /* movss */
    if ((xmm0 <= MEMF(0x648D14))) goto loc_00121D10; /* jbe: below or equal (unsigned <=) */

loc_00121A54: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = esp + 0x40;
    PUSH32(esp, 0); sub_000AF180(); /* call 0x000AF180 */

loc_00121A60: ;
    eax = MEM32(ebp + 0x4C);
    xmm1 = 0.0f; /* xorps self = zero */
    xmm0 = MEMF(0x649278); /* movss */
    edx = (uint32_t)(int32_t)SMEM16(eax + 2);
    xmm2 = MEMF(0x648D14); /* movss */
    ecx = 2;
    MEM32(esp + 0xA0) = ecx;
    MEM32(esp + 0xA8) = ecx;
    MEM32(esp + 0xBC) = ecx;
    ecx = (uint32_t)(int32_t)SMEM16(eax);
    eax = (uint32_t)(int32_t)SMEM16(eax + 4);
    MEMF(esp + 0x3C) = xmm0; /* movss */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    esi = 0; /* xor self */
    MEMF(esp + 0x4C) = xmm0; /* movss */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(esp + 0x50) = xmm0; /* movss */
    SET_LO8(ebx, 0xFF);
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esp + 0x8C) = xmm1; /* movss */
    MEM32(esp + 0x88) = 0x303;
    MEMF(esp + 0x28) = xmm1; /* movss */
    MEMF(esp + 0x2C) = xmm1; /* movss */
    MEM8(esp + 0x90) = 1;
    MEM32(esp + 0x94) = 0x59;
    MEM8(esp + 0x40) = 0;
    MEM32(esp + 0xAC) = esi;
    MEM32(esp + 0xB0) = 4;
    MEM32(esp + 0xB8) = esi;
    MEM16(esp + 0x42) = 0x16;
    MEMF(esp + 0x98) = xmm1; /* movss */
    MEMF(esp + 0x9C) = xmm1; /* movss */
    MEM32(esp + 0xC0) = esi;
    MEMF(esp + 0x48) = xmm2; /* movss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    MEMF(esp + 0x58) = xmm1; /* movss */
    MEMF(esp + 0x5C) = xmm1; /* movss */
    MEMF(esp + 0x60) = xmm1; /* movss */
    MEMF(esp + 0x64) = xmm2; /* movss */
    MEMF(esp + 0x68) = xmm2; /* movss */
    MEMF(esp + 0x6C) = xmm2; /* movss */
    MEM32(esp + 0x70) = 0x2600000;
    MEM32(esp + 0x74) = esi;
    MEM8(esp + 0x78) = LO8(ebx);
    edi = edi;

loc_00121B70: ;
    xmm0 = MEMF(0x649B78); /* movss */
    xmm0 = xmm0 - MEMF(ebp + 0x64); /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(esp + 0x38) = xmm0; /* movss */
    if ((xmm0 <= xmm1)) goto loc_00121CD8; /* jbe: below or equal (unsigned <=) */

loc_00121B8C: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00121B91: ;
    xmm0 = xmm0 * MEMF(0x648F78); /* mulss */
    xmm6 = MEMF(0x648F08); /* movss */
    xmm0 = xmm0 + xmm6; /* addss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00121BB0: ;
    xmm5 = MEMF(0x6490AC); /* movss */
    xmm7 = MEMF(0x649924); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 - MEMF(0x64945C); /* subss */
    xmm0 = xmm0 + xmm7; /* addss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00121BE1: ;
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 + MEMF(0x649B74); /* addss */
    xmm0 = xmm0 + xmm7; /* addss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00121C02: ;
    xmm5 = MEMF(0x649B70); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 + xmm5; /* addss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00121C1D: ;
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 + xmm5; /* addss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00121C30: ;
    xmm5 = MEMF(0x6493A8); /* movss */
    xmm7 = MEMF(0x648D2C); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 + xmm6; /* addss */
    xmm0 = xmm0 * xmm7; /* mulss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00121C57: ;
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 + xmm6; /* addss */
    xmm0 = xmm0 * xmm7; /* mulss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    MEM8(esp + 0x84) = LO8(ebx);
    MEM8(esp + 0x85) = LO8(ebx);
    MEM8(esp + 0x86) = LO8(ebx);
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00121C8D: ;
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(ebp + 4));
    MEM8(esp + 0x87) = LO8(eax);
    eax = esp + 0x40;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x30);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x1F);
    PUSH32(esp, esi);
    PUSH32(esp, 0x26);
    PUSH32(esp, esi);
    PUSH32(esp, 0x597978);
    PUSH32(esp, 0); sub_00150630(); /* call 0x00150630 */

loc_00121CB3: ;
    xmm2 = MEMF(0x648D14); /* movss */
    xmm1 = 0.0f; /* xorps self = zero */
    esp = esp + 0x28;
    if (CMP_EQ(eax, esi)) goto loc_00121CD8; /* je: equal / zero */

loc_00121CC5: ;
    edi = eax + 0x310;
    ecx = 0xC;
    esi = esp + 0x10;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    esi = 0; /* xor self */

loc_00121CD8: ;
    xmm0 = MEMF(ebp + 0x50); /* movss */
    xmm0 = xmm0 + MEMF(ebp + 0x5C); /* addss */
    MEMF(ebp + 0x50) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 0x64); /* movss */
    xmm0 = xmm0 - MEMF(ebp + 0x58); /* subss */
    MEMF(ebp + 0x64) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 0x60); /* movss */
    xmm0 = xmm0 - xmm2; /* subss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    MEMF(ebp + 0x60) = xmm0; /* movss */
    if ((xmm0 > xmm2)) goto loc_00121B70; /* ja: above (unsigned >) */

loc_00121D0D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00121D10: ;
    POP32(esp, ebp);
    esp = esp + 0x144;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00121D20
 * Original: 0x00121D20 - 0x00121EA4 (388 bytes, 90 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121D20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00121D20: ;
    esp = esp - 0x24;
    edx = MEM32(esp + 0x28);
    eax = (uint32_t)(int32_t)SMEM16(esp + 0x2C);
    xmm0 = MEMF(edx + 0x4C); /* movss */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x770);
    xmm0 = xmm0 - MEMF(edx + 0x40); /* subss */
    xmm3 = MEMF(edx + 0x40); /* movss */
    xmm1 = MEMF(edx + 0x50); /* movss */
    xmm1 = xmm1 - MEMF(edx + 0x44); /* subss */
    xmm6 = MEMF(0x648D10); /* movss */
    xmm2 = MEMF(edx + 0x54); /* movss */
    xmm2 = xmm2 - MEMF(edx + 0x48); /* subss */
    xmm3 = xmm3 + xmm0; /* addss */
    MEMF(esp + 0x18) = xmm3; /* movss */
    xmm3 = MEMF(edx + 0x44); /* movss */
    xmm3 = xmm3 + xmm1; /* addss */
    MEMF(esp + 0x1C) = xmm3; /* movss */
    xmm3 = MEMF(edx + 0x48); /* movss */
    xmm3 = xmm3 + xmm2; /* addss */
    PUSH32(esp, esi);
    xmm5 = xmm2; /* movaps */
    xmm5 = xmm5 * xmm6; /* mulss */
    xmm5 = xmm5 + MEMF(edx + 0x48); /* addss */
    MEMF(esp + 0x24) = xmm3; /* movss */
    xmm4 = xmm1; /* movaps */
    xmm4 = xmm4 * xmm6; /* mulss */
    xmm4 = xmm4 + MEMF(edx + 0x44); /* addss */
    PUSH32(esp, edi);
    edi = MEM32(0x8470DC);
    xmm4 = xmm4 - MEMF(eax + edi + 0x334); /* subss */
    xmm5 = xmm5 - MEMF(eax + edi + 0x338); /* subss */
    eax = eax + edi + 0x330;
    xmm3 = xmm0; /* movaps */
    xmm3 = xmm3 * xmm6; /* mulss */
    xmm3 = xmm3 + MEMF(edx + 0x40); /* addss */
    xmm3 = xmm3 - MEMF(eax); /* subss */
    xmm7 = xmm4; /* movaps */
    xmm7 = xmm7 * xmm2; /* mulss */
    xmm6 = xmm5; /* movaps */
    xmm6 = xmm6 * xmm1; /* mulss */
    xmm6 = xmm6 - xmm7; /* subss */
    MEMF(esp + 0x14) = xmm6; /* movss */
    eax = MEM32(esp + 0x14);
    xmm5 = xmm5 * xmm0; /* mulss */
    xmm6 = xmm3; /* movaps */
    xmm6 = xmm6 * xmm2; /* mulss */
    xmm4 = xmm4 * xmm0; /* mulss */
    MEM32(esp + 8) = eax;
    xmm3 = xmm3 * xmm1; /* mulss */
    xmm6 = xmm6 - xmm5; /* subss */
    MEMF(esp + 0x18) = xmm6; /* movss */
    eax = MEM32(esp + 0x18);
    MEM32(esp + 0xC) = eax;
    xmm1 = MEMF(esp + 0xC); /* movss */
    xmm4 = xmm4 - xmm3; /* subss */
    MEMF(esp + 0x1C) = xmm4; /* movss */
    eax = MEM32(esp + 0x1C);
    MEM32(esp + 0x10) = eax;
    xmm0 = MEMF(esp + 0x10); /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm1 = MEMF(esp + 8); /* movss */
    xmm0 = xmm0 * xmm0; /* mulss */
    xmm0 = xmm0 + xmm2; /* addss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm1 = 0.0f; /* xorps self = zero */
    xmm0 = xmm0 + xmm2; /* addss */
    /* ucomiss xmm0, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    ecx = edx + 0x294;
    esi = ecx;
    MEMF(esp + 0x34) = xmm0; /* movss */
    if (1 /* jnp after test - parity */) { sub_00121EA4(); return; } /* jnp: not parity */

loc_00121E6B: ;
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    /* FPU: fdivr dword ptr [edx + 0x38] */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 8) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0 = MEMF(esp + 8); /* movss */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    xmm2 = MEMF(esp + 0xC); /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    xmm1 = MEMF(esp + 0x10); /* movss */
    g_seh_ebp = ebp; sub_00121EAA(); return; /* tail jmp 0x00121EAA */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00122050
 * Original: 0x00122050 - 0x00122190 (320 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00122050(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00122050: ;
    PUSH32(esp, ecx);
    xmm4 = MEMF(0x7FA24C); /* movss */
    xmm1 = MEMF(0x648D30); /* movss */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    xmm0 = MEMF(esi + 0x330); /* movss */
    xmm2 = MEMF(esi + 0x334); /* movss */
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x328); /* addss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    xmm2 = xmm2 * xmm4; /* mulss */
    xmm2 = xmm2 + MEMF(esi + 0x32C); /* addss */
    MEMF(esi + 0x328) = xmm0; /* movss */
    MEMF(esi + 0x32C) = xmm2; /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    if ((xmm0 <= xmm1)) goto loc_001220BF; /* jbe: below or equal (unsigned <=) */

loc_001220A9: ;
    /* nop */

loc_001220B0: ;
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 > xmm1)) goto loc_001220B0; /* ja: above (unsigned >) */

loc_001220B9: ;
    MEMF(esp + 0xC) = xmm0; /* movss */

loc_001220BF: ;
    xmm3 = 0.0f; /* xorps self = zero */
    /* comiss xmm3, xmm0 - sets EFLAGS */
    if ((xmm3 <= xmm0)) goto loc_001220D6; /* jbe: below or equal (unsigned <=) */

loc_001220C7: ;
    xmm0 = xmm0 + xmm1; /* addss */
    /* comiss xmm3, xmm0 - sets EFLAGS */
    if ((xmm3 > xmm0)) goto loc_001220C7; /* ja: above (unsigned >) */

loc_001220D0: ;
    MEMF(esp + 0xC) = xmm0; /* movss */

loc_001220D6: ;
    MEMF(esi + 0x328) = xmm0; /* movss */
    xmm0 = xmm2; /* movaps */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(esp + 4) = xmm0; /* movss */
    if ((xmm0 <= xmm1)) goto loc_001220FF; /* jbe: below or equal (unsigned <=) */

loc_001220EC: ;
    /* nop */

loc_001220F0: ;
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 > xmm1)) goto loc_001220F0; /* ja: above (unsigned >) */

loc_001220F9: ;
    MEMF(esp + 4) = xmm0; /* movss */

loc_001220FF: ;
    /* comiss xmm3, xmm0 - sets EFLAGS */
    if ((xmm3 <= xmm0)) goto loc_00122113; /* jbe: below or equal (unsigned <=) */

loc_00122104: ;
    xmm0 = xmm0 + xmm1; /* addss */
    /* comiss xmm3, xmm0 - sets EFLAGS */
    if ((xmm3 > xmm0)) goto loc_00122104; /* ja: above (unsigned >) */

loc_0012210D: ;
    MEMF(esp + 4) = xmm0; /* movss */

loc_00122113: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    MEMF(esi + 0x32C) = xmm0; /* movss */
    /* FPU: fsin  */
    xmm0 = MEMF(esi + 0x338); /* movss */
    xmm0 = xmm0 - xmm4; /* subss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    MEMF(esi + 0x338) = xmm0; /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esi + 0x310) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 4)); /* fld float */
    /* FPU: fsin  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esi + 0x314) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00122174: ;
    MEM8(esi + 0x7B) = LO8(eax);
    xmm0 = MEMF(esi + 0x338); /* movss */
    /* comiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    POP32(esp, esi);
    if ((xmm0 <= MEMF(0x648CF8))) { sub_00122190(); return; } /* jbe: below or equal (unsigned <=) */

loc_00122189: ;
    eax = 1;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_001221A0
 * Original: 0x001221A0 - 0x001221CF (47 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001221A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001221A0: ;
    (void)0; /* cmp MEM32(esp + 0xC), 0x34 - flags set for next jcc */
    eax = MEM32(esp + 4);
    if (CMP_NE(MEM32(esp + 0xC), 0x34)) goto loc_001221CE; /* jne: not equal / not zero */

loc_001221AB: ;
    edx = MEM32(esp + 8);
    SET_LO8(ecx, MEM8(eax + 0x9D));
    if (CMP_NE(LO8(ecx), MEM8(edx))) goto loc_001221CE; /* jne: not equal / not zero */

loc_001221B9: ;
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(eax + 4));
    edx = eax + 0x5C;
    eax = MEM32(eax + 0x4C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00121890(); /* call 0x00121890 */

loc_001221CB: ;
    esp = esp + 8;

loc_001221CE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001221D0
 * Original: 0x001221D0 - 0x00122474 (676 bytes, 156 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001221D0(void)
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

loc_001221D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x104;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001221E7: ;
    xmm0 = xmm0 * MEMF(ebx + 0x78); /* mulss */
    xmm0 = xmm0 + MEMF(ebx + 0x74); /* addss */
    xmm0 = xmm0 * MEMF(0x7FA24C); /* mulss */
    xmm0 = xmm0 + MEMF(ebx + 0x7C); /* addss */
    /* comiss xmm0, MEMF(0x648D14) - sets EFLAGS */
    MEMF(ebx + 0x7C) = xmm0; /* movss */
    if ((xmm0 <= MEMF(0x648D14))) goto loc_0012246D; /* jbe: below or equal (unsigned <=) */

loc_00122210: ;
    xmm0 = MEMF(0x648E60); /* movss */
    eax = 0; /* xor self */
    MEMF(esp + 0x60) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0x6C); /* movss */
    ecx = 0x24;
    edi = esp + 0x70;
    MEM32(esp + 0x100) = eax;
    MEM8(esp + 0x104) = LO8(eax);
    MEM8(esp + 0x105) = LO8(eax);
    MEM32(esp + 0x108) = eax;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    MEMF(esp + 0x50) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0x70); /* movss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    MEM8(esp + 0x1C) = 2;
    MEM8(esp + 0x1D) = 0x13;
    MEM16(esp + 0x1E) = 0x12C;
    MEM8(esp + 0x22) = LO8(eax);

loc_00122272: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00122277: ;
    xmm7 = xmm0; /* movaps */
    xmm7 = xmm7 * MEMF(ebx + 0x84); /* mulss */
    xmm7 = xmm7 + MEMF(ebx + 0x80); /* addss */
    /* ucomiss xmm7, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_0012244E; /* jnp: not parity */

loc_0012229B: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001222A0: ;
    xmm5 = MEMF(ebx + 0x5C); /* movss */
    xmm6 = MEMF(ebx + 0x60); /* movss */
    xmm5 = xmm5 * xmm0; /* mulss */
    xmm5 = xmm5 + MEMF(ebx + 0x4C); /* addss */
    xmm6 = xmm6 * xmm0; /* mulss */
    xmm6 = xmm6 + MEMF(ebx + 0x50); /* addss */
    MEMF(esp + 0x24) = xmm5; /* movss */
    MEMF(esp + 0x28) = xmm6; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001222CD: ;
    xmm2 = MEMF(ebx + 0x68); /* movss */
    xmm1 = MEMF(ebx + 0x64); /* movss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm2 = xmm2 + MEMF(ebx + 0x58); /* addss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(ebx + 0x54); /* addss */
    MEMF(esp + 0x30) = xmm2; /* movss */
    xmm2 = xmm2 - xmm6; /* subss */
    MEMF(esp + 0x4C) = xmm2; /* movss */
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x2C) = xmm1; /* movss */
    xmm1 = xmm1 - xmm5; /* subss */
    MEMF(esp + 0x48) = xmm1; /* movss */
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    MEMF(esp + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(0x648CF8)); /* fld float */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fucompi */
    /* fstp st(0) */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_0012244E; /* jnp: not parity */

loc_00122339: ;
    xmm0 = MEMF(0x648D14); /* movss */
    xmm4 = MEMF(esp + 0x18); /* movss */
    xmm0 = xmm0 / xmm4; /* divss */
    xmm3 = xmm0; /* movaps */
    xmm3 = xmm3 * xmm1; /* mulss */
    xmm0 = xmm0 * xmm2; /* mulss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0012235B: ;
    if (TEST_Z(LO8(eax), 1)) goto loc_00122371; /* je: equal / zero */

loc_0012235F: ;
    eax = MEM32(esp + 0x24);
    ecx = MEM32(esp + 0x28);
    MEM32(esp + 0x40) = eax;
    MEM32(esp + 0x44) = ecx;
    goto loc_00122395;

loc_00122371: ;
    xmm1 = 0.0f; /* xorps self = zero */
    edx = MEM32(esp + 0x2C);
    eax = MEM32(esp + 0x30);
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 - xmm3; /* subss */
    xmm1 = xmm1 - xmm0; /* subss */
    MEM32(esp + 0x40) = edx;
    MEM32(esp + 0x44) = eax;
    xmm3 = xmm2; /* movaps */
    xmm0 = xmm1; /* movaps */

loc_00122395: ;
    edx = ZX8(MEM8(ebx + 0x88));
    eax = ZX8(MEM8(ebx + 0x89));
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(ebx + 4));
    xmm0 = xmm0 * xmm7; /* mulss */
    MEMF(esp + 0x4C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x40); /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0x6C); /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x44); /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(ebx + 0x8A));
    PUSH32(esp, 0xD0);
    PUSH32(esp, 0x7F);
    esp = esp - 0x10;
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = ZX8(MEM8(ebx + 0x8B));
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    eax = esp + 0x38;
    MEMF(esp) = xmm0; /* movss */
    xmm3 = xmm3 * xmm7; /* mulss */
    xmm4 = xmm4 / xmm7; /* divss */
    PUSH32(esp, eax);
    SET_LO8(edx, 0); /* xor self */
    ecx = esp + 0x54;
    MEMF(esp + 0x68) = xmm3; /* movss */
    MEMF(esp + 0x78) = xmm4; /* movss */
    PUSH32(esp, 0); sub_0011E790(); /* call 0x0011E790 */

loc_00122439: ;
    esp = esp + 0x20;
    if (TEST_Z(eax, eax)) goto loc_0012244E; /* je: equal / zero */

loc_00122440: ;
    edi = eax + 0x38;
    ecx = 0x34;
    esi = esp + 0x40;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */

loc_0012244E: ;
    xmm0 = MEMF(ebx + 0x7C); /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(ebx + 0x7C) = xmm0; /* movss */
    if ((xmm0 > xmm1)) goto loc_00122272; /* ja: above (unsigned >) */

loc_0012246D: ;
    POP32(esp, edi);
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
 * sub_00122480
 * Original: 0x00122480 - 0x00122505 (133 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00122480(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00122480: ;
    esp = esp - 0xC;
    xmm2 = MEMF(0x7FA24C); /* movss */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    xmm0 = MEMF(ebx + 0x40); /* movss */
    xmm1 = MEMF(ebx + 0x44); /* movss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm0 = xmm0 + MEMF(ebx + 0x38); /* addss */
    MEMF(ebx + 0x38) = xmm0; /* movss */
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm1 = xmm1 + MEMF(ebx + 0x3C); /* addss */
    xmm2 = MEMF(ebx + 0x48); /* movss */
    MEMF(ebx + 0x3C) = xmm1; /* movss */
    eax = MEM32(ebx + 0x34);
    PUSH32(esp, esi);
    MEMF(esp + 8) = xmm0; /* movss */
    MEMF(esp + 0xC) = xmm2; /* movss */
    MEMF(esp + 0x10) = xmm1; /* movss */
    MEMF(eax + 0xC) = xmm0; /* movss */
    ecx = MEM32(ebx + 0x34);
    edx = MEM32(ebx + 0x3C);
    PUSH32(esp, edi);
    MEM32(ecx + 0x14) = edx;
    eax = MEM32(ebx + 0x4C);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    esi = ebx + 0x58;
    PUSH32(esp, 0);
    edi = esp + 0x18;
    PUSH32(esp, 0); sub_002A0180(); /* call 0x002A0180 */

loc_001224F4: ;
    esp = esp + 0xC;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00122505(); return; } /* je: equal / zero */

loc_001224FB: ;
    ecx = MEM32(ebx + 0x34);
    edx = MEM32(esi);
    MEM32(ecx + 0x10) = edx;
    g_seh_ebp = ebp; sub_0012250E(); return; /* tail jmp 0x0012250E */

}

/**
 * sub_00122540
 * Original: 0x00122540 - 0x00122607 (199 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00122540(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_00122540: ;
    esp = esp - 0x18;
    SET_LO8(edx, MEM8(0x77379C));
    SET_LO8(edx, LO8(edx) + 1);
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = xmm0 + xmm1; /* addss */
    MEM8(esp + 0x14) = LO8(eax);
    eax = MEM32(esp + 0x20);
    MEM8(0x77379C) = LO8(edx);
    edx = (uint32_t)(int32_t)SMEM16(esp + 0x1C);
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, eax);
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    PUSH32(esp, 0x2A);
    eax = 0x64;
    MEMF(esp + 0x14) = xmm1; /* movss */
    MEM8(esp + 8) = 0;
    MEM8(esp + 0x1D) = LO8(ecx);
    MEMF(esp + 0x24) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_0012259D: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_00122603; /* je: equal / zero */

loc_001225A4: ;
    xmm0 = MEMF(esp + 0x1C); /* movss */
    MEMF(eax + 0x30) = xmm0; /* movss */
    MEMF(eax + 0x34) = xmm0; /* movss */
    MEM8(eax + 0x38) = 0xFF;
    MEM8(eax + 0x39) = 0x2F;
    MEM8(eax + 0x3A) = 2;
    MEM8(eax + 0x2C) = 1;
    MEM8(eax + 0x3B) = 0x26;
    edx = eax + 0x3C;
    ecx = 0; /* xor self */
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    MEM32(edx + 0xC) = ecx;
    ecx = MEM32(esp);
    edx = MEM32(esp + 4);
    eax = eax + 0x4C;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 8);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0xC);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 0x10);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(esp + 0x14);
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = edx;

loc_00122603: ;
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}
