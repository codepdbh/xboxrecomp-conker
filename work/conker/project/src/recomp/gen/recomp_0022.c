/**
 * Burnout 3 - Recompiled code chunk 22
 * Functions: 250 (0x001F3EF0 - 0x00207120)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_001F3EF0
 * Original: 0x001F3EF0 - 0x001F3F67 (119 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3EF0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_001F3EF0: ;
    eax = MEM32(0x69E620);
    if (TEST_NZ(eax, eax)) goto loc_001F3F11; /* jne: not equal / not zero */

loc_001F3EF9: ;
    eax = MEM32(0x69E61C);
    PUSH32(esp, 0x69E620);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00075E90(); /* call 0x00075E90 */

loc_001F3F09: ;
    eax = MEM32(0x69E620);
    esp = esp + 8;

loc_001F3F11: ;
    edx = ZX16(MEM16(eax + 0xC));
    SET_LO16(ecx, MEM16(eax + 0xE));
    eax = MEM32(0x84A148);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2B0);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = MEM32(0x84A13C);
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    xmm0 = xmm0 * MEMF(eax + edx + 0x204); /* mulss */
    xmm0 = xmm0 * MEMF(0x7FA258); /* mulss */
    xmm0 = xmm0 * MEMF(0x648CF0); /* mulss */
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    ecx = ZX16(LO16(ecx));
    MEMF(eax) = xmm0; /* movss */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(edx) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_001F3F70
 * Original: 0x001F3F70 - 0x001F3FE7 (119 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3F70(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_001F3F70: ;
    eax = MEM32(0x69E6FC);
    if (TEST_NZ(eax, eax)) goto loc_001F3F91; /* jne: not equal / not zero */

loc_001F3F79: ;
    eax = MEM32(0x69E6F8);
    PUSH32(esp, 0x69E6FC);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00075E90(); /* call 0x00075E90 */

loc_001F3F89: ;
    eax = MEM32(0x69E6FC);
    esp = esp + 8;

loc_001F3F91: ;
    edx = ZX16(MEM16(eax + 0xC));
    SET_LO16(ecx, MEM16(eax + 0xE));
    eax = MEM32(0x84A148);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2B0);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = MEM32(0x84A13C);
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    xmm0 = xmm0 * MEMF(eax + edx + 0x204); /* mulss */
    xmm0 = xmm0 * MEMF(0x7FA258); /* mulss */
    xmm0 = xmm0 * MEMF(0x648CF0); /* mulss */
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    ecx = ZX16(LO16(ecx));
    MEMF(eax) = xmm0; /* movss */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(edx) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_001F3FF0
 * Original: 0x001F3FF0 - 0x001F4067 (119 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3FF0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_001F3FF0: ;
    eax = MEM32(0x69E74C);
    if (TEST_NZ(eax, eax)) goto loc_001F4011; /* jne: not equal / not zero */

loc_001F3FF9: ;
    eax = MEM32(0x69E748);
    PUSH32(esp, 0x69E74C);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00075E90(); /* call 0x00075E90 */

loc_001F4009: ;
    eax = MEM32(0x69E74C);
    esp = esp + 8;

loc_001F4011: ;
    edx = ZX16(MEM16(eax + 0xC));
    SET_LO16(ecx, MEM16(eax + 0xE));
    eax = MEM32(0x84A148);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2B0);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = MEM32(0x84A13C);
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    xmm0 = xmm0 * MEMF(eax + edx + 0x204); /* mulss */
    xmm0 = xmm0 * MEMF(0x7FA258); /* mulss */
    xmm0 = xmm0 * MEMF(0x648CF0); /* mulss */
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    ecx = ZX16(LO16(ecx));
    MEMF(eax) = xmm0; /* movss */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(edx) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_001F4070
 * Original: 0x001F4070 - 0x001F40E7 (119 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F4070(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_001F4070: ;
    eax = MEM32(0x69E79C);
    if (TEST_NZ(eax, eax)) goto loc_001F4091; /* jne: not equal / not zero */

loc_001F4079: ;
    eax = MEM32(0x69E798);
    PUSH32(esp, 0x69E79C);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00075E90(); /* call 0x00075E90 */

loc_001F4089: ;
    eax = MEM32(0x69E79C);
    esp = esp + 8;

loc_001F4091: ;
    edx = ZX16(MEM16(eax + 0xC));
    SET_LO16(ecx, MEM16(eax + 0xE));
    eax = MEM32(0x84A148);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2B0);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = MEM32(0x84A13C);
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    xmm0 = xmm0 * MEMF(eax + edx + 0x204); /* mulss */
    xmm0 = xmm0 * MEMF(0x7FA258); /* mulss */
    xmm0 = xmm0 * MEMF(0x648CF0); /* mulss */
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    ecx = ZX16(LO16(ecx));
    MEMF(eax) = xmm0; /* movss */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(edx) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_001F40F0
 * Original: 0x001F40F0 - 0x001F4167 (119 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F40F0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_001F40F0: ;
    eax = MEM32(0x69E7EC);
    if (TEST_NZ(eax, eax)) goto loc_001F4111; /* jne: not equal / not zero */

loc_001F40F9: ;
    eax = MEM32(0x69E7E8);
    PUSH32(esp, 0x69E7EC);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00075E90(); /* call 0x00075E90 */

loc_001F4109: ;
    eax = MEM32(0x69E7EC);
    esp = esp + 8;

loc_001F4111: ;
    edx = ZX16(MEM16(eax + 0xC));
    SET_LO16(ecx, MEM16(eax + 0xE));
    eax = MEM32(0x84A148);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2B0);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = MEM32(0x84A13C);
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    xmm0 = xmm0 * MEMF(eax + edx + 0x204); /* mulss */
    xmm0 = xmm0 * MEMF(0x7FA258); /* mulss */
    xmm0 = xmm0 * MEMF(0x648CF0); /* mulss */
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    ecx = ZX16(LO16(ecx));
    MEMF(eax) = xmm0; /* movss */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(edx) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_001F4170
 * Original: 0x001F4170 - 0x001F41E7 (119 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F4170(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_001F4170: ;
    eax = MEM32(0x69E83C);
    if (TEST_NZ(eax, eax)) goto loc_001F4191; /* jne: not equal / not zero */

loc_001F4179: ;
    eax = MEM32(0x69E838);
    PUSH32(esp, 0x69E83C);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00075E90(); /* call 0x00075E90 */

loc_001F4189: ;
    eax = MEM32(0x69E83C);
    esp = esp + 8;

loc_001F4191: ;
    edx = ZX16(MEM16(eax + 0xC));
    SET_LO16(ecx, MEM16(eax + 0xE));
    eax = MEM32(0x84A148);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2B0);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = MEM32(0x84A13C);
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    xmm0 = xmm0 * MEMF(eax + edx + 0x204); /* mulss */
    xmm0 = xmm0 * MEMF(0x7FA258); /* mulss */
    xmm0 = xmm0 * MEMF(0x648CF0); /* mulss */
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    ecx = ZX16(LO16(ecx));
    MEMF(eax) = xmm0; /* movss */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(edx) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_001F41F0
 * Original: 0x001F41F0 - 0x001F4267 (119 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F41F0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_001F41F0: ;
    eax = MEM32(0x69E850);
    if (TEST_NZ(eax, eax)) goto loc_001F4211; /* jne: not equal / not zero */

loc_001F41F9: ;
    eax = MEM32(0x69E84C);
    PUSH32(esp, 0x69E850);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00075E90(); /* call 0x00075E90 */

loc_001F4209: ;
    eax = MEM32(0x69E850);
    esp = esp + 8;

loc_001F4211: ;
    edx = ZX16(MEM16(eax + 0xC));
    SET_LO16(ecx, MEM16(eax + 0xE));
    eax = MEM32(0x84A148);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2B0);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = MEM32(0x84A13C);
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    xmm0 = xmm0 * MEMF(eax + edx + 0x204); /* mulss */
    xmm0 = xmm0 * MEMF(0x7FA258); /* mulss */
    xmm0 = xmm0 * MEMF(0x648CF0); /* mulss */
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    ecx = ZX16(LO16(ecx));
    MEMF(eax) = xmm0; /* movss */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(edx) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_001F4270
 * Original: 0x001F4270 - 0x001F42E7 (119 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F4270(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_001F4270: ;
    eax = MEM32(0x69E864);
    if (TEST_NZ(eax, eax)) goto loc_001F4291; /* jne: not equal / not zero */

loc_001F4279: ;
    eax = MEM32(0x69E860);
    PUSH32(esp, 0x69E864);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00075E90(); /* call 0x00075E90 */

loc_001F4289: ;
    eax = MEM32(0x69E864);
    esp = esp + 8;

loc_001F4291: ;
    edx = ZX16(MEM16(eax + 0xC));
    SET_LO16(ecx, MEM16(eax + 0xE));
    eax = MEM32(0x84A148);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2B0);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = MEM32(0x84A13C);
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    xmm0 = xmm0 * MEMF(eax + edx + 0x204); /* mulss */
    xmm0 = xmm0 * MEMF(0x7FA258); /* mulss */
    xmm0 = xmm0 * MEMF(0x648CF0); /* mulss */
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    ecx = ZX16(LO16(ecx));
    MEMF(eax) = xmm0; /* movss */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(edx) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_001F42F0
 * Original: 0x001F42F0 - 0x001F4367 (119 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F42F0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_001F42F0: ;
    eax = MEM32(0x69E878);
    if (TEST_NZ(eax, eax)) goto loc_001F4311; /* jne: not equal / not zero */

loc_001F42F9: ;
    eax = MEM32(0x69E874);
    PUSH32(esp, 0x69E878);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00075E90(); /* call 0x00075E90 */

loc_001F4309: ;
    eax = MEM32(0x69E878);
    esp = esp + 8;

loc_001F4311: ;
    edx = ZX16(MEM16(eax + 0xC));
    SET_LO16(ecx, MEM16(eax + 0xE));
    eax = MEM32(0x84A148);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2B0);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = MEM32(0x84A13C);
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    xmm0 = xmm0 * MEMF(eax + edx + 0x204); /* mulss */
    xmm0 = xmm0 * MEMF(0x7FA258); /* mulss */
    xmm0 = xmm0 * MEMF(0x648CF0); /* mulss */
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    ecx = ZX16(LO16(ecx));
    MEMF(eax) = xmm0; /* movss */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(edx) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_001F4370
 * Original: 0x001F4370 - 0x001F43E7 (119 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F4370(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_001F4370: ;
    eax = MEM32(0x69E88C);
    if (TEST_NZ(eax, eax)) goto loc_001F4391; /* jne: not equal / not zero */

loc_001F4379: ;
    eax = MEM32(0x69E888);
    PUSH32(esp, 0x69E88C);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00075E90(); /* call 0x00075E90 */

loc_001F4389: ;
    eax = MEM32(0x69E88C);
    esp = esp + 8;

loc_001F4391: ;
    edx = ZX16(MEM16(eax + 0xC));
    SET_LO16(ecx, MEM16(eax + 0xE));
    eax = MEM32(0x84A148);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2B0);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = MEM32(0x84A13C);
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    xmm0 = xmm0 * MEMF(eax + edx + 0x204); /* mulss */
    xmm0 = xmm0 * MEMF(0x7FA258); /* mulss */
    xmm0 = xmm0 * MEMF(0x648CF0); /* mulss */
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    ecx = ZX16(LO16(ecx));
    MEMF(eax) = xmm0; /* movss */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(edx) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_001F43F0
 * Original: 0x001F43F0 - 0x001F4467 (119 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F43F0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_001F43F0: ;
    eax = MEM32(0x69E8A0);
    if (TEST_NZ(eax, eax)) goto loc_001F4411; /* jne: not equal / not zero */

loc_001F43F9: ;
    eax = MEM32(0x69E89C);
    PUSH32(esp, 0x69E8A0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00075E90(); /* call 0x00075E90 */

loc_001F4409: ;
    eax = MEM32(0x69E8A0);
    esp = esp + 8;

loc_001F4411: ;
    edx = ZX16(MEM16(eax + 0xC));
    SET_LO16(ecx, MEM16(eax + 0xE));
    eax = MEM32(0x84A148);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2B0);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = MEM32(0x84A13C);
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    xmm0 = xmm0 * MEMF(eax + edx + 0x204); /* mulss */
    xmm0 = xmm0 * MEMF(0x7FA258); /* mulss */
    xmm0 = xmm0 * MEMF(0x648CF0); /* mulss */
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    ecx = ZX16(LO16(ecx));
    MEMF(eax) = xmm0; /* movss */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(edx) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_001F4470
 * Original: 0x001F4470 - 0x001F44B0 (64 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F4470(void)
{
    float xmm0;

loc_001F4470: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ebx = 0x58DC6C;
    PUSH32(esp, 0); sub_001F3AB0(); /* call 0x001F3AB0 */

loc_001F4488: ;
    xmm0 = MEMF(0x649108); /* movss */
    edx = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x20);
    MEMF(edx) = xmm0; /* movss */
    xmm0 = MEMF(0x6490B8); /* movss */
    esp = esp + 8;
    MEMF(eax) = xmm0; /* movss */
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_001F44D0
 * Original: 0x001F44D0 - 0x001F4545 (117 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F44D0(void)
{
    float xmm0;

loc_001F44D0: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ebx = 0x58DE24;
    PUSH32(esp, 0); sub_001F3AB0(); /* call 0x001F3AB0 */

loc_001F44E8: ;
    edx = MEM32(0x84A148);
    eax = ZX16(MEM16(esp + 0xC));
    ecx = MEM32(0x84A13C);
    esp = esp + 8;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x2B0);
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    xmm0 = xmm0 * MEMF(edx + ecx + 0x204); /* mulss */
    xmm0 = xmm0 * MEMF(0x7FA258); /* mulss */
    eax = ZX16(MEM16(esp + 8));
    xmm0 = xmm0 * MEMF(0x648CF0); /* mulss */
    edx = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x18);
    MEMF(edx) = xmm0; /* movss */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(ecx) = xmm0; /* movss */
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_001F4550
 * Original: 0x001F4550 - 0x001F45C5 (117 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F4550(void)
{
    float xmm0;

loc_001F4550: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ebx = 0x58DE2C;
    PUSH32(esp, 0); sub_001F3AB0(); /* call 0x001F3AB0 */

loc_001F4568: ;
    edx = MEM32(0x84A148);
    eax = ZX16(MEM16(esp + 0xC));
    ecx = MEM32(0x84A13C);
    esp = esp + 8;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x2B0);
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    xmm0 = xmm0 * MEMF(edx + ecx + 0x204); /* mulss */
    xmm0 = xmm0 * MEMF(0x7FA258); /* mulss */
    eax = ZX16(MEM16(esp + 8));
    xmm0 = xmm0 * MEMF(0x648CF0); /* mulss */
    edx = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x18);
    MEMF(edx) = xmm0; /* movss */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(ecx) = xmm0; /* movss */
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_001F45D0
 * Original: 0x001F45D0 - 0x001F4610 (64 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F45D0(void)
{
    float xmm0;

loc_001F45D0: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ebx = 0x58DE34;
    PUSH32(esp, 0); sub_001F3AB0(); /* call 0x001F3AB0 */

loc_001F45E8: ;
    xmm0 = MEMF(0x649108); /* movss */
    edx = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x20);
    MEMF(edx) = xmm0; /* movss */
    xmm0 = MEMF(0x6490B8); /* movss */
    esp = esp + 8;
    MEMF(eax) = xmm0; /* movss */
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_001F4680
 * Original: 0x001F4680 - 0x001F46A5 (37 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F4680(void)
{

loc_001F4680: ;
    SET_LO8(eax, 0); /* xor self */
    SET_LO8(ecx, 0xFF);
    MEM8(0x807664) = LO8(eax);
    MEM8(0x807665) = LO8(ecx);
    MEM8(0x807666) = LO8(eax);
    MEM8(0x8497B1) = LO8(eax);
    MEM8(0x8497B3) = LO8(ecx);
    MEM8(0x8497B2) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_001F46B0
 * Original: 0x001F46B0 - 0x001F46D5 (37 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F46B0(void)
{

loc_001F46B0: ;
    SET_LO8(eax, 0); /* xor self */
    SET_LO8(ecx, 0xFF);
    MEM8(0x807664) = LO8(eax);
    MEM8(0x807665) = LO8(eax);
    MEM8(0x807666) = LO8(ecx);
    MEM8(0x8497B1) = LO8(eax);
    MEM8(0x8497B3) = LO8(eax);
    MEM8(0x8497B2) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001F46E0
 * Original: 0x001F46E0 - 0x001F4705 (37 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F46E0(void)
{

loc_001F46E0: ;
    SET_LO8(eax, 0xFF);
    SET_LO8(ecx, 0); /* xor self */
    MEM8(0x807664) = LO8(eax);
    MEM8(0x807665) = LO8(eax);
    MEM8(0x807666) = LO8(ecx);
    MEM8(0x8497B1) = LO8(eax);
    MEM8(0x8497B3) = LO8(eax);
    MEM8(0x8497B2) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001F4710
 * Original: 0x001F4710 - 0x001F4752 (66 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F4710(void)
{
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_001F4710: ;
    PUSH32(esp, ecx);
    SET_LO8(ecx, MEM8(0x7FA20C));
    SET_LO8(eax, MEM8(0x776174));
    SET_LO8(ecx, LO8(ecx) << 2);
    SET_LO8(eax, LO8(eax) + LO8(ecx));
    edx = ZX8(LO8(eax));
    MEM32(esp) = edx;
    MEM8(0x776175) = 1;
    MEM8(0x776174) = LO8(eax);
    fp_push((double)SMEM32(esp)); /* fild */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fcos  */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(0x8497BC) = (float)fp_top(); fp_popp(); /* fstp */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_001F4760
 * Original: 0x001F4760 - 0x001F477B (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F4760(void)
{

loc_001F4760: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    eax = 0x58DC24;
    PUSH32(esp, 0); sub_001F4BA0(); /* call 0x001F4BA0 */

loc_001F4776: ;
    esp = esp + 8;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001F4780
 * Original: 0x001F4780 - 0x001F479B (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F4780(void)
{

loc_001F4780: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    eax = 0x58DC2C;
    PUSH32(esp, 0); sub_001F4BA0(); /* call 0x001F4BA0 */

loc_001F4796: ;
    esp = esp + 8;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001F47A0
 * Original: 0x001F47A0 - 0x001F47BB (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F47A0(void)
{

loc_001F47A0: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    eax = 0x58DC34;
    PUSH32(esp, 0); sub_001F4BA0(); /* call 0x001F4BA0 */

loc_001F47B6: ;
    esp = esp + 8;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001F47C0
 * Original: 0x001F47C0 - 0x001F481B (91 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F47C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001F47C0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0042C91F(); /* call 0x0042C91F */

loc_001F47C6: ;
    eax = eax - 4;
    if ((eax == 0)) { sub_001F481B(); return; } /* je: equal / zero */

loc_001F47CB: ;
    eax--;
    if ((eax == 0)) goto loc_001F4801; /* je: equal / zero */

loc_001F47CE: ;
    eax--;
    ebx = MEM32(esp + 0xC);
    if ((eax == 0)) goto loc_001F47EB; /* je: equal / zero */

loc_001F47D5: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    eax = 0x58DDF4;
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_001F4BA0(); /* call 0x001F4BA0 */

loc_001F47E6: ;
    esp = esp + 8;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001F47EB: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    eax = 0x58DE14;
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_001F4BA0(); /* call 0x001F4BA0 */

loc_001F47FC: ;
    esp = esp + 8;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001F4801: ;
    edx = MEM32(esp + 0x10);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    eax = 0x58DE1C;
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_001F4BA0(); /* call 0x001F4BA0 */

loc_001F4816: ;
    esp = esp + 8;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001F4840
 * Original: 0x001F4840 - 0x001F486A (42 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F4840(void)
{
    int _flags = 0; /* fallback flag var */

loc_001F4840: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0042C91F(); /* call 0x0042C91F */

loc_001F4846: ;
    if (CMP_B(eax, 4)) { sub_001F486A(); return; } /* jb: below (unsigned <) */

loc_001F484B: ;
    if (CMP_A(eax, 6)) { sub_001F486A(); return; } /* ja: above (unsigned >) */

loc_001F4850: ;
    eax = MEM32(esp + 0x10);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    eax = 0x58DE0C;
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_001F4BA0(); /* call 0x001F4BA0 */

loc_001F4865: ;
    esp = esp + 8;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001F4890
 * Original: 0x001F4890 - 0x001F48AB (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F4890(void)
{

loc_001F4890: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    eax = 0x58DC4C;
    PUSH32(esp, 0); sub_001F4BA0(); /* call 0x001F4BA0 */

loc_001F48A6: ;
    esp = esp + 8;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001F48B0
 * Original: 0x001F48B0 - 0x001F48CB (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F48B0(void)
{

loc_001F48B0: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    eax = 0x58DC54;
    PUSH32(esp, 0); sub_001F4BA0(); /* call 0x001F4BA0 */

loc_001F48C6: ;
    esp = esp + 8;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001F48D0
 * Original: 0x001F48D0 - 0x001F48EB (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F48D0(void)
{

loc_001F48D0: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    eax = 0x58DC5C;
    PUSH32(esp, 0); sub_001F4BA0(); /* call 0x001F4BA0 */

loc_001F48E6: ;
    esp = esp + 8;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001F48F0
 * Original: 0x001F48F0 - 0x001F490B (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F48F0(void)
{

loc_001F48F0: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    eax = 0x58DC64;
    PUSH32(esp, 0); sub_001F4BA0(); /* call 0x001F4BA0 */

loc_001F4906: ;
    esp = esp + 8;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001F4910
 * Original: 0x001F4910 - 0x001F4935 (37 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F4910(void)
{

loc_001F4910: ;
    eax = MEM32(esp + 0xC);
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(0x776179));
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    eax = 0x58DC74;
    ecx = ecx & 3;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001F4BA0(); /* call 0x001F4BA0 */

loc_001F4930: ;
    esp = esp + 8;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001F4940
 * Original: 0x001F4940 - 0x001F4965 (37 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F4940(void)
{

loc_001F4940: ;
    eax = MEM32(esp + 0xC);
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(0x776179));
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    eax = 0x58DC7C;
    ecx = ecx & 3;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001F4BA0(); /* call 0x001F4BA0 */

loc_001F4960: ;
    esp = esp + 8;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001F4970
 * Original: 0x001F4970 - 0x001F4995 (37 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F4970(void)
{

loc_001F4970: ;
    eax = MEM32(esp + 0xC);
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(0x776179));
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    eax = 0x58DC84;
    ecx = ecx & 3;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001F4BA0(); /* call 0x001F4BA0 */

loc_001F4990: ;
    esp = esp + 8;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001F49A0
 * Original: 0x001F49A0 - 0x001F49C5 (37 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F49A0(void)
{

loc_001F49A0: ;
    eax = MEM32(esp + 0xC);
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(0x776179));
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    eax = 0x58DC8C;
    ecx = ecx & 3;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001F4BA0(); /* call 0x001F4BA0 */

loc_001F49C0: ;
    esp = esp + 8;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001F49D0
 * Original: 0x001F49D0 - 0x001F49EB (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F49D0(void)
{

loc_001F49D0: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    eax = 0x58DC94;
    PUSH32(esp, 0); sub_001F4BA0(); /* call 0x001F4BA0 */

loc_001F49E6: ;
    esp = esp + 8;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001F49F0
 * Original: 0x001F49F0 - 0x001F4A0B (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F49F0(void)
{

loc_001F49F0: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    eax = 0x58DC9C;
    PUSH32(esp, 0); sub_001F4BA0(); /* call 0x001F4BA0 */

loc_001F4A06: ;
    esp = esp + 8;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001F4A10
 * Original: 0x001F4A10 - 0x001F4A2B (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F4A10(void)
{

loc_001F4A10: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    eax = 0x58DCA4;
    PUSH32(esp, 0); sub_001F4BA0(); /* call 0x001F4BA0 */

loc_001F4A26: ;
    esp = esp + 8;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001F4A30
 * Original: 0x001F4A30 - 0x001F4A4B (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F4A30(void)
{

loc_001F4A30: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    eax = 0x58DCAC;
    PUSH32(esp, 0); sub_001F4BA0(); /* call 0x001F4BA0 */

loc_001F4A46: ;
    esp = esp + 8;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001F4A50
 * Original: 0x001F4A50 - 0x001F4A6B (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F4A50(void)
{

loc_001F4A50: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    eax = 0x58DCB4;
    PUSH32(esp, 0); sub_001F4BA0(); /* call 0x001F4BA0 */

loc_001F4A66: ;
    esp = esp + 8;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001F4A70
 * Original: 0x001F4A70 - 0x001F4A95 (37 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F4A70(void)
{

loc_001F4A70: ;
    eax = MEM32(esp + 0xC);
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(0x776179));
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    eax = 0x58DCBC;
    ecx = ecx & 3;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001F4BA0(); /* call 0x001F4BA0 */

loc_001F4A90: ;
    esp = esp + 8;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001F4AA0
 * Original: 0x001F4AA0 - 0x001F4B09 (105 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F4AA0(void)
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

loc_001F4AA0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0042B72A(); /* call 0x0042B72A */

loc_001F4AA7: ;
    ebx = MEM32(0x8497C4);
    SET_LO8(edx, MEM8(0x7FA275));
    ecx = eax;
    ecx = ecx - ebx;
    if (TEST_NZ(LO8(edx), LO8(edx))) { sub_001F4B09(); return; } /* jne: not equal / not zero */

loc_001F4ABB: ;
    if (CMP_BE(ecx, 0x3E8)) goto loc_001F4AD2; /* jbe: below or equal (unsigned <=) */

loc_001F4AC3: ;
    ecx = 0; /* xor self */
    MEM32(0x8497C4) = eax;
    MEM32(0x8497C8) = ecx;
    g_seh_ebp = ebp; sub_001F4B1B(); return; /* tail jmp 0x001F4B1B */

loc_001F4AD2: ;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esp + 4) = ecx;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    if (CMP_GE(ecx & ecx, 0)) goto loc_001F4AE4; /* jge: greater or equal (signed >=) */

loc_001F4ADE: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_001F4AE4: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_001F4AF5: ;
    ecx = eax;
    if (CMP_BE(ecx, 9)) goto loc_001F4B01; /* jbe: below or equal (unsigned <=) */

loc_001F4AFC: ;
    ecx = 9;

loc_001F4B01: ;
    MEM32(0x8497C8) = ecx;
    g_seh_ebp = ebp; sub_001F4B1B(); return; /* tail jmp 0x001F4B1B */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_001F4B40
 * Original: 0x001F4B40 - 0x001F4B5B (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F4B40(void)
{

loc_001F4B40: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    eax = 0x58DE24;
    PUSH32(esp, 0); sub_001F4BA0(); /* call 0x001F4BA0 */

loc_001F4B56: ;
    esp = esp + 8;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001F4B60
 * Original: 0x001F4B60 - 0x001F4B7B (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F4B60(void)
{

loc_001F4B60: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    eax = 0x58DE2C;
    PUSH32(esp, 0); sub_001F4BA0(); /* call 0x001F4BA0 */

loc_001F4B76: ;
    esp = esp + 8;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001F4B80
 * Original: 0x001F4B80 - 0x001F4B9B (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F4B80(void)
{

loc_001F4B80: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    eax = 0x58DE34;
    PUSH32(esp, 0); sub_001F4BA0(); /* call 0x001F4BA0 */

loc_001F4B96: ;
    esp = esp + 8;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001F4BA0
 * Original: 0x001F4BA0 - 0x001F4D00 (352 bytes, 80 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F4BA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F4BA0: ;
    esp = esp - 0x20;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x2C);
    PUSH32(esp, edi);
    edi = eax;
    PUSH32(esp, 0);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_001F4BB4: ;
    ecx = MEM32(0x8072F0);
    xmm1 = MEMF(0x6B9D94); /* movss */
    ecx--;
    MEM32(0x8072F0) = ecx;
    eax = MEM32(edi);
    eax = MEM32(eax + 4);
    SET_LO16(ecx, MEM16(eax + 0xC));
    SET_LO16(edx, MEM16(eax + 0xE));
    SET_LO8(eax, MEM8(0x8497B0));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001F4BE7; /* jne: not equal / not zero */

loc_001F4BDF: ;
    xmm1 = MEMF(0x648E40); /* movss */

loc_001F4BE7: ;
    eax = MEM32(0x84A148);
    xmm3 = MEMF(ebx); /* movss */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2B0);
    ecx = ZX16(LO16(ecx));
    PUSH32(esp, esi);
    esi = MEM32(0x84A13C);
    eax = eax + esi;
    edx = ZX16(LO16(edx));
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    xmm0 = xmm0 * MEMF(eax + 0x204); /* mulss */
    xmm0 = xmm0 * MEMF(0x7FA258); /* mulss */
    SET_LO8(ecx, MEM8(0x8497B3));
    xmm2 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm2 = xmm2 * MEMF(eax + 0x208); /* mulss */
    SET_LO8(eax, MEM8(0x8497B1));
    xmm2 = xmm2 * MEMF(0x7FA254); /* mulss */
    SET_LO8(edx, MEM8(0x8497B2));
    MEM8(0x80175A) = LO8(eax);
    SET_LO8(eax, MEM8(0x8497B8));
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm1 = xmm1 * MEMF(0x649580); /* mulss */
    MEM8(esp + 0x22) = LO8(eax);
    eax = (int32_t)xmm1; /* cvttss2si */
    xmm3 = xmm3 + xmm0; /* addss */
    MEM16(esp + 0x1E) = LO16(eax);
    MEM16(esp + 0x20) = LO16(eax);
    eax = MEM32(esp + 0x30);
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEMF(ebx) = xmm3; /* movss */
    xmm0 = MEMF(ebp); /* movss */
    MEM8(0x801759) = LO8(ecx);
    xmm0 = xmm0 + xmm2; /* addss */
    eax = eax << 8;
    ecx = esp + 0x18;
    esi = edi;
    MEMF(esp + 0xC) = xmm2; /* movss */
    MEMF(ebp) = xmm0; /* movss */
    MEM8(0x80174C) = 1;
    MEM8(0x801758) = LO8(edx);
    MEM8(esp + 0x25) = 0;
    PUSH32(esp, 0); sub_00356490(); /* call 0x00356490 */

loc_001F4CBE: ;
    eax = 0x801860;
    PUSH32(esp, 0); sub_00356550(); /* call 0x00356550 */

loc_001F4CC8: ;
    if (CMP_EQ(edi, 0x58DDF4)) { sub_001F4D00(); return; } /* je: equal / zero */

loc_001F4CD0: ;
    if (CMP_EQ(edi, 0x58DDFC)) { sub_001F4D00(); return; } /* je: equal / zero */

loc_001F4CD8: ;
    if (CMP_EQ(edi, 0x58DE04)) { sub_001F4D00(); return; } /* je: equal / zero */

loc_001F4CE0: ;
    if (CMP_EQ(edi, 0x58DE0C)) { sub_001F4D00(); return; } /* je: equal / zero */

loc_001F4CE8: ;
    if (CMP_EQ(edi, 0x58DE14)) { sub_001F4D00(); return; } /* je: equal / zero */

loc_001F4CF0: ;
    if (CMP_EQ(edi, 0x58DE1C)) { sub_001F4D00(); return; } /* je: equal / zero */

loc_001F4CF8: ;
    SET_LO8(eax, 0); /* xor self */
    MEM8(esp + 0x34) = LO8(eax);
    g_seh_ebp = ebp; sub_001F4D09(); return; /* tail jmp 0x001F4D09 */

}

/**
 * sub_001F4EB0
 * Original: 0x001F4EB0 - 0x001F4EC5 (21 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F4EB0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001F4EB0: ;
    if (CMP_NE(MEM8(eax), 0)) { sub_001F4EC5(); return; } /* jne: not equal / not zero */

loc_001F4EB5: ;
    MEM32(esi + 4) = 0;
    MEM32(esi) = 0;
    eax = esi;
    esp += 4; return; /* ret */

}

/**
 * sub_001F4EE0
 * Original: 0x001F4EE0 - 0x001F4F0A (42 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F4EE0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001F4EE0: ;
    esp = esp - 0x104;
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, 0x5D4CAC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046F583(); /* call 0x0046F583 */

loc_001F4EF6: ;
    esp = esp + 0xC;
    if (CMP_NE(MEM16(esp + 4), 0)) { sub_001F4F0A(); return; } /* jne: not equal / not zero */

loc_001F4F01: ;
    eax = 0; /* xor self */
    esp = esp + 0x104;
    esp += 4; return; /* ret */

}

/**
 * sub_001F4F40
 * Original: 0x001F4F40 - 0x001F4F4B (11 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F4F40(void)
{
    int _flags = 0; /* fallback flag var */

loc_001F4F40: ;
    PUSH32(esp, ecx);
    if (CMP_NE(MEM16(eax), 0)) { sub_001F4F4B(); return; } /* jne: not equal / not zero */

loc_001F4F47: ;
    eax = 0; /* xor self */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001F4F70
 * Original: 0x001F4F70 - 0x001F4FB9 (73 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F4F70(void)
{
    int _cf = 0; /* carry flag */

loc_001F4F70: ;
    esp = esp - 0x84;
    PUSH32(esp, eax);
    PUSH32(esp, 0x5D718C);
    ecx = esp + 0xC;
    PUSH32(esp, 0x7F);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_001F4F88: ;
    ecx = MEM32(esp + 0x98);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    edx = MEM32(ecx + 4);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    MEM8(esp + 0x9F) = 0;
    PUSH32(esp, 0); sub_003F9D60(); /* call 0x003F9D60 */

loc_001F4FAA: ;
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = (uint32_t)(-(int32_t)eax);
    esp = esp + 0xA0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F4FC0
 * Original: 0x001F4FC0 - 0x001F5013 (83 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F4FC0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001F4FC0: ;
    PUSH32(esp, esi);
    esi = eax;
    ecx = MEM32(esi + 4);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = esi + 4;
    if (TEST_Z(ecx, ecx)) goto loc_001F5011; /* je: equal / zero */

loc_001F4FCD: ;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_001F4FD4: ;
    esi = MEM32(esi);
    esp = esp + 4;
    ecx = esi;
    edi = 0x84D458;
    PUSH32(esp, 0); sub_00061F40(); /* call 0x00061F40 */

loc_001F4FE5: ;
    edi = eax;
    if (TEST_Z(edi, edi)) goto loc_001F5010; /* je: equal / zero */

loc_001F4FEB: ;
    eax = MEM32(edi + 0x18);
    if (TEST_Z(eax, eax)) goto loc_001F4FF6; /* je: equal / zero */

loc_001F4FF2: ;
    MEM16(edi + 0x2C) = MEM16(edi + 0x2C) - 1;

loc_001F4FF6: ;
    if (CMP_NE(MEM16(edi + 0x2C), 0)) goto loc_001F5010; /* jne: not equal / not zero */

loc_001F4FFD: ;
    ecx = esi;
    eax = edi;
    PUSH32(esp, 0); sub_0005EA20(); /* call 0x0005EA20 */

loc_001F5006: ;
    eax = 0x84D458;
    PUSH32(esp, 0); sub_00061D60(); /* call 0x00061D60 */

loc_001F5010: ;
    POP32(esp, edi);

loc_001F5011: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001F5020
 * Original: 0x001F5020 - 0x001F5069 (73 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F5020(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F5020: ;
    esp = esp - 0x114;
    ecx = MEM32(0x84A14C);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x120);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x13);
    eax = esp + 0x20;
    PUSH32(esp, 0); sub_0005E4E0(); /* call 0x0005E4E0 */

loc_001F5042: ;
    ebx = 0; /* xor self */
    esp = esp + 0xC;
    eax = esp + 8;
    MEM32(esp + 0x118) = 0x13;
    MEM32(esp + 8) = ebx;
    MEM32(esp + 0x10) = ebx;
    MEM32(esp + 0xC) = ebx;
    PUSH32(esp, 0); sub_00063680(); /* call 0x00063680 */

loc_001F5067: ;
    g_seh_ebp = ebp; sub_001F5070(); return; /* tail jmp 0x001F5070 */

}

/**
 * sub_001F51A0
 * Original: 0x001F51A0 - 0x001F51FD (93 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F51A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F51A0: ;
    esp = esp - 0x114;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x120);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x13);
    eax = esp + 0x20;
    PUSH32(esp, 0); sub_0005E4E0(); /* call 0x0005E4E0 */

loc_001F51BC: ;
    ebx = 0; /* xor self */
    esp = esp + 0xC;
    eax = esp + 8;
    MEM32(esp + 0x118) = 0x13;
    MEM32(esp + 8) = ebx;
    MEM32(esp + 0x10) = ebx;
    MEM32(esp + 0xC) = ebx;
    PUSH32(esp, 0); sub_00063680(); /* call 0x00063680 */

loc_001F51E1: ;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(ecx + 4);
    if (CMP_L(eax, 0x3E4)) { sub_001F51FD(); return; } /* jl: less (signed <) */

loc_001F51EF: ;
    if (CMP_G(eax, 0x3E5)) { sub_001F51FD(); return; } /* jg: greater (signed >) */

loc_001F51F6: ;
    PUSH32(esp, 0); sub_002A37B0(); /* call 0x002A37B0 */

loc_001F51FB: ;
    goto loc_001F51E1;

}

/**
 * sub_001F5310
 * Original: 0x001F5310 - 0x001F5355 (69 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F5310(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F5310: ;
    xmm0 = MEMF(0x649108); /* movss */
    esp = esp - 0x100;
    PUSH32(esp, esi);
    MEMF(eax) = xmm0; /* movss */
    xmm0 = MEMF(0x6490B8); /* movss */
    PUSH32(esp, edi);
    MEMF(ecx) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0042C91F(); /* call 0x0042C91F */

loc_001F5335: ;
    eax = eax - 4;
    if ((eax == 0)) { sub_001F5355(); return; } /* je: equal / zero */

loc_001F533A: ;
    eax--;
    if ((eax == 0)) goto loc_001F534E; /* je: equal / zero */

loc_001F533D: ;
    eax--;
    if ((eax == 0)) goto loc_001F5347; /* je: equal / zero */

loc_001F5340: ;
    esi = 0x6A38C8;
    g_seh_ebp = ebp; sub_001F535A(); return; /* tail jmp 0x001F535A */

loc_001F5347: ;
    esi = 0x6A3918;
    g_seh_ebp = ebp; sub_001F535A(); return; /* tail jmp 0x001F535A */

loc_001F534E: ;
    esi = 0x6A392C;
    g_seh_ebp = ebp; sub_001F535A(); return; /* tail jmp 0x001F535A */

}

/**
 * sub_001F53B0
 * Original: 0x001F53B0 - 0x001F5433 (131 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F53B0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_001F53B0: ;
    xmm0 = MEMF(0x649108); /* movss */
    esp = esp - 0x100;
    PUSH32(esp, esi);
    MEMF(eax) = xmm0; /* movss */
    xmm0 = MEMF(0x6490B8); /* movss */
    PUSH32(esp, edi);
    MEMF(ecx) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0042C91F(); /* call 0x0042C91F */

loc_001F53D5: ;
    if (CMP_B(eax, 4)) goto loc_001F53E4; /* jb: below (unsigned <) */

loc_001F53DA: ;
    (void)0; /* cmp eax, 6 - flags set for next jcc */
    esi = 0x6A3904;
    if (CMP_BE(eax, 6)) goto loc_001F53E9; /* jbe: below or equal (unsigned <=) */

loc_001F53E4: ;
    esi = 0x6A38DC;

loc_001F53E9: ;
    eax = MEM32(esi + 4);
    (void)0; /* test eax, eax - flags set for next jcc */
    edi = esi + 4;
    if (TEST_NZ(eax, eax)) goto loc_001F5428; /* jne: not equal / not zero */

loc_001F53F3: ;
    PUSH32(esp, 0x7F);
    PUSH32(esp, 0x5F6538);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042DD7A(); /* call 0x0042DD7A */

loc_001F5404: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    eax = esp + 0xC;
    esi = esp + 0x8C;
    PUSH32(esp, 0); sub_00093190(); /* call 0x00093190 */

loc_001F5417: ;
    ecx = esp + 0x8C;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00075E90(); /* call 0x00075E90 */

loc_001F5425: ;
    esp = esp + 0xC;

loc_001F5428: ;
    eax = MEM32(edi);
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x100;
    esp += 4; return; /* ret */

}

/**
 * sub_001F5440
 * Original: 0x001F5440 - 0x001F5481 (65 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F5440(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F5440: ;
    eax = 0x211C;
    PUSH32(esp, 0); sub_00470E50(); /* call 0x00470E50 */

loc_001F544A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003D4710(); /* call 0x003D4710 */

loc_001F5453: ;
    eax = MEM32(0x7FA1DC);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, 2 - flags set for next jcc */
    MEM32(0x8086E0) = ebx;
    eax = 0x6BAEF8;
    if (CMP_EQ(eax, 2)) goto loc_001F546F; /* je: equal / zero */

loc_001F546A: ;
    eax = 0x6BAEC8;

loc_001F546F: ;
    edi = 0x776184;
    MEM32(0x6BAF28) = eax;
    ebp = 0; /* xor self */
    MEM32(esp + 0x10) = edi;
    g_seh_ebp = ebp; sub_001F5486(); return; /* tail jmp 0x001F5486 */

}

/**
 * sub_001F5750
 * Original: 0x001F5750 - 0x001F5799 (73 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F5750(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F5750: ;
    esp = esp - 0x114;
    ecx = MEM32(0x84A14C);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x120);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x13);
    eax = esp + 0x20;
    PUSH32(esp, 0); sub_0005E4E0(); /* call 0x0005E4E0 */

loc_001F5772: ;
    ebx = 0; /* xor self */
    esp = esp + 0xC;
    eax = esp + 8;
    MEM32(esp + 0x118) = 0x13;
    MEM32(esp + 8) = ebx;
    MEM32(esp + 0x10) = ebx;
    MEM32(esp + 0xC) = ebx;
    PUSH32(esp, 0); sub_00063680(); /* call 0x00063680 */

loc_001F5797: ;
    g_seh_ebp = ebp; sub_001F57A0(); return; /* tail jmp 0x001F57A0 */

}

/**
 * sub_001F58F0
 * Original: 0x001F58F0 - 0x001F5943 (83 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F58F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001F58F0: ;
    eax = MEM32(esp + 4);
    if (TEST_Z(eax, eax)) goto loc_001F5905; /* je: equal / zero */

loc_001F58F8: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_001F5902: ;
    esp = esp + 4;

loc_001F5905: ;
    if (TEST_Z(esi, esi)) goto loc_001F5942; /* je: equal / zero */

loc_001F5909: ;
    PUSH32(esp, edi);
    ecx = esi;
    edi = 0x84D458;
    PUSH32(esp, 0); sub_00061F40(); /* call 0x00061F40 */

loc_001F5916: ;
    edi = eax;
    if (TEST_Z(edi, edi)) goto loc_001F5941; /* je: equal / zero */

loc_001F591C: ;
    eax = MEM32(edi + 0x18);
    if (TEST_Z(eax, eax)) goto loc_001F5927; /* je: equal / zero */

loc_001F5923: ;
    MEM16(edi + 0x2C) = MEM16(edi + 0x2C) - 1;

loc_001F5927: ;
    if (CMP_NE(MEM16(edi + 0x2C), 0)) goto loc_001F5941; /* jne: not equal / not zero */

loc_001F592E: ;
    ecx = esi;
    eax = edi;
    PUSH32(esp, 0); sub_0005EA20(); /* call 0x0005EA20 */

loc_001F5937: ;
    eax = 0x84D458;
    PUSH32(esp, 0); sub_00061D60(); /* call 0x00061D60 */

loc_001F5941: ;
    POP32(esp, edi);

loc_001F5942: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F5950
 * Original: 0x001F5950 - 0x001F5969 (25 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F5950(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F5950: ;
    eax = MEM32(0x6BAF28);
    esp = esp - 0x118;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    esi = 0; /* xor self */
    edi = 0x776184;
    g_seh_ebp = ebp; sub_001F5970(); return; /* tail jmp 0x001F5970 */

}

/**
 * sub_001F5EC0
 * Original: 0x001F5EC0 - 0x001F5ECD (13 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F5EC0(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F5EC0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    ebp = 0x776184;
    g_seh_ebp = ebp; sub_001F5ED0(); return; /* tail jmp 0x001F5ED0 */

}

/**
 * sub_001F6060
 * Original: 0x001F6060 - 0x001F622F (463 bytes, 88 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F6060(void)
{
    float xmm0, xmm1, xmm2, xmm3, xmm4;

loc_001F6060: ;
    esp = esp - 8;
    eax = MEM32(0x77617C);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_001F6230(); /* call 0x001F6230 */

loc_001F606F: ;
    xmm3 = 0.0f; /* xorps self = zero */
    xmm0 = MEMF(0x648CF4); /* movss */
    xmm4 = MEMF(0x648D14); /* movss */
    eax = 0; /* xor self */
    SET_LO8(ecx, 0xFF);
    MEM8(0x807694) = LO8(eax);
    MEM8(0x807695) = LO8(eax);
    MEM8(0x807696) = LO8(eax);
    MEM32(0x807668) = eax;
    MEM32(0x8076B0) = eax;
    MEM8(0x8086C4) = LO8(eax);
    SET_LO8(eax, 1);
    MEM8(0x807664) = LO8(ecx);
    MEM8(0x807665) = LO8(ecx);
    MEM8(0x807666) = LO8(ecx);
    MEM8(0x807667) = LO8(ecx);
    MEMF(0x80768C) = xmm0; /* movss */
    MEMF(0x807690) = xmm0; /* movss */
    MEM8(0x807697) = LO8(ecx);
    MEM8(0x8086C8) = LO8(eax);
    MEM8(0x8086C6) = LO8(eax);
    MEMF(0x80761C) = xmm3; /* movss */
    MEMF(0x807620) = xmm3; /* movss */
    MEMF(0x807624) = xmm3; /* movss */
    MEMF(esp + 8) = xmm4; /* movss */
    xmm0 = MEMF(esp + 8); /* movss */
    xmm1 = 1.0f / sqrtf(xmm0); /* rsqrtss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm2 = MEMF(0x5A03AC); /* movss */
    xmm2 = xmm2 - xmm0; /* subss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm0 = MEMF(0x5A03B0); /* movss */
    xmm2 = xmm2 * xmm0; /* mulss */
    MEMF(esp + 0xC) = xmm2; /* movss */
    xmm0 = MEMF(esp + 0xC); /* movss */
    MEMF(0x807628) = xmm0; /* movss */
    xmm0 = xmm0 * xmm3; /* mulss */
    MEMF(0x80762C) = xmm0; /* movss */
    MEMF(0x807630) = xmm0; /* movss */
    MEMF(esp + 0xC) = xmm4; /* movss */
    xmm0 = MEMF(esp + 0xC); /* movss */
    xmm1 = 1.0f / sqrtf(xmm0); /* rsqrtss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm2 = MEMF(0x5A03AC); /* movss */
    xmm2 = xmm2 - xmm0; /* subss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm0 = MEMF(0x5A03B0); /* movss */
    xmm2 = xmm2 * xmm0; /* mulss */
    MEMF(esp + 8) = xmm2; /* movss */
    xmm1 = MEMF(esp + 8); /* movss */
    eax = MEM32(0x776180);
    ecx = MEM32(0x6BAF28);
    esi = MEM32(0x84B868);
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 * xmm3; /* mulss */
    MEMF(0x807634) = xmm0; /* movss */
    MEMF(0x807638) = xmm1; /* movss */
    MEMF(0x80763C) = xmm0; /* movss */
    eax = eax + eax * 2;
    xmm0 = MEMF(ecx + eax * 8 + 8); /* movss */
    xmm1 = MEMF(ecx + eax * 8 + 4); /* movss */
    eax = ecx + eax * 8;
    MEMF(0x80765C) = xmm1; /* movss */
    MEMF(0x807660) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0xC); /* movss */
    MEMF(0x80767C) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x10); /* movss */
    MEMF(0x807688) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003FB250(); /* call 0x003FB250 */

loc_001F6203: ;
    eax = MEM32(0x5499E8);
    edi = eax + 0xDE0;
    eax = MEM32(0x5499F0);
    ecx = 0x10;
    esi = 0x5A0350;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    eax = eax | 0x200;
    POP32(esp, edi);
    MEM32(0x5499F0) = eax;
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_001F6230
 * Original: 0x001F6230 - 0x001F62C3 (147 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F6230(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_001F6230: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi * 4 + 0x776184);
    if (CMP_EQ(eax, 0x8072F4)) goto loc_001F624F; /* je: equal / zero */

loc_001F6241: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0); sub_003D49A0(); /* call 0x003D49A0 */

loc_001F624C: ;
    esp = esp + 8;

loc_001F624F: ;
    ecx = MEM32(0x6BAF28);
    eax = esi + esi * 2;
    xmm0 = MEMF(ecx + eax * 8 + 8); /* movss */
    xmm1 = MEMF(ecx + eax * 8 + 4); /* movss */
    eax = ecx + eax * 8;
    MEMF(0x80765C) = xmm1; /* movss */
    MEMF(0x807660) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0xC); /* movss */
    MEM32(0x776180) = esi;
    esi = esi - 0;
    MEMF(0x80767C) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x10); /* movss */
    MEMF(0x807688) = xmm0; /* movss */
    if ((esi == 0)) goto loc_001F62B1; /* je: equal / zero */

loc_001F629C: ;
    esi--;
    if ((esi != 0)) goto loc_001F62C1; /* jne: not equal / not zero */

loc_001F629F: ;
    xmm0 = MEMF(0x8497E4); /* movss */
    MEMF(0x84B508) = xmm0; /* movss */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001F62B1: ;
    xmm0 = MEMF(0x8497DC); /* movss */
    MEMF(0x84B508) = xmm0; /* movss */

loc_001F62C1: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001F62D0
 * Original: 0x001F62D0 - 0x001F6340 (112 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F62D0(void)
{
    float xmm0, xmm1;

loc_001F62D0: ;
    ecx = MEM32(esp + 4);
    esp = esp - 0xC00;
    eax = esp + 0xC08;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 8;
    PUSH32(esp, edx);
    MEMF(0x807650) = xmm0; /* movss */
    MEMF(0x807654) = xmm1; /* movss */
    MEMF(0x807658) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00470421(); /* call 0x00470421 */

loc_001F6305: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 0x410;
    PUSH32(esp, 0x5D4CAC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0042B614(); /* call 0x0042B614 */

loc_001F631C: ;
    edx = esp + 0x418;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    MEM8(0x8086D5) = 1;
    PUSH32(esp, 0); sub_003D3E60(); /* call 0x003D3E60 */

loc_001F6332: ;
    MEM8(0x8086D5) = 0;
    esp = esp + 0xC20;
    esp += 4; return; /* ret */

}

/**
 * sub_001F6340
 * Original: 0x001F6340 - 0x001F6396 (86 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F6340(void)
{
    float xmm0, xmm1;

loc_001F6340: ;
    ecx = MEM32(esp + 4);
    esp = esp - 0x800;
    eax = esp + 0x808;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 8;
    PUSH32(esp, edx);
    MEMF(0x807650) = xmm0; /* movss */
    MEMF(0x807654) = xmm1; /* movss */
    MEMF(0x807658) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00470478(); /* call 0x00470478 */

loc_001F6375: ;
    eax = esp + 0xC;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    MEM8(0x8086D5) = 1;
    PUSH32(esp, 0); sub_003D3E60(); /* call 0x003D3E60 */

loc_001F6388: ;
    MEM8(0x8086D5) = 0;
    esp = esp + 0x814;
    esp += 4; return; /* ret */

}

/**
 * sub_001F63A0
 * Original: 0x001F63A0 - 0x001F63E0 (64 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F63A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001F63A0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM8(0x849DB4) = 1;
    PUSH32(esp, 0); sub_002A37B0(); /* call 0x002A37B0 */

loc_001F63B0: ;
    PUSH32(esp, 0); sub_0025BB80(); /* call 0x0025BB80 */

loc_001F63B5: ;
    ebx = 0; /* xor self */
    MEM8(0x849DB4) = LO8(ebx);
    PUSH32(esp, 0); sub_0004CE80(); /* call 0x0004CE80 */

loc_001F63C2: ;
    if (CMP_EQ(MEM32(esi + 0xC), ebx)) { sub_001F63E0(); return; } /* je: equal / zero */

loc_001F63C7: ;
    PUSH32(esp, 0); sub_0042B72A(); /* call 0x0042B72A */

loc_001F63CC: ;
    edx = MEM32(esi + 0x10);
    ecx = MEM32(esi + 0xC);
    eax = eax - edx;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esi + 0x14) = eax;
    if (CMP_BE(eax, ecx)) { sub_001F63E0(); return; } /* jbe: below or equal (unsigned <=) */

loc_001F63DB: ;
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001F6440
 * Original: 0x001F6440 - 0x001F6616 (470 bytes, 104 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F6440(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F6440: ;
    eax = MEM32(0x84A19C);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    if (CMP_NE(eax, ebx)) goto loc_001F6456; /* jne: not equal / not zero */

loc_001F6451: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_001F6456: ;
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
    if (CMP_EQ(esi, ebx)) goto loc_001F64A6; /* je: equal / zero */

loc_001F647E: ;
    if (CMP_B(MEM32(esi + 0x80), 0x1C0)) goto loc_001F64A6; /* jb: below (unsigned <) */

loc_001F648A: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_001F6494: ;
    PUSH32(esp, 0x1C0);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_001F649F: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_001F64C6; /* jne: not equal / not zero */

loc_001F64A6: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_001F64B8: ;
    PUSH32(esp, 0x1C0);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_001F64C3: ;
    esp = esp + 8;

loc_001F64C6: ;
    xmm0 = MEMF(0x648CE0); /* movss */
    xmm1 = MEMF(0x64971C); /* movss */
    MEM32(ebp + 0x18) = eax;
    MEMF(eax + 0xD4) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(eax + 0xD8) = xmm0; /* movss */
    MEMF(eax + 0xE4) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(eax + 0xE8) = xmm0; /* movss */
    xmm0 = MEMF(0x648E38); /* movss */
    MEMF(eax + 0xDC) = xmm1; /* movss */
    xmm1 = MEMF(0x649718); /* movss */
    MEMF(eax + 0xE0) = xmm1; /* movss */
    eax = MEM32(ebp + 0x18);
    SET_LO8(ecx, MEM8(eax + 8));
    MEMF(eax + 0x104) = xmm0; /* movss */
    xmm0 = MEMF(0x649950); /* movss */
    MEMF(eax + 0x108) = xmm0; /* movss */
    xmm0 = MEMF(0x648CE4); /* movss */
    SET_LO8(ecx, LO8(ecx) & 0xFC);
    MEMF(eax + 0x10C) = xmm0; /* movss */
    xmm0 = MEMF(0x649430); /* movss */
    MEM8(eax + 8) = LO8(ecx);
    MEMF(eax + 0x110) = xmm0; /* movss */
    edi = MEM32(ebp + 0x18);
    edi = edi + 0x10;
    ecx = 0x10;
    esi = 0x5A0350;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    edi = MEM32(ebp + 0x18);
    edi = edi + 0x50;
    ecx = 0x10;
    esi = 0x5A0350;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = MEM32(ebp + 0x18);
    PUSH32(esp, 0); sub_003FB030(); /* call 0x003FB030 */

loc_001F6594: ;
    esi = MEM32(ebp + 0x18);
    MEM32(0x84B868) = esi;
    PUSH32(esp, 0); sub_003FB250(); /* call 0x003FB250 */

loc_001F65A2: ;
    (void)0; /* cmp MEM32(0x771C50), ebx - flags set for next jcc */
    ecx = 0x10;
    esi = 0x5A0350;
    edi = 0x81BD30;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = 0x10;
    esi = 0x5A0350;
    edi = 0x81B810;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    POP32(esp, edi);
    POP32(esp, esi);
    if (CMP_NE(MEM32(0x771C50), ebx)) goto loc_001F65E3; /* jne: not equal / not zero */

loc_001F65CE: ;
    eax = MEM32(0x771C60);
    if (CMP_LE(eax, MEM32(0x771C5C))) goto loc_001F65E3; /* jle: less or equal (signed <=) */

loc_001F65DB: ;
    if (CMP_EQ(MEM8(0x771C64), LO8(ebx))) goto loc_001F6611; /* je: equal / zero */

loc_001F65E3: ;
    MEM32(0x771C50) = ebx;
    MEM32(0x771C54) = ebx;
    MEM8(0x771C58) = LO8(ebx);
    MEM8(0x771C59) = LO8(ebx);
    MEM8(0x771C5A) = LO8(ebx);
    MEM32(0x771C5C) = 0x3C;
    MEM32(0x771C60) = ebx;

loc_001F6611: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F6620
 * Original: 0x001F6620 - 0x001F668A (106 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F6620(void)
{
    int _flags = 0; /* fallback flag var */

loc_001F6620: ;
    ecx = MEM32(eax + 0x18);
    eax = eax + 0x18;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    if (CMP_EQ(ecx, ebx)) goto loc_001F6636; /* je: equal / zero */

loc_001F662D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_001F6633: ;
    esp = esp + 4;

loc_001F6636: ;
    ecx = MEM32(0x771C50);
    eax = 1;
    if (CMP_NE(ecx, eax)) goto loc_001F665B; /* jne: not equal / not zero */

loc_001F6645: ;
    ecx = MEM32(0x771C60);
    if (CMP_LE(ecx, MEM32(0x771C5C))) goto loc_001F665B; /* jle: less or equal (signed <=) */

loc_001F6653: ;
    if (CMP_EQ(MEM8(0x771C64), LO8(ebx))) goto loc_001F6688; /* je: equal / zero */

loc_001F665B: ;
    MEM32(0x771C50) = eax;
    MEM32(0x771C54) = ebx;
    MEM8(0x771C58) = LO8(ebx);
    MEM8(0x771C59) = LO8(ebx);
    MEM8(0x771C5A) = LO8(ebx);
    MEM32(0x771C5C) = 0x3C;
    MEM32(0x771C60) = ebx;

loc_001F6688: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001F6690
 * Original: 0x001F6690 - 0x001F66D9 (73 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F6690(void)
{
    int _flags = 0; /* fallback flag var */

loc_001F6690: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    esi = ecx;
    PUSH32(esp, 0); sub_000FCD20(); /* call 0x000FCD20 */

loc_001F669B: ;
    MEM8(esi + 5) = LO8(eax);
    PUSH32(esp, 0); sub_003FB4C0(); /* call 0x003FB4C0 */

loc_001F66A3: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_001F66AA: ;
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_000FCC00(); /* call 0x000FCC00 */

loc_001F66B1: ;
    eax = MEM32(0x84B878);
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, esi);
    if (TEST_Z(eax, eax)) goto loc_001F66C3; /* je: equal / zero */

loc_001F66BC: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_001F66C0: ;
    esp = esp + 4;

loc_001F66C3: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_0053D700(); /* call 0x0053D700 */

loc_001F66CA: ;
    eax = MEM32(0x84B878);
    if (TEST_Z(eax, eax)) goto loc_001F66D8; /* je: equal / zero */

loc_001F66D3: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_001F66D7: ;
    POP32(esp, ecx);

loc_001F66D8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F66E0
 * Original: 0x001F66E0 - 0x001F69A2 (706 bytes, 180 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F66E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F66E0: ;
    eax = MEM32(0x6B850C);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ebp = ecx;
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_001F66F1: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00538690(); /* call 0x00538690 */

loc_001F66F8: ;
    PUSH32(esp, 0x1B02);
    PUSH32(esp, 0); sub_00537840(); /* call 0x00537840 */

loc_001F6702: ;
    edi = 0; /* xor self */
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00537070(); /* call 0x00537070 */

loc_001F670A: ;
    ebx = 1;
    edx = ebx;
    ecx = 0x40304;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001F671B: ;
    edx = 0; /* xor self */
    ecx = 0x40300;
    MEM32(0x549AE4) = ebx;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001F672D: ;
    esi = MEM32(0x5499E8);
    MEM32(0x549AE8) = edi;
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_001F674F; /* jb: below (unsigned <) */

loc_001F6740: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_001F674F: ;
    MEM32(eax) = 0x4030C;
    MEM32(eax + 4) = edi;
    ecx = MEM32(0x549B40);
    MEM32(eax + 8) = 0x41D78;
    MEM32(eax + 0xC) = ecx;
    eax = eax + 0x10;
    MEM32(esi) = eax;
    eax = MEM32(0x549C34);
    (void)0; /* cmp eax, 2 - flags set for next jcc */
    MEM32(0x549C34) = edi;
    if (CMP_NE(eax, 2)) goto loc_001F67AC; /* jne: not equal / not zero */

loc_001F677D: ;
    PUSH32(esp, 0); sub_005384E0(); /* call 0x005384E0 */

loc_001F6782: ;
    PUSH32(esp, 0); sub_00536810(); /* call 0x00536810 */

loc_001F6787: ;
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_001F679D; /* jb: below (unsigned <) */

loc_001F678E: ;
    eax = MEM32(0x54A8B8);
    edx = eax;
    edx = edx >> 1;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_001F679D: ;
    PUSH32(esp, esi);
    edx = eax;
    PUSH32(esp, 0); sub_00538030(); /* call 0x00538030 */

loc_001F67A5: ;
    PUSH32(esp, 0); sub_00537E30(); /* call 0x00537E30 */

loc_001F67AA: ;
    MEM32(esi) = eax;

loc_001F67AC: ;
    edx = 0; /* xor self */
    ecx = 0x4035C;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001F67B8: ;
    esi = MEM32(0x5499F0);
    MEM32(0x549AF8) = edi;
    MEM32(0x549B90) = edi;
    eax = MEM32(ebp + 0x1C);
    ecx = MEM32(eax + 4);
    esi = esi | 0x1200;
    (void)0; /* cmp ecx, 4 - flags set for next jcc */
    MEM32(0x5499F0) = esi;
    if (CMP_A(ecx, 4)) goto loc_001F6806; /* ja: above (unsigned >) */

loc_001F67E1: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x1F69A4); /* switch: 5 entries, 5 targets */
    if (_jt == 0x001F67E8u) goto loc_001F67E8;
    if (_jt == 0x001F67EEu) goto loc_001F67EE;
    if (_jt == 0x001F67F3u) goto loc_001F67F3;
    if (_jt == 0x001F67F9u) goto loc_001F67F9;
    if (_jt == 0x001F6806u) goto loc_001F6806;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001F67E8: ;
    eax = MEM32(eax + 0x1C);
    PUSH32(esp, eax);
    goto loc_001F67FF;

loc_001F67EE: ;
    ecx = MEM32(eax + 0x1C);
    goto loc_001F67FE;

loc_001F67F3: ;
    edx = MEM32(eax + 0x1C);
    PUSH32(esp, edx);
    goto loc_001F67FF;

loc_001F67F9: ;
    eax = MEM32(eax + 0x1C);
    ecx = MEM32(eax);

loc_001F67FE: ;
    PUSH32(esp, ecx);

loc_001F67FF: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_001F6806: ;
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    PUSH32(esp, 0); sub_005379C0(); /* call 0x005379C0 */

loc_001F680E: ;
    ecx = MEM32(0x5499F0);
    eax = 2;
    ecx = ecx | 0xC01;
    MEM32(0x547360) = eax;
    MEM32(0x547368) = eax;
    eax = 3;
    MEM32(0x5499F0) = ecx;
    edx = 0x8006;
    ecx = 0x40350;
    MEM32(0x547370) = ebx;
    MEM32(0x547330) = eax;
    MEM32(0x547334) = eax;
    MEM32(0x547384) = edi;
    MEM32(0x5473E0) = ebx;
    MEM32(0x5473F0) = ebx;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001F6865: ;
    edx = ebx;
    ecx = 0x40344;
    MEM32(0x549B20) = 0x8006;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001F687B: ;
    edx = 0; /* xor self */
    ecx = 0x40348;
    MEM32(0x549AF0) = ebx;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001F688D: ;
    PUSH32(esp, 0xBF000000u);
    PUSH32(esp, 0xBF000000u);
    MEM32(0x549AF4) = edi;
    PUSH32(esp, 0); sub_0053A280(); /* call 0x0053A280 */

loc_001F68A2: ;
    esi = 0x19;
    PUSH32(esp, 0); sub_0053C660(); /* call 0x0053C660 */

loc_001F68AC: ;
    MEM32(eax) = 0x417FC;
    MEM32(eax + 4) = 8;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x648D80); /* movss */
    eax = eax + 4;
    MEM32(eax + 4) = 0x40501818;
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    xmm3 = MEMF(0x64971C); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm1; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    xmm2 = MEMF(0x648D14); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm3; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm1; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm2; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm3; /* movss */
    xmm3 = MEMF(0x649718); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm3; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm1; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm2; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm2; /* movss */
    eax = eax + 4;
    eax = eax + 4;
    MEMF(eax) = xmm0; /* movss */
    eax = eax + 4;
    MEMF(eax) = xmm3; /* movss */
    eax = eax + 4;
    MEMF(eax) = xmm1; /* movss */
    eax = eax + 4;
    MEMF(eax) = xmm0; /* movss */
    edx = MEM32(0x5499E8);
    eax = eax + 4;
    MEMF(eax) = xmm2; /* movss */
    eax = eax + 4;
    MEM32(eax) = 0x417FC;
    eax = eax + 4;
    MEM32(eax) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = eax + 4;
    POP32(esp, ebp);
    MEM32(edx) = eax;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001F69C0
 * Original: 0x001F69C0 - 0x001F69F3 (51 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F69C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F69C0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0005F5F0(); /* call 0x0005F5F0 */

loc_001F69CA: ;
    ebx = 1;
    MEM32(esp + 0x10) = eax;
    MEM8(eax + 0xC) = LO8(ebx);
    PUSH32(esp, 0); sub_0004DD80(); /* call 0x0004DD80 */

loc_001F69DB: ;
    PUSH32(esp, 0); sub_000164F0(); /* call 0x000164F0 */

loc_001F69E0: ;
    edi = eax;
    eax = MEM32(0x847040);
    if (CMP_GE(eax, ebx)) { sub_001F69F3(); return; } /* jge: greater or equal (signed >=) */

loc_001F69EB: ;
    MEM32(0x847040) = ebx;
    g_seh_ebp = ebp; sub_001F69F8(); return; /* tail jmp 0x001F69F8 */

}

/**
 * sub_001F6B20
 * Original: 0x001F6B20 - 0x001F6B6C (76 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F6B20(void)
{

loc_001F6B20: ;
    SET_LO8(eax, 0); /* xor self */
    edx = 2;
    PUSH32(esp, 0); sub_002A78D0(); /* call 0x002A78D0 */

loc_001F6B2C: ;
    edx = MEM32(0x68C31C);
    ecx = MEM32(0x847024);
    SET_LO8(eax, 0); /* xor self */
    edx++;
    MEM8(0x7FA274) = LO8(eax);
    MEM8(0x7FA275) = LO8(eax);
    MEM8(ecx + 0x85) = LO8(eax);
    MEM8(0x84703C) = LO8(eax);
    MEM32(0x68C31C) = edx;
    PUSH32(esp, 0); sub_0005F5F0(); /* call 0x0005F5F0 */

loc_001F6B5B: ;
    edx = MEM32(eax + 8);
    eax = MEM32(eax);
    PUSH32(esp, 3);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00060040(); /* call 0x00060040 */

loc_001F6B6B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F6B70
 * Original: 0x001F6B70 - 0x001F6BE8 (120 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F6B70(void)
{
    int _flags = 0; /* fallback flag var */

loc_001F6B70: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x8497F0);
    if (TEST_NZ(eax, eax)) goto loc_001F6BA8; /* jne: not equal / not zero */

loc_001F6B7A: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, 0); sub_001F6DF0(); /* call 0x001F6DF0 */

loc_001F6B81: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_001F6B90; /* je: equal / zero */

loc_001F6B88: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001F69C0(); /* call 0x001F69C0 */

loc_001F6B8E: ;
    goto loc_001F6B92;

loc_001F6B90: ;
    eax = 0; /* xor self */

loc_001F6B92: ;
    PUSH32(esp, eax);
    MEM32(0x8497F0) = eax;
    MEM32(eax) = 1;
    PUSH32(esp, 0); sub_001F6D10(); /* call 0x001F6D10 */

loc_001F6BA3: ;
    eax = MEM32(0x8497F0);

loc_001F6BA8: ;
    PUSH32(esp, esi);
    esi = eax;
    ecx = MEM32(esi);
    ecx--;
    if ((ecx != 0)) goto loc_001F6BBA; /* jne: not equal / not zero */

loc_001F6BB0: ;
    PUSH32(esp, 0); sub_001F6C50(); /* call 0x001F6C50 */

loc_001F6BB5: ;
    eax = MEM32(0x8497F0);

loc_001F6BBA: ;
    if (CMP_NE(MEM32(esi), 3)) goto loc_001F6BE5; /* jne: not equal / not zero */

loc_001F6BBF: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    esi = eax;
    if (TEST_Z(eax, eax)) goto loc_001F6BDB; /* je: equal / zero */

loc_001F6BC5: ;
    PUSH32(esp, 0); sub_001F6B20(); /* call 0x001F6B20 */

loc_001F6BCA: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    MEM32(esp + 8) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_001F6BD8: ;
    esp = esp + 4;

loc_001F6BDB: ;
    MEM32(0x8497F0) = 0;

loc_001F6BE5: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001F6BF0
 * Original: 0x001F6BF0 - 0x001F6BF8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F6BF0(void)
{

loc_001F6BF0: ;
    MEM8(0x6BCFE8) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_001F6C00
 * Original: 0x001F6C00 - 0x001F6C19 (25 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F6C00(void)
{
    int _flags = 0; /* fallback flag var */

loc_001F6C00: ;
    ecx = MEM32(eax + 4);
    ecx++;
    (void)0; /* cmp ecx, 1 - flags set for next jcc */
    MEM32(eax + 4) = ecx;
    if (CMP_AE(ecx, 1)) { sub_001F6C19(); return; } /* jae: above or equal (unsigned >=) */

loc_001F6C0C: ;
    PUSH32(esp, eax);
    MEM32(eax) = 1;
    PUSH32(esp, 0); sub_001F6D10(); /* call 0x001F6D10 */

loc_001F6C18: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F6C50
 * Original: 0x001F6C50 - 0x001F6CE4 (148 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F6C50(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_001F6C50: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    edi = eax;
    PUSH32(esp, 0); sub_0004E020(); /* call 0x0004E020 */

loc_001F6C5B: ;
    esp = esp + 4;
    esi = eax;
    PUSH32(esp, 0); sub_002A37B0(); /* call 0x002A37B0 */

loc_001F6C65: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0); sub_0005F5F0(); /* call 0x0005F5F0 */

loc_001F6C6C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0005FD30(); /* call 0x0005FD30 */

loc_001F6C72: ;
    if (TEST_NZ(eax, eax)) { sub_001F6CE4(); return; } /* jne: not equal / not zero */

loc_001F6C76: ;
    if (TEST_Z(MEM32(esi + 8), 0x4110)) { sub_001F6CE4(); return; } /* je: equal / zero */

loc_001F6C7F: ;
    PUSH32(esp, 0); sub_001F6DB0(); /* call 0x001F6DB0 */

loc_001F6C84: ;
    eax = MEM32(0x847024);
    MEM32(edi) = 3;
    ecx = MEM32(eax + 0x3C);
    PUSH32(esp, 0x22);
    PUSH32(esp, ecx);
    MEM32(0x776574) = 3;
    MEM8(0x801A33) = 0;
    PUSH32(esp, 0); sub_0001E750(); /* call 0x0001E750 */

loc_001F6CAB: ;
    edx = MEM32(0x847010);
    ecx = MEM32(edx + 0x58);
    xmm1 = MEMF(ecx + 4); /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_001F6CCF; /* jnp: not parity */

loc_001F6CCA: ;
    MEMF(ecx + 4) = xmm0; /* movss */

loc_001F6CCF: ;
    MEM8(ecx + 9) = 0;
    eax = MEM32(edx + 0x58);
    SET_LO8(ecx, MEM8(eax + 8));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_001F6CE1; /* jne: not equal / not zero */

loc_001F6CDD: ;
    MEM8(eax + 8) = 1;

loc_001F6CE1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001F6D10
 * Original: 0x001F6D10 - 0x001F6D5A (74 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F6D10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F6D10: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0); sub_001F6EA0(); /* call 0x001F6EA0 */

loc_001F6D1D: ;
    esi = eax;
    esp = esp + 4;
    if (TEST_Z(esi, esi)) { sub_001F6D5A(); return; } /* je: equal / zero */

loc_001F6D26: ;
    eax = MEM32(ebp + 4);
    PUSH32(esp, edi);
    edi = MEM32(eax * 4 + 0x6BBF88);
    PUSH32(esp, 0x7F2);
    PUSH32(esp, 0x600444);
    PUSH32(esp, 0); sub_002AF210(); /* call 0x002AF210 */

loc_001F6D40: ;
    esp = esp + 8;
    MEM32(esi) = eax;
    MEM8(esi + 8) = 0;
    MEM32(esi + 4) = 0;
    MEM32(esi + 0xC) = 0x100000;
    POP32(esp, edi);
    g_seh_ebp = ebp; sub_001F6D5C(); return; /* tail jmp 0x001F6D5C */

}

/**
 * sub_001F6DB0
 * Original: 0x001F6DB0 - 0x001F6DE9 (57 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F6DB0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001F6DB0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(edi + 8);
    if (TEST_Z(ebx, ebx)) goto loc_001F6DE6; /* je: equal / zero */

loc_001F6DB9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00253B60(); /* call 0x00253B60 */

loc_001F6DBF: ;
    esi = MEM32(edi + 8);
    if (TEST_Z(esi, esi)) goto loc_001F6DDE; /* je: equal / zero */

loc_001F6DC6: ;
    eax = esi;
    PUSH32(esp, 0); sub_002539C0(); /* call 0x002539C0 */

loc_001F6DCD: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_001F6DDB: ;
    esp = esp + 4;

loc_001F6DDE: ;
    MEM32(edi + 8) = 0;
    POP32(esp, esi);

loc_001F6DE6: ;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001F6DF0
 * Original: 0x001F6DF0 - 0x001F6E74 (132 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F6DF0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001F6DF0: ;
    esp = esp - 0x200;
    SET_LO8(eax, MEM8(0x84B680));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(esp) = 0;
    MEM8(esp + 0xFF) = 0;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_001F6E74(); return; } /* je: equal / zero */

loc_001F6E0B: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x84B680);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046EEC0(); /* call 0x0046EEC0 */

loc_001F6E1F: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    esp = esp + 0xC;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001F6E54; /* je: equal / zero */

loc_001F6E2A: ;
    ecx = 0x75DF84;
    PUSH32(esp, 0); sub_0046EA5A(); /* call 0x0046EA5A */

loc_001F6E34: ;
    PUSH32(esp, eax);
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x5AC800);
    eax = esp + 0x10C;
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_001F6E51: ;
    esp = esp + 0x14;

loc_001F6E54: ;
    ecx = MEM32(esp + 0x204);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x461);
    PUSH32(esp, 0x606A34);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_001F6E6D: ;
    esp = esp + 0x210;
    esp += 4; return; /* ret */

}

/**
 * sub_001F6EA0
 * Original: 0x001F6EA0 - 0x001F6F24 (132 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F6EA0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001F6EA0: ;
    esp = esp - 0x200;
    SET_LO8(eax, MEM8(0x84B680));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(esp) = 0;
    MEM8(esp + 0xFF) = 0;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_001F6F24(); return; } /* je: equal / zero */

loc_001F6EBB: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x84B680);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046EEC0(); /* call 0x0046EEC0 */

loc_001F6ECF: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    esp = esp + 0xC;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001F6F04; /* je: equal / zero */

loc_001F6EDA: ;
    ecx = 0x75DF6C;
    PUSH32(esp, 0); sub_0046EA5A(); /* call 0x0046EA5A */

loc_001F6EE4: ;
    PUSH32(esp, eax);
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x5AC800);
    eax = esp + 0x10C;
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_001F6F01: ;
    esp = esp + 0x14;

loc_001F6F04: ;
    ecx = MEM32(esp + 0x204);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x461);
    PUSH32(esp, 0x606A34);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_001F6F1D: ;
    esp = esp + 0x210;
    esp += 4; return; /* ret */

}

/**
 * sub_001F6F50
 * Original: 0x001F6F50 - 0x001F6F73 (35 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F6F50(void)
{

loc_001F6F50: ;
    esp = esp - 0xC;
    MEM32(esp) = eax;
    eax = MEM32(esp + 0x10);
    MEM32(esp + 4) = ecx;
    eax = eax + 0xC;
    ecx = esp;
    MEM32(esp + 8) = edx;
    PUSH32(esp, 0); sub_002692D0(); /* call 0x002692D0 */

loc_001F6F6D: ;
    esp = esp + 0xC;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F6F80
 * Original: 0x001F6F80 - 0x001F6FBF (63 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F6F80(void)
{
    int _flags = 0; /* fallback flag var */

loc_001F6F80: ;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(edi) = LO8(eax);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001F6FBC; /* je: equal / zero */

loc_001F6F86: ;
    PUSH32(esp, ebx);
    ebx = MEM32(0x849ADC);
    if (CMP_EQ(esi, ebx)) goto loc_001F6FBB; /* je: equal / zero */

loc_001F6F91: ;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x103C);
    ebx = ebx + 0x85E580;
    PUSH32(esp, 0); sub_00200A60(); /* call 0x00200A60 */

loc_001F6FA2: ;
    ebx = esi;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x103C);
    ebx = ebx + 0x85E580;
    MEM32(0x849ADC) = esi;
    PUSH32(esp, 0); sub_00200860(); /* call 0x00200860 */

loc_001F6FBB: ;
    POP32(esp, ebx);

loc_001F6FBC: ;
    eax = edi;
    esp += 4; return; /* ret */

}

/**
 * sub_001F6FC0
 * Original: 0x001F6FC0 - 0x001F6FF7 (55 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F6FC0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001F6FC0: ;
    if (CMP_EQ(MEM8(eax), 0)) goto loc_001F6FF6; /* je: equal / zero */

loc_001F6FC5: ;
    PUSH32(esp, ebx);
    ebx = MEM32(0x849ADC);
    if (TEST_Z(ebx, ebx)) goto loc_001F6FF5; /* je: equal / zero */

loc_001F6FD0: ;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x103C);
    ebx = ebx + 0x85E580;
    PUSH32(esp, 0); sub_00200A60(); /* call 0x00200A60 */

loc_001F6FE1: ;
    ebx = 0x85E580;
    MEM32(0x849ADC) = 0;
    PUSH32(esp, 0); sub_00200860(); /* call 0x00200860 */

loc_001F6FF5: ;
    POP32(esp, ebx);

loc_001F6FF6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F7000
 * Original: 0x001F7000 - 0x001F700A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F7000(void)
{

loc_001F7000: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 4) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F7010
 * Original: 0x001F7010 - 0x001F703A (42 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F7010(void)
{
    int _flags = 0; /* fallback flag var */

loc_001F7010: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0); sub_00416870(); /* call 0x00416870 */

loc_001F7018: ;
    if (TEST_Z(MEM8(esp + 8), 1)) goto loc_001F7034; /* je: equal / zero */

loc_001F701F: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(esp + 8) = esi;
    if (TEST_Z(esi, esi)) goto loc_001F7034; /* je: equal / zero */

loc_001F7027: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_001F7031: ;
    esp = esp + 4;

loc_001F7034: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F7040
 * Original: 0x001F7040 - 0x001F707E (62 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F7040(void)
{

loc_001F7040: ;
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
    MEM32(eax + 8) = 0xFFFFFFFFu;
    MEM32(eax) = 0x5F6AF0;
    MEM8(eax + 0x34) = LO8(ecx);
    MEM32(eax + 0x38) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F7080
 * Original: 0x001F7080 - 0x001F7086 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F7080(void)
{

loc_001F7080: ;
    eax = 0x1F;
    esp += 4; return; /* ret */

}

/**
 * sub_001F7090
 * Original: 0x001F7090 - 0x001F70D6 (70 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F7090(void)
{
    int _flags = 0; /* fallback flag var */

loc_001F7090: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_001F7098: ;
    edx = 0; /* xor self */
    ecx = 0x6BE940;
    /* nop */

loc_001F70A0: ;
    if (CMP_EQ(MEM32(ecx), eax)) { sub_001F70D6(); return; } /* je: equal / zero */

loc_001F70A4: ;
    ecx = ecx + 0x10;
    edx++;
    if (CMP_L(ecx, 0x6BED90)) goto loc_001F70A0; /* jl: less (signed <) */

loc_001F70B0: ;
    edx = 0x600E6C;
    ecx = ZX8(MEM8(esi + 0x34));
    eax = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, 0x5F7640);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_001F70CF: ;
    esp = esp + 0x14;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001F70F0
 * Original: 0x001F70F0 - 0x001F7132 (66 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F70F0(void)
{

loc_001F70F0: ;
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
    MEM32(eax + 8) = 0xFFFFFFFFu;
    MEM32(eax) = 0x5F6A88;
    MEM8(eax + 0x34) = LO8(ecx);
    MEM8(eax + 0x35) = LO8(edx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001F7140
 * Original: 0x001F7140 - 0x001F718B (75 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F7140(void)
{
    int _flags = 0; /* fallback flag var */

loc_001F7140: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_001F7148: ;
    edx = 0; /* xor self */
    ecx = 0x6BE940;
    /* nop */

loc_001F7150: ;
    if (CMP_EQ(MEM32(ecx), eax)) { sub_001F718B(); return; } /* je: equal / zero */

loc_001F7154: ;
    ecx = ecx + 0x10;
    edx++;
    if (CMP_L(ecx, 0x6BED90)) goto loc_001F7150; /* jl: less (signed <) */

loc_001F7160: ;
    edx = 0x600E6C;
    ecx = ZX8(MEM8(esi + 0x35));
    eax = ZX8(MEM8(esi + 0x34));
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, 0x5F7618);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_001F7184: ;
    esp = esp + 0x18;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001F71A0
 * Original: 0x001F71A0 - 0x001F71D2 (50 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F71A0(void)
{

loc_001F71A0: ;
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
    MEM32(eax) = 0x5F6A20;
    esp += 4; return; /* ret */

}

/**
 * sub_001F71E0
 * Original: 0x001F71E0 - 0x001F71E6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F71E0(void)
{

loc_001F71E0: ;
    eax = 0x38;
    esp += 4; return; /* ret */

}

/**
 * sub_001F71F0
 * Original: 0x001F71F0 - 0x001F723B (75 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F71F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001F71F0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_001F71F8: ;
    edx = 0; /* xor self */
    ecx = 0x6BE940;
    /* nop */

loc_001F7200: ;
    if (CMP_EQ(MEM32(ecx), eax)) { sub_001F723B(); return; } /* je: equal / zero */

loc_001F7204: ;
    ecx = ecx + 0x10;
    edx++;
    if (CMP_L(ecx, 0x6BED90)) goto loc_001F7200; /* jl: less (signed <) */

loc_001F7210: ;
    edx = 0x600E6C;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x35);
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x34);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, 0x5F75FC);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_001F7234: ;
    esp = esp + 0x18;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001F7250
 * Original: 0x001F7250 - 0x001F7292 (66 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F7250(void)
{
    int _flags = 0; /* fallback flag var */

loc_001F7250: ;
    eax = MEM32(esi + 4);
    if (TEST_Z(eax, eax)) goto loc_001F726D; /* je: equal / zero */

loc_001F7257: ;
    ecx = MEM32(esi + 8);
    ecx = ecx - eax;
    eax = 0x2AAAAAAB;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)((int32_t)edx >> 2);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;

loc_001F726D: ;
    ecx = MEM32(esi + 0x20);
    eax--;
    if (CMP_EQ(ecx, eax)) { sub_001F7292(); return; } /* je: equal / zero */

loc_001F7275: ;
    eax = MEM32(0x777EC8);
    (void)0; /* test eax, eax - flags set for next jcc */
    eax = (uint32_t)(int32_t)SMEM8(0x776BD8);
    if (TEST_NZ(eax, eax)) goto loc_001F728A; /* jne: not equal / not zero */

loc_001F7285: ;
    eax = 2;

loc_001F728A: ;
    if (CMP_NE(MEM32(esi + 0x24), eax)) { sub_001F7292(); return; } /* jne: not equal / not zero */

loc_001F728F: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_001F72A0
 * Original: 0x001F72A0 - 0x001F72B4 (20 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F72A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001F72A0: ;
    PUSH32(esp, 0); sub_001C75D0(); /* call 0x001C75D0 */

loc_001F72A5: ;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    eax = 0x5F75D8;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001F72B3; /* jne: not equal / not zero */

loc_001F72AE: ;
    eax = 0x5F75B4;

loc_001F72B3: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F72C0
 * Original: 0x001F72C0 - 0x001F730C (76 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F72C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F72C0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_001C74F0(); /* call 0x001C74F0 */

loc_001F72CA: ;
    esi = MEM32(eax + 0x20);
    if (TEST_S(esi, esi)) { sub_001F730C(); return; } /* jl: less (signed <) */

loc_001F72D1: ;
    edx = MEM32(eax + 4);
    if (TEST_NZ(edx, edx)) goto loc_001F72DC; /* jne: not equal / not zero */

loc_001F72D8: ;
    eax = 0; /* xor self */
    goto loc_001F72F2;

loc_001F72DC: ;
    ecx = MEM32(eax + 8);
    ecx = ecx - edx;
    eax = 0x2AAAAAAB;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)((int32_t)edx >> 2);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;

loc_001F72F2: ;
    if (CMP_AE(esi, eax)) { sub_001F730C(); return; } /* jae: above or equal (unsigned >=) */

loc_001F72F6: ;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_001C74F0(); /* call 0x001C74F0 */

loc_001F72FD: ;
    esi = eax;
    PUSH32(esp, 0); sub_001C75D0(); /* call 0x001C75D0 */

loc_001F7304: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_001F730C(); return; } /* jne: not equal / not zero */

loc_001F7308: ;
    SET_LO8(ebx, 1);
    g_seh_ebp = ebp; sub_001F730E(); return; /* tail jmp 0x001F730E */

}

/**
 * sub_001F73C0
 * Original: 0x001F73C0 - 0x001F740B (75 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F73C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F73C0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_001C74F0(); /* call 0x001C74F0 */

loc_001F73C9: ;
    esi = MEM32(eax + 0x20);
    if (TEST_S(esi, esi)) { sub_001F740B(); return; } /* jl: less (signed <) */

loc_001F73D0: ;
    edx = MEM32(eax + 4);
    if (TEST_NZ(edx, edx)) goto loc_001F73DB; /* jne: not equal / not zero */

loc_001F73D7: ;
    eax = 0; /* xor self */
    goto loc_001F73F1;

loc_001F73DB: ;
    ecx = MEM32(eax + 8);
    ecx = ecx - edx;
    eax = 0x2AAAAAAB;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)((int32_t)edx >> 2);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;

loc_001F73F1: ;
    if (CMP_AE(esi, eax)) { sub_001F740B(); return; } /* jae: above or equal (unsigned >=) */

loc_001F73F5: ;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_001C74F0(); /* call 0x001C74F0 */

loc_001F73FC: ;
    esi = eax;
    PUSH32(esp, 0); sub_001C75D0(); /* call 0x001C75D0 */

loc_001F7403: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_001F740B(); return; } /* jne: not equal / not zero */

loc_001F7407: ;
    SET_LO8(ebx, 1);
    g_seh_ebp = ebp; sub_001F740D(); return; /* tail jmp 0x001F740D */

}

/**
 * sub_001F7520
 * Original: 0x001F7520 - 0x001F7554 (52 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F7520(void)
{
    int _flags = 0; /* fallback flag var */

loc_001F7520: ;
    eax = ZX8(MEM8(0x776558));
    ecx = (uint32_t)(int32_t)SMEM8(0x6BCFEB);
    if (CMP_L(eax, ecx)) goto loc_001F7537; /* jl: less (signed <) */

loc_001F7532: ;
    eax = 0x14;

loc_001F7537: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1B0);
    eax = eax + 0x763260;
    ecx = 0; /* xor self */
    MEM32(eax + 0x68) = ecx;
    MEM32(eax + 0x164) = ecx;
    MEM32(eax + 0x168) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_001F7560
 * Original: 0x001F7560 - 0x001F756D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F7560(void)
{
    int _flags = 0; /* fallback flag var */

loc_001F7560: ;
    SET_LO8(ecx, MEM8(eax + 0x135));
    if (TEST_Z(LO8(ecx), LO8(ecx))) { sub_001F756D(); return; } /* je: equal / zero */

loc_001F756A: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_001F7580
 * Original: 0x001F7580 - 0x001F76C6 (326 bytes, 108 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F7580(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F7580: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_001F758D: ;
    if (TEST_NZ(eax, eax)) goto loc_001F75A6; /* jne: not equal / not zero */

loc_001F7591: ;
    ecx = ZX16(MEM16(esi + 0x60));

loc_001F7595: ;
    edx = (uint32_t)(int32_t)SMEM8(eax + 0x862CCB);
    eax++;
    if (CMP_EQ(edx, ecx)) goto loc_001F75A8; /* je: equal / zero */

loc_001F75A1: ;
    if (CMP_L(eax, 2)) goto loc_001F7595; /* jl: less (signed <) */

loc_001F75A6: ;
    eax = 0; /* xor self */

loc_001F75A8: ;
    ebp = eax + -1;
    eax = (uint32_t)(int32_t)SMEM8(ebp + 0x862CCB);
    if (TEST_S(eax, eax)) goto loc_001F75DB; /* jl: less (signed <) */

loc_001F75B6: ;
    if (CMP_GE(eax, 0x10)) goto loc_001F75DB; /* jge: greater or equal (signed >=) */

loc_001F75BB: ;
    ecx = (int32_t)MEMF(0x849C30); /* cvttss2si */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    eax = eax + 0x776280;
    edi = MEM32(eax + 0x24);
    edi++;
    ecx = ecx + 0x12C;
    MEM32(eax + 0x24) = edi;
    MEM32(eax + 0x28) = ecx;

loc_001F75DB: ;
    ecx = MEM32(ebp * 4 + 0x862CC0);
    SET_LO8(eax, MEM8(0x862C5C));
    edx = 0; /* xor self */
    (void)0; /* test ecx, ecx - flags set for next jcc */
    SET_LO8(edx, (TEST_Z(ecx, ecx)) ? 1 : 0); /* sete */
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    edi = edx;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_001F76C6(); return; } /* jne: not equal / not zero */

loc_001F75F8: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_001F7606; /* jne: not equal / not zero */

loc_001F7601: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_001F7606: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    ebx = esi;
    if (TEST_Z(esi, esi)) goto loc_001F764E; /* je: equal / zero */

loc_001F762C: ;
    if (CMP_B(MEM32(esi + 0x80), 0x3C)) goto loc_001F764E; /* jb: below (unsigned <) */

loc_001F7635: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_001F763F: ;
    PUSH32(esp, 0x3C);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_001F7647: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_001F766F; /* jne: not equal / not zero */

loc_001F764E: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    ebx = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_001F7660: ;
    PUSH32(esp, 0x3C);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_001F7668: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_001F767B; /* je: equal / zero */

loc_001F766F: ;
    PUSH32(esp, ebp);
    edx = edi;
    PUSH32(esp, 0); sub_001F7040(); /* call 0x001F7040 */

loc_001F7677: ;
    esi = eax;
    goto loc_001F767D;

loc_001F767B: ;
    esi = 0; /* xor self */

loc_001F767D: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x1F4);
    PUSH32(esp, 0); sub_004168D0(); /* call 0x004168D0 */

loc_001F7689: ;
    edx = (uint32_t)(int32_t)SMEM8(0x864EC1);
    eax = 0; /* xor self */
    if (CMP_LE(edx & edx, 0)) goto loc_001F76B0; /* jle: less or equal (signed <=) */

loc_001F7696: ;
    ecx = 0x864EC8;
    goto loc_001F76A0;

    /* nop */

loc_001F76A0: ;
    if (CMP_NE(MEM8(ecx), 0)) goto loc_001F76B2; /* jne: not equal / not zero */

loc_001F76A5: ;
    eax++;
    ecx = ecx + 0xA50;
    if (CMP_L(eax, edx)) goto loc_001F76A0; /* jl: less (signed <) */

loc_001F76B0: ;
    ecx = 0; /* xor self */

loc_001F76B2: ;
    ecx = MEM32(ecx + 0x9DC);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_001F76C0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001F7760
 * Original: 0x001F7760 - 0x001F776C (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F7760(void)
{
    int _flags = 0; /* fallback flag var */

loc_001F7760: ;
    SET_LO8(eax, MEM8(0x862D90));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_001F776C(); return; } /* jne: not equal / not zero */

loc_001F7769: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_001F77C0
 * Original: 0x001F77C0 - 0x001F77E1 (33 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F77C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F77C0: ;
    eax = ZX8(MEM8(0x776558));
    esp = esp - 0x578;
    (void)0; /* cmp eax, 2 - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_GE(eax, 2)) { sub_001F77E1(); return; } /* jge: greater or equal (signed >=) */

loc_001F77D5: ;
    eax = MEM32(eax * 4 + 0x8470FC);
    esi = MEM32(eax + 8);
    g_seh_ebp = ebp; sub_001F77E6(); return; /* tail jmp 0x001F77E6 */

}

/**
 * sub_001F91D0
 * Original: 0x001F91D0 - 0x001F91E0 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F91D0(void)
{

loc_001F91D0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM8(eax + 0xC) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001F91E0
 * Original: 0x001F91E0 - 0x001F99E3 (2051 bytes, 542 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F91E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F91E0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x84CA48);
    ebx = 0; /* xor self */
    PUSH32(esp, 0x84CDE0);
    esi = eax;
    MEM32(0x849874) = ebx;
    PUSH32(esp, 0); sub_0046FCD6(); /* call 0x0046FCD6 */

loc_001F91FD: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x5F59F0);
    PUSH32(esp, 0x84CA48);
    PUSH32(esp, 0); sub_0046FCD6(); /* call 0x0046FCD6 */

loc_001F920E: ;
    eax = MEM32(0x863D04);
    esp = esp + 0x18;
    (void)0; /* cmp eax, 1 - flags set for next jcc */
    MEM8(0x849931) = 1;
    MEM8(0x862D90) = LO8(ebx);
    if (CMP_NE(eax, 1)) goto loc_001F922E; /* jne: not equal / not zero */

loc_001F9228: ;
    MEM8(0x7FA274) = LO8(ebx);

loc_001F922E: ;
    (void)0; /* cmp esi, 0xFFFFFFFFu - flags set for next jcc */
    SET_LO8(edx, MEM8(0x849B80));
    if (CMP_NE(esi, 0xFFFFFFFFu)) goto loc_001F97C1; /* jne: not equal / not zero */

loc_001F923D: ;
    if (CMP_EQ(LO8(edx), LO8(ebx))) goto loc_001F9253; /* je: equal / zero */

loc_001F9241: ;
    MEM8(0x849B60) = LO8(ebx);
    MEM8(0x849B61) = LO8(ebx);
    MEM8(0x849AC0) = LO8(ebx);

loc_001F9253: ;
    ecx = MEM32(0x849ACC);
    eax = ecx + -1;
    if (CMP_A(eax, 7)) goto loc_001F9328; /* ja: above (unsigned >) */

loc_001F9265: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x1F99E4); /* switch: 48 entries, 32 targets */
    if (_jt == 0x001F926Cu) goto loc_001F926C;
    if (_jt == 0x001F9273u) goto loc_001F9273;
    if (_jt == 0x001F927Au) goto loc_001F927A;
    if (_jt == 0x001F92A1u) goto loc_001F92A1;
    if (_jt == 0x001F9328u) goto loc_001F9328;
    if (_jt == 0x001F9353u) goto loc_001F9353;
    if (_jt == 0x001F939Du) goto loc_001F939D;
    if (_jt == 0x001F93ECu) goto loc_001F93EC;
    if (_jt == 0x001F9448u) goto loc_001F9448;
    if (_jt == 0x001F94ABu) goto loc_001F94AB;
    if (_jt == 0x001F9525u) goto loc_001F9525;
    if (_jt == 0x001F957Au) goto loc_001F957A;
    if (_jt == 0x001F9581u) goto loc_001F9581;
    if (_jt == 0x001F9588u) goto loc_001F9588;
    if (_jt == 0x001F95AEu) goto loc_001F95AE;
    if (_jt == 0x001F9612u) goto loc_001F9612;
    if (_jt == 0x001F965Fu) goto loc_001F965F;
    if (_jt == 0x001F96ADu) goto loc_001F96AD;
    if (_jt == 0x001F96F5u) goto loc_001F96F5;
    if (_jt == 0x001F974Cu) goto loc_001F974C;
    if (_jt == 0x001F9793u) goto loc_001F9793;
    if (_jt == 0x001F97F2u) goto loc_001F97F2;
    if (_jt == 0x001F97F9u) goto loc_001F97F9;
    if (_jt == 0x001F9800u) goto loc_001F9800;
    if (_jt == 0x001F981Du) goto loc_001F981D;
    if (_jt == 0x001F985Eu) goto loc_001F985E;
    if (_jt == 0x001F98ADu) goto loc_001F98AD;
    if (_jt == 0x001F98C8u) goto loc_001F98C8;
    if (_jt == 0x001F98F2u) goto loc_001F98F2;
    if (_jt == 0x001F994Fu) goto loc_001F994F;
    if (_jt == 0x001F9998u) goto loc_001F9998;
    if (_jt == 0x001F99E0u) goto loc_001F99E0;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001F926C: ;
    eax = 1;
    goto loc_001F927F;

loc_001F9273: ;
    eax = 3;
    goto loc_001F927F;

loc_001F927A: ;
    eax = 5;

loc_001F927F: ;
    if (CMP_EQ(LO8(edx), LO8(ebx))) goto loc_001F9295; /* je: equal / zero */

loc_001F9283: ;
    esi = 0; /* xor self */
    PUSH32(esp, 0); sub_0021FFA0(); /* call 0x0021FFA0 */

loc_001F928A: ;
    ecx = MEM32(0x849ACC);
    goto loc_001F9328;

loc_001F9295: ;
    if (CMP_A(eax, 7)) goto loc_001F92B1; /* ja: above (unsigned >) */

loc_001F929A: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x1F9A04); /* switch: 40 entries, 28 targets */
    if (_jt == 0x001F92A1u) goto loc_001F92A1;
    if (_jt == 0x001F9353u) goto loc_001F9353;
    if (_jt == 0x001F939Du) goto loc_001F939D;
    if (_jt == 0x001F93ECu) goto loc_001F93EC;
    if (_jt == 0x001F9448u) goto loc_001F9448;
    if (_jt == 0x001F94ABu) goto loc_001F94AB;
    if (_jt == 0x001F9525u) goto loc_001F9525;
    if (_jt == 0x001F957Au) goto loc_001F957A;
    if (_jt == 0x001F9581u) goto loc_001F9581;
    if (_jt == 0x001F9588u) goto loc_001F9588;
    if (_jt == 0x001F95AEu) goto loc_001F95AE;
    if (_jt == 0x001F9612u) goto loc_001F9612;
    if (_jt == 0x001F965Fu) goto loc_001F965F;
    if (_jt == 0x001F96ADu) goto loc_001F96AD;
    if (_jt == 0x001F96F5u) goto loc_001F96F5;
    if (_jt == 0x001F974Cu) goto loc_001F974C;
    if (_jt == 0x001F9793u) goto loc_001F9793;
    if (_jt == 0x001F97F2u) goto loc_001F97F2;
    if (_jt == 0x001F97F9u) goto loc_001F97F9;
    if (_jt == 0x001F9800u) goto loc_001F9800;
    if (_jt == 0x001F981Du) goto loc_001F981D;
    if (_jt == 0x001F985Eu) goto loc_001F985E;
    if (_jt == 0x001F98ADu) goto loc_001F98AD;
    if (_jt == 0x001F98C8u) goto loc_001F98C8;
    if (_jt == 0x001F98F2u) goto loc_001F98F2;
    if (_jt == 0x001F994Fu) goto loc_001F994F;
    if (_jt == 0x001F9998u) goto loc_001F9998;
    if (_jt == 0x001F99E0u) goto loc_001F99E0;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001F92A1: ;
    if (CMP_NE(ecx, 4)) goto loc_001F92CA; /* jne: not equal / not zero */

loc_001F92A6: ;
    ecx = 1;

loc_001F92AB: ;
    MEM32(0x849ACC) = ecx;

loc_001F92B1: ;
    esi = MEM32(0x849AA4);

loc_001F92B7: ;
    eax = ecx + -1;
    if (CMP_A(eax, 7)) goto loc_001F99E0; /* ja: above (unsigned >) */

loc_001F92C3: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x1F9A24); /* switch: 32 entries, 21 targets */
    if (_jt == 0x001F957Au) goto loc_001F957A;
    if (_jt == 0x001F9581u) goto loc_001F9581;
    if (_jt == 0x001F9588u) goto loc_001F9588;
    if (_jt == 0x001F95AEu) goto loc_001F95AE;
    if (_jt == 0x001F9612u) goto loc_001F9612;
    if (_jt == 0x001F965Fu) goto loc_001F965F;
    if (_jt == 0x001F96ADu) goto loc_001F96AD;
    if (_jt == 0x001F96F5u) goto loc_001F96F5;
    if (_jt == 0x001F974Cu) goto loc_001F974C;
    if (_jt == 0x001F9793u) goto loc_001F9793;
    if (_jt == 0x001F97F2u) goto loc_001F97F2;
    if (_jt == 0x001F97F9u) goto loc_001F97F9;
    if (_jt == 0x001F9800u) goto loc_001F9800;
    if (_jt == 0x001F981Du) goto loc_001F981D;
    if (_jt == 0x001F985Eu) goto loc_001F985E;
    if (_jt == 0x001F98ADu) goto loc_001F98AD;
    if (_jt == 0x001F98C8u) goto loc_001F98C8;
    if (_jt == 0x001F98F2u) goto loc_001F98F2;
    if (_jt == 0x001F994Fu) goto loc_001F994F;
    if (_jt == 0x001F9998u) goto loc_001F9998;
    if (_jt == 0x001F99E0u) goto loc_001F99E0;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001F92CA: ;
    if (CMP_NE(ecx, 5)) goto loc_001F92D6; /* jne: not equal / not zero */

loc_001F92CF: ;
    ecx = 2;
    goto loc_001F92AB;

loc_001F92D6: ;
    PUSH32(esp, 0); sub_00227EE0(); /* call 0x00227EE0 */

loc_001F92DB: ;
    eax = MEM32(0x849AA4);
    if (CMP_NE(eax, ebx)) goto loc_001F92EB; /* jne: not equal / not zero */

loc_001F92E4: ;
    PUSH32(esp, 0); sub_00207A00(); /* call 0x00207A00 */

loc_001F92E9: ;
    goto loc_001F9316;

loc_001F92EB: ;
    eax = MEM32(eax + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x5F82F0);
    SET_LO8(ecx, 0); /* xor self */
    PUSH32(esp, 0); sub_00036E30(); /* call 0x00036E30 */

loc_001F9301: ;
    eax = MEM32(0x849AA4);
    eax = MEM32(eax + 0x10);
    xmm1 = 0.0f; /* xorps self = zero */
    esp = esp + 0x10;
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00036E90(); /* call 0x00036E90 */

loc_001F9316: ;
    MEM8(0x849AC0) = 1;
    ecx = 1;

loc_001F9322: ;
    MEM32(0x849ACC) = ecx;

loc_001F9328: ;
    esi = MEM32(0x849AA4);

loc_001F932E: ;
    SET_LO8(edx, MEM8(0x849B80));
    if (CMP_EQ(LO8(edx), LO8(ebx))) goto loc_001F92B7; /* je: equal / zero */

loc_001F933C: ;
    MEM8(0x849B62) = LO8(ebx);
    MEM8(0x849B63) = LO8(ebx);
    MEM8(0x849AC0) = LO8(ebx);
    goto loc_001F92B7;

loc_001F9353: ;
    esi = MEM32(0x849AA4);
    if (CMP_EQ(esi, ebx)) goto loc_001F92B7; /* je: equal / zero */

loc_001F9361: ;
    esi = MEM32(esi + 0x10);
    edx = 0; /* xor self */
    eax = esi;
    PUSH32(esp, 0); sub_00036E70(); /* call 0x00036E70 */

loc_001F936D: ;
    xmm1 = MEMF(0x648D14); /* movss */
    PUSH32(esp, ecx);
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(esp) = xmm1; /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x5F82B8);
    SET_LO8(ecx, 0); /* xor self */
    eax = esi;
    PUSH32(esp, 0); sub_00036E30(); /* call 0x00036E30 */

loc_001F9393: ;
    esp = esp + 0x10;
    ecx = 3;
    goto loc_001F9322;

loc_001F939D: ;
    if (CMP_NE(MEM32(0x849AA4), ebx)) goto loc_001F93AA; /* jne: not equal / not zero */

loc_001F93A5: ;
    PUSH32(esp, 0); sub_00207A00(); /* call 0x00207A00 */

loc_001F93AA: ;
    edx = MEM32(0x849AA4);
    eax = MEM32(edx + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x5F8278);
    SET_LO8(ecx, 0); /* xor self */
    PUSH32(esp, 0); sub_00036E30(); /* call 0x00036E30 */

loc_001F93C6: ;
    eax = MEM32(0x849AA4);
    eax = MEM32(eax + 0x10);
    xmm1 = 0.0f; /* xorps self = zero */
    esp = esp + 0x10;
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00036E90(); /* call 0x00036E90 */

loc_001F93DB: ;
    MEM8(0x849AC0) = 1;
    ecx = 0xA;
    goto loc_001F9322;

loc_001F93EC: ;
    eax = MEM32(0x849AA4);
    if (CMP_NE(eax, ebx)) goto loc_001F940B; /* jne: not equal / not zero */

loc_001F93F5: ;
    PUSH32(esp, 0); sub_00207A00(); /* call 0x00207A00 */

loc_001F93FA: ;
    MEM8(0x849AC0) = 1;
    ecx = 4;
    goto loc_001F9322;

loc_001F940B: ;
    eax = MEM32(eax + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x5F82F0);
    SET_LO8(ecx, 0); /* xor self */
    PUSH32(esp, 0); sub_00036E30(); /* call 0x00036E30 */

loc_001F9421: ;
    ecx = MEM32(0x849AA4);
    eax = MEM32(ecx + 0x10);
    xmm1 = 0.0f; /* xorps self = zero */
    esp = esp + 0x10;
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00036E90(); /* call 0x00036E90 */

loc_001F9437: ;
    MEM8(0x849AC0) = 1;
    ecx = 4;
    goto loc_001F9322;

loc_001F9448: ;
    if (CMP_EQ(ecx, 4)) goto loc_001F9456; /* je: equal / zero */

loc_001F944D: ;
    if (CMP_NE(ecx, 5)) goto loc_001F92B1; /* jne: not equal / not zero */

loc_001F9456: ;
    esi = MEM32(0x849AA4);
    if (CMP_EQ(esi, ebx)) goto loc_001F949B; /* je: equal / zero */

loc_001F9460: ;
    esi = MEM32(esi + 0x10);
    edx = 0; /* xor self */
    eax = esi;
    PUSH32(esp, 0); sub_00036E70(); /* call 0x00036E70 */

loc_001F946C: ;
    xmm1 = MEMF(0x648D14); /* movss */
    PUSH32(esp, ecx);
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(esp) = xmm1; /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x5F82B8);
    SET_LO8(ecx, 0); /* xor self */
    eax = esi;
    PUSH32(esp, 0); sub_00036E30(); /* call 0x00036E30 */

loc_001F9492: ;
    esi = MEM32(0x849AA4);
    esp = esp + 0x10;

loc_001F949B: ;
    ecx = 6;
    MEM32(0x849ACC) = ecx;
    goto loc_001F932E;

loc_001F94AB: ;
    eax = MEM32(0x849AA4);
    if (CMP_NE(eax, ebx)) goto loc_001F94E9; /* jne: not equal / not zero */

loc_001F94B4: ;
    PUSH32(esp, 0); sub_00207A00(); /* call 0x00207A00 */

loc_001F94B9: ;
    edx = MEM32(0x849AA4);
    eax = MEM32(edx + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x5F8238);
    SET_LO8(ecx, 0); /* xor self */
    PUSH32(esp, 0); sub_00036E30(); /* call 0x00036E30 */

loc_001F94D5: ;
    esp = esp + 0x10;
    MEM8(0x849AC0) = 1;
    ecx = 7;
    goto loc_001F9322;

loc_001F94E9: ;
    eax = MEM32(eax + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x5F8238);
    SET_LO8(ecx, 0); /* xor self */
    PUSH32(esp, 0); sub_00036E30(); /* call 0x00036E30 */

loc_001F94FF: ;
    eax = MEM32(0x849AA4);
    eax = MEM32(eax + 0x10);
    xmm1 = 0.0f; /* xorps self = zero */
    esp = esp + 0x10;
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00036E90(); /* call 0x00036E90 */

loc_001F9514: ;
    MEM8(0x849AC0) = 1;
    ecx = 7;
    goto loc_001F9322;

loc_001F9525: ;
    esi = MEM32(0x849AA4);
    if (CMP_EQ(esi, ebx)) goto loc_001F956A; /* je: equal / zero */

loc_001F952F: ;
    esi = MEM32(esi + 0x10);
    edx = 0; /* xor self */
    eax = esi;
    PUSH32(esp, 0); sub_00036E70(); /* call 0x00036E70 */

loc_001F953B: ;
    xmm1 = MEMF(0x648D14); /* movss */
    PUSH32(esp, ecx);
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(esp) = xmm1; /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x40800000);
    PUSH32(esp, 0x5F81F8);
    SET_LO8(ecx, 0); /* xor self */
    eax = esi;
    PUSH32(esp, 0); sub_00036E30(); /* call 0x00036E30 */

loc_001F9561: ;
    esi = MEM32(0x849AA4);
    esp = esp + 0x10;

loc_001F956A: ;
    ecx = 9;
    MEM32(0x849ACC) = ecx;
    goto loc_001F932E;

loc_001F957A: ;
    eax = 1;
    goto loc_001F958D;

loc_001F9581: ;
    eax = 3;
    goto loc_001F958D;

loc_001F9588: ;
    eax = 5;

loc_001F958D: ;
    if (CMP_EQ(LO8(edx), LO8(ebx))) goto loc_001F959E; /* je: equal / zero */

loc_001F9591: ;
    esi = 1;

loc_001F9596: ;
    PUSH32(esp, 0); sub_0021FFA0(); /* call 0x0021FFA0 */

loc_001F959B: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001F959E: ;
    if (CMP_A(eax, 7)) goto loc_001F99E0; /* ja: above (unsigned >) */

loc_001F95A7: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x1F9A44); /* switch: 24 entries, 18 targets */
    if (_jt == 0x001F95AEu) goto loc_001F95AE;
    if (_jt == 0x001F9612u) goto loc_001F9612;
    if (_jt == 0x001F965Fu) goto loc_001F965F;
    if (_jt == 0x001F96ADu) goto loc_001F96AD;
    if (_jt == 0x001F96F5u) goto loc_001F96F5;
    if (_jt == 0x001F974Cu) goto loc_001F974C;
    if (_jt == 0x001F9793u) goto loc_001F9793;
    if (_jt == 0x001F97F2u) goto loc_001F97F2;
    if (_jt == 0x001F97F9u) goto loc_001F97F9;
    if (_jt == 0x001F9800u) goto loc_001F9800;
    if (_jt == 0x001F981Du) goto loc_001F981D;
    if (_jt == 0x001F985Eu) goto loc_001F985E;
    if (_jt == 0x001F98ADu) goto loc_001F98AD;
    if (_jt == 0x001F98C8u) goto loc_001F98C8;
    if (_jt == 0x001F98F2u) goto loc_001F98F2;
    if (_jt == 0x001F994Fu) goto loc_001F994F;
    if (_jt == 0x001F9998u) goto loc_001F9998;
    if (_jt == 0x001F99E0u) goto loc_001F99E0;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001F95AE: ;
    if (CMP_EQ(ecx, 4)) goto loc_001F9605; /* je: equal / zero */

loc_001F95B3: ;
    if (CMP_NE(ecx, 5)) goto loc_001F95C5; /* jne: not equal / not zero */

loc_001F95B8: ;
    POP32(esp, esi);
    MEM32(0x849ACC) = 2;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001F95C5: ;
    PUSH32(esp, 0); sub_00227EE0(); /* call 0x00227EE0 */

loc_001F95CA: ;
    if (CMP_EQ(esi, ebx)) goto loc_001F983D; /* je: equal / zero */

loc_001F95D2: ;
    eax = MEM32(esi + 0x10);

loc_001F95D5: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x5F82F0);
    SET_LO8(ecx, 0); /* xor self */
    PUSH32(esp, 0); sub_00036E30(); /* call 0x00036E30 */

loc_001F95E8: ;
    ecx = MEM32(0x849AA4);
    eax = MEM32(ecx + 0x10);
    xmm1 = 0.0f; /* xorps self = zero */
    esp = esp + 0x10;
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00036E90(); /* call 0x00036E90 */

loc_001F95FE: ;
    MEM8(0x849AC0) = 1;

loc_001F9605: ;
    POP32(esp, esi);
    MEM32(0x849ACC) = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001F9612: ;
    if (CMP_EQ(esi, ebx)) goto loc_001F99E0; /* je: equal / zero */

loc_001F961A: ;
    esi = MEM32(esi + 0x10);
    edx = 0; /* xor self */
    eax = esi;
    PUSH32(esp, 0); sub_00036E70(); /* call 0x00036E70 */

loc_001F9626: ;
    PUSH32(esp, ecx);
    xmm1 = xmm0; /* movaps */
    xmm0 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x5F82B8);
    SET_LO8(ecx, 0); /* xor self */
    eax = esi;
    PUSH32(esp, 0); sub_00036E30(); /* call 0x00036E30 */

loc_001F964F: ;
    esp = esp + 0x10;
    POP32(esp, esi);
    MEM32(0x849ACC) = 3;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001F965F: ;
    if (CMP_NE(esi, ebx)) goto loc_001F966E; /* jne: not equal / not zero */

loc_001F9663: ;
    PUSH32(esp, 0); sub_00207A00(); /* call 0x00207A00 */

loc_001F9668: ;
    esi = MEM32(0x849AA4);

loc_001F966E: ;
    eax = MEM32(esi + 0x10);

loc_001F9671: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x5F8278);
    SET_LO8(ecx, 0); /* xor self */
    PUSH32(esp, 0); sub_00036E30(); /* call 0x00036E30 */

loc_001F9684: ;
    eax = MEM32(0x849AA4);
    eax = MEM32(eax + 0x10);
    xmm1 = 0.0f; /* xorps self = zero */
    esp = esp + 0x10;
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00036E90(); /* call 0x00036E90 */

loc_001F9699: ;
    POP32(esp, esi);
    MEM8(0x849AC0) = 1;
    MEM32(0x849ACC) = 0xA;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001F96AD: ;
    if (CMP_EQ(esi, ebx)) goto loc_001F98D1; /* je: equal / zero */

loc_001F96B5: ;
    eax = MEM32(esi + 0x10);

loc_001F96B8: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x5F82F0);
    SET_LO8(ecx, 0); /* xor self */
    PUSH32(esp, 0); sub_00036E30(); /* call 0x00036E30 */

loc_001F96CB: ;
    ecx = MEM32(0x849AA4);
    eax = MEM32(ecx + 0x10);
    xmm1 = 0.0f; /* xorps self = zero */
    esp = esp + 0x10;
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00036E90(); /* call 0x00036E90 */

loc_001F96E1: ;
    POP32(esp, esi);
    MEM8(0x849AC0) = 1;
    MEM32(0x849ACC) = 4;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001F96F5: ;
    if (CMP_EQ(ecx, 4)) goto loc_001F9703; /* je: equal / zero */

loc_001F96FA: ;
    if (CMP_NE(ecx, 5)) goto loc_001F99E0; /* jne: not equal / not zero */

loc_001F9703: ;
    if (CMP_EQ(esi, ebx)) goto loc_001F973F; /* je: equal / zero */

loc_001F9707: ;
    esi = MEM32(esi + 0x10);
    edx = 0; /* xor self */
    eax = esi;
    PUSH32(esp, 0); sub_00036E70(); /* call 0x00036E70 */

loc_001F9713: ;
    PUSH32(esp, ecx);
    xmm1 = xmm0; /* movaps */
    xmm0 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x5F82B8);
    SET_LO8(ecx, 0); /* xor self */
    eax = esi;
    PUSH32(esp, 0); sub_00036E30(); /* call 0x00036E30 */

loc_001F973C: ;
    esp = esp + 0x10;

loc_001F973F: ;
    POP32(esp, esi);
    MEM32(0x849ACC) = 6;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001F974C: ;
    if (CMP_EQ(esi, ebx)) goto loc_001F9958; /* je: equal / zero */

loc_001F9754: ;
    eax = MEM32(esi + 0x10);

loc_001F9757: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x5F8238);
    SET_LO8(ecx, 0); /* xor self */
    PUSH32(esp, 0); sub_00036E30(); /* call 0x00036E30 */

loc_001F976A: ;
    eax = MEM32(0x849AA4);
    eax = MEM32(eax + 0x10);
    xmm1 = 0.0f; /* xorps self = zero */
    esp = esp + 0x10;
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00036E90(); /* call 0x00036E90 */

loc_001F977F: ;
    POP32(esp, esi);
    MEM8(0x849AC0) = 1;
    MEM32(0x849ACC) = 7;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001F9793: ;
    if (CMP_EQ(esi, ebx)) goto loc_001F99D6; /* je: equal / zero */

loc_001F979B: ;
    esi = MEM32(esi + 0x10);
    edx = 0; /* xor self */
    eax = esi;
    PUSH32(esp, 0); sub_00036E70(); /* call 0x00036E70 */

loc_001F97A7: ;
    xmm1 = xmm0; /* movaps */
    xmm0 = MEMF(0x648D14); /* movss */
    PUSH32(esp, ecx);
    xmm0 = xmm0 - xmm1; /* subss */
    MEMF(esp) = xmm0; /* movss */
    goto loc_001F99BF;

loc_001F97C1: ;
    if (CMP_EQ(LO8(edx), LO8(ebx))) goto loc_001F97D9; /* je: equal / zero */

loc_001F97C5: ;
    MEM8(esi * 2 + 0x849B60) = LO8(ebx);
    MEM8(esi * 2 + 0x849B61) = LO8(ebx);
    MEM8(0x849AC0) = LO8(ebx);

loc_001F97D9: ;
    ecx = MEM32(0x849ACC);
    eax = ecx + -1;
    if (CMP_A(eax, 7)) goto loc_001F99E0; /* ja: above (unsigned >) */

loc_001F97EB: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x1F9A64); /* switch: 16 entries, 11 targets */
    if (_jt == 0x001F97F2u) goto loc_001F97F2;
    if (_jt == 0x001F97F9u) goto loc_001F97F9;
    if (_jt == 0x001F9800u) goto loc_001F9800;
    if (_jt == 0x001F981Du) goto loc_001F981D;
    if (_jt == 0x001F985Eu) goto loc_001F985E;
    if (_jt == 0x001F98ADu) goto loc_001F98AD;
    if (_jt == 0x001F98C8u) goto loc_001F98C8;
    if (_jt == 0x001F98F2u) goto loc_001F98F2;
    if (_jt == 0x001F994Fu) goto loc_001F994F;
    if (_jt == 0x001F9998u) goto loc_001F9998;
    if (_jt == 0x001F99E0u) goto loc_001F99E0;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001F97F2: ;
    eax = 1;
    goto loc_001F9805;

loc_001F97F9: ;
    eax = 3;
    goto loc_001F9805;

loc_001F9800: ;
    eax = 5;

loc_001F9805: ;
    if (CMP_NE(LO8(edx), LO8(ebx))) goto loc_001F9596; /* jne: not equal / not zero */

loc_001F980D: ;
    if (CMP_A(eax, 7)) goto loc_001F99E0; /* ja: above (unsigned >) */

loc_001F9816: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x1F9A84); /* switch: 8 entries, 7 targets */
    if (_jt == 0x001F981Du) goto loc_001F981D;
    if (_jt == 0x001F985Eu) goto loc_001F985E;
    if (_jt == 0x001F98ADu) goto loc_001F98AD;
    if (_jt == 0x001F98C8u) goto loc_001F98C8;
    if (_jt == 0x001F98F2u) goto loc_001F98F2;
    if (_jt == 0x001F994Fu) goto loc_001F994F;
    if (_jt == 0x001F9998u) goto loc_001F9998;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001F981D: ;
    if (CMP_EQ(ecx, 4)) goto loc_001F9605; /* je: equal / zero */

loc_001F9826: ;
    if (CMP_EQ(ecx, 5)) goto loc_001F95B8; /* je: equal / zero */

loc_001F982F: ;
    PUSH32(esp, 0); sub_00227EE0(); /* call 0x00227EE0 */

loc_001F9834: ;
    eax = MEM32(0x849AA4);
    if (CMP_NE(eax, ebx)) goto loc_001F9856; /* jne: not equal / not zero */

loc_001F983D: ;
    PUSH32(esp, 0); sub_00207A00(); /* call 0x00207A00 */

loc_001F9842: ;
    POP32(esp, esi);
    MEM8(0x849AC0) = 1;
    MEM32(0x849ACC) = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001F9856: ;
    eax = MEM32(eax + 0x10);
    goto loc_001F95D5;

loc_001F985E: ;
    eax = MEM32(0x849AA4);
    if (CMP_EQ(eax, ebx)) goto loc_001F99E0; /* je: equal / zero */

loc_001F986B: ;
    esi = MEM32(eax + 0x10);
    edx = 0; /* xor self */
    eax = esi;
    PUSH32(esp, 0); sub_00036E70(); /* call 0x00036E70 */

loc_001F9877: ;
    xmm1 = MEMF(0x648D14); /* movss */
    PUSH32(esp, ecx);
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(esp) = xmm1; /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x5F82B8);
    SET_LO8(ecx, 0); /* xor self */
    eax = esi;
    PUSH32(esp, 0); sub_00036E30(); /* call 0x00036E30 */

loc_001F989D: ;
    esp = esp + 0x10;
    POP32(esp, esi);
    MEM32(0x849ACC) = 3;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001F98AD: ;
    if (CMP_NE(MEM32(0x849AA4), ebx)) goto loc_001F98BA; /* jne: not equal / not zero */

loc_001F98B5: ;
    PUSH32(esp, 0); sub_00207A00(); /* call 0x00207A00 */

loc_001F98BA: ;
    edx = MEM32(0x849AA4);
    eax = MEM32(edx + 0x10);
    goto loc_001F9671;

loc_001F98C8: ;
    eax = MEM32(0x849AA4);
    if (CMP_NE(eax, ebx)) goto loc_001F98EA; /* jne: not equal / not zero */

loc_001F98D1: ;
    PUSH32(esp, 0); sub_00207A00(); /* call 0x00207A00 */

loc_001F98D6: ;
    POP32(esp, esi);
    MEM8(0x849AC0) = 1;
    MEM32(0x849ACC) = 4;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001F98EA: ;
    eax = MEM32(eax + 0x10);
    goto loc_001F96B8;

loc_001F98F2: ;
    if (CMP_EQ(ecx, 4)) goto loc_001F9900; /* je: equal / zero */

loc_001F98F7: ;
    if (CMP_NE(ecx, 5)) goto loc_001F99E0; /* jne: not equal / not zero */

loc_001F9900: ;
    eax = MEM32(0x849AA4);
    if (CMP_EQ(eax, ebx)) goto loc_001F973F; /* je: equal / zero */

loc_001F990D: ;
    esi = MEM32(eax + 0x10);
    edx = 0; /* xor self */
    eax = esi;
    PUSH32(esp, 0); sub_00036E70(); /* call 0x00036E70 */

loc_001F9919: ;
    xmm1 = MEMF(0x648D14); /* movss */
    PUSH32(esp, ecx);
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(esp) = xmm1; /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x5F82B8);
    SET_LO8(ecx, 0); /* xor self */
    eax = esi;
    PUSH32(esp, 0); sub_00036E30(); /* call 0x00036E30 */

loc_001F993F: ;
    esp = esp + 0x10;
    POP32(esp, esi);
    MEM32(0x849ACC) = 6;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001F994F: ;
    eax = MEM32(0x849AA4);
    if (CMP_NE(eax, ebx)) goto loc_001F9990; /* jne: not equal / not zero */

loc_001F9958: ;
    PUSH32(esp, 0); sub_00207A00(); /* call 0x00207A00 */

loc_001F995D: ;
    edx = MEM32(0x849AA4);
    eax = MEM32(edx + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x5F8238);
    SET_LO8(ecx, 0); /* xor self */
    PUSH32(esp, 0); sub_00036E30(); /* call 0x00036E30 */

loc_001F9979: ;
    esp = esp + 0x10;
    POP32(esp, esi);
    MEM8(0x849AC0) = 1;
    MEM32(0x849ACC) = 7;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001F9990: ;
    eax = MEM32(eax + 0x10);
    goto loc_001F9757;

loc_001F9998: ;
    eax = MEM32(0x849AA4);
    if (CMP_EQ(eax, ebx)) goto loc_001F99D6; /* je: equal / zero */

loc_001F99A1: ;
    esi = MEM32(eax + 0x10);
    edx = 0; /* xor self */
    eax = esi;
    PUSH32(esp, 0); sub_00036E70(); /* call 0x00036E70 */

loc_001F99AD: ;
    xmm1 = MEMF(0x648D14); /* movss */
    PUSH32(esp, ecx);
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(esp) = xmm1; /* movss */

loc_001F99BF: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x40800000);
    eax = esi;
    SET_LO8(ecx, 0); /* xor self */
    PUSH32(esp, 0x5F81F8);
    PUSH32(esp, 0); sub_00036E30(); /* call 0x00036E30 */

loc_001F99D3: ;
    esp = esp + 0x10;

loc_001F99D6: ;
    MEM32(0x849ACC) = 9;

loc_001F99E0: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001F9AF0
 * Original: 0x001F9AF0 - 0x001F9B1E (46 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F9AF0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001F9AF0: ;
    eax = MEM32(0x849AEC);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    if (CMP_EQ(eax, esi)) goto loc_001F9B10; /* je: equal / zero */

loc_001F9AFC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00206780(); /* call 0x00206780 */

loc_001F9B02: ;
    eax = MEM32(0x849AF0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00206780(); /* call 0x00206780 */

loc_001F9B0D: ;
    esp = esp + 8;

loc_001F9B10: ;
    MEM32(0x849AEC) = esi;
    MEM32(0x849AF0) = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001F9B20
 * Original: 0x001F9B20 - 0x001F9CD0 (432 bytes, 114 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F9B20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F9B20: ;
    SET_LO8(eax, MEM8(0x776541));
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp LO8(eax), LO8(ebx) - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_001F9B60; /* je: equal / zero */

loc_001F9B31: ;
    if (TEST_NZ(MEM8(0x876758), 1)) goto loc_001F9B4B; /* jne: not equal / not zero */

loc_001F9B3A: ;
    MEM32(0x876758) = MEM32(0x876758) | 1;
    eax = 0x8761E8;
    PUSH32(esp, 0); sub_00265DE0(); /* call 0x00265DE0 */

loc_001F9B4B: ;
    if (CMP_NE(MEM8(0x8761E8), LO8(ebx))) goto loc_001F9B60; /* jne: not equal / not zero */

loc_001F9B53: ;
    if (CMP_EQ(MEM32(0x876748), 0xFFFFFFFFu)) { sub_001F9CD0(); return; } /* je: equal / zero */

loc_001F9B60: ;
    ecx = MEM32(0x7FA1F8);
    eax = 0x47;
    if (CMP_EQ(ecx, eax)) { sub_001F9CD0(); return; } /* je: equal / zero */

loc_001F9B73: ;
    if (CMP_EQ(MEM32(0x7FA1F4), eax)) { sub_001F9CD0(); return; } /* je: equal / zero */

loc_001F9B7F: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00420B90(); /* call 0x00420B90 */

loc_001F9B86: ;
    edi = 0; /* xor self */
    goto loc_001F9B90;

    /* nop */

loc_001F9B90: ;
    esi = (uint32_t)(int32_t)SMEM8(edi + 0x862CCB);
    if (CMP_L(esi, ebx)) goto loc_001F9BBC; /* jl: less (signed <) */

loc_001F9B9B: ;
    if (CMP_GE(esi, 0x10)) goto loc_001F9BBC; /* jge: greater or equal (signed >=) */

loc_001F9BA0: ;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_001F9BA5: ;
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_001F9BAA: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x2C);
    esi = esi + 0x776280;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEM32(esi + 0x20) = ebx;
    MEM32(esi + 0x18) = eax;

loc_001F9BBC: ;
    edi++;
    if (CMP_L(edi, 2)) goto loc_001F9B90; /* jl: less (signed <) */

loc_001F9BC2: ;
    eax = MEM32(0x863D04);
    esi = 1;
    if (CMP_NE(eax, esi)) goto loc_001F9BD4; /* jne: not equal / not zero */

loc_001F9BD0: ;
    if (CMP_EQ(ebp, ebx)) goto loc_001F9BF3; /* je: equal / zero */

loc_001F9BD4: ;
    (void)0; /* cmp ebp, ebx - flags set for next jcc */
    MEM32(0x776574) = 7;
    MEM32(0x77657C) = 0x1F73C0;
    MEM8(0x6BCFE9) = 8;
    if (CMP_NE(ebp, ebx)) goto loc_001F9C01; /* jne: not equal / not zero */

loc_001F9BF3: ;
    if (CMP_NE(MEM8(0x6BCFEC), 2)) goto loc_001F9C01; /* jne: not equal / not zero */

loc_001F9BFC: ;
    PUSH32(esp, 0); sub_0004DDD0(); /* call 0x0004DDD0 */

loc_001F9C01: ;
    if (CMP_EQ(MEM8(0x863D11), LO8(ebx))) goto loc_001F9C0D; /* je: equal / zero */

loc_001F9C09: ;
    if (CMP_EQ(ebp, ebx)) goto loc_001F9C21; /* je: equal / zero */

loc_001F9C0D: ;
    if (CMP_NE(MEM32(0x863D04), esi)) goto loc_001F9CB2; /* jne: not equal / not zero */

loc_001F9C19: ;
    if (CMP_NE(ebp, ebx)) goto loc_001F9CB2; /* jne: not equal / not zero */

loc_001F9C21: ;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_0025D8F0(); /* call 0x0025D8F0 */

loc_001F9C28: ;
    if (CMP_NE(MEM32(0x863D04), esi)) goto loc_001F9C50; /* jne: not equal / not zero */

loc_001F9C30: ;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_001C74F0(); /* call 0x001C74F0 */

loc_001F9C37: ;
    ecx = eax;
    PUSH32(esp, 0); sub_001C7670(); /* call 0x001C7670 */

loc_001F9C3E: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001F9C50; /* je: equal / zero */

loc_001F9C42: ;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_001C74F0(); /* call 0x001C74F0 */

loc_001F9C49: ;
    MEM32(eax + 0x20) = 0xFFFFFFFFu;

loc_001F9C50: ;
    PUSH32(esp, 0); sub_00296E10(); /* call 0x00296E10 */

loc_001F9C55: ;
    PUSH32(esp, 0); sub_0026AAB0(); /* call 0x0026AAB0 */

loc_001F9C5A: ;
    PUSH32(esp, 0); sub_00235D70(); /* call 0x00235D70 */

loc_001F9C5F: ;
    (void)0; /* cmp ebp, ebx - flags set for next jcc */
    MEM32(0x849874) = ebx;
    if (CMP_NE(ebp, ebx)) goto loc_001F9C70; /* jne: not equal / not zero */

loc_001F9C69: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_0032D1E0(); /* call 0x0032D1E0 */

loc_001F9C70: ;
    eax = MEM32(0x6C0224);
    if (CMP_NE(eax, esi)) goto loc_001F9C83; /* jne: not equal / not zero */

loc_001F9C79: ;
    PUSH32(esp, 0); sub_002A64A0(); /* call 0x002A64A0 */

loc_001F9C7E: ;
    eax = MEM32(0x6C0224);

loc_001F9C83: ;
    if (CMP_EQ(eax, 6)) goto loc_001F9C92; /* je: equal / zero */

loc_001F9C88: ;
    if (CMP_EQ(eax, 7)) goto loc_001F9C92; /* je: equal / zero */

loc_001F9C8D: ;
    if (CMP_NE(eax, 8)) goto loc_001F9C9C; /* jne: not equal / not zero */

loc_001F9C92: ;
    MEM32(0x77657C) = 0x1F7510;

loc_001F9C9C: ;
    eax = MEM32(0x863D04);
    POP32(esp, edi);
    (void)0; /* cmp eax, esi - flags set for next jcc */
    POP32(esp, esi);
    if (CMP_NE(eax, esi)) { sub_001F9CD0(); return; } /* jne: not equal / not zero */

loc_001F9CA7: ;
    if (CMP_NE(ebp, ebx)) { sub_001F9CD0(); return; } /* jne: not equal / not zero */

loc_001F9CAB: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_001F73C0(); return; /* tail jmp 0x001F73C0 */

loc_001F9CB2: ;
    (void)0; /* cmp ebp, ebx - flags set for next jcc */
    MEM8(0x776279) = 4;
    if (CMP_EQ(ebp, ebx)) goto loc_001F9C55; /* je: equal / zero */

loc_001F9CBD: ;
    MEM8(0x849808) = 1;
    MEM32(0x77657C) = 0x2408C0;
    goto loc_001F9C5F;

}

/**
 * sub_001F9CE0
 * Original: 0x001F9CE0 - 0x001F9CFD (29 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F9CE0(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F9CE0: ;
    eax = 0; /* xor self */
    MEM32(0x776568) = eax;
    MEM8(0x77656E) = LO8(eax);
    MEM8(0x77656D) = LO8(eax);
    MEM8(0x849864) = 2;
    g_seh_ebp = ebp; sub_001F9D10(); return; /* tail jmp 0x001F9D10 */

}

/**
 * sub_001F9D10
 * Original: 0x001F9D10 - 0x001F9D9C (140 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F9D10(void)
{
    int _flags = 0; /* fallback flag var */

loc_001F9D10: ;
    SET_LO8(eax, MEM8(0x76EC82));
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp LO8(eax), LO8(ebx) - flags set for next jcc */
    MEM8(0x801A33) = LO8(ebx);
    if (CMP_NE(LO8(eax), LO8(ebx))) goto loc_001F9D6A; /* jne: not equal / not zero */

loc_001F9D22: ;
    eax = MEM32(0x847024);
    if (CMP_EQ(eax, ebx)) goto loc_001F9D34; /* je: equal / zero */

loc_001F9D2B: ;
    eax = MEM32(eax + 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00025720(); /* call 0x00025720 */

loc_001F9D34: ;
    if (CMP_NE(MEM8(0x771130), LO8(ebx))) goto loc_001F9D6A; /* jne: not equal / not zero */

loc_001F9D3C: ;
    MEM16(0x800400) = LO16(ebx);
    MEM32(0x7FA1E8) = 1;
    MEM32(0x7FA1E4) = ebx;
    MEM32(0x7FA1F4) = 0x1D;
    MEM8(0x771B9C) = LO8(ebx);
    MEM8(0x7819D6) = 2;

loc_001F9D6A: ;
    SET_LO8(eax, 5);
    MEM8(0x84980F) = LO8(ebx);
    MEM8(0x776278) = LO8(ebx);
    MEM32(0x776574) = 3;
    MEM8(0x8497F8) = 1;
    MEM8(0x849864) = 2;
    MEM8(0x77625D) = LO8(eax);
    MEM8(0x77625E) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001F9DA0
 * Original: 0x001F9DA0 - 0x001F9E5D (189 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F9DA0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001F9DA0: ;
    eax = MEM32(0x776190);
    esp = esp - 8;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_NE(eax, edi)) goto loc_001F9E14; /* jne: not equal / not zero */

loc_001F9DB0: ;
    eax = MEM32(0x5F71B0);
    SET_LO8(ecx, MEM8(0x5F71B4));
    PUSH32(esp, 0x114);
    MEM32(esp + 0xC) = eax;
    MEM8(esp + 0x10) = LO8(ecx);
    PUSH32(esp, 0); sub_0005EDB0(); /* call 0x0005EDB0 */

loc_001F9DCD: ;
    esi = eax;
    esp = esp + 4;
    if (CMP_EQ(esi, edi)) goto loc_001F9E0E; /* je: equal / zero */

loc_001F9DD6: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x5F71A0);
    eax = esi + 0xC;
    PUSH32(esp, 0x14);
    PUSH32(esp, 0); sub_0005E4E0(); /* call 0x0005E4E0 */

loc_001F9DEA: ;
    esp = esp + 0xC;
    eax = esi;
    MEM32(esi + 0x110) = 0x14;
    MEM32(esi) = edi;
    MEM32(esi + 8) = edi;
    MEM32(esi + 4) = edi;
    PUSH32(esp, 0); sub_00063680(); /* call 0x00063680 */

loc_001F9E06: ;
    MEM32(0x776190) = esi;
    goto loc_001F9E14;

loc_001F9E0E: ;
    MEM32(0x776190) = edi;

loc_001F9E14: ;
    PUSH32(esp, 0); sub_001F9EB0(); /* call 0x001F9EB0 */

loc_001F9E19: ;
    if (TEST_Z(MEM32(0x7761F0), 0x310)) goto loc_001F9E57; /* je: equal / zero */

loc_001F9E25: ;
    ecx = MEM32(0x776190);
    (void)0; /* cmp ecx, edi - flags set for next jcc */
    MEM32(0x776574) = 3;
    MEM32(0x776238) = edi;
    esi = ecx;
    if (CMP_EQ(ecx, edi)) goto loc_001F9E57; /* je: equal / zero */

loc_001F9E41: ;
    PUSH32(esp, 0); sub_000636D0(); /* call 0x000636D0 */

loc_001F9E46: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_001F9E54: ;
    esp = esp + 4;

loc_001F9E57: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_001F9E60
 * Original: 0x001F9E60 - 0x001F9EAA (74 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F9E60(void)
{
    int _flags = 0; /* fallback flag var */

loc_001F9E60: ;
    eax = MEM32(0x8470FC);
    ecx = MEM32(eax + 8);
    eax = MEM32(ecx + 8);
    if (TEST_NZ(eax, eax)) { sub_001F9EAA(); return; } /* jne: not equal / not zero */

loc_001F9E6F: ;
    eax = MEM32(ecx + 0x10);
    (void)0; /* test eax, eax - flags set for next jcc */
    edx = MEM32(ecx + 0x14);
    if (CMP_GE(eax & eax, 0)) goto loc_001F9E7B; /* jge: greater or equal (signed >=) */

loc_001F9E79: ;
    eax = (uint32_t)(-(int32_t)eax);

loc_001F9E7B: ;
    if (CMP_G(eax, 0x14)) { sub_001F9EAA(); return; } /* jg: greater (signed >) */

loc_001F9E80: ;
    if (CMP_GE(edx & edx, 0)) goto loc_001F9E86; /* jge: greater or equal (signed >=) */

loc_001F9E84: ;
    edx = (uint32_t)(-(int32_t)edx);

loc_001F9E86: ;
    if (CMP_G(edx, 0x14)) { sub_001F9EAA(); return; } /* jg: greater (signed >) */

loc_001F9E8B: ;
    eax = MEM32(ecx + 0x18);
    (void)0; /* test eax, eax - flags set for next jcc */
    ecx = MEM32(ecx + 0x1C);
    if (CMP_GE(eax & eax, 0)) goto loc_001F9E97; /* jge: greater or equal (signed >=) */

loc_001F9E95: ;
    eax = (uint32_t)(-(int32_t)eax);

loc_001F9E97: ;
    if (CMP_G(eax, 0x14)) { sub_001F9EAA(); return; } /* jg: greater (signed >) */

loc_001F9E9C: ;
    if (CMP_GE(ecx & ecx, 0)) goto loc_001F9EA2; /* jge: greater or equal (signed >=) */

loc_001F9EA0: ;
    ecx = (uint32_t)(-(int32_t)ecx);

loc_001F9EA2: ;
    if (CMP_G(ecx, 0x14)) { sub_001F9EAA(); return; } /* jg: greater (signed >) */

loc_001F9EA7: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_001F9EB0
 * Original: 0x001F9EB0 - 0x001F9F7C (204 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F9EB0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_001F9EB0: ;
    PUSH32(esp, 0); sub_001F9E60(); /* call 0x001F9E60 */

loc_001F9EB5: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001F9F6E; /* jne: not equal / not zero */

loc_001F9EBD: ;
    PUSH32(esp, 0); sub_0003C1E0(); /* call 0x0003C1E0 */

loc_001F9EC2: ;
    PUSH32(esp, 0); sub_00232D70(); /* call 0x00232D70 */

loc_001F9EC7: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001F9F6E; /* jne: not equal / not zero */

loc_001F9ECF: ;
    xmm0 = MEMF(0x7FA21C); /* movss */
    xmm0 = xmm0 + MEMF(0x8756A8); /* addss */
    /* comiss xmm0, MEMF(0x648EA0) - sets EFLAGS */
    MEMF(0x8756A8) = xmm0; /* movss */
    if ((xmm0 <= MEMF(0x648EA0))) goto loc_001F9F79; /* jbe: below or equal (unsigned <=) */

loc_001F9EF4: ;
    ecx = MEM32(0x847010);
    edx = MEM32(ecx + 0x58);
    xmm1 = MEMF(edx + 4); /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_001F9F13; /* jnp: not parity */

loc_001F9F0E: ;
    MEMF(edx + 4) = xmm0; /* movss */

loc_001F9F13: ;
    MEM8(edx + 9) = 0;
    eax = MEM32(ecx + 0x58);
    SET_LO8(edx, MEM8(eax + 8));
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_001F9F25; /* jne: not equal / not zero */

loc_001F9F21: ;
    MEM8(eax + 8) = 1;

loc_001F9F25: ;
    edx = MEM32(ecx + 0x3C);
    xmm1 = MEMF(edx + 4); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_001F9F3B; /* jnp: not parity */

loc_001F9F36: ;
    MEMF(edx + 4) = xmm0; /* movss */

loc_001F9F3B: ;
    MEM8(edx + 9) = 0;
    ecx = MEM32(ecx + 0x3C);
    SET_LO8(eax, MEM8(ecx + 8));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001F9F4D; /* jne: not equal / not zero */

loc_001F9F49: ;
    MEM8(ecx + 8) = 1;

loc_001F9F4D: ;
    SET_LO8(eax, 0); /* xor self */
    edx = 1;
    MEM32(0x776574) = 0x10;
    MEMF(0x8756A8) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002A78D0(); /* call 0x002A78D0 */

loc_001F9F6B: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_001F9F6E: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(0x8756A8) = xmm0; /* movss */

loc_001F9F79: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_001F9F80
 * Original: 0x001F9F80 - 0x001F9FCB (75 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F9F80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F9F80: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0x5F7188;
    PUSH32(esp, 0x10);
    MEM32(esp + 0x1C) = edi;
    ebp = 0; /* xor self */
    MEM8(esp + 0x17) = 0;
    PUSH32(esp, 0); sub_001F6EA0(); /* call 0x001F6EA0 */

loc_001F9F9E: ;
    esi = eax;
    esp = esp + 4;
    if (CMP_EQ(esi, ebp)) { sub_001F9FCB(); return; } /* je: equal / zero */

loc_001F9FA7: ;
    PUSH32(esp, 0x7F2);
    PUSH32(esp, 0x600444);
    PUSH32(esp, 0); sub_002AF210(); /* call 0x002AF210 */

loc_001F9FB6: ;
    esp = esp + 8;
    MEM32(esi) = eax;
    MEM8(esi + 8) = 0;
    MEM32(esi + 4) = ebp;
    MEM32(esi + 0xC) = 0x100000;
    g_seh_ebp = ebp; sub_001F9FCD(); return; /* tail jmp 0x001F9FCD */

}

/**
 * sub_001FA210
 * Original: 0x001FA210 - 0x001FA30C (252 bytes, 77 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FA210(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FA210: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x5F723C;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_001FA221: ;
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_001FA264; /* je: equal / zero */

loc_001FA227: ;
    PUSH32(esp, 0x84C318);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00470101(); /* call 0x00470101 */

loc_001FA232: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_001FA254; /* je: equal / zero */

loc_001FA239: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x84C318);
    PUSH32(esp, 0x84C6B0);
    PUSH32(esp, 0); sub_0046FCD6(); /* call 0x0046FCD6 */

loc_001FA24A: ;
    esp = esp + 0xC;
    MEM8(0x849930) = 1;

loc_001FA254: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, esi);
    PUSH32(esp, 0x84C318);
    PUSH32(esp, 0); sub_0046FCD6(); /* call 0x0046FCD6 */

loc_001FA261: ;
    esp = esp + 0xC;

loc_001FA264: ;
    SET_LO8(eax, MEM8(0x776BD8));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(esp + 0xC) = 0x5F7178;
    MEM32(esp + 8) = 0x5F7164;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001FA285; /* jne: not equal / not zero */

loc_001FA27D: ;
    MEM32(esp + 8) = 0x5F7154;

loc_001FA285: ;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_001C74F0(); /* call 0x001C74F0 */

loc_001FA28C: ;
    esi = MEM32(eax + 0x20);
    if (TEST_S(esi, esi)) { sub_001FA30C(); return; } /* jl: less (signed <) */

loc_001FA293: ;
    edx = MEM32(eax + 4);
    if (TEST_NZ(edx, edx)) goto loc_001FA29E; /* jne: not equal / not zero */

loc_001FA29A: ;
    eax = 0; /* xor self */
    goto loc_001FA2B4;

loc_001FA29E: ;
    ecx = MEM32(eax + 8);
    ecx = ecx - edx;
    eax = 0x2AAAAAAB;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)((int32_t)edx >> 2);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;

loc_001FA2B4: ;
    if (CMP_AE(esi, eax)) { sub_001FA30C(); return; } /* jae: above or equal (unsigned >=) */

loc_001FA2B8: ;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_001C74F0(); /* call 0x001C74F0 */

loc_001FA2BF: ;
    esi = eax;
    PUSH32(esp, 0); sub_001F7250(); /* call 0x001F7250 */

loc_001FA2C6: ;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_001FA30C(); return; } /* je: equal / zero */

loc_001FA2CA: ;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_001C74F0(); /* call 0x001C74F0 */

loc_001FA2D1: ;
    esi = eax;
    PUSH32(esp, 0); sub_001C75D0(); /* call 0x001C75D0 */

loc_001FA2D8: ;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    eax = 0x5F75D8;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001FA2E6; /* jne: not equal / not zero */

loc_001FA2E1: ;
    eax = 0x5F75B4;

loc_001FA2E6: ;
    MEM32(esp + 8) = eax;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_001C74F0(); /* call 0x001C74F0 */

loc_001FA2F1: ;
    esi = eax;
    PUSH32(esp, 0); sub_001C75D0(); /* call 0x001C75D0 */

loc_001FA2F8: ;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    eax = 0x5F7590;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001FA306; /* jne: not equal / not zero */

loc_001FA301: ;
    eax = 0x5F756C;

loc_001FA306: ;
    MEM32(esp + 0xC) = eax;
    g_seh_ebp = ebp; sub_001FA329(); return; /* tail jmp 0x001FA329 */

}

/**
 * sub_001FA4D0
 * Original: 0x001FA4D0 - 0x001FA7B7 (743 bytes, 199 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FA4D0(void)
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

loc_001FA4D0: ;
    SET_LO8(eax, MEM8(0x75DFBB));
    esp = esp - 0x88;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp LO8(eax), LO8(ebx) - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_001FA545; /* je: equal / zero */

loc_001FA4E4: ;
    eax = MEM32(0x5499E8);
    ecx = MEM32(eax + 0x2C);
    PUSH32(esp, 2);
    PUSH32(esp, ecx);
    MEM8(0x75DFBB) = LO8(ebx);
    PUSH32(esp, 0); sub_0053C190(); /* call 0x0053C190 */

loc_001FA4FA: ;
    edx = ZX8(MEM8(0x776AF0));
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, 0x862A60);
    PUSH32(esp, 0); sub_002524D0(); /* call 0x002524D0 */

loc_001FA50F: ;
    eax = ZX8(MEM8(0x776AF1));
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x862AE0);
    PUSH32(esp, 0); sub_002524D0(); /* call 0x002524D0 */

loc_001FA524: ;
    SET_LO8(eax, MEM8(0x862C5C));
    esp = esp + 0x20;
    (void)0; /* cmp LO8(eax), LO8(ebx) - flags set for next jcc */
    MEM8(0x7FA274) = 1;
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_001FA545; /* je: equal / zero */

loc_001FA537: ;
    if (CMP_EQ(MEM32(0x863D04), 1)) goto loc_001FA545; /* je: equal / zero */

loc_001FA540: ;
    PUSH32(esp, 0); sub_0025B840(); /* call 0x0025B840 */

loc_001FA545: ;
    if (CMP_NE(MEM32(0x849C58), ebx)) goto loc_001FA589; /* jne: not equal / not zero */

loc_001FA54D: ;
    edi = 0x587BE4;
    esi = 0x862B60;
    ecx = 1;
    edx = 0; /* xor self */
    /* repe cmpsb - string compare, ecx iterations */
    if (1 /* strings matched (repe cmpsb) */) goto loc_001FA589; /* je: equal / zero */

loc_001FA562: ;
    eax = MEM32(0x5499E8);
    ecx = MEM32(eax + 0x2C);
    PUSH32(esp, 2);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C190(); /* call 0x0053C190 */

loc_001FA572: ;
    esi = esp + 0x14;
    PUSH32(esp, 0); sub_002437F0(); /* call 0x002437F0 */

loc_001FA57B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002524D0(); /* call 0x002524D0 */

loc_001FA586: ;
    esp = esp + 0x10;

loc_001FA589: ;
    (void)0; /* cmp MEM32(0x849C58), ebx - flags set for next jcc */
    MEM8(esp + 0xF) = LO8(ebx);
    if (CMP_NE(MEM32(0x849C58), ebx)) { sub_001FA7B7(); return; } /* jne: not equal / not zero */

loc_001FA599: ;
    (void)0; /* cmp MEM8(0x8756A2), LO8(ebx) - flags set for next jcc */
    edi = 0xA;
    if (CMP_NE(MEM8(0x8756A2), LO8(ebx))) goto loc_001FA6DA; /* jne: not equal / not zero */

loc_001FA5AA: ;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_001C74F0(); /* call 0x001C74F0 */

loc_001FA5B1: ;
    ecx = eax;
    PUSH32(esp, 0); sub_001C7670(); /* call 0x001C7670 */

loc_001FA5B8: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001FA5D8; /* je: equal / zero */

loc_001FA5BC: ;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_001C74F0(); /* call 0x001C74F0 */

loc_001FA5C3: ;
    esi = eax;
    PUSH32(esp, 0); sub_001F7250(); /* call 0x001F7250 */

loc_001FA5CA: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001FA5D8; /* jne: not equal / not zero */

loc_001FA5CE: ;
    MEM8(esp + 0xF) = 1;
    goto loc_001FA6D3;

loc_001FA5D8: ;
    (void)0; /* cmp MEM32(0x849AA4), ebx - flags set for next jcc */
    MEM8(0x862D90) = 2;
    MEM8(0x7FA274) = 1;
    if (CMP_NE(MEM32(0x849AA4), ebx)) goto loc_001FA5F3; /* jne: not equal / not zero */

loc_001FA5EE: ;
    PUSH32(esp, 0); sub_00207A00(); /* call 0x00207A00 */

loc_001FA5F3: ;
    edx = MEM32(0x849AA4);
    eax = MEM32(edx + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x5F8278);
    SET_LO8(ecx, 0); /* xor self */
    PUSH32(esp, 0); sub_00036E30(); /* call 0x00036E30 */

loc_001FA60F: ;
    eax = MEM32(0x849AA4);
    eax = MEM32(eax + 0x10);
    xmm1 = 0.0f; /* xorps self = zero */
    esp = esp + 0x10;
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00036E90(); /* call 0x00036E90 */

loc_001FA624: ;
    ecx = MEM32(0x847024);
    edx = MEM32(ecx + 0x3C);
    PUSH32(esp, 7);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    eax = 0x117;
    MEM8(0x849AC0) = 1;
    MEM32(0x849ACC) = edi;
    PUSH32(esp, 0); sub_0001FC70(); /* call 0x0001FC70 */

loc_001FA648: ;
    (void)0; /* cmp MEM8(0x7FA23C), LO8(ebx) - flags set for next jcc */
    xmm0 = 0.0f; /* xorps self = zero */
    if (CMP_NE(MEM8(0x7FA23C), LO8(ebx))) goto loc_001FA65B; /* jne: not equal / not zero */

loc_001FA653: ;
    xmm0 = MEMF(0x7F9F48); /* movss */

loc_001FA65B: ;
    ecx = MEM32(0x75E500);
    eax = 8;
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    MEMF(esp + 0x10) = xmm0; /* movss */
    if (CMP_NE(ecx, eax)) goto loc_001FA688; /* jne: not equal / not zero */

loc_001FA670: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648E64)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_001FA6C3; /* ja: above (unsigned >) */

loc_001FA688: ;
    ecx = MEM32(0x847024);
    MEM32(0x75E500) = eax;
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
    ecx = 0xB58;
    MEMF(0x75E504) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_001FA6C3: ;
    if (CMP_NE(MEM32(0x863D04), 3)) goto loc_001FA6D3; /* jne: not equal / not zero */

loc_001FA6CC: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00268780(); /* call 0x00268780 */

loc_001FA6D3: ;
    MEM8(0x8756A2) = 1;

loc_001FA6DA: ;
    PUSH32(esp, 0); sub_0021F8D0(); /* call 0x0021F8D0 */

loc_001FA6DF: ;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_0003C1E0(); /* call 0x0003C1E0 */

loc_001FA6E6: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00232A70(); /* call 0x00232A70 */

loc_001FA6EC: ;
    PUSH32(esp, 0); sub_001FA210(); /* call 0x001FA210 */

loc_001FA6F1: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001FA6FF; /* jne: not equal / not zero */

loc_001FA6F5: ;
    if (CMP_EQ(MEM8(esp + 0xF), LO8(ebx))) { sub_001FA7B7(); return; } /* je: equal / zero */

loc_001FA6FF: ;
    (void)0; /* cmp MEM8(0x7FA23C), LO8(ebx) - flags set for next jcc */
    xmm0 = 0.0f; /* xorps self = zero */
    MEM8(0x75DFBB) = 1;
    MEM8(0x8756A2) = LO8(ebx);
    if (CMP_NE(MEM8(0x7FA23C), LO8(ebx))) goto loc_001FA71F; /* jne: not equal / not zero */

loc_001FA717: ;
    xmm0 = MEMF(0x7F9F48); /* movss */

loc_001FA71F: ;
    (void)0; /* cmp MEM32(0x75E500), edi - flags set for next jcc */
    MEMF(esp + 0x10) = xmm0; /* movss */
    if (CMP_NE(MEM32(0x75E500), edi)) goto loc_001FA745; /* jne: not equal / not zero */

loc_001FA72D: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648E64)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_001FA772; /* ja: above (unsigned >) */

loc_001FA745: ;
    edx = MEM32(0x847024);
    eax = MEM32(edx + 0x44);
    eax = MEM32(eax + 0xC);
    edx = MEM32(edx + 0x40);
    eax = eax + 4;
    eax = MEM32(eax);
    PUSH32(esp, eax);
    ecx = 0xB57;
    MEMF(0x75E504) = xmm0; /* movss */
    MEM32(0x75E500) = edi;
    PUSH32(esp, 0); sub_00024EF0(); /* call 0x00024EF0 */

loc_001FA772: ;
    MEM32(0x84A170) = edi;
    PUSH32(esp, 0); sub_001FC830(); /* call 0x001FC830 */

loc_001FA77D: ;
    PUSH32(esp, 0); sub_0022AB00(); /* call 0x0022AB00 */

loc_001FA782: ;
    (void)0; /* cmp MEM32(0x863D04), 1 - flags set for next jcc */
    MEM8(0x862D90) = LO8(ebx);
    if (CMP_NE(MEM32(0x863D04), 1)) goto loc_001FA797; /* jne: not equal / not zero */

loc_001FA791: ;
    MEM8(0x7FA274) = LO8(ebx);

loc_001FA797: ;
    PUSH32(esp, 0); sub_00252A80(); /* call 0x00252A80 */

loc_001FA79C: ;
    ecx = MEM32(0x5499E8);
    edx = MEM32(ecx + 0x2C);
    PUSH32(esp, 2);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0053C190(); /* call 0x0053C190 */

loc_001FA7AD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x88;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_001FA7D0
 * Original: 0x001FA7D0 - 0x001FA8DA (266 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FA7D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001FA7D0: ;
    if (TEST_NZ(MEM8(0x87C91C), 1)) goto loc_001FA7F9; /* jne: not equal / not zero */

loc_001FA7D9: ;
    edx = MEM32(0x87C91C);
    eax = (int32_t)MEMF(0x7F9F5C); /* cvttss2si */
    edx = edx | 1;
    eax = eax << 2;
    MEM32(0x87C91C) = edx;
    MEM16(0x87C918) = LO16(eax);

loc_001FA7F9: ;
    SET_LO8(eax, MEM8(0x84980F));
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    if (CMP_NE(LO8(eax), LO8(ebx))) goto loc_001FA87A; /* jne: not equal / not zero */

loc_001FA805: ;
    if (CMP_NE(MEM8(0x75A168), LO8(ebx))) goto loc_001FA87A; /* jne: not equal / not zero */

loc_001FA80D: ;
    PUSH32(esp, 0); sub_001FE420(); /* call 0x001FE420 */

loc_001FA812: ;
    eax = MEM32(0x84B118);
    if (CMP_EQ(eax, ebx)) goto loc_001FA822; /* je: equal / zero */

loc_001FA81B: ;
    MEM8(eax + 0x2B8) = 1;

loc_001FA822: ;
    MEM32(0x84B118) = ebx;
    PUSH32(esp, 0); sub_0034FB30(); /* call 0x0034FB30 */

loc_001FA82D: ;
    PUSH32(esp, 0); sub_0034FB60(); /* call 0x0034FB60 */

loc_001FA832: ;
    ebx = eax;
    PUSH32(esp, 0); sub_00353400(); /* call 0x00353400 */

loc_001FA839: ;
    ecx = MEM32(0x84B11C);
    edx = MEM32(ecx);
    MEM8(0x84980F) = 1;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_001FA84B: ;
    if (CMP_NE(eax, 2)) goto loc_001FA868; /* jne: not equal / not zero */

loc_001FA850: ;
    ecx = MEM32(0x84B11C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_001FA85D: ;
    ecx = MEM32(0x84B11C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_001FA868: ;
    if (TEST_Z(eax, eax)) goto loc_001FA878; /* je: equal / zero */

loc_001FA86C: ;
    if (CMP_EQ(eax, 2)) goto loc_001FA878; /* je: equal / zero */

loc_001FA871: ;
    MEM8(0x8498B6) = 1;

loc_001FA878: ;
    ebx = 0; /* xor self */

loc_001FA87A: ;
    if (CMP_EQ(MEM32(0x776574), 2)) goto loc_001FA8A7; /* je: equal / zero */

loc_001FA883: ;
    SET_LO8(eax, MEM8(0x6BCFE8));
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_001FA8A7; /* je: equal / zero */

loc_001FA88C: ;
    ecx = ZX8(MEM8(0x6BCFE9));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(0x776214));
    eax = ZX8(LO8(eax));
    eax = eax - ecx;
    if (((int32_t)eax < 0)) eax = ebx; /* cmovs */
    MEM8(0x6BCFE8) = LO8(eax);

loc_001FA8A7: ;
    if (CMP_EQ(MEM8(0x8497F8), LO8(ebx))) { sub_001FA8DA(); return; } /* je: equal / zero */

loc_001FA8AF: ;
    eax = MEM32(0x7FA1F8);
    edx = MEM32(0x8470DC);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 8);
    PUSH32(esp, eax);
    MEM32(edx + 0xC0) = 0x80000;
    PUSH32(esp, 0); sub_0004EC10(); /* call 0x0004EC10 */

loc_001FA8CF: ;
    esp = esp + 0x14;
    MEM8(0x8497F8) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001FADD0
 * Original: 0x001FADD0 - 0x001FAE28 (88 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FADD0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FADD0: ;
    eax--;
    if (CMP_A(eax, 5)) goto loc_001FADE6; /* ja: above (unsigned >) */

loc_001FADD6: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x1FAE28); /* switch: 6 entries, 2 targets */
    if (_jt == 0x001FADDDu) goto loc_001FADDD;
    if (_jt == 0x001FADE6u) goto loc_001FADE6;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001FADDD: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0020C730(); /* call 0x0020C730 */

loc_001FADE3: ;
    esp = esp + 4;

loc_001FADE6: ;
    if (TEST_Z(esi, esi)) goto loc_001FAE27; /* je: equal / zero */

loc_001FADEA: ;
    PUSH32(esp, 0x84C318);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00470101(); /* call 0x00470101 */

loc_001FADF5: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_001FAE17; /* je: equal / zero */

loc_001FADFC: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x84C318);
    PUSH32(esp, 0x84C6B0);
    PUSH32(esp, 0); sub_0046FCD6(); /* call 0x0046FCD6 */

loc_001FAE0D: ;
    esp = esp + 0xC;
    MEM8(0x849930) = 1;

loc_001FAE17: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, esi);
    PUSH32(esp, 0x84C318);
    PUSH32(esp, 0); sub_0046FCD6(); /* call 0x0046FCD6 */

loc_001FAE24: ;
    esp = esp + 0xC;

loc_001FAE27: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001FAE70
 * Original: 0x001FAE70 - 0x001FAED3 (99 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FAE70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FAE70: ;
    PUSH32(esp, ecx);
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x59B3A8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    ebp = ecx + -1;
    (void)0; /* cmp ebp, edi - flags set for next jcc */
    MEM32(esp + 0x10) = edi;
    if (CMP_LE(ebp, edi)) goto loc_001FAECA; /* jle: less or equal (signed <=) */

loc_001FAE89: ;
    esi = MEM32(eax * 4 + 0x74CD44);
    eax = MEM32(0x84B290);
    esi = esi + 2;

loc_001FAE98: ;
    edx = ZX16(MEM16(esi));
    ecx = edx;
    ecx = ecx & 7;
    ebx = 1;
    ebx = ebx << LO8(ecx);
    edx = edx >> 3;
    SET_LO8(ecx, MEM8(edx + eax));
    if (TEST_Z(LO8(ecx), LO8(ebx))) goto loc_001FAEC2; /* je: equal / zero */

loc_001FAEB1: ;
    edx = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x10);
    if (CMP_EQ(edx, ecx)) { sub_001FAED3(); return; } /* je: equal / zero */

loc_001FAEBD: ;
    ecx++;
    MEM32(esp + 0x10) = ecx;

loc_001FAEC2: ;
    edi++;
    esi = esi + 4;
    if (CMP_L(edi, ebp)) goto loc_001FAE98; /* jl: less (signed <) */

loc_001FAECA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001FAEE0
 * Original: 0x001FAEE0 - 0x001FAF68 (136 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FAEE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FAEE0: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 9;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    PUSH32(esp, edi);
    ecx = 1;
    if (CMP_LE(edx & edx, 0)) goto loc_001FAF03; /* jle: less or equal (signed <=) */

loc_001FAEF5: ;
    esi = (uint32_t)(int32_t)SMEM8(eax + 0x59B3A8);
    ecx = ecx + esi;
    eax++;
    if (CMP_L(eax, edx)) goto loc_001FAEF5; /* jl: less (signed <) */

loc_001FAF03: ;
    esi = (uint32_t)(int32_t)SMEM8(edx + 0x59B3A8);
    eax = 0; /* xor self */
    edi = 0; /* xor self */
    esi--;
    if (CMP_LE(esi & esi, 0)) goto loc_001FAF65; /* jle: less or equal (signed <=) */

loc_001FAF13: ;
    esi = MEM32(0x849828);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = esi + ecx * 4;
    edi = edi;

loc_001FAF20: ;
    ecx = MEM32(edx * 4 + 0x74CD44);
    esi = ZX16(MEM16(ecx + edi * 4 + 2));
    ecx = esi;
    ecx = ecx & 7;
    ebx = 1;
    ebx = ebx << LO8(ecx);
    ecx = MEM32(0x84B290);
    esi = esi >> 3;
    SET_LO8(ecx, MEM8(esi + ecx));
    if (TEST_Z(LO8(ecx), LO8(ebx))) goto loc_001FAF53; /* je: equal / zero */

loc_001FAF48: ;
    ecx = MEM32(ebp);
    esi = MEM32(esp + 0x14);
    MEM32(esi + eax * 4) = ecx;
    eax++;

loc_001FAF53: ;
    ecx = (uint32_t)(int32_t)SMEM8(edx + 0x59B3A8);
    edi++;
    ebp = ebp + 4;
    ecx--;
    if (CMP_L(edi, ecx)) goto loc_001FAF20; /* jl: less (signed <) */

loc_001FAF63: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_001FAF65: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001FAF70
 * Original: 0x001FAF70 - 0x001FAF9A (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FAF70(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FAF70: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x8470FC);
    ecx = MEM32(eax + 8);
    SET_LO8(eax, MEM8(0x8498B2));
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(0x75DFBA));
    PUSH32(esp, esi);
    esi = MEM32(ecx + 8);
    SET_LO8(ecx, MEM8(0x77655E));
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    esi = esi & 0x8000;
    g_seh_ebp = ebp; sub_001FAFA0(); return; /* tail jmp 0x001FAFA0 */

}

/**
 * sub_001FB250
 * Original: 0x001FB250 - 0x001FB265 (21 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB250(void)
{

loc_001FB250: ;
    ecx = MEM32(0x84B11C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_001FB25D: ;
    MEM8(0x8498B5) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_001FB270
 * Original: 0x001FB270 - 0x001FB349 (217 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB270(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FB270: ;
    SET_LO8(eax, MEM8(0x75DFB9));
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = 0; /* xor self */
    (void)0; /* cmp LO8(eax), LO8(ebx) - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_001FB2BA; /* je: equal / zero */

loc_001FB282: ;
    ecx = MEM32(0x84B120);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x10), _icall_esp); /* indirect call */
    }

loc_001FB28D: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_001FB294: ;
    (void)0; /* cmp eax, 0x19 - flags set for next jcc */
    SET_LO8(eax, (CMP_B(eax, 0x19)) ? 1 : 0); /* setb */
    MEM8(0x8498B4) = LO8(eax);
    (void)0; /* cmp MEM8(0x8498B6), LO8(ebx) - flags set for next jcc */
    MEM8(0x75DFB9) = LO8(ebx);
    if (CMP_EQ(MEM8(0x8498B6), LO8(ebx))) goto loc_001FB2BA; /* je: equal / zero */

loc_001FB2AD: ;
    MEM8(0x8498B6) = LO8(ebx);
    MEM8(0x8498B5) = 1;

loc_001FB2BA: ;
    if (CMP_EQ(MEM8(0x8498B4), LO8(ebx))) { sub_001FB349(); return; } /* je: equal / zero */

loc_001FB2C6: ;
    if (TEST_Z(MEM8(0x776238), 0x10)) goto loc_001FB32D; /* je: equal / zero */

loc_001FB2CF: ;
    eax = MEM32(0x84B11C);
    if (CMP_EQ(MEM32(eax + 0xC), 3)) goto loc_001FB2E6; /* je: equal / zero */

loc_001FB2DA: ;
    edi = 0x1F;
    PUSH32(esp, 0); sub_00205130(); /* call 0x00205130 */

loc_001FB2E4: ;
    goto loc_001FB2F4;

loc_001FB2E6: ;
    edi = 0x20;
    PUSH32(esp, 0); sub_00205130(); /* call 0x00205130 */

loc_001FB2F0: ;
    if (CMP_EQ(eax, ebx)) goto loc_001FB2F9; /* je: equal / zero */

loc_001FB2F4: ;
    if (CMP_NE(eax, 1)) goto loc_001FB323; /* jne: not equal / not zero */

loc_001FB2F9: ;
    ecx = MEM32(0x84B120);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x10), _icall_esp); /* indirect call */
    }

loc_001FB304: ;
    edx = MEM32(eax);
    ecx = eax;
    esi = eax + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_001FB30E: ;
    (void)0; /* cmp eax, 0x19 - flags set for next jcc */
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    edx = edx & 0x19;
    PUSH32(esp, ebx);
    eax = esi;
    PUSH32(esp, 0); sub_002A3B90(); /* call 0x002A3B90 */

loc_001FB31E: ;
    esp = esp + 4;
    goto loc_001FB327;

loc_001FB323: ;
    if (CMP_NE(eax, ebx)) goto loc_001FB32D; /* jne: not equal / not zero */

loc_001FB327: ;
    MEM8(0x8498B4) = LO8(ebx);

loc_001FB32D: ;
    MEM32(0x776240) = ebx;
    MEM32(0x77623C) = ebx;
    MEM32(0x776238) = ebx;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_001FB430
 * Original: 0x001FB430 - 0x001FB455 (37 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB430(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FB430: ;
    eax = (uint32_t)(int32_t)SMEM8(0x77625E);
    esp = esp - 8;
    eax = eax - 3;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = 0;
    if (((int32_t)eax < 0)) { sub_001FB455(); return; } /* js: sign (negative) */

loc_001FB447: ;
    if (CMP_G(eax, 2)) { sub_001FB455(); return; } /* jg: greater (signed >) */

loc_001FB44C: ;
    esi = MEM32(eax * 4 + 0x84B120);
    g_seh_ebp = ebp; sub_001FB457(); return; /* tail jmp 0x001FB457 */

}

/**
 * sub_001FB700
 * Original: 0x001FB700 - 0x001FB726 (38 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB700(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FB700: ;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, ebx);
    ebx = ecx;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_001FB726(); return; } /* je: equal / zero */

loc_001FB707: ;
    MEM32(0x84B118) = ebx;
    PUSH32(esp, 0); sub_00353400(); /* call 0x00353400 */

loc_001FB712: ;
    MEM8(ebx + 0x2B8) = 0;
    PUSH32(esp, 0); sub_0042B72A(); /* call 0x0042B72A */

loc_001FB71E: ;
    MEM32(ebx + 0x2BC) = eax;
    g_seh_ebp = ebp; sub_001FB740(); return; /* tail jmp 0x001FB740 */

}

/**
 * sub_001FB760
 * Original: 0x001FB760 - 0x001FB77F (31 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB760(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FB760: ;
    esp = esp - 8;
    SET_LO8(eax, MEM8(0x849813));
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = ebp;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_001FB77F(); return; } /* je: equal / zero */

loc_001FB776: ;
    esi = (uint32_t)(int32_t)SMEM16(0x849810);
    g_seh_ebp = ebp; sub_001FB7B9(); return; /* tail jmp 0x001FB7B9 */

}

/**
 * sub_001FB910
 * Original: 0x001FB910 - 0x001FB9E3 (211 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB910(void)
{
    int _flags = 0; /* fallback flag var */

loc_001FB910: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x7F9EEC);
    (void)0; /* test HI8(eax), 2 - flags set for next jcc */
    MEM8(0x74A4D8) = 3;
    if (TEST_Z(HI8(eax), 2)) goto loc_001FB929; /* je: equal / zero */

loc_001FB922: ;
    MEM8(0x74A4D8) = 0x33;

loc_001FB929: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_0032D1E0(); /* call 0x0032D1E0 */

loc_001FB932: ;
    eax = ZX8(MEM8(0x84B250));
    esi = (uint32_t)(int32_t)SMEM8(0x84B248);
    ebx = 0; /* xor self */
    MEM32(esp + 8) = eax;
    (void)0; /* cmp MEM8(0x76EC82), LO8(ebx) - flags set for next jcc */
    MEM8(0x6BCFEB) = 1;
    MEM8(0x6BCFEC) = 1;
    MEM8(0x6BCFED) = 1;
    MEM16(0x849818) = LO16(ebx);
    MEM8(0x7819D4) = 1;
    MEM8(0x801325) = LO8(ebx);
    MEM32(0x776574) = ebx;
    MEM8(0x801A33) = LO8(ebx);
    if (CMP_NE(MEM8(0x76EC82), LO8(ebx))) goto loc_001FB9CB; /* jne: not equal / not zero */

loc_001FB983: ;
    eax = MEM32(0x847024);
    if (CMP_EQ(eax, ebx)) goto loc_001FB995; /* je: equal / zero */

loc_001FB98C: ;
    ecx = MEM32(eax + 0x40);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00025720(); /* call 0x00025720 */

loc_001FB995: ;
    if (CMP_NE(MEM8(0x771130), LO8(ebx))) goto loc_001FB9CB; /* jne: not equal / not zero */

loc_001FB99D: ;
    SET_LO8(edx, MEM8(esp + 8));
    MEM16(0x800400) = LO16(ebx);
    MEM32(0x7FA1E8) = 1;
    MEM32(0x7FA1E4) = ebx;
    MEM32(0x7FA1F4) = esi;
    MEM8(0x771B9C) = LO8(edx);
    MEM8(0x7819D6) = 2;

loc_001FB9CB: ;
    POP32(esp, esi);
    MEM32(0x849874) = ebx;
    MEM8(0x77656C) = 1;
    MEM8(0x776566) = 1;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001FB9F0
 * Original: 0x001FB9F0 - 0x001FBA63 (115 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB9F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001FB9F0: ;
    eax = MEM32(0x7761F0);
    if (TEST_Z(HI8(eax), 0x40)) goto loc_001FBA62; /* je: equal / zero */

loc_001FB9FA: ;
    ecx = 0; /* xor self */
    MEM32(0x776574) = 4;
    PUSH32(esp, 0); sub_000FB970(); /* call 0x000FB970 */

loc_001FBA0B: ;
    if (CMP_EQ(eax, 0xFF)) goto loc_001FBA62; /* je: equal / zero */

loc_001FBA12: ;
    edx = MEM32(0x771C50);
    ecx = 1;
    eax = 0; /* xor self */
    if (CMP_NE(edx, ecx)) goto loc_001FBA39; /* jne: not equal / not zero */

loc_001FBA23: ;
    edx = MEM32(0x771C60);
    if (CMP_LE(edx, MEM32(0x771C5C))) goto loc_001FBA39; /* jle: less or equal (signed <=) */

loc_001FBA31: ;
    if (CMP_EQ(MEM8(0x771C64), LO8(eax))) goto loc_001FBA62; /* je: equal / zero */

loc_001FBA39: ;
    MEM32(0x771C50) = ecx;
    MEM32(0x771C54) = eax;
    MEM8(0x771C58) = LO8(eax);
    MEM8(0x771C59) = LO8(eax);
    MEM8(0x771C5A) = LO8(eax);
    MEM32(0x771C5C) = 0x14;
    MEM32(0x771C60) = eax;

loc_001FBA62: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001FBA70
 * Original: 0x001FBA70 - 0x001FBB50 (224 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FBA70(void)
{
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_001FBA70: ;
    PUSH32(esp, ecx);
    SET_LO8(eax, MEM8(0x7819D5));
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM16(0x849820) = LO16(ebx);
    MEM32(0x776574) = 3;
    MEM8(0x84980F) = LO8(ebx);
    MEM8(0x8497F8) = LO8(ebx);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & 0x29;
    eax = eax + 0x1D;
    esi = eax;
    (void)0; /* cmp MEM8(0x76EC82), LO8(ebx) - flags set for next jcc */
    MEM8(0x801A33) = LO8(ebx);
    if (CMP_NE(MEM8(0x76EC82), LO8(ebx))) goto loc_001FBAF6; /* jne: not equal / not zero */

loc_001FBAB2: ;
    eax = MEM32(0x847024);
    if (CMP_EQ(eax, ebx)) goto loc_001FBAC4; /* je: equal / zero */

loc_001FBABB: ;
    ecx = MEM32(eax + 0x40);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00025720(); /* call 0x00025720 */

loc_001FBAC4: ;
    if (CMP_NE(MEM8(0x771130), LO8(ebx))) goto loc_001FBAF6; /* jne: not equal / not zero */

loc_001FBACC: ;
    MEM16(0x800400) = LO16(ebx);
    MEM32(0x7FA1E8) = 1;
    MEM32(0x7FA1E4) = ebx;
    MEM32(0x7FA1F4) = esi;
    MEM8(0x771B9C) = LO8(ebx);
    MEM8(0x7819D6) = 2;

loc_001FBAF6: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_0032D1E0(); /* call 0x0032D1E0 */

loc_001FBAFD: ;
    eax = MEM32(0x849830);
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    edi = eax;
    if (CMP_EQ(eax, ebx)) goto loc_001FBB45; /* je: equal / zero */

loc_001FBB08: ;
    if (CMP_NE(MEM32(0x849C44), eax)) goto loc_001FBB16; /* jne: not equal / not zero */

loc_001FBB10: ;
    MEM32(0x849C44) = ebx;

loc_001FBB16: ;
    esi = MEM32(eax);
    if (CMP_EQ(esi, ebx)) goto loc_001FBB34; /* je: equal / zero */

loc_001FBB1C: ;
    eax = esi;
    PUSH32(esp, 0); sub_0024EA70(); /* call 0x0024EA70 */

loc_001FBB23: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    MEM32(esp + 0x10) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_001FBB31: ;
    esp = esp + 4;

loc_001FBB34: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    MEM32(esp + 0x10) = edi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_001FBB42: ;
    esp = esp + 4;

loc_001FBB45: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(0x849830) = ebx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001FBB50
 * Original: 0x001FBB50 - 0x001FBC07 (183 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FBB50(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_001FBB50: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xA0;
    eax = MEM32(0x849830);
    if (TEST_Z(eax, eax)) goto loc_001FBC03; /* je: equal / zero */

loc_001FBB69: ;
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0024EC50(); /* call 0x0024EC50 */

loc_001FBB73: ;
    ecx = MEM32(esp + 0x40);
    edx = MEM32(esp + 0x44);
    eax = MEM32(esp + 0x48);
    xmm0 = MEMF(0x648E6C); /* movss */
    MEM32(esp + 8) = ecx;
    ecx = esp + 8;
    MEM32(esp + 0xC) = edx;
    edx = ecx;
    MEM32(esp + 0x10) = eax;
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x1C) = edx;
    xmm0 = MEMF(esp + 0x14); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x18);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x1C);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0x6C;
    PUSH32(esp, 0); sub_004288F5(); /* call 0x004288F5 */

loc_001FBBE4: ;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    edx = ecx;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_001FBBF2: ;
    ecx = MEM32(0x849830);
    PUSH32(esp, 1);
    eax = edx;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0024EBB0(); /* call 0x0024EBB0 */

loc_001FBC03: ;
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001FBC10
 * Original: 0x001FBC10 - 0x001FBD7E (366 bytes, 109 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FBC10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FBC10: ;
    eax = MEM32(0x776574);
    esp = esp - 0x190;
    if (CMP_EQ(eax, 2)) goto loc_001FBC45; /* je: equal / zero */

loc_001FBC20: ;
    SET_LO8(eax, MEM8(0x6BCFE8));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001FBC45; /* je: equal / zero */

loc_001FBC29: ;
    ecx = ZX8(MEM8(0x6BCFE9));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(0x776214));
    eax = ZX8(LO8(eax));
    eax = eax - ecx;
    if (((int32_t)eax >= 0)) goto loc_001FBC40; /* jns: not sign (positive) */

loc_001FBC3E: ;
    eax = 0; /* xor self */

loc_001FBC40: ;
    MEM8(0x6BCFE8) = LO8(eax);

loc_001FBC45: ;
    SET_LO8(ecx, MEM8(0x7FA275));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    SET_LO8(eax, 0xFF);
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_001FBC74; /* jne: not equal / not zero */

loc_001FBC51: ;
    SET_LO8(ecx, MEM8(0x76F0E0));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_001FBC83; /* jne: not equal / not zero */

loc_001FBC5B: ;
    edx = MEM32(0x847024);
    MEM8(edx + 0x85) = 1;
    MEM8(0x7FA274) = 1;
    MEM8(0x6BCFE8) = LO8(eax);

loc_001FBC74: ;
    SET_LO8(ecx, MEM8(0x76F0E0));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_001FBC83; /* jne: not equal / not zero */

loc_001FBC7E: ;
    MEM8(0x6BCFE8) = LO8(eax);

loc_001FBC83: ;
    eax = MEM32(0x849830);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_NZ(eax, eax)) goto loc_001FBD34; /* jne: not equal / not zero */

loc_001FBC91: ;
    PUSH32(esp, esi);
    esi = esp + 8;
    PUSH32(esp, 0); sub_0016D660(); /* call 0x0016D660 */

loc_001FBC9B: ;
    eax = MEM32(0x84A19C);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM8(esp + 0x1C) = 1;
    if (TEST_NZ(eax, eax)) goto loc_001FBCAE; /* jne: not equal / not zero */

loc_001FBCA9: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_001FBCAE: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (TEST_Z(esi, esi)) goto loc_001FBCF6; /* je: equal / zero */

loc_001FBCD4: ;
    if (CMP_B(MEM32(esi + 0x80), 4)) goto loc_001FBCF6; /* jb: below (unsigned <) */

loc_001FBCDD: ;
    ecx = 4;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_001FBCE7: ;
    PUSH32(esp, 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_001FBCEF: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_001FBD17; /* jne: not equal / not zero */

loc_001FBCF6: ;
    esi = MEM32(0x84A184);
    ecx = 4;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_001FBD08: ;
    PUSH32(esp, 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_001FBD10: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_001FBD24; /* je: equal / zero */

loc_001FBD17: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0024E9C0(); /* call 0x0024E9C0 */

loc_001FBD22: ;
    goto loc_001FBD26;

loc_001FBD24: ;
    eax = 0; /* xor self */

loc_001FBD26: ;
    edx = MEM32(eax);
    PUSH32(esp, edx);
    MEM32(0x849830) = eax;
    PUSH32(esp, 0); sub_0024D2E0(); /* call 0x0024D2E0 */

loc_001FBD33: ;
    POP32(esp, esi);

loc_001FBD34: ;
    eax = MEM32(0x8470FC);
    SET_LO8(edx, MEM8(eax + 1));
    ecx = 0; /* xor self */
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_001FBD53; /* je: equal / zero */

loc_001FBD42: ;
    eax = MEM32(eax + 4);
    if (TEST_Z(eax, eax)) goto loc_001FBD53; /* je: equal / zero */

loc_001FBD49: ;
    if (CMP_NE(MEM8(eax), 0)) goto loc_001FBD53; /* jne: not equal / not zero */

loc_001FBD4E: ;
    ecx = 1;

loc_001FBD53: ;
    eax = MEM32(0x847100);
    SET_LO8(edx, MEM8(eax + 1));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_001FBD6E; /* je: equal / zero */

loc_001FBD5F: ;
    eax = MEM32(eax + 4);
    if (TEST_Z(eax, eax)) goto loc_001FBD6E; /* je: equal / zero */

loc_001FBD66: ;
    if (CMP_NE(MEM8(eax), 0)) goto loc_001FBD6E; /* jne: not equal / not zero */

loc_001FBD6B: ;
    ecx = ecx | 2;

loc_001FBD6E: ;
    if (TEST_Z(ecx, ecx)) { sub_001FBD7E(); return; } /* je: equal / zero */

loc_001FBD72: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_001FC080(); /* call 0x001FC080 */

loc_001FBD79: ;
    esp = esp + 4;
    g_seh_ebp = ebp; sub_001FBD91(); return; /* tail jmp 0x001FBD91 */

}

/**
 * sub_001FBDF0
 * Original: 0x001FBDF0 - 0x001FBE01 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FBDF0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001FBDF0: ;
    SET_LO8(eax, MEM8(0x6BCFE8));
    if (CMP_AE(LO8(eax), 1)) { sub_001FBE01(); return; } /* jae: above or equal (unsigned >=) */

loc_001FBDF9: ;
    SET_LO8(eax, LO8(eax) + 1);
    MEM8(0x6BCFE8) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_001FBE30
 * Original: 0x001FBE30 - 0x001FBE9E (110 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FBE30(void)
{
    float xmm0;

loc_001FBE30: ;
    xmm0 = 0.0f; /* xorps self = zero */
    eax = 0; /* xor self */
    MEMF(0x776218) = xmm0; /* movss */
    MEMF(0x77621C) = xmm0; /* movss */
    MEM8(0x77625D) = LO8(eax);
    MEM32(0x776238) = eax;
    MEM8(0x776278) = LO8(eax);
    MEM8(0x776279) = LO8(eax);
    MEM8(0x77627B) = LO8(eax);
    MEM8(0x77627E) = LO8(eax);
    MEM8(0x77627F) = LO8(eax);
    MEMF(0x776228) = xmm0; /* movss */
    MEM8(0x77625C) = LO8(eax);
    MEMF(0x77622C) = xmm0; /* movss */
    MEMF(0x776230) = xmm0; /* movss */
    MEMF(0x776234) = xmm0; /* movss */
    MEMF(0x776224) = xmm0; /* movss */
    MEMF(0x776220) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_001FBEA0
 * Original: 0x001FBEA0 - 0x001FBEE3 (67 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FBEA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FBEA0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00258010(); /* call 0x00258010 */

loc_001FBEA8: ;
    PUSH32(esp, 0); sub_00319750(); /* call 0x00319750 */

loc_001FBEAD: ;
    PUSH32(esp, 0); sub_001FEF80(); /* call 0x001FEF80 */

loc_001FBEB2: ;
    PUSH32(esp, 0); sub_001FCA30(); /* call 0x001FCA30 */

loc_001FBEB7: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0); sub_00043830(); /* call 0x00043830 */

loc_001FBEBE: ;
    esi = eax;
    ebx = 0; /* xor self */
    esp = esp + 4;
    if (CMP_EQ(esi, ebx)) { sub_001FBEE3(); return; } /* je: equal / zero */

loc_001FBEC9: ;
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = 0x5F70BC;
    PUSH32(esp, 0); sub_001F5020(); /* call 0x001F5020 */

loc_001FBED8: ;
    esp = esp + 8;
    MEM32(0x849804) = esi;
    g_seh_ebp = ebp; sub_001FBEE9(); return; /* tail jmp 0x001FBEE9 */

}

/**
 * sub_001FC080
 * Original: 0x001FC080 - 0x001FC387 (775 bytes, 243 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FC080(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FC080: ;
    SET_LO8(eax, MEM8(0x7819D5));
    esp = esp - 8;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001FC0B4; /* jne: not equal / not zero */

loc_001FC090: ;
    eax = MEM32(0x7FA1F8);
    if (CMP_EQ(eax, 0x46)) goto loc_001FC0B4; /* je: equal / zero */

loc_001FC09A: ;
    if (CMP_EQ(eax, 0x1D)) goto loc_001FC0B4; /* je: equal / zero */

loc_001FC09F: ;
    SET_LO8(eax, MEM8(0x862D08));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001FC0B4; /* jne: not equal / not zero */

loc_001FC0A8: ;
    SET_LO8(eax, MEM8(esp + 0x1C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001FC37F; /* je: equal / zero */

loc_001FC0B4: ;
    if (TEST_NZ(MEM8(0x87BFDC), 1)) goto loc_001FC0CE; /* jne: not equal / not zero */

loc_001FC0BD: ;
    MEM32(0x87BFDC) = MEM32(0x87BFDC) | 1;
    MEM32(0x87BFD8) = 0;

loc_001FC0CE: ;
    esi = MEM32(0x8470FC);
    SET_LO8(eax, MEM8(esi + 1));
    ebx = 0; /* xor self */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001FC0EE; /* je: equal / zero */

loc_001FC0DD: ;
    eax = MEM32(esi + 4);
    if (TEST_Z(eax, eax)) goto loc_001FC0EE; /* je: equal / zero */

loc_001FC0E4: ;
    if (CMP_NE(MEM8(eax), 0)) goto loc_001FC0EE; /* jne: not equal / not zero */

loc_001FC0E9: ;
    ebx = 1;

loc_001FC0EE: ;
    ecx = MEM32(0x847100);
    SET_LO8(eax, MEM8(ecx + 1));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001FC10A; /* je: equal / zero */

loc_001FC0FB: ;
    eax = MEM32(ecx + 4);
    if (TEST_Z(eax, eax)) goto loc_001FC10A; /* je: equal / zero */

loc_001FC102: ;
    if (CMP_NE(MEM8(eax), 0)) goto loc_001FC10A; /* jne: not equal / not zero */

loc_001FC107: ;
    ebx = ebx | 2;

loc_001FC10A: ;
    edx = MEM32(0x87BFD8);
    edx = edx | ebx;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    MEM32(0x87BFD8) = edx;
    if (TEST_Z(ebx, ebx)) goto loc_001FC1FA; /* je: equal / zero */

loc_001FC120: ;
    eax = MEM32(0x875690);
    if (TEST_NZ(eax, eax)) goto loc_001FC13E; /* jne: not equal / not zero */

loc_001FC129: ;
    if (TEST_Z(LO8(ebx), 1)) goto loc_001FC13E; /* je: equal / zero */

loc_001FC12E: ;
    PUSH32(esp, 0); sub_0004E440(); /* call 0x0004E440 */

loc_001FC133: ;
    ecx = MEM32(0x847100);
    MEM32(0x875690) = eax;

loc_001FC13E: ;
    eax = MEM32(0x875694);
    if (TEST_NZ(eax, eax)) goto loc_001FC15A; /* jne: not equal / not zero */

loc_001FC147: ;
    ebx = ebx >> 1;
    if (TEST_Z(LO8(ebx), 1)) goto loc_001FC15A; /* je: equal / zero */

loc_001FC14E: ;
    esi = ecx;
    PUSH32(esp, 0); sub_0004E440(); /* call 0x0004E440 */

loc_001FC155: ;
    MEM32(0x875694) = eax;

loc_001FC15A: ;
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0); sub_001FFB50(); /* call 0x001FFB50 */

loc_001FC161: ;
    esp = esp + 4;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    if (TEST_Z(eax, eax)) goto loc_001FC1AC; /* je: equal / zero */

loc_001FC16C: ;
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x5F7088;
    ebp = 0; /* xor self */
    esi = 0; /* xor self */
    ebx = 0; /* xor self */
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_001FC17E: ;
    PUSH32(esp, eax);
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x5F7054;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_001FC18B: ;
    esp = esp - 8;
    ecx = esp;
    edi = eax;
    eax = ecx;
    PUSH32(esp, 0); sub_00060900(); /* call 0x00060900 */

loc_001FC199: ;
    ecx = esi;
    esi = MEM32(esp + 0x1C);
    eax = ebp;
    edx = ebx;
    PUSH32(esp, 0); sub_002307B0(); /* call 0x002307B0 */

loc_001FC1A8: ;
    edi = eax;
    goto loc_001FC1AE;

loc_001FC1AC: ;
    edi = 0; /* xor self */

loc_001FC1AE: ;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_0003C1E0(); /* call 0x0003C1E0 */

loc_001FC1B5: ;
    ebx = eax;
    eax = MEM32(ebx + 0x10);
    esi = MEM32(eax + 0x58);
    ecx = MEM32(esi + 0x38);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM8(esi + 0x31) = 0;
    if (TEST_Z(ecx, ecx)) goto loc_001FC1CF; /* je: equal / zero */

loc_001FC1C8: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_001FC1CF: ;
    MEM32(esi + 0x38) = edi;
    eax = MEM32(ebx + 0x10);
    ecx = MEM32(eax + 0x58);
    (void)0; /* cmp MEM32(0x849C60), 2 - flags set for next jcc */
    MEM8(ecx + 0x30) = 1;
    MEM8(0x8498B8) = 1;
    if (CMP_NE(MEM32(0x849C60), 2)) goto loc_001FC207; /* jne: not equal / not zero */

loc_001FC1EC: ;
    SET_LO8(eax, MEM8(0x779B94));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001FC207; /* jne: not equal / not zero */

loc_001FC1F5: ;
    PUSH32(esp, 0); sub_00252A80(); /* call 0x00252A80 */

loc_001FC1FA: ;
    SET_LO8(eax, MEM8(0x8498B8));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001FC37F; /* je: equal / zero */

loc_001FC207: ;
    ebp = 0; /* xor self */
    ebx = 0x10;
    edi = edi;

loc_001FC210: ;
    edx = MEM32(0x87BFD8);
    edi = 1;
    ecx = ebp;
    edi = edi << LO8(ecx);
    if (TEST_Z(edx, edi)) goto loc_001FC2AE; /* je: equal / zero */

loc_001FC227: ;
    eax = MEM32(ebp * 4 + 0x875690);
    (void)0; /* test eax, eax - flags set for next jcc */
    ecx = MEM32(ebp * 4 + 0x8470FC);
    if (CMP_LE(eax & eax, 0)) goto loc_001FC247; /* jle: less or equal (signed <=) */

loc_001FC239: ;
    if (CMP_NE(MEM32(ecx + 0xC), eax)) goto loc_001FC247; /* jne: not equal / not zero */

loc_001FC23E: ;
    ecx = MEM32(ecx + 4);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    esi = ecx;
    if (TEST_NZ(ecx, ecx)) goto loc_001FC24C; /* jne: not equal / not zero */

loc_001FC247: ;
    esi = 0x75A0B4;

loc_001FC24C: ;
    if (TEST_Z(MEM8(esi + 8), LO8(ebx))) goto loc_001FC2AE; /* je: equal / zero */

loc_001FC251: ;
    if (CMP_EQ(MEM8(esi), 0)) goto loc_001FC26C; /* je: equal / zero */

loc_001FC256: ;
    eax = ZX8(MEM8(esi + 2));
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_003D2460(); /* call 0x003D2460 */

loc_001FC262: ;
    esp = esp + 8;
    eax = esi;
    PUSH32(esp, 0); sub_0004E0D0(); /* call 0x0004E0D0 */

loc_001FC26C: ;
    ecx = MEM32(ebp * 4 + 0x8470FC);
    edx = MEM32(ecx + 4);
    (void)0; /* test edx, edx - flags set for next jcc */
    eax = MEM32(ebp * 4 + 0x875690);
    if (TEST_Z(edx, edx)) goto loc_001FC295; /* je: equal / zero */

loc_001FC281: ;
    if (CMP_LE(eax & eax, 0)) goto loc_001FC295; /* jle: less or equal (signed <=) */

loc_001FC285: ;
    edx = MEM32(ecx + 0xC);
    if (CMP_NE(edx, eax)) goto loc_001FC295; /* jne: not equal / not zero */

loc_001FC28C: ;
    edx--;
    MEM32(ecx + 0xC) = edx;
    PUSH32(esp, 0); sub_0004E310(); /* call 0x0004E310 */

loc_001FC295: ;
    eax = MEM32(0x87BFD8);
    edi = ~edi;
    eax = eax & edi;
    MEM32(ebp * 4 + 0x875690) = 0;
    MEM32(0x87BFD8) = eax;

loc_001FC2AE: ;
    ebp++;
    if (CMP_L(ebp, 2)) goto loc_001FC210; /* jl: less (signed <) */

loc_001FC2B8: ;
    eax = MEM32(0x875690);
    if (TEST_NZ(eax, eax)) goto loc_001FC2D1; /* jne: not equal / not zero */

loc_001FC2C1: ;
    eax = MEM32(0x875694);
    if (TEST_NZ(eax, eax)) goto loc_001FC2D1; /* jne: not equal / not zero */

loc_001FC2CA: ;
    MEM8(0x8498B8) = 0;

loc_001FC2D1: ;
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0); sub_001FFB50(); /* call 0x001FFB50 */

loc_001FC2D8: ;
    esi = eax;
    esp = esp + 4;
    if (TEST_Z(esi, esi)) goto loc_001FC34F; /* je: equal / zero */

loc_001FC2E1: ;
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x5F7054;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_001FC2ED: ;
    edi = eax;
    eax = esp + 0x10;
    PUSH32(esp, 0); sub_00060900(); /* call 0x00060900 */

loc_001FC2F8: ;
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x5F7088;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_001FC304: ;
    edi = MEM32(esp + 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEM32(esi + 4) = 0;
    PUSH32(esp, edi);
    ebx = eax;
    MEM32(esi) = 0x5F9D20;
    PUSH32(esp, 0); sub_002272E0(); /* call 0x002272E0 */

loc_001FC323: ;
    MEM32(esi + 8) = eax;
    eax = 0; /* xor self */
    esp = esp + 0x10;
    (void)0; /* cmp edi, eax - flags set for next jcc */
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x18) = eax;
    if (CMP_EQ(edi, eax)) goto loc_001FC351; /* je: equal / zero */

loc_001FC338: ;
    eax = MEM32(esp + 0x14);
    MEM32(eax) = MEM32(eax) - 1;
    if ((MEM32(eax) != 0)) goto loc_001FC351; /* jne: not equal / not zero */

loc_001FC340: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_001FC34A: ;
    esp = esp + 4;
    goto loc_001FC351;

loc_001FC34F: ;
    esi = 0; /* xor self */

loc_001FC351: ;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_0003C1E0(); /* call 0x0003C1E0 */

loc_001FC358: ;
    ebx = eax;
    ecx = MEM32(ebx + 0x10);
    edi = MEM32(ecx + 0x58);
    ecx = MEM32(edi + 0x38);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM8(edi + 0x31) = 0;
    if (TEST_Z(ecx, ecx)) goto loc_001FC372; /* je: equal / zero */

loc_001FC36B: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_001FC372: ;
    MEM32(edi + 0x38) = esi;
    eax = MEM32(ebx + 0x10);
    ecx = MEM32(eax + 0x58);
    MEM8(ecx + 0x30) = 1;

loc_001FC37F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_001FC390
 * Original: 0x001FC390 - 0x001FC3BC (44 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FC390(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FC390: ;
    esp = esp - 0xC;
    eax = MEM32(0x7FA20C);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(0x776574);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 1;
    (void)0; /* cmp eax, edi - flags set for next jcc */
    MEM32(esp + 0x14) = ebp;
    MEM32(0x776214) = eax;
    if (CMP_GE(eax, edi)) { sub_001FC3BC(); return; } /* jge: greater or equal (signed >=) */

loc_001FC3B4: ;
    MEM32(0x776214) = edi;
    g_seh_ebp = ebp; sub_001FC3CB(); return; /* tail jmp 0x001FC3CB */

}

/**
 * sub_001FC780
 * Original: 0x001FC780 - 0x001FC829 (169 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FC780(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_001FC780: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    if (CMP_GE(esi, 2)) goto loc_001FC7D6; /* jge: greater or equal (signed >=) */

loc_001FC788: ;
    eax = MEM32(esi * 4 + 0x8470FC);
    eax = MEM32(eax + 8);
    if (TEST_Z(eax, eax)) goto loc_001FC806; /* je: equal / zero */

loc_001FC796: ;
    if (TEST_Z(MEM8(eax + 8), 0x20)) goto loc_001FC806; /* je: equal / zero */

loc_001FC79C: ;
    SET_LO8(eax, MEM8(0x863AF9));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001FC806; /* jne: not equal / not zero */

loc_001FC7A5: ;
    SET_LO8(eax, MEM8(0x862D08));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001FC7DD; /* je: equal / zero */

loc_001FC7AE: ;
    edx = SX8(LO8(eax));
    ecx = esi + 1;
    if (CMP_NE(edx, ecx)) goto loc_001FC806; /* jne: not equal / not zero */

loc_001FC7B8: ;
    PUSH32(esp, 0); sub_0026AAB0(); /* call 0x0026AAB0 */

loc_001FC7BD: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001FC806; /* je: equal / zero */

loc_001FC7C1: ;
    SET_LO8(eax, MEM8(0x7819D5));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001FC806; /* jne: not equal / not zero */

loc_001FC7CA: ;
    SET_LO8(eax, MEM8(0x77A488));
    MEM8(0x7FA274) = LO8(eax);
    goto loc_001FC806;

loc_001FC7D6: ;
    eax = 0x75A0B4;
    goto loc_001FC796;

loc_001FC7DD: ;
    xmm0 = 0.0f; /* xorps self = zero */
    /* comiss xmm0, MEMF(0x776148) - sets EFLAGS */
    if ((xmm0 < MEMF(0x776148))) goto loc_001FC806; /* jb: below (unsigned <) */

loc_001FC7E9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0026AB20(); /* call 0x0026AB20 */

loc_001FC7EF: ;
    esp = esp + 4;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001FC806; /* je: equal / zero */

loc_001FC7F6: ;
    SET_LO8(eax, MEM8(0x7819D5));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001FC806; /* jne: not equal / not zero */

loc_001FC7FF: ;
    MEM8(0x7FA274) = 1;

loc_001FC806: ;
    esi++;
    if (CMP_L(esi, 2)) goto loc_001FC788; /* jl: less (signed <) */

loc_001FC810: ;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_0003C1E0(); /* call 0x0003C1E0 */

loc_001FC817: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00232A70(); /* call 0x00232A70 */

loc_001FC81D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_0026AE10(); /* call 0x0026AE10 */

loc_001FC824: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001FC830
 * Original: 0x001FC830 - 0x001FC993 (355 bytes, 94 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FC830(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FC830: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    eax = 0; /* xor self */
    MEM32(0x776568) = ebx;
    PUSH32(esp, 0); sub_0032D1E0(); /* call 0x0032D1E0 */

loc_001FC840: ;
    if (CMP_EQ(MEM8(0x7819D5), LO8(ebx))) { sub_001FC993(); return; } /* je: equal / zero */

loc_001FC84C: ;
    (void)0; /* cmp MEM8(0x863D11), LO8(ebx) - flags set for next jcc */
    MEM8(0x6BCFE8) = 0xFF;
    MEM32(0x776574) = 7;
    MEM8(0x6BCFE9) = 8;
    if (CMP_EQ(MEM8(0x863D11), LO8(ebx))) goto loc_001FC889; /* je: equal / zero */

loc_001FC86C: ;
    if (CMP_EQ(MEM32(0x863D04), 2)) goto loc_001FC87E; /* je: equal / zero */

loc_001FC875: ;
    MEM8(0x849E94) = 1;
    goto loc_001FC889;

loc_001FC87E: ;
    MEM8(0x849E8D) = LO8(ebx);
    PUSH32(esp, 0); sub_00423D30(); /* call 0x00423D30 */

loc_001FC889: ;
    (void)0; /* cmp MEM8(0x863D11), LO8(ebx) - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM8(0x86E982) = LO8(ebx);
    if (CMP_EQ(MEM8(0x863D11), LO8(ebx))) goto loc_001FC97B; /* je: equal / zero */

loc_001FC89D: ;
    if (CMP_NE(MEM8(0x862C5C), LO8(ebx))) goto loc_001FC96E; /* jne: not equal / not zero */

loc_001FC8A9: ;
    if (CMP_NE(MEM32(0x84A19C), ebx)) goto loc_001FC8B6; /* jne: not equal / not zero */

loc_001FC8B1: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_001FC8B6: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (CMP_EQ(esi, ebx)) goto loc_001FC8FE; /* je: equal / zero */

loc_001FC8DC: ;
    if (CMP_B(MEM32(esi + 0x80), 0x38)) goto loc_001FC8FE; /* jb: below (unsigned <) */

loc_001FC8E5: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_001FC8EF: ;
    PUSH32(esp, 0x38);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_001FC8F7: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_001FC91F; /* jne: not equal / not zero */

loc_001FC8FE: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_001FC910: ;
    PUSH32(esp, 0x38);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_001FC918: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) goto loc_001FC92A; /* je: equal / zero */

loc_001FC91F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_001F70F0(); /* call 0x001F70F0 */

loc_001FC926: ;
    esi = eax;
    goto loc_001FC92C;

loc_001FC92A: ;
    esi = 0; /* xor self */

loc_001FC92C: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3E8);
    PUSH32(esp, 0); sub_004168D0(); /* call 0x004168D0 */

loc_001FC938: ;
    eax = 0x862C40;
    PUSH32(esp, 0); sub_00296340(); /* call 0x00296340 */

loc_001FC942: ;
    if (TEST_Z(eax, eax)) goto loc_001FC960; /* je: equal / zero */

loc_001FC946: ;
    edi = MEM32(esi);
    eax = 0x862C40;
    PUSH32(esp, 0); sub_00296340(); /* call 0x00296340 */

loc_001FC952: ;
    eax = MEM32(eax + 0x9DC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edi + 4), _icall_esp); /* indirect call */
    }

loc_001FC95E: ;
    goto loc_001FC97B;

loc_001FC960: ;
    if (CMP_EQ(esi, ebx)) goto loc_001FC97B; /* je: equal / zero */

loc_001FC964: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_001FC96C: ;
    goto loc_001FC97B;

loc_001FC96E: ;
    MEM8(0x86E982) = LO8(ebx);
    MEM8(0x862E58) = 1;

loc_001FC97B: ;
    MEM16(0x84981C) = MEM16(0x84981C) & 0xE35F;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(0x862CA2) = 1;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_001F73C0(); return; /* tail jmp 0x001F73C0 */

}

/**
 * sub_001FCA00
 * Original: 0x001FCA00 - 0x001FCA2A (42 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FCA00(void)
{
    int _flags = 0; /* fallback flag var */

loc_001FCA00: ;
    if (TEST_S(eax, eax)) { sub_001FCA2A(); return; } /* jl: less (signed <) */

loc_001FCA04: ;
    if (CMP_GE(eax, 0x10)) { sub_001FCA2A(); return; } /* jge: greater or equal (signed >=) */

loc_001FCA09: ;
    SET_LO8(ecx, MEM8(0x7819D5));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_001FCA22; /* jne: not equal / not zero */

loc_001FCA13: ;
    if (TEST_NZ(eax, eax)) goto loc_001FCA18; /* jne: not equal / not zero */

loc_001FCA17: ;
    esp += 4; return; /* ret */

loc_001FCA18: ;
    ecx = MEM32(0x776574);
    if (TEST_Z(ecx, ecx)) { sub_001FCA2A(); return; } /* je: equal / zero */

loc_001FCA22: ;
    eax = MEM32(eax * 4 + 0x7761A0);
    esp += 4; return; /* ret */

}

/**
 * sub_001FCA30
 * Original: 0x001FCA30 - 0x001FCA87 (87 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FCA30(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FCA30: ;
    esp = esp - 0x270;
    eax = MEM32(0x84A14C);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x5D4FB4);
    PUSH32(esp, eax);
    ebx = 0; /* xor self */
    PUSH32(esp, 0x13);
    eax = esp + 0x138;
    MEM32(esp + 0x10) = ebx;
    PUSH32(esp, 0); sub_0005E4E0(); /* call 0x0005E4E0 */

loc_001FCA56: ;
    esp = esp + 0xC;
    eax = esp + 0x120;
    MEM32(esp + 0x230) = 0x13;
    MEM32(esp + 0x120) = ebx;
    MEM32(esp + 0x128) = ebx;
    MEM32(esp + 0x124) = ebx;
    PUSH32(esp, 0); sub_00063680(); /* call 0x00063680 */

loc_001FCA85: ;
    g_seh_ebp = ebp; sub_001FCA90(); return; /* tail jmp 0x001FCA90 */

}

/**
 * sub_001FD0F0
 * Original: 0x001FD0F0 - 0x001FD22F (319 bytes, 72 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FD0F0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_001FD0F0: ;
    esp = esp - 0xF8;
    edx = MEM32(0x8470DC);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x770);
    ecx = MEM32(0x7FA1F8);
    eax = eax + edx;
    PUSH32(esp, ebx);
    ebx = eax;
    eax = 0; /* xor self */
    (void)0; /* cmp ecx, 0x1D - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = ebx;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x20) = eax;
    if (CMP_EQ(ecx, 0x1D)) { sub_001FD22F(); return; } /* je: equal / zero */

loc_001FD126: ;
    xmm0 = MEMF(0x648FB0); /* movss */
    xmm1 = MEMF(0x648E38); /* movss */
    MEMF(ebx + 0x2E0) = xmm1; /* movss */
    MEMF(ebx + 0x330) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(ebx + 0x2DC) = xmm0; /* movss */
    MEMF(ebx + 0x2E4) = xmm0; /* movss */
    eax = ebx + 0x2DC;
    ecx = ebx + 0x2F4;
    edx = eax;
    edi = MEM32(edx);
    esi = ecx;
    MEM32(esi) = edi;
    edi = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(esi + 4) = edi;
    MEM32(esi + 8) = edx;
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(eax + 4) = edx;
    edx = MEM32(ebx + 4);
    MEM32(eax + 8) = ecx;
    MEMF(ebx + 0x334) = xmm1; /* movss */
    xmm1 = MEMF(0x64908C); /* movss */
    MEMF(ebx + 0x338) = xmm0; /* movss */
    MEMF(ebx + 0x3C0) = xmm0; /* movss */
    MEMF(edx + 0xAC) = xmm1; /* movss */
    eax = MEM32(ebx + 4);
    xmm1 = MEMF(eax + 0xFC); /* movss */
    xmm1 = xmm1 * MEMF(0x648F38); /* mulss */
    MEMF(eax + 0xD4) = xmm1; /* movss */
    eax = eax + 0xA0;
    eax = MEM32(ebx + 4);
    ecx = MEM32(eax + 0xAC);
    eax = eax + 0xA0;
    MEMF(eax + 0x10) = xmm0; /* movss */
    MEM32(eax + 8) = ecx;
    edx = MEM32(eax + 0x34);
    MEMF(eax + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(0x59D944); /* movss */
    MEM32(eax + 0x30) = edx;
    ecx = MEM32(eax + 8);
    edx = MEM32(eax + 0x30);
    MEM32(eax + 0x54) = ecx;
    MEM32(eax + 0x58) = edx;
    eax = MEM32(0x84A5F8);
    ecx = MEM32(eax + 0x468);
    POP32(esp, edi);
    ecx = ecx | 0x200;
    POP32(esp, esi);
    MEM32(eax + 0x468) = ecx;
    MEMF(eax + 0x7C) = xmm0; /* movss */
    POP32(esp, ebx);
    esp = esp + 0xF8;
    esp += 4; return; /* ret */

}

/**
 * sub_001FE420
 * Original: 0x001FE420 - 0x001FE4A9 (137 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FE420(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_001FE420: ;
    xmm0 = MEMF(0x648E68); /* movss */
    /* comiss xmm0, MEMF(0x776220) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x776220))) goto loc_001FE43A; /* jbe: below or equal (unsigned <=) */

loc_001FE431: ;
    SET_LO8(eax, MEM8(0x776278));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001FE4A8; /* je: equal / zero */

loc_001FE43A: ;
    PUSH32(esp, ebx);
    ebx = MEM32(0x8471B8);
    PUSH32(esp, esi);
    esi = MEM32(0x76FD10);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    goto loc_001FE450;

    /* nop */

loc_001FE450: ;
    eax = (uint32_t)(int32_t)SMEM8(0x77625E);
    SET_LO8(edx, MEM8(eax + edi + 0x6BD0C0));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_001FE49D; /* je: equal / zero */

loc_001FE462: ;
    eax = 0; /* xor self */
    if (CMP_LE(esi & esi, 0)) goto loc_001FE49D; /* jle: less or equal (signed <=) */

loc_001FE468: ;
    ecx = ebx + 0xC6;
    edi = edi;

loc_001FE470: ;
    if (CMP_EQ(MEM8(ecx), LO8(edx))) goto loc_001FE481; /* je: equal / zero */

loc_001FE474: ;
    eax++;
    ecx = ecx + 0x150;
    if (CMP_L(eax, esi)) goto loc_001FE470; /* jl: less (signed <) */

loc_001FE47F: ;
    goto loc_001FE49D;

loc_001FE481: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x150);
    eax = eax + ebx;
    if (TEST_Z(eax, eax)) goto loc_001FE49D; /* je: equal / zero */

loc_001FE48D: ;
    MEM32(eax + 0xDC) = 2;
    ebx = MEM32(0x8471B8);

loc_001FE49D: ;
    edi = edi + 6;
    if (CMP_L(edi, 0xC)) goto loc_001FE450; /* jl: less (signed <) */

loc_001FE4A5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_001FE4A8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001FE4B0
 * Original: 0x001FE4B0 - 0x001FE6DE (558 bytes, 141 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FE4B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FE4B0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    eax = MEM32(ebx * 4 + 0x7761E0);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    (void)0; /* cmp eax, ebp - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(eax, ebp)) goto loc_001FE5B2; /* je: equal / zero */

loc_001FE4CA: ;
    eax = MEM32(eax + 0x568);
    if (CMP_EQ(eax, ebp)) goto loc_001FE59E; /* je: equal / zero */

loc_001FE4D8: ;
    if (CMP_EQ(MEM32(eax + 0x200), ebp)) goto loc_001FE59E; /* je: equal / zero */

loc_001FE4E4: ;
    eax = MEM32(0x8498BC);
    if (CMP_NE(eax, ebp)) goto loc_001FE57F; /* jne: not equal / not zero */

loc_001FE4F1: ;
    if (CMP_NE(MEM32(0x84A19C), ebp)) goto loc_001FE4FE; /* jne: not equal / not zero */

loc_001FE4F9: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_001FE4FE: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, ebp - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (CMP_EQ(esi, ebp)) goto loc_001FE54C; /* je: equal / zero */

loc_001FE524: ;
    if (CMP_B(MEM32(esi + 0x80), 0x360)) goto loc_001FE54C; /* jb: below (unsigned <) */

loc_001FE530: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_001FE53A: ;
    PUSH32(esp, 0x360);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_001FE545: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebp)) goto loc_001FE574; /* jne: not equal / not zero */

loc_001FE54C: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_001FE55E: ;
    PUSH32(esp, 0x360);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_001FE569: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebp)) { sub_001FE6DE(); return; } /* je: equal / zero */

loc_001FE574: ;
    MEM32(eax + 0xB8) = ebp;
    MEM32(0x8498BC) = eax;

loc_001FE57F: ;
    ecx = MEM32(ebx * 4 + 0x7761E0);
    edx = MEM32(ecx + 0x568);
    ecx = MEM32(edx + 0x200);
    PUSH32(esp, ecx);
    ebx = eax;
    PUSH32(esp, 0); sub_0008E990(); /* call 0x0008E990 */

loc_001FE59A: ;
    ebx = MEM32(esp + 0x18);

loc_001FE59E: ;
    edx = MEM32(ebx * 4 + 0x7761E0);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_002F50C0(); /* call 0x002F50C0 */

loc_001FE5AF: ;
    esp = esp + 0xC;

loc_001FE5B2: ;
    SET_LO8(edx, LO8(ebx));
    SET_LO8(edx, LO8(edx) + 0x10);
    PUSH32(esp, 0); sub_002B3F20(); /* call 0x002B3F20 */

loc_001FE5BC: ;
    ebp = MEM32(esp + 0x1C);
    ecx = MEM32(0x84A1AC);
    esi = MEM32(esp + 0x18);
    ebx = eax;
    edi = ebx;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x54);
    ebp = ebp << 6;
    eax = MEM32(ebp + 0x777F00);
    MEM32(esp + 0x10) = eax;
    eax = ebp + 0x777ED0;
    PUSH32(esp, 0xD);
    edi = edi + ecx;
    PUSH32(esp, 0); sub_0032CF50(); /* call 0x0032CF50 */

loc_001FE5ED: ;
    SET_LO8(ecx, MEM8(0x77625E));
    esp = esp + 4;
    (void)0; /* cmp LO8(ecx), 7 - flags set for next jcc */
    eax = esi;
    if (CMP_NE(LO8(ecx), 7)) goto loc_001FE5FE; /* jne: not equal / not zero */

loc_001FE5FD: ;
    eax++;

loc_001FE5FE: ;
    ecx = MEM32(esp + 0x10);
    MEM32(edi + 0x10) = ecx;
    edx = eax + eax * 4;
    eax = 0; /* xor self */
    edx = edx << 1;
    (void)0; /* cmp ecx, 0x53 - flags set for next jcc */
    SET_LO8(ecx, (CMP_NE(ecx, 0x53)) ? 1 : 0); /* setne */
    SET_LO8(ecx, LO8(ecx) - 1);
    SET_LO8(ecx, LO8(ecx) & 0x16);
    SET_LO8(ecx, LO8(ecx) + 0xE);
    MEM8(edi + 0x1B) = LO8(ecx);
    PUSH32(esp, eax);
    MEM32(edi + 0xC) = 0x45;
    MEM16(edi + 0x14) = LO16(edx);
    MEM16(edi + 0x16) = LO16(eax);
    MEM16(edi + 0x18) = LO16(eax);
    MEM8(edi + 0x1A) = LO8(eax);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x24);
    ecx = ebx;
    ebx = 0x1FE6F0;
    PUSH32(esp, 0); sub_002B2280(); /* call 0x002B2280 */

loc_001FE645: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_001FE6D8; /* je: equal / zero */

loc_001FE650: ;
    edx = MEM32(0x84A5F8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    ecx = MEM32(esp + 0x18);
    xmm1 = MEMF(0x648F78); /* movss */
    eax = eax + edx + -1744;
    MEM32(ecx * 4 + 0x7761E0) = eax;
    edx = 3;
    MEM16(eax + 0x540) = MEM16(eax + 0x540) | LO16(edx);
    MEM16(eax + 0x3AE) = LO16(edx);
    (void)0; /* cmp MEM32(esp + 0x10), 0x3B - flags set for next jcc */
    MEM8(eax + 0xA1) = 9;
    xmm0 = MEMF(ebp + 0x777EEC); /* movss */
    MEMF(eax + 0x264) = xmm0; /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    MEMF(eax + 0x260) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x264); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    MEMF(eax + 0x264) = xmm0; /* movss */
    MEM16(eax + 0x174) = 0xC000;
    if (CMP_NE(MEM32(esp + 0x10), 0x3B)) goto loc_001FE6D8; /* jne: not equal / not zero */

loc_001FE6D0: ;
    SET_LO8(ecx, LO8(ecx) + 1);
    MEM8(eax + 0x139) = LO8(ecx);

loc_001FE6D8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001FE810
 * Original: 0x001FE810 - 0x001FE86D (93 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FE810(void)
{
    int _flags = 0; /* fallback flag var */

loc_001FE810: ;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = MEM32(0x8755F8);
    if (TEST_Z(edi, edi)) goto loc_001FE85B; /* je: equal / zero */

loc_001FE81C: ;
    PUSH32(esp, esi);
    esi = edi + 0xC;
    PUSH32(esp, 0); sub_00232F10(); /* call 0x00232F10 */

loc_001FE825: ;
    PUSH32(esp, 0); sub_00068410(); /* call 0x00068410 */

loc_001FE82A: ;
    eax = MEM32(edi + 4);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 8) = eax;
    POP32(esp, esi);
    if (TEST_Z(eax, eax)) goto loc_001FE843; /* je: equal / zero */

loc_001FE836: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_001FE840: ;
    esp = esp + 4;

loc_001FE843: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    MEM32(edi + 4) = 0;
    MEM32(esp + 8) = edi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_001FE858: ;
    esp = esp + 4;

loc_001FE85B: ;
    MEM32(0x8755F8) = 0;
    PUSH32(esp, 0); sub_001FF1D0(); /* call 0x001FF1D0 */

loc_001FE86A: ;
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001FE870
 * Original: 0x001FE870 - 0x001FE921 (177 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FE870(void)
{
    int _flags = 0; /* fallback flag var */

loc_001FE870: ;
    eax = MEM32(0x7FA1F8);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    if (CMP_NE(eax, 0x1D)) goto loc_001FE88D; /* jne: not equal / not zero */

loc_001FE87D: ;
    PUSH32(esp, 0); sub_001FF9C0(); /* call 0x001FF9C0 */

loc_001FE882: ;
    eax = MEM32(0x7FA1F8);
    MEM8(0x8497F9) = LO8(ebx);

loc_001FE88D: ;
    if (CMP_EQ(eax, 0x46)) goto loc_001FE8C8; /* je: equal / zero */

loc_001FE892: ;
    if (CMP_EQ(eax, 0x1D)) goto loc_001FE8C8; /* je: equal / zero */

loc_001FE897: ;
    if (CMP_NE(MEM8(0x7819D5), LO8(ebx))) goto loc_001FE8C8; /* jne: not equal / not zero */

loc_001FE89F: ;
    if (CMP_NE(MEM32(0x771C50), ebx)) goto loc_001FE8BC; /* jne: not equal / not zero */

loc_001FE8A7: ;
    eax = MEM32(0x771C60);
    if (CMP_LE(eax, MEM32(0x771C5C))) goto loc_001FE8BC; /* jle: less or equal (signed <=) */

loc_001FE8B4: ;
    if (CMP_EQ(MEM8(0x771C64), LO8(ebx))) goto loc_001FE914; /* je: equal / zero */

loc_001FE8BC: ;
    MEM32(0x771C5C) = 0x14;
    goto loc_001FE8F0;

loc_001FE8C8: ;
    if (CMP_NE(MEM32(0x771C50), ebx)) goto loc_001FE8E6; /* jne: not equal / not zero */

loc_001FE8D0: ;
    ecx = MEM32(0x771C60);
    if (CMP_LE(ecx, MEM32(0x771C5C))) goto loc_001FE8E6; /* jle: less or equal (signed <=) */

loc_001FE8DE: ;
    if (CMP_EQ(MEM8(0x771C64), LO8(ebx))) goto loc_001FE914; /* je: equal / zero */

loc_001FE8E6: ;
    MEM32(0x771C5C) = 0x28;

loc_001FE8F0: ;
    MEM32(0x771C50) = ebx;
    MEM32(0x771C54) = ebx;
    MEM8(0x771C58) = LO8(ebx);
    MEM8(0x771C59) = LO8(ebx);
    MEM8(0x771C5A) = LO8(ebx);
    MEM32(0x771C60) = ebx;

loc_001FE914: ;
    PUSH32(esp, 0); sub_001FF130(); /* call 0x001FF130 */

loc_001FE919: ;
    MEM32(0x849858) = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001FE930
 * Original: 0x001FE930 - 0x001FE93E (14 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FE930(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FE930: ;
    SET_LO8(eax, MEM8(0x7655E8));
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_001FE93E(); return; } /* je: equal / zero */

loc_001FE939: ;
    g_seh_ebp = ebp; sub_001FE980(); return; /* tail jmp 0x001FE980 */

}

/**
 * sub_001FE980
 * Original: 0x001FE980 - 0x001FE9E7 (103 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FE980(void)
{
    int _flags = 0; /* fallback flag var */

loc_001FE980: ;
    if (CMP_EQ(MEM32(0x776574), 2)) goto loc_001FE9AE; /* je: equal / zero */

loc_001FE989: ;
    SET_LO8(eax, MEM8(0x6BCFE8));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001FE9AE; /* je: equal / zero */

loc_001FE992: ;
    ecx = ZX8(MEM8(0x6BCFE9));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(0x776214));
    eax = ZX8(LO8(eax));
    eax = eax - ecx;
    if (((int32_t)eax >= 0)) goto loc_001FE9A9; /* jns: not sign (positive) */

loc_001FE9A7: ;
    eax = 0; /* xor self */

loc_001FE9A9: ;
    MEM8(0x6BCFE8) = LO8(eax);

loc_001FE9AE: ;
    PUSH32(esp, 0); sub_001FFDD0(); /* call 0x001FFDD0 */

loc_001FE9B3: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001FE9E6; /* jne: not equal / not zero */

loc_001FE9B7: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 6);
    PUSH32(esp, 0x1D);
    MEM32(0x776574) = 9;
    MEM32(0x776568) = 0;
    MEM16(0x849820) = 0xFF;
    PUSH32(esp, 0); sub_0004EC10(); /* call 0x0004EC10 */

loc_001FE9E3: ;
    esp = esp + 0x14;

loc_001FE9E6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001FE9F0
 * Original: 0x001FE9F0 - 0x001FEB12 (290 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FE9F0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_001FE9F0: ;
    eax = MEM32(0x776574);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    if (CMP_EQ(eax, 2)) goto loc_001FEA21; /* je: equal / zero */

loc_001FE9FD: ;
    SET_LO8(eax, MEM8(0x6BCFE8));
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_001FEA21; /* je: equal / zero */

loc_001FEA06: ;
    ecx = ZX8(MEM8(0x6BCFE9));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(0x776214));
    eax = ZX8(LO8(eax));
    eax = eax - ecx;
    if (((int32_t)eax < 0)) eax = ebx; /* cmovs */
    MEM8(0x6BCFE8) = LO8(eax);

loc_001FEA21: ;
    PUSH32(esp, 0); sub_000FBA20(); /* call 0x000FBA20 */

loc_001FEA26: ;
    if (TEST_NZ(eax, eax)) goto loc_001FEA30; /* jne: not equal / not zero */

loc_001FEA2A: ;
    MEM32(0x776568) = ebx;

loc_001FEA30: ;
    if (CMP_NE(MEM8(0x76F0E0), LO8(ebx))) goto loc_001FEB10; /* jne: not equal / not zero */

loc_001FEA3C: ;
    PUSH32(esp, 0); sub_001FBE30(); /* call 0x001FBE30 */

loc_001FEA41: ;
    edx = MEM32(0x847024);
    eax = MEM32(edx + 0x3C);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    eax = 0x22;
    MEM8(0x84980F) = LO8(ebx);
    MEM32(0x776568) = ebx;
    MEM8(0x84703C) = 1;
    PUSH32(esp, 0); sub_0001E8B0(); /* call 0x0001E8B0 */

loc_001FEA6A: ;
    if (CMP_EQ(eax, ebx)) goto loc_001FEA82; /* je: equal / zero */

loc_001FEA6E: ;
    PUSH32(esp, edi);
    MEM8(eax + 0x1E) = LO8(ebx);
    SET_LO8(ebx, 1);
    edi = eax;
    MEM8(eax + 0x21) = 1;
    PUSH32(esp, 0); sub_000212C0(); /* call 0x000212C0 */

loc_001FEA7F: ;
    ebx = 0; /* xor self */
    POP32(esp, edi);

loc_001FEA82: ;
    edx = MEM32(0x847010);
    ecx = MEM32(edx + 0x58);
    xmm1 = MEMF(ecx + 4); /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_001FEAA1; /* jnp: not parity */

loc_001FEA9C: ;
    MEMF(ecx + 4) = xmm0; /* movss */

loc_001FEAA1: ;
    MEM8(ecx + 9) = LO8(ebx);
    eax = MEM32(edx + 0x58);
    if (CMP_NE(MEM8(eax + 8), LO8(ebx))) goto loc_001FEAB0; /* jne: not equal / not zero */

loc_001FEAAC: ;
    MEM8(eax + 8) = 1;

loc_001FEAB0: ;
    (void)0; /* cmp MEM8(0x76EC82), LO8(ebx) - flags set for next jcc */
    MEM32(0x776574) = 0xB;
    MEM8(0x801A33) = LO8(ebx);
    if (CMP_NE(MEM8(0x76EC82), LO8(ebx))) goto loc_001FEB10; /* jne: not equal / not zero */

loc_001FEAC8: ;
    eax = MEM32(0x847024);
    if (CMP_EQ(eax, ebx)) goto loc_001FEADA; /* je: equal / zero */

loc_001FEAD1: ;
    eax = MEM32(eax + 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00025720(); /* call 0x00025720 */

loc_001FEADA: ;
    if (CMP_NE(MEM8(0x771130), LO8(ebx))) goto loc_001FEB10; /* jne: not equal / not zero */

loc_001FEAE2: ;
    MEM16(0x800400) = LO16(ebx);
    MEM32(0x7FA1E8) = 1;
    MEM32(0x7FA1E4) = ebx;
    MEM32(0x7FA1F4) = 0x1D;
    MEM8(0x771B9C) = LO8(ebx);
    MEM8(0x7819D6) = 2;

loc_001FEB10: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001FEB20
 * Original: 0x001FEB20 - 0x001FED8B (619 bytes, 192 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FEB20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FEB20: ;
    esp = esp - 0x11C;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x128);
    eax = MEM32(edi + 8);
    ecx = MEM32(eax);
    ebp = 0; /* xor self */
    if (CMP_EQ(ecx, ebp)) goto loc_001FED6A; /* je: equal / zero */

loc_001FEB3E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEM32(esp + 0x10) = ebp;
    goto loc_001FEB50;

loc_001FEB46: ;
    edi = MEM32(esp + 0x130);
    /* nop */

loc_001FEB50: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(ecx + eax);
    eax = MEM32(edi + 4);
    esi = MEM32(edi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = esp + 0x30;
    PUSH32(esp, 0); sub_0005E4E0(); /* call 0x0005E4E0 */

loc_001FEB68: ;
    esp = esp + 0xC;
    PUSH32(esp, 0x84D458);
    eax = esp + 0x28;
    MEM32(esp + 0x12C) = esi;
    MEM32(esp + 0x1C) = ebp;
    MEM32(esp + 0x24) = ebp;
    MEM32(esp + 0x20) = ebp;
    PUSH32(esp, 0); sub_00061ED0(); /* call 0x00061ED0 */

loc_001FEB8C: ;
    (void)0; /* cmp eax, ebp - flags set for next jcc */
    MEM32(esp + 0x1C) = eax;
    if (CMP_NE(eax, ebp)) goto loc_001FEBB5; /* jne: not equal / not zero */

loc_001FEB94: ;
    ecx = MEM32(esp + 0x128);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x84D458);
    ebx = esp + 0x30;
    PUSH32(esp, 0); sub_00061C40(); /* call 0x00061C40 */

loc_001FEBAB: ;
    ebp = 0; /* xor self */
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x1C) = eax;
    if (TEST_Z(eax, eax)) goto loc_001FEC06; /* je: equal / zero */

loc_001FEBB5: ;
    MEM16(eax + 0x2C) = MEM16(eax + 0x2C) + 1;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(eax + 4);
    (void)0; /* cmp ecx, ebp - flags set for next jcc */
    esi = eax;
    if (CMP_EQ(ecx, ebp)) goto loc_001FEC06; /* je: equal / zero */

loc_001FEBC6: ;
    if (CMP_L(ecx, 0x3E4)) goto loc_001FEBD6; /* jl: less (signed <) */

loc_001FEBCE: ;
    if (CMP_LE(ecx, 0x3E5)) goto loc_001FEC06; /* jle: less or equal (signed <=) */

loc_001FEBD6: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x5E5F0);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00062180(); /* call 0x00062180 */

loc_001FEBE7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00062330(); /* call 0x00062330 */

loc_001FEBED: ;
    if (CMP_NE(eax, ebp)) goto loc_001FEBF6; /* jne: not equal / not zero */

loc_001FEBF1: ;
    eax = 0x3E5;

loc_001FEBF6: ;
    edx = eax;
    PUSH32(esp, 0x84D458);
    eax = 0; /* xor self */
    ecx = esi;
    PUSH32(esp, 0); sub_00061E30(); /* call 0x00061E30 */

loc_001FEC06: ;
    eax = MEM32(0x77618C);
    edx = MEM32(0x8498CC);
    ecx = eax + eax * 2;
    eax++;
    MEM32(0x77618C) = eax;
    eax = MEM32(edi + 8);
    ebx = edx + ecx * 4;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(ecx + eax);
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_001FEC2C: ;
    MEM32(ebx) = eax;
    MEM32(ebx + 4) = ebp;

loc_001FEC31: ;
    ecx = MEM32(esp + 0x1C);
    eax = MEM32(ecx + 4);
    if (CMP_L(eax, 0x3E4)) goto loc_001FEC4D; /* jl: less (signed <) */

loc_001FEC3F: ;
    if (CMP_G(eax, 0x3E5)) goto loc_001FEC4D; /* jg: greater (signed >) */

loc_001FEC46: ;
    PUSH32(esp, 0); sub_002A37B0(); /* call 0x002A37B0 */

loc_001FEC4B: ;
    goto loc_001FEC31;

loc_001FEC4D: ;
    if (CMP_EQ(MEM32(ecx + 4), ebp)) goto loc_001FED73; /* je: equal / zero */

loc_001FEC56: ;
    MEM32(ebx + 4) = ebp;
    eax = MEM32(esp + 0x20);
    if (CMP_EQ(eax, ebp)) { sub_001FED8B(); return; } /* je: equal / zero */

loc_001FEC65: ;
    eax = MEM32(eax + 0x44);
    MEM8(eax + 0x124) = 1;
    MEM32(0x847164) = eax;

loc_001FEC74: ;
    eax = MEM32(esp + 0x1C);
    edi = MEM32(eax + 8);
    eax = edi;
    edx = eax + 1;

loc_001FEC80: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_001FEC80; /* jne: not equal / not zero */

loc_001FEC87: ;
    PUSH32(esp, 0xFFFFFFFFu);
    eax = eax - edx;
    PUSH32(esp, 0x1CA9);
    eax++;
    PUSH32(esp, 0x5F7104);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_001FEC9C: ;
    esp = esp + 0x10;
    if (CMP_EQ(eax, ebp)) goto loc_001FECBA; /* je: equal / zero */

loc_001FECA3: ;
    esi = eax;
    ecx = edi;
    esi = esi - edi;
    /* nop */

loc_001FECB0: ;
    SET_LO8(edx, MEM8(ecx));
    MEM8(esi + ecx) = LO8(edx);
    ecx++;
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_001FECB0; /* jne: not equal / not zero */

loc_001FECBA: ;
    ecx = MEM32(esp + 0x10);
    ecx = ecx + 4;
    MEM32(ebx + 8) = eax;
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(esp + 0x18);
    if (CMP_EQ(ecx, ebp)) goto loc_001FECEC; /* je: equal / zero */

loc_001FECD0: ;
    esi = ecx;
    PUSH32(esp, 0); sub_000636D0(); /* call 0x000636D0 */

loc_001FECD7: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    MEM32(esp + 0x18) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_001FECE5: ;
    esp = esp + 4;
    MEM32(esp + 0x18) = ebp;

loc_001FECEC: ;
    eax = MEM32(esp + 0x1C);
    if (CMP_EQ(eax, ebp)) goto loc_001FED51; /* je: equal / zero */

loc_001FECF4: ;
    MEM16(eax + 0x2C) = MEM16(eax + 0x2C) - 1;
    eax = MEM32(esp + 0x1C);
    if (CMP_NE(MEM16(eax + 0x2C), LO16(ebp))) goto loc_001FED51; /* jne: not equal / not zero */

loc_001FED02: ;
    esi = eax + 4;
    edi = eax;
    eax = MEM32(esi);
    if (CMP_L(eax, 0x3E4)) goto loc_001FED29; /* jl: less (signed <) */

loc_001FED10: ;
    if (CMP_G(eax, 0x3E5)) goto loc_001FED29; /* jg: greater (signed >) */

loc_001FED17: ;
    PUSH32(esp, 0); sub_00062180(); /* call 0x00062180 */

loc_001FED1C: ;
    ecx = eax;
    if (CMP_EQ(ecx, ebp)) goto loc_001FED29; /* je: equal / zero */

loc_001FED22: ;
    eax = edi;
    PUSH32(esp, 0); sub_000629A0(); /* call 0x000629A0 */

loc_001FED29: ;
    if (CMP_NE(MEM32(esi), ebp)) goto loc_001FED37; /* jne: not equal / not zero */

loc_001FED2D: ;
    ecx = MEM32(edi + 0x18);
    eax = edi;
    PUSH32(esp, 0); sub_0005EA20(); /* call 0x0005EA20 */

loc_001FED37: ;
    PUSH32(esp, 0x84D458);
    eax = edi;
    PUSH32(esp, 0); sub_00061DD0(); /* call 0x00061DD0 */

loc_001FED43: ;
    edi = MEM32(esp + 0x1C);
    eax = 0x84D458;
    PUSH32(esp, 0); sub_00061D60(); /* call 0x00061D60 */

loc_001FED51: ;
    edx = MEM32(esp + 0x130);
    eax = MEM32(edx + 8);
    ecx = MEM32(esp + 0x10);
    if (CMP_NE(MEM32(ecx + eax), ebp)) goto loc_001FEB46; /* jne: not equal / not zero */

loc_001FED68: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_001FED6A: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp = esp + 0x11C;
    esp += 4; return; /* ret */

loc_001FED73: ;
    edx = MEM32(ecx + 0x18);
    (void)0; /* cmp edx, ebp - flags set for next jcc */
    eax = ecx + 0x18;
    if (CMP_EQ(edx, ebp)) goto loc_001FED81; /* je: equal / zero */

loc_001FED7D: ;
    MEM16(ecx + 0x2C) = MEM16(ecx + 0x2C) + 1;

loc_001FED81: ;
    edx = MEM32(eax);
    MEM32(ebx + 4) = edx;
    goto loc_001FEC74;

}

/**
 * sub_001FED90
 * Original: 0x001FED90 - 0x001FEF39 (425 bytes, 144 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FED90(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FED90: ;
    esp = esp - 0x10;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(eax + 8);
    eax = MEM32(ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_001FEDA3: ;
    edx = MEM32(0x77618C);
    ebp = 0; /* xor self */
    esi = 0; /* xor self */
    (void)0; /* cmp edx, ebp - flags set for next jcc */
    MEM32(esp + 8) = esi;
    if (CMP_LE(edx, ebp)) goto loc_001FEF33; /* jle: less or equal (signed <=) */

loc_001FEDB9: ;
    ecx = MEM32(0x8498CC);
    PUSH32(esp, edi);

loc_001FEDC0: ;
    if (CMP_EQ(MEM32(ecx), eax)) goto loc_001FEDD7; /* je: equal / zero */

loc_001FEDC4: ;
    esi++;
    ecx = ecx + 0xC;
    if (CMP_L(esi, edx)) goto loc_001FEDC0; /* jl: less (signed <) */

loc_001FEDCC: ;
    POP32(esp, edi);
    MEM32(esp + 8) = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_001FEDD7: ;
    PUSH32(esp, ebx);
    ebx = esi + esi * 2;
    ebx = ebx << 2;
    MEM32(esp + 0x10) = esi;
    MEM32(esp + 0x18) = esi;
    MEM32(esp + 0x1C) = ebp;
    MEM32(esp + 0x14) = ebx;
    goto loc_001FEDF4;

loc_001FEDF0: ;
    ebx = MEM32(esp + 0x14);

loc_001FEDF4: ;
    edx = MEM32(0x8498CC);
    ecx = MEM32(ebx + edx + 4);
    ebx = ebx + edx;
    if (CMP_EQ(ecx, ebp)) goto loc_001FEE35; /* je: equal / zero */

loc_001FEE04: ;
    eax = ecx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    esi = 0x65;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    edx = MEM32(edx * 8 + 0x84D788);
    if (CMP_EQ(edx, ebp)) goto loc_001FEE35; /* je: equal / zero */

loc_001FEE19: ;
    /* nop */

loc_001FEE20: ;
    eax = MEM32(edx + -4);
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    edi = edx + -28;
    if (CMP_EQ(eax, ecx)) { sub_001FEF39(); return; } /* je: equal / zero */

loc_001FEE2E: ;
    edx = MEM32(edx + 4);
    if (CMP_NE(edx, ebp)) goto loc_001FEE20; /* jne: not equal / not zero */

loc_001FEE35: ;
    eax = MEM32(0x84DAB0);
    esi = MEM32(0x84DAB4);
    if (CMP_AE(eax, esi)) goto loc_001FEE56; /* jae: above or equal (unsigned >=) */

loc_001FEE44: ;
    (void)0; /* cmp ecx, ebp - flags set for next jcc */
    edx = MEM32(eax);
    if (CMP_EQ(ecx, ebp)) goto loc_001FEE4F; /* je: equal / zero */

loc_001FEE4A: ;
    if (CMP_EQ(ecx, MEM32(edx + 0x18))) goto loc_001FEE58; /* je: equal / zero */

loc_001FEE4F: ;
    eax = eax + 4;
    if (CMP_B(eax, esi)) goto loc_001FEE44; /* jb: below (unsigned <) */

loc_001FEE56: ;
    edx = 0; /* xor self */

loc_001FEE58: ;
    edi = edx;
    if (CMP_EQ(edi, ebp)) goto loc_001FEE7E; /* je: equal / zero */

loc_001FEE5E: ;
    if (CMP_EQ(MEM32(edi + 0x18), ebp)) goto loc_001FEE67; /* je: equal / zero */

loc_001FEE63: ;
    MEM16(edi + 0x2C) = MEM16(edi + 0x2C) - 1;

loc_001FEE67: ;
    if (CMP_NE(MEM16(edi + 0x2C), LO16(ebp))) goto loc_001FEE7E; /* jne: not equal / not zero */

loc_001FEE6D: ;
    eax = edi;
    PUSH32(esp, 0); sub_0005EA20(); /* call 0x0005EA20 */

loc_001FEE74: ;
    eax = 0x84D458;
    PUSH32(esp, 0); sub_00061D60(); /* call 0x00061D60 */

loc_001FEE7E: ;
    MEM32(ebx) = ebp;
    MEM32(ebx + 4) = ebp;
    eax = MEM32(ebx + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_001FEE8C: ;
    if (TEST_NZ(eax, eax)) goto loc_001FEEBD; /* jne: not equal / not zero */

loc_001FEE90: ;
    eax = MEM32(ebx + 8);
    if (CMP_EQ(eax, ebp)) goto loc_001FEEBD; /* je: equal / zero */

loc_001FEE97: ;
    esi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    esi++;
    edx--;
    PUSH32(esp, eax);
    MEM32(0x7FA490) = esi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_001FEEB7: ;
    esp = esp + 4;
    MEM32(ebx + 8) = ebp;

loc_001FEEBD: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x18);
    edi = MEM32(esp + 0x14);
    eax = eax + 4;
    MEM32(ebx + 8) = ebp;
    ecx = MEM32(ecx + 8);
    esi = MEM32(eax + ecx);
    edx++;
    edi = edi + 0xC;
    (void)0; /* cmp esi, ebp - flags set for next jcc */
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(0x77618C);
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x14) = edi;
    if (CMP_EQ(esi, ebp)) goto loc_001FEEFA; /* je: equal / zero */

loc_001FEEF2: ;
    if (CMP_L(edx, eax)) goto loc_001FEDF0; /* jl: less (signed <) */

loc_001FEEFA: ;
    ebx = MEM32(esp + 0x10);
    eax = eax - edx;
    if (CMP_LE(eax, ebp)) goto loc_001FEF2A; /* jle: less or equal (signed <=) */

loc_001FEF04: ;
    esi = edx + edx * 2;
    edx = MEM32(0x8498CC);
    ecx = eax + eax * 2;
    ecx = ecx << 2;
    esi = edx + esi * 4;
    edi = ebx + ebx * 2;
    edi = edx + edi * 4;
    edx = ecx;
    ecx = ecx >> 2;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = edx;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */

loc_001FEF2A: ;
    eax = eax + ebx;
    POP32(esp, ebx);
    MEM32(0x77618C) = eax;
    POP32(esp, edi);

loc_001FEF33: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_001FEF80
 * Original: 0x001FEF80 - 0x001FF0EC (364 bytes, 138 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FEF80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FEF80: ;
    esp = esp - 0x10;
    eax = MEM32(0x6BD220);
    edx = MEM32(eax);
    ecx = 0; /* xor self */
    (void)0; /* test edx, edx - flags set for next jcc */
    MEM32(esp + 0xC) = ecx;
    if (TEST_Z(edx, edx)) goto loc_001FEFA3; /* je: equal / zero */

loc_001FEF94: ;
    edx = MEM32(eax + 4);
    eax = eax + 4;
    ecx++;
    if (TEST_NZ(edx, edx)) goto loc_001FEF94; /* jne: not equal / not zero */

loc_001FEF9F: ;
    MEM32(esp + 0xC) = ecx;

loc_001FEFA3: ;
    eax = MEM32(0x6BD234);
    edx = MEM32(eax);
    ecx = 0; /* xor self */
    (void)0; /* test edx, edx - flags set for next jcc */
    MEM32(esp + 8) = ecx;
    if (TEST_Z(edx, edx)) goto loc_001FEFC3; /* je: equal / zero */

loc_001FEFB4: ;
    edx = MEM32(eax + 4);
    eax = eax + 4;
    ecx++;
    if (TEST_NZ(edx, edx)) goto loc_001FEFB4; /* jne: not equal / not zero */

loc_001FEFBF: ;
    MEM32(esp + 8) = ecx;

loc_001FEFC3: ;
    eax = MEM32(0x6BD274);
    edx = MEM32(eax);
    ecx = 0; /* xor self */
    (void)0; /* test edx, edx - flags set for next jcc */
    MEM32(esp + 4) = ecx;
    if (TEST_Z(edx, edx)) goto loc_001FEFE3; /* je: equal / zero */

loc_001FEFD4: ;
    edx = MEM32(eax + 4);
    eax = eax + 4;
    ecx++;
    if (TEST_NZ(edx, edx)) goto loc_001FEFD4; /* jne: not equal / not zero */

loc_001FEFDF: ;
    MEM32(esp + 4) = ecx;

loc_001FEFE3: ;
    eax = MEM32(0x6BD214);
    edx = MEM32(eax);
    ecx = 0; /* xor self */
    (void)0; /* test edx, edx - flags set for next jcc */
    MEM32(esp) = ecx;
    if (TEST_Z(edx, edx)) goto loc_001FF001; /* je: equal / zero */

loc_001FEFF3: ;
    edx = MEM32(eax + 4);
    eax = eax + 4;
    ecx++;
    if (TEST_NZ(edx, edx)) goto loc_001FEFF3; /* jne: not equal / not zero */

loc_001FEFFE: ;
    MEM32(esp) = ecx;

loc_001FF001: ;
    eax = MEM32(0x6BD268);
    ecx = MEM32(eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = 0; /* xor self */
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(ecx, ecx)) goto loc_001FF01D; /* je: equal / zero */

loc_001FF012: ;
    ecx = MEM32(eax + 4);
    eax = eax + 4;
    ebp++;
    if (TEST_NZ(ecx, ecx)) goto loc_001FF012; /* jne: not equal / not zero */

loc_001FF01D: ;
    eax = MEM32(0x6BD0E4);
    ecx = MEM32(eax);
    ebx = 0; /* xor self */
    if (TEST_Z(ecx, ecx)) goto loc_001FF03B; /* je: equal / zero */

loc_001FF02A: ;
    /* nop */

loc_001FF030: ;
    ecx = MEM32(eax + 4);
    eax = eax + 4;
    ebx++;
    if (TEST_NZ(ecx, ecx)) goto loc_001FF030; /* jne: not equal / not zero */

loc_001FF03B: ;
    eax = MEM32(0x6BD100);
    ecx = MEM32(eax);
    edi = 0; /* xor self */
    if (TEST_Z(ecx, ecx)) goto loc_001FF053; /* je: equal / zero */

loc_001FF048: ;
    ecx = MEM32(eax + 4);
    eax = eax + 4;
    edi++;
    if (TEST_NZ(ecx, ecx)) goto loc_001FF048; /* jne: not equal / not zero */

loc_001FF053: ;
    eax = MEM32(0x6BD124);
    ecx = MEM32(eax);
    edx = 0; /* xor self */
    if (TEST_Z(ecx, ecx)) goto loc_001FF06B; /* je: equal / zero */

loc_001FF060: ;
    ecx = MEM32(eax + 4);
    eax = eax + 4;
    edx++;
    if (TEST_NZ(ecx, ecx)) goto loc_001FF060; /* jne: not equal / not zero */

loc_001FF06B: ;
    eax = MEM32(0x6BD18C);
    esi = MEM32(eax);
    ecx = 0; /* xor self */
    if (TEST_Z(esi, esi)) goto loc_001FF083; /* je: equal / zero */

loc_001FF078: ;
    esi = MEM32(eax + 4);
    eax = eax + 4;
    ecx++;
    if (TEST_NZ(esi, esi)) goto loc_001FF078; /* jne: not equal / not zero */

loc_001FF083: ;
    eax = MEM32(0x8498CC);
    esi = ecx + edx;
    edx = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x1C);
    esi = esi + edi;
    edi = MEM32(esp + 0x14);
    esi = esi + ebx;
    ebx = MEM32(esp + 0x10);
    esi = esi + ebp;
    esi = esi + ebx;
    esi = esi + edi;
    esi = esi + edx;
    esi = esi + ecx;
    if (TEST_Z(eax, eax)) goto loc_001FF0BA; /* je: equal / zero */

loc_001FF0AD: ;
    PUSH32(esp, 0x8498CC);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_001FF0B7: ;
    esp = esp + 4;

loc_001FF0BA: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x1C7E);
    eax = esi + esi * 2;
    eax = eax << 2;
    PUSH32(esp, 0x5F7104);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_001FF0D2: ;
    esp = esp + 0x10;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(0x8498CC) = eax;
    MEM32(0x77618C) = 0;
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_001FF0F0
 * Original: 0x001FF0F0 - 0x001FF11E (46 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FF0F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FF0F0: ;
    ecx = MEM32(0x77618C);
    PUSH32(esp, ebp);
    eax = 0; /* xor self */
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_LE(ecx & ecx, 0)) goto loc_001FF119; /* jle: less or equal (signed <=) */

loc_001FF0FE: ;
    edi = MEM32(0x8498CC);
    edx = edi;

loc_001FF106: ;
    if (CMP_NE(MEM32(edx), ebx)) goto loc_001FF111; /* jne: not equal / not zero */

loc_001FF10A: ;
    ebp = eax + esi;
    if (CMP_L(ebp, ecx)) { sub_001FF11E(); return; } /* jl: less (signed <) */

loc_001FF111: ;
    eax++;
    edx = edx + 0xC;
    if (CMP_L(eax, ecx)) goto loc_001FF106; /* jl: less (signed <) */

loc_001FF119: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001FF130
 * Original: 0x001FF130 - 0x001FF1CC (156 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FF130(void)
{
    int _flags = 0; /* fallback flag var */

loc_001FF130: ;
    SET_LO8(eax, MEM8(0x849865));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001FF1CB; /* jne: not equal / not zero */

loc_001FF13D: ;
    eax = MEM32(0x7FA1F8);
    if (CMP_NE(eax, 0x1D)) goto loc_001FF166; /* jne: not equal / not zero */

loc_001FF147: ;
    PUSH32(esp, 0x6BD260);
    PUSH32(esp, 0); sub_001FEB20(); /* call 0x001FEB20 */

loc_001FF151: ;
    PUSH32(esp, 0x6BD24C);
    PUSH32(esp, 0); sub_001FEB20(); /* call 0x001FEB20 */

loc_001FF15B: ;
    esp = esp + 8;
    MEM8(0x849865) = 1;
    esp += 4; return; /* ret */

loc_001FF166: ;
    if (CMP_NE(eax, 0x46)) goto loc_001FF185; /* jne: not equal / not zero */

loc_001FF16B: ;
    PUSH32(esp, 0x6BD0DC);
    PUSH32(esp, 0); sub_001FEB20(); /* call 0x001FEB20 */

loc_001FF175: ;
    esp = esp + 4;
    PUSH32(esp, 0); sub_00242080(); /* call 0x00242080 */

loc_001FF17D: ;
    MEM8(0x849865) = 1;
    esp += 4; return; /* ret */

loc_001FF185: ;
    SET_LO8(eax, MEM8(0x7819D5));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001FF1A3; /* je: equal / zero */

loc_001FF18E: ;
    PUSH32(esp, 0x6BD0F8);
    PUSH32(esp, 0); sub_001FEB20(); /* call 0x001FEB20 */

loc_001FF198: ;
    esp = esp + 4;
    MEM8(0x849865) = 1;
    esp += 4; return; /* ret */

loc_001FF1A3: ;
    PUSH32(esp, 0x6BD22C);
    PUSH32(esp, 0); sub_001FEB20(); /* call 0x001FEB20 */

loc_001FF1AD: ;
    PUSH32(esp, 0x6BD260);
    PUSH32(esp, 0); sub_001FEB20(); /* call 0x001FEB20 */

loc_001FF1B7: ;
    PUSH32(esp, 0x6BD24C);
    PUSH32(esp, 0); sub_001FEB20(); /* call 0x001FEB20 */

loc_001FF1C1: ;
    esp = esp + 0xC;
    MEM8(0x849865) = 1;

loc_001FF1CB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001FF1D0
 * Original: 0x001FF1D0 - 0x001FF286 (182 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FF1D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001FF1D0: ;
    SET_LO8(eax, MEM8(0x849865));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001FF285; /* je: equal / zero */

loc_001FF1DD: ;
    eax = MEM32(0x7FA1F8);
    if (CMP_NE(eax, 0x1D)) goto loc_001FF206; /* jne: not equal / not zero */

loc_001FF1E7: ;
    PUSH32(esp, 0x6BD260);
    PUSH32(esp, 0); sub_001FED90(); /* call 0x001FED90 */

loc_001FF1F1: ;
    PUSH32(esp, 0x6BD24C);
    PUSH32(esp, 0); sub_001FED90(); /* call 0x001FED90 */

loc_001FF1FB: ;
    esp = esp + 8;
    MEM8(0x849865) = 0;
    esp += 4; return; /* ret */

loc_001FF206: ;
    if (CMP_NE(eax, 0x46)) goto loc_001FF23F; /* jne: not equal / not zero */

loc_001FF20B: ;
    PUSH32(esp, 0x6BD0DC);
    PUSH32(esp, 0); sub_001FED90(); /* call 0x001FED90 */

loc_001FF215: ;
    ecx = MEM32(0x849C34);
    esp = esp + 4;
    if (TEST_Z(ecx, ecx)) goto loc_001FF228; /* je: equal / zero */

loc_001FF222: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_001FF228: ;
    MEM32(0x849C34) = 0;
    PUSH32(esp, 0); sub_00207FB0(); /* call 0x00207FB0 */

loc_001FF237: ;
    MEM8(0x849865) = 0;
    esp += 4; return; /* ret */

loc_001FF23F: ;
    SET_LO8(eax, MEM8(0x7819D5));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001FF25D; /* je: equal / zero */

loc_001FF248: ;
    PUSH32(esp, 0x6BD0F8);
    PUSH32(esp, 0); sub_001FED90(); /* call 0x001FED90 */

loc_001FF252: ;
    esp = esp + 4;
    MEM8(0x849865) = 0;
    esp += 4; return; /* ret */

loc_001FF25D: ;
    PUSH32(esp, 0x6BD22C);
    PUSH32(esp, 0); sub_001FED90(); /* call 0x001FED90 */

loc_001FF267: ;
    PUSH32(esp, 0x6BD260);
    PUSH32(esp, 0); sub_001FED90(); /* call 0x001FED90 */

loc_001FF271: ;
    PUSH32(esp, 0x6BD24C);
    PUSH32(esp, 0); sub_001FED90(); /* call 0x001FED90 */

loc_001FF27B: ;
    esp = esp + 0xC;
    MEM8(0x849865) = 0;

loc_001FF285: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001FF290
 * Original: 0x001FF290 - 0x001FF2DA (74 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FF290(void)
{
    int _flags = 0; /* fallback flag var */

loc_001FF290: ;
    eax = eax << 6;
    eax = eax + 0x777ED0;
    if (CMP_EQ(MEM32(eax + 0x30), 0xFFFFFFFFu)) { sub_001FF2DA(); return; } /* je: equal / zero */

loc_001FF29E: ;
    ecx = MEM32(eax + 0x14);
    if (TEST_Z(ecx, ecx)) { sub_001FF2DA(); return; } /* je: equal / zero */

loc_001FF2A5: ;
    ecx = (uint32_t)(int32_t)SMEM8(0x77627C);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x18);
    ecx = ecx + ecx * 4;
    ecx = MEM32(ecx * 8 + 0x776F28);
    (void)0; /* cmp esi, MEM32(ecx + 4) - flags set for next jcc */
    POP32(esp, esi);
    if (CMP_NE(esi, MEM32(ecx + 4))) { sub_001FF2DA(); return; } /* jne: not equal / not zero */

loc_001FF2C0: ;
    if (TEST_NZ(edx, edx)) goto loc_001FF2CD; /* jne: not equal / not zero */

loc_001FF2C4: ;
    if (CMP_NE(MEM32(eax + 0x10), 2)) { sub_001FF2DA(); return; } /* jne: not equal / not zero */

loc_001FF2CA: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_001FF2CD: ;
    if (CMP_NE(edx, 1)) { sub_001FF2DA(); return; } /* jne: not equal / not zero */

loc_001FF2D2: ;
    if (CMP_NE(MEM32(eax + 0x10), edx)) { sub_001FF2DA(); return; } /* jne: not equal / not zero */

loc_001FF2D7: ;
    SET_LO8(eax, LO8(edx));
    esp += 4; return; /* ret */

}

/**
 * sub_001FF2E0
 * Original: 0x001FF2E0 - 0x001FF30E (46 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FF2E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001FF2E0: ;
    SET_LO8(ecx, MEM8(0x862C5C));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_001FF2F4; /* jne: not equal / not zero */

loc_001FF2EA: ;
    SET_LO8(ecx, MEM8(0x864EBB));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_001FF30B; /* je: equal / zero */

loc_001FF2F4: ;
    eax = eax << 6;
    eax = eax + 0x777ED0;
    edx = eax;
    if (CMP_EQ(MEM32(edx + 0x30), 0xFFFFFFFFu)) goto loc_001FF30B; /* je: equal / zero */

loc_001FF304: ;
    ecx = MEM32(edx + 0x14);
    if (TEST_NZ(ecx, ecx)) { sub_001FF30E(); return; } /* jne: not equal / not zero */

loc_001FF30B: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_001FF3B0
 * Original: 0x001FF3B0 - 0x001FF3E9 (57 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FF3B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FF3B0: ;
    esp = esp - 0xD4;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xE0);
    esi = ZX16(MEM16(edi + 0x60));
    (void)0; /* cmp esi, 2 - flags set for next jcc */
    MEM32(esp + 0x18) = esi;
    MEM32(esp + 0xC) = 0;
    MEM8(esp + 0xB) = 0;
    if (CMP_GE(esi, 2)) { sub_001FF3E9(); return; } /* jge: greater or equal (signed >=) */

loc_001FF3D9: ;
    eax = MEM32(esi * 4 + 0x8470FC);
    ecx = MEM32(eax + 8);
    MEM32(esp + 0x14) = ecx;
    g_seh_ebp = ebp; sub_001FF3F1(); return; /* tail jmp 0x001FF3F1 */

}

/**
 * sub_001FF900
 * Original: 0x001FF900 - 0x001FF9C0 (192 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FF900(void)
{
    int _flags = 0; /* fallback flag var */

loc_001FF900: ;
    eax = MEM32(esi + 0x564);
    esp = esp - 0x108;
    if (TEST_Z(eax, eax)) goto loc_001FF9B9; /* je: equal / zero */

loc_001FF914: ;
    eax = MEM32(esi + 0x568);
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x216);
    eax = MEM32(0x84A224);
    ecx = ecx << 5;
    ecx = ecx + eax;
    PUSH32(esp, ecx);
    edx = esp + 4;
    PUSH32(esp, 0x5AC808);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046EC2D(); /* call 0x0046EC2D */

loc_001FF93B: ;
    ecx = MEM32(esi + 0x568);
    ecx = (uint32_t)(int32_t)SMEM8(ecx + 0x216);
    eax = MEM32(esi + 0x564);
    eax = MEM32(eax + 4);
    edx = ecx + ecx * 2;
    ecx = MEM32(0x84A220);
    edx = ZX8(MEM8(ecx + edx * 8 + 0x17));
    edx = edx & 0x7F;
    PUSH32(esp, edx);
    ecx = eax + 0x810;
    PUSH32(esp, ecx);
    edx = eax + 0x80C;
    PUSH32(esp, edx);
    ecx = eax + 0x808;
    PUSH32(esp, ecx);
    eax = eax + 0x7FC;
    PUSH32(esp, eax);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_002B7740(); /* call 0x002B7740 */

loc_001FF988: ;
    ecx = 1;
    esp = esp + 0x24;
    if (CMP_NE(LO8(eax), LO8(ecx))) goto loc_001FF9A3; /* jne: not equal / not zero */

loc_001FF994: ;
    eax = MEM32(esi + 0x564);
    edx = MEM32(eax + 4);
    MEM8(edx + 0x7FA) = LO8(ecx);

loc_001FF9A3: ;
    eax = MEM32(esp + 0x10C);
    if (TEST_Z(eax, eax)) goto loc_001FF9B9; /* je: equal / zero */

loc_001FF9AE: ;
    eax = MEM32(esi + 0x564);
    PUSH32(esp, 0); sub_0003E460(); /* call 0x0003E460 */

loc_001FF9B9: ;
    esp = esp + 0x108;
    esp += 4; return; /* ret */

}

/**
 * sub_001FF9C0
 * Original: 0x001FF9C0 - 0x001FF9F4 (52 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FF9C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001FF9C0: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */

loc_001FF9C3: ;
    eax = MEM32(esi + 0x7761E0);
    if (TEST_Z(eax, eax)) goto loc_001FF9EA; /* je: equal / zero */

loc_001FF9CD: ;
    if (CMP_NE(MEM32(eax + 0x64), 0x45)) goto loc_001FF9E0; /* jne: not equal / not zero */

loc_001FF9D3: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002F50C0(); /* call 0x002F50C0 */

loc_001FF9DD: ;
    esp = esp + 0xC;

loc_001FF9E0: ;
    MEM32(esi + 0x7761E0) = 0;

loc_001FF9EA: ;
    esi = esi + 4;
    if (CMP_B(esi, 0x10)) goto loc_001FF9C3; /* jb: below (unsigned <) */

loc_001FF9F2: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001FFA00
 * Original: 0x001FFA00 - 0x001FFB48 (328 bytes, 104 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FFA00(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FFA00: ;
    SET_LO8(eax, MEM8(0x8498D0));
    esp = esp - 0x204;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = 0; /* xor self */
    (void)0; /* cmp LO8(eax), LO8(ebx) - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_001FFB3D; /* je: equal / zero */

loc_001FFA19: ;
    if (CMP_NE(MEM32(0x87568C), ebx)) goto loc_001FFA31; /* jne: not equal / not zero */

loc_001FFA21: ;
    esi = MEM32(0x8470FC);
    PUSH32(esp, 0); sub_0004E440(); /* call 0x0004E440 */

loc_001FFA2C: ;
    MEM32(0x87568C) = eax;

loc_001FFA31: ;
    eax = MEM32(0x847164);
    if (CMP_EQ(eax, ebx)) goto loc_001FFA42; /* je: equal / zero */

loc_001FFA3A: ;
    eax = MEM32(eax + 0x118);
    goto loc_001FFA47;

loc_001FFA42: ;
    eax = 0x5D88B4;

loc_001FFA47: ;
    PUSH32(esp, eax);
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x5F6BB4;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_001FFA54: ;
    PUSH32(esp, eax);
    eax = esp + 0x1C;
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046EE4A(); /* call 0x0046EE4A */

loc_001FFA64: ;
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0); sub_001FFB50(); /* call 0x001FFB50 */

loc_001FFA6B: ;
    esi = eax;
    esp = esp + 0x14;
    if (CMP_EQ(esi, ebx)) goto loc_001FFABE; /* je: equal / zero */

loc_001FFA74: ;
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x5F6B94;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_001FFA80: ;
    ebp = eax;
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x5F6B74;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_001FFA8E: ;
    MEM32(esp + 0x10) = eax;
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x5F6B58;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_001FFA9E: ;
    PUSH32(esp, eax);
    esp = esp - 8;
    eax = esp;
    edi = esp + 0x20;
    PUSH32(esp, 0); sub_00060900(); /* call 0x00060900 */

loc_001FFAAD: ;
    edx = MEM32(esp + 0x1C);
    eax = ebx;
    ecx = ebp;
    PUSH32(esp, 0); sub_002307B0(); /* call 0x002307B0 */

loc_001FFABA: ;
    edi = eax;
    goto loc_001FFAC0;

loc_001FFABE: ;
    edi = 0; /* xor self */

loc_001FFAC0: ;
    esi = MEM32(0x87568C);
    ecx = MEM32(0x8470FC);
    SET_LO8(edx, 0); /* xor self */
    if (CMP_LE(esi, ebx)) goto loc_001FFADE; /* jle: less or equal (signed <=) */

loc_001FFAD2: ;
    if (CMP_NE(MEM32(ecx + 0xC), esi)) goto loc_001FFADE; /* jne: not equal / not zero */

loc_001FFAD7: ;
    eax = MEM32(ecx + 4);
    if (CMP_NE(eax, ebx)) goto loc_001FFAE3; /* jne: not equal / not zero */

loc_001FFADE: ;
    eax = 0x75A0B4;

loc_001FFAE3: ;
    eax = MEM32(eax + 8);
    if (TEST_Z(HI8(eax), 1)) goto loc_001FFAF3; /* je: equal / zero */

loc_001FFAEB: ;
    MEM8(0x8498D0) = LO8(ebx);
    SET_LO8(edx, 1);

loc_001FFAF3: ;
    if (TEST_Z(HI8(eax), 2)) goto loc_001FFAFD; /* je: equal / zero */

loc_001FFAF8: ;
    g_seh_ebp = ebp; sub_002A3A50(); return; /* tail jmp 0x002A3A50 */

loc_001FFAFD: ;
    if (CMP_EQ(LO8(edx), LO8(ebx))) goto loc_001FFB27; /* je: equal / zero */

loc_001FFB01: ;
    if (CMP_EQ(MEM32(ecx + 4), ebx)) goto loc_001FFB1A; /* je: equal / zero */

loc_001FFB06: ;
    if (CMP_LE(esi, ebx)) goto loc_001FFB1A; /* jle: less or equal (signed <=) */

loc_001FFB0A: ;
    eax = MEM32(ecx + 0xC);
    if (CMP_NE(eax, esi)) goto loc_001FFB1A; /* jne: not equal / not zero */

loc_001FFB11: ;
    eax--;
    MEM32(ecx + 0xC) = eax;
    PUSH32(esp, 0); sub_0004E310(); /* call 0x0004E310 */

loc_001FFB1A: ;
    MEM32(0x87568C) = ebx;
    MEM8(0x849C0F) = 1;

loc_001FFB27: ;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_0003C1E0(); /* call 0x0003C1E0 */

loc_001FFB31: ;
    ebx = eax;
    eax = 0x15;
    PUSH32(esp, 0); sub_00232BD0(); /* call 0x00232BD0 */

loc_001FFB3D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x204;
    esp += 4; return; /* ret */

}

/**
 * sub_001FFB50
 * Original: 0x001FFB50 - 0x001FFBD4 (132 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FFB50(void)
{
    int _flags = 0; /* fallback flag var */

loc_001FFB50: ;
    esp = esp - 0x200;
    SET_LO8(eax, MEM8(0x84B680));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(esp) = 0;
    MEM8(esp + 0xFF) = 0;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_001FFBD4(); return; } /* je: equal / zero */

loc_001FFB6B: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x84B680);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046EEC0(); /* call 0x0046EEC0 */

loc_001FFB7F: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    esp = esp + 0xC;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001FFBB4; /* je: equal / zero */

loc_001FFB8A: ;
    ecx = 0x75DFA0;
    PUSH32(esp, 0); sub_0046EA5A(); /* call 0x0046EA5A */

loc_001FFB94: ;
    PUSH32(esp, eax);
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x5AC800);
    eax = esp + 0x10C;
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_001FFBB1: ;
    esp = esp + 0x14;

loc_001FFBB4: ;
    ecx = MEM32(esp + 0x204);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x461);
    PUSH32(esp, 0x606A34);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_001FFBCD: ;
    esp = esp + 0x210;
    esp += 4; return; /* ret */

}

/**
 * sub_001FFC00
 * Original: 0x001FFC00 - 0x001FFC1D (29 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FFC00(void)
{

loc_001FFC00: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00269BC0(); /* call 0x00269BC0 */

loc_001FFC11: ;
    edx = esi + esi * 2;
    esp = esp + 0x10;
    eax = edi + edx * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FFC20
 * Original: 0x001FFC20 - 0x001FFC3B (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FFC20(void)
{

loc_001FFC20: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00269D20(); /* call 0x00269D20 */

loc_001FFC35: ;
    esp = esp + 0x10;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001FFC40
 * Original: 0x001FFC40 - 0x001FFC66 (38 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FFC40(void)
{
    int _flags = 0; /* fallback flag var */

loc_001FFC40: ;
    if (CMP_EQ(eax, ecx)) goto loc_001FFC65; /* je: equal / zero */

loc_001FFC44: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);

loc_001FFC47: ;
    esi = edx;
    ebx = MEM32(esi);
    edi = eax;
    MEM32(edi) = ebx;
    ebx = MEM32(esi + 4);
    MEM32(edi + 4) = ebx;
    esi = MEM32(esi + 8);
    eax = eax + 0xC;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(edi + 8) = esi;
    if (CMP_NE(eax, ecx)) goto loc_001FFC47; /* jne: not equal / not zero */

loc_001FFC62: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_001FFC65: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001FFC70
 * Original: 0x001FFC70 - 0x001FFD75 (261 bytes, 75 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FFC70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FFC70: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x8498D4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(eax, ebx)) goto loc_001FFCB5; /* je: equal / zero */

loc_001FFC84: ;
    esi = MEM32(eax);
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    edi = eax;
    if (CMP_EQ(esi, ebx)) goto loc_001FFCA4; /* je: equal / zero */

loc_001FFC8C: ;
    eax = esi;
    PUSH32(esp, 0); sub_001F4FC0(); /* call 0x001F4FC0 */

loc_001FFC93: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    MEM32(esp + 0x14) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_001FFCA1: ;
    esp = esp + 4;

loc_001FFCA4: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    MEM32(esp + 0x14) = edi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_001FFCB2: ;
    esp = esp + 4;

loc_001FFCB5: ;
    if (CMP_NE(MEM32(0x84A19C), ebx)) goto loc_001FFCC2; /* jne: not equal / not zero */

loc_001FFCBD: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_001FFCC2: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (CMP_EQ(esi, ebx)) goto loc_001FFD0A; /* je: equal / zero */

loc_001FFCE8: ;
    if (CMP_B(MEM32(esi + 0x80), 0x50)) goto loc_001FFD0A; /* jb: below (unsigned <) */

loc_001FFCF1: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_001FFCFB: ;
    PUSH32(esp, 0x50);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_001FFD03: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_001FFD2B; /* jne: not equal / not zero */

loc_001FFD0A: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_001FFD1C: ;
    PUSH32(esp, 0x50);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_001FFD24: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) { sub_001FFD75(); return; } /* je: equal / zero */

loc_001FFD2B: ;
    xmm0 = MEMF(0x648D14); /* movss */
    MEM8(eax + 5) = LO8(ebx);
    MEM8(eax + 4) = LO8(ebx);
    MEM32(eax + 8) = ebx;
    MEM32(eax + 0x38) = ebx;
    MEM32(eax + 0x3C) = ebx;
    MEM32(eax + 0x1C) = 0x1E;
    MEMF(eax + 0x28) = xmm0; /* movss */
    MEMF(eax + 0x2C) = xmm0; /* movss */
    MEMF(eax + 0x30) = xmm0; /* movss */
    MEMF(eax + 0x34) = xmm0; /* movss */
    MEM32(eax + 0x20) = 0x140;
    MEM32(eax + 0x24) = 0xF0;
    MEM8(eax + 0x18) = LO8(ebx);
    MEM32(0x8498D4) = eax;
    g_seh_ebp = ebp; sub_001FFD7B(); return; /* tail jmp 0x001FFD7B */

}

/**
 * sub_001FFDD0
 * Original: 0x001FFDD0 - 0x001FFE35 (101 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FFDD0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001FFDD0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(0x8498D4);
    if (TEST_Z(esi, esi)) goto loc_001FFE30; /* je: equal / zero */

loc_001FFDDC: ;
    PUSH32(esp, 0); sub_001FFE50(); /* call 0x001FFE50 */

loc_001FFDE1: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001FFDEA; /* je: equal / zero */

loc_001FFDE5: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_001FFDEA: ;
    eax = MEM32(0x8498D4);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    edi = eax;
    if (TEST_Z(eax, eax)) goto loc_001FFE25; /* je: equal / zero */

loc_001FFDF6: ;
    esi = MEM32(eax);
    if (TEST_Z(esi, esi)) goto loc_001FFE14; /* je: equal / zero */

loc_001FFDFC: ;
    eax = esi;
    PUSH32(esp, 0); sub_001F4FC0(); /* call 0x001F4FC0 */

loc_001FFE03: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_001FFE11: ;
    esp = esp + 4;

loc_001FFE14: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    MEM32(esp + 0xC) = edi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_001FFE22: ;
    esp = esp + 4;

loc_001FFE25: ;
    MEM32(0x8498D4) = 0;
    POP32(esp, edi);

loc_001FFE30: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001FFE40
 * Original: 0x001FFE40 - 0x001FFE4E (14 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FFE40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FFE40: ;
    eax = MEM32(0x8498D4);
    if (TEST_Z(eax, eax)) { sub_001FFE4E(); return; } /* je: equal / zero */

loc_001FFE49: ;
    g_seh_ebp = ebp; sub_00200050(); return; /* tail jmp 0x00200050 */

}

/**
 * sub_001FFE50
 * Original: 0x001FFE50 - 0x001FFED1 (129 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FFE50(void)
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

loc_001FFE50: ;
    SET_LO8(eax, MEM8(esi + 4));
    esp = esp - 8;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001FFE61; /* jne: not equal / not zero */

loc_001FFE5A: ;
    eax = esi;
    PUSH32(esp, 0); sub_001FFF30(); /* call 0x001FFF30 */

loc_001FFE61: ;
    PUSH32(esp, 0); sub_0042B72A(); /* call 0x0042B72A */

loc_001FFE66: ;
    eax = eax - MEM32(esi + 0x10);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 4) = eax;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    if (CMP_GE(eax & eax, 0)) goto loc_001FFE7B; /* jge: greater or equal (signed >=) */

loc_001FFE75: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_001FFE7B: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm4 = MEMF(0x648D14); /* movss */
    xmm0 = MEMF(esi + 0x44); /* movss */
    xmm0 = xmm0 + MEMF(esi + 0x48); /* addss */
    xmm3 = MEMF(esi + 0x4C); /* movss */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    xmm2 = xmm4; /* movaps */
    xmm2 = xmm2 - xmm0; /* subss */
    xmm0 = MEMF(esp); /* movss */
    xmm0 = xmm0 / MEMF(esi + 0x40); /* divss */
    eax = (int32_t)xmm0; /* cvttss2si */
    MEMF(esp + 4) = xmm0; /* movss */
    xmm5 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 - xmm5; /* subss */
    /* comiss xmm3, xmm0 - sets EFLAGS */
    xmm1 = xmm4; /* movaps */
    xmm1 = xmm1 - MEMF(esi + 0x48); /* subss */
    if ((xmm3 <= xmm0)) { sub_001FFED1(); return; } /* jbe: below or equal (unsigned <=) */

loc_001FFECB: ;
    xmm0 = xmm0 / xmm3; /* divss */
    g_seh_ebp = ebp; sub_001FFEFB(); return; /* tail jmp 0x001FFEFB */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_001FFF30
 * Original: 0x001FFF30 - 0x00200043 (275 bytes, 93 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FFF30(void)
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

loc_001FFF30: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebx = eax;
    PUSH32(esp, edi);
    MEM8(ebx + 4) = 1;
    PUSH32(esp, 0); sub_0042B72A(); /* call 0x0042B72A */

loc_001FFF40: ;
    MEM32(ebx + 0x10) = eax;
    eax = MEM32(ebx);
    edx = MEM32(eax + 4);
    edi = MEM32(eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5F76EC);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003F9CB0(); /* call 0x003F9CB0 */

loc_001FFF5A: ;
    esp = esp + 0xC;
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    eax = 0x5F654C;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_001FFF6B; /* je: equal / zero */

loc_001FFF67: ;
    eax = MEM32(esp + 0x10);

loc_001FFF6B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0047054A(); /* call 0x0047054A */

loc_001FFF71: ;
    MEM32(ebx + 8) = eax;
    eax = MEM32(ebx);
    edx = MEM32(eax + 4);
    edi = MEM32(eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5F76D8);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003F9CB0(); /* call 0x003F9CB0 */

loc_001FFF8B: ;
    esp = esp + 0x10;
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    eax = 0x5F654C;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_001FFF9C; /* je: equal / zero */

loc_001FFF98: ;
    eax = MEM32(esp + 0x10);

loc_001FFF9C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470155(); /* call 0x00470155 */

loc_001FFFA2: ;
    MEMF(ebx + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    eax = MEM32(ebx);
    edx = MEM32(eax + 4);
    edi = MEM32(eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5F76C4);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003F9CB0(); /* call 0x003F9CB0 */

loc_001FFFBC: ;
    esp = esp + 0x10;
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    eax = 0x5F654C;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_001FFFCD; /* je: equal / zero */

loc_001FFFC9: ;
    eax = MEM32(esp + 0x10);

loc_001FFFCD: ;
    esi = ebx + 0x4C;
    PUSH32(esp, esi);
    edi = ebx + 0x48;
    PUSH32(esp, edi);
    ebp = ebx + 0x44;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x5F76B0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0047054F(); /* call 0x0047054F */

loc_001FFFE4: ;
    fp_push((double)SMEM32(ebx + 8)); /* fild */
    eax = MEM32(ebx + 8);
    esp = esp + 0x14;
    if (CMP_GE(eax & eax, 0)) goto loc_001FFFF7; /* jge: greater or equal (signed >=) */

loc_001FFFF1: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_001FFFF7: ;
    /* FPU: fdivr dword ptr [ebx + 0xc] */
    xmm0 = MEMF(0x648D14); /* movss */
    xmm1 = MEMF(ebp); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fst */
    MEMF(ebx + 0x40) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0 = xmm0 / MEMF(esp + 0x20); /* divss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(ebp) = xmm1; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(edi); /* mulss */
    xmm0 = xmm0 * MEMF(esi); /* mulss */
    MEMF(edi) = xmm1; /* movss */
    MEMF(esi) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002000A0(); /* call 0x002000A0 */

loc_0020003D: ;
    POP32(esp, edi);
    POP32(esp, esi);
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
 * sub_00200050
 * Original: 0x00200050 - 0x0020009B (75 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00200050(void)
{
    int _flags = 0; /* fallback flag var */

loc_00200050: ;
    PUSH32(esp, ebx);
    ebx = eax;
    SET_LO8(eax, MEM8(ebx + 4));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00200099; /* je: equal / zero */

loc_0020005A: ;
    ecx = MEM32(ebx + 0x14);
    PUSH32(esp, 0);
    SET_LO8(eax, 0xFF);
    PUSH32(esp, 0);
    MEM8(0x776171) = LO8(eax);
    MEM8(0x776170) = LO8(eax);
    MEM8(0x77616F) = LO8(eax);
    SET_LO8(eax, MEM8(ebx + 0x18));
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    MEM8(0x77616E) = LO8(eax);
    PUSH32(esp, 0); sub_002000A0(); /* call 0x002000A0 */

loc_00200082: ;
    edx = MEM32(ebx + 0x24);
    ecx = MEM32(ebx + 0x14);
    eax = (uint32_t)((int32_t)eax >> 1);
    edx = edx - eax;
    eax = MEM32(ebx + 0x20);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002000A0(); /* call 0x002000A0 */

loc_00200099: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002000A0
 * Original: 0x002000A0 - 0x00200158 (184 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002000A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002000A0: ;
    esp = esp - 0x14;
    eax = 0; /* xor self */
    MEM32(esp + 6) = eax;
    PUSH32(esp, ebp);
    MEM32(esp + 0xE) = eax;
    PUSH32(esp, esi);
    MEM32(esp + 0x16) = eax;
    PUSH32(esp, edi);
    MEM16(esp + 0x10) = 0;
    MEM16(esp + 0x1E) = LO16(eax);
    ebp = 1;

loc_002000C5: ;
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5F76A4);
    edx = esp + 0x1C;
    PUSH32(esp, 7);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046EE4A(); /* call 0x0046EE4A */

loc_002000DC: ;
    eax = MEM32(ebx);
    esp = esp + 0x14;
    (void)0; /* cmp MEM16(esp + 0x10), 0 - flags set for next jcc */
    MEM16(esp + 0x1E) = 0;
    if (CMP_EQ(MEM16(esp + 0x10), 0)) goto loc_00200152; /* je: equal / zero */

loc_002000F0: ;
    edi = MEM32(eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 4);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003F9CB0(); /* call 0x003F9CB0 */

loc_00200105: ;
    esp = esp + 0xC;
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_00200114; /* jne: not equal / not zero */

loc_0020010D: ;
    esi = 0x5F654C;
    goto loc_00200122;

loc_00200114: ;
    esi = MEM32(esp + 0xC);
    if (TEST_Z(esi, esi)) goto loc_00200152; /* je: equal / zero */

loc_0020011C: ;
    if (CMP_EQ(MEM16(esi), 0)) goto loc_00200152; /* je: equal / zero */

loc_00200122: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x5F7698);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00470585(); /* call 0x00470585 */

loc_0020012F: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) { sub_00200158(); return; } /* je: equal / zero */

loc_00200136: ;
    edx = MEM32(esp + 0x28);
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x38);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00200170(); /* call 0x00200170 */

loc_0020014C: ;
    esi = esi + eax;
    MEM32(esp + 0x30) = esi;

loc_00200152: ;
    ebp++;
    goto loc_002000C5;

}

/**
 * sub_00200170
 * Original: 0x00200170 - 0x0020021F (175 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00200170(void)
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

loc_00200170: ;
    esp = esp - 0xA8;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xB4);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC4);
    PUSH32(esp, edi);
    edx = 0; /* xor self */
    eax = 0; /* xor self */
    MEM16(esp + 0x18) = LO16(edx);
    ecx = 0x27;
    edi = esp + 0x1A;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += 2; /* stosw */
    ebx = 0; /* xor self */
    edi = 0; /* xor self */
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x14) = edi;
    /* nop */
    eax = ZX16(MEM16(esi));
    if (CMP_EQ(eax, edx)) { sub_0020021F(); return; } /* je: equal / zero */

loc_002001B7: ;
    if (CMP_EQ(eax, 0x2C)) goto loc_002001FD; /* je: equal / zero */

loc_002001BC: ;
    if (CMP_NE(eax, 0x3C)) goto loc_002001F2; /* jne: not equal / not zero */

loc_002001C1: ;
    eax = ZX16(MEM16(esi + 2));
    if (CMP_EQ(eax, 0x40)) goto loc_002001DC; /* je: equal / zero */

loc_002001CA: ;
    if (CMP_NE(eax, 0x192)) goto loc_002001F2; /* jne: not equal / not zero */

loc_002001D1: ;
    ecx = esi;
    edx = ebp;
    PUSH32(esp, 0); sub_002002C0(); /* call 0x002002C0 */

loc_002001DA: ;
    goto loc_002001E9;

loc_002001DC: ;
    ecx = esi;
    edi = ebp;
    PUSH32(esp, 0); sub_00200340(); /* call 0x00200340 */

loc_002001E5: ;
    edi = MEM32(esp + 0x14);

loc_002001E9: ;
    if (TEST_Z(eax, eax)) goto loc_002001F2; /* je: equal / zero */

loc_002001ED: ;
    esi = esi + eax * 2;
    g_seh_ebp = ebp; sub_00200221(); return; /* tail jmp 0x00200221 */

loc_002001F2: ;
    SET_LO16(eax, MEM16(esi));
    MEM16(esp + ebx * 2 + 0x18) = LO16(eax);
    ebx++;
    g_seh_ebp = ebp; sub_00200221(); return; /* tail jmp 0x00200221 */

loc_002001FD: ;
    edx = MEM32(ebp + 0x1C);
    fp_push((double)SMEM32(ebp + 0x1C)); /* fild */
    (void)0; /* test edx, edx - flags set for next jcc */
    ecx = MEM32(ebp + 0x38);
    if (CMP_GE(edx & edx, 0)) goto loc_00200210; /* jge: greater or equal (signed >=) */

loc_0020020A: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_00200210: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00200219: ;
    MEM32(esp + 0x10) = eax;
    g_seh_ebp = ebp; sub_00200221(); return; /* tail jmp 0x00200221 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_002002C0
 * Original: 0x002002C0 - 0x00200315 (85 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002002C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002002C0: ;
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(ecx));
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    if (TEST_Z(LO16(eax), LO16(eax))) goto loc_002002E1; /* je: equal / zero */

loc_002002CD: ;
    /* nop */

loc_002002D0: ;
    if (CMP_EQ(LO16(eax), 0x3E)) goto loc_002002E1; /* je: equal / zero */

loc_002002D6: ;
    SET_LO16(eax, MEM16(ecx + esi * 2 + 2));
    esi++;
    if (TEST_NZ(LO16(eax), LO16(eax))) goto loc_002002D0; /* jne: not equal / not zero */

loc_002002E1: ;
    eax = ZX16(MEM16(ecx + 4));
    if (CMP_EQ(eax, 0x3A)) { sub_00200315(); return; } /* je: equal / zero */

loc_002002EA: ;
    if (CMP_EQ(eax, 0x3D)) goto loc_00200302; /* je: equal / zero */

loc_002002EF: ;
    eax = eax + 0xFFFFFFD0u;
    if (CMP_AE(eax, 4)) goto loc_002002FE; /* jae: above or equal (unsigned >=) */

loc_002002F7: ;
    MEM32(edx + 0x38) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002002FE: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00200302: ;
    eax = ZX16(MEM16(ecx + 6));
    eax = eax - 0x30;
    if (CMP_AE(eax, 4)) goto loc_002002FE; /* jae: above or equal (unsigned >=) */

loc_0020030E: ;
    MEM32(edx + 0x3C) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00200340
 * Original: 0x00200340 - 0x0020039D (93 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00200340(void)
{
    int _flags = 0; /* fallback flag var */

loc_00200340: ;
    esp = esp - 8;
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(ecx));
    PUSH32(esp, esi);
    edx = 0; /* xor self */
    esi = 0; /* xor self */
    if (CMP_EQ(LO16(eax), LO16(edx))) goto loc_00200363; /* je: equal / zero */

loc_00200352: ;
    if (CMP_EQ(LO16(eax), 0x3E)) goto loc_00200363; /* je: equal / zero */

loc_00200358: ;
    SET_LO16(eax, MEM16(ecx + esi * 2 + 2));
    esi++;
    if (CMP_NE(LO16(eax), LO16(edx))) goto loc_00200352; /* jne: not equal / not zero */

loc_00200363: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = edx;
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x5F7658);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0047054F(); /* call 0x0047054F */

loc_00200380: ;
    esp = esp + 0x10;
    if (CMP_NE(eax, 2)) { sub_0020039D(); return; } /* jne: not equal / not zero */

loc_00200388: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    MEM32(edi + 0x20) = eax;
    eax = esi;
    MEM32(edi + 0x24) = ecx;
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_002003B0
 * Original: 0x002003B0 - 0x002003B3 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002003B0(void)
{

loc_002003B0: ;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_002003C0
 * Original: 0x002003C0 - 0x002003E7 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002003C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002003C0: ;
    (void)0; /* test MEM8(esp + 4), 1 - flags set for next jcc */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x5F7704;
    if (TEST_Z(MEM8(esp + 4), 1)) goto loc_002003E1; /* je: equal / zero */

loc_002003D0: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_002003DE: ;
    esp = esp + 4;

loc_002003E1: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002003F0
 * Original: 0x002003F0 - 0x00200425 (53 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002003F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002003F0: ;
    if (CMP_EQ(MEM32(esi), 0)) goto loc_00200410; /* je: equal / zero */

loc_002003F5: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx);
    eax = esi + 4;
    edx--;
    MEM32(ecx) = edx;
    ecx = MEM32(eax);
    if (CMP_NE(MEM32(ecx), 0)) goto loc_00200410; /* jne: not equal / not zero */

loc_00200407: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0020040D: ;
    esp = esp + 4;

loc_00200410: ;
    edx = MEM32(edi + 4);
    MEM32(esi + 4) = edx;
    eax = MEM32(edi);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi) = eax;
    if (TEST_Z(eax, eax)) goto loc_00200422; /* je: equal / zero */

loc_0020041E: ;
    eax = edx;
    MEM32(eax) = MEM32(eax) + 1;

loc_00200422: ;
    eax = esi;
    esp += 4; return; /* ret */

}

/**
 * sub_00200430
 * Original: 0x00200430 - 0x002004FF (207 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00200430(void)
{
    float xmm0;

loc_00200430: ;
    ecx = MEM32(eax);
    MEMF(ecx) = xmm0; /* movss */
    edx = MEM32(eax);
    xmm0 = MEMF(esp + 4); /* movss */
    edx = edx + 4;
    MEM32(eax) = edx;
    ecx = edx;
    MEMF(ecx) = xmm0; /* movss */
    ecx = MEM32(eax);
    xmm0 = MEMF(esp + 8); /* movss */
    ecx = ecx + 4;
    MEM32(eax) = ecx;
    MEMF(ecx) = xmm0; /* movss */
    edx = MEM32(eax);
    xmm0 = MEMF(esp + 0x10); /* movss */
    edx = edx + 4;
    MEM32(eax) = edx;
    ecx = edx;
    edx = MEM32(esp + 0xC);
    edx = MEM32(edx);
    MEM32(ecx) = edx;
    ecx = MEM32(eax);
    ecx = ecx + 4;
    MEM32(eax) = ecx;
    MEMF(ecx) = xmm0; /* movss */
    edx = MEM32(eax);
    xmm0 = MEMF(esp + 0x14); /* movss */
    edx = edx + 4;
    MEM32(eax) = edx;
    ecx = edx;
    MEMF(ecx) = xmm0; /* movss */
    ecx = MEM32(eax);
    xmm0 = MEMF(esp + 0x18); /* movss */
    ecx = ecx + 4;
    MEM32(eax) = ecx;
    MEMF(ecx) = xmm0; /* movss */
    edx = MEM32(eax);
    xmm0 = MEMF(esp + 0x1C); /* movss */
    edx = edx + 4;
    MEM32(eax) = edx;
    ecx = edx;
    MEMF(ecx) = xmm0; /* movss */
    ecx = MEM32(eax);
    xmm0 = MEMF(esp + 0x20); /* movss */
    ecx = ecx + 4;
    MEM32(eax) = ecx;
    MEMF(ecx) = xmm0; /* movss */
    edx = MEM32(eax);
    xmm0 = MEMF(esp + 0x24); /* movss */
    edx = edx + 4;
    MEM32(eax) = edx;
    ecx = edx;
    MEMF(ecx) = xmm0; /* movss */
    ecx = MEM32(eax);
    xmm0 = MEMF(esp + 0x28); /* movss */
    ecx = ecx + 4;
    MEM32(eax) = ecx;
    MEMF(ecx) = xmm0; /* movss */
    edx = MEM32(eax);
    xmm0 = MEMF(esp + 0x2C); /* movss */
    edx = edx + 4;
    MEM32(eax) = edx;
    ecx = edx;
    MEMF(ecx) = xmm0; /* movss */
    MEM32(eax) = MEM32(eax) + 4;
    esp += 4; return; /* ret */

}

/**
 * sub_00200500
 * Original: 0x00200500 - 0x0020054A (74 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00200500(void)
{
    float xmm0;

loc_00200500: ;
    xmm0 = 0.0f; /* xorps self = zero */
    eax = ecx;
    ecx = 0; /* xor self */
    MEM8(eax + 0x100) = LO8(ecx);
    MEM8(eax + 0x101) = LO8(ecx);
    MEM8(eax + 0x102) = LO8(ecx);
    MEM8(eax + 0x103) = LO8(ecx);
    MEMF(eax + 0x104) = xmm0; /* movss */
    MEM8(eax + 0x108) = LO8(ecx);
    MEM8(eax + 0x109) = LO8(ecx);
    MEM8(eax + 0x10A) = LO8(ecx);
    MEM8(eax + 0x189) = LO8(ecx);
    MEM16(eax) = LO16(ecx);
    MEM16(eax + 0x80) = LO16(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00200550
 * Original: 0x00200550 - 0x002005E0 (144 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00200550(void)
{
    int _flags = 0; /* fallback flag var */

loc_00200550: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0046FCD6(); /* call 0x0046FCD6 */

loc_00200559: ;
    PUSH32(esp, 0x40);
    eax = esi + 0x80;
    PUSH32(esp, eax);
    ecx = edi + 0x80;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046FCD6(); /* call 0x0046FCD6 */

loc_0020056E: ;
    SET_LO8(edx, MEM8(esi + 0x102));
    MEM8(edi + 0x102) = LO8(edx);
    SET_LO8(eax, MEM8(esi + 0x100));
    MEM8(edi + 0x100) = LO8(eax);
    SET_LO8(ecx, MEM8(esi + 0x101));
    MEM8(edi + 0x101) = LO8(ecx);
    SET_LO8(edx, MEM8(esi + 0x103));
    MEM8(edi + 0x103) = LO8(edx);
    eax = MEM32(esi + 0x104);
    MEM32(edi + 0x104) = eax;
    SET_LO8(ecx, MEM8(esi + 0x108));
    MEM8(edi + 0x108) = LO8(ecx);
    SET_LO8(edx, MEM8(esi + 0x109));
    MEM8(edi + 0x109) = LO8(edx);
    eax = esi + 0x10A;
    edx = edi + 0x10A;
    esp = esp + 0x18;
    edx = edx - eax;

loc_002005D3: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_002005D3; /* jne: not equal / not zero */

loc_002005DD: ;
    eax = edi;
    esp += 4; return; /* ret */

}

/**
 * sub_002005E0
 * Original: 0x002005E0 - 0x0020063F (95 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002005E0(void)
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

loc_002005E0: ;
    esp = esp - 0x60C;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x614);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    PUSH32(esp, 0); sub_0042B72A(); /* call 0x0042B72A */

loc_002005F7: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0xC) = eax;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    if (CMP_GE(eax & eax, 0)) goto loc_00200609; /* jge: greater or equal (signed >=) */

loc_00200603: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_00200609: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    SET_LO8(eax, MEM8(esi + 0x190));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_0020063F(); return; } /* je: equal / zero */

loc_0020061D: ;
    eax = esi + 0x192;
    PUSH32(esp, eax);
    esi = esi + 0x80;
    PUSH32(esp, esi);
    ecx = esp + 0x20;
    PUSH32(esp, 0x5F9B0C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046F583(); /* call 0x0046F583 */

loc_0020063A: ;
    esp = esp + 0x10;
    g_seh_ebp = ebp; sub_00200658(); return; /* tail jmp 0x00200658 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00200700
 * Original: 0x00200700 - 0x00200754 (84 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00200700(void)
{
    float xmm0;

loc_00200700: ;
    xmm0 = 0.0f; /* xorps self = zero */
    ecx = 0; /* xor self */
    MEM8(eax + 0x100) = LO8(ecx);
    MEM8(eax + 0x101) = LO8(ecx);
    MEM8(eax + 0x102) = LO8(ecx);
    MEM8(eax + 0x103) = LO8(ecx);
    MEMF(eax + 0x104) = xmm0; /* movss */
    MEM8(eax + 0x108) = LO8(ecx);
    MEM8(eax + 0x109) = LO8(ecx);
    MEM8(eax + 0x10A) = LO8(ecx);
    MEM8(eax + 0x189) = LO8(ecx);
    MEM16(eax) = LO16(ecx);
    MEM16(eax + 0x80) = LO16(ecx);
    MEM8(eax + 0x190) = LO8(ecx);
    MEM8(eax + 0x191) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00200760
 * Original: 0x00200760 - 0x00200856 (246 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00200760(void)
{
    float xmm0;

loc_00200760: ;
    xmm0 = MEMF(0x648E5C); /* movss */
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    PUSH32(esp, esi);
    esi = ecx;
    MEMF(esi + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    PUSH32(esp, edi);
    eax = esi + 0x58;
    MEM32(esi) = ebx;
    MEM32(esi + 4) = 0xD;
    MEM32(esi + 8) = ebx;
    MEM32(esi + 0xC) = ebx;
    MEM32(esi + 0x10) = ebx;
    MEM32(esi + 0x34) = 5;
    MEMF(esi + 0x38) = xmm0; /* movss */
    MEM32(esi + 0x44) = ebx;
    MEM32(esi + 0x48) = ebx;
    MEM32(esi + 0x50) = ebx;
    PUSH32(esp, 0); sub_00200700(); /* call 0x00200700 */

loc_002007AB: ;
    eax = esi + 0x3F0;
    PUSH32(esp, 0); sub_00200700(); /* call 0x00200700 */

loc_002007B6: ;
    eax = esi + 0x78C;
    PUSH32(esp, 0); sub_00200700(); /* call 0x00200700 */

loc_002007C1: ;
    eax = esi + 0xB24;
    PUSH32(esp, 0); sub_00200700(); /* call 0x00200700 */

loc_002007CC: ;
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(esi + 0xEBC) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(esi + 0xEC0) = ebx;
    MEM32(esi + 0xEC4) = ebx;
    MEM8(esi + 0xEC8) = LO8(ebx);
    MEM32(esi + 0x101C) = ebx;
    MEM32(esi + 0x1020) = ebx;
    MEM32(esi + 0x1024) = ebx;
    MEM32(esi + 0x1028) = ebx;
    MEM8(esi + 0x1038) = LO8(ebx);
    MEMF(esi + 0x102C) = xmm0; /* movss */
    MEMF(esi + 0x1030) = xmm0; /* movss */
    MEMF(esi + 0x1034) = xmm0; /* movss */
    eax = 0; /* xor self */
    ecx = esi + 0xECC;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = eax;
    MEM32(ecx + 0x14) = eax;
    MEM32(ecx + 0x18) = eax;
    edi = esi + 0xEE8;
    ecx = 0x4D;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00200860
 * Original: 0x00200860 - 0x00200A58 (504 bytes, 95 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00200860(void)
{
    float xmm0;

loc_00200860: ;
    ecx = MEM32(ebx + 0x101C);
    eax = MEM32(ebx);
    edx = MEM32(ebx + 0x1020);
    MEM32(0x849A7C) = ecx;
    ecx = MEM32(ebx + 0x1028);
    MEM32(0x849944) = ecx;
    PUSH32(esp, esi);
    MEM32(0x849ACC) = eax;
    eax = MEM32(ebx + 0x1024);
    PUSH32(esp, edi);
    MEM32(0x849A80) = edx;
    MEM32(0x849940) = eax;
    esi = ebx + 0xEE8;
    ecx = 0x4D;
    edi = 0x849948;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    edx = MEM32(ebx + 4);
    xmm0 = MEMF(ebx + 0x14); /* movss */
    eax = MEM32(ebx + 8);
    ecx = MEM32(ebx + 0xC);
    MEMF(0x7768F4) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0x18); /* movss */
    MEM32(0x6BD4BC) = edx;
    edx = MEM32(ebx + 0x10);
    MEMF(0x7768F0) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0x1C); /* movss */
    MEMF(0x7768EC) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0x20); /* movss */
    MEMF(0x6BD4C4) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0x24); /* movss */
    MEMF(0x7768E8) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0x28); /* movss */
    MEMF(0x7768E4) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0x2C); /* movss */
    MEMF(0x7768E0) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0x30); /* movss */
    MEMF(0x7768DC) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0x38); /* movss */
    MEM32(0x84990C) = eax;
    eax = MEM32(ebx + 0x34);
    MEMF(0x6BD4CC) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0x3C); /* movss */
    MEMF(0x7768D8) = xmm0; /* movss */
    MEM32(0x849910) = ecx;
    ecx = MEM32(ebx + 0x40);
    MEM32(0x849914) = edx;
    edx = MEM32(ebx + 0x44);
    MEM32(0x849924) = edx;
    edx = MEM32(ebx + 0x50);
    MEM32(0x6BD4C8) = eax;
    eax = MEM32(ebx + 0x48);
    MEM32(0x7768D4) = ecx;
    ecx = MEM32(ebx + 0x4C);
    MEM32(0x849928) = eax;
    MEM32(0x84992C) = edx;
    SET_LO8(eax, MEM8(ebx + 0x54));
    MEM32(0x7768D0) = ecx;
    MEM8(0x849930) = LO8(eax);
    eax = ebx + 0x58;
    ecx = 0x84C298;
    PUSH32(esp, 0); sub_00200C60(); /* call 0x00200C60 */

loc_00200998: ;
    eax = ebx + 0x3F0;
    ecx = 0x84C630;
    PUSH32(esp, 0); sub_00200C60(); /* call 0x00200C60 */

loc_002009A8: ;
    SET_LO8(ecx, MEM8(ebx + 0x788));
    MEM8(0x849931) = LO8(ecx);
    eax = ebx + 0x78C;
    ecx = 0x84C9C8;
    PUSH32(esp, 0); sub_00200C60(); /* call 0x00200C60 */

loc_002009C4: ;
    eax = ebx + 0xB24;
    ecx = 0x84CD60;
    PUSH32(esp, 0); sub_00200C60(); /* call 0x00200C60 */

loc_002009D4: ;
    edx = MEM32(ebx + 0xEC0);
    eax = MEM32(ebx + 0xEC4);
    SET_LO8(ecx, MEM8(ebx + 0xEC8));
    xmm0 = MEMF(ebx + 0xEBC); /* movss */
    MEMF(0x6BD4D0) = xmm0; /* movss */
    MEM32(0x849934) = edx;
    MEM32(0x849938) = eax;
    MEM8(0x84993C) = LO8(ecx);
    esi = ebx + 0xECC;
    xmm0 = MEMF(ebx + 0x102C); /* movss */
    ecx = 7;
    edi = 0x849A84;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEMF(0x849918) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0x1030); /* movss */
    MEMF(0x84991C) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0x1034); /* movss */
    MEMF(0x849920) = xmm0; /* movss */
    SET_LO8(edx, MEM8(ebx + 0x1038));
    POP32(esp, edi);
    MEM8(0x849AD8) = LO8(edx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00200A60
 * Original: 0x00200A60 - 0x00200C58 (504 bytes, 95 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00200A60(void)
{
    float xmm0;

loc_00200A60: ;
    ecx = MEM32(0x849A7C);
    eax = MEM32(0x849ACC);
    edx = MEM32(0x849A80);
    xmm0 = MEMF(0x7768F4); /* movss */
    MEM32(ebx + 0x101C) = ecx;
    ecx = MEM32(0x849944);
    MEM32(ebx) = eax;
    eax = MEM32(0x849940);
    MEM32(ebx + 0x1028) = ecx;
    MEM32(ebx + 0x1024) = eax;
    eax = MEM32(0x84990C);
    MEM32(ebx + 0x1020) = edx;
    edx = MEM32(0x6BD4BC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ebx + 0xEE8;
    ecx = 0x4D;
    esi = 0x849948;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = MEM32(0x849910);
    MEM32(ebx + 4) = edx;
    edx = MEM32(0x849914);
    MEM32(ebx + 8) = eax;
    eax = MEM32(0x6BD4C8);
    MEM32(ebx + 0xC) = ecx;
    ecx = MEM32(0x7768D4);
    MEMF(ebx + 0x14) = xmm0; /* movss */
    MEM32(ebx + 0x10) = edx;
    xmm0 = MEMF(0x7768F0); /* movss */
    MEMF(ebx + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(0x7768EC); /* movss */
    MEMF(ebx + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(0x6BD4C4); /* movss */
    MEMF(ebx + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(0x7768E8); /* movss */
    MEMF(ebx + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(0x7768E4); /* movss */
    MEMF(ebx + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(0x7768E0); /* movss */
    MEMF(ebx + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(0x7768DC); /* movss */
    MEM32(ebx + 0x34) = eax;
    eax = MEM32(0x849928);
    MEMF(ebx + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(0x6BD4CC); /* movss */
    MEMF(ebx + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(0x7768D8); /* movss */
    MEM32(ebx + 0x40) = ecx;
    ecx = MEM32(0x7768D0);
    MEMF(ebx + 0x3C) = xmm0; /* movss */
    edx = MEM32(0x849924);
    MEM32(ebx + 0x48) = eax;
    SET_LO8(eax, MEM8(0x849930));
    MEM32(ebx + 0x4C) = ecx;
    MEM32(ebx + 0x44) = edx;
    edx = MEM32(0x84992C);
    MEM8(ebx + 0x54) = LO8(eax);
    ecx = ebx + 0x58;
    eax = 0x84C298;
    MEM32(ebx + 0x50) = edx;
    PUSH32(esp, 0); sub_00200C60(); /* call 0x00200C60 */

loc_00200B98: ;
    ecx = ebx + 0x3F0;
    eax = 0x84C630;
    PUSH32(esp, 0); sub_00200C60(); /* call 0x00200C60 */

loc_00200BA8: ;
    SET_LO8(ecx, MEM8(0x849931));
    MEM8(ebx + 0x788) = LO8(ecx);
    ecx = ebx + 0x78C;
    eax = 0x84C9C8;
    PUSH32(esp, 0); sub_00200C60(); /* call 0x00200C60 */

loc_00200BC4: ;
    ecx = ebx + 0xB24;
    eax = 0x84CD60;
    PUSH32(esp, 0); sub_00200C60(); /* call 0x00200C60 */

loc_00200BD4: ;
    edx = MEM32(0x849934);
    eax = MEM32(0x849938);
    SET_LO8(ecx, MEM8(0x84993C));
    xmm0 = MEMF(0x6BD4D0); /* movss */
    MEMF(ebx + 0xEBC) = xmm0; /* movss */
    MEM32(ebx + 0xEC0) = edx;
    MEM32(ebx + 0xEC4) = eax;
    MEM8(ebx + 0xEC8) = LO8(ecx);
    edi = ebx + 0xECC;
    SET_LO8(edx, MEM8(0x849AD8));
    ecx = 7;
    esi = 0x849A84;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    xmm0 = MEMF(0x849918); /* movss */
    MEMF(ebx + 0x102C) = xmm0; /* movss */
    xmm0 = MEMF(0x84991C); /* movss */
    MEMF(ebx + 0x1030) = xmm0; /* movss */
    xmm0 = MEMF(0x849920); /* movss */
    POP32(esp, edi);
    MEMF(ebx + 0x1034) = xmm0; /* movss */
    MEM8(ebx + 0x1038) = LO8(edx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00200C60
 * Original: 0x00200C60 - 0x00200CB6 (86 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00200C60(void)
{

loc_00200C60: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    edi = ecx;
    PUSH32(esp, 0); sub_00200550(); /* call 0x00200550 */

loc_00200C6B: ;
    SET_LO8(eax, MEM8(esi + 0x18C));
    MEM8(edi + 0x18C) = LO8(eax);
    SET_LO8(ecx, MEM8(esi + 0x190));
    MEM8(edi + 0x190) = LO8(ecx);
    SET_LO8(edx, MEM8(esi + 0x191));
    eax = esi + 0x192;
    PUSH32(esp, eax);
    ecx = edi + 0x192;
    PUSH32(esp, ecx);
    MEM8(edi + 0x191) = LO8(edx);
    PUSH32(esp, 0); sub_0046E49A(); /* call 0x0046E49A */

loc_00200CA2: ;
    edx = MEM32(esi + 0x394);
    esp = esp + 8;
    MEM32(edi + 0x394) = edx;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00200CC0
 * Original: 0x00200CC0 - 0x00200CF5 (53 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00200CC0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00200CC0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM8(ebp + 0x1C) = LO8(ebx);
    MEM32(ebp + 0x20) = esi;
    MEM8(ebp + 0x70) = LO8(ebx);
    MEM8(ebp + 0x7C) = LO8(ebx);
    MEM8(ebp + 0x7D) = LO8(ebx);
    if (CMP_NE(eax, ebx)) goto loc_00200CE4; /* jne: not equal / not zero */

loc_00200CDF: ;
    eax = 0x5D4FB4;

loc_00200CE4: ;
    (void)0; /* cmp MEM8(eax), LO8(ebx) - flags set for next jcc */
    ecx = ebp + 0x90;
    if (CMP_NE(MEM8(eax), LO8(ebx))) { sub_00200CF5(); return; } /* jne: not equal / not zero */

loc_00200CEE: ;
    MEM32(ecx + 4) = ebx;
    MEM32(ecx) = ebx;
    g_seh_ebp = ebp; sub_00200D02(); return; /* tail jmp 0x00200D02 */

}

/**
 * sub_00200DB0
 * Original: 0x00200DB0 - 0x00200EDB (299 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00200DB0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00200DB0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    eax = edi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0021ABE0(); /* call 0x0021ABE0 */

loc_00200DBC: ;
    PUSH32(esp, 0x43000000);
    PUSH32(esp, 0xC3000000u);
    PUSH32(esp, 0x43000000);
    PUSH32(esp, 0xC3000000u);
    PUSH32(esp, 0x776710);
    PUSH32(esp, 0); sub_00202870(); /* call 0x00202870 */

loc_00200DDA: ;
    ecx = MEM32(0x84B868);
    PUSH32(esp, 0x43000000);
    PUSH32(esp, 0x43000000);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00218880(); /* call 0x00218880 */

loc_00200DF0: ;
    esi = MEM32(0x5499E8);
    eax = MEM32(esi);
    ecx = MEM32(esi + 4);
    esp = esp + 0x28;
    if (CMP_B(eax, ecx)) goto loc_00200E11; /* jb: below (unsigned <) */

loc_00200E02: ;
    eax = MEM32(0x54A8B8);
    edx = eax;
    edx = edx >> 1;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_00200E11: ;
    MEM32(eax) = 0x4030C;
    ebx = 0; /* xor self */
    MEM32(eax + 4) = ebx;
    ecx = MEM32(0x549B40);
    MEM32(eax + 8) = 0x41D78;
    MEM32(eax + 0xC) = ecx;
    eax = eax + 0x10;
    MEM32(esi) = eax;
    eax = MEM32(0x549C34);
    (void)0; /* cmp eax, 2 - flags set for next jcc */
    MEM32(0x549C34) = ebx;
    if (CMP_NE(eax, 2)) goto loc_00200E70; /* jne: not equal / not zero */

loc_00200E41: ;
    PUSH32(esp, 0); sub_005384E0(); /* call 0x005384E0 */

loc_00200E46: ;
    PUSH32(esp, 0); sub_00536810(); /* call 0x00536810 */

loc_00200E4B: ;
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_00200E61; /* jb: below (unsigned <) */

loc_00200E52: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_00200E61: ;
    PUSH32(esp, esi);
    edx = eax;
    PUSH32(esp, 0); sub_00538030(); /* call 0x00538030 */

loc_00200E69: ;
    PUSH32(esp, 0); sub_00537E30(); /* call 0x00537E30 */

loc_00200E6E: ;
    MEM32(esi) = eax;

loc_00200E70: ;
    xmm0 = MEMF(0x648FA0); /* movss */
    PUSH32(esp, 0x3ECCCCCD);
    MEMF(edi + 8) = xmm0; /* movss */
    MEMF(edi + 0xC) = xmm0; /* movss */
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3FA00000);
    MEM8(0x807664) = 0xFF;
    MEM8(0x807665) = 0xAF;
    MEM8(0x807666) = LO8(ebx);
    MEM32(0x8076B0) = ebx;
    PUSH32(esp, 0); sub_00218BC0(); /* call 0x00218BC0 */

loc_00200EB0: ;
    xmm0 = MEMF(0x6BD4C4); /* movss */
    xmm0 = xmm0 * MEMF(0x649228); /* mulss */
    esp = esp + 0xC;
    MEMF(edi + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(0x648D40); /* movss */
    POP32(esp, esi);
    MEM32(edi + 0x18) = ebx;
    MEMF(edi + 0x14) = xmm0; /* movss */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00200EE0
 * Original: 0x00200EE0 - 0x0020109F (447 bytes, 124 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00200EE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00200EE0: ;
    esp = esp - 0x384;
    PUSH32(esp, esi);
    esi = eax;
    if (TEST_Z(esi, esi)) { sub_0020109F(); return; } /* je: equal / zero */

loc_00200EF1: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x7F);
    PUSH32(esp, 0x5F6538);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    MEM32(esp + 0x18) = 0;
    PUSH32(esp, 0); sub_0042DD7A(); /* call 0x0042DD7A */

loc_00200F0C: ;
    eax = esi + -1;
    if (CMP_A(eax, 9)) goto loc_00201080; /* ja: above (unsigned >) */

loc_00200F18: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x2010AC); /* switch: 10 entries, 10 targets */
    if (_jt == 0x00200F1Fu) goto loc_00200F1F;
    if (_jt == 0x00200F32u) goto loc_00200F32;
    if (_jt == 0x00200F45u) goto loc_00200F45;
    if (_jt == 0x00200F58u) goto loc_00200F58;
    if (_jt == 0x00200F6Bu) goto loc_00200F6B;
    if (_jt == 0x00200F96u) goto loc_00200F96;
    if (_jt == 0x00200FC5u) goto loc_00200FC5;
    if (_jt == 0x00200FF5u) goto loc_00200FF5;
    if (_jt == 0x00201022u) goto loc_00201022;
    if (_jt == 0x00201052u) goto loc_00201052;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00200F1F: ;
    ebx = 0x5F9A28;
    edi = esp + 0x10;
    PUSH32(esp, 0); sub_00065540(); /* call 0x00065540 */

loc_00200F2D: ;
    goto loc_00201080;

loc_00200F32: ;
    ebx = 0x5F9A20;
    edi = esp + 0x10;
    PUSH32(esp, 0); sub_00065540(); /* call 0x00065540 */

loc_00200F40: ;
    goto loc_00201080;

loc_00200F45: ;
    ebx = 0x5F9A18;
    edi = esp + 0x10;
    PUSH32(esp, 0); sub_00065540(); /* call 0x00065540 */

loc_00200F53: ;
    goto loc_00201080;

loc_00200F58: ;
    ebx = 0x5F9A10;
    edi = esp + 0x10;
    PUSH32(esp, 0); sub_00065540(); /* call 0x00065540 */

loc_00200F66: ;
    goto loc_00201080;

loc_00200F6B: ;
    PUSH32(esp, 0x7F);
    PUSH32(esp, 0x5F567C);
    ecx = esp + 0x198;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0042DD7A(); /* call 0x0042DD7A */

loc_00200F7F: ;
    eax = 0; /* xor self */

loc_00200F81: ;
    SET_LO8(ecx, MEM8(esp + eax + 0x190));
    MEM8(esp + eax + 0x10) = LO8(ecx);
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00200F81; /* jne: not equal / not zero */

loc_00200F91: ;
    goto loc_00201080;

loc_00200F96: ;
    PUSH32(esp, 0x7F);
    PUSH32(esp, 0x5F5658);
    edx = esp + 0x98;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042DD7A(); /* call 0x0042DD7A */

loc_00200FAA: ;
    eax = 0; /* xor self */
    /* nop */

loc_00200FB0: ;
    SET_LO8(ecx, MEM8(esp + eax + 0x90));
    MEM8(esp + eax + 0x10) = LO8(ecx);
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00200FB0; /* jne: not equal / not zero */

loc_00200FC0: ;
    goto loc_00201080;

loc_00200FC5: ;
    PUSH32(esp, 0x7F);
    PUSH32(esp, 0x5F99E4);
    eax = esp + 0x298;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042DD7A(); /* call 0x0042DD7A */

loc_00200FD9: ;
    eax = 0; /* xor self */
    goto loc_00200FE0;

    /* nop */

loc_00200FE0: ;
    SET_LO8(ecx, MEM8(esp + eax + 0x290));
    MEM8(esp + eax + 0x10) = LO8(ecx);
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00200FE0; /* jne: not equal / not zero */

loc_00200FF0: ;
    goto loc_00201080;

loc_00200FF5: ;
    PUSH32(esp, 0x7F);
    PUSH32(esp, 0x5F99B4);
    ecx = esp + 0x118;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0042DD7A(); /* call 0x0042DD7A */

loc_00201009: ;
    eax = 0; /* xor self */
    goto loc_00201010;

    /* nop */

loc_00201010: ;
    SET_LO8(ecx, MEM8(esp + eax + 0x110));
    MEM8(esp + eax + 0x10) = LO8(ecx);
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00201010; /* jne: not equal / not zero */

loc_00201020: ;
    goto loc_00201080;

loc_00201022: ;
    PUSH32(esp, 0x7F);
    PUSH32(esp, 0x5F9988);
    edx = esp + 0x218;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042DD7A(); /* call 0x0042DD7A */

loc_00201036: ;
    eax = 0; /* xor self */
    goto loc_00201040;

    /* nop */

loc_00201040: ;
    SET_LO8(ecx, MEM8(esp + eax + 0x210));
    MEM8(esp + eax + 0x10) = LO8(ecx);
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00201040; /* jne: not equal / not zero */

loc_00201050: ;
    goto loc_00201080;

loc_00201052: ;
    PUSH32(esp, 0x7F);
    PUSH32(esp, 0x5F995C);
    eax = esp + 0x318;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042DD7A(); /* call 0x0042DD7A */

loc_00201066: ;
    eax = 0; /* xor self */
    goto loc_00201070;

    /* nop */

loc_00201070: ;
    SET_LO8(ecx, MEM8(esp + eax + 0x310));
    MEM8(esp + eax + 0x10) = LO8(ecx);
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00201070; /* jne: not equal / not zero */

loc_00201080: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    esi = esp + 0x10;
    PUSH32(esp, 0); sub_00075D90(); /* call 0x00075D90 */

loc_0020108E: ;
    eax = MEM32(esp + 0x10);
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    esp = esp + 0x384;
    esp += 4; return; /* ret */

}

/**
 * sub_002010E0
 * Original: 0x002010E0 - 0x0020118E (174 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002010E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002010E0: ;
    esp = esp - 0x228;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3ECCCCCD);
    esi = ecx;
    edi = eax;
    eax = MEM32(esi + 0x18);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3FA00000);
    MEM32(esp + 0x20) = eax;
    MEM8(0x807664) = 0xFF;
    MEM8(0x807665) = 0xAF;
    MEM8(0x807666) = 0;
    MEM32(0x8076B0) = 0;
    PUSH32(esp, 0); sub_00218BC0(); /* call 0x00218BC0 */

loc_00201127: ;
    xmm0 = MEMF(0x6BD4C4); /* movss */
    xmm0 = xmm0 * MEMF(0x649228); /* mulss */
    eax = MEM32(esi + 0x20);
    MEMF(esi + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(0x648D40); /* movss */
    MEMF(esi + 0x14) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    esp = esp + 0xC;
    (void)0; /* cmp eax, 3 - flags set for next jcc */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEM32(esi + 0x18) = 0;
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    if (CMP_NE(eax, 3)) { sub_0020118E(); return; } /* jne: not equal / not zero */

loc_00201184: ;
    xmm0 = MEMF(0x648FB0); /* movss */
    g_seh_ebp = ebp; sub_002011B7(); return; /* tail jmp 0x002011B7 */

}

/**
 * sub_00201360
 * Original: 0x00201360 - 0x0020142D (205 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00201360(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00201360: ;
    esp = esp - 0x10;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3ECCCCCD);
    esi = ecx;
    edi = eax;
    eax = MEM32(esi + 0x18);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3FA00000);
    MEM32(esp + 0x18) = eax;
    MEM8(0x807664) = 0xFF;
    MEM8(0x807665) = 0xAF;
    MEM8(0x807666) = 0;
    MEM32(0x8076B0) = 0;
    PUSH32(esp, 0); sub_00218BC0(); /* call 0x00218BC0 */

loc_002013A4: ;
    xmm0 = MEMF(0x6BD4C4); /* movss */
    xmm0 = xmm0 * MEMF(0x649228); /* mulss */
    eax = MEM32(esi + 0x20);
    MEMF(esi + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(0x648D40); /* movss */
    MEMF(esi + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(0x64AD38); /* movss */
    esp = esp + 0xC;
    (void)0; /* cmp eax, 5 - flags set for next jcc */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(esi + 0x18) = 0;
    MEMF(esp + 0x18) = xmm0; /* movss */
    if (CMP_NE(eax, 5)) goto loc_002013FD; /* jne: not equal / not zero */

loc_002013EF: ;
    xmm0 = MEMF(0x64AD34); /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */

loc_002013FD: ;
    xmm0 = MEMF(esp + 0x28); /* movss */
    MEMF(0x80765C) = xmm0; /* movss */
    xmm0 = xmm0 * MEMF(0x6493AC); /* mulss */
    MEMF(0x807660) = xmm0; /* movss */
    eax = MEM32(esi + 0x20);
    if (CMP_NE(eax, 3)) { sub_0020142D(); return; } /* jne: not equal / not zero */

loc_00201423: ;
    xmm0 = MEMF(0x648FB0); /* movss */
    g_seh_ebp = ebp; sub_00201456(); return; /* tail jmp 0x00201456 */

}

/**
 * sub_00201560
 * Original: 0x00201560 - 0x002015B6 (86 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00201560(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00201560: ;
    SET_LO8(eax, MEM8(esi + 0x1C));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002015AB; /* jne: not equal / not zero */

loc_00201567: ;
    eax = MEM32(esi + 0x20);
    if (CMP_EQ(eax, 1)) goto loc_0020159A; /* je: equal / zero */

loc_0020156F: ;
    if (CMP_EQ(eax, 2)) goto loc_0020159A; /* je: equal / zero */

loc_00201574: ;
    if (CMP_EQ(eax, 4)) goto loc_0020159A; /* je: equal / zero */

loc_00201579: ;
    if (CMP_EQ(eax, 3)) goto loc_0020159A; /* je: equal / zero */

loc_0020157E: ;
    PUSH32(esp, 0x44FA0000);
    PUSH32(esp, 0xC57A0000u);
    eax = esi;
    PUSH32(esp, 0); sub_002015C0(); /* call 0x002015C0 */

loc_0020158F: ;
    eax = esi + 0x90;
    g_seh_ebp = ebp; sub_001F4FC0(); return; /* tail jmp 0x001F4FC0 */

loc_0020159A: ;
    PUSH32(esp, 0x44FA0000);
    PUSH32(esp, 0x45002000);
    eax = esi;
    PUSH32(esp, 0); sub_002015C0(); /* call 0x002015C0 */

loc_002015AB: ;
    eax = esi + 0x90;
    g_seh_ebp = ebp; sub_001F4FC0(); return; /* tail jmp 0x001F4FC0 */

}

/**
 * sub_002015C0
 * Original: 0x002015C0 - 0x002016FD (317 bytes, 84 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002015C0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_002015C0: ;
    esp = esp - 8;
    xmm0 = MEMF(0x6493C0); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 0x20);
    (void)0; /* cmp eax, 2 - flags set for next jcc */
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(0x649834); /* movss */
    PUSH32(esp, edi);
    MEMF(esp + 0x10) = xmm0; /* movss */
    if (CMP_NE(eax, 2)) goto loc_00201600; /* jne: not equal / not zero */

loc_002015EC: ;
    ecx = MEM32(0x75E318);
    edx = MEM32(0x75E31C);
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = edx;

loc_00201600: ;
    if (CMP_NE(eax, 5)) goto loc_00201633; /* jne: not equal / not zero */

loc_00201605: ;
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00222E90(); /* call 0x00222E90 */

loc_00201614: ;
    MEM32(esp + 0x18) = edx;
    xmm0 = MEMF(esp + 0x18); /* movss */
    xmm0 = xmm0 * MEMF(0x648E40); /* mulss */
    esp = esp + 8;
    MEM32(esp + 0xC) = eax;
    MEMF(esp + 0x10) = xmm0; /* movss */

loc_00201633: ;
    PUSH32(esp, 0); sub_00218B70(); /* call 0x00218B70 */

loc_00201638: ;
    ecx = MEM32(0x849B1C);
    edx = MEM32(0x7767E0);
    ecx--;
    edi = esi + 4;
    MEM32(0x849B1C) = ecx;
    MEM32(0x84B868) = edx;
    PUSH32(esp, 0); sub_0021ADA0(); /* call 0x0021ADA0 */

loc_00201659: ;
    SET_LO8(eax, MEM8(0x87A1C0));
    ebx = 1;
    if (TEST_NZ(LO8(ebx), LO8(eax))) goto loc_00201684; /* jne: not equal / not zero */

loc_00201667: ;
    edx = MEM32(0x87A1C0);
    PUSH32(esp, 0x875644);
    edx = edx | ebx;
    PUSH32(esp, 0x87A1AC);
    MEM32(0x87A1C0) = edx;
    PUSH32(esp, 0); sub_001CDBC0(); /* call 0x001CDBC0 */

loc_00201684: ;
    edi = MEM32(0x87A1AC);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    MEM8(0x87A1BC) = LO8(ebx);
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_00201698: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esi + 0x30;
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, 0); sub_0021AE40(); /* call 0x0021AE40 */

loc_002016AF: ;
    esp = esp + 0xC;
    PUSH32(esp, 0);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_002016BB: ;
    if (TEST_NZ(MEM8(0x87A1C0), LO8(ebx))) goto loc_002016E0; /* jne: not equal / not zero */

loc_002016C3: ;
    edx = MEM32(0x87A1C0);
    PUSH32(esp, 0x875644);
    edx = edx | ebx;
    PUSH32(esp, 0x87A1AC);
    MEM32(0x87A1C0) = edx;
    PUSH32(esp, 0); sub_001CDBC0(); /* call 0x001CDBC0 */

loc_002016E0: ;
    eax = 0; /* xor self */

loc_002016E2: ;
    if (CMP_EQ(edi, MEM32(eax * 4 + 0x87A1AC))) { sub_002016FD(); return; } /* je: equal / zero */

loc_002016EB: ;
    eax++;
    if (CMP_L(eax, 4)) goto loc_002016E2; /* jl: less (signed <) */

loc_002016F1: ;
    POP32(esp, edi);
    MEM8(esi + 0x1C) = LO8(ebx);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00201710
 * Original: 0x00201710 - 0x0020180A (250 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00201710(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00201710: ;
    if (CMP_A(edi, 3)) goto loc_00201806; /* ja: above (unsigned >) */

loc_00201719: ;
    { uint32_t _jt = MEM32(edi * 4 + 0x20180C); /* switch: 4 entries, 4 targets */
    if (_jt == 0x00201720u) goto loc_00201720;
    if (_jt == 0x00201777u) goto loc_00201777;
    if (_jt == 0x00201798u) goto loc_00201798;
    if (_jt == 0x002017B4u) goto loc_002017B4;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00201720: ;
    PUSH32(esp, 0x3ECCCCCD);
    eax = 0; /* xor self */
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3FA00000);
    MEM8(0x807664) = 0xFF;
    MEM8(0x807665) = 0xAF;
    MEM8(0x807666) = LO8(eax);
    MEM32(0x8076B0) = eax;
    PUSH32(esp, 0); sub_00218BC0(); /* call 0x00218BC0 */

loc_0020174E: ;
    xmm0 = MEMF(0x6BD4C4); /* movss */
    xmm0 = xmm0 * MEMF(0x649228); /* mulss */
    MEMF(esi + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(0x648D40); /* movss */
    esp = esp + 0xC;
    MEMF(esi + 0x14) = xmm0; /* movss */
    MEM32(esi + 0x18) = edi;
    esp += 4; return; /* ret */

loc_00201777: ;
    PUSH32(esp, 0x3EB33333);
    MEM8(0x807664) = 0x64;
    MEM8(0x807665) = 0xCD;
    MEM8(0x807666) = 0xFF;
    PUSH32(esp, 0x3FC00000);
    goto loc_002017D1;

loc_00201798: ;
    MEM8(0x807664) = 0x3C;
    MEM8(0x807665) = 0x50;
    MEM8(0x807666) = 0x8C;
    PUSH32(esp, 0x3E800000);
    goto loc_002017CC;

loc_002017B4: ;
    SET_LO8(eax, 0x64);
    MEM8(0x807664) = LO8(eax);
    MEM8(0x807665) = 0xFF;
    MEM8(0x807666) = LO8(eax);
    PUSH32(esp, 0x3F0CCCCD);

loc_002017CC: ;
    PUSH32(esp, 0x3FCCCCCD);

loc_002017D1: ;
    PUSH32(esp, 0x3FA00000);
    PUSH32(esp, 0); sub_00218BC0(); /* call 0x00218BC0 */

loc_002017DB: ;
    xmm1 = MEMF(0x6BD4C4); /* movss */
    xmm0 = MEMF(0x648E68); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esi + 0x10) = xmm1; /* movss */
    MEM32(0x8076B0) = 0;
    esp = esp + 0xC;
    MEMF(esi + 0x14) = xmm0; /* movss */

loc_00201806: ;
    MEM32(esi + 0x18) = edi;
    esp += 4; return; /* ret */

}

/**
 * sub_00201820
 * Original: 0x00201820 - 0x002018E6 (198 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00201820(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_00201820: ;
    esp = esp - 0x44;
    PUSH32(esp, 0xA);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046FCAB(); /* call 0x0046FCAB */

loc_00201830: ;
    xmm1 = MEMF(esi + 8); /* movss */
    xmm0 = MEMF(esi + 0x80); /* movss */
    xmm2 = MEMF(esi + 0xC); /* movss */
    SET_LO8(eax, MEM8(esi + 0x7D));
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm1 = MEMF(esi + 0x84); /* movss */
    xmm0 = xmm0 - MEMF(esi + 0x88); /* subss */
    esp = esp + 0xC;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm1 = xmm1 - MEMF(esi + 0x8C); /* subss */
    MEMF(esp) = xmm0; /* movss */
    MEMF(esp + 4) = xmm1; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002018BE; /* je: equal / zero */

loc_00201877: ;
    PUSH32(esp, 0x5F59F0);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x7FFFFFFF);
    eax = esp + 0x20;
    PUSH32(esp, 0); sub_003D4F60(); /* call 0x003D4F60 */

loc_00201894: ;
    xmm0 = MEMF(esp + 0x18); /* movss */
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    xmm1 = MEMF(esp + 0x10); /* movss */
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(esp + 0x10) = xmm1; /* movss */
    xmm0 = xmm1; /* movaps */
    xmm1 = MEMF(esp + 0x14); /* movss */
    esp = esp + 0x10;

loc_002018BE: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    MEMF(0x807650) = xmm0; /* movss */
    MEMF(0x807654) = xmm1; /* movss */
    MEMF(0x807658) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003D3E60(); /* call 0x003D3E60 */

loc_002018E2: ;
    esp = esp + 0x4C;
    esp += 4; return; /* ret */

}

/**
 * sub_002018F0
 * Original: 0x002018F0 - 0x002019EB (251 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002018F0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_002018F0: ;
    esp = esp - 0x10;
    xmm0 = MEMF(esi + 0x80); /* movss */
    xmm0 = xmm0 * MEMF(eax); /* mulss */
    xmm1 = MEMF(esi + 0x84); /* movss */
    xmm1 = xmm1 * MEMF(eax + 4); /* mulss */
    SET_LO8(eax, MEM8(esp + 0x14));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = xmm0 - MEMF(esi + 0x88); /* subss */
    xmm1 = xmm1 - MEMF(esi + 0x8C); /* subss */
    PUSH32(esp, edi);
    edi = ecx;
    MEMF(esp + 4) = xmm0; /* movss */
    MEMF(esp + 8) = xmm1; /* movss */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00201972; /* jne: not equal / not zero */

loc_00201933: ;
    if (CMP_NE(MEM16(edi), 0)) goto loc_0020193D; /* jne: not equal / not zero */

loc_00201939: ;
    edi = 0; /* xor self */
    goto loc_00201972;

loc_0020193D: ;
    ecx = MEM32(esi + 0x94);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x90);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003F9CB0(); /* call 0x003F9CB0 */

loc_00201955: ;
    xmm0 = MEMF(esp + 0x10); /* movss */
    xmm1 = MEMF(esp + 0x14); /* movss */
    esp = esp + 0xC;
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    edi = 0x5F654C;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_00201972; /* je: equal / zero */

loc_0020196E: ;
    edi = MEM32(esp + 0x18);

loc_00201972: ;
    SET_LO8(eax, MEM8(esi + 0x7D));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002019C1; /* je: equal / zero */

loc_00201979: ;
    PUSH32(esp, 0x5F59F0);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x7FFFFFFF);
    eax = edi;
    PUSH32(esp, 0); sub_003D4F60(); /* call 0x003D4F60 */

loc_00201994: ;
    xmm0 = MEMF(esp + 0x1C); /* movss */
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    xmm1 = MEMF(esp + 0x14); /* movss */
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(esp + 0x14) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x18); /* movss */
    xmm0 = MEMF(esp + 0x14); /* movss */
    esp = esp + 0x10;

loc_002019C1: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    MEMF(0x807650) = xmm0; /* movss */
    MEMF(0x807654) = xmm1; /* movss */
    MEMF(0x807658) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003D3E60(); /* call 0x003D3E60 */

loc_002019E1: ;
    esp = esp + 8;
    POP32(esp, edi);
    esp = esp + 0x10;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002019F0
 * Original: 0x002019F0 - 0x00201AC2 (210 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002019F0(void)
{
    int _cf = 0; /* carry flag */
    float xmm0, xmm1, xmm2;

loc_002019F0: ;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0x18));
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    PUSH32(esp, 0); sub_00218B70(); /* call 0x00218B70 */

loc_00201A01: ;
    SET_LO8(ebx, (uint32_t)(-(int32_t)LO8(ebx)));
    PUSH32(esp, 0);
    ebx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ebx = ebx + 0x193;
    ecx = 0; /* xor self */
    eax = ebx;
    PUSH32(esp, 0); sub_000761F0(); /* call 0x000761F0 */

loc_00201A16: ;
    xmm0 = MEMF(esi + 0x14); /* movss */
    xmm2 = MEMF(esi + 8); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(0x648D50); /* mulss */
    xmm0 = xmm0 * MEMF(0x649030); /* mulss */
    MEMF(esp + 0x18) = xmm1; /* movss */
    xmm1 = MEMF(0x648FDC); /* movss */
    xmm2 = xmm2 + xmm1; /* addss */
    MEMF(esp + 0x10) = xmm2; /* movss */
    xmm2 = MEMF(esi + 0xC); /* movss */
    xmm2 = xmm2 + xmm0; /* addss */
    esp = esp + 4;
    xmm2 = xmm2 + xmm1; /* addss */
    edx = 0x1010101;
    ecx = 0x40358;
    edi = eax;
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEMF(esp + 0x10) = xmm2; /* movss */
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00201A78: ;
    PUSH32(esp, 0x3F800000);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esp + 0x20;
    eax = esi;
    MEM32(0x549B04) = 0x1010101;
    PUSH32(esp, 0); sub_00201B90(); /* call 0x00201B90 */

loc_00201A98: ;
    ecx = MEM32(0x84B868);
    PUSH32(esp, 0x43000000);
    PUSH32(esp, 0x43000000);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00218880(); /* call 0x00218880 */

loc_00201AAE: ;
    edi = MEM32(esi + 0x18);
    esp = esp + 0xC;
    PUSH32(esp, 0); sub_00201710(); /* call 0x00201710 */

loc_00201AB9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00201AD0
 * Original: 0x00201AD0 - 0x00201B85 (181 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00201AD0(void)
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

loc_00201AD0: ;
    esp = esp - 0x10;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    esi = esp + 0xC;
    edi = ecx;
    PUSH32(esp, 0); sub_00075D90(); /* call 0x00075D90 */

loc_00201AE1: ;
    SET_LO8(eax, MEM8(edi + 0x70));
    xmm0 = MEMF(edi + 8); /* movss */
    xmm1 = MEMF(edi + 0xC); /* movss */
    esi = MEM32(esp + 0xC);
    esp = esp + 4;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEMF(esp + 0x14) = xmm1; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00201B4D; /* je: equal / zero */

loc_00201B05: ;
    xmm2 = MEMF(edi + 0x74); /* movss */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm2 = xmm2 + xmm0; /* addss */
    xmm0 = MEMF(edi + 0x78); /* movss */
    PUSH32(esp, 0);
    xmm0 = xmm0 + xmm1; /* addss */
    PUSH32(esp, 0);
    MEMF(esp + 0x10) = xmm2; /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00201B38: ;
    ecx = MEM32(ebx + 4);
    edx = MEM32(ebx);
    edi = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0021D550(); /* call 0x0021D550 */

loc_00201B4A: ;
    esp = esp + 0x1C;

loc_00201B4D: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    PUSH32(esp, 0xFF);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0xCD);
    PUSH32(esp, 0x64);
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00201B68: ;
    ecx = MEM32(ebx);
    edi = esp + 0x1C;
    PUSH32(esp, eax);
    eax = MEM32(ebx + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0021D550(); /* call 0x0021D550 */

loc_00201B7A: ;
    esp = esp + 0x1C;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00201B90
 * Original: 0x00201B90 - 0x00201C32 (162 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00201B90(void)
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

loc_00201B90: ;
    SET_LO8(edx, MEM8(eax + 0x7C));
    esp = esp - 8;
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    PUSH32(esp, ebx);
    ebx = MEM32(ecx + 4);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_00201BB7; /* je: equal / zero */

loc_00201BA6: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm0 = xmm0 - MEMF(ecx); /* subss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    esi = MEM32(esp + 0xC);

loc_00201BB7: ;
    SET_LO8(ecx, MEM8(eax + 0x70));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00201C09; /* je: equal / zero */

loc_00201BBE: ;
    xmm0 = MEMF(ebp); /* movss */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    xmm0 = xmm0 + MEMF(eax + 0x74); /* addss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, edi);
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x78); /* movss */
    xmm0 = xmm0 + MEMF(ebp + 4); /* addss */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEMF(esp + 0x1C) = xmm0; /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00201BF4: ;
    edi = esp + 0x1C;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0021D550(); /* call 0x0021D550 */

loc_00201C05: ;
    esp = esp + 0x1C;
    POP32(esp, edi);

loc_00201C09: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00201C18: ;
    edx = ebp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0021D4B0(); /* call 0x0021D4B0 */

loc_00201C26: ;
    esp = esp + 0xC;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00201C40
 * Original: 0x00201C40 - 0x00201C74 (52 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00201C40(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00201C40: ;
    xmm0 = MEMF(esp + 4); /* movss */
    /* comiss xmm0, MEMF(0x648D14) - sets EFLAGS */
    if ((xmm0 < MEMF(0x648D14))) goto loc_00201C71; /* jb: below (unsigned <) */

loc_00201C4F: ;
    eax = MEM32(ecx + 8);
    edx = MEM32(eax * 4 + 0x849AD0);
    ecx = 0; /* xor self */
    (void)0; /* test eax, eax - flags set for next jcc */
    eax = MEM32(0x849AA4);
    SET_LO8(ecx, (TEST_NZ(eax, eax)) ? 1 : 0); /* setne */
    ecx++;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0022D2D0(); /* call 0x0022D2D0 */

loc_00201C6E: ;
    esp = esp + 0xC;

loc_00201C71: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00201C80
 * Original: 0x00201C80 - 0x00201D31 (177 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00201C80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00201C80: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    MEM32(edi + 8) = eax;
    (void)0; /* cmp MEM32(0x84A19C), ebx - flags set for next jcc */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    MEM32(edi + 4) = ebx;
    if (CMP_NE(MEM32(0x84A19C), ebx)) goto loc_00201C98; /* jne: not equal / not zero */

loc_00201C93: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_00201C98: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    ebp = esi;
    if (CMP_EQ(esi, ebx)) goto loc_00201CE2; /* je: equal / zero */

loc_00201CBE: ;
    if (CMP_B(MEM32(esi + 0x80), 0x14)) goto loc_00201CE2; /* jb: below (unsigned <) */

loc_00201CC7: ;
    ecx = 4;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00201CD1: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00201CD9: ;
    esi = eax;
    esp = esp + 8;
    if (CMP_NE(esi, ebx)) goto loc_00201D05; /* jne: not equal / not zero */

loc_00201CE2: ;
    esi = MEM32(0x84A184);
    ecx = 4;
    ebp = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00201CF4: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00201CFC: ;
    esi = eax;
    esp = esp + 8;
    if (CMP_EQ(esi, ebx)) { sub_00201D31(); return; } /* je: equal / zero */

loc_00201D05: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    MEM32(esi + 0xC) = ebx;
    MEM32(esi + 8) = ebx;
    MEM32(esi + 4) = ebx;
    MEM8(esi + 0x10) = LO8(ebx);
    PUSH32(esp, esi);
    ebx = 0x14;
    MEM32(esi) = 0x5D7188;
    PUSH32(esp, 0); sub_0005EBD0(); /* call 0x0005EBD0 */

loc_00201D27: ;
    MEM32(edi) = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = edi;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00201D40
 * Original: 0x00201D40 - 0x00201E1B (219 bytes, 75 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00201D40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00201D40: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    if (CMP_EQ(eax, MEM32(ebp + 8))) goto loc_00201E17; /* je: equal / zero */

loc_00201D4E: ;
    ecx = MEM32(ebp + 4);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp ecx, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + 8) = eax;
    if (CMP_EQ(ecx, ebx)) goto loc_00201D63; /* je: equal / zero */

loc_00201D5D: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_00201D63: ;
    (void)0; /* cmp MEM32(0x84A19C), ebx - flags set for next jcc */
    ecx = MEM32(ebp);
    MEM32(ebp + 4) = ecx;
    if (CMP_NE(MEM32(0x84A19C), ebx)) goto loc_00201D76; /* jne: not equal / not zero */

loc_00201D71: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_00201D76: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (CMP_EQ(esi, ebx)) goto loc_00201DC0; /* je: equal / zero */

loc_00201D9C: ;
    if (CMP_B(MEM32(esi + 0x80), 0x14)) goto loc_00201DC0; /* jb: below (unsigned <) */

loc_00201DA5: ;
    ecx = 4;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00201DAF: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00201DB7: ;
    esi = eax;
    esp = esp + 8;
    if (CMP_NE(esi, ebx)) goto loc_00201DE3; /* jne: not equal / not zero */

loc_00201DC0: ;
    esi = MEM32(0x84A184);
    ecx = 4;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00201DD2: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00201DDA: ;
    esi = eax;
    esp = esp + 8;
    if (CMP_EQ(esi, ebx)) goto loc_00201E0F; /* je: equal / zero */

loc_00201DE3: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, ebx);
    MEM32(esi + 0xC) = ebx;
    MEM32(esi + 8) = ebx;
    MEM32(esi + 4) = ebx;
    MEM8(esi + 0x10) = LO8(ebx);
    PUSH32(esp, esi);
    ebx = 0x14;
    MEM32(esi) = 0x5D7188;
    PUSH32(esp, 0); sub_0005EBD0(); /* call 0x0005EBD0 */

loc_00201E05: ;
    POP32(esp, edi);
    MEM32(ebp) = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_00201E0F: ;
    esi = 0; /* xor self */
    POP32(esp, edi);
    MEM32(ebp) = esi;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00201E17: ;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00201E20
 * Original: 0x00201E20 - 0x00201ECB (171 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00201E20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00201E20: ;
    eax = MEM32(0x776574);
    eax = MEM32(eax * 4 + 0x59B400);
    if (TEST_Z(eax, eax)) goto loc_00201E32; /* je: equal / zero */

loc_00201E30: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00201E32: ;
    PUSH32(esp, 0); sub_00207BB0(); /* call 0x00207BB0 */

loc_00201E37: ;
    if (CMP_EQ(MEM8(0x774A69), 1)) goto loc_00201E59; /* je: equal / zero */

loc_00201E40: ;
    eax = MEM32(0x7FA1F8);
    if (CMP_EQ(eax, 0x46)) goto loc_00201E4F; /* je: equal / zero */

loc_00201E4A: ;
    if (CMP_NE(eax, 0x1D)) goto loc_00201E59; /* jne: not equal / not zero */

loc_00201E4F: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_001D95D0(); /* call 0x001D95D0 */

loc_00201E56: ;
    esp = esp + 4;

loc_00201E59: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x7767F0);
    PUSH32(esp, 0); sub_0021F9C0(); /* call 0x0021F9C0 */

loc_00201E64: ;
    esp = esp + 4;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_0003C1E0(); /* call 0x0003C1E0 */

loc_00201E6E: ;
    ebx = eax;
    PUSH32(esp, 0); sub_00232C10(); /* call 0x00232C10 */

loc_00201E75: ;
    eax = MEM32(0x776574);
    (void)0; /* test eax, eax - flags set for next jcc */
    ecx = MEM32(0x7768C0);
    MEM32(0x84B868) = ecx;
    POP32(esp, ebx);
    if (TEST_Z(eax, eax)) goto loc_00201EC6; /* je: equal / zero */

loc_00201E8B: ;
    eax = MEM32(0x849AEC);
    if (TEST_Z(eax, eax)) goto loc_00201EA9; /* je: equal / zero */

loc_00201E94: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00206780(); /* call 0x00206780 */

loc_00201E9A: ;
    edx = MEM32(0x849AF0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00206780(); /* call 0x00206780 */

loc_00201EA6: ;
    esp = esp + 8;

loc_00201EA9: ;
    MEM32(0x849AEC) = 0;
    MEM32(0x849AF0) = 0;
    MEM16(0x7765D4) = 0;

loc_00201EC6: ;
    g_seh_ebp = ebp; sub_00287C80(); return; /* tail jmp 0x00287C80 */

}

/**
 * sub_00202040
 * Original: 0x00202040 - 0x002020F8 (184 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00202040(void)
{
    int _flags = 0; /* fallback flag var */

loc_00202040: ;
    SET_LO8(edx, MEM8(esi * 4 + 0x6BD27E));
    PUSH32(esp, ebx);
    ebx = eax;
    SET_LO8(eax, MEM8(esi * 4 + 0x6BD27C));
    MEM8(0x776171) = LO8(eax);
    SET_LO8(eax, MEM8(esp + 0xC));
    MEM8(0x77616E) = LO8(eax);
    eax = (uint32_t)(int32_t)SMEM8(ebx + 0x776BA0);
    eax--;
    PUSH32(esp, edi);
    edi = ecx;
    SET_LO8(ecx, MEM8(esi * 4 + 0x6BD27D));
    MEM8(0x776170) = LO8(ecx);
    MEM8(0x77616F) = LO8(edx);
    if (((int32_t)eax >= 0)) goto loc_00202081; /* jns: not sign (positive) */

loc_0020207F: ;
    eax = 0; /* xor self */

loc_00202081: ;
    ecx = MEM32(0x849800);
    edx = MEM32(ecx + eax * 4 + 0x184);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    ecx = edi + 0x3C;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    SET_LO8(ecx, 0xA1);
    PUSH32(esp, 0); sub_001F25F0(); /* call 0x001F25F0 */

loc_0020209F: ;
    SET_LO8(eax, MEM8(0x84981C));
    esp = esp + 0xC;
    if (TEST_Z(LO8(eax), 1)) goto loc_002020CF; /* je: equal / zero */

loc_002020AB: ;
    edx = (uint32_t)(int32_t)SMEM16(esi * 2 + 0x776B58);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, 0x5F13E0);
    ecx = edi + 0x54;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    SET_LO8(ecx, 0xA1);
    PUSH32(esp, 0); sub_001F25F0(); /* call 0x001F25F0 */

loc_002020C9: ;
    esp = esp + 0x10;
    edi = edi + 0x1E;

loc_002020CF: ;
    eax = MEM32(esp + 0xC);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x2C);
    edx = (uint32_t)(int32_t)SMEM16(ebx + 0x776282);
    PUSH32(esp, edx);
    PUSH32(esp, 0x5F98D0);
    PUSH32(esp, eax);
    edi = edi + 0x94;
    PUSH32(esp, edi);
    SET_LO8(ecx, 0xA1);
    PUSH32(esp, 0); sub_001F25F0(); /* call 0x001F25F0 */

loc_002020F2: ;
    esp = esp + 0x10;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00202100
 * Original: 0x00202100 - 0x00202248 (328 bytes, 98 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00202100(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00202100: ;
    esp = esp - 0x10;
    SET_LO8(eax, MEM8(0x84981C));
    SET_LO8(ecx, MEM8(esp + 0x14));
    xmm0 = MEMF(0x648E58); /* movss */
    SET_LO8(eax, LO8(eax) & 1);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = ebx;
    MEM8(0x77616E) = LO8(ecx);
    MEM8(esp + 0x12) = LO8(ebx);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & 0xFFFFFFE6u;
    eax = eax + 0x34;
    ebp = eax;
    SET_LO8(eax, 0xFF);
    MEM8(0x776171) = LO8(eax);
    MEM8(0x776170) = LO8(eax);
    MEM8(0x77616F) = LO8(eax);
    SET_LO8(eax, MEM8(0x7819D5));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEMF(0x77615C) = xmm0; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00202168; /* je: equal / zero */

loc_00202158: ;
    xmm0 = MEMF(0x649D9C); /* movss */
    MEMF(0x77615C) = xmm0; /* movss */

loc_00202168: ;
    edi = edx;
    MEM32(esp + 0x18) = ebx;
    edi = edi + 0xFFFFFFFEu;

loc_00202171: ;
    SET_LO8(eax, MEM8(ebx + 0x849894));
    (void)0; /* cmp LO8(eax), 0xFF - flags set for next jcc */
    MEM8(esp + 0x13) = LO8(eax);
    if (CMP_LE(LO8(eax), 0xFF)) goto loc_00202220; /* jle: less or equal (signed <=) */

loc_00202183: ;
    if (CMP_EQ(MEM8(ebx + 0x800488), 5)) goto loc_00202220; /* je: equal / zero */

loc_00202190: ;
    SET_LO8(ecx, MEM8(esp + 0x12));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    edx = MEM32(ebx * 4 + 0x7761A0);
    MEM32(esp + 0x1C) = edx;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_002021CA; /* jne: not equal / not zero */

loc_002021A3: ;
    esi = 0; /* xor self */
    ebx = 0x8533B81;
    PUSH32(esp, 0); sub_001FF0F0(); /* call 0x001FF0F0 */

loc_002021AF: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x14) = eax;
    if (TEST_Z(eax, eax)) { sub_00202248(); return; } /* je: equal / zero */

loc_002021BB: ;
    ebx = MEM32(esp + 0x18);
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(esp + 0x13));
    MEM8(esp + 0x12) = 1;

loc_002021CA: ;
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    eax = eax & 3;
    PUSH32(esp, 0x400);
    edx = eax;
    PUSH32(esp, 0x400);
    edx = edx & 0xFFFFFFFEu;
    edx = edx << 8;
    PUSH32(esp, edx);
    eax = eax & 1;
    eax = eax << 9;
    PUSH32(esp, eax);
    ecx = ebp + 0x18;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x30);
    PUSH32(esp, edi);
    edx = ebp + 8;
    PUSH32(esp, edx);
    eax = edi + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00206BF0(); /* call 0x00206BF0 */

loc_00202204: ;
    edx = MEM32(esp + 0x4C);
    esi = MEM32(esp + 0x44);
    PUSH32(esp, edx);
    eax = edi + 2;
    PUSH32(esp, eax);
    eax = ebx;
    ecx = ebp;
    PUSH32(esp, 0); sub_00202040(); /* call 0x00202040 */

loc_0020221A: ;
    esp = esp + 0x30;
    edi = edi + 0xF;

loc_00202220: ;
    ebx++;
    (void)0; /* cmp ebx, 4 - flags set for next jcc */
    MEM32(esp + 0x18) = ebx;
    if (CMP_L(ebx, 4)) goto loc_00202171; /* jl: less (signed <) */

loc_0020222E: ;
    SET_LO8(eax, MEM8(0x862C66));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_00202248(); return; } /* jne: not equal / not zero */

loc_00202237: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0x9C;
    POP32(esp, ebx);
    esp = esp + 0x10;
    g_seh_ebp = ebp; sub_00201ED0(); return; /* tail jmp 0x00201ED0 */

}

/**
 * sub_00202250
 * Original: 0x00202250 - 0x002025A6 (854 bytes, 176 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00202250(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm5, xmm6, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00202250: ;
    esp = esp - 0x24;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x2C);
    eax = MEM32(ebx + 0xD4);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_NZ(eax, eax)) goto loc_002022F2; /* jne: not equal / not zero */

loc_00202269: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_00202277; /* jne: not equal / not zero */

loc_00202272: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_00202277: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (TEST_Z(esi, esi)) goto loc_002022C5; /* je: equal / zero */

loc_0020229D: ;
    if (CMP_B(MEM32(esi + 0x80), 0x1C0)) goto loc_002022C5; /* jb: below (unsigned <) */

loc_002022A9: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002022B3: ;
    PUSH32(esp, 0x1C0);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002022BE: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_002022E5; /* jne: not equal / not zero */

loc_002022C5: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002022D7: ;
    PUSH32(esp, 0x1C0);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002022E2: ;
    esp = esp + 8;

loc_002022E5: ;
    edx = eax;
    MEM32(ebx + 0xD4) = eax;
    PUSH32(esp, 0); sub_003FA650(); /* call 0x003FA650 */

loc_002022F2: ;
    eax = MEM32(0x84B868);
    xmm0 = MEMF(0x64971C); /* movss */
    xmm7 = 0.0f; /* xorps self = zero */
    xmm5 = MEMF(0x7FA218); /* movss */
    MEM32(ebx + 0xD0) = eax;
    eax = MEM32(ebx + 0xD4);
    xmm6 = MEMF(0x6492E4); /* movss */
    MEMF(eax + 0xDC) = xmm0; /* movss */
    xmm0 = MEMF(0x649718); /* movss */
    MEMF(eax + 0xE0) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(eax + 0xE8) = xmm0; /* movss */
    xmm0 = MEMF(0x649124); /* movss */
    MEMF(eax + 0xD4) = xmm7; /* movss */
    MEMF(eax + 0xD8) = xmm7; /* movss */
    MEMF(eax + 0xE4) = xmm7; /* movss */
    eax = MEM32(ebx + 0xD4);
    SET_LO8(ecx, MEM8(eax + 8));
    MEMF(eax + 0x104) = xmm0; /* movss */
    xmm0 = MEMF(0x649950); /* movss */
    MEMF(eax + 0x108) = xmm0; /* movss */
    xmm0 = MEMF(0x648CE4); /* movss */
    MEMF(eax + 0x10C) = xmm0; /* movss */
    xmm0 = MEMF(0x649430); /* movss */
    MEMF(eax + 0x110) = xmm0; /* movss */
    xmm0 = MEMF(0x8757BC); /* movss */
    SET_LO8(ecx, LO8(ecx) & 0xFC);
    xmm0 = xmm0 - xmm5; /* subss */
    /* comiss xmm7, xmm0 - sets EFLAGS */
    MEM8(eax + 8) = LO8(ecx);
    MEMF(0x8757BC) = xmm0; /* movss */
    if ((xmm7 <= xmm0)) goto loc_002023FC; /* jbe: below or equal (unsigned <=) */

loc_002023C6: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_002023CB: ;
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm0 = xmm0 + MEMF(0x648CF0); /* addss */
    MEMF(0x8757BC) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_002023E4: ;
    xmm0 = xmm0 * MEMF(0x6490F4); /* mulss */
    xmm0 = xmm0 - MEMF(0x648D20); /* subss */
    MEMF(0x8757B0) = xmm0; /* movss */

loc_002023FC: ;
    xmm0 = MEMF(0x8757B8); /* movss */
    xmm0 = xmm0 - xmm5; /* subss */
    /* comiss xmm7, xmm0 - sets EFLAGS */
    MEMF(0x8757B8) = xmm0; /* movss */
    if ((xmm7 <= xmm0)) goto loc_0020244B; /* jbe: below or equal (unsigned <=) */

loc_00202415: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0020241A: ;
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm0 = xmm0 + MEMF(0x648CF0); /* addss */
    MEMF(0x8757B8) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00202433: ;
    xmm0 = xmm0 * MEMF(0x648CE0); /* mulss */
    xmm0 = xmm0 - MEMF(0x648D20); /* subss */
    MEMF(0x8757A4) = xmm0; /* movss */

loc_0020244B: ;
    ecx = MEM32(0x8757B0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, ecx);
    ecx = 0x8757AC;
    edx = 0x8757B4;
    xmm0 = xmm5; /* movaps */
    PUSH32(esp, 0); sub_002B0760(); /* call 0x002B0760 */

loc_0020246E: ;
    edx = MEM32(0x8757A4);
    xmm0 = MEMF(0x7FA218); /* movss */
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, edx);
    ecx = 0x8757A0;
    edx = 0x8757A8;
    PUSH32(esp, 0); sub_002B0760(); /* call 0x002B0760 */

loc_00202496: ;
    xmm0 = MEMF(0x8757B4); /* movss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    xmm0 = MEMF(0x8757A8); /* movss */
    xmm0 = xmm0 + MEMF(0x64A250); /* addss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    xmm0 = MEMF(0x64A254); /* movss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    xmm0 = MEMF(0x64A260); /* movss */
    eax = esp + 0x28;
    PUSH32(esp, eax);
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(0x6492B8); /* movss */
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    edx = esp + 0x48;
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    PUSH32(esp, edx);
    esi = ebx;
    MEMF(esp + 0x34) = xmm7; /* movss */
    MEMF(esp + 0x40) = xmm7; /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    MEMF(esp + 0x48) = xmm7; /* movss */
    PUSH32(esp, 0); sub_003E36E0(); /* call 0x003E36E0 */

loc_0020251A: ;
    ebp = ebx + 0x50;
    esp = esp + 0x24;
    eax = ebp;
    ecx = ebx;
    PUSH32(esp, 0); sub_003E3660(); /* call 0x003E3660 */

loc_00202529: ;
    edi = MEM32(ebx + 0xD4);
    edi = edi + 0x10;
    ecx = 0x10;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    edi = MEM32(ebx + 0xD4);
    edi = edi + 0x50;
    ecx = 0x10;
    esi = ebp;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = MEM32(ebx + 0xD4);
    PUSH32(esp, 0); sub_003FB030(); /* call 0x003FB030 */

loc_00202556: ;
    esi = MEM32(ebx + 0xD4);
    MEM32(0x84B868) = esi;
    PUSH32(esp, 0); sub_003FB250(); /* call 0x003FB250 */

loc_00202567: ;
    esi = ebx;
    ecx = 0x10;
    edi = 0x81BD30;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    esi = MEM32(0x84B868);
    ebx = ebx + 0x90;
    esi = esi + 0x90;
    edi = ebx;
    ecx = 0x10;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    esi = ebx;
    ecx = 0x10;
    edi = 0x81B810;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

}

/**
 * sub_002025B0
 * Original: 0x002025B0 - 0x00202635 (133 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002025B0(void)
{

loc_002025B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x7768C4);
    edi = edi + 0x10;
    ecx = 0x10;
    esi = 0x7767F0;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    edi = MEM32(0x7768C4);
    edi = edi + 0x50;
    ecx = 0x10;
    esi = 0x776840;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = MEM32(0x7768C4);
    PUSH32(esp, 0); sub_003FB030(); /* call 0x003FB030 */

loc_002025E7: ;
    esi = MEM32(0x7768C4);
    MEM32(0x84B868) = esi;
    PUSH32(esp, 0); sub_003FB250(); /* call 0x003FB250 */

loc_002025F8: ;
    ecx = 0x10;
    esi = 0x7767F0;
    edi = 0x81BD30;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    esi = MEM32(0x84B868);
    esi = esi + 0x90;
    ecx = 0x10;
    edi = 0x776880;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = 0x10;
    esi = 0x776880;
    edi = 0x81B810;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00202640
 * Original: 0x00202640 - 0x0020286D (557 bytes, 126 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00202640(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00202640: ;
    esp = esp - 0x24;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x2C);
    eax = MEM32(ebx + 0xD4);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_NZ(eax, eax)) goto loc_002026E2; /* jne: not equal / not zero */

loc_00202659: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_00202667; /* jne: not equal / not zero */

loc_00202662: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_00202667: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (TEST_Z(esi, esi)) goto loc_002026B5; /* je: equal / zero */

loc_0020268D: ;
    if (CMP_B(MEM32(esi + 0x80), 0x1C0)) goto loc_002026B5; /* jb: below (unsigned <) */

loc_00202699: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002026A3: ;
    PUSH32(esp, 0x1C0);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002026AE: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_002026D5; /* jne: not equal / not zero */

loc_002026B5: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002026C7: ;
    PUSH32(esp, 0x1C0);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002026D2: ;
    esp = esp + 8;

loc_002026D5: ;
    edx = eax;
    MEM32(ebx + 0xD4) = eax;
    PUSH32(esp, 0); sub_003FA650(); /* call 0x003FA650 */

loc_002026E2: ;
    xmm0 = 0.0f; /* xorps self = zero */
    eax = MEM32(0x84B868);
    xmm1 = MEMF(0x648E8C); /* movss */
    xmm2 = MEMF(0x648E38); /* movss */
    MEM32(ebx + 0xD0) = eax;
    eax = MEM32(ebx + 0xD4);
    xmm3 = MEMF(0x64A25C); /* movss */
    MEMF(eax + 0xDC) = xmm1; /* movss */
    MEMF(eax + 0xE0) = xmm1; /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    MEMF(eax + 0xD4) = xmm0; /* movss */
    MEMF(eax + 0xD8) = xmm0; /* movss */
    MEMF(eax + 0xE4) = xmm0; /* movss */
    MEMF(eax + 0xE8) = xmm1; /* movss */
    eax = MEM32(ebx + 0xD4);
    SET_LO8(ecx, MEM8(eax + 8));
    MEMF(eax + 0x104) = xmm2; /* movss */
    xmm2 = MEMF(0x648CE4); /* movss */
    MEMF(eax + 0x10C) = xmm2; /* movss */
    xmm2 = MEMF(0x649430); /* movss */
    SET_LO8(ecx, LO8(ecx) & 0xFC);
    MEM8(eax + 8) = LO8(ecx);
    MEMF(eax + 0x110) = xmm2; /* movss */
    xmm2 = MEMF(0x6493C0); /* movss */
    MEMF(eax + 0x108) = xmm1; /* movss */
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    eax = esp + 0x30;
    MEMF(esp + 0x30) = xmm0; /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(0x64A258); /* movss */
    PUSH32(esp, eax);
    esi = ebx;
    MEMF(esp + 0x38) = xmm2; /* movss */
    MEMF(esp + 0x3C) = xmm3; /* movss */
    MEMF(esp + 0x2C) = xmm1; /* movss */
    MEMF(esp + 0x20) = xmm2; /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E36E0(); /* call 0x003E36E0 */

loc_002027E1: ;
    ebp = ebx + 0x50;
    esp = esp + 0xC;
    eax = ebp;
    ecx = ebx;
    PUSH32(esp, 0); sub_003E3660(); /* call 0x003E3660 */

loc_002027F0: ;
    edi = MEM32(ebx + 0xD4);
    edi = edi + 0x10;
    ecx = 0x10;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    edi = MEM32(ebx + 0xD4);
    edi = edi + 0x50;
    ecx = 0x10;
    esi = ebp;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = MEM32(ebx + 0xD4);
    PUSH32(esp, 0); sub_003FB030(); /* call 0x003FB030 */

loc_0020281D: ;
    esi = MEM32(ebx + 0xD4);
    MEM32(0x84B868) = esi;
    PUSH32(esp, 0); sub_003FB250(); /* call 0x003FB250 */

loc_0020282E: ;
    esi = ebx;
    ecx = 0x10;
    edi = 0x81BD30;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    esi = MEM32(0x84B868);
    ebx = ebx + 0x90;
    esi = esi + 0x90;
    edi = ebx;
    ecx = 0x10;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    esi = ebx;
    ecx = 0x10;
    edi = 0x81B810;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

}

/**
 * sub_00202870
 * Original: 0x00202870 - 0x00202AB9 (585 bytes, 134 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00202870(void)
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

loc_00202870: ;
    ecx = MEM32(0x849B1C);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    eax = MEM32(ebx + 0xD4);
    PUSH32(esp, ebp);
    ecx++;
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(0x849B1C) = ecx;
    if (TEST_NZ(eax, eax)) goto loc_0020291C; /* jne: not equal / not zero */

loc_00202893: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_002028A1; /* jne: not equal / not zero */

loc_0020289C: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_002028A1: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (TEST_Z(esi, esi)) goto loc_002028EF; /* je: equal / zero */

loc_002028C7: ;
    if (CMP_B(MEM32(esi + 0x80), 0x1C0)) goto loc_002028EF; /* jb: below (unsigned <) */

loc_002028D3: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002028DD: ;
    PUSH32(esp, 0x1C0);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002028E8: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_0020290F; /* jne: not equal / not zero */

loc_002028EF: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00202901: ;
    PUSH32(esp, 0x1C0);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0020290C: ;
    esp = esp + 8;

loc_0020290F: ;
    edx = eax;
    MEM32(ebx + 0xD4) = eax;
    PUSH32(esp, 0); sub_003FA650(); /* call 0x003FA650 */

loc_0020291C: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    eax = MEM32(0x84B868);
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x648D14); /* movss */
    xmm2 = MEMF(esp + 0x20); /* movss */
    MEM32(ebx + 0xD0) = eax;
    eax = MEM32(ebx + 0xD4);
    MEMF(eax + 0xD4) = xmm0; /* movss */
    MEMF(eax + 0xD8) = xmm0; /* movss */
    MEMF(eax + 0xE4) = xmm0; /* movss */
    MEMF(eax + 0xE8) = xmm1; /* movss */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(eax + 0xDC) = (float)fp_top(); fp_popp(); /* fstp */
    ebp = ebx + 0x50;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(eax + 0xE0) = (float)fp_top(); fp_popp(); /* fstp */
    eax = MEM32(ebx + 0xD4);
    SET_LO8(ecx, MEM8(eax + 8));
    MEMF(eax + 0xEC) = xmm2; /* movss */
    xmm2 = MEMF(esp + 0x24); /* movss */
    MEMF(eax + 0xF0) = xmm2; /* movss */
    xmm2 = MEMF(esp + 0x18); /* movss */
    MEMF(eax + 0xF4) = xmm2; /* movss */
    xmm2 = MEMF(esp + 0x1C); /* movss */
    MEMF(eax + 0xF8) = xmm2; /* movss */
    xmm2 = MEMF(0x648E54); /* movss */
    MEMF(eax + 0xFC) = xmm2; /* movss */
    xmm2 = MEMF(0x648E98); /* movss */
    MEMF(eax + 0x100) = xmm2; /* movss */
    SET_LO8(ecx, LO8(ecx) & 0xFE);
    SET_LO8(ecx, LO8(ecx) | 2);
    MEM8(eax + 8) = LO8(ecx);
    eax = ebp;
    ecx = ebx;
    MEMF(ebx + 0x38) = xmm0; /* movss */
    MEMF(ebx + 0x34) = xmm0; /* movss */
    MEMF(ebx + 0x30) = xmm0; /* movss */
    MEMF(ebx + 0x2C) = xmm0; /* movss */
    MEMF(ebx + 0x24) = xmm0; /* movss */
    MEMF(ebx + 0x20) = xmm0; /* movss */
    MEMF(ebx + 0x1C) = xmm0; /* movss */
    MEMF(ebx + 0x18) = xmm0; /* movss */
    MEMF(ebx + 0x10) = xmm0; /* movss */
    MEMF(ebx + 0xC) = xmm0; /* movss */
    MEMF(ebx + 8) = xmm0; /* movss */
    MEMF(ebx + 4) = xmm0; /* movss */
    MEMF(ebx + 0x3C) = xmm1; /* movss */
    MEMF(ebx + 0x28) = xmm1; /* movss */
    MEMF(ebx + 0x14) = xmm1; /* movss */
    MEMF(ebx) = xmm1; /* movss */
    PUSH32(esp, 0); sub_003E3660(); /* call 0x003E3660 */

loc_00202A3D: ;
    edi = MEM32(ebx + 0xD4);
    edi = edi + 0x10;
    ecx = 0x10;
    esi = ebx;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    edi = MEM32(ebx + 0xD4);
    edi = edi + 0x50;
    ecx = 0x10;
    esi = ebp;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = MEM32(ebx + 0xD4);
    PUSH32(esp, 0); sub_003FB030(); /* call 0x003FB030 */

loc_00202A6C: ;
    esi = MEM32(ebx + 0xD4);
    MEM32(0x84B868) = esi;
    PUSH32(esp, 0); sub_003FB250(); /* call 0x003FB250 */

loc_00202A7D: ;
    esi = ebx;
    ecx = 0x10;
    edi = 0x81BD30;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    esi = MEM32(0x84B868);
    ebx = ebx + 0x90;
    esi = esi + 0x90;
    ecx = 0x10;
    edi = ebx;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    esi = ebx;
    ecx = 0x10;
    edi = 0x81B810;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
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
 * sub_00202AC0
 * Original: 0x00202AC0 - 0x00202C37 (375 bytes, 87 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00202AC0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm3, xmm4, xmm6;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00202AC0: ;
    esp = esp - 0x30;
    PUSH32(esp, ebx);
    ebx = eax;
    eax = MEM32(0x84B868);
    PUSH32(esp, ebp);
    MEM32(ebx + 0xD0) = eax;
    eax = MEM32(ebx + 0xD4);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_NZ(eax, eax)) goto loc_00202AE3; /* jne: not equal / not zero */

loc_00202ADE: ;
    PUSH32(esp, 0); sub_00319750(); /* call 0x00319750 */

loc_00202AE3: ;
    eax = MEM32(ebx + 0xD4);
    xmm0 = MEMF(0x64971C); /* movss */
    xmm3 = 0.0f; /* xorps self = zero */
    xmm6 = MEMF(0x6491EC); /* movss */
    MEMF(eax + 0xDC) = xmm0; /* movss */
    xmm0 = MEMF(0x649718); /* movss */
    MEMF(eax + 0xE0) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(eax + 0xE8) = xmm0; /* movss */
    xmm0 = MEMF(0x648E38); /* movss */
    MEMF(eax + 0xD4) = xmm3; /* movss */
    MEMF(eax + 0xD8) = xmm3; /* movss */
    MEMF(eax + 0xE4) = xmm3; /* movss */
    eax = MEM32(ebx + 0xD4);
    SET_LO8(ecx, MEM8(eax + 8));
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    MEMF(eax + 0x104) = xmm0; /* movss */
    xmm0 = MEMF(0x649950); /* movss */
    PUSH32(esp, 0);
    SET_LO8(ecx, LO8(ecx) & 0xFC);
    MEMF(eax + 0x108) = xmm0; /* movss */
    xmm0 = MEMF(0x648CE4); /* movss */
    PUSH32(esp, 0);
    MEM8(eax + 8) = LO8(ecx);
    ecx = esp + 0x24;
    MEMF(eax + 0x10C) = xmm0; /* movss */
    xmm0 = MEMF(0x649430); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    edx = ebx;
    MEMF(eax + 0x110) = xmm0; /* movss */
    xmm4 = xmm3; /* movaps */
    PUSH32(esp, 0); sub_0029BCA0(); /* call 0x0029BCA0 */

loc_00202BA9: ;
    ebp = ebx + 0x50;
    esp = esp + 0x1C;
    eax = ebp;
    ecx = ebx;
    PUSH32(esp, 0); sub_003E3660(); /* call 0x003E3660 */

loc_00202BB8: ;
    edi = MEM32(ebx + 0xD4);
    edi = edi + 0x10;
    ecx = 0x10;
    esi = ebx;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    edi = MEM32(ebx + 0xD4);
    edi = edi + 0x50;
    ecx = 0x10;
    esi = ebp;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = MEM32(ebx + 0xD4);
    PUSH32(esp, 0); sub_003FB030(); /* call 0x003FB030 */

loc_00202BE7: ;
    esi = MEM32(ebx + 0xD4);
    MEM32(0x84B868) = esi;
    PUSH32(esp, 0); sub_003FB250(); /* call 0x003FB250 */

loc_00202BF8: ;
    esi = ebx;
    ecx = 0x10;
    edi = 0x81BD30;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    esi = MEM32(0x84B868);
    ebx = ebx + 0x90;
    esi = esi + 0x90;
    edi = ebx;
    ecx = 0x10;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    esi = ebx;
    ecx = 0x10;
    edi = 0x81B810;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x30;
    esp += 4; return; /* ret */

}

/**
 * sub_00202C40
 * Original: 0x00202C40 - 0x00202D64 (292 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00202C40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_00202C40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x58;
    eax = MEM32(0x84B868);
    xmm0 = MEMF(0x648D14); /* movss */
    PUSH32(esp, esi);
    MEM32(0x81B7C0) = MEM32(0x81B7C0) & 0x80000000u;
    esi = eax + 0x10;
    PUSH32(esp, edi);
    eax = esp + 0x20;
    MEM32(0x819FE0) = 0;
    MEM32(0x819FE4) = 0;
    MEMF(0x74FB30) = xmm0; /* movss */
    MEMF(0x74FB34) = xmm0; /* movss */
    MEMF(0x74FB38) = xmm0; /* movss */
    MEMF(0x74FB3C) = xmm0; /* movss */
    ecx = 0x10;
    edi = esp + 0x20;
    PUSH32(esp, eax);
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    PUSH32(esp, 0); sub_003EA230(); /* call 0x003EA230 */

loc_00202CAE: ;
    eax = MEM32(ebp + 8);
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_00202CC2; /* je: equal / zero */

loc_00202CB8: ;
    MEM32(0x84B830) = 0x206B50;

loc_00202CC2: ;
    edx = MEM32(0x85D5B4);
    xmm0 = MEMF(0x648E14); /* movss */
    MEM32(edx + 0xE0) = 0;
    eax = 0; /* xor self */
    edi = edx;
    ecx = 0x24;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    MEM8(edx + 0x338) = 1;
    eax = MEM32(0x85D5B4);
    xmm1 = MEMF(eax); /* movss */
    xmm1 = xmm1 + xmm0; /* addss */
    MEMF(eax) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x30); /* movss */
    xmm1 = xmm1 + xmm0; /* addss */
    MEMF(eax + 0x30) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x60); /* movss */
    xmm1 = xmm1 + xmm0; /* addss */
    xmm0 = MEMF(0x648E94); /* movss */
    MEMF(eax + 0x60) = xmm1; /* movss */
    ecx = MEM32(0x5A02CC);
    edx = MEM32(0x5A02D0);
    eax = MEM32(0x5A02D4);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    MEM32(esp + 0x18) = ecx;
    ecx = esp + 0x18;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    MEM8(0x8493C8) = 1;
    MEM32(esp + 0x24) = edx;
    MEM32(esp + 0x28) = eax;
    MEMF(esp + 0x2C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00130430(); /* call 0x00130430 */

loc_00202D5B: ;
    esp = esp + 0x10;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00202D70
 * Original: 0x00202D70 - 0x00202DC9 (89 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00202D70(void)
{
    int _flags = 0; /* fallback flag var */

loc_00202D70: ;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    eax = 0x5F98A0;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00202D7E; /* jne: not equal / not zero */

loc_00202D79: ;
    eax = 0x5F988C;

loc_00202D7E: ;
    PUSH32(esp, 1);
    ecx = 0x5F98BC;
    PUSH32(esp, 0); sub_00086490(); /* call 0x00086490 */

loc_00202D8A: ;
    MEM32(esi) = eax;
    eax = MEM32(eax + 0x24);
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_00202DC8; /* je: equal / zero */

loc_00202D96: ;
    ecx = MEM32(eax + 8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xD46);
    PUSH32(esp, 0x5F98E8);
    PUSH32(esp, 0); sub_003ED030(); /* call 0x003ED030 */

loc_00202DAA: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_00202DB0: ;
    ecx = MEM32(esp + 0x14);
    MEM32(ecx) = eax;
    edx = MEM32(esi);
    PUSH32(esp, eax);
    eax = MEM32(edx + 0x24);
    ecx = MEM32(eax + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_000865C0(); /* call 0x000865C0 */

loc_00202DC5: ;
    esp = esp + 0x18;

loc_00202DC8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00202DD0
 * Original: 0x00202DD0 - 0x00202ED3 (259 bytes, 78 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00202DD0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00202DD0: ;
    PUSH32(esp, esi);
    esi = MEM32(0x849AF4);
    if (TEST_Z(esi, esi)) goto loc_00202ED1; /* je: equal / zero */

loc_00202DDF: ;
    eax = MEM32(esi + 0x24);
    if (TEST_Z(eax, eax)) goto loc_00202DFD; /* je: equal / zero */

loc_00202DE6: ;
    eax = MEM32(eax + 8);
    PUSH32(esp, 0x7765D0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00075640(); /* call 0x00075640 */

loc_00202DF4: ;
    esi = MEM32(0x849AF4);
    esp = esp + 8;

loc_00202DFD: ;
    SET_LO8(eax, MEM8(esi + 0xC));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    eax = MEM32(esi + 8);
    if (CMP_BE(eax, 1)) goto loc_00202E1A; /* jbe: below or equal (unsigned <=) */

loc_00202E0A: ;
    eax--;
    MEM32(esi + 8) = eax;
    MEM32(0x849AF4) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00202E1A: ;
    SET_LO8(eax, MEM8(0x770FA8));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00202EC7; /* jne: not equal / not zero */

loc_00202E27: ;
    PUSH32(esp, ebp);
    ebp = esi + 0x24;
    PUSH32(esp, edi);
    edi = MEM32(ebp);
    if (TEST_Z(edi, edi)) goto loc_00202E3F; /* je: equal / zero */

loc_00202E33: ;
    PUSH32(esp, 0); sub_0009A3B0(); /* call 0x0009A3B0 */

loc_00202E38: ;
    MEM32(ebp) = 0;

loc_00202E3F: ;
    eax = MEM32(esi + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_00202E48: ;
    if (TEST_NZ(eax, eax)) goto loc_00202E7D; /* jne: not equal / not zero */

loc_00202E4C: ;
    eax = MEM32(esi + 0x10);
    if (TEST_Z(eax, eax)) goto loc_00202E7D; /* je: equal / zero */

loc_00202E53: ;
    edi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    edi++;
    edx--;
    PUSH32(esp, eax);
    MEM32(0x7FA490) = edi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_00202E73: ;
    esp = esp + 4;
    MEM32(esi + 0x10) = 0;

loc_00202E7D: ;
    eax = MEM32(esi + 4);
    (void)0; /* test eax, eax - flags set for next jcc */
    ecx = MEM32(esi);
    MEM32(ecx + 4) = eax;
    if (TEST_Z(eax, eax)) goto loc_00202E8B; /* je: equal / zero */

loc_00202E89: ;
    MEM32(eax) = ecx;

loc_00202E8B: ;
    PUSH32(esp, esi);
    MEM32(esi) = 0;
    MEM32(esi + 4) = 0;
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_00202E9E: ;
    if (TEST_NZ(eax, eax)) goto loc_00202EC5; /* jne: not equal / not zero */

loc_00202EA2: ;
    edi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    edi++;
    edx--;
    PUSH32(esp, esi);
    MEM32(0x7FA490) = edi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_00202EC2: ;
    esp = esp + 4;

loc_00202EC5: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_00202EC7: ;
    MEM32(0x849AF4) = 0;

loc_00202ED1: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00202EE0
 * Original: 0x00202EE0 - 0x00202F67 (135 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00202EE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm3, xmm4, xmm5, xmm6;

loc_00202EE0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x214;
    eax = MEM32(0x84B868);
    xmm0 = MEMF(ebp + 0xC); /* movss */
    xmm0 = xmm0 * MEMF(0x648CE0); /* mulss */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax + 0x10;
    ecx = 0x10;
    edi = esp + 0x1E0;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    eax = esp + 0x1E0;
    ecx = esp + 0x20;
    esi = esp + 0x30;
    MEMF(ebp + 0xC) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0042851B(); /* call 0x0042851B */

loc_00202F2B: ;
    xmm1 = MEMF(0x648D14); /* movss */
    xmm0 = MEMF(ebp + 0xC); /* movss */
    ebx = 0; /* xor self */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEM32(0x849B0C) = ebx;
    if ((xmm1 <= xmm0)) { sub_00202F67(); return; } /* jbe: below or equal (unsigned <=) */

loc_00202F45: ;
    xmm3 = 0.0f; /* xorps self = zero */
    xmm5 = MEMF(0x64B1B4); /* movss */
    xmm4 = xmm3; /* movaps */
    xmm6 = xmm3; /* movaps */
    MEMF(esp + 0x18) = xmm3; /* movss */
    MEMF(esp + 0x1C) = xmm5; /* movss */
    g_seh_ebp = ebp; sub_00202FEE(); return; /* tail jmp 0x00202FEE */

}

/**
 * sub_00203760
 * Original: 0x00203760 - 0x0020382A (202 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00203760(void)
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

loc_00203760: ;
    esp = esp - 8;
    /* TODO: rdtsc  */
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470A00(); /* call 0x00470A00 */

loc_00203770: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x898);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470D50(); /* call 0x00470D50 */

loc_0020377E: ;
    MEM32(esp) = eax;
    MEM32(esp + 4) = edx;
    fp_push((double)SMEM32(esp)); /* fild */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esi) = (float)fp_top(); fp_popp(); /* fstp */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(edi) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esi)); /* fld float */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    PUSH32(esp, 0); sub_0047F05E(); /* call 0x0047F05E */

loc_002037A7: ;
    xmm1 = MEMF(esp + 0x14); /* movss */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fst */
    xmm2 = MEMF(esp + 0xC); /* movss */
    MEMF(esi) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    MEMF(esp + 0x10) = xmm0; /* movss */
    if ((xmm2 <= xmm0)) goto loc_002037D7; /* jbe: below or equal (unsigned <=) */

loc_002037CF: ;
    xmm1 = xmm1 - xmm2; /* subss */
    MEMF(esi) = xmm1; /* movss */

loc_002037D7: ;
    xmm0 = MEMF(esi); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x18); /* addss */
    MEMF(esi) = xmm0; /* movss */
    fp_push(MEMF(edi)); /* fld float */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    PUSH32(esp, 0); sub_0047F05E(); /* call 0x0047F05E */

loc_002037F0: ;
    MEMF(esp + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    eax = MEM32(esp + 0xC);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    MEM32(edi) = eax;
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_00203818; /* jbe: below or equal (unsigned <=) */

loc_00203808: ;
    xmm0 = MEMF(esp + 0x14); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0xC); /* subss */
    MEMF(edi) = xmm0; /* movss */

loc_00203818: ;
    xmm0 = MEMF(edi); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x18); /* addss */
    MEMF(edi) = xmm0; /* movss */
    esp = esp + 8;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00203830
 * Original: 0x00203830 - 0x002038F1 (193 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00203830(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00203830: ;
    esp = esp - 8;
    eax = MEM32(0x7FA1F8);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    ecx = esp + 0xC;
    esi = esp + 0x10;
    MEM32(esp + 0xC) = edi;
    MEM32(esp + 0x10) = edi;
    PUSH32(esp, 0); sub_00353EA0(); /* call 0x00353EA0 */

loc_00203852: ;
    (void)0; /* cmp MEM32(esp + 0xC), 1 - flags set for next jcc */
    ebp = 0xA;
    if (CMP_NE(MEM32(esp + 0xC), 1)) goto loc_00203863; /* jne: not equal / not zero */

loc_0020385E: ;
    ebp = 0xC;

loc_00203863: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    esi = 0; /* xor self */
    if (CMP_LE(ebx, edi)) goto loc_0020388A; /* jle: less or equal (signed <=) */

loc_0020386E: ;
    edi = edi;

loc_00203870: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(0x85E554);
    ecx = MEM32(ecx);
    PUSH32(esp, eax);
    edi = esi + ebp;
    PUSH32(esp, 0); sub_0024D090(); /* call 0x0024D090 */

loc_00203885: ;
    esi++;
    if (CMP_L(esi, ebx)) goto loc_00203870; /* jl: less (signed <) */

loc_0020388A: ;
    eax = MEM32(esp + 0x10);
    esi = ebx;
    (void)0; /* cmp ebx, eax - flags set for next jcc */
    POP32(esp, ebx);
    if (CMP_GE(ebx, eax)) goto loc_002038B3; /* jge: greater or equal (signed >=) */

loc_00203895: ;
    edx = MEM32(esp + 0x18);
    eax = MEM32(0x85E554);
    ecx = MEM32(eax);
    PUSH32(esp, edx);
    edi = esi + ebp + 4;
    PUSH32(esp, 0); sub_0024D090(); /* call 0x0024D090 */

loc_002038AA: ;
    eax = MEM32(esp + 0xC);
    esi++;
    if (CMP_L(esi, eax)) goto loc_00203895; /* jl: less (signed <) */

loc_002038B3: ;
    (void)0; /* cmp MEM32(0x7FA1F8), 0x29 - flags set for next jcc */
    xmm0 = MEMF(0x648E64); /* movss */
    if (CMP_EQ(MEM32(0x7FA1F8), 0x29)) goto loc_002038CC; /* je: equal / zero */

loc_002038C4: ;
    xmm0 = MEMF(0x648D14); /* movss */

loc_002038CC: ;
    xmm0 = xmm0 * MEMF(esp + 0x18); /* mulss */
    PUSH32(esp, ecx);
    ecx = MEM32(0x85E554);
    ecx = MEM32(ecx);
    edi = 0x12;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0024D090(); /* call 0x0024D090 */

loc_002038EA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00203900
 * Original: 0x00203900 - 0x00203922 (34 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00203900(void)
{
    int _flags = 0; /* fallback flag var */

loc_00203900: ;
    SET_LO8(eax, MEM8(0x801A33));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_00203922(); return; } /* jne: not equal / not zero */

loc_00203909: ;
    eax = MEM32(0x84B118);
    if (TEST_Z(eax, eax)) { sub_00203922(); return; } /* je: equal / zero */

loc_00203912: ;
    SET_LO8(ecx, MEM8(eax + 0x2C0));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) { sub_00203922(); return; } /* jne: not equal / not zero */

loc_0020391C: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00203930
 * Original: 0x00203930 - 0x00203B43 (531 bytes, 142 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00203930(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_00203930: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x48;
    eax = MEM32(0x85E554);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = 0x10;
    esi = 0x776590;
    edi = esp + 0x10;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = MEM32(eax);
    PUSH32(esp, 0x3F800000);
    edi = 5;
    PUSH32(esp, 0); sub_0024D090(); /* call 0x0024D090 */

loc_00203961: ;
    PUSH32(esp, 0); sub_00220240(); /* call 0x00220240 */

loc_00203966: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00203AFC; /* jne: not equal / not zero */

loc_0020396E: ;
    SET_LO8(eax, MEM8(0x849B20));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00203AFC; /* jne: not equal / not zero */

loc_0020397B: ;
    eax = MEM32(0x849AF8);
    eax = eax - 0;
    if ((eax == 0)) goto loc_00203ABA; /* je: equal / zero */

loc_00203989: ;
    eax--;
    if ((eax == 0)) goto loc_00203A78; /* je: equal / zero */

loc_00203990: ;
    eax--;
    if ((eax != 0)) goto loc_00203B2A; /* jne: not equal / not zero */

loc_00203997: ;
    eax = MEM32(0x849AFC);
    eax = eax - 0;
    if ((eax == 0)) goto loc_00203A15; /* je: equal / zero */

loc_002039A1: ;
    eax--;
    if ((eax != 0)) goto loc_00203B2A; /* jne: not equal / not zero */

loc_002039A8: ;
    SET_LO8(eax, MEM8(0x77A48C));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002039C5; /* jne: not equal / not zero */

loc_002039B1: ;
    ecx = MEM32(0x85E554);
    ecx = MEM32(ecx);
    PUSH32(esp, 0x3ECCCCCD);
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_0024D090(); /* call 0x0024D090 */

loc_002039C5: ;
    edx = MEM32(0x85E554);
    ecx = MEM32(edx);
    PUSH32(esp, 0x3E4CCCCD);
    edi = 6;
    PUSH32(esp, 0); sub_0024D090(); /* call 0x0024D090 */

loc_002039DC: ;
    eax = MEM32(0x85E554);
    ecx = MEM32(eax);
    PUSH32(esp, 0x3ECCCCCD);
    edi = 2;
    PUSH32(esp, 0); sub_0024D090(); /* call 0x0024D090 */

loc_002039F2: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0); sub_00203900(); /* call 0x00203900 */

loc_002039FC: ;
    ecx = MEM32(0x85E554);
    ecx = MEM32(ecx);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & 0xFFFFFFFCu;
    eax = eax + 7;
    edi = eax;
    goto loc_00203B25;

loc_00203A15: ;
    SET_LO8(eax, MEM8(0x77A48C));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00203A32; /* jne: not equal / not zero */

loc_00203A1E: ;
    edx = MEM32(0x85E554);
    ecx = MEM32(edx);
    PUSH32(esp, 0x3ECCCCCD);
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_0024D090(); /* call 0x0024D090 */

loc_00203A32: ;
    eax = MEM32(0x85E554);
    ecx = MEM32(eax);
    PUSH32(esp, 0x3ECCCCCD);
    edi = 1;
    PUSH32(esp, 0); sub_0024D090(); /* call 0x0024D090 */

loc_00203A48: ;
    PUSH32(esp, 0x3ECCCCCD);
    PUSH32(esp, 0); sub_00203830(); /* call 0x00203830 */

loc_00203A52: ;
    esp = esp + 4;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0); sub_00203900(); /* call 0x00203900 */

loc_00203A5F: ;
    ecx = MEM32(0x85E554);
    ecx = MEM32(ecx);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & 0xFFFFFFFCu;
    eax = eax + 7;
    edi = eax;
    goto loc_00203B25;

loc_00203A78: ;
    SET_LO8(eax, MEM8(0x77A48C));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00203A95; /* jne: not equal / not zero */

loc_00203A81: ;
    edx = MEM32(0x85E554);
    ecx = MEM32(edx);
    PUSH32(esp, 0x3F800000);
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_0024D090(); /* call 0x0024D090 */

loc_00203A95: ;
    eax = MEM32(0x85E554);
    ecx = MEM32(eax);
    PUSH32(esp, 0x3F19999A);
    edi = 6;
    PUSH32(esp, 0); sub_0024D090(); /* call 0x0024D090 */

loc_00203AAB: ;
    ecx = MEM32(0x85E554);
    ecx = MEM32(ecx);
    edi = 2;
    goto loc_00203B20;

loc_00203ABA: ;
    SET_LO8(eax, MEM8(0x77A48C));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00203AD7; /* jne: not equal / not zero */

loc_00203AC3: ;
    edx = MEM32(0x85E554);
    ecx = MEM32(edx);
    PUSH32(esp, 0x3F800000);
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_0024D090(); /* call 0x0024D090 */

loc_00203AD7: ;
    eax = MEM32(0x85E554);
    ecx = MEM32(eax);
    PUSH32(esp, 0x3F800000);
    edi = 1;
    PUSH32(esp, 0); sub_0024D090(); /* call 0x0024D090 */

loc_00203AED: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0); sub_00203830(); /* call 0x00203830 */

loc_00203AF7: ;
    esp = esp + 4;
    goto loc_00203B2A;

loc_00203AFC: ;
    ecx = MEM32(0x85E554);
    ecx = MEM32(ecx);
    PUSH32(esp, 0x3F800000);
    edi = 4;
    PUSH32(esp, 0); sub_0024D090(); /* call 0x0024D090 */

loc_00203B13: ;
    edx = MEM32(0x85E554);
    ecx = MEM32(edx);
    edi = 8;

loc_00203B20: ;
    PUSH32(esp, 0x3F800000);

loc_00203B25: ;
    PUSH32(esp, 0); sub_0024D090(); /* call 0x0024D090 */

loc_00203B2A: ;
    ecx = MEM32(0x85E554);
    PUSH32(esp, 1);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0024EBB0(); /* call 0x0024EBB0 */

loc_00203B3D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00203B50
 * Original: 0x00203B50 - 0x00203DEF (671 bytes, 214 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00203B50(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00203B50: ;
    SET_LO8(eax, MEM8(0x77A48C));
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    if (CMP_NE(LO8(eax), LO8(ebx))) goto loc_00203DED; /* jne: not equal / not zero */

loc_00203B60: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00220240(); /* call 0x00220240 */

loc_00203B66: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00203B94; /* je: equal / zero */

loc_00203B6A: ;
    if (CMP_NE(MEM32(0x849B24), ebx)) goto loc_00203B8A; /* jne: not equal / not zero */

loc_00203B72: ;
    eax = ZX8(MEM8(0x776558));
    esi = MEM32(eax * 4 + 0x8470FC);
    PUSH32(esp, 0); sub_0004E440(); /* call 0x0004E440 */

loc_00203B85: ;
    MEM32(0x849B24) = eax;

loc_00203B8A: ;
    POP32(esp, esi);
    MEM8(0x849B20) = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00203B94: ;
    if (CMP_EQ(MEM8(0x849B20), LO8(ebx))) goto loc_00203C15; /* je: equal / zero */

loc_00203B9C: ;
    ecx = ZX8(MEM8(0x776558));
    eax = MEM32(ecx * 4 + 0x8470FC);
    ecx = MEM32(0x849B24);
    if (CMP_LE(ecx, ebx)) goto loc_00203BC0; /* jle: less or equal (signed <=) */

loc_00203BB4: ;
    if (CMP_NE(MEM32(eax + 0xC), ecx)) goto loc_00203BC0; /* jne: not equal / not zero */

loc_00203BB9: ;
    eax = MEM32(eax + 4);
    if (CMP_NE(eax, ebx)) goto loc_00203BC5; /* jne: not equal / not zero */

loc_00203BC0: ;
    eax = 0x75A0B4;

loc_00203BC5: ;
    if (TEST_Z(MEM8(eax + 8), 0x10)) goto loc_00203DEC; /* je: equal / zero */

loc_00203BCF: ;
    edx = MEM32(0x847024);
    eax = MEM32(edx + 0x40);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    edx = edx | 0xFFFFFFFFu;
    eax = eax | 0xFFFFFFFFu;
    ecx = 0xD15;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_00203BF3: ;
    edx = MEM32(0x849B24);
    eax = 0; /* xor self */
    MEM8(0x7FA274) = LO8(ebx);
    MEM8(0x849B20) = LO8(ebx);
    PUSH32(esp, 0); sub_0004DF70(); /* call 0x0004DF70 */

loc_00203C0C: ;
    POP32(esp, esi);
    MEM32(0x849B24) = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00203C15: ;
    eax = ZX8(MEM8(0x776558));
    PUSH32(esp, edi);
    edi = 2;
    if (CMP_GE(eax, edi)) goto loc_00203C32; /* jge: greater or equal (signed >=) */

loc_00203C26: ;
    ecx = MEM32(eax * 4 + 0x8470FC);
    eax = MEM32(ecx + 8);
    goto loc_00203C37;

loc_00203C32: ;
    eax = 0x75A0B4;

loc_00203C37: ;
    esi = MEM32(eax + 8);
    if (TEST_Z(esi, 0x200)) goto loc_00203C6C; /* je: equal / zero */

loc_00203C42: ;
    edx = MEM32(0x847024);
    eax = MEM32(edx + 0x40);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    edx = edx | 0xFFFFFFFFu;
    eax = eax | 0xFFFFFFFFu;
    ecx = 0xD15;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_00203C66: ;
    MEM8(0x7FA274) = LO8(ebx);

loc_00203C6C: ;
    eax = MEM32(0x849AF8);
    eax = eax - ebx;
    if ((eax == 0)) goto loc_00203D79; /* je: equal / zero */

loc_00203C79: ;
    eax--;
    if ((eax == 0)) goto loc_00203D03; /* je: equal / zero */

loc_00203C80: ;
    eax--;
    if ((eax != 0)) goto loc_00203DEB; /* jne: not equal / not zero */

loc_00203C87: ;
    if (TEST_Z(esi, 0x100)) goto loc_00203DEB; /* je: equal / zero */

loc_00203C93: ;
    ecx = MEM32(0x847024);
    edx = MEM32(ecx + 0x40);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 4);
    PUSH32(esp, edx);
    edx = edx | 0xFFFFFFFFu;
    eax = eax | 0xFFFFFFFFu;
    ecx = 0xD15;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_00203CB8: ;
    esi = MEM32(0x85E554);
    edi = 7;
    eax = esi;
    PUSH32(esp, 0); sub_0024EB80(); /* call 0x0024EB80 */

loc_00203CCA: ;
    ebp = eax;
    edi = 3;
    eax = esi;
    PUSH32(esp, 0); sub_0024EB80(); /* call 0x0024EB80 */

loc_00203CD8: ;
    (void)0; /* cmp eax, ebp - flags set for next jcc */
    POP32(esp, ebp);
    eax = esi;
    if (CMP_G(eax, ebp)) goto loc_00203CE4; /* jg: greater (signed >) */

loc_00203CDF: ;
    edi = 7;

loc_00203CE4: ;
    PUSH32(esp, 0); sub_0024EB80(); /* call 0x0024EB80 */

loc_00203CE9: ;
    if (CMP_NE(eax, ebx)) goto loc_00203CFB; /* jne: not equal / not zero */

loc_00203CED: ;
    eax = MEM32(0x849AFC);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(0x849AF8) = eax;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00203CFB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_001F9AB0(); return; /* tail jmp 0x001F9AB0 */

loc_00203D03: ;
    if (TEST_Z(esi, 0x100)) goto loc_00203D3F; /* je: equal / zero */

loc_00203D0B: ;
    ecx = MEM32(0x847024);
    edx = MEM32(ecx + 0x40);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 4);
    PUSH32(esp, edx);
    edx = edx | 0xFFFFFFFFu;
    eax = eax | 0xFFFFFFFFu;
    ecx = 0xD15;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_00203D2F: ;
    eax = MEM32(0x849AF8);
    MEM32(0x849AFC) = eax;
    MEM32(0x849AF8) = edi;

loc_00203D3F: ;
    if (TEST_Z(esi, 0x800)) goto loc_00203DEB; /* je: equal / zero */

loc_00203D4B: ;
    ecx = MEM32(0x847024);
    edx = MEM32(ecx + 0x40);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 4);
    PUSH32(esp, edx);
    edx = edx | 0xFFFFFFFFu;
    eax = eax | 0xFFFFFFFFu;
    ecx = 0xD15;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_00203D6F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(0x849AF8) = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00203D79: ;
    if (TEST_Z(esi, 0x100)) goto loc_00203DB6; /* je: equal / zero */

loc_00203D81: ;
    eax = MEM32(0x847024);
    ecx = MEM32(eax + 0x40);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 4);
    PUSH32(esp, ecx);
    edx = edx | 0xFFFFFFFFu;
    eax = eax | 0xFFFFFFFFu;
    ecx = 0xD15;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_00203DA4: ;
    edx = MEM32(0x849AF8);
    MEM32(0x849AFC) = edx;
    MEM32(0x849AF8) = edi;

loc_00203DB6: ;
    if (TEST_Z(esi, 0x800)) goto loc_00203DEB; /* je: equal / zero */

loc_00203DBE: ;
    eax = MEM32(0x847024);
    ecx = MEM32(eax + 0x40);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 4);
    PUSH32(esp, ecx);
    edx = edx | 0xFFFFFFFFu;
    eax = eax | 0xFFFFFFFFu;
    ecx = 0xD15;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_00203DE1: ;
    MEM32(0x849AF8) = 1;

loc_00203DEB: ;
    POP32(esp, edi);

loc_00203DEC: ;
    POP32(esp, esi);

loc_00203DED: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00203DF0
 * Original: 0x00203DF0 - 0x00203E3D (77 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00203DF0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00203DF0: ;
    eax = MEM32(esp + 0xC);
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(eax) = xmm0; /* movss */
    xmm0 = MEMF(0x648E40); /* movss */
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(0x649228); /* movss */
    MEMF(eax + 8) = xmm0; /* movss */
    PUSH32(esp, 3);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_0032D0D0(); /* call 0x0032D0D0 */

loc_00203E23: ;
    ecx = MEM32(0x7FA1F8);
    esp = esp + 4;
    if (CMP_NE(ecx, 0x29)) { sub_00203E3D(); return; } /* jne: not equal / not zero */

loc_00203E31: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax);
    MEM16(ecx) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00203E60
 * Original: 0x00203E60 - 0x00203EA9 (73 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00203E60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00203E60: ;
    eax = MEM32(esp + 0xC);
    xmm0 = MEMF(0x649228); /* movss */
    MEMF(eax) = xmm0; /* movss */
    xmm0 = MEMF(0x648E40); /* movss */
    PUSH32(esp, esi);
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(0x648EA8); /* movss */
    PUSH32(esp, edi);
    MEMF(eax + 8) = xmm0; /* movss */
    PUSH32(esp, 6);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_0032D0D0(); /* call 0x0032D0D0 */

loc_00203E95: ;
    esi = eax;
    esp = esp + 4;
    if (CMP_NE(esi, 0x7D00)) { sub_00203EA9(); return; } /* jne: not equal / not zero */

loc_00203EA2: ;
    esi = 0xF4240;
    g_seh_ebp = ebp; sub_00203EB1(); return; /* tail jmp 0x00203EB1 */

}

/**
 * sub_00203FC0
 * Original: 0x00203FC0 - 0x00203FF8 (56 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00203FC0(void)
{
    float xmm0;

loc_00203FC0: ;
    eax = MEM32(esp + 0xC);
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(eax) = xmm0; /* movss */
    xmm0 = MEMF(0x648D40); /* movss */
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(eax + 8) = xmm0; /* movss */
    eax = MEM32(esp + 8);
    ecx = MEM32(eax);
    eax = MEM32(0x84B118);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00204000(); /* call 0x00204000 */

loc_00203FF6: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00204000
 * Original: 0x00204000 - 0x0020404D (77 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00204000(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00204000: ;
    esp = esp - 0xC;
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    if (TEST_Z(eax, eax)) { sub_0020404D(); return; } /* je: equal / zero */

loc_0020400C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = esp + 0x10;
    edi = esp + 0x14;
    esi = esp + 0x18;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0); sub_00353100(); /* call 0x00353100 */

loc_00204028: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x5F986C);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0046F583(); /* call 0x0046F583 */

loc_00204042: ;
    esp = esp + 0x14;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00204060
 * Original: 0x00204060 - 0x00204768 (1800 bytes, 467 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00204060(void)
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

loc_00204060: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x2A4;
    SET_LO8(eax, MEM8(0x7FA275));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00204761; /* je: equal / zero */

loc_0020407C: ;
    eax = MEM32(0x849AF4);
    (void)0; /* test eax, eax - flags set for next jcc */
    ebx = 1;
    if (TEST_NZ(eax, eax)) goto loc_002040DD; /* jne: not equal / not zero */

loc_0020408A: ;
    PUSH32(esp, ebx);
    eax = 0x5F988C;
    ecx = 0x5F98BC;
    PUSH32(esp, 0); sub_00086490(); /* call 0x00086490 */

loc_0020409A: ;
    MEM32(0x849AF4) = eax;
    eax = MEM32(eax + 0x24);
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_002040DD; /* je: equal / zero */

loc_002040A9: ;
    ecx = MEM32(eax + 8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xD46);
    PUSH32(esp, 0x5F98E8);
    PUSH32(esp, 0); sub_003ED030(); /* call 0x003ED030 */

loc_002040BD: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_002040C3: ;
    MEM32(0x7765D0) = eax;
    PUSH32(esp, eax);
    eax = MEM32(0x849AF4);
    ecx = MEM32(eax + 0x24);
    edx = MEM32(ecx + 8);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_000865C0(); /* call 0x000865C0 */

loc_002040DA: ;
    esp = esp + 0x18;

loc_002040DD: ;
    eax = MEM32(0x85E554);
    if (TEST_NZ(eax, eax)) goto loc_002042D5; /* jne: not equal / not zero */

loc_002040EA: ;
    esi = esp + 0x120;
    PUSH32(esp, 0); sub_0016D660(); /* call 0x0016D660 */

loc_002040F6: ;
    xmm0 = MEMF(0x648E68); /* movss */
    PUSH32(esp, 0x7F);
    PUSH32(esp, 0x5F9854);
    eax = esp + 0xA8;
    PUSH32(esp, eax);
    MEMF(esp + 0x154) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0042DD7A(); /* call 0x0042DD7A */

loc_0020411B: ;
    eax = esp + 0xA0;
    edx = esp + 0x22D;
    ecx = eax;
    edx = edx - ecx;
    /* nop */

loc_00204130: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00204130; /* jne: not equal / not zero */

loc_0020413A: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_00204148; /* jne: not equal / not zero */

loc_00204143: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_00204148: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (TEST_Z(esi, esi)) goto loc_00204191; /* je: equal / zero */

loc_0020416E: ;
    eax = MEM32(esi + 0x80);
    ecx = 4;
    if (CMP_B(eax, ecx)) goto loc_00204191; /* jb: below (unsigned <) */

loc_0020417D: ;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00204182: ;
    PUSH32(esp, 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0020418A: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_002041B2; /* jne: not equal / not zero */

loc_00204191: ;
    esi = MEM32(0x84A184);
    ecx = 4;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002041A3: ;
    PUSH32(esp, 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002041AB: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_002041C2; /* je: equal / zero */

loc_002041B2: ;
    edx = esp + 0x120;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0024E9C0(); /* call 0x0024E9C0 */

loc_002041C0: ;
    goto loc_002041C4;

loc_002041C2: ;
    eax = 0; /* xor self */

loc_002041C4: ;
    PUSH32(esp, 0x84B140);
    esp = esp - 0x80;
    MEM32(0x85E554) = eax;
    eax = esp;
    PUSH32(esp, 0x7F);
    PUSH32(esp, 0x5F9848);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042DD7A(); /* call 0x0042DD7A */

loc_002041E3: ;
    eax = MEM32(0x85E554);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0024EB40(); /* call 0x0024EB40 */

loc_002041EE: ;
    PUSH32(esp, 0x84B141);
    esp = esp - 0x80;
    eax = esp;
    PUSH32(esp, 0x7F);
    PUSH32(esp, 0x5F983C);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042DD7A(); /* call 0x0042DD7A */

loc_00204208: ;
    ecx = MEM32(0x85E554);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0024EB40(); /* call 0x0024EB40 */

loc_00204214: ;
    esi = MEM32(0x85E554);
    esp = esp - 0x80;
    eax = esp;
    PUSH32(esp, 0x7F);
    PUSH32(esp, 0x5F9834);
    PUSH32(esp, eax);
    edi = 0x203DF0;
    PUSH32(esp, 0); sub_0042DD7A(); /* call 0x0042DD7A */

loc_00204234: ;
    edx = MEM32(esi);
    PUSH32(esp, edx);
    eax = edi;
    PUSH32(esp, 0); sub_0024B890(); /* call 0x0024B890 */

loc_0020423E: ;
    esi = MEM32(0x85E554);
    esp = esp - 0x80;
    eax = esp;
    PUSH32(esp, 0x7F);
    PUSH32(esp, 0x5F02A0);
    PUSH32(esp, eax);
    edi = 0x203E60;
    PUSH32(esp, 0); sub_0042DD7A(); /* call 0x0042DD7A */

loc_0020425E: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    eax = edi;
    PUSH32(esp, 0); sub_0024B890(); /* call 0x0024B890 */

loc_00204268: ;
    esi = MEM32(0x85E554);
    esp = esp - 0x80;
    eax = esp;
    PUSH32(esp, 0x7F);
    PUSH32(esp, 0x5F982C);
    PUSH32(esp, eax);
    edi = 0x203F70;
    PUSH32(esp, 0); sub_0042DD7A(); /* call 0x0042DD7A */

loc_00204288: ;
    ecx = MEM32(esi);
    PUSH32(esp, ecx);
    eax = edi;
    PUSH32(esp, 0); sub_0024B890(); /* call 0x0024B890 */

loc_00204292: ;
    esi = MEM32(0x85E554);
    esp = esp - 0x80;
    eax = esp;
    PUSH32(esp, 0x7F);
    PUSH32(esp, 0x5E0150);
    PUSH32(esp, eax);
    edi = 0x203FC0;
    PUSH32(esp, 0); sub_0042DD7A(); /* call 0x0042DD7A */

loc_002042B2: ;
    edx = MEM32(esi);
    PUSH32(esp, edx);
    eax = edi;
    PUSH32(esp, 0); sub_0024B890(); /* call 0x0024B890 */

loc_002042BC: ;
    eax = MEM32(0x849AF4);
    ecx = MEM32(eax + 0x24);
    edx = MEM32(ecx + 8);
    eax = MEM32(0x85E554);
    ecx = MEM32(eax);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0024B8F0(); /* call 0x0024B8F0 */

loc_002042D5: ;
    if (TEST_NZ(MEM8(0x87A1C0), LO8(ebx))) goto loc_002042FA; /* jne: not equal / not zero */

loc_002042DD: ;
    edx = MEM32(0x87A1C0);
    PUSH32(esp, 0x875644);
    edx = edx | ebx;
    PUSH32(esp, 0x87A1AC);
    MEM32(0x87A1C0) = edx;
    PUSH32(esp, 0); sub_001CDBC0(); /* call 0x001CDBC0 */

loc_002042FA: ;
    eax = MEM32(0x5499E8);
    edx = MEM32(0x87A1AC);
    MEM8(0x87A1BC) = LO8(ebx);
    edi = MEM32(eax + 0x1A14);
    eax = MEM32(edi);
    (void)0; /* test eax, 0xFFFF - flags set for next jcc */
    MEM32(esp + 0x18) = edx;
    if (TEST_NZ(eax, 0xFFFF)) goto loc_00204337; /* jne: not equal / not zero */

loc_0020431E: ;
    eax = eax & 0x70000;
    if (CMP_NE(eax, 0x50000)) goto loc_00204337; /* jne: not equal / not zero */

loc_0020432A: ;
    eax = MEM32(edi + 0x14);
    if (TEST_Z(eax, eax)) goto loc_00204337; /* je: equal / zero */

loc_00204331: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053B830(); /* call 0x0053B830 */

loc_00204337: ;
    eax = MEM32(edi);
    eax++;
    esi = esp + 0x84;
    ebx = 0; /* xor self */
    MEM32(edi) = eax;
    PUSH32(esp, 0); sub_0053FC70(); /* call 0x0053FC70 */

loc_0020434A: ;
    ecx = 0; /* xor self */
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x20) = ecx;
    MEM32(esp + 0x24) = ecx;
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    MEM32(esp + 0x2C) = ecx;
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    MEM32(esp + 0x34) = ecx;
    esi = MEM32(edi + 4);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x90);
    eax = ecx;
    PUSH32(esp, 0); sub_00523309(); /* call 0x00523309 */

loc_0020437C: ;
    edx = eax;
    eax = MEM32(esp + 0xA4);
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xB0);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_00522D1F(); /* call 0x00522D1F */

loc_0020439D: ;
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    MEM32(esp + 0x2C) = ebx;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x24);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    eax = ebx;
    MEM32(esp + 0x2C) = 0x40001;
    MEM32(esp + 0x30) = esi;
    PUSH32(esp, 0); sub_003EAF20(); /* call 0x003EAF20 */

loc_002043C1: ;
    esp = esp + 0x10;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0053B870(); /* call 0x0053B870 */

loc_002043CA: ;
    SET_LO8(eax, MEM8(0x7FA271));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00204440; /* je: equal / zero */

loc_002043D3: ;
    PUSH32(esp, 0); sub_0042B72A(); /* call 0x0042B72A */

loc_002043D8: ;
    eax = eax - MEM32(0x7FA26C);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x18) = eax;
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    if (CMP_GE(eax & eax, 0)) goto loc_002043F0; /* jge: greater or equal (signed >=) */

loc_002043EA: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_002043F0: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(0x648D14)); /* fld float */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_00204431; /* jbe: below or equal (unsigned <=) */

loc_0020441C: ;
    xmm0 = MEMF(0x648D14); /* movss */
    MEM8(0x7FA271) = 0;
    MEMF(esp + 0x14) = xmm0; /* movss */

loc_00204431: ;
    MEM32(0x849AF8) = 0;
    goto loc_002045B0;

loc_00204440: ;
    SET_LO8(eax, MEM8(0x7FA270));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002045A2; /* je: equal / zero */

loc_0020444D: ;
    PUSH32(esp, 0); sub_0042B72A(); /* call 0x0042B72A */

loc_00204452: ;
    eax = eax - MEM32(0x7FA26C);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x14) = eax;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    if (CMP_GE(eax & eax, 0)) goto loc_0020446A; /* jge: greater or equal (signed >=) */

loc_00204464: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_0020446A: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fsubr dword ptr [0x648d14] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fst */
    fp_push(MEMF(0x875798)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_002045B0; /* jbe: below or equal (unsigned <=) */

loc_00204496: ;
    edi = MEM32(0x847024);
    SET_LO8(eax, MEM8(edi + 0x85));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(0x7FA275) = 0;
    MEM8(0x7FA270) = 0;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0020451A; /* jne: not equal / not zero */

loc_002044B4: ;
    esi = MEM32(edi + 0x40);
    SET_LO8(eax, MEM8(esi + 0x14));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(0x847046) = 0;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002044D3; /* je: equal / zero */

loc_002044C5: ;
    ebx = MEM32(esi + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_0002F2C0(); /* call 0x0002F2C0 */

loc_002044CF: ;
    MEM8(esi + 0x14) = 0;

loc_002044D3: ;
    ebx = MEM32(edi + 0x3C);
    if (CMP_EQ(MEM8(ebx), 0)) goto loc_002044E5; /* je: equal / zero */

loc_002044DB: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_0001E4B0(); /* call 0x0001E4B0 */

loc_002044E2: ;
    MEM8(ebx) = 0;

loc_002044E5: ;
    SET_LO8(eax, MEM8(0x7819D5));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    ecx = MEM32(edi + 0x44);
    MEM8(ecx + 0x1D) = 0;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0020451A; /* jne: not equal / not zero */

loc_002044F5: ;
    eax = MEM32(edi + 0x3C);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    eax = 0x23;
    PUSH32(esp, 0); sub_0001E8B0(); /* call 0x0001E8B0 */

loc_00204505: ;
    if (TEST_Z(eax, eax)) goto loc_0020451A; /* je: equal / zero */

loc_00204509: ;
    SET_LO8(ebx, 1);
    edi = eax;
    MEM8(eax + 0x1E) = 0;
    MEM8(eax + 0x21) = 1;
    PUSH32(esp, 0); sub_000212C0(); /* call 0x000212C0 */

loc_0020451A: ;
    PUSH32(esp, 0); sub_0001B140(); /* call 0x0001B140 */

loc_0020451F: ;
    if (TEST_Z(eax, eax)) goto loc_0020452D; /* je: equal / zero */

loc_00204523: ;
    MEM32(0x847050) = 1;

loc_0020452D: ;
    eax = 0; /* xor self */
    MEM8(0x7FA272) = 0;
    MEM32(0x849AF8) = eax;
    MEM32(0x849B00) = eax;
    PUSH32(esp, 0); sub_001C7000(); /* call 0x001C7000 */

loc_00204545: ;
    esi = esp + 0x18;
    edx = eax;
    PUSH32(esp, 0); sub_001CDCE0(); /* call 0x001CDCE0 */

loc_00204550: ;
    ecx = MEM32(0x84B11C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_0020455D: ;
    PUSH32(esp, 0); sub_00202DD0(); /* call 0x00202DD0 */

loc_00204562: ;
    eax = MEM32(0x84B118);
    if (TEST_Z(eax, eax)) goto loc_0020457F; /* je: equal / zero */

loc_0020456B: ;
    esi = eax;
    MEM8(eax + 0x2B8) = 0;
    PUSH32(esp, 0); sub_0042B72A(); /* call 0x0042B72A */

loc_00204579: ;
    MEM32(esi + 0x2BC) = eax;

loc_0020457F: ;
    eax = MEM32(0x85E554);
    MEM32(esp + 0x18) = eax;
    eax = esp + 0x18;
    PUSH32(esp, 0); sub_00227990(); /* call 0x00227990 */

loc_00204591: ;
    MEM32(0x85E554) = 0;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_002045A2: ;
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */

loc_002045B0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0xF1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_0053B9F0(); /* call 0x0053B9F0 */

loc_002045C7: ;
    xmm0 = MEMF(esp + 0x14); /* movss */
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x17);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x43340000);
    PUSH32(esp, 0x43700000);
    PUSH32(esp, 0x43160000);
    PUSH32(esp, 0x43480000);
    MEMF(esp + 0x58) = xmm0; /* movss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    MEMF(esp + 0x50) = xmm0; /* movss */
    MEMF(esp + 0x4C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003570F0(); /* call 0x003570F0 */

loc_00204606: ;
    xmm1 = MEMF(0x64B2F0); /* movss */
    eax = MEM32(0x84B868);
    xmm0 = MEMF(0x64B2EC); /* movss */
    edx = MEM32(esp + 0x30);
    MEMF(esp + 0x70) = xmm1; /* movss */
    xmm1 = MEMF(0x64B2E8); /* movss */
    eax = eax + 0x90;
    MEMF(esp + 0x84) = xmm1; /* movss */
    xmm1 = MEMF(0x648D34); /* movss */
    esi = eax;
    MEMF(esp + 0x5C) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x88) = xmm1; /* movss */
    xmm1 = MEMF(0x64B2E4); /* movss */
    ecx = 0x10;
    edi = esp + 0xBC;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    PUSH32(esp, edx);
    edi = eax;
    MEMF(esp + 0x64) = xmm0; /* movss */
    MEMF(esp + 0x68) = xmm0; /* movss */
    MEMF(esp + 0x6C) = xmm0; /* movss */
    MEMF(esp + 0x70) = xmm0; /* movss */
    MEMF(esp + 0x78) = xmm0; /* movss */
    MEMF(esp + 0x7C) = xmm0; /* movss */
    MEMF(esp + 0x80) = xmm0; /* movss */
    MEMF(esp + 0x84) = xmm0; /* movss */
    MEMF(esp + 0x90) = xmm0; /* movss */
    MEMF(esp + 0x94) = xmm0; /* movss */
    MEMF(esp + 0x98) = xmm1; /* movss */
    MEMF(esp + 0x9C) = xmm0; /* movss */
    ecx = 0x10;
    esi = esp + 0x60;
    PUSH32(esp, ebx);
    MEM32(esp + 0x3C) = eax;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    PUSH32(esp, 0); sub_00202EE0(); /* call 0x00202EE0 */

loc_002046DF: ;
    SET_LO8(eax, MEM8(0x7FA270));
    esp = esp + 0x24;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002046F5; /* jne: not equal / not zero */

loc_002046EB: ;
    PUSH32(esp, 0); sub_00203930(); /* call 0x00203930 */

loc_002046F0: ;
    PUSH32(esp, 0); sub_00203B50(); /* call 0x00203B50 */

loc_002046F5: ;
    if (TEST_NZ(MEM8(0x87A1C0), 1)) goto loc_0020471C; /* jne: not equal / not zero */

loc_002046FE: ;
    edx = MEM32(0x87A1C0);
    PUSH32(esp, 0x875644);
    edx = edx | 1;
    PUSH32(esp, 0x87A1AC);
    MEM32(0x87A1C0) = edx;
    PUSH32(esp, 0); sub_001CDBC0(); /* call 0x001CDBC0 */

loc_0020471C: ;
    eax = 0; /* xor self */
    edi = edi;

loc_00204720: ;
    if (CMP_EQ(ebx, MEM32(eax * 4 + 0x87A1AC))) goto loc_00204748; /* je: equal / zero */

loc_00204729: ;
    eax++;
    if (CMP_L(eax, 4)) goto loc_00204720; /* jl: less (signed <) */

loc_0020472F: ;
    edi = MEM32(esp + 0x18);
    ecx = 0x10;
    esi = esp + 0xA0;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00204748: ;
    edi = MEM32(esp + 0x18);
    ecx = 0x10;
    esi = esp + 0xA0;
    MEM8(eax + 0x87A1BC) = 0;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */

loc_00204761: ;
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
 * sub_00204770
 * Original: 0x00204770 - 0x0020496A (506 bytes, 135 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00204770(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00204770: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x4C;
    SET_LO8(eax, MEM8(0x849AC0));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, esi);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00204965; /* je: equal / zero */

loc_00204787: ;
    eax = MEM32(0x849AA4);
    if (TEST_Z(eax, eax)) goto loc_00204965; /* je: equal / zero */

loc_00204794: ;
    eax = MEM32(0x849ACC);
    if (TEST_Z(eax, eax)) goto loc_00204965; /* je: equal / zero */

loc_002047A1: ;
    PUSH32(esp, 0x7767F0);
    PUSH32(esp, 0); sub_0021F9C0(); /* call 0x0021F9C0 */

loc_002047AB: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00202C40(); /* call 0x00202C40 */

loc_002047B2: ;
    ecx = MEM32(0x849AA4);
    xmm0 = 0.0f; /* xorps self = zero */
    eax = (uint32_t)(int32_t)SMEM8(0x7FA230);
    esi = MEM32(0x5499E8);
    eax = eax << 6;
    eax = eax + ecx + 0x20;
    MEMF(eax + 0x38) = xmm0; /* movss */
    MEMF(eax + 0x34) = xmm0; /* movss */
    MEMF(eax + 0x30) = xmm0; /* movss */
    MEMF(eax + 0x2C) = xmm0; /* movss */
    MEMF(eax + 0x24) = xmm0; /* movss */
    MEMF(eax + 0x20) = xmm0; /* movss */
    MEMF(eax + 0x1C) = xmm0; /* movss */
    MEMF(eax + 0x18) = xmm0; /* movss */
    MEMF(eax + 0x10) = xmm0; /* movss */
    MEMF(eax + 0xC) = xmm0; /* movss */
    MEMF(eax + 8) = xmm0; /* movss */
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(eax + 0x3C) = xmm0; /* movss */
    MEMF(eax + 0x28) = xmm0; /* movss */
    MEMF(eax + 0x14) = xmm0; /* movss */
    MEMF(eax) = xmm0; /* movss */
    eax = MEM32(esi);
    ecx = MEM32(esi + 4);
    esp = esp + 8;
    if (CMP_B(eax, ecx)) goto loc_00204841; /* jb: below (unsigned <) */

loc_00204832: ;
    eax = MEM32(0x54A8B8);
    edx = eax;
    edx = edx >> 1;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_00204841: ;
    MEM32(eax) = 0x4030C;
    MEM32(eax + 4) = 0;
    ecx = MEM32(0x549B40);
    MEM32(eax + 8) = 0x41D78;
    MEM32(eax + 0xC) = ecx;
    eax = eax + 0x10;
    MEM32(esi) = eax;
    eax = MEM32(0x549C34);
    (void)0; /* cmp eax, 2 - flags set for next jcc */
    MEM32(0x549C34) = 0;
    if (CMP_NE(eax, 2)) goto loc_002048A6; /* jne: not equal / not zero */

loc_00204877: ;
    PUSH32(esp, 0); sub_005384E0(); /* call 0x005384E0 */

loc_0020487C: ;
    PUSH32(esp, 0); sub_00536810(); /* call 0x00536810 */

loc_00204881: ;
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_00204897; /* jb: below (unsigned <) */

loc_00204888: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_00204897: ;
    PUSH32(esp, esi);
    edx = eax;
    PUSH32(esp, 0); sub_00538030(); /* call 0x00538030 */

loc_0020489F: ;
    PUSH32(esp, 0); sub_00537E30(); /* call 0x00537E30 */

loc_002048A4: ;
    MEM32(esi) = eax;

loc_002048A6: ;
    edx = 1;
    ecx = 0x4035C;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_002048B5: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEM32(0x549AF8) = 1;
    PUSH32(esp, 0); sub_0053B9F0(); /* call 0x0053B9F0 */

loc_002048D3: ;
    edx = MEM32(0x849AA4);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00206810(); /* call 0x00206810 */

loc_002048DF: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    eax = MEM32(0x849AA4);
    PUSH32(esp, 0x5D5828);
    PUSH32(esp, 0); sub_0020C150(); /* call 0x0020C150 */

loc_002048F3: ;
    esp = esp + 0xC;
    esi = esp + 0x10;
    PUSH32(esp, 0); sub_00216DB0(); /* call 0x00216DB0 */

loc_002048FF: ;
    ecx = MEM32(0x7F9F60);
    eax = MEM32(0x849ACC);
    ecx++;
    eax = eax - 2;
    MEM32(0x7FDD48) = ecx;
    if ((eax == 0)) goto loc_0020494A; /* je: equal / zero */

loc_00204916: ;
    eax = eax - 3;
    if ((eax == 0)) goto loc_00204924; /* je: equal / zero */

loc_0020491B: ;
    eax = eax - 6;
    if ((eax != 0)) goto loc_0020495B; /* jne: not equal / not zero */

loc_00204920: ;
    PUSH32(esp, 1);
    goto loc_0020494C;

loc_00204924: ;
    eax = MEM32(0x849AD0);
    ecx = MEM32(0x849AA4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0022D2D0(); /* call 0x0022D2D0 */

loc_00204938: ;
    eax = MEM32(0x7768C0);
    esp = esp + 0xC;
    MEM32(0x84B868) = eax;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0020494A: ;
    PUSH32(esp, 0);

loc_0020494C: ;
    edx = MEM32(0x849AA4);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0022AD60(); /* call 0x0022AD60 */

loc_00204958: ;
    esp = esp + 8;

loc_0020495B: ;
    eax = MEM32(0x7768C0);
    MEM32(0x84B868) = eax;

loc_00204965: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00204970
 * Original: 0x00204970 - 0x00204A44 (212 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00204970(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00204970: ;
    edx = 0x8006;
    ecx = 0x40350;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0020497F: ;
    eax = MEM32(0x849C44);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(0x549B20) = 0x8006;
    if (TEST_Z(eax, eax)) goto loc_0020499F; /* je: equal / zero */

loc_00204992: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x779B10);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0024EBB0(); /* call 0x0024EBB0 */

loc_0020499F: ;
    (void)0; /* cmp MEM8(0x7FA274), 2 - flags set for next jcc */
    MEM32(0x849C44) = 0;
    if (CMP_EQ(MEM8(0x7FA274), 2)) goto loc_00204A43; /* je: equal / zero */

loc_002049B6: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00204770(); /* call 0x00204770 */

loc_002049BC: ;
    SET_LO8(eax, MEM8(0x7819D5));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    SET_LO8(ebx, MEM8(0x7FA275));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00204A2C; /* jne: not equal / not zero */

loc_002049CB: ;
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_002049E8; /* jne: not equal / not zero */

loc_002049CF: ;
    SET_LO8(eax, MEM8(0x849870));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002049E8; /* jne: not equal / not zero */

loc_002049D8: ;
    PUSH32(esp, 0); sub_00220240(); /* call 0x00220240 */

loc_002049DD: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002049E8; /* je: equal / zero */

loc_002049E1: ;
    MEM8(0x7FA274) = 1;

loc_002049E8: ;
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    MEM16(0x7765D4) = 0;
    if (TEST_Z(LO8(ebx), LO8(ebx))) { sub_00204A44(); return; } /* je: equal / zero */

loc_002049F5: ;
    SET_LO8(eax, MEM8(0x8498A9));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_00204A44(); return; } /* jne: not equal / not zero */

loc_002049FE: ;
    SET_LO16(eax, MEM16(0x849820));
    SET_LO16(eax, LO16(eax) + 0x20);
    (void)0; /* cmp LO16(eax), 0xFF - flags set for next jcc */
    MEM16(0x849820) = LO16(eax);
    if (CMP_LE(LO16(eax), 0xFF)) goto loc_00204A1D; /* jle: less or equal (signed <=) */

loc_00204A14: ;
    MEM16(0x849820) = 0xFF;

loc_00204A1D: ;
    PUSH32(esp, 0); sub_002AAB90(); /* call 0x002AAB90 */

loc_00204A22: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00204A42; /* jne: not equal / not zero */

loc_00204A26: ;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_00204060(); return; /* tail jmp 0x00204060 */

loc_00204A2C: ;
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_002049E8; /* jne: not equal / not zero */

loc_00204A30: ;
    SET_LO8(eax, MEM8(0x7FA274));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002049E8; /* jne: not equal / not zero */

loc_00204A39: ;
    SET_LO8(eax, MEM8(0x862D90));
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00204A44(); return; } /* je: equal / zero */

loc_00204A42: ;
    POP32(esp, ebx);

loc_00204A43: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00204A80
 * Original: 0x00204A80 - 0x00204AA7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00204A80(void)
{
    int _flags = 0; /* fallback flag var */

loc_00204A80: ;
    SET_LO16(eax, MEM16(0x849820));
    if (TEST_Z(LO16(eax), LO16(eax))) goto loc_00204AA6; /* je: equal / zero */

loc_00204A8B: ;
    SET_LO8(ecx, MEM8(0x863D11));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) { sub_00204AA7(); return; } /* jne: not equal / not zero */

loc_00204A95: ;
    eax = SX16(LO16(eax));
    PUSH32(esp, eax);
    edx = 0x6A;
    PUSH32(esp, 0); sub_00202100(); /* call 0x00202100 */

loc_00204AA3: ;
    esp = esp + 4;

loc_00204AA6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00204B20
 * Original: 0x00204B20 - 0x00204B68 (72 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00204B20(void)
{
    int _flags = 0; /* fallback flag var */

loc_00204B20: ;
    if (CMP_EQ(MEM32(0x7FA1F8), 0x21)) goto loc_00204B67; /* je: equal / zero */

loc_00204B29: ;
    ecx = MEM32(0x770F24);
    eax = 0x1EA;
    eax = eax - ecx;
    MEM8(0x80174C) = 0;
    if (((int32_t)eax >= 0)) goto loc_00204B4D; /* jns: not sign (positive) */

loc_00204B3F: ;
    eax = 0; /* xor self */
    SET_LO8(ecx, LO8(ecx) | 0xFF);
    SET_LO8(ecx, LO8(ecx) - LO8(eax));
    MEM8(0x6BCFE8) = LO8(ecx);
    esp += 4; return; /* ret */

loc_00204B4D: ;
    eax = eax << 4;
    if (CMP_LE(eax, 0xFF)) goto loc_00204B5C; /* jle: less or equal (signed <=) */

loc_00204B57: ;
    eax = 0xFF;

loc_00204B5C: ;
    SET_LO8(ecx, LO8(ecx) | 0xFF);
    SET_LO8(ecx, LO8(ecx) - LO8(eax));
    MEM8(0x6BCFE8) = LO8(ecx);

loc_00204B67: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00204B70
 * Original: 0x00204B70 - 0x00204DB6 (582 bytes, 141 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00204B70(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;

loc_00204B70: ;
    SET_LO8(eax, MEM8(0x76F0E0));
    esp = esp - 0x38;
    if (CMP_EQ(LO8(eax), 1)) goto loc_00204DB2; /* je: equal / zero */

loc_00204B80: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = 0xC;
    esi = 0x5F97FC;
    edi = esp + 0x10;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    esi = MEM32(0x5499E8);
    MEM8(0x807664) = 0x66;
    MEM8(0x807665) = 0xCC;
    MEM8(0x807666) = 0xFF;
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_00204BC3; /* jb: below (unsigned <) */

loc_00204BB4: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_00204BC3: ;
    MEM32(eax) = 0x4030C;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    MEM32(eax + 4) = ebx;
    ecx = MEM32(0x549B40);
    MEM32(eax + 8) = 0x41D78;
    MEM32(eax + 0xC) = ecx;
    eax = eax + 0x10;
    MEM32(esi) = eax;
    eax = MEM32(0x549C34);
    (void)0; /* cmp eax, 2 - flags set for next jcc */
    MEM32(0x549C34) = ebx;
    if (CMP_NE(eax, 2)) goto loc_00204C23; /* jne: not equal / not zero */

loc_00204BF4: ;
    PUSH32(esp, 0); sub_005384E0(); /* call 0x005384E0 */

loc_00204BF9: ;
    PUSH32(esp, 0); sub_00536810(); /* call 0x00536810 */

loc_00204BFE: ;
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_00204C14; /* jb: below (unsigned <) */

loc_00204C05: ;
    eax = MEM32(0x54A8B8);
    edx = eax;
    edx = edx >> 1;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_00204C14: ;
    PUSH32(esp, esi);
    edx = eax;
    PUSH32(esp, 0); sub_00538030(); /* call 0x00538030 */

loc_00204C1C: ;
    PUSH32(esp, 0); sub_00537E30(); /* call 0x00537E30 */

loc_00204C21: ;
    MEM32(esi) = eax;

loc_00204C23: ;
    (void)0; /* cmp MEM32(0x8086E8), ebx - flags set for next jcc */
    MEM8(0x8086C6) = 1;
    if (CMP_NE(MEM32(0x8086E8), ebx)) goto loc_00204C39; /* jne: not equal / not zero */

loc_00204C32: ;
    PUSH32(esp, 0); sub_003D2A40(); /* call 0x003D2A40 */

loc_00204C37: ;
    goto loc_00204C3E;

loc_00204C39: ;
    PUSH32(esp, 0); sub_003D2EF0(); /* call 0x003D2EF0 */

loc_00204C3E: ;
    xmm6 = 0.0f; /* xorps self = zero */
    xmm7 = MEMF(0x648D14); /* movss */
    MEMF(0x80761C) = xmm6; /* movss */
    MEMF(0x807620) = xmm6; /* movss */
    MEMF(0x807624) = xmm6; /* movss */
    xmm5 = xmm6; /* movaps */
    xmm4 = xmm6; /* movaps */
    xmm3 = xmm7; /* movaps */
    PUSH32(esp, 0); sub_003D3AA0(); /* call 0x003D3AA0 */

loc_00204C6F: ;
    xmm4 = xmm7; /* movaps */
    xmm3 = xmm6; /* movaps */
    PUSH32(esp, 0); sub_003D3B30(); /* call 0x003D3B30 */

loc_00204C7A: ;
    xmm0 = MEMF(0x64971C); /* movss */
    PUSH32(esp, 0x5F59F0);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    MEMF(0x8076A4) = xmm0; /* movss */
    xmm0 = MEMF(0x648F58); /* movss */
    PUSH32(esp, 0x7FFFFFFF);
    eax = esp + 0x24;
    MEM32(0x8076B0) = ebx;
    MEM8(0x8086CA) = LO8(ebx);
    MEM8(0x807667) = 0xFF;
    MEMF(0x80765C) = xmm0; /* movss */
    MEMF(0x807660) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003D4F60(); /* call 0x003D4F60 */

loc_00204CD2: ;
    xmm1 = MEMF(0x648D10); /* movss */
    xmm2 = MEMF(esp + 0x1C); /* movss */
    xmm0 = MEMF(0x64994C); /* movss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm0 = xmm0 - xmm2; /* subss */
    xmm2 = MEMF(esp + 0x20); /* movss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm1 = MEMF(0x58BD48); /* movss */
    edx = esp + 0x24;
    xmm1 = xmm1 - xmm2; /* subss */
    xmm1 = xmm1 - MEMF(0x6495C4); /* subss */
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    MEMF(0x807650) = xmm0; /* movss */
    MEMF(0x807654) = xmm1; /* movss */
    MEMF(0x807658) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003D3E60(); /* call 0x003D3E60 */

loc_00204D31: ;
    esp = esp + 0x18;
    PUSH32(esp, ebx);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_00204D3C: ;
    ecx = MEM32(0x8072F0);
    esi = MEM32(0x776190);
    ecx--;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(0x8072F0) = ecx;
    MEM8(0x8086CA) = 1;
    if (CMP_EQ(esi, ebx)) goto loc_00204DAF; /* je: equal / zero */

loc_00204D5A: ;
    PUSH32(esp, 0); sub_00063730(); /* call 0x00063730 */

loc_00204D5F: ;
    eax = MEM32(0x776190);
    ecx = MEM32(eax + 4);
    if (CMP_NE(MEM32(ecx + 4), ebx)) goto loc_00204DAF; /* jne: not equal / not zero */

loc_00204D6C: ;
    eax = MEM32(ecx + 0x18);
    if (CMP_EQ(eax, ebx)) goto loc_00204D77; /* je: equal / zero */

loc_00204D73: ;
    MEM16(ecx + 0x2C) = MEM16(ecx + 0x2C) + 1;

loc_00204D77: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0); sub_003FA5C0(); /* call 0x003FA5C0 */

loc_00204D80: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3F280000);
    PUSH32(esp, 0x3F680000);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x43280000);
    PUSH32(esp, 0x43680000);
    PUSH32(esp, 0x42780000);
    PUSH32(esp, 0x434C0000);
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_00356EB0(); /* call 0x00356EB0 */

loc_00204DAC: ;
    esp = esp + 0x24;

loc_00204DAF: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);

loc_00204DB2: ;
    esp = esp + 0x38;
    esp += 4; return; /* ret */

}

/**
 * sub_00204DC0
 * Original: 0x00204DC0 - 0x00204DDF (31 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00204DC0(void)
{

loc_00204DC0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0x6BD548);
    eax = eax + 0xFFFFFFF9u;
    PUSH32(esp, 0); sub_001FAEE0(); /* call 0x001FAEE0 */

loc_00204DD1: ;
    ecx = MEM32(esp + 0xC);
    esp = esp + 4;
    MEM32(ecx) = 0x6BD548;
    esp += 4; return; /* ret */

}

/**
 * sub_00204DE0
 * Original: 0x00204DE0 - 0x00204E09 (41 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00204DE0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00204DE0: ;
    eax = (uint32_t)(int32_t)SMEM8(0x77625E);
    eax = eax + 0xFFFFFFFDu;
    if (((int32_t)eax < 0)) { sub_00204E09(); return; } /* js: sign (negative) */

loc_00204DEC: ;
    if (CMP_GE(eax, 3)) { sub_00204E09(); return; } /* jge: greater or equal (signed >=) */

loc_00204DF1: ;
    if (CMP_G(eax, 2)) goto loc_00204E02; /* jg: greater (signed >) */

loc_00204DF6: ;
    eax = MEM32(eax * 4 + 0x84B120);
    eax = ZX8(MEM8(eax + 0x1C));
    esp += 4; return; /* ret */

loc_00204E02: ;
    eax = 0; /* xor self */
    eax = ZX8(MEM8(eax + 0x1C));
    esp += 4; return; /* ret */

}

/**
 * sub_00204E80
 * Original: 0x00204E80 - 0x00204EC9 (73 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00204E80(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00204E80: ;
    eax = MEM32(esp + 0xC);
    xmm0 = MEMF(0x649114); /* movss */
    MEMF(eax) = xmm0; /* movss */
    xmm0 = MEMF(0x649110); /* movss */
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(0x6494E8); /* movss */
    MEMF(eax + 8) = xmm0; /* movss */
    eax = MEM32(0x84B120);
    ecx = MEM32(eax + 8);
    if (TEST_Z(ecx, ecx)) { sub_00204EC9(); return; } /* je: equal / zero */

loc_00204EB6: ;
    eax = ecx;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    ecx = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046E49A(); /* call 0x0046E49A */

loc_00204EC5: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00205010
 * Original: 0x00205010 - 0x00205054 (68 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00205010(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00205010: ;
    eax = MEM32(esp + 0xC);
    xmm0 = MEMF(0x649228); /* movss */
    MEMF(eax) = xmm0; /* movss */
    xmm0 = MEMF(0x648E40); /* movss */
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(0x648EA8); /* movss */
    MEMF(eax + 8) = xmm0; /* movss */
    eax = (uint32_t)(int32_t)SMEM8(0x77625E);
    eax = eax - 3;
    if (((int32_t)eax < 0)) { sub_00205054(); return; } /* js: sign (negative) */

loc_00205046: ;
    if (CMP_G(eax, 2)) { sub_00205054(); return; } /* jg: greater (signed >) */

loc_0020504B: ;
    eax = MEM32(eax * 4 + 0x84B120);
    g_seh_ebp = ebp; sub_00205056(); return; /* tail jmp 0x00205056 */

}

/**
 * sub_00205070
 * Original: 0x00205070 - 0x002050B4 (68 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00205070(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00205070: ;
    eax = MEM32(esp + 0xC);
    xmm0 = MEMF(0x648E40); /* movss */
    MEMF(eax) = xmm0; /* movss */
    xmm0 = MEMF(0x649128); /* movss */
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(0x648E14); /* movss */
    MEMF(eax + 8) = xmm0; /* movss */
    eax = (uint32_t)(int32_t)SMEM8(0x77625E);
    eax = eax - 3;
    if (((int32_t)eax < 0)) { sub_002050B4(); return; } /* js: sign (negative) */

loc_002050A6: ;
    if (CMP_G(eax, 2)) { sub_002050B4(); return; } /* jg: greater (signed >) */

loc_002050AB: ;
    eax = MEM32(eax * 4 + 0x84B120);
    g_seh_ebp = ebp; sub_002050B6(); return; /* tail jmp 0x002050B6 */

}

/**
 * sub_002050D0
 * Original: 0x002050D0 - 0x0020511B (75 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002050D0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_002050D0: ;
    eax = MEM32(esp + 0xC);
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(eax) = xmm0; /* movss */
    xmm0 = MEMF(0x648D40); /* movss */
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(eax + 8) = xmm0; /* movss */
    eax = (uint32_t)(int32_t)SMEM8(0x77625E);
    eax = eax - 3;
    if (((int32_t)eax < 0)) { sub_0020511B(); return; } /* js: sign (negative) */

loc_00205101: ;
    if (CMP_G(eax, 2)) { sub_0020511B(); return; } /* jg: greater (signed >) */

loc_00205106: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(ecx);
    eax = MEM32(eax * 4 + 0x84B120);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00204000(); /* call 0x00204000 */

loc_00205119: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00205130
 * Original: 0x00205130 - 0x0020513D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00205130(void)
{
    int _flags = 0; /* fallback flag var */

loc_00205130: ;
    eax = MEM32(0x85E550);
    if (TEST_NZ(eax, eax)) { sub_0020513D(); return; } /* jne: not equal / not zero */

loc_00205139: ;
    eax = eax | 0xFFFFFFFFu;
    esp += 4; return; /* ret */

}

/**
 * sub_00205170
 * Original: 0x00205170 - 0x002051D5 (101 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00205170(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00205170: ;
    eax = MEM32(esp + 0xC);
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(eax) = xmm0; /* movss */
    xmm0 = MEMF(0x648E40); /* movss */
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(0x649228); /* movss */
    esp = esp - 8;
    MEMF(eax + 8) = xmm0; /* movss */
    PUSH32(esp, esi);
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    eax = 0x5F4850;
    PUSH32(esp, 0); sub_001F5020(); /* call 0x001F5020 */

loc_002051B2: ;
    ecx = MEM32(0x84B120);
    edx = MEM32(ecx);
    esp = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x10), _icall_esp); /* indirect call */
    }

loc_002051C0: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_002051C7: ;
    if (CMP_AE(eax, 0x19)) { sub_002051D5(); return; } /* jae: above or equal (unsigned >=) */

loc_002051CC: ;
    esi = 0x19;
    esi = esi - eax;
    g_seh_ebp = ebp; sub_002051D7(); return; /* tail jmp 0x002051D7 */

}

/**
 * sub_00205230
 * Original: 0x00205230 - 0x00205338 (264 bytes, 85 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00205230(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00205230: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x85E550);
    PUSH32(esp, ebx);
    MEM32(esp + 4) = eax;
    PUSH32(esp, esi);
    eax = esp + 8;
    PUSH32(esp, 0); sub_00227990(); /* call 0x00227990 */

loc_00205245: ;
    ecx = MEM32(0x85E554);
    ebx = 0; /* xor self */
    eax = esp + 8;
    MEM32(0x85E550) = ebx;
    MEM32(esp + 8) = ecx;
    PUSH32(esp, 0); sub_00227990(); /* call 0x00227990 */

loc_00205260: ;
    MEM32(0x85E554) = ebx;
    PUSH32(esp, 0); sub_00202DD0(); /* call 0x00202DD0 */

loc_0020526B: ;
    esi = MEM32(0x849904);
    if (CMP_EQ(esi, ebx)) goto loc_00205334; /* je: equal / zero */

loc_00205279: ;
    (void)0; /* cmp MEM8(esi + 0xC), LO8(ebx) - flags set for next jcc */
    eax = MEM32(esi + 8);
    if (CMP_BE(eax, 1)) goto loc_00205292; /* jbe: below or equal (unsigned <=) */

loc_00205284: ;
    eax--;
    MEM32(esi + 8) = eax;
    POP32(esp, esi);
    MEM32(0x849904) = ebx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00205292: ;
    if (CMP_NE(MEM8(0x770FA8), LO8(ebx))) goto loc_0020532E; /* jne: not equal / not zero */

loc_0020529E: ;
    PUSH32(esp, ebp);
    ebp = esi + 0x24;
    PUSH32(esp, edi);
    edi = MEM32(ebp);
    if (CMP_EQ(edi, ebx)) goto loc_002052B2; /* je: equal / zero */

loc_002052AA: ;
    PUSH32(esp, 0); sub_0009A3B0(); /* call 0x0009A3B0 */

loc_002052AF: ;
    MEM32(ebp) = ebx;

loc_002052B2: ;
    eax = MEM32(esi + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_002052BB: ;
    if (TEST_NZ(eax, eax)) goto loc_002052EC; /* jne: not equal / not zero */

loc_002052BF: ;
    eax = MEM32(esi + 0x10);
    if (CMP_EQ(eax, ebx)) goto loc_002052EC; /* je: equal / zero */

loc_002052C6: ;
    edi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    edi++;
    edx--;
    PUSH32(esp, eax);
    MEM32(0x7FA490) = edi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_002052E6: ;
    esp = esp + 4;
    MEM32(esi + 0x10) = ebx;

loc_002052EC: ;
    eax = MEM32(esi + 4);
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    ecx = MEM32(esi);
    MEM32(ecx + 4) = eax;
    if (CMP_EQ(eax, ebx)) goto loc_002052FA; /* je: equal / zero */

loc_002052F8: ;
    MEM32(eax) = ecx;

loc_002052FA: ;
    PUSH32(esp, esi);
    MEM32(esi) = ebx;
    MEM32(esi + 4) = ebx;
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_00205305: ;
    if (TEST_NZ(eax, eax)) goto loc_0020532C; /* jne: not equal / not zero */

loc_00205309: ;
    edi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    edi++;
    edx--;
    PUSH32(esp, esi);
    MEM32(0x7FA490) = edi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_00205329: ;
    esp = esp + 4;

loc_0020532C: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_0020532E: ;
    MEM32(0x849904) = ebx;

loc_00205334: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00205340
 * Original: 0x00205340 - 0x002053A4 (100 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00205340(void)
{
    int _flags = 0; /* fallback flag var */

loc_00205340: ;
    SET_LO8(eax, MEM8(0x8498B4));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_002053A4(); return; } /* je: equal / zero */

loc_0020534A: ;
    eax = MEM32(0x84B11C);
    if (CMP_NE(MEM32(eax + 0xC), 3)) goto loc_0020537D; /* jne: not equal / not zero */

loc_00205355: ;
    ecx = MEM32(0x85E550);
    eax = MEM32(ecx);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0); sub_0024D030(); /* call 0x0024D030 */

loc_00205364: ;
    edx = MEM32(0x85E550);
    ecx = MEM32(edx);
    PUSH32(esp, 0x3F800000);
    edi = 0x20;
    PUSH32(esp, 0); sub_0024D090(); /* call 0x0024D090 */

loc_0020537B: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0020537D: ;
    eax = MEM32(0x85E550);
    eax = MEM32(eax);
    PUSH32(esp, 0x1F);
    PUSH32(esp, 0); sub_0024D030(); /* call 0x0024D030 */

loc_0020538B: ;
    ecx = MEM32(0x85E550);
    ecx = MEM32(ecx);
    PUSH32(esp, 0x3F800000);
    edi = 0x1F;
    PUSH32(esp, 0); sub_0024D090(); /* call 0x0024D090 */

loc_002053A2: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00205490
 * Original: 0x00205490 - 0x002058C5 (1077 bytes, 272 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00205490(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00205490: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x214;
    SET_LO8(eax, MEM8(0x7819D5));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002058BE; /* jne: not equal / not zero */

loc_002054AC: ;
    SET_LO8(eax, MEM8(0x84980F));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002058BE; /* je: equal / zero */

loc_002054B9: ;
    eax = MEM32(0x849904);
    (void)0; /* test eax, eax - flags set for next jcc */
    ebx = 1;
    if (TEST_NZ(eax, eax)) goto loc_002054DF; /* jne: not equal / not zero */

loc_002054C7: ;
    PUSH32(esp, ebx);
    eax = 0x5F81EC;
    ecx = 0x5F98BC;
    PUSH32(esp, 0); sub_00086490(); /* call 0x00086490 */

loc_002054D7: ;
    esp = esp + 4;
    MEM32(0x849904) = eax;

loc_002054DF: ;
    eax = MEM32(0x849AF4);
    if (TEST_NZ(eax, eax)) goto loc_002054FC; /* jne: not equal / not zero */

loc_002054E8: ;
    PUSH32(esp, 0x7765D0);
    SET_LO8(eax, LO8(ebx));
    esi = 0x849AF4;
    PUSH32(esp, 0); sub_00202D70(); /* call 0x00202D70 */

loc_002054F9: ;
    esp = esp + 4;

loc_002054FC: ;
    if (TEST_NZ(MEM8(0x87B540), LO8(ebx))) goto loc_0020551A; /* jne: not equal / not zero */

loc_00205504: ;
    eax = MEM32(0x87B540);
    eax = eax | ebx;
    esi = 0x87B3B0;
    MEM32(0x87B540) = eax;
    PUSH32(esp, 0); sub_0016D660(); /* call 0x0016D660 */

loc_0020551A: ;
    eax = MEM32(0x85E550);
    if (TEST_NZ(eax, eax)) goto loc_00205854; /* jne: not equal / not zero */

loc_00205527: ;
    if (CMP_NE(MEM32(0x7FA1F8), 0x1D)) goto loc_00205854; /* jne: not equal / not zero */

loc_00205534: ;
    eax = MEM32(0x85E554);
    if (TEST_NZ(eax, eax)) goto loc_002055DE; /* jne: not equal / not zero */

loc_00205541: ;
    esi = esp + 0x90;
    PUSH32(esp, 0); sub_0016D660(); /* call 0x0016D660 */

loc_0020554D: ;
    xmm0 = MEMF(0x648E68); /* movss */
    PUSH32(esp, 0x7F);
    PUSH32(esp, 0x5F9854);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    MEM32(esp + 0xC8) = ebx;
    MEMF(esp + 0xCC) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0042DD7A(); /* call 0x0042DD7A */

loc_00205576: ;
    eax = esp + 0x10;
    edx = esp + 0x19D;
    ecx = eax;
    edx = edx - ecx;

loc_00205585: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00205585; /* jne: not equal / not zero */

loc_0020558F: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0); sub_002AF3F0(); /* call 0x002AF3F0 */

loc_00205596: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_002055AD; /* je: equal / zero */

loc_0020559D: ;
    edx = esp + 0x90;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0024E9C0(); /* call 0x0024E9C0 */

loc_002055AB: ;
    goto loc_002055AF;

loc_002055AD: ;
    eax = 0; /* xor self */

loc_002055AF: ;
    PUSH32(esp, 0x2050D0);
    PUSH32(esp, eax);
    ecx = 0x5E0150;
    MEM32(0x85E554) = eax;
    PUSH32(esp, 0); sub_0024EDC0(); /* call 0x0024EDC0 */

loc_002055C4: ;
    eax = MEM32(0x849AF4);
    ecx = MEM32(eax + 0x24);
    eax = MEM32(ecx + 8);
    edx = MEM32(0x85E554);
    PUSH32(esp, eax);
    eax = MEM32(edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0024B8F0(); /* call 0x0024B8F0 */

loc_002055DE: ;
    xmm0 = MEMF(0x648E40); /* movss */
    MEMF(0x87B3D4) = xmm0; /* movss */
    xmm0 = MEMF(0x648D80); /* movss */
    PUSH32(esp, 0x7F);
    MEMF(0x87B3E8) = xmm0; /* movss */
    xmm0 = MEMF(0x648CDC); /* movss */
    PUSH32(esp, 0x587BE4);
    ecx = esp + 0x18;
    MEMF(0x87B3FC) = xmm0; /* movss */
    xmm0 = MEMF(0x648F08); /* movss */
    PUSH32(esp, ecx);
    MEM8(0x87B4BC) = LO8(ebx);
    MEMF(0x87B400) = xmm0; /* movss */
    MEM32(0x87B40C) = 0xC8;
    PUSH32(esp, 0); sub_0042DD7A(); /* call 0x0042DD7A */

loc_0020563F: ;
    eax = 0; /* xor self */

loc_00205641: ;
    SET_LO8(ecx, MEM8(esp + eax + 0x10));
    MEM8(eax + 0x87B43C) = LO8(ecx);
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00205641; /* jne: not equal / not zero */

loc_00205650: ;
    eax = MEM32(0x84A19C);
    (void)0; /* test eax, eax - flags set for next jcc */
    xmm0 = MEMF(0x648E68); /* movss */
    MEM32(0x87B3DC) = ebx;
    MEMF(0x87B3E0) = xmm0; /* movss */
    if (TEST_NZ(eax, eax)) goto loc_00205674; /* jne: not equal / not zero */

loc_0020566F: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_00205674: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (TEST_Z(esi, esi)) goto loc_002056BD; /* je: equal / zero */

loc_0020569A: ;
    eax = MEM32(esi + 0x80);
    ecx = 4;
    if (CMP_B(eax, ecx)) goto loc_002056BD; /* jb: below (unsigned <) */

loc_002056A9: ;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002056AE: ;
    PUSH32(esp, 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002056B6: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_002056DE; /* jne: not equal / not zero */

loc_002056BD: ;
    esi = MEM32(0x84A184);
    ecx = 4;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002056CF: ;
    PUSH32(esp, 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002056D7: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_002056EB; /* je: equal / zero */

loc_002056DE: ;
    PUSH32(esp, 0x87B3B0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0024E9C0(); /* call 0x0024E9C0 */

loc_002056E9: ;
    goto loc_002056ED;

loc_002056EB: ;
    eax = 0; /* xor self */

loc_002056ED: ;
    MEM32(0x85E550) = eax;
    eax = MEM32(eax);
    MEM32(eax + 0x1E4) = 0x204DC0;
    edx = MEM32(0x85E550);
    eax = MEM32(edx);
    MEM32(eax + 0x1E8) = 0x204DE0;
    eax = MEM32(0x85E550);
    PUSH32(esp, 0x204FA0);
    PUSH32(esp, eax);
    ecx = 0x5F9834;
    PUSH32(esp, 0); sub_0024EDC0(); /* call 0x0024EDC0 */

loc_00205725: ;
    ecx = MEM32(0x85E550);
    PUSH32(esp, 0x205010);
    PUSH32(esp, ecx);
    ecx = 0x5F02A0;
    PUSH32(esp, 0); sub_0024EDC0(); /* call 0x0024EDC0 */

loc_0020573B: ;
    edx = MEM32(0x85E550);
    PUSH32(esp, 0x205070);
    PUSH32(esp, edx);
    ecx = 0x5F982C;
    PUSH32(esp, 0); sub_0024EDC0(); /* call 0x0024EDC0 */

loc_00205751: ;
    eax = MEM32(0x85E550);
    PUSH32(esp, 0x205170);
    PUSH32(esp, eax);
    ecx = 0x5F96AC;
    PUSH32(esp, 0); sub_0024EDC0(); /* call 0x0024EDC0 */

loc_00205766: ;
    ecx = MEM32(0x85E550);
    PUSH32(esp, 0x205170);
    PUSH32(esp, ecx);
    ecx = 0x5F9694;
    PUSH32(esp, 0); sub_0024EDC0(); /* call 0x0024EDC0 */

loc_0020577C: ;
    edx = MEM32(0x85E550);
    PUSH32(esp, 0x204E80);
    PUSH32(esp, edx);
    ecx = 0x5F968C;
    PUSH32(esp, 0); sub_0024EDC0(); /* call 0x0024EDC0 */

loc_00205792: ;
    eax = MEM32(0x85E550);
    PUSH32(esp, 0x204EE0);
    PUSH32(esp, eax);
    ecx = 0x5F9684;
    PUSH32(esp, 0); sub_0024EDC0(); /* call 0x0024EDC0 */

loc_002057A7: ;
    ecx = MEM32(0x85E550);
    PUSH32(esp, 0x204F40);
    PUSH32(esp, ecx);
    ecx = 0x5F967C;
    PUSH32(esp, 0); sub_0024EDC0(); /* call 0x0024EDC0 */

loc_002057BD: ;
    PUSH32(esp, 0x84B140);
    esp = esp - 0x80;
    eax = esp;
    PUSH32(esp, 0x7F);
    PUSH32(esp, 0x5F9848);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042DD7A(); /* call 0x0042DD7A */

loc_002057D7: ;
    edx = MEM32(0x85E550);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0024EB40(); /* call 0x0024EB40 */

loc_002057E3: ;
    PUSH32(esp, 0x84B141);
    esp = esp - 0x80;
    eax = esp;
    PUSH32(esp, 0x7F);
    PUSH32(esp, 0x5F983C);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042DD7A(); /* call 0x0042DD7A */

loc_002057FD: ;
    eax = MEM32(0x85E550);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0024EB40(); /* call 0x0024EB40 */

loc_00205808: ;
    esi = MEM32(0x849AF4);
    eax = MEM32(0x85E550);
    esi = MEM32(esi + 0x24);
    ecx = MEM32(0x85E554);
    edx = MEM32(0x7765D0);
    eax = MEM32(eax);
    esi = MEM32(esi + 8);
    MEM32(eax + 0x1B0) = esi;
    MEM32(eax + 0x1B4) = edx;
    MEM32(eax + 0x1B8) = ecx;
    ecx = MEM32(0x849904);
    edx = MEM32(ecx + 0x24);
    eax = MEM32(edx + 8);
    ecx = MEM32(0x85E550);
    PUSH32(esp, eax);
    edx = MEM32(ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0024B8F0(); /* call 0x0024B8F0 */

loc_00205854: ;
    if (CMP_EQ(MEM8(0x76F0E0), LO8(ebx))) goto loc_002058BE; /* je: equal / zero */

loc_0020585C: ;
    eax = ZX8(MEM8(0x875795));
    ecx = MEM32(0x7FA20C);
    eax = eax + ecx * 4;
    if (CMP_LE(eax, 0xFF)) goto loc_00205878; /* jle: less or equal (signed <=) */

loc_00205873: ;
    eax = 0xFF;

loc_00205878: ;
    MEM8(0x875795) = LO8(eax);
    SET_LO8(eax, MEM8(0x776278));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002058BE; /* jne: not equal / not zero */

loc_00205886: ;
    SET_LO8(eax, MEM8(0x77625E));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00205894; /* jne: not equal / not zero */

loc_0020588F: ;
    PUSH32(esp, 0); sub_00205B50(); /* call 0x00205B50 */

loc_00205894: ;
    eax = MEM32(0x85E550);
    if (TEST_Z(eax, eax)) goto loc_002058BE; /* je: equal / zero */

loc_0020589D: ;
    PUSH32(esp, 0); sub_00205340(); /* call 0x00205340 */

loc_002058A2: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0024EC50(); /* call 0x0024EC50 */

loc_002058AC: ;
    ecx = MEM32(0x85E550);
    PUSH32(esp, ebx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0024EBB0(); /* call 0x0024EBB0 */

loc_002058BE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002058D0
 * Original: 0x002058D0 - 0x00205B4C (636 bytes, 156 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002058D0(void)
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

loc_002058D0: ;
    SET_LO8(eax, MEM8(0x776278));
    esp = esp - 0x1C;
    if (CMP_EQ(LO8(eax), 2)) goto loc_00205B48; /* je: equal / zero */

loc_002058E0: ;
    xmm0 = MEMF(0x776220); /* movss */
    /* comiss xmm0, MEMF(0x648D10) - sets EFLAGS */
    ecx = 0xFF;
    MEM8(0x87AAB4) = 0;
    MEM8(0x87AAB5) = LO8(ecx);
    MEM8(0x87AAB6) = LO8(ecx);
    MEM8(0x87AAB7) = LO8(ecx);
    if ((xmm0 < MEMF(0x648D10))) goto loc_00205B48; /* jb: below (unsigned <) */

loc_00205913: ;
    if (CMP_NE(LO8(eax), 1)) goto loc_00205B48; /* jne: not equal / not zero */

loc_0020591B: ;
    if (CMP_NE(MEM8(0x77625E), 4)) goto loc_00205B48; /* jne: not equal / not zero */

loc_00205928: ;
    eax = ZX8(MEM8(0x77655F));
    edx = ZX8(MEM8(0x776560));
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    eax = (uint32_t)((int32_t)eax >> 8);
    (void)0; /* cmp eax, 0xFD - flags set for next jcc */
    MEM32(esp + 8) = eax;
    if (CMP_LE(eax, 0xFD)) goto loc_0020594B; /* jle: less or equal (signed <=) */

loc_00205947: ;
    MEM32(esp + 8) = ecx;

loc_0020594B: ;
    fp_push(MEMF(0x849848)); /* fld float */
    PUSH32(esp, ebx);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fst */
    /* FPU: fcos  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00205972: ;
    ebx = (uint32_t)(int32_t)SMEM8(0x77627B);
    esi = 0x7E;
    esi = esi - eax;
    ebx = ebx - 4;
    MEM32(esp + 0x10) = ebx;
    if (((int32_t)ebx >= 0)) goto loc_00205990; /* jns: not sign (positive) */

loc_00205989: ;
    ebx = ebx + 4;
    MEM32(esp + 0x10) = ebx;

loc_00205990: ;
    MEM32(esp + 0x1C) = 1;
    goto loc_002059A0;

    /* nop */

loc_002059A0: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fst */
    /* FPU: fcos  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_002059BB: ;
    edi = 0x7E;
    edi = edi - eax;
    (void)0; /* cmp esi, edi - flags set for next jcc */
    MEM32(esp + 0x24) = edi;
    if (CMP_GE(esi, edi)) goto loc_00205B1F; /* jge: greater or equal (signed >=) */

loc_002059CE: ;
    ebx = MEM32(ebx * 4 + 0x75E29C);
    eax = edi;
    eax = eax - esi;
    ebp = eax;
    ebp = (uint32_t)((int32_t)ebp >> 1);
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x649090); /* mulss */
    ebp = ebp + esi;
    esi = 0; /* xor self */
    MEMF(esp + 0x28) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001FF0F0(); /* call 0x001FF0F0 */

loc_002059F8: ;
    if (TEST_Z(eax, eax)) goto loc_00205A4D; /* je: equal / zero */

loc_002059FC: ;
    xmm0 = xmm0 * MEMF(0x648CE0); /* mulss */
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFF);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0x40000000);
    PUSH32(esp, ecx);
    SET_LO8(ecx, MEM8(esp + 0x30));
    xmm0 = (float)(int32_t)ebp; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x64A75C); /* mulss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0x43340000);
    edi = eax;
    PUSH32(esp, 0); sub_00205BF0(); /* call 0x00205BF0 */

loc_00205A40: ;
    xmm0 = MEMF(esp + 0x44); /* movss */
    edi = MEM32(esp + 0x40);
    esp = esp + 0x1C;

loc_00205A4D: ;
    xmm1 = MEMF(0x849848); /* movss */
    /* ucomiss xmm1, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_00205B1B; /* jp: parity */

loc_00205A66: ;
    if (CMP_NE(MEM32(esp + 0x1C), 5)) goto loc_00205B1B; /* jne: not equal / not zero */

loc_00205A71: ;
    eax = MEM32(0x849874);
    if (TEST_NZ(eax, eax)) goto loc_00205B1B; /* jne: not equal / not zero */

loc_00205A7E: ;
    eax = MEM32(0x7FA244);
    eax = eax & 0x3F;
    eax = eax << 1;
    if (CMP_LE(eax, 0x3F)) goto loc_00205A96; /* jle: less or equal (signed <=) */

loc_00205A8D: ;
    ecx = 0x7F;
    ecx = ecx - eax;
    eax = ecx;

loc_00205A96: ;
    eax = eax + 0x15;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 0x18));
    eax = eax + eax * 2;
    eax = (uint32_t)((int32_t)eax >> 8);
    (void)0; /* cmp eax, 0xFF - flags set for next jcc */
    MEM32(esp + 0x20) = eax;
    if (CMP_LE(eax, 0xFF)) goto loc_00205AB7; /* jle: less or equal (signed <=) */

loc_00205AAF: ;
    MEM32(esp + 0x20) = 0xFF;

loc_00205AB7: ;
    edx = MEM32(esp + 0x10);
    ebx = MEM32(edx * 4 + 0x75E29C);
    esi = 1;
    PUSH32(esp, 0); sub_001FF0F0(); /* call 0x001FF0F0 */

loc_00205ACC: ;
    if (TEST_Z(eax, eax)) goto loc_00205B1B; /* je: equal / zero */

loc_00205AD0: ;
    xmm0 = xmm0 * MEMF(0x648CE0); /* mulss */
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFF);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0x40000000);
    PUSH32(esp, ecx);
    SET_LO8(ecx, MEM8(esp + 0x38));
    xmm0 = (float)(int32_t)ebp; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x64A75C); /* mulss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0x43340000);
    edi = eax;
    PUSH32(esp, 0); sub_00205BF0(); /* call 0x00205BF0 */

loc_00205B14: ;
    edi = MEM32(esp + 0x40);
    esp = esp + 0x1C;

loc_00205B1B: ;
    ebx = MEM32(esp + 0x10);

loc_00205B1F: ;
    ebx++;
    (void)0; /* cmp ebx, 4 - flags set for next jcc */
    MEM32(esp + 0x10) = ebx;
    if (CMP_L(ebx, 4)) goto loc_00205B30; /* jl: less (signed <) */

loc_00205B29: ;
    ebx = ebx - 4;
    MEM32(esp + 0x10) = ebx;

loc_00205B30: ;
    eax = MEM32(esp + 0x1C);
    eax++;
    (void)0; /* cmp eax, 8 - flags set for next jcc */
    esi = edi;
    MEM32(esp + 0x1C) = eax;
    if (CMP_L(eax, 8)) goto loc_002059A0; /* jl: less (signed <) */

loc_00205B44: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00205B48: ;
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00205B50
 * Original: 0x00205B50 - 0x00205BBA (106 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00205B50(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00205B50: ;
    eax = MEM32(0x6BAF28);
    xmm0 = MEMF(0x8497DC); /* movss */
    xmm1 = MEMF(0x776220); /* movss */
    MEMF(0x84B508) = xmm0; /* movss */
    xmm0 = MEMF(eax + 4); /* movss */
    MEMF(0x77615C) = xmm0; /* movss */
    xmm0 = MEMF(eax + 8); /* movss */
    MEMF(0x77615C) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    xmm1 = MEMF(0x776224); /* movss */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEM32(0x776158) = 0;
    if (1 /* jp after test - parity */) { sub_00205BBA(); return; } /* jp: parity */

loc_00205BA5: ;
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) { sub_00205BBA(); return; } /* jp: parity */

loc_00205BAE: ;
    SET_LO8(eax, MEM8(0x77625E));
    MEM8(0x875794) = LO8(eax);
    g_seh_ebp = ebp; sub_00205BCF(); return; /* tail jmp 0x00205BCF */

}

/**
 * sub_00205BE0
 * Original: 0x00205BE0 - 0x00205BED (13 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00205BE0(void)
{

loc_00205BE0: ;
    PUSH32(esp, 0); sub_001FBB50(); /* call 0x001FBB50 */

loc_00205BE5: ;
    MEM8(0x80174C) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00205BF0
 * Original: 0x00205BF0 - 0x00205FA1 (945 bytes, 231 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00205BF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00205BF0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x18;
    eax = ZX8(MEM8(0x776154));
    ecx = ZX8(LO8(ecx));
    MEM32(esp + 8) = ecx;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00205C19: ;
    edx = ZX8(MEM8(ebp + 0x1C));
    ebx = 0; /* xor self */
    SET_HI8(ebx, LO8(eax));
    eax = ZX8(MEM8(ebp + 0x20));
    ecx = 0x40350;
    SET_LO8(ebx, MEM8(ebp + 0x18));
    ebx = ebx << 8;
    ebx = ebx | edx;
    ebx = ebx << 8;
    edx = 0x8006;
    ebx = ebx | eax;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00205C41: ;
    edx = 0x302;
    ecx = 0x40344;
    MEM32(0x549B20) = 0x8006;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00205C5A: ;
    edx = 0x303;
    ecx = 0x40348;
    MEM32(0x549AF0) = 0x302;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00205C73: ;
    edx = 1;
    ecx = 0x40304;
    MEM32(0x549AF4) = 0x303;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00205C8C: ;
    esi = MEM32(0x5499F0);
    esi = esi | 0x1200;
    PUSH32(esp, 0);
    MEM32(0x549AE4) = 1;
    MEM32(0x5499F0) = esi;
    MEM32(0x549B90) = 0;
    PUSH32(esp, 0); sub_00537070(); /* call 0x00537070 */

loc_00205CB9: ;
    esi = MEM32(0x5499E8);
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_00205CD5; /* jb: below (unsigned <) */

loc_00205CC6: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_00205CD5: ;
    MEM32(eax) = 0x4030C;
    edx = 0; /* xor self */
    MEM32(eax + 4) = edx;
    ecx = MEM32(0x549B40);
    MEM32(eax + 8) = 0x41D78;
    MEM32(eax + 0xC) = ecx;
    eax = eax + 0x10;
    MEM32(esi) = eax;
    eax = MEM32(0x549C34);
    (void)0; /* cmp eax, 2 - flags set for next jcc */
    MEM32(0x549C34) = edx;
    if (CMP_NE(eax, 2)) goto loc_00205D34; /* jne: not equal / not zero */

loc_00205D05: ;
    PUSH32(esp, 0); sub_005384E0(); /* call 0x005384E0 */

loc_00205D0A: ;
    PUSH32(esp, 0); sub_00536810(); /* call 0x00536810 */

loc_00205D0F: ;
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_00205D25; /* jb: below (unsigned <) */

loc_00205D16: ;
    eax = MEM32(0x54A8B8);
    edx = eax;
    edx = edx >> 1;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_00205D25: ;
    PUSH32(esp, esi);
    edx = eax;
    PUSH32(esp, 0); sub_00538030(); /* call 0x00538030 */

loc_00205D2D: ;
    PUSH32(esp, 0); sub_00537E30(); /* call 0x00537E30 */

loc_00205D32: ;
    MEM32(esi) = eax;

loc_00205D34: ;
    PUSH32(esp, 0);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_00205D3D: ;
    eax = 2;
    MEM32(0x547368) = eax;
    MEM32(0x547378) = eax;
    eax = MEM32(0x5499F0);
    ecx = 0; /* xor self */
    eax = eax | 0x800;
    edx = 4;
    MEM32(0x5499F0) = eax;
    esi = 1;
    PUSH32(esp, ecx);
    eax = esi;
    MEM32(0x547360) = edx;
    MEM32(0x54736C) = ecx;
    MEM32(0x547370) = edx;
    MEM32(0x54737C) = ecx;
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_00205D87: ;
    xmm5 = MEMF(0x64994C); /* movss */
    xmm4 = MEMF(0x648D10); /* movss */
    xmm0 = MEMF(ebp + 8); /* movss */
    xmm6 = MEMF(0x58BD48); /* movss */
    edx = MEM32(0x5499F0);
    xmm1 = MEMF(ebp + 0xC); /* movss */
    MEM32(0x5473E0) = esi;
    MEM32(0x5473F0) = esi;
    eax = ZX16(MEM16(edi + 0xC));
    ecx = ZX16(MEM16(edi + 0xE));
    xmm0 = xmm0 - xmm5; /* subss */
    xmm2 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm2 = xmm2 * MEMF(ebp + 0x10); /* mulss */
    eax = MEM32(edi + 4);
    xmm2 = xmm2 * xmm4; /* mulss */
    xmm3 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm3 = xmm3 * MEMF(ebp + 0x14); /* mulss */
    xmm3 = xmm3 * xmm4; /* mulss */
    xmm4 = xmm0; /* movaps */
    xmm0 = xmm0 + xmm2; /* addss */
    xmm0 = xmm0 + xmm5; /* addss */
    xmm1 = xmm1 - xmm6; /* subss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = xmm1; /* movaps */
    edx = edx | 0x800;
    (void)0; /* cmp eax, 4 - flags set for next jcc */
    xmm4 = xmm4 - xmm2; /* subss */
    xmm0 = xmm0 - xmm3; /* subss */
    xmm1 = xmm1 + xmm3; /* addss */
    xmm4 = xmm4 + xmm5; /* addss */
    xmm0 = xmm0 + xmm6; /* addss */
    xmm1 = xmm1 + xmm6; /* addss */
    MEM32(0x5499F0) = edx;
    MEMF(esp + 0x10) = xmm4; /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    if (CMP_A(eax, 4)) goto loc_00205E5C; /* ja: above (unsigned >) */

loc_00205E37: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x205FA4); /* switch: 5 entries, 5 targets */
    if (_jt == 0x00205E3Eu) goto loc_00205E3E;
    if (_jt == 0x00205E44u) goto loc_00205E44;
    if (_jt == 0x00205E49u) goto loc_00205E49;
    if (_jt == 0x00205E4Fu) goto loc_00205E4F;
    if (_jt == 0x00205E5Cu) goto loc_00205E5C;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00205E3E: ;
    edx = MEM32(edi + 0x1C);
    PUSH32(esp, edx);
    goto loc_00205E55;

loc_00205E44: ;
    eax = MEM32(edi + 0x1C);
    goto loc_00205E54;

loc_00205E49: ;
    ecx = MEM32(edi + 0x1C);
    PUSH32(esp, ecx);
    goto loc_00205E55;

loc_00205E4F: ;
    edx = MEM32(edi + 0x1C);
    eax = MEM32(edx);

loc_00205E54: ;
    PUSH32(esp, eax);

loc_00205E55: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_00205E5C: ;
    ecx = MEM32(0x6B842C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_00205E68: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00538690(); /* call 0x00538690 */

loc_00205E6F: ;
    esi = 0x1D;
    PUSH32(esp, 0); sub_0053C660(); /* call 0x0053C660 */

loc_00205E79: ;
    MEM32(eax) = 0x417FC;
    MEM32(eax + 4) = 8;
    eax = eax + 4;
    MEM32(eax + 4) = 0x40601818;
    xmm3 = MEMF(esp + 0x10); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm3; /* movss */
    xmm2 = MEMF(esp + 0x14); /* movss */
    xmm0 = MEMF(0x648CE4); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm2; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    xmm1 = 0.0f; /* xorps self = zero */
    eax = eax + 4;
    MEM32(eax + 4) = ebx;
    eax = eax + 4;
    MEMF(eax + 4) = xmm1; /* movss */
    xmm4 = MEMF(esp + 0x18); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm1; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm4; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm2; /* movss */
    xmm2 = MEMF(0x648D14); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    eax = eax + 4;
    MEM32(eax + 4) = ebx;
    eax = eax + 4;
    MEMF(eax + 4) = xmm2; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm1; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm4; /* movss */
    xmm4 = MEMF(esp + 0x1C); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm4; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    eax = eax + 4;
    MEM32(eax + 4) = ebx;
    eax = eax + 4;
    MEMF(eax + 4) = xmm2; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm2; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm3; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm4; /* movss */
    edx = MEM32(0x5499E8);
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    eax = eax + 4;
    MEM32(eax + 4) = ebx;
    eax = eax + 4;
    MEMF(eax + 4) = xmm1; /* movss */
    eax = eax + 4;
    eax = eax + 4;
    MEMF(eax) = xmm2; /* movss */
    eax = eax + 4;
    MEM32(eax) = 0x417FC;
    eax = eax + 4;
    MEM32(eax) = 0;
    eax = eax + 4;
    MEM32(edx) = eax;
    PUSH32(esp, 0);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_00205F9B: ;
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
 * sub_00205FC0
 * Original: 0x00205FC0 - 0x0020605E (158 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00205FC0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00205FC0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    if (TEST_Z(edi, edi)) goto loc_0020605B; /* je: equal / zero */

loc_00205FCE: ;
    eax = MEM32(edi + 8);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    if (TEST_Z(eax, eax)) goto loc_0020601D; /* je: equal / zero */

loc_00205FD6: ;
    edx = edi;
    PUSH32(esp, 0); sub_001DD370(); /* call 0x001DD370 */

loc_00205FDD: ;
    eax = MEM32(edi + 0x10);
    if (TEST_Z(eax, eax)) goto loc_00205FED; /* je: equal / zero */

loc_00205FE4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00036B50(); /* call 0x00036B50 */

loc_00205FEA: ;
    esp = esp + 4;

loc_00205FED: ;
    ecx = MEM32(edi + 8);
    edx = MEM32(ecx + 0x10);
    PUSH32(esp, ebx);
    eax = edi + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00075640(); /* call 0x00075640 */

loc_00205FFE: ;
    ebx = MEM32(edi + 0x14);
    esp = esp + 8;
    if (TEST_Z(ebx, ebx)) goto loc_00206014; /* je: equal / zero */

loc_00206008: ;
    PUSH32(esp, 0); sub_003F96B0(); /* call 0x003F96B0 */

loc_0020600D: ;
    MEM32(edi + 0x14) = 0;

loc_00206014: ;
    esi = MEM32(edi + 8);
    PUSH32(esp, 0); sub_0005E640(); /* call 0x0005E640 */

loc_0020601C: ;
    POP32(esp, ebx);

loc_0020601D: ;
    esi = MEM32(edi + 4);
    if (TEST_Z(esi, esi)) goto loc_00206029; /* je: equal / zero */

loc_00206024: ;
    PUSH32(esp, 0); sub_0005E640(); /* call 0x0005E640 */

loc_00206029: ;
    esi = MEM32(edi);
    if (TEST_Z(esi, esi)) goto loc_0020604D; /* je: equal / zero */

loc_0020602F: ;
    ecx = esi;
    PUSH32(esp, 0); sub_000636D0(); /* call 0x000636D0 */

loc_00206036: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00206044: ;
    esp = esp + 4;
    MEM32(edi) = 0;

loc_0020604D: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00206057: ;
    esp = esp + 4;
    POP32(esp, esi);

loc_0020605B: ;
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00206060
 * Original: 0x00206060 - 0x002062B4 (596 bytes, 174 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00206060(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00206060: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = eax;
    eax = MEM32(0x84A19C);
    edi = 0; /* xor self */
    if (CMP_NE(eax, edi)) goto loc_00206076; /* jne: not equal / not zero */

loc_00206071: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_00206076: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, edi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    ebp = esi;
    if (CMP_EQ(esi, edi)) goto loc_002060C6; /* je: equal / zero */

loc_0020609C: ;
    if (CMP_B(MEM32(esi + 0x80), 0xA0)) goto loc_002060C6; /* jb: below (unsigned <) */

loc_002060A8: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002060B2: ;
    PUSH32(esp, 0xA0);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002060BD: ;
    ebp = eax;
    esp = esp + 8;
    if (CMP_NE(ebp, edi)) goto loc_002060F0; /* jne: not equal / not zero */

loc_002060C6: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    ebp = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002060D8: ;
    PUSH32(esp, 0xA0);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002060E3: ;
    ebp = eax;
    esp = esp + 8;
    if (CMP_EQ(ebp, edi)) goto loc_002062AD; /* je: equal / zero */

loc_002060F0: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x648D14); /* movss */
    eax = MEM32(esp + 0x18);
    MEM32(ebp) = edi;
    MEM32(ebp + 4) = edi;
    MEM32(ebp + 8) = edi;
    MEM32(ebp + 0xC) = edi;
    MEM32(ebp + 0x10) = edi;
    MEM32(ebp + 0x14) = edi;
    MEMF(ebp + 0x58) = xmm0; /* movss */
    MEMF(ebp + 0x54) = xmm0; /* movss */
    MEMF(ebp + 0x50) = xmm0; /* movss */
    MEMF(ebp + 0x4C) = xmm0; /* movss */
    MEMF(ebp + 0x44) = xmm0; /* movss */
    MEMF(ebp + 0x40) = xmm0; /* movss */
    MEMF(ebp + 0x3C) = xmm0; /* movss */
    MEMF(ebp + 0x38) = xmm0; /* movss */
    MEMF(ebp + 0x30) = xmm0; /* movss */
    MEMF(ebp + 0x2C) = xmm0; /* movss */
    MEMF(ebp + 0x28) = xmm0; /* movss */
    MEMF(ebp + 0x24) = xmm0; /* movss */
    MEMF(ebp + 0x5C) = xmm1; /* movss */
    MEMF(ebp + 0x48) = xmm1; /* movss */
    MEMF(ebp + 0x34) = xmm1; /* movss */
    MEMF(ebp + 0x20) = xmm1; /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 3);
    eax = 0; /* xor self */
    MEMF(ebp + 0x98) = xmm0; /* movss */
    MEMF(ebp + 0x94) = xmm0; /* movss */
    MEMF(ebp + 0x90) = xmm0; /* movss */
    MEMF(ebp + 0x8C) = xmm0; /* movss */
    MEMF(ebp + 0x84) = xmm0; /* movss */
    MEMF(ebp + 0x80) = xmm0; /* movss */
    MEMF(ebp + 0x7C) = xmm0; /* movss */
    MEMF(ebp + 0x78) = xmm0; /* movss */
    MEMF(ebp + 0x70) = xmm0; /* movss */
    MEMF(ebp + 0x6C) = xmm0; /* movss */
    MEMF(ebp + 0x68) = xmm0; /* movss */
    MEMF(ebp + 0x64) = xmm0; /* movss */
    MEMF(ebp + 0x9C) = xmm1; /* movss */
    MEMF(ebp + 0x88) = xmm1; /* movss */
    MEMF(ebp + 0x74) = xmm1; /* movss */
    MEMF(ebp + 0x60) = xmm1; /* movss */
    PUSH32(esp, 0); sub_0005E4E0(); /* call 0x0005E4E0 */

loc_002061D4: ;
    esp = esp + 0xC;
    PUSH32(esp, 0x84D458);
    PUSH32(esp, 0); sub_00061ED0(); /* call 0x00061ED0 */

loc_002061E1: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, 0x114);
    if (TEST_NZ(eax, eax)) goto loc_00206264; /* jne: not equal / not zero */

loc_002061EA: ;
    PUSH32(esp, 0); sub_0005EDB0(); /* call 0x0005EDB0 */

loc_002061EF: ;
    esi = eax;
    esp = esp + 4;
    if (CMP_EQ(esi, edi)) goto loc_00206226; /* je: equal / zero */

loc_002061F8: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    eax = esi + 0xC;
    PUSH32(esp, 0x18);
    PUSH32(esp, 0); sub_0005E4E0(); /* call 0x0005E4E0 */

loc_00206208: ;
    esp = esp + 0xC;
    eax = esi;
    MEM32(esi + 0x110) = 0x18;
    MEM32(esi) = edi;
    MEM32(esi + 8) = edi;
    MEM32(esi + 4) = edi;
    PUSH32(esp, 0); sub_00063680(); /* call 0x00063680 */

loc_00206224: ;
    goto loc_00206228;

loc_00206226: ;
    esi = 0; /* xor self */

loc_00206228: ;
    PUSH32(esp, 0x114);
    PUSH32(esp, 0); sub_0005EDB0(); /* call 0x0005EDB0 */

loc_00206232: ;
    esp = esp + 4;
    if (CMP_EQ(eax, edi)) goto loc_00206258; /* je: equal / zero */

loc_00206239: ;
    edx = MEM32(esp + 0x18);
    edi = esi;
    ecx = ebx;
    PUSH32(esp, edx);
    ebx = 3;
    esi = eax;
    PUSH32(esp, 0); sub_00063620(); /* call 0x00063620 */

loc_0020624E: ;
    POP32(esp, edi);
    MEM32(ebp) = eax;
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00206258: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    MEM32(ebp) = eax;
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00206264: ;
    PUSH32(esp, 0); sub_0005EDB0(); /* call 0x0005EDB0 */

loc_00206269: ;
    esi = eax;
    esp = esp + 4;
    if (CMP_EQ(esi, edi)) goto loc_002062A8; /* je: equal / zero */

loc_00206272: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    eax = esi + 0xC;
    PUSH32(esp, 3);
    PUSH32(esp, 0); sub_0005E4E0(); /* call 0x0005E4E0 */

loc_00206282: ;
    esp = esp + 0xC;
    eax = esi;
    MEM32(esi + 0x110) = 3;
    MEM32(esi) = edi;
    MEM32(esi + 8) = edi;
    MEM32(esi + 4) = edi;
    PUSH32(esp, 0); sub_00063680(); /* call 0x00063680 */

loc_0020629E: ;
    POP32(esp, edi);
    MEM32(ebp) = esi;
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_002062A8: ;
    esi = 0; /* xor self */
    MEM32(ebp) = esi;

loc_002062AD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002062C0
 * Original: 0x002062C0 - 0x002062D5 (21 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002062C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002062C0: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 8);
    if (TEST_Z(eax, eax)) { sub_002062D5(); return; } /* je: equal / zero */

loc_002062D0: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002063D0
 * Original: 0x002063D0 - 0x0020645C (140 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002063D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002063D0: ;
    PUSH32(esp, ecx);
    eax = MEM32(esi + 8);
    ecx = MEM32(eax + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003ED030(); /* call 0x003ED030 */

loc_002063DE: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x178B);
    PUSH32(esp, 0x5F98E8);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_002063F0: ;
    ecx = MEM32(esi + 8);
    MEM32(esi + 0xC) = eax;
    edx = MEM32(ecx + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_000865C0(); /* call 0x000865C0 */

loc_00206400: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(esi + 8);
    edx = MEM32(ecx + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    ebx = esi + 0x14;
    PUSH32(esp, 0); sub_003F9110(); /* call 0x003F9110 */

loc_00206413: ;
    eax = MEM32(esi + 8);
    edi = MEM32(eax + 0x10);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    ecx = MEM32(0x81BCE0);
    PUSH32(esp, 0x5E991C);
    PUSH32(esp, 0); sub_003EF530(); /* call 0x003EF530 */

loc_0020642E: ;
    edx = MEM32(edi + 8);
    PUSH32(esp, eax);
    eax = MEM32(edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003ED420(); /* call 0x003ED420 */

loc_0020643A: ;
    esp = esp + 0x30;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, ebx);
    if (TEST_Z(eax, eax)) { sub_0020645C(); return; } /* je: equal / zero */

loc_00206443: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00036A60(); /* call 0x00036A60 */

loc_0020644D: ;
    MEM32(esi + 0x10) = eax;
    esp = esp + 8;
    eax = esi;
    PUSH32(esp, 0); sub_002066F0(); /* call 0x002066F0 */

loc_0020645A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00206470
 * Original: 0x00206470 - 0x00206514 (164 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00206470(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00206470: ;
    eax = MEM32(0x84A19C);
    esp = esp - 0x204;
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x210);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_NZ(eax, eax)) goto loc_0020648E; /* jne: not equal / not zero */

loc_00206489: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0020648E: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (TEST_Z(esi, esi)) goto loc_002064DE; /* je: equal / zero */

loc_002064B4: ;
    if (CMP_B(MEM32(esi + 0x80), 0xA0)) goto loc_002064DE; /* jb: below (unsigned <) */

loc_002064C0: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002064CA: ;
    PUSH32(esp, 0xA0);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002064D5: ;
    edi = eax;
    esp = esp + 8;
    if (TEST_NZ(edi, edi)) goto loc_00206500; /* jne: not equal / not zero */

loc_002064DE: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002064F0: ;
    PUSH32(esp, 0xA0);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002064FB: ;
    esp = esp + 8;
    edi = eax;

loc_00206500: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    MEM32(esp + 0xC) = edi;
    if (TEST_NZ(edi, edi)) { sub_00206514(); return; } /* jne: not equal / not zero */

loc_00206508: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebp);
    esp = esp + 0x204;
    esp += 4; return; /* ret */

}

/**
 * sub_002066F0
 * Original: 0x002066F0 - 0x00206773 (131 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002066F0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_002066F0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = eax;
    if (TEST_Z(edi, edi)) goto loc_00206770; /* je: equal / zero */

loc_002066F8: ;
    ecx = MEM32(edi + 0x10);
    if (TEST_Z(ecx, ecx)) goto loc_00206770; /* je: equal / zero */

loc_002066FF: ;
    xmm0 = MEMF(0x7FA218); /* movss */
    /* ucomiss xmm0, MEMF(0x648D34) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(esp + 4) = xmm0; /* movss */
    if (1 /* jp after test - parity */) goto loc_00206728; /* jp: parity */

loc_0020671A: ;
    xmm0 = MEMF(0x7FA21C); /* movss */
    MEMF(esp + 4) = xmm0; /* movss */

loc_00206728: ;
    PUSH32(esp, esi);
    esi = ecx + 4;
    eax = esi;
    PUSH32(esp, 0); sub_00035F30(); /* call 0x00035F30 */

loc_00206733: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00035FD0(); /* call 0x00035FD0 */

loc_0020673E: ;
    eax = MEM32(edi + 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00036C00(); /* call 0x00036C00 */

loc_00206752: ;
    edi = MEM32(edi + 0x14);
    esp = esp + 0x20;
    (void)0; /* test edi, edi - flags set for next jcc */
    POP32(esp, esi);
    if (TEST_Z(edi, edi)) goto loc_00206770; /* je: equal / zero */

loc_0020675D: ;
    ecx = MEM32(0x7FA218);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ebx = edi;
    PUSH32(esp, 0); sub_003F9680(); /* call 0x003F9680 */

loc_0020676C: ;
    esp = esp + 4;
    POP32(esp, ebx);

loc_00206770: ;
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00206780
 * Original: 0x00206780 - 0x00206809 (137 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00206780(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00206780: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xC4;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(esi, esi)) goto loc_00206802; /* je: equal / zero */

loc_00206796: ;
    edi = MEM32(0x8496B8);
    if (TEST_Z(edi, edi)) goto loc_002067C0; /* je: equal / zero */

loc_002067A0: ;
    edx = esi;
    eax = esp + 0x10;
    PUSH32(esp, 0); sub_00355260(); /* call 0x00355260 */

loc_002067AB: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    eax = edi;
    PUSH32(esp, 0); sub_001DCDA0(); /* call 0x001DCDA0 */

loc_002067B7: ;
    eax = esp + 0x10;
    PUSH32(esp, 0); sub_00355040(); /* call 0x00355040 */

loc_002067C0: ;
    eax = MEM32(esi + 0x10);
    if (TEST_Z(eax, eax)) goto loc_002067D0; /* je: equal / zero */

loc_002067C7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00036B50(); /* call 0x00036B50 */

loc_002067CD: ;
    esp = esp + 4;

loc_002067D0: ;
    edx = MEM32(esi + 8);
    eax = MEM32(edx + 0x10);
    ecx = esi + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00075640(); /* call 0x00075640 */

loc_002067E0: ;
    ebx = MEM32(esi + 0x14);
    esp = esp + 8;
    if (TEST_Z(ebx, ebx)) goto loc_002067F6; /* je: equal / zero */

loc_002067EA: ;
    PUSH32(esp, 0); sub_003F96B0(); /* call 0x003F96B0 */

loc_002067EF: ;
    MEM32(esi + 0x14) = 0;

loc_002067F6: ;
    ecx = ebp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_002067FF: ;
    esp = esp + 4;

loc_00206802: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00206810
 * Original: 0x00206810 - 0x00206AB0 (672 bytes, 166 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00206810(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00206810: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    if (CMP_EQ(ebx, ebp)) goto loc_00206AAD; /* je: equal / zero */

loc_00206820: ;
    eax = MEM32(ebx + 8);
    if (CMP_EQ(eax, ebp)) goto loc_00206AAD; /* je: equal / zero */

loc_0020682B: ;
    if (CMP_EQ(MEM32(eax + 0x10), ebp)) goto loc_00206AAD; /* je: equal / zero */

loc_00206834: ;
    if (CMP_EQ(MEM32(ebx + 0xC), ebp)) goto loc_00206AAD; /* je: equal / zero */

loc_0020683D: ;
    eax = MEM32(0x6B81FC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_0020684A: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_0012FB60(); /* call 0x0012FB60 */

loc_00206851: ;
    PUSH32(esp, 0); sub_003ED800(); /* call 0x003ED800 */

loc_00206856: ;
    ecx = (uint32_t)(int32_t)SMEM8(0x7FA230);
    ecx = ecx << 6;
    eax = ecx + ebx + 0x20;
    MEM32(0x81BE48) = ebp;
    PUSH32(esp, 0); sub_003ED490(); /* call 0x003ED490 */

loc_0020686F: ;
    PUSH32(esp, 0x900);
    MEM32(0x81BD70) = 0x3EE100;
    PUSH32(esp, 0); sub_00537070(); /* call 0x00537070 */

loc_00206883: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00537190(); /* call 0x00537190 */

loc_0020688A: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_00537230(); /* call 0x00537230 */

loc_00206890: ;
    esi = MEM32(0x5499F0);
    esi = esi | 0x2000;
    edx = 0; /* xor self */
    ecx = 0x40300;
    MEM32(0x5499F0) = esi;
    MEM32(0x549B68) = ebp;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_002068B4: ;
    MEM32(0x549AE8) = ebp;
    edx = MEM32(ebx + 8);
    edi = MEM32(edx + 0x10);
    edx = MEM32(0x7FA020);
    esi = MEM32(ebx + 0xC);
    edx++;
    MEM32(0x7FA020) = edx;
    edx = 0x10101;
    ecx = 0x40358;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_002068DF: ;
    MEM32(0x549B04) = 0x10101;
    MEM32(0x81BE54) = esi;
    eax = MEM32(esi + 0x14);
    MEM32(0x81BE58) = eax;
    ecx = MEM32(esi + 0xC);
    MEM32(0x81BE5C) = ecx;
    eax = MEM32(esi + 4);
    if (CMP_EQ(eax, ebp)) goto loc_0020690C; /* je: equal / zero */

loc_00206907: ;
    MEM32(0x84B854) = eax;

loc_0020690C: ;
    edx = MEM32(edi + -16);
    PUSH32(esp, 4);
    ecx = edi;
    MEM32(0x81BE64) = edx;
    MEM32(0x81BE50) = ebp;
    PUSH32(esp, 0); sub_003ED220(); /* call 0x003ED220 */

loc_00206924: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 4);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x81BD70), _icall_esp); /* indirect call */
    }

loc_00206931: ;
    esp = esp + 0x14;
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_00536DD0(); /* call 0x00536DD0 */

loc_0020693C: ;
    edx = 0x203;
    ecx = 0x40354;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0020694B: ;
    edx = 1;
    ecx = 0x4035C;
    MEM32(0x549ADC) = 0x203;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00206964: ;
    PUSH32(esp, 1);
    MEM32(0x549AF8) = 1;
    PUSH32(esp, 0); sub_00537230(); /* call 0x00537230 */

loc_00206975: ;
    edx = 0x207;
    ecx = 0x40364;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00206984: ;
    edx = 0x1E01;
    ecx = 0x40378;
    MEM32(0x549B10) = 0x207;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0020699D: ;
    edx = 0xFF;
    ecx = 0x40360;
    MEM32(0x549B0C) = 0x1E01;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_002069B6: ;
    edx = MEM32(0x7FA020);
    MEM32(0x549B1C) = 0xFF;
    MEM32(0x81BD70) = 0x3F0270;
    ecx = MEM32(ebx + 8);
    edi = MEM32(ecx + 0x10);
    esi = MEM32(ebx + 0xC);
    edx++;
    MEM32(0x7FA020) = edx;
    edx = 0x10101;
    ecx = 0x40358;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_002069EF: ;
    MEM32(0x549B04) = 0x10101;
    MEM32(0x81BE54) = esi;
    edx = MEM32(esi + 0x14);
    MEM32(0x81BE58) = edx;
    eax = MEM32(esi + 0xC);
    MEM32(0x81BE5C) = eax;
    eax = MEM32(esi + 4);
    if (CMP_EQ(eax, ebp)) goto loc_00206A1C; /* je: equal / zero */

loc_00206A17: ;
    MEM32(0x84B854) = eax;

loc_00206A1C: ;
    ecx = MEM32(edi + -16);
    MEM32(0x81BE64) = ecx;
    PUSH32(esp, 1);
    ecx = edi;
    MEM32(0x81BE50) = ebp;
    PUSH32(esp, 0); sub_003ED220(); /* call 0x003ED220 */

loc_00206A34: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x81BD70), _icall_esp); /* indirect call */
    }

loc_00206A41: ;
    esp = esp + 0x14;
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_00536DD0(); /* call 0x00536DD0 */

loc_00206A4C: ;
    edx = 0; /* xor self */
    ecx = 0x4035C;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00206A58: ;
    edx = 0xF;
    ecx = 0x40360;
    MEM32(0x549AF8) = ebp;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00206A6D: ;
    MEM32(0x549B1C) = 0xF;
    eax = MEM32(ebx + 8);
    esi = MEM32(ebx + 0xC);
    edi = MEM32(eax + 0x10);
    PUSH32(esp, 1);
    PUSH32(esp, 2);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0029CEE0(); /* call 0x0029CEE0 */

loc_00206A8A: ;
    ecx = MEM32(ebx + 8);
    esi = MEM32(ebx + 0xC);
    edi = MEM32(ecx + 0x10);
    PUSH32(esp, ebp);
    PUSH32(esp, 8);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0029CEE0(); /* call 0x0029CEE0 */

loc_00206A9C: ;
    esp = esp + 0x18;
    POP32(esp, edi);
    MEM32(0x81BE44) = ebp;
    MEM32(0x81BE48) = ebp;
    POP32(esp, esi);

loc_00206AAD: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00206AB0
 * Original: 0x00206AB0 - 0x00206AF9 (73 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00206AB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00206AB0: ;
    xmm0 = MEMF(0x6BCFF8); /* movss */
    /* ucomiss xmm0, MEMF(0x648D14) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) { sub_00206AF9(); return; } /* jnp: not parity */

loc_00206AC5: ;
    xmm1 = MEMF(0x6BCFFC); /* movss */
    xmm1 = xmm1 * MEMF(esp + 8); /* mulss */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * MEMF(esp + 4); /* mulss */
    xmm3 = xmm0; /* movaps */
    xmm3 = xmm3 * MEMF(esp + 0x10); /* mulss */
    xmm0 = xmm0 * MEMF(esp + 0x14); /* mulss */
    MEMF(esp + 0x10) = xmm3; /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    g_seh_ebp = ebp; sub_00206B05(); return; /* tail jmp 0x00206B05 */

}

/**
 * sub_00206B50
 * Original: 0x00206B50 - 0x00206BEA (154 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00206B50(void)
{
    int _flags = 0; /* fallback flag var */

loc_00206B50: ;
    PUSH32(esp, esi);
    esi = MEM32(0x5499E8);
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_00206B6D; /* jb: below (unsigned <) */

loc_00206B5E: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_00206B6D: ;
    MEM32(eax) = 0x4030C;
    MEM32(eax + 4) = 0;
    ecx = MEM32(0x549B40);
    MEM32(eax + 8) = 0x41D78;
    MEM32(eax + 0xC) = ecx;
    eax = eax + 0x10;
    MEM32(esi) = eax;
    eax = MEM32(0x549C34);
    (void)0; /* cmp eax, 2 - flags set for next jcc */
    MEM32(0x549C34) = 0;
    if (CMP_NE(eax, 2)) goto loc_00206BD2; /* jne: not equal / not zero */

loc_00206BA3: ;
    PUSH32(esp, 0); sub_005384E0(); /* call 0x005384E0 */

loc_00206BA8: ;
    PUSH32(esp, 0); sub_00536810(); /* call 0x00536810 */

loc_00206BAD: ;
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_00206BC3; /* jb: below (unsigned <) */

loc_00206BB4: ;
    eax = MEM32(0x54A8B8);
    edx = eax;
    edx = edx >> 1;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_00206BC3: ;
    PUSH32(esp, esi);
    edx = eax;
    PUSH32(esp, 0); sub_00538030(); /* call 0x00538030 */

loc_00206BCB: ;
    PUSH32(esp, 0); sub_00537E30(); /* call 0x00537E30 */

loc_00206BD0: ;
    MEM32(esi) = eax;

loc_00206BD2: ;
    edx = 0; /* xor self */
    ecx = 0x4035C;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00206BDE: ;
    MEM32(0x549AF8) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00206BF0
 * Original: 0x00206BF0 - 0x00206CD2 (226 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00206BF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00206BF0: ;
    esp = esp - 0x14;
    xmm1 = MEMF(0x6495A8); /* movss */
    xmm0 = (float)(int32_t)MEM32(esp + 0x30); /* cvtsi2ss */
    (void)0; /* test MEM8(esp + 0x3C), 4 - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x2C);
    xmm0 = xmm0 * xmm1; /* mulss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = (float)(int32_t)MEM32(esp + 0x3C); /* cvtsi2ss */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = ZX8(MEM8(0x776154));
    xmm0 = xmm0 * xmm1; /* mulss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = (float)(int32_t)MEM32(esp + 0x48); /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(eax * 4 + 0x776144); /* mulss */
    eax = (int32_t)xmm0; /* cvttss2si */
    xmm0 = (float)(int32_t)MEM32(esp + 0x2C); /* cvtsi2ss */
    if (TEST_NZ(MEM8(esp + 0x3C), 4)) { sub_00206CD2(); return; } /* jne: not equal / not zero */

loc_00206C50: ;
    xmm1 = MEMF(0x649F38); /* movss */
    xmm2 = MEMF(0x64A760); /* movss */
    xmm3 = MEMF(0x64994C); /* movss */
    xmm4 = MEMF(0x64A6D8); /* movss */
    xmm5 = MEMF(0x64A77C); /* movss */
    xmm6 = MEMF(0x58BD48); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm0 = xmm0 + xmm3; /* addss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    xmm0 = (float)(int32_t)MEM32(esp + 0x30); /* cvtsi2ss */
    xmm0 = xmm0 - xmm4; /* subss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 + xmm6; /* addss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    xmm0 = (float)(int32_t)ebp; /* cvtsi2ss */
    xmm0 = xmm0 - xmm1; /* subss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm0 = xmm0 + xmm3; /* addss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = (float)(int32_t)edi; /* cvtsi2ss */
    xmm0 = xmm0 - xmm4; /* subss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 + xmm6; /* addss */
    g_seh_ebp = ebp; sub_00206CF2(); return; /* tail jmp 0x00206CF2 */

}

/**
 * sub_00207120
 * Original: 0x00207120 - 0x002072E0 (448 bytes, 107 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00207120(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00207120: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00205230(); /* call 0x00205230 */

loc_00207127: ;
    esi = MEM32(0x849B24);
    ebx = 0; /* xor self */
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM8(0x849B60) = LO8(ebx);
    MEM8(0x849B61) = LO8(ebx);
    MEM8(0x849B62) = LO8(ebx);
    MEM8(0x849B63) = LO8(ebx);
    if (CMP_EQ(esi, ebx)) goto loc_00207171; /* je: equal / zero */

loc_0020714B: ;
    eax = MEM32(0x8470FC);
    (void)0; /* cmp MEM32(eax + 4), ebx - flags set for next jcc */
    ecx = eax;
    if (CMP_EQ(MEM32(eax + 4), ebx)) goto loc_0020716B; /* je: equal / zero */

loc_00207157: ;
    if (CMP_LE(esi, ebx)) goto loc_0020716B; /* jle: less or equal (signed <=) */

loc_0020715B: ;
    edx = MEM32(eax + 0xC);
    if (CMP_NE(edx, esi)) goto loc_0020716B; /* jne: not equal / not zero */

loc_00207162: ;
    edx--;
    MEM32(eax + 0xC) = edx;
    PUSH32(esp, 0); sub_0004E310(); /* call 0x0004E310 */

loc_0020716B: ;
    MEM32(0x849B24) = ebx;

loc_00207171: ;
    eax = MEM32(0x849AA4);
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM8(0x849B20) = LO8(ebx);
    if (CMP_EQ(eax, ebx)) goto loc_002071B6; /* je: equal / zero */

loc_00207180: ;
    if (CMP_NE(eax, MEM32(0x849AA8))) goto loc_0020718E; /* jne: not equal / not zero */

loc_00207188: ;
    MEM32(0x849AA8) = ebx;

loc_0020718E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00206780(); /* call 0x00206780 */

loc_00207194: ;
    xmm0 = 0.0f; /* xorps self = zero */
    esp = esp + 4;
    MEM32(0x849AA4) = ebx;
    MEM8(0x849B3C) = LO8(ebx);
    MEMF(0x849B38) = xmm0; /* movss */
    MEMF(0x849B34) = xmm0; /* movss */

loc_002071B6: ;
    eax = MEM32(0x849AA8);
    if (CMP_EQ(eax, ebx)) goto loc_002071CE; /* je: equal / zero */

loc_002071BF: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00206780(); /* call 0x00206780 */

loc_002071C5: ;
    esp = esp + 4;
    MEM32(0x849AA8) = ebx;

loc_002071CE: ;
    eax = MEM32(0x849ADC);
    if (CMP_EQ(eax, 1)) goto loc_00207201; /* je: equal / zero */

loc_002071D8: ;
    ebx = eax;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x103C);
    ebx = ebx + 0x85E580;
    PUSH32(esp, 0); sub_00200A60(); /* call 0x00200A60 */

loc_002071EB: ;
    ebx = 0x85F5BC;
    MEM32(0x849ADC) = 1;
    PUSH32(esp, 0); sub_00200860(); /* call 0x00200860 */

loc_002071FF: ;
    ebx = 0; /* xor self */

loc_00207201: ;
    PUSH32(esp, 0); sub_002072E0(); /* call 0x002072E0 */

loc_00207206: ;
    eax = MEM32(0x849ADC);
    if (CMP_EQ(eax, 2)) goto loc_00207239; /* je: equal / zero */

loc_00207210: ;
    ebx = eax;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x103C);
    ebx = ebx + 0x85E580;
    PUSH32(esp, 0); sub_00200A60(); /* call 0x00200A60 */

loc_00207223: ;
    ebx = 0x8605F8;
    MEM32(0x849ADC) = 2;
    PUSH32(esp, 0); sub_00200860(); /* call 0x00200860 */

loc_00207237: ;
    ebx = 0; /* xor self */

loc_00207239: ;
    PUSH32(esp, 0); sub_002072E0(); /* call 0x002072E0 */

loc_0020723E: ;
    eax = MEM32(0x849ADC);
    if (CMP_EQ(eax, 3)) goto loc_00207271; /* je: equal / zero */

loc_00207248: ;
    ebx = eax;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x103C);
    ebx = ebx + 0x85E580;
    PUSH32(esp, 0); sub_00200A60(); /* call 0x00200A60 */

loc_0020725B: ;
    ebx = 0x861634;
    MEM32(0x849ADC) = 3;
    PUSH32(esp, 0); sub_00200860(); /* call 0x00200860 */

loc_0020726F: ;
    ebx = 0; /* xor self */

loc_00207271: ;
    PUSH32(esp, 0); sub_002072E0(); /* call 0x002072E0 */

loc_00207276: ;
    eax = MEM32(0x849ADC);
    if (CMP_EQ(eax, ebx)) goto loc_002072A8; /* je: equal / zero */

loc_0020727F: ;
    ebx = eax;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x103C);
    ebx = ebx + 0x85E580;
    PUSH32(esp, 0); sub_00200A60(); /* call 0x00200A60 */

loc_00207292: ;
    ebx = 0x85E580;
    MEM32(0x849ADC) = 0;
    PUSH32(esp, 0); sub_00200860(); /* call 0x00200860 */

loc_002072A6: ;
    ebx = 0; /* xor self */

loc_002072A8: ;
    PUSH32(esp, 0); sub_002072E0(); /* call 0x002072E0 */

loc_002072AD: ;
    eax = MEM32(0x849ADC);
    if (CMP_EQ(eax, ebx)) goto loc_002072DD; /* je: equal / zero */

loc_002072B6: ;
    ebx = eax;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x103C);
    ebx = ebx + 0x85E580;
    PUSH32(esp, 0); sub_00200A60(); /* call 0x00200A60 */

loc_002072C9: ;
    ebx = 0x85E580;
    MEM32(0x849ADC) = 0;
    PUSH32(esp, 0); sub_00200860(); /* call 0x00200860 */

loc_002072DD: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
