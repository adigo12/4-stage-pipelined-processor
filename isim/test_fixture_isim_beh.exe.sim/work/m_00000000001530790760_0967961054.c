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
static const char *ng0 = "C:/Users/adity/Desktop/Assignment_CompArch/Pipelinedprocessor/SignExtend.v";
static unsigned int ng1[] = {1U, 0U};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {3U, 0U};
static int ng4[] = {5, 0};
static int ng5[] = {0, 0};



static void Always_8_0(char *t0)
{
    char t4[8];
    char t15[8];
    char t37[8];
    char t38[8];
    char t64[8];
    char t65[8];
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
    char *t14;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t39;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    char *t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t66;
    char *t67;
    char *t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    char *t76;

LAB0:    t1 = (t0 + 2368U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(8, ng0);
    t2 = (t0 + 2688);
    *((int *)t2) = 1;
    t3 = (t0 + 2400);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(9, ng0);

LAB5:    xsi_set_current_line(10, ng0);
    t5 = (t0 + 1048U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t4 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 6);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 6);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 3U);
    t13 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t13 & 3U);
    t14 = ((char*)((ng1)));
    memset(t15, 0, 8);
    t16 = (t4 + 4);
    t17 = (t14 + 4);
    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t14);
    t20 = (t18 ^ t19);
    t21 = *((unsigned int *)t16);
    t22 = *((unsigned int *)t17);
    t23 = (t21 ^ t22);
    t24 = (t20 | t23);
    t25 = *((unsigned int *)t16);
    t26 = *((unsigned int *)t17);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB9;

LAB6:    if (t27 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t15) = 1;

LAB9:    t31 = (t15 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (~(t32));
    t34 = *((unsigned int *)t15);
    t35 = (t34 & t33);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(14, ng0);

LAB14:    xsi_set_current_line(16, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 6);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 6);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 3U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 3U);
    t6 = ((char*)((ng2)));
    memset(t15, 0, 8);
    t7 = (t4 + 4);
    t14 = (t6 + 4);
    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t6);
    t20 = (t18 ^ t19);
    t21 = *((unsigned int *)t7);
    t22 = *((unsigned int *)t14);
    t23 = (t21 ^ t22);
    t24 = (t20 | t23);
    t25 = *((unsigned int *)t7);
    t26 = *((unsigned int *)t14);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB18;

LAB15:    if (t27 != 0)
        goto LAB17;

LAB16:    *((unsigned int *)t15) = 1;

LAB18:    t17 = (t15 + 4);
    t32 = *((unsigned int *)t17);
    t33 = (~(t32));
    t34 = *((unsigned int *)t15);
    t35 = (t34 & t33);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB19;

LAB20:    xsi_set_current_line(20, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 6);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 6);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 3U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 3U);
    t6 = ((char*)((ng3)));
    memset(t15, 0, 8);
    t7 = (t4 + 4);
    t14 = (t6 + 4);
    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t6);
    t20 = (t18 ^ t19);
    t21 = *((unsigned int *)t7);
    t22 = *((unsigned int *)t14);
    t23 = (t21 ^ t22);
    t24 = (t20 | t23);
    t25 = *((unsigned int *)t7);
    t26 = *((unsigned int *)t14);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB25;

LAB22:    if (t27 != 0)
        goto LAB24;

LAB23:    *((unsigned int *)t15) = 1;

LAB25:    t17 = (t15 + 4);
    t32 = *((unsigned int *)t17);
    t33 = (~(t32));
    t34 = *((unsigned int *)t15);
    t35 = (t34 & t33);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB26;

LAB27:
LAB28:
LAB21:
LAB12:    goto LAB2;

LAB8:    t30 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(10, ng0);

LAB13:    xsi_set_current_line(12, ng0);
    t39 = (t0 + 1048U);
    t40 = *((char **)t39);
    memset(t38, 0, 8);
    t39 = (t38 + 4);
    t41 = (t40 + 4);
    t42 = *((unsigned int *)t40);
    t43 = (t42 >> 0);
    *((unsigned int *)t38) = t43;
    t44 = *((unsigned int *)t41);
    t45 = (t44 >> 0);
    *((unsigned int *)t39) = t45;
    t46 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t46 & 7U);
    t47 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t47 & 7U);
    t48 = ((char*)((ng2)));
    xsi_vlogtype_concat(t37, 8, 8, 2U, t48, 5, t38, 3);
    t49 = (t0 + 1448);
    xsi_vlogvar_assign_value(t49, t37, 0, 0, 8);
    goto LAB12;

