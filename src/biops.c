/* UNAME:IYSACTR */
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

A_PROCEDURE(A68_INT ,A68t67,(A68_INT ),(A68_INT ,void *));
typedef struct A68t67  A68_67 ;    /* PROC(INT) INT */

A_PROCEDURE(A68_BOOL ,A68t68,(A68_INT ),(A68_INT ,void *));
typedef struct A68t68  A68_68 ;    /* PROC(INT) BOOL */
struct A68t69{
A68_INT  Level;
A_PAD_INT(PAD_4)
A68_INT  Block;
A_PAD_INT(PAD_5)
};
typedef struct A68t69  A68_69 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t70,(struct A68t69 *),(struct A68t69 *,void *));
typedef struct A68t70  A68_70 ;    /* PROC MODE69 */

A_PROCEDURE(A68_INT ,A68t71,(void),(void *));
typedef struct A68t71  A68_71 ;    /* PROC INT */

A_PROCEDURE(A68_VOID ,A68t72,(A68_INT ),(A68_INT ,void *));
typedef struct A68t72  A68_72 ;    /* PROC(INT) VOID */

A_PROCEDURE(A68_BOOL ,A68t73,(void),(void *));
typedef struct A68t73  A68_73 ;    /* PROC BOOL */

A_PROCEDURE(A68_BOOL ,A68t74,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t74  A68_74 ;    /* PROC(INT,INT) BOOL */

A_PROCEDURE(A68_VOID ,A68t75,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t75  A68_75 ;    /* PROC(INT,INT) VOID */

A_PROCEDURE(A68_BOOL ,A68t76,(struct A68t69 ,struct A68t69 ),(struct A68t69 ,struct A68t69 ,void *));
typedef struct A68t76  A68_76 ;    /* PROC(MODE69,MODE69) BOOL */

A_PROCEDURE(A68_BOOL ,A68t77,(struct A68t69 ),(struct A68t69 ,void *));
typedef struct A68t77  A68_77 ;    /* PROC(MODE69) BOOL */

A_PROCEDURE(A68_VOID ,A68t78,(A68_VC ,A68_BOOL ),(A68_VC ,A68_BOOL ,void *));
typedef struct A68t78  A68_78 ;    /* PROC(MODE26,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t79,(A68_VC ,A68_INT ),(A68_VC ,A68_INT ,void *));
typedef struct A68t79  A68_79 ;    /* PROC(MODE26,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t80,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t80  A68_80 ;    /* PROC(INT) REF MODE26 */
struct A68t82 ;

A_PROCEDURE(A68_VOID ,A68t81,(A68_INT ,struct A68t82 ),(A68_INT ,struct A68t82 ,void *));
typedef struct A68t81  A68_81 ;    /* PROC(INT,MODE82) VOID */
A_ROW(A68_VC ,A68t82,1);
typedef struct A68t82  A68_82 ;    /* [] MODE26 */

A_PROCEDURE(A68_BITS ,A68t83,(void),(void *));
typedef struct A68t83  A68_83 ;    /* PROC BITS */
struct A68t84{
A68_INT  Cfile;
A_PAD_INT(PAD_6)
};
typedef struct A68t84  A68_84 ;    /* STRUCT(INT)  */
struct A68t85{
A68_INT  Seedfile;
A_PAD_INT(PAD_7)
};
typedef struct A68t85  A68_85 ;    /* STRUCT(INT)  */
struct A68t86 { A68_INT mode; union {
struct A68t84  mode1;
struct A68t85  mode2;
struct A68t56  mode3;
} data; };
typedef struct A68t86  A68_86 ;    /* UNION(MODE84,MODE85,MODE56,VOID)  */
struct A68t87{
A68_VC  Version;
A68_LINT  Translationtime;
A_PAD_LINT(PAD_8)
A68_VC  Sourcefile;
struct A68t56  Nameseed;
A_PAD_ISTRUCT(A68_56 ,PAD_9)
struct A68t86  Nameseedorigin;
struct A68t88 * Used_modules;
A68_VC  Commandline;
struct A68t89 * Environment;
};
typedef struct A68t87  A68_87 ;    /* STRUCT(REF MODE26,LONG INT,REF MODE26,MODE56,MODE86,REF MODE88,REF MODE26,REF MODE89)  */
struct A68t88{
A68_VC  Modinfo_file;
struct A68t88 * Next;
};
typedef struct A68t88  A68_88 ;    /* STRUCT(REF MODE26,REF MODE88)  */
struct A68t89{
A68_VC  Env_name;
A68_VC  Env_value;
struct A68t89 * Next;
};
typedef struct A68t89  A68_89 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE89)  */
struct A68t91 ;
struct A68t92 ;

A_PROCEDURE(struct A68t91 *,A68t90,(A68_VC ,struct A68t92 *,A68_VC *),(A68_VC ,struct A68t92 *,A68_VC *,void *));
typedef struct A68t90  A68_90 ;    /* PROC(MODE26,REF MODE92,REF REF MODE26) REF MODE91 */
struct A68t91{
A68_VC  Name;
A68_BITS * Stdiofile;
};
typedef struct A68t91  A68_91 ;    /* STRUCT(REF MODE26,REF BITS)  */
struct A68t92{
A68_VC  Dir;
struct A68t92 * Next;
};
typedef struct A68t92  A68_92 ;    /* STRUCT(REF MODE26,REF MODE92)  */
struct A68t94 ;

A_PROCEDURE(A68_VOID ,A68t93,(struct A68t94 *,struct A68t94 **),(struct A68t94 *,struct A68t94 **,void *));
typedef struct A68t93  A68_93 ;    /* PROC(REF MODE94,REF REF MODE94) VOID */
struct A68t96{
A68_INT  Rdenno;
A_PAD_INT(PAD_10)
};
typedef struct A68t96  A68_96 ;    /* STRUCT(INT)  */
struct A68t97{
A68_INT  Idno;
A_PAD_INT(PAD_11)
};
typedef struct A68t97  A68_97 ;    /* STRUCT(INT)  */
struct A68t98{
struct A68t56  Name;
A_PAD_ISTRUCT(A68_56 ,PAD_12)
A68_INT  Mode;
A_PAD_INT(PAD_13)
};
typedef struct A68t98  A68_98 ;    /* STRUCT(MODE56,INT)  */
struct A68t99{
A68_INT  Nse;
A_PAD_INT(PAD_14)
};
typedef struct A68t99  A68_99 ;    /* STRUCT(INT)  */
struct A68t100{
A68_INT  Fn;
A_PAD_INT(PAD_15)
A68_INT  Param;
A_PAD_INT(PAD_16)
struct A68t101 * Operands;
};
typedef struct A68t100  A68_100 ;    /* STRUCT(INT,INT,REF MODE101)  */
struct A68t95 { A68_INT mode; union {
A68_LBITS  mode1;
struct A68t96  mode2;
struct A68t97  mode4;
struct A68t98  mode5;
A68_VC  mode6;
struct A68t57  mode7;
struct A68t99  mode8;
struct A68t100  mode9;
} data; };
typedef struct A68t95  A68_95 ;    /* UNION(LONG BITS,MODE96,VOID,MODE97,MODE98,MODE26,MODE57,MODE99,MODE100)  */
struct A68t94{
A68_INT  Mode;
A_PAD_INT(PAD_17)
A68_BITS  Info;
A_PAD_BITS(PAD_18)
struct A68t95  Extra;
};
typedef struct A68t94  A68_94 ;    /* STRUCT(INT,BITS,MODE95)  */
struct A68t101{
struct A68t94  Value;
struct A68t101 * Rest;
};
typedef struct A68t101  A68_101 ;    /* STRUCT(MODE94,REF MODE101)  */

A_PROCEDURE(A68_VOID ,A68t102,(struct A68t94 *,struct A68t94 **,A68_BITS ),(struct A68t94 *,struct A68t94 **,A68_BITS ,void *));
typedef struct A68t102  A68_102 ;    /* PROC(REF MODE94,REF REF MODE94,BITS) VOID */

A_PROCEDURE(A68_VOID ,A68t103,(struct A68t94 *,struct A68t94 **,struct A68t94 **),(struct A68t94 *,struct A68t94 **,struct A68t94 **,void *));
typedef struct A68t103  A68_103 ;    /* PROC(REF MODE94,REF REF MODE94,REF REF MODE94) VOID */

A_PROCEDURE(A68_VOID ,A68t104,(struct A68t94 *),(struct A68t94 *,void *));
typedef struct A68t104  A68_104 ;    /* PROC(REF MODE94) VOID */
struct A68t105{
A68_INT  Mode;
A_PAD_INT(PAD_19)
A68_INT  Cvariabletype;
A_PAD_INT(PAD_20)
struct A68t69  Environ;
A68_VC  Name;
A68_VC  C_name;
struct A68t56  Prefix;
A_PAD_ISTRUCT(A68_56 ,PAD_21)
A68_BITS  Flags;
A_PAD_BITS(PAD_22)
A68_VC  Definition;
A68_VC  Rhs;
};
typedef struct A68t105  A68_105 ;    /* STRUCT(INT,INT,MODE69,REF MODE26,REF MODE26,MODE56,BITS,REF MODE26,REF MODE26)  */
struct A68t106{
A68_INT  Mode;
A_PAD_INT(PAD_23)
A68_INT  Resultmode;
A_PAD_INT(PAD_24)
A68_INT  Declevel;
A_PAD_INT(PAD_25)
struct A68t69  Environ;
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
typedef struct A68t106  A68_106 ;    /* STRUCT(INT,INT,INT,MODE69,REF MODE26,MODE56,MODE56,MODE56,BITS)  */
struct A68t107{
struct A68t55  Label;
struct A68t69  Environ;
A68_VC  Name;
struct A68t56  Prefix;
A_PAD_ISTRUCT(A68_56 ,PAD_30)
A68_BITS  Flags;
A_PAD_BITS(PAD_31)
A68_INT  Alias;
A_PAD_INT(PAD_32)
};
typedef struct A68t107  A68_107 ;    /* STRUCT(MODE55,MODE69,REF MODE26,MODE56,BITS,INT)  */

A_PROCEDURE(struct A68t105 *,A68t108,(A68_INT ),(A68_INT ,void *));
typedef struct A68t108  A68_108 ;    /* PROC(INT) REF MODE105 */

A_PROCEDURE(A68_VOID ,A68t109,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t109  A68_109 ;    /* PROC(REF MODE26) MODE26 */

A_PROCEDURE(A68_VOID ,A68t110,(A68_VC ,struct A68t56 ,A68_INT ,A68_INT ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_VC ,A68_VC ),(A68_VC ,struct A68t56 ,A68_INT ,A68_INT ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_VC ,A68_VC ,void *));
typedef struct A68t110  A68_110 ;    /* PROC(REF MODE26,MODE56,INT,INT,BOOL,BOOL,BOOL,BOOL,BOOL,REF MODE26,REF MODE26) VOID */
A_ROW(struct A68t105 ,A68t111,1);
typedef struct A68t111  A68_111 ;    /* [] MODE105 */
A_ROW(struct A68t106 ,A68t112,1);
typedef struct A68t112  A68_112 ;    /* [] MODE106 */
A_ROW(struct A68t107 ,A68t113,1);
typedef struct A68t113  A68_113 ;    /* [] MODE107 */
struct A68t115 ;

A_PROCEDURE(A68_VOID ,A68t114,(A68_INT ,A68_INT ,A68_INT ,A68_INT ,struct A68t115 ),(A68_INT ,A68_INT ,A68_INT ,A68_INT ,struct A68t115 ,void *));
typedef struct A68t114  A68_114 ;    /* PROC(INT,INT,INT,INT,REF MODE115) VOID */
A_ROW(A68_INT ,A68t115,1);
typedef struct A68t115  A68_115 ;    /* [] INT */

A_PROCEDURE(A68_BOOL ,A68t116,(A68_VC ),(A68_VC ,void *));
typedef struct A68t116  A68_116 ;    /* PROC(MODE26) BOOL */

A_PROCEDURE(A68_VOID ,A68t117,(A68_INT ,struct A68t69 *),(A68_INT ,struct A68t69 *,void *));
typedef struct A68t117  A68_117 ;    /* PROC(INT) MODE69 */
struct A68t118{
A68_INT  Parameters;
A_PAD_INT(PAD_33)
A68_INT  Result;
A_PAD_INT(PAD_34)
A68_BOOL  Hasdescriptors;
A_PAD_BOOL(PAD_35)
};
typedef struct A68t118  A68_118 ;    /* STRUCT(INT,INT,BOOL)  */
A_ISTRUCT(A68_CHAR ,32,A68t120);
typedef struct A68t120  A68_120 ;    /* STRUCT 32 CHAR */
struct A68t119{
A68_INT  Mode;
A_PAD_INT(PAD_36)
A68_INT  Offset;
A_PAD_INT(PAD_37)
struct A68t120  Name;
A_PAD_ISTRUCT(A68_120 ,PAD_38)
};
typedef struct A68t119  A68_119 ;    /* STRUCT(INT,INT,MODE120)  */
struct A68t122 ;

A_PROCEDURE(A68_VOID ,A68t121,(A68_INT ,struct A68t122 *),(A68_INT ,struct A68t122 *,void *));
typedef struct A68t121  A68_121 ;    /* PROC(INT) REF MODE122 */
A_VECTOR(A68_INT ,A68t122);
typedef struct A68t122  A68_122 ;    /* VECTOR [] INT */

A_PROCEDURE(A68_VOID ,A68t123,(struct A68t119 *,A68_VC *),(struct A68t119 *,A68_VC *,void *));
typedef struct A68t123  A68_123 ;    /* PROC(REF MODE119) MODE26 */

A_PROCEDURE(A68_VOID ,A68t124,(A68_INT ,A68_VC ,struct A68t98 *),(A68_INT ,A68_VC ,struct A68t98 *,void *));
typedef struct A68t124  A68_124 ;    /* PROC(INT,MODE26) MODE98 */
struct A68t126 ;

A_PROCEDURE(A68_VOID ,A68t125,(struct A68t126 ,A68_INT ),(struct A68t126 ,A68_INT ,void *));
typedef struct A68t125  A68_125 ;    /* PROC(REF MODE126,INT) VOID */
A_ROW(struct A68t127 ,A68t126,1);
typedef struct A68t126  A68_126 ;    /* [] MODE127 */
struct A68t137{
A68_INT  Mode;
A_PAD_INT(PAD_39)
};
typedef struct A68t137  A68_137 ;    /* STRUCT(INT)  */
struct A68t127 { A68_INT mode; union {
A68_INT  mode1;
struct A68t128 * mode2;
struct A68t129 * mode3;
struct A68t130 * mode4;
struct A68t131 * mode5;
struct A68t132 * mode6;
struct A68t133 * mode7;
struct A68t134 * mode8;
struct A68t135 * mode9;
struct A68t136 * mode10;
struct A68t137  mode11;
} data; };
typedef struct A68t127  A68_127 ;    /* UNION(INT,REF MODE128,REF MODE129,REF MODE130,REF MODE131,REF MODE132,REF MODE133,REF MODE134,REF MODE135,REF MODE136,MODE137)  */
struct A68t128{
A68_INT  Rdenno;
A_PAD_INT(PAD_40)
struct A68t141 * Modelist;
};
typedef struct A68t128  A68_128 ;    /* STRUCT(INT,REF MODE141)  */
struct A68t129{
A68_INT  Deproc;
A_PAD_INT(PAD_41)
struct A68t141 * Pars;
};
typedef struct A68t129  A68_129 ;    /* STRUCT(INT,REF MODE141)  */
struct A68t130{
A68_INT  Rdenno;
A_PAD_INT(PAD_42)
A68_INT  Deflex;
A_PAD_INT(PAD_43)
struct A68t140 * Sels;
};
typedef struct A68t130  A68_130 ;    /* STRUCT(INT,INT,REF MODE140)  */
struct A68t131{
A68_INT  Rdenno;
A_PAD_INT(PAD_44)
A68_INT  Imode;
A_PAD_INT(PAD_45)
A68_INT  Length;
A_PAD_INT(PAD_46)
A68_INT  Deflex;
A_PAD_INT(PAD_47)
};
typedef struct A68t131  A68_131 ;    /* STRUCT(INT,INT,INT,INT)  */
struct A68t132{
A68_INT  Deproc;
A_PAD_INT(PAD_48)
};
typedef struct A68t132  A68_132 ;    /* STRUCT(INT)  */
struct A68t133{
A68_INT  Rdenno;
A_PAD_INT(PAD_49)
A68_INT  Vecmode;
A_PAD_INT(PAD_50)
A68_INT  Deflex;
A_PAD_INT(PAD_51)
};
typedef struct A68t133  A68_133 ;    /* STRUCT(INT,INT,INT)  */
struct A68t134{
A68_INT  Rdenno;
A_PAD_INT(PAD_52)
A68_INT  Mode;
A_PAD_INT(PAD_53)
A68_INT  Nods;
A_PAD_INT(PAD_54)
A68_INT  Deflex;
A_PAD_INT(PAD_55)
};
typedef struct A68t134  A68_134 ;    /* STRUCT(INT,INT,INT,INT)  */
struct A68t135{
A68_INT  Mode;
A_PAD_INT(PAD_56)
struct A68t139 * Stenlist;
};
typedef struct A68t135  A68_135 ;    /* STRUCT(INT,REF MODE139)  */
struct A68t136{
A68_INT  Mode;
A_PAD_INT(PAD_57)
A68_INT  Modeproc;
A_PAD_INT(PAD_58)
struct A68t138 * El;
};
typedef struct A68t136  A68_136 ;    /* STRUCT(INT,INT,REF MODE138)  */
struct A68t138{
struct A68t136 * Am;
struct A68t138 * Rest;
};
typedef struct A68t138  A68_138 ;    /* STRUCT(REF MODE136,REF MODE138)  */
struct A68t139{
A68_INT  Mode;
A_PAD_INT(PAD_59)
A68_INT  Rdenno;
A_PAD_INT(PAD_60)
struct A68t139 * Rest;
};
typedef struct A68t139  A68_139 ;    /* STRUCT(INT,INT,REF MODE139)  */
struct A68t140{
A68_INT  Mode;
A_PAD_INT(PAD_61)
A68_INT  Fieldno;
A_PAD_INT(PAD_62)
struct A68t120  Name;
A_PAD_ISTRUCT(A68_120 ,PAD_63)
struct A68t140 * Rest;
};
typedef struct A68t140  A68_140 ;    /* STRUCT(INT,INT,MODE120,REF MODE140)  */
struct A68t141{
A68_INT  Mode;
A_PAD_INT(PAD_64)
struct A68t141 * Rest;
};
typedef struct A68t141  A68_141 ;    /* STRUCT(INT,REF MODE141)  */

A_PROCEDURE(A68_VOID ,A68t142,(A68_INT ,struct A68t118 *),(A68_INT ,struct A68t118 *,void *));
typedef struct A68t142  A68_142 ;    /* PROC(INT) MODE118 */
struct A68t144 ;

A_PROCEDURE(A68_VOID ,A68t143,(A68_INT ,struct A68t144 *),(A68_INT ,struct A68t144 *,void *));
typedef struct A68t143  A68_143 ;    /* PROC(INT) REF MODE144 */
A_VECTOR(struct A68t119 ,A68t144);
typedef struct A68t144  A68_144 ;    /* VECTOR [] MODE119 */

A_PROCEDURE(A68_INT ,A68t145,(A68_INT ,A68_BOOL ),(A68_INT ,A68_BOOL ,void *));
typedef struct A68t145  A68_145 ;    /* PROC(INT,BOOL) INT */

A_PROCEDURE(A68_VOID ,A68t146,(A68_INT ,A68_INT ,A68_VC *),(A68_INT ,A68_INT ,A68_VC *,void *));
typedef struct A68t146  A68_146 ;    /* PROC(INT,INT) MODE26 */

A_PROCEDURE(A68_VOID ,A68t147,(struct A68t86 ),(struct A68t86 ,void *));
typedef struct A68t147  A68_147 ;    /* PROC(MODE86) VOID */

A_PROCEDURE(struct A68t56 ,A68t148,(void),(void *));
typedef struct A68t148  A68_148 ;    /* PROC MODE56 */

A_PROCEDURE(A68_VOID ,A68t149,(struct A68t56 ),(struct A68t56 ,void *));
typedef struct A68t149  A68_149 ;    /* PROC(MODE56) VOID */

A_PROCEDURE(A68_VOID ,A68t150,(struct A68t86 ,A68_VC *),(struct A68t86 ,A68_VC *,void *));
typedef struct A68t150  A68_150 ;    /* PROC(MODE86) MODE26 */

A_PROCEDURE(A68_BOOL ,A68t151,(struct A68t94 *,struct A68t94 *),(struct A68t94 *,struct A68t94 *,void *));
typedef struct A68t151  A68_151 ;    /* PROC(REF MODE94,REF MODE94) BOOL */

A_PROCEDURE(A68_BOOL ,A68t152,(struct A68t94 *),(struct A68t94 *,void *));
typedef struct A68t152  A68_152 ;    /* PROC(REF MODE94) BOOL */

A_PROCEDURE(A68_BOOL ,A68t153,(struct A68t94 *,A68_LBITS ),(struct A68t94 *,A68_LBITS ,void *));
typedef struct A68t153  A68_153 ;    /* PROC(REF MODE94,LONG BITS) BOOL */

A_PROCEDURE(A68_LBITS ,A68t154,(struct A68t94 *),(struct A68t94 *,void *));
typedef struct A68t154  A68_154 ;    /* PROC(REF MODE94) LONG BITS */

A_PROCEDURE(A68_VOID ,A68t155,(struct A68t94 *,A68_VC *),(struct A68t94 *,A68_VC *,void *));
typedef struct A68t155  A68_155 ;    /* PROC(REF MODE94) MODE26 */

A_PROCEDURE(struct A68t94 *,A68t156,(struct A68t94 *,A68_INT ),(struct A68t94 *,A68_INT ,void *));
typedef struct A68t156  A68_156 ;    /* PROC(REF MODE94,INT) REF MODE94 */

A_PROCEDURE(A68_INT ,A68t157,(struct A68t100 ),(struct A68t100 ,void *));
typedef struct A68t157  A68_157 ;    /* PROC(MODE100) INT */
struct A68t158{
struct A68t94 * Value;
struct A68t55 * End;
A68_INT  Type;
A_PAD_INT(PAD_65)
};
typedef struct A68t158  A68_158 ;    /* STRUCT(REF MODE94,REF MODE55,INT)  */

A_PROCEDURE(A68_BOOL ,A68t159,(struct A68t94 *,A68_BITS ),(struct A68t94 *,A68_BITS ,void *));
typedef struct A68t159  A68_159 ;    /* PROC(REF MODE94,BITS) BOOL */

A_PROCEDURE(struct A68t94 *,A68t160,(struct A68t101 *,A68_INT ),(struct A68t101 *,A68_INT ,void *));
typedef struct A68t160  A68_160 ;    /* PROC(REF MODE101,INT) REF MODE94 */

A_PROCEDURE(struct A68t101 *,A68t161,(struct A68t101 *),(struct A68t101 *,void *));
typedef struct A68t161  A68_161 ;    /* PROC(REF MODE101) REF MODE101 */
struct A68t163 ;

A_PROCEDURE(struct A68t94 *,A68t162,(A68_INT ,A68_INT ,A68_BITS ,struct A68t163 ),(A68_INT ,A68_INT ,A68_BITS ,struct A68t163 ,void *));
typedef struct A68t162  A68_162 ;    /* PROC(INT,INT,BITS,MODE163) REF MODE94 */
A_VECTOR(struct A68t94 *,A68t163);
typedef struct A68t163  A68_163 ;    /* VECTOR [] REF MODE94 */

A_PROCEDURE(A68_VOID ,A68t164,(struct A68t94 *,A68_BOOL ,A68_VC *),(struct A68t94 *,A68_BOOL ,A68_VC *,void *));
typedef struct A68t164  A68_164 ;    /* PROC(REF MODE94,BOOL) MODE26 */

A_PROCEDURE(A68_LINT ,A68t165,(struct A68t94 ),(struct A68t94 ,void *));
typedef struct A68t165  A68_165 ;    /* PROC(MODE94) LONG INT */
struct A68t166 { A68_INT mode; union {
struct A68t94 * mode1;
A68_VC  mode2;
struct A68t98  mode3;
} data; };
typedef struct A68t166  A68_166 ;    /* UNION(REF MODE94,MODE26,MODE98)  */

A_PROCEDURE(A68_VOID ,A68t167,(struct A68t166 ,A68_VC *),(struct A68t166 ,A68_VC *,void *));
typedef struct A68t167  A68_167 ;    /* PROC(MODE166) MODE26 */
struct A68t169 ;

A_PROCEDURE(A68_VOID ,A68t168,(struct A68t169 ,A68_VC *),(struct A68t169 ,A68_VC *,void *));
typedef struct A68t168  A68_168 ;    /* PROC(MODE169) MODE26 */
A_VECTOR(struct A68t166 ,A68t169);
typedef struct A68t169  A68_169 ;    /* VECTOR [] MODE166 */

A_PROCEDURE(A68_VOID ,A68t170,(A68_VC ,struct A68t169 ,A68_VC *),(A68_VC ,struct A68t169 ,A68_VC *,void *));
typedef struct A68t170  A68_170 ;    /* PROC(MODE26,MODE169) MODE26 */

A_PROCEDURE(A68_VOID ,A68t171,(struct A68t169 ),(struct A68t169 ,void *));
typedef struct A68t171  A68_171 ;    /* PROC(MODE169) VOID */

A_PROCEDURE(A68_VOID ,A68t172,(A68_VC ,A68_INT ,struct A68t169 ,struct A68t98 *),(A68_VC ,A68_INT ,struct A68t169 ,struct A68t98 *,void *));
typedef struct A68t172  A68_172 ;    /* PROC(MODE26,INT,MODE169) MODE98 */

A_PROCEDURE(struct A68t94 *,A68t173,(struct A68t94 *),(struct A68t94 *,void *));
typedef struct A68t173  A68_173 ;    /* PROC(REF MODE94) REF MODE94 */

A_PROCEDURE(struct A68t94 *,A68t174,(A68_VC ,struct A68t94 *),(A68_VC ,struct A68t94 *,void *));
typedef struct A68t174  A68_174 ;    /* PROC(MODE26,REF MODE94) REF MODE94 */

A_PROCEDURE(A68_VOID ,A68t175,(struct A68t60 ),(struct A68t60 ,void *));
typedef struct A68t175  A68_175 ;    /* PROC(MODE60) VOID */

A_PROCEDURE(A68_VOID ,A68t176,(struct A68t59 ),(struct A68t59 ,void *));
typedef struct A68t176  A68_176 ;    /* PROC(MODE59) VOID */

A_PROCEDURE(A68_VOID ,A68t177,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t177  A68_177 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,60,A68t178);
typedef struct A68t178  A68_178 ;    /* STRUCT 60 CHAR */
A_ISTRUCT(A68_CHAR ,8,A68t179);
typedef struct A68t179  A68_179 ;    /* STRUCT 8 CHAR */

A_PROCEDURE(A68_VOID ,A68t180,(struct A68t94 *,struct A68t94 *),(struct A68t94 *,struct A68t94 *,void *));
typedef struct A68t180  A68_180 ;    /* PROC(REF MODE94) MODE94 */
A_ISTRUCT(A68_CHAR ,15,A68t181);
typedef struct A68t181  A68_181 ;    /* STRUCT 15 CHAR */
A_ISTRUCT(A68_CHAR ,1,A68t182);
typedef struct A68t182  A68_182 ;    /* STRUCT 0 CHAR */
A_ISTRUCT(A68_CHAR ,9,A68t183);
typedef struct A68t183  A68_183 ;    /* STRUCT 9 CHAR */
A_ISTRUCT(A68_CHAR ,14,A68t184);
typedef struct A68t184  A68_184 ;    /* STRUCT 14 CHAR */
A_ISTRUCT(A68_CHAR ,2,A68t185);
typedef struct A68t185  A68_185 ;    /* STRUCT 2 CHAR */
A_ISTRUCT(struct A68t66 ,13,A68t186);
typedef struct A68t186  A68_186 ;    /* STRUCT 13 MODE66 */
A_ISTRUCT(A68_CHAR ,10,A68t187);
typedef struct A68t187  A68_187 ;    /* STRUCT 10 CHAR */
A_ISTRUCT(struct A68t166 ,4,A68t188);
typedef struct A68t188  A68_188 ;    /* STRUCT 4 MODE166 */
A_ISTRUCT(A68_CHAR ,12,A68t189);
typedef struct A68t189  A68_189 ;    /* STRUCT 12 CHAR */

A_PROCEDURE(A68_VOID ,A68t190,(struct A68t94 *,A68_INT ,struct A68t94 *),(struct A68t94 *,A68_INT ,struct A68t94 *,void *));
typedef struct A68t190  A68_190 ;    /* PROC(REF MODE94,INT) MODE94 */
A_ISTRUCT(A68_CHAR ,5,A68t191);
typedef struct A68t191  A68_191 ;    /* STRUCT 5 CHAR */
A_ISTRUCT(A68_CHAR ,3,A68t192);
typedef struct A68t192  A68_192 ;    /* STRUCT 3 CHAR */
A_ISTRUCT(A68_CHAR ,20,A68t193);
typedef struct A68t193  A68_193 ;    /* STRUCT 20 CHAR */
A_ISTRUCT(struct A68t166 ,2,A68t194);
typedef struct A68t194  A68_194 ;    /* STRUCT 2 MODE166 */
A_ISTRUCT(struct A68t166 ,3,A68t195);
typedef struct A68t195  A68_195 ;    /* STRUCT 3 MODE166 */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from values --- */
extern A68_VOID  PWPACTR_getcfragment(struct A68t94 *,A68_VC *);
#define AJJACTR_atomic 0X2U
#define GJJACTR_fxwarn 0X80U
extern A68_94  MJJACTR_skipvalue;
extern A68_VOID  WAQACTR_bracketcfragment(struct A68t94 *,A68_VC *);
extern A68_VOID  NLQACTR_usemacro(A68_VC ,struct A68t169 ,A68_VC *);
extern A68_VOID  SLQACTR_emitline(struct A68t169 );
extern A68_94 * TMQACTR_yield(struct A68t94 *);
/* --- End of imports from values --- */


/* --- Imports from uniquenameserver --- */
extern A68_56  ZGMACTR_newuniquename(void);
/* --- End of imports from uniquenameserver --- */


/* --- Imports from modes --- */
extern A68_VOID  GJNACTR_ctype(A68_INT ,A68_VC *);
extern A68_BOOL  GQMACTR_isistruct(A68_INT );
extern A68_124  TJOACTR_new;
extern A68_VOID  OJNACTR_cast(A68_INT ,A68_VC *);
/* --- End of imports from modes --- */


/* --- Imports from incmode --- */
#define VFAACTR_refmark 1024
/* --- End of imports from incmode --- */


/* --- Imports from idtable --- */
/* --- End of imports from idtable --- */


/* --- Imports from incoperfn --- */
/* --- End of imports from incoperfn --- */


/* --- Imports from evalbase --- */
extern A68_VOID  ZUQACTR_eval1(struct A68t94 *,struct A68t94 **);
/* --- End of imports from evalbase --- */


/* --- Imports from environment --- */
extern A68_VOID  PXIACTR_assert(A68_VC ,A68_BOOL );
extern A68_81  HWIACTR_perror;
extern A68_BOOL  AQIACTR_verboseoption;
/* --- End of imports from environment --- */


/* --- Imports from environ --- */
extern A68_INT  ZQLACTR_locdecstream(A68_INT );
extern A68_INT  EQLACTR_currentlevel(void);
/* --- End of imports from environ --- */


/* --- Imports from coutput --- */
extern A68_VOID  VBMACTR_writecstream(struct A68t65 ,A68_INT );
/* --- End of imports from coutput --- */


/* --- Imports from centities --- */
extern A68_SINT  EIAACTR_cnewline;
extern A68_VOID  JIAACTR_bracket(A68_VC ,A68_VC *);
/* --- End of imports from centities --- */


/* --- Imports from usefulops --- */
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
extern void IKAAOSF(void);   /* usefulops */
/* --- end of DECS initialisation functions --- */
static A68_178   MYSACTR = {"$Id: biops.c,v 1.5.2.4 2004/09/27 03:04:16 teshields Exp $"}; 
A_GISVEC(A68_VC ,NYSACTR,MYSACTR,60)
static A68_179   OYSACTR = {"BIOPS - "}; 
A_GISVEC(A68_VC ,PYSACTR,OYSACTR,8)
static A68_VC  QYSACTR_modulename;
static A68_56   BZSACTR = {"union {"}; 
A_GISVEC(A68_VC ,CZSACTR,BZSACTR,7)
static A68_181   FZSACTR = {"  /* BIOP 99 */"}; 
A_GISVEC(A68_VC ,GZSACTR,FZSACTR,15)
static A68_182   JZSACTR = {""}; 
A_GISVEC(A68_VC ,KZSACTR,JZSACTR,0)
static A68_183   QZSACTR = {"  source;"}; 
A_GISVEC(A68_VC ,RZSACTR,QZSACTR,9)
static A68_184   XZSACTR = {"  destination;"}; 
A_GISVEC(A68_VC ,YZSACTR,XZSACTR,14)
static A68_185   CATACTR = {"} "}; 
A_GISVEC(A68_VC ,DATACTR,CATACTR,2)
static A68_185   HATACTR = {"; "}; 
A_GISVEC(A68_VC ,IATACTR,HATACTR,2)
static A68_187   PATACTR = {".source = "}; 
A_GISVEC(A68_VC ,QATACTR,PATACTR,10)
static A68_185   VATACTR = {" ;"}; 
A_GISVEC(A68_VC ,WATACTR,VATACTR,2)
static A68_189   ABTACTR = {".destination"}; 
A_GISVEC(A68_VC ,BBTACTR,ABTACTR,12)
static A68_191   XBTACTR = {".data"}; 
A_GISVEC(A68_VC ,BCTACTR,XBTACTR,5)
static A68_40   MCTACTR = {"BIOP"}; 
A_GISVEC(A68_VC ,NCTACTR,MCTACTR,4)
static A68_192   RCTACTR = {"A_M"}; 
static A68_193   KDTACTR = {"invalid generic biop"}; 
A_GISVEC(A68_VC ,LDTACTR,KDTACTR,20)
A_GISVEC(A68_VC ,NDTACTR,RCTACTR,3)

A68_VOID  SYSACTR_biop99(A68_94 * Root, A68_94  *ReturnedValue);

A_STATIC A68_VOID  HBTACTR_cast_biop(A68_94 * Root, A68_INT  Biop, A68_94  *ReturnedValue);

A_STATIC A68_VOID  RBTACTR_istruct_to_amode(A68_94 * Root, A68_INT  Biop, A68_94  *ReturnedValue);

A_STATIC A68_VOID  KCTACTR_generic_monadic_biop(A68_94 * Root, A68_INT  Biop, A68_94  *ReturnedValue);

A68_VOID  TDTACTR_monadicbiopsemantics(A68_94 * Root, A68_INT  Biop, A68_94  *ReturnedValue);

A68_VOID  SYSACTR_biop99(A68_94 * Root, A68_94  *ReturnedValue)
{ 
A68_94 * TYSACTR_op;
A68_94  UYSACTR;  /* collateral clause result */
A68_VC  VYSACTR;  /* avoid structure result */
A68_95  WYSACTR;  /* OPERATORS - mode -> union mode */
A68_VC  XYSACTR;  /* OPERATORS - istruct -> vector */
A68_56  YYSACTR;  /* OPERATORS - istruct -> vector */
A68_VC  ZYSACTR_temp;
A68_186  AZSACTR;  /* collateral clause result */
A68_66  DZSACTR;  /* OPERATORS - mode -> union mode */
A68_VC  EZSACTR;  /* YIELD */
A68_66  HZSACTR;  /* OPERATORS - mode -> union mode */
A68_VC  IZSACTR;  /* YIELD */
A68_66  LZSACTR;  /* OPERATORS - mode -> union mode */
A68_VC  MZSACTR;  /* YIELD */
A68_66  NZSACTR;  /* OPERATORS - mode -> union mode */
A68_VC  OZSACTR;  /* avoid structure result */
A68_66  PZSACTR;  /* OPERATORS - mode -> union mode */
A68_66  SZSACTR;  /* OPERATORS - mode -> union mode */
A68_VC  TZSACTR;  /* YIELD */
A68_66  UZSACTR;  /* OPERATORS - mode -> union mode */
A68_VC  VZSACTR;  /* avoid structure result */
A68_66  WZSACTR;  /* OPERATORS - mode -> union mode */
A68_66  ZZSACTR;  /* OPERATORS - mode -> union mode */
A68_VC  AATACTR;  /* YIELD */
A68_66  BATACTR;  /* OPERATORS - mode -> union mode */
A68_66  EATACTR;  /* OPERATORS - mode -> union mode */
A68_VC  FATACTR;  /* YIELD */
A68_66  GATACTR;  /* OPERATORS - mode -> union mode */
A68_66  JATACTR;  /* OPERATORS - mode -> union mode */
A68_VC  KATACTR;  /* YIELD */
A68_66  LATACTR;  /* OPERATORS - mode -> union mode */
A68_65  MATACTR;  /* OPERATORS - istruct -> vector */
A68_188  NATACTR;  /* collateral clause result */
A68_166  OATACTR;  /* OPERATORS - mode -> union mode */
A68_166  RATACTR;  /* OPERATORS - mode -> union mode */
A68_VC  SATACTR;  /* YIELD */
A68_VC  TATACTR;  /* avoid structure result */
A68_166  UATACTR;  /* OPERATORS - mode -> union mode */
A68_166  XATACTR;  /* OPERATORS - mode -> union mode */
A68_VC  YATACTR;  /* YIELD */
A68_169  ZATACTR;  /* OPERATORS - istruct -> vector */
A68_VC  CBTACTR;  /* avoid structure result */
A68_95  DBTACTR;  /* OPERATORS - mode -> union mode */
A68_94  EBTACTR;  /* clause result */
A_PROC_ENTRY(biop99);
 /* line 49: */
 /* line 50: */
{ 
ZUQACTR_eval1(Root, (&TYSACTR_op));
 /* line 51: */
 /* line 52: */
UYSACTR.Mode = (*(&(Root->Mode)));
 /* line 53: */
UYSACTR.Info = (A68_BITS )((A68_BITS )((*(&(TYSACTR_op->Info)))&GJJACTR_fxwarn)|AJJACTR_atomic);
 /* line 54: */
 /* line 55: */
 /* line 57: */
if ( ((*(&(Root->Mode)))==(*(&(TYSACTR_op->Mode)))) )
{ 
 /* line 58: */
PWPACTR_getcfragment( TYSACTR_op, &VYSACTR );
UYSACTR.Extra = A_UNITE(WYSACTR,mode6,6,VYSACTR);
} 
else
{ 
YYSACTR = ZGMACTR_newuniquename() ;
ZYSACTR_temp = A_HISVEC(XYSACTR,YYSACTR,7,A68_CHAR );
 /* line 59: */
 /* line 60: */
 /* line 61: */
EZSACTR = CZSACTR ;
AZSACTR.data[0] = A_UNITE(DZSACTR,mode2,2,EZSACTR);
if ( AQIACTR_verboseoption )
{ 
IZSACTR = GZSACTR ;
AZSACTR.data[1] = A_UNITE(HZSACTR,mode2,2,IZSACTR);
} 
else
{ 
MZSACTR = KZSACTR ;
AZSACTR.data[1] = A_UNITE(LZSACTR,mode2,2,MZSACTR);
} 
 /* line 62: */
AZSACTR.data[2] = A_UNITE(NZSACTR,mode4,4,EIAACTR_cnewline);
GJNACTR_ctype( (*(&(TYSACTR_op->Mode))), &OZSACTR );
AZSACTR.data[3] = A_UNITE(PZSACTR,mode2,2,OZSACTR);
TZSACTR = RZSACTR ;
AZSACTR.data[4] = A_UNITE(SZSACTR,mode2,2,TZSACTR);
 /* line 63: */
AZSACTR.data[5] = A_UNITE(UZSACTR,mode4,4,EIAACTR_cnewline);
GJNACTR_ctype( (*(&(Root->Mode))), &VZSACTR );
AZSACTR.data[6] = A_UNITE(WZSACTR,mode2,2,VZSACTR);
AATACTR = YZSACTR ;
AZSACTR.data[7] = A_UNITE(ZZSACTR,mode2,2,AATACTR);
 /* line 64: */
AZSACTR.data[8] = A_UNITE(BATACTR,mode4,4,EIAACTR_cnewline);
FATACTR = DATACTR ;
AZSACTR.data[9] = A_UNITE(EATACTR,mode2,2,FATACTR);
AZSACTR.data[10] = A_UNITE(GATACTR,mode2,2,ZYSACTR_temp);
 /* line 65: */
KATACTR = IATACTR ;
AZSACTR.data[11] = A_UNITE(JATACTR,mode2,2,KATACTR);
AZSACTR.data[12] = A_UNITE(LATACTR,mode4,4,EIAACTR_cnewline);
VBMACTR_writecstream(A_HISVEC(MATACTR,AZSACTR,13,A68_66 ), ZQLACTR_locdecstream(EQLACTR_currentlevel()));
 /* line 66: */
NATACTR.data[0] = A_UNITE(OATACTR,mode2,2,ZYSACTR_temp);
SATACTR = QATACTR ;
NATACTR.data[1] = A_UNITE(RATACTR,mode2,2,SATACTR);
PWPACTR_getcfragment( TYSACTR_op, &TATACTR );
NATACTR.data[2] = A_UNITE(UATACTR,mode2,2,TATACTR);
YATACTR = WATACTR ;
NATACTR.data[3] = A_UNITE(XATACTR,mode2,2,YATACTR);
SLQACTR_emitline(A_HISVEC(ZATACTR,NATACTR,4,A68_166 ));
 /* line 67: */
 /* line 68: */
 /* line 69: */
 /* line 70: */
JIAACTR_bracket( A_VC_PLUS(ZYSACTR_temp,BBTACTR), &CBTACTR );
UYSACTR.Extra = A_UNITE(DBTACTR,mode6,6,CBTACTR);
} 
EBTACTR = UYSACTR;
} 
A_PROC_EXIT(biop99);
*ReturnedValue = (EBTACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  HBTACTR_cast_biop(A68_94 * Root, A68_INT  Biop, A68_94  *ReturnedValue)
{ 
A68_94 * IBTACTR_op;
A68_94  JBTACTR;  /* collateral clause result */
A68_VC  KBTACTR;  /* avoid structure result */
A68_VC  LBTACTR;  /* avoid structure result */
A68_95  MBTACTR;  /* OPERATORS - mode -> union mode */
A68_VC  NBTACTR;  /* YIELD */
A68_94  OBTACTR;  /* clause result */
A_PROC_ENTRY(cast_biop);
 /* line 73: */
 /* line 74: */
{ 
ZUQACTR_eval1(Root, (&IBTACTR_op));
 /* line 75: */
 /* line 76: */
JBTACTR.Mode = (*(&(Root->Mode)));
 /* line 77: */
JBTACTR.Info = (A68_BITS )((A68_BITS )((*(&(IBTACTR_op->Info)))&GJJACTR_fxwarn)|AJJACTR_atomic);
 /* line 78: */
 /* line 79: */
OJNACTR_cast( (*(&(Root->Mode))), &KBTACTR );
WAQACTR_bracketcfragment( TMQACTR_yield(IBTACTR_op), &LBTACTR );
NBTACTR = A_VC_PLUS(KBTACTR,LBTACTR) ;
JBTACTR.Extra = A_UNITE(MBTACTR,mode6,6,NBTACTR);
OBTACTR = JBTACTR;
} 
A_PROC_EXIT(cast_biop);
*ReturnedValue = (OBTACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  RBTACTR_istruct_to_amode(A68_94 * Root, A68_INT  Biop, A68_94  *ReturnedValue)
{ 
A68_94 * SBTACTR_op;
A68_INT  TBTACTR_opmode;
A68_BOOL  UBTACTR;  /* optbool result */
A68_BOOL  VBTACTR;  /* clause result */
A68_94  WBTACTR;  /* collateral clause result */
A68_VC  YBTACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  ZBTACTR;  /* avoid structure result */
A68_VC  ACTACTR;  /* avoid structure result */
A68_VC  CCTACTR;  /* avoid structure result */
A68_VC  DCTACTR;  /* avoid structure result */
A68_95  ECTACTR;  /* OPERATORS - mode -> union mode */
A68_94  FCTACTR;  /* clause result */
A68_VC  GCTACTR;  /* avoid structure result */
A68_82  HCTACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(istruct_to_amode);
 /* line 82: */
 /* line 83: */
{ 
ZUQACTR_eval1(Root, (&SBTACTR_op));
 /* line 84: */
TBTACTR_opmode = (*(&(SBTACTR_op->Mode)));
 /* line 85: */
UBTACTR = (TBTACTR_opmode<VFAACTR_refmark);
if ( UBTACTR )
{ /* line 86: */
UBTACTR = GQMACTR_isistruct(TBTACTR_opmode);
}
 /* line 87: */
VBTACTR = UBTACTR;
if ( VBTACTR )
{ 
 /* line 88: */
WBTACTR.Mode = (*(&(Root->Mode)));
 /* line 89: */
WBTACTR.Info = (A68_BITS )((A68_BITS )((*(&(SBTACTR_op->Info)))&GJJACTR_fxwarn)|AJJACTR_atomic);
 /* line 90: */
 /* line 91: */
 /* line 92: */
OJNACTR_cast( ((*(&(Root->Mode)))+VFAACTR_refmark), &ZBTACTR );
PWPACTR_getcfragment( TMQACTR_yield(SBTACTR_op), &ACTACTR );
JIAACTR_bracket( A_VC_PLUS(ACTACTR,BCTACTR), &CCTACTR );
JIAACTR_bracket( A_VC_PLUS(A_VC_PLUS(A_HVEC(YBTACTR,'*',A68_CHAR ),ZBTACTR),CCTACTR), &DCTACTR );
WBTACTR.Extra = A_UNITE(ECTACTR,mode6,6,DCTACTR);
FCTACTR = WBTACTR;
} 
else
{ 
ROAAOSF_whole( Biop, 0, &GCTACTR );
A_CALLPROC(HWIACTR_perror,(214, A_HARR(HCTACTR,GCTACTR,A68_VC )),(214, A_HARR(HCTACTR,GCTACTR,A68_VC ),(HWIACTR_perror).nonlocals));
 /* line 93: */
 /* line 94: */
FCTACTR = MJJACTR_skipvalue;
} 
} 
A_PROC_EXIT(istruct_to_amode);
*ReturnedValue = (FCTACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  KCTACTR_generic_monadic_biop(A68_94 * Root, A68_INT  Biop, A68_94  *ReturnedValue)
{ 
A68_94 * LCTACTR_op;
A68_VC  OCTACTR;  /* avoid structure result */
A68_VC  PCTACTR_biopstr;
A68_94  QCTACTR;  /* collateral clause result */
A68_169  SCTACTR;  /* clause result */
A68_166  TCTACTR;  /* OPERATORS - mode -> union mode */
A68_94 * UCTACTR;  /* YIELD */
A68_169  VCTACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_194  WCTACTR;  /* collateral clause result */
A68_166  XCTACTR;  /* OPERATORS - mode -> union mode */
A68_94 * YCTACTR;  /* YIELD */
A68_98  ZCTACTR;  /* avoid structure result */
A68_166  ADTACTR;  /* OPERATORS - mode -> union mode */
A68_169  BDTACTR;  /* OPERATORS - istruct -> vector */
A68_195  CDTACTR;  /* collateral clause result */
A68_166  DDTACTR;  /* OPERATORS - mode -> union mode */
A68_94 * EDTACTR;  /* YIELD */
A68_98  FDTACTR;  /* avoid structure result */
A68_166  GDTACTR;  /* OPERATORS - mode -> union mode */
A68_98  HDTACTR;  /* avoid structure result */
A68_166  IDTACTR;  /* OPERATORS - mode -> union mode */
A68_169  JDTACTR;  /* OPERATORS - istruct -> vector */
A68_169  MDTACTR;  /* OPERATORS - skip to mode */
A68_VC  ODTACTR;  /* avoid structure result */
A68_95  PDTACTR;  /* OPERATORS - mode -> union mode */
A68_94  QDTACTR;  /* clause result */
A_PROC_ENTRY(generic_monadic_biop);
 /* line 109: */
 /* line 110: */
{ 
ZUQACTR_eval1(Root, (&LCTACTR_op));
 /* line 111: */
ROAAOSF_whole( Biop, 0, &OCTACTR );
PCTACTR_biopstr = A_VC_PLUS(NCTACTR,OCTACTR);
 /* line 112: */
 /* line 113: */
QCTACTR.Mode = (*(&(Root->Mode)));
 /* line 114: */
QCTACTR.Info = (A68_BITS )((A68_BITS )((*(&(LCTACTR_op->Info)))&GJJACTR_fxwarn)|AJJACTR_atomic);
 /* line 115: */
 /* line 116: */
 /* line 118: */
switch ( (Biop/1000) )
{ 
case 1: 
 /* line 120: */
UCTACTR = TMQACTR_yield(LCTACTR_op) ;
SCTACTR = A_HVEC(VCTACTR,A_UNITE(TCTACTR,mode1,1,UCTACTR),A68_166 );
break;
case 2: 
YCTACTR = TMQACTR_yield(LCTACTR_op) ;
WCTACTR.data[0] = A_UNITE(XCTACTR,mode1,1,YCTACTR);
 /* line 122: */
A_CALLPROC(TJOACTR_new,((*(&(Root->Mode))), PCTACTR_biopstr, &ZCTACTR),((*(&(Root->Mode))), PCTACTR_biopstr, &ZCTACTR,(TJOACTR_new).nonlocals));
WCTACTR.data[1] = A_UNITE(ADTACTR,mode3,3,ZCTACTR);
SCTACTR = A_HISVEC(BDTACTR,WCTACTR,2,A68_166 );
break;
case 3: 
EDTACTR = TMQACTR_yield(LCTACTR_op) ;
CDTACTR.data[0] = A_UNITE(DDTACTR,mode1,1,EDTACTR);
A_CALLPROC(TJOACTR_new,((*(&(Root->Mode))), PCTACTR_biopstr, &FDTACTR),((*(&(Root->Mode))), PCTACTR_biopstr, &FDTACTR,(TJOACTR_new).nonlocals));
CDTACTR.data[1] = A_UNITE(GDTACTR,mode3,3,FDTACTR);
 /* line 123: */
 /* line 124: */
A_CALLPROC(TJOACTR_new,((*(&(LCTACTR_op->Mode))), PCTACTR_biopstr, &HDTACTR),((*(&(LCTACTR_op->Mode))), PCTACTR_biopstr, &HDTACTR,(TJOACTR_new).nonlocals));
CDTACTR.data[2] = A_UNITE(IDTACTR,mode3,3,HDTACTR);
SCTACTR = A_HISVEC(JDTACTR,CDTACTR,3,A68_166 );
break;
default: 
PXIACTR_assert(LDTACTR, A68_FALSE);
 /* line 125: */
 /* line 126: */
SCTACTR = MDTACTR;
break;
} 
 /* line 127: */
 /* line 128: */
NLQACTR_usemacro( A_VC_PLUS(NDTACTR,PCTACTR_biopstr), SCTACTR, &ODTACTR );
QCTACTR.Extra = A_UNITE(PDTACTR,mode6,6,ODTACTR);
QDTACTR = QCTACTR;
} 
A_PROC_EXIT(generic_monadic_biop);
*ReturnedValue = (QDTACTR);
return;
} 
#undef NL

A68_VOID  TDTACTR_monadicbiopsemantics(A68_94 * Root, A68_INT  Biop, A68_94  *ReturnedValue)
{ 
A68_94  UDTACTR;  /* clause result */
A68_94  VDTACTR;  /* avoid structure result */
A68_94  WDTACTR;  /* avoid structure result */
A68_BOOL  XDTACTR;  /* optbool result */
A68_94  YDTACTR;  /* avoid structure result */
A68_VC  ZDTACTR;  /* avoid structure result */
A68_82  AETACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(monadicbiopsemantics);
 /* line 131: */
 /* line 132: */
 /* line 133: */
 /* line 134: */
if ( (Biop==9999) )
{ 
 /* line 135: */
 /* line 136: */
HBTACTR_cast_biop( Root, Biop, &VDTACTR );
UDTACTR = VDTACTR;
} 
else
{ 
 /* line 137: */
 /* line 138: */
if ( (Biop==5001) )
{ 
 /* line 139: */
 /* line 140: */
RBTACTR_istruct_to_amode( Root, Biop, &WDTACTR );
UDTACTR = WDTACTR;
} 
else
{ 
XDTACTR = (Biop>1000);
if ( XDTACTR )
{ /* line 141: */
XDTACTR = (Biop<4000);
}
 /* line 142: */
if ( XDTACTR )
{ 
 /* line 143: */
 /* line 144: */
KCTACTR_generic_monadic_biop( Root, Biop, &YDTACTR );
UDTACTR = YDTACTR;
} 
else
{ 
ROAAOSF_whole( Biop, 0, &ZDTACTR );
A_CALLPROC(HWIACTR_perror,(213, A_HARR(AETACTR,ZDTACTR,A68_VC )),(213, A_HARR(AETACTR,ZDTACTR,A68_VC ),(HWIACTR_perror).nonlocals));
 /* line 145: */
 /* line 146: */
UDTACTR = MJJACTR_skipvalue;
} 
} 
} 
A_PROC_EXIT(monadicbiopsemantics);
*ReturnedValue = (UDTACTR);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 3: */
 /* line 4: */
 /* line 6: */
void JYSACTR(void)   /* initialise DECS biops */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/shields/projects/Algol68/Tools/Algol68toC/src/a68toc","-v","-uname","seedfile","-lib","/home/shields/projects/Algol68/Tools/Algol68toC/a68config","-dir","/home/shields/projects/Algol68/Tools/Algol68toC/a68config","-dir","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel","-dir",".","biops.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/shields/projects/Algol68/Tools/Algol68toC/a68config","A68_CDIR=","A68_DIR=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/shields/projects/Algol68/Tools/Algol68toC/a68config/a68config.m","./values.m","./uniquenameserver.m","./modes.m","./incmode.m","./idtable.m","./incoperfn.m","./evalbase.m","./environment.m","./environ.m","./coutput.m","./centities.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/usefulops.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
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
IKAAOSF();   /* USE usefulops */
/* --- Initialise configuration information */
A_config.source_file = "/home/shields/projects/Algol68/Tools/Algol68toC/src/biops.a68";
A_config.translation_time = "Sun Sep 26 21:51:04 2004";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "IYSACTR (from seed file) ";
A_config.spec_change_time = "Sun Sep 26 21:51:04 2004";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS biops);
UEAALIB_a68config(LGAALIB_configinfo, NYSACTR);
 /* line 46: */
QYSACTR_modulename = PYSACTR;
 /* line 48: */
 /* line 72: */
 /* line 81: */
 /* line 96: */
 /* line 130: */
 /* line 148: */
 /* line 150: */
 /* line 152: */
/*SKIP*/;
A_PROC_EXIT(DECS biops);
} 
#undef NL
/* end of translation of biops.a68 */
