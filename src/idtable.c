/* UNAME:XNKACTR */
#include <algol68/Asupport.h>

A_PROCEDURE(A68_INT *,A68t31,(A68_INT *,A68_VC ),(A68_INT *,A68_VC ,void *));
typedef struct A68t31  A68_31 ;    /* PROC(REF INT,MODE26) REF INT */

A_PROCEDURE(A68_VOID ,A68t32,(A68_VC ,A68_INT ,A68_VC *),(A68_VC ,A68_INT ,A68_VC *,void *));
typedef struct A68t32  A68_32 ;    /* PROC(REF MODE26,INT) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t33,(A68_VC ,A68_CHAR ,A68_VC *),(A68_VC ,A68_CHAR ,A68_VC *,void *));
typedef struct A68t33  A68_33 ;    /* PROC(REF MODE26,CHAR) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t34,(A68_VC ,A68_CHAR ,A68_VC *),(A68_VC ,A68_CHAR ,A68_VC *,void *));
typedef struct A68t34  A68_34 ;    /* PROC(MODE26,CHAR) MODE26 */
struct A68t36 ;

A_PROCEDURE(A68_VOID ,A68t35,(struct A68t36 ,A68_VC *),(struct A68t36 ,A68_VC *,void *));
typedef struct A68t35  A68_35 ;    /* PROC(MODE36) REF MODE26 */
A_VECTOR(A68_VC ,A68t36);
typedef struct A68t36  A68_36 ;    /* VECTOR [] MODE26 */

A_PROCEDURE(A68_INT ,A68t37,(A68_CHAR ,A68_VC ),(A68_CHAR ,A68_VC ,void *));
typedef struct A68t37  A68_37 ;    /* PROC(CHAR,MODE26) INT */

