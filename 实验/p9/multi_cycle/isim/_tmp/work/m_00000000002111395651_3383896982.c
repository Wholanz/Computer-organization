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
static const char *ng0 = "C:/Users/vaio/Desktop/p9/multi_cycle/pc.v";
static unsigned int ng1[] = {4294967295U, 0U};
static int ng2[] = {0, 0};



static void I29_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(29, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1140);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB1:    return;
}

static void C30_1(char *t0)
{
    char t3[8];
    char t4[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;

LAB0:    t1 = (t0 + 1744U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 740U);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4U);
    t6 = (t5 + 4U);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t6) != 0)
        goto LAB6;

LAB7:    t12 = (t4 + 4U);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t12);
    t15 = (t13 || t14);
    if (t15 > 0)
        goto LAB8;

LAB9:    t17 = *((unsigned int *)t4);
    t18 = (~(t17));
    t19 = *((unsigned int *)t12);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t23, 8);

LAB16:    t24 = (t0 + 2104);
    t25 = (t24 + 32U);
    t26 = *((char **)t25);
    t27 = (t26 + 40U);
    t28 = *((char **)t27);
    memcpy(t28, t3, 8);
    xsi_driver_vfirst_trans(t24, 0, 31);
    t29 = (t0 + 2052);
    *((int *)t29) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    *((unsigned int *)t4) = 1;
    *((unsigned int *)t2) = 1;
    goto LAB7;

LAB8:    t16 = ((char*)((ng2)));
    goto LAB9;

LAB10:    t21 = (t0 + 1140);
    t22 = (t21 + 32U);
    t23 = *((char **)t22);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 32, t16, 32, t23, 32);
    goto LAB16;

LAB14:    memcpy(t3, t16, 8);
    goto LAB16;

}

static void A32_2(char *t0)
{
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

LAB0:    t1 = (t0 + 1872U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 2060);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(33, ng0);
    t3 = (t0 + 740U);
    t4 = *((char **)t3);
    t3 = (t4 + 4U);
    t5 = *((unsigned int *)t3);
    t6 = (~(t5));
    t7 = *((unsigned int *)t4);
    t8 = (t7 & t6);
    t9 = (t8 != 0);
    if (t9 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 564U);
    t3 = *((char **)t2);
    t2 = (t3 + 4U);
    t5 = *((unsigned int *)t2);
    t6 = (~(t5));
    t7 = *((unsigned int *)t3);
    t8 = (t7 & t6);
    t9 = (t8 != 0);
    if (t9 > 0)
        goto LAB8;

LAB9:
LAB10:
LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(33, ng0);
    t10 = ((char*)((ng1)));
    t11 = (t0 + 1140);
    xsi_vlogvar_generic_wait_assign_value(t11, t10, 2, 0, 0, 32, 0LL);
    goto LAB7;

LAB8:    xsi_set_current_line(35, ng0);
    t4 = (t0 + 828U);
    t10 = *((char **)t4);
    t4 = (t0 + 1140);
    xsi_vlogvar_generic_wait_assign_value(t4, t10, 2, 0, 0, 32, 0LL);
    goto LAB10;

}


extern void work_m_00000000002111395651_3383896982_init()
{
	static char *pe[] = {(void *)I29_0,(void *)C30_1,(void *)A32_2};
	xsi_register_didat("work_m_00000000002111395651_3383896982", "isim/_tmp/work/m_00000000002111395651_3383896982.didat");
	xsi_register_executes(pe);
}
