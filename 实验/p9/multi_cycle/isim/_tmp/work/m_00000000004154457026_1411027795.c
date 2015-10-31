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
static const char *ng0 = "C:/Users/vaio/Desktop/p9/multi_cycle/display.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {14U, 0U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {13U, 0U};
static unsigned int ng5[] = {2U, 0U};
static unsigned int ng6[] = {11U, 0U};
static unsigned int ng7[] = {3U, 0U};
static unsigned int ng8[] = {7U, 0U};
static unsigned int ng9[] = {192U, 0U};
static unsigned int ng10[] = {249U, 0U};
static unsigned int ng11[] = {164U, 0U};
static unsigned int ng12[] = {176U, 0U};
static unsigned int ng13[] = {4U, 0U};
static unsigned int ng14[] = {153U, 0U};
static unsigned int ng15[] = {5U, 0U};
static unsigned int ng16[] = {146U, 0U};
static unsigned int ng17[] = {6U, 0U};
static unsigned int ng18[] = {130U, 0U};
static unsigned int ng19[] = {248U, 0U};
static unsigned int ng20[] = {8U, 0U};
static unsigned int ng21[] = {128U, 0U};
static unsigned int ng22[] = {9U, 0U};
static unsigned int ng23[] = {144U, 0U};
static unsigned int ng24[] = {10U, 0U};
static unsigned int ng25[] = {136U, 0U};
static unsigned int ng26[] = {131U, 0U};
static unsigned int ng27[] = {12U, 0U};
static unsigned int ng28[] = {198U, 0U};
static unsigned int ng29[] = {161U, 0U};
static unsigned int ng30[] = {134U, 0U};
static unsigned int ng31[] = {15U, 0U};
static unsigned int ng32[] = {142U, 0U};
static int ng33[] = {1, 0};



static void A30_0(char *t0)
{
    char t3[8];
    char t19[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    int t16;
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 1628U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 1808);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(31, ng0);

LAB5:    xsi_set_current_line(32, ng0);
    t4 = (t0 + 1152);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t3 + 4U);
    t8 = (t6 + 4U);
    t9 = *((unsigned int *)t6);
    t10 = (t9 >> 14);
    *((unsigned int *)t3) = t10;
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 14);
    *((unsigned int *)t7) = t12;
    t13 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t13 & 3U);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 & 3U);

LAB6:    t15 = ((char*)((ng1)));
    t16 = xsi_vlog_unsigned_case_compare(t3, 2, t15, 2);
    if (t16 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t16 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t16 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t16 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t16 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng7)));
    t16 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t16 == 1)
        goto LAB13;

LAB14:
LAB15:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 1060);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);

LAB20:    t6 = ((char*)((ng1)));
    t16 = xsi_vlog_unsigned_case_compare(t5, 4, t6, 4);
    if (t16 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng3)));
    t16 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t16 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng5)));
    t16 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t16 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng7)));
    t16 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t16 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng13)));
    t16 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t16 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng15)));
    t16 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t16 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng17)));
    t16 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t16 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng8)));
    t16 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t16 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng20)));
    t16 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t16 == 1)
        goto LAB37;

LAB38:    t2 = ((char*)((ng22)));
    t16 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t16 == 1)
        goto LAB39;

LAB40:    t2 = ((char*)((ng24)));
    t16 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t16 == 1)
        goto LAB41;

LAB42:    t2 = ((char*)((ng6)));
    t16 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t16 == 1)
        goto LAB43;

LAB44:    t2 = ((char*)((ng27)));
    t16 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t16 == 1)
        goto LAB45;

LAB46:    t2 = ((char*)((ng4)));
    t16 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t16 == 1)
        goto LAB47;

LAB48:    t2 = ((char*)((ng2)));
    t16 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t16 == 1)
        goto LAB49;

LAB50:    t2 = ((char*)((ng31)));
    t16 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t16 == 1)
        goto LAB51;

LAB52:
LAB54:
LAB53:    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 968);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 2, 0, 0, 8, 0LL);

