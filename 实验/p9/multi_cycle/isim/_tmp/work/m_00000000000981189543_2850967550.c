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
static const char *ng0 = "C:/Users/vaio/Desktop/p9/multi_cycle/timer_1s.v";
static int ng1[] = {0, 0};
static int ng2[] = {25000000, 0};
static int ng3[] = {1, 0};



static void I26_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(26, ng0);

LAB2:    xsi_set_current_line(27, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 880);
    xsi_vlogvar_generic_wait_assign_value(t2, t1, 1, 0, 0, 32, 0LL);
    xsi_set_current_line(28, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 788);
    xsi_vlogvar_generic_wait_assign_value(t2, t1, 1, 0, 0, 1, 0LL);

LAB1:    return;
}

static void A30_1(char *t0)
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
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;

LAB0:    t1 = (t0 + 1484U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 1664);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(31, ng0);
    t3 = (t0 + 880);
    t4 = (t3 + 32U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng2)));
    memset(t7, 0, 8);
    t8 = (t7 + 4U);
    t9 = (t5 + 4U);
    t10 = (t6 + 4U);
    if (*((unsigned int *)t9) != 0)
        goto LAB6;

LAB5:    if (*((unsigned int *)t10) != 0)
        goto LAB6;

LAB9:    if (*((unsigned int *)t5) < *((unsigned int *)t6))
        goto LAB8;

LAB7:    *((unsigned int *)t7) = 1;

LAB8:    t11 = (t7 + 4U);
    t12 = *((unsigned int *)t11);
    t13 = (~(t12));
    t14 = *((unsigned int *)t7);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(35, ng0);

LAB16:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 880);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t7, 0, 8);
    xsi_vlog_unsigned_add(t7, 32, t4, 32, t5, 32);
    t6 = (t0 + 880);
    xsi_vlogvar_generic_wait_assign_value(t6, t7, 2, 0, 0, 32, 0LL);

LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t7) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB8;

LAB10:    xsi_set_current_line(31, ng0);

LAB13:    xsi_set_current_line(32, ng0);
    t17 = ((char*)((ng1)));
    t18 = (t0 + 880);
    xsi_vlogvar_generic_wait_assign_value(t18, t17, 1, 0, 0, 32, 0LL);
    xsi_set_current_line(33, ng0);
    t2 = (t0 + 788);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    memset(t7, 0, 8);
    t5 = (t7 + 4U);
    t6 = (t4 + 4U);
    t12 = *((unsigned int *)t4);
    t13 = (~(t12));
    *((unsigned int *)t7) = t13;
    *((unsigned int *)t5) = 0;
    if (*((unsigned int *)t6) != 0)
        goto LAB15;

LAB14:    t20 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t20 & 1U);
    t21 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t21 & 1U);
    t8 = (t0 + 788);
    xsi_vlogvar_generic_wait_assign_value(t8, t7, 2, 0, 0, 1, 0LL);
    goto LAB12;

LAB15:    t14 = *((unsigned int *)t7);
    t15 = *((unsigned int *)t6);
    *((unsigned int *)t7) = (t14 | t15);
    t16 = *((unsigned int *)t5);
    t19 = *((unsigned int *)t6);
    *((unsigned int *)t5) = (t16 | t19);
    goto LAB14;

}


extern void work_m_00000000000981189543_2850967550_init()
{
	static char *pe[] = {(void *)I26_0,(void *)A30_1};
	xsi_register_didat("work_m_00000000000981189543_2850967550", "isim/_tmp/work/m_00000000000981189543_2850967550.didat");
	xsi_register_executes(pe);
}
