/* UNAME:VIVACTR */
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

A_PROCEDURE(A68_VOID ,A68t59,(A68_VC ),(A68_VC ,void *));
typedef struct A68t59  A68_59 ;    /* PROC(MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t60,(void),(void *));
typedef struct A68t60  A68_60 ;    /* PROC VOID */
struct A68t62 ;

A_PROCEDURE(A68_VOID ,A68t61,(struct A68t62 ),(struct A68t62 ,void *));
typedef struct A68t61  A68_61 ;    /* PROC(MODE62) VOID */
A_VECTOR(struct A68t63 ,A68t62);
typedef struct A68t62  A68_62 ;    /* VECTOR [] MODE63 */
struct A68t63 { A68_INT mode; union {
A68_CHAR  mode1;
A68_VC  mode2;
A68_SINT  mode3;
} data; };
typedef struct A68t63  A68_63 ;    /* UNION(CHAR,MODE26,SHORT INT)  */
struct A68t65 ;

A_PROCEDURE(A68_VOID ,A68t64,(struct A68t65 ,A68_INT ),(struct A68t65 ,A68_INT ,void *));
typedef struct A68t64  A68_64 ;    /* PROC(MODE65,INT) VOID */
A_VECTOR(struct A68t66 ,A68t65);
typedef struct A68t65  A68_65 ;    /* VECTOR [] MODE66 */
struct A68t66 { A68_INT mode; union {
A68_CHAR  mode1;
A68_VC  mode2;
A68_INT  mode3;
A68_SINT  mode4;
} data; };
typedef struct A68t66  A68_66 ;    /* UNION(CHAR,MODE26,INT,SHORT INT)  */

A_PROCEDURE(A68_VOID ,A68t67,(A68_VC ,A68_INT ,A68_VC *),(A68_VC ,A68_INT ,A68_VC *,void *));
typedef struct A68t67  A68_67 ;    /* PROC(REF MODE26,INT) MODE26 */