A_PROCEDURE(A68_VOID ,A68t38,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t38  A68_38 ;    /* PROC(MODE26) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t39,(A68_VC ,A68_CHAR ),(A68_VC ,A68_CHAR ,void *));
typedef struct A68t39  A68_39 ;    /* PROC(REF MODE26,CHAR) VOID */
A_ISTRUCT(A68_CHAR ,4,A68t40);
typedef struct A68t40  A68_40 ;    /* STRUCT 4 CHAR */

A_PROCEDURE(struct A68t40 ,A68t41,(A68_INT ),(A68_INT ,void *));
typedef struct A68t41  A68_41 ;    /* PROC(INT) MODE40 */

A_PROCEDURE(A68_INT ,A68t42,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t42  A68_42 ;    /* PROC(INT,INT) INT */

A_PROCEDURE(A68_VOID ,A68t43,(A68_CHAR ,A68_VC ,A68_VC *),(A68_CHAR ,A68_VC ,A68_VC *,void *));
typedef struct A68t43  A68_43 ;    /* PROC(CHAR,REF MODE26) REF MODE26 */

A_PROCEDURE(A68_INT ,A68t44,(A68_VC ),(A68_VC ,void *));
typedef struct A68t44  A68_44 ;    /* PROC(MODE26) INT */

A_PROCEDURE(A68_BITS ,A68t45,(A68_BITS ,A68_BITS ),(A68_BITS ,A68_BITS ,void *));
typedef struct A68t45  A68_45 ;    /* PROC(BITS,BITS) BITS */

A_PROCEDURE(A68_LBITS ,A68t46,(A68_LBITS ,A68_LBITS ),(A68_LBITS ,A68_LBITS ,void *));
typedef struct A68t46  A68_46 ;    /* PROC(LONG BITS,LONG BITS) LONG BITS */

A_PROCEDURE(A68_BITS *,A68t47,(A68_BITS *,A68_BITS ),(A68_BITS *,A68_BITS ,void *));
typedef struct A68t47  A68_47 ;    /* PROC(REF BITS,BITS) REF BITS */

A_PROCEDURE(A68_VOID ,A68t48,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t48  A68_48 ;    /* PROC(INT) MODE26 */

A_PROCEDURE(A68_VOID ,A68t49,(A68_INT ,A68_INT ,A68_VC *),(A68_INT ,A68_INT ,A68_VC *,void *));
typedef struct A68t49  A68_49 ;    /* PROC(INT,INT) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t50,(A68_LINT ,A68_INT ,A68_VC *),(A68_LINT ,A68_INT ,A68_VC *,void *));
typedef struct A68t50  A68_50 ;    /* PROC(LONG INT,INT) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t51,(A68_CHAR ,A68_INT *,A68_VC ),(A68_CHAR ,A68_INT *,A68_VC ,void *));
typedef struct A68t51  A68_51 ;    /* PROC(CHAR,REF INT,MODE26) BOOL */

A_PROCEDURE(A68_VOID ,A68t52,(A68_LBITS ,A68_INT ,A68_VC *),(A68_LBITS ,A68_INT ,A68_VC *,void *));
typedef struct A68t52  A68_52 ;    /* PROC(LONG BITS,INT) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t53,(A68_INT *,A68_VC ),(A68_INT *,A68_VC ,void *));
typedef struct A68t53  A68_53 ;    /* PROC(REF INT,MODE26) BOOL */

A_PROCEDURE(A68_VOID ,A68t54,(A68_BOOL ,A68_VC *),(A68_BOOL ,A68_VC *,void *));
typedef struct A68t54  A68_54 ;    /* PROC(BOOL) MODE26 */
A_ISTRUCT(A68_CHAR ,7,A68t56);
typedef struct A68t56  A68_56 ;    /* STRUCT 7 CHAR */
struct A68t55{
struct A68t56  Name;
A_PAD_ISTRUCT(A68_56 ,PAD_1)
A68_BOOL  Set;
A_PAD_BOOL(PAD_2)
};
typedef struct A68t55  A68_55 ;    /* STRUCT(MODE56,BOOL)  */
struct A68t57{
A68_INT  Labno;
A_PAD_INT(PAD_3)
};
typedef struct A68t57  A68_57 ;    /* STRUCT(INT)  */

A_PROCEDURE(A68_VOID ,A68t58,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t58  A68_58 ;    /* PROC(MODE26) MODE26 */

A_PROCEDURE(A68_VOID ,A68t59,(A68_VC ,A68_BOOL ),(A68_VC ,A68_BOOL ,void *));
typedef struct A68t59  A68_59 ;    /* PROC(MODE26,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t60,(void),(void *));
typedef struct A68t60  A68_60 ;    /* PROC VOID */

A_PROCEDURE(A68_VOID ,A68t61,(A68_INT ),(A68_INT ,void *));
typedef struct A68t61  A68_61 ;    /* PROC(INT) VOID */

A_PROCEDURE(A68_VOID ,A68t62,(A68_VC ,A68_INT ),(A68_VC ,A68_INT ,void *));
typedef struct A68t62  A68_62 ;    /* PROC(MODE26,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t63,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t63  A68_63 ;    /* PROC(INT) REF MODE26 */
struct A68t65 ;

A_PROCEDURE(A68_VOID ,A68t64,(A68_INT ,struct A68t65 ),(A68_INT ,struct A68t65 ,void *));
typedef struct A68t64  A68_64 ;    /* PROC(INT,MODE65) VOID */
A_ROW(A68_VC ,A68t65,1);
typedef struct A68t65  A68_65 ;    /* [] MODE26 */

A_PROCEDURE(A68_BITS ,A68t66,(void),(void *));
typedef struct A68t66  A68_66 ;    /* PROC BITS */
struct A68t67{
A68_INT  Cfile;
A_PAD_INT(PAD_4)
};
typedef struct A68t67  A68_67 ;    /* STRUCT(INT)  */
struct A68t68{
A68_INT  Seedfile;
A_PAD_INT(PAD_5)
};
typedef struct A68t68  A68_68 ;    /* STRUCT(INT)  */
struct A68t69 { A68_INT mode; union {
struct A68t67  mode1;
struct A68t68  mode2;
struct A68t56  mode3;
} data; };
typedef struct A68t69  A68_69 ;    /* UNION(MODE67,MODE68,MODE56,VOID)  */

A_PROCEDURE(A68_VOID ,A68t70,(A68_VC ),(A68_VC ,void *));
typedef struct A68t70  A68_70 ;    /* PROC(MODE26) VOID */
struct A68t71{
A68_VC  Version;
A68_LINT  Translationtime;
A_PAD_LINT(PAD_6)
A68_VC  Sourcefile;
struct A68t56  Nameseed;
A_PAD_ISTRUCT(A68_56 ,PAD_7)
struct A68t69  Nameseedorigin;
struct A68t72 * Used_modules;
A68_VC  Commandline;
struct A68t73 * Environment;
};
typedef struct A68t71  A68_71 ;    /* STRUCT(REF MODE26,LONG INT,REF MODE26,MODE56,MODE69,REF MODE72,REF MODE26,REF MODE73)  */
struct A68t72{
A68_VC  Modinfo_file;
struct A68t72 * Next;
};
typedef struct A68t72  A68_72 ;    /* STRUCT(REF MODE26,REF MODE72)  */
struct A68t73{
A68_VC  Env_name;
A68_VC  Env_value;
struct A68t73 * Next;
};
typedef struct A68t73  A68_73 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE73)  */
struct A68t75 ;
struct A68t76 ;

A_PROCEDURE(struct A68t75 *,A68t74,(A68_VC ,struct A68t76 *,A68_VC *),(A68_VC ,struct A68t76 *,A68_VC *,void *));
typedef struct A68t74  A68_74 ;    /* PROC(MODE26,REF MODE76,REF REF MODE26) REF MODE75 */
struct A68t75{
A68_VC  Name;
A68_BITS * Stdiofile;
};
typedef struct A68t75  A68_75 ;    /* STRUCT(REF MODE26,REF BITS)  */
struct A68t76{
A68_VC  Dir;
struct A68t76 * Next;
};
typedef struct A68t76  A68_76 ;    /* STRUCT(REF MODE26,REF MODE76)  */
struct A68t77{
A68_INT  Level;
A_PAD_INT(PAD_8)
A68_INT  Block;
A_PAD_INT(PAD_9)
};
typedef struct A68t77  A68_77 ;    /* STRUCT(INT,INT)  */
struct A68t78{
A68_INT  Decno;
A_PAD_INT(PAD_10)
struct A68t78 * Rest;
};
typedef struct A68t78  A68_78 ;    /* STRUCT(INT,REF MODE78)  */
struct A68t80{
A68_INT  Level;
A_PAD_INT(PAD_11)
A68_INT  Block;
A_PAD_INT(PAD_12)
A68_INT  Rdenno;
A_PAD_INT(PAD_13)
struct A68t78 * Nonlocals;
};
typedef struct A68t80  A68_80 ;    /* STRUCT(INT,INT,INT,REF MODE78)  */
struct A68t79{
struct A68t80  Env;
struct A68t79 * Rest;
};
typedef struct A68t79  A68_79 ;    /* STRUCT(MODE80,REF MODE79)  */
A_ISTRUCT(A68_CHAR ,32,A68t81);
typedef struct A68t81  A68_81 ;    /* STRUCT 32 CHAR */
struct A68t82{
struct A68t56  Prefix;
A_PAD_ISTRUCT(A68_56 ,PAD_14)
A68_BOOL  Optimised;
A_PAD_BOOL(PAD_15)
A68_BOOL  Iddec;
A_PAD_BOOL(PAD_16)
A68_BOOL  Globalproc;
A_PAD_BOOL(PAD_17)
A68_BOOL  Keptgenproc;
A_PAD_BOOL(PAD_18)
A68_BOOL  Forceuse;
A_PAD_BOOL(PAD_19)
A68_VC  Definition;
A68_VC  Rhs;
};
typedef struct A68t82  A68_82 ;    /* STRUCT(MODE56,BOOL,BOOL,BOOL,BOOL,BOOL,REF MODE26,REF MODE26)  */
A_VECTOR(struct A68t85 ,A68t84);
typedef struct A68t84  A68_84 ;    /* VECTOR [] MODE85 */
A_VECTOR(struct A68t91 ,A68t90);
typedef struct A68t90  A68_90 ;    /* VECTOR [] MODE91 */
struct A68t91{
struct A68t81  N;
A_PAD_ISTRUCT(A68_81 ,PAD_20)
struct A68t81  F;
A_PAD_ISTRUCT(A68_81 ,PAD_21)
A68_INT  Level;
A_PAD_INT(PAD_22)
};
typedef struct A68t91  A68_91 ;    /* STRUCT(MODE81,MODE81,INT)  */
struct A68t89 { A68_INT mode; union {
A68_VC  mode1;
struct A68t90  mode2;
} data; };
typedef struct A68t89  A68_89 ;    /* UNION(REF MODE26,REF MODE90)  */
struct A68t86{
struct A68t81  F;
A_PAD_ISTRUCT(A68_81 ,PAD_23)
A68_INT  No;
A_PAD_INT(PAD_24)
A68_INT  Nl;
A_PAD_INT(PAD_25)
A68_INT  Ng;
A_PAD_INT(PAD_26)
struct A68t89  U;
};
typedef struct A68t86  A68_86 ;    /* STRUCT(MODE81,INT,INT,INT,MODE89)  */
A_VECTOR(struct A68t82 ,A68t87);
typedef struct A68t87  A68_87 ;    /* VECTOR [] MODE82 */
A_VECTOR(struct A68t56 ,A68t88);
typedef struct A68t88  A68_88 ;    /* VECTOR [] MODE56 */
struct A68t85{
struct A68t86  Xs;
struct A68t56  Ys;
A_PAD_ISTRUCT(A68_56 ,PAD_27)
A68_LINT  Timeoflastchange;
A_PAD_LINT(PAD_28)
struct A68t87  Keptinfo;
struct A68t88  Cnames;
};
typedef struct A68t85  A68_85 ;    /* STRUCT(MODE86,MODE56,LONG INT,REF MODE87,REF MODE88)  */
struct A68t83{
struct A68t56  Uname;
A_PAD_ISTRUCT(A68_56 ,PAD_29)
struct A68t56  Lname;
A_PAD_ISTRUCT(A68_56 ,PAD_30)
struct A68t56  Gname;
A_PAD_ISTRUCT(A68_56 ,PAD_31)
struct A68t84  Specs;
};
typedef struct A68t83  A68_83 ;    /* STRUCT(MODE56,MODE56,MODE56,REF MODE84)  */
struct A68t92{
struct A68t93 * Value;
struct A68t55 * End;
A68_INT  Type;
A_PAD_INT(PAD_32)
};
typedef struct A68t92  A68_92 ;    /* STRUCT(REF MODE93,REF MODE55,INT)  */
struct A68t95{
A68_INT  Rdenno;
A_PAD_INT(PAD_33)
};
typedef struct A68t95  A68_95 ;    /* STRUCT(INT)  */
struct A68t96{
A68_INT  Idno;
A_PAD_INT(PAD_34)
};
typedef struct A68t96  A68_96 ;    /* STRUCT(INT)  */
struct A68t97{
struct A68t56  Name;
A_PAD_ISTRUCT(A68_56 ,PAD_35)
A68_INT  Mode;
A_PAD_INT(PAD_36)
};
typedef struct A68t97  A68_97 ;    /* STRUCT(MODE56,INT)  */
struct A68t98{
A68_INT  Nse;
A_PAD_INT(PAD_37)
};
typedef struct A68t98  A68_98 ;    /* STRUCT(INT)  */
struct A68t99{
A68_INT  Fn;
A_PAD_INT(PAD_38)
A68_INT  Param;
A_PAD_INT(PAD_39)
struct A68t100 * Operands;
};
typedef struct A68t99  A68_99 ;    /* STRUCT(INT,INT,REF MODE100)  */
struct A68t94 { A68_INT mode; union {
A68_LBITS  mode1;
struct A68t95  mode2;
struct A68t96  mode4;
struct A68t97  mode5;
A68_VC  mode6;
struct A68t57  mode7;
struct A68t98  mode8;
struct A68t99  mode9;
} data; };
typedef struct A68t94  A68_94 ;    /* UNION(LONG BITS,MODE95,VOID,MODE96,MODE97,MODE26,MODE57,MODE98,MODE99)  */
struct A68t93{
A68_INT  Mode;
A_PAD_INT(PAD_40)
A68_BITS  Info;
A_PAD_BITS(PAD_41)
struct A68t94  Extra;
};
typedef struct A68t93  A68_93 ;    /* STRUCT(INT,BITS,MODE94)  */
struct A68t100{
struct A68t93  Value;
struct A68t100 * Rest;
};
typedef struct A68t100  A68_100 ;    /* STRUCT(MODE93,REF MODE100)  */

A_PROCEDURE(A68_BOOL ,A68t101,(A68_INT ,A68_VC ),(A68_INT ,A68_VC ,void *));
typedef struct A68t101  A68_101 ;    /* PROC(INT,MODE26) BOOL */

A_PROCEDURE(A68_VOID ,A68t102,(struct A68t60 ),(struct A68t60 ,void *));
typedef struct A68t102  A68_102 ;    /* PROC(MODE60) VOID */

A_PROCEDURE(A68_VOID ,A68t103,(struct A68t70 ),(struct A68t70 ,void *));
typedef struct A68t103  A68_103 ;    /* PROC(MODE70) VOID */

A_PROCEDURE(A68_VOID ,A68t104,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t104  A68_104 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,62,A68t105);
typedef struct A68t105  A68_105 ;    /* STRUCT 62 CHAR */
struct A68t106{
A68_INT  Mode;
A_PAD_INT(PAD_42)
A68_INT  Cvariabletype;
A_PAD_INT(PAD_43)
struct A68t77  Environ;
A68_VC  Name;
A68_VC  C_name;
struct A68t56  Prefix;
A_PAD_ISTRUCT(A68_56 ,PAD_44)
A68_BITS  Flags;
A_PAD_BITS(PAD_45)
A68_VC  Definition;
A68_VC  Rhs;
};
typedef struct A68t106  A68_106 ;    /* STRUCT(INT,INT,MODE77,REF MODE26,REF MODE26,MODE56,BITS,REF MODE26,REF MODE26)  */
struct A68t107{
A68_INT  Mode;
A_PAD_INT(PAD_46)
A68_INT  Resultmode;
A_PAD_INT(PAD_47)
A68_INT  Declevel;
A_PAD_INT(PAD_48)
struct A68t77  Environ;
A68_VC  Name;
struct A68t56  Prefix;
A_PAD_ISTRUCT(A68_56 ,PAD_49)
struct A68t56  Fnprefix;
A_PAD_ISTRUCT(A68_56 ,PAD_50)
struct A68t56  Envprefix;
A_PAD_ISTRUCT(A68_56 ,PAD_51)
A68_BITS  Flags;
A_PAD_BITS(PAD_52)
};
typedef struct A68t107  A68_107 ;    /* STRUCT(INT,INT,INT,MODE77,REF MODE26,MODE56,MODE56,MODE56,BITS)  */
struct A68t108{
struct A68t55  Label;
struct A68t77  Environ;
A68_VC  Name;
struct A68t56  Prefix;
A_PAD_ISTRUCT(A68_56 ,PAD_53)
A68_BITS  Flags;
A_PAD_BITS(PAD_54)
A68_INT  Alias;
A_PAD_INT(PAD_55)
};
typedef struct A68t108  A68_108 ;    /* STRUCT(MODE55,MODE77,REF MODE26,MODE56,BITS,INT)  */
A_ROW(struct A68t106 ,A68t109,1);
typedef struct A68t109  A68_109 ;    /* [] MODE106 */
A_ROW(struct A68t107 ,A68t110,1);
typedef struct A68t110  A68_110 ;    /* [] MODE107 */
A_ROW(struct A68t108 ,A68t111,1);
typedef struct A68t111  A68_111 ;    /* [] MODE108 */

A_PROCEDURE(struct A68t106 *,A68t112,(A68_INT ),(A68_INT ,void *));
typedef struct A68t112  A68_112 ;    /* PROC(INT) REF MODE106 */
A_ISTRUCT(A68_CHAR ,27,A68t113);
typedef struct A68t113  A68_113 ;    /* STRUCT 27 CHAR */
A_ISTRUCT(A68_CHAR ,11,A68t114);
typedef struct A68t114  A68_114 ;    /* STRUCT 11 CHAR */
A_ISTRUCT(A68_CHAR ,9,A68t115);
typedef struct A68t115  A68_115 ;    /* STRUCT 9 CHAR */
A_ISTRUCT(A68_CHAR ,1,A68t116);
typedef struct A68t116  A68_116 ;    /* STRUCT 0 CHAR */

A_PROCEDURE(A68_VOID ,A68t117,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t117  A68_117 ;    /* PROC(REF MODE26) MODE26 */

A_PROCEDURE(A68_VOID ,A68t118,(A68_INT ,A68_INT ,A68_VC *),(A68_INT ,A68_INT ,A68_VC *,void *));
typedef struct A68t118  A68_118 ;    /* PROC(INT,INT) MODE26 */
A_ISTRUCT(A68_CHAR ,46,A68t119);
typedef struct A68t119  A68_119 ;    /* STRUCT 46 CHAR */

A_PROCEDURE(A68_BOOL ,A68t120,(A68_INT ),(A68_INT ,void *));
typedef struct A68t120  A68_120 ;    /* PROC(INT) BOOL */

A_PROCEDURE(A68_VOID ,A68t121,(A68_INT ,struct A68t77 *),(A68_INT ,struct A68t77 *,void *));
typedef struct A68t121  A68_121 ;    /* PROC(INT) MODE77 */
A_ISTRUCT(A68_CHAR ,35,A68t122);
typedef struct A68t122  A68_122 ;    /* STRUCT 35 CHAR */

A_PROCEDURE(A68_BOOL ,A68t123,(A68_VC ),(A68_VC ,void *));
typedef struct A68t123  A68_123 ;    /* PROC(MODE26) BOOL */
A_ISTRUCT(A68_CHAR ,34,A68t124);
typedef struct A68t124  A68_124 ;    /* STRUCT 34 CHAR */
A_ROW(A68_INT ,A68t125,1);
typedef struct A68t125  A68_125 ;    /* [] INT */

A_PROCEDURE(A68_VOID ,A68t126,(A68_INT ,A68_INT ,A68_INT ,A68_INT ,struct A68t125 ),(A68_INT ,A68_INT ,A68_INT ,A68_INT ,struct A68t125 ,void *));
typedef struct A68t126  A68_126 ;    /* PROC(INT,INT,INT,INT,REF MODE125) VOID */

A_PROCEDURE(A68_VOID ,A68t127,(A68_BOOL ,struct A68t109 *),(A68_BOOL ,struct A68t109 *,void *));
typedef struct A68t127  A68_127 ;    /* PROC(BOOL) MODE109 */

A_PROCEDURE(A68_VOID ,A68t128,(A68_BOOL ,struct A68t110 *),(A68_BOOL ,struct A68t110 *,void *));
typedef struct A68t128  A68_128 ;    /* PROC(BOOL) MODE110 */

A_PROCEDURE(A68_VOID ,A68t129,(A68_BOOL ,struct A68t111 *),(A68_BOOL ,struct A68t111 *,void *));
typedef struct A68t129  A68_129 ;    /* PROC(BOOL) MODE111 */
A_ISTRUCT(A68_CHAR ,21,A68t130);
typedef struct A68t130  A68_130 ;    /* STRUCT 21 CHAR */
A_ISTRUCT(A68_CHAR ,30,A68t131);
typedef struct A68t131  A68_131 ;    /* STRUCT 30 CHAR */

A_PROCEDURE(A68_VOID ,A68t132,(A68_VC ,struct A68t56 ,A68_INT ,A68_INT ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_VC ,A68_VC ),(A68_VC ,struct A68t56 ,A68_INT ,A68_INT ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_VC ,A68_VC ,void *));
typedef struct A68t132  A68_132 ;    /* PROC(REF MODE26,MODE56,INT,INT,BOOL,BOOL,BOOL,BOOL,BOOL,REF MODE26,REF MODE26) VOID */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from moduletracer --- */
extern A68_INT  ZCHACTR_tracelevel(A68_VC );
/* --- End of imports from moduletracer --- */


/* --- Imports from incvalue --- */
#define WIJACTR_noidno 0
/* --- End of imports from incvalue --- */


/* --- Imports from incinstallation --- */
/* --- End of imports from incinstallation --- */


/* --- Imports from incid --- */
#define GAAACTR_globalidno 2
#define NAAACTR_keptgeneratorproccorrection 6000
#define IAAACTR_maxidno 2000
extern A68_INT  TAAACTR_maxkeptgeneratorproc;
#define MAAACTR_maxlibid 6000
#define KAAACTR_maxrdno 4000
#define HAAACTR_minidno 3
#define OAAACTR_minlab 16384
#define LAAACTR_minlibid 4001
#define QAAACTR_minopidno 32768
#define JAAACTR_minrdno 2001
/* --- End of imports from incid --- */


/* --- Imports from incenviron --- */
/* --- End of imports from incenviron --- */


/* --- Imports from environment --- */
extern A68_VOID  PXIACTR_assert(A68_VC ,A68_BOOL );
extern A68_70  FSIACTR_list;
/* --- End of imports from environment --- */


/* --- Imports from centities --- */
/* --- End of imports from centities --- */


/* --- Imports from usefulops --- */
extern A68_VOID  ROAAOSF_whole(A68_INT ,A68_INT ,A68_VC *);
extern A68_BOOL  QRAAOSF_charinstring(A68_CHAR ,A68_INT *,A68_VC );
/* --- End of imports from usefulops --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void BCHACTR(void);   /* moduletracer */
extern void PIJACTR(void);   /* incvalue */
extern void ODAACTR(void);   /* incinstallation */
extern void BAAACTR(void);   /* incid */
extern void AHAACTR(void);   /* incenviron */
extern void HPIACTR(void);   /* environment */
extern void THAACTR(void);   /* centities */
extern void IKAAOSF(void);   /* usefulops */
/* --- end of DECS initialisation functions --- */
static A68_105   BOKACTR = {"$Id: idtable.c,v 1.5.2.4 2004/09/27 03:04:18 teshields Exp $"}; 
A_GISVEC(A68_VC ,COKACTR,BOKACTR,62)
A68_106  DOKACTR_alienidinfo;
A68_INT  EOKACTR_alienidno;
A68_109  FOKACTR_ids;
A68_110  GOKACTR_rds;
A68_109  HOKACTR_libraryids;
A68_111  IOKACTR_labels;
#define JOKACTR_idnoflags 0X0U
#define KOKACTR_ididentityflag 0X1U
#define LOKACTR_idkeptflag 0X2U
#define MOKACTR_idccdecflag 0X4U
#define NOKACTR_idforallflag 0X8U
#define OOKACTR_idforflag 0X10U
#define POKACTR_idformalflag 0X20U
#define QOKACTR_idoptimisedflag 0X40U
#define ROKACTR_idopflag 0X80U
#define SOKACTR_idgprocflag 0X100U
#define TOKACTR_idkeptgenprocflag 0X200U
#define UOKACTR_idloadedflag 0X400U
#define VOKACTR_idforceuseflag 0X800U
A68_BITS  WOKACTR_idpresetflags;
#define XOKACTR_rdnoflags 0X0U
#define YOKACTR_rdkeptflag 0X2U
#define ZOKACTR_rdnonlocalsflag 0X4U
#define APKACTR_rdglobalflag 0X8U
#define BPKACTR_rdopflag 0X10U
#define CPKACTR_rdloadedflag 0X20U
#define DPKACTR_labnoflags 0X0U
#define EPKACTR_labdeclaredflag 0X1U
#define FPKACTR_labbufferemittedflag 0X2U
static A68_113   KPKACTR = {"id info: out of range decno"}; 
A_GISVEC(A68_VC ,LPKACTR,KPKACTR,27)
static A68_114   PPKACTR = {"identifiers"}; 
A_GISVEC(A68_VC ,QPKACTR,PPKACTR,11)
static A68_115   RPKACTR = {"IDTABLE: "}; 
A_GISVEC(A68_VC ,SPKACTR,RPKACTR,9)
static A68_116   WPKACTR = {""}; 
A_GISVEC(A68_VC ,XPKACTR,WPKACTR,0)
static A68_116   GQKACTR = {""}; 
A_GISVEC(A68_VC ,HQKACTR,GQKACTR,0)
static A68_119   TQKACTR = {"IDTABLE: rd select name: invalid prefix number"}; 
A_GISVEC(A68_VC ,UQKACTR,TQKACTR,46)
static A68_116   VQKACTR = {""}; 
A_GISVEC(A68_VC ,WQKACTR,VQKACTR,0)
static A68_116   YQKACTR = {""}; 
A_GISVEC(A68_VC ,ARKACTR,YQKACTR,0)
static A68_116   FSKACTR = {""}; 
A_GISVEC(A68_VC ,GSKACTR,FSKACTR,0)
static A68_122   PSKACTR = {"IDTABLE: rd fn name: invalid rdenno"}; 
A_GISVEC(A68_VC ,QSKACTR,PSKACTR,35)
static A68_116   RSKACTR = {""}; 
A_GISVEC(A68_VC ,SSKACTR,RSKACTR,0)
static A68_122   XSKACTR = {"IDTABLE: rd fn name: invalid rdenno"}; 
A_GISVEC(A68_VC ,YSKACTR,XSKACTR,35)
static A68_116   ZSKACTR = {""}; 
A_GISVEC(A68_VC ,ATKACTR,ZSKACTR,0)
static A68_124   DTKACTR = {"IDTABLE: standop sym: null id name"}; 
A_GISVEC(A68_VC ,ETKACTR,DTKACTR,34)
static A68_114   GTKACTR = {"%&+-*/:<=>?"}; 
A_GISVEC(A68_VC ,HTKACTR,GTKACTR,11)
static A68_130   FVKACTR = {"kept identifiers are:"}; 
A_GISVEC(A68_VC ,GVKACTR,FVKACTR,21)
static A68_131   OVKACTR = {"IDTABLE: kept decno is a label"}; 
A_GISVEC(A68_VC ,PVKACTR,OVKACTR,30)
A68_132  UVKACTR_externaldec;
A68_61  VVKACTR_externalcdec;
typedef struct   /* env of non-global proc */
{
A68_INT  No_decnos;
A_PAD_INT(PAD_56)
} STKACTR_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  No_rdennos;
A_PAD_INT(PAD_57)
} ZTKACTR_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  No_libinds;
A_PAD_INT(PAD_58)
} GUKACTR_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  No_labels;
A_PAD_INT(PAD_59)
} NUKACTR_generator;

A68_106 * HPKACTR_get_idinfo(A68_INT  Decno);

A_STATIC A68_VOID  OPKACTR_debugmessage(A68_VC  M);

A68_VOID  UPKACTR_idname(A68_INT  Idno, A68_VC  *ReturnedValue);

A68_VOID  AQKACTR_afterbang(A68_VC  Name, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  KQKACTR_rdselectname(A68_INT  Prefix, A68_INT  Rdenno, A68_VC  *ReturnedValue);

A68_VOID  FRKACTR_labelfullname(A68_INT  Labno, A68_VC  *ReturnedValue);

A68_VOID  MRKACTR_labelbuffername(A68_INT  Labno, A68_VC  *ReturnedValue);

A68_BOOL  TRKACTR_labelisset(A68_INT  Labno);

A68_BOOL  WRKACTR_labelisdeclared(A68_INT  Labno);

A68_VOID  ASKACTR_labelenviron(A68_INT  Labno, A68_77  *ReturnedValue);

A68_VOID  DSKACTR_idfullname(A68_INT  Idno, A68_VC  *ReturnedValue);

A68_VOID  MSKACTR_rdfnname(A68_INT  Rdenno, A68_VC  *ReturnedValue);

A68_VOID  USKACTR_rdenvname(A68_INT  Rdenno, A68_VC  *ReturnedValue);

A68_BOOL  CTKACTR_standopsym(A68_VC  Idname);

A68_VOID  OTKACTR_initialiseids(A68_INT  No_decnos, A68_INT  No_libinds, A68_INT  No_labels, A68_INT  No_rdennos, A68_125  Keptdecnos);

A_STATIC A68_VOID  RTKACTR_generator(A68_BOOL  PTKACTR_anonymous, A68_109  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  YTKACTR_generator(A68_BOOL  WTKACTR_anonymous, A68_110  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  FUKACTR_generator(A68_BOOL  DUKACTR_anonymous, A68_109  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  MUKACTR_generator(A68_BOOL  KUKACTR_anonymous, A68_111  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  RTKACTR_generator(A68_BOOL  PTKACTR_anonymous, A68_109  *ReturnedValue, void *NonLocals)
#define NL(x) (((STKACTR_generator *)NonLocals)->x)
{ 
A68_109  TTKACTR;  /* clause result */
A68_109  UTKACTR;  /* OPERATORS - dynamic generator */
{ 
UTKACTR.dim[0].upb = NL(No_decnos) ;
UTKACTR.dim[0].lwb = GAAACTR_globalidno ;
A_1INITSTRIDES(UTKACTR) ;
( PTKACTR_anonymous? A_R1LOC(A68_106 ,UTKACTR): A_R1HEAP(A68_106 ,UTKACTR) );
TTKACTR = UTKACTR;
} 
*ReturnedValue = (TTKACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  YTKACTR_generator(A68_BOOL  WTKACTR_anonymous, A68_110  *ReturnedValue, void *NonLocals)
#define NL(x) (((ZTKACTR_generator *)NonLocals)->x)
{ 
A68_110  AUKACTR;  /* clause result */
A68_110  BUKACTR;  /* OPERATORS - dynamic generator */
{ 
BUKACTR.dim[0].upb = ((JAAACTR_minrdno-1)+NL(No_rdennos)) ;
BUKACTR.dim[0].lwb = JAAACTR_minrdno ;
A_1INITSTRIDES(BUKACTR) ;
( WTKACTR_anonymous? A_R1LOC(A68_107 ,BUKACTR): A_R1HEAP(A68_107 ,BUKACTR) );
AUKACTR = BUKACTR;
} 
*ReturnedValue = (AUKACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  FUKACTR_generator(A68_BOOL  DUKACTR_anonymous, A68_109  *ReturnedValue, void *NonLocals)
#define NL(x) (((GUKACTR_generator *)NonLocals)->x)
{ 
A68_109  HUKACTR;  /* clause result */
A68_109  IUKACTR;  /* OPERATORS - dynamic generator */
{ 
IUKACTR.dim[0].upb = ((LAAACTR_minlibid-1)+NL(No_libinds)) ;
IUKACTR.dim[0].lwb = LAAACTR_minlibid ;
A_1INITSTRIDES(IUKACTR) ;
( DUKACTR_anonymous? A_R1LOC(A68_106 ,IUKACTR): A_R1HEAP(A68_106 ,IUKACTR) );
HUKACTR = IUKACTR;
} 
*ReturnedValue = (HUKACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  MUKACTR_generator(A68_BOOL  KUKACTR_anonymous, A68_111  *ReturnedValue, void *NonLocals)
#define NL(x) (((NUKACTR_generator *)NonLocals)->x)
{ 
A68_111  OUKACTR;  /* clause result */
A68_111  PUKACTR;  /* OPERATORS - dynamic generator */
{ 
PUKACTR.dim[0].upb = NL(No_labels) ;
PUKACTR.dim[0].lwb = 1 ;
A_1INITSTRIDES(PUKACTR) ;
( KUKACTR_anonymous? A_R1LOC(A68_108 ,PUKACTR): A_R1HEAP(A68_108 ,PUKACTR) );
OUKACTR = PUKACTR;
} 
*ReturnedValue = (OUKACTR);
return;
} 
#undef NL

A68_106 * HPKACTR_get_idinfo(A68_INT  Decno)
{ 
A68_106 * IPKACTR;  /* clause result */
A68_BOOL  JPKACTR;  /* optbool result */
A68_106 * MPKACTR;  /* OPERATORS - skip to mode */
A_PROC_ENTRY(get_idinfo);
 /* line 198: */
 /* line 199: */
if ( (Decno<=IAAACTR_maxidno) )
{ 
 /* line 200: */
IPKACTR = (&A_R1INDEX(FOKACTR_ids,Decno));
} 
else
{ 
JPKACTR = (Decno>=LAAACTR_minlibid);
if ( JPKACTR )
{ /* line 201: */
JPKACTR = (Decno<=MAAACTR_maxlibid);
}
if ( JPKACTR )
{ 
 /* line 202: */
IPKACTR = (&A_R1INDEX(HOKACTR_libraryids,Decno));
} 
else
{ 
PXIACTR_assert(LPKACTR, A68_FALSE);
 /* line 203: */
IPKACTR = MPKACTR;
} 
} 
A_PROC_EXIT(get_idinfo);
return( IPKACTR );
} 
#undef NL

A_STATIC A68_VOID  OPKACTR_debugmessage(A68_VC  M)
{ 
A_PROC_ENTRY(debugmessage);
 /* line 209: */
 /* line 210: */
if ( (ZCHACTR_tracelevel(QPKACTR)!=0) )
{ 
 /* line 211: */
A_CALLPROC(FSIACTR_list,(A_VC_PLUS(SPKACTR,M)),(A_VC_PLUS(SPKACTR,M),(FSIACTR_list).nonlocals));
} 
A_PROC_EXIT(debugmessage);
return;
} 
#undef NL

A68_VOID  UPKACTR_idname(A68_INT  Idno, A68_VC  *ReturnedValue)
{ 
A68_VC  VPKACTR;  /* clause result */
A68_INT  YPKACTR;  /* YIELD */
A_PROC_ENTRY(idname);
 /* line 217: */
 /* line 218: */
 /* line 219: */
if ( (Idno==EOKACTR_alienidno) )
{ 
VPKACTR = (*(&((&DOKACTR_alienidinfo)->Name)));
} 
else
{ 
 /* line 220: */
 /* line 221: */
if ( ((Idno==WIJACTR_noidno)|(Idno>QAAACTR_minopidno)) )
{ 
VPKACTR = XPKACTR;
} 
else
{ 
 /* line 222: */
if ( (Idno<=IAAACTR_maxidno) )
{ 
 /* line 223: */
VPKACTR = (*(&((&A_R1INDEX(FOKACTR_ids,Idno))->Name)));
} 
else
{ 
 /* line 224: */
if ( (Idno<=KAAACTR_maxrdno) )
{ 
 /* line 225: */
VPKACTR = (*(&((&A_R1INDEX(GOKACTR_rds,Idno))->Name)));
} 
else
{ 
 /* line 226: */
if ( (Idno<=MAAACTR_maxlibid) )
{ 
 /* line 227: */
VPKACTR = (*(&((&A_R1INDEX(HOKACTR_libraryids,Idno))->Name)));
} 
else
{ 
 /* line 228: */
YPKACTR = (Idno-OAAACTR_minlab) ;
VPKACTR = (*(&((&A_R1INDEX(IOKACTR_labels,YPKACTR))->Name)));
} 
} 
} 
} 
} 
A_PROC_EXIT(idname);
*ReturnedValue = (VPKACTR);
return;
} 
#undef NL

A68_VOID  AQKACTR_afterbang(A68_VC  Name, A68_VC  *ReturnedValue)
{ 
A68_INT  BQKACTR_upb;
A68_BOOL  CQKACTR;  /* optbool result */
A68_INT  DQKACTR;  /* YIELD */
A68_VC  EQKACTR;  /* clause result */
A68_VC  FQKACTR;  /* OPERATORS - trim index */
A_PROC_ENTRY(afterbang);
 /* line 231: */
{ 
BQKACTR_upb = Name.upb;
 /* line 232: */
CQKACTR = (BQKACTR_upb>0);
if ( CQKACTR )
{DQKACTR = 1 ;
CQKACTR = ((*(&A_VINDEX(Name,DQKACTR)))=='!');
}
if ( CQKACTR )
{ 
if ( (BQKACTR_upb>1) )
{ 
EQKACTR = A_VTRIM(FQKACTR,(Name),A_VTSCRIPT(&(FQKACTR.upb),(Name).upb,2,(Name).upb));
} 
else
{ 
EQKACTR = HQKACTR;
} 
} 
else
{ 
 /* line 233: */
EQKACTR = Name;
} 
} 
A_PROC_EXIT(afterbang);
*ReturnedValue = (EQKACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  KQKACTR_rdselectname(A68_INT  Prefix, A68_INT  Rdenno, A68_VC  *ReturnedValue)
{ 
A68_107 * LQKACTR_rd;
A68_VC  MQKACTR;  /* clause result */
A68_VC  NQKACTR;  /* OPERATORS - istruct -> vector */
A68_56  OQKACTR;  /* OPERATORS - istruct -> vector */
A68_VC  PQKACTR;  /* OPERATORS - istruct -> vector */
A68_56  QQKACTR;  /* OPERATORS - istruct -> vector */
A68_VC  RQKACTR;  /* OPERATORS - istruct -> vector */
A68_56  SQKACTR;  /* OPERATORS - istruct -> vector */
A68_BITS  XQKACTR;  /* ADICOPS - >= */
A68_VC  ZQKACTR;  /* clause result */
A68_VC  BRKACTR;  /* avoid structure result */
A68_VC  CRKACTR;  /* clause result */
A68_VC  DRKACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(rdselectname);
 /* line 236: */
 /* line 237: */
{ 
LQKACTR_rd = (&A_R1INDEX(GOKACTR_rds,Rdenno));
 /* line 238: */
 /* line 239: */
 /* line 240: */
switch ( Prefix )
{ 
case 1: 
 /* line 241: */
OQKACTR = (*(&(LQKACTR_rd->Prefix))) ;
MQKACTR = A_HISVEC(NQKACTR,OQKACTR,7,A68_CHAR );
break;
case 2: 
 /* line 243: */
QQKACTR = (*(&(LQKACTR_rd->Fnprefix))) ;
MQKACTR = A_HISVEC(PQKACTR,QQKACTR,7,A68_CHAR );
break;
case 3: 
 /* line 245: */
SQKACTR = (*(&(LQKACTR_rd->Envprefix))) ;
MQKACTR = A_HISVEC(RQKACTR,SQKACTR,7,A68_CHAR );
break;
default: 
PXIACTR_assert(UQKACTR, A68_FALSE);
 /* line 246: */
MQKACTR = WQKACTR;
break;
} 
 /* line 247: */
 /* line 248: */
 /* line 249: */
XQKACTR = (*(&(LQKACTR_rd->Flags))) ;
if ( A_LB_GE(XQKACTR,BPKACTR_rdopflag) )
{ 
 /* line 250: */
ZQKACTR = ARKACTR;
} 
else
{ 
 /* line 251: */
AQKACTR_afterbang( (*(&(LQKACTR_rd->Name))), &BRKACTR );
ZQKACTR = BRKACTR;
} 
CRKACTR = A_VC_PLUS(A_VC_PLUS(MQKACTR,A_HVEC(DRKACTR,'_',A68_CHAR )),ZQKACTR);
} 
A_PROC_EXIT(rdselectname);
*ReturnedValue = (CRKACTR);
return;
} 
#undef NL

A68_VOID  FRKACTR_labelfullname(A68_INT  Labno, A68_VC  *ReturnedValue)
{ 
A68_108 * GRKACTR_labinfo;
A68_VC  HRKACTR;  /* clause result */
A68_VC  IRKACTR;  /* OPERATORS - istruct -> vector */
A68_56  JRKACTR;  /* OPERATORS - istruct -> vector */
A68_VC  KRKACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(labelfullname);
 /* line 257: */
{ 
GRKACTR_labinfo = (&A_R1INDEX(IOKACTR_labels,Labno));
 /* line 258: */
 /* line 259: */
JRKACTR = (*(&(GRKACTR_labinfo->Prefix))) ;
HRKACTR = A_VC_PLUS(A_VC_PLUS(A_HISVEC(IRKACTR,JRKACTR,7,A68_CHAR ),A_HVEC(KRKACTR,'_',A68_CHAR )),(*(&(GRKACTR_labinfo->Name))));
} 
A_PROC_EXIT(labelfullname);
*ReturnedValue = (HRKACTR);
return;
} 
#undef NL

A68_VOID  MRKACTR_labelbuffername(A68_INT  Labno, A68_VC  *ReturnedValue)
{ 
A68_108 * NRKACTR_labinfo;
A68_VC  ORKACTR;  /* clause result */
A68_VC  PRKACTR;  /* OPERATORS - istruct -> vector */
A68_56  QRKACTR;  /* OPERATORS - istruct -> vector */
A68_VC  RRKACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(labelbuffername);
 /* line 265: */
 /* line 266: */
{ 
NRKACTR_labinfo = (&A_R1INDEX(IOKACTR_labels,Labno));
 /* line 267: */
 /* line 268: */
QRKACTR = (*(&((&(NRKACTR_labinfo->Label))->Name))) ;
ORKACTR = A_VC_PLUS(A_VC_PLUS(A_HISVEC(PRKACTR,QRKACTR,7,A68_CHAR ),A_HVEC(RRKACTR,'_',A68_CHAR )),(*(&(NRKACTR_labinfo->Name))));
} 
A_PROC_EXIT(labelbuffername);
*ReturnedValue = (ORKACTR);
return;
} 
#undef NL

A68_BOOL  TRKACTR_labelisset(A68_INT  Labno)
{ 
A68_BOOL  URKACTR;  /* clause result */
A_PROC_ENTRY(labelisset);
 /* line 271: */
URKACTR = (*(&((&((&A_R1INDEX(IOKACTR_labels,Labno))->Label))->Set)));
A_PROC_EXIT(labelisset);
return( URKACTR );
} 
#undef NL

A68_BOOL  WRKACTR_labelisdeclared(A68_INT  Labno)
{ 
A68_BOOL  XRKACTR;  /* clause result */
A68_BITS  YRKACTR;  /* ADICOPS - <= */
A_PROC_ENTRY(labelisdeclared);
 /* line 274: */
YRKACTR = (*(&((&A_R1INDEX(IOKACTR_labels,Labno))->Flags))) ;
XRKACTR = A_LB_LE(EPKACTR_labdeclaredflag,YRKACTR);
A_PROC_EXIT(labelisdeclared);
return( XRKACTR );
} 
#undef NL

A68_VOID  ASKACTR_labelenviron(A68_INT  Labno, A68_77  *ReturnedValue)
{ 
A68_77  BSKACTR;  /* clause result */
A_PROC_ENTRY(labelenviron);
 /* line 277: */
BSKACTR = (*(&((&A_R1INDEX(IOKACTR_labels,Labno))->Environ)));
A_PROC_EXIT(labelenviron);
*ReturnedValue = (BSKACTR);
return;
} 
#undef NL

A68_VOID  DSKACTR_idfullname(A68_INT  Idno, A68_VC  *ReturnedValue)
{ 
A68_VC  ESKACTR;  /* clause result */
A68_106 * HSKACTR_id;
A68_VC  ISKACTR;  /* avoid structure result */
A68_106 * JSKACTR_id;
A68_VC  KSKACTR;  /* avoid structure result */
A_PROC_ENTRY(idfullname);
 /* line 280: */
 /* line 284: */
{ 
 /* line 285: */
 /* line 286: */
if ( (Idno==EOKACTR_alienidno) )
{ 
ESKACTR = (*(&((&DOKACTR_alienidinfo)->Name)));
} 
else
{ 
 /* line 288: */
 /* line 290: */
if ( ((Idno==WIJACTR_noidno)|(Idno>QAAACTR_minopidno)) )
{ 
ESKACTR = GSKACTR;
} 
else
{ 
 /* line 291: */
if ( (Idno<=IAAACTR_maxidno) )
{ 
HSKACTR_id = (&A_R1INDEX(FOKACTR_ids,Idno));
 /* line 292: */
 /* line 294: */
ESKACTR = (*(&(HSKACTR_id->C_name)));
} 
else
{ 
 /* line 295: */
if ( (Idno<=KAAACTR_maxrdno) )
{ 
 /* line 297: */
KQKACTR_rdselectname( 1, Idno, &ISKACTR );
ESKACTR = ISKACTR;
} 
else
{ 
 /* line 298: */
if ( (Idno<=MAAACTR_maxlibid) )
{ 
JSKACTR_id = (&A_R1INDEX(HOKACTR_libraryids,Idno));
 /* line 299: */
 /* line 301: */
 /* line 302: */
ESKACTR = (*(&(JSKACTR_id->C_name)));
} 
else
{ 
 /* line 303: */
 /* line 304: */
MRKACTR_labelbuffername( (Idno-OAAACTR_minlab), &KSKACTR );
ESKACTR = KSKACTR;
} 
} 
} 
} 
} 
} 
A_PROC_EXIT(idfullname);
*ReturnedValue = (ESKACTR);
return;
} 
#undef NL

A68_VOID  MSKACTR_rdfnname(A68_INT  Rdenno, A68_VC  *ReturnedValue)
{ 
A68_VC  NSKACTR;  /* clause result */
A68_VC  OSKACTR;  /* avoid structure result */
A_PROC_ENTRY(rdfnname);
 /* line 307: */
 /* line 308: */
 /* line 309: */
if ( ((Rdenno>=JAAACTR_minrdno)&(Rdenno<=KAAACTR_maxrdno)) )
{ 
 /* line 310: */
KQKACTR_rdselectname( 2, Rdenno, &OSKACTR );
NSKACTR = OSKACTR;
} 
else
{ 
PXIACTR_assert(QSKACTR, A68_FALSE);
 /* line 311: */
NSKACTR = SSKACTR;
} 
A_PROC_EXIT(rdfnname);
*ReturnedValue = (NSKACTR);
return;
} 
#undef NL

A68_VOID  USKACTR_rdenvname(A68_INT  Rdenno, A68_VC  *ReturnedValue)
{ 
A68_VC  VSKACTR;  /* clause result */
A68_VC  WSKACTR;  /* avoid structure result */
A_PROC_ENTRY(rdenvname);
 /* line 314: */
 /* line 315: */
 /* line 316: */
if ( ((Rdenno>=JAAACTR_minrdno)&(Rdenno<=KAAACTR_maxrdno)) )
{ 
 /* line 317: */
KQKACTR_rdselectname( 3, Rdenno, &WSKACTR );
VSKACTR = WSKACTR;
} 
else
{ 
PXIACTR_assert(YSKACTR, A68_FALSE);
 /* line 318: */
VSKACTR = ATKACTR;
} 
A_PROC_EXIT(rdenvname);
*ReturnedValue = (VSKACTR);
return;
} 
#undef NL

A68_BOOL  CTKACTR_standopsym(A68_VC  Idname)
{ 
A68_BOOL  FTKACTR;  /* clause result */
A68_INT  ITKACTR;  /* YIELD */
A_PROC_ENTRY(standopsym);
 /* line 324: */
 /* line 325: */
 /* line 326: */
if ( (Idname.upb<=0) )
{ 
PXIACTR_assert(ETKACTR, A68_FALSE);
 /* line 327: */
 /* line 328: */
FTKACTR = A68_FALSE;
} 
else
{ 
 /* line 329: */
ITKACTR = 1 ;
FTKACTR = QRAAOSF_charinstring(A_VINDEX(Idname,ITKACTR), A_LOC(A68_INT ), HTKACTR);
} 
A_PROC_EXIT(standopsym);
return( FTKACTR );
} 
#undef NL
 /* line 334: */

A68_VOID  OTKACTR_initialiseids(A68_INT  No_decnos, A68_INT  No_libinds, A68_INT  No_labels, A68_INT  No_rdennos, A68_125  Keptdecnos)
{ 
A68_127  QTKACTR_generator;   /* proc value of non-global proc */
A68_109  VTKACTR;  /* avoid structure result */
A68_128  XTKACTR_generator;   /* proc value of non-global proc */
A68_110  CUKACTR;  /* avoid structure result */
A68_127  EUKACTR_generator;   /* proc value of non-global proc */
A68_109  JUKACTR;  /* avoid structure result */
A68_129  LUKACTR_generator;   /* proc value of non-global proc */
A68_111  QUKACTR;  /* avoid structure result */
A68_106 * RUKACTR_id;
A68_INT  SUKACTR;  /* forall loop counter */
A68_BITS * TUKACTR;  /* YIELD */
A68_107 * UUKACTR_rd;
A68_INT  VUKACTR;  /* forall loop counter */
A68_BITS * WUKACTR;  /* YIELD */
A68_106 * XUKACTR_id;
A68_INT  YUKACTR;  /* forall loop counter */
A68_BITS * ZUKACTR;  /* YIELD */
A68_108 * AVKACTR_lab;
A68_INT  BVKACTR;  /* forall loop counter */
A68_BITS * CVKACTR;  /* YIELD */
A68_125  DVKACTR;  /* OPERATORS - nil -> mode */
A68_125  EVKACTR;  /* != */
A68_INT * HVKACTR_decno;
A68_INT  IVKACTR;  /* forall loop counter */
A68_VC  JVKACTR;  /* avoid structure result */
A68_BITS * KVKACTR;  /* YIELD */
A68_BITS * LVKACTR;  /* YIELD */
A68_BITS * MVKACTR;  /* YIELD */
A68_BITS * NVKACTR;  /* YIELD */
A68_77  QVKACTR;  /* collateral clause result */
A68_77 * RVKACTR;  /* YIELD */
A68_77  SVKACTR;  /* collateral clause result */
A68_77 * TVKACTR;  /* YIELD */
A_PROC_ENTRY(initialiseids);
 /* line 335: */
 /* line 336: */
{ 
A_CLOSURE( QTKACTR_generator, RTKACTR_generator, STKACTR_generator );
(( STKACTR_generator * ) ( QTKACTR_generator.nonlocals )) -> No_decnos = No_decnos;
A_CALLPROC(QTKACTR_generator,(A68_FALSE, &VTKACTR),(A68_FALSE, &VTKACTR,(QTKACTR_generator).nonlocals));
FOKACTR_ids = VTKACTR;
 /* line 337: */
A_CLOSURE( XTKACTR_generator, YTKACTR_generator, ZTKACTR_generator );
(( ZTKACTR_generator * ) ( XTKACTR_generator.nonlocals )) -> No_rdennos = No_rdennos;
A_CALLPROC(XTKACTR_generator,(A68_FALSE, &CUKACTR),(A68_FALSE, &CUKACTR,(XTKACTR_generator).nonlocals));
GOKACTR_rds = CUKACTR;
 /* line 338: */
A_CLOSURE( EUKACTR_generator, FUKACTR_generator, GUKACTR_generator );
(( GUKACTR_generator * ) ( EUKACTR_generator.nonlocals )) -> No_libinds = No_libinds;
A_CALLPROC(EUKACTR_generator,(A68_FALSE, &JUKACTR),(A68_FALSE, &JUKACTR,(EUKACTR_generator).nonlocals));
HOKACTR_libraryids = JUKACTR;
 /* line 339: */
A_CLOSURE( LUKACTR_generator, MUKACTR_generator, NUKACTR_generator );
(( NUKACTR_generator * ) ( LUKACTR_generator.nonlocals )) -> No_labels = No_labels;
A_CALLPROC(LUKACTR_generator,(A68_FALSE, &QUKACTR),(A68_FALSE, &QUKACTR,(LUKACTR_generator).nonlocals));
IOKACTR_labels = QUKACTR;
 /* line 341: */
SUKACTR = FOKACTR_ids.dim[0].upb - FOKACTR_ids.dim[0].lwb;
RUKACTR_id = FOKACTR_ids.data;
for (;SUKACTR-- >= 0;
(RUKACTR_id += FOKACTR_ids.dim[0].stride
) )
{
TUKACTR = (&(RUKACTR_id->Flags)) ;
(*TUKACTR) = JOKACTR_idnoflags;
}
 /* line 342: */
VUKACTR = GOKACTR_rds.dim[0].upb - GOKACTR_rds.dim[0].lwb;
UUKACTR_rd = GOKACTR_rds.data;
for (;VUKACTR-- >= 0;
(UUKACTR_rd += GOKACTR_rds.dim[0].stride
) )
{
WUKACTR = (&(UUKACTR_rd->Flags)) ;
(*WUKACTR) = XOKACTR_rdnoflags;
}
 /* line 343: */
YUKACTR = HOKACTR_libraryids.dim[0].upb - HOKACTR_libraryids.dim[0].lwb;
XUKACTR_id = HOKACTR_libraryids.data;
for (;YUKACTR-- >= 0;
(XUKACTR_id += HOKACTR_libraryids.dim[0].stride
) )
{
ZUKACTR = (&(XUKACTR_id->Flags)) ;
(*ZUKACTR) = JOKACTR_idnoflags;
}
 /* line 344: */
BVKACTR = IOKACTR_labels.dim[0].upb - IOKACTR_labels.dim[0].lwb;
AVKACTR_lab = IOKACTR_labels.data;
for (;BVKACTR-- >= 0;
(AVKACTR_lab += IOKACTR_labels.dim[0].stride
) )
{
CVKACTR = (&(AVKACTR_lab->Flags)) ;
(*CVKACTR) = DPKACTR_labnoflags;
}
 /* line 352: */
 /* line 353: */
 /* line 354: */
EVKACTR = A_R1VAC(DVKACTR) ;
if ( ! A_RSTRUCTCOMP(Keptdecnos,EVKACTR) )
{ 
OPKACTR_debugmessage(GVKACTR);
 /* line 356: */
 /* line 357: */
IVKACTR = Keptdecnos.dim[0].upb - Keptdecnos.dim[0].lwb;
HVKACTR_decno = Keptdecnos.data;
for (;IVKACTR-- >= 0;
(HVKACTR_decno += Keptdecnos.dim[0].stride
) )
{
 /* line 358: */
ROAAOSF_whole( (*HVKACTR_decno), 0, &JVKACTR );
OPKACTR_debugmessage(JVKACTR);
 /* line 359: */
 /* line 360: */
if ( ((*HVKACTR_decno)<=IAAACTR_maxidno) )
{ 
 /* line 361: */
KVKACTR = (&((&A_R1INDEX(FOKACTR_ids,(*HVKACTR_decno)))->Flags)) ;
(*KVKACTR) = LOKACTR_idkeptflag;
} 
else
{ 
 /* line 362: */
if ( ((*HVKACTR_decno)<=KAAACTR_maxrdno) )
{ 
 /* line 363: */
LVKACTR = (&((&A_R1INDEX(GOKACTR_rds,(*HVKACTR_decno)))->Flags)) ;
(*LVKACTR) = YOKACTR_rdkeptflag;
} 
else
{ 
 /* line 364: */
if ( ((*HVKACTR_decno)<=MAAACTR_maxlibid) )
{ 
 /* line 365: */
MVKACTR = (&((&A_R1INDEX(HOKACTR_libraryids,(*HVKACTR_decno)))->Flags)) ;
(*MVKACTR) = LOKACTR_idkeptflag;
} 
else
{ 
 /* line 366: */
 /* line 367: */
if ( ((*HVKACTR_decno)<=TAAACTR_maxkeptgeneratorproc) )
{ 
(*HVKACTR_decno)-=NAAACTR_keptgeneratorproccorrection;
 /* line 368: */
 /* line 370: */
NVKACTR = (&((&A_R1INDEX(FOKACTR_ids,(*HVKACTR_decno)))->Flags)) ;
(*NVKACTR) = (A68_BITS )(LOKACTR_idkeptflag|TOKACTR_idkeptgenprocflag);
} 
else
{ 
 /* line 371: */
 /* line 372: */
PXIACTR_assert(PVKACTR, A68_FALSE);
} 
} 
} 
} 
}
 /* line 373: */
} 
 /* line 375: */
QVKACTR.Level = 0;
QVKACTR.Block = 0;
RVKACTR = (&((&A_R1INDEX(FOKACTR_ids,GAAACTR_globalidno))->Environ)) ;
(*RVKACTR) = QVKACTR;
 /* line 376: */
SVKACTR.Level = 0;
 /* line 377: */
SVKACTR.Block = 0;
TVKACTR = (&((&A_R1INDEX(FOKACTR_ids,HAAACTR_minidno))->Environ)) ;
(*TVKACTR) = SVKACTR;
} 
A_PROC_EXIT(initialiseids);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 3: */
 /* line 4: */
 /* line 6: */
void YNKACTR(void)   /* initialise DECS idtable */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/shields/projects/Algol68/Tools/Algol68toC/src/a68toc","-v","-uname","seedfile","-lib","/home/shields/projects/Algol68/Tools/Algol68toC/a68config","-dir","/home/shields/projects/Algol68/Tools/Algol68toC/a68config","-dir","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel","-dir",".","idtable.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/shields/projects/Algol68/Tools/Algol68toC/a68config","A68_CDIR=","A68_DIR=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/shields/projects/Algol68/Tools/Algol68toC/a68config/a68config.m","./moduletracer.m","./incvalue.m","./incinstallation.m","./incid.m","./incenviron.m","./environment.m","./centities.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/usefulops.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
BCHACTR();   /* USE moduletracer */
PIJACTR();   /* USE incvalue */
ODAACTR();   /* USE incinstallation */
BAAACTR();   /* USE incid */
AHAACTR();   /* USE incenviron */
HPIACTR();   /* USE environment */
THAACTR();   /* USE centities */
IKAAOSF();   /* USE usefulops */
/* --- Initialise configuration information */
A_config.source_file = "/home/shields/projects/Algol68/Tools/Algol68toC/src/idtable.a68";
A_config.translation_time = "Sun Sep 26 21:50:56 2004";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "XNKACTR (from seed file) ";
A_config.spec_change_time = "Sun Sep 26 21:50:56 2004";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS idtable);
UEAALIB_a68config(LGAALIB_configinfo, COKACTR);
 /* line 105: */
 /* line 134: */
 /* line 152: */
 /* line 153: */
EOKACTR_alienidno = (-1);
 /* line 157: */
 /* line 158: */
 /* line 159: */
 /* line 160: */
 /* line 164: */
 /* line 165: */
 /* line 166: */
 /* line 167: */
 /* line 168: */
 /* line 169: */
 /* line 170: */
 /* line 171: */
 /* line 172: */
 /* line 173: */
 /* line 175: */
 /* line 176: */
 /* line 177: */
 /* line 179: */
WOKACTR_idpresetflags = (A68_BITS )(LOKACTR_idkeptflag|TOKACTR_idkeptgenprocflag);
 /* line 184: */
 /* line 185: */
 /* line 186: */
 /* line 187: */
 /* line 188: */
 /* line 189: */
 /* line 193: */
 /* line 194: */
 /* line 195: */
 /* line 197: */
 /* line 205: */
 /* line 213: */
 /* line 230: */
 /* line 235: */
 /* line 253: */
 /* line 261: */
 /* line 270: */
 /* line 273: */
 /* line 276: */
 /* line 279: */
 /* line 306: */
 /* line 313: */
 /* line 320: */
 /* line 331: */
 /* line 332: */
 /* line 379: */
 /* line 382: */
 /* line 384: */
 /* line 386: */
 /* line 388: */
 /* line 401: */
/*SKIP*/;
A_PROC_EXIT(DECS idtable);
} 
#undef NL
/* end of translation of idtable.a68 */
