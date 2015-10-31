/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                         */
/*  \   \        Copyright (c) 2003-2007 Xilinx, Inc.                 */
/*  /   /        All Right Reserved.                                  */
/* /---/   /\                                                         */
/* \   \  /  \                                                        */
/*  \___\/\___\                                                       */
/**********************************************************************/

/* This file is designed for use with ISim build 0x734844ce */

#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/vaio/Desktop/p9/multi_cycle/state_control.v";
static int ng1[] = {1, 0};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {0U, 0U};
static unsigned int ng4[] = {1U, 0U};
static unsigned int ng5[] = {35U, 0U};
static unsigned int ng6[] = {2U, 0U};
static unsigned int ng7[] = {43U, 0U};
static unsigned int ng8[] = {6U, 0U};
static unsigned int ng9[] = {4U, 0U};
static unsigned int ng10[] = {8U, 0U};
static unsigned int ng11[] = {9U, 0U};
static unsigned int ng12[] = {3U, 0U};
static unsigned int ng13[] = {5U, 0U};
static unsigned int ng14[] = {7U, 0U};



static void I29_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(29, ng0);

LAB2:    xsi_set_current_line(30, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1056);
    xsi_vlogvar_generic_wait_assign_value(t2, t1, 1, 0, 0, 1, 0LL);
    xsi_set_current_line(31, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 1148);
    xsi_vlogvar_generic_wait_assign_value(t2, t1, 1, 0, 0, 1, 0LL);

LAB1:    return;
}

static void A34_1(char *t0)
{
    char t13[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    char *t11;
    int t12;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;

LAB0:    t1 = (t0 + 1752U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 1932);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(34, ng0);

LAB5:    xsi_set_current_line(35, ng0);
    t3 = (t0 + 564U);
    t4 = *((char **)t3);
    t3 = (t4 + 4U);
    t5 = *((unsigned int *)t3);
    t6 = (~(t5));
    t7 = *((unsigned int *)t4);
    t8 = (t7 & t6);
    t9 = (t8 != 0);
    if (t9 > 0)
        goto LAB6;

LAB7:
LAB8:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 740U);
    t3 = *((char **)t2);

LAB9:    t2 = ((char*)((ng3)));
    t12 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t12 == 1)
        goto LAB10;

LAB11:    t2 = ((char*)((ng4)));
    t12 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t12 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng6)));
    t12 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t12 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng12)));
    t12 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t12 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng9)));
    t12 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t12 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng13)));
    t12 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t12 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng8)));
    t12 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t12 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng14)));
    t12 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t12 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng10)));
    t12 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t12 == 1)
        goto LAB26;

LAB27:    t2 = ((char*)((ng11)));
    t12 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t12 == 1)
        goto LAB28;

LAB29:
LAB30:    goto LAB2;

LAB6:    xsi_set_current_line(35, ng0);
    t10 = ((char*)((ng2)));
    t11 = (t0 + 1056);
    xsi_vlogvar_generic_wait_assign_value(t11, t10, 1, 0, 0, 1, 0LL);
    goto LAB8;

LAB10:    xsi_set_current_line(37, ng0);

LAB31:    xsi_set_current_line(38, ng0);
    t4 = ((char*)((ng4)));
    t10 = (t0 + 964);
    xsi_vlogvar_generic_wait_assign_value(t10, t4, 2, 0, 0, 4, 0LL);
    xsi_set_current_line(39, ng0);
    t2 = (t0 + 1148);
    t4 = (t2 + 32U);
    t10 = *((char **)t4);
    memset(t13, 0, 8);
    t11 = (t13 + 4U);
    t14 = (t10 + 4U);
    t5 = *((unsigned int *)t10);
    t6 = (~(t5));
    *((unsigned int *)t13) = t6;
    *((unsigned int *)t11) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB33;

LAB32:    t16 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t16 & 1U);
    t17 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t17 & 1U);
    t18 = (t13 + 4U);
    t19 = *((unsigned int *)t18);
    t20 = (~(t19));
    t21 = *((unsigned int *)t13);
    t22 = (t21 & t20);
    t23 = (t22 != 0);
    if (t23 > 0)
        goto LAB34;

LAB35:
LAB36:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 1148);
    t4 = (t2 + 32U);
    t10 = *((char **)t4);
    memset(t13, 0, 8);
    t11 = (t13 + 4U);
    t14 = (t10 + 4U);
    t5 = *((unsigned int *)t10);
    t6 = (~(t5));
    *((unsigned int *)t13) = t6;
    *((unsigned int *)t11) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB39;