A_PROCEDURE(A68_VOID ,A68t68,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t68  A68_68 ;    /* PROC(REF MODE26) MODE26 */

A_PROCEDURE(A68_VOID ,A68t69,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t69  A68_69 ;    /* PROC(REF MODE26) REF MODE26 */

A_PROCEDURE(A68_INT ,A68t70,(A68_INT ),(A68_INT ,void *));
typedef struct A68t70  A68_70 ;    /* PROC(INT) INT */

A_PROCEDURE(A68_BOOL ,A68t71,(A68_INT ),(A68_INT ,void *));
typedef struct A68t71  A68_71 ;    /* PROC(INT) BOOL */
struct A68t72{
A68_INT  Level;
A_PAD_INT(PAD_4)
A68_INT  Block;
A_PAD_INT(PAD_5)
};
typedef struct A68t72  A68_72 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t73,(struct A68t72 *),(struct A68t72 *,void *));
typedef struct A68t73  A68_73 ;    /* PROC MODE72 */

A_PROCEDURE(A68_INT ,A68t74,(void),(void *));
typedef struct A68t74  A68_74 ;    /* PROC INT */

A_PROCEDURE(A68_VOID ,A68t75,(A68_INT ),(A68_INT ,void *));
typedef struct A68t75  A68_75 ;    /* PROC(INT) VOID */

A_PROCEDURE(A68_BOOL ,A68t76,(void),(void *));
typedef struct A68t76  A68_76 ;    /* PROC BOOL */

A_PROCEDURE(A68_BOOL ,A68t77,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t77  A68_77 ;    /* PROC(INT,INT) BOOL */

A_PROCEDURE(A68_VOID ,A68t78,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t78  A68_78 ;    /* PROC(INT,INT) VOID */

A_PROCEDURE(A68_BOOL ,A68t79,(struct A68t72 ,struct A68t72 ),(struct A68t72 ,struct A68t72 ,void *));
typedef struct A68t79  A68_79 ;    /* PROC(MODE72,MODE72) BOOL */

A_PROCEDURE(A68_BOOL ,A68t80,(struct A68t72 ),(struct A68t72 ,void *));
typedef struct A68t80  A68_80 ;    /* PROC(MODE72) BOOL */

A_PROCEDURE(A68_VOID ,A68t81,(A68_VC ,A68_BOOL ),(A68_VC ,A68_BOOL ,void *));
typedef struct A68t81  A68_81 ;    /* PROC(MODE26,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t82,(A68_VC ,A68_INT ),(A68_VC ,A68_INT ,void *));
typedef struct A68t82  A68_82 ;    /* PROC(MODE26,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t83,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t83  A68_83 ;    /* PROC(INT) REF MODE26 */
struct A68t85 ;

A_PROCEDURE(A68_VOID ,A68t84,(A68_INT ,struct A68t85 ),(A68_INT ,struct A68t85 ,void *));
typedef struct A68t84  A68_84 ;    /* PROC(INT,MODE85) VOID */
A_ROW(A68_VC ,A68t85,1);
typedef struct A68t85  A68_85 ;    /* [] MODE26 */

A_PROCEDURE(A68_BITS ,A68t86,(void),(void *));
typedef struct A68t86  A68_86 ;    /* PROC BITS */
struct A68t87{
A68_INT  Cfile;
A_PAD_INT(PAD_6)
};
typedef struct A68t87  A68_87 ;    /* STRUCT(INT)  */
struct A68t88{
A68_INT  Seedfile;
A_PAD_INT(PAD_7)
};
typedef struct A68t88  A68_88 ;    /* STRUCT(INT)  */
struct A68t89 { A68_INT mode; union {
struct A68t87  mode1;
struct A68t88  mode2;
struct A68t56  mode3;
} data; };
typedef struct A68t89  A68_89 ;    /* UNION(MODE87,MODE88,MODE56,VOID)  */
struct A68t90{
A68_VC  Version;
A68_LINT  Translationtime;
A_PAD_LINT(PAD_8)
A68_VC  Sourcefile;
struct A68t56  Nameseed;
A_PAD_ISTRUCT(A68_56 ,PAD_9)
struct A68t89  Nameseedorigin;
struct A68t91 * Used_modules;
A68_VC  Commandline;
struct A68t92 * Environment;
};
typedef struct A68t90  A68_90 ;    /* STRUCT(REF MODE26,LONG INT,REF MODE26,MODE56,MODE89,REF MODE91,REF MODE26,REF MODE92)  */
struct A68t91{
A68_VC  Modinfo_file;
struct A68t91 * Next;
};
typedef struct A68t91  A68_91 ;    /* STRUCT(REF MODE26,REF MODE91)  */
struct A68t92{
A68_VC  Env_name;
A68_VC  Env_value;
struct A68t92 * Next;
};
typedef struct A68t92  A68_92 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE92)  */
struct A68t94 ;
struct A68t95 ;

A_PROCEDURE(struct A68t94 *,A68t93,(A68_VC ,struct A68t95 *,A68_VC *),(A68_VC ,struct A68t95 *,A68_VC *,void *));
typedef struct A68t93  A68_93 ;    /* PROC(MODE26,REF MODE95,REF REF MODE26) REF MODE94 */
struct A68t94{
A68_VC  Name;
A68_BITS * Stdiofile;
};
typedef struct A68t94  A68_94 ;    /* STRUCT(REF MODE26,REF BITS)  */
struct A68t95{
A68_VC  Dir;
struct A68t95 * Next;
};
typedef struct A68t95  A68_95 ;    /* STRUCT(REF MODE26,REF MODE95)  */
struct A68t97 ;

A_PROCEDURE(A68_VOID ,A68t96,(struct A68t97 *,A68_BOOL ),(struct A68t97 *,A68_BOOL ,void *));
typedef struct A68t96  A68_96 ;    /* PROC(REF MODE97,BOOL) VOID */
struct A68t99{
A68_INT  Rdenno;
A_PAD_INT(PAD_10)
};
typedef struct A68t99  A68_99 ;    /* STRUCT(INT)  */
struct A68t100{
A68_INT  Idno;
A_PAD_INT(PAD_11)
};
typedef struct A68t100  A68_100 ;    /* STRUCT(INT)  */
struct A68t101{
struct A68t56  Name;
A_PAD_ISTRUCT(A68_56 ,PAD_12)
A68_INT  Mode;
A_PAD_INT(PAD_13)
};
typedef struct A68t101  A68_101 ;    /* STRUCT(MODE56,INT)  */
struct A68t102{
A68_INT  Nse;
A_PAD_INT(PAD_14)
};
typedef struct A68t102  A68_102 ;    /* STRUCT(INT)  */
struct A68t103{
A68_INT  Fn;
A_PAD_INT(PAD_15)
A68_INT  Param;
A_PAD_INT(PAD_16)
struct A68t104 * Operands;
};
typedef struct A68t103  A68_103 ;    /* STRUCT(INT,INT,REF MODE104)  */
struct A68t98 { A68_INT mode; union {
A68_LBITS  mode1;
struct A68t99  mode2;
struct A68t100  mode4;
struct A68t101  mode5;
A68_VC  mode6;
struct A68t57  mode7;
struct A68t102  mode8;
struct A68t103  mode9;
} data; };
typedef struct A68t98  A68_98 ;    /* UNION(LONG BITS,MODE99,VOID,MODE100,MODE101,MODE26,MODE57,MODE102,MODE103)  */
struct A68t97{
A68_INT  Mode;
A_PAD_INT(PAD_17)
A68_BITS  Info;
A_PAD_BITS(PAD_18)
struct A68t98  Extra;
};
typedef struct A68t97  A68_97 ;    /* STRUCT(INT,BITS,MODE98)  */
struct A68t104{
struct A68t97  Value;
struct A68t104 * Rest;
};
typedef struct A68t104  A68_104 ;    /* STRUCT(MODE97,REF MODE104)  */

A_PROCEDURE(A68_VOID ,A68t105,(struct A68t97 *),(struct A68t97 *,void *));
typedef struct A68t105  A68_105 ;    /* PROC(REF MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t106,(struct A68t104 **),(struct A68t104 **,void *));
typedef struct A68t106  A68_106 ;    /* PROC(REF REF MODE104) VOID */
struct A68t107{
A68_INT  Mode;
A_PAD_INT(PAD_19)
A68_INT  Cvariabletype;
A_PAD_INT(PAD_20)
struct A68t72  Environ;
A68_VC  Name;
A68_VC  C_name;
struct A68t56  Prefix;
A_PAD_ISTRUCT(A68_56 ,PAD_21)
A68_BITS  Flags;
A_PAD_BITS(PAD_22)
A68_VC  Definition;
A68_VC  Rhs;
};
typedef struct A68t107  A68_107 ;    /* STRUCT(INT,INT,MODE72,REF MODE26,REF MODE26,MODE56,BITS,REF MODE26,REF MODE26)  */
struct A68t108{
A68_INT  Mode;
A_PAD_INT(PAD_23)
A68_INT  Resultmode;
A_PAD_INT(PAD_24)
A68_INT  Declevel;
A_PAD_INT(PAD_25)
struct A68t72  Environ;
A68_VC  Name;
struct A68t56  Prefix;
A_PAD_ISTRUCT(A68_56 ,PAD_26)
struct A68t56  Fnprefix;
A_PAD_ISTRUCT(A68_56 ,PAD_27)
struct A68t56  Envprefix;
A_PAD_ISTRUCT(A68_56 ,PAD_28)
A68_BITS  Flags;
A_PAD_BITS(PAD_29)
};
typedef struct A68t108  A68_108 ;    /* STRUCT(INT,INT,INT,MODE72,REF MODE26,MODE56,MODE56,MODE56,BITS)  */
struct A68t109{
struct A68t55  Label;
struct A68t72  Environ;
A68_VC  Name;
struct A68t56  Prefix;
A_PAD_ISTRUCT(A68_56 ,PAD_30)
A68_BITS  Flags;
A_PAD_BITS(PAD_31)
A68_INT  Alias;
A_PAD_INT(PAD_32)
};
typedef struct A68t109  A68_109 ;    /* STRUCT(MODE55,MODE72,REF MODE26,MODE56,BITS,INT)  */

A_PROCEDURE(struct A68t107 *,A68t110,(A68_INT ),(A68_INT ,void *));
typedef struct A68t110  A68_110 ;    /* PROC(INT) REF MODE107 */

A_PROCEDURE(A68_VOID ,A68t111,(A68_VC ,struct A68t56 ,A68_INT ,A68_INT ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_VC ,A68_VC ),(A68_VC ,struct A68t56 ,A68_INT ,A68_INT ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_VC ,A68_VC ,void *));
typedef struct A68t111  A68_111 ;    /* PROC(REF MODE26,MODE56,INT,INT,BOOL,BOOL,BOOL,BOOL,BOOL,REF MODE26,REF MODE26) VOID */
A_ROW(struct A68t107 ,A68t112,1);
typedef struct A68t112  A68_112 ;    /* [] MODE107 */
A_ROW(struct A68t108 ,A68t113,1);
typedef struct A68t113  A68_113 ;    /* [] MODE108 */
A_ROW(struct A68t109 ,A68t114,1);
typedef struct A68t114  A68_114 ;    /* [] MODE109 */
struct A68t116 ;

A_PROCEDURE(A68_VOID ,A68t115,(A68_INT ,A68_INT ,A68_INT ,A68_INT ,struct A68t116 ),(A68_INT ,A68_INT ,A68_INT ,A68_INT ,struct A68t116 ,void *));
typedef struct A68t115  A68_115 ;    /* PROC(INT,INT,INT,INT,REF MODE116) VOID */
A_ROW(A68_INT ,A68t116,1);
typedef struct A68t116  A68_116 ;    /* [] INT */

A_PROCEDURE(A68_BOOL ,A68t117,(A68_VC ),(A68_VC ,void *));
typedef struct A68t117  A68_117 ;    /* PROC(MODE26) BOOL */

A_PROCEDURE(A68_VOID ,A68t118,(A68_INT ,struct A68t72 *),(A68_INT ,struct A68t72 *,void *));
typedef struct A68t118  A68_118 ;    /* PROC(INT) MODE72 */
struct A68t119{
A68_INT  Mode;
A_PAD_INT(PAD_33)
A68_VC  String;
};
typedef struct A68t119  A68_119 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t120{
A68_INT  I;
A_PAD_INT(PAD_34)
};
typedef struct A68t120  A68_120 ;    /* STRUCT(INT)  */
struct A68t121{
A68_INT  Body;
A_PAD_INT(PAD_35)
A68_INT  Moduleno;
A_PAD_INT(PAD_36)
struct A68t116  Actuals;
};
typedef struct A68t121  A68_121 ;    /* STRUCT(INT,INT,REF MODE116)  */
struct A68t122{
A68_INT  Mode;
A_PAD_INT(PAD_37)
A68_INT  Number;
A_PAD_INT(PAD_38)
A68_VC  Insert;
};
typedef struct A68t122  A68_122 ;    /* STRUCT(INT,INT,REF MODE26)  */
struct A68t124{
A68_INT  Moduleno;
A_PAD_INT(PAD_39)
A68_INT  I;
A_PAD_INT(PAD_40)
A68_INT  J;
A_PAD_INT(PAD_41)
};
typedef struct A68t124  A68_124 ;    /* STRUCT(INT,INT,INT)  */
A_ROW(A68_VC ,A68t126,1);
typedef struct A68t126  A68_126 ;    /* [] REF MODE26 */
struct A68t125{
A68_INT  Moduleno;
A_PAD_INT(PAD_42)
A68_VC  Name;
A68_VC  Uname;
A68_VC  Lname;
A68_VC  Gname;
struct A68t126  Ysnames;
};
typedef struct A68t125  A68_125 ;    /* STRUCT(INT,REF MODE26,REF MODE26,REF MODE26,REF MODE26,REF MODE126)  */
struct A68t123 { A68_INT mode; union {
struct A68t121  mode1;
struct A68t124  mode2;
struct A68t125  mode3;
} data; };
typedef struct A68t123  A68_123 ;    /* UNION(MODE121,MODE124,MODE125)  */
struct A68t128{
A68_INT  Nochars;
A_PAD_INT(PAD_43)
A68_INT  Nocases;
A_PAD_INT(PAD_44)
A68_INT  W;
A_PAD_INT(PAD_45)
};
typedef struct A68t128  A68_128 ;    /* STRUCT(INT,INT,INT)  */
struct A68t127{
struct A68t128  Info;
A68_VC  Text;
};
typedef struct A68t127  A68_127 ;    /* STRUCT(MODE128,REF MODE26)  */
struct A68t129{
A68_INT  Type;
A_PAD_INT(PAD_46)
A68_VC  Name;
A68_INT  Mode;
A_PAD_INT(PAD_47)
A68_INT  Decno;
A_PAD_INT(PAD_48)
};
typedef struct A68t129  A68_129 ;    /* STRUCT(INT,REF MODE26,INT,INT)  */
struct A68t130{
A68_VC  Representation;
};
typedef struct A68t130  A68_130 ;    /* STRUCT(REF MODE26)  */
struct A68t132{
A68_INT  Mode;
A_PAD_INT(PAD_49)
A68_VC  Nu;
};
typedef struct A68t132  A68_132 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t133{
A68_INT  Mode;
A_PAD_INT(PAD_50)
A68_LBITS  Denotation;
A_PAD_LBITS(PAD_51)
};
typedef struct A68t133  A68_133 ;    /* STRUCT(INT,LONG BITS)  */
struct A68t134{
A68_INT  Mode;
A_PAD_INT(PAD_52)
A68_VC  Denotation;
};
typedef struct A68t134  A68_134 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t135{
A68_INT  Fn;
A_PAD_INT(PAD_53)
A68_INT  Mode;
A_PAD_INT(PAD_54)
A68_INT  Param;
A_PAD_INT(PAD_55)
};
typedef struct A68t135  A68_135 ;    /* STRUCT(INT,INT,INT)  */
struct A68t136{
A68_VC  Name;
A68_BITS  Props;
A_PAD_BITS(PAD_56)
A68_INT  Mode;
A_PAD_INT(PAD_57)
A68_INT  Rdenno;
A_PAD_INT(PAD_58)
A68_INT  Maxname;
A_PAD_INT(PAD_59)
};
typedef struct A68t136  A68_136 ;    /* STRUCT(REF MODE26,BITS,INT,INT,INT)  */
struct A68t137{
A68_INT  W;
A_PAD_INT(PAD_60)
};
typedef struct A68t137  A68_137 ;    /* STRUCT(INT)  */
struct A68t138{
A68_VC  Name;
A68_INT  Labno;
A_PAD_INT(PAD_61)
A68_INT  Status;
A_PAD_INT(PAD_62)
A68_BOOL  Notsetting;
A_PAD_BOOL(PAD_63)
};
typedef struct A68t138  A68_138 ;    /* STRUCT(REF MODE26,INT,INT,BOOL)  */
struct A68t139{
A68_INT  Mode;
A_PAD_INT(PAD_64)
A68_BITS  Props;
A_PAD_BITS(PAD_65)
A68_INT  Param;
A_PAD_INT(PAD_66)
};
typedef struct A68t139  A68_139 ;    /* STRUCT(INT,BITS,INT)  */
struct A68t140{
A68_BOOL  Start;
A_PAD_BOOL(PAD_67)
};
typedef struct A68t140  A68_140 ;    /* STRUCT(BOOL)  */
struct A68t141{
A68_INT  Fn;
A_PAD_INT(PAD_68)
A68_INT  Mode;
A_PAD_INT(PAD_69)
A68_BITS  Props;
A_PAD_BITS(PAD_70)
A68_INT  Param;
A_PAD_INT(PAD_71)
};
typedef struct A68t141  A68_141 ;    /* STRUCT(INT,INT,BITS,INT)  */
struct A68t142{
A68_INT  Fn;
A_PAD_INT(PAD_72)
A68_INT  Mode;
A_PAD_INT(PAD_73)
A68_BITS  Props;
A_PAD_BITS(PAD_74)
A68_INT  Resultmode;
A_PAD_INT(PAD_75)
};
typedef struct A68t142  A68_142 ;    /* STRUCT(INT,INT,BITS,INT)  */
struct A68t143{
A68_INT  Fn;
A_PAD_INT(PAD_76)
A68_BITS  Props;
A_PAD_BITS(PAD_77)
};
typedef struct A68t143  A68_143 ;    /* STRUCT(INT,BITS)  */
struct A68t131 { A68_INT mode; union {
struct A68t102  mode1;
A68_INT  mode2;
A68_BOOL  mode3;
struct A68t130  mode4;
struct A68t57  mode5;
struct A68t132  mode6;
struct A68t119  mode7;
struct A68t133  mode8;
struct A68t134  mode9;
struct A68t135  mode10;
struct A68t129  mode11;
struct A68t136  mode12;
struct A68t137  mode13;
struct A68t138  mode14;
struct A68t139  mode15;
struct A68t120  mode16;
struct A68t140  mode17;
struct A68t127  mode18;
struct A68t122  mode19;
struct A68t141  mode20;
struct A68t142  mode21;
struct A68t143  mode22;
struct A68t121  mode23;
struct A68t124  mode24;
struct A68t125  mode25;
} data; };
typedef struct A68t131  A68_131 ;    /* UNION(MODE102,INT,BOOL,MODE130,MODE57,MODE132,MODE119,MODE133,MODE134,MODE135,MODE129,MODE136,MODE137,MODE138,MODE139,MODE120,MODE140,MODE127,MODE122,MODE141,MODE142,MODE143,MODE121,MODE124,MODE125,VOID)  */
struct A68t144 { A68_INT mode; union {
struct A68t102  mode1;
A68_INT  mode2;
A68_BOOL  mode3;
struct A68t130  mode4;
struct A68t57  mode5;
struct A68t132  mode6;
struct A68t119  mode7;
struct A68t133  mode8;
struct A68t134  mode9;
} data; };
typedef struct A68t144  A68_144 ;    /* UNION(MODE102,INT,BOOL,MODE130,MODE57,MODE132,MODE119,MODE133,MODE134)  */
struct A68t145 { A68_INT mode; union {
struct A68t102  mode1;
A68_INT  mode2;
A68_BOOL  mode3;
struct A68t130  mode4;
struct A68t57  mode5;
struct A68t132  mode6;
struct A68t119  mode7;
struct A68t133  mode8;
struct A68t134  mode9;
struct A68t135  mode10;
struct A68t129  mode11;
struct A68t136  mode12;
struct A68t137  mode13;
struct A68t138  mode14;
struct A68t139  mode15;
struct A68t120  mode16;
struct A68t140  mode17;
struct A68t127  mode18;
struct A68t122  mode19;
} data; };
typedef struct A68t145  A68_145 ;    /* UNION(MODE102,INT,BOOL,MODE130,MODE57,MODE132,MODE119,MODE133,MODE134,MODE135,MODE129,MODE136,MODE137,MODE138,MODE139,MODE120,MODE140,MODE127,MODE122)  */
A_ISTRUCT(A68_CHAR ,32,A68t147);
typedef struct A68t147  A68_147 ;    /* STRUCT 32 CHAR */
A_VECTOR(struct A68t152 ,A68t151);
typedef struct A68t151  A68_151 ;    /* VECTOR [] MODE152 */
A_VECTOR(struct A68t159 ,A68t158);
typedef struct A68t158  A68_158 ;    /* VECTOR [] MODE159 */
struct A68t159{
struct A68t147  N;
A_PAD_ISTRUCT(A68_147 ,PAD_78)
struct A68t147  F;
A_PAD_ISTRUCT(A68_147 ,PAD_79)
A68_INT  Level;
A_PAD_INT(PAD_80)
};
typedef struct A68t159  A68_159 ;    /* STRUCT(MODE147,MODE147,INT)  */
struct A68t157 { A68_INT mode; union {
A68_VC  mode1;
struct A68t158  mode2;
} data; };
typedef struct A68t157  A68_157 ;    /* UNION(REF MODE26,REF MODE158)  */
struct A68t153{
struct A68t147  F;
A_PAD_ISTRUCT(A68_147 ,PAD_81)
A68_INT  No;
A_PAD_INT(PAD_82)
A68_INT  Nl;
A_PAD_INT(PAD_83)
A68_INT  Ng;
A_PAD_INT(PAD_84)
struct A68t157  U;
};
typedef struct A68t153  A68_153 ;    /* STRUCT(MODE147,INT,INT,INT,MODE157)  */
A_VECTOR(struct A68t156 ,A68t154);
typedef struct A68t154  A68_154 ;    /* VECTOR [] MODE156 */
struct A68t156{
struct A68t56  Prefix;
A_PAD_ISTRUCT(A68_56 ,PAD_85)
A68_BOOL  Optimised;
A_PAD_BOOL(PAD_86)
A68_BOOL  Iddec;
A_PAD_BOOL(PAD_87)
A68_BOOL  Globalproc;
A_PAD_BOOL(PAD_88)
A68_BOOL  Keptgenproc;
A_PAD_BOOL(PAD_89)
A68_BOOL  Forceuse;
A_PAD_BOOL(PAD_90)
A68_VC  Definition;
A68_VC  Rhs;
};
typedef struct A68t156  A68_156 ;    /* STRUCT(MODE56,BOOL,BOOL,BOOL,BOOL,BOOL,REF MODE26,REF MODE26)  */
A_VECTOR(struct A68t56 ,A68t155);
typedef struct A68t155  A68_155 ;    /* VECTOR [] MODE56 */
struct A68t152{
struct A68t153  Xs;
struct A68t56  Ys;
A_PAD_ISTRUCT(A68_56 ,PAD_91)
A68_LINT  Timeoflastchange;
A_PAD_LINT(PAD_92)
struct A68t154  Keptinfo;
struct A68t155  Cnames;
};
typedef struct A68t152  A68_152 ;    /* STRUCT(MODE153,MODE56,LONG INT,REF MODE154,REF MODE155)  */
struct A68t148{
struct A68t56  Uname;
A_PAD_ISTRUCT(A68_56 ,PAD_93)
struct A68t56  Lname;
A_PAD_ISTRUCT(A68_56 ,PAD_94)
struct A68t56  Gname;
A_PAD_ISTRUCT(A68_56 ,PAD_95)
struct A68t151  Specs;
};
typedef struct A68t148  A68_148 ;    /* STRUCT(MODE56,MODE56,MODE56,REF MODE151)  */
struct A68t146{
struct A68t147  Name;
A_PAD_ISTRUCT(A68_147 ,PAD_96)
struct A68t148  Ym;
struct A68t56  Ys;
A_PAD_ISTRUCT(A68_56 ,PAD_97)
A68_INT  Level;
A_PAD_INT(PAD_98)
struct A68t149 * Ids;
struct A68t150 * Uses;
struct A68t146 * Rest;
};
typedef struct A68t146  A68_146 ;    /* STRUCT(MODE147,MODE148,MODE56,INT,REF MODE149,REF MODE150,REF MODE146)  */
struct A68t149{
struct A68t147  Name;
A_PAD_ISTRUCT(A68_147 ,PAD_99)
struct A68t56  Uname;
A_PAD_ISTRUCT(A68_56 ,PAD_100)
A68_BOOL  Optimised;
A_PAD_BOOL(PAD_101)
A68_BOOL  Iddec;
A_PAD_BOOL(PAD_102)
A68_BOOL  Globalproc;
A_PAD_BOOL(PAD_103)
A68_BOOL  Genproc;
A_PAD_BOOL(PAD_104)
A68_BOOL  Forceuse;
A_PAD_BOOL(PAD_105)
A68_INT  Mode;
A_PAD_INT(PAD_106)
A68_INT  Decno;
A_PAD_INT(PAD_107)
A68_VC  Definition;
A68_VC  Rhs;
struct A68t149 * Rest;
};
typedef struct A68t149  A68_149 ;    /* STRUCT(MODE147,MODE56,BOOL,BOOL,BOOL,BOOL,BOOL,INT,INT,REF MODE26,REF MODE26,REF MODE149)  */
struct A68t150{
struct A68t147  Name;
A_PAD_ISTRUCT(A68_147 ,PAD_108)
struct A68t56  Uname;
A_PAD_ISTRUCT(A68_56 ,PAD_109)
struct A68t149 * Ids;
struct A68t150 * Rest;
};
typedef struct A68t150  A68_150 ;    /* STRUCT(MODE147,MODE56,REF MODE149,REF MODE150)  */
struct A68t161{
struct A68t147  Name;
A_PAD_ISTRUCT(A68_147 ,PAD_110)
struct A68t159  L;
struct A68t159  G;
A68_INT  Type;
A_PAD_INT(PAD_111)
};
typedef struct A68t161  A68_161 ;    /* STRUCT(MODE147,MODE159,MODE159,INT)  */
struct A68t162{
struct A68t56  L;
A_PAD_ISTRUCT(A68_56 ,PAD_112)
struct A68t56  G;
A_PAD_ISTRUCT(A68_56 ,PAD_113)
};
typedef struct A68t162  A68_162 ;    /* STRUCT(MODE56,MODE56)  */
struct A68t160{
struct A68t56  Uname;
A_PAD_ISTRUCT(A68_56 ,PAD_114)
struct A68t161  Xmi;
struct A68t162  Checkinfo;
};
typedef struct A68t160  A68_160 ;    /* STRUCT(MODE56,MODE161,MODE162)  */
struct A68t164 ;

A_PROCEDURE(A68_VOID ,A68t163,(struct A68t164 ),(struct A68t164 ,void *));
typedef struct A68t163  A68_163 ;    /* PROC(MODE164) VOID */
struct A68t164{
struct A68t147  Name;
A_PAD_ISTRUCT(A68_147 ,PAD_115)
struct A68t148  Ym;
struct A68t147  Formal;
A_PAD_ISTRUCT(A68_147 ,PAD_116)
struct A68t56  Ys;
A_PAD_ISTRUCT(A68_56 ,PAD_117)
A68_INT  Level;
A_PAD_INT(PAD_118)
A68_INT  Ownlevel;
A_PAD_INT(PAD_119)
};
typedef struct A68t164  A68_164 ;    /* STRUCT(MODE147,MODE148,MODE147,MODE56,INT,INT)  */
struct A68t166 ;

A_PROCEDURE(A68_VOID ,A68t165,(struct A68t166 ,A68_INT ),(struct A68t166 ,A68_INT ,void *));
typedef struct A68t165  A68_165 ;    /* PROC(MODE166,INT) VOID */
struct A68t166{
A68_INT  Type;
A_PAD_INT(PAD_120)
A68_INT  Moduleno;
A_PAD_INT(PAD_121)
struct A68t147  Name;
A_PAD_ISTRUCT(A68_147 ,PAD_122)
struct A68t148  Ym;
};
typedef struct A68t166  A68_166 ;    /* STRUCT(INT,INT,MODE147,MODE148)  */
struct A68t168 ;

A_PROCEDURE(A68_VOID ,A68t167,(struct A68t168 ),(struct A68t168 ,void *));
typedef struct A68t167  A68_167 ;    /* PROC(MODE168) VOID */
struct A68t168{
struct A68t147  Name;
A_PAD_ISTRUCT(A68_147 ,PAD_123)
A68_INT  Decno;
A_PAD_INT(PAD_124)
A68_INT  Level;
A_PAD_INT(PAD_125)
A68_INT  Mode;
A_PAD_INT(PAD_126)
A68_INT  Scope;
A_PAD_INT(PAD_127)
struct A68t168 * Rest;
};
typedef struct A68t168  A68_168 ;    /* STRUCT(MODE147,INT,INT,INT,INT,REF MODE168)  */
A_ROW(struct A68t146 *,A68t169,1);
typedef struct A68t169  A68_169 ;    /* [] REF MODE146 */
struct A68t171 ;

A_PROCEDURE(A68_VOID ,A68t170,(struct A68t147 ,A68_INT ,A68_BOOL ,struct A68t171 *),(struct A68t147 ,A68_INT ,A68_BOOL ,struct A68t171 *,void *));
typedef struct A68t170  A68_170 ;    /* PROC(MODE147,INT,BOOL) MODE171 */
struct A68t171{
struct A68t161  Xmi;
struct A68t148  Ym;
};
typedef struct A68t171  A68_171 ;    /* STRUCT(MODE161,MODE148)  */
struct A68t173 ;

A_PROCEDURE(A68_VOID ,A68t172,(struct A68t147 ,struct A68t147 ,struct A68t148 ,struct A68t173 *),(struct A68t147 ,struct A68t147 ,struct A68t148 ,struct A68t173 *,void *));
typedef struct A68t172  A68_172 ;    /* PROC(MODE147,MODE147,MODE148) MODE173 */
struct A68t173{
struct A68t153  Xs;
struct A68t56  Ys;
A_PAD_ISTRUCT(A68_56 ,PAD_128)
};
typedef struct A68t173  A68_173 ;    /* STRUCT(MODE153,MODE56)  */

A_PROCEDURE(A68_VOID ,A68t174,(struct A68t161 ),(struct A68t161 ,void *));
typedef struct A68t174  A68_174 ;    /* PROC(MODE161) VOID */

A_PROCEDURE(A68_VOID ,A68t175,(struct A68t153 ),(struct A68t153 ,void *));
typedef struct A68t175  A68_175 ;    /* PROC(MODE153) VOID */
A_ROW(struct A68t152 ,A68t176,1);
typedef struct A68t176  A68_176 ;    /* [] MODE152 */
struct A68t177{
A68_INT  Parameters;
A_PAD_INT(PAD_129)
A68_INT  Result;
A_PAD_INT(PAD_130)
A68_BOOL  Hasdescriptors;
A_PAD_BOOL(PAD_131)
};
typedef struct A68t177  A68_177 ;    /* STRUCT(INT,INT,BOOL)  */
struct A68t178{
A68_INT  Mode;
A_PAD_INT(PAD_132)
A68_INT  Offset;
A_PAD_INT(PAD_133)
struct A68t147  Name;
A_PAD_ISTRUCT(A68_147 ,PAD_134)
};
typedef struct A68t178  A68_178 ;    /* STRUCT(INT,INT,MODE147)  */
struct A68t180 ;

A_PROCEDURE(A68_VOID ,A68t179,(A68_INT ,struct A68t180 *),(A68_INT ,struct A68t180 *,void *));
typedef struct A68t179  A68_179 ;    /* PROC(INT) REF MODE180 */
A_VECTOR(A68_INT ,A68t180);
typedef struct A68t180  A68_180 ;    /* VECTOR [] INT */

A_PROCEDURE(A68_VOID ,A68t181,(struct A68t178 *,A68_VC *),(struct A68t178 *,A68_VC *,void *));
typedef struct A68t181  A68_181 ;    /* PROC(REF MODE178) MODE26 */

A_PROCEDURE(A68_VOID ,A68t182,(A68_INT ,A68_VC ,struct A68t101 *),(A68_INT ,A68_VC ,struct A68t101 *,void *));
typedef struct A68t182  A68_182 ;    /* PROC(INT,MODE26) MODE101 */
struct A68t184 ;

A_PROCEDURE(A68_VOID ,A68t183,(struct A68t184 ,A68_INT ),(struct A68t184 ,A68_INT ,void *));
typedef struct A68t183  A68_183 ;    /* PROC(REF MODE184,INT) VOID */
A_ROW(struct A68t185 ,A68t184,1);
typedef struct A68t184  A68_184 ;    /* [] MODE185 */
struct A68t195{
A68_INT  Mode;
A_PAD_INT(PAD_135)
};
typedef struct A68t195  A68_195 ;    /* STRUCT(INT)  */
struct A68t185 { A68_INT mode; union {
A68_INT  mode1;
struct A68t186 * mode2;
struct A68t187 * mode3;
struct A68t188 * mode4;
struct A68t189 * mode5;
struct A68t190 * mode6;
struct A68t191 * mode7;
struct A68t192 * mode8;
struct A68t193 * mode9;
struct A68t194 * mode10;
struct A68t195  mode11;
} data; };
typedef struct A68t185  A68_185 ;    /* UNION(INT,REF MODE186,REF MODE187,REF MODE188,REF MODE189,REF MODE190,REF MODE191,REF MODE192,REF MODE193,REF MODE194,MODE195)  */
struct A68t186{
A68_INT  Rdenno;
A_PAD_INT(PAD_136)
struct A68t199 * Modelist;
};
typedef struct A68t186  A68_186 ;    /* STRUCT(INT,REF MODE199)  */
struct A68t187{
A68_INT  Deproc;
A_PAD_INT(PAD_137)
struct A68t199 * Pars;
};
typedef struct A68t187  A68_187 ;    /* STRUCT(INT,REF MODE199)  */
struct A68t188{
A68_INT  Rdenno;
A_PAD_INT(PAD_138)
A68_INT  Deflex;
A_PAD_INT(PAD_139)
struct A68t198 * Sels;
};
typedef struct A68t188  A68_188 ;    /* STRUCT(INT,INT,REF MODE198)  */
struct A68t189{
A68_INT  Rdenno;
A_PAD_INT(PAD_140)
A68_INT  Imode;
A_PAD_INT(PAD_141)
A68_INT  Length;
A_PAD_INT(PAD_142)
A68_INT  Deflex;
A_PAD_INT(PAD_143)
};
typedef struct A68t189  A68_189 ;    /* STRUCT(INT,INT,INT,INT)  */
struct A68t190{
A68_INT  Deproc;
A_PAD_INT(PAD_144)
};
typedef struct A68t190  A68_190 ;    /* STRUCT(INT)  */
struct A68t191{
A68_INT  Rdenno;
A_PAD_INT(PAD_145)
A68_INT  Vecmode;
A_PAD_INT(PAD_146)
A68_INT  Deflex;
A_PAD_INT(PAD_147)
};
typedef struct A68t191  A68_191 ;    /* STRUCT(INT,INT,INT)  */
struct A68t192{
A68_INT  Rdenno;
A_PAD_INT(PAD_148)
A68_INT  Mode;
A_PAD_INT(PAD_149)
A68_INT  Nods;
A_PAD_INT(PAD_150)
A68_INT  Deflex;
A_PAD_INT(PAD_151)
};
typedef struct A68t192  A68_192 ;    /* STRUCT(INT,INT,INT,INT)  */
struct A68t193{
A68_INT  Mode;
A_PAD_INT(PAD_152)
struct A68t197 * Stenlist;
};
typedef struct A68t193  A68_193 ;    /* STRUCT(INT,REF MODE197)  */
struct A68t194{
A68_INT  Mode;
A_PAD_INT(PAD_153)
A68_INT  Modeproc;
A_PAD_INT(PAD_154)
struct A68t196 * El;
};
typedef struct A68t194  A68_194 ;    /* STRUCT(INT,INT,REF MODE196)  */
struct A68t196{
struct A68t194 * Am;
struct A68t196 * Rest;
};
typedef struct A68t196  A68_196 ;    /* STRUCT(REF MODE194,REF MODE196)  */
struct A68t197{
A68_INT  Mode;
A_PAD_INT(PAD_155)
A68_INT  Rdenno;
A_PAD_INT(PAD_156)
struct A68t197 * Rest;
};
typedef struct A68t197  A68_197 ;    /* STRUCT(INT,INT,REF MODE197)  */
struct A68t198{
A68_INT  Mode;
A_PAD_INT(PAD_157)
A68_INT  Fieldno;
A_PAD_INT(PAD_158)
struct A68t147  Name;
A_PAD_ISTRUCT(A68_147 ,PAD_159)
struct A68t198 * Rest;
};
typedef struct A68t198  A68_198 ;    /* STRUCT(INT,INT,MODE147,REF MODE198)  */
struct A68t199{
A68_INT  Mode;
A_PAD_INT(PAD_160)
struct A68t199 * Rest;
};
typedef struct A68t199  A68_199 ;    /* STRUCT(INT,REF MODE199)  */

A_PROCEDURE(A68_VOID ,A68t200,(A68_INT ,struct A68t177 *),(A68_INT ,struct A68t177 *,void *));
typedef struct A68t200  A68_200 ;    /* PROC(INT) MODE177 */
struct A68t202 ;

A_PROCEDURE(A68_VOID ,A68t201,(A68_INT ,struct A68t202 *),(A68_INT ,struct A68t202 *,void *));
typedef struct A68t201  A68_201 ;    /* PROC(INT) REF MODE202 */
A_VECTOR(struct A68t178 ,A68t202);
typedef struct A68t202  A68_202 ;    /* VECTOR [] MODE178 */

A_PROCEDURE(A68_INT ,A68t203,(A68_INT ,A68_BOOL ),(A68_INT ,A68_BOOL ,void *));
typedef struct A68t203  A68_203 ;    /* PROC(INT,BOOL) INT */

A_PROCEDURE(A68_VOID ,A68t204,(A68_INT ,A68_INT ,A68_VC *),(A68_INT ,A68_INT ,A68_VC *,void *));
typedef struct A68t204  A68_204 ;    /* PROC(INT,INT) MODE26 */

A_PROCEDURE(A68_BOOL ,A68t205,(A68_INT ,A68_VC ),(A68_INT ,A68_VC ,void *));
typedef struct A68t205  A68_205 ;    /* PROC(INT,MODE26) BOOL */

A_PROCEDURE(A68_INT ,A68t206,(struct A68t180 ,struct A68t180 ),(struct A68t180 ,struct A68t180 ,void *));
typedef struct A68t206  A68_206 ;    /* PROC(REF MODE180,REF MODE180) INT */

A_PROCEDURE(A68_VOID ,A68t207,(A68_INT ,struct A68t180 ,struct A68t116 *),(A68_INT ,struct A68t180 ,struct A68t116 *,void *));
typedef struct A68t207  A68_207 ;    /* PROC(INT,REF MODE180) MODE116 */

A_PROCEDURE(A68_VOID ,A68t208,(struct A68t180 ,struct A68t180 ,A68_VC *),(struct A68t180 ,struct A68t180 ,A68_VC *,void *));
typedef struct A68t208  A68_208 ;    /* PROC(REF MODE180,REF MODE180) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t209,(struct A68t89 ),(struct A68t89 ,void *));
typedef struct A68t209  A68_209 ;    /* PROC(MODE89) VOID */

A_PROCEDURE(struct A68t56 ,A68t210,(void),(void *));
typedef struct A68t210  A68_210 ;    /* PROC MODE56 */

A_PROCEDURE(A68_VOID ,A68t211,(struct A68t56 ),(struct A68t56 ,void *));
typedef struct A68t211  A68_211 ;    /* PROC(MODE56) VOID */

A_PROCEDURE(A68_VOID ,A68t212,(struct A68t89 ,A68_VC *),(struct A68t89 ,A68_VC *,void *));
typedef struct A68t212  A68_212 ;    /* PROC(MODE89) MODE26 */

A_PROCEDURE(A68_BOOL ,A68t213,(struct A68t97 *,struct A68t97 *),(struct A68t97 *,struct A68t97 *,void *));
typedef struct A68t213  A68_213 ;    /* PROC(REF MODE97,REF MODE97) BOOL */

A_PROCEDURE(A68_BOOL ,A68t214,(struct A68t97 *),(struct A68t97 *,void *));
typedef struct A68t214  A68_214 ;    /* PROC(REF MODE97) BOOL */

A_PROCEDURE(A68_BOOL ,A68t215,(struct A68t97 *,A68_LBITS ),(struct A68t97 *,A68_LBITS ,void *));
typedef struct A68t215  A68_215 ;    /* PROC(REF MODE97,LONG BITS) BOOL */

A_PROCEDURE(A68_LBITS ,A68t216,(struct A68t97 *),(struct A68t97 *,void *));
typedef struct A68t216  A68_216 ;    /* PROC(REF MODE97) LONG BITS */

A_PROCEDURE(A68_VOID ,A68t217,(struct A68t97 *,A68_VC *),(struct A68t97 *,A68_VC *,void *));
typedef struct A68t217  A68_217 ;    /* PROC(REF MODE97) MODE26 */

A_PROCEDURE(struct A68t97 *,A68t218,(struct A68t97 *,A68_INT ),(struct A68t97 *,A68_INT ,void *));
typedef struct A68t218  A68_218 ;    /* PROC(REF MODE97,INT) REF MODE97 */

A_PROCEDURE(A68_INT ,A68t219,(struct A68t103 ),(struct A68t103 ,void *));
typedef struct A68t219  A68_219 ;    /* PROC(MODE103) INT */
struct A68t220{
struct A68t97 * Value;
struct A68t55 * End;
A68_INT  Type;
A_PAD_INT(PAD_161)
};
typedef struct A68t220  A68_220 ;    /* STRUCT(REF MODE97,REF MODE55,INT)  */

A_PROCEDURE(A68_BOOL ,A68t221,(struct A68t97 *,A68_BITS ),(struct A68t97 *,A68_BITS ,void *));
typedef struct A68t221  A68_221 ;    /* PROC(REF MODE97,BITS) BOOL */

A_PROCEDURE(struct A68t97 *,A68t222,(struct A68t104 *,A68_INT ),(struct A68t104 *,A68_INT ,void *));
typedef struct A68t222  A68_222 ;    /* PROC(REF MODE104,INT) REF MODE97 */

A_PROCEDURE(struct A68t104 *,A68t223,(struct A68t104 *),(struct A68t104 *,void *));
typedef struct A68t223  A68_223 ;    /* PROC(REF MODE104) REF MODE104 */
struct A68t225 ;

A_PROCEDURE(struct A68t97 *,A68t224,(A68_INT ,A68_INT ,A68_BITS ,struct A68t225 ),(A68_INT ,A68_INT ,A68_BITS ,struct A68t225 ,void *));
typedef struct A68t224  A68_224 ;    /* PROC(INT,INT,BITS,MODE225) REF MODE97 */
A_VECTOR(struct A68t97 *,A68t225);
typedef struct A68t225  A68_225 ;    /* VECTOR [] REF MODE97 */

A_PROCEDURE(A68_VOID ,A68t226,(struct A68t97 *,A68_BOOL ,A68_VC *),(struct A68t97 *,A68_BOOL ,A68_VC *,void *));
typedef struct A68t226  A68_226 ;    /* PROC(REF MODE97,BOOL) MODE26 */

A_PROCEDURE(A68_LINT ,A68t227,(struct A68t97 ),(struct A68t97 ,void *));
typedef struct A68t227  A68_227 ;    /* PROC(MODE97) LONG INT */
struct A68t228 { A68_INT mode; union {
struct A68t97 * mode1;
A68_VC  mode2;
struct A68t101  mode3;
} data; };
typedef struct A68t228  A68_228 ;    /* UNION(REF MODE97,MODE26,MODE101)  */

A_PROCEDURE(A68_VOID ,A68t229,(struct A68t228 ,A68_VC *),(struct A68t228 ,A68_VC *,void *));
typedef struct A68t229  A68_229 ;    /* PROC(MODE228) MODE26 */
struct A68t231 ;

A_PROCEDURE(A68_VOID ,A68t230,(struct A68t231 ,A68_VC *),(struct A68t231 ,A68_VC *,void *));
typedef struct A68t230  A68_230 ;    /* PROC(MODE231) MODE26 */
A_VECTOR(struct A68t228 ,A68t231);
typedef struct A68t231  A68_231 ;    /* VECTOR [] MODE228 */

A_PROCEDURE(A68_VOID ,A68t232,(A68_VC ,struct A68t231 ,A68_VC *),(A68_VC ,struct A68t231 ,A68_VC *,void *));
typedef struct A68t232  A68_232 ;    /* PROC(MODE26,MODE231) MODE26 */

A_PROCEDURE(A68_VOID ,A68t233,(struct A68t231 ),(struct A68t231 ,void *));
typedef struct A68t233  A68_233 ;    /* PROC(MODE231) VOID */

A_PROCEDURE(A68_VOID ,A68t234,(A68_VC ,A68_INT ,struct A68t231 ,struct A68t101 *),(A68_VC ,A68_INT ,struct A68t231 ,struct A68t101 *,void *));
typedef struct A68t234  A68_234 ;    /* PROC(MODE26,INT,MODE231) MODE101 */

A_PROCEDURE(struct A68t97 *,A68t235,(struct A68t97 *),(struct A68t97 *,void *));
typedef struct A68t235  A68_235 ;    /* PROC(REF MODE97) REF MODE97 */

A_PROCEDURE(struct A68t97 *,A68t236,(A68_VC ,struct A68t97 *),(A68_VC ,struct A68t97 *,void *));
typedef struct A68t236  A68_236 ;    /* PROC(MODE26,REF MODE97) REF MODE97 */

A_PROCEDURE(A68_VOID ,A68t237,(struct A68t60 ),(struct A68t60 ,void *));
typedef struct A68t237  A68_237 ;    /* PROC(MODE60) VOID */

A_PROCEDURE(A68_VOID ,A68t238,(struct A68t59 ),(struct A68t59 ,void *));
typedef struct A68t238  A68_238 ;    /* PROC(MODE59) VOID */

A_PROCEDURE(A68_VOID ,A68t239,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t239  A68_239 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,66,A68t240);
typedef struct A68t240  A68_240 ;    /* STRUCT 66 CHAR */

A_PROCEDURE(A68_VOID ,A68t241,(A68_INT ,A68_VC ),(A68_INT ,A68_VC ,void *));
typedef struct A68t241  A68_241 ;    /* PROC(INT,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,11,A68t242);
typedef struct A68t242  A68_242 ;    /* STRUCT 11 CHAR */
A_ISTRUCT(A68_CHAR ,12,A68t243);
typedef struct A68t243  A68_243 ;    /* STRUCT 12 CHAR */
A_ISTRUCT(A68_CHAR ,3,A68t244);
typedef struct A68t244  A68_244 ;    /* STRUCT 3 CHAR */

A_PROCEDURE(A68_VOID ,A68t245,(struct A68t129 ),(struct A68t129 ,void *));
typedef struct A68t245  A68_245 ;    /* PROC(MODE129) VOID */
A_ISTRUCT(A68_CHAR ,9,A68t246);
typedef struct A68t246  A68_246 ;    /* STRUCT 9 CHAR */
A_ISTRUCT(A68_CHAR ,31,A68t247);
typedef struct A68t247  A68_247 ;    /* STRUCT 31 CHAR */

A_PROCEDURE(A68_VOID ,A68t248,(A68_INT ,A68_INT ,A68_VC ,struct A68t56 ,A68_BITS ,A68_VC ,A68_VC ),(A68_INT ,A68_INT ,A68_VC ,struct A68t56 ,A68_BITS ,A68_VC ,A68_VC ,void *));
typedef struct A68t248  A68_248 ;    /* PROC(INT,INT,REF MODE26,MODE56,BITS,REF MODE26,REF MODE26) VOID */
A_ISTRUCT(A68_CHAR ,1,A68t249);
typedef struct A68t249  A68_249 ;    /* STRUCT 0 CHAR */

A_PROCEDURE(A68_VOID ,A68t250,(A68_INT ,struct A68t97 *),(A68_INT ,struct A68t97 *,void *));
typedef struct A68t250  A68_250 ;    /* PROC(INT,REF MODE97) VOID */
A_ISTRUCT(A68_CHAR ,8,A68t251);
typedef struct A68t251  A68_251 ;    /* STRUCT 8 CHAR */
A_ISTRUCT(A68_VC ,4,A68t252);
typedef struct A68t252  A68_252 ;    /* STRUCT 4 MODE26 */
A_ISTRUCT(A68_CHAR ,39,A68t253);
typedef struct A68t253  A68_253 ;    /* STRUCT 39 CHAR */
A_ISTRUCT(A68_VC ,3,A68t254);
typedef struct A68t254  A68_254 ;    /* STRUCT 3 MODE26 */
A_ISTRUCT(struct A68t66 ,2,A68t255);
typedef struct A68t255  A68_255 ;    /* STRUCT 2 MODE66 */
A_ISTRUCT(struct A68t66 ,7,A68t256);
typedef struct A68t256  A68_256 ;    /* STRUCT 7 MODE66 */
A_ISTRUCT(struct A68t66 ,5,A68t257);
typedef struct A68t257  A68_257 ;    /* STRUCT 5 MODE66 */

A_PROCEDURE(A68_VOID ,A68t258,(struct A68t129 ,struct A68t104 **),(struct A68t129 ,struct A68t104 **,void *));
typedef struct A68t258  A68_258 ;    /* PROC(MODE129,REF REF MODE104) VOID */
A_ISTRUCT(A68_CHAR ,22,A68t259);
typedef struct A68t259  A68_259 ;    /* STRUCT 22 CHAR */
A_ISTRUCT(A68_CHAR ,37,A68t260);
typedef struct A68t260  A68_260 ;    /* STRUCT 37 CHAR */

A_PROCEDURE(A68_VOID ,A68t261,(struct A68t129 ,struct A68t97 *,A68_INT ),(struct A68t129 ,struct A68t97 *,A68_INT ,void *));
typedef struct A68t261  A68_261 ;    /* PROC(MODE129,REF MODE97,INT) VOID */
A_ISTRUCT(A68_CHAR ,23,A68t262);
typedef struct A68t262  A68_262 ;    /* STRUCT 23 CHAR */
A_ISTRUCT(A68_CHAR ,10,A68t263);
typedef struct A68t263  A68_263 ;    /* STRUCT 10 CHAR */

A_PROCEDURE(struct A68t97 *,A68t264,(struct A68t97 *,struct A68t97 ),(struct A68t97 *,struct A68t97 ,void *));
typedef struct A68t264  A68_264 ;    /* PROC(REF MODE97,MODE97) REF MODE97 */

A_PROCEDURE(struct A68t98 *,A68t265,(struct A68t98 *,struct A68t98 ),(struct A68t98 *,struct A68t98 ,void *));
typedef struct A68t265  A68_265 ;    /* PROC(REF MODE98,MODE98) REF MODE98 */
#define A68_266  A68_VC 
#define A68t266 A68t26            /* FLEX VECTOR [] CHAR */
A_ISTRUCT(A68_CHAR ,2,A68t267);
typedef struct A68t267  A68_267 ;    /* STRUCT 2 CHAR */
A_ISTRUCT(struct A68t66 ,6,A68t268);
typedef struct A68t268  A68_268 ;    /* STRUCT 6 MODE66 */
A_ISTRUCT(A68_CHAR ,13,A68t269);
typedef struct A68t269  A68_269 ;    /* STRUCT 13 CHAR */
A_ISTRUCT(A68_CHAR ,25,A68t270);
typedef struct A68t270  A68_270 ;    /* STRUCT 25 CHAR */
A_ISTRUCT(struct A68t66 ,4,A68t271);
typedef struct A68t271  A68_271 ;    /* STRUCT 4 MODE66 */
A_ISTRUCT(A68_CHAR ,16,A68t272);
typedef struct A68t272  A68_272 ;    /* STRUCT 16 CHAR */
A_ISTRUCT(A68_CHAR ,6,A68t273);
typedef struct A68t273  A68_273 ;    /* STRUCT 6 CHAR */
A_ISTRUCT(A68_CHAR ,17,A68t274);
typedef struct A68t274  A68_274 ;    /* STRUCT 17 CHAR */
A_ISTRUCT(struct A68t66 ,10,A68t275);
typedef struct A68t275  A68_275 ;    /* STRUCT 10 MODE66 */

A_PROCEDURE(A68_VOID ,A68t276,(A68_INT ,A68_INT ,A68_BOOL ,A68_BOOL ,A68_BOOL ,struct A68t180 ),(A68_INT ,A68_INT ,A68_BOOL ,A68_BOOL ,A68_BOOL ,struct A68t180 ,void *));
typedef struct A68t276  A68_276 ;    /* PROC(INT,INT,BOOL,BOOL,BOOL,REF MODE180) VOID */
A_VECTOR(A68_VC ,A68t277);
typedef struct A68t277  A68_277 ;    /* VECTOR [] REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t278,(A68_BOOL ,struct A68t277 *),(A68_BOOL ,struct A68t277 *,void *));
typedef struct A68t278  A68_278 ;    /* PROC(BOOL) MODE277 */
A_ISTRUCT(struct A68t66 ,3,A68t279);
typedef struct A68t279  A68_279 ;    /* STRUCT 3 MODE66 */
A_ISTRUCT(A68_CHAR ,15,A68t280);
typedef struct A68t280  A68_280 ;    /* STRUCT 15 CHAR */
A_ISTRUCT(A68_CHAR ,38,A68t281);
typedef struct A68t281  A68_281 ;    /* STRUCT 38 CHAR */
A_ISTRUCT(A68_CHAR ,42,A68t282);
typedef struct A68t282  A68_282 ;    /* STRUCT 42 CHAR */
A_ISTRUCT(struct A68t66 ,8,A68t283);
typedef struct A68t283  A68_283 ;    /* STRUCT 8 MODE66 */
A_ISTRUCT(A68_CHAR ,18,A68t284);
typedef struct A68t284  A68_284 ;    /* STRUCT 18 CHAR */
A_ISTRUCT(A68_CHAR ,14,A68t285);
typedef struct A68t285  A68_285 ;    /* STRUCT 14 CHAR */

A_PROCEDURE(A68_VOID ,A68t286,(A68_VC ,A68_INT ,struct A68t180 ,A68_INT ,A68_INT ,struct A68t72 ,A68_BITS ),(A68_VC ,A68_INT ,struct A68t180 ,A68_INT ,A68_INT ,struct A68t72 ,A68_BITS ,void *));
typedef struct A68t286  A68_286 ;    /* PROC(REF MODE26,INT,REF MODE180,INT,INT,MODE72,BITS) VOID */

A_PROCEDURE(A68_VOID ,A68t287,(struct A68t138 ),(struct A68t138 ,void *));
typedef struct A68t287  A68_287 ;    /* PROC(MODE138) VOID */
A_ISTRUCT(A68_CHAR ,53,A68t288);
typedef struct A68t288  A68_288 ;    /* STRUCT 53 CHAR */
A_ISTRUCT(A68_CHAR ,27,A68t289);
typedef struct A68t289  A68_289 ;    /* STRUCT 27 CHAR */
A_ISTRUCT(A68_CHAR ,29,A68t290);
typedef struct A68t290  A68_290 ;    /* STRUCT 29 CHAR */

A_PROCEDURE(A68_VOID ,A68t291,(A68_BOOL ,struct A68t180 *),(A68_BOOL ,struct A68t180 *,void *));
typedef struct A68t291  A68_291 ;    /* PROC(BOOL) MODE180 */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from values --- */
extern A68_VOID  PWPACTR_getcfragment(struct A68t97 *,A68_VC *);
extern A68_BITS  YIJACTR_defaultinfo;
#define ZIJACTR_constant 0X1U
#define CJJACTR_nonloc 0X8U
#define FJJACTR_isnil 0X40U
extern A68_BOOL  DTPACTR_hasattribute(struct A68t97 *,A68_BITS );
extern A68_VOID  WAQACTR_bracketcfragment(struct A68t97 *,A68_VC *);
/* --- End of imports from values --- */


/* --- Imports from uniquenameserver --- */
extern A68_56  ZGMACTR_newuniquename(void);
/* --- End of imports from uniquenameserver --- */


/* --- Imports from unionaids --- */
extern A68_INT  BTQACTR_findints(struct A68t180 ,struct A68t180 );
extern A68_VOID  RTQACTR_uniontouniontable(struct A68t180 ,struct A68t180 ,A68_VC *);
/* --- End of imports from unionaids --- */


/* --- Imports from moduletracer --- */
extern A68_INT  ZCHACTR_tracelevel(A68_VC );
/* --- End of imports from moduletracer --- */


/* --- Imports from modes --- */
extern A68_179  HUMACTR_constituents;
extern A68_VOID  GJNACTR_ctype(A68_INT ,A68_VC *);
extern A68_VOID  KJNACTR_cvartype(A68_INT ,A68_VC *);
extern A68_70  BUMACTR_deproc;
extern A68_BOOL  WQMACTR_isprocp(A68_INT );
extern A68_INT  RMMACTR_modetype(A68_INT );
extern A68_179  JUMACTR_parameters;
extern A68_BOOL  ERMACTR_iscstruct(A68_INT );
extern A68_INT  CJNACTR_givecvariabletype(A68_INT ,A68_BOOL );
extern A68_VOID  FKNACTR_ctaggedtype(A68_INT ,A68_VC *);
extern A68_VOID  LKNACTR_alignnextstructfield(A68_INT ,A68_INT );
/* --- End of imports from modes --- */


/* --- Imports from incmode --- */
#define TEAACTR_gotomode 4
#define EEAACTR_primitive 1
extern A68_INT  WFAACTR_refrefmark;
#define UEAACTR_voidmode 5
/* --- End of imports from incmode --- */


/* --- Imports from incinstallation --- */
/* --- End of imports from incinstallation --- */


/* --- Imports from modules --- */
extern A68_116  DZOACTR_keptdecnos;
extern A68_56  MKOACTR_nulluname;
extern A68_BOOL  GZOACTR_rscompatiblewithpreviousversion;
extern A68_176  MZOACTR_specs;
extern A68_BOOL  HZOACTR_transcompatiblewithpreviousversi;
/* --- End of imports from modules --- */


/* --- Imports from incimperatives --- */
#define MCAACTR_aliasing 2
#define LCAACTR_announcing 0
#define OCAACTR_operatorbit 004U
/* --- End of imports from incimperatives --- */


/* --- Imports from incid --- */
#define IAAACTR_maxidno 2000
#define MAAACTR_maxlibid 6000
#define KAAACTR_maxrdno 4000
#define OAAACTR_minlab 16384
#define LAAACTR_minlibid 4001
/* --- End of imports from incid --- */


/* --- Imports from idtable --- */
extern A68_107 * HPKACTR_get_idinfo(A68_INT );
extern A68_VOID  AQKACTR_afterbang(A68_VC ,A68_VC *);
extern A68_INT  EOKACTR_alienidno;
extern A68_107  DOKACTR_alienidinfo;
extern A68_111  UVKACTR_externaldec;
extern A68_75  VVKACTR_externalcdec;
extern A68_112  FOKACTR_ids;
extern A68_113  GOKACTR_rds;
extern A68_112  HOKACTR_libraryids;
extern A68_114  IOKACTR_labels;
extern A68_VOID  FRKACTR_labelfullname(A68_INT ,A68_VC *);
extern A68_VOID  DSKACTR_idfullname(A68_INT ,A68_VC *);
extern A68_VOID  MRKACTR_labelbuffername(A68_INT ,A68_VC *);
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
extern A68_BITS  WOKACTR_idpresetflags;
extern A68_VOID  USKACTR_rdenvname(A68_INT ,A68_VC *);
extern A68_VOID  MSKACTR_rdfnname(A68_INT ,A68_VC *);
#define BPKACTR_rdopflag 0X10U
#define XOKACTR_rdnoflags 0X0U
#define YOKACTR_rdkeptflag 0X2U
#define APKACTR_rdglobalflag 0X8U
extern A68_BOOL  CTKACTR_standopsym(A68_VC );
#define EPKACTR_labdeclaredflag 0X1U
#define FPKACTR_labbufferemittedflag 0X2U
/* --- End of imports from idtable --- */


/* --- Imports from evaluator --- */
extern A68_VOID  QIVACTR_evaluatestack(struct A68t104 **);
/* --- End of imports from evaluator --- */


/* --- Imports from environment --- */
extern A68_VOID  PXIACTR_assert(A68_VC ,A68_BOOL );
extern A68_VOID  FXIACTR_portabilitywarning(A68_INT );
extern A68_VOID  OWIACTR_pwarning(A68_INT ,struct A68t85 );
extern A68_BOOL  AQIACTR_verboseoption;
extern A68_BOOL  NQIACTR_nostructresultoption;
extern A68_BOOL  OQIACTR_closuremarkoption;
extern A68_BOOL  PQIACTR_closureonstackoption;
extern A68_BOOL  RQIACTR_oldalienoption;
extern A68_59  FSIACTR_list;
extern A68_90  BYIACTR_config_info;
/* --- End of imports from environment --- */


/* --- Imports from environ --- */
#define PQLACTR_importsstream 2
#define QQLACTR_externstream 3
extern A68_INT  TQLACTR_nonlocdecstream(A68_INT );
extern A68_INT  WQLACTR_codestream(A68_INT );
extern A68_INT  ZQLACTR_locdecstream(A68_INT );
extern A68_INT  CRLACTR_labelstream(A68_INT );
extern A68_VOID  ZNLACTR_currentenviron(A68_72 *);
extern A68_INT  EQLACTR_currentlevel(void);
extern A68_INT  IOLACTR_currentroutine(void);
extern A68_INT  LOLACTR_findroutine(A68_INT );
extern A68_BOOL  SOLACTR_nonlocalsused(void);
extern A68_BOOL  YPLACTR_isgloballevel(struct A68t72 );
/* --- End of imports from environ --- */


/* --- Imports from denotations --- */
extern A68_VOID  MPJACTR_replacecontrolchars(A68_VC ,A68_VC *);
/* --- End of imports from denotations --- */


/* --- Imports from coutput --- */
extern A68_VOID  VBMACTR_writecstream(struct A68t65 ,A68_INT );
/* --- End of imports from coutput --- */


/* --- Imports from centities --- */
extern A68_SINT  EIAACTR_cnewline;
/* --- End of imports from centities --- */


/* --- Imports from usefulops --- */
extern A68_VOID  JDAAOSF_concat(struct A68t36 ,A68_VC *);
extern A68_VOID  ZCAAOSF_makervc(A68_VC ,A68_VC *);
extern A68_INT  KMAAOSF_truncate(A68_CHAR ,A68_VC );
extern A68_VOID  SNAAOSF_capitalised(A68_VC ,A68_VC *);
extern A68_BITS * PKAAOSF_orab(A68_BITS *,A68_BITS );
extern A68_VOID  ROAAOSF_whole(A68_INT ,A68_INT ,A68_VC *);
/* --- End of imports from usefulops --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void JRPACTR(void);   /* values */
extern void AGMACTR(void);   /* uniquenameserver */
extern void QRQACTR(void);   /* unionaids */
extern void BCHACTR(void);   /* moduletracer */
extern void MLMACTR(void);   /* modes */
extern void ZDAACTR(void);   /* incmode */
extern void ODAACTR(void);   /* incinstallation */
extern void VJOACTR(void);   /* modules */
extern void UAAACTR(void);   /* incimperatives */
extern void BAAACTR(void);   /* incid */
extern void YNKACTR(void);   /* idtable */
extern void TCVACTR(void);   /* evaluator */
extern void HPIACTR(void);   /* environment */
extern void KNLACTR(void);   /* environ */
extern void UJJACTR(void);   /* denotations */
extern void YRLACTR(void);   /* coutput */
extern void THAACTR(void);   /* centities */
extern void IKAAOSF(void);   /* usefulops */
/* --- end of DECS initialisation functions --- */
static A68_240   ZIVACTR = {"$Id: identifiers.c,v 1.5.2.4 2004/09/27 03:04:17 teshields Exp $"}; 
A_GISVEC(A68_VC ,AJVACTR,ZIVACTR,66)
static A68_242   EJVACTR = {"identifiers"}; 
A_GISVEC(A68_VC ,FJVACTR,EJVACTR,11)
static A68_243   GJVACTR = {"identifiers("}; 
static A68_244   HJVACTR = {"): "}; 
A_GISVEC(A68_VC ,IJVACTR,GJVACTR,12)
A_GISVEC(A68_VC ,KJVACTR,HJVACTR,3)
static A68_246   NJVACTR = {"dummy dec"}; 
A_GISVEC(A68_VC ,OJVACTR,NJVACTR,9)
static A68_247   ZJVACTR = {"RS/trans keeplist inconsistency"}; 
A_GISVEC(A68_VC ,AKVACTR,ZJVACTR,31)
static A68_249   TLVACTR = {""}; 
A_GISVEC(A68_VC ,VLVACTR,TLVACTR,0)
static A68_251   WMVACTR = {"#define "}; 
A_GISVEC(A68_VC ,XMVACTR,WMVACTR,8)
static A68_56   LNVACTR = {"extern "}; 
static A68_244   NNVACTR = {"();"}; 
A_GISVEC(A68_VC ,RNVACTR,NNVACTR,3)
A_GISVEC(A68_VC ,VNVACTR,LNVACTR,7)
static A68_253   ZNVACTR = {"/* no definition of ALIEN supplied for "}; 
A_GISVEC(A68_VC ,AOVACTR,ZNVACTR,39)
static A68_244   BOVACTR = {" */"}; 
A_GISVEC(A68_VC ,COVACTR,BOVACTR,3)
static A68_251   BPVACTR = {"#define "}; 
A_GISVEC(A68_VC ,CPVACTR,BPVACTR,8)
static A68_249   CQVACTR = {""}; 
A_GISVEC(A68_VC ,DQVACTR,CQVACTR,0)
static A68_56   GQVACTR = {"static "}; 
A_GISVEC(A68_VC ,HQVACTR,GQVACTR,7)
static A68_56   TQVACTR = {" /* OP "}; 
static A68_244   UQVACTR = {" */"}; 
A_GISVEC(A68_VC ,VQVACTR,TQVACTR,7)
A_GISVEC(A68_VC ,WQVACTR,UQVACTR,3)
static A68_249   ZQVACTR = {""}; 
A_GISVEC(A68_VC ,ARVACTR,ZQVACTR,0)
static A68_244   IRVACTR = {" = "}; 
A_GISVEC(A68_VC ,JRVACTR,IRVACTR,3)
#define MSVACTR_identity 1
#define NSVACTR_variable 2
#define OSVACTR_formalparam 3
#define PSVACTR_forcontrol 4
#define QSVACTR_initialisedvar 5
#define RSVACTR_caseconformity 6
#define SSVACTR_forallcontrol 7
#define TSVACTR_dummy 8
#define ZSVACTR_noinitialvalue (A68_97 *)A68_NIL
static A68_259   MTVACTR = {"ccdec not handled here"}; 
A_GISVEC(A68_VC ,NTVACTR,MTVACTR,22)
static A68_260   XTVACTR = {"This transiddec type should not occur"}; 
A_GISVEC(A68_VC ,YTVACTR,XTVACTR,37)
static A68_262   DUVACTR = {"ccdec: not a choice dec"}; 
A_GISVEC(A68_VC ,EUVACTR,DUVACTR,23)
static A68_263   KUVACTR = {".data.mode"}; 
A_GISVEC(A68_VC ,MUVACTR,KUVACTR,10)
static A68_251   PVVACTR = {"A_UNCPY("}; 
A_GISVEC(A68_VC ,QVVACTR,PVVACTR,8)
static A68_267   XVVACTR = {");"}; 
A_GISVEC(A68_VC ,YVVACTR,XVVACTR,2)
static A68_246   FWVACTR = {".mode -= "}; 
A_GISVEC(A68_VC ,GWVACTR,FWVACTR,9)
static A68_269   WWVACTR = {".mode = \"\\000"}; 
A_GISVEC(A68_VC ,XWVACTR,WWVACTR,13)
static A68_267   BXVACTR = {"\"["}; 
A_GISVEC(A68_VC ,CXVACTR,BXVACTR,2)
static A68_56   GXVACTR = {".mode];"}; 
A_GISVEC(A68_VC ,HXVACTR,GXVACTR,7)
static A68_270   MXVACTR = {"ccdec: invalid mode index"}; 
A_GISVEC(A68_VC ,NXVACTR,MXVACTR,25)
static A68_243   VXVACTR = {"A68_jmp_buf "}; 
A_GISVEC(A68_VC ,WXVACTR,VXVACTR,12)
static A68_272   HYVACTR = {"if ( sigsetjmp( "}; 
A_GISVEC(A68_VC ,IYVACTR,HYVACTR,16)
static A68_273   LYVACTR = {".label"}; 
A_GISVEC(A68_VC ,NYVACTR,LYVACTR,6)
static A68_242   QYVACTR = {",1) ) goto "}; 
A_GISVEC(A68_VC ,RYVACTR,QYVACTR,11)
#define DZVACTR_idtype 1
#define EZVACTR_rdtype 2
#define FZVACTR_libtype 3
#define GZVACTR_labtype 4
static A68_253   NZVACTR = {"IDENTIFIERS - library ids not supported"}; 
A_GISVEC(A68_VC ,OZVACTR,NZVACTR,39)
static A68_147   QZVACTR = {"IDENTIFIERS - invalid type of id"}; 
A_GISVEC(A68_VC ,RZVACTR,QZVACTR,32)
static A68_244   YAWACTR = {"(( "}; 
A_GISVEC(A68_VC ,ZAWACTR,YAWACTR,3)
static A68_56   EBWACTR = {" * ) ( "}; 
A_GISVEC(A68_VC ,FBWACTR,EBWACTR,7)
static A68_274   KBWACTR = {".nonlocals )) -> "}; 
A_GISVEC(A68_VC ,LBWACTR,KBWACTR,17)
static A68_244   PBWACTR = {" = "}; 
A_GISVEC(A68_VC ,QBWACTR,PBWACTR,3)
static A68_249   SDWACTR = {""}; 
A_GISVEC(A68_VC ,TDWACTR,SDWACTR,0)
static A68_246   WDWACTR = {"A_STATIC "}; 
A_GISVEC(A68_VC ,XDWACTR,WDWACTR,9)
static A68_40   IEWACTR = {"void"}; 
A_GISVEC(A68_VC ,JEWACTR,IEWACTR,4)
static A68_267   AFWACTR = {", "}; 
A_GISVEC(A68_VC ,BFWACTR,AFWACTR,2)
static A68_267   MFWACTR = {", "}; 
A_GISVEC(A68_VC ,NFWACTR,MFWACTR,2)
static A68_249   QFWACTR = {""}; 
A_GISVEC(A68_VC ,RFWACTR,QFWACTR,0)
static A68_280   WFWACTR = {" *ReturnedValue"}; 
A_GISVEC(A68_VC ,XFWACTR,WFWACTR,15)
static A68_267   DGWACTR = {", "}; 
A_GISVEC(A68_VC ,EGWACTR,DGWACTR,2)
static A68_249   HGWACTR = {""}; 
A_GISVEC(A68_VC ,IGWACTR,HGWACTR,0)
static A68_280   LGWACTR = {"void *NonLocals"}; 
A_GISVEC(A68_VC ,MGWACTR,LGWACTR,15)
static A68_274   BHWACTR = {"#define NL(x) ((("}; 
A_GISVEC(A68_VC ,CHWACTR,BHWACTR,17)
static A68_274   GHWACTR = {" *)NonLocals)->x)"}; 
A_GISVEC(A68_VC ,HHWACTR,GHWACTR,17)
static A68_281   ZHWACTR = {"   /* proc value of non-global proc */"}; 
A_GISVEC(A68_VC ,AIWACTR,ZHWACTR,38)
static A68_249   DIWACTR = {""}; 
A_GISVEC(A68_VC ,EIWACTR,DIWACTR,0)
static A68_282   TIWACTR = {"  /* proc non-locals allocated on stack */"}; 
A_GISVEC(A68_VC ,UIWACTR,TIWACTR,42)
static A68_249   XIWACTR = {""}; 
A_GISVEC(A68_VC ,YIWACTR,XIWACTR,0)
static A68_274   EJWACTR = {"A_STACK_CLOSURE( "}; 
A_GISVEC(A68_VC ,FJWACTR,EJWACTR,17)
static A68_267   JJWACTR = {", "}; 
A_GISVEC(A68_VC ,KJWACTR,JJWACTR,2)
static A68_267   OJWACTR = {", "}; 
A_GISVEC(A68_VC ,PJWACTR,OJWACTR,2)
static A68_244   TJWACTR = {" );"}; 
A_GISVEC(A68_VC ,UJWACTR,TJWACTR,3)
static A68_284   AKWACTR = {"A_MARKED_CLOSURE( "}; 
A_GISVEC(A68_VC ,BKWACTR,AKWACTR,18)
static A68_242   EKWACTR = {"A_CLOSURE( "}; 
A_GISVEC(A68_VC ,FKWACTR,EKWACTR,11)
static A68_267   JKWACTR = {", "}; 
A_GISVEC(A68_VC ,KKWACTR,JKWACTR,2)
static A68_267   OKWACTR = {", "}; 
A_GISVEC(A68_VC ,PKWACTR,OKWACTR,2)
static A68_244   TKWACTR = {" );"}; 
A_GISVEC(A68_VC ,UKWACTR,TKWACTR,3)
static A68_285   ALWACTR = {"typedef struct"}; 
A_GISVEC(A68_VC ,BLWACTR,ALWACTR,14)
static A68_247   ELWACTR = {"   /* env of non-global proc */"}; 
A_GISVEC(A68_VC ,FLWACTR,ELWACTR,31)
static A68_249   ILWACTR = {""}; 
A_GISVEC(A68_VC ,JLWACTR,ILWACTR,0)
static A68_285   PLWACTR = {" A68_INT mark;"}; 
A_GISVEC(A68_VC ,QLWACTR,PLWACTR,14)
static A68_249   TLWACTR = {""}; 
A_GISVEC(A68_VC ,ULWACTR,TLWACTR,0)
static A68_263   FMWACTR = {"int dummy;"}; 
A_GISVEC(A68_VC ,GMWACTR,FMWACTR,10)
static A68_267   MMWACTR = {"} "}; 
A_GISVEC(A68_VC ,NMWACTR,MMWACTR,2)
static A68_288   HOWACTR = {"IDENTIFIERS - should be aliasing to initialised label"}; 
A_GISVEC(A68_VC ,JOWACTR,HOWACTR,53)
static A68_289   LPWACTR = {"external dec: invalid decno"}; 
A_GISVEC(A68_VC ,OPWACTR,LPWACTR,27)
static A68_290   AQWACTR = {"external c dec: invalid decno"}; 
A_GISVEC(A68_VC ,DQWACTR,AQWACTR,29)
static A68_246   KQWACTR = {"A_prelude"}; 
A_GISVEC(A68_VC ,NQWACTR,KQWACTR,9)
static A68_56   ORWACTR = {"extern "}; 
A_GISVEC(A68_VC ,PRWACTR,ORWACTR,7)
static A68_40   DSWACTR = {"void"}; 
A_GISVEC(A68_VC ,ESWACTR,DSWACTR,4)
static A68_249   OSWACTR = {""}; 
A_GISVEC(A68_VC ,PSWACTR,OSWACTR,0)
static A68_249   YSWACTR = {""}; 
A_GISVEC(A68_VC ,ZSWACTR,YSWACTR,0)
static A68_267   ITWACTR = {");"}; 
A_GISVEC(A68_VC ,JTWACTR,ITWACTR,2)
static A68_56   PTWACTR = {"extern "}; 
A_GISVEC(A68_VC ,QTWACTR,PTWACTR,7)
typedef struct   /* env of non-global proc */
{
A68_INT  Decno;
A_PAD_INT(PAD_162)
A68_97 * Initvalue;
A68_BOOL  NMVACTR_kept;
A_PAD_BOOL(PAD_163)
A68_107 * GMVACTR_idinfo;
} UMVACTR_optidentity;
typedef struct   /* env of non-global proc */
{
A68_BOOL  KMVACTR_global;
A_PAD_BOOL(PAD_164)
A68_107 * GMVACTR_idinfo;
A68_INT  Decno;
A_PAD_INT(PAD_165)
A68_INT  PMVACTR_decstream;
A_PAD_INT(PAD_166)
A68_97 * Initvalue;
A68_INT  QMVACTR_codestream;
A_PAD_INT(PAD_167)
} YPVACTR_declarecvariable;
typedef struct   /* env of non-global proc */
{
A68_INT  NCWACTR_a68paramcount;
A_PAD_INT(PAD_168)
} XCWACTR_generator;
typedef struct   /* env of non-global proc */
{
A68_BOOL  Global;
A_PAD_BOOL(PAD_169)
A68_BOOL  Kept;
A_PAD_BOOL(PAD_170)
A68_INT  LCWACTR_cresultmode;
A_PAD_INT(PAD_171)
A68_VC  TCWACTR_fnname;
A68_INT  OCWACTR_cparamcount;
A_PAD_INT(PAD_172)
A68_INT  NCWACTR_a68paramcount;
A_PAD_INT(PAD_173)
A68_277  CDWACTR_paramtypes;
A68_277  ADWACTR_paramnames;
A68_BOOL  JCWACTR_usetempforresult;
A_PAD_BOOL(PAD_174)
A68_INT  Resultmode;
A_PAD_INT(PAD_175)
A68_BOOL  MCWACTR_fulldec;
A_PAD_BOOL(PAD_176)
} PDWACTR_prototype;
typedef struct   /* env of non-global proc */
{
int dummy;
} IRWACTR_generator;

A_STATIC A68_VOID  DJVACTR_debugmessage(A68_INT  Level, A68_VC  M);

A68_VOID  MJVACTR_initialdummydec(A68_129  Dummydec);

A_STATIC A68_INT  TJVACTR_keeplistposition(A68_INT  Decno);

A_STATIC A68_VOID  JKVACTR_newidinfo(A68_INT  Decno, A68_INT  Mode, A68_VC  A68name, A68_56  Prefix, A68_BITS  Flags, A68_VC  Definition, A68_VC  Rhs);

A_STATIC A68_VOID  FMVACTR_outputcdeclaration(A68_INT  Decno, A68_97 * Initvalue);

A_STATIC A68_VOID  TMVACTR_optidentity(A68_VC  Rhs, void *NonLocals);

A_STATIC A68_VOID  XPVACTR_declarecvariable(void *NonLocals);

A68_VOID  LSVACTR_iddec(A68_129  Identifierdec, A68_104 ** Valuestack);

A68_VOID  CUVACTR_ccdec(A68_129  Choicedec, A68_97 * Enquiry, A68_INT  Modeindex);

A_STATIC A68_97 * SUVACTR_assignment(A68_97 * QUVACTR_anonymous, A68_97  RUVACTR_anonymous);

A_STATIC A68_98 * XUVACTR_assignment(A68_98 * VUVACTR_anonymous, A68_98  WUVACTR_anonymous);

A68_VOID  PXVACTR_declarenonlocallabel(A68_INT  Labno);

A68_VOID  CZVACTR_nonlocaldec(A68_INT  Idno, A68_INT  Level);

A_STATIC A68_VOID  FCWACTR_declarecroutine(A68_INT  Rdenno, A68_INT  Resultmode, A68_BOOL  Global, A68_BOOL  Kept, A68_BOOL  Opsym, A68_180  Params);

A_STATIC A68_VOID  WCWACTR_generator(A68_BOOL  UCWACTR_anonymous, A68_277  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  ODWACTR_prototype(A68_INT  Protostream, void *NonLocals);

A68_VOID  ZLWACTR_completerddec(void);

A68_VOID  DNWACTR_rddec(A68_VC  Name, A68_INT  Mode, A68_180  Paramdecnos, A68_INT  Resultmode, A68_INT  Rdenno, A68_72  Environ, A68_BITS  Props);

A68_VOID  ZNWACTR_labdec(A68_138  Labeldec);

A_STATIC A68_VOID  EPWACTR_zexternaldec(A68_VC  Name, A68_56  Prefix, A68_INT  Mode, A68_INT  Decno, A68_BOOL  Optimised, A68_BOOL  Iddec, A68_BOOL  Globalproc, A68_BOOL  Genproc, A68_BOOL  Forceuse, A68_VC  Definition, A68_VC  Rhs);

A_STATIC A68_VOID  IPWACTR_mybefore(A68_VC  S, A68_CHAR  C, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  ZPWACTR_zexternalcdec(A68_INT  Decno);

A_STATIC A68_VOID  HRWACTR_generator(A68_BOOL  FRWACTR_anonymous, A68_180  *ReturnedValue, void *NonLocals);

A68_VOID  HUWACTR_initialiseidentifiers(void);

A68_INT  LUWACTR_leveloflabel(A68_INT  Labno);

A68_VOID  OUWACTR_environoflabel(A68_INT  Labno, A68_72  *ReturnedValue);

A_STATIC A68_98 * XUVACTR_assignment(A68_98 * VUVACTR_anonymous, A68_98  WUVACTR_anonymous)
{ 
A68_98  YUVACTR;  /* united object - for case conformity */
A68_VC  ZUVACTR_anonymous;
A68_VC  AVVACTR;  /* OPERATORS - copy to flex */
A68_266 * BVVACTR;  /* YIELD */
A68_98 * CVVACTR;  /* clause result */
{ 
(*VUVACTR_anonymous) = WUVACTR_anonymous;
YUVACTR = WUVACTR_anonymous ;
switch ( YUVACTR.mode )
{ 
case 6: /* VECTOR [] CHAR */
ZUVACTR_anonymous = (YUVACTR.data.mode6);
BVVACTR = &(VUVACTR_anonymous-> data.mode6) ;
(*BVVACTR) = A_VCOPY(ZUVACTR_anonymous,AVVACTR,A68_CHAR );
break;
default: 
/*SKIP*/;
break;
} 
CVVACTR = VUVACTR_anonymous;
} 
return( CVVACTR );
} 
#undef NL

A_STATIC A68_VOID  TMVACTR_optidentity(A68_VC  Rhs, void *NonLocals)
#define NL(x) (((UMVACTR_optidentity *)NonLocals)->x)
{ 
A68_252  VMVACTR;  /* collateral clause result */
A68_VC  YMVACTR;  /* avoid structure result */
A68_VC  ZMVACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_36  BNVACTR;  /* OPERATORS - istruct -> vector */
A68_VC  CNVACTR;  /* avoid structure result */
A68_VC  DNVACTR;  /* avoid structure result */
A68_VC  ANVACTR_definition;
A68_98  ENVACTR;  /* united object - for case conformity */
A68_100  FNVACTR_id;
A68_BOOL  GNVACTR_aliendec;
A68_107 * HNVACTR;  /* clause result */
A68_107 * INVACTR_rhsidinfo;
A68_BITS * JNVACTR;  /* YIELD */
A68_VC  KNVACTR;  /* clause result */
A68_BITS  MNVACTR;  /* ADICOPS - >= */
A68_VC  ONVACTR;  /* clause result */
A68_VC  PNVACTR;  /* avoid structure result */
A68_VC  QNVACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  SNVACTR;  /* avoid structure result */
A68_VC  TNVACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  UNVACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  WNVACTR;  /* avoid structure result */
A68_85  XNVACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_254  YNVACTR;  /* collateral clause result */
A68_36  DOVACTR;  /* OPERATORS - istruct -> vector */
A68_VC  EOVACTR;  /* avoid structure result */
A68_VC  FOVACTR;  /* avoid structure result */
A68_VC * GOVACTR;  /* YIELD */
A68_BOOL  HOVACTR;  /* optbool result */
A68_INT  IOVACTR;  /* YIELD */
A68_154  JOVACTR;  /* OPERATORS - simple index */
A68_INT  KOVACTR;  /* YIELD */
A68_156 * LOVACTR_keptinfo;
A68_BOOL  MOVACTR;  /* optbool result */
A68_BOOL  NOVACTR;  /* clause result */
A68_INT  OOVACTR;  /* YIELD */
A68_LINT * POVACTR;  /* YIELD */
A68_56 * QOVACTR;  /* YIELD */
A68_254  ROVACTR;  /* collateral clause result */
A68_VC  SOVACTR;  /* OPERATORS - istruct -> vector */
A68_56  TOVACTR;  /* OPERATORS - istruct -> vector */
A68_VC  UOVACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  VOVACTR;  /* avoid structure result */
A68_36  WOVACTR;  /* OPERATORS - istruct -> vector */
A68_VC  XOVACTR;  /* avoid structure result */
union {  /* BIOP 99 */
A68_VC   source;
A68_VC   destination;
} YOVACTR; 
A68_VC * ZOVACTR;  /* YIELD */
A68_252  APVACTR;  /* collateral clause result */
A68_VC  DPVACTR;  /* avoid structure result */
A68_VC  EPVACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_36  FPVACTR;  /* OPERATORS - istruct -> vector */
A68_VC  GPVACTR;  /* avoid structure result */
A68_VC  HPVACTR;  /* avoid structure result */
A68_255  IPVACTR;  /* collateral clause result */
A68_66  JPVACTR;  /* OPERATORS - mode -> union mode */
A68_VC  KPVACTR;  /* YIELD */
A68_66  LPVACTR;  /* OPERATORS - mode -> union mode */
A68_65  MPVACTR;  /* OPERATORS - istruct -> vector */
A68_INT * NPVACTR;  /* YIELD */
A68_BITS * OPVACTR;  /* YIELD */
A68_VC  PPVACTR;  /* avoid structure result */
A68_VC * QPVACTR;  /* YIELD */
A68_BITS * RPVACTR;  /* YIELD */
A68_255  SPVACTR;  /* collateral clause result */
A68_66  TPVACTR;  /* OPERATORS - mode -> union mode */
A68_66  UPVACTR;  /* OPERATORS - mode -> union mode */
A68_65  VPVACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(optidentity);
 /* line 198: */
 /* line 199: */
{ 
VMVACTR.data[0] = XMVACTR;
DSKACTR_idfullname( NL(Decno), &YMVACTR );
VMVACTR.data[1] = YMVACTR;
VMVACTR.data[2] = A_HVEC(ZMVACTR,' ',A68_CHAR );
VMVACTR.data[3] = Rhs;
JDAAOSF_concat( A_HISVEC(BNVACTR,VMVACTR,4,A68_VC ), &CNVACTR );
ZCAAOSF_makervc( CNVACTR, &DNVACTR );
ANVACTR_definition = DNVACTR;
 /* line 201: */
 /* line 202: */
ENVACTR = (*(&(NL(Initvalue)->Extra))) ;
switch ( ENVACTR.mode )
{ 
case 4: /* STRUCT(INT)  */
FNVACTR_id = (ENVACTR.data.mode4);
 /* line 203: */
 /* line 204: */
{ 
GNVACTR_aliendec = A68_FALSE;
 /* line 205: */
 /* line 206: */
 /* line 207: */
if ( (FNVACTR_id.Idno==EOKACTR_alienidno) )
{ 
GNVACTR_aliendec = A68_TRUE;
 /* line 208: */
HNVACTR = (&DOKACTR_alienidinfo);
} 
else
{ 
 /* line 209: */
HNVACTR = HPKACTR_get_idinfo(FNVACTR_id.Idno);
} 
INVACTR_rhsidinfo = HNVACTR;
 /* line 212: */
 /* line 213: */
 /* line 214: */
if ( NL(NMVACTR_kept) )
{ 
 /* line 215: */
JNVACTR = (&(INVACTR_rhsidinfo->Flags)) ;
(*JNVACTR) = (A68_BITS )((*(&(INVACTR_rhsidinfo->Flags)))|VOKACTR_idforceuseflag);
} 
 /* line 219: */
 /* line 220: */
 /* line 221: */
if ( GNVACTR_aliendec )
{ 
 /* line 222: */
 /* line 223: */
 /* line 225: */
if ( ((*(&(INVACTR_rhsidinfo->Definition))).upb>0) )
{ 
 /* line 226: */
KNVACTR = (*(&(INVACTR_rhsidinfo->Definition)));
} 
else
{ 
 /* line 227: */
if ( RQIACTR_oldalienoption )
{ 
 /* line 228: */
 /* line 229: */
MNVACTR = (*(&(INVACTR_rhsidinfo->Flags))) ;
if ( A_LB_GE(MNVACTR,SOKACTR_idgprocflag) )
{ 
 /* line 230: */
GJNACTR_ctype( A_CALLPROC(BUMACTR_deproc,((*(&(INVACTR_rhsidinfo->Mode)))),((*(&(INVACTR_rhsidinfo->Mode))),(BUMACTR_deproc).nonlocals)), &PNVACTR );
ONVACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(PNVACTR,A_HVEC(QNVACTR,' ',A68_CHAR )),(*(&(INVACTR_rhsidinfo->Name)))),RNVACTR);
} 
else
{ 
 /* line 231: */
 /* line 232: */
 /* line 233: */
KJNACTR_cvartype( (*(&(INVACTR_rhsidinfo->Cvariabletype))), &SNVACTR );
ONVACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(SNVACTR,A_HVEC(TNVACTR,' ',A68_CHAR )),(*(&(INVACTR_rhsidinfo->Name)))),A_HVEC(UNVACTR,';',A68_CHAR ));
} 
 /* line 234: */
 /* line 235: */
ZCAAOSF_makervc( A_VC_PLUS(VNVACTR,ONVACTR), &WNVACTR );
KNVACTR = WNVACTR;
} 
else
{ 
OWIACTR_pwarning(904, A_HARR(XNVACTR,(*(&(INVACTR_rhsidinfo->Name))),A68_VC ));
 /* line 236: */
YNVACTR.data[0] = AOVACTR;
YNVACTR.data[1] = (*(&(INVACTR_rhsidinfo->Name)));
YNVACTR.data[2] = COVACTR;
 /* line 237: */
JDAAOSF_concat( A_HISVEC(DOVACTR,YNVACTR,3,A68_VC ), &EOVACTR );
ZCAAOSF_makervc( EOVACTR, &FOVACTR );
KNVACTR = FOVACTR;
} 
} 
GOVACTR = (&(NL(GMVACTR_idinfo)->Rhs)) ;
(*GOVACTR) = KNVACTR;
 /* line 239: */
 /* line 240: */
HOVACTR = NL(NMVACTR_kept);
if ( HOVACTR )
{HOVACTR = GZOACTR_rscompatiblewithpreviousversion;
}
 /* line 242: */
if ( HOVACTR )
{ 
 /* line 243: */
{ 
IOVACTR = 1 ;
JOVACTR = (*(&((&A_R1INDEX(MZOACTR_specs,IOVACTR))->Keptinfo))) ;
KOVACTR = TJVACTR_keeplistposition(NL(Decno)) ;
LOVACTR_keptinfo = (&A_VINDEX(JOVACTR,KOVACTR));
 /* line 244: */
MOVACTR = A_VC_NE(ANVACTR_definition,(*(&(LOVACTR_keptinfo->Definition))));
if ( ! MOVACTR )
{ /* line 245: */
MOVACTR = A_VC_NE((*(&(NL(GMVACTR_idinfo)->Rhs))),(*(&(LOVACTR_keptinfo->Rhs))));
}
 /* line 246: */
NOVACTR = MOVACTR;
if ( NOVACTR )
{ 
HZOACTR_transcompatiblewithpreviousversi = A68_FALSE;
 /* line 247: */
OOVACTR = 1 ;
POVACTR = (&((&A_R1INDEX(MZOACTR_specs,OOVACTR))->Timeoflastchange)) ;
(*POVACTR) = (*(&((&BYIACTR_config_info)->Translationtime)));
 /* line 248: */
QOVACTR = (&(NL(GMVACTR_idinfo)->Prefix)) ;
(*QOVACTR) = ZGMACTR_newuniquename();
 /* line 249: */
 /* line 250: */
TOVACTR = (*(&(NL(GMVACTR_idinfo)->Prefix))) ;
ROVACTR.data[0] = A_HISVEC(SOVACTR,TOVACTR,7,A68_CHAR );
ROVACTR.data[1] = A_HVEC(UOVACTR,'_',A68_CHAR );
AQKACTR_afterbang( (*(&(NL(GMVACTR_idinfo)->Name))), &VOVACTR );
ROVACTR.data[2] = VOVACTR;
JDAAOSF_concat( A_HISVEC(WOVACTR,ROVACTR,3,A68_VC ), &XOVACTR );
YOVACTR.source = XOVACTR ;
ZOVACTR = (&(NL(GMVACTR_idinfo)->C_name)) ;
(*ZOVACTR) = (YOVACTR.destination);
 /* line 251: */
APVACTR.data[0] = CPVACTR;
DSKACTR_idfullname( NL(Decno), &DPVACTR );
APVACTR.data[1] = DPVACTR;
APVACTR.data[2] = A_HVEC(EPVACTR,' ',A68_CHAR );
APVACTR.data[3] = Rhs;
 /* line 252: */
JDAAOSF_concat( A_HISVEC(FPVACTR,APVACTR,4,A68_VC ), &GPVACTR );
ZCAAOSF_makervc( GPVACTR, &HPVACTR );
ANVACTR_definition = HPVACTR;
} 
} 
} 
 /* line 255: */
KPVACTR = (*(&(NL(GMVACTR_idinfo)->Rhs))) ;
IPVACTR.data[0] = A_UNITE(JPVACTR,mode2,2,KPVACTR);
IPVACTR.data[1] = A_UNITE(LPVACTR,mode4,4,EIAACTR_cnewline);
 /* line 256: */
VBMACTR_writecstream(A_HISVEC(MPVACTR,IPVACTR,2,A68_66 ), TQLACTR_nonlocdecstream(0));
} 
 /* line 259: */
NPVACTR = (&(NL(GMVACTR_idinfo)->Cvariabletype)) ;
(*NPVACTR) = (*(&(INVACTR_rhsidinfo->Cvariabletype)));
 /* line 260: */
 /* line 261: */
 /* line 262: */
 /* line 263: */
OPVACTR = (&(NL(GMVACTR_idinfo)->Flags)) ;
(*OPVACTR) = (A68_BITS )((*(&(NL(GMVACTR_idinfo)->Flags)))|(*(&(INVACTR_rhsidinfo->Flags))));
} 
break;
default: 
/*SKIP*/;
break;
} 
 /* line 266: */
 /* line 267: */
 /* line 268: */
if ( NL(NMVACTR_kept) )
{ 
 /* line 269: */
ZCAAOSF_makervc( ANVACTR_definition, &PPVACTR );
QPVACTR = (&(NL(GMVACTR_idinfo)->Definition)) ;
(*QPVACTR) = PPVACTR;
} 
 /* line 271: */
RPVACTR = (&(NL(GMVACTR_idinfo)->Flags)) ;
(*RPVACTR) = (A68_BITS )((*(&(NL(GMVACTR_idinfo)->Flags)))|QOKACTR_idoptimisedflag);
 /* line 273: */
SPVACTR.data[0] = A_UNITE(TPVACTR,mode2,2,ANVACTR_definition);
SPVACTR.data[1] = A_UNITE(UPVACTR,mode4,4,EIAACTR_cnewline);
 /* line 274: */
VBMACTR_writecstream(A_HISVEC(VPVACTR,SPVACTR,2,A68_66 ), TQLACTR_nonlocdecstream(0));
} 
A_PROC_EXIT(optidentity);
return;
} 
#undef NL

