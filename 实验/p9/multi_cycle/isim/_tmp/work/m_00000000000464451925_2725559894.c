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
static unsigned int ng0[] = {6U, 0U};
static int ng1[] = {0, 0};
static const char *ng2 = "C:/Users/vaio/Desktop/p9/multi_cycle/alu.v";
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {0U, 0U};
static unsigned int ng5[] = {1U, 0U};
static unsigned int ng6[] = {7U, 0U};
static int ng7[] = {1, 0};



static void C31_0(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;

LAB0:    t1 = (t0 + 1792U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 740U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng0)));
    memset(t4, 0, 8);
    t5 = (t4 + 4U);
    t6 = (t3 + 4U);
    t7 = (t2 + 4U);
    t8 = *((unsigned int *)t3);
    t9 = *((unsigned int *)t2);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = (t10 | t13);
    t15 = *((unsigned int *)t6);
    t16 = *((unsigned int *)t7);
    t17 = (t15 | t16);
    t18 = (~(t17));
    t19 = (t14 & t18);
    if (t19 != 0)
        goto LAB7;

LAB4:    if (t17 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t4) = 1;

LAB7:    t20 = (t0 + 2288);
    t21 = (t20 + 32U);
    t22 = *((char **)t21);
    t23 = (t22 + 40U);
    t24 = *((char **)t23);
    t25 = (t24 + 4U);
    t26 = 1U;
    t27 = t26;
    t28 = (t4 + 4U);
    t29 = *((unsigned int *)t4);
    t26 = (t26 & t29);
    t30 = *((unsigned int *)t28);
    t27 = (t27 & t30);
    t31 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t31 & 4294967294U);
    t32 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t32 | t26);
    t33 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t33 & 4294967294U);
    t34 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t34 | t27);
    xsi_driver_vfirst_trans(t20, 0, 0);
    t35 = (t0 + 2228);
    *((int *)t35) = 1;

LAB1:    return;
LAB6:    *((unsigned int *)t4) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB7;

}

static void C34_1(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;

LAB0:    t1 = (t0 + 1920U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1092U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t4, 0, 8);
    t5 = (t4 + 4U);
    t6 = (t3 + 4U);
    t7 = (t2 + 4U);
    t8 = *((unsigned int *)t3);
    t9 = *((unsigned int *)t2);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = (t10 | t13);
    t15 = *((unsigned int *)t6);
    t16 = *((unsigned int *)t7);
    t17 = (t15 | t16);
    t18 = (~(t17));
    t19 = (t14 & t18);
    if (t19 != 0)
        goto LAB7;

LAB4:    if (t17 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t4) = 1;

LAB7:    t20 = (t0 + 2324);
    t21 = (t20 + 32U);
    t22 = *((char **)t21);
    t23 = (t22 + 40U);
    t24 = *((char **)t23);
    t25 = (t24 + 4U);
    t26 = 1U;
    t27 = t26;
    t28 = (t4 + 4U);
    t29 = *((unsigned int *)t4);
    t26 = (t26 & t29);
    t30 = *((unsigned int *)t28);
    t27 = (t27 & t30);
    t31 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t31 & 4294967294U);
    t32 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t32 | t26);
    t33 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t33 & 4294967294U);
    t34 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t34 | t27);
    xsi_driver_vfirst_trans(t20, 0, 0);
    t35 = (t0 + 2236);
    *((int *)t35) = 1;

LAB1:    return;
LAB6:    *((unsigned int *)t4) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB7;

}

static void A37_2(char *t0)
{
    char t8[8];
    char t40[8];
    char t41[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    int t5;
    char *t6;
    char *t7;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    int t31;
    int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t42;
    char *t43;
    char *t44;

LAB0:    t1 = (t0 + 2048U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng2);
    t2 = (t0 + 2244);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(37, ng2);

LAB5:    xsi_set_current_line(39, ng2);
    t3 = (t0 + 740U);
    t4 = *((char **)t3);

LAB6:    t3 = ((char*)((ng3)));
    t5 = xsi_vlog_unsigned_case_compare(t4, 3, t3, 3);
    if (t5 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng0)));
    t5 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t5 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng4)));
    t5 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t5 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng5)));
    t5 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t5 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng6)));
    t5 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t5 == 1)
        goto LAB15;

LAB16:
LAB18:
LAB17:    xsi_set_current_line(46, ng2);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1316);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB19:    goto LAB2;

LAB7:    xsi_set_current_line(41, ng2);
    t6 = (t0 + 1092U);
    t7 = *((char **)t6);
    t6 = (t0 + 1316);
    xsi_vlogvar_assign_value(t6, t7, 0, 0, 32);
    goto LAB19;

LAB9:    xsi_set_current_line(42, ng2);
    t3 = (t0 + 1092U);
    t6 = *((char **)t3);
    t3 = (t0 + 1316);
    xsi_vlogvar_assign_value(t3, t6, 0, 0, 32);
    goto LAB19;

LAB11:    xsi_set_current_line(43, ng2);
    t3 = (t0 + 564U);
    t6 = *((char **)t3);
    t3 = (t0 + 652U);
    t7 = *((char **)t3);
    t9 = *((unsigned int *)t6);
    t10 = *((unsigned int *)t7);
    t11 = (t9 & t10);
    *((unsigned int *)t8) = t11;
    t3 = (t6 + 4U);
    t12 = (t7 + 4U);
    t13 = (t8 + 4U);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t12);
    t16 = (t14 | t15);
    *((unsigned int *)t13) = t16;
    t17 = *((unsigned int *)t13);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB20;

