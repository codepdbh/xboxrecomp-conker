/**
 * sub_0053E603
 * Original: 0x0053E603 - 0x0053EEE8 (2277 bytes, 544 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053E603(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0053E603: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax + 0x20;
    MEM32(ebp + 0x30) = eax;
    eax = edi + 0x20;
    MEM32(ebp + 0x248C) = eax;
    eax = 0; /* xor self */
    MEM32(ebp + 0x2490) = edi;
    ecx = 0x10;
    esi = ebp;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    PUSH32(esp, 0); sub_0053BE00(); /* call 0x0053BE00 */

loc_0053E62A: ;
    if (TEST_S(eax, eax)) goto loc_0053EEDC; /* jl: less (signed <) */

loc_0053E632: ;
    PUSH32(esp, ebx);
    MEM32(0x5499F0) = MEM32(0x5499F0) | 0xFF7F7F;
    ebx = ebp + 0x1C28;
    eax = ebx;
    MEM32(ebp + 0x94C) = 0x40;
    PUSH32(esp, 0); sub_005401E5(); /* call 0x005401E5 */

loc_0053E654: ;
    PUSH32(esp, 0x7FFAFFF);
    edi = 0; /* xor self */
    PUSH32(esp, edi);
    PUSH32(esp, 0x3D);
    PUSH32(esp, 3);
    esi = esp + 0xA4;
    eax = ebx;
    PUSH32(esp, 0); sub_00540554(); /* call 0x00540554 */

loc_0053E66E: ;
    PUSH32(esp, 0x7FFAFFF);
    PUSH32(esp, edi);
    PUSH32(esp, 2);
    PUSH32(esp, 5);
    esi = esp + 0x84;
    eax = ebx;
    PUSH32(esp, 0); sub_00540554(); /* call 0x00540554 */

loc_0053E686: ;
    PUSH32(esp, 0x7FFAFFF);
    PUSH32(esp, edi);
    PUSH32(esp, 3);
    PUSH32(esp, 4);
    esi = esp + 0x74;
    eax = ebx;
    PUSH32(esp, 0); sub_00540554(); /* call 0x00540554 */

loc_0053E69B: ;
    PUSH32(esp, 0x7FFAFFF);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3D);
    PUSH32(esp, 9);
    esi = esp + 0x24;
    eax = ebx;
    PUSH32(esp, 0); sub_00540554(); /* call 0x00540554 */

loc_0053E6B0: ;
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, 0x7FFAFFF);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3D);
    PUSH32(esp, 0xA);
    esi = esp + 0x34;
    eax = ebx;
    MEM32(ebp + 0x247C) = ecx;
    PUSH32(esp, 0); sub_00540554(); /* call 0x00540554 */

loc_0053E6CF: ;
    edx = MEM32(esp + 0x30);
    PUSH32(esp, 0x7FFAFFF);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3D);
    PUSH32(esp, 0xB);
    esi = esp + 0x54;
    eax = ebx;
    MEM32(ebp + 0x2480) = edx;
    PUSH32(esp, 0); sub_00540554(); /* call 0x00540554 */

loc_0053E6EE: ;
    ecx = MEM32(ebp + 0x2490);
    eax = MEM32(esp + 0x50);
    PUSH32(esp, 0x1F);
    PUSH32(esp, ecx);
    PUSH32(esp, 3);
    MEM32(ebp + 0x2484) = eax;
    PUSH32(esp, 2);
    esi = esp + 0xB4;
    eax = ebx;
    PUSH32(esp, 0); sub_00540554(); /* call 0x00540554 */

loc_0053E713: ;
    edx = MEM32(ebp + 0x248C);
    PUSH32(esp, 0x1F);
    PUSH32(esp, edx);
    PUSH32(esp, 0x3D);
    PUSH32(esp, 7);
    esi = esp + 0x94;
    eax = ebx;
    PUSH32(esp, 0); sub_00540554(); /* call 0x00540554 */