LAB17:    t16 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB18;

LAB19:    xsi_set_current_line(18, ng0);
    t30 = (t0 + 1048U);
    t31 = *((char **)t30);
    memset(t38, 0, 8);
    t30 = (t38 + 4);
    t39 = (t31 + 4);
    t42 = *((unsigned int *)t31);
    t43 = (t42 >> 0);
    *((unsigned int *)t38) = t43;
    t44 = *((unsigned int *)t39);
    t45 = (t44 >> 0);
    *((unsigned int *)t30) = t45;
    t46 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t46 & 7U);
    t47 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t47 & 7U);
    t40 = ((char*)((ng2)));
    xsi_vlogtype_concat(t37, 8, 8, 2U, t40, 5, t38, 3);
    t41 = (t0 + 1448);
    xsi_vlogvar_assign_value(t41, t37, 0, 0, 8);
    goto LAB21;

LAB24:    t16 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB25;

LAB26:    xsi_set_current_line(21, ng0);
    t30 = (t0 + 1048U);
    t31 = *((char **)t30);
    t30 = (t0 + 1008U);
    t39 = (t30 + 72U);
    t40 = *((char **)t39);
    t41 = ((char*)((ng4)));
    xsi_vlog_generic_get_index_select_value(t37, 32, t31, t40, 2, t41, 32, 1);
    t48 = ((char*)((ng5)));
    memset(t38, 0, 8);
    t49 = (t37 + 4);
    t50 = (t48 + 4);
    t42 = *((unsigned int *)t37);
    t43 = *((unsigned int *)t48);
    t44 = (t42 ^ t43);
    t45 = *((unsigned int *)t49);
    t46 = *((unsigned int *)t50);
    t47 = (t45 ^ t46);
    t51 = (t44 | t47);
    t52 = *((unsigned int *)t49);
    t53 = *((unsigned int *)t50);
    t54 = (t52 | t53);
    t55 = (~(t54));
    t56 = (t51 & t55);
    if (t56 != 0)
        goto LAB32;

LAB29:    if (t54 != 0)
        goto LAB31;

LAB30:    *((unsigned int *)t38) = 1;

LAB32:    t58 = (t38 + 4);
    t59 = *((unsigned int *)t58);
    t60 = (~(t59));
    t61 = *((unsigned int *)t38);
    t62 = (t61 & t60);
    t63 = (t62 != 0);
    if (t63 > 0)
        goto LAB33;

LAB34:    xsi_set_current_line(24, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t15, 0, 8);
    t2 = (t15 + 4);
    t5 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 0);
    *((unsigned int *)t15) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 0);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t12 & 7U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 7U);
    t6 = ((char*)((ng3)));
    xsi_vlogtype_concat(t4, 8, 5, 2U, t6, 2, t15, 3);
    t7 = (t0 + 1448);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 8);

LAB35:    goto LAB28;

LAB31:    t57 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t57) = 1;
    goto LAB32;

LAB33:    xsi_set_current_line(22, ng0);
    t66 = (t0 + 1048U);
    t67 = *((char **)t66);
    memset(t65, 0, 8);
    t66 = (t65 + 4);
    t68 = (t67 + 4);
    t69 = *((unsigned int *)t67);
    t70 = (t69 >> 0);
    *((unsigned int *)t65) = t70;
    t71 = *((unsigned int *)t68);
    t72 = (t71 >> 0);
    *((unsigned int *)t66) = t72;
    t73 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t73 & 7U);
    t74 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t74 & 7U);
    t75 = ((char*)((ng2)));
    xsi_vlogtype_concat(t64, 8, 5, 2U, t75, 2, t65, 3);
    t76 = (t0 + 1448);
    xsi_vlogvar_assign_value(t76, t64, 0, 0, 8);
    goto LAB35;

}


extern void work_m_00000000001530790760_0967961054_init()
{
	static char *pe[] = {(void *)Always_8_0};
	xsi_register_didat("work_m_00000000001530790760_0967961054", "isim/test_fixture_isim_beh.exe.sim/work/m_00000000001530790760_0967961054.didat");
	xsi_register_executes(pe);
}