LAB21:
LAB22:    t39 = (t0 + 1316);
    xsi_vlogvar_assign_value(t39, t8, 0, 0, 32);
    goto LAB19;

LAB13:    xsi_set_current_line(44, ng2);
    t3 = (t0 + 564U);
    t6 = *((char **)t3);
    t3 = (t0 + 652U);
    t7 = *((char **)t3);
    t9 = *((unsigned int *)t6);
    t10 = *((unsigned int *)t7);
    t11 = (t9 | t10);
    *((unsigned int *)t8) = t11;
    t3 = (t6 + 4U);
    t12 = (t7 + 4U);
    t13 = (t8 + 4U);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t12);
    t16 = (t14 | t15);
    *((unsigned int *)t13) = t16;
    t17 = *((unsigned int *)t13);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB23;

LAB24:
LAB25:    t39 = (t0 + 1316);
    xsi_vlogvar_assign_value(t39, t8, 0, 0, 32);
    goto LAB19;

LAB15:    xsi_set_current_line(45, ng2);
    t3 = (t0 + 564U);
    t6 = *((char **)t3);
    t3 = (t0 + 652U);
    t7 = *((char **)t3);
    memset(t41, 0, 8);
    t3 = (t41 + 4U);
    t12 = (t6 + 4U);
    t13 = (t7 + 4U);
    if (*((unsigned int *)t12) != 0)
        goto LAB27;

LAB26:    if (*((unsigned int *)t13) != 0)
        goto LAB27;

LAB30:    if (*((unsigned int *)t6) < *((unsigned int *)t7))
        goto LAB28;

LAB29:    memset(t40, 0, 8);
    t21 = (t40 + 4U);
    t22 = (t41 + 4U);
    t9 = *((unsigned int *)t22);
    t10 = (~(t9));
    t11 = *((unsigned int *)t41);
    t14 = (t11 & t10);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t22) != 0)
        goto LAB33;

LAB34:    t39 = (t40 + 4U);
    t16 = *((unsigned int *)t40);
    t17 = *((unsigned int *)t39);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB35;

LAB36:    t19 = *((unsigned int *)t40);
    t20 = (~(t19));
    t23 = *((unsigned int *)t39);
    t24 = (t20 || t23);
    if (t24 > 0)
        goto LAB37;

LAB38:    if (*((unsigned int *)t39) > 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t40) > 0)
        goto LAB41;

LAB42:    memcpy(t8, t43, 8);

LAB43:    t44 = (t0 + 1316);
    xsi_vlogvar_assign_value(t44, t8, 0, 0, 32);
    goto LAB19;

LAB20:    t19 = *((unsigned int *)t8);
    t20 = *((unsigned int *)t13);
    *((unsigned int *)t8) = (t19 | t20);
    t21 = (t6 + 4U);
    t22 = (t7 + 4U);
    t23 = *((unsigned int *)t6);
    t24 = (~(t23));
    t25 = *((unsigned int *)t21);
    t26 = (~(t25));
    t27 = *((unsigned int *)t7);
    t28 = (~(t27));
    t29 = *((unsigned int *)t22);
    t30 = (~(t29));
    t31 = (t24 & t26);
    t32 = (t28 & t30);
    t33 = (~(t31));
    t34 = (~(t32));
    t35 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t35 & t33);
    t36 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t36 & t34);
    t37 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t37 & t33);
    t38 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t38 & t34);
    goto LAB22;

LAB23:    t19 = *((unsigned int *)t8);
    t20 = *((unsigned int *)t13);
    *((unsigned int *)t8) = (t19 | t20);
    t21 = (t6 + 4U);
    t22 = (t7 + 4U);
    t23 = *((unsigned int *)t21);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t31 = (t25 & t24);
    t26 = *((unsigned int *)t22);
    t27 = (~(t26));
    t28 = *((unsigned int *)t7);
    t32 = (t28 & t27);
    t29 = (~(t31));
    t30 = (~(t32));
    t33 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t33 & t29);
    t34 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t34 & t30);
    goto LAB25;

LAB27:    *((unsigned int *)t41) = 1;
    *((unsigned int *)t3) = 1;
    goto LAB29;

LAB28:    *((unsigned int *)t41) = 1;
    goto LAB29;

LAB31:    *((unsigned int *)t40) = 1;
    goto LAB34;

LAB33:    *((unsigned int *)t40) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB34;

LAB35:    t42 = ((char*)((ng7)));
    goto LAB36;

LAB37:    t43 = ((char*)((ng1)));
    goto LAB38;

LAB39:    xsi_vlog_unsigned_bit_combine(t8, 32, t42, 32, t43, 32);
    goto LAB43;

LAB41:    memcpy(t8, t42, 8);
    goto LAB43;

}


extern void work_m_00000000000464451925_2725559894_init()
{
	static char *pe[] = {(void *)C31_0,(void *)C34_1,(void *)A37_2};
	xsi_register_didat("work_m_00000000000464451925_2725559894", "isim/_tmp/work/m_00000000000464451925_2725559894.didat");
	xsi_register_executes(pe);
}