LAB38:    t16 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t16 & 1U);
    t17 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t17 & 1U);
    t18 = (t0 + 1148);
    xsi_vlogvar_generic_wait_assign_value(t18, t13, 2, 0, 0, 1, 0LL);
    goto LAB30;

LAB12:    xsi_set_current_line(44, ng0);

LAB40:    xsi_set_current_line(45, ng0);
    t4 = (t0 + 652U);
    t10 = *((char **)t4);

LAB41:    t4 = ((char*)((ng5)));
    t26 = xsi_vlog_unsigned_case_compare(t10, 6, t4, 6);
    if (t26 == 1)
        goto LAB42;

LAB43:    t2 = ((char*)((ng7)));
    t12 = xsi_vlog_unsigned_case_compare(t10, 6, t2, 6);
    if (t12 == 1)
        goto LAB44;

LAB45:    t2 = ((char*)((ng3)));
    t12 = xsi_vlog_unsigned_case_compare(t10, 6, t2, 6);
    if (t12 == 1)
        goto LAB46;

LAB47:    t2 = ((char*)((ng9)));
    t12 = xsi_vlog_unsigned_case_compare(t10, 6, t2, 6);
    if (t12 == 1)
        goto LAB48;

LAB49:    t2 = ((char*)((ng6)));
    t12 = xsi_vlog_unsigned_case_compare(t10, 6, t2, 6);
    if (t12 == 1)
        goto LAB50;

LAB51:
LAB52:    goto LAB30;

LAB14:    xsi_set_current_line(54, ng0);

LAB53:    xsi_set_current_line(55, ng0);
    t4 = (t0 + 652U);
    t11 = *((char **)t4);
    t4 = ((char*)((ng5)));
    memset(t13, 0, 8);
    t14 = (t13 + 4U);
    t18 = (t11 + 4U);
    t24 = (t4 + 4U);
    t5 = *((unsigned int *)t11);
    t6 = *((unsigned int *)t4);
    t7 = (t5 ^ t6);
    t8 = *((unsigned int *)t18);
    t9 = *((unsigned int *)t24);
    t15 = (t8 ^ t9);
    t16 = (t7 | t15);
    t17 = *((unsigned int *)t18);
    t19 = *((unsigned int *)t24);
    t20 = (t17 | t19);
    t21 = (~(t20));
    t22 = (t16 & t21);
    if (t22 != 0)
        goto LAB57;

LAB54:    if (t20 != 0)
        goto LAB56;

LAB55:    *((unsigned int *)t13) = 1;

LAB57:    t25 = (t13 + 4U);
    t23 = *((unsigned int *)t25);
    t27 = (~(t23));
    t28 = *((unsigned int *)t13);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB58;

LAB59:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 652U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng7)));
    memset(t13, 0, 8);
    t11 = (t13 + 4U);
    t14 = (t4 + 4U);
    t18 = (t2 + 4U);
    t5 = *((unsigned int *)t4);
    t6 = *((unsigned int *)t2);
    t7 = (t5 ^ t6);
    t8 = *((unsigned int *)t14);
    t9 = *((unsigned int *)t18);
    t15 = (t8 ^ t9);
    t16 = (t7 | t15);
    t17 = *((unsigned int *)t14);
    t19 = *((unsigned int *)t18);
    t20 = (t17 | t19);
    t21 = (~(t20));
    t22 = (t16 & t21);
    if (t22 != 0)
        goto LAB64;

LAB61:    if (t20 != 0)
        goto LAB63;

LAB62:    *((unsigned int *)t13) = 1;

LAB64:    t24 = (t13 + 4U);
    t23 = *((unsigned int *)t24);
    t27 = (~(t23));
    t28 = *((unsigned int *)t13);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB65;

LAB66:
LAB67:
LAB60:    goto LAB30;

LAB16:    xsi_set_current_line(61, ng0);
    t4 = ((char*)((ng9)));
    t11 = (t0 + 964);
    xsi_vlogvar_generic_wait_assign_value(t11, t4, 2, 0, 0, 4, 0LL);
    goto LAB30;

LAB18:    xsi_set_current_line(62, ng0);

LAB68:    xsi_set_current_line(63, ng0);
    t4 = ((char*)((ng3)));
    t11 = (t0 + 964);
    xsi_vlogvar_generic_wait_assign_value(t11, t4, 2, 0, 0, 4, 0LL);
    goto LAB30;

LAB20:    xsi_set_current_line(66, ng0);

LAB69:    xsi_set_current_line(67, ng0);
    t4 = ((char*)((ng3)));
    t11 = (t0 + 964);
    xsi_vlogvar_generic_wait_assign_value(t11, t4, 2, 0, 0, 4, 0LL);
    goto LAB30;

