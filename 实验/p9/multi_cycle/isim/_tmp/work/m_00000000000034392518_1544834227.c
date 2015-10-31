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
static const char *ng0 = "C:/Users/vaio/Desktop/p9/multi_cycle/state.v";



static void C30_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;

LAB0:    t1 = (t0 + 1528U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1052);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t0 + 1888);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    t10 = (t9 + 4U);
    t11 = 15U;
    t12 = t11;
    t13 = (t4 + 4U);
    t14 = *((unsigned int *)t4);
    t11 = (t11 & t14);
    t15 = *((unsigned int *)t13);
    t12 = (t12 & t15);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 & 4294967280U);
    t17 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t17 | t11);
    t18 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t18 & 4294967280U);
    t19 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t19 | t12);
    xsi_driver_vfirst_trans(t5, 0, 3);
    t20 = (t0 + 1836);
    *((int *)t20) = 1;

LAB1:    return;
}

static void A32_1(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;

LAB0:    t1 = (t0 + 1656U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 1844);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(33, ng0);
    t4 = (t0 + 564U);
    t5 = *((char **)t4);
    memset(t3, 0, 8);
    t4 = (t3 + 4U);
    t6 = (t5 + 4U);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    *((unsigned int *)t3) = t8;
    *((unsigned int *)t4) = 0;
    if (*((unsigned int *)t6) != 0)
        goto LAB6;

LAB5:    t13 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t13 & 1U);
    t14 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t14 & 1U);
    t15 = (t3 + 4U);
    t16 = *((unsigned int *)t15);
    t17 = (~(t16));
    t18 = *((unsigned int *)t3);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB7;

LAB8:
LAB9:    goto LAB2;

LAB6:    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t6);
    *((unsigned int *)t3) = (t9 | t10);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t6);
    *((unsigned int *)t4) = (t11 | t12);
    goto LAB5;

LAB7:    xsi_set_current_line(34, ng0);
    t21 = (t0 + 740U);
    t22 = *((char **)t21);
    t21 = (t0 + 1052);
    xsi_vlogvar_assign_value(t21, t22, 0, 0, 4);
    goto LAB9;

}


extern void work_m_00000000000034392518_1544834227_init()
{
	static char *pe[] = {(void *)C30_0,(void *)A32_1};
	xsi_register_didat("work_m_00000000000034392518_1544834227", "isim/_tmp/work/m_00000000000034392518_1544834227.didat");
	xsi_register_executes(pe);
}
