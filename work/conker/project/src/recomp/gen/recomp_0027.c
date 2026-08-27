/**
 * Burnout 3 - Recompiled code chunk 27
 * Functions: 250 (0x00264480 - 0x002773A0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_00264480
 * Original: 0x00264480 - 0x002644C1 (65 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00264480(void)
{
    int _flags = 0; /* fallback flag var */

loc_00264480: ;
    SET_LO8(eax, MEM8(0x864EC1));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002644C0; /* je: equal / zero */

loc_00264489: ;
    PUSH32(esp, esi);
    /* nop */

loc_00264490: ;
    esi = SX8(LO8(eax));
    esi--;
    eax = esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xA50);
    eax = eax + 0x864EC8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0027D730(); /* call 0x0027D730 */

loc_002644A7: ;
    esp = esp + 4;
    PUSH32(esp, 0x862C40);
    eax = esi;
    PUSH32(esp, 0); sub_00294E00(); /* call 0x00294E00 */

loc_002644B6: ;
    SET_LO8(eax, MEM8(0x864EC1));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00264490; /* jne: not equal / not zero */

loc_002644BF: ;
    POP32(esp, esi);

loc_002644C0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002644D0
 * Original: 0x002644D0 - 0x0026455D (141 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002644D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002644D0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    MEM32(0x87BF9C) = eax;
    MEM32(0x87BF98) = ecx;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x600E38;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_002644F9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00227390(); /* call 0x00227390 */

loc_002644FF: ;
    ebp = eax;
    esp = esp + 0x10;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_0003C1E0(); /* call 0x0003C1E0 */

loc_0026450B: ;
    edi = eax;
    eax = MEM32(edi + 0x10);
    esi = MEM32(eax + 0x38);
    ecx = MEM32(esi + 0x38);
    eax = eax + 0x38;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    ebx = 1;
    MEM8(esi + 0x31) = LO8(ebx);
    if (TEST_Z(ecx, ecx)) goto loc_0026452B; /* je: equal / zero */

loc_00264525: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_0026452B: ;
    MEM32(esi + 0x38) = ebp;
    eax = MEM32(edi + 0x10);
    eax = eax + 0x38;
    eax = MEM32(eax);
    MEM8(eax + 0x30) = LO8(ebx);
    PUSH32(esp, 0x40800000);
    PUSH32(esp, 0xE);
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_0003C1E0(); /* call 0x0003C1E0 */

loc_00264547: ;
    ebx = eax;
    PUSH32(esp, 0); sub_00233630(); /* call 0x00233630 */

loc_0026454E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(0x849DBC) = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00264560
 * Original: 0x00264560 - 0x00264865 (773 bytes, 212 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00264560(void)
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

loc_00264560: ;
    esp = esp - 0x18;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00264569: ;
    MEMF(esp + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    SET_LO8(eax, MEM8(0x864EC1));
    ebx = 0; /* xor self */
    (void)0; /* cmp LO8(eax), LO8(ebx) - flags set for next jcc */
    MEM32(esp + 0xC) = ebx;
    if (CMP_LE(LO8(eax), LO8(ebx))) goto loc_00264860; /* jle: less or equal (signed <=) */

loc_00264580: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = 0; /* xor self */
    esi = 0x864F09;
    PUSH32(esp, edi);
    edi = 0x864EC8;
    MEM32(esp + 0x20) = ebp;
    MEM32(esp + 0x1C) = esi;
    goto loc_002645A0;

    /* nop */

loc_002645A0: ;
    eax = MEM32(edi + 0x9DC);
    MEM8(esp + 0x13) = LO8(ebx);
    MEM8(esp + 0x12) = LO8(ebx);
    PUSH32(esp, 0); sub_004189C0(); /* call 0x004189C0 */

loc_002645B3: ;
    if (TEST_Z(eax, eax)) goto loc_002645BC; /* je: equal / zero */

loc_002645B7: ;
    MEM8(esp + 0x13) = 1;

loc_002645BC: ;
    if (CMP_EQ(MEM8(edi + 0xA4E), LO8(ebx))) goto loc_002645CE; /* je: equal / zero */

loc_002645C4: ;
    MEM8(esp + 0x12) = 1;
    goto loc_002646D2;

loc_002645CE: ;
    if (CMP_EQ(MEM8(edi + 0xA4C), LO8(ebx))) goto loc_002646D2; /* je: equal / zero */

loc_002645DA: ;
    xmm0 = MEMF(edi + 0x1C); /* movss */
    xmm0 = xmm0 + MEMF(0x648D18); /* addss */
    xmm1 = MEMF(esp + 0x24); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_002646D2; /* jbe: below or equal (unsigned <=) */

loc_002645F6: ;
    (void)0; /* cmp MEM32(0x84A19C), ebx - flags set for next jcc */
    MEM8(edi + 0x76E) = 1;
    if (CMP_NE(MEM32(0x84A19C), ebx)) goto loc_0026460A; /* jne: not equal / not zero */

loc_00264605: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0026460A: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    ebp = esi;
    if (CMP_EQ(esi, ebx)) goto loc_00264654; /* je: equal / zero */

loc_00264630: ;
    if (CMP_B(MEM32(esi + 0x80), 0x34)) goto loc_00264654; /* jb: below (unsigned <) */

loc_00264639: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00264643: ;
    PUSH32(esp, 0x34);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0026464B: ;
    esi = eax;
    esp = esp + 8;
    if (CMP_NE(esi, ebx)) goto loc_00264677; /* jne: not equal / not zero */

loc_00264654: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    ebp = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00264666: ;
    PUSH32(esp, 0x34);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0026466E: ;
    esi = eax;
    esp = esp + 8;
    if (CMP_EQ(esi, ebx)) goto loc_002646C3; /* je: equal / zero */

loc_00264677: ;
    PUSH32(esp, 0x7D0);
    PUSH32(esp, 0x1F4);
    MEM32(esi + 4) = ebx;
    MEM32(esi + 8) = 0xFFFFFFFFu;
    MEM32(esi + 0xC) = ebx;
    MEM32(esi + 0x10) = ebx;
    MEM32(esi + 0x14) = ebx;
    MEM32(esi + 0x18) = ebx;
    MEM32(esi + 0x1C) = ebx;
    MEM32(esi + 0x20) = ebx;
    MEM32(esi + 0x28) = ebx;
    MEM32(esi + 0x2C) = ebx;
    MEM8(esi + 0x30) = LO8(ebx);
    MEM16(esi + 0x32) = LO16(ebx);
    MEM32(esi) = 0x605A28;
    PUSH32(esp, 0); sub_004168D0(); /* call 0x004168D0 */

loc_002646B5: ;
    eax = MEM32(edi + 0x9DC);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_002646C3: ;
    ebp = MEM32(esp + 0x20);
    esi = MEM32(esp + 0x1C);
    MEM8(edi + 0xA4E) = 1;

loc_002646D2: ;
    if (CMP_EQ(MEM8(edi + 0xA4D), LO8(ebx))) goto loc_002646F0; /* je: equal / zero */

loc_002646DA: ;
    eax = edi;
    PUSH32(esp, 0); sub_0029A750(); /* call 0x0029A750 */

loc_002646E1: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002646EA; /* jne: not equal / not zero */

loc_002646E5: ;
    MEM8(esp + 0x12) = 1;

loc_002646EA: ;
    MEM8(edi + 0xA4D) = LO8(ebx);

loc_002646F0: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    if (CMP_NE(LO8(eax), LO8(ebx))) goto loc_00264702; /* jne: not equal / not zero */

loc_002646F8: ;
    if (CMP_EQ(MEM8(esp + 0x12), LO8(ebx))) goto loc_0026482B; /* je: equal / zero */

loc_00264702: ;
    (void)0; /* cmp LO8(eax), LO8(ebx) - flags set for next jcc */
    MEM8(edi + 0xA4E) = LO8(ebx);
    MEM8(edi + 0xA4C) = LO8(ebx);
    MEM8(edi + 0xA4D) = LO8(ebx);
    if (CMP_NE(LO8(eax), LO8(ebx))) goto loc_0026472F; /* jne: not equal / not zero */

loc_00264718: ;
    eax = MEM32(edi + 0x9DC);
    PUSH32(esp, 0); sub_004181D0(); /* call 0x004181D0 */

loc_00264723: ;
    if (CMP_EQ(eax, ebx)) goto loc_0026472F; /* je: equal / zero */

loc_00264727: ;
    eax = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0048D89D(); /* call 0x0048D89D */

loc_0026472F: ;
    eax = MEM32(0x86E990);
    PUSH32(esp, 0); sub_00421D00(); /* call 0x00421D00 */

loc_00264739: ;
    if (CMP_EQ(MEM8(0x84BEA0), LO8(ebx))) goto loc_00264749; /* je: equal / zero */

loc_00264741: ;
    ecx = MEM32(esi);
    MEM32(esp + 0x14) = ecx;
    goto loc_0026475D;

loc_00264749: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0048D69B(); /* call 0x0048D69B */

loc_00264755: ;
    if (CMP_NE(eax, ebx)) goto loc_002647EC; /* jne: not equal / not zero */

loc_0026475D: ;
    eax = MEM32(edi + 0x9DC);
    MEM8(edi + 0xA4F) = 1;
    PUSH32(esp, 0); sub_00418BD0(); /* call 0x00418BD0 */

loc_0026476F: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    eax = MEM32(edi + 0x9DC);
    PUSH32(esp, 0); sub_00418C50(); /* call 0x00418C50 */

loc_0026477F: ;
    esp = esp + 4;
    /* TODO: rdtsc  */
    PUSH32(esp, ebx);
    PUSH32(esp, 3);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470A00(); /* call 0x00470A00 */

loc_0026478E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x898);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470D50(); /* call 0x00470D50 */

loc_0026479B: ;
    eax = eax - MEM32(0x828B48);
    ecx = MEM32(0x828B4C);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3E8);
    edx = edx - ecx - _cf; /* sbb */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470EA0(); /* call 0x00470EA0 */

loc_002647B6: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x20) = eax;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    if (CMP_GE(eax & eax, 0)) goto loc_002647C8; /* jge: greater or equal (signed >=) */

loc_002647C2: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_002647C8: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    SET_LO8(eax, MEM8(esp + 0x13));
    (void)0; /* cmp LO8(eax), LO8(ebx) - flags set for next jcc */
    MEM8(edi + 0x65) = 1;
    MEMF(edi + 0x9E4) = (float)fp_top(); fp_popp(); /* fstp */
    if (CMP_NE(LO8(eax), LO8(ebx))) goto loc_0026482B; /* jne: not equal / not zero */

loc_002647E0: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0048D8A8(); /* call 0x0048D8A8 */

loc_002647EA: ;
    goto loc_0026482B;

loc_002647EC: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0027D730(); /* call 0x0027D730 */

loc_002647F2: ;
    eax = 0x634C0635;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ebp;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)((int32_t)edx >> 0xA);
    eax = edx;
    esp = esp + 4;
    eax = eax >> 0x1F;
    eax = eax + edx;
    PUSH32(esp, 0x862C40);
    PUSH32(esp, 0); sub_00294E00(); /* call 0x00294E00 */

loc_00264810: ;
    eax = MEM32(esp + 0x18);
    eax--;
    edi = edi - 0xA50;
    esi = esi - 0xA50;
    MEM32(esp + 0x18) = eax;
    ebp = ebp - 0xA50;

loc_0026482B: ;
    eax = MEM32(esp + 0x18);
    edx = (uint32_t)(int32_t)SMEM8(0x864EC1);
    eax++;
    esi = esi + 0xA50;
    ebp = ebp + 0xA50;
    edi = edi + 0xA50;
    (void)0; /* cmp eax, edx - flags set for next jcc */
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = esi;
    MEM32(esp + 0x20) = ebp;
    if (CMP_L(eax, edx)) goto loc_002645A0; /* jl: less (signed <) */

loc_0026485D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);

loc_00264860: ;
    POP32(esp, ebx);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00264870
 * Original: 0x00264870 - 0x002649B5 (325 bytes, 145 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00264870(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00264870: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = eax;
    if (CMP_EQ(edi, ebx)) goto loc_002649B0; /* je: equal / zero */

loc_0026487C: ;
    PUSH32(esp, ebp);
    ebp = MEM32(ebx + 4);
    ecx = 0; /* xor self */
    (void)0; /* cmp ebp, ecx - flags set for next jcc */
    PUSH32(esp, esi);
    if (CMP_EQ(ebp, ecx)) goto loc_00264895; /* je: equal / zero */

loc_00264887: ;
    esi = MEM32(ebx + 8);
    edx = esi;
    edx = edx - ebp;
    edx = (uint32_t)((int32_t)edx >> 4);
    if (CMP_NE(edx, ecx)) goto loc_002648BF; /* jne: not equal / not zero */

loc_00264895: ;
    eax = MEM32(edi + 4);
    if (CMP_EQ(eax, ecx)) goto loc_002648AF; /* je: equal / zero */

loc_0026489C: ;
    MEM32(esp + 0xC) = eax;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_002648AA: ;
    esp = esp + 4;
    ecx = 0; /* xor self */

loc_002648AF: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(edi + 4) = ecx;
    MEM32(edi + 8) = ecx;
    MEM32(edi + 0xC) = ecx;
    eax = edi;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_002648BF: ;
    eax = MEM32(edi + 4);
    if (CMP_NE(eax, ecx)) goto loc_002648CA; /* jne: not equal / not zero */

loc_002648C6: ;
    ecx = 0; /* xor self */
    goto loc_002648D2;

loc_002648CA: ;
    ecx = MEM32(edi + 8);
    ecx = ecx - eax;
    ecx = (uint32_t)((int32_t)ecx >> 4);

loc_002648D2: ;
    if (CMP_A(edx, ecx)) goto loc_0026491A; /* ja: above (unsigned >) */

loc_002648D6: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0); sub_00264E20(); /* call 0x00264E20 */

loc_002648E2: ;
    eax = MEM32(ebx + 4);
    esp = esp + 4;
    if (TEST_NZ(eax, eax)) goto loc_00264900; /* jne: not equal / not zero */

loc_002648EC: ;
    eax = MEM32(edi + 4);
    ebx = 0; /* xor self */
    ebx = ebx << 4;
    ebx = ebx + eax;
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(edi + 8) = ebx;
    eax = edi;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00264900: ;
    ebx = MEM32(ebx + 8);
    ebx = ebx - eax;
    eax = MEM32(edi + 4);
    ebx = (uint32_t)((int32_t)ebx >> 4);
    ebx = ebx << 4;
    ebx = ebx + eax;
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(edi + 8) = ebx;
    eax = edi;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0026491A: ;
    if (TEST_NZ(eax, eax)) goto loc_00264922; /* jne: not equal / not zero */

loc_0026491E: ;
    ecx = 0; /* xor self */
    goto loc_0026492A;

loc_00264922: ;
    ecx = MEM32(edi + 0xC);
    ecx = ecx - eax;
    ecx = (uint32_t)((int32_t)ecx >> 4);

loc_0026492A: ;
    if (CMP_A(edx, ecx)) goto loc_00264972; /* ja: above (unsigned >) */

loc_0026492E: ;
    if (TEST_NZ(eax, eax)) goto loc_00264936; /* jne: not equal / not zero */

loc_00264932: ;
    edx = 0; /* xor self */
    goto loc_0026493E;

loc_00264936: ;
    edx = MEM32(edi + 8);
    edx = edx - eax;
    edx = (uint32_t)((int32_t)edx >> 4);

loc_0026493E: ;
    ecx = MEM32(ebx + 4);
    edx = edx << 4;
    edx = edx + ecx;
    esi = edx;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00264E20(); /* call 0x00264E20 */

loc_00264952: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(edi + 8);
    ecx = MEM32(ebx + 8);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00264F30(); /* call 0x00264F30 */

loc_00264965: ;
    esp = esp + 0x14;
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(edi + 8) = eax;
    eax = edi;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00264972: ;
    if (TEST_Z(eax, eax)) goto loc_0026497B; /* je: equal / zero */

loc_00264976: ;
    PUSH32(esp, 0); sub_00269B40(); /* call 0x00269B40 */

loc_0026497B: ;
    ecx = MEM32(ebx + 4);
    if (TEST_NZ(ecx, ecx)) goto loc_00264986; /* jne: not equal / not zero */

loc_00264982: ;
    eax = 0; /* xor self */
    goto loc_0026498E;

loc_00264986: ;
    eax = MEM32(ebx + 8);
    eax = eax - ecx;
    eax = (uint32_t)((int32_t)eax >> 4);

loc_0026498E: ;
    esi = edi;
    PUSH32(esp, 0); sub_00264A60(); /* call 0x00264A60 */

loc_00264995: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002649AE; /* je: equal / zero */

loc_00264999: ;
    eax = MEM32(ebx + 8);
    ecx = MEM32(ebx + 4);
    edx = MEM32(edi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0); sub_00264DD0(); /* call 0x00264DD0 */

loc_002649AB: ;
    MEM32(edi + 8) = eax;

loc_002649AE: ;
    POP32(esp, esi);
    POP32(esp, ebp);

loc_002649B0: ;
    eax = edi;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002649C0
 * Original: 0x002649C0 - 0x002649D6 (22 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002649C0(void)
{

loc_002649C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0); sub_00061AB0(); /* call 0x00061AB0 */

loc_002649C8: ;
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002649E0
 * Original: 0x002649E0 - 0x002649EB (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002649E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002649E0: ;
    edx = MEM32(edi + 4);
    if (TEST_NZ(edx, edx)) { sub_002649EB(); return; } /* jne: not equal / not zero */

loc_002649E7: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_002649F3(); return; /* tail jmp 0x002649F3 */

}

/**
 * sub_00264A60
 * Original: 0x00264A60 - 0x00264A72 (18 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00264A60(void)
{
    int _flags = 0; /* fallback flag var */

loc_00264A60: ;
    ecx = 0; /* xor self */
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esi + 4) = ecx;
    MEM32(esi + 8) = ecx;
    MEM32(esi + 0xC) = ecx;
    if (CMP_NE(eax, ecx)) { sub_00264A72(); return; } /* jne: not equal / not zero */

loc_00264A6F: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_00264AB0
 * Original: 0x00264AB0 - 0x00264ACE (30 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00264AB0(void)
{

loc_00264AB0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0034A1B0(); /* call 0x0034A1B0 */

loc_00264AC1: ;
    eax = esi;
    eax = eax << 4;
    esp = esp + 0x10;
    eax = eax + edi;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00264AD0
 * Original: 0x00264AD0 - 0x00264B17 (71 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00264AD0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00264AD0: ;
    PUSH32(esp, ecx);
    eax = MEM32(esi + 4);
    if (TEST_Z(eax, eax)) goto loc_00264B00; /* je: equal / zero */

loc_00264AD8: ;
    ecx = MEM32(esp);
    PUSH32(esp, edi);
    edi = MEM32(esi + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00246D60(); /* call 0x00246D60 */

loc_00264AE5: ;
    eax = MEM32(esi + 4);
    esp = esp + 4;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 4) = eax;
    POP32(esp, edi);
    if (TEST_Z(eax, eax)) goto loc_00264B00; /* je: equal / zero */

loc_00264AF4: ;
    edx = esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00264AFD: ;
    esp = esp + 4;

loc_00264B00: ;
    MEM32(esi + 4) = 0;
    MEM32(esi + 8) = 0;
    MEM32(esi + 0xC) = 0;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00264B20
 * Original: 0x00264B20 - 0x00264B4E (46 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00264B20(void)
{

loc_00264B20: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    ecx = MEM32(edi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00061B50(); /* call 0x00061B50 */

loc_00264B31: ;
    edx = MEM32(esp + 0xC);
    ecx = 1;
    esi = eax;
    PUSH32(esp, 0); sub_000632D0(); /* call 0x000632D0 */

loc_00264B41: ;
    MEM32(edi + 4) = esi;
    edx = MEM32(esi + 4);
    POP32(esp, edi);
    MEM32(edx) = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00264B50
 * Original: 0x00264B50 - 0x00264B7B (43 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00264B50(void)
{
    int _flags = 0; /* fallback flag var */

loc_00264B50: ;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = eax;
    PUSH32(esp, 0); sub_00068410(); /* call 0x00068410 */

loc_00264B59: ;
    eax = MEM32(edi + 4);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 4) = eax;
    if (TEST_Z(eax, eax)) goto loc_00264B71; /* je: equal / zero */

loc_00264B64: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00264B6E: ;
    esp = esp + 4;

loc_00264B71: ;
    MEM32(edi + 4) = 0;
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00264B80
 * Original: 0x00264B80 - 0x00264BCA (74 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00264B80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00264B80: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47F8F0);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    esp = esp - 0x34;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    eax = MEM32(ebp + 0xC);
    esi = ecx;
    ebx = edx;
    ecx = MEM32(eax);
    MEM32(ebp + -64) = ecx;
    edx = MEM32(eax + 4);
    MEM32(ebp + -60) = edx;
    ecx = MEM32(eax + 8);
    MEM32(ebp + -56) = ecx;
    edx = MEM32(eax + 0xC);
    MEM32(ebp + -52) = edx;
    ecx = MEM32(ebx + 4);
    if (TEST_NZ(ecx, ecx)) { sub_00264BCA(); return; } /* jne: not equal / not zero */

loc_00264BC6: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_00264BD2(); return; /* tail jmp 0x00264BD2 */

}

/**
 * sub_00264DD0
 * Original: 0x00264DD0 - 0x00264DEB (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00264DD0(void)
{

loc_00264DD0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00264F30(); /* call 0x00264F30 */

loc_00264DE5: ;
    esp = esp + 0x10;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00264DF0
 * Original: 0x00264DF0 - 0x00264E1C (44 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00264DF0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00264DF0: ;
    if (CMP_EQ(eax, esi)) goto loc_00264E1B; /* je: equal / zero */

loc_00264DF4: ;
    SET_LO16(edx, MEM16(ecx));
    MEM16(eax) = LO16(edx);
    SET_LO8(edx, MEM8(ecx + 2));
    MEM8(eax + 2) = LO8(edx);
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 8);
    MEM32(eax + 8) = edx;
    SET_LO16(edx, MEM16(ecx + 0xC));
    MEM16(eax + 0xC) = LO16(edx);
    eax = eax + 0x10;
    if (CMP_NE(eax, esi)) goto loc_00264DF4; /* jne: not equal / not zero */

loc_00264E1B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00264E20
 * Original: 0x00264E20 - 0x00264E4F (47 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00264E20(void)
{
    int _flags = 0; /* fallback flag var */

loc_00264E20: ;
    if (CMP_EQ(ecx, esi)) goto loc_00264E4E; /* je: equal / zero */

loc_00264E24: ;
    SET_LO16(edx, MEM16(ecx));
    MEM16(eax) = LO16(edx);
    SET_LO8(edx, MEM8(ecx + 2));
    MEM8(eax + 2) = LO8(edx);
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 8);
    MEM32(eax + 8) = edx;
    SET_LO16(edx, MEM16(ecx + 0xC));
    MEM16(eax + 0xC) = LO16(edx);
    ecx = ecx + 0x10;
    eax = eax + 0x10;
    if (CMP_NE(ecx, esi)) goto loc_00264E24; /* jne: not equal / not zero */

loc_00264E4E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00264E50
 * Original: 0x00264E50 - 0x00264E9C (76 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00264E50(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00264E50: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47F350);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    ebx = ecx;
    edi = MEM32(ebp + 0xC);
    esi = MEM32(ebp + 8);
    MEM32(ebp + -20) = esi;
    MEM32(ebp + -4) = 0;

loc_00264E83: ;
    if (CMP_BE(edi & edi, 0)) { sub_00264E9C(); return; } /* jbe: below or equal (unsigned <=) */

loc_00264E87: ;
    edx = ebx;
    ecx = esi;
    PUSH32(esp, 0); sub_00293740(); /* call 0x00293740 */

loc_00264E90: ;
    edi--;
    MEM32(ebp + 0xC) = edi;
    esi = esi + 0x10;
    MEM32(ebp + 8) = esi;
    goto loc_00264E83;

}

/**
 * sub_00264EE0
 * Original: 0x00264EE0 - 0x00264F10 (48 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00264EE0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00264EE0: ;
    if (CMP_EQ(esi, ecx)) goto loc_00264F0F; /* je: equal / zero */

loc_00264EE4: ;
    SET_LO16(edx, MEM16(ecx + -16));
    ecx = ecx - 0x10;
    eax = eax - 0x10;
    (void)0; /* cmp ecx, esi - flags set for next jcc */
    MEM16(eax) = LO16(edx);
    SET_LO8(edx, MEM8(ecx + 2));
    MEM8(eax + 2) = LO8(edx);
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 8);
    MEM32(eax + 8) = edx;
    SET_LO16(edx, MEM16(ecx + 0xC));
    MEM16(eax + 0xC) = LO16(edx);
    if (CMP_NE(ecx, esi)) goto loc_00264EE4; /* jne: not equal / not zero */

loc_00264F0F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00264F10
 * Original: 0x00264F10 - 0x00264F2B (27 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00264F10(void)
{
    int _flags = 0; /* fallback flag var */

loc_00264F10: ;
    if (TEST_Z(eax, eax)) goto loc_00264F2A; /* je: equal / zero */

loc_00264F14: ;
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 8);
    MEM32(eax + 8) = edx;
    ecx = MEM32(ecx + 0xC);
    MEM32(eax + 0xC) = ecx;

loc_00264F2A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00264F30
 * Original: 0x00264F30 - 0x00264F7B (75 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00264F30(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00264F30: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47F250);
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

loc_00264F60: ;
    if (CMP_EQ(esi, ebx)) { sub_00264F7B(); return; } /* je: equal / zero */

loc_00264F64: ;
    ecx = esi;
    eax = edi;
    PUSH32(esp, 0); sub_00264F10(); /* call 0x00264F10 */

loc_00264F6D: ;
    edi = edi + 0x10;
    MEM32(ebp + 0xC) = edi;
    esi = esi + 0x10;
    MEM32(ebp + 8) = esi;
    goto loc_00264F60;

}

/**
 * sub_00264FA0
 * Original: 0x00264FA0 - 0x00264FF1 (81 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00264FA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00264FA0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47F1E0);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    eax = MEM32(ebp + 0x10);
    MEM32(ebp + -4) = 0;
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 8);

loc_00264FD1: ;
    if (CMP_EQ(ecx, edx)) { sub_00264FF1(); return; } /* je: equal / zero */

loc_00264FD5: ;
    MEM32(ebp + -20) = ecx;
    MEM32(ebp + -24) = eax;
    if (TEST_Z(eax, eax)) goto loc_00264FE3; /* je: equal / zero */

loc_00264FDF: ;
    esi = MEM32(ecx);
    MEM32(eax) = esi;

loc_00264FE3: ;
    eax = eax + 4;
    MEM32(ebp + 0x10) = eax;
    ecx = ecx + 4;
    MEM32(ebp + 8) = ecx;
    goto loc_00264FD1;

}

/**
 * sub_00265020
 * Original: 0x00265020 - 0x0026506E (78 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00265020(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00265020: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47F420);
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
    MEM32(ebp + -20) = edi;
    MEM32(ebp + -4) = 0;

loc_00265053: ;
    if (CMP_EQ(esi, ebx)) { sub_0026506E(); return; } /* je: equal / zero */

loc_00265057: ;
    edx = esi;
    ecx = edi;
    PUSH32(esp, 0); sub_00293740(); /* call 0x00293740 */

loc_00265060: ;
    edi = edi + 0x10;
    MEM32(ebp + 0xC) = edi;
    esi = esi + 0x10;
    MEM32(ebp + 8) = esi;
    goto loc_00265053;

}

/**
 * sub_002650B0
 * Original: 0x002650B0 - 0x002650E9 (57 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002650B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002650B0: ;
    PUSH32(esp, edi);
    edi = eax;
    edi = edi - ebx;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_002650BB: ;
    edx = eax;
    ecx = edi + -1;
    eax = 1;
    eax = eax << LO8(ecx);
    esp = esp + 4;
    if (TEST_Z(edx, eax)) goto loc_002650D7; /* je: equal / zero */

loc_002650CE: ;
    eax = eax | 0xFFFFFFFFu;
    ecx = edi;
    eax = eax << LO8(ecx);
    edx = edx | eax;

loc_002650D7: ;
    ecx = ebx + -1;
    eax = 1;
    eax = eax << LO8(ecx);
    ecx = ebx;
    edx = edx << LO8(ecx);
    POP32(esp, edi);
    eax = eax + edx;
    esp += 4; return; /* ret */

}

/**
 * sub_002650F0
 * Original: 0x002650F0 - 0x0026511D (45 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002650F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002650F0: ;
    eax = MEM32(0x84BEB0);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi) = 0;
    if (CMP_LE(eax & eax, 0)) goto loc_0026511C; /* jle: less or equal (signed <=) */

loc_002650FF: ;
    /* nop */

loc_00265100: ;
    eax = MEM32(esi);
    PUSH32(esp, 0); sub_00418960(); /* call 0x00418960 */

loc_00265107: ;
    if (TEST_NZ(eax, eax)) goto loc_0026511C; /* jne: not equal / not zero */

loc_0026510B: ;
    edx = MEM32(esi);
    ecx = MEM32(0x84BEB0);
    edx++;
    eax = edx;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esi) = edx;
    if (CMP_L(eax, ecx)) goto loc_00265100; /* jl: less (signed <) */

loc_0026511C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00265120
 * Original: 0x00265120 - 0x00265297 (375 bytes, 93 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00265120(void)
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

loc_00265120: ;
    eax = MEM32(0x862CD0);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    ebx = 1;
    PUSH32(esp, edi);
    MEM8(0x862CA1) = LO8(ebx);
    if (TEST_NZ(eax, eax)) goto loc_002651DF; /* jne: not equal / not zero */

loc_0026513A: ;
    PUSH32(esp, 0); sub_00237960(); /* call 0x00237960 */

loc_0026513F: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002651DF; /* jne: not equal / not zero */

loc_00265147: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_00265155; /* jne: not equal / not zero */

loc_00265150: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_00265155: ;
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
    if (TEST_Z(esi, esi)) goto loc_002651A4; /* je: equal / zero */

loc_0026517C: ;
    if (CMP_B(MEM32(esi + 0x80), 0x1440)) goto loc_002651A4; /* jb: below (unsigned <) */

loc_00265188: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00265192: ;
    PUSH32(esp, 0x1440);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0026519D: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_002651C8; /* jne: not equal / not zero */

loc_002651A4: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002651B6: ;
    PUSH32(esp, 0x1440);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002651C1: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_002651D1; /* je: equal / zero */

loc_002651C8: ;
    edi = eax;
    PUSH32(esp, 0); sub_00351B70(); /* call 0x00351B70 */

loc_002651CF: ;
    goto loc_002651D3;

loc_002651D1: ;
    eax = 0; /* xor self */

loc_002651D3: ;
    MEM32(0x862CD0) = eax;
    MEM8(eax + 0xE40) = LO8(ebx);
    POP32(esp, esi);

loc_002651DF: ;
    PUSH32(esp, 0x26);
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_002651E8: ;
    SET_LO8(eax, MEM8(0x87B388));
    esp = esp + 4;
    if (TEST_NZ(LO8(ebx), LO8(eax))) goto loc_00265216; /* jne: not equal / not zero */

loc_002651F4: ;
    eax = MEM32(0x87B388);
    eax = eax | ebx;
    ecx = 0x87B384;
    MEM32(0x87B388) = eax;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0026520A: ;
    MEMF(0x87B37C) = (float)fp_top(); fp_pop(); /* fst */
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */

loc_00265216: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00265220: ;
    fp_push(MEMF(0x87B37C)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    POP32(esp, edi);
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    POP32(esp, ebx);
    if ((_fpu_cmp >= 0) /* fcompi */) goto loc_0026523C; /* jae: above or equal (unsigned >=) */

loc_00265230: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0026523A: ;
    /* fstp st(0) */

loc_0026523C: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00265246: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    ecx = 0x87B384;
    MEMF(0x87B37C) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0026525C: ;
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */
    eax = MEM32(esp + 4);
    MEMF(0x776220) = xmm0; /* movss */
    MEM32(0x863D04) = 3;
    MEM32(0x849B84) = 8;
    MEM8(0x75E9A2) = 0;
    MEM8(eax) = 0;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_002652A0
 * Original: 0x002652A0 - 0x0026537B (219 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002652A0(void)
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

loc_002652A0: ;
    if (CMP_NE(MEM32(0x7FA1F8), 0x46)) goto loc_00265370; /* jne: not equal / not zero */

loc_002652AD: ;
    eax = MEM32(0x849AA4);
    if (TEST_Z(eax, eax)) goto loc_00265370; /* je: equal / zero */

loc_002652BA: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x2A);
    edi = 0; /* xor self */
    MEM8(0x862CA1) = 1;
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_002652CB: ;
    SET_LO8(eax, MEM8(0x87B388));
    esp = esp + 4;
    (void)0; /* test LO8(eax), 1 - flags set for next jcc */
    POP32(esp, edi);
    if (TEST_NZ(LO8(eax), 1)) goto loc_002652FB; /* jne: not equal / not zero */

loc_002652D8: ;
    eax = MEM32(0x87B388);
    eax = eax | 1;
    ecx = 0x87B384;
    MEM32(0x87B388) = eax;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_002652EF: ;
    MEMF(0x87B37C) = (float)fp_top(); fp_pop(); /* fst */
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */

loc_002652FB: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00265305: ;
    fp_push(MEMF(0x87B37C)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp >= 0) /* fcompi */) goto loc_0026531F; /* jae: above or equal (unsigned >=) */

loc_00265313: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0026531D: ;
    /* fstp st(0) */

loc_0026531F: ;
    ecx = 0x87B384;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00265329: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    ecx = 0x87B384;
    MEMF(0x87B37C) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0026533F: ;
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(0x87B380) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(0x849B84) = 2;
    MEM8(0x75E9A2) = 0;
    MEM32(0x863D04) = 3;
    MEMF(0x776220) = xmm0; /* movss */

loc_00265370: ;
    MEM8(0x862C6C) = 0;
    MEM8(esi) = 0;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00265380
 * Original: 0x00265380 - 0x002653B4 (52 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00265380(void)
{
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00265380: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    MEM8(eax) = 1;
    MEM8(eax + 0x18) = LO8(ecx);
    MEM32(eax + 0x14) = 0xFFFFFFFFu;
    MEM32(eax + 0x20) = ebx;
    MEM32(eax + 0x24) = ebx;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0026539B: ;
    MEMF(0x862C80) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_0023C360(); /* call 0x0023C360 */

loc_002653A6: ;
    MEM8(0x862D30) = LO8(ebx);
    MEM8(0x862D31) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_002653C0
 * Original: 0x002653C0 - 0x0026540F (79 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002653C0(void)
{
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_002653C0: ;
    PUSH32(esp, 0x82E740);
    PUSH32(esp, 0); sub_004A0634(); /* call 0x004A0634 */

loc_002653CA: ;
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax++;
    MEM32(0x84BFAC) = eax;
    if ((eax == 0)) goto loc_0026540C; /* je: equal / zero */

loc_002653D6: ;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_002653F5; /* je: equal / zero */

loc_002653DF: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647B28);
    PUSH32(esp, 0x16C6);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_002653F2: ;
    esp = esp + 0x10;

loc_002653F5: ;
    eax = MEM32(0x82E770);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004A053E(); /* call 0x004A053E */

loc_00265400: ;
    if (TEST_Z(eax, eax)) goto loc_0026540C; /* je: equal / zero */

loc_00265404: ;
    ecx = MEM32(esp + 4);
    MEM8(ecx + 0x28) = 1;

loc_0026540C: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00265410
 * Original: 0x00265410 - 0x00265538 (296 bytes, 96 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00265410(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00265410: ;
    esp = esp - 0x19C;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = eax;
    SET_LO8(eax, MEM8(esi + 0x28));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0026552D; /* je: equal / zero */

loc_00265427: ;
    PUSH32(esp, 0); sub_0004E490(); /* call 0x0004E490 */

loc_0026542C: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0026552D; /* je: equal / zero */

loc_00265434: ;
    eax = MEM32(0x875834);
    if (CMP_GE(eax, 2)) goto loc_0026544F; /* jge: greater or equal (signed >=) */

loc_0026543E: ;
    eax++;
    MEM32(0x875834) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x19C;
    esp += 4; return; /* ret */

loc_0026544F: ;
    SET_LO8(eax, MEM8(0x8498B4));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0026552D; /* jne: not equal / not zero */

loc_0026545C: ;
    SET_LO8(eax, MEM8(esi + 0x10));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0026552D; /* jne: not equal / not zero */

loc_00265467: ;
    eax = MEM32(0x84BEEC);
    if (TEST_Z(eax, eax)) goto loc_0026552D; /* je: equal / zero */

loc_00265474: ;
    PUSH32(esp, 0); sub_004238F0(); /* call 0x004238F0 */

loc_00265479: ;
    ecx = esp + 0x10;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = edx;
    PUSH32(esp, 0); sub_0041F1F0(); /* call 0x0041F1F0 */

loc_0026548A: ;
    edi = eax;
    PUSH32(esp, 0); sub_00423960(); /* call 0x00423960 */

loc_00265491: ;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    ecx = 0x60216C;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0026549F; /* jne: not equal / not zero */

loc_0026549A: ;
    ecx = 0x602134;

loc_0026549F: ;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_002654A6: ;
    PUSH32(esp, edi);
    esi = eax;
    PUSH32(esp, 0); sub_00423930(); /* call 0x00423930 */

loc_002654AE: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = esp + 0x24;
    PUSH32(esp, 0xC8);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046EE4A(); /* call 0x0046EE4A */

loc_002654BF: ;
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0); sub_001FFB50(); /* call 0x001FFB50 */

loc_002654C6: ;
    esi = eax;
    esp = esp + 0x18;
    if (TEST_Z(esi, esi)) goto loc_00265503; /* je: equal / zero */

loc_002654CF: ;
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x602114;
    ebx = 0; /* xor self */
    ebp = 0; /* xor self */
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_002654DF: ;
    PUSH32(esp, ebp);
    esp = esp - 8;
    MEM32(esp + 0x1C) = eax;
    eax = esp;
    edi = esp + 0x24;
    PUSH32(esp, 0); sub_00060900(); /* call 0x00060900 */

loc_002654F2: ;
    edx = MEM32(esp + 0x1C);
    eax = ebx;
    ecx = ebp;
    PUSH32(esp, 0); sub_002307B0(); /* call 0x002307B0 */

loc_002654FF: ;
    esi = eax;
    goto loc_00265505;

loc_00265503: ;
    esi = 0; /* xor self */

loc_00265505: ;
    PUSH32(esp, esi);
    edx = 0; /* xor self */
    ecx = 0x265540;
    eax = 0x100;
    PUSH32(esp, 0); sub_001F6F50(); /* call 0x001F6F50 */

loc_00265517: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_0003C1E0(); /* call 0x0003C1E0 */

loc_00265521: ;
    ebx = eax;
    eax = 0xA;
    PUSH32(esp, 0); sub_00232BD0(); /* call 0x00232BD0 */

loc_0026552D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x19C;
    esp += 4; return; /* ret */

}

/**
 * sub_00265540
 * Original: 0x00265540 - 0x00265548 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00265540(void)
{

loc_00265540: ;
    MEM8(0x75A178) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00265550
 * Original: 0x00265550 - 0x00265933 (995 bytes, 295 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00265550(void)
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

loc_00265550: ;
    PUSH32(esp, ecx);
    SET_LO8(eax, MEM8(0x862C6C));
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = 0; /* xor self */
    (void)0; /* cmp LO8(eax), LO8(ebx) - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_002655A5; /* je: equal / zero */

loc_00265560: ;
    if (CMP_LE(LO8(eax), LO8(ebx))) goto loc_00265585; /* jle: less or equal (signed <=) */

loc_00265562: ;
    if (CMP_G(LO8(eax), 2)) goto loc_00265585; /* jg: greater (signed >) */

loc_00265566: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_002955D0(); /* call 0x002955D0 */

loc_0026556C: ;
    (void)0; /* cmp MEM8(0x862C6C), 2 - flags set for next jcc */
    SET_LO8(ecx, (CMP_EQ(MEM8(0x862C6C), 2)) ? 1 : 0); /* sete */
    eax = 0x75A168;
    PUSH32(esp, 0); sub_00265380(); /* call 0x00265380 */

loc_00265580: ;
    SET_LO8(eax, MEM8(0x862C6C));

loc_00265585: ;
    ebp = MEM32(esp + 0x18);

loc_00265589: ;
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_0026592B; /* je: equal / zero */

loc_00265591: ;
    eax = SX8(LO8(eax));
    eax--;
    if (CMP_A(eax, 8)) goto loc_0026592B; /* ja: above (unsigned >) */

loc_0026559E: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x265934); /* switch: 9 entries, 9 targets */
    if (_jt == 0x002656C7u) goto loc_002656C7;
    if (_jt == 0x00265720u) goto loc_00265720;
    if (_jt == 0x0026575Au) goto loc_0026575A;
    if (_jt == 0x00265779u) goto loc_00265779;
    if (_jt == 0x00265813u) goto loc_00265813;
    if (_jt == 0x00265822u) goto loc_00265822;
    if (_jt == 0x00265830u) goto loc_00265830;
    if (_jt == 0x002658FBu) goto loc_002658FB;
    if (_jt == 0x0026591Bu) goto loc_0026591B;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_002655A5: ;
    ebp = MEM32(esp + 0x18);
    if (CMP_EQ(MEM8(ebp + 0x28), LO8(ebx))) goto loc_00265589; /* je: equal / zero */

loc_002655AE: ;
    PUSH32(esp, 0); sub_00265AA0(); /* call 0x00265AA0 */

loc_002655B3: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002655BA; /* je: equal / zero */

loc_002655B7: ;
    MEM8(ebp + 0x28) = LO8(ebx);

loc_002655BA: ;
    if (CMP_EQ(MEM32(0x68C31C), ebx)) goto loc_0026592B; /* je: equal / zero */

loc_002655C6: ;
    if (CMP_EQ(MEM8(ebp + 0x10), LO8(ebx))) goto loc_002656BD; /* je: equal / zero */

loc_002655CF: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_004200A0(); /* call 0x004200A0 */

loc_002655D6: ;
    if (TEST_Z(eax, eax)) goto loc_002656BD; /* je: equal / zero */

loc_002655DE: ;
    if (CMP_EQ(MEM32(0x862CD0), ebx)) goto loc_002656BD; /* je: equal / zero */

loc_002655EA: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_004202D0(); /* call 0x004202D0 */

loc_002655F1: ;
    esi = eax;
    edi = edx;
    PUSH32(esp, 0); sub_004238F0(); /* call 0x004238F0 */

loc_002655FA: ;
    if (CMP_NE(esi, eax)) goto loc_002656BD; /* jne: not equal / not zero */

loc_00265602: ;
    if (CMP_NE(edi, edx)) goto loc_002656BD; /* jne: not equal / not zero */

loc_0026560A: ;
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0); sub_001FFB50(); /* call 0x001FFB50 */

loc_00265611: ;
    esp = esp + 4;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    if (CMP_EQ(eax, ebx)) goto loc_00265676; /* je: equal / zero */

loc_0026561C: ;
    PUSH32(esp, 0); sub_00423960(); /* call 0x00423960 */

loc_00265621: ;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    ecx = 0x6020D0;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0026562F; /* jne: not equal / not zero */

loc_0026562A: ;
    ecx = 0x6020A4;

loc_0026562F: ;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_00265636: ;
    edi = eax;
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x6020F8;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_00265644: ;
    esi = eax;
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x602114;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_00265652: ;
    PUSH32(esp, ebx);
    esp = esp - 8;
    ebp = eax;
    eax = esp;
    PUSH32(esp, 0); sub_00060900(); /* call 0x00060900 */

loc_0026565F: ;
    ecx = esi;
    esi = MEM32(esp + 0x1C);
    eax = ebx;
    edx = ebp;
    PUSH32(esp, 0); sub_002307B0(); /* call 0x002307B0 */

loc_0026566E: ;
    ebp = MEM32(esp + 0x18);
    esi = eax;
    goto loc_00265678;

loc_00265676: ;
    esi = 0; /* xor self */

loc_00265678: ;
    PUSH32(esp, esi);
    edx = 0; /* xor self */
    ecx = 0x265960;
    eax = 0x100;
    PUSH32(esp, 0); sub_001F6F50(); /* call 0x001F6F50 */

loc_0026568A: ;
    PUSH32(esp, esi);
    edx = 0; /* xor self */
    ecx = 0x265A20;
    eax = 0x200;
    PUSH32(esp, 0); sub_001F6F50(); /* call 0x001F6F50 */

loc_0026569C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_0003C1E0(); /* call 0x0003C1E0 */

loc_002656A5: ;
    ebx = eax;
    eax = 0xA;
    PUSH32(esp, 0); sub_00232BD0(); /* call 0x00232BD0 */

loc_002656B1: ;
    SET_LO8(eax, MEM8(0x862C6C));
    ebx = 0; /* xor self */
    goto loc_00265589;

loc_002656BD: ;
    SET_LO8(eax, MEM8(0x862C6C));
    goto loc_00265589;

loc_002656C7: ;
    PUSH32(esp, 0); sub_00421450(); /* call 0x00421450 */

loc_002656CC: ;
    eax = MEM32(0x862C74);
    ecx = MEM32(0x862C70);
    esi = ZX8(MEM8(0x862D13));
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_004211E0(); /* call 0x004211E0 */

loc_002656E5: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_00265745; /* je: equal / zero */

loc_002656EC: ;
    esi = ebp;
    PUSH32(esp, 0); sub_002652A0(); /* call 0x002652A0 */

loc_002656F3: ;
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x601090;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_002656FF: ;
    esi = eax;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_0003C1E0(); /* call 0x0003C1E0 */

loc_00265708: ;
    xmm0 = MEMF(0x648D20); /* movss */
    MEM32(eax + 0x1C) = esi;
    MEMF(eax + 0x20) = xmm0; /* movss */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_00265720: ;
    PUSH32(esp, 0); sub_00421450(); /* call 0x00421450 */

loc_00265725: ;
    edx = MEM32(0x862C7C);
    eax = MEM32(0x862C78);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = ZX8(MEM8(0x862D13));
    PUSH32(esp, 0); sub_004212D0(); /* call 0x004212D0 */

loc_0026573E: ;
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002656EC; /* je: equal / zero */

loc_00265745: ;
    MEM8(0x862D91) = LO8(ebx);
    MEM8(0x862C6C) = 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_0026575A: ;
    PUSH32(esp, 0); sub_00421450(); /* call 0x00421450 */

loc_0026575F: ;
    MEM8(0x862D91) = LO8(ebx);
    PUSH32(esp, 0); sub_004239A0(); /* call 0x004239A0 */

loc_0026576A: ;
    MEM8(0x862C6C) = 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_00265779: ;
    if (CMP_NE(MEM32(0x84BF64), 2)) goto loc_002657BD; /* jne: not equal / not zero */

loc_00265782: ;
    if (CMP_LE(MEM32(0x84BF90), ebx)) goto loc_002657DA; /* jle: less or equal (signed <=) */

loc_0026578A: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00421960(); /* call 0x00421960 */

loc_00265791: ;
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    MEM32(ebp + 0x14) = eax;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_002657DA; /* je: equal / zero */

loc_00265799: ;
    PUSH32(esp, 0); sub_00421D00(); /* call 0x00421D00 */

loc_0026579E: ;
    ecx = MEM32(eax);
    MEM32(ebp + 0x20) = ecx;
    edx = MEM32(eax + 4);
    MEM32(ebp + 0x24) = edx;
    MEM8(0x862C6C) = 5;
    PUSH32(esp, 0); sub_00421450(); /* call 0x00421450 */

loc_002657B5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_002657BD: ;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_002657C2: ;
    fp_push(MEMF(0x862C80)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_0026592B; /* jbe: below or equal (unsigned <=) */

loc_002657DA: ;
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x601090;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_002657E6: ;
    esi = eax;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_0003C1E0(); /* call 0x0003C1E0 */

loc_002657EF: ;
    xmm0 = MEMF(0x648D20); /* movss */
    MEM32(eax + 0x1C) = esi;
    esi = ebp;
    MEMF(eax + 0x20) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002652A0(); /* call 0x002652A0 */

loc_00265806: ;
    PUSH32(esp, 0); sub_00421450(); /* call 0x00421450 */

loc_0026580B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_00265813: ;
    MEM8(0x862C6C) = 6;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_00265822: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_00265A30(); /* call 0x00265A30 */

loc_00265828: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_00265830: ;
    eax = MEM32(0x863D08);
    if (CMP_NE(eax, 2)) goto loc_002658C7; /* jne: not equal / not zero */

loc_0026583E: ;
    if (CMP_EQ(MEM32(0x7FA1F8), 0x46)) goto loc_00265862; /* je: equal / zero */

loc_00265847: ;
    MEM8(0x7819D5) = 1;
    PUSH32(esp, 0); sub_001F73C0(); /* call 0x001F73C0 */

loc_00265853: ;
    MEM8(0x7819D5) = LO8(ebx);
    MEM8(0x862C6C) = 8;
    goto loc_00265869;

loc_00265862: ;
    MEM8(0x862C6C) = 9;

loc_00265869: ;
    xmm0 = MEMF(0x648D14); /* movss */
    MEM8(0x862CA1) = 1;
    MEMF(0x776220) = xmm0; /* movss */
    MEM8(0x776278) = LO8(ebx);
    MEM8(0x77625E) = LO8(ebx);
    MEM8(0x77625D) = LO8(ebx);
    PUSH32(esp, 0); sub_00235F50(); /* call 0x00235F50 */

loc_00265897: ;
    ecx = MEM32(0x863D04);
    eax = 3;
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    MEM8(0x862D12) = LO8(ebx);
    MEM8(0x862D08) = LO8(ebx);
    if (CMP_NE(ecx, eax)) goto loc_002658BA; /* jne: not equal / not zero */

loc_002658B2: ;
    if (CMP_EQ(MEM8(0x75E9A2), LO8(ebx))) goto loc_002658D9; /* je: equal / zero */

loc_002658BA: ;
    MEM8(0x75E9A2) = LO8(ebx);
    MEM32(0x863D04) = eax;
    goto loc_002658D9;

loc_002658C7: ;
    if (CMP_EQ(eax, 1)) goto loc_002658D9; /* je: equal / zero */

loc_002658CC: ;
    PUSH32(esp, 1);
    MEM8(0x862C6C) = LO8(ebx);
    PUSH32(esp, 0); sub_002955D0(); /* call 0x002955D0 */

loc_002658D9: ;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_002658DE: ;
    fp_push(MEMF(0x862E5C)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp < 0) /* fcompi */) goto loc_0026592B; /* jb: below (unsigned <) */

loc_002658EC: ;
    esi = ebp;
    PUSH32(esp, 0); sub_002652A0(); /* call 0x002652A0 */

loc_002658F3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_002658FB: ;
    if (CMP_NE(MEM32(0x7FA1F8), 0x46)) goto loc_0026592B; /* jne: not equal / not zero */

loc_00265904: ;
    if (CMP_EQ(MEM32(0x849AA4), ebx)) goto loc_0026592B; /* je: equal / zero */

loc_0026590C: ;
    MEM8(0x862C6C) = 9;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_0026591B: ;
    PUSH32(esp, 0x75A168);
    PUSH32(esp, 0); sub_00265120(); /* call 0x00265120 */

loc_00265925: ;
    MEM8(0x862C6C) = LO8(ebx);

loc_0026592B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00265A30
 * Original: 0x00265A30 - 0x00265A9F (111 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00265A30(void)
{
    int _flags = 0; /* fallback flag var */

loc_00265A30: ;
    eax = MEM32(0x86E990);
    if (TEST_S(eax, eax)) goto loc_00265A40; /* jl: less (signed <) */

loc_00265A39: ;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_0025D8F0(); /* call 0x0025D8F0 */

loc_00265A40: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x14);
    PUSH32(esp, 0x862E54);
    eax = 0; /* xor self */
    MEM32(0x86E990) = ecx;
    PUSH32(esp, 0); sub_004219D0(); /* call 0x004219D0 */

loc_00265A59: ;
    ecx = MEM32(0x863D04);
    eax = 3;
    esp = esp + 4;
    if (CMP_NE(ecx, eax)) goto loc_00265A75; /* jne: not equal / not zero */

loc_00265A6B: ;
    SET_LO8(ecx, MEM8(0x75E9A2));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00265A81; /* je: equal / zero */

loc_00265A75: ;
    MEM8(0x75E9A2) = 0;
    MEM32(0x863D04) = eax;

loc_00265A81: ;
    PUSH32(esp, 1);
    eax = 0x862E54;
    PUSH32(esp, 0); sub_0025D710(); /* call 0x0025D710 */

loc_00265A8D: ;
    esp = esp + 4;
    MEM8(0x862C6C) = 7;
    PUSH32(esp, 0); sub_00421450(); /* call 0x00421450 */

loc_00265A9C: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00265AA0
 * Original: 0x00265AA0 - 0x00265B15 (117 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00265AA0(void)
{
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_00265AA0: ;
    eax = MEM32(0x84BE58);
    esp = esp - 0x20;
    if (TEST_Z(eax, eax)) goto loc_00265ACC; /* je: equal / zero */

loc_00265AAC: ;
    ecx = MEM32(0x84BFAC);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    SET_LO8(ecx, (TEST_NZ(ecx, ecx)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647B28);
    PUSH32(esp, 0x16AE);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00265AC9: ;
    esp = esp + 0x10;

loc_00265ACC: ;
    edx = esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042B5F7(); /* call 0x0042B5F7 */

loc_00265AD5: ;
    eax = MEM32(0x82E7A4);
    edx = MEM32(esp);
    ecx = MEM32(0x82E7A8);
    edx = edx - eax;
    eax = MEM32(esp + 4);
    eax = eax - ecx - _cf; /* sbb */
    ecx = esp + 0x10;
    MEM32(esp + 8) = edx;
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0); sub_0042B732(); /* call 0x0042B732 */

loc_00265B02: ;
    eax = 0; /* xor self */
    SET_LO16(eax, 0xA);
    (void)0; /* cmp LO16(eax), MEM16(esp + 0x1A) - flags set for next jcc */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = (uint32_t)(-(int32_t)eax);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_00265B20
 * Original: 0x00265B20 - 0x00265B26 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00265B20(void)
{

loc_00265B20: ;
    eax = 0x44;
    esp += 4; return; /* ret */

}

/**
 * sub_00265B30
 * Original: 0x00265B30 - 0x00265B62 (50 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00265B30(void)
{

loc_00265B30: ;
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
    MEM32(eax) = 0x6021A0;
    esp += 4; return; /* ret */

}

/**
 * sub_00265B70
 * Original: 0x00265B70 - 0x00265B76 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00265B70(void)
{

loc_00265B70: ;
    eax = 0x48;
    esp += 4; return; /* ret */

}

/**
 * sub_00265B80
 * Original: 0x00265B80 - 0x00265BD5 (85 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00265B80(void)
{
    int _flags = 0; /* fallback flag var */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00265B80: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_00265B88: ;
    edx = 0; /* xor self */
    ecx = 0x6BE940;
    /* nop */

loc_00265B90: ;
    if (CMP_EQ(MEM32(ecx), eax)) { sub_00265BD5(); return; } /* je: equal / zero */

loc_00265B94: ;
    ecx = ecx + 0x10;
    edx++;
    if (CMP_L(ecx, 0x6BED90)) goto loc_00265B90; /* jl: less (signed <) */

loc_00265BA0: ;
    edx = 0x600E6C;
    fp_push(MEMF(esi + 0x3C)); /* fld float */
    ecx = MEM32(esi + 0x34);
    eax = MEM32(esp + 8);
    esp = esp - 0x10;
    MEMD(esp + 8) = fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esi + 0x38)); /* fld float */
    MEMD(esp) = fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x24);
    PUSH32(esp, 0x602278);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_00265BCE: ;
    esp = esp + 0x24;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00265BE0
 * Original: 0x00265BE0 - 0x00265DAC (460 bytes, 132 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00265BE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00265BE0: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    ebx = eax;
    eax = MEM32(ebx + 0x238);
    edx = MEM32(eax);
    ecx = 0; /* xor self */
    (void)0; /* test edx, edx - flags set for next jcc */
    PUSH32(esp, ebp);
    SET_LO8(ecx, (TEST_Z(edx, edx)) ? 1 : 0); /* sete */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = esp + 0x14;
    eax = esp + 0x10;
    MEM32(esp + 0x10) = ebx;
    ebp = ecx;
    PUSH32(esp, 0); sub_002671A0(); /* call 0x002671A0 */

loc_00265C0B: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00265C6C; /* je: equal / zero */

loc_00265C0F: ;
    esi = MEM32(esp + 0x14);
    edi = (uint32_t)(int32_t)SMEM8(esi + 0x862CCB);
    if (CMP_EQ(edi, 0xFFFFFFFFu)) goto loc_00265DA4; /* je: equal / zero */

loc_00265C23: ;
    SET_LO8(eax, MEM8(esi + 0x864EBF));
    edx = MEM32(esi * 4 + 0x862CC0);
    eax = ZX8(LO8(eax));
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00292A30(); /* call 0x00292A30 */

loc_00265C39: ;
    ecx = esi;
    SET_LO8(edx, 1);
    SET_LO8(edx, LO8(edx) << LO8(ecx));
    MEM8(esi + 0x864EBF) = LO8(eax);
    SET_LO8(ecx, MEM8(0x86E983));
    MEM8(edi + 0x7761F4) = LO8(eax);
    SET_LO8(ecx, LO8(ecx) | LO8(edx));
    MEM8(0x86E983) = LO8(ecx);
    MEM32(esi * 4 + 0x862CC0) = ebp;
    MEM32(edi * 4 + 0x7761A0) = ebp;
    goto loc_00265D72;

loc_00265C6C: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    eax = ebx;
    PUSH32(esp, 0); sub_00289370(); /* call 0x00289370 */

loc_00265C78: ;
    edi = eax;
    esp = esp + 4;
    if (TEST_Z(edi, edi)) goto loc_00265D36; /* je: equal / zero */

loc_00265C85: ;
    esi = MEM32(esp + 0x14);
    SET_LO8(eax, MEM8(edi + 0x75B));
    edx = 1;
    ecx = esi;
    edx = edx << LO8(ecx);
    if (TEST_Z(LO8(eax), LO8(edx))) goto loc_00265CA6; /* je: equal / zero */

loc_00265C9C: ;
    eax = ZX8(MEM8(edi + esi + 0x76C));
    goto loc_00265CA8;

loc_00265CA6: ;
    eax = 0; /* xor self */

loc_00265CA8: ;
    ecx = MEM32(edi + esi * 4 + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00292A30(); /* call 0x00292A30 */

loc_00265CB2: ;
    esp = esp + 4;
    if (TEST_S(esi, esi)) goto loc_00265CDC; /* jl: less (signed <) */

loc_00265CB9: ;
    if (CMP_GE(esi, 2)) goto loc_00265CDC; /* jge: greater or equal (signed >=) */

loc_00265CBE: ;
    ecx = MEM32(edi + esi * 4 + 0xA3C);
    (void)0; /* cmp ecx, 0xFFFFFFFFu - flags set for next jcc */
    SET_LO8(edx, (CMP_NE(ecx, 0xFFFFFFFFu)) ? 1 : 0); /* setne */
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_00265CDC; /* je: equal / zero */

loc_00265CCF: ;
    MEM32(ecx * 4 + 0x7761A0) = ebp;
    MEM8(ecx + 0x7761F4) = LO8(eax);

loc_00265CDC: ;
    ecx = esi;
    SET_LO8(edx, 1);
    SET_LO8(edx, LO8(edx) << LO8(ecx));
    MEM8(edi + esi + 0x76C) = LO8(eax);
    SET_LO8(ecx, MEM8(edi + 0x75B));
    SET_LO8(ecx, LO8(ecx) | LO8(edx));
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM8(edi + 0x75B) = LO8(ecx);
    MEM32(edi + esi * 4 + 4) = ebp;
    if (TEST_S(esi, esi)) goto loc_00265DA4; /* jl: less (signed <) */

loc_00265D03: ;
    if (CMP_GE(esi, 2)) goto loc_00265DA4; /* jge: greater or equal (signed >=) */

loc_00265D0C: ;
    ebx = MEM32(edi + esi * 4 + 0xA3C);
    (void)0; /* cmp ebx, 0xFFFFFFFFu - flags set for next jcc */
    SET_LO8(eax, (CMP_NE(ebx, 0xFFFFFFFFu)) ? 1 : 0); /* setne */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00265DA4; /* je: equal / zero */

loc_00265D21: ;
    edi = ZX8(MEM8(edi + esi + 0x76C));
    PUSH32(esp, 0); sub_00284C70(); /* call 0x00284C70 */

loc_00265D2E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_00265D36: ;
    eax = MEM32(ebx + 0x568);
    if (CMP_NE(MEM32(eax + 0xBC), 1)) goto loc_00265DA4; /* jne: not equal / not zero */

loc_00265D45: ;
    esi = ZX16(MEM16(ebx + 0x60));
    if (CMP_EQ(esi, 0xFFFFFFFFu)) goto loc_00265DA4; /* je: equal / zero */

loc_00265D4E: ;
    SET_LO8(eax, MEM8(esi + 0x7761F4));
    ecx = MEM32(ebx + 0x238);
    ecx = MEM32(ecx);
    eax = SX8(LO8(eax));
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00292A30(); /* call 0x00292A30 */

loc_00265D65: ;
    MEM8(esi + 0x7761F4) = LO8(eax);
    MEM32(esi * 4 + 0x7761A0) = ebp;

loc_00265D72: ;
    SET_LO16(esi, MEM16(ebx + 0x60));
    eax = SX8(LO8(eax));
    eax = eax << 6;
    eax = eax + 0x777ED0;
    PUSH32(esp, 0xD);
    PUSH32(esp, 0); sub_0032CF50(); /* call 0x0032CF50 */

loc_00265D88: ;
    eax = ZX16(MEM16(ebx + 0x60));
    PUSH32(esp, 0); sub_002B4F70(); /* call 0x002B4F70 */

loc_00265D91: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_002CC720(); /* call 0x002CC720 */

loc_00265DA1: ;
    esp = esp + 0x20;

loc_00265DA4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00265DB0
 * Original: 0x00265DB0 - 0x00265DDD (45 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00265DB0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00265DB0: ;
    SET_LO8(ecx, MEM8(0x876758));
    eax = 1;
    if (TEST_NZ(LO8(eax), LO8(ecx))) goto loc_00265DD7; /* jne: not equal / not zero */

loc_00265DBF: ;
    ecx = MEM32(0x876758);
    ecx = ecx | eax;
    eax = 0x8761E8;
    MEM32(0x876758) = ecx;
    PUSH32(esp, 0); sub_00265DE0(); /* call 0x00265DE0 */

loc_00265DD7: ;
    eax = 0x8761E8;
    esp += 4; return; /* ret */

}

/**
 * sub_00265DE0
 * Original: 0x00265DE0 - 0x00265E57 (119 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00265DE0(void)
{

loc_00265DE0: ;
    ecx = 0; /* xor self */
    edx = eax + 0x51C;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    MEM32(edx + 0xC) = ecx;
    MEM32(edx + 0x10) = ecx;
    MEM32(edx + 0x14) = ecx;
    MEM32(edx + 0x18) = ecx;
    MEM32(edx + 0x1C) = ecx;
    MEM32(edx + 0x20) = ecx;
    MEM8(eax + 0x54C) = LO8(ecx);
    MEM8(eax + 0x54F) = LO8(ecx);
    MEM8(eax + 0x564) = LO8(ecx);
    MEM8(eax + 0x565) = LO8(ecx);
    MEM8(eax + 0x566) = LO8(ecx);
    edx = edx | 0xFFFFFFFFu;
    MEM32(eax + 0x560) = edx;
    MEM8(eax) = LO8(ecx);
    MEM8(eax + 1) = LO8(ecx);
    MEM32(eax + 0x568) = ecx;
    MEM32(eax + 0x550) = 3;
    MEM8(eax + 0x554) = LO8(ecx);
    MEM32(eax + 0x558) = edx;
    MEM32(eax + 0x55C) = edx;
    MEM8(eax + 0x56C) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00265E60
 * Original: 0x00265E60 - 0x00265FEA (394 bytes, 122 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00265E60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00265E60: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    /* TODO: rdtsc  */
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470A00(); /* call 0x00470A00 */

loc_00265E73: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x898);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470D50(); /* call 0x00470D50 */

loc_00265E81: ;
    ebx = MEM32(0x828B48);
    esi = MEM32(0x828B4C);
    PUSH32(esp, 0);
    eax = eax - ebx;
    PUSH32(esp, 0x3E8);
    edx = edx - esi - _cf; /* sbb */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470EA0(); /* call 0x00470EA0 */

loc_00265E9F: ;
    eax = eax - MEM32(edi + 0x568);
    if (CMP_BE(eax, 0x1388)) goto loc_00265FE3; /* jbe: below or equal (unsigned <=) */

loc_00265EB0: ;
    SET_LO8(eax, MEM8(0x6BCFEB));
    ebx = 0; /* xor self */
    if (CMP_LE(LO8(eax) & LO8(eax), 0)) goto loc_00265F28; /* jle: less or equal (signed <=) */

loc_00265EBB: ;
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    edi = edi;

loc_00265EC0: ;
    eax = MEM32(0x84A5F8);
    esi = eax + ebp;
    if (TEST_Z(esi, esi)) goto loc_00265F15; /* je: equal / zero */

loc_00265ECC: ;
    if (CMP_NE(MEM32(esi + 0x64), 1)) goto loc_00265F15; /* jne: not equal / not zero */

loc_00265ED2: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002C47B0(); /* call 0x002C47B0 */

loc_00265EDA: ;
    SET_LO8(eax, MEM8(esi + 0x250));
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00265F15; /* je: equal / zero */

loc_00265EE7: ;
    edx = MEM32(0x84A5F8);
    ecx = ZX8(LO8(eax));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x6D0);
    edx = ecx + edx + -1744;
    ecx = edx;
    PUSH32(esp, 0); sub_003B8010(); /* call 0x003B8010 */

loc_00265F04: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00265F15; /* je: equal / zero */

loc_00265F08: ;
    eax = ZX16(MEM16(edx + 0x60));
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002E9F80(); /* call 0x002E9F80 */

loc_00265F12: ;
    esp = esp + 4;

loc_00265F15: ;
    ecx = (uint32_t)(int32_t)SMEM8(0x6BCFEB);
    ebx++;
    ebp = ebp + 0x6D0;
    if (CMP_L(ebx, ecx)) goto loc_00265EC0; /* jl: less (signed <) */

loc_00265F27: ;
    POP32(esp, ebp);

loc_00265F28: ;
    /* TODO: rdtsc  */
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470A00(); /* call 0x00470A00 */

loc_00265F35: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x898);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470D50(); /* call 0x00470D50 */

loc_00265F43: ;
    esi = MEM32(0x828B48);
    ecx = MEM32(0x828B4C);
    PUSH32(esp, 0);
    eax = eax - esi;
    PUSH32(esp, 0x3E8);
    edx = edx - ecx - _cf; /* sbb */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470EA0(); /* call 0x00470EA0 */

loc_00265F61: ;
    MEM32(edi + 0x568) = eax;
    if (TEST_NZ(MEM8(0x878784), 1)) goto loc_00265F96; /* jne: not equal / not zero */

loc_00265F70: ;
    edx = MEM32(0x878784);
    edx = edx | 1;
    esi = 0x878760;
    MEM32(0x878784) = edx;
    PUSH32(esp, 0); sub_00293880(); /* call 0x00293880 */

loc_00265F89: ;
    PUSH32(esp, 0x48CBA0);
    PUSH32(esp, 0); sub_0046ED65(); /* call 0x0046ED65 */

loc_00265F93: ;
    esp = esp + 4;

loc_00265F96: ;
    eax = MEM32(0x878774);
    esi = 0; /* xor self */
    if (CMP_EQ(eax, esi)) goto loc_00265FB2; /* je: equal / zero */

loc_00265FA1: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00265FAF: ;
    esp = esp + 4;

loc_00265FB2: ;
    SET_LO8(eax, MEM8(esp + 0x14));
    MEM32(0x878774) = esi;
    MEM32(0x878778) = esi;
    MEM32(0x87877C) = esi;
    PUSH32(esp, 1);
    MEM8(edi) = 1;
    MEM8(edi + 1) = LO8(eax);
    PUSH32(esp, 0); sub_001F9B20(); /* call 0x001F9B20 */

loc_00265FD5: ;
    esp = esp + 4;
    eax = edi + 0x51C;
    PUSH32(esp, 0); sub_002665B0(); /* call 0x002665B0 */

loc_00265FE3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00265FF0
 * Original: 0x00265FF0 - 0x0026603D (77 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00265FF0(void)
{
    int _cf = 0; /* carry flag */

loc_00265FF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    /* TODO: rdtsc  */
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470A00(); /* call 0x00470A00 */

loc_00266000: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x898);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470D50(); /* call 0x00470D50 */

loc_0026600E: ;
    eax = eax - MEM32(0x828B48);
    ecx = MEM32(0x828B4C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E8);
    edx = edx - ecx - _cf; /* sbb */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470EA0(); /* call 0x00470EA0 */

loc_0026602A: ;
    eax = eax - MEM32(esi + 0x568);
    ecx = 0x1388;
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = (uint32_t)(-(int32_t)eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00266040
 * Original: 0x00266040 - 0x00266110 (208 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00266040(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_00266040: ;
    PUSH32(esp, esi);
    esi = eax;
    if (CMP_NE(MEM8(esi), 0)) goto loc_0026610E; /* jne: not equal / not zero */

loc_0026604C: ;
    if (CMP_NE(MEM32(esi + 0x560), 0xFFFFFFFFu)) goto loc_0026610E; /* jne: not equal / not zero */

loc_00266059: ;
    SET_LO8(eax, MEM8(0x862C98));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0026610E; /* je: equal / zero */

loc_00266066: ;
    SET_LO8(eax, MEM8(0x862C9C));
    PUSH32(esp, ebx);
    ebx = 1;
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_0026610D; /* je: equal / zero */

loc_00266079: ;
    SET_LO8(eax, MEM8(0x862C95));
    if (CMP_G(LO8(eax) & LO8(eax), 0)) goto loc_00266089; /* jg: greater (signed >) */

loc_00266082: ;
    SET_LO8(eax, 0x14);
    MEM8(0x862C95) = LO8(eax);

loc_00266089: ;
    xmm0 = MEMF(0x849C30); /* movss */
    xmm2 = MEMF(0x648CE0); /* movss */
    eax = SX8(LO8(eax));
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1 = xmm1 * MEMF(0x648E38); /* mulss */
    xmm1 = xmm1 - xmm0; /* subss */
    /* comiss xmm2, xmm1 - sets EFLAGS */
    if ((xmm2 <= xmm1)) goto loc_002660BA; /* jbe: below or equal (unsigned <=) */

loc_002660B1: ;
    MEM8(esi + 0x54F) = LO8(ebx);
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002660BA: ;
    SET_LO8(eax, MEM8(esi + 0x54C));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = xmm0 - MEMF(esi + 0x548); /* subss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002660D4; /* je: equal / zero */

loc_002660CC: ;
    xmm0 = MEMF(0x648F8C); /* movss */

loc_002660D4: ;
    eax = MEM32(0x84A5F8);
    MEMF(esi + 0x544) = xmm0; /* movss */
    MEM8(esi + 0x54C) = 0;
    MEM32(esi + 0x550) = ecx;
    if (CMP_NE(MEM32(eax + 0x64), ebx)) goto loc_00266108; /* jne: not equal / not zero */

loc_002660F3: ;
    eax = MEM32(eax + 0x238);
    if (TEST_Z(eax, eax)) goto loc_00266108; /* je: equal / zero */

loc_002660FD: ;
    (void)0; /* cmp ecx, MEM32(eax) - flags set for next jcc */
    SET_LO8(ecx, (CMP_EQ(ecx, MEM32(eax))) ? 1 : 0); /* sete */
    MEM8(esi + 0x554) = LO8(ecx);

loc_00266108: ;
    PUSH32(esp, 0); sub_00266A30(); /* call 0x00266A30 */

loc_0026610D: ;
    POP32(esp, ebx);

loc_0026610E: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00266110
 * Original: 0x00266110 - 0x00266169 (89 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00266110(void)
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

loc_00266110: ;
    if (CMP_NE(MEM32(esi + 0x558), 0xFFFFFFFFu)) goto loc_00266166; /* jne: not equal / not zero */

loc_00266119: ;
    eax = MEM32(esp + 4);
    fp_push((double)SMEM32(esp + 4)); /* fild */
    if (CMP_GE(eax & eax, 0)) goto loc_0026612B; /* jge: greater or equal (signed >=) */

loc_00266125: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_0026612B: ;
    MEMF(esp + 4) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(0x849C30)); /* fld float */
    fp_push(MEMF(esp + 4)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_00266166; /* jbe: below or equal (unsigned <=) */

loc_0026613F: ;
    PUSH32(esp, 0); sub_00416770(); /* call 0x00416770 */

loc_00266144: ;
    xmm0 = MEMF(esp + 4); /* movss */
    xmm0 = xmm0 - MEMF(0x849C30); /* subss */
    xmm0 = xmm0 * MEMF(0x6491DC); /* mulss */
    ecx = (int32_t)xmm0; /* cvttss2si */
    eax = eax - ecx;
    MEM32(esi + 0x558) = eax;

loc_00266166: ;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00266170
 * Original: 0x00266170 - 0x002662BC (332 bytes, 94 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00266170(void)
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

loc_00266170: ;
    PUSH32(esp, esi);
    esi = eax;
    if (CMP_NE(MEM8(esi), 0)) goto loc_002662B8; /* jne: not equal / not zero */

loc_0026617C: ;
    ecx = MEM32(esi + 0x560);
    eax = 0xFFFFFFFFu;
    if (CMP_NE(ecx, eax)) goto loc_002662B8; /* jne: not equal / not zero */

loc_0026618F: ;
    if (CMP_NE(MEM32(esi + 0x558), eax)) goto loc_002662B8; /* jne: not equal / not zero */

loc_0026619B: ;
    SET_LO8(eax, MEM8(0x862C9A));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002662B8; /* je: equal / zero */

loc_002661A8: ;
    PUSH32(esp, 0); sub_00416770(); /* call 0x00416770 */

loc_002661AD: ;
    ecx = MEM32(esp + 8);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x3E8);
    eax = eax + ecx;
    MEM32(esi + 0x558) = eax;
    if (CMP_EQ(MEM32(0x863D04), 1)) goto loc_002662B8; /* je: equal / zero */

loc_002661CC: ;
    SET_LO8(eax, MEM8(0x862C5C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002662B8; /* je: equal / zero */

loc_002661D9: ;
    SET_LO8(eax, MEM8(0x864EC1));
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    if (CMP_LE(LO8(eax) & LO8(eax), 0)) goto loc_002662B7; /* jle: less or equal (signed <=) */

loc_002661E9: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ebp = 0x8658A4;

loc_002661F0: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_002661FE; /* jne: not equal / not zero */

loc_002661F9: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_002661FE: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (TEST_Z(esi, esi)) goto loc_00266248; /* je: equal / zero */

loc_00266224: ;
    if (CMP_B(MEM32(esi + 0x80), 0x38)) goto loc_00266248; /* jb: below (unsigned <) */

loc_0026622D: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00266237: ;
    PUSH32(esp, 0x38);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0026623F: ;
    esi = eax;
    esp = esp + 8;
    if (TEST_NZ(esi, esi)) goto loc_0026626B; /* jne: not equal / not zero */

loc_00266248: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0026625A: ;
    PUSH32(esp, 0x38);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00266262: ;
    esi = eax;
    esp = esp + 8;
    if (TEST_Z(esi, esi)) goto loc_00266286; /* je: equal / zero */

loc_0026626B: ;
    fp_push(MEMF(0x849C30)); /* fld float */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00266276: ;
    eax = eax + MEM32(esp + 0x14);
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0); sub_002668E0(); /* call 0x002668E0 */

loc_00266282: ;
    esi = eax;
    goto loc_00266288;

loc_00266286: ;
    esi = 0; /* xor self */

loc_00266288: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x1F4);
    PUSH32(esp, 0); sub_004168D0(); /* call 0x004168D0 */

loc_00266294: ;
    eax = MEM32(ebp);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_0026629F: ;
    ecx = (uint32_t)(int32_t)SMEM8(0x864EC1);
    ebx++;
    ebp = ebp + 0xA50;
    if (CMP_L(ebx, ecx)) goto loc_002661F0; /* jl: less (signed <) */

loc_002662B5: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_002662B7: ;
    POP32(esp, ebx);

loc_002662B8: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_002662C0
 * Original: 0x002662C0 - 0x002662D1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002662C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002662C0: ;
    if (CMP_NE(MEM8(eax), 0)) { sub_002662D1(); return; } /* jne: not equal / not zero */

loc_002662C5: ;
    if (CMP_NE(MEM32(eax + 0x560), 0xFFFFFFFFu)) { sub_002662D1(); return; } /* jne: not equal / not zero */

loc_002662CE: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_002662E0
 * Original: 0x002662E0 - 0x00266573 (659 bytes, 195 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002662E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002662E0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    edi = 0; /* xor self */
    /* nop */

loc_002662F0: ;
    esi = (uint32_t)(int32_t)SMEM8(edi + 0x862CCB);
    if (CMP_L(esi, ebx)) goto loc_0026631D; /* jl: less (signed <) */

loc_002662FB: ;
    if (CMP_GE(esi, 0x10)) goto loc_0026631D; /* jge: greater or equal (signed >=) */

loc_00266300: ;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00266305: ;
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0026630A: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x2C);
    esi = esi + 0x776280;
    MEM8(esi + 0x1C) = 0;
    MEM32(esi + 0x20) = ebx;
    MEM32(esi + 0x18) = eax;

loc_0026631D: ;
    edi++;
    if (CMP_L(edi, 2)) goto loc_002662F0; /* jl: less (signed <) */

loc_00266323: ;
    ebp = MEM32(esp + 0x18);
    if (CMP_NE(MEM8(ebp), 0)) goto loc_002664CE; /* jne: not equal / not zero */

loc_00266331: ;
    ebx = MEM32(0x828B4C);
    edi = 0; /* xor self */
    /* nop */

loc_00266340: ;
    esi = (uint32_t)(int32_t)SMEM8(edi + 0x862CCB);
    if (TEST_S(esi, esi)) goto loc_002663B9; /* jl: less (signed <) */

loc_0026634B: ;
    if (CMP_GE(esi, 0x10)) goto loc_002663B9; /* jge: greater or equal (signed >=) */

loc_00266350: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x2C);
    esi = esi + 0x776280;
    if ((esi == 0)) goto loc_00266362; /* je: equal / zero */

loc_0026635B: ;
    MEM32(esi + 0x14) = 0;

loc_00266362: ;
    /* TODO: rdtsc  */
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470A00(); /* call 0x00470A00 */

loc_0026636F: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x898);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470D50(); /* call 0x00470D50 */

loc_0026637D: ;
    ecx = MEM32(0x828B48);
    PUSH32(esp, 0);
    eax = eax - ecx;
    PUSH32(esp, 0x3E8);
    edx = edx - ebx - _cf; /* sbb */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470EA0(); /* call 0x00470EA0 */

loc_00266395: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    if (CMP_GE(eax & eax, 0)) goto loc_002663A7; /* jge: greater or equal (signed >=) */

loc_002663A1: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_002663A7: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_002663B2: ;
    MEM32(esi + 0x18) = eax;
    MEM8(esi + 0x1C) = 0;

loc_002663B9: ;
    eax = (uint32_t)(int32_t)SMEM8(edi + 0x862CCB);
    if (TEST_S(eax, eax)) goto loc_002663DC; /* jl: less (signed <) */

loc_002663C4: ;
    if (CMP_GE(eax, 0x10)) goto loc_002663DC; /* jge: greater or equal (signed >=) */

loc_002663C9: ;
    ecx = (int32_t)MEMF(0x849C30); /* cvttss2si */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    eax = eax + 0x776280;
    MEM32(eax + 0x10) = ecx;

loc_002663DC: ;
    edi++;
    if (CMP_L(edi, 2)) goto loc_00266340; /* jl: less (signed <) */

loc_002663E6: ;
    SET_LO8(eax, MEM8(0x862C8B));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002664C8; /* je: equal / zero */

loc_002663F3: ;
    ebp = MEM32(0x84A5F8);
    edi = 0x64;
    esi = ebp + 0x568;
    ebx = 0x10;
    /* nop */

loc_00266410: ;
    eax = esi + -1384;
    if (TEST_Z(eax, eax)) goto loc_0026646F; /* je: equal / zero */

loc_0026641A: ;
    if (CMP_NE(MEM32(esi + -1284), 1)) goto loc_0026646F; /* jne: not equal / not zero */

loc_00266423: ;
    if (CMP_BE(MEM16(esi + -442), 0)) goto loc_0026646F; /* jbe: below or equal (unsigned <=) */

loc_0026642D: ;
    eax = MEM32(esi);
    if (TEST_Z(eax, eax)) goto loc_0026646F; /* je: equal / zero */

loc_00266433: ;
    ecx = MEM32(eax + 0x204);
    if (TEST_NZ(ecx, ecx)) goto loc_0026646F; /* jne: not equal / not zero */

loc_0026643D: ;
    SET_LO8(ecx, MEM8(eax + 0x38D));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0026646F; /* jne: not equal / not zero */

loc_00266447: ;
    SET_LO16(eax, MEM16(esi + -1288));
    PUSH32(esp, 3);
    PUSH32(esp, 0); sub_0032D0D0(); /* call 0x0032D0D0 */

loc_00266455: ;
    esp = esp + 4;
    if (CMP_L(edi, eax)) goto loc_0026646F; /* jl: less (signed <) */

loc_0026645C: ;
    SET_LO16(eax, MEM16(esi + -1288));
    PUSH32(esp, 3);
    PUSH32(esp, 0); sub_0032D0D0(); /* call 0x0032D0D0 */

loc_0026646A: ;
    esp = esp + 4;
    edi = eax;

loc_0026646F: ;
    esi = esi + 0x6D0;
    ebx--;
    if ((ebx != 0)) goto loc_00266410; /* jne: not equal / not zero */

loc_00266478: ;
    esi = ebp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_00266480: ;
    if (TEST_NZ(eax, eax)) goto loc_002664C4; /* jne: not equal / not zero */

loc_00266484: ;
    SET_LO16(eax, MEM16(esi + 0x60));
    ecx = 0; /* xor self */
    edx = ZX16(LO16(eax));
    /* nop */

loc_00266490: ;
    ebx = (uint32_t)(int32_t)SMEM8(ecx + 0x862CCB);
    if (CMP_EQ(ebx, edx)) goto loc_002664A3; /* je: equal / zero */

loc_0026649B: ;
    ecx++;
    if (CMP_L(ecx, 2)) goto loc_00266490; /* jl: less (signed <) */

loc_002664A1: ;
    goto loc_002664C4;

loc_002664A3: ;
    ecx++;
    if ((ecx == 0)) goto loc_002664C4; /* je: equal / zero */

loc_002664A6: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0); sub_0032D0D0(); /* call 0x0032D0D0 */

loc_002664AD: ;
    esp = esp + 4;
    if (CMP_LE(eax, edi)) goto loc_002664C4; /* jle: less or equal (signed <=) */

loc_002664B4: ;
    SET_LO16(esi, MEM16(esi + 0x60));
    PUSH32(esp, 3);
    eax = edi;
    PUSH32(esp, 0); sub_0032CF50(); /* call 0x0032CF50 */

loc_002664C1: ;
    esp = esp + 4;

loc_002664C4: ;
    ebp = MEM32(esp + 0x18);

loc_002664C8: ;
    if (CMP_EQ(MEM8(ebp), 0)) goto loc_0026651D; /* je: equal / zero */

loc_002664CE: ;
    eax = ebp + 0x51C;
    PUSH32(esp, 0); sub_00266690(); /* call 0x00266690 */

loc_002664D9: ;
    if (TEST_NZ(MEM8(0x878784), 1)) goto loc_00266508; /* jne: not equal / not zero */

loc_002664E2: ;
    edx = MEM32(0x878784);
    edx = edx | 1;
    esi = 0x878760;
    MEM32(0x878784) = edx;
    PUSH32(esp, 0); sub_00293880(); /* call 0x00293880 */

loc_002664FB: ;
    PUSH32(esp, 0x48CBA0);
    PUSH32(esp, 0); sub_0046ED65(); /* call 0x0046ED65 */

loc_00266505: ;
    esp = esp + 4;

loc_00266508: ;
    ebx = 0x878760;
    PUSH32(esp, 0); sub_002938F0(); /* call 0x002938F0 */

loc_00266512: ;
    SET_LO8(eax, MEM8(ebp + 1));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0026651D; /* je: equal / zero */

loc_00266519: ;
    MEM8(ebp + 1) = 0;

loc_0026651D: ;
    esi = ebp + 0x540;
    PUSH32(esp, 0); sub_00266DB0(); /* call 0x00266DB0 */

loc_00266528: ;
    MEM8(ebp) = 0;
    /* TODO: rdtsc  */
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470A00(); /* call 0x00470A00 */

loc_00266539: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x898);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470D50(); /* call 0x00470D50 */

loc_00266547: ;
    esi = MEM32(0x828B48);
    ecx = MEM32(0x828B4C);
    PUSH32(esp, 0);
    eax = eax - esi;
    PUSH32(esp, 0x3E8);
    edx = edx - ecx - _cf; /* sbb */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470EA0(); /* call 0x00470EA0 */

loc_00266565: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp + 0x55C) = eax;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00266580
 * Original: 0x00266580 - 0x0026659E (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00266580(void)
{
    int _flags = 0; /* fallback flag var */

loc_00266580: ;
    if (CMP_NE(MEM8(eax), 0)) goto loc_0026658E; /* jne: not equal / not zero */

loc_00266585: ;
    if (CMP_EQ(MEM32(eax + 0x560), 0xFFFFFFFFu)) { sub_0026659E(); return; } /* je: equal / zero */

loc_0026658E: ;
    SET_LO8(ecx, MEM8(eax + 0x56C));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) { sub_0026659E(); return; } /* jne: not equal / not zero */

loc_00266598: ;
    eax = eax + 0x290;
    esp += 4; return; /* ret */

}

/**
 * sub_002665B0
 * Original: 0x002665B0 - 0x00266663 (179 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002665B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002665B0: ;
    esp = esp - 8;
    SET_LO8(ecx, MEM8(0x863D11));
    xmm0 = MEMF(0x849C30); /* movss */
    MEM8(eax) = LO8(ecx);
    edx = MEM32(0x863D04);
    MEM32(eax + 4) = edx;
    SET_LO8(ecx, MEM8(0x862C5C));
    MEM8(eax + 8) = LO8(ecx);
    SET_LO8(edx, MEM8(0x862C5F));
    MEM8(eax + 9) = LO8(edx);
    PUSH32(esp, ebx);
    MEMF(eax + 0xC) = xmm0; /* movss */
    SET_LO8(ecx, MEM8(0x862CA1));
    PUSH32(esp, ebp);
    MEM8(eax + 0x10) = LO8(ecx);
    edx = MEM32(0x863D08);
    PUSH32(esp, esi);
    MEM32(eax + 0x14) = edx;
    edx = MEM32(0x84A5F8);
    ebp = eax + 0x18;
    esi = 0; /* xor self */
    eax = eax + 0x1C;
    PUSH32(esp, edi);
    ebx = ebp;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = 2;

loc_00266615: ;
    edi = esi + edx;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_0026661E: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    edx = MEM32(0x84A5F8);
    if (TEST_NZ(eax, eax)) goto loc_00266641; /* jne: not equal / not zero */

loc_00266628: ;
    ecx = ZX16(MEM16(edi + 0x60));
    eax = 0; /* xor self */
    edi = edi;

loc_00266630: ;
    edi = (uint32_t)(int32_t)SMEM8(eax + 0x862CCB);
    if (CMP_EQ(edi, ecx)) { sub_00266663(); return; } /* je: equal / zero */

loc_0026663B: ;
    eax++;
    if (CMP_L(eax, 2)) goto loc_00266630; /* jl: less (signed <) */

loc_00266641: ;
    MEM8(ebx) = 0;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 4;
    eax = MEM32(esp + 0x14);
    esi = esi + 0x6D0;
    ebx++;
    eax--;
    MEM32(esp + 0x14) = eax;
    if ((eax != 0)) goto loc_00266615; /* jne: not equal / not zero */

loc_0026665B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00266690
 * Original: 0x00266690 - 0x00266730 (160 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00266690(void)
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

loc_00266690: ;
    SET_LO8(ecx, MEM8(eax));
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(0x863D11));
    SET_LO8(edx, 0); /* xor self */
    if (CMP_NE(LO8(ecx), LO8(ebx))) goto loc_002666A7; /* jne: not equal / not zero */

loc_0026669F: ;
    if (CMP_EQ(MEM8(0x75E9A0), LO8(edx))) goto loc_002666B3; /* je: equal / zero */

loc_002666A7: ;
    MEM8(0x75E9A0) = LO8(edx);
    MEM8(0x863D11) = LO8(ecx);

loc_002666B3: ;
    ecx = MEM32(eax + 4);
    if (CMP_NE(ecx, MEM32(0x863D04))) goto loc_002666C6; /* jne: not equal / not zero */

loc_002666BE: ;
    if (CMP_EQ(MEM8(0x75E9A2), LO8(edx))) goto loc_002666DD; /* je: equal / zero */

loc_002666C6: ;
    (void)0; /* cmp ecx, 2 - flags set for next jcc */
    MEM8(0x75E9A2) = LO8(edx);
    if (CMP_NE(ecx, 2)) goto loc_002666D7; /* jne: not equal / not zero */

loc_002666D1: ;
    MEM8(0x863D10) = LO8(edx);

loc_002666D7: ;
    MEM32(0x863D04) = ecx;

loc_002666DD: ;
    SET_LO8(ecx, MEM8(eax + 8));
    MEM8(0x862C5C) = LO8(ecx);
    SET_LO8(ecx, MEM8(eax + 9));
    MEM8(0x862C5F) = LO8(ecx);
    SET_LO8(ecx, MEM8(eax + 0x10));
    xmm0 = MEMF(eax + 0xC); /* movss */
    MEM8(0x862CA1) = LO8(ecx);
    eax = MEM32(eax + 0x14);
    (void)0; /* cmp MEM32(0x863D08), eax - flags set for next jcc */
    MEMF(0x849C30) = xmm0; /* movss */
    POP32(esp, ebx);
    if (CMP_NE(MEM32(0x863D08), eax)) goto loc_00266719; /* jne: not equal / not zero */

loc_00266711: ;
    if (CMP_EQ(MEM8(0x75E9A1), LO8(edx))) goto loc_0026672F; /* je: equal / zero */

loc_00266719: ;
    MEM8(0x75E9A1) = LO8(edx);
    MEM32(0x863D08) = eax;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00266729: ;
    MEMF(0x863D0C) = (float)fp_top(); fp_popp(); /* fstp */

loc_0026672F: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00266730
 * Original: 0x00266730 - 0x00266748 (24 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00266730(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00266730: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = eax + 0x1C;
    edi = 0; /* xor self */
    ebx = 0; /* xor self */
    ebp = 0; /* xor self */
    MEM32(esp + 0x10) = ecx;
    g_seh_ebp = ebp; sub_00266750(); return; /* tail jmp 0x00266750 */

}

/**
 * sub_002668A0
 * Original: 0x002668A0 - 0x002668DB (59 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002668A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002668A0: ;
    (void)0; /* cmp MEM32(0x863D08), 3 - flags set for next jcc */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_NE(MEM32(0x863D08), 3)) goto loc_002668D4; /* jne: not equal / not zero */

loc_002668AC: ;
    if (TEST_NZ(MEM8(0x876758), 1)) goto loc_002668C6; /* jne: not equal / not zero */

loc_002668B5: ;
    MEM32(0x876758) = MEM32(0x876758) | 1;
    eax = 0x8761E8;
    PUSH32(esp, 0); sub_00265DE0(); /* call 0x00265DE0 */

loc_002668C6: ;
    eax = MEM32(esi + 0x34);
    PUSH32(esp, eax);
    esi = 0x8761E8;
    PUSH32(esp, 0); sub_00266110(); /* call 0x00266110 */

loc_002668D4: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002668E0
 * Original: 0x002668E0 - 0x0026691B (59 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002668E0(void)
{

loc_002668E0: ;
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
    ecx = MEM32(esp + 4);
    MEM32(eax + 8) = 0xFFFFFFFFu;
    MEM32(eax) = 0x602210;
    MEM32(eax + 0x34) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00266920
 * Original: 0x00266920 - 0x0026693A (26 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00266920(void)
{

loc_00266920: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x10);
    edi = ecx;
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0026692F: ;
    esp = esp + 4;
    MEM32(edi + 0x34) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00266940
 * Original: 0x00266940 - 0x002669F2 (178 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00266940(void)
{
    int _flags = 0; /* fallback flag var */

loc_00266940: ;
    eax = MEM32(0x84A19C);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(eax, ebx)) goto loc_00266953; /* jne: not equal / not zero */

loc_0026694E: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_00266953: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (CMP_EQ(esi, ebx)) goto loc_0026699B; /* je: equal / zero */

loc_00266979: ;
    if (CMP_B(MEM32(esi + 0x80), 0x38)) goto loc_0026699B; /* jb: below (unsigned <) */

loc_00266982: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0026698C: ;
    PUSH32(esp, 0x38);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00266994: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_002669BC; /* jne: not equal / not zero */

loc_0026699B: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002669AD: ;
    PUSH32(esp, 0x38);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002669B5: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) { sub_002669F2(); return; } /* je: equal / zero */

loc_002669BC: ;
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
    MEM32(eax + 0x34) = ebx;
    MEM32(eax + 8) = 0xFFFFFFFFu;
    MEM32(eax) = 0x602210;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00266A00
 * Original: 0x00266A00 - 0x00266A23 (35 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00266A00(void)
{
    int _flags = 0; /* fallback flag var */

loc_00266A00: ;
    if (CMP_NE(MEM8(esi), 0)) goto loc_00266A20; /* jne: not equal / not zero */

loc_00266A05: ;
    if (CMP_EQ(MEM32(esi + 0x55C), 0xFFFFFFFFu)) { sub_00266A23(); return; } /* je: equal / zero */

loc_00266A0E: ;
    PUSH32(esp, 0); sub_00416770(); /* call 0x00416770 */

loc_00266A13: ;
    eax = eax - MEM32(esi + 0x55C);
    if (CMP_AE(eax, 0x7D0)) { sub_00266A23(); return; } /* jae: above or equal (unsigned >=) */

loc_00266A20: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_00266A30
 * Original: 0x00266A30 - 0x00266AA9 (121 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00266A30(void)
{
    int _flags = 0; /* fallback flag var */

loc_00266A30: ;
    if (CMP_EQ(MEM32(0x863D04), 1)) goto loc_00266A98; /* je: equal / zero */

loc_00266A39: ;
    SET_LO8(eax, MEM8(0x862C5C));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00266A98; /* jne: not equal / not zero */

loc_00266A42: ;
    PUSH32(esp, edi);
    edi = MEM32(0x84A5F8);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_00266A4F: ;
    if (TEST_NZ(eax, eax)) goto loc_00266A7D; /* jne: not equal / not zero */

loc_00266A53: ;
    ecx = ZX16(MEM16(edi + 0x60));
    goto loc_00266A60;

    /* nop */

loc_00266A60: ;
    edx = (uint32_t)(int32_t)SMEM8(eax + 0x862CCB);
    if (CMP_EQ(edx, ecx)) goto loc_00266A73; /* je: equal / zero */

loc_00266A6B: ;
    eax++;
    if (CMP_L(eax, 2)) goto loc_00266A60; /* jl: less (signed <) */

loc_00266A71: ;
    goto loc_00266A7D;

loc_00266A73: ;
    eax++;
    if ((eax == 0)) goto loc_00266A7D; /* je: equal / zero */

loc_00266A76: ;
    eax = edi;
    PUSH32(esp, 0); sub_00265BE0(); /* call 0x00265BE0 */

loc_00266A7D: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0); sub_00265E60(); /* call 0x00265E60 */

loc_00266A85: ;
    SET_LO8(eax, MEM8(esi + 0x566));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    POP32(esp, edi);
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00266AA8; /* jne: not equal / not zero */

loc_00266A90: ;
    MEM8(esi + 0x565) = 1;
    esp += 4; return; /* ret */

loc_00266A98: ;
    MEM32(esi + 0x560) = 5;
    MEM8(esi + 0x564) = LO8(ebx);

loc_00266AA8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00266AB0
 * Original: 0x00266AB0 - 0x00266AFB (75 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00266AB0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00266AB0: ;
    SET_LO8(eax, MEM8(0x862C5C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00266AFA; /* je: equal / zero */

loc_00266AB9: ;
    eax = MEM32(esi + 0x560);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_00266AFA; /* je: equal / zero */

loc_00266AC4: ;
    eax--;
    MEM32(esi + 0x560) = eax;
    if ((eax != 0)) goto loc_00266AFA; /* jne: not equal / not zero */

loc_00266ACD: ;
    MEM8(esi + 0x56C) = 1;
    PUSH32(esp, 0); sub_00266B60(); /* call 0x00266B60 */

loc_00266AD9: ;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(esi + 0x564));
    ecx = esi;
    MEM8(esi + 0x56C) = 0;
    MEM32(esi + 0x560) = 0xFFFFFFFFu;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00265E60(); /* call 0x00265E60 */

loc_00266AFA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00266B00
 * Original: 0x00266B00 - 0x00266B5C (92 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00266B00(void)
{
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_00266B00: ;
    if (CMP_EQ(MEM32(esi + 0x558), 0xFFFFFFFFu)) goto loc_00266B5B; /* je: equal / zero */

loc_00266B09: ;
    /* TODO: rdtsc  */
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470A00(); /* call 0x00470A00 */

loc_00266B16: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x898);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470D50(); /* call 0x00470D50 */

loc_00266B24: ;
    eax = eax - MEM32(0x828B48);
    ecx = MEM32(0x828B4C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E8);
    edx = edx - ecx - _cf; /* sbb */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470EA0(); /* call 0x00470EA0 */

loc_00266B40: ;
    if (CMP_B(eax, MEM32(esi + 0x558))) goto loc_00266B5B; /* jb: below (unsigned <) */

loc_00266B48: ;
    PUSH32(esp, 0);
    ecx = esi;
    MEM32(esi + 0x558) = 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_00265E60(); /* call 0x00265E60 */

loc_00266B5B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00266B60
 * Original: 0x00266B60 - 0x00266C16 (182 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00266B60(void)
{
    int _flags = 0; /* fallback flag var */

loc_00266B60: ;
    eax = MEM32(0x863D04);
    PUSH32(esp, ebx);
    ebx = 1;
    if (CMP_EQ(eax, ebx)) goto loc_00266B78; /* je: equal / zero */

loc_00266B6F: ;
    SET_LO8(eax, MEM8(0x862C5C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00266BBA; /* je: equal / zero */

loc_00266B78: ;
    SET_LO8(eax, MEM8(0x6BCFEB));
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_LE(LO8(eax) & LO8(eax), 0)) goto loc_00266BAD; /* jle: less or equal (signed <=) */

loc_00266B84: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */

loc_00266B87: ;
    eax = MEM32(0x84A5F8);
    eax = eax + esi;
    if ((eax == 0)) goto loc_00266B9A; /* je: equal / zero */

loc_00266B90: ;
    if (CMP_NE(MEM32(eax + 0x64), ebx)) goto loc_00266B9A; /* jne: not equal / not zero */

loc_00266B95: ;
    PUSH32(esp, 0); sub_00265BE0(); /* call 0x00265BE0 */

loc_00266B9A: ;
    ecx = (uint32_t)(int32_t)SMEM8(0x6BCFEB);
    edi++;
    esi = esi + 0x6D0;
    if (CMP_L(edi, ecx)) goto loc_00266B87; /* jl: less (signed <) */

loc_00266BAC: ;
    POP32(esp, esi);

loc_00266BAD: ;
    MEM8(0x862E58) = LO8(ebx);
    MEM8(0x864EBE) = LO8(ebx);
    POP32(esp, edi);

loc_00266BBA: ;
    (void)0; /* cmp MEM32(0x863D04), ebx - flags set for next jcc */
    POP32(esp, ebx);
    if (CMP_NE(MEM32(0x863D04), ebx)) goto loc_00266C15; /* jne: not equal / not zero */

loc_00266BC3: ;
    SET_LO8(eax, MEM8(0x86298C));
    ecx = MEM32(0x8629B0);
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    eax = MEM32(0x8629A0);
    SET_LO8(edx, (TEST_Z(LO8(eax), LO8(eax))) ? 1 : 0); /* sete */
    MEM32(0x8629B0) = eax;
    eax = MEM32(0x8629A4);
    MEM8(0x86298C) = LO8(edx);
    edx = MEM32(0x8629B4);
    MEM32(0x8629A0) = ecx;
    ecx = MEM32(0x8629B8);
    MEM32(0x8629B4) = eax;
    eax = MEM32(0x8629A8);
    MEM32(0x8629A4) = edx;
    MEM32(0x8629A8) = ecx;
    MEM32(0x8629B8) = eax;

loc_00266C15: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00266C20
 * Original: 0x00266C20 - 0x00266DAF (399 bytes, 111 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00266C20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00266C20: ;
    (void)0; /* test MEM8(0x876758), 1 - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    if (TEST_NZ(MEM8(0x876758), 1)) goto loc_00266C3F; /* jne: not equal / not zero */

loc_00266C2E: ;
    MEM32(0x876758) = MEM32(0x876758) | 1;
    eax = 0x8761E8;
    PUSH32(esp, 0); sub_00265DE0(); /* call 0x00265DE0 */

loc_00266C3F: ;
    SET_LO8(eax, MEM8(0x8761E8));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00266DAB; /* jne: not equal / not zero */

loc_00266C4C: ;
    if (CMP_NE(MEM32(0x876748), 0xFFFFFFFFu)) goto loc_00266DAB; /* jne: not equal / not zero */

loc_00266C59: ;
    edx = (uint32_t)(int32_t)SMEM8(0x864EC1);
    eax = 0; /* xor self */
    if (CMP_LE(edx & edx, 0)) goto loc_00266C80; /* jle: less or equal (signed <=) */

loc_00266C66: ;
    ecx = 0x864EC8;
    goto loc_00266C70;

    /* nop */

loc_00266C70: ;
    if (CMP_NE(MEM8(ecx), 0)) goto loc_00266C84; /* jne: not equal / not zero */

loc_00266C75: ;
    eax++;
    ecx = ecx + 0xA50;
    if (CMP_L(eax, edx)) goto loc_00266C70; /* jl: less (signed <) */

loc_00266C80: ;
    MEM8(ebp + 0xE) = 0;

loc_00266C84: ;
    SET_LO8(eax, MEM8(ebp + 0xE));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00266D70; /* je: equal / zero */

loc_00266C8F: ;
    xmm0 = MEMF(0x849C30); /* movss */
    xmm0 = xmm0 - MEMF(ebp + 8); /* subss */
    /* comiss xmm0, MEMF(0x648D14) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x648D14))) goto loc_00266D70; /* jbe: below or equal (unsigned <=) */

loc_00266CA9: ;
    eax = 0x862C40;
    PUSH32(esp, 0); sub_00296340(); /* call 0x00296340 */

loc_00266CB3: ;
    if (TEST_Z(eax, eax)) goto loc_00266D6C; /* je: equal / zero */

loc_00266CBB: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_00266CC9; /* jne: not equal / not zero */

loc_00266CC4: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_00266CC9: ;
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
    if (TEST_Z(esi, esi)) goto loc_00266D13; /* je: equal / zero */

loc_00266CF1: ;
    if (CMP_B(MEM32(esi + 0x80), 0x40)) goto loc_00266D13; /* jb: below (unsigned <) */

loc_00266CFA: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00266D04: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00266D0C: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_00266D34; /* jne: not equal / not zero */

loc_00266D13: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00266D25: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00266D2D: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_00266D3D; /* je: equal / zero */

loc_00266D34: ;
    PUSH32(esp, 0); sub_00265B30(); /* call 0x00265B30 */

loc_00266D39: ;
    esi = eax;
    goto loc_00266D3F;

loc_00266D3D: ;
    esi = 0; /* xor self */

loc_00266D3F: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x6C), _icall_esp); /* indirect call */
    }

loc_00266D46: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x1F4);
    PUSH32(esp, 0); sub_004168D0(); /* call 0x004168D0 */

loc_00266D52: ;
    edi = MEM32(esi);
    eax = 0x862C40;
    PUSH32(esp, 0); sub_00296340(); /* call 0x00296340 */

loc_00266D5E: ;
    ecx = MEM32(eax + 0x9DC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edi + 4), _icall_esp); /* indirect call */
    }

loc_00266D6A: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00266D6C: ;
    MEM8(ebp + 0xE) = 0;

loc_00266D70: ;
    if (CMP_EQ(MEM32(0x863D04), 1)) goto loc_00266D82; /* je: equal / zero */

loc_00266D79: ;
    SET_LO8(eax, MEM8(0x862C5C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00266DAB; /* je: equal / zero */

loc_00266D82: ;
    if (CMP_EQ(MEM8(ebp), 0)) goto loc_00266DAB; /* je: equal / zero */

loc_00266D88: ;
    xmm1 = MEMF(0x849C30); /* movss */
    /* comiss xmm1, MEMF(ebp + 4) - sets EFLAGS */
    if ((xmm1 > MEMF(ebp + 4))) goto loc_00266DA7; /* ja: above (unsigned >) */

loc_00266D96: ;
    xmm0 = MEMF(ebp + 4); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    xmm1 = 0.0f; /* xorps self = zero */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 < xmm0)) goto loc_00266DAB; /* jb: below (unsigned <) */

loc_00266DA7: ;
    MEM8(ebp + 0xC) = 1;

loc_00266DAB: ;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00266DB0
 * Original: 0x00266DB0 - 0x00266E6F (191 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00266DB0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_00266DB0: ;
    SET_LO8(eax, MEM8(0x876758));
    PUSH32(esp, ebx);
    ebx = 1;
    if (TEST_NZ(LO8(ebx), LO8(eax))) goto loc_00266DCF; /* jne: not equal / not zero */

loc_00266DBF: ;
    MEM32(0x876758) = MEM32(0x876758) | ebx;
    eax = 0x8761E8;
    PUSH32(esp, 0); sub_00265DE0(); /* call 0x00265DE0 */

loc_00266DCF: ;
    SET_LO8(eax, MEM8(0x8761E8));
    xmm0 = MEMF(0x648D34); /* movss */
    ecx = 0; /* xor self */
    if (CMP_NE(LO8(eax), LO8(ecx))) goto loc_00266E15; /* jne: not equal / not zero */

loc_00266DE2: ;
    if (CMP_NE(MEM32(0x876748), 0xFFFFFFFFu)) goto loc_00266E15; /* jne: not equal / not zero */

loc_00266DEB: ;
    if (CMP_EQ(MEM8(0x862C98), LO8(ecx))) goto loc_00266E0A; /* je: equal / zero */

loc_00266DF3: ;
    if (CMP_EQ(MEM8(0x862C9C), LO8(ebx))) goto loc_00266E0A; /* je: equal / zero */

loc_00266DFB: ;
    xmm1 = MEMF(0x648F8C); /* movss */
    MEMF(esi + 4) = xmm1; /* movss */
    goto loc_00266E0F;

loc_00266E0A: ;
    MEMF(esi + 4) = xmm0; /* movss */

loc_00266E0F: ;
    MEM8(esi + 0xC) = LO8(ecx);
    MEM8(esi + 0xF) = LO8(ecx);

loc_00266E15: ;
    xmm1 = MEMF(esi + 4); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    xmm0 = MEMF(0x849C30); /* movss */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    eax = ebx;
    /* TODO: cmovnp eax, ecx */
    (void)0; /* cmp LO8(eax), LO8(ecx) - flags set for next jcc */
    MEM8(esi) = LO8(eax);
    if (CMP_EQ(LO8(eax), LO8(ecx))) goto loc_00266E54; /* je: equal / zero */

loc_00266E34: ;
    if (CMP_EQ(MEM8(0x862C5C), LO8(ecx))) goto loc_00266E3F; /* je: equal / zero */

loc_00266E3C: ;
    MEM8(esi + 0xD) = LO8(ebx);

loc_00266E3F: ;
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 + MEMF(esi + 4); /* addss */
    eax = (int32_t)xmm1; /* cvttss2si */
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esi + 4) = xmm1; /* movss */

loc_00266E54: ;
    MEMF(esi + 8) = xmm0; /* movss */
    if (CMP_NE(MEM8(0x862C5C), LO8(ecx))) goto loc_00266E6D; /* jne: not equal / not zero */

loc_00266E61: ;
    if (CMP_NE(MEM32(0x863D08), 3)) goto loc_00266E6D; /* jne: not equal / not zero */

loc_00266E6A: ;
    MEM8(esi + 0xE) = LO8(ebx);

loc_00266E6D: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00266E70
 * Original: 0x00266E70 - 0x00266E90 (32 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00266E70(void)
{
    float xmm0;

loc_00266E70: ;
    xmm0 = MEMF(esp + 4); /* movss */
    MEMF(ecx + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(esp + 8); /* movss */
    MEM32(ecx + 0x34) = 1;
    MEMF(ecx + 0x3C) = xmm0; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00266EB0
 * Original: 0x00266EB0 - 0x00266F06 (86 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00266EB0(void)
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

loc_00266EB0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x34);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_00266EC2: ;
    eax = MEM32(edi + 0x34);
    esp = esp + 4;
    if (CMP_NE(eax, 1)) goto loc_00266F01; /* jne: not equal / not zero */

loc_00266ECD: ;
    xmm0 = MEMF(edi + 0x38); /* movss */
    /* ucomiss xmm0, MEMF(0x648D34) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    eax = 0xFFF;
    if (1 /* jnp after test - parity */) goto loc_00266EE8; /* jnp: not parity */

loc_00266EE4: ;
    eax = (int32_t)xmm0; /* cvttss2si */

loc_00266EE8: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_00266EEF: ;
    fp_push(MEMF(edi + 0x3C)); /* fld float */
    PUSH32(esp, 0xC);
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00266EF9: ;
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_00266EFE: ;
    esp = esp + 8;

loc_00266F01: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00266F10
 * Original: 0x00266F10 - 0x00266F64 (84 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00266F10(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00266F10: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    edi = ecx;
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_00266F1F: ;
    esp = esp + 4;
    (void)0; /* cmp eax, 1 - flags set for next jcc */
    MEM32(edi + 0x34) = eax;
    if (CMP_NE(eax, 1)) goto loc_00266F5F; /* jne: not equal / not zero */

loc_00266F2A: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_00266F31: ;
    xmm0 = MEMF(0x648D34); /* movss */
    esp = esp + 4;
    if (CMP_EQ(eax, 0xFFF)) goto loc_00266F47; /* je: equal / zero */

loc_00266F43: ;
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */

loc_00266F47: ;
    PUSH32(esp, 0xC);
    MEMF(edi + 0x38) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_00266F53: ;
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    esp = esp + 4;
    MEMF(edi + 0x3C) = xmm0; /* movss */

loc_00266F5F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00266F70
 * Original: 0x00266F70 - 0x002670D1 (353 bytes, 105 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00266F70(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_00266F70: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x34);
    eax = eax - 0;
    if ((eax == 0)) goto loc_00266FEB; /* je: equal / zero */

loc_00266F7D: ;
    eax--;
    if ((eax != 0)) goto loc_002670C8; /* jne: not equal / not zero */

loc_00266F84: ;
    if (TEST_NZ(MEM8(0x876758), 1)) goto loc_00266F9E; /* jne: not equal / not zero */

loc_00266F8D: ;
    MEM32(0x876758) = MEM32(0x876758) | 1;
    eax = 0x8761E8;
    PUSH32(esp, 0); sub_00265DE0(); /* call 0x00265DE0 */

loc_00266F9E: ;
    xmm0 = MEMF(esi + 0x38); /* movss */
    /* ucomiss xmm0, MEMF(0x648D34) - sets EFLAGS */
    xmm1 = MEMF(esi + 0x3C); /* movss */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(0x876730) = xmm1; /* movss */
    MEMF(0x87672C) = xmm0; /* movss */
    if (1 /* jnp after test - parity */) goto loc_00266FCC; /* jnp: not parity */

loc_00266FC5: ;
    eax = 1;
    goto loc_00266FCE;

loc_00266FCC: ;
    eax = 0; /* xor self */

loc_00266FCE: ;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(0x876728) = LO8(eax);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002670C8; /* je: equal / zero */

loc_00266FDB: ;
    POP32(esp, esi);
    MEM8(0x876735) = 1;
    eax = 1;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00266FEB: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    eax = 0x862C40;
    PUSH32(esp, 0); sub_00296250(); /* call 0x00296250 */

loc_00266FF9: ;
    ebx = eax;
    if (TEST_Z(ebx, ebx)) { sub_002670D1(); return; } /* je: equal / zero */

loc_00267003: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_00267011; /* jne: not equal / not zero */

loc_0026700C: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_00267011: ;
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
    if (TEST_Z(esi, esi)) goto loc_0026705A; /* je: equal / zero */

loc_00267038: ;
    if (CMP_B(MEM32(esi + 0x80), 0x40)) goto loc_0026705A; /* jb: below (unsigned <) */

loc_00267041: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0026704B: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00267053: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_0026707B; /* jne: not equal / not zero */

loc_0026705A: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0026706C: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00267074: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_002670C7; /* je: equal / zero */

loc_0026707B: ;
    PUSH32(esp, 0); sub_00265B30(); /* call 0x00265B30 */

loc_00267080: ;
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_002670C7; /* je: equal / zero */

loc_00267086: ;
    PUSH32(esp, 0); sub_00265DB0(); /* call 0x00265DB0 */

loc_0026708B: ;
    ecx = MEM32(eax + 0x548);
    MEM32(esp + 0xC) = ecx;
    PUSH32(esp, 0); sub_00265DB0(); /* call 0x00265DB0 */

loc_0026709A: ;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(eax + 0x544);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x68), _icall_esp); /* indirect call */
    }

loc_002670AD: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x1F4);
    PUSH32(esp, 0); sub_004168D0(); /* call 0x004168D0 */

loc_002670B9: ;
    eax = MEM32(ebx + 0x9DC);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_002670C7: ;
    POP32(esp, edi);

loc_002670C8: ;
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002670E0
 * Original: 0x002670E0 - 0x0026718F (175 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002670E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002670E0: ;
    eax = MEM32(0x84A19C);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(eax, ebx)) goto loc_002670F3; /* jne: not equal / not zero */

loc_002670EE: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_002670F3: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (CMP_EQ(esi, ebx)) goto loc_0026713B; /* je: equal / zero */

loc_00267119: ;
    if (CMP_B(MEM32(esi + 0x80), 0x40)) goto loc_0026713B; /* jb: below (unsigned <) */

loc_00267122: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0026712C: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00267134: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_0026715C; /* jne: not equal / not zero */

loc_0026713B: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0026714D: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00267155: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) { sub_0026718F(); return; } /* je: equal / zero */

loc_0026715C: ;
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
    MEM32(eax) = 0x6021A0;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002671A0
 * Original: 0x002671A0 - 0x002671CF (47 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002671A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002671A0: ;
    PUSH32(esp, esi);
    esi = MEM32(eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_002671A9: ;
    if (TEST_NZ(eax, eax)) goto loc_002671C2; /* jne: not equal / not zero */

loc_002671AD: ;
    ecx = ZX16(MEM16(esi + 0x60));

loc_002671B1: ;
    edx = (uint32_t)(int32_t)SMEM8(eax + 0x862CCB);
    eax++;
    if (CMP_EQ(edx, ecx)) { sub_002671CF(); return; } /* je: equal / zero */

loc_002671BD: ;
    if (CMP_L(eax, 2)) goto loc_002671B1; /* jl: less (signed <) */

loc_002671C2: ;
    eax = 0; /* xor self */
    edx = 0; /* xor self */
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(edx, (TEST_NZ(eax, eax)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(edx));
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002671F0
 * Original: 0x002671F0 - 0x0026720D (29 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002671F0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_002671F0: ;
    ecx = MEM32(eax);
    xmm0 = MEMF(ecx + 0xDC); /* movss */
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) { sub_0026720D(); return; } /* jnp: not parity */

loc_00267207: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00267210
 * Original: 0x00267210 - 0x0026723C (44 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00267210(void)
{
    int _flags = 0; /* fallback flag var */

loc_00267210: ;
    eax = MEM32(eax);
    if (CMP_BE(MEM16(eax + 0x3AE), 0)) { sub_0026723C(); return; } /* jbe: below or equal (unsigned <=) */

loc_0026721C: ;
    ecx = MEM32(eax + 0x568);
    if (TEST_Z(ecx, ecx)) { sub_0026723C(); return; } /* je: equal / zero */

loc_00267226: ;
    edx = MEM32(ecx + 0x204);
    if (TEST_NZ(edx, edx)) { sub_0026723C(); return; } /* jne: not equal / not zero */

loc_00267230: ;
    if (CMP_NE(MEM32(eax + 0x64), 1)) { sub_0026723C(); return; } /* jne: not equal / not zero */

loc_00267236: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00267240
 * Original: 0x00267240 - 0x0026728F (79 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00267240(void)
{
    int _flags = 0; /* fallback flag var */

loc_00267240: ;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = esp + 4;
    eax = esi;
    PUSH32(esp, 0); sub_002671A0(); /* call 0x002671A0 */

loc_0026724D: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0026728C; /* je: equal / zero */

loc_00267251: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    eax = 0x862C40;
    PUSH32(esp, 0); sub_002964D0(); /* call 0x002964D0 */

loc_00267260: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0026728C; /* je: equal / zero */

loc_00267264: ;
    edi = esp + 4;
    eax = esi;
    PUSH32(esp, 0); sub_002671A0(); /* call 0x002671A0 */

loc_0026726F: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0026728C; /* je: equal / zero */

loc_00267273: ;
    ecx = MEM32(esp + 4);
    eax = 0x862C40;
    PUSH32(esp, 0); sub_002965F0(); /* call 0x002965F0 */

loc_00267281: ;
    ecx = MEM32(esi);
    eax = ZX16(MEM16(ecx + 0x60));
    PUSH32(esp, 0); sub_001F91E0(); /* call 0x001F91E0 */

loc_0026728C: ;
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00267290
 * Original: 0x00267290 - 0x002672D2 (66 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00267290(void)
{
    int _flags = 0; /* fallback flag var */

loc_00267290: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx + 0x568);
    if (TEST_Z(eax, eax)) { sub_002672D2(); return; } /* je: equal / zero */

loc_0026729C: ;
    eax = MEM32(eax + 0x444);
    if (TEST_Z(eax, eax)) { sub_002672D2(); return; } /* je: equal / zero */

loc_002672A6: ;
    eax = MEM32(eax + 0x284);
    if (TEST_Z(eax, eax)) { sub_002672D2(); return; } /* je: equal / zero */

loc_002672B0: ;
    eax = MEM32(eax + 0x50);
    SET_LO8(ecx, MEM8(eax + 0x300));
    eax = eax + 0x270;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_002672CC; /* jne: not equal / not zero */

loc_002672C2: ;
    SET_LO8(ecx, MEM8(eax + 0x91));
    if (TEST_Z(LO8(ecx), LO8(ecx))) { sub_002672D2(); return; } /* je: equal / zero */

loc_002672CC: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_002672E0
 * Original: 0x002672E0 - 0x0026731B (59 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002672E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002672E0: ;
    PUSH32(esp, esi);
    esi = MEM32(edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_002672E9: ;
    if (TEST_NZ(eax, eax)) goto loc_00267302; /* jne: not equal / not zero */

loc_002672ED: ;
    ecx = ZX16(MEM16(esi + 0x60));

loc_002672F1: ;
    edx = (uint32_t)(int32_t)SMEM8(eax + 0x862CCB);
    if (CMP_EQ(edx, ecx)) { sub_0026731B(); return; } /* je: equal / zero */

loc_002672FC: ;
    eax++;
    if (CMP_L(eax, 2)) goto loc_002672F1; /* jl: less (signed <) */

loc_00267302: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    edx = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_002806B0(); /* call 0x002806B0 */

loc_00267314: ;
    esp = esp + 0xC;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00267330
 * Original: 0x00267330 - 0x0026734C (28 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00267330(void)
{
    int _flags = 0; /* fallback flag var */

loc_00267330: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx + 0x568);
    if (TEST_Z(eax, eax)) { sub_0026734C(); return; } /* je: equal / zero */

loc_0026733C: ;
    ecx = MEM32(eax + 0x640);
    if (TEST_Z(ecx, ecx)) { sub_0026734C(); return; } /* je: equal / zero */

loc_00267346: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00267350
 * Original: 0x00267350 - 0x00267375 (37 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00267350(void)
{
    int _flags = 0; /* fallback flag var */

loc_00267350: ;
    eax = MEM32(ebx);
    eax = MEM32(eax + 0x568);
    esp = esp - 0x140;
    if (TEST_Z(eax, eax)) goto loc_0026736C; /* je: equal / zero */

loc_00267362: ;
    ecx = MEM32(eax + 0x640);
    if (TEST_NZ(ecx, ecx)) { sub_00267375(); return; } /* jne: not equal / not zero */

loc_0026736C: ;
    SET_LO8(eax, 0); /* xor self */
    esp = esp + 0x140;
    esp += 4; return; /* ret */

}

/**
 * sub_002673D0
 * Original: 0x002673D0 - 0x002673EA (26 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002673D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002673D0: ;
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, eax);
    eax = MEM32(ecx);
    PUSH32(esp, 0); sub_00289370(); /* call 0x00289370 */

loc_002673DC: ;
    esp = esp + 4;
    if (TEST_Z(esi, esi)) goto loc_002673E8; /* je: equal / zero */

loc_002673E3: ;
    edx = MEM32(esp);
    MEM32(esi) = edx;

loc_002673E8: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002673F0
 * Original: 0x002673F0 - 0x00267416 (38 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002673F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002673F0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = esp + 4;
    eax = esi;
    MEM32(esp + 4) = 0;
    PUSH32(esp, 0); sub_002671A0(); /* call 0x002671A0 */

loc_00267405: ;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    POP32(esp, edi);
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00267416(); return; } /* je: equal / zero */

loc_0026740A: ;
    eax = MEM32(esp);
    eax = ZX8(MEM8(eax + 0x864EBF));
    g_seh_ebp = ebp; sub_00267430(); return; /* tail jmp 0x00267430 */

}

/**
 * sub_00267450
 * Original: 0x00267450 - 0x0026746C (28 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00267450(void)
{
    int _flags = 0; /* fallback flag var */

loc_00267450: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx + 0x568);
    if (TEST_Z(eax, eax)) { sub_0026746C(); return; } /* je: equal / zero */

loc_0026745C: ;
    SET_LO8(ecx, MEM8(eax + 0x38D));
    if (TEST_Z(LO8(ecx), LO8(ecx))) { sub_0026746C(); return; } /* je: equal / zero */

loc_00267466: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00267470
 * Original: 0x00267470 - 0x002674B4 (68 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00267470(void)
{
    int _flags = 0; /* fallback flag var */

loc_00267470: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    PUSH32(esp, 0); sub_00267240(); /* call 0x00267240 */

loc_00267479: ;
    eax = MEM32(esi);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002C47B0(); /* call 0x002C47B0 */

loc_00267483: ;
    edi = MEM32(esi);
    esp = esp + 8;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_0026748E: ;
    if (TEST_NZ(eax, eax)) goto loc_002674B1; /* jne: not equal / not zero */

loc_00267492: ;
    ecx = ZX16(MEM16(edi + 0x60));
    goto loc_002674A0;

    /* nop */
    /* nop */

loc_002674A0: ;
    edx = (uint32_t)(int32_t)SMEM8(eax + 0x862CCB);
    if (CMP_EQ(edx, ecx)) { sub_002674B4(); return; } /* je: equal / zero */

loc_002674AB: ;
    eax++;
    if (CMP_L(eax, 2)) goto loc_002674A0; /* jl: less (signed <) */

loc_002674B1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002674D0
 * Original: 0x002674D0 - 0x0026759A (202 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002674D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002674D0: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    eax = MEM32(ebp);
    eax = MEM32(eax + 0x568);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(eax, eax)) goto loc_00267584; /* je: equal / zero */

loc_002674E8: ;
    eax = MEM32(eax + 0x444);
    ecx = MEM32(eax + 0x30);
    if (TEST_Z(ecx, ecx)) goto loc_002674F9; /* je: equal / zero */

loc_002674F5: ;
    eax = 0; /* xor self */
    goto loc_00267503;

loc_002674F9: ;
    ecx = MEM32(eax + 0x34);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x38);
    eax = ecx + eax + 0x40;

loc_00267503: ;
    edx = MEM32(eax + 8);
    eax = MEM32(eax + 0x1C);
    edx = (uint32_t)((int32_t)edx * (int32_t)0xD8);
    if (CMP_NE(MEM32(edx + eax + 0x14), 6)) goto loc_00267584; /* jne: not equal / not zero */

loc_00267516: ;
    eax = MEM32(0x875838);
    if (TEST_Z(eax, eax)) goto loc_00267539; /* je: equal / zero */

loc_0026751F: ;
    if (CMP_NE(MEM32(eax + 0x64), 4)) goto loc_00267539; /* jne: not equal / not zero */

loc_00267525: ;
    eax = MEM32(eax + 0x23C);
    if (TEST_Z(eax, eax)) goto loc_00267539; /* je: equal / zero */

loc_0026752F: ;
    PUSH32(esp, 0); sub_00315260(); /* call 0x00315260 */

loc_00267534: ;
    if (CMP_EQ(eax, MEM32(ebp))) goto loc_00267592; /* je: equal / zero */

loc_00267539: ;
    MEM32(0x875838) = 0;
    edi = 0x6D00;
    goto loc_00267550;

    /* nop */

loc_00267550: ;
    ecx = MEM32(0x84A5F8);
    eax = MEM32(edi + ecx + 0x64);
    (void)0; /* cmp eax, 4 - flags set for next jcc */
    esi = edi + ecx;
    if (CMP_NE(eax, 4)) goto loc_00267576; /* jne: not equal / not zero */

loc_00267562: ;
    eax = MEM32(esi + 0x23C);
    if (TEST_Z(eax, eax)) goto loc_00267576; /* je: equal / zero */

loc_0026756C: ;
    PUSH32(esp, 0); sub_00315260(); /* call 0x00315260 */

loc_00267571: ;
    if (CMP_EQ(eax, MEM32(ebp))) goto loc_0026758C; /* je: equal / zero */

loc_00267576: ;
    edi = edi + 0x6D0;
    if (CMP_L(edi, 0x36800)) goto loc_00267550; /* jl: less (signed <) */

loc_00267584: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_0026758C: ;
    MEM32(0x875838) = esi;

loc_00267592: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002675A0
 * Original: 0x002675A0 - 0x002675ED (77 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002675A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002675A0: ;
    ecx = MEM32(eax);
    SET_LO8(eax, MEM8(ecx + 0x250));
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_002675ED(); return; } /* je: equal / zero */

loc_002675AC: ;
    SET_LO8(ecx, MEM8(0x7819D5));
    if (TEST_Z(LO8(ecx), LO8(ecx))) { sub_002675ED(); return; } /* je: equal / zero */

loc_002675B6: ;
    edx = ZX8(LO8(eax));
    eax = MEM32(0x84A5F8);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x6D0);
    eax = edx + eax + -1744;
    eax = MEM32(eax + 0x68);
    if (CMP_EQ(eax, 0xA8)) goto loc_002675EA; /* je: equal / zero */

loc_002675D5: ;
    if (CMP_EQ(eax, 0xA9)) goto loc_002675EA; /* je: equal / zero */

loc_002675DC: ;
    if (CMP_EQ(eax, 0x118)) goto loc_002675EA; /* je: equal / zero */

loc_002675E3: ;
    if (CMP_NE(eax, 0x117)) { sub_002675ED(); return; } /* jne: not equal / not zero */

loc_002675EA: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_002675F0
 * Original: 0x002675F0 - 0x00267602 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002675F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002675F0: ;
    eax = MEM32(eax);
    if (TEST_Z(eax, eax)) { sub_00267602(); return; } /* je: equal / zero */

loc_002675F6: ;
    if (CMP_NE(MEM32(eax + 0x64), 1)) { sub_00267602(); return; } /* jne: not equal / not zero */

loc_002675FC: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00267610
 * Original: 0x00267610 - 0x00267629 (25 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00267610(void)
{
    int _flags = 0; /* fallback flag var */

loc_00267610: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx + 0x568);
    if (TEST_Z(eax, eax)) goto loc_00267626; /* je: equal / zero */

loc_0026761C: ;
    eax = MEM32(eax + 0x444);
    if (TEST_NZ(eax, eax)) { sub_00267629(); return; } /* jne: not equal / not zero */

loc_00267626: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_00267650
 * Original: 0x00267650 - 0x002676B8 (104 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00267650(void)
{
    int _flags = 0; /* fallback flag var */

loc_00267650: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    eax = MEM32(ebx);
    ecx = MEM32(eax + 0x568);
    if (TEST_Z(ecx, ecx)) goto loc_002676B4; /* je: equal / zero */

loc_00267661: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x444);
    if (TEST_Z(esi, esi)) goto loc_002676B3; /* je: equal / zero */

loc_0026766C: ;
    ecx = MEM32(esi + 0x34);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x38);
    ecx = MEM32(ecx + esi + 0x54);
    if (CMP_EQ(ecx, 0x13)) goto loc_002676B3; /* je: equal / zero */

loc_0026767B: ;
    if (CMP_EQ(ecx, 0x1E)) goto loc_002676B3; /* je: equal / zero */

loc_00267680: ;
    PUSH32(esp, edi);
    ecx = 0x1E;
    edi = 0x13;
    PUSH32(esp, 0); sub_00330280(); /* call 0x00330280 */

loc_00267690: ;
    if (TEST_Z(eax, eax)) goto loc_00267699; /* je: equal / zero */

loc_00267694: ;
    edi = 0x1E;

loc_00267699: ;
    eax = esi;
    PUSH32(esp, 0); sub_00330060(); /* call 0x00330060 */

loc_002676A0: ;
    edx = MEM32(ebx);
    eax = MEM32(edx + 0x568);
    SET_LO8(ecx, MEM8(esp + 0x14));
    MEM8(eax + 0x610) = LO8(ecx);
    POP32(esp, edi);

loc_002676B3: ;
    POP32(esp, esi);

loc_002676B4: ;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002676C0
 * Original: 0x002676C0 - 0x002676ED (45 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002676C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002676C0: ;
    eax = MEM32(eax);
    ecx = MEM32(eax + 0x568);
    eax = MEM32(ecx + 0x444);
    edx = MEM32(eax + 0x30);
    if (TEST_NZ(edx, edx)) { sub_002676ED(); return; } /* jne: not equal / not zero */

loc_002676D5: ;
    edx = MEM32(eax + 0x34);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x38);
    eax = edx + eax + 0x40;
    if (TEST_Z(eax, eax)) { sub_002676ED(); return; } /* je: equal / zero */

loc_002676E3: ;
    eax = MEM32(eax + 0x14);
    MEM32(ecx + 0x60C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00267700
 * Original: 0x00267700 - 0x00267749 (73 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00267700(void)
{
    int _flags = 0; /* fallback flag var */

loc_00267700: ;
    edx = MEM32(esi);
    eax = MEM32(edx + 0x568);
    ecx = MEM32(eax + 0x60C);
    if (TEST_Z(ecx, ecx)) goto loc_00267736; /* je: equal / zero */

loc_00267712: ;
    if (CMP_EQ(ecx, 0x13)) goto loc_00267736; /* je: equal / zero */

loc_00267717: ;
    ecx = MEM32(eax + 0x444);
    if (TEST_Z(ecx, ecx)) goto loc_00267736; /* je: equal / zero */

loc_00267721: ;
    edx = eax;
    eax = MEM32(edx + 0x444);
    PUSH32(esp, edi);
    edi = MEM32(edx + 0x60C);
    PUSH32(esp, 0); sub_00330060(); /* call 0x00330060 */

loc_00267735: ;
    POP32(esp, edi);

loc_00267736: ;
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x568);
    MEM32(ecx + 0x60C) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00267750
 * Original: 0x00267750 - 0x0026776E (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00267750(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00267750: ;
    if (TEST_S(eax, eax)) goto loc_0026776A; /* jl: less (signed <) */

loc_00267754: ;
    if (CMP_GE(eax, 2)) goto loc_0026776A; /* jge: greater or equal (signed >=) */

loc_00267759: ;
    eax = MEM32(ecx + eax * 4 + 0xA3C);
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    SET_LO8(ecx, (CMP_NE(eax, 0xFFFFFFFFu)) ? 1 : 0); /* setne */
    if (TEST_NZ(LO8(ecx), LO8(ecx))) { sub_0026776E(); return; } /* jne: not equal / not zero */

loc_0026776A: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_0026777C(); return; /* tail jmp 0x0026777C */

}

/**
 * sub_002677A0
 * Original: 0x002677A0 - 0x002677D8 (56 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002677A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002677A0: ;
    ecx = MEM32(eax);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(ecx + 0x20C));
    edx = 0; /* xor self */
    (void)0; /* cmp LO8(ebx), LO8(edx) - flags set for next jcc */
    POP32(esp, ebx);
    if (CMP_NE(LO8(ebx), LO8(edx))) { sub_002677D8(); return; } /* jne: not equal / not zero */

loc_002677B0: ;
    MEM8(ecx + 0x20C) = 0xFE;
    ecx = MEM32(eax);
    MEM8(ecx + 0x20D) = LO8(edx);
    ecx = MEM32(eax);
    PUSH32(esp, edx);
    MEM32(ecx + 0x210) = 0x21;
    eax = MEM32(eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_002F2950(); /* call 0x002F2950 */

loc_002677D4: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00267810
 * Original: 0x00267810 - 0x002678BF (175 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00267810(void)
{
    int _flags = 0; /* fallback flag var */

loc_00267810: ;
    eax = MEM32(0x84A19C);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(eax, ebx)) goto loc_00267823; /* jne: not equal / not zero */

loc_0026781E: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_00267823: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (CMP_EQ(esi, ebx)) goto loc_0026786B; /* je: equal / zero */

loc_00267849: ;
    if (CMP_B(MEM32(esi + 0x80), 0x34)) goto loc_0026786B; /* jb: below (unsigned <) */

loc_00267852: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0026785C: ;
    PUSH32(esp, 0x34);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00267864: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_0026788C; /* jne: not equal / not zero */

loc_0026786B: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0026787D: ;
    PUSH32(esp, 0x34);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00267885: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) { sub_002678BF(); return; } /* je: equal / zero */

loc_0026788C: ;
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
    MEM32(eax) = 0x6008D0;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002678D0
 * Original: 0x002678D0 - 0x002678E6 (22 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002678D0(void)
{

loc_002678D0: ;
    eax = MEM32(ecx + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_002678DF: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002678F0
 * Original: 0x002678F0 - 0x0026790A (26 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002678F0(void)
{

loc_002678F0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x20);
    edi = ecx;
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_002678FF: ;
    esp = esp + 4;
    MEM32(edi + 0xC) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00267910
 * Original: 0x00267910 - 0x002679BF (175 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00267910(void)
{
    int _flags = 0; /* fallback flag var */

loc_00267910: ;
    eax = MEM32(0x84A19C);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(eax, ebx)) goto loc_00267923; /* jne: not equal / not zero */

loc_0026791E: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_00267923: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (CMP_EQ(esi, ebx)) goto loc_0026796B; /* je: equal / zero */

loc_00267949: ;
    if (CMP_B(MEM32(esi + 0x80), 0x34)) goto loc_0026796B; /* jb: below (unsigned <) */

loc_00267952: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0026795C: ;
    PUSH32(esp, 0x34);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00267964: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_0026798C; /* jne: not equal / not zero */

loc_0026796B: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0026797D: ;
    PUSH32(esp, 0x34);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00267985: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) { sub_002679BF(); return; } /* je: equal / zero */

loc_0026798C: ;
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
    MEM32(eax) = 0x6005F0;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002679D0
 * Original: 0x002679D0 - 0x002679F7 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002679D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002679D0: ;
    (void)0; /* test MEM8(esp + 4), 1 - flags set for next jcc */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x6022B4;
    if (TEST_Z(MEM8(esp + 4), 1)) goto loc_002679F1; /* je: equal / zero */

loc_002679E0: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_002679EE: ;
    esp = esp + 4;

loc_002679F1: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00267A00
 * Original: 0x00267A00 - 0x00267A52 (82 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00267A00(void)
{
    int _flags = 0; /* fallback flag var */

loc_00267A00: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 4;
    MEM32(esi) = 0x6022B0;
    PUSH32(esp, 0); sub_00267B60(); /* call 0x00267B60 */

loc_00267A13: ;
    eax = MEM32(edi + 4);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 8) = eax;
    if (TEST_Z(eax, eax)) goto loc_00267A2B; /* je: equal / zero */

loc_00267A1E: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00267A28: ;
    esp = esp + 4;

loc_00267A2B: ;
    (void)0; /* test MEM8(esp + 0x10), 1 - flags set for next jcc */
    MEM32(edi + 4) = 0;
    if (TEST_Z(MEM8(esp + 0x10), 1)) goto loc_00267A4A; /* je: equal / zero */

loc_00267A39: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    MEM32(esp + 0x14) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00267A47: ;
    esp = esp + 4;

loc_00267A4A: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00267A60
 * Original: 0x00267A60 - 0x00267AB3 (83 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00267A60(void)
{
    int _flags = 0; /* fallback flag var */

loc_00267A60: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x20;
    PUSH32(esp, edi);
    MEM32(esi) = 0x6022AC;
    PUSH32(esp, 0); sub_00267BC0(); /* call 0x00267BC0 */

loc_00267A74: ;
    eax = MEM32(edi + 4);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 8) = eax;
    if (TEST_Z(eax, eax)) goto loc_00267A8C; /* je: equal / zero */

loc_00267A7F: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00267A89: ;
    esp = esp + 4;

loc_00267A8C: ;
    (void)0; /* test MEM8(esp + 0x10), 1 - flags set for next jcc */
    MEM32(edi + 4) = 0;
    if (TEST_Z(MEM8(esp + 0x10), 1)) goto loc_00267AAB; /* je: equal / zero */

loc_00267A9A: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    MEM32(esp + 0x14) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00267AA8: ;
    esp = esp + 4;

loc_00267AAB: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00267AC0
 * Original: 0x00267AC0 - 0x00267B3B (123 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00267AC0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00267AC0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47F560);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    esp = esp - 0x20;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x461);
    PUSH32(esp, 0x606A34);
    PUSH32(esp, 0x38);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_00267AF4: ;
    esp = esp + 0x10;
    MEM32(ebp + -20) = eax;
    MEM32(ebp + -4) = 0;
    MEM32(ebp + -28) = eax;
    MEM32(ebp + -32) = eax;
    if (TEST_Z(eax, eax)) goto loc_00267B0D; /* je: equal / zero */

loc_00267B0B: ;
    MEM32(eax) = eax;

loc_00267B0D: ;
    MEM32(ebp + -36) = 1;
    ecx = eax + 4;
    MEM32(ebp + -40) = ecx;
    MEM32(ebp + -44) = ecx;
    if (TEST_Z(ecx, ecx)) goto loc_00267B23; /* je: equal / zero */

loc_00267B21: ;
    MEM32(ecx) = eax;

loc_00267B23: ;
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    ecx = MEM32(ebp + -12);
    MEM32(0) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00267B60
 * Original: 0x00267B60 - 0x00267BBE (94 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00267B60(void)
{
    int _flags = 0; /* fallback flag var */

loc_00267B60: ;
    eax = MEM32(edi + 4);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    MEM32(eax) = eax;
    eax = MEM32(edi + 4);
    MEM32(eax + 4) = eax;
    (void)0; /* cmp esi, MEM32(edi + 4) - flags set for next jcc */
    MEM32(edi + 8) = 0;
    if (CMP_EQ(esi, MEM32(edi + 4))) goto loc_00267BBC; /* je: equal / zero */

loc_00267B7A: ;
    PUSH32(esp, ebx);
    goto loc_00267B80;

    /* nop */

loc_00267B80: ;
    ebx = MEM32(esi);
    PUSH32(esp, esi);
    MEM32(esi + 8) = 0x6022B4;
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_00267B8F: ;
    if (TEST_NZ(eax, eax)) goto loc_00267BB4; /* jne: not equal / not zero */

loc_00267B93: ;
    eax = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    eax++;
    edx--;
    PUSH32(esp, esi);
    MEM32(0x7FA490) = eax;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_00267BB1: ;
    esp = esp + 4;

loc_00267BB4: ;
    (void)0; /* cmp ebx, MEM32(edi + 4) - flags set for next jcc */
    esi = ebx;
    if (CMP_NE(ebx, MEM32(edi + 4))) goto loc_00267B80; /* jne: not equal / not zero */

loc_00267BBB: ;
    POP32(esp, ebx);

loc_00267BBC: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00267BC0
 * Original: 0x00267BC0 - 0x00267C7D (189 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00267BC0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00267BC0: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 4);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    MEM32(eax) = eax;
    eax = MEM32(ecx + 4);
    MEM32(eax + 4) = eax;
    (void)0; /* cmp esi, MEM32(ecx + 4) - flags set for next jcc */
    MEM32(ecx + 8) = 0;
    if (CMP_EQ(esi, MEM32(ecx + 4))) goto loc_00267C79; /* je: equal / zero */

loc_00267BE2: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    goto loc_00267BF0;

    /* nop */
    edi = edi;

loc_00267BF0: ;
    ebp = MEM32(esi);
    edi = esi + 0xC;
    MEM32(esi + 8) = 0x6022B0;
    PUSH32(esp, 0); sub_00267B60(); /* call 0x00267B60 */

loc_00267C01: ;
    ebx = MEM32(edi + 4);
    if (TEST_Z(ebx, ebx)) goto loc_00267C33; /* je: equal / zero */

loc_00267C08: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_00267C0E: ;
    if (TEST_NZ(eax, eax)) goto loc_00267C33; /* jne: not equal / not zero */

loc_00267C12: ;
    eax = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    eax++;
    edx--;
    PUSH32(esp, ebx);
    MEM32(0x7FA490) = eax;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_00267C30: ;
    esp = esp + 4;

loc_00267C33: ;
    PUSH32(esp, esi);
    MEM32(edi + 4) = 0;
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_00267C40: ;
    if (TEST_NZ(eax, eax)) goto loc_00267C67; /* jne: not equal / not zero */

loc_00267C44: ;
    edi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    edi++;
    edx--;
    PUSH32(esp, esi);
    MEM32(0x7FA490) = edi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_00267C64: ;
    esp = esp + 4;

loc_00267C67: ;
    eax = MEM32(esp + 0x14);
    (void)0; /* cmp ebp, MEM32(eax + 4) - flags set for next jcc */
    esi = ebp;
    if (CMP_NE(ebp, MEM32(eax + 4))) goto loc_00267BF0; /* jne: not equal / not zero */

loc_00267C76: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00267C79: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00267C80
 * Original: 0x00267C80 - 0x00267D33 (179 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00267C80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00267C80: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 4);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    MEM32(eax) = eax;
    eax = MEM32(ecx + 4);
    MEM32(eax + 4) = eax;
    (void)0; /* cmp esi, MEM32(ecx + 4) - flags set for next jcc */
    MEM32(ecx + 8) = 0;
    if (CMP_EQ(esi, MEM32(ecx + 4))) goto loc_00267D2F; /* je: equal / zero */

loc_00267CA2: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);

loc_00267CA5: ;
    ebp = MEM32(esi);
    edi = esi + 0x28;
    PUSH32(esp, edi);
    MEM32(esi + 8) = 0x6022AC;
    PUSH32(esp, 0); sub_00267BC0(); /* call 0x00267BC0 */

loc_00267CB7: ;
    ebx = MEM32(edi + 4);
    if (TEST_Z(ebx, ebx)) goto loc_00267CE9; /* je: equal / zero */

loc_00267CBE: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_00267CC4: ;
    if (TEST_NZ(eax, eax)) goto loc_00267CE9; /* jne: not equal / not zero */

loc_00267CC8: ;
    eax = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    eax++;
    edx--;
    PUSH32(esp, ebx);
    MEM32(0x7FA490) = eax;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_00267CE6: ;
    esp = esp + 4;

loc_00267CE9: ;
    PUSH32(esp, esi);
    MEM32(edi + 4) = 0;
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_00267CF6: ;
    if (TEST_NZ(eax, eax)) goto loc_00267D1D; /* jne: not equal / not zero */

loc_00267CFA: ;
    edi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    edi++;
    edx--;
    PUSH32(esp, esi);
    MEM32(0x7FA490) = edi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_00267D1A: ;
    esp = esp + 4;

loc_00267D1D: ;
    eax = MEM32(esp + 0x14);
    (void)0; /* cmp ebp, MEM32(eax + 4) - flags set for next jcc */
    esi = ebp;
    if (CMP_NE(ebp, MEM32(eax + 4))) goto loc_00267CA5; /* jne: not equal / not zero */

loc_00267D2C: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00267D2F: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00267D40
 * Original: 0x00267D40 - 0x00267DAE (110 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00267D40(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_00267D40: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_004257A0(); /* call 0x004257A0 */

loc_00267D46: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edi = 0x32;
    PUSH32(esp, 0); sub_004253B0(); /* call 0x004253B0 */

loc_00267D5E: ;
    PUSH32(esp, 0); sub_00425640(); /* call 0x00425640 */

loc_00267D63: ;
    PUSH32(esp, 0); sub_004255D0(); /* call 0x004255D0 */

loc_00267D68: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_004256B0(); /* call 0x004256B0 */

loc_00267D71: ;
    SET_LO8(eax, MEM8(0x7FA23C));
    xmm2 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x7F9F4C); /* movss */
    esp = esp + 0x14;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    POP32(esp, edi);
    xmm0 = xmm2; /* movaps */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00267D8F; /* jne: not equal / not zero */

loc_00267D8C: ;
    xmm0 = xmm1; /* movaps */

loc_00267D8F: ;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = xmm0 + MEMF(0x648D1C); /* addss */
    MEMF(esi + 8) = xmm0; /* movss */
    xmm0 = xmm2; /* movaps */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00267DA6; /* jne: not equal / not zero */

loc_00267DA3: ;
    xmm0 = xmm1; /* movaps */

loc_00267DA6: ;
    MEMF(esi + 0xC) = xmm0; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00267DB0
 * Original: 0x00267DB0 - 0x00267E12 (98 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00267DB0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_00267DB0: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_004257A0(); /* call 0x004257A0 */

loc_00267DB6: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    edi = 0x32;
    PUSH32(esp, 0); sub_004254D0(); /* call 0x004254D0 */

loc_00267DC4: ;
    PUSH32(esp, 0); sub_00425640(); /* call 0x00425640 */

loc_00267DC9: ;
    PUSH32(esp, 0); sub_004255D0(); /* call 0x004255D0 */

loc_00267DCE: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_004256B0(); /* call 0x004256B0 */

loc_00267DD7: ;
    SET_LO8(eax, MEM8(0x7FA23C));
    xmm2 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x7F9F4C); /* movss */
    esp = esp + 0xC;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    POP32(esp, edi);
    xmm0 = xmm2; /* movaps */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00267DF5; /* jne: not equal / not zero */

loc_00267DF2: ;
    xmm0 = xmm1; /* movaps */

loc_00267DF5: ;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = xmm0 + MEMF(0x648D1C); /* addss */
    MEMF(esi + 8) = xmm0; /* movss */
    xmm0 = xmm2; /* movaps */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00267E0C; /* jne: not equal / not zero */

loc_00267E09: ;
    xmm0 = xmm1; /* movaps */

loc_00267E0C: ;
    MEMF(esi + 0xC) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00267E20
 * Original: 0x00267E20 - 0x00267F13 (243 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00267E20(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_00267E20: ;
    ecx = MEM32(0x84C00C);
    esp = esp - 0x18;
    (void)0; /* cmp ecx, 2 - flags set for next jcc */
    PUSH32(esp, esi);
    if (CMP_NE(ecx, 2)) { sub_00267F13(); return; } /* jne: not equal / not zero */

loc_00267E33: ;
    SET_LO8(ecx, MEM8(0x7FA23C));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    xmm2 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x7F9F4C); /* movss */
    xmm0 = xmm2; /* movaps */
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00267E4E; /* jne: not equal / not zero */

loc_00267E4B: ;
    xmm0 = xmm1; /* movaps */

loc_00267E4E: ;
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    xmm0 = xmm0 + MEMF(0x648D1C); /* addss */
    MEMF(eax + 8) = xmm0; /* movss */
    xmm0 = xmm2; /* movaps */
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00267E65; /* jne: not equal / not zero */

loc_00267E62: ;
    xmm0 = xmm1; /* movaps */

loc_00267E65: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x14);
    MEMF(eax + 0xC) = xmm0; /* movss */
    esp = esp - 0xC;
    eax = esp;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x24);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    eax = 0; /* xor self */
    ecx = edi;
    PUSH32(esp, 0); sub_002693D0(); /* call 0x002693D0 */

loc_00267E8C: ;
    eax = MEM32(0x84C010);
    esi = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_00267EE1; /* jle: less or equal (signed <=) */

loc_00267E97: ;
    eax = esp + 4;
    PUSH32(esp, 0); sub_00425C40(); /* call 0x00425C40 */

loc_00267EA0: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00267ED7; /* je: equal / zero */

loc_00267EA4: ;
    eax = esp + 8;
    PUSH32(esp, 0); sub_00425B90(); /* call 0x00425B90 */

loc_00267EAD: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00267ED7; /* je: equal / zero */

loc_00267EB1: ;
    eax = esi;
    PUSH32(esp, 0); sub_00425890(); /* call 0x00425890 */

loc_00267EB8: ;
    edx = MEM32(esp + 4);
    MEM32(esp + 0x10) = eax;
    eax = MEM32(esp + 8);
    MEM32(esp + 0x18) = eax;
    ecx = esp + 0x10;
    eax = edi;
    MEM32(esp + 0x14) = edx;
    PUSH32(esp, 0); sub_002692D0(); /* call 0x002692D0 */

loc_00267ED7: ;
    eax = MEM32(0x84C010);
    esi++;
    if (CMP_L(esi, eax)) goto loc_00267E97; /* jl: less (signed <) */

loc_00267EE1: ;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_00267F09; /* je: equal / zero */

loc_00267EEA: ;
    (void)0; /* cmp MEM32(0x84C00C), 2 - flags set for next jcc */
    SET_LO8(ecx, (CMP_EQ(MEM32(0x84C00C), 2)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647438);
    PUSH32(esp, 0x1DC6);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00267F06: ;
    esp = esp + 0x10;

loc_00267F09: ;
    eax = MEM32(0x84C040);
    POP32(esp, esi);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_00267F20
 * Original: 0x00267F20 - 0x00268047 (295 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00267F20(void)
{
    int _flags = 0; /* fallback flag var */

loc_00267F20: ;
    eax = MEM32(esi + 4);
    esp = esp - 0x10;
    if (TEST_Z(eax, eax)) goto loc_00267F39; /* je: equal / zero */

loc_00267F2A: ;
    MEM32(esp) = eax;
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00267F36: ;
    esp = esp + 4;

loc_00267F39: ;
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x602440;
    MEM32(esi + 4) = 0;
    MEM32(esi + 8) = 0;
    MEM32(esi + 0xC) = 0;
    MEM32(esp + 4) = 0x602410;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_00267F62: ;
    MEM32(esp + 0xC) = eax;
    ecx = esp + 4;
    eax = esi;
    PUSH32(esp, 0); sub_002692D0(); /* call 0x002692D0 */

loc_00267F71: ;
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x6023F4;
    MEM32(esp + 4) = 0x6023D8;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_00267F85: ;
    MEM32(esp + 0xC) = eax;
    ecx = esp + 4;
    eax = esi;
    PUSH32(esp, 0); sub_002692D0(); /* call 0x002692D0 */

loc_00267F94: ;
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x6023F4;
    MEM32(esp + 4) = 0x6023B4;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_00267FA8: ;
    MEM32(esp + 0xC) = eax;
    ecx = esp + 4;
    eax = esi;
    PUSH32(esp, 0); sub_002692D0(); /* call 0x002692D0 */

loc_00267FB7: ;
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x6023F4;
    MEM32(esp + 4) = 0x60238C;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_00267FCB: ;
    MEM32(esp + 0xC) = eax;
    ecx = esp + 4;
    eax = esi;
    PUSH32(esp, 0); sub_002692D0(); /* call 0x002692D0 */

loc_00267FDA: ;
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x6023F4;
    MEM32(esp + 4) = 0x602370;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_00267FEE: ;
    MEM32(esp + 0xC) = eax;
    ecx = esp + 4;
    eax = esi;
    PUSH32(esp, 0); sub_002692D0(); /* call 0x002692D0 */

loc_00267FFD: ;
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x6023F4;
    MEM32(esp + 4) = 0x602340;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_00268011: ;
    MEM32(esp + 0xC) = eax;
    ecx = esp + 4;
    eax = esi;
    PUSH32(esp, 0); sub_002692D0(); /* call 0x002692D0 */

loc_00268020: ;
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x602440;
    MEM32(esp + 4) = 0x602320;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_00268034: ;
    MEM32(esp + 0xC) = eax;
    ecx = esp + 4;
    eax = esi;
    PUSH32(esp, 0); sub_002692D0(); /* call 0x002692D0 */

loc_00268043: ;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00268050
 * Original: 0x00268050 - 0x00268070 (32 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00268050(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00268050: ;
    ecx = MEM32(edi + 0xC);
    edx = MEM32(eax + 4);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    ecx = MEM32(edi + 4);
    ecx = ecx + ecx * 4;
    PUSH32(esp, esi);
    esi = edx + ecx * 4;
    if (TEST_NZ(ecx, ecx)) { sub_00268070(); return; } /* jne: not equal / not zero */

loc_00268064: ;
    PUSH32(esp, ebx);
    ebx = MEM32(edi + 8);
    PUSH32(esp, 0); sub_00267DB0(); /* call 0x00267DB0 */

loc_0026806D: ;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_0026807D(); return; /* tail jmp 0x0026807D */

}

/**
 * sub_002680C0
 * Original: 0x002680C0 - 0x002680D0 (16 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002680C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002680C0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = eax;
    if (CMP_NE(MEM8(edi), 0)) { sub_002680D0(); return; } /* jne: not equal / not zero */

loc_002680C9: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00268140
 * Original: 0x00268140 - 0x00268374 (564 bytes, 133 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00268140(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_00268140: ;
    esp = esp - 0x14;
    PUSH32(esp, esi);
    esi = edi + 0x10;
    PUSH32(esp, 0); sub_00267F20(); /* call 0x00267F20 */

loc_0026814C: ;
    SET_LO8(eax, MEM8(0x7FA23C));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm1 = MEMF(0x7F9F4C); /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(esp + 4) = 0x5F7554;
    MEM32(esp + 8) = 4;
    POP32(esp, esi);
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00268174; /* jne: not equal / not zero */

loc_00268171: ;
    xmm0 = xmm1; /* movaps */

loc_00268174: ;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = xmm0 + MEMF(0x648D1C); /* addss */
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0026818C; /* jne: not equal / not zero */

loc_00268189: ;
    xmm0 = xmm1; /* movaps */

loc_0026818C: ;
    ecx = esp;
    eax = edi;
    MEMF(esp + 0xC) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00269350(); /* call 0x00269350 */

loc_0026819C: ;
    SET_LO8(eax, MEM8(0x7FA23C));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm1 = MEMF(0x7F9F4C); /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(esp) = 0x602314;
    MEM32(esp + 4) = 5;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002681C2; /* jne: not equal / not zero */

loc_002681BF: ;
    xmm0 = xmm1; /* movaps */

loc_002681C2: ;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = xmm0 + MEMF(0x648D1C); /* addss */
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002681DA; /* jne: not equal / not zero */

loc_002681D7: ;
    xmm0 = xmm1; /* movaps */

loc_002681DA: ;
    ecx = esp;
    eax = edi;
    MEMF(esp + 0xC) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00269350(); /* call 0x00269350 */

loc_002681EA: ;
    SET_LO8(eax, MEM8(0x7FA23C));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm1 = MEMF(0x7F9F4C); /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(esp) = 0x602304;
    MEM32(esp + 4) = 6;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00268210; /* jne: not equal / not zero */

loc_0026820D: ;
    xmm0 = xmm1; /* movaps */

loc_00268210: ;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = xmm0 + MEMF(0x648D1C); /* addss */
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00268228; /* jne: not equal / not zero */

loc_00268225: ;
    xmm0 = xmm1; /* movaps */

loc_00268228: ;
    ecx = esp;
    eax = edi;
    MEMF(esp + 0xC) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00269350(); /* call 0x00269350 */

loc_00268238: ;
    SET_LO8(eax, MEM8(0x7FA23C));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm1 = MEMF(0x7F9F4C); /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(esp) = 0x6022F0;
    MEM32(esp + 4) = 7;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0026825E; /* jne: not equal / not zero */

loc_0026825B: ;
    xmm0 = xmm1; /* movaps */

loc_0026825E: ;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = xmm0 + MEMF(0x648D1C); /* addss */
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00268276; /* jne: not equal / not zero */

loc_00268273: ;
    xmm0 = xmm1; /* movaps */

loc_00268276: ;
    ecx = esp;
    eax = edi;
    MEMF(esp + 0xC) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00269350(); /* call 0x00269350 */

loc_00268286: ;
    SET_LO8(eax, MEM8(0x7FA23C));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm1 = MEMF(0x7F9F4C); /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(esp) = 0x6022E0;
    MEM32(esp + 4) = 8;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002682AC; /* jne: not equal / not zero */

loc_002682A9: ;
    xmm0 = xmm1; /* movaps */

loc_002682AC: ;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = xmm0 + MEMF(0x648D1C); /* addss */
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002682C4; /* jne: not equal / not zero */

loc_002682C1: ;
    xmm0 = xmm1; /* movaps */

loc_002682C4: ;
    ecx = esp;
    eax = edi;
    MEMF(esp + 0xC) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00269350(); /* call 0x00269350 */

loc_002682D4: ;
    SET_LO8(eax, MEM8(0x7FA23C));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm1 = MEMF(0x7F9F4C); /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(esp) = 0x6022C8;
    MEM32(esp + 4) = 9;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002682FA; /* jne: not equal / not zero */

loc_002682F7: ;
    xmm0 = xmm1; /* movaps */

loc_002682FA: ;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = xmm0 + MEMF(0x648D1C); /* addss */
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00268312; /* jne: not equal / not zero */

loc_0026830F: ;
    xmm0 = xmm1; /* movaps */

loc_00268312: ;
    ecx = esp;
    eax = edi;
    MEMF(esp + 0xC) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00269350(); /* call 0x00269350 */

loc_00268322: ;
    SET_LO8(eax, MEM8(0x7FA23C));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm1 = MEMF(0x7F9F4C); /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(esp) = 0x6022B8;
    MEM32(esp + 4) = 0xA;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00268348; /* jne: not equal / not zero */

loc_00268345: ;
    xmm0 = xmm1; /* movaps */

loc_00268348: ;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = xmm0 + MEMF(0x648D1C); /* addss */
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00268360; /* jne: not equal / not zero */

loc_0026835D: ;
    xmm0 = xmm1; /* movaps */

loc_00268360: ;
    ecx = esp;
    eax = edi;
    MEMF(esp + 0xC) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00269350(); /* call 0x00269350 */

loc_00268370: ;
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00268380
 * Original: 0x00268380 - 0x002683E7 (103 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00268380(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00268380: ;
    edx = MEM32(esp + 4);
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, edi);
    edi = eax;
    eax = 0; /* xor self */
    MEM32(edi + 4) = eax;
    MEM32(edi + 8) = eax;
    MEM32(edi + 0xC) = eax;
    MEM32(edi + 0x14) = eax;
    MEM32(edi + 0x18) = eax;
    MEM32(edi + 0x1C) = eax;
    MEM32(edi + 0x20) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(edi + 0x2C) = ecx;
    (void)0; /* cmp MEM8(0x7FA23C), LO8(eax) - flags set for next jcc */
    MEM32(edi + 0x28) = edx;
    MEM8(edi + 0x30) = LO8(eax);
    if (CMP_NE(MEM8(0x7FA23C), LO8(eax))) goto loc_002683BE; /* jne: not equal / not zero */

loc_002683B6: ;
    xmm0 = MEMF(0x7F9F4C); /* movss */

loc_002683BE: ;
    eax = MEM32(0x849DF8);
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    MEMF(edi + 0x40) = xmm0; /* movss */
    MEMF(edi + 0x44) = xmm0; /* movss */
    if (CMP_NE(eax, 0xFFFFFFFFu)) { sub_002683E7(); return; } /* jne: not equal / not zero */

loc_002683D2: ;
    MEM32(0x849DF8) = 1;
    PUSH32(esp, 0); sub_00268140(); /* call 0x00268140 */

loc_002683E1: ;
    eax = edi;
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00268410
 * Original: 0x00268410 - 0x0026845A (74 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00268410(void)
{
    int _flags = 0; /* fallback flag var */

loc_00268410: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_004257A0(); /* call 0x004257A0 */

loc_00268416: ;
    edx = MEM32(esi + 0x20);
    eax = MEM32(esi + 4);
    edx++;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 0x20) = edx;
    edi = edx;
    if (TEST_Z(eax, eax)) goto loc_00268440; /* je: equal / zero */

loc_00268426: ;
    ecx = MEM32(esi + 8);
    ecx = ecx - eax;
    eax = 0x66666667;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)((int32_t)edx >> 3);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    if (CMP_B(edi, eax)) goto loc_00268447; /* jb: below (unsigned <) */

loc_00268440: ;
    MEM32(esi + 0x20) = 0;

loc_00268447: ;
    eax = 1;
    MEM8(esi + 0x30) = LO8(eax);
    ecx = MEM32(esi + 0x20);
    MEM32(esi + 0x34) = ecx;
    MEM32(esi + 0x3C) = eax;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00268460
 * Original: 0x00268460 - 0x002684C1 (97 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00268460(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00268460: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    ebx = 0; /* xor self */
    /* nop */

loc_00268470: ;
    esi = MEM32(ebp + 4);
    if (TEST_Z(esi, esi)) { sub_002684C1(); return; } /* je: equal / zero */

loc_00268477: ;
    ecx = MEM32(ebp + 8);
    ecx = ecx - esi;
    eax = 0x66666667;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)((int32_t)edx >> 3);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    if (CMP_AE(edi, eax)) { sub_002684C1(); return; } /* jae: above or equal (unsigned >=) */

loc_00268491: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_0026849B: ;
    edx = MEM32(ebx + esi);
    PUSH32(esp, 0); sub_003448B0(); /* call 0x003448B0 */

loc_002684A3: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x18);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(ebx + esi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00424DC0(); /* call 0x00424DC0 */

loc_002684B8: ;
    esp = esp + 0xC;
    edi++;
    ebx = ebx + 0x14;
    goto loc_00268470;

}

/**
 * sub_002684D0
 * Original: 0x002684D0 - 0x00268525 (85 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002684D0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_002684D0: ;
    PUSH32(esp, 0); sub_00424F30(); /* call 0x00424F30 */

loc_002684D5: ;
    PUSH32(esp, 0); sub_00424980(); /* call 0x00424980 */

loc_002684DA: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00268460(); /* call 0x00268460 */

loc_002684E6: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00424E50(); /* call 0x00424E50 */

loc_002684EF: ;
    eax = MEM32(0x84BFE4);
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_00268522; /* je: equal / zero */

loc_002684FB: ;
    PUSH32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x60245C;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_00268508: ;
    esi = eax;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_0003C1E0(); /* call 0x0003C1E0 */

loc_00268511: ;
    xmm0 = MEMF(0x648D20); /* movss */
    MEM32(eax + 0x1C) = esi;
    MEMF(eax + 0x20) = xmm0; /* movss */
    POP32(esp, esi);

loc_00268522: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00268530
 * Original: 0x00268530 - 0x00268560 (48 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00268530(void)
{
    int _flags = 0; /* fallback flag var */

loc_00268530: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = eax;
    PUSH32(esp, esi);
    eax = esi + 0x30;
    PUSH32(esp, 0); sub_002680C0(); /* call 0x002680C0 */

loc_0026853F: ;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00268560(); return; } /* je: equal / zero */

loc_00268543: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(esi + 0x14);
    eax = eax + eax * 2;
    edx = MEM32(ecx + eax * 4);
    eax = ecx + eax * 4;
    MEM32(ebx) = edx;
    eax = MEM32(eax + 8);
    MEM32(edi) = eax;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002685D0
 * Original: 0x002685D0 - 0x00268678 (168 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002685D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002685D0: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_002685DE; /* jne: not equal / not zero */

loc_002685D9: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_002685DE: ;
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
    if (TEST_Z(esi, esi)) goto loc_0026862A; /* je: equal / zero */

loc_00268606: ;
    if (CMP_B(MEM32(esi + 0x80), 0x50)) goto loc_0026862A; /* jb: below (unsigned <) */

loc_0026860F: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00268619: ;
    PUSH32(esp, 0x50);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00268621: ;
    esi = eax;
    esp = esp + 8;
    if (TEST_NZ(esi, esi)) goto loc_0026864D; /* jne: not equal / not zero */

loc_0026862A: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0026863C: ;
    PUSH32(esp, 0x50);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00268644: ;
    esi = eax;
    esp = esp + 8;
    if (TEST_Z(esi, esi)) { sub_00268678(); return; } /* je: equal / zero */

loc_0026864D: ;
    eax = ZX8(MEM8(esp + 0xC));
    PUSH32(esp, 0); sub_004202D0(); /* call 0x004202D0 */

loc_00268657: ;
    ecx = MEM32(0x849DF0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0); sub_00268380(); /* call 0x00268380 */

loc_00268666: ;
    POP32(esp, edi);
    MEM32(0x849DEC) = eax;
    MEM32(0x849DF0) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00268690
 * Original: 0x00268690 - 0x002686D7 (71 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00268690(void)
{
    int _flags = 0; /* fallback flag var */

loc_00268690: ;
    PUSH32(esp, esi);
    esi = MEM32(0x849DEC);
    PUSH32(esp, 0); sub_004257A0(); /* call 0x004257A0 */

loc_0026869C: ;
    eax = MEM32(esi + 0x20);
    if (TEST_NZ(eax, eax)) goto loc_002686C0; /* jne: not equal / not zero */

loc_002686A3: ;
    eax = MEM32(esi + 4);
    if (TEST_Z(eax, eax)) goto loc_002686C0; /* je: equal / zero */

loc_002686AA: ;
    ecx = MEM32(esi + 8);
    ecx = ecx - eax;
    eax = 0x66666667;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)((int32_t)edx >> 3);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;

loc_002686C0: ;
    eax--;
    MEM32(esi + 0x20) = eax;
    eax = 1;
    MEM8(esi + 0x30) = LO8(eax);
    ecx = MEM32(esi + 0x20);
    MEM32(esi + 0x34) = ecx;
    MEM32(esi + 0x3C) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002686E0
 * Original: 0x002686E0 - 0x00268713 (51 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002686E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002686E0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(0x849DEC);
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, edi);
    edi = esi;
    if (TEST_Z(esi, esi)) goto loc_00268705; /* je: equal / zero */

loc_002686EF: ;
    PUSH32(esp, 0); sub_00268720(); /* call 0x00268720 */

loc_002686F4: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = edi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00268702: ;
    esp = esp + 4;

loc_00268705: ;
    POP32(esp, edi);
    MEM32(0x849DEC) = 0;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00268720
 * Original: 0x00268720 - 0x0026877B (91 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00268720(void)
{
    int _flags = 0; /* fallback flag var */

loc_00268720: ;
    PUSH32(esp, ecx);
    MEM32(0x849DF8) = MEM32(0x849DF8) - 1;
    if ((MEM32(0x849DF8) != 0)) goto loc_00268733; /* jne: not equal / not zero */

loc_00268729: ;
    MEM32(0x849DF8) = 0xFFFFFFFFu;

loc_00268733: ;
    eax = MEM32(esi + 0x14);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_EQ(eax, edi)) goto loc_0026874E; /* je: equal / zero */

loc_0026873D: ;
    MEM32(esp + 4) = eax;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0026874B: ;
    esp = esp + 4;

loc_0026874E: ;
    MEM32(esi + 0x14) = edi;
    MEM32(esi + 0x18) = edi;
    MEM32(esi + 0x1C) = edi;
    eax = MEM32(esi + 4);
    if (CMP_EQ(eax, edi)) goto loc_0026876F; /* je: equal / zero */

loc_0026875E: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    MEM32(esp + 8) = eax;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0026876C: ;
    esp = esp + 4;

loc_0026876F: ;
    MEM32(esi + 4) = edi;
    MEM32(esi + 8) = edi;
    MEM32(esi + 0xC) = edi;
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00268780
 * Original: 0x00268780 - 0x002687C8 (72 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00268780(void)
{
    int _flags = 0; /* fallback flag var */

loc_00268780: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002685D0(); /* call 0x002685D0 */

loc_00268789: ;
    ecx = MEM32(0x849DEC);
    esp = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002684D0(); /* call 0x002684D0 */

loc_00268798: ;
    esi = MEM32(0x849DEC);
    (void)0; /* test esi, esi - flags set for next jcc */
    edi = esi;
    if (TEST_Z(esi, esi)) goto loc_002687BA; /* je: equal / zero */

loc_002687A4: ;
    PUSH32(esp, 0); sub_00268720(); /* call 0x00268720 */

loc_002687A9: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    MEM32(esp + 0xC) = edi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_002687B7: ;
    esp = esp + 4;

loc_002687BA: ;
    POP32(esp, edi);
    MEM32(0x849DEC) = 0;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002687D0
 * Original: 0x002687D0 - 0x0026881A (74 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002687D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002687D0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002685D0(); /* call 0x002685D0 */

loc_002687DB: ;
    eax = MEM32(0x849DEC);
    esp = esp + 4;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00268460(); /* call 0x00268460 */

loc_002687EA: ;
    esi = MEM32(0x849DEC);
    (void)0; /* test esi, esi - flags set for next jcc */
    edi = esi;
    if (TEST_Z(esi, esi)) goto loc_0026880C; /* je: equal / zero */

loc_002687F6: ;
    PUSH32(esp, 0); sub_00268720(); /* call 0x00268720 */

loc_002687FB: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    MEM32(esp + 0xC) = edi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00268809: ;
    esp = esp + 4;

loc_0026880C: ;
    POP32(esp, edi);
    MEM32(0x849DEC) = 0;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00268820
 * Original: 0x00268820 - 0x002688F8 (216 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00268820(void)
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

loc_00268820: ;
    PUSH32(esp, ecx);
    if (CMP_NE(MEM32(0x849DF8), 0xFFFFFFFFu)) goto loc_0026884B; /* jne: not equal / not zero */

loc_0026882A: ;
    eax = MEM32(0x84BFE4);
    if (TEST_NZ(eax, eax)) goto loc_0026884B; /* jne: not equal / not zero */

loc_00268833: ;
    eax = MEM32(0x84BFD4);
    if (TEST_NZ(eax, eax)) goto loc_0026884B; /* jne: not equal / not zero */

loc_0026883C: ;
    PUSH32(esp, 0); sub_00423D30(); /* call 0x00423D30 */

loc_00268841: ;
    MEM32(0x849DF8) = 0;

loc_0026884B: ;
    eax = MEM32(0x849DF4);
    if (TEST_Z(eax, eax)) goto loc_0026886E; /* je: equal / zero */

loc_00268854: ;
    eax++;
    (void)0; /* cmp eax, 0xA - flags set for next jcc */
    MEM32(0x849DF4) = eax;
    if (CMP_LE(eax, 0xA)) goto loc_0026886E; /* jle: less or equal (signed <=) */

loc_0026885F: ;
    PUSH32(esp, 0); sub_00268DF0(); /* call 0x00268DF0 */

loc_00268864: ;
    MEM32(0x849DF4) = 0;

loc_0026886E: ;
    ecx = 0x86ED48;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00268878: ;
    fp_push(MEMF(0x86ED40)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp >= 0) /* fcompi */) goto loc_0026889C; /* jae: above or equal (unsigned >=) */

loc_00268886: ;
    ecx = 0x86ED48;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00268890: ;
    fp_push(MEMF(0x86ED44)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_002688F6; /* jbe: below or equal (unsigned <=) */

loc_0026889C: ;
    SET_LO8(eax, MEM8(0x86ED58));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002688F6; /* je: equal / zero */

loc_002688A5: ;
    eax = MEM32(0x86ED4C);
    ecx = 0x86ED48;
    MEM32(esp) = eax;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_002688B7: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    ecx = 0x86ED48;
    MEMF(0x86ED40) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_002688CA: ;
    SET_LO8(eax, MEM8(0x86ED58));
    MEMF(0x86ED44) = (float)fp_top(); fp_popp(); /* fstp */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002688F6; /* je: equal / zero */

loc_002688D9: ;
    ecx = MEM32(0x86ED54);
    edx = MEM32(0x86ED50);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00268FE0(); /* call 0x00268FE0 */

loc_002688EC: ;
    esp = esp + 8;
    MEM8(0x86ED58) = 0;

loc_002688F6: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00268900
 * Original: 0x00268900 - 0x0026893F (63 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00268900(void)
{
    int _flags = 0; /* fallback flag var */

loc_00268900: ;
    eax = 0; /* xor self */
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = eax;
    eax = MEM32(esp + 0xC);
    MEM32(esi + 0x10) = eax;
    eax = MEM32(esp + 4);
    MEM32(esi + 0x20) = eax;
    eax = MEM32(0x849DF8);
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    MEM32(esi + 0x14) = ecx;
    ecx = MEM32(esp + 8);
    MEM32(esi + 0x18) = edx;
    MEM32(esi + 0x24) = ecx;
    if (CMP_NE(eax, 0xFFFFFFFFu)) { sub_0026893F(); return; } /* jne: not equal / not zero */

loc_00268930: ;
    MEM32(0x849DF8) = 1;
    eax = esi;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00268960
 * Original: 0x00268960 - 0x00268987 (39 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00268960(void)
{
    int _flags = 0; /* fallback flag var */

loc_00268960: ;
    MEM32(esi) = eax;
    eax = MEM32(0x849DF8);
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    MEM8(esi + 4) = 0;
    if (CMP_NE(eax, 0xFFFFFFFFu)) { sub_00268987(); return; } /* jne: not equal / not zero */

loc_00268970: ;
    MEM32(0x849DF8) = 1;
    PUSH32(esp, 0); sub_00424F30(); /* call 0x00424F30 */

loc_0026897F: ;
    PUSH32(esp, 0); sub_00424980(); /* call 0x00424980 */

loc_00268984: ;
    eax = esi;
    esp += 4; return; /* ret */

}

/**
 * sub_002689B0
 * Original: 0x002689B0 - 0x00268ADC (300 bytes, 101 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002689B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002689B0: ;
    eax = MEM32(0x84BFEC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_NE(eax, edi)) goto loc_002689D9; /* jne: not equal / not zero */

loc_002689C1: ;
    if (CMP_EQ(esi, edi)) goto loc_00268AD3; /* je: equal / zero */

loc_002689C9: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00268AE0(); /* call 0x00268AE0 */

loc_002689D0: ;
    MEM32(0x849DFC) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002689D9: ;
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    PUSH32(esp, ebx);
    /* nop */

loc_002689E0: ;
    ecx = MEM32(esi + 4);
    if (CMP_EQ(ecx, edi)) goto loc_00268A84; /* je: equal / zero */

loc_002689EB: ;
    eax = MEM32(esi + 8);
    eax = eax - ecx;
    eax = (uint32_t)((int32_t)eax >> 2);
    if (CMP_AE(ebp, eax)) goto loc_00268A84; /* jae: above or equal (unsigned >=) */

loc_002689FB: ;
    eax = MEM32(ecx + ebp * 4);
    ebx = ebp * 4;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_00268A0A: ;
    edx = MEM32(esi + 0x24);
    ecx = eax;
    ecx = ecx >> 0x10;
    ecx = ecx ^ eax;
    eax = MEM32(esi + 0x20);
    ecx = ecx & 0x7FFF;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    edi = esp + 0x20;
    eax = 4;
    PUSH32(esp, 0); sub_00425230(); /* call 0x00425230 */

loc_00268A2E: ;
    esp = esp + 0xC;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00268A4E; /* je: equal / zero */

loc_00268A35: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(eax + ebx);
    eax = eax + ebx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(esi + 0x10), _icall_esp); /* indirect call */
    }

loc_00268A46: ;
    esp = esp + 8;
    ebp++;
    edi = 0; /* xor self */
    goto loc_002689E0;

loc_00268A4E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(esi + 0x14), _icall_esp); /* indirect call */
    }

loc_00268A51: ;
    MEM32(0x849DF8) = MEM32(0x849DF8) - 1;
    if ((MEM32(0x849DF8) != 0)) goto loc_00268A63; /* jne: not equal / not zero */

loc_00268A59: ;
    MEM32(0x849DF8) = 0xFFFFFFFFu;

loc_00268A63: ;
    eax = MEM32(esi + 4);
    edi = 0; /* xor self */
    if (CMP_EQ(eax, edi)) goto loc_00268A7D; /* je: equal / zero */

loc_00268A6C: ;
    MEM32(esp + 0x14) = eax;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00268A7A: ;
    esp = esp + 4;

loc_00268A7D: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    goto loc_00268ABC;

loc_00268A84: ;
    eax = MEM32(esi + 0x18);
    if (CMP_EQ(eax, edi)) goto loc_00268A8D; /* je: equal / zero */

loc_00268A8B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00268A8D: ;
    MEM32(0x849DF8) = MEM32(0x849DF8) - 1;
    if ((MEM32(0x849DF8) != 0)) goto loc_00268A9F; /* jne: not equal / not zero */

loc_00268A95: ;
    MEM32(0x849DF8) = 0xFFFFFFFFu;

loc_00268A9F: ;
    eax = MEM32(esi + 4);
    if (CMP_EQ(eax, edi)) goto loc_00268AB7; /* je: equal / zero */

loc_00268AA6: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00268AB4: ;
    esp = esp + 4;

loc_00268AB7: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);

loc_00268ABC: ;
    MEM32(esi + 0xC) = edi;
    MEM32(esi + 8) = edi;
    MEM32(esi + 4) = edi;
    MEM32(esp + 0x18) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00268ACE: ;
    esp = esp + 4;
    POP32(esp, ebx);
    POP32(esp, ebp);

loc_00268AD3: ;
    MEM32(0x849DFC) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00268AE0
 * Original: 0x00268AE0 - 0x00268B3C (92 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00268AE0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00268AE0: ;
    PUSH32(esp, ecx);
    MEM32(0x849DF8) = MEM32(0x849DF8) - 1;
    if ((MEM32(0x849DF8) != 0)) goto loc_00268AF3; /* jne: not equal / not zero */

loc_00268AE9: ;
    MEM32(0x849DF8) = 0xFFFFFFFFu;

loc_00268AF3: ;
    eax = MEM32(esi + 4);
    if (TEST_Z(eax, eax)) goto loc_00268B09; /* je: equal / zero */

loc_00268AFA: ;
    MEM32(esp) = eax;
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00268B06: ;
    esp = esp + 4;

loc_00268B09: ;
    (void)0; /* test MEM8(esp + 8), 1 - flags set for next jcc */
    MEM32(esi + 4) = 0;
    MEM32(esi + 8) = 0;
    MEM32(esi + 0xC) = 0;
    if (TEST_Z(MEM8(esp + 8), 1)) goto loc_00268B36; /* je: equal / zero */

loc_00268B25: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00268B33: ;
    esp = esp + 4;

loc_00268B36: ;
    eax = esi;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00268B40
 * Original: 0x00268B40 - 0x00268BFE (190 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00268B40(void)
{
    int _flags = 0; /* fallback flag var */

loc_00268B40: ;
    PUSH32(esp, esi);
    esi = MEM32(0x849DFC);
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(esi, esi)) goto loc_00268B53; /* je: equal / zero */

loc_00268B4C: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00268AE0(); /* call 0x00268AE0 */

loc_00268B53: ;
    PUSH32(esp, 0); sub_004251D0(); /* call 0x004251D0 */

loc_00268B58: ;
    PUSH32(esp, 0); sub_00424F80(); /* call 0x00424F80 */

loc_00268B5D: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_00268B6B; /* jne: not equal / not zero */

loc_00268B66: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_00268B6B: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (TEST_Z(esi, esi)) goto loc_00268BB3; /* je: equal / zero */

loc_00268B91: ;
    if (CMP_B(MEM32(esi + 0x80), 0x30)) goto loc_00268BB3; /* jb: below (unsigned <) */

loc_00268B9A: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00268BA4: ;
    PUSH32(esp, 0x30);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00268BAC: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_00268BD4; /* jne: not equal / not zero */

loc_00268BB3: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00268BC5: ;
    PUSH32(esp, 0x30);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00268BCD: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) { sub_00268BFE(); return; } /* je: equal / zero */

loc_00268BD4: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x24);
    esi = eax;
    PUSH32(esp, 0); sub_00268900(); /* call 0x00268900 */

loc_00268BF2: ;
    POP32(esp, edi);
    MEM32(0x849DFC) = eax;
    eax = ebx;
    POP32(esp, esi);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00268C10
 * Original: 0x00268C10 - 0x00268CB2 (162 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00268C10(void)
{
    int _flags = 0; /* fallback flag var */

loc_00268C10: ;
    eax = MEM32(0x849E04);
    if (TEST_NZ(eax, eax)) goto loc_00268CB1; /* jne: not equal / not zero */

loc_00268C1D: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_00268C2B; /* jne: not equal / not zero */

loc_00268C26: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_00268C2B: ;
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
    if (TEST_Z(esi, esi)) goto loc_00268C75; /* je: equal / zero */

loc_00268C53: ;
    if (CMP_B(MEM32(esi + 0x80), 0xC)) goto loc_00268C75; /* jb: below (unsigned <) */

loc_00268C5C: ;
    ecx = 4;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00268C66: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00268C6E: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_00268C96; /* jne: not equal / not zero */

loc_00268C75: ;
    esi = MEM32(0x84A184);
    ecx = 4;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00268C87: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00268C8F: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_00268CA5; /* je: equal / zero */

loc_00268C96: ;
    esi = eax;
    PUSH32(esp, 0); sub_003446F0(); /* call 0x003446F0 */

loc_00268C9D: ;
    POP32(esp, edi);
    MEM32(0x849E04) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00268CA5: ;
    POP32(esp, edi);
    MEM32(0x849E04) = 0;
    POP32(esp, esi);

loc_00268CB1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00268CC0
 * Original: 0x00268CC0 - 0x00268D28 (104 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00268CC0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00268CC0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x849E04);
    (void)0; /* test esi, esi - flags set for next jcc */
    ebx = esi;
    if (TEST_Z(esi, esi)) goto loc_00268D1A; /* je: equal / zero */

loc_00268CCF: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax);
    PUSH32(esp, edi);
    edi = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0022E180(); /* call 0x0022E180 */

loc_00268CE4: ;
    eax = MEM32(edi);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0xC) = eax;
    if (TEST_Z(eax, eax)) goto loc_00268CFB; /* je: equal / zero */

loc_00268CEE: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00268CF8: ;
    esp = esp + 4;

loc_00268CFB: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    MEM32(edi) = 0;
    MEM32(ebx + 8) = 0;
    MEM32(esp + 0x10) = ebx;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00268D16: ;
    esp = esp + 4;
    POP32(esp, edi);

loc_00268D1A: ;
    POP32(esp, esi);
    MEM32(0x849E04) = 0;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00268D30
 * Original: 0x00268D30 - 0x00268DA1 (113 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00268D30(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00268D30: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x74BA18);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    ebx = 0x74BA18;
    if (TEST_Z(eax, eax)) goto loc_00268D9D; /* je: equal / zero */

loc_00268D45: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);

loc_00268D47: ;
    if (CMP_NE(MEM32(ebx + 0xC), 1)) goto loc_00268D91; /* jne: not equal / not zero */

loc_00268D4D: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_00268D57: ;
    edx = MEM32(ebx);
    PUSH32(esp, 0); sub_003448B0(); /* call 0x003448B0 */

loc_00268D5E: ;
    esi = MEM32(ebx);
    eax = esi;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_00268D67: ;
    eax = esi;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_00268D6E: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(ebp);
    edi = eax;
    edi = edi >> 0x10;
    PUSH32(esp, ecx);
    edi = edi ^ eax;
    edi = edi & 0x7FFF;
    PUSH32(esp, edx);
    esi = 4;
    PUSH32(esp, 0); sub_00424C50(); /* call 0x00424C50 */

loc_00268D8E: ;
    esp = esp + 8;

loc_00268D91: ;
    eax = MEM32(ebx + 0x10);
    ebx = ebx + 0x10;
    if (TEST_NZ(eax, eax)) goto loc_00268D47; /* jne: not equal / not zero */

loc_00268D9B: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00268D9D: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00268DB0
 * Original: 0x00268DB0 - 0x00268DBB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00268DB0(void)
{

loc_00268DB0: ;
    MEM32(0x849DF4) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00268DC0
 * Original: 0x00268DC0 - 0x00268DEE (46 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00268DC0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00268DC0: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    esi = 0; /* xor self */
    if (CMP_LE(ebx & ebx, 0)) goto loc_00268DE8; /* jle: less or equal (signed <=) */

loc_00268DCF: ;
    /* nop */

loc_00268DD0: ;
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_00268DD5: ;
    edx = MEM32(ebp + esi * 4);
    PUSH32(esp, 0); sub_003449F0(); /* call 0x003449F0 */

loc_00268DDE: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    if (TEST_NZ(eax, eax)) edi = esi; /* cmovne */
    esi++;
    if (CMP_L(esi, ebx)) goto loc_00268DD0; /* jl: less (signed <) */

loc_00268DE8: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00268DF0
 * Original: 0x00268DF0 - 0x00268EDD (237 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00268DF0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00268DF0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x75EBF0);
    ebx = 0x18;
    PUSH32(esp, 0); sub_00268DC0(); /* call 0x00268DC0 */

loc_00268E00: ;
    ebx = eax;
    eax = MEM32(0x862CD0);
    esp = esp + 4;
    if (TEST_NZ(eax, eax)) goto loc_00268EA6; /* jne: not equal / not zero */

loc_00268E12: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_00268E20; /* jne: not equal / not zero */

loc_00268E1B: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_00268E20: ;
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
    if (TEST_Z(esi, esi)) goto loc_00268E70; /* je: equal / zero */

loc_00268E48: ;
    if (CMP_B(MEM32(esi + 0x80), 0x1440)) goto loc_00268E70; /* jb: below (unsigned <) */

loc_00268E54: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00268E5E: ;
    PUSH32(esp, 0x1440);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00268E69: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_00268E94; /* jne: not equal / not zero */

loc_00268E70: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00268E82: ;
    PUSH32(esp, 0x1440);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00268E8D: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_00268E9D; /* je: equal / zero */

loc_00268E94: ;
    edi = eax;
    PUSH32(esp, 0); sub_00351B70(); /* call 0x00351B70 */

loc_00268E9B: ;
    goto loc_00268E9F;

loc_00268E9D: ;
    eax = 0; /* xor self */

loc_00268E9F: ;
    POP32(esp, edi);
    MEM32(0x862CD0) = eax;
    POP32(esp, esi);

loc_00268EA6: ;
    MEM8(eax + 0x11B7) = LO8(ebx);
    ecx = MEM32(0x862CD0);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x10), _icall_esp); /* indirect call */
    }

loc_00268EB7: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ebx);
    if (TEST_Z(eax, eax)) goto loc_00268EC9; /* je: equal / zero */

loc_00268EBC: ;
    ecx = MEM32(0x862CD0);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_00268EC9: ;
    eax = MEM32(0x849DF4);
    if (TEST_NZ(eax, eax)) goto loc_00268EDC; /* jne: not equal / not zero */

loc_00268ED2: ;
    MEM32(0x849DF4) = 1;

loc_00268EDC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00268EE0
 * Original: 0x00268EE0 - 0x00268FDD (253 bytes, 83 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00268EE0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00268EE0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x268DB0);
    PUSH32(esp, 0x2691E0);
    eax = ZX8(LO8(eax));
    PUSH32(esp, 0x2691B0);
    PUSH32(esp, 0); sub_004202D0(); /* call 0x004202D0 */

loc_00268EFA: ;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ebx = esp + 0x1C;
    PUSH32(esp, 0); sub_00268B40(); /* call 0x00268B40 */

loc_00268F05: ;
    ebx = 0x74BA18;
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_00268F0F: ;
    esi = eax;
    PUSH32(esp, 0); sub_00344EC0(); /* call 0x00344EC0 */

loc_00268F16: ;
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_00268F1B: ;
    esi = eax;
    PUSH32(esp, 0); sub_00344DE0(); /* call 0x00344DE0 */

loc_00268F22: ;
    eax = MEM32(0x74BA18);
    if (TEST_Z(eax, eax)) goto loc_00268FC6; /* je: equal / zero */

loc_00268F2F: ;
    PUSH32(esp, edi);

loc_00268F30: ;
    if (CMP_NE(MEM32(ebx + 0xC), 1)) goto loc_00268FB7; /* jne: not equal / not zero */

loc_00268F3A: ;
    eax = MEM32(0x849DFC);
    edx = MEM32(eax + 4);
    (void)0; /* test edx, edx - flags set for next jcc */
    edi = MEM32(ebx);
    MEM32(esp + 0xC) = edi;
    if (TEST_NZ(edx, edx)) goto loc_00268F50; /* jne: not equal / not zero */

loc_00268F4C: ;
    esi = 0; /* xor self */
    goto loc_00268F58;

loc_00268F50: ;
    esi = MEM32(eax + 8);
    esi = esi - edx;
    esi = (uint32_t)((int32_t)esi >> 2);

loc_00268F58: ;
    if (TEST_Z(edx, edx)) goto loc_00268F75; /* je: equal / zero */

loc_00268F5C: ;
    ecx = MEM32(eax + 0xC);
    ecx = ecx - edx;
    ecx = (uint32_t)((int32_t)ecx >> 2);
    if (CMP_AE(esi, ecx)) goto loc_00268F75; /* jae: above or equal (unsigned >=) */

loc_00268F68: ;
    ecx = MEM32(eax + 8);
    MEM32(ecx) = edi;
    ecx = ecx + 4;
    MEM32(eax + 8) = ecx;
    goto loc_00268F89;

loc_00268F75: ;
    ecx = MEM32(eax + 8);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = 1;
    PUSH32(esp, 0); sub_002AE350(); /* call 0x002AE350 */

loc_00268F89: ;
    eax = edi;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_00268F90: ;
    edi = eax;
    edi = edi >> 0x10;
    edi = edi ^ eax;
    eax = MEM32(0x849DFC);
    ecx = MEM32(eax + 0x24);
    edx = MEM32(eax + 0x20);
    PUSH32(esp, ecx);
    edi = edi & 0x7FFF;
    PUSH32(esp, edx);
    esi = 4;
    PUSH32(esp, 0); sub_00424FE0(); /* call 0x00424FE0 */

loc_00268FB4: ;
    esp = esp + 8;

loc_00268FB7: ;
    eax = MEM32(ebx + 0x10);
    ebx = ebx + 0x10;
    if (TEST_NZ(eax, eax)) goto loc_00268F30; /* jne: not equal / not zero */

loc_00268FC5: ;
    POP32(esp, edi);

loc_00268FC6: ;
    eax = MEM32(0x849DFC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x2689B0);
    PUSH32(esp, 0); sub_004250F0(); /* call 0x004250F0 */

loc_00268FD6: ;
    esp = esp + 8;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00268FE0
 * Original: 0x00268FE0 - 0x00269040 (96 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00268FE0(void)
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

loc_00268FE0: ;
    esp = esp - 0x14;
    ecx = 0x86ED48;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00268FED: ;
    fp_push(MEMF(0x86ED40)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp >= 0) /* fcompi */) { sub_00269040(); return; } /* jae: above or equal (unsigned >=) */

loc_00268FFB: ;
    ecx = 0x86ED48;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00269005: ;
    fp_push(MEMF(0x86ED44)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) { sub_00269040(); return; } /* ja: above (unsigned >) */

loc_00269011: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x1C);
    MEM8(esp + 0xC) = 1;
    MEM32(0x86ED50) = eax;
    eax = MEM32(esp + 0xC);
    MEM32(0x86ED54) = ecx;
    ecx = MEM32(esp + 0x10);
    MEM32(0x86ED58) = eax;
    MEM32(0x86ED5C) = ecx;
    esp = esp + 0x14;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_002691B0
 * Original: 0x002691B0 - 0x002691D2 (34 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002691B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002691B0: ;
    ecx = MEM32(0x849E04);
    if (TEST_NZ(ecx, ecx)) goto loc_002691C1; /* jne: not equal / not zero */

loc_002691BA: ;
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_002691BF: ;
    ecx = eax;

loc_002691C1: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, 0); sub_00344B30(); /* call 0x00344B30 */

loc_002691CF: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_002691E0
 * Original: 0x002691E0 - 0x00269214 (52 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002691E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002691E0: ;
    esp = esp - 8;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_002691E9: ;
    esi = eax;
    PUSH32(esp, 0); sub_00344EC0(); /* call 0x00344EC0 */

loc_002691F0: ;
    eax = MEM32(0x849DF8);
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    MEM32(esp + 4) = 0;
    MEM8(esp + 8) = 0;
    POP32(esp, esi);
    if (CMP_NE(eax, 0xFFFFFFFFu)) { sub_00269214(); return; } /* jne: not equal / not zero */

loc_00269208: ;
    MEM32(0x849DF8) = 1;
    g_seh_ebp = ebp; sub_00269224(); return; /* tail jmp 0x00269224 */

}

/**
 * sub_00269270
 * Original: 0x00269270 - 0x002692D0 (96 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00269270(void)
{
    int _flags = 0; /* fallback flag var */

loc_00269270: ;
    esp = esp - 8;
    PUSH32(esp, 0); sub_004A0451(); /* call 0x004A0451 */

loc_00269278: ;
    if (TEST_Z(eax, eax)) goto loc_002692CC; /* je: equal / zero */

loc_0026927C: ;
    eax = MEM32(0x84BEE8);
    if (TEST_Z(eax, eax)) goto loc_002692CC; /* je: equal / zero */

loc_00269285: ;
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    esi = esp + 4;
    PUSH32(esp, 0); sub_00268960(); /* call 0x00268960 */

loc_00269291: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00268D30(); /* call 0x00268D30 */

loc_0026929B: ;
    esp = esp + 4;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_002687D0(); /* call 0x002687D0 */

loc_002692A5: ;
    SET_LO8(eax, MEM8(esp + 8));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    POP32(esp, esi);
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002692BA; /* jne: not equal / not zero */

loc_002692AE: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00424E50(); /* call 0x00424E50 */

loc_002692B7: ;
    esp = esp + 8;

loc_002692BA: ;
    MEM32(0x849DF8) = MEM32(0x849DF8) - 1;
    if ((MEM32(0x849DF8) != 0)) goto loc_002692CC; /* jne: not equal / not zero */

loc_002692C2: ;
    MEM32(0x849DF8) = 0xFFFFFFFFu;

loc_002692CC: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_002692D0
 * Original: 0x002692D0 - 0x002692E1 (17 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002692D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002692D0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    ebx = MEM32(edi + 4);
    if (TEST_NZ(ebx, ebx)) { sub_002692E1(); return; } /* jne: not equal / not zero */

loc_002692DD: ;
    esi = 0; /* xor self */
    g_seh_ebp = ebp; sub_002692F6(); return; /* tail jmp 0x002692F6 */

}

/**
 * sub_00269350
 * Original: 0x00269350 - 0x00269361 (17 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00269350(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00269350: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    ebx = MEM32(edi + 4);
    if (TEST_NZ(ebx, ebx)) { sub_00269361(); return; } /* jne: not equal / not zero */

loc_0026935D: ;
    esi = 0; /* xor self */
    g_seh_ebp = ebp; sub_00269377(); return; /* tail jmp 0x00269377 */

}

/**
 * sub_002693D0
 * Original: 0x002693D0 - 0x002693DF (15 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002693D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002693D0: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 4);
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, edi);
    edi = eax;
    if (TEST_NZ(esi, esi)) { sub_002693DF(); return; } /* jne: not equal / not zero */

loc_002693DB: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_002693F4(); return; /* tail jmp 0x002693F4 */

}

/**
 * sub_00269470
 * Original: 0x00269470 - 0x002694A1 (49 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00269470(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00269470: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(edi + 4);
    if (TEST_Z(esi, esi)) goto loc_0026949D; /* je: equal / zero */

loc_00269482: ;
    ecx = MEM32(edi + 8);
    ecx = ecx - esi;
    eax = 0x2AAAAAAB;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)((int32_t)edx >> 1);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    MEM32(esp + 0x10) = eax;
    if ((eax != 0)) { sub_002694A1(); return; } /* jne: not equal / not zero */

loc_0026949D: ;
    esi = 0; /* xor self */
    g_seh_ebp = ebp; sub_002694B5(); return; /* tail jmp 0x002694B5 */

}

/**
 * sub_002694E0
 * Original: 0x002694E0 - 0x00269512 (50 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002694E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002694E0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(edi + 4);
    if (TEST_Z(esi, esi)) goto loc_0026950E; /* je: equal / zero */

loc_002694F2: ;
    ecx = MEM32(edi + 8);
    ecx = ecx - esi;
    eax = 0x66666667;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)((int32_t)edx >> 3);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    MEM32(esp + 0x10) = eax;
    if ((eax != 0)) { sub_00269512(); return; } /* jne: not equal / not zero */

loc_0026950E: ;
    esi = 0; /* xor self */
    g_seh_ebp = ebp; sub_00269527(); return; /* tail jmp 0x00269527 */

}

/**
 * sub_00269550
 * Original: 0x00269550 - 0x0026956D (29 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00269550(void)
{

loc_00269550: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00269C30(); /* call 0x00269C30 */

loc_00269561: ;
    edx = esi + esi * 4;
    esp = esp + 0x10;
    eax = edi + edx * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00269570
 * Original: 0x00269570 - 0x002695C3 (83 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00269570(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00269570: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    if (CMP_EQ(edi, ecx)) goto loc_002695BD; /* je: equal / zero */

loc_00269581: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(edx + 8);
    (void)0; /* cmp ecx, esi - flags set for next jcc */
    edx = edi;
    if (CMP_EQ(ecx, esi)) goto loc_002695B5; /* je: equal / zero */

loc_0026958F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);

loc_00269591: ;
    eax = ecx;
    ebp = MEM32(eax);
    ebx = edx;
    MEM32(ebx) = ebp;
    ebp = MEM32(eax + 4);
    MEM32(ebx + 4) = ebp;
    eax = MEM32(eax + 8);
    ecx = ecx + 0xC;
    edx = edx + 0xC;
    (void)0; /* cmp ecx, esi - flags set for next jcc */
    MEM32(ebx + 8) = eax;
    if (CMP_NE(ecx, esi)) goto loc_00269591; /* jne: not equal / not zero */

loc_002695AF: ;
    eax = MEM32(esp + 0x18);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_002695B5: ;
    ecx = MEM32(esp + 0xC);
    MEM32(ecx + 8) = edx;
    POP32(esp, esi);

loc_002695BD: ;
    MEM32(eax) = edi;
    POP32(esp, edi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_002695D0
 * Original: 0x002695D0 - 0x00269612 (66 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002695D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_002695D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47F8D0);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    esp = esp - 0x30;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    eax = MEM32(ebp + 0x10);
    ebx = ecx;
    ecx = MEM32(eax);
    MEM32(ebp + -60) = ecx;
    edx = MEM32(eax + 4);
    MEM32(ebp + -56) = edx;
    eax = MEM32(eax + 8);
    MEM32(ebp + -52) = eax;
    edi = MEM32(ebx + 4);
    if (TEST_NZ(edi, edi)) { sub_00269612(); return; } /* jne: not equal / not zero */

loc_0026960E: ;
    esi = 0; /* xor self */
    g_seh_ebp = ebp; sub_00269627(); return; /* tail jmp 0x00269627 */

}

/**
 * sub_00269880
 * Original: 0x00269880 - 0x002698D0 (80 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00269880(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00269880: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47F8C0);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    esp = esp - 0x3C;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    eax = MEM32(ebp + 0x10);
    ebx = ecx;
    ecx = MEM32(eax);
    MEM32(ebp + -72) = ecx;
    edx = MEM32(eax + 4);
    MEM32(ebp + -68) = edx;
    xmm0 = MEMF(eax + 0xC); /* movss */
    MEMF(ebp + -60) = xmm0; /* movss */
    xmm0 = MEMF(eax + 8); /* movss */
    MEMF(ebp + -64) = xmm0; /* movss */
    edi = MEM32(ebx + 4);
    if (TEST_NZ(edi, edi)) { sub_002698D0(); return; } /* jne: not equal / not zero */

loc_002698CC: ;
    esi = 0; /* xor self */
    g_seh_ebp = ebp; sub_002698E6(); return; /* tail jmp 0x002698E6 */

}

/**
 * sub_00269B40
 * Original: 0x00269B40 - 0x00269B56 (22 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00269B40(void)
{
    int _flags = 0; /* fallback flag var */

loc_00269B40: ;
    PUSH32(esp, ecx);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp) = eax;
    if (TEST_Z(eax, eax)) goto loc_00269B54; /* je: equal / zero */

loc_00269B48: ;
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00269B51: ;
    esp = esp + 4;

loc_00269B54: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00269B60
 * Original: 0x00269B60 - 0x00269B7B (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00269B60(void)
{

loc_00269B60: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00269D90(); /* call 0x00269D90 */

loc_00269B75: ;
    esp = esp + 0x10;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00269B80
 * Original: 0x00269B80 - 0x00269BB2 (50 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00269B80(void)
{
    int _flags = 0; /* fallback flag var */

loc_00269B80: ;
    if (CMP_EQ(eax, ecx)) goto loc_00269BB1; /* je: equal / zero */

loc_00269B84: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);

loc_00269B87: ;
    esi = edx;
    ebx = MEM32(esi);
    edi = eax;
    MEM32(edi) = ebx;
    ebx = MEM32(esi + 4);
    MEM32(edi + 4) = ebx;
    ebx = MEM32(esi + 8);
    MEM32(edi + 8) = ebx;
    ebx = MEM32(esi + 0xC);
    MEM32(edi + 0xC) = ebx;
    esi = MEM32(esi + 0x10);
    eax = eax + 0x14;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(edi + 0x10) = esi;
    if (CMP_NE(eax, ecx)) goto loc_00269B87; /* jne: not equal / not zero */

loc_00269BAE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00269BB1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00269BC0
 * Original: 0x00269BC0 - 0x00269C09 (73 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00269BC0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00269BC0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47F170);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    ebx = ecx;
    edi = MEM32(ebp + 0xC);
    esi = MEM32(ebp + 8);
    MEM32(ebp + -4) = 0;
    edi = edi;

loc_00269BF0: ;
    if (CMP_BE(edi & edi, 0)) { sub_00269C09(); return; } /* jbe: below or equal (unsigned <=) */

loc_00269BF4: ;
    ecx = ebx;
    eax = esi;
    PUSH32(esp, 0); sub_00269CE0(); /* call 0x00269CE0 */

loc_00269BFD: ;
    edi--;
    MEM32(ebp + 0xC) = edi;
    esi = esi + 0xC;
    MEM32(ebp + 8) = esi;
    goto loc_00269BF0;

}

/**
 * sub_00269C30
 * Original: 0x00269C30 - 0x00269C79 (73 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00269C30(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00269C30: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47F1D0);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    ebx = ecx;
    edi = MEM32(ebp + 0xC);
    esi = MEM32(ebp + 8);
    MEM32(ebp + -4) = 0;
    edi = edi;

loc_00269C60: ;
    if (CMP_BE(edi & edi, 0)) { sub_00269C79(); return; } /* jbe: below or equal (unsigned <=) */

loc_00269C64: ;
    ecx = ebx;
    eax = esi;
    PUSH32(esp, 0); sub_00269D00(); /* call 0x00269D00 */

loc_00269C6D: ;
    edi--;
    MEM32(ebp + 0xC) = edi;
    esi = esi + 0x14;
    MEM32(ebp + 8) = esi;
    goto loc_00269C60;

}

/**
 * sub_00269CA0
 * Original: 0x00269CA0 - 0x00269CD5 (53 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00269CA0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00269CA0: ;
    if (CMP_EQ(edx, ecx)) goto loc_00269CD4; /* je: equal / zero */

loc_00269CA4: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);

loc_00269CA7: ;
    ecx = ecx - 0x14;
    eax = eax - 0x14;
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
    esi = MEM32(esi + 0x10);
    MEM32(edi + 0x10) = esi;
    if (CMP_NE(ecx, edx)) goto loc_00269CA7; /* jne: not equal / not zero */

loc_00269CD1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00269CD4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00269CE0
 * Original: 0x00269CE0 - 0x00269CF5 (21 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00269CE0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00269CE0: ;
    if (TEST_Z(eax, eax)) goto loc_00269CF4; /* je: equal / zero */

loc_00269CE4: ;
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 8) = ecx;

loc_00269CF4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00269D00
 * Original: 0x00269D00 - 0x00269D1B (27 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00269D00(void)
{
    int _flags = 0; /* fallback flag var */

loc_00269D00: ;
    if (TEST_Z(eax, eax)) goto loc_00269D1A; /* je: equal / zero */

loc_00269D04: ;
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 0xC);
    MEM32(eax + 0xC) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 8) = ecx;

loc_00269D1A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00269D20
 * Original: 0x00269D20 - 0x00269D6B (75 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00269D20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00269D20: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47F230);
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

loc_00269D50: ;
    if (CMP_EQ(esi, ebx)) { sub_00269D6B(); return; } /* je: equal / zero */

loc_00269D54: ;
    ecx = esi;
    eax = edi;
    PUSH32(esp, 0); sub_00269CE0(); /* call 0x00269CE0 */

loc_00269D5D: ;
    edi = edi + 0xC;
    MEM32(ebp + 0xC) = edi;
    esi = esi + 0xC;
    MEM32(ebp + 8) = esi;
    goto loc_00269D50;

}

/**
 * sub_00269D90
 * Original: 0x00269D90 - 0x00269DDB (75 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00269D90(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00269D90: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47F2A0);
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

loc_00269DC0: ;
    if (CMP_EQ(esi, ebx)) { sub_00269DDB(); return; } /* je: equal / zero */

loc_00269DC4: ;
    ecx = esi;
    eax = edi;
    PUSH32(esp, 0); sub_00269D00(); /* call 0x00269D00 */

loc_00269DCD: ;
    edi = edi + 0x14;
    MEM32(ebp + 0xC) = edi;
    esi = esi + 0x14;
    MEM32(ebp + 8) = esi;
    goto loc_00269DC0;

}

/**
 * sub_00269E00
 * Original: 0x00269E00 - 0x00269EB5 (181 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00269E00(void)
{
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00269E00: ;
    esp = esp - 8;
    eax = 1;
    eax = eax << LO8(ecx);
    MEM32(esi) = ecx;
    MEM32(esi + 4) = edi;
    eax--;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = eax;
    MEM32(esi + 0x18) = eax;
    MEM32(esp) = ecx;
    eax = edx;
    ecx = edx;
    eax = eax & 0x7FFFFFFF;
    MEM32(esp + 4) = eax;
    ecx = ecx & 0x80000000u;
    fp_push((double)SMEM32(esp)); /* fild */
    MEM32(esp + 4) = ecx;
    MEM32(esp) = 0;
    ecx = edi;
    fp_push((double)SMEM32(esp)); /* fild */
    eax = 1;
    eax = eax << LO8(ecx);
    MEM32(esi + 0x1C) = edx;
    fp_top() = -fp_top(); /* fchs */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    eax--;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x24) = edx;
    MEMF(esi + 8) = (float)fp_top(); fp_pop(); /* fst */
    edx = eax;
    fp_push(MEMF(0x648D14)); /* fld float */
    eax = MEM32(esi + 0x24);
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    ecx = eax;
    eax = eax & 0x7FFFFFFF;
    MEM32(esp + 4) = eax;
    MEM32(esp) = edx;
    ecx = ecx & 0x80000000u;
    eax = esi;
    MEMF(esi + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */
    fp_push((double)SMEM32(esp)); /* fild */
    MEM32(esp + 4) = ecx;
    MEM32(esp) = 0;
    fp_push((double)SMEM32(esp)); /* fild */
    fp_top() = -fp_top(); /* fchs */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esi + 0x10) = (float)fp_top(); fp_pop(); /* fst */
    fp_push(MEMF(0x648D14)); /* fld float */
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    MEMF(esi + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */
    esp = esp + 8;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00269EC0
 * Original: 0x00269EC0 - 0x00269F66 (166 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00269EC0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _fpu_cmp = 0; /* FPU compare result: -1/0/1 */
    float xmm0, xmm1, xmm3, xmm4, xmm5;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00269EC0: ;
    esp = esp - 0x18;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    xmm3 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x18) = ecx;
    xmm5 = MEMF(esp + 0x18); /* movss */
    edi = 0; /* xor self */
    esi = 0; /* xor self */
    /* comiss xmm3, xmm5 - sets EFLAGS */
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x20) = eax;
    if ((xmm3 <= xmm5)) goto loc_00269F01; /* jbe: below or equal (unsigned <=) */

loc_00269EEC: ;
    xmm0 = xmm3; /* movaps */
    xmm0 = xmm0 - xmm5; /* subss */
    xmm5 = xmm0; /* movaps */
    edi = 1;
    MEMF(esp + 0x18) = xmm5; /* movss */

loc_00269F01: ;
    xmm0 = MEMF(esp + 0x1C); /* movss */
    /* comiss xmm3, xmm0 - sets EFLAGS */
    if ((xmm3 <= xmm0)) goto loc_00269F1C; /* jbe: below or equal (unsigned <=) */

loc_00269F0C: ;
    xmm1 = xmm3; /* movaps */
    xmm1 = xmm1 - xmm0; /* subss */
    edi = edi | 2;
    MEMF(esp + 0x1C) = xmm1; /* movss */

loc_00269F1C: ;
    xmm4 = MEMF(esp + 0x20); /* movss */
    /* comiss xmm3, xmm4 - sets EFLAGS */
    if ((xmm3 <= xmm4)) goto loc_00269F3A; /* jbe: below or equal (unsigned <=) */

loc_00269F27: ;
    xmm0 = xmm3; /* movaps */
    xmm0 = xmm0 - xmm4; /* subss */
    xmm4 = xmm0; /* movaps */
    edi = edi | 4;
    MEMF(esp + 0x20) = xmm4; /* movss */

loc_00269F3A: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648D24)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) { sub_00269F66(); return; } /* jbe: below or equal (unsigned <=) */

loc_00269F4C: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648D24)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) { sub_00269F66(); return; } /* jbe: below or equal (unsigned <=) */

loc_00269F5E: ;
    MEMF(esp + 0x10) = xmm3; /* movss */
    g_seh_ebp = ebp; sub_00269F7E(); return; /* tail jmp 0x00269F7E */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0026A0E0
 * Original: 0x0026A0E0 - 0x0026A29C (444 bytes, 126 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026A0E0(void)
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

loc_0026A0E0: ;
    esp = esp - 0x14;
    ecx = MEM32(edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x24);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x24);
    ebx = eax;
    PUSH32(esp, 0);
    ecx = ecx + 3;
    eax = esi;
    edx = ebp;
    PUSH32(esp, 0); sub_00470CB0(); /* call 0x00470CB0 */

loc_0026A100: ;
    eax = eax & MEM32(edi + 0x20);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x28) = eax;
    fp_push((double)SMEM32(esp + 0x28)); /* fild */
    if (CMP_GE(eax & eax, 0)) goto loc_0026A115; /* jge: greater or equal (signed >=) */

loc_0026A10F: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_0026A115: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ecx = MEM32(edi + 0x18);
    eax = esi;
    eax = (eax >> 3) | (ebp << (32 - 3)); /* shrd */
    eax = eax & ecx;
    esp = esp - 8;
    ebp = ebp >> 3;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x30) = eax;
    MEMF(esp + 4) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push((double)SMEM32(esp + 0x30)); /* fild */
    if (CMP_GE(eax & eax, 0)) goto loc_0026A13F; /* jge: greater or equal (signed >=) */

loc_0026A139: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_0026A13F: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = esp + 0x1C;
    ecx = 0; /* xor self */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_003E46C0(); /* call 0x003E46C0 */

loc_0026A152: ;
    xmm7 = MEMF(esp + 0x28); /* movss */
    xmm6 = 0.0f; /* xorps self = zero */
    xmm0 = MEMF(esp + 0x24); /* movss */
    xmm4 = MEMF(esp + 0x20); /* movss */
    xmm3 = MEMF(esp + 0x1C); /* movss */
    xmm1 = xmm7; /* movaps */
    xmm1 = xmm1 * xmm6; /* mulss */
    xmm5 = xmm1; /* movaps */
    xmm1 = xmm1 - xmm3; /* subss */
    xmm3 = xmm3 * xmm6; /* mulss */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * xmm6; /* mulss */
    xmm1 = xmm1 + xmm2; /* addss */
    xmm5 = xmm5 - xmm2; /* subss */
    MEMF(esp + 0x30) = xmm1; /* movss */
    xmm1 = xmm7; /* movaps */
    xmm2 = xmm4; /* movaps */
    xmm2 = xmm2 * xmm6; /* mulss */
    xmm1 = xmm1 - xmm2; /* subss */
    xmm1 = xmm1 + xmm3; /* addss */
    xmm6 = xmm0; /* movaps */
    xmm6 = xmm6 + xmm3; /* addss */
    xmm3 = MEMF(esp + 0x1C); /* movss */
    xmm6 = xmm6 + xmm2; /* addss */
    xmm3 = xmm3 * xmm6; /* mulss */
    xmm2 = xmm4; /* movaps */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm2 = xmm2 + xmm3; /* addss */
    xmm5 = xmm5 + xmm4; /* addss */
    xmm3 = xmm5; /* movaps */
    xmm3 = xmm3 * xmm7; /* mulss */
    xmm7 = MEMF(esp + 0x30); /* movss */
    xmm2 = xmm2 + xmm3; /* addss */
    xmm3 = xmm0; /* movaps */
    xmm3 = xmm3 * xmm7; /* mulss */
    xmm7 = xmm7 * MEMF(esp + 0x28); /* mulss */
    xmm2 = xmm2 - xmm3; /* subss */
    MEMF(esp + 0x18) = xmm6; /* movss */
    xmm3 = xmm4; /* movaps */
    xmm3 = xmm3 * xmm6; /* mulss */
    xmm6 = xmm0; /* movaps */
    xmm0 = xmm0 * MEMF(esp + 0x18); /* mulss */
    xmm6 = xmm6 * xmm5; /* mulss */
    xmm3 = xmm3 + xmm6; /* addss */
    xmm6 = MEMF(esp + 0x1C); /* movss */
    xmm3 = xmm3 + xmm7; /* addss */
    xmm7 = xmm6; /* movaps */
    xmm6 = xmm6 * MEMF(esp + 0x30); /* mulss */
    xmm7 = xmm7 * xmm1; /* mulss */
    xmm1 = xmm1 * MEMF(esp + 0x28); /* mulss */
    eax = esi;
    xmm0 = xmm0 + xmm6; /* addss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = 0.0f; /* xorps self = zero */
    eax = eax & 1;
    esp = esp + 0xC;
    eax = eax | ecx;
    xmm4 = xmm4 * xmm5; /* mulss */
    xmm3 = xmm3 - xmm7; /* subss */
    xmm0 = xmm0 - xmm4; /* subss */
    MEMF(ebx) = xmm2; /* movss */
    MEMF(ebx + 4) = xmm3; /* movss */
    MEMF(ebx + 8) = xmm0; /* movss */
    if ((eax == 0)) goto loc_0026A263; /* je: equal / zero */

loc_0026A258: ;
    xmm4 = xmm1; /* movaps */
    xmm4 = xmm4 - xmm2; /* subss */
    MEMF(ebx) = xmm4; /* movss */

loc_0026A263: ;
    eax = esi;
    eax = eax & 2;
    ecx = 0; /* xor self */
    eax = eax | ecx;
    if ((eax == 0)) goto loc_0026A27A; /* je: equal / zero */

loc_0026A26E: ;
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 - xmm3; /* subss */
    MEMF(ebx + 4) = xmm2; /* movss */

loc_0026A27A: ;
    esi = esi & 4;
    eax = 0; /* xor self */
    esi = esi | eax;
    if ((esi == 0)) goto loc_0026A28C; /* je: equal / zero */

loc_0026A283: ;
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(ebx + 8) = xmm1; /* movss */

loc_0026A28C: ;
    eax = ebx;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_0026A293: ;
    POP32(esp, esi);
    POP32(esp, ebp);
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
 * sub_0026A2A0
 * Original: 0x0026A2A0 - 0x0026A37E (222 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026A2A0(void)
{
    uint32_t ebp;
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
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0026A2A0: ;
    esp = esp - 0x10;
    edx = MEM32(eax + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(eax);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x10) = ecx;
    ecx = esp + 0x10;
    PUSH32(esp, edi);
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x1C) = eax;
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
    MEMF(esp + 0x24) = xmm1; /* movss */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648D24)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_0026A338; /* ja: above (unsigned >) */

loc_0026A30A: ;
    xmm0 = MEMF(esp + 0x24); /* movss */
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0026A32D; /* jp: parity */

loc_0026A31D: ;
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    goto loc_0026A338;

loc_0026A32D: ;
    eax = esp + 0x14;
    ebx = eax;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_0026A338: ;
    eax = MEM32(ebp);
    edx = MEM32(ebp + 4);
    edi = edx + eax + 3;
    eax = esp + 0x14;
    ebx = ebp;
    PUSH32(esp, 0); sub_00269EC0(); /* call 0x00269EC0 */

loc_0026A34D: ;
    (void)0; /* cmp edi, 0x20 - flags set for next jcc */
    ebx = eax;
    eax = edx;
    ecx = edi;
    if (CMP_LE(edi, 0x20)) goto loc_0026A369; /* jle: less or equal (signed <=) */

loc_0026A358: ;
    edi = edi + 0xFFFFFFE0u;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0026A361: ;
    esp = esp + 4;
    ecx = 0x20;

loc_0026A369: ;
    PUSH32(esp, ecx);
    eax = ebx;
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0026A371: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0026A380
 * Original: 0x0026A380 - 0x0026A3F3 (115 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026A380(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0026A380: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    ecx = MEM32(ebp);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(ebp + 4);
    PUSH32(esp, edi);
    eax = eax + ecx + 3;
    ebx = 0; /* xor self */
    edi = 0; /* xor self */
    if (CMP_LE(eax, 0x20)) goto loc_0026A3B3; /* jle: less or equal (signed <=) */

loc_0026A3A0: ;
    eax = eax + 0xFFFFFFE0u;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0026A3A9: ;
    edi = eax;
    esp = esp + 4;
    eax = 0x20;

loc_0026A3B3: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0026A3B9: ;
    edx = 0; /* xor self */
    esp = esp + 4;
    edx = edx | edi;
    eax = eax | ebx;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = esp + 0x18;
    edi = ebp;
    PUSH32(esp, 0); sub_0026A0E0(); /* call 0x0026A0E0 */

loc_0026A3CF: ;
    eax = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x10);
    ecx = eax;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ecx + 4) = edx;
    edx = MEM32(esp + 0x10);
    POP32(esp, ebp);
    MEM32(ecx + 8) = edx;
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0026A400
 * Original: 0x0026A400 - 0x0026A43F (63 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026A400(void)
{
    uint32_t ebp;

loc_0026A400: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF8u;
    esp = esp - 0xC04;
    eax = 0; /* xor self */
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = 0x2FF;
    edi = esp + 0x10;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0); sub_002A3EA0(); /* call 0x002A3EA0 */

loc_0026A437: ;
    esp = esp + 0x10;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0026A440
 * Original: 0x0026A440 - 0x0026A483 (67 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026A440(void)
{
    uint32_t ebp;

loc_0026A440: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF8u;
    esp = esp - 0xC04;
    eax = 0; /* xor self */
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = 0x2FF;
    edi = esp + 0x10;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    MEM32(esp + 0x18) = 7;
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0); sub_002A3EA0(); /* call 0x002A3EA0 */

loc_0026A47B: ;
    esp = esp + 0x10;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0026A490
 * Original: 0x0026A490 - 0x0026A4CB (59 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026A490(void)
{

loc_0026A490: ;
    esp = esp - 0x800;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5F9B74);
    ecx = esp + 0xC;
    PUSH32(esp, 0x400);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046EE4A(); /* call 0x0046EE4A */

loc_0026A4AC: ;
    esp = esp + 0x10;
    edi = esp + 4;
    eax = esi;
    PUSH32(esp, 0); sub_00060900(); /* call 0x00060900 */

loc_0026A4BA: ;
    MEM32(esi + 8) = 0;
    eax = esi;
    POP32(esp, edi);
    esp = esp + 0x800;
    esp += 4; return; /* ret */

}

/**
 * sub_0026A4D0
 * Original: 0x0026A4D0 - 0x0026A4D6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026A4D0(void)
{

loc_0026A4D0: ;
    eax = 0x41;
    esp += 4; return; /* ret */

}

/**
 * sub_0026A4E0
 * Original: 0x0026A4E0 - 0x0026A525 (69 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026A4E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0026A4E0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_0026A4E8: ;
    edx = 0; /* xor self */
    ecx = 0x6BE940;
    /* nop */

loc_0026A4F0: ;
    if (CMP_EQ(MEM32(ecx), eax)) { sub_0026A525(); return; } /* je: equal / zero */

loc_0026A4F4: ;
    ecx = ecx + 0x10;
    edx++;
    if (CMP_L(ecx, 0x6BED90)) goto loc_0026A4F0; /* jl: less (signed <) */

loc_0026A500: ;
    edx = 0x600E6C;
    ecx = MEM32(esp + 0xC);
    esi = esi + 0x34;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, 0x603B14);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_0026A51E: ;
    esp = esp + 0x14;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0026A530
 * Original: 0x0026A530 - 0x0026A568 (56 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026A530(void)
{
    int _flags = 0; /* fallback flag var */

loc_0026A530: ;
    eax = MEM32(0x84BEEC);
    esp = esp - 0x80;
    if (CMP_LE(eax & eax, 0)) goto loc_0026A561; /* jle: less or equal (signed <=) */

loc_0026A53F: ;
    PUSH32(esp, 0); sub_0041F190(); /* call 0x0041F190 */

loc_0026A544: ;
    PUSH32(esp, 0x7F);
    PUSH32(esp, eax);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042DD7A(); /* call 0x0042DD7A */

loc_0026A551: ;
    eax = 0; /* xor self */

loc_0026A553: ;
    SET_LO8(ecx, MEM8(esp + eax));
    MEM8(eax + 0x86ED70) = LO8(ecx);
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0026A553; /* jne: not equal / not zero */

loc_0026A561: ;
    esp = esp + 0x80;
    esp += 4; return; /* ret */

}

/**
 * sub_0026A570
 * Original: 0x0026A570 - 0x0026A66E (254 bytes, 75 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026A570(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0026A570: ;
    esp = esp - 0x200;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_0003C1E0(); /* call 0x0003C1E0 */

loc_0026A57D: ;
    eax = MEM32(eax + 0x10);
    eax = eax + 0x38;
    eax = MEM32(eax);
    ecx = MEM32(eax + 0x1C);
    if (TEST_NZ(ecx, ecx)) goto loc_0026A667; /* jne: not equal / not zero */

loc_0026A590: ;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_0003C1E0(); /* call 0x0003C1E0 */

loc_0026A597: ;
    eax = MEM32(eax + 0x10);
    ecx = MEM32(eax + 0x10);
    eax = eax + 0x10;
    eax = MEM32(ecx + 0x1C);
    if (TEST_NZ(eax, eax)) goto loc_0026A667; /* jne: not equal / not zero */

loc_0026A5AB: ;
    eax = MEM32(0x6BEDE8);
    if (CMP_A(eax, 3)) goto loc_0026A63C; /* ja: above (unsigned >) */

loc_0026A5B9: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x26A670); /* switch: 4 entries, 4 targets */
    if (_jt == 0x0026A5C0u) goto loc_0026A5C0;
    if (_jt == 0x0026A5EBu) goto loc_0026A5EB;
    if (_jt == 0x0026A604u) goto loc_0026A604;
    if (_jt == 0x0026A61Du) goto loc_0026A61D;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0026A5C0: ;
    PUSH32(esp, 0x86ED70);
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x603AF0;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_0026A5D1: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x5F8C94);
    edx = esp + 0xC;
    PUSH32(esp, 0x100);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046EE4A(); /* call 0x0046EE4A */

loc_0026A5E6: ;
    esp = esp + 0x14;
    goto loc_0026A63C;

loc_0026A5EB: ;
    PUSH32(esp, 0x100);
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x603AC0;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_0026A5FC: ;
    PUSH32(esp, eax);
    eax = esp + 8;
    PUSH32(esp, eax);
    goto loc_0026A634;

loc_0026A604: ;
    PUSH32(esp, 0x100);
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x603A94;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_0026A615: ;
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    goto loc_0026A634;

loc_0026A61D: ;
    PUSH32(esp, 0x100);
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x603A50;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_0026A62E: ;
    PUSH32(esp, eax);
    edx = esp + 8;
    PUSH32(esp, edx);

loc_0026A634: ;
    PUSH32(esp, 0); sub_0046FCD6(); /* call 0x0046FCD6 */

loc_0026A639: ;
    esp = esp + 0xC;

loc_0026A63C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x5FAE34);
    edi = esp + 0x10;
    PUSH32(esp, 0); sub_00227450(); /* call 0x00227450 */

loc_0026A64E: ;
    esp = esp + 4;
    PUSH32(esp, eax);
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_0003C1E0(); /* call 0x0003C1E0 */

loc_0026A659: ;
    ebx = eax;
    eax = 0x12;
    PUSH32(esp, 0); sub_00232BD0(); /* call 0x00232BD0 */

loc_0026A665: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_0026A667: ;
    esp = esp + 0x200;
    esp += 4; return; /* ret */

}

/**
 * sub_0026A6D0
 * Original: 0x0026A6D0 - 0x0026A71B (75 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026A6D0(void)
{

loc_0026A6D0: ;
    SET_LO8(eax, MEM8(0x849E63));
    SET_LO8(edx, MEM8(0x849E68));
    ecx = SX8(LO8(eax));
    ecx = ecx << 1;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM8(0x849E62) = LO8(eax);
    eax = ecx;
    ecx = ecx >> 2;
    esi = 0x77A490;
    edi = 0x77A4D0;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    SET_LO8(ecx, MEM8(0x849E64));
    POP32(esp, edi);
    MEM8(0x849E63) = 0;
    MEM8(0x862D30) = LO8(ecx);
    MEM8(0x862D31) = LO8(edx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0026A720
 * Original: 0x0026A720 - 0x0026A733 (19 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026A720(void)
{
    int _flags = 0; /* fallback flag var */

loc_0026A720: ;
    SET_LO8(eax, MEM8(0x77A510));
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_0026A733(); return; } /* je: equal / zero */

loc_0026A729: ;
    PUSH32(esp, 0); sub_0021D790(); /* call 0x0021D790 */

loc_0026A72E: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_0026A733(); return; } /* jne: not equal / not zero */

loc_0026A732: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0026A790
 * Original: 0x0026A790 - 0x0026A7A4 (20 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026A790(void)
{
    int _flags = 0; /* fallback flag var */

loc_0026A790: ;
    SET_LO8(ecx, MEM8(0x77A510));
    if (TEST_Z(LO8(ecx), LO8(ecx))) { sub_0026A7A4(); return; } /* je: equal / zero */

loc_0026A79A: ;
    PUSH32(esp, 0); sub_0021D790(); /* call 0x0021D790 */

loc_0026A79F: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_0026A7A4(); return; } /* jne: not equal / not zero */

loc_0026A7A3: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0026A910
 * Original: 0x0026A910 - 0x0026A934 (36 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026A910(void)
{
    int _flags = 0; /* fallback flag var */

loc_0026A910: ;
    SET_LO8(ecx, MEM8(0x849E62));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0026A933; /* je: equal / zero */

loc_0026A91A: ;
    PUSH32(esp, esi);
    esi = SX8(LO8(ecx));
    eax = 0; /* xor self */
    if (CMP_LE(esi & esi, 0)) goto loc_0026A932; /* jle: less or equal (signed <=) */

loc_0026A924: ;
    if (CMP_EQ(MEM8(eax * 2 + 0x77A4D0), LO8(ebx))) { sub_0026A934(); return; } /* je: equal / zero */

loc_0026A92D: ;
    eax++;
    if (CMP_L(eax, esi)) goto loc_0026A924; /* jl: less (signed <) */

loc_0026A932: ;
    POP32(esp, esi);

loc_0026A933: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0026A960
 * Original: 0x0026A960 - 0x0026A98D (45 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026A960(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0026A960: ;
    esp = esp - 0x48;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x54);
    PUSH32(esp, 0x603A40);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_004700A3(); /* call 0x004700A3 */

loc_0026A974: ;
    ebx = eax;
    esp = esp + 8;
    if (TEST_NZ(ebx, ebx)) { sub_0026A98D(); return; } /* jne: not equal / not zero */

loc_0026A97D: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0046E49A(); /* call 0x0046E49A */

loc_0026A984: ;
    esp = esp + 8;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x48;
    esp += 4; return; /* ret */

}

/**
 * sub_0026A9F0
 * Original: 0x0026A9F0 - 0x0026AA17 (39 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026A9F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0026A9F0: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_004700A3(); /* call 0x004700A3 */

loc_0026AA01: ;
    ebx = eax;
    esp = esp + 8;
    if (TEST_NZ(ebx, ebx)) { sub_0026AA17(); return; } /* jne: not equal / not zero */

loc_0026AA0A: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0046E49A(); /* call 0x0046E49A */

loc_0026AA11: ;
    esp = esp + 8;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0026AA60
 * Original: 0x0026AA60 - 0x0026AAA4 (68 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026AA60(void)
{
    int _flags = 0; /* fallback flag var */

loc_0026AA60: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_0003C1E0(); /* call 0x0003C1E0 */

loc_0026AA69: ;
    edi = eax;
    eax = MEM32(edi + 0x10);
    esi = MEM32(eax + 0x28);
    ecx = MEM32(esi + 0x38);
    eax = eax + 0x28;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM8(esi + 0x31) = 0;
    if (TEST_Z(ecx, ecx)) goto loc_0026AA86; /* je: equal / zero */

loc_0026AA7F: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_0026AA86: ;
    ecx = MEM32(esp + 0xC);
    MEM32(esi + 0x38) = ecx;
    eax = MEM32(edi + 0x10);
    edx = MEM32(eax + 0x28);
    eax = eax + 0x28;
    POP32(esp, edi);
    MEM8(edx + 0x30) = 1;
    MEM8(0x862D12) = 0x49;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0026AAB0
 * Original: 0x0026AAB0 - 0x0026AAE1 (49 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026AAB0(void)
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

loc_0026AAB0: ;
    ecx = 0x86EE18;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0026AABA: ;
    fp_push(MEMF(0x86EE10)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp >= 0) /* fcompi */) { sub_0026AAE1(); return; } /* jae: above or equal (unsigned >=) */

loc_0026AAC8: ;
    ecx = 0x86EE18;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0026AAD2: ;
    fp_push(MEMF(0x86EE14)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) { sub_0026AAE1(); return; } /* ja: above (unsigned >) */

loc_0026AADE: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0026AB20
 * Original: 0x0026AB20 - 0x0026AC1B (251 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026AB20(void)
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

loc_0026AB20: ;
    eax = MEM32(0x6C0224);
    if (CMP_NE(eax, 1)) goto loc_0026AB34; /* jne: not equal / not zero */

loc_0026AB2A: ;
    PUSH32(esp, 0); sub_002A64A0(); /* call 0x002A64A0 */

loc_0026AB2F: ;
    eax = MEM32(0x6C0224);

loc_0026AB34: ;
    if (CMP_EQ(eax, 6)) goto loc_0026ABE5; /* je: equal / zero */

loc_0026AB3D: ;
    if (CMP_EQ(eax, 7)) goto loc_0026ABE5; /* je: equal / zero */

loc_0026AB46: ;
    if (CMP_EQ(eax, 8)) goto loc_0026ABE5; /* je: equal / zero */

loc_0026AB4F: ;
    eax = MEM32(esp + 4);
    if (TEST_NZ(eax, eax)) goto loc_0026ABE5; /* jne: not equal / not zero */

loc_0026AB5B: ;
    ecx = 0x86EE18;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0026AB65: ;
    fp_push(MEMF(0x86EE10)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp >= 0) /* fcompi */) goto loc_0026AB89; /* jae: above or equal (unsigned >=) */

loc_0026AB73: ;
    ecx = 0x86EE18;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0026AB7D: ;
    fp_push(MEMF(0x86EE14)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_0026ABE5; /* jbe: below or equal (unsigned <=) */

loc_0026AB89: ;
    PUSH32(esp, 0); sub_0023A590(); /* call 0x0023A590 */

loc_0026AB8E: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0026AC18; /* jne: not equal / not zero */

loc_0026AB96: ;
    SET_LO8(eax, MEM8(0x8498B4));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0026ABE5; /* jne: not equal / not zero */

loc_0026AB9F: ;
    if (CMP_EQ(MEM32(0x849C60), 2)) goto loc_0026ABE5; /* je: equal / zero */

loc_0026ABA8: ;
    SET_LO8(eax, MEM8(0x776278));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0026ABE8; /* jne: not equal / not zero */

loc_0026ABB1: ;
    SET_LO8(eax, MEM8(0x77625E));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0026ABE8; /* jne: not equal / not zero */

loc_0026ABBA: ;
    xmm0 = MEMF(0x776220); /* movss */
    /* ucomiss xmm0, MEMF(0x648D14) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_0026ABE8; /* jnp: not parity */

loc_0026ABCF: ;
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_0026ABE8; /* jnp: not parity */

loc_0026ABDC: ;
    if (CMP_NE(MEM32(0x7FA1F8), 0x1D)) goto loc_0026ABE8; /* jne: not equal / not zero */

loc_0026ABE5: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

loc_0026ABE8: ;
    eax = ZX8(MEM8(0x7FA275));
    PUSH32(esp, esi);
    MEM8(0x77A48C) = 1;
    MEM32(0x77A488) = eax;
    MEM8(0x862D08) = 1;
    PUSH32(esp, 0); sub_0026A680(); /* call 0x0026A680 */

loc_0026AC08: ;
    PUSH32(esp, 0x3F800000);
    esi = 0x86EE10;
    PUSH32(esp, 0); sub_002277B0(); /* call 0x002277B0 */

loc_0026AC17: ;
    POP32(esp, esi);

loc_0026AC18: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0026AC20
 * Original: 0x0026AC20 - 0x0026ACA6 (134 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026AC20(void)
{
    int _flags = 0; /* fallback flag var */

loc_0026AC20: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    PUSH32(esp, 0); sub_004200A0(); /* call 0x004200A0 */

loc_0026AC2A: ;
    if (TEST_Z(eax, eax)) goto loc_0026AC4C; /* je: equal / zero */

loc_0026AC2E: ;
    PUSH32(esp, 0); sub_004237A0(); /* call 0x004237A0 */

loc_0026AC33: ;
    if (TEST_Z(eax, eax)) goto loc_0026AC9B; /* je: equal / zero */

loc_0026AC37: ;
    PUSH32(esp, 0);
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x603A00;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_0026AC45: ;
    PUSH32(esp, 0x6039D0);
    goto loc_0026AC68;

loc_0026AC4C: ;
    if (CMP_NE(MEM8(esi + 0x862D2D), 1)) goto loc_0026AC9B; /* jne: not equal / not zero */

loc_0026AC55: ;
    PUSH32(esp, 0);
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x603994;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_0026AC63: ;
    PUSH32(esp, 0x603968);

loc_0026AC68: ;
    edi = eax;
    PUSH32(esp, 0); sub_00227450(); /* call 0x00227450 */

loc_0026AC6F: ;
    esp = esp + 4;
    PUSH32(esp, eax);
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_0003C1E0(); /* call 0x0003C1E0 */

loc_0026AC7A: ;
    ebx = eax;
    eax = 0x13;
    PUSH32(esp, 0); sub_00232BD0(); /* call 0x00232BD0 */

loc_0026AC86: ;
    PUSH32(esp, 0x40800000);
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0x13);
    PUSH32(esp, 0); sub_0003C1E0(); /* call 0x0003C1E0 */

loc_0026AC94: ;
    ebx = eax;
    PUSH32(esp, 0); sub_00233630(); /* call 0x00233630 */

loc_0026AC9B: ;
    POP32(esp, edi);
    MEM8(esi + 0x862D2D) = 0;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0026ACB0
 * Original: 0x0026ACB0 - 0x0026AE0D (349 bytes, 102 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026ACB0(void)
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

loc_0026ACB0: ;
    PUSH32(esp, ecx);
    (void)0; /* test MEM8(0x877DCC), 1 - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    if (TEST_NZ(MEM8(0x877DCC), 1)) goto loc_0026ACE2; /* jne: not equal / not zero */

loc_0026ACBF: ;
    eax = MEM32(0x877DCC);
    eax = eax | 1;
    ecx = 0x877DC8;
    MEM32(0x877DCC) = eax;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0026ACD6: ;
    MEMF(0x877DC0) = (float)fp_top(); fp_pop(); /* fst */
    MEMF(0x877DC4) = (float)fp_top(); fp_popp(); /* fstp */

loc_0026ACE2: ;
    SET_LO8(eax, MEM8(0x849C0E));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0026AE0A; /* jne: not equal / not zero */

loc_0026ACEF: ;
    PUSH32(esp, esi);
    esi = ZX8(MEM8(0x862D13));
    eax = esi;
    MEM8(esi + 0x849DC4) = 1;
    PUSH32(esp, 0); sub_00422740(); /* call 0x00422740 */

loc_0026AD05: ;
    if (CMP_EQ(eax, 2)) goto loc_0026AD23; /* je: equal / zero */

loc_0026AD0A: ;
    eax = esi;
    PUSH32(esp, 0); sub_00422740(); /* call 0x00422740 */

loc_0026AD11: ;
    if (CMP_EQ(eax, 1)) goto loc_0026AE09; /* je: equal / zero */

loc_0026AD1A: ;
    PUSH32(esp, 0); sub_00422590(); /* call 0x00422590 */

loc_0026AD1F: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0026AD23: ;
    ecx = 0x877DC8;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0026AD2D: ;
    fp_push(MEMF(0x877DC0)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp >= 0) /* fcompi */) goto loc_0026AD55; /* jae: above or equal (unsigned >=) */

loc_0026AD3B: ;
    ecx = 0x877DC8;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0026AD45: ;
    fp_push(MEMF(0x877DC4)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_0026AE09; /* jbe: below or equal (unsigned <=) */

loc_0026AD55: ;
    ecx = 0x877DC8;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0026AD5F: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    ecx = 0x877DC8;
    MEMF(0x877DC0) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0026AD75: ;
    eax = MEM32(esp + 0x14);
    MEMF(0x877DC4) = (float)fp_top(); fp_popp(); /* fstp */
    MEM8(ebp) = 0;
    MEM8(eax) = 0;
    eax = ZX8(MEM8(0x862D13));
    PUSH32(esp, 0); sub_004227A0(); /* call 0x004227A0 */

loc_0026AD92: ;
    esi = 0; /* xor self */
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 8) = eax;
    if (CMP_LE(eax & eax, 0)) goto loc_0026AE09; /* jle: less or equal (signed <=) */

loc_0026AD9C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = edi;

loc_0026ADA0: ;
    ecx = ZX8(MEM8(0x862D13));
    eax = esi;
    PUSH32(esp, 0); sub_00422800(); /* call 0x00422800 */

loc_0026ADAE: ;
    edi = eax;
    (void)0; /* cmp MEM8(ebp), 0 - flags set for next jcc */
    ebx = edx;
    if (CMP_NE(MEM8(ebp), 0)) goto loc_0026ADCD; /* jne: not equal / not zero */

loc_0026ADB8: ;
    eax = ZX8(MEM8(0x862D13));
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00422EC0(); /* call 0x00422EC0 */

loc_0026ADC6: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0026ADD2; /* je: equal / zero */

loc_0026ADCD: ;
    eax = 1;

loc_0026ADD2: ;
    ecx = MEM32(esp + 0x1C);
    MEM8(ebp) = LO8(eax);
    if (CMP_NE(MEM8(ecx), 0)) goto loc_0026ADF3; /* jne: not equal / not zero */

loc_0026ADDE: ;
    eax = ZX8(MEM8(0x862D13));
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00423510(); /* call 0x00423510 */

loc_0026ADEC: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0026ADF8; /* je: equal / zero */

loc_0026ADF3: ;
    eax = 1;

loc_0026ADF8: ;
    edx = MEM32(esp + 0x1C);
    MEM8(edx) = LO8(eax);
    eax = MEM32(esp + 0x10);
    esi++;
    if (CMP_L(esi, eax)) goto loc_0026ADA0; /* jl: less (signed <) */

loc_0026AE07: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_0026AE09: ;
    POP32(esp, esi);

loc_0026AE0A: ;
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0026AE10
 * Original: 0x0026AE10 - 0x0026B03D (557 bytes, 139 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026AE10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0026AE10: ;
    eax = MEM32(0x8470FC);
    esp = esp - 0x110;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(eax + 8);
    SET_LO8(eax, MEM8(esp + 0x11C));
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(0x849E60) = 0;
    MEM8(0x77A510) = LO8(eax);
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_0026B03D(); return; } /* jne: not equal / not zero */

loc_0026AE3F: ;
    SET_LO8(ebx, MEM8(0x862D08));
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    MEM8(0x863AF9) = LO8(eax);
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_0026AE73; /* je: equal / zero */

loc_0026AE4E: ;
    SET_LO8(edx, LO8(ebx));
    SET_LO8(edx, LO8(edx) - 1);
    eax = ZX8(LO8(edx));
    (void)0; /* cmp eax, 2 - flags set for next jcc */
    MEM8(0x862D13) = LO8(edx);
    if (CMP_GE(eax, 2)) goto loc_0026AE6C; /* jge: greater or equal (signed >=) */

loc_0026AE60: ;
    ecx = MEM32(eax * 4 + 0x8470FC);
    ebp = MEM32(ecx + 8);
    goto loc_0026AE79;

loc_0026AE6C: ;
    ebp = 0x75A0B4;
    goto loc_0026AE79;

loc_0026AE73: ;
    SET_LO8(edx, MEM8(0x862D13));

loc_0026AE79: ;
    SET_LO8(eax, MEM8(0x84725D));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0026AEB6; /* je: equal / zero */

loc_0026AE82: ;
    ecx = MEM32(ebp + 4);
    if (TEST_Z(HI8(ecx), 4)) goto loc_0026AEB6; /* je: equal / zero */

loc_0026AE8A: ;
    ecx = MEM32(ebp + 8);
    if (TEST_Z(HI8(ecx), 0x10)) goto loc_0026AEB6; /* je: equal / zero */

loc_0026AE92: ;
    SET_LO8(ecx, MEM8(0x87585F));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0026AEAD; /* jne: not equal / not zero */

loc_0026AE9C: ;
    SET_LO8(ecx, MEM8(0x863AF8));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    SET_LO8(ecx, (TEST_Z(LO8(ecx), LO8(ecx))) ? 1 : 0); /* sete */
    MEM8(0x863AF8) = LO8(ecx);

loc_0026AEAD: ;
    MEM8(0x87585F) = 1;
    goto loc_0026AEBD;

loc_0026AEB6: ;
    MEM8(0x87585F) = 0;

loc_0026AEBD: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0026AEC6; /* jne: not equal / not zero */

loc_0026AEC1: ;
    MEM8(0x863AF8) = LO8(eax);

loc_0026AEC6: ;
    xmm2 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x7FA218); /* movss */
    xmm3 = MEMF(0x648D18); /* movss */
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    SET_LO8(eax, (TEST_Z(LO8(ebx), LO8(ebx))) ? 1 : 0); /* sete */
    eax = ZX8(LO8(eax));
    eax = eax << 2;
    /* comiss xmm2, MEMF(eax + 0x776144) - sets EFLAGS */
    if ((xmm2 < MEMF(eax + 0x776144))) goto loc_0026AF1C; /* jb: below (unsigned <) */

loc_0026AEED: ;
    xmm4 = MEMF(0x648D14); /* movss */
    ecx = 0x776148;
    ecx = ecx - eax;
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm0 = xmm0 + MEMF(ecx); /* addss */
    /* comiss xmm0, xmm4 - sets EFLAGS */
    MEMF(eax + 0x776144) = xmm2; /* movss */
    MEMF(ecx) = xmm0; /* movss */
    if ((xmm0 <= xmm4)) goto loc_0026AF1C; /* jbe: below or equal (unsigned <=) */

loc_0026AF18: ;
    MEMF(ecx) = xmm4; /* movss */

loc_0026AF1C: ;
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_0026AFB8; /* jne: not equal / not zero */

loc_0026AF24: ;
    /* comiss xmm2, MEMF(0x776148) - sets EFLAGS */
    if ((xmm2 < MEMF(0x776148))) goto loc_0026AFB8; /* jb: below (unsigned <) */

loc_0026AF31: ;
    SET_LO8(eax, MEM8(0x862D09));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0026AF56; /* je: equal / zero */

loc_0026AF3A: ;
    SET_LO8(eax, MEM8(0x849E51));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0026AF56; /* je: equal / zero */

loc_0026AF43: ;
    ecx = MEM32(0x84B11C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    MEM8(0x849E51) = LO8(ebx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_0026AF56: ;
    eax = MEM32(0x849E54);
    (void)0; /* cmp eax, 3 - flags set for next jcc */
    MEM8(0x862D09) = 0;
    MEM8(0x862D12) = 0;
    MEM8(0x862D11) = 0;
    MEM8(0x862D15) = 0;
    if (CMP_EQ(eax, 3)) goto loc_0026AF81; /* je: equal / zero */

loc_0026AF7C: ;
    if (CMP_NE(eax, 1)) goto loc_0026AF87; /* jne: not equal / not zero */

loc_0026AF81: ;
    MEM32(0x849E54) = edi;

loc_0026AF87: ;
    eax = MEM32(0x849E58);
    if (CMP_EQ(eax, 3)) goto loc_0026AF96; /* je: equal / zero */

loc_0026AF91: ;
    if (CMP_NE(eax, 1)) goto loc_0026AF9C; /* jne: not equal / not zero */

loc_0026AF96: ;
    MEM32(0x849E58) = edi;

loc_0026AF9C: ;
    esi = 0; /* xor self */
    edi = edi;

loc_0026AFA0: ;
    eax = esi;
    PUSH32(esp, 0); sub_0026AC20(); /* call 0x0026AC20 */

loc_0026AFA7: ;
    esi++;
    if (CMP_L(esi, 2)) goto loc_0026AFA0; /* jl: less (signed <) */

loc_0026AFAD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x110;
    esp += 4; return; /* ret */

loc_0026AFB8: ;
    xmm0 = MEMF(eax + 0x776144); /* movss */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    MEMF(eax + 0x776144) = xmm0; /* movss */
    if ((xmm2 <= xmm0)) goto loc_0026AFDD; /* jbe: below or equal (unsigned <=) */

loc_0026AFD5: ;
    MEMF(eax + 0x776144) = xmm2; /* movss */

loc_0026AFDD: ;
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_0026AFF1; /* jne: not equal / not zero */

loc_0026AFE1: ;
    /* comiss xmm2, MEMF(0x776148) - sets EFLAGS */
    if ((xmm2 < MEMF(0x776148))) goto loc_0026AFF1; /* jb: below (unsigned <) */

loc_0026AFEA: ;
    MEM8(0x849E60) = 1;

loc_0026AFF1: ;
    eax = MEM32(0x6BAF28);
    xmm0 = MEMF(0x8497DC); /* movss */
    MEM8(0x862D09) = 1;
    MEMF(0x84B508) = xmm0; /* movss */
    xmm0 = MEMF(eax + 4); /* movss */
    MEMF(0x77615C) = xmm0; /* movss */
    xmm0 = MEMF(eax + 8); /* movss */
    SET_LO8(eax, MEM8(esp + 0x124));
    MEM32(0x776158) = edi;
    MEMF(0x77615C) = xmm0; /* movss */
    MEM8(0x776154) = 1;
    g_seh_ebp = ebp; sub_0026B06F(); return; /* tail jmp 0x0026B06F */

}

/**
 * sub_0026B960
 * Original: 0x0026B960 - 0x0026B9F1 (145 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026B960(void)
{
    int _flags = 0; /* fallback flag var */

loc_0026B960: ;
    esp = esp - 0x80;
    if (CMP_EQ(eax, 0xC9)) goto loc_0026B974; /* je: equal / zero */

loc_0026B96D: ;
    if (CMP_NE(eax, 0xCD)) goto loc_0026B9EA; /* jne: not equal / not zero */

loc_0026B974: ;
    SET_LO8(eax, MEM8(0x849E08));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0026B9B1; /* je: equal / zero */

loc_0026B97D: ;
    PUSH32(esp, 0x7F);
    PUSH32(esp, 0x6039D0);
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM8(esi + 0x109) = 1;
    PUSH32(esp, 0); sub_0042DD7A(); /* call 0x0042DD7A */

loc_0026B995: ;
    eax = esi + 0x10A;
    edx = esp;
    edx = edx - eax;

loc_0026B9A0: ;
    SET_LO8(ecx, MEM8(edx + eax));
    MEM8(eax) = LO8(ecx);
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0026B9A0; /* jne: not equal / not zero */

loc_0026B9AA: ;
    esp = esp + 0x80;
    esp += 4; return; /* ret */

loc_0026B9B1: ;
    SET_LO8(eax, MEM8(0x849E09));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0026B9EA; /* je: equal / zero */

loc_0026B9BA: ;
    PUSH32(esp, 0x7F);
    PUSH32(esp, 0x603860);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    MEM8(esi + 0x109) = 1;
    PUSH32(esp, 0); sub_0042DD7A(); /* call 0x0042DD7A */

loc_0026B9D2: ;
    eax = esi + 0x10A;
    edx = esp;
    edx = edx - eax;
    /* nop */

loc_0026B9E0: ;
    SET_LO8(ecx, MEM8(edx + eax));
    MEM8(eax) = LO8(ecx);
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0026B9E0; /* jne: not equal / not zero */

loc_0026B9EA: ;
    esp = esp + 0x80;
    esp += 4; return; /* ret */

}

/**
 * sub_0026BA00
 * Original: 0x0026BA00 - 0x0026BAA4 (164 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026BA00(void)
{
    int _flags = 0; /* fallback flag var */

loc_0026BA00: ;
    esp = esp - 0x80;
    PUSH32(esp, 0x60383C);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00470101(); /* call 0x00470101 */

loc_0026BA11: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0026BA2A; /* je: equal / zero */

loc_0026BA18: ;
    PUSH32(esp, 0x5F74CC);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00470101(); /* call 0x00470101 */

loc_0026BA23: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_0026BA9D; /* jne: not equal / not zero */

loc_0026BA2A: ;
    SET_LO8(eax, MEM8(0x849E08));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0026BA67; /* je: equal / zero */

loc_0026BA33: ;
    PUSH32(esp, 0x7F);
    PUSH32(esp, 0x6039D0);
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM8(esi + 0x109) = 1;
    PUSH32(esp, 0); sub_0042DD7A(); /* call 0x0042DD7A */

loc_0026BA4B: ;
    eax = esi + 0x10A;
    edx = esp;
    edx = edx - eax;

loc_0026BA56: ;
    SET_LO8(ecx, MEM8(edx + eax));
    MEM8(eax) = LO8(ecx);
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0026BA56; /* jne: not equal / not zero */

loc_0026BA60: ;
    esp = esp + 0x80;
    esp += 4; return; /* ret */

loc_0026BA67: ;
    SET_LO8(eax, MEM8(0x849E09));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0026BA9D; /* je: equal / zero */

loc_0026BA70: ;
    PUSH32(esp, 0x7F);
    PUSH32(esp, 0x603860);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    MEM8(esi + 0x109) = 1;
    PUSH32(esp, 0); sub_0042DD7A(); /* call 0x0042DD7A */

loc_0026BA88: ;
    eax = esi + 0x10A;
    edx = esp;
    edx = edx - eax;

loc_0026BA93: ;
    SET_LO8(ecx, MEM8(edx + eax));
    MEM8(eax) = LO8(ecx);
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0026BA93; /* jne: not equal / not zero */

loc_0026BA9D: ;
    esp = esp + 0x80;
    esp += 4; return; /* ret */

}

/**
 * sub_0026BAB0
 * Original: 0x0026BAB0 - 0x0026BCC8 (536 bytes, 144 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026BAB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0026BAB0: ;
    eax = MEM32(esp + 4);
    esp = esp - 0x304;
    if (CMP_A(eax, 8)) goto loc_0026BCC1; /* ja: above (unsigned >) */

loc_0026BAC3: ;
    PUSH32(esp, esi);
    { uint32_t _jt = MEM32(eax * 4 + 0x26BCC8); /* switch: 9 entries, 5 targets */
    if (_jt == 0x0026BACBu) goto loc_0026BACB;
    if (_jt == 0x0026BB67u) goto loc_0026BB67;
    if (_jt == 0x0026BC22u) goto loc_0026BC22;
    if (_jt == 0x0026BC79u) goto loc_0026BC79;
    if (_jt == 0x0026BCC0u) goto loc_0026BCC0;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0026BACB: ;
    SET_LO8(eax, MEM8(0x849E08));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0026BB17; /* je: equal / zero */

loc_0026BAD4: ;
    esi = MEM32(esp + 0x310);
    PUSH32(esp, 0x7F);
    PUSH32(esp, 0x6039D0);
    eax = esp + 0x210;
    PUSH32(esp, eax);
    MEM8(esi + 0x109) = 1;
    PUSH32(esp, 0); sub_0042DD7A(); /* call 0x0042DD7A */

loc_0026BAF6: ;
    eax = esi + 0x10A;
    edx = esp + 0x208;
    edx = edx - eax;

loc_0026BB05: ;
    SET_LO8(ecx, MEM8(edx + eax));
    MEM8(eax) = LO8(ecx);
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0026BB05; /* jne: not equal / not zero */

loc_0026BB0F: ;
    POP32(esp, esi);
    esp = esp + 0x304;
    esp += 4; return; /* ret */

loc_0026BB17: ;
    SET_LO8(eax, MEM8(0x849E09));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0026BCC0; /* je: equal / zero */

loc_0026BB24: ;
    esi = MEM32(esp + 0x310);
    PUSH32(esp, 0x7F);
    PUSH32(esp, 0x603860);
    ecx = esp + 0x110;
    PUSH32(esp, ecx);
    MEM8(esi + 0x109) = 1;
    PUSH32(esp, 0); sub_0042DD7A(); /* call 0x0042DD7A */

loc_0026BB46: ;
    eax = esi + 0x10A;
    edx = esp + 0x108;
    edx = edx - eax;

loc_0026BB55: ;
    SET_LO8(ecx, MEM8(edx + eax));
    MEM8(eax) = LO8(ecx);
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0026BB55; /* jne: not equal / not zero */

loc_0026BB5F: ;
    POP32(esp, esi);
    esp = esp + 0x304;
    esp += 4; return; /* ret */

loc_0026BB67: ;
    eax = ZX8(MEM8(0x862D13));
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0); sub_0026D550(); /* call 0x0026D550 */

loc_0026BB84: ;
    ecx = MEM32(esp + 0x10);
    esp = esp + 0xC;
    if (TEST_Z(ecx, ecx)) goto loc_0026BBD2; /* je: equal / zero */

loc_0026BB8F: ;
    esi = MEM32(esp + 0x310);
    PUSH32(esp, 0x7F);
    PUSH32(esp, 0x603810);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    MEM8(esi + 0x109) = 1;
    PUSH32(esp, 0); sub_0042DD7A(); /* call 0x0042DD7A */

loc_0026BBAE: ;
    eax = esi + 0x10A;
    edx = esp + 8;
    edx = edx - eax;
    /* nop */

loc_0026BBC0: ;
    SET_LO8(ecx, MEM8(edx + eax));
    MEM8(eax) = LO8(ecx);
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0026BBC0; /* jne: not equal / not zero */

loc_0026BBCA: ;
    POP32(esp, esi);
    esp = esp + 0x304;
    esp += 4; return; /* ret */

loc_0026BBD2: ;
    if (TEST_Z(eax, eax)) goto loc_0026BCC0; /* je: equal / zero */

loc_0026BBDA: ;
    esi = MEM32(esp + 0x310);
    PUSH32(esp, 0x7F);
    PUSH32(esp, 0x6037E8);
    ecx = esp + 0x90;
    PUSH32(esp, ecx);
    MEM8(esi + 0x109) = 1;
    PUSH32(esp, 0); sub_0042DD7A(); /* call 0x0042DD7A */

loc_0026BBFC: ;
    eax = esi + 0x10A;
    edx = esp + 0x88;
    edx = edx - eax;
    goto loc_0026BC10;

    /* nop */

loc_0026BC10: ;
    SET_LO8(ecx, MEM8(edx + eax));
    MEM8(eax) = LO8(ecx);
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0026BC10; /* jne: not equal / not zero */

loc_0026BC1A: ;
    POP32(esp, esi);
    esp = esp + 0x304;
    esp += 4; return; /* ret */

loc_0026BC22: ;
    eax = ZX8(MEM8(0x862D13));
    PUSH32(esp, 0); sub_00420400(); /* call 0x00420400 */

loc_0026BC2E: ;
    if (TEST_Z(eax, eax)) goto loc_0026BCC0; /* je: equal / zero */

loc_0026BC36: ;
    esi = MEM32(esp + 0x310);
    PUSH32(esp, 0x7F);
    PUSH32(esp, 0x5FAB78);
    edx = esp + 0x190;
    PUSH32(esp, edx);
    MEM8(esi + 0x109) = 1;
    PUSH32(esp, 0); sub_0042DD7A(); /* call 0x0042DD7A */

loc_0026BC58: ;
    eax = esi + 0x10A;
    edx = esp + 0x188;
    edx = edx - eax;

loc_0026BC67: ;
    SET_LO8(ecx, MEM8(edx + eax));
    MEM8(eax) = LO8(ecx);
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0026BC67; /* jne: not equal / not zero */

loc_0026BC71: ;
    POP32(esp, esi);
    esp = esp + 0x304;
    esp += 4; return; /* ret */

loc_0026BC79: ;
    eax = MEM32(0x849E74);
    SET_LO8(ecx, MEM8(eax + 0x10));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0026BCC0; /* je: equal / zero */

loc_0026BC85: ;
    esi = MEM32(esp + 0x310);
    PUSH32(esp, 0x7F);
    PUSH32(esp, 0x5FAB78);
    ecx = esp + 0x290;
    PUSH32(esp, ecx);
    MEM8(esi + 0x109) = 1;
    PUSH32(esp, 0); sub_0042DD7A(); /* call 0x0042DD7A */

loc_0026BCA7: ;
    eax = esi + 0x10A;
    edx = esp + 0x288;
    edx = edx - eax;

loc_0026BCB6: ;
    SET_LO8(ecx, MEM8(edx + eax));
    MEM8(eax) = LO8(ecx);
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0026BCB6; /* jne: not equal / not zero */

loc_0026BCC0: ;
    POP32(esp, esi);

loc_0026BCC1: ;
    esp = esp + 0x304;
    esp += 4; return; /* ret */

}

/**
 * sub_0026BCF0
 * Original: 0x0026BCF0 - 0x0026BF4C (604 bytes, 156 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026BCF0(void)
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

loc_0026BCF0: ;
    eax = MEM32(0x6C0224);
    esp = esp - 0x888;
    if (CMP_NE(eax, 1)) goto loc_0026BD0A; /* jne: not equal / not zero */

loc_0026BD00: ;
    PUSH32(esp, 0); sub_002A64A0(); /* call 0x002A64A0 */

loc_0026BD05: ;
    eax = MEM32(0x6C0224);

loc_0026BD0A: ;
    if (CMP_EQ(eax, 7)) goto loc_0026BF45; /* je: equal / zero */

loc_0026BD13: ;
    if (CMP_EQ(eax, 8)) goto loc_0026BF45; /* je: equal / zero */

loc_0026BD1C: ;
    eax = ZX8(MEM8(0x862D13));
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = 0x91;
    PUSH32(esp, 0); sub_00420110(); /* call 0x00420110 */

loc_0026BD2F: ;
    if (TEST_Z(eax, eax)) goto loc_0026BD38; /* je: equal / zero */

loc_0026BD33: ;
    ebp = 0x199;

loc_0026BD38: ;
    eax = MEM32(0x7FA1F8);
    ebx = 0; /* xor self */
    if (CMP_EQ(eax, 0x1D)) goto loc_0026BD78; /* je: equal / zero */

loc_0026BD44: ;
    (void)0; /* cmp MEM8(0x863D11), LO8(ebx) - flags set for next jcc */
    eax = MEM32(0x863D08);
    if (CMP_EQ(MEM8(0x863D11), LO8(ebx))) goto loc_0026BD61; /* je: equal / zero */

loc_0026BD51: ;
    if (CMP_NE(eax, 3)) goto loc_0026BD61; /* jne: not equal / not zero */

loc_0026BD56: ;
    if (CMP_EQ(MEM32(0x863D04), 3)) goto loc_0026BD75; /* je: equal / zero */

loc_0026BD5F: ;
    goto loc_0026BD78;

loc_0026BD61: ;
    if (CMP_NE(eax, 2)) goto loc_0026BD78; /* jne: not equal / not zero */

loc_0026BD66: ;
    eax = MEM32(0x863D04);
    if (CMP_EQ(eax, 2)) goto loc_0026BD78; /* je: equal / zero */

loc_0026BD70: ;
    if (CMP_EQ(eax, 1)) goto loc_0026BD78; /* je: equal / zero */

loc_0026BD75: ;
    ebp = ebp | 4;

loc_0026BD78: ;
    eax = ZX8(MEM8(0x862D13));
    PUSH32(esp, 0); sub_004201F0(); /* call 0x004201F0 */

loc_0026BD84: ;
    if (TEST_Z(eax, eax)) goto loc_0026BD8D; /* je: equal / zero */

loc_0026BD88: ;
    ebp = 0x200;

loc_0026BD8D: ;
    if (CMP_EQ(MEM8(0x863D11), LO8(ebx))) goto loc_0026BD9E; /* je: equal / zero */

loc_0026BD95: ;
    if (CMP_EQ(MEM32(0x863D04), 3)) goto loc_0026BDA4; /* je: equal / zero */

loc_0026BD9E: ;
    ebp = ebp | 0x200;

loc_0026BDA4: ;
    eax = ZX8(MEM8(0x862D13));
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_004200A0(); /* call 0x004200A0 */

loc_0026BDB2: ;
    if (TEST_Z(eax, eax)) goto loc_0026BDC2; /* je: equal / zero */

loc_0026BDB6: ;
    esi = ZX8(MEM8(0x862D13));
    PUSH32(esp, 0); sub_00426D20(); /* call 0x00426D20 */

loc_0026BDC2: ;
    if (CMP_EQ(MEM32(0x849E5C), ebx)) goto loc_0026BE20; /* je: equal / zero */

loc_0026BDCA: ;
    edi = esp + 0x18;
    PUSH32(esp, 0); sub_00289650(); /* call 0x00289650 */

loc_0026BDD3: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x5F9B74);
    eax = esp + 0xA0;
    PUSH32(esp, 0x400);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046EE4A(); /* call 0x0046EE4A */

loc_0026BDEB: ;
    esp = esp + 0x10;
    edi = esp + 0x98;
    eax = esp + 0x10;
    PUSH32(esp, 0); sub_00060900(); /* call 0x00060900 */

loc_0026BDFE: ;
    esi = MEM32(esp + 0x10);
    PUSH32(esp, 0); sub_0020C6E0(); /* call 0x0020C6E0 */

loc_0026BE07: ;
    if (CMP_EQ(esi, ebx)) goto loc_0026BE20; /* je: equal / zero */

loc_0026BE0B: ;
    eax = MEM32(esp + 0x14);
    MEM32(eax) = MEM32(eax) - 1;
    if ((MEM32(eax) != 0)) goto loc_0026BE20; /* jne: not equal / not zero */

loc_0026BE13: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0026BE1D: ;
    esp = esp + 4;

loc_0026BE20: ;
    PUSH32(esp, 0x26BAB0);
    PUSH32(esp, 0x12);
    PUSH32(esp, 9);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x1AE);
    ecx = ebp;
    PUSH32(esp, 0); sub_00277CD0(); /* call 0x00277CD0 */

loc_0026BE36: ;
    SET_LO8(eax, MEM8(0x862D10));
    esp = esp + 0x14;
    if (TEST_Z(LO8(eax), 4)) goto loc_0026BEF1; /* je: equal / zero */

loc_0026BE46: ;
    PUSH32(esp, 0); sub_0026A720(); /* call 0x0026A720 */

loc_0026BE4B: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0026BEF1; /* je: equal / zero */

loc_0026BE53: ;
    eax = (uint32_t)(int32_t)SMEM8(0x862D11);
    if (CMP_A(eax, 9)) goto loc_0026BEEB; /* ja: above (unsigned >) */

loc_0026BE63: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x26BF4C); /* switch: 10 entries, 10 targets */
    if (_jt == 0x0026BE6Au) goto loc_0026BE6A;
    if (_jt == 0x0026BE79u) goto loc_0026BE79;
    if (_jt == 0x0026BE88u) goto loc_0026BE88;
    if (_jt == 0x0026BE91u) goto loc_0026BE91;
    if (_jt == 0x0026BEA6u) goto loc_0026BEA6;
    if (_jt == 0x0026BEAFu) goto loc_0026BEAF;
    if (_jt == 0x0026BEB8u) goto loc_0026BEB8;
    if (_jt == 0x0026BEC1u) goto loc_0026BEC1;
    if (_jt == 0x0026BECAu) goto loc_0026BECA;
    if (_jt == 0x0026BEDDu) goto loc_0026BEDD;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0026BE6A: ;
    MEM8(0x862D12) = 1;
    MEM8(0x862D14) = LO8(ebx);
    goto loc_0026BEEB;

loc_0026BE79: ;
    MEM8(0x862D12) = 2;
    MEM8(0x862D14) = LO8(ebx);
    goto loc_0026BEEB;

loc_0026BE88: ;
    MEM8(0x862D12) = 3;
    goto loc_0026BEEB;

loc_0026BE91: ;
    MEM32(0x862D70) = ebx;
    MEM32(0x862D74) = ebx;
    MEM8(0x862D12) = 0x33;
    goto loc_0026BEEB;

loc_0026BEA6: ;
    MEM8(0x862D12) = 0x21;
    goto loc_0026BEE4;

loc_0026BEAF: ;
    MEM8(0x862D12) = 0x11;
    goto loc_0026BEEB;

loc_0026BEB8: ;
    MEM8(0x862D12) = 0x29;
    goto loc_0026BEEB;

loc_0026BEC1: ;
    MEM8(0x862D12) = 0x15;
    goto loc_0026BEE4;

loc_0026BECA: ;
    edx = MEM32(0x849E74);
    (void)0; /* cmp MEM8(edx + 0x10), LO8(ebx) - flags set for next jcc */
    SET_LO8(ecx, (CMP_EQ(MEM8(edx + 0x10), LO8(ebx))) ? 1 : 0); /* sete */
    PUSH32(esp, 0); sub_0027B850(); /* call 0x0027B850 */

loc_0026BEDB: ;
    goto loc_0026BEE4;

loc_0026BEDD: ;
    MEM8(0x862D12) = 0x1A;

loc_0026BEE4: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_002431E0(); /* call 0x002431E0 */

loc_0026BEEB: ;
    MEM8(0x862D11) = LO8(ebx);

loc_0026BEF1: ;
    if (TEST_Z(MEM8(0x862D10), 8)) goto loc_0026BF28; /* je: equal / zero */

loc_0026BEFA: ;
    ecx = 0x86EE18;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0026BF04: ;
    fp_push(MEMF(0x86EE10)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp >= 0) /* fcompi */) goto loc_0026BF30; /* jae: above or equal (unsigned >=) */

loc_0026BF12: ;
    ecx = 0x86EE18;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0026BF1C: ;
    fp_push(MEMF(0x86EE14)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_0026BF30; /* ja: above (unsigned >) */

loc_0026BF28: ;
    if (CMP_EQ(MEM8(0x849C0E), LO8(ebx))) goto loc_0026BF41; /* je: equal / zero */

loc_0026BF30: ;
    PUSH32(esp, 5);
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_0026BF39: ;
    esp = esp + 4;
    PUSH32(esp, 0); sub_0026AAB0(); /* call 0x0026AAB0 */

loc_0026BF41: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0026BF45: ;
    esp = esp + 0x888;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0026BF80
 * Original: 0x0026BF80 - 0x0026CADE (2910 bytes, 769 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026BF80(void)
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

loc_0026BF80: ;
    esp = esp - 0x474;
    PUSH32(esp, ebx);
    SET_LO8(ebx, LO8(eax));
    if (TEST_NZ(MEM8(0x87C81C), 1)) goto loc_0026BFB5; /* jne: not equal / not zero */

loc_0026BF92: ;
    eax = MEM32(0x87C81C);
    eax = eax | 1;
    ecx = 0x87C818;
    MEM32(0x87C81C) = eax;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0026BFA9: ;
    MEMF(0x87C810) = (float)fp_top(); fp_pop(); /* fst */
    MEMF(0x87C814) = (float)fp_top(); fp_popp(); /* fstp */

loc_0026BFB5: ;
    SET_LO8(eax, MEM8(0x6BEDEC));
    if (CMP_EQ(LO8(eax), 0xFF)) goto loc_0026BFC6; /* je: equal / zero */

loc_0026BFBE: ;
    if (CMP_NE(LO8(eax), 7)) goto loc_0026CAD6; /* jne: not equal / not zero */

loc_0026BFC6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x84CA48);
    PUSH32(esp, 0x84CDE0);
    PUSH32(esp, 0); sub_0046FCD6(); /* call 0x0046FCD6 */

loc_0026BFD8: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x5F59F0);
    PUSH32(esp, 0x84CA48);
    PUSH32(esp, 0); sub_0046FCD6(); /* call 0x0046FCD6 */

loc_0026BFE9: ;
    SET_LO8(eax, MEM8(0x87585E));
    esp = esp + 0x18;
    esi = 0; /* xor self */
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(0x849931) = 1;
    MEM8(0x84725C) = 1;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0026C018; /* je: equal / zero */

loc_0026C005: ;
    PUSH32(esp, 0); sub_0026D460(); /* call 0x0026D460 */

loc_0026C00A: ;
    POP32(esp, esi);
    MEM8(0x87585E) = LO8(eax);
    POP32(esp, ebx);
    esp = esp + 0x474;
    esp += 4; return; /* ret */

loc_0026C018: ;
    PUSH32(esp, ebp);
    ebp = ZX8(LO8(ebx));
    eax = MEM32(ebp * 4 + 0x849E54);
    (void)0; /* cmp eax, 2 - flags set for next jcc */
    PUSH32(esp, edi);
    edi = ebp * 4 + 0x849E54;
    MEM32(esp + 0x20) = ebp;
    if (CMP_GE(eax, 2)) goto loc_0026CAD3; /* jge: greater or equal (signed >=) */

loc_0026C038: ;
    if (CMP_NE(eax, esi)) goto loc_0026C070; /* jne: not equal / not zero */

loc_0026C03C: ;
    SET_LO8(eax, MEM8(0x86E988));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(0x862C41) = 0;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0026C063; /* jne: not equal / not zero */

loc_0026C04C: ;
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(0x6BCFF0) = xmm0; /* movss */
    MEM8(0x862C59) = 0;

loc_0026C063: ;
    MEM32(ebp * 4 + 0x862C44) = esi;
    MEM32(edi) = 1;

loc_0026C070: ;
    SET_LO8(eax, MEM8(0x77A510));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(esp + 0x1C) = esi;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0026C0A0; /* jne: not equal / not zero */

loc_0026C07D: ;
    SET_LO8(eax, MEM8(0x849C0E));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0026C0A0; /* jne: not equal / not zero */

loc_0026C086: ;
    SET_LO8(eax, MEM8(0x862D08));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0026C0A0; /* je: equal / zero */

loc_0026C08F: ;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_0003C1E0(); /* call 0x0003C1E0 */

loc_0026C096: ;
    eax = MEM32(eax + 0x10);
    ecx = MEM32(eax + 0x24);
    MEM8(ecx + 0x30) = 1;

loc_0026C0A0: ;
    eax = (uint32_t)(int32_t)SMEM8(0x862C41);
    if (CMP_A(eax, 8)) goto loc_0026CAC9; /* ja: above (unsigned >) */

loc_0026C0B0: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x26CAE0); /* switch: 9 entries, 8 targets */
    if (_jt == 0x0026C0B7u) goto loc_0026C0B7;
    if (_jt == 0x0026C433u) goto loc_0026C433;
    if (_jt == 0x0026C69Du) goto loc_0026C69D;
    if (_jt == 0x0026C76Eu) goto loc_0026C76E;
    if (_jt == 0x0026C874u) goto loc_0026C874;
    if (_jt == 0x0026C9B3u) goto loc_0026C9B3;
    if (_jt == 0x0026CA30u) goto loc_0026CA30;
    if (_jt == 0x0026CAC9u) goto loc_0026CAC9;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0026C0B7: ;
    PUSH32(esp, 0); sub_0041F120(); /* call 0x0041F120 */

loc_0026C0BC: ;
    if (TEST_Z(eax, eax)) goto loc_0026CAC9; /* je: equal / zero */

loc_0026C0C4: ;
    eax = MEM32(0x84BEFC);
    if (CMP_EQ(eax, 2)) goto loc_0026C0D6; /* je: equal / zero */

loc_0026C0CE: ;
    if (CMP_NE(eax, esi)) goto loc_0026CAC9; /* jne: not equal / not zero */

loc_0026C0D6: ;
    SET_LO8(eax, MEM8(0x862C40));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0026C0EB; /* jne: not equal / not zero */

loc_0026C0DF: ;
    PUSH32(esp, 0); sub_0041F160(); /* call 0x0041F160 */

loc_0026C0E4: ;
    MEM8(0x862C40) = 1;

loc_0026C0EB: ;
    if (CMP_EQ(MEM32(0x758644), esi)) goto loc_0026C0FA; /* je: equal / zero */

loc_0026C0F3: ;
    MEM8(0x862C40) = 0;

loc_0026C0FA: ;
    (void)0; /* cmp MEM32(0x86422C), esi - flags set for next jcc */
    eax = MEM32(0x84BEEC);
    ebx = eax;
    if (CMP_EQ(MEM32(0x86422C), esi)) goto loc_0026C1C5; /* je: equal / zero */

loc_0026C10D: ;
    edi = 0; /* xor self */
    esi = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_0026C14F; /* jle: less or equal (signed <=) */

loc_0026C115: ;
    PUSH32(esp, 0); sub_0041F190(); /* call 0x0041F190 */

loc_0026C11A: ;
    edx = MEM32(0x86422C);
    PUSH32(esp, eax);
    edx = edx + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00470C66(); /* call 0x00470C66 */

loc_0026C12A: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_0026C146; /* jne: not equal / not zero */

loc_0026C131: ;
    MEM32(ebp * 4 + 0x862C44) = esi;
    MEM8(0x862D10) = 4;
    edi = 1;
    esi = ebx;

loc_0026C146: ;
    esi++;
    if (CMP_L(esi, ebx)) goto loc_0026C115; /* jl: less (signed <) */

loc_0026C14B: ;
    if (TEST_NZ(edi, edi)) goto loc_0026C1C5; /* jne: not equal / not zero */

loc_0026C14F: ;
    xmm0 = MEMF(0x648D40); /* movss */
    PUSH32(esp, 0); sub_001F2B30(); /* call 0x001F2B30 */

loc_0026C15C: ;
    SET_LO8(eax, 0xFF);
    MEM8(0x776171) = LO8(eax);
    MEM8(0x77616E) = LO8(eax);
    eax = MEM32(0x86422C);
    eax = eax + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x6037A0);
    PUSH32(esp, 0x154);
    PUSH32(esp, 0x140);
    SET_LO8(ecx, 0x81);
    MEM8(0x776170) = 0;
    MEM8(0x77616F) = 0;
    PUSH32(esp, 0); sub_001F25F0(); /* call 0x001F25F0 */

loc_0026C195: ;
    xmm0 = MEMF(0x648D14); /* movss */
    esp = esp + 0x10;
    PUSH32(esp, 0); sub_001F2B30(); /* call 0x001F2B30 */

loc_0026C1A5: ;
    SET_LO8(eax, MEM8(0x862D10));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0026C1C5; /* je: equal / zero */

loc_0026C1AE: ;
    PUSH32(esp, 0x86422C);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0026C1B8: ;
    esp = esp + 4;
    MEM32(0x86422C) = 0;

loc_0026C1C5: ;
    ecx = MEM32(0x849800);
    esi = MEM32(ecx + 0x85C);
    PUSH32(esp, 0); sub_0020C6E0(); /* call 0x0020C6E0 */

loc_0026C1D6: ;
    ebp = ebx + 1;
    esi = 0; /* xor self */
    if (CMP_LE(ebp & ebp, 0)) goto loc_0026C22A; /* jle: less or equal (signed <=) */

loc_0026C1DF: ;
    edi = 0x87C010;

loc_0026C1E4: ;
    if (CMP_GE(esi, ebx)) goto loc_0026C206; /* jge: greater or equal (signed >=) */

loc_0026C1E8: ;
    PUSH32(esp, 0); sub_0041F190(); /* call 0x0041F190 */

loc_0026C1ED: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x5D4CAC);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0046F583(); /* call 0x0046F583 */

loc_0026C1F9: ;
    eax = MEM32(esp + 0x28);
    esp = esp + 0xC;
    MEM32(esp + eax * 4 + 0x6C) = edi;
    goto loc_0026C21A;

loc_0026C206: ;
    edx = MEM32(0x849800);
    ecx = MEM32(edx + 0x848);
    eax = MEM32(esp + 0x1C);
    MEM32(esp + eax * 4 + 0x6C) = ecx;

loc_0026C21A: ;
    eax++;
    esi++;
    edi = edi + 0x80;
    (void)0; /* cmp esi, ebp - flags set for next jcc */
    MEM32(esp + 0x1C) = eax;
    if (CMP_L(esi, ebp)) goto loc_0026C1E4; /* jl: less (signed <) */

loc_0026C22A: ;
    SET_LO8(eax, MEM8(0x862D10));
    if (TEST_Z(LO8(eax), 1)) goto loc_0026C2C2; /* je: equal / zero */

loc_0026C237: ;
    edx = MEM32(esp + 0x20);
    edi = MEM32(edx * 4 + 0x862C44);
    ecx = MEM32(0x84BEEC);
    edx = edx * 4 + 0x862C44;
    edi++;
    eax = edi;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(edx) = edi;
    if (CMP_LE(eax, ecx)) goto loc_0026C25F; /* jle: less or equal (signed <=) */

loc_0026C258: ;
    MEM32(edx) = ecx;
    goto loc_0026C368;

loc_0026C25F: ;
    SET_LO8(eax, MEM8(0x7FA23C));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = 0.0f; /* xorps self = zero */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0026C273; /* jne: not equal / not zero */

loc_0026C26B: ;
    xmm0 = MEMF(0x7F9F48); /* movss */

loc_0026C273: ;
    (void)0; /* cmp MEM32(0x75E500), 2 - flags set for next jcc */
    MEMF(esp + 0x18) = xmm0; /* movss */
    if (CMP_NE(MEM32(0x75E500), 2)) goto loc_0026C29E; /* jne: not equal / not zero */

loc_0026C282: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648E64)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_0026C368; /* ja: above (unsigned >) */

loc_0026C29E: ;
    eax = MEM32(0x847024);
    ecx = MEM32(eax + 0x44);
    edx = MEM32(ecx + 0xC);
    ecx = MEM32(edx + 4);
    eax = MEM32(eax + 0x40);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    goto loc_0026C346;

loc_0026C2C2: ;
    if (TEST_Z(LO8(eax), 2)) goto loc_0026C368; /* je: equal / zero */

loc_0026C2CA: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(eax * 4 + 0x862C44);
    eax = eax * 4 + 0x862C44;
    ecx--;
    MEM32(eax) = ecx;
    if (((int32_t)ecx >= 0)) goto loc_0026C2EC; /* jns: not sign (positive) */

loc_0026C2E1: ;
    MEM32(eax) = 0;
    goto loc_0026C368;

loc_0026C2EC: ;
    SET_LO8(eax, MEM8(0x7FA23C));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = 0.0f; /* xorps self = zero */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0026C300; /* jne: not equal / not zero */

loc_0026C2F8: ;
    xmm0 = MEMF(0x7F9F48); /* movss */

loc_0026C300: ;
    (void)0; /* cmp MEM32(0x75E500), 2 - flags set for next jcc */
    MEMF(esp + 0x18) = xmm0; /* movss */
    if (CMP_NE(MEM32(0x75E500), 2)) goto loc_0026C327; /* jne: not equal / not zero */

loc_0026C30F: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648E64)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_0026C368; /* ja: above (unsigned >) */

loc_0026C327: ;
    eax = MEM32(0x847024);
    ecx = MEM32(eax + 0x44);
    ecx = MEM32(ecx + 0xC);
    ecx = MEM32(ecx + 4);
    edx = MEM32(eax + 0x40);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, edx);

loc_0026C346: ;
    ecx = 0xAD2;
    eax = eax | 0xFFFFFFFFu;
    edx = edx | 0xFFFFFFFFu;
    MEM32(0x75E500) = 2;
    MEMF(0x75E504) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_0026C368: ;
    SET_LO8(eax, MEM8(0x862D10));
    if (TEST_Z(LO8(eax), 4)) goto loc_0026C3F4; /* je: equal / zero */

loc_0026C375: ;
    PUSH32(esp, 4);
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_0026C37E: ;
    esp = esp + 4;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_002431E0(); /* call 0x002431E0 */

loc_0026C388: ;
    edi = MEM32(esp + 0x20);
    esi = MEM32(edi * 4 + 0x862C44);
    eax = MEM32(0x84BEEC);
    (void)0; /* cmp esi, eax - flags set for next jcc */
    edi = edi * 4 + 0x862C44;
    if (CMP_GE(esi, eax)) goto loc_0026C3AD; /* jge: greater or equal (signed >=) */

loc_0026C3A3: ;
    PUSH32(esp, 0); sub_0026A530(); /* call 0x0026A530 */

loc_0026C3A8: ;
    eax = MEM32(0x84BEEC);

loc_0026C3AD: ;
    ecx = MEM32(edi);
    if (CMP_NE(ecx, eax)) goto loc_0026C3BC; /* jne: not equal / not zero */

loc_0026C3B3: ;
    MEM8(0x87585E) = 1;
    goto loc_0026C409;

loc_0026C3BC: ;
    if (CMP_GE(ecx, eax)) goto loc_0026C3EB; /* jge: greater or equal (signed >=) */

loc_0026C3BE: ;
    PUSH32(esp, 0); sub_0026D4C0(); /* call 0x0026D4C0 */

loc_0026C3C3: ;
    if (TEST_NZ(eax, eax)) goto loc_0026C409; /* jne: not equal / not zero */

loc_0026C3C7: ;
    eax = ecx;
    PUSH32(esp, 0); sub_0041F240(); /* call 0x0041F240 */

loc_0026C3CE: ;
    if (TEST_Z(eax, eax)) goto loc_0026C3EB; /* je: equal / zero */

loc_0026C3D2: ;
    eax = MEM32(0x86422C);
    if (TEST_NZ(eax, eax)) goto loc_0026C3EB; /* jne: not equal / not zero */

loc_0026C3DB: ;
    MEM8(0x862C41) = 1;
    MEM8(0x862C4C) = 0;
    goto loc_0026C409;

loc_0026C3EB: ;
    MEM8(0x862C41) = 3;
    goto loc_0026C409;

loc_0026C3F4: ;
    if (TEST_Z(LO8(eax), 8)) goto loc_0026C409; /* je: equal / zero */

loc_0026C3F8: ;
    PUSH32(esp, 5);
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_0026C401: ;
    esp = esp + 4;
    PUSH32(esp, 0); sub_0026AAB0(); /* call 0x0026AAB0 */

loc_0026C409: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(eax * 4 + 0x862C44);
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0x78;
    PUSH32(esp, eax);
    eax = 0x28;
    PUSH32(esp, 0); sub_0020C3B0(); /* call 0x0020C3B0 */

loc_0026C42B: ;
    esp = esp + 0x10;
    goto loc_0026CAC9;

loc_0026C433: ;
    ecx = MEM32(0x849800);
    esi = MEM32(ecx + 0x84C);
    MEM32(0x6BEDE8) = 3;
    PUSH32(esp, 0); sub_0020C6E0(); /* call 0x0020C6E0 */

loc_0026C44E: ;
    if (CMP_GE(MEM8(0x862C4C), 4)) goto loc_0026C57E; /* jge: greater or equal (signed >=) */

loc_0026C45B: ;
    eax = ebp;
    PUSH32(esp, 0); sub_0004E000(); /* call 0x0004E000 */

loc_0026C462: ;
    ecx = MEM32(eax + 0x10);
    edx = MEM32(eax + 8);
    eax = MEM32(eax + 0x14);
    (void)0; /* cmp eax, 0x28 - flags set for next jcc */
    SET_LO8(ebx, (CMP_G(eax, 0x28)) ? 1 : 0); /* setg */
    (void)0; /* cmp eax, 0xFFFFFFD8u - flags set for next jcc */
    MEM8(esp + 0x15) = (CMP_L(eax, 0xFFFFFFD8u)) ? 1 : 0; /* setl */
    (void)0; /* cmp ecx, 0xFFFFFFD8u - flags set for next jcc */
    MEM8(esp + 0x16) = (CMP_L(ecx, 0xFFFFFFD8u)) ? 1 : 0; /* setl */
    (void)0; /* cmp ecx, 0x28 - flags set for next jcc */
    SET_LO8(eax, (CMP_G(ecx, 0x28)) ? 1 : 0); /* setg */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0026C498; /* je: equal / zero */

loc_0026C48B: ;
    (void)0; /* cmp LO8(eax), MEM8(0x87585A) - flags set for next jcc */
    MEM8(esp + 0x14) = 1;
    if (CMP_NE(LO8(eax), MEM8(0x87585A))) goto loc_0026C49D; /* jne: not equal / not zero */

loc_0026C498: ;
    MEM8(esp + 0x14) = 0;

loc_0026C49D: ;
    SET_LO8(ecx, MEM8(esp + 0x16));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0026C4B2; /* je: equal / zero */

loc_0026C4A5: ;
    (void)0; /* cmp LO8(ecx), MEM8(0x87585B) - flags set for next jcc */
    MEM8(esp + 0x13) = 1;
    if (CMP_NE(LO8(ecx), MEM8(0x87585B))) goto loc_0026C4B7; /* jne: not equal / not zero */

loc_0026C4B2: ;
    MEM8(esp + 0x13) = 0;

loc_0026C4B7: ;
    SET_LO8(ecx, MEM8(esp + 0x15));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0026C4CC; /* je: equal / zero */

loc_0026C4BF: ;
    (void)0; /* cmp LO8(ecx), MEM8(0x87585C) - flags set for next jcc */
    MEM8(esp + 0x17) = 1;
    if (CMP_NE(LO8(ecx), MEM8(0x87585C))) goto loc_0026C4D1; /* jne: not equal / not zero */

loc_0026C4CC: ;
    MEM8(esp + 0x17) = 0;

loc_0026C4D1: ;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_0026C4E1; /* je: equal / zero */

loc_0026C4D5: ;
    if (CMP_EQ(LO8(ebx), MEM8(0x87585D))) goto loc_0026C4E1; /* je: equal / zero */

loc_0026C4DD: ;
    SET_LO8(ecx, 1);
    goto loc_0026C4E3;

loc_0026C4E1: ;
    SET_LO8(ecx, 0); /* xor self */

loc_0026C4E3: ;
    (void)0; /* test HI8(edx), 4 - flags set for next jcc */
    MEM8(0x87585A) = LO8(eax);
    SET_LO8(eax, MEM8(esp + 0x16));
    MEM8(0x87585B) = LO8(eax);
    SET_LO8(eax, MEM8(esp + 0x15));
    MEM8(0x87585C) = LO8(eax);
    MEM8(0x87585D) = LO8(ebx);
    if (TEST_Z(HI8(edx), 4)) goto loc_0026C509; /* je: equal / zero */

loc_0026C505: ;
    SET_LO8(ebx, 5);
    goto loc_0026C561;

loc_0026C509: ;
    if (TEST_Z(HI8(edx), 8)) goto loc_0026C512; /* je: equal / zero */

loc_0026C50E: ;
    SET_LO8(ebx, 6);
    goto loc_0026C561;

loc_0026C512: ;
    if (TEST_Z(HI8(edx), 0x40)) goto loc_0026C51B; /* je: equal / zero */

loc_0026C517: ;
    SET_LO8(ebx, 9);
    goto loc_0026C561;

loc_0026C51B: ;
    if (((int32_t)(HI8(edx) & HI8(edx)) >= 0)) goto loc_0026C523; /* jns: not sign (positive) */

loc_0026C51F: ;
    SET_LO8(ebx, 0xA);
    goto loc_0026C561;

loc_0026C523: ;
    if (TEST_NZ(LO8(edx), 8)) goto loc_0026C55F; /* jne: not equal / not zero */

loc_0026C528: ;
    SET_LO8(eax, MEM8(esp + 0x14));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0026C55F; /* jne: not equal / not zero */

loc_0026C530: ;
    if (TEST_NZ(LO8(edx), 4)) goto loc_0026C55B; /* jne: not equal / not zero */

loc_0026C535: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0026C55B; /* jne: not equal / not zero */

loc_0026C53D: ;
    if (TEST_NZ(LO8(edx), 1)) goto loc_0026C557; /* jne: not equal / not zero */

loc_0026C542: ;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0026C557; /* jne: not equal / not zero */

loc_0026C546: ;
    if (TEST_NZ(LO8(edx), 2)) goto loc_0026C553; /* jne: not equal / not zero */

loc_0026C54B: ;
    SET_LO8(eax, MEM8(esp + 0x17));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0026C57E; /* je: equal / zero */

loc_0026C553: ;
    SET_LO8(ebx, 2);
    goto loc_0026C561;

loc_0026C557: ;
    SET_LO8(ebx, 1);
    goto loc_0026C561;

loc_0026C55B: ;
    SET_LO8(ebx, 3);
    goto loc_0026C561;

loc_0026C55F: ;
    SET_LO8(ebx, 4);

loc_0026C561: ;
    eax = 2;
    PUSH32(esp, 0); sub_002431E0(); /* call 0x002431E0 */

loc_0026C56B: ;
    ecx = (uint32_t)(int32_t)SMEM8(0x862C4C);
    MEM8(ecx + 0x862C4D) = LO8(ebx);
    MEM8(0x862C4C) = MEM8(0x862C4C) + 1;

loc_0026C57E: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFF);
    SET_LO8(ecx, LO8(ecx) | 0xFF);
    SET_LO8(eax, LO8(eax) | 0xFF);
    PUSH32(esp, 0); sub_001F2BA0(); /* call 0x001F2BA0 */

loc_0026C592: ;
    SET_LO8(ebx, MEM8(0x862C4C));
    esp = esp + 8;
    esi = 0; /* xor self */
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    MEM8(esp + 0xEC) = 0;
    MEM8(esp + 0x16B) = 0;
    if (CMP_LE(LO8(ebx) & LO8(ebx), 0)) goto loc_0026C5D0; /* jle: less or equal (signed <=) */

loc_0026C5B1: ;
    ebx = 0x60379C;
    edi = esp + 0xEC;
    PUSH32(esp, 0); sub_00065540(); /* call 0x00065540 */

loc_0026C5C2: ;
    SET_LO8(ebx, MEM8(0x862C4C));
    edx = SX8(LO8(ebx));
    esi++;
    if (CMP_L(esi, edx)) goto loc_0026C5B1; /* jl: less (signed <) */

loc_0026C5D0: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    SET_LO8(ecx, 0); /* xor self */
    SET_LO8(eax, LO8(eax) | 0xFF);
    PUSH32(esp, 0); sub_001F2BA0(); /* call 0x001F2BA0 */

loc_0026C5E0: ;
    esp = esp + 8;
    if (CMP_EQ(LO8(ebx), 4)) goto loc_0026C5FB; /* je: equal / zero */

loc_0026C5E8: ;
    ebx = 0x603798;
    edi = esp + 0xEC;
    PUSH32(esp, 0); sub_00065540(); /* call 0x00065540 */

loc_0026C5F9: ;
    goto loc_0026C64C;

loc_0026C5FB: ;
    esi = MEM32(ebp * 4 + 0x862C44);
    PUSH32(esp, 0); sub_0041F2A0(); /* call 0x0041F2A0 */

loc_0026C607: ;
    SET_LO8(edx, MEM8(0x862C4D));
    (void)0; /* cmp LO8(edx), MEM8(eax) - flags set for next jcc */
    SET_LO8(ecx, 1);
    if (CMP_EQ(LO8(edx), MEM8(eax))) goto loc_0026C615; /* je: equal / zero */

loc_0026C613: ;
    SET_LO8(ecx, 0); /* xor self */

loc_0026C615: ;
    SET_LO8(edx, MEM8(0x862C4E));
    if (CMP_EQ(LO8(edx), MEM8(eax + 1))) goto loc_0026C622; /* je: equal / zero */

loc_0026C620: ;
    SET_LO8(ecx, 0); /* xor self */

loc_0026C622: ;
    SET_LO8(edx, MEM8(0x862C4F));
    if (CMP_EQ(LO8(edx), MEM8(eax + 2))) goto loc_0026C62F; /* je: equal / zero */

loc_0026C62D: ;
    SET_LO8(ecx, 0); /* xor self */

loc_0026C62F: ;
    SET_LO8(edx, MEM8(0x862C50));
    if (CMP_NE(LO8(edx), MEM8(eax + 3))) goto loc_0026C645; /* jne: not equal / not zero */

loc_0026C63A: ;
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    MEM8(0x862C41) = 3;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0026C64C; /* jne: not equal / not zero */

loc_0026C645: ;
    MEM8(0x862C41) = 2;

loc_0026C64C: ;
    eax = esp + 0xEC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x5D4CAC);
    PUSH32(esp, 0x87C010);
    PUSH32(esp, 0); sub_0046F583(); /* call 0x0046F583 */

loc_0026C663: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esp + 0x80;
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    eax = 0x28;
    MEM32(esp + 0x88) = 0x87C010;
    PUSH32(esp, 0); sub_0020C3B0(); /* call 0x0020C3B0 */

loc_0026C686: ;
    SET_LO8(eax, MEM8(0x862D10));
    esp = esp + 0x1C;
    if (TEST_Z(LO8(eax), 8)) goto loc_0026CAC9; /* je: equal / zero */

loc_0026C696: ;
    PUSH32(esp, 5);
    goto loc_0026C758;

loc_0026C69D: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    SET_LO8(ecx, 0); /* xor self */
    SET_LO8(eax, LO8(eax) | 0xFF);
    PUSH32(esp, 0); sub_001F2BA0(); /* call 0x001F2BA0 */

loc_0026C6AD: ;
    edx = MEM32(0x849800);
    esi = MEM32(edx + 0x850);
    PUSH32(esp, 0); sub_0020C6E0(); /* call 0x0020C6E0 */

loc_0026C6BE: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = esp + 0x7C;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = 0x28;
    PUSH32(esp, 0); sub_0020C3B0(); /* call 0x0020C3B0 */

loc_0026C6D3: ;
    esp = esp + 0x18;
    PUSH32(esp, 0x7F);
    PUSH32(esp, 0x603788);
    ecx = esp + 0xF4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0042DD7A(); /* call 0x0042DD7A */

loc_0026C6EA: ;
    edx = esp + 0xEC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x5D4CAC);
    PUSH32(esp, 0x87C010);
    PUSH32(esp, 0); sub_0046F583(); /* call 0x0046F583 */

loc_0026C701: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    eax = esp + 0x80;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    eax = 0x28;
    MEM32(esp + 0x88) = 0x87C010;
    PUSH32(esp, 0); sub_0020C3B0(); /* call 0x0020C3B0 */

loc_0026C724: ;
    esp = esp + 0x1C;
    PUSH32(esp, 1);
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x5F8F20;
    MEM32(0x6BEDE8) = 1;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_0026C73F: ;
    ecx = eax;
    PUSH32(esp, 0); sub_0020DB10(); /* call 0x0020DB10 */

loc_0026C746: ;
    SET_LO8(eax, MEM8(0x862D10));
    esp = esp + 4;
    if (TEST_Z(LO8(eax), 0xC)) goto loc_0026CAC9; /* je: equal / zero */

loc_0026C756: ;
    PUSH32(esp, 4);

loc_0026C758: ;
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_0026C75F: ;
    esp = esp + 4;
    MEM8(0x862C41) = 0;
    goto loc_0026CAC9;

loc_0026C76E: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    SET_LO8(ecx, 0); /* xor self */
    SET_LO8(eax, LO8(eax) | 0xFF);
    PUSH32(esp, 0); sub_001F2BA0(); /* call 0x001F2BA0 */

loc_0026C77E: ;
    ecx = MEM32(0x849800);
    esi = MEM32(ecx + 0x854);
    PUSH32(esp, 0); sub_0020C6E0(); /* call 0x0020C6E0 */

loc_0026C78F: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edx = esp + 0x7C;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    eax = 0x28;
    PUSH32(esp, 0); sub_0020C3B0(); /* call 0x0020C3B0 */

loc_0026C7A4: ;
    esp = esp + 0x18;
    ecx = esp + 0x24;
    edx = esp + 0x34;
    PUSH32(esp, 0); sub_0026D4F0(); /* call 0x0026D4F0 */

loc_0026C7B4: ;
    edx = MEM32(0x84BEEC);
    esi = eax;
    eax = ZX8(MEM8(0x862D13));
    eax = eax << 2;
    ecx = MEM32(eax + 0x862C44);
    if (CMP_L(ecx, edx)) goto loc_0026C7E2; /* jl: less (signed <) */

loc_0026C7D0: ;
    ecx = ecx - edx;
    ecx = MEM32(esp + ecx * 4 + 0x24);
    ecx = ecx | 0x10000;
    MEM32(eax + 0x862C44) = ecx;

loc_0026C7E2: ;
    MEM32(esp + eax + 0x34) = ecx;
    eax = ZX8(MEM8(0x862D13));
    MEM32(esp + eax * 4 + 0x24) = eax;
    PUSH32(esp, 0); sub_0027AFB0(); /* call 0x0027AFB0 */

loc_0026C7F6: ;
    if (TEST_NZ(esi, esi)) goto loc_0026C828; /* jne: not equal / not zero */

loc_0026C7FA: ;
    edx = MEM32(esp + 0x30);
    eax = MEM32(esp + 0x40);
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x40);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x30);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x44);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x34);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x48);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0041F300(); /* call 0x0041F300 */

loc_0026C826: ;
    goto loc_0026C854;

loc_0026C828: ;
    eax = MEM32(esp + 0x30);
    ecx = MEM32(esp + 0x40);
    edx = MEM32(esp + 0x2C);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x40);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x30);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x44);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x34);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x50);
    PUSH32(esp, 0); sub_0041F8D0(); /* call 0x0041F8D0 */

loc_0026C854: ;
    esp = esp + 0x1C;
    esi = 0x87C810;
    MEM8(0x862C41) = 4;
    PUSH32(esp, 0); sub_00278CD0(); /* call 0x00278CD0 */

loc_0026C868: ;
    MEM8(0x862E6C) = 0;
    goto loc_0026CAC2;

loc_0026C874: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFF);
    SET_LO8(ecx, LO8(ecx) | 0xFF);
    SET_LO8(eax, LO8(eax) | 0xFF);
    PUSH32(esp, 0); sub_001F2BA0(); /* call 0x001F2BA0 */

loc_0026C888: ;
    ecx = MEM32(0x84BEFC);
    edx = MEM32(0x849800);
    eax = MEM32(edx + 0x858);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5AC648);
    PUSH32(esp, 0x87C010);
    PUSH32(esp, 0); sub_0046F583(); /* call 0x0046F583 */

loc_0026C8AB: ;
    esp = esp + 0x18;
    esi = 0x87C010;
    PUSH32(esp, 0); sub_0020C6E0(); /* call 0x0020C6E0 */

loc_0026C8B8: ;
    PUSH32(esp, 0x200500);
    PUSH32(esp, 2);
    PUSH32(esp, 0x18C);
    ecx = esp + 0x178;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00011B30(); /* call 0x00011B30 */

loc_0026C8D1: ;
    esi = 0x87C810;
    PUSH32(esp, 0); sub_002274C0(); /* call 0x002274C0 */

loc_0026C8DB: ;
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0026C8E0: ;
    ecx = 9;
    esi = 0x603760;
    edi = esp + 0x44;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    eax = eax & 7;
    MEM16(edi) = MEM16(esi); esi += 2; edi += 2; /* movsw */
    MEM16(esp + eax * 2 + 0x44) = 0;
    eax = MEM32(0x849800);
    ecx = MEM32(eax + 0x858);
    edx = esp + 0x44;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5AC660);
    PUSH32(esp, 0x87C010);
    PUSH32(esp, 0); sub_0046F583(); /* call 0x0046F583 */

loc_0026C91C: ;
    PUSH32(esp, 0x40);
    edx = esp + 0x180;
    PUSH32(esp, 0x87C010);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046FCD6(); /* call 0x0046FCD6 */

loc_0026C930: ;
    PUSH32(esp, 0);
    eax = esp + 0x18C;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    eax = 0x28;
    MEM8(esp + 0x297) = 1;
    PUSH32(esp, 0); sub_0020C570(); /* call 0x0020C570 */

loc_0026C94E: ;
    esp = esp + 0x28;
    eax = 0x5F59F0;
    PUSH32(esp, 0); sub_0020DAB0(); /* call 0x0020DAB0 */

loc_0026C95B: ;
    eax = 0x5F59F0;
    PUSH32(esp, 0); sub_002161C0(); /* call 0x002161C0 */

loc_0026C965: ;
    if (CMP_NE(MEM32(0x84BEFC), 2)) goto loc_0026CAC2; /* jne: not equal / not zero */

loc_0026C972: ;
    ecx = MEM32(ebp * 4 + 0x862C44);
    if (CMP_GE(ecx, MEM32(0x84BEEC))) goto loc_0026C992; /* jge: greater or equal (signed >=) */

loc_0026C981: ;
    MEM8(0x862C41) = 5;
    PUSH32(esp, 0); sub_0027AFD0(); /* call 0x0027AFD0 */

loc_0026C98D: ;
    goto loc_0026CAC2;

loc_0026C992: ;
    PUSH32(esp, 0x140);
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    MEM8(0x862C41) = 8;
    PUSH32(esp, 0); sub_00237D00(); /* call 0x00237D00 */

loc_0026C9A6: ;
    esp = esp + 0xC;
    PUSH32(esp, 0); sub_0027AFD0(); /* call 0x0027AFD0 */

loc_0026C9AE: ;
    goto loc_0026CAC2;

loc_0026C9B3: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    SET_LO8(ecx, LO8(ecx) | 0xFF);
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_001F2BA0(); /* call 0x001F2BA0 */

loc_0026C9C4: ;
    eax = 0x5F59F0;
    PUSH32(esp, 0); sub_0020DAB0(); /* call 0x0020DAB0 */

loc_0026C9CE: ;
    eax = 0x5F59F0;
    PUSH32(esp, 0); sub_002161C0(); /* call 0x002161C0 */

loc_0026C9D8: ;
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x603734;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_0026C9E4: ;
    esi = eax;
    PUSH32(esp, 0); sub_0020C6E0(); /* call 0x0020C6E0 */

loc_0026C9EB: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edx = esp + 0x7C;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    eax = 0x28;
    PUSH32(esp, 0); sub_0020C3B0(); /* call 0x0020C3B0 */

loc_0026CA00: ;
    esp = esp + 0x18;
    esi = 0x862C40;
    PUSH32(esp, 0); sub_00296840(); /* call 0x00296840 */

loc_0026CA0D: ;
    SET_LO8(eax, LO8(ebx));
    MEM32(edi) = 2;
    MEM8(0x862C41) = 7;
    PUSH32(esp, 0); sub_00268EE0(); /* call 0x00268EE0 */

loc_0026CA21: ;
    MEM32(0x6BEDE8) = 0;
    goto loc_0026CAC9;

loc_0026CA30: ;
    PUSH32(esp, 0x140);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_00237D00(); /* call 0x00237D00 */

loc_0026CA3C: ;
    esp = esp + 0xC;
    eax--;
    if ((eax == 0)) goto loc_0026CAAB; /* je: equal / zero */

loc_0026CA42: ;
    eax--;
    if ((eax != 0)) goto loc_0026CAC2; /* jne: not equal / not zero */

loc_0026CA49: ;
    ecx = esp + 0x34;
    edx = esp + 0x24;
    PUSH32(esp, 0); sub_0026D4F0(); /* call 0x0026D4F0 */

loc_0026CA56: ;
    (void)0; /* cmp eax, 1 - flags set for next jcc */
    MEM32(esp + ebp * 4 + 0x24) = 0xFFFFFFFFu;
    MEM32(edi) = esi;
    if (CMP_G(eax, 1)) goto loc_0026CA73; /* jg: greater (signed >) */

loc_0026CA65: ;
    PUSH32(esp, 0); sub_0041FF10(); /* call 0x0041FF10 */

loc_0026CA6A: ;
    MEM8(0x862C41) = 0;
    goto loc_0026CAC2;

loc_0026CA73: ;
    eax = MEM32(esp + 0x40);
    ecx = MEM32(esp + 0x30);
    edx = MEM32(esp + 0x3C);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x30);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x40);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x34);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x44);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x40);
    PUSH32(esp, 0); sub_0041F8D0(); /* call 0x0041F8D0 */

loc_0026CA9F: ;
    esp = esp + 0x1C;
    MEM8(0x862C41) = 0;
    goto loc_0026CAC2;

loc_0026CAAB: ;
    esi = 0x862C40;
    MEM8(0x862C41) = 7;
    PUSH32(esp, 0); sub_00296840(); /* call 0x00296840 */

loc_0026CABC: ;
    MEM32(edi) = 2;

loc_0026CAC2: ;
    MEM8(0x863AF9) = 1;

loc_0026CAC9: ;
    MEM32(0x776238) = 0;

loc_0026CAD3: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, esi);

loc_0026CAD6: ;
    POP32(esp, ebx);
    esp = esp + 0x474;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0026CB10
 * Original: 0x0026CB10 - 0x0026CB59 (73 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026CB10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0026CB10: ;
    esp = esp - 0x40;
    PUSH32(esp, ebx);
    ecx = esp + 0x24;
    edx = esp + 0x14;
    PUSH32(esp, 0); sub_0026D4F0(); /* call 0x0026D4F0 */

loc_0026CB21: ;
    SET_LO8(edx, MEM8(0x863D11));
    MEM32(esp + 0xC) = eax;
    eax = MEM32(0x863D04);
    (void)0; /* cmp eax, 2 - flags set for next jcc */
    MEM8(esp + 5) = (CMP_EQ(eax, 2)) ? 1 : 0; /* sete */
    (void)0; /* cmp eax, 3 - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(eax, 3)) ? 1 : 0); /* sete */
    ebx = 0; /* xor self */
    (void)0; /* cmp LO8(edx), LO8(ebx) - flags set for next jcc */
    MEM8(esp + 6) = (CMP_EQ(LO8(edx), LO8(ebx))) ? 1 : 0; /* sete */
    (void)0; /* cmp LO8(eax), LO8(ebx) - flags set for next jcc */
    MEM8(esp + 7) = LO8(eax);
    if (CMP_EQ(LO8(eax), LO8(ebx))) { sub_0026CB59(); return; } /* je: equal / zero */

loc_0026CB4F: ;
    if (CMP_EQ(MEM8(esp + 0x50), LO8(ebx))) { sub_0026CB59(); return; } /* je: equal / zero */

loc_0026CB55: ;
    SET_LO8(ecx, 1);
    g_seh_ebp = ebp; sub_0026CB5B(); return; /* tail jmp 0x0026CB5B */

}

/**
 * sub_0026D3C0
 * Original: 0x0026D3C0 - 0x0026D414 (84 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026D3C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0026D3C0: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x849800);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x840);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0020C6E0(); /* call 0x0020C6E0 */

loc_0026D3D3: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1D);
    PUSH32(esp, 0xFFFF);
    PUSH32(esp, 1);
    PUSH32(esp, 0x20E);
    ecx = 0; /* xor self */
    PUSH32(esp, 0); sub_00277940(); /* call 0x00277940 */

loc_0026D3EC: ;
    SET_LO8(eax, MEM8(0x862D10));
    esp = esp + 0x18;
    if (TEST_Z(LO8(eax), 4)) { sub_0026D414(); return; } /* je: equal / zero */

loc_0026D3F8: ;
    PUSH32(esp, 4);
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_0026D401: ;
    SET_LO8(edx, MEM8(0x862D11));
    eax = 0; /* xor self */
    esp = esp + 4;
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(LO8(edx), LO8(edx))) ? 1 : 0); /* setne */
    eax++;
    g_seh_ebp = ebp; sub_0026D42D(); return; /* tail jmp 0x0026D42D */

}

/**
 * sub_0026D460
 * Original: 0x0026D460 - 0x0026D4AC (76 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026D460(void)
{
    int _flags = 0; /* fallback flag var */

loc_0026D460: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x603710;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_0026D46F: ;
    PUSH32(esp, eax);
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x6036E8;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_0026D47C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x6036C4;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_0026D48B: ;
    PUSH32(esp, eax);
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_0003C1E0(); /* call 0x0003C1E0 */

loc_0026D493: ;
    ebx = eax;
    PUSH32(esp, 0); sub_00232B60(); /* call 0x00232B60 */

loc_0026D49A: ;
    SET_LO8(eax, MEM8(0x862D10));
    (void)0; /* test LO8(eax), 4 - flags set for next jcc */
    POP32(esp, ebx);
    if (TEST_Z(LO8(eax), 4)) { sub_0026D4AC(); return; } /* je: equal / zero */

loc_0026D4A4: ;
    PUSH32(esp, 0); sub_0026A440(); /* call 0x0026A440 */

loc_0026D4A9: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_0026D4C0
 * Original: 0x0026D4C0 - 0x0026D4E2 (34 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026D4C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0026D4C0: ;
    eax = 0; /* xor self */
    edx = 2;

loc_0026D4C7: ;
    if (CMP_NE(ecx, MEM32(eax + 0x862C44))) goto loc_0026D4D7; /* jne: not equal / not zero */

loc_0026D4CF: ;
    if (CMP_EQ(MEM32(eax + 0x849E54), edx)) { sub_0026D4E2(); return; } /* je: equal / zero */

loc_0026D4D7: ;
    eax = eax + 4;
    if (CMP_L(eax, 8)) goto loc_0026D4C7; /* jl: less (signed <) */

loc_0026D4DF: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0026D4F0
 * Original: 0x0026D4F0 - 0x0026D54A (90 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026D4F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0026D4F0: ;
    PUSH32(esp, esi);
    esi = esi | 0xFFFFFFFFu;
    MEM32(edx) = esi;
    MEM32(ecx) = esi;
    MEM32(edx + 4) = esi;
    MEM32(ecx + 4) = esi;
    MEM32(edx + 8) = esi;
    MEM32(ecx + 8) = esi;
    MEM32(edx + 0xC) = esi;
    MEM32(ecx + 0xC) = esi;
    PUSH32(esp, edi);
    edi = MEM32(0x849E54);
    esi = 2;
    eax = 0; /* xor self */
    if (CMP_NE(edi, esi)) goto loc_0026D52E; /* jne: not equal / not zero */

loc_0026D51C: ;
    eax = MEM32(0x862C44);
    MEM32(edx) = eax;
    MEM32(ecx) = 0;
    eax = 1;

loc_0026D52E: ;
    if (CMP_NE(MEM32(0x849E58), esi)) goto loc_0026D547; /* jne: not equal / not zero */

loc_0026D536: ;
    esi = MEM32(0x862C48);
    MEM32(edx + 4) = esi;
    MEM32(ecx + 4) = 1;
    eax++;

loc_0026D547: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0026D550
 * Original: 0x0026D550 - 0x0026D583 (51 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026D550(void)
{
    int _flags = 0; /* fallback flag var */

loc_0026D550: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    eax = ZX8(MEM8(0x862D13));
    ebx = 0; /* xor self */
    MEM32(esp + 0xC) = ebx;
    MEM32(esp + 8) = ebx;
    PUSH32(esp, 0); sub_00420110(); /* call 0x00420110 */

loc_0026D56D: ;
    if (TEST_NZ(eax, eax)) { sub_0026D583(); return; } /* jne: not equal / not zero */

loc_0026D571: ;
    eax = MEM32(esp + 0x20);
    if (CMP_EQ(eax, ebx)) goto loc_0026D57B; /* je: equal / zero */

loc_0026D579: ;
    MEM32(eax) = ebx;

loc_0026D57B: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_0026D620
 * Original: 0x0026D620 - 0x0026D646 (38 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026D620(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0026D620: ;
    esp = esp - 0x440;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, edi);
    PUSH32(esp, 0x100);
    edi = ecx;
    PUSH32(esp, 0x6019F4);
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_0026D646(); return; } /* je: equal / zero */

loc_0026D637: ;
    eax = esp + 0x4C;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046FCD6(); /* call 0x0046FCD6 */

loc_0026D641: ;
    g_seh_ebp = ebp; sub_0026D742(); return; /* tail jmp 0x0026D742 */

}

/**
 * sub_0026D770
 * Original: 0x0026D770 - 0x0026D86E (254 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026D770(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0026D770: ;
    esp = esp - 0x400;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x408);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    (void)0; /* cmp ebx, 6 - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_A(ebx, 6)) goto loc_0026D7C6; /* ja: above (unsigned >) */

loc_0026D787: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(ebx * 4 + 0x26D870)); return; /* indirect tail jmp */

    ecx = 0x603560;
    goto loc_0026D7BD;

    ecx = 0x603520;
    goto loc_0026D7BD;

    ecx = 0x6034F0;
    goto loc_0026D7BD;

    ecx = 0x6034B8;
    goto loc_0026D7BD;

    ecx = 0x603498;
    goto loc_0026D7BD;

    ecx = 0x60347C;
    goto loc_0026D7BD;

    ecx = 0x603450;

loc_0026D7BD: ;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_0026D7C4: ;
    esi = eax;

loc_0026D7C6: ;
    eax = MEM32(esp + 0x418);
    PUSH32(esp, 0x603A40);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    edi = esp + 0x18;
    PUSH32(esp, 0); sub_0026A960(); /* call 0x0026A960 */

loc_0026D7DD: ;
    ecx = MEM32(esp + 0x428);
    PUSH32(esp, 0x603440);
    edx = edi;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edi = ebp;
    PUSH32(esp, 0); sub_0026A9F0(); /* call 0x0026A9F0 */

loc_0026D7F4: ;
    edi = MEM32(esp + 0x42C);
    esp = esp + 0x18;
    if (CMP_EQ(ebx, 4)) goto loc_0026D847; /* je: equal / zero */

loc_0026D803: ;
    if (CMP_A(edi, 4)) goto loc_0026D832; /* ja: above (unsigned >) */

loc_0026D808: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edi * 4 + 0x26D88C)); return; /* indirect tail jmp */

    ecx = 0x603420;
    goto loc_0026D829;

    ecx = 0x60340C;
    goto loc_0026D829;

    ecx = 0x6033F8;
    goto loc_0026D829;

    ecx = 0x6033E0;

loc_0026D829: ;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_0026D830: ;
    esi = eax;

loc_0026D832: ;
    PUSH32(esp, 0x6019F4);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0046E470(); /* call 0x0046E470 */

loc_0026D83D: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0046E470(); /* call 0x0046E470 */

loc_0026D844: ;
    esp = esp + 0x10;

loc_0026D847: ;
    esi = MEM32(esp + 0x420);
    ecx = MEM32(esp + 0x424);
    (void)0; /* cmp edi, 3 - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(edi, 3)) ? 1 : 0); /* sete */
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0026D620(); /* call 0x0026D620 */

loc_0026D861: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x400;
    esp += 4; return; /* ret */

}

/**
 * sub_0026EAE0
 * Original: 0x0026EAE0 - 0x0026EB39 (89 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026EAE0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0026EAE0: ;
    esp = esp - 0x148;
    PUSH32(esp, ebx);
    SET_LO8(ebx, LO8(eax));
    eax = 0; /* xor self */
    MEM32(esp + 0x19) = eax;
    MEM32(esp + 0x1D) = eax;
    MEM32(esp + 0x21) = eax;
    MEM32(esp + 0x25) = eax;
    MEM32(esp + 0x29) = eax;
    MEM32(esp + 0x2D) = eax;
    MEM32(esp + 0x31) = eax;
    MEM16(esp + 0x35) = LO16(eax);
    MEM8(esp + 0x37) = LO8(eax);
    SET_LO8(eax, MEM8(0x849C0E));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, edi);
    MEM8(esp + 0x1C) = 0;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_0026EB39(); return; } /* je: equal / zero */

loc_0026EB1F: ;
    PUSH32(esp, 5);
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_0026EB28: ;
    esp = esp + 4;
    PUSH32(esp, 0); sub_0026A790(); /* call 0x0026A790 */

loc_0026EB30: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = esp + 0x148;
    esp += 4; return; /* ret */

}

/**
 * sub_0026F400
 * Original: 0x0026F400 - 0x0026F468 (104 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026F400(void)
{
    int _flags = 0; /* fallback flag var */

loc_0026F400: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    MEM32(esi + 0xC) = edx;
    SET_LO8(edx, MEM8(esp + 0x14));
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    MEM32(esi) = ecx;
    MEM32(esi + 4) = edi;
    MEM8(esi + 8) = LO8(eax);
    MEM8(esi + 0x1C) = LO8(edx);
    PUSH32(esp, 0); sub_0026F390(); /* call 0x0026F390 */

loc_0026F423: ;
    ecx = MEM32(esi);
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(esi + 8));
    MEM32(esi + 0x10) = eax;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0026F720(); /* call 0x0026F720 */

loc_0026F438: ;
    ecx = MEM32(esi + 4);
    SET_LO8(edx, MEM8(esi + 8));
    edi = esp + 0x1C;
    MEM32(esi + 0x14) = eax;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = ZX8(LO8(edx));
    PUSH32(esp, 0); sub_0026D550(); /* call 0x0026D550 */

loc_0026F452: ;
    ecx = MEM32(esp + 0x28);
    esp = esp + 0x18;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    POP32(esp, edi);
    if (TEST_Z(ecx, ecx)) { sub_0026F468(); return; } /* je: equal / zero */

loc_0026F45E: ;
    eax = 0; /* xor self */
    MEM32(esi + 0x18) = eax;
    eax = esi;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0026F480
 * Original: 0x0026F480 - 0x0026F6AC (556 bytes, 162 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026F480(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0026F480: ;
    esp = esp - 0x80C;
    eax = MEM32(ebx + 0xC);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5F9B74);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x400);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046EE4A(); /* call 0x0046EE4A */

loc_0026F4A0: ;
    esp = esp + 0x10;
    edi = esp + 0x14;
    eax = esp + 8;
    PUSH32(esp, 0); sub_00060900(); /* call 0x00060900 */

loc_0026F4B0: ;
    ecx = esp + 8;
    eax = esi;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0); sub_00244DD0(); /* call 0x00244DD0 */

loc_0026F4C3: ;
    eax = MEM32(esp + 8);
    if (TEST_Z(eax, eax)) goto loc_0026F4E0; /* je: equal / zero */

loc_0026F4CB: ;
    eax = MEM32(esp + 0xC);
    MEM32(eax) = MEM32(eax) - 1;
    if ((MEM32(eax) != 0)) goto loc_0026F4E0; /* jne: not equal / not zero */

loc_0026F4D3: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0026F4DD: ;
    esp = esp + 4;

loc_0026F4E0: ;
    SET_LO8(eax, MEM8(ebx + 0x1C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0026F53B; /* je: equal / zero */

loc_0026F4E7: ;
    PUSH32(esp, 0x6031E8);
    PUSH32(esp, 0x5F9B74);
    eax = esp + 0x1C;
    PUSH32(esp, 0x400);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046EE4A(); /* call 0x0046EE4A */

loc_0026F500: ;
    esp = esp + 0x10;
    edi = esp + 0x14;
    eax = esp + 8;
    PUSH32(esp, 0); sub_00060900(); /* call 0x00060900 */

loc_0026F510: ;
    ebp = 1;
    ecx = esp + 8;
    eax = esi;
    MEM32(esp + 0x10) = ebp;
    PUSH32(esp, 0); sub_00244DD0(); /* call 0x00244DD0 */

loc_0026F524: ;
    eax = MEM32(esp + 8);
    if (TEST_Z(eax, eax)) goto loc_0026F592; /* je: equal / zero */

loc_0026F52C: ;
    eax = MEM32(esp + 0xC);
    MEM32(eax) = MEM32(eax) - 1;
    if ((MEM32(eax) != 0)) goto loc_0026F592; /* jne: not equal / not zero */

loc_0026F534: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    goto loc_0026F58A;

loc_0026F53B: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x5F9B74);
    edx = esp + 0x1C;
    PUSH32(esp, 0x400);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046EE4A(); /* call 0x0046EE4A */

loc_0026F551: ;
    esp = esp + 0x10;
    edi = esp + 0x14;
    eax = esp + 8;
    PUSH32(esp, 0); sub_00060900(); /* call 0x00060900 */

loc_0026F561: ;
    ebp = 1;
    ecx = esp + 8;
    eax = esi;
    MEM32(esp + 0x10) = ebp;
    PUSH32(esp, 0); sub_00244DD0(); /* call 0x00244DD0 */

loc_0026F575: ;
    eax = MEM32(esp + 8);
    if (TEST_Z(eax, eax)) goto loc_0026F592; /* je: equal / zero */

loc_0026F57D: ;
    eax = MEM32(esp + 0xC);
    MEM32(eax) = MEM32(eax) - 1;
    if ((MEM32(eax) != 0)) goto loc_0026F592; /* jne: not equal / not zero */

loc_0026F585: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);

loc_0026F58A: ;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0026F58F: ;
    esp = esp + 4;

loc_0026F592: ;
    ecx = MEM32(ebx + 0x14);
    edx = MEM32(ecx * 4 + 0x6BEE0C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x5F9B74);
    eax = esp + 0x1C;
    PUSH32(esp, 0x400);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046EE4A(); /* call 0x0046EE4A */

loc_0026F5B1: ;
    esp = esp + 0x10;
    edi = esp + 0x14;
    eax = esp + 8;
    PUSH32(esp, 0); sub_00060900(); /* call 0x00060900 */

loc_0026F5C1: ;
    ecx = esp + 8;
    eax = esi;
    MEM32(esp + 0x10) = ebp;
    PUSH32(esp, 0); sub_00244DD0(); /* call 0x00244DD0 */

loc_0026F5D0: ;
    eax = MEM32(esp + 8);
    if (TEST_Z(eax, eax)) goto loc_0026F5ED; /* je: equal / zero */

loc_0026F5D8: ;
    eax = MEM32(esp + 0xC);
    MEM32(eax) = MEM32(eax) - 1;
    if ((MEM32(eax) != 0)) goto loc_0026F5ED; /* jne: not equal / not zero */

loc_0026F5E0: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0026F5EA: ;
    esp = esp + 4;

loc_0026F5ED: ;
    edx = MEM32(ebx + 0x10);
    eax = MEM32(edx * 4 + 0x6BEDFC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5F9B74);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x400);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046EE4A(); /* call 0x0046EE4A */

loc_0026F60C: ;
    esp = esp + 0x10;
    edi = esp + 0x14;
    eax = esp + 8;
    PUSH32(esp, 0); sub_00060900(); /* call 0x00060900 */

loc_0026F61C: ;
    ecx = esp + 8;
    eax = esi;
    MEM32(esp + 0x10) = ebp;
    PUSH32(esp, 0); sub_00244DD0(); /* call 0x00244DD0 */

loc_0026F62B: ;
    eax = MEM32(esp + 8);
    if (TEST_Z(eax, eax)) goto loc_0026F648; /* je: equal / zero */

loc_0026F633: ;
    eax = MEM32(esp + 0xC);
    MEM32(eax) = MEM32(eax) - 1;
    if ((MEM32(eax) != 0)) goto loc_0026F648; /* jne: not equal / not zero */

loc_0026F63B: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0026F645: ;
    esp = esp + 4;

loc_0026F648: ;
    eax = MEM32(ebx + 0x18);
    ecx = MEM32(eax * 4 + 0x6BEDF0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5F9B74);
    edx = esp + 0x1C;
    PUSH32(esp, 0x400);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046EE4A(); /* call 0x0046EE4A */

loc_0026F667: ;
    esp = esp + 0x10;
    edi = esp + 0x14;
    eax = esp + 8;
    PUSH32(esp, 0); sub_00060900(); /* call 0x00060900 */

loc_0026F677: ;
    ecx = esp + 8;
    eax = esi;
    MEM32(esp + 0x10) = ebp;
    PUSH32(esp, 0); sub_00244DD0(); /* call 0x00244DD0 */

loc_0026F686: ;
    eax = MEM32(esp + 8);
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, ebp);
    if (TEST_Z(eax, eax)) goto loc_0026F6A5; /* je: equal / zero */

loc_0026F690: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = MEM32(eax) - 1;
    if ((MEM32(eax) != 0)) goto loc_0026F6A5; /* jne: not equal / not zero */

loc_0026F698: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0026F6A2: ;
    esp = esp + 4;

loc_0026F6A5: ;
    esp = esp + 0x80C;
    esp += 4; return; /* ret */

}

/**
 * sub_0026F6B0
 * Original: 0x0026F6B0 - 0x0026F714 (100 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026F6B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0026F6B0: ;
    esp = esp - 0x404;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x10);
    edx = esp + 0x10;
    PUSH32(esp, 0); sub_0026F2B0(); /* call 0x0026F2B0 */

loc_0026F6CD: ;
    edx = MEM32(esi + 4);
    eax = MEM32(esi);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + 8));
    PUSH32(esp, 0); sub_0026D550(); /* call 0x0026D550 */

loc_0026F6E2: ;
    edi = MEM32(esi + 0x14);
    esi = MEM32(esp + 0x18);
    edx = esp + 0x1C;
    ecx = eax;
    (void)0; /* cmp edi, 1 - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(edi, 1)) ? 1 : 0); /* sete */
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0026D620(); /* call 0x0026D620 */

loc_0026F6FB: ;
    esp = esp + 0x14;
    edi = esp + 0xC;
    eax = ebx;
    PUSH32(esp, 0); sub_00060900(); /* call 0x00060900 */

loc_0026F709: ;
    POP32(esp, edi);
    eax = ebx;
    POP32(esp, esi);
    esp = esp + 0x404;
    esp += 4; return; /* ret */

}

/**
 * sub_0026F720
 * Original: 0x0026F720 - 0x0026F749 (41 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026F720(void)
{
    int _flags = 0; /* fallback flag var */

loc_0026F720: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = ZX8(MEM8(esp + 0xC));
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0); sub_004243B0(); /* call 0x004243B0 */

loc_0026F739: ;
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_0026F749(); return; } /* je: equal / zero */

loc_0026F740: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0026F7B0
 * Original: 0x0026F7B0 - 0x002707CC (4124 bytes, 1164 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026F7B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0026F7B0: ;
    eax = 0x10CC;
    PUSH32(esp, 0); sub_00470E50(); /* call 0x00470E50 */

loc_0026F7BA: ;
    SET_LO8(eax, MEM8(0x849C0E));
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(esp + 0x18) = edi;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0026F7D2; /* je: equal / zero */

loc_0026F7CD: ;
    PUSH32(esp, 0); sub_0026A790(); /* call 0x0026A790 */

loc_0026F7D2: ;
    eax = ZX8(MEM8(0x862D13));
    PUSH32(esp, 0); sub_004200A0(); /* call 0x004200A0 */

loc_0026F7DE: ;
    if (TEST_Z(eax, eax)) goto loc_002707C1; /* je: equal / zero */

loc_0026F7E6: ;
    esi = ZX8(MEM8(0x862D13));
    eax = esi;
    MEM8(esi + 0x849DC4) = 1;
    PUSH32(esp, 0); sub_00422740(); /* call 0x00422740 */

loc_0026F7FB: ;
    if (CMP_EQ(eax, 2)) goto loc_0026F820; /* je: equal / zero */

loc_0026F800: ;
    eax = esi;
    PUSH32(esp, 0); sub_00422740(); /* call 0x00422740 */

loc_0026F807: ;
    if (CMP_EQ(eax, 1)) goto loc_002707C1; /* je: equal / zero */

loc_0026F810: ;
    PUSH32(esp, 0); sub_00422590(); /* call 0x00422590 */

loc_0026F815: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x10CC;
    esp += 4; return; /* ret */

loc_0026F820: ;
    MEM8(0x875859) = MEM8(0x875859) + 1;
    edx = 0x20;
    ecx = esp + 0x6C;
    MEM32(esp + 0x70) = edi;
    MEM32(esp + 0x74) = edi;
    MEM32(esp + 0x78) = edi;
    PUSH32(esp, 0); sub_00278F30(); /* call 0x00278F30 */

loc_0026F840: ;
    SET_LO8(eax, MEM8(0x864EC1));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    esi = MEM32(esp + 0x74);
    MEM32(esp + 0x30) = edi;
    if (CMP_LE(LO8(eax) & LO8(eax), 0)) goto loc_0026F947; /* jle: less or equal (signed <=) */

loc_0026F855: ;
    ebp = 0; /* xor self */
    goto loc_0026F860;

    /* nop */

loc_0026F860: ;
    MEM32(esp + 0x48) = edi;
    ebx = 0xA18;
    /* nop */

loc_0026F870: ;
    ecx = edi;
    eax = 1;
    eax = eax << LO8(ecx);
    SET_LO8(ecx, MEM8(ebp + 0x865620));
    if (TEST_Z(LO8(ecx), LO8(eax))) goto loc_0026F90F; /* je: equal / zero */

loc_0026F887: ;
    if (CMP_L(ebx, 0xA18)) goto loc_0026F8B2; /* jl: less (signed <) */

loc_0026F88F: ;
    if (CMP_GE(ebx, 0xA28)) goto loc_0026F8B2; /* jge: greater or equal (signed >=) */

loc_0026F897: ;
    SET_LO8(eax, MEM8(edi + ebp + 0x8658F0));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0026F8B2; /* je: equal / zero */

loc_0026F8A2: ;
    edx = MEM32(ebx + ebp + 0x864EC8);
    edi = MEM32(ebx + ebp + 0x864ECC);
    goto loc_0026F8B6;

loc_0026F8B2: ;
    edx = 0; /* xor self */
    edi = 0; /* xor self */

loc_0026F8B6: ;
    eax = MEM32(esp + 0x70);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x94) = edx;
    MEM32(esp + 0x98) = edi;
    if (TEST_Z(eax, eax)) goto loc_0026F8F4; /* je: equal / zero */

loc_0026F8CC: ;
    ecx = MEM32(esp + 0x70);
    eax = esi;
    eax = eax - ecx;
    ecx = MEM32(esp + 0x78);
    ecx = ecx - MEM32(esp + 0x70);
    eax = (uint32_t)((int32_t)eax >> 3);
    ecx = (uint32_t)((int32_t)ecx >> 3);
    if (CMP_AE(eax, ecx)) goto loc_0026F8F4; /* jae: above or equal (unsigned >=) */

loc_0026F8E6: ;
    MEM32(esi) = edx;
    MEM32(esi + 4) = edi;
    esi = esi + 8;
    MEM32(esp + 0x74) = esi;
    goto loc_0026F90F;

loc_0026F8F4: ;
    edx = esp + 0x94;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    ecx = 1;
    edx = esp + 0x74;
    PUSH32(esp, 0); sub_00279160(); /* call 0x00279160 */

loc_0026F90B: ;
    esi = MEM32(esp + 0x74);

loc_0026F90F: ;
    edi = MEM32(esp + 0x48);
    edi++;
    ebx = ebx + 8;
    (void)0; /* cmp ebx, 0xA28 - flags set for next jcc */
    MEM32(esp + 0x48) = edi;
    if (CMP_L(ebx, 0xA28)) goto loc_0026F870; /* jl: less (signed <) */

loc_0026F927: ;
    eax = MEM32(esp + 0x30);
    ecx = (uint32_t)(int32_t)SMEM8(0x864EC1);
    eax++;
    ebp = ebp + 0xA50;
    edi = 0; /* xor self */
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x30) = eax;
    if (CMP_L(eax, ecx)) goto loc_0026F860; /* jl: less (signed <) */

loc_0026F947: ;
    SET_LO8(eax, MEM8(0x862E6C));
    ebx = 0; /* xor self */
    ebp = 0; /* xor self */
    if (CMP_LE(LO8(eax) & LO8(eax), 0)) goto loc_0026F9B2; /* jle: less or equal (signed <=) */

loc_0026F954: ;
    edx = MEM32(esp + 0x70);
    edi = 0x862E70;
    /* nop */

loc_0026F960: ;
    if (CMP_EQ(edx, ebp)) goto loc_0026F98B; /* je: equal / zero */

loc_0026F964: ;
    ecx = MEM32(esp + 0x78);
    eax = esi;
    eax = eax - edx;
    ecx = ecx - edx;
    eax = (uint32_t)((int32_t)eax >> 3);
    ecx = (uint32_t)((int32_t)ecx >> 3);
    if (CMP_AE(eax, ecx)) goto loc_0026F98B; /* jae: above or equal (unsigned >=) */

loc_0026F978: ;
    eax = MEM32(edi);
    MEM32(esi) = eax;
    ecx = MEM32(edi + 4);
    MEM32(esi + 4) = ecx;
    esi = esi + 8;
    MEM32(esp + 0x74) = esi;
    goto loc_0026F9A3;

loc_0026F98B: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ecx = 1;
    edx = esp + 0x74;
    PUSH32(esp, 0); sub_00279160(); /* call 0x00279160 */

loc_0026F99B: ;
    esi = MEM32(esp + 0x74);
    edx = MEM32(esp + 0x70);

loc_0026F9A3: ;
    eax = (uint32_t)(int32_t)SMEM8(0x862E6C);
    ebx++;
    edi = edi + 0x20;
    if (CMP_L(ebx, eax)) goto loc_0026F960; /* jl: less (signed <) */

loc_0026F9B2: ;
    edi = MEM32(esp + 0x70);
    ecx = esi;
    ecx = ecx - edi;
    ecx = (uint32_t)((int32_t)ecx >> 3);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00279720(); /* call 0x00279720 */

loc_0026F9C5: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = esp + 0x24;
    PUSH32(esp, 0); sub_002795E0(); /* call 0x002795E0 */

loc_0026F9D0: ;
    eax = MEM32(eax);
    esp = esp + 0x14;
    if (CMP_EQ(eax, esi)) goto loc_0026F9E6; /* je: equal / zero */

loc_0026F9D9: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E670(); /* call 0x0046E670 */

loc_0026F9E1: ;
    esp = esp + 0xC;
    esi = eax;

loc_0026F9E6: ;
    if (CMP_NE(edi, ebp)) goto loc_0026F9EE; /* jne: not equal / not zero */

loc_0026F9EA: ;
    ebx = 0; /* xor self */
    goto loc_0026F9F5;

loc_0026F9EE: ;
    esi = esi - edi;
    esi = (uint32_t)((int32_t)esi >> 3);
    ebx = esi;

loc_0026F9F5: ;
    SET_LO8(eax, MEM8(0x862D10));
    if (TEST_Z(LO8(eax), 1)) goto loc_0026FA06; /* je: equal / zero */

loc_0026F9FE: ;
    MEM8(0x862D11) = MEM8(0x862D11) + 1;
    goto loc_0026FA19;

loc_0026FA06: ;
    if (TEST_Z(LO8(eax), 2)) goto loc_0026FA19; /* je: equal / zero */

loc_0026FA0A: ;
    MEM8(0x862D11) = MEM8(0x862D11) - 1;
    if (((int32_t)MEM8(0x862D11) >= 0)) goto loc_0026FA19; /* jns: not sign (positive) */

loc_0026FA12: ;
    MEM8(0x862D11) = 0;

loc_0026FA19: ;
    edx = (uint32_t)(int32_t)SMEM8(0x862D11);
    if (CMP_L(edx, ebx)) goto loc_0026FA2D; /* jl: less (signed <) */

loc_0026FA24: ;
    SET_LO8(eax, LO8(ebx));
    SET_LO8(eax, LO8(eax) - 1);
    MEM8(0x862D11) = LO8(eax);

loc_0026FA2D: ;
    eax = ZX8(MEM8(0x862D13));
    MEM32(esp + 0x44) = ebp;
    PUSH32(esp, 0); sub_004202D0(); /* call 0x004202D0 */

loc_0026FA3D: ;
    MEM32(esp + 0x98) = edx;
    ecx = ebx;
    edx = esp + 0x5C;
    MEM32(esp + 0x94) = eax;
    MEM32(esp + 0x60) = ebp;
    MEM32(esp + 0x64) = ebp;
    MEM32(esp + 0x68) = ebp;
    MEM32(esp + 0x88) = ebp;
    MEM32(esp + 0x8C) = ebp;
    MEM32(esp + 0x90) = ebp;
    PUSH32(esp, 0); sub_00278E20(); /* call 0x00278E20 */

loc_0026FA77: ;
    ecx = ebx;
    edx = esp + 0x84;
    PUSH32(esp, 0); sub_00279020(); /* call 0x00279020 */

loc_0026FA85: ;
    SET_LO8(eax, MEM8(0x864EC1));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(esp + 0x9C) = ebp;
    MEM32(esp + 0xA0) = ebp;
    MEM8(esp + 0xA4) = 0;
    MEM32(esp + 0xA8) = ebp;
    MEM32(esp + 0x30) = ebp;
    if (CMP_LE(LO8(eax) & LO8(eax), 0)) goto loc_0026FE3B; /* jle: less or equal (signed <=) */

loc_0026FAB3: ;
    esi = 0; /* xor self */
    MEM32(esp + 0x10) = esi;
    /* nop */

loc_0026FAC0: ;
    ebx = 0; /* xor self */
    edi = 0xA18;
    MEM32(esp + 0x48) = ebx;
    MEM32(esp + 0x7C) = edi;
    /* nop */

loc_0026FAD0: ;
    SET_LO8(eax, MEM8(esi + 0x865620));
    edx = 1;
    ecx = ebx;
    edx = edx << LO8(ecx);
    if (TEST_Z(LO8(eax), LO8(edx))) goto loc_0026FE01; /* je: equal / zero */

loc_0026FAE7: ;
    ecx = 5;
    edx = esp + 0x34;
    MEM32(esp + 0x38) = ebp;
    MEM32(esp + 0x3C) = ebp;
    MEM32(esp + 0x40) = ebp;
    PUSH32(esp, 0); sub_00278CF0(); /* call 0x00278CF0 */

loc_0026FB01: ;
    (void)0; /* cmp edi, 0xA18 - flags set for next jcc */
    esi = esi + 0x864EC8;
    if (CMP_L(edi, 0xA18)) goto loc_0026FB2F; /* jl: less (signed <) */

loc_0026FB0F: ;
    if (CMP_GE(edi, 0xA28)) goto loc_0026FB2F; /* jge: greater or equal (signed >=) */

loc_0026FB17: ;
    SET_LO8(eax, MEM8(esi + ebx + 0xA28));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0026FB2F; /* je: equal / zero */

loc_0026FB22: ;
    eax = MEM32(esp + 0x7C);
    edi = MEM32(eax + esi);
    ebx = MEM32(eax + esi + 4);
    goto loc_0026FB33;

loc_0026FB2F: ;
    edi = 0; /* xor self */
    ebx = 0; /* xor self */

loc_0026FB33: ;
    eax = MEM32(esp + 0x30);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0028BC60(); /* call 0x0028BC60 */

loc_0026FB3D: ;
    esp = esp + 4;
    (void)0; /* test eax, eax - flags set for next jcc */
    eax = MEM32(esp + 0x48);
    SET_LO8(ecx, (TEST_NZ(eax, eax)) ? 1 : 0); /* setne */
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0); sub_00299D60(); /* call 0x00299D60 */

loc_0026FB51: ;
    PUSH32(esp, ebx);
    edx = eax;
    SET_LO8(eax, MEM8(0x862D13));
    PUSH32(esp, edi);
    esi = esp + 0xC8;
    PUSH32(esp, 0); sub_0026F400(); /* call 0x0026F400 */

loc_0026FB66: ;
    (void)0; /* cmp MEM32(esp + 0x88), ebp - flags set for next jcc */
    esi = MEM32(esp + 0x8C);
    if (CMP_EQ(MEM32(esp + 0x88), ebp)) goto loc_0026FBBF; /* je: equal / zero */

loc_0026FB76: ;
    edx = MEM32(esp + 0x88);
    ecx = MEM32(esp + 0x90);
    eax = esi;
    eax = eax - edx;
    ecx = ecx - edx;
    eax = (uint32_t)((int32_t)eax >> 5);
    ecx = (uint32_t)((int32_t)ecx >> 5);
    if (CMP_AE(eax, ecx)) goto loc_0026FBBF; /* jae: above or equal (unsigned >=) */

loc_0026FB94: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    eax = esp + 0x88;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    ecx = esp + 0xCC;
    PUSH32(esp, 0); sub_002797F0(); /* call 0x002797F0 */

loc_0026FBB0: ;
    esp = esp + 0x10;
    esi = esi + 0x20;
    MEM32(esp + 0x8C) = esi;
    goto loc_0026FBD5;

loc_0026FBBF: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    edx = esp + 0xC4;
    ecx = esp + 0x8C;
    PUSH32(esp, 0); sub_00279390(); /* call 0x00279390 */

loc_0026FBD5: ;
    ecx = (uint32_t)(int32_t)SMEM8(0x862D11);
    if (CMP_NE(ecx, MEM32(esp + 0x44))) goto loc_0026FBF7; /* jne: not equal / not zero */

loc_0026FBE2: ;
    ecx = 8;
    esi = esp + 0xBC;
    edi = esp + 0x9C;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */

loc_0026FBF7: ;
    edx = MEM32(esp + 0x10);
    if (CMP_EQ(MEM32(edx + 0x864ECC), ebp)) goto loc_0026FC4B; /* je: equal / zero */

loc_0026FC03: ;
    ebx = MEM32(esp + 0x18);
    PUSH32(esp, 0x5F5658);
    PUSH32(esp, 0x5F9B74);
    eax = esp + 0x8E4;
    PUSH32(esp, 0x400);
    ebx = ebx | 1;
    PUSH32(esp, eax);
    MEM32(esp + 0x28) = ebx;
    PUSH32(esp, 0); sub_0046EE4A(); /* call 0x0046EE4A */

loc_0026FC2A: ;
    esp = esp + 0x10;
    edi = esp + 0x8DC;
    eax = esp + 0x1C;
    PUSH32(esp, 0); sub_00060900(); /* call 0x00060900 */

loc_0026FC3D: ;
    MEM32(esp + 0x24) = 2;
    ecx = esp + 0x1C;
    goto loc_0026FC91;

loc_0026FC4B: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, 0x5F567C);
    esi = 2;
    ecx = ecx | esi;
    PUSH32(esp, 0x5F9B74);
    MEM32(esp + 0x20) = ecx;
    ecx = esp + 0xE4;
    PUSH32(esp, 0x400);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046EE4A(); /* call 0x0046EE4A */

loc_0026FC76: ;
    esp = esp + 0x10;
    edi = esp + 0xDC;
    eax = esp + 0x4C;
    PUSH32(esp, 0); sub_00060900(); /* call 0x00060900 */

loc_0026FC89: ;
    MEM32(esp + 0x54) = esi;
    ecx = esp + 0x4C;

loc_0026FC91: ;
    esi = MEM32(esp + 0x50);
    edi = MEM32(esp + 0x20);
    eax = esp + 0x34;
    PUSH32(esp, 0); sub_00244DD0(); /* call 0x00244DD0 */

loc_0026FCA2: ;
    ebx = MEM32(esp + 0x18);
    if (TEST_Z(LO8(ebx), 2)) goto loc_0026FCED; /* je: equal / zero */

loc_0026FCAB: ;
    eax = MEM32(esp + 0x4C);
    ebx = ebx & 0xFFFFFFFDu;
    (void)0; /* cmp eax, ebp - flags set for next jcc */
    MEM32(esp + 0x18) = ebx;
    if (CMP_EQ(eax, ebp)) goto loc_0026FCED; /* je: equal / zero */

loc_0026FCBA: ;
    MEM32(esi) = MEM32(esi) - 1;
    if ((MEM32(esi) != 0)) goto loc_0026FCED; /* jne: not equal / not zero */

loc_0026FCBE: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_0026FCC4: ;
    if (TEST_NZ(eax, eax)) goto loc_0026FCED; /* jne: not equal / not zero */

loc_0026FCC8: ;
    eax = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    eax++;
    edx--;
    PUSH32(esp, esi);
    MEM32(0x7FA490) = eax;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_0026FCE6: ;
    esp = esp + 4;
    MEM32(esp + 0x50) = ebp;

loc_0026FCED: ;
    if (TEST_Z(LO8(ebx), 1)) goto loc_0026FD36; /* je: equal / zero */

loc_0026FCF2: ;
    eax = MEM32(esp + 0x1C);
    ebx = ebx & 0xFFFFFFFEu;
    (void)0; /* cmp eax, ebp - flags set for next jcc */
    MEM32(esp + 0x18) = ebx;
    if (CMP_EQ(eax, ebp)) goto loc_0026FD36; /* je: equal / zero */

loc_0026FD01: ;
    MEM32(edi) = MEM32(edi) - 1;
    if ((MEM32(edi) != 0)) goto loc_0026FD36; /* jne: not equal / not zero */

loc_0026FD05: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_0026FD0B: ;
    if (TEST_NZ(eax, eax)) goto loc_0026FD36; /* jne: not equal / not zero */

loc_0026FD0F: ;
    esi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    esi++;
    edx--;
    PUSH32(esp, edi);
    MEM32(0x7FA490) = esi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_0026FD2F: ;
    esp = esp + 4;
    MEM32(esp + 0x20) = ebp;

loc_0026FD36: ;
    esi = esp + 0x34;
    ebx = esp + 0xBC;
    PUSH32(esp, 0); sub_0026F480(); /* call 0x0026F480 */

loc_0026FD46: ;
    edx = MEM32(esp + 0x60);
    (void)0; /* test edx, edx - flags set for next jcc */
    esi = MEM32(esp + 0x64);
    if (TEST_Z(edx, edx)) goto loc_0026FD83; /* je: equal / zero */

loc_0026FD52: ;
    ecx = MEM32(esp + 0x68);
    eax = esi;
    eax = eax - edx;
    ecx = ecx - edx;
    eax = (uint32_t)((int32_t)eax >> 4);
    ecx = (uint32_t)((int32_t)ecx >> 4);
    if (CMP_AE(eax, ecx)) goto loc_0026FD83; /* jae: above or equal (unsigned >=) */

loc_0026FD66: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    ecx = esp + 0x40;
    PUSH32(esp, 0); sub_00246BB0(); /* call 0x00246BB0 */

loc_0026FD77: ;
    esp = esp + 0xC;
    esi = esi + 0x10;
    MEM32(esp + 0x64) = esi;
    goto loc_0026FD94;

loc_0026FD83: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    eax = esp + 0x64;
    PUSH32(esp, eax);
    ecx = esp + 0x40;
    PUSH32(esp, 0); sub_00245580(); /* call 0x00245580 */

loc_0026FD94: ;
    ecx = MEM32(esp + 0x44);
    esi = MEM32(esp + 0x38);
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(esp + 0x44) = ecx;
    if (TEST_Z(esi, esi)) goto loc_0026FDE5; /* je: equal / zero */

loc_0026FDA5: ;
    ecx = MEM32(esp + 0x10);
    ebx = MEM32(esp + 0x3C);
    PUSH32(esp, ecx);
    eax = esi;
    PUSH32(esp, 0); sub_00227D70(); /* call 0x00227D70 */

loc_0026FDB5: ;
    esp = esp + 4;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_0026FDBE: ;
    if (TEST_NZ(eax, eax)) goto loc_0026FDE5; /* jne: not equal / not zero */

loc_0026FDC2: ;
    edi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    edi++;
    edx--;
    PUSH32(esp, esi);
    MEM32(0x7FA490) = edi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_0026FDE2: ;
    esp = esp + 4;

loc_0026FDE5: ;
    esi = MEM32(esp + 0x10);
    edi = MEM32(esp + 0x7C);
    ebx = MEM32(esp + 0x48);
    eax = 0; /* xor self */
    MEM32(esp + 0x38) = eax;
    MEM32(esp + 0x3C) = eax;
    MEM32(esp + 0x40) = eax;
    ebp = 0; /* xor self */

loc_0026FE01: ;
    edi = edi + 8;
    ebx++;
    (void)0; /* cmp edi, 0xA28 - flags set for next jcc */
    MEM32(esp + 0x48) = ebx;
    MEM32(esp + 0x7C) = edi;
    if (CMP_L(edi, 0xA28)) goto loc_0026FAD0; /* jl: less (signed <) */

loc_0026FE19: ;
    eax = MEM32(esp + 0x30);
    edx = (uint32_t)(int32_t)SMEM8(0x864EC1);
    eax++;
    esi = esi + 0xA50;
    (void)0; /* cmp eax, edx - flags set for next jcc */
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0x10) = esi;
    if (CMP_L(eax, edx)) goto loc_0026FAC0; /* jl: less (signed <) */

loc_0026FE3B: ;
    edx = MEM32(esp + 0x60);
    (void)0; /* cmp edx, ebp - flags set for next jcc */
    esi = MEM32(esp + 0x64);
    MEM32(esp + 0x38) = ebp;
    MEM32(esp + 0x3C) = ebp;
    MEM32(esp + 0x40) = ebp;
    if (CMP_EQ(edx, ebp)) goto loc_0026FE84; /* je: equal / zero */

loc_0026FE53: ;
    ecx = MEM32(esp + 0x68);
    eax = esi;
    eax = eax - edx;
    ecx = ecx - edx;
    eax = (uint32_t)((int32_t)eax >> 4);
    ecx = (uint32_t)((int32_t)ecx >> 4);
    if (CMP_AE(eax, ecx)) goto loc_0026FE84; /* jae: above or equal (unsigned >=) */

loc_0026FE67: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    ecx = esp + 0x40;
    PUSH32(esp, 0); sub_00246BB0(); /* call 0x00246BB0 */

loc_0026FE78: ;
    esp = esp + 0xC;
    esi = esi + 0x10;
    MEM32(esp + 0x64) = esi;
    goto loc_0026FE95;

loc_0026FE84: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    ecx = esp + 0x64;
    PUSH32(esp, ecx);
    ecx = esp + 0x40;
    PUSH32(esp, 0); sub_00245580(); /* call 0x00245580 */

loc_0026FE95: ;
    SET_LO8(eax, MEM8(0x862E6C));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(esp + 0x30) = ebp;
    if (CMP_LE(LO8(eax) & LO8(eax), 0)) goto loc_002700C3; /* jle: less or equal (signed <=) */

loc_0026FEA6: ;
    ebp = 0x862E70;
    goto loc_0026FEB0;

    /* nop */

loc_0026FEB0: ;
    ebx = 0; /* xor self */
    ecx = 5;
    edx = esp + 0x4C;
    MEM32(esp + 0x50) = ebx;
    MEM32(esp + 0x54) = ebx;
    MEM32(esp + 0x58) = ebx;
    PUSH32(esp, 0); sub_00278CF0(); /* call 0x00278CF0 */

loc_0026FECC: ;
    eax = MEM32(ebp + 4);
    ecx = MEM32(ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    SET_LO8(eax, MEM8(0x862D13));
    edx = ebp + 0xC;
    PUSH32(esp, ecx);
    esi = esp + 0xC8;
    PUSH32(esp, 0); sub_0026F400(); /* call 0x0026F400 */

loc_0026FEE9: ;
    eax = MEM32(esp + 0x88);
    edx = MEM32(esp + 0x8C);
    ecx = 0; /* xor self */
    if (CMP_EQ(eax, edx)) goto loc_0026FF46; /* je: equal / zero */

loc_0026FEFD: ;
    edx = MEM32(esp + 0xC0);
    esi = MEM32(esp + 0xBC);
    goto loc_0026FF10;

    /* nop */

loc_0026FF10: ;
    edi = MEM32(eax);
    if (CMP_NE(edi, esi)) goto loc_0026FF1E; /* jne: not equal / not zero */

loc_0026FF16: ;
    edi = MEM32(eax + 4);
    if (CMP_NE(edi, edx)) goto loc_0026FF1E; /* jne: not equal / not zero */

loc_0026FF1D: ;
    ecx++;

loc_0026FF1E: ;
    edi = MEM32(esp + 0x8C);
    eax = eax + 0x20;
    if (CMP_NE(eax, edi)) goto loc_0026FF10; /* jne: not equal / not zero */

loc_0026FF2C: ;
    if (CMP_EQ(ecx, ebx)) goto loc_0026FF46; /* je: equal / zero */

loc_0026FF30: ;
    esi = MEM32(esp + 0x50);
    if (CMP_EQ(esi, ebx)) goto loc_0027009A; /* je: equal / zero */

loc_0026FF3C: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    goto loc_0027005F;

loc_0026FF46: ;
    eax = (uint32_t)(int32_t)SMEM8(0x862D11);
    if (CMP_NE(eax, MEM32(esp + 0x44))) goto loc_0026FF68; /* jne: not equal / not zero */

loc_0026FF53: ;
    ecx = 8;
    esi = esp + 0xBC;
    edi = esp + 0x9C;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */

loc_0026FF68: ;
    PUSH32(esp, 0x6031C0);
    PUSH32(esp, 0x5F9B74);
    ecx = esp + 0xE4;
    PUSH32(esp, 0x400);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046EE4A(); /* call 0x0046EE4A */

loc_0026FF84: ;
    esp = esp + 0x10;
    edi = esp + 0xDC;
    eax = esp + 0x1C;
    PUSH32(esp, 0); sub_00060900(); /* call 0x00060900 */

loc_0026FF97: ;
    ecx = esp + 0x1C;
    eax = esp + 0x4C;
    MEM32(esp + 0x24) = 2;
    PUSH32(esp, 0); sub_00244DD0(); /* call 0x00244DD0 */

loc_0026FFAC: ;
    if (CMP_EQ(MEM32(esp + 0x1C), ebx)) goto loc_0026FFEB; /* je: equal / zero */

loc_0026FFB2: ;
    esi = MEM32(esp + 0x20);
    MEM32(esi) = MEM32(esi) - 1;
    if ((MEM32(esi) != 0)) goto loc_0026FFEB; /* jne: not equal / not zero */

loc_0026FFBA: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_0026FFC0: ;
    if (TEST_NZ(eax, eax)) goto loc_0026FFEB; /* jne: not equal / not zero */

loc_0026FFC4: ;
    edi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    edi++;
    edx--;
    PUSH32(esp, esi);
    MEM32(0x7FA490) = edi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_0026FFE4: ;
    esp = esp + 4;
    MEM32(esp + 0x20) = ebx;

loc_0026FFEB: ;
    esi = esp + 0x4C;
    ebx = esp + 0xBC;
    PUSH32(esp, 0); sub_0026F480(); /* call 0x0026F480 */

loc_0026FFFB: ;
    edx = MEM32(esp + 0x60);
    (void)0; /* test edx, edx - flags set for next jcc */
    esi = MEM32(esp + 0x64);
    if (TEST_Z(edx, edx)) goto loc_00270038; /* je: equal / zero */

loc_00270007: ;
    ecx = MEM32(esp + 0x68);
    eax = esi;
    eax = eax - edx;
    ecx = ecx - edx;
    eax = (uint32_t)((int32_t)eax >> 4);
    ecx = (uint32_t)((int32_t)ecx >> 4);
    if (CMP_AE(eax, ecx)) goto loc_00270038; /* jae: above or equal (unsigned >=) */

loc_0027001B: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    ecx = esp + 0x58;
    PUSH32(esp, 0); sub_00246BB0(); /* call 0x00246BB0 */

loc_0027002C: ;
    esp = esp + 0xC;
    esi = esi + 0x10;
    MEM32(esp + 0x64) = esi;
    goto loc_00270049;

loc_00270038: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    eax = esp + 0x64;
    PUSH32(esp, eax);
    ecx = esp + 0x58;
    PUSH32(esp, 0); sub_00245580(); /* call 0x00245580 */

loc_00270049: ;
    ecx = MEM32(esp + 0x44);
    esi = MEM32(esp + 0x50);
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(esp + 0x44) = ecx;
    if (TEST_Z(esi, esi)) goto loc_0027009A; /* je: equal / zero */

loc_0027005A: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);

loc_0027005F: ;
    ebx = MEM32(esp + 0x58);
    eax = esi;
    PUSH32(esp, 0); sub_00227D70(); /* call 0x00227D70 */

loc_0027006A: ;
    esp = esp + 4;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_00270073: ;
    if (TEST_NZ(eax, eax)) goto loc_0027009A; /* jne: not equal / not zero */

loc_00270077: ;
    edi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    edi++;
    edx--;
    PUSH32(esp, esi);
    MEM32(0x7FA4B4) = edx;
    MEM32(0x7FA490) = edi;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_00270097: ;
    esp = esp + 4;

loc_0027009A: ;
    edx = (uint32_t)(int32_t)SMEM8(0x862E6C);
    eax = 0; /* xor self */
    MEM32(esp + 0x50) = eax;
    MEM32(esp + 0x54) = eax;
    MEM32(esp + 0x58) = eax;
    eax = MEM32(esp + 0x30);
    eax++;
    ebp = ebp + 0x20;
    (void)0; /* cmp eax, edx - flags set for next jcc */
    MEM32(esp + 0x30) = eax;
    if (CMP_L(eax, edx)) goto loc_0026FEB0; /* jl: less (signed <) */

loc_002700C3: ;
    ebp = 0; /* xor self */
    edi = 0x5F59F0;
    eax = esp + 0x10;
    MEM32(esp + 0x38) = ebp;
    MEM32(esp + 0x3C) = ebp;
    MEM32(esp + 0x40) = ebp;
    PUSH32(esp, 0); sub_00060900(); /* call 0x00060900 */

loc_002700DF: ;
    edi = MEM32(esp + 0x10);
    (void)0; /* cmp edi, ebp - flags set for next jcc */
    esi = MEM32(esp + 0x14);
    xmm0 = MEMF(0x75E8F8); /* movss */
    xmm1 = MEMF(0x75E910); /* movss */
    MEM32(esp + 0x20) = esi;
    MEM32(esp + 0x1C) = edi;
    if (CMP_EQ(edi, ebp)) goto loc_00270105; /* je: equal / zero */

loc_00270103: ;
    MEM32(esi) = MEM32(esi) + 1;

loc_00270105: ;
    (void)0; /* cmp edi, ebp - flags set for next jcc */
    MEMF(esp + 0x24) = xmm1; /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEM8(esp + 0x2C) = 0;
    if (CMP_EQ(edi, ebp)) goto loc_0027014B; /* je: equal / zero */

loc_0027011A: ;
    MEM32(esi) = MEM32(esi) - 1;
    if ((MEM32(esi) != 0)) goto loc_0027014B; /* jne: not equal / not zero */

loc_0027011E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_00270124: ;
    if (TEST_NZ(eax, eax)) goto loc_0027014B; /* jne: not equal / not zero */

loc_00270128: ;
    ebx = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    ebx++;
    edx--;
    PUSH32(esp, esi);
    MEM32(0x7FA490) = ebx;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_00270148: ;
    esp = esp + 4;

loc_0027014B: ;
    ecx = esp + 0x1C;
    eax = esp + 0x34;
    PUSH32(esp, 0); sub_00244E50(); /* call 0x00244E50 */

loc_00270158: ;
    if (CMP_EQ(edi, ebp)) goto loc_0027018D; /* je: equal / zero */

loc_0027015C: ;
    MEM32(esi) = MEM32(esi) - 1;
    if ((MEM32(esi) != 0)) goto loc_0027018D; /* jne: not equal / not zero */

loc_00270160: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_00270166: ;
    if (TEST_NZ(eax, eax)) goto loc_0027018D; /* jne: not equal / not zero */

loc_0027016A: ;
    edi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    edi++;
    edx--;
    PUSH32(esp, esi);
    MEM32(0x7FA490) = edi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_0027018A: ;
    esp = esp + 4;

loc_0027018D: ;
    edi = 0x5F59F0;
    eax = esp + 0x10;
    PUSH32(esp, 0); sub_00060900(); /* call 0x00060900 */

loc_0027019B: ;
    edi = MEM32(esp + 0x10);
    (void)0; /* cmp edi, ebp - flags set for next jcc */
    esi = MEM32(esp + 0x14);
    xmm0 = MEMF(0x75E8FC); /* movss */
    xmm1 = MEMF(0x75E914); /* movss */
    MEM32(esp + 0x20) = esi;
    MEM32(esp + 0x1C) = edi;
    if (CMP_EQ(edi, ebp)) goto loc_002701C1; /* je: equal / zero */

loc_002701BF: ;
    MEM32(esi) = MEM32(esi) + 1;

loc_002701C1: ;
    (void)0; /* cmp edi, ebp - flags set for next jcc */
    MEMF(esp + 0x24) = xmm1; /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEM8(esp + 0x2C) = 0;
    if (CMP_EQ(edi, ebp)) goto loc_00270207; /* je: equal / zero */

loc_002701D6: ;
    MEM32(esi) = MEM32(esi) - 1;
    if ((MEM32(esi) != 0)) goto loc_00270207; /* jne: not equal / not zero */

loc_002701DA: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_002701E0: ;
    if (TEST_NZ(eax, eax)) goto loc_00270207; /* jne: not equal / not zero */

loc_002701E4: ;
    ebx = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    ebx++;
    edx--;
    PUSH32(esp, esi);
    MEM32(0x7FA490) = ebx;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_00270204: ;
    esp = esp + 4;

loc_00270207: ;
    ecx = esp + 0x1C;
    eax = esp + 0x34;
    PUSH32(esp, 0); sub_00244E50(); /* call 0x00244E50 */

loc_00270214: ;
    if (CMP_EQ(edi, ebp)) goto loc_00270249; /* je: equal / zero */

loc_00270218: ;
    MEM32(esi) = MEM32(esi) - 1;
    if ((MEM32(esi) != 0)) goto loc_00270249; /* jne: not equal / not zero */

loc_0027021C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_00270222: ;
    if (TEST_NZ(eax, eax)) goto loc_00270249; /* jne: not equal / not zero */

loc_00270226: ;
    edi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    edi++;
    edx--;
    PUSH32(esp, esi);
    MEM32(0x7FA490) = edi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_00270246: ;
    esp = esp + 4;

loc_00270249: ;
    edi = 0x5F59F0;
    eax = esp + 0x10;
    PUSH32(esp, 0); sub_00060900(); /* call 0x00060900 */

loc_00270257: ;
    edi = MEM32(esp + 0x10);
    (void)0; /* cmp edi, ebp - flags set for next jcc */
    esi = MEM32(esp + 0x14);
    xmm0 = MEMF(0x75E900); /* movss */
    xmm1 = MEMF(0x75E918); /* movss */
    MEM32(esp + 0x20) = esi;
    MEM32(esp + 0x1C) = edi;
    if (CMP_EQ(edi, ebp)) goto loc_0027027D; /* je: equal / zero */

loc_0027027B: ;
    MEM32(esi) = MEM32(esi) + 1;

loc_0027027D: ;
    (void)0; /* cmp edi, ebp - flags set for next jcc */
    MEMF(esp + 0x24) = xmm1; /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEM8(esp + 0x2C) = 0;
    if (CMP_EQ(edi, ebp)) goto loc_002702C3; /* je: equal / zero */

loc_00270292: ;
    MEM32(esi) = MEM32(esi) - 1;
    if ((MEM32(esi) != 0)) goto loc_002702C3; /* jne: not equal / not zero */

loc_00270296: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_0027029C: ;
    if (TEST_NZ(eax, eax)) goto loc_002702C3; /* jne: not equal / not zero */

loc_002702A0: ;
    ebx = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    ebx++;
    edx--;
    PUSH32(esp, esi);
    MEM32(0x7FA490) = ebx;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_002702C0: ;
    esp = esp + 4;

loc_002702C3: ;
    ecx = esp + 0x1C;
    eax = esp + 0x34;
    PUSH32(esp, 0); sub_00244E50(); /* call 0x00244E50 */

loc_002702D0: ;
    if (CMP_EQ(edi, ebp)) goto loc_00270305; /* je: equal / zero */

loc_002702D4: ;
    MEM32(esi) = MEM32(esi) - 1;
    if ((MEM32(esi) != 0)) goto loc_00270305; /* jne: not equal / not zero */

loc_002702D8: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_002702DE: ;
    if (TEST_NZ(eax, eax)) goto loc_00270305; /* jne: not equal / not zero */

loc_002702E2: ;
    edi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    edi++;
    edx--;
    PUSH32(esp, esi);
    MEM32(0x7FA490) = edi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_00270302: ;
    esp = esp + 4;

loc_00270305: ;
    edi = 0x5F59F0;
    eax = esp + 0x10;
    PUSH32(esp, 0); sub_00060900(); /* call 0x00060900 */

loc_00270313: ;
    edi = MEM32(esp + 0x10);
    (void)0; /* cmp edi, ebp - flags set for next jcc */
    esi = MEM32(esp + 0x14);
    xmm0 = MEMF(0x75E904); /* movss */
    xmm1 = MEMF(0x75E91C); /* movss */
    MEM32(esp + 0x20) = esi;
    MEM32(esp + 0x1C) = edi;
    if (CMP_EQ(edi, ebp)) goto loc_00270339; /* je: equal / zero */

loc_00270337: ;
    MEM32(esi) = MEM32(esi) + 1;

loc_00270339: ;
    (void)0; /* cmp edi, ebp - flags set for next jcc */
    MEMF(esp + 0x24) = xmm1; /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEM8(esp + 0x2C) = 0;
    if (CMP_EQ(edi, ebp)) goto loc_0027037F; /* je: equal / zero */

loc_0027034E: ;
    MEM32(esi) = MEM32(esi) - 1;
    if ((MEM32(esi) != 0)) goto loc_0027037F; /* jne: not equal / not zero */

loc_00270352: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_00270358: ;
    if (TEST_NZ(eax, eax)) goto loc_0027037F; /* jne: not equal / not zero */

loc_0027035C: ;
    ebx = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    ebx++;
    edx--;
    PUSH32(esp, esi);
    MEM32(0x7FA490) = ebx;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_0027037C: ;
    esp = esp + 4;

loc_0027037F: ;
    ecx = esp + 0x1C;
    eax = esp + 0x34;
    PUSH32(esp, 0); sub_00244E50(); /* call 0x00244E50 */

loc_0027038C: ;
    if (CMP_EQ(edi, ebp)) goto loc_002703C1; /* je: equal / zero */

loc_00270390: ;
    MEM32(esi) = MEM32(esi) - 1;
    if ((MEM32(esi) != 0)) goto loc_002703C1; /* jne: not equal / not zero */

loc_00270394: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_0027039A: ;
    if (TEST_NZ(eax, eax)) goto loc_002703C1; /* jne: not equal / not zero */

loc_0027039E: ;
    edi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    edi++;
    edx--;
    PUSH32(esp, esi);
    MEM32(0x7FA490) = edi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_002703BE: ;
    esp = esp + 4;

loc_002703C1: ;
    edi = 0x5F59F0;
    eax = esp + 0x10;
    PUSH32(esp, 0); sub_00060900(); /* call 0x00060900 */

loc_002703CF: ;
    edi = MEM32(esp + 0x10);
    (void)0; /* cmp edi, ebp - flags set for next jcc */
    esi = MEM32(esp + 0x14);
    xmm0 = MEMF(0x75E908); /* movss */
    xmm1 = MEMF(0x75E920); /* movss */
    MEM32(esp + 0x20) = esi;
    MEM32(esp + 0x1C) = edi;
    if (CMP_EQ(edi, ebp)) goto loc_002703F5; /* je: equal / zero */

loc_002703F3: ;
    MEM32(esi) = MEM32(esi) + 1;

loc_002703F5: ;
    (void)0; /* cmp edi, ebp - flags set for next jcc */
    MEMF(esp + 0x24) = xmm1; /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEM8(esp + 0x2C) = 0;
    if (CMP_EQ(edi, ebp)) goto loc_0027043B; /* je: equal / zero */

loc_0027040A: ;
    MEM32(esi) = MEM32(esi) - 1;
    if ((MEM32(esi) != 0)) goto loc_0027043B; /* jne: not equal / not zero */

loc_0027040E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_00270414: ;
    if (TEST_NZ(eax, eax)) goto loc_0027043B; /* jne: not equal / not zero */

loc_00270418: ;
    ebx = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    ebx++;
    edx--;
    PUSH32(esp, esi);
    MEM32(0x7FA490) = ebx;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_00270438: ;
    esp = esp + 4;

loc_0027043B: ;
    ecx = esp + 0x1C;
    eax = esp + 0x34;
    PUSH32(esp, 0); sub_00244E50(); /* call 0x00244E50 */

loc_00270448: ;
    if (CMP_EQ(edi, ebp)) goto loc_0027047D; /* je: equal / zero */

loc_0027044C: ;
    MEM32(esi) = MEM32(esi) - 1;
    if ((MEM32(esi) != 0)) goto loc_0027047D; /* jne: not equal / not zero */

loc_00270450: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_00270456: ;
    if (TEST_NZ(eax, eax)) goto loc_0027047D; /* jne: not equal / not zero */

loc_0027045A: ;
    edi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    edi++;
    edx--;
    PUSH32(esp, esi);
    MEM32(0x7FA490) = edi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_0027047A: ;
    esp = esp + 4;

loc_0027047D: ;
    edi = 0x5F59F0;
    eax = esp + 0x10;
    PUSH32(esp, 0); sub_00060900(); /* call 0x00060900 */

loc_0027048B: ;
    eax = MEM32(esp + 0x10);
    (void)0; /* cmp eax, ebp - flags set for next jcc */
    ecx = MEM32(esp + 0x14);
    xmm0 = MEMF(0x75E90C); /* movss */
    xmm1 = MEMF(0x75E924); /* movss */
    edi = ecx;
    esi = eax;
    MEM32(esp + 0x20) = edi;
    MEM32(esp + 0x1C) = esi;
    if (CMP_EQ(eax, ebp)) goto loc_002704B5; /* je: equal / zero */

loc_002704B3: ;
    MEM32(ecx) = MEM32(ecx) + 1;

loc_002704B5: ;
    (void)0; /* cmp eax, ebp - flags set for next jcc */
    MEMF(esp + 0x24) = xmm1; /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEM8(esp + 0x2C) = 0;
    if (CMP_EQ(eax, ebp)) goto loc_002704DB; /* je: equal / zero */

loc_002704CA: ;
    MEM32(ecx) = MEM32(ecx) - 1;
    if ((MEM32(ecx) != 0)) goto loc_002704DB; /* jne: not equal / not zero */

loc_002704CE: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_002704D8: ;
    esp = esp + 4;

loc_002704DB: ;
    ecx = esp + 0x1C;
    eax = esp + 0x34;
    PUSH32(esp, 0); sub_00244E50(); /* call 0x00244E50 */

loc_002704E8: ;
    if (CMP_EQ(esi, ebp)) goto loc_002704FD; /* je: equal / zero */

loc_002704EC: ;
    MEM32(edi) = MEM32(edi) - 1;
    if ((MEM32(edi) != 0)) goto loc_002704FD; /* jne: not equal / not zero */

loc_002704F0: ;
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_002704FA: ;
    esp = esp + 4;

loc_002704FD: ;
    edx = (uint32_t)(int32_t)SMEM8(0x862D11);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    edx = MEM32(0x849800);
    eax = esp + 0x64;
    PUSH32(esp, eax);
    eax = MEM32(edx + 0x744);
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00227200(); /* call 0x00227200 */

loc_00270522: ;
    ebx = eax;
    esp = esp + 0x14;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_0003C1E0(); /* call 0x0003C1E0 */

loc_0027052E: ;
    edi = eax;
    ecx = MEM32(edi + 0x10);
    esi = MEM32(ecx + 0x14);
    ecx = MEM32(esi + 0x38);
    (void)0; /* cmp ecx, ebp - flags set for next jcc */
    MEM8(esi + 0x31) = 0;
    if (CMP_EQ(ecx, ebp)) goto loc_00270548; /* je: equal / zero */

loc_00270541: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_00270548: ;
    edx = MEM32(esp + 0x9C);
    MEM32(esi + 0x38) = ebx;
    eax = MEM32(edi + 0x10);
    esi = MEM32(esp + 0xA0);
    edx = edx | esi;
    ecx = MEM32(eax + 0x14);
    MEM8(ecx + 0x30) = 1;
    if ((edx == 0)) goto loc_00270582; /* je: equal / zero */

loc_00270567: ;
    MEM32(esp + 0x18) = MEM32(esp + 0x18) | 4;
    ebx = esp + 0x10;
    eax = esp + 0x9C;
    PUSH32(esp, 0); sub_0026F6B0(); /* call 0x0026F6B0 */

loc_0027057C: ;
    eax = MEM32(eax);
    ebp = 0; /* xor self */
    goto loc_0027058E;

loc_00270582: ;
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x60319C;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_0027058E: ;
    edi = eax;
    eax = esp + 0x7C;
    PUSH32(esp, 0); sub_00060900(); /* call 0x00060900 */

loc_00270599: ;
    if (TEST_Z(MEM8(esp + 0x18), 4)) goto loc_002705C1; /* je: equal / zero */

loc_002705A0: ;
    if (CMP_EQ(MEM32(esp + 0x10), ebp)) goto loc_002705C1; /* je: equal / zero */

loc_002705A6: ;
    eax = MEM32(esp + 0x14);
    MEM32(eax) = MEM32(eax) - 1;
    eax = MEM32(esp + 0x14);
    if (CMP_NE(MEM32(eax), ebp)) goto loc_002705C1; /* jne: not equal / not zero */

loc_002705B4: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_002705BE: ;
    esp = esp + 4;

loc_002705C1: ;
    edx = MEM32(esp + 0x9C);
    edx = edx | esi;
    if ((edx == 0)) goto loc_00270644; /* je: equal / zero */

loc_002705CC: ;
    eax = MEM32(esp + 0xA8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5D4CAC);
    PUSH32(esp, 0x862D38);
    PUSH32(esp, 0); sub_0046F583(); /* call 0x0046F583 */

loc_002705E3: ;
    esp = esp + 0xC;
    PUSH32(esp, 0);
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x5F8F20;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_002705F4: ;
    PUSH32(esp, eax);
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x5F8E40;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_00270601: ;
    ebp = MEM32(esp + 0x84);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_00227390(); /* call 0x00227390 */

loc_0027060F: ;
    ebx = eax;
    esp = esp + 0x10;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_0003C1E0(); /* call 0x0003C1E0 */

loc_0027061B: ;
    edi = eax;
    ecx = MEM32(edi + 0x10);
    esi = MEM32(ecx + 0x10);
    ecx = MEM32(esi + 0x38);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM8(esi + 0x31) = 0;
    if (TEST_Z(ecx, ecx)) goto loc_00270635; /* je: equal / zero */

loc_0027062E: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_00270635: ;
    MEM32(esi + 0x38) = ebx;
    eax = MEM32(edi + 0x10);
    ecx = MEM32(eax + 0x10);
    MEM8(ecx + 0x30) = 1;
    goto loc_00270695;

loc_00270644: ;
    PUSH32(esp, 0);
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x5F8F20;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_00270652: ;
    ebp = MEM32(esp + 0x80);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_00227390(); /* call 0x00227390 */

loc_00270662: ;
    ebx = eax;
    esp = esp + 0x10;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_0003C1E0(); /* call 0x0003C1E0 */

loc_0027066E: ;
    edi = eax;
    edx = MEM32(edi + 0x10);
    esi = MEM32(edx + 0x10);
    ecx = MEM32(esi + 0x38);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM8(esi + 0x31) = 0;
    if (TEST_Z(ecx, ecx)) goto loc_00270688; /* je: equal / zero */

loc_00270681: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00270688: ;
    MEM32(esi + 0x38) = ebx;
    ecx = MEM32(edi + 0x10);
    edx = MEM32(ecx + 0x10);
    MEM8(edx + 0x30) = 1;

loc_00270695: ;
    SET_LO8(eax, MEM8(0x862D10));
    if (TEST_Z(LO8(eax), 4)) goto loc_00270752; /* je: equal / zero */

loc_002706A2: ;
    eax = MEM32(esp + 0x9C);
    ecx = MEM32(esp + 0xA0);
    edx = eax;
    edx = edx | ecx;
    if ((edx == 0)) goto loc_0027075B; /* je: equal / zero */

loc_002706BA: ;
    if (CMP_NE(eax, MEM32(esp + 0x94))) goto loc_002706D0; /* jne: not equal / not zero */

loc_002706C3: ;
    if (CMP_EQ(ecx, MEM32(esp + 0x98))) goto loc_0027075B; /* je: equal / zero */

loc_002706D0: ;
    edi = MEM32(esp + 0xA0);
    ebx = MEM32(esp + 0x9C);
    eax = ZX8(MEM8(0x862D13));
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_004228C0(); /* call 0x004228C0 */

loc_002706EC: ;
    esp = esp + 8;
    esi = eax;
    PUSH32(esp, 0); sub_0026A720(); /* call 0x0026A720 */

loc_002706F6: ;
    (void)0; /* cmp esi, 0xFFFFFFFFu - flags set for next jcc */
    SET_LO8(eax, MEM8(0x862D11));
    MEM8(0x849E50) = LO8(eax);
    if (CMP_EQ(esi, 0xFFFFFFFFu)) goto loc_00270736; /* je: equal / zero */

loc_00270705: ;
    eax = ZX8(MEM8(0x862D13));
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00423590(); /* call 0x00423590 */

loc_00270713: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_00270736; /* jne: not equal / not zero */

loc_0027071A: ;
    eax = ZX8(MEM8(0x862D13));
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00423510(); /* call 0x00423510 */

loc_00270728: ;
    esp = esp + 8;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM8(0x862D12) = 6;
    if (TEST_Z(eax, eax)) goto loc_0027073D; /* je: equal / zero */

loc_00270736: ;
    MEM8(0x862D12) = 4;

loc_0027073D: ;
    MEM32(0x862D18) = ebx;
    MEM32(0x862D1C) = edi;
    MEM8(0x862D11) = 0;
    goto loc_0027075B;

loc_00270752: ;
    if (TEST_Z(LO8(eax), 8)) goto loc_0027075B; /* je: equal / zero */

loc_00270756: ;
    PUSH32(esp, 0); sub_0026A790(); /* call 0x0026A790 */

loc_0027075B: ;
    if (TEST_Z(ebp, ebp)) goto loc_0027077A; /* je: equal / zero */

loc_0027075F: ;
    eax = MEM32(esp + 0x80);
    MEM32(eax) = MEM32(eax) - 1;
    if ((MEM32(eax) != 0)) goto loc_0027077A; /* jne: not equal / not zero */

loc_0027076A: ;
    ecx = esp + 0x80;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00270777: ;
    esp = esp + 4;

loc_0027077A: ;
    esi = esp + 0x34;
    PUSH32(esp, 0); sub_00227820(); /* call 0x00227820 */

loc_00270783: ;
    eax = MEM32(esp + 0x88);
    if (TEST_Z(eax, eax)) goto loc_0027079F; /* je: equal / zero */

loc_0027078E: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0027079C: ;
    esp = esp + 4;

loc_0027079F: ;
    esi = esp + 0x5C;
    PUSH32(esp, 0); sub_00227870(); /* call 0x00227870 */

loc_002707A8: ;
    eax = MEM32(esp + 0x70);
    if (TEST_Z(eax, eax)) goto loc_002707C1; /* je: equal / zero */

loc_002707B0: ;
    MEM32(esp + 0x10) = eax;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_002707BE: ;
    esp = esp + 4;

loc_002707C1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x10CC;
    esp += 4; return; /* ret */

}

/**
 * sub_002707D0
 * Original: 0x002707D0 - 0x002708FC (300 bytes, 77 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002707D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002707D0: ;
    esp = esp - 0x144;
    eax = 0; /* xor self */
    MEM32(esp + 0x11) = eax;
    MEM32(esp + 0x15) = eax;
    MEM32(esp + 0x19) = eax;
    MEM32(esp + 0x1D) = eax;
    MEM32(esp + 0x21) = eax;
    MEM32(esp + 0x25) = eax;
    MEM32(esp + 0x29) = eax;
    MEM16(esp + 0x2D) = LO16(eax);
    MEM8(esp + 0x2F) = LO8(eax);
    PUSH32(esp, 0x862D38);
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x60316C;
    MEM8(esp + 0x14) = 0;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_00270813: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x60315C);
    ecx = esp + 0x50;
    PUSH32(esp, 0x80);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046EE4A(); /* call 0x0046EE4A */

loc_00270828: ;
    edx = esp + 0x58;
    PUSH32(esp, 0x84C318);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00470101(); /* call 0x00470101 */

loc_00270837: ;
    esp = esp + 0x1C;
    if (TEST_Z(eax, eax)) goto loc_00270859; /* je: equal / zero */

loc_0027083E: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x84C318);
    PUSH32(esp, 0x84C6B0);
    PUSH32(esp, 0); sub_0046FCD6(); /* call 0x0046FCD6 */

loc_0027084F: ;
    esp = esp + 0xC;
    MEM8(0x849930) = 1;

loc_00270859: ;
    PUSH32(esp, 0x40);
    eax = esp + 0x48;
    PUSH32(esp, eax);
    PUSH32(esp, 0x84C318);
    PUSH32(esp, 0); sub_0046FCD6(); /* call 0x0046FCD6 */

loc_0027086A: ;
    ecx = MEM32(0x862D1C);
    edx = MEM32(0x862D18);
    eax = ZX8(MEM8(0x862D13));
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_004228C0(); /* call 0x004228C0 */

loc_00270884: ;
    esp = esp + 0x14;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) { sub_002708FC(); return; } /* je: equal / zero */

loc_0027088C: ;
    eax = MEM32(0x862D1C);
    ecx = MEM32(0x862D18);
    PUSH32(esp, eax);
    eax = ZX8(MEM8(0x862D13));
    PUSH32(esp, ecx);
    MEM32(esp + 0xC) = 0x70;
    PUSH32(esp, 0); sub_00423590(); /* call 0x00423590 */

loc_002708AD: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_002708BE; /* je: equal / zero */

loc_002708B4: ;
    MEM32(esp + 4) = 0x44;
    g_seh_ebp = ebp; sub_00270904(); return; /* tail jmp 0x00270904 */

loc_002708BE: ;
    edx = MEM32(0x862D1C);
    eax = MEM32(0x862D18);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = ZX8(MEM8(0x862D13));
    PUSH32(esp, 0); sub_00423510(); /* call 0x00423510 */

loc_002708D7: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_002708E8; /* je: equal / zero */

loc_002708DE: ;
    MEM32(esp + 4) = 0x40;
    g_seh_ebp = ebp; sub_00270904(); return; /* tail jmp 0x00270904 */

loc_002708E8: ;
    SET_LO8(ecx, MEM8(0x862D10));
    SET_LO8(ecx, LO8(ecx) & 0xFB);
    SET_LO8(ecx, LO8(ecx) | 8);
    MEM8(0x862D10) = LO8(ecx);
    g_seh_ebp = ebp; sub_00270904(); return; /* tail jmp 0x00270904 */

}

/**
 * sub_00270CB0
 * Original: 0x00270CB0 - 0x00270CCB (27 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00270CB0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00270CB0: ;
    SET_LO8(eax, MEM8(0x849C0E));
    esp = esp - 0x80;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00270CCB(); return; } /* je: equal / zero */

loc_00270CBF: ;
    PUSH32(esp, 0); sub_0026A790(); /* call 0x0026A790 */

loc_00270CC4: ;
    esp = esp + 0x80;
    esp += 4; return; /* ret */

}

/**
 * sub_00270E30
 * Original: 0x00270E30 - 0x00270E4B (27 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00270E30(void)
{
    int _flags = 0; /* fallback flag var */

loc_00270E30: ;
    SET_LO8(eax, MEM8(0x849C0E));
    esp = esp - 0x104;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00270E4B(); return; } /* je: equal / zero */

loc_00270E3F: ;
    PUSH32(esp, 0); sub_0026A790(); /* call 0x0026A790 */

loc_00270E44: ;
    esp = esp + 0x104;
    esp += 4; return; /* ret */

}

/**
 * sub_00271140
 * Original: 0x00271140 - 0x0027115B (27 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00271140(void)
{
    int _flags = 0; /* fallback flag var */

loc_00271140: ;
    SET_LO8(eax, MEM8(0x849C0E));
    esp = esp - 0x80;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_0027115B(); return; } /* je: equal / zero */

loc_0027114F: ;
    PUSH32(esp, 0); sub_0026A790(); /* call 0x0026A790 */

loc_00271154: ;
    esp = esp + 0x80;
    esp += 4; return; /* ret */

}

/**
 * sub_00271250
 * Original: 0x00271250 - 0x002712A2 (82 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00271250(void)
{
    int _flags = 0; /* fallback flag var */

loc_00271250: ;
    eax = ZX8(MEM8(0x862D13));
    PUSH32(esp, 0); sub_004227A0(); /* call 0x004227A0 */

loc_0027125C: ;
    if (CMP_L(eax, 0x64)) { sub_002712A2(); return; } /* jl: less (signed <) */

loc_00271261: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x6030DC;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_00271272: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x6030B0;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_00271281: ;
    PUSH32(esp, eax);
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_0003C1E0(); /* call 0x0003C1E0 */

loc_00271289: ;
    ebx = eax;
    PUSH32(esp, 0); sub_00232B60(); /* call 0x00232B60 */

loc_00271290: ;
    (void)0; /* test MEM8(0x862D10), 4 - flags set for next jcc */
    POP32(esp, ebx);
    if (TEST_Z(MEM8(0x862D10), 4)) goto loc_0027129F; /* je: equal / zero */

loc_0027129A: ;
    PUSH32(esp, 0); sub_0026A790(); /* call 0x0026A790 */

loc_0027129F: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_002712B0
 * Original: 0x002712B0 - 0x0027135E (174 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002712B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002712B0: ;
    esp = esp - 0x80;
    PUSH32(esp, esi);
    esi = ZX8(MEM8(0x862D13));
    eax = esi;
    MEM8(esi + 0x849DC4) = 1;
    PUSH32(esp, 0); sub_00422740(); /* call 0x00422740 */

loc_002712CC: ;
    if (CMP_EQ(eax, 2)) goto loc_002712EA; /* je: equal / zero */

loc_002712D1: ;
    eax = esi;
    PUSH32(esp, 0); sub_00422740(); /* call 0x00422740 */

loc_002712D8: ;
    if (CMP_EQ(eax, 1)) goto loc_00271356; /* je: equal / zero */

loc_002712DD: ;
    PUSH32(esp, 0); sub_00422590(); /* call 0x00422590 */

loc_002712E2: ;
    POP32(esp, esi);
    esp = esp + 0x80;
    esp += 4; return; /* ret */

loc_002712EA: ;
    eax = MEM32(0x862D1C);
    ecx = MEM32(0x862D18);
    PUSH32(esp, eax);
    eax = ZX8(MEM8(0x862D13));
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_004228C0(); /* call 0x004228C0 */

loc_00271303: ;
    esp = esp + 8;
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_00271351; /* jne: not equal / not zero */

loc_0027130B: ;
    PUSH32(esp, 0); sub_00271250(); /* call 0x00271250 */

loc_00271310: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00271356; /* jne: not equal / not zero */

loc_00271314: ;
    edx = MEM32(0x849800);
    eax = MEM32(edx + 0x834);
    PUSH32(esp, 0x862D38);
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046F583(); /* call 0x0046F583 */

loc_00271330: ;
    edx = MEM32(0x862D1C);
    eax = MEM32(0x862D18);
    esi = ZX8(MEM8(0x862D13));
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00423830(); /* call 0x00423830 */

loc_00271349: ;
    esp = esp + 0x14;
    PUSH32(esp, 0); sub_0026A790(); /* call 0x0026A790 */

loc_00271351: ;
    PUSH32(esp, 0); sub_0026A790(); /* call 0x0026A790 */

loc_00271356: ;
    POP32(esp, esi);
    esp = esp + 0x80;
    esp += 4; return; /* ret */

}

/**
 * sub_00271360
 * Original: 0x00271360 - 0x00271684 (804 bytes, 209 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00271360(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00271360: ;
    eax = MEM32(0x849800);
    edx = (uint32_t)(int32_t)SMEM8(0x862D15);
    ecx = MEM32(eax + 0x7A0);
    esp = esp - 0x88;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    edx = edx + 0x64;
    PUSH32(esp, edx);
    PUSH32(esp, 0x140);
    SET_LO8(ecx, 0x81);
    MEM8(0x776171) = 0xFF;
    MEM8(0x776170) = 0;
    MEM8(0x77616F) = 0;
    MEM8(0x77616E) = 0xFF;
    PUSH32(esp, 0); sub_001F25F0(); /* call 0x001F25F0 */

loc_002713A6: ;
    esi = ZX8(MEM8(0x862D13));
    esp = esp + 0xC;
    eax = esi;
    MEM8(esi + 0x849DC4) = 1;
    PUSH32(esp, 0); sub_00422740(); /* call 0x00422740 */

loc_002713BE: ;
    if (CMP_EQ(eax, 2)) goto loc_002713E0; /* je: equal / zero */

loc_002713C3: ;
    eax = esi;
    PUSH32(esp, 0); sub_00422740(); /* call 0x00422740 */

loc_002713CA: ;
    if (CMP_EQ(eax, 1)) goto loc_0027167C; /* je: equal / zero */

loc_002713D3: ;
    PUSH32(esp, 0); sub_00422590(); /* call 0x00422590 */

loc_002713D8: ;
    POP32(esp, esi);
    esp = esp + 0x88;
    esp += 4; return; /* ret */

loc_002713E0: ;
    edx = (uint32_t)(int32_t)SMEM8(0x864EC1);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = (uint32_t)(int32_t)SMEM8(0x862D15);
    edi = edi + 0x8C;
    ebx = 0; /* xor self */
    (void)0; /* test edx, edx - flags set for next jcc */
    MEM32(esp + 0x14) = edi;
    if (CMP_LE(edx & edx, 0)) goto loc_0027141E; /* jle: less or equal (signed <=) */

loc_00271401: ;
    ecx = 0x865620;
    esi = edx;

loc_00271408: ;
    eax = ZX8(MEM8(ecx));
    if (TEST_Z(LO8(eax), 1)) goto loc_00271410; /* je: equal / zero */

loc_0027140F: ;
    ebx++;

loc_00271410: ;
    if (TEST_Z(LO8(eax), 2)) goto loc_00271415; /* je: equal / zero */

loc_00271414: ;
    ebx++;

loc_00271415: ;
    ecx = ecx + 0xA50;
    esi--;
    if ((esi != 0)) goto loc_00271408; /* jne: not equal / not zero */

loc_0027141E: ;
    SET_LO8(eax, MEM8(0x7819D5));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = MEMF(0x648E58); /* movss */
    MEM8(0x776171) = 0;
    MEM8(0x776170) = 0;
    MEM8(0x77616F) = 0xFF;
    MEM8(0x77616E) = 0xFF;
    MEMF(0x77615C) = xmm0; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00271463; /* je: equal / zero */

loc_00271453: ;
    xmm0 = MEMF(0x649D9C); /* movss */
    MEMF(0x77615C) = xmm0; /* movss */

loc_00271463: ;
    SET_LO8(eax, MEM8(0x862D10));
    if (TEST_Z(LO8(eax), 1)) goto loc_00271474; /* je: equal / zero */

loc_0027146C: ;
    MEM8(0x862D11) = MEM8(0x862D11) + 1;
    goto loc_00271487;

loc_00271474: ;
    if (TEST_Z(LO8(eax), 2)) goto loc_00271487; /* je: equal / zero */

loc_00271478: ;
    MEM8(0x862D11) = MEM8(0x862D11) - 1;
    if (((int32_t)MEM8(0x862D11) >= 0)) goto loc_00271487; /* jns: not sign (positive) */

loc_00271480: ;
    MEM8(0x862D11) = 0;

loc_00271487: ;
    eax = (uint32_t)(int32_t)SMEM8(0x862D11);
    if (CMP_L(eax, ebx)) goto loc_0027149B; /* jl: less (signed <) */

loc_00271492: ;
    SET_LO8(eax, LO8(ebx));
    SET_LO8(eax, LO8(eax) - 1);
    MEM8(0x862D11) = LO8(eax);

loc_0027149B: ;
    eax = (uint32_t)(int32_t)SMEM8(0x862D11);
    eax = eax - 5;
    if (((int32_t)eax >= 0)) goto loc_002714A9; /* jns: not sign (positive) */

loc_002714A7: ;
    eax = 0; /* xor self */

loc_002714A9: ;
    ecx = ebx + -10;
    if (CMP_GE(ecx & ecx, 0)) goto loc_002714B2; /* jge: greater or equal (signed >=) */

loc_002714B0: ;
    ecx = 0; /* xor self */

loc_002714B2: ;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    if (CMP_G(eax, ecx)) eax = ecx; /* cmovg */
    ecx = eax + eax * 8;
    ecx = ecx << 1;
    esi = 0; /* xor self */
    edi = edi - ecx;
    ebp = 0; /* xor self */
    (void)0; /* cmp edx, esi - flags set for next jcc */
    MEM32(esp + 0x10) = esi;
    if (CMP_LE(edx, esi)) goto loc_00271624; /* jle: less or equal (signed <=) */

loc_002714CE: ;
    edi = edi;

loc_002714D0: ;
    ebx = 0; /* xor self */

loc_002714D2: ;
    SET_LO8(eax, MEM8(esi + 0x865620));
    edx = 1;
    ecx = ebx;
    edx = edx << LO8(ecx);
    if (TEST_Z(LO8(eax), LO8(edx))) goto loc_002715FC; /* je: equal / zero */

loc_002714E9: ;
    eax = MEM32(esp + 0x14);
    if (CMP_L(edi, eax)) goto loc_002715F9; /* jl: less (signed <) */

loc_002714F5: ;
    eax = eax + 0xB4;
    if (CMP_G(edi, eax)) goto loc_002715F9; /* jg: greater (signed >) */

loc_00271502: ;
    ecx = (uint32_t)(int32_t)SMEM8(0x862D11);
    if (CMP_NE(ecx, ebp)) goto loc_00271555; /* jne: not equal / not zero */

loc_0027150D: ;
    SET_LO16(edx, MEM16(esi + 0x8658A0));
    PUSH32(esp, 0x10);
    ecx = esi + 0x864EC8;
    eax = ebx;
    MEM16(0x862D22) = LO16(edx);
    MEM8(0x862D24) = LO8(ebx);
    PUSH32(esp, 0); sub_00299D60(); /* call 0x00299D60 */

loc_00271530: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x5D4CAC);
    PUSH32(esp, 0x862D38);
    PUSH32(esp, 0); sub_0046F583(); /* call 0x0046F583 */

loc_00271540: ;
    esp = esp + 0x10;
    MEM16(0x862D58) = 0;
    MEM8(0x776170) = 0x80;
    goto loc_0027155C;

loc_00271555: ;
    MEM8(0x776170) = 0;

loc_0027155C: ;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    MEM8(0x776171) = 0;
    MEM8(0x77616F) = 0xFF;
    MEM8(0x77616E) = 0xFF;
    ecx = esi + 0x864EC8;
    if (TEST_NZ(ebx, ebx)) goto loc_0027158F; /* jne: not equal / not zero */

loc_0027157B: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00299D60(); /* call 0x00299D60 */

loc_00271582: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x5D4CAC);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    goto loc_002715A1;

loc_0027158F: ;
    eax = ebx;
    PUSH32(esp, 0); sub_00299D60(); /* call 0x00299D60 */

loc_00271596: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x6030A4);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);

loc_002715A1: ;
    PUSH32(esp, 0); sub_0046F583(); /* call 0x0046F583 */

loc_002715A6: ;
    esp = esp + 0xC;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x109);
    SET_LO8(ecx, 0x80);
    PUSH32(esp, 0); sub_001F25F0(); /* call 0x001F25F0 */

loc_002715BB: ;
    ecx = MEM32(0x849800);
    eax = MEM32(esi + 0x865624);
    edx = MEM32(ecx + eax * 4 + 0x864);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x1B8);
    SET_LO8(ecx, 0x80);
    PUSH32(esp, 0); sub_001F25F0(); /* call 0x001F25F0 */

loc_002715DC: ;
    eax = MEM32(esi + 0x864ECC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5F13E0);
    PUSH32(esp, edi);
    PUSH32(esp, 0xBE);
    SET_LO8(ecx, 0x80);
    PUSH32(esp, 0); sub_001F25F0(); /* call 0x001F25F0 */

loc_002715F5: ;
    esp = esp + 0x28;
    ebp++;

loc_002715F9: ;
    edi = edi + 0x12;

loc_002715FC: ;
    ebx++;
    if (CMP_L(ebx, 2)) goto loc_002714D2; /* jl: less (signed <) */

loc_00271606: ;
    eax = MEM32(esp + 0x10);
    ecx = (uint32_t)(int32_t)SMEM8(0x864EC1);
    eax++;
    esi = esi + 0xA50;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(eax, ecx)) goto loc_002714D0; /* jl: less (signed <) */

loc_00271624: ;
    SET_LO8(eax, MEM8(0x862D10));
    (void)0; /* test LO8(eax), 4 - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (TEST_Z(LO8(eax), 4)) goto loc_0027164A; /* je: equal / zero */

loc_00271630: ;
    SET_LO8(edx, MEM8(0x862D11));
    MEM8(0x849E50) = LO8(edx);
    PUSH32(esp, 0); sub_0026A720(); /* call 0x0026A720 */

loc_00271641: ;
    MEM8(0x862D12) = 0x2A;
    goto loc_00271653;

loc_0027164A: ;
    if (TEST_Z(LO8(eax), 8)) goto loc_00271653; /* je: equal / zero */

loc_0027164E: ;
    PUSH32(esp, 0); sub_0026A790(); /* call 0x0026A790 */

loc_00271653: ;
    SET_LO8(eax, MEM8(0x7819D5));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(0x77615C) = xmm0; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0027167C; /* je: equal / zero */

loc_0027166C: ;
    xmm0 = MEMF(0x648F10); /* movss */
    MEMF(0x77615C) = xmm0; /* movss */

loc_0027167C: ;
    POP32(esp, esi);
    esp = esp + 0x88;
    esp += 4; return; /* ret */

}

/**
 * sub_00271690
 * Original: 0x00271690 - 0x00271730 (160 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00271690(void)
{
    int _flags = 0; /* fallback flag var */

loc_00271690: ;
    eax = MEM32(0x849800);
    ecx = MEM32(eax + 0x7A0);
    esp = esp - 0x80;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x862D38);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x603090);
    edx = esp + 0x14;
    PUSH32(esp, 0x40);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046EE4A(); /* call 0x0046EE4A */

loc_002716BA: ;
    esi = esp + 0x1C;
    PUSH32(esp, 0); sub_0020C6E0(); /* call 0x0020C6E0 */

loc_002716C3: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1D);
    PUSH32(esp, 0xFFFF);
    PUSH32(esp, 1);
    PUSH32(esp, 0x20E);
    ecx = 0; /* xor self */
    PUSH32(esp, 0); sub_00277940(); /* call 0x00277940 */

loc_002716DC: ;
    SET_LO8(eax, MEM8(0x862D10));
    esp = esp + 0x2C;
    if (TEST_Z(LO8(eax), 4)) { sub_00271730(); return; } /* je: equal / zero */

loc_002716E8: ;
    PUSH32(esp, 4);
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_002716F1: ;
    SET_LO8(eax, MEM8(0x862D11));
    esp = esp + 4;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00271722; /* je: equal / zero */

loc_002716FD: ;
    eax = MEM32(0x862D28);
    ecx = (uint32_t)(int32_t)SMEM8(0x862D24);
    edx = (uint32_t)(int32_t)SMEM16(0x862D22);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = 0x86E9A4;
    PUSH32(esp, 0); sub_002945E0(); /* call 0x002945E0 */

loc_0027171D: ;
    PUSH32(esp, 0); sub_0026A790(); /* call 0x0026A790 */

loc_00271722: ;
    PUSH32(esp, 0); sub_0026A790(); /* call 0x0026A790 */

loc_00271727: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x80;
    esp += 4; return; /* ret */

}

/**
 * sub_00271750
 * Original: 0x00271750 - 0x00271816 (198 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00271750(void)
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

loc_00271750: ;
    PUSH32(esp, ecx);
    eax = (uint32_t)(int32_t)SMEM8(0x862D11);
    ecx = MEM32(eax * 4 + 0x6BEE20);
    edx = MEM32(0x862D1C);
    eax = MEM32(0x862D18);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004245F0(); /* call 0x004245F0 */

loc_00271773: ;
    SET_LO8(eax, MEM8(0x7FA23C));
    xmm0 = 0.0f; /* xorps self = zero */
    ebx = 0; /* xor self */
    esp = esp + 0xC;
    if (CMP_NE(LO8(eax), LO8(ebx))) goto loc_0027178C; /* jne: not equal / not zero */

loc_00271784: ;
    xmm0 = MEMF(0x7F9F48); /* movss */

loc_0027178C: ;
    (void)0; /* cmp MEM32(0x75E500), ebx - flags set for next jcc */
    MEMF(esp + 4) = xmm0; /* movss */
    if (CMP_NE(MEM32(0x75E500), ebx)) goto loc_002717B2; /* jne: not equal / not zero */

loc_0027179A: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648E64)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_002717EE; /* ja: above (unsigned >) */

loc_002717B2: ;
    ecx = MEM32(0x847024);
    eax = MEM32(ecx + 0x44);
    eax = MEM32(eax + 0xC);
    ecx = MEM32(ecx + 0x40);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    eax = eax + 4;
    eax = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 4);
    PUSH32(esp, ecx);
    edx = edx | 0xFFFFFFFFu;
    eax = eax | 0xFFFFFFFFu;
    ecx = 0xAD0;
    MEMF(0x75E504) = xmm0; /* movss */
    MEM32(0x75E500) = ebx;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_002717EE: ;
    edx = ZX8(MEM8(0x862D13));
    MEM32(0x776238) = ebx;
    MEM32(edx * 4 + 0x77623C) = ebx;
    MEM8(0x862D10) = LO8(ebx);
    PUSH32(esp, 0); sub_0026A790(); /* call 0x0026A790 */

loc_0027180D: ;
    POP32(esp, ebx);
    esp = esp + 4;
    g_seh_ebp = ebp; sub_0026A790(); return; /* tail jmp 0x0026A790 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_002718F0
 * Original: 0x002718F0 - 0x0027199A (170 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002718F0(void)
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

loc_002718F0: ;
    PUSH32(esp, ecx);
    SET_LO8(eax, MEM8(0x7FA23C));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = 0.0f; /* xorps self = zero */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00271905; /* jne: not equal / not zero */

loc_002718FD: ;
    xmm0 = MEMF(0x7F9F48); /* movss */

loc_00271905: ;
    ecx = MEM32(0x75E500);
    eax = 1;
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    MEMF(esp) = xmm0; /* movss */
    if (CMP_NE(ecx, eax)) goto loc_00271930; /* jne: not equal / not zero */

loc_00271919: ;
    fp_push(MEMF(esp)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648E64)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_0027196F; /* ja: above (unsigned >) */

loc_00271930: ;
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

loc_0027196F: ;
    ecx = ZX8(MEM8(0x862D13));
    MEM32(0x776238) = 0;
    MEM32(ecx * 4 + 0x77623C) = 0;
    MEM8(0x862D10) = 0;
    esp = esp + 4;
    g_seh_ebp = ebp; sub_0026A790(); return; /* tail jmp 0x0026A790 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_002719A0
 * Original: 0x002719A0 - 0x00271A37 (151 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002719A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002719A0: ;
    esp = esp - 0x310;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x862D38);
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x603060;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_002719BB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x60315C);
    eax = esp + 0x2C;
    PUSH32(esp, 0x80);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046EE4A(); /* call 0x0046EE4A */

loc_002719D0: ;
    ecx = esp + 0x34;
    PUSH32(esp, 0x84C318);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00470101(); /* call 0x00470101 */

loc_002719DF: ;
    esp = esp + 0x1C;
    (void)0; /* test eax, eax - flags set for next jcc */
    ebx = 1;
    if (TEST_Z(eax, eax)) goto loc_00271A05; /* je: equal / zero */

loc_002719EB: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x84C318);
    PUSH32(esp, 0x84C6B0);
    PUSH32(esp, 0); sub_0046FCD6(); /* call 0x0046FCD6 */

loc_002719FC: ;
    esp = esp + 0xC;
    MEM8(0x849930) = LO8(ebx);

loc_00271A05: ;
    PUSH32(esp, 0x40);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    PUSH32(esp, 0x84C318);
    PUSH32(esp, 0); sub_0046FCD6(); /* call 0x0046FCD6 */

loc_00271A16: ;
    SET_LO8(eax, MEM8(esp + 0x330));
    esp = esp + 0xC;
    ecx = 0; /* xor self */
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00271A37(); return; } /* je: equal / zero */

loc_00271A26: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x17);
    PUSH32(esp, 0xFFFF);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x1F3);
    g_seh_ebp = ebp; sub_00271A77(); return; /* tail jmp 0x00271A77 */

}

/**
 * sub_00271BB0
 * Original: 0x00271BB0 - 0x00271FEE (1086 bytes, 283 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00271BB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00271BB0: ;
    eax = 0x2160;
    PUSH32(esp, 0); sub_00470E50(); /* call 0x00470E50 */

loc_00271BBA: ;
    SET_LO8(eax, MEM8(0x77A510));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEM32(esp + 0xC) = 0;
    ebx = 1;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00271BE4; /* jne: not equal / not zero */

loc_00271BD2: ;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_0003C1E0(); /* call 0x0003C1E0 */

loc_00271BD9: ;
    eax = MEM32(eax + 0x10);
    eax = eax + 0x24;
    eax = MEM32(eax);
    MEM8(eax + 0x30) = LO8(ebx);

loc_00271BE4: ;
    edx = 0x1E4;
    PUSH32(esp, 0); sub_00277820(); /* call 0x00277820 */

loc_00271BEE: ;
    esi = ZX8(MEM8(0x862D13));
    eax = esi;
    MEM8(esi + 0x849DC4) = LO8(ebx);
    PUSH32(esp, 0); sub_00422740(); /* call 0x00422740 */

loc_00271C02: ;
    if (CMP_EQ(eax, 2)) goto loc_00271C24; /* je: equal / zero */

loc_00271C07: ;
    eax = esi;
    PUSH32(esp, 0); sub_00422740(); /* call 0x00422740 */

loc_00271C0E: ;
    if (CMP_EQ(eax, ebx)) goto loc_00271FE5; /* je: equal / zero */

loc_00271C16: ;
    PUSH32(esp, 0); sub_00422590(); /* call 0x00422590 */

loc_00271C1B: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x2160;
    esp += 4; return; /* ret */

loc_00271C24: ;
    SET_LO8(eax, MEM8(0x862D10));
    if (TEST_Z(LO8(ebx), LO8(eax))) goto loc_00271C35; /* je: equal / zero */

loc_00271C2D: ;
    MEM8(0x862D11) = MEM8(0x862D11) + 1;
    goto loc_00271C48;

loc_00271C35: ;
    if (TEST_Z(LO8(eax), 2)) goto loc_00271C48; /* je: equal / zero */

loc_00271C39: ;
    MEM8(0x862D11) = MEM8(0x862D11) - 1;
    if (((int32_t)MEM8(0x862D11) >= 0)) goto loc_00271C48; /* jns: not sign (positive) */

loc_00271C41: ;
    MEM8(0x862D11) = 0;

loc_00271C48: ;
    SET_LO8(ecx, MEM8(0x862E6C));
    if (CMP_L(MEM8(0x862D11), LO8(ecx))) goto loc_00271C5F; /* jl: less (signed <) */

loc_00271C56: ;
    SET_LO8(eax, LO8(ecx));
    SET_LO8(eax, LO8(eax) - 1);
    MEM8(0x862D11) = LO8(eax);

loc_00271C5F: ;
    esi = (uint32_t)(int32_t)SMEM8(0x862D15);
    SET_LO8(eax, MEM8(0x7819D5));
    xmm0 = MEMF(0x648E58); /* movss */
    esi = esi + 0x8C;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(esp + 0x14) = esi;
    MEMF(0x77615C) = xmm0; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00271C99; /* je: equal / zero */

loc_00271C89: ;
    xmm0 = MEMF(0x649D9C); /* movss */
    MEMF(0x77615C) = xmm0; /* movss */

loc_00271C99: ;
    eax = (uint32_t)(int32_t)SMEM8(0x862D11);
    eax = eax - 7;
    if (((int32_t)eax >= 0)) goto loc_00271CA7; /* jns: not sign (positive) */

loc_00271CA5: ;
    eax = 0; /* xor self */

loc_00271CA7: ;
    edx = SX8(LO8(ecx));
    ecx = edx + -14;
    if (CMP_GE(ecx & ecx, 0)) goto loc_00271CB3; /* jge: greater or equal (signed >=) */

loc_00271CB1: ;
    ecx = 0; /* xor self */

loc_00271CB3: ;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    if (CMP_G(eax, ecx)) eax = ecx; /* cmovg */
    ecx = eax + eax * 8;
    ecx = ecx << 1;
    ebx = esi;
    eax = 0; /* xor self */
    ebx = ebx - ecx;
    (void)0; /* test edx, edx - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    if (CMP_LE(edx & edx, 0)) goto loc_00271E3E; /* jle: less or equal (signed <=) */

loc_00271CCF: ;
    PUSH32(esp, ebp);
    edx = esp + 0x16C;
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = edx;
    ebp = 0x862E7C;

loc_00271CE1: ;
    if (CMP_L(ebx, esi)) goto loc_00271E22; /* jl: less (signed <) */

loc_00271CE9: ;
    ecx = esi + 0xFC;
    if (CMP_G(ebx, ecx)) goto loc_00271E22; /* jg: greater (signed >) */

loc_00271CF7: ;
    edx = (uint32_t)(int32_t)SMEM8(0x862D11);
    (void)0; /* cmp edx, eax - flags set for next jcc */
    esi = MEM32(ebp + -12);
    edi = MEM32(ebp + -8);
    MEM8(0x77616E) = 0xFF;
    MEM8(0x77616F) = 0xFF;
    MEM8(0x776171) = 0;
    MEM8(0x776170) = 0x80;
    if (CMP_EQ(edx, eax)) goto loc_00271D2B; /* je: equal / zero */

loc_00271D24: ;
    MEM8(0x776170) = 0;

loc_00271D2B: ;
    eax = ZX8(MEM8(0x862D13));
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004228C0(); /* call 0x004228C0 */

loc_00271D39: ;
    esp = esp + 8;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_00271DEA; /* je: equal / zero */

loc_00271D45: ;
    eax = ZX8(MEM8(0x862D13));
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00422A60(); /* call 0x00422A60 */

loc_00271D53: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_00271D74; /* je: equal / zero */

loc_00271D5A: ;
    PUSH32(esp, 0x28);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    eax = ZX8(MEM8(0x862D13));
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00422B70(); /* call 0x00422B70 */

loc_00271D6F: ;
    esp = esp + 0x10;
    goto loc_00271DCE;

loc_00271D74: ;
    eax = ZX8(MEM8(0x862D13));
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00423510(); /* call 0x00423510 */

loc_00271D82: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_00271D97; /* je: equal / zero */

loc_00271D89: ;
    ecx = MEM32(0x849800);
    edx = MEM32(ecx + 0x794);
    goto loc_00271DC0;

loc_00271D97: ;
    eax = ZX8(MEM8(0x862D13));
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00423590(); /* call 0x00423590 */

loc_00271DA5: ;
    ecx = MEM32(0x849800);
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_00271DBA; /* je: equal / zero */

loc_00271DB2: ;
    edx = MEM32(ecx + 0x798);
    goto loc_00271DC0;

loc_00271DBA: ;
    edx = MEM32(ecx + 0x79C);

loc_00271DC0: ;
    eax = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046F583(); /* call 0x0046F583 */

loc_00271DCB: ;
    esp = esp + 8;

loc_00271DCE: ;
    edx = MEM32(esp + 0x10);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x6038F4);
    PUSH32(esp, 0x40);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046EE4A(); /* call 0x0046EE4A */

loc_00271DE5: ;
    esp = esp + 0x14;
    goto loc_00271DFF;

loc_00271DEA: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x5D4CAC);
    PUSH32(esp, 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046EE4A(); /* call 0x0046EE4A */

loc_00271DFC: ;
    esp = esp + 0x10;

loc_00271DFF: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x10);
    esi = MEM32(esp + 0x1C);
    MEM32(esp + eax * 4 + 0x70) = ecx;
    eax++;
    ecx = ecx + 0x80;
    MEM32(esp + 0x14) = eax;
    eax = MEM32(esp + 0x18);
    MEM32(esp + 0x10) = ecx;

loc_00271E22: ;
    ecx = (uint32_t)(int32_t)SMEM8(0x862E6C);
    ebx = ebx + 0x12;
    eax++;
    ebp = ebp + 0x20;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x18) = eax;
    if (CMP_L(eax, ecx)) goto loc_00271CE1; /* jl: less (signed <) */

loc_00271E3C: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_00271E3E: ;
    edx = (uint32_t)(int32_t)SMEM8(0x862D11);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x74;
    PUSH32(esp, ecx);
    eax = 0x26;
    PUSH32(esp, 0); sub_0020C3B0(); /* call 0x0020C3B0 */

loc_00271E5C: ;
    SET_LO8(eax, MEM8(0x7819D5));
    xmm0 = MEMF(0x648D14); /* movss */
    esp = esp + 0x10;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEMF(0x77615C) = xmm0; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00271E88; /* je: equal / zero */

loc_00271E78: ;
    xmm0 = MEMF(0x648F10); /* movss */
    MEMF(0x77615C) = xmm0; /* movss */

loc_00271E88: ;
    SET_LO8(eax, MEM8(0x862D10));
    if (TEST_Z(LO8(eax), 4)) goto loc_00271FDC; /* je: equal / zero */

loc_00271E95: ;
    edx = (uint32_t)(int32_t)SMEM8(0x862D11);
    edx = edx << 5;
    eax = MEM32(edx + 0x862E74);
    ecx = MEM32(edx + 0x862E70);
    PUSH32(esp, eax);
    eax = ZX8(MEM8(0x862D13));
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_004228C0(); /* call 0x004228C0 */

loc_00271EB9: ;
    esp = esp + 8;
    esi = eax;
    PUSH32(esp, 0); sub_0026A720(); /* call 0x0026A720 */

loc_00271EC3: ;
    if (CMP_EQ(esi, 0xFFFFFFFFu)) goto loc_00271F82; /* je: equal / zero */

loc_00271ECC: ;
    edx = (uint32_t)(int32_t)SMEM8(0x862D11);
    edx = edx << 5;
    eax = MEM32(edx + 0x862E74);
    ecx = MEM32(edx + 0x862E70);
    PUSH32(esp, eax);
    eax = ZX8(MEM8(0x862D13));
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00423590(); /* call 0x00423590 */

loc_00271EF0: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_00271F82; /* jne: not equal / not zero */

loc_00271EFB: ;
    edx = (uint32_t)(int32_t)SMEM8(0x862D11);
    edx = edx << 5;
    eax = MEM32(edx + 0x862E74);
    ecx = MEM32(edx + 0x862E70);
    PUSH32(esp, eax);
    eax = ZX8(MEM8(0x862D13));
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00423510(); /* call 0x00423510 */

loc_00271F1F: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_00271F82; /* jne: not equal / not zero */

loc_00271F26: ;
    edx = (uint32_t)(int32_t)SMEM8(0x862D11);
    edx = edx << 5;
    edx = edx + 0x862E7C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x5D4CAC);
    PUSH32(esp, 0x862D38);
    PUSH32(esp, 0); sub_0046F583(); /* call 0x0046F583 */

loc_00271F46: ;
    eax = (uint32_t)(int32_t)SMEM8(0x862D11);
    esp = esp + 0xC;
    eax = eax << 5;
    ecx = MEM32(eax + 0x862E70);
    MEM32(0x862D18) = ecx;
    edx = MEM32(eax + 0x862E74);
    POP32(esp, esi);
    MEM32(0x862D1C) = edx;
    MEM8(0x862D12) = 6;
    MEM8(0x862D11) = 0;
    POP32(esp, ebx);
    esp = esp + 0x2160;
    esp += 4; return; /* ret */

loc_00271F82: ;
    eax = (uint32_t)(int32_t)SMEM8(0x862D11);
    eax = eax << 5;
    eax = eax + 0x862E7C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x5D4CAC);
    PUSH32(esp, 0x862D38);
    PUSH32(esp, 0); sub_0046F583(); /* call 0x0046F583 */

loc_00271FA1: ;
    ecx = (uint32_t)(int32_t)SMEM8(0x862D11);
    esp = esp + 0xC;
    ecx = ecx << 5;
    edx = MEM32(ecx + 0x862E70);
    MEM32(0x862D18) = edx;
    eax = MEM32(ecx + 0x862E74);
    POP32(esp, esi);
    MEM32(0x862D1C) = eax;
    MEM8(0x862D12) = 4;
    MEM8(0x862D11) = 0;
    POP32(esp, ebx);
    esp = esp + 0x2160;
    esp += 4; return; /* ret */

loc_00271FDC: ;
    if (TEST_Z(LO8(eax), 8)) goto loc_00271FE5; /* je: equal / zero */

loc_00271FE0: ;
    PUSH32(esp, 0); sub_0026A790(); /* call 0x0026A790 */

loc_00271FE5: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x2160;
    esp += 4; return; /* ret */

}

/**
 * sub_00271FF0
 * Original: 0x00271FF0 - 0x00272076 (134 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00271FF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00271FF0: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x849800);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x7E8);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0020C6E0(); /* call 0x0020C6E0 */

loc_00272003: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1D);
    PUSH32(esp, 0xFFFF);
    esi = 1;
    PUSH32(esp, esi);
    PUSH32(esp, 0x20E);
    ecx = 0; /* xor self */
    PUSH32(esp, 0); sub_00277940(); /* call 0x00277940 */

loc_00272020: ;
    SET_LO8(eax, MEM8(0x862D10));
    esp = esp + 0x18;
    if (TEST_Z(LO8(eax), 4)) goto loc_00272053; /* je: equal / zero */

loc_0027202C: ;
    PUSH32(esp, 4);
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_00272035: ;
    SET_LO8(eax, MEM8(0x862D11));
    esp = esp + 4;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00272063; /* je: equal / zero */

loc_00272041: ;
    eax = ZX8(MEM8(0x862D13));
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004203A0(); /* call 0x004203A0 */

loc_0027204E: ;
    esp = esp + 4;
    g_seh_ebp = ebp; sub_00272083(); return; /* tail jmp 0x00272083 */

loc_00272053: ;
    if (TEST_Z(LO8(eax), 8)) { sub_00272076(); return; } /* je: equal / zero */

loc_00272057: ;
    PUSH32(esp, 5);
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_00272060: ;
    esp = esp + 4;

loc_00272063: ;
    eax = ZX8(MEM8(0x862D13));
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_004203A0(); /* call 0x004203A0 */

loc_00272071: ;
    esp = esp + 4;
    g_seh_ebp = ebp; sub_00272083(); return; /* tail jmp 0x00272083 */

}

/**
 * sub_00272110
 * Original: 0x00272110 - 0x002722D9 (457 bytes, 118 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00272110(void)
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

loc_00272110: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF8u;
    esp = esp - 0xD0;
    eax = MEM32(0x849E5C);
    PUSH32(esp, ebx);
    ebx = (uint32_t)(int32_t)SMEM8(0x862D15);
    PUSH32(esp, ebp);
    MEM8(0x862CE8) = 1;
    ecx = ZX8(MEM8(eax + 0x11BA));
    SET_LO8(eax, MEM8(0x862D10));
    ebp = 0; /* xor self */
    PUSH32(esp, esi);
    ebx = ebx + 0x8C;
    (void)0; /* test LO8(eax), 2 - flags set for next jcc */
    PUSH32(esp, edi);
    MEM32(esp + 0x1C) = ebp;
    MEM32(esp + 0x14) = ecx;
    if (TEST_Z(LO8(eax), 2)) goto loc_002721B6; /* je: equal / zero */

loc_00272153: ;
    ecx--;
    MEM32(esp + 0x1C) = 1;
    MEM32(esp + 0x14) = ecx;
    if (((int32_t)ecx >= 0)) goto loc_0027216A; /* jns: not sign (positive) */

loc_00272162: ;
    MEM32(esp + 0x14) = 0x23;

loc_0027216A: ;
    SET_LO8(eax, MEM8(0x7FA23C));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = 0.0f; /* xorps self = zero */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0027217E; /* jne: not equal / not zero */

loc_00272176: ;
    xmm0 = MEMF(0x7F9F48); /* movss */

loc_0027217E: ;
    ecx = MEM32(0x75E500);
    eax = 2;
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    MEMF(esp + 0x18) = xmm0; /* movss */
    if (CMP_NE(ecx, eax)) goto loc_002721AF; /* jne: not equal / not zero */

loc_00272193: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648E64)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_0027224C; /* ja: above (unsigned >) */

loc_002721AF: ;
    MEM32(0x75E500) = eax;
    goto loc_00272219;

loc_002721B6: ;
    if (TEST_Z(LO8(eax), 1)) goto loc_0027224C; /* je: equal / zero */

loc_002721BE: ;
    ecx++;
    (void)0; /* cmp ecx, 0x24 - flags set for next jcc */
    MEM32(esp + 0x1C) = 1;
    MEM32(esp + 0x14) = ecx;
    if (CMP_L(ecx, 0x24)) goto loc_002721D4; /* jl: less (signed <) */

loc_002721D0: ;
    MEM32(esp + 0x14) = ebp;

loc_002721D4: ;
    SET_LO8(eax, MEM8(0x7FA23C));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = 0.0f; /* xorps self = zero */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002721E8; /* jne: not equal / not zero */

loc_002721E0: ;
    xmm0 = MEMF(0x7F9F48); /* movss */

loc_002721E8: ;
    (void)0; /* cmp MEM32(0x75E500), 2 - flags set for next jcc */
    MEMF(esp + 0x18) = xmm0; /* movss */
    if (CMP_NE(MEM32(0x75E500), 2)) goto loc_0027220F; /* jne: not equal / not zero */

loc_002721F7: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648E64)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_0027224C; /* ja: above (unsigned >) */

loc_0027220F: ;
    MEM32(0x75E500) = 2;

loc_00272219: ;
    eax = MEM32(0x847024);
    ecx = MEM32(eax + 0x44);
    ecx = MEM32(ecx + 0xC);
    ecx = MEM32(ecx + 4);
    edx = MEM32(eax + 0x40);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, 4);
    PUSH32(esp, edx);
    ecx = 0xAD2;
    eax = eax | 0xFFFFFFFFu;
    edx = edx | 0xFFFFFFFFu;
    MEMF(0x75E504) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_0027224C: ;
    SET_LO8(eax, MEM8(0x77A510));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    eax = MEM32(0x849800);
    ecx = MEM32(eax + 0x7F0);
    PUSH32(esp, ecx);
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002722C2; /* jne: not equal / not zero */

loc_00272261: ;
    edx = (uint32_t)(int32_t)SMEM8(0x862D15);
    edx = edx + 0x64;
    PUSH32(esp, edx);
    PUSH32(esp, 0x140);
    SET_LO8(ecx, 0x81);
    MEM8(0x776171) = 0xFF;
    MEM8(0x776170) = 0;
    MEM8(0x77616F) = 0;
    MEM8(0x77616E) = 0xFF;
    PUSH32(esp, 0); sub_001F25F0(); /* call 0x001F25F0 */

loc_00272294: ;
    SET_LO8(eax, MEM8(0x7819D5));
    xmm0 = MEMF(0x649228); /* movss */
    esp = esp + 0xC;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEMF(0x77615C) = xmm0; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002722CA; /* je: equal / zero */

loc_002722B0: ;
    xmm0 = MEMF(0x648F58); /* movss */
    MEMF(0x77615C) = xmm0; /* movss */
    goto loc_002722CA;

loc_002722C2: ;
    PUSH32(esp, 0); sub_0020C730(); /* call 0x0020C730 */

loc_002722C7: ;
    esp = esp + 4;

loc_002722CA: ;
    eax = MEM32(esp + 0x14);
    eax = eax + 0xFFFFFFFCu;
    if (CMP_GE(eax, ebp)) { sub_002722D9(); return; } /* jge: greater or equal (signed >=) */

loc_002722D5: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_002722E3(); return; /* tail jmp 0x002722E3 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00272620
 * Original: 0x00272620 - 0x002726BB (155 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00272620(void)
{
    int _flags = 0; /* fallback flag var */

loc_00272620: ;
    eax = MEM32(0x7FA1F8);
    if (CMP_EQ(eax, 0x1D)) goto loc_00272664; /* je: equal / zero */

loc_0027262A: ;
    if (CMP_EQ(eax, 0x46)) goto loc_00272664; /* je: equal / zero */

loc_0027262F: ;
    eax = MEM32(0x849800);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x7FC);
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x84CA48);
    PUSH32(esp, 0x84CDE0);
    PUSH32(esp, 0); sub_0046FCD6(); /* call 0x0046FCD6 */

loc_0027264C: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, esi);
    PUSH32(esp, 0x84CA48);
    PUSH32(esp, 0); sub_0046FCD6(); /* call 0x0046FCD6 */

loc_00272659: ;
    esp = esp + 0x18;
    MEM8(0x849931) = 1;
    POP32(esp, esi);

loc_00272664: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0xFFFF);
    PUSH32(esp, 1);
    PUSH32(esp, 0x1FD);
    ecx = 0; /* xor self */
    PUSH32(esp, 0); sub_00277940(); /* call 0x00277940 */

loc_0027267D: ;
    SET_LO8(eax, MEM8(0x862D10));
    esp = esp + 0x18;
    if (TEST_Z(LO8(eax), 4)) { sub_002726BB(); return; } /* je: equal / zero */

loc_00272689: ;
    PUSH32(esp, 0); sub_0026A720(); /* call 0x0026A720 */

loc_0027268E: ;
    eax = (uint32_t)(int32_t)SMEM8(0x862D11);
    eax = eax - 0;
    if ((eax == 0)) goto loc_002726AC; /* je: equal / zero */

loc_0027269A: ;
    eax--;
    if ((eax != 0)) goto loc_002726B3; /* jne: not equal / not zero */

loc_0027269D: ;
    MEM8(0x862D12) = 0x18;
    MEM8(0x862D11) = 0;
    esp += 4; return; /* ret */

loc_002726AC: ;
    MEM8(0x862D12) = 0x17;

loc_002726B3: ;
    MEM8(0x862D11) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_002726D0
 * Original: 0x002726D0 - 0x00272707 (55 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002726D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002726D0: ;
    eax = MEM32(0x862D1C);
    ecx = MEM32(0x862D18);
    esp = esp - 0x80;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(0x862D13));
    PUSH32(esp, 0); sub_004243B0(); /* call 0x004243B0 */

loc_002726F0: ;
    SET_LO8(ebx, LO8(eax));
    esp = esp + 8;
    if (TEST_Z(LO8(ebx), LO8(ebx))) { sub_00272707(); return; } /* je: equal / zero */

loc_002726F9: ;
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x602FE8;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_00272705: ;
    g_seh_ebp = ebp; sub_00272713(); return; /* tail jmp 0x00272713 */

}

/**
 * sub_00272790
 * Original: 0x00272790 - 0x00272809 (121 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00272790(void)
{
    int _flags = 0; /* fallback flag var */

loc_00272790: ;
    eax = MEM32(0x849800);
    ecx = MEM32(eax + 0x804);
    esp = esp - 0x80;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x862D38);
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046F583(); /* call 0x0046F583 */

loc_002727B3: ;
    esi = esp + 0x14;
    PUSH32(esp, 0); sub_0020C6E0(); /* call 0x0020C6E0 */

loc_002727BC: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1D);
    PUSH32(esp, 0xFFFF);
    PUSH32(esp, 1);
    PUSH32(esp, 0x20E);
    ecx = 0; /* xor self */
    PUSH32(esp, 0); sub_00277940(); /* call 0x00277940 */

loc_002727D5: ;
    SET_LO8(eax, MEM8(0x862D10));
    esp = esp + 0x24;
    if (TEST_Z(LO8(eax), 4)) { sub_00272809(); return; } /* je: equal / zero */

loc_002727E1: ;
    PUSH32(esp, 4);
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_002727EA: ;
    SET_LO8(eax, MEM8(0x862D11));
    esp = esp + 4;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002727FB; /* je: equal / zero */

loc_002727F6: ;
    PUSH32(esp, 0); sub_0026A790(); /* call 0x0026A790 */

loc_002727FB: ;
    PUSH32(esp, 0); sub_0026A790(); /* call 0x0026A790 */

loc_00272800: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x80;
    esp += 4; return; /* ret */

}

/**
 * sub_00272830
 * Original: 0x00272830 - 0x00272922 (242 bytes, 72 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00272830(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00272830: ;
    PUSH32(esp, ecx);
    edx = 0x326;
    PUSH32(esp, 0); sub_00277820(); /* call 0x00277820 */

loc_0027283B: ;
    PUSH32(esp, 3);
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x602FC4;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_00272849: ;
    ecx = eax;
    PUSH32(esp, 0); sub_00216220(); /* call 0x00216220 */

loc_00272850: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x19);
    PUSH32(esp, 0xFFFF);
    PUSH32(esp, 6);
    PUSH32(esp, 0x327);
    ecx = 0; /* xor self */
    PUSH32(esp, 0); sub_00277940(); /* call 0x00277940 */

loc_00272869: ;
    SET_LO8(eax, MEM8(0x862D10));
    esp = esp + 0x1C;
    if (TEST_Z(LO8(eax), 0x40)) goto loc_00272884; /* je: equal / zero */

loc_00272875: ;
    SET_LO8(ecx, MEM8(0x875858));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    MEM8(0x875858) = (TEST_Z(LO8(ecx), LO8(ecx))) ? 1 : 0; /* sete */

loc_00272884: ;
    SET_LO8(ecx, MEM8(0x875858));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_002728F2; /* je: equal / zero */

loc_0027288E: ;
    eax = (uint32_t)(int32_t)SMEM8(0x862D11);
    ecx = MEM32(0x849800);
    edx = MEM32(ecx + eax * 4 + 0xCB8);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00227390(); /* call 0x00227390 */

loc_002728B1: ;
    ebp = eax;
    esp = esp + 0x10;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_0003C1E0(); /* call 0x0003C1E0 */

loc_002728BD: ;
    edi = eax;
    eax = MEM32(edi + 0x10);
    esi = MEM32(eax + 0x38);
    ecx = MEM32(esi + 0x38);
    eax = eax + 0x38;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM8(esi + 0x31) = 0;
    if (TEST_Z(ecx, ecx)) goto loc_002728DA; /* je: equal / zero */

loc_002728D3: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_002728DA: ;
    MEM32(esi + 0x38) = ebp;
    eax = MEM32(edi + 0x10);
    ecx = MEM32(eax + 0x38);
    eax = eax + 0x38;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(ecx + 0x30) = 1;
    SET_LO8(eax, MEM8(0x862D10));
    POP32(esp, ebp);

loc_002728F2: ;
    if (TEST_Z(LO8(eax), 4)) { sub_00272922(); return; } /* je: equal / zero */

loc_002728F6: ;
    PUSH32(esp, 0); sub_0026A720(); /* call 0x0026A720 */

loc_002728FB: ;
    edx = (uint32_t)(int32_t)SMEM8(0x862D11);
    MEM32(0x77A440) = 0;
    MEM32(0x849DF0) = edx;
    MEM8(0x862D12) = 0x1D;
    MEM8(0x862D11) = 0;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002729B0
 * Original: 0x002729B0 - 0x002729D1 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002729B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002729B0: ;
    SET_LO8(eax, MEM8(0x849E62));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM16(0x849E70) = 0;
    if (CMP_LE(LO8(eax) & LO8(eax), 0)) goto loc_002729D0; /* jle: less or equal (signed <=) */

loc_002729C2: ;
    PUSH32(esp, 0); sub_0026A790(); /* call 0x0026A790 */

loc_002729C7: ;
    SET_LO8(eax, MEM8(0x849E62));
    if (CMP_G(LO8(eax) & LO8(eax), 0)) goto loc_002729C2; /* jg: greater (signed >) */

loc_002729D0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002729E0
 * Original: 0x002729E0 - 0x00272A9C (188 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002729E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002729E0: ;
    SET_LO8(eax, MEM8(0x87C00C));
    esp = esp - 0x96C;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = 1;
    (void)0; /* test LO8(ebx), LO8(eax) - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_NZ(LO8(ebx), LO8(eax))) goto loc_00272A24; /* jne: not equal / not zero */

loc_002729F8: ;
    edx = MEM32(0x87C00C);
    eax = 0; /* xor self */
    edx = edx | ebx;
    PUSH32(esp, 0x48CAA0);
    MEM32(0x87C00C) = edx;
    MEM32(0x87C000) = eax;
    MEM32(0x87C004) = eax;
    MEM32(0x87C008) = eax;
    PUSH32(esp, 0); sub_0046ED65(); /* call 0x0046ED65 */

loc_00272A21: ;
    esp = esp + 4;

loc_00272A24: ;
    SET_LO8(eax, MEM8(0x849E70));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_00272A9C(); return; } /* jne: not equal / not zero */

loc_00272A2D: ;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(0x862D13));
    MEM8(0x849E70) = LO8(ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002685D0(); /* call 0x002685D0 */

loc_00272A40: ;
    ecx = MEM32(0x849DEC);
    MEM8(ecx + 0x30) = LO8(ebx);
    edx = MEM32(ecx + 0x20);
    MEM32(ecx + 0x34) = edx;
    MEM32(ecx + 0x3C) = ebx;
    eax = MEM32(0x87C000);
    esi = 0; /* xor self */
    esp = esp + 4;
    if (CMP_EQ(eax, esi)) goto loc_00272A77; /* je: equal / zero */

loc_00272A60: ;
    MEM32(esp + 0x10) = eax;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00272A6E: ;
    ecx = MEM32(0x849DEC);
    esp = esp + 4;

loc_00272A77: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(0x87C000) = esi;
    MEM32(0x87C004) = esi;
    MEM32(0x87C008) = esi;
    MEMF(0x875850) = xmm0; /* movss */
    MEM8(0x87584A) = LO8(ebx);
    g_seh_ebp = ebp; sub_00272AA4(); return; /* tail jmp 0x00272AA4 */

}

/**
 * sub_00273370
 * Original: 0x00273370 - 0x0027339C (44 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00273370(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00273370: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF8u;
    esp = esp - 0x8A0;
    eax = ZX8(MEM8(0x862D13));
    (void)0; /* cmp eax, 2 - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_GE(eax, 2)) { sub_0027339C(); return; } /* jge: greater or equal (signed >=) */

loc_0027338C: ;
    eax = MEM32(eax * 4 + 0x8470FC);
    ecx = MEM32(eax + 8);
    MEM32(esp + 0x1C) = ecx;
    g_seh_ebp = ebp; sub_002733A4(); return; /* tail jmp 0x002733A4 */

}

/**
 * sub_00273A40
 * Original: 0x00273A40 - 0x00273ABA (122 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00273A40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00273A40: ;
    eax = MEM32(0x849800);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x820);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0020C6E0(); /* call 0x0020C6E0 */

loc_00273A52: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1D);
    PUSH32(esp, 0xFFFF);
    PUSH32(esp, 1);
    PUSH32(esp, 0x20E);
    ecx = 0; /* xor self */
    PUSH32(esp, 0); sub_00277940(); /* call 0x00277940 */

loc_00273A6B: ;
    SET_LO8(eax, MEM8(0x862D10));
    esp = esp + 0x18;
    if (TEST_Z(LO8(eax), 4)) { sub_00273ABA(); return; } /* je: equal / zero */

loc_00273A77: ;
    PUSH32(esp, 4);
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_00273A80: ;
    SET_LO8(eax, MEM8(0x862D11));
    esp = esp + 4;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00273AB3; /* je: equal / zero */

loc_00273A8C: ;
    ecx = ZX8(MEM8(0x862D13));
    esi = MEM32(0x849E5C);
    esi = esi + 0x10;
    MEM8(0x849E8D) = 9;
    MEM32(0x77A5BC) = ecx;
    PUSH32(esp, 0); sub_00288480(); /* call 0x00288480 */

loc_00273AAE: ;
    PUSH32(esp, 0); sub_0026A790(); /* call 0x0026A790 */

loc_00273AB3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0026A790(); return; /* tail jmp 0x0026A790 */

}

/**
 * sub_00273AE0
 * Original: 0x00273AE0 - 0x00273B39 (89 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00273AE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00273AE0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0x602F48;
    PUSH32(esp, 0); sub_0020C6E0(); /* call 0x0020C6E0 */

loc_00273AEC: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1D);
    PUSH32(esp, 0xFFFF);
    PUSH32(esp, 1);
    PUSH32(esp, 0x20E);
    ecx = 0; /* xor self */
    PUSH32(esp, 0); sub_00277940(); /* call 0x00277940 */

loc_00273B05: ;
    SET_LO8(eax, MEM8(0x862D10));
    esp = esp + 0x18;
    if (TEST_Z(LO8(eax), 4)) { sub_00273B39(); return; } /* je: equal / zero */

loc_00273B11: ;
    PUSH32(esp, 4);
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_00273B1A: ;
    SET_LO8(eax, MEM8(0x862D11));
    esp = esp + 4;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00273B32; /* je: equal / zero */

loc_00273B26: ;
    MEM8(0x849E8D) = 0xB;
    PUSH32(esp, 0); sub_0026A790(); /* call 0x0026A790 */

loc_00273B32: ;
    POP32(esp, edi);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0026A790(); return; /* tail jmp 0x0026A790 */

}

/**
 * sub_00273B60
 * Original: 0x00273B60 - 0x00273BD0 (112 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00273B60(void)
{
    int _flags = 0; /* fallback flag var */

loc_00273B60: ;
    PUSH32(esp, ecx);
    SET_LO8(eax, MEM8(0x77A510));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, ebx);
    if (CMP_G(LO8(eax) & LO8(eax), 0)) { sub_00273BD0(); return; } /* jg: greater (signed >) */

loc_00273B6B: ;
    PUSH32(esp, 3);
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x602F3C;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_00273B79: ;
    ecx = eax;
    PUSH32(esp, 0); sub_00216220(); /* call 0x00216220 */

loc_00273B80: ;
    SET_LO8(eax, MEM8(0x862D10));
    esp = esp + 4;
    if (TEST_Z(LO8(eax), 0x40)) goto loc_00273B9A; /* je: equal / zero */

loc_00273B8C: ;
    SET_LO8(eax, MEM8(0x875849));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(0x875849) = (TEST_Z(LO8(eax), LO8(eax))) ? 1 : 0; /* sete */

loc_00273B9A: ;
    SET_LO8(eax, MEM8(0x875849));
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00273BD0(); return; } /* je: equal / zero */

loc_00273BA3: ;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_0003C1E0(); /* call 0x0003C1E0 */

loc_00273BAA: ;
    eax = MEM32(eax + 0x10);
    eax = eax + 0x2C;
    eax = MEM32(eax);
    ebx = 1;
    MEM8(eax + 0x30) = LO8(ebx);
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_0003C1E0(); /* call 0x0003C1E0 */

loc_00273BC1: ;
    eax = MEM32(eax + 0x10);
    ecx = MEM32(eax + 0x24);
    eax = eax + 0x24;
    MEM8(ecx + 0x30) = LO8(ebx);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00273D90
 * Original: 0x00273D90 - 0x00273FCB (571 bytes, 164 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00273D90(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
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

loc_00273D90: ;
    PUSH32(esp, ecx);
    SET_LO8(eax, MEM8(0x77A510));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    (void)0; /* cmp LO8(eax), LO8(ebx) - flags set for next jcc */
    PUSH32(esp, edi);
    esi = 0xFF9F;
    if (CMP_NE(LO8(eax), LO8(ebx))) goto loc_00273DBF; /* jne: not equal / not zero */

loc_00273DA4: ;
    eax = ZX8(MEM8(0x862D13));
    PUSH32(esp, 0); sub_00420400(); /* call 0x00420400 */

loc_00273DB0: ;
    esi = eax;
    esi = (uint32_t)(-(int32_t)esi);
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    esi = esi & 0x20;
    esi = esi + 0xFFBF;

loc_00273DBF: ;
    eax = MEM32(0x7FA1F8);
    if (CMP_EQ(eax, 0x1D)) goto loc_00273DD9; /* je: equal / zero */

loc_00273DC9: ;
    if (CMP_EQ(eax, 0x46)) goto loc_00273DD9; /* je: equal / zero */

loc_00273DCE: ;
    if (CMP_EQ(eax, 0x47)) goto loc_00273DD9; /* je: equal / zero */

loc_00273DD3: ;
    esi = esi & 0xFFFB;

loc_00273DD9: ;
    eax = MEM32(0x6C0224);
    edi = 1;
    if (CMP_NE(eax, edi)) goto loc_00273DF1; /* jne: not equal / not zero */

loc_00273DE7: ;
    PUSH32(esp, 0); sub_002A64A0(); /* call 0x002A64A0 */

loc_00273DEC: ;
    eax = MEM32(0x6C0224);

loc_00273DF1: ;
    if (CMP_EQ(eax, 6)) goto loc_00273E00; /* je: equal / zero */

loc_00273DF6: ;
    if (CMP_EQ(eax, 7)) goto loc_00273E00; /* je: equal / zero */

loc_00273DFB: ;
    if (CMP_NE(eax, 8)) goto loc_00273E06; /* jne: not equal / not zero */

loc_00273E00: ;
    esi = esi & 0xFFF7;

loc_00273E06: ;
    edx = 0xDE;
    PUSH32(esp, 0); sub_00277820(); /* call 0x00277820 */

loc_00273E10: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x1B);
    PUSH32(esp, esi);
    PUSH32(esp, 6);
    PUSH32(esp, 0xDF);
    ecx = 0; /* xor self */
    PUSH32(esp, 0); sub_00277940(); /* call 0x00277940 */

loc_00273E23: ;
    eax = MEM32(0x6C0224);
    esp = esp + 0x18;
    if (CMP_NE(eax, edi)) goto loc_00273E39; /* jne: not equal / not zero */

loc_00273E2F: ;
    PUSH32(esp, 0); sub_002A64A0(); /* call 0x002A64A0 */

loc_00273E34: ;
    eax = MEM32(0x6C0224);

loc_00273E39: ;
    if (CMP_EQ(eax, 7)) goto loc_00273E43; /* je: equal / zero */

loc_00273E3E: ;
    if (CMP_NE(eax, 8)) goto loc_00273E52; /* jne: not equal / not zero */

loc_00273E43: ;
    if (CMP_EQ(MEM8(0x862D11), LO8(ebx))) goto loc_00273E52; /* je: equal / zero */

loc_00273E4B: ;
    MEM8(0x862D10) = MEM8(0x862D10) & 0xFB;

loc_00273E52: ;
    SET_LO8(eax, MEM8(0x862D10));
    if (TEST_Z(LO8(eax), 4)) goto loc_00273F48; /* je: equal / zero */

loc_00273E5F: ;
    PUSH32(esp, 0); sub_0026A720(); /* call 0x0026A720 */

loc_00273E64: ;
    eax = (uint32_t)(int32_t)SMEM8(0x862D11);
    if (CMP_A(eax, 6)) goto loc_00273EE0; /* ja: above (unsigned >) */

loc_00273E70: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x273FCC); /* switch: 7 entries, 6 targets */
    if (_jt == 0x00273E77u) goto loc_00273E77;
    if (_jt == 0x00273E80u) goto loc_00273E80;
    if (_jt == 0x00273E8Fu) goto loc_00273E8F;
    if (_jt == 0x00273EC1u) goto loc_00273EC1;
    if (_jt == 0x00273ECAu) goto loc_00273ECA;
    if (_jt == 0x00273ED9u) goto loc_00273ED9;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00273E77: ;
    MEM8(0x862D12) = 0x23;
    goto loc_00273EE0;

loc_00273E80: ;
    MEM8(0x862D12) = 0x24;
    MEM8(0x862D11) = LO8(ebx);
    goto loc_00273EE0;

loc_00273E8F: ;
    PUSH32(esp, 0xF);
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_00273E98: ;
    ebx = MEM32(0x849E5C);
    eax = MEM32(0x849C34);
    esp = esp + 4;
    ebx = ebx + 0x11C0;
    PUSH32(esp, 0); sub_00242040(); /* call 0x00242040 */

loc_00273EB1: ;
    MEM8(0x862D11) = LO8(eax);
    MEM8(0x862D12) = 0x27;
    ebx = 0; /* xor self */
    goto loc_00273EE0;

loc_00273EC1: ;
    MEM8(0x862D12) = 0x14;
    goto loc_00273EE0;

loc_00273ECA: ;
    MEM8(0x862D12) = 0x28;
    MEM8(0x862D11) = LO8(ebx);
    goto loc_00273EE0;

loc_00273ED9: ;
    MEM8(0x862D12) = 0x15;

loc_00273EE0: ;
    (void)0; /* cmp MEM8(0x7FA23C), LO8(ebx) - flags set for next jcc */
    xmm0 = 0.0f; /* xorps self = zero */
    if (CMP_NE(MEM8(0x7FA23C), LO8(ebx))) goto loc_00273EF3; /* jne: not equal / not zero */

loc_00273EEB: ;
    xmm0 = MEMF(0x7F9F48); /* movss */

loc_00273EF3: ;
    (void)0; /* cmp MEM32(0x75E500), ebx - flags set for next jcc */
    MEMF(esp + 0xC) = xmm0; /* movss */
    if (CMP_NE(MEM32(0x75E500), ebx)) goto loc_00273F1D; /* jne: not equal / not zero */

loc_00273F01: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648E64)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_00273FC6; /* ja: above (unsigned >) */

loc_00273F1D: ;
    ecx = MEM32(0x847024);
    eax = MEM32(ecx + 0x44);
    eax = MEM32(eax + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    eax = eax + 4;
    eax = MEM32(eax);
    PUSH32(esp, eax);
    eax = MEM32(ecx + 0x40);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 4);
    MEM32(0x75E500) = ebx;
    PUSH32(esp, eax);
    ecx = 0xAD0;
    goto loc_00273FB3;

loc_00273F48: ;
    if (TEST_Z(LO8(eax), 8)) goto loc_00273FC6; /* je: equal / zero */

loc_00273F4C: ;
    PUSH32(esp, 0); sub_0026A790(); /* call 0x0026A790 */

loc_00273F51: ;
    (void)0; /* cmp MEM8(0x7FA23C), LO8(ebx) - flags set for next jcc */
    xmm0 = 0.0f; /* xorps self = zero */
    if (CMP_NE(MEM8(0x7FA23C), LO8(ebx))) goto loc_00273F64; /* jne: not equal / not zero */

loc_00273F5C: ;
    xmm0 = MEMF(0x7F9F48); /* movss */

loc_00273F64: ;
    (void)0; /* cmp MEM32(0x75E500), edi - flags set for next jcc */
    MEMF(esp + 0xC) = xmm0; /* movss */
    if (CMP_NE(MEM32(0x75E500), edi)) goto loc_00273F8A; /* jne: not equal / not zero */

loc_00273F72: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648E64)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_00273FC6; /* ja: above (unsigned >) */

loc_00273F8A: ;
    ecx = MEM32(0x847024);
    eax = MEM32(ecx + 0x44);
    eax = MEM32(eax + 0xC);
    ecx = MEM32(ecx + 0x40);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    eax = eax + 4;
    eax = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 4);
    PUSH32(esp, ecx);
    MEM32(0x75E500) = edi;
    ecx = 0xAD1;

loc_00273FB3: ;
    eax = eax | 0xFFFFFFFFu;
    edx = edx | 0xFFFFFFFFu;
    MEMF(0x75E504) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_00273FC6: ;
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
 * sub_00273FF0
 * Original: 0x00273FF0 - 0x00274020 (48 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00273FF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00273FF0: ;
    eax = 0x18C4;
    PUSH32(esp, 0); sub_00470E50(); /* call 0x00470E50 */

loc_00273FFA: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edx = 0xE6;
    PUSH32(esp, 0); sub_00277820(); /* call 0x00277820 */

loc_00274007: ;
    eax = MEM32(0x849E5C);
    ebx = ZX8(MEM8(eax + 0x11B5));
    SET_LO8(eax, MEM8(0x862D11));
    if (CMP_GE(LO8(eax) & LO8(eax), 0)) { sub_00274020(); return; } /* jge: greater or equal (signed >=) */

loc_0027401C: ;
    SET_LO8(eax, 0); /* xor self */
    g_seh_ebp = ebp; sub_00274026(); return; /* tail jmp 0x00274026 */

}

/**
 * sub_00274360
 * Original: 0x00274360 - 0x0027457B (539 bytes, 154 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00274360(void)
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

loc_00274360: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF8u;
    esp = esp - 0x10C;
    PUSH32(esp, edi);
    MEM16(esp + 0x10) = 0;
    eax = 0; /* xor self */
    ecx = 0x3F;
    edi = esp + 0x12;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    edx = 0xED;
    MEM16(edi) = LO16(eax); edi += 2; /* stosw */
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0); sub_00277820(); /* call 0x00277820 */

loc_00274395: ;
    if (TEST_Z(MEM8(0x862D10), 3)) goto loc_00274430; /* je: equal / zero */

loc_002743A2: ;
    SET_LO8(ecx, MEM8(0x875848));
    xmm0 = 0.0f; /* xorps self = zero */
    SET_LO8(eax, 1);
    SET_LO8(eax, LO8(eax) - LO8(ecx));
    MEM8(0x875848) = LO8(eax);
    SET_LO8(eax, MEM8(0x7FA23C));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002743C5; /* jne: not equal / not zero */

loc_002743BD: ;
    xmm0 = MEMF(0x7F9F48); /* movss */

loc_002743C5: ;
    (void)0; /* cmp MEM32(0x75E500), 2 - flags set for next jcc */
    MEMF(esp + 4) = xmm0; /* movss */
    if (CMP_NE(MEM32(0x75E500), 2)) goto loc_002743EC; /* jne: not equal / not zero */

loc_002743D4: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648E64)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_00274430; /* ja: above (unsigned >) */

loc_002743EC: ;
    ecx = MEM32(0x847024);
    eax = MEM32(ecx + 0x44);
    eax = MEM32(eax + 0xC);
    ecx = MEM32(ecx + 0x40);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = eax + 4;
    eax = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, ecx);
    edx = edx | 0xFFFFFFFFu;
    eax = eax | 0xFFFFFFFFu;
    ecx = 0xAD2;
    MEMF(0x75E504) = xmm0; /* movss */
    MEM32(0x75E500) = 2;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_00274430: ;
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x602EE4;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_0027443C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x602ED0);
    edx = esp + 0x18;
    PUSH32(esp, 0x40);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046EE4A(); /* call 0x0046EE4A */

loc_0027444E: ;
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x602EAC;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_0027445A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x602ED0);
    eax = esp + 0xA8;
    PUSH32(esp, 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046EE4A(); /* call 0x0046EE4A */

loc_0027446F: ;
    eax = (uint32_t)(int32_t)SMEM8(0x875848);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esp + 0x38;
    MEM32(esp + 0x30) = ecx;
    ecx = esp + 0x30;
    edx = esp + 0xB8;
    PUSH32(esp, 2);
    PUSH32(esp, ecx);
    eax = 7;
    MEM32(esp + 0x3C) = edx;
    PUSH32(esp, 0); sub_0020C3B0(); /* call 0x0020C3B0 */

loc_0027449D: ;
    SET_LO8(eax, MEM8(0x77A510));
    esp = esp + 0x30;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002744BD; /* jne: not equal / not zero */

loc_002744A9: ;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_0003C1E0(); /* call 0x0003C1E0 */

loc_002744B0: ;
    eax = MEM32(eax + 0x10);
    edx = MEM32(eax + 0x24);
    eax = eax + 0x24;
    MEM8(edx + 0x30) = 1;

loc_002744BD: ;
    SET_LO8(eax, MEM8(0x862D10));
    if (TEST_Z(LO8(eax), 4)) goto loc_00274563; /* je: equal / zero */

loc_002744CA: ;
    SET_LO8(eax, MEM8(0x77A510));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002744DF; /* je: equal / zero */

loc_002744D3: ;
    PUSH32(esp, 4);
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_002744DC: ;
    esp = esp + 4;

loc_002744DF: ;
    SET_LO8(eax, MEM8(0x7FA23C));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = 0.0f; /* xorps self = zero */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002744F3; /* jne: not equal / not zero */

loc_002744EB: ;
    xmm0 = MEMF(0x7F9F48); /* movss */

loc_002744F3: ;
    eax = MEM32(0x75E500);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEMF(esp + 4) = xmm0; /* movss */
    if (TEST_NZ(eax, eax)) goto loc_0027451A; /* jne: not equal / not zero */

loc_00274502: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648E64)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_00274576; /* ja: above (unsigned >) */

loc_0027451A: ;
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

loc_0027455E: ;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00274563: ;
    if (TEST_Z(LO8(eax), 8)) goto loc_00274576; /* je: equal / zero */

loc_00274567: ;
    PUSH32(esp, 0); sub_0026A790(); /* call 0x0026A790 */

loc_0027456C: ;
    eax = 1;
    PUSH32(esp, 0); sub_002431E0(); /* call 0x002431E0 */

loc_00274576: ;
    POP32(esp, edi);
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
 * sub_00274580
 * Original: 0x00274580 - 0x0027459F (31 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00274580(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00274580: ;
    eax = (uint32_t)(int32_t)SMEM16(esp + 0xC);
    MEM32(esp + 0xC) = eax;
    eax = MEM32(esp + 4);
    if (CMP_LE(eax & eax, 0)) { sub_0027459F(); return; } /* jle: less or equal (signed <=) */

loc_00274591: ;
    if (CMP_G(eax, 2)) { sub_0027459F(); return; } /* jg: greater (signed >) */

loc_00274596: ;
    edx = MEM32(esp + 8);
    g_seh_ebp = ebp; sub_00351EB0(); return; /* tail jmp 0x00351EB0 */

}

/**
 * sub_002745B0
 * Original: 0x002745B0 - 0x00274681 (209 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002745B0(void)
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

loc_002745B0: ;
    PUSH32(esp, ecx);
    SET_LO8(eax, MEM8(0x77A510));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002745C4; /* je: equal / zero */

loc_002745BA: ;
    edx = 0x143;
    PUSH32(esp, 0); sub_00277820(); /* call 0x00277820 */

loc_002745C4: ;
    PUSH32(esp, ebx);
    ebx = MEM32(0x849E5C);
    PUSH32(esp, 0x862D11);
    PUSH32(esp, 0x274580);
    PUSH32(esp, 0x75E8A4);
    PUSH32(esp, 0); sub_00290490(); /* call 0x00290490 */

loc_002745DF: ;
    SET_LO8(eax, MEM8(0x862D10));
    esp = esp + 0xC;
    (void)0; /* test LO8(eax), 8 - flags set for next jcc */
    POP32(esp, ebx);
    if (TEST_Z(LO8(eax), 8)) goto loc_0027467F; /* je: equal / zero */

loc_002745F0: ;
    ecx = MEM32(0x849E5C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_002745FD: ;
    PUSH32(esp, 0); sub_0026A790(); /* call 0x0026A790 */

loc_00274602: ;
    SET_LO8(eax, MEM8(0x7FA23C));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = 0.0f; /* xorps self = zero */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00274616; /* jne: not equal / not zero */

loc_0027460E: ;
    xmm0 = MEMF(0x7F9F48); /* movss */

loc_00274616: ;
    (void)0; /* cmp MEM32(0x75E500), 1 - flags set for next jcc */
    MEMF(esp) = xmm0; /* movss */
    if (CMP_NE(MEM32(0x75E500), 1)) goto loc_0027463B; /* jne: not equal / not zero */

loc_00274624: ;
    fp_push(MEMF(esp)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648E64)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_0027467F; /* ja: above (unsigned >) */

loc_0027463B: ;
    ecx = MEM32(0x847024);
    eax = MEM32(ecx + 0x44);
    eax = MEM32(eax + 0xC);
    ecx = MEM32(ecx + 0x40);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = eax + 4;
    eax = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, ecx);
    edx = edx | 0xFFFFFFFFu;
    eax = eax | 0xFFFFFFFFu;
    ecx = 0xAD1;
    MEMF(0x75E504) = xmm0; /* movss */
    MEM32(0x75E500) = 1;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_0027467F: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00274690
 * Original: 0x00274690 - 0x00275071 (2529 bytes, 693 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00274690(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00274690: ;
    eax = 0x827C;
    PUSH32(esp, 0); sub_00470E50(); /* call 0x00470E50 */

loc_0027469A: ;
    SET_LO8(eax, MEM8(0x849C0E));
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00275061; /* jne: not equal / not zero */

loc_002746AD: ;
    eax = ZX8(MEM8(0x862D13));
    PUSH32(esp, 0); sub_004200A0(); /* call 0x004200A0 */

loc_002746B9: ;
    if (TEST_Z(eax, eax)) goto loc_00275061; /* je: equal / zero */

loc_002746C1: ;
    esi = ZX8(MEM8(0x862D13));
    PUSH32(esp, 0); sub_00426DB0(); /* call 0x00426DB0 */

loc_002746CD: ;
    ecx = (uint32_t)(int32_t)SMEM8(0x862D11);
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    if (CMP_LE(ecx, eax)) goto loc_002746E1; /* jle: less or equal (signed <=) */

loc_002746DC: ;
    MEM8(0x862D11) = LO8(eax);

loc_002746E1: ;
    edx = MEM32(0x862D70);
    edx = edx | MEM32(0x862D74);
    ecx = 0x602E90;
    if ((edx != 0)) goto loc_00274701; /* jne: not equal / not zero */

loc_002746F4: ;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_002746FB: ;
    MEM32(esp + 0x14) = eax;
    goto loc_0027472E;

loc_00274701: ;
    PUSH32(esp, 0x862D38);
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_0027470D: ;
    PUSH32(esp, eax);
    eax = esp + 0x294;
    PUSH32(esp, 0x602E80);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046F583(); /* call 0x0046F583 */

loc_00274720: ;
    ecx = esp + 0x29C;
    esp = esp + 0x10;
    MEM32(esp + 0x14) = ecx;

loc_0027472E: ;
    SET_LO8(eax, MEM8(0x7819D5));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = MEMF(0x648E58); /* movss */
    MEMF(0x77615C) = xmm0; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00274757; /* je: equal / zero */

loc_00274747: ;
    xmm0 = MEMF(0x649D9C); /* movss */
    MEMF(0x77615C) = xmm0; /* movss */

loc_00274757: ;
    edx = MEM32(0x862D74);
    eax = MEM32(0x862D70);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = ZX8(MEM8(0x862D13));
    PUSH32(esp, 0); sub_0026D550(); /* call 0x0026D550 */

loc_00274771: ;
    eax = MEM32(esp + 0x1C);
    esp = esp + 0xC;
    ebp = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(esp + 0x3C) = ebx;
    MEM32(esp + 0x50) = ebx;
    MEM32(esp + 0x68) = ebx;
    MEM32(esp + 0x6C) = ebx;
    MEM32(esp + 0x70) = ebx;
    if (CMP_LE(eax, ebx)) goto loc_00274A3E; /* jle: less or equal (signed <=) */

loc_00274796: ;
    ecx = MEM32(0x862D70);
    /* nop */

loc_002747A0: ;
    ecx = ecx | MEM32(0x862D74);
    if ((ecx == 0)) goto loc_002747D0; /* je: equal / zero */

loc_002747A8: ;
    esi = ZX8(MEM8(0x862D13));
    eax = ebp;
    PUSH32(esp, 0); sub_00426F50(); /* call 0x00426F50 */

loc_002747B6: ;
    ecx = MEM32(0x862D70);
    if (CMP_NE(ecx, eax)) goto loc_00274A31; /* jne: not equal / not zero */

loc_002747C4: ;
    if (CMP_NE(MEM32(0x862D74), edx)) goto loc_00274A31; /* jne: not equal / not zero */

loc_002747D0: ;
    edi = ZX8(MEM8(0x862D13));
    eax = ebp;
    PUSH32(esp, 0); sub_00426E20(); /* call 0x00426E20 */

loc_002747DE: ;
    if (CMP_EQ(eax, 2)) goto loc_00274A2B; /* je: equal / zero */

loc_002747E7: ;
    if (CMP_EQ(eax, 3)) goto loc_00274A2B; /* je: equal / zero */

loc_002747F0: ;
    if (CMP_EQ(eax, 1)) goto loc_00274A2B; /* je: equal / zero */

loc_002747F9: ;
    if (CMP_EQ(eax, 4)) goto loc_00274A2B; /* je: equal / zero */

loc_00274802: ;
    if (CMP_EQ(eax, 8)) goto loc_00274A2B; /* je: equal / zero */

loc_0027480B: ;
    esi = ZX8(MEM8(0x862D13));
    eax = ebp;
    PUSH32(esp, 0); sub_00426F50(); /* call 0x00426F50 */

loc_00274819: ;
    ecx = ZX8(MEM8(0x862D13));
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004243B0(); /* call 0x004243B0 */

loc_00274827: ;
    esp = esp + 8;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00274A2B; /* jne: not equal / not zero */

loc_00274832: ;
    ecx = (uint32_t)(int32_t)SMEM8(0x862D11);
    if (CMP_NE(ecx, ebp)) goto loc_00274845; /* jne: not equal / not zero */

loc_0027483D: ;
    edx = MEM32(esp + 0x3C);
    MEM32(esp + 0x50) = edx;

loc_00274845: ;
    ecx = MEM32(esp + 0x3C);
    esi = ZX8(MEM8(0x862D13));
    ecx++;
    eax = ebp;
    MEM32(esp + 0x3C) = ecx;
    MEM32(esp + 0x44) = ebx;
    MEM32(esp + 0x48) = ebx;
    MEM32(esp + 0x4C) = ebx;
    PUSH32(esp, 0); sub_004270D0(); /* call 0x004270D0 */

loc_00274868: ;
    esi = esp + 0x74;
    PUSH32(esp, 0); sub_0026A490(); /* call 0x0026A490 */

loc_00274871: ;
    ecx = esi;
    eax = esp + 0x40;
    PUSH32(esp, 0); sub_00244DD0(); /* call 0x00244DD0 */

loc_0027487C: ;
    if (CMP_EQ(MEM32(esp + 0x74), ebx)) goto loc_00274897; /* je: equal / zero */

loc_00274882: ;
    eax = MEM32(esp + 0x78);
    MEM32(eax) = MEM32(eax) - 1;
    if ((MEM32(eax) != 0)) goto loc_00274897; /* jne: not equal / not zero */

loc_0027488A: ;
    eax = esp + 0x78;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00274894: ;
    esp = esp + 4;

loc_00274897: ;
    edi = ZX8(MEM8(0x862D13));
    ecx = esp + 0x60;
    PUSH32(esp, ecx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    eax = ebp;
    PUSH32(esp, 0); sub_00427190(); /* call 0x00427190 */

loc_002748B9: ;
    esi = MEM32(esp + 0x30);
    esi = esi + 0xF830;
    esp = esp + 0x10;
    MEM32(esp + 0x20) = esi;
    PUSH32(esp, 0); sub_0042C91F(); /* call 0x0042C91F */

loc_002748CF: ;
    if (CMP_NE(eax, 2)) goto loc_002748F8; /* jne: not equal / not zero */

loc_002748D4: ;
    edx = ZX16(MEM16(esp + 0x1C));
    eax = ZX16(MEM16(esp + 0x18));
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = ZX16(LO16(esi));
    PUSH32(esp, ecx);
    PUSH32(esp, 0x602E68);
    PUSH32(esp, 0x100);
    edx = esp + 0xA0;
    PUSH32(esp, edx);
    goto loc_00274943;

loc_002748F8: ;
    PUSH32(esp, 0); sub_0042E387(); /* call 0x0042E387 */

loc_002748FD: ;
    (void)0; /* cmp eax, 1 - flags set for next jcc */
    edx = ZX16(MEM16(esp + 0x18));
    if (CMP_NE(eax, 1)) goto loc_00274926; /* jne: not equal / not zero */

loc_00274907: ;
    ecx = ZX16(MEM16(esp + 0x1C));
    eax = ZX16(LO16(esi));
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x602E4C);
    PUSH32(esp, 0x100);
    eax = esp + 0xA0;
    PUSH32(esp, eax);
    goto loc_00274943;

loc_00274926: ;
    eax = ZX16(MEM16(esp + 0x1C));
    ecx = ZX16(LO16(esi));
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x602E4C);
    PUSH32(esp, 0x100);
    ecx = esp + 0xA0;
    PUSH32(esp, ecx);

loc_00274943: ;
    PUSH32(esp, 0); sub_0046EE4A(); /* call 0x0046EE4A */

loc_00274948: ;
    esp = esp + 0x18;
    edi = esp + 0x8C;
    eax = esp + 0x54;
    PUSH32(esp, 0); sub_00060900(); /* call 0x00060900 */

loc_0027495B: ;
    ecx = esp + 0x54;
    eax = esp + 0x40;
    MEM32(esp + 0x5C) = ebx;
    PUSH32(esp, 0); sub_00244DD0(); /* call 0x00244DD0 */

loc_0027496C: ;
    if (CMP_EQ(MEM32(esp + 0x54), ebx)) goto loc_00274987; /* je: equal / zero */

loc_00274972: ;
    eax = MEM32(esp + 0x58);
    MEM32(eax) = MEM32(eax) - 1;
    if ((MEM32(eax) != 0)) goto loc_00274987; /* jne: not equal / not zero */

loc_0027497A: ;
    edx = esp + 0x58;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00274984: ;
    esp = esp + 4;

loc_00274987: ;
    esi = ZX8(MEM8(0x862D13));
    eax = ebp;
    PUSH32(esp, 0); sub_004272A0(); /* call 0x004272A0 */

loc_00274995: ;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, 1);
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002749DE; /* jne: not equal / not zero */

loc_0027499B: ;
    eax = 0x603810;
    esi = esp + 0x84;
    PUSH32(esp, 0); sub_002335F0(); /* call 0x002335F0 */

loc_002749AC: ;
    ecx = eax;
    eax = esp + 0x40;
    PUSH32(esp, 0); sub_00244DD0(); /* call 0x00244DD0 */

loc_002749B7: ;
    if (CMP_EQ(MEM32(esp + 0x80), ebx)) goto loc_00274A15; /* je: equal / zero */

loc_002749C0: ;
    eax = MEM32(esp + 0x84);
    MEM32(eax) = MEM32(eax) - 1;
    eax = MEM32(esp + 0x84);
    if (CMP_NE(MEM32(eax), ebx)) goto loc_00274A15; /* jne: not equal / not zero */

loc_002749D4: ;
    ecx = esp + 0x84;
    PUSH32(esp, ecx);
    goto loc_00274A0D;

loc_002749DE: ;
    eax = 0; /* xor self */
    esi = esp + 0x2C;
    PUSH32(esp, 0); sub_002335F0(); /* call 0x002335F0 */

loc_002749E9: ;
    ecx = eax;
    eax = esp + 0x40;
    PUSH32(esp, 0); sub_00244DD0(); /* call 0x00244DD0 */

loc_002749F4: ;
    if (CMP_EQ(MEM32(esp + 0x28), ebx)) goto loc_00274A15; /* je: equal / zero */

loc_002749FA: ;
    eax = MEM32(esp + 0x2C);
    MEM32(eax) = MEM32(eax) - 1;
    edx = MEM32(esp + 0x2C);
    if (CMP_NE(MEM32(edx), ebx)) goto loc_00274A15; /* jne: not equal / not zero */

loc_00274A08: ;
    eax = esp + 0x2C;
    PUSH32(esp, eax);

loc_00274A0D: ;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00274A12: ;
    esp = esp + 4;

loc_00274A15: ;
    ecx = esp + 0x40;
    esi = esp + 0x64;
    PUSH32(esp, 0); sub_00244D80(); /* call 0x00244D80 */

loc_00274A22: ;
    esi = esp + 0x40;
    PUSH32(esp, 0); sub_00227C20(); /* call 0x00227C20 */

loc_00274A2B: ;
    ecx = MEM32(0x862D70);

loc_00274A31: ;
    eax = MEM32(esp + 0x10);
    ebp++;
    if (CMP_L(ebp, eax)) goto loc_002747A0; /* jl: less (signed <) */

loc_00274A3E: ;
    edi = 0x5F59F0;
    eax = esp + 0x20;
    MEM32(esp + 0x44) = ebx;
    MEM32(esp + 0x48) = ebx;
    MEM32(esp + 0x4C) = ebx;
    PUSH32(esp, 0); sub_00060900(); /* call 0x00060900 */

loc_00274A58: ;
    eax = MEM32(esp + 0x20);
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    ecx = MEM32(esp + 0x24);
    xmm0 = MEMF(0x75E874); /* movss */
    xmm1 = MEMF(0x75E88C); /* movss */
    edi = ecx;
    esi = eax;
    MEM32(esp + 0x2C) = edi;
    MEM32(esp + 0x28) = esi;
    if (CMP_EQ(eax, ebx)) goto loc_00274A82; /* je: equal / zero */

loc_00274A80: ;
    MEM32(ecx) = MEM32(ecx) + 1;

loc_00274A82: ;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEMF(esp + 0x30) = xmm1; /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    MEM8(esp + 0x38) = 0;
    if (CMP_EQ(eax, ebx)) goto loc_00274AA8; /* je: equal / zero */

loc_00274A97: ;
    MEM32(ecx) = MEM32(ecx) - 1;
    if ((MEM32(ecx) != 0)) goto loc_00274AA8; /* jne: not equal / not zero */

loc_00274A9B: ;
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00274AA5: ;
    esp = esp + 4;

loc_00274AA8: ;
    ecx = esp + 0x28;
    eax = esp + 0x40;
    PUSH32(esp, 0); sub_00244E50(); /* call 0x00244E50 */

loc_00274AB5: ;
    if (CMP_EQ(esi, ebx)) goto loc_00274ACA; /* je: equal / zero */

loc_00274AB9: ;
    MEM32(edi) = MEM32(edi) - 1;
    if ((MEM32(edi) != 0)) goto loc_00274ACA; /* jne: not equal / not zero */

loc_00274ABD: ;
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00274AC7: ;
    esp = esp + 4;

loc_00274ACA: ;
    edi = 0x5F59F0;
    eax = esp + 0x20;
    PUSH32(esp, 0); sub_00060900(); /* call 0x00060900 */

loc_00274AD8: ;
    eax = MEM32(esp + 0x20);
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    ecx = MEM32(esp + 0x24);
    xmm0 = MEMF(0x75E878); /* movss */
    xmm1 = MEMF(0x75E890); /* movss */
    edi = ecx;
    esi = eax;
    MEM32(esp + 0x2C) = edi;
    MEM32(esp + 0x28) = esi;
    if (CMP_EQ(eax, ebx)) goto loc_00274B02; /* je: equal / zero */

loc_00274B00: ;
    MEM32(ecx) = MEM32(ecx) + 1;

loc_00274B02: ;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEMF(esp + 0x30) = xmm1; /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    MEM8(esp + 0x38) = 0;
    if (CMP_EQ(eax, ebx)) goto loc_00274B28; /* je: equal / zero */

loc_00274B17: ;
    MEM32(ecx) = MEM32(ecx) - 1;
    if ((MEM32(ecx) != 0)) goto loc_00274B28; /* jne: not equal / not zero */

loc_00274B1B: ;
    eax = esp + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00274B25: ;
    esp = esp + 4;

loc_00274B28: ;
    ecx = esp + 0x28;
    eax = esp + 0x40;
    PUSH32(esp, 0); sub_00244E50(); /* call 0x00244E50 */

loc_00274B35: ;
    if (CMP_EQ(esi, ebx)) goto loc_00274B4A; /* je: equal / zero */

loc_00274B39: ;
    MEM32(edi) = MEM32(edi) - 1;
    if ((MEM32(edi) != 0)) goto loc_00274B4A; /* jne: not equal / not zero */

loc_00274B3D: ;
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00274B47: ;
    esp = esp + 4;

loc_00274B4A: ;
    edi = 0x5F59F0;
    eax = esp + 0x20;
    PUSH32(esp, 0); sub_00060900(); /* call 0x00060900 */

loc_00274B58: ;
    eax = MEM32(esp + 0x20);
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    ecx = MEM32(esp + 0x24);
    xmm0 = MEMF(0x75E880); /* movss */
    xmm1 = MEMF(0x75E898); /* movss */
    edi = ecx;
    esi = eax;
    MEM32(esp + 0x2C) = edi;
    MEM32(esp + 0x28) = esi;
    if (CMP_EQ(eax, ebx)) goto loc_00274B82; /* je: equal / zero */

loc_00274B80: ;
    MEM32(ecx) = MEM32(ecx) + 1;

loc_00274B82: ;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEMF(esp + 0x30) = xmm1; /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    MEM8(esp + 0x38) = 0;
    if (CMP_EQ(eax, ebx)) goto loc_00274BA8; /* je: equal / zero */

loc_00274B97: ;
    MEM32(ecx) = MEM32(ecx) - 1;
    if ((MEM32(ecx) != 0)) goto loc_00274BA8; /* jne: not equal / not zero */

loc_00274B9B: ;
    edx = esp + 0x24;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00274BA5: ;
    esp = esp + 4;

loc_00274BA8: ;
    ecx = esp + 0x28;
    eax = esp + 0x40;
    PUSH32(esp, 0); sub_00244E50(); /* call 0x00244E50 */

loc_00274BB5: ;
    if (CMP_EQ(esi, ebx)) goto loc_00274BCA; /* je: equal / zero */

loc_00274BB9: ;
    MEM32(edi) = MEM32(edi) - 1;
    if ((MEM32(edi) != 0)) goto loc_00274BCA; /* jne: not equal / not zero */

loc_00274BBD: ;
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00274BC7: ;
    esp = esp + 4;

loc_00274BCA: ;
    ecx = MEM32(esp + 0x50);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    edx = esp + 0x6C;
    PUSH32(esp, edx);
    eax = esp + 0x4C;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00227200(); /* call 0x00227200 */

loc_00274BE4: ;
    ebp = eax;
    esp = esp + 0x14;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_0003C1E0(); /* call 0x0003C1E0 */

loc_00274BF0: ;
    edi = eax;
    eax = MEM32(edi + 0x10);
    esi = MEM32(eax + 0x14);
    ecx = MEM32(esi + 0x38);
    eax = eax + 0x14;
    (void)0; /* cmp ecx, ebx - flags set for next jcc */
    MEM8(esi + 0x31) = 0;
    if (CMP_EQ(ecx, ebx)) goto loc_00274C0D; /* je: equal / zero */

loc_00274C06: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_00274C0D: ;
    MEM32(esi + 0x38) = ebp;
    eax = MEM32(edi + 0x10);
    eax = eax + 0x14;
    eax = MEM32(eax);
    MEM8(eax + 0x30) = 1;
    SET_LO8(eax, MEM8(0x862D11));
    if (CMP_GE(LO8(eax) & LO8(eax), 0)) goto loc_00274C29; /* jge: greater or equal (signed >=) */

loc_00274C25: ;
    SET_LO8(edx, 0); /* xor self */
    goto loc_00274C39;

loc_00274C29: ;
    ecx = MEM32(esp + 0x10);
    eax = SX8(LO8(eax));
    ecx--;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    SET_LO8(edx, LO8(ecx));
    if (CMP_G(eax, ecx)) goto loc_00274C39; /* jg: greater (signed >) */

loc_00274C37: ;
    SET_LO8(edx, LO8(eax));

loc_00274C39: ;
    (void)0; /* cmp MEM32(esp + 0x3C), ebx - flags set for next jcc */
    MEM8(0x862D11) = LO8(edx);
    if (CMP_NE(MEM32(esp + 0x3C), ebx)) goto loc_00274C9E; /* jne: not equal / not zero */

loc_00274C45: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x602E2C;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_00274C54: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00227390(); /* call 0x00227390 */

loc_00274C5A: ;
    ebp = eax;
    esp = esp + 0x10;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_0003C1E0(); /* call 0x0003C1E0 */

loc_00274C66: ;
    edi = eax;
    eax = MEM32(edi + 0x10);
    esi = MEM32(eax + 0x10);
    ecx = MEM32(esi + 0x38);
    eax = eax + 0x10;
    (void)0; /* cmp ecx, ebx - flags set for next jcc */
    MEM8(esi + 0x31) = 0;
    if (CMP_EQ(ecx, ebx)) goto loc_00274C83; /* je: equal / zero */

loc_00274C7C: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_00274C83: ;
    MEM32(esi + 0x38) = ebp;
    eax = MEM32(edi + 0x10);
    eax = eax + 0x10;
    eax = MEM32(eax);
    MEM8(eax + 0x30) = 1;
    (void)0; /* test MEM8(0x862D10), 0xC - flags set for next jcc */
    goto loc_00274FFC;

loc_00274C9E: ;
    SET_LO8(eax, MEM8(0x862D10));
    if (TEST_Z(LO8(eax), 2)) goto loc_00274D18; /* je: equal / zero */

loc_00274CA7: ;
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    ecx = MEM32(0x862D70);
    if (CMP_LE(LO8(edx) & LO8(edx), 0)) goto loc_00274D99; /* jle: less or equal (signed <=) */

loc_00274CB5: ;
    esi = MEM32(0x862D74);
    eax = ecx;
    eax = eax | esi;
    if ((eax == 0)) goto loc_00274D0B; /* je: equal / zero */

loc_00274CC1: ;
    ebx = SX8(LO8(edx));
    ebx--;
    if (((int32_t)ebx < 0)) goto loc_00274D99; /* js: sign (negative) */

loc_00274CCB: ;
    goto loc_00274CD0;

    /* nop */

loc_00274CD0: ;
    esi = ZX8(MEM8(0x862D13));
    eax = ebx;
    PUSH32(esp, 0); sub_00426F50(); /* call 0x00426F50 */

loc_00274CDE: ;
    ecx = MEM32(0x862D70);
    if (CMP_NE(ecx, eax)) goto loc_00274CF0; /* jne: not equal / not zero */

loc_00274CE8: ;
    if (CMP_EQ(MEM32(0x862D74), edx)) goto loc_00274CF8; /* je: equal / zero */

loc_00274CF0: ;
    ebx--;
    if (((int32_t)ebx >= 0)) goto loc_00274CD0; /* jns: not sign (positive) */

loc_00274CF3: ;
    goto loc_00274D99;

loc_00274CF8: ;
    if (TEST_S(ebx, ebx)) goto loc_00274D99; /* jl: less (signed <) */

loc_00274D00: ;
    MEM8(0x862D11) = LO8(ebx);
    goto loc_00274D99;

loc_00274D0B: ;
    SET_LO8(edx, LO8(edx) - 1);
    MEM8(0x862D11) = LO8(edx);
    goto loc_00274E10;

loc_00274D18: ;
    if (TEST_Z(LO8(eax), 1)) goto loc_00274D93; /* je: equal / zero */

loc_00274D1C: ;
    ecx = MEM32(esp + 0x10);
    eax = SX8(LO8(edx));
    ecx--;
    if (CMP_GE(eax, ecx)) goto loc_00274D93; /* jge: greater or equal (signed >=) */

loc_00274D28: ;
    ecx = MEM32(0x862D70);
    edi = MEM32(0x862D74);
    esi = ecx;
    esi = esi | edi;
    if ((esi == 0)) goto loc_00274D89; /* je: equal / zero */

loc_00274D3A: ;
    ebx = eax + 1;
    if (CMP_GE(ebx, MEM32(esp + 0x10))) goto loc_00274D99; /* jge: greater or equal (signed >=) */

loc_00274D43: ;
    goto loc_00274D50;

    /* nop */
    /* nop */

loc_00274D50: ;
    esi = ZX8(MEM8(0x862D13));
    eax = ebx;
    PUSH32(esp, 0); sub_00426F50(); /* call 0x00426F50 */

loc_00274D5E: ;
    ecx = MEM32(0x862D70);
    if (CMP_NE(ecx, eax)) goto loc_00274D70; /* jne: not equal / not zero */

loc_00274D68: ;
    if (CMP_EQ(MEM32(0x862D74), edx)) goto loc_00274D7B; /* je: equal / zero */

loc_00274D70: ;
    eax = MEM32(esp + 0x10);
    ebx++;
    if (CMP_L(ebx, eax)) goto loc_00274D50; /* jl: less (signed <) */

loc_00274D79: ;
    goto loc_00274D99;

loc_00274D7B: ;
    if (CMP_GE(ebx, MEM32(esp + 0x10))) goto loc_00274D99; /* jge: greater or equal (signed >=) */

loc_00274D81: ;
    MEM8(0x862D11) = LO8(ebx);
    goto loc_00274D99;

loc_00274D89: ;
    SET_LO8(edx, LO8(edx) + 1);
    MEM8(0x862D11) = LO8(edx);
    goto loc_00274E10;

loc_00274D93: ;
    ecx = MEM32(0x862D70);

loc_00274D99: ;
    ecx = ecx | MEM32(0x862D74);
    if ((ecx == 0)) goto loc_00274E10; /* je: equal / zero */

loc_00274DA1: ;
    eax = (uint32_t)(int32_t)SMEM8(0x862D11);
    esi = ZX8(MEM8(0x862D13));
    PUSH32(esp, 0); sub_00426F50(); /* call 0x00426F50 */

loc_00274DB4: ;
    ecx = MEM32(0x862D70);
    if (CMP_NE(ecx, eax)) goto loc_00274DD0; /* jne: not equal / not zero */

loc_00274DBE: ;
    eax = MEM32(0x862D74);
    if (CMP_EQ(eax, edx)) goto loc_00274E10; /* je: equal / zero */

loc_00274DC7: ;
    goto loc_00274DD0;

    /* nop */

loc_00274DD0: ;
    SET_LO8(eax, MEM8(0x862D11));
    edx = MEM32(esp + 0x10);
    SET_LO8(eax, LO8(eax) + 1);
    ecx = SX8(LO8(eax));
    (void)0; /* cmp ecx, edx - flags set for next jcc */
    MEM8(0x862D11) = LO8(eax);
    if (CMP_L(ecx, edx)) goto loc_00274DEE; /* jl: less (signed <) */

loc_00274DE7: ;
    SET_LO8(eax, 0); /* xor self */
    MEM8(0x862D11) = LO8(eax);

loc_00274DEE: ;
    esi = ZX8(MEM8(0x862D13));
    eax = SX8(LO8(eax));
    PUSH32(esp, 0); sub_00426F50(); /* call 0x00426F50 */

loc_00274DFD: ;
    ecx = MEM32(0x862D70);
    if (CMP_NE(ecx, eax)) goto loc_00274DD0; /* jne: not equal / not zero */

loc_00274E07: ;
    eax = MEM32(0x862D74);
    if (CMP_NE(eax, edx)) goto loc_00274DD0; /* jne: not equal / not zero */

loc_00274E10: ;
    eax = (uint32_t)(int32_t)SMEM8(0x862D11);

loc_00274E17: ;
    edi = ZX8(MEM8(0x862D13));
    PUSH32(esp, 0); sub_00426E20(); /* call 0x00426E20 */

loc_00274E23: ;
    esi = ZX8(MEM8(0x862D13));
    edi = eax;
    eax = (uint32_t)(int32_t)SMEM8(0x862D11);
    PUSH32(esp, 0); sub_00426F50(); /* call 0x00426F50 */

loc_00274E38: ;
    if (CMP_EQ(edi, 2)) goto loc_00274E6A; /* je: equal / zero */

loc_00274E3D: ;
    if (CMP_EQ(edi, 3)) goto loc_00274E6A; /* je: equal / zero */

loc_00274E42: ;
    if (CMP_EQ(edi, 1)) goto loc_00274E6A; /* je: equal / zero */

loc_00274E47: ;
    if (CMP_EQ(edi, 4)) goto loc_00274E6A; /* je: equal / zero */

loc_00274E4C: ;
    if (CMP_EQ(edi, 8)) goto loc_00274E6A; /* je: equal / zero */

loc_00274E51: ;
    ecx = ZX8(MEM8(0x862D13));
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004243B0(); /* call 0x004243B0 */

loc_00274E5F: ;
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00274EF6; /* je: equal / zero */

loc_00274E6A: ;
    SET_LO8(eax, MEM8(0x862D11));
    edi = MEM32(esp + 0x10);
    SET_LO8(eax, LO8(eax) + 1);
    ecx = SX8(LO8(eax));
    (void)0; /* cmp ecx, edi - flags set for next jcc */
    MEM8(0x862D11) = LO8(eax);
    if (CMP_L(ecx, edi)) goto loc_00274E88; /* jl: less (signed <) */

loc_00274E81: ;
    SET_LO8(eax, 0); /* xor self */
    MEM8(0x862D11) = LO8(eax);

loc_00274E88: ;
    edx = MEM32(0x862D70);
    edx = edx | MEM32(0x862D74);
    if ((edx == 0)) goto loc_00274EEE; /* je: equal / zero */

loc_00274E96: ;
    goto loc_00274EA0;

    /* nop */
    /* nop */

loc_00274EA0: ;
    esi = ZX8(MEM8(0x862D13));
    eax = SX8(LO8(eax));
    PUSH32(esp, 0); sub_00426F50(); /* call 0x00426F50 */

loc_00274EAF: ;
    ecx = MEM32(0x862D70);
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    esi = MEM32(0x862D74);
    if (CMP_NE(ecx, eax)) goto loc_00274EC3; /* jne: not equal / not zero */

loc_00274EBF: ;
    if (CMP_EQ(esi, edx)) goto loc_00274EE9; /* je: equal / zero */

loc_00274EC3: ;
    SET_LO8(eax, MEM8(0x862D11));
    SET_LO8(eax, LO8(eax) + 1);
    edx = SX8(LO8(eax));
    (void)0; /* cmp edx, edi - flags set for next jcc */
    MEM8(0x862D11) = LO8(eax);
    if (CMP_L(edx, edi)) goto loc_00274EDD; /* jl: less (signed <) */

loc_00274ED6: ;
    SET_LO8(eax, 0); /* xor self */
    MEM8(0x862D11) = LO8(eax);

loc_00274EDD: ;
    ecx = ecx | esi;
    if ((ecx != 0)) goto loc_00274EA0; /* jne: not equal / not zero */

loc_00274EE1: ;
    eax = SX8(LO8(eax));
    goto loc_00274E17;

loc_00274EE9: ;
    SET_LO8(eax, MEM8(0x862D11));

loc_00274EEE: ;
    eax = SX8(LO8(eax));
    goto loc_00274E17;

loc_00274EF6: ;
    SET_LO8(eax, MEM8(0x862D10));
    if (TEST_Z(LO8(eax), 4)) goto loc_00274FFA; /* je: equal / zero */

loc_00274F03: ;
    PUSH32(esp, 0); sub_00427890(); /* call 0x00427890 */

loc_00274F08: ;
    eax = (uint32_t)(int32_t)SMEM8(0x862D11);
    esi = ZX8(MEM8(0x862D13));
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_004276F0(); /* call 0x004276F0 */

loc_00274F1F: ;
    eax = (uint32_t)(int32_t)SMEM8(0x862D11);
    esi = ZX8(MEM8(0x862D13));
    PUSH32(esp, 0); sub_004270D0(); /* call 0x004270D0 */

loc_00274F32: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x5D4CAC);
    PUSH32(esp, 0x11);
    PUSH32(esp, 0x862D38);
    PUSH32(esp, 0); sub_0046EE4A(); /* call 0x0046EE4A */

loc_00274F44: ;
    esp = esp + 0x18;
    PUSH32(esp, 0); sub_0026A720(); /* call 0x0026A720 */

loc_00274F4C: ;
    SET_LO8(eax, MEM8(0x862D11));
    edi = ZX8(MEM8(0x862D13));
    MEM8(0x862D2C) = LO8(eax);
    eax = SX8(LO8(eax));
    PUSH32(esp, 0); sub_00426E20(); /* call 0x00426E20 */

loc_00274F65: ;
    eax--;
    if (CMP_A(eax, 7)) goto loc_00274FEA; /* ja: above (unsigned >) */

loc_00274F6B: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x275074); /* switch: 8 entries, 5 targets */
    if (_jt == 0x00274F72u) goto loc_00274F72;
    if (_jt == 0x00274FA0u) goto loc_00274FA0;
    if (_jt == 0x00274FCEu) goto loc_00274FCE;
    if (_jt == 0x00274FEAu) goto loc_00274FEA;
    if (_jt == 0x00274FF1u) goto loc_00274FF1;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00274F72: ;
    eax = (uint32_t)(int32_t)SMEM8(0x862D11);
    esi = ZX8(MEM8(0x862D13));
    PUSH32(esp, 0); sub_00426F50(); /* call 0x00426F50 */

loc_00274F85: ;
    MEM32(0x862D18) = eax;
    MEM32(0x862D1C) = edx;
    MEM8(0x862D12) = 0x3B;
    MEM8(0x862D11) = 0;
    goto loc_00275003;

loc_00274FA0: ;
    eax = (uint32_t)(int32_t)SMEM8(0x862D11);
    esi = ZX8(MEM8(0x862D13));
    PUSH32(esp, 0); sub_00426F50(); /* call 0x00426F50 */

loc_00274FB3: ;
    MEM32(0x862D18) = eax;
    MEM32(0x862D1C) = edx;
    MEM8(0x862D12) = 0x3C;
    MEM8(0x862D11) = 0;
    goto loc_00275003;

loc_00274FCE: ;
    MEM8(0x862D12) = 0x4A;
    PUSH32(esp, 0); sub_00421450(); /* call 0x00421450 */

loc_00274FDA: ;
    MEM8(0x862D91) = 0;
    MEM8(0x862D11) = 0;
    goto loc_00275003;

loc_00274FEA: ;
    MEM8(0x862D12) = 0x38;

loc_00274FF1: ;
    MEM8(0x862D11) = 0;
    goto loc_00275003;

loc_00274FFA: ;
    (void)0; /* test LO8(eax), 8 - flags set for next jcc */

loc_00274FFC: ;
    if (TEST_Z(LO8(eax), 8)) goto loc_00275003; /* je: equal / zero */

loc_00274FFE: ;
    PUSH32(esp, 0); sub_0026A790(); /* call 0x0026A790 */

loc_00275003: ;
    esi = MEM32(esp + 0x44);
    if (TEST_Z(esi, esi)) goto loc_0027502C; /* je: equal / zero */

loc_0027500B: ;
    eax = MEM32(esp + 0x14);
    ebx = MEM32(esp + 0x48);
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0); sub_002279E0(); /* call 0x002279E0 */

loc_0027501B: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    MEM32(esp + 0x1C) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00275029: ;
    esp = esp + 8;

loc_0027502C: ;
    esi = MEM32(esp + 0x68);
    if (TEST_Z(esi, esi)) goto loc_00275066; /* je: equal / zero */

loc_00275034: ;
    edx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x6C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0); sub_00227A40(); /* call 0x00227A40 */

loc_00275045: ;
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    MEM32(esp + 0x20) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00275053: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x827C;
    esp += 4; return; /* ret */

loc_00275061: ;
    PUSH32(esp, 0); sub_0026A790(); /* call 0x0026A790 */

loc_00275066: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x827C;
    esp += 4; return; /* ret */

}

/**
 * sub_002750A0
 * Original: 0x002750A0 - 0x002750AA (10 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002750A0(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002750A0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = 0; /* xor self */
    g_seh_ebp = ebp; sub_002750B0(); return; /* tail jmp 0x002750B0 */

}

/**
 * sub_00275190
 * Original: 0x00275190 - 0x00275333 (419 bytes, 113 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00275190(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00275190: ;
    eax = MEM32(0x86E990);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    edi = 1;
    if (TEST_S(eax, eax)) goto loc_00275200; /* jl: less (signed <) */

loc_0027519F: ;
    eax = MEM32(0x863D04);
    if (CMP_EQ(eax, 2)) goto loc_002751D0; /* je: equal / zero */

loc_002751A9: ;
    if (CMP_EQ(eax, edi)) goto loc_002751D0; /* je: equal / zero */

loc_002751AD: ;
    eax = MEM32(0x862D1C);
    ecx = MEM32(0x862D18);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002750A0(); /* call 0x002750A0 */

loc_002751BF: ;
    esp = esp + 8;
    (void)0; /* test eax, eax - flags set for next jcc */
    eax = MEM32(0x863D04);
    if (TEST_NZ(eax, eax)) goto loc_002751D0; /* jne: not equal / not zero */

loc_002751CB: ;
    edi = 3;

loc_002751D0: ;
    ecx = MEM32(0x86E990);
    if (TEST_S(ecx, ecx)) goto loc_00275200; /* jl: less (signed <) */

loc_002751DA: ;
    if (CMP_EQ(eax, 2)) goto loc_00275200; /* je: equal / zero */

loc_002751DF: ;
    if (CMP_EQ(eax, 1)) goto loc_00275200; /* je: equal / zero */

loc_002751E4: ;
    edx = MEM32(0x862D1C);
    eax = MEM32(0x862D18);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002750A0(); /* call 0x002750A0 */

loc_002751F6: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_00275200; /* jne: not equal / not zero */

loc_002751FD: ;
    edi = edi | 2;

loc_00275200: ;
    PUSH32(esp, esi);
    esi = ZX8(MEM8(0x862D13));
    eax = esi;
    MEM8(esi + 0x849DC4) = 1;
    PUSH32(esp, 0); sub_00422740(); /* call 0x00422740 */

loc_00275216: ;
    if (CMP_EQ(eax, 2)) goto loc_0027522E; /* je: equal / zero */

loc_0027521B: ;
    eax = esi;
    PUSH32(esp, 0); sub_00422740(); /* call 0x00422740 */

loc_00275222: ;
    if (CMP_EQ(eax, 1)) goto loc_00275252; /* je: equal / zero */

loc_00275227: ;
    PUSH32(esp, 0); sub_00422590(); /* call 0x00422590 */

loc_0027522C: ;
    goto loc_00275252;

loc_0027522E: ;
    ecx = MEM32(0x862D1C);
    edx = MEM32(0x862D18);
    eax = ZX8(MEM8(0x862D13));
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_004228C0(); /* call 0x004228C0 */

loc_00275248: ;
    esp = esp + 8;
    if (CMP_GE(eax & eax, 0)) goto loc_00275252; /* jge: greater or equal (signed >=) */

loc_0027524F: ;
    edi = edi | 0xC;

loc_00275252: ;
    edx = 0x107;
    PUSH32(esp, 0); sub_00277820(); /* call 0x00277820 */

loc_0027525C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x16);
    PUSH32(esp, edi);
    PUSH32(esp, 4);
    PUSH32(esp, 0x108);
    ecx = 0; /* xor self */
    PUSH32(esp, 0); sub_00277940(); /* call 0x00277940 */

loc_00275271: ;
    SET_LO8(eax, MEM8(0x862D10));
    esp = esp + 0x18;
    (void)0; /* test LO8(eax), 4 - flags set for next jcc */
    POP32(esp, esi);
    if (TEST_Z(LO8(eax), 4)) { sub_00275333(); return; } /* je: equal / zero */

loc_00275282: ;
    PUSH32(esp, 0); sub_0026A720(); /* call 0x0026A720 */

loc_00275287: ;
    PUSH32(esp, 0); sub_002581F0(); /* call 0x002581F0 */

loc_0027528C: ;
    edi = eax;
    PUSH32(esp, 0); sub_00258550(); /* call 0x00258550 */

loc_00275293: ;
    eax = MEM32(0x862D1C);
    ecx = MEM32(0x862D18);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = edi;
    PUSH32(esp, 0); sub_00258620(); /* call 0x00258620 */

loc_002752A7: ;
    eax = (uint32_t)(int32_t)SMEM8(0x862D11);
    if (CMP_A(eax, 3)) goto loc_0027532A; /* ja: above (unsigned >) */

loc_002752B3: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x275340); /* switch: 4 entries, 4 targets */
    if (_jt == 0x002752BAu) goto loc_002752BA;
    if (_jt == 0x002752CAu) goto loc_002752CA;
    if (_jt == 0x002752FFu) goto loc_002752FF;
    if (_jt == 0x00275319u) goto loc_00275319;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_002752BA: ;
    MEM8(0x862D12) = 0x34;
    MEM8(0x862D11) = 0;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_002752CA: ;
    MEM8(0x862D12) = 0x34;
    MEM32(edi + 0x20C) = 2;
    eax = MEM32(0x86E990);
    PUSH32(esp, 0); sub_00421D00(); /* call 0x00421D00 */

loc_002752E5: ;
    edx = MEM32(eax);
    MEM32(edi + 0x210) = edx;
    eax = MEM32(eax + 4);
    MEM32(edi + 0x214) = eax;
    MEM8(0x862D11) = 0;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_002752FF: ;
    MEM8(0x862D12) = 0x34;
    MEM32(edi + 0x20C) = 1;
    MEM8(0x862D11) = 0;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_00275319: ;
    MEM8(0x862D12) = 0x34;
    MEM32(edi + 0x20C) = 8;

loc_0027532A: ;
    MEM8(0x862D11) = 0;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00275380
 * Original: 0x00275380 - 0x0027590B (1419 bytes, 403 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00275380(void)
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

loc_00275380: ;
    esp = esp - 0x548;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_002581F0(); /* call 0x002581F0 */

loc_0027538F: ;
    ebp = eax;
    eax = MEM32(ebp + 0x20C);
    edi = 1;
    if (CMP_NE(eax, edi)) goto loc_002753AD; /* jne: not equal / not zero */

loc_002753A0: ;
    PUSH32(esp, 0); sub_00271250(); /* call 0x00271250 */

loc_002753A5: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00275900; /* jne: not equal / not zero */

loc_002753AD: ;
    SET_LO8(eax, MEM8(0x87BFF8));
    ebx = 0; /* xor self */
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_002754EC; /* je: equal / zero */

loc_002753BC: ;
    eax = MEM32(0x84C12C);
    eax = eax - ebx;
    if ((eax == 0)) goto loc_00275452; /* je: equal / zero */

loc_002753C9: ;
    eax = eax - 2;
    if ((eax == 0)) goto loc_00275468; /* je: equal / zero */

loc_002753D2: ;
    eax--;
    if ((eax != 0)) goto loc_00275900; /* jne: not equal / not zero */

loc_002753D9: ;
    if (CMP_EQ(MEM32(0x84C130), edi)) goto loc_00275446; /* je: equal / zero */

loc_002753E1: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x602D88;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_002753EF: ;
    PUSH32(esp, eax);
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x602D70;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_002753FC: ;
    PUSH32(esp, eax);
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x602D58;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_00275409: ;
    PUSH32(esp, eax);
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_0003C1E0(); /* call 0x0003C1E0 */

loc_00275411: ;
    ebx = eax;
    PUSH32(esp, 0); sub_00232B60(); /* call 0x00232B60 */

loc_00275418: ;
    if (TEST_Z(MEM8(0x862D10), 4)) goto loc_00275900; /* je: equal / zero */

loc_00275425: ;
    eax = 0; /* xor self */
    MEM32(0x84C12C) = eax;
    MEM32(0x84C130) = eax;
    MEM8(0x87BFF8) = LO8(eax);
    PUSH32(esp, 0); sub_0026A790(); /* call 0x0026A790 */

loc_0027543B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x548;
    esp += 4; return; /* ret */

loc_00275446: ;
    MEM32(0x84C12C) = ebx;
    MEM32(0x84C130) = ebx;

loc_00275452: ;
    MEM8(0x87BFF8) = LO8(ebx);
    PUSH32(esp, 0); sub_0026A790(); /* call 0x0026A790 */

loc_0027545D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x548;
    esp += 4; return; /* ret */

loc_00275468: ;
    edi = esp + 0x24;
    esi = esp + 0x14;
    ebx = esp + 0x10;
    PUSH32(esp, 0); sub_00426610(); /* call 0x00426610 */

loc_00275479: ;
    ebp = MEM32(ebp + 0x20C);
    if (CMP_EQ(ebp, 3)) goto loc_00275495; /* je: equal / zero */

loc_00275484: ;
    if (CMP_EQ(ebp, 1)) goto loc_00275495; /* je: equal / zero */

loc_00275489: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    ecx = 0x602DC0;
    goto loc_0027549F;

loc_00275495: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = 0x602DFC;

loc_0027549F: ;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_002754A6: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x602DEC);
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x77A3C0);
    PUSH32(esp, 0); sub_0046EE4A(); /* call 0x0046EE4A */

loc_002754B8: ;
    esp = esp + 0x14;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x602DA0;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_002754CD: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x77A3C0);
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_0003C1E0(); /* call 0x0003C1E0 */

loc_002754DA: ;
    ebx = eax;
    PUSH32(esp, 0); sub_00232B60(); /* call 0x00232B60 */

loc_002754E1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x548;
    esp += 4; return; /* ret */

loc_002754EC: ;
    eax = MEM32(ebp + 0x20C);
    ecx = MEM32(0x849800);
    edx = 0; /* xor self */
    MEM16(esp + 0x11) = LO16(edx);
    MEM8(esp + 0x13) = LO8(edx);
    edx = MEM32(ecx + eax * 4 + 0x434);
    PUSH32(esp, edx);
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x602D44;
    MEM8(esp + 0x14) = LO8(ebx);
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_0027551B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x5F788C);
    eax = esp + 0x58;
    PUSH32(esp, 0x80);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046EE4A(); /* call 0x0046EE4A */

loc_00275530: ;
    esi = esp + 0x60;
    MEM16(esp + 0x160) = LO16(ebx);
    PUSH32(esp, 0); sub_0020C6E0(); /* call 0x0020C6E0 */

loc_00275541: ;
    esi = ebp + 8;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0046E45A(); /* call 0x0046E45A */

loc_0027554A: ;
    esp = esp + 0x18;
    if (CMP_B(eax, 0xF)) goto loc_0027557A; /* jb: below (unsigned <) */

loc_00275552: ;
    PUSH32(esp, 0xD);
    ecx = esp + 0x30;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046FCD6(); /* call 0x0046FCD6 */

loc_0027555F: ;
    PUSH32(esp, 0x10);
    edx = esp + 0x3C;
    PUSH32(esp, 0x602D3C);
    PUSH32(esp, edx);
    MEM16(esp + 0x5E) = LO16(ebx);
    PUSH32(esp, 0); sub_00470655(); /* call 0x00470655 */

loc_00275575: ;
    esp = esp + 0x18;
    goto loc_0027558A;

loc_0027557A: ;
    PUSH32(esp, 0x10);
    eax = esp + 0x30;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046FCD6(); /* call 0x0046FCD6 */

loc_00275587: ;
    esp = esp + 0xC;

loc_0027558A: ;
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x602D28;
    MEM16(esp + 0x4E) = LO16(ebx);
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_002755A0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x60315C);
    edx = esp + 0x15C;
    PUSH32(esp, 0x80);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046EE4A(); /* call 0x0046EE4A */

loc_002755B8: ;
    ecx = MEM32(ebp + 0x208);
    esp = esp + 0x14;
    eax = 0; /* xor self */
    (void)0; /* cmp ecx, ebx - flags set for next jcc */
    MEM16(esp + 0x250) = LO16(ebx);
    if (CMP_EQ(ecx, ebx)) goto loc_002755F5; /* je: equal / zero */

loc_002755CF: ;
    eax = MEM32(0x849E74);
    ecx = MEM32(eax + 0xC);
    fp_push((double)SMEM32(eax + 0xC)); /* fild */
    if (CMP_GE(ecx & ecx, 0)) goto loc_002755E4; /* jge: greater or equal (signed >=) */

loc_002755DE: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_002755E4: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_002755F5: ;
    PUSH32(esp, eax);
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x602D10;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_00275602: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x602CFC);
    edx = esp + 0x25E;
    PUSH32(esp, 0x80);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046EE4A(); /* call 0x0046EE4A */

loc_0027561A: ;
    eax = esp + 0x164;
    ecx = esp + 0x266;
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x2C) = ecx;
    esp = esp + 0x14;
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x602CE8;
    MEM16(esp + 0x352) = LO16(ebx);
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_00275647: ;
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(ebp + 0x20C);
    if (CMP_NE(eax, 3)) goto loc_0027565D; /* jne: not equal / not zero */

loc_00275656: ;
    ecx = 0x602CC0;
    goto loc_00275666;

loc_0027565D: ;
    if (CMP_NE(eax, edi)) goto loc_00275671; /* jne: not equal / not zero */

loc_00275661: ;
    ecx = 0x602C90;

loc_00275666: ;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_0027566D: ;
    MEM32(esp + 0x1C) = eax;

loc_00275671: ;
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x602C68;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_0027567D: ;
    PUSH32(esp, esi);
    MEM32(esp + 0x24) = eax;
    PUSH32(esp, 0); sub_0046E45A(); /* call 0x0046E45A */

loc_00275687: ;
    esp = esp + 4;
    if (TEST_NZ(eax, eax)) goto loc_0027569B; /* jne: not equal / not zero */

loc_0027568E: ;
    if (CMP_NE(MEM32(ebp + 0x208), ebx)) goto loc_0027569B; /* jne: not equal / not zero */

loc_00275696: ;
    MEM8(esp + 0x12) = 1;

loc_0027569B: ;
    eax = ZX8(MEM8(0x862D13));
    PUSH32(esp, 0); sub_00420110(); /* call 0x00420110 */

loc_002756A7: ;
    if (TEST_NZ(eax, eax)) goto loc_002756B0; /* jne: not equal / not zero */

loc_002756AB: ;
    MEM8(esp + 0x11) = 1;

loc_002756B0: ;
    eax = (uint32_t)(int32_t)SMEM8(0x862D11);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, 4);
    PUSH32(esp, ecx);
    eax = 0x28;
    PUSH32(esp, 0); sub_0020C3B0(); /* call 0x0020C3B0 */

loc_002756CE: ;
    SET_LO8(eax, MEM8(0x77A510));
    esp = esp + 0x10;
    if (CMP_NE(LO8(eax), LO8(ebx))) goto loc_002756EB; /* jne: not equal / not zero */

loc_002756DA: ;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_0003C1E0(); /* call 0x0003C1E0 */

loc_002756E1: ;
    eax = MEM32(eax + 0x10);
    eax = MEM32(eax + 0x24);
    MEM8(eax + 0x30) = 1;

loc_002756EB: ;
    SET_LO8(eax, MEM8(0x862D10));
    if (TEST_Z(LO8(eax), 2)) goto loc_00275702; /* je: equal / zero */

loc_002756F4: ;
    SET_LO8(ecx, MEM8(0x862D11));
    if (CMP_LE(LO8(ecx), LO8(ebx))) goto loc_00275719; /* jle: less or equal (signed <=) */

loc_002756FE: ;
    SET_LO8(ecx, LO8(ecx) - 1);
    goto loc_00275713;

loc_00275702: ;
    if (TEST_Z(LO8(eax), 1)) goto loc_00275719; /* je: equal / zero */

loc_00275706: ;
    SET_LO8(ecx, MEM8(0x862D11));
    if (CMP_GE(LO8(ecx), 3)) goto loc_00275719; /* jge: greater or equal (signed >=) */

loc_00275711: ;
    SET_LO8(ecx, LO8(ecx) + 1);

loc_00275713: ;
    MEM8(0x862D11) = LO8(ecx);

loc_00275719: ;
    if (TEST_Z(LO8(eax), 4)) goto loc_002757EE; /* je: equal / zero */

loc_00275721: ;
    eax = (uint32_t)(int32_t)SMEM8(0x862D11);
    if (CMP_A(eax, 3)) goto loc_00275900; /* ja: above (unsigned >) */

loc_00275731: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x27590C); /* switch: 4 entries, 4 targets */
    if (_jt == 0x00275738u) goto loc_00275738;
    if (_jt == 0x00275756u) goto loc_00275756;
    if (_jt == 0x0027576Du) goto loc_0027576D;
    if (_jt == 0x002757F6u) goto loc_002757F6;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00275738: ;
    PUSH32(esp, 0); sub_0026A720(); /* call 0x0026A720 */

loc_0027573D: ;
    MEM16(0x862D84) = LO16(ebx);
    MEM8(0x862D12) = 0x36;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x548;
    esp += 4; return; /* ret */

loc_00275756: ;
    PUSH32(esp, 0); sub_0026A720(); /* call 0x0026A720 */

loc_0027575B: ;
    MEM8(0x862D12) = 0x37;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x548;
    esp += 4; return; /* ret */

loc_0027576D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0046E45A(); /* call 0x0046E45A */

loc_00275773: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_00275787; /* je: equal / zero */

loc_0027577A: ;
    if (CMP_NE(MEM32(0x86EDFC), 2)) goto loc_00275900; /* jne: not equal / not zero */

loc_00275787: ;
    (void)0; /* cmp MEM32(ebp + 0x20C), 3 - flags set for next jcc */
    MEM8(0x87BFF8) = 1;
    if (CMP_NE(MEM32(ebp + 0x20C), 3)) goto loc_002757B4; /* jne: not equal / not zero */

loc_00275797: ;
    eax = MEM32(0x86E990);
    PUSH32(esp, 0); sub_00421D00(); /* call 0x00421D00 */

loc_002757A1: ;
    edx = MEM32(eax);
    MEM32(ebp + 0x210) = edx;
    eax = MEM32(eax + 4);
    MEM32(ebp + 0x214) = eax;
    goto loc_002757C0;

loc_002757B4: ;
    MEM32(ebp + 0x210) = ebx;
    MEM32(ebp + 0x214) = ebx;

loc_002757C0: ;
    edi = ebp;
    PUSH32(esp, 0); sub_00258310(); /* call 0x00258310 */

loc_002757C7: ;
    if (TEST_Z(eax, eax)) goto loc_002757DD; /* je: equal / zero */

loc_002757CB: ;
    MEM8(0x862D11) = 3;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x548;
    esp += 4; return; /* ret */

loc_002757DD: ;
    MEM8(0x87BFF8) = LO8(ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x548;
    esp += 4; return; /* ret */

loc_002757EE: ;
    if (TEST_Z(LO8(eax), 8)) goto loc_00275900; /* je: equal / zero */

loc_002757F6: ;
    if (CMP_EQ(MEM8(0x849C0E), LO8(ebx))) goto loc_0027582E; /* je: equal / zero */

loc_002757FE: ;
    ecx = ZX8(MEM8(0x862D13));
    MEM32(0x776238) = ebx;
    MEM8(0x87BFF8) = LO8(ebx);
    MEM32(ecx * 4 + 0x77623C) = ebx;
    MEM8(0x862D10) = LO8(ebx);
    PUSH32(esp, 0); sub_0026A790(); /* call 0x0026A790 */

loc_00275823: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x548;
    esp += 4; return; /* ret */

loc_0027582E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0046E45A(); /* call 0x0046E45A */

loc_00275834: ;
    esp = esp + 4;
    if (TEST_NZ(eax, eax)) goto loc_00275847; /* jne: not equal / not zero */

loc_0027583B: ;
    if (CMP_EQ(MEM32(ebp + 0x208), ebx)) goto loc_00275452; /* je: equal / zero */

loc_00275847: ;
    PUSH32(esp, 0); sub_0026A720(); /* call 0x0026A720 */

loc_0027584C: ;
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0); sub_001FFB50(); /* call 0x001FFB50 */

loc_00275853: ;
    esp = esp + 4;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    if (CMP_EQ(eax, ebx)) goto loc_002758B4; /* je: equal / zero */

loc_0027585E: ;
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x602C44;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_0027586A: ;
    ebp = eax;
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x602C24;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_00275878: ;
    esi = eax;
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x602C00;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_00275886: ;
    PUSH32(esp, eax);
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x602BD8;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_00275893: ;
    esp = esp - 8;
    ecx = esp;
    edi = eax;
    eax = ecx;
    PUSH32(esp, 0); sub_00060900(); /* call 0x00060900 */

loc_002758A1: ;
    edx = esi;
    esi = MEM32(esp + 0x1C);
    eax = ebx;
    ecx = ebp;
    PUSH32(esp, 0); sub_002307B0(); /* call 0x002307B0 */

loc_002758B0: ;
    esi = eax;
    goto loc_002758B6;

loc_002758B4: ;
    esi = 0; /* xor self */

loc_002758B6: ;
    edi = esi + 0xC;
    ecx = esp + 0x14;
    eax = edi;
    MEM32(esp + 0x14) = 0x100;
    MEM32(esp + 0x18) = 0x275350;
    MEM32(esp + 0x1C) = ebx;
    PUSH32(esp, 0); sub_002692D0(); /* call 0x002692D0 */

loc_002758D8: ;
    ecx = esp + 0x14;
    eax = edi;
    MEM32(esp + 0x14) = 0x200;
    MEM32(esp + 0x18) = 0x276C80;
    MEM32(esp + 0x1C) = ebx;
    PUSH32(esp, 0); sub_002692D0(); /* call 0x002692D0 */

loc_002758F7: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0026AA60(); /* call 0x0026AA60 */

loc_002758FD: ;
    esp = esp + 4;

loc_00275900: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x548;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00275920
 * Original: 0x00275920 - 0x0027592E (14 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00275920(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00275920: ;
    if (TEST_Z(MEM8(0x862D10), 8)) { sub_0027592E(); return; } /* je: equal / zero */

loc_00275929: ;
    g_seh_ebp = ebp; sub_0026A790(); return; /* tail jmp 0x0026A790 */

}

/**
 * sub_00275930
 * Original: 0x00275930 - 0x00275938 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00275930(void)
{

loc_00275930: ;
    MEM8(0x849E71) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00275940
 * Original: 0x00275940 - 0x00275A5E (286 bytes, 81 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00275940(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00275940: ;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_002581F0(); /* call 0x002581F0 */

loc_00275947: ;
    xmm0 = MEMF(0x649228); /* movss */
    edi = eax;
    SET_LO8(eax, MEM8(0x7819D5));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(esp + 4) = edi;
    MEMF(0x77615C) = xmm0; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00275976; /* je: equal / zero */

loc_00275966: ;
    xmm0 = MEMF(0x648F58); /* movss */
    MEMF(0x77615C) = xmm0; /* movss */

loc_00275976: ;
    SET_LO8(eax, MEM8(0x849E61));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00275A23; /* je: equal / zero */

loc_00275983: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x602BB8;
    MEM8(0x849E71) = 1;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_00275998: ;
    PUSH32(esp, 0x28);
    ebp = eax;
    PUSH32(esp, 0); sub_001FFB50(); /* call 0x001FFB50 */

loc_002759A1: ;
    esi = eax;
    esp = esp + 4;
    if (TEST_Z(esi, esi)) goto loc_002759E0; /* je: equal / zero */

loc_002759AA: ;
    MEM32(esi + 4) = 0;
    eax = 0x275930;
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = eax;
    edi = edi + 8;
    eax = esi + 0x1C;
    MEM32(esi) = 0x5F77D4;
    MEM8(esi + 0x10) = 0;
    PUSH32(esp, 0); sub_00060900(); /* call 0x00060900 */

loc_002759D1: ;
    MEM32(esi + 0x14) = ebp;
    MEM32(esi + 0x18) = edi;
    MEM32(esi + 0x24) = 0x100;
    goto loc_002759E2;

loc_002759E0: ;
    esi = 0; /* xor self */

loc_002759E2: ;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_0003C1E0(); /* call 0x0003C1E0 */

loc_002759E9: ;
    ebp = eax;
    eax = MEM32(ebp + 0x10);
    edi = MEM32(eax + 0x3C);
    ecx = MEM32(edi + 0x38);
    eax = eax + 0x3C;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM8(edi + 0x31) = 1;
    if (TEST_Z(ecx, ecx)) goto loc_00275A06; /* je: equal / zero */

loc_002759FF: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00275A06: ;
    MEM32(edi + 0x38) = esi;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(eax + 0x3C);
    edi = MEM32(esp + 0xC);
    eax = eax + 0x3C;
    POP32(esp, esi);
    MEM8(ecx + 0x30) = 1;
    MEM8(0x6BEDE4) = 0;
    POP32(esp, ebp);

loc_00275A23: ;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_0003C1E0(); /* call 0x0003C1E0 */

loc_00275A2A: ;
    eax = MEM32(eax + 0x10);
    edx = MEM32(eax + 0x3C);
    eax = eax + 0x3C;
    MEM8(edx + 0x30) = 1;
    SET_LO8(eax, MEM8(0x849E71));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_00275A5E(); return; } /* jne: not equal / not zero */

loc_00275A40: ;
    edi = edi + 8;
    PUSH32(esp, edi);
    edi = 0x86EDF0;
    PUSH32(esp, 0); sub_00289A80(); /* call 0x00289A80 */

loc_00275A4E: ;
    MEM8(0x6BEDE4) = 1;
    POP32(esp, edi);
    esp = esp + 4;
    g_seh_ebp = ebp; sub_0026A790(); return; /* tail jmp 0x0026A790 */

}

/**
 * sub_00275A70
 * Original: 0x00275A70 - 0x00275B2F (191 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00275A70(void)
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

loc_00275A70: ;
    PUSH32(esp, ecx);
    SET_LO8(eax, MEM8(0x7FA23C));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = 0.0f; /* xorps self = zero */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00275A85; /* jne: not equal / not zero */

loc_00275A7D: ;
    xmm0 = MEMF(0x7F9F48); /* movss */

loc_00275A85: ;
    ecx = MEM32(0x75E500);
    eax = 1;
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    MEMF(esp) = xmm0; /* movss */
    if (CMP_NE(ecx, eax)) goto loc_00275AB0; /* jne: not equal / not zero */

loc_00275A99: ;
    fp_push(MEMF(esp)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648E64)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_00275AEF; /* ja: above (unsigned >) */

loc_00275AB0: ;
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

loc_00275AEF: ;
    PUSH32(esp, 0); sub_0026A790(); /* call 0x0026A790 */

loc_00275AF4: ;
    ecx = ZX8(MEM8(0x862D13));
    SET_LO8(edx, MEM8(0x862D12));
    SET_LO8(eax, MEM8(0x862D11));
    MEM32(0x776238) = 0;
    MEM32(ecx * 4 + 0x77623C) = 0;
    MEM8(0x862D10) = 0;
    MEM8(0x862D30) = LO8(edx);
    MEM8(0x862D31) = LO8(eax);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00275B30
 * Original: 0x00275B30 - 0x00275BE9 (185 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00275B30(void)
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

loc_00275B30: ;
    PUSH32(esp, ecx);
    SET_LO8(eax, MEM8(0x7FA23C));
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    if (CMP_NE(LO8(eax), LO8(ebx))) goto loc_00275B48; /* jne: not equal / not zero */

loc_00275B40: ;
    xmm0 = MEMF(0x7F9F48); /* movss */

loc_00275B48: ;
    (void)0; /* cmp MEM32(0x75E500), ebx - flags set for next jcc */
    MEMF(esp + 4) = xmm0; /* movss */
    if (CMP_NE(MEM32(0x75E500), ebx)) goto loc_00275B6E; /* jne: not equal / not zero */

loc_00275B56: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648E64)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_00275BAA; /* ja: above (unsigned >) */

loc_00275B6E: ;
    ecx = MEM32(0x847024);
    eax = MEM32(ecx + 0x44);
    eax = MEM32(eax + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    eax = eax + 4;
    eax = MEM32(eax);
    PUSH32(esp, eax);
    eax = MEM32(ecx + 0x40);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    edx = edx | 0xFFFFFFFFu;
    eax = eax | 0xFFFFFFFFu;
    ecx = 0xAD0;
    MEMF(0x75E504) = xmm0; /* movss */
    MEM32(0x75E500) = ebx;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_00275BAA: ;
    PUSH32(esp, 0); sub_0026A790(); /* call 0x0026A790 */

loc_00275BAF: ;
    ecx = ZX8(MEM8(0x862D13));
    SET_LO8(edx, MEM8(0x862D12));
    SET_LO8(eax, MEM8(0x862D11));
    MEM32(0x776238) = ebx;
    MEM32(ecx * 4 + 0x77623C) = ebx;
    MEM8(0x862D10) = LO8(ebx);
    MEM8(0x849E72) = 1;
    MEM8(0x862D30) = LO8(edx);
    MEM8(0x862D31) = LO8(eax);
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
 * sub_00275BF0
 * Original: 0x00275BF0 - 0x00275E49 (601 bytes, 170 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00275BF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    float xmm0;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00275BF0: ;
    esp = esp - 0x210;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_002581F0(); /* call 0x002581F0 */

loc_00275BFF: ;
    edi = eax;
    SET_LO8(eax, MEM8(0x862D10));
    ebx = 0; /* xor self */
    if (TEST_Z(LO8(eax), 4)) goto loc_00275D00; /* je: equal / zero */

loc_00275C10: ;
    eax = MEM32(0x849E74);
    if (CMP_EQ(eax, ebx)) goto loc_00275D08; /* je: equal / zero */

loc_00275C1D: ;
    edx = ZX8(MEM8(0x862D13));
    ecx = ZX8(MEM8(eax + 5));
    edx++;
    ecx = ecx - edx;
    ecx = (uint32_t)(-(int32_t)ecx);
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ecx++;
    MEM32(esp + 0x10) = ecx;
    if ((ecx != 0)) goto loc_00275CFB; /* jne: not equal / not zero */

loc_00275C3A: ;
    if (CMP_BE(MEM32(eax + 8), ebx)) goto loc_00275D08; /* jbe: below or equal (unsigned <=) */

loc_00275C43: ;
    PUSH32(esp, 0); sub_0026A720(); /* call 0x0026A720 */

loc_00275C48: ;
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0); sub_001FFB50(); /* call 0x001FFB50 */

loc_00275C4F: ;
    esp = esp + 4;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    if (CMP_EQ(eax, ebx)) goto loc_00275CA4; /* je: equal / zero */

loc_00275C5A: ;
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x602B9C;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_00275C66: ;
    ebp = eax;
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x602B7C;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_00275C74: ;
    esi = eax;
    PUSH32(esp, ebx);
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x602B64;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_00275C83: ;
    esp = esp - 8;
    ecx = esp;
    edi = eax;
    eax = ecx;
    PUSH32(esp, 0); sub_00060900(); /* call 0x00060900 */

loc_00275C91: ;
    edx = esi;
    esi = MEM32(esp + 0x1C);
    eax = ebx;
    ecx = ebp;
    PUSH32(esp, 0); sub_002307B0(); /* call 0x002307B0 */

loc_00275CA0: ;
    esi = eax;
    goto loc_00275CA6;

loc_00275CA4: ;
    esi = 0; /* xor self */

loc_00275CA6: ;
    edi = esi + 0xC;
    ecx = esp + 0x14;
    eax = edi;
    MEM32(esp + 0x14) = 0x100;
    MEM32(esp + 0x18) = 0x275B30;
    MEM32(esp + 0x1C) = ebx;
    PUSH32(esp, 0); sub_002692D0(); /* call 0x002692D0 */

loc_00275CC8: ;
    ecx = esp + 0x14;
    eax = edi;
    MEM32(esp + 0x14) = 0x200;
    MEM32(esp + 0x18) = 0x275A70;
    MEM32(esp + 0x1C) = ebx;
    PUSH32(esp, 0); sub_002692D0(); /* call 0x002692D0 */

loc_00275CE7: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0026AA60(); /* call 0x0026AA60 */

loc_00275CED: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x210;
    esp += 4; return; /* ret */

loc_00275CFB: ;
    PUSH32(esp, 0); sub_002585F0(); /* call 0x002585F0 */

loc_00275D00: ;
    if (CMP_EQ(MEM8(0x849E72), LO8(ebx))) goto loc_00275D60; /* je: equal / zero */

loc_00275D08: ;
    ecx = 0x86EE40;
    MEM8(0x849E72) = LO8(ebx);
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00275D18: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    ecx = 0x86EE40;
    MEMF(0x86EE38) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00275D2E: ;
    MEMF(0x86EE3C) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_00258590(); /* call 0x00258590 */

loc_00275D39: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00275D60; /* jne: not equal / not zero */

loc_00275D3D: ;
    ecx = 0x602B4C;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_00275D47: ;
    esi = eax;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_0003C1E0(); /* call 0x0003C1E0 */

loc_00275D50: ;
    xmm0 = MEMF(0x648D20); /* movss */
    MEM32(eax + 0x1C) = esi;
    MEMF(eax + 0x20) = xmm0; /* movss */

loc_00275D60: ;
    eax = MEM32(0x849E74);
    if (CMP_EQ(eax, ebx)) { sub_00275E49(); return; } /* je: equal / zero */

loc_00275D6D: ;
    edx = ZX8(MEM8(0x862D13));
    ecx = ZX8(MEM8(eax + 5));
    edx++;
    ecx = ecx - edx;
    ecx = (uint32_t)(-(int32_t)ecx);
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ecx++;
    MEM32(esp + 0x10) = ecx;
    if ((ecx == 0)) { sub_00275E49(); return; } /* je: equal / zero */

loc_00275D8A: ;
    (void)0; /* cmp MEM8(eax + 0x3E), LO8(ebx) - flags set for next jcc */
    SET_LO8(eax, (CMP_NE(MEM8(eax + 0x3E), LO8(ebx))) ? 1 : 0); /* setne */
    if (CMP_NE(LO8(eax), LO8(ebx))) goto loc_00275DA4; /* jne: not equal / not zero */

loc_00275D94: ;
    PUSH32(esp, 0); sub_002585F0(); /* call 0x002585F0 */

loc_00275D99: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x210;
    esp += 4; return; /* ret */

loc_00275DA4: ;
    if (CMP_EQ(MEM8(0x849C0E), LO8(ebx))) goto loc_00275DC1; /* je: equal / zero */

loc_00275DAC: ;
    PUSH32(esp, 0); sub_002585F0(); /* call 0x002585F0 */

loc_00275DB1: ;
    PUSH32(esp, 0); sub_0026A790(); /* call 0x0026A790 */

loc_00275DB6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x210;
    esp += 4; return; /* ret */

loc_00275DC1: ;
    ecx = 0x86EE40;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00275DCB: ;
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00275DE2: ;
    PUSH32(esp, eax);
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x602B30;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_00275DEF: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x602B1C);
    eax = esp + 0x2C;
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046EE4A(); /* call 0x0046EE4A */

loc_00275E04: ;
    esp = esp + 0x14;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x602B04;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_00275E15: ;
    PUSH32(esp, eax);
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x602AE8;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_00275E22: ;
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_0003C1E0(); /* call 0x0003C1E0 */

loc_00275E2F: ;
    ebx = eax;
    PUSH32(esp, 0); sub_00232B60(); /* call 0x00232B60 */

loc_00275E36: ;
    MEM8(0x862D10) = 0;
    MEM8(0x863AF9) = 1;
    g_seh_ebp = ebp; sub_00275ECA(); return; /* tail jmp 0x00275ECA */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00275EF0
 * Original: 0x00275EF0 - 0x00275FC1 (209 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00275EF0(void)
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

loc_00275EF0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00427890(); /* call 0x00427890 */

loc_00275EF8: ;
    eax = (uint32_t)(int32_t)SMEM8(0x862D2C);
    esi = ZX8(MEM8(0x862D13));
    PUSH32(esp, 0); sub_004275E0(); /* call 0x004275E0 */

loc_00275F0B: ;
    SET_LO8(eax, MEM8(0x7FA23C));
    xmm0 = 0.0f; /* xorps self = zero */
    ebx = 0; /* xor self */
    if (CMP_NE(LO8(eax), LO8(ebx))) goto loc_00275F21; /* jne: not equal / not zero */

loc_00275F19: ;
    xmm0 = MEMF(0x7F9F48); /* movss */

loc_00275F21: ;
    (void)0; /* cmp MEM32(0x75E500), ebx - flags set for next jcc */
    MEMF(esp + 8) = xmm0; /* movss */
    if (CMP_NE(MEM32(0x75E500), ebx)) goto loc_00275F47; /* jne: not equal / not zero */

loc_00275F2F: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648E64)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_00275F83; /* ja: above (unsigned >) */

loc_00275F47: ;
    ecx = MEM32(0x847024);
    eax = MEM32(ecx + 0x44);
    eax = MEM32(eax + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    eax = eax + 4;
    eax = MEM32(eax);
    PUSH32(esp, eax);
    eax = MEM32(ecx + 0x40);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    edx = edx | 0xFFFFFFFFu;
    eax = eax | 0xFFFFFFFFu;
    ecx = 0xAD0;
    MEMF(0x75E504) = xmm0; /* movss */
    MEM32(0x75E500) = ebx;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_00275F83: ;
    PUSH32(esp, 0); sub_0026A790(); /* call 0x0026A790 */

loc_00275F88: ;
    PUSH32(esp, 0); sub_0026A790(); /* call 0x0026A790 */

loc_00275F8D: ;
    ecx = ZX8(MEM8(0x862D13));
    SET_LO8(edx, MEM8(0x862D12));
    SET_LO8(eax, MEM8(0x862D11));
    MEM32(0x776238) = ebx;
    POP32(esp, esi);
    MEM32(ecx * 4 + 0x77623C) = ebx;
    MEM8(0x862D10) = LO8(ebx);
    MEM8(0x862D30) = LO8(edx);
    MEM8(0x862D31) = LO8(eax);
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
 * sub_00275FD0
 * Original: 0x00275FD0 - 0x002760A1 (209 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00275FD0(void)
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

loc_00275FD0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00427890(); /* call 0x00427890 */

loc_00275FD8: ;
    eax = (uint32_t)(int32_t)SMEM8(0x862D2C);
    esi = ZX8(MEM8(0x862D13));
    PUSH32(esp, 0); sub_004274D0(); /* call 0x004274D0 */

loc_00275FEB: ;
    SET_LO8(eax, MEM8(0x7FA23C));
    xmm0 = 0.0f; /* xorps self = zero */
    ebx = 0; /* xor self */
    if (CMP_NE(LO8(eax), LO8(ebx))) goto loc_00276001; /* jne: not equal / not zero */

loc_00275FF9: ;
    xmm0 = MEMF(0x7F9F48); /* movss */

loc_00276001: ;
    (void)0; /* cmp MEM32(0x75E500), ebx - flags set for next jcc */
    MEMF(esp + 8) = xmm0; /* movss */
    if (CMP_NE(MEM32(0x75E500), ebx)) goto loc_00276027; /* jne: not equal / not zero */

loc_0027600F: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648E64)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_00276063; /* ja: above (unsigned >) */

loc_00276027: ;
    ecx = MEM32(0x847024);
    eax = MEM32(ecx + 0x44);
    eax = MEM32(eax + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    eax = eax + 4;
    eax = MEM32(eax);
    PUSH32(esp, eax);
    eax = MEM32(ecx + 0x40);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    edx = edx | 0xFFFFFFFFu;
    eax = eax | 0xFFFFFFFFu;
    ecx = 0xAD0;
    MEMF(0x75E504) = xmm0; /* movss */
    MEM32(0x75E500) = ebx;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_00276063: ;
    PUSH32(esp, 0); sub_0026A790(); /* call 0x0026A790 */

loc_00276068: ;
    PUSH32(esp, 0); sub_0026A790(); /* call 0x0026A790 */

loc_0027606D: ;
    ecx = ZX8(MEM8(0x862D13));
    SET_LO8(edx, MEM8(0x862D12));
    SET_LO8(eax, MEM8(0x862D11));
    MEM32(0x776238) = ebx;
    POP32(esp, esi);
    MEM32(ecx * 4 + 0x77623C) = ebx;
    MEM8(0x862D10) = LO8(ebx);
    MEM8(0x862D30) = LO8(edx);
    MEM8(0x862D31) = LO8(eax);
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
 * sub_002760B0
 * Original: 0x002760B0 - 0x00276359 (681 bytes, 200 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002760B0(void)
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

loc_002760B0: ;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 3);
    PUSH32(esp, 0x4A);
    PUSH32(esp, 0); sub_00276770(); /* call 0x00276770 */

loc_002760C0: ;
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002760CE; /* je: equal / zero */

loc_002760C7: ;
    SET_LO8(ebx, 0x4A);
    PUSH32(esp, 0); sub_0026A910(); /* call 0x0026A910 */

loc_002760CE: ;
    edx = 0x1F5;
    PUSH32(esp, 0); sub_00277820(); /* call 0x00277820 */

loc_002760D8: ;
    eax = (uint32_t)(int32_t)SMEM8(0x862D2C);
    edi = ZX8(MEM8(0x862D13));
    esi = 0xFFFF;
    PUSH32(esp, 0); sub_00426E20(); /* call 0x00426E20 */

loc_002760F0: ;
    if (CMP_NE(eax, 3)) goto loc_002760FA; /* jne: not equal / not zero */

loc_002760F5: ;
    esi = 0xFFF3;

loc_002760FA: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x16);
    PUSH32(esp, esi);
    PUSH32(esp, 3);
    PUSH32(esp, 0x1F6);
    ecx = 0; /* xor self */
    PUSH32(esp, 0); sub_00277940(); /* call 0x00277940 */

loc_0027610F: ;
    SET_LO8(eax, MEM8(0x862D10));
    esp = esp + 0x18;
    if (TEST_Z(LO8(eax), 4)) goto loc_00276287; /* je: equal / zero */

loc_0027611F: ;
    PUSH32(esp, 0); sub_0026A720(); /* call 0x0026A720 */

loc_00276124: ;
    eax = (uint32_t)(int32_t)SMEM8(0x862D11);
    if (CMP_A(eax, 3)) goto loc_00276351; /* ja: above (unsigned >) */

loc_00276134: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x27635C); /* switch: 4 entries, 4 targets */
    if (_jt == 0x0027613Bu) goto loc_0027613B;
    if (_jt == 0x0027614Au) goto loc_0027614A;
    if (_jt == 0x00276159u) goto loc_00276159;
    if (_jt == 0x00276211u) goto loc_00276211;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0027613B: ;
    MEM8(0x862D12) = 0x39;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_0027614A: ;
    MEM8(0x862D12) = 0xF;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_00276159: ;
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0); sub_001FFB50(); /* call 0x001FFB50 */

loc_00276160: ;
    esp = esp + 4;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    if (TEST_Z(eax, eax)) goto loc_002761B5; /* je: equal / zero */

loc_0027616B: ;
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x602A54;
    ebx = 0; /* xor self */
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_00276179: ;
    ebp = eax;
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x602A28;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_00276187: ;
    esi = eax;
    PUSH32(esp, ebx);
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x602A00;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_00276196: ;
    esp = esp - 8;
    edi = eax;
    eax = esp;
    PUSH32(esp, 0); sub_00060900(); /* call 0x00060900 */

loc_002761A2: ;
    edx = esi;
    esi = MEM32(esp + 0x1C);
    eax = ebx;
    ecx = ebp;
    PUSH32(esp, 0); sub_002307B0(); /* call 0x002307B0 */

loc_002761B1: ;
    esi = eax;
    goto loc_002761B7;

loc_002761B5: ;
    esi = 0; /* xor self */

loc_002761B7: ;
    MEM32(esp + 0x18) = 0x275FD0;

loc_002761BF: ;
    edi = esi + 0xC;
    ecx = esp + 0x14;
    eax = edi;
    MEM32(esp + 0x14) = 0x100;
    MEM32(esp + 0x1C) = 0;
    PUSH32(esp, 0); sub_002692D0(); /* call 0x002692D0 */

loc_002761DD: ;
    ecx = esp + 0x14;
    eax = edi;
    MEM32(esp + 0x14) = 0x200;
    MEM32(esp + 0x18) = 0x275A70;
    MEM32(esp + 0x1C) = 0;
    PUSH32(esp, 0); sub_002692D0(); /* call 0x002692D0 */

loc_00276200: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0026AA60(); /* call 0x0026AA60 */

loc_00276206: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_00276211: ;
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0); sub_001FFB50(); /* call 0x001FFB50 */

loc_00276218: ;
    esp = esp + 4;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    if (TEST_Z(eax, eax)) goto loc_00276278; /* je: equal / zero */

loc_00276223: ;
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x602A54;
    ebx = 0; /* xor self */
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_00276231: ;
    ebp = eax;
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x602A28;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_0027623F: ;
    esi = eax;
    PUSH32(esp, ebx);
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x6029E4;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_0027624E: ;
    esp = esp - 8;
    edi = eax;
    eax = esp;
    PUSH32(esp, 0); sub_00060900(); /* call 0x00060900 */

loc_0027625A: ;
    edx = esi;
    esi = MEM32(esp + 0x1C);
    eax = ebx;
    ecx = ebp;
    PUSH32(esp, 0); sub_002307B0(); /* call 0x002307B0 */

loc_00276269: ;
    esi = eax;
    MEM32(esp + 0x18) = 0x275EF0;
    goto loc_002761BF;

loc_00276278: ;
    esi = 0; /* xor self */
    MEM32(esp + 0x18) = 0x275EF0;
    goto loc_002761BF;

loc_00276287: ;
    if (TEST_Z(LO8(eax), 8)) goto loc_00276351; /* je: equal / zero */

loc_0027628F: ;
    PUSH32(esp, 0); sub_00427890(); /* call 0x00427890 */

loc_00276294: ;
    eax = ZX8(MEM8(0x862D13));
    PUSH32(esp, 0); sub_004200A0(); /* call 0x004200A0 */

loc_002762A0: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    ebx = 1;
    if (TEST_Z(eax, eax)) goto loc_002762D2; /* je: equal / zero */

loc_002762A9: ;
    esi = ZX8(MEM8(0x862D13));
    ebp = (uint32_t)(int32_t)SMEM8(0x862D2C);
    PUSH32(esp, 0); sub_00426DB0(); /* call 0x00426DB0 */

loc_002762BC: ;
    if (CMP_GE(ebp, eax)) goto loc_002762D2; /* jge: greater or equal (signed >=) */

loc_002762C0: ;
    edi = ZX8(MEM8(0x862D13));
    PUSH32(esp, ebx);
    eax = ebp;
    PUSH32(esp, 0); sub_00427360(); /* call 0x00427360 */

loc_002762CF: ;
    esp = esp + 4;

loc_002762D2: ;
    SET_LO8(eax, MEM8(0x7FA23C));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = 0.0f; /* xorps self = zero */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002762E6; /* jne: not equal / not zero */

loc_002762DE: ;
    xmm0 = MEMF(0x7F9F48); /* movss */

loc_002762E6: ;
    (void)0; /* cmp MEM32(0x75E500), ebx - flags set for next jcc */
    MEMF(esp + 0x10) = xmm0; /* movss */
    if (CMP_NE(MEM32(0x75E500), ebx)) goto loc_0027630C; /* jne: not equal / not zero */

loc_002762F4: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648E64)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_0027634C; /* ja: above (unsigned >) */

loc_0027630C: ;
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

loc_0027634C: ;
    PUSH32(esp, 0); sub_0026A790(); /* call 0x0026A790 */

loc_00276351: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00276370
 * Original: 0x00276370 - 0x0027676E (1022 bytes, 319 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00276370(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00276370: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF8u;
    esp = esp - 0x508;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = 0; /* xor self */
    eax = 0; /* xor self */
    MEM16(esp + 0x18) = LO16(ebp);
    ecx = 0xFF;
    edi = esp + 0x1A;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += 2; /* stosw */
    SET_LO8(eax, MEM8(0x87BF94));
    ebx = 0; /* xor self */
    (void)0; /* test LO8(eax), 1 - flags set for next jcc */
    MEM32(esp + 0x10) = ebx;
    MEM32(esp + 0x14) = ebp;
    if (TEST_NZ(LO8(eax), 1)) goto loc_002763CC; /* jne: not equal / not zero */

loc_002763A9: ;
    eax = MEM32(0x87BF94);
    eax = eax | 1;
    ecx = 0x87BF90;
    MEM32(0x87BF94) = eax;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_002763C0: ;
    MEMF(0x87BF88) = (float)fp_top(); fp_pop(); /* fst */
    MEMF(0x87BF8C) = (float)fp_top(); fp_popp(); /* fstp */

loc_002763CC: ;
    SET_LO8(eax, MEM8(0x849C0E));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0027675C; /* jne: not equal / not zero */

loc_002763D9: ;
    eax = ZX8(MEM8(0x862D13));
    PUSH32(esp, 0); sub_004200A0(); /* call 0x004200A0 */

loc_002763E5: ;
    if (TEST_Z(eax, eax)) goto loc_0027675C; /* je: equal / zero */

loc_002763ED: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x4A);
    PUSH32(esp, 0); sub_00276770(); /* call 0x00276770 */

loc_002763F6: ;
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0027640C; /* je: equal / zero */

loc_002763FD: ;
    SET_LO8(ebx, 0x4A);
    PUSH32(esp, 0); sub_0026A910(); /* call 0x0026A910 */

loc_00276404: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0027640C: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x3B);
    PUSH32(esp, 0); sub_00276770(); /* call 0x00276770 */

loc_00276415: ;
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0027642B; /* je: equal / zero */

loc_0027641C: ;
    SET_LO8(ebx, 0x3B);
    PUSH32(esp, 0); sub_0026A910(); /* call 0x0026A910 */

loc_00276423: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0027642B: ;
    eax = (uint32_t)(int32_t)SMEM8(0x862D2C);
    esi = ZX8(MEM8(0x862D13));
    PUSH32(esp, 0); sub_004270D0(); /* call 0x004270D0 */

loc_0027643E: ;
    PUSH32(esp, eax);
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x6029CC;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_0027644B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x6029BC);
    eax = esp + 0x424;
    PUSH32(esp, 0x80);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046EE4A(); /* call 0x0046EE4A */

loc_00276463: ;
    eax = MEM32(0x84C13C);
    esp = esp + 0x14;
    if (CMP_NE(eax, 2)) goto loc_0027650F; /* jne: not equal / not zero */

loc_00276474: ;
    eax = MEM32(0x82E7DC);
    if (TEST_Z(eax, eax)) goto loc_002764A6; /* je: equal / zero */

loc_0027647D: ;
    PUSH32(esp, 0x82DB38);
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x602D28;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_0027648E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x6029B0);
    ecx = esp + 0x24;
    PUSH32(esp, 0x200);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046EE4A(); /* call 0x0046EE4A */

loc_002764A3: ;
    esp = esp + 0x14;

loc_002764A6: ;
    eax = ZX8(MEM8(0x862D13));
    PUSH32(esp, 0); sub_00420110(); /* call 0x00420110 */

loc_002764B2: ;
    if (TEST_Z(eax, eax)) goto loc_0027650F; /* je: equal / zero */

loc_002764B6: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0); sub_00427870(); /* call 0x00427870 */

loc_002764BF: ;
    ebx = MEM32(esp + 0x10);
    ebp = eax;
    if (TEST_Z(ebp, ebp)) goto loc_0027650F; /* je: equal / zero */

loc_002764C9: ;
    if (CMP_BE(ebx & ebx, 0)) goto loc_0027650F; /* jbe: below or equal (unsigned <=) */

loc_002764CD: ;
    eax = MEM32(0x84C144);
    (void)0; /* test eax, eax - flags set for next jcc */
    ecx = 0x602994;
    if (TEST_NZ(eax, eax)) goto loc_002764E0; /* jne: not equal / not zero */

loc_002764DB: ;
    ecx = 0x602974;

loc_002764E0: ;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_002764E7: ;
    PUSH32(esp, eax);
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x602D10;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_002764F4: ;
    PUSH32(esp, eax);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0x602960);
    eax = edx;
    PUSH32(esp, 0x200);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046EE4A(); /* call 0x0046EE4A */

loc_0027650C: ;
    esp = esp + 0x18;

loc_0027650F: ;
    ecx = MEM32(0x849E74);
    if (TEST_Z(ecx, ecx)) goto loc_00276654; /* je: equal / zero */

loc_0027651D: ;
    eax = ZX8(MEM8(0x862D13));
    edx = ZX8(MEM8(ecx + 6));
    eax++;
    edx = edx - eax;
    edx = (uint32_t)(-(int32_t)edx);
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    edx++;
    MEM32(esp + 0x10) = edx;
    if ((edx == 0)) goto loc_00276654; /* je: equal / zero */

loc_0027653A: ;
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x602940;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_00276546: ;
    ecx = 0x87BF90;
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00276554: ;
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    ebx = ebx + 0xFFFFFFA4u;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    MEM32(esp + 0x10) = ebx;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    if (CMP_GE(ebx & ebx, 0)) goto loc_0027656F; /* jge: greater or equal (signed >=) */

loc_00276569: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_0027656F: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x602924;
    fp_st1() /= fp_top(); fp_pop(); /* fdivp */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_0027658D: ;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x602918);
    edx = ecx;
    PUSH32(esp, 0x200);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046EE4A(); /* call 0x0046EE4A */

loc_002765A5: ;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    esp = esp + 0x14;
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_002765B7: ;
    esi = eax;
    if (CMP_L(esi, 0x10)) goto loc_002765C3; /* jl: less (signed <) */

loc_002765BE: ;
    esi = 0x10;

loc_002765C3: ;
    if (CMP_LE(esi & esi, 0)) goto loc_002765E5; /* jle: less or equal (signed <=) */

loc_002765C7: ;
    edi = esi;
    /* nop */

loc_002765D0: ;
    eax = esp + 0x18;
    PUSH32(esp, 0x602914);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E470(); /* call 0x0046E470 */

loc_002765DF: ;
    esp = esp + 8;
    edi--;
    if ((edi != 0)) goto loc_002765D0; /* jne: not equal / not zero */

loc_002765E5: ;
    if (CMP_GE(esi, 0x10)) goto loc_00276606; /* jge: greater or equal (signed >=) */

loc_002765EA: ;
    edi = 0x10;
    edi = edi - esi;

loc_002765F1: ;
    ecx = esp + 0x18;
    PUSH32(esp, 0x5F92B4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046E470(); /* call 0x0046E470 */

loc_00276600: ;
    esp = esp + 8;
    edi--;
    if ((edi != 0)) goto loc_002765F1; /* jne: not equal / not zero */

loc_00276606: ;
    (void)0; /* test MEM8(0x862D10), 4 - flags set for next jcc */
    ecx = MEM32(0x849E74);
    if (TEST_Z(MEM8(0x862D10), 4)) goto loc_00276644; /* je: equal / zero */

loc_00276615: ;
    if (TEST_Z(ecx, ecx)) goto loc_00276644; /* je: equal / zero */

loc_00276619: ;
    SET_LO8(eax, MEM8(ecx + 6));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00276644; /* je: equal / zero */

loc_00276620: ;
    eax = ZX8(MEM8(0x862D13));
    eax++;
    edx = eax + eax * 4;
    eax = (uint32_t)(int32_t)SMEM8(ecx + edx * 8);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_00276644; /* je: equal / zero */

loc_00276634: ;
    PUSH32(esp, eax);
    eax = MEM32(ecx + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0043447A(); /* call 0x0043447A */

loc_0027663E: ;
    ecx = MEM32(0x849E74);

loc_00276644: ;
    MEM8(0x862D10) = 0;
    MEM8(0x863AF9) = 1;
    goto loc_0027669E;

loc_00276654: ;
    eax = MEM32(0x84C144);
    if (TEST_NZ(eax, eax)) goto loc_0027669E; /* jne: not equal / not zero */

loc_0027665D: ;
    if (CMP_BE(ebx & ebx, 0)) goto loc_0027669E; /* jbe: below or equal (unsigned <=) */

loc_00276661: ;
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x6028F0;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_0027666D: ;
    MEM32(esp + 0x14) = eax;
    if (TEST_Z(MEM8(0x862D10), 4)) goto loc_00276698; /* je: equal / zero */

loc_0027667A: ;
    ecx = ZX8(MEM8(0x862D13));
    PUSH32(esp, ecx);
    eax = ebx;
    ecx = ebp;
    PUSH32(esp, 0); sub_0027B060(); /* call 0x0027B060 */

loc_0027668B: ;
    esp = esp + 4;
    esi = 0x87BF88;
    PUSH32(esp, 0); sub_00278CD0(); /* call 0x00278CD0 */

loc_00276698: ;
    ecx = MEM32(0x849E74);

loc_0027669E: ;
    if (CMP_EQ(MEM16(esp + 0x18), 0)) goto loc_0027672E; /* je: equal / zero */

loc_002766AA: ;
    if (TEST_Z(ecx, ecx)) goto loc_002766CB; /* je: equal / zero */

loc_002766AE: ;
    eax = ZX8(MEM8(0x862D13));
    edx = ZX8(MEM8(ecx + 6));
    eax++;
    edx = edx - eax;
    edx = (uint32_t)(-(int32_t)edx);
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    edx++;
    MEM32(esp + 0x10) = edx;
    if ((edx == 0)) goto loc_002766CB; /* je: equal / zero */

loc_002766C7: ;
    esi = 0; /* xor self */
    goto loc_002766DF;

loc_002766CB: ;
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x603060;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_002766D7: ;
    ecx = MEM32(0x849E74);
    esi = eax;

loc_002766DF: ;
    if (TEST_Z(ecx, ecx)) goto loc_00276700; /* je: equal / zero */

loc_002766E3: ;
    ecx = ZX8(MEM8(ecx + 6));
    edx = ZX8(MEM8(0x862D13));
    edx++;
    ecx = ecx - edx;
    ecx = (uint32_t)(-(int32_t)ecx);
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ecx++;
    MEM32(esp + 0x10) = ecx;
    if ((ecx == 0)) goto loc_00276700; /* je: equal / zero */

loc_002766FC: ;
    eax = 0; /* xor self */
    goto loc_0027670C;

loc_00276700: ;
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x6028DC;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_0027670C: ;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    ecx = esp + 0x424;
    PUSH32(esp, ecx);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_0003C1E0(); /* call 0x0003C1E0 */

loc_00276727: ;
    ebx = eax;
    PUSH32(esp, 0); sub_00232B60(); /* call 0x00232B60 */

loc_0027672E: ;
    SET_LO8(eax, MEM8(0x862D10));
    if (TEST_Z(LO8(eax), 0x40)) goto loc_0027674B; /* je: equal / zero */

loc_00276737: ;
    PUSH32(esp, 0); sub_0026A720(); /* call 0x0026A720 */

loc_0027673C: ;
    MEM8(0x862D12) = 0xF;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0027674B: ;
    if (TEST_Z(LO8(eax), 8)) goto loc_00276766; /* je: equal / zero */

loc_0027674F: ;
    PUSH32(esp, 0); sub_0026A790(); /* call 0x0026A790 */

loc_00276754: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0027675C: ;
    PUSH32(esp, 0); sub_00427890(); /* call 0x00427890 */

loc_00276761: ;
    PUSH32(esp, 0); sub_0026A790(); /* call 0x0026A790 */

loc_00276766: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
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
 * sub_00276770
 * Original: 0x00276770 - 0x002767A2 (50 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00276770(void)
{
    int _flags = 0; /* fallback flag var */

loc_00276770: ;
    SET_LO8(ecx, MEM8(0x849E62));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    SET_LO8(edx, MEM8(esp + 4));
    PUSH32(esp, ebx);
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0027679E; /* je: equal / zero */

loc_0027677F: ;
    ecx = SX8(LO8(ecx));
    eax = 0; /* xor self */
    if (CMP_LE(ecx & ecx, 0)) goto loc_0027679E; /* jle: less or equal (signed <=) */

loc_00276788: ;
    goto loc_00276790;

    /* nop */

loc_00276790: ;
    if (CMP_EQ(MEM8(eax * 2 + 0x77A4D0), LO8(edx))) { sub_002767A2(); return; } /* je: equal / zero */

loc_00276799: ;
    eax++;
    if (CMP_L(eax, ecx)) goto loc_00276790; /* jl: less (signed <) */

loc_0027679E: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002767F0
 * Original: 0x002767F0 - 0x0027681A (42 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002767F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002767F0: ;
    SET_LO8(eax, MEM8(0x849C0E));
    esp = esp - 0x410;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = 0; /* xor self */
    (void)0; /* cmp LO8(eax), LO8(ebx) - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(LO8(eax), LO8(ebx))) { sub_0027681A(); return; } /* je: equal / zero */

loc_00276805: ;
    PUSH32(esp, 0); sub_0026A790(); /* call 0x0026A790 */

loc_0027680A: ;
    PUSH32(esp, 0); sub_00427890(); /* call 0x00427890 */

loc_0027680F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x410;
    esp += 4; return; /* ret */

}

/**
 * sub_00276BA0
 * Original: 0x00276BA0 - 0x00276BE4 (68 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00276BA0(void)
{

loc_00276BA0: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0026A790(); /* call 0x0026A790 */

loc_00276BA6: ;
    PUSH32(esp, 0); sub_0026A790(); /* call 0x0026A790 */

loc_00276BAB: ;
    ecx = ZX8(MEM8(0x862D13));
    eax = 0; /* xor self */
    MEM32(0x776238) = eax;
    MEM32(ecx * 4 + 0x77623C) = eax;
    MEM8(0x862D10) = LO8(eax);
    PUSH32(esp, 0); sub_00427890(); /* call 0x00427890 */

loc_00276BCA: ;
    eax = (uint32_t)(int32_t)SMEM8(0x862D2C);
    edi = ZX8(MEM8(0x862D13));
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00427360(); /* call 0x00427360 */

loc_00276BDF: ;
    esp = esp + 4;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00276BF0
 * Original: 0x00276BF0 - 0x00276C15 (37 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00276BF0(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00276BF0: ;
    eax = MEM32(0x862D1C);
    ecx = MEM32(0x862D18);
    PUSH32(esp, esi);
    esi = ZX8(MEM8(0x862D13));
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00423620(); /* call 0x00423620 */

loc_00276C0C: ;
    esp = esp + 0xC;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00276BA0(); return; /* tail jmp 0x00276BA0 */

}

/**
 * sub_00276CA0
 * Original: 0x00276CA0 - 0x00276CC7 (39 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00276CA0(void)
{

loc_00276CA0: ;
    ecx = ZX8(MEM8(0x862D13));
    eax = 0; /* xor self */
    MEM32(0x776238) = eax;
    MEM32(ecx * 4 + 0x77623C) = eax;
    MEM8(0x862D10) = LO8(eax);
    MEM8(0x862D12) = 0x44;
    MEM8(0x862D11) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_00276CD0
 * Original: 0x00276CD0 - 0x00276CD5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00276CD0(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00276CD0: ;
    g_seh_ebp = ebp; sub_0026A790(); return; /* tail jmp 0x0026A790 */

}

/**
 * sub_00276CE0
 * Original: 0x00276CE0 - 0x00276D75 (149 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00276CE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00276CE0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    esp = esp - 0x25C;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    edx = eax;
    edx = edx | ecx;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if ((edx != 0)) goto loc_00276D03; /* jne: not equal / not zero */

loc_00276CF8: ;
    eax = MEM32(0x862C70);
    ecx = MEM32(0x862C74);

loc_00276D03: ;
    PUSH32(esp, 0x28);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = ZX8(MEM8(0x862D13));
    PUSH32(esp, 0); sub_00422B70(); /* call 0x00422B70 */

loc_00276D18: ;
    esp = esp + 0x10;
    eax = esp + 0x1C;
    PUSH32(esp, 0x603A40);
    PUSH32(esp, eax);
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x60265C;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_00276D31: ;
    PUSH32(esp, eax);
    edi = esp + 0x78;
    PUSH32(esp, 0); sub_0026A9F0(); /* call 0x0026A9F0 */

loc_00276D3B: ;
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0); sub_001FFB50(); /* call 0x001FFB50 */

loc_00276D42: ;
    esi = eax;
    ebx = 0; /* xor self */
    esp = esp + 0x10;
    if (CMP_EQ(esi, ebx)) { sub_00276D75(); return; } /* je: equal / zero */

loc_00276D4D: ;
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x5F79E0;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_00276D59: ;
    PUSH32(esp, ebx);
    esp = esp - 8;
    ebp = eax;
    eax = esp;
    PUSH32(esp, 0); sub_00060900(); /* call 0x00060900 */

loc_00276D66: ;
    eax = ebx;
    ecx = ebp;
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_002307B0(); /* call 0x002307B0 */

loc_00276D71: ;
    esi = eax;
    g_seh_ebp = ebp; sub_00276D77(); return; /* tail jmp 0x00276D77 */

}

/**
 * sub_00276DB0
 * Original: 0x00276DB0 - 0x00276DD3 (35 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00276DB0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00276DB0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 3);
    PUSH32(esp, 0x4A);
    PUSH32(esp, 0); sub_00276770(); /* call 0x00276770 */

loc_00276DBA: ;
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00276DD3(); return; } /* je: equal / zero */

loc_00276DC1: ;
    SET_LO8(eax, MEM8(0x75A168));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_00276DD3(); return; } /* jne: not equal / not zero */

loc_00276DCA: ;
    SET_LO8(ebx, 0x4A);
    PUSH32(esp, 0); sub_0026A910(); /* call 0x0026A910 */

loc_00276DD1: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00276F60
 * Original: 0x00276F60 - 0x00276F7A (26 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00276F60(void)
{
    int _flags = 0; /* fallback flag var */

loc_00276F60: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x4A);
    PUSH32(esp, 0); sub_00276770(); /* call 0x00276770 */

loc_00276F69: ;
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00276F7A(); return; } /* je: equal / zero */

loc_00276F70: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, 0x4A);
    PUSH32(esp, 0); sub_0026A910(); /* call 0x0026A910 */

loc_00276F78: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002770B0
 * Original: 0x002770B0 - 0x002770CA (26 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002770B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002770B0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 3);
    PUSH32(esp, 0x4A);
    PUSH32(esp, 0); sub_00276770(); /* call 0x00276770 */

loc_002770BA: ;
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_002770CA(); return; } /* je: equal / zero */

loc_002770C1: ;
    SET_LO8(ebx, 0x4A);
    PUSH32(esp, 0); sub_0026A910(); /* call 0x0026A910 */

loc_002770C8: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002771C0
 * Original: 0x002771C0 - 0x00277399 (473 bytes, 142 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002771C0(void)
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

loc_002771C0: ;
    PUSH32(esp, ecx);
    SET_LO8(eax, MEM8(0x776238));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    SET_LO8(ebx, 0); /* xor self */
    (void)0; /* test LO8(eax), 4 - flags set for next jcc */
    PUSH32(esp, edi);
    edi = 3;
    esi = 5;
    if (TEST_Z(LO8(eax), 4)) goto loc_0027726D; /* je: equal / zero */

loc_002771DD: ;
    eax = MEM32(0x875844);
    eax--;
    MEM32(0x875844) = eax;
    if (((int32_t)eax >= 0)) goto loc_002771F1; /* jns: not sign (positive) */

loc_002771EA: ;
    eax = eax + edi;
    MEM32(0x875844) = eax;

loc_002771F1: ;
    SET_LO8(eax, MEM8(0x7FA23C));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = 0.0f; /* xorps self = zero */
    SET_LO8(ebx, 1);
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00277207; /* jne: not equal / not zero */

loc_002771FF: ;
    xmm0 = MEMF(0x7F9F48); /* movss */

loc_00277207: ;
    (void)0; /* cmp MEM32(0x75E500), esi - flags set for next jcc */
    MEMF(esp + 0xC) = xmm0; /* movss */
    if (CMP_NE(MEM32(0x75E500), esi)) goto loc_0027722D; /* jne: not equal / not zero */

loc_00277215: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648E64)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_0027726D; /* ja: above (unsigned >) */

loc_0027722D: ;
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
    ecx = 0xAD9;
    MEMF(0x75E504) = xmm0; /* movss */
    MEM32(0x75E500) = esi;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_0027726D: ;
    if (TEST_Z(MEM8(0x776238), 8)) goto loc_0027730C; /* je: equal / zero */

loc_0027727A: ;
    eax = MEM32(0x875844);
    eax++;
    (void)0; /* cmp eax, edi - flags set for next jcc */
    MEM32(0x875844) = eax;
    if (CMP_L(eax, edi)) goto loc_00277290; /* jl: less (signed <) */

loc_00277289: ;
    eax = eax - edi;
    MEM32(0x875844) = eax;

loc_00277290: ;
    SET_LO8(eax, MEM8(0x7FA23C));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = 0.0f; /* xorps self = zero */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002772A4; /* jne: not equal / not zero */

loc_0027729C: ;
    xmm0 = MEMF(0x7F9F48); /* movss */

loc_002772A4: ;
    (void)0; /* cmp MEM32(0x75E500), esi - flags set for next jcc */
    MEMF(esp + 0xC) = xmm0; /* movss */
    if (CMP_NE(MEM32(0x75E500), esi)) goto loc_002772CA; /* jne: not equal / not zero */

loc_002772B2: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648E64)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_00277310; /* ja: above (unsigned >) */

loc_002772CA: ;
    ecx = MEM32(0x847024);
    eax = MEM32(ecx + 0x44);
    eax = MEM32(eax + 0xC);
    ecx = MEM32(ecx + 0x40);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = eax + 4;
    eax = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, ecx);
    edx = edx | 0xFFFFFFFFu;
    eax = eax | 0xFFFFFFFFu;
    ecx = 0xAD9;
    MEMF(0x75E504) = xmm0; /* movss */
    MEM32(0x75E500) = esi;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_0027730A: ;
    goto loc_00277310;

loc_0027730C: ;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_00277328; /* je: equal / zero */

loc_00277310: ;
    edx = MEM32(0x875844);
    PUSH32(esp, 0x1F);
    edi = esp + 0x10;
    MEM32(esp + 0x10) = edx;
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_00277325: ;
    esp = esp + 4;

loc_00277328: ;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_0003C1E0(); /* call 0x0003C1E0 */

loc_0027732F: ;
    eax = MEM32(eax + 0x10);
    eax = eax + 0x34;
    eax = MEM32(eax);
    MEM8(eax + 0x30) = 1;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_0003C1E0(); /* call 0x0003C1E0 */

loc_00277342: ;
    eax = MEM32(eax + 0x10);
    ecx = MEM32(eax + 0x30);
    eax = eax + 0x30;
    eax = MEM32(ecx + 0x1C);
    if (TEST_Z(eax, eax)) goto loc_00277366; /* je: equal / zero */

loc_00277352: ;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_0003C1E0(); /* call 0x0003C1E0 */

loc_00277359: ;
    eax = MEM32(eax + 0x10);
    edx = MEM32(eax + 0x30);
    eax = eax + 0x30;
    MEM8(edx + 0x30) = 1;

loc_00277366: ;
    if (TEST_Z(MEM8(0x862D10), 8)) goto loc_00277394; /* je: equal / zero */

loc_0027736F: ;
    PUSH32(esp, 0); sub_0026A790(); /* call 0x0026A790 */

loc_00277374: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00277394; /* je: equal / zero */

loc_00277378: ;
    PUSH32(esp, 0x1E);
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_00277381: ;
    esp = esp + 4;
    eax = 1;
    MEM32(0x875844) = edi;
    PUSH32(esp, 0); sub_002431E0(); /* call 0x002431E0 */

loc_00277394: ;
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
 * sub_002773A0
 * Original: 0x002773A0 - 0x00277675 (725 bytes, 207 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002773A0(void)
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

loc_002773A0: ;
    esp = esp - 0x18;
    SET_LO8(eax, MEM8(0x87B57C));
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    (void)0; /* test LO8(eax), 1 - flags set for next jcc */
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = esi;
    ebp = 1;
    if (TEST_NZ(LO8(eax), 1)) goto loc_002773E8; /* jne: not equal / not zero */

loc_002773BB: ;
    edx = MEM32(0x87B57C);
    edx = edx | ebp;
    PUSH32(esp, 0x48CAE0);
    MEM32(0x87B57C) = edx;
    MEM32(0x87B570) = esi;
    MEM32(0x87B574) = esi;
    MEM32(0x87B578) = esi;
    PUSH32(esp, 0); sub_0046ED65(); /* call 0x0046ED65 */

loc_002773E5: ;
    esp = esp + 4;

loc_002773E8: ;
    SET_LO8(eax, MEM8(0x75E870));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00277586; /* je: equal / zero */

loc_002773F5: ;
    eax = MEM32(0x87B570);
    if (CMP_EQ(eax, esi)) goto loc_0027740F; /* je: equal / zero */

loc_002773FE: ;
    MEM32(esp + 0x14) = eax;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0027740C: ;
    esp = esp + 4;

loc_0027740F: ;
    edi = esp + 0x1C;
    MEM32(0x87B570) = esi;
    MEM32(0x87B574) = esi;
    MEM32(0x87B578) = esi;
    PUSH32(esp, 0); sub_00241F20(); /* call 0x00241F20 */

loc_0027742A: ;
    ecx = MEM32(0x849C34);
    edx = MEM32(0x849E5C);
    edi = MEM32(ecx + 0xC);
    PUSH32(esp, edx);
    MEM32(esp + 0x24) = edi;
    PUSH32(esp, 0); sub_003521F0(); /* call 0x003521F0 */

loc_00277443: ;
    SET_LO8(ebx, LO8(ebx) | 0xFF);
    (void)0; /* cmp edi, esi - flags set for next jcc */
    edi = MEM32(0x87B570);
    MEM32(esp + 0x18) = eax;
    MEM8(0x862D11) = LO8(ebx);
    MEM32(esp + 0x14) = esi;
    if (CMP_LE(edi, esi)) goto loc_0027755B; /* jle: less or equal (signed <=) */

loc_00277462: ;
    ebp = MEM32(esp + 0x24);
    edx = MEM32(0x87B574);
    /* nop */

loc_00277470: ;
    ecx = 0; /* xor self */
    if (TEST_S(esi, esi)) goto loc_0027749C; /* jl: less (signed <) */

loc_00277476: ;
    eax = MEM32(0x849C34);
    if (CMP_GE(esi, MEM32(eax + 0xC))) goto loc_0027749C; /* jge: greater or equal (signed >=) */

loc_00277480: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    eax = MEM32(eax + 8);
    if (CMP_LE(esi & esi, 0)) goto loc_00277496; /* jle: less or equal (signed <=) */

loc_00277487: ;
    ecx = esi;
    /* nop */

loc_00277490: ;
    ecx--;
    eax = MEM32(eax + 4);
    if ((ecx != 0)) goto loc_00277490; /* jne: not equal / not zero */

loc_00277496: ;
    ecx = MEM32(eax + 8);
    ebp = MEM32(eax + 0x4C);

loc_0027749C: ;
    if (CMP_NE(ecx, MEM32(esp + 0x18))) goto loc_002774E2; /* jne: not equal / not zero */

loc_002774A2: ;
    if (TEST_NZ(edi, edi)) goto loc_002774AA; /* jne: not equal / not zero */

loc_002774A6: ;
    SET_LO8(ebx, 0); /* xor self */
    goto loc_002774B1;

loc_002774AA: ;
    ebx = edx;
    ebx = ebx - edi;
    ebx = (uint32_t)((int32_t)ebx >> 2);

loc_002774B1: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM8(0x862D11) = LO8(ebx);
    if (TEST_S(esi, esi)) goto loc_002774E2; /* jl: less (signed <) */

loc_002774BB: ;
    eax = MEM32(0x849C34);
    if (CMP_GE(esi, MEM32(eax + 0xC))) goto loc_002774E2; /* jge: greater or equal (signed >=) */

loc_002774C5: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    eax = MEM32(eax + 8);
    if (CMP_LE(esi & esi, 0)) goto loc_002774D6; /* jle: less or equal (signed <=) */

loc_002774CC: ;
    ecx = esi;
    edi = edi;

loc_002774D0: ;
    ecx--;
    eax = MEM32(eax + 4);
    if ((ecx != 0)) goto loc_002774D0; /* jne: not equal / not zero */

loc_002774D6: ;
    ecx = eax + 0xC;
    MEM32(0x875840) = ecx;
    ebp = MEM32(eax + 0x4C);

loc_002774E2: ;
    ecx = ebp;
    eax = 1;
    eax = eax << LO8(ecx);
    ecx = MEM32(esp + 0x1C);
    if (TEST_Z(ecx, eax)) goto loc_00277543; /* je: equal / zero */

loc_002774F3: ;
    if (TEST_Z(edi, edi)) goto loc_0027751C; /* je: equal / zero */

loc_002774F7: ;
    ecx = MEM32(0x87B578);
    eax = edx;
    eax = eax - edi;
    ecx = ecx - edi;
    eax = (uint32_t)((int32_t)eax >> 2);
    ecx = (uint32_t)((int32_t)ecx >> 2);
    if (CMP_AE(eax, ecx)) goto loc_0027751C; /* jae: above or equal (unsigned >=) */

loc_0027750D: ;
    eax = edx;
    MEM32(edx) = esi;
    edx = eax + 4;
    MEM32(0x87B574) = edx;
    goto loc_00277537;

loc_0027751C: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x87B56C);
    ecx = 1;
    PUSH32(esp, 0); sub_002AE350(); /* call 0x002AE350 */

loc_00277531: ;
    edx = MEM32(0x87B574);

loc_00277537: ;
    edi = MEM32(0x87B570);
    SET_LO8(ebx, MEM8(0x862D11));

loc_00277543: ;
    eax = MEM32(esp + 0x20);
    esi++;
    (void)0; /* cmp esi, eax - flags set for next jcc */
    MEM32(esp + 0x14) = esi;
    if (CMP_L(esi, eax)) goto loc_00277470; /* jl: less (signed <) */

loc_00277554: ;
    esi = 0; /* xor self */
    ebp = 1;

loc_0027755B: ;
    ecx = SX8(LO8(ebx));
    edx = MEM32(edi + ecx * 4);
    eax = edi + ecx * 4;
    PUSH32(esp, 0xF);
    edi = 0; /* xor self */
    MEM32(esp + 0x28) = edx;
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_00277571: ;
    PUSH32(esp, 0x11);
    edi = esp + 0x2C;
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_0027757C: ;
    esp = esp + 8;
    MEM8(0x75E870) = 0;

loc_00277586: ;
    edx = 0xF5;
    PUSH32(esp, 0); sub_00277820(); /* call 0x00277820 */

loc_00277590: ;
    if (TEST_Z(MEM8(0x862D10), 8)) { sub_00277675(); return; } /* je: equal / zero */

loc_0027759D: ;
    PUSH32(esp, 0); sub_0026A790(); /* call 0x0026A790 */

loc_002775A2: ;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00277675(); return; } /* je: equal / zero */

loc_002775AA: ;
    PUSH32(esp, 0x11);
    edi = esp + 0x28;
    MEM32(esp + 0x28) = 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_002775BD: ;
    PUSH32(esp, 0x10);
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_002775C6: ;
    SET_LO8(eax, MEM8(0x7FA23C));
    xmm0 = 0.0f; /* xorps self = zero */
    esp = esp + 8;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002775DD; /* jne: not equal / not zero */

loc_002775D5: ;
    xmm0 = MEMF(0x7F9F48); /* movss */

loc_002775DD: ;
    (void)0; /* cmp MEM32(0x75E500), ebp - flags set for next jcc */
    MEMF(esp + 0x14) = xmm0; /* movss */
    if (CMP_NE(MEM32(0x75E500), ebp)) goto loc_00277603; /* jne: not equal / not zero */

loc_002775EB: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648E64)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_0027763F; /* ja: above (unsigned >) */

loc_00277603: ;
    ecx = MEM32(0x847024);
    eax = MEM32(ecx + 0x44);
    eax = MEM32(eax + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    eax = eax + 4;
    eax = MEM32(eax);
    PUSH32(esp, eax);
    eax = MEM32(ecx + 0x40);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    edx = edx | 0xFFFFFFFFu;
    eax = eax | 0xFFFFFFFFu;
    ecx = 0xAD1;
    MEMF(0x75E504) = xmm0; /* movss */
    MEM32(0x75E500) = ebp;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_0027763F: ;
    eax = MEM32(0x87B570);
    if (CMP_EQ(eax, esi)) goto loc_00277659; /* je: equal / zero */

loc_00277648: ;
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    MEM32(esp + 0x24) = eax;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00277656: ;
    esp = esp + 4;

loc_00277659: ;
    eax = 0; /* xor self */
    MEM32(0x87B570) = esi;
    MEM32(0x87B574) = eax;
    MEM32(0x87B578) = esi;
    MEM8(0x75E870) = 1;
    g_seh_ebp = ebp; sub_0027767A(); return; /* tail jmp 0x0027767A */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