loc_0053E72E: ;
    PUSH32(esp, 0x10000000);
    PUSH32(esp, 0x80000000u);
    PUSH32(esp, 0x3D);
    PUSH32(esp, 0xC);
    esi = esp + 0x64;
    eax = ebx;
    PUSH32(esp, 0); sub_00540554(); /* call 0x00540554 */

loc_0053E747: ;
    PUSH32(esp, 0x20);
    eax = MEM32(ebp + 0x30);
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D);
    PUSH32(esp, 8);
    esi = esp + 0xC4;
    eax = ebx;
    PUSH32(esp, 0); sub_00540554(); /* call 0x00540554 */

loc_0053E75F: ;
    PUSH32(esp, 0x7FFAFFF);
    PUSH32(esp, edi);
    PUSH32(esp, 2);
    PUSH32(esp, 6);
    esi = esp + 0x44;
    eax = ebx;
    PUSH32(esp, 0); sub_00540554(); /* call 0x00540554 */

loc_0053E774: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    edx = esi;
    PUSH32(esp, edx);
    edx = ebx;
    PUSH32(esp, 0); sub_0054061D(); /* call 0x0054061D */

loc_0053E783: ;
    eax = esi;
    ecx = ebx;
    PUSH32(esp, 0); sub_0054067B(); /* call 0x0054067B */

loc_0053E78C: ;
    eax = esp + 0x54;
    ecx = ebx;
    PUSH32(esp, 0); sub_0054067B(); /* call 0x0054067B */

loc_0053E797: ;
    eax = esp + 0xA4;
    ecx = ebx;
    PUSH32(esp, 0); sub_0054067B(); /* call 0x0054067B */

loc_0053E7A5: ;
    eax = esp + 0x84;
    ecx = ebx;
    PUSH32(esp, 0); sub_0054067B(); /* call 0x0054067B */

loc_0053E7B3: ;
    eax = esp + 0x64;
    ecx = ebx;
    PUSH32(esp, 0); sub_0054067B(); /* call 0x0054067B */

loc_0053E7BE: ;
    eax = esp + 0x74;
    ecx = ebx;
    PUSH32(esp, 0); sub_0054067B(); /* call 0x0054067B */

loc_0053E7C9: ;
    eax = esp + 0x94;
    ecx = ebx;
    PUSH32(esp, 0); sub_0054067B(); /* call 0x0054067B */

loc_0053E7D7: ;
    eax = esp + 0x14;
    ecx = ebx;
    PUSH32(esp, 0); sub_0054067B(); /* call 0x0054067B */

loc_0053E7E2: ;
    eax = esp + 0x24;
    ecx = ebx;
    PUSH32(esp, 0); sub_0054067B(); /* call 0x0054067B */

loc_0053E7ED: ;
    eax = esp + 0x44;
    ecx = ebx;
    PUSH32(esp, 0); sub_0054067B(); /* call 0x0054067B */

loc_0053E7F8: ;
    eax = esp + 0xB4;
    ecx = ebx;
    PUSH32(esp, 0); sub_0054067B(); /* call 0x0054067B */

loc_0053E806: ;
    esi = MEM32(ebx + 0x160);
    ecx = MEM32(ebx + 0x100);
    eax = esi + 0x33;
    MEM32(ebx + 0x160) = eax;
    MEM32(ebx + ecx * 4 + 0x144) = esi;
    ecx = ebx;
    PUSH32(esp, 0); sub_00544BB1(); /* call 0x00544BB1 */

