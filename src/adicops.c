/* UNAME:AETACTR */
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
struct A68t55 ;

A_PROCEDURE(A68_VOID ,A68t54,(struct A68t55 *,A68_INT ,struct A68t55 *),(struct A68t55 *,A68_INT ,struct A68t55 *,void *));
typedef struct A68t54  A68_54 ;    /* PROC(REF MODE55,INT) MODE55 */
struct A68t57{
A68_INT  Rdenno;
A_PAD_INT(PAD_1)
};
typedef struct A68t57  A68_57 ;    /* STRUCT(INT)  */
struct A68t58{
A68_INT  Idno;
A_PAD_INT(PAD_2)
};
typedef struct A68t58  A68_58 ;    /* STRUCT(INT)  */
A_ISTRUCT(A68_CHAR ,7,A68t64);
typedef struct A68t64  A68_64 ;    /* STRUCT 7 CHAR */
struct A68t59{
struct A68t64  Name;
A_PAD_ISTRUCT(A68_64 ,PAD_3)
A68_INT  Mode;
A_PAD_INT(PAD_4)
};
typedef struct A68t59  A68_59 ;    /* STRUCT(MODE64,INT)  */
struct A68t60{
A68_INT  Labno;
A_PAD_INT(PAD_5)
};
typedef struct A68t60  A68_60 ;    /* STRUCT(INT)  */
struct A68t61{
A68_INT  Nse;
A_PAD_INT(PAD_6)
};
typedef struct A68t61  A68_61 ;    /* STRUCT(INT)  */
struct A68t62{
A68_INT  Fn;
A_PAD_INT(PAD_7)
A68_INT  Param;
A_PAD_INT(PAD_8)
struct A68t63 * Operands;
};
typedef struct A68t62  A68_62 ;    /* STRUCT(INT,INT,REF MODE63)  */
struct A68t56 { A68_INT mode; union {
A68_LBITS  mode1;
struct A68t57  mode2;
struct A68t58  mode4;
struct A68t59  mode5;
A68_VC  mode6;
struct A68t60  mode7;
struct A68t61  mode8;
struct A68t62  mode9;
} data; };
typedef struct A68t56  A68_56 ;    /* UNION(LONG BITS,MODE57,VOID,MODE58,MODE59,MODE26,MODE60,MODE61,MODE62)  */
struct A68t55{
A68_INT  Mode;
A_PAD_INT(PAD_9)
A68_BITS  Info;
A_PAD_BITS(PAD_10)
struct A68t56  Extra;
};
typedef struct A68t55  A68_55 ;    /* STRUCT(INT,BITS,MODE56)  */
struct A68t63{
struct A68t55  Value;
struct A68t63 * Rest;
};
typedef struct A68t63  A68_63 ;    /* STRUCT(MODE55,REF MODE63)  */

A_PROCEDURE(A68_VOID ,A68t65,(struct A68t55 *,struct A68t55 *),(struct A68t55 *,struct A68t55 *,void *));
typedef struct A68t65  A68_65 ;    /* PROC(REF MODE55) MODE55 */

A_PROCEDURE(A68_VOID ,A68t66,(A68_BOOL ,A68_VC *),(A68_BOOL ,A68_VC *,void *));
typedef struct A68t66  A68_66 ;    /* PROC(BOOL) MODE26 */
struct A68t67{
struct A68t64  Name;
A_PAD_ISTRUCT(A68_64 ,PAD_11)
A68_BOOL  Set;
A_PAD_BOOL(PAD_12)
};
typedef struct A68t67  A68_67 ;    /* STRUCT(MODE64,BOOL)  */

A_PROCEDURE(A68_VOID ,A68t68,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t68  A68_68 ;    /* PROC(MODE26) MODE26 */

A_PROCEDURE(A68_VOID ,A68t69,(A68_VC ),(A68_VC ,void *));
typedef struct A68t69  A68_69 ;    /* PROC(MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t70,(void),(void *));
typedef struct A68t70  A68_70 ;    /* PROC VOID */
struct A68t72 ;

A_PROCEDURE(A68_VOID ,A68t71,(struct A68t72 ),(struct A68t72 ,void *));
typedef struct A68t71  A68_71 ;    /* PROC(MODE72) VOID */
A_VECTOR(struct A68t73 ,A68t72);
typedef struct A68t72  A68_72 ;    /* VECTOR [] MODE73 */
struct A68t73 { A68_INT mode; union {
A68_CHAR  mode1;
A68_VC  mode2;
A68_SINT  mode3;
} data; };
typedef struct A68t73  A68_73 ;    /* UNION(CHAR,MODE26,SHORT INT)  */
struct A68t75 ;

A_PROCEDURE(A68_VOID ,A68t74,(struct A68t75 ,A68_INT ),(struct A68t75 ,A68_INT ,void *));
typedef struct A68t74  A68_74 ;    /* PROC(MODE75,INT) VOID */
A_VECTOR(struct A68t76 ,A68t75);
typedef struct A68t75  A68_75 ;    /* VECTOR [] MODE76 */
struct A68t76 { A68_INT mode; union {
A68_CHAR  mode1;
A68_VC  mode2;
A68_INT  mode3;
A68_SINT  mode4;
} data; };
typedef struct A68t76  A68_76 ;    /* UNION(CHAR,MODE26,INT,SHORT INT)  */

A_PROCEDURE(A68_INT ,A68t77,(A68_INT ),(A68_INT ,void *));
typedef struct A68t77  A68_77 ;    /* PROC(INT) INT */

A_PROCEDURE(A68_BOOL ,A68t78,(A68_INT ),(A68_INT ,void *));
typedef struct A68t78  A68_78 ;    /* PROC(INT) BOOL */
struct A68t79{
A68_INT  Level;
A_PAD_INT(PAD_13)
A68_INT  Block;
A_PAD_INT(PAD_14)
};
typedef struct A68t79  A68_79 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t80,(struct A68t79 *),(struct A68t79 *,void *));
typedef struct A68t80  A68_80 ;    /* PROC MODE79 */

A_PROCEDURE(A68_INT ,A68t81,(void),(void *));
typedef struct A68t81  A68_81 ;    /* PROC INT */

A_PROCEDURE(A68_VOID ,A68t82,(A68_INT ),(A68_INT ,void *));
typedef struct A68t82  A68_82 ;    /* PROC(INT) VOID */

A_PROCEDURE(A68_BOOL ,A68t83,(void),(void *));
typedef struct A68t83  A68_83 ;    /* PROC BOOL */

