/* UNAME:PSYACTR */
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
struct A68t78 ;

A_PROCEDURE(A68_VOID ,A68t77,(struct A68t78 *,A68_BOOL ),(struct A68t78 *,A68_BOOL ,void *));
typedef struct A68t77  A68_77 ;    /* PROC(REF MODE78,BOOL) VOID */
struct A68t80{
A68_INT  Rdenno;
A_PAD_INT(PAD_8)
};
typedef struct A68t80  A68_80 ;    /* STRUCT(INT)  */
struct A68t81{
A68_INT  Idno;
A_PAD_INT(PAD_9)
};
typedef struct A68t81  A68_81 ;    /* STRUCT(INT)  */
struct A68t82{
struct A68t56  Name;
A_PAD_ISTRUCT(A68_56 ,PAD_10)
A68_INT  Mode;
A_PAD_INT(PAD_11)
};
typedef struct A68t82  A68_82 ;    /* STRUCT(MODE56,INT)  */
struct A68t83{
A68_INT  Nse;
A_PAD_INT(PAD_12)
};
typedef struct A68t83  A68_83 ;    /* STRUCT(INT)  */
struct A68t84{
A68_INT  Fn;
A_PAD_INT(PAD_13)
A68_INT  Param;
A_PAD_INT(PAD_14)
struct A68t85 * Operands;
};
typedef struct A68t84  A68_84 ;    /* STRUCT(INT,INT,REF MODE85)  */
struct A68t79 { A68_INT mode; union {
A68_LBITS  mode1;
struct A68t80  mode2;
struct A68t81  mode4;
struct A68t82  mode5;
A68_VC  mode6;
struct A68t57  mode7;
struct A68t83  mode8;
struct A68t84  mode9;
} data; };
typedef struct A68t79  A68_79 ;    /* UNION(LONG BITS,MODE80,VOID,MODE81,MODE82,MODE26,MODE57,MODE83,MODE84)  */
struct A68t78{
A68_INT  Mode;
A_PAD_INT(PAD_15)
A68_BITS  Info;
A_PAD_BITS(PAD_16)
struct A68t79  Extra;
};
typedef struct A68t78  A68_78 ;    /* STRUCT(INT,BITS,MODE79)  */
struct A68t85{
struct A68t78  Value;
struct A68t85 * Rest;
};
typedef struct A68t85  A68_85 ;    /* STRUCT(MODE78,REF MODE85)  */

A_PROCEDURE(A68_VOID ,A68t86,(struct A68t78 *),(struct A68t78 *,void *));
typedef struct A68t86  A68_86 ;    /* PROC(REF MODE78) VOID */

A_PROCEDURE(A68_VOID ,A68t87,(struct A68t85 **),(struct A68t85 **,void *));
typedef struct A68t87  A68_87 ;    /* PROC(REF REF MODE85) VOID */
struct A68t89 ;

A_PROCEDURE(A68_VOID ,A68t88,(struct A68t89 ,struct A68t78 *,A68_INT ),(struct A68t89 ,struct A68t78 *,A68_INT ,void *));
typedef struct A68t88  A68_88 ;    /* PROC(MODE89,REF MODE78,INT) VOID */
struct A68t89{
A68_INT  Type;
A_PAD_INT(PAD_17)
A68_VC  Name;
A68_INT  Mode;
A_PAD_INT(PAD_18)
A68_INT  Decno;
A_PAD_INT(PAD_19)
};
typedef struct A68t89  A68_89 ;    /* STRUCT(INT,REF MODE26,INT,INT)  */
struct A68t91 ;

A_PROCEDURE(A68_VOID ,A68t90,(A68_INT ,struct A68t91 *),(A68_INT ,struct A68t91 *,void *));
typedef struct A68t90  A68_90 ;    /* PROC(INT) MODE91 */
struct A68t91{
A68_INT  Level;
A_PAD_INT(PAD_20)
A68_INT  Block;
A_PAD_INT(PAD_21)
};
typedef struct A68t91  A68_91 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t92,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t92  A68_92 ;    /* PROC(INT,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t93,(A68_VC ,struct A68t56 ,A68_INT ,A68_INT ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_VC ,A68_VC ),(A68_VC ,struct A68t56 ,A68_INT ,A68_INT ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_VC ,A68_VC ,void *));
typedef struct A68t93  A68_93 ;    /* PROC(REF MODE26,MODE56,INT,INT,BOOL,BOOL,BOOL,BOOL,BOOL,REF MODE26,REF MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t94,(struct A68t89 ,struct A68t85 **),(struct A68t89 ,struct A68t85 **,void *));
typedef struct A68t94  A68_94 ;    /* PROC(MODE89,REF REF MODE85) VOID */
A_ROW(struct A68t96 ,A68t95,1);
typedef struct A68t95  A68_95 ;    /* [] MODE96 */
struct A68t96{
A68_INT  Mode;
A_PAD_INT(PAD_22)
A68_INT  Cvariabletype;
A_PAD_INT(PAD_23)
struct A68t91  Environ;
A68_VC  Name;
A68_VC  C_name;
struct A68t56  Prefix;
A_PAD_ISTRUCT(A68_56 ,PAD_24)
A68_BITS  Flags;
A_PAD_BITS(PAD_25)
A68_VC  Definition;
A68_VC  Rhs;
};
typedef struct A68t96  A68_96 ;    /* STRUCT(INT,INT,MODE91,REF MODE26,REF MODE26,MODE56,BITS,REF MODE26,REF MODE26)  */

A_PROCEDURE(A68_VOID ,A68t97,(struct A68t89 ),(struct A68t89 ,void *));
typedef struct A68t97  A68_97 ;    /* PROC(MODE89) VOID */
struct A68t99 ;

A_PROCEDURE(A68_VOID ,A68t98,(struct A68t99 ),(struct A68t99 ,void *));
typedef struct A68t98  A68_98 ;    /* PROC(MODE99) VOID */
struct A68t99{
A68_VC  Name;
A68_INT  Labno;
A_PAD_INT(PAD_26)
A68_INT  Status;
A_PAD_INT(PAD_27)
A68_BOOL  Notsetting;
A_PAD_BOOL(PAD_28)
};
typedef struct A68t99  A68_99 ;    /* STRUCT(REF MODE26,INT,INT,BOOL)  */

A_PROCEDURE(A68_INT ,A68t100,(A68_INT ),(A68_INT ,void *));
typedef struct A68t100  A68_100 ;    /* PROC(INT) INT */
struct A68t102 ;