loc_0053E829: ;
    eax = MEM32(ebx);
    edx = esi + 0x70000;
    edx = edx << 4;
    MEM32(edx + eax) = 0x97;
    ecx = esi;
    ecx = ecx << 4;
    eax = eax + ecx;
    MEM32(eax + 0x700004) = 0xA00;
    MEM32(eax + 0x700008) = edi;
    MEM32(eax + 0x70000C) = edi;
    eax = MEM32(ebx + 0x100);
    ecx = MEM32(ebx + 0x130);
    edx = MEM32(ebx);
    eax = eax << 0x18;
    esi = esi & 0xFFFF;
    ecx = ecx + 0x68;
    eax = eax | esi;
    eax = eax | 0x80010000u;
    MEM32(ecx + edx) = 0xD;
    MEM32(ecx + edx + 4) = eax;
    eax = MEM32(ebx + 0x160);
    ecx = MEM32(ebx);
    edx = eax + 1;
    MEM32(ebx + 0x160) = edx;
    edx = eax + 0x70000;
    edx = edx << 4;
    MEM32(edx + ecx) = 0x1000039;
    edx = eax;
    edx = edx << 4;
    MEM32(ecx + edx + 0x700004) = edi;
    MEM32(ecx + edx + 0x700008) = edi;
    MEM32(ecx + edx + 0x70000C) = edi;
    ecx = ecx + edx;
    ecx = MEM32(ebx + 0x100);
    edx = MEM32(ebx + 0x130);
    esi = MEM32(ebx);
    MEM32(edx + esi + 0x70) = 0xE;
    ecx = ecx << 0x18;
    edx = edx + 0x70;
    eax = eax & 0xFFFF;
    ecx = ecx | eax;
    ecx = ecx | 0x80010000u;
    MEM32(edx + esi + 4) = ecx;
    eax = MEM32(ebx + 0x160);
    ecx = eax + 1;
    MEM32(ebx + 0x160) = ecx;
    ecx = MEM32(ebx);
    edx = eax + 0x70000;
    edx = edx << 4;
    MEM32(edx + ecx) = 0x9F;
    edx = eax;
    edx = edx << 4;
    MEM32(ecx + edx + 0x700004) = edi;
    MEM32(ecx + edx + 0x700008) = edi;
    MEM32(ecx + edx + 0x70000C) = edi;
    esi = MEM32(ebx);
    ecx = ecx + edx;
    ecx = MEM32(ebx + 0x100);
    edx = MEM32(ebx + 0x130);
    MEM32(edx + esi + 0x80) = 0x10;
    ecx = ecx << 0x18;
    edx = edx + 0x80;
    eax = eax & 0xFFFF;
    ecx = ecx | eax;
    ecx = ecx | 0x80010000u;
    MEM32(edx + esi + 4) = ecx;
    eax = MEM32(ebx + 0x160);
    ecx = eax + 1;
    MEM32(ebx + 0x160) = ecx;
    ecx = MEM32(ebx);
    edx = eax + 0x70000;
    edx = edx << 4;
    MEM32(edx + ecx) = 0x62;
    edx = eax;
    edx = edx << 4;
    MEM32(ecx + edx + 0x700004) = edi;
    ecx = ecx + edx;
    MEM32(ecx + 0x700008) = edi;
    MEM32(ecx + 0x70000C) = edi;
    ecx = MEM32(ebx + 0x100);
    edx = MEM32(ebx + 0x130);
    esi = MEM32(ebx);
    MEM32(edx + esi + 0x88) = 0x11;
    ecx = ecx << 0x18;
    edx = edx + 0x88;
    eax = eax & 0xFFFF;
    ecx = ecx | eax;
    ecx = ecx | 0x80010000u;
    MEM32(edx + esi + 4) = ecx;
    eax = MEM32(ebx + 0x160);
    ecx = eax + 1;
    MEM32(ebx + 0x160) = ecx;
    ecx = MEM32(ebx);
    edx = eax + 0x70000;
    edx = edx << 4;
    MEM32(edx + ecx) = 0x44;
    edx = eax;
    edx = edx << 4;
    ecx = ecx + edx;
    MEM32(ecx + 0x700004) = 0x201;
    MEM32(ecx + 0x700008) = edi;
    MEM32(ecx + 0x70000C) = edi;
    ecx = MEM32(ebx + 0x100);
    edx = MEM32(ebx + 0x130);
    esi = MEM32(ebx);
    MEM32(edx + esi + 0x90) = 0x12;
    ecx = ecx << 0x18;
    edx = edx + 0x90;
    eax = eax & 0xFFFF;
    ecx = ecx | eax;
    ecx = ecx | 0x80010000u;
    MEM32(edx + esi + 4) = ecx;
    eax = MEM32(ebx + 0x160);
    ecx = eax + 1;
    MEM32(ebx + 0x160) = ecx;
    ecx = MEM32(ebx);
    edx = eax + 0x70000;
    edx = edx << 4;
    MEM32(edx + ecx) = 0x57;
    edx = eax;
    edx = edx << 4;
    MEM32(ecx + edx + 0x700004) = 0xB00;
    MEM32(ecx + edx + 0x700008) = edi;
    MEM32(ecx + edx + 0x70000C) = edi;
    esi = MEM32(ebx);
    ecx = ecx + edx;
    ecx = MEM32(ebx + 0x100);
    edx = MEM32(ebx + 0x130);
    MEM32(edx + esi + 0x98) = 0x13;
    ecx = ecx << 0x18;
    edx = edx + 0x98;
    eax = eax & 0xFFFF;
    ecx = ecx | eax;
    ecx = ecx | 0x80010000u;
    MEM32(edx + esi + 4) = ecx;
    eax = MEM32(ebx + 0x160);
    ecx = eax + 1;
    MEM32(ebx + 0x160) = ecx;
    ecx = MEM32(ebx);
    edx = eax + 0x70000;
    edx = edx << 4;
    MEM32(edx + ecx) = 0x43;
    edx = eax;
    edx = edx << 4;
    MEM32(ecx + edx + 0x700004) = edi;
    MEM32(ecx + edx + 0x700008) = edi;
    ecx = ecx + edx;
    MEM32(ecx + 0x70000C) = edi;
    ecx = MEM32(ebx + 0x100);
    edx = MEM32(ebx + 0x130);
    esi = MEM32(ebx);
    MEM32(edx + esi + 0xA0) = 0x14;
    ecx = ecx << 0x18;
    edx = edx + 0xA0;
    eax = eax & 0xFFFF;
    ecx = ecx | eax;
    ecx = ecx | 0x80010000u;
    MEM32(edx + esi + 4) = ecx;
    eax = MEM32(ebx + 0x160);
    ecx = eax + 1;
    MEM32(ebx + 0x160) = ecx;
    ecx = MEM32(ebx);
    edx = eax + 0x70000;
    edx = edx << 4;
    MEM32(edx + ecx) = 0x12;
    edx = eax;
    edx = edx << 4;
    ecx = ecx + edx;
    MEM32(ecx + 0x700004) = edi;
    MEM32(ecx + 0x700008) = edi;
    MEM32(ecx + 0x70000C) = edi;
    ecx = MEM32(ebx + 0x100);
    edx = MEM32(ebx + 0x130);
    esi = MEM32(ebx);
    ecx = ecx << 0x18;
    eax = eax & 0xFFFF;
    ecx = ecx | eax;
    edx = edx + 0xA8;
    ecx = ecx | 0x80010000u;
    MEM32(edx + esi) = 0x15;
    MEM32(edx + esi + 4) = ecx;
    eax = MEM32(ebx + 0x160);
    ecx = eax + 1;
    MEM32(ebx + 0x160) = ecx;
    ecx = MEM32(ebx);
    edx = eax + 0x70000;
    edx = edx << 4;
    MEM32(edx + ecx) = 0x72;
    edx = eax;
    edx = edx << 4;
    MEM32(ecx + edx + 0x700004) = edi;
    MEM32(ecx + edx + 0x700008) = edi;
    MEM32(ecx + edx + 0x70000C) = edi;
    esi = MEM32(ebx);
    ecx = ecx + edx;
    ecx = MEM32(ebx + 0x100);
    edx = MEM32(ebx + 0x130);
    MEM32(edx + esi + 0xB0) = 0x16;
    ecx = ecx << 0x18;
    edx = edx + 0xB0;
    eax = eax & 0xFFFF;
    ecx = ecx | eax;
    ecx = ecx | 0x80010000u;
    MEM32(edx + esi + 4) = ecx;
    eax = MEM32(ebx + 0x160);
    ecx = eax + 1;
    MEM32(ebx + 0x160) = ecx;
    ecx = MEM32(ebx);
    edx = eax + 0x70000;
    edx = edx << 4;
    MEM32(edx + ecx) = 0x19;
    edx = eax;
    edx = edx << 4;
    MEM32(ecx + edx + 0x700004) = edi;
    MEM32(ecx + edx + 0x700008) = edi;
    MEM32(ecx + edx + 0x70000C) = edi;
    esi = MEM32(ebx);
    ecx = ecx + edx;
    ecx = MEM32(ebx + 0x100);
    edx = MEM32(ebx + 0x130);
    MEM32(edx + esi + 0xC0) = 0x18;
    ecx = ecx << 0x18;
    edx = edx + 0xC0;
    eax = eax & 0xFFFF;
    ecx = ecx | eax;
    ecx = ecx | 0x80010000u;
    MEM32(edx + esi + 4) = ecx;
    eax = MEM32(ebx + 0x160);
    ecx = eax + 1;
    MEM32(ebx + 0x160) = ecx;
    ecx = MEM32(ebx);
    edx = eax + 0x70000;
    edx = edx << 4;
    MEM32(edx + ecx) = 0x30;
    edx = eax;
    edx = edx << 4;
    MEM32(ecx + edx + 0x700004) = edi;
    ecx = ecx + edx;
    MEM32(ecx + 0x700008) = edi;
    MEM32(ecx + 0x70000C) = edi;
    ecx = MEM32(ebx + 0x100);
    edx = MEM32(ebx + 0x130);
    esi = MEM32(ebx);
    eax = eax & 0xFFFF;
    ecx = ecx << 0x18;
    ecx = ecx | eax;
    MEM32(edx + esi + 0xC8) = 0x19;
    edx = edx + 0xC8;
    ecx = ecx | 0x80010000u;
    MEM32(edx + esi + 4) = ecx;
    eax = MEM32(ebx);
    ecx = MEM32(esp + 0x10);
    MEM32(ebp + 0x934) = eax;
    edx = eax;
    eax = MEM32(ebp + 0x24);
    eax = eax & 0xFFFFFFF;
    eax++;
    MEM32(ebp + 0x1C20) = ecx;
    MEM32(0x549C90) = edx;
    MEM32(0x80000000u) = eax;
    /* TODO: wbinvd  */
    edx = ebp;
    PUSH32(esp, 0); sub_0053C450(); /* call 0x0053C450 */

