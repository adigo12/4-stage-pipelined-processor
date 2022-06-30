/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/adity/Desktop/Assignment_CompArch/Pipelinedprocessor/test_fixture.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {20, 0};



static void Initial_15_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;

LAB0:    t1 = (t0 + 2368U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(15, ng0);

LAB4:    xsi_set_current_line(17, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(18, ng0);
    t2 = (t0 + 2176);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(19, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    goto LAB1;

}

static void Initial_22_1(char *t0)
{
    char t11[8];
    char *t1;
    char *t2;
    char *t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    int t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 2616U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(22, ng0);

LAB4:    xsi_set_current_line(24, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(25, ng0);
    t2 = (t0 + 2424);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(26, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 4492);
    *((int *)t8) = t7;

LAB6:    t9 = (t0 + 4492);
    if (*((int *)t9) > 0)
        goto LAB7;

LAB8:    xsi_set_current_line(31, ng0);
    xsi_vlog_finish(1);
    goto LAB1;

LAB7:    xsi_set_current_line(27, ng0);

LAB9:    xsi_set_current_line(28, ng0);
    t10 = (t0 + 2424);
    xsi_process_wait(t10, 15000LL);
    *((char **)t1) = &&LAB10;
    goto LAB1;

LAB10:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 1288);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    memset(t11, 0, 8);
    t9 = (t8 + 4);
    t4 = *((unsigned int *)t9);
    t5 = (~(t4));
    t6 = *((unsigned int *)t8);
    t12 = (t6 & t5);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB14;

LAB12:    if (*((unsigned int *)t9) == 0)
        goto LAB11;

LAB13:    t10 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t10) = 1;

LAB14:    t14 = (t11 + 4);
    t15 = (t8 + 4);
    t16 = *((unsigned int *)t8);
    t17 = (~(t16));
    *((unsigned int *)t11) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB16;

LAB15:    t22 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 1288);
    xsi_vlogvar_assign_value(t24, t11, 0, 0, 1);
    t2 = (t0 + 4492);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB6;

LAB11:    *((unsigned int *)t11) = 1;
    goto LAB14;

LAB16:    t18 = *((unsigned int *)t11);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t11) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB15;

}


extern void work_m_00000000000163443182_2809864136_init()
{
	static char *pe[] = {(void *)Initial_15_0,(void *)Initial_22_1};
	xsi_register_didat("work_m_00000000000163443182_2809864136", "isim/test_fixture_isim_beh.exe.sim/work/m_00000000000163443182_2809864136.didat");
	xsi_register_executes(pe);
}