A_PROCEDURE(A68_VOID ,A68t101,(A68_VC ,A68_INT ,struct A68t102 ,A68_INT ,A68_INT ,struct A68t91 ,A68_BITS ),(A68_VC ,A68_INT ,struct A68t102 ,A68_INT ,A68_INT ,struct A68t91 ,A68_BITS ,void *));
typedef struct A68t101  A68_101 ;    /* PROC(REF MODE26,INT,REF MODE102,INT,INT,MODE91,BITS) VOID */
A_VECTOR(A68_INT ,A68t102);
typedef struct A68t102  A68_102 ;    /* VECTOR [] INT */
A_ROW(struct A68t104 ,A68t103,1);
typedef struct A68t103  A68_103 ;    /* [] MODE104 */
struct A68t104{
A68_INT  Mode;
A_PAD_INT(PAD_29)
A68_INT  Resultmode;
A_PAD_INT(PAD_30)
A68_INT  Declevel;
A_PAD_INT(PAD_31)
struct A68t91  Environ;
A68_VC  Name;
struct A68t56  Prefix;
A_PAD_ISTRUCT(A68_56 ,PAD_32)
struct A68t56  Fnprefix;
A_PAD_ISTRUCT(A68_56 ,PAD_33)
struct A68t56  Envprefix;
A_PAD_ISTRUCT(A68_56 ,PAD_34)
A68_BITS  Flags;
A_PAD_BITS(PAD_35)
};
typedef struct A68t104  A68_104 ;    /* STRUCT(INT,INT,INT,MODE91,REF MODE26,MODE56,MODE56,MODE56,BITS)  */
struct A68t105{
A68_INT  Mode;
A_PAD_INT(PAD_36)
A68_VC  String;
};
typedef struct A68t105  A68_105 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t106{
A68_INT  I;
A_PAD_INT(PAD_37)
};
typedef struct A68t106  A68_106 ;    /* STRUCT(INT)  */
A_ROW(A68_INT ,A68t108,1);
typedef struct A68t108  A68_108 ;    /* [] INT */
struct A68t107{
A68_INT  Body;
A_PAD_INT(PAD_38)
A68_INT  Moduleno;
A_PAD_INT(PAD_39)
struct A68t108  Actuals;
};
typedef struct A68t107  A68_107 ;    /* STRUCT(INT,INT,REF MODE108)  */
struct A68t109{
A68_INT  Mode;
A_PAD_INT(PAD_40)
A68_INT  Number;
A_PAD_INT(PAD_41)
A68_VC  Insert;
};
typedef struct A68t109  A68_109 ;    /* STRUCT(INT,INT,REF MODE26)  */
struct A68t111{
A68_INT  Moduleno;
A_PAD_INT(PAD_42)
A68_INT  I;
A_PAD_INT(PAD_43)
A68_INT  J;
A_PAD_INT(PAD_44)
};
typedef struct A68t111  A68_111 ;    /* STRUCT(INT,INT,INT)  */
A_ROW(A68_VC ,A68t113,1);
typedef struct A68t113  A68_113 ;    /* [] REF MODE26 */
struct A68t112{
A68_INT  Moduleno;
A_PAD_INT(PAD_45)
A68_VC  Name;
A68_VC  Uname;
A68_VC  Lname;
A68_VC  Gname;
struct A68t113  Ysnames;
};
typedef struct A68t112  A68_112 ;    /* STRUCT(INT,REF MODE26,REF MODE26,REF MODE26,REF MODE26,REF MODE113)  */
struct A68t110 { A68_INT mode; union {
struct A68t107  mode1;
struct A68t111  mode2;
struct A68t112  mode3;
} data; };
typedef struct A68t110  A68_110 ;    /* UNION(MODE107,MODE111,MODE112)  */
struct A68t115{
A68_INT  Nochars;
A_PAD_INT(PAD_46)
A68_INT  Nocases;
A_PAD_INT(PAD_47)
A68_INT  W;
A_PAD_INT(PAD_48)
};
typedef struct A68t115  A68_115 ;    /* STRUCT(INT,INT,INT)  */
struct A68t114{
struct A68t115  Info;
A68_VC  Text;
};
typedef struct A68t114  A68_114 ;    /* STRUCT(MODE115,REF MODE26)  */
struct A68t116{
A68_VC  Representation;
};
typedef struct A68t116  A68_116 ;    /* STRUCT(REF MODE26)  */
struct A68t118{
A68_INT  Mode;
A_PAD_INT(PAD_49)
A68_VC  Nu;
};
typedef struct A68t118  A68_118 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t119{
A68_INT  Mode;
A_PAD_INT(PAD_50)
A68_LBITS  Denotation;
A_PAD_LBITS(PAD_51)
};
typedef struct A68t119  A68_119 ;    /* STRUCT(INT,LONG BITS)  */
struct A68t120{
A68_INT  Mode;
A_PAD_INT(PAD_52)
A68_VC  Denotation;
};
typedef struct A68t120  A68_120 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t121{
A68_INT  Fn;
A_PAD_INT(PAD_53)
A68_INT  Mode;
A_PAD_INT(PAD_54)
A68_INT  Param;
A_PAD_INT(PAD_55)
};
typedef struct A68t121  A68_121 ;    /* STRUCT(INT,INT,INT)  */
struct A68t122{
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
typedef struct A68t122  A68_122 ;    /* STRUCT(REF MODE26,BITS,INT,INT,INT)  */
struct A68t123{
A68_INT  W;
A_PAD_INT(PAD_60)
};
typedef struct A68t123  A68_123 ;    /* STRUCT(INT)  */
struct A68t124{
A68_INT  Mode;
A_PAD_INT(PAD_61)
A68_BITS  Props;
A_PAD_BITS(PAD_62)
A68_INT  Param;
A_PAD_INT(PAD_63)
};
typedef struct A68t124  A68_124 ;    /* STRUCT(INT,BITS,INT)  */
struct A68t125{
A68_BOOL  Start;
A_PAD_BOOL(PAD_64)
};
typedef struct A68t125  A68_125 ;    /* STRUCT(BOOL)  */
struct A68t126{
A68_INT  Fn;
A_PAD_INT(PAD_65)
A68_INT  Mode;
A_PAD_INT(PAD_66)
A68_BITS  Props;
A_PAD_BITS(PAD_67)
A68_INT  Param;
A_PAD_INT(PAD_68)
};
typedef struct A68t126  A68_126 ;    /* STRUCT(INT,INT,BITS,INT)  */
struct A68t127{
A68_INT  Fn;
A_PAD_INT(PAD_69)
A68_INT  Mode;
A_PAD_INT(PAD_70)
A68_BITS  Props;
A_PAD_BITS(PAD_71)
A68_INT  Resultmode;
A_PAD_INT(PAD_72)
};
typedef struct A68t127  A68_127 ;    /* STRUCT(INT,INT,BITS,INT)  */
struct A68t128{
A68_INT  Fn;
A_PAD_INT(PAD_73)
A68_BITS  Props;
A_PAD_BITS(PAD_74)
};
typedef struct A68t128  A68_128 ;    /* STRUCT(INT,BITS)  */
struct A68t117 { A68_INT mode; union {
struct A68t83  mode1;
A68_INT  mode2;
A68_BOOL  mode3;
struct A68t116  mode4;
struct A68t57  mode5;
struct A68t118  mode6;
struct A68t105  mode7;
struct A68t119  mode8;
struct A68t120  mode9;
struct A68t121  mode10;
struct A68t89  mode11;
struct A68t122  mode12;
struct A68t123  mode13;
struct A68t99  mode14;
struct A68t124  mode15;
struct A68t106  mode16;
struct A68t125  mode17;
struct A68t114  mode18;
struct A68t109  mode19;
struct A68t126  mode20;
struct A68t127  mode21;
struct A68t128  mode22;
struct A68t107  mode23;
struct A68t111  mode24;
struct A68t112  mode25;
} data; };
typedef struct A68t117  A68_117 ;    /* UNION(MODE83,INT,BOOL,MODE116,MODE57,MODE118,MODE105,MODE119,MODE120,MODE121,MODE89,MODE122,MODE123,MODE99,MODE124,MODE106,MODE125,MODE114,MODE109,MODE126,MODE127,MODE128,MODE107,MODE111,MODE112,VOID)  */
struct A68t129 { A68_INT mode; union {
struct A68t83  mode1;
A68_INT  mode2;
A68_BOOL  mode3;
struct A68t116  mode4;
struct A68t57  mode5;
struct A68t118  mode6;
struct A68t105  mode7;
struct A68t119  mode8;
struct A68t120  mode9;
} data; };
typedef struct A68t129  A68_129 ;    /* UNION(MODE83,INT,BOOL,MODE116,MODE57,MODE118,MODE105,MODE119,MODE120)  */
struct A68t130 { A68_INT mode; union {
struct A68t83  mode1;
A68_INT  mode2;
A68_BOOL  mode3;
struct A68t116  mode4;
struct A68t57  mode5;
struct A68t118  mode6;
struct A68t105  mode7;
struct A68t119  mode8;
struct A68t120  mode9;
struct A68t121  mode10;
struct A68t89  mode11;
struct A68t122  mode12;
struct A68t123  mode13;
struct A68t99  mode14;
struct A68t124  mode15;
struct A68t106  mode16;
struct A68t125  mode17;
struct A68t114  mode18;
struct A68t109  mode19;
} data; };
typedef struct A68t130  A68_130 ;    /* UNION(MODE83,INT,BOOL,MODE116,MODE57,MODE118,MODE105,MODE119,MODE120,MODE121,MODE89,MODE122,MODE123,MODE99,MODE124,MODE106,MODE125,MODE114,MODE109)  */
struct A68t131{
struct A68t55  Label;
struct A68t91  Environ;
A68_VC  Name;
struct A68t56  Prefix;
A_PAD_ISTRUCT(A68_56 ,PAD_75)
A68_BITS  Flags;
A_PAD_BITS(PAD_76)
A68_INT  Alias;
A_PAD_INT(PAD_77)
};
typedef struct A68t131  A68_131 ;    /* STRUCT(MODE55,MODE91,REF MODE26,MODE56,BITS,INT)  */

A_PROCEDURE(struct A68t96 *,A68t132,(A68_INT ),(A68_INT ,void *));
typedef struct A68t132  A68_132 ;    /* PROC(INT) REF MODE96 */

A_PROCEDURE(A68_VOID ,A68t133,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t133  A68_133 ;    /* PROC(REF MODE26) MODE26 */
A_ROW(struct A68t131 ,A68t134,1);
typedef struct A68t134  A68_134 ;    /* [] MODE131 */

A_PROCEDURE(A68_BOOL ,A68t135,(A68_INT ),(A68_INT ,void *));
typedef struct A68t135  A68_135 ;    /* PROC(INT) BOOL */

A_PROCEDURE(A68_VOID ,A68t136,(A68_INT ,A68_INT ,A68_INT ,A68_INT ,struct A68t108 ),(A68_INT ,A68_INT ,A68_INT ,A68_INT ,struct A68t108 ,void *));
typedef struct A68t136  A68_136 ;    /* PROC(INT,INT,INT,INT,REF MODE108) VOID */

A_PROCEDURE(A68_BOOL ,A68t137,(A68_VC ),(A68_VC ,void *));
typedef struct A68t137  A68_137 ;    /* PROC(MODE26) BOOL */
struct A68t138{
struct A68t78 * Value;
struct A68t55 * End;
A68_INT  Type;
A_PAD_INT(PAD_78)
};
typedef struct A68t138  A68_138 ;    /* STRUCT(REF MODE78,REF MODE55,INT)  */
struct A68t139{
A68_INT  Parameters;
A_PAD_INT(PAD_79)
A68_INT  Result;
A_PAD_INT(PAD_80)
A68_BOOL  Hasdescriptors;
A_PAD_BOOL(PAD_81)
};
typedef struct A68t139  A68_139 ;    /* STRUCT(INT,INT,BOOL)  */
A_ISTRUCT(A68_CHAR ,32,A68t141);
typedef struct A68t141  A68_141 ;    /* STRUCT 32 CHAR */
struct A68t140{
A68_INT  Mode;
A_PAD_INT(PAD_82)
A68_INT  Offset;
A_PAD_INT(PAD_83)
struct A68t141  Name;
A_PAD_ISTRUCT(A68_141 ,PAD_84)
};
typedef struct A68t140  A68_140 ;    /* STRUCT(INT,INT,MODE141)  */

A_PROCEDURE(A68_VOID ,A68t142,(A68_INT ,struct A68t102 *),(A68_INT ,struct A68t102 *,void *));
typedef struct A68t142  A68_142 ;    /* PROC(INT) REF MODE102 */

A_PROCEDURE(A68_VOID ,A68t143,(struct A68t140 *,A68_VC *),(struct A68t140 *,A68_VC *,void *));
typedef struct A68t143  A68_143 ;    /* PROC(REF MODE140) MODE26 */

A_PROCEDURE(A68_VOID ,A68t144,(A68_INT ,A68_VC ,struct A68t82 *),(A68_INT ,A68_VC ,struct A68t82 *,void *));
typedef struct A68t144  A68_144 ;    /* PROC(INT,MODE26) MODE82 */
struct A68t146 ;

A_PROCEDURE(A68_VOID ,A68t145,(struct A68t146 ,A68_INT ),(struct A68t146 ,A68_INT ,void *));
typedef struct A68t145  A68_145 ;    /* PROC(REF MODE146,INT) VOID */
A_ROW(struct A68t147 ,A68t146,1);
typedef struct A68t146  A68_146 ;    /* [] MODE147 */
struct A68t157{
A68_INT  Mode;
A_PAD_INT(PAD_85)
};
typedef struct A68t157  A68_157 ;    /* STRUCT(INT)  */
struct A68t147 { A68_INT mode; union {
A68_INT  mode1;
struct A68t148 * mode2;
struct A68t149 * mode3;
struct A68t150 * mode4;
struct A68t151 * mode5;
struct A68t152 * mode6;
struct A68t153 * mode7;
struct A68t154 * mode8;
struct A68t155 * mode9;
struct A68t156 * mode10;
struct A68t157  mode11;
} data; };
typedef struct A68t147  A68_147 ;    /* UNION(INT,REF MODE148,REF MODE149,REF MODE150,REF MODE151,REF MODE152,REF MODE153,REF MODE154,REF MODE155,REF MODE156,MODE157)  */
struct A68t148{
A68_INT  Rdenno;
A_PAD_INT(PAD_86)
struct A68t161 * Modelist;
};
typedef struct A68t148  A68_148 ;    /* STRUCT(INT,REF MODE161)  */
struct A68t149{
A68_INT  Deproc;
A_PAD_INT(PAD_87)
struct A68t161 * Pars;
};
typedef struct A68t149  A68_149 ;    /* STRUCT(INT,REF MODE161)  */
struct A68t150{
A68_INT  Rdenno;
A_PAD_INT(PAD_88)
A68_INT  Deflex;
A_PAD_INT(PAD_89)
struct A68t160 * Sels;
};
typedef struct A68t150  A68_150 ;    /* STRUCT(INT,INT,REF MODE160)  */
struct A68t151{
A68_INT  Rdenno;
A_PAD_INT(PAD_90)
A68_INT  Imode;
A_PAD_INT(PAD_91)
A68_INT  Length;
A_PAD_INT(PAD_92)
A68_INT  Deflex;
A_PAD_INT(PAD_93)
};
typedef struct A68t151  A68_151 ;    /* STRUCT(INT,INT,INT,INT)  */
struct A68t152{
A68_INT  Deproc;
A_PAD_INT(PAD_94)
};
typedef struct A68t152  A68_152 ;    /* STRUCT(INT)  */
struct A68t153{
A68_INT  Rdenno;
A_PAD_INT(PAD_95)
A68_INT  Vecmode;
A_PAD_INT(PAD_96)
A68_INT  Deflex;
A_PAD_INT(PAD_97)
};
typedef struct A68t153  A68_153 ;    /* STRUCT(INT,INT,INT)  */
struct A68t154{
A68_INT  Rdenno;
A_PAD_INT(PAD_98)
A68_INT  Mode;
A_PAD_INT(PAD_99)
A68_INT  Nods;
A_PAD_INT(PAD_100)
A68_INT  Deflex;
A_PAD_INT(PAD_101)
};
typedef struct A68t154  A68_154 ;    /* STRUCT(INT,INT,INT,INT)  */
struct A68t155{
A68_INT  Mode;
A_PAD_INT(PAD_102)
struct A68t159 * Stenlist;
};
typedef struct A68t155  A68_155 ;    /* STRUCT(INT,REF MODE159)  */
struct A68t156{
A68_INT  Mode;
A_PAD_INT(PAD_103)
A68_INT  Modeproc;
A_PAD_INT(PAD_104)
struct A68t158 * El;
};
typedef struct A68t156  A68_156 ;    /* STRUCT(INT,INT,REF MODE158)  */
struct A68t158{
struct A68t156 * Am;
struct A68t158 * Rest;
};
typedef struct A68t158  A68_158 ;    /* STRUCT(REF MODE156,REF MODE158)  */
struct A68t159{
A68_INT  Mode;
A_PAD_INT(PAD_105)
A68_INT  Rdenno;
A_PAD_INT(PAD_106)
struct A68t159 * Rest;
};
typedef struct A68t159  A68_159 ;    /* STRUCT(INT,INT,REF MODE159)  */
struct A68t160{
A68_INT  Mode;
A_PAD_INT(PAD_107)
A68_INT  Fieldno;
A_PAD_INT(PAD_108)
struct A68t141  Name;
A_PAD_ISTRUCT(A68_141 ,PAD_109)
struct A68t160 * Rest;
};
typedef struct A68t160  A68_160 ;    /* STRUCT(INT,INT,MODE141,REF MODE160)  */
struct A68t161{
A68_INT  Mode;
A_PAD_INT(PAD_110)
struct A68t161 * Rest;
};
typedef struct A68t161  A68_161 ;    /* STRUCT(INT,REF MODE161)  */

A_PROCEDURE(A68_VOID ,A68t162,(A68_INT ,struct A68t139 *),(A68_INT ,struct A68t139 *,void *));
typedef struct A68t162  A68_162 ;    /* PROC(INT) MODE139 */
struct A68t164 ;

A_PROCEDURE(A68_VOID ,A68t163,(A68_INT ,struct A68t164 *),(A68_INT ,struct A68t164 *,void *));
typedef struct A68t163  A68_163 ;    /* PROC(INT) REF MODE164 */
A_VECTOR(struct A68t140 ,A68t164);
typedef struct A68t164  A68_164 ;    /* VECTOR [] MODE140 */

A_PROCEDURE(A68_INT ,A68t165,(A68_INT ,A68_BOOL ),(A68_INT ,A68_BOOL ,void *));
typedef struct A68t165  A68_165 ;    /* PROC(INT,BOOL) INT */

A_PROCEDURE(A68_VOID ,A68t166,(A68_INT ,A68_INT ,A68_VC *),(A68_INT ,A68_INT ,A68_VC *,void *));
typedef struct A68t166  A68_166 ;    /* PROC(INT,INT) MODE26 */

A_PROCEDURE(A68_BOOL ,A68t167,(struct A68t78 *,struct A68t78 *),(struct A68t78 *,struct A68t78 *,void *));
typedef struct A68t167  A68_167 ;    /* PROC(REF MODE78,REF MODE78) BOOL */

A_PROCEDURE(A68_BOOL ,A68t168,(struct A68t78 *),(struct A68t78 *,void *));
typedef struct A68t168  A68_168 ;    /* PROC(REF MODE78) BOOL */

A_PROCEDURE(A68_BOOL ,A68t169,(struct A68t78 *,A68_LBITS ),(struct A68t78 *,A68_LBITS ,void *));
typedef struct A68t169  A68_169 ;    /* PROC(REF MODE78,LONG BITS) BOOL */

A_PROCEDURE(A68_LBITS ,A68t170,(struct A68t78 *),(struct A68t78 *,void *));
typedef struct A68t170  A68_170 ;    /* PROC(REF MODE78) LONG BITS */

A_PROCEDURE(A68_VOID ,A68t171,(struct A68t78 *,A68_VC *),(struct A68t78 *,A68_VC *,void *));
typedef struct A68t171  A68_171 ;    /* PROC(REF MODE78) MODE26 */

A_PROCEDURE(struct A68t78 *,A68t172,(struct A68t78 *,A68_INT ),(struct A68t78 *,A68_INT ,void *));
typedef struct A68t172  A68_172 ;    /* PROC(REF MODE78,INT) REF MODE78 */

A_PROCEDURE(A68_INT ,A68t173,(struct A68t84 ),(struct A68t84 ,void *));
typedef struct A68t173  A68_173 ;    /* PROC(MODE84) INT */

A_PROCEDURE(A68_BOOL ,A68t174,(struct A68t78 *,A68_BITS ),(struct A68t78 *,A68_BITS ,void *));
typedef struct A68t174  A68_174 ;    /* PROC(REF MODE78,BITS) BOOL */

A_PROCEDURE(struct A68t78 *,A68t175,(struct A68t85 *,A68_INT ),(struct A68t85 *,A68_INT ,void *));
typedef struct A68t175  A68_175 ;    /* PROC(REF MODE85,INT) REF MODE78 */

A_PROCEDURE(struct A68t85 *,A68t176,(struct A68t85 *),(struct A68t85 *,void *));
typedef struct A68t176  A68_176 ;    /* PROC(REF MODE85) REF MODE85 */
struct A68t178 ;

A_PROCEDURE(struct A68t78 *,A68t177,(A68_INT ,A68_INT ,A68_BITS ,struct A68t178 ),(A68_INT ,A68_INT ,A68_BITS ,struct A68t178 ,void *));
typedef struct A68t177  A68_177 ;    /* PROC(INT,INT,BITS,MODE178) REF MODE78 */
A_VECTOR(struct A68t78 *,A68t178);
typedef struct A68t178  A68_178 ;    /* VECTOR [] REF MODE78 */

A_PROCEDURE(A68_VOID ,A68t179,(struct A68t78 *,A68_BOOL ,A68_VC *),(struct A68t78 *,A68_BOOL ,A68_VC *,void *));
typedef struct A68t179  A68_179 ;    /* PROC(REF MODE78,BOOL) MODE26 */

A_PROCEDURE(A68_LINT ,A68t180,(struct A68t78 ),(struct A68t78 ,void *));
typedef struct A68t180  A68_180 ;    /* PROC(MODE78) LONG INT */
struct A68t181 { A68_INT mode; union {
struct A68t78 * mode1;
A68_VC  mode2;
struct A68t82  mode3;
} data; };
typedef struct A68t181  A68_181 ;    /* UNION(REF MODE78,MODE26,MODE82)  */

A_PROCEDURE(A68_VOID ,A68t182,(struct A68t181 ,A68_VC *),(struct A68t181 ,A68_VC *,void *));
typedef struct A68t182  A68_182 ;    /* PROC(MODE181) MODE26 */
struct A68t184 ;

A_PROCEDURE(A68_VOID ,A68t183,(struct A68t184 ,A68_VC *),(struct A68t184 ,A68_VC *,void *));
typedef struct A68t183  A68_183 ;    /* PROC(MODE184) MODE26 */
A_VECTOR(struct A68t181 ,A68t184);
typedef struct A68t184  A68_184 ;    /* VECTOR [] MODE181 */

A_PROCEDURE(A68_VOID ,A68t185,(A68_VC ,struct A68t184 ,A68_VC *),(A68_VC ,struct A68t184 ,A68_VC *,void *));
typedef struct A68t185  A68_185 ;    /* PROC(MODE26,MODE184) MODE26 */

A_PROCEDURE(A68_VOID ,A68t186,(struct A68t184 ),(struct A68t184 ,void *));
typedef struct A68t186  A68_186 ;    /* PROC(MODE184) VOID */

A_PROCEDURE(A68_VOID ,A68t187,(A68_VC ,A68_INT ,struct A68t184 ,struct A68t82 *),(A68_VC ,A68_INT ,struct A68t184 ,struct A68t82 *,void *));
typedef struct A68t187  A68_187 ;    /* PROC(MODE26,INT,MODE184) MODE82 */

A_PROCEDURE(struct A68t78 *,A68t188,(struct A68t78 *),(struct A68t78 *,void *));
typedef struct A68t188  A68_188 ;    /* PROC(REF MODE78) REF MODE78 */

A_PROCEDURE(struct A68t78 *,A68t189,(A68_VC ,struct A68t78 *),(A68_VC ,struct A68t78 *,void *));
typedef struct A68t189  A68_189 ;    /* PROC(MODE26,REF MODE78) REF MODE78 */

A_PROCEDURE(A68_VOID ,A68t190,(struct A68t60 ),(struct A68t60 ,void *));
typedef struct A68t190  A68_190 ;    /* PROC(MODE60) VOID */

A_PROCEDURE(A68_VOID ,A68t191,(struct A68t70 ),(struct A68t70 ,void *));
typedef struct A68t191  A68_191 ;    /* PROC(MODE70) VOID */

A_PROCEDURE(A68_VOID ,A68t192,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t192  A68_192 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,61,A68t193);
typedef struct A68t193  A68_193 ;    /* STRUCT 61 CHAR */

A_PROCEDURE(A68_VOID ,A68t194,(struct A68t36 ),(struct A68t36 ,void *));
typedef struct A68t194  A68_194 ;    /* PROC(MODE36) VOID */
A_ISTRUCT(A68_CHAR ,1,A68t195);
typedef struct A68t195  A68_195 ;    /* STRUCT 0 CHAR */
A_ISTRUCT(A68_CHAR ,2,A68t196);
typedef struct A68t196  A68_196 ;    /* STRUCT 2 CHAR */

A_PROCEDURE(struct A68t196 ,A68t197,(A68_BOOL ),(A68_BOOL ,void *));
typedef struct A68t197  A68_197 ;    /* PROC(BOOL) MODE196 */

A_PROCEDURE(A68_VOID ,A68t198,(A68_INT ,A68_INT ,struct A68t78 *),(A68_INT ,A68_INT ,struct A68t78 *,void *));
typedef struct A68t198  A68_198 ;    /* PROC(INT,INT,REF MODE78) VOID */
A_ISTRUCT(A68_CHAR ,5,A68t199);
typedef struct A68t199  A68_199 ;    /* STRUCT 5 CHAR */
A_ISTRUCT(A68_VC ,2,A68t200);
typedef struct A68t200  A68_200 ;    /* STRUCT 2 MODE26 */
A_ISTRUCT(A68_CHAR ,10,A68t201);
typedef struct A68t201  A68_201 ;    /* STRUCT 10 CHAR */
struct A68t202 { A68_INT mode; union {
struct A68t89  mode1;
struct A68t99  mode2;
} data; };
typedef struct A68t202  A68_202 ;    /* UNION(MODE89,MODE99)  */

A_PROCEDURE(A68_VOID ,A68t203,(struct A68t202 ),(struct A68t202 ,void *));
typedef struct A68t203  A68_203 ;    /* PROC(MODE202) VOID */
A_ISTRUCT(A68_CHAR ,15,A68t204);
typedef struct A68t204  A68_204 ;    /* STRUCT 15 CHAR */
A_ISTRUCT(A68_VC ,3,A68t205);
typedef struct A68t205  A68_205 ;    /* STRUCT 3 MODE26 */
A_ISTRUCT(A68_CHAR ,16,A68t206);
typedef struct A68t206  A68_206 ;    /* STRUCT 16 CHAR */
A_ISTRUCT(A68_CHAR ,6,A68t207);
typedef struct A68t207  A68_207 ;    /* STRUCT 6 CHAR */

A_PROCEDURE(A68_VOID ,A68t208,(struct A68t117 ,struct A68t78 *,A68_BOOL ),(struct A68t117 ,struct A68t78 *,A68_BOOL ,void *));
typedef struct A68t208  A68_208 ;    /* PROC(MODE117,REF MODE78,BOOL) VOID */
A_ISTRUCT(A68_CHAR ,27,A68t209);
typedef struct A68t209  A68_209 ;    /* STRUCT 27 CHAR */
A_ISTRUCT(A68_CHAR ,19,A68t210);
typedef struct A68t210  A68_210 ;    /* STRUCT 19 CHAR */
A_ISTRUCT(A68_CHAR ,23,A68t211);
typedef struct A68t211  A68_211 ;    /* STRUCT 23 CHAR */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from values --- */
extern A68_VOID  GGQACTR_valuestring(struct A68t78 *,A68_BOOL ,A68_VC *);
/* --- End of imports from values --- */


/* --- Imports from modes --- */
extern A68_INT  KRMACTR_derefmode(A68_INT );
extern A68_BOOL  XRMACTR_dynamic(A68_INT );
extern A68_VOID  FBNACTR_modename(A68_INT ,A68_VC *);
/* --- End of imports from modes --- */


/* --- Imports from incvalue --- */
/* --- End of imports from incvalue --- */


/* --- Imports from incoperfn --- */
/* --- End of imports from incoperfn --- */


/* --- Imports from idtable --- */
/* --- End of imports from idtable --- */


/* --- Imports from incmode --- */
/* --- End of imports from incmode --- */


/* --- Imports from incimperatives --- */
/* --- End of imports from incimperatives --- */


/* --- Imports from identifiers --- */
/* --- End of imports from identifiers --- */


/* --- Imports from evaluator --- */
/* --- End of imports from evaluator --- */


/* --- Imports from environment --- */
extern A68_INT  QRIACTR_linenumber;
extern A68_INT  VHJACTR_startline;
extern A68_BITS  YHJACTR_tracelevelflags(void);
extern A68_70  FSIACTR_list;
extern A68_VOID  ISIACTR_list_nonl(A68_VC );
/* --- End of imports from environment --- */


/* --- Imports from centities --- */
/* --- End of imports from centities --- */


/* --- Imports from usefulops --- */
extern A68_VOID  ROAAOSF_whole(A68_INT ,A68_INT ,A68_VC *);
/* --- End of imports from usefulops --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void JRPACTR(void);   /* values */
extern void MLMACTR(void);   /* modes */
extern void PIJACTR(void);   /* incvalue */
extern void XFAACTR(void);   /* incoperfn */
extern void YNKACTR(void);   /* idtable */
extern void ZDAACTR(void);   /* incmode */
extern void UAAACTR(void);   /* incimperatives */
extern void WIVACTR(void);   /* identifiers */
extern void TCVACTR(void);   /* evaluator */
extern void HPIACTR(void);   /* environment */
extern void THAACTR(void);   /* centities */
extern void IKAAOSF(void);   /* usefulops */
/* --- end of DECS initialisation functions --- */
static A68_193   TSYACTR = {"$Id: tracer.c,v 1.5.2.4 2004/09/27 03:04:24 teshields Exp $"}; 
A_GISVEC(A68_VC ,USYACTR,TSYACTR,61)
static A68_195   CTYACTR = {""}; 
A_GISVEC(A68_VC ,DTYACTR,CTYACTR,0)
#define ETYACTR_indentstep 4
#define FTYACTR_allregenvirons 0X00100000U
#define GTYACTR_fullregister 0X00200000U
#define HTYACTR_tracespace 0X00400000U
#define ITYACTR_tracealllevels 0X00800000U
#define JTYACTR_traceids 0X01000000U
#define KTYACTR_longiddec 0X02000000U
#define LTYACTR_tracetree 0X04000000U
#define MTYACTR_tracetreeafter 0X08000000U
#define NTYACTR_traceregsbefore 0X10000000U
#define OTYACTR_traceregsafter 0X20000000U
static A68_196   RTYACTR = {" T"}; 
static A68_196   TTYACTR = {" F"}; 
static A68_199   FUYACTR = {">    "}; 
A_GISVEC(A68_VC ,GUYACTR,FUYACTR,5)
static A68_201   KUYACTR = {"SKIP value"}; 
A_GISVEC(A68_VC ,LUYACTR,KUYACTR,10)
static A68_204   XUYACTR = {"Declaration of "}; 
A_GISVEC(A68_VC ,YUYACTR,XUYACTR,15)
static A68_206   KVYACTR = {"   dynamic    : "}; 
A_GISVEC(A68_VC ,LVYACTR,KVYACTR,16)
static A68_207   RVYACTR = {"label "}; 
A_GISVEC(A68_VC ,SVYACTR,RVYACTR,6)
static A68_207   CWYACTR = {"label "}; 
A_GISVEC(A68_VC ,DWYACTR,CWYACTR,6)
static A68_209   OWYACTR = {"Value tree for r. h. s. is "}; 
A_GISVEC(A68_VC ,PWYACTR,OWYACTR,27)
static A68_210   UWYACTR = {"Value tree on line "}; 
A_GISVEC(A68_VC ,VWYACTR,UWYACTR,19)
static A68_210   BXYACTR = {"Value tree on line "}; 
A_GISVEC(A68_VC ,CXYACTR,BXYACTR,19)
static A68_211   HXYACTR = {"Value after evaluation:"}; 
A_GISVEC(A68_VC ,IXYACTR,HXYACTR,23)

A_STATIC A68_VOID  WSYACTR_print(A68_36  Printlist);

A_STATIC A68_VOID  BTYACTR_printline(A68_36  Printlist);

A_STATIC A68_196  QTYACTR_booled(A68_BOOL  B);

A_STATIC A68_VOID  XTYACTR_printvaluetree(A68_INT  Indent, A68_INT  Opno, A68_78 * Value);

A_STATIC A68_VOID  VUYACTR_printiddec(A68_202  Dec);

A68_VOID  IWYACTR_trace(A68_117  Currentimperative, A68_78 * Tree, A68_BOOL  Aftereval);

A_STATIC A68_VOID  WSYACTR_print(A68_36  Printlist)
{ 
A68_VC  XSYACTR_el;
A68_VC * YSYACTR;  /* forall control - []x */
A68_INT  ZSYACTR;  /* forall loop counter */
A_PROC_ENTRY(print);
 /* line 46: */
ZSYACTR = Printlist.upb -1;
YSYACTR = Printlist.data;
for (;ZSYACTR-- >= 0;
(YSYACTR++
) )
{
XSYACTR_el = *YSYACTR;
ISIACTR_list_nonl(XSYACTR_el);
}
A_PROC_EXIT(print);
return;
} 
#undef NL

A_STATIC A68_VOID  BTYACTR_printline(A68_36  Printlist)
{ 
A_PROC_ENTRY(printline);
 /* line 49: */
{ 
WSYACTR_print(Printlist);
A_CALLPROC(FSIACTR_list,(DTYACTR),(DTYACTR,(FSIACTR_list).nonlocals));
} 
A_PROC_EXIT(printline);
return;
} 
#undef NL

A_STATIC A68_196  QTYACTR_booled(A68_BOOL  B)
{ 
A68_196  STYACTR;  /* clause result */
A_PROC_ENTRY(booled);
if ( B )
{ 
STYACTR = RTYACTR;
} 
else
{ 
STYACTR = TTYACTR;
} 
A_PROC_EXIT(booled);
return( STYACTR );
} 
#undef NL

A_STATIC A68_VOID  XTYACTR_printvaluetree(A68_INT  Indent, A68_INT  Opno, A68_78 * Value)
{ 
A68_85 * YTYACTR_ops;
A68_INT  ZTYACTR;  /* to part of loop */
A68_INT  AUYACTR;  /* loop control */
A68_VC  BUYACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_36  CUYACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_200  DUYACTR;  /* collateral clause result */
A68_VC  EUYACTR;  /* avoid structure result */
A68_36  HUYACTR;  /* OPERATORS - istruct -> vector */
union {  /* BIOP 99 */
A68_78   source;
A68_LINT   destination;
} IUYACTR; 
A68_LINT  JUYACTR;  /* OPERATORS - skip to mode */
A68_36  MUYACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_79  NUYACTR;  /* united object - for case conformity */
A68_84  OUYACTR_o;
A68_VC  PUYACTR;  /* avoid structure result */
A68_36  QUYACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  RUYACTR;  /* avoid structure result */
A68_36  SUYACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  TUYACTR_opsno;
A_PROC_ENTRY(printvaluetree);
 /* line 68: */
 /* line 69: */
{ 
YTYACTR_ops = (A68_85 *)A68_NIL;
 /* line 70: */
ZTYACTR = Indent;
for ( AUYACTR = 1;
AUYACTR <= ZTYACTR;
AUYACTR += 1 )
{ 
WSYACTR_print(A_HVEC(CUYACTR,A_HVEC(BUYACTR,' ',A68_CHAR ),A68_VC ));
}
 /* line 71: */
ROAAOSF_whole( Opno, 0, &EUYACTR );
DUYACTR.data[0] = EUYACTR;
DUYACTR.data[1] = GUYACTR;
WSYACTR_print(A_HISVEC(HUYACTR,DUYACTR,2,A68_VC ));
 /* line 72: */
 /* line 74: */
IUYACTR.source = (*Value) ;
if ( ((IUYACTR.destination)==JUYACTR) )
{ 
 /* line 75: */
BTYACTR_printline(A_HVEC(MUYACTR,LUYACTR,A68_VC ));
} 
else
{ 
 /* line 76: */
NUYACTR = (*(&(Value->Extra))) ;
switch ( NUYACTR.mode )
{ 
case 9: /* STRUCT(INT,INT,REF MODE85)  */
OUYACTR_o = (NUYACTR.data.mode9);
 /* line 77: */
{ 
GGQACTR_valuestring( Value, A68_FALSE, &PUYACTR );
BTYACTR_printline(A_HVEC(QUYACTR,PUYACTR,A68_VC ));
 /* line 78: */
 /* line 79: */
 /* line 80: */
YTYACTR_ops = OUYACTR_o.Operands;
} 
break;
default: 
 /* line 81: */
GGQACTR_valuestring( Value, A68_FALSE, &RUYACTR );
BTYACTR_printline(A_HVEC(SUYACTR,RUYACTR,A68_VC ));
break;
} 
 /* line 82: */
 /* line 83: */
for ( TUYACTR_opsno = 1;;
TUYACTR_opsno += 1 ) 
{ 
 /* line 84: */
if ( !((YTYACTR_ops!=(A68_85 *)A68_NIL)) ) break;
XTYACTR_printvaluetree((Indent+ETYACTR_indentstep), TUYACTR_opsno, (&(YTYACTR_ops->Value)));
 /* line 85: */
 /* line 86: */
YTYACTR_ops = (*(&(YTYACTR_ops->Rest)));
}
 /* line 87: */
 /* line 88: */
} 
} 
A_PROC_EXIT(printvaluetree);
return;
} 
#undef NL

A_STATIC A68_VOID  VUYACTR_printiddec(A68_202  Dec)
{ 
A68_36  WUYACTR;  /* OPERATORS - vacuum */
A68_36  ZUYACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_BITS  AVYACTR;  /* ADICOPS - >= */
A68_202  BVYACTR;  /* united object - for case conformity */
A68_89  CVYACTR_id;
A68_INT  DVYACTR;  /* clause result */
A68_INT  EVYACTR_lmode;
A68_205  FVYACTR;  /* collateral clause result */
A68_VC  GVYACTR;  /* avoid structure result */
A68_VC  HVYACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_36  IVYACTR;  /* OPERATORS - istruct -> vector */
A68_200  JVYACTR;  /* collateral clause result */
A68_VC  MVYACTR;  /* OPERATORS - istruct -> vector */
A68_196  NVYACTR;  /* OPERATORS - istruct -> vector */
A68_36  OVYACTR;  /* OPERATORS - istruct -> vector */
A68_99  PVYACTR_l;
A68_200  QVYACTR;  /* collateral clause result */
A68_36  TVYACTR;  /* OPERATORS - istruct -> vector */
A68_202  UVYACTR;  /* united object - for case conformity */
A68_89  VVYACTR_id;
A68_205  WVYACTR;  /* collateral clause result */
A68_VC  XVYACTR;  /* avoid structure result */
A68_VC  YVYACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_36  ZVYACTR;  /* OPERATORS - istruct -> vector */
A68_99  AWYACTR_l;
A68_200  BWYACTR;  /* collateral clause result */
A68_36  EWYACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(printiddec);
 /* line 91: */
 /* line 92: */
{ 
BTYACTR_printline(A_VVAC(WUYACTR));
 /* line 93: */
WSYACTR_print(A_HVEC(ZUYACTR,YUYACTR,A68_VC ));
 /* line 94: */
 /* line 95: */
AVYACTR = YHJACTR_tracelevelflags() ;
if ( A_LB_GE(AVYACTR,KTYACTR_longiddec) )
{ 
 /* line 96: */
BVYACTR = Dec ;
switch ( BVYACTR.mode )
{ 
case 1: /* STRUCT(INT,REF MODE26,INT,INT)  */
CVYACTR_id = (BVYACTR.data.mode1);
 /* line 97: */
 /* line 99: */
{ 
 /* line 100: */
if ( ((CVYACTR_id.Type==2)|(CVYACTR_id.Type==5)) )
{ 
 /* line 101: */
 /* line 102: */
DVYACTR = KRMACTR_derefmode(CVYACTR_id.Mode);
} 
else
{ 
DVYACTR = CVYACTR_id.Mode;
} 
EVYACTR_lmode = DVYACTR;
 /* line 103: */
 /* line 104: */
FBNACTR_modename( CVYACTR_id.Mode, &GVYACTR );
FVYACTR.data[0] = GVYACTR;
FVYACTR.data[1] = A_HVEC(HVYACTR,' ',A68_CHAR );
 /* line 105: */
FVYACTR.data[2] = CVYACTR_id.Name;
BTYACTR_printline(A_HISVEC(IVYACTR,FVYACTR,3,A68_VC ));
 /* line 106: */
 /* line 107: */
JVYACTR.data[0] = LVYACTR;
 /* line 108: */
NVYACTR = QTYACTR_booled(XRMACTR_dynamic(EVYACTR_lmode)) ;
JVYACTR.data[1] = A_HISVEC(MVYACTR,NVYACTR,2,A68_CHAR );
 /* line 109: */
 /* line 110: */
BTYACTR_printline(A_HISVEC(OVYACTR,JVYACTR,2,A68_VC ));
} 
break;
case 2: /* STRUCT(REF MODE26,INT,INT,BOOL)  */
PVYACTR_l = (BVYACTR.data.mode2);
QVYACTR.data[0] = SVYACTR;
QVYACTR.data[1] = PVYACTR_l.Name;
 /* line 111: */
 /* line 112: */
BTYACTR_printline(A_HISVEC(TVYACTR,QVYACTR,2,A68_VC ));
break;
default: 
A_IMP_SKIP ;
break;
} 
} 
else
{ 
 /* line 113: */
UVYACTR = Dec ;
switch ( UVYACTR.mode )
{ 
case 1: /* STRUCT(INT,REF MODE26,INT,INT)  */
VVYACTR_id = (UVYACTR.data.mode1);
 /* line 114: */
FBNACTR_modename( VVYACTR_id.Mode, &XVYACTR );
WVYACTR.data[0] = XVYACTR;
WVYACTR.data[1] = A_HVEC(YVYACTR,' ',A68_CHAR );
WVYACTR.data[2] = VVYACTR_id.Name;
 /* line 115: */
BTYACTR_printline(A_HISVEC(ZVYACTR,WVYACTR,3,A68_VC ));
break;
case 2: /* STRUCT(REF MODE26,INT,INT,BOOL)  */
AWYACTR_l = (UVYACTR.data.mode2);
 /* line 116: */
BWYACTR.data[0] = DWYACTR;
BWYACTR.data[1] = AWYACTR_l.Name;
 /* line 117: */
 /* line 118: */
 /* line 119: */
BTYACTR_printline(A_HISVEC(EWYACTR,BWYACTR,2,A68_VC ));
break;
default: 
A_IMP_SKIP ;
break;
} 
} 
} 
A_PROC_EXIT(printiddec);
return;
} 
#undef NL
 /* line 123: */
 /* line 125: */

A68_VOID  IWYACTR_trace(A68_117  Currentimperative, A68_78 * Tree, A68_BOOL  Aftereval)
{ 
A68_BITS  JWYACTR;  /* ADICOPS - >= */
A68_117  KWYACTR;  /* united object - for case conformity */
A68_202  LWYACTR_dec;
A68_BITS  MWYACTR;  /* ADICOPS - >= */
A68_36  NWYACTR;  /* OPERATORS - vacuum */
A68_36  QWYACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_BITS  RWYACTR;  /* ADICOPS - >= */
A68_36  SWYACTR;  /* OPERATORS - vacuum */
A68_200  TWYACTR;  /* collateral clause result */
A68_VC  WWYACTR;  /* avoid structure result */
A68_36  XWYACTR;  /* OPERATORS - istruct -> vector */
A68_BITS  YWYACTR;  /* ADICOPS - >= */
A68_36  ZWYACTR;  /* OPERATORS - vacuum */
A68_200  AXYACTR;  /* collateral clause result */
A68_VC  DXYACTR;  /* avoid structure result */
A68_36  EXYACTR;  /* OPERATORS - istruct -> vector */
A68_BITS  FXYACTR;  /* ADICOPS - >= */
A68_36  GXYACTR;  /* OPERATORS - vacuum */
A68_36  JXYACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(trace);
 /* line 126: */
 /* line 127: */
if ( (QRIACTR_linenumber>=VHJACTR_startline) )
{ 
 /* line 128: */
 /* line 129: */
JWYACTR = YHJACTR_tracelevelflags() ;
if ( (A_LB_GE(JWYACTR,JTYACTR_traceids)&!Aftereval) )
{ 
 /* line 130: */
KWYACTR = Currentimperative ;
switch ( KWYACTR.mode )
{ 
case 11: /* STRUCT(INT,REF MODE26,INT,INT)  */
case 14: /* STRUCT(REF MODE26,INT,INT,BOOL)  */
A_UNCPY(LWYACTR_dec,KWYACTR);
LWYACTR_dec.mode = "\000\0\0\0\0\0\0\0\0\0\0\001\0\0\002\0\0\0\0\0\0\0\0\0\0\0\000"[KWYACTR.mode];
 /* line 131: */
 /* line 132: */
{ 
VUYACTR_printiddec(LWYACTR_dec);
 /* line 133: */
 /* line 134: */
MWYACTR = YHJACTR_tracelevelflags() ;
if ( A_LB_GE(MWYACTR,LTYACTR_tracetree) )
{ 
BTYACTR_printline(A_VVAC(NWYACTR));
 /* line 135: */
BTYACTR_printline(A_HVEC(QWYACTR,PWYACTR,A68_VC ));
 /* line 136: */
 /* line 137: */
 /* line 138: */
 /* line 139: */
 /* line 140: */
XTYACTR_printvaluetree(0, 1, Tree);
} 
} 
break;
default: 
 /* line 141: */
RWYACTR = YHJACTR_tracelevelflags() ;
if ( A_LB_GE(RWYACTR,LTYACTR_tracetree) )
{ 
BTYACTR_printline(A_VVAC(SWYACTR));
 /* line 142: */
TWYACTR.data[0] = VWYACTR;
ROAAOSF_whole( QRIACTR_linenumber, 0, &WWYACTR );
TWYACTR.data[1] = WWYACTR;
BTYACTR_printline(A_HISVEC(XWYACTR,TWYACTR,2,A68_VC ));
 /* line 143: */
 /* line 144: */
 /* line 145: */
 /* line 146: */
XTYACTR_printvaluetree(0, 1, Tree);
} 
break;
} 
} 
else
{ 
 /* line 147: */
 /* line 148: */
YWYACTR = YHJACTR_tracelevelflags() ;
if ( (A_LB_GE(YWYACTR,LTYACTR_tracetree)&!Aftereval) )
{ 
BTYACTR_printline(A_VVAC(ZWYACTR));
 /* line 149: */
AXYACTR.data[0] = CXYACTR;
ROAAOSF_whole( QRIACTR_linenumber, 0, &DXYACTR );
AXYACTR.data[1] = DXYACTR;
BTYACTR_printline(A_HISVEC(EXYACTR,AXYACTR,2,A68_VC ));
 /* line 150: */
 /* line 151: */
XTYACTR_printvaluetree(0, 1, Tree);
} 
else
{ 
 /* line 152: */
 /* line 153: */
FXYACTR = YHJACTR_tracelevelflags() ;
if ( (A_LB_GE(FXYACTR,MTYACTR_tracetreeafter)&Aftereval) )
{ 
BTYACTR_printline(A_VVAC(GXYACTR));
 /* line 154: */
BTYACTR_printline(A_HVEC(JXYACTR,IXYACTR,A68_VC ));
 /* line 155: */
 /* line 156: */
 /* line 157: */
XTYACTR_printvaluetree(0, 1, Tree);
} 
} 
} 
} 
A_PROC_EXIT(trace);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 3: */
 /* line 4: */
 /* line 6: */
void QSYACTR(void)   /* initialise DECS tracer */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/shields/projects/Algol68/Tools/Algol68toC/src/a68toc","-v","-uname","seedfile","-lib","/home/shields/projects/Algol68/Tools/Algol68toC/a68config","-dir","/home/shields/projects/Algol68/Tools/Algol68toC/a68config","-dir","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel","-dir",".","tracer.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/shields/projects/Algol68/Tools/Algol68toC/a68config","A68_CDIR=","A68_DIR=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/shields/projects/Algol68/Tools/Algol68toC/a68config/a68config.m","./values.m","./modes.m","./incvalue.m","./incoperfn.m","./idtable.m","./incmode.m","./incimperatives.m","./identifiers.m","./evaluator.m","./environment.m","./centities.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/usefulops.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
JRPACTR();   /* USE values */
MLMACTR();   /* USE modes */
PIJACTR();   /* USE incvalue */
XFAACTR();   /* USE incoperfn */
YNKACTR();   /* USE idtable */
ZDAACTR();   /* USE incmode */
UAAACTR();   /* USE incimperatives */
WIVACTR();   /* USE identifiers */
TCVACTR();   /* USE evaluator */
HPIACTR();   /* USE environment */
THAACTR();   /* USE centities */
IKAAOSF();   /* USE usefulops */
/* --- Initialise configuration information */
A_config.source_file = "/home/shields/projects/Algol68/Tools/Algol68toC/src/tracer.a68";
A_config.translation_time = "Sun Sep 26 21:51:08 2004";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "PSYACTR (from seed file) ";
A_config.spec_change_time = "Sun Sep 26 21:51:08 2004";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS tracer);
UEAALIB_a68config(LGAALIB_configinfo, USYACTR);
 /* line 45: */
 /* line 48: */
 /* line 51: */
 /* line 53: */
 /* line 54: */
 /* line 55: */
 /* line 56: */
 /* line 57: */
 /* line 58: */
 /* line 59: */
 /* line 60: */
 /* line 61: */
 /* line 62: */
 /* line 63: */
 /* line 65: */
 /* line 67: */
 /* line 90: */
 /* line 121: */
 /* line 122: */
 /* line 159: */
 /* line 161: */
 /* line 163: */
/*SKIP*/;
A_PROC_EXIT(DECS tracer);
} 
#undef NL
/* end of translation of tracer.a68 */