loc_0053ED08: ;
    ecx = MEM32(ebp + 0x1C20);
    eax = MEM32(ecx + 0x44);
    edx = MEM32(ebp);
    edx = edx ^ eax;
    if (TEST_Z(edx, 0xFFFFFFF)) goto loc_0053ED4B; /* je: equal / zero */

loc_0053ED1E: ;
    edx = ecx;
    ecx = MEM32(ebp);
    ecx = ecx & 0xFFFFFFF;
    esi = 0x190;
    edi = edi;

loc_0053ED30: ;
    MEM32(esp + 0x10) = esi;

loc_0053ED34: ;
    eax = MEM32(esp + 0x10);
    eax--;
    MEM32(esp + 0x10) = eax;
    if ((eax != 0)) goto loc_0053ED34; /* jne: not equal / not zero */

loc_0053ED3F: ;
    eax = MEM32(edx + 0x44);
    eax = eax & 0xFFFFFFF;
    if (CMP_NE(eax, ecx)) goto loc_0053ED30; /* jne: not equal / not zero */

loc_0053ED4B: ;
    MEM32(-2147483648) = 0xDEADBEEFu;
    PUSH32(esp, 0); sub_0053E2D0(); /* call 0x0053E2D0 */

loc_0053ED5A: ;
    ecx = MEM32(esp + 0xCC);
    PUSH32(esp, ecx);
    edi = ebp;
    PUSH32(esp, 0); sub_0053F2F0(); /* call 0x0053F2F0 */