A_PROCEDURE(A68_BOOL ,A68t84,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t84  A68_84 ;    /* PROC(INT,INT) BOOL */

A_PROCEDURE(A68_VOID ,A68t85,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t85  A68_85 ;    /* PROC(INT,INT) VOID */

A_PROCEDURE(A68_BOOL ,A68t86,(struct A68t79 ,struct A68t79 ),(struct A68t79 ,struct A68t79 ,void *));
typedef struct A68t86  A68_86 ;    /* PROC(MODE79,MODE79) BOOL */

A_PROCEDURE(A68_BOOL ,A68t87,(struct A68t79 ),(struct A68t79 ,void *));
typedef struct A68t87  A68_87 ;    /* PROC(MODE79) BOOL */

A_PROCEDURE(A68_VOID ,A68t88,(A68_VC ,A68_BOOL ),(A68_VC ,A68_BOOL ,void *));
typedef struct A68t88  A68_88 ;    /* PROC(MODE26,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t89,(A68_VC ,A68_INT ),(A68_VC ,A68_INT ,void *));
typedef struct A68t89  A68_89 ;    /* PROC(MODE26,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t90,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t90  A68_90 ;    /* PROC(INT) REF MODE26 */
struct A68t92 ;

A_PROCEDURE(A68_VOID ,A68t91,(A68_INT ,struct A68t92 ),(A68_INT ,struct A68t92 ,void *));
typedef struct A68t91  A68_91 ;    /* PROC(INT,MODE92) VOID */
A_ROW(A68_VC ,A68t92,1);
typedef struct A68t92  A68_92 ;    /* [] MODE26 */

A_PROCEDURE(A68_BITS ,A68t93,(void),(void *));
typedef struct A68t93  A68_93 ;    /* PROC BITS */
struct A68t94{
A68_INT  Cfile;
A_PAD_INT(PAD_15)
};
typedef struct A68t94  A68_94 ;    /* STRUCT(INT)  */
struct A68t95{
A68_INT  Seedfile;
A_PAD_INT(PAD_16)
};
typedef struct A68t95  A68_95 ;    /* STRUCT(INT)  */
struct A68t96 { A68_INT mode; union {
struct A68t94  mode1;
struct A68t95  mode2;
struct A68t64  mode3;
} data; };
typedef struct A68t96  A68_96 ;    /* UNION(MODE94,MODE95,MODE64,VOID)  */
struct A68t97{
A68_VC  Version;
A68_LINT  Translationtime;
A_PAD_LINT(PAD_17)
A68_VC  Sourcefile;
struct A68t64  Nameseed;
A_PAD_ISTRUCT(A68_64 ,PAD_18)
struct A68t96  Nameseedorigin;
struct A68t98 * Used_modules;
A68_VC  Commandline;
struct A68t99 * Environment;
};
typedef struct A68t97  A68_97 ;    /* STRUCT(REF MODE26,LONG INT,REF MODE26,MODE64,MODE96,REF MODE98,REF MODE26,REF MODE99)  */
struct A68t98{
A68_VC  Modinfo_file;
struct A68t98 * Next;
};
typedef struct A68t98  A68_98 ;    /* STRUCT(REF MODE26,REF MODE98)  */
struct A68t99{
A68_VC  Env_name;
A68_VC  Env_value;
struct A68t99 * Next;
};
typedef struct A68t99  A68_99 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE99)  */
struct A68t101 ;
struct A68t102 ;

A_PROCEDURE(struct A68t101 *,A68t100,(A68_VC ,struct A68t102 *,A68_VC *),(A68_VC ,struct A68t102 *,A68_VC *,void *));
typedef struct A68t100  A68_100 ;    /* PROC(MODE26,REF MODE102,REF REF MODE26) REF MODE101 */
struct A68t101{
A68_VC  Name;
A68_BITS * Stdiofile;
};
typedef struct A68t101  A68_101 ;    /* STRUCT(REF MODE26,REF BITS)  */
struct A68t102{
A68_VC  Dir;
struct A68t102 * Next;
};
typedef struct A68t102  A68_102 ;    /* STRUCT(REF MODE26,REF MODE102)  */

A_PROCEDURE(A68_VOID ,A68t103,(struct A68t55 *,struct A68t55 **),(struct A68t55 *,struct A68t55 **,void *));
typedef struct A68t103  A68_103 ;    /* PROC(REF MODE55,REF REF MODE55) VOID */

A_PROCEDURE(A68_VOID ,A68t104,(struct A68t55 *,struct A68t55 **,A68_BITS ),(struct A68t55 *,struct A68t55 **,A68_BITS ,void *));
typedef struct A68t104  A68_104 ;    /* PROC(REF MODE55,REF REF MODE55,BITS) VOID */

A_PROCEDURE(A68_VOID ,A68t105,(struct A68t55 *,struct A68t55 **,struct A68t55 **),(struct A68t55 *,struct A68t55 **,struct A68t55 **,void *));
typedef struct A68t105  A68_105 ;    /* PROC(REF MODE55,REF REF MODE55,REF REF MODE55) VOID */

A_PROCEDURE(A68_VOID ,A68t106,(struct A68t55 *),(struct A68t55 *,void *));
typedef struct A68t106  A68_106 ;    /* PROC(REF MODE55) VOID */
struct A68t107{
A68_INT  Mode;
A_PAD_INT(PAD_19)
A68_INT  Cvariabletype;
A_PAD_INT(PAD_20)
struct A68t79  Environ;
A68_VC  Name;
A68_VC  C_name;
struct A68t64  Prefix;
A_PAD_ISTRUCT(A68_64 ,PAD_21)
A68_BITS  Flags;
A_PAD_BITS(PAD_22)
A68_VC  Definition;
A68_VC  Rhs;
};
typedef struct A68t107  A68_107 ;    /* STRUCT(INT,INT,MODE79,REF MODE26,REF MODE26,MODE64,BITS,REF MODE26,REF MODE26)  */
struct A68t108{
A68_INT  Mode;
A_PAD_INT(PAD_23)
A68_INT  Resultmode;
A_PAD_INT(PAD_24)
A68_INT  Declevel;
A_PAD_INT(PAD_25)
struct A68t79  Environ;
A68_VC  Name;
struct A68t64  Prefix;
A_PAD_ISTRUCT(A68_64 ,PAD_26)
struct A68t64  Fnprefix;
A_PAD_ISTRUCT(A68_64 ,PAD_27)
struct A68t64  Envprefix;
A_PAD_ISTRUCT(A68_64 ,PAD_28)
A68_BITS  Flags;
A_PAD_BITS(PAD_29)
};
typedef struct A68t108  A68_108 ;    /* STRUCT(INT,INT,INT,MODE79,REF MODE26,MODE64,MODE64,MODE64,BITS)  */
struct A68t109{
struct A68t67  Label;
struct A68t79  Environ;
A68_VC  Name;
struct A68t64  Prefix;
A_PAD_ISTRUCT(A68_64 ,PAD_30)
A68_BITS  Flags;
A_PAD_BITS(PAD_31)
A68_INT  Alias;
A_PAD_INT(PAD_32)
};
typedef struct A68t109  A68_109 ;    /* STRUCT(MODE67,MODE79,REF MODE26,MODE64,BITS,INT)  */

A_PROCEDURE(struct A68t107 *,A68t110,(A68_INT ),(A68_INT ,void *));
typedef struct A68t110  A68_110 ;    /* PROC(INT) REF MODE107 */

A_PROCEDURE(A68_VOID ,A68t111,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t111  A68_111 ;    /* PROC(REF MODE26) MODE26 */

A_PROCEDURE(A68_VOID ,A68t112,(A68_VC ,struct A68t64 ,A68_INT ,A68_INT ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_VC ,A68_VC ),(A68_VC ,struct A68t64 ,A68_INT ,A68_INT ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_VC ,A68_VC ,void *));
typedef struct A68t112  A68_112 ;    /* PROC(REF MODE26,MODE64,INT,INT,BOOL,BOOL,BOOL,BOOL,BOOL,REF MODE26,REF MODE26) VOID */
A_ROW(struct A68t107 ,A68t113,1);
typedef struct A68t113  A68_113 ;    /* [] MODE107 */
A_ROW(struct A68t108 ,A68t114,1);
typedef struct A68t114  A68_114 ;    /* [] MODE108 */
A_ROW(struct A68t109 ,A68t115,1);
typedef struct A68t115  A68_115 ;    /* [] MODE109 */
struct A68t117 ;

A_PROCEDURE(A68_VOID ,A68t116,(A68_INT ,A68_INT ,A68_INT ,A68_INT ,struct A68t117 ),(A68_INT ,A68_INT ,A68_INT ,A68_INT ,struct A68t117 ,void *));
typedef struct A68t116  A68_116 ;    /* PROC(INT,INT,INT,INT,REF MODE117) VOID */
A_ROW(A68_INT ,A68t117,1);
typedef struct A68t117  A68_117 ;    /* [] INT */

A_PROCEDURE(A68_BOOL ,A68t118,(A68_VC ),(A68_VC ,void *));
typedef struct A68t118  A68_118 ;    /* PROC(MODE26) BOOL */

A_PROCEDURE(A68_VOID ,A68t119,(A68_INT ,struct A68t79 *),(A68_INT ,struct A68t79 *,void *));
typedef struct A68t119  A68_119 ;    /* PROC(INT) MODE79 */
struct A68t120{
A68_INT  Parameters;
A_PAD_INT(PAD_33)
A68_INT  Result;
A_PAD_INT(PAD_34)
A68_BOOL  Hasdescriptors;
A_PAD_BOOL(PAD_35)
};
typedef struct A68t120  A68_120 ;    /* STRUCT(INT,INT,BOOL)  */
A_ISTRUCT(A68_CHAR ,32,A68t122);
typedef struct A68t122  A68_122 ;    /* STRUCT 32 CHAR */
struct A68t121{
A68_INT  Mode;
A_PAD_INT(PAD_36)
A68_INT  Offset;
A_PAD_INT(PAD_37)
struct A68t122  Name;
A_PAD_ISTRUCT(A68_122 ,PAD_38)
};
typedef struct A68t121  A68_121 ;    /* STRUCT(INT,INT,MODE122)  */
struct A68t124 ;

A_PROCEDURE(A68_VOID ,A68t123,(A68_INT ,struct A68t124 *),(A68_INT ,struct A68t124 *,void *));
typedef struct A68t123  A68_123 ;    /* PROC(INT) REF MODE124 */
A_VECTOR(A68_INT ,A68t124);
typedef struct A68t124  A68_124 ;    /* VECTOR [] INT */

A_PROCEDURE(A68_VOID ,A68t125,(struct A68t121 *,A68_VC *),(struct A68t121 *,A68_VC *,void *));
typedef struct A68t125  A68_125 ;    /* PROC(REF MODE121) MODE26 */

A_PROCEDURE(A68_VOID ,A68t126,(A68_INT ,A68_VC ,struct A68t59 *),(A68_INT ,A68_VC ,struct A68t59 *,void *));
typedef struct A68t126  A68_126 ;    /* PROC(INT,MODE26) MODE59 */
struct A68t128 ;

A_PROCEDURE(A68_VOID ,A68t127,(struct A68t128 ,A68_INT ),(struct A68t128 ,A68_INT ,void *));
typedef struct A68t127  A68_127 ;    /* PROC(REF MODE128,INT) VOID */
A_ROW(struct A68t129 ,A68t128,1);
typedef struct A68t128  A68_128 ;    /* [] MODE129 */
struct A68t139{
A68_INT  Mode;
A_PAD_INT(PAD_39)
};
typedef struct A68t139  A68_139 ;    /* STRUCT(INT)  */
struct A68t129 { A68_INT mode; union {
A68_INT  mode1;
struct A68t130 * mode2;
struct A68t131 * mode3;
struct A68t132 * mode4;
struct A68t133 * mode5;
struct A68t134 * mode6;
struct A68t135 * mode7;
struct A68t136 * mode8;
struct A68t137 * mode9;
struct A68t138 * mode10;
struct A68t139  mode11;
} data; };
typedef struct A68t129  A68_129 ;    /* UNION(INT,REF MODE130,REF MODE131,REF MODE132,REF MODE133,REF MODE134,REF MODE135,REF MODE136,REF MODE137,REF MODE138,MODE139)  */
struct A68t130{
A68_INT  Rdenno;
A_PAD_INT(PAD_40)
struct A68t143 * Modelist;
};
typedef struct A68t130  A68_130 ;    /* STRUCT(INT,REF MODE143)  */
struct A68t131{
A68_INT  Deproc;
A_PAD_INT(PAD_41)
struct A68t143 * Pars;
};
typedef struct A68t131  A68_131 ;    /* STRUCT(INT,REF MODE143)  */
struct A68t132{
A68_INT  Rdenno;
A_PAD_INT(PAD_42)
A68_INT  Deflex;
A_PAD_INT(PAD_43)
struct A68t142 * Sels;
};
typedef struct A68t132  A68_132 ;    /* STRUCT(INT,INT,REF MODE142)  */
struct A68t133{
A68_INT  Rdenno;
A_PAD_INT(PAD_44)
A68_INT  Imode;
A_PAD_INT(PAD_45)
A68_INT  Length;
A_PAD_INT(PAD_46)
A68_INT  Deflex;
A_PAD_INT(PAD_47)
};
typedef struct A68t133  A68_133 ;    /* STRUCT(INT,INT,INT,INT)  */
struct A68t134{
A68_INT  Deproc;
A_PAD_INT(PAD_48)
};
typedef struct A68t134  A68_134 ;    /* STRUCT(INT)  */
struct A68t135{
A68_INT  Rdenno;
A_PAD_INT(PAD_49)
A68_INT  Vecmode;
A_PAD_INT(PAD_50)
A68_INT  Deflex;
A_PAD_INT(PAD_51)
};
typedef struct A68t135  A68_135 ;    /* STRUCT(INT,INT,INT)  */
struct A68t136{
A68_INT  Rdenno;
A_PAD_INT(PAD_52)
A68_INT  Mode;
A_PAD_INT(PAD_53)
A68_INT  Nods;
A_PAD_INT(PAD_54)
A68_INT  Deflex;
A_PAD_INT(PAD_55)
};
typedef struct A68t136  A68_136 ;    /* STRUCT(INT,INT,INT,INT)  */
struct A68t137{
A68_INT  Mode;
A_PAD_INT(PAD_56)
struct A68t141 * Stenlist;
};
typedef struct A68t137  A68_137 ;    /* STRUCT(INT,REF MODE141)  */
struct A68t138{
A68_INT  Mode;
A_PAD_INT(PAD_57)
A68_INT  Modeproc;
A_PAD_INT(PAD_58)
struct A68t140 * El;
};
typedef struct A68t138  A68_138 ;    /* STRUCT(INT,INT,REF MODE140)  */
struct A68t140{
struct A68t138 * Am;
struct A68t140 * Rest;
};
typedef struct A68t140  A68_140 ;    /* STRUCT(REF MODE138,REF MODE140)  */
struct A68t141{
A68_INT  Mode;
A_PAD_INT(PAD_59)
A68_INT  Rdenno;
A_PAD_INT(PAD_60)
struct A68t141 * Rest;
};
typedef struct A68t141  A68_141 ;    /* STRUCT(INT,INT,REF MODE141)  */
struct A68t142{
A68_INT  Mode;
A_PAD_INT(PAD_61)
A68_INT  Fieldno;
A_PAD_INT(PAD_62)
struct A68t122  Name;
A_PAD_ISTRUCT(A68_122 ,PAD_63)
struct A68t142 * Rest;
};
typedef struct A68t142  A68_142 ;    /* STRUCT(INT,INT,MODE122,REF MODE142)  */
struct A68t143{
A68_INT  Mode;
A_PAD_INT(PAD_64)
struct A68t143 * Rest;
};
typedef struct A68t143  A68_143 ;    /* STRUCT(INT,REF MODE143)  */

A_PROCEDURE(A68_VOID ,A68t144,(A68_INT ,struct A68t120 *),(A68_INT ,struct A68t120 *,void *));
typedef struct A68t144  A68_144 ;    /* PROC(INT) MODE120 */
struct A68t146 ;

A_PROCEDURE(A68_VOID ,A68t145,(A68_INT ,struct A68t146 *),(A68_INT ,struct A68t146 *,void *));
typedef struct A68t145  A68_145 ;    /* PROC(INT) REF MODE146 */
A_VECTOR(struct A68t121 ,A68t146);
typedef struct A68t146  A68_146 ;    /* VECTOR [] MODE121 */

A_PROCEDURE(A68_INT ,A68t147,(A68_INT ,A68_BOOL ),(A68_INT ,A68_BOOL ,void *));
typedef struct A68t147  A68_147 ;    /* PROC(INT,BOOL) INT */

A_PROCEDURE(A68_VOID ,A68t148,(A68_INT ,A68_INT ,A68_VC *),(A68_INT ,A68_INT ,A68_VC *,void *));
typedef struct A68t148  A68_148 ;    /* PROC(INT,INT) MODE26 */

A_PROCEDURE(A68_VOID ,A68t149,(struct A68t96 ),(struct A68t96 ,void *));
typedef struct A68t149  A68_149 ;    /* PROC(MODE96) VOID */

A_PROCEDURE(struct A68t64 ,A68t150,(void),(void *));
typedef struct A68t150  A68_150 ;    /* PROC MODE64 */

A_PROCEDURE(A68_VOID ,A68t151,(struct A68t64 ),(struct A68t64 ,void *));
typedef struct A68t151  A68_151 ;    /* PROC(MODE64) VOID */

A_PROCEDURE(A68_VOID ,A68t152,(struct A68t96 ,A68_VC *),(struct A68t96 ,A68_VC *,void *));
typedef struct A68t152  A68_152 ;    /* PROC(MODE96) MODE26 */

A_PROCEDURE(A68_BOOL ,A68t153,(struct A68t55 *,struct A68t55 *),(struct A68t55 *,struct A68t55 *,void *));
typedef struct A68t153  A68_153 ;    /* PROC(REF MODE55,REF MODE55) BOOL */

A_PROCEDURE(A68_BOOL ,A68t154,(struct A68t55 *),(struct A68t55 *,void *));
typedef struct A68t154  A68_154 ;    /* PROC(REF MODE55) BOOL */

A_PROCEDURE(A68_BOOL ,A68t155,(struct A68t55 *,A68_LBITS ),(struct A68t55 *,A68_LBITS ,void *));
typedef struct A68t155  A68_155 ;    /* PROC(REF MODE55,LONG BITS) BOOL */

A_PROCEDURE(A68_LBITS ,A68t156,(struct A68t55 *),(struct A68t55 *,void *));
typedef struct A68t156  A68_156 ;    /* PROC(REF MODE55) LONG BITS */

A_PROCEDURE(A68_VOID ,A68t157,(struct A68t55 *,A68_VC *),(struct A68t55 *,A68_VC *,void *));
typedef struct A68t157  A68_157 ;    /* PROC(REF MODE55) MODE26 */

A_PROCEDURE(struct A68t55 *,A68t158,(struct A68t55 *,A68_INT ),(struct A68t55 *,A68_INT ,void *));
typedef struct A68t158  A68_158 ;    /* PROC(REF MODE55,INT) REF MODE55 */

A_PROCEDURE(A68_INT ,A68t159,(struct A68t62 ),(struct A68t62 ,void *));
typedef struct A68t159  A68_159 ;    /* PROC(MODE62) INT */
struct A68t160{
struct A68t55 * Value;
struct A68t67 * End;
A68_INT  Type;
A_PAD_INT(PAD_65)
};
typedef struct A68t160  A68_160 ;    /* STRUCT(REF MODE55,REF MODE67,INT)  */

A_PROCEDURE(A68_BOOL ,A68t161,(struct A68t55 *,A68_BITS ),(struct A68t55 *,A68_BITS ,void *));
typedef struct A68t161  A68_161 ;    /* PROC(REF MODE55,BITS) BOOL */

A_PROCEDURE(struct A68t55 *,A68t162,(struct A68t63 *,A68_INT ),(struct A68t63 *,A68_INT ,void *));
typedef struct A68t162  A68_162 ;    /* PROC(REF MODE63,INT) REF MODE55 */

A_PROCEDURE(struct A68t63 *,A68t163,(struct A68t63 *),(struct A68t63 *,void *));
typedef struct A68t163  A68_163 ;    /* PROC(REF MODE63) REF MODE63 */
struct A68t165 ;

A_PROCEDURE(struct A68t55 *,A68t164,(A68_INT ,A68_INT ,A68_BITS ,struct A68t165 ),(A68_INT ,A68_INT ,A68_BITS ,struct A68t165 ,void *));
typedef struct A68t164  A68_164 ;    /* PROC(INT,INT,BITS,MODE165) REF MODE55 */
A_VECTOR(struct A68t55 *,A68t165);
typedef struct A68t165  A68_165 ;    /* VECTOR [] REF MODE55 */

A_PROCEDURE(A68_VOID ,A68t166,(struct A68t55 *,A68_BOOL ,A68_VC *),(struct A68t55 *,A68_BOOL ,A68_VC *,void *));
typedef struct A68t166  A68_166 ;    /* PROC(REF MODE55,BOOL) MODE26 */

A_PROCEDURE(A68_LINT ,A68t167,(struct A68t55 ),(struct A68t55 ,void *));
typedef struct A68t167  A68_167 ;    /* PROC(MODE55) LONG INT */
struct A68t168 { A68_INT mode; union {
struct A68t55 * mode1;
A68_VC  mode2;
struct A68t59  mode3;
} data; };
typedef struct A68t168  A68_168 ;    /* UNION(REF MODE55,MODE26,MODE59)  */

A_PROCEDURE(A68_VOID ,A68t169,(struct A68t168 ,A68_VC *),(struct A68t168 ,A68_VC *,void *));
typedef struct A68t169  A68_169 ;    /* PROC(MODE168) MODE26 */
struct A68t171 ;

A_PROCEDURE(A68_VOID ,A68t170,(struct A68t171 ,A68_VC *),(struct A68t171 ,A68_VC *,void *));
typedef struct A68t170  A68_170 ;    /* PROC(MODE171) MODE26 */
A_VECTOR(struct A68t168 ,A68t171);
typedef struct A68t171  A68_171 ;    /* VECTOR [] MODE168 */

A_PROCEDURE(A68_VOID ,A68t172,(A68_VC ,struct A68t171 ,A68_VC *),(A68_VC ,struct A68t171 ,A68_VC *,void *));
typedef struct A68t172  A68_172 ;    /* PROC(MODE26,MODE171) MODE26 */

A_PROCEDURE(A68_VOID ,A68t173,(struct A68t171 ),(struct A68t171 ,void *));
typedef struct A68t173  A68_173 ;    /* PROC(MODE171) VOID */

A_PROCEDURE(A68_VOID ,A68t174,(A68_VC ,A68_INT ,struct A68t171 ,struct A68t59 *),(A68_VC ,A68_INT ,struct A68t171 ,struct A68t59 *,void *));
typedef struct A68t174  A68_174 ;    /* PROC(MODE26,INT,MODE171) MODE59 */

A_PROCEDURE(struct A68t55 *,A68t175,(struct A68t55 *),(struct A68t55 *,void *));
typedef struct A68t175  A68_175 ;    /* PROC(REF MODE55) REF MODE55 */

A_PROCEDURE(struct A68t55 *,A68t176,(A68_VC ,struct A68t55 *),(A68_VC ,struct A68t55 *,void *));
typedef struct A68t176  A68_176 ;    /* PROC(MODE26,REF MODE55) REF MODE55 */

A_PROCEDURE(A68_VOID ,A68t177,(struct A68t70 ),(struct A68t70 ,void *));
typedef struct A68t177  A68_177 ;    /* PROC(MODE70) VOID */

A_PROCEDURE(A68_VOID ,A68t178,(struct A68t69 ),(struct A68t69 ,void *));
typedef struct A68t178  A68_178 ;    /* PROC(MODE69) VOID */

A_PROCEDURE(A68_VOID ,A68t179,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t179  A68_179 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,62,A68t180);
typedef struct A68t180  A68_180 ;    /* STRUCT 62 CHAR */
A_ISTRUCT(A68_CHAR ,10,A68t181);
typedef struct A68t181  A68_181 ;    /* STRUCT 10 CHAR */
A_ISTRUCT(A68_CHAR ,23,A68t182);
typedef struct A68t182  A68_182 ;    /* STRUCT 23 CHAR */
A_ISTRUCT(A68_CHAR ,28,A68t183);
typedef struct A68t183  A68_183 ;    /* STRUCT 28 CHAR */
A_ISTRUCT(A68_CHAR ,11,A68t184);
typedef struct A68t184  A68_184 ;    /* STRUCT 11 CHAR */
A_ISTRUCT(A68_CHAR ,3,A68t185);
typedef struct A68t185  A68_185 ;    /* STRUCT 3 CHAR */
A_ISTRUCT(A68_CHAR ,5,A68t186);
typedef struct A68t186  A68_186 ;    /* STRUCT 5 CHAR */
A_ISTRUCT(A68_CHAR ,6,A68t187);
typedef struct A68t187  A68_187 ;    /* STRUCT 6 CHAR */
A_ISTRUCT(A68_CHAR ,2,A68t188);
typedef struct A68t188  A68_188 ;    /* STRUCT 2 CHAR */

A_PROCEDURE(A68_VOID ,A68t189,(A68_BOOL ,A68_VC ,struct A68t55 *,A68_VC *),(A68_BOOL ,A68_VC ,struct A68t55 *,A68_VC *,void *));
typedef struct A68t189  A68_189 ;    /* PROC(BOOL,MODE26,REF MODE55) MODE26 */

A_PROCEDURE(A68_VOID ,A68t190,(A68_BOOL ,A68_VC ,struct A68t55 *,struct A68t55 *,A68_VC *),(A68_BOOL ,A68_VC ,struct A68t55 *,struct A68t55 *,A68_VC *,void *));
typedef struct A68t190  A68_190 ;    /* PROC(BOOL,MODE26,REF MODE55,REF MODE55) MODE26 */
A_ISTRUCT(struct A68t168 ,2,A68t191);
typedef struct A68t191  A68_191 ;    /* STRUCT 2 MODE168 */

A_PROCEDURE(A68_VOID ,A68t192,(struct A68t55 *,A68_INT ,A68_INT ,struct A68t55 *),(struct A68t55 *,A68_INT ,A68_INT ,struct A68t55 *,void *));
typedef struct A68t192  A68_192 ;    /* PROC(REF MODE55,INT,INT) MODE55 */
A_ISTRUCT(A68_CHAR ,14,A68t193);
typedef struct A68t193  A68_193 ;    /* STRUCT 14 CHAR */
A_ISTRUCT(A68_CHAR ,13,A68t194);
typedef struct A68t194  A68_194 ;    /* STRUCT 13 CHAR */
A_ISTRUCT(A68_CHAR ,24,A68t195);
typedef struct A68t195  A68_195 ;    /* STRUCT 24 CHAR */
A_ISTRUCT(A68_CHAR ,12,A68t196);
typedef struct A68t196  A68_196 ;    /* STRUCT 12 CHAR */
A_ISTRUCT(A68_CHAR ,15,A68t197);
typedef struct A68t197  A68_197 ;    /* STRUCT 15 CHAR */
A_ISTRUCT(A68_CHAR ,30,A68t198);
typedef struct A68t198  A68_198 ;    /* STRUCT 30 CHAR */
A_ISTRUCT(A68_CHAR ,31,A68t199);
typedef struct A68t199  A68_199 ;    /* STRUCT 31 CHAR */
A_ISTRUCT(A68_CHAR ,1,A68t200);
typedef struct A68t200  A68_200 ;    /* STRUCT 0 CHAR */
A_ISTRUCT(struct A68t76 ,5,A68t201);
typedef struct A68t201  A68_201 ;    /* STRUCT 5 MODE76 */
A_ISTRUCT(struct A68t168 ,3,A68t202);
typedef struct A68t202  A68_202 ;    /* STRUCT 3 MODE168 */
A_ISTRUCT(A68_CHAR ,16,A68t203);
typedef struct A68t203  A68_203 ;    /* STRUCT 16 CHAR */
A_ISTRUCT(struct A68t76 ,7,A68t204);
typedef struct A68t204  A68_204 ;    /* STRUCT 7 MODE76 */
A_ISTRUCT(A68_CHAR ,8,A68t205);
typedef struct A68t205  A68_205 ;    /* STRUCT 8 CHAR */
A_ISTRUCT(struct A68t168 ,4,A68t206);
typedef struct A68t206  A68_206 ;    /* STRUCT 4 MODE168 */

A_PROCEDURE(A68_VOID ,A68t207,(A68_VC ,struct A68t55 *,A68_INT ,struct A68t55 *),(A68_VC ,struct A68t55 *,A68_INT ,struct A68t55 *,void *));
typedef struct A68t207  A68_207 ;    /* PROC(MODE26,REF MODE55,INT) MODE55 */
A_ROW(struct A68t192 ,A68t208,1);
typedef struct A68t208  A68_208 ;    /* [] MODE192 */
A_ISTRUCT(struct A68t192 ,18,A68t209);
typedef struct A68t209  A68_209 ;    /* STRUCT 18 MODE192 */

A_PROCEDURE(A68_VOID ,A68t210,(struct A68t55 *,struct A68t62 ,struct A68t55 *),(struct A68t55 *,struct A68t62 ,struct A68t55 *,void *));
typedef struct A68t210  A68_210 ;    /* PROC(REF MODE55,MODE62) MODE55 */

A_PROCEDURE(A68_VOID ,A68t211,(struct A68t124 ,A68_VC ,A68_VC ,struct A68t55 *,struct A68t55 *,A68_BOOL ,A68_VC *),(struct A68t124 ,A68_VC ,A68_VC ,struct A68t55 *,struct A68t55 *,A68_BOOL ,A68_VC *,void *));
typedef struct A68t211  A68_211 ;    /* PROC(MODE124,MODE26,MODE26,REF MODE55,REF MODE55,BOOL) MODE26 */
A_ISTRUCT(A68_CHAR ,9,A68t212);
typedef struct A68t212  A68_212 ;    /* STRUCT 9 CHAR */
A_ISTRUCT(A68_CHAR ,33,A68t213);
typedef struct A68t213  A68_213 ;    /* STRUCT 33 CHAR */
A_ISTRUCT(A68_CHAR ,36,A68t214);
typedef struct A68t214  A68_214 ;    /* STRUCT 36 CHAR */
A_ISTRUCT(A68_CHAR ,35,A68t215);
typedef struct A68t215  A68_215 ;    /* STRUCT 35 CHAR */
A_ISTRUCT(A68_INT ,2,A68t216);
typedef struct A68t216  A68_216 ;    /* STRUCT 2 INT */

A_PROCEDURE(A68_VOID ,A68t217,(A68_INT ,struct A68t55 *,A68_VC *),(A68_INT ,struct A68t55 *,A68_VC *,void *));
typedef struct A68t217  A68_217 ;    /* PROC(INT,REF MODE55) MODE26 */
A_ISTRUCT(A68_CHAR ,37,A68t218);
typedef struct A68t218  A68_218 ;    /* STRUCT 37 CHAR */

A_PROCEDURE(A68_BITS ,A68t219,(A68_BOOL ,struct A68t55 *),(A68_BOOL ,struct A68t55 *,void *));
typedef struct A68t219  A68_219 ;    /* PROC(BOOL,REF MODE55) BITS */

A_PROCEDURE(A68_VOID ,A68t220,(A68_BOOL ,A68_BOOL ,A68_VC ,struct A68t55 *,struct A68t55 *,struct A68t56 *),(A68_BOOL ,A68_BOOL ,A68_VC ,struct A68t55 *,struct A68t55 *,struct A68t56 *,void *));
typedef struct A68t220  A68_220 ;    /* PROC(BOOL,BOOL,MODE26,REF MODE55,REF MODE55) MODE56 */
A_ISTRUCT(A68_CHAR ,38,A68t221);
typedef struct A68t221  A68_221 ;    /* STRUCT 38 CHAR */
A_ISTRUCT(A68_CHAR ,18,A68t222);
typedef struct A68t222  A68_222 ;    /* STRUCT 18 CHAR */
A_ISTRUCT(A68_CHAR ,21,A68t223);
typedef struct A68t223  A68_223 ;    /* STRUCT 21 CHAR */
A_ISTRUCT(struct A68t192 ,33,A68t224);
typedef struct A68t224  A68_224 ;    /* STRUCT 33 MODE192 */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from values --- */
extern A68_VOID  PWPACTR_getcfragment(struct A68t55 *,A68_VC *);
extern A68_BITS  YIJACTR_defaultinfo;
#define AJJACTR_atomic 0X2U
#define BJJACTR_effects 0X4U
#define CJJACTR_nonloc 0X8U
#define DJJACTR_voided 0X10U
#define EJJACTR_lvalue 0X20U
#define GJJACTR_fxwarn 0X80U
extern A68_BOOL  DTPACTR_hasattribute(struct A68t55 *,A68_BITS );
extern A68_55  MJJACTR_skipvalue;
extern A68_VOID  WAQACTR_bracketcfragment(struct A68t55 *,A68_VC *);
extern A68_VOID  NLQACTR_usemacro(A68_VC ,struct A68t171 ,A68_VC *);
extern A68_VOID  SLQACTR_emitline(struct A68t171 );
extern A68_55 * TMQACTR_yield(struct A68t55 *);
extern A68_55 * ENQACTR_yield(A68_VC ,struct A68t55 *);
/* --- End of imports from values --- */


/* --- Imports from uniquenameserver --- */
extern A68_64  ZGMACTR_newuniquename(void);
/* --- End of imports from uniquenameserver --- */


/* --- Imports from modes --- */
extern A68_VOID  UIOACTR_declarectemporary(A68_INT ,A68_VC ,A68_59 *);
extern A68_BOOL  JPMACTR_isarray(A68_INT );
extern A68_BOOL  EPMACTR_isrow(A68_INT );
extern A68_126  TJOACTR_new;
extern A68_VOID  OJNACTR_cast(A68_INT ,A68_VC *);
extern A68_VOID  TJNACTR_csizeof(A68_INT ,A68_VC *);
extern A68_INT  NMMACTR_deref(A68_INT );
extern A68_BOOL  FNMACTR_isint(A68_INT );
extern A68_BOOL  COMACTR_isrow(A68_INT );
extern A68_BOOL  YNMACTR_isvec(A68_INT );
extern A68_BOOL  ROMACTR_isflexrow(A68_INT );
extern A68_BOOL  NOMACTR_isflexvec(A68_INT );
/* --- End of imports from modes --- */


/* --- Imports from incmode --- */
extern A68_INT  WFAACTR_refrefmark;
/* --- End of imports from incmode --- */


/* --- Imports from idtable --- */
/* --- End of imports from idtable --- */


/* --- Imports from incoperfn --- */
#define RGAACTR_biopnumbersstart 1000
#define SGAACTR_opnumberdivisor 16
#define TGAACTR_biopnumberdivisor 100
extern A68_BITS  ZGAACTR_parammask;
/* --- End of imports from incoperfn --- */


/* --- Imports from evalbase --- */
extern A68_VOID  ZUQACTR_eval1(struct A68t55 *,struct A68t55 **);
extern A68_VOID  IVQACTR_eval_pass_left(struct A68t55 *,struct A68t55 **,A68_BITS );
extern A68_VOID  RVQACTR_eval_pass_right(struct A68t55 *,struct A68t55 **,A68_BITS );
extern A68_VOID  AWQACTR_eval2(struct A68t55 *,struct A68t55 **,struct A68t55 **);
/* --- End of imports from evalbase --- */


/* --- Imports from environment --- */
extern A68_VOID  PXIACTR_assert(A68_VC ,A68_BOOL );
extern A68_BOOL  AQIACTR_verboseoption;
/* --- End of imports from environment --- */


/* --- Imports from environ --- */
extern A68_INT  ZQLACTR_locdecstream(A68_INT );
extern A68_INT  EQLACTR_currentlevel(void);
/* --- End of imports from environ --- */


/* --- Imports from coutput --- */
extern A68_VOID  VBMACTR_writecstream(struct A68t75 ,A68_INT );
/* --- End of imports from coutput --- */


/* --- Imports from centities --- */
extern A68_SINT  EIAACTR_cnewline;
extern A68_VOID  JIAACTR_bracket(A68_VC ,A68_VC *);
/* --- End of imports from centities --- */


/* --- Imports from biops --- */
extern A68_VOID  TDTACTR_monadicbiopsemantics(struct A68t55 *,A68_INT ,A68_55 *);
extern A68_VOID  SYSACTR_biop99(struct A68t55 *,A68_55 *);
/* --- End of imports from biops --- */


/* --- Imports from usefulops --- */
extern A68_BITS * PKAAOSF_orab(A68_BITS *,A68_BITS );
extern A68_VOID  ROAAOSF_whole(A68_INT ,A68_INT ,A68_VC *);
/* --- End of imports from usefulops --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void JRPACTR(void);   /* values */
extern void AGMACTR(void);   /* uniquenameserver */
extern void MLMACTR(void);   /* modes */
extern void ZDAACTR(void);   /* incmode */
extern void YNKACTR(void);   /* idtable */
extern void XFAACTR(void);   /* incoperfn */
extern void RUQACTR(void);   /* evalbase */
extern void HPIACTR(void);   /* environment */
extern void KNLACTR(void);   /* environ */
extern void YRLACTR(void);   /* coutput */
extern void THAACTR(void);   /* centities */
extern void JYSACTR(void);   /* biops */
extern void IKAAOSF(void);   /* usefulops */
/* --- end of DECS initialisation functions --- */
static A68_180   EETACTR = {"$Id: adicops.c,v 1.5.2.4 2004/09/27 03:04:16 teshields Exp $"}; 
A_GISVEC(A68_VC ,FETACTR,EETACTR,62)
static A68_181   GETACTR = {"ADICOPS - "}; 
A_GISVEC(A68_VC ,HETACTR,GETACTR,10)
static A68_VC  IETACTR_modulename;
static A68_182   JETACTR = {":illegal version number"}; 
A_GISVEC(A68_VC ,KETACTR,JETACTR,23)
static A68_VC  LETACTR_qvfault;
static A68_183   METACTR = {":mode COMPL is not supported"}; 
A_GISVEC(A68_VC ,NETACTR,METACTR,28)
static A68_VC  OETACTR_qcompl;
static A68_184   PETACTR = {"monadic UPB"}; 
A_GISVEC(A68_VC ,QETACTR,PETACTR,11)
static A68_VC  RETACTR_qmupb;
static A68_184   SETACTR = {"monadic LWB"}; 
A_GISVEC(A68_VC ,TETACTR,SETACTR,11)
static A68_VC  UETACTR_qmlwb;
static A68_185   VETACTR = {"ABS"}; 
A_GISVEC(A68_VC ,WETACTR,VETACTR,3)
static A68_VC  XETACTR_qabs;
static A68_186   YETACTR = {"ROUND"}; 
A_GISVEC(A68_VC ,ZETACTR,YETACTR,5)
static A68_VC  AFTACTR_qround;
static A68_187   BFTACTR = {"ENTIER"}; 
A_GISVEC(A68_VC ,CFTACTR,BFTACTR,6)
static A68_VC  DFTACTR_qentier;
static A68_40   EFTACTR = {"SIGN"}; 
A_GISVEC(A68_VC ,FFTACTR,EFTACTR,4)
static A68_VC  GFTACTR_qsign;
static A68_188   HFTACTR = {"RE"}; 
A_GISVEC(A68_VC ,IFTACTR,HFTACTR,2)
static A68_VC  JFTACTR_qre;
static A68_188   KFTACTR = {"IM"}; 
A_GISVEC(A68_VC ,LFTACTR,KFTACTR,2)
static A68_VC  MFTACTR_qim;
static A68_185   NFTACTR = {"ARG"}; 
A_GISVEC(A68_VC ,OFTACTR,NFTACTR,3)
static A68_VC  PFTACTR_qarg;
static A68_40   QFTACTR = {"CONJ"}; 
A_GISVEC(A68_VC ,RFTACTR,QFTACTR,4)
static A68_VC  SFTACTR_qconj;
static A68_VC  UFTACTR_qi;
static A68_40   VFTACTR = {"PLUS"}; 
A_GISVEC(A68_VC ,WFTACTR,VFTACTR,4)
static A68_VC  XFTACTR_qplus;
static A68_186   YFTACTR = {"MINUS"}; 
A_GISVEC(A68_VC ,ZFTACTR,YFTACTR,5)
static A68_VC  AGTACTR_qminus;
static A68_186   BGTACTR = {"TIMES"}; 
A_GISVEC(A68_VC ,CGTACTR,BGTACTR,5)
static A68_VC  DGTACTR_qtimes;
static A68_185   EGTACTR = {"DIV"}; 
A_GISVEC(A68_VC ,FGTACTR,EGTACTR,3)
static A68_VC  GGTACTR_qdiv;
static A68_40   HGTACTR = {"OVER"}; 
A_GISVEC(A68_VC ,IGTACTR,HGTACTR,4)
static A68_VC  JGTACTR_qover;
static A68_185   KGTACTR = {"MOD"}; 
A_GISVEC(A68_VC ,LGTACTR,KGTACTR,3)
static A68_VC  MGTACTR_qmod;
static A68_188   NGTACTR = {"**"}; 
A_GISVEC(A68_VC ,OGTACTR,NGTACTR,2)
static A68_VC  PGTACTR_qpower;
static A68_40   QGTACTR = {"ELEM"}; 
A_GISVEC(A68_VC ,RGTACTR,QGTACTR,4)
static A68_VC  SGTACTR_qelem;
static A68_187   TGTACTR = {"PLUSAB"}; 
A_GISVEC(A68_VC ,UGTACTR,TGTACTR,6)
static A68_VC  VGTACTR_qplusab;
static A68_187   WGTACTR = {"PLUSTO"}; 
A_GISVEC(A68_VC ,XGTACTR,WGTACTR,6)
static A68_VC  YGTACTR_qplusto;
static A68_64   ZGTACTR = {"MINUSAB"}; 
A_GISVEC(A68_VC ,AHTACTR,ZGTACTR,7)
static A68_VC  BHTACTR_qminusab;
static A68_64   CHTACTR = {"TIMESAB"}; 
A_GISVEC(A68_VC ,DHTACTR,CHTACTR,7)
static A68_VC  EHTACTR_qtimesab;
static A68_187   FHTACTR = {"OVERAB"}; 
A_GISVEC(A68_VC ,GHTACTR,FHTACTR,6)
static A68_VC  HHTACTR_qoverab;
static A68_186   IHTACTR = {"MODAB"}; 
A_GISVEC(A68_VC ,JHTACTR,IHTACTR,5)
static A68_VC  KHTACTR_qmodab;
static A68_186   LHTACTR = {"DIVAB"}; 
A_GISVEC(A68_VC ,MHTACTR,LHTACTR,5)
static A68_VC  NHTACTR_qdivab;
static A68_188   OHTACTR = {"IS"}; 
A_GISVEC(A68_VC ,PHTACTR,OHTACTR,2)
static A68_VC  QHTACTR_qis;
static A68_40   RHTACTR = {"ISNT"}; 
A_GISVEC(A68_VC ,SHTACTR,RHTACTR,4)
static A68_VC  THTACTR_qisnt;
static A68_64   UHTACTR = {"IS/ISNT"}; 
A_GISVEC(A68_VC ,VHTACTR,UHTACTR,7)
static A68_VC  WHTACTR_qisisnt;
static A68_187   XHTACTR = {" COMPL"}; 
A_GISVEC(A68_VC ,YHTACTR,XHTACTR,6)
static A68_VC  ZHTACTR_qcomplex;
static A68_193   MJTACTR = {"A_COMPL_MMINUS"}; 
A_GISVEC(A68_VC ,SJTACTR,MJTACTR,14)
static A68_40   GKTACTR = {".upb"}; 
A_GISVEC(A68_VC ,IKTACTR,GKTACTR,4)
static A68_184   LKTACTR = {".dim[0].upb"}; 
A_GISVEC(A68_VC ,NKTACTR,LKTACTR,11)
static A68_188   YKTACTR = {" 1"}; 
A_GISVEC(A68_VC ,ZKTACTR,YKTACTR,2)
static A68_184   CLTACTR = {".dim[0].lwb"}; 
A_GISVEC(A68_VC ,ELTACTR,CLTACTR,11)
static A68_194   XLTACTR = {"ADICOPS - NOT"}; 
A_GISVEC(A68_VC ,YLTACTR,XLTACTR,13)
static A68_195   JMTACTR = {"(A68_INT)(unsigned char)"}; 
A_GISVEC(A68_VC ,KMTACTR,JMTACTR,24)
static A68_186   OMTACTR = {"A_ABS"}; 
static A68_40   PMTACTR = {" INT"}; 
A_GISVEC(A68_VC ,QMTACTR,PMTACTR,4)
A_GISVEC(A68_VC ,RMTACTR,OMTACTR,5)
static A68_186   TMTACTR = {"A_ABS"}; 
static A68_186   UMTACTR = {" REAL"}; 
A_GISVEC(A68_VC ,VMTACTR,UMTACTR,5)
A_GISVEC(A68_VC ,WMTACTR,TMTACTR,5)
static A68_184   YMTACTR = {"A_COMPL_ABS"}; 
A_GISVEC(A68_VC ,ZMTACTR,YMTACTR,11)
static A68_194   RNTACTR = {"ADICOPS - BIN"}; 
A_GISVEC(A68_VC ,SNTACTR,RNTACTR,13)
static A68_196   AOTACTR = {"(A68_SSBITS)"}; 
A_GISVEC(A68_VC ,BOTACTR,AOTACTR,12)
static A68_197   FOTACTR = {"ADICOPS - REPR "}; 
A_GISVEC(A68_VC ,GOTACTR,FOTACTR,15)
static A68_198   POTACTR = {"ADICOPS - LENG incorrect mode:"}; 
A_GISVEC(A68_VC ,ROTACTR,POTACTR,30)
static A68_199   FPTACTR = {"ADICOPS - SHORT incorrect mode:"}; 
A_GISVEC(A68_VC ,HPTACTR,FPTACTR,31)
static A68_40   VPTACTR = {" & 1"}; 
A_GISVEC(A68_VC ,XPTACTR,VPTACTR,4)
static A68_193   AQTACTR = {"ADICOPS - ODD "}; 
A_GISVEC(A68_VC ,BQTACTR,AQTACTR,14)
static A68_187   KQTACTR = {"A_SIGN"}; 
A_GISVEC(A68_VC ,LQTACTR,KQTACTR,6)
static A68_197   OQTACTR = {"ADICOPS - SIGN "}; 
A_GISVEC(A68_VC ,PQTACTR,OQTACTR,15)
static A68_197   YQTACTR = {"incorrect mode:"}; 
A_GISVEC(A68_VC ,ZQTACTR,YQTACTR,15)
static A68_64   GRTACTR = {"double "}; 
A_GISVEC(A68_VC ,HRTACTR,GRTACTR,7)
static A68_188   NRTACTR = {"/*"}; 
static A68_188   ORTACTR = {"*/"}; 
A_GISVEC(A68_VC ,PRTACTR,NRTACTR,2)
A_GISVEC(A68_VC ,QRTACTR,ORTACTR,2)
static A68_200   TRTACTR = {""}; 
A_GISVEC(A68_VC ,URTACTR,TRTACTR,0)
static A68_64   ZRTACTR = {"A_ROUND"}; 
A_GISVEC(A68_VC ,HSTACTR,ZRTACTR,7)
static A68_203   SSTACTR = {" incorrect mode:"}; 
A_GISVEC(A68_VC ,TSTACTR,SSTACTR,16)
static A68_64   DTTACTR = {"double "}; 
A_GISVEC(A68_VC ,ETTACTR,DTTACTR,7)
static A68_188   NTTACTR = {"/*"}; 
static A68_188   OTTACTR = {"*/"}; 
A_GISVEC(A68_VC ,PTTACTR,NTTACTR,2)
A_GISVEC(A68_VC ,QTTACTR,OTTACTR,2)
static A68_200   TTTACTR = {""}; 
A_GISVEC(A68_VC ,UTTACTR,TTTACTR,0)
static A68_205   ZTTACTR = {"A_ENTIER"}; 
A_GISVEC(A68_VC ,IUTACTR,ZTTACTR,8)
static A68_181   CVTACTR = {"A_COMPL_RE"}; 
A_GISVEC(A68_VC ,EVTACTR,CVTACTR,10)
static A68_181   KVTACTR = {"A_COMPL_IM"}; 
A_GISVEC(A68_VC ,MVTACTR,KVTACTR,10)
static A68_184   UVTACTR = {"A_COMPL_ARG"}; 
A_GISVEC(A68_VC ,YVTACTR,UVTACTR,11)
static A68_40   HWTACTR = {"CONJ"}; 
A_GISVEC(A68_VC ,IWTACTR,HWTACTR,4)
static A68_196   MWTACTR = {"A_COMPL_CONJ"}; 
A_GISVEC(A68_VC ,SWTACTR,MWTACTR,12)
static A68_208  SXTACTR_monadicsemantics;
static A68_186   MYTACTR = {" L op"}; 
A_GISVEC(A68_VC ,NYTACTR,MYTACTR,5)
static A68_186   PYTACTR = {" R op"}; 
A_GISVEC(A68_VC ,QYTACTR,PYTACTR,5)
static A68_188   FZTACTR = {" 1"}; 
A_GISVEC(A68_VC ,GZTACTR,FZTACTR,2)
static A68_188   KZTACTR = {" 2"}; 
A_GISVEC(A68_VC ,LZTACTR,KZTACTR,2)
static A68_205   BAUACTR = {"A_C_PLUS"}; 
A_GISVEC(A68_VC ,DAUACTR,BAUACTR,8)
static A68_196   JAUACTR = {"A_COMPL_PLUS"}; 
A_GISVEC(A68_VC ,KAUACTR,JAUACTR,12)
static A68_212   NAUACTR = {"A_VC_PLUS"}; 
A_GISVEC(A68_VC ,OAUACTR,NAUACTR,9)
static A68_212   QAUACTR = {"A_RC_PLUS"}; 
A_GISVEC(A68_VC ,RAUACTR,QAUACTR,9)
static A68_194   FBUACTR = {"A_COMPL_MINUS"}; 
A_GISVEC(A68_VC ,GBUACTR,FBUACTR,13)
static A68_186   VBUACTR = {".dim["}; 
static A68_205   WBUACTR = {" -1].upb"}; 
A_GISVEC(A68_VC ,YBUACTR,VBUACTR,5)
A_GISVEC(A68_VC ,ACUACTR,WBUACTR,8)
static A68_186   LCUACTR = {".dim["}; 
static A68_205   MCUACTR = {" -1].lwb"}; 
A_GISVEC(A68_VC ,OCUACTR,LCUACTR,5)
A_GISVEC(A68_VC ,QCUACTR,MCUACTR,8)
static A68_193   JDUACTR = {"ADICOPS - AND "}; 
A_GISVEC(A68_VC ,KDUACTR,JDUACTR,14)
static A68_194   CEUACTR = {"ADICOPS - OR "}; 
A_GISVEC(A68_VC ,DEUACTR,CEUACTR,13)
static A68_213   NEUACTR = {"ADICOPS < or >: illegal op number"}; 
A_GISVEC(A68_VC ,OEUACTR,NEUACTR,33)
static A68_188   REUACTR = {"LT"}; 
A_GISVEC(A68_VC ,TEUACTR,REUACTR,2)
static A68_188   UEUACTR = {"GT"}; 
A_GISVEC(A68_VC ,VEUACTR,UEUACTR,2)
static A68_213   WEUACTR = {"ADICOPS < or >: illegal op number"}; 
A_GISVEC(A68_VC ,XEUACTR,WEUACTR,33)
static A68_186   HFUACTR = {"A_VC_"}; 
A_GISVEC(A68_VC ,IFUACTR,HFUACTR,5)
static A68_186   KFUACTR = {"A_RC_"}; 
A_GISVEC(A68_VC ,LFUACTR,KFUACTR,5)
static A68_188   WFUACTR = {"<="}; 
A_GISVEC(A68_VC ,YFUACTR,WFUACTR,2)
static A68_188   ZFUACTR = {">="}; 
A_GISVEC(A68_VC ,AGUACTR,ZFUACTR,2)
static A68_214   BGUACTR = {"ADICOPS - <= or >= illegal op number"}; 
A_GISVEC(A68_VC ,CGUACTR,BGUACTR,36)
static A68_188   FGUACTR = {"LE"}; 
A_GISVEC(A68_VC ,HGUACTR,FGUACTR,2)
static A68_188   IGUACTR = {"GE"}; 
A_GISVEC(A68_VC ,JGUACTR,IGUACTR,2)
static A68_214   KGUACTR = {"ADICOPS - <= or >= illegal op number"}; 
A_GISVEC(A68_VC ,LGUACTR,KGUACTR,36)
static A68_186   TGUACTR = {"A_LB_"}; 
A_GISVEC(A68_VC ,UGUACTR,TGUACTR,5)
static A68_186   YGUACTR = {"A_VC_"}; 
A_GISVEC(A68_VC ,ZGUACTR,YGUACTR,5)
static A68_186   BHUACTR = {"A_RC_"}; 
A_GISVEC(A68_VC ,CHUACTR,BHUACTR,5)
static A68_188   NHUACTR = {"=="}; 
A_GISVEC(A68_VC ,PHUACTR,NHUACTR,2)
static A68_188   QHUACTR = {"!="}; 
A_GISVEC(A68_VC ,RHUACTR,QHUACTR,2)
static A68_215   SHUACTR = {"ADICOPS - = or /= illegal op number"}; 
A_GISVEC(A68_VC ,THUACTR,SHUACTR,35)
static A68_188   WHUACTR = {"EQ"}; 
A_GISVEC(A68_VC ,YHUACTR,WHUACTR,2)
static A68_188   ZHUACTR = {"NE"}; 
A_GISVEC(A68_VC ,AIUACTR,ZHUACTR,2)
static A68_215   BIUACTR = {"ADICOPS - = or /= illegal op number"}; 
A_GISVEC(A68_VC ,CIUACTR,BIUACTR,35)
static A68_181   KIUACTR = {"A_COMPL_EQ"}; 
A_GISVEC(A68_VC ,MIUACTR,KIUACTR,10)
static A68_184   NIUACTR = {"A_COMPL_NEQ"}; 
A_GISVEC(A68_VC ,OIUACTR,NIUACTR,11)
static A68_186   SIUACTR = {"A_VC_"}; 
A_GISVEC(A68_VC ,TIUACTR,SIUACTR,5)
static A68_186   VIUACTR = {"A_RC_"}; 
A_GISVEC(A68_VC ,WIUACTR,VIUACTR,5)
static A68_212   JJUACTR = {"A_C_TIMES"}; 
A_GISVEC(A68_VC ,LJUACTR,JJUACTR,9)
static A68_212   NJUACTR = {"A_C_TIMES"}; 
A_GISVEC(A68_VC ,OJUACTR,NJUACTR,9)
static A68_194   UJUACTR = {"A_COMPL_TIMES"}; 
A_GISVEC(A68_VC ,VJUACTR,UJUACTR,13)
static A68_181   YJUACTR = {"A_VC_TIMES"}; 
A_GISVEC(A68_VC ,ZJUACTR,YJUACTR,10)
static A68_181   BKUACTR = {"A_VC_TIMES"}; 
A_GISVEC(A68_VC ,CKUACTR,BKUACTR,10)
static A68_181   EKUACTR = {"A_RC_TIMES"}; 
A_GISVEC(A68_VC ,FKUACTR,EKUACTR,10)
static A68_181   HKUACTR = {"A_RC_TIMES"}; 
A_GISVEC(A68_VC ,IKUACTR,HKUACTR,10)
static A68_193   ELUACTR = {"A_COMPL_DIVIDE"}; 
A_GISVEC(A68_VC ,FLUACTR,ELUACTR,14)
static A68_186   KMUACTR = {"A_MOD"}; 
A_GISVEC(A68_VC ,SMUACTR,KMUACTR,5)
static A68_197   ENUACTR = {" incorrect mode"}; 
A_GISVEC(A68_VC ,FNUACTR,ENUACTR,15)
static A68_181   INUACTR = {"A_LI_POWER"}; 
A_GISVEC(A68_VC ,RNUACTR,INUACTR,10)
static A68_181   UNUACTR = {"A_LR_POWER"}; 
A_GISVEC(A68_VC ,DOUACTR,UNUACTR,10)
static A68_194   HOUACTR = {"A_COMPL_POWER"}; 
A_GISVEC(A68_VC ,OOUACTR,HOUACTR,13)
static A68_212   JPUACTR = {"A_COMPL_I"}; 
A_GISVEC(A68_VC ,RPUACTR,JPUACTR,9)
static A68_212   UPUACTR = {"A_COMPL_I"}; 
A_GISVEC(A68_VC ,AQUACTR,UPUACTR,9)
static A68_185   IQUACTR = {"SHL"}; 
A_GISVEC(A68_VC ,KQUACTR,IQUACTR,3)
static A68_185   LQUACTR = {"SHR"}; 
A_GISVEC(A68_VC ,MQUACTR,LQUACTR,3)
static A68_218   NQUACTR = {"ADICOPS SHL or SHR: illegal op number"}; 
A_GISVEC(A68_VC ,OQUACTR,NQUACTR,37)
static A68_188   VQUACTR = {"A_"}; 
A_GISVEC(A68_VC ,WQUACTR,VQUACTR,2)
static A68_187   IRUACTR = {"A_ELEM"}; 
A_GISVEC(A68_VC ,TRUACTR,IRUACTR,6)
static A68_188   YSUACTR = {" ;"}; 
A_GISVEC(A68_VC ,ZSUACTR,YSUACTR,2)
static A68_188   KTUACTR = {"+="}; 
A_GISVEC(A68_VC ,MTUACTR,KTUACTR,2)
static A68_188   OTUACTR = {"+="}; 
A_GISVEC(A68_VC ,PTUACTR,OTUACTR,2)
static A68_193   RTUACTR = {"A_COMPL_PLUSAB"}; 
A_GISVEC(A68_VC ,STUACTR,RTUACTR,14)
static A68_184   WTUACTR = {"A_VC_PLUSAB"}; 
A_GISVEC(A68_VC ,XTUACTR,WTUACTR,11)
static A68_184   ZTUACTR = {"A_RC_PLUSAB"}; 
A_GISVEC(A68_VC ,AUUACTR,ZTUACTR,11)
static A68_221   NUUACTR = {"v1: mode isnt vec[]char,flex vec[]char"}; 
A_GISVEC(A68_VC ,OUUACTR,NUUACTR,38)
static A68_184   PUUACTR = {"A_VC_TOPLUS"}; 
A_GISVEC(A68_VC ,RUUACTR,PUUACTR,11)
static A68_122   TUUACTR = {"v2: mode isnt []char,flex []char"}; 
A_GISVEC(A68_VC ,UUUACTR,TUUACTR,32)
static A68_184   VUUACTR = {"A_RC_TOPLUS"}; 
A_GISVEC(A68_VC ,WUUACTR,VUUACTR,11)
static A68_188   JVUACTR = {"-="}; 
A_GISVEC(A68_VC ,LVUACTR,JVUACTR,2)
static A68_197   NVUACTR = {"A_COMPL_MINUSAB"}; 
A_GISVEC(A68_VC ,OVUACTR,NVUACTR,15)
static A68_188   DWUACTR = {"*="}; 
A_GISVEC(A68_VC ,FWUACTR,DWUACTR,2)
static A68_188   HWUACTR = {"*="}; 
A_GISVEC(A68_VC ,IWUACTR,HWUACTR,2)
static A68_197   KWUACTR = {"A_COMPL_TIMESAB"}; 
A_GISVEC(A68_VC ,LWUACTR,KWUACTR,15)
static A68_196   PWUACTR = {"A_VC_TIMESAB"}; 
A_GISVEC(A68_VC ,QWUACTR,PWUACTR,12)
static A68_196   SWUACTR = {"A_RC_TIMESAB"}; 
A_GISVEC(A68_VC ,TWUACTR,SWUACTR,12)
static A68_188   GXUACTR = {"/="}; 
A_GISVEC(A68_VC ,IXUACTR,GXUACTR,2)
static A68_64   WXUACTR = {"A_MODAB"}; 
A_GISVEC(A68_VC ,XXUACTR,WXUACTR,7)
static A68_188   JYUACTR = {"/="}; 
A_GISVEC(A68_VC ,KYUACTR,JYUACTR,2)
static A68_194   NYUACTR = {"A_COMPL_DIVAB"}; 
A_GISVEC(A68_VC ,OYUACTR,NYUACTR,13)
static A68_188   YYUACTR = {"=="}; 
A_GISVEC(A68_VC ,AZUACTR,YYUACTR,2)
static A68_188   BZUACTR = {"!="}; 
A_GISVEC(A68_VC ,CZUACTR,BZUACTR,2)
static A68_222   DZUACTR = {" illegal op number"}; 
A_GISVEC(A68_VC ,EZUACTR,DZUACTR,18)
static A68_188   LZUACTR = {"!="}; 
A_GISVEC(A68_VC ,MZUACTR,LZUACTR,2)
static A68_188   NZUACTR = {"! "}; 
A_GISVEC(A68_VC ,PZUACTR,NZUACTR,2)
static A68_200   QZUACTR = {""}; 
A_GISVEC(A68_VC ,RZUACTR,QZUACTR,0)
static A68_185   SZUACTR = {"A_R"}; 
A_GISVEC(A68_VC ,UZUACTR,SZUACTR,3)
static A68_185   VZUACTR = {"A_V"}; 
A_GISVEC(A68_VC ,WZUACTR,VZUACTR,3)
static A68_181   XZUACTR = {"STRUCTCOMP"}; 
A_GISVEC(A68_VC ,ZZUACTR,XZUACTR,10)
static A68_223   RBVACTR = {"CYCLE not implemented"}; 
A_GISVEC(A68_VC ,SBVACTR,RBVACTR,21)
static A68_208  YBVACTR_dyadicsemantics;
static A68_208  CCVACTR_dyadicbiopsemantics;

A_STATIC A68_VOID  DITACTR_simplemonop(A68_BOOL  Macro, A68_VC  Oper, A68_55 * Op, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  OITACTR_simpledyop(A68_BOOL  Macro, A68_VC  Oper, A68_55 * Left, A68_55 * Right, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  BJTACTR_monadicplus(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  HJTACTR_monadicminus(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  DKTACTR_monadicupb(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  VKTACTR_monadiclwb(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  MLTACTR_not(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  EMTACTR_abs(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  INTACTR_bin(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  XNTACTR_repr(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  MOTACTR_lengthen(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  CPTACTR_shorten(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  SPTACTR_odd(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  HQTACTR_sign(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  VQTACTR_round(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  PSTACTR_entier(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  QUTACTR_simplemoncomp(A68_VC  Mac, A68_55 * Root, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  BVTACTR_re(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  JVTACTR_im(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  RVTACTR_arg(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  FWTACTR_conj(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A68_VOID  VXTACTR_monadicsem(A68_55 * Root, A68_62  Rator, A68_55  *ReturnedValue);

A_STATIC A68_VOID  LYTACTR_complexop(A68_124  Modes, A68_VC  Op, A68_VC  Name, A68_55 * Left, A68_55 * Right, A68_BOOL  Lval, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  YZTACTR_dyadicplus(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  BBUACTR_dyadicminus(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  RBUACTR_dyadicupb(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  HCUACTR_dyadiclwb(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  XCUACTR_and(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  QDUACTR_or(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  JEUACTR_lessnotless(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  VFUACTR_lesseqgreatereq(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  MHUACTR_eqnoteq(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  GJUACTR_times(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  SKUACTR_divide(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  QLUACTR_over(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  CMUACTR_mod(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  ANUACTR_power(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  VOUACTR_castvalue(A68_INT  Mode, A68_55 * Value, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  CPUACTR_imaginary(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  HQUACTR_shiftleftright(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  ERUACTR_elem(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_BITS  CSUACTR_abattribute(A68_BOOL  Noref, A68_55 * Op);

A_STATIC A68_VOID  JSUACTR_simpleabop(A68_BOOL  Noref, A68_BOOL  Macro, A68_VC  Oper, A68_55 * Left, A68_55 * Right, A68_56  *ReturnedValue);

A_STATIC A68_VOID  GTUACTR_plusab(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  JUUACTR_plusto(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  FVUACTR_minusab(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  ZVUACTR_timesab(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  CXUACTR_overab(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  RXUACTR_modab(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  EYUACTR_divab(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  XYUACTR_isisnt(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  QBVACTR_anonymous(A68_55 * V, A68_INT  I, A68_INT  J, A68_55  *ReturnedValue);

A68_VOID  FCVACTR_dyadicsem(A68_55 * Root, A68_62  Rator, A68_55  *ReturnedValue);

A_STATIC A68_VOID  DITACTR_simplemonop(A68_BOOL  Macro, A68_VC  Oper, A68_55 * Op, A68_VC  *ReturnedValue)
{ 
A68_VC  EITACTR;  /* clause result */
A68_168  FITACTR;  /* OPERATORS - mode -> union mode */
A68_171  GITACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  HITACTR;  /* avoid structure result */
A68_VC  IITACTR;  /* avoid structure result */
A68_VC  JITACTR;  /* avoid structure result */
A_PROC_ENTRY(simplemonop);
 /* line 85: */
 /* line 86: */
if ( Macro )
{ 
 /* line 87: */
NLQACTR_usemacro( Oper, A_HVEC(GITACTR,A_UNITE(FITACTR,mode1,1,Op),A68_168 ), &HITACTR );
EITACTR = HITACTR;
} 
else
{ 
 /* line 88: */
WAQACTR_bracketcfragment( Op, &IITACTR );
JIAACTR_bracket( A_VC_PLUS(Oper,IITACTR), &JITACTR );
EITACTR = JITACTR;
} 
A_PROC_EXIT(simplemonop);
*ReturnedValue = (EITACTR);
return;
} 
#undef NL
 /* line 91: */

A_STATIC A68_VOID  OITACTR_simpledyop(A68_BOOL  Macro, A68_VC  Oper, A68_55 * Left, A68_55 * Right, A68_VC  *ReturnedValue)
{ 
A68_191  PITACTR;  /* collateral clause result */
A68_168  QITACTR;  /* OPERATORS - mode -> union mode */
A68_168  RITACTR;  /* OPERATORS - mode -> union mode */
A68_VC  SITACTR;  /* clause result */
A68_171  TITACTR;  /* OPERATORS - istruct -> vector */
A68_VC  UITACTR;  /* avoid structure result */
A68_VC  VITACTR;  /* avoid structure result */
A68_VC  WITACTR;  /* avoid structure result */
A68_VC  XITACTR;  /* avoid structure result */
A_PROC_ENTRY(simpledyop);
 /* line 92: */
 /* line 93: */
if ( Macro )
{ 
PITACTR.data[0] = A_UNITE(QITACTR,mode1,1,Left);
PITACTR.data[1] = A_UNITE(RITACTR,mode1,1,Right);
 /* line 94: */
 /* line 95: */
NLQACTR_usemacro( Oper, A_HISVEC(TITACTR,PITACTR,2,A68_168 ), &UITACTR );
SITACTR = UITACTR;
} 
else
{ 
 /* line 96: */
 /* line 97: */
WAQACTR_bracketcfragment( Left, &VITACTR );
WAQACTR_bracketcfragment( Right, &WITACTR );
JIAACTR_bracket( A_VC_PLUS(A_VC_PLUS(VITACTR,Oper),WITACTR), &XITACTR );
SITACTR = XITACTR;
} 
A_PROC_EXIT(simpledyop);
*ReturnedValue = (SITACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  BJTACTR_monadicplus(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * CJTACTR_op;
A68_55  DJTACTR;  /* clause result */
A_PROC_ENTRY(monadicplus);
 /* line 100: */
 /* line 101: */
{ 
ZUQACTR_eval1(Root, (&CJTACTR_op));
 /* line 102: */
DJTACTR = (*CJTACTR_op);
} 
A_PROC_EXIT(monadicplus);
*ReturnedValue = (DJTACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  HJTACTR_monadicminus(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * IJTACTR_op;
A68_55  JJTACTR;  /* collateral clause result */
A68_59  KJTACTR;  /* avoid structure result */
A68_59  LJTACTR_temp;
A68_191  NJTACTR;  /* collateral clause result */
A68_168  OJTACTR;  /* OPERATORS - mode -> union mode */
A68_168  PJTACTR;  /* OPERATORS - mode -> union mode */
A68_55 * QJTACTR;  /* YIELD */
A68_171  RJTACTR;  /* OPERATORS - istruct -> vector */
A68_VC  TJTACTR;  /* avoid structure result */
A68_56  UJTACTR;  /* OPERATORS - mode -> union mode */
A68_VC  VJTACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  WJTACTR;  /* avoid structure result */
A68_VC  XJTACTR;  /* avoid structure result */
A68_56  YJTACTR;  /* OPERATORS - mode -> union mode */
A68_55  ZJTACTR;  /* clause result */
A_PROC_ENTRY(monadicminus);
 /* line 109: */
 /* line 110: */
{ 
ZUQACTR_eval1(Root, (&IJTACTR_op));
 /* line 111: */
 /* line 112: */
JJTACTR.Mode = (*(&(Root->Mode)));
 /* line 113: */
JJTACTR.Info = (A68_BITS )((A68_BITS )((*(&(IJTACTR_op->Info)))&GJJACTR_fxwarn)|AJJACTR_atomic);
 /* line 114: */
if ( (Version==3) )
{ 
A_CALLPROC(TJOACTR_new,((*(&(Root->Mode))), A_VC_PLUS(AGTACTR_qminus,ZHTACTR_qcomplex), &KJTACTR),((*(&(Root->Mode))), A_VC_PLUS(AGTACTR_qminus,ZHTACTR_qcomplex), &KJTACTR,(TJOACTR_new).nonlocals));
LJTACTR_temp = KJTACTR;
 /* line 115: */
NJTACTR.data[0] = A_UNITE(OJTACTR,mode3,3,LJTACTR_temp);
QJTACTR = ENQACTR_yield(A_VC_PLUS(AGTACTR_qminus,ZHTACTR_qcomplex), IJTACTR_op) ;
NJTACTR.data[1] = A_UNITE(PJTACTR,mode1,1,QJTACTR);
 /* line 116: */
NLQACTR_usemacro( SJTACTR, A_HISVEC(RJTACTR,NJTACTR,2,A68_168 ), &TJTACTR );
JJTACTR.Extra = A_UNITE(UJTACTR,mode6,6,TJTACTR);
} 
else
{ 
 /* line 117: */
 /* line 118: */
 /* line 119: */
WAQACTR_bracketcfragment( IJTACTR_op, &WJTACTR );
JIAACTR_bracket( A_VC_PLUS(A_HVEC(VJTACTR,'-',A68_CHAR ),WJTACTR), &XJTACTR );
JJTACTR.Extra = A_UNITE(YJTACTR,mode6,6,XJTACTR);
} 
ZJTACTR = JJTACTR;
} 
A_PROC_EXIT(monadicminus);
*ReturnedValue = (ZJTACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  DKTACTR_monadicupb(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * EKTACTR_op;
A68_55  FKTACTR;  /* collateral clause result */
A68_VC  HKTACTR;  /* avoid structure result */
A68_56  JKTACTR;  /* OPERATORS - mode -> union mode */
A68_VC  KKTACTR;  /* YIELD */
A68_VC  MKTACTR;  /* avoid structure result */
A68_56  OKTACTR;  /* OPERATORS - mode -> union mode */
A68_VC  PKTACTR;  /* YIELD */
A68_56  QKTACTR;  /* OPERATORS - skip to mode */
A68_55  RKTACTR;  /* clause result */
A_PROC_ENTRY(monadicupb);
 /* line 125: */
 /* line 126: */
{ 
ZUQACTR_eval1(Root, (&EKTACTR_op));
 /* line 127: */
 /* line 128: */
FKTACTR.Mode = (*(&(Root->Mode)));
 /* line 129: */
FKTACTR.Info = (A68_BITS )((A68_BITS )((*(&(EKTACTR_op->Info)))&GJJACTR_fxwarn)|AJJACTR_atomic);
 /* line 130: */
if ( ((Version==1)|(Version==3)) )
{ 
 /* line 131: */
WAQACTR_bracketcfragment( EKTACTR_op, &HKTACTR );
KKTACTR = A_VC_PLUS(HKTACTR,IKTACTR) ;
FKTACTR.Extra = A_UNITE(JKTACTR,mode6,6,KKTACTR);
} 
else
{ 
 /* line 132: */
if ( (Version==2) )
{ 
 /* line 133: */
WAQACTR_bracketcfragment( EKTACTR_op, &MKTACTR );
PKTACTR = A_VC_PLUS(MKTACTR,NKTACTR) ;
FKTACTR.Extra = A_UNITE(OKTACTR,mode6,6,PKTACTR);
} 
else
{ 
PXIACTR_assert(A_VC_PLUS(RETACTR_qmupb,LETACTR_qvfault), A68_FALSE);
 /* line 134: */
 /* line 135: */
 /* line 136: */
FKTACTR.Extra = QKTACTR;
} 
} 
RKTACTR = FKTACTR;
} 
A_PROC_EXIT(monadicupb);
*ReturnedValue = (RKTACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  VKTACTR_monadiclwb(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * WKTACTR_op;
A68_55  XKTACTR;  /* collateral clause result */
A68_56  ALTACTR;  /* OPERATORS - mode -> union mode */
A68_VC  BLTACTR;  /* YIELD */
A68_VC  DLTACTR;  /* avoid structure result */
A68_56  FLTACTR;  /* OPERATORS - mode -> union mode */
A68_VC  GLTACTR;  /* YIELD */
A68_56  HLTACTR;  /* OPERATORS - skip to mode */
A68_55  ILTACTR;  /* clause result */
A_PROC_ENTRY(monadiclwb);
 /* line 142: */
 /* line 143: */
{ 
ZUQACTR_eval1(Root, (&WKTACTR_op));
 /* line 144: */
 /* line 145: */
XKTACTR.Mode = (*(&(Root->Mode)));
 /* line 146: */
XKTACTR.Info = (A68_BITS )((A68_BITS )((*(&(WKTACTR_op->Info)))&GJJACTR_fxwarn)|AJJACTR_atomic);
 /* line 147: */
 /* line 148: */
if ( ((Version==1)|(Version==3)) )
{ 
BLTACTR = ZKTACTR ;
XKTACTR.Extra = A_UNITE(ALTACTR,mode6,6,BLTACTR);
} 
else
{ 
 /* line 149: */
if ( (Version==2) )
{ 
 /* line 150: */
WAQACTR_bracketcfragment( WKTACTR_op, &DLTACTR );
GLTACTR = A_VC_PLUS(DLTACTR,ELTACTR) ;
XKTACTR.Extra = A_UNITE(FLTACTR,mode6,6,GLTACTR);
} 
else
{ 
PXIACTR_assert(A_VC_PLUS(UETACTR_qmlwb,LETACTR_qvfault), A68_FALSE);
 /* line 151: */
 /* line 152: */
 /* line 153: */
XKTACTR.Extra = HLTACTR;
} 
} 
ILTACTR = XKTACTR;
} 
A_PROC_EXIT(monadiclwb);
*ReturnedValue = (ILTACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  MLTACTR_not(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * NLTACTR_op;
A68_55  OLTACTR;  /* collateral clause result */
A68_VC  PLTACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  QLTACTR;  /* avoid structure result */
A68_56  RLTACTR;  /* OPERATORS - mode -> union mode */
A68_VC  SLTACTR;  /* YIELD */
A68_VC  TLTACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  ULTACTR;  /* avoid structure result */
A68_56  VLTACTR;  /* OPERATORS - mode -> union mode */
A68_VC  WLTACTR;  /* YIELD */
A68_56  ZLTACTR;  /* OPERATORS - skip to mode */
A68_55  AMTACTR;  /* clause result */
A_PROC_ENTRY(not);
 /* line 160: */
 /* line 161: */
{ 
ZUQACTR_eval1(Root, (&NLTACTR_op));
 /* line 162: */
 /* line 163: */
OLTACTR.Mode = (*(&(Root->Mode)));
 /* line 164: */
OLTACTR.Info = (A68_BITS )((A68_BITS )((*(&(NLTACTR_op->Info)))&GJJACTR_fxwarn)|AJJACTR_atomic);
 /* line 165: */
switch ( Version )
{ 
case 1: 
 /* line 166: */
WAQACTR_bracketcfragment( NLTACTR_op, &QLTACTR );
SLTACTR = A_VC_PLUS(A_HVEC(PLTACTR,'!',A68_CHAR ),QLTACTR) ;
OLTACTR.Extra = A_UNITE(RLTACTR,mode6,6,SLTACTR);
break;
case 2: 
 /* line 167: */
WAQACTR_bracketcfragment( NLTACTR_op, &ULTACTR );
WLTACTR = A_VC_PLUS(A_HVEC(TLTACTR,'~',A68_CHAR ),ULTACTR) ;
OLTACTR.Extra = A_UNITE(VLTACTR,mode6,6,WLTACTR);
break;
default: 
PXIACTR_assert(A_VC_PLUS(YLTACTR,LETACTR_qvfault), A68_FALSE);
 /* line 168: */
 /* line 169: */
 /* line 170: */
OLTACTR.Extra = ZLTACTR;
break;
} 
AMTACTR = OLTACTR;
} 
A_PROC_EXIT(not);
*ReturnedValue = (AMTACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  EMTACTR_abs(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * FMTACTR_op;
A68_VC  GMTACTR;  /* clause result */
A68_VC  HMTACTR;  /* avoid structure result */
A68_VC  IMTACTR;  /* avoid structure result */
A68_VC  LMTACTR;  /* avoid structure result */
A68_VC  MMTACTR;  /* avoid structure result */
A68_VC  NMTACTR;  /* avoid structure result */
A68_VC  SMTACTR;  /* avoid structure result */
A68_VC  XMTACTR;  /* avoid structure result */
A68_VC  ANTACTR;  /* avoid structure result */
A68_VC  BNTACTR_body;
A68_55  CNTACTR;  /* collateral clause result */
A68_56  DNTACTR;  /* OPERATORS - mode -> union mode */
A68_55  ENTACTR;  /* clause result */
A_PROC_ENTRY(abs);
 /* line 180: */
 /* line 181: */
{ 
ZUQACTR_eval1(Root, (&FMTACTR_op));
 /* line 182: */
 /* line 183: */
 /* line 184: */
switch ( Version )
{ 
case 1: 
 /* line 185: */
PWPACTR_getcfragment( FMTACTR_op, &HMTACTR );
JIAACTR_bracket( HMTACTR, &IMTACTR );
GMTACTR = IMTACTR;
break;
case 2: 
 /* line 186: */
WAQACTR_bracketcfragment( FMTACTR_op, &LMTACTR );
GMTACTR = A_VC_PLUS(KMTACTR,LMTACTR);
break;
case 3: 
 /* line 187: */
OJNACTR_cast( (*(&(Root->Mode))), &MMTACTR );
WAQACTR_bracketcfragment( FMTACTR_op, &NMTACTR );
GMTACTR = A_VC_PLUS(MMTACTR,NMTACTR);
break;
case 4: 
 /* line 188: */
DITACTR_simplemonop( A68_TRUE, RMTACTR, ENQACTR_yield(A_VC_PLUS(XETACTR_qabs,QMTACTR), FMTACTR_op), &SMTACTR );
GMTACTR = SMTACTR;
break;
case 5: 
 /* line 189: */
DITACTR_simplemonop( A68_TRUE, WMTACTR, ENQACTR_yield(A_VC_PLUS(XETACTR_qabs,VMTACTR), FMTACTR_op), &XMTACTR );
GMTACTR = XMTACTR;
break;
case 6: 
 /* line 190: */
DITACTR_simplemonop( A68_TRUE, ZMTACTR, ENQACTR_yield(A_VC_PLUS(XETACTR_qabs,ZHTACTR_qcomplex), FMTACTR_op), &ANTACTR );
GMTACTR = ANTACTR;
break;
default: 
A_IMP_SKIP ;
break;
} 
BNTACTR_body = GMTACTR;
 /* line 191: */
CNTACTR.Mode = (*(&(Root->Mode)));
CNTACTR.Info = (A68_BITS )((A68_BITS )((*(&(FMTACTR_op->Info)))&GJJACTR_fxwarn)|AJJACTR_atomic);
 /* line 192: */
CNTACTR.Extra = A_UNITE(DNTACTR,mode6,6,BNTACTR_body);
ENTACTR = CNTACTR;
} 
A_PROC_EXIT(abs);
*ReturnedValue = (ENTACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  INTACTR_bin(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55  JNTACTR;  /* clause result */
A68_55  KNTACTR;  /* avoid structure result */
A68_55 * LNTACTR_op;
A68_55  MNTACTR;  /* collateral clause result */
A68_VC  NNTACTR;  /* avoid structure result */
A68_VC  ONTACTR;  /* avoid structure result */
A68_56  PNTACTR;  /* OPERATORS - mode -> union mode */
A68_VC  QNTACTR;  /* YIELD */
A68_56  TNTACTR;  /* OPERATORS - skip to mode */
A_PROC_ENTRY(bin);
 /* line 198: */
 /* line 199: */
 /* line 200: */
 /* line 201: */
if ( (Version==3) )
{ 
 /* line 202: */
 /* line 203: */
SYSACTR_biop99( Root, &KNTACTR );
JNTACTR = KNTACTR;
} 
else
{ 
ZUQACTR_eval1(Root, (&LNTACTR_op));
 /* line 204: */
 /* line 205: */
MNTACTR.Mode = (*(&(Root->Mode)));
 /* line 206: */
MNTACTR.Info = (A68_BITS )((A68_BITS )((*(&(LNTACTR_op->Info)))&GJJACTR_fxwarn)|AJJACTR_atomic);
 /* line 207: */
if ( (Version==1) )
{ 
 /* line 208: */
OJNACTR_cast( ((*(&(LNTACTR_op->Mode)))-4), &NNTACTR );
WAQACTR_bracketcfragment( LNTACTR_op, &ONTACTR );
QNTACTR = A_VC_PLUS(NNTACTR,ONTACTR) ;
MNTACTR.Extra = A_UNITE(PNTACTR,mode6,6,QNTACTR);
} 
else
{ 
PXIACTR_assert(A_VC_PLUS(SNTACTR,LETACTR_qvfault), A68_FALSE);
 /* line 209: */
 /* line 210: */
 /* line 211: */
MNTACTR.Extra = TNTACTR;
} 
JNTACTR = MNTACTR;
} 
A_PROC_EXIT(bin);
*ReturnedValue = (JNTACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  XNTACTR_repr(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * YNTACTR_op;
A68_55  ZNTACTR;  /* collateral clause result */
A68_VC  COTACTR;  /* avoid structure result */
A68_56  DOTACTR;  /* OPERATORS - mode -> union mode */
A68_VC  EOTACTR;  /* YIELD */
A68_56  HOTACTR;  /* OPERATORS - skip to mode */
A68_55  IOTACTR;  /* clause result */
A_PROC_ENTRY(repr);
 /* line 217: */
 /* line 218: */
{ 
ZUQACTR_eval1(Root, (&YNTACTR_op));
 /* line 219: */
 /* line 220: */
ZNTACTR.Mode = (*(&(Root->Mode)));
 /* line 221: */
ZNTACTR.Info = (A68_BITS )((A68_BITS )((*(&(YNTACTR_op->Info)))&GJJACTR_fxwarn)|AJJACTR_atomic);
 /* line 224: */
if ( (Version==1) )
{ 
 /* line 225: */
WAQACTR_bracketcfragment( YNTACTR_op, &COTACTR );
EOTACTR = A_VC_PLUS(BOTACTR,COTACTR) ;
ZNTACTR.Extra = A_UNITE(DOTACTR,mode6,6,EOTACTR);
} 
else
{ 
PXIACTR_assert(A_VC_PLUS(GOTACTR,LETACTR_qvfault), A68_FALSE);
 /* line 226: */
 /* line 227: */
 /* line 228: */
ZNTACTR.Extra = HOTACTR;
} 
IOTACTR = ZNTACTR;
} 
A_PROC_EXIT(repr);
*ReturnedValue = (IOTACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  MOTACTR_lengthen(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * NOTACTR_op;
A68_INT  OOTACTR_m;
A68_BOOL  QOTACTR;  /* optbool result */
A68_VC  SOTACTR;  /* avoid structure result */
A68_55  TOTACTR;  /* collateral clause result */
A68_VC  UOTACTR;  /* avoid structure result */
A68_VC  VOTACTR;  /* avoid structure result */
A68_56  WOTACTR;  /* OPERATORS - mode -> union mode */
A68_VC  XOTACTR;  /* YIELD */
A68_55  YOTACTR;  /* clause result */
A_PROC_ENTRY(lengthen);
 /* line 231: */
 /* line 232: */
{ 
ZUQACTR_eval1(Root, (&NOTACTR_op));
 /* line 233: */
OOTACTR_m = (*(&(NOTACTR_op->Mode)));
 /* line 234: */
 /* line 235: */
QOTACTR = (OOTACTR_m!=13);
if ( QOTACTR )
{QOTACTR = (OOTACTR_m!=17);
}
if ( QOTACTR )
{QOTACTR = (OOTACTR_m!=21);
}
if ( QOTACTR )
{QOTACTR = (OOTACTR_m!=25);
}
ROAAOSF_whole( OOTACTR_m, 0, &SOTACTR );
PXIACTR_assert(A_VC_PLUS(ROTACTR,SOTACTR), QOTACTR);
 /* line 236: */
 /* line 237: */
TOTACTR.Mode = (*(&(Root->Mode)));
 /* line 238: */
TOTACTR.Info = (A68_BITS )((A68_BITS )((*(&(NOTACTR_op->Info)))&GJJACTR_fxwarn)|AJJACTR_atomic);
 /* line 239: */
 /* line 240: */
OJNACTR_cast( (OOTACTR_m+1), &UOTACTR );
WAQACTR_bracketcfragment( NOTACTR_op, &VOTACTR );
XOTACTR = A_VC_PLUS(UOTACTR,VOTACTR) ;
TOTACTR.Extra = A_UNITE(WOTACTR,mode6,6,XOTACTR);
YOTACTR = TOTACTR;
} 
A_PROC_EXIT(lengthen);
*ReturnedValue = (YOTACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  CPTACTR_shorten(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * DPTACTR_op;
A68_INT  EPTACTR_m;
A68_BOOL  GPTACTR;  /* optbool result */
A68_VC  IPTACTR;  /* avoid structure result */
A68_55  JPTACTR;  /* collateral clause result */
A68_VC  KPTACTR;  /* avoid structure result */
A68_VC  LPTACTR;  /* avoid structure result */
A68_56  MPTACTR;  /* OPERATORS - mode -> union mode */
A68_VC  NPTACTR;  /* YIELD */
A68_55  OPTACTR;  /* clause result */
A_PROC_ENTRY(shorten);
 /* line 243: */
 /* line 244: */
{ 
ZUQACTR_eval1(Root, (&DPTACTR_op));
 /* line 245: */
EPTACTR_m = (*(&(DPTACTR_op->Mode)));
 /* line 246: */
 /* line 247: */
GPTACTR = (EPTACTR_m!=10);
if ( GPTACTR )
{GPTACTR = (EPTACTR_m!=14);
}
if ( GPTACTR )
{GPTACTR = (EPTACTR_m!=18);
}
if ( GPTACTR )
{GPTACTR = (EPTACTR_m!=22);
}
ROAAOSF_whole( EPTACTR_m, 0, &IPTACTR );
PXIACTR_assert(A_VC_PLUS(HPTACTR,IPTACTR), GPTACTR);
 /* line 248: */
 /* line 249: */
JPTACTR.Mode = (*(&(Root->Mode)));
 /* line 250: */
JPTACTR.Info = (A68_BITS )((A68_BITS )((*(&(DPTACTR_op->Info)))&GJJACTR_fxwarn)|AJJACTR_atomic);
 /* line 251: */
 /* line 252: */
OJNACTR_cast( (EPTACTR_m-1), &KPTACTR );
WAQACTR_bracketcfragment( DPTACTR_op, &LPTACTR );
NPTACTR = A_VC_PLUS(KPTACTR,LPTACTR) ;
JPTACTR.Extra = A_UNITE(MPTACTR,mode6,6,NPTACTR);
OPTACTR = JPTACTR;
} 
A_PROC_EXIT(shorten);
*ReturnedValue = (OPTACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  SPTACTR_odd(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * TPTACTR_op;
A68_55  UPTACTR;  /* collateral clause result */
A68_VC  WPTACTR;  /* avoid structure result */
A68_VC  YPTACTR;  /* avoid structure result */
A68_56  ZPTACTR;  /* OPERATORS - mode -> union mode */
A68_56  CQTACTR;  /* OPERATORS - skip to mode */
A68_55  DQTACTR;  /* clause result */
A_PROC_ENTRY(odd);
 /* line 258: */
 /* line 259: */
{ 
ZUQACTR_eval1(Root, (&TPTACTR_op));
 /* line 260: */
 /* line 261: */
UPTACTR.Mode = (*(&(Root->Mode)));
 /* line 262: */
UPTACTR.Info = (A68_BITS )((A68_BITS )((*(&(TPTACTR_op->Info)))&GJJACTR_fxwarn)|AJJACTR_atomic);
 /* line 263: */
if ( (Version==1) )
{ 
 /* line 264: */
WAQACTR_bracketcfragment( TPTACTR_op, &WPTACTR );
JIAACTR_bracket( A_VC_PLUS(WPTACTR,XPTACTR), &YPTACTR );
UPTACTR.Extra = A_UNITE(ZPTACTR,mode6,6,YPTACTR);
} 
else
{ 
PXIACTR_assert(A_VC_PLUS(BQTACTR,LETACTR_qvfault), A68_FALSE);
 /* line 265: */
 /* line 266: */
 /* line 267: */
 /* line 268: */
UPTACTR.Extra = CQTACTR;
} 
DQTACTR = UPTACTR;
} 
A_PROC_EXIT(odd);
*ReturnedValue = (DQTACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  HQTACTR_sign(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * IQTACTR_op;
A68_55  JQTACTR;  /* collateral clause result */
A68_VC  MQTACTR;  /* avoid structure result */
A68_56  NQTACTR;  /* OPERATORS - mode -> union mode */
A68_56  QQTACTR;  /* OPERATORS - skip to mode */
A68_55  RQTACTR;  /* clause result */
A_PROC_ENTRY(sign);
 /* line 275: */
 /* line 276: */
{ 
ZUQACTR_eval1(Root, (&IQTACTR_op));
 /* line 277: */
 /* line 278: */
JQTACTR.Mode = (*(&(Root->Mode)));
 /* line 279: */
JQTACTR.Info = (A68_BITS )((A68_BITS )((*(&(IQTACTR_op->Info)))&GJJACTR_fxwarn)|AJJACTR_atomic);
 /* line 280: */
if ( ((Version==1)|(Version==2)) )
{ 
 /* line 281: */
DITACTR_simplemonop( A68_TRUE, LQTACTR, ENQACTR_yield(GFTACTR_qsign, IQTACTR_op), &MQTACTR );
JQTACTR.Extra = A_UNITE(NQTACTR,mode6,6,MQTACTR);
} 
else
{ 
PXIACTR_assert(A_VC_PLUS(PQTACTR,LETACTR_qvfault), A68_FALSE);
 /* line 282: */
 /* line 283: */
 /* line 284: */
 /* line 285: */
JQTACTR.Extra = QQTACTR;
} 
RQTACTR = JQTACTR;
} 
A_PROC_EXIT(sign);
*ReturnedValue = (RQTACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  VQTACTR_round(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * WQTACTR_op;
A68_INT  XQTACTR_m;
A68_VC  ARTACTR;  /* avoid structure result */
A68_55  BRTACTR;  /* collateral clause result */
A68_VC  CRTACTR;  /* OPERATORS - istruct -> vector */
A68_64  DRTACTR;  /* OPERATORS - istruct -> vector */
A68_VC  ERTACTR_temp1;
A68_201  FRTACTR;  /* collateral clause result */
A68_76  IRTACTR;  /* OPERATORS - mode -> union mode */
A68_VC  JRTACTR;  /* YIELD */
A68_76  KRTACTR;  /* OPERATORS - mode -> union mode */
A68_76  LRTACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  MRTACTR;  /* YIELD */
A68_76  RRTACTR;  /* OPERATORS - mode -> union mode */
A68_VC  SRTACTR;  /* YIELD */
A68_76  VRTACTR;  /* OPERATORS - mode -> union mode */
A68_VC  WRTACTR;  /* YIELD */
A68_76  XRTACTR;  /* OPERATORS - mode -> union mode */
A68_75  YRTACTR;  /* OPERATORS - istruct -> vector */
A68_202  ASTACTR;  /* collateral clause result */
A68_168  BSTACTR;  /* OPERATORS - mode -> union mode */
A68_168  CSTACTR;  /* OPERATORS - mode -> union mode */
A68_55 * DSTACTR;  /* YIELD */
A68_VC  ESTACTR;  /* avoid structure result */
A68_168  FSTACTR;  /* OPERATORS - mode -> union mode */
A68_171  GSTACTR;  /* OPERATORS - istruct -> vector */
A68_VC  ISTACTR;  /* avoid structure result */
A68_56  JSTACTR;  /* OPERATORS - mode -> union mode */
A68_56  KSTACTR;  /* OPERATORS - skip to mode */
A68_55  LSTACTR;  /* clause result */
A_PROC_ENTRY(round);
 /* line 295: */
 /* line 296: */
{ 
ZUQACTR_eval1(Root, (&WQTACTR_op));
 /* line 297: */
XQTACTR_m = (*(&(WQTACTR_op->Mode)));
 /* line 298: */
 /* line 299: */
ROAAOSF_whole( XQTACTR_m, 0, &ARTACTR );
PXIACTR_assert(A_VC_PLUS(A_VC_PLUS(AFTACTR_qround,ZQTACTR),ARTACTR), ((XQTACTR_m<=21)&(XQTACTR_m>=18)));
 /* line 300: */
 /* line 301: */
BRTACTR.Mode = (*(&(Root->Mode)));
 /* line 302: */
BRTACTR.Info = (A68_BITS )((A68_BITS )((*(&(WQTACTR_op->Info)))&GJJACTR_fxwarn)|AJJACTR_atomic);
 /* line 303: */
if ( (Version==1) )
{ 
DRTACTR = ZGMACTR_newuniquename() ;
ERTACTR_temp1 = A_HISVEC(CRTACTR,DRTACTR,7,A68_CHAR );
 /* line 304: */
 /* line 305: */
JRTACTR = HRTACTR ;
FRTACTR.data[0] = A_UNITE(IRTACTR,mode2,2,JRTACTR);
FRTACTR.data[1] = A_UNITE(KRTACTR,mode2,2,ERTACTR_temp1);
 /* line 306: */
MRTACTR = ';' ;
FRTACTR.data[2] = A_UNITE(LRTACTR,mode1,1,MRTACTR);
if ( AQIACTR_verboseoption )
{ 
SRTACTR = A_VC_PLUS(A_VC_PLUS(PRTACTR,AFTACTR_qround),QRTACTR) ;
FRTACTR.data[3] = A_UNITE(RRTACTR,mode2,2,SRTACTR);
} 
else
{ 
 /* line 307: */
WRTACTR = URTACTR ;
FRTACTR.data[3] = A_UNITE(VRTACTR,mode2,2,WRTACTR);
} 
FRTACTR.data[4] = A_UNITE(XRTACTR,mode4,4,EIAACTR_cnewline);
 /* line 308: */
VBMACTR_writecstream(A_HISVEC(YRTACTR,FRTACTR,5,A68_76 ), ZQLACTR_locdecstream(EQLACTR_currentlevel()));
 /* line 309: */
ASTACTR.data[0] = A_UNITE(BSTACTR,mode2,2,ERTACTR_temp1);
DSTACTR = ENQACTR_yield(AFTACTR_qround, WQTACTR_op) ;
ASTACTR.data[1] = A_UNITE(CSTACTR,mode1,1,DSTACTR);
OJNACTR_cast( (XQTACTR_m-4), &ESTACTR );
ASTACTR.data[2] = A_UNITE(FSTACTR,mode2,2,ESTACTR);
 /* line 310: */
NLQACTR_usemacro( HSTACTR, A_HISVEC(GSTACTR,ASTACTR,3,A68_168 ), &ISTACTR );
BRTACTR.Extra = A_UNITE(JSTACTR,mode6,6,ISTACTR);
} 
else
{ 
PXIACTR_assert(A_VC_PLUS(AFTACTR_qround,LETACTR_qvfault), A68_FALSE);
 /* line 311: */
 /* line 312: */
 /* line 313: */
 /* line 314: */
BRTACTR.Extra = KSTACTR;
} 
LSTACTR = BRTACTR;
} 
A_PROC_EXIT(round);
*ReturnedValue = (LSTACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  PSTACTR_entier(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * QSTACTR_op;
A68_INT  RSTACTR_m;
A68_VC  USTACTR;  /* avoid structure result */
A68_55  VSTACTR;  /* collateral clause result */
A68_VC  WSTACTR;  /* OPERATORS - istruct -> vector */
A68_64  XSTACTR;  /* OPERATORS - istruct -> vector */
A68_VC  YSTACTR_temp1;
A68_VC  ZSTACTR;  /* OPERATORS - istruct -> vector */
A68_64  ATTACTR;  /* OPERATORS - istruct -> vector */
A68_VC  BTTACTR_temp2;
A68_204  CTTACTR;  /* collateral clause result */
A68_76  FTTACTR;  /* OPERATORS - mode -> union mode */
A68_VC  GTTACTR;  /* YIELD */
A68_76  HTTACTR;  /* OPERATORS - mode -> union mode */
A68_76  ITTACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  JTTACTR;  /* YIELD */
A68_76  KTTACTR;  /* OPERATORS - mode -> union mode */
A68_76  LTTACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  MTTACTR;  /* YIELD */
A68_76  RTTACTR;  /* OPERATORS - mode -> union mode */
A68_VC  STTACTR;  /* YIELD */
A68_76  VTTACTR;  /* OPERATORS - mode -> union mode */
A68_VC  WTTACTR;  /* YIELD */
A68_76  XTTACTR;  /* OPERATORS - mode -> union mode */
A68_75  YTTACTR;  /* OPERATORS - istruct -> vector */
A68_206  AUTACTR;  /* collateral clause result */
A68_168  BUTACTR;  /* OPERATORS - mode -> union mode */
A68_168  CUTACTR;  /* OPERATORS - mode -> union mode */
A68_168  DUTACTR;  /* OPERATORS - mode -> union mode */
A68_55 * EUTACTR;  /* YIELD */
A68_VC  FUTACTR;  /* avoid structure result */
A68_168  GUTACTR;  /* OPERATORS - mode -> union mode */
A68_171  HUTACTR;  /* OPERATORS - istruct -> vector */
A68_VC  JUTACTR;  /* avoid structure result */
A68_56  KUTACTR;  /* OPERATORS - mode -> union mode */
A68_56  LUTACTR;  /* OPERATORS - skip to mode */
A68_55  MUTACTR;  /* clause result */
A_PROC_ENTRY(entier);
 /* line 326: */
 /* line 327: */
{ 
ZUQACTR_eval1(Root, (&QSTACTR_op));
 /* line 328: */
RSTACTR_m = (*(&(QSTACTR_op->Mode)));
 /* line 329: */
 /* line 330: */
ROAAOSF_whole( RSTACTR_m, 0, &USTACTR );
PXIACTR_assert(A_VC_PLUS(A_VC_PLUS(DFTACTR_qentier,TSTACTR),USTACTR), ((RSTACTR_m<=21)&(RSTACTR_m>=18)));
 /* line 331: */
 /* line 332: */
VSTACTR.Mode = (*(&(Root->Mode)));
 /* line 333: */
VSTACTR.Info = (A68_BITS )((A68_BITS )((*(&(QSTACTR_op->Info)))&GJJACTR_fxwarn)|AJJACTR_atomic);
 /* line 334: */
if ( (Version==1) )
{ 
XSTACTR = ZGMACTR_newuniquename() ;
YSTACTR_temp1 = A_HISVEC(WSTACTR,XSTACTR,7,A68_CHAR );
 /* line 335: */
ATTACTR = ZGMACTR_newuniquename() ;
BTTACTR_temp2 = A_HISVEC(ZSTACTR,ATTACTR,7,A68_CHAR );
 /* line 336: */
 /* line 337: */
GTTACTR = ETTACTR ;
CTTACTR.data[0] = A_UNITE(FTTACTR,mode2,2,GTTACTR);
CTTACTR.data[1] = A_UNITE(HTTACTR,mode2,2,YSTACTR_temp1);
JTTACTR = ',' ;
CTTACTR.data[2] = A_UNITE(ITTACTR,mode1,1,JTTACTR);
CTTACTR.data[3] = A_UNITE(KTTACTR,mode2,2,BTTACTR_temp2);
 /* line 338: */
MTTACTR = ';' ;
CTTACTR.data[4] = A_UNITE(LTTACTR,mode1,1,MTTACTR);
if ( AQIACTR_verboseoption )
{ 
STTACTR = A_VC_PLUS(A_VC_PLUS(PTTACTR,DFTACTR_qentier),QTTACTR) ;
CTTACTR.data[5] = A_UNITE(RTTACTR,mode2,2,STTACTR);
} 
else
{ 
 /* line 339: */
WTTACTR = UTTACTR ;
CTTACTR.data[5] = A_UNITE(VTTACTR,mode2,2,WTTACTR);
} 
CTTACTR.data[6] = A_UNITE(XTTACTR,mode4,4,EIAACTR_cnewline);
 /* line 340: */
VBMACTR_writecstream(A_HISVEC(YTTACTR,CTTACTR,7,A68_76 ), ZQLACTR_locdecstream(EQLACTR_currentlevel()));
 /* line 341: */
AUTACTR.data[0] = A_UNITE(BUTACTR,mode2,2,YSTACTR_temp1);
AUTACTR.data[1] = A_UNITE(CUTACTR,mode2,2,BTTACTR_temp2);
EUTACTR = ENQACTR_yield(DFTACTR_qentier, QSTACTR_op) ;
AUTACTR.data[2] = A_UNITE(DUTACTR,mode1,1,EUTACTR);
OJNACTR_cast( (RSTACTR_m-4), &FUTACTR );
AUTACTR.data[3] = A_UNITE(GUTACTR,mode2,2,FUTACTR);
 /* line 342: */
NLQACTR_usemacro( IUTACTR, A_HISVEC(HUTACTR,AUTACTR,4,A68_168 ), &JUTACTR );
VSTACTR.Extra = A_UNITE(KUTACTR,mode6,6,JUTACTR);
} 
else
{ 
PXIACTR_assert(A_VC_PLUS(DFTACTR_qentier,LETACTR_qvfault), A68_FALSE);
 /* line 343: */
 /* line 344: */
 /* line 345: */
VSTACTR.Extra = LUTACTR;
} 
MUTACTR = VSTACTR;
} 
A_PROC_EXIT(entier);
*ReturnedValue = (MUTACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  QUTACTR_simplemoncomp(A68_VC  Mac, A68_55 * Root, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * RUTACTR_op;
A68_55  SUTACTR;  /* collateral clause result */
A68_168  TUTACTR;  /* OPERATORS - mode -> union mode */
A68_171  UUTACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  VUTACTR;  /* avoid structure result */
A68_56  WUTACTR;  /* OPERATORS - mode -> union mode */
A68_55  XUTACTR;  /* clause result */
A_PROC_ENTRY(simplemoncomp);
 /* line 349: */
 /* line 350: */
{ 
ZUQACTR_eval1(Root, (&RUTACTR_op));
 /* line 351: */
 /* line 352: */
SUTACTR.Mode = (*(&(Root->Mode)));
 /* line 353: */
SUTACTR.Info = (A68_BITS )((A68_BITS )((*(&(RUTACTR_op->Info)))&GJJACTR_fxwarn)|AJJACTR_atomic);
 /* line 354: */
 /* line 355: */
NLQACTR_usemacro( Mac, A_HVEC(UUTACTR,A_UNITE(TUTACTR,mode1,1,RUTACTR_op),A68_168 ), &VUTACTR );
SUTACTR.Extra = A_UNITE(WUTACTR,mode6,6,VUTACTR);
XUTACTR = SUTACTR;
} 
A_PROC_EXIT(simplemoncomp);
*ReturnedValue = (XUTACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  BVTACTR_re(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55  DVTACTR;  /* clause result */
A68_55  FVTACTR;  /* avoid structure result */
A_PROC_ENTRY(re);
 /* line 360: */
QUTACTR_simplemoncomp( EVTACTR, Root, Version, &FVTACTR );
DVTACTR = FVTACTR;
A_PROC_EXIT(re);
*ReturnedValue = (DVTACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  JVTACTR_im(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55  LVTACTR;  /* clause result */
A68_55  NVTACTR;  /* avoid structure result */
A_PROC_ENTRY(im);
 /* line 364: */
QUTACTR_simplemoncomp( MVTACTR, Root, Version, &NVTACTR );
LVTACTR = NVTACTR;
A_PROC_EXIT(im);
*ReturnedValue = (LVTACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  RVTACTR_arg(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * SVTACTR_op;
A68_55  TVTACTR;  /* collateral clause result */
A68_168  VVTACTR;  /* OPERATORS - mode -> union mode */
A68_55 * WVTACTR;  /* YIELD */
A68_171  XVTACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  ZVTACTR;  /* avoid structure result */
A68_56  AWTACTR;  /* OPERATORS - mode -> union mode */
A68_55  BWTACTR;  /* clause result */
A_PROC_ENTRY(arg);
 /* line 370: */
 /* line 371: */
{ 
ZUQACTR_eval1(Root, (&SVTACTR_op));
 /* line 372: */
 /* line 373: */
TVTACTR.Mode = (*(&(Root->Mode)));
 /* line 374: */
TVTACTR.Info = (A68_BITS )((A68_BITS )((*(&(SVTACTR_op->Info)))&GJJACTR_fxwarn)|AJJACTR_atomic);
 /* line 375: */
 /* line 376: */
WVTACTR = ENQACTR_yield(PFTACTR_qarg, SVTACTR_op) ;
NLQACTR_usemacro( YVTACTR, A_HVEC(XVTACTR,A_UNITE(VVTACTR,mode1,1,WVTACTR),A68_168 ), &ZVTACTR );
TVTACTR.Extra = A_UNITE(AWTACTR,mode6,6,ZVTACTR);
BWTACTR = TVTACTR;
} 
A_PROC_EXIT(arg);
*ReturnedValue = (BWTACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  FWTACTR_conj(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * GWTACTR_op;
A68_59  JWTACTR;  /* avoid structure result */
A68_59  KWTACTR_temp;
A68_55  LWTACTR;  /* collateral clause result */
A68_191  NWTACTR;  /* collateral clause result */
A68_168  OWTACTR;  /* OPERATORS - mode -> union mode */
A68_168  PWTACTR;  /* OPERATORS - mode -> union mode */
A68_55 * QWTACTR;  /* YIELD */
A68_171  RWTACTR;  /* OPERATORS - istruct -> vector */
A68_VC  TWTACTR;  /* avoid structure result */
A68_56  UWTACTR;  /* OPERATORS - mode -> union mode */
A68_55  VWTACTR;  /* clause result */
A_PROC_ENTRY(conj);
 /* line 380: */
 /* line 381: */
{ 
ZUQACTR_eval1(Root, (&GWTACTR_op));
 /* line 382: */
A_CALLPROC(TJOACTR_new,((*(&(GWTACTR_op->Mode))), IWTACTR, &JWTACTR),((*(&(GWTACTR_op->Mode))), IWTACTR, &JWTACTR,(TJOACTR_new).nonlocals));
KWTACTR_temp = JWTACTR;
 /* line 383: */
 /* line 384: */
LWTACTR.Mode = (*(&(Root->Mode)));
 /* line 385: */
LWTACTR.Info = (A68_BITS )((A68_BITS )((*(&(GWTACTR_op->Info)))&GJJACTR_fxwarn)|AJJACTR_atomic);
NWTACTR.data[0] = A_UNITE(OWTACTR,mode3,3,KWTACTR_temp);
QWTACTR = ENQACTR_yield(SFTACTR_qconj, GWTACTR_op) ;
NWTACTR.data[1] = A_UNITE(PWTACTR,mode1,1,QWTACTR);
 /* line 386: */
 /* line 387: */
NLQACTR_usemacro( SWTACTR, A_HISVEC(RWTACTR,NWTACTR,2,A68_168 ), &TWTACTR );
LWTACTR.Extra = A_UNITE(UWTACTR,mode6,6,TWTACTR);
VWTACTR = LWTACTR;
} 
A_PROC_EXIT(conj);
*ReturnedValue = (VWTACTR);
return;
} 
#undef NL

A68_VOID  VXTACTR_monadicsem(A68_55 * Root, A68_62  Rator, A68_55  *ReturnedValue)
{ 
A68_INT  WXTACTR_param;
A68_BOOL  XXTACTR;  /* clause result */
A68_INT  YXTACTR_opnumber;
A68_INT  ZXTACTR;  /* ADICOPS - MOD */
A68_INT  AYTACTR_version;
A68_55  BYTACTR;  /* clause result */
A68_192  CYTACTR;  /* CALL */
A68_55  DYTACTR;  /* avoid structure result */
A68_55  EYTACTR;  /* avoid structure result */
A_PROC_ENTRY(monadicsem);
 /* line 413: */
 /* line 414: */
{ 
WXTACTR_param = (A68_INT )(A68_BITS )((A68_BITS )Rator.Param&ZGAACTR_parammask);
 /* line 415: */
 /* line 416: */
 /* line 417: */
XXTACTR = (WXTACTR_param<RGAACTR_biopnumbersstart);
if ( XXTACTR )
{ 
YXTACTR_opnumber = (WXTACTR_param/SGAACTR_opnumberdivisor);
 /* line 418: */
AYTACTR_version = A_MOD(WXTACTR_param,SGAACTR_opnumberdivisor,ZXTACTR);
 /* line 419: */
 /* line 420: */
 /* line 421: */
CYTACTR = A_R1INDEX(SXTACTR_monadicsemantics,YXTACTR_opnumber) ;
A_CALLPROC(CYTACTR,(Root, YXTACTR_opnumber, AYTACTR_version, &DYTACTR),(Root, YXTACTR_opnumber, AYTACTR_version, &DYTACTR,(CYTACTR).nonlocals));
BYTACTR = DYTACTR;
} 
else
{ 
 /* line 422: */
TDTACTR_monadicbiopsemantics( Root, WXTACTR_param, &EYTACTR );
BYTACTR = EYTACTR;
} 
} 
A_PROC_EXIT(monadicsem);
*ReturnedValue = (BYTACTR);
return;
} 
#undef NL
 /* line 426: */

A_STATIC A68_VOID  LYTACTR_complexop(A68_124  Modes, A68_VC  Op, A68_VC  Name, A68_55 * Left, A68_55 * Right, A68_BOOL  Lval, A68_VC  *ReturnedValue)
{ 
A68_55 * OYTACTR_l;
A68_55 * RYTACTR_r;
A68_191  SYTACTR;  /* collateral clause result */
A68_168  TYTACTR;  /* OPERATORS - mode -> union mode */
A68_168  UYTACTR;  /* OPERATORS - mode -> union mode */
A68_171  VYTACTR;  /* clause result */
A68_171  WYTACTR;  /* OPERATORS - istruct -> vector */
A68_202  XYTACTR;  /* collateral clause result */
A68_INT  YYTACTR;  /* YIELD */
A68_59  ZYTACTR;  /* avoid structure result */
A68_168  AZTACTR;  /* OPERATORS - mode -> union mode */
A68_168  BZTACTR;  /* OPERATORS - mode -> union mode */
A68_168  CZTACTR;  /* OPERATORS - mode -> union mode */
A68_171  DZTACTR;  /* OPERATORS - istruct -> vector */
A68_206  EZTACTR;  /* collateral clause result */
A68_INT  HZTACTR;  /* YIELD */
A68_59  IZTACTR;  /* avoid structure result */
A68_168  JZTACTR;  /* OPERATORS - mode -> union mode */
A68_INT  MZTACTR;  /* YIELD */
A68_59  NZTACTR;  /* avoid structure result */
A68_168  OZTACTR;  /* OPERATORS - mode -> union mode */
A68_168  PZTACTR;  /* OPERATORS - mode -> union mode */
A68_168  QZTACTR;  /* OPERATORS - mode -> union mode */
A68_171  RZTACTR;  /* OPERATORS - istruct -> vector */
A68_171  SZTACTR_params;
A68_VC  TZTACTR;  /* clause result */
A68_VC  UZTACTR;  /* avoid structure result */
A_PROC_ENTRY(complexop);
 /* line 427: */
 /* line 428: */
{ 
OYTACTR_l = ENQACTR_yield(A_VC_PLUS(Name,NYTACTR), Left);
RYTACTR_r = ENQACTR_yield(A_VC_PLUS(Name,QYTACTR), Right);
 /* line 429: */
if ( Lval )
{ 
PKAAOSF_orab((&(OYTACTR_l->Info)), EJJACTR_lvalue);
} 
 /* line 430: */
 /* line 431: */
if ( (Modes.upb==0) )
{ 
SYTACTR.data[0] = A_UNITE(TYTACTR,mode1,1,OYTACTR_l);
 /* line 432: */
SYTACTR.data[1] = A_UNITE(UYTACTR,mode1,1,RYTACTR_r);
VYTACTR = A_HISVEC(WYTACTR,SYTACTR,2,A68_168 );
} 
else
{ 
if ( (Modes.upb==1) )
{ 
YYTACTR = 1 ;
A_CALLPROC(TJOACTR_new,(A_VINDEX(Modes,YYTACTR), Name, &ZYTACTR),(A_VINDEX(Modes,YYTACTR), Name, &ZYTACTR,(TJOACTR_new).nonlocals));
XYTACTR.data[0] = A_UNITE(AZTACTR,mode3,3,ZYTACTR);
XYTACTR.data[1] = A_UNITE(BZTACTR,mode1,1,OYTACTR_l);
 /* line 433: */
XYTACTR.data[2] = A_UNITE(CZTACTR,mode1,1,RYTACTR_r);
VYTACTR = A_HISVEC(DZTACTR,XYTACTR,3,A68_168 );
} 
else
{ 
HZTACTR = 1 ;
A_CALLPROC(TJOACTR_new,(A_VINDEX(Modes,HZTACTR), A_VC_PLUS(Name,GZTACTR), &IZTACTR),(A_VINDEX(Modes,HZTACTR), A_VC_PLUS(Name,GZTACTR), &IZTACTR,(TJOACTR_new).nonlocals));
EZTACTR.data[0] = A_UNITE(JZTACTR,mode3,3,IZTACTR);
MZTACTR = 2 ;
A_CALLPROC(TJOACTR_new,(A_VINDEX(Modes,MZTACTR), A_VC_PLUS(Name,LZTACTR), &NZTACTR),(A_VINDEX(Modes,MZTACTR), A_VC_PLUS(Name,LZTACTR), &NZTACTR,(TJOACTR_new).nonlocals));
EZTACTR.data[1] = A_UNITE(OZTACTR,mode3,3,NZTACTR);
EZTACTR.data[2] = A_UNITE(PZTACTR,mode1,1,OYTACTR_l);
 /* line 434: */
EZTACTR.data[3] = A_UNITE(QZTACTR,mode1,1,RYTACTR_r);
VYTACTR = A_HISVEC(RZTACTR,EZTACTR,4,A68_168 );
} 
} 
SZTACTR_params = VYTACTR;
 /* line 435: */
 /* line 436: */
NLQACTR_usemacro( Op, SZTACTR_params, &UZTACTR );
TZTACTR = UZTACTR;
} 
A_PROC_EXIT(complexop);
*ReturnedValue = (TZTACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  YZTACTR_dyadicplus(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * ZZTACTR_left;
A68_55 * AAUACTR_right;
A68_VC  CAUACTR;  /* clause result */
A68_VC  EAUACTR;  /* avoid structure result */
A68_VC  FAUACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  GAUACTR;  /* avoid structure result */
A68_VC  HAUACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  IAUACTR;  /* avoid structure result */
A68_124  LAUACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  MAUACTR;  /* avoid structure result */
A68_VC  PAUACTR;  /* avoid structure result */
A68_VC  SAUACTR;  /* avoid structure result */
A68_VC  TAUACTR;  /* OPERATORS - skip to mode */
A68_VC  UAUACTR_body;
A68_55  VAUACTR;  /* collateral clause result */
A68_56  WAUACTR;  /* OPERATORS - mode -> union mode */
A68_55  XAUACTR;  /* clause result */
A_PROC_ENTRY(dyadicplus);
 /* line 440: */
 /* line 441: */
{ 
AWQACTR_eval2(Root, (&ZZTACTR_left), (&AAUACTR_right));
 /* line 442: */
 /* line 443: */
 /* line 444: */
switch ( Version )
{ 
case 1: 
 /* line 445: */
OITACTR_simpledyop( A68_TRUE, DAUACTR, ZZTACTR_left, AAUACTR_right, &EAUACTR );
CAUACTR = EAUACTR;
break;
case 2: 
 /* line 446: */
OITACTR_simpledyop( A68_FALSE, A_HVEC(FAUACTR,'+',A68_CHAR ), ZZTACTR_left, AAUACTR_right, &GAUACTR );
CAUACTR = GAUACTR;
break;
case 3: 
 /* line 447: */
OITACTR_simpledyop( A68_FALSE, A_HVEC(HAUACTR,'+',A68_CHAR ), ZZTACTR_left, AAUACTR_right, &IAUACTR );
CAUACTR = IAUACTR;
break;
case 4: 
 /* line 448: */
 /* line 449: */
LYTACTR_complexop( A_HVEC(LAUACTR,(*(&(Root->Mode))),A68_INT ), KAUACTR, A_VC_PLUS(XFTACTR_qplus,ZHTACTR_qcomplex), ZZTACTR_left, AAUACTR_right, A68_FALSE, &MAUACTR );
CAUACTR = MAUACTR;
break;
case 5: 
 /* line 450: */
OITACTR_simpledyop( A68_TRUE, OAUACTR, ZZTACTR_left, AAUACTR_right, &PAUACTR );
CAUACTR = PAUACTR;
break;
case 6: 
 /* line 451: */
OITACTR_simpledyop( A68_TRUE, RAUACTR, ZZTACTR_left, AAUACTR_right, &SAUACTR );
CAUACTR = SAUACTR;
break;
default: 
PXIACTR_assert(A_VC_PLUS(XFTACTR_qplus,LETACTR_qvfault), A68_FALSE);
 /* line 452: */
CAUACTR = TAUACTR;
break;
} 
UAUACTR_body = CAUACTR;
 /* line 453: */
 /* line 454: */
VAUACTR.Mode = (*(&(Root->Mode)));
 /* line 456: */
VAUACTR.Info = (A68_BITS )((A68_BITS )((A68_BITS )((*(&(ZZTACTR_left->Info)))&GJJACTR_fxwarn)|(A68_BITS )((*(&(AAUACTR_right->Info)))&GJJACTR_fxwarn))|AJJACTR_atomic);
 /* line 457: */
VAUACTR.Extra = A_UNITE(WAUACTR,mode6,6,UAUACTR_body);
XAUACTR = VAUACTR;
} 
A_PROC_EXIT(dyadicplus);
*ReturnedValue = (XAUACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  BBUACTR_dyadicminus(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * CBUACTR_left;
A68_55 * DBUACTR_right;
A68_55  EBUACTR;  /* collateral clause result */
A68_124  HBUACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  IBUACTR;  /* avoid structure result */
A68_56  JBUACTR;  /* OPERATORS - mode -> union mode */
A68_VC  KBUACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  LBUACTR;  /* avoid structure result */
A68_56  MBUACTR;  /* OPERATORS - mode -> union mode */
A68_55  NBUACTR;  /* clause result */
A_PROC_ENTRY(dyadicminus);
 /* line 460: */
 /* line 461: */
{ 
 /* line 462: */
AWQACTR_eval2(Root, (&CBUACTR_left), (&DBUACTR_right));
 /* line 463: */
 /* line 464: */
EBUACTR.Mode = (*(&(Root->Mode)));
 /* line 465: */
EBUACTR.Info = (A68_BITS )((A68_BITS )((A68_BITS )((*(&(CBUACTR_left->Info)))&GJJACTR_fxwarn)|(A68_BITS )((*(&(DBUACTR_right->Info)))&GJJACTR_fxwarn))|AJJACTR_atomic);
 /* line 466: */
if ( (Version==3) )
{ 
 /* line 467: */
 /* line 468: */
LYTACTR_complexop( A_HVEC(HBUACTR,(*(&(Root->Mode))),A68_INT ), GBUACTR, A_VC_PLUS(AGTACTR_qminus,ZHTACTR_qcomplex), CBUACTR_left, DBUACTR_right, A68_FALSE, &IBUACTR );
EBUACTR.Extra = A_UNITE(JBUACTR,mode6,6,IBUACTR);
} 
else
{ 
 /* line 469: */
 /* line 470: */
 /* line 471: */
OITACTR_simpledyop( A68_FALSE, A_HVEC(KBUACTR,'-',A68_CHAR ), CBUACTR_left, DBUACTR_right, &LBUACTR );
EBUACTR.Extra = A_UNITE(MBUACTR,mode6,6,LBUACTR);
} 
NBUACTR = EBUACTR;
} 
A_PROC_EXIT(dyadicminus);
*ReturnedValue = (NBUACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  RBUACTR_dyadicupb(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * SBUACTR_left;
A68_55 * TBUACTR_right;
A68_55  UBUACTR;  /* collateral clause result */
A68_VC  XBUACTR;  /* avoid structure result */
A68_VC  ZBUACTR;  /* avoid structure result */
A68_56  BCUACTR;  /* OPERATORS - mode -> union mode */
A68_VC  CCUACTR;  /* YIELD */
A68_55  DCUACTR;  /* clause result */
A_PROC_ENTRY(dyadicupb);
 /* line 477: */
 /* line 478: */
{ 
AWQACTR_eval2(Root, (&SBUACTR_left), (&TBUACTR_right));
 /* line 479: */
 /* line 480: */
UBUACTR.Mode = (*(&(Root->Mode)));
 /* line 481: */
UBUACTR.Info = (A68_BITS )((A68_BITS )((A68_BITS )((*(&(SBUACTR_left->Info)))&GJJACTR_fxwarn)|(A68_BITS )((*(&(TBUACTR_right->Info)))&GJJACTR_fxwarn))|AJJACTR_atomic);
 /* line 482: */
 /* line 483: */
WAQACTR_bracketcfragment( TBUACTR_right, &XBUACTR );
WAQACTR_bracketcfragment( SBUACTR_left, &ZBUACTR );
CCUACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(XBUACTR,YBUACTR),ZBUACTR),ACUACTR) ;
UBUACTR.Extra = A_UNITE(BCUACTR,mode6,6,CCUACTR);
DCUACTR = UBUACTR;
} 
A_PROC_EXIT(dyadicupb);
*ReturnedValue = (DCUACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  HCUACTR_dyadiclwb(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * ICUACTR_left;
A68_55 * JCUACTR_right;
A68_55  KCUACTR;  /* collateral clause result */
A68_VC  NCUACTR;  /* avoid structure result */
A68_VC  PCUACTR;  /* avoid structure result */
A68_56  RCUACTR;  /* OPERATORS - mode -> union mode */
A68_VC  SCUACTR;  /* YIELD */
A68_55  TCUACTR;  /* clause result */
A_PROC_ENTRY(dyadiclwb);
 /* line 486: */
 /* line 487: */
{ 
AWQACTR_eval2(Root, (&ICUACTR_left), (&JCUACTR_right));
 /* line 488: */
 /* line 489: */
KCUACTR.Mode = (*(&(Root->Mode)));
 /* line 490: */
KCUACTR.Info = (A68_BITS )((A68_BITS )((A68_BITS )((*(&(ICUACTR_left->Info)))&GJJACTR_fxwarn)|(A68_BITS )((*(&(JCUACTR_right->Info)))&GJJACTR_fxwarn))|AJJACTR_atomic);
 /* line 491: */
 /* line 492: */
WAQACTR_bracketcfragment( JCUACTR_right, &NCUACTR );
WAQACTR_bracketcfragment( ICUACTR_left, &PCUACTR );
SCUACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(NCUACTR,OCUACTR),PCUACTR),QCUACTR) ;
KCUACTR.Extra = A_UNITE(RCUACTR,mode6,6,SCUACTR);
TCUACTR = KCUACTR;
} 
A_PROC_EXIT(dyadiclwb);
*ReturnedValue = (TCUACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  XCUACTR_and(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * YCUACTR_left;
A68_55 * ZCUACTR_right;
A68_55  ADUACTR;  /* collateral clause result */
A68_VC  BDUACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  CDUACTR;  /* avoid structure result */
A68_56  DDUACTR;  /* OPERATORS - mode -> union mode */
A68_VC  EDUACTR;  /* avoid structure result */
A68_VC  FDUACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  GDUACTR;  /* avoid structure result */
A68_56  HDUACTR;  /* OPERATORS - mode -> union mode */
A68_VC  IDUACTR;  /* YIELD */
A68_56  LDUACTR;  /* OPERATORS - skip to mode */
A68_55  MDUACTR;  /* clause result */
A_PROC_ENTRY(and);
 /* line 495: */
 /* line 496: */
{ 
 /* line 497: */
AWQACTR_eval2(Root, (&YCUACTR_left), (&ZCUACTR_right));
 /* line 498: */
 /* line 499: */
ADUACTR.Mode = (*(&(Root->Mode)));
 /* line 500: */
ADUACTR.Info = (A68_BITS )((A68_BITS )((A68_BITS )((*(&(YCUACTR_left->Info)))&GJJACTR_fxwarn)|(A68_BITS )((*(&(ZCUACTR_right->Info)))&GJJACTR_fxwarn))|AJJACTR_atomic);
 /* line 501: */
switch ( Version )
{ 
case 1: 
 /* line 502: */
OITACTR_simpledyop( A68_FALSE, A_HVEC(BDUACTR,'&',A68_CHAR ), YCUACTR_left, ZCUACTR_right, &CDUACTR );
ADUACTR.Extra = A_UNITE(DDUACTR,mode6,6,CDUACTR);
break;
case 2: 
 /* line 503: */
OJNACTR_cast( (*(&(Root->Mode))), &EDUACTR );
OITACTR_simpledyop( A68_FALSE, A_HVEC(FDUACTR,'&',A68_CHAR ), YCUACTR_left, ZCUACTR_right, &GDUACTR );
IDUACTR = A_VC_PLUS(EDUACTR,GDUACTR) ;
ADUACTR.Extra = A_UNITE(HDUACTR,mode6,6,IDUACTR);
break;
default: 
PXIACTR_assert(A_VC_PLUS(KDUACTR,LETACTR_qvfault), A68_FALSE);
 /* line 504: */
 /* line 505: */
 /* line 506: */
ADUACTR.Extra = LDUACTR;
break;
} 
MDUACTR = ADUACTR;
} 
A_PROC_EXIT(and);
*ReturnedValue = (MDUACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  QDUACTR_or(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * RDUACTR_left;
A68_55 * SDUACTR_right;
A68_55  TDUACTR;  /* collateral clause result */
A68_VC  UDUACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  VDUACTR;  /* avoid structure result */
A68_56  WDUACTR;  /* OPERATORS - mode -> union mode */
A68_VC  XDUACTR;  /* avoid structure result */
A68_VC  YDUACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  ZDUACTR;  /* avoid structure result */
A68_56  AEUACTR;  /* OPERATORS - mode -> union mode */
A68_VC  BEUACTR;  /* YIELD */
A68_56  EEUACTR;  /* OPERATORS - skip to mode */
A68_55  FEUACTR;  /* clause result */
A_PROC_ENTRY(or);
 /* line 509: */
 /* line 510: */
{ 
AWQACTR_eval2(Root, (&RDUACTR_left), (&SDUACTR_right));
 /* line 511: */
 /* line 512: */
TDUACTR.Mode = (*(&(Root->Mode)));
 /* line 513: */
TDUACTR.Info = (A68_BITS )((A68_BITS )((A68_BITS )((*(&(RDUACTR_left->Info)))&GJJACTR_fxwarn)|(A68_BITS )((*(&(SDUACTR_right->Info)))&GJJACTR_fxwarn))|AJJACTR_atomic);
 /* line 514: */
switch ( Version )
{ 
case 1: 
 /* line 515: */
OITACTR_simpledyop( A68_FALSE, A_HVEC(UDUACTR,'|',A68_CHAR ), RDUACTR_left, SDUACTR_right, &VDUACTR );
TDUACTR.Extra = A_UNITE(WDUACTR,mode6,6,VDUACTR);
break;
case 2: 
 /* line 516: */
OJNACTR_cast( (*(&(Root->Mode))), &XDUACTR );
OITACTR_simpledyop( A68_FALSE, A_HVEC(YDUACTR,'|',A68_CHAR ), RDUACTR_left, SDUACTR_right, &ZDUACTR );
BEUACTR = A_VC_PLUS(XDUACTR,ZDUACTR) ;
TDUACTR.Extra = A_UNITE(AEUACTR,mode6,6,BEUACTR);
break;
default: 
PXIACTR_assert(A_VC_PLUS(DEUACTR,LETACTR_qvfault), A68_FALSE);
 /* line 517: */
 /* line 518: */
 /* line 519: */
TDUACTR.Extra = EEUACTR;
break;
} 
FEUACTR = TDUACTR;
} 
A_PROC_EXIT(or);
*ReturnedValue = (FEUACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  JEUACTR_lessnotless(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_VC  KEUACTR;  /* clause result */
A68_VC  LEUACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  MEUACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  PEUACTR;  /* OPERATORS - skip to mode */
A68_VC  QEUACTR_op;
A68_VC  SEUACTR;  /* clause result */
A68_VC  YEUACTR;  /* OPERATORS - skip to mode */
A68_VC  ZEUACTR_opmacro;
A68_VC  AFUACTR_adic;
A68_55 * BFUACTR_left;
A68_55 * CFUACTR_right;
A68_VC  DFUACTR;  /* clause result */
A68_VC  EFUACTR;  /* avoid structure result */
A68_VC  FFUACTR;  /* avoid structure result */
A68_VC  GFUACTR;  /* avoid structure result */
A68_VC  JFUACTR;  /* avoid structure result */
A68_VC  MFUACTR;  /* avoid structure result */
A68_VC  NFUACTR;  /* OPERATORS - skip to mode */
A68_VC  OFUACTR_body;
A68_55  PFUACTR;  /* collateral clause result */
A68_56  QFUACTR;  /* OPERATORS - mode -> union mode */
A68_55  RFUACTR;  /* clause result */
A_PROC_ENTRY(lessnotless);
 /* line 522: */
 /* line 524: */
{ 
 /* line 525: */
switch ( (Opnumber-5) )
{ 
case 1: 
 /* line 526: */
KEUACTR = A_HVEC(LEUACTR,'<',A68_CHAR );
break;
case 2: 
KEUACTR = A_HVEC(MEUACTR,'>',A68_CHAR );
break;
default: 
PXIACTR_assert(OEUACTR, A68_FALSE);
 /* line 527: */
KEUACTR = PEUACTR;
break;
} 
QEUACTR_op = KEUACTR;
 /* line 528: */
 /* line 529: */
 /* line 530: */
switch ( (Opnumber-5) )
{ 
case 1: 
 /* line 531: */
SEUACTR = TEUACTR;
break;
case 2: 
SEUACTR = VEUACTR;
break;
default: 
PXIACTR_assert(XEUACTR, A68_FALSE);
 /* line 532: */
SEUACTR = YEUACTR;
break;
} 
ZEUACTR_opmacro = SEUACTR;
 /* line 533: */
AFUACTR_adic = A_VC_PLUS(IETACTR_modulename,QEUACTR_op);
 /* line 534: */
AWQACTR_eval2(Root, (&BFUACTR_left), (&CFUACTR_right));
 /* line 535: */
 /* line 536: */
 /* line 537: */
switch ( Version )
{ 
case 1: 
 /* line 538: */
OITACTR_simpledyop( A68_FALSE, QEUACTR_op, BFUACTR_left, CFUACTR_right, &EFUACTR );
DFUACTR = EFUACTR;
break;
case 2: 
 /* line 539: */
OITACTR_simpledyop( A68_FALSE, QEUACTR_op, BFUACTR_left, CFUACTR_right, &FFUACTR );
DFUACTR = FFUACTR;
break;
case 3: 
 /* line 540: */
OITACTR_simpledyop( A68_FALSE, QEUACTR_op, BFUACTR_left, CFUACTR_right, &GFUACTR );
DFUACTR = GFUACTR;
break;
case 4: 
 /* line 541: */
OITACTR_simpledyop( A68_TRUE, A_VC_PLUS(IFUACTR,ZEUACTR_opmacro), BFUACTR_left, CFUACTR_right, &JFUACTR );
DFUACTR = JFUACTR;
break;
case 5: 
 /* line 542: */
OITACTR_simpledyop( A68_TRUE, A_VC_PLUS(LFUACTR,ZEUACTR_opmacro), BFUACTR_left, CFUACTR_right, &MFUACTR );
DFUACTR = MFUACTR;
break;
default: 
PXIACTR_assert(A_VC_PLUS(AFUACTR_adic,LETACTR_qvfault), A68_FALSE);
 /* line 543: */
DFUACTR = NFUACTR;
break;
} 
OFUACTR_body = DFUACTR;
 /* line 544: */
 /* line 545: */
PFUACTR.Mode = (*(&(Root->Mode)));
 /* line 547: */
PFUACTR.Info = (A68_BITS )((A68_BITS )((A68_BITS )((*(&(BFUACTR_left->Info)))&GJJACTR_fxwarn)|(A68_BITS )((*(&(CFUACTR_right->Info)))&GJJACTR_fxwarn))|AJJACTR_atomic);
 /* line 548: */
PFUACTR.Extra = A_UNITE(QFUACTR,mode6,6,OFUACTR_body);
RFUACTR = PFUACTR;
} 
A_PROC_EXIT(lessnotless);
*ReturnedValue = (RFUACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  VFUACTR_lesseqgreatereq(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_VC  XFUACTR;  /* clause result */
A68_VC  DGUACTR;  /* OPERATORS - skip to mode */
A68_VC  EGUACTR_opsymbol;
A68_VC  GGUACTR;  /* clause result */
A68_VC  MGUACTR;  /* OPERATORS - skip to mode */
A68_VC  NGUACTR_macro;
A68_VC  OGUACTR_adic;
A68_55 * PGUACTR_left;
A68_55 * QGUACTR_right;
A68_VC  RGUACTR;  /* clause result */
A68_VC  SGUACTR;  /* avoid structure result */
A68_VC  VGUACTR;  /* avoid structure result */
A68_VC  WGUACTR;  /* avoid structure result */
A68_VC  XGUACTR;  /* avoid structure result */
A68_VC  AHUACTR;  /* avoid structure result */
A68_VC  DHUACTR;  /* avoid structure result */
A68_VC  EHUACTR;  /* OPERATORS - skip to mode */
A68_VC  FHUACTR_body;
A68_55  GHUACTR;  /* collateral clause result */
A68_56  HHUACTR;  /* OPERATORS - mode -> union mode */
A68_55  IHUACTR;  /* clause result */
A_PROC_ENTRY(lesseqgreatereq);
 /* line 552: */
 /* line 554: */
{ 
 /* line 555: */
switch ( (Opnumber-7) )
{ 
case 1: 
 /* line 556: */
XFUACTR = YFUACTR;
break;
case 2: 
XFUACTR = AGUACTR;
break;
default: 
PXIACTR_assert(CGUACTR, A68_FALSE);
 /* line 557: */
XFUACTR = DGUACTR;
break;
} 
EGUACTR_opsymbol = XFUACTR;
 /* line 558: */
 /* line 559: */
 /* line 560: */
switch ( (Opnumber-7) )
{ 
case 1: 
 /* line 561: */
GGUACTR = HGUACTR;
break;
case 2: 
GGUACTR = JGUACTR;
break;
default: 
PXIACTR_assert(LGUACTR, A68_FALSE);
 /* line 562: */
GGUACTR = MGUACTR;
break;
} 
NGUACTR_macro = GGUACTR;
 /* line 563: */
OGUACTR_adic = A_VC_PLUS(IETACTR_modulename,EGUACTR_opsymbol);
 /* line 564: */
AWQACTR_eval2(Root, (&PGUACTR_left), (&QGUACTR_right));
 /* line 565: */
 /* line 566: */
 /* line 567: */
switch ( Version )
{ 
case 1: 
 /* line 569: */
OITACTR_simpledyop( A68_FALSE, EGUACTR_opsymbol, PGUACTR_left, QGUACTR_right, &SGUACTR );
RGUACTR = SGUACTR;
break;
case 2: 
 /* line 570: */
OITACTR_simpledyop( A68_TRUE, A_VC_PLUS(UGUACTR,NGUACTR_macro), ENQACTR_yield(OGUACTR_adic, PGUACTR_left), ENQACTR_yield(OGUACTR_adic, QGUACTR_right), &VGUACTR );
RGUACTR = VGUACTR;
break;
case 3: 
 /* line 571: */
OITACTR_simpledyop( A68_FALSE, EGUACTR_opsymbol, PGUACTR_left, QGUACTR_right, &WGUACTR );
RGUACTR = WGUACTR;
break;
case 4: 
 /* line 572: */
OITACTR_simpledyop( A68_FALSE, EGUACTR_opsymbol, PGUACTR_left, QGUACTR_right, &XGUACTR );
RGUACTR = XGUACTR;
break;
case 5: 
 /* line 573: */
OITACTR_simpledyop( A68_TRUE, A_VC_PLUS(ZGUACTR,NGUACTR_macro), PGUACTR_left, QGUACTR_right, &AHUACTR );
RGUACTR = AHUACTR;
break;
case 6: 
 /* line 574: */
OITACTR_simpledyop( A68_TRUE, A_VC_PLUS(CHUACTR,NGUACTR_macro), PGUACTR_left, QGUACTR_right, &DHUACTR );
RGUACTR = DHUACTR;
break;
default: 
PXIACTR_assert(A_VC_PLUS(OGUACTR_adic,LETACTR_qvfault), A68_FALSE);
 /* line 575: */
RGUACTR = EHUACTR;
break;
} 
FHUACTR_body = RGUACTR;
 /* line 576: */
 /* line 577: */
GHUACTR.Mode = (*(&(Root->Mode)));
 /* line 579: */
GHUACTR.Info = (A68_BITS )((A68_BITS )((A68_BITS )((*(&(PGUACTR_left->Info)))&GJJACTR_fxwarn)|(A68_BITS )((*(&(QGUACTR_right->Info)))&GJJACTR_fxwarn))|AJJACTR_atomic);
 /* line 580: */
GHUACTR.Extra = A_UNITE(HHUACTR,mode6,6,FHUACTR_body);
IHUACTR = GHUACTR;
} 
A_PROC_EXIT(lesseqgreatereq);
*ReturnedValue = (IHUACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  MHUACTR_eqnoteq(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_VC  OHUACTR;  /* clause result */
A68_VC  UHUACTR;  /* OPERATORS - skip to mode */
A68_VC  VHUACTR_op;
A68_VC  XHUACTR;  /* clause result */
A68_VC  DIUACTR;  /* OPERATORS - skip to mode */
A68_VC  EIUACTR_opmacro;
A68_VC  FIUACTR_adic;
A68_55 * GIUACTR_left;
A68_55 * HIUACTR_right;
A68_VC  IIUACTR;  /* clause result */
A68_VC  JIUACTR;  /* avoid structure result */
A68_VC  LIUACTR;  /* clause result */
A68_VC  PIUACTR_opmacro;
A68_124  QIUACTR;  /* OPERATORS - vacuum */
A68_VC  RIUACTR;  /* avoid structure result */
A68_VC  UIUACTR;  /* avoid structure result */
A68_VC  XIUACTR;  /* avoid structure result */
A68_VC  YIUACTR;  /* OPERATORS - skip to mode */
A68_VC  ZIUACTR_body;
A68_55  AJUACTR;  /* collateral clause result */
A68_56  BJUACTR;  /* OPERATORS - mode -> union mode */
A68_55  CJUACTR;  /* clause result */
A_PROC_ENTRY(eqnoteq);
 /* line 583: */
 /* line 585: */
{ 
 /* line 586: */
switch ( (Opnumber-9) )
{ 
case 1: 
 /* line 587: */
OHUACTR = PHUACTR;
break;
case 2: 
OHUACTR = RHUACTR;
break;
default: 
PXIACTR_assert(THUACTR, A68_FALSE);
 /* line 588: */
OHUACTR = UHUACTR;
break;
} 
VHUACTR_op = OHUACTR;
 /* line 589: */
 /* line 590: */
 /* line 591: */
switch ( (Opnumber-9) )
{ 
case 1: 
 /* line 592: */
XHUACTR = YHUACTR;
break;
case 2: 
XHUACTR = AIUACTR;
break;
default: 
PXIACTR_assert(CIUACTR, A68_FALSE);
 /* line 593: */
XHUACTR = DIUACTR;
break;
} 
EIUACTR_opmacro = XHUACTR;
 /* line 594: */
FIUACTR_adic = A_VC_PLUS(IETACTR_modulename,EIUACTR_opmacro);
 /* line 595: */
 /* line 596: */
AWQACTR_eval2(Root, (&GIUACTR_left), (&HIUACTR_right));
 /* line 597: */
 /* line 598: */
 /* line 599: */
if ( (Version<6) )
{ 
 /* line 601: */
OITACTR_simpledyop( A68_FALSE, VHUACTR_op, GIUACTR_left, HIUACTR_right, &JIUACTR );
IIUACTR = JIUACTR;
} 
else
{ 
 /* line 602: */
if ( (Version==6) )
{ 
 /* line 603: */
if ( (Opnumber==10) )
{ 
 /* line 604: */
LIUACTR = MIUACTR;
} 
else
{ 
LIUACTR = OIUACTR;
} 
PIUACTR_opmacro = LIUACTR;
 /* line 605: */
 /* line 606: */
 /* line 607: */
LYTACTR_complexop( A_VVAC(QIUACTR), PIUACTR_opmacro, A_VC_PLUS(A_VC_PLUS(IETACTR_modulename,VHUACTR_op),ZHTACTR_qcomplex), GIUACTR_left, HIUACTR_right, A68_FALSE, &RIUACTR );
IIUACTR = RIUACTR;
} 
else
{ 
 /* line 608: */
if ( (Version==7) )
{ 
 /* line 610: */
OITACTR_simpledyop( A68_TRUE, A_VC_PLUS(TIUACTR,EIUACTR_opmacro), GIUACTR_left, HIUACTR_right, &UIUACTR );
IIUACTR = UIUACTR;
} 
else
{ 
 /* line 611: */
if ( (Version==8) )
{ 
 /* line 612: */
OITACTR_simpledyop( A68_TRUE, A_VC_PLUS(WIUACTR,EIUACTR_opmacro), GIUACTR_left, HIUACTR_right, &XIUACTR );
IIUACTR = XIUACTR;
} 
else
{ 
PXIACTR_assert(A_VC_PLUS(FIUACTR_adic,LETACTR_qvfault), A68_FALSE);
 /* line 613: */
IIUACTR = YIUACTR;
} 
} 
} 
} 
ZIUACTR_body = IIUACTR;
 /* line 614: */
 /* line 615: */
AJUACTR.Mode = (*(&(Root->Mode)));
 /* line 617: */
AJUACTR.Info = (A68_BITS )((A68_BITS )((A68_BITS )((*(&(GIUACTR_left->Info)))&GJJACTR_fxwarn)|(A68_BITS )((*(&(HIUACTR_right->Info)))&GJJACTR_fxwarn))|AJJACTR_atomic);
 /* line 618: */
AJUACTR.Extra = A_UNITE(BJUACTR,mode6,6,ZIUACTR_body);
CJUACTR = AJUACTR;
} 
A_PROC_EXIT(eqnoteq);
*ReturnedValue = (CJUACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  GJUACTR_times(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * HJUACTR_left;
A68_55 * IJUACTR_right;
A68_VC  KJUACTR;  /* clause result */
A68_VC  MJUACTR;  /* avoid structure result */
A68_VC  PJUACTR;  /* avoid structure result */
A68_VC  QJUACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  RJUACTR;  /* avoid structure result */
A68_VC  SJUACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  TJUACTR;  /* avoid structure result */
A68_124  WJUACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  XJUACTR;  /* avoid structure result */
A68_VC  AKUACTR;  /* avoid structure result */
A68_VC  DKUACTR;  /* avoid structure result */
A68_VC  GKUACTR;  /* avoid structure result */
A68_VC  JKUACTR;  /* avoid structure result */
A68_VC  KKUACTR;  /* OPERATORS - skip to mode */
A68_VC  LKUACTR_body;
A68_55  MKUACTR;  /* collateral clause result */
A68_56  NKUACTR;  /* OPERATORS - mode -> union mode */
A68_55  OKUACTR;  /* clause result */
A_PROC_ENTRY(times);
 /* line 621: */
 /* line 622: */
{ 
AWQACTR_eval2(Root, (&HJUACTR_left), (&IJUACTR_right));
 /* line 623: */
 /* line 624: */
 /* line 625: */
switch ( Version )
{ 
case 1: 
 /* line 626: */
if ( FNMACTR_isint((*(&(HJUACTR_left->Mode)))) )
{ 
 /* line 627: */
OITACTR_simpledyop( A68_TRUE, LJUACTR, IJUACTR_right, HJUACTR_left, &MJUACTR );
KJUACTR = MJUACTR;
} 
else
{ 
 /* line 628: */
 /* line 629: */
OITACTR_simpledyop( A68_TRUE, OJUACTR, HJUACTR_left, IJUACTR_right, &PJUACTR );
KJUACTR = PJUACTR;
} 
break;
case 2: 
 /* line 630: */
OITACTR_simpledyop( A68_FALSE, A_HVEC(QJUACTR,'*',A68_CHAR ), HJUACTR_left, IJUACTR_right, &RJUACTR );
KJUACTR = RJUACTR;
break;
case 3: 
 /* line 631: */
OITACTR_simpledyop( A68_FALSE, A_HVEC(SJUACTR,'*',A68_CHAR ), HJUACTR_left, IJUACTR_right, &TJUACTR );
KJUACTR = TJUACTR;
break;
case 4: 
 /* line 632: */
 /* line 633: */
LYTACTR_complexop( A_HVEC(WJUACTR,(*(&(Root->Mode))),A68_INT ), VJUACTR, A_VC_PLUS(DGTACTR_qtimes,ZHTACTR_qcomplex), HJUACTR_left, IJUACTR_right, A68_FALSE, &XJUACTR );
KJUACTR = XJUACTR;
break;
case 5: 
 /* line 634: */
if ( FNMACTR_isint((*(&(HJUACTR_left->Mode)))) )
{ 
 /* line 635: */
OITACTR_simpledyop( A68_TRUE, ZJUACTR, IJUACTR_right, HJUACTR_left, &AKUACTR );
KJUACTR = AKUACTR;
} 
else
{ 
 /* line 636: */
 /* line 637: */
OITACTR_simpledyop( A68_TRUE, CKUACTR, HJUACTR_left, IJUACTR_right, &DKUACTR );
KJUACTR = DKUACTR;
} 
break;
case 6: 
 /* line 638: */
if ( FNMACTR_isint((*(&(HJUACTR_left->Mode)))) )
{ 
 /* line 639: */
OITACTR_simpledyop( A68_TRUE, FKUACTR, IJUACTR_right, HJUACTR_left, &GKUACTR );
KJUACTR = GKUACTR;
} 
else
{ 
 /* line 640: */
 /* line 641: */
OITACTR_simpledyop( A68_TRUE, IKUACTR, HJUACTR_left, IJUACTR_right, &JKUACTR );
KJUACTR = JKUACTR;
} 
break;
default: 
PXIACTR_assert(A_VC_PLUS(DGTACTR_qtimes,LETACTR_qvfault), A68_FALSE);
 /* line 642: */
KJUACTR = KKUACTR;
break;
} 
LKUACTR_body = KJUACTR;
 /* line 643: */
 /* line 644: */
MKUACTR.Mode = (*(&(Root->Mode)));
 /* line 646: */
MKUACTR.Info = (A68_BITS )((A68_BITS )((A68_BITS )((*(&(HJUACTR_left->Info)))&GJJACTR_fxwarn)|(A68_BITS )((*(&(IJUACTR_right->Info)))&GJJACTR_fxwarn))|AJJACTR_atomic);
 /* line 647: */
MKUACTR.Extra = A_UNITE(NKUACTR,mode6,6,LKUACTR_body);
OKUACTR = MKUACTR;
} 
A_PROC_EXIT(times);
*ReturnedValue = (OKUACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  SKUACTR_divide(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * TKUACTR_left;
A68_55 * UKUACTR_right;
A68_VC  VKUACTR;  /* avoid structure result */
A68_VC  WKUACTR_widen;
A68_VC  XKUACTR;  /* clause result */
A68_VC  YKUACTR;  /* avoid structure result */
A68_VC  ZKUACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  ALUACTR;  /* avoid structure result */
A68_VC  BLUACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  CLUACTR;  /* avoid structure result */
A68_216  DLUACTR;  /* collateral clause result */
A68_124  GLUACTR;  /* OPERATORS - istruct -> vector */
A68_VC  HLUACTR;  /* avoid structure result */
A68_VC  ILUACTR;  /* OPERATORS - skip to mode */
A68_VC  JLUACTR_body;
A68_55  KLUACTR;  /* collateral clause result */
A68_56  LLUACTR;  /* OPERATORS - mode -> union mode */
A68_55  MLUACTR;  /* clause result */
A_PROC_ENTRY(divide);
 /* line 650: */
 /* line 651: */
{ 
AWQACTR_eval2(Root, (&TKUACTR_left), (&UKUACTR_right));
 /* line 652: */
 /* line 653: */
 /* line 654: */
switch ( Version )
{ 
case 1: 
 /* line 655: */
{ 
OJNACTR_cast( ((*(&(TKUACTR_left->Mode)))+4), &VKUACTR );
WKUACTR_widen = VKUACTR;
 /* line 656: */
 /* line 657: */
 /* line 658: */
 /* line 659: */
WAQACTR_bracketcfragment( TKUACTR_left, &YKUACTR );
WAQACTR_bracketcfragment( UKUACTR_right, &ALUACTR );
XKUACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(WKUACTR_widen,YKUACTR),A_HVEC(ZKUACTR,'/',A68_CHAR )),WKUACTR_widen),ALUACTR);
} 
break;
case 2: 
 /* line 660: */
OITACTR_simpledyop( A68_FALSE, A_HVEC(BLUACTR,'/',A68_CHAR ), TKUACTR_left, UKUACTR_right, &CLUACTR );
XKUACTR = CLUACTR;
break;
case 3: 
DLUACTR.data[0] = (*(&(Root->Mode)));
DLUACTR.data[1] = ((*(&(Root->Mode)))-4);
 /* line 661: */
 /* line 662: */
 /* line 663: */
LYTACTR_complexop( A_HISVEC(GLUACTR,DLUACTR,2,A68_INT ), FLUACTR, A_VC_PLUS(GGTACTR_qdiv,ZHTACTR_qcomplex), TKUACTR_left, UKUACTR_right, A68_FALSE, &HLUACTR );
XKUACTR = HLUACTR;
break;
default: 
{ 
PXIACTR_assert(A_VC_PLUS(GGTACTR_qdiv,LETACTR_qvfault), A68_FALSE);
 /* line 664: */
XKUACTR = ILUACTR;
} 
break;
} 
JLUACTR_body = XKUACTR;
 /* line 665: */
 /* line 666: */
KLUACTR.Mode = (*(&(Root->Mode)));
 /* line 668: */
KLUACTR.Info = (A68_BITS )((A68_BITS )((A68_BITS )((*(&(TKUACTR_left->Info)))&GJJACTR_fxwarn)|(A68_BITS )((*(&(UKUACTR_right->Info)))&GJJACTR_fxwarn))|AJJACTR_atomic);
 /* line 669: */
KLUACTR.Extra = A_UNITE(LLUACTR,mode6,6,JLUACTR_body);
MLUACTR = KLUACTR;
} 
A_PROC_EXIT(divide);
*ReturnedValue = (MLUACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  QLUACTR_over(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * RLUACTR_left;
A68_55 * SLUACTR_right;
A68_55  TLUACTR;  /* collateral clause result */
A68_VC  ULUACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  VLUACTR;  /* avoid structure result */
A68_56  WLUACTR;  /* OPERATORS - mode -> union mode */
A68_56  XLUACTR;  /* OPERATORS - skip to mode */
A68_55  YLUACTR;  /* clause result */
A_PROC_ENTRY(over);
 /* line 672: */
 /* line 673: */
{ 
AWQACTR_eval2(Root, (&RLUACTR_left), (&SLUACTR_right));
 /* line 674: */
 /* line 675: */
TLUACTR.Mode = (*(&(Root->Mode)));
 /* line 676: */
TLUACTR.Info = (A68_BITS )((A68_BITS )((A68_BITS )((*(&(RLUACTR_left->Info)))&GJJACTR_fxwarn)|(A68_BITS )((*(&(SLUACTR_right->Info)))&GJJACTR_fxwarn))|AJJACTR_atomic);
 /* line 677: */
if ( (Version==1) )
{ 
 /* line 678: */
OITACTR_simpledyop( A68_FALSE, A_HVEC(ULUACTR,'/',A68_CHAR ), RLUACTR_left, SLUACTR_right, &VLUACTR );
TLUACTR.Extra = A_UNITE(WLUACTR,mode6,6,VLUACTR);
} 
else
{ 
PXIACTR_assert(A_VC_PLUS(JGTACTR_qover,LETACTR_qvfault), A68_FALSE);
 /* line 679: */
 /* line 680: */
 /* line 681: */
TLUACTR.Extra = XLUACTR;
} 
YLUACTR = TLUACTR;
} 
A_PROC_EXIT(over);
*ReturnedValue = (YLUACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  CMUACTR_mod(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * DMUACTR_left;
A68_55 * EMUACTR_right;
A68_55  FMUACTR;  /* collateral clause result */
A68_59  GMUACTR;  /* avoid structure result */
A68_VC  HMUACTR;  /* OPERATORS - istruct -> vector */
A68_64  IMUACTR;  /* OPERATORS - istruct -> vector */
A68_VC  JMUACTR_temp;
A68_202  LMUACTR;  /* collateral clause result */
A68_168  MMUACTR;  /* OPERATORS - mode -> union mode */
A68_55 * NMUACTR;  /* YIELD */
A68_168  OMUACTR;  /* OPERATORS - mode -> union mode */
A68_55 * PMUACTR;  /* YIELD */
A68_168  QMUACTR;  /* OPERATORS - mode -> union mode */
A68_171  RMUACTR;  /* OPERATORS - istruct -> vector */
A68_VC  TMUACTR;  /* avoid structure result */
A68_56  UMUACTR;  /* OPERATORS - mode -> union mode */
A68_56  VMUACTR;  /* OPERATORS - skip to mode */
A68_55  WMUACTR;  /* clause result */
A_PROC_ENTRY(mod);
 /* line 684: */
 /* line 685: */
{ 
 /* line 686: */
AWQACTR_eval2(Root, (&DMUACTR_left), (&EMUACTR_right));
 /* line 687: */
 /* line 688: */
FMUACTR.Mode = (*(&(Root->Mode)));
 /* line 689: */
FMUACTR.Info = (A68_BITS )((A68_BITS )((A68_BITS )((*(&(DMUACTR_left->Info)))&GJJACTR_fxwarn)|(A68_BITS )((*(&(EMUACTR_right->Info)))&GJJACTR_fxwarn))|AJJACTR_atomic);
 /* line 690: */
if ( (Version==1) )
{ 
UIOACTR_declarectemporary( (*(&(DMUACTR_left->Mode))), MGTACTR_qmod, &GMUACTR );
IMUACTR = GMUACTR.Name ;
JMUACTR_temp = A_HISVEC(HMUACTR,IMUACTR,7,A68_CHAR );
 /* line 691: */
NMUACTR = ENQACTR_yield(MGTACTR_qmod, DMUACTR_left) ;
LMUACTR.data[0] = A_UNITE(MMUACTR,mode1,1,NMUACTR);
PMUACTR = ENQACTR_yield(MGTACTR_qmod, EMUACTR_right) ;
LMUACTR.data[1] = A_UNITE(OMUACTR,mode1,1,PMUACTR);
LMUACTR.data[2] = A_UNITE(QMUACTR,mode2,2,JMUACTR_temp);
 /* line 692: */
NLQACTR_usemacro( SMUACTR, A_HISVEC(RMUACTR,LMUACTR,3,A68_168 ), &TMUACTR );
FMUACTR.Extra = A_UNITE(UMUACTR,mode6,6,TMUACTR);
} 
else
{ 
PXIACTR_assert(A_VC_PLUS(MGTACTR_qmod,LETACTR_qvfault), A68_FALSE);
 /* line 693: */
 /* line 694: */
 /* line 695: */
FMUACTR.Extra = VMUACTR;
} 
WMUACTR = FMUACTR;
} 
A_PROC_EXIT(mod);
*ReturnedValue = (WMUACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  ANUACTR_power(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * BNUACTR_left;
A68_55 * CNUACTR_right;
A68_INT  DNUACTR_m;
A68_VC  GNUACTR;  /* avoid structure result */
A68_55  HNUACTR;  /* collateral clause result */
A68_202  JNUACTR;  /* collateral clause result */
A68_168  KNUACTR;  /* OPERATORS - mode -> union mode */
A68_55 * LNUACTR;  /* YIELD */
A68_168  MNUACTR;  /* OPERATORS - mode -> union mode */
A68_55 * NNUACTR;  /* YIELD */
A68_VC  ONUACTR;  /* avoid structure result */
A68_168  PNUACTR;  /* OPERATORS - mode -> union mode */
A68_171  QNUACTR;  /* OPERATORS - istruct -> vector */
A68_VC  SNUACTR;  /* avoid structure result */
A68_56  TNUACTR;  /* OPERATORS - mode -> union mode */
A68_202  VNUACTR;  /* collateral clause result */
A68_168  WNUACTR;  /* OPERATORS - mode -> union mode */
A68_55 * XNUACTR;  /* YIELD */
A68_168  YNUACTR;  /* OPERATORS - mode -> union mode */
A68_55 * ZNUACTR;  /* YIELD */
A68_VC  AOUACTR;  /* avoid structure result */
A68_168  BOUACTR;  /* OPERATORS - mode -> union mode */
A68_171  COUACTR;  /* OPERATORS - istruct -> vector */
A68_VC  EOUACTR;  /* avoid structure result */
A68_56  FOUACTR;  /* OPERATORS - mode -> union mode */
A68_VC  GOUACTR_name;
A68_191  IOUACTR;  /* collateral clause result */
A68_168  JOUACTR;  /* OPERATORS - mode -> union mode */
A68_55 * KOUACTR;  /* YIELD */
A68_168  LOUACTR;  /* OPERATORS - mode -> union mode */
A68_55 * MOUACTR;  /* YIELD */
A68_171  NOUACTR;  /* OPERATORS - istruct -> vector */
A68_VC  POUACTR;  /* avoid structure result */
A68_56  QOUACTR;  /* OPERATORS - mode -> union mode */
A68_56  ROUACTR;  /* OPERATORS - skip to mode */
A68_55  SOUACTR;  /* clause result */
A_PROC_ENTRY(power);
 /* line 698: */
 /* line 699: */
{ 
AWQACTR_eval2(Root, (&BNUACTR_left), (&CNUACTR_right));
 /* line 700: */
DNUACTR_m = (*(&(BNUACTR_left->Mode)));
 /* line 701: */
 /* line 702: */
ROAAOSF_whole( DNUACTR_m, 0, &GNUACTR );
PXIACTR_assert(A_VC_PLUS(A_VC_PLUS(PGTACTR_qpower,FNUACTR),GNUACTR), ((DNUACTR_m<=21)&(DNUACTR_m>=14)));
 /* line 703: */
 /* line 704: */
HNUACTR.Mode = (*(&(Root->Mode)));
 /* line 705: */
HNUACTR.Info = (A68_BITS )((A68_BITS )((A68_BITS )((*(&(BNUACTR_left->Info)))&GJJACTR_fxwarn)|(A68_BITS )((*(&(CNUACTR_right->Info)))&GJJACTR_fxwarn))|AJJACTR_atomic);
 /* line 706: */
 /* line 707: */
if ( (Version==1) )
{ 
LNUACTR = ENQACTR_yield(PGTACTR_qpower, BNUACTR_left) ;
JNUACTR.data[0] = A_UNITE(KNUACTR,mode1,1,LNUACTR);
NNUACTR = ENQACTR_yield(PGTACTR_qpower, CNUACTR_right) ;
JNUACTR.data[1] = A_UNITE(MNUACTR,mode1,1,NNUACTR);
OJNACTR_cast( DNUACTR_m, &ONUACTR );
JNUACTR.data[2] = A_UNITE(PNUACTR,mode2,2,ONUACTR);
 /* line 708: */
NLQACTR_usemacro( RNUACTR, A_HISVEC(QNUACTR,JNUACTR,3,A68_168 ), &SNUACTR );
HNUACTR.Extra = A_UNITE(TNUACTR,mode6,6,SNUACTR);
} 
else
{ 
 /* line 709: */
 /* line 710: */
if ( (Version==2) )
{ 
XNUACTR = ENQACTR_yield(PGTACTR_qpower, BNUACTR_left) ;
VNUACTR.data[0] = A_UNITE(WNUACTR,mode1,1,XNUACTR);
ZNUACTR = ENQACTR_yield(PGTACTR_qpower, CNUACTR_right) ;
VNUACTR.data[1] = A_UNITE(YNUACTR,mode1,1,ZNUACTR);
OJNACTR_cast( DNUACTR_m, &AOUACTR );
VNUACTR.data[2] = A_UNITE(BOUACTR,mode2,2,AOUACTR);
 /* line 711: */
NLQACTR_usemacro( DOUACTR, A_HISVEC(COUACTR,VNUACTR,3,A68_168 ), &EOUACTR );
HNUACTR.Extra = A_UNITE(FOUACTR,mode6,6,EOUACTR);
} 
else
{ 
 /* line 712: */
if ( (Version==3) )
{ 
GOUACTR_name = A_VC_PLUS(PGTACTR_qpower,ZHTACTR_qcomplex);
 /* line 713: */
KOUACTR = ENQACTR_yield(GOUACTR_name, BNUACTR_left) ;
IOUACTR.data[0] = A_UNITE(JOUACTR,mode1,1,KOUACTR);
MOUACTR = ENQACTR_yield(GOUACTR_name, CNUACTR_right) ;
IOUACTR.data[1] = A_UNITE(LOUACTR,mode1,1,MOUACTR);
 /* line 714: */
NLQACTR_usemacro( OOUACTR, A_HISVEC(NOUACTR,IOUACTR,2,A68_168 ), &POUACTR );
HNUACTR.Extra = A_UNITE(QOUACTR,mode6,6,POUACTR);
} 
else
{ 
PXIACTR_assert(A_VC_PLUS(PGTACTR_qpower,LETACTR_qvfault), A68_FALSE);
 /* line 715: */
 /* line 716: */
 /* line 717: */
HNUACTR.Extra = ROUACTR;
} 
} 
} 
SOUACTR = HNUACTR;
} 
A_PROC_EXIT(power);
*ReturnedValue = (SOUACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  VOUACTR_castvalue(A68_INT  Mode, A68_55 * Value, A68_VC  *ReturnedValue)
{ 
A68_VC  WOUACTR;  /* clause result */
A68_VC  XOUACTR;  /* avoid structure result */
A68_VC  YOUACTR;  /* avoid structure result */
A_PROC_ENTRY(castvalue);
 /* line 721: */
OJNACTR_cast( Mode, &XOUACTR );
WAQACTR_bracketcfragment( Value, &YOUACTR );
WOUACTR = A_VC_PLUS(XOUACTR,YOUACTR);
A_PROC_EXIT(castvalue);
*ReturnedValue = (WOUACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  CPUACTR_imaginary(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * DPUACTR_left;
A68_55 * EPUACTR_right;
A68_INT  FPUACTR_m;
A68_59  GPUACTR;  /* avoid structure result */
A68_59  HPUACTR_temp;
A68_55  IPUACTR;  /* collateral clause result */
A68_202  KPUACTR;  /* collateral clause result */
A68_168  LPUACTR;  /* OPERATORS - mode -> union mode */
A68_VC  MPUACTR;  /* avoid structure result */
A68_168  NPUACTR;  /* OPERATORS - mode -> union mode */
A68_VC  OPUACTR;  /* avoid structure result */
A68_168  PPUACTR;  /* OPERATORS - mode -> union mode */
A68_171  QPUACTR;  /* OPERATORS - istruct -> vector */
A68_VC  SPUACTR;  /* avoid structure result */
A68_56  TPUACTR;  /* OPERATORS - mode -> union mode */
A68_202  VPUACTR;  /* collateral clause result */
A68_168  WPUACTR;  /* OPERATORS - mode -> union mode */
A68_168  XPUACTR;  /* OPERATORS - mode -> union mode */
A68_168  YPUACTR;  /* OPERATORS - mode -> union mode */
A68_171  ZPUACTR;  /* OPERATORS - istruct -> vector */
A68_VC  BQUACTR;  /* avoid structure result */
A68_56  CQUACTR;  /* OPERATORS - mode -> union mode */
A68_55  DQUACTR;  /* clause result */
A_PROC_ENTRY(imaginary);
 /* line 724: */
 /* line 725: */
{ 
 /* line 726: */
AWQACTR_eval2(Root, (&DPUACTR_left), (&EPUACTR_right));
 /* line 727: */
FPUACTR_m = ((*(&(Root->Mode)))-4);
 /* line 728: */
A_CALLPROC(TJOACTR_new,((*(&(Root->Mode))), UFTACTR_qi, &GPUACTR),((*(&(Root->Mode))), UFTACTR_qi, &GPUACTR,(TJOACTR_new).nonlocals));
HPUACTR_temp = GPUACTR;
 /* line 729: */
 /* line 730: */
IPUACTR.Mode = (*(&(Root->Mode)));
 /* line 731: */
IPUACTR.Info = (A68_BITS )((A68_BITS )((A68_BITS )((*(&(DPUACTR_left->Info)))&GJJACTR_fxwarn)|(A68_BITS )((*(&(EPUACTR_right->Info)))&GJJACTR_fxwarn))|AJJACTR_atomic);
 /* line 732: */
if ( (Version==1) )
{ 
 /* line 733: */
KPUACTR.data[0] = A_UNITE(LPUACTR,mode3,3,HPUACTR_temp);
VOUACTR_castvalue( FPUACTR_m, DPUACTR_left, &MPUACTR );
KPUACTR.data[1] = A_UNITE(NPUACTR,mode2,2,MPUACTR);
VOUACTR_castvalue( FPUACTR_m, EPUACTR_right, &OPUACTR );
KPUACTR.data[2] = A_UNITE(PPUACTR,mode2,2,OPUACTR);
 /* line 734: */
NLQACTR_usemacro( RPUACTR, A_HISVEC(QPUACTR,KPUACTR,3,A68_168 ), &SPUACTR );
IPUACTR.Extra = A_UNITE(TPUACTR,mode6,6,SPUACTR);
} 
else
{ 
VPUACTR.data[0] = A_UNITE(WPUACTR,mode3,3,HPUACTR_temp);
VPUACTR.data[1] = A_UNITE(XPUACTR,mode1,1,DPUACTR_left);
VPUACTR.data[2] = A_UNITE(YPUACTR,mode1,1,EPUACTR_right);
 /* line 735: */
 /* line 736: */
 /* line 737: */
NLQACTR_usemacro( AQUACTR, A_HISVEC(ZPUACTR,VPUACTR,3,A68_168 ), &BQUACTR );
IPUACTR.Extra = A_UNITE(CQUACTR,mode6,6,BQUACTR);
} 
DQUACTR = IPUACTR;
} 
A_PROC_EXIT(imaginary);
*ReturnedValue = (DQUACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  HQUACTR_shiftleftright(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_VC  JQUACTR;  /* clause result */
A68_VC  PQUACTR;  /* OPERATORS - skip to mode */
A68_VC  QQUACTR_op;
A68_VC  RQUACTR_adic;
A68_55 * SQUACTR_left;
A68_55 * TQUACTR_right;
A68_55  UQUACTR;  /* collateral clause result */
A68_VC  XQUACTR;  /* avoid structure result */
A68_56  YQUACTR;  /* OPERATORS - mode -> union mode */
A68_56  ZQUACTR;  /* OPERATORS - skip to mode */
A68_55  ARUACTR;  /* clause result */
A_PROC_ENTRY(shiftleftright);
 /* line 740: */
 /* line 742: */
{ 
 /* line 743: */
switch ( (Opnumber-17) )
{ 
case 1: 
 /* line 744: */
JQUACTR = KQUACTR;
break;
case 2: 
JQUACTR = MQUACTR;
break;
default: 
PXIACTR_assert(OQUACTR, A68_FALSE);
 /* line 745: */
JQUACTR = PQUACTR;
break;
} 
QQUACTR_op = JQUACTR;
 /* line 746: */
RQUACTR_adic = A_VC_PLUS(IETACTR_modulename,QQUACTR_op);
 /* line 747: */
 /* line 748: */
AWQACTR_eval2(Root, (&SQUACTR_left), (&TQUACTR_right));
 /* line 749: */
 /* line 750: */
UQUACTR.Mode = (*(&(Root->Mode)));
 /* line 751: */
UQUACTR.Info = (A68_BITS )((A68_BITS )((A68_BITS )((*(&(SQUACTR_left->Info)))&GJJACTR_fxwarn)|(A68_BITS )((*(&(TQUACTR_right->Info)))&GJJACTR_fxwarn))|AJJACTR_atomic);
 /* line 752: */
if ( (Version==1) )
{ 
 /* line 753: */
OITACTR_simpledyop( A68_TRUE, A_VC_PLUS(WQUACTR,QQUACTR_op), ENQACTR_yield(QQUACTR_op, SQUACTR_left), ENQACTR_yield(QQUACTR_op, TQUACTR_right), &XQUACTR );
UQUACTR.Extra = A_UNITE(YQUACTR,mode6,6,XQUACTR);
} 
else
{ 
PXIACTR_assert(A_VC_PLUS(RQUACTR_adic,LETACTR_qvfault), A68_FALSE);
 /* line 754: */
 /* line 755: */
 /* line 756: */
UQUACTR.Extra = ZQUACTR;
} 
ARUACTR = UQUACTR;
} 
A_PROC_EXIT(shiftleftright);
*ReturnedValue = (ARUACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  ERUACTR_elem(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * FRUACTR_left;
A68_55 * GRUACTR_right;
A68_INT  HRUACTR_m;
A68_206  JRUACTR;  /* collateral clause result */
A68_168  KRUACTR;  /* OPERATORS - mode -> union mode */
A68_55 * LRUACTR;  /* YIELD */
A68_168  MRUACTR;  /* OPERATORS - mode -> union mode */
A68_VC  NRUACTR;  /* avoid structure result */
A68_168  ORUACTR;  /* OPERATORS - mode -> union mode */
A68_VC  PRUACTR;  /* avoid structure result */
A68_168  QRUACTR;  /* OPERATORS - mode -> union mode */
A68_VC  RRUACTR;  /* clause result */
A68_171  SRUACTR;  /* OPERATORS - istruct -> vector */
A68_VC  URUACTR;  /* avoid structure result */
A68_VC  VRUACTR;  /* OPERATORS - skip to mode */
A68_VC  WRUACTR_body;
A68_55  XRUACTR;  /* collateral clause result */
A68_56  YRUACTR;  /* OPERATORS - mode -> union mode */
A68_55  ZRUACTR;  /* clause result */
A_PROC_ENTRY(elem);
 /* line 759: */
 /* line 760: */
{ 
AWQACTR_eval2(Root, (&FRUACTR_left), (&GRUACTR_right));
 /* line 761: */
 /* line 762: */
 /* line 765: */
if ( (Version==1) )
{ 
HRUACTR_m = (*(&(GRUACTR_right->Mode)));
 /* line 766: */
 /* line 767: */
 /* line 768: */
LRUACTR = ENQACTR_yield(SGTACTR_qelem, FRUACTR_left) ;
JRUACTR.data[0] = A_UNITE(KRUACTR,mode1,1,LRUACTR);
JRUACTR.data[1] = A_UNITE(MRUACTR,mode1,1,GRUACTR_right);
OJNACTR_cast( HRUACTR_m, &NRUACTR );
JRUACTR.data[2] = A_UNITE(ORUACTR,mode2,2,NRUACTR);
 /* line 769: */
TJNACTR_csizeof( HRUACTR_m, &PRUACTR );
JRUACTR.data[3] = A_UNITE(QRUACTR,mode2,2,PRUACTR);
 /* line 770: */
NLQACTR_usemacro( TRUACTR, A_HISVEC(SRUACTR,JRUACTR,4,A68_168 ), &URUACTR );
RRUACTR = URUACTR;
} 
else
{ 
PXIACTR_assert(A_VC_PLUS(SGTACTR_qelem,LETACTR_qvfault), A68_FALSE);
 /* line 771: */
RRUACTR = VRUACTR;
} 
WRUACTR_body = RRUACTR;
 /* line 772: */
XRUACTR.Mode = (*(&(Root->Mode)));
XRUACTR.Info = YIJACTR_defaultinfo;
 /* line 773: */
XRUACTR.Extra = A_UNITE(YRUACTR,mode6,6,WRUACTR_body);
ZRUACTR = XRUACTR;
} 
A_PROC_EXIT(elem);
*ReturnedValue = (ZRUACTR);
return;
} 
#undef NL

A_STATIC A68_BITS  CSUACTR_abattribute(A68_BOOL  Noref, A68_55 * Op)
{ 
A68_BITS  DSUACTR;  /* clause result */
A_PROC_ENTRY(abattribute);
 /* line 787: */
 /* line 788: */
 /* line 790: */
if ( DTPACTR_hasattribute(Op, CJJACTR_nonloc) )
{ 
 /* line 791: */
DSUACTR = (A68_BITS )(CJJACTR_nonloc|GJJACTR_fxwarn);
} 
else
{ 
 /* line 792: */
if ( Noref )
{ 
 /* line 793: */
 /* line 797: */
DSUACTR = (A68_BITS )(BJJACTR_effects|GJJACTR_fxwarn);
} 
else
{ 
 /* line 798: */
 /* line 799: */
DSUACTR = (A68_BITS )(AJJACTR_atomic|GJJACTR_fxwarn);
} 
} 
A_PROC_EXIT(abattribute);
return( DSUACTR );
} 
#undef NL
 /* line 806: */
 /* line 807: */
 /* line 808: */
 /* line 809: */

A_STATIC A68_VOID  JSUACTR_simpleabop(A68_BOOL  Noref, A68_BOOL  Macro, A68_VC  Oper, A68_55 * Left, A68_55 * Right, A68_56  *ReturnedValue)
{ 
A68_55 * KSUACTR_lhs;
A68_191  LSUACTR;  /* collateral clause result */
A68_168  MSUACTR;  /* OPERATORS - mode -> union mode */
A68_168  NSUACTR;  /* OPERATORS - mode -> union mode */
A68_VC  OSUACTR;  /* clause result */
A68_171  PSUACTR;  /* OPERATORS - istruct -> vector */
A68_VC  QSUACTR;  /* avoid structure result */
A68_VC  RSUACTR;  /* avoid structure result */
A68_VC  SSUACTR;  /* avoid structure result */
A68_VC  TSUACTR_body;
A68_56  USUACTR;  /* clause result */
A68_56  VSUACTR;  /* OPERATORS - mode -> union mode */
A68_191  WSUACTR;  /* collateral clause result */
A68_168  XSUACTR;  /* OPERATORS - mode -> union mode */
A68_168  ATUACTR;  /* OPERATORS - mode -> union mode */
A68_VC  BTUACTR;  /* YIELD */
A68_171  CTUACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(simpleabop);
 /* line 810: */
 /* line 811: */
{ 
KSUACTR_lhs = TMQACTR_yield(Left);
 /* line 812: */
PKAAOSF_orab((&(KSUACTR_lhs->Info)), EJJACTR_lvalue);
 /* line 813: */
 /* line 814: */
 /* line 815: */
if ( Macro )
{ 
LSUACTR.data[0] = A_UNITE(MSUACTR,mode1,1,KSUACTR_lhs);
LSUACTR.data[1] = A_UNITE(NSUACTR,mode1,1,Right);
 /* line 816: */
NLQACTR_usemacro( Oper, A_HISVEC(PSUACTR,LSUACTR,2,A68_168 ), &QSUACTR );
OSUACTR = QSUACTR;
} 
else
{ 
 /* line 817: */
WAQACTR_bracketcfragment( KSUACTR_lhs, &RSUACTR );
WAQACTR_bracketcfragment( Right, &SSUACTR );
OSUACTR = A_VC_PLUS(A_VC_PLUS(RSUACTR,Oper),SSUACTR);
} 
TSUACTR_body = OSUACTR;
 /* line 818: */
 /* line 819: */
 /* line 820: */
if ( Noref )
{ 
USUACTR = A_UNITE(VSUACTR,mode6,6,TSUACTR_body);
} 
else
{ 
WSUACTR.data[0] = A_UNITE(XSUACTR,mode2,2,TSUACTR_body);
BTUACTR = ZSUACTR ;
WSUACTR.data[1] = A_UNITE(ATUACTR,mode2,2,BTUACTR);
SLQACTR_emitline(A_HISVEC(CTUACTR,WSUACTR,2,A68_168 ));
 /* line 821: */
 /* line 822: */
USUACTR = (*(&(KSUACTR_lhs->Extra)));
} 
} 
A_PROC_EXIT(simpleabop);
*ReturnedValue = (USUACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  GTUACTR_plusab(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * HTUACTR_left;
A68_55 * ITUACTR_right;
A68_BOOL  JTUACTR_opt;
A68_56  LTUACTR;  /* clause result */
A68_56  NTUACTR;  /* avoid structure result */
A68_56  QTUACTR;  /* avoid structure result */
A68_124  TTUACTR;  /* OPERATORS - vacuum */
A68_VC  UTUACTR;  /* avoid structure result */
A68_56  VTUACTR;  /* OPERATORS - mode -> union mode */
A68_56  YTUACTR;  /* avoid structure result */
A68_56  BUUACTR;  /* avoid structure result */
A68_56  CUUACTR;  /* OPERATORS - skip to mode */
A68_56  DUUACTR_body;
A68_55  EUUACTR;  /* collateral clause result */
A68_55  FUUACTR;  /* clause result */
A_PROC_ENTRY(plusab);
 /* line 826: */
 /* line 827: */
{ 
 /* line 828: */
IVQACTR_eval_pass_left(Root, (&HTUACTR_left), EJJACTR_lvalue);
 /* line 829: */
RVQACTR_eval_pass_right(Root, (&ITUACTR_right), YIJACTR_defaultinfo);
 /* line 830: */
JTUACTR_opt = DTPACTR_hasattribute(Root, DJJACTR_voided);
 /* line 831: */
 /* line 832: */
 /* line 833: */
switch ( Version )
{ 
case 1: 
 /* line 834: */
JSUACTR_simpleabop( JTUACTR_opt, A68_FALSE, MTUACTR, HTUACTR_left, ITUACTR_right, &NTUACTR );
LTUACTR = NTUACTR;
break;
case 2: 
 /* line 835: */
JSUACTR_simpleabop( JTUACTR_opt, A68_FALSE, PTUACTR, HTUACTR_left, ITUACTR_right, &QTUACTR );
LTUACTR = QTUACTR;
break;
case 3: 
 /* line 836: */
 /* line 837: */
LYTACTR_complexop( A_VVAC(TTUACTR), STUACTR, A_VC_PLUS(VGTACTR_qplusab,ZHTACTR_qcomplex), HTUACTR_left, ITUACTR_right, A68_TRUE, &UTUACTR );
LTUACTR = A_UNITE(VTUACTR,mode6,6,UTUACTR);
break;
case 4: 
 /* line 838: */
JSUACTR_simpleabop( JTUACTR_opt, A68_TRUE, XTUACTR, HTUACTR_left, ITUACTR_right, &YTUACTR );
LTUACTR = YTUACTR;
break;
case 5: 
 /* line 839: */
JSUACTR_simpleabop( JTUACTR_opt, A68_TRUE, AUUACTR, HTUACTR_left, ITUACTR_right, &BUUACTR );
LTUACTR = BUUACTR;
break;
default: 
PXIACTR_assert(A_VC_PLUS(VGTACTR_qplusab,LETACTR_qvfault), A68_FALSE);
 /* line 840: */
LTUACTR = CUUACTR;
break;
} 
DUUACTR_body = LTUACTR;
 /* line 841: */
EUUACTR.Mode = (*(&(Root->Mode)));
EUUACTR.Info = CSUACTR_abattribute(JTUACTR_opt, HTUACTR_left);
 /* line 842: */
EUUACTR.Extra = DUUACTR_body;
FUUACTR = EUUACTR;
} 
A_PROC_EXIT(plusab);
*ReturnedValue = (FUUACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  JUUACTR_plusto(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * KUUACTR_left;
A68_55 * LUUACTR_right;
A68_BOOL  MUUACTR_opt;
A68_56  QUUACTR;  /* clause result */
A68_56  SUUACTR;  /* avoid structure result */
A68_56  XUUACTR;  /* avoid structure result */
A68_56  YUUACTR;  /* OPERATORS - skip to mode */
A68_56  ZUUACTR_body;
A68_55  AVUACTR;  /* collateral clause result */
A68_55  BVUACTR;  /* clause result */
A_PROC_ENTRY(plusto);
 /* line 845: */
 /* line 846: */
{ 
 /* line 847: */
IVQACTR_eval_pass_left(Root, (&KUUACTR_left), YIJACTR_defaultinfo);
 /* line 848: */
RVQACTR_eval_pass_right(Root, (&LUUACTR_right), EJJACTR_lvalue);
 /* line 849: */
MUUACTR_opt = DTPACTR_hasattribute(Root, DJJACTR_voided);
 /* line 850: */
 /* line 851: */
 /* line 853: */
switch ( Version )
{ 
case 1: 
{ 
 /* line 854: */
PXIACTR_assert(A_VC_PLUS(YGTACTR_qplusto,OUUACTR), (NOMACTR_isflexvec((*(&(LUUACTR_right->Mode))))&YNMACTR_isvec((*(&(KUUACTR_left->Mode))))));
 /* line 855: */
 /* line 856: */
 /* line 858: */
JSUACTR_simpleabop( MUUACTR_opt, A68_TRUE, RUUACTR, LUUACTR_right, KUUACTR_left, &SUUACTR );
QUUACTR = SUUACTR;
} 
break;
case 2: 
{ 
 /* line 859: */
PXIACTR_assert(A_VC_PLUS(YGTACTR_qplusto,UUUACTR), (ROMACTR_isflexrow((*(&(LUUACTR_right->Mode))))&COMACTR_isrow((*(&(KUUACTR_left->Mode))))));
 /* line 860: */
 /* line 861: */
 /* line 862: */
JSUACTR_simpleabop( MUUACTR_opt, A68_TRUE, WUUACTR, LUUACTR_right, KUUACTR_left, &XUUACTR );
QUUACTR = XUUACTR;
} 
break;
default: 
PXIACTR_assert(A_VC_PLUS(YGTACTR_qplusto,LETACTR_qvfault), A68_FALSE);
 /* line 863: */
QUUACTR = YUUACTR;
break;
} 
ZUUACTR_body = QUUACTR;
 /* line 864: */
AVUACTR.Mode = (*(&(Root->Mode)));
AVUACTR.Info = CSUACTR_abattribute(MUUACTR_opt, KUUACTR_left);
 /* line 865: */
AVUACTR.Extra = ZUUACTR_body;
BVUACTR = AVUACTR;
} 
A_PROC_EXIT(plusto);
*ReturnedValue = (BVUACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  FVUACTR_minusab(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * GVUACTR_left;
A68_55 * HVUACTR_right;
A68_BOOL  IVUACTR_opt;
A68_56  KVUACTR;  /* clause result */
A68_56  MVUACTR;  /* avoid structure result */
A68_124  PVUACTR;  /* OPERATORS - vacuum */
A68_VC  QVUACTR;  /* avoid structure result */
A68_56  RVUACTR;  /* OPERATORS - mode -> union mode */
A68_56  SVUACTR;  /* OPERATORS - skip to mode */
A68_56  TVUACTR_body;
A68_55  UVUACTR;  /* collateral clause result */
A68_55  VVUACTR;  /* clause result */
A_PROC_ENTRY(minusab);
 /* line 868: */
 /* line 869: */
{ 
 /* line 870: */
IVQACTR_eval_pass_left(Root, (&GVUACTR_left), EJJACTR_lvalue);
 /* line 871: */
RVQACTR_eval_pass_right(Root, (&HVUACTR_right), YIJACTR_defaultinfo);
 /* line 872: */
IVUACTR_opt = DTPACTR_hasattribute(Root, DJJACTR_voided);
 /* line 873: */
 /* line 874: */
 /* line 875: */
if ( ((Version==1)|(Version==2)) )
{ 
 /* line 876: */
JSUACTR_simpleabop( IVUACTR_opt, A68_FALSE, LVUACTR, GVUACTR_left, HVUACTR_right, &MVUACTR );
KVUACTR = MVUACTR;
} 
else
{ 
 /* line 877: */
if ( (Version==3) )
{ 
 /* line 878: */
 /* line 879: */
LYTACTR_complexop( A_VVAC(PVUACTR), OVUACTR, A_VC_PLUS(BHTACTR_qminusab,ZHTACTR_qcomplex), GVUACTR_left, HVUACTR_right, A68_TRUE, &QVUACTR );
KVUACTR = A_UNITE(RVUACTR,mode6,6,QVUACTR);
} 
else
{ 
PXIACTR_assert(A_VC_PLUS(BHTACTR_qminusab,LETACTR_qvfault), A68_FALSE);
 /* line 880: */
KVUACTR = SVUACTR;
} 
} 
TVUACTR_body = KVUACTR;
 /* line 881: */
UVUACTR.Mode = (*(&(Root->Mode)));
UVUACTR.Info = CSUACTR_abattribute(IVUACTR_opt, GVUACTR_left);
 /* line 882: */
UVUACTR.Extra = TVUACTR_body;
VVUACTR = UVUACTR;
} 
A_PROC_EXIT(minusab);
*ReturnedValue = (VVUACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  ZVUACTR_timesab(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * AWUACTR_left;
A68_55 * BWUACTR_right;
A68_BOOL  CWUACTR_opt;
A68_56  EWUACTR;  /* clause result */
A68_56  GWUACTR;  /* avoid structure result */
A68_56  JWUACTR;  /* avoid structure result */
A68_124  MWUACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  NWUACTR;  /* avoid structure result */
A68_56  OWUACTR;  /* OPERATORS - mode -> union mode */
A68_56  RWUACTR;  /* avoid structure result */
A68_56  UWUACTR;  /* avoid structure result */
A68_56  VWUACTR;  /* OPERATORS - skip to mode */
A68_56  WWUACTR_body;
A68_55  XWUACTR;  /* collateral clause result */
A68_55  YWUACTR;  /* clause result */
A_PROC_ENTRY(timesab);
 /* line 885: */
 /* line 886: */
{ 
 /* line 887: */
IVQACTR_eval_pass_left(Root, (&AWUACTR_left), EJJACTR_lvalue);
 /* line 888: */
RVQACTR_eval_pass_right(Root, (&BWUACTR_right), YIJACTR_defaultinfo);
 /* line 889: */
CWUACTR_opt = DTPACTR_hasattribute(Root, DJJACTR_voided);
 /* line 890: */
 /* line 891: */
 /* line 892: */
switch ( Version )
{ 
case 1: 
 /* line 893: */
JSUACTR_simpleabop( CWUACTR_opt, A68_FALSE, FWUACTR, AWUACTR_left, BWUACTR_right, &GWUACTR );
EWUACTR = GWUACTR;
break;
case 2: 
 /* line 894: */
JSUACTR_simpleabop( CWUACTR_opt, A68_FALSE, IWUACTR, AWUACTR_left, BWUACTR_right, &JWUACTR );
EWUACTR = JWUACTR;
break;
case 3: 
 /* line 895: */
 /* line 896: */
LYTACTR_complexop( A_HVEC(MWUACTR,NMMACTR_deref((*(&(Root->Mode)))),A68_INT ), LWUACTR, A_VC_PLUS(EHTACTR_qtimesab,ZHTACTR_qcomplex), AWUACTR_left, BWUACTR_right, A68_TRUE, &NWUACTR );
EWUACTR = A_UNITE(OWUACTR,mode6,6,NWUACTR);
break;
case 4: 
 /* line 897: */
JSUACTR_simpleabop( CWUACTR_opt, A68_TRUE, QWUACTR, AWUACTR_left, BWUACTR_right, &RWUACTR );
EWUACTR = RWUACTR;
break;
case 5: 
 /* line 898: */
JSUACTR_simpleabop( CWUACTR_opt, A68_TRUE, TWUACTR, AWUACTR_left, BWUACTR_right, &UWUACTR );
EWUACTR = UWUACTR;
break;
default: 
PXIACTR_assert(A_VC_PLUS(EHTACTR_qtimesab,LETACTR_qvfault), A68_FALSE);
 /* line 899: */
EWUACTR = VWUACTR;
break;
} 
WWUACTR_body = EWUACTR;
 /* line 900: */
XWUACTR.Mode = (*(&(Root->Mode)));
XWUACTR.Info = CSUACTR_abattribute(CWUACTR_opt, AWUACTR_left);
 /* line 901: */
XWUACTR.Extra = WWUACTR_body;
YWUACTR = XWUACTR;
} 
A_PROC_EXIT(timesab);
*ReturnedValue = (YWUACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  CXUACTR_overab(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * DXUACTR_left;
A68_55 * EXUACTR_right;
A68_BOOL  FXUACTR_opt;
A68_56  HXUACTR;  /* clause result */
A68_56  JXUACTR;  /* avoid structure result */
A68_56  KXUACTR;  /* OPERATORS - skip to mode */
A68_56  LXUACTR_body;
A68_55  MXUACTR;  /* collateral clause result */
A68_55  NXUACTR;  /* clause result */
A_PROC_ENTRY(overab);
 /* line 904: */
 /* line 905: */
{ 
 /* line 906: */
IVQACTR_eval_pass_left(Root, (&DXUACTR_left), EJJACTR_lvalue);
 /* line 907: */
RVQACTR_eval_pass_right(Root, (&EXUACTR_right), YIJACTR_defaultinfo);
 /* line 908: */
FXUACTR_opt = DTPACTR_hasattribute(Root, DJJACTR_voided);
 /* line 909: */
 /* line 910: */
 /* line 911: */
if ( (Version==1) )
{ 
 /* line 912: */
JSUACTR_simpleabop( FXUACTR_opt, A68_FALSE, IXUACTR, DXUACTR_left, EXUACTR_right, &JXUACTR );
HXUACTR = JXUACTR;
} 
else
{ 
PXIACTR_assert(A_VC_PLUS(HHTACTR_qoverab,LETACTR_qvfault), A68_FALSE);
 /* line 913: */
HXUACTR = KXUACTR;
} 
LXUACTR_body = HXUACTR;
 /* line 914: */
MXUACTR.Mode = (*(&(Root->Mode)));
MXUACTR.Info = CSUACTR_abattribute(FXUACTR_opt, DXUACTR_left);
 /* line 915: */
MXUACTR.Extra = LXUACTR_body;
NXUACTR = MXUACTR;
} 
A_PROC_EXIT(overab);
*ReturnedValue = (NXUACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  RXUACTR_modab(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_BOOL  SXUACTR_opt;
A68_55 * TXUACTR_left;
A68_55 * UXUACTR_right;
A68_55  VXUACTR;  /* collateral clause result */
A68_56  YXUACTR;  /* avoid structure result */
A68_56  ZXUACTR;  /* OPERATORS - skip to mode */
A68_55  AYUACTR;  /* clause result */
A_PROC_ENTRY(modab);
 /* line 918: */
 /* line 919: */
{ 
SXUACTR_opt = DTPACTR_hasattribute(Root, DJJACTR_voided);
 /* line 920: */
 /* line 921: */
IVQACTR_eval_pass_left(Root, (&TXUACTR_left), EJJACTR_lvalue);
 /* line 922: */
RVQACTR_eval_pass_right(Root, (&UXUACTR_right), YIJACTR_defaultinfo);
 /* line 923: */
 /* line 924: */
VXUACTR.Mode = (*(&(Root->Mode)));
 /* line 925: */
VXUACTR.Info = CSUACTR_abattribute(SXUACTR_opt, TXUACTR_left);
 /* line 926: */
if ( (Version==1) )
{ 
 /* line 927: */
JSUACTR_simpleabop( SXUACTR_opt, A68_TRUE, XXUACTR, TXUACTR_left, UXUACTR_right, &YXUACTR );
VXUACTR.Extra = YXUACTR;
} 
else
{ 
PXIACTR_assert(A_VC_PLUS(KHTACTR_qmodab,LETACTR_qvfault), A68_FALSE);
 /* line 928: */
 /* line 929: */
 /* line 930: */
VXUACTR.Extra = ZXUACTR;
} 
AYUACTR = VXUACTR;
} 
A_PROC_EXIT(modab);
*ReturnedValue = (AYUACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  EYUACTR_divab(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * FYUACTR_left;
A68_55 * GYUACTR_right;
A68_BOOL  HYUACTR_opt;
A68_55  IYUACTR;  /* collateral clause result */
A68_56  LYUACTR;  /* avoid structure result */
A68_216  MYUACTR;  /* collateral clause result */
A68_124  PYUACTR;  /* OPERATORS - istruct -> vector */
A68_VC  QYUACTR;  /* avoid structure result */
A68_56  RYUACTR;  /* OPERATORS - mode -> union mode */
A68_56  SYUACTR;  /* OPERATORS - skip to mode */
A68_55  TYUACTR;  /* clause result */
A_PROC_ENTRY(divab);
 /* line 933: */
 /* line 934: */
{ 
 /* line 935: */
IVQACTR_eval_pass_left(Root, (&FYUACTR_left), EJJACTR_lvalue);
 /* line 936: */
RVQACTR_eval_pass_right(Root, (&GYUACTR_right), YIJACTR_defaultinfo);
 /* line 937: */
HYUACTR_opt = DTPACTR_hasattribute(Root, DJJACTR_voided);
 /* line 939: */
 /* line 940: */
IYUACTR.Mode = (*(&(Root->Mode)));
 /* line 941: */
IYUACTR.Info = CSUACTR_abattribute(HYUACTR_opt, FYUACTR_left);
 /* line 942: */
if ( (Version==1) )
{ 
 /* line 943: */
JSUACTR_simpleabop( HYUACTR_opt, A68_FALSE, KYUACTR, FYUACTR_left, GYUACTR_right, &LYUACTR );
IYUACTR.Extra = LYUACTR;
} 
else
{ 
 /* line 944: */
if ( (Version==2) )
{ 
MYUACTR.data[0] = (*(&(GYUACTR_right->Mode)));
MYUACTR.data[1] = ((*(&(GYUACTR_right->Mode)))-4);
 /* line 945: */
 /* line 946: */
LYTACTR_complexop( A_HISVEC(PYUACTR,MYUACTR,2,A68_INT ), OYUACTR, A_VC_PLUS(EHTACTR_qtimesab,ZHTACTR_qcomplex), FYUACTR_left, GYUACTR_right, A68_TRUE, &QYUACTR );
IYUACTR.Extra = A_UNITE(RYUACTR,mode6,6,QYUACTR);
} 
else
{ 
PXIACTR_assert(A_VC_PLUS(NHTACTR_qdivab,LETACTR_qvfault), A68_FALSE);
 /* line 947: */
 /* line 948: */
 /* line 949: */
IYUACTR.Extra = SYUACTR;
} 
} 
TYUACTR = IYUACTR;
} 
A_PROC_EXIT(divab);
*ReturnedValue = (TYUACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  XYUACTR_isisnt(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_VC  ZYUACTR;  /* clause result */
A68_VC  FZUACTR;  /* OPERATORS - skip to mode */
A68_VC  GZUACTR_op;
A68_VC  HZUACTR_adic;
A68_55 * IZUACTR_left;
A68_55 * JZUACTR_right;
A68_BOOL  KZUACTR;  /* optbool result */
A68_VC  OZUACTR;  /* clause result */
A68_VC  TZUACTR;  /* clause result */
A68_VC  YZUACTR;  /* clause result */
A68_VC  AAVACTR;  /* avoid structure result */
A68_VC  BAVACTR;  /* avoid structure result */
A68_VC  CAVACTR_body;
A68_55  DAVACTR;  /* collateral clause result */
A68_56  EAVACTR;  /* OPERATORS - mode -> union mode */
A68_55  FAVACTR;  /* clause result */
A_PROC_ENTRY(isisnt);
 /* line 956: */
 /* line 958: */
{ 
 /* line 959: */
switch ( (Opnumber-26) )
{ 
case 1: 
 /* line 960: */
ZYUACTR = AZUACTR;
break;
case 2: 
ZYUACTR = CZUACTR;
break;
default: 
PXIACTR_assert(A_VC_PLUS(WHTACTR_qisisnt,EZUACTR), A68_FALSE);
 /* line 961: */
ZYUACTR = FZUACTR;
break;
} 
GZUACTR_op = ZYUACTR;
 /* line 963: */
HZUACTR_adic = A_VC_PLUS(IETACTR_modulename,GZUACTR_op);
 /* line 964: */
AWQACTR_eval2(Root, (&IZUACTR_left), (&JZUACTR_right));
 /* line 966: */
 /* line 967: */
 /* line 968: */
KZUACTR = ((*(&(IZUACTR_left->Mode)))<WFAACTR_refrefmark);
if ( KZUACTR )
{ /* line 969: */
KZUACTR = JPMACTR_isarray((*(&(IZUACTR_left->Mode))));
}
 /* line 970: */
if ( KZUACTR )
{ 
if ( A_VC_EQ(GZUACTR_op,MZUACTR) )
{ 
OZUACTR = PZUACTR;
} 
else
{ 
 /* line 972: */
OZUACTR = RZUACTR;
} 
if ( EPMACTR_isrow((*(&(IZUACTR_left->Mode)))) )
{ 
TZUACTR = UZUACTR;
} 
else
{ 
TZUACTR = WZUACTR;
} 
 /* line 973: */
 /* line 974: */
 /* line 975: */
 /* line 976: */
OITACTR_simpledyop( A68_TRUE, A_VC_PLUS(TZUACTR,ZZUACTR), ENQACTR_yield(GZUACTR_op, IZUACTR_left), ENQACTR_yield(GZUACTR_op, JZUACTR_right), &AAVACTR );
YZUACTR = A_VC_PLUS(OZUACTR,AAVACTR);
} 
else
{ 
 /* line 977: */
OITACTR_simpledyop( A68_FALSE, GZUACTR_op, IZUACTR_left, JZUACTR_right, &BAVACTR );
YZUACTR = BAVACTR;
} 
CAVACTR_body = YZUACTR;
 /* line 978: */
 /* line 979: */
DAVACTR.Mode = (*(&(Root->Mode)));
 /* line 981: */
DAVACTR.Info = (A68_BITS )((A68_BITS )((A68_BITS )((*(&(IZUACTR_left->Info)))&GJJACTR_fxwarn)|(A68_BITS )((*(&(JZUACTR_right->Info)))&GJJACTR_fxwarn))|AJJACTR_atomic);
 /* line 982: */
DAVACTR.Extra = A_UNITE(EAVACTR,mode6,6,CAVACTR_body);
FAVACTR = DAVACTR;
} 
A_PROC_EXIT(isisnt);
*ReturnedValue = (FAVACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  QBVACTR_anonymous(A68_55 * V, A68_INT  I, A68_INT  J, A68_55  *ReturnedValue)
{ 
A68_55  TBVACTR;  /* clause result */
 /* line 1020: */
{ 
PXIACTR_assert(SBVACTR, A68_FALSE);
 /* line 1021: */
TBVACTR = MJJACTR_skipvalue;
} 
*ReturnedValue = (TBVACTR);
return;
} 
#undef NL

A68_VOID  FCVACTR_dyadicsem(A68_55 * Root, A68_62  Rator, A68_55  *ReturnedValue)
{ 
A68_INT  GCVACTR_param;
A68_INT  HCVACTR_opnumber;
A68_INT  ICVACTR;  /* ADICOPS - MOD */
A68_INT  JCVACTR_version;
A68_55  KCVACTR;  /* clause result */
A68_192  LCVACTR;  /* CALL */
A68_55  MCVACTR;  /* avoid structure result */
A68_INT  NCVACTR_biopparam;
A68_INT  OCVACTR_opnumber;
A68_INT  PCVACTR;  /* ADICOPS - MOD */
A68_INT  QCVACTR_version;
A68_192  RCVACTR;  /* CALL */
A68_55  SCVACTR;  /* avoid structure result */
A_PROC_ENTRY(dyadicsem);
 /* line 1030: */
 /* line 1031: */
{ 
GCVACTR_param = (A68_INT )(A68_BITS )((A68_BITS )Rator.Param&ZGAACTR_parammask);
 /* line 1032: */
 /* line 1033: */
if ( (GCVACTR_param<RGAACTR_biopnumbersstart) )
{ 
HCVACTR_opnumber = (GCVACTR_param/SGAACTR_opnumberdivisor);
 /* line 1034: */
JCVACTR_version = A_MOD(GCVACTR_param,SGAACTR_opnumberdivisor,ICVACTR);
 /* line 1035: */
 /* line 1036: */
LCVACTR = A_R1INDEX(YBVACTR_dyadicsemantics,HCVACTR_opnumber) ;
A_CALLPROC(LCVACTR,(Root, HCVACTR_opnumber, JCVACTR_version, &MCVACTR),(Root, HCVACTR_opnumber, JCVACTR_version, &MCVACTR,(LCVACTR).nonlocals));
KCVACTR = MCVACTR;
} 
else
{ 
NCVACTR_biopparam = (GCVACTR_param-RGAACTR_biopnumbersstart);
 /* line 1037: */
OCVACTR_opnumber = (NCVACTR_biopparam/TGAACTR_biopnumberdivisor);
 /* line 1038: */
QCVACTR_version = A_MOD(NCVACTR_biopparam,TGAACTR_biopnumberdivisor,PCVACTR);
 /* line 1039: */
 /* line 1040: */
 /* line 1041: */
 /* line 1043: */
RCVACTR = A_R1INDEX(CCVACTR_dyadicbiopsemantics,OCVACTR_opnumber) ;
A_CALLPROC(RCVACTR,(Root, OCVACTR_opnumber, QCVACTR_version, &SCVACTR),(Root, OCVACTR_opnumber, QCVACTR_version, &SCVACTR,(RCVACTR).nonlocals));
KCVACTR = SCVACTR;
} 
} 
A_PROC_EXIT(dyadicsem);
*ReturnedValue = (KCVACTR);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 3: */
 /* line 4: */
 /* line 6: */
void BETACTR(void)   /* initialise DECS adicops */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/shields/projects/Algol68/Tools/Algol68toC/src/a68toc","-v","-uname","seedfile","-lib","/home/shields/projects/Algol68/Tools/Algol68toC/a68config","-dir","/home/shields/projects/Algol68/Tools/Algol68toC/a68config","-dir","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel","-dir",".","adicops.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/shields/projects/Algol68/Tools/Algol68toC/a68config","A68_CDIR=","A68_DIR=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/shields/projects/Algol68/Tools/Algol68toC/a68config/a68config.m","./values.m","./uniquenameserver.m","./modes.m","./incmode.m","./idtable.m","./incoperfn.m","./evalbase.m","./environment.m","./environ.m","./coutput.m","./centities.m","./biops.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/usefulops.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_VC  TFTACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_209  WWTACTR;  /* collateral clause result */
A68_192  XWTACTR;  /* procedure value */
A68_192  YWTACTR;  /* procedure value */
A68_192  ZWTACTR;  /* procedure value */
A68_192  AXTACTR;  /* procedure value */
A68_192  BXTACTR;  /* procedure value */
A68_192  CXTACTR;  /* procedure value */
A68_192  DXTACTR;  /* procedure value */
A68_192  EXTACTR;  /* procedure value */
A68_192  FXTACTR;  /* procedure value */
A68_192  GXTACTR;  /* procedure value */
A68_192  HXTACTR;  /* procedure value */
A68_192  IXTACTR;  /* procedure value */
A68_192  JXTACTR;  /* procedure value */
A68_192  KXTACTR;  /* procedure value */
A68_192  LXTACTR;  /* procedure value */
A68_192  MXTACTR;  /* procedure value */
A68_192  NXTACTR;  /* procedure value */
A68_192  OXTACTR;  /* procedure value */
A68_208  PXTACTR;  /* OPERATORS - istruct to row */
A68_208  QXTACTR;  /* OPERATORS - trim index */
A68_208  RXTACTR;  /* OPERATORS - trim index */
A68_224  GAVACTR;  /* collateral clause result */
A68_192  HAVACTR;  /* procedure value */
A68_192  IAVACTR;  /* procedure value */
A68_192  JAVACTR;  /* procedure value */
A68_192  KAVACTR;  /* procedure value */
A68_192  LAVACTR;  /* procedure value */
A68_192  MAVACTR;  /* procedure value */
A68_192  NAVACTR;  /* procedure value */
A68_192  OAVACTR;  /* procedure value */
A68_192  PAVACTR;  /* procedure value */
A68_192  QAVACTR;  /* procedure value */
A68_192  RAVACTR;  /* procedure value */
A68_192  SAVACTR;  /* procedure value */
A68_192  TAVACTR;  /* procedure value */
A68_192  UAVACTR;  /* procedure value */
A68_192  VAVACTR;  /* procedure value */
A68_192  WAVACTR;  /* procedure value */
A68_192  XAVACTR;  /* procedure value */
A68_192  YAVACTR;  /* procedure value */
A68_192  ZAVACTR;  /* procedure value */
A68_192  ABVACTR;  /* procedure value */
A68_192  BBVACTR;  /* procedure value */
A68_192  CBVACTR;  /* procedure value */
A68_192  DBVACTR;  /* procedure value */
A68_192  EBVACTR;  /* procedure value */
A68_192  FBVACTR;  /* procedure value */
A68_192  GBVACTR;  /* procedure value */
A68_192  HBVACTR;  /* procedure value */
A68_192  IBVACTR;  /* procedure value */
A68_192  JBVACTR;  /* procedure value */
A68_192  KBVACTR;  /* procedure value */
A68_192  LBVACTR;  /* procedure value */
A68_192  MBVACTR;  /* procedure value */
A68_192  UBVACTR;  /* procedure value */
A68_208  VBVACTR;  /* OPERATORS - istruct to row */
A68_208  WBVACTR;  /* OPERATORS - trim index */
A68_208  XBVACTR;  /* OPERATORS - trim index */
A68_208  ZBVACTR;  /* OPERATORS - vacuum */
A68_208  ACVACTR;  /* OPERATORS - trim index */
A68_208  BCVACTR;  /* OPERATORS - trim index */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
JRPACTR();   /* USE values */
AGMACTR();   /* USE uniquenameserver */
MLMACTR();   /* USE modes */
ZDAACTR();   /* USE incmode */
YNKACTR();   /* USE idtable */
XFAACTR();   /* USE incoperfn */
RUQACTR();   /* USE evalbase */
HPIACTR();   /* USE environment */
KNLACTR();   /* USE environ */
YRLACTR();   /* USE coutput */
THAACTR();   /* USE centities */
JYSACTR();   /* USE biops */
IKAAOSF();   /* USE usefulops */
/* --- Initialise configuration information */
A_config.source_file = "/home/shields/projects/Algol68/Tools/Algol68toC/src/adicops.a68";
A_config.translation_time = "Sun Sep 26 21:51:04 2004";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "AETACTR (from seed file) ";
A_config.spec_change_time = "Sun Sep 26 21:51:04 2004";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS adicops);
UEAALIB_a68config(LGAALIB_configinfo, FETACTR);
 /* line 48: */
IETACTR_modulename = HETACTR;
 /* line 50: */
 /* line 51: */
LETACTR_qvfault = KETACTR;
 /* line 52: */
OETACTR_qcompl = NETACTR;
 /* line 53: */
RETACTR_qmupb = A_VC_PLUS(IETACTR_modulename,QETACTR);
 /* line 54: */
UETACTR_qmlwb = A_VC_PLUS(IETACTR_modulename,TETACTR);
 /* line 55: */
XETACTR_qabs = A_VC_PLUS(IETACTR_modulename,WETACTR);
 /* line 56: */
AFTACTR_qround = A_VC_PLUS(IETACTR_modulename,ZETACTR);
 /* line 57: */
DFTACTR_qentier = A_VC_PLUS(IETACTR_modulename,CFTACTR);
 /* line 58: */
GFTACTR_qsign = A_VC_PLUS(IETACTR_modulename,FFTACTR);
 /* line 59: */
JFTACTR_qre = A_VC_PLUS(IETACTR_modulename,IFTACTR);
 /* line 60: */
MFTACTR_qim = A_VC_PLUS(IETACTR_modulename,LFTACTR);
 /* line 61: */
PFTACTR_qarg = A_VC_PLUS(IETACTR_modulename,OFTACTR);
 /* line 62: */
SFTACTR_qconj = A_VC_PLUS(IETACTR_modulename,RFTACTR);
 /* line 63: */
UFTACTR_qi = A_VC_PLUS(IETACTR_modulename,A_HVEC(TFTACTR,'I',A68_CHAR ));
 /* line 64: */
XFTACTR_qplus = A_VC_PLUS(IETACTR_modulename,WFTACTR);
 /* line 65: */
AGTACTR_qminus = A_VC_PLUS(IETACTR_modulename,ZFTACTR);
 /* line 66: */
DGTACTR_qtimes = A_VC_PLUS(IETACTR_modulename,CGTACTR);
 /* line 67: */
GGTACTR_qdiv = A_VC_PLUS(IETACTR_modulename,FGTACTR);
 /* line 68: */
JGTACTR_qover = A_VC_PLUS(IETACTR_modulename,IGTACTR);
 /* line 69: */
MGTACTR_qmod = A_VC_PLUS(IETACTR_modulename,LGTACTR);
 /* line 70: */
PGTACTR_qpower = A_VC_PLUS(IETACTR_modulename,OGTACTR);
 /* line 71: */
SGTACTR_qelem = A_VC_PLUS(IETACTR_modulename,RGTACTR);
 /* line 72: */
VGTACTR_qplusab = A_VC_PLUS(IETACTR_modulename,UGTACTR);
 /* line 73: */
YGTACTR_qplusto = A_VC_PLUS(IETACTR_modulename,XGTACTR);
 /* line 74: */
BHTACTR_qminusab = A_VC_PLUS(IETACTR_modulename,AHTACTR);
 /* line 75: */
EHTACTR_qtimesab = A_VC_PLUS(IETACTR_modulename,DHTACTR);
 /* line 76: */
HHTACTR_qoverab = A_VC_PLUS(IETACTR_modulename,GHTACTR);
 /* line 77: */
KHTACTR_qmodab = A_VC_PLUS(IETACTR_modulename,JHTACTR);
 /* line 78: */
NHTACTR_qdivab = A_VC_PLUS(IETACTR_modulename,MHTACTR);
 /* line 79: */
QHTACTR_qis = A_VC_PLUS(IETACTR_modulename,PHTACTR);
 /* line 80: */
THTACTR_qisnt = A_VC_PLUS(IETACTR_modulename,SHTACTR);
 /* line 81: */
WHTACTR_qisisnt = A_VC_PLUS(IETACTR_modulename,VHTACTR);
 /* line 82: */
ZHTACTR_qcomplex = YHTACTR;
 /* line 84: */
 /* line 90: */
 /* line 99: */
 /* line 104: */
 /* line 121: */
 /* line 138: */
 /* line 155: */
 /* line 172: */
 /* line 194: */
 /* line 213: */
 /* line 230: */
 /* line 242: */
 /* line 254: */
 /* line 270: */
 /* line 287: */
 /* line 316: */
 /* line 348: */
 /* line 358: */
 /* line 362: */
 /* line 366: */
 /* line 378: */
 /* line 390: */
 /* line 392: */
 /* line 393: */
XWTACTR.fn.fn_global = BJTACTR_monadicplus;
XWTACTR.nonlocals = A68_NIL;
WWTACTR.data[0] = XWTACTR;
 /* line 394: */
YWTACTR.fn.fn_global = HJTACTR_monadicminus;
YWTACTR.nonlocals = A68_NIL;
WWTACTR.data[1] = YWTACTR;
 /* line 395: */
ZWTACTR.fn.fn_global = DKTACTR_monadicupb;
ZWTACTR.nonlocals = A68_NIL;
WWTACTR.data[2] = ZWTACTR;
 /* line 396: */
AXTACTR.fn.fn_global = VKTACTR_monadiclwb;
AXTACTR.nonlocals = A68_NIL;
WWTACTR.data[3] = AXTACTR;
 /* line 397: */
BXTACTR.fn.fn_global = MLTACTR_not;
BXTACTR.nonlocals = A68_NIL;
WWTACTR.data[4] = BXTACTR;
 /* line 398: */
CXTACTR.fn.fn_global = EMTACTR_abs;
CXTACTR.nonlocals = A68_NIL;
WWTACTR.data[5] = CXTACTR;
 /* line 399: */
DXTACTR.fn.fn_global = INTACTR_bin;
DXTACTR.nonlocals = A68_NIL;
WWTACTR.data[6] = DXTACTR;
 /* line 400: */
EXTACTR.fn.fn_global = XNTACTR_repr;
EXTACTR.nonlocals = A68_NIL;
WWTACTR.data[7] = EXTACTR;
 /* line 401: */
FXTACTR.fn.fn_global = MOTACTR_lengthen;
FXTACTR.nonlocals = A68_NIL;
WWTACTR.data[8] = FXTACTR;
 /* line 402: */
GXTACTR.fn.fn_global = CPTACTR_shorten;
GXTACTR.nonlocals = A68_NIL;
WWTACTR.data[9] = GXTACTR;
 /* line 403: */
HXTACTR.fn.fn_global = SPTACTR_odd;
HXTACTR.nonlocals = A68_NIL;
WWTACTR.data[10] = HXTACTR;
 /* line 404: */
IXTACTR.fn.fn_global = HQTACTR_sign;
IXTACTR.nonlocals = A68_NIL;
WWTACTR.data[11] = IXTACTR;
 /* line 405: */
JXTACTR.fn.fn_global = VQTACTR_round;
JXTACTR.nonlocals = A68_NIL;
WWTACTR.data[12] = JXTACTR;
 /* line 406: */
KXTACTR.fn.fn_global = PSTACTR_entier;
KXTACTR.nonlocals = A68_NIL;
WWTACTR.data[13] = KXTACTR;
 /* line 407: */
LXTACTR.fn.fn_global = BVTACTR_re;
LXTACTR.nonlocals = A68_NIL;
WWTACTR.data[14] = LXTACTR;
 /* line 408: */
MXTACTR.fn.fn_global = JVTACTR_im;
MXTACTR.nonlocals = A68_NIL;
WWTACTR.data[15] = MXTACTR;
 /* line 410: */
NXTACTR.fn.fn_global = RVTACTR_arg;
NXTACTR.nonlocals = A68_NIL;
WWTACTR.data[16] = NXTACTR;
OXTACTR.fn.fn_global = FWTACTR_conj;
OXTACTR.nonlocals = A68_NIL;
WWTACTR.data[17] = OXTACTR;
QXTACTR = A_HIS1ARR(PXTACTR,WWTACTR,A68_192 ,18) ;
SXTACTR_monadicsemantics = A_R1TRIM(RXTACTR,(QXTACTR),A_RTSCRIPT(&(RXTACTR.dim[0]),&((QXTACTR).dim[0]),(QXTACTR).dim[0].lwb,(QXTACTR).dim[0].upb,0));
 /* line 412: */
 /* line 425: */
 /* line 439: */
 /* line 459: */
 /* line 473: */
 /* line 485: */
 /* line 494: */
 /* line 508: */
 /* line 521: */
 /* line 551: */
 /* line 582: */
 /* line 620: */
 /* line 649: */
 /* line 671: */
 /* line 683: */
 /* line 697: */
 /* line 720: */
 /* line 723: */
 /* line 739: */
 /* line 758: */
 /* line 781: */
 /* line 801: */
 /* line 805: */
 /* line 825: */
 /* line 844: */
 /* line 867: */
 /* line 884: */
 /* line 903: */
 /* line 917: */
 /* line 932: */
 /* line 951: */
 /* line 985: */
 /* line 987: */
 /* line 988: */
HAVACTR.fn.fn_global = YZTACTR_dyadicplus;
HAVACTR.nonlocals = A68_NIL;
GAVACTR.data[0] = HAVACTR;
 /* line 989: */
IAVACTR.fn.fn_global = BBUACTR_dyadicminus;
IAVACTR.nonlocals = A68_NIL;
GAVACTR.data[1] = IAVACTR;
 /* line 990: */
JAVACTR.fn.fn_global = RBUACTR_dyadicupb;
JAVACTR.nonlocals = A68_NIL;
GAVACTR.data[2] = JAVACTR;
 /* line 991: */
KAVACTR.fn.fn_global = HCUACTR_dyadiclwb;
KAVACTR.nonlocals = A68_NIL;
GAVACTR.data[3] = KAVACTR;
 /* line 992: */
LAVACTR.fn.fn_global = XCUACTR_and;
LAVACTR.nonlocals = A68_NIL;
GAVACTR.data[4] = LAVACTR;
 /* line 993: */
MAVACTR.fn.fn_global = QDUACTR_or;
MAVACTR.nonlocals = A68_NIL;
GAVACTR.data[5] = MAVACTR;
 /* line 994: */
NAVACTR.fn.fn_global = JEUACTR_lessnotless;
NAVACTR.nonlocals = A68_NIL;
GAVACTR.data[6] = NAVACTR;
 /* line 995: */
OAVACTR.fn.fn_global = JEUACTR_lessnotless;
OAVACTR.nonlocals = A68_NIL;
GAVACTR.data[7] = OAVACTR;
 /* line 996: */
PAVACTR.fn.fn_global = VFUACTR_lesseqgreatereq;
PAVACTR.nonlocals = A68_NIL;
GAVACTR.data[8] = PAVACTR;
 /* line 997: */
QAVACTR.fn.fn_global = VFUACTR_lesseqgreatereq;
QAVACTR.nonlocals = A68_NIL;
GAVACTR.data[9] = QAVACTR;
 /* line 998: */
RAVACTR.fn.fn_global = MHUACTR_eqnoteq;
RAVACTR.nonlocals = A68_NIL;
GAVACTR.data[10] = RAVACTR;
 /* line 999: */
SAVACTR.fn.fn_global = MHUACTR_eqnoteq;
SAVACTR.nonlocals = A68_NIL;
GAVACTR.data[11] = SAVACTR;
 /* line 1000: */
TAVACTR.fn.fn_global = GJUACTR_times;
TAVACTR.nonlocals = A68_NIL;
GAVACTR.data[12] = TAVACTR;
 /* line 1001: */
UAVACTR.fn.fn_global = SKUACTR_divide;
UAVACTR.nonlocals = A68_NIL;
GAVACTR.data[13] = UAVACTR;
 /* line 1002: */
VAVACTR.fn.fn_global = QLUACTR_over;
VAVACTR.nonlocals = A68_NIL;
GAVACTR.data[14] = VAVACTR;
 /* line 1003: */
WAVACTR.fn.fn_global = CMUACTR_mod;
WAVACTR.nonlocals = A68_NIL;
GAVACTR.data[15] = WAVACTR;
 /* line 1004: */
XAVACTR.fn.fn_global = ANUACTR_power;
XAVACTR.nonlocals = A68_NIL;
GAVACTR.data[16] = XAVACTR;
 /* line 1005: */
YAVACTR.fn.fn_global = CPUACTR_imaginary;
YAVACTR.nonlocals = A68_NIL;
GAVACTR.data[17] = YAVACTR;
 /* line 1006: */
ZAVACTR.fn.fn_global = HQUACTR_shiftleftright;
ZAVACTR.nonlocals = A68_NIL;
GAVACTR.data[18] = ZAVACTR;
 /* line 1007: */
ABVACTR.fn.fn_global = HQUACTR_shiftleftright;
ABVACTR.nonlocals = A68_NIL;
GAVACTR.data[19] = ABVACTR;
 /* line 1008: */
BBVACTR.fn.fn_global = ERUACTR_elem;
BBVACTR.nonlocals = A68_NIL;
GAVACTR.data[20] = BBVACTR;
 /* line 1009: */
CBVACTR.fn.fn_global = GTUACTR_plusab;
CBVACTR.nonlocals = A68_NIL;
GAVACTR.data[21] = CBVACTR;
 /* line 1010: */
DBVACTR.fn.fn_global = FVUACTR_minusab;
DBVACTR.nonlocals = A68_NIL;
GAVACTR.data[22] = DBVACTR;
 /* line 1011: */
EBVACTR.fn.fn_global = ZVUACTR_timesab;
EBVACTR.nonlocals = A68_NIL;
GAVACTR.data[23] = EBVACTR;
 /* line 1012: */
FBVACTR.fn.fn_global = CXUACTR_overab;
FBVACTR.nonlocals = A68_NIL;
GAVACTR.data[24] = FBVACTR;
 /* line 1013: */
GBVACTR.fn.fn_global = RXUACTR_modab;
GBVACTR.nonlocals = A68_NIL;
GAVACTR.data[25] = GBVACTR;
 /* line 1014: */
HBVACTR.fn.fn_global = EYUACTR_divab;
HBVACTR.nonlocals = A68_NIL;
GAVACTR.data[26] = HBVACTR;
 /* line 1015: */
IBVACTR.fn.fn_global = XYUACTR_isisnt;
IBVACTR.nonlocals = A68_NIL;
GAVACTR.data[27] = IBVACTR;
 /* line 1016: */
JBVACTR.fn.fn_global = XYUACTR_isisnt;
JBVACTR.nonlocals = A68_NIL;
GAVACTR.data[28] = JBVACTR;
 /* line 1017: */
KBVACTR.fn.fn_global = XCUACTR_and;
KBVACTR.nonlocals = A68_NIL;
GAVACTR.data[29] = KBVACTR;
 /* line 1018: */
LBVACTR.fn.fn_global = QDUACTR_or;
LBVACTR.nonlocals = A68_NIL;
GAVACTR.data[30] = LBVACTR;
 /* line 1019: */
MBVACTR.fn.fn_global = JUUACTR_plusto;
MBVACTR.nonlocals = A68_NIL;
GAVACTR.data[31] = MBVACTR;
UBVACTR.fn.fn_global = QBVACTR_anonymous;
UBVACTR.nonlocals = A68_NIL;
GAVACTR.data[32] = UBVACTR;
WBVACTR = A_HIS1ARR(VBVACTR,GAVACTR,A68_192 ,33) ;
YBVACTR_dyadicsemantics = A_R1TRIM(XBVACTR,(WBVACTR),A_RTSCRIPT(&(XBVACTR.dim[0]),&((WBVACTR).dim[0]),(WBVACTR).dim[0].lwb,(WBVACTR).dim[0].upb,0));
 /* line 1023: */
 /* line 1027: */
ACVACTR = A_R1VAC(ZBVACTR) ;
CCVACTR_dyadicbiopsemantics = A_R1TRIM(BCVACTR,(ACVACTR),A_RTSCRIPT(&(BCVACTR.dim[0]),&((ACVACTR).dim[0]),(ACVACTR).dim[0].lwb,(ACVACTR).dim[0].upb,0));
 /* line 1029: */
 /* line 1045: */
A_PROC_EXIT(DECS adicops);
} 
#undef NL
/* end of translation of adicops.a68 */