A_STATIC A68_VOID  XPVACTR_declarecvariable(void *NonLocals)
#define NL(x) (((YPVACTR_declarecvariable *)NonLocals)->x)
{ 
A68_256  ZPVACTR;  /* collateral clause result */
A68_BOOL  AQVACTR;  /* optbool result */
A68_BITS  BQVACTR;  /* ADICOPS - >= */
A68_66  EQVACTR;  /* OPERATORS - mode -> union mode */
A68_VC  FQVACTR;  /* YIELD */
A68_66  IQVACTR;  /* OPERATORS - mode -> union mode */
A68_VC  JQVACTR;  /* YIELD */
A68_VC  KQVACTR;  /* avoid structure result */
A68_66  LQVACTR;  /* OPERATORS - mode -> union mode */
A68_66  MQVACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  NQVACTR;  /* YIELD */
A68_VC  OQVACTR;  /* avoid structure result */
A68_66  PQVACTR;  /* OPERATORS - mode -> union mode */
A68_66  QQVACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  RQVACTR;  /* YIELD */
A68_BITS  SQVACTR;  /* ADICOPS - >= */
A68_66  XQVACTR;  /* OPERATORS - mode -> union mode */
A68_VC  YQVACTR;  /* YIELD */
A68_66  BRVACTR;  /* OPERATORS - mode -> union mode */
A68_VC  CRVACTR;  /* YIELD */
A68_66  DRVACTR;  /* OPERATORS - mode -> union mode */
A68_65  ERVACTR;  /* OPERATORS - istruct -> vector */
A68_257  FRVACTR;  /* collateral clause result */
A68_VC  GRVACTR;  /* avoid structure result */
A68_66  HRVACTR;  /* OPERATORS - mode -> union mode */
A68_66  KRVACTR;  /* OPERATORS - mode -> union mode */
A68_VC  LRVACTR;  /* YIELD */
A68_VC  MRVACTR;  /* avoid structure result */
A68_66  NRVACTR;  /* OPERATORS - mode -> union mode */
A68_66  ORVACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  PRVACTR;  /* YIELD */
A68_66  QRVACTR;  /* OPERATORS - mode -> union mode */
A68_65  RRVACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(declarecvariable);
{ 
AQVACTR = !NL(KMVACTR_global);
if ( ! AQVACTR )
{ /* line 280: */
BQVACTR = (*(&(NL(GMVACTR_idinfo)->Flags))) ;
AQVACTR = A_LB_GE(BQVACTR,LOKACTR_idkeptflag);
}
 /* line 281: */
if ( AQVACTR )
{ 
 /* line 282: */
FQVACTR = DQVACTR ;
ZPVACTR.data[0] = A_UNITE(EQVACTR,mode2,2,FQVACTR);
} 
else
{ 
 /* line 283: */
JQVACTR = HQVACTR ;
ZPVACTR.data[0] = A_UNITE(IQVACTR,mode2,2,JQVACTR);
} 
KJNACTR_cvartype( (*(&(NL(GMVACTR_idinfo)->Cvariabletype))), &KQVACTR );
ZPVACTR.data[1] = A_UNITE(LQVACTR,mode2,2,KQVACTR);
 /* line 284: */
NQVACTR = ' ' ;
ZPVACTR.data[2] = A_UNITE(MQVACTR,mode1,1,NQVACTR);
DSKACTR_idfullname( NL(Decno), &OQVACTR );
ZPVACTR.data[3] = A_UNITE(PQVACTR,mode2,2,OQVACTR);
 /* line 285: */
RQVACTR = ';' ;
ZPVACTR.data[4] = A_UNITE(QQVACTR,mode1,1,RQVACTR);
 /* line 286: */
SQVACTR = (*(&(NL(GMVACTR_idinfo)->Flags))) ;
if ( A_LB_GE(SQVACTR,ROKACTR_idopflag) )
{ 
 /* line 287: */
 /* line 288: */
YQVACTR = A_VC_PLUS(A_VC_PLUS(VQVACTR,(*(&(NL(GMVACTR_idinfo)->Name)))),WQVACTR) ;
ZPVACTR.data[5] = A_UNITE(XQVACTR,mode2,2,YQVACTR);
} 
else
{ 
 /* line 290: */
CRVACTR = ARVACTR ;
ZPVACTR.data[5] = A_UNITE(BRVACTR,mode2,2,CRVACTR);
} 
ZPVACTR.data[6] = A_UNITE(DRVACTR,mode4,4,EIAACTR_cnewline);
 /* line 291: */
VBMACTR_writecstream(A_HISVEC(ERVACTR,ZPVACTR,7,A68_66 ), NL(PMVACTR_decstream));
 /* line 293: */
 /* line 294: */
 /* line 295: */
if ( (NL(Initvalue)!=(A68_97 *)A68_NIL) )
{ 
DSKACTR_idfullname( NL(Decno), &GRVACTR );
FRVACTR.data[0] = A_UNITE(HRVACTR,mode2,2,GRVACTR);
 /* line 296: */
LRVACTR = JRVACTR ;
FRVACTR.data[1] = A_UNITE(KRVACTR,mode2,2,LRVACTR);
WAQACTR_bracketcfragment( NL(Initvalue), &MRVACTR );
FRVACTR.data[2] = A_UNITE(NRVACTR,mode2,2,MRVACTR);
 /* line 298: */
PRVACTR = ';' ;
FRVACTR.data[3] = A_UNITE(ORVACTR,mode1,1,PRVACTR);
FRVACTR.data[4] = A_UNITE(QRVACTR,mode4,4,EIAACTR_cnewline);
 /* line 299: */
 /* line 300: */
 /* line 301: */
VBMACTR_writecstream(A_HISVEC(RRVACTR,FRVACTR,5,A68_66 ), NL(QMVACTR_codestream));
} 
} 
A_PROC_EXIT(declarecvariable);
return;
} 
#undef NL