LAB22:    xsi_set_current_line(70, ng0);
    t4 = ((char*)((ng14)));
    t11 = (t0 + 964);
    xsi_vlogvar_generic_wait_assign_value(t11, t4, 2, 0, 0, 4, 0LL);
    goto LAB30;

LAB24:    xsi_set_current_line(71, ng0);

LAB70:    xsi_set_current_line(72, ng0);
    t4 = ((char*)((ng3)));
    t11 = (t0 + 964);
    xsi_vlogvar_generic_wait_assign_value(t11, t4, 2, 0, 0, 4, 0LL);
    goto LAB30;

LAB26:    xsi_set_current_line(75, ng0);

LAB71:    xsi_set_current_line(76, ng0);
    t4 = ((char*)((ng3)));
    t11 = (t0 + 964);
    xsi_vlogvar_generic_wait_assign_value(t11, t4, 2, 0, 0, 4, 0LL);
    goto LAB30;

LAB28:    xsi_set_current_line(79, ng0);

LAB72:    xsi_set_current_line(80, ng0);
    t4 = ((char*)((ng3)));
    t11 = (t0 + 964);
    xsi_vlogvar_generic_wait_assign_value(t11, t4, 2, 0, 0, 4, 0LL);
    goto LAB30;

LAB33:    t7 = *((unsigned int *)t13);
    t8 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t7 | t8);
    t9 = *((unsigned int *)t11);
    t15 = *((unsigned int *)t14);
    *((unsigned int *)t11) = (t9 | t15);
    goto LAB32;

LAB34:    xsi_set_current_line(39, ng0);

LAB37:    xsi_set_current_line(40, ng0);
    t24 = ((char*)((ng1)));
    t25 = (t0 + 1056);
    xsi_vlogvar_generic_wait_assign_value(t25, t24, 1, 0, 0, 1, 0LL);
    goto LAB36;

LAB39:    t7 = *((unsigned int *)t13);
    t8 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t7 | t8);
    t9 = *((unsigned int *)t11);
    t15 = *((unsigned int *)t14);
    *((unsigned int *)t11) = (t9 | t15);
    goto LAB38;

LAB42:    xsi_set_current_line(46, ng0);
    t11 = ((char*)((ng6)));
    t14 = (t0 + 964);
    xsi_vlogvar_generic_wait_assign_value(t14, t11, 2, 0, 0, 4, 0LL);
    goto LAB52;

LAB44:    xsi_set_current_line(47, ng0);
    t4 = ((char*)((ng6)));
    t11 = (t0 + 964);
    xsi_vlogvar_generic_wait_assign_value(t11, t4, 2, 0, 0, 4, 0LL);
    goto LAB52;

LAB46:    xsi_set_current_line(48, ng0);
    t4 = ((char*)((ng8)));
    t11 = (t0 + 964);
    xsi_vlogvar_generic_wait_assign_value(t11, t4, 2, 0, 0, 4, 0LL);
    goto LAB52;

LAB48:    xsi_set_current_line(49, ng0);
    t4 = ((char*)((ng10)));
    t11 = (t0 + 964);
    xsi_vlogvar_generic_wait_assign_value(t11, t4, 2, 0, 0, 4, 0LL);
    goto LAB52;

LAB50:    xsi_set_current_line(50, ng0);
    t4 = ((char*)((ng11)));
    t11 = (t0 + 964);
    xsi_vlogvar_generic_wait_assign_value(t11, t4, 2, 0, 0, 4, 0LL);
    goto LAB52;

LAB56:    *((unsigned int *)t13) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB57;

LAB58:    xsi_set_current_line(56, ng0);
    t31 = ((char*)((ng12)));
    t32 = (t0 + 964);
    xsi_vlogvar_generic_wait_assign_value(t32, t31, 2, 0, 0, 4, 0LL);
    goto LAB60;

LAB63:    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB64;

LAB65:    xsi_set_current_line(58, ng0);
    t25 = ((char*)((ng13)));
    t31 = (t0 + 964);
    xsi_vlogvar_generic_wait_assign_value(t31, t25, 2, 0, 0, 4, 0LL);
    goto LAB67;

}


extern void work_m_00000000002652721862_3823333393_init()
{
	static char *pe[] = {(void *)I29_0,(void *)A34_1};
	xsi_register_didat("work_m_00000000002652721862_3823333393", "isim/_tmp/work/m_00000000002652721862_3823333393.didat");
	xsi_register_executes(pe);
}