LAB55:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 1152);
    t4 = (t2 + 32U);
    t6 = *((char **)t4);
    t7 = ((char*)((ng33)));
    memset(t19, 0, 8);
    xsi_vlog_unsigned_add(t19, 32, t6, 16, t7, 32);
    t8 = (t0 + 1152);
    xsi_vlogvar_generic_wait_assign_value(t8, t19, 2, 0, 0, 16, 0LL);
    goto LAB2;

LAB7:    xsi_set_current_line(33, ng0);

LAB16:    xsi_set_current_line(34, ng0);
    t17 = ((char*)((ng2)));
    t18 = (t0 + 876);
    xsi_vlogvar_generic_wait_assign_value(t18, t17, 2, 0, 0, 4, 0LL);
    xsi_set_current_line(35, ng0);
    t2 = (t0 + 652U);
    t4 = *((char **)t2);
    memset(t19, 0, 8);
    t2 = (t19 + 4U);
    t5 = (t4 + 4U);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 0);
    *((unsigned int *)t19) = t10;
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 0);
    *((unsigned int *)t2) = t12;
    t13 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t13 & 15U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 15U);
    t6 = (t0 + 1060);
    xsi_vlogvar_generic_wait_assign_value(t6, t19, 2, 0, 0, 4, 0LL);
    goto LAB15;

LAB9:    xsi_set_current_line(37, ng0);

LAB17:    xsi_set_current_line(38, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t0 + 876);
    xsi_vlogvar_generic_wait_assign_value(t5, t4, 2, 0, 0, 4, 0LL);
    xsi_set_current_line(39, ng0);
    t2 = (t0 + 652U);
    t4 = *((char **)t2);
    memset(t19, 0, 8);
    t2 = (t19 + 4U);
    t5 = (t4 + 4U);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 4);
    *((unsigned int *)t19) = t10;
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 4);
    *((unsigned int *)t2) = t12;
    t13 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t13 & 15U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 15U);
    t6 = (t0 + 1060);
    xsi_vlogvar_generic_wait_assign_value(t6, t19, 2, 0, 0, 4, 0LL);
    goto LAB15;

LAB11:    xsi_set_current_line(41, ng0);

LAB18:    xsi_set_current_line(42, ng0);
    t4 = ((char*)((ng6)));
    t5 = (t0 + 876);
    xsi_vlogvar_generic_wait_assign_value(t5, t4, 2, 0, 0, 4, 0LL);
    xsi_set_current_line(43, ng0);
    t2 = (t0 + 652U);
    t4 = *((char **)t2);
    memset(t19, 0, 8);
    t2 = (t19 + 4U);
    t5 = (t4 + 4U);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 8);
    *((unsigned int *)t19) = t10;
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 8);
    *((unsigned int *)t2) = t12;
    t13 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t13 & 15U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 15U);
    t6 = (t0 + 1060);
    xsi_vlogvar_generic_wait_assign_value(t6, t19, 2, 0, 0, 4, 0LL);
    goto LAB15;

LAB13:    xsi_set_current_line(45, ng0);

LAB19:    xsi_set_current_line(46, ng0);
    t4 = ((char*)((ng8)));
    t5 = (t0 + 876);
    xsi_vlogvar_generic_wait_assign_value(t5, t4, 2, 0, 0, 4, 0LL);
    xsi_set_current_line(47, ng0);
    t2 = (t0 + 652U);
    t4 = *((char **)t2);
    memset(t19, 0, 8);
    t2 = (t19 + 4U);
    t5 = (t4 + 4U);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 12);
    *((unsigned int *)t19) = t10;
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 12);
    *((unsigned int *)t2) = t12;
    t13 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t13 & 15U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 15U);
    t6 = (t0 + 1060);
    xsi_vlogvar_generic_wait_assign_value(t6, t19, 2, 0, 0, 4, 0LL);
    goto LAB15;

LAB21:    xsi_set_current_line(51, ng0);
    t7 = ((char*)((ng9)));
    t8 = (t0 + 968);
    xsi_vlogvar_generic_wait_assign_value(t8, t7, 2, 0, 0, 8, 0LL);
    goto LAB55;

LAB23:    xsi_set_current_line(52, ng0);
    t4 = ((char*)((ng10)));
    t6 = (t0 + 968);
    xsi_vlogvar_generic_wait_assign_value(t6, t4, 2, 0, 0, 8, 0LL);
    goto LAB55;