loc_0053ED69: ;
    if (TEST_S(eax, eax)) goto loc_0053EEDB; /* jl: less (signed <) */

loc_0053ED71: ;
    esi = MEM32(ebp + 0x1A18);
    PUSH32(esp, 0); sub_00538B70(); /* call 0x00538B70 */

loc_0053ED7C: ;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xD0);
    edx = MEM32(eax + 8);
    ecx = MEM32(eax + 0x28);
    PUSH32(esp, edx);
    edx = MEM32(eax + 0x2C);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 4);
    PUSH32(esp, edx);
    edx = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    esi = ebx;
    PUSH32(esp, 0); sub_00541881(); /* call 0x00541881 */

loc_0053ED9E: ;
    if (TEST_S(eax, eax)) goto loc_0053EEDB; /* jl: less (signed <) */

loc_0053EDA6: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_0053BEA0(); /* call 0x0053BEA0 */

loc_0053EDAD: ;
    eax = MEM32(0x5499E8);
    eax = MEM32(eax + 0x934);
    goto loc_0053EDC0;

    /* nop */

loc_0053EDC0: ;
    ecx = MEM32(eax + 0x3240);
    if (CMP_NE(ecx, MEM32(eax + 0x3244))) goto loc_0053EDC0; /* jne: not equal / not zero */

