/* UNAME:JXYACTR */
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

A_PROCEDURE(A68_INT ,A68t54,(A68_INT ),(A68_INT ,void *));
typedef struct A68t54  A68_54 ;    /* PROC(INT) INT */

A_PROCEDURE(A68_BOOL ,A68t55,(A68_INT ),(A68_INT ,void *));
typedef struct A68t55  A68_55 ;    /* PROC(INT) BOOL */
struct A68t56{
A68_INT  Level;
A_PAD_INT(PAD_1)
A68_INT  Block;
A_PAD_INT(PAD_2)
};
typedef struct A68t56  A68_56 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t57,(struct A68t56 *),(struct A68t56 *,void *));
typedef struct A68t57  A68_57 ;    /* PROC MODE56 */

A_PROCEDURE(A68_INT ,A68t58,(void),(void *));
typedef struct A68t58  A68_58 ;    /* PROC INT */

A_PROCEDURE(A68_VOID ,A68t59,(A68_INT ),(A68_INT ,void *));
typedef struct A68t59  A68_59 ;    /* PROC(INT) VOID */

A_PROCEDURE(A68_VOID ,A68t60,(void),(void *));
typedef struct A68t60  A68_60 ;    /* PROC VOID */

A_PROCEDURE(A68_BOOL ,A68t61,(void),(void *));
typedef struct A68t61  A68_61 ;    /* PROC BOOL */

