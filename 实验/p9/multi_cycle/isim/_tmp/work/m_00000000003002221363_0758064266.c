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
static const char *ng0 = "C:/Users/vaio/Desktop/p9/multi_cycle/pbdebounce.v";
static int ng1[] = {1, 0};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {255U, 0U};



static void A29_0(char *t0)
{
    char t7[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    unsigned int t10;
    int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;

LAB0:    t1 = (t0 + 1532U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 1712);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(29, ng0);

LAB5:    xsi_set_current_line(30, ng0);
    t3 = (t0 + 1056);
    t4 = (t3 + 32U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng1)));
    memset(t7, 0, 8);
    xsi_vlog_unsigned_lshift(t7, 8, t5, 8, t6, 32);
    t8 = (t0 + 1056);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 8);
    xsi_set_current_line(31, ng0);
    t2 = (t0 + 652U);
    t3 = *((char **)t2);
    t2 = (t0 + 1056);
    t4 = (t0 + 1056);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t7, t6, 2, t8, 32, 1);
    t9 = (t7 + 4U);
    t10 = *((unsigned int *)t9);
    t11 = (!(t10));
    if (t11 == 1)
        goto LAB6;

LAB7:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 1056);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t7, 0, 8);
    t6 = (t7 + 4U);
    t8 = (t4 + 4U);
    t9 = (t5 + 4U);
    t10 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t5);
    t13 = (t10 ^ t12);
    t14 = *((unsigned int *)t8);
    t15 = *((unsigned int *)t9);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t8);
    t19 = *((unsigned int *)t9);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB11;

LAB8:    if (t20 != 0)
        goto LAB10;

LAB9:    *((unsigned int *)t7) = 1;

LAB11:    t23 = (t7 + 4U);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t7);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB12;

LAB13:
LAB14:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 1056);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t7, 0, 8);
    t6 = (t7 + 4U);
    t8 = (t4 + 4U);
    t9 = (t5 + 4U);
    t10 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t5);
    t13 = (t10 ^ t12);
    t14 = *((unsigned int *)t8);
    t15 = *((unsigned int *)t9);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t8);
    t19 = *((unsigned int *)t9);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB18;

LAB15:    if (t20 != 0)
        goto LAB17;

LAB16:    *((unsigned int *)t7) = 1;

LAB18:    t23 = (t7 + 4U);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t7);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB19;

LAB20:
LAB21:    goto LAB2;

LAB6:    xsi_vlogvar_assign_value(t2, t3, 0, *((unsigned int *)t7), 1);
    goto LAB7;

LAB10:    *((unsigned int *)t7) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB11;

LAB12:    xsi_set_current_line(33, ng0);
    t29 = ((char*)((ng2)));
    t30 = (t0 + 964);
    xsi_vlogvar_assign_value(t30, t29, 0, 0, 1);
    goto LAB14;

LAB17:    *((unsigned int *)t7) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB18;

LAB19:    xsi_set_current_line(35, ng0);
    t29 = ((char*)((ng1)));
    t30 = (t0 + 964);
    xsi_vlogvar_assign_value(t30, t29, 0, 0, 1);
    goto LAB21;

}


extern void work_m_00000000003002221363_0758064266_init()
{
	static char *pe[] = {(void *)A29_0};
	xsi_register_didat("work_m_00000000003002221363_0758064266", "isim/_tmp/work/m_00000000003002221363_0758064266.didat");
	xsi_register_executes(pe);
}
