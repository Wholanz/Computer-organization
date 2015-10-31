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
static const char *ng0 = "C:/Users/vaio/Desktop/p9/multi_cycle/cpu_test.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};



static void I50_0(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
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
    char *t16;

LAB0:    t1 = (t0 + 1808U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(50, ng0);

LAB4:    xsi_set_current_line(50, ng0);

LAB5:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 1724);
    xsi_process_wait(t2, 2000000LL);
    *((char **)t1) = &&LAB6;

LAB1:    return;
LAB6:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 964);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    memset(t3, 0, 8);
    t6 = (t3 + 4U);
    t7 = (t5 + 4U);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    *((unsigned int *)t3) = t9;
    *((unsigned int *)t6) = 0;
    if (*((unsigned int *)t7) != 0)
        goto LAB8;

LAB7:    t14 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t14 & 1U);
    t15 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t15 & 1U);
    t16 = (t0 + 964);
    xsi_vlogvar_assign_value(t16, t3, 0, 0, 1);
    goto LAB4;

LAB8:    t10 = *((unsigned int *)t3);
    t11 = *((unsigned int *)t7);
    *((unsigned int *)t3) = (t10 | t11);
    t12 = *((unsigned int *)t6);
    t13 = *((unsigned int *)t7);
    *((unsigned int *)t6) = (t12 | t13);
    goto LAB7;

LAB9:    goto LAB1;

}

static void I54_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;

LAB0:    t1 = (t0 + 1936U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(54, ng0);

LAB4:    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 964);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1056);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1148);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1240);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1332);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 1852);
    xsi_process_wait(t2, 10000000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1056);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1332);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 1852);
    xsi_process_wait(t2, 10000000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    goto LAB1;

}


extern void work_m_00000000000891913987_2038303166_init()
{
	static char *pe[] = {(void *)I50_0,(void *)I54_1};
	xsi_register_didat("work_m_00000000000891913987_2038303166", "isim/_tmp/work/m_00000000000891913987_2038303166.didat");
	xsi_register_executes(pe);
}