A_STATIC A68_97 * SUVACTR_assignment(A68_97 * QUVACTR_anonymous, A68_97  RUVACTR_anonymous)
{ 
A68_INT * TUVACTR;  /* YIELD */
A68_BITS * UUVACTR;  /* YIELD */
A68_97 * DVVACTR;  /* clause result */
{ 
TUVACTR = (&(QUVACTR_anonymous->Mode)) ;
(*TUVACTR) = RUVACTR_anonymous.Mode;
UUVACTR = (&(QUVACTR_anonymous->Info)) ;
(*UUVACTR) = RUVACTR_anonymous.Info;
XUVACTR_assignment((&(QUVACTR_anonymous->Extra)), RUVACTR_anonymous.Extra);
DVVACTR = QUVACTR_anonymous;
} 
return( DVVACTR );
} 
#undef NL

A_STATIC A68_VOID  WCWACTR_generator(A68_BOOL  UCWACTR_anonymous, A68_277  *ReturnedValue, void *NonLocals)
#define NL(x) (((XCWACTR_generator *)NonLocals)->x)
{ 
A68_277  YCWACTR;  /* clause result */
A68_277  ZCWACTR;  /* OPERATORS - dynamic generator */
{ 
ZCWACTR.upb = NL(NCWACTR_a68paramcount) ;
( UCWACTR_anonymous? A_VLOC(A68_VC ,ZCWACTR): A_VHEAP(A68_VC ,ZCWACTR) );
YCWACTR = ZCWACTR;
} 
*ReturnedValue = (YCWACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  ODWACTR_prototype(A68_INT  Protostream, void *NonLocals)
#define NL(x) (((PDWACTR_prototype *)NonLocals)->x)
{ 
A68_268  QDWACTR;  /* collateral clause result */
A68_66  RDWACTR;  /* OPERATORS - mode -> union mode */
A68_66  UDWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  VDWACTR;  /* YIELD */
A68_66  YDWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  ZDWACTR;  /* YIELD */
A68_VC  AEWACTR;  /* avoid structure result */
A68_66  BEWACTR;  /* OPERATORS - mode -> union mode */
A68_66  CEWACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  DEWACTR;  /* YIELD */
A68_66  EEWACTR;  /* OPERATORS - mode -> union mode */
A68_66  FEWACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  GEWACTR;  /* YIELD */
A68_65  HEWACTR;  /* OPERATORS - istruct -> vector */
A68_66  KEWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  LEWACTR;  /* YIELD */
A68_65  MEWACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_279  NEWACTR;  /* collateral clause result */
A68_INT  OEWACTR;  /* YIELD */
A68_66  PEWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  QEWACTR;  /* YIELD */
A68_66  REWACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  SEWACTR;  /* YIELD */
A68_INT  TEWACTR;  /* YIELD */
A68_66  UEWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  VEWACTR;  /* YIELD */
A68_65  WEWACTR;  /* OPERATORS - istruct -> vector */
A68_INT  XEWACTR_i;
A68_INT  YEWACTR;  /* to part of loop */
A68_271  ZEWACTR;  /* collateral clause result */
A68_66  CFWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  DFWACTR;  /* YIELD */
A68_66  EFWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  FFWACTR;  /* YIELD */
A68_66  GFWACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  HFWACTR;  /* YIELD */
A68_66  IFWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  JFWACTR;  /* YIELD */
A68_65  KFWACTR;  /* OPERATORS - istruct -> vector */
A68_279  LFWACTR;  /* collateral clause result */
A68_66  OFWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  PFWACTR;  /* YIELD */
A68_66  SFWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  TFWACTR;  /* YIELD */
A68_VC  UFWACTR;  /* avoid structure result */
A68_66  VFWACTR;  /* OPERATORS - mode -> union mode */
A68_66  YFWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  ZFWACTR;  /* YIELD */
A68_65  AGWACTR;  /* OPERATORS - istruct -> vector */
A68_255  BGWACTR;  /* collateral clause result */
A68_BOOL  CGWACTR;  /* optbool result */
A68_66  FGWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  GGWACTR;  /* YIELD */
A68_66  JGWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  KGWACTR;  /* YIELD */
A68_66  NGWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  OGWACTR;  /* YIELD */
A68_65  PGWACTR;  /* OPERATORS - istruct -> vector */
A68_66  QGWACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  RGWACTR;  /* YIELD */
A68_65  SGWACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(prototype);
 /* line 664: */
 /* line 665: */
{ 
 /* line 666: */
 /* line 667: */
QDWACTR.data[0] = A_UNITE(RDWACTR,mode4,4,EIAACTR_cnewline);
if ( (NL(Global)&NL(Kept)) )
{ 
VDWACTR = TDWACTR ;
QDWACTR.data[1] = A_UNITE(UDWACTR,mode2,2,VDWACTR);
} 
else
{ 
 /* line 668: */
ZDWACTR = XDWACTR ;
QDWACTR.data[1] = A_UNITE(YDWACTR,mode2,2,ZDWACTR);
} 
 /* line 669: */
GJNACTR_ctype( NL(LCWACTR_cresultmode), &AEWACTR );
QDWACTR.data[2] = A_UNITE(BEWACTR,mode2,2,AEWACTR);
 /* line 670: */
DEWACTR = ' ' ;
QDWACTR.data[3] = A_UNITE(CEWACTR,mode1,1,DEWACTR);
 /* line 672: */
QDWACTR.data[4] = A_UNITE(EEWACTR,mode2,2,NL(TCWACTR_fnname));
GEWACTR = '(' ;
QDWACTR.data[5] = A_UNITE(FEWACTR,mode1,1,GEWACTR);
VBMACTR_writecstream(A_HISVEC(HEWACTR,QDWACTR,6,A68_66 ), Protostream);
 /* line 674: */
 /* line 675: */
 /* line 676: */
if ( (NL(OCWACTR_cparamcount)==0) )
{ 
 /* line 677: */
 /* line 678: */
LEWACTR = JEWACTR ;
VBMACTR_writecstream(A_HVEC(MEWACTR,A_UNITE(KEWACTR,mode2,2,LEWACTR),A68_66 ), Protostream);
} 
else
{ 
 /* line 679: */
 /* line 680: */
if ( (NL(NCWACTR_a68paramcount)>0) )
{ 
OEWACTR = 1 ;
QEWACTR = (*(&A_VINDEX(NL(CDWACTR_paramtypes),OEWACTR))) ;
NEWACTR.data[0] = A_UNITE(PEWACTR,mode2,2,QEWACTR);
SEWACTR = ' ' ;
NEWACTR.data[1] = A_UNITE(REWACTR,mode1,1,SEWACTR);
TEWACTR = 1 ;
VEWACTR = (*(&A_VINDEX(NL(ADWACTR_paramnames),TEWACTR))) ;
NEWACTR.data[2] = A_UNITE(UEWACTR,mode2,2,VEWACTR);
VBMACTR_writecstream(A_HISVEC(WEWACTR,NEWACTR,3,A68_66 ), Protostream);
 /* line 681: */
 /* line 682: */
YEWACTR = NL(NCWACTR_a68paramcount);
for ( XEWACTR_i = 2;
XEWACTR_i <= YEWACTR;
XEWACTR_i += 1 )
{ 
 /* line 683: */
DFWACTR = BFWACTR ;
ZEWACTR.data[0] = A_UNITE(CFWACTR,mode2,2,DFWACTR);
FFWACTR = (*(&A_VINDEX(NL(CDWACTR_paramtypes),XEWACTR_i))) ;
ZEWACTR.data[1] = A_UNITE(EFWACTR,mode2,2,FFWACTR);
HFWACTR = ' ' ;
ZEWACTR.data[2] = A_UNITE(GFWACTR,mode1,1,HFWACTR);
JFWACTR = (*(&A_VINDEX(NL(ADWACTR_paramnames),XEWACTR_i))) ;
ZEWACTR.data[3] = A_UNITE(IFWACTR,mode2,2,JFWACTR);
 /* line 684: */
VBMACTR_writecstream(A_HISVEC(KFWACTR,ZEWACTR,4,A68_66 ), Protostream);
}
 /* line 685: */
} 
 /* line 688: */
 /* line 689: */
 /* line 690: */
if ( NL(JCWACTR_usetempforresult) )
{ 
 /* line 691: */
if ( (NL(NCWACTR_a68paramcount)!=0) )
{ 
PFWACTR = NFWACTR ;
LFWACTR.data[0] = A_UNITE(OFWACTR,mode2,2,PFWACTR);
} 
else
{ 
 /* line 692: */
TFWACTR = RFWACTR ;
LFWACTR.data[0] = A_UNITE(SFWACTR,mode2,2,TFWACTR);
} 
 /* line 693: */
GJNACTR_ctype( NL(Resultmode), &UFWACTR );
LFWACTR.data[1] = A_UNITE(VFWACTR,mode2,2,UFWACTR);
ZFWACTR = XFWACTR ;
LFWACTR.data[2] = A_UNITE(YFWACTR,mode2,2,ZFWACTR);
 /* line 694: */
VBMACTR_writecstream(A_HISVEC(AGWACTR,LFWACTR,3,A68_66 ), Protostream);
} 
 /* line 695: */
 /* line 696: */
 /* line 697: */
if ( NL(MCWACTR_fulldec) )
{ 
 /* line 698: */
CGWACTR = NL(JCWACTR_usetempforresult);
if ( ! CGWACTR )
{CGWACTR = (NL(NCWACTR_a68paramcount)!=0);
}
if ( CGWACTR )
{ 
GGWACTR = EGWACTR ;
BGWACTR.data[0] = A_UNITE(FGWACTR,mode2,2,GGWACTR);
} 
else
{ 
 /* line 700: */
KGWACTR = IGWACTR ;
BGWACTR.data[0] = A_UNITE(JGWACTR,mode2,2,KGWACTR);
} 
OGWACTR = MGWACTR ;
BGWACTR.data[1] = A_UNITE(NGWACTR,mode2,2,OGWACTR);
 /* line 701: */
 /* line 702: */
VBMACTR_writecstream(A_HISVEC(PGWACTR,BGWACTR,2,A68_66 ), Protostream);
} 
} 
 /* line 704: */
 /* line 705: */
RGWACTR = ')' ;
VBMACTR_writecstream(A_HVEC(SGWACTR,A_UNITE(QGWACTR,mode1,1,RGWACTR),A68_66 ), Protostream);
} 
A_PROC_EXIT(prototype);
return;
} 
#undef NL

A_STATIC A68_VOID  IPWACTR_mybefore(A68_VC  S, A68_CHAR  C, A68_VC  *ReturnedValue)
{ 
A68_VC  JPWACTR;  /* clause result */
A68_VC  KPWACTR;  /* OPERATORS - trim index */
A_PROC_ENTRY(mybefore);
JPWACTR = A_VTRIM(KPWACTR,(S),A_VTSCRIPT(&(KPWACTR.upb),(S).upb,1,KMAAOSF_truncate(C, S)));
A_PROC_EXIT(mybefore);
*ReturnedValue = (JPWACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  HRWACTR_generator(A68_BOOL  FRWACTR_anonymous, A68_180  *ReturnedValue, void *NonLocals)
#define NL(x) (((IRWACTR_generator *)NonLocals)->x)
{ 
A68_180  JRWACTR;  /* clause result */
A68_180  KRWACTR;  /* OPERATORS - dynamic generator */
{ 
KRWACTR.upb = 0 ;
( FRWACTR_anonymous? A_VLOC(A68_INT ,KRWACTR): A_VHEAP(A68_INT ,KRWACTR) );
JRWACTR = KRWACTR;
} 
*ReturnedValue = (JRWACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  DJVACTR_debugmessage(A68_INT  Level, A68_VC  M)
{ 
A68_VC  JJVACTR;  /* avoid structure result */
A_PROC_ENTRY(debugmessage);
 /* line 47: */
 /* line 48: */
 /* line 49: */
if ( (ZCHACTR_tracelevel(FJVACTR)>=Level) )
{ 
 /* line 50: */
ROAAOSF_whole( Level, 0, &JJVACTR );
A_CALLPROC(FSIACTR_list,(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(IJVACTR,JJVACTR),KJVACTR),M)),(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(IJVACTR,JJVACTR),KJVACTR),M),(FSIACTR_list).nonlocals));
} 
A_PROC_EXIT(debugmessage);
return;
} 
#undef NL

A68_VOID  MJVACTR_initialdummydec(A68_129  Dummydec)
{ 
A68_72  PJVACTR;  /* collateral clause result */
A68_INT  QJVACTR;  /* YIELD */
A68_72 * RJVACTR;  /* YIELD */
A_PROC_ENTRY(initialdummydec);
 /* line 57: */
 /* line 58: */
{ 
PXIACTR_assert(OJVACTR, (Dummydec.Type==8));
 /* line 59: */
PJVACTR.Level = 1;
 /* line 60: */
PJVACTR.Block = 0;
QJVACTR = Dummydec.Decno ;
RJVACTR = (&((&A_R1INDEX(FOKACTR_ids,QJVACTR))->Environ)) ;
(*RJVACTR) = PJVACTR;
} 
A_PROC_EXIT(initialdummydec);
return;
} 
#undef NL

A_STATIC A68_INT  TJVACTR_keeplistposition(A68_INT  Decno)
{ 
A68_INT  UJVACTR_pos;
A68_BOOL  VJVACTR_found;
A68_INT  WJVACTR_upbkepts;
A68_BOOL  XJVACTR;  /* optbool result */
A68_INT  YJVACTR;  /* YIELD */
A68_INT  BKVACTR;  /* clause result */
A_PROC_ENTRY(keeplistposition);
 /* line 71: */
 /* line 72: */
{ 
UJVACTR_pos = 0;
 /* line 73: */
VJVACTR_found = A68_FALSE;
 /* line 74: */
WJVACTR_upbkepts = DZOACTR_keptdecnos.dim[0].upb;
 /* line 75: */
for ( ;; )
{ 
XJVACTR = !VJVACTR_found;
if ( XJVACTR )
{ /* line 76: */
XJVACTR = (UJVACTR_pos<WJVACTR_upbkepts);
}
if ( !(XJVACTR) ) break;
 /* line 77: */
YJVACTR = UJVACTR_pos+=1 ;
VJVACTR_found = ((*(&A_R1INDEX(DZOACTR_keptdecnos,YJVACTR)))==Decno);
}
 /* line 78: */
PXIACTR_assert(AKVACTR, VJVACTR_found);
 /* line 79: */
 /* line 80: */
BKVACTR = UJVACTR_pos;
} 
A_PROC_EXIT(keeplistposition);
return( BKVACTR );
} 
#undef NL
 /* line 84: */
 /* line 85: */
 /* line 86: */
 /* line 87: */
 /* line 88: */
 /* line 90: */

A_STATIC A68_VOID  JKVACTR_newidinfo(A68_INT  Decno, A68_INT  Mode, A68_VC  A68name, A68_56  Prefix, A68_BITS  Flags, A68_VC  Definition, A68_VC  Rhs)
{ 
A68_107 * KKVACTR_newid;
A68_BOOL  LKVACTR;  /* optbool result */
A68_INT  MKVACTR_cvariabletype;
A68_VC  NKVACTR;  /* OPERATORS - istruct -> vector */
A68_VC  OKVACTR;  /* OPERATORS - istruct -> vector */
A68_BITS  PKVACTR;  /* ADICOPS - >= */
A68_BOOL  QKVACTR;  /* optbool result */
A68_VC  RKVACTR;  /* OPERATORS - istruct -> vector */
A68_INT  SKVACTR;  /* YIELD */
A68_154  TKVACTR;  /* OPERATORS - simple index */
A68_INT  UKVACTR;  /* YIELD */
A68_VC  VKVACTR;  /* OPERATORS - istruct -> vector */
A68_56  WKVACTR;  /* OPERATORS - istruct -> vector */
A68_INT  XKVACTR;  /* YIELD */
A68_LINT * YKVACTR;  /* YIELD */
A68_56  ZKVACTR;  /* clause result */
A68_72  ALVACTR;  /* avoid structure result */
A68_BOOL  BLVACTR;  /* optbool result */
A68_BITS  CLVACTR;  /* ADICOPS - >= */
A68_INT  DLVACTR;  /* YIELD */
A68_154  ELVACTR;  /* OPERATORS - simple index */
A68_INT  FLVACTR;  /* YIELD */
A68_156 * GLVACTR_keptinfo;
A68_BOOL  HLVACTR;  /* optbool result */
A68_BOOL  ILVACTR;  /* optbool result */
A68_BOOL  JLVACTR;  /* clause result */
A68_INT  KLVACTR;  /* YIELD */
A68_LINT * LLVACTR;  /* YIELD */
A68_56  MLVACTR_newidprefix;
A68_BITS  NLVACTR;  /* clause result */
A68_BITS  OLVACTR_new_flags;
A68_BOOL  PLVACTR;  /* optbool result */
A68_INT  QLVACTR;  /* YIELD */
A68_VC  RLVACTR;  /* clause result */
A68_VC  SLVACTR;  /* avoid structure result */
A68_VC  ULVACTR;  /* clause result */
A68_VC  WLVACTR;  /* avoid structure result */
A68_VC  XLVACTR;  /* OPERATORS - istruct -> vector */
A68_VC  YLVACTR;  /* OPERATORS - scalar -> [] or VEC[] */
union {  /* BIOP 99 */
A68_VC   source;
A68_VC   destination;
} ZLVACTR; 
A68_VC  AMVACTR_c_name;
A68_107  BMVACTR;  /* collateral clause result */
A68_72  CMVACTR;  /* avoid structure result */
A_PROC_ENTRY(newidinfo);
 /* line 95: */
 /* line 96: */
{ 
KKVACTR_newid = HPKACTR_get_idinfo(Decno);
 /* line 98: */
 /* line 99: */
LKVACTR = A_LB_GE(Flags,KOKACTR_ididentityflag);
if ( LKVACTR )
{LKVACTR = !A_LB_GE(Flags,QOKACTR_idoptimisedflag);
}
 /* line 100: */
if ( ! LKVACTR )
{LKVACTR = A_LB_GE(Flags,NOKACTR_idforallflag);
}
 /* line 101: */
if ( ! LKVACTR )
{LKVACTR = A_LB_GE(Flags,POKACTR_idformalflag);
}
MKVACTR_cvariabletype = CJNACTR_givecvariabletype(Mode, LKVACTR);
 /* line 104: */
 /* line 105: */
 /* line 106: */
 /* line 107: */
 /* line 108: */
if ( A_VC_NE(A_HISVEC(NKVACTR,Prefix,7,A68_CHAR ),A_HISVEC(OKVACTR,MKOACTR_nulluname,7,A68_CHAR )) )
{ 
 /* line 109: */
 /* line 110: */
PKVACTR = (*(&(KKVACTR_newid->Flags))) ;
QKVACTR = A_LB_GE(PKVACTR,LOKACTR_idkeptflag);
if ( QKVACTR )
{QKVACTR = GZOACTR_rscompatiblewithpreviousversion;
}
if ( QKVACTR )
{ /* line 111: */
 /* line 112: */
SKVACTR = 1 ;
TKVACTR = (*(&((&A_R1INDEX(MZOACTR_specs,SKVACTR))->Keptinfo))) ;
UKVACTR = TJVACTR_keeplistposition(Decno) ;
WKVACTR = (*(&((&A_VINDEX(TKVACTR,UKVACTR))->Prefix))) ;
QKVACTR = A_VC_NE(A_HISVEC(RKVACTR,Prefix,7,A68_CHAR ),A_HISVEC(VKVACTR,WKVACTR,7,A68_CHAR ));
}
 /* line 113: */
if ( QKVACTR )
{ 
HZOACTR_transcompatiblewithpreviousversi = A68_FALSE;
 /* line 114: */
 /* line 116: */
XKVACTR = 1 ;
YKVACTR = (&((&A_R1INDEX(MZOACTR_specs,XKVACTR))->Timeoflastchange)) ;
(*YKVACTR) = (*(&((&BYIACTR_config_info)->Translationtime)));
} 
 /* line 117: */
 /* line 118: */
 /* line 120: */
ZKVACTR = Prefix;
} 
else
{ 
ZNLACTR_currentenviron(  &ALVACTR );
BLVACTR = !YPLACTR_isgloballevel(ALVACTR);
if ( ! BLVACTR )
{ /* line 122: */
CLVACTR = (*(&(KKVACTR_newid->Flags))) ;
BLVACTR = !A_LB_GE(CLVACTR,LOKACTR_idkeptflag);
}
 /* line 123: */
if ( ! BLVACTR )
{BLVACTR = !GZOACTR_rscompatiblewithpreviousversion;
}
 /* line 124: */
if ( BLVACTR )
{ 
 /* line 125: */
ZKVACTR = ZGMACTR_newuniquename();
} 
else
{ 
{ 
DLVACTR = 1 ;
ELVACTR = (*(&((&A_R1INDEX(MZOACTR_specs,DLVACTR))->Keptinfo))) ;
FLVACTR = TJVACTR_keeplistposition(Decno) ;
GLVACTR_keptinfo = (&A_VINDEX(ELVACTR,FLVACTR));
 /* line 128: */
 /* line 129: */
 /* line 130: */
HLVACTR = A_LB_GE(Flags,KOKACTR_ididentityflag);
if ( HLVACTR )
{HLVACTR = !(*(&(GLVACTR_keptinfo->Iddec)));
}
 /* line 132: */
if ( ! HLVACTR )
{ /* line 133: */
 /* line 134: */
ILVACTR = A_LB_GE(Flags,QOKACTR_idoptimisedflag);
if ( ILVACTR )
{ILVACTR = !(*(&(GLVACTR_keptinfo->Optimised)));
}
 /* line 135: */
HLVACTR = ILVACTR;
}
JLVACTR = HLVACTR;
if ( JLVACTR )
{ 
HZOACTR_transcompatiblewithpreviousversi = A68_FALSE;
 /* line 136: */
KLVACTR = 1 ;
LLVACTR = (&((&A_R1INDEX(MZOACTR_specs,KLVACTR))->Timeoflastchange)) ;
(*LLVACTR) = (*(&((&BYIACTR_config_info)->Translationtime)));
 /* line 137: */
 /* line 138: */
 /* line 140: */
ZKVACTR = ZGMACTR_newuniquename();
} 
else
{ 
ZKVACTR = (*(&(GLVACTR_keptinfo->Prefix)));
} 
} 
} 
} 
MLVACTR_newidprefix = ZKVACTR;
 /* line 142: */
 /* line 144: */
if ( CTKACTR_standopsym(A68name) )
{ 
NLVACTR = ROKACTR_idopflag;
} 
else
{ 
NLVACTR = JOKACTR_idnoflags;
} 
OLVACTR_new_flags = (A68_BITS )((A68_BITS )((A68_BITS )((*(&(KKVACTR_newid->Flags)))&WOKACTR_idpresetflags)|Flags)|NLVACTR);
 /* line 146: */
 /* line 147: */
 /* line 148: */
PLVACTR = A_LB_GE(Flags,POKACTR_idformalflag);
if ( PLVACTR )
{PLVACTR = (A68name.upb>0);
}
if ( PLVACTR )
{ /* line 149: */
QLVACTR = 1 ;
PLVACTR = ((*(&A_VINDEX(A68name,QLVACTR)))!='!');
}
 /* line 151: */
if ( PLVACTR )
{ 
 /* line 152: */
SNAAOSF_capitalised( A68name, &SLVACTR );
RLVACTR = SLVACTR;
} 
else
{ 
if ( A_LB_GE(OLVACTR_new_flags,ROKACTR_idopflag) )
{ 
ULVACTR = VLVACTR;
} 
else
{ 
AQKACTR_afterbang( A68name, &WLVACTR );
ULVACTR = WLVACTR;
} 
 /* line 153: */
ZLVACTR.source = A_VC_PLUS(A_VC_PLUS(A_HISVEC(XLVACTR,MLVACTR_newidprefix,7,A68_CHAR ),A_HVEC(YLVACTR,'_',A68_CHAR )),ULVACTR) ;
RLVACTR = (ZLVACTR.destination);
} 
AMVACTR_c_name = RLVACTR;
 /* line 155: */
 /* line 156: */
 /* line 157: */
BMVACTR.Mode = Mode;
 /* line 158: */
BMVACTR.Cvariabletype = MKVACTR_cvariabletype;
 /* line 159: */
ZNLACTR_currentenviron(  &CMVACTR );
BMVACTR.Environ = CMVACTR;
 /* line 160: */
BMVACTR.Name = A68name;
 /* line 161: */
BMVACTR.C_name = AMVACTR_c_name;
 /* line 162: */
BMVACTR.Prefix = MLVACTR_newidprefix;
 /* line 163: */
BMVACTR.Flags = OLVACTR_new_flags;
 /* line 165: */
BMVACTR.Definition = Definition;
 /* line 166: */
BMVACTR.Rhs = Rhs;
(*KKVACTR_newid) = BMVACTR;
} 
A_PROC_EXIT(newidinfo);
return;
} 
#undef NL

A_STATIC A68_VOID  FMVACTR_outputcdeclaration(A68_INT  Decno, A68_97 * Initvalue)
{ 
A68_107 * GMVACTR_idinfo;
A68_INT  HMVACTR_level;
A68_INT  IMVACTR_block;
A68_BOOL  JMVACTR;  /* optbool result */
A68_BOOL  KMVACTR_global;
A68_BOOL  LMVACTR;  /* optbool result */
A68_BITS  MMVACTR;  /* ADICOPS - >= */
A68_BOOL  NMVACTR_kept;
A68_INT  OMVACTR;  /* clause result */
A68_INT  PMVACTR_decstream;
A68_INT  QMVACTR_codestream;
A68_59  SMVACTR_optidentity;   /* proc value of non-global proc */
A68_60  WPVACTR_declarecvariable;   /* proc value of non-global proc */
A68_BOOL  SRVACTR;  /* optbool result */
A68_BITS  TRVACTR;  /* ADICOPS - >= */
A68_98  URVACTR;  /* united object - for case conformity */
A68_VC  VRVACTR;  /* avoid structure result */
A68_VC  WRVACTR_cf;
A68_BOOL  XRVACTR;  /* optbool result */
A68_BOOL  YRVACTR;  /* optbool result */
A68_BITS  ZRVACTR;  /* ADICOPS - >= */
A68_100  ASVACTR_id;
A68_107 * BSVACTR;  /* clause result */
A68_107 * CSVACTR_rhsidinfo;
A68_BOOL  DSVACTR;  /* optbool result */
A68_BITS  ESVACTR;  /* ADICOPS - >= */
A68_BOOL  FSVACTR;  /* optbool result */
A68_BITS  GSVACTR;  /* ADICOPS - >= */
A68_BOOL  HSVACTR;  /* clause result */
A68_VC  ISVACTR;  /* avoid structure result */
A_PROC_ENTRY(outputcdeclaration);
 /* line 182: */
 /* line 183: */
{ 
GMVACTR_idinfo = HPKACTR_get_idinfo(Decno);
 /* line 184: */
HMVACTR_level = (*(&((&(GMVACTR_idinfo->Environ))->Level)));
 /* line 185: */
IMVACTR_block = (*(&((&(GMVACTR_idinfo->Environ))->Block)));
 /* line 186: */
JMVACTR = (HMVACTR_level==0);
if ( JMVACTR )
{JMVACTR = (IMVACTR_block==0);
}
KMVACTR_global = JMVACTR;
 /* line 187: */
LMVACTR = KMVACTR_global;
if ( LMVACTR )
{MMVACTR = (*(&(GMVACTR_idinfo->Flags))) ;
LMVACTR = A_LB_GE(MMVACTR,LOKACTR_idkeptflag);
}
NMVACTR_kept = LMVACTR;
 /* line 189: */
 /* line 190: */
 /* line 191: */
 /* line 192: */
if ( KMVACTR_global )
{ 
 /* line 193: */
OMVACTR = TQLACTR_nonlocdecstream(HMVACTR_level);
} 
else
{ 
OMVACTR = ZQLACTR_locdecstream(HMVACTR_level);
} 
PMVACTR_decstream = OMVACTR;
 /* line 195: */
QMVACTR_codestream = WQLACTR_codestream(HMVACTR_level);
 /* line 197: */
A_CLOSURE( SMVACTR_optidentity, TMVACTR_optidentity, UMVACTR_optidentity );
(( UMVACTR_optidentity * ) ( SMVACTR_optidentity.nonlocals )) -> Decno = Decno;
(( UMVACTR_optidentity * ) ( SMVACTR_optidentity.nonlocals )) -> Initvalue = Initvalue;
(( UMVACTR_optidentity * ) ( SMVACTR_optidentity.nonlocals )) -> NMVACTR_kept = NMVACTR_kept;
(( UMVACTR_optidentity * ) ( SMVACTR_optidentity.nonlocals )) -> GMVACTR_idinfo = GMVACTR_idinfo;
 /* line 276: */
 /* line 277: */
 /* line 279: */
A_CLOSURE( WPVACTR_declarecvariable, XPVACTR_declarecvariable, YPVACTR_declarecvariable );
(( YPVACTR_declarecvariable * ) ( WPVACTR_declarecvariable.nonlocals )) -> KMVACTR_global = KMVACTR_global;
(( YPVACTR_declarecvariable * ) ( WPVACTR_declarecvariable.nonlocals )) -> GMVACTR_idinfo = GMVACTR_idinfo;
(( YPVACTR_declarecvariable * ) ( WPVACTR_declarecvariable.nonlocals )) -> Decno = Decno;
(( YPVACTR_declarecvariable * ) ( WPVACTR_declarecvariable.nonlocals )) -> PMVACTR_decstream = PMVACTR_decstream;
(( YPVACTR_declarecvariable * ) ( WPVACTR_declarecvariable.nonlocals )) -> Initvalue = Initvalue;
(( YPVACTR_declarecvariable * ) ( WPVACTR_declarecvariable.nonlocals )) -> QMVACTR_codestream = QMVACTR_codestream;
 /* line 303: */
 /* line 304: */
SRVACTR = (Initvalue!=(A68_97 *)A68_NIL);
if ( SRVACTR )
{ /* line 305: */
TRVACTR = (*(&(GMVACTR_idinfo->Flags))) ;
SRVACTR = A_LB_GE(TRVACTR,KOKACTR_ididentityflag);
}
if ( SRVACTR )
{ 
 /* line 306: */
URVACTR = (*(&(Initvalue->Extra))) ;
switch ( URVACTR.mode )
{ 
case 1: /* LONG BITS */
 /* line 307: */
 /* line 308: */
PWPACTR_getcfragment( Initvalue, &VRVACTR );
A_CALLPROC(SMVACTR_optidentity,(VRVACTR),(VRVACTR,(SMVACTR_optidentity).nonlocals));
break;
case 6: /* VECTOR [] CHAR */
WRVACTR_cf = (URVACTR.data.mode6);
 /* line 309: */
 /* line 310: */
 /* line 311: */
XRVACTR = DTPACTR_hasattribute(Initvalue, ZIJACTR_constant);
if ( XRVACTR )
{ /* line 312: */
XRVACTR = !DTPACTR_hasattribute(Initvalue, FJJACTR_isnil);
}
 /* line 313: */
if ( XRVACTR )
{ /* line 314: */
XRVACTR = (RMMACTR_modetype((*(&(Initvalue->Mode))))==EEAACTR_primitive);
}
 /* line 315: */
if ( ! XRVACTR )
{ /* line 316: */
 /* line 317: */
YRVACTR = DTPACTR_hasattribute(Initvalue, (A68_BITS )(ZIJACTR_constant|FJJACTR_isnil));
if ( YRVACTR )
{ /* line 253: */
 /* line 318: */
ZRVACTR = (*(&(GMVACTR_idinfo->Flags))) ;
YRVACTR = !A_LB_GE(ZRVACTR,LOKACTR_idkeptflag);
}
 /* line 319: */
XRVACTR = YRVACTR;
}
if ( XRVACTR )
{ 
 /* line 320: */
 /* line 321: */
A_CALLPROC(SMVACTR_optidentity,(WRVACTR_cf),(WRVACTR_cf,(SMVACTR_optidentity).nonlocals));
} 
else
{ 
 /* line 322: */
A_CALLPROC(WPVACTR_declarecvariable,(),((WPVACTR_declarecvariable).nonlocals));
} 
break;
case 4: /* STRUCT(INT)  */
ASVACTR_id = (URVACTR.data.mode4);
 /* line 323: */
 /* line 324: */
{ 
 /* line 325: */
 /* line 326: */
if ( (ASVACTR_id.Idno==EOKACTR_alienidno) )
{ 
BSVACTR = (&DOKACTR_alienidinfo);
} 
else
{ 
 /* line 327: */
BSVACTR = HPKACTR_get_idinfo(ASVACTR_id.Idno);
} 
CSVACTR_rhsidinfo = BSVACTR;
 /* line 328: */
 /* line 329: */
 /* line 330: */
DSVACTR = YPLACTR_isgloballevel((*(&(CSVACTR_rhsidinfo->Environ))));
if ( DSVACTR )
{ /* line 331: */
DSVACTR = ((*(&(GMVACTR_idinfo->Mode)))==(*(&(CSVACTR_rhsidinfo->Mode))));
}
 /* line 334: */
if ( DSVACTR )
{ /* line 335: */
ESVACTR = (*(&(GMVACTR_idinfo->Flags))) ;
FSVACTR = !A_LB_GE(ESVACTR,LOKACTR_idkeptflag);
if ( ! FSVACTR )
{ /* line 336: */
FSVACTR = (ASVACTR_id.Idno==EOKACTR_alienidno);
}
if ( ! FSVACTR )
{ /* line 337: */
GSVACTR = (*(&(CSVACTR_rhsidinfo->Flags))) ;
FSVACTR = A_LB_GE(GSVACTR,LOKACTR_idkeptflag);
}
 /* line 338: */
DSVACTR = FSVACTR;
}
HSVACTR = DSVACTR;
if ( HSVACTR )
{ 
 /* line 339: */
 /* line 340: */
DSKACTR_idfullname( ASVACTR_id.Idno, &ISVACTR );
A_CALLPROC(SMVACTR_optidentity,(ISVACTR),(ISVACTR,(SMVACTR_optidentity).nonlocals));
} 
else
{ 
 /* line 342: */
A_CALLPROC(WPVACTR_declarecvariable,(),((WPVACTR_declarecvariable).nonlocals));
} 
} 
break;
default: 
 /* line 343: */
 /* line 344: */
A_CALLPROC(WPVACTR_declarecvariable,(),((WPVACTR_declarecvariable).nonlocals));
break;
} 
} 
else
{ 
 /* line 345: */
A_CALLPROC(WPVACTR_declarecvariable,(),((WPVACTR_declarecvariable).nonlocals));
} 
} 
A_PROC_EXIT(outputcdeclaration);
return;
} 
#undef NL

A68_VOID  LSVACTR_iddec(A68_129  Identifierdec, A68_104 ** Valuestack)
{ 
A68_INT  USVACTR_type;
A68_INT  VSVACTR_mode;
A68_INT  WSVACTR_decno;
A68_VC  XSVACTR_name;
A68_107 * YSVACTR_newid;
A68_97 * ATVACTR_initialvalue;
A68_VC  BTVACTR;  /* OPERATORS - nil -> mode */
A68_VC  CTVACTR;  /* OPERATORS - nil -> mode */
A68_VC  DTVACTR;  /* OPERATORS - nil -> mode */
A68_VC  ETVACTR;  /* OPERATORS - nil -> mode */
A68_VC  FTVACTR;  /* OPERATORS - nil -> mode */
A68_VC  GTVACTR;  /* OPERATORS - nil -> mode */
A68_VC  HTVACTR;  /* OPERATORS - nil -> mode */
A68_VC  ITVACTR;  /* OPERATORS - nil -> mode */
A68_VC  JTVACTR;  /* OPERATORS - nil -> mode */
A68_VC  KTVACTR;  /* OPERATORS - nil -> mode */
A68_97 * LTVACTR_initialvalue;
A68_INT  OTVACTR_rowmode;
A68_INT  PTVACTR_forallmode;
A68_VC  QTVACTR;  /* OPERATORS - nil -> mode */
A68_VC  RTVACTR;  /* OPERATORS - nil -> mode */
A68_107  STVACTR;  /* collateral clause result */
A68_72  TTVACTR;  /* avoid structure result */
A68_VC  UTVACTR;  /* OPERATORS - nil -> mode */
A68_VC  VTVACTR;  /* OPERATORS - nil -> mode */
A68_VC  WTVACTR;  /* OPERATORS - nil -> mode */
A_PROC_ENTRY(iddec);
 /* line 366: */
 /* line 367: */
{ 
 /* line 368: */
 /* line 369: */
 /* line 370: */
 /* line 371: */
 /* line 372: */
 /* line 373: */
 /* line 374: */
 /* line 376: */
USVACTR_type = Identifierdec.Type;
 /* line 377: */
VSVACTR_mode = Identifierdec.Mode;
 /* line 378: */
WSVACTR_decno = Identifierdec.Decno;
 /* line 380: */
XSVACTR_name = Identifierdec.Name;
 /* line 381: */
YSVACTR_newid = HPKACTR_get_idinfo(WSVACTR_decno);
 /* line 383: */
 /* line 385: */
 /* line 386: */
switch ( USVACTR_type )
{ 
case 1: 
 /* line 387: */
{ 
QIVACTR_evaluatestack(Valuestack);
 /* line 388: */
ATVACTR_initialvalue = (&((*Valuestack)->Value));
 /* line 389: */
(*Valuestack) = (*(&((*Valuestack)->Rest)));
 /* line 390: */
JKVACTR_newidinfo(WSVACTR_decno, VSVACTR_mode, XSVACTR_name, MKOACTR_nulluname, KOKACTR_ididentityflag, A_VVAC(CTVACTR), A_VVAC(BTVACTR));
 /* line 391: */
 /* line 392: */
 /* line 393: */
FMVACTR_outputcdeclaration(WSVACTR_decno, ATVACTR_initialvalue);
} 
break;
case 2: 
 /* line 394: */
{ 
 /* line 341: */
 /* line 395: */
 /* line 396: */
if ( (VSVACTR_mode>WFAACTR_refrefmark) )
{ 
 /* line 397: */
FXIACTR_portabilitywarning(810);
} 
 /* line 398: */
JKVACTR_newidinfo(WSVACTR_decno, VSVACTR_mode, XSVACTR_name, MKOACTR_nulluname, JOKACTR_idnoflags, A_VVAC(ETVACTR), A_VVAC(DTVACTR));
 /* line 399: */
 /* line 400: */
 /* line 401: */
FMVACTR_outputcdeclaration(WSVACTR_decno, ZSVACTR_noinitialvalue);
} 
break;
case 3: 
 /* line 402: */
 /* line 403: */
 /* line 404: */
JKVACTR_newidinfo(WSVACTR_decno, VSVACTR_mode, XSVACTR_name, MKOACTR_nulluname, POKACTR_idformalflag, A_VVAC(GTVACTR), A_VVAC(FTVACTR));
break;
case 4: 
 /* line 405: */
{ 
JKVACTR_newidinfo(WSVACTR_decno, VSVACTR_mode, XSVACTR_name, MKOACTR_nulluname, OOKACTR_idforflag, A_VVAC(ITVACTR), A_VVAC(HTVACTR));
 /* line 406: */
 /* line 407: */
 /* line 408: */
FMVACTR_outputcdeclaration(WSVACTR_decno, ZSVACTR_noinitialvalue);
} 
break;
case 5: 
 /* line 409: */
{ 
JKVACTR_newidinfo(WSVACTR_decno, VSVACTR_mode, XSVACTR_name, MKOACTR_nulluname, JOKACTR_idnoflags, A_VVAC(KTVACTR), A_VVAC(JTVACTR));
 /* line 410: */
QIVACTR_evaluatestack(Valuestack);
 /* line 411: */
LTVACTR_initialvalue = (&((*Valuestack)->Value));
 /* line 412: */
(*Valuestack) = (*(&((*Valuestack)->Rest)));
 /* line 414: */
 /* line 415: */
 /* line 416: */
FMVACTR_outputcdeclaration(WSVACTR_decno, LTVACTR_initialvalue);
} 
break;
case 6: 
 /* line 417: */
{ 
PXIACTR_assert(NTVACTR, A68_FALSE);
 /* line 418: */
 /* line 419: */
/*SKIP*/;
} 
break;
case 7: 
 /* line 424: */
{ 
OTVACTR_rowmode = (*(&((&((*Valuestack)->Value))->Mode)));
 /* line 425: */
PTVACTR_forallmode = VSVACTR_mode;
 /* line 435: */
JKVACTR_newidinfo(WSVACTR_decno, PTVACTR_forallmode, XSVACTR_name, MKOACTR_nulluname, NOKACTR_idforallflag, A_VVAC(RTVACTR), A_VVAC(QTVACTR));
 /* line 436: */
 /* line 437: */
 /* line 438: */
FMVACTR_outputcdeclaration(WSVACTR_decno, ZSVACTR_noinitialvalue);
} 
break;
case 8: 
 /* line 439: */
 /* line 440: */
 /* line 441: */
STVACTR.Mode = VSVACTR_mode;
 /* line 442: */
STVACTR.Cvariabletype = 0;
 /* line 443: */
ZNLACTR_currentenviron(  &TTVACTR );
STVACTR.Environ = TTVACTR;
 /* line 444: */
STVACTR.Name = XSVACTR_name;
 /* line 445: */
STVACTR.C_name = A_VVAC(UTVACTR);
 /* line 446: */
STVACTR.Prefix = ZGMACTR_newuniquename();
 /* line 447: */
 /* line 448: */
STVACTR.Flags = (A68_BITS )((A68_BITS )((*(&(YSVACTR_newid->Flags)))&WOKACTR_idpresetflags)|KOKACTR_ididentityflag);
 /* line 450: */
STVACTR.Definition = A_VVAC(VTVACTR);
 /* line 451: */
STVACTR.Rhs = A_VVAC(WTVACTR);
 /* line 452: */
(*YSVACTR_newid) = STVACTR;
break;
default: 
 /* line 453: */
 /* line 454: */
PXIACTR_assert(YTVACTR, A68_FALSE);
break;
} 
} 
A_PROC_EXIT(iddec);
return;
} 
#undef NL
 /* line 458: */
 /* line 460: */

A68_VOID  CUVACTR_ccdec(A68_129  Choicedec, A68_97 * Enquiry, A68_INT  Modeindex)
{ 
A68_INT  FUVACTR_decno;
A68_INT  GUVACTR_choicemode;
A68_VC  HUVACTR;  /* OPERATORS - nil -> mode */
A68_VC  IUVACTR;  /* OPERATORS - nil -> mode */
A68_97  JUVACTR;  /* collateral clause result */
A68_VC  LUVACTR;  /* avoid structure result */
A68_VC  NUVACTR;  /* avoid structure result */
A68_98  OUVACTR;  /* OPERATORS - mode -> union mode */
A68_VC  PUVACTR;  /* YIELD */
A68_VC  EVVACTR;  /* OPERATORS - nil -> mode */
A68_VC  FVVACTR;  /* OPERATORS - nil -> mode */
A68_VC  GVVACTR;  /* avoid structure result */
A68_VC  HVVACTR_enquiryname;
A68_VC  IVVACTR;  /* avoid structure result */
A68_VC  JVVACTR_newunionname;
A68_INT  KVVACTR_codestream;
A68_180  LVVACTR;  /* avoid structure result */
A68_180  MVVACTR;  /* avoid structure result */
A68_INT  NVVACTR_modeoffset;
A68_268  OVVACTR;  /* collateral clause result */
A68_66  RVVACTR;  /* OPERATORS - mode -> union mode */
A68_VC  SVVACTR;  /* YIELD */
A68_66  TVVACTR;  /* OPERATORS - mode -> union mode */
A68_66  UVVACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  VVVACTR;  /* YIELD */
A68_66  WVVACTR;  /* OPERATORS - mode -> union mode */
A68_66  ZVVACTR;  /* OPERATORS - mode -> union mode */
A68_VC  AWVACTR;  /* YIELD */
A68_66  BWVACTR;  /* OPERATORS - mode -> union mode */
A68_65  CWVACTR;  /* OPERATORS - istruct -> vector */
A68_257  DWVACTR;  /* collateral clause result */
A68_66  EWVACTR;  /* OPERATORS - mode -> union mode */
A68_66  HWVACTR;  /* OPERATORS - mode -> union mode */
A68_VC  IWVACTR;  /* YIELD */
A68_VC  JWVACTR;  /* avoid structure result */
A68_66  KWVACTR;  /* OPERATORS - mode -> union mode */
A68_66  LWVACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  MWVACTR;  /* YIELD */
A68_66  NWVACTR;  /* OPERATORS - mode -> union mode */
A68_65  OWVACTR;  /* OPERATORS - istruct -> vector */
A68_180  PWVACTR;  /* avoid structure result */
A68_180  QWVACTR;  /* avoid structure result */
A68_VC  RWVACTR;  /* avoid structure result */
A68_VC  SWVACTR;  /* avoid structure result */
A68_VC  TWVACTR_uniontable;
A68_256  UWVACTR;  /* collateral clause result */
A68_66  VWVACTR;  /* OPERATORS - mode -> union mode */
A68_66  YWVACTR;  /* OPERATORS - mode -> union mode */
A68_VC  ZWVACTR;  /* YIELD */
A68_66  AXVACTR;  /* OPERATORS - mode -> union mode */
A68_66  DXVACTR;  /* OPERATORS - mode -> union mode */
A68_VC  EXVACTR;  /* YIELD */
A68_66  FXVACTR;  /* OPERATORS - mode -> union mode */
A68_66  IXVACTR;  /* OPERATORS - mode -> union mode */
A68_VC  JXVACTR;  /* YIELD */
A68_66  KXVACTR;  /* OPERATORS - mode -> union mode */
A68_65  LXVACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(ccdec);
 /* line 464: */
 /* line 465: */
{ 
PXIACTR_assert(EUVACTR, (Choicedec.Type==6));
 /* line 466: */
FUVACTR_decno = Choicedec.Decno;
 /* line 467: */
GUVACTR_choicemode = Choicedec.Mode;
 /* line 469: */
 /* line 470: */
 /* line 471: */
if ( (Modeindex>0) )
{ 
 /* line 472: */
JKVACTR_newidinfo(FUVACTR_decno, GUVACTR_choicemode, Choicedec.Name, MKOACTR_nulluname, (A68_BITS )(KOKACTR_ididentityflag|MOKACTR_idccdecflag), A_VVAC(IUVACTR), A_VVAC(HUVACTR));
 /* line 473: */
 /* line 474: */
 /* line 475: */
 /* line 476: */
JUVACTR.Mode = GUVACTR_choicemode;
 /* line 477: */
JUVACTR.Info = YIJACTR_defaultinfo;
 /* line 478: */
 /* line 479: */
PWPACTR_getcfragment( Enquiry, &LUVACTR );
ROAAOSF_whole( Modeindex, 0, &NUVACTR );
PUVACTR = A_VC_PLUS(A_VC_PLUS(LUVACTR,MUVACTR),NUVACTR) ;
JUVACTR.Extra = A_UNITE(OUVACTR,mode6,6,PUVACTR);
 /* line 480: */
FMVACTR_outputcdeclaration(FUVACTR_decno, SUVACTR_assignment(A_LOC(A68_97 ), JUVACTR));
} 
else
{ 
 /* line 481: */
 /* line 482: */
if ( (Modeindex<0) )
{ 
 /* line 483: */
JKVACTR_newidinfo(FUVACTR_decno, GUVACTR_choicemode, Choicedec.Name, MKOACTR_nulluname, (A68_BITS )(KOKACTR_ididentityflag|MOKACTR_idccdecflag), A_VVAC(FVVACTR), A_VVAC(EVVACTR));
 /* line 484: */
FMVACTR_outputcdeclaration(FUVACTR_decno, (A68_97 *)A68_NIL);
 /* line 486: */
PWPACTR_getcfragment( Enquiry, &GVVACTR );
HVVACTR_enquiryname = GVVACTR;
 /* line 487: */
DSKACTR_idfullname( FUVACTR_decno, &IVVACTR );
JVVACTR_newunionname = IVVACTR;
 /* line 489: */
KVVACTR_codestream = WQLACTR_codestream(EQLACTR_currentlevel());
 /* line 491: */
 /* line 492: */
A_CALLPROC(HUMACTR_constituents,((*(&(Enquiry->Mode))), &LVVACTR),((*(&(Enquiry->Mode))), &LVVACTR,(HUMACTR_constituents).nonlocals));
A_CALLPROC(HUMACTR_constituents,(GUVACTR_choicemode, &MVVACTR),(GUVACTR_choicemode, &MVVACTR,(HUMACTR_constituents).nonlocals));
NVVACTR_modeoffset = (BTQACTR_findints(MVVACTR, LVVACTR)-1);
 /* line 494: */
 /* line 495: */
SVVACTR = QVVACTR ;
OVVACTR.data[0] = A_UNITE(RVVACTR,mode2,2,SVVACTR);
OVVACTR.data[1] = A_UNITE(TVVACTR,mode2,2,JVVACTR_newunionname);
 /* line 496: */
VVVACTR = ',' ;
OVVACTR.data[2] = A_UNITE(UVVACTR,mode1,1,VVVACTR);
OVVACTR.data[3] = A_UNITE(WVVACTR,mode2,2,HVVACTR_enquiryname);
 /* line 497: */
AWVACTR = YVVACTR ;
OVVACTR.data[4] = A_UNITE(ZVVACTR,mode2,2,AWVACTR);
OVVACTR.data[5] = A_UNITE(BWVACTR,mode4,4,EIAACTR_cnewline);
 /* line 498: */
VBMACTR_writecstream(A_HISVEC(CWVACTR,OVVACTR,6,A68_66 ), KVVACTR_codestream);
 /* line 500: */
 /* line 501: */
 /* line 502: */
if ( (NVVACTR_modeoffset>0) )
{ 
DWVACTR.data[0] = A_UNITE(EWVACTR,mode2,2,JVVACTR_newunionname);
 /* line 503: */
IWVACTR = GWVACTR ;
DWVACTR.data[1] = A_UNITE(HWVACTR,mode2,2,IWVACTR);
ROAAOSF_whole( NVVACTR_modeoffset, 0, &JWVACTR );
DWVACTR.data[2] = A_UNITE(KWVACTR,mode2,2,JWVACTR);
 /* line 504: */
MWVACTR = ';' ;
DWVACTR.data[3] = A_UNITE(LWVACTR,mode1,1,MWVACTR);
DWVACTR.data[4] = A_UNITE(NWVACTR,mode4,4,EIAACTR_cnewline);
 /* line 505: */
 /* line 506: */
VBMACTR_writecstream(A_HISVEC(OWVACTR,DWVACTR,5,A68_66 ), KVVACTR_codestream);
} 
else
{ 
 /* line 507: */
 /* line 510: */
if ( (NVVACTR_modeoffset<0) )
{ 
 /* line 511: */
 /* line 512: */
 /* line 513: */
A_CALLPROC(HUMACTR_constituents,(GUVACTR_choicemode, &PWVACTR),(GUVACTR_choicemode, &PWVACTR,(HUMACTR_constituents).nonlocals));
A_CALLPROC(HUMACTR_constituents,((*(&(Enquiry->Mode))), &QWVACTR),((*(&(Enquiry->Mode))), &QWVACTR,(HUMACTR_constituents).nonlocals));
RTQACTR_uniontouniontable( QWVACTR, PWVACTR, &RWVACTR );
MPJACTR_replacecontrolchars( RWVACTR, &SWVACTR );
TWVACTR_uniontable = SWVACTR;
 /* line 515: */
 /* line 516: */
UWVACTR.data[0] = A_UNITE(VWVACTR,mode2,2,JVVACTR_newunionname);
ZWVACTR = XWVACTR ;
UWVACTR.data[1] = A_UNITE(YWVACTR,mode2,2,ZWVACTR);
 /* line 517: */
UWVACTR.data[2] = A_UNITE(AXVACTR,mode2,2,TWVACTR_uniontable);
EXVACTR = CXVACTR ;
UWVACTR.data[3] = A_UNITE(DXVACTR,mode2,2,EXVACTR);
UWVACTR.data[4] = A_UNITE(FXVACTR,mode2,2,HVVACTR_enquiryname);
 /* line 518: */
JXVACTR = HXVACTR ;
UWVACTR.data[5] = A_UNITE(IXVACTR,mode2,2,JXVACTR);
UWVACTR.data[6] = A_UNITE(KXVACTR,mode4,4,EIAACTR_cnewline);
 /* line 519: */
 /* line 520: */
 /* line 521: */
 /* line 522: */
VBMACTR_writecstream(A_HISVEC(LXVACTR,UWVACTR,7,A68_66 ), KVVACTR_codestream);
} 
} 
} 
else
{ 
 /* line 523: */
 /* line 524: */
PXIACTR_assert(NXVACTR, A68_FALSE);
} 
} 
} 
A_PROC_EXIT(ccdec);
return;
} 
#undef NL

A68_VOID  PXVACTR_declarenonlocallabel(A68_INT  Labno)
{ 
A68_109 * QXVACTR_labinfo;
A68_BOOL  RXVACTR;  /* clause result */
A68_BITS  SXVACTR;  /* ADICOPS - <= */
A68_INT  TXVACTR_level;
A68_271  UXVACTR;  /* collateral clause result */
A68_66  XXVACTR;  /* OPERATORS - mode -> union mode */
A68_VC  YXVACTR;  /* YIELD */
A68_VC  ZXVACTR;  /* avoid structure result */
A68_66  AYVACTR;  /* OPERATORS - mode -> union mode */
A68_66  BYVACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  CYVACTR;  /* YIELD */
A68_66  DYVACTR;  /* OPERATORS - mode -> union mode */
A68_INT  EYVACTR;  /* clause result */
A68_65  FYVACTR;  /* OPERATORS - istruct -> vector */
A68_268  GYVACTR;  /* collateral clause result */
A68_66  JYVACTR;  /* OPERATORS - mode -> union mode */
A68_VC  KYVACTR;  /* YIELD */
A68_VC  MYVACTR;  /* avoid structure result */
A68_66  OYVACTR;  /* OPERATORS - mode -> union mode */
A68_VC  PYVACTR;  /* YIELD */
A68_66  SYVACTR;  /* OPERATORS - mode -> union mode */
A68_VC  TYVACTR;  /* YIELD */
A68_VC  UYVACTR;  /* avoid structure result */
A68_66  VYVACTR;  /* OPERATORS - mode -> union mode */
A68_66  WYVACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  XYVACTR;  /* YIELD */
A68_66  YYVACTR;  /* OPERATORS - mode -> union mode */
A68_65  ZYVACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(declarenonlocallabel);
 /* line 532: */
 /* line 533: */
{ 
{ 
QXVACTR_labinfo = (&A_R1INDEX(IOKACTR_labels,Labno));
 /* line 534: */
 /* line 535: */
SXVACTR = (*(&(QXVACTR_labinfo->Flags))) ;
RXVACTR = !A_LB_LE(FPKACTR_labbufferemittedflag,SXVACTR);
if ( RXVACTR )
{ 
TXVACTR_level = (*(&((&(QXVACTR_labinfo->Environ))->Level)));
 /* line 537: */
 /* line 538: */
YXVACTR = WXVACTR ;
UXVACTR.data[0] = A_UNITE(XXVACTR,mode2,2,YXVACTR);
MRKACTR_labelbuffername( Labno, &ZXVACTR );
UXVACTR.data[1] = A_UNITE(AYVACTR,mode2,2,ZXVACTR);
 /* line 539: */
CYVACTR = ';' ;
UXVACTR.data[2] = A_UNITE(BYVACTR,mode1,1,CYVACTR);
UXVACTR.data[3] = A_UNITE(DYVACTR,mode4,4,EIAACTR_cnewline);
 /* line 540: */
if ( (TXVACTR_level==0) )
{ 
EYVACTR = TQLACTR_nonlocdecstream(TXVACTR_level);
} 
else
{ 
 /* line 541: */
EYVACTR = ZQLACTR_locdecstream(TXVACTR_level);
} 
VBMACTR_writecstream(A_HISVEC(FYVACTR,UXVACTR,4,A68_66 ), EYVACTR);
 /* line 543: */
 /* line 544: */
KYVACTR = IYVACTR ;
GYVACTR.data[0] = A_UNITE(JYVACTR,mode2,2,KYVACTR);
 /* line 545: */
MRKACTR_labelbuffername( Labno, &MYVACTR );
PYVACTR = A_VC_PLUS(MYVACTR,NYVACTR) ;
GYVACTR.data[1] = A_UNITE(OYVACTR,mode2,2,PYVACTR);
TYVACTR = RYVACTR ;
GYVACTR.data[2] = A_UNITE(SYVACTR,mode2,2,TYVACTR);
FRKACTR_labelfullname( Labno, &UYVACTR );
GYVACTR.data[3] = A_UNITE(VYVACTR,mode2,2,UYVACTR);
 /* line 546: */
XYVACTR = ';' ;
GYVACTR.data[4] = A_UNITE(WYVACTR,mode1,1,XYVACTR);
GYVACTR.data[5] = A_UNITE(YYVACTR,mode4,4,EIAACTR_cnewline);
 /* line 547: */
VBMACTR_writecstream(A_HISVEC(ZYVACTR,GYVACTR,6,A68_66 ), CRLACTR_labelstream(TXVACTR_level));
 /* line 548: */
 /* line 549: */
PKAAOSF_orab((&(QXVACTR_labinfo->Flags)), FPKACTR_labbufferemittedflag);
} 
} 
} 
A_PROC_EXIT(declarenonlocallabel);
return;
} 
#undef NL

A68_VOID  CZVACTR_nonlocaldec(A68_INT  Idno, A68_INT  Level)
{ 
A68_INT  HZVACTR;  /* clause result */
A68_INT  IZVACTR_typeofid;
A68_INT  JZVACTR_previouslevel;
A68_VC  KZVACTR;  /* avoid structure result */
A68_VC  LZVACTR_fullname;
A68_INT  MZVACTR;  /* clause result */
A68_INT  PZVACTR;  /* OPERATORS - skip to mode */
A68_INT  SZVACTR;  /* OPERATORS - skip to mode */
A68_INT  TZVACTR_ctypeofid;
A68_257  UZVACTR;  /* collateral clause result */
A68_VC  VZVACTR;  /* avoid structure result */
A68_66  WZVACTR;  /* OPERATORS - mode -> union mode */
A68_66  XZVACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  YZVACTR;  /* YIELD */
A68_66  ZZVACTR;  /* OPERATORS - mode -> union mode */
A68_66  AAWACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  BAWACTR;  /* YIELD */
A68_66  CAWACTR;  /* OPERATORS - mode -> union mode */
A68_65  DAWACTR;  /* OPERATORS - istruct -> vector */
A68_97  EAWACTR;  /* collateral clause result */
A68_INT  FAWACTR;  /* clause result */
A68_INT  GAWACTR;  /* OPERATORS - skip to mode */
A68_INT  HAWACTR;  /* YIELD */
A68_INT  IAWACTR;  /* OPERATORS - skip to mode */
A68_BOOL  JAWACTR;  /* clause result */
A68_100  KAWACTR_id;
A68_INT * LAWACTR;  /* YIELD */
A68_98  MAWACTR;  /* OPERATORS - mode -> union mode */
A68_99  NAWACTR_rd;
A68_INT * OAWACTR;  /* YIELD */
A68_98  PAWACTR;  /* OPERATORS - mode -> union mode */
A68_98  QAWACTR;  /* OPERATORS - skip to mode */
A68_57  RAWACTR_ld;
A68_INT * SAWACTR;  /* YIELD */
A68_98  TAWACTR;  /* OPERATORS - mode -> union mode */
A68_98  UAWACTR;  /* OPERATORS - skip to mode */
A68_97  VAWACTR_rhs;
A68_INT  WAWACTR_thisrd;
A68_275  XAWACTR;  /* collateral clause result */
A68_66  ABWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  BBWACTR;  /* YIELD */
A68_VC  CBWACTR;  /* avoid structure result */
A68_66  DBWACTR;  /* OPERATORS - mode -> union mode */
A68_66  GBWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  HBWACTR;  /* YIELD */
A68_VC  IBWACTR;  /* avoid structure result */
A68_66  JBWACTR;  /* OPERATORS - mode -> union mode */
A68_66  MBWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  NBWACTR;  /* YIELD */
A68_66  OBWACTR;  /* OPERATORS - mode -> union mode */
A68_66  RBWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  SBWACTR;  /* YIELD */
A68_VC  TBWACTR;  /* avoid structure result */
A68_66  UBWACTR;  /* OPERATORS - mode -> union mode */
A68_66  VBWACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  WBWACTR;  /* YIELD */
A68_66  XBWACTR;  /* OPERATORS - mode -> union mode */
A68_65  YBWACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(nonlocaldec);
 /* line 559: */
 /* line 560: */
{ 
 /* line 561: */
 /* line 562: */
 /* line 550: */
 /* line 563: */
if ( (Idno<=IAAACTR_maxidno) )
{ 
HZVACTR = DZVACTR_idtype;
} 
else
{ 
 /* line 564: */
if ( (Idno<=KAAACTR_maxrdno) )
{ 
HZVACTR = EZVACTR_rdtype;
} 
else
{ 
 /* line 565: */
if ( (Idno<=MAAACTR_maxlibid) )
{ 
 /* line 566: */
HZVACTR = FZVACTR_libtype;
} 
else
{ 
HZVACTR = GZVACTR_labtype;
} 
} 
} 
IZVACTR_typeofid = HZVACTR;
 /* line 567: */
JZVACTR_previouslevel = (Level-1);
 /* line 569: */
DSKACTR_idfullname( Idno, &KZVACTR );
LZVACTR_fullname = KZVACTR;
 /* line 571: */
 /* line 572: */
 /* line 573: */
switch ( IZVACTR_typeofid )
{ 
case 1: 
 /* line 574: */
MZVACTR = (*(&((&A_R1INDEX(FOKACTR_ids,Idno))->Mode)));
break;
case 2: 
 /* line 575: */
MZVACTR = (*(&((&A_R1INDEX(GOKACTR_rds,Idno))->Mode)));
break;
case 3: 
{ 
PXIACTR_assert(OZVACTR, A68_FALSE);
 /* line 577: */
MZVACTR = PZVACTR;
} 
break;
case 4: 
MZVACTR = TEAACTR_gotomode;
break;
default: 
{ 
PXIACTR_assert(RZVACTR, A68_FALSE);
 /* line 578: */
MZVACTR = SZVACTR;
} 
break;
} 
TZVACTR_ctypeofid = MZVACTR;
 /* line 581: */
 /* line 582: */
GJNACTR_ctype( TZVACTR_ctypeofid, &VZVACTR );
UZVACTR.data[0] = A_UNITE(WZVACTR,mode2,2,VZVACTR);
YZVACTR = ' ' ;
UZVACTR.data[1] = A_UNITE(XZVACTR,mode1,1,YZVACTR);
UZVACTR.data[2] = A_UNITE(ZZVACTR,mode2,2,LZVACTR_fullname);
 /* line 583: */
BAWACTR = ';' ;
UZVACTR.data[3] = A_UNITE(AAWACTR,mode1,1,BAWACTR);
UZVACTR.data[4] = A_UNITE(CAWACTR,mode4,4,EIAACTR_cnewline);
 /* line 584: */
VBMACTR_writecstream(A_HISVEC(DAWACTR,UZVACTR,5,A68_66 ), TQLACTR_nonlocdecstream(JZVACTR_previouslevel));
 /* line 585: */
LKNACTR_alignnextstructfield(TZVACTR_ctypeofid, TQLACTR_nonlocdecstream(JZVACTR_previouslevel));
 /* line 589: */
 /* line 590: */
 /* line 591: */
EAWACTR.Mode = TZVACTR_ctypeofid;
 /* line 593: */
switch ( IZVACTR_typeofid )
{ 
case 1: 
 /* line 594: */
FAWACTR = (*(&((&((&A_R1INDEX(FOKACTR_ids,Idno))->Environ))->Level)));
break;
case 2: 
 /* line 595: */
FAWACTR = (*(&((&A_R1INDEX(GOKACTR_rds,Idno))->Declevel)));
break;
case 3: 
 /* line 596: */
FAWACTR = GAWACTR;
break;
case 4: 
 /* line 597: */
 /* line 598: */
HAWACTR = (Idno-OAAACTR_minlab) ;
FAWACTR = (*(&((&((&A_R1INDEX(IOKACTR_labels,HAWACTR))->Environ))->Level)));
break;
default: 
 /* line 599: */
FAWACTR = IAWACTR;
break;
} 
 /* line 600: */
 /* line 601: */
JAWACTR = (JZVACTR_previouslevel==FAWACTR);
if ( JAWACTR )
{ 
 /* line 602: */
EAWACTR.Info = YIJACTR_defaultinfo;
} 
else
{ 
 /* line 603: */
EAWACTR.Info = CJJACTR_nonloc;
} 
 /* line 604: */
switch ( IZVACTR_typeofid )
{ 
case 1: 
{ 
LAWACTR = (&((&KAWACTR_id)->Idno)) ;
(*LAWACTR) = Idno;
 /* line 605: */
EAWACTR.Extra = A_UNITE(MAWACTR,mode4,4,KAWACTR_id);
} 
break;
case 2: 
{ 
OAWACTR = (&((&NAWACTR_rd)->Rdenno)) ;
(*OAWACTR) = Idno;
 /* line 606: */
EAWACTR.Extra = A_UNITE(PAWACTR,mode2,2,NAWACTR_rd);
} 
break;
case 3: 
 /* line 607: */
EAWACTR.Extra = QAWACTR;
break;
case 4: 
{ 
SAWACTR = (&((&RAWACTR_ld)->Labno)) ;
(*SAWACTR) = (Idno-OAAACTR_minlab);
 /* line 608: */
 /* line 609: */
EAWACTR.Extra = A_UNITE(TAWACTR,mode7,7,RAWACTR_ld);
} 
break;
default: 
 /* line 610: */
EAWACTR.Extra = UAWACTR;
break;
} 
VAWACTR_rhs = EAWACTR;
 /* line 613: */
WAWACTR_thisrd = LOLACTR_findroutine(Level);
 /* line 614: */
 /* line 615: */
BBWACTR = ZAWACTR ;
XAWACTR.data[0] = A_UNITE(ABWACTR,mode2,2,BBWACTR);
USKACTR_rdenvname( WAWACTR_thisrd, &CBWACTR );
XAWACTR.data[1] = A_UNITE(DBWACTR,mode2,2,CBWACTR);
 /* line 616: */
HBWACTR = FBWACTR ;
XAWACTR.data[2] = A_UNITE(GBWACTR,mode2,2,HBWACTR);
DSKACTR_idfullname( WAWACTR_thisrd, &IBWACTR );
XAWACTR.data[3] = A_UNITE(JBWACTR,mode2,2,IBWACTR);
 /* line 617: */
NBWACTR = LBWACTR ;
XAWACTR.data[4] = A_UNITE(MBWACTR,mode2,2,NBWACTR);
XAWACTR.data[5] = A_UNITE(OBWACTR,mode2,2,LZVACTR_fullname);
SBWACTR = QBWACTR ;
XAWACTR.data[6] = A_UNITE(RBWACTR,mode2,2,SBWACTR);
PWPACTR_getcfragment( (&VAWACTR_rhs), &TBWACTR );
XAWACTR.data[7] = A_UNITE(UBWACTR,mode2,2,TBWACTR);
 /* line 618: */
WBWACTR = ';' ;
XAWACTR.data[8] = A_UNITE(VBWACTR,mode1,1,WBWACTR);
XAWACTR.data[9] = A_UNITE(XBWACTR,mode4,4,EIAACTR_cnewline);
 /* line 619: */
 /* line 620: */
VBMACTR_writecstream(A_HISVEC(YBWACTR,XAWACTR,10,A68_66 ), WQLACTR_codestream(JZVACTR_previouslevel));
} 
A_PROC_EXIT(nonlocaldec);
return;
} 
#undef NL
 /* line 624: */
 /* line 626: */

A_STATIC A68_VOID  FCWACTR_declarecroutine(A68_INT  Rdenno, A68_INT  Resultmode, A68_BOOL  Global, A68_BOOL  Kept, A68_BOOL  Opsym, A68_180  Params)
{ 
A68_VC  GCWACTR;  /* avoid structure result */
A68_VC  HCWACTR_environmentctype;
A68_BOOL  ICWACTR;  /* optbool result */
A68_BOOL  JCWACTR_usetempforresult;
A68_INT  KCWACTR;  /* clause result */
A68_INT  LCWACTR_cresultmode;
A68_BOOL  MCWACTR_fulldec;
A68_INT  NCWACTR_a68paramcount;
A68_INT  OCWACTR_cparamcount;
A68_INT  PCWACTR_codestream;
A68_VC  QCWACTR;  /* clause result */
A68_VC  RCWACTR;  /* avoid structure result */
A68_VC  SCWACTR;  /* avoid structure result */
A68_VC  TCWACTR_fnname;
A68_278  VCWACTR_generator;   /* proc value of non-global proc */
A68_277  BDWACTR;  /* avoid structure result */
A68_277  ADWACTR_paramnames;
A68_277  DDWACTR;  /* avoid structure result */
A68_277  CDWACTR_paramtypes;
A68_INT * EDWACTR_param;
A68_VC * FDWACTR_paramtype;
A68_VC * GDWACTR_paramname;
A68_INT  HDWACTR;  /* forall loop counter */
A68_VC  IDWACTR;  /* avoid structure result */
union {  /* BIOP 99 */
A68_VC   source;
A68_VC   destination;
} JDWACTR; 
A68_VC  KDWACTR;  /* avoid structure result */
union {  /* BIOP 99 */
A68_VC   source;
A68_VC   destination;
} LDWACTR; 
A68_75  NDWACTR_prototype;   /* proc value of non-global proc */
A68_255  TGWACTR;  /* collateral clause result */
A68_66  UGWACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  VGWACTR;  /* YIELD */
A68_66  WGWACTR;  /* OPERATORS - mode -> union mode */
A68_65  XGWACTR;  /* OPERATORS - istruct -> vector */
A68_66  YGWACTR;  /* OPERATORS - mode -> union mode */
A68_65  ZGWACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_271  AHWACTR;  /* collateral clause result */
A68_66  DHWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  EHWACTR;  /* YIELD */
A68_66  FHWACTR;  /* OPERATORS - mode -> union mode */
A68_66  IHWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  JHWACTR;  /* YIELD */
A68_66  KHWACTR;  /* OPERATORS - mode -> union mode */
A68_65  LHWACTR;  /* OPERATORS - istruct -> vector */
A68_VC  MHWACTR;  /* avoid structure result */
A68_VC  NHWACTR_procvaluename;
A68_VC  OHWACTR;  /* avoid structure result */
A68_VC  PHWACTR_envname;
A68_INT  QHWACTR_previouslevel;
A68_268  RHWACTR;  /* collateral clause result */
A68_VC  SHWACTR;  /* avoid structure result */
A68_66  THWACTR;  /* OPERATORS - mode -> union mode */
A68_66  UHWACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  VHWACTR;  /* YIELD */
A68_66  WHWACTR;  /* OPERATORS - mode -> union mode */
A68_66  XHWACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  YHWACTR;  /* YIELD */
A68_66  BIWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  CIWACTR;  /* YIELD */
A68_66  FIWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  GIWACTR;  /* YIELD */
A68_66  HIWACTR;  /* OPERATORS - mode -> union mode */
A68_65  IIWACTR;  /* OPERATORS - istruct -> vector */
A68_VC  JIWACTR;  /* OPERATORS - istruct -> vector */
A68_56  KIWACTR;  /* OPERATORS - istruct -> vector */
A68_VC  LIWACTR_envvarname;
A68_268  MIWACTR;  /* collateral clause result */
A68_66  NIWACTR;  /* OPERATORS - mode -> union mode */
A68_66  OIWACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  PIWACTR;  /* YIELD */
A68_66  QIWACTR;  /* OPERATORS - mode -> union mode */
A68_66  RIWACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  SIWACTR;  /* YIELD */
A68_66  VIWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  WIWACTR;  /* YIELD */
A68_66  ZIWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  AJWACTR;  /* YIELD */
A68_66  BJWACTR;  /* OPERATORS - mode -> union mode */
A68_65  CJWACTR;  /* OPERATORS - istruct -> vector */
A68_283  DJWACTR;  /* collateral clause result */
A68_66  GJWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  HJWACTR;  /* YIELD */
A68_66  IJWACTR;  /* OPERATORS - mode -> union mode */
A68_66  LJWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  MJWACTR;  /* YIELD */
A68_66  NJWACTR;  /* OPERATORS - mode -> union mode */
A68_66  QJWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  RJWACTR;  /* YIELD */
A68_66  SJWACTR;  /* OPERATORS - mode -> union mode */
A68_66  VJWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  WJWACTR;  /* YIELD */
A68_66  XJWACTR;  /* OPERATORS - mode -> union mode */
A68_65  YJWACTR;  /* OPERATORS - istruct -> vector */
A68_283  ZJWACTR;  /* collateral clause result */
A68_66  CKWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  DKWACTR;  /* YIELD */
A68_66  GKWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  HKWACTR;  /* YIELD */
A68_66  IKWACTR;  /* OPERATORS - mode -> union mode */
A68_66  LKWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  MKWACTR;  /* YIELD */
A68_66  NKWACTR;  /* OPERATORS - mode -> union mode */
A68_66  QKWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  RKWACTR;  /* YIELD */
A68_66  SKWACTR;  /* OPERATORS - mode -> union mode */
A68_66  VKWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  WKWACTR;  /* YIELD */
A68_66  XKWACTR;  /* OPERATORS - mode -> union mode */
A68_65  YKWACTR;  /* OPERATORS - istruct -> vector */
A68_268  ZKWACTR;  /* collateral clause result */
A68_66  CLWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  DLWACTR;  /* YIELD */
A68_66  GLWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  HLWACTR;  /* YIELD */
A68_66  KLWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  LLWACTR;  /* YIELD */
A68_66  MLWACTR;  /* OPERATORS - mode -> union mode */
A68_66  NLWACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  OLWACTR;  /* YIELD */
A68_66  RLWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  SLWACTR;  /* YIELD */
A68_66  VLWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  WLWACTR;  /* YIELD */
A68_66  XLWACTR;  /* OPERATORS - mode -> union mode */
A68_65  YLWACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(declarecroutine);
 /* line 627: */
 /* line 628: */
{ 
USKACTR_rdenvname( Rdenno, &GCWACTR );
HCWACTR_environmentctype = GCWACTR;
 /* line 631: */
 /* line 632: */
ICWACTR = NQIACTR_nostructresultoption;
if ( ICWACTR )
{ICWACTR = ERMACTR_iscstruct(Resultmode);
}
JCWACTR_usetempforresult = ICWACTR;
 /* line 634: */
 /* line 635: */
if ( JCWACTR_usetempforresult )
{ 
KCWACTR = UEAACTR_voidmode;
} 
else
{ 
KCWACTR = Resultmode;
} 
LCWACTR_cresultmode = KCWACTR;
 /* line 637: */
MCWACTR_fulldec = !Global;
 /* line 639: */
NCWACTR_a68paramcount = Params.upb;
 /* line 641: */
 /* line 642: */
OCWACTR_cparamcount = ((NCWACTR_a68paramcount+(JCWACTR_usetempforresult))+(MCWACTR_fulldec));
 /* line 644: */
PCWACTR_codestream = WQLACTR_codestream(EQLACTR_currentlevel());
 /* line 646: */
 /* line 647: */
if ( MCWACTR_fulldec )
{ 
 /* line 648: */
MSKACTR_rdfnname( Rdenno, &RCWACTR );
QCWACTR = RCWACTR;
} 
else
{ 
 /* line 649: */
DSKACTR_idfullname( Rdenno, &SCWACTR );
QCWACTR = SCWACTR;
} 
TCWACTR_fnname = QCWACTR;
 /* line 651: */
A_CLOSURE( VCWACTR_generator, WCWACTR_generator, XCWACTR_generator );
(( XCWACTR_generator * ) ( VCWACTR_generator.nonlocals )) -> NCWACTR_a68paramcount = NCWACTR_a68paramcount;
A_CALLPROC(VCWACTR_generator,(A68_TRUE, &BDWACTR),(A68_TRUE, &BDWACTR,(VCWACTR_generator).nonlocals));
ADWACTR_paramnames = BDWACTR;
A_CALLPROC(VCWACTR_generator,(A68_TRUE, &DDWACTR),(A68_TRUE, &DDWACTR,(VCWACTR_generator).nonlocals));
CDWACTR_paramtypes = DDWACTR;
 /* line 653: */
 /* line 654: */
HDWACTR = Params.upb -1;
if ( HDWACTR != CDWACTR_paramtypes.upb -1 )
{ A_ERROR( "mismatched bounds in FORALL; row no 2"); }
if ( HDWACTR != ADWACTR_paramnames.upb -1 )
{ A_ERROR( "mismatched bounds in FORALL; row no 3"); }
EDWACTR_param = Params.data;
FDWACTR_paramtype = CDWACTR_paramtypes.data;
GDWACTR_paramname = ADWACTR_paramnames.data;
for (;HDWACTR-- >= 0;
(EDWACTR_param++
,FDWACTR_paramtype++
,GDWACTR_paramname++
) )
{
 /* line 655: */
DSKACTR_idfullname( (*EDWACTR_param), &IDWACTR );
JDWACTR.source = IDWACTR ;
(*GDWACTR_paramname) = (JDWACTR.destination);
 /* line 656: */
 /* line 657: */
KJNACTR_cvartype( (*(&((&A_R1INDEX(FOKACTR_ids,(*EDWACTR_param)))->Cvariabletype))), &KDWACTR );
LDWACTR.source = KDWACTR ;
(*FDWACTR_paramtype) = (LDWACTR.destination);
}
 /* line 659: */
A_CLOSURE( NDWACTR_prototype, ODWACTR_prototype, PDWACTR_prototype );
(( PDWACTR_prototype * ) ( NDWACTR_prototype.nonlocals )) -> Global = Global;
(( PDWACTR_prototype * ) ( NDWACTR_prototype.nonlocals )) -> Kept = Kept;
(( PDWACTR_prototype * ) ( NDWACTR_prototype.nonlocals )) -> LCWACTR_cresultmode = LCWACTR_cresultmode;
(( PDWACTR_prototype * ) ( NDWACTR_prototype.nonlocals )) -> TCWACTR_fnname = TCWACTR_fnname;
(( PDWACTR_prototype * ) ( NDWACTR_prototype.nonlocals )) -> OCWACTR_cparamcount = OCWACTR_cparamcount;
(( PDWACTR_prototype * ) ( NDWACTR_prototype.nonlocals )) -> NCWACTR_a68paramcount = NCWACTR_a68paramcount;
(( PDWACTR_prototype * ) ( NDWACTR_prototype.nonlocals )) -> CDWACTR_paramtypes = CDWACTR_paramtypes;
(( PDWACTR_prototype * ) ( NDWACTR_prototype.nonlocals )) -> ADWACTR_paramnames = ADWACTR_paramnames;
(( PDWACTR_prototype * ) ( NDWACTR_prototype.nonlocals )) -> JCWACTR_usetempforresult = JCWACTR_usetempforresult;
(( PDWACTR_prototype * ) ( NDWACTR_prototype.nonlocals )) -> Resultmode = Resultmode;
(( PDWACTR_prototype * ) ( NDWACTR_prototype.nonlocals )) -> MCWACTR_fulldec = MCWACTR_fulldec;
 /* line 708: */
A_CALLPROC(NDWACTR_prototype,(QQLACTR_externstream),(QQLACTR_externstream,(NDWACTR_prototype).nonlocals));
VGWACTR = ';' ;
TGWACTR.data[0] = A_UNITE(UGWACTR,mode1,1,VGWACTR);
TGWACTR.data[1] = A_UNITE(WGWACTR,mode4,4,EIAACTR_cnewline);
VBMACTR_writecstream(A_HISVEC(XGWACTR,TGWACTR,2,A68_66 ), QQLACTR_externstream);
 /* line 711: */
A_CALLPROC(NDWACTR_prototype,(PCWACTR_codestream),(PCWACTR_codestream,(NDWACTR_prototype).nonlocals));
VBMACTR_writecstream(A_HVEC(ZGWACTR,A_UNITE(YGWACTR,mode4,4,EIAACTR_cnewline),A68_66 ), PCWACTR_codestream);
 /* line 713: */
 /* line 714: */
 /* line 715: */
if ( MCWACTR_fulldec )
{ 
EHWACTR = CHWACTR ;
AHWACTR.data[0] = A_UNITE(DHWACTR,mode2,2,EHWACTR);
AHWACTR.data[1] = A_UNITE(FHWACTR,mode2,2,HCWACTR_environmentctype);
JHWACTR = HHWACTR ;
AHWACTR.data[2] = A_UNITE(IHWACTR,mode2,2,JHWACTR);
AHWACTR.data[3] = A_UNITE(KHWACTR,mode4,4,EIAACTR_cnewline);
VBMACTR_writecstream(A_HISVEC(LHWACTR,AHWACTR,4,A68_66 ), PCWACTR_codestream);
 /* line 717: */
DSKACTR_idfullname( Rdenno, &MHWACTR );
NHWACTR_procvaluename = MHWACTR;
 /* line 718: */
USKACTR_rdenvname( Rdenno, &OHWACTR );
PHWACTR_envname = OHWACTR;
 /* line 719: */
QHWACTR_previouslevel = (EQLACTR_currentlevel()-1);
 /* line 722: */
 /* line 723: */
GJNACTR_ctype( (*(&((&A_R1INDEX(GOKACTR_rds,Rdenno))->Mode))), &SHWACTR );
RHWACTR.data[0] = A_UNITE(THWACTR,mode2,2,SHWACTR);
VHWACTR = ' ' ;
RHWACTR.data[1] = A_UNITE(UHWACTR,mode1,1,VHWACTR);
RHWACTR.data[2] = A_UNITE(WHWACTR,mode2,2,NHWACTR_procvaluename);
 /* line 724: */
YHWACTR = ';' ;
RHWACTR.data[3] = A_UNITE(XHWACTR,mode1,1,YHWACTR);
 /* line 725: */
 /* line 726: */
if ( AQIACTR_verboseoption )
{ 
 /* line 727: */
CIWACTR = AIWACTR ;
RHWACTR.data[4] = A_UNITE(BIWACTR,mode2,2,CIWACTR);
} 
else
{ 
 /* line 728: */
GIWACTR = EIWACTR ;
RHWACTR.data[4] = A_UNITE(FIWACTR,mode2,2,GIWACTR);
} 
RHWACTR.data[5] = A_UNITE(HIWACTR,mode4,4,EIAACTR_cnewline);
 /* line 729: */
VBMACTR_writecstream(A_HISVEC(IIWACTR,RHWACTR,6,A68_66 ), ZQLACTR_locdecstream(QHWACTR_previouslevel));
 /* line 731: */
 /* line 732: */
 /* line 734: */
if ( PQIACTR_closureonstackoption )
{ 
KIWACTR = ZGMACTR_newuniquename() ;
LIWACTR_envvarname = A_HISVEC(JIWACTR,KIWACTR,7,A68_CHAR );
 /* line 735: */
 /* line 736: */
MIWACTR.data[0] = A_UNITE(NIWACTR,mode2,2,PHWACTR_envname);
PIWACTR = ' ' ;
MIWACTR.data[1] = A_UNITE(OIWACTR,mode1,1,PIWACTR);
MIWACTR.data[2] = A_UNITE(QIWACTR,mode2,2,LIWACTR_envvarname);
 /* line 737: */
SIWACTR = ';' ;
MIWACTR.data[3] = A_UNITE(RIWACTR,mode1,1,SIWACTR);
if ( AQIACTR_verboseoption )
{ 
WIWACTR = UIWACTR ;
MIWACTR.data[4] = A_UNITE(VIWACTR,mode2,2,WIWACTR);
} 
else
{ 
 /* line 738: */
AJWACTR = YIWACTR ;
MIWACTR.data[4] = A_UNITE(ZIWACTR,mode2,2,AJWACTR);
} 
MIWACTR.data[5] = A_UNITE(BJWACTR,mode4,4,EIAACTR_cnewline);
 /* line 739: */
VBMACTR_writecstream(A_HISVEC(CJWACTR,MIWACTR,6,A68_66 ), ZQLACTR_locdecstream(QHWACTR_previouslevel));
 /* line 741: */
 /* line 742: */
 /* line 743: */
HJWACTR = FJWACTR ;
DJWACTR.data[0] = A_UNITE(GJWACTR,mode2,2,HJWACTR);
DJWACTR.data[1] = A_UNITE(IJWACTR,mode2,2,NHWACTR_procvaluename);
MJWACTR = KJWACTR ;
DJWACTR.data[2] = A_UNITE(LJWACTR,mode2,2,MJWACTR);
DJWACTR.data[3] = A_UNITE(NJWACTR,mode2,2,TCWACTR_fnname);
RJWACTR = PJWACTR ;
DJWACTR.data[4] = A_UNITE(QJWACTR,mode2,2,RJWACTR);
DJWACTR.data[5] = A_UNITE(SJWACTR,mode2,2,LIWACTR_envvarname);
 /* line 744: */
WJWACTR = UJWACTR ;
DJWACTR.data[6] = A_UNITE(VJWACTR,mode2,2,WJWACTR);
DJWACTR.data[7] = A_UNITE(XJWACTR,mode4,4,EIAACTR_cnewline);
 /* line 745: */
 /* line 746: */
 /* line 748: */
VBMACTR_writecstream(A_HISVEC(YJWACTR,DJWACTR,8,A68_66 ), WQLACTR_codestream(QHWACTR_previouslevel));
} 
else
{ 
 /* line 749: */
if ( OQIACTR_closuremarkoption )
{ 
DKWACTR = BKWACTR ;
ZJWACTR.data[0] = A_UNITE(CKWACTR,mode2,2,DKWACTR);
} 
else
{ 
 /* line 750: */
HKWACTR = FKWACTR ;
ZJWACTR.data[0] = A_UNITE(GKWACTR,mode2,2,HKWACTR);
} 
ZJWACTR.data[1] = A_UNITE(IKWACTR,mode2,2,NHWACTR_procvaluename);
MKWACTR = KKWACTR ;
ZJWACTR.data[2] = A_UNITE(LKWACTR,mode2,2,MKWACTR);
ZJWACTR.data[3] = A_UNITE(NKWACTR,mode2,2,TCWACTR_fnname);
RKWACTR = PKWACTR ;
ZJWACTR.data[4] = A_UNITE(QKWACTR,mode2,2,RKWACTR);
ZJWACTR.data[5] = A_UNITE(SKWACTR,mode2,2,PHWACTR_envname);
 /* line 751: */
WKWACTR = UKWACTR ;
ZJWACTR.data[6] = A_UNITE(VKWACTR,mode2,2,WKWACTR);
ZJWACTR.data[7] = A_UNITE(XKWACTR,mode4,4,EIAACTR_cnewline);
 /* line 752: */
 /* line 753: */
VBMACTR_writecstream(A_HISVEC(YKWACTR,ZJWACTR,8,A68_66 ), WQLACTR_codestream(QHWACTR_previouslevel));
} 
 /* line 756: */
 /* line 757: */
 /* line 758: */
DLWACTR = BLWACTR ;
ZKWACTR.data[0] = A_UNITE(CLWACTR,mode2,2,DLWACTR);
 /* line 759: */
 /* line 760: */
if ( AQIACTR_verboseoption )
{ 
 /* line 761: */
HLWACTR = FLWACTR ;
ZKWACTR.data[1] = A_UNITE(GLWACTR,mode2,2,HLWACTR);
} 
else
{ 
LLWACTR = JLWACTR ;
ZKWACTR.data[1] = A_UNITE(KLWACTR,mode2,2,LLWACTR);
} 
ZKWACTR.data[2] = A_UNITE(MLWACTR,mode4,4,EIAACTR_cnewline);
 /* line 762: */
OLWACTR = '{' ;
ZKWACTR.data[3] = A_UNITE(NLWACTR,mode1,1,OLWACTR);
 /* line 763: */
 /* line 764: */
if ( OQIACTR_closuremarkoption )
{ 
 /* line 765: */
SLWACTR = QLWACTR ;
ZKWACTR.data[4] = A_UNITE(RLWACTR,mode2,2,SLWACTR);
} 
else
{ 
WLWACTR = ULWACTR ;
ZKWACTR.data[4] = A_UNITE(VLWACTR,mode2,2,WLWACTR);
} 
ZKWACTR.data[5] = A_UNITE(XLWACTR,mode4,4,EIAACTR_cnewline);
 /* line 766: */
 /* line 767: */
 /* line 768: */
VBMACTR_writecstream(A_HISVEC(YLWACTR,ZKWACTR,6,A68_66 ), TQLACTR_nonlocdecstream(QHWACTR_previouslevel));
} 
} 
A_PROC_EXIT(declarecroutine);
return;
} 
#undef NL

A68_VOID  ZLWACTR_completerddec(void)
{ 
A68_INT  AMWACTR;  /* YIELD */
A68_108 * BMWACTR_rd;
A68_BITS  CMWACTR;  /* ADICOPS - >= */
A68_INT  DMWACTR_nonlocdecstream;
A68_255  EMWACTR;  /* collateral clause result */
A68_66  HMWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  IMWACTR;  /* YIELD */
A68_66  JMWACTR;  /* OPERATORS - mode -> union mode */
A68_65  KMWACTR;  /* OPERATORS - istruct -> vector */
A68_271  LMWACTR;  /* collateral clause result */
A68_66  OMWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  PMWACTR;  /* YIELD */
A68_VC  QMWACTR;  /* avoid structure result */
A68_66  RMWACTR;  /* OPERATORS - mode -> union mode */
A68_66  SMWACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  TMWACTR;  /* YIELD */
A68_66  UMWACTR;  /* OPERATORS - mode -> union mode */
A68_65  VMWACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(completerddec);
{ 
AMWACTR = IOLACTR_currentroutine() ;
BMWACTR_rd = (&A_R1INDEX(GOKACTR_rds,AMWACTR));
 /* line 777: */
 /* line 778: */
 /* line 779: */
 /* line 781: */
CMWACTR = (*(&(BMWACTR_rd->Flags))) ;
if ( !A_LB_GE(CMWACTR,APKACTR_rdglobalflag) )
{ 
DMWACTR_nonlocdecstream = TQLACTR_nonlocdecstream((EQLACTR_currentlevel()-1));
 /* line 782: */
 /* line 783: */
 /* line 786: */
if ( !SOLACTR_nonlocalsused() )
{ 
IMWACTR = GMWACTR ;
EMWACTR.data[0] = A_UNITE(HMWACTR,mode2,2,IMWACTR);
EMWACTR.data[1] = A_UNITE(JMWACTR,mode4,4,EIAACTR_cnewline);
 /* line 787: */
VBMACTR_writecstream(A_HISVEC(KMWACTR,EMWACTR,2,A68_66 ), DMWACTR_nonlocdecstream);
} 
 /* line 788: */
 /* line 789: */
PMWACTR = NMWACTR ;
LMWACTR.data[0] = A_UNITE(OMWACTR,mode2,2,PMWACTR);
USKACTR_rdenvname( IOLACTR_currentroutine(), &QMWACTR );
LMWACTR.data[1] = A_UNITE(RMWACTR,mode2,2,QMWACTR);
 /* line 790: */
TMWACTR = ';' ;
LMWACTR.data[2] = A_UNITE(SMWACTR,mode1,1,TMWACTR);
LMWACTR.data[3] = A_UNITE(UMWACTR,mode4,4,EIAACTR_cnewline);
 /* line 791: */
 /* line 792: */
 /* line 793: */
VBMACTR_writecstream(A_HISVEC(VMWACTR,LMWACTR,4,A68_66 ), DMWACTR_nonlocdecstream);
} 
} 
A_PROC_EXIT(completerddec);
return;
} 
#undef NL
 /* line 797: */
 /* line 798: */
 /* line 799: */
 /* line 800: */
 /* line 802: */

A68_VOID  DNWACTR_rddec(A68_VC  Name, A68_INT  Mode, A68_180  Paramdecnos, A68_INT  Resultmode, A68_INT  Rdenno, A68_72  Environ, A68_BITS  Props)
{ 
A68_108 * ENWACTR_rd;
A68_INT  FNWACTR_declevel;
A68_BOOL  GNWACTR;  /* optbool result */
A68_BITS  HNWACTR;  /* clause result */
A68_BITS  INWACTR_otherflags;
A68_BOOL  JNWACTR;  /* optbool result */
A68_BOOL  KNWACTR_global;
A68_108  LNWACTR;  /* collateral clause result */
A68_BITS  MNWACTR;  /* ADICOPS - >= */
A68_BOOL  NNWACTR;  /* optbool result */
A68_INT  ONWACTR;  /* YIELD */
A68_154  PNWACTR;  /* OPERATORS - simple index */
A68_INT  QNWACTR;  /* YIELD */
A68_156 * RNWACTR_keptinfo;
A68_BOOL  SNWACTR;  /* optbool result */
A68_BOOL  TNWACTR;  /* clause result */
A68_INT  UNWACTR;  /* YIELD */
A68_LINT * VNWACTR;  /* YIELD */
A68_BITS  WNWACTR;  /* ADICOPS - >= */
A68_BITS  XNWACTR;  /* ADICOPS - >= */
A_PROC_ENTRY(rddec);
 /* line 803: */
 /* line 804: */
{ 
ENWACTR_rd = (&A_R1INDEX(GOKACTR_rds,Rdenno));
 /* line 805: */
FNWACTR_declevel = (EQLACTR_currentlevel()-1);
 /* line 806: */
 /* line 807: */
GNWACTR = A_LB_GE(Props,OCAACTR_operatorbit);
if ( GNWACTR )
{ /* line 808: */
GNWACTR = CTKACTR_standopsym(Name);
}
 /* line 809: */
if ( GNWACTR )
{ 
 /* line 810: */
HNWACTR = BPKACTR_rdopflag;
} 
else
{ 
HNWACTR = XOKACTR_rdnoflags;
} 
INWACTR_otherflags = HNWACTR;
 /* line 811: */
 /* line 812: */
JNWACTR = (FNWACTR_declevel==0);
if ( ! JNWACTR )
{JNWACTR = YPLACTR_isgloballevel(Environ);
}
KNWACTR_global = JNWACTR;
 /* line 814: */
 /* line 815: */
if ( KNWACTR_global )
{ 
 /* line 816: */
LNWACTR.Mode = Mode;
 /* line 817: */
LNWACTR.Resultmode = Resultmode;
 /* line 818: */
LNWACTR.Declevel = FNWACTR_declevel;
 /* line 819: */
LNWACTR.Environ = Environ;
 /* line 820: */
LNWACTR.Name = Name;
 /* line 821: */
 /* line 822: */
MNWACTR = (*(&(ENWACTR_rd->Flags))) ;
NNWACTR = !A_LB_GE(MNWACTR,YOKACTR_rdkeptflag);
if ( ! NNWACTR )
{NNWACTR = !GZOACTR_rscompatiblewithpreviousversion;
}
 /* line 823: */
if ( NNWACTR )
{ 
 /* line 824: */
LNWACTR.Prefix = ZGMACTR_newuniquename();
} 
else
{ 
{ 
ONWACTR = 1 ;
PNWACTR = (*(&((&A_R1INDEX(MZOACTR_specs,ONWACTR))->Keptinfo))) ;
QNWACTR = TJVACTR_keeplistposition(Rdenno) ;
RNWACTR_keptinfo = (&A_VINDEX(PNWACTR,QNWACTR));
 /* line 826: */
 /* line 827: */
SNWACTR = (*(&(RNWACTR_keptinfo->Iddec)));
if ( ! SNWACTR )
{SNWACTR = (*(&(RNWACTR_keptinfo->Optimised)));
}
TNWACTR = SNWACTR;
if ( TNWACTR )
{ 
HZOACTR_transcompatiblewithpreviousversi = A68_FALSE;
 /* line 828: */
 /* line 829: */
UNWACTR = 1 ;
VNWACTR = (&((&A_R1INDEX(MZOACTR_specs,UNWACTR))->Timeoflastchange)) ;
(*VNWACTR) = (*(&((&BYIACTR_config_info)->Translationtime)));
 /* line 830: */
 /* line 831: */
 /* line 832: */
LNWACTR.Prefix = ZGMACTR_newuniquename();
} 
else
{ 
 /* line 833: */
LNWACTR.Prefix = (*(&(RNWACTR_keptinfo->Prefix)));
} 
} 
} 
 /* line 834: */
LNWACTR.Fnprefix = MKOACTR_nulluname;
 /* line 835: */
LNWACTR.Envprefix = MKOACTR_nulluname;
 /* line 836: */
 /* line 837: */
LNWACTR.Flags = (A68_BITS )((A68_BITS )((*(&(ENWACTR_rd->Flags)))|APKACTR_rdglobalflag)|INWACTR_otherflags);
} 
else
{ 
 /* line 838: */
LNWACTR.Mode = Mode;
 /* line 839: */
LNWACTR.Resultmode = Resultmode;
 /* line 840: */
LNWACTR.Declevel = FNWACTR_declevel;
 /* line 841: */
LNWACTR.Environ = Environ;
 /* line 842: */
LNWACTR.Name = Name;
 /* line 843: */
LNWACTR.Prefix = ZGMACTR_newuniquename();
 /* line 844: */
LNWACTR.Fnprefix = ZGMACTR_newuniquename();
 /* line 845: */
LNWACTR.Envprefix = ZGMACTR_newuniquename();
 /* line 846: */
 /* line 847: */
LNWACTR.Flags = (A68_BITS )((*(&(ENWACTR_rd->Flags)))|INWACTR_otherflags);
} 
(*ENWACTR_rd) = LNWACTR;
 /* line 848: */
 /* line 849: */
 /* line 850: */
 /* line 851: */
 /* line 852: */
 /* line 853: */
 /* line 854: */
 /* line 856: */
 /* line 857: */
WNWACTR = (*(&(ENWACTR_rd->Flags))) ;
XNWACTR = (*(&(ENWACTR_rd->Flags))) ;
FCWACTR_declarecroutine(Rdenno, Resultmode, KNWACTR_global, A_LB_GE(XNWACTR,YOKACTR_rdkeptflag), A_LB_GE(WNWACTR,BPKACTR_rdopflag), Paramdecnos);
} 
A_PROC_EXIT(rddec);
return;
} 
#undef NL

A68_VOID  ZNWACTR_labdec(A68_138  Labeldec)
{ 
A68_INT  AOWACTR_labno;
A68_INT  BOWACTR_status;
A68_BOOL  COWACTR_notsetting;
A68_VC  DOWACTR_name;
A68_109 * EOWACTR_labinfo;
A68_109  FOWACTR;  /* collateral clause result */
A68_72  GOWACTR;  /* avoid structure result */
A68_BITS  IOWACTR;  /* ADICOPS - <= */
A68_INT * KOWACTR;  /* YIELD */
A68_BOOL * LOWACTR;  /* YIELD */
A68_279  MOWACTR;  /* collateral clause result */
A68_VC  NOWACTR;  /* avoid structure result */
A68_66  OOWACTR;  /* OPERATORS - mode -> union mode */
A68_66  POWACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  QOWACTR;  /* YIELD */
A68_66  ROWACTR;  /* OPERATORS - mode -> union mode */
A68_65  SOWACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(labdec);
 /* line 860: */
 /* line 861: */
{ 
AOWACTR_labno = Labeldec.Labno;
 /* line 862: */
BOWACTR_status = Labeldec.Status;
 /* line 863: */
COWACTR_notsetting = Labeldec.Notsetting;
 /* line 864: */
DOWACTR_name = Labeldec.Name;
 /* line 865: */
EOWACTR_labinfo = (&A_R1INDEX(IOKACTR_labels,AOWACTR_labno));
 /* line 866: */
 /* line 867: */
if ( COWACTR_notsetting )
{ 
 /* line 868: */
if ( (BOWACTR_status==LCAACTR_announcing) )
{ 
 /* line 869: */
FOWACTR.Label.Name = ZGMACTR_newuniquename();
 /* line 870: */
FOWACTR.Label.Set = A68_FALSE;
 /* line 871: */
ZNLACTR_currentenviron(  &GOWACTR );
FOWACTR.Environ = GOWACTR;
 /* line 872: */
FOWACTR.Name = DOWACTR_name;
 /* line 873: */
FOWACTR.Prefix = ZGMACTR_newuniquename();
 /* line 875: */
FOWACTR.Flags = EPKACTR_labdeclaredflag;
 /* line 877: */
FOWACTR.Alias = 0;
(*EOWACTR_labinfo) = FOWACTR;
} 
else
{ 
 /* line 878: */
 /* line 879: */
if ( (BOWACTR_status>=MCAACTR_aliasing) )
{ 
IOWACTR = (*(&((&A_R1INDEX(IOKACTR_labels,BOWACTR_status))->Flags))) ;
PXIACTR_assert(JOWACTR, A_LB_LE(EPKACTR_labdeclaredflag,IOWACTR));
 /* line 880: */
(*EOWACTR_labinfo) = (*(&A_R1INDEX(IOKACTR_labels,BOWACTR_status)));
 /* line 881: */
 /* line 882: */
 /* line 884: */
KOWACTR = (&(EOWACTR_labinfo->Alias)) ;
(*KOWACTR) = BOWACTR_status;
} 
else
{ 
 /* line 885: */
 /* line 886: */
/*SKIP*/;
} 
} 
} 
else
{ 
LOWACTR = (&((&(EOWACTR_labinfo->Label))->Set)) ;
(*LOWACTR) = A68_TRUE;
 /* line 888: */
 /* line 889: */
FRKACTR_labelfullname( AOWACTR_labno, &NOWACTR );
MOWACTR.data[0] = A_UNITE(OOWACTR,mode2,2,NOWACTR);
 /* line 890: */
QOWACTR = ':' ;
MOWACTR.data[1] = A_UNITE(POWACTR,mode1,1,QOWACTR);
MOWACTR.data[2] = A_UNITE(ROWACTR,mode4,4,EIAACTR_cnewline);
 /* line 891: */
 /* line 892: */
 /* line 893: */
VBMACTR_writecstream(A_HISVEC(SOWACTR,MOWACTR,3,A68_66 ), WQLACTR_codestream(EQLACTR_currentlevel()));
} 
} 
A_PROC_EXIT(labdec);
return;
} 
#undef NL
 /* line 897: */
 /* line 898: */
 /* line 899: */
 /* line 900: */
 /* line 901: */
 /* line 902: */
 /* line 903: */
 /* line 904: */
 /* line 905: */
 /* line 907: */

A_STATIC A68_VOID  EPWACTR_zexternaldec(A68_VC  Name, A68_56  Prefix, A68_INT  Mode, A68_INT  Decno, A68_BOOL  Optimised, A68_BOOL  Iddec, A68_BOOL  Globalproc, A68_BOOL  Genproc, A68_BOOL  Forceuse, A68_VC  Definition, A68_VC  Rhs)
{ 
A68_BOOL  MPWACTR;  /* optbool result */
A68_BOOL  NPWACTR;  /* optbool result */
A68_107 * PPWACTR;  /* clause result */
A68_BITS  QPWACTR_idflags;
A68_BITS  RPWACTR;  /* clause result */
A68_BITS  SPWACTR;  /* clause result */
A68_BOOL  TPWACTR;  /* optbool result */
A68_BITS  UPWACTR;  /* clause result */
A68_BITS  VPWACTR;  /* clause result */
A68_BITS  WPWACTR;  /* clause result */
A68_VC  XPWACTR;  /* avoid structure result */
A_PROC_ENTRY(zexternaldec);
 /* line 913: */
 /* line 915: */
{ 
 /* line 917: */
MPWACTR = (Decno<=IAAACTR_maxidno);
if ( ! MPWACTR )
{NPWACTR = (Decno>=LAAACTR_minlibid);
if ( NPWACTR )
{NPWACTR = (Decno<=MAAACTR_maxlibid);
}
MPWACTR = NPWACTR;
}
PXIACTR_assert(OPWACTR, MPWACTR);
 /* line 919: */
if ( (Decno<=IAAACTR_maxidno) )
{ 
PPWACTR = (&A_R1INDEX(FOKACTR_ids,Decno));
} 
else
{ 
PPWACTR = (&A_R1INDEX(HOKACTR_libraryids,Decno));
} 
QPWACTR_idflags = (*(&(PPWACTR->Flags)));
 /* line 921: */
 /* line 922: */
 /* line 923: */
if ( Optimised )
{ 
RPWACTR = QOKACTR_idoptimisedflag;
} 
else
{ 
 /* line 924: */
RPWACTR = JOKACTR_idnoflags;
} 
if ( Iddec )
{ 
SPWACTR = KOKACTR_ididentityflag;
} 
else
{ 
 /* line 925: */
SPWACTR = JOKACTR_idnoflags;
} 
TPWACTR = Genproc;
if ( TPWACTR )
{TPWACTR = A_LB_GE(QPWACTR_idflags,LOKACTR_idkeptflag);
}
if ( TPWACTR )
{ 
UPWACTR = TOKACTR_idkeptgenprocflag;
} 
else
{ 
 /* line 926: */
UPWACTR = JOKACTR_idnoflags;
} 
if ( Globalproc )
{ 
VPWACTR = SOKACTR_idgprocflag;
} 
else
{ 
 /* line 927: */
VPWACTR = JOKACTR_idnoflags;
} 
if ( Forceuse )
{ 
WPWACTR = VOKACTR_idforceuseflag;
} 
else
{ 
WPWACTR = JOKACTR_idnoflags;
} 
 /* line 928: */
 /* line 929: */
 /* line 930: */
IPWACTR_mybefore( Name, ' ', &XPWACTR );
JKVACTR_newidinfo(Decno, Mode, XPWACTR, Prefix, (A68_BITS )((A68_BITS )((A68_BITS )((A68_BITS )(RPWACTR|SPWACTR)|UPWACTR)|VPWACTR)|WPWACTR), Definition, Rhs);
} 
A_PROC_EXIT(zexternaldec);
return;
} 
#undef NL

A_STATIC A68_VOID  ZPWACTR_zexternalcdec(A68_INT  Decno)
{ 
A68_BOOL  BQWACTR;  /* optbool result */
A68_BOOL  CQWACTR;  /* optbool result */
A68_107 * EQWACTR;  /* clause result */
A68_107 * FQWACTR_id;
A68_BITS  GQWACTR;  /* ADICOPS - >= */
A68_BOOL  HQWACTR;  /* optbool result */
A68_BITS  IQWACTR;  /* ADICOPS - >= */
A68_BOOL  JQWACTR;  /* optbool result */
A68_VC  LQWACTR;  /* OPERATORS - trim index */
A68_VC  MQWACTR;  /* OPERATORS - trim index */
A68_BOOL  OQWACTR;  /* clause result */
A68_INT  PQWACTR_mode;
A68_BITS  QQWACTR;  /* ADICOPS - >= */
A68_BOOL  RQWACTR_optimised;
A68_BITS  SQWACTR;  /* ADICOPS - >= */
A68_BOOL  TQWACTR_globalproc;
A68_VC  UQWACTR_definition;
A68_VC  VQWACTR_rhs;
A68_255  WQWACTR;  /* collateral clause result */
A68_66  XQWACTR;  /* OPERATORS - mode -> union mode */
A68_66  YQWACTR;  /* OPERATORS - mode -> union mode */
A68_65  ZQWACTR;  /* OPERATORS - istruct -> vector */
A68_INT  ARWACTR_deprocmode;
A68_BOOL  BRWACTR;  /* optbool result */
A68_BOOL  CRWACTR_voidresult;
A68_180  DRWACTR;  /* clause result */
A68_180  ERWACTR;  /* avoid structure result */
A68_291  GRWACTR_generator;   /* proc value of non-global proc */
A68_180  LRWACTR;  /* avoid structure result */
A68_180  MRWACTR_params;
A68_257  NRWACTR;  /* collateral clause result */
A68_66  QRWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  RRWACTR;  /* YIELD */
A68_INT  SRWACTR;  /* clause result */
A68_VC  TRWACTR;  /* avoid structure result */
A68_66  URWACTR;  /* OPERATORS - mode -> union mode */
A68_66  VRWACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  WRWACTR;  /* YIELD */
A68_VC  XRWACTR;  /* avoid structure result */
A68_66  YRWACTR;  /* OPERATORS - mode -> union mode */
A68_66  ZRWACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  ASWACTR;  /* YIELD */
A68_65  BSWACTR;  /* OPERATORS - istruct -> vector */
A68_BOOL  CSWACTR;  /* optbool result */
A68_66  FSWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  GSWACTR;  /* YIELD */
A68_65  HSWACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_BOOL  ISWACTR_comma;
A68_INT * JSWACTR_p;
A68_INT  KSWACTR;  /* forall loop counter */
A68_255  LSWACTR;  /* collateral clause result */
A68_66  MSWACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  NSWACTR;  /* YIELD */
A68_66  QSWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  RSWACTR;  /* YIELD */
A68_VC  SSWACTR;  /* avoid structure result */
A68_66  TSWACTR;  /* OPERATORS - mode -> union mode */
A68_65  USWACTR;  /* OPERATORS - istruct -> vector */
A68_279  VSWACTR;  /* collateral clause result */
A68_66  WSWACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  XSWACTR;  /* YIELD */
A68_66  ATWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  BTWACTR;  /* YIELD */
A68_VC  CTWACTR;  /* avoid structure result */
A68_66  DTWACTR;  /* OPERATORS - mode -> union mode */
A68_66  ETWACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  FTWACTR;  /* YIELD */
A68_65  GTWACTR;  /* OPERATORS - istruct -> vector */
A68_255  HTWACTR;  /* collateral clause result */
A68_66  KTWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  LTWACTR;  /* YIELD */
A68_66  MTWACTR;  /* OPERATORS - mode -> union mode */
A68_65  NTWACTR;  /* OPERATORS - istruct -> vector */
A68_268  OTWACTR;  /* collateral clause result */
A68_66  RTWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  STWACTR;  /* YIELD */
A68_VC  TTWACTR;  /* avoid structure result */
A68_66  UTWACTR;  /* OPERATORS - mode -> union mode */
A68_66  VTWACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  WTWACTR;  /* YIELD */
A68_VC  XTWACTR;  /* avoid structure result */
A68_66  YTWACTR;  /* OPERATORS - mode -> union mode */
A68_66  ZTWACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  AUWACTR;  /* YIELD */
A68_66  BUWACTR;  /* OPERATORS - mode -> union mode */
A68_65  CUWACTR;  /* OPERATORS - istruct -> vector */
A68_255  DUWACTR;  /* collateral clause result */
A68_66  EUWACTR;  /* OPERATORS - mode -> union mode */
A68_66  FUWACTR;  /* OPERATORS - mode -> union mode */
A68_65  GUWACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(zexternalcdec);
 /* line 940: */
 /* line 941: */
{ 
BQWACTR = (Decno<=IAAACTR_maxidno);
if ( ! BQWACTR )
{CQWACTR = (Decno>=LAAACTR_minlibid);
if ( CQWACTR )
{CQWACTR = (Decno<=MAAACTR_maxlibid);
}
BQWACTR = CQWACTR;
}
PXIACTR_assert(DQWACTR, BQWACTR);
 /* line 943: */
if ( (Decno<=IAAACTR_maxidno) )
{ 
EQWACTR = (&A_R1INDEX(FOKACTR_ids,Decno));
} 
else
{ 
EQWACTR = (&A_R1INDEX(HOKACTR_libraryids,Decno));
} 
FQWACTR_id = EQWACTR;
 /* line 946: */
 /* line 947: */
 /* line 948: */
GQWACTR = (*(&(FQWACTR_id->Flags))) ;
HQWACTR = A_LB_GE(GQWACTR,UOKACTR_idloadedflag);
if ( ! HQWACTR )
{ /* line 949: */
IQWACTR = (*(&(FQWACTR_id->Flags))) ;
HQWACTR = A_LB_GE(IQWACTR,VOKACTR_idforceuseflag);
}
 /* line 950: */
if ( ! HQWACTR )
{JQWACTR = ((*(&(FQWACTR_id->Definition))).upb>=9);
if ( JQWACTR )
{LQWACTR = (*(&(FQWACTR_id->Definition))) ;
JQWACTR = A_VC_EQ(A_VTRIM(MQWACTR,(LQWACTR),A_VTSCRIPT(&(MQWACTR.upb),(LQWACTR).upb,((*(&(FQWACTR_id->Definition))).upb-8),(LQWACTR).upb)),NQWACTR);
}
 /* line 951: */
HQWACTR = JQWACTR;
}
 /* line 952: */
OQWACTR = HQWACTR;
if ( OQWACTR )
{ 
PQWACTR_mode = (*(&(FQWACTR_id->Mode)));
 /* line 953: */
QQWACTR = (*(&(FQWACTR_id->Flags))) ;
RQWACTR_optimised = A_LB_GE(QQWACTR,QOKACTR_idoptimisedflag);
 /* line 954: */
SQWACTR = (*(&(FQWACTR_id->Flags))) ;
TQWACTR_globalproc = A_LB_GE(SQWACTR,SOKACTR_idgprocflag);
 /* line 955: */
UQWACTR_definition = (*(&(FQWACTR_id->Definition)));
 /* line 956: */
VQWACTR_rhs = (*(&(FQWACTR_id->Rhs)));
 /* line 958: */
 /* line 959: */
 /* line 960: */
if ( (VQWACTR_rhs.upb>0) )
{ 
WQWACTR.data[0] = A_UNITE(XQWACTR,mode2,2,VQWACTR_rhs);
WQWACTR.data[1] = A_UNITE(YQWACTR,mode4,4,EIAACTR_cnewline);
 /* line 961: */
VBMACTR_writecstream(A_HISVEC(ZQWACTR,WQWACTR,2,A68_66 ), PQLACTR_importsstream);
} 
 /* line 963: */
 /* line 964: */
 /* line 965: */
if ( (UQWACTR_definition.upb<=0) )
{ 
 /* line 966: */
 /* line 967: */
if ( TQWACTR_globalproc )
{ 
ARWACTR_deprocmode = A_CALLPROC(BUMACTR_deproc,(PQWACTR_mode),(PQWACTR_mode,(BUMACTR_deproc).nonlocals));
 /* line 968: */
BRWACTR = NQIACTR_nostructresultoption;
if ( BRWACTR )
{BRWACTR = ERMACTR_iscstruct(ARWACTR_deprocmode);
}
CRWACTR_voidresult = BRWACTR;
 /* line 970: */
if ( WQMACTR_isprocp(PQWACTR_mode) )
{ 
A_CALLPROC(JUMACTR_parameters,(PQWACTR_mode, &ERWACTR),(PQWACTR_mode, &ERWACTR,(JUMACTR_parameters).nonlocals));
DRWACTR = ERWACTR;
} 
else
{ 
A_CLOSURE( GRWACTR_generator, HRWACTR_generator, IRWACTR_generator );
A_CALLPROC(GRWACTR_generator,(A68_FALSE, &LRWACTR),(A68_FALSE, &LRWACTR,(GRWACTR_generator).nonlocals));
DRWACTR = LRWACTR;
} 
MRWACTR_params = DRWACTR;
 /* line 972: */
 /* line 973: */
RRWACTR = PRWACTR ;
NRWACTR.data[0] = A_UNITE(QRWACTR,mode2,2,RRWACTR);
if ( CRWACTR_voidresult )
{ 
SRWACTR = UEAACTR_voidmode;
} 
else
{ 
SRWACTR = ARWACTR_deprocmode;
} 
GJNACTR_ctype( SRWACTR, &TRWACTR );
NRWACTR.data[1] = A_UNITE(URWACTR,mode2,2,TRWACTR);
 /* line 974: */
WRWACTR = ' ' ;
NRWACTR.data[2] = A_UNITE(VRWACTR,mode1,1,WRWACTR);
DSKACTR_idfullname( Decno, &XRWACTR );
NRWACTR.data[3] = A_UNITE(YRWACTR,mode2,2,XRWACTR);
ASWACTR = '(' ;
NRWACTR.data[4] = A_UNITE(ZRWACTR,mode1,1,ASWACTR);
VBMACTR_writecstream(A_HISVEC(BSWACTR,NRWACTR,5,A68_66 ), PQLACTR_importsstream);
 /* line 976: */
 /* line 977: */
CSWACTR = (MRWACTR_params.upb==0);
if ( CSWACTR )
{CSWACTR = !CRWACTR_voidresult;
}
 /* line 978: */
if ( CSWACTR )
{ 
 /* line 979: */
 /* line 980: */
GSWACTR = ESWACTR ;
VBMACTR_writecstream(A_HVEC(HSWACTR,A_UNITE(FSWACTR,mode2,2,GSWACTR),A68_66 ), PQLACTR_importsstream);
} 
else
{ 
ISWACTR_comma = A68_FALSE;
 /* line 981: */
 /* line 982: */
KSWACTR = MRWACTR_params.upb -1;
JSWACTR_p = MRWACTR_params.data;
for (;KSWACTR-- >= 0;
(JSWACTR_p++
) )
{
 /* line 983: */
if ( ISWACTR_comma )
{ 
NSWACTR = ',' ;
LSWACTR.data[0] = A_UNITE(MSWACTR,mode1,1,NSWACTR);
} 
else
{ 
RSWACTR = PSWACTR ;
LSWACTR.data[0] = A_UNITE(QSWACTR,mode2,2,RSWACTR);
} 
FKNACTR_ctaggedtype( (*JSWACTR_p), &SSWACTR );
LSWACTR.data[1] = A_UNITE(TSWACTR,mode2,2,SSWACTR);
VBMACTR_writecstream(A_HISVEC(USWACTR,LSWACTR,2,A68_66 ), PQLACTR_importsstream);
 /* line 984: */
 /* line 985: */
ISWACTR_comma = A68_TRUE;
}
 /* line 987: */
 /* line 988: */
 /* line 989: */
if ( CRWACTR_voidresult )
{ 
if ( ISWACTR_comma )
{ 
XSWACTR = ',' ;
VSWACTR.data[0] = A_UNITE(WSWACTR,mode1,1,XSWACTR);
} 
else
{ 
BTWACTR = ZSWACTR ;
VSWACTR.data[0] = A_UNITE(ATWACTR,mode2,2,BTWACTR);
} 
GJNACTR_ctype( ARWACTR_deprocmode, &CTWACTR );
VSWACTR.data[1] = A_UNITE(DTWACTR,mode2,2,CTWACTR);
FTWACTR = '*' ;
VSWACTR.data[2] = A_UNITE(ETWACTR,mode1,1,FTWACTR);
 /* line 990: */
 /* line 991: */
VBMACTR_writecstream(A_HISVEC(GTWACTR,VSWACTR,3,A68_66 ), PQLACTR_importsstream);
} 
} 
 /* line 993: */
LTWACTR = JTWACTR ;
HTWACTR.data[0] = A_UNITE(KTWACTR,mode2,2,LTWACTR);
HTWACTR.data[1] = A_UNITE(MTWACTR,mode4,4,EIAACTR_cnewline);
 /* line 995: */
 /* line 996: */
VBMACTR_writecstream(A_HISVEC(NTWACTR,HTWACTR,2,A68_66 ), PQLACTR_importsstream);
} 
else
{ 
 /* line 997: */
if ( !RQWACTR_optimised )
{ 
 /* line 998: */
STWACTR = QTWACTR ;
OTWACTR.data[0] = A_UNITE(RTWACTR,mode2,2,STWACTR);
KJNACTR_cvartype( (*(&(HPKACTR_get_idinfo(Decno)->Cvariabletype))), &TTWACTR );
OTWACTR.data[1] = A_UNITE(UTWACTR,mode2,2,TTWACTR);
 /* line 999: */
WTWACTR = ' ' ;
OTWACTR.data[2] = A_UNITE(VTWACTR,mode1,1,WTWACTR);
DSKACTR_idfullname( Decno, &XTWACTR );
OTWACTR.data[3] = A_UNITE(YTWACTR,mode2,2,XTWACTR);
AUWACTR = ';' ;
OTWACTR.data[4] = A_UNITE(ZTWACTR,mode1,1,AUWACTR);
OTWACTR.data[5] = A_UNITE(BUWACTR,mode4,4,EIAACTR_cnewline);
 /* line 1000: */
 /* line 1001: */
 /* line 1002: */
VBMACTR_writecstream(A_HISVEC(CUWACTR,OTWACTR,6,A68_66 ), PQLACTR_importsstream);
} 
} 
} 
else
{ 
DUWACTR.data[0] = A_UNITE(EUWACTR,mode2,2,UQWACTR_definition);
DUWACTR.data[1] = A_UNITE(FUWACTR,mode4,4,EIAACTR_cnewline);
 /* line 1003: */
 /* line 1004: */
VBMACTR_writecstream(A_HISVEC(GUWACTR,DUWACTR,2,A68_66 ), PQLACTR_importsstream);
} 
} 
} 
A_PROC_EXIT(zexternalcdec);
return;
} 
#undef NL

A68_VOID  HUWACTR_initialiseidentifiers(void)
{ 
A68_111  IUWACTR;  /* procedure value */
A68_75  JUWACTR;  /* procedure value */
A_PROC_ENTRY(initialiseidentifiers);
{ 
IUWACTR.fn.fn_global = EPWACTR_zexternaldec;
IUWACTR.nonlocals = A68_NIL;
UVKACTR_externaldec = IUWACTR;
 /* line 1010: */
 /* line 1011: */
JUWACTR.fn.fn_global = ZPWACTR_zexternalcdec;
JUWACTR.nonlocals = A68_NIL;
VVKACTR_externalcdec = JUWACTR;
} 
A_PROC_EXIT(initialiseidentifiers);
return;
} 
#undef NL

A68_INT  LUWACTR_leveloflabel(A68_INT  Labno)
{ 
A68_INT  MUWACTR;  /* clause result */
A_PROC_ENTRY(leveloflabel);
 /* line 1014: */
MUWACTR = (*(&((&((&A_R1INDEX(IOKACTR_labels,Labno))->Environ))->Level)));
A_PROC_EXIT(leveloflabel);
return( MUWACTR );
} 
#undef NL

A68_VOID  OUWACTR_environoflabel(A68_INT  Labno, A68_72  *ReturnedValue)
{ 
A68_72  PUWACTR;  /* clause result */
A_PROC_ENTRY(environoflabel);
 /* line 1017: */
PUWACTR = (*(&((&A_R1INDEX(IOKACTR_labels,Labno))->Environ)));
A_PROC_EXIT(environoflabel);
*ReturnedValue = (PUWACTR);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 3: */
 /* line 4: */
 /* line 5: */
 /* line 7: */
void WIVACTR(void)   /* initialise DECS identifiers */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/shields/projects/Algol68/Tools/Algol68toC/src/a68toc","-v","-uname","seedfile","-lib","/home/shields/projects/Algol68/Tools/Algol68toC/a68config","-dir","/home/shields/projects/Algol68/Tools/Algol68toC/a68config","-dir","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel","-dir",".","identifiers.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/shields/projects/Algol68/Tools/Algol68toC/a68config","A68_CDIR=","A68_DIR=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/shields/projects/Algol68/Tools/Algol68toC/a68config/a68config.m","./values.m","./uniquenameserver.m","./unionaids.m","./moduletracer.m","./modes.m","./incmode.m","./incinstallation.m","./modules.m","./incimperatives.m","./incid.m","./idtable.m","./evaluator.m","./environment.m","./environ.m","./denotations.m","./coutput.m","./centities.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/usefulops.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
JRPACTR();   /* USE values */
AGMACTR();   /* USE uniquenameserver */
QRQACTR();   /* USE unionaids */
BCHACTR();   /* USE moduletracer */
MLMACTR();   /* USE modes */
ZDAACTR();   /* USE incmode */
ODAACTR();   /* USE incinstallation */
VJOACTR();   /* USE modules */
UAAACTR();   /* USE incimperatives */
BAAACTR();   /* USE incid */
YNKACTR();   /* USE idtable */
TCVACTR();   /* USE evaluator */
HPIACTR();   /* USE environment */
KNLACTR();   /* USE environ */
UJJACTR();   /* USE denotations */
YRLACTR();   /* USE coutput */
THAACTR();   /* USE centities */
IKAAOSF();   /* USE usefulops */
/* --- Initialise configuration information */
A_config.source_file = "/home/shields/projects/Algol68/Tools/Algol68toC/src/identifiers.a68";
A_config.translation_time = "Sun Sep 26 21:51:05 2004";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "VIVACTR (from seed file) ";
A_config.spec_change_time = "Sun Sep 26 21:51:05 2004";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS identifiers);
UEAALIB_a68config(LGAALIB_configinfo, AJVACTR);
 /* line 46: */
 /* line 56: */
 /* line 62: */
 /* line 82: */
 /* line 83: */
 /* line 168: */
 /* line 348: */
 /* line 456: */
 /* line 457: */
 /* line 526: */
 /* line 552: */
 /* line 622: */
 /* line 623: */
 /* line 770: */
 /* line 775: */
 /* line 776: */
 /* line 795: */
 /* line 796: */
 /* line 859: */
 /* line 895: */
 /* line 896: */
 /* line 932: */
 /* line 934: */
 /* line 1006: */
 /* line 1007: */
 /* line 1009: */
 /* line 1013: */
 /* line 1016: */
 /* line 1019: */
 /* line 1021: */
 /* line 1028: */
/*SKIP*/;
A_PROC_EXIT(DECS identifiers);
} 
#undef NL
/* end of translation of identifiers.a68 */
