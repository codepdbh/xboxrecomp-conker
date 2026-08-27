/**
 * Burnout 3 - Recompiled code chunk 29
 * Functions: 250 (0x0028A3B0 - 0x0029A9E0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_0028A3B0
 * Original: 0x0028A3B0 - 0x0028A4BA (266 bytes, 80 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028A3B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0028A3B0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ebp = ebx + ebx * 2;
    PUSH32(esp, edi);
    ebp = ebp << 2;
    edi = 0; /* xor self */
    SET_LO16(edi, MEM16(ebp + 0x86EC7A));
    if (CMP_EQ(LO16(edi), 0xFFFFFFFEu)) goto loc_0028A497; /* je: equal / zero */

loc_0028A3CC: ;
    if (CMP_EQ(LO16(edi), 0xFFFFFFFFu)) goto loc_0028A497; /* je: equal / zero */

loc_0028A3D6: ;
    ecx = 0x862C40;
    PUSH32(esp, 0); sub_00296370(); /* call 0x00296370 */

loc_0028A3E0: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 8) = eax;
    if (TEST_Z(eax, eax)) goto loc_0028A497; /* je: equal / zero */

loc_0028A3EC: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_0028A3FA; /* jne: not equal / not zero */

loc_0028A3F5: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0028A3FA: ;
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
    if (TEST_Z(esi, esi)) goto loc_0028A443; /* je: equal / zero */

loc_0028A421: ;
    if (CMP_B(MEM32(esi + 0x80), 0x3C)) goto loc_0028A443; /* jb: below (unsigned <) */

loc_0028A42A: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0028A434: ;
    PUSH32(esp, 0x3C);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0028A43C: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_0028A464; /* jne: not equal / not zero */

loc_0028A443: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0028A455: ;
    PUSH32(esp, 0x3C);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0028A45D: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0028A46F; /* je: equal / zero */

loc_0028A464: ;
    SET_LO8(edx, 2);
    PUSH32(esp, 0); sub_0028A050(); /* call 0x0028A050 */

loc_0028A46B: ;
    esi = eax;
    goto loc_0028A471;

loc_0028A46F: ;
    esi = 0; /* xor self */

loc_0028A471: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x1F4);
    MEM8(esi + 0x39) = 0xFF;
    MEM8(esi + 0x3A) = LO8(ebx);
    PUSH32(esp, 0); sub_004168D0(); /* call 0x004168D0 */

loc_0028A484: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(ecx + 0x9DC);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_0028A496: ;
    POP32(esp, esi);

loc_0028A497: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFEu);
    MEM16(ebp + 0x86EC7A) = 0xFFFE;
    MEM8(ebp + 0x86EC80) = 0;
    PUSH32(esp, 0); sub_0028B3F0(); /* call 0x0028B3F0 */

loc_0028A4B3: ;
    esp = esp + 0x10;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0028A4C0
 * Original: 0x0028A4C0 - 0x0028AEBE (2558 bytes, 768 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028A4C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    int _fpu_cmp = 0; /* FPU compare result: -1/0/1 */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0028A4C0: ;
    eax = MEM32(0x863D04);
    esp = esp - 0x18;
    if (CMP_EQ(eax, 1)) goto loc_0028AEBA; /* je: equal / zero */

loc_0028A4D1: ;
    eax = MEM32(0x863D08);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = 2;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(eax, ebx)) goto loc_0028A4FF; /* jne: not equal / not zero */

loc_0028A4E3: ;
    if (CMP_NE(MEM16(0x86EC90), 0xFFFFFFFFu)) goto loc_0028A531; /* jne: not equal / not zero */

loc_0028A4ED: ;
    ebx = 0; /* xor self */
    MEM16(0x86EC90) = LO16(ebx);
    MEM16(0x86EC9C) = LO16(ebx);
    goto loc_0028A533;

loc_0028A4FF: ;
    esi = esi | 0xFFFFFFFFu;
    if (CMP_EQ(MEM16(0x86EC90), LO16(esi))) goto loc_0028A531; /* je: equal / zero */

loc_0028A50B: ;
    SET_LO8(eax, MEM8(0x862C5C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0028A523; /* je: equal / zero */

loc_0028A514: ;
    PUSH32(esp, 0); sub_0028A3B0(); /* call 0x0028A3B0 */

loc_0028A519: ;
    ebx = 3;
    PUSH32(esp, 0); sub_0028A3B0(); /* call 0x0028A3B0 */

loc_0028A523: ;
    MEM16(0x86EC90) = LO16(esi);
    MEM16(0x86EC9C) = LO16(esi);

loc_0028A531: ;
    ebx = 0; /* xor self */

loc_0028A533: ;
    SET_LO8(eax, MEM8(0x849E9D));
    if (CMP_LE(LO8(eax), LO8(ebx))) goto loc_0028A543; /* jle: less or equal (signed <=) */

loc_0028A53C: ;
    SET_LO8(eax, LO8(eax) - 1);
    MEM8(0x849E9D) = LO8(eax);

loc_0028A543: ;
    esi = 0; /* xor self */

loc_0028A545: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0028B8F0(); /* call 0x0028B8F0 */

loc_0028A54B: ;
    esp = esp + 4;
    esi++;
    if (CMP_L(esi, 2)) goto loc_0028A545; /* jl: less (signed <) */

loc_0028A554: ;
    edi = MEM32(0x875888);
    esi = MEM32(0x87588C);
    edx = MEM32(0x875890);
    ecx = MEM32(0x875868);
    eax = MEM32(0x87586C);
    ebp = MEM32(0x875870);
    edi++;
    esi++;
    edx++;
    ecx++;
    eax++;
    ebp++;
    MEM32(0x875888) = edi;
    edi = MEM32(0x875874);
    edi++;
    MEM32(0x87588C) = esi;
    esi = MEM32(0x875878);
    MEM32(0x875890) = edx;
    edx = MEM32(0x87587C);
    esi++;
    MEM32(0x875868) = ecx;
    ecx = MEM32(0x875880);
    MEM32(0x87586C) = eax;
    eax = MEM32(0x875884);
    edx++;
    ecx++;
    eax++;
    MEM32(0x875870) = ebp;
    MEM32(0x875874) = edi;
    MEM32(0x875878) = esi;
    MEM32(0x87587C) = edx;
    MEM32(0x875880) = ecx;
    MEM32(0x875884) = eax;
    MEM32(esp + 0x14) = ebx;

loc_0028A5E3: ;
    MEM32(esp + 0x1C) = ebx;
    goto loc_0028A5F0;

    /* nop */

loc_0028A5F0: ;
    esi = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 0); sub_0028A2F0(); /* call 0x0028A2F0 */

loc_0028A5FD: ;
    edi = MEM32(0x86E9A0);
    MEM32(esp + 0x20) = 0x86EC7A;
    esi = MEM32(esp + 0x20);
    MEM8(esp + 0x13) = LO8(eax);
    MEM32(esp + 0x18) = ebx;
    SET_LO16(ebp, LO16(edi));
    /* nop */

loc_0028A620: ;
    if (CMP_EQ(MEM8(0x86E9A2), LO8(ebx))) goto loc_0028A99C; /* je: equal / zero */

loc_0028A62C: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + -2);
    ecx = MEM32(esp + 0x14);
    if (CMP_NE(eax, ecx)) goto loc_0028A99C; /* jne: not equal / not zero */

loc_0028A63C: ;
    if (CMP_NE(MEM32(0x863D04), 1)) goto loc_0028A64A; /* jne: not equal / not zero */

loc_0028A645: ;
    eax = eax | 0xFFFFFFFFu;
    goto loc_0028A657;

loc_0028A64A: ;
    if (CMP_NE(LO16(ebp), 0xFFFFFFFEu)) goto loc_0028A655; /* jne: not equal / not zero */

loc_0028A650: ;
    eax = eax | 0xFFFFFFFFu;
    goto loc_0028A657;

loc_0028A655: ;
    eax = edi;

loc_0028A657: ;
    if (CMP_NE(MEM16(esi), LO16(eax))) goto loc_0028A99C; /* jne: not equal / not zero */

loc_0028A660: ;
    edx = (uint32_t)(int32_t)SMEM8(esi + 6);
    if (CMP_NE(edx, MEM32(esp + 0x1C))) goto loc_0028A99C; /* jne: not equal / not zero */

loc_0028A66E: ;
    (void)0; /* cmp MEM8(esp + 0x13), LO8(ebx) - flags set for next jcc */
    SET_LO8(eax, MEM8(0x862C5C));
    if (CMP_NE(MEM8(esp + 0x13), LO8(ebx))) goto loc_0028A81F; /* jne: not equal / not zero */

loc_0028A67D: ;
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_0028A6A0; /* je: equal / zero */

loc_0028A681: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0xFFFFFFFEu);
    MEM16(esi) = 0xFFFE;
    PUSH32(esp, 0); sub_0028B3F0(); /* call 0x0028B3F0 */

loc_0028A698: ;
    esp = esp + 0x10;
    goto loc_0028A993;

loc_0028A6A0: ;
    edx = MEM32(esp + 0x18);
    if (CMP_LE(MEM32(edx * 4 + 0x875868), 0xF)) goto loc_0028A99C; /* jle: less or equal (signed <=) */

loc_0028A6B2: ;
    if (CMP_NE(MEM32(0x84A19C), ebx)) goto loc_0028A6BF; /* jne: not equal / not zero */

loc_0028A6BA: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0028A6BF: ;
    esi = MEM32(0x7FA494);
    edx = MEM32(0x7FA4B4);
    eax = MEM32(0x84A190);
    esi++;
    edx++;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(0x7FA494) = esi;
    MEM32(0x7FA4B4) = edx;
    esi = eax;
    if (CMP_EQ(eax, ebx)) goto loc_0028A734; /* je: equal / zero */

loc_0028A6E4: ;
    if (CMP_B(MEM32(eax + 0x80), 0x3C)) goto loc_0028A734; /* jb: below (unsigned <) */

loc_0028A6ED: ;
    ecx = MEM32(eax + 0x10);
    ecx = MEM32(ecx + 0x24);
    (void)0; /* cmp ecx, ebx - flags set for next jcc */
    MEM32(esp + 0x24) = 0x10;
    if (CMP_EQ(ecx, ebx)) goto loc_0028A709; /* je: equal / zero */

loc_0028A6FF: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_0028A704: ;
    esp = esp + 8;
    goto loc_0028A725;

loc_0028A709: ;
    SET_LO16(ecx, MEM16(esp + 0x24));
    edx = eax + 0x76;
    MEM8(edx) = LO8(ebx);
    SET_LO8(eax, LO8(ebx));

loc_0028A715: ;
    SET_LO16(ecx, LO16(ecx) >> 1);
    SET_LO8(eax, LO8(eax) + 1);
    if (CMP_A(LO16(ecx), 1)) goto loc_0028A715; /* ja: above (unsigned >) */

loc_0028A720: ;
    MEM8(edx) = LO8(eax);
    MEM8(esi + 0x75) = LO8(eax);

loc_0028A725: ;
    PUSH32(esp, 0x3C);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0028A72D: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_0028A782; /* jne: not equal / not zero */

loc_0028A734: ;
    eax = MEM32(0x84A184);
    edx = MEM32(eax + 0x10);
    ecx = MEM32(edx + 0x24);
    (void)0; /* cmp ecx, ebx - flags set for next jcc */
    esi = eax;
    MEM32(esp + 0x24) = 0x10;
    if (CMP_EQ(ecx, ebx)) goto loc_0028A757; /* je: equal / zero */

loc_0028A74D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_0028A752: ;
    esp = esp + 8;
    goto loc_0028A773;

loc_0028A757: ;
    SET_LO16(ecx, MEM16(esp + 0x24));
    edx = eax + 0x76;
    MEM8(edx) = LO8(ebx);
    SET_LO8(eax, LO8(ebx));

loc_0028A763: ;
    SET_LO16(ecx, LO16(ecx) >> 1);
    SET_LO8(eax, LO8(eax) + 1);
    if (CMP_A(LO16(ecx), 1)) goto loc_0028A763; /* ja: above (unsigned >) */

loc_0028A76E: ;
    MEM8(edx) = LO8(eax);
    MEM8(esi + 0x75) = LO8(eax);

loc_0028A773: ;
    PUSH32(esp, 0x3C);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0028A77B: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) goto loc_0028A7C6; /* je: equal / zero */

loc_0028A782: ;
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
    MEM32(eax) = 0x604C80;
    MEM8(eax + 0x34) = 1;
    MEM16(eax + 0x36) = 0xFFFD;
    MEM8(eax + 0x38) = LO8(ebx);
    MEM8(eax + 0x39) = LO8(ebx);
    MEM8(eax + 0x3A) = LO8(ebx);
    goto loc_0028A7C8;

loc_0028A7C6: ;
    eax = 0; /* xor self */

loc_0028A7C8: ;
    SET_LO8(ecx, MEM8(esp + 0x14));
    SET_LO8(edx, MEM8(esp + 0x18));
    MEM8(eax + 0x39) = LO8(ecx);
    SET_LO8(ecx, MEM8(esp + 0x1C));
    MEM8(eax + 0x38) = LO8(ecx);
    MEM8(eax + 0x3A) = LO8(edx);
    edx = (uint32_t)(int32_t)SMEM8(0x864EC1);
    ecx = 0; /* xor self */
    if (CMP_LE(edx, ebx)) goto loc_0028A7FF; /* jle: less or equal (signed <=) */

loc_0028A7EA: ;
    esi = 0x864EC8;
    /* nop */

loc_0028A7F0: ;
    if (CMP_NE(MEM8(esi), LO8(ebx))) goto loc_0028A801; /* jne: not equal / not zero */

loc_0028A7F4: ;
    ecx++;
    esi = esi + 0xA50;
    if (CMP_L(ecx, edx)) goto loc_0028A7F0; /* jl: less (signed <) */

loc_0028A7FF: ;
    esi = 0; /* xor self */

loc_0028A801: ;
    ecx = MEM32(esi + 0x9DC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_0028A80F: ;
    eax = MEM32(esp + 0x18);
    MEM32(eax * 4 + 0x875868) = ebx;
    goto loc_0028A98F;

loc_0028A81F: ;
    if (CMP_NE(LO8(eax), LO8(ebx))) goto loc_0028A99C; /* jne: not equal / not zero */

loc_0028A827: ;
    if (CMP_LE(MEM32(ecx * 4 + 0x875888), 0x14)) goto loc_0028A99C; /* jle: less or equal (signed <=) */

loc_0028A835: ;
    (void)0; /* cmp MEM32(0x84A19C), ebx - flags set for next jcc */
    MEM32(ecx * 4 + 0x875888) = ebx;
    if (CMP_NE(MEM32(0x84A19C), ebx)) goto loc_0028A849; /* jne: not equal / not zero */

loc_0028A844: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0028A849: ;
    esi = MEM32(0x7FA494);
    edx = MEM32(0x7FA4B4);
    eax = MEM32(0x84A190);
    esi++;
    edx++;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(0x7FA494) = esi;
    MEM32(0x7FA4B4) = edx;
    esi = eax;
    if (CMP_EQ(eax, ebx)) goto loc_0028A8BF; /* je: equal / zero */

loc_0028A86E: ;
    if (CMP_B(MEM32(eax + 0x80), 0x3C)) goto loc_0028A8BF; /* jb: below (unsigned <) */

loc_0028A877: ;
    ecx = MEM32(eax + 0x10);
    ecx = MEM32(ecx + 0x24);
    (void)0; /* cmp ecx, ebx - flags set for next jcc */
    MEM32(esp + 0x24) = 0x10;
    if (CMP_EQ(ecx, ebx)) goto loc_0028A893; /* je: equal / zero */

loc_0028A889: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_0028A88E: ;
    esp = esp + 8;
    goto loc_0028A8B0;

loc_0028A893: ;
    SET_LO16(ecx, MEM16(esp + 0x24));
    edx = eax + 0x76;
    MEM8(edx) = LO8(ebx);
    SET_LO8(eax, LO8(ebx));
    /* nop */

loc_0028A8A0: ;
    SET_LO16(ecx, LO16(ecx) >> 1);
    SET_LO8(eax, LO8(eax) + 1);
    if (CMP_A(LO16(ecx), 1)) goto loc_0028A8A0; /* ja: above (unsigned >) */

loc_0028A8AB: ;
    MEM8(edx) = LO8(eax);
    MEM8(esi + 0x75) = LO8(eax);

loc_0028A8B0: ;
    PUSH32(esp, 0x3C);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0028A8B8: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_0028A90F; /* jne: not equal / not zero */

loc_0028A8BF: ;
    eax = MEM32(0x84A184);
    edx = MEM32(eax + 0x10);
    ecx = MEM32(edx + 0x24);
    (void)0; /* cmp ecx, ebx - flags set for next jcc */
    esi = eax;
    MEM32(esp + 0x24) = 0x10;
    if (CMP_EQ(ecx, ebx)) goto loc_0028A8E2; /* je: equal / zero */

loc_0028A8D8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_0028A8DD: ;
    esp = esp + 8;
    goto loc_0028A900;

loc_0028A8E2: ;
    SET_LO16(ecx, MEM16(esp + 0x24));
    edx = eax + 0x76;
    MEM8(edx) = LO8(ebx);
    SET_LO8(eax, LO8(ebx));
    edi = edi;

loc_0028A8F0: ;
    SET_LO16(ecx, LO16(ecx) >> 1);
    SET_LO8(eax, LO8(eax) + 1);
    if (CMP_A(LO16(ecx), 1)) goto loc_0028A8F0; /* ja: above (unsigned >) */

loc_0028A8FB: ;
    MEM8(edx) = LO8(eax);
    MEM8(esi + 0x75) = LO8(eax);

loc_0028A900: ;
    PUSH32(esp, 0x3C);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0028A908: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) goto loc_0028A952; /* je: equal / zero */

loc_0028A90F: ;
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
    MEM32(eax) = 0x604C80;
    MEM8(eax + 0x34) = LO8(ebx);
    MEM16(eax + 0x36) = 0xFFFD;
    MEM8(eax + 0x38) = LO8(ebx);
    MEM8(eax + 0x39) = LO8(ebx);
    MEM8(eax + 0x3A) = LO8(ebx);
    goto loc_0028A954;

loc_0028A952: ;
    eax = 0; /* xor self */

loc_0028A954: ;
    SET_LO8(ecx, MEM8(esp + 0x14));
    MEM8(eax + 0x39) = LO8(ecx);
    esi = (uint32_t)(int32_t)SMEM8(0x864EC1);
    ecx = 0; /* xor self */
    if (CMP_LE(esi, ebx)) goto loc_0028A97F; /* jle: less or equal (signed <=) */

loc_0028A968: ;
    edx = 0x864EC8;
    /* nop */

loc_0028A970: ;
    if (CMP_NE(MEM8(edx), LO8(ebx))) goto loc_0028A981; /* jne: not equal / not zero */

loc_0028A974: ;
    ecx++;
    edx = edx + 0xA50;
    if (CMP_L(ecx, esi)) goto loc_0028A970; /* jl: less (signed <) */

loc_0028A97F: ;
    edx = 0; /* xor self */

loc_0028A981: ;
    ecx = MEM32(edx + 0x9DC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_0028A98F: ;
    esi = MEM32(esp + 0x20);

loc_0028A993: ;
    edi = MEM32(0x86E9A0);
    SET_LO16(ebp, LO16(edi));

loc_0028A99C: ;
    edx = MEM32(esp + 0x18);
    esi = esi + 0xC;
    edx++;
    (void)0; /* cmp esi, 0x86ECDA - flags set for next jcc */
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x20) = esi;
    if (CMP_L(esi, 0x86ECDA)) goto loc_0028A620; /* jl: less (signed <) */

loc_0028A9B8: ;
    if (CMP_EQ(MEM8(esp + 0x13), LO8(ebx))) goto loc_0028AC76; /* je: equal / zero */

loc_0028A9C2: ;
    SET_LO8(edx, 0); /* xor self */
    ecx = 0x86EC7A;
    /* nop */

loc_0028A9D0: ;
    if (CMP_EQ(MEM8(0x86E9A2), LO8(ebx))) goto loc_0028AA8B; /* je: equal / zero */

loc_0028A9DC: ;
    eax = (uint32_t)(int32_t)SMEM16(ecx + -2);
    esi = MEM32(esp + 0x14);
    if (CMP_NE(eax, esi)) goto loc_0028AA0A; /* jne: not equal / not zero */

loc_0028A9E8: ;
    if (CMP_NE(MEM32(0x863D04), 1)) goto loc_0028A9F6; /* jne: not equal / not zero */

loc_0028A9F1: ;
    eax = eax | 0xFFFFFFFFu;
    goto loc_0028AA03;

loc_0028A9F6: ;
    if (CMP_NE(LO16(ebp), 0xFFFFFFFEu)) goto loc_0028AA01; /* jne: not equal / not zero */

loc_0028A9FC: ;
    eax = eax | 0xFFFFFFFFu;
    goto loc_0028AA03;

loc_0028AA01: ;
    eax = edi;

loc_0028AA03: ;
    if (CMP_NE(MEM16(ecx), LO16(eax))) goto loc_0028AA0A; /* jne: not equal / not zero */

loc_0028AA08: ;
    SET_LO8(edx, 1);

loc_0028AA0A: ;
    eax = (uint32_t)(int32_t)SMEM16(ecx + 0xA);
    if (CMP_NE(eax, esi)) goto loc_0028AA35; /* jne: not equal / not zero */

loc_0028AA12: ;
    if (CMP_NE(MEM32(0x863D04), 1)) goto loc_0028AA20; /* jne: not equal / not zero */

loc_0028AA1B: ;
    eax = eax | 0xFFFFFFFFu;
    goto loc_0028AA2D;

loc_0028AA20: ;
    if (CMP_NE(LO16(ebp), 0xFFFFFFFEu)) goto loc_0028AA2B; /* jne: not equal / not zero */

loc_0028AA26: ;
    eax = eax | 0xFFFFFFFFu;
    goto loc_0028AA2D;

loc_0028AA2B: ;
    eax = edi;

loc_0028AA2D: ;
    if (CMP_NE(MEM16(ecx + 0xC), LO16(eax))) goto loc_0028AA35; /* jne: not equal / not zero */

loc_0028AA33: ;
    SET_LO8(edx, 1);

loc_0028AA35: ;
    eax = (uint32_t)(int32_t)SMEM16(ecx + 0x16);
    if (CMP_NE(eax, esi)) goto loc_0028AA60; /* jne: not equal / not zero */

loc_0028AA3D: ;
    if (CMP_NE(MEM32(0x863D04), 1)) goto loc_0028AA4B; /* jne: not equal / not zero */

loc_0028AA46: ;
    eax = eax | 0xFFFFFFFFu;
    goto loc_0028AA58;

loc_0028AA4B: ;
    if (CMP_NE(LO16(ebp), 0xFFFFFFFEu)) goto loc_0028AA56; /* jne: not equal / not zero */

loc_0028AA51: ;
    eax = eax | 0xFFFFFFFFu;
    goto loc_0028AA58;

loc_0028AA56: ;
    eax = edi;

loc_0028AA58: ;
    if (CMP_NE(MEM16(ecx + 0x18), LO16(eax))) goto loc_0028AA60; /* jne: not equal / not zero */

loc_0028AA5E: ;
    SET_LO8(edx, 1);

loc_0028AA60: ;
    eax = (uint32_t)(int32_t)SMEM16(ecx + 0x22);
    if (CMP_NE(eax, esi)) goto loc_0028AA8B; /* jne: not equal / not zero */

loc_0028AA68: ;
    if (CMP_NE(MEM32(0x863D04), 1)) goto loc_0028AA76; /* jne: not equal / not zero */

loc_0028AA71: ;
    eax = eax | 0xFFFFFFFFu;
    goto loc_0028AA83;

loc_0028AA76: ;
    if (CMP_NE(LO16(ebp), 0xFFFFFFFEu)) goto loc_0028AA81; /* jne: not equal / not zero */

loc_0028AA7C: ;
    eax = eax | 0xFFFFFFFFu;
    goto loc_0028AA83;

loc_0028AA81: ;
    eax = edi;

loc_0028AA83: ;
    if (CMP_NE(MEM16(ecx + 0x24), LO16(eax))) goto loc_0028AA8B; /* jne: not equal / not zero */

loc_0028AA89: ;
    SET_LO8(edx, 1);

loc_0028AA8B: ;
    ecx = ecx + 0x30;
    if (CMP_L(ecx, 0x86ECDA)) goto loc_0028A9D0; /* jl: less (signed <) */

loc_0028AA9A: ;
    if (CMP_NE(LO8(edx), LO8(ebx))) goto loc_0028AC76; /* jne: not equal / not zero */

loc_0028AAA2: ;
    if (CMP_EQ(MEM8(0x862C5C), LO8(ebx))) goto loc_0028AAFF; /* je: equal / zero */

loc_0028AAAA: ;
    esi = 0; /* xor self */
    edi = edi | 0xFFFFFFFFu;
    ebp = 0xFFFFFFFEu;

loc_0028AAB4: ;
    edx = MEM32(esp + 0x14);
    eax = esi + esi * 2;
    eax = eax << 2;
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x86EC78);
    if (CMP_NE(ecx, edx)) goto loc_0028AAF4; /* jne: not equal / not zero */

loc_0028AAC9: ;
    if (CMP_NE(MEM16(eax + 0x86EC7A), LO16(ebp))) goto loc_0028AAF4; /* jne: not equal / not zero */

loc_0028AAD2: ;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    MEM16(eax + 0x86EC7A) = LO16(edi);
    MEM8(eax + 0x86EC80) = LO8(ecx);
    PUSH32(esp, 0); sub_0028B3F0(); /* call 0x0028B3F0 */

loc_0028AAEC: ;
    esp = esp + 0x10;
    esi = 8;

loc_0028AAF4: ;
    esi++;
    if (CMP_L(esi, 8)) goto loc_0028AAB4; /* jl: less (signed <) */

loc_0028AAFA: ;
    goto loc_0028AC76;

loc_0028AAFF: ;
    eax = MEM32(esp + 0x14);
    if (CMP_LE(MEM32(eax * 4 + 0x875888), 0x14)) goto loc_0028AC76; /* jle: less or equal (signed <=) */

loc_0028AB11: ;
    ecx = eax;
    (void)0; /* cmp MEM32(0x84A19C), ebx - flags set for next jcc */
    MEM32(ecx * 4 + 0x875888) = ebx;
    if (CMP_NE(MEM32(0x84A19C), ebx)) goto loc_0028AB27; /* jne: not equal / not zero */

loc_0028AB22: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0028AB27: ;
    esi = MEM32(0x7FA494);
    edx = MEM32(0x7FA4B4);
    eax = MEM32(0x84A190);
    esi++;
    edx++;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(0x7FA494) = esi;
    MEM32(0x7FA4B4) = edx;
    esi = eax;
    if (CMP_EQ(eax, ebx)) goto loc_0028AB9F; /* je: equal / zero */

loc_0028AB4C: ;
    if (CMP_B(MEM32(eax + 0x80), 0x3C)) goto loc_0028AB9F; /* jb: below (unsigned <) */

loc_0028AB55: ;
    edx = MEM32(eax + 0x10);
    ecx = MEM32(edx + 0x24);
    (void)0; /* cmp ecx, ebx - flags set for next jcc */
    MEM32(esp + 0x24) = 0x10;
    if (CMP_EQ(ecx, ebx)) goto loc_0028AB71; /* je: equal / zero */

loc_0028AB67: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_0028AB6C: ;
    esp = esp + 8;
    goto loc_0028AB90;

loc_0028AB71: ;
    SET_LO16(ecx, MEM16(esp + 0x24));
    edx = eax + 0x76;
    MEM8(edx) = LO8(ebx);
    SET_LO8(eax, LO8(ebx));
    /* nop */

loc_0028AB80: ;
    SET_LO16(ecx, LO16(ecx) >> 1);
    SET_LO8(eax, LO8(eax) + 1);
    if (CMP_A(LO16(ecx), 1)) goto loc_0028AB80; /* ja: above (unsigned >) */

loc_0028AB8B: ;
    MEM8(edx) = LO8(eax);
    MEM8(esi + 0x75) = LO8(eax);

loc_0028AB90: ;
    PUSH32(esp, 0x3C);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0028AB98: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_0028ABEF; /* jne: not equal / not zero */

loc_0028AB9F: ;
    eax = MEM32(0x84A184);
    ecx = MEM32(eax + 0x10);
    ecx = MEM32(ecx + 0x24);
    (void)0; /* cmp ecx, ebx - flags set for next jcc */
    esi = eax;
    MEM32(esp + 0x24) = 0x10;
    if (CMP_EQ(ecx, ebx)) goto loc_0028ABC2; /* je: equal / zero */

loc_0028ABB8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_0028ABBD: ;
    esp = esp + 8;
    goto loc_0028ABE0;

loc_0028ABC2: ;
    SET_LO16(ecx, MEM16(esp + 0x24));
    edx = eax + 0x76;
    MEM8(edx) = LO8(ebx);
    SET_LO8(eax, LO8(ebx));
    edi = edi;

loc_0028ABD0: ;
    SET_LO16(ecx, LO16(ecx) >> 1);
    SET_LO8(eax, LO8(eax) + 1);
    if (CMP_A(LO16(ecx), 1)) goto loc_0028ABD0; /* ja: above (unsigned >) */

loc_0028ABDB: ;
    MEM8(edx) = LO8(eax);
    MEM8(esi + 0x75) = LO8(eax);

loc_0028ABE0: ;
    PUSH32(esp, 0x3C);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0028ABE8: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) goto loc_0028AC32; /* je: equal / zero */

loc_0028ABEF: ;
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
    MEM32(eax) = 0x604C80;
    MEM8(eax + 0x34) = LO8(ebx);
    MEM16(eax + 0x36) = 0xFFFD;
    MEM8(eax + 0x38) = LO8(ebx);
    MEM8(eax + 0x39) = LO8(ebx);
    MEM8(eax + 0x3A) = LO8(ebx);
    goto loc_0028AC34;

loc_0028AC32: ;
    eax = 0; /* xor self */

loc_0028AC34: ;
    SET_LO8(edx, MEM8(esp + 0x14));
    SET_LO8(ecx, MEM8(esp + 0x1C));
    MEM8(eax + 0x38) = LO8(ecx);
    MEM8(eax + 0x39) = LO8(edx);
    MEM8(eax + 0x3A) = LO8(ebx);
    edx = (uint32_t)(int32_t)SMEM8(0x864EC1);
    ecx = 0; /* xor self */
    if (CMP_LE(edx, ebx)) goto loc_0028AC66; /* jle: less or equal (signed <=) */

loc_0028AC52: ;
    esi = 0x864EC8;

loc_0028AC57: ;
    if (CMP_NE(MEM8(esi), LO8(ebx))) goto loc_0028AC68; /* jne: not equal / not zero */

loc_0028AC5B: ;
    ecx++;
    esi = esi + 0xA50;
    if (CMP_L(ecx, edx)) goto loc_0028AC57; /* jl: less (signed <) */

loc_0028AC66: ;
    esi = 0; /* xor self */

loc_0028AC68: ;
    ecx = MEM32(esi + 0x9DC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_0028AC76: ;
    eax = MEM32(esp + 0x1C);
    eax++;
    (void)0; /* cmp eax, 2 - flags set for next jcc */
    MEM32(esp + 0x1C) = eax;
    if (CMP_L(eax, 2)) goto loc_0028A5F0; /* jl: less (signed <) */

loc_0028AC88: ;
    if (CMP_EQ(MEM8(0x862C5C), LO8(ebx))) goto loc_0028AEA4; /* je: equal / zero */

loc_0028AC94: ;
    MEM32(esp + 0x18) = ebx;
    ebp = 0x86EC7A;
    /* nop */

loc_0028ACA0: ;
    edi = 0; /* xor self */
    SET_LO16(edi, MEM16(ebp));
    if (CMP_EQ(LO16(edi), 0xFFFFFFFEu)) goto loc_0028AE8C; /* je: equal / zero */

loc_0028ACB0: ;
    if (CMP_EQ(LO16(edi), 0xFFFFFFFFu)) goto loc_0028AE8C; /* je: equal / zero */

loc_0028ACBA: ;
    ecx = 0x862C40;
    PUSH32(esp, 0); sub_00296370(); /* call 0x00296370 */

loc_0028ACC4: ;
    edi = eax;
    if (CMP_EQ(edi, ebx)) goto loc_0028AE71; /* je: equal / zero */

loc_0028ACCE: ;
    /* TODO: rdtsc  */
    PUSH32(esp, ebx);
    PUSH32(esp, 3);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470A00(); /* call 0x00470A00 */

loc_0028ACDA: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x898);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470D50(); /* call 0x00470D50 */

loc_0028ACE7: ;
    esi = MEM32(0x828B48);
    ecx = MEM32(0x828B4C);
    PUSH32(esp, ebx);
    eax = eax - esi;
    PUSH32(esp, 0x3E8);
    edx = edx - ecx - _cf; /* sbb */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470EA0(); /* call 0x00470EA0 */

loc_0028AD04: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x24) = eax;
    fp_push((double)SMEM32(esp + 0x24)); /* fild */
    if (CMP_GE(eax & eax, 0)) goto loc_0028AD16; /* jge: greater or equal (signed >=) */

loc_0028AD10: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_0028AD16: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(ebp + 2)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp < 0) /* fcompi */) goto loc_0028AE8C; /* jb: below (unsigned <) */

loc_0028AD31: ;
    if (CMP_NE(MEM32(0x84A19C), ebx)) goto loc_0028AD3E; /* jne: not equal / not zero */

loc_0028AD39: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0028AD3E: ;
    esi = MEM32(0x7FA494);
    edx = MEM32(0x7FA4B4);
    eax = MEM32(0x84A190);
    esi++;
    edx++;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(0x7FA494) = esi;
    MEM32(0x7FA4B4) = edx;
    esi = eax;
    if (CMP_EQ(eax, ebx)) goto loc_0028ADB3; /* je: equal / zero */

loc_0028AD63: ;
    if (CMP_B(MEM32(eax + 0x80), 0x3C)) goto loc_0028ADB3; /* jb: below (unsigned <) */

loc_0028AD6C: ;
    ecx = MEM32(eax + 0x10);
    ecx = MEM32(ecx + 0x24);
    (void)0; /* cmp ecx, ebx - flags set for next jcc */
    MEM32(esp + 0x24) = 0x10;
    if (CMP_EQ(ecx, ebx)) goto loc_0028AD88; /* je: equal / zero */

loc_0028AD7E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_0028AD83: ;
    esp = esp + 8;
    goto loc_0028ADA4;

loc_0028AD88: ;
    SET_LO16(ecx, MEM16(esp + 0x24));
    edx = eax + 0x76;
    MEM8(edx) = LO8(ebx);
    SET_LO8(eax, LO8(ebx));

loc_0028AD94: ;
    SET_LO16(ecx, LO16(ecx) >> 1);
    SET_LO8(eax, LO8(eax) + 1);
    if (CMP_A(LO16(ecx), 1)) goto loc_0028AD94; /* ja: above (unsigned >) */

loc_0028AD9F: ;
    MEM8(edx) = LO8(eax);
    MEM8(esi + 0x75) = LO8(eax);

loc_0028ADA4: ;
    PUSH32(esp, 0x3C);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0028ADAC: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_0028AE01; /* jne: not equal / not zero */

loc_0028ADB3: ;
    eax = MEM32(0x84A184);
    edx = MEM32(eax + 0x10);
    ecx = MEM32(edx + 0x24);
    (void)0; /* cmp ecx, ebx - flags set for next jcc */
    esi = eax;
    MEM32(esp + 0x24) = 0x10;
    if (CMP_EQ(ecx, ebx)) goto loc_0028ADD6; /* je: equal / zero */

loc_0028ADCC: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_0028ADD1: ;
    esp = esp + 8;
    goto loc_0028ADF2;

loc_0028ADD6: ;
    SET_LO16(ecx, MEM16(esp + 0x24));
    edx = eax + 0x76;
    MEM8(edx) = LO8(ebx);
    SET_LO8(eax, LO8(ebx));

loc_0028ADE2: ;
    SET_LO16(ecx, LO16(ecx) >> 1);
    SET_LO8(eax, LO8(eax) + 1);
    if (CMP_A(LO16(ecx), 1)) goto loc_0028ADE2; /* ja: above (unsigned >) */

loc_0028ADED: ;
    MEM8(edx) = LO8(eax);
    MEM8(esi + 0x75) = LO8(eax);

loc_0028ADF2: ;
    PUSH32(esp, 0x3C);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0028ADFA: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) goto loc_0028AE47; /* je: equal / zero */

loc_0028AE01: ;
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
    MEM32(eax) = 0x604C80;
    MEM8(eax + 0x34) = 2;
    MEM16(eax + 0x36) = 0xFFFD;
    MEM8(eax + 0x38) = LO8(ebx);
    MEM8(eax + 0x39) = LO8(ebx);
    MEM8(eax + 0x3A) = LO8(ebx);
    esi = eax;
    goto loc_0028AE49;

loc_0028AE47: ;
    esi = 0; /* xor self */

loc_0028AE49: ;
    SET_LO8(eax, MEM8(esp + 0x14));
    SET_LO8(ecx, MEM8(esp + 0x18));
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x1F4);
    MEM8(esi + 0x39) = LO8(eax);
    MEM8(esi + 0x3A) = LO8(ecx);
    PUSH32(esp, 0); sub_004168D0(); /* call 0x004168D0 */

loc_0028AE63: ;
    eax = MEM32(edi + 0x9DC);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_0028AE71: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0xFFFFFFFEu);
    MEM16(ebp) = 0xFFFE;
    PUSH32(esp, 0); sub_0028B3F0(); /* call 0x0028B3F0 */

loc_0028AE89: ;
    esp = esp + 0x10;

loc_0028AE8C: ;
    edx = MEM32(esp + 0x18);
    edx++;
    ebp = ebp + 0xC;
    (void)0; /* cmp ebp, 0x86ECDA - flags set for next jcc */
    MEM32(esp + 0x18) = edx;
    if (CMP_L(ebp, 0x86ECDA)) goto loc_0028ACA0; /* jl: less (signed <) */

loc_0028AEA4: ;
    eax = MEM32(esp + 0x14);
    eax++;
    (void)0; /* cmp eax, 3 - flags set for next jcc */
    MEM32(esp + 0x14) = eax;
    if (CMP_L(eax, 3)) goto loc_0028A5E3; /* jl: less (signed <) */

loc_0028AEB6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0028AEBA: ;
    esp = esp + 0x18;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0028AEC0
 * Original: 0x0028AEC0 - 0x0028AF81 (193 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028AEC0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0028AEC0: ;
    eax = MEM32(0x84A19C);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(eax, ebx)) goto loc_0028AED3; /* jne: not equal / not zero */

loc_0028AECE: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0028AED3: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (CMP_EQ(esi, ebx)) goto loc_0028AF1B; /* je: equal / zero */

loc_0028AEF9: ;
    if (CMP_B(MEM32(esi + 0x80), 0x3C)) goto loc_0028AF1B; /* jb: below (unsigned <) */

loc_0028AF02: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0028AF0C: ;
    PUSH32(esp, 0x3C);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0028AF14: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_0028AF3C; /* jne: not equal / not zero */

loc_0028AF1B: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0028AF2D: ;
    PUSH32(esp, 0x3C);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0028AF35: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) { sub_0028AF81(); return; } /* je: equal / zero */

loc_0028AF3C: ;
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
    MEM8(eax + 0x34) = LO8(ebx);
    MEM8(eax + 0x38) = LO8(ebx);
    MEM8(eax + 0x39) = LO8(ebx);
    MEM8(eax + 0x3A) = LO8(ebx);
    MEM32(eax + 8) = 0xFFFFFFFFu;
    MEM32(eax) = 0x604C80;
    MEM16(eax + 0x36) = 0xFFFE;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0028AF90
 * Original: 0x0028AF90 - 0x0028AFD8 (72 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028AF90(void)
{

loc_0028AF90: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    eax = ZX8(MEM8(edi + 0x34));
    PUSH32(esp, 4);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0028AFA3: ;
    eax = (uint32_t)(int32_t)SMEM16(edi + 0x36);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0028AFAE: ;
    eax = (uint32_t)(int32_t)SMEM8(edi + 0x38);
    PUSH32(esp, 2);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0028AFB9: ;
    eax = (uint32_t)(int32_t)SMEM8(edi + 0x39);
    PUSH32(esp, 3);
    eax++;
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0028AFC5: ;
    eax = (uint32_t)(int32_t)SMEM8(edi + 0x3A);
    PUSH32(esp, 3);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0028AFD0: ;
    esp = esp + 0x14;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0028AFE0
 * Original: 0x0028AFE0 - 0x0028B031 (81 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028AFE0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0028AFE0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 4);
    edi = ecx;
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0028AFEF: ;
    PUSH32(esp, 0x10);
    MEM8(edi + 0x34) = LO8(eax);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0028AFF9: ;
    esp = esp + 8;
    if (((int32_t)(HI8(eax) & HI8(eax)) >= 0)) goto loc_0028B005; /* jns: not sign (positive) */

loc_0028B000: ;
    eax = eax | 0xFFFF0000u;

loc_0028B005: ;
    PUSH32(esp, 2);
    MEM16(edi + 0x36) = LO16(eax);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0028B010: ;
    PUSH32(esp, 3);
    MEM8(edi + 0x38) = LO8(eax);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0028B01A: ;
    SET_LO8(eax, LO8(eax) - 1);
    PUSH32(esp, 3);
    MEM8(edi + 0x39) = LO8(eax);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0028B026: ;
    esp = esp + 0xC;
    MEM8(edi + 0x3A) = LO8(eax);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0028B040
 * Original: 0x0028B040 - 0x0028B3E9 (937 bytes, 281 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028B040(void)
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

loc_0028B040: ;
    esp = esp - 8;
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 8);
    PUSH32(esp, eax);
    eax = 0x862C40;
    PUSH32(esp, 0); sub_00296250(); /* call 0x00296250 */

loc_0028B054: ;
    edx = eax;
    (void)0; /* test edx, edx - flags set for next jcc */
    MEM32(esp + 8) = edx;
    if (TEST_Z(edx, edx)) goto loc_0028B3DF; /* je: equal / zero */

loc_0028B062: ;
    SET_LO8(eax, MEM8(0x862C5C));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0028B314; /* je: equal / zero */

loc_0028B072: ;
    SET_LO8(ebx, MEM8(0x86E9A2));
    ebp = 0; /* xor self */
    MEM32(esp + 0x10) = ebp;
    eax = 0x86EC78;

loc_0028B083: ;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_0028B0AD; /* je: equal / zero */

loc_0028B087: ;
    SET_LO16(esi, (uint32_t)(int32_t)SMEM8(edi + 0x39));
    SET_LO16(ecx, MEM16(eax));
    if (CMP_EQ(LO16(ecx), LO16(esi))) goto loc_0028B0A0; /* je: equal / zero */

loc_0028B094: ;
    if (CMP_NE(MEM8(edi + 0x34), 1)) goto loc_0028B0AD; /* jne: not equal / not zero */

loc_0028B09A: ;
    if (CMP_NE(LO16(ecx), 0xFFFFFFFFu)) goto loc_0028B0AD; /* jne: not equal / not zero */

loc_0028B0A0: ;
    SET_LO16(ecx, MEM16(eax + 2));
    if (CMP_EQ(LO16(ecx), MEM16(edx + 0x9D8))) goto loc_0028B0FB; /* je: equal / zero */

loc_0028B0AD: ;
    eax = eax + 0xC;
    ebp++;
    if (CMP_L(eax, 0x86ECD8)) goto loc_0028B083; /* jl: less (signed <) */

loc_0028B0B8: ;
    SET_LO8(eax, MEM8(edi + 0x34));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(esp + 0x10) = ebp;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0028B3DC; /* jne: not equal / not zero */

loc_0028B0C7: ;
    SET_LO16(ecx, (uint32_t)(int32_t)SMEM8(edi + 0x39));
    ebx = 0; /* xor self */
    eax = 0x86EC7A;

loc_0028B0D3: ;
    if (CMP_NE(MEM16(eax + -2), LO16(ecx))) goto loc_0028B0E3; /* jne: not equal / not zero */

loc_0028B0D9: ;
    if (CMP_EQ(MEM16(eax), 0xFFFFFFFEu)) goto loc_0028B218; /* je: equal / zero */

loc_0028B0E3: ;
    eax = eax + 0xC;
    ebx++;
    if (CMP_L(eax, 0x86ECDA)) goto loc_0028B0D3; /* jl: less (signed <) */

loc_0028B0EE: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    eax = 1;
    POP32(esp, edi);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_0028B0FB: ;
    SET_LO8(edx, MEM8(edi + 0x38));
    MEM32(esp + 0x10) = ebp;
    ebp = ebp + ebp * 2;
    ebp = ebp << 2;
    if (CMP_NE(LO8(edx), MEM8(ebp + 0x86EC80))) goto loc_0028B3DC; /* jne: not equal / not zero */

loc_0028B115: ;
    SET_LO8(eax, MEM8(edi + 0x34));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0028B134; /* jne: not equal / not zero */

loc_0028B11C: ;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0028B121: ;
    MEMF(ebp + 0x86EC7C) = (float)fp_top(); fp_popp(); /* fstp */
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    eax = 1;
    POP32(esp, edi);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_0028B134: ;
    if (CMP_NE(LO8(eax), 1)) goto loc_0028B3DC; /* jne: not equal / not zero */

loc_0028B13C: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_0028B14A; /* jne: not equal / not zero */

loc_0028B145: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0028B14A: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    ebx = esi;
    if (TEST_Z(esi, esi)) goto loc_0028B192; /* je: equal / zero */

loc_0028B170: ;
    if (CMP_B(MEM32(esi + 0x80), 0x3C)) goto loc_0028B192; /* jb: below (unsigned <) */

loc_0028B179: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0028B183: ;
    PUSH32(esp, 0x3C);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0028B18B: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_0028B1B3; /* jne: not equal / not zero */

loc_0028B192: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    ebx = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0028B1A4: ;
    PUSH32(esp, 0x3C);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0028B1AC: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0028B1BE; /* je: equal / zero */

loc_0028B1B3: ;
    SET_LO8(edx, 2);
    PUSH32(esp, 0); sub_0028A050(); /* call 0x0028A050 */

loc_0028B1BA: ;
    esi = eax;
    goto loc_0028B1C0;

loc_0028B1BE: ;
    esi = 0; /* xor self */

loc_0028B1C0: ;
    SET_LO8(eax, MEM8(edi + 0x39));
    ebx = MEM32(esp + 0x10);
    MEM8(esi + 0x39) = LO8(eax);
    MEM8(esi + 0x3A) = LO8(ebx);
    SET_LO16(ecx, MEM16(ebp + 0x86EC7A));
    MEM16(esi + 0x36) = LO16(ecx);
    SET_LO8(edx, MEM8(ebp + 0x86EC80));
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x1F4);
    MEM8(esi + 0x38) = LO8(edx);
    PUSH32(esp, 0); sub_004168D0(); /* call 0x004168D0 */

loc_0028B1ED: ;
    ecx = MEM32(edi + 8);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_0028B1F8: ;
    edx = 0; /* xor self */
    MEM16(ebp + 0x86EC7A) = 0xFFFE;
    MEM8(ebp + 0x86EC80) = 0;
    SET_LO8(edx, MEM8(edi + 0x39));
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0xFFFFFFFEu);
    goto loc_0028B3D4;

loc_0028B218: ;
    SET_LO16(eax, MEM16(edx + 0x9D8));
    ebp = ebx + ebx * 2;
    ebp = ebp << 2;
    MEM16(ebp + 0x86EC7A) = LO16(eax);
    eax = MEM32(0x84A19C);
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(ecx, MEM8(edi + 0x38));
    MEM8(ebp + 0x86EC80) = LO8(ecx);
    if (TEST_NZ(eax, eax)) goto loc_0028B243; /* jne: not equal / not zero */

loc_0028B23E: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0028B243: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    MEM32(esp + 0x10) = esi;
    if (TEST_Z(esi, esi)) goto loc_0028B28F; /* je: equal / zero */

loc_0028B26B: ;
    if (CMP_B(MEM32(esi + 0x80), 0x3C)) goto loc_0028B28F; /* jb: below (unsigned <) */

loc_0028B274: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0028B27E: ;
    edx = esi;
    PUSH32(esp, 0x3C);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0028B288: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_0028B2B4; /* jne: not equal / not zero */

loc_0028B28F: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    MEM32(esp + 0x10) = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0028B2A3: ;
    eax = esi;
    PUSH32(esp, 0x3C);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0028B2AD: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0028B2CB; /* je: equal / zero */

loc_0028B2B4: ;
    ecx = MEM32(esp + 0x14);
    ecx = (uint32_t)(int32_t)SMEM16(ecx + 0x9D8);
    PUSH32(esp, ecx);
    SET_LO8(edx, 3);
    PUSH32(esp, 0); sub_0028A0A0(); /* call 0x0028A0A0 */

loc_0028B2C7: ;
    esi = eax;
    goto loc_0028B2CD;

loc_0028B2CB: ;
    esi = 0; /* xor self */

loc_0028B2CD: ;
    SET_LO8(edx, MEM8(edi + 0x39));
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x1F4);
    MEM8(esi + 0x39) = LO8(edx);
    MEM8(esi + 0x3A) = LO8(ebx);
    PUSH32(esp, 0); sub_004168D0(); /* call 0x004168D0 */

loc_0028B2E2: ;
    ecx = MEM32(edi + 8);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_0028B2ED: ;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0028B2F2: ;
    MEMF(ebp + 0x86EC7C) = (float)fp_top(); fp_popp(); /* fstp */
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(edi + 0x38));
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(edi + 0x39));
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(ebp + 0x86EC7A));
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    goto loc_0028B3D4;

loc_0028B314: ;
    SET_LO8(eax, MEM8(0x86E9A2));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0028B391; /* je: equal / zero */

loc_0028B31D: ;
    if (CMP_EQ(MEM32(0x863D04), 1)) goto loc_0028B331; /* je: equal / zero */

loc_0028B326: ;
    eax = MEM32(0x86E9A0);
    if (CMP_NE(LO16(eax), 0xFFFE)) goto loc_0028B334; /* jne: not equal / not zero */

loc_0028B331: ;
    eax = eax | 0xFFFFFFFFu;

loc_0028B334: ;
    if (CMP_NE(MEM16(edi + 0x36), LO16(eax))) goto loc_0028B391; /* jne: not equal / not zero */

loc_0028B33A: ;
    SET_LO8(eax, MEM8(edi + 0x34));
    if (CMP_NE(LO8(eax), 2)) goto loc_0028B363; /* jne: not equal / not zero */

loc_0028B341: ;
    eax = (uint32_t)(int32_t)SMEM8(edi + 0x3A);
    edx = eax + eax * 2;
    MEM16(edx * 4 + 0x86EC7A) = 0xFFFE;
    eax = (uint32_t)(int32_t)SMEM8(edi + 0x3A);
    eax = eax + eax * 2;
    MEM8(eax * 4 + 0x86EC80) = 0;
    goto loc_0028B391;

loc_0028B363: ;
    if (CMP_NE(LO8(eax), 3)) goto loc_0028B391; /* jne: not equal / not zero */

loc_0028B367: ;
    PUSH32(esp, 0x862C40);
    PUSH32(esp, 0); sub_00296E60(); /* call 0x00296E60 */

loc_0028B371: ;
    ecx = (uint32_t)(int32_t)SMEM8(edi + 0x3A);
    ecx = ecx + ecx * 2;
    MEM16(ecx * 4 + 0x86EC7A) = LO16(eax);
    eax = (uint32_t)(int32_t)SMEM8(edi + 0x3A);
    edx = eax + eax * 2;
    SET_LO8(eax, MEM8(edi + 0x38));
    MEM8(edx * 4 + 0x86EC80) = LO8(eax);

loc_0028B391: ;
    if (CMP_NE(MEM8(edi + 0x34), 4)) goto loc_0028B3DC; /* jne: not equal / not zero */

loc_0028B397: ;
    eax = (uint32_t)(int32_t)SMEM8(edi + 0x3A);
    SET_LO16(edx, MEM16(edi + 0x36));
    ecx = eax + eax * 2;
    MEM16(ecx * 4 + 0x86EC7A) = LO16(edx);
    eax = (uint32_t)(int32_t)SMEM8(edi + 0x3A);
    SET_LO8(ecx, MEM8(edi + 0x38));
    eax = eax + eax * 2;
    MEM8(eax * 4 + 0x86EC80) = LO8(ecx);
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(edi + 0x38));
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(edi + 0x3A));
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(edi + 0x39));
    PUSH32(esp, edx);
    edx = 0; /* xor self */
    SET_LO16(edx, MEM16(edi + 0x36));
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);

loc_0028B3D4: ;
    PUSH32(esp, 0); sub_0028B3F0(); /* call 0x0028B3F0 */

loc_0028B3D9: ;
    esp = esp + 0x10;

loc_0028B3DC: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0028B3DF: ;
    eax = 1;
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
 * sub_0028B3F0
 * Original: 0x0028B3F0 - 0x0028B52F (319 bytes, 95 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028B3F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0028B3F0: ;
    PUSH32(esp, ecx);
    SET_LO8(eax, MEM8(0x862C5C));
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_0028B52C; /* je: equal / zero */

loc_0028B401: ;
    (void)0; /* cmp MEM8(0x864EC1), LO8(ebx) - flags set for next jcc */
    MEM32(esp + 4) = ebx;
    if (CMP_LE(MEM8(0x864EC1), LO8(ebx))) goto loc_0028B52C; /* jle: less or equal (signed <=) */

loc_0028B411: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = 0x8658A4;
    /* nop */

loc_0028B420: ;
    if (CMP_NE(MEM32(0x84A19C), ebx)) goto loc_0028B42D; /* jne: not equal / not zero */

loc_0028B428: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0028B42D: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (CMP_EQ(esi, ebx)) goto loc_0028B477; /* je: equal / zero */

loc_0028B453: ;
    if (CMP_B(MEM32(esi + 0x80), 0x3C)) goto loc_0028B477; /* jb: below (unsigned <) */

loc_0028B45C: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0028B466: ;
    PUSH32(esp, 0x3C);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0028B46E: ;
    esi = eax;
    esp = esp + 8;
    if (CMP_NE(esi, ebx)) goto loc_0028B49A; /* jne: not equal / not zero */

loc_0028B477: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0028B489: ;
    PUSH32(esp, 0x3C);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0028B491: ;
    esi = eax;
    esp = esp + 8;
    if (CMP_EQ(esi, ebx)) goto loc_0028B50B; /* je: equal / zero */

loc_0028B49A: ;
    SET_LO16(eax, MEM16(esp + 0x18));
    SET_LO8(ecx, MEM8(esp + 0x1C));
    SET_LO8(edx, MEM8(esp + 0x20));
    MEM16(esi + 0x36) = LO16(eax);
    SET_LO8(eax, MEM8(esp + 0x24));
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
    MEM32(esi) = 0x604C80;
    MEM8(esi + 0x34) = 4;
    MEM8(esi + 0x38) = LO8(ebx);
    MEM8(esi + 0x39) = LO8(ebx);
    MEM8(esi + 0x3A) = LO8(ebx);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x1F4);
    MEM8(esi + 0x39) = LO8(ecx);
    MEM8(esi + 0x3A) = LO8(edx);
    MEM8(esi + 0x38) = LO8(eax);
    PUSH32(esp, 0); sub_004168D0(); /* call 0x004168D0 */

loc_0028B500: ;
    eax = MEM32(ebp);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_0028B50B: ;
    eax = MEM32(esp + 0x10);
    ecx = (uint32_t)(int32_t)SMEM8(0x864EC1);
    eax++;
    ebp = ebp + 0xA50;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(eax, ecx)) goto loc_0028B420; /* jl: less (signed <) */

loc_0028B529: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);

loc_0028B52C: ;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0028B530
 * Original: 0x0028B530 - 0x0028B560 (48 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028B530(void)
{

loc_0028B530: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    eax = (uint32_t)(int32_t)SMEM16(edi + 0x3E);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0028B543: ;
    eax = MEM32(edi + 0x40);
    PUSH32(esp, 2);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0028B54D: ;
    eax = ZX8(MEM8(edi + 0x44));
    PUSH32(esp, 2);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0028B558: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0028B5A0
 * Original: 0x0028B5A0 - 0x0028B5C2 (34 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028B5A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0028B5A0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    (void)0; /* cmp MEM32(esi), 0 - flags set for next jcc */
    PUSH32(esp, edi);
    edi = ecx + 0x34;
    if (CMP_NE(MEM32(esi), 0)) { sub_0028B5C2(); return; } /* jne: not equal / not zero */

loc_0028B5AF: ;
    PUSH32(esp, 0xA);
    PUSH32(esp, edi);
    ebx = esi;
    PUSH32(esp, 0); sub_0041DF20(); /* call 0x0041DF20 */

loc_0028B5B9: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0028B5F0
 * Original: 0x0028B5F0 - 0x0028B616 (38 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028B5F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0028B5F0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = ecx + 0x34;
    ebx = 0xA;
    /* nop */

loc_0028B600: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0028B607: ;
    esp = esp + 4;
    MEM8(edi) = LO8(eax);
    edi++;
    ebx--;
    if ((ebx != 0)) goto loc_0028B600; /* jne: not equal / not zero */

loc_0028B610: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0028B620
 * Original: 0x0028B620 - 0x0028B7CF (431 bytes, 135 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028B620(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0028B620: ;
    esp = esp - 0xC;
    SET_LO8(eax, MEM8(0x849E9D));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, ebx);
    ebx = ecx;
    MEM32(esp + 4) = ebx;
    if (CMP_G(LO8(eax) & LO8(eax), 0)) goto loc_0028B7C5; /* jg: greater (signed >) */

loc_0028B637: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    SET_LO16(edi, MEM16(ebx + 0x3E));
    ecx = 0x862C40;
    PUSH32(esp, 0); sub_00296370(); /* call 0x00296370 */

loc_0028B647: ;
    ebp = eax;
    if (TEST_Z(ebp, ebp)) goto loc_0028B7C3; /* je: equal / zero */

loc_0028B651: ;
    PUSH32(esp, esi);
    esi = ebp + 0x78C;
    MEM32(esp + 0x14) = esi;
    MEM32(esp + 0x18) = 2;
    goto loc_0028B670;

loc_0028B666: ;
    ebx = MEM32(esp + 0x10);
    /* nop */

loc_0028B670: ;
    SET_LO8(eax, MEM8(ebx + 0x44));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0028B67C; /* jne: not equal / not zero */

loc_0028B677: ;
    edi = MEM32(esi + -8);
    goto loc_0028B67E;

loc_0028B67C: ;
    edi = MEM32(esi);

loc_0028B67E: ;
    ecx = 0x862C40;
    PUSH32(esp, 0); sub_00296370(); /* call 0x00296370 */

loc_0028B688: ;
    ebx = eax;
    if (TEST_Z(ebx, ebx)) goto loc_0028B73C; /* je: equal / zero */

loc_0028B692: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_0028B6A0; /* jne: not equal / not zero */

loc_0028B69B: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0028B6A0: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (TEST_Z(esi, esi)) goto loc_0028B6E8; /* je: equal / zero */

loc_0028B6C6: ;
    if (CMP_B(MEM32(esi + 0x80), 0x48)) goto loc_0028B6E8; /* jb: below (unsigned <) */

loc_0028B6CF: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0028B6D9: ;
    PUSH32(esp, 0x48);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0028B6E1: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_0028B709; /* jne: not equal / not zero */

loc_0028B6E8: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0028B6FA: ;
    PUSH32(esp, 0x48);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0028B702: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0028B728; /* je: equal / zero */

loc_0028B709: ;
    esi = MEM32(esp + 0x10);
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(esi + 0x44));
    edx = esi + 0x34;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x40);
    PUSH32(esp, ecx);
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(esi + 0x3E));
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00289F70(); /* call 0x00289F70 */

loc_0028B726: ;
    goto loc_0028B72A;

loc_0028B728: ;
    eax = 0; /* xor self */

loc_0028B72A: ;
    ecx = MEM32(ebx + 0x9DC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_0028B738: ;
    esi = MEM32(esp + 0x14);

loc_0028B73C: ;
    eax = MEM32(esp + 0x18);
    esi = esi + 4;
    eax--;
    MEM32(esp + 0x14) = esi;
    MEM32(esp + 0x18) = eax;
    if ((eax != 0)) goto loc_0028B666; /* jne: not equal / not zero */

loc_0028B752: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(edx + 0x40);
    if (TEST_S(eax, eax)) goto loc_0028B7C2; /* jl: less (signed <) */

loc_0028B75D: ;
    if (CMP_GE(eax, 2)) goto loc_0028B7C2; /* jge: greater or equal (signed >=) */

loc_0028B762: ;
    SET_LO8(ecx, MEM8(eax + ebp + 0xA28));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0028B7C2; /* je: equal / zero */

loc_0028B76D: ;
    esi = MEM32(ebp + eax * 8 + 0xA1C);
    (void)0; /* test esi, esi - flags set for next jcc */
    ecx = MEM32(ebp + eax * 8 + 0xA18);
    if (CMP_A(esi & esi, 0)) goto loc_0028B783; /* ja: above (unsigned >) */

loc_0028B77F: ;
    if (CMP_BE(ecx & ecx, 0)) goto loc_0028B7C2; /* jbe: below or equal (unsigned <=) */

loc_0028B783: ;
    if (TEST_S(eax, eax)) goto loc_0028B7A7; /* jl: less (signed <) */

loc_0028B787: ;
    if (CMP_GE(eax, 2)) goto loc_0028B7A7; /* jge: greater or equal (signed >=) */

loc_0028B78C: ;
    SET_LO8(ecx, MEM8(eax + ebp + 0xA28));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0028B7A7; /* je: equal / zero */

loc_0028B797: ;
    ecx = MEM32(ebp + eax * 8 + 0xA18);
    eax = MEM32(ebp + eax * 8 + 0xA1C);
    goto loc_0028B7AB;

loc_0028B7A7: ;
    ecx = 0; /* xor self */
    eax = 0; /* xor self */

loc_0028B7AB: ;
    ebx = MEM32(0x849E74);
    if (TEST_Z(ebx, ebx)) goto loc_0028B7C2; /* je: equal / zero */

loc_0028B7B5: ;
    PUSH32(esp, 0xA);
    edx = edx + 0x34;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0027B590(); /* call 0x0027B590 */

loc_0028B7C2: ;
    POP32(esp, esi);

loc_0028B7C3: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_0028B7C5: ;
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_0028B7D0
 * Original: 0x0028B7D0 - 0x0028B87F (175 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028B7D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0028B7D0: ;
    eax = MEM32(0x84A19C);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(eax, ebx)) goto loc_0028B7E3; /* jne: not equal / not zero */

loc_0028B7DE: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0028B7E3: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (CMP_EQ(esi, ebx)) goto loc_0028B82B; /* je: equal / zero */

loc_0028B809: ;
    if (CMP_B(MEM32(esi + 0x80), 0x48)) goto loc_0028B82B; /* jb: below (unsigned <) */

loc_0028B812: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0028B81C: ;
    PUSH32(esp, 0x48);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0028B824: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_0028B84C; /* jne: not equal / not zero */

loc_0028B82B: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0028B83D: ;
    PUSH32(esp, 0x48);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0028B845: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) { sub_0028B87F(); return; } /* je: equal / zero */

loc_0028B84C: ;
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
    MEM32(eax) = 0x604CE8;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0028B890
 * Original: 0x0028B890 - 0x0028B8EA (90 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028B890(void)
{
    int _flags = 0; /* fallback flag var */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0028B890: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3210);
    PUSH32(esp, esi);
    esi = eax + 0x77A600;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0xC);
    eax++;
    eax = eax << 4;
    eax = eax + esi;
    MEM8(eax + 4) = 0;
    edx = MEM32(esi + 8);
    MEM32(eax) = edx;
    edx = MEM32(ecx);
    eax = eax + 5;
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    SET_LO16(ecx, MEM16(ecx + 8));
    MEM16(eax + 8) = LO16(ecx);
    MEM16(esi + 0xC) = MEM16(esi + 0xC) + 1;
    if (CMP_L(MEM16(esi + 0xC), 0x320)) goto loc_0028B8D7; /* jl: less (signed <) */

loc_0028B8D1: ;
    MEM16(esi + 0xC) = 0;

loc_0028B8D7: ;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0028B8DC: ;
    MEMF(esi) = (float)fp_top(); fp_popp(); /* fstp */
    MEM16(esi + 4) = 0;
    MEM8(esi + 6) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0028B8F0
 * Original: 0x0028B8F0 - 0x0028BBF1 (769 bytes, 223 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028B8F0(void)
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

loc_0028B8F0: ;
    esp = esp - 0x18;
    PUSH32(esp, ebx);
    MEM8(0x849E9E) = 1;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0028B900: ;
    MEMF(esp + 8) = (float)fp_top(); fp_popp(); /* fstp */
    ecx = MEM32(esp + 0x20);
    eax = MEM32(esp + 8);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x3210);
    fp_push(MEMF(ecx + 0x77A600)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_push(MEMF(esp + 8)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    ecx = ecx + 0x77A600;
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    MEM32(esp + 0xC) = ecx;
    MEM32(ecx + 8) = eax;
    /* fstp st(0) */
    ebx = 0;
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_0028B99A; /* jbe: below or equal (unsigned <=) */

loc_0028B93C: ;
    xmm0 = MEMF(esp + 8); /* movss */
    xmm0 = xmm0 - MEMF(ecx); /* subss */
    xmm0 = xmm0 * MEMF(0x648E9C); /* mulss */
    edx = (int32_t)xmm0; /* cvttss2si */
    eax = 0xFFFFFFFDu;
    eax = eax - edx;
    edx = (uint32_t)(int32_t)SMEM16(ecx + 4);
    (void)0; /* cmp edx, eax - flags set for next jcc */
    MEM8(ecx + 6) = 1;
    if (CMP_GE(edx, eax)) goto loc_0028B99D; /* jge: greater or equal (signed >=) */

loc_0028B965: ;
    goto loc_0028B970;

    /* nop */
    edi = edi;

loc_0028B970: ;
    edx = (uint32_t)(int32_t)SMEM16(ecx + 0xC);
    edx = edx << 4;
    MEM8(edx + ecx + 0x14) = 1;
    MEM16(ecx + 0xC) = MEM16(ecx + 0xC) + 1;
    if (CMP_L(MEM16(ecx + 0xC), 0x320)) goto loc_0028B98C; /* jl: less (signed <) */

loc_0028B988: ;
    MEM16(ecx + 0xC) = LO16(ebx);

loc_0028B98C: ;
    MEM16(ecx + 4) = MEM16(ecx + 4) + 1;
    edx = (uint32_t)(int32_t)SMEM16(ecx + 4);
    if (CMP_L(edx, eax)) goto loc_0028B970; /* jl: less (signed <) */

loc_0028B998: ;
    goto loc_0028B99D;

loc_0028B99A: ;
    MEM8(ecx + 6) = LO8(ebx);

loc_0028B99D: ;
    if (CMP_EQ(MEM16(ecx + 0xC), LO16(ebx))) goto loc_0028BBEC; /* je: equal / zero */

loc_0028B9A7: ;
    PUSH32(esp, ebp);
    ebp = MEM32(0x863D04);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x86E9A0);
    SET_LO8(edx, 0); /* xor self */
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    esi = 0; /* xor self */
    ecx = 0x86EC7A;

loc_0028B9C7: ;
    if (CMP_NE(ebp, 1)) goto loc_0028B9D1; /* jne: not equal / not zero */

loc_0028B9CC: ;
    eax = eax | 0xFFFFFFFFu;
    goto loc_0028B9DE;

loc_0028B9D1: ;
    if (CMP_NE(LO16(edi), 0xFFFFFFFEu)) goto loc_0028B9DC; /* jne: not equal / not zero */

loc_0028B9D7: ;
    eax = eax | 0xFFFFFFFFu;
    goto loc_0028B9DE;

loc_0028B9DC: ;
    eax = edi;

loc_0028B9DE: ;
    if (CMP_EQ(MEM16(ecx), LO16(eax))) goto loc_0028B9F1; /* je: equal / zero */

loc_0028B9E3: ;
    ecx = ecx + 0xC;
    esi++;
    if (CMP_L(ecx, 0x86ECDA)) goto loc_0028B9C7; /* jl: less (signed <) */

loc_0028B9EF: ;
    goto loc_0028BA02;

loc_0028B9F1: ;
    eax = esi + esi * 2;
    ecx = (uint32_t)(int32_t)SMEM16(eax * 4 + 0x86EC78);
    MEM32(esp + 0x10) = ecx;
    SET_LO8(edx, 1);

loc_0028BA02: ;
    (void)0; /* cmp LO8(edx), LO8(ebx) - flags set for next jcc */
    eax = MEM32(esp + 0x10);
    MEM32(0x6BEEA4) = eax;
    if (CMP_EQ(LO8(edx), LO8(ebx))) goto loc_0028BBE1; /* je: equal / zero */

loc_0028BA13: ;
    if (CMP_EQ(eax, ebx)) goto loc_0028BA26; /* je: equal / zero */

loc_0028BA17: ;
    edx = MEM32(0x862CC0);
    edx++;
    if (CMP_NE(eax, edx)) goto loc_0028BBE1; /* jne: not equal / not zero */

loc_0028BA26: ;
    eax = MEM32(esp + 0x18);
    (void)0; /* cmp MEM16(eax + 0xC), LO16(ebx) - flags set for next jcc */
    MEM32(esp + 0x20) = ebx;
    if (CMP_LE(MEM16(eax + 0xC), LO16(ebx))) goto loc_0028BBE1; /* jle: less or equal (signed <=) */

loc_0028BA38: ;
    ecx = eax;
    ecx = ecx + 0x10;
    MEM32(esp + 0x14) = ecx;

loc_0028BA41: ;
    edx = MEM32(esp + 0x14);
    if (CMP_NE(MEM8(edx + 4), LO8(ebx))) goto loc_0028BBBD; /* jne: not equal / not zero */

loc_0028BA4E: ;
    esi = 0x86EA38;
    MEM32(esp + 0x1C) = esi;

loc_0028BA57: ;
    if (CMP_NE(MEM32(esp + 0x10), ebx)) goto loc_0028BA62; /* jne: not equal / not zero */

loc_0028BA5D: ;
    edi = MEM32(esi + -8);
    goto loc_0028BA64;

loc_0028BA62: ;
    edi = MEM32(esi);

loc_0028BA64: ;
    ecx = 0x862C40;
    PUSH32(esp, 0); sub_00296370(); /* call 0x00296370 */

loc_0028BA6E: ;
    ebp = eax;
    if (CMP_EQ(ebp, ebx)) goto loc_0028BBAA; /* je: equal / zero */

loc_0028BA78: ;
    if (CMP_NE(MEM32(0x84A19C), ebx)) goto loc_0028BA85; /* jne: not equal / not zero */

loc_0028BA80: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0028BA85: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (CMP_EQ(esi, ebx)) goto loc_0028BACD; /* je: equal / zero */

loc_0028BAAB: ;
    if (CMP_B(MEM32(esi + 0x80), 0x48)) goto loc_0028BACD; /* jb: below (unsigned <) */

loc_0028BAB4: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0028BABE: ;
    PUSH32(esp, 0x48);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0028BAC6: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_0028BB1F; /* jne: not equal / not zero */

loc_0028BACD: ;
    eax = MEM32(0x84A184);
    ecx = MEM32(eax + 0x10);
    ecx = MEM32(ecx + 0x24);
    (void)0; /* cmp ecx, ebx - flags set for next jcc */
    esi = eax;
    MEM32(esp + 0x24) = 0x10;
    if (CMP_EQ(ecx, ebx)) goto loc_0028BAF0; /* je: equal / zero */

loc_0028BAE6: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_0028BAEB: ;
    esp = esp + 8;
    goto loc_0028BB10;

loc_0028BAF0: ;
    SET_LO16(ecx, MEM16(esp + 0x24));
    edx = eax + 0x76;
    MEM8(edx) = LO8(ebx);
    SET_LO8(eax, LO8(ebx));
    /* nop */

loc_0028BB00: ;
    SET_LO16(ecx, LO16(ecx) >> 1);
    SET_LO8(eax, LO8(eax) + 1);
    if (CMP_A(LO16(ecx), 1)) goto loc_0028BB00; /* ja: above (unsigned >) */

loc_0028BB0B: ;
    MEM8(edx) = LO8(eax);
    MEM8(esi + 0x75) = LO8(eax);

loc_0028BB10: ;
    PUSH32(esp, 0x48);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0028BB18: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) goto loc_0028BB96; /* je: equal / zero */

loc_0028BB1F: ;
    if (CMP_EQ(MEM32(0x863D04), 1)) goto loc_0028BB34; /* je: equal / zero */

loc_0028BB28: ;
    ecx = MEM32(0x86E9A0);
    if (CMP_NE(LO16(ecx), 0xFFFFFFFEu)) goto loc_0028BB37; /* jne: not equal / not zero */

loc_0028BB34: ;
    ecx = ecx | 0xFFFFFFFFu;

loc_0028BB37: ;
    edx = MEM32(esp + 0x2C);
    MEM16(eax + 0x3E) = LO16(ecx);
    SET_LO8(ecx, MEM8(esp + 0x10));
    MEM32(eax + 0x40) = edx;
    edx = MEM32(esp + 0x14);
    MEM8(eax + 0x44) = LO8(ecx);
    edx = edx + 5;
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
    MEM32(eax) = 0x604CE8;
    esi = MEM32(edx);
    ecx = eax + 0x34;
    MEM32(ecx) = esi;
    esi = MEM32(edx + 4);
    MEM32(ecx + 4) = esi;
    SET_LO16(edx, MEM16(edx + 8));
    MEM16(ecx + 8) = LO16(edx);
    goto loc_0028BB98;

loc_0028BB96: ;
    eax = 0; /* xor self */

loc_0028BB98: ;
    ecx = MEM32(ebp + 0x9DC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_0028BBA6: ;
    esi = MEM32(esp + 0x1C);

loc_0028BBAA: ;
    esi = esi + 4;
    (void)0; /* cmp esi, 0x86EA40 - flags set for next jcc */
    MEM32(esp + 0x1C) = esi;
    if (CMP_L(esi, 0x86EA40)) goto loc_0028BA57; /* jl: less (signed <) */

loc_0028BBBD: ;
    edx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x20);
    esi = MEM32(esp + 0x14);
    ecx = (uint32_t)(int32_t)SMEM16(edx + 0xC);
    eax++;
    esi = esi + 0x10;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x14) = esi;
    if (CMP_L(eax, ecx)) goto loc_0028BA41; /* jl: less (signed <) */

loc_0028BBE1: ;
    edx = MEM32(esp + 0x18);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM16(edx + 0xC) = LO16(ebx);
    POP32(esp, ebp);

loc_0028BBEC: ;
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
 * sub_0028BC00
 * Original: 0x0028BC00 - 0x0028BC1F (31 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028BC00(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0028BC00: ;
    PUSH32(esp, esi);
    esi = MEM32(0x86E9A0);
    PUSH32(esp, edi);
    edi = MEM32(0x863D04);
    edx = 0; /* xor self */
    ecx = 0x86EC80;
    if (CMP_NE(edi, 1)) { sub_0028BC1F(); return; } /* jne: not equal / not zero */

loc_0028BC1A: ;
    eax = eax | 0xFFFFFFFFu;
    g_seh_ebp = ebp; sub_0028BC2C(); return; /* tail jmp 0x0028BC2C */

}

/**
 * sub_0028BC60
 * Original: 0x0028BC60 - 0x0028BD7D (285 bytes, 81 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028BC60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0028BC60: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xA50);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    eax = eax + 0x864EC8;
    PUSH32(esp, edi);
    esi = eax;
    ebx = 0; /* xor self */
    edi = 0x86EC80;
    ebp = 2;
    /* nop */

loc_0028BC80: ;
    SET_LO16(eax, MEM16(edi + -6));
    if (CMP_NE(LO16(eax), MEM16(esi + 0x9D8))) goto loc_0028BD66; /* jne: not equal / not zero */

loc_0028BC91: ;
    ecx = (uint32_t)(int32_t)SMEM8(edi);
    eax = MEM32(esp + 0x14);
    if (CMP_NE(ecx, eax)) goto loc_0028BD66; /* jne: not equal / not zero */

loc_0028BCA0: ;
    if (CMP_EQ(MEM16(edi + -8), 0)) goto loc_0028BCB7; /* je: equal / zero */

loc_0028BCA7: ;
    edx = MEM32(esi + eax * 4 + 4);
    if (CMP_NE(edx, MEM32(0x862CC0))) goto loc_0028BD66; /* jne: not equal / not zero */

loc_0028BCB7: ;
    if (CMP_EQ(MEM32(0x863D04), ebp)) goto loc_0028BCCC; /* je: equal / zero */

loc_0028BCBF: ;
    if (CMP_EQ(MEM32(0x75864C), 0xFFFFFFFFu)) goto loc_0028BD66; /* je: equal / zero */

loc_0028BCCC: ;
    SET_LO8(eax, MEM8(esi + 0xA28));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0028BD66; /* je: equal / zero */

loc_0028BCDA: ;
    (void)0; /* cmp MEM32(0x863D04), ebp - flags set for next jcc */
    eax = MEM32(esi + 0xA18);
    ecx = MEM32(esi + 0xA1C);
    if (CMP_EQ(MEM32(0x863D04), ebp)) goto loc_0028BD10; /* je: equal / zero */

loc_0028BCEE: ;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = 0; /* xor self */
    PUSH32(esp, 0); sub_004243B0(); /* call 0x004243B0 */

loc_0028BCF7: ;
    esp = esp + 8;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0028BD66; /* jne: not equal / not zero */

loc_0028BCFE: ;
    if (CMP_EQ(MEM32(0x863D04), ebp)) goto loc_0028BD10; /* je: equal / zero */

loc_0028BD06: ;
    SET_LO8(eax, MEM8(esi + 0x774));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0028BD66; /* jne: not equal / not zero */

loc_0028BD10: ;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_0028BD4E; /* je: equal / zero */

loc_0028BD19: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648654);
    PUSH32(esp, 0xA53);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0028BD2C: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_0028BD4E; /* je: equal / zero */

loc_0028BD38: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648624);
    PUSH32(esp, 0xA54);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0028BD4B: ;
    esp = esp + 0x10;

loc_0028BD4E: ;
    if (CMP_NE(MEM32(0x84BEFC), ebp)) goto loc_0028BD66; /* jne: not equal / not zero */

loc_0028BD56: ;
    PUSH32(esp, 0); sub_004A0451(); /* call 0x004A0451 */

loc_0028BD5B: ;
    eax = ZX16(MEM16(eax + 0xA));
    eax = ~eax;
    eax = eax & 1;
    if ((eax != 0)) { sub_0028BD7D(); return; } /* jne: not equal / not zero */

loc_0028BD66: ;
    edi = edi + 0xC;
    ebx++;
    if (CMP_L(edi, 0x86ECE0)) goto loc_0028BC80; /* jl: less (signed <) */

loc_0028BD76: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0028BD90
 * Original: 0x0028BD90 - 0x0028C066 (726 bytes, 219 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028BD90(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0028BD90: ;
    SET_LO8(eax, MEM8(0x87B330));
    esp = esp - 0x18C;
    (void)0; /* test LO8(eax), 1 - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_NZ(LO8(eax), 1)) goto loc_0028BDD3; /* jne: not equal / not zero */

loc_0028BDA3: ;
    MEM32(0x87B330) = MEM32(0x87B330) | 1;
    eax = 0x87B1B0;
    ecx = 0x10;

loc_0028BDB4: ;
    edx = 0; /* xor self */
    MEM32(eax) = edx;
    MEM32(eax + 4) = edx;
    esi = eax;
    ebx = MEM32(esi);
    edi = eax + 8;
    MEM32(edi) = ebx;
    esi = MEM32(esi + 4);
    MEM32(edi + 4) = esi;
    MEM8(eax + 0x10) = LO8(edx);
    eax = eax + 0x18;
    ecx--;
    if ((ecx != 0)) goto loc_0028BDB4; /* jne: not equal / not zero */

loc_0028BDD3: ;
    if (CMP_EQ(MEM32(0x863D04), 2)) goto loc_0028BF55; /* je: equal / zero */

loc_0028BDE0: ;
    eax = esp + 0x1C;
    ecx = 0x10;
    /* nop */

loc_0028BDF0: ;
    edx = 0; /* xor self */
    MEM32(eax) = edx;
    MEM32(eax + 4) = edx;
    esi = eax;
    ebx = MEM32(esi);
    edi = eax + 8;
    MEM32(edi) = ebx;
    esi = MEM32(esi + 4);
    MEM32(edi + 4) = esi;
    MEM8(eax + 0x10) = LO8(edx);
    eax = eax + 0x18;
    ecx--;
    if ((ecx != 0)) goto loc_0028BDF0; /* jne: not equal / not zero */

loc_0028BE0F: ;
    edx = (uint32_t)(int32_t)SMEM8(0x864EC1);
    eax = 0; /* xor self */
    (void)0; /* test edx, edx - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    if (CMP_LE(edx & edx, 0)) goto loc_0028BED6; /* jle: less or equal (signed <=) */

loc_0028BE24: ;
    edi = esp + 0x2C;
    esi = esp + 0x24;
    ecx = esp + 0x1C;
    eax = 0x8658E0;
    MEM32(esp + 0x14) = edx;
    /* nop */

loc_0028BE40: ;
    edx = ZX8(MEM8(eax + -704));
    (void)0; /* test LO8(edx), 1 - flags set for next jcc */
    MEM32(esp + 0x18) = edx;
    if (TEST_Z(LO8(edx), 1)) goto loc_0028BE83; /* je: equal / zero */

loc_0028BE50: ;
    SET_LO8(edx, MEM8(eax + 0x10));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0028BE83; /* je: equal / zero */

loc_0028BE57: ;
    ebp = MEM32(eax);
    ebx = MEM32(eax + 4);
    edx = ebp;
    edx = edx | ebx;
    if ((edx == 0)) goto loc_0028BE83; /* je: equal / zero */

loc_0028BE62: ;
    edx = ebx;
    MEM32(ecx + 4) = edx;
    SET_LO8(edx, MEM8(eax + -604));
    MEM32(ecx) = ebp;
    MEM8(edi) = LO8(edx);
    edx = MEM32(esp + 0x10);
    edx++;
    ecx = ecx + 0x18;
    esi = esi + 0x18;
    MEM32(esp + 0x10) = edx;
    edi = edi + 0x18;

loc_0028BE83: ;
    if (TEST_Z(MEM8(esp + 0x18), 2)) goto loc_0028BEBE; /* je: equal / zero */

loc_0028BE8A: ;
    SET_LO8(edx, MEM8(eax + 0x11));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0028BEBE; /* je: equal / zero */

loc_0028BE91: ;
    ebx = MEM32(eax + 8);
    ebp = MEM32(eax + 0xC);
    edx = ebx;
    edx = edx | ebp;
    if ((edx == 0)) goto loc_0028BEBE; /* je: equal / zero */

loc_0028BE9D: ;
    edx = ebp;
    MEM32(esi + 4) = edx;
    SET_LO8(edx, MEM8(eax + -603));
    MEM32(esi) = ebx;
    MEM8(edi) = LO8(edx);
    edx = MEM32(esp + 0x10);
    edx++;
    ecx = ecx + 0x18;
    esi = esi + 0x18;
    MEM32(esp + 0x10) = edx;
    edi = edi + 0x18;

loc_0028BEBE: ;
    edx = MEM32(esp + 0x14);
    eax = eax + 0xA50;
    edx--;
    MEM32(esp + 0x14) = edx;
    if ((edx != 0)) goto loc_0028BE40; /* jne: not equal / not zero */

loc_0028BED2: ;
    eax = MEM32(esp + 0x10);

loc_0028BED6: ;
    if (CMP_NE(eax, MEM32(0x875864))) goto loc_0028C03C; /* jne: not equal / not zero */

loc_0028BEE2: ;
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(esp + 0x14) = ebx;
    if (CMP_LE(eax, ebx)) goto loc_0028BF48; /* jle: less or equal (signed <=) */

loc_0028BEEC: ;
    /* nop */

loc_0028BEF0: ;
    edi = ebx + 0x87B1B0;
    esi = esp + ebx + 0x1C;
    edx = edi;
    ecx = 0; /* xor self */
    eax = esi;
    edx = edx - esi;

loc_0028BF02: ;
    ebp = MEM32(eax);
    if (CMP_NE(ebp, MEM32(edx + eax))) goto loc_0028C03C; /* jne: not equal / not zero */

loc_0028BF0D: ;
    ebp = MEM32(eax + 4);
    if (CMP_NE(ebp, MEM32(edx + eax + 4))) goto loc_0028C03C; /* jne: not equal / not zero */

loc_0028BF1A: ;
    ecx++;
    eax = eax + 8;
    if (CMP_L(ecx, 2)) goto loc_0028BF02; /* jl: less (signed <) */

loc_0028BF23: ;
    SET_LO8(eax, MEM8(esi + 0x10));
    (void)0; /* cmp LO8(eax), MEM8(edi + 0x10) - flags set for next jcc */
    SET_LO8(eax, (CMP_NE(LO8(eax), MEM8(edi + 0x10))) ? 1 : 0); /* setne */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0028C03C; /* jne: not equal / not zero */

loc_0028BF34: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x10);
    eax++;
    ebx = ebx + 0x18;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x14) = eax;
    if (CMP_L(eax, ecx)) goto loc_0028BEF0; /* jl: less (signed <) */

loc_0028BF48: ;
    SET_LO8(eax, MEM8(0x6BF17A));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0028C031; /* je: equal / zero */

loc_0028BF55: ;
    ebx = MEM32(0x849E74);
    (void)0; /* test ebx, ebx - flags set for next jcc */
    MEM8(0x6BF17A) = 0;
    if (TEST_Z(ebx, ebx)) goto loc_0028BF71; /* je: equal / zero */

loc_0028BF66: ;
    PUSH32(esp, 0); sub_0027B520(); /* call 0x0027B520 */

loc_0028BF6B: ;
    ebx = MEM32(0x849E74);

loc_0028BF71: ;
    SET_LO8(eax, MEM8(0x864EC1));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(esp + 0x18) = 0;
    if (CMP_LE(LO8(eax) & LO8(eax), 0)) goto loc_0028C031; /* jle: less or equal (signed <=) */

loc_0028BF86: ;
    eax = 0x8658E0;
    MEM32(esp + 0x14) = eax;
    /* nop */

loc_0028BF90: ;
    ebp = eax;
    edi = eax + -2584;
    esi = 0; /* xor self */
    MEM32(esp + 0x10) = ebp;
    edi = edi;

loc_0028BFA0: ;
    SET_LO8(eax, MEM8(eax + -704));
    edx = 1;
    ecx = esi;
    edx = edx << LO8(ecx);
    if (TEST_Z(LO8(eax), LO8(edx))) goto loc_0028BFFF; /* je: equal / zero */

loc_0028BFB3: ;
    if (CMP_NE(MEM32(0x863D04), 2)) { sub_0028C066(); return; } /* jne: not equal / not zero */

loc_0028BFC0: ;
    if (TEST_Z(ebx, ebx)) goto loc_0028BFF0; /* je: equal / zero */

loc_0028BFC4: ;
    eax = (uint32_t)(int32_t)SMEM8(edi + esi + 0x14);
    eax = eax + 0xA;
    esp = esp - 0xC;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ebp = esp;
    MEM32(ebp) = eax;
    ecx = 0; /* xor self */
    MEM32(ebp + 4) = edx;
    MEM32(ebp + 8) = ecx;
    ecx = MEM32(ebx + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_004343DE(); /* call 0x004343DE */

loc_0028BFE6: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0027B300(); /* call 0x0027B300 */

loc_0028BFEC: ;
    ebp = MEM32(esp + 0x10);

loc_0028BFF0: ;
    ecx = edi;
    eax = esi;
    PUSH32(esp, 0); sub_00299D60(); /* call 0x00299D60 */

loc_0028BFF9: ;
    ebx = MEM32(0x849E74);

loc_0028BFFF: ;
    eax = MEM32(esp + 0x14);
    esi++;
    ebp = ebp + 8;
    (void)0; /* cmp esi, 2 - flags set for next jcc */
    MEM32(esp + 0x10) = ebp;
    if (CMP_L(esi, 2)) goto loc_0028BFA0; /* jl: less (signed <) */

loc_0028C010: ;
    ecx = MEM32(esp + 0x18);
    edx = (uint32_t)(int32_t)SMEM8(0x864EC1);
    ecx++;
    eax = eax + 0xA50;
    (void)0; /* cmp ecx, edx - flags set for next jcc */
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x14) = eax;
    if (CMP_L(ecx, edx)) goto loc_0028BF90; /* jl: less (signed <) */

loc_0028C031: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x18C;
    esp += 4; return; /* ret */

loc_0028C03C: ;
    eax = MEM32(esp + 0x10);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(0x875864) = eax;
    if (CMP_LE(eax & eax, 0)) goto loc_0028BF55; /* jle: less or equal (signed <=) */

loc_0028C04D: ;
    ecx = eax + eax * 2;
    ecx = ecx << 3;
    ecx = ecx >> 2;
    esi = esp + 0x1C;
    edi = 0x87B1B0;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    goto loc_0028BF55;

}

/**
 * sub_0028C0E0
 * Original: 0x0028C0E0 - 0x0028C3EB (779 bytes, 195 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028C0E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0028C0E0: ;
    eax = MEM32(0x6B842C);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_0028C0EE: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00538690(); /* call 0x00538690 */

loc_0028C0F5: ;
    PUSH32(esp, 0x1B02);
    PUSH32(esp, 0); sub_00537840(); /* call 0x00537840 */

loc_0028C0FF: ;
    ebx = 0; /* xor self */
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00537070(); /* call 0x00537070 */

loc_0028C107: ;
    edi = 1;
    edx = edi;
    ecx = 0x40304;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0028C118: ;
    edx = 0; /* xor self */
    ecx = 0x40300;
    MEM32(0x549AE4) = edi;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0028C12A: ;
    PUSH32(esp, edi);
    MEM32(0x549AE8) = ebx;
    PUSH32(esp, 0); sub_00537190(); /* call 0x00537190 */

loc_0028C136: ;
    edx = 0x203;
    ecx = 0x40354;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0028C145: ;
    edx = 0; /* xor self */
    ecx = 0x4035C;
    MEM32(0x549ADC) = 0x203;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0028C15B: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | 0x1200;
    PUSH32(esp, ebx);
    esi = 0; /* xor self */
    MEM32(0x549AF8) = ebx;
    MEM32(0x549B90) = ebx;
    PUSH32(esp, 0); sub_005379C0(); /* call 0x005379C0 */

loc_0028C179: ;
    ecx = MEM32(0x5499F0);
    eax = 2;
    ecx = ecx | 0xC01;
    MEM32(0x547360) = eax;
    MEM32(0x547368) = eax;
    MEM32(0x547370) = eax;
    MEM32(0x54737C) = eax;
    eax = 3;
    MEM32(0x5499F0) = ecx;
    edx = 0x302;
    ecx = 0x40344;
    MEM32(0x547378) = ebx;
    MEM32(0x547330) = eax;
    MEM32(0x547334) = eax;
    MEM32(0x5473E0) = edi;
    MEM32(0x5473F0) = edi;
    MEM32(0x547384) = ebx;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0028C1DA: ;
    edx = 0x303;
    ecx = 0x40348;
    MEM32(0x549AF0) = 0x302;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0028C1F3: ;
    (void)0; /* cmp MEM8(0x75C5BC), LO8(ebx) - flags set for next jcc */
    MEM32(0x549AF4) = 0x303;
    if (CMP_BE(MEM8(0x75C5BC), LO8(ebx))) goto loc_0028C295; /* jbe: below or equal (unsigned <=) */

loc_0028C209: ;
    esi = MEM32(0x75C5B8);
    if (CMP_NE(MEM32(esi + 8), ebx)) goto loc_0028C23C; /* jne: not equal / not zero */

loc_0028C214: ;
    ecx = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5E0D08);
    PUSH32(esp, 0x14);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_0005E4E0(); /* call 0x0005E4E0 */

loc_0028C225: ;
    esp = esp + 0xC;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_0028C22D: ;
    edx = MEM32(0x75C5B8);
    MEM32(edx + 8) = eax;
    esi = MEM32(0x75C5B8);

loc_0028C23C: ;
    if (CMP_NE(MEM32(esi + 0x10), ebx)) goto loc_0028C264; /* jne: not equal / not zero */

loc_0028C241: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, 0); sub_0034F320(); /* call 0x0034F320 */

loc_0028C249: ;
    MEM32(esi + 0x10) = eax;
    esi = MEM32(0x75C5B8);
    if (CMP_NE(MEM32(esi + 0x10), ebx)) goto loc_0028C264; /* jne: not equal / not zero */

loc_0028C257: ;
    MEM32(esi + 0x10) = 0xFFFFFFFFu;
    esi = MEM32(0x75C5B8);

loc_0028C264: ;
    ecx = MEM32(esi + 0x10);
    if (CMP_NE(ecx, 0xFFFFFFFFu)) goto loc_0028C28D; /* jne: not equal / not zero */

loc_0028C26C: ;
    ecx = MEM32(esi + 4);
    (void)0; /* cmp ecx, ebx - flags set for next jcc */
    eax = esi + 4;
    if (CMP_NE(ecx, ebx)) goto loc_0028C288; /* jne: not equal / not zero */

loc_0028C276: ;
    PUSH32(esp, eax);
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00075E90(); /* call 0x00075E90 */

loc_0028C27F: ;
    esi = MEM32(0x75C5B8);
    esp = esp + 8;

loc_0028C288: ;
    esi = MEM32(esi + 4);
    goto loc_0028C295;

loc_0028C28D: ;
    PUSH32(esp, 0); sub_0034F360(); /* call 0x0034F360 */

loc_0028C292: ;
    esi = MEM32(eax + 4);

loc_0028C295: ;
    eax = MEM32(esi + 4);
    if (CMP_A(eax, 4)) goto loc_0028C2C2; /* ja: above (unsigned >) */

loc_0028C29D: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x28C3EC); /* switch: 5 entries, 5 targets */
    if (_jt == 0x0028C2A4u) goto loc_0028C2A4;
    if (_jt == 0x0028C2AAu) goto loc_0028C2AA;
    if (_jt == 0x0028C2AFu) goto loc_0028C2AF;
    if (_jt == 0x0028C2B5u) goto loc_0028C2B5;
    if (_jt == 0x0028C2C2u) goto loc_0028C2C2;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0028C2A4: ;
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, ecx);
    goto loc_0028C2BB;

loc_0028C2AA: ;
    edx = MEM32(esi + 0x1C);
    goto loc_0028C2BA;

loc_0028C2AF: ;
    eax = MEM32(esi + 0x1C);
    PUSH32(esp, eax);
    goto loc_0028C2BB;

loc_0028C2B5: ;
    ecx = MEM32(esi + 0x1C);
    edx = MEM32(ecx);

loc_0028C2BA: ;
    PUSH32(esp, edx);

loc_0028C2BB: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_0028C2C2: ;
    edi = ZX8(MEM8(esp + 0x20));
    edi = edi << 0x18;
    esi = 0x1D;
    edi = edi | 0xFFFFFF;
    PUSH32(esp, 0); sub_0053C660(); /* call 0x0053C660 */

loc_0028C2DA: ;
    MEM32(eax) = 0x417FC;
    MEM32(eax + 4) = 8;
    eax = eax + 4;
    MEM32(eax + 4) = 0x40601818;
    xmm2 = MEMF(esp + 0x10); /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm2; /* movss */
    xmm3 = MEMF(esp + 0x18); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm3; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    xmm1 = 0.0f; /* xorps self = zero */
    eax = eax + 4;
    MEM32(eax + 4) = edi;
    eax = eax + 4;
    MEMF(eax + 4) = xmm1; /* movss */
    xmm4 = MEMF(esp + 0x14); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm1; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm4; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm3; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    eax = eax + 4;
    MEM32(eax + 4) = edi;
    xmm3 = MEMF(esp + 0x1C); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm1; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm4; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm3; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    eax = eax + 4;
    MEM32(eax + 4) = edi;
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm2; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm3; /* movss */
    ecx = MEM32(0x5499E8);
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    eax = eax + 4;
    MEM32(eax + 4) = edi;
    eax = eax + 4;
    MEMF(eax + 4) = xmm1; /* movss */
    eax = eax + 4;
    eax = eax + 4;
    MEMF(eax) = xmm0; /* movss */
    eax = eax + 4;
    MEM32(eax) = 0x417FC;
    eax = eax + 4;
    MEM32(eax) = ebx;
    POP32(esp, edi);
    eax = eax + 4;
    POP32(esp, esi);
    MEM32(ecx) = eax;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0028C400
 * Original: 0x0028C400 - 0x0028C8E6 (1254 bytes, 314 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028C400(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0028C400: ;
    eax = MEM32(0x7FA1F8);
    esp = esp - 0x30;
    if (CMP_EQ(eax, 0x46)) goto loc_0028C8E2; /* je: equal / zero */

loc_0028C411: ;
    eax = MEM32(0x863D08);
    if (TEST_Z(eax, eax)) goto loc_0028C8E2; /* je: equal / zero */

loc_0028C41E: ;
    if (CMP_EQ(MEM32(0x863D04), 2)) goto loc_0028C8E2; /* je: equal / zero */

loc_0028C42B: ;
    SET_LO8(eax, MEM8(0x863D11));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = 0xC8;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0028C8B8; /* je: equal / zero */

loc_0028C43E: ;
    xmm0 = MEMF(0x8497DC); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0x86EC80;
    MEM32(0x776158) = 0;
    MEMF(0x84B508) = xmm0; /* movss */
    MEM32(esp + 0x14) = 0xC5;
    MEM32(esp + 0x10) = 0xDA;
    MEM32(esp + 0x18) = edi;

loc_0028C474: ;
    if (CMP_NE(MEM16(edi + -8), 0)) goto loc_0028C658; /* jne: not equal / not zero */

loc_0028C47F: ;
    (void)0; /* cmp MEM32(0x863D04), 1 - flags set for next jcc */
    ebx = (uint32_t)(int32_t)SMEM8(edi);
    eax = (uint32_t)(int32_t)SMEM16(edi + -6);
    if (CMP_EQ(MEM32(0x863D04), 1)) goto loc_0028C49B; /* je: equal / zero */

loc_0028C48F: ;
    ecx = MEM32(0x86E9A0);
    if (CMP_NE(LO16(ecx), 0xFFFFFFFEu)) goto loc_0028C49E; /* jne: not equal / not zero */

loc_0028C49B: ;
    ecx = ecx | 0xFFFFFFFFu;

loc_0028C49E: ;
    ecx = SX16(LO16(ecx));
    if (CMP_NE(eax, ecx)) goto loc_0028C55C; /* jne: not equal / not zero */

loc_0028C4A9: ;
    xmm0 = (float)(int32_t)MEM32(esp + 0x10); /* cvtsi2ss */
    PUSH32(esp, 0xB4);
    esp = esp - 8;
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = (float)(int32_t)ebp; /* cvtsi2ss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0x42680000);
    PUSH32(esp, 0x42200000);
    PUSH32(esp, 0); sub_0028C0E0(); /* call 0x0028C0E0 */

loc_0028C4D5: ;
    esp = esp + 0x14;
    ecx = ebx;
    esi = esp + 0x20;
    PUSH32(esp, 0); sub_002896A0(); /* call 0x002896A0 */

loc_0028C4E3: ;
    eax = esi;
    edx = eax + 1;

loc_0028C4E8: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0028C4E8; /* jne: not equal / not zero */

loc_0028C4EF: ;
    xmm0 = MEMF(0x648EA8); /* movss */
    eax = eax - edx;
    if (CMP_A(eax, 0xC)) goto loc_0028C506; /* ja: above (unsigned >) */

loc_0028C4FE: ;
    xmm0 = MEMF(0x648D10); /* movss */

loc_0028C506: ;
    PUSH32(esp, 0); sub_001F2B30(); /* call 0x001F2B30 */

loc_0028C50B: ;
    esi = MEM32(esp + 0x14);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0x5D4CAC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x3C);
    SET_LO8(ecx, 0x80);
    MEM8(0x776171) = 0xE1;
    MEM8(0x776170) = 0x19;
    MEM8(0x77616F) = 0x19;
    MEM8(0x77616E) = 0xB4;
    PUSH32(esp, 0); sub_001F25F0(); /* call 0x001F25F0 */

loc_0028C53F: ;
    ecx = MEM32(esp + 0x20);
    ecx = ecx + 0x14;
    esp = esp + 0x10;
    ebp = ebp + 0x14;
    esi = esi + 0x14;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = esi;
    goto loc_0028C658;

loc_0028C55C: ;
    if (CMP_EQ(eax, 0xFFFFFFFEu)) goto loc_0028C658; /* je: equal / zero */

loc_0028C565: ;
    edi = eax;
    ecx = 0x862C40;
    PUSH32(esp, 0); sub_00296370(); /* call 0x00296370 */

loc_0028C571: ;
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_0028C654; /* je: equal / zero */

loc_0028C57B: ;
    ecx = esi;
    ecx = ecx - 0x864EC8;
    eax = 0x634C0635;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)((int32_t)edx >> 0xA);
    eax = edx;
    eax = eax >> 0x1F;
    PUSH32(esp, ebx);
    eax = eax + edx;
    PUSH32(esp, 0); sub_0028BC60(); /* call 0x0028BC60 */

loc_0028C59A: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_0028C654; /* je: equal / zero */

loc_0028C5A5: ;
    xmm0 = (float)(int32_t)MEM32(esp + 0x10); /* cvtsi2ss */
    PUSH32(esp, 0xB4);
    esp = esp - 8;
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = (float)(int32_t)ebp; /* cvtsi2ss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0x42680000);
    PUSH32(esp, 0x42200000);
    PUSH32(esp, 0); sub_0028C0E0(); /* call 0x0028C0E0 */

loc_0028C5D1: ;
    esp = esp + 0x14;
    eax = ebx;
    ecx = esi;
    PUSH32(esp, 0); sub_00299D60(); /* call 0x00299D60 */

loc_0028C5DD: ;
    edx = eax + 1;

loc_0028C5E0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0028C5E0; /* jne: not equal / not zero */

loc_0028C5E7: ;
    xmm0 = MEMF(0x648EA8); /* movss */
    eax = eax - edx;
    if (CMP_A(eax, 0xC)) goto loc_0028C5FE; /* ja: above (unsigned >) */

loc_0028C5F6: ;
    xmm0 = MEMF(0x648D10); /* movss */

loc_0028C5FE: ;
    PUSH32(esp, 0); sub_001F2B30(); /* call 0x001F2B30 */

loc_0028C603: ;
    eax = ebx;
    ecx = esi;
    MEM8(0x776171) = 0xE1;
    MEM8(0x776170) = 0x19;
    MEM8(0x77616F) = 0x19;
    MEM8(0x77616E) = 0xB4;
    PUSH32(esp, 0); sub_00299D60(); /* call 0x00299D60 */

loc_0028C628: ;
    esi = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5D4CAC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x3C);
    SET_LO8(ecx, 0x80);
    PUSH32(esp, 0); sub_001F25F0(); /* call 0x001F25F0 */

loc_0028C63C: ;
    ecx = MEM32(esp + 0x20);
    ecx = ecx + 0x14;
    esp = esp + 0x10;
    ebp = ebp + 0x14;
    esi = esi + 0x14;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = esi;

loc_0028C654: ;
    edi = MEM32(esp + 0x18);

loc_0028C658: ;
    edi = edi + 0xC;
    (void)0; /* cmp edi, 0x86ECE0 - flags set for next jcc */
    MEM32(esp + 0x18) = edi;
    if (CMP_L(edi, 0x86ECE0)) goto loc_0028C474; /* jl: less (signed <) */

loc_0028C66B: ;
    eax = MEM32(0x862CC0);
    eax++;
    ecx = ebp + -3;
    edx = ebp + 0x12;
    edi = 0x86EC80;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x14) = edi;
    /* nop */

loc_0028C690: ;
    eax = (uint32_t)(int32_t)SMEM16(edi + -8);
    if (CMP_NE(eax, MEM32(esp + 0x1C))) goto loc_0028C8A2; /* jne: not equal / not zero */

loc_0028C69E: ;
    (void)0; /* cmp MEM32(0x863D04), 1 - flags set for next jcc */
    ebx = (uint32_t)(int32_t)SMEM8(edi);
    eax = (uint32_t)(int32_t)SMEM16(edi + -6);
    if (CMP_EQ(MEM32(0x863D04), 1)) goto loc_0028C6BA; /* je: equal / zero */

loc_0028C6AE: ;
    ecx = MEM32(0x86E9A0);
    if (CMP_NE(LO16(ecx), 0xFFFFFFFEu)) goto loc_0028C6BD; /* jne: not equal / not zero */

loc_0028C6BA: ;
    ecx = ecx | 0xFFFFFFFFu;

loc_0028C6BD: ;
    ecx = SX16(LO16(ecx));
    if (CMP_NE(eax, ecx)) goto loc_0028C7AD; /* jne: not equal / not zero */

loc_0028C6C8: ;
    xmm0 = (float)(int32_t)MEM32(esp + 0x10); /* cvtsi2ss */
    PUSH32(esp, 0xB4);
    esp = esp - 8;
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = (float)(int32_t)ebp; /* cvtsi2ss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0x42680000);
    PUSH32(esp, 0x42200000);
    PUSH32(esp, 0); sub_0028C0E0(); /* call 0x0028C0E0 */

loc_0028C6F4: ;
    esp = esp + 0x14;
    ecx = ebx;
    esi = esp + 0x20;
    PUSH32(esp, 0); sub_002896A0(); /* call 0x002896A0 */

loc_0028C702: ;
    eax = esi;
    edx = eax + 1;

loc_0028C707: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0028C707; /* jne: not equal / not zero */

loc_0028C70E: ;
    eax = eax - edx;
    (void)0; /* cmp eax, 0xC - flags set for next jcc */
    SET_LO8(eax, MEM8(0x7819D5));
    if (CMP_BE(eax, 0xC)) goto loc_0028C738; /* jbe: below or equal (unsigned <=) */

loc_0028C71A: ;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = MEMF(0x648EA8); /* movss */
    MEMF(0x77615C) = xmm0; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0028C75C; /* je: equal / zero */

loc_0028C72E: ;
    xmm0 = MEMF(0x648D10); /* movss */
    goto loc_0028C754;

loc_0028C738: ;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = MEMF(0x648D10); /* movss */
    MEMF(0x77615C) = xmm0; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0028C75C; /* je: equal / zero */

loc_0028C74C: ;
    xmm0 = MEMF(0x64A70C); /* movss */

loc_0028C754: ;
    MEMF(0x77615C) = xmm0; /* movss */

loc_0028C75C: ;
    esi = MEM32(esp + 0x18);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0x5D4CAC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x3C);
    SET_LO8(ecx, 0x80);
    MEM8(0x776171) = 0x7D;
    MEM8(0x776170) = 0xE1;
    MEM8(0x77616F) = 0x19;
    MEM8(0x77616E) = 0xB4;
    PUSH32(esp, 0); sub_001F25F0(); /* call 0x001F25F0 */

loc_0028C790: ;
    ecx = MEM32(esp + 0x20);
    ecx = ecx + 0x14;
    esp = esp + 0x10;
    ebp = ebp + 0x14;
    esi = esi + 0x14;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x18) = esi;
    goto loc_0028C8A2;

loc_0028C7AD: ;
    if (CMP_EQ(eax, 0xFFFFFFFEu)) goto loc_0028C8A2; /* je: equal / zero */

loc_0028C7B6: ;
    edi = eax;
    ecx = 0x862C40;
    PUSH32(esp, 0); sub_00296370(); /* call 0x00296370 */

loc_0028C7C2: ;
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_0028C89E; /* je: equal / zero */

loc_0028C7CC: ;
    ecx = esi;
    ecx = ecx - 0x864EC8;
    eax = 0x634C0635;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)((int32_t)edx >> 0xA);
    eax = edx;
    eax = eax >> 0x1F;
    PUSH32(esp, ebx);
    eax = eax + edx;
    PUSH32(esp, 0); sub_0028BC60(); /* call 0x0028BC60 */

loc_0028C7EB: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_0028C89E; /* je: equal / zero */

loc_0028C7F6: ;
    xmm0 = (float)(int32_t)MEM32(esp + 0x10); /* cvtsi2ss */
    PUSH32(esp, 0xB4);
    esp = esp - 8;
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = (float)(int32_t)ebp; /* cvtsi2ss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0x42680000);
    PUSH32(esp, 0x42200000);
    PUSH32(esp, 0); sub_0028C0E0(); /* call 0x0028C0E0 */

loc_0028C822: ;
    esp = esp + 0x14;
    eax = ebx;
    ecx = esi;
    PUSH32(esp, 0); sub_00299D60(); /* call 0x00299D60 */

loc_0028C82E: ;
    ecx = eax;
    esi = eax + 1;

loc_0028C833: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_0028C833; /* jne: not equal / not zero */

loc_0028C83A: ;
    xmm0 = MEMF(0x648EA8); /* movss */
    eax = eax - esi;
    if (CMP_A(eax, 0xC)) goto loc_0028C851; /* ja: above (unsigned >) */

loc_0028C849: ;
    xmm0 = MEMF(0x648D10); /* movss */

loc_0028C851: ;
    PUSH32(esp, 0); sub_001F2B30(); /* call 0x001F2B30 */

loc_0028C856: ;
    esi = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5D4CAC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x3C);
    SET_LO8(ecx, 0x80);
    MEM8(0x776171) = 0x7D;
    MEM8(0x776170) = 0xE1;
    MEM8(0x77616F) = 0x19;
    MEM8(0x77616E) = 0xB4;
    PUSH32(esp, 0); sub_001F25F0(); /* call 0x001F25F0 */

loc_0028C886: ;
    ecx = MEM32(esp + 0x20);
    ecx = ecx + 0x14;
    esp = esp + 0x10;
    ebp = ebp + 0x14;
    esi = esi + 0x14;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x18) = esi;

loc_0028C89E: ;
    edi = MEM32(esp + 0x14);

loc_0028C8A2: ;
    edi = edi + 0xC;
    (void)0; /* cmp edi, 0x86ECE0 - flags set for next jcc */
    MEM32(esp + 0x14) = edi;
    if (CMP_L(edi, 0x86ECE0)) goto loc_0028C690; /* jl: less (signed <) */

loc_0028C8B5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0028C8B8: ;
    SET_LO8(eax, MEM8(0x7819D5));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(0x77615C) = xmm0; /* movss */
    POP32(esp, ebp);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0028C8E2; /* je: equal / zero */

loc_0028C8D2: ;
    xmm0 = MEMF(0x648F10); /* movss */
    MEMF(0x77615C) = xmm0; /* movss */

loc_0028C8E2: ;
    esp = esp + 0x30;
    esp += 4; return; /* ret */

}

/**
 * sub_0028C8F0
 * Original: 0x0028C8F0 - 0x0028C94D (93 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028C8F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0028C8F0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x8C);
    (void)0; /* test edi, edi - flags set for next jcc */
    MEM32(esi) = 0x604DC8;
    if (TEST_Z(edi, edi)) goto loc_0028C927; /* je: equal / zero */

loc_0028C905: ;
    eax = edi;
    PUSH32(esp, 0); sub_002539C0(); /* call 0x002539C0 */

loc_0028C90C: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = edi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0028C91A: ;
    esp = esp + 4;
    MEM32(esi + 0x8C) = 0;

loc_0028C927: ;
    (void)0; /* test MEM8(esp + 0x10), 1 - flags set for next jcc */
    MEM32(esi) = 0x5F7704;
    if (TEST_Z(MEM8(esp + 0x10), 1)) goto loc_0028C945; /* je: equal / zero */

loc_0028C934: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    MEM32(esp + 0x14) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0028C942: ;
    esp = esp + 4;

loc_0028C945: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0028C950
 * Original: 0x0028C950 - 0x0028C982 (50 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028C950(void)
{

loc_0028C950: ;
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
    MEM32(eax) = 0x604E40;
    esp += 4; return; /* ret */

}

/**
 * sub_0028C990
 * Original: 0x0028C990 - 0x0028C996 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028C990(void)
{

loc_0028C990: ;
    eax = 0x24;
    esp += 4; return; /* ret */

}

/**
 * sub_0028C9A0
 * Original: 0x0028C9A0 - 0x0028C9EF (79 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028C9A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0028C9A0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_0028C9A8: ;
    edx = 0; /* xor self */
    ecx = 0x6BE940;
    /* nop */

loc_0028C9B0: ;
    if (CMP_EQ(MEM32(ecx), eax)) { sub_0028C9EF(); return; } /* je: equal / zero */

loc_0028C9B4: ;
    ecx = ecx + 0x10;
    edx++;
    if (CMP_L(ecx, 0x6BED90)) goto loc_0028C9B0; /* jl: less (signed <) */

loc_0028C9C0: ;
    edx = 0x600E6C;
    ecx = MEM32(esi + 0x38);
    eax = ZX8(MEM8(esi + 0x35));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(esi + 0x34));
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, 0x6052E8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_0028C9E8: ;
    esp = esp + 0x1C;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0028CA10
 * Original: 0x0028CA10 - 0x0028CA55 (69 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028CA10(void)
{
    int _flags = 0; /* fallback flag var */

loc_0028CA10: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_0028CA18: ;
    edx = 0; /* xor self */
    ecx = 0x6BE940;
    /* nop */

loc_0028CA20: ;
    if (CMP_EQ(MEM32(ecx), eax)) { sub_0028CA55(); return; } /* je: equal / zero */

loc_0028CA24: ;
    ecx = ecx + 0x10;
    edx++;
    if (CMP_L(ecx, 0x6BED90)) goto loc_0028CA20; /* jl: less (signed <) */

loc_0028CA30: ;
    edx = 0x600E6C;
    ecx = MEM32(esi + 0x34);
    eax = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, 0x6052D8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_0028CA4E: ;
    esp = esp + 0x14;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0028CA60
 * Original: 0x0028CA60 - 0x0028CAE3 (131 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028CA60(void)
{
    int _flags = 0; /* fallback flag var */

loc_0028CA60: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    PUSH32(esp, 0); sub_001F7250(); /* call 0x001F7250 */

loc_0028CA6A: ;
    SET_LO8(ebx, LO8(eax));
    PUSH32(esp, 0); sub_001C75D0(); /* call 0x001C75D0 */

loc_0028CA71: ;
    edi = MEM32(esi + 0x20);
    edi++;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(esi + 0x20) = edi;
    ecx = edi;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0028CA82; /* jne: not equal / not zero */

loc_0028CA7E: ;
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_0028CADD; /* jne: not equal / not zero */

loc_0028CA82: ;
    eax = MEM32(0x862CD0);
    esi = MEM32(esi + 0x30);
    edx = MEM32(eax + esi * 4 + 0x142C);
    ecx++;
    edi = eax;
    eax = eax + esi * 4 + 0x142C;
    (void)0; /* cmp edx, ecx - flags set for next jcc */
    if (CMP_G(edx, ecx)) ecx = edx; /* cmovg */
    MEM32(eax) = ecx;
    ecx = MEM32(esi * 4 + 0x74C6D8);
    edx = MEM32(eax);
    ecx++;
    if (CMP_NE(edx, ecx)) goto loc_0028CAD0; /* jne: not equal / not zero */

loc_0028CAB0: ;
    ecx = esi + 1;
    if (CMP_EQ(ecx, 3)) goto loc_0028CAD0; /* je: equal / zero */

loc_0028CAB8: ;
    eax = MEM32(edi + ecx * 4 + 0x142C);
    if (CMP_G(eax, 1)) goto loc_0028CAC9; /* jg: greater (signed >) */

loc_0028CAC4: ;
    eax = 1;

loc_0028CAC9: ;
    MEM32(edi + ecx * 4 + 0x142C) = eax;

loc_0028CAD0: ;
    ecx = MEM32(0x862CD0);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_0028CADD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0028CAF0
 * Original: 0x0028CAF0 - 0x0028CBB0 (192 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028CAF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0028CAF0: ;
    SET_LO8(eax, MEM8(0x864EBD));
    SET_LO8(ecx, MEM8(0x862CA1));
    esp = esp - 0x4C;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = 0; /* xor self */
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, edi);
    MEM8(0x780A20) = 0;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0028CB25; /* jne: not equal / not zero */

loc_0028CB0F: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0028CB25; /* je: equal / zero */

loc_0028CB13: ;
    SET_LO8(eax, MEM8(0x849B80));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0028CB2E; /* je: equal / zero */

loc_0028CB1C: ;
    MEM8(0x864EBD) = 1;
    goto loc_0028CB35;

loc_0028CB25: ;
    SET_LO8(eax, MEM8(0x849B80));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0028CB35; /* jne: not equal / not zero */

loc_0028CB2E: ;
    MEM8(0x864EBD) = 0;

loc_0028CB35: ;
    if (CMP_NE(MEM8(0x77627C), 0xFF)) { sub_0028CBB0(); return; } /* jne: not equal / not zero */

loc_0028CB3E: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_002955D0(); /* call 0x002955D0 */

loc_0028CB45: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x602544;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_0028CB54: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00227390(); /* call 0x00227390 */

loc_0028CB5A: ;
    ebx = eax;
    esp = esp + 0x10;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_0003C1E0(); /* call 0x0003C1E0 */

loc_0028CB66: ;
    edi = eax;
    eax = MEM32(edi + 0x10);
    esi = MEM32(eax + 0x10);
    ecx = MEM32(esi + 0x38);
    eax = eax + 0x10;
    (void)0; /* cmp ecx, ebp - flags set for next jcc */
    MEM8(esi + 0x31) = 1;
    if (CMP_EQ(ecx, ebp)) goto loc_0028CB83; /* je: equal / zero */

loc_0028CB7C: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_0028CB83: ;
    MEM32(esi + 0x38) = ebx;
    eax = MEM32(edi + 0x10);
    ecx = MEM32(eax + 0x10);
    eax = eax + 0x10;
    PUSH32(esp, 0x40800000);
    PUSH32(esp, 4);
    SET_LO8(eax, 0); /* xor self */
    MEM8(ecx + 0x30) = 1;
    PUSH32(esp, 0); sub_0003C1E0(); /* call 0x0003C1E0 */

loc_0028CBA1: ;
    ebx = eax;
    PUSH32(esp, 0); sub_00233630(); /* call 0x00233630 */

loc_0028CBA8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x4C;
    esp += 4; return; /* ret */

}

/**
 * sub_0028DD50
 * Original: 0x0028DD50 - 0x0028DDA0 (80 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028DD50(void)
{
    int _flags = 0; /* fallback flag var */

loc_0028DD50: ;
    eax = (uint32_t)(int32_t)SMEM8(0x77627C);
    eax = eax + eax * 4;
    ecx = MEM32(eax * 8 + 0x776F28);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_002AB2F0(); /* call 0x002AB2F0 */

loc_0028DD6C: ;
    esp = esp + 4;
    if (TEST_Z(esi, esi)) goto loc_0028DD97; /* je: equal / zero */

loc_0028DD73: ;
    eax = MEM32(0x86422C);
    if (TEST_NZ(eax, eax)) goto loc_0028DD97; /* jne: not equal / not zero */

loc_0028DD7C: ;
    PUSH32(esp, 0x6052B4);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00470C66(); /* call 0x00470C66 */

loc_0028DD87: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0028DD97; /* je: equal / zero */

loc_0028DD8E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002AB2F0(); /* call 0x002AB2F0 */

loc_0028DD94: ;
    esp = esp + 4;

loc_0028DD97: ;
    MEM8(0x862CA2) = 7;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0028DDA0
 * Original: 0x0028DDA0 - 0x0028DEF4 (340 bytes, 102 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028DDA0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0028DDA0: ;
    PUSH32(esp, ebx);
    ebx = eax;
    eax = ZX8(MEM8(0x86E980));
    ecx = 0; /* xor self */
    if (TEST_Z(LO8(eax), 1)) goto loc_0028DDB5; /* je: equal / zero */

loc_0028DDB0: ;
    ecx = 1;

loc_0028DDB5: ;
    if (TEST_Z(LO8(eax), 2)) goto loc_0028DDBA; /* je: equal / zero */

loc_0028DDB9: ;
    ecx++;

loc_0028DDBA: ;
    if (CMP_LE(ecx, 1)) { sub_0028DEF4(); return; } /* jle: less or equal (signed <=) */

loc_0028DDC3: ;
    edx = 1;
    ecx = ebx;
    edx = edx << LO8(ecx);
    if (TEST_Z(eax, edx)) { sub_0028DEF4(); return; } /* je: equal / zero */

loc_0028DDD4: ;
    SET_LO8(edx, MEM8(0x86E982));
    SET_LO8(eax, 1);
    SET_LO8(eax, LO8(eax) << LO8(ecx));
    SET_LO8(ecx, MEM8(0x86E980));
    SET_LO8(eax, ~LO8(eax));
    SET_LO8(ecx, LO8(ecx) & LO8(eax));
    MEM8(0x86E980) = LO8(ecx);
    SET_LO8(ecx, MEM8(0x86E981));
    SET_LO8(edx, LO8(edx) & LO8(eax));
    SET_LO8(ecx, LO8(ecx) & LO8(eax));
    MEM8(0x86E982) = LO8(edx);
    MEM8(0x86E981) = LO8(ecx);
    PUSH32(esp, 0); sub_001FF9C0(); /* call 0x001FF9C0 */

loc_0028DE09: ;
    SET_LO8(eax, MEM8(0x862C5C));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0028DEF2; /* jne: not equal / not zero */

loc_0028DE16: ;
    if (CMP_EQ(MEM32(0x863D04), 1)) goto loc_0028DEF2; /* je: equal / zero */

loc_0028DE23: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_0028DE31; /* jne: not equal / not zero */

loc_0028DE2C: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0028DE31: ;
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
    if (TEST_Z(esi, esi)) goto loc_0028DE7B; /* je: equal / zero */

loc_0028DE59: ;
    if (CMP_B(MEM32(esi + 0x80), 0x68)) goto loc_0028DE7B; /* jb: below (unsigned <) */

loc_0028DE62: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0028DE6C: ;
    PUSH32(esp, 0x68);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0028DE74: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_0028DE9C; /* jne: not equal / not zero */

loc_0028DE7B: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0028DE8D: ;
    PUSH32(esp, 0x68);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0028DE95: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0028DEA9; /* je: equal / zero */

loc_0028DE9C: ;
    PUSH32(esp, 2);
    SET_LO8(edx, LO8(ebx));
    PUSH32(esp, 0); sub_00257340(); /* call 0x00257340 */

loc_0028DEA5: ;
    esi = eax;
    goto loc_0028DEAB;

loc_0028DEA9: ;
    esi = 0; /* xor self */

loc_0028DEAB: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x1F4);
    PUSH32(esp, 0); sub_004168D0(); /* call 0x004168D0 */

loc_0028DEB7: ;
    edx = (uint32_t)(int32_t)SMEM8(0x864EC1);
    eax = 0; /* xor self */
    if (CMP_LE(edx & edx, 0)) goto loc_0028DEE0; /* jle: less or equal (signed <=) */

loc_0028DEC4: ;
    ecx = 0x864EC8;
    /* nop */

loc_0028DED0: ;
    if (CMP_NE(MEM8(ecx), 0)) goto loc_0028DEE2; /* jne: not equal / not zero */

loc_0028DED5: ;
    eax++;
    ecx = ecx + 0xA50;
    if (CMP_L(eax, edx)) goto loc_0028DED0; /* jl: less (signed <) */

loc_0028DEE0: ;
    ecx = 0; /* xor self */

loc_0028DEE2: ;
    ecx = MEM32(ecx + 0x9DC);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_0028DEF0: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0028DEF2: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0028DF50
 * Original: 0x0028DF50 - 0x0028E104 (436 bytes, 129 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028DF50(void)
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

loc_0028DF50: ;
    PUSH32(esp, ecx);
    SET_LO8(ecx, MEM8(0x864EC1));
    edx = MEM32(0x6BF190);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    eax = SX8(LO8(ecx));
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    (void)0; /* cmp edx, eax - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_EQ(edx, eax)) goto loc_0028E06B; /* je: equal / zero */

loc_0028DF6E: ;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(esp + 0x10) = ebx;
    if (CMP_LE(eax, ebx)) goto loc_0028E063; /* jle: less or equal (signed <=) */

loc_0028DF7A: ;
    ebp = 0x8658A4;
    /* nop */

loc_0028DF80: ;
    if (CMP_NE(MEM32(0x84A19C), ebx)) goto loc_0028DF8D; /* jne: not equal / not zero */

loc_0028DF88: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0028DF8D: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (CMP_EQ(esi, ebx)) goto loc_0028DFD7; /* je: equal / zero */

loc_0028DFB3: ;
    if (CMP_B(MEM32(esi + 0x80), 0x38)) goto loc_0028DFD7; /* jb: below (unsigned <) */

loc_0028DFBC: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0028DFC6: ;
    PUSH32(esp, 0x38);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0028DFCE: ;
    esi = eax;
    esp = esp + 8;
    if (CMP_NE(esi, ebx)) goto loc_0028DFFA; /* jne: not equal / not zero */

loc_0028DFD7: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0028DFE9: ;
    PUSH32(esp, 0x38);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0028DFF1: ;
    esi = eax;
    esp = esp + 8;
    if (CMP_EQ(esi, ebx)) goto loc_0028E043; /* je: equal / zero */

loc_0028DFFA: ;
    PUSH32(esp, 0xFFFFFFFFu);
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
    MEM32(esi) = 0x604DD8;
    PUSH32(esp, 0x3E8);
    MEM32(esi + 0x34) = ebx;
    PUSH32(esp, 0); sub_004168D0(); /* call 0x004168D0 */

loc_0028E038: ;
    ecx = MEM32(ebp);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_0028E043: ;
    SET_LO8(ecx, MEM8(0x864EC1));
    eax = MEM32(esp + 0x10);
    edx = SX8(LO8(ecx));
    eax++;
    ebp = ebp + 0xA50;
    (void)0; /* cmp eax, edx - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(eax, edx)) goto loc_0028DF80; /* jl: less (signed <) */

loc_0028E063: ;
    eax = SX8(LO8(ecx));
    MEM32(0x6BF190) = eax;

loc_0028E06B: ;
    if (TEST_Z(MEM8(0x776238), 0x20)) { sub_0028E104(); return; } /* je: equal / zero */

loc_0028E078: ;
    (void)0; /* cmp MEM8(0x7FA23C), LO8(ebx) - flags set for next jcc */
    xmm0 = 0.0f; /* xorps self = zero */
    if (CMP_NE(MEM8(0x7FA23C), LO8(ebx))) goto loc_0028E08B; /* jne: not equal / not zero */

loc_0028E083: ;
    xmm0 = MEMF(0x7F9F48); /* movss */

loc_0028E08B: ;
    ecx = MEM32(0x75E500);
    eax = 1;
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    MEMF(esp + 0x10) = xmm0; /* movss */
    if (CMP_NE(ecx, eax)) goto loc_0028E0B8; /* jne: not equal / not zero */

loc_0028E0A0: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648E64)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_0028E0F3; /* ja: above (unsigned >) */

loc_0028E0B8: ;
    ecx = MEM32(0x847024);
    MEM32(0x75E500) = eax;
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
    ecx = 0xAD1;
    MEMF(0x75E504) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_0028E0F3: ;
    edx = MEM32(esp + 0x18);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(edx + 0x862D32) = 4;
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
 * sub_0028E360
 * Original: 0x0028E360 - 0x0028E491 (305 bytes, 98 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028E360(void)
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

loc_0028E360: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 1;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00290F60(); /* call 0x00290F60 */

loc_0028E36E: ;
    SET_LO8(eax, MEM8(0x776238));
    esp = esp + 4;
    if (TEST_Z(LO8(eax), 0x20)) goto loc_0028E41F; /* je: equal / zero */

loc_0028E37E: ;
    PUSH32(esp, 4);
    edi = 0; /* xor self */
    MEM8(ebx + 0x862D32) = 2;
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_0028E38E: ;
    ecx = MEM32(0x84B11C);
    eax = MEM32(ecx);
    esp = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_0028E39D: ;
    SET_LO8(eax, MEM8(0x7FA23C));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = 0.0f; /* xorps self = zero */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0028E3B1; /* jne: not equal / not zero */

loc_0028E3A9: ;
    xmm0 = MEMF(0x7F9F48); /* movss */

loc_0028E3B1: ;
    (void)0; /* cmp MEM32(0x75E500), esi - flags set for next jcc */
    MEMF(esp + 8) = xmm0; /* movss */
    if (CMP_NE(MEM32(0x75E500), esi)) goto loc_0028E3DB; /* jne: not equal / not zero */

loc_0028E3BF: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648E64)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_0028E48D; /* ja: above (unsigned >) */

loc_0028E3DB: ;
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
    MEM32(0x75E500) = esi;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_0028E41B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0028E41F: ;
    PUSH32(esp, 0); sub_00233E00(); /* call 0x00233E00 */

loc_0028E424: ;
    ecx = MEM32(eax + 0x10);
    if (TEST_Z(ecx, ecx)) goto loc_0028E48D; /* je: equal / zero */

loc_0028E42B: ;
    PUSH32(esp, 0); sub_00233E00(); /* call 0x00233E00 */

loc_0028E430: ;
    edx = MEM32(eax + 0xC);
    ecx = edx;
    ecx = ecx >> 1;
    esi = ecx + ecx;
    edx = edx - esi;
    esi = MEM32(eax + 8);
    if (CMP_A(esi, ecx)) goto loc_0028E445; /* ja: above (unsigned >) */

loc_0028E443: ;
    ecx = ecx - esi;

loc_0028E445: ;
    eax = MEM32(eax + 4);
    ecx = MEM32(eax + ecx * 4);
    eax = ecx + edx * 8;
    ecx = MEM32(eax + 4);
    if (TEST_NZ(ecx, ecx)) goto loc_0028E48D; /* jne: not equal / not zero */

loc_0028E455: ;
    eax = MEM32(eax);
    PUSH32(esp, 0x5FB100);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470101(); /* call 0x00470101 */

loc_0028E462: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_0028E48D; /* jne: not equal / not zero */

loc_0028E469: ;
    PUSH32(esp, 0); sub_00233E00(); /* call 0x00233E00 */

loc_0028E46E: ;
    PUSH32(esp, 0); sub_00244840(); /* call 0x00244840 */

loc_0028E473: ;
    PUSH32(esp, 4);
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_0028E47C: ;
    esp = esp + 4;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_002431E0(); /* call 0x002431E0 */

loc_0028E486: ;
    MEM8(ebx + 0x862D32) = 9;

loc_0028E48D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0028E4A0
 * Original: 0x0028E4A0 - 0x0028E54C (172 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028E4A0(void)
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

loc_0028E4A0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00291CF0(); /* call 0x00291CF0 */

loc_0028E4A6: ;
    if (TEST_Z(MEM8(0x776238), 0x20)) goto loc_0028E54A; /* je: equal / zero */

loc_0028E4B3: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 4);
    edi = 0; /* xor self */
    MEM8(eax + 0x862D32) = 8;
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_0028E4C8: ;
    SET_LO8(eax, MEM8(0x7FA23C));
    xmm0 = 0.0f; /* xorps self = zero */
    esp = esp + 4;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    POP32(esp, edi);
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0028E4E0; /* jne: not equal / not zero */

loc_0028E4D8: ;
    xmm0 = MEMF(0x7F9F48); /* movss */

loc_0028E4E0: ;
    ecx = MEM32(0x75E500);
    eax = 1;
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    MEMF(esp) = xmm0; /* movss */
    if (CMP_NE(ecx, eax)) goto loc_0028E50B; /* jne: not equal / not zero */

loc_0028E4F4: ;
    fp_push(MEMF(esp)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648E64)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_0028E54A; /* ja: above (unsigned >) */

loc_0028E50B: ;
    ecx = MEM32(0x847024);
    MEM32(0x75E500) = eax;
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
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_0028E54A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0028E550
 * Original: 0x0028E550 - 0x0028E589 (57 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028E550(void)
{
    int _flags = 0; /* fallback flag var */

loc_0028E550: ;
    ecx = esi;
    edx = 1;
    edx = edx << LO8(ecx);
    if (TEST_Z(MEM8(0x86E980), LO8(edx))) goto loc_0028E588; /* je: equal / zero */

loc_0028E561: ;
    if (TEST_NZ(eax, eax)) goto loc_0028E56C; /* jne: not equal / not zero */

loc_0028E565: ;
    eax = 0x140;
    goto loc_0028E572;

loc_0028E56C: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xD6);

loc_0028E572: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00237D00(); /* call 0x00237D00 */

loc_0028E57B: ;
    esp = esp + 0xC;
    eax--;
    if ((eax != 0)) goto loc_0028E588; /* jne: not equal / not zero */

loc_0028E581: ;
    MEM8(esi + 0x862D32) = 0;

loc_0028E588: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0028E590
 * Original: 0x0028E590 - 0x0028EACE (1342 bytes, 368 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028E590(void)
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

loc_0028E590: ;
    SET_LO8(eax, MEM8(0x864EBD));
    esp = esp - 0x10C;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0028E5B4; /* je: equal / zero */

loc_0028E59F: ;
    if (TEST_NZ(MEM8(0x862CC8), 2)) goto loc_0028E5B4; /* jne: not equal / not zero */

loc_0028E5A8: ;
    PUSH32(esp, 0); sub_00296D50(); /* call 0x00296D50 */

loc_0028E5AD: ;
    MEM8(0x862D33) = 1;

loc_0028E5B4: ;
    ecx = esi;
    eax = 1;
    eax = eax << LO8(ecx);
    if (TEST_Z(MEM8(0x86E980), LO8(eax))) goto loc_0028EAC7; /* je: equal / zero */

loc_0028E5C9: ;
    SET_LO8(eax, MEM8(0x862C6C));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0028EAC7; /* jne: not equal / not zero */

loc_0028E5D6: ;
    SET_LO8(eax, MEM8(0x862C88));
    PUSH32(esp, ebx);
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    SET_LO8(eax, MEM8(0x862C5C));
    PUSH32(esp, edi);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0028E630; /* je: equal / zero */

loc_0028E5E6: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0028E630; /* jne: not equal / not zero */

loc_0028E5EA: ;
    SET_LO8(eax, MEM8(0x864EBB));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0028EAC5; /* je: equal / zero */

loc_0028E5F7: ;
    SET_LO8(edx, 1);
    ecx = esi;
    SET_LO8(edx, LO8(edx) << LO8(ecx));
    MEM8(esi + 0x862D32) = 1;
    SET_LO8(ebx, MEM8(0x86E981));
    PUSH32(esp, 4);
    SET_LO8(edx, ~LO8(edx));
    SET_LO8(ebx, LO8(ebx) & LO8(edx));
    edi = 0; /* xor self */
    MEM8(0x86E981) = LO8(ebx);
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_0028E61D: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_0028E624: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = esp + 0x10C;
    esp += 4; return; /* ret */

loc_0028E630: ;
    SET_LO8(ecx, MEM8(0x864EBB));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0028E67F; /* jne: not equal / not zero */

loc_0028E63A: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0028E67F; /* jne: not equal / not zero */

loc_0028E63E: ;
    if (TEST_NZ(MEM8(0x776238), 0x20)) goto loc_0028E654; /* jne: not equal / not zero */

loc_0028E647: ;
    PUSH32(esp, 0); sub_00234230(); /* call 0x00234230 */

loc_0028E64C: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0028EAC5; /* je: equal / zero */

loc_0028E654: ;
    PUSH32(esp, 5);
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_0028E65D: ;
    esp = esp + 4;
    eax = 1;
    MEM8(esi + 0x862D32) = 4;
    PUSH32(esp, 0); sub_002431E0(); /* call 0x002431E0 */

loc_0028E671: ;
    PUSH32(esp, 0); sub_00296E10(); /* call 0x00296E10 */

loc_0028E676: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = esp + 0x10C;
    esp += 4; return; /* ret */

loc_0028E67F: ;
    SET_LO8(eax, MEM8(0x7819D5));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = MEMF(0x648F58); /* movss */
    MEMF(0x77615C) = xmm0; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0028E6A8; /* je: equal / zero */

loc_0028E698: ;
    xmm0 = MEMF(0x649DDC); /* movss */
    MEMF(0x77615C) = xmm0; /* movss */

loc_0028E6A8: ;
    edi = MEM32(esi * 4 + 0x862CD0);
    SET_LO8(eax, 0xFF);
    MEM8(0x776171) = 0;
    MEM8(0x776170) = LO8(eax);
    MEM8(0x77616F) = 0;
    MEM8(0x77616E) = LO8(eax);
    PUSH32(esp, 0); sub_00351C60(); /* call 0x00351C60 */

loc_0028E6CE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0020C730(); /* call 0x0020C730 */

loc_0028E6D4: ;
    esp = esp + 4;
    if (TEST_NZ(esi, esi)) goto loc_0028E70B; /* jne: not equal / not zero */

loc_0028E6DB: ;
    eax = MEM32(0x86422C);
    if (TEST_Z(eax, eax)) goto loc_0028E70B; /* je: equal / zero */

loc_0028E6E4: ;
    SET_LO8(ecx, MEM8(eax + 0x60));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0028E70B; /* je: equal / zero */

loc_0028E6EB: ;
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x62);
    edi = MEM32(0x862CC0);
    ebx = 0; /* xor self */
    (void)0; /* cmp edi, eax - flags set for next jcc */
    SET_LO8(ebx, (CMP_EQ(edi, eax)) ? 1 : 0); /* sete */
    ebx--;
    ebx = ebx & 0xFFFFFFF1u;
    ebx = ebx + 0x10;
    MEM32(0x776238) = ebx;
    goto loc_0028E711;

loc_0028E70B: ;
    ebx = MEM32(0x776238);

loc_0028E711: ;
    edx = esp + 8;
    PUSH32(esp, 0); sub_0023BD70(); /* call 0x0023BD70 */

loc_0028E71A: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0028E739; /* je: equal / zero */

loc_0028E71E: ;
    ecx = MEM32(esi * 4 + 0x862CC0);
    if (CMP_NE(ecx, MEM32(esp + 8))) goto loc_0028E730; /* jne: not equal / not zero */

loc_0028E72B: ;
    ebx = ebx | 1;
    goto loc_0028E733;

loc_0028E730: ;
    ebx = ebx & 0xFFFFFFFCu;

loc_0028E733: ;
    MEM32(0x776238) = ebx;

loc_0028E739: ;
    if (TEST_Z(LO8(ebx), 3)) goto loc_0028E877; /* je: equal / zero */

loc_0028E742: ;
    SET_LO8(eax, MEM8(0x7FA23C));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = 0.0f; /* xorps self = zero */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0028E756; /* jne: not equal / not zero */

loc_0028E74E: ;
    xmm0 = MEMF(0x7F9F48); /* movss */

loc_0028E756: ;
    ecx = MEM32(0x75E500);
    eax = 2;
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    MEMF(esp + 8) = xmm0; /* movss */
    if (CMP_NE(ecx, eax)) goto loc_0028E783; /* jne: not equal / not zero */

loc_0028E76B: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648E64)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_0028E7BF; /* ja: above (unsigned >) */

loc_0028E783: ;
    MEM32(0x75E500) = eax;
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
    edx = edx | 0xFFFFFFFFu;
    eax = eax | 0xFFFFFFFFu;
    ecx = 0xAD2;
    MEMF(0x75E504) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_0028E7BF: ;
    SET_LO8(eax, MEM8(0x862C5C));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0028E80E; /* jne: not equal / not zero */

loc_0028E7C8: ;
    eax = MEM32(esi * 4 + 0x862CC0);
    ecx = 0; /* xor self */
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(ecx, (TEST_Z(eax, eax)) ? 1 : 0); /* sete */
    PUSH32(esp, 0x3C);
    edi = ecx;
    PUSH32(esp, 0); sub_002AF3F0(); /* call 0x002AF3F0 */

loc_0028E7DF: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_0028E7F2; /* je: equal / zero */

loc_0028E7E6: ;
    PUSH32(esp, esi);
    edx = edi;
    PUSH32(esp, 0); sub_001F7040(); /* call 0x001F7040 */

loc_0028E7EE: ;
    edi = eax;
    goto loc_0028E7F4;

loc_0028E7F2: ;
    edi = 0; /* xor self */

loc_0028E7F4: ;
    ebx = MEM32(edi);
    eax = 0x862C40;
    PUSH32(esp, 0); sub_00296340(); /* call 0x00296340 */

loc_0028E800: ;
    edx = MEM32(eax + 0x9DC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ebx + 4), _icall_esp); /* indirect call */
    }

loc_0028E80C: ;
    goto loc_0028E877;

loc_0028E80E: ;
    edi = MEM32(esi * 4 + 0x862CC0);
    eax = 0; /* xor self */
    (void)0; /* test edi, edi - flags set for next jcc */
    SET_LO8(eax, (TEST_Z(edi, edi)) ? 1 : 0); /* sete */
    MEM32(esi * 4 + 0x862CC0) = eax;
    SET_LO8(ecx, MEM8(esi + 0x864EBF));
    PUSH32(esp, eax);
    eax = ZX8(LO8(ecx));
    PUSH32(esp, 0); sub_00292A30(); /* call 0x00292A30 */

loc_0028E832: ;
    MEM8(esi + 0x864EBF) = LO8(eax);
    SET_LO8(edx, MEM8(0x86E983));
    ecx = esi;
    SET_LO8(eax, 1);
    SET_LO8(eax, LO8(eax) << LO8(ecx));
    SET_LO8(ecx, MEM8(0x862CA0));
    esp = esp + 4;
    MEM8(0x862E58) = 1;
    SET_LO8(edx, LO8(edx) | LO8(eax));
    SET_LO8(ecx, LO8(ecx) | LO8(eax));
    SET_LO8(eax, MEM8(0x864EBD));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(0x86E983) = LO8(edx);
    MEM8(0x862CA0) = LO8(ecx);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0028E877; /* je: equal / zero */

loc_0028E86D: ;
    PUSH32(esp, 0); sub_00296E10(); /* call 0x00296E10 */

loc_0028E872: ;
    PUSH32(esp, 0); sub_00296D50(); /* call 0x00296D50 */

loc_0028E877: ;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_001C74F0(); /* call 0x001C74F0 */

loc_0028E87E: ;
    ecx = eax;
    PUSH32(esp, 0); sub_001C7670(); /* call 0x001C7670 */

loc_0028E885: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0028E8B5; /* je: equal / zero */

loc_0028E889: ;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_001C74F0(); /* call 0x001C74F0 */

loc_0028E890: ;
    edi = MEM32(esi * 4 + 0x862CC0);
    if (CMP_EQ(MEM32(eax + 0x24), edi)) goto loc_0028E8B5; /* je: equal / zero */

loc_0028E89C: ;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_001C74F0(); /* call 0x001C74F0 */

loc_0028E8A3: ;
    MEM32(eax + 0x24) = edi;
    PUSH32(esp, 1);
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_001C74F0(); /* call 0x001C74F0 */

loc_0028E8AF: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00233BD0(); /* call 0x00233BD0 */

loc_0028E8B5: ;
    SET_LO8(ecx, MEM8(0x776238));
    if (TEST_NZ(LO8(ecx), 0x20)) goto loc_0028E955; /* jne: not equal / not zero */

loc_0028E8C4: ;
    PUSH32(esp, 0); sub_00234230(); /* call 0x00234230 */

loc_0028E8C9: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0028E955; /* jne: not equal / not zero */

loc_0028E8D1: ;
    if (TEST_Z(LO8(ecx), 0x10)) goto loc_0028E9E0; /* je: equal / zero */

loc_0028E8DA: ;
    SET_LO8(eax, 1);
    ecx = esi;
    SET_LO8(eax, LO8(eax) << LO8(ecx));
    MEM8(esi + 0x862D32) = 1;
    SET_LO8(ecx, MEM8(0x86E981));
    SET_LO8(eax, ~LO8(eax));
    SET_LO8(ecx, LO8(ecx) & LO8(eax));
    (void)0; /* cmp MEM32(0x863D04), 1 - flags set for next jcc */
    MEM8(0x86E981) = LO8(ecx);
    if (CMP_NE(MEM32(0x863D04), 1)) goto loc_0028E904; /* jne: not equal / not zero */

loc_0028E900: ;
    if (TEST_NZ(esi, esi)) goto loc_0028E917; /* jne: not equal / not zero */

loc_0028E904: ;
    PUSH32(esp, 4);
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_0028E90D: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_0028E914: ;
    esp = esp + 8;

loc_0028E917: ;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_001C74F0(); /* call 0x001C74F0 */

loc_0028E91E: ;
    ecx = eax;
    PUSH32(esp, 0); sub_001C7670(); /* call 0x001C7670 */

loc_0028E925: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0028E949; /* je: equal / zero */

loc_0028E929: ;
    edi = MEM32(esi * 4 + 0x862CC0);
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_001C74F0(); /* call 0x001C74F0 */

loc_0028E937: ;
    MEM32(eax + 0x24) = edi;
    PUSH32(esp, 1);
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_001C74F0(); /* call 0x001C74F0 */

loc_0028E943: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00233BD0(); /* call 0x00233BD0 */

loc_0028E949: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_002431E0(); /* call 0x002431E0 */

loc_0028E950: ;
    goto loc_0028E9E0;

loc_0028E955: ;
    SET_LO8(eax, MEM8(0x862C5C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0028E9BE; /* je: equal / zero */

loc_0028E95E: ;
    if (CMP_EQ(MEM32(0x863D04), 1)) goto loc_0028E9BE; /* je: equal / zero */

loc_0028E967: ;
    PUSH32(esp, 5);
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_0028E970: ;
    PUSH32(esp, 0x13);
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_0028E977: ;
    PUSH32(esp, 0x17);
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_0028E97E: ;
    PUSH32(esp, 0x1A);
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_0028E985: ;
    ecx = MEM32(0x847024);
    edx = MEM32(ecx + 0x3C);
    esp = esp + 0x10;
    PUSH32(esp, 7);
    PUSH32(esp, edi);
    eax = 0xAB;
    PUSH32(esp, edx);
    MEM32(0x87C8F4) = eax;
    PUSH32(esp, 0); sub_0001FC70(); /* call 0x0001FC70 */

loc_0028E9A4: ;
    MEM8(esi + 0x862D32) = 2;
    MEM32(0x6BF190) = 0xFFFFFFFFu;
    MEM8(0x6BF194) = 1;
    goto loc_0028E9D1;

loc_0028E9BE: ;
    PUSH32(esp, 5);
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_0028E9C7: ;
    esp = esp + 4;
    MEM8(esi + 0x862D32) = 4;

loc_0028E9D1: ;
    eax = 1;
    PUSH32(esp, 0); sub_002431E0(); /* call 0x002431E0 */

loc_0028E9DB: ;
    PUSH32(esp, 0); sub_00296E10(); /* call 0x00296E10 */

loc_0028E9E0: ;
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x60529C;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_0028E9EC: ;
    edi = eax;
    if (TEST_Z(edi, edi)) goto loc_0028EA2F; /* je: equal / zero */

loc_0028E9F2: ;
    PUSH32(esp, 0x84C318);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00470101(); /* call 0x00470101 */

loc_0028E9FD: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0028EA1F; /* je: equal / zero */

loc_0028EA04: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x84C318);
    PUSH32(esp, 0x84C6B0);
    PUSH32(esp, 0); sub_0046FCD6(); /* call 0x0046FCD6 */

loc_0028EA15: ;
    esp = esp + 0xC;
    MEM8(0x849930) = 1;

loc_0028EA1F: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, edi);
    PUSH32(esp, 0x84C318);
    PUSH32(esp, 0); sub_0046FCD6(); /* call 0x0046FCD6 */

loc_0028EA2C: ;
    esp = esp + 0xC;

loc_0028EA2F: ;
    if (TEST_NZ(MEM8(0x776238), 0x10)) goto loc_0028EAC5; /* jne: not equal / not zero */

loc_0028EA3C: ;
    edx = esp + 0xC;
    MEM8(esp + 8) = 0;
    MEM8(esp + 9) = 0;
    PUSH32(esp, 0); sub_0023BD70(); /* call 0x0023BD70 */

loc_0028EA4F: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0028EA5C; /* je: equal / zero */

loc_0028EA53: ;
    eax = MEM32(esp + 0xC);
    MEM8(esp + eax + 8) = 1;

loc_0028EA5C: ;
    ecx = MEM32(0x849800);
    edx = MEM32(ecx + 0xBCC);
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046EE4A(); /* call 0x0046EE4A */

loc_0028EA75: ;
    ecx = MEM32(0x849800);
    edx = MEM32(ecx + 0xBD0);
    PUSH32(esp, edx);
    eax = esp + 0xA4;
    PUSH32(esp, 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046EE4A(); /* call 0x0046EE4A */

loc_0028EA91: ;
    ecx = esp + 0x2C;
    eax = esp + 0x20;
    PUSH32(esp, eax);
    MEM32(esp + 0x28) = ecx;
    ecx = MEM32(esi * 4 + 0x862CC0);
    edx = esp + 0xB0;
    PUSH32(esp, ecx);
    MEM32(esp + 0x30) = edx;
    edx = esp + 0x2C;
    PUSH32(esp, 2);
    PUSH32(esp, edx);
    eax = 9;
    PUSH32(esp, 0); sub_0020C3B0(); /* call 0x0020C3B0 */

loc_0028EAC2: ;
    esp = esp + 0x28;

loc_0028EAC5: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_0028EAC7: ;
    esp = esp + 0x10C;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0028EAD0
 * Original: 0x0028EAD0 - 0x0028EBC8 (248 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028EAD0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0028EAD0: ;
    esp = esp - 8;
    PUSH32(esp, esi);
    esi = eax;
    eax = ZX8(MEM8(esi + 0x864EBF));
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001FE4B0(); /* call 0x001FE4B0 */

loc_0028EAE5: ;
    eax = MEM32(esi * 4 + 0x7761E0);
    edi = esi * 4 + 0x7761E0;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0028EBC2; /* je: equal / zero */

loc_0028EAFE: ;
    ecx = ZX8(MEM8(esi + 0x864EBF));
    MEM32(esi * 4 + 0x6BF198) = ecx;
    ecx = esi;
    SET_LO8(edx, 1);
    SET_LO8(edx, LO8(edx) << LO8(ecx));
    MEM16(eax + 0x3AE) = 6;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(0x862CA0));
    eax = 0; /* xor self */
    SET_LO8(edx, ~LO8(edx));
    SET_LO8(ebx, LO8(ebx) & LO8(edx));
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(esi, esi)) ? 1 : 0); /* setne */
    MEM8(0x862CA0) = LO8(ebx);
    esi = eax;
    SET_LO8(eax, MEM8(0x849B80));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(esp + 0x10) = LO8(eax);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0028EB76; /* je: equal / zero */

loc_0028EB42: ;
    ebx = MEM32(0x849ADC);
    if (CMP_EQ(esi, ebx)) goto loc_0028EB76; /* je: equal / zero */

loc_0028EB4C: ;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x103C);
    ebx = ebx + 0x85E580;
    PUSH32(esp, 0); sub_00200A60(); /* call 0x00200A60 */

loc_0028EB5D: ;
    ebx = esi;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x103C);
    ebx = ebx + 0x85E580;
    MEM32(0x849ADC) = esi;
    PUSH32(esp, 0); sub_00200860(); /* call 0x00200860 */

loc_0028EB76: ;
    ecx = MEM32(edi);
    PUSH32(esp, 7);
    edi = esp + 0x10;
    MEM32(esp + 0x10) = ecx;
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_0028EB87: ;
    SET_LO8(eax, MEM8(esp + 0x14));
    esp = esp + 4;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0028EBC1; /* je: equal / zero */

loc_0028EB92: ;
    ebx = MEM32(0x849ADC);
    if (TEST_Z(ebx, ebx)) goto loc_0028EBC1; /* je: equal / zero */

loc_0028EB9C: ;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x103C);
    ebx = ebx + 0x85E580;
    PUSH32(esp, 0); sub_00200A60(); /* call 0x00200A60 */

loc_0028EBAD: ;
    ebx = 0x85E580;
    MEM32(0x849ADC) = 0;
    PUSH32(esp, 0); sub_00200860(); /* call 0x00200860 */

loc_0028EBC1: ;
    POP32(esp, ebx);

loc_0028EBC2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0028EBD0
 * Original: 0x0028EBD0 - 0x0028EBFC (44 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028EBD0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0028EBD0: ;
    esp = esp - 0x7D0;
    SET_LO8(eax, MEM8(0x849B80));
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x7D8);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, esi);
    MEM32(esp + 0x14) = 1;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_0028EBFC(); return; } /* jne: not equal / not zero */

loc_0028EBF3: ;
    MEM8(0x8758A4) = 0;
    g_seh_ebp = ebp; sub_0028EC08(); return; /* tail jmp 0x0028EC08 */

}

/**
 * sub_0028F5B0
 * Original: 0x0028F5B0 - 0x0028F60D (93 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028F5B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0028F5B0: ;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_0003C1E0(); /* call 0x0003C1E0 */

loc_0028F5B7: ;
    eax = MEM32(eax + 0x10);
    eax = eax + 0x1C;
    eax = MEM32(eax);
    MEM8(eax + 0x30) = 1;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_0003C1E0(); /* call 0x0003C1E0 */

loc_0028F5CA: ;
    eax = MEM32(eax + 0x10);
    ecx = MEM32(eax + 0x20);
    eax = eax + 0x20;
    eax = MEM32(0x6BF18C);
    MEM8(ecx + 0x30) = 1;
    edx = (uint32_t)(int32_t)SMEM8(0x77627C);
    if (CMP_NE(eax, edx)) goto loc_0028F5FA; /* jne: not equal / not zero */

loc_0028F5E7: ;
    SET_LO8(eax, MEM8(0x862D08));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0028F5FA; /* jne: not equal / not zero */

loc_0028F5F0: ;
    if (TEST_Z(MEM8(esi * 4 + 0x77623C), 0x20)) goto loc_0028F60C; /* je: equal / zero */

loc_0028F5FA: ;
    MEM8(esi + 0x862D32) = 3;
    MEM32(esi * 4 + 0x77623C) = 0;

loc_0028F60C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0028F610
 * Original: 0x0028F610 - 0x0028FA7E (1134 bytes, 327 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028F610(void)
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

loc_0028F610: ;
    SET_LO8(eax, MEM8(0x849EA6));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0028F62F; /* je: equal / zero */

loc_0028F621: ;
    eax = ebp;
    PUSH32(esp, 0); sub_0028EAD0(); /* call 0x0028EAD0 */

loc_0028F628: ;
    MEM8(0x849EA6) = 0;

loc_0028F62F: ;
    SET_LO8(eax, MEM8(0x849FB0));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0028F6BE; /* je: equal / zero */

loc_0028F63C: ;
    SET_LO8(eax, MEM8(0x862C5C));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0028F64E; /* jne: not equal / not zero */

loc_0028F645: ;
    SET_LO8(eax, MEM8(0x864EBB));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0028F6B7; /* je: equal / zero */

loc_0028F64E: ;
    if (CMP_EQ(MEM8(0x77627C), 0xFF)) goto loc_0028F6B7; /* je: equal / zero */

loc_0028F657: ;
    ebx = MEM32(0x777EC4);
    /* nop */

loc_0028F660: ;
    edi = ZX8(MEM8(ebp + 0x864EBF));
    esi = MEM32(ebp * 4 + 0x862CC0);
    eax = edi;
    PUSH32(esp, 0); sub_001FF2E0(); /* call 0x001FF2E0 */

loc_0028F675: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0028F68B; /* je: equal / zero */

loc_0028F679: ;
    PUSH32(esp, 0);
    eax = ebp;
    ecx = 0; /* xor self */
    PUSH32(esp, 0); sub_00292E10(); /* call 0x00292E10 */

loc_0028F684: ;
    esp = esp + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0028F6B7; /* jne: not equal / not zero */

loc_0028F68B: ;
    eax = edi + 1;
    if (CMP_L(eax, ebx)) goto loc_0028F694; /* jl: less (signed <) */

loc_0028F692: ;
    eax = 0; /* xor self */

loc_0028F694: ;
    MEM8(ebp + 0x864EBF) = LO8(eax);
    ecx = ebp;
    SET_LO8(eax, 1);
    SET_LO8(eax, LO8(eax) << LO8(ecx));
    SET_LO8(ecx, MEM8(0x86E983));
    MEM8(0x849EA6) = 1;
    SET_LO8(ecx, LO8(ecx) | LO8(eax));
    MEM8(0x86E983) = LO8(ecx);
    goto loc_0028F660;

loc_0028F6B7: ;
    MEM8(0x849FB0) = 0;

loc_0028F6BE: ;
    ecx = (uint32_t)(int32_t)SMEM8(0x77627C);
    eax = MEM32(0x6BF18C);
    SET_LO8(ebx, 0); /* xor self */
    if (CMP_EQ(eax, ecx)) goto loc_0028F6D2; /* je: equal / zero */

loc_0028F6D0: ;
    SET_LO8(ebx, 1);

loc_0028F6D2: ;
    SET_LO8(eax, MEM8(0x86E980));
    esi = 1;
    edx = esi;
    ecx = ebp;
    edx = edx << LO8(ecx);
    if (TEST_Z(LO8(edx), LO8(eax))) goto loc_0028F845; /* je: equal / zero */

loc_0028F6EA: ;
    eax = MEM32(ebp * 4 + 0x77623C);
    ecx = eax;
    ecx = ecx & 0x20;
    if ((ecx == 0)) goto loc_0028F812; /* je: equal / zero */

loc_0028F6FC: ;
    if (TEST_Z(MEM8(0x86E982), LO8(edx))) goto loc_0028F812; /* je: equal / zero */

loc_0028F708: ;
    eax = eax & 0xFFFFFFDFu;
    MEM32(ebp * 4 + 0x77623C) = eax;
    ecx = MEM32(0x776238);
    SET_LO8(eax, MEM8(0x862C5C));
    ecx = ecx & 0xFFFFFFDFu;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(0x776238) = ecx;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0028F7FF; /* jne: not equal / not zero */

loc_0028F72E: ;
    ecx = (uint32_t)(int32_t)SMEM8(0x864EC1);
    eax = 0; /* xor self */
    if (CMP_LE(ecx & ecx, 0)) goto loc_0028FA79; /* jle: less or equal (signed <=) */

loc_0028F73F: ;
    ebp = 0x864EC8;

loc_0028F744: ;
    if (CMP_NE(MEM8(ebp), 0)) goto loc_0028F75A; /* jne: not equal / not zero */

loc_0028F74A: ;
    eax++;
    ebp = ebp + 0xA50;
    if (CMP_L(eax, ecx)) goto loc_0028F744; /* jl: less (signed <) */

loc_0028F755: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0028F75A: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_0028F768; /* jne: not equal / not zero */

loc_0028F763: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0028F768: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (TEST_Z(esi, esi)) goto loc_0028F7B0; /* je: equal / zero */

loc_0028F78E: ;
    if (CMP_B(MEM32(esi + 0x80), 0x38)) goto loc_0028F7B0; /* jb: below (unsigned <) */

loc_0028F797: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0028F7A1: ;
    PUSH32(esp, 0x38);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0028F7A9: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_0028F7D1; /* jne: not equal / not zero */

loc_0028F7B0: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0028F7C2: ;
    PUSH32(esp, 0x38);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0028F7CA: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0028F7DE; /* je: equal / zero */

loc_0028F7D1: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_001F70F0(); /* call 0x001F70F0 */

loc_0028F7DA: ;
    esi = eax;
    goto loc_0028F7E0;

loc_0028F7DE: ;
    esi = 0; /* xor self */

loc_0028F7E0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3E8);
    PUSH32(esp, 0); sub_004168D0(); /* call 0x004168D0 */

loc_0028F7EC: ;
    eax = MEM32(ebp + 0x9DC);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_0028F7FA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0028F7FF: ;
    MEM8(0x86E982) = 0;
    MEM8(0x862E58) = 1;
    goto loc_0028FA62;

loc_0028F812: ;
    if (TEST_Z(ecx, ecx)) goto loc_0028F818; /* je: equal / zero */

loc_0028F816: ;
    SET_LO8(ebx, 1);

loc_0028F818: ;
    if (TEST_Z(HI8(eax), 0x10)) goto loc_0028F829; /* je: equal / zero */

loc_0028F81D: ;
    MEM8(ebp + 0x862D32) = 6;
    PUSH32(esp, 0); sub_00223D60(); /* call 0x00223D60 */

loc_0028F829: ;
    eax = MEM32(ebp * 4 + 0x77623C);
    if (TEST_Z(HI8(eax), 0x20)) goto loc_0028F845; /* je: equal / zero */

loc_0028F835: ;
    PUSH32(esp, 0); sub_00290A80(); /* call 0x00290A80 */

loc_0028F83A: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0028F845; /* je: equal / zero */

loc_0028F83E: ;
    MEM8(ebp + 0x862D32) = 7;

loc_0028F845: ;
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_0028F870; /* jne: not equal / not zero */

loc_0028F849: ;
    eax = MEM32(0x863D04);
    if (CMP_EQ(eax, 3)) goto loc_0028F863; /* je: equal / zero */

loc_0028F853: ;
    if (CMP_EQ(eax, 2)) goto loc_0028F863; /* je: equal / zero */

loc_0028F858: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(0x849C0F) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0028F863: ;
    SET_LO8(eax, MEM8(0x849C0F));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0028FA79; /* je: equal / zero */

loc_0028F870: ;
    PUSH32(esp, 0x15);
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_0028F879: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_0028F880: ;
    ecx = MEM32(0x847024);
    edx = MEM32(ecx + 0x3C);
    esp = esp + 8;
    PUSH32(esp, 7);
    PUSH32(esp, edi);
    eax = 0xAC;
    PUSH32(esp, edx);
    MEM32(0x87C8F4) = eax;
    PUSH32(esp, 0); sub_0001FC70(); /* call 0x0001FC70 */

loc_0028F89F: ;
    SET_LO8(eax, MEM8(0x7FA23C));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = 0.0f; /* xorps self = zero */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0028F8B3; /* jne: not equal / not zero */

loc_0028F8AB: ;
    xmm0 = MEMF(0x7F9F48); /* movss */

loc_0028F8B3: ;
    (void)0; /* cmp MEM32(0x75E500), esi - flags set for next jcc */
    MEMF(esp + 0x14) = xmm0; /* movss */
    if (CMP_NE(MEM32(0x75E500), esi)) goto loc_0028F8D9; /* jne: not equal / not zero */

loc_0028F8C1: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648E64)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_0028F916; /* ja: above (unsigned >) */

loc_0028F8D9: ;
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
    edx = edx | 0xFFFFFFFFu;
    eax = eax | 0xFFFFFFFFu;
    ecx = 0xAD1;
    MEMF(0x75E504) = xmm0; /* movss */
    MEM32(0x75E500) = esi;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_0028F916: ;
    SET_LO8(eax, MEM8(0x862C5C));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0028FA28; /* jne: not equal / not zero */

loc_0028F923: ;
    ecx = (uint32_t)(int32_t)SMEM8(0x864EC1);
    eax = 0; /* xor self */
    if (CMP_LE(ecx & ecx, 0)) goto loc_0028FA36; /* jle: less or equal (signed <=) */

loc_0028F934: ;
    ebx = 0x864EC8;
    /* nop */

loc_0028F940: ;
    if (CMP_NE(MEM8(ebx), 0)) goto loc_0028F955; /* jne: not equal / not zero */

loc_0028F945: ;
    eax++;
    ebx = ebx + 0xA50;
    if (CMP_L(eax, ecx)) goto loc_0028F940; /* jl: less (signed <) */

loc_0028F950: ;
    goto loc_0028FA36;

loc_0028F955: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_0028F963; /* jne: not equal / not zero */

loc_0028F95E: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0028F963: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (TEST_Z(esi, esi)) goto loc_0028F9AB; /* je: equal / zero */

loc_0028F989: ;
    if (CMP_B(MEM32(esi + 0x80), 0x38)) goto loc_0028F9AB; /* jb: below (unsigned <) */

loc_0028F992: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0028F99C: ;
    PUSH32(esp, 0x38);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0028F9A4: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_0028F9D0; /* jne: not equal / not zero */

loc_0028F9AB: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0028F9BD: ;
    PUSH32(esp, 0x38);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0028F9C5: ;
    esi = 0; /* xor self */
    esp = esp + 8;
    if (CMP_EQ(eax, esi)) goto loc_0028FA0C; /* je: equal / zero */

loc_0028F9CE: ;
    goto loc_0028F9D2;

loc_0028F9D0: ;
    esi = 0; /* xor self */

loc_0028F9D2: ;
    MEM32(eax + 4) = esi;
    MEM32(eax + 0xC) = esi;
    MEM32(eax + 0x10) = esi;
    MEM32(eax + 0x14) = esi;
    MEM32(eax + 0x18) = esi;
    MEM32(eax + 0x1C) = esi;
    MEM32(eax + 0x20) = esi;
    MEM32(eax + 0x28) = esi;
    MEM32(eax + 0x2C) = esi;
    MEM16(eax + 0x32) = LO16(esi);
    MEM32(eax + 8) = 0xFFFFFFFFu;
    MEM8(eax + 0x30) = 0;
    MEM32(eax) = 0x5F6A88;
    MEM8(eax + 0x34) = 0;
    MEM8(eax + 0x35) = 0;
    esi = eax;

loc_0028FA0C: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3E8);
    PUSH32(esp, 0); sub_004168D0(); /* call 0x004168D0 */

loc_0028FA18: ;
    ecx = MEM32(ebx + 0x9DC);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_0028FA26: ;
    goto loc_0028FA36;

loc_0028FA28: ;
    MEM8(0x86E982) = 0;
    MEM8(0x862E58) = 1;

loc_0028FA36: ;
    SET_LO8(eax, MEM8(0x849B80));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(ebp + 0x862D32) = 1;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0028FA59; /* je: equal / zero */

loc_0028FA46: ;
    SET_LO8(eax, MEM8(0x86E982));
    SET_LO8(eax, LO8(eax) & 0xFD);
    MEM8(0x862D33) = 1;
    MEM8(0x86E982) = LO8(eax);

loc_0028FA59: ;
    SET_LO8(eax, MEM8(0x862C5C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0028FA79; /* je: equal / zero */

loc_0028FA62: ;
    xmm0 = MEMF(0x649340); /* movss */
    MEMF(0x863AFC) = xmm0; /* movss */
    MEM8(0x863B00) = 0xA;

loc_0028FA79: ;
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
 * sub_0028FA80
 * Original: 0x0028FA80 - 0x0028FA98 (24 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028FA80(void)
{
    int _flags = 0; /* fallback flag var */

loc_0028FA80: ;
    SET_LO8(eax, MEM8(0x84725E));
    esp = esp - 0x140;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_0028FA98(); return; } /* je: equal / zero */

loc_0028FA8F: ;
    SET_LO8(eax, 0); /* xor self */
    esp = esp + 0x140;
    esp += 4; return; /* ret */

}

/**
 * sub_0028FAE0
 * Original: 0x0028FAE0 - 0x0028FB0B (43 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028FAE0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0028FAE0: ;
    ecx = (uint32_t)(int32_t)SMEM8(0x864EC1);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    SET_LO8(eax, 1);
    if (CMP_LE(ecx & ecx, 0)) goto loc_0028FB0A; /* jle: less or equal (signed <=) */

loc_0028FAED: ;
    edx = 0x865684;

loc_0028FAF2: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0028FAFF; /* je: equal / zero */

loc_0028FAF6: ;
    if (CMP_EQ(MEM8(edx), 0)) goto loc_0028FAFF; /* je: equal / zero */

loc_0028FAFB: ;
    SET_LO8(eax, 1);
    goto loc_0028FB01;

loc_0028FAFF: ;
    SET_LO8(eax, 0); /* xor self */

loc_0028FB01: ;
    edx = edx + 0xA50;
    ecx--;
    if ((ecx != 0)) goto loc_0028FAF2; /* jne: not equal / not zero */

loc_0028FB0A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0028FB10
 * Original: 0x0028FB10 - 0x00290152 (1602 bytes, 434 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028FB10(void)
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

loc_0028FB10: ;
    esp = esp - 0x54;
    eax = ZX8(MEM8(0x86E980));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEM8(esp + 0xB) = 0;
    ecx = 0; /* xor self */
    SET_LO8(edx, 3);
    PUSH32(esp, edi);

loc_0028FB26: ;
    esi = 1;
    edi = esi;
    edi = edi << LO8(ecx);
    if (TEST_Z(eax, edi)) goto loc_0028FB3F; /* je: equal / zero */

loc_0028FB33: ;
    if (CMP_NE(MEM8(ecx + 0x862D32), LO8(edx))) goto loc_0029014B; /* jne: not equal / not zero */

loc_0028FB3F: ;
    ecx++;
    if (CMP_L(ecx, 2)) goto loc_0028FB26; /* jl: less (signed <) */

loc_0028FB45: ;
    SET_LO8(ebx, MEM8(0x849B80));
    eax = 0; /* xor self */
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(LO8(ebx), LO8(ebx))) ? 1 : 0); /* setne */
    edi = 0; /* xor self */
    MEM32(esp + 0x10) = edi;
    eax++;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x1C) = eax;
    if (CMP_LE(eax & eax, 0)) goto loc_0028FEF2; /* jle: less or equal (signed <=) */

loc_0028FB65: ;
    goto loc_0028FB70;

loc_0028FB67: ;
    esi = 1;
    /* nop */

loc_0028FB70: ;
    eax = MEM32(0x86422C);
    if (TEST_Z(eax, eax)) goto loc_0028FB90; /* je: equal / zero */

loc_0028FB79: ;
    if (TEST_NZ(edi, edi)) goto loc_0028FB90; /* jne: not equal / not zero */

loc_0028FB7D: ;
    if (TEST_NZ(MEM8(0x86E982), 1)) goto loc_0028FB90; /* jne: not equal / not zero */

loc_0028FB86: ;
    MEM32(0x77623C) = 0x10;

loc_0028FB90: ;
    SET_LO8(eax, MEM8(0x86E980));
    ebx = esi;
    ecx = edi;
    ebx = ebx << LO8(ecx);
    if (TEST_Z(LO8(ebx), LO8(eax))) goto loc_0028FEDD; /* je: equal / zero */

loc_0028FBA3: ;
    if (TEST_NZ(edi, edi)) goto loc_0028FDB2; /* jne: not equal / not zero */

loc_0028FBAB: ;
    if (TEST_Z(MEM8(0x77623C), 0x20)) goto loc_0028FDB2; /* je: equal / zero */

loc_0028FBB8: ;
    PUSH32(esp, 0); sub_0021D790(); /* call 0x0021D790 */

loc_0028FBBD: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0028FDB2; /* je: equal / zero */

loc_0028FBC5: ;
    ecx = MEM32(0x77623C);
    SET_LO8(eax, MEM8(0x86E982));
    ecx = ecx & 0xFFFFFFF0u;
    (void)0; /* test LO8(eax), 1 - flags set for next jcc */
    MEM32(0x77623C) = ecx;
    if (TEST_Z(LO8(eax), 1)) goto loc_0028FCD0; /* je: equal / zero */

loc_0028FBE1: ;
    SET_LO8(eax, MEM8(0x862C5C));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0028FCA6; /* jne: not equal / not zero */

loc_0028FBEE: ;
    if (CMP_EQ(MEM32(0x863D04), esi)) goto loc_0028FCA6; /* je: equal / zero */

loc_0028FBFA: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_0028FC08; /* jne: not equal / not zero */

loc_0028FC03: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0028FC08: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (TEST_Z(esi, esi)) goto loc_0028FC50; /* je: equal / zero */

loc_0028FC2E: ;
    if (CMP_B(MEM32(esi + 0x80), 0x38)) goto loc_0028FC50; /* jb: below (unsigned <) */

loc_0028FC37: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0028FC41: ;
    PUSH32(esp, 0x38);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0028FC49: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_0028FC71; /* jne: not equal / not zero */

loc_0028FC50: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0028FC62: ;
    PUSH32(esp, 0x38);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0028FC6A: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0028FC7E; /* je: equal / zero */

loc_0028FC71: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_001F70F0(); /* call 0x001F70F0 */

loc_0028FC7A: ;
    esi = eax;
    goto loc_0028FC80;

loc_0028FC7E: ;
    esi = 0; /* xor self */

loc_0028FC80: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3E8);
    PUSH32(esp, 0); sub_004168D0(); /* call 0x004168D0 */

loc_0028FC8C: ;
    edi = MEM32(esi);
    eax = 0x862C40;
    PUSH32(esp, 0); sub_00296340(); /* call 0x00296340 */

loc_0028FC98: ;
    eax = MEM32(eax + 0x9DC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edi + 4), _icall_esp); /* indirect call */
    }

loc_0028FCA4: ;
    goto loc_0028FCB4;

loc_0028FCA6: ;
    MEM8(0x86E982) = 0;
    MEM8(0x862E58) = 1;

loc_0028FCB4: ;
    xmm0 = MEMF(0x649340); /* movss */
    MEM8(0x863B00) = 0xFF;
    MEMF(0x863AFC) = xmm0; /* movss */
    goto loc_0028FD8C;

loc_0028FCD0: ;
    PUSH32(esp, 0x15);
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_0028FCD9: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_0028FCE0: ;
    ecx = MEM32(0x847024);
    edx = MEM32(ecx + 0x3C);
    esp = esp + 8;
    PUSH32(esp, 7);
    PUSH32(esp, edi);
    eax = 0xAC;
    PUSH32(esp, edx);
    MEM32(0x87C8F4) = eax;
    PUSH32(esp, 0); sub_0001FC70(); /* call 0x0001FC70 */

loc_0028FCFF: ;
    SET_LO8(eax, MEM8(0x7FA23C));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = 0.0f; /* xorps self = zero */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0028FD13; /* jne: not equal / not zero */

loc_0028FD0B: ;
    xmm0 = MEMF(0x7F9F48); /* movss */

loc_0028FD13: ;
    (void)0; /* cmp MEM32(0x75E500), esi - flags set for next jcc */
    MEMF(esp + 0x14) = xmm0; /* movss */
    if (CMP_NE(MEM32(0x75E500), esi)) goto loc_0028FD39; /* jne: not equal / not zero */

loc_0028FD21: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648E64)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_0028FD79; /* ja: above (unsigned >) */

loc_0028FD39: ;
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
    MEM32(0x75E500) = esi;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_0028FD79: ;
    SET_LO8(eax, MEM8(0x86E981));
    SET_LO8(eax, LO8(eax) & 0xFE);
    MEM8(0x862D32) = 1;
    MEM8(0x86E981) = LO8(eax);

loc_0028FD8C: ;
    edx = MEM32(0x77623C);
    ecx = MEM32(0x776238);
    eax = 0xFFFFFFDFu;
    edx = edx & eax;
    ecx = ecx & eax;
    MEM32(0x77623C) = edx;
    MEM32(0x776238) = ecx;
    goto loc_0028FEDD;

loc_0028FDB2: ;
    if (TEST_Z(MEM8(edi * 4 + 0x77623C), 0x10)) goto loc_0028FEDD; /* je: equal / zero */

loc_0028FDC0: ;
    PUSH32(esp, 0); sub_0028FA80(); /* call 0x0028FA80 */

loc_0028FDC5: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0028FEDD; /* jne: not equal / not zero */

loc_0028FDCD: ;
    PUSH32(esp, 4);
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_0028FDD6: ;
    SET_LO8(eax, MEM8(0x7FA23C));
    xmm0 = 0.0f; /* xorps self = zero */
    esp = esp + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0028FDED; /* jne: not equal / not zero */

loc_0028FDE5: ;
    xmm0 = MEMF(0x7F9F48); /* movss */

loc_0028FDED: ;
    eax = MEM32(0x75E500);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEMF(esp + 0x18) = xmm0; /* movss */
    if (TEST_NZ(eax, eax)) goto loc_0028FE14; /* jne: not equal / not zero */

loc_0028FDFC: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648E64)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_0028FE58; /* ja: above (unsigned >) */

loc_0028FE14: ;
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
    ecx = 0xAD0;
    MEMF(0x75E504) = xmm0; /* movss */
    MEM32(0x75E500) = 0;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_0028FE58: ;
    SET_LO8(eax, MEM8(0x862C5C));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0028FEB8; /* jne: not equal / not zero */

loc_0028FE61: ;
    PUSH32(esp, 0); sub_0028FAE0(); /* call 0x0028FAE0 */

loc_0028FE66: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0028FEDD; /* je: equal / zero */

loc_0028FE6A: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x461);
    PUSH32(esp, 0x606A34);
    PUSH32(esp, 0x38);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_0028FE7D: ;
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_0028FE90; /* je: equal / zero */

loc_0028FE84: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_001F70F0(); /* call 0x001F70F0 */

loc_0028FE8C: ;
    esi = eax;
    goto loc_0028FE92;

loc_0028FE90: ;
    esi = 0; /* xor self */

loc_0028FE92: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3E8);
    PUSH32(esp, 0); sub_004168D0(); /* call 0x004168D0 */

loc_0028FE9E: ;
    edi = MEM32(esi);
    eax = 0x862C40;
    PUSH32(esp, 0); sub_00296340(); /* call 0x00296340 */

loc_0028FEAA: ;
    edx = MEM32(eax + 0x9DC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edi + 4), _icall_esp); /* indirect call */
    }

loc_0028FEB6: ;
    goto loc_0028FEDD;

loc_0028FEB8: ;
    if (TEST_NZ(MEM8(0x86E982), LO8(ebx))) goto loc_0028FEDD; /* jne: not equal / not zero */

loc_0028FEC0: ;
    ecx = MEM32(esp + 0x10);
    SET_LO8(eax, 1);
    SET_LO8(eax, LO8(eax) << LO8(ecx));
    SET_LO8(ecx, MEM8(0x86E982));
    MEM8(0x862E58) = 1;
    SET_LO8(ecx, LO8(ecx) | LO8(eax));
    MEM8(0x86E982) = LO8(ecx);

loc_0028FEDD: ;
    edi = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x1C);
    edi++;
    (void)0; /* cmp edi, eax - flags set for next jcc */
    MEM32(esp + 0x10) = edi;
    if (CMP_L(edi, eax)) goto loc_0028FB67; /* jl: less (signed <) */

loc_0028FEF2: ;
    eax = (uint32_t)(int32_t)SMEM8(0x77627C);
    ecx = eax + eax * 4;
    edx = MEM32(ecx * 8 + 0x776F28);
    esi = MEM32(edx + 0x58);
    PUSH32(esp, 0); sub_0020C6E0(); /* call 0x0020C6E0 */

loc_0028FF0B: ;
    SET_LO8(eax, MEM8(0x7819D5));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = MEMF(0x648E58); /* movss */
    MEMF(0x77615C) = xmm0; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0028FF34; /* je: equal / zero */

loc_0028FF24: ;
    xmm0 = MEMF(0x649D9C); /* movss */
    MEMF(0x77615C) = xmm0; /* movss */

loc_0028FF34: ;
    SET_LO8(eax, 0xFF);
    MEM8(0x776171) = LO8(eax);
    MEM8(0x776170) = LO8(eax);
    MEM8(0x77616F) = LO8(eax);
    MEM8(0x77616E) = LO8(eax);
    SET_LO8(eax, MEM8(0x862C5F));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0028FFC4; /* je: equal / zero */

loc_0028FF53: ;
    SET_LO8(eax, MEM8(0x862C5C));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0029000D; /* jne: not equal / not zero */

loc_0028FF60: ;
    SET_LO8(eax, MEM8(0x864EBC));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0028FFB0; /* je: equal / zero */

loc_0028FF69: ;
    SET_LO8(eax, MEM8(0x862C95));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    ecx = (int32_t)MEMF(0x849C30); /* cvttss2si */
    if (CMP_G(LO8(eax) & LO8(eax), 0)) goto loc_0028FF81; /* jg: greater (signed >) */

loc_0028FF7A: ;
    SET_LO8(eax, 0x14);
    MEM8(0x862C95) = LO8(eax);

loc_0028FF81: ;
    eax = SX8(LO8(eax));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3C);
    eax = eax - ecx;
    if (((int32_t)eax >= 0)) goto loc_0028FF8D; /* jns: not sign (positive) */

loc_0028FF8B: ;
    eax = 0; /* xor self */

loc_0028FF8D: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x3C;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM8(esp + 0xF) = 1;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    edx = esp + 0x28;
    PUSH32(esp, 0x605224);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046F583(); /* call 0x0046F583 */

loc_0028FFAB: ;
    esp = esp + 0x10;
    goto loc_0029000D;

loc_0028FFB0: ;
    eax = esp + 0x20;
    PUSH32(esp, 0x5F59F0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046F583(); /* call 0x0046F583 */

loc_0028FFBF: ;
    esp = esp + 8;
    goto loc_0029000D;

loc_0028FFC4: ;
    SET_LO8(eax, MEM8(0x849EA5));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(esp + 0xF) = 1;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0028FFEE; /* je: equal / zero */

loc_0028FFD2: ;
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x6051E4;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_0028FFDE: ;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046F583(); /* call 0x0046F583 */

loc_0028FFE9: ;
    esp = esp + 8;
    goto loc_0029000D;

loc_0028FFEE: ;
    edx = MEM32(0x849800);
    eax = MEM32(edx + 0x8A8);
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, 0x5F56AC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046F583(); /* call 0x0046F583 */

loc_0029000A: ;
    esp = esp + 0xC;

loc_0029000D: ;
    SET_LO8(eax, MEM8(0x849EA3));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0029003F; /* jne: not equal / not zero */

loc_00290016: ;
    if (CMP_NE(MEM8(0x863B00), 0xFF)) goto loc_0029003F; /* jne: not equal / not zero */

loc_0029001F: ;
    edx = MEM32(0x849800);
    esi = MEM32(edx + 0x8B0);
    eax = 2;
    PUSH32(esp, 0); sub_001FADD0(); /* call 0x001FADD0 */

loc_00290035: ;
    esi = 0x6051D8;
    PUSH32(esp, 0); sub_0020C6E0(); /* call 0x0020C6E0 */

loc_0029003F: ;
    SET_LO8(eax, MEM8(0x7819D5));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(0x77615C) = xmm0; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00290068; /* je: equal / zero */

loc_00290058: ;
    xmm0 = MEMF(0x648F10); /* movss */
    MEMF(0x77615C) = xmm0; /* movss */

loc_00290068: ;
    PUSH32(esp, 0); sub_0028FA80(); /* call 0x0028FA80 */

loc_0029006D: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0029008D; /* je: equal / zero */

loc_00290071: ;
    PUSH32(esp, 0x20);
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x6051B0;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_0029007F: ;
    PUSH32(esp, eax);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046FCD6(); /* call 0x0046FCD6 */

loc_0029008A: ;
    esp = esp + 0xC;

loc_0029008D: ;
    SET_LO8(eax, MEM8(0x863B00));
    if (CMP_EQ(LO8(eax), 0xFF)) goto loc_002900E7; /* je: equal / zero */

loc_00290096: ;
    SET_LO8(ecx, MEM8(0x862C5F));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_002900E7; /* jne: not equal / not zero */

loc_002900A0: ;
    ecx = SX8(LO8(eax));
    PUSH32(esp, ecx);
    edx = esp + 0x24;
    PUSH32(esp, 0x5F13E0);
    PUSH32(esp, edx);
    MEM8(esp + 0x1B) = 1;
    PUSH32(esp, 0); sub_0046F583(); /* call 0x0046F583 */

loc_002900B8: ;
    eax = MEM32(edi * 4 + 0x77623C);
    esp = esp + 0xC;
    if (TEST_Z(HI8(eax), 0x20)) goto loc_002900E7; /* je: equal / zero */

loc_002900C7: ;
    SET_LO8(eax, MEM8(0x862C5C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002900E7; /* je: equal / zero */

loc_002900D0: ;
    xmm0 = MEMF(0x648CE4); /* movss */
    MEMF(0x863AFC) = xmm0; /* movss */
    MEM8(0x863B00) = 0xA;

loc_002900E7: ;
    PUSH32(esp, 0); sub_0028FAE0(); /* call 0x0028FAE0 */

loc_002900EC: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0029010D; /* jne: not equal / not zero */

loc_002900F0: ;
    ecx = 0x605178;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_002900FA: ;
    PUSH32(esp, eax);
    eax = esp + 0x24;
    PUSH32(esp, 0x60516C);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046F583(); /* call 0x0046F583 */

loc_0029010A: ;
    esp = esp + 0xC;

loc_0029010D: ;
    SET_LO8(eax, MEM8(esp + 0xF));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0029014B; /* je: equal / zero */

loc_00290115: ;
    eax = MEM32(0x862670);
    if (TEST_Z(eax, eax)) goto loc_0029013D; /* je: equal / zero */

loc_0029011E: ;
    eax = MEM32(0x862674);
    MEM32(eax) = MEM32(eax) - 1;
    ecx = MEM32(0x862674);
    if (CMP_NE(MEM32(ecx), 0)) goto loc_0029013D; /* jne: not equal / not zero */

loc_00290130: ;
    PUSH32(esp, 0x862674);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0029013A: ;
    esp = esp + 4;

loc_0029013D: ;
    edi = esp + 0x20;
    eax = 0x862670;
    PUSH32(esp, 0); sub_00060900(); /* call 0x00060900 */

loc_0029014B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x54;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00290160
 * Original: 0x00290160 - 0x00290485 (805 bytes, 234 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00290160(void)
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

loc_00290160: ;
    esp = esp - 0x108;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x110);
    ecx = ebp;
    eax = 1;
    eax = eax << LO8(ecx);
    if (TEST_Z(MEM8(0x86E980), LO8(eax))) goto loc_0029047D; /* je: equal / zero */

loc_00290183: ;
    ecx = MEM32(0x849800);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x898);
    SET_LO8(eax, 0xFF);
    ebx = 0; /* xor self */
    PUSH32(esp, edi);
    MEM8(0x776171) = LO8(eax);
    MEM8(0x776170) = LO8(ebx);
    MEM8(0x77616F) = LO8(ebx);
    MEM8(0x77616E) = LO8(eax);
    PUSH32(esp, 0); sub_0020C6E0(); /* call 0x0020C6E0 */

loc_002901B1: ;
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x60515C;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_002901BD: ;
    PUSH32(esp, eax);
    edx = esp + 0x1C;
    PUSH32(esp, 0x40);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046EE4A(); /* call 0x0046EE4A */

loc_002901CA: ;
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x60514C;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_002901D6: ;
    PUSH32(esp, eax);
    eax = esp + 0xA8;
    PUSH32(esp, 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046EE4A(); /* call 0x0046EE4A */

loc_002901E6: ;
    eax = (uint32_t)(int32_t)SMEM8(0x87589C);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = esp + 0x38;
    MEM32(esp + 0x30) = ecx;
    esi = 2;
    ecx = esp + 0x30;
    edx = esp + 0xB8;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    eax = 0xA;
    MEM32(esp + 0x3C) = edx;
    PUSH32(esp, 0); sub_0020C3B0(); /* call 0x0020C3B0 */

loc_00290217: ;
    SET_LO8(eax, MEM8(0x776238));
    esp = esp + 0x28;
    if (TEST_Z(LO8(eax), 3)) goto loc_002902C7; /* je: equal / zero */

loc_00290227: ;
    SET_LO8(edx, MEM8(0x87589C));
    SET_LO8(ecx, MEM8(0x7FA23C));
    xmm0 = 0.0f; /* xorps self = zero */
    SET_LO8(eax, 1);
    SET_LO8(eax, LO8(eax) - LO8(edx));
    (void)0; /* cmp LO8(ecx), LO8(ebx) - flags set for next jcc */
    MEM8(0x87589C) = LO8(eax);
    if (CMP_NE(LO8(ecx), LO8(ebx))) goto loc_0029024B; /* jne: not equal / not zero */

loc_00290243: ;
    xmm0 = MEMF(0x7F9F48); /* movss */

loc_0029024B: ;
    (void)0; /* cmp MEM32(0x75E500), esi - flags set for next jcc */
    MEMF(esp + 0x10) = xmm0; /* movss */
    if (CMP_NE(MEM32(0x75E500), esi)) goto loc_00290271; /* jne: not equal / not zero */

loc_00290259: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648E64)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_002902B2; /* ja: above (unsigned >) */

loc_00290271: ;
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
    ecx = 0xAD2;
    MEMF(0x75E504) = xmm0; /* movss */
    MEM32(0x75E500) = esi;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_002902AD: ;
    SET_LO8(eax, MEM8(0x87589C));

loc_002902B2: ;
    eax = SX8(LO8(eax));
    PUSH32(esp, 3);
    edi = esp + 0x14;
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_002902C4: ;
    esp = esp + 4;

loc_002902C7: ;
    SET_LO8(eax, MEM8(0x776238));
    ecx = MEM32(0x863D04);
    (void)0; /* test LO8(eax), 0x10 - flags set for next jcc */
    SET_LO8(eax, MEM8(0x849C0F));
    if (TEST_NZ(LO8(eax), 0x10)) goto loc_002902FD; /* jne: not equal / not zero */

loc_002902DB: ;
    if (CMP_EQ(ecx, 3)) goto loc_002902F5; /* je: equal / zero */

loc_002902E0: ;
    if (CMP_EQ(ecx, esi)) goto loc_002902F5; /* je: equal / zero */

loc_002902E4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(0x849C0F) = LO8(ebx);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp = esp + 0x108;
    esp += 4; return; /* ret */

loc_002902F5: ;
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_0029047A; /* je: equal / zero */

loc_002902FD: ;
    if (CMP_NE(MEM8(0x87589C), LO8(ebx))) goto loc_00290394; /* jne: not equal / not zero */

loc_00290309: ;
    if (CMP_EQ(ecx, 3)) goto loc_0029031A; /* je: equal / zero */

loc_0029030E: ;
    if (CMP_EQ(ecx, esi)) goto loc_0029031A; /* je: equal / zero */

loc_00290312: ;
    MEM8(0x849C0F) = LO8(ebx);
    goto loc_0029031E;

loc_0029031A: ;
    if (CMP_NE(LO8(eax), LO8(ebx))) goto loc_00290394; /* jne: not equal / not zero */

loc_0029031E: ;
    PUSH32(esp, 4);
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_00290327: ;
    edx = MEM32(0x776238);
    SET_LO8(eax, MEM8(0x862C5C));
    edx = edx & 0xFFFFFFDFu;
    esp = esp + 4;
    (void)0; /* cmp LO8(eax), LO8(ebx) - flags set for next jcc */
    MEM32(0x776238) = edx;
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_00290357; /* je: equal / zero */

loc_00290342: ;
    if (CMP_EQ(MEM32(0x863D04), 1)) goto loc_00290357; /* je: equal / zero */

loc_0029034B: ;
    MEM8(ebp + 0x862D32) = 2;
    goto loc_002903FF;

loc_00290357: ;
    if (CMP_EQ(MEM8(0x862C88), LO8(ebx))) goto loc_0029038C; /* je: equal / zero */

loc_0029035F: ;
    if (CMP_NE(LO8(eax), LO8(ebx))) goto loc_0029038C; /* jne: not equal / not zero */

loc_00290363: ;
    SET_LO8(edx, 1);
    ecx = ebp;
    SET_LO8(edx, LO8(edx) << LO8(ecx));
    MEM8(ebp + 0x862D32) = 1;
    SET_LO8(eax, MEM8(0x86E981));
    PUSH32(esp, 1);
    SET_LO8(edx, ~LO8(edx));
    SET_LO8(eax, LO8(eax) & LO8(edx));
    edi = 0; /* xor self */
    MEM8(0x86E981) = LO8(eax);
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_00290387: ;
    esp = esp + 4;
    goto loc_002903FF;

loc_0029038C: ;
    MEM8(ebp + 0x862D32) = LO8(ebx);
    goto loc_002903FF;

loc_00290394: ;
    PUSH32(esp, 0); sub_0021D790(); /* call 0x0021D790 */

loc_00290399: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002903FF; /* je: equal / zero */

loc_0029039D: ;
    if (CMP_EQ(MEM8(0x862C5C), LO8(ebx))) goto loc_002903C9; /* je: equal / zero */

loc_002903A5: ;
    if (CMP_EQ(ecx, 1)) goto loc_002903C9; /* je: equal / zero */

loc_002903AA: ;
    if (CMP_NE(ecx, 3)) goto loc_002903B4; /* jne: not equal / not zero */

loc_002903AF: ;
    PUSH32(esp, 0); sub_00239B80(); /* call 0x00239B80 */

loc_002903B4: ;
    PUSH32(esp, 5);
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_002903BD: ;
    PUSH32(esp, 0x1B);
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_002903C4: ;
    esp = esp + 8;
    goto loc_002903F8;

loc_002903C9: ;
    PUSH32(esp, 5);
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_002903D2: ;
    PUSH32(esp, 0x13);
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_002903D9: ;
    ecx = MEM32(0x847024);
    edx = MEM32(ecx + 0x3C);
    esp = esp + 8;
    PUSH32(esp, 7);
    PUSH32(esp, ebx);
    eax = 0xAB;
    PUSH32(esp, edx);
    MEM32(0x87C8F4) = eax;
    PUSH32(esp, 0); sub_0001FC70(); /* call 0x0001FC70 */

loc_002903F8: ;
    eax = ebp;
    PUSH32(esp, 0); sub_0028DDA0(); /* call 0x0028DDA0 */

loc_002903FF: ;
    (void)0; /* cmp MEM8(0x7FA23C), LO8(ebx) - flags set for next jcc */
    xmm0 = 0.0f; /* xorps self = zero */
    if (CMP_NE(MEM8(0x7FA23C), LO8(ebx))) goto loc_00290412; /* jne: not equal / not zero */

loc_0029040A: ;
    xmm0 = MEMF(0x7F9F48); /* movss */

loc_00290412: ;
    (void)0; /* cmp MEM32(0x75E500), ebx - flags set for next jcc */
    MEMF(esp + 0x10) = xmm0; /* movss */
    if (CMP_NE(MEM32(0x75E500), ebx)) goto loc_00290438; /* jne: not equal / not zero */

loc_00290420: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648E64)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_00290474; /* ja: above (unsigned >) */

loc_00290438: ;
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

loc_00290474: ;
    MEM8(0x87589C) = LO8(ebx);

loc_0029047A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0029047D: ;
    POP32(esp, ebp);
    esp = esp + 0x108;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00290490
 * Original: 0x00290490 - 0x002908D8 (1096 bytes, 328 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00290490(void)
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

loc_00290490: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF8u;
    eax = 0x1918;
    PUSH32(esp, 0); sub_00470E50(); /* call 0x00470E50 */

loc_002904A0: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(esp + 0x18) = esi;
    eax = esp + 0x160;
    ecx = 0x10;

loc_002904B4: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEM8(eax) = 0;
    MEM8(eax + 1) = 0;
    MEM8(eax + 2) = 0;
    MEM8(eax + 3) = 0;
    MEMF(eax + 4) = xmm0; /* movss */
    MEM8(eax + 8) = 0;
    MEM8(eax + 9) = 0;
    MEM8(eax + 0xA) = 0;
    MEM8(eax + 0x89) = 0;
    MEM16(eax + -256) = LO16(esi);
    MEM16(eax + -128) = LO16(esi);
    eax = eax + 0x18C;
    ecx--;
    if ((ecx != 0)) goto loc_002904B4; /* jne: not equal / not zero */

loc_002904F1: ;
    eax = 0; /* xor self */
    ecx = 0xF;
    edi = esp + 0x24;
    MEM32(esp + 0x20) = esi;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = 0x630;
    edi = esp + 0x60;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    edi = MEM32(ebp + 8);
    SET_LO16(eax, MEM16(edi));
    SET_LO8(ecx, 0); /* xor self */
    (void)0; /* cmp LO16(eax), 0xFFFF - flags set for next jcc */
    MEM8(esp + 0xB) = LO8(ecx);
    if (CMP_EQ(LO16(eax), 0xFFFF)) goto loc_00290530; /* je: equal / zero */

loc_0029051F: ;
    /* nop */

loc_00290520: ;
    SET_LO8(ecx, LO8(ecx) + 1);
    edx = SX8(LO8(ecx));
    if (CMP_NE(MEM16(edi + edx * 4), 0xFFFFFFFFu)) goto loc_00290520; /* jne: not equal / not zero */

loc_0029052C: ;
    MEM8(esp + 0xB) = LO8(ecx);

loc_00290530: ;
    edx = 0; /* xor self */
    (void)0; /* cmp LO16(eax), 0xFFFF - flags set for next jcc */
    MEM32(esp + 0x10) = edx;
    if (CMP_EQ(LO16(eax), 0xFFFF)) goto loc_00290704; /* je: equal / zero */

loc_00290540: ;
    eax = esp + 0x20;
    eax = eax - edi;
    MEM32(esp + 0xC) = esi;
    MEM32(esp + 0x14) = edi;
    esi = esp + 0x60;
    MEM32(esp + 0x1C) = eax;

loc_00290556: ;
    eax = MEM32(ebp + 0x10);
    ecx = (uint32_t)(int32_t)SMEM8(eax);
    if (CMP_NE(edx, ecx)) goto loc_00290564; /* jne: not equal / not zero */

loc_00290560: ;
    MEM32(esp + 0x18) = edx;

loc_00290564: ;
    eax = (uint32_t)(int32_t)SMEM16(edi + 2);
    if (CMP_A(eax, 3)) goto loc_002906D9; /* ja: above (unsigned >) */

loc_00290571: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x2908D8); /* switch: 4 entries, 4 targets */
    if (_jt == 0x00290578u) goto loc_00290578;
    if (_jt == 0x002905C6u) goto loc_002905C6;
    if (_jt == 0x00290607u) goto loc_00290607;
    if (_jt == 0x00290671u) goto loc_00290671;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00290578: ;
    edx = (uint32_t)(int32_t)SMEM16(edi);
    eax = MEM32(0x849800);
    ecx = MEM32(eax + edx * 4);
    PUSH32(esp, 0x40);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0046FCD6(); /* call 0x0046FCD6 */

loc_0029058C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0046E45A(); /* call 0x0046E45A */

loc_00290592: ;
    edx = 0; /* xor self */
    SET_LO16(edx, MEM16(edi));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ebp + 0xC), _icall_esp); /* indirect call */
    }

loc_0029059E: ;
    ecx = MEM32(esp + 0x38);
    edx = MEM32(esp + 0x30);
    esp = esp + 0x1C;
    MEM32(ecx + edx) = eax;
    MEM8(esi + 0x102) = 0;
    MEM8(esi + 0x100) = 0;
    MEM8(esi + 0x101) = 0;
    goto loc_002906D9;

loc_002905C6: ;
    eax = (uint32_t)(int32_t)SMEM16(edi);
    ecx = MEM32(0x849800);
    edx = MEM32(ecx + eax * 4);
    PUSH32(esp, 0x40);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0046FCD6(); /* call 0x0046FCD6 */

loc_002905DB: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0046E45A(); /* call 0x0046E45A */

loc_002905E1: ;
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(edi));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ebp + 0xC), _icall_esp); /* indirect call */
    }

loc_002905ED: ;
    esp = esp + 0x1C;
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(ecx, (TEST_NZ(eax, eax)) ? 1 : 0); /* setne */
    MEM8(esi + 0x102) = LO8(ecx);
    MEM8(esi + 0x100) = 0;
    goto loc_002906D2;

loc_00290607: ;
    edx = (uint32_t)(int32_t)SMEM16(edi);
    eax = MEM32(0x849800);
    ecx = MEM32(eax + edx * 4);
    PUSH32(esp, 0x40);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0046FCD6(); /* call 0x0046FCD6 */

loc_0029061B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0046E45A(); /* call 0x0046E45A */

loc_00290621: ;
    edx = 0; /* xor self */
    SET_LO16(edx, MEM16(edi));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ebp + 0xC), _icall_esp); /* indirect call */
    }

loc_0029062D: ;
    edi = MEM32(esp + 0x28);
    ecx = eax;
    eax = MEM32(0x86EED8);
    edx = MEM32(edi + eax);
    ecx = MEM32(edx + ecx * 4);
    esp = esp + 0x1C;
    PUSH32(esp, 0x40);
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_0029064A: ;
    PUSH32(esp, eax);
    eax = esi + 0x80;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046FCD6(); /* call 0x0046FCD6 */

loc_00290657: ;
    esp = esp + 0xC;
    edi = edi + 4;
    MEM32(esp + 0xC) = edi;
    MEM8(esi + 0x100) = 1;
    MEM8(esi + 0x101) = 0;
    goto loc_002906D9;

loc_00290671: ;
    ecx = (uint32_t)(int32_t)SMEM16(edi);
    edx = MEM32(0x849800);
    eax = MEM32(edx + ecx * 4);
    PUSH32(esp, 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0046FCD6(); /* call 0x0046FCD6 */

loc_00290686: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0046E45A(); /* call 0x0046E45A */

loc_0029068C: ;
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(edi));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ebp + 0xC), _icall_esp); /* indirect call */
    }

loc_00290698: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(edx, (TEST_NZ(eax, eax)) ? 1 : 0); /* setne */
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(edi));
    MEM8(esi + 0x102) = LO8(edx);
    eax = eax | 0x4000;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ebp + 0xC), _icall_esp); /* indirect call */
    }

loc_002906B4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x5F13E0);
    ecx = esi + 0x80;
    PUSH32(esp, 0x40);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046EE4A(); /* call 0x0046EE4A */

loc_002906C8: ;
    esp = esp + 0x38;
    MEM8(esi + 0x100) = 1;

loc_002906D2: ;
    MEM8(esi + 0x101) = 1;

loc_002906D9: ;
    edi = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    edi = edi + 4;
    edx++;
    esi = esi + 0x18C;
    (void)0; /* cmp MEM16(edi), 0xFFFFFFFFu - flags set for next jcc */
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x14) = edi;
    if (CMP_NE(MEM16(edi), 0xFFFFFFFFu)) goto loc_00290556; /* jne: not equal / not zero */

loc_002906FD: ;
    SET_LO8(ecx, MEM8(esp + 0xB));
    edi = MEM32(ebp + 8);

loc_00290704: ;
    SET_LO8(edx, MEM8(0x776238));
    if (TEST_Z(LO8(edx), 1)) goto loc_002907AD; /* je: equal / zero */

loc_00290713: ;
    ecx = MEM32(ebp + 0x10);
    SET_LO8(eax, MEM8(ecx));
    if (CMP_LE(LO8(eax) & LO8(eax), 0)) goto loc_00290863; /* jle: less or equal (signed <=) */

loc_00290720: ;
    SET_LO8(eax, LO8(eax) - 1);
    MEM8(ecx) = LO8(eax);

loc_00290724: ;
    SET_LO8(eax, MEM8(0x7FA23C));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = 0.0f; /* xorps self = zero */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00290738; /* jne: not equal / not zero */

loc_00290730: ;
    xmm0 = MEMF(0x7F9F48); /* movss */

loc_00290738: ;
    ecx = MEM32(0x75E500);
    eax = 2;
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    MEMF(esp + 0xC) = xmm0; /* movss */
    if (CMP_NE(ecx, eax)) goto loc_00290769; /* jne: not equal / not zero */

loc_0029074D: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648E64)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_00290863; /* ja: above (unsigned >) */

loc_00290769: ;
    ecx = MEM32(0x847024);
    edx = MEM32(ecx + 0x40);
    MEM32(0x75E500) = eax;
    eax = MEM32(ecx + 0x44);
    eax = MEM32(eax + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = eax + 4;
    eax = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, edx);
    edx = edx | 0xFFFFFFFFu;
    eax = eax | 0xFFFFFFFFu;
    ecx = 0xAD2;
    MEMF(0x75E504) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_002907A8: ;
    goto loc_00290863;

loc_002907AD: ;
    if (TEST_Z(LO8(edx), 2)) goto loc_002907CF; /* je: equal / zero */

loc_002907B2: ;
    edx = MEM32(ebp + 0x10);
    SET_LO8(eax, MEM8(edx));
    ecx = SX8(LO8(ecx));
    esi = SX8(LO8(eax));
    ecx--;
    if (CMP_GE(esi, ecx)) goto loc_00290863; /* jge: greater or equal (signed >=) */

loc_002907C6: ;
    SET_LO8(eax, LO8(eax) + 1);
    MEM8(edx) = LO8(eax);
    goto loc_00290724;

loc_002907CF: ;
    (void)0; /* test LO8(edx), 0x10 - flags set for next jcc */
    eax = MEM32(ebp + 0x10);
    if (TEST_Z(LO8(edx), 0x10)) goto loc_00290820; /* je: equal / zero */

loc_002907D7: ;
    eax = (uint32_t)(int32_t)SMEM8(eax);
    eax = eax << 2;
    if (CMP_NE(MEM16(eax + edi + 2), 2)) goto loc_002907FB; /* jne: not equal / not zero */

loc_002907E5: ;
    ecx = MEM32(esp + eax + 0x20);
    if (TEST_Z(ecx, ecx)) goto loc_002907FB; /* je: equal / zero */

loc_002907ED: ;
    ecx = (uint32_t)(int32_t)SMEM16(eax + edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x849FB4), _icall_esp); /* indirect call */
    }

loc_002907F8: ;
    esp = esp + 4;

loc_002907FB: ;
    edx = MEM32(ebp + 0x10);
    eax = (uint32_t)(int32_t)SMEM8(edx);
    ecx = MEM32(ebp + 8);
    edx = 0; /* xor self */
    SET_LO16(edx, MEM16(ecx + eax * 4));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ebp + 0xC), _icall_esp); /* indirect call */
    }

loc_00290811: ;
    esp = esp + 0xC;
    eax = 3;
    PUSH32(esp, 0); sub_002431E0(); /* call 0x002431E0 */

loc_0029081E: ;
    goto loc_00290863;

loc_00290820: ;
    ecx = (uint32_t)(int32_t)SMEM8(eax);
    eax = edi + ecx * 4;
    SET_LO16(ecx, MEM16(eax + 2));
    if (CMP_EQ(LO16(ecx), 1)) goto loc_00290836; /* je: equal / zero */

loc_00290830: ;
    if (CMP_NE(LO16(ecx), 3)) goto loc_00290863; /* jne: not equal / not zero */

loc_00290836: ;
    if (TEST_Z(LO8(edx), 4)) goto loc_0029084C; /* je: equal / zero */

loc_0029083B: ;
    edx = 0; /* xor self */
    SET_LO16(edx, MEM16(eax));
    edx = edx | 0x4000;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 2);
    goto loc_0029085D;

loc_0029084C: ;
    if (TEST_Z(LO8(edx), 8)) goto loc_00290863; /* je: equal / zero */

loc_00290851: ;
    eax = (uint32_t)(int32_t)SMEM16(eax);
    eax = eax | 0x4000;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);

loc_0029085D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ebp + 0xC), _icall_esp); /* indirect call */
    }

loc_00290860: ;
    esp = esp + 0xC;

loc_00290863: ;
    xmm0 = MEMF(0x648D14); /* movss */
    SET_LO8(eax, 0xFF);
    MEM8(0x776171) = LO8(eax);
    MEM8(0x776170) = LO8(eax);
    MEM8(0x77616F) = LO8(eax);
    MEM8(0x77616E) = LO8(eax);
    SET_LO8(eax, MEM8(0x7819D5));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEMF(0x77615C) = xmm0; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002908A2; /* je: equal / zero */

loc_00290892: ;
    xmm0 = MEMF(0x648F10); /* movss */
    MEMF(0x77615C) = xmm0; /* movss */

loc_002908A2: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0x68;
    PUSH32(esp, eax);
    eax = 0x1F;
    PUSH32(esp, 0); sub_0020C570(); /* call 0x0020C570 */

loc_002908BB: ;
    esp = esp + 0xC;
    esi = 0x86EED4;
    MEM32(0x849FB4) = 0;
    PUSH32(esp, 0); sub_00349C80(); /* call 0x00349C80 */

loc_002908D2: ;
    POP32(esp, edi);
    POP32(esp, esi);
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
 * sub_00290920
 * Original: 0x00290920 - 0x0029092F (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00290920(void)
{
    int _flags = 0; /* fallback flag var */

loc_00290920: ;
    ecx = MEM32(esp + 4);
    SET_LO8(edx, MEM8(ecx + 5));
    eax = 0; /* xor self */
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    SET_LO8(eax, (TEST_Z(LO8(edx), LO8(edx))) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_00290930
 * Original: 0x00290930 - 0x0029093E (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00290930(void)
{
    int _flags = 0; /* fallback flag var */

loc_00290930: ;
    ecx = MEM32(0x863D08);
    eax = 0; /* xor self */
    (void)0; /* test ecx, ecx - flags set for next jcc */
    SET_LO8(eax, (TEST_Z(ecx, ecx)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_00290940
 * Original: 0x00290940 - 0x002909AF (111 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00290940(void)
{
    int _flags = 0; /* fallback flag var */

loc_00290940: ;
    eax = (uint32_t)(int32_t)SMEM8(0x77627C);
    eax = eax + eax * 4;
    eax = MEM32(eax * 8 + 0x776F28);
    SET_LO8(edx, MEM8(eax + 0x3E));
    ecx = 0; /* xor self */
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    edx = MEM32(esp + 4);
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_00290962; /* je: equal / zero */

loc_0029095E: ;
    ecx = (uint32_t)(int32_t)SMEM8(edx + 9);

loc_00290962: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(eax + 0x3C));
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    PUSH32(esp, esi);
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_00290971; /* je: equal / zero */

loc_0029096B: ;
    esi = (uint32_t)(int32_t)SMEM8(edx + 0xA);
    ecx = ecx + esi;

loc_00290971: ;
    SET_LO8(ebx, MEM8(eax + 0x3D));
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_0029097E; /* je: equal / zero */

loc_00290978: ;
    esi = (uint32_t)(int32_t)SMEM8(edx + 0xB);
    ecx = ecx + esi;

loc_0029097E: ;
    SET_LO8(ebx, MEM8(eax + 0x3B));
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_0029098B; /* je: equal / zero */

loc_00290985: ;
    esi = (uint32_t)(int32_t)SMEM8(edx + 0xC);
    ecx = ecx + esi;

loc_0029098B: ;
    SET_LO8(ebx, MEM8(eax + 0x3F));
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_00290998; /* je: equal / zero */

loc_00290992: ;
    esi = (uint32_t)(int32_t)SMEM8(edx + 0xD);
    ecx = ecx + esi;

loc_00290998: ;
    SET_LO8(ebx, MEM8(eax + 0x40));
    POP32(esp, esi);
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    POP32(esp, ebx);
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_002909A7; /* je: equal / zero */

loc_002909A1: ;
    edx = (uint32_t)(int32_t)SMEM8(edx + 0xE);
    ecx = ecx + edx;

loc_002909A7: ;
    eax = 0; /* xor self */
    (void)0; /* test ecx, ecx - flags set for next jcc */
    SET_LO8(eax, (TEST_Z(ecx, ecx)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_002909B0
 * Original: 0x002909B0 - 0x002909D2 (34 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002909B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002909B0: ;
    eax = MEM32(esp + 4);
    if (CMP_NE(MEM8(eax + 0x15), 2)) { sub_002909D2(); return; } /* jne: not equal / not zero */

loc_002909BA: ;
    SET_LO8(eax, MEM8(0x862998));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002909CC; /* je: equal / zero */

loc_002909C3: ;
    eax = MEM32(0x776BE0);
    if (TEST_NZ(eax, eax)) { sub_002909D2(); return; } /* jne: not equal / not zero */

loc_002909CC: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_002909E0
 * Original: 0x002909E0 - 0x002909F7 (23 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002909E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002909E0: ;
    eax = MEM32(esp + 4);
    SET_LO8(ecx, MEM8(eax + 0x12));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) { sub_002909F7(); return; } /* jne: not equal / not zero */

loc_002909EB: ;
    if (CMP_EQ(MEM8(eax + 0x18), 1)) { sub_002909F7(); return; } /* je: equal / zero */

loc_002909F1: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00290A00
 * Original: 0x00290A00 - 0x00290A10 (16 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00290A00(void)
{
    int _flags = 0; /* fallback flag var */

loc_00290A00: ;
    ecx = MEM32(esp + 4);
    SET_LO8(edx, MEM8(ecx + 0x18));
    eax = 0; /* xor self */
    (void)0; /* cmp LO8(edx), 1 - flags set for next jcc */
    SET_LO8(eax, (CMP_NE(LO8(edx), 1)) ? 1 : 0); /* setne */
    esp += 4; return; /* ret */

}

/**
 * sub_00290A40
 * Original: 0x00290A40 - 0x00290A64 (36 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00290A40(void)
{

loc_00290A40: ;
    esp = esp - 8;
    MEM32(esp) = 0x5FB0D4;
    MEM32(esp + 4) = 0;
    PUSH32(esp, 0); sub_00233E00(); /* call 0x00233E00 */

loc_00290A57: ;
    ecx = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00293230(); /* call 0x00293230 */

loc_00290A60: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00290A70
 * Original: 0x00290A70 - 0x00290A75 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00290A70(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00290A70: ;
    g_seh_ebp = ebp; sub_00290A80(); return; /* tail jmp 0x00290A80 */

}

/**
 * sub_00290A80
 * Original: 0x00290A80 - 0x00290AD2 (82 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00290A80(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_00290A80: ;
    esp = esp - 0x100;
    SET_LO8(eax, MEM8(0x7FA23C));
    xmm0 = MEMF(0x7F9F4C); /* movss */
    xmm1 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp LO8(eax), LO8(ebx) - flags set for next jcc */
    MEM8(esp + 4) = LO8(ebx);
    MEM8(esp + 0x83) = LO8(ebx);
    if (CMP_NE(LO8(eax), LO8(ebx))) goto loc_00290AAB; /* jne: not equal / not zero */

loc_00290AA8: ;
    xmm1 = xmm0; /* movaps */

loc_00290AAB: ;
    /* comiss xmm1, MEMF(0x86EEE4) - sets EFLAGS */
    if ((xmm1 >= MEMF(0x86EEE4))) { sub_00290AD2(); return; } /* jae: above or equal (unsigned >=) */

loc_00290AB4: ;
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_00290ABB; /* je: equal / zero */

loc_00290AB8: ;
    xmm0 = 0.0f; /* xorps self = zero */

loc_00290ABB: ;
    xmm1 = MEMF(0x86EEE8); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 > xmm0)) { sub_00290AD2(); return; } /* ja: above (unsigned >) */

loc_00290AC8: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x100;
    esp += 4; return; /* ret */

}

/**
 * sub_00290BF0
 * Original: 0x00290BF0 - 0x00290D45 (341 bytes, 104 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00290BF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00290BF0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_0003C1E0(); /* call 0x0003C1E0 */

loc_00290BFB: ;
    eax = MEM32(eax + 0x10);
    eax = eax + 0x40;
    eax = MEM32(eax);
    MEM8(eax + 0x30) = 1;
    ebx = MEM32(0x776238);
    eax = MEM32(esp + 0x14);
    ebx = ebx >> 5;
    ebp = 0; /* xor self */
    SET_LO8(ebx, LO8(ebx) & 1);
    if (CMP_EQ(eax, ebp)) goto loc_00290C37; /* je: equal / zero */

loc_00290C1D: ;
    SET_LO8(eax, MEM8(0x849EA5));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00290C37; /* je: equal / zero */

loc_00290C26: ;
    ecx = (uint32_t)(int32_t)SMEM8(0x77627C);
    if (CMP_EQ(MEM32(0x6BF18C), ecx)) goto loc_00290C37; /* je: equal / zero */

loc_00290C35: ;
    SET_LO8(ebx, 1);

loc_00290C37: ;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_0003C1E0(); /* call 0x0003C1E0 */

loc_00290C3E: ;
    edx = 0x10;
    esi = eax;
    PUSH32(esp, 0); sub_00232DB0(); /* call 0x00232DB0 */

loc_00290C4A: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00290C50; /* je: equal / zero */

loc_00290C4E: ;
    SET_LO8(ebx, 1);

loc_00290C50: ;
    SET_LO8(eax, MEM8(0x7FA23C));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm2 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x7F9F4C); /* movss */
    xmm0 = xmm2; /* movaps */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00290C6A; /* jne: not equal / not zero */

loc_00290C67: ;
    xmm0 = xmm1; /* movaps */

loc_00290C6A: ;
    /* comiss xmm0, MEMF(0x86EEE4) - sets EFLAGS */
    if ((xmm0 >= MEMF(0x86EEE4))) goto loc_00290C8E; /* jae: above or equal (unsigned >=) */

loc_00290C73: ;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = xmm2; /* movaps */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00290C7D; /* jne: not equal / not zero */

loc_00290C7A: ;
    xmm0 = xmm1; /* movaps */

loc_00290C7D: ;
    xmm3 = MEMF(0x86EEE8); /* movss */
    /* comiss xmm3, xmm0 - sets EFLAGS */
    if ((xmm3 <= xmm0)) { sub_00290D45(); return; } /* jbe: below or equal (unsigned <=) */

loc_00290C8E: ;
    if (TEST_Z(LO8(ebx), LO8(ebx))) { sub_00290D45(); return; } /* je: equal / zero */

loc_00290C96: ;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = xmm2; /* movaps */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00290CA0; /* jne: not equal / not zero */

loc_00290C9D: ;
    xmm0 = xmm1; /* movaps */

loc_00290CA0: ;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = xmm0 + MEMF(0x648D18); /* addss */
    MEMF(0x86EEE4) = xmm0; /* movss */
    xmm0 = xmm2; /* movaps */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00290CBA; /* jne: not equal / not zero */

loc_00290CB7: ;
    xmm0 = xmm1; /* movaps */

loc_00290CBA: ;
    edx = MEM32(0x847024);
    PUSH32(esp, 7);
    MEMF(0x86EEE8) = xmm0; /* movss */
    eax = MEM32(edx + 0x3C);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    eax = MEM32(0x87C8F4);
    PUSH32(esp, 0); sub_0001FC70(); /* call 0x0001FC70 */

loc_00290CD9: ;
    ecx = MEM32(0x847024);
    edx = MEM32(ecx + 0x3C);
    PUSH32(esp, 7);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    eax = 0xAA;
    PUSH32(esp, 0); sub_0001FC70(); /* call 0x0001FC70 */

loc_00290CF0: ;
    SET_LO8(eax, 0); /* xor self */
    MEM8(0x849FB9) = 0;
    PUSH32(esp, 0); sub_0003C1E0(); /* call 0x0003C1E0 */

loc_00290CFE: ;
    edi = eax;
    eax = MEM32(edi + 0x10);
    esi = MEM32(eax + 0x40);
    ecx = MEM32(esi + 0x38);
    eax = eax + 0x40;
    (void)0; /* cmp ecx, ebp - flags set for next jcc */
    MEM8(esi + 0x31) = 0;
    if (CMP_EQ(ecx, ebp)) goto loc_00290D1B; /* je: equal / zero */

loc_00290D14: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00290D1B: ;
    MEM32(esi + 0x38) = ebp;
    eax = MEM32(edi + 0x10);
    ecx = MEM32(eax + 0x40);
    eax = eax + 0x40;
    MEM8(ecx + 0x30) = 1;
    eax = MEM32(0x776238);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = eax & 0xFFFFFFDFu;
    MEM32(0x77623C) = ebp;
    POP32(esp, ebp);
    MEM32(0x776238) = eax;
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00290DE0
 * Original: 0x00290DE0 - 0x00290DED (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00290DE0(void)
{

loc_00290DE0: ;
    eax = 0; /* xor self */
    MEM32(0x776238) = eax;
    MEM8(0x849FBA) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_00290DF0
 * Original: 0x00290DF0 - 0x00290E6B (123 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00290DF0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00290DF0: ;
    ecx = MEM32(0x84B11C);
    esp = esp - 0x1C;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = (uint32_t)(int32_t)SMEM8(0x77627C);
    PUSH32(esp, edi);
    eax = esi;
    PUSH32(esp, 0); sub_00352A50(); /* call 0x00352A50 */

loc_00290E0A: ;
    ebx = eax;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0); sub_002928E0(); /* call 0x002928E0 */

loc_00290E18: ;
    ecx = 6;
    esi = esp + 0x10;
    edi = ebx;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM16(edi) = MEM16(esi); esi += 2; edi += 2; /* movsw */
    eax = (uint32_t)(int32_t)SMEM8(0x77627C);
    PUSH32(esp, 0); sub_0023E5D0(); /* call 0x0023E5D0 */

loc_00290E33: ;
    ecx = (uint32_t)(int32_t)SMEM8(0x77627C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0023B5D0(); /* call 0x0023B5D0 */

loc_00290E40: ;
    SET_LO8(edx, MEM8(ebx + 0x11));
    eax = 0; /* xor self */
    esp = esp + 8;
    (void)0; /* cmp LO8(edx), LO8(eax) - flags set for next jcc */
    SET_LO8(ecx, 0x14);
    if (CMP_G(LO8(edx), LO8(eax))) goto loc_00290E5A; /* jg: greater (signed >) */

loc_00290E4E: ;
    SET_LO8(edx, LO8(ecx));
    (void)0; /* cmp LO8(edx), LO8(eax) - flags set for next jcc */
    MEM8(ebx + 0x11) = LO8(ecx);
    if (CMP_G(LO8(edx), LO8(eax))) goto loc_00290E5A; /* jg: greater (signed >) */

loc_00290E57: ;
    MEM8(ebx + 0x11) = LO8(ecx);

loc_00290E5A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(0x776238) = eax;
    MEM8(0x849FBA) = LO8(eax);
    POP32(esp, ebx);
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_00290E70
 * Original: 0x00290E70 - 0x00290ED3 (99 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00290E70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00290E70: ;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0); sub_001FFB50(); /* call 0x001FFB50 */

loc_00290E7E: ;
    ebx = 0; /* xor self */
    esp = esp + 4;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    if (CMP_EQ(eax, ebx)) { sub_00290ED3(); return; } /* je: equal / zero */

loc_00290E8B: ;
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x6020F8;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_00290E97: ;
    ebp = eax;
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x602114;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_00290EA5: ;
    esi = eax;
    PUSH32(esp, ebx);
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x605110;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_00290EB4: ;
    esp = esp - 8;
    edi = eax;
    eax = esp;
    PUSH32(esp, 0); sub_00060900(); /* call 0x00060900 */

loc_00290EC0: ;
    edx = esi;
    esi = MEM32(esp + 0x1C);
    eax = ebx;
    ecx = ebp;
    PUSH32(esp, 0); sub_002307B0(); /* call 0x002307B0 */

loc_00290ECF: ;
    edi = eax;
    g_seh_ebp = ebp; sub_00290ED5(); return; /* tail jmp 0x00290ED5 */

}

/**
 * sub_00290F60
 * Original: 0x00290F60 - 0x00290F89 (41 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00290F60(void)
{
    int _flags = 0; /* fallback flag var */

loc_00290F60: ;
    SET_LO8(eax, MEM8(0x849FBA));
    esp = esp - 0x30;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    if (CMP_EQ(LO8(eax), LO8(ebx))) { sub_00290F89(); return; } /* je: equal / zero */

loc_00290F6F: ;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_0003C1E0(); /* call 0x0003C1E0 */

loc_00290F76: ;
    eax = MEM32(eax + 0x10);
    eax = eax + 0x28;
    eax = MEM32(eax);
    MEM8(eax + 0x30) = 1;
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x30;
    esp += 4; return; /* ret */

}

/**
 * sub_00291CF0
 * Original: 0x00291CF0 - 0x00291E6B (379 bytes, 116 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00291CF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00291CF0: ;
    esp = esp - 0x28;
    eax = (uint32_t)(int32_t)SMEM8(0x77627C);
    ecx = MEM32(0x84B11C);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00352A50(); /* call 0x00352A50 */

loc_00291D08: ;
    ebp = eax;
    ebx = 0; /* xor self */
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x6050F4;
    MEM32(esp + 0xC) = ebp;
    MEM32(esp + 0x18) = ebx;
    MEM32(esp + 0x1C) = ebx;
    MEM32(esp + 0x20) = ebx;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_00291D28: ;
    esi = eax;
    if (CMP_EQ(esi, ebx)) goto loc_00291D6B; /* je: equal / zero */

loc_00291D2E: ;
    PUSH32(esp, 0x84C318);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00470101(); /* call 0x00470101 */

loc_00291D39: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_00291D5B; /* je: equal / zero */

loc_00291D40: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x84C318);
    PUSH32(esp, 0x84C6B0);
    PUSH32(esp, 0); sub_0046FCD6(); /* call 0x0046FCD6 */

loc_00291D51: ;
    esp = esp + 0xC;
    MEM8(0x849930) = 1;

loc_00291D5B: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, esi);
    PUSH32(esp, 0x84C318);
    PUSH32(esp, 0); sub_0046FCD6(); /* call 0x0046FCD6 */

loc_00291D68: ;
    esp = esp + 0xC;

loc_00291D6B: ;
    eax = (uint32_t)(int32_t)SMEM8(0x77627C);
    SET_LO8(edx, MEM8(ebp + 9));
    eax = eax + eax * 4;
    ecx = MEM32(eax * 8 + 0x776F28);
    eax = 0; /* xor self */
    (void)0; /* cmp LO8(edx), 1 - flags set for next jcc */
    MEM32(esp + 0x10) = ecx;
    if (CMP_EQ(LO8(edx), 1)) goto loc_00291D90; /* je: equal / zero */

loc_00291D8A: ;
    if (CMP_AE(MEM8(ecx + 0x3E), 1)) goto loc_00291D95; /* jae: above or equal (unsigned >=) */

loc_00291D90: ;
    eax = 1;

loc_00291D95: ;
    if (CMP_EQ(MEM8(ebp + 0xA), 1)) goto loc_00291DA1; /* je: equal / zero */

loc_00291D9B: ;
    if (CMP_AE(MEM8(ecx + 0x3C), 1)) goto loc_00291DA2; /* jae: above or equal (unsigned >=) */

loc_00291DA1: ;
    eax++;

loc_00291DA2: ;
    if (CMP_EQ(MEM8(ebp + 0xB), 1)) goto loc_00291DAE; /* je: equal / zero */

loc_00291DA8: ;
    if (CMP_AE(MEM8(ecx + 0x3D), 1)) goto loc_00291DAF; /* jae: above or equal (unsigned >=) */

loc_00291DAE: ;
    eax++;

loc_00291DAF: ;
    if (CMP_EQ(MEM8(ebp + 0xC), 1)) goto loc_00291DBB; /* je: equal / zero */

loc_00291DB5: ;
    if (CMP_AE(MEM8(ecx + 0x3B), 1)) goto loc_00291DBC; /* jae: above or equal (unsigned >=) */

loc_00291DBB: ;
    eax++;

loc_00291DBC: ;
    if (CMP_EQ(MEM8(ebp + 0xD), 1)) goto loc_00291DC8; /* je: equal / zero */

loc_00291DC2: ;
    if (CMP_AE(MEM8(ecx + 0x3F), 1)) goto loc_00291DC9; /* jae: above or equal (unsigned >=) */

loc_00291DC8: ;
    eax++;

loc_00291DC9: ;
    if (CMP_EQ(MEM8(ebp + 0xE), 1)) goto loc_00291DD5; /* je: equal / zero */

loc_00291DCF: ;
    if (CMP_AE(MEM8(ecx + 0x40), 1)) goto loc_00291DD6; /* jae: above or equal (unsigned >=) */

loc_00291DD5: ;
    eax++;

loc_00291DD6: ;
    if (CMP_NE(eax, 6)) goto loc_00291DDE; /* jne: not equal / not zero */

loc_00291DDB: ;
    MEM8(ebp + 0xA) = LO8(ebx);

loc_00291DDE: ;
    if (CMP_NE(MEM32(0x84A19C), ebx)) goto loc_00291DEB; /* jne: not equal / not zero */

loc_00291DE6: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_00291DEB: ;
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
    if (CMP_EQ(esi, ebx)) goto loc_00291E34; /* je: equal / zero */

loc_00291E12: ;
    if (CMP_B(MEM32(esi + 0x80), 0x10)) goto loc_00291E34; /* jb: below (unsigned <) */

loc_00291E1B: ;
    ecx = 4;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00291E25: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00291E2D: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_00291E55; /* jne: not equal / not zero */

loc_00291E34: ;
    esi = MEM32(0x84A184);
    ecx = 4;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00291E46: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00291E4E: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) { sub_00291E6B(); return; } /* je: equal / zero */

loc_00291E55: ;
    MEM32(eax + 4) = ebx;
    ebp = ebp + 4;
    MEM32(eax) = 0x5FA138;
    MEM32(eax + 8) = ebp;
    MEM8(eax + 0xC) = LO8(ebx);
    edi = eax;
    g_seh_ebp = ebp; sub_00291E6D(); return; /* tail jmp 0x00291E6D */

}

/**
 * sub_002928E0
 * Original: 0x002928E0 - 0x00292985 (165 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002928E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002928E0: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    eax = eax + eax * 4;
    ecx = MEM32(eax * 8 + 0x776F20);
    eax = MEM32(ecx * 4 + 0x69CF90);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    edi = 0x1A;
    ecx = 0x604EA8;
    MEM32(esp + 0x14) = 0;
    PUSH32(esp, 0); sub_0005EE70(); /* call 0x0005EE70 */

loc_00292914: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_00292932; /* je: equal / zero */

loc_0029291B: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    eax = 0x5F40BC;
    ecx = 0x604EA8;
    PUSH32(esp, 0); sub_0005EE70(); /* call 0x0005EE70 */

loc_0029292F: ;
    esp = esp + 4;

loc_00292932: ;
    eax = MEM32(esp + 0x10);
    esi = eax;
    ecx = 6;
    edi = ebp;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM16(edi) = MEM16(esi); esi += 2; edi += 2; /* movsw */
    esi = eax + -12;
    ecx = esi;
    edi = 0x84D458;
    MEM8(ebp + 0x15) = 0;
    PUSH32(esp, 0); sub_00061F40(); /* call 0x00061F40 */

loc_00292956: ;
    edi = eax;
    if (TEST_Z(edi, edi)) goto loc_00292981; /* je: equal / zero */

loc_0029295C: ;
    eax = MEM32(edi + 0x18);
    if (TEST_Z(eax, eax)) goto loc_00292967; /* je: equal / zero */

loc_00292963: ;
    MEM16(edi + 0x2C) = MEM16(edi + 0x2C) - 1;

loc_00292967: ;
    if (CMP_NE(MEM16(edi + 0x2C), 0)) goto loc_00292981; /* jne: not equal / not zero */

loc_0029296E: ;
    ecx = esi;
    eax = edi;
    PUSH32(esp, 0); sub_0005EA20(); /* call 0x0005EA20 */

loc_00292977: ;
    eax = 0x84D458;
    PUSH32(esp, 0); sub_00061D60(); /* call 0x00061D60 */

loc_00292981: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00292990
 * Original: 0x00292990 - 0x002929C0 (48 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00292990(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00292990: ;
    ecx = MEM32(0x84B11C);
    PUSH32(esp, edi);
    edi = (uint32_t)(int32_t)SMEM8(0x77627C);
    eax = edi;
    PUSH32(esp, 0); sub_00352A50(); /* call 0x00352A50 */

loc_002929A5: ;
    SET_LO8(ecx, MEM8(eax + 0x15));
    if (TEST_Z(LO8(ecx), LO8(ecx))) { sub_002929C0(); return; } /* je: equal / zero */

loc_002929AC: ;
    PUSH32(esp, esi);
    ecx = 6;
    esi = eax;
    edi = 0x862C84;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM16(edi) = MEM16(esi); esi += 2; edi += 2; /* movsw */
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_002929CF(); return; /* tail jmp 0x002929CF */

}

/**
 * sub_00292A30
 * Original: 0x00292A30 - 0x00292A80 (80 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00292A30(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00292A30: ;
    PUSH32(esp, ebx);
    eax = eax << 6;
    eax = eax + 0x777ED0;
    PUSH32(esp, esi);
    esi = MEM32(0x777EC4);
    edx = eax;
    eax = 0; /* xor self */
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_LE(esi & esi, 0)) goto loc_00292A6D; /* jle: less or equal (signed <=) */

loc_00292A49: ;
    edi = MEM32(edx + 0x14);
    ecx = 0x777ED8;

loc_00292A51: ;
    if (CMP_NE(MEM32(ecx + 0xC), edi)) goto loc_00292A65; /* jne: not equal / not zero */

loc_00292A56: ;
    ebx = MEM32(ecx);
    if (CMP_EQ(ebx, MEM32(edx + 8))) goto loc_00292A65; /* je: equal / zero */

loc_00292A5D: ;
    ebx = MEM32(ecx + 0x10);
    if (CMP_EQ(ebx, MEM32(edx + 0x18))) { sub_00292A80(); return; } /* je: equal / zero */

loc_00292A65: ;
    eax++;
    ecx = ecx + 0x40;
    if (CMP_L(eax, esi)) goto loc_00292A51; /* jl: less (signed <) */

loc_00292A6D: ;
    ecx = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    (void)0; /* test ecx, ecx - flags set for next jcc */
    SET_LO8(eax, (TEST_Z(ecx, ecx)) ? 1 : 0); /* sete */
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_00292A90(); return; /* tail jmp 0x00292A90 */

}

/**
 * sub_00292A90
 * Original: 0x00292A90 - 0x00292B21 (145 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00292A90(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00292A90: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(0x777EC4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    edi = 0; /* xor self */
    (void)0; /* test ebp, ebp - flags set for next jcc */
    esi = eax;
    if (CMP_LE(ebp & ebp, 0)) goto loc_00292B1A; /* jle: less or equal (signed <=) */

loc_00292AA4: ;
    eax = edi;
    PUSH32(esp, 0); sub_001FF2E0(); /* call 0x001FF2E0 */

loc_00292AAB: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00292AB0; /* je: equal / zero */

loc_00292AAF: ;
    ebx++;

loc_00292AB0: ;
    edi++;
    if (CMP_L(edi, ebp)) goto loc_00292AA4; /* jl: less (signed <) */

loc_00292AB5: ;
    if (TEST_Z(ebx, ebx)) goto loc_00292B1A; /* je: equal / zero */

loc_00292AB9: ;
    /* TODO: rdtsc  */
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470A00(); /* call 0x00470A00 */

loc_00292AC6: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x898);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470D50(); /* call 0x00470D50 */

loc_00292AD4: ;
    ebp = MEM32(0x828B48);
    edi = MEM32(0x828B4C);
    PUSH32(esp, 0);
    eax = eax - ebp;
    PUSH32(esp, 0x3E8);
    edx = edx - edi - _cf; /* sbb */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470EA0(); /* call 0x00470EA0 */

loc_00292AF2: ;
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ebx);
      edx = (uint32_t)(_dividend % (uint32_t)ebx); }
    ebx = 0; /* xor self */
    edi = 0; /* xor self */
    ebp = edx;
    /* nop */

loc_00292B00: ;
    eax = edi;
    PUSH32(esp, 0); sub_001FF2E0(); /* call 0x001FF2E0 */

loc_00292B07: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00292B10; /* je: equal / zero */

loc_00292B0B: ;
    if (CMP_EQ(ebx, ebp)) { sub_00292B21(); return; } /* je: equal / zero */

loc_00292B0F: ;
    ebx++;

loc_00292B10: ;
    eax = MEM32(0x777EC4);
    edi++;
    if (CMP_L(edi, eax)) goto loc_00292B00; /* jl: less (signed <) */

loc_00292B1A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00292B30
 * Original: 0x00292B30 - 0x00292BDF (175 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00292B30(void)
{
    int _flags = 0; /* fallback flag var */

loc_00292B30: ;
    eax = MEM32(0x84A19C);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(eax, ebx)) goto loc_00292B43; /* jne: not equal / not zero */

loc_00292B3E: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_00292B43: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (CMP_EQ(esi, ebx)) goto loc_00292B8B; /* je: equal / zero */

loc_00292B69: ;
    if (CMP_B(MEM32(esi + 0x80), 0x3C)) goto loc_00292B8B; /* jb: below (unsigned <) */

loc_00292B72: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00292B7C: ;
    PUSH32(esp, 0x3C);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00292B84: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_00292BAC; /* jne: not equal / not zero */

loc_00292B8B: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00292B9D: ;
    PUSH32(esp, 0x3C);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00292BA5: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) { sub_00292BDF(); return; } /* je: equal / zero */

loc_00292BAC: ;
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
    MEM32(eax) = 0x604E40;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00292BF0
 * Original: 0x00292BF0 - 0x00292C20 (48 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00292BF0(void)
{

loc_00292BF0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    eax = ZX8(MEM8(edi + 0x34));
    PUSH32(esp, 2);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_00292C03: ;
    eax = MEM32(edi + 0x38);
    PUSH32(esp, 2);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_00292C0D: ;
    eax = ZX8(MEM8(edi + 0x35));
    PUSH32(esp, 9);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_00292C18: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00292C60
 * Original: 0x00292C60 - 0x00292E0F (431 bytes, 130 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00292C60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00292C60: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ecx;
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    eax = 0x862C40;
    PUSH32(esp, 0); sub_00296250(); /* call 0x00296250 */

loc_00292C72: ;
    ebx = eax;
    if (TEST_Z(ebx, ebx)) goto loc_00292E07; /* je: equal / zero */

loc_00292C7C: ;
    SET_LO8(eax, MEM8(0x862C5C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00292DAC; /* je: equal / zero */

loc_00292C89: ;
    SET_LO8(ecx, MEM8(ebp + 0x34));
    SET_LO8(eax, MEM8(ebx + 0x75B));
    edx = 1;
    edx = edx << LO8(ecx);
    if (TEST_Z(LO8(eax), LO8(edx))) goto loc_00292E07; /* je: equal / zero */

loc_00292CA1: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_00292CAF; /* jne: not equal / not zero */

loc_00292CAA: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_00292CAF: ;
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
    if (TEST_Z(esi, esi)) goto loc_00292CF9; /* je: equal / zero */

loc_00292CD7: ;
    if (CMP_B(MEM32(esi + 0x80), 0x3C)) goto loc_00292CF9; /* jb: below (unsigned <) */

loc_00292CE0: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00292CEA: ;
    PUSH32(esp, 0x3C);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00292CF2: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_00292D1A; /* jne: not equal / not zero */

loc_00292CF9: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00292D0B: ;
    PUSH32(esp, 0x3C);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00292D13: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_00292D23; /* je: equal / zero */

loc_00292D1A: ;
    PUSH32(esp, 0); sub_0028C950(); /* call 0x0028C950 */

loc_00292D1F: ;
    esi = eax;
    goto loc_00292D25;

loc_00292D23: ;
    esi = 0; /* xor self */

loc_00292D25: ;
    SET_LO8(ecx, MEM8(ebp + 0x34));
    MEM8(esi + 0x34) = LO8(ecx);
    edx = ZX8(MEM8(ebp + 0x34));
    SET_LO8(eax, MEM8(ebp + 0x35));
    if (CMP_EQ(LO8(eax), MEM8(edx + ebx + 0x76C))) goto loc_00292D44; /* je: equal / zero */

loc_00292D3B: ;
    MEM32(esi + 0x38) = 1;
    goto loc_00292D68;

loc_00292D44: ;
    eax = ZX8(MEM8(ebp + 0x34));
    PUSH32(esp, 0);
    ecx = ebx;
    PUSH32(esp, 0); sub_00292E10(); /* call 0x00292E10 */

loc_00292D51: ;
    esp = esp + 4;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00292D61; /* je: equal / zero */

loc_00292D58: ;
    MEM32(esi + 0x38) = 0;
    goto loc_00292D68;

loc_00292D61: ;
    MEM32(esi + 0x38) = 2;

loc_00292D68: ;
    eax = MEM32(esi + 0x38);
    if (TEST_NZ(eax, eax)) goto loc_00292D84; /* jne: not equal / not zero */

loc_00292D6F: ;
    SET_LO8(ecx, MEM8(ebp + 0x34));
    SET_LO8(eax, MEM8(ebx + 0x759));
    SET_LO8(edx, 1);
    SET_LO8(edx, LO8(edx) << LO8(ecx));
    SET_LO8(eax, LO8(eax) | LO8(edx));
    MEM8(ebx + 0x759) = LO8(eax);

loc_00292D84: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x1F4);
    MEM8(esi + 0x35) = 0xFF;
    PUSH32(esp, 0); sub_004168D0(); /* call 0x004168D0 */

loc_00292D94: ;
    ecx = MEM32(ebx + 0x9DC);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_00292DA2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00292DAC: ;
    eax = ZX8(MEM8(ebp + 0x34));
    if (CMP_NE(MEM8(eax + 0x862D32), 0x41)) goto loc_00292E07; /* jne: not equal / not zero */

loc_00292DB9: ;
    ebp = MEM32(ebp + 0x38);
    ebp = ebp - 0;
    if ((ebp == 0)) goto loc_00292E00; /* je: equal / zero */

loc_00292DC1: ;
    ebp--;
    if ((ebp == 0)) goto loc_00292DE6; /* je: equal / zero */

loc_00292DC4: ;
    ebp--;
    if ((ebp != 0)) goto loc_00292E07; /* jne: not equal / not zero */

loc_00292DC7: ;
    xmm0 = MEMF(0x648CF0); /* movss */
    MEM8(eax + 0x862D32) = 0x21;
    POP32(esp, ebp);
    MEMF(0x862D34) = xmm0; /* movss */
    eax = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00292DE6: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEM8(eax + 0x862D32) = 1;
    POP32(esp, ebp);
    MEMF(0x862D34) = xmm0; /* movss */
    eax = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00292E00: ;
    MEM8(eax + 0x862D32) = 0x81;

loc_00292E07: ;
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00292E10
 * Original: 0x00292E10 - 0x00292E24 (20 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00292E10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00292E10: ;
    esp = esp - 8;
    if (TEST_Z(ecx, ecx)) { sub_00292E24(); return; } /* je: equal / zero */

loc_00292E17: ;
    SET_LO8(edx, MEM8(ecx + eax + 0x76C));
    SET_LO8(eax, MEM8(ecx + eax * 4 + 4));
    g_seh_ebp = ebp; sub_00292E31(); return; /* tail jmp 0x00292E31 */

}

/**
 * sub_00293020
 * Original: 0x00293020 - 0x00293036 (22 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00293020(void)
{

loc_00293020: ;
    eax = MEM32(ecx + 0x34);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 2);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0029302F: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00293040
 * Original: 0x00293040 - 0x00293053 (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00293040(void)
{
    int _flags = 0; /* fallback flag var */

loc_00293040: ;
    eax = MEM32(ecx + 0x34);
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(eax, (TEST_Z(eax, eax)) ? 1 : 0); /* sete */
    MEM8(0x849EA5) = LO8(eax);
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00293060
 * Original: 0x00293060 - 0x0029310F (175 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00293060(void)
{
    int _flags = 0; /* fallback flag var */

loc_00293060: ;
    eax = MEM32(0x84A19C);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(eax, ebx)) goto loc_00293073; /* jne: not equal / not zero */

loc_0029306E: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_00293073: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (CMP_EQ(esi, ebx)) goto loc_002930BB; /* je: equal / zero */

loc_00293099: ;
    if (CMP_B(MEM32(esi + 0x80), 0x38)) goto loc_002930BB; /* jb: below (unsigned <) */

loc_002930A2: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002930AC: ;
    PUSH32(esp, 0x38);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002930B4: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_002930DC; /* jne: not equal / not zero */

loc_002930BB: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002930CD: ;
    PUSH32(esp, 0x38);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002930D5: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) { sub_0029310F(); return; } /* je: equal / zero */

loc_002930DC: ;
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
    MEM32(eax) = 0x604DD8;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00293120
 * Original: 0x00293120 - 0x00293150 (48 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00293120(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00293120: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47F8A0);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    esp = esp - 0x24;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    esi = edx;
    if (CMP_BE(ecx, 0xFFFFFFF)) { sub_00293150(); return; } /* jbe: below or equal (unsigned <=) */

loc_0029314B: ;
    g_seh_ebp = ebp; sub_001DE0C0(); return; /* tail jmp 0x001DE0C0 */

}

/**
 * sub_00293230
 * Original: 0x00293230 - 0x002932BB (139 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00293230(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00293230: ;
    PUSH32(esp, ebx);
    ebx = eax;
    eax = MEM32(ebx + 0x10);
    ecx = MEM32(ebx + 0xC);
    ecx = ecx + eax;
    (void)0; /* test LO8(ecx), 1 - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    if (TEST_NZ(LO8(ecx), 1)) goto loc_00293258; /* jne: not equal / not zero */

loc_00293245: ;
    ecx = MEM32(ebx + 8);
    eax = eax + 2;
    eax = eax >> 1;
    if (CMP_A(ecx, eax)) goto loc_00293258; /* ja: above (unsigned >) */

loc_00293251: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_002932E0(); /* call 0x002932E0 */

loc_00293258: ;
    eax = MEM32(ebx + 8);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0xC);
    PUSH32(esp, edi);
    esi = esi + MEM32(ebx + 0x10);
    edi = esi;
    edi = edi >> 1;
    if (CMP_A(eax, edi)) goto loc_0029326D; /* ja: above (unsigned >) */

loc_0029326B: ;
    edi = edi - eax;

loc_0029326D: ;
    edx = MEM32(ebx + 4);
    if (CMP_NE(MEM32(edx + edi * 4), 0)) goto loc_00293292; /* jne: not equal / not zero */

loc_00293276: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x461);
    PUSH32(esp, 0x606A34);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_00293289: ;
    ecx = MEM32(ebx + 4);
    esp = esp + 0x10;
    MEM32(ecx + edi * 4) = eax;

loc_00293292: ;
    edx = MEM32(ebx + 4);
    eax = MEM32(edx + edi * 4);
    esi = esi & 1;
    eax = eax + esi * 8;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, esi);
    if (TEST_Z(eax, eax)) goto loc_002932AF; /* je: equal / zero */

loc_002932A4: ;
    ecx = MEM32(ebp);
    MEM32(eax) = ecx;
    edx = MEM32(ebp + 4);
    MEM32(eax + 4) = edx;

loc_002932AF: ;
    eax = MEM32(ebx + 0x10);
    eax++;
    POP32(esp, ebp);
    MEM32(ebx + 0x10) = eax;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002932C0
 * Original: 0x002932C0 - 0x002932DE (30 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002932C0(void)
{

loc_002932C0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00264E50(); /* call 0x00264E50 */

loc_002932D1: ;
    eax = esi;
    eax = eax << 4;
    esp = esp + 0x10;
    eax = eax + edi;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002932E0
 * Original: 0x002932E0 - 0x00293440 (352 bytes, 131 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002932E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002932E0: ;
    eax = MEM32(ebx + 8);
    esp = esp - 0xC;
    ecx = 0xFFFFFFF;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    ecx = ecx - eax;
    if (CMP_AE(ecx, edi)) goto loc_002932FB; /* jae: above or equal (unsigned >=) */

loc_002932F6: ;
    PUSH32(esp, 0); sub_0002F5A0(); /* call 0x0002F5A0 */

loc_002932FB: ;
    ecx = eax;
    ecx = ecx >> 1;
    if (CMP_AE(ecx, 8)) goto loc_00293309; /* jae: above or equal (unsigned >=) */

loc_00293304: ;
    ecx = 8;

loc_00293309: ;
    if (CMP_AE(edi, ecx)) goto loc_0029331E; /* jae: above or equal (unsigned >=) */

loc_0029330D: ;
    edx = 0xFFFFFFF;
    edx = edx - ecx;
    if (CMP_A(eax, edx)) goto loc_0029331E; /* ja: above (unsigned >) */

loc_00293318: ;
    MEM32(esp + 0x14) = ecx;
    edi = ecx;

loc_0029331E: ;
    PUSH32(esp, ebp);
    ebp = MEM32(ebx + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, 0xFFFFFFFFu);
    eax = eax + edi;
    PUSH32(esp, 0x461);
    eax = eax << 2;
    PUSH32(esp, 0x606A34);
    PUSH32(esp, eax);
    ebp = ebp >> 1;
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_0029333C: ;
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

loc_00293377: ;
    edx = MEM32(esp + 0x30);
    ecx = MEM32(ebx + 4);
    esp = esp + 0x1C;
    eax = eax + edx;
    if (CMP_A(ebp, edi)) goto loc_002933C6; /* ja: above (unsigned >) */

loc_00293387: ;
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

loc_0029339F: ;
    ecx = MEM32(esp + 0x20);
    edx = eax;
    esp = esp + 0xC;
    edx = edx + ecx;
    if (CMP_BE(esi & esi, 0)) goto loc_002933BA; /* jbe: below or equal (unsigned <=) */

loc_002933AE: ;
    ecx = esi;
    eax = 0; /* xor self */
    edi = edx;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    edi = MEM32(esp + 0x1C);

loc_002933BA: ;
    if (CMP_BE(ebp & ebp, 0)) goto loc_00293410; /* jbe: below or equal (unsigned <=) */

loc_002933BE: ;
    edi = MEM32(esp + 0xC);
    ecx = ebp;
    goto loc_00293408;

loc_002933C6: ;
    ebp = edi * 4;
    edx = ebp;
    edx = (uint32_t)((int32_t)edx >> 2);
    edx = edx << 2;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E670(); /* call 0x0046E670 */

loc_002933DD: ;
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

loc_002933F9: ;
    edx = eax;
    esp = esp + 0x18;
    edx = edx + esi;
    if (CMP_BE(edi & edi, 0)) goto loc_00293410; /* jbe: below or equal (unsigned <=) */

loc_00293404: ;
    ecx = edi;
    edi = edx;

loc_00293408: ;
    eax = 0; /* xor self */
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    edi = MEM32(esp + 0x1C);

loc_00293410: ;
    eax = MEM32(ebx + 4);
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, esi);
    POP32(esp, ebp);
    if (TEST_Z(eax, eax)) goto loc_0029342A; /* je: equal / zero */

loc_00293419: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00293427: ;
    esp = esp + 4;

loc_0029342A: ;
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
 * sub_00293440
 * Original: 0x00293440 - 0x00293493 (83 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00293440(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00293440: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47F8E0);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    esp = esp - 0x40;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    eax = MEM32(ebp + 0x14);
    esi = MEM32(ebp + 0x10);
    ebx = MEM32(ebp + 8);
    ecx = MEM32(eax);
    MEM32(ebp + -76) = ecx;
    if (TEST_Z(ecx, ecx)) goto loc_00293476; /* je: equal / zero */

loc_00293473: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) + 1;

loc_00293476: ;
    edx = MEM32(eax + 4);
    MEM32(ebp + -72) = edx;
    edx = MEM32(eax + 8);
    MEM32(ebp + -68) = edx;
    eax = MEM32(eax + 0xC);
    MEM32(ebp + -64) = eax;
    edx = MEM32(ebx + 4);
    if (TEST_NZ(edx, edx)) { sub_00293493(); return; } /* jne: not equal / not zero */

loc_0029348F: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_0029349B(); return; /* tail jmp 0x0029349B */

}

/**
 * sub_00293700
 * Original: 0x00293700 - 0x0029371C (28 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00293700(void)
{

loc_00293700: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002937A0(); /* call 0x002937A0 */

loc_00293716: ;
    esp = esp + 0x14;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00293720
 * Original: 0x00293720 - 0x0029372C (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00293720(void)
{
    int _flags = 0; /* fallback flag var */

loc_00293720: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(esi + 8), _icall_esp); /* indirect call */
    }

loc_00293724: ;
    esp = esp + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_0029372C(); return; } /* jne: not equal / not zero */

loc_0029372B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00293740
 * Original: 0x00293740 - 0x00293762 (34 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00293740(void)
{
    int _flags = 0; /* fallback flag var */

loc_00293740: ;
    if (TEST_Z(ecx, ecx)) goto loc_00293761; /* je: equal / zero */

loc_00293744: ;
    eax = MEM32(edx);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ecx) = eax;
    if (TEST_Z(eax, eax)) goto loc_0029374F; /* je: equal / zero */

loc_0029374C: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;

loc_0029374F: ;
    eax = MEM32(edx + 4);
    MEM32(ecx + 4) = eax;
    eax = MEM32(edx + 8);
    MEM32(ecx + 8) = eax;
    edx = MEM32(edx + 0xC);
    MEM32(ecx + 0xC) = edx;

loc_00293761: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00293770
 * Original: 0x00293770 - 0x00293794 (36 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00293770(void)
{
    int _flags = 0; /* fallback flag var */

loc_00293770: ;
    eax = MEM32(esi);
    if (TEST_Z(eax, eax)) goto loc_0029378D; /* je: equal / zero */

loc_00293776: ;
    MEM32(eax + 4) = MEM32(eax + 4) - 1;
    ecx = MEM32(esi);
    eax = MEM32(ecx + 4);
    if (TEST_NZ(eax, eax)) goto loc_0029378D; /* jne: not equal / not zero */

loc_00293782: ;
    if (TEST_Z(ecx, ecx)) goto loc_0029378D; /* je: equal / zero */

loc_00293786: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x10), _icall_esp); /* indirect call */
    }

loc_0029378D: ;
    MEM32(esi) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_002937A0
 * Original: 0x002937A0 - 0x002937EF (79 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002937A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_002937A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47F430);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    edi = MEM32(ebp + 0x10);
    MEM32(ebp + -20) = edi;
    MEM32(ebp + -4) = 0;
    ebx = MEM32(ebp + 0xC);
    esi = MEM32(ebp + 8);

loc_002937D4: ;
    if (CMP_EQ(esi, ebx)) { sub_002937EF(); return; } /* je: equal / zero */

loc_002937D8: ;
    edx = esi;
    ecx = edi;
    PUSH32(esp, 0); sub_00293740(); /* call 0x00293740 */

loc_002937E1: ;
    edi = edi + 0x10;
    MEM32(ebp + 0x10) = edi;
    esi = esi + 0x10;
    MEM32(ebp + 8) = esi;
    goto loc_002937D4;

}

/**
 * sub_00293830
 * Original: 0x00293830 - 0x00293879 (73 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00293830(void)
{
    int _flags = 0; /* fallback flag var */

loc_00293830: ;
    PUSH32(esp, ecx);
    eax = MEM32(esi + 0x14);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_EQ(eax, edi)) goto loc_0029384C; /* je: equal / zero */

loc_0029383B: ;
    MEM32(esp + 4) = eax;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00293849: ;
    esp = esp + 4;

loc_0029384C: ;
    MEM32(esi + 0x14) = edi;
    MEM32(esi + 0x18) = edi;
    MEM32(esi + 0x1C) = edi;
    eax = MEM32(esi + 4);
    if (CMP_EQ(eax, edi)) goto loc_0029386D; /* je: equal / zero */

loc_0029385C: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    MEM32(esp + 8) = eax;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0029386A: ;
    esp = esp + 4;

loc_0029386D: ;
    MEM32(esi + 4) = edi;
    MEM32(esi + 8) = edi;
    MEM32(esi + 0xC) = edi;
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00293880
 * Original: 0x00293880 - 0x002938E2 (98 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00293880(void)
{
    int _flags = 0; /* fallback flag var */

loc_00293880: ;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    MEM32(esi + 4) = edi;
    MEM32(esi + 8) = edi;
    MEM32(esi + 0xC) = edi;
    eax = edi;
    (void)0; /* cmp eax, edi - flags set for next jcc */
    MEM32(esi + 0x14) = edi;
    MEM32(esi + 0x18) = edi;
    MEM32(esi + 0x1C) = edi;
    if (CMP_EQ(eax, edi)) goto loc_002938AD; /* je: equal / zero */

loc_0029389C: ;
    MEM32(esp + 4) = eax;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_002938AA: ;
    esp = esp + 4;

loc_002938AD: ;
    MEM32(esi + 0x14) = edi;
    MEM32(esi + 0x18) = edi;
    MEM32(esi + 0x1C) = edi;
    eax = MEM32(esi + 4);
    (void)0; /* cmp eax, edi - flags set for next jcc */
    MEM16(esi + 0x20) = 0x80;
    if (CMP_EQ(eax, edi)) goto loc_002938D4; /* je: equal / zero */

loc_002938C3: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    MEM32(esp + 8) = eax;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_002938D1: ;
    esp = esp + 4;

loc_002938D4: ;
    MEM32(esi + 4) = edi;
    MEM32(esi + 8) = edi;
    MEM32(esi + 0xC) = edi;
    eax = esi;
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002938F0
 * Original: 0x002938F0 - 0x00293916 (38 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002938F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002938F0: ;
    PUSH32(esp, ecx);
    eax = MEM32(ebx + 4);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x293960);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    edi = esp + 0x14;
    PUSH32(esp, 0); sub_00293DA0(); /* call 0x00293DA0 */

loc_00293909: ;
    eax = MEM32(eax);
    esp = esp + 0xC;
    if (CMP_NE(eax, esi)) { sub_00293916(); return; } /* jne: not equal / not zero */

loc_00293912: ;
    edx = eax;
    g_seh_ebp = ebp; sub_00293932(); return; /* tail jmp 0x00293932 */

}

/**
 * sub_00293960
 * Original: 0x00293960 - 0x0029396D (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00293960(void)
{
    int _flags = 0; /* fallback flag var */

loc_00293960: ;
    eax = 0; /* xor self */
    (void)0; /* cmp MEM16(esp + 4), 0x80 - flags set for next jcc */
    SET_LO8(eax, (CMP_L(MEM16(esp + 4), 0x80)) ? 1 : 0); /* setl */
    esp += 4; return; /* ret */

}

/**
 * sub_00293970
 * Original: 0x00293970 - 0x00293A8C (284 bytes, 93 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00293970(void)
{
    int _flags = 0; /* fallback flag var */

loc_00293970: ;
    SET_LO8(eax, MEM8(0x862C5C));
    esp = esp - 8;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00293A88; /* je: equal / zero */

loc_00293980: ;
    eax = MEM32(0x84A5F8);
    ecx = 0; /* xor self */
    PUSH32(esp, esi);
    MEM32(esp + 4) = ecx;
    eax = eax + 0x77C;
    esi = 0x20;
    goto loc_002939A0;

    /* nop */
    /* nop */

loc_002939A0: ;
    edx = (uint32_t)(int32_t)SMEM16(eax + -1744);
    (void)0; /* cmp ecx, edx - flags set for next jcc */
    MEM32(esp + 8) = edx;
    ecx = esp + 8;
    if (CMP_L(ecx, edx)) goto loc_002939B7; /* jl: less (signed <) */

loc_002939B3: ;
    ecx = esp + 4;

loc_002939B7: ;
    ecx = MEM32(ecx);
    edx = (uint32_t)(int32_t)SMEM16(eax);
    MEM32(esp + 4) = ecx;
    (void)0; /* cmp ecx, edx - flags set for next jcc */
    MEM32(esp + 8) = edx;
    ecx = esp + 8;
    if (CMP_L(ecx, edx)) goto loc_002939D0; /* jl: less (signed <) */

loc_002939CC: ;
    ecx = esp + 4;

loc_002939D0: ;
    ecx = MEM32(ecx);
    edx = (uint32_t)(int32_t)SMEM16(eax + 0x6D0);
    MEM32(esp + 4) = ecx;
    (void)0; /* cmp ecx, edx - flags set for next jcc */
    MEM32(esp + 8) = edx;
    ecx = esp + 8;
    if (CMP_L(ecx, edx)) goto loc_002939ED; /* jl: less (signed <) */

loc_002939E9: ;
    ecx = esp + 4;

loc_002939ED: ;
    ecx = MEM32(ecx);
    edx = (uint32_t)(int32_t)SMEM16(eax + 0xDA0);
    MEM32(esp + 4) = ecx;
    (void)0; /* cmp ecx, edx - flags set for next jcc */
    MEM32(esp + 8) = edx;
    ecx = esp + 8;
    if (CMP_L(ecx, edx)) goto loc_00293A0A; /* jl: less (signed <) */

loc_00293A06: ;
    ecx = esp + 4;

loc_00293A0A: ;
    ecx = MEM32(ecx);
    eax = eax + 0x1B40;
    esi--;
    MEM32(esp + 4) = ecx;
    if ((esi != 0)) goto loc_002939A0; /* jne: not equal / not zero */

loc_00293A18: ;
    esi = MEM32(edi + 4);
    edx = 0; /* xor self */
    /* nop */

loc_00293A20: ;
    if (TEST_Z(esi, esi)) goto loc_00293A4C; /* je: equal / zero */

loc_00293A24: ;
    eax = MEM32(edi + 8);
    eax = eax - esi;
    eax = (uint32_t)((int32_t)eax >> 1);
    if (CMP_AE(edx, eax)) goto loc_00293A4C; /* jae: above or equal (unsigned >=) */

loc_00293A2F: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + edx * 2);
    MEM32(esp + 8) = eax;
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    eax = esp + 8;
    if (CMP_L(ecx, eax)) goto loc_00293A43; /* jl: less (signed <) */

loc_00293A3F: ;
    eax = esp + 4;

loc_00293A43: ;
    ecx = MEM32(eax);
    MEM32(esp + 4) = ecx;
    edx++;
    goto loc_00293A20;

loc_00293A4C: ;
    esi = MEM32(edi + 0x14);
    edx = 0; /* xor self */

loc_00293A51: ;
    if (TEST_Z(esi, esi)) goto loc_00293A80; /* je: equal / zero */

loc_00293A55: ;
    eax = MEM32(edi + 0x18);
    eax = eax - esi;
    eax = (uint32_t)((int32_t)eax >> 1);
    if (CMP_AE(edx, eax)) goto loc_00293A80; /* jae: above or equal (unsigned >=) */

loc_00293A60: ;
    eax = MEM32(edi + 0x14);
    eax = (uint32_t)(int32_t)SMEM16(eax + edx * 2);
    MEM32(esp + 8) = eax;
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    eax = esp + 8;
    if (CMP_L(ecx, eax)) goto loc_00293A77; /* jl: less (signed <) */

loc_00293A73: ;
    eax = esp + 4;

loc_00293A77: ;
    ecx = MEM32(eax);
    MEM32(esp + 4) = ecx;
    edx++;
    goto loc_00293A51;

loc_00293A80: ;
    ecx = ecx + 0x32;
    MEM16(edi + 0x20) = LO16(ecx);
    POP32(esp, esi);

loc_00293A88: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00293A90
 * Original: 0x00293A90 - 0x00293A9C (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00293A90(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00293A90: ;
    PUSH32(esp, esi);
    esi = MEM32(eax + 4);
    if (TEST_NZ(esi, esi)) { sub_00293A9C(); return; } /* jne: not equal / not zero */

loc_00293A98: ;
    edx = 0; /* xor self */
    g_seh_ebp = ebp; sub_00293AA3(); return; /* tail jmp 0x00293AA3 */

}

/**
 * sub_00293AE0
 * Original: 0x00293AE0 - 0x00293B01 (33 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00293AE0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00293AE0: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    eax = edi;
    if (CMP_BE(esi & esi, 0)) goto loc_00293AFD; /* jbe: below or equal (unsigned <=) */

loc_00293AE6: ;
    ecx = esi;
    PUSH32(esp, ebx);
    /* nop */

loc_00293AF0: ;
    SET_LO16(ebx, MEM16(edx));
    MEM16(eax) = LO16(ebx);
    eax = eax + 2;
    ecx--;
    if ((ecx != 0)) goto loc_00293AF0; /* jne: not equal / not zero */

loc_00293AFC: ;
    POP32(esp, ebx);

loc_00293AFD: ;
    eax = edi + esi * 2;
    esp += 4; return; /* ret */

}

/**
 * sub_00293B10
 * Original: 0x00293B10 - 0x00293B4B (59 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00293B10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00293B10: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47F890);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    esp = esp - 0x20;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    esi = ecx;
    eax = MEM32(ebp + 0x10);
    SET_LO16(ecx, MEM16(eax));
    MEM16(ebp + -20) = LO16(ecx);
    edi = MEM32(ebp + 8);
    ecx = MEM32(edi + 4);
    if (TEST_NZ(ecx, ecx)) { sub_00293B4B(); return; } /* jne: not equal / not zero */

loc_00293B47: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_00293B52(); return; /* tail jmp 0x00293B52 */

}

/**
 * sub_00293D80
 * Original: 0x00293D80 - 0x00293D9D (29 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00293D80(void)
{

loc_00293D80: ;
    eax = eax - ecx;
    PUSH32(esp, esi);
    eax = (uint32_t)((int32_t)eax >> 1);
    esi = eax + eax;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E670(); /* call 0x0046E670 */

loc_00293D94: ;
    esp = esp + 0xC;
    eax = eax + esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00293DA0
 * Original: 0x00293DA0 - 0x00293DD1 (49 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00293DA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00293DA0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    if (CMP_EQ(esi, ebx)) goto loc_00293DC9; /* je: equal / zero */

loc_00293DB3: ;
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ebp, _icall_esp); /* indirect call */
    }

loc_00293DBB: ;
    esp = esp + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00293DC9; /* jne: not equal / not zero */

loc_00293DC2: ;
    esi = esi + 2;
    if (CMP_NE(esi, ebx)) goto loc_00293DB3; /* jne: not equal / not zero */

loc_00293DC9: ;
    MEM32(edi) = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = edi;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00293DE0
 * Original: 0x00293DE0 - 0x00293E24 (68 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00293DE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00293DE0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    if (CMP_EQ(esi, ebx)) { sub_00293E24(); return; } /* je: equal / zero */

loc_00293DF3: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);

loc_00293DF8: ;
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ebp, _icall_esp); /* indirect call */
    }

loc_00293E00: ;
    esp = esp + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00293E12; /* jne: not equal / not zero */

loc_00293E07: ;
    SET_LO16(ecx, MEM16(esi));
    eax = edi;
    edi = edi + 2;
    MEM16(eax) = LO16(ecx);

loc_00293E12: ;
    esi = esi + 2;
    if (CMP_NE(esi, ebx)) goto loc_00293DF8; /* jne: not equal / not zero */

loc_00293E19: ;
    eax = MEM32(esp + 0x14);
    MEM32(eax) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00293E40
 * Original: 0x00293E40 - 0x00293E72 (50 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00293E40(void)
{

loc_00293E40: ;
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
    MEM32(eax) = 0x605310;
    esp += 4; return; /* ret */

}

/**
 * sub_00293E80
 * Original: 0x00293E80 - 0x00293E86 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00293E80(void)
{

loc_00293E80: ;
    eax = 0x31;
    esp += 4; return; /* ret */

}

/**
 * sub_00293E90
 * Original: 0x00293E90 - 0x00293EE4 (84 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00293E90(void)
{
    int _flags = 0; /* fallback flag var */

loc_00293E90: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_00293E98: ;
    edx = 0; /* xor self */
    ecx = 0x6BE940;
    /* nop */

loc_00293EA0: ;
    if (CMP_EQ(MEM32(ecx), eax)) { sub_00293EE4(); return; } /* je: equal / zero */

loc_00293EA4: ;
    ecx = ecx + 0x10;
    edx++;
    if (CMP_L(ecx, 0x6BED90)) goto loc_00293EA0; /* jl: less (signed <) */

loc_00293EB0: ;
    edx = 0x600E6C;
    ecx = MEM32(esi + 0x3C);
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x38);
    PUSH32(esp, ecx);
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x36);
    PUSH32(esp, eax);
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x34);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, 0x605438);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_00293EDD: ;
    esp = esp + 0x20;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00293EF0
 * Original: 0x00293EF0 - 0x00293F09 (25 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00293EF0(void)
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

loc_00293EF0: ;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00293EF5: ;
    eax = MEM32(esp + 4);
    fp_push(MEMF(eax + 0x70)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) { sub_00293F09(); return; } /* jbe: below or equal (unsigned <=) */

loc_00293F04: ;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00293F10
 * Original: 0x00293F10 - 0x00293F28 (24 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00293F10(void)
{
    int _flags = 0; /* fallback flag var */

loc_00293F10: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = eax;
    SET_LO8(eax, MEM8(0x862C5C));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_00293F28(); return; } /* jne: not equal / not zero */

loc_00293F20: ;
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00294120
 * Original: 0x00294120 - 0x002941B2 (146 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00294120(void)
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

loc_00294120: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = eax;
    eax = eax | 0xFFFFFFFFu;
    ebp = esi + 0x28;
    ecx = 0x862C40;
    MEM8(esi + 0x1C) = 0;
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x24) = eax;
    MEM16(ebp) = 0;
    MEM32(esi + 0x6C) = 3;
    PUSH32(esp, 0); sub_00296370(); /* call 0x00296370 */

loc_0029414B: ;
    edx = eax;
    if (TEST_Z(edx, edx)) goto loc_002941AD; /* je: equal / zero */

loc_00294151: ;
    ecx = ebx;
    eax = 1;
    eax = eax << LO8(ecx);
    if (TEST_Z(MEM8(edx + 0x758), LO8(eax))) goto loc_002941AD; /* je: equal / zero */

loc_00294162: ;
    ecx = MEM32(esp + 0xC);
    if (CMP_NE(ecx, MEM32(0x862CC0))) goto loc_002941AD; /* jne: not equal / not zero */

loc_0029416E: ;
    eax = ebx;
    ecx = edx;
    MEM32(esi + 0x20) = edi;
    MEM8(esi + 0x1C) = 1;
    MEM32(esi + 0x24) = ebx;
    PUSH32(esp, 0); sub_00299D60(); /* call 0x00299D60 */

loc_00294181: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x5F9B74);
    PUSH32(esp, 0x20);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0046EE4A(); /* call 0x0046EE4A */

loc_0029418F: ;
    esp = esp + 0x10;
    MEM16(esi + 0x66) = 0;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0029419D: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    edx = MEM32(esp + 0xC);
    MEM32(esi + 0x6C) = edx;
    MEMF(esi + 0x68) = (float)fp_top(); fp_popp(); /* fstp */

loc_002941AD: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_002941C0
 * Original: 0x002941C0 - 0x002941EE (46 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002941C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002941C0: ;
    SET_LO8(ecx, MEM8(0x862C5C));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_002941EB; /* je: equal / zero */

loc_002941CA: ;
    if (CMP_EQ(MEM8(eax), 0)) goto loc_002941EB; /* je: equal / zero */

loc_002941CF: ;
    ecx = MEM32(eax + 4);
    if (CMP_NE(ecx, edx)) goto loc_002941EB; /* jne: not equal / not zero */

loc_002941D6: ;
    edx = MEM32(eax + 8);
    if (CMP_NE(edx, MEM32(esp + 4))) goto loc_002941EB; /* jne: not equal / not zero */

loc_002941DF: ;
    ecx = MEM32(eax + 0x18);
    if (CMP_NE(ecx, MEM32(esp + 8))) goto loc_002941EB; /* jne: not equal / not zero */

loc_002941E8: ;
    MEM32(eax + 0xC) = MEM32(eax + 0xC) + 1;

loc_002941EB: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002941F0
 * Original: 0x002941F0 - 0x002945D8 (1000 bytes, 291 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002941F0(void)
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

loc_002941F0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    SET_LO8(eax, MEM8(ebp + 0x1C));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002942D1; /* je: equal / zero */

loc_00294204: ;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00294209: ;
    fp_push(MEMF(ebp + 0x68)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp < 0) /* fcompi */) goto loc_0029421F; /* jb: below (unsigned <) */

loc_00294214: ;
    MEM16(ebp + 0x28) = 0;
    goto loc_002942BD;

loc_0029421F: ;
    ebx = ebp + 0x28;
    eax = ebx;
    PUSH32(esp, 0); sub_001CCD90(); /* call 0x001CCD90 */

loc_00294229: ;
    eax = MEM32(0x8470FC);
    ecx = MEM32(eax + 8);
    eax = MEM32(ecx + 4);
    if (TEST_Z(HI8(eax), 0x10)) goto loc_002942D1; /* je: equal / zero */

loc_0029423D: ;
    SET_LO8(eax, MEM8(0x862C5C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0029425D; /* je: equal / zero */

loc_00294246: ;
    edx = MEM32(ebp + 0x6C);
    eax = MEM32(ebp + 0x24);
    PUSH32(esp, edx);
    edx = MEM32(ebp + 0x20);
    PUSH32(esp, eax);
    eax = 0x86E9A4;
    PUSH32(esp, 0); sub_002941C0(); /* call 0x002941C0 */

loc_0029425B: ;
    goto loc_002942B8;

loc_0029425D: ;
    eax = 0x862C40;
    PUSH32(esp, 0); sub_00296340(); /* call 0x00296340 */

loc_00294267: ;
    edi = eax;
    if (TEST_Z(edi, edi)) goto loc_002942B8; /* je: equal / zero */

loc_0029426D: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, 0); sub_002AF3F0(); /* call 0x002AF3F0 */

loc_00294274: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_002942B8; /* je: equal / zero */

loc_0029427B: ;
    PUSH32(esp, 0); sub_00293E40(); /* call 0x00293E40 */

loc_00294280: ;
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_002942B8; /* je: equal / zero */

loc_00294286: ;
    MEM8(esi + 0x34) = 2;
    SET_LO16(ecx, MEM16(ebp + 0x20));
    MEM16(esi + 0x36) = LO16(ecx);
    SET_LO8(edx, MEM8(ebp + 0x24));
    MEM8(esi + 0x38) = LO8(edx);
    eax = MEM32(ebp + 0x6C);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3E8);
    MEM32(esi + 0x3C) = eax;
    PUSH32(esp, 0); sub_004168D0(); /* call 0x004168D0 */

loc_002942AA: ;
    eax = MEM32(edi + 0x9DC);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_002942B8: ;
    MEM16(ebx) = 0;

loc_002942BD: ;
    eax = eax | 0xFFFFFFFFu;
    MEM8(ebp + 0x1C) = 0;
    MEM32(ebp + 0x20) = eax;
    MEM32(ebp + 0x24) = eax;
    MEM32(ebp + 0x6C) = 3;

loc_002942D1: ;
    if (CMP_EQ(MEM8(ebp), 0)) goto loc_0029454A; /* je: equal / zero */

loc_002942DB: ;
    SET_LO8(eax, MEM8(0x862C5C));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002942FC; /* jne: not equal / not zero */

loc_002942E4: ;
    eax = 0xFFFFFFFFu;
    ecx = 0; /* xor self */
    MEM32(ebp + 4) = eax;
    MEM32(ebp + 0xC) = ecx;
    MEM32(ebp + 8) = eax;
    MEM32(ebp + 0x14) = ecx;
    goto loc_00294537;

loc_002942FC: ;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00294301: ;
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp < 0) /* fcompi */) goto loc_0029454A; /* jb: below (unsigned <) */

loc_00294310: ;
    ecx = MEM32(ebp + 0xC);
    (void)0; /* cmp ecx, MEM32(ebp + 0x14) - flags set for next jcc */
    MEM8(esp + 0x18) = 0;
    if (CMP_L(ecx, MEM32(ebp + 0x14))) goto loc_002943DA; /* jl: less (signed <) */

loc_00294321: ;
    PUSH32(esp, 0x862C40);
    PUSH32(esp, 0); sub_00296E60(); /* call 0x00296E60 */

loc_0029432B: ;
    edx = SX16(LO16(eax));
    if (CMP_NE(edx, MEM32(ebp + 4))) goto loc_00294362; /* jne: not equal / not zero */

loc_00294333: ;
    ecx = MEM32(ebp + 8);
    eax = 1;
    eax = eax << LO8(ecx);
    if (TEST_Z(MEM8(0x86E980), LO8(eax))) goto loc_002943DA; /* je: equal / zero */

loc_00294349: ;
    xmm0 = MEMF(0x648D20); /* movss */
    MEM8(0x86EA18) = 1;
    MEMF(0x86EA1C) = xmm0; /* movss */
    goto loc_002943D5;

loc_00294362: ;
    SET_LO16(edi, MEM16(ebp + 4));
    ecx = 0x862C40;
    PUSH32(esp, 0); sub_00296370(); /* call 0x00296370 */

loc_00294370: ;
    edi = eax;
    if (TEST_Z(edi, edi)) goto loc_002943DA; /* je: equal / zero */

loc_00294376: ;
    ecx = MEM32(ebp + 8);
    SET_LO8(eax, MEM8(edi + 0x758));
    edx = 1;
    edx = edx << LO8(ecx);
    if (TEST_Z(LO8(edx), LO8(eax))) goto loc_002943DA; /* je: equal / zero */

loc_0029438A: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, 0); sub_002AF3F0(); /* call 0x002AF3F0 */

loc_00294391: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_002943A1; /* je: equal / zero */

loc_00294398: ;
    PUSH32(esp, 0); sub_00293E40(); /* call 0x00293E40 */

loc_0029439D: ;
    esi = eax;
    goto loc_002943A3;

loc_002943A1: ;
    esi = 0; /* xor self */

loc_002943A3: ;
    MEM8(esi + 0x34) = 3;
    SET_LO16(eax, MEM16(ebp + 4));
    MEM16(esi + 0x36) = LO16(eax);
    SET_LO8(ecx, MEM8(ebp + 8));
    MEM8(esi + 0x38) = LO8(ecx);
    edx = MEM32(ebp + 0x18);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3E8);
    MEM32(esi + 0x3C) = edx;
    PUSH32(esp, 0); sub_004168D0(); /* call 0x004168D0 */

loc_002943C7: ;
    ecx = MEM32(edi + 0x9DC);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_002943D5: ;
    MEM8(esp + 0x18) = 1;

loc_002943DA: ;
    SET_LO8(eax, MEM8(0x864EC1));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(esp + 0x10) = 0;
    if (CMP_LE(LO8(eax) & LO8(eax), 0)) goto loc_002944E5; /* jle: less or equal (signed <=) */

loc_002943EF: ;
    ebx = 0x8658A4;
    goto loc_00294400;

    /* nop */
    /* nop */

loc_00294400: ;
    edx = (uint32_t)(int32_t)SMEM16(ebx + -4);
    if (CMP_EQ(edx, MEM32(ebp + 4))) goto loc_002944C7; /* je: equal / zero */

loc_0029440D: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_0029441B; /* jne: not equal / not zero */

loc_00294416: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0029441B: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (TEST_Z(esi, esi)) goto loc_00294463; /* je: equal / zero */

loc_00294441: ;
    if (CMP_B(MEM32(esi + 0x80), 0x40)) goto loc_00294463; /* jb: below (unsigned <) */

loc_0029444A: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00294454: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0029445C: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_00294484; /* jne: not equal / not zero */

loc_00294463: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00294475: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0029447D: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0029448D; /* je: equal / zero */

loc_00294484: ;
    PUSH32(esp, 0); sub_00293E40(); /* call 0x00293E40 */

loc_00294489: ;
    esi = eax;
    goto loc_0029448F;

loc_0029448D: ;
    esi = 0; /* xor self */

loc_0029448F: ;
    SET_LO8(edx, MEM8(esp + 0x18));
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    SET_LO8(eax, (TEST_Z(LO8(edx), LO8(edx))) ? 1 : 0); /* sete */
    SET_LO8(eax, LO8(eax) + 5);
    MEM8(esi + 0x34) = LO8(eax);
    SET_LO16(ecx, MEM16(ebp + 4));
    MEM16(esi + 0x36) = LO16(ecx);
    SET_LO8(edx, MEM8(ebp + 8));
    MEM8(esi + 0x38) = LO8(edx);
    eax = MEM32(ebp + 0x18);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3E8);
    MEM32(esi + 0x3C) = eax;
    PUSH32(esp, 0); sub_004168D0(); /* call 0x004168D0 */

loc_002944BD: ;
    eax = MEM32(ebx);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_002944C7: ;
    eax = MEM32(esp + 0x10);
    ecx = (uint32_t)(int32_t)SMEM8(0x864EC1);
    eax++;
    ebx = ebx + 0xA50;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(eax, ecx)) goto loc_00294400; /* jl: less (signed <) */

loc_002944E5: ;
    if (CMP_NE(MEM32(0x863D04), 1)) goto loc_002944F3; /* jne: not equal / not zero */

loc_002944EE: ;
    ecx = ecx | 0xFFFFFFFFu;
    goto loc_00294508;

loc_002944F3: ;
    if (CMP_NE(MEM16(0x86E9A0), 0xFFFFFFFEu)) goto loc_00294502; /* jne: not equal / not zero */

loc_002944FD: ;
    ecx = ecx | 0xFFFFFFFFu;
    goto loc_00294508;

loc_00294502: ;
    ecx = MEM32(0x86E9A0);

loc_00294508: ;
    eax = MEM32(ebp + 4);
    edx = SX16(LO16(ecx));
    if (CMP_EQ(edx, eax)) goto loc_00294526; /* je: equal / zero */

loc_00294512: ;
    ecx = MEM32(ebp + 0x18);
    edx = MEM32(ebp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    SET_LO8(eax, MEM8(esp + 0x20));
    PUSH32(esp, 0); sub_002947C0(); /* call 0x002947C0 */

loc_00294523: ;
    esp = esp + 8;

loc_00294526: ;
    ecx = ecx | 0xFFFFFFFFu;
    eax = 0; /* xor self */
    MEM32(ebp + 4) = ecx;
    MEM32(ebp + 0xC) = eax;
    MEM32(ebp + 8) = ecx;
    MEM32(ebp + 0x14) = eax;

loc_00294537: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEM8(ebp) = 0;
    MEMF(ebp + 0x10) = xmm0; /* movss */
    MEM32(ebp + 0x18) = 3;

loc_0029454A: ;
    SET_LO8(eax, MEM8(ebp + 0x74));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002945D0; /* je: equal / zero */

loc_00294551: ;
    xmm0 = MEMF(ebp + 0x78); /* movss */
    xmm0 = xmm0 - MEMF(0x7FA21C); /* subss */
    xmm1 = 0.0f; /* xorps self = zero */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(ebp + 0x78) = xmm0; /* movss */
    if ((xmm1 < xmm0)) goto loc_00294586; /* jb: below (unsigned <) */

loc_0029456B: ;
    PUSH32(esp, 0);
    MEM8(ebp + 0x74) = 0;
    MEMF(ebp + 0x78) = xmm1; /* movss */
    PUSH32(esp, 0); sub_001F9B20(); /* call 0x001F9B20 */

loc_0029457B: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_00294586: ;
    SET_LO8(eax, MEM8(0x7819D5));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = MEMF(0x648E68); /* movss */
    MEMF(0x77615C) = xmm0; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002945AF; /* je: equal / zero */

loc_0029459F: ;
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(0x77615C) = xmm0; /* movss */

loc_002945AF: ;
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x605400;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_002945BB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x96);
    PUSH32(esp, 0x140);
    SET_LO8(ecx, 0x81);
    PUSH32(esp, 0); sub_001F25F0(); /* call 0x001F25F0 */

loc_002945CD: ;
    esp = esp + 0xC;

loc_002945D0: ;
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
 * sub_002945E0
 * Original: 0x002945E0 - 0x002947B6 (470 bytes, 135 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002945E0(void)
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

loc_002945E0: ;
    esp = esp - 0x200;
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_002945EE: ;
    fp_push(MEMF(esi + 0x70)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_002947AC; /* jbe: below or equal (unsigned <=) */

loc_002945FD: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00294603: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    ebx = 0; /* xor self */
    MEMF(esi + 0x70) = (float)fp_top(); fp_popp(); /* fstp */
    SET_LO8(eax, MEM8(0x862C5C));
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_002946A1; /* je: equal / zero */

loc_0029461B: ;
    if (CMP_EQ(MEM32(0x863D04), 1)) goto loc_0029462F; /* je: equal / zero */

loc_00294624: ;
    eax = MEM32(0x86E9A0);
    if (CMP_NE(LO16(eax), 0xFFFE)) goto loc_00294632; /* jne: not equal / not zero */

loc_0029462F: ;
    eax = eax | 0xFFFFFFFFu;

loc_00294632: ;
    ecx = MEM32(esp + 0x210);
    edx = MEM32(esp + 0x20C);
    eax = SX16(LO16(eax));
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x218);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0); sub_00293F10(); /* call 0x00293F10 */

loc_00294654: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002947AB; /* jne: not equal / not zero */

loc_0029465C: ;
    xmm0 = 0.0f; /* xorps self = zero */
    ecx = 0x6053CC;
    MEMF(esi + 0x70) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_0029466E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x5D4C70);
    PUSH32(esp, 0); sub_0046EE4A(); /* call 0x0046EE4A */

loc_0029467E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    MEM16(esp + 0x21A) = LO16(ebx);
    PUSH32(esp, 6);
    ebx = esp + 0x20;
    PUSH32(esp, 0); sub_0027A1F0(); /* call 0x0027A1F0 */

loc_00294693: ;
    esp = esp + 0x18;
    POP32(esp, ebx);
    POP32(esp, esi);
    esp = esp + 0x200;
    esp += 16; return; /* ret 12 */

loc_002946A1: ;
    edx = (uint32_t)(int32_t)SMEM8(0x864EC1);
    eax = 0; /* xor self */
    if (CMP_LE(edx, ebx)) goto loc_002946C2; /* jle: less or equal (signed <=) */

loc_002946AE: ;
    ecx = 0x864EC8;

loc_002946B3: ;
    if (CMP_NE(MEM8(ecx), LO8(ebx))) goto loc_002946D5; /* jne: not equal / not zero */

loc_002946B7: ;
    eax++;
    ecx = ecx + 0xA50;
    if (CMP_L(eax, edx)) goto loc_002946B3; /* jl: less (signed <) */

loc_002946C2: ;
    xmm0 = 0.0f; /* xorps self = zero */
    POP32(esp, ebx);
    MEMF(esi + 0x70) = xmm0; /* movss */
    POP32(esp, esi);
    esp = esp + 0x200;
    esp += 16; return; /* ret 12 */

loc_002946D5: ;
    PUSH32(esp, ebp);
    eax = 0x862C40;
    PUSH32(esp, 0); sub_00296340(); /* call 0x00296340 */

loc_002946E0: ;
    ebp = eax;
    if (CMP_EQ(ebp, ebx)) goto loc_002947AA; /* je: equal / zero */

loc_002946EA: ;
    if (CMP_NE(MEM32(0x84A19C), ebx)) goto loc_002946F7; /* jne: not equal / not zero */

loc_002946F2: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_002946F7: ;
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
    if (CMP_EQ(esi, ebx)) goto loc_00294740; /* je: equal / zero */

loc_0029471E: ;
    if (CMP_B(MEM32(esi + 0x80), 0x40)) goto loc_00294740; /* jb: below (unsigned <) */

loc_00294727: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00294731: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00294739: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_00294761; /* jne: not equal / not zero */

loc_00294740: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00294752: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0029475A: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) goto loc_002947A9; /* je: equal / zero */

loc_00294761: ;
    PUSH32(esp, 0); sub_00293E40(); /* call 0x00293E40 */

loc_00294766: ;
    esi = eax;
    if (CMP_EQ(esi, ebx)) goto loc_002947A9; /* je: equal / zero */

loc_0029476C: ;
    SET_LO16(eax, MEM16(esp + 0x214));
    SET_LO8(ecx, MEM8(esp + 0x218));
    edx = MEM32(esp + 0x21C);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3E8);
    MEM8(esi + 0x34) = LO8(ebx);
    MEM16(esi + 0x36) = LO16(eax);
    MEM8(esi + 0x38) = LO8(ecx);
    MEM32(esi + 0x3C) = edx;
    PUSH32(esp, 0); sub_004168D0(); /* call 0x004168D0 */

loc_0029479B: ;
    ecx = MEM32(ebp + 0x9DC);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_002947A9: ;
    POP32(esp, edi);

loc_002947AA: ;
    POP32(esp, ebp);

loc_002947AB: ;
    POP32(esp, ebx);

loc_002947AC: ;
    POP32(esp, esi);
    esp = esp + 0x200;
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_002947C0
 * Original: 0x002947C0 - 0x00294882 (194 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002947C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002947C0: ;
    esp = esp - 0x340;
    PUSH32(esp, ebx);
    SET_LO8(ebx, LO8(eax));
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_002947ED; /* jne: not equal / not zero */

loc_002947CD: ;
    if (TEST_Z(MEM8(0x86E980), 1)) goto loc_0029487A; /* je: equal / zero */

loc_002947DA: ;
    eax = MEM32(esp + 0x34C);
    if (CMP_NE(eax, MEM32(0x862CC0))) goto loc_0029487A; /* jne: not equal / not zero */

loc_002947ED: ;
    eax = MEM32(esp + 0x348);
    PUSH32(esp, esi);
    esi = edx;
    PUSH32(esp, 0); sub_00289500(); /* call 0x00289500 */

loc_002947FC: ;
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_00294879; /* je: equal / zero */

loc_00294802: ;
    if (CMP_AE(MEM16(esi + 0x60), 0x10)) goto loc_00294879; /* jae: above or equal (unsigned >=) */

loc_00294809: ;
    PUSH32(esp, edi);
    edx = 0; /* xor self */
    eax = esp + 0x20C;
    PUSH32(esp, 0); sub_00022100(); /* call 0x00022100 */

loc_00294818: ;
    edi = ZX16(MEM16(esi + 0x60));
    esi = esp + 0x20C;
    PUSH32(esp, 0); sub_00257E40(); /* call 0x00257E40 */

loc_00294828: ;
    ecx = eax;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    POP32(esp, edi);
    if (TEST_Z(ecx, ecx)) goto loc_00294879; /* je: equal / zero */

loc_0029482F: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x18), _icall_esp); /* indirect call */
    }

loc_00294834: ;
    PUSH32(esp, eax);
    SET_LO8(eax, 0); /* xor self */
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    ecx = 0x6053A0;
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_00294845; /* jne: not equal / not zero */

loc_00294840: ;
    ecx = 0x605378;

loc_00294845: ;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_0029484A: ;
    PUSH32(esp, eax);
    eax = esp + 0x10;
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046EE4A(); /* call 0x0046EE4A */

loc_0029485A: ;
    esp = esp + 0x10;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 6);
    ebx = esp + 0x14;
    MEM16(esp + 0x212) = 0;
    PUSH32(esp, 0); sub_0027A1F0(); /* call 0x0027A1F0 */

loc_00294876: ;
    esp = esp + 0xC;

loc_00294879: ;
    POP32(esp, esi);

loc_0029487A: ;
    POP32(esp, ebx);
    esp = esp + 0x340;
    esp += 4; return; /* ret */

}

/**
 * sub_00294890
 * Original: 0x00294890 - 0x0029493F (175 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00294890(void)
{
    int _flags = 0; /* fallback flag var */

loc_00294890: ;
    eax = MEM32(0x84A19C);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(eax, ebx)) goto loc_002948A3; /* jne: not equal / not zero */

loc_0029489E: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_002948A3: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (CMP_EQ(esi, ebx)) goto loc_002948EB; /* je: equal / zero */

loc_002948C9: ;
    if (CMP_B(MEM32(esi + 0x80), 0x40)) goto loc_002948EB; /* jb: below (unsigned <) */

loc_002948D2: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002948DC: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002948E4: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_0029490C; /* jne: not equal / not zero */

loc_002948EB: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002948FD: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00294905: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) { sub_0029493F(); return; } /* je: equal / zero */

loc_0029490C: ;
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
    MEM32(eax) = 0x605310;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00294950
 * Original: 0x00294950 - 0x0029498B (59 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00294950(void)
{

loc_00294950: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    eax = (uint32_t)(int32_t)SMEM8(edi + 0x34);
    PUSH32(esp, 3);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_00294963: ;
    eax = (uint32_t)(int32_t)SMEM8(edi + 0x38);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0029496E: ;
    eax = (uint32_t)(int32_t)SMEM16(edi + 0x36);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_00294979: ;
    eax = MEM32(edi + 0x3C);
    PUSH32(esp, 2);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_00294983: ;
    esp = esp + 0x10;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00294990
 * Original: 0x00294990 - 0x002949DF (79 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00294990(void)
{
    int _flags = 0; /* fallback flag var */

loc_00294990: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 3);
    edi = ecx;
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0029499F: ;
    PUSH32(esp, 1);
    MEM8(edi + 0x34) = LO8(eax);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_002949A9: ;
    esp = esp + 8;
    if (TEST_Z(LO8(eax), 1)) goto loc_002949B3; /* je: equal / zero */

loc_002949B0: ;
    eax = eax | 0xFFFFFFFEu;

loc_002949B3: ;
    PUSH32(esp, 0x10);
    MEM8(edi + 0x38) = LO8(eax);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_002949BD: ;
    esp = esp + 4;
    if (((int32_t)(HI8(eax) & HI8(eax)) >= 0)) goto loc_002949C9; /* jns: not sign (positive) */

loc_002949C4: ;
    eax = eax | 0xFFFF0000u;

loc_002949C9: ;
    PUSH32(esp, 2);
    MEM16(edi + 0x36) = LO16(eax);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_002949D4: ;
    esp = esp + 4;
    MEM32(edi + 0x3C) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002949E0
 * Original: 0x002949E0 - 0x00294BAC (460 bytes, 140 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002949E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002949E0: ;
    esp = esp - 0x200;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = (uint32_t)(int32_t)SMEM8(edi + 0x34);
    if (CMP_A(eax, 6)) goto loc_00294B9D; /* ja: above (unsigned >) */

loc_002949F8: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x294BAC); /* switch: 7 entries, 7 targets */
    if (_jt == 0x002949FFu) goto loc_002949FF;
    if (_jt == 0x00294AA8u) goto loc_00294AA8;
    if (_jt == 0x00294AFFu) goto loc_00294AFF;
    if (_jt == 0x00294B24u) goto loc_00294B24;
    if (_jt == 0x00294B53u) goto loc_00294B53;
    if (_jt == 0x00294B79u) goto loc_00294B79;
    if (_jt == 0x00294B86u) goto loc_00294B86;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_002949FF: ;
    SET_LO8(eax, MEM8(0x862C5C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00294B9D; /* je: equal / zero */

loc_00294A0C: ;
    eax = MEM32(edi + 8);
    PUSH32(esp, eax);
    eax = 0x862C40;
    PUSH32(esp, 0); sub_00296250(); /* call 0x00296250 */

loc_00294A1A: ;
    if (TEST_Z(eax, eax)) goto loc_00294B9D; /* je: equal / zero */

loc_00294A22: ;
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x9D8);
    edx = (uint32_t)(int32_t)SMEM8(edi + 0x38);
    eax = (uint32_t)(int32_t)SMEM16(edi + 0x36);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(edi + 0x3C);
    ecx = 0x86E9A4;
    PUSH32(esp, 0); sub_00293F10(); /* call 0x00293F10 */

loc_00294A41: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00294B9D; /* jne: not equal / not zero */

loc_00294A49: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, 0); sub_002AF3F0(); /* call 0x002AF3F0 */

loc_00294A50: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_00294B9D; /* je: equal / zero */

loc_00294A5B: ;
    PUSH32(esp, 0); sub_00293E40(); /* call 0x00293E40 */

loc_00294A60: ;
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_00294B9D; /* je: equal / zero */

loc_00294A6A: ;
    MEM8(esi + 0x34) = 4;
    SET_LO16(ecx, MEM16(edi + 0x36));
    MEM16(esi + 0x36) = LO16(ecx);
    SET_LO8(edx, MEM8(edi + 0x38));
    MEM8(esi + 0x38) = LO8(edx);
    eax = MEM32(edi + 0x3C);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3E8);
    MEM32(esi + 0x3C) = eax;
    PUSH32(esp, 0); sub_004168D0(); /* call 0x004168D0 */

loc_00294A8E: ;
    eax = MEM32(edi + 8);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_00294A99: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0x200;
    esp += 4; return; /* ret */

loc_00294AA8: ;
    xmm0 = 0.0f; /* xorps self = zero */
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x6053CC;
    MEMF(0x86EA14) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_00294ABF: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x5D4C70);
    ecx = esp + 0x14;
    PUSH32(esp, 0x100);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046EE4A(); /* call 0x0046EE4A */

loc_00294AD4: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 6);
    ebx = esp + 0x28;
    MEM16(esp + 0x226) = 0;
    PUSH32(esp, 0); sub_0027A1F0(); /* call 0x0027A1F0 */

loc_00294AED: ;
    esp = esp + 0x1C;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0x200;
    esp += 4; return; /* ret */

loc_00294AFF: ;
    edx = MEM32(edi + 0x3C);
    ebx = (uint32_t)(int32_t)SMEM8(edi + 0x38);
    eax = (uint32_t)(int32_t)SMEM16(edi + 0x36);
    PUSH32(esp, edx);
    esi = 0x86E9A4;
    PUSH32(esp, 0); sub_00294120(); /* call 0x00294120 */

loc_00294B15: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0x200;
    esp += 4; return; /* ret */

loc_00294B24: ;
    SET_LO8(eax, MEM8(0x862C5C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00294B9D; /* je: equal / zero */

loc_00294B2D: ;
    eax = MEM32(edi + 0x3C);
    ecx = (uint32_t)(int32_t)SMEM8(edi + 0x38);
    edx = (uint32_t)(int32_t)SMEM16(edi + 0x36);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = 0x86E9A4;
    PUSH32(esp, 0); sub_002941C0(); /* call 0x002941C0 */

loc_00294B44: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0x200;
    esp += 4; return; /* ret */

loc_00294B53: ;
    xmm0 = MEMF(0x648D20); /* movss */
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(0x86EA18) = 1;
    MEMF(0x86EA1C) = xmm0; /* movss */
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0x200;
    esp += 4; return; /* ret */

loc_00294B79: ;
    eax = (uint32_t)(int32_t)SMEM16(edi + 0x36);
    edx = MEM32(edi + 0x3C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    SET_LO8(eax, 0); /* xor self */
    goto loc_00294B91;

loc_00294B86: ;
    eax = (uint32_t)(int32_t)SMEM16(edi + 0x36);
    ecx = MEM32(edi + 0x3C);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    SET_LO8(eax, 1);

loc_00294B91: ;
    edx = (uint32_t)(int32_t)SMEM8(edi + 0x38);
    PUSH32(esp, 0); sub_002947C0(); /* call 0x002947C0 */

loc_00294B9A: ;
    esp = esp + 8;

loc_00294B9D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0x200;
    esp += 4; return; /* ret */

}

/**
 * sub_00294BD0
 * Original: 0x00294BD0 - 0x00294BE8 (24 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00294BD0(void)
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

loc_00294BD0: ;
    SET_LO8(eax, MEM8(esi + 0x1C));
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00294BE8(); return; } /* je: equal / zero */

loc_00294BD7: ;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00294BDC: ;
    fp_push(MEMF(esi + 0x68)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) { sub_00294BE8(); return; } /* jbe: below or equal (unsigned <=) */

loc_00294BE5: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00294BF0
 * Original: 0x00294BF0 - 0x00294BF6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00294BF0(void)
{

loc_00294BF0: ;
    eax = 0x45;
    esp += 4; return; /* ret */

}

/**
 * sub_00294C00
 * Original: 0x00294C00 - 0x00294C1A (26 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00294C00(void)
{

loc_00294C00: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0x60563C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_00294C14: ;
    esp = esp + 0xC;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00294C20
 * Original: 0x00294C20 - 0x00294C26 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00294C20(void)
{

loc_00294C20: ;
    eax = 0x46;
    esp += 4; return; /* ret */

}

/**
 * sub_00294C30
 * Original: 0x00294C30 - 0x00294C4A (26 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00294C30(void)
{

loc_00294C30: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0x605618);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_00294C44: ;
    esp = esp + 0xC;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00294C50
 * Original: 0x00294C50 - 0x00294CE5 (149 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00294C50(void)
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

loc_00294C50: ;
    esp = esp - 8;
    PUSH32(esp, ebp);
    SET_LO16(ebp, MEM16(esp + 0x10));
    PUSH32(esp, esi);
    esi = ebx + 0xC;
    PUSH32(esp, edi);
    SET_LO16(edi, MEM16(esp + 0x1C));
    eax = esp + 0x18;
    ecx = esi;
    PUSH32(esp, 0); sub_00297BC0(); /* call 0x00297BC0 */

loc_00294C6E: ;
    if (CMP_A(eax & eax, 0)) goto loc_00294CDC; /* ja: above (unsigned >) */

loc_00294C72: ;
    eax = esp + 0x1C;
    ecx = esi;
    PUSH32(esp, 0); sub_00297BC0(); /* call 0x00297BC0 */

loc_00294C7D: ;
    if (CMP_A(eax & eax, 0)) goto loc_00294CDC; /* ja: above (unsigned >) */

loc_00294C81: ;
    ecx = MEM32(ebx + 4);
    eax = MEM32(ecx);
    if (CMP_EQ(eax, ecx)) goto loc_00294CA2; /* je: equal / zero */

loc_00294C8A: ;
    /* nop */

loc_00294C90: ;
    if (CMP_NE(MEM16(eax + 0xC), LO16(ebp))) goto loc_00294C9C; /* jne: not equal / not zero */

loc_00294C96: ;
    if (CMP_EQ(MEM16(eax + 0xE), LO16(edi))) goto loc_00294CDC; /* je: equal / zero */

loc_00294C9C: ;
    eax = MEM32(eax);
    if (CMP_NE(eax, ecx)) goto loc_00294C90; /* jne: not equal / not zero */

loc_00294CA2: ;
    MEM16(esp + 0x10) = LO16(ebp);
    MEM16(esp + 0x12) = LO16(edi);
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00294CB1: ;
    MEMF(esp + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    esi = MEM32(ebx + 4);
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = esp + 0x14;
    PUSH32(esp, 0); sub_00298240(); /* call 0x00298240 */

loc_00294CC6: ;
    ecx = 1;
    edx = ebx;
    edi = eax;
    PUSH32(esp, 0); sub_0034F5C0(); /* call 0x0034F5C0 */

loc_00294CD4: ;
    MEM32(esi + 4) = edi;
    ecx = MEM32(edi + 4);
    MEM32(ecx) = edi;

loc_00294CDC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 8;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00294CF0
 * Original: 0x00294CF0 - 0x00294D95 (165 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00294CF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00294CF0: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    SET_LO16(ebp, MEM16(esp + 0x14));
    ebx = eax;
    eax = MEM32(ebx + 4);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    (void)0; /* cmp esi, eax - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(esi);
    if (CMP_EQ(esi, eax)) goto loc_00294D6B; /* je: equal / zero */

loc_00294D09: ;
    /* nop */

loc_00294D10: ;
    if (CMP_EQ(MEM16(esi + 0xC), LO16(ebp))) goto loc_00294D20; /* je: equal / zero */

loc_00294D16: ;
    if (CMP_EQ(MEM16(esi + 0xE), LO16(ebp))) goto loc_00294D20; /* je: equal / zero */

loc_00294D1C: ;
    esi = MEM32(esi);
    goto loc_00294D64;

loc_00294D20: ;
    if (CMP_EQ(esi, MEM32(ebx + 4))) goto loc_00294D62; /* je: equal / zero */

loc_00294D25: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(esi);
    MEM32(eax) = ecx;
    edx = MEM32(esi);
    eax = MEM32(esi + 4);
    PUSH32(esp, esi);
    MEM32(edx + 4) = eax;
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_00294D3A: ;
    if (TEST_NZ(eax, eax)) goto loc_00294D5F; /* jne: not equal / not zero */

loc_00294D3E: ;
    eax = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    eax++;
    edx--;
    PUSH32(esp, esi);
    MEM32(0x7FA490) = eax;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_00294D5C: ;
    esp = esp + 4;

loc_00294D5F: ;
    MEM32(ebx + 8) = MEM32(ebx + 8) - 1;

loc_00294D62: ;
    esi = edi;

loc_00294D64: ;
    (void)0; /* cmp esi, MEM32(ebx + 4) - flags set for next jcc */
    edi = MEM32(edi);
    if (CMP_NE(esi, MEM32(ebx + 4))) goto loc_00294D10; /* jne: not equal / not zero */

loc_00294D6B: ;
    ecx = MEM32(ebx + 4);
    eax = MEM32(ecx);
    if (CMP_EQ(eax, ecx)) goto loc_00294D7A; /* je: equal / zero */

loc_00294D74: ;
    eax = MEM32(eax);
    if (CMP_NE(eax, ecx)) goto loc_00294D74; /* jne: not equal / not zero */

loc_00294D7A: ;
    ebx = ebx + 0xC;
    PUSH32(esp, ebx);
    ebx = esp + 0x20;
    edi = esp + 0x14;
    PUSH32(esp, 0); sub_00297B00(); /* call 0x00297B00 */

loc_00294D8B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00294DA0
 * Original: 0x00294DA0 - 0x00294DFF (95 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00294DA0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00294DA0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(edi + 0x10);
    ecx = MEM32(eax);
    esi = edi + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002982E0(); /* call 0x002982E0 */

loc_00294DBA: ;
    eax = MEM32(esi + 4);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(esp + 0xC) = eax;
    if (CMP_EQ(eax, ebx)) goto loc_00294DD4; /* je: equal / zero */

loc_00294DC7: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00294DD1: ;
    esp = esp + 4;

loc_00294DD4: ;
    MEM32(esi + 4) = ebx;
    MEM32(esi + 8) = ebx;
    PUSH32(esp, 0); sub_00068410(); /* call 0x00068410 */

loc_00294DDF: ;
    eax = MEM32(edi + 4);
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(esp + 0xC) = eax;
    if (CMP_EQ(eax, ebx)) goto loc_00294DF7; /* je: equal / zero */

loc_00294DEA: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00294DF4: ;
    esp = esp + 4;

loc_00294DF7: ;
    MEM32(edi + 4) = ebx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00294E00
 * Original: 0x00294E00 - 0x00294F29 (297 bytes, 78 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00294E00(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00294E00: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xA50);
    esi = eax + ebp + 0x2288;
    SET_LO8(eax, MEM8(0x862C5C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00294E33; /* je: equal / zero */

loc_00294E1F: ;
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(esi + 0x9D8));
    eax = 0x86EEFC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00294CF0(); /* call 0x00294CF0 */

loc_00294E33: ;
    eax = esi;
    MEM32(esi + 0x9D4) = 0;
    PUSH32(esp, 0); sub_002994D0(); /* call 0x002994D0 */

loc_00294E44: ;
    ecx = MEM32(esi + 0x764);
    if (TEST_Z(ecx, ecx)) goto loc_00294E54; /* je: equal / zero */

loc_00294E4E: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00294E54: ;
    ecx = MEM32(esi + 0x768);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esi + 0x764) = 0;
    if (TEST_Z(ecx, ecx)) goto loc_00294E6E; /* je: equal / zero */

loc_00294E68: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_00294E6E: ;
    eax = MEM32(esi + 0x9E0);
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    MEM32(esi + 0x768) = 0;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_00294E96; /* je: equal / zero */

loc_00294E83: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00418A60(); /* call 0x00418A60 */

loc_00294E89: ;
    esp = esp + 4;
    MEM32(esi + 0x9E0) = 0xFFFFFFFFu;

loc_00294E96: ;
    eax = MEM32(esi + 0x9DC);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_00294EB4; /* je: equal / zero */

loc_00294EA1: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00418A60(); /* call 0x00418A60 */

loc_00294EA7: ;
    esp = esp + 4;
    MEM32(esi + 0x9DC) = 0xFFFFFFFFu;

loc_00294EB4: ;
    edx = MEM32(esi + 0xA38);
    ecx = esi + 0xA38;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00294EC4: ;
    eax = (uint32_t)(int32_t)SMEM8(ebp + 0x2281);
    eax--;
    if (CMP_GE(edi, eax)) goto loc_00294EF0; /* jge: greater or equal (signed >=) */

loc_00294ED0: ;
    edx = esi + 0xA50;
    eax = esi;
    PUSH32(esp, 0); sub_00294F30(); /* call 0x00294F30 */

loc_00294EDD: ;
    ecx = (uint32_t)(int32_t)SMEM8(ebp + 0x2281);
    edi++;
    esi = esi + 0xA50;
    ecx--;
    if (CMP_L(edi, ecx)) goto loc_00294ED0; /* jl: less (signed <) */

loc_00294EF0: ;
    SET_LO8(eax, MEM8(ebp + 0x2281));
    SET_LO8(eax, LO8(eax) - 1);
    SET_LO8(edx, LO8(eax));
    edx = SX8(LO8(edx));
    edx = (uint32_t)((int32_t)edx * (int32_t)0xA50);
    MEM8(ebp + 0x2281) = LO8(eax);
    edi = edx + ebp + 0x2288;
    ecx = 0x294;
    eax = 0xFFFFFFFFu;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(ebp + 0x218) = 1;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00294F30
 * Original: 0x00294F30 - 0x002953DF (1199 bytes, 269 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00294F30(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00294F30: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    SET_LO8(ecx, MEM8(edx));
    MEM8(eax) = LO8(ecx);
    ecx = MEM32(edx + 4);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(edx + 8);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(edx + 0xC);
    MEM32(eax + 0xC) = ecx;
    ecx = MEM32(edx + 0x10);
    MEM32(eax + 0x10) = ecx;
    SET_LO8(ecx, MEM8(edx + 0x14));
    MEM8(eax + 0x14) = LO8(ecx);
    SET_LO8(ecx, MEM8(edx + 0x15));
    MEM8(eax + 0x15) = LO8(ecx);
    SET_LO8(ecx, MEM8(edx + 0x16));
    MEM8(eax + 0x16) = LO8(ecx);
    SET_LO8(ecx, MEM8(edx + 0x17));
    MEM8(eax + 0x17) = LO8(ecx);
    SET_LO8(ecx, MEM8(edx + 0x18));
    MEM8(eax + 0x18) = LO8(ecx);
    SET_LO8(ecx, MEM8(edx + 0x19));
    MEM8(eax + 0x19) = LO8(ecx);
    SET_LO8(ecx, MEM8(edx + 0x1A));
    MEM8(eax + 0x1A) = LO8(ecx);
    SET_LO8(ecx, MEM8(edx + 0x1B));
    MEM8(eax + 0x1B) = LO8(ecx);
    ecx = MEM32(edx + 0x1C);
    MEM32(eax + 0x1C) = ecx;
    ecx = MEM32(edx + 0x20);
    MEM32(eax + 0x20) = ecx;
    ecx = MEM32(edx + 0x28);
    MEM32(eax + 0x28) = ecx;
    ecx = MEM32(edx + 0x2C);
    MEM32(eax + 0x2C) = ecx;
    ecx = MEM32(edx + 0x30);
    MEM32(eax + 0x30) = ecx;
    ecx = MEM32(edx + 0x34);
    MEM32(eax + 0x34) = ecx;
    ecx = MEM32(edx + 0x38);
    MEM32(eax + 0x38) = ecx;
    ecx = MEM32(edx + 0x3C);
    MEM32(eax + 0x3C) = ecx;
    SET_LO8(ecx, MEM8(edx + 0x40));
    MEM8(eax + 0x40) = LO8(ecx);
    esi = edx + 0x41;
    edi = eax + 0x41;
    ecx = 9;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    SET_LO8(ecx, MEM8(edx + 0x65));
    MEM8(eax + 0x65) = LO8(ecx);
    ecx = MEM32(edx + 0x66);
    MEM32(eax + 0x66) = ecx;
    ecx = MEM32(edx + 0x6A);
    MEM32(eax + 0x6A) = ecx;
    ecx = MEM32(edx + 0x6E);
    MEM32(eax + 0x6E) = ecx;
    ecx = MEM32(edx + 0x72);
    ebp = edx;
    MEM32(eax + 0x72) = ecx;
    esi = eax + 0x76;
    ebp = ebp - eax;
    edi = 0x80;
    /* nop */

loc_00294FF0: ;
    SET_LO8(ecx, MEM8(esi + ebp));
    MEM8(esi) = LO8(ecx);
    esi++;
    edi--;
    if ((edi != 0)) goto loc_00294FF0; /* jne: not equal / not zero */

loc_00294FF9: ;
    esi = eax + 0xF6;
    edi = 0x80;

loc_00295004: ;
    SET_LO8(ecx, MEM8(esi + ebp));
    MEM8(esi) = LO8(ecx);
    esi++;
    edi--;
    if ((edi != 0)) goto loc_00295004; /* jne: not equal / not zero */

loc_0029500D: ;
    esi = eax + 0x176;
    edi = 0x80;

loc_00295018: ;
    SET_LO8(ecx, MEM8(esi + ebp));
    MEM8(esi) = LO8(ecx);
    esi++;
    edi--;
    if ((edi != 0)) goto loc_00295018; /* jne: not equal / not zero */

loc_00295021: ;
    esi = eax + 0x1F6;
    edi = 0x80;
    /* nop */

loc_00295030: ;
    SET_LO8(ecx, MEM8(esi + ebp));
    MEM8(esi) = LO8(ecx);
    esi++;
    edi--;
    if ((edi != 0)) goto loc_00295030; /* jne: not equal / not zero */

loc_00295039: ;
    ecx = MEM32(edx + 0x278);
    MEM32(eax + 0x278) = ecx;
    ecx = MEM32(edx + 0x27C);
    MEM32(eax + 0x27C) = ecx;
    ecx = MEM32(edx + 0x280);
    MEM32(eax + 0x280) = ecx;
    ecx = MEM32(edx + 0x284);
    MEM32(eax + 0x284) = ecx;
    ecx = MEM32(edx + 0x288);
    MEM32(eax + 0x288) = ecx;
    ecx = MEM32(edx + 0x28C);
    MEM32(eax + 0x28C) = ecx;
    ecx = MEM32(edx + 0x290);
    MEM32(eax + 0x290) = ecx;
    ecx = MEM32(edx + 0x294);
    MEM32(eax + 0x294) = ecx;
    SET_LO8(ecx, MEM8(edx + 0x298));
    MEM8(eax + 0x298) = LO8(ecx);
    SET_LO8(ecx, MEM8(edx + 0x299));
    MEM8(eax + 0x299) = LO8(ecx);
    ecx = MEM32(edx + 0x29C);
    MEM32(eax + 0x29C) = ecx;
    esi = edx + 0x2A0;
    edi = eax + 0x2A0;
    ecx = 0x4B;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    esi = edx + 0x3CC;
    edi = eax + 0x3CC;
    ecx = 0x4B;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    esi = edx + 0x4F8;
    edi = eax + 0x4F8;
    ecx = 0x4B;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    esi = edx + 0x624;
    edi = eax + 0x624;
    ecx = 0x4B;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = MEM32(edx + 0x750);
    MEM32(eax + 0x750) = ecx;
    ecx = MEM32(edx + 0x754);
    MEM32(eax + 0x754) = ecx;
    ecx = MEM32(edx + 0x758);
    MEM32(eax + 0x758) = ecx;
    ecx = MEM32(edx + 0x75C);
    MEM32(eax + 0x75C) = ecx;
    ecx = MEM32(edx + 0x760);
    MEM32(eax + 0x760) = ecx;
    ecx = MEM32(edx + 0x764);
    MEM32(eax + 0x764) = ecx;
    ecx = MEM32(edx + 0x768);
    MEM32(eax + 0x768) = ecx;
    SET_LO8(ecx, MEM8(edx + 0x76C));
    MEM8(eax + 0x76C) = LO8(ecx);
    SET_LO8(ecx, MEM8(edx + 0x76D));
    MEM8(eax + 0x76D) = LO8(ecx);
    SET_LO8(ecx, MEM8(edx + 0x76E));
    MEM8(eax + 0x76E) = LO8(ecx);
    ecx = MEM32(edx + 0x770);
    MEM32(eax + 0x770) = ecx;
    SET_LO8(ecx, MEM8(edx + 0x774));
    MEM8(eax + 0x774) = LO8(ecx);
    ecx = MEM32(edx + 0x778);
    MEM32(eax + 0x778) = ecx;
    ecx = MEM32(edx + 0x77C);
    MEM32(eax + 0x77C) = ecx;
    SET_LO8(ecx, MEM8(edx + 0x780));
    MEM8(eax + 0x780) = LO8(ecx);
    ecx = MEM32(edx + 0x784);
    MEM32(eax + 0x784) = ecx;
    ecx = MEM32(edx + 0x788);
    MEM32(eax + 0x788) = ecx;
    ecx = MEM32(edx + 0x78C);
    MEM32(eax + 0x78C) = ecx;
    ecx = MEM32(edx + 0x790);
    MEM32(eax + 0x790) = ecx;
    esi = eax + 0x794;
    edi = 0x22;

loc_002951F8: ;
    SET_LO8(ecx, MEM8(esi + ebp));
    MEM8(esi) = LO8(ecx);
    esi++;
    edi--;
    if ((edi != 0)) goto loc_002951F8; /* jne: not equal / not zero */

loc_00295201: ;
    SET_LO8(ecx, MEM8(edx + 0x7B6));
    MEM8(eax + 0x7B6) = LO8(ecx);
    SET_LO8(ecx, MEM8(edx + 0x7B7));
    MEM8(eax + 0x7B7) = LO8(ecx);
    SET_LO8(ecx, MEM8(edx + 0x7B8));
    MEM8(eax + 0x7B8) = LO8(ecx);
    SET_LO8(ecx, MEM8(edx + 0x7B9));
    MEM8(eax + 0x7B9) = LO8(ecx);
    SET_LO8(ecx, MEM8(edx + 0x7BA));
    MEM8(eax + 0x7BA) = LO8(ecx);
    SET_LO8(ecx, MEM8(edx + 0x7BB));
    MEM8(eax + 0x7BB) = LO8(ecx);
    SET_LO8(ecx, MEM8(edx + 0x7BC));
    MEM8(eax + 0x7BC) = LO8(ecx);
    SET_LO8(ecx, MEM8(edx + 0x7BD));
    MEM8(eax + 0x7BD) = LO8(ecx);
    ecx = MEM32(edx + 0x7C0);
    MEM32(eax + 0x7C0) = ecx;
    ecx = MEM32(edx + 0x7C4);
    MEM32(eax + 0x7C4) = ecx;
    ecx = MEM32(edx + 0x7C8);
    MEM32(eax + 0x7C8) = ecx;
    ecx = MEM32(edx + 0x7CC);
    MEM32(eax + 0x7CC) = ecx;
    ecx = eax + 0x7D0;
    esi = 0x81;
    /* nop */

loc_002952A0: ;
    edi = MEM32(ecx + ebp);
    MEM32(ecx) = edi;
    ecx = ecx + 4;
    esi--;
    if ((esi != 0)) goto loc_002952A0; /* jne: not equal / not zero */

loc_002952AB: ;
    ecx = MEM32(edx + 0x9D4);
    MEM32(eax + 0x9D4) = ecx;
    SET_LO16(ecx, MEM16(edx + 0x9D8));
    MEM16(eax + 0x9D8) = LO16(ecx);
    SET_LO8(ecx, MEM8(edx + 0x9DA));
    MEM8(eax + 0x9DA) = LO8(ecx);
    ecx = MEM32(edx + 0x9DC);
    MEM32(eax + 0x9DC) = ecx;
    ecx = MEM32(edx + 0x9E0);
    MEM32(eax + 0x9E0) = ecx;
    ecx = MEM32(edx + 0x9E4);
    MEM32(eax + 0x9E4) = ecx;
    ecx = eax + 0x9E8;
    esi = 0xC;

loc_00295300: ;
    edi = MEM32(ecx + ebp);
    MEM32(ecx) = edi;
    ecx = ecx + 4;
    esi--;
    if ((esi != 0)) goto loc_00295300; /* jne: not equal / not zero */

loc_0029530B: ;
    ecx = MEM32(edx + 0xA18);
    MEM32(eax + 0xA18) = ecx;
    ecx = MEM32(edx + 0xA1C);
    MEM32(eax + 0xA1C) = ecx;
    ecx = MEM32(edx + 0xA20);
    MEM32(eax + 0xA20) = ecx;
    ecx = MEM32(edx + 0xA24);
    MEM32(eax + 0xA24) = ecx;
    SET_LO8(ecx, MEM8(edx + 0xA28));
    MEM8(eax + 0xA28) = LO8(ecx);
    SET_LO8(ecx, MEM8(edx + 0xA29));
    MEM8(eax + 0xA29) = LO8(ecx);
    ecx = edx + 0xA2C;
    edi = MEM32(ecx);
    esi = eax + 0xA2C;
    MEM32(esi) = edi;
    edi = MEM32(ecx + 4);
    MEM32(esi + 4) = edi;
    ecx = MEM32(ecx + 8);
    MEM32(esi + 8) = ecx;
    ecx = MEM32(edx + 0xA3C);
    MEM32(eax + 0xA3C) = ecx;
    ecx = MEM32(edx + 0xA40);
    MEM32(eax + 0xA40) = ecx;
    SET_LO8(ecx, MEM8(edx + 0xA44));
    MEM8(eax + 0xA44) = LO8(ecx);
    SET_LO8(ecx, MEM8(edx + 0xA45));
    MEM8(eax + 0xA45) = LO8(ecx);
    ecx = MEM32(edx + 0xA48);
    MEM32(eax + 0xA48) = ecx;
    SET_LO8(ecx, MEM8(edx + 0xA4C));
    MEM8(eax + 0xA4C) = LO8(ecx);
    SET_LO8(ecx, MEM8(edx + 0xA4D));
    MEM8(eax + 0xA4D) = LO8(ecx);
    SET_LO8(ecx, MEM8(edx + 0xA4E));
    POP32(esp, edi);
    MEM8(eax + 0xA4E) = LO8(ecx);
    SET_LO8(edx, MEM8(edx + 0xA4F));
    POP32(esp, esi);
    MEM8(eax + 0xA4F) = LO8(edx);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002953E0
 * Original: 0x002953E0 - 0x002955D0 (496 bytes, 173 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002953E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    int _fpu_cmp = 0; /* FPU compare result: -1/0/1 */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002953E0: ;
    eax = MEM32(0x86EF04);
    esp = esp - 0x10;
    if (TEST_Z(eax, eax)) goto loc_002955CA; /* je: equal / zero */

loc_002953F0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);

loc_002953F4: ;
    ebx = MEM32(0x86EF00);
    /* nop */

loc_00295400: ;
    esi = MEM32(ebx);
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    edi = ebx;
    MEM32(esp + 0x10) = edi;
    if (CMP_EQ(esi, ebx)) goto loc_002955C6; /* je: equal / zero */

loc_00295410: ;
    /* TODO: rdtsc  */
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470A00(); /* call 0x00470A00 */

loc_0029541D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x898);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470D50(); /* call 0x00470D50 */

loc_0029542B: ;
    ebp = MEM32(0x828B48);
    ebx = MEM32(0x828B4C);
    PUSH32(esp, 0);
    eax = eax - ebp;
    PUSH32(esp, 0x3E8);
    edx = edx - ebx - _cf; /* sbb */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470EA0(); /* call 0x00470EA0 */

loc_00295449: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x1C) = eax;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    if (CMP_GE(eax & eax, 0)) goto loc_0029545B; /* jge: greater or equal (signed >=) */

loc_00295455: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_0029545B: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ebx = MEM32(0x86EF00);
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_push(MEMF(0x648CE0)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_00295480; /* ja: above (unsigned >) */

loc_00295478: ;
    esi = MEM32(esi);
    if (CMP_NE(esi, ebx)) goto loc_00295410; /* jne: not equal / not zero */

loc_0029547E: ;
    goto loc_00295486;

loc_00295480: ;
    MEM32(esp + 0x10) = esi;
    edi = esi;

loc_00295486: ;
    if (CMP_EQ(edi, ebx)) goto loc_002955C6; /* je: equal / zero */

loc_0029548E: ;
    ecx = MEM32(esp + 0x24);
    ebp = 0; /* xor self */
    SET_LO16(ebp, MEM16(edi + 0xC));
    edi = ebp;
    PUSH32(esp, 0); sub_00296370(); /* call 0x00296370 */

loc_0029549F: ;
    ecx = MEM32(esp + 0x24);
    esi = eax;
    eax = MEM32(esp + 0x10);
    edi = 0; /* xor self */
    SET_LO16(edi, MEM16(eax + 0xE));
    PUSH32(esp, 0); sub_00296370(); /* call 0x00296370 */

loc_002954B4: ;
    edi = eax;
    ecx = MEM32(edi + 0x75C);
    eax = MEM32(esi + 0x75C);
    if (CMP_NE(eax, ecx)) goto loc_002954D4; /* jne: not equal / not zero */

loc_002954C6: ;
    ecx = MEM32(esp + 0x10);
    if (CMP_LE(LO16(ebp), MEM16(ecx + 0xE))) goto loc_002954F3; /* jle: less or equal (signed <=) */

loc_002954D0: ;
    eax = esi;
    goto loc_002954F5;

loc_002954D4: ;
    if (CMP_EQ(eax, 3)) goto loc_002954F3; /* je: equal / zero */

loc_002954D9: ;
    if (CMP_NE(ecx, 3)) goto loc_002954E2; /* jne: not equal / not zero */

loc_002954DE: ;
    eax = esi;
    goto loc_002954F5;

loc_002954E2: ;
    PUSH32(esp, 0); sub_0046FD20(); /* call 0x0046FD20 */

loc_002954E7: ;
    ebx = MEM32(0x86EF00);
    (void)0; /* test LO8(eax), 1 - flags set for next jcc */
    eax = esi;
    if (TEST_NZ(LO8(eax), 1)) goto loc_002954F5; /* jne: not equal / not zero */

loc_002954F3: ;
    eax = edi;

loc_002954F5: ;
    esi = MEM32(esp + 0x10);
    edx = MEM32(ebx);
    edi = 0; /* xor self */
    SET_LO16(edi, MEM16(esi + 0xC));
    ebp = 0; /* xor self */
    ecx = edx;
    (void)0; /* cmp ecx, ebx - flags set for next jcc */
    MEM32(esp + 0x14) = ebp;
    MEM32(esp + 0x1C) = edi;
    if (CMP_EQ(ecx, ebx)) goto loc_00295522; /* je: equal / zero */

loc_00295511: ;
    if (CMP_NE(MEM16(ecx + 0xC), LO16(edi))) goto loc_00295518; /* jne: not equal / not zero */

loc_00295517: ;
    ebp++;

loc_00295518: ;
    ecx = MEM32(ecx);
    if (CMP_NE(ecx, ebx)) goto loc_00295511; /* jne: not equal / not zero */

loc_0029551E: ;
    MEM32(esp + 0x14) = ebp;

loc_00295522: ;
    ebp = 0; /* xor self */
    ecx = edx;
    (void)0; /* cmp ecx, ebx - flags set for next jcc */
    MEM32(esp + 0x18) = ebp;
    if (CMP_EQ(ecx, ebx)) goto loc_00295541; /* je: equal / zero */

loc_0029552E: ;
    edi = edi;

loc_00295530: ;
    if (CMP_NE(MEM16(ecx + 0xE), LO16(edi))) goto loc_00295537; /* jne: not equal / not zero */

loc_00295536: ;
    ebp++;

loc_00295537: ;
    ecx = MEM32(ecx);
    if (CMP_NE(ecx, ebx)) goto loc_00295530; /* jne: not equal / not zero */

loc_0029553D: ;
    MEM32(esp + 0x18) = ebp;

loc_00295541: ;
    SET_LO16(ebp, MEM16(esi + 0xE));
    ecx = edx;
    edi = 0; /* xor self */
    if (CMP_EQ(ecx, ebx)) goto loc_0029555D; /* je: equal / zero */

loc_0029554D: ;
    /* nop */

loc_00295550: ;
    if (CMP_NE(MEM16(ecx + 0xC), LO16(ebp))) goto loc_00295557; /* jne: not equal / not zero */

loc_00295556: ;
    edi++;

loc_00295557: ;
    ecx = MEM32(ecx);
    if (CMP_NE(ecx, ebx)) goto loc_00295550; /* jne: not equal / not zero */

loc_0029555D: ;
    ecx = edx;
    esi = 0; /* xor self */
    if (CMP_EQ(ecx, ebx)) goto loc_00295572; /* je: equal / zero */

loc_00295565: ;
    if (CMP_NE(MEM16(ecx + 0xE), LO16(ebp))) goto loc_0029556C; /* jne: not equal / not zero */

loc_0029556B: ;
    esi++;

loc_0029556C: ;
    ecx = MEM32(ecx);
    if (CMP_NE(ecx, ebx)) goto loc_00295565; /* jne: not equal / not zero */

loc_00295572: ;
    edx = MEM32(esp + 0x14);
    ecx = 1;
    if (CMP_G(edx, ecx)) goto loc_00295591; /* jg: greater (signed >) */

loc_0029557F: ;
    if (CMP_G(MEM32(esp + 0x18), ecx)) goto loc_00295591; /* jg: greater (signed >) */

loc_00295585: ;
    if (CMP_G(edi, ecx)) goto loc_0029558D; /* jg: greater (signed >) */

loc_00295589: ;
    if (CMP_LE(esi, ecx)) goto loc_0029559E; /* jle: less or equal (signed <=) */

loc_0029558D: ;
    edi = ebp;
    goto loc_00295595;

loc_00295591: ;
    edi = MEM32(esp + 0x1C);

loc_00295595: ;
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, 0); sub_00296370(); /* call 0x00296370 */

loc_0029559E: ;
    if (TEST_Z(eax, eax)) goto loc_00295400; /* je: equal / zero */

loc_002955A6: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0029A380(); /* call 0x0029A380 */

loc_002955AC: ;
    edx = MEM32(esp + 0x10);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(edx + 0xC));
    PUSH32(esp, eax);
    eax = 0x86EEFC;
    PUSH32(esp, 0); sub_00294CF0(); /* call 0x00294CF0 */

loc_002955C1: ;
    goto loc_002953F4;

loc_002955C6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_002955CA: ;
    esp = esp + 0x10;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_002955D0
 * Original: 0x002955D0 - 0x00295660 (144 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002955D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002955D0: ;
    (void)0; /* cmp MEM32(0x7FA1F8), 0x46 - flags set for next jcc */
    PUSH32(esp, ebx);
    ebx = 1;
    if (CMP_EQ(MEM32(0x7FA1F8), 0x46)) goto loc_00295605; /* je: equal / zero */

loc_002955DF: ;
    SET_LO8(eax, MEM8(0x863D11));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002955F9; /* jne: not equal / not zero */

loc_002955E8: ;
    if (CMP_NE(MEM32(0x863D04), ebx)) goto loc_0029561D; /* jne: not equal / not zero */

loc_002955F0: ;
    if (CMP_NE(MEM32(0x863D08), 3)) goto loc_0029561D; /* jne: not equal / not zero */

loc_002955F9: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_001F9B20(); /* call 0x001F9B20 */

loc_00295600: ;
    esp = esp + 4;
    goto loc_0029561D;

loc_00295605: ;
    SET_LO8(eax, MEM8(0x862C5C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0029561D; /* je: equal / zero */

loc_0029560E: ;
    if (CMP_EQ(MEM32(0x863D04), ebx)) goto loc_0029561D; /* je: equal / zero */

loc_00295616: ;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_0025D8F0(); /* call 0x0025D8F0 */

loc_0029561D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0025DB70(); /* call 0x0025DB70 */

loc_00295623: ;
    eax = MEM32(0x7FA1F8);
    esp = esp + 4;
    if (CMP_NE(eax, 0x46)) goto loc_00295656; /* jne: not equal / not zero */

loc_00295630: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x2A);
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_0029563A: ;
    SET_LO8(eax, MEM8(esp + 0x10));
    esp = esp + 4;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    POP32(esp, edi);
    MEM8(0x862CA1) = LO8(ebx);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0029565C; /* je: equal / zero */

loc_0029564C: ;
    MEM8(0x849C0F) = LO8(ebx);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00295656: ;
    MEM8(0x862CA1) = LO8(ebx);

loc_0029565C: ;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00295660
 * Original: 0x00295660 - 0x0029593D (733 bytes, 213 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00295660(void)
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

loc_00295660: ;
    esp = esp - 0xC;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    eax = MEM32(ebp + 0x10C8);
    if (CMP_EQ(eax, 2)) goto loc_0029567C; /* je: equal / zero */

loc_00295673: ;
    if (CMP_NE(eax, 3)) goto loc_00295936; /* jne: not equal / not zero */

loc_0029567C: ;
    SET_LO8(eax, MEM8(ebp + 0x1C));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00295936; /* jne: not equal / not zero */

loc_00295687: ;
    xmm0 = MEMF(ebp + 0xBD3C); /* movss */
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_002956CF; /* jnp: not parity */

loc_0029569C: ;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_002956A1: ;
    fp_push(MEMF(ebp + 0xBD3C)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_00295936; /* jbe: below or equal (unsigned <=) */

loc_002956B3: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(ebp + 0xBD3C) = xmm0; /* movss */
    POP32(esp, ebp);
    esp = esp + 0xC;
    MEM32(esp + 4) = 1;
    g_seh_ebp = ebp; sub_002955D0(); return; /* tail jmp 0x002955D0 */

loc_002956CF: ;
    PUSH32(esp, esi);
    eax = 0x862C40;
    PUSH32(esp, 0); sub_00296340(); /* call 0x00296340 */

loc_002956DA: ;
    esi = eax;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(esp + 0xC) = esi;
    if (TEST_Z(esi, esi)) goto loc_00295935; /* je: equal / zero */

loc_002956E8: ;
    SET_LO8(eax, MEM8(ebp + 0x2281));
    xmm0 = MEMF(0x6BE8D0); /* movss */
    xmm0 = xmm0 + MEMF(0x648CE0); /* addss */
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, edi);
    MEMF(esp + 0x10) = xmm0; /* movss */
    if (CMP_LE(LO8(eax) & LO8(eax), 0)) goto loc_002957A6; /* jle: less or equal (signed <=) */

loc_00295710: ;
    edi = ebp + 0x2CCD;

loc_00295716: ;
    eax = edi + -2629;
    if (CMP_EQ(eax, esi)) goto loc_00295790; /* je: equal / zero */

loc_00295720: ;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00295725: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_00295773; /* jbe: below or equal (unsigned <=) */

loc_00295737: ;
    if (CMP_NE(MEM8(edi), 0)) goto loc_00295778; /* jne: not equal / not zero */

loc_0029573C: ;
    PUSH32(esp, 0x38);
    MEM8(edi) = 1;
    PUSH32(esp, 0); sub_002AF3F0(); /* call 0x002AF3F0 */

loc_00295746: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_00295756; /* je: equal / zero */

loc_0029574D: ;
    PUSH32(esp, 0); sub_00295BB0(); /* call 0x00295BB0 */

loc_00295752: ;
    esi = eax;
    goto loc_00295758;

loc_00295756: ;
    esi = 0; /* xor self */

loc_00295758: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x1F4);
    PUSH32(esp, 0); sub_004168D0(); /* call 0x004168D0 */

loc_00295764: ;
    eax = MEM32(edi + -105);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_0029576F: ;
    esi = MEM32(esp + 0x14);

loc_00295773: ;
    if (CMP_EQ(MEM8(edi), 0)) goto loc_00295790; /* je: equal / zero */

loc_00295778: ;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0029577D: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_00295790; /* jbe: below or equal (unsigned <=) */

loc_0029578D: ;
    MEM8(edi) = 0;

loc_00295790: ;
    eax = (uint32_t)(int32_t)SMEM8(ebp + 0x2281);
    ebx++;
    edi = edi + 0xA50;
    if (CMP_L(ebx, eax)) goto loc_00295716; /* jl: less (signed <) */

loc_002957A6: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_002957B4; /* jne: not equal / not zero */

loc_002957AF: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_002957B4: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    ebx = 0; /* xor self */
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (CMP_EQ(esi, ebx)) goto loc_002957FE; /* je: equal / zero */

loc_002957DC: ;
    if (CMP_B(MEM32(esi + 0x80), 0x54)) goto loc_002957FE; /* jb: below (unsigned <) */

loc_002957E5: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002957EF: ;
    PUSH32(esp, 0x54);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002957F7: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_0029581F; /* jne: not equal / not zero */

loc_002957FE: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00295810: ;
    PUSH32(esp, 0x54);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00295818: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) goto loc_00295828; /* je: equal / zero */

loc_0029581F: ;
    PUSH32(esp, 0); sub_00295940(); /* call 0x00295940 */

loc_00295824: ;
    esi = eax;
    goto loc_0029582A;

loc_00295828: ;
    esi = 0; /* xor self */

loc_0029582A: ;
    MEM16(esi + 0x34) = LO16(ebx);
    SET_LO8(eax, MEM8(ebp + 0x2281));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(esp + 0x18) = ebx;
    if (CMP_LE(LO8(eax) & LO8(eax), 0)) goto loc_002958FE; /* jle: less or equal (signed <=) */

loc_00295840: ;
    ebx = MEM32(0x828B4C);
    edi = ebp + 0x22A4;
    ebp = MEM32(0x828B48);

loc_00295852: ;
    eax = MEM32(esp + 0x14);
    ecx = edi + -28;
    if (CMP_EQ(ecx, eax)) goto loc_002958DC; /* je: equal / zero */

loc_0029585D: ;
    SET_LO8(eax, MEM8(edi + 0xA29));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002958DC; /* je: equal / zero */

loc_00295867: ;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0029586C: ;
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_002958DC; /* jbe: below or equal (unsigned <=) */

loc_00295880: ;
    /* TODO: rdtsc  */
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470A00(); /* call 0x00470A00 */

loc_0029588D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x898);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470D50(); /* call 0x00470D50 */

loc_0029589B: ;
    PUSH32(esp, 0);
    eax = eax - ebp;
    PUSH32(esp, 0x3E8);
    edx = edx - ebx - _cf; /* sbb */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470EA0(); /* call 0x00470EA0 */

loc_002958AD: ;
    edx = MEM32(edi + 0xA2C);
    edx = edx + 0x1388;
    if (CMP_AE(edx, eax)) goto loc_002958DC; /* jae: above or equal (unsigned >=) */

loc_002958BD: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x34);
    SET_LO16(ecx, MEM16(edi + 0x9BC));
    MEM16(esi + eax * 2 + 0x36) = LO16(ecx);
    MEM16(esi + 0x34) = MEM16(esi + 0x34) + 1;
    PUSH32(esp, 0); sub_00416770(); /* call 0x00416770 */

loc_002958D6: ;
    MEM32(edi + 0xA2C) = eax;

loc_002958DC: ;
    edx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x18);
    ecx = (uint32_t)(int32_t)SMEM8(edx + 0x2281);
    eax++;
    edi = edi + 0xA50;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x18) = eax;
    if (CMP_L(eax, ecx)) goto loc_00295852; /* jl: less (signed <) */

loc_002958FE: ;
    (void)0; /* cmp MEM16(esi + 0x34), 0 - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, ebx);
    if (CMP_NE(MEM16(esi + 0x34), 0)) goto loc_00295917; /* jne: not equal / not zero */

loc_00295907: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_0029590F: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0xC;
    esp += 8; return; /* ret 4 */

loc_00295917: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x1F4);
    PUSH32(esp, 0); sub_004168D0(); /* call 0x004168D0 */

loc_00295923: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(ecx + 0x9DC);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_00295935: ;
    POP32(esp, esi);

loc_00295936: ;
    POP32(esp, ebp);
    esp = esp + 0xC;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00295940
 * Original: 0x00295940 - 0x00295994 (84 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00295940(void)
{

loc_00295940: ;
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
    MEM16(eax + 0x34) = LO16(ecx);
    MEM32(eax + 8) = 0xFFFFFFFFu;
    MEM32(eax) = 0x605470;
    ecx = 0xFFFEFFFEu;
    MEM32(eax + 0x36) = ecx;
    MEM32(eax + 0x3A) = ecx;
    MEM32(eax + 0x3E) = ecx;
    MEM32(eax + 0x42) = ecx;
    MEM32(eax + 0x46) = ecx;
    MEM32(eax + 0x4A) = ecx;
    MEM32(eax + 0x4E) = ecx;
    MEM16(eax + 0x52) = LO16(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002959A0
 * Original: 0x002959A0 - 0x002959E3 (67 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002959A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002959A0: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ebp = ecx;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x34);
    PUSH32(esp, edi);
    PUSH32(esp, 5);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_002959B4: ;
    edi = 0; /* xor self */
    esp = esp + 4;
    if (CMP_LE(MEM16(ebp + 0x34), LO16(edi))) goto loc_002959DD; /* jle: less or equal (signed <=) */

loc_002959BF: ;
    PUSH32(esp, ebx);
    ebx = ebp + 0x36;

loc_002959C3: ;
    eax = (uint32_t)(int32_t)SMEM16(ebx);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_002959CD: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x34);
    esp = esp + 4;
    edi++;
    ebx = ebx + 2;
    if (CMP_L(edi, eax)) goto loc_002959C3; /* jl: less (signed <) */

loc_002959DC: ;
    POP32(esp, ebx);

loc_002959DD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002959F0
 * Original: 0x002959F0 - 0x00295A32 (66 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002959F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002959F0: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 5);
    ebp = ecx;
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_00295A00: ;
    esp = esp + 4;
    edi = 0; /* xor self */
    (void)0; /* test LO16(eax), LO16(eax) - flags set for next jcc */
    MEM16(ebp + 0x34) = LO16(eax);
    if (CMP_LE(LO16(eax) & LO16(eax), 0)) goto loc_00295A2C; /* jle: less or equal (signed <=) */

loc_00295A0E: ;
    PUSH32(esp, ebx);
    ebx = ebp + 0x36;

loc_00295A12: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_00295A19: ;
    MEM16(ebx) = LO16(eax);
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x34);
    esp = esp + 4;
    edi++;
    ebx = ebx + 2;
    if (CMP_L(edi, eax)) goto loc_00295A12; /* jl: less (signed <) */

loc_00295A2B: ;
    POP32(esp, ebx);

loc_00295A2C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00295A40
 * Original: 0x00295A40 - 0x00295B1D (221 bytes, 75 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00295A40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00295A40: ;
    esp = esp - 8;
    eax = MEM32(0x863D08);
    (void)0; /* cmp eax, 3 - flags set for next jcc */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 8) = esi;
    if (CMP_EQ(eax, 3)) goto loc_00295A5D; /* je: equal / zero */

loc_00295A54: ;
    if (CMP_NE(eax, 2)) goto loc_00295B13; /* jne: not equal / not zero */

loc_00295A5D: ;
    SET_LO8(eax, MEM8(0x863D11));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    eax = MEM32(0x7FA1F8);
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00295A7A; /* jne: not equal / not zero */

loc_00295A6B: ;
    if (CMP_EQ(eax, 0x46)) goto loc_00295A7F; /* je: equal / zero */

loc_00295A70: ;
    eax = 1;
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_00295A7A: ;
    if (CMP_NE(eax, 0x46)) goto loc_00295A8C; /* jne: not equal / not zero */

loc_00295A7F: ;
    if (CMP_B(MEM32(0x7F9F60), 0x3C)) goto loc_00295B13; /* jb: below (unsigned <) */

loc_00295A8C: ;
    SET_LO8(eax, MEM8(0x862C5C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00295B13; /* je: equal / zero */

loc_00295A95: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    eax = 0x862C40;
    PUSH32(esp, 0); sub_00296250(); /* call 0x00296250 */

loc_00295AA4: ;
    ebx = eax;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    MEM32(esp + 8) = ebx;
    if (TEST_Z(ebx, ebx)) goto loc_00295B12; /* je: equal / zero */

loc_00295AAE: ;
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    if (CMP_LE(MEM16(esi + 0x34), LO16(ebp))) goto loc_00295B11; /* jle: less or equal (signed <=) */

loc_00295AB7: ;
    esi = esi + 0x36;
    PUSH32(esp, edi);
    goto loc_00295AC0;

    /* nop */

loc_00295AC0: ;
    edi = 0; /* xor self */
    SET_LO16(edi, MEM16(esi));
    ecx = 0x862C40;
    PUSH32(esp, 0); sub_00296370(); /* call 0x00296370 */

loc_00295ACF: ;
    if (TEST_Z(eax, eax)) goto loc_00295B00; /* je: equal / zero */

loc_00295AD3: ;
    SET_LO8(ecx, MEM8(ebx + 0xA44));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00295B00; /* jne: not equal / not zero */

loc_00295ADD: ;
    SET_LO8(ecx, MEM8(eax + 0xA44));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00295B00; /* jne: not equal / not zero */

loc_00295AE7: ;
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(ebx + 0x9D8));
    PUSH32(esp, edi);
    ebx = 0x86EEFC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00294C50(); /* call 0x00294C50 */

loc_00295AFC: ;
    ebx = MEM32(esp + 0x10);

loc_00295B00: ;
    edx = MEM32(esp + 0x14);
    eax = (uint32_t)(int32_t)SMEM16(edx + 0x34);
    ebp++;
    esi = esi + 2;
    if (CMP_L(ebp, eax)) goto loc_00295AC0; /* jl: less (signed <) */

loc_00295B10: ;
    POP32(esp, edi);

loc_00295B11: ;
    POP32(esp, ebp);

loc_00295B12: ;
    POP32(esp, ebx);

loc_00295B13: ;
    eax = 1;
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00295B20
 * Original: 0x00295B20 - 0x00295BA0 (128 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00295B20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00295B20: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_00295B2E; /* jne: not equal / not zero */

loc_00295B29: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_00295B2E: ;
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
    if (TEST_Z(esi, esi)) goto loc_00295B78; /* je: equal / zero */

loc_00295B56: ;
    if (CMP_B(MEM32(esi + 0x80), 0x54)) goto loc_00295B78; /* jb: below (unsigned <) */

loc_00295B5F: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00295B69: ;
    PUSH32(esp, 0x54);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00295B71: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_00295B99; /* jne: not equal / not zero */

loc_00295B78: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00295B8A: ;
    PUSH32(esp, 0x54);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00295B92: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) { sub_00295BA0(); return; } /* je: equal / zero */

loc_00295B99: ;
    POP32(esp, edi);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00295940(); return; /* tail jmp 0x00295940 */

}

/**
 * sub_00295BB0
 * Original: 0x00295BB0 - 0x00295BE5 (53 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00295BB0(void)
{

loc_00295BB0: ;
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
    MEM32(eax) = 0x6054D8;
    MEM8(eax + 0x34) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00295BF0
 * Original: 0x00295BF0 - 0x00295C0F (31 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00295BF0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00295BF0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    edi = ecx;
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_00295BFF: ;
    esp = esp + 4;
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(eax, eax)) ? 1 : 0); /* setne */
    MEM8(edi + 0x34) = LO8(eax);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00295C10
 * Original: 0x00295C10 - 0x00295C2D (29 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00295C10(void)
{
    int _flags = 0; /* fallback flag var */

loc_00295C10: ;
    SET_LO8(edx, MEM8(ecx + 0x34));
    eax = 0; /* xor self */
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(LO8(edx), LO8(edx))) ? 1 : 0); /* setne */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_00295C26: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00295C30
 * Original: 0x00295C30 - 0x00295D16 (230 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00295C30(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00295C30: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ecx;
    SET_LO8(eax, MEM8(ebp + 0x34));
    ebx = 0; /* xor self */
    if (CMP_NE(LO8(eax), LO8(ebx))) goto loc_00295D0E; /* jne: not equal / not zero */

loc_00295C41: ;
    if (CMP_NE(MEM32(0x84A19C), ebx)) goto loc_00295C4E; /* jne: not equal / not zero */

loc_00295C49: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_00295C4E: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    PUSH32(esp, esi);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    PUSH32(esp, edi);
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (CMP_EQ(esi, ebx)) goto loc_00295C98; /* je: equal / zero */

loc_00295C76: ;
    if (CMP_B(MEM32(esi + 0x80), 0x38)) goto loc_00295C98; /* jb: below (unsigned <) */

loc_00295C7F: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00295C89: ;
    PUSH32(esp, 0x38);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00295C91: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_00295CB9; /* jne: not equal / not zero */

loc_00295C98: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00295CAA: ;
    PUSH32(esp, 0x38);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00295CB2: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) goto loc_00295CEF; /* je: equal / zero */

loc_00295CB9: ;
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
    MEM32(eax) = 0x6054D8;
    MEM8(eax + 0x34) = LO8(ebx);
    esi = eax;
    goto loc_00295CF1;

loc_00295CEF: ;
    esi = 0; /* xor self */

loc_00295CF1: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x1F4);
    MEM8(esi + 0x34) = 1;
    PUSH32(esp, 0); sub_004168D0(); /* call 0x004168D0 */

loc_00295D01: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_00295D0C: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00295D0E: ;
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00295D20
 * Original: 0x00295D20 - 0x00295DD2 (178 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00295D20(void)
{
    int _flags = 0; /* fallback flag var */

loc_00295D20: ;
    eax = MEM32(0x84A19C);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(eax, ebx)) goto loc_00295D33; /* jne: not equal / not zero */

loc_00295D2E: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_00295D33: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (CMP_EQ(esi, ebx)) goto loc_00295D7B; /* je: equal / zero */

loc_00295D59: ;
    if (CMP_B(MEM32(esi + 0x80), 0x38)) goto loc_00295D7B; /* jb: below (unsigned <) */

loc_00295D62: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00295D6C: ;
    PUSH32(esp, 0x38);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00295D74: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_00295D9C; /* jne: not equal / not zero */

loc_00295D7B: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00295D8D: ;
    PUSH32(esp, 0x38);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00295D95: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) { sub_00295DD2(); return; } /* je: equal / zero */

loc_00295D9C: ;
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
    MEM8(eax + 0x34) = LO8(ebx);
    MEM32(eax + 8) = 0xFFFFFFFFu;
    MEM32(eax) = 0x6054D8;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00295DE0
 * Original: 0x00295DE0 - 0x00295E46 (102 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00295DE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00295DE0: ;
    eax = MEM32(esp + 4);
    SET_LO8(ecx, MEM8(eax + 0x2281));
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    if (CMP_LE(LO8(ecx) & LO8(ecx), 0)) goto loc_00295E3D; /* jle: less or equal (signed <=) */

loc_00295DF1: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = eax + 0x2614;
    /* nop */

loc_00295E00: ;
    esi = ebx;
    edi = 2;

loc_00295E07: ;
    ecx = MEM32(esi);
    if (TEST_Z(ecx, ecx)) goto loc_00295E13; /* je: equal / zero */

loc_00295E0D: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_00295E13: ;
    MEM32(esi) = 0;
    esi = esi + 0x12C;
    edi--;
    if ((edi != 0)) goto loc_00295E07; /* jne: not equal / not zero */

loc_00295E22: ;
    ecx = MEM32(esp + 0x14);
    edx = (uint32_t)(int32_t)SMEM8(ecx + 0x2281);
    ebp++;
    ebx = ebx + 0xA50;
    if (CMP_L(ebp, edx)) goto loc_00295E00; /* jl: less (signed <) */

loc_00295E38: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ecx;
    POP32(esp, ebx);

loc_00295E3D: ;
    PUSH32(esp, 0); sub_00295E50(); /* call 0x00295E50 */

loc_00295E42: ;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00295E50
 * Original: 0x00295E50 - 0x00295E8B (59 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00295E50(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00295E50: ;
    eax = eax + 0x90;
    if ((eax == 0)) goto loc_00295E8A; /* je: equal / zero */

loc_00295E57: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    ebp = 2;

loc_00295E61: ;
    esi = MEM32(edi);
    if (TEST_Z(esi, esi)) goto loc_00295E81; /* je: equal / zero */

loc_00295E67: ;
    ecx = MEM32(esi + 0xE74);
    if (TEST_Z(ecx, ecx)) goto loc_00295E81; /* je: equal / zero */

loc_00295E71: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_00295E77: ;
    MEM32(esi + 0xE74) = 0;

loc_00295E81: ;
    edi = edi + 4;
    ebp--;
    if ((ebp != 0)) goto loc_00295E61; /* jne: not equal / not zero */

loc_00295E87: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);

loc_00295E8A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00295E90
 * Original: 0x00295E90 - 0x00295EB0 (32 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00295E90(void)
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

loc_00295E90: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00295E97: ;
    MEMF(esp + 4) = (float)fp_top(); fp_popp(); /* fstp */
    ebp = MEM32(esp + 0xC);
    SET_LO8(eax, MEM8(ebp + 0x2281));
    if (CMP_NE(LO8(eax), 0xF)) { sub_00295EB0(); return; } /* jne: not equal / not zero */

loc_00295EA9: ;
    eax = 0; /* xor self */
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00296250
 * Original: 0x00296250 - 0x00296299 (73 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296250(void)
{
    int _flags = 0; /* fallback flag var */

loc_00296250: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = (uint32_t)(int32_t)SMEM8(eax + 0x2281);
    esi = 0; /* xor self */
    if (CMP_LE(edi & edi, 0)) goto loc_00296291; /* jle: less or equal (signed <=) */

loc_00296264: ;
    edx = eax + 0x2C64;
    /* nop */

loc_00296270: ;
    ecx = MEM32(edx);
    (void)0; /* cmp ecx, 0xFFFFFFFFu - flags set for next jcc */
    eax = edx + -2524;
    if (CMP_EQ(ecx, 0xFFFFFFFFu)) goto loc_00296286; /* je: equal / zero */

loc_0029627D: ;
    (void)0; /* cmp ecx, ebx - flags set for next jcc */
    SET_LO8(ecx, (CMP_EQ(ecx, ebx)) ? 1 : 0); /* sete */
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00296293; /* jne: not equal / not zero */

loc_00296286: ;
    esi++;
    edx = edx + 0xA50;
    if (CMP_L(esi, edi)) goto loc_00296270; /* jl: less (signed <) */

loc_00296291: ;
    eax = 0; /* xor self */

loc_00296293: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002962A0
 * Original: 0x002962A0 - 0x002962DB (59 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002962A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002962A0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = (uint32_t)(int32_t)SMEM8(eax + 0x2281);
    esi = 0; /* xor self */
    if (CMP_LE(edi & edi, 0)) goto loc_002962D6; /* jle: less or equal (signed <=) */

loc_002962AF: ;
    edx = eax + 0x2C68;

loc_002962B5: ;
    ecx = MEM32(edx);
    (void)0; /* cmp ecx, 0xFFFFFFFFu - flags set for next jcc */
    eax = edx + -2528;
    if (CMP_EQ(ecx, 0xFFFFFFFFu)) goto loc_002962CB; /* je: equal / zero */

loc_002962C2: ;
    (void)0; /* cmp ecx, ebx - flags set for next jcc */
    SET_LO8(ecx, (CMP_EQ(ecx, ebx)) ? 1 : 0); /* sete */
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_002962D8; /* jne: not equal / not zero */

loc_002962CB: ;
    esi++;
    edx = edx + 0xA50;
    if (CMP_L(esi, edi)) goto loc_002962B5; /* jl: less (signed <) */

loc_002962D6: ;
    eax = 0; /* xor self */

loc_002962D8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002962E0
 * Original: 0x002962E0 - 0x00296336 (86 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002962E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002962E0: ;
    PUSH32(esp, ebx);
    ebx = (uint32_t)(int32_t)SMEM8(eax + 0x2281);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_LE(ebx & ebx, 0)) goto loc_0029632D; /* jle: less or equal (signed <=) */

loc_002962F1: ;
    ebp = MEM32(esp + 0x18);
    ecx = eax + 0x2CA0;
    goto loc_00296300;

    /* nop */

loc_00296300: ;
    SET_LO8(edx, MEM8(ecx + 0x10));
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    eax = ecx + -2584;
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_00296314; /* je: equal / zero */

loc_0029630D: ;
    edx = MEM32(ecx);
    esi = MEM32(ecx + 4);
    goto loc_00296318;

loc_00296314: ;
    edx = 0; /* xor self */
    esi = 0; /* xor self */

loc_00296318: ;
    if (CMP_NE(edx, MEM32(esp + 0x14))) goto loc_00296322; /* jne: not equal / not zero */

loc_0029631E: ;
    if (CMP_EQ(esi, ebp)) goto loc_0029632F; /* je: equal / zero */

loc_00296322: ;
    edi++;
    ecx = ecx + 0xA50;
    if (CMP_L(edi, ebx)) goto loc_00296300; /* jl: less (signed <) */

loc_0029632D: ;
    eax = 0; /* xor self */

loc_0029632F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00296340
 * Original: 0x00296340 - 0x00296364 (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296340(void)
{
    int _flags = 0; /* fallback flag var */

loc_00296340: ;
    edx = (uint32_t)(int32_t)SMEM8(eax + 0x2281);
    ecx = 0; /* xor self */
    if (CMP_LE(edx & edx, 0)) goto loc_00296361; /* jle: less or equal (signed <=) */

loc_0029634D: ;
    eax = eax + 0x2288;

loc_00296352: ;
    if (CMP_NE(MEM8(eax), 0)) goto loc_00296363; /* jne: not equal / not zero */

loc_00296357: ;
    ecx++;
    eax = eax + 0xA50;
    if (CMP_L(ecx, edx)) goto loc_00296352; /* jl: less (signed <) */

loc_00296361: ;
    eax = 0; /* xor self */

loc_00296363: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00296370
 * Original: 0x00296370 - 0x002963A8 (56 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296370(void)
{
    int _flags = 0; /* fallback flag var */

loc_00296370: ;
    (void)0; /* cmp LO16(edi), 0xFFFFFFFFu - flags set for next jcc */
    PUSH32(esp, ebx);
    if (CMP_NE(LO16(edi), 0xFFFFFFFFu)) { sub_002963A8(); return; } /* jne: not equal / not zero */

loc_00296377: ;
    edx = (uint32_t)(int32_t)SMEM8(ecx + 0x2281);
    eax = 0; /* xor self */
    if (CMP_LE(edx & edx, 0)) goto loc_002963A0; /* jle: less or equal (signed <=) */

loc_00296384: ;
    ecx = ecx + 0x2288;
    /* nop */

loc_00296390: ;
    if (CMP_NE(MEM8(ecx), 0)) goto loc_002963A4; /* jne: not equal / not zero */

loc_00296395: ;
    eax++;
    ecx = ecx + 0xA50;
    if (CMP_L(eax, edx)) goto loc_00296390; /* jl: less (signed <) */

loc_002963A0: ;
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_002963A4: ;
    eax = ecx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002963F0
 * Original: 0x002963F0 - 0x0029643D (77 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002963F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002963F0: ;
    SET_LO8(eax, MEM8(ebx + 0x2281));
    xmm0 = MEMF(0x7FA210); /* movss */
    xmm0 = xmm0 * MEMF(0x59D944); /* mulss */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    ebp = (int32_t)xmm0; /* cvttss2si */
    if (CMP_LE(LO8(eax) & LO8(eax), 0)) goto loc_0029643A; /* jle: less or equal (signed <=) */

loc_00296412: ;
    PUSH32(esp, edi);
    edi = ebx + 0x2288;
    /* nop */

loc_00296420: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00299820(); /* call 0x00299820 */

loc_00296427: ;
    eax = (uint32_t)(int32_t)SMEM8(ebx + 0x2281);
    esi++;
    edi = edi + 0xA50;
    if (CMP_L(esi, eax)) goto loc_00296420; /* jl: less (signed <) */

loc_00296439: ;
    POP32(esp, edi);

loc_0029643A: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00296440
 * Original: 0x00296440 - 0x00296470 (48 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296440(void)
{
    int _flags = 0; /* fallback flag var */

loc_00296440: ;
    ecx = (uint32_t)(int32_t)SMEM8(ecx + eax + 0x8B);
    if (TEST_S(ecx, ecx)) goto loc_0029646D; /* jl: less (signed <) */

loc_0029644C: ;
    if (CMP_GE(ecx, 0x10)) goto loc_0029646D; /* jge: greater or equal (signed >=) */

loc_00296451: ;
    edx = (int32_t)MEMF(0x849C30); /* cvttss2si */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2C);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x776290);
    SET_LO8(eax, 0); /* xor self */
    (void)0; /* cmp esi, edx - flags set for next jcc */
    POP32(esp, esi);
    if (CMP_G(esi, edx)) goto loc_0029646F; /* jg: greater (signed >) */

loc_0029646A: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_0029646D: ;
    SET_LO8(eax, 0); /* xor self */

loc_0029646F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00296470
 * Original: 0x00296470 - 0x0029649B (43 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296470(void)
{
    int _flags = 0; /* fallback flag var */

loc_00296470: ;
    eax = (uint32_t)(int32_t)SMEM8(eax + ecx + 0x8B);
    if (TEST_S(eax, eax)) goto loc_0029649A; /* jl: less (signed <) */

loc_0029647C: ;
    if (CMP_GE(eax, 0x10)) goto loc_0029649A; /* jge: greater or equal (signed >=) */

loc_00296481: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    eax = eax + 0x776280;
    MEM32(eax + 0xC) = MEM32(eax + 0xC) + 1;
    edx = (int32_t)MEMF(0x849C30); /* cvttss2si */
    edx = edx + 0x28;
    MEM32(eax + 0x10) = edx;

loc_0029649A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002964A0
 * Original: 0x002964A0 - 0x002964BD (29 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002964A0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_002964A0: ;
    eax = (uint32_t)(int32_t)SMEM8(eax + ecx + 0x8B);
    if (TEST_S(eax, eax)) { sub_002964BD(); return; } /* jl: less (signed <) */

loc_002964AC: ;
    if (CMP_GE(eax, 0x10)) { sub_002964BD(); return; } /* jge: greater or equal (signed >=) */

loc_002964B1: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    xmm0 = (float)(int32_t)MEM32(eax + 0x776290); /* cvtsi2ss */
    esp += 4; return; /* ret */

}

/**
 * sub_002964D0
 * Original: 0x002964D0 - 0x002964DE (14 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002964D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002964D0: ;
    if (CMP_NE(MEM32(eax + 0x10C4), 1)) { sub_002964DE(); return; } /* jne: not equal / not zero */

loc_002964D9: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00296520
 * Original: 0x00296520 - 0x00296575 (85 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296520(void)
{
    int _flags = 0; /* fallback flag var */

loc_00296520: ;
    PUSH32(esp, esi);
    esi = (uint32_t)(int32_t)SMEM8(ecx + eax + 0x8B);
    if (TEST_S(esi, esi)) goto loc_00296571; /* jl: less (signed <) */

loc_0029652D: ;
    if (CMP_GE(esi, 0x10)) goto loc_00296571; /* jge: greater or equal (signed >=) */

loc_00296532: ;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00296537: ;
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0029653C: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x2C);
    esi = esi + 0x776280;
    ecx = MEM32(esi + 0x14);
    if (CMP_GE(ecx & ecx, 0)) goto loc_00296550; /* jge: greater or equal (signed >=) */

loc_0029654C: ;
    ecx = 0; /* xor self */
    goto loc_0029655A;

loc_00296550: ;
    if (CMP_BE(ecx, 3)) goto loc_0029655A; /* jbe: below or equal (unsigned <=) */

loc_00296555: ;
    ecx = 3;

loc_0029655A: ;
    edx = MEM32(ecx * 4 + 0x6055E0);
    edx = edx + eax;
    eax = MEM32(esp + 8);
    MEM8(esi + 0x1C) = 1;
    MEM32(esi + 0x18) = edx;
    MEM32(esi + 0x20) = eax;

loc_00296571: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00296580
 * Original: 0x00296580 - 0x002965B4 (52 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296580(void)
{
    int _flags = 0; /* fallback flag var */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00296580: ;
    PUSH32(esp, esi);
    esi = (uint32_t)(int32_t)SMEM8(edi + ebx + 0x8B);
    if (TEST_S(esi, esi)) { sub_002965B4(); return; } /* jl: less (signed <) */

loc_0029658D: ;
    if (CMP_GE(esi, 0x10)) { sub_002965B4(); return; } /* jge: greater or equal (signed >=) */

loc_00296592: ;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00296597: ;
    /* fstp st(0) */
    PUSH32(esp, edi);
    eax = ebx;
    PUSH32(esp, 0); sub_002964D0(); /* call 0x002964D0 */

loc_002965A1: ;
    if (CMP_NE(LO8(eax), 1)) goto loc_002965A9; /* jne: not equal / not zero */

loc_002965A5: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002965A9: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x2C);
    SET_LO8(eax, MEM8(esi + 0x77629C));
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_002965C0
 * Original: 0x002965C0 - 0x002965EB (43 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002965C0(void)
{
    int _flags = 0; /* fallback flag var */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_002965C0: ;
    PUSH32(esp, esi);
    esi = (uint32_t)(int32_t)SMEM8(ecx + eax + 0x8B);
    if (TEST_S(esi, esi)) goto loc_002965E9; /* jl: less (signed <) */

loc_002965CD: ;
    if (CMP_GE(esi, 0x10)) goto loc_002965E9; /* jge: greater or equal (signed >=) */

loc_002965D2: ;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_002965D7: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x2C);
    /* fstp st(0) */
    esi = esi + 0x776280;
    MEM32(esi + 0x14) = MEM32(esi + 0x14) + 1;
    MEM8(esi + 0x1C) = 0;

loc_002965E9: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_002965F0
 * Original: 0x002965F0 - 0x00296628 (56 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002965F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002965F0: ;
    PUSH32(esp, esi);
    esi = (uint32_t)(int32_t)SMEM8(ecx + eax + 0x8B);
    if (TEST_S(esi, esi)) goto loc_00296626; /* jl: less (signed <) */

loc_002965FD: ;
    if (CMP_GE(esi, 0x10)) goto loc_00296626; /* jge: greater or equal (signed >=) */

loc_00296602: ;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00296607: ;
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0029660C: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x2C);
    esi = esi + 0x776280;
    SET_LO8(ecx, MEM8(esi + 0x1C));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0029661F; /* je: equal / zero */

loc_0029661C: ;
    MEM32(esi + 0x14) = MEM32(esi + 0x14) + 1;

loc_0029661F: ;
    MEM32(esi + 0x18) = eax;
    MEM8(esi + 0x1C) = 0;

loc_00296626: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00296630
 * Original: 0x00296630 - 0x00296676 (70 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296630(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_00296630: ;
    PUSH32(esp, esi);
    esi = (uint32_t)(int32_t)SMEM8(ecx + eax + 0x8B);
    if (TEST_S(esi, esi)) goto loc_00296671; /* jl: less (signed <) */

loc_0029663D: ;
    if (CMP_GE(esi, 0x10)) goto loc_00296671; /* jge: greater or equal (signed >=) */

loc_00296642: ;
    if (CMP_EQ(MEM32(0x863D04), 1)) goto loc_00296671; /* je: equal / zero */

loc_0029664B: ;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00296650: ;
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00296655: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x2C);
    edx = MEM32(esi + 0x776298);
    xmm1 = 0.0f; /* xorps self = zero */
    edx = edx - eax;
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_00296674; /* jbe: below or equal (unsigned <=) */

loc_0029666C: ;
    xmm0 = xmm1; /* movaps */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00296671: ;
    xmm0 = 0.0f; /* xorps self = zero */

loc_00296674: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00296680
 * Original: 0x00296680 - 0x0029669B (27 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296680(void)
{
    int _flags = 0; /* fallback flag var */

loc_00296680: ;
    eax = (uint32_t)(int32_t)SMEM8(eax + ecx + 0x8B);
    if (TEST_S(eax, eax)) { sub_0029669B(); return; } /* jl: less (signed <) */

loc_0029668C: ;
    if (CMP_GE(eax, 0x10)) { sub_0029669B(); return; } /* jge: greater or equal (signed >=) */

loc_00296691: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    eax = MEM32(eax + 0x7762A0);
    esp += 4; return; /* ret */

}

/**
 * sub_002966A0
 * Original: 0x002966A0 - 0x002966CE (46 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002966A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002966A0: ;
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x10C4);
    ecx = 1;
    SET_LO8(edx, 0); /* xor self */
    (void)0; /* cmp esi, ecx - flags set for next jcc */
    POP32(esp, esi);
    if (CMP_NE(esi, ecx)) goto loc_002966BB; /* jne: not equal / not zero */

loc_002966B3: ;
    if (CMP_EQ(MEM8(0x75E9A2), LO8(edx))) goto loc_002966C7; /* je: equal / zero */

loc_002966BB: ;
    MEM8(0x75E9A2) = LO8(edx);
    MEM32(eax + 0x10C4) = ecx;

loc_002966C7: ;
    MEM8(eax + 0x1C) = LO8(ecx);
    MEM8(eax + 0x5E) = LO8(edx);
    esp += 4; return; /* ret */

}

/**
 * sub_002966D0
 * Original: 0x002966D0 - 0x00296761 (145 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002966D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002966D0: ;
    eax = MEM32(esi + 0x10C4);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    if (CMP_NE(eax, ebx)) goto loc_002966E5; /* jne: not equal / not zero */

loc_002966DD: ;
    if (CMP_EQ(MEM8(0x75E9A2), LO8(ebx))) goto loc_002966F1; /* je: equal / zero */

loc_002966E5: ;
    MEM8(0x75E9A2) = LO8(ebx);
    MEM32(esi + 0x10C4) = ebx;

loc_002966F1: ;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEM8(esi + 0x5E) = LO8(ebx);
    MEM8(esi + 0x218) = LO8(ebx);
    eax = 0; /* xor self */
    /* nop */

loc_00296700: ;
    if (CMP_EQ(MEM8(eax + esi + 0xBD40), LO8(ebx))) goto loc_00296710; /* je: equal / zero */

loc_00296709: ;
    MEM8(eax + esi + 0xBD40) = LO8(ebx);

loc_00296710: ;
    eax++;
    if (CMP_L(eax, 4)) goto loc_00296700; /* jl: less (signed <) */

loc_00296716: ;
    MEM8(esi + 0x15E0) = LO8(ebx);
    MEM8(esi + 0x26) = LO8(ebx);
    MEM8(0x849DCB) = LO8(ebx);
    MEM32(0x849DCC) = ebx;
    PUSH32(esp, 0); sub_00264480(); /* call 0x00264480 */

loc_00296730: ;
    PUSH32(esp, 0); sub_00420B90(); /* call 0x00420B90 */

loc_00296735: ;
    if (TEST_Z(eax, eax)) goto loc_00296748; /* je: equal / zero */

loc_00296739: ;
    PUSH32(esp, 0); sub_00420C70(); /* call 0x00420C70 */

loc_0029673E: ;
    MEM32(0x6BED9C) = 0xFFFFFFFFu;

loc_00296748: ;
    PUSH32(esp, 0); sub_002643E0(); /* call 0x002643E0 */

loc_0029674D: ;
    if (CMP_EQ(MEM8(esi + 0x227D), LO8(ebx))) { sub_00296761(); return; } /* je: equal / zero */

loc_00296755: ;
    MEM8(esi + 0x227D) = LO8(ebx);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_00296E10(); return; /* tail jmp 0x00296E10 */

}

/**
 * sub_00296770
 * Original: 0x00296770 - 0x00296780 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296770(void)
{

loc_00296770: ;
    PUSH32(esp, esi);
    esi = ecx + 0xC;
    ecx = MEM32(ecx + 4);
    PUSH32(esp, 0); sub_002896A0(); /* call 0x002896A0 */

loc_0029677C: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002967F0
 * Original: 0x002967F0 - 0x0029680A (26 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002967F0(void)
{

loc_002967F0: ;
    SET_LO8(ecx, MEM8(esp + 4));
    MEM8(esi + eax + 0x227F) = LO8(ecx);
    ecx = esi;
    SET_LO8(edx, 1);
    SET_LO8(edx, LO8(edx) << LO8(ecx));
    MEM8(eax + 0xBD43) = MEM8(eax + 0xBD43) | LO8(edx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00296810
 * Original: 0x00296810 - 0x00296840 (48 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296810(void)
{
    int _flags = 0; /* fallback flag var */

loc_00296810: ;
    ecx = (uint32_t)(int32_t)SMEM8(ecx + eax + 0x8B);
    if (TEST_S(ecx, ecx)) goto loc_0029683D; /* jl: less (signed <) */

loc_0029681C: ;
    if (CMP_GE(ecx, 0x10)) goto loc_0029683D; /* jge: greater or equal (signed >=) */

loc_00296821: ;
    edx = (int32_t)MEMF(0x849C30); /* cvttss2si */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2C);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x7762A8);
    SET_LO8(eax, 0); /* xor self */
    (void)0; /* cmp esi, edx - flags set for next jcc */
    POP32(esp, esi);
    if (CMP_G(esi, edx)) goto loc_0029683F; /* jg: greater (signed >) */

loc_0029683A: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_0029683D: ;
    SET_LO8(eax, 0); /* xor self */

loc_0029683F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00296840
 * Original: 0x00296840 - 0x002968A6 (102 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296840(void)
{
    int _flags = 0; /* fallback flag var */

loc_00296840: ;
    esp = esp - 0x128;
    MEM8(esi + 0xBD48) = 1;
    PUSH32(esp, 0); sub_004A1314(); /* call 0x004A1314 */

loc_00296852: ;
    PUSH32(esp, 0x6055D0);
    PUSH32(esp, 0x780AB8);
    PUSH32(esp, 0x5AC8A0);
    MEM32(esi + 0xBD44) = eax;
    eax = esp + 0x30;
    PUSH32(esp, 0x104);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_00296876: ;
    esp = esp + 0x14;
    ecx = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    MEM8(esp + 0x133) = 0;
    PUSH32(esp, 0); sub_0042D1FA(); /* call 0x0042D1FA */

loc_00296891: ;
    if (TEST_Z(eax, eax)) { sub_002968A6(); return; } /* je: equal / zero */

loc_00296895: ;
    MEM32(esi + 0xBD44) = 2;
    esp = esp + 0x128;
    esp += 4; return; /* ret */

}

/**
 * sub_002968D0
 * Original: 0x002968D0 - 0x0029698A (186 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002968D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002968D0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    eax = esi + 0x2CB6;
    ecx = 0xF;
    ebx = 0; /* xor self */
    edx = 0x605668;

loc_002968E5: ;
    MEM8(eax + -1) = LO8(ebx);
    MEM8(eax) = LO8(ebx);
    MEM32(eax + 2) = ebx;
    MEM32(eax + 6) = ebx;
    ebp = eax + 0xE;
    MEM32(eax + 0xA) = edx;
    edi = edi | 0xFFFFFFFFu;
    MEM32(ebp) = edi;
    eax = eax + 0xA50;
    ecx--;
    MEM32(ebp + 4) = edi;
    if ((ecx != 0)) goto loc_002968E5; /* jne: not equal / not zero */

loc_00296907: ;
    PUSH32(esp, 0); sub_00287A70(); /* call 0x00287A70 */

loc_0029690C: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(esi + 0xBDE4) = eax;
    MEM32(esi + 0xBDE8) = ebx;
    eax = 0xFFFFFFFEu;
    MEM32(esi + 0xBD44) = ebx;
    MEM8(esi + 0x219) = LO8(ebx);
    MEM32(esi + 0xBDEC) = ebx;
    MEM32(esi + 0xBDF0) = eax;
    MEM32(esi + 0xBDF8) = eax;
    MEM32(esi + 0xBDF4) = eax;
    MEM32(esi + 0xBDFC) = eax;
    POP32(esp, edi);
    POP32(esp, ebp);
    MEM8(esi + 0xBE0C) = LO8(ebx);
    MEM32(esi + 0xC034) = ebx;
    MEM32(esi + 0xC02C) = ebx;
    MEM32(esi + 0xC020) = ebx;
    MEM32(esi + 0xC030) = ebx;
    MEM32(esi + 0xC028) = ebx;
    MEM8(esi + 0xBD4A) = LO8(ebx);
    MEMF(esi + 0xBE10) = xmm0; /* movss */
    MEMF(esi + 0xC024) = xmm0; /* movss */
    eax = esi;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00296990
 * Original: 0x00296990 - 0x002969A0 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296990(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296990: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    if (CMP_NE(ebp, 1)) { sub_002969A0(); return; } /* jne: not equal / not zero */

loc_0029699A: ;
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00296A30
 * Original: 0x00296A30 - 0x00296A5F (47 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296A30(void)
{
    int _flags = 0; /* fallback flag var */

loc_00296A30: ;
    edx = MEM32(ecx + 0xBD44);
    eax = 0; /* xor self */
    (void)0; /* cmp edx, esi - flags set for next jcc */
    edx = (uint32_t)(int32_t)SMEM8(ecx + 0x2281);
    SET_LO8(eax, (CMP_EQ(edx, esi)) ? 1 : 0); /* sete */
    if (CMP_LE(edx & edx, 0)) goto loc_00296A5E; /* jle: less or equal (signed <=) */

loc_00296A48: ;
    ecx = ecx + 0x2C5C;
    edi = edi;

loc_00296A50: ;
    if (CMP_NE(MEM32(ecx), esi)) goto loc_00296A55; /* jne: not equal / not zero */

loc_00296A54: ;
    eax++;

loc_00296A55: ;
    ecx = ecx + 0xA50;
    edx--;
    if ((edx != 0)) goto loc_00296A50; /* jne: not equal / not zero */

loc_00296A5E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00296A60
 * Original: 0x00296A60 - 0x00296D44 (740 bytes, 224 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296A60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296A60: ;
    edx = MEM32(esp + 4);
    eax = ZX8(MEM8(edx + 0xBD40));
    esp = esp - 0x14;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    ecx = 0; /* xor self */
    if (TEST_Z(LO8(eax), 1)) goto loc_00296A7C; /* je: equal / zero */

loc_00296A77: ;
    ecx = 1;

loc_00296A7C: ;
    if (TEST_Z(LO8(eax), 2)) goto loc_00296A81; /* je: equal / zero */

loc_00296A80: ;
    ecx++;

loc_00296A81: ;
    if (CMP_EQ(ecx, ebx)) goto loc_00296D3D; /* je: equal / zero */

loc_00296A89: ;
    SET_LO8(eax, MEM8(edx + 0xBD49));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, esi);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00296ACC; /* je: equal / zero */

loc_00296A94: ;
    SET_LO8(ecx, MEM8(edx + 0x2281));
    eax = 0; /* xor self */
    if (CMP_LE(LO8(ecx) & LO8(ecx), 0)) goto loc_00296AC5; /* jle: less or equal (signed <=) */

loc_00296AA0: ;
    ecx = edx + 0x2A08;
    goto loc_00296AB0;

    /* nop */
    /* nop */

loc_00296AB0: ;
    MEM8(ecx) = 1;
    esi = (uint32_t)(int32_t)SMEM8(edx + 0x2281);
    eax++;
    ecx = ecx + 0xA50;
    if (CMP_L(eax, esi)) goto loc_00296AB0; /* jl: less (signed <) */

loc_00296AC5: ;
    MEM8(edx + 0xBD49) = 0;

loc_00296ACC: ;
    if (CMP_EQ(MEM32(edx + 0x10C4), 2)) goto loc_00296AE2; /* je: equal / zero */

loc_00296AD5: ;
    if (CMP_EQ(MEM32(0x75864C), 0xFFFFFFFFu)) goto loc_00296D3C; /* je: equal / zero */

loc_00296AE2: ;
    SET_LO8(eax, MEM8(edx + 0x2281));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(esp + 0x18) = ebx;
    if (CMP_LE(LO8(eax) & LO8(eax), 0)) goto loc_00296D3C; /* jle: less or equal (signed <=) */

loc_00296AF4: ;
    PUSH32(esp, ebp);
    ebp = edx + 0x29E0;
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = ebp;

loc_00296B00: ;
    SET_LO8(eax, MEM8(ebp + 0x28));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00296D18; /* je: equal / zero */

loc_00296B0B: ;
    eax = ZX8(MEM8(ebp));
    ecx = 0; /* xor self */
    if (TEST_Z(LO8(eax), 1)) goto loc_00296B1A; /* je: equal / zero */

loc_00296B15: ;
    ecx = 1;

loc_00296B1A: ;
    if (TEST_Z(LO8(eax), 2)) goto loc_00296B1F; /* je: equal / zero */

loc_00296B1E: ;
    ecx++;

loc_00296B1F: ;
    if (CMP_EQ(ecx, ebx)) goto loc_00296D18; /* je: equal / zero */

loc_00296B27: ;
    SET_LO8(eax, MEM8(ebp + 0x2D0));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00296B3F; /* jne: not equal / not zero */

loc_00296B31: ;
    SET_LO8(eax, MEM8(ebp + 0x2D1));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00296D18; /* je: equal / zero */

loc_00296B3F: ;
    if (CMP_NE(MEM32(0x84A19C), ebx)) goto loc_00296B4C; /* jne: not equal / not zero */

loc_00296B47: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_00296B4C: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (CMP_EQ(esi, ebx)) goto loc_00296B94; /* je: equal / zero */

loc_00296B72: ;
    if (CMP_B(MEM32(esi + 0x80), 0x44)) goto loc_00296B94; /* jb: below (unsigned <) */

loc_00296B7B: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00296B85: ;
    PUSH32(esp, 0x44);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00296B8D: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_00296BB5; /* jne: not equal / not zero */

loc_00296B94: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00296BA6: ;
    PUSH32(esp, 0x44);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00296BAE: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) goto loc_00296C05; /* je: equal / zero */

loc_00296BB5: ;
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
    MEM8(eax + 0x30) = 0;
    MEM16(eax + 0x32) = LO16(ebx);
    MEM32(eax) = 0x602470;
    ecx = eax + 0x3C;
    edx = 2;
    /* nop */

loc_00296BF0: ;
    MEM32(ecx + -8) = 1;
    MEM32(ecx) = ebx;
    ecx = ecx + 4;
    edx--;
    if ((edx != 0)) goto loc_00296BF0; /* jne: not equal / not zero */

loc_00296BFF: ;
    MEM32(esp + 0x10) = eax;
    goto loc_00296C09;

loc_00296C05: ;
    MEM32(esp + 0x10) = ebx;

loc_00296C09: ;
    esi = 0; /* xor self */
    ebp = ebp + 0x2C0;
    MEM32(esp + 0x18) = esi;
    MEM32(esp + 0x1C) = ebp;
    /* nop */

loc_00296C20: ;
    edi = MEM32(esp + 0x14);
    ecx = ebx;
    eax = 1;
    eax = eax << LO8(ecx);
    SET_LO8(ecx, MEM8(edi));
    if (TEST_Z(LO8(ecx), LO8(eax))) goto loc_00296CD4; /* je: equal / zero */

loc_00296C37: ;
    if (TEST_S(esi, esi)) goto loc_00296C53; /* jl: less (signed <) */

loc_00296C3B: ;
    if (CMP_GE(esi, 0x50)) goto loc_00296C53; /* jge: greater or equal (signed >=) */

loc_00296C40: ;
    SET_LO8(eax, MEM8(edi + ebx + 0x2D0));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00296C53; /* je: equal / zero */

loc_00296C4B: ;
    edi = MEM32(ebp);
    ebp = MEM32(ebp + 4);
    goto loc_00296C57;

loc_00296C53: ;
    edi = 0; /* xor self */
    ebp = 0; /* xor self */

loc_00296C57: ;
    edx = edi;
    esi = 0; /* xor self */
    edx = edx | ebp;
    if ((edx == 0)) goto loc_00296C81; /* je: equal / zero */

loc_00296C5F: ;
    eax = MEM32(esp + 0x28);
    if (CMP_EQ(MEM32(eax + 0x10C4), 2)) goto loc_00296C7C; /* je: equal / zero */

loc_00296C6C: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0); sub_004243B0(); /* call 0x004243B0 */

loc_00296C75: ;
    esp = esp + 8;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00296C81; /* jne: not equal / not zero */

loc_00296C7C: ;
    esi = 1;

loc_00296C81: ;
    eax = 0; /* xor self */
    edi = edi | ebp;
    if ((edi == 0)) goto loc_00296CBC; /* je: equal / zero */

loc_00296C87: ;
    eax = ebx;
    PUSH32(esp, 0); sub_00420110(); /* call 0x00420110 */

loc_00296C8E: ;
    if (TEST_NZ(eax, eax)) goto loc_00296C99; /* jne: not equal / not zero */

loc_00296C92: ;
    eax = 2;
    goto loc_00296CBC;

loc_00296C99: ;
    eax = MEM32(0x849E74);
    if (TEST_Z(eax, eax)) goto loc_00296CBA; /* je: equal / zero */

loc_00296CA2: ;
    ecx = MEM32(esp + 0x18);
    SET_LO8(edx, MEM8(ecx + eax + 0x3E));
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(LO8(edx), LO8(edx))) ? 1 : 0); /* setne */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00296CBA; /* je: equal / zero */

loc_00296CB3: ;
    eax = 1;
    goto loc_00296CBC;

loc_00296CBA: ;
    eax = 0; /* xor self */

loc_00296CBC: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x68), _icall_esp); /* indirect call */
    }

loc_00296CC8: ;
    ebp = MEM32(esp + 0x1C);
    esi = MEM32(esp + 0x18);
    edi = MEM32(esp + 0x14);

loc_00296CD4: ;
    esi = esi + 0x28;
    ebp = ebp + 8;
    ebx++;
    (void)0; /* cmp esi, 0x50 - flags set for next jcc */
    MEM32(esp + 0x1C) = ebp;
    MEM32(esp + 0x18) = esi;
    if (CMP_L(esi, 0x50)) goto loc_00296C20; /* jl: less (signed <) */

loc_00296CEC: ;
    esi = MEM32(esp + 0x10);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x1F4);
    PUSH32(esp, 0); sub_004168D0(); /* call 0x004168D0 */

loc_00296CFC: ;
    edx = MEM32(edi + 0x284);
    ecx = esi;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_00296D0A: ;
    edx = MEM32(esp + 0x28);
    ebp = MEM32(esp + 0x14);
    MEM8(edi + 0x28) = 0;
    ebx = 0; /* xor self */

loc_00296D18: ;
    eax = MEM32(esp + 0x20);
    ecx = (uint32_t)(int32_t)SMEM8(edx + 0x2281);
    eax++;
    ebp = ebp + 0xA50;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x14) = ebp;
    if (CMP_L(eax, ecx)) goto loc_00296B00; /* jl: less (signed <) */

loc_00296D3A: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_00296D3C: ;
    POP32(esp, esi);

loc_00296D3D: ;
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00296D50
 * Original: 0x00296D50 - 0x00296DDB (139 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296D50(void)
{
    int _flags = 0; /* fallback flag var */

loc_00296D50: ;
    SET_LO8(ecx, MEM8(0x876760));
    eax = MEM32(0x862CC0);
    PUSH32(esp, ebx);
    ebx = 1;
    if (TEST_NZ(LO8(ebx), LO8(ecx))) { sub_00296DDB(); return; } /* jne: not equal / not zero */

loc_00296D65: ;
    MEM32(0x876760) = MEM32(0x876760) | ebx;
    ecx = 0; /* xor self */
    MEM8(0x87675C) = LO8(ecx);
    MEM8(0x87675D) = LO8(ecx);
    MEM32(0x862CC4) = eax;
    SET_LO8(edx, MEM8(0x86E980));
    SET_LO8(ecx, MEM8(0x86E982));
    SET_LO8(eax, 0xFD);
    SET_LO8(edx, LO8(edx) | 2);
    SET_LO8(ecx, LO8(ecx) & LO8(eax));
    MEM8(0x86E980) = LO8(edx);
    SET_LO8(edx, MEM8(0x86E981));
    MEM8(0x86E982) = LO8(ecx);
    SET_LO8(ecx, MEM8(0x862CC8));
    SET_LO8(edx, LO8(edx) & LO8(eax));
    SET_LO8(ecx, LO8(ecx) | 2);
    MEM8(0x86E981) = LO8(edx);
    MEM8(0x862CC8) = LO8(ecx);
    MEM8(0x862E58) = LO8(ebx);
    PUSH32(esp, 0); sub_00289450(); /* call 0x00289450 */

loc_00296DC5: ;
    MEM8(0x862CCA) = LO8(eax);
    (void)0; /* cmp MEM8(0x6BCFEC), LO8(ebx) - flags set for next jcc */
    POP32(esp, ebx);
    if (CMP_NE(MEM8(0x6BCFEC), LO8(ebx))) goto loc_00296DDA; /* jne: not equal / not zero */

loc_00296DD3: ;
    MEM8(0x6BCFEC) = 2;

loc_00296DDA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00296E10
 * Original: 0x00296E10 - 0x00296E52 (66 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296E10(void)
{
    int _flags = 0; /* fallback flag var */

loc_00296E10: ;
    SET_LO8(ecx, MEM8(0x86E980));
    SET_LO8(eax, 0xFD);
    SET_LO8(ecx, LO8(ecx) & LO8(eax));
    MEM8(0x86E980) = LO8(ecx);
    MEM8(0x86E982) = MEM8(0x86E982) & LO8(eax);
    MEM8(0x86E981) = MEM8(0x86E981) & LO8(eax);
    SET_LO8(ecx, MEM8(0x862CC8));
    SET_LO8(ecx, LO8(ecx) & LO8(eax));
    (void)0; /* cmp MEM8(0x6BCFEC), 2 - flags set for next jcc */
    MEM8(0x862E58) = 0;
    MEM8(0x862CC8) = LO8(ecx);
    if (CMP_NE(MEM8(0x6BCFEC), 2)) goto loc_00296E51; /* jne: not equal / not zero */

loc_00296E4A: ;
    MEM8(0x6BCFEC) = 1;

loc_00296E51: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00296E60
 * Original: 0x00296E60 - 0x00296E81 (33 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296E60(void)
{
    int _flags = 0; /* fallback flag var */

loc_00296E60: ;
    if (CMP_EQ(MEM32(0x863D04), 1)) goto loc_00296E7A; /* je: equal / zero */

loc_00296E69: ;
    eax = MEM32(esp + 4);
    SET_LO16(eax, MEM16(eax + 0xBD60));
    if (CMP_NE(LO16(eax), 0xFFFE)) goto loc_00296E7E; /* jne: not equal / not zero */

loc_00296E7A: ;
    SET_LO16(eax, LO16(eax) | 0xFFFF);

loc_00296E7E: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00296E90
 * Original: 0x00296E90 - 0x00296EAD (29 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296E90(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296E90: ;
    esp = esp - 0x4C;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x58);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = ebp + 0xBDF8;
    ecx = 2;
    edi = 0xFFFFFFFEu;
    g_seh_ebp = ebp; sub_00296EB0(); return; /* tail jmp 0x00296EB0 */

}

/**
 * sub_00297500
 * Original: 0x00297500 - 0x0029756D (109 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297500(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00297500: ;
    esp = esp - 0x100;
    PUSH32(esp, esi);
    esi = eax;
    SET_LO8(eax, MEM8(esi + 0xBE0C));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00297565; /* jne: not equal / not zero */

loc_00297513: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x605578;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_00297526: ;
    ebx = eax;
    PUSH32(esp, 0); sub_0027A1F0(); /* call 0x0027A1F0 */

loc_0029752D: ;
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, 0x80);
    MEM8(esi + 0xBE0C) = 1;
    MEMF(esi + 0xBE10) = xmm0; /* movss */
    PUSH32(esp, edi);
    esi = esi + 0xBE14;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0046FCD6(); /* call 0x0046FCD6 */

loc_00297551: ;
    PUSH32(esp, edi);
    eax = esp + 0x24;
    PUSH32(esp, 0x5D718C);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046EC2D(); /* call 0x0046EC2D */

loc_00297561: ;
    esp = esp + 0x24;
    POP32(esp, ebx);

loc_00297565: ;
    POP32(esp, esi);
    esp = esp + 0x100;
    esp += 4; return; /* ret */

}

/**
 * sub_00297570
 * Original: 0x00297570 - 0x00297594 (36 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297570(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00297570: ;
    SET_LO8(ecx, MEM8(eax + 0xBE0C));
    if (TEST_Z(LO8(ecx), LO8(ecx))) { sub_00297594(); return; } /* je: equal / zero */

loc_0029757A: ;
    xmm0 = MEMF(eax + 0xBE10); /* movss */
    /* comiss xmm0, MEMF(0x648D1C) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x648D1C))) goto loc_00297591; /* jbe: below or equal (unsigned <=) */

loc_0029758B: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_00297591: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_002975A0
 * Original: 0x002975A0 - 0x002975C2 (34 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002975A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002975A0: ;
    if (CMP_EQ(MEM32(0x863D04), 1)) { sub_002975C2(); return; } /* je: equal / zero */

loc_002975A9: ;
    eax = MEM32(ecx + 8);
    SET_LO16(eax, MEM16(eax + 0xBD60));
    if (CMP_EQ(LO16(eax), 0xFFFE)) { sub_002975C2(); return; } /* je: equal / zero */

loc_002975B9: ;
    if (CMP_EQ(LO16(eax), 0xFFFF)) { sub_002975C2(); return; } /* je: equal / zero */

loc_002975BF: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_002975D0
 * Original: 0x002975D0 - 0x00297624 (84 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002975D0(void)
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

loc_002975D0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = esi + 0xBF1E;
    MEM16(ebp) = 0;
    eax = MEM32(0x863D04);
    (void)0; /* cmp eax, 2 - flags set for next jcc */
    SET_LO8(ebx, 1);
    if (CMP_EQ(eax, 2)) goto loc_002975F0; /* je: equal / zero */

loc_002975EB: ;
    if (CMP_NE(eax, 3)) goto loc_00297602; /* jne: not equal / not zero */

loc_002975F0: ;
    if (CMP_NE(MEM32(0x863D08), 3)) goto loc_00297602; /* jne: not equal / not zero */

loc_002975F9: ;
    SET_LO8(eax, MEM8(0x864EC1));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00297604; /* jne: not equal / not zero */

loc_00297602: ;
    SET_LO8(ebx, 0); /* xor self */

loc_00297604: ;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00297609: ;
    MEMF(esp + 8) = (float)fp_top(); fp_popp(); /* fstp */
    if (TEST_NZ(LO8(ebx), LO8(ebx))) { sub_00297624(); return; } /* jne: not equal / not zero */

loc_00297611: ;
    xmm0 = MEMF(esp + 8); /* movss */
    MEMF(esi + 0xBF14) = xmm0; /* movss */
    g_seh_ebp = ebp; sub_002976D6(); return; /* tail jmp 0x002976D6 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00297710
 * Original: 0x00297710 - 0x0029787B (363 bytes, 97 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297710(void)
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

loc_00297710: ;
    eax = MEM32(0x849E54);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = 2;
    (void)0; /* cmp eax, edi - flags set for next jcc */
    eax = MEM32(esi + 0xC020);
    if (CMP_EQ(eax, edi)) goto loc_0029778C; /* je: equal / zero */

loc_00297726: ;
    if (CMP_A(eax, 3)) goto loc_00297878; /* ja: above (unsigned >) */

loc_0029772F: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x29787C); /* switch: 4 entries, 4 targets */
    if (_jt == 0x00297736u) goto loc_00297736;
    if (_jt == 0x00297762u) goto loc_00297762;
    if (_jt == 0x0029777Fu) goto loc_0029777F;
    if (_jt == 0x00297878u) goto loc_00297878;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00297736: ;
    eax = MEM32(esi + 0xC028);
    ebx = 0; /* xor self */
    if (CMP_EQ(eax, ebx)) goto loc_0029774E; /* je: equal / zero */

loc_00297742: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0048D6FF(); /* call 0x0048D6FF */

loc_00297748: ;
    MEM32(esi + 0xC028) = ebx;

loc_0029774E: ;
    xmm0 = 0.0f; /* xorps self = zero */
    POP32(esp, edi);
    MEM32(esi + 0xC020) = ebx;
    MEMF(esi + 0xC024) = xmm0; /* movss */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00297762: ;
    ebx = 0; /* xor self */
    POP32(esp, edi);
    MEM32(esi + 0xC02C) = ebx;
    MEM32(esi + 0xC034) = ebx;
    MEM32(esi + 0xC030) = ebx;
    MEM32(esi + 0xC020) = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0029777F: ;
    POP32(esp, edi);
    MEM32(esi + 0xC020) = 0;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0029778C: ;
    ebx = 0; /* xor self */
    eax = eax - ebx;
    if ((eax == 0)) goto loc_00297833; /* je: equal / zero */

loc_00297796: ;
    eax--;
    if ((eax != 0)) goto loc_00297878; /* jne: not equal / not zero */

loc_0029779D: ;
    eax = MEM32(esi + 0xC028);
    if (CMP_BE(MEM32(eax), ebx)) goto loc_00297878; /* jbe: below or equal (unsigned <=) */

loc_002977AB: ;
    if (TEST_Z(MEM8(eax + 8), 1)) goto loc_00297878; /* je: equal / zero */

loc_002977B5: ;
    ecx = MEM32(eax + 0x1C);
    MEM32(esi + 0xC034) = ecx;
    edx = ZX16(MEM16(eax + 0x16));
    MEM32(esi + 0xC02C) = edx;
    ecx = MEM32(eax + 0x18);
    MEM32(esi + 0xC030) = ecx;
    ecx = MEM32(esi + 0xC034);
    if (CMP_GE(ecx, 1)) goto loc_002977E1; /* jge: greater or equal (signed >=) */

loc_002977DC: ;
    ecx = 1;

loc_002977E1: ;
    MEM32(esi + 0xC034) = ecx;
    ecx = MEM32(esi + 0xC02C);
    if (CMP_GE(ecx, 1)) goto loc_002977F7; /* jge: greater or equal (signed >=) */

loc_002977F2: ;
    ecx = 1;

loc_002977F7: ;
    MEM32(esi + 0xC02C) = ecx;
    ecx = MEM32(esi + 0xC030);
    if (CMP_GE(ecx, 1)) goto loc_0029780D; /* jge: greater or equal (signed >=) */

loc_00297808: ;
    ecx = 1;

loc_0029780D: ;
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, eax);
    MEM32(esi + 0xC030) = ecx;
    MEMF(esi + 0xC024) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0048D6FF(); /* call 0x0048D6FF */

loc_00297824: ;
    MEM32(esi + 0xC020) = edi;
    POP32(esp, edi);
    MEM32(esi + 0xC028) = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00297833: ;
    edi = esi + 0xC028;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0048D8BE(); /* call 0x0048D8BE */

loc_00297841: ;
    if (TEST_NZ(eax, eax)) goto loc_00297861; /* jne: not equal / not zero */

loc_00297845: ;
    if (CMP_EQ(MEM32(edi), ebx)) goto loc_00297861; /* je: equal / zero */

loc_00297849: ;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0029784E: ;
    MEMF(esi + 0xC024) = (float)fp_top(); fp_popp(); /* fstp */
    POP32(esp, edi);
    MEM32(esi + 0xC020) = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00297861: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(esi + 0xC020) = 3;
    MEM32(edi) = ebx;
    MEMF(esi + 0xC024) = xmm0; /* movss */

loc_00297878: ;
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
 * sub_00297890
 * Original: 0x00297890 - 0x002978A8 (24 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297890(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00297890: ;
    eax = MEM32(ecx + 0xC020);
    if (CMP_EQ(eax, 2)) goto loc_002978A0; /* je: equal / zero */

loc_0029789B: ;
    if (CMP_NE(eax, 3)) { sub_002978A8(); return; } /* jne: not equal / not zero */

loc_002978A0: ;
    ecx = MEM32(ecx + 0xC030);
    g_seh_ebp = ebp; sub_002978AD(); return; /* tail jmp 0x002978AD */

}

/**
 * sub_002978E0
 * Original: 0x002978E0 - 0x0029790B (43 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002978E0(void)
{
    int _flags = 0; /* fallback flag var */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_002978E0: ;
    if (CMP_NE(MEM32(esi + 0x10C8), eax)) goto loc_002978F2; /* jne: not equal / not zero */

loc_002978E8: ;
    SET_LO8(ecx, MEM8(0x75E9A1));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0029790A; /* je: equal / zero */

loc_002978F2: ;
    MEM8(0x75E9A1) = 0;
    MEM32(esi + 0x10C8) = eax;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00297904: ;
    MEMF(esi + 0x10CC) = (float)fp_top(); fp_popp(); /* fstp */

loc_0029790A: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00297910
 * Original: 0x00297910 - 0x00297A8A (378 bytes, 114 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297910(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00297910: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    SET_LO8(eax, MEM8(esi + 0xBD4A));
    ebx = 0; /* xor self */
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_00297A82; /* je: equal / zero */

loc_00297929: ;
    eax = MEM32(esi + 0x90);
    if (CMP_EQ(eax, ebx)) goto loc_00297A7C; /* je: equal / zero */

loc_00297937: ;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003522E0(); /* call 0x003522E0 */

loc_0029793E: ;
    ebp = eax;
    if (CMP_GE(ebp, ebx)) goto loc_00297948; /* jge: greater or equal (signed >=) */

loc_00297944: ;
    ebp = 0; /* xor self */
    goto loc_00297952;

loc_00297948: ;
    if (CMP_LE(ebp, 0x18)) goto loc_00297952; /* jle: less or equal (signed <=) */

loc_0029794D: ;
    ebp = 0x18;

loc_00297952: ;
    (void)0; /* cmp MEM8(0x864EC1), LO8(ebx) - flags set for next jcc */
    MEM32(esp + 0x10) = ebx;
    if (CMP_LE(MEM8(0x864EC1), LO8(ebx))) goto loc_00297A7B; /* jle: less or equal (signed <=) */

loc_00297962: ;
    MEM32(esp + 0xC) = 0x8658A4;
    PUSH32(esp, edi);
    goto loc_00297970;

    /* nop */

loc_00297970: ;
    if (CMP_NE(MEM32(0x84A19C), ebx)) goto loc_0029797D; /* jne: not equal / not zero */

loc_00297978: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0029797D: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (CMP_EQ(esi, ebx)) goto loc_002979C7; /* je: equal / zero */

loc_002979A3: ;
    if (CMP_B(MEM32(esi + 0x80), 0x38)) goto loc_002979C7; /* jb: below (unsigned <) */

loc_002979AC: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002979B6: ;
    PUSH32(esp, 0x38);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002979BE: ;
    esi = eax;
    esp = esp + 8;
    if (CMP_NE(esi, ebx)) goto loc_002979EA; /* jne: not equal / not zero */

loc_002979C7: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002979D9: ;
    PUSH32(esp, 0x38);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002979E1: ;
    esi = eax;
    esp = esp + 8;
    if (CMP_EQ(esi, ebx)) goto loc_00297A50; /* je: equal / zero */

loc_002979EA: ;
    (void)0; /* cmp ebp, ebx - flags set for next jcc */
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
    MEM32(esi) = 0x6059C0;
    MEM32(esi + 0x34) = ebx;
    MEM32(esi + 0x34) = ebp;
    if (CMP_GE(ebp, ebx)) goto loc_00297A27; /* jge: greater or equal (signed >=) */

loc_00297A23: ;
    eax = 0; /* xor self */
    goto loc_00297A33;

loc_00297A27: ;
    (void)0; /* cmp ebp, 0x18 - flags set for next jcc */
    eax = 0x18;
    if (CMP_G(ebp, 0x18)) goto loc_00297A33; /* jg: greater (signed >) */

loc_00297A31: ;
    eax = ebp;

loc_00297A33: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x1F4);
    MEM32(esi + 0x34) = eax;
    PUSH32(esp, 0); sub_004168D0(); /* call 0x004168D0 */

loc_00297A42: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(ecx);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_00297A50: ;
    eax = MEM32(esp + 0x14);
    esi = MEM32(esp + 0x10);
    ecx = (uint32_t)(int32_t)SMEM8(0x864EC1);
    eax++;
    esi = esi + 0xA50;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x10) = esi;
    if (CMP_L(eax, ecx)) goto loc_00297970; /* jl: less (signed <) */

loc_00297A76: ;
    esi = MEM32(esp + 0x1C);
    POP32(esp, edi);

loc_00297A7B: ;
    POP32(esp, ebp);

loc_00297A7C: ;
    MEM8(esi + 0xBD4A) = LO8(ebx);

loc_00297A82: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00297A90
 * Original: 0x00297A90 - 0x00297AFB (107 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297A90(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00297A90: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x862C40);
    PUSH32(esp, 0); sub_00296A60(); /* call 0x00296A60 */

loc_00297AA1: ;
    PUSH32(esp, 0x86E9A4);
    PUSH32(esp, 0); sub_002941F0(); /* call 0x002941F0 */

loc_00297AAB: ;
    esi = 0x862C40;
    PUSH32(esp, 0); sub_00297710(); /* call 0x00297710 */

loc_00297AB5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00297910(); /* call 0x00297910 */

loc_00297ABB: ;
    SET_LO8(eax, MEM8(ebp + 0x2281));
    edi = 0; /* xor self */
    if (CMP_LE(LO8(eax) & LO8(eax), 0)) goto loc_00297AF5; /* jle: less or equal (signed <=) */

loc_00297AC7: ;
    esi = 0x864EC8;
    PUSH32(esp, ebx);
    /* nop */

loc_00297AD0: ;
    if (CMP_NE(MEM8(esi), 0)) goto loc_00297AE2; /* jne: not equal / not zero */

loc_00297AD5: ;
    PUSH32(esp, 0x605750);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    PUSH32(esp, 0); sub_0029A610(); /* call 0x0029A610 */

loc_00297AE2: ;
    eax = (uint32_t)(int32_t)SMEM8(ebp + 0x2281);
    edi++;
    esi = esi + 0xA50;
    if (CMP_L(edi, eax)) goto loc_00297AD0; /* jl: less (signed <) */

loc_00297AF4: ;
    POP32(esp, ebx);

loc_00297AF5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00297B00
 * Original: 0x00297B00 - 0x00297BAA (170 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297B00(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00297B00: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 4);
    eax = MEM32(esi + 4);
    SET_LO8(edx, MEM8(eax + 0xF));
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    SET_LO8(ecx, 1);
    MEM8(esp + 8) = LO8(ecx);
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_00297B3E; /* jne: not equal / not zero */

loc_00297B1A: ;
    SET_LO16(edx, MEM16(ebx));
    /* nop */

loc_00297B20: ;
    (void)0; /* cmp LO16(edx), MEM16(eax + 0xC) - flags set for next jcc */
    esi = eax;
    SET_LO8(ecx, (CMP_L(LO16(edx), MEM16(eax + 0xC))) ? 1 : 0); /* setl */
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    MEM8(esp + 8) = LO8(ecx);
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00297B35; /* je: equal / zero */

loc_00297B31: ;
    eax = MEM32(eax);
    goto loc_00297B38;

loc_00297B35: ;
    eax = MEM32(eax + 8);

loc_00297B38: ;
    if (CMP_EQ(MEM8(eax + 0xF), 0)) goto loc_00297B20; /* je: equal / zero */

loc_00297B3E: ;
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    eax = esi;
    MEM32(esp + 0x10) = eax;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00297B7D; /* je: equal / zero */

loc_00297B48: ;
    eax = MEM32(ebp + 4);
    if (CMP_NE(esi, MEM32(eax))) goto loc_00297B70; /* jne: not equal / not zero */

loc_00297B4F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    eax = esi;
    ecx = ebp;
    PUSH32(esp, 0); sub_00297F20(); /* call 0x00297F20 */

loc_00297B60: ;
    edx = MEM32(eax);
    POP32(esp, esi);
    MEM32(edi) = edx;
    MEM8(edi + 4) = 1;
    eax = edi;
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_00297B70: ;
    edx = esp + 0x10;
    PUSH32(esp, 0); sub_002989C0(); /* call 0x002989C0 */

loc_00297B79: ;
    eax = MEM32(esp + 0x10);

loc_00297B7D: ;
    SET_LO16(ecx, MEM16(eax + 0xC));
    if (CMP_GE(LO16(ecx), MEM16(ebx))) { sub_00297BAA(); return; } /* jge: greater or equal (signed >=) */

loc_00297B86: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    eax = esi;
    ecx = ebp;
    PUSH32(esp, 0); sub_00297F20(); /* call 0x00297F20 */

loc_00297B9A: ;
    ecx = MEM32(eax);
    POP32(esp, esi);
    MEM32(edi) = ecx;
    MEM8(edi + 4) = 1;
    eax = edi;
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00297BC0
 * Original: 0x00297BC0 - 0x00297BFD (61 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297BC0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00297BC0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    ebx = ecx;
    PUSH32(esp, edi);
    eax = ebx;
    PUSH32(esp, 0); sub_00298880(); /* call 0x00298880 */

loc_00297BD0: ;
    esi = eax;
    PUSH32(esp, edi);
    eax = ebx;
    PUSH32(esp, 0); sub_002988D0(); /* call 0x002988D0 */

loc_00297BDA: ;
    edi = eax;
    ebx = 0; /* xor self */
    (void)0; /* cmp esi, edi - flags set for next jcc */
    MEM32(esp + 0xC) = esi;
    if (CMP_EQ(esi, edi)) goto loc_00297BF6; /* je: equal / zero */

loc_00297BE6: ;
    edx = esp + 0xC;
    ebx++;
    PUSH32(esp, 0); sub_002984C0(); /* call 0x002984C0 */

loc_00297BF0: ;
    if (CMP_NE(MEM32(esp + 0xC), edi)) goto loc_00297BE6; /* jne: not equal / not zero */

loc_00297BF6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00297C00
 * Original: 0x00297C00 - 0x00297E22 (546 bytes, 175 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297C00(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00297C00: ;
    esp = esp - 0x148;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x150);
    if (CMP_B(MEM32(ebp + 8), 2)) goto loc_00297E18; /* jb: below (unsigned <) */

loc_00297C18: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00061AB0(); /* call 0x00061AB0 */

loc_00297C20: ;
    ebx = 0; /* xor self */
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = ebx;
    esi = esp + 0x24;
    edi = 0x1A;

loc_00297C33: ;
    PUSH32(esp, 0); sub_00061AB0(); /* call 0x00061AB0 */

loc_00297C38: ;
    MEM32(esi + -4) = eax;
    MEM32(esi) = ebx;
    esi = esi + 0xC;
    edi--;
    if ((edi != 0)) goto loc_00297C33; /* jne: not equal / not zero */

loc_00297C43: ;
    eax = MEM32(ebp + 8);
    if (TEST_Z(eax, eax)) goto loc_00297D46; /* je: equal / zero */

loc_00297C4E: ;
    edi = edi;

loc_00297C50: ;
    eax = MEM32(ebp + 4);
    esi = MEM32(eax);
    (void)0; /* cmp esi, eax - flags set for next jcc */
    ecx = MEM32(esp + 0x14);
    edi = MEM32(ecx);
    if (CMP_EQ(esi, eax)) goto loc_00297CBA; /* je: equal / zero */

loc_00297C5F: ;
    eax = MEM32(esp + 0x15C);
    ebp = MEM32(esi);
    edx = esp + 0x10;
    if (CMP_NE(edx, eax)) goto loc_00297C7A; /* jne: not equal / not zero */

loc_00297C70: ;
    if (CMP_EQ(edi, esi)) goto loc_00297CB3; /* je: equal / zero */

loc_00297C74: ;
    if (CMP_EQ(edi, ebp)) goto loc_00297CB3; /* je: equal / zero */

loc_00297C78: ;
    goto loc_00297C92;

loc_00297C7A: ;
    ecx = 1;
    edx = esp + 0x10;
    PUSH32(esp, 0); sub_000632D0(); /* call 0x000632D0 */

loc_00297C88: ;
    eax = MEM32(esp + 0x15C);
    MEM32(eax + 8) = MEM32(eax + 8) - 1;

loc_00297C92: ;
    eax = MEM32(esi + 4);
    MEM32(eax) = ebp;
    ecx = MEM32(ebp + 4);
    MEM32(ecx) = edi;
    edx = MEM32(edi + 4);
    MEM32(edx) = esi;
    ecx = MEM32(ebp + 4);
    eax = MEM32(edi + 4);
    MEM32(edi + 4) = ecx;
    edx = MEM32(esi + 4);
    MEM32(ebp + 4) = edx;
    MEM32(esi + 4) = eax;

loc_00297CB3: ;
    ebp = MEM32(esp + 0x15C);

loc_00297CBA: ;
    edi = 0; /* xor self */
    if (CMP_BE(ebx & ebx, 0)) goto loc_00297D12; /* jbe: below or equal (unsigned <=) */

loc_00297CC0: ;
    esi = esp + 0x24;

loc_00297CC4: ;
    if (CMP_EQ(MEM32(esi), 0)) goto loc_00297CF9; /* je: equal / zero */

loc_00297CC9: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esi + -8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00298110(); /* call 0x00298110 */

loc_00297CD7: ;
    eax = MEM32(esi + -4);
    edx = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x18);
    MEM32(esi + -4) = edx;
    MEM32(esp + 0x14) = eax;
    eax = MEM32(esi);
    MEM32(esi) = ecx;
    edi++;
    esi = esi + 0xC;
    (void)0; /* cmp edi, ebx - flags set for next jcc */
    MEM32(esp + 0x18) = eax;
    if (CMP_B(edi, ebx)) goto loc_00297CC4; /* jb: below (unsigned <) */

loc_00297CF9: ;
    if (CMP_NE(edi, 0x19)) goto loc_00297D12; /* jne: not equal / not zero */

loc_00297CFE: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    eax = esp + 0x140;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00298110(); /* call 0x00298110 */

loc_00297D10: ;
    goto loc_00297D3B;

loc_00297D12: ;
    (void)0; /* cmp edi, ebx - flags set for next jcc */
    edx = MEM32(esp + 0x14);
    eax = edi + edi * 2;
    ecx = MEM32(esp + eax * 4 + 0x20);
    eax = esp + eax * 4 + 0x1C;
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x18);
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(eax + 8);
    MEM32(eax + 8) = edx;
    MEM32(esp + 0x18) = ecx;
    if (CMP_NE(edi, ebx)) goto loc_00297D3B; /* jne: not equal / not zero */

loc_00297D3A: ;
    ebx++;

loc_00297D3B: ;
    eax = MEM32(ebp + 8);
    if (TEST_NZ(eax, eax)) goto loc_00297C50; /* jne: not equal / not zero */

loc_00297D46: ;
    if (CMP_BE(ebx, 1)) goto loc_00297D62; /* jbe: below or equal (unsigned <=) */

loc_00297D4B: ;
    esi = esp + 0x28;
    edi = ebx + -1;

loc_00297D52: ;
    eax = esi + -12;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00298110(); /* call 0x00298110 */

loc_00297D5C: ;
    esi = esi + 0xC;
    edi--;
    if ((edi != 0)) goto loc_00297D52; /* jne: not equal / not zero */

loc_00297D62: ;
    ecx = MEM32(ebp + 4);
    eax = ebx + ebx * 2;
    edx = MEM32(esp + eax * 4 + 0x14);
    eax = esp + eax * 4 + 0x10;
    MEM32(ebp + 4) = edx;
    MEM32(eax + 4) = ecx;
    ecx = MEM32(ebp + 8);
    edx = MEM32(eax + 8);
    MEM32(ebp + 8) = edx;
    MEM32(eax + 8) = ecx;
    esi = esp + 0x158;
    ebx = 0x1A;
    edi = edi;

loc_00297D90: ;
    esi = esi - 0xC;
    edi = esi + -4;
    PUSH32(esp, 0); sub_00068410(); /* call 0x00068410 */

loc_00297D9B: ;
    edi = MEM32(esi);
    if (TEST_Z(edi, edi)) goto loc_00297DCE; /* je: equal / zero */

loc_00297DA1: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_00297DA7: ;
    if (TEST_NZ(eax, eax)) goto loc_00297DCE; /* jne: not equal / not zero */

loc_00297DAB: ;
    ebp = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    ebp++;
    edx--;
    PUSH32(esp, edi);
    MEM32(0x7FA490) = ebp;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_00297DCB: ;
    esp = esp + 4;

loc_00297DCE: ;
    ebx--;
    MEM32(esi) = 0;
    if ((ebx != 0)) goto loc_00297D90; /* jne: not equal / not zero */

loc_00297DD7: ;
    edi = esp + 0x10;
    PUSH32(esp, 0); sub_00068410(); /* call 0x00068410 */

loc_00297DE0: ;
    esi = MEM32(esp + 0x14);
    if (TEST_Z(esi, esi)) goto loc_00297E15; /* je: equal / zero */

loc_00297DE8: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_00297DEE: ;
    if (TEST_NZ(eax, eax)) goto loc_00297E15; /* jne: not equal / not zero */

loc_00297DF2: ;
    edi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    edi++;
    edx--;
    PUSH32(esp, esi);
    MEM32(0x7FA490) = edi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_00297E12: ;
    esp = esp + 4;

loc_00297E15: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00297E18: ;
    POP32(esp, ebp);
    esp = esp + 0x148;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00297E30
 * Original: 0x00297E30 - 0x00297EB4 (132 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297E30(void)
{
    int _flags = 0; /* fallback flag var */

loc_00297E30: ;
    PUSH32(esp, ebx);
    ebx = eax;
    (void)0; /* test MEM8(ebx + 0xC), 3 - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_NZ(MEM8(ebx + 0xC), 3)) goto loc_00297E51; /* jne: not equal / not zero */

loc_00297E3A: ;
    eax = MEM32(ebx + 0x10);
    ecx = MEM32(ebx + 8);
    eax = eax + 4;
    eax = eax >> 2;
    if (CMP_A(ecx, eax)) goto loc_00297E51; /* ja: above (unsigned >) */

loc_00297E4A: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0002F430(); /* call 0x0002F430 */

loc_00297E51: ;
    edi = MEM32(ebx + 0xC);
    if (TEST_NZ(edi, edi)) goto loc_00297E5E; /* jne: not equal / not zero */

loc_00297E58: ;
    edi = MEM32(ebx + 8);
    edi = edi << 2;

loc_00297E5E: ;
    ecx = MEM32(ebx + 4);
    edi--;
    PUSH32(esp, esi);
    esi = edi;
    esi = esi >> 2;
    if (CMP_NE(MEM32(ecx + esi * 4), 0)) goto loc_00297E8A; /* jne: not equal / not zero */

loc_00297E6E: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x461);
    PUSH32(esp, 0x606A34);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_00297E81: ;
    edx = MEM32(ebx + 4);
    esp = esp + 0x10;
    MEM32(edx + esi * 4) = eax;

loc_00297E8A: ;
    eax = MEM32(ebx + 4);
    edx = MEM32(eax + esi * 4);
    ecx = edi;
    ecx = ecx & 3;
    eax = edx + ecx * 4;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, esi);
    if (TEST_Z(eax, eax)) goto loc_00297EA5; /* je: equal / zero */

loc_00297E9D: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(ecx);
    MEM32(eax) = edx;

loc_00297EA5: ;
    eax = MEM32(ebx + 0x10);
    MEM32(ebx + 0xC) = edi;
    eax++;
    POP32(esp, edi);
    MEM32(ebx + 0x10) = eax;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00297EC0
 * Original: 0x00297EC0 - 0x00297F1D (93 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297EC0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00297EC0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    SET_LO8(eax, MEM8(edi + 0xF));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    ebx = ecx;
    esi = edi;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00297F17; /* jne: not equal / not zero */

loc_00297ED2: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0); sub_00297EC0(); /* call 0x00297EC0 */

loc_00297EDD: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    esi = MEM32(esi);
    if (TEST_Z(edi, edi)) goto loc_00297F0E; /* je: equal / zero */

loc_00297EE3: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_00297EE9: ;
    if (TEST_NZ(eax, eax)) goto loc_00297F0E; /* jne: not equal / not zero */

loc_00297EED: ;
    eax = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    eax++;
    edx--;
    PUSH32(esp, edi);
    MEM32(0x7FA490) = eax;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_00297F0B: ;
    esp = esp + 4;

loc_00297F0E: ;
    SET_LO8(eax, MEM8(esi + 0xF));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    edi = esi;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00297ED2; /* je: equal / zero */

loc_00297F17: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00297F20
 * Original: 0x00297F20 - 0x00297FD3 (179 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297F20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00297F20: ;
    esp = esp - 0x44;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = eax;
    if (CMP_B(MEM32(edi + 8), 0x7FFFFFFE)) goto loc_00297F9C; /* jb: below (unsigned <) */

loc_00297F32: ;
    PUSH32(esp, 0x13);
    edi = 0xF;
    esi = 0; /* xor self */
    PUSH32(esp, 0x5AC6C4);
    ecx = esp + 0x10;
    MEM32(esp + 0x28) = edi;
    MEM32(esp + 0x24) = esi;
    MEM8(esp + 0x14) = 0;
    PUSH32(esp, 0); sub_000143C0(); /* call 0x000143C0 */

loc_00297F56: ;
    ecx = esp + 0x24;
    PUSH32(esp, 0); sub_0046E531(); /* call 0x0046E531 */

loc_00297F5F: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x3C;
    MEM32(esp + 0x30) = 0x5AC69C;
    MEM32(esp + 0x54) = edi;
    MEM32(esp + 0x50) = esi;
    MEM8(esp + 0x40) = 0;
    PUSH32(esp, 0); sub_000144B0(); /* call 0x000144B0 */

loc_00297F85: ;
    PUSH32(esp, 0x64B640);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    MEM32(esp + 0x2C) = 0x5AC694;
    PUSH32(esp, 0); sub_004720B3(); /* call 0x004720B3 */

loc_00297F9C: ;
    edx = MEM32(esp + 0x58);
    eax = MEM32(edi + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00298420(); /* call 0x00298420 */

loc_00297FAF: ;
    ebx = MEM32(edi + 8);
    ecx = eax;
    eax = MEM32(edi + 4);
    ebx++;
    (void)0; /* cmp esi, eax - flags set for next jcc */
    MEM32(esp + 0x5C) = ecx;
    MEM32(edi + 8) = ebx;
    if (CMP_NE(esi, eax)) { sub_00297FD3(); return; } /* jne: not equal / not zero */

loc_00297FC3: ;
    MEM32(eax + 4) = ecx;
    eax = MEM32(edi + 4);
    MEM32(eax) = ecx;
    edx = MEM32(edi + 4);
    MEM32(edx + 8) = ecx;
    g_seh_ebp = ebp; sub_00297FF6(); return; /* tail jmp 0x00297FF6 */

}

/**
 * sub_002980D0
 * Original: 0x002980D0 - 0x0029810B (59 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002980D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002980D0: ;
    eax = MEM32(esp + 4);
    (void)0; /* cmp eax, MEM32(esi + 4) - flags set for next jcc */
    PUSH32(esp, ebx);
    ebx = MEM32(eax);
    if (CMP_EQ(eax, MEM32(esi + 4))) goto loc_00298103; /* je: equal / zero */

loc_002980DC: ;
    ecx = MEM32(eax + 4);
    edx = MEM32(eax);
    MEM32(ecx) = edx;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    MEM32(esp + 8) = eax;
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM32(ecx + 4) = edx;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_002980F9: ;
    eax = MEM32(esi + 8);
    esp = esp + 4;
    eax--;
    MEM32(esi + 8) = eax;

loc_00298103: ;
    MEM32(edi) = ebx;
    eax = edi;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00298110
 * Original: 0x00298110 - 0x002981AF (159 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00298110(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00298110: ;
    PUSH32(esp, ecx);
    edx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    if (CMP_EQ(ebp, edx)) goto loc_002981AA; /* je: equal / zero */

loc_00298122: ;
    eax = MEM32(edx + 4);
    ecx = MEM32(ebp + 4);
    PUSH32(esp, ebx);
    ebx = MEM32(eax);
    (void)0; /* cmp ebx, eax - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x1C) = ecx;
    if (CMP_EQ(ebx, eax)) goto loc_00298196; /* je: equal / zero */

loc_0029813B: ;
    goto loc_00298140;

    /* nop */

loc_00298140: ;
    if (CMP_EQ(esi, ecx)) goto loc_002981A7; /* je: equal / zero */

loc_00298144: ;
    edx = MEM32(esi + 8);
    if (CMP_GE(edx, MEM32(ebx + 8))) goto loc_0029818C; /* jge: greater or equal (signed >=) */

loc_0029814C: ;
    edx = MEM32(esp + 0x18);
    edi = MEM32(esi);
    ecx = 1;
    PUSH32(esp, 0); sub_000632D0(); /* call 0x000632D0 */

loc_0029815C: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;
    eax = MEM32(esi + 4);
    MEM32(eax) = edi;
    ecx = MEM32(edi + 4);
    MEM32(ecx) = ebx;
    edx = MEM32(ebx + 4);
    MEM32(edx) = esi;
    ecx = MEM32(edi + 4);
    eax = MEM32(ebx + 4);
    MEM32(ebx + 4) = ecx;
    edx = MEM32(esi + 4);
    ecx = MEM32(esp + 0x1C);
    MEM32(edi + 4) = edx;
    MEM32(esi + 4) = eax;
    eax = MEM32(esp + 0x10);
    esi = edi;
    goto loc_0029818E;

loc_0029818C: ;
    ebx = MEM32(ebx);

loc_0029818E: ;
    if (CMP_NE(ebx, eax)) goto loc_00298140; /* jne: not equal / not zero */

loc_00298192: ;
    edx = MEM32(esp + 0x18);

loc_00298196: ;
    if (CMP_EQ(esi, ecx)) goto loc_002981A7; /* je: equal / zero */

loc_0029819A: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    ecx = ebp;
    PUSH32(esp, 0); sub_00298520(); /* call 0x00298520 */

loc_002981A7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_002981AA: ;
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002981B0
 * Original: 0x002981B0 - 0x0029823E (142 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002981B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002981B0: ;
    PUSH32(esp, ecx);
    eax = MEM32(esi + 0x10);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    if (CMP_EQ(eax, ebp)) goto loc_002981D7; /* je: equal / zero */

loc_002981BB: ;
    goto loc_002981C0;

    /* nop */

loc_002981C0: ;
    eax = MEM32(esi + 0x10);
    if (CMP_EQ(eax, ebp)) goto loc_002981D2; /* je: equal / zero */

loc_002981C7: ;
    eax--;
    (void)0; /* cmp eax, ebp - flags set for next jcc */
    MEM32(esi + 0x10) = eax;
    if (CMP_NE(eax, ebp)) goto loc_002981D2; /* jne: not equal / not zero */

loc_002981CF: ;
    MEM32(esi + 0xC) = ebp;

loc_002981D2: ;
    if (CMP_NE(MEM32(esi + 0x10), ebp)) goto loc_002981C0; /* jne: not equal / not zero */

loc_002981D7: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 8);
    if (CMP_BE(ebx, ebp)) goto loc_0029821C; /* jbe: below or equal (unsigned <=) */

loc_002981DF: ;
    PUSH32(esp, edi);

loc_002981E0: ;
    eax = MEM32(esi + 4);
    edi = MEM32(eax + ebx * 4 + -4);
    ebx--;
    if (CMP_EQ(edi, ebp)) goto loc_00298217; /* je: equal / zero */

loc_002981EC: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_002981F2: ;
    if (TEST_NZ(eax, eax)) goto loc_00298217; /* jne: not equal / not zero */

loc_002981F6: ;
    eax = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    eax++;
    edx--;
    PUSH32(esp, edi);
    MEM32(0x7FA490) = eax;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_00298214: ;
    esp = esp + 4;

loc_00298217: ;
    if (CMP_A(ebx, ebp)) goto loc_002981E0; /* ja: above (unsigned >) */

loc_0029821B: ;
    POP32(esp, edi);

loc_0029821C: ;
    eax = MEM32(esi + 4);
    (void)0; /* cmp eax, ebp - flags set for next jcc */
    POP32(esp, ebx);
    if (CMP_EQ(eax, ebp)) goto loc_00298235; /* je: equal / zero */

loc_00298224: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    MEM32(esp + 8) = eax;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00298232: ;
    esp = esp + 4;

loc_00298235: ;
    MEM32(esi + 8) = ebp;
    MEM32(esi + 4) = ebp;
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00298240
 * Original: 0x00298240 - 0x002982BA (122 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00298240(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00298240: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47F530);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    esi = ecx;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x461);
    PUSH32(esp, 0x606A34);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_00298276: ;
    esp = esp + 0x10;
    MEM32(ebp + -20) = eax;
    MEM32(ebp + -4) = 0;
    MEM32(ebp + -28) = eax;
    if (TEST_Z(eax, eax)) goto loc_002982A0; /* je: equal / zero */

loc_0029828A: ;
    ecx = MEM32(ebp + 8);
    MEM32(eax) = ecx;
    edx = MEM32(ebp + 0xC);
    MEM32(eax + 4) = edx;
    ecx = MEM32(esi);
    MEM32(eax + 8) = ecx;
    edx = MEM32(esi + 4);
    MEM32(eax + 0xC) = edx;

loc_002982A0: ;
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    ecx = MEM32(ebp + -12);
    MEM32(0) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002982E0
 * Original: 0x002982E0 - 0x0029832B (75 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002982E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002982E0: ;
    ecx = MEM32(esi + 4);
    eax = MEM32(esp + 8);
    (void)0; /* cmp eax, MEM32(ecx) - flags set for next jcc */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    if (CMP_NE(eax, MEM32(ecx))) { sub_0029832B(); return; } /* jne: not equal / not zero */

loc_002982F5: ;
    if (CMP_NE(ebx, ecx)) { sub_0029832B(); return; } /* jne: not equal / not zero */

loc_002982F9: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); sub_00297EC0(); /* call 0x00297EC0 */

loc_00298304: ;
    eax = MEM32(esi + 4);
    MEM32(eax + 4) = eax;
    eax = MEM32(esi + 4);
    MEM32(esi + 8) = 0;
    MEM32(eax) = eax;
    eax = MEM32(esi + 4);
    MEM32(eax + 8) = eax;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx);
    MEM32(ebp) = edx;
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00298360
 * Original: 0x00298360 - 0x00298393 (51 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00298360(void)
{
    int _flags = 0; /* fallback flag var */

loc_00298360: ;
    eax = MEM32(ecx + 8);
    edx = MEM32(eax);
    MEM32(ecx + 8) = edx;
    edx = MEM32(eax);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(edx + 0xF));
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_00298375; /* jne: not equal / not zero */

loc_00298372: ;
    MEM32(edx + 4) = ecx;

loc_00298375: ;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 8);
    edx = MEM32(edx + 4);
    if (CMP_NE(ecx, MEM32(edx + 4))) { sub_00298393(); return; } /* jne: not equal / not zero */

loc_00298387: ;
    MEM32(edx + 4) = eax;
    MEM32(eax) = ecx;
    MEM32(ecx + 4) = eax;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002983C0
 * Original: 0x002983C0 - 0x002983F4 (52 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002983C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002983C0: ;
    eax = MEM32(ecx);
    edx = MEM32(eax + 8);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 8);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(edx + 0xF));
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_002983D5; /* jne: not equal / not zero */

loc_002983D2: ;
    MEM32(edx + 4) = ecx;

loc_002983D5: ;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 8);
    edx = MEM32(edx + 4);
    if (CMP_NE(ecx, MEM32(edx + 4))) { sub_002983F4(); return; } /* jne: not equal / not zero */

loc_002983E7: ;
    MEM32(edx + 4) = eax;
    MEM32(eax + 8) = ecx;
    MEM32(ecx + 4) = eax;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00298420
 * Original: 0x00298420 - 0x0029849F (127 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00298420(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00298420: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47F520);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x461);
    PUSH32(esp, 0x606A34);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_00298454: ;
    esp = esp + 0x10;
    esi = eax;
    MEM32(ebp + -20) = esi;
    MEM32(ebp + -4) = 0;
    MEM32(ebp + -28) = esi;
    if (TEST_Z(esi, esi)) goto loc_00298483; /* je: equal / zero */

loc_0029846A: ;
    eax = MEM32(ebp + 0x18);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + 0x14);
    PUSH32(esp, ecx);
    edx = MEM32(ebp + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 8);
    eax = esi;
    PUSH32(esp, 0); sub_00298A20(); /* call 0x00298A20 */

loc_00298483: ;
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    eax = esi;
    ecx = MEM32(ebp + -12);
    MEM32(0) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_002984C0
 * Original: 0x002984C0 - 0x00298517 (87 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002984C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002984C0: ;
    eax = MEM32(edx);
    SET_LO8(ecx, MEM8(eax + 0xF));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00298516; /* jne: not equal / not zero */

loc_002984C9: ;
    ecx = MEM32(eax + 8);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(ecx + 0xF));
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_002984EF; /* jne: not equal / not zero */

loc_002984D4: ;
    eax = MEM32(ecx);
    SET_LO8(ebx, MEM8(eax + 0xF));
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_002984EB; /* jne: not equal / not zero */

loc_002984DD: ;
    /* nop */

loc_002984E0: ;
    ecx = eax;
    eax = MEM32(ecx);
    SET_LO8(ebx, MEM8(eax + 0xF));
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_002984E0; /* je: equal / zero */

loc_002984EB: ;
    MEM32(edx) = ecx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_002984EF: ;
    eax = MEM32(eax + 4);
    SET_LO8(ecx, MEM8(eax + 0xF));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00298513; /* jne: not equal / not zero */

loc_002984F9: ;
    /* nop */

loc_00298500: ;
    ecx = MEM32(edx);
    if (CMP_NE(ecx, MEM32(eax + 8))) goto loc_00298513; /* jne: not equal / not zero */

loc_00298507: ;
    MEM32(edx) = eax;
    eax = MEM32(eax + 4);
    SET_LO8(ecx, MEM8(eax + 0xF));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00298500; /* je: equal / zero */

loc_00298513: ;
    MEM32(edx) = eax;
    POP32(esp, ebx);

loc_00298516: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00298520
 * Original: 0x00298520 - 0x00298566 (70 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00298520(void)
{
    int _flags = 0; /* fallback flag var */

loc_00298520: ;
    PUSH32(esp, esi);
    esi = ecx;
    (void)0; /* cmp edx, esi - flags set for next jcc */
    PUSH32(esp, edi);
    edi = eax;
    if (CMP_EQ(edx, esi)) goto loc_00298534; /* je: equal / zero */

loc_0029852A: ;
    ecx = edi;
    PUSH32(esp, 0); sub_000632D0(); /* call 0x000632D0 */

loc_00298531: ;
    MEM32(esi + 8) = MEM32(esi + 8) - edi;

loc_00298534: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(eax + 4);
    ecx = MEM32(esp + 0x14);
    MEM32(edx) = ecx;
    esi = MEM32(ecx + 4);
    edx = MEM32(esp + 0xC);
    MEM32(esi) = edx;
    esi = MEM32(edx + 4);
    MEM32(esi) = eax;
    esi = MEM32(edx + 4);
    edi = MEM32(ecx + 4);
    MEM32(edx + 4) = edi;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    POP32(esp, edi);
    MEM32(eax + 4) = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00298570
 * Original: 0x00298570 - 0x00298585 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00298570(void)
{
    int _flags = 0; /* fallback flag var */

loc_00298570: ;
    eax = MEM32(ecx + 0x10);
    if (TEST_Z(eax, eax)) goto loc_00298584; /* je: equal / zero */

loc_00298577: ;
    eax--;
    MEM32(ecx + 0x10) = eax;
    if ((eax != 0)) goto loc_00298584; /* jne: not equal / not zero */

loc_0029857D: ;
    MEM32(ecx + 0xC) = 0;

loc_00298584: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00298590
 * Original: 0x00298590 - 0x00298626 (150 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00298590(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00298590: ;
    eax = MEM32(esp + 0xC);
    SET_LO8(ecx, MEM8(eax + 0xF));
    esp = esp - 0x44;
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0029860A; /* je: equal / zero */

loc_002985A0: ;
    PUSH32(esp, 0x1B);
    edi = 0xF;
    esi = 0; /* xor self */
    PUSH32(esp, 0x5AC6A8);
    ecx = esp + 0x10;
    MEM32(esp + 0x28) = edi;
    MEM32(esp + 0x24) = esi;
    MEM8(esp + 0x14) = 0;
    PUSH32(esp, 0); sub_000143C0(); /* call 0x000143C0 */

loc_002985C4: ;
    ecx = esp + 0x24;
    PUSH32(esp, 0); sub_0046E531(); /* call 0x0046E531 */

loc_002985CD: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x3C;
    MEM32(esp + 0x30) = 0x5AC69C;
    MEM32(esp + 0x54) = edi;
    MEM32(esp + 0x50) = esi;
    MEM8(esp + 0x40) = 0;
    PUSH32(esp, 0); sub_000144B0(); /* call 0x000144B0 */

loc_002985F3: ;
    PUSH32(esp, 0x64B604);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    MEM32(esp + 0x2C) = 0x5AC68C;
    PUSH32(esp, 0); sub_004720B3(); /* call 0x004720B3 */

loc_0029860A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    edx = esp + 0x60;
    ebp = eax;
    PUSH32(esp, 0); sub_002984C0(); /* call 0x002984C0 */

loc_00298617: ;
    eax = MEM32(ebp);
    SET_LO8(ecx, MEM8(eax + 0xF));
    if (TEST_Z(LO8(ecx), LO8(ecx))) { sub_00298626(); return; } /* je: equal / zero */

loc_00298621: ;
    edi = MEM32(ebp + 8);
    g_seh_ebp = ebp; sub_0029863F(); return; /* tail jmp 0x0029863F */

}

/**
 * sub_00298880
 * Original: 0x00298880 - 0x002988AF (47 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00298880(void)
{
    int _flags = 0; /* fallback flag var */

loc_00298880: ;
    eax = MEM32(eax + 4);
    ecx = MEM32(eax + 4);
    SET_LO8(edx, MEM8(ecx + 0xF));
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_002988AC; /* jne: not equal / not zero */

loc_0029888D: ;
    edx = MEM32(esp + 4);
    SET_LO16(edx, MEM16(edx));
    PUSH32(esp, ebx);

loc_00298895: ;
    if (CMP_GE(MEM16(ecx + 0xC), LO16(edx))) goto loc_002988A0; /* jge: greater or equal (signed >=) */

loc_0029889B: ;
    ecx = MEM32(ecx + 8);
    goto loc_002988A4;

loc_002988A0: ;
    eax = ecx;
    ecx = MEM32(ecx);

loc_002988A4: ;
    SET_LO8(ebx, MEM8(ecx + 0xF));
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_00298895; /* je: equal / zero */

loc_002988AB: ;
    POP32(esp, ebx);

loc_002988AC: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002988B0
 * Original: 0x002988B0 - 0x002988CC (28 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002988B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002988B0: ;
    ecx = MEM32(eax);
    SET_LO8(edx, MEM8(ecx + 0xF));
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_002988CB; /* jne: not equal / not zero */

loc_002988B9: ;
    /* nop */

loc_002988C0: ;
    eax = ecx;
    ecx = MEM32(eax);
    SET_LO8(edx, MEM8(ecx + 0xF));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_002988C0; /* je: equal / zero */

loc_002988CB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002988D0
 * Original: 0x002988D0 - 0x002988FF (47 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002988D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002988D0: ;
    eax = MEM32(eax + 4);
    ecx = MEM32(eax + 4);
    SET_LO8(edx, MEM8(ecx + 0xF));
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_002988FC; /* jne: not equal / not zero */

loc_002988DD: ;
    edx = MEM32(esp + 4);
    SET_LO16(edx, MEM16(edx));
    PUSH32(esp, ebx);

loc_002988E5: ;
    if (CMP_GE(LO16(edx), MEM16(ecx + 0xC))) goto loc_002988F1; /* jge: greater or equal (signed >=) */

loc_002988EB: ;
    eax = ecx;
    ecx = MEM32(ecx);
    goto loc_002988F4;

loc_002988F1: ;
    ecx = MEM32(ecx + 8);

loc_002988F4: ;
    SET_LO8(ebx, MEM8(ecx + 0xF));
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_002988E5; /* je: equal / zero */

loc_002988FB: ;
    POP32(esp, ebx);

loc_002988FC: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00298900
 * Original: 0x00298900 - 0x00298996 (150 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00298900(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00298900: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47F510);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    esp = esp - 0x28;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x461);
    PUSH32(esp, 0x606A34);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_00298934: ;
    esp = esp + 0x10;
    MEM32(ebp + -24) = eax;
    ebx = 0; /* xor self */
    MEM32(ebp + -4) = ebx;
    MEM32(ebp + -32) = ebx;
    MEM32(ebp + -36) = eax;
    if (CMP_EQ(eax, ebx)) goto loc_0029894B; /* je: equal / zero */

loc_00298949: ;
    MEM32(eax) = ebx;

loc_0029894B: ;
    edx = 1;
    MEM32(ebp + -20) = edx;
    MEM32(ebp + -40) = ebx;
    ecx = eax + 4;
    MEM32(ebp + -44) = ecx;
    if (CMP_EQ(ecx, ebx)) goto loc_00298962; /* je: equal / zero */

loc_00298960: ;
    MEM32(ecx) = ebx;

loc_00298962: ;
    MEM32(ebp + -20) = 2;
    MEM32(ebp + -48) = ebx;
    ecx = eax + 8;
    MEM32(ebp + -52) = ecx;
    if (CMP_EQ(ecx, ebx)) goto loc_00298978; /* je: equal / zero */

loc_00298976: ;
    MEM32(ecx) = ebx;

loc_00298978: ;
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    MEM8(eax + 0xE) = LO8(edx);
    MEM8(eax + 0xF) = LO8(ebx);
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
 * sub_002989C0
 * Original: 0x002989C0 - 0x002989CF (15 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002989C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002989C0: ;
    eax = MEM32(edx);
    SET_LO8(ecx, MEM8(eax + 0xF));
    if (TEST_Z(LO8(ecx), LO8(ecx))) { sub_002989CF(); return; } /* je: equal / zero */

loc_002989C9: ;
    eax = MEM32(eax + 8);
    MEM32(edx) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00298A20
 * Original: 0x00298A20 - 0x00298A45 (37 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00298A20(void)
{

loc_00298A20: ;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 8);
    MEM32(eax + 8) = ecx;
    SET_LO16(ecx, MEM16(edx));
    SET_LO8(edx, MEM8(esp + 0xC));
    MEM16(eax + 0xC) = LO16(ecx);
    MEM8(eax + 0xE) = LO8(edx);
    MEM8(eax + 0xF) = 0;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00298A50
 * Original: 0x00298A50 - 0x00298A6D (29 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00298A50(void)
{
    int _flags = 0; /* fallback flag var */

loc_00298A50: ;
    ecx = MEM32(eax + 8);
    SET_LO8(edx, MEM8(ecx + 0xF));
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_00298A6C; /* jne: not equal / not zero */

loc_00298A5A: ;
    /* nop */

loc_00298A60: ;
    eax = ecx;
    ecx = MEM32(eax + 8);
    SET_LO8(edx, MEM8(ecx + 0xF));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_00298A60; /* je: equal / zero */

loc_00298A6C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00298A70
 * Original: 0x00298A70 - 0x00298AD1 (97 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00298A70(void)
{
    uint32_t ebp;

loc_00298A70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47FAB0);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = 0;
    ecx = MEM32(eax + 0xC);
    MEM32(ebp + -20) = ecx;
    MEM32(ebp + -28) = eax;
    MEM32(ebp + -24) = ecx;
    edx = MEM32(ebp + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(ebp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00298AF0(); /* call 0x00298AF0 */

loc_00298AB7: ;
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    ecx = MEM32(ebp + -12);
    MEM32(0) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00298AF0
 * Original: 0x00298AF0 - 0x00298B16 (38 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00298AF0(void)
{

loc_00298AF0: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00298B50(); /* call 0x00298B50 */

loc_00298B13: ;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00298B20
 * Original: 0x00298B20 - 0x00298B41 (33 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00298B20(void)
{

loc_00298B20: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00298FD0(); /* call 0x00298FD0 */

loc_00298B3E: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00298B50
 * Original: 0x00298B50 - 0x00298B91 (65 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00298B50(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00298B50: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47FAA0);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    esp = esp - 0x180;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    edi = MEM32(ebp + 8);
    eax = MEM32(edi + 0xC);
    ecx = MEM32(ebp + 0xC);
    MEM32(ebp + -348) = ecx;
    ecx = MEM32(ebp + 0x10);
    if (CMP_A(eax, ecx)) { sub_00298B91(); return; } /* ja: above (unsigned >) */

loc_00298B8A: ;
    ecx = ecx - eax;
    MEM32(ebp + -24) = ecx;
    g_seh_ebp = ebp; sub_00298B96(); return; /* tail jmp 0x00298B96 */

}

/**
 * sub_00298FD0
 * Original: 0x00298FD0 - 0x0029901A (74 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00298FD0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00298FD0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47FA90);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    ebx = MEM32(ebp + 8);
    esi = MEM32(ebp + 0x10);
    MEM32(ebp + -20) = esi;
    MEM32(ebp + -4) = 0;
    edi = MEM32(ebp + 0xC);

loc_00299004: ;
    if (CMP_EQ(esi, MEM32(ebp + 0x14))) { sub_0029901A(); return; } /* je: equal / zero */

loc_00299009: ;
    eax = esi + 8;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00264B20(); /* call 0x00264B20 */

loc_00299013: ;
    esi = MEM32(esi);
    MEM32(ebp + 0x10) = esi;
    goto loc_00299004;

}

/**
 * sub_00299060
 * Original: 0x00299060 - 0x0029908F (47 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00299060(void)
{
    int _flags = 0; /* fallback flag var */

loc_00299060: ;
    ecx = MEM32(eax + 0x10);
    if (TEST_Z(ecx, ecx)) goto loc_0029908E; /* je: equal / zero */

loc_00299067: ;
    edx = MEM32(eax + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(eax + 8);
    edx++;
    edi = edi << 2;
    (void)0; /* cmp edi, edx - flags set for next jcc */
    MEM32(eax + 0xC) = edx;
    POP32(esp, edi);
    if (CMP_A(edi, edx)) goto loc_00299081; /* ja: above (unsigned >) */

loc_0029907A: ;
    MEM32(eax + 0xC) = 0;

loc_00299081: ;
    ecx--;
    MEM32(eax + 0x10) = ecx;
    if ((ecx != 0)) goto loc_0029908E; /* jne: not equal / not zero */

loc_00299087: ;
    MEM32(eax + 0xC) = 0;

loc_0029908E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00299090
 * Original: 0x00299090 - 0x002990BE (46 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00299090(void)
{
    int _flags = 0; /* fallback flag var */

loc_00299090: ;
    edx = MEM32(eax);
    ecx = MEM32(eax + 4);
    ecx = ecx + MEM32(esp + 4);
    eax = ecx;
    eax = eax >> 2;
    PUSH32(esp, esi);
    esi = eax * 4;
    ecx = ecx - esi;
    esi = MEM32(edx + 8);
    if (CMP_A(esi, eax)) goto loc_002990B1; /* ja: above (unsigned >) */

loc_002990AF: ;
    eax = eax - esi;

loc_002990B1: ;
    edx = MEM32(edx + 4);
    eax = MEM32(edx + eax * 4);
    eax = eax + ecx * 4;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002990C0
 * Original: 0x002990C0 - 0x002990E5 (37 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002990C0(void)
{

loc_002990C0: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00299150(); /* call 0x00299150 */

loc_002990DF: ;
    eax = esi;
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_002990F0
 * Original: 0x002990F0 - 0x0029911F (47 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002990F0(void)
{

loc_002990F0: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp);
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002991B0(); /* call 0x002991B0 */

loc_00299119: ;
    eax = esi;
    esp = esp + 0x24;
    esp += 4; return; /* ret */

}

/**
 * sub_00299120
 * Original: 0x00299120 - 0x0029914F (47 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00299120(void)
{

loc_00299120: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp);
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00299240(); /* call 0x00299240 */

loc_00299149: ;
    eax = esi;
    esp = esp + 0x24;
    esp += 4; return; /* ret */

}

/**
 * sub_00299150
 * Original: 0x00299150 - 0x002991AC (92 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00299150(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00299150: ;
    edx = MEM32(esp + 8);
    eax = MEM32(esp + 0xC);
    (void)0; /* cmp edx, eax - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    if (CMP_EQ(edx, eax)) goto loc_002991A0; /* je: equal / zero */

loc_00299166: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    goto loc_00299170;

    /* nop */

loc_00299170: ;
    ecx = edi;
    ecx = ecx >> 2;
    esi = ecx * 4;
    ebx = esi;
    esi = edi;
    esi = esi - ebx;
    ebx = MEM32(ebp + 8);
    if (CMP_A(ebx, ecx)) goto loc_0029918B; /* ja: above (unsigned >) */

loc_00299189: ;
    ecx = ecx - ebx;

loc_0029918B: ;
    ebx = MEM32(ebp + 4);
    ecx = MEM32(ebx + ecx * 4);
    ebx = MEM32(edx + 8);
    MEM32(ecx + esi * 4) = ebx;
    edx = MEM32(edx);
    edi++;
    if (CMP_NE(edx, eax)) goto loc_00299170; /* jne: not equal / not zero */

loc_0029919E: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_002991A0: ;
    eax = MEM32(esp + 0xC);
    MEM32(eax + 4) = edi;
    POP32(esp, edi);
    MEM32(eax) = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002991B0
 * Original: 0x002991B0 - 0x00299220 (112 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002991B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002991B0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x24);
    PUSH32(esp, esi);
    PUSH32(esp, edi);

loc_002991BC: ;
    eax = MEM32(esp + 0x18);
    if (CMP_NE(eax, MEM32(esp + 0x20))) goto loc_002991CC; /* jne: not equal / not zero */

loc_002991C6: ;
    if (CMP_EQ(ebx, MEM32(esp + 0x24))) { sub_00299220(); return; } /* je: equal / zero */

loc_002991CC: ;
    eax = MEM32(eax + 8);
    edx = ebx;
    edx = edx >> 2;
    ecx = edx * 4;
    edi = ebx;
    edi = edi - ecx;
    if (CMP_A(eax, edx)) goto loc_002991E5; /* ja: above (unsigned >) */

loc_002991E3: ;
    edx = edx - eax;

loc_002991E5: ;
    ecx = ebp;
    ecx = ecx >> 2;
    eax = ecx * 4;
    esi = ebp;
    esi = esi - eax;
    eax = MEM32(esp + 0x28);
    eax = MEM32(eax + 8);
    if (CMP_A(eax, ecx)) goto loc_00299202; /* ja: above (unsigned >) */

loc_00299200: ;
    ecx = ecx - eax;

loc_00299202: ;
    eax = MEM32(esp + 0x18);
    eax = MEM32(eax + 4);
    edx = MEM32(eax + edx * 4);
    eax = MEM32(esp + 0x28);
    eax = MEM32(eax + 4);
    ecx = MEM32(eax + ecx * 4);
    edx = MEM32(edx + edi * 4);
    ebp++;
    MEM32(ecx + esi * 4) = edx;
    ebx++;
    goto loc_002991BC;

}

/**
 * sub_00299240
 * Original: 0x00299240 - 0x002992B2 (114 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00299240(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00299240: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    /* nop */

loc_00299250: ;
    if (CMP_NE(MEM32(esp + 0x18), eax)) goto loc_0029925C; /* jne: not equal / not zero */

loc_00299256: ;
    if (CMP_EQ(MEM32(esp + 0x1C), ebp)) { sub_002992B2(); return; } /* je: equal / zero */

loc_0029925C: ;
    ebp--;
    edx = ebp;
    edx = edx >> 2;
    ecx = edx * 4;
    edi = ebp;
    edi = edi - ecx;
    ecx = MEM32(eax + 8);
    if (CMP_A(ecx, edx)) goto loc_00299276; /* ja: above (unsigned >) */

loc_00299274: ;
    edx = edx - ecx;

loc_00299276: ;
    esi = MEM32(esp + 0x2C);
    esi--;
    ecx = esi;
    ecx = ecx >> 2;
    ebx = ecx * 4;
    MEM32(esp + 0x2C) = esi;
    esi = esi - ebx;
    ebx = MEM32(esp + 0x28);
    ebx = MEM32(ebx + 8);
    if (CMP_A(ebx, ecx)) goto loc_0029929A; /* ja: above (unsigned >) */

loc_00299298: ;
    ecx = ecx - ebx;

loc_0029929A: ;
    ebx = MEM32(eax + 4);
    edx = MEM32(ebx + edx * 4);
    ebx = MEM32(esp + 0x28);
    ebx = MEM32(ebx + 4);
    ecx = MEM32(ebx + ecx * 4);
    edx = MEM32(edx + edi * 4);
    MEM32(ecx + esi * 4) = edx;
    goto loc_00299250;

}

/**
 * sub_002992D0
 * Original: 0x002992D0 - 0x002992FA (42 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002992D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002992D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0); sub_002993A0(); /* call 0x002993A0 */

loc_002992D8: ;
    if (TEST_Z(MEM8(esp + 8), 1)) goto loc_002992F4; /* je: equal / zero */

loc_002992DF: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(esp + 8) = esi;
    if (TEST_Z(esi, esi)) goto loc_002992F4; /* je: equal / zero */

loc_002992E7: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_002992F1: ;
    esp = esp + 4;

loc_002992F4: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00299300
 * Original: 0x00299300 - 0x00299326 (38 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00299300(void)
{
    int _flags = 0; /* fallback flag var */

loc_00299300: ;
    eax = MEM32(edx + ecx * 4 + 4);
    if (TEST_S(eax, eax)) goto loc_00299314; /* jl: less (signed <) */

loc_00299308: ;
    if (CMP_GE(eax, 0x10)) goto loc_00299314; /* jge: greater or equal (signed >=) */

loc_0029930D: ;
    MEM8(eax + 0x849894) = 0xFF;

loc_00299314: ;
    if (TEST_S(ecx, ecx)) goto loc_00299325; /* jl: less (signed <) */

loc_00299318: ;
    if (CMP_GE(ecx, 2)) goto loc_00299325; /* jge: greater or equal (signed >=) */

loc_0029931D: ;
    MEM32(edx + ecx * 4 + 4) = 0xFFFFFFFFu;

loc_00299325: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00299330
 * Original: 0x00299330 - 0x0029934A (26 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00299330(void)
{
    int _flags = 0; /* fallback flag var */

loc_00299330: ;
    if (TEST_S(eax, eax)) { sub_0029934A(); return; } /* jl: less (signed <) */

loc_00299334: ;
    if (CMP_GE(eax, 2)) { sub_0029934A(); return; } /* jge: greater or equal (signed >=) */

loc_00299339: ;
    PUSH32(esp, esi);
    esi = MEM32(edx + eax * 4 + 4);
    ecx = 0; /* xor self */
    (void)0; /* cmp esi, 0xFFFFFFFFu - flags set for next jcc */
    SET_LO8(ecx, (CMP_NE(esi, 0xFFFFFFFFu)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(ecx));
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00299350
 * Original: 0x00299350 - 0x00299365 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00299350(void)
{
    int _flags = 0; /* fallback flag var */

loc_00299350: ;
    if (TEST_S(eax, eax)) goto loc_00299364; /* jl: less (signed <) */

loc_00299354: ;
    if (CMP_GE(eax, 2)) goto loc_00299364; /* jge: greater or equal (signed >=) */

loc_00299359: ;
    MEM32(edx + eax * 4 + 4) = ecx;
    MEM8(ecx + 0x849894) = 0xF6;

loc_00299364: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00299370
 * Original: 0x00299370 - 0x0029938A (26 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00299370(void)
{
    int _flags = 0; /* fallback flag var */

loc_00299370: ;
    if (TEST_S(eax, eax)) goto loc_00299387; /* jl: less (signed <) */

loc_00299374: ;
    if (CMP_GE(eax, 2)) goto loc_00299387; /* jge: greater or equal (signed >=) */

loc_00299379: ;
    eax = MEM32(ecx + eax * 4 + 4);
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    SET_LO8(ecx, (CMP_NE(eax, 0xFFFFFFFFu)) ? 1 : 0); /* setne */
    if (TEST_NZ(LO8(ecx), LO8(ecx))) { sub_0029938A(); return; } /* jne: not equal / not zero */

loc_00299387: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_002993A0
 * Original: 0x002993A0 - 0x002993E7 (71 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002993A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002993A0: ;
    PUSH32(esp, esi);
    MEM32(ecx) = 0x605668;
    esi = 0; /* xor self */
    edx = ecx + 4;
    /* nop */

loc_002993B0: ;
    if (TEST_S(esi, esi)) goto loc_002993DC; /* jl: less (signed <) */

loc_002993B4: ;
    if (CMP_GE(esi, 2)) goto loc_002993DC; /* jge: greater or equal (signed >=) */

loc_002993B9: ;
    eax = MEM32(edx);
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    SET_LO8(ecx, (CMP_NE(eax, 0xFFFFFFFFu)) ? 1 : 0); /* setne */
    if (CMP_NE(LO8(ecx), 1)) goto loc_002993DC; /* jne: not equal / not zero */

loc_002993C6: ;
    if (TEST_S(eax, eax)) goto loc_002993D6; /* jl: less (signed <) */

loc_002993CA: ;
    if (CMP_GE(eax, 0x10)) goto loc_002993D6; /* jge: greater or equal (signed >=) */

loc_002993CF: ;
    MEM8(eax + 0x849894) = 0xFF;

loc_002993D6: ;
    MEM32(edx) = 0xFFFFFFFFu;

loc_002993DC: ;
    esi++;
    edx = edx + 4;
    if (CMP_L(esi, 2)) goto loc_002993B0; /* jl: less (signed <) */

loc_002993E5: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002993F0
 * Original: 0x002993F0 - 0x00299422 (50 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002993F0(void)
{

loc_002993F0: ;
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
    MEM32(eax) = 0x6056E0;
    esp += 4; return; /* ret */

}

/**
 * sub_00299430
 * Original: 0x00299430 - 0x00299436 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00299430(void)
{

loc_00299430: ;
    eax = 0x43;
    esp += 4; return; /* ret */

}

/**
 * sub_00299440
 * Original: 0x00299440 - 0x00299491 (81 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00299440(void)
{
    int _flags = 0; /* fallback flag var */

loc_00299440: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_00299448: ;
    edx = 0; /* xor self */
    ecx = 0x6BE940;
    /* nop */

loc_00299450: ;
    if (CMP_EQ(MEM32(ecx), eax)) { sub_00299491(); return; } /* je: equal / zero */

loc_00299454: ;
    ecx = ecx + 0x10;
    edx++;
    if (CMP_L(ecx, 0x6BED90)) goto loc_00299450; /* jl: less (signed <) */

loc_00299460: ;
    edx = 0x600E6C;
    eax = MEM32(esi + 0x3C);
    ecx = esi + 0x40;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x38);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x34);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, 0x605820);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_0029948A: ;
    esp = esp + 0x20;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002994B0
 * Original: 0x002994B0 - 0x002994CA (26 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002994B0(void)
{

loc_002994B0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0x605804);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_002994C4: ;
    esp = esp + 0xC;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002994D0
 * Original: 0x002994D0 - 0x002994FE (46 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002994D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002994D0: ;
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, edi);
    esi = esi + 0x38C;
    edi = 2;
    /* nop */

loc_002994E0: ;
    ecx = MEM32(esi);
    if (TEST_Z(ecx, ecx)) goto loc_002994EC; /* je: equal / zero */

loc_002994E6: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_002994EC: ;
    MEM32(esi) = 0;
    esi = esi + 0x12C;
    edi--;
    if ((edi != 0)) goto loc_002994E0; /* jne: not equal / not zero */

loc_002994FB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00299500
 * Original: 0x00299500 - 0x00299676 (374 bytes, 114 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00299500(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00299500: ;
    eax = MEM32(esp + 8);
    if (TEST_S(eax, eax)) { sub_00299676(); return; } /* jl: less (signed <) */

loc_0029950C: ;
    if (CMP_GE(eax, 2)) { sub_00299676(); return; } /* jge: greater or equal (signed >=) */

loc_00299515: ;
    ecx = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x12C);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = eax + ecx + 0x2A0;
    SET_LO16(eax, MEM16(ebp + 0xAA));
    (void)0; /* test LO16(eax), LO16(eax) - flags set for next jcc */
    ebx = ebp + 0xAA;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_NZ(LO16(eax), LO16(eax))) goto loc_00299615; /* jne: not equal / not zero */

loc_00299540: ;
    SET_LO8(ecx, MEM8(ebp + 0xA9));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00299615; /* jne: not equal / not zero */

loc_0029954E: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_0029955C; /* jne: not equal / not zero */

loc_00299557: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0029955C: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (TEST_Z(esi, esi)) goto loc_002995AA; /* je: equal / zero */

loc_00299582: ;
    if (CMP_B(MEM32(esi + 0x80), 0x84)) goto loc_002995AA; /* jb: below (unsigned <) */

loc_0029958E: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00299598: ;
    PUSH32(esp, 0x84);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002995A3: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_002995CE; /* jne: not equal / not zero */

loc_002995AA: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002995BC: ;
    PUSH32(esp, 0x84);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002995C7: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0029960C; /* je: equal / zero */

loc_002995CE: ;
    PUSH32(esp, 0); sub_002993F0(); /* call 0x002993F0 */

loc_002995D3: ;
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_0029960C; /* je: equal / zero */

loc_002995D9: ;
    eax = MEM32(esp + 0x18);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x6C), _icall_esp); /* indirect call */
    }

loc_002995E7: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x1F4);
    PUSH32(esp, 0); sub_004168D0(); /* call 0x004168D0 */

loc_002995F3: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(eax + 0x9DC);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_00299605: ;
    MEM8(ebp + 0xA9) = 1;

loc_0029960C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00299615: ;
    ecx = MEM32(ebp + 0xEC);
    if (TEST_NZ(ecx, ecx)) goto loc_0029964E; /* jne: not equal / not zero */

loc_0029961F: ;
    if (TEST_Z(LO16(eax), LO16(eax))) goto loc_0029964E; /* je: equal / zero */

loc_00299624: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, 0); sub_002AF3F0(); /* call 0x002AF3F0 */

loc_0029962B: ;
    esi = eax;
    esp = esp + 4;
    if (TEST_Z(esi, esi)) goto loc_00299646; /* je: equal / zero */

loc_00299634: ;
    PUSH32(esp, 0x14);
    SET_LO8(eax, 0); /* xor self */
    edi = 0x6057F4;
    ecx = ebx;
    PUSH32(esp, 0); sub_0005EAF0(); /* call 0x0005EAF0 */

loc_00299644: ;
    goto loc_00299648;

loc_00299646: ;
    eax = 0; /* xor self */

loc_00299648: ;
    MEM32(ebp + 0xEC) = eax;

loc_0029964E: ;
    edi = MEM32(ebp + 0xEC);
    if (TEST_Z(edi, edi)) goto loc_0029960C; /* je: equal / zero */

loc_00299658: ;
    eax = MEM32(edi + 4);
    if (CMP_EQ(eax, 2)) goto loc_0029966C; /* je: equal / zero */

loc_00299660: ;
    if (CMP_EQ(eax, 3)) goto loc_0029966C; /* je: equal / zero */

loc_00299665: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_0005ECC0(); /* call 0x0005ECC0 */

loc_0029966C: ;
    eax = MEM32(edi + 8);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00299680
 * Original: 0x00299680 - 0x00299813 (403 bytes, 130 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00299680(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00299680: ;
    PUSH32(esp, ebx);
    ebx = eax;
    eax = MEM32(ebx + 0x764);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebp);
    SET_LO16(ebp, MEM16(esp + 0xC));
    PUSH32(esp, esi);
    if (TEST_NZ(eax, eax)) goto loc_00299742; /* jne: not equal / not zero */

loc_00299698: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_002996A6; /* jne: not equal / not zero */

loc_002996A1: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_002996A6: ;
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
    if (TEST_Z(esi, esi)) goto loc_002996F7; /* je: equal / zero */

loc_002996CD: ;
    if (CMP_B(MEM32(esi + 0x80), 0x134)) goto loc_002996F7; /* jb: below (unsigned <) */

loc_002996D9: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002996E3: ;
    PUSH32(esp, 0x134);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002996EE: ;
    edx = eax;
    esp = esp + 8;
    if (TEST_NZ(edx, edx)) goto loc_0029971D; /* jne: not equal / not zero */

loc_002996F7: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00299709: ;
    PUSH32(esp, 0x134);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00299714: ;
    edx = eax;
    esp = esp + 8;
    if (TEST_Z(edx, edx)) goto loc_00299731; /* je: equal / zero */

loc_0029971D: ;
    edi = edx + 4;
    ecx = 0x4C;
    eax = 0; /* xor self */
    MEM32(edx) = 0x605670;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    goto loc_00299733;

loc_00299731: ;
    edx = 0; /* xor self */

loc_00299733: ;
    (void)0; /* test edx, edx - flags set for next jcc */
    MEM32(ebx + 0x764) = edx;
    POP32(esp, edi);
    if (TEST_Z(edx, edx)) goto loc_0029980B; /* je: equal / zero */

loc_00299742: ;
    SET_LO8(eax, MEM8(esp + 0x24));
    if (CMP_B(LO8(eax), 1)) goto loc_0029980B; /* jb: below (unsigned <) */

loc_0029974E: ;
    if (CMP_AE(MEM8(esp + 0x14), LO8(eax))) goto loc_0029980B; /* jae: above or equal (unsigned >=) */

loc_00299758: ;
    ecx = MEM32(ebx + 0x764);
    ebx = MEM32(esp + 0x18);
    eax = ZX8(LO8(eax));
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    SET_LO8(eax, 1);
    PUSH32(esp, 0); sub_002998F0(); /* call 0x002998F0 */

loc_0029976E: ;
    if (TEST_Z(eax, eax)) goto loc_0029980B; /* je: equal / zero */

loc_00299776: ;
    edx = ZX8(MEM8(esp + 0x14));
    eax = MEM32(eax + 8);
    (void)0; /* cmp MEM16(eax + edx * 4), LO16(ebp) - flags set for next jcc */
    esi = eax + edx * 4;
    if (CMP_NE(MEM16(eax + edx * 4), LO16(ebp))) goto loc_002997D9; /* jne: not equal / not zero */

loc_00299787: ;
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 2));
    if (CMP_LE(LO16(eax) & LO16(eax), 0)) goto loc_002997BD; /* jle: less or equal (signed <=) */

loc_00299792: ;
    eax--;
    (void)0; /* test LO16(eax), LO16(eax) - flags set for next jcc */
    MEM16(esi + 2) = LO16(eax);
    if (TEST_NZ(LO16(eax), LO16(eax))) goto loc_0029980B; /* jne: not equal / not zero */

loc_0029979C: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_002997A1: ;
    xmm1 = (float)(int32_t)MEM32(esp + 0x1C); /* cvtsi2ss */
    xmm0 = xmm0 * xmm1; /* mulss */
    ecx = (int32_t)xmm0; /* cvttss2si */
    ecx = (uint32_t)(-(int32_t)ecx);
    MEM16(esi + 2) = LO16(ecx);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 28; return; /* ret 24 */

loc_002997BD: ;
    if ((ecx != 0)) goto loc_002997D1; /* jne: not equal / not zero */

loc_002997BF: ;
    eax = MEM32(esp + 0x1C);
    eax = (uint32_t)(-(int32_t)eax);
    MEM16(esi + 2) = LO16(eax);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 28; return; /* ret 24 */

loc_002997D1: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 28; return; /* ret 24 */

loc_002997D9: ;
    eax = MEM32(esp + 0x20);
    (void)0; /* cmp eax, 1 - flags set for next jcc */
    MEM16(esi) = LO16(ebp);
    if (CMP_LE(eax, 1)) goto loc_002997F2; /* jle: less or equal (signed <=) */

loc_002997E5: ;
    eax--;
    MEM16(esi + 2) = LO16(eax);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 28; return; /* ret 24 */

loc_002997F2: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_002997F7: ;
    xmm1 = (float)(int32_t)MEM32(esp + 0x1C); /* cvtsi2ss */
    xmm0 = xmm0 * xmm1; /* mulss */
    edx = (int32_t)xmm0; /* cvttss2si */
    edx = (uint32_t)(-(int32_t)edx);
    MEM16(esi + 2) = LO16(edx);

loc_0029980B: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_00299820
 * Original: 0x00299820 - 0x0029989C (124 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00299820(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00299820: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x764);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    if (TEST_Z(ecx, ecx)) goto loc_00299898; /* je: equal / zero */

loc_00299833: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */

loc_00299838: ;
    if (TEST_S(ebx, ebx)) goto loc_0029988A; /* jl: less (signed <) */

loc_0029983C: ;
    if (CMP_GE(ebx, 0x130)) goto loc_0029988A; /* jge: greater or equal (signed >=) */

loc_00299844: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(ecx + 0x764);
    esi = MEM32(ebx + edx + 4);
    if (TEST_Z(esi, esi)) goto loc_0029988A; /* je: equal / zero */

loc_00299856: ;
    edi = MEM32(esi + 4);
    edx = 0; /* xor self */
    if (CMP_LE(edi & edi, 0)) goto loc_0029988A; /* jle: less or equal (signed <=) */

loc_0029985F: ;
    /* nop */

loc_00299860: ;
    ecx = MEM32(esi + 8);
    eax = ZX8(LO8(edx));
    eax = ecx + eax * 4;
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(eax + 2));
    if (CMP_GE(LO16(ecx) & LO16(ecx), 0)) goto loc_00299885; /* jge: greater or equal (signed >=) */

loc_00299874: ;
    ecx = ecx + ebp;
    (void)0; /* test LO16(ecx), LO16(ecx) - flags set for next jcc */
    MEM16(eax + 2) = LO16(ecx);
    if (CMP_LE(LO16(ecx) & LO16(ecx), 0)) goto loc_00299885; /* jle: less or equal (signed <=) */

loc_0029987F: ;
    MEM16(eax + 2) = 0;

loc_00299885: ;
    edx++;
    if (CMP_L(edx, edi)) goto loc_00299860; /* jl: less (signed <) */

loc_0029988A: ;
    ebx = ebx + 4;
    if (CMP_L(ebx, 0x130)) goto loc_00299838; /* jl: less (signed <) */

loc_00299895: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00299898: ;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002998A0
 * Original: 0x002998A0 - 0x002998E5 (69 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002998A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002998A0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, edi);
    MEM32(ebx) = 0x605670;
    esi = ebx + 4;
    edi = 0x4C;

loc_002998B3: ;
    ecx = MEM32(esi);
    if (TEST_Z(ecx, ecx)) goto loc_002998BF; /* je: equal / zero */

loc_002998B9: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_002998BF: ;
    esi = esi + 4;
    edi--;
    if ((edi != 0)) goto loc_002998B3; /* jne: not equal / not zero */

loc_002998C5: ;
    if (TEST_Z(MEM8(esp + 0x10), 1)) goto loc_002998DD; /* je: equal / zero */

loc_002998CC: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    MEM32(esp + 0x14) = ebx;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_002998DA: ;
    esp = esp + 4;

loc_002998DD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002998F0
 * Original: 0x002998F0 - 0x002999BA (202 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002998F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002998F0: ;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    if (TEST_S(ebx, ebx)) { sub_002999BA(); return; } /* jl: less (signed <) */

loc_002998FD: ;
    if (CMP_GE(ebx, 0x4C)) { sub_002999BA(); return; } /* jge: greater or equal (signed >=) */

loc_00299906: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002999B2; /* je: equal / zero */

loc_0029990E: ;
    eax = MEM32(ebp + ebx * 4 + 4);
    if (TEST_NZ(eax, eax)) goto loc_002999B2; /* jne: not equal / not zero */

loc_0029991A: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_00299928; /* jne: not equal / not zero */

loc_00299923: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_00299928: ;
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
    if (TEST_Z(esi, esi)) goto loc_00299974; /* je: equal / zero */

loc_00299950: ;
    if (CMP_B(MEM32(esi + 0x80), 0xC)) goto loc_00299974; /* jb: below (unsigned <) */

loc_00299959: ;
    ecx = 4;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00299963: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0029996B: ;
    esi = eax;
    esp = esp + 8;
    if (TEST_NZ(esi, esi)) goto loc_00299997; /* jne: not equal / not zero */

loc_00299974: ;
    esi = MEM32(0x84A184);
    ecx = 4;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00299986: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0029998E: ;
    esi = eax;
    esp = esp + 8;
    if (TEST_Z(esi, esi)) goto loc_002999AA; /* je: equal / zero */

loc_00299997: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, 0); sub_002999C0(); /* call 0x002999C0 */

loc_002999A0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp + ebx * 4 + 4) = eax;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_002999AA: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    MEM32(ebp + ebx * 4 + 4) = eax;
    POP32(esp, esi);

loc_002999B2: ;
    eax = MEM32(ebp + ebx * 4 + 4);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002999C0
 * Original: 0x002999C0 - 0x002999DB (27 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002999C0(void)
{

loc_002999C0: ;
    MEM32(esi + 4) = eax;
    eax = eax << 2;
    PUSH32(esp, eax);
    MEM32(esi) = 0x605674;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_002999D2: ;
    MEM32(esi + 8) = eax;
    esp = esp + 4;
    eax = esi;
    esp += 4; return; /* ret */

}

/**
 * sub_002999E0
 * Original: 0x002999E0 - 0x00299A1C (60 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002999E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002999E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    MEM32(esi) = 0x605674;
    PUSH32(esp, 0); sub_0046E4B6(); /* call 0x0046E4B6 */

loc_002999F2: ;
    eax = 0; /* xor self */
    MEM32(esi + 8) = eax;
    MEM32(esi + 4) = eax;
    SET_LO8(eax, MEM8(esp + 0xC));
    esp = esp + 4;
    if (TEST_Z(LO8(eax), 1)) goto loc_00299A16; /* je: equal / zero */

loc_00299A05: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00299A13: ;
    esp = esp + 4;

loc_00299A16: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00299A20
 * Original: 0x00299A20 - 0x00299AEF (207 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00299A20(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm5;

loc_00299A20: ;
    eax = MEM32(ebx + 0x768);
    if (TEST_NZ(eax, eax)) goto loc_00299AC8; /* jne: not equal / not zero */

loc_00299A2E: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_00299A3C; /* jne: not equal / not zero */

loc_00299A37: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_00299A3C: ;
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
    if (TEST_Z(esi, esi)) goto loc_00299A8C; /* je: equal / zero */

loc_00299A64: ;
    if (CMP_B(MEM32(esi + 0x80), 0x404)) goto loc_00299A8C; /* jb: below (unsigned <) */

loc_00299A70: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00299A7A: ;
    PUSH32(esp, 0x404);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00299A85: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_00299AB0; /* jne: not equal / not zero */

loc_00299A8C: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00299A9E: ;
    PUSH32(esp, 0x404);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00299AA9: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_00299ABE; /* je: equal / zero */

loc_00299AB0: ;
    xmm5 = MEMF(esp + 0x14); /* movss */
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00299C20(); /* call 0x00299C20 */

loc_00299ABC: ;
    goto loc_00299AC0;

loc_00299ABE: ;
    eax = 0; /* xor self */

loc_00299AC0: ;
    POP32(esp, edi);
    MEM32(ebx + 0x768) = eax;
    POP32(esp, esi);

loc_00299AC8: ;
    eax = MEM32(ebx + 0x768);
    if (TEST_Z(eax, eax)) { sub_00299AEF(); return; } /* je: equal / zero */

loc_00299AD2: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    ecx = ecx + edx * 2;
    xmm0 = MEMF(eax + ecx * 4 + 4); /* movss */
    /* comiss xmm0, MEMF(esp + 0xC) - sets EFLAGS */
    if ((xmm0 <= MEMF(esp + 0xC))) { sub_00299AEF(); return; } /* jbe: below or equal (unsigned <=) */

loc_00299AEA: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00299B00
 * Original: 0x00299B00 - 0x00299BF1 (241 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00299B00(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm5;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00299B00: ;
    eax = MEM32(ebx + 0x768);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    if (TEST_NZ(eax, eax)) goto loc_00299BB1; /* jne: not equal / not zero */

loc_00299B13: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_00299B21; /* jne: not equal / not zero */

loc_00299B1C: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_00299B21: ;
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
    if (TEST_Z(esi, esi)) goto loc_00299B71; /* je: equal / zero */

loc_00299B49: ;
    if (CMP_B(MEM32(esi + 0x80), 0x404)) goto loc_00299B71; /* jb: below (unsigned <) */

loc_00299B55: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00299B5F: ;
    PUSH32(esp, 0x404);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00299B6A: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_00299B95; /* jne: not equal / not zero */

loc_00299B71: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00299B83: ;
    PUSH32(esp, 0x404);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00299B8E: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_00299BA3; /* je: equal / zero */

loc_00299B95: ;
    xmm5 = MEMF(esp + 0x18); /* movss */
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00299C20(); /* call 0x00299C20 */

loc_00299BA1: ;
    goto loc_00299BA5;

loc_00299BA3: ;
    eax = 0; /* xor self */

loc_00299BA5: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, edi);
    MEM32(ebx + 0x768) = eax;
    POP32(esp, esi);
    if (TEST_Z(eax, eax)) goto loc_00299BED; /* je: equal / zero */

loc_00299BB1: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00299BB6: ;
    xmm1 = (float)(int32_t)MEM32(ebp * 4 + 0x59B6D0); /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x648E54); /* mulss */
    eax = MEM32(esp + 8);
    xmm1 = xmm1 * MEMF(0x648D2C); /* mulss */
    edx = MEM32(ebx + 0x768);
    xmm0 = xmm0 + xmm1; /* addss */
    xmm0 = xmm0 + MEMF(esp + 0x10); /* addss */
    ecx = ebp + eax * 2;
    MEMF(edx + ecx * 4 + 4) = xmm0; /* movss */

loc_00299BED: ;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00299C00
 * Original: 0x00299C00 - 0x00299C16 (22 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00299C00(void)
{
    int _cf = 0; /* carry flag */

loc_00299C00: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, eax);
    eax = MEM32(ecx + 8);
    PUSH32(esp, 0); sub_0028BC60(); /* call 0x0028BC60 */

loc_00299C0C: ;
    esp = esp + 4;
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = (uint32_t)(-(int32_t)eax);
    esp += 4; return; /* ret */

}

/**
 * sub_00299C20
 * Original: 0x00299C20 - 0x00299C7F (95 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00299C20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm5, xmm6;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00299C20: ;
    xmm6 = MEMF(0x648D2C); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp) = 0x60566C;
    edi = 0x59B6D0;
    ebp = ebp + 4;
    /* nop */

loc_00299C40: ;
    esi = ebp;
    ebx = 0x80;

loc_00299C47: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00299C4C: ;
    xmm1 = (float)(int32_t)MEM32(edi); /* cvtsi2ss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm0 = xmm0 + xmm5; /* addss */
    MEMF(esi) = xmm0; /* movss */
    esi = esi + 8;
    ebx--;
    if ((ebx != 0)) goto loc_00299C47; /* jne: not equal / not zero */

loc_00299C66: ;
    edi = edi + 4;
    ebp = ebp + 4;
    if (CMP_L(edi, 0x59B6D8)) goto loc_00299C40; /* jl: less (signed <) */

loc_00299C74: ;
    eax = MEM32(esp + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00299C80
 * Original: 0x00299C80 - 0x00299CA7 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00299C80(void)
{
    int _flags = 0; /* fallback flag var */

loc_00299C80: ;
    (void)0; /* test MEM8(esp + 4), 1 - flags set for next jcc */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x60566C;
    if (TEST_Z(MEM8(esp + 4), 1)) goto loc_00299CA1; /* je: equal / zero */

loc_00299C90: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00299C9E: ;
    esp = esp + 4;

loc_00299CA1: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00299CB0
 * Original: 0x00299CB0 - 0x00299CBD (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00299CB0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00299CB0: ;
    SET_LO8(eax, MEM8(edi + 0x76E));
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00299CBD(); return; } /* je: equal / zero */

loc_00299CBA: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_00299D60
 * Original: 0x00299D60 - 0x00299E17 (183 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00299D60(void)
{
    int _flags = 0; /* fallback flag var */

loc_00299D60: ;
    SET_LO8(edx, MEM8(eax + ecx + 0x7BC));
    if (TEST_NZ(LO8(edx), LO8(edx))) { sub_00299E17(); return; } /* jne: not equal / not zero */

loc_00299D6F: ;
    SET_LO8(eax, MEM8(0x86E9A2));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00299DD9; /* je: equal / zero */

loc_00299D78: ;
    (void)0; /* cmp MEM32(0x863D04), 1 - flags set for next jcc */
    SET_LO16(ecx, MEM16(ecx + 0x9D8));
    if (CMP_EQ(MEM32(0x863D04), 1)) goto loc_00299D93; /* je: equal / zero */

loc_00299D88: ;
    eax = MEM32(0x86E9A0);
    if (CMP_NE(LO16(eax), 0xFFFE)) goto loc_00299D96; /* jne: not equal / not zero */

loc_00299D93: ;
    eax = eax | 0xFFFFFFFFu;

loc_00299D96: ;
    if (CMP_L(LO16(ecx), LO16(eax))) goto loc_00299DD9; /* jl: less (signed <) */

loc_00299D9B: ;
    SET_LO8(eax, MEM8(0x8758AD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00299DD3; /* jne: not equal / not zero */

loc_00299DA4: ;
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x60579C;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_00299DB0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x5D718C);
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x87B170);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_00299DC2: ;
    esp = esp + 0x10;
    MEM8(0x87B1AF) = 0;
    MEM8(0x8758AD) = 1;

loc_00299DD3: ;
    eax = 0x87B170;
    esp += 4; return; /* ret */

loc_00299DD9: ;
    SET_LO8(eax, MEM8(0x8758AE));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00299E11; /* jne: not equal / not zero */

loc_00299DE2: ;
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x6057C4;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_00299DEE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x5D718C);
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x87B130);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_00299E00: ;
    esp = esp + 0x10;
    MEM8(0x87B16F) = 0;
    MEM8(0x8758AE) = 1;

loc_00299E11: ;
    eax = 0x87B130;
    esp += 4; return; /* ret */

}

/**
 * sub_00299E30
 * Original: 0x00299E30 - 0x00299E6D (61 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00299E30(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00299E30: ;
    eax = esi;
    PUSH32(esp, edi);
    eax = eax << 4;
    eax = eax + ebx;
    edi = esi + eax;
    PUSH32(esp, 0x10);
    PUSH32(esp, ecx);
    edx = edi + 0x794;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046EEC0(); /* call 0x0046EEC0 */

loc_00299E4A: ;
    MEM8(edi + 0x7A4) = 0;
    SET_LO8(eax, MEM8(esi + ebx + 0x7BC));
    esp = esp + 0xC;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    POP32(esp, edi);
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_00299E6D(); return; } /* jne: not equal / not zero */

loc_00299E60: ;
    MEM8(esi + ebx + 0x7BC) = 1;
    g_seh_ebp = ebp; sub_0028BD90(); return; /* tail jmp 0x0028BD90 */

}

/**
 * sub_00299E70
 * Original: 0x00299E70 - 0x00299EB3 (67 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00299E70(void)
{

loc_00299E70: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    MEM32(esi + 0x34) = eax;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, 0x21);
    PUSH32(esp, eax);
    edi = esi + 0x40;
    PUSH32(esp, edi);
    MEM32(esi + 0x38) = ecx;
    MEM32(esi + 0x3C) = edx;
    PUSH32(esp, 0); sub_0046FCD6(); /* call 0x0046FCD6 */

loc_00299E99: ;
    PUSH32(esp, edi);
    MEM16(esi + 0x80) = 0;
    PUSH32(esp, 0); sub_0046E45A(); /* call 0x0046E45A */

loc_00299EA8: ;
    esp = esp + 0x10;
    POP32(esp, edi);
    MEM32(esi + 0x3C) = eax;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00299EC0
 * Original: 0x00299EC0 - 0x00299EDA (26 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00299EC0(void)
{

loc_00299EC0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(ecx + 0x34) = eax;
    eax = 0; /* xor self */
    MEM32(ecx + 0x38) = edx;
    MEM32(ecx + 0x3C) = eax;
    MEM16(ecx + 0x40) = LO16(eax);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00299EE0
 * Original: 0x00299EE0 - 0x00299F50 (112 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00299EE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00299EE0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x34);
    PUSH32(esp, 2);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_00299EF2: ;
    eax = MEM32(edi + 0x38);
    PUSH32(esp, 2);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_00299EFC: ;
    eax = MEM32(edi + 0x34);
    esp = esp + 8;
    if (CMP_EQ(eax, 1)) goto loc_00299F0C; /* je: equal / zero */

loc_00299F07: ;
    if (CMP_NE(eax, 3)) goto loc_00299F4B; /* jne: not equal / not zero */

loc_00299F0C: ;
    eax = MEM32(edi + 0x3C);
    PUSH32(esp, ebx);
    PUSH32(esp, 6);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_00299F17: ;
    eax = MEM32(edi + 0x3C);
    esp = esp + 4;
    ebx = 0; /* xor self */
    if (CMP_BE(eax & eax, 0)) goto loc_00299F4A; /* jbe: below or equal (unsigned <=) */

loc_00299F23: ;
    PUSH32(esp, ebp);
    ebp = edi + 0x40;
    goto loc_00299F30;

    /* nop */

loc_00299F30: ;
    eax = ZX16(MEM16(ebp));
    PUSH32(esp, 0x10);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_00299F3B: ;
    eax = MEM32(edi + 0x3C);
    esp = esp + 4;
    ebx++;
    ebp = ebp + 2;
    if (CMP_B(ebx, eax)) goto loc_00299F30; /* jb: below (unsigned <) */

loc_00299F49: ;
    POP32(esp, ebp);

loc_00299F4A: ;
    POP32(esp, ebx);

loc_00299F4B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00299FC0
 * Original: 0x00299FC0 - 0x0029A2A1 (737 bytes, 224 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00299FC0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00299FC0: ;
    esp = esp - 0x15C;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ecx;
    eax = MEM32(ebp + 0x34);
    (void)0; /* cmp eax, 3 - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_A(eax, 3)) goto loc_0029A05F; /* ja: above (unsigned >) */

loc_00299FD8: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x29A2B0); /* switch: 4 entries, 4 targets */
    if (_jt == 0x00299FDFu) goto loc_00299FDF;
    if (_jt == 0x0029A06Fu) goto loc_0029A06F;
    if (_jt == 0x0029A0BFu) goto loc_0029A0BF;
    if (_jt == 0x0029A150u) goto loc_0029A150;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00299FDF: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    eax = 0x862C40;
    PUSH32(esp, 0); sub_00296250(); /* call 0x00296250 */

loc_00299FED: ;
    ebx = eax;
    if (TEST_Z(ebx, ebx)) { sub_0029A2A1(); return; } /* je: equal / zero */

loc_00299FF7: ;
    eax = MEM32(ebp + 0x38);
    ecx = esp + 0x28;
    PUSH32(esp, 0); sub_00289620(); /* call 0x00289620 */

loc_0029A003: ;
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    MEM16(esp + 0x6C) = 0;
    PUSH32(esp, 0); sub_0046E45A(); /* call 0x0046E45A */

loc_0029A014: ;
    PUSH32(esp, 0x84);
    edi = eax;
    PUSH32(esp, 0); sub_002AF3F0(); /* call 0x002AF3F0 */

loc_0029A020: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0029A05F; /* je: equal / zero */

loc_0029A027: ;
    PUSH32(esp, 0); sub_002993F0(); /* call 0x002993F0 */

loc_0029A02C: ;
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_0029A05F; /* je: equal / zero */

loc_0029A032: ;
    ecx = MEM32(ebp + 0x38);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x68), _icall_esp); /* indirect call */
    }

loc_0029A045: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x1F4);
    PUSH32(esp, 0); sub_004168D0(); /* call 0x004168D0 */

loc_0029A051: ;
    edx = MEM32(esi);
    eax = MEM32(ebx + 0x9DC);

loc_0029A059: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_0029A05F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0x15C;
    esp += 4; return; /* ret */

loc_0029A06F: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, ecx);
    eax = 0x862C40;
    PUSH32(esp, 0); sub_00296250(); /* call 0x00296250 */

loc_0029A07D: ;
    if (TEST_Z(eax, eax)) goto loc_0029A05F; /* je: equal / zero */

loc_0029A081: ;
    edx = MEM32(ebp + 0x38);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x12C);
    esi = edx + eax + 0x2A0;
    PUSH32(esp, 0x20);
    ebp = ebp + 0x40;
    eax = esi + 0xAA;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046FCD6(); /* call 0x0046FCD6 */

loc_0029A0A3: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    MEM16(esi + 0xEA) = 0;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0x15C;
    esp += 4; return; /* ret */

loc_0029A0BF: ;
    ecx = MEM32(ebp + 0x38);
    edi = MEM32(ecx * 4 + 0x862CD0);
    PUSH32(esp, 0); sub_00351C60(); /* call 0x00351C60 */

loc_0029A0CE: ;
    ebx = eax;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0046E45A(); /* call 0x0046E45A */

loc_0029A0D6: ;
    edx = MEM32(ebp + 8);
    esp = esp + 4;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, edx);
    eax = 0x862C40;
    PUSH32(esp, 0); sub_00296250(); /* call 0x00296250 */

loc_0029A0EB: ;
    edi = eax;
    if (TEST_Z(edi, edi)) { sub_0029A2A1(); return; } /* je: equal / zero */

loc_0029A0F5: ;
    PUSH32(esp, 0x84);
    PUSH32(esp, 0); sub_002AF3F0(); /* call 0x002AF3F0 */

loc_0029A0FF: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_0029A05F; /* je: equal / zero */

loc_0029A10A: ;
    PUSH32(esp, 0); sub_002993F0(); /* call 0x002993F0 */

loc_0029A10F: ;
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_0029A05F; /* je: equal / zero */

loc_0029A119: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(ebp + 0x38);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 3);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x68), _icall_esp); /* indirect call */
    }

loc_0029A12C: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x1F4);
    PUSH32(esp, 0); sub_004168D0(); /* call 0x004168D0 */

loc_0029A138: ;
    eax = MEM32(ebp + 0x38);
    MEM8(edi + eax + 0x7B8) = 1;
    edx = MEM32(esi);
    eax = MEM32(edi + 0x9DC);
    goto loc_0029A059;

loc_0029A150: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, ecx);
    eax = 0x862C40;
    PUSH32(esp, 0); sub_00296250(); /* call 0x00296250 */

loc_0029A15E: ;
    edi = eax;
    if (TEST_Z(edi, edi)) { sub_0029A2A1(); return; } /* je: equal / zero */

loc_0029A168: ;
    edx = ebp + 0x40;
    PUSH32(esp, edx);
    PUSH32(esp, 0x5D718C);
    eax = esp + 0x1C;
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_0029A17D: ;
    esi = MEM32(ebp + 0x38);
    esp = esp + 0x10;
    ecx = esp + 0x14;
    ebx = edi;
    MEM8(esp + 0x24) = 0;
    PUSH32(esp, 0); sub_00299E30(); /* call 0x00299E30 */

loc_0029A193: ;
    edx = MEM32(ebp + 0x38);
    SET_LO8(eax, MEM8(edx + edi + 0x7BA));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0029A05F; /* jne: not equal / not zero */

loc_0029A1A5: ;
    if (CMP_NE(MEM32(0x863D04), 3)) goto loc_0029A24A; /* jne: not equal / not zero */

loc_0029A1B2: ;
    eax = edx;
    ecx = edi;
    PUSH32(esp, 0); sub_0029A800(); /* call 0x0029A800 */

loc_0029A1BB: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0029A05F; /* je: equal / zero */

loc_0029A1C3: ;
    ecx = edx;
    edx = edi;
    PUSH32(esp, 0); sub_0029A7D0(); /* call 0x0029A7D0 */

loc_0029A1CC: ;
    eax = eax | edx;
    if ((eax == 0)) goto loc_0029A05F; /* je: equal / zero */

loc_0029A1D4: ;
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x603FB4;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_0029A1E0: ;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x38);
    ecx = edi;
    PUSH32(esp, 0); sub_00299D60(); /* call 0x00299D60 */

loc_0029A1EB: ;
    PUSH32(esp, eax);
    ecx = esp + 0x74;
    PUSH32(esp, 0x603FA4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046F583(); /* call 0x0046F583 */

loc_0029A1FB: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ebx = esp + 0x88;
    PUSH32(esp, 0); sub_0027A1F0(); /* call 0x0027A1F0 */

loc_0029A20D: ;
    eax = MEM32(ebp + 0x38);
    esp = esp + 0x1C;
    ecx = edi;
    PUSH32(esp, 0); sub_00299D60(); /* call 0x00299D60 */

loc_0029A21A: ;
    ecx = MEM32(ebp + 0x38);
    PUSH32(esp, eax);
    edx = edi;
    PUSH32(esp, 0); sub_0029A7D0(); /* call 0x0029A7D0 */

loc_0029A225: ;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00289090(); /* call 0x00289090 */

loc_0029A22C: ;
    edx = MEM32(ebp + 0x38);
    esp = esp + 0xC;
    MEM8(edi + edx + 0x7BA) = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0x15C;
    esp += 4; return; /* ret */

loc_0029A24A: ;
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x603FB4;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_0029A256: ;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x38);
    ecx = edi;
    PUSH32(esp, 0); sub_00299D60(); /* call 0x00299D60 */

loc_0029A261: ;
    PUSH32(esp, eax);
    eax = esp + 0x74;
    PUSH32(esp, 0x603FA4);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046F583(); /* call 0x0046F583 */

loc_0029A271: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ebx = esp + 0x88;
    PUSH32(esp, 0); sub_0027A1F0(); /* call 0x0027A1F0 */

loc_0029A283: ;
    ecx = MEM32(ebp + 0x38);
    esp = esp + 0x1C;
    MEM8(edi + ecx + 0x7BA) = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0x15C;
    esp += 4; return; /* ret */

}

/**
 * sub_0029A380
 * Original: 0x0029A380 - 0x0029A434 (180 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029A380(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029A380: ;
    eax = MEM32(0x84A19C);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(eax, ebx)) goto loc_0029A398; /* jne: not equal / not zero */

loc_0029A393: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0029A398: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (CMP_EQ(esi, ebx)) goto loc_0029A3E0; /* je: equal / zero */

loc_0029A3BE: ;
    if (CMP_B(MEM32(esi + 0x80), 0x34)) goto loc_0029A3E0; /* jb: below (unsigned <) */

loc_0029A3C7: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0029A3D1: ;
    PUSH32(esp, 0x34);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0029A3D9: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_0029A401; /* jne: not equal / not zero */

loc_0029A3E0: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0029A3F2: ;
    PUSH32(esp, 0x34);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0029A3FA: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) { sub_0029A434(); return; } /* je: equal / zero */

loc_0029A401: ;
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
    MEM32(eax) = 0x605678;
    esi = eax;
    g_seh_ebp = ebp; sub_0029A436(); return; /* tail jmp 0x0029A436 */

}

/**
 * sub_0029A480
 * Original: 0x0029A480 - 0x0029A542 (194 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029A480(void)
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

loc_0029A480: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x605778;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_0029A490: ;
    PUSH32(esp, 0x14);
    edi = eax;
    PUSH32(esp, 0); sub_001FFB50(); /* call 0x001FFB50 */

loc_0029A499: ;
    ebx = eax;
    ebp = 0; /* xor self */
    esp = esp + 4;
    if (CMP_EQ(ebx, ebp)) goto loc_0029A4C7; /* je: equal / zero */

loc_0029A4A4: ;
    MEM32(ebx + 4) = ebp;
    eax = ebx + 0xC;
    MEM32(ebx) = 0x5F7774;
    PUSH32(esp, 0); sub_00060900(); /* call 0x00060900 */

loc_0029A4B5: ;
    esi = ebx + 8;
    PUSH32(esp, 0x5FAE34);
    PUSH32(esp, 0); sub_00075D90(); /* call 0x00075D90 */

loc_0029A4C2: ;
    esp = esp + 4;
    ebp = ebx;

loc_0029A4C7: ;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_0003C1E0(); /* call 0x0003C1E0 */

loc_0029A4CE: ;
    edi = eax;
    eax = MEM32(edi + 0x10);
    esi = MEM32(eax + 0x4C);
    ecx = MEM32(esi + 0x38);
    eax = eax + 0x4C;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    ebx = 1;
    MEM8(esi + 0x31) = LO8(ebx);
    if (TEST_Z(ecx, ecx)) goto loc_0029A4EE; /* je: equal / zero */

loc_0029A4E8: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_0029A4EE: ;
    MEM32(esi + 0x38) = ebp;
    eax = MEM32(edi + 0x10);
    ecx = MEM32(eax + 0x4C);
    eax = eax + 0x4C;
    PUSH32(esp, 0x40800000);
    PUSH32(esp, 0x13);
    SET_LO8(eax, 0); /* xor self */
    MEM8(ecx + 0x30) = LO8(ebx);
    PUSH32(esp, 0); sub_0003C1E0(); /* call 0x0003C1E0 */

loc_0029A50B: ;
    ebx = eax;
    PUSH32(esp, 0); sub_00233630(); /* call 0x00233630 */

loc_0029A512: ;
    xmm0 = MEMF(0x86E97C); /* movss */
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    POP32(esp, edi);
    POP32(esp, esi);
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (1 /* jp after test - parity */) goto loc_0029A53C; /* jp: parity */

loc_0029A52B: ;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0029A530: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(0x86E97C) = (float)fp_top(); fp_popp(); /* fstp */

loc_0029A53C: ;
    eax = 1;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0029A550
 * Original: 0x0029A550 - 0x0029A5FF (175 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029A550(void)
{
    int _flags = 0; /* fallback flag var */

loc_0029A550: ;
    eax = MEM32(0x84A19C);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(eax, ebx)) goto loc_0029A563; /* jne: not equal / not zero */

loc_0029A55E: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0029A563: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (CMP_EQ(esi, ebx)) goto loc_0029A5AB; /* je: equal / zero */

loc_0029A589: ;
    if (CMP_B(MEM32(esi + 0x80), 0x34)) goto loc_0029A5AB; /* jb: below (unsigned <) */

loc_0029A592: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0029A59C: ;
    PUSH32(esp, 0x34);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0029A5A4: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_0029A5CC; /* jne: not equal / not zero */

loc_0029A5AB: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0029A5BD: ;
    PUSH32(esp, 0x34);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0029A5C5: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) { sub_0029A5FF(); return; } /* je: equal / zero */

loc_0029A5CC: ;
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
    MEM32(eax) = 0x605678;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0029A610
 * Original: 0x0029A610 - 0x0029A723 (275 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029A610(void)
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

loc_0029A610: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    SET_LO8(eax, MEM8(ebx + ebp + 0x7BC));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0029A71F; /* jne: not equal / not zero */

loc_0029A624: ;
    fp_push(MEMF(ebp + ebx * 4 + 0x7C8)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 8) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0029A63A: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_0029A71F; /* jbe: below or equal (unsigned <=) */

loc_0029A64A: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_0029A658; /* jne: not equal / not zero */

loc_0029A653: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0029A658: ;
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
    if (TEST_Z(esi, esi)) goto loc_0029A6A8; /* je: equal / zero */

loc_0029A680: ;
    if (CMP_B(MEM32(esi + 0x80), 0x84)) goto loc_0029A6A8; /* jb: below (unsigned <) */

loc_0029A68C: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0029A696: ;
    PUSH32(esp, 0x84);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0029A6A1: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_0029A6CC; /* jne: not equal / not zero */

loc_0029A6A8: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0029A6BA: ;
    PUSH32(esp, 0x84);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0029A6C5: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0029A71D; /* je: equal / zero */

loc_0029A6CC: ;
    PUSH32(esp, 0); sub_002993F0(); /* call 0x002993F0 */

loc_0029A6D1: ;
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_0029A71D; /* je: equal / zero */

loc_0029A6D7: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 2);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x6C), _icall_esp); /* indirect call */
    }

loc_0029A6E1: ;
    PUSH32(esp, 0x1388);
    PUSH32(esp, 0x1F4);
    PUSH32(esp, 0); sub_004168D0(); /* call 0x004168D0 */

loc_0029A6F0: ;
    eax = MEM32(ebp + 0x9DC);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_0029A6FE: ;
    ecx = MEM32(esp + 0x14);
    MEM8(ebx + ebp + 0x7B6) = 1;
    MEM32(ebp + ebx * 4 + 0x7C0) = ecx;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0029A716: ;
    MEMF(ebp + ebx * 4 + 0x7C8) = (float)fp_top(); fp_popp(); /* fstp */

loc_0029A71D: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0029A71F: ;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0029A730
 * Original: 0x0029A730 - 0x0029A74F (31 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029A730(void)
{
    int _flags = 0; /* fallback flag var */

loc_0029A730: ;
    eax = MEM32(esi + 0x9E0);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_0029A74E; /* je: equal / zero */

loc_0029A73B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00418A60(); /* call 0x00418A60 */

loc_0029A741: ;
    esp = esp + 4;
    MEM32(esi + 0x9E0) = 0xFFFFFFFFu;

loc_0029A74E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0029A750
 * Original: 0x0029A750 - 0x0029A775 (37 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029A750(void)
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

loc_0029A750: ;
    PUSH32(esp, ecx);
    fp_push(MEMF(eax + 0x9E4)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0029A765: ;
    fp_push(MEMF(esp)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) { sub_0029A775(); return; } /* jbe: below or equal (unsigned <=) */

loc_0029A76E: ;
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
 * sub_0029A780
 * Original: 0x0029A780 - 0x0029A7C5 (69 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029A780(void)
{
    int _flags = 0; /* fallback flag var */

loc_0029A780: ;
    if (TEST_S(eax, eax)) goto loc_0029A7C2; /* jl: less (signed <) */

loc_0029A784: ;
    if (CMP_GE(eax, 2)) goto loc_0029A7C2; /* jge: greater or equal (signed >=) */

loc_0029A789: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    (void)0; /* cmp edx, MEM32(ecx + eax * 8 + 0xA18) - flags set for next jcc */
    esi = MEM32(esp + 0xC);
    if (CMP_NE(edx, MEM32(ecx + eax * 8 + 0xA18))) goto loc_0029A7A4; /* jne: not equal / not zero */

loc_0029A79B: ;
    if (CMP_EQ(esi, MEM32(ecx + eax * 8 + 0xA1C))) goto loc_0029A7AB; /* je: equal / zero */

loc_0029A7A4: ;
    MEM8(ecx + 0x780) = 1;

loc_0029A7AB: ;
    MEM32(ecx + eax * 8 + 0xA1C) = esi;
    MEM32(ecx + eax * 8 + 0xA18) = edx;
    MEM8(eax + ecx + 0xA28) = 1;
    POP32(esp, esi);

loc_0029A7C2: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0029A7D0
 * Original: 0x0029A7D0 - 0x0029A7F3 (35 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029A7D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0029A7D0: ;
    if (TEST_S(ecx, ecx)) { sub_0029A7F3(); return; } /* jl: less (signed <) */

loc_0029A7D4: ;
    if (CMP_GE(ecx, 2)) { sub_0029A7F3(); return; } /* jge: greater or equal (signed >=) */

loc_0029A7D9: ;
    SET_LO8(eax, MEM8(ecx + edx + 0xA28));
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_0029A7F3(); return; } /* je: equal / zero */

loc_0029A7E4: ;
    eax = MEM32(edx + ecx * 8 + 0xA18);
    edx = MEM32(edx + ecx * 8 + 0xA1C);
    esp += 4; return; /* ret */

}

/**
 * sub_0029A800
 * Original: 0x0029A800 - 0x0029A811 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029A800(void)
{
    int _flags = 0; /* fallback flag var */

loc_0029A800: ;
    if (TEST_S(eax, eax)) { sub_0029A811(); return; } /* jl: less (signed <) */

loc_0029A804: ;
    if (CMP_GE(eax, 2)) { sub_0029A811(); return; } /* jge: greater or equal (signed >=) */

loc_0029A809: ;
    SET_LO8(eax, MEM8(eax + ecx + 0xA28));
    esp += 4; return; /* ret */

}

/**
 * sub_0029A820
 * Original: 0x0029A820 - 0x0029A824 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029A820(void)
{

loc_0029A820: ;
    eax = MEM32(ecx + 0x34);
    esp += 4; return; /* ret */

}

/**
 * sub_0029A830
 * Original: 0x0029A830 - 0x0029A875 (69 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029A830(void)
{
    int _flags = 0; /* fallback flag var */

loc_0029A830: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_0029A838: ;
    edx = 0; /* xor self */
    ecx = 0x6BE940;
    /* nop */

loc_0029A840: ;
    if (CMP_EQ(MEM32(ecx), eax)) { sub_0029A875(); return; } /* je: equal / zero */

loc_0029A844: ;
    ecx = ecx + 0x10;
    edx++;
    if (CMP_L(ecx, 0x6BED90)) goto loc_0029A840; /* jl: less (signed <) */

loc_0029A850: ;
    edx = 0x600E6C;
    ecx = MEM32(esi + 0x34);
    eax = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, 0x6059A4);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_0029A86E: ;
    esp = esp + 0x14;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0029A890
 * Original: 0x0029A890 - 0x0029A8E3 (83 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029A890(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029A890: ;
    esp = esp - 0x18;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x2C);
    if (TEST_NZ(eax, eax)) { sub_0029A8E3(); return; } /* jne: not equal / not zero */

loc_0029A89E: ;
    eax = MEM32(edi + 0x28);
    if (TEST_NZ(eax, eax)) { sub_0029A8E3(); return; } /* jne: not equal / not zero */

loc_0029A8A5: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_0029A8AA: ;
    esi = MEM32(esp + 0x24);
    PUSH32(esp, 8);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0029A8B5: ;
    edx = MEM32(edi);
    esp = esp + 4;
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x4C), _icall_esp); /* indirect call */
    }

loc_0029A8BF: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0029A8D2; /* je: equal / zero */

loc_0029A8C3: ;
    PUSH32(esp, 0x20);
    eax = 0xCAFEBABEu;
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0029A8CF: ;
    esp = esp + 4;

loc_0029A8D2: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x40), _icall_esp); /* indirect call */
    }

loc_0029A8DA: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x4C), _icall_esp); /* indirect call */
    }

loc_0029A8E1: ;
    g_seh_ebp = ebp; sub_0029A958(); return; /* tail jmp 0x0029A958 */

}

/**
 * sub_0029A980
 * Original: 0x0029A980 - 0x0029A9D7 (87 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029A980(void)
{
    int _flags = 0; /* fallback flag var */

loc_0029A980: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 8);
    edi = ecx;
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0029A98F: ;
    eax = MEM32(edi);
    esp = esp + 4;
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x4C), _icall_esp); /* indirect call */
    }

loc_0029A999: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0029A9A7; /* je: equal / zero */

loc_0029A99D: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0029A9A4: ;
    esp = esp + 4;

loc_0029A9A7: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x38), _icall_esp); /* indirect call */
    }

loc_0029A9AF: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x4C), _icall_esp); /* indirect call */
    }

loc_0029A9B6: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0029A9D2; /* je: equal / zero */

loc_0029A9BA: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0029A9C1: ;
    esp = esp + 4;
    if (CMP_EQ(eax, 0x35014541)) goto loc_0029A9D2; /* je: equal / zero */

loc_0029A9CB: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_0029A9D2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0029A9E0
 * Original: 0x0029A9E0 - 0x0029AA65 (133 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029A9E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029A9E0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_0029A9EC: ;
    edx = MEM32(esi);
    ecx = esi;
    edi = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x54), _icall_esp); /* indirect call */
    }

loc_0029A9F5: ;
    MEM8(esp + 0x10) = LO8(eax);
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x5C), _icall_esp); /* indirect call */
    }

loc_0029AA00: ;
    edx = MEM32(esi);
    ecx = esi;
    ebx = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x60), _icall_esp); /* indirect call */
    }

loc_0029AA09: ;
    ebp = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x58), _icall_esp); /* indirect call */
    }

loc_0029AA12: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    esi = ZX8(LO8(eax));
    if (TEST_S(edi, edi)) { sub_0029AA65(); return; } /* jl: less (signed <) */

loc_0029AA19: ;
    if (CMP_GE(edi, 0x4C)) { sub_0029AA65(); return; } /* jge: greater or equal (signed >=) */

loc_0029AA1E: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0029AA23: ;
    ecx = MEM32(esp + 0x1C);
    xmm0 = xmm0 + MEMF(0x648D14); /* addss */
    PUSH32(esp, ecx);
    eax = 0x862C40;
    PUSH32(esp, 0); sub_00296250(); /* call 0x00296250 */

loc_0029AA3A: ;
    if (TEST_Z(eax, eax)) { sub_0029AA65(); return; } /* je: equal / zero */

loc_0029AA3E: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    xmm1 = (float)(int32_t)ebx; /* cvtsi2ss */
    xmm1 = xmm1 * xmm0; /* mulss */
    edx = (int32_t)xmm1; /* cvttss2si */
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x24);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00299680(); /* call 0x00299680 */

loc_0029AA5D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}