LAB25:    xsi_set_current_line(53, ng0);
    t4 = ((char*)((ng11)));
    t6 = (t0 + 968);
    xsi_vlogvar_generic_wait_assign_value(t6, t4, 2, 0, 0, 8, 0LL);
    goto LAB55;

LAB27:    xsi_set_current_line(54, ng0);
    t4 = ((char*)((ng12)));
    t6 = (t0 + 968);
    xsi_vlogvar_generic_wait_assign_value(t6, t4, 2, 0, 0, 8, 0LL);
    goto LAB55;

LAB29:    xsi_set_current_line(55, ng0);
    t4 = ((char*)((ng14)));
    t6 = (t0 + 968);
    xsi_vlogvar_generic_wait_assign_value(t6, t4, 2, 0, 0, 8, 0LL);
    goto LAB55;

LAB31:    xsi_set_current_line(56, ng0);
    t4 = ((char*)((ng16)));
    t6 = (t0 + 968);
    xsi_vlogvar_generic_wait_assign_value(t6, t4, 2, 0, 0, 8, 0LL);
    goto LAB55;

LAB33:    xsi_set_current_line(57, ng0);
    t4 = ((char*)((ng18)));
    t6 = (t0 + 968);
    xsi_vlogvar_generic_wait_assign_value(t6, t4, 2, 0, 0, 8, 0LL);
    goto LAB55;

LAB35:    xsi_set_current_line(58, ng0);
    t4 = ((char*)((ng19)));
    t6 = (t0 + 968);
    xsi_vlogvar_generic_wait_assign_value(t6, t4, 2, 0, 0, 8, 0LL);
    goto LAB55;

LAB37:    xsi_set_current_line(59, ng0);
    t4 = ((char*)((ng21)));
    t6 = (t0 + 968);
    xsi_vlogvar_generic_wait_assign_value(t6, t4, 2, 0, 0, 8, 0LL);
    goto LAB55;

LAB39:    xsi_set_current_line(60, ng0);
    t4 = ((char*)((ng23)));
    t6 = (t0 + 968);
    xsi_vlogvar_generic_wait_assign_value(t6, t4, 2, 0, 0, 8, 0LL);
    goto LAB55;

LAB41:    xsi_set_current_line(61, ng0);
    t4 = ((char*)((ng25)));
    t6 = (t0 + 968);
    xsi_vlogvar_generic_wait_assign_value(t6, t4, 2, 0, 0, 8, 0LL);
    goto LAB55;

LAB43:    xsi_set_current_line(62, ng0);
    t4 = ((char*)((ng26)));
    t6 = (t0 + 968);
    xsi_vlogvar_generic_wait_assign_value(t6, t4, 2, 0, 0, 8, 0LL);
    goto LAB55;

LAB45:    xsi_set_current_line(63, ng0);
    t4 = ((char*)((ng28)));
    t6 = (t0 + 968);
    xsi_vlogvar_generic_wait_assign_value(t6, t4, 2, 0, 0, 8, 0LL);
    goto LAB55;

LAB47:    xsi_set_current_line(64, ng0);
    t4 = ((char*)((ng29)));
    t6 = (t0 + 968);
    xsi_vlogvar_generic_wait_assign_value(t6, t4, 2, 0, 0, 8, 0LL);
    goto LAB55;

LAB49:    xsi_set_current_line(65, ng0);
    t4 = ((char*)((ng30)));
    t6 = (t0 + 968);
    xsi_vlogvar_generic_wait_assign_value(t6, t4, 2, 0, 0, 8, 0LL);
    goto LAB55;

LAB51:    xsi_set_current_line(66, ng0);
    t4 = ((char*)((ng32)));
    t6 = (t0 + 968);
    xsi_vlogvar_generic_wait_assign_value(t6, t4, 2, 0, 0, 8, 0LL);
    goto LAB55;

}


extern void work_m_00000000004154457026_1411027795_init()
{
	static char *pe[] = {(void *)A30_0};
	xsi_register_didat("work_m_00000000004154457026_1411027795", "isim/_tmp/work/m_00000000004154457026_1411027795.didat");
	xsi_register_executes(pe);
}