loc_0053EDCE: ;
    esi = MEM32(eax + 0x400700);
    ecx = 0; /* xor self */
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(ecx, (TEST_NZ(esi, esi)) ? 1 : 0); /* setne */
    if (TEST_NZ(ecx, ecx)) goto loc_0053EDC0; /* jne: not equal / not zero */

loc_0053EDDF: ;
    PUSH32(esp, 4);
    MEM32(ebp + 0x794) = 0x547040;
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_0053EDF0: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_0053EDF7: ;
    eax = 0; /* xor self */
    ecx = 0x46;
    edi = 0x547218;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    MEM32(0x54721C) = 0x10;
    ecx = MEM32(ebp + 0x1A20);
    edx = MEM32(ebp + 0x1A14);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00538E00(); /* call 0x00538E00 */

loc_0053EE22: ;
    PUSH32(esp, 0); sub_0053E3F0(); /* call 0x0053E3F0 */

loc_0053EE27: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_0053B9F0(); /* call 0x0053B9F0 */

loc_0053EE3B: ;
    eax = MEM32(0x20);
    eax = MEM32(eax + 0x250);
    if (TEST_Z(eax, eax)) goto loc_0053EE8F; /* je: equal / zero */

loc_0053EE4B: ;
    eax = MEM32(eax + 0x20);
    if (TEST_Z(eax, eax)) goto loc_0053EE8F; /* je: equal / zero */

loc_0053EE52: ;
    ecx = ebp + 0x1DE4;
    edx = ebp + 0x2478;
    MEM32(eax + 4) = edx;
    MEM32(eax) = ecx;
    ecx = MEM32(ebp + 0x1A18);
    edx = ebp + 0x8D4;
    ebp = ebp + 0x8DC;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ebx;
    MEM32(eax + 0x14) = edx;
    MEM32(eax + 0x18) = ebp;
    MEM32(eax + 0x1C) = 0x53A330;
    MEM32(eax + 0x20) = 0xABCDEF00u;

loc_0053EE8F: ;
    esi = 5;
    PUSH32(esp, 0); sub_0053A240(); /* call 0x0053A240 */

loc_0053EE99: ;
    ecx = MEM32(0x54A8A8);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = MEM32(0x5499E8);
    if (TEST_Z(ecx, ecx)) goto loc_0053EEB2; /* je: equal / zero */

loc_0053EEA8: ;
    ecx = MEM32(0x54A89C);
    if (TEST_Z(ecx, ecx)) goto loc_0053EED9; /* je: equal / zero */

loc_0053EEB2: ;
    eax = MEM32(eax + 0x1C28);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xE);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561158), _icall_esp); /* indirect call */
    }

loc_0053EEC5: ;
    MEM32(0x54A8A8) = 1;
    MEM32(0x54A89C) = 0;

loc_0053EED9: ;
    eax = 0; /* xor self */

loc_0053EEDB: ;
    POP32(esp, ebx);

loc_0053EEDC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0xB4;
    esp += 12; return; /* ret 8 */

}