A_PROCEDURE(A68_BOOL ,A68t62,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t62  A68_62 ;    /* PROC(INT,INT) BOOL */

A_PROCEDURE(A68_VOID ,A68t63,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t63  A68_63 ;    /* PROC(INT,INT) VOID */

A_PROCEDURE(A68_BOOL ,A68t64,(struct A68t56 ,struct A68t56 ),(struct A68t56 ,struct A68t56 ,void *));
typedef struct A68t64  A68_64 ;    /* PROC(MODE56,MODE56) BOOL */

A_PROCEDURE(A68_BOOL ,A68t65,(struct A68t56 ),(struct A68t56 ,void *));
typedef struct A68t65  A68_65 ;    /* PROC(MODE56) BOOL */

A_PROCEDURE(A68_VOID ,A68t66,(A68_VC ,A68_BOOL ),(A68_VC ,A68_BOOL ,void *));
typedef struct A68t66  A68_66 ;    /* PROC(MODE26,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t67,(A68_VC ,A68_INT ),(A68_VC ,A68_INT ,void *));
typedef struct A68t67  A68_67 ;    /* PROC(MODE26,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t68,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t68  A68_68 ;    /* PROC(INT) REF MODE26 */
struct A68t70 ;

A_PROCEDURE(A68_VOID ,A68t69,(A68_INT ,struct A68t70 ),(A68_INT ,struct A68t70 ,void *));
typedef struct A68t69  A68_69 ;    /* PROC(INT,MODE70) VOID */
A_ROW(A68_VC ,A68t70,1);
typedef struct A68t70  A68_70 ;    /* [] MODE26 */

A_PROCEDURE(A68_BITS ,A68t71,(void),(void *));
typedef struct A68t71  A68_71 ;    /* PROC BITS */
struct A68t72{
A68_INT  Cfile;
A_PAD_INT(PAD_3)
};
typedef struct A68t72  A68_72 ;    /* STRUCT(INT)  */
struct A68t73{
A68_INT  Seedfile;
A_PAD_INT(PAD_4)
};
typedef struct A68t73  A68_73 ;    /* STRUCT(INT)  */
A_ISTRUCT(A68_CHAR ,7,A68t75);
typedef struct A68t75  A68_75 ;    /* STRUCT 7 CHAR */
struct A68t74 { A68_INT mode; union {
struct A68t72  mode1;
struct A68t73  mode2;
struct A68t75  mode3;
} data; };
typedef struct A68t74  A68_74 ;    /* UNION(MODE72,MODE73,MODE75,VOID)  */

A_PROCEDURE(A68_VOID ,A68t76,(A68_VC ),(A68_VC ,void *));
typedef struct A68t76  A68_76 ;    /* PROC(MODE26) VOID */
struct A68t77{
A68_VC  Version;
A68_LINT  Translationtime;
A_PAD_LINT(PAD_5)
A68_VC  Sourcefile;
struct A68t75  Nameseed;
A_PAD_ISTRUCT(A68_75 ,PAD_6)
struct A68t74  Nameseedorigin;
struct A68t78 * Used_modules;
A68_VC  Commandline;
struct A68t79 * Environment;
};
typedef struct A68t77  A68_77 ;    /* STRUCT(REF MODE26,LONG INT,REF MODE26,MODE75,MODE74,REF MODE78,REF MODE26,REF MODE79)  */
struct A68t78{
A68_VC  Modinfo_file;
struct A68t78 * Next;
};
typedef struct A68t78  A68_78 ;    /* STRUCT(REF MODE26,REF MODE78)  */
struct A68t79{
A68_VC  Env_name;
A68_VC  Env_value;
struct A68t79 * Next;
};
typedef struct A68t79  A68_79 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE79)  */
struct A68t81 ;
struct A68t82 ;

A_PROCEDURE(struct A68t81 *,A68t80,(A68_VC ,struct A68t82 *,A68_VC *),(A68_VC ,struct A68t82 *,A68_VC *,void *));
typedef struct A68t80  A68_80 ;    /* PROC(MODE26,REF MODE82,REF REF MODE26) REF MODE81 */
struct A68t81{
A68_VC  Name;
A68_BITS * Stdiofile;
};
typedef struct A68t81  A68_81 ;    /* STRUCT(REF MODE26,REF BITS)  */
struct A68t82{
A68_VC  Dir;
struct A68t82 * Next;
};
typedef struct A68t82  A68_82 ;    /* STRUCT(REF MODE26,REF MODE82)  */

A_PROCEDURE(A68_VOID ,A68t83,(A68_BOOL ,A68_VC *),(A68_BOOL ,A68_VC *,void *));
typedef struct A68t83  A68_83 ;    /* PROC(BOOL) MODE26 */
struct A68t84{
struct A68t75  Name;
A_PAD_ISTRUCT(A68_75 ,PAD_7)
A68_BOOL  Set;
A_PAD_BOOL(PAD_8)
};
typedef struct A68t84  A68_84 ;    /* STRUCT(MODE75,BOOL)  */
struct A68t85{
A68_INT  Labno;
A_PAD_INT(PAD_9)
};
typedef struct A68t85  A68_85 ;    /* STRUCT(INT)  */

A_PROCEDURE(A68_VOID ,A68t86,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t86  A68_86 ;    /* PROC(MODE26) MODE26 */
struct A68t88 ;

A_PROCEDURE(A68_VOID ,A68t87,(struct A68t88 ),(struct A68t88 ,void *));
typedef struct A68t87  A68_87 ;    /* PROC(MODE88) VOID */
A_VECTOR(struct A68t89 ,A68t88);
typedef struct A68t88  A68_88 ;    /* VECTOR [] MODE89 */
struct A68t89 { A68_INT mode; union {
A68_CHAR  mode1;
A68_VC  mode2;
A68_SINT  mode3;
} data; };
typedef struct A68t89  A68_89 ;    /* UNION(CHAR,MODE26,SHORT INT)  */
struct A68t91 ;

A_PROCEDURE(A68_VOID ,A68t90,(struct A68t91 ,A68_INT ),(struct A68t91 ,A68_INT ,void *));
typedef struct A68t90  A68_90 ;    /* PROC(MODE91,INT) VOID */
A_VECTOR(struct A68t92 ,A68t91);
typedef struct A68t91  A68_91 ;    /* VECTOR [] MODE92 */
struct A68t92 { A68_INT mode; union {
A68_CHAR  mode1;
A68_VC  mode2;
A68_INT  mode3;
A68_SINT  mode4;
} data; };
typedef struct A68t92  A68_92 ;    /* UNION(CHAR,MODE26,INT,SHORT INT)  */
struct A68t95{
A68_INT  Rdenno;
A_PAD_INT(PAD_10)
};
typedef struct A68t95  A68_95 ;    /* STRUCT(INT)  */
struct A68t96{
A68_INT  Idno;
A_PAD_INT(PAD_11)
};
typedef struct A68t96  A68_96 ;    /* STRUCT(INT)  */
struct A68t97{
struct A68t75  Name;
A_PAD_ISTRUCT(A68_75 ,PAD_12)
A68_INT  Mode;
A_PAD_INT(PAD_13)
};
typedef struct A68t97  A68_97 ;    /* STRUCT(MODE75,INT)  */
struct A68t98{
A68_INT  Nse;
A_PAD_INT(PAD_14)
};
typedef struct A68t98  A68_98 ;    /* STRUCT(INT)  */
struct A68t99{
A68_INT  Fn;
A_PAD_INT(PAD_15)
A68_INT  Param;
A_PAD_INT(PAD_16)
struct A68t100 * Operands;
};
typedef struct A68t99  A68_99 ;    /* STRUCT(INT,INT,REF MODE100)  */
struct A68t94 { A68_INT mode; union {
A68_LBITS  mode1;
struct A68t95  mode2;
struct A68t96  mode4;
struct A68t97  mode5;
A68_VC  mode6;
struct A68t85  mode7;
struct A68t98  mode8;
struct A68t99  mode9;
} data; };
typedef struct A68t94  A68_94 ;    /* UNION(LONG BITS,MODE95,VOID,MODE96,MODE97,MODE26,MODE85,MODE98,MODE99)  */
struct A68t93{
A68_INT  Mode;
A_PAD_INT(PAD_17)
A68_BITS  Info;
A_PAD_BITS(PAD_18)
struct A68t94  Extra;
};
typedef struct A68t93  A68_93 ;    /* STRUCT(INT,BITS,MODE94)  */
struct A68t100{
struct A68t93  Value;
struct A68t100 * Rest;
};
typedef struct A68t100  A68_100 ;    /* STRUCT(MODE93,REF MODE100)  */

A_PROCEDURE(A68_BOOL ,A68t101,(struct A68t93 *,struct A68t93 *),(struct A68t93 *,struct A68t93 *,void *));
typedef struct A68t101  A68_101 ;    /* PROC(REF MODE93,REF MODE93) BOOL */

A_PROCEDURE(A68_BOOL ,A68t102,(struct A68t93 *),(struct A68t93 *,void *));
typedef struct A68t102  A68_102 ;    /* PROC(REF MODE93) BOOL */

A_PROCEDURE(A68_BOOL ,A68t103,(struct A68t93 *,A68_LBITS ),(struct A68t93 *,A68_LBITS ,void *));
typedef struct A68t103  A68_103 ;    /* PROC(REF MODE93,LONG BITS) BOOL */

A_PROCEDURE(A68_LBITS ,A68t104,(struct A68t93 *),(struct A68t93 *,void *));
typedef struct A68t104  A68_104 ;    /* PROC(REF MODE93) LONG BITS */

A_PROCEDURE(A68_VOID ,A68t105,(struct A68t93 *,A68_VC *),(struct A68t93 *,A68_VC *,void *));
typedef struct A68t105  A68_105 ;    /* PROC(REF MODE93) MODE26 */

A_PROCEDURE(struct A68t93 *,A68t106,(struct A68t93 *,A68_INT ),(struct A68t93 *,A68_INT ,void *));
typedef struct A68t106  A68_106 ;    /* PROC(REF MODE93,INT) REF MODE93 */

A_PROCEDURE(A68_INT ,A68t107,(struct A68t99 ),(struct A68t99 ,void *));
typedef struct A68t107  A68_107 ;    /* PROC(MODE99) INT */
struct A68t108{
struct A68t93 * Value;
struct A68t84 * End;
A68_INT  Type;
A_PAD_INT(PAD_19)
};
typedef struct A68t108  A68_108 ;    /* STRUCT(REF MODE93,REF MODE84,INT)  */

A_PROCEDURE(A68_BOOL ,A68t109,(struct A68t93 *,A68_BITS ),(struct A68t93 *,A68_BITS ,void *));
typedef struct A68t109  A68_109 ;    /* PROC(REF MODE93,BITS) BOOL */

A_PROCEDURE(struct A68t93 *,A68t110,(struct A68t100 *,A68_INT ),(struct A68t100 *,A68_INT ,void *));
typedef struct A68t110  A68_110 ;    /* PROC(REF MODE100,INT) REF MODE93 */

A_PROCEDURE(struct A68t100 *,A68t111,(struct A68t100 *),(struct A68t100 *,void *));
typedef struct A68t111  A68_111 ;    /* PROC(REF MODE100) REF MODE100 */
struct A68t113 ;

A_PROCEDURE(struct A68t93 *,A68t112,(A68_INT ,A68_INT ,A68_BITS ,struct A68t113 ),(A68_INT ,A68_INT ,A68_BITS ,struct A68t113 ,void *));
typedef struct A68t112  A68_112 ;    /* PROC(INT,INT,BITS,MODE113) REF MODE93 */
A_VECTOR(struct A68t93 *,A68t113);
typedef struct A68t113  A68_113 ;    /* VECTOR [] REF MODE93 */

A_PROCEDURE(A68_VOID ,A68t114,(struct A68t93 *),(struct A68t93 *,void *));
typedef struct A68t114  A68_114 ;    /* PROC(REF MODE93) VOID */

A_PROCEDURE(A68_VOID ,A68t115,(struct A68t93 *,A68_BOOL ,A68_VC *),(struct A68t93 *,A68_BOOL ,A68_VC *,void *));
typedef struct A68t115  A68_115 ;    /* PROC(REF MODE93,BOOL) MODE26 */

A_PROCEDURE(A68_LINT ,A68t116,(struct A68t93 ),(struct A68t93 ,void *));
typedef struct A68t116  A68_116 ;    /* PROC(MODE93) LONG INT */
struct A68t117 { A68_INT mode; union {
struct A68t93 * mode1;
A68_VC  mode2;
struct A68t97  mode3;
} data; };
typedef struct A68t117  A68_117 ;    /* UNION(REF MODE93,MODE26,MODE97)  */

A_PROCEDURE(A68_VOID ,A68t118,(struct A68t117 ,A68_VC *),(struct A68t117 ,A68_VC *,void *));
typedef struct A68t118  A68_118 ;    /* PROC(MODE117) MODE26 */
struct A68t120 ;

A_PROCEDURE(A68_VOID ,A68t119,(struct A68t120 ,A68_VC *),(struct A68t120 ,A68_VC *,void *));
typedef struct A68t119  A68_119 ;    /* PROC(MODE120) MODE26 */
A_VECTOR(struct A68t117 ,A68t120);
typedef struct A68t120  A68_120 ;    /* VECTOR [] MODE117 */

A_PROCEDURE(A68_VOID ,A68t121,(A68_VC ,struct A68t120 ,A68_VC *),(A68_VC ,struct A68t120 ,A68_VC *,void *));
typedef struct A68t121  A68_121 ;    /* PROC(MODE26,MODE120) MODE26 */

A_PROCEDURE(A68_VOID ,A68t122,(struct A68t120 ),(struct A68t120 ,void *));
typedef struct A68t122  A68_122 ;    /* PROC(MODE120) VOID */

A_PROCEDURE(A68_VOID ,A68t123,(A68_VC ,A68_INT ,struct A68t120 ,struct A68t97 *),(A68_VC ,A68_INT ,struct A68t120 ,struct A68t97 *,void *));
typedef struct A68t123  A68_123 ;    /* PROC(MODE26,INT,MODE120) MODE97 */

A_PROCEDURE(struct A68t93 *,A68t124,(struct A68t93 *),(struct A68t93 *,void *));
typedef struct A68t124  A68_124 ;    /* PROC(REF MODE93) REF MODE93 */

A_PROCEDURE(struct A68t93 *,A68t125,(A68_VC ,struct A68t93 *),(A68_VC ,struct A68t93 *,void *));
typedef struct A68t125  A68_125 ;    /* PROC(MODE26,REF MODE93) REF MODE93 */
struct A68t126{
A68_INT  Mode;
A_PAD_INT(PAD_20)
A68_INT  Cvariabletype;
A_PAD_INT(PAD_21)
struct A68t56  Environ;
A68_VC  Name;
A68_VC  C_name;
struct A68t75  Prefix;
A_PAD_ISTRUCT(A68_75 ,PAD_22)
A68_BITS  Flags;
A_PAD_BITS(PAD_23)
A68_VC  Definition;
A68_VC  Rhs;
};
typedef struct A68t126  A68_126 ;    /* STRUCT(INT,INT,MODE56,REF MODE26,REF MODE26,MODE75,BITS,REF MODE26,REF MODE26)  */
struct A68t127{
A68_INT  Mode;
A_PAD_INT(PAD_24)
A68_INT  Resultmode;
A_PAD_INT(PAD_25)
A68_INT  Declevel;
A_PAD_INT(PAD_26)
struct A68t56  Environ;
A68_VC  Name;
struct A68t75  Prefix;
A_PAD_ISTRUCT(A68_75 ,PAD_27)
struct A68t75  Fnprefix;
A_PAD_ISTRUCT(A68_75 ,PAD_28)
struct A68t75  Envprefix;
A_PAD_ISTRUCT(A68_75 ,PAD_29)
A68_BITS  Flags;
A_PAD_BITS(PAD_30)
};
typedef struct A68t127  A68_127 ;    /* STRUCT(INT,INT,INT,MODE56,REF MODE26,MODE75,MODE75,MODE75,BITS)  */
struct A68t128{
struct A68t84  Label;
struct A68t56  Environ;
A68_VC  Name;
struct A68t75  Prefix;
A_PAD_ISTRUCT(A68_75 ,PAD_31)
A68_BITS  Flags;
A_PAD_BITS(PAD_32)
A68_INT  Alias;
A_PAD_INT(PAD_33)
};
typedef struct A68t128  A68_128 ;    /* STRUCT(MODE84,MODE56,REF MODE26,MODE75,BITS,INT)  */

A_PROCEDURE(struct A68t126 *,A68t129,(A68_INT ),(A68_INT ,void *));
typedef struct A68t129  A68_129 ;    /* PROC(INT) REF MODE126 */

A_PROCEDURE(A68_VOID ,A68t130,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t130  A68_130 ;    /* PROC(REF MODE26) MODE26 */

A_PROCEDURE(A68_VOID ,A68t131,(A68_VC ,struct A68t75 ,A68_INT ,A68_INT ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_VC ,A68_VC ),(A68_VC ,struct A68t75 ,A68_INT ,A68_INT ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_VC ,A68_VC ,void *));
typedef struct A68t131  A68_131 ;    /* PROC(REF MODE26,MODE75,INT,INT,BOOL,BOOL,BOOL,BOOL,BOOL,REF MODE26,REF MODE26) VOID */
A_ROW(struct A68t126 ,A68t132,1);
typedef struct A68t132  A68_132 ;    /* [] MODE126 */
A_ROW(struct A68t127 ,A68t133,1);
typedef struct A68t133  A68_133 ;    /* [] MODE127 */
A_ROW(struct A68t128 ,A68t134,1);
typedef struct A68t134  A68_134 ;    /* [] MODE128 */
struct A68t136 ;

A_PROCEDURE(A68_VOID ,A68t135,(A68_INT ,A68_INT ,A68_INT ,A68_INT ,struct A68t136 ),(A68_INT ,A68_INT ,A68_INT ,A68_INT ,struct A68t136 ,void *));
typedef struct A68t135  A68_135 ;    /* PROC(INT,INT,INT,INT,REF MODE136) VOID */
A_ROW(A68_INT ,A68t136,1);
typedef struct A68t136  A68_136 ;    /* [] INT */

A_PROCEDURE(A68_BOOL ,A68t137,(A68_VC ),(A68_VC ,void *));
typedef struct A68t137  A68_137 ;    /* PROC(MODE26) BOOL */

A_PROCEDURE(A68_VOID ,A68t138,(A68_INT ,struct A68t56 *),(A68_INT ,struct A68t56 *,void *));
typedef struct A68t138  A68_138 ;    /* PROC(INT) MODE56 */

A_PROCEDURE(A68_BOOL ,A68t139,(A68_INT ,A68_VC ),(A68_INT ,A68_VC ,void *));
typedef struct A68t139  A68_139 ;    /* PROC(INT,MODE26) BOOL */

A_PROCEDURE(A68_VOID ,A68t140,(struct A68t93 *,A68_BOOL ),(struct A68t93 *,A68_BOOL ,void *));
typedef struct A68t140  A68_140 ;    /* PROC(REF MODE93,BOOL) VOID */
struct A68t142 ;

A_PROCEDURE(A68_VOID ,A68t141,(struct A68t142 ,struct A68t93 *,A68_BOOL ),(struct A68t142 ,struct A68t93 *,A68_BOOL ,void *));
typedef struct A68t141  A68_141 ;    /* PROC(MODE142,REF MODE93,BOOL) VOID */
struct A68t143{
A68_VC  Representation;
};
typedef struct A68t143  A68_143 ;    /* STRUCT(REF MODE26)  */
struct A68t144{
A68_INT  Mode;
A_PAD_INT(PAD_34)
A68_VC  Nu;
};
typedef struct A68t144  A68_144 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t145{
A68_INT  Mode;
A_PAD_INT(PAD_35)
A68_VC  String;
};
typedef struct A68t145  A68_145 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t146{
A68_INT  Mode;
A_PAD_INT(PAD_36)
A68_LBITS  Denotation;
A_PAD_LBITS(PAD_37)
};
typedef struct A68t146  A68_146 ;    /* STRUCT(INT,LONG BITS)  */
struct A68t147{
A68_INT  Mode;
A_PAD_INT(PAD_38)
A68_VC  Denotation;
};
typedef struct A68t147  A68_147 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t148{
A68_INT  Fn;
A_PAD_INT(PAD_39)
A68_INT  Mode;
A_PAD_INT(PAD_40)
A68_INT  Param;
A_PAD_INT(PAD_41)
};
typedef struct A68t148  A68_148 ;    /* STRUCT(INT,INT,INT)  */
struct A68t149{
A68_INT  Type;
A_PAD_INT(PAD_42)
A68_VC  Name;
A68_INT  Mode;
A_PAD_INT(PAD_43)
A68_INT  Decno;
A_PAD_INT(PAD_44)
};
typedef struct A68t149  A68_149 ;    /* STRUCT(INT,REF MODE26,INT,INT)  */
struct A68t150{
A68_VC  Name;
A68_BITS  Props;
A_PAD_BITS(PAD_45)
A68_INT  Mode;
A_PAD_INT(PAD_46)
A68_INT  Rdenno;
A_PAD_INT(PAD_47)
A68_INT  Maxname;
A_PAD_INT(PAD_48)
};
typedef struct A68t150  A68_150 ;    /* STRUCT(REF MODE26,BITS,INT,INT,INT)  */
struct A68t151{
A68_INT  W;
A_PAD_INT(PAD_49)
};
typedef struct A68t151  A68_151 ;    /* STRUCT(INT)  */
struct A68t152{
A68_VC  Name;
A68_INT  Labno;
A_PAD_INT(PAD_50)
A68_INT  Status;
A_PAD_INT(PAD_51)
A68_BOOL  Notsetting;
A_PAD_BOOL(PAD_52)
};
typedef struct A68t152  A68_152 ;    /* STRUCT(REF MODE26,INT,INT,BOOL)  */
struct A68t153{
A68_INT  Mode;
A_PAD_INT(PAD_53)
A68_BITS  Props;
A_PAD_BITS(PAD_54)
A68_INT  Param;
A_PAD_INT(PAD_55)
};
typedef struct A68t153  A68_153 ;    /* STRUCT(INT,BITS,INT)  */
struct A68t154{
A68_INT  I;
A_PAD_INT(PAD_56)
};
typedef struct A68t154  A68_154 ;    /* STRUCT(INT)  */
struct A68t155{
A68_BOOL  Start;
A_PAD_BOOL(PAD_57)
};
typedef struct A68t155  A68_155 ;    /* STRUCT(BOOL)  */
struct A68t165{
A68_INT  Nochars;
A_PAD_INT(PAD_58)
A68_INT  Nocases;
A_PAD_INT(PAD_59)
A68_INT  W;
A_PAD_INT(PAD_60)
};
typedef struct A68t165  A68_165 ;    /* STRUCT(INT,INT,INT)  */
struct A68t156{
struct A68t165  Info;
A68_VC  Text;
};
typedef struct A68t156  A68_156 ;    /* STRUCT(MODE165,REF MODE26)  */
struct A68t157{
A68_INT  Mode;
A_PAD_INT(PAD_61)
A68_INT  Number;
A_PAD_INT(PAD_62)
A68_VC  Insert;
};
typedef struct A68t157  A68_157 ;    /* STRUCT(INT,INT,REF MODE26)  */
struct A68t158{
A68_INT  Fn;
A_PAD_INT(PAD_63)
A68_INT  Mode;
A_PAD_INT(PAD_64)
A68_BITS  Props;
A_PAD_BITS(PAD_65)
A68_INT  Param;
A_PAD_INT(PAD_66)
};
typedef struct A68t158  A68_158 ;    /* STRUCT(INT,INT,BITS,INT)  */
struct A68t159{
A68_INT  Fn;
A_PAD_INT(PAD_67)
A68_INT  Mode;
A_PAD_INT(PAD_68)
A68_BITS  Props;
A_PAD_BITS(PAD_69)
A68_INT  Resultmode;
A_PAD_INT(PAD_70)
};
typedef struct A68t159  A68_159 ;    /* STRUCT(INT,INT,BITS,INT)  */
struct A68t160{
A68_INT  Fn;
A_PAD_INT(PAD_71)
A68_BITS  Props;
A_PAD_BITS(PAD_72)
};
typedef struct A68t160  A68_160 ;    /* STRUCT(INT,BITS)  */
struct A68t161{
A68_INT  Body;
A_PAD_INT(PAD_73)
A68_INT  Moduleno;
A_PAD_INT(PAD_74)
struct A68t136  Actuals;
};
typedef struct A68t161  A68_161 ;    /* STRUCT(INT,INT,REF MODE136)  */
struct A68t162{
A68_INT  Moduleno;
A_PAD_INT(PAD_75)
A68_INT  I;
A_PAD_INT(PAD_76)
A68_INT  J;
A_PAD_INT(PAD_77)
};
typedef struct A68t162  A68_162 ;    /* STRUCT(INT,INT,INT)  */
A_ROW(A68_VC ,A68t164,1);
typedef struct A68t164  A68_164 ;    /* [] REF MODE26 */
struct A68t163{
A68_INT  Moduleno;
A_PAD_INT(PAD_78)
A68_VC  Name;
A68_VC  Uname;
A68_VC  Lname;
A68_VC  Gname;
struct A68t164  Ysnames;
};
typedef struct A68t163  A68_163 ;    /* STRUCT(INT,REF MODE26,REF MODE26,REF MODE26,REF MODE26,REF MODE164)  */
struct A68t142 { A68_INT mode; union {
struct A68t98  mode1;
A68_INT  mode2;
A68_BOOL  mode3;
struct A68t143  mode4;
struct A68t85  mode5;
struct A68t144  mode6;
struct A68t145  mode7;
struct A68t146  mode8;
struct A68t147  mode9;
struct A68t148  mode10;
struct A68t149  mode11;
struct A68t150  mode12;
struct A68t151  mode13;
struct A68t152  mode14;
struct A68t153  mode15;
struct A68t154  mode16;
struct A68t155  mode17;
struct A68t156  mode18;
struct A68t157  mode19;
struct A68t158  mode20;
struct A68t159  mode21;
struct A68t160  mode22;
struct A68t161  mode23;
struct A68t162  mode24;
struct A68t163  mode25;
} data; };
typedef struct A68t142  A68_142 ;    /* UNION(MODE98,INT,BOOL,MODE143,MODE85,MODE144,MODE145,MODE146,MODE147,MODE148,MODE149,MODE150,MODE151,MODE152,MODE153,MODE154,MODE155,MODE156,MODE157,MODE158,MODE159,MODE160,MODE161,MODE162,MODE163,VOID)  */

A_PROCEDURE(A68_VOID ,A68t166,(struct A68t100 **),(struct A68t100 **,void *));
typedef struct A68t166  A68_166 ;    /* PROC(REF REF MODE100) VOID */
struct A68t167{
A68_INT  Parameters;
A_PAD_INT(PAD_79)
A68_INT  Result;
A_PAD_INT(PAD_80)
A68_BOOL  Hasdescriptors;
A_PAD_BOOL(PAD_81)
};
typedef struct A68t167  A68_167 ;    /* STRUCT(INT,INT,BOOL)  */
A_ISTRUCT(A68_CHAR ,32,A68t169);
typedef struct A68t169  A68_169 ;    /* STRUCT 32 CHAR */
struct A68t168{
A68_INT  Mode;
A_PAD_INT(PAD_82)
A68_INT  Offset;
A_PAD_INT(PAD_83)
struct A68t169  Name;
A_PAD_ISTRUCT(A68_169 ,PAD_84)
};
typedef struct A68t168  A68_168 ;    /* STRUCT(INT,INT,MODE169)  */
struct A68t171 ;

A_PROCEDURE(A68_VOID ,A68t170,(A68_INT ,struct A68t171 *),(A68_INT ,struct A68t171 *,void *));
typedef struct A68t170  A68_170 ;    /* PROC(INT) REF MODE171 */
A_VECTOR(A68_INT ,A68t171);
typedef struct A68t171  A68_171 ;    /* VECTOR [] INT */

A_PROCEDURE(A68_VOID ,A68t172,(struct A68t168 *,A68_VC *),(struct A68t168 *,A68_VC *,void *));
typedef struct A68t172  A68_172 ;    /* PROC(REF MODE168) MODE26 */

A_PROCEDURE(A68_VOID ,A68t173,(A68_INT ,A68_VC ,struct A68t97 *),(A68_INT ,A68_VC ,struct A68t97 *,void *));
typedef struct A68t173  A68_173 ;    /* PROC(INT,MODE26) MODE97 */
struct A68t175 ;

A_PROCEDURE(A68_VOID ,A68t174,(struct A68t175 ,A68_INT ),(struct A68t175 ,A68_INT ,void *));
typedef struct A68t174  A68_174 ;    /* PROC(REF MODE175,INT) VOID */
A_ROW(struct A68t176 ,A68t175,1);
typedef struct A68t175  A68_175 ;    /* [] MODE176 */
struct A68t186{
A68_INT  Mode;
A_PAD_INT(PAD_85)
};
typedef struct A68t186  A68_186 ;    /* STRUCT(INT)  */
struct A68t176 { A68_INT mode; union {
A68_INT  mode1;
struct A68t177 * mode2;
struct A68t178 * mode3;
struct A68t179 * mode4;
struct A68t180 * mode5;
struct A68t181 * mode6;
struct A68t182 * mode7;
struct A68t183 * mode8;
struct A68t184 * mode9;
struct A68t185 * mode10;
struct A68t186  mode11;
} data; };
typedef struct A68t176  A68_176 ;    /* UNION(INT,REF MODE177,REF MODE178,REF MODE179,REF MODE180,REF MODE181,REF MODE182,REF MODE183,REF MODE184,REF MODE185,MODE186)  */
struct A68t177{
A68_INT  Rdenno;
A_PAD_INT(PAD_86)
struct A68t190 * Modelist;
};
typedef struct A68t177  A68_177 ;    /* STRUCT(INT,REF MODE190)  */
struct A68t178{
A68_INT  Deproc;
A_PAD_INT(PAD_87)
struct A68t190 * Pars;
};
typedef struct A68t178  A68_178 ;    /* STRUCT(INT,REF MODE190)  */
struct A68t179{
A68_INT  Rdenno;
A_PAD_INT(PAD_88)
A68_INT  Deflex;
A_PAD_INT(PAD_89)
struct A68t189 * Sels;
};
typedef struct A68t179  A68_179 ;    /* STRUCT(INT,INT,REF MODE189)  */
struct A68t180{
A68_INT  Rdenno;
A_PAD_INT(PAD_90)
A68_INT  Imode;
A_PAD_INT(PAD_91)
A68_INT  Length;
A_PAD_INT(PAD_92)
A68_INT  Deflex;
A_PAD_INT(PAD_93)
};
typedef struct A68t180  A68_180 ;    /* STRUCT(INT,INT,INT,INT)  */
struct A68t181{
A68_INT  Deproc;
A_PAD_INT(PAD_94)
};
typedef struct A68t181  A68_181 ;    /* STRUCT(INT)  */
struct A68t182{
A68_INT  Rdenno;
A_PAD_INT(PAD_95)
A68_INT  Vecmode;
A_PAD_INT(PAD_96)
A68_INT  Deflex;
A_PAD_INT(PAD_97)
};
typedef struct A68t182  A68_182 ;    /* STRUCT(INT,INT,INT)  */
struct A68t183{
A68_INT  Rdenno;
A_PAD_INT(PAD_98)
A68_INT  Mode;
A_PAD_INT(PAD_99)
A68_INT  Nods;
A_PAD_INT(PAD_100)
A68_INT  Deflex;
A_PAD_INT(PAD_101)
};
typedef struct A68t183  A68_183 ;    /* STRUCT(INT,INT,INT,INT)  */
struct A68t184{
A68_INT  Mode;
A_PAD_INT(PAD_102)
struct A68t188 * Stenlist;
};
typedef struct A68t184  A68_184 ;    /* STRUCT(INT,REF MODE188)  */
struct A68t185{
A68_INT  Mode;
A_PAD_INT(PAD_103)
A68_INT  Modeproc;
A_PAD_INT(PAD_104)
struct A68t187 * El;
};
typedef struct A68t185  A68_185 ;    /* STRUCT(INT,INT,REF MODE187)  */
struct A68t187{
struct A68t185 * Am;
struct A68t187 * Rest;
};
typedef struct A68t187  A68_187 ;    /* STRUCT(REF MODE185,REF MODE187)  */
struct A68t188{
A68_INT  Mode;
A_PAD_INT(PAD_105)
A68_INT  Rdenno;
A_PAD_INT(PAD_106)
struct A68t188 * Rest;
};
typedef struct A68t188  A68_188 ;    /* STRUCT(INT,INT,REF MODE188)  */
struct A68t189{
A68_INT  Mode;
A_PAD_INT(PAD_107)
A68_INT  Fieldno;
A_PAD_INT(PAD_108)
struct A68t169  Name;
A_PAD_ISTRUCT(A68_169 ,PAD_109)
struct A68t189 * Rest;
};
typedef struct A68t189  A68_189 ;    /* STRUCT(INT,INT,MODE169,REF MODE189)  */
struct A68t190{
A68_INT  Mode;
A_PAD_INT(PAD_110)
struct A68t190 * Rest;
};
typedef struct A68t190  A68_190 ;    /* STRUCT(INT,REF MODE190)  */

A_PROCEDURE(A68_VOID ,A68t191,(A68_INT ,struct A68t167 *),(A68_INT ,struct A68t167 *,void *));
typedef struct A68t191  A68_191 ;    /* PROC(INT) MODE167 */
struct A68t193 ;

A_PROCEDURE(A68_VOID ,A68t192,(A68_INT ,struct A68t193 *),(A68_INT ,struct A68t193 *,void *));
typedef struct A68t192  A68_192 ;    /* PROC(INT) REF MODE193 */
A_VECTOR(struct A68t168 ,A68t193);
typedef struct A68t193  A68_193 ;    /* VECTOR [] MODE168 */

A_PROCEDURE(A68_INT ,A68t194,(A68_INT ,A68_BOOL ),(A68_INT ,A68_BOOL ,void *));
typedef struct A68t194  A68_194 ;    /* PROC(INT,BOOL) INT */

A_PROCEDURE(A68_VOID ,A68t195,(A68_INT ,A68_INT ,A68_VC *),(A68_INT ,A68_INT ,A68_VC *,void *));
typedef struct A68t195  A68_195 ;    /* PROC(INT,INT) MODE26 */

A_PROCEDURE(A68_INT ,A68t196,(struct A68t171 ,struct A68t171 ),(struct A68t171 ,struct A68t171 ,void *));
typedef struct A68t196  A68_196 ;    /* PROC(REF MODE171,REF MODE171) INT */

A_PROCEDURE(A68_VOID ,A68t197,(A68_INT ,struct A68t171 ,struct A68t136 *),(A68_INT ,struct A68t171 ,struct A68t136 *,void *));
typedef struct A68t197  A68_197 ;    /* PROC(INT,REF MODE171) MODE136 */

A_PROCEDURE(A68_VOID ,A68t198,(struct A68t171 ,struct A68t171 ,A68_VC *),(struct A68t171 ,struct A68t171 ,A68_VC *,void *));
typedef struct A68t198  A68_198 ;    /* PROC(REF MODE171,REF MODE171) REF MODE26 */
struct A68t199 { A68_INT mode; union {
struct A68t161  mode1;
struct A68t162  mode2;
struct A68t163  mode3;
} data; };
typedef struct A68t199  A68_199 ;    /* UNION(MODE161,MODE162,MODE163)  */
struct A68t200 { A68_INT mode; union {
struct A68t98  mode1;
A68_INT  mode2;
A68_BOOL  mode3;
struct A68t143  mode4;
struct A68t85  mode5;
struct A68t144  mode6;
struct A68t145  mode7;
struct A68t146  mode8;
struct A68t147  mode9;
} data; };
typedef struct A68t200  A68_200 ;    /* UNION(MODE98,INT,BOOL,MODE143,MODE85,MODE144,MODE145,MODE146,MODE147)  */
struct A68t201 { A68_INT mode; union {
struct A68t98  mode1;
A68_INT  mode2;
A68_BOOL  mode3;
struct A68t143  mode4;
struct A68t85  mode5;
struct A68t144  mode6;
struct A68t145  mode7;
struct A68t146  mode8;
struct A68t147  mode9;
struct A68t148  mode10;
struct A68t149  mode11;
struct A68t150  mode12;
struct A68t151  mode13;
struct A68t152  mode14;
struct A68t153  mode15;
struct A68t154  mode16;
struct A68t155  mode17;
struct A68t156  mode18;
struct A68t157  mode19;
} data; };
typedef struct A68t201  A68_201 ;    /* UNION(MODE98,INT,BOOL,MODE143,MODE85,MODE144,MODE145,MODE146,MODE147,MODE148,MODE149,MODE150,MODE151,MODE152,MODE153,MODE154,MODE155,MODE156,MODE157)  */

A_PROCEDURE(A68_VOID ,A68t202,(struct A68t60 ),(struct A68t60 ,void *));
typedef struct A68t202  A68_202 ;    /* PROC(MODE60) VOID */

A_PROCEDURE(A68_VOID ,A68t203,(struct A68t76 ),(struct A68t76 ,void *));
typedef struct A68t203  A68_203 ;    /* PROC(MODE76) VOID */

A_PROCEDURE(A68_VOID ,A68t204,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t204  A68_204 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,62,A68t205);
typedef struct A68t205  A68_205 ;    /* STRUCT 62 CHAR */
struct A68t206{
A68_BOOL  Block;
A_PAD_BOOL(PAD_111)
A68_BOOL  Dynamicresult;
A_PAD_BOOL(PAD_112)
A68_BOOL  Discardeddynamicresult;
A_PAD_BOOL(PAD_113)
A68_INT  Type;
A_PAD_INT(PAD_114)
};
typedef struct A68t206  A68_206 ;    /* STRUCT(BOOL,BOOL,BOOL,INT)  */

A_PROCEDURE(A68_VOID ,A68t207,(struct A68t206 ,struct A68t84 **,A68_BOOL *),(struct A68t206 ,struct A68t84 **,A68_BOOL *,void *));
typedef struct A68t207  A68_207 ;    /* PROC(MODE206,REF REF MODE84,REF BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t208,(struct A68t206 ,struct A68t84 *,struct A68t84 *,A68_BOOL ,A68_BOOL ),(struct A68t206 ,struct A68t84 *,struct A68t84 *,A68_BOOL ,A68_BOOL ,void *));
typedef struct A68t208  A68_208 ;    /* PROC(MODE206,REF MODE84,REF MODE84,BOOL,BOOL) VOID */
A_ISTRUCT(A68_CHAR ,42,A68t209);
typedef struct A68t209  A68_209 ;    /* STRUCT 42 CHAR */
A_ISTRUCT(A68_CHAR ,1,A68t210);
typedef struct A68t210  A68_210 ;    /* STRUCT 0 CHAR */
A_ISTRUCT(struct A68t92 ,3,A68t211);
typedef struct A68t211  A68_211 ;    /* STRUCT 3 MODE92 */

A_PROCEDURE(A68_VOID ,A68t212,(struct A68t100 **,struct A68t108 ),(struct A68t100 **,struct A68t108 ,void *));
typedef struct A68t212  A68_212 ;    /* PROC(REF REF MODE100,MODE108) VOID */
A_ISTRUCT(A68_CHAR ,13,A68t213);
typedef struct A68t213  A68_213 ;    /* STRUCT 13 CHAR */

A_PROCEDURE(struct A68t94 *,A68t214,(struct A68t94 *,struct A68t94 ),(struct A68t94 *,struct A68t94 ,void *));
typedef struct A68t214  A68_214 ;    /* PROC(REF MODE94,MODE94) REF MODE94 */
#define A68_215  A68_VC 
#define A68t215 A68t26            /* FLEX VECTOR [] CHAR */
A_ISTRUCT(A68_CHAR ,40,A68t216);
typedef struct A68t216  A68_216 ;    /* STRUCT 40 CHAR */
A_ISTRUCT(A68_CHAR ,56,A68t217);
typedef struct A68t217  A68_217 ;    /* STRUCT 56 CHAR */
A_ISTRUCT(A68_CHAR ,2,A68t218);
typedef struct A68t218  A68_218 ;    /* STRUCT 2 CHAR */
A_ISTRUCT(A68_CHAR ,3,A68t219);
typedef struct A68t219  A68_219 ;    /* STRUCT 3 CHAR */
A_ISTRUCT(struct A68t92 ,4,A68t220);
typedef struct A68t220  A68_220 ;    /* STRUCT 4 MODE92 */
A_ISTRUCT(A68_CHAR ,64,A68t221);
typedef struct A68t221  A68_221 ;    /* STRUCT 64 CHAR */

A_PROCEDURE(A68_VOID ,A68t222,(A68_BOOL ,A68_BOOL ),(A68_BOOL ,A68_BOOL ,void *));
typedef struct A68t222  A68_222 ;    /* PROC(BOOL,BOOL) VOID */
A_ISTRUCT(struct A68t92 ,2,A68t223);
typedef struct A68t223  A68_223 ;    /* STRUCT 2 MODE92 */

A_PROCEDURE(A68_VOID ,A68t224,(A68_BOOL ,A68_BOOL ,A68_BOOL ,struct A68t84 *),(A68_BOOL ,A68_BOOL ,A68_BOOL ,struct A68t84 *,void *));
typedef struct A68t224  A68_224 ;    /* PROC(BOOL,BOOL,BOOL,REF MODE84) VOID */
A_ISTRUCT(A68_CHAR ,41,A68t225);
typedef struct A68t225  A68_225 ;    /* STRUCT 41 CHAR */
A_ROW(A68_BOOL ,A68t226,1);
typedef struct A68t226  A68_226 ;    /* [] BOOL */

A_PROCEDURE(A68_VOID ,A68t227,(A68_INT ,A68_INT ,struct A68t226 ),(A68_INT ,A68_INT ,struct A68t226 ,void *));
typedef struct A68t227  A68_227 ;    /* PROC(INT,INT,REF MODE226) VOID */
A_ISTRUCT(A68_CHAR ,54,A68t228);
typedef struct A68t228  A68_228 ;    /* STRUCT 54 CHAR */
A_ISTRUCT(A68_CHAR ,5,A68t229);
typedef struct A68t229  A68_229 ;    /* STRUCT 5 CHAR */
A_ISTRUCT(struct A68t92 ,5,A68t230);
typedef struct A68t230  A68_230 ;    /* STRUCT 5 MODE92 */

A_PROCEDURE(A68_VOID ,A68t231,(struct A68t153 ,struct A68t93 ,struct A68t226 ),(struct A68t153 ,struct A68t93 ,struct A68t226 ,void *));
typedef struct A68t231  A68_231 ;    /* PROC(MODE153,MODE93,REF MODE226) VOID */
A_ISTRUCT(A68_CHAR ,10,A68t232);
typedef struct A68t232  A68_232 ;    /* STRUCT 10 CHAR */
A_ISTRUCT(struct A68t92 ,6,A68t233);
typedef struct A68t233  A68_233 ;    /* STRUCT 6 MODE92 */
A_ISTRUCT(A68_CHAR ,9,A68t234);
typedef struct A68t234  A68_234 ;    /* STRUCT 9 CHAR */
A_ISTRUCT(A68_CHAR ,8,A68t235);
typedef struct A68t235  A68_235 ;    /* STRUCT 8 CHAR */
A_ISTRUCT(struct A68t92 ,8,A68t236);
typedef struct A68t236  A68_236 ;    /* STRUCT 8 MODE92 */

A_PROCEDURE(A68_VOID ,A68t237,(struct A68t153 ,struct A68t93 *,struct A68t226 ),(struct A68t153 ,struct A68t93 *,struct A68t226 ,void *));
typedef struct A68t237  A68_237 ;    /* PROC(MODE153,REF MODE93,REF MODE226) VOID */
A_ISTRUCT(A68_CHAR ,35,A68t238);
typedef struct A68t238  A68_238 ;    /* STRUCT 35 CHAR */
A_ISTRUCT(struct A68t92 ,7,A68t239);
typedef struct A68t239  A68_239 ;    /* STRUCT 7 MODE92 */
A_ISTRUCT(A68_CHAR ,6,A68t240);
typedef struct A68t240  A68_240 ;    /* STRUCT 6 CHAR */

A_PROCEDURE(A68_VOID ,A68t241,(A68_BOOL ,struct A68t108 ),(A68_BOOL ,struct A68t108 ,void *));
typedef struct A68t241  A68_241 ;    /* PROC(BOOL,MODE108) VOID */
A_ISTRUCT(A68_CHAR ,12,A68t242);
typedef struct A68t242  A68_242 ;    /* STRUCT 12 CHAR */

A_PROCEDURE(A68_VOID ,A68t243,(A68_BOOL ,struct A68t93 *),(A68_BOOL ,struct A68t93 *,void *));
typedef struct A68t243  A68_243 ;    /* PROC(BOOL,REF MODE93) VOID */
A_ISTRUCT(A68_CHAR ,14,A68t244);
typedef struct A68t244  A68_244 ;    /* STRUCT 14 CHAR */

A_PROCEDURE(A68_VOID ,A68t245,(struct A68t206 ,struct A68t108 ,struct A68t84 *,A68_BOOL ,A68_BOOL ,A68_BOOL ),(struct A68t206 ,struct A68t108 ,struct A68t84 *,A68_BOOL ,A68_BOOL ,A68_BOOL ,void *));
typedef struct A68t245  A68_245 ;    /* PROC(MODE206,MODE108,REF MODE84,BOOL,BOOL,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t246,(A68_BOOL ,A68_BOOL ,struct A68t108 ),(A68_BOOL ,A68_BOOL ,struct A68t108 ,void *));
typedef struct A68t246  A68_246 ;    /* PROC(BOOL,BOOL,MODE108) VOID */

A_PROCEDURE(A68_VOID ,A68t247,(A68_VC ,A68_INT ,struct A68t100 *,struct A68t97 *),(A68_VC ,A68_INT ,struct A68t100 *,struct A68t97 *,void *));
typedef struct A68t247  A68_247 ;    /* PROC(MODE26,INT,REF MODE100) MODE97 */

A_PROCEDURE(A68_VOID ,A68t248,(struct A68t100 *),(struct A68t100 *,void *));
typedef struct A68t248  A68_248 ;    /* PROC(REF MODE100) VOID */
A_ISTRUCT(A68_CHAR ,20,A68t249);
typedef struct A68t249  A68_249 ;    /* STRUCT 20 CHAR */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from incimperatives --- */
/* --- End of imports from incimperatives --- */


/* --- Imports from unionaids --- */
extern A68_VOID  RTQACTR_uniontouniontable(struct A68t171 ,struct A68t171 ,A68_VC *);
/* --- End of imports from unionaids --- */


/* --- Imports from modes --- */
extern A68_170  HUMACTR_constituents;
extern A68_VOID  UIOACTR_declarectemporary(A68_INT ,A68_VC ,A68_97 *);
extern A68_VOID  FBNACTR_modename(A68_INT ,A68_VC *);
extern A68_INT  QANACTR_finddeflexmode(A68_INT );
/* --- End of imports from modes --- */


/* --- Imports from incmode --- */
#define WEAACTR_boolmode 7
#define UEAACTR_voidmode 5
/* --- End of imports from incmode --- */


/* --- Imports from evaluator --- */
extern A68_140  HDVACTR_calltrace;
extern A68_114  WUQACTR_evaluate;
extern A68_VOID  QIVACTR_evaluatestack(struct A68t100 **);
/* --- End of imports from evaluator --- */


/* --- Imports from tracer --- */
/* --- End of imports from tracer --- */


/* --- Imports from moduletracer --- */
extern A68_INT  ZCHACTR_tracelevel(A68_VC );
/* --- End of imports from moduletracer --- */


/* --- Imports from idtable --- */
extern A68_VOID  UPKACTR_idname(A68_INT ,A68_VC *);
extern A68_VOID  DSKACTR_idfullname(A68_INT ,A68_VC *);
/* --- End of imports from idtable --- */


/* --- Imports from values --- */
extern A68_BOOL  ZUPACTR_isskip(struct A68t93 *);
extern A68_BOOL  RUPACTR_istemp(struct A68t93 *);
extern A68_VOID  PWPACTR_getcfragment(struct A68t93 *,A68_VC *);
extern A68_100 * VIJACTR_nilvaluelist;
extern A68_93 * ENQACTR_yield(A68_VC ,struct A68t93 *);
/* --- End of imports from values --- */


/* --- Imports from coutput --- */
extern A68_VOID  VBMACTR_writecstream(struct A68t91 ,A68_INT );
/* --- End of imports from coutput --- */


/* --- Imports from centities --- */
extern A68_SINT  EIAACTR_cnewline;
extern A68_VOID  VJAACTR_curly(A68_VC ,A68_VC *);
/* --- End of imports from centities --- */


/* --- Imports from environment --- */
extern A68_VOID  PXIACTR_assert(A68_VC ,A68_BOOL );
extern A68_VOID  IXIACTR_error(A68_INT );
extern A68_VOID  GWIACTR_pmessage(A68_INT ,struct A68t70 );
extern A68_BOOL  EQIACTR_skipoption;
extern A68_BOOL  AQIACTR_verboseoption;
extern A68_VOID  CXIACTR_warning(A68_INT );
/* --- End of imports from environment --- */


/* --- Imports from environ --- */
extern A68_INT  WQLACTR_codestream(A68_INT );
extern A68_INT  EQLACTR_currentlevel(void);
/* --- End of imports from environ --- */


/* --- Imports from usefulops --- */
extern A68_VOID  ROAAOSF_whole(A68_INT ,A68_INT ,A68_VC *);
/* --- End of imports from usefulops --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void UAAACTR(void);   /* incimperatives */
extern void QRQACTR(void);   /* unionaids */
extern void MLMACTR(void);   /* modes */
extern void ZDAACTR(void);   /* incmode */
extern void TCVACTR(void);   /* evaluator */
extern void QSYACTR(void);   /* tracer */
extern void BCHACTR(void);   /* moduletracer */
extern void YNKACTR(void);   /* idtable */
extern void JRPACTR(void);   /* values */
extern void YRLACTR(void);   /* coutput */
extern void THAACTR(void);   /* centities */
extern void HPIACTR(void);   /* environment */
extern void KNLACTR(void);   /* environ */
extern void IKAAOSF(void);   /* usefulops */
/* --- end of DECS initialisation functions --- */
static A68_205   NXYACTR = {"$Id: clauses.c,v 1.5.2.4 2004/09/27 03:04:16 teshields Exp $"}; 
A_GISVEC(A68_VC ,OXYACTR,NXYACTR,62)
static A68_209   KYYACTR = {"evaluate no result: mode of value not void"}; 
A_GISVEC(A68_VC ,LYYACTR,KYYACTR,42)
static A68_210   NYYACTR = {""}; 
A_GISVEC(A68_VC ,OYYACTR,NYYACTR,0)
static A68_75   XYYACTR = {"clauses"}; 
A_GISVEC(A68_VC ,YYYACTR,XYYACTR,7)
static A68_213   GZYACTR = {"clause result"}; 
A_GISVEC(A68_VC ,PZYACTR,GZYACTR,13)
static A68_216   YZYACTR = {"evaluate result: unknown value OF answer"}; 
A_GISVEC(A68_VC ,ZZYACTR,YZYACTR,40)
static A68_210   AAZACTR = {""}; 
A_GISVEC(A68_VC ,BAZACTR,AAZACTR,0)
static A68_217   EAZACTR = {"evaluate result: value of value stack has incorrect mode"}; 
A_GISVEC(A68_VC ,FAZACTR,EAZACTR,56)
static A68_218   GAZACTR = {"; "}; 
A_GISVEC(A68_VC ,HAZACTR,GAZACTR,2)
static A68_219   NAZACTR = {" = "}; 
A_GISVEC(A68_VC ,OAZACTR,NAZACTR,3)
static A68_221   CBZACTR = {"evaluate simple enquiry: value of value stack has incorrect mode"}; 
A_GISVEC(A68_VC ,DBZACTR,CBZACTR,64)
static A68_218   KBZACTR = {"{ "}; 
A_GISVEC(A68_VC ,LBZACTR,KBZACTR,2)
static A68_225   WBZACTR = {"clauses: end: end of clause label not set"}; 
A_GISVEC(A68_VC ,XBZACTR,WBZACTR,41)
static A68_219   DCZACTR = {": ;"}; 
A_GISVEC(A68_VC ,ECZACTR,DCZACTR,3)
static A68_218   KCZACTR = {"} "}; 
A_GISVEC(A68_VC ,LCZACTR,KCZACTR,2)
static A68_228   YCZACTR = {"A_ERROR(\"Bad case conformity - two choices for mode\");"}; 
A_GISVEC(A68_VC ,ZCZACTR,YCZACTR,54)
static A68_229   GDZACTR = {"case "}; 
A_GISVEC(A68_VC ,HDZACTR,GDZACTR,5)
static A68_218   MDZACTR = {": "}; 
A_GISVEC(A68_VC ,NDZACTR,MDZACTR,2)
static A68_219   QDZACTR = {"/* "}; 
static A68_219   RDZACTR = {" */"}; 
A_GISVEC(A68_VC ,SDZACTR,QDZACTR,3)
A_GISVEC(A68_VC ,UDZACTR,RDZACTR,3)
static A68_210   XDZACTR = {""}; 
A_GISVEC(A68_VC ,YDZACTR,XDZACTR,0)
static A68_232   TEZACTR = {"A_ENQ_SKIP"}; 
A_GISVEC(A68_VC ,VEZACTR,TEZACTR,10)
static A68_229   ZEZACTR = {"if ( "}; 
A_GISVEC(A68_VC ,AFZACTR,ZEZACTR,5)
static A68_218   EFZACTR = {" )"}; 
A_GISVEC(A68_VC ,FFZACTR,EFZACTR,2)
static A68_218   JFZACTR = {"{ "}; 
A_GISVEC(A68_VC ,KFZACTR,JFZACTR,2)
static A68_218   RFZACTR = {"} "}; 
A_GISVEC(A68_VC ,SFZACTR,RFZACTR,2)
static A68_40   WFZACTR = {"else"}; 
A_GISVEC(A68_VC ,XFZACTR,WFZACTR,4)
static A68_218   BGZACTR = {"{ "}; 
A_GISVEC(A68_VC ,CGZACTR,BGZACTR,2)
static A68_232   JGZACTR = {"A_ENQ_SKIP"}; 
A_GISVEC(A68_VC ,LGZACTR,JGZACTR,10)
static A68_234   PGZACTR = {"switch ( "}; 
A_GISVEC(A68_VC ,QGZACTR,PGZACTR,9)
static A68_218   UGZACTR = {" )"}; 
A_GISVEC(A68_VC ,VGZACTR,UGZACTR,2)
static A68_218   ZGZACTR = {"{ "}; 
A_GISVEC(A68_VC ,AHZACTR,ZGZACTR,2)
static A68_235   EHZACTR = {"case 1: "}; 
A_GISVEC(A68_VC ,FHZACTR,EHZACTR,8)
static A68_238   OHZACTR = {"united object - for case conformity"}; 
A_GISVEC(A68_VC ,PHZACTR,OHZACTR,35)
static A68_234   UHZACTR = {"switch ( "}; 
A_GISVEC(A68_VC ,VHZACTR,UHZACTR,9)
static A68_229   ZHZACTR = {".mode"}; 
A_GISVEC(A68_VC ,AIZACTR,ZHZACTR,5)
static A68_218   DIZACTR = {" )"}; 
A_GISVEC(A68_VC ,EIZACTR,DIZACTR,2)
static A68_218   IIZACTR = {"{ "}; 
A_GISVEC(A68_VC ,JIZACTR,IIZACTR,2)
static A68_240   RIZACTR = {"break;"}; 
A_GISVEC(A68_VC ,SIZACTR,RIZACTR,6)
static A68_229   WIZACTR = {"case "}; 
A_GISVEC(A68_VC ,XIZACTR,WIZACTR,5)
static A68_218   CJZACTR = {": "}; 
A_GISVEC(A68_VC ,DJZACTR,CJZACTR,2)
static A68_240   OJZACTR = {"break;"}; 
A_GISVEC(A68_VC ,PJZACTR,OJZACTR,6)
static A68_240   XJZACTR = {"break;"}; 
A_GISVEC(A68_VC ,YJZACTR,XJZACTR,6)
static A68_234   CKZACTR = {"default: "}; 
A_GISVEC(A68_VC ,DKZACTR,CKZACTR,9)
A68_60  IKZACTR_outu;
static A68_242   PKZACTR = {"A_IMP_SKIP ;"}; 
A_GISVEC(A68_VC ,QKZACTR,PKZACTR,12)
static A68_240   XKZACTR = {"break;"}; 
A_GISVEC(A68_VC ,YKZACTR,XKZACTR,6)
static A68_218   CLZACTR = {"} "}; 
A_GISVEC(A68_VC ,DLZACTR,CLZACTR,2)
A68_241  ILZACTR_esacu;
static A68_242   QLZACTR = {"A_IMP_SKIP ;"}; 
A_GISVEC(A68_VC ,RLZACTR,QLZACTR,12)
static A68_218   XLZACTR = {"} "}; 
A_GISVEC(A68_VC ,YLZACTR,XLZACTR,2)
static A68_244   JMZACTR = {"optbool result"}; 
A_GISVEC(A68_VC ,LMZACTR,JMZACTR,14)
static A68_219   SMZACTR = {" = "}; 
A_GISVEC(A68_VC ,TMZACTR,SMZACTR,3)
static A68_75   HNZACTR = {"if ( ! "}; 
A_GISVEC(A68_VC ,INZACTR,HNZACTR,7)
static A68_229   LNZACTR = {"if ( "}; 
A_GISVEC(A68_VC ,MNZACTR,LNZACTR,5)
static A68_218   QNZACTR = {" )"}; 
A_GISVEC(A68_VC ,RNZACTR,QNZACTR,2)
A68_207  EOZACTR_startseries;
static A68_209   UOZACTR = {"clauses: exit: end of series label not set"}; 
A_GISVEC(A68_VC ,VOZACTR,UOZACTR,42)
static A68_229   XOZACTR = {"goto "}; 
A_GISVEC(A68_VC ,YOZACTR,XOZACTR,5)
static A68_235   VPZACTR = {"#define "}; 
A_GISVEC(A68_VC ,WPZACTR,VPZACTR,8)
static A68_75   KQZACTR = {"#undef "}; 
A_GISVEC(A68_VC ,LQZACTR,KQZACTR,7)
static A68_249   FRZACTR = {"yield of code insert"}; 
A_GISVEC(A68_VC ,GRZACTR,FRZACTR,20)
static A68_240   IRZACTR = {"RESULT"}; 
A_GISVEC(A68_VC ,LRZACTR,IRZACTR,6)
static A68_240   RRZACTR = {"RESULT"}; 
A_GISVEC(A68_VC ,SRZACTR,RRZACTR,6)
typedef struct   /* env of non-global proc */
{
A68_INT  OPZACTR_stream;
A_PAD_INT(PAD_115)
} TPZACTR_emitdefine;
typedef struct   /* env of non-global proc */
{
A68_INT  OPZACTR_stream;
A_PAD_INT(PAD_116)
} IQZACTR_emitundefine;
typedef struct   /* env of non-global proc */
{
A68_204  RPZACTR_emitdefine;
A68_248  SQZACTR_emitcode;
A68_76  GQZACTR_emitundefine;
A68_INT  Mode;
A_PAD_INT(PAD_117)
A68_97 * NPZACTR_result;
A68_VC  Code;
A68_INT  OPZACTR_stream;
A_PAD_INT(PAD_118)
} UQZACTR_emitcode;

A68_VOID  SXYACTR_startclause(A68_206  Properties, A68_84 ** Endofclause, A68_BOOL * Discardlevelactivated);

A68_VOID  YXYACTR_endclause(A68_206  Properties, A68_84 * Endofanswer, A68_84 * Endofclause, A68_BOOL  Discardlevelactivated, A68_BOOL  Pullstack);

A_STATIC A68_BOOL  BYYACTR_cf(A68_INT  M1, A68_INT  M2);

A68_VOID  EYYACTR_evaluatenoresult(A68_100 ** Valuestack);

A68_VOID  CZYACTR_evaluateresult(A68_100 ** Valuestack, A68_108  Answer);

A_STATIC A68_94 * JZYACTR_assignment(A68_94 * HZYACTR_anonymous, A68_94  IZYACTR_anonymous);

A68_VOID  ABZACTR_evaluatesimpleenquiry(A68_100 ** Valuestack, A68_108  Answer);

A68_VOID  IBZACTR_begin(A68_BOOL  Seriescontainslabel, A68_BOOL  Routinebody);

A68_VOID  UBZACTR_end(A68_BOOL  Dynamicresult, A68_BOOL  Seriescontainsexit, A68_BOOL  Routinebody, A68_84 * Endofclauselabel);

A_STATIC A68_VOID  TCZACTR_outputcaseulabel(A68_INT  Mode, A68_INT  Casenumber, A68_226  Case);

A_STATIC A68_VOID  GEZACTR_subunionchoice(A68_153  Uchoice, A68_93  Union, A68_226  Case);

A68_VOID  SEZACTR_then(A68_93 * Enquiry);

A68_VOID  PFZACTR_else(void);

A68_VOID  IGZACTR_casein(A68_93 * Enquiry);

A68_VOID  NHZACTR_inu(A68_153  Uchoice, A68_93 * Union, A68_226  Case);

A68_VOID  PIZACTR_comma(A68_INT  Caseno);

A68_VOID  LJZACTR_commau(A68_153  Uchoice, A68_93  Union, A68_226  Case);

A68_VOID  UJZACTR_out(void);

A68_VOID  MKZACTR_esac(A68_BOOL  Outpart, A68_108  Answer);

A68_VOID  MLZACTR_fi(A68_BOOL  Elsepart, A68_108  Answer);

A68_VOID  FMZACTR_optboolwarning(A68_BOOL  Orel, A68_93 * Operand1);

A68_VOID  YNZACTR_optbooloper(void);

A68_VOID  MOZACTR_endseries(A68_206  Properties, A68_108  Answer, A68_84 * Endofseries, A68_BOOL  Discardlevelactivated, A68_BOOL  Pullstack, A68_BOOL  Seriescontainsexit);

A68_VOID  POZACTR_semi(A68_BOOL  Outstandingdynamicresult, A68_BOOL  Declaration);

A68_VOID  TOZACTR_exit(A68_BOOL  Dynamicresult, A68_BOOL  Firstexit, A68_108  Seriesanswer);

A68_VOID  MPZACTR_codeinsert(A68_VC  Code, A68_INT  Mode, A68_100 * Visibles, A68_97  *ReturnedValue);

A_STATIC A68_VOID  SPZACTR_emitdefine(A68_VC  Symbol, A68_VC  Text, void *NonLocals);

A_STATIC A68_VOID  HQZACTR_emitundefine(A68_VC  Symbol, void *NonLocals);

A_STATIC A68_VOID  TQZACTR_emitcode(A68_100 * List, void *NonLocals);

A_STATIC A68_94 * JZYACTR_assignment(A68_94 * HZYACTR_anonymous, A68_94  IZYACTR_anonymous)
{ 
A68_94  KZYACTR;  /* united object - for case conformity */
A68_VC  LZYACTR_anonymous;
A68_VC  MZYACTR;  /* OPERATORS - copy to flex */
A68_215 * NZYACTR;  /* YIELD */
A68_94 * OZYACTR;  /* clause result */
{ 
(*HZYACTR_anonymous) = IZYACTR_anonymous;
KZYACTR = IZYACTR_anonymous ;
switch ( KZYACTR.mode )
{ 
case 6: /* VECTOR [] CHAR */
LZYACTR_anonymous = (KZYACTR.data.mode6);
NZYACTR = &(HZYACTR_anonymous-> data.mode6) ;
(*NZYACTR) = A_VCOPY(LZYACTR_anonymous,MZYACTR,A68_CHAR );
break;
default: 
/*SKIP*/;
break;
} 
OZYACTR = HZYACTR_anonymous;
} 
return( OZYACTR );
} 
#undef NL

A_STATIC A68_VOID  SPZACTR_emitdefine(A68_VC  Symbol, A68_VC  Text, void *NonLocals)
#define NL(x) (((TPZACTR_emitdefine *)NonLocals)->x)
{ 
A68_230  UPZACTR;  /* collateral clause result */
A68_92  XPZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  YPZACTR;  /* YIELD */
A68_92  ZPZACTR;  /* OPERATORS - mode -> union mode */
A68_92  AQZACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  BQZACTR;  /* YIELD */
A68_92  CQZACTR;  /* OPERATORS - mode -> union mode */
A68_92  DQZACTR;  /* OPERATORS - mode -> union mode */
A68_91  EQZACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(emitdefine);
 /* line 541: */
YPZACTR = WPZACTR ;
UPZACTR.data[0] = A_UNITE(XPZACTR,mode2,2,YPZACTR);
UPZACTR.data[1] = A_UNITE(ZPZACTR,mode2,2,Symbol);
BQZACTR = ' ' ;
UPZACTR.data[2] = A_UNITE(AQZACTR,mode1,1,BQZACTR);
 /* line 542: */
UPZACTR.data[3] = A_UNITE(CQZACTR,mode2,2,Text);
UPZACTR.data[4] = A_UNITE(DQZACTR,mode4,4,EIAACTR_cnewline);
 /* line 543: */
VBMACTR_writecstream(A_HISVEC(EQZACTR,UPZACTR,5,A68_92 ), NL(OPZACTR_stream));
A_PROC_EXIT(emitdefine);
return;
} 
#undef NL

A_STATIC A68_VOID  HQZACTR_emitundefine(A68_VC  Symbol, void *NonLocals)
#define NL(x) (((IQZACTR_emitundefine *)NonLocals)->x)
{ 
A68_211  JQZACTR;  /* collateral clause result */
A68_92  MQZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  NQZACTR;  /* YIELD */
A68_92  OQZACTR;  /* OPERATORS - mode -> union mode */
A68_92  PQZACTR;  /* OPERATORS - mode -> union mode */
A68_91  QQZACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(emitundefine);
 /* line 547: */
NQZACTR = LQZACTR ;
JQZACTR.data[0] = A_UNITE(MQZACTR,mode2,2,NQZACTR);
 /* line 548: */
JQZACTR.data[1] = A_UNITE(OQZACTR,mode2,2,Symbol);
JQZACTR.data[2] = A_UNITE(PQZACTR,mode4,4,EIAACTR_cnewline);
 /* line 549: */
VBMACTR_writecstream(A_HISVEC(QQZACTR,JQZACTR,3,A68_92 ), NL(OPZACTR_stream));
A_PROC_EXIT(emitundefine);
return;
} 
#undef NL

A_STATIC A68_VOID  TQZACTR_emitcode(A68_100 * List, void *NonLocals)
#define NL(x) (((UQZACTR_emitcode *)NonLocals)->x)
{ 
A68_INT  VQZACTR_id;
A68_94  WQZACTR;  /* united object - for case conformity */
A68_96  XQZACTR_i;
A68_VC  YQZACTR;  /* avoid structure result */
A68_VC  ZQZACTR;  /* avoid structure result */
A68_VC  ARZACTR;  /* avoid structure result */
A68_95  BRZACTR_r;
A68_VC  CRZACTR;  /* avoid structure result */
A68_VC  DRZACTR;  /* avoid structure result */
A68_VC  ERZACTR;  /* avoid structure result */
A68_97  HRZACTR;  /* avoid structure result */
A68_VC  JRZACTR;  /* OPERATORS - istruct -> vector */
A68_75  KRZACTR;  /* OPERATORS - istruct -> vector */
A68_VC  MRZACTR;  /* avoid structure result */
A68_92  NRZACTR;  /* OPERATORS - mode -> union mode */
A68_91  ORZACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_92  PRZACTR;  /* OPERATORS - mode -> union mode */
A68_91  QRZACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(emitcode);
 /* line 552: */
 /* line 553: */
{ 
 /* line 554: */
if ( (List!=VIJACTR_nilvaluelist) )
{ 
 /* line 555: */
 /* line 556: */
WQZACTR = (*(&((&(List->Value))->Extra))) ;
switch ( WQZACTR.mode )
{ 
case 4: /* STRUCT(INT)  */
XQZACTR_i = (WQZACTR.data.mode4);
 /* line 557: */
{ 
VQZACTR_id = XQZACTR_i.Idno;
 /* line 558: */
DSKACTR_idfullname( VQZACTR_id, &YQZACTR );
UPKACTR_idname( VQZACTR_id, &ZQZACTR );
A_CALLPROC(NL(RPZACTR_emitdefine),(ZQZACTR, YQZACTR),(ZQZACTR, YQZACTR,(NL(RPZACTR_emitdefine)).nonlocals));
 /* line 559: */
A_CALLPROC(NL(SQZACTR_emitcode),((*(&(List->Rest)))),((*(&(List->Rest))),(NL(SQZACTR_emitcode)).nonlocals));
 /* line 560: */
 /* line 561: */
 /* line 562: */
UPKACTR_idname( VQZACTR_id, &ARZACTR );
A_CALLPROC(NL(GQZACTR_emitundefine),(ARZACTR),(ARZACTR,(NL(GQZACTR_emitundefine)).nonlocals));
} 
break;
case 2: /* STRUCT(INT)  */
BRZACTR_r = (WQZACTR.data.mode2);
 /* line 563: */
{ 
VQZACTR_id = BRZACTR_r.Rdenno;
 /* line 564: */
DSKACTR_idfullname( VQZACTR_id, &CRZACTR );
UPKACTR_idname( VQZACTR_id, &DRZACTR );
A_CALLPROC(NL(RPZACTR_emitdefine),(DRZACTR, CRZACTR),(DRZACTR, CRZACTR,(NL(RPZACTR_emitdefine)).nonlocals));
 /* line 565: */
A_CALLPROC(NL(SQZACTR_emitcode),((*(&(List->Rest)))),((*(&(List->Rest))),(NL(SQZACTR_emitcode)).nonlocals));
 /* line 566: */
 /* line 567: */
 /* line 568: */
UPKACTR_idname( VQZACTR_id, &ERZACTR );
A_CALLPROC(NL(GQZACTR_emitundefine),(ERZACTR),(ERZACTR,(NL(GQZACTR_emitundefine)).nonlocals));
} 
break;
default: 
IXIACTR_error(902);
 /* line 569: */
 /* line 570: */
 /* line 571: */
A_CALLPROC(NL(SQZACTR_emitcode),((*(&(List->Rest)))),((*(&(List->Rest))),(NL(SQZACTR_emitcode)).nonlocals));
break;
} 
} 
else
{ 
 /* line 572: */
if ( (NL(Mode)!=UEAACTR_voidmode) )
{ 
 /* line 575: */
UIOACTR_declarectemporary( NL(Mode), GRZACTR, &HRZACTR );
(*NL(NPZACTR_result)) = HRZACTR;
 /* line 576: */
 /* line 577: */
KRZACTR = (*(&(NL(NPZACTR_result)->Name))) ;
A_CALLPROC(NL(RPZACTR_emitdefine),(LRZACTR, A_HISVEC(JRZACTR,KRZACTR,7,A68_CHAR )),(LRZACTR, A_HISVEC(JRZACTR,KRZACTR,7,A68_CHAR ),(NL(RPZACTR_emitdefine)).nonlocals));
} 
 /* line 578: */
VJAACTR_curly( NL(Code), &MRZACTR );
VBMACTR_writecstream(A_HVEC(ORZACTR,A_UNITE(NRZACTR,mode2,2,MRZACTR),A68_92 ), NL(OPZACTR_stream));
 /* line 579: */
VBMACTR_writecstream(A_HVEC(QRZACTR,A_UNITE(PRZACTR,mode4,4,EIAACTR_cnewline),A68_92 ), NL(OPZACTR_stream));
 /* line 580: */
 /* line 581: */
if ( (NL(Mode)!=UEAACTR_voidmode) )
{ 
 /* line 582: */
 /* line 583: */
 /* line 584: */
A_CALLPROC(NL(GQZACTR_emitundefine),(SRZACTR),(SRZACTR,(NL(GQZACTR_emitundefine)).nonlocals));
} 
} 
} 
A_PROC_EXIT(emitcode);
return;
} 
#undef NL
 /* line 56: */
 /* line 58: */

A68_VOID  SXYACTR_startclause(A68_206  Properties, A68_84 ** Endofclause, A68_BOOL * Discardlevelactivated)
{ 
A_PROC_ENTRY(startclause);
 /* line 65: */
 /* line 67: */
/*SKIP*/;
A_PROC_EXIT(startclause);
return;
} 
#undef NL
 /* line 71: */
 /* line 72: */
 /* line 73: */

A68_VOID  YXYACTR_endclause(A68_206  Properties, A68_84 * Endofanswer, A68_84 * Endofclause, A68_BOOL  Discardlevelactivated, A68_BOOL  Pullstack)
{ 
A_PROC_ENTRY(endclause);
 /* line 81: */
 /* line 83: */
/*SKIP*/;
A_PROC_EXIT(endclause);
return;
} 
#undef NL

A_STATIC A68_BOOL  BYYACTR_cf(A68_INT  M1, A68_INT  M2)
{ 
A68_BOOL  CYYACTR;  /* clause result */
A_PROC_ENTRY(cf);
 /* line 89: */
CYYACTR = (QANACTR_finddeflexmode(M1)==QANACTR_finddeflexmode(M2));
A_PROC_EXIT(cf);
return( CYYACTR );
} 
#undef NL

A68_VOID  EYYACTR_evaluatenoresult(A68_100 ** Valuestack)
{ 
A68_93 * FYYACTR_value;
A68_94  GYYACTR;  /* united object - for case conformity */
A68_BOOL  HYYACTR;  /* clause result */
A68_BOOL  IYYACTR;  /* clause result */
A68_INT  JYYACTR_codestream;
A68_211  MYYACTR;  /* collateral clause result */
A68_92  PYYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  QYYACTR;  /* YIELD */
A68_VC  RYYACTR;  /* avoid structure result */
A68_92  SYYACTR;  /* OPERATORS - mode -> union mode */
A68_92  TYYACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  UYYACTR;  /* YIELD */
A68_92  VYYACTR;  /* OPERATORS - mode -> union mode */
A68_91  WYYACTR;  /* OPERATORS - istruct -> vector */
A68_BOOL  ZYYACTR;  /* optbool result */
A_PROC_ENTRY(evaluatenoresult);
 /* line 105: */
 /* line 106: */
{ 
 /* line 107: */
 /* line 108: */
if ( ((*Valuestack)!=VIJACTR_nilvaluelist) )
{ 
FYYACTR_value = (&((*Valuestack)->Value));
 /* line 109: */
GYYACTR = (*(&(FYYACTR_value->Extra))) ;
switch ( GYYACTR.mode )
{ 
case 3: /* VOID */
HYYACTR = A68_TRUE;
break;
default: 
 /* line 110: */
HYYACTR = A68_FALSE;
break;
} 
 /* line 111: */
 /* line 112: */
 /* line 113: */
IYYACTR = (HYYACTR&((*(&(FYYACTR_value->Mode)))==UEAACTR_voidmode));
if ( IYYACTR )
{ 
 /* line 114: */
 /* line 115: */
(*Valuestack) = (*(&((*Valuestack)->Rest)));
} 
else
{ 
JYYACTR_codestream = WQLACTR_codestream(EQLACTR_currentlevel());
 /* line 116: */
(*Valuestack) = (*(&((*Valuestack)->Rest)));
 /* line 117: */
A_CALLPROC(WUQACTR_evaluate,(FYYACTR_value),(FYYACTR_value,(WUQACTR_evaluate).nonlocals));
 /* line 118: */
 /* line 119: */
PXIACTR_assert(LYYACTR, ((*(&(FYYACTR_value->Mode)))==UEAACTR_voidmode));
 /* line 120: */
 /* line 121: */
if ( ZUPACTR_isskip(FYYACTR_value) )
{ 
QYYACTR = OYYACTR ;
MYYACTR.data[0] = A_UNITE(PYYACTR,mode2,2,QYYACTR);
} 
else
{ 
PWPACTR_getcfragment( FYYACTR_value, &RYYACTR );
MYYACTR.data[0] = A_UNITE(SYYACTR,mode2,2,RYYACTR);
} 
 /* line 123: */
UYYACTR = ';' ;
MYYACTR.data[1] = A_UNITE(TYYACTR,mode1,1,UYYACTR);
MYYACTR.data[2] = A_UNITE(VYYACTR,mode4,4,EIAACTR_cnewline);
 /* line 124: */
 /* line 125: */
VBMACTR_writecstream(A_HISVEC(WYYACTR,MYYACTR,3,A68_92 ), JYYACTR_codestream);
} 
 /* line 126: */
 /* line 127: */
ZYYACTR = (ZCHACTR_tracelevel(YYYACTR)!=0);
if ( ZYYACTR )
{ /* line 128: */
ZYYACTR = ((*Valuestack)!=VIJACTR_nilvaluelist);
}
if ( ZYYACTR )
{ 
 /* line 129: */
 /* line 130: */
 /* line 131: */
A_CALLPROC(HDVACTR_calltrace,((&((*Valuestack)->Value)), A68_FALSE),((&((*Valuestack)->Value)), A68_FALSE,(HDVACTR_calltrace).nonlocals));
} 
} 
} 
A_PROC_EXIT(evaluatenoresult);
return;
} 
#undef NL

A68_VOID  CZYACTR_evaluateresult(A68_100 ** Valuestack, A68_108  Answer)
{ 
A68_93 * DZYACTR_ansvalue;
A68_INT  EZYACTR_codestream;
A68_94  FZYACTR;  /* united object - for case conformity */
A68_97  QZYACTR;  /* avoid structure result */
A68_94  RZYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  SZYACTR;  /* clause result */
A68_VC  TZYACTR;  /* avoid structure result */
A68_97  UZYACTR_t;
A68_VC  VZYACTR;  /* OPERATORS - istruct -> vector */
A68_75  WZYACTR;  /* OPERATORS - istruct -> vector */
A68_VC  XZYACTR_c;
A68_VC  CAZACTR_assignee;
A68_93 * DAZACTR_value;
A68_92  IAZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  JAZACTR;  /* YIELD */
A68_91  KAZACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_220  LAZACTR;  /* collateral clause result */
A68_92  MAZACTR;  /* OPERATORS - mode -> union mode */
A68_92  PAZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  QAZACTR;  /* YIELD */
A68_VC  RAZACTR;  /* avoid structure result */
A68_92  SAZACTR;  /* OPERATORS - mode -> union mode */
A68_92  TAZACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  UAZACTR;  /* YIELD */
A68_91  VAZACTR;  /* OPERATORS - istruct -> vector */
A68_92  WAZACTR;  /* OPERATORS - mode -> union mode */
A68_91  XAZACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(evaluateresult);
 /* line 146: */
 /* line 147: */
{ 
DZYACTR_ansvalue = Answer.Value;
 /* line 148: */
 /* line 149: */
if ( ((*(&(DZYACTR_ansvalue->Mode)))==UEAACTR_voidmode) )
{ 
 /* line 150: */
 /* line 151: */
EYYACTR_evaluatenoresult(Valuestack);
} 
else
{ 
EZYACTR_codestream = WQLACTR_codestream(EQLACTR_currentlevel());
 /* line 153: */
 /* line 154: */
 /* line 155: */
FZYACTR = (*(&(DZYACTR_ansvalue->Extra))) ;
switch ( FZYACTR.mode )
{ 
case 3: /* VOID */
 /* line 156: */
 /* line 157: */
{ 
 /* line 159: */
 /* line 161: */
UIOACTR_declarectemporary( (*(&(DZYACTR_ansvalue->Mode))), PZYACTR, &QZYACTR );
JZYACTR_assignment((&(DZYACTR_ansvalue->Extra)), A_UNITE(RZYACTR,mode5,5,QZYACTR));
 /* line 162: */
 /* line 163: */
 /* line 164: */
PWPACTR_getcfragment( DZYACTR_ansvalue, &TZYACTR );
SZYACTR = TZYACTR;
} 
break;
case 5: /* STRUCT(MODE75,INT)  */
UZYACTR_t = (FZYACTR.data.mode5);
 /* line 165: */
 /* line 166: */
WZYACTR = UZYACTR_t.Name ;
SZYACTR = A_HISVEC(VZYACTR,WZYACTR,7,A68_CHAR );
break;
case 6: /* VECTOR [] CHAR */
XZYACTR_c = (FZYACTR.data.mode6);
 /* line 167: */
 /* line 168: */
SZYACTR = XZYACTR_c;
break;
default: 
PXIACTR_assert(ZZYACTR, A68_FALSE);
 /* line 169: */
SZYACTR = BAZACTR;
break;
} 
CAZACTR_assignee = SZYACTR;
 /* line 171: */
DAZACTR_value = (&((*Valuestack)->Value));
 /* line 172: */
QIVACTR_evaluatestack(Valuestack);
 /* line 173: */
 /* line 174: */
PXIACTR_assert(FAZACTR, BYYACTR_cf((*(&(DZYACTR_ansvalue->Mode))), (*(&((&((*Valuestack)->Value))->Mode)))));
 /* line 175: */
 /* line 176: */
if ( ZUPACTR_isskip(DAZACTR_value) )
{ 
 /* line 177: */
 /* line 178: */
JAZACTR = HAZACTR ;
VBMACTR_writecstream(A_HVEC(KAZACTR,A_UNITE(IAZACTR,mode2,2,JAZACTR),A68_92 ), EZYACTR_codestream);
} 
else
{ 
LAZACTR.data[0] = A_UNITE(MAZACTR,mode2,2,CAZACTR_assignee);
QAZACTR = OAZACTR ;
LAZACTR.data[1] = A_UNITE(PAZACTR,mode2,2,QAZACTR);
PWPACTR_getcfragment( DAZACTR_value, &RAZACTR );
LAZACTR.data[2] = A_UNITE(SAZACTR,mode2,2,RAZACTR);
UAZACTR = ';' ;
LAZACTR.data[3] = A_UNITE(TAZACTR,mode1,1,UAZACTR);
 /* line 180: */
 /* line 181: */
VBMACTR_writecstream(A_HISVEC(VAZACTR,LAZACTR,4,A68_92 ), EZYACTR_codestream);
} 
 /* line 182: */
VBMACTR_writecstream(A_HVEC(XAZACTR,A_UNITE(WAZACTR,mode4,4,EIAACTR_cnewline),A68_92 ), EZYACTR_codestream);
 /* line 183: */
 /* line 184: */
 /* line 185: */
(*Valuestack) = (*(&((*Valuestack)->Rest)));
} 
} 
A_PROC_EXIT(evaluateresult);
return;
} 
#undef NL
 /* line 190: */

A68_VOID  ABZACTR_evaluatesimpleenquiry(A68_100 ** Valuestack, A68_108  Answer)
{ 
A68_93 * BBZACTR_value;
A68_VC  EBZACTR;  /* avoid structure result */
A68_94  FBZACTR;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(evaluatesimpleenquiry);
 /* line 196: */
 /* line 197: */
{ 
BBZACTR_value = (&((*Valuestack)->Value));
 /* line 198: */
QIVACTR_evaluatestack(Valuestack);
 /* line 199: */
 /* line 200: */
PXIACTR_assert(DBZACTR, BYYACTR_cf((*(&(Answer.Value->Mode))), (*(&(BBZACTR_value->Mode)))));
 /* line 201: */
PWPACTR_getcfragment( BBZACTR_value, &EBZACTR );
JZYACTR_assignment((&(Answer.Value->Extra)), A_UNITE(FBZACTR,mode6,6,EBZACTR));
 /* line 202: */
 /* line 203: */
(*Valuestack) = (*(&((*Valuestack)->Rest)));
} 
A_PROC_EXIT(evaluatesimpleenquiry);
return;
} 
#undef NL

A68_VOID  IBZACTR_begin(A68_BOOL  Seriescontainslabel, A68_BOOL  Routinebody)
{ 
A68_223  JBZACTR;  /* collateral clause result */
A68_92  MBZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  NBZACTR;  /* YIELD */
A68_92  OBZACTR;  /* OPERATORS - mode -> union mode */
A68_91  PBZACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(begin);
 /* line 211: */
 /* line 212: */
NBZACTR = LBZACTR ;
JBZACTR.data[0] = A_UNITE(MBZACTR,mode2,2,NBZACTR);
JBZACTR.data[1] = A_UNITE(OBZACTR,mode4,4,EIAACTR_cnewline);
 /* line 213: */
VBMACTR_writecstream(A_HISVEC(PBZACTR,JBZACTR,2,A68_92 ), WQLACTR_codestream(EQLACTR_currentlevel()));
A_PROC_EXIT(begin);
return;
} 
#undef NL
 /* line 218: */

A68_VOID  UBZACTR_end(A68_BOOL  Dynamicresult, A68_BOOL  Seriescontainsexit, A68_BOOL  Routinebody, A68_84 * Endofclauselabel)
{ 
A68_INT  VBZACTR_codestream;
A68_211  YBZACTR;  /* collateral clause result */
A68_VC  ZBZACTR;  /* OPERATORS - istruct -> vector */
A68_75  ACZACTR;  /* OPERATORS - istruct -> vector */
A68_92  BCZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  CCZACTR;  /* YIELD */
A68_92  FCZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  GCZACTR;  /* YIELD */
A68_92  HCZACTR;  /* OPERATORS - mode -> union mode */
A68_91  ICZACTR;  /* OPERATORS - istruct -> vector */
A68_223  JCZACTR;  /* collateral clause result */
A68_92  MCZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  NCZACTR;  /* YIELD */
A68_92  OCZACTR;  /* OPERATORS - mode -> union mode */
A68_91  PCZACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(end);
 /* line 219: */
 /* line 220: */
{ 
VBZACTR_codestream = WQLACTR_codestream(EQLACTR_currentlevel());
 /* line 221: */
 /* line 222: */
 /* line 223: */
if ( Seriescontainsexit )
{ 
PXIACTR_assert(XBZACTR, (Endofclauselabel!=(A68_84 *)A68_NIL));
 /* line 224: */
 /* line 225: */
ACZACTR = (*(&(Endofclauselabel->Name))) ;
CCZACTR = A_HISVEC(ZBZACTR,ACZACTR,7,A68_CHAR ) ;
YBZACTR.data[0] = A_UNITE(BCZACTR,mode2,2,CCZACTR);
 /* line 226: */
GCZACTR = ECZACTR ;
YBZACTR.data[1] = A_UNITE(FCZACTR,mode2,2,GCZACTR);
YBZACTR.data[2] = A_UNITE(HCZACTR,mode4,4,EIAACTR_cnewline);
 /* line 227: */
 /* line 228: */
VBMACTR_writecstream(A_HISVEC(ICZACTR,YBZACTR,3,A68_92 ), VBZACTR_codestream);
} 
 /* line 229: */
NCZACTR = LCZACTR ;
JCZACTR.data[0] = A_UNITE(MCZACTR,mode2,2,NCZACTR);
JCZACTR.data[1] = A_UNITE(OCZACTR,mode4,4,EIAACTR_cnewline);
 /* line 230: */
VBMACTR_writecstream(A_HISVEC(PCZACTR,JCZACTR,2,A68_92 ), VBZACTR_codestream);
} 
A_PROC_EXIT(end);
return;
} 
#undef NL
 /* line 250: */

A_STATIC A68_VOID  TCZACTR_outputcaseulabel(A68_INT  Mode, A68_INT  Casenumber, A68_226  Case)
{ 
A68_INT  UCZACTR_codestream;
A68_VC  VCZACTR;  /* avoid structure result */
A68_70  WCZACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_223  XCZACTR;  /* collateral clause result */
A68_92  ADZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  BDZACTR;  /* YIELD */
A68_92  CDZACTR;  /* OPERATORS - mode -> union mode */
A68_91  DDZACTR;  /* OPERATORS - istruct -> vector */
A68_BOOL * EDZACTR;  /* YIELD */
A68_230  FDZACTR;  /* collateral clause result */
A68_92  IDZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  JDZACTR;  /* YIELD */
A68_VC  KDZACTR;  /* avoid structure result */
A68_92  LDZACTR;  /* OPERATORS - mode -> union mode */
A68_92  ODZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  PDZACTR;  /* YIELD */
A68_VC  TDZACTR;  /* avoid structure result */
A68_92  VDZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  WDZACTR;  /* YIELD */
A68_92  ZDZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  AEZACTR;  /* YIELD */
A68_92  BEZACTR;  /* OPERATORS - mode -> union mode */
A68_91  CEZACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(outputcaseulabel);
 /* line 256: */
 /* line 257: */
{ 
UCZACTR_codestream = WQLACTR_codestream(EQLACTR_currentlevel());
 /* line 258: */
 /* line 259: */
 /* line 260: */
if ( (*(&A_R1INDEX(Case,Casenumber))) )
{ 
FBNACTR_modename( Mode, &VCZACTR );
GWIACTR_pmessage(720, A_HARR(WCZACTR,VCZACTR,A68_VC ));
 /* line 261: */
 /* line 262: */
 /* line 264: */
BDZACTR = ZCZACTR ;
XCZACTR.data[0] = A_UNITE(ADZACTR,mode2,2,BDZACTR);
XCZACTR.data[1] = A_UNITE(CDZACTR,mode4,4,EIAACTR_cnewline);
 /* line 265: */
 /* line 266: */
 /* line 267: */
VBMACTR_writecstream(A_HISVEC(DDZACTR,XCZACTR,2,A68_92 ), UCZACTR_codestream);
} 
else
{ 
EDZACTR = (&A_R1INDEX(Case,Casenumber)) ;
(*EDZACTR) = A68_TRUE;
 /* line 268: */
 /* line 269: */
JDZACTR = HDZACTR ;
FDZACTR.data[0] = A_UNITE(IDZACTR,mode2,2,JDZACTR);
ROAAOSF_whole( Casenumber, 0, &KDZACTR );
FDZACTR.data[1] = A_UNITE(LDZACTR,mode2,2,KDZACTR);
 /* line 270: */
PDZACTR = NDZACTR ;
FDZACTR.data[2] = A_UNITE(ODZACTR,mode2,2,PDZACTR);
 /* line 271: */
if ( AQIACTR_verboseoption )
{ 
 /* line 272: */
 /* line 273: */
FBNACTR_modename( Mode, &TDZACTR );
WDZACTR = A_VC_PLUS(A_VC_PLUS(SDZACTR,TDZACTR),UDZACTR) ;
FDZACTR.data[3] = A_UNITE(VDZACTR,mode2,2,WDZACTR);
} 
else
{ 
 /* line 274: */
AEZACTR = YDZACTR ;
FDZACTR.data[3] = A_UNITE(ZDZACTR,mode2,2,AEZACTR);
} 
FDZACTR.data[4] = A_UNITE(BEZACTR,mode4,4,EIAACTR_cnewline);
 /* line 275: */
 /* line 276: */
 /* line 277: */
VBMACTR_writecstream(A_HISVEC(CEZACTR,FDZACTR,5,A68_92 ), UCZACTR_codestream);
} 
} 
A_PROC_EXIT(outputcaseulabel);
return;
} 
#undef NL
 /* line 281: */
 /* line 283: */

A_STATIC A68_VOID  GEZACTR_subunionchoice(A68_153  Uchoice, A68_93  Union, A68_226  Case)
{ 
A68_171  HEZACTR;  /* avoid structure result */
A68_171  IEZACTR_modesofunion;
A68_171  JEZACTR;  /* avoid structure result */
A68_VC  KEZACTR;  /* avoid structure result */
A68_VC  LEZACTR;  /* OPERATORS - trim index */
A68_VC  MEZACTR;  /* YIELD */
A68_RC  NEZACTR;  /* OPERATORS - vector -> row */
A68_RC  OEZACTR_table;
A68_INT  PEZACTR_i;
A68_INT  QEZACTR;  /* to part of loop */
A_PROC_ENTRY(subunionchoice);
 /* line 288: */
 /* line 289: */
{ 
A_CALLPROC(HUMACTR_constituents,(Union.Mode, &HEZACTR),(Union.Mode, &HEZACTR,(HUMACTR_constituents).nonlocals));
IEZACTR_modesofunion = HEZACTR;
 /* line 290: */
 /* line 292: */
 /* line 293: */
 /* line 294: */
A_CALLPROC(HUMACTR_constituents,(Uchoice.Mode, &JEZACTR),(Uchoice.Mode, &JEZACTR,(HUMACTR_constituents).nonlocals));
RTQACTR_uniontouniontable( IEZACTR_modesofunion, JEZACTR, &KEZACTR );
MEZACTR = A_VTRIM(LEZACTR,(KEZACTR),A_VTSCRIPT(&(LEZACTR.upb),(KEZACTR).upb,1,(KEZACTR).upb)) ;
OEZACTR_table = A_VECARR(MEZACTR,NEZACTR);
 /* line 295: */
 /* line 296: */
QEZACTR = OEZACTR_table.dim[0].upb;
for ( PEZACTR_i = 1;
PEZACTR_i <= QEZACTR;
PEZACTR_i += 1 )
{ 
 /* line 297: */
if ( ((A68_INT)(unsigned char)A_R1INDEX(OEZACTR_table,PEZACTR_i)!=0) )
{ 
 /* line 298: */
 /* line 299: */
TCZACTR_outputcaseulabel((*(&A_VINDEX(IEZACTR_modesofunion,PEZACTR_i))), PEZACTR_i, Case);
} 
}
 /* line 300: */
 /* line 301: */
/*SKIP*/;
} 
A_PROC_EXIT(subunionchoice);
return;
} 
#undef NL

A68_VOID  SEZACTR_then(A68_93 * Enquiry)
{ 
A68_VC  UEZACTR;  /* clause result */
A68_VC  WEZACTR;  /* avoid structure result */
A68_VC  XEZACTR_booleanexpr;
A68_233  YEZACTR;  /* collateral clause result */
A68_92  BFZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  CFZACTR;  /* YIELD */
A68_92  DFZACTR;  /* OPERATORS - mode -> union mode */
A68_92  GFZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  HFZACTR;  /* YIELD */
A68_92  IFZACTR;  /* OPERATORS - mode -> union mode */
A68_92  LFZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  MFZACTR;  /* YIELD */
A68_92  NFZACTR;  /* OPERATORS - mode -> union mode */
A68_91  OFZACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(then);
 /* line 304: */
 /* line 306: */
{ 
 /* line 307: */
 /* line 308: */
if ( ZUPACTR_isskip(Enquiry) )
{ 
 /* line 309: */
UEZACTR = VEZACTR;
} 
else
{ 
PWPACTR_getcfragment( Enquiry, &WEZACTR );
UEZACTR = WEZACTR;
} 
XEZACTR_booleanexpr = UEZACTR;
 /* line 310: */
 /* line 311: */
CFZACTR = AFZACTR ;
YEZACTR.data[0] = A_UNITE(BFZACTR,mode2,2,CFZACTR);
YEZACTR.data[1] = A_UNITE(DFZACTR,mode2,2,XEZACTR_booleanexpr);
HFZACTR = FFZACTR ;
YEZACTR.data[2] = A_UNITE(GFZACTR,mode2,2,HFZACTR);
 /* line 312: */
YEZACTR.data[3] = A_UNITE(IFZACTR,mode4,4,EIAACTR_cnewline);
 /* line 313: */
MFZACTR = KFZACTR ;
YEZACTR.data[4] = A_UNITE(LFZACTR,mode2,2,MFZACTR);
YEZACTR.data[5] = A_UNITE(NFZACTR,mode4,4,EIAACTR_cnewline);
 /* line 314: */
 /* line 315: */
VBMACTR_writecstream(A_HISVEC(OFZACTR,YEZACTR,6,A68_92 ), WQLACTR_codestream(EQLACTR_currentlevel()));
} 
A_PROC_EXIT(then);
return;
} 
#undef NL

A68_VOID  PFZACTR_else(void)
{ 
A68_233  QFZACTR;  /* collateral clause result */
A68_92  TFZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  UFZACTR;  /* YIELD */
A68_92  VFZACTR;  /* OPERATORS - mode -> union mode */
A68_92  YFZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  ZFZACTR;  /* YIELD */
A68_92  AGZACTR;  /* OPERATORS - mode -> union mode */
A68_92  DGZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  EGZACTR;  /* YIELD */
A68_92  FGZACTR;  /* OPERATORS - mode -> union mode */
A68_91  GGZACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(else);
UFZACTR = SFZACTR ;
QFZACTR.data[0] = A_UNITE(TFZACTR,mode2,2,UFZACTR);
QFZACTR.data[1] = A_UNITE(VFZACTR,mode4,4,EIAACTR_cnewline);
ZFZACTR = XFZACTR ;
QFZACTR.data[2] = A_UNITE(YFZACTR,mode2,2,ZFZACTR);
QFZACTR.data[3] = A_UNITE(AGZACTR,mode4,4,EIAACTR_cnewline);
 /* line 321: */
EGZACTR = CGZACTR ;
QFZACTR.data[4] = A_UNITE(DGZACTR,mode2,2,EGZACTR);
QFZACTR.data[5] = A_UNITE(FGZACTR,mode4,4,EIAACTR_cnewline);
 /* line 322: */
 /* line 323: */
VBMACTR_writecstream(A_HISVEC(GGZACTR,QFZACTR,6,A68_92 ), WQLACTR_codestream(EQLACTR_currentlevel()));
A_PROC_EXIT(else);
return;
} 
#undef NL

A68_VOID  IGZACTR_casein(A68_93 * Enquiry)
{ 
A68_VC  KGZACTR;  /* clause result */
A68_VC  MGZACTR;  /* avoid structure result */
A68_VC  NGZACTR_integerexpr;
A68_236  OGZACTR;  /* collateral clause result */
A68_92  RGZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  SGZACTR;  /* YIELD */
A68_92  TGZACTR;  /* OPERATORS - mode -> union mode */
A68_92  WGZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  XGZACTR;  /* YIELD */
A68_92  YGZACTR;  /* OPERATORS - mode -> union mode */
A68_92  BHZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  CHZACTR;  /* YIELD */
A68_92  DHZACTR;  /* OPERATORS - mode -> union mode */
A68_92  GHZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  HHZACTR;  /* YIELD */
A68_92  IHZACTR;  /* OPERATORS - mode -> union mode */
A68_91  JHZACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(casein);
 /* line 326: */
 /* line 328: */
{ 
 /* line 329: */
 /* line 330: */
if ( ZUPACTR_isskip(Enquiry) )
{ 
 /* line 331: */
KGZACTR = LGZACTR;
} 
else
{ 
PWPACTR_getcfragment( Enquiry, &MGZACTR );
KGZACTR = MGZACTR;
} 
NGZACTR_integerexpr = KGZACTR;
 /* line 332: */
 /* line 333: */
SGZACTR = QGZACTR ;
OGZACTR.data[0] = A_UNITE(RGZACTR,mode2,2,SGZACTR);
OGZACTR.data[1] = A_UNITE(TGZACTR,mode2,2,NGZACTR_integerexpr);
XGZACTR = VGZACTR ;
OGZACTR.data[2] = A_UNITE(WGZACTR,mode2,2,XGZACTR);
 /* line 334: */
OGZACTR.data[3] = A_UNITE(YGZACTR,mode4,4,EIAACTR_cnewline);
CHZACTR = AHZACTR ;
OGZACTR.data[4] = A_UNITE(BHZACTR,mode2,2,CHZACTR);
 /* line 335: */
OGZACTR.data[5] = A_UNITE(DHZACTR,mode4,4,EIAACTR_cnewline);
 /* line 336: */
HHZACTR = FHZACTR ;
OGZACTR.data[6] = A_UNITE(GHZACTR,mode2,2,HHZACTR);
OGZACTR.data[7] = A_UNITE(IHZACTR,mode4,4,EIAACTR_cnewline);
 /* line 337: */
 /* line 338: */
VBMACTR_writecstream(A_HISVEC(JHZACTR,OGZACTR,8,A68_92 ), WQLACTR_codestream(EQLACTR_currentlevel()));
} 
A_PROC_EXIT(casein);
return;
} 
#undef NL
 /* line 342: */
 /* line 344: */

A68_VOID  NHZACTR_inu(A68_153  Uchoice, A68_93 * Union, A68_226  Case)
{ 
A68_VC  QHZACTR;  /* avoid structure result */
A68_VC  RHZACTR_unitedobject;
A68_INT  SHZACTR_codestream;
A68_239  THZACTR;  /* collateral clause result */
A68_92  WHZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  XHZACTR;  /* YIELD */
A68_92  YHZACTR;  /* OPERATORS - mode -> union mode */
A68_92  BIZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  CIZACTR;  /* YIELD */
A68_92  FIZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  GIZACTR;  /* YIELD */
A68_92  HIZACTR;  /* OPERATORS - mode -> union mode */
A68_92  KIZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  LIZACTR;  /* YIELD */
A68_92  MIZACTR;  /* OPERATORS - mode -> union mode */
A68_91  NIZACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(inu);
 /* line 345: */
 /* line 348: */
{ 
PWPACTR_getcfragment( ENQACTR_yield(PHZACTR, Union), &QHZACTR );
RHZACTR_unitedobject = QHZACTR;
 /* line 349: */
SHZACTR_codestream = WQLACTR_codestream(EQLACTR_currentlevel());
 /* line 350: */
 /* line 351: */
XHZACTR = VHZACTR ;
THZACTR.data[0] = A_UNITE(WHZACTR,mode2,2,XHZACTR);
THZACTR.data[1] = A_UNITE(YHZACTR,mode2,2,RHZACTR_unitedobject);
CIZACTR = AIZACTR ;
THZACTR.data[2] = A_UNITE(BIZACTR,mode2,2,CIZACTR);
GIZACTR = EIZACTR ;
THZACTR.data[3] = A_UNITE(FIZACTR,mode2,2,GIZACTR);
 /* line 352: */
THZACTR.data[4] = A_UNITE(HIZACTR,mode4,4,EIAACTR_cnewline);
 /* line 353: */
LIZACTR = JIZACTR ;
THZACTR.data[5] = A_UNITE(KIZACTR,mode2,2,LIZACTR);
THZACTR.data[6] = A_UNITE(MIZACTR,mode4,4,EIAACTR_cnewline);
 /* line 354: */
VBMACTR_writecstream(A_HISVEC(NIZACTR,THZACTR,7,A68_92 ), SHZACTR_codestream);
 /* line 355: */
 /* line 356: */
 /* line 357: */
if ( (Uchoice.Param<0) )
{ 
 /* line 358: */
GEZACTR_subunionchoice(Uchoice, (*Union), Case);
} 
else
{ 
 /* line 359: */
 /* line 360: */
TCZACTR_outputcaseulabel(Uchoice.Mode, Uchoice.Param, Case);
} 
} 
A_PROC_EXIT(inu);
return;
} 
#undef NL

A68_VOID  PIZACTR_comma(A68_INT  Caseno)
{ 
A68_233  QIZACTR;  /* collateral clause result */
A68_92  TIZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  UIZACTR;  /* YIELD */
A68_92  VIZACTR;  /* OPERATORS - mode -> union mode */
A68_92  YIZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  ZIZACTR;  /* YIELD */
A68_VC  AJZACTR;  /* avoid structure result */
A68_92  BJZACTR;  /* OPERATORS - mode -> union mode */
A68_92  EJZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  FJZACTR;  /* YIELD */
A68_92  GJZACTR;  /* OPERATORS - mode -> union mode */
A68_91  HJZACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(comma);
 /* line 363: */
 /* line 365: */
UIZACTR = SIZACTR ;
QIZACTR.data[0] = A_UNITE(TIZACTR,mode2,2,UIZACTR);
 /* line 366: */
QIZACTR.data[1] = A_UNITE(VIZACTR,mode4,4,EIAACTR_cnewline);
ZIZACTR = XIZACTR ;
QIZACTR.data[2] = A_UNITE(YIZACTR,mode2,2,ZIZACTR);
ROAAOSF_whole( Caseno, 0, &AJZACTR );
QIZACTR.data[3] = A_UNITE(BJZACTR,mode2,2,AJZACTR);
 /* line 367: */
FJZACTR = DJZACTR ;
QIZACTR.data[4] = A_UNITE(EJZACTR,mode2,2,FJZACTR);
QIZACTR.data[5] = A_UNITE(GJZACTR,mode4,4,EIAACTR_cnewline);
 /* line 368: */
 /* line 369: */
VBMACTR_writecstream(A_HISVEC(HJZACTR,QIZACTR,6,A68_92 ), WQLACTR_codestream(EQLACTR_currentlevel()));
A_PROC_EXIT(comma);
return;
} 
#undef NL
 /* line 373: */
 /* line 375: */

A68_VOID  LJZACTR_commau(A68_153  Uchoice, A68_93  Union, A68_226  Case)
{ 
A68_INT  MJZACTR_codestream;
A68_223  NJZACTR;  /* collateral clause result */
A68_92  QJZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  RJZACTR;  /* YIELD */
A68_92  SJZACTR;  /* OPERATORS - mode -> union mode */
A68_91  TJZACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(commau);
 /* line 376: */
 /* line 377: */
{ 
MJZACTR_codestream = WQLACTR_codestream(EQLACTR_currentlevel());
 /* line 378: */
RJZACTR = PJZACTR ;
NJZACTR.data[0] = A_UNITE(QJZACTR,mode2,2,RJZACTR);
NJZACTR.data[1] = A_UNITE(SJZACTR,mode4,4,EIAACTR_cnewline);
VBMACTR_writecstream(A_HISVEC(TJZACTR,NJZACTR,2,A68_92 ), MJZACTR_codestream);
 /* line 379: */
 /* line 380: */
 /* line 381: */
if ( (Uchoice.Param<0) )
{ 
 /* line 382: */
GEZACTR_subunionchoice(Uchoice, Union, Case);
} 
else
{ 
 /* line 383: */
 /* line 384: */
TCZACTR_outputcaseulabel(Uchoice.Mode, Uchoice.Param, Case);
} 
} 
A_PROC_EXIT(commau);
return;
} 
#undef NL

A68_VOID  UJZACTR_out(void)
{ 
A68_INT  VJZACTR_codestream;
A68_220  WJZACTR;  /* collateral clause result */
A68_92  ZJZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  AKZACTR;  /* YIELD */
A68_92  BKZACTR;  /* OPERATORS - mode -> union mode */
A68_92  EKZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  FKZACTR;  /* YIELD */
A68_92  GKZACTR;  /* OPERATORS - mode -> union mode */
A68_91  HKZACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(out);
{ 
VJZACTR_codestream = WQLACTR_codestream(EQLACTR_currentlevel());
 /* line 389: */
 /* line 390: */
AKZACTR = YJZACTR ;
WJZACTR.data[0] = A_UNITE(ZJZACTR,mode2,2,AKZACTR);
WJZACTR.data[1] = A_UNITE(BKZACTR,mode4,4,EIAACTR_cnewline);
FKZACTR = DKZACTR ;
WJZACTR.data[2] = A_UNITE(EKZACTR,mode2,2,FKZACTR);
WJZACTR.data[3] = A_UNITE(GKZACTR,mode4,4,EIAACTR_cnewline);
 /* line 392: */
 /* line 393: */
VBMACTR_writecstream(A_HISVEC(HKZACTR,WJZACTR,4,A68_92 ), VJZACTR_codestream);
} 
A_PROC_EXIT(out);
return;
} 
#undef NL

A68_VOID  MKZACTR_esac(A68_BOOL  Outpart, A68_108  Answer)
{ 
A68_INT  NKZACTR_codestream;
A68_INT  OKZACTR_resultmode;
A68_92  RKZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  SKZACTR;  /* YIELD */
A68_91  TKZACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_92  UKZACTR;  /* OPERATORS - mode -> union mode */
A68_91  VKZACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_220  WKZACTR;  /* collateral clause result */
A68_92  ZKZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  ALZACTR;  /* YIELD */
A68_92  BLZACTR;  /* OPERATORS - mode -> union mode */
A68_92  ELZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  FLZACTR;  /* YIELD */
A68_92  GLZACTR;  /* OPERATORS - mode -> union mode */
A68_91  HLZACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(esac);
 /* line 398: */
 /* line 399: */
{ 
NKZACTR_codestream = WQLACTR_codestream(EQLACTR_currentlevel());
 /* line 400: */
OKZACTR_resultmode = (*(&(Answer.Value->Mode)));
 /* line 402: */
 /* line 403: */
 /* line 404: */
if ( !Outpart )
{ 
 /* line 405: */
 /* line 407: */
if ( ((OKZACTR_resultmode==UEAACTR_voidmode)&EQIACTR_skipoption) )
{ 
 /* line 410: */
/*SKIP*/;
} 
else
{ 
UJZACTR_out();
 /* line 411: */
SKZACTR = QKZACTR ;
VBMACTR_writecstream(A_HVEC(TKZACTR,A_UNITE(RKZACTR,mode2,2,SKZACTR),A68_92 ), NKZACTR_codestream);
 /* line 412: */
 /* line 413: */
 /* line 414: */
VBMACTR_writecstream(A_HVEC(VKZACTR,A_UNITE(UKZACTR,mode4,4,EIAACTR_cnewline),A68_92 ), NKZACTR_codestream);
} 
} 
 /* line 415: */
 /* line 416: */
ALZACTR = YKZACTR ;
WKZACTR.data[0] = A_UNITE(ZKZACTR,mode2,2,ALZACTR);
WKZACTR.data[1] = A_UNITE(BLZACTR,mode4,4,EIAACTR_cnewline);
FLZACTR = DLZACTR ;
WKZACTR.data[2] = A_UNITE(ELZACTR,mode2,2,FLZACTR);
WKZACTR.data[3] = A_UNITE(GLZACTR,mode4,4,EIAACTR_cnewline);
 /* line 418: */
 /* line 419: */
VBMACTR_writecstream(A_HISVEC(HLZACTR,WKZACTR,4,A68_92 ), NKZACTR_codestream);
} 
A_PROC_EXIT(esac);
return;
} 
#undef NL

A68_VOID  MLZACTR_fi(A68_BOOL  Elsepart, A68_108  Answer)
{ 
A68_INT  NLZACTR_codestream;
A68_INT  OLZACTR_resultmode;
A68_223  PLZACTR;  /* collateral clause result */
A68_92  SLZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  TLZACTR;  /* YIELD */
A68_92  ULZACTR;  /* OPERATORS - mode -> union mode */
A68_91  VLZACTR;  /* OPERATORS - istruct -> vector */
A68_223  WLZACTR;  /* collateral clause result */
A68_92  ZLZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  AMZACTR;  /* YIELD */
A68_92  BMZACTR;  /* OPERATORS - mode -> union mode */
A68_91  CMZACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(fi);
 /* line 424: */
 /* line 425: */
{ 
NLZACTR_codestream = WQLACTR_codestream(EQLACTR_currentlevel());
 /* line 426: */
OLZACTR_resultmode = (*(&(Answer.Value->Mode)));
 /* line 427: */
 /* line 428: */
if ( !Elsepart )
{ 
 /* line 429: */
 /* line 431: */
if ( !(OLZACTR_resultmode==UEAACTR_voidmode) )
{ 
PFZACTR_else();
 /* line 432: */
TLZACTR = RLZACTR ;
PLZACTR.data[0] = A_UNITE(SLZACTR,mode2,2,TLZACTR);
PLZACTR.data[1] = A_UNITE(ULZACTR,mode4,4,EIAACTR_cnewline);
VBMACTR_writecstream(A_HISVEC(VLZACTR,PLZACTR,2,A68_92 ), NLZACTR_codestream);
 /* line 433: */
 /* line 434: */
 /* line 435: */
CXIACTR_warning(316);
} 
} 
 /* line 436: */
AMZACTR = YLZACTR ;
WLZACTR.data[0] = A_UNITE(ZLZACTR,mode2,2,AMZACTR);
WLZACTR.data[1] = A_UNITE(BMZACTR,mode4,4,EIAACTR_cnewline);
 /* line 437: */
VBMACTR_writecstream(A_HISVEC(CMZACTR,WLZACTR,2,A68_92 ), NLZACTR_codestream);
} 
A_PROC_EXIT(fi);
return;
} 
#undef NL
 /* line 447: */

A68_VOID  FMZACTR_optboolwarning(A68_BOOL  Orel, A68_93 * Operand1)
{ 
A68_INT  GMZACTR_codestream;
A68_VC  HMZACTR;  /* clause result */
A68_VC  IMZACTR;  /* avoid structure result */
A68_97  MMZACTR;  /* avoid structure result */
A68_97  KMZACTR_temp;
A68_230  NMZACTR;  /* collateral clause result */
A68_VC  OMZACTR;  /* OPERATORS - istruct -> vector */
A68_75  PMZACTR;  /* OPERATORS - istruct -> vector */
A68_92  QMZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  RMZACTR;  /* YIELD */
A68_92  UMZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  VMZACTR;  /* YIELD */
A68_VC  WMZACTR;  /* avoid structure result */
A68_92  XMZACTR;  /* OPERATORS - mode -> union mode */
A68_92  YMZACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  ZMZACTR;  /* YIELD */
A68_92  ANZACTR;  /* OPERATORS - mode -> union mode */
A68_91  BNZACTR;  /* OPERATORS - istruct -> vector */
A68_94  CNZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  DNZACTR;  /* OPERATORS - istruct -> vector */
A68_75  ENZACTR;  /* OPERATORS - istruct -> vector */
A68_VC  FNZACTR_tester;
A68_230  GNZACTR;  /* collateral clause result */
A68_92  JNZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  KNZACTR;  /* YIELD */
A68_92  NNZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  ONZACTR;  /* YIELD */
A68_92  PNZACTR;  /* OPERATORS - mode -> union mode */
A68_92  SNZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  TNZACTR;  /* YIELD */
A68_92  UNZACTR;  /* OPERATORS - mode -> union mode */
A68_92  VNZACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  WNZACTR;  /* YIELD */
A68_91  XNZACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(optboolwarning);
 /* line 448: */
 /* line 449: */
{ 
GMZACTR_codestream = WQLACTR_codestream(EQLACTR_currentlevel());
 /* line 450: */
A_CALLPROC(WUQACTR_evaluate,(Operand1),(Operand1,(WUQACTR_evaluate).nonlocals));
 /* line 451: */
 /* line 452: */
 /* line 453: */
 /* line 455: */
if ( RUPACTR_istemp(Operand1) )
{ 
 /* line 457: */
PWPACTR_getcfragment( Operand1, &IMZACTR );
HMZACTR = IMZACTR;
} 
else
{ 
UIOACTR_declarectemporary( WEAACTR_boolmode, LMZACTR, &MMZACTR );
KMZACTR_temp = MMZACTR;
 /* line 458: */
 /* line 459: */
PMZACTR = (*(&((&KMZACTR_temp)->Name))) ;
RMZACTR = A_HISVEC(OMZACTR,PMZACTR,7,A68_CHAR ) ;
NMZACTR.data[0] = A_UNITE(QMZACTR,mode2,2,RMZACTR);
VMZACTR = TMZACTR ;
NMZACTR.data[1] = A_UNITE(UMZACTR,mode2,2,VMZACTR);
PWPACTR_getcfragment( Operand1, &WMZACTR );
NMZACTR.data[2] = A_UNITE(XMZACTR,mode2,2,WMZACTR);
 /* line 461: */
ZMZACTR = ';' ;
NMZACTR.data[3] = A_UNITE(YMZACTR,mode1,1,ZMZACTR);
NMZACTR.data[4] = A_UNITE(ANZACTR,mode4,4,EIAACTR_cnewline);
 /* line 462: */
VBMACTR_writecstream(A_HISVEC(BNZACTR,NMZACTR,5,A68_92 ), GMZACTR_codestream);
 /* line 465: */
JZYACTR_assignment((&(Operand1->Extra)), A_UNITE(CNZACTR,mode5,5,KMZACTR_temp));
 /* line 466: */
 /* line 467: */
ENZACTR = (*(&((&KMZACTR_temp)->Name))) ;
HMZACTR = A_HISVEC(DNZACTR,ENZACTR,7,A68_CHAR );
} 
FNZACTR_tester = HMZACTR;
 /* line 468: */
 /* line 469: */
if ( Orel )
{ 
KNZACTR = INZACTR ;
GNZACTR.data[0] = A_UNITE(JNZACTR,mode2,2,KNZACTR);
} 
else
{ 
ONZACTR = MNZACTR ;
GNZACTR.data[0] = A_UNITE(NNZACTR,mode2,2,ONZACTR);
} 
GNZACTR.data[1] = A_UNITE(PNZACTR,mode2,2,FNZACTR_tester);
 /* line 470: */
TNZACTR = RNZACTR ;
GNZACTR.data[2] = A_UNITE(SNZACTR,mode2,2,TNZACTR);
 /* line 471: */
GNZACTR.data[3] = A_UNITE(UNZACTR,mode4,4,EIAACTR_cnewline);
WNZACTR = '{' ;
GNZACTR.data[4] = A_UNITE(VNZACTR,mode1,1,WNZACTR);
 /* line 472: */
 /* line 473: */
VBMACTR_writecstream(A_HISVEC(XNZACTR,GNZACTR,5,A68_92 ), GMZACTR_codestream);
} 
A_PROC_EXIT(optboolwarning);
return;
} 
#undef NL

A68_VOID  YNZACTR_optbooloper(void)
{ 
A68_223  ZNZACTR;  /* collateral clause result */
A68_92  AOZACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  BOZACTR;  /* YIELD */
A68_92  COZACTR;  /* OPERATORS - mode -> union mode */
A68_91  DOZACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(optbooloper);
BOZACTR = '}' ;
ZNZACTR.data[0] = A_UNITE(AOZACTR,mode1,1,BOZACTR);
ZNZACTR.data[1] = A_UNITE(COZACTR,mode4,4,EIAACTR_cnewline);
 /* line 478: */
VBMACTR_writecstream(A_HISVEC(DOZACTR,ZNZACTR,2,A68_92 ), WQLACTR_codestream(EQLACTR_currentlevel()));
A_PROC_EXIT(optbooloper);
return;
} 
#undef NL
 /* line 493: */
 /* line 494: */
 /* line 495: */
 /* line 496: */

A68_VOID  MOZACTR_endseries(A68_206  Properties, A68_108  Answer, A68_84 * Endofseries, A68_BOOL  Discardlevelactivated, A68_BOOL  Pullstack, A68_BOOL  Seriescontainsexit)
{ 
A_PROC_ENTRY(endseries);
 /* line 497: */
 /* line 499: */
 /* line 500: */
 /* line 501: */
 /* line 502: */
 /* line 504: */
 /* line 505: */
YXYACTR_endclause(Properties, Answer.End, Endofseries, Discardlevelactivated, Pullstack);
A_PROC_EXIT(endseries);
return;
} 
#undef NL

A68_VOID  POZACTR_semi(A68_BOOL  Outstandingdynamicresult, A68_BOOL  Declaration)
{ 
A_PROC_ENTRY(semi);
 /* line 508: */
 /* line 510: */
/*SKIP*/;
A_PROC_EXIT(semi);
return;
} 
#undef NL

A68_VOID  TOZACTR_exit(A68_BOOL  Dynamicresult, A68_BOOL  Firstexit, A68_108  Seriesanswer)
{ 
A68_220  WOZACTR;  /* collateral clause result */
A68_92  ZOZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  APZACTR;  /* YIELD */
A68_VC  BPZACTR;  /* OPERATORS - istruct -> vector */
A68_75  CPZACTR;  /* OPERATORS - istruct -> vector */
A68_92  DPZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  EPZACTR;  /* YIELD */
A68_92  FPZACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  GPZACTR;  /* YIELD */
A68_92  HPZACTR;  /* OPERATORS - mode -> union mode */
A68_91  IPZACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(exit);
 /* line 513: */
 /* line 515: */
{ 
PXIACTR_assert(VOZACTR, (Seriesanswer.End!=(A68_84 *)A68_NIL));
 /* line 516: */
 /* line 517: */
APZACTR = YOZACTR ;
WOZACTR.data[0] = A_UNITE(ZOZACTR,mode2,2,APZACTR);
CPZACTR = (*(&(Seriesanswer.End->Name))) ;
EPZACTR = A_HISVEC(BPZACTR,CPZACTR,7,A68_CHAR ) ;
WOZACTR.data[1] = A_UNITE(DPZACTR,mode2,2,EPZACTR);
 /* line 518: */
GPZACTR = ';' ;
WOZACTR.data[2] = A_UNITE(FPZACTR,mode1,1,GPZACTR);
WOZACTR.data[3] = A_UNITE(HPZACTR,mode4,4,EIAACTR_cnewline);
 /* line 519: */
 /* line 520: */
VBMACTR_writecstream(A_HISVEC(IPZACTR,WOZACTR,4,A68_92 ), WQLACTR_codestream(EQLACTR_currentlevel()));
} 
A_PROC_EXIT(exit);
return;
} 
#undef NL
 /* line 532: */
 /* line 534: */

A68_VOID  MPZACTR_codeinsert(A68_VC  Code, A68_INT  Mode, A68_100 * Visibles, A68_97  *ReturnedValue)
{ 
A68_97  NPZACTR_result;
A68_INT  OPZACTR_stream;
A68_204  RPZACTR_emitdefine;   /* proc value of non-global proc */
A68_76  GQZACTR_emitundefine;   /* proc value of non-global proc */
A68_248  SQZACTR_emitcode;   /* proc value of non-global proc */
A68_97  TRZACTR;  /* clause result */
A_PROC_ENTRY(codeinsert);
 /* line 535: */
 /* line 536: */
{ 
 /* line 537: */
OPZACTR_stream = WQLACTR_codestream(EQLACTR_currentlevel());
 /* line 539: */
A_CLOSURE( RPZACTR_emitdefine, SPZACTR_emitdefine, TPZACTR_emitdefine );
(( TPZACTR_emitdefine * ) ( RPZACTR_emitdefine.nonlocals )) -> OPZACTR_stream = OPZACTR_stream;
 /* line 545: */
A_CLOSURE( GQZACTR_emitundefine, HQZACTR_emitundefine, IQZACTR_emitundefine );
(( IQZACTR_emitundefine * ) ( GQZACTR_emitundefine.nonlocals )) -> OPZACTR_stream = OPZACTR_stream;
 /* line 551: */
A_CLOSURE( SQZACTR_emitcode, TQZACTR_emitcode, UQZACTR_emitcode );
(( UQZACTR_emitcode * ) ( SQZACTR_emitcode.nonlocals )) -> RPZACTR_emitdefine = RPZACTR_emitdefine;
(( UQZACTR_emitcode * ) ( SQZACTR_emitcode.nonlocals )) -> SQZACTR_emitcode = SQZACTR_emitcode;
(( UQZACTR_emitcode * ) ( SQZACTR_emitcode.nonlocals )) -> GQZACTR_emitundefine = GQZACTR_emitundefine;
(( UQZACTR_emitcode * ) ( SQZACTR_emitcode.nonlocals )) -> Mode = Mode;
(( UQZACTR_emitcode * ) ( SQZACTR_emitcode.nonlocals )) -> NPZACTR_result = (&NPZACTR_result);
(( UQZACTR_emitcode * ) ( SQZACTR_emitcode.nonlocals )) -> Code = Code;
(( UQZACTR_emitcode * ) ( SQZACTR_emitcode.nonlocals )) -> OPZACTR_stream = OPZACTR_stream;
 /* line 586: */
A_CALLPROC(SQZACTR_emitcode,(Visibles),(Visibles,(SQZACTR_emitcode).nonlocals));
 /* line 587: */
 /* line 588: */
TRZACTR = NPZACTR_result;
} 
A_PROC_EXIT(codeinsert);
*ReturnedValue = (TRZACTR);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 3: */
 /* line 4: */
 /* line 6: */
void KXYACTR(void)   /* initialise DECS clauses */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/shields/projects/Algol68/Tools/Algol68toC/src/a68toc","-v","-uname","seedfile","-lib","/home/shields/projects/Algol68/Tools/Algol68toC/a68config","-dir","/home/shields/projects/Algol68/Tools/Algol68toC/a68config","-dir","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel","-dir",".","clauses.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/shields/projects/Algol68/Tools/Algol68toC/a68config","A68_CDIR=","A68_DIR=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/shields/projects/Algol68/Tools/Algol68toC/a68config/a68config.m","./incimperatives.m","./unionaids.m","./modes.m","./incmode.m","./evaluator.m","./tracer.m","./moduletracer.m","./idtable.m","./values.m","./coutput.m","./centities.m","./environment.m","./environ.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/usefulops.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_60  JKZACTR;  /* procedure value */
A68_241  JLZACTR;  /* procedure value */
A68_207  FOZACTR;  /* procedure value */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
UAAACTR();   /* USE incimperatives */
QRQACTR();   /* USE unionaids */
MLMACTR();   /* USE modes */
ZDAACTR();   /* USE incmode */
TCVACTR();   /* USE evaluator */
QSYACTR();   /* USE tracer */
BCHACTR();   /* USE moduletracer */
YNKACTR();   /* USE idtable */
JRPACTR();   /* USE values */
YRLACTR();   /* USE coutput */
THAACTR();   /* USE centities */
HPIACTR();   /* USE environment */
KNLACTR();   /* USE environ */
IKAAOSF();   /* USE usefulops */
/* --- Initialise configuration information */
A_config.source_file = "/home/shields/projects/Algol68/Tools/Algol68toC/src/clauses.a68";
A_config.translation_time = "Sun Sep 26 21:51:09 2004";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "JXYACTR (from seed file) ";
A_config.spec_change_time = "Sun Sep 26 21:51:09 2004";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS clauses);
UEAALIB_a68config(LGAALIB_configinfo, OXYACTR);
 /* line 51: */
 /* line 52: */
 /* line 54: */
 /* line 55: */
 /* line 69: */
 /* line 70: */
 /* line 85: */
 /* line 91: */
 /* line 133: */
 /* line 187: */
 /* line 188: */
 /* line 210: */
 /* line 215: */
 /* line 216: */
 /* line 247: */
 /* line 248: */
 /* line 279: */
 /* line 280: */
 /* line 303: */
 /* line 317: */
 /* line 318: */
 /* line 320: */
 /* line 325: */
 /* line 340: */
 /* line 341: */
 /* line 362: */
 /* line 371: */
 /* line 372: */
 /* line 386: */
 /* line 387: */
 /* line 388: */
 /* line 395: */
JKZACTR.fn.fn_global = UJZACTR_out;
JKZACTR.nonlocals = A68_NIL;
IKZACTR_outu = (JKZACTR);
 /* line 397: */
 /* line 421: */
JLZACTR.fn.fn_global = MKZACTR_esac;
JLZACTR.nonlocals = A68_NIL;
ILZACTR_esacu = (JLZACTR);
 /* line 423: */
 /* line 444: */
 /* line 445: */
 /* line 475: */
 /* line 476: */
 /* line 477: */
 /* line 485: */
 /* line 489: */
FOZACTR.fn.fn_global = SXYACTR_startclause;
FOZACTR.nonlocals = A68_NIL;
EOZACTR_startseries = (FOZACTR);
 /* line 491: */
 /* line 492: */
 /* line 507: */
 /* line 512: */
 /* line 528: */
 /* line 529: */
 /* line 590: */
 /* line 592: */
 /* line 605: */
/*SKIP*/;
A_PROC_EXIT(DECS clauses);
} 
#undef NL
/* end of translation of clauses.a68 */
