/* UNAME:IRPACTR */
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

A_PROCEDURE(A68_INT ,A68t59,(A68_INT ),(A68_INT ,void *));
typedef struct A68t59  A68_59 ;    /* PROC(INT) INT */

A_PROCEDURE(A68_BOOL ,A68t60,(A68_INT ),(A68_INT ,void *));
typedef struct A68t60  A68_60 ;    /* PROC(INT) BOOL */
struct A68t61{
A68_INT  Level;
A_PAD_INT(PAD_4)
A68_INT  Block;
A_PAD_INT(PAD_5)
};
typedef struct A68t61  A68_61 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t62,(struct A68t61 *),(struct A68t61 *,void *));
typedef struct A68t62  A68_62 ;    /* PROC MODE61 */

A_PROCEDURE(A68_INT ,A68t63,(void),(void *));
typedef struct A68t63  A68_63 ;    /* PROC INT */

A_PROCEDURE(A68_VOID ,A68t64,(A68_INT ),(A68_INT ,void *));
typedef struct A68t64  A68_64 ;    /* PROC(INT) VOID */

A_PROCEDURE(A68_VOID ,A68t65,(void),(void *));
typedef struct A68t65  A68_65 ;    /* PROC VOID */

A_PROCEDURE(A68_BOOL ,A68t66,(void),(void *));
typedef struct A68t66  A68_66 ;    /* PROC BOOL */

A_PROCEDURE(A68_BOOL ,A68t67,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t67  A68_67 ;    /* PROC(INT,INT) BOOL */

A_PROCEDURE(A68_VOID ,A68t68,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t68  A68_68 ;    /* PROC(INT,INT) VOID */

A_PROCEDURE(A68_BOOL ,A68t69,(struct A68t61 ,struct A68t61 ),(struct A68t61 ,struct A68t61 ,void *));
typedef struct A68t69  A68_69 ;    /* PROC(MODE61,MODE61) BOOL */

A_PROCEDURE(A68_BOOL ,A68t70,(struct A68t61 ),(struct A68t61 ,void *));
typedef struct A68t70  A68_70 ;    /* PROC(MODE61) BOOL */

A_PROCEDURE(A68_VOID ,A68t71,(A68_VC ,A68_BOOL ),(A68_VC ,A68_BOOL ,void *));
typedef struct A68t71  A68_71 ;    /* PROC(MODE26,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t72,(A68_VC ,A68_INT ),(A68_VC ,A68_INT ,void *));
typedef struct A68t72  A68_72 ;    /* PROC(MODE26,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t73,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t73  A68_73 ;    /* PROC(INT) REF MODE26 */
struct A68t75 ;

A_PROCEDURE(A68_VOID ,A68t74,(A68_INT ,struct A68t75 ),(A68_INT ,struct A68t75 ,void *));
typedef struct A68t74  A68_74 ;    /* PROC(INT,MODE75) VOID */
A_ROW(A68_VC ,A68t75,1);
typedef struct A68t75  A68_75 ;    /* [] MODE26 */

A_PROCEDURE(A68_BITS ,A68t76,(void),(void *));
typedef struct A68t76  A68_76 ;    /* PROC BITS */
struct A68t77{
A68_INT  Cfile;
A_PAD_INT(PAD_6)
};
typedef struct A68t77  A68_77 ;    /* STRUCT(INT)  */
struct A68t78{
A68_INT  Seedfile;
A_PAD_INT(PAD_7)
};
typedef struct A68t78  A68_78 ;    /* STRUCT(INT)  */
struct A68t79 { A68_INT mode; union {
struct A68t77  mode1;
struct A68t78  mode2;
struct A68t56  mode3;
} data; };
typedef struct A68t79  A68_79 ;    /* UNION(MODE77,MODE78,MODE56,VOID)  */

A_PROCEDURE(A68_VOID ,A68t80,(A68_VC ),(A68_VC ,void *));
typedef struct A68t80  A68_80 ;    /* PROC(MODE26) VOID */
struct A68t81{
A68_VC  Version;
A68_LINT  Translationtime;
A_PAD_LINT(PAD_8)
A68_VC  Sourcefile;
struct A68t56  Nameseed;
A_PAD_ISTRUCT(A68_56 ,PAD_9)
struct A68t79  Nameseedorigin;
struct A68t82 * Used_modules;
A68_VC  Commandline;
struct A68t83 * Environment;
};
typedef struct A68t81  A68_81 ;    /* STRUCT(REF MODE26,LONG INT,REF MODE26,MODE56,MODE79,REF MODE82,REF MODE26,REF MODE83)  */
struct A68t82{
A68_VC  Modinfo_file;
struct A68t82 * Next;
};
typedef struct A68t82  A68_82 ;    /* STRUCT(REF MODE26,REF MODE82)  */
struct A68t83{
A68_VC  Env_name;
A68_VC  Env_value;
struct A68t83 * Next;
};
typedef struct A68t83  A68_83 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE83)  */
struct A68t85 ;
struct A68t86 ;

A_PROCEDURE(struct A68t85 *,A68t84,(A68_VC ,struct A68t86 *,A68_VC *),(A68_VC ,struct A68t86 *,A68_VC *,void *));
typedef struct A68t84  A68_84 ;    /* PROC(MODE26,REF MODE86,REF REF MODE26) REF MODE85 */
struct A68t85{
A68_VC  Name;
A68_BITS * Stdiofile;
};
typedef struct A68t85  A68_85 ;    /* STRUCT(REF MODE26,REF BITS)  */
struct A68t86{
A68_VC  Dir;
struct A68t86 * Next;
};
typedef struct A68t86  A68_86 ;    /* STRUCT(REF MODE26,REF MODE86)  */
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
struct A68t93{
A68_INT  Mode;
A_PAD_INT(PAD_10)
A68_INT  Cvariabletype;
A_PAD_INT(PAD_11)
struct A68t61  Environ;
A68_VC  Name;
A68_VC  C_name;
struct A68t56  Prefix;
A_PAD_ISTRUCT(A68_56 ,PAD_12)
A68_BITS  Flags;
A_PAD_BITS(PAD_13)
A68_VC  Definition;
A68_VC  Rhs;
};
typedef struct A68t93  A68_93 ;    /* STRUCT(INT,INT,MODE61,REF MODE26,REF MODE26,MODE56,BITS,REF MODE26,REF MODE26)  */
struct A68t94{
A68_INT  Mode;
A_PAD_INT(PAD_14)
A68_INT  Resultmode;
A_PAD_INT(PAD_15)
A68_INT  Declevel;
A_PAD_INT(PAD_16)
struct A68t61  Environ;
A68_VC  Name;
struct A68t56  Prefix;
A_PAD_ISTRUCT(A68_56 ,PAD_17)
struct A68t56  Fnprefix;
A_PAD_ISTRUCT(A68_56 ,PAD_18)
struct A68t56  Envprefix;
A_PAD_ISTRUCT(A68_56 ,PAD_19)
A68_BITS  Flags;
A_PAD_BITS(PAD_20)
};
typedef struct A68t94  A68_94 ;    /* STRUCT(INT,INT,INT,MODE61,REF MODE26,MODE56,MODE56,MODE56,BITS)  */
struct A68t95{
struct A68t55  Label;
struct A68t61  Environ;
A68_VC  Name;
struct A68t56  Prefix;
A_PAD_ISTRUCT(A68_56 ,PAD_21)
A68_BITS  Flags;
A_PAD_BITS(PAD_22)
A68_INT  Alias;
A_PAD_INT(PAD_23)
};
typedef struct A68t95  A68_95 ;    /* STRUCT(MODE55,MODE61,REF MODE26,MODE56,BITS,INT)  */

A_PROCEDURE(struct A68t93 *,A68t96,(A68_INT ),(A68_INT ,void *));
typedef struct A68t96  A68_96 ;    /* PROC(INT) REF MODE93 */

A_PROCEDURE(A68_VOID ,A68t97,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t97  A68_97 ;    /* PROC(REF MODE26) MODE26 */

A_PROCEDURE(A68_VOID ,A68t98,(A68_VC ,struct A68t56 ,A68_INT ,A68_INT ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_VC ,A68_VC ),(A68_VC ,struct A68t56 ,A68_INT ,A68_INT ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_VC ,A68_VC ,void *));
typedef struct A68t98  A68_98 ;    /* PROC(REF MODE26,MODE56,INT,INT,BOOL,BOOL,BOOL,BOOL,BOOL,REF MODE26,REF MODE26) VOID */
A_ROW(struct A68t93 ,A68t99,1);
typedef struct A68t99  A68_99 ;    /* [] MODE93 */
A_ROW(struct A68t94 ,A68t100,1);
typedef struct A68t100  A68_100 ;    /* [] MODE94 */
A_ROW(struct A68t95 ,A68t101,1);
typedef struct A68t101  A68_101 ;    /* [] MODE95 */
struct A68t103 ;

A_PROCEDURE(A68_VOID ,A68t102,(A68_INT ,A68_INT ,A68_INT ,A68_INT ,struct A68t103 ),(A68_INT ,A68_INT ,A68_INT ,A68_INT ,struct A68t103 ,void *));
typedef struct A68t102  A68_102 ;    /* PROC(INT,INT,INT,INT,REF MODE103) VOID */
A_ROW(A68_INT ,A68t103,1);
typedef struct A68t103  A68_103 ;    /* [] INT */

A_PROCEDURE(A68_BOOL ,A68t104,(A68_VC ),(A68_VC ,void *));
typedef struct A68t104  A68_104 ;    /* PROC(MODE26) BOOL */

A_PROCEDURE(A68_VOID ,A68t105,(A68_INT ,struct A68t61 *),(A68_INT ,struct A68t61 *,void *));
typedef struct A68t105  A68_105 ;    /* PROC(INT) MODE61 */
struct A68t106{
struct A68t107 * Value;
struct A68t55 * End;
A68_INT  Type;
A_PAD_INT(PAD_24)
};
typedef struct A68t106  A68_106 ;    /* STRUCT(REF MODE107,REF MODE55,INT)  */
struct A68t109{
A68_INT  Rdenno;
A_PAD_INT(PAD_25)
};
typedef struct A68t109  A68_109 ;    /* STRUCT(INT)  */
struct A68t110{
A68_INT  Idno;
A_PAD_INT(PAD_26)
};
typedef struct A68t110  A68_110 ;    /* STRUCT(INT)  */
struct A68t111{
struct A68t56  Name;
A_PAD_ISTRUCT(A68_56 ,PAD_27)
A68_INT  Mode;
A_PAD_INT(PAD_28)
};
typedef struct A68t111  A68_111 ;    /* STRUCT(MODE56,INT)  */
struct A68t112{
A68_INT  Nse;
A_PAD_INT(PAD_29)
};
typedef struct A68t112  A68_112 ;    /* STRUCT(INT)  */
struct A68t113{
A68_INT  Fn;
A_PAD_INT(PAD_30)
A68_INT  Param;
A_PAD_INT(PAD_31)
struct A68t114 * Operands;
};
typedef struct A68t113  A68_113 ;    /* STRUCT(INT,INT,REF MODE114)  */
struct A68t108 { A68_INT mode; union {
A68_LBITS  mode1;
struct A68t109  mode2;
struct A68t110  mode4;
struct A68t111  mode5;
A68_VC  mode6;
struct A68t57  mode7;
struct A68t112  mode8;
struct A68t113  mode9;
} data; };
typedef struct A68t108  A68_108 ;    /* UNION(LONG BITS,MODE109,VOID,MODE110,MODE111,MODE26,MODE57,MODE112,MODE113)  */
struct A68t107{
A68_INT  Mode;
A_PAD_INT(PAD_32)
A68_BITS  Info;
A_PAD_BITS(PAD_33)
struct A68t108  Extra;
};
typedef struct A68t107  A68_107 ;    /* STRUCT(INT,BITS,MODE108)  */
struct A68t114{
struct A68t107  Value;
struct A68t114 * Rest;
};
typedef struct A68t114  A68_114 ;    /* STRUCT(MODE107,REF MODE114)  */
struct A68t115{
A68_INT  Parameters;
A_PAD_INT(PAD_34)
A68_INT  Result;
A_PAD_INT(PAD_35)
A68_BOOL  Hasdescriptors;
A_PAD_BOOL(PAD_36)
};
typedef struct A68t115  A68_115 ;    /* STRUCT(INT,INT,BOOL)  */
A_ISTRUCT(A68_CHAR ,32,A68t117);
typedef struct A68t117  A68_117 ;    /* STRUCT 32 CHAR */
struct A68t116{
A68_INT  Mode;
A_PAD_INT(PAD_37)
A68_INT  Offset;
A_PAD_INT(PAD_38)
struct A68t117  Name;
A_PAD_ISTRUCT(A68_117 ,PAD_39)
};
typedef struct A68t116  A68_116 ;    /* STRUCT(INT,INT,MODE117)  */
struct A68t119 ;

A_PROCEDURE(A68_VOID ,A68t118,(A68_INT ,struct A68t119 *),(A68_INT ,struct A68t119 *,void *));
typedef struct A68t118  A68_118 ;    /* PROC(INT) REF MODE119 */
A_VECTOR(A68_INT ,A68t119);
typedef struct A68t119  A68_119 ;    /* VECTOR [] INT */

A_PROCEDURE(A68_VOID ,A68t120,(struct A68t116 *,A68_VC *),(struct A68t116 *,A68_VC *,void *));
typedef struct A68t120  A68_120 ;    /* PROC(REF MODE116) MODE26 */

A_PROCEDURE(A68_VOID ,A68t121,(A68_INT ,A68_VC ,struct A68t111 *),(A68_INT ,A68_VC ,struct A68t111 *,void *));
typedef struct A68t121  A68_121 ;    /* PROC(INT,MODE26) MODE111 */
struct A68t123 ;

A_PROCEDURE(A68_VOID ,A68t122,(struct A68t123 ,A68_INT ),(struct A68t123 ,A68_INT ,void *));
typedef struct A68t122  A68_122 ;    /* PROC(REF MODE123,INT) VOID */
A_ROW(struct A68t124 ,A68t123,1);
typedef struct A68t123  A68_123 ;    /* [] MODE124 */
struct A68t134{
A68_INT  Mode;
A_PAD_INT(PAD_40)
};
typedef struct A68t134  A68_134 ;    /* STRUCT(INT)  */
struct A68t124 { A68_INT mode; union {
A68_INT  mode1;
struct A68t125 * mode2;
struct A68t126 * mode3;
struct A68t127 * mode4;
struct A68t128 * mode5;
struct A68t129 * mode6;
struct A68t130 * mode7;
struct A68t131 * mode8;
struct A68t132 * mode9;
struct A68t133 * mode10;
struct A68t134  mode11;
} data; };
typedef struct A68t124  A68_124 ;    /* UNION(INT,REF MODE125,REF MODE126,REF MODE127,REF MODE128,REF MODE129,REF MODE130,REF MODE131,REF MODE132,REF MODE133,MODE134)  */
struct A68t125{
A68_INT  Rdenno;
A_PAD_INT(PAD_41)
struct A68t138 * Modelist;
};
typedef struct A68t125  A68_125 ;    /* STRUCT(INT,REF MODE138)  */
struct A68t126{
A68_INT  Deproc;
A_PAD_INT(PAD_42)
struct A68t138 * Pars;
};
typedef struct A68t126  A68_126 ;    /* STRUCT(INT,REF MODE138)  */
struct A68t127{
A68_INT  Rdenno;
A_PAD_INT(PAD_43)
A68_INT  Deflex;
A_PAD_INT(PAD_44)
struct A68t137 * Sels;
};
typedef struct A68t127  A68_127 ;    /* STRUCT(INT,INT,REF MODE137)  */
struct A68t128{
A68_INT  Rdenno;
A_PAD_INT(PAD_45)
A68_INT  Imode;
A_PAD_INT(PAD_46)
A68_INT  Length;
A_PAD_INT(PAD_47)
A68_INT  Deflex;
A_PAD_INT(PAD_48)
};
typedef struct A68t128  A68_128 ;    /* STRUCT(INT,INT,INT,INT)  */
struct A68t129{
A68_INT  Deproc;
A_PAD_INT(PAD_49)
};
typedef struct A68t129  A68_129 ;    /* STRUCT(INT)  */
struct A68t130{
A68_INT  Rdenno;
A_PAD_INT(PAD_50)
A68_INT  Vecmode;
A_PAD_INT(PAD_51)
A68_INT  Deflex;
A_PAD_INT(PAD_52)
};
typedef struct A68t130  A68_130 ;    /* STRUCT(INT,INT,INT)  */
struct A68t131{
A68_INT  Rdenno;
A_PAD_INT(PAD_53)
A68_INT  Mode;
A_PAD_INT(PAD_54)
A68_INT  Nods;
A_PAD_INT(PAD_55)
A68_INT  Deflex;
A_PAD_INT(PAD_56)
};
typedef struct A68t131  A68_131 ;    /* STRUCT(INT,INT,INT,INT)  */
struct A68t132{
A68_INT  Mode;
A_PAD_INT(PAD_57)
struct A68t136 * Stenlist;
};
typedef struct A68t132  A68_132 ;    /* STRUCT(INT,REF MODE136)  */
struct A68t133{
A68_INT  Mode;
A_PAD_INT(PAD_58)
A68_INT  Modeproc;
A_PAD_INT(PAD_59)
struct A68t135 * El;
};
typedef struct A68t133  A68_133 ;    /* STRUCT(INT,INT,REF MODE135)  */
struct A68t135{
struct A68t133 * Am;
struct A68t135 * Rest;
};
typedef struct A68t135  A68_135 ;    /* STRUCT(REF MODE133,REF MODE135)  */
struct A68t136{
A68_INT  Mode;
A_PAD_INT(PAD_60)
A68_INT  Rdenno;
A_PAD_INT(PAD_61)
struct A68t136 * Rest;
};
typedef struct A68t136  A68_136 ;    /* STRUCT(INT,INT,REF MODE136)  */
struct A68t137{
A68_INT  Mode;
A_PAD_INT(PAD_62)
A68_INT  Fieldno;
A_PAD_INT(PAD_63)
struct A68t117  Name;
A_PAD_ISTRUCT(A68_117 ,PAD_64)
struct A68t137 * Rest;
};
typedef struct A68t137  A68_137 ;    /* STRUCT(INT,INT,MODE117,REF MODE137)  */
struct A68t138{
A68_INT  Mode;
A_PAD_INT(PAD_65)
struct A68t138 * Rest;
};
typedef struct A68t138  A68_138 ;    /* STRUCT(INT,REF MODE138)  */

A_PROCEDURE(A68_VOID ,A68t139,(A68_INT ,struct A68t115 *),(A68_INT ,struct A68t115 *,void *));
typedef struct A68t139  A68_139 ;    /* PROC(INT) MODE115 */
struct A68t141 ;

A_PROCEDURE(A68_VOID ,A68t140,(A68_INT ,struct A68t141 *),(A68_INT ,struct A68t141 *,void *));
typedef struct A68t140  A68_140 ;    /* PROC(INT) REF MODE141 */
A_VECTOR(struct A68t116 ,A68t141);
typedef struct A68t141  A68_141 ;    /* VECTOR [] MODE116 */

A_PROCEDURE(A68_INT ,A68t142,(A68_INT ,A68_BOOL ),(A68_INT ,A68_BOOL ,void *));
typedef struct A68t142  A68_142 ;    /* PROC(INT,BOOL) INT */

A_PROCEDURE(A68_VOID ,A68t143,(A68_INT ,A68_INT ,A68_VC *),(A68_INT ,A68_INT ,A68_VC *,void *));
typedef struct A68t143  A68_143 ;    /* PROC(INT,INT) MODE26 */

A_PROCEDURE(A68_VOID ,A68t144,(struct A68t65 ),(struct A68t65 ,void *));
typedef struct A68t144  A68_144 ;    /* PROC(MODE65) VOID */

A_PROCEDURE(A68_VOID ,A68t145,(struct A68t80 ),(struct A68t80 ,void *));
typedef struct A68t145  A68_145 ;    /* PROC(MODE80) VOID */

A_PROCEDURE(A68_VOID ,A68t146,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t146  A68_146 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,61,A68t147);
typedef struct A68t147  A68_147 ;    /* STRUCT 61 CHAR */
A_VECTOR(struct A68t107 *,A68t148);
typedef struct A68t148  A68_148 ;    /* VECTOR [] REF MODE107 */

A_PROCEDURE(struct A68t107 *,A68t149,(A68_INT ,A68_INT ,A68_BITS ,struct A68t148 ),(A68_INT ,A68_INT ,A68_BITS ,struct A68t148 ,void *));
typedef struct A68t149  A68_149 ;    /* PROC(INT,INT,BITS,MODE148) REF MODE107 */

A_PROCEDURE(struct A68t114 *,A68t150,(struct A68t114 *,struct A68t114 ),(struct A68t114 *,struct A68t114 ,void *));
typedef struct A68t150  A68_150 ;    /* PROC(REF MODE114,MODE114) REF MODE114 */

A_PROCEDURE(struct A68t107 *,A68t151,(struct A68t107 *,struct A68t107 ),(struct A68t107 *,struct A68t107 ,void *));
typedef struct A68t151  A68_151 ;    /* PROC(REF MODE107,MODE107) REF MODE107 */

A_PROCEDURE(struct A68t108 *,A68t152,(struct A68t108 *,struct A68t108 ),(struct A68t108 *,struct A68t108 ,void *));
typedef struct A68t152  A68_152 ;    /* PROC(REF MODE108,MODE108) REF MODE108 */
#define A68_153  A68_VC 
#define A68t153 A68t26            /* FLEX VECTOR [] CHAR */

A_PROCEDURE(A68_BOOL ,A68t154,(struct A68t107 *,A68_BITS ),(struct A68t107 *,A68_BITS ,void *));
typedef struct A68t154  A68_154 ;    /* PROC(REF MODE107,BITS) BOOL */

A_PROCEDURE(A68_BOOL ,A68t155,(struct A68t107 *,struct A68t107 *),(struct A68t107 *,struct A68t107 *,void *));
typedef struct A68t155  A68_155 ;    /* PROC(REF MODE107,REF MODE107) BOOL */

A_PROCEDURE(A68_BOOL ,A68t156,(struct A68t107 *),(struct A68t107 *,void *));
typedef struct A68t156  A68_156 ;    /* PROC(REF MODE107) BOOL */

A_PROCEDURE(A68_BOOL ,A68t157,(struct A68t107 *,A68_LBITS ),(struct A68t107 *,A68_LBITS ,void *));
typedef struct A68t157  A68_157 ;    /* PROC(REF MODE107,LONG BITS) BOOL */

A_PROCEDURE(A68_LBITS ,A68t158,(struct A68t107 *),(struct A68t107 *,void *));
typedef struct A68t158  A68_158 ;    /* PROC(REF MODE107) LONG BITS */
A_ISTRUCT(A68_CHAR ,49,A68t159);
typedef struct A68t159  A68_159 ;    /* STRUCT 49 CHAR */
A_ISTRUCT(A68_CHAR ,37,A68t160);
typedef struct A68t160  A68_160 ;    /* STRUCT 37 CHAR */
A_ISTRUCT(A68_CHAR ,55,A68t161);
typedef struct A68t161  A68_161 ;    /* STRUCT 55 CHAR */
A_ISTRUCT(A68_CHAR ,3,A68t162);
typedef struct A68t162  A68_162 ;    /* STRUCT 3 CHAR */
A_ISTRUCT(A68_VC ,3,A68t163);
typedef struct A68t163  A68_163 ;    /* STRUCT 3 MODE26 */

A_PROCEDURE(A68_VOID ,A68t164,(struct A68t107 *,A68_VC *),(struct A68t107 *,A68_VC *,void *));
typedef struct A68t164  A68_164 ;    /* PROC(REF MODE107) MODE26 */

A_PROCEDURE(A68_VOID ,A68t165,(A68_VC ,A68_INT ,A68_VC *),(A68_VC ,A68_INT ,A68_VC *,void *));
typedef struct A68t165  A68_165 ;    /* PROC(MODE26,INT) MODE26 */
A_ISTRUCT(A68_CHAR ,15,A68t166);
typedef struct A68t166  A68_166 ;    /* STRUCT 15 CHAR */
A_ISTRUCT(A68_CHAR ,16,A68t167);
typedef struct A68t167  A68_167 ;    /* STRUCT 16 CHAR */
A_ISTRUCT(A68_CHAR ,21,A68t168);
typedef struct A68t168  A68_168 ;    /* STRUCT 21 CHAR */
A_ISTRUCT(struct A68t92 ,8,A68t169);
typedef struct A68t169  A68_169 ;    /* STRUCT 8 MODE92 */
A_ISTRUCT(A68_CHAR ,59,A68t170);
typedef struct A68t170  A68_170 ;    /* STRUCT 59 CHAR */
A_ISTRUCT(A68_CHAR ,8,A68t171);
typedef struct A68t171  A68_171 ;    /* STRUCT 8 CHAR */
A_ISTRUCT(A68_CHAR ,9,A68t172);
typedef struct A68t172  A68_172 ;    /* STRUCT 9 CHAR */
A_ISTRUCT(A68_CHAR ,19,A68t173);
typedef struct A68t173  A68_173 ;    /* STRUCT 19 CHAR */
A_ISTRUCT(A68_CHAR ,1,A68t174);
typedef struct A68t174  A68_174 ;    /* STRUCT 0 CHAR */
A_ISTRUCT(A68_CHAR ,34,A68t175);
typedef struct A68t175  A68_175 ;    /* STRUCT 34 CHAR */
A_ISTRUCT(A68_CHAR ,42,A68t176);
typedef struct A68t176  A68_176 ;    /* STRUCT 42 CHAR */
A_ISTRUCT(A68_CHAR ,50,A68t177);
typedef struct A68t177  A68_177 ;    /* STRUCT 50 CHAR */

A_PROCEDURE(struct A68t107 *,A68t178,(struct A68t114 *,A68_INT ),(struct A68t114 *,A68_INT ,void *));
typedef struct A68t178  A68_178 ;    /* PROC(REF MODE114,INT) REF MODE107 */

A_PROCEDURE(struct A68t114 *,A68t179,(struct A68t114 *),(struct A68t114 *,void *));
typedef struct A68t179  A68_179 ;    /* PROC(REF MODE114) REF MODE114 */

A_PROCEDURE(A68_INT ,A68t180,(struct A68t113 ),(struct A68t113 ,void *));
typedef struct A68t180  A68_180 ;    /* PROC(MODE113) INT */

A_PROCEDURE(struct A68t107 *,A68t181,(struct A68t107 *,A68_INT ),(struct A68t107 *,A68_INT ,void *));
typedef struct A68t181  A68_181 ;    /* PROC(REF MODE107,INT) REF MODE107 */
A_ISTRUCT(A68_CHAR ,44,A68t182);
typedef struct A68t182  A68_182 ;    /* STRUCT 44 CHAR */

A_PROCEDURE(A68_VOID ,A68t183,(struct A68t107 *),(struct A68t107 *,void *));
typedef struct A68t183  A68_183 ;    /* PROC(REF MODE107) VOID */
A_ISTRUCT(A68_CHAR ,40,A68t184);
typedef struct A68t184  A68_184 ;    /* STRUCT 40 CHAR */
A_ISTRUCT(A68_CHAR ,14,A68t185);
typedef struct A68t185  A68_185 ;    /* STRUCT 14 CHAR */
A_ISTRUCT(A68_CHAR ,6,A68t186);
typedef struct A68t186  A68_186 ;    /* STRUCT 6 CHAR */
A_ISTRUCT(A68_CHAR ,11,A68t187);
typedef struct A68t187  A68_187 ;    /* STRUCT 11 CHAR */
A_ISTRUCT(A68_CHAR ,10,A68t188);
typedef struct A68t188  A68_188 ;    /* STRUCT 10 CHAR */
A_ISTRUCT(A68_CHAR ,5,A68t189);
typedef struct A68t189  A68_189 ;    /* STRUCT 5 CHAR */
A_ISTRUCT(A68_CHAR ,13,A68t190);
typedef struct A68t190  A68_190 ;    /* STRUCT 13 CHAR */
A_ISTRUCT(A68_CHAR ,2,A68t191);
typedef struct A68t191  A68_191 ;    /* STRUCT 2 CHAR */

A_PROCEDURE(A68_LINT ,A68t192,(struct A68t107 ),(struct A68t107 ,void *));
typedef struct A68t192  A68_192 ;    /* PROC(MODE107) LONG INT */

A_PROCEDURE(A68_VOID ,A68t193,(struct A68t107 *,A68_BOOL ,A68_VC *),(struct A68t107 *,A68_BOOL ,A68_VC *,void *));
typedef struct A68t193  A68_193 ;    /* PROC(REF MODE107,BOOL) MODE26 */
A_ISTRUCT(A68_CHAR ,12,A68t194);
typedef struct A68t194  A68_194 ;    /* STRUCT 12 CHAR */
A_ISTRUCT(A68_CHAR ,31,A68t195);
typedef struct A68t195  A68_195 ;    /* STRUCT 31 CHAR */
struct A68t196 { A68_INT mode; union {
struct A68t107 * mode1;
A68_VC  mode2;
struct A68t111  mode3;
} data; };
typedef struct A68t196  A68_196 ;    /* UNION(REF MODE107,MODE26,MODE111)  */

A_PROCEDURE(A68_VOID ,A68t197,(struct A68t196 ,A68_VC *),(struct A68t196 ,A68_VC *,void *));
typedef struct A68t197  A68_197 ;    /* PROC(MODE196) MODE26 */
A_ISTRUCT(A68_CHAR ,58,A68t198);
typedef struct A68t198  A68_198 ;    /* STRUCT 58 CHAR */
A_VECTOR(struct A68t196 ,A68t199);
typedef struct A68t199  A68_199 ;    /* VECTOR [] MODE196 */

A_PROCEDURE(A68_VOID ,A68t200,(struct A68t199 ,A68_VC *),(struct A68t199 ,A68_VC *,void *));
typedef struct A68t200  A68_200 ;    /* PROC(MODE199) MODE26 */
A_ISTRUCT(A68_CHAR ,35,A68t201);
typedef struct A68t201  A68_201 ;    /* STRUCT 35 CHAR */
A_ISTRUCT(A68_CHAR ,38,A68t202);
typedef struct A68t202  A68_202 ;    /* STRUCT 38 CHAR */

A_PROCEDURE(A68_VOID ,A68t203,(A68_VC ,struct A68t199 ,A68_VC *),(A68_VC ,struct A68t199 ,A68_VC *,void *));
typedef struct A68t203  A68_203 ;    /* PROC(MODE26,MODE199) MODE26 */

A_PROCEDURE(A68_VOID ,A68t204,(struct A68t199 ),(struct A68t199 ,void *));
typedef struct A68t204  A68_204 ;    /* PROC(MODE199) VOID */
A_ISTRUCT(struct A68t92 ,2,A68t205);
typedef struct A68t205  A68_205 ;    /* STRUCT 2 MODE92 */

A_PROCEDURE(A68_VOID ,A68t206,(A68_VC ,A68_INT ,struct A68t199 ,struct A68t111 *),(A68_VC ,A68_INT ,struct A68t199 ,struct A68t111 *,void *));
typedef struct A68t206  A68_206 ;    /* PROC(MODE26,INT,MODE199) MODE111 */
A_ISTRUCT(struct A68t196 ,4,A68t207);
typedef struct A68t207  A68_207 ;    /* STRUCT 4 MODE196 */

A_PROCEDURE(struct A68t107 *,A68t208,(struct A68t107 *),(struct A68t107 *,void *));
typedef struct A68t208  A68_208 ;    /* PROC(REF MODE107) REF MODE107 */

A_PROCEDURE(struct A68t107 *,A68t209,(A68_VC ,struct A68t107 *),(A68_VC ,struct A68t107 *,void *));
typedef struct A68t209  A68_209 ;    /* PROC(MODE26,REF MODE107) REF MODE107 */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from modes --- */
extern A68_VOID  UIOACTR_declarectemporary(A68_INT ,A68_VC ,A68_111 *);
extern A68_INT  KRMACTR_derefmode(A68_INT );
extern A68_BOOL  ARMACTR_hasrefs(A68_INT );
extern A68_BOOL  OPMACTR_isfirmarray(A68_INT );
extern A68_VOID  FBNACTR_modename(A68_INT ,A68_VC *);
extern A68_121  TJOACTR_new;
extern A68_INT  CJNACTR_givecvariabletype(A68_INT ,A68_BOOL );
/* --- End of imports from modes --- */


/* --- Imports from incvalue --- */
extern A68_114 * VIJACTR_nilvaluelist;
extern A68_107  MJJACTR_skipvalue;
extern A68_BITS  YIJACTR_defaultinfo;
#define ZIJACTR_constant 0X1U
#define AJJACTR_atomic 0X2U
#define CJJACTR_nonloc 0X8U
#define EJJACTR_lvalue 0X20U
#define GJJACTR_fxwarn 0X80U
/* --- End of imports from incvalue --- */


/* --- Imports from incid --- */
#define IAAACTR_maxidno 2000
#define MAAACTR_maxlibid 6000
#define KAAACTR_maxrdno 4000
#define OAAACTR_minlab 16384
#define LAAACTR_minlibid 4001
#define JAAACTR_minrdno 2001
/* --- End of imports from incid --- */


/* --- Imports from incoperfn --- */
#define WGAACTR_operandsshift 18
extern A68_BITS  ZGAACTR_parammask;
/* --- End of imports from incoperfn --- */


/* --- Imports from incmode --- */
#define VFAACTR_refmark 1024
/* --- End of imports from incmode --- */


/* --- Imports from idtable --- */
extern A68_93 * HPKACTR_get_idinfo(A68_INT );
extern A68_100  GOKACTR_rds;
extern A68_VOID  FRKACTR_labelfullname(A68_INT ,A68_VC *);
extern A68_VOID  DSKACTR_idfullname(A68_INT ,A68_VC *);
extern A68_VOID  MRKACTR_labelbuffername(A68_INT ,A68_VC *);
#define SOKACTR_idgprocflag 0X100U
#define APKACTR_rdglobalflag 0X8U
extern A68_VOID  ASKACTR_labelenviron(A68_INT ,A68_61 *);
extern A68_BOOL  WRKACTR_labelisdeclared(A68_INT );
/* --- End of imports from idtable --- */


/* --- Imports from coutput --- */
extern A68_VOID  VBMACTR_writecstream(struct A68t91 ,A68_INT );
/* --- End of imports from coutput --- */


/* --- Imports from environment --- */
extern A68_VOID  PXIACTR_assert(A68_VC ,A68_BOOL );
/* --- End of imports from environment --- */


/* --- Imports from environ --- */
extern A68_INT  WQLACTR_codestream(A68_INT );
extern A68_INT  EQLACTR_currentlevel(void);
/* --- End of imports from environ --- */


/* --- Imports from centities --- */
extern A68_SINT  EIAACTR_cnewline;
extern A68_VOID  JIAACTR_bracket(A68_VC ,A68_VC *);
/* --- End of imports from centities --- */


/* --- Imports from usefulops --- */
extern A68_VOID  JDAAOSF_concat(struct A68t36 ,A68_VC *);
extern A68_VOID  ROAAOSF_whole(A68_INT ,A68_INT ,A68_VC *);
extern A68_VOID  JPAAOSF_lwhole(A68_LINT ,A68_INT ,A68_VC *);
extern A68_VOID  BQAAOSF_hex(A68_LBITS ,A68_INT ,A68_VC *);
/* --- End of imports from usefulops --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void MLMACTR(void);   /* modes */
extern void PIJACTR(void);   /* incvalue */
extern void BAAACTR(void);   /* incid */
extern void XFAACTR(void);   /* incoperfn */
extern void ZDAACTR(void);   /* incmode */
extern void YNKACTR(void);   /* idtable */
extern void YRLACTR(void);   /* coutput */
extern void HPIACTR(void);   /* environment */
extern void KNLACTR(void);   /* environ */
extern void THAACTR(void);   /* centities */
extern void IKAAOSF(void);   /* usefulops */
/* --- end of DECS initialisation functions --- */
static A68_147   MRPACTR = {"$Id: values.c,v 1.5.2.4 2004/09/27 03:04:24 teshields Exp $"}; 
A_GISVEC(A68_VC ,NRPACTR,MRPACTR,61)
static A68_159   MVPACTR = {"VALUES - GETCONSTANT, value has no such component"}; 
A_GISVEC(A68_VC ,NVPACTR,MVPACTR,49)
static A68_160   RVPACTR = {"VALUES - ref string: level is invalid"}; 
A_GISVEC(A68_VC ,TVPACTR,RVPACTR,37)
static A68_161   BWPACTR = {"IDENTIFIERS - id ref level: ref levels are incompatable"}; 
A_GISVEC(A68_VC ,DWPACTR,BWPACTR,55)
static A68_162   IWPACTR = {"NL("}; 
A_GISVEC(A68_VC ,JWPACTR,IWPACTR,3)
static A68_166   UWPACTR = {"procedure value"}; 
A_GISVEC(A68_VC ,VWPACTR,UWPACTR,15)
static A68_167   CXPACTR = {".fn.fn_global = "}; 
A_GISVEC(A68_VC ,DXPACTR,CXPACTR,16)
static A68_168   LXPACTR = {".nonlocals = A68_NIL;"}; 
A_GISVEC(A68_VC ,MXPACTR,LXPACTR,21)
static A68_170   AYPACTR = {"VALUES - GETCFRAGMENT: attempt to take address of temporary"}; 
A_GISVEC(A68_VC ,BYPACTR,AYPACTR,59)
static A68_56   KYPACTR = {"A68_NIL"}; 
A_GISVEC(A68_VC ,LYPACTR,KYPACTR,7)
static A68_171   MYPACTR = {"/*SKIP*/"}; 
A_GISVEC(A68_VC ,NYPACTR,MYPACTR,8)
static A68_172   OYPACTR = {"/*EMPTY*/"}; 
A_GISVEC(A68_VC ,PYPACTR,OYPACTR,9)
static A68_173   QYPACTR = {"/* UNDEFINED NSE */"}; 
A_GISVEC(A68_VC ,RYPACTR,QYPACTR,19)
static A68_174   CZPACTR = {""}; 
A_GISVEC(A68_VC ,DZPACTR,CZPACTR,0)
static A68_175   IZPACTR = {"VALUES: GETCRAGMENT: invalid id no"}; 
A_GISVEC(A68_VC ,LZPACTR,IZPACTR,34)
static A68_176   PZPACTR = {"VALUES: GETCFRAGMENT: non-local used gproc"}; 
A_GISVEC(A68_VC ,QZPACTR,PZPACTR,42)
static A68_174   DAQACTR = {""}; 
A_GISVEC(A68_VC ,EAQACTR,DAQACTR,0)
static A68_170   KAQACTR = {"VALUES - GETCFRAGMENT: attempt to evaluate undeclared label"}; 
A_GISVEC(A68_VC ,LAQACTR,KAQACTR,59)
static A68_177   SAQACTR = {"VALUES - GETCFRAGMENT, value has no such component"}; 
A_GISVEC(A68_VC ,TAQACTR,SAQACTR,50)
static A68_182   DCQACTR = {"OPERAND - VALUE parameter is not a TREEOPER."}; 
A_GISVEC(A68_VC ,ECQACTR,DCQACTR,44)
static A68_184   ICQACTR = {"VALUES - deref value: cannot deref value"}; 
A_GISVEC(A68_VC ,JCQACTR,ICQACTR,40)
static A68_171   QCQACTR = {"SPARE op"}; 
A_GISVEC(A68_VC ,RCQACTR,QCQACTR,8)
static A68_171   UCQACTR = {"statgrab"}; 
A_GISVEC(A68_VC ,WCQACTR,UCQACTR,8)
static A68_185   XCQACTR = {"tree generator"}; 
A_GISVEC(A68_VC ,YCQACTR,XCQACTR,14)
static A68_186   ZCQACTR = {"select"}; 
A_GISVEC(A68_VC ,ADQACTR,ZCQACTR,6)
static A68_40   BDQACTR = {"copy"}; 
A_GISVEC(A68_VC ,CDQACTR,BDQACTR,4)
static A68_40   DDQACTR = {"trim"}; 
A_GISVEC(A68_VC ,EDQACTR,DDQACTR,4)
static A68_187   FDQACTR = {"simpleindex"}; 
A_GISVEC(A68_VC ,GDQACTR,FDQACTR,11)
static A68_172   HDQACTR = {"trimindex"}; 
A_GISVEC(A68_VC ,IDQACTR,HDQACTR,9)
static A68_56   JDQACTR = {"dyngrab"}; 
A_GISVEC(A68_VC ,KDQACTR,JDQACTR,7)
static A68_172   LDQACTR = {"boundpack"}; 
A_GISVEC(A68_VC ,MDQACTR,LDQACTR,9)
static A68_172   NDQACTR = {"dyadic op"}; 
A_GISVEC(A68_VC ,ODQACTR,NDQACTR,9)
static A68_188   PDQACTR = {"monadic op"}; 
A_GISVEC(A68_VC ,QDQACTR,PDQACTR,10)
static A68_171   RDQACTR = {"straight"}; 
A_GISVEC(A68_VC ,SDQACTR,RDQACTR,8)
static A68_187   TDQACTR = {"prestraight"}; 
A_GISVEC(A68_VC ,UDQACTR,TDQACTR,11)
static A68_171   VDQACTR = {"strindex"}; 
A_GISVEC(A68_VC ,WDQACTR,VDQACTR,8)
static A68_186   XDQACTR = {"assign"}; 
A_GISVEC(A68_VC ,YDQACTR,XDQACTR,6)
static A68_185   ZDQACTR = {"!! RS def. bnd"}; 
A_GISVEC(A68_VC ,AEQACTR,ZDQACTR,14)
static A68_189   BEQACTR = {"deref"}; 
A_GISVEC(A68_VC ,CEQACTR,BEQACTR,5)
static A68_40   DEQACTR = {"call"}; 
A_GISVEC(A68_VC ,EEQACTR,DEQACTR,4)
static A68_40   FEQACTR = {"void"}; 
A_GISVEC(A68_VC ,GEQACTR,FEQACTR,4)
static A68_186   HEQACTR = {"niltom"}; 
A_GISVEC(A68_VC ,IEQACTR,HEQACTR,6)
static A68_171   JEQACTR = {"gotoproc"}; 
A_GISVEC(A68_VC ,KEQACTR,JEQACTR,8)
static A68_189   LEQACTR = {"gotom"}; 
A_GISVEC(A68_VC ,MEQACTR,LEQACTR,5)
static A68_187   NEQACTR = {"realtocompl"}; 
A_GISVEC(A68_VC ,OEQACTR,NEQACTR,11)
static A68_172   PEQACTR = {"inttoreal"}; 
A_GISVEC(A68_VC ,QEQACTR,PEQACTR,9)
static A68_190   REQACTR = {"68R inttobits"}; 
A_GISVEC(A68_VC ,SEQACTR,REQACTR,13)
static A68_186   TEQACTR = {"arrarr"}; 
A_GISVEC(A68_VC ,UEQACTR,TEQACTR,6)
static A68_186   VEQACTR = {"vecarr"}; 
A_GISVEC(A68_VC ,WEQACTR,VEQACTR,6)
static A68_189   XEQACTR = {"isvec"}; 
A_GISVEC(A68_VC ,YEQACTR,XEQACTR,5)
static A68_191   ZEQACTR = {"is"}; 
A_GISVEC(A68_VC ,AFQACTR,ZEQACTR,2)
static A68_189   BFQACTR = {"unite"}; 
A_GISVEC(A68_VC ,CFQACTR,BFQACTR,5)
static A68_186   DFQACTR = {"uniteu"}; 
A_GISVEC(A68_VC ,EFQACTR,DFQACTR,6)
static A68_189   FFQACTR = {"isarr"}; 
A_GISVEC(A68_VC ,GFQACTR,FFQACTR,5)
static A68_56   HFQACTR = {"skiptom"}; 
A_GISVEC(A68_VC ,IFQACTR,HFQACTR,7)
static A68_162   JFQACTR = {"vec"}; 
A_GISVEC(A68_VC ,KFQACTR,JFQACTR,3)
static A68_162   LFQACTR = {"arr"}; 
A_GISVEC(A68_VC ,MFQACTR,LFQACTR,3)
static A68_56   NFQACTR = {"deunite"}; 
A_GISVEC(A68_VC ,OFQACTR,NFQACTR,7)
static A68_190   PFQACTR = {"bitstov[]bool"}; 
A_GISVEC(A68_VC ,QFQACTR,PFQACTR,13)
static A68_162   RFQACTR = {"vac"}; 
A_GISVEC(A68_VC ,SFQACTR,RFQACTR,3)
static A68_171   TFQACTR = {"ytypetom"}; 
A_GISVEC(A68_VC ,UFQACTR,TFQACTR,8)
static A68_171   VFQACTR = {"mtoxtype"}; 
A_GISVEC(A68_VC ,WFQACTR,VFQACTR,8)
static A68_167   XFQACTR = {"static generator"}; 
A_GISVEC(A68_VC ,YFQACTR,XFQACTR,16)
static A68_186   ZFQACTR = {"format"}; 
A_GISVEC(A68_VC ,AGQACTR,ZFQACTR,6)
static A68_191   BGQACTR = {" ?"}; 
A_GISVEC(A68_VC ,DGQACTR,BGQACTR,2)
static A68_162   HGQACTR = {"NIL"}; 
A_GISVEC(A68_VC ,JGQACTR,HGQACTR,3)
static A68_188   MGQACTR = {"SKIP value"}; 
A_GISVEC(A68_VC ,NGQACTR,MGQACTR,10)
static A68_188   OGQACTR = {"skip value"}; 
A_GISVEC(A68_VC ,PGQACTR,OGQACTR,10)
static A68_191   QGQACTR = {"( "}; 
static A68_191   RGQACTR = {", "}; 
static A68_189   TGQACTR = {"EMPTY"}; 
A_GISVEC(A68_VC ,VGQACTR,TGQACTR,5)
static A68_188   XGQACTR = {"constant: "}; 
A_GISVEC(A68_VC ,YGQACTR,XGQACTR,10)
static A68_56   BHQACTR = {"label: "}; 
A_GISVEC(A68_VC ,CHQACTR,BHQACTR,7)
static A68_194   FHQACTR = {"identifier: "}; 
A_GISVEC(A68_VC ,GHQACTR,FHQACTR,12)
static A68_187   JHQACTR = {"temporary: "}; 
A_GISVEC(A68_VC ,KHQACTR,JHQACTR,11)
static A68_187   OHQACTR = {"cfragment: "}; 
A_GISVEC(A68_VC ,PHQACTR,OHQACTR,11)
static A68_194   RHQACTR = {"empty or vac"}; 
A_GISVEC(A68_VC ,SHQACTR,RHQACTR,12)
static A68_40   THQACTR = {"skip"}; 
A_GISVEC(A68_VC ,UHQACTR,THQACTR,4)
static A68_162   VHQACTR = {"nil"}; 
A_GISVEC(A68_VC ,WHQACTR,VHQACTR,3)
static A68_117   XHQACTR = {"TRACER - Unknown nse constituent"}; 
A_GISVEC(A68_VC ,YHQACTR,XHQACTR,32)
static A68_185   AIQACTR = {" routineinfo: "}; 
A_GISVEC(A68_VC ,BIQACTR,AIQACTR,14)
static A68_162   HIQACTR = {" ( "}; 
static A68_171   IIQACTR = {", .... )"}; 
A_GISVEC(A68_VC ,JIQACTR,HIQACTR,3)
A_GISVEC(A68_VC ,LIQACTR,IIQACTR,8)
static A68_162   MIQACTR = {" ( "}; 
static A68_188   NIQACTR = {", no ops: "}; 
static A68_172   OIQACTR = {", param: "}; 
static A68_191   PIQACTR = {" )"}; 
A_GISVEC(A68_VC ,QIQACTR,MIQACTR,3)
A_GISVEC(A68_VC ,SIQACTR,NIQACTR,10)
A_GISVEC(A68_VC ,VIQACTR,OIQACTR,9)
A_GISVEC(A68_VC ,XIQACTR,PIQACTR,2)
static A68_195   YIQACTR = {"TRACER - Unknown EXTRA in value"}; 
A_GISVEC(A68_VC ,ZIQACTR,YIQACTR,31)
static A68_191   AJQACTR = {" )"}; 
A_GISVEC(A68_VC ,BJQACTR,QGQACTR,2)
A_GISVEC(A68_VC ,DJQACTR,RGQACTR,2)
A_GISVEC(A68_VC ,EJQACTR,AJQACTR,2)
static A68_198   PJQACTR = {"VALUES - uvalue to cfragment: unknown constituent of union"}; 
A_GISVEC(A68_VC ,QJQACTR,PJQACTR,58)
static A68_201   UJQACTR = {"VALUES - join uvalue: no parameters"}; 
A_GISVEC(A68_VC ,VJQACTR,UJQACTR,35)
static A68_202   LKQACTR = {"VALUES - comma separate: no parameters"}; 
A_GISVEC(A68_VC ,MKQACTR,LKQACTR,38)
static A68_162   GMQACTR = {" = "}; 
A_GISVEC(A68_VC ,HMQACTR,GMQACTR,3)
static A68_191   MMQACTR = {" ;"}; 
A_GISVEC(A68_VC ,NMQACTR,MMQACTR,2)
static A68_189   UMQACTR = {"YIELD"}; 
A_GISVEC(A68_VC ,XMQACTR,UMQACTR,5)
typedef struct   /* env of non-global proc */
{
int dummy;
} ZJQACTR_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} QKQACTR_generator;

A68_107 * SRPACTR_tree(A68_INT  Mode, A68_INT  Fn, A68_BITS  Param, A68_148  Operands);

A_STATIC A68_114 * BSPACTR_assignment(A68_114 * ZRPACTR_anonymous, A68_114  ASPACTR_anonymous);

A_STATIC A68_107 * ESPACTR_assignment(A68_107 * CSPACTR_anonymous, A68_107  DSPACTR_anonymous);

A_STATIC A68_108 * JSPACTR_assignment(A68_108 * HSPACTR_anonymous, A68_108  ISPACTR_anonymous);

A_STATIC A68_BITS  ZSPACTR_xor(A68_BITS  A, A68_BITS  B);

A68_BOOL  DTPACTR_hasattribute(A68_107 * Value, A68_BITS  A);

A68_BOOL  ITPACTR_(A68_107 * V1, A68_107 * V2);

A68_BOOL  RTPACTR_(A68_107 * V1, A68_107 * V2);

A68_BOOL  UTPACTR_isconstant(A68_107 * Value);

A68_BOOL  ZTPACTR_isconstant(A68_107 * Value, A68_LBITS  Const);

A_STATIC A68_BOOL  EUPACTR_isroutineinfo(A68_107 * Value);

A_STATIC A68_BOOL  IUPACTR_isatomic(A68_107 * Value);

A68_BOOL  NUPACTR_isident(A68_107 * Value);

A68_BOOL  RUPACTR_istemp(A68_107 * Value);

A68_BOOL  VUPACTR_iscfragment(A68_107 * Value);

A68_BOOL  ZUPACTR_isskip(A68_107 * Value);

A68_BOOL  EVPACTR_isaname(A68_107 * Op);

A68_LBITS  IVPACTR_getconstant(A68_107 * Value);

A_STATIC A68_VOID  QVPACTR_refstring(A68_INT  Level, A68_VC  *ReturnedValue);

A68_INT  YVPACTR_idreflevel(A68_INT  Mode, A68_INT  Ctype);

A68_VOID  GWPACTR_nlmacro(A68_VC  Cf, A68_VC  *ReturnedValue);

A68_VOID  PWPACTR_getcfragment(A68_107 * Value, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  TWPACTR_makeprocvalue(A68_VC  Name, A68_INT  Mode, A68_VC  *ReturnedValue);

A68_VOID  WAQACTR_bracketcfragment(A68_107 * Value, A68_VC  *ReturnedValue);

A68_107 * DBQACTR_indexvaluelist(A68_114 * List, A68_INT  Index);

A68_114 * JBQACTR_reversevaluelist(A68_114 * List);

A68_INT  QBQACTR_operandsof(A68_113  Treeoper);

A68_INT  UBQACTR_paramof(A68_113  Treeoper);

A68_107 * YBQACTR_operand(A68_107 * Oper, A68_INT  Rand);

A68_VOID  HCQACTR_derefvalue(A68_107 * Value);

A68_VOID  MCQACTR_enrefvalue(A68_107 * Value);

A_STATIC A68_VOID  PCQACTR_fnname(A68_INT  Fn, A68_VC  *ReturnedValue);

A68_VOID  GGQACTR_valuestring(A68_107 * Value, A68_BOOL  Brief, A68_VC  *ReturnedValue);

A68_VOID  GJQACTR_uvaluetocfragment(A68_196  U, A68_VC  *ReturnedValue);

A68_VOID  TJQACTR_joinuvalue(A68_199  Items, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  YJQACTR_generator(A68_BOOL  WJQACTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  KKQACTR_commaseparate(A68_199  Items, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  PKQACTR_generator(A68_BOOL  NKQACTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  HLQACTR_commalist(A68_199  Items, A68_VC  *ReturnedValue);

A68_VOID  NLQACTR_usemacro(A68_VC  Macro, A68_199  Arguments, A68_VC  *ReturnedValue);

A68_VOID  SLQACTR_emitline(A68_199  Uv);

A68_VOID  BMQACTR_yieldtemporary(A68_VC  Comment, A68_INT  Mode, A68_199  Op, A68_111  *ReturnedValue);

A68_107 * TMQACTR_yield(A68_107 * Op);

A68_107 * ENQACTR_yield(A68_VC  Comment, A68_107 * Op);

A_STATIC A68_108 * JSPACTR_assignment(A68_108 * HSPACTR_anonymous, A68_108  ISPACTR_anonymous)
{ 
A68_108  KSPACTR;  /* united object - for case conformity */
A68_VC  LSPACTR_anonymous;
A68_VC  MSPACTR;  /* OPERATORS - copy to flex */
A68_153 * NSPACTR;  /* YIELD */
A68_108 * OSPACTR;  /* clause result */
{ 
(*HSPACTR_anonymous) = ISPACTR_anonymous;
KSPACTR = ISPACTR_anonymous ;
switch ( KSPACTR.mode )
{ 
case 6: /* VECTOR [] CHAR */
LSPACTR_anonymous = (KSPACTR.data.mode6);
NSPACTR = &(HSPACTR_anonymous-> data.mode6) ;
(*NSPACTR) = A_VCOPY(LSPACTR_anonymous,MSPACTR,A68_CHAR );
break;
default: 
/*SKIP*/;
break;
} 
OSPACTR = HSPACTR_anonymous;
} 
return( OSPACTR );
} 
#undef NL

A_STATIC A68_107 * ESPACTR_assignment(A68_107 * CSPACTR_anonymous, A68_107  DSPACTR_anonymous)
{ 
A68_INT * FSPACTR;  /* YIELD */
A68_BITS * GSPACTR;  /* YIELD */
A68_107 * PSPACTR;  /* clause result */
{ 
FSPACTR = (&(CSPACTR_anonymous->Mode)) ;
(*FSPACTR) = DSPACTR_anonymous.Mode;
GSPACTR = (&(CSPACTR_anonymous->Info)) ;
(*GSPACTR) = DSPACTR_anonymous.Info;
JSPACTR_assignment((&(CSPACTR_anonymous->Extra)), DSPACTR_anonymous.Extra);
PSPACTR = CSPACTR_anonymous;
} 
return( PSPACTR );
} 
#undef NL

A_STATIC A68_114 * BSPACTR_assignment(A68_114 * ZRPACTR_anonymous, A68_114  ASPACTR_anonymous)
{ 
A68_114 ** QSPACTR;  /* YIELD */
A68_114 * RSPACTR;  /* clause result */
{ 
ESPACTR_assignment((&(ZRPACTR_anonymous->Value)), ASPACTR_anonymous.Value);
QSPACTR = (&(ZRPACTR_anonymous->Rest)) ;
(*QSPACTR) = ASPACTR_anonymous.Rest;
RSPACTR = ZRPACTR_anonymous;
} 
return( RSPACTR );
} 
#undef NL

A_STATIC A68_VOID  TWPACTR_makeprocvalue(A68_VC  Name, A68_INT  Mode, A68_VC  *ReturnedValue)
{ 
A68_111  WWPACTR;  /* avoid structure result */
A68_VC  XWPACTR;  /* OPERATORS - istruct -> vector */
A68_56  YWPACTR;  /* OPERATORS - istruct -> vector */
A68_VC  ZWPACTR_tempname;
A68_169  AXPACTR;  /* collateral clause result */
A68_92  BXPACTR;  /* OPERATORS - mode -> union mode */
A68_92  EXPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  FXPACTR;  /* YIELD */
A68_92  GXPACTR;  /* OPERATORS - mode -> union mode */
A68_92  HXPACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  IXPACTR;  /* YIELD */
A68_92  JXPACTR;  /* OPERATORS - mode -> union mode */
A68_92  KXPACTR;  /* OPERATORS - mode -> union mode */
A68_92  NXPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  OXPACTR;  /* YIELD */
A68_92  PXPACTR;  /* OPERATORS - mode -> union mode */
A68_91  QXPACTR;  /* OPERATORS - istruct -> vector */
A68_VC  RXPACTR;  /* clause result */
A_PROC_ENTRY(makeprocvalue);
 /* line 189: */
 /* line 190: */
{ 
UIOACTR_declarectemporary( Mode, VWPACTR, &WWPACTR );
YWPACTR = WWPACTR.Name ;
ZWPACTR_tempname = A_HISVEC(XWPACTR,YWPACTR,7,A68_CHAR );
 /* line 191: */
 /* line 192: */
AXPACTR.data[0] = A_UNITE(BXPACTR,mode2,2,ZWPACTR_tempname);
FXPACTR = DXPACTR ;
AXPACTR.data[1] = A_UNITE(EXPACTR,mode2,2,FXPACTR);
AXPACTR.data[2] = A_UNITE(GXPACTR,mode2,2,Name);
IXPACTR = ';' ;
AXPACTR.data[3] = A_UNITE(HXPACTR,mode1,1,IXPACTR);
 /* line 193: */
AXPACTR.data[4] = A_UNITE(JXPACTR,mode4,4,EIAACTR_cnewline);
AXPACTR.data[5] = A_UNITE(KXPACTR,mode2,2,ZWPACTR_tempname);
 /* line 194: */
OXPACTR = MXPACTR ;
AXPACTR.data[6] = A_UNITE(NXPACTR,mode2,2,OXPACTR);
AXPACTR.data[7] = A_UNITE(PXPACTR,mode4,4,EIAACTR_cnewline);
 /* line 195: */
VBMACTR_writecstream(A_HISVEC(QXPACTR,AXPACTR,8,A68_92 ), WQLACTR_codestream(EQLACTR_currentlevel()));
 /* line 196: */
 /* line 197: */
RXPACTR = ZWPACTR_tempname;
} 
A_PROC_EXIT(makeprocvalue);
*ReturnedValue = (RXPACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  YJQACTR_generator(A68_BOOL  WJQACTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((ZJQACTR_generator *)NonLocals)->x)
{ 
A68_VC  AKQACTR;  /* clause result */
A68_VC  BKQACTR;  /* OPERATORS - dynamic generator */
{ 
BKQACTR.upb = 0 ;
( WJQACTR_anonymous? A_VLOC(A68_CHAR ,BKQACTR): A_VHEAP(A68_CHAR ,BKQACTR) );
AKQACTR = BKQACTR;
} 
*ReturnedValue = (AKQACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  PKQACTR_generator(A68_BOOL  NKQACTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((QKQACTR_generator *)NonLocals)->x)
{ 
A68_VC  RKQACTR;  /* clause result */
A68_VC  SKQACTR;  /* OPERATORS - dynamic generator */
{ 
SKQACTR.upb = 0 ;
( NKQACTR_anonymous? A_VLOC(A68_CHAR ,SKQACTR): A_VHEAP(A68_CHAR ,SKQACTR) );
RKQACTR = SKQACTR;
} 
*ReturnedValue = (RKQACTR);
return;
} 
#undef NL

A68_107 * SRPACTR_tree(A68_INT  Mode, A68_INT  Fn, A68_BITS  Param, A68_148  Operands)
{ 
A68_114 * TRPACTR_operandlist;
A68_INT  URPACTR_upboperands;
A68_107 * VRPACTR_operand;
A68_107 ** WRPACTR;  /* forall control - []x */
A68_INT  XRPACTR;  /* forall loop counter */
A68_114  YRPACTR;  /* collateral clause result */
A68_107  SSPACTR;  /* collateral clause result */
A68_113  TSPACTR;  /* collateral clause result */
A68_BITS  USPACTR;  /* SHL */
A68_108  VSPACTR;  /* OPERATORS - mode -> union mode */
A68_107 * WSPACTR;  /* clause result */
A_PROC_ENTRY(tree);
 /* line 54: */
 /* line 55: */
{ 
TRPACTR_operandlist = (A68_114 *)A68_NIL;
 /* line 56: */
URPACTR_upboperands = Operands.upb;
 /* line 58: */
 /* line 59: */
XRPACTR = Operands.upb -1;
WRPACTR = Operands.data;
for (;XRPACTR-- >= 0;
(WRPACTR++
) )
{
VRPACTR_operand = *WRPACTR;
YRPACTR.Value = (*VRPACTR_operand);
 /* line 60: */
YRPACTR.Rest = TRPACTR_operandlist;
TRPACTR_operandlist = BSPACTR_assignment(A_HEAP(A68_114 ), YRPACTR);
}
 /* line 62: */
 /* line 63: */
 /* line 64: */
SSPACTR.Mode = Mode;
 /* line 66: */
SSPACTR.Info = YIJACTR_defaultinfo;
 /* line 67: */
TSPACTR.Fn = Fn;
 /* line 69: */
USPACTR = (A68_BITS )URPACTR_upboperands ;
TSPACTR.Param = (A68_INT )(A68_BITS )(A_SHL(USPACTR,WGAACTR_operandsshift)|(A68_BITS )(Param&ZGAACTR_parammask));
 /* line 70: */
TSPACTR.Operands = TRPACTR_operandlist;
 /* line 71: */
SSPACTR.Extra = A_UNITE(VSPACTR,mode9,9,TSPACTR);
WSPACTR = ESPACTR_assignment(A_HEAP(A68_107 ), SSPACTR);
} 
A_PROC_EXIT(tree);
return( WSPACTR );
} 
#undef NL

A_STATIC A68_BITS  ZSPACTR_xor(A68_BITS  A, A68_BITS  B)
{ 
A68_BITS  ATPACTR;  /* clause result */
A_PROC_ENTRY(xor);
ATPACTR = (A68_BITS )((A68_BITS )(A|B)&~(A68_BITS )(A&B));
A_PROC_EXIT(xor);
return( ATPACTR );
} 
#undef NL

A68_BOOL  DTPACTR_hasattribute(A68_107 * Value, A68_BITS  A)
{ 
A68_BOOL  ETPACTR;  /* clause result */
A68_BITS  FTPACTR;  /* ADICOPS - >= */
A_PROC_ENTRY(hasattribute);
 /* line 81: */
FTPACTR = (*(&(Value->Info))) ;
ETPACTR = A_LB_GE(FTPACTR,A);
A_PROC_EXIT(hasattribute);
return( ETPACTR );
} 
#undef NL

A68_BOOL  ITPACTR_(A68_107 * V1, A68_107 * V2)
{ 
A68_108  JTPACTR;  /* united object - for case conformity */
A68_108  KTPACTR;  /* united object - for case conformity */
A68_BOOL  LTPACTR;  /* clause result */
A68_LBITS  MTPACTR_b1;
A68_108  NTPACTR;  /* united object - for case conformity */
A68_LBITS  OTPACTR_b2;
A_PROC_ENTRY(=);
 /* line 90: */
 /* line 91: */
JTPACTR = (*(&(V1->Extra))) ;
switch ( JTPACTR.mode )
{ 
case 3: /* VOID */
 /* line 92: */
KTPACTR = (*(&(V2->Extra))) ;
switch ( KTPACTR.mode )
{ 
case 3: /* VOID */
 /* line 93: */
LTPACTR = ((*(&(V1->Mode)))==(*(&(V2->Mode))));
break;
default: 
 /* line 94: */
 /* line 95: */
LTPACTR = A68_FALSE;
break;
} 
break;
case 1: /* LONG BITS */
MTPACTR_b1 = (JTPACTR.data.mode1);
NTPACTR = (*(&(V2->Extra))) ;
switch ( NTPACTR.mode )
{ 
case 1: /* LONG BITS */
OTPACTR_b2 = (NTPACTR.data.mode1);
LTPACTR = (MTPACTR_b1==OTPACTR_b2);
break;
default: 
 /* line 96: */
LTPACTR = A68_FALSE;
break;
} 
break;
default: 
 /* line 97: */
LTPACTR = A68_FALSE;
break;
} 
A_PROC_EXIT(=);
return( LTPACTR );
} 
#undef NL

A68_BOOL  RTPACTR_(A68_107 * V1, A68_107 * V2)
{ 
A68_BOOL  STPACTR;  /* clause result */
A_PROC_ENTRY(/=);
STPACTR = !ITPACTR_(V1, V2);
A_PROC_EXIT(/=);
return( STPACTR );
} 
#undef NL

A68_BOOL  UTPACTR_isconstant(A68_107 * Value)
{ 
A68_108  VTPACTR;  /* united object - for case conformity */
A68_BOOL  WTPACTR;  /* clause result */
A_PROC_ENTRY(isconstant);
 /* line 106: */
VTPACTR = (*(&(Value->Extra))) ;
switch ( VTPACTR.mode )
{ 
case 1: /* LONG BITS */
WTPACTR = A68_TRUE;
break;
case 6: /* VECTOR [] CHAR */
WTPACTR = DTPACTR_hasattribute(Value, ZIJACTR_constant);
break;
default: 
WTPACTR = A68_FALSE;
break;
} 
A_PROC_EXIT(isconstant);
return( WTPACTR );
} 
#undef NL

A68_BOOL  ZTPACTR_isconstant(A68_107 * Value, A68_LBITS  Const)
{ 
A68_108  AUPACTR;  /* united object - for case conformity */
A68_LBITS  BUPACTR_b;
A68_BOOL  CUPACTR;  /* clause result */
A_PROC_ENTRY(isconstant);
 /* line 109: */
AUPACTR = (*(&(Value->Extra))) ;
switch ( AUPACTR.mode )
{ 
case 1: /* LONG BITS */
BUPACTR_b = (AUPACTR.data.mode1);
CUPACTR = (BUPACTR_b==Const);
break;
default: 
CUPACTR = A68_FALSE;
break;
} 
A_PROC_EXIT(isconstant);
return( CUPACTR );
} 
#undef NL

A_STATIC A68_BOOL  EUPACTR_isroutineinfo(A68_107 * Value)
{ 
A68_108  FUPACTR;  /* united object - for case conformity */
A68_BOOL  GUPACTR;  /* clause result */
A_PROC_ENTRY(isroutineinfo);
 /* line 112: */
FUPACTR = (*(&(Value->Extra))) ;
switch ( FUPACTR.mode )
{ 
case 2: /* STRUCT(INT)  */
GUPACTR = A68_TRUE;
break;
default: 
GUPACTR = A68_FALSE;
break;
} 
A_PROC_EXIT(isroutineinfo);
return( GUPACTR );
} 
#undef NL

A_STATIC A68_BOOL  IUPACTR_isatomic(A68_107 * Value)
{ 
A68_108  JUPACTR;  /* united object - for case conformity */
A68_BOOL  KUPACTR;  /* clause result */
A68_BOOL  LUPACTR;  /* optbool result */
A_PROC_ENTRY(isatomic);
 /* line 115: */
 /* line 116: */
JUPACTR = (*(&(Value->Extra))) ;
switch ( JUPACTR.mode )
{ 
case 1: /* LONG BITS */
 /* line 117: */
KUPACTR = A68_TRUE;
break;
case 5: /* STRUCT(MODE56,INT)  */
 /* line 118: */
KUPACTR = A68_TRUE;
break;
case 4: /* STRUCT(INT)  */
 /* line 119: */
KUPACTR = A68_TRUE;
break;
case 6: /* VECTOR [] CHAR */
LUPACTR = DTPACTR_hasattribute(Value, ZIJACTR_constant);
if ( ! LUPACTR )
{ /* line 120: */
LUPACTR = DTPACTR_hasattribute(Value, AJJACTR_atomic);
}
KUPACTR = LUPACTR;
break;
default: 
 /* line 121: */
KUPACTR = A68_FALSE;
break;
} 
A_PROC_EXIT(isatomic);
return( KUPACTR );
} 
#undef NL

A68_BOOL  NUPACTR_isident(A68_107 * Value)
{ 
A68_108  OUPACTR;  /* united object - for case conformity */
A68_BOOL  PUPACTR;  /* clause result */
A_PROC_ENTRY(isident);
 /* line 127: */
OUPACTR = (*(&(Value->Extra))) ;
switch ( OUPACTR.mode )
{ 
case 4: /* STRUCT(INT)  */
PUPACTR = A68_TRUE;
break;
default: 
PUPACTR = A68_FALSE;
break;
} 
A_PROC_EXIT(isident);
return( PUPACTR );
} 
#undef NL

A68_BOOL  RUPACTR_istemp(A68_107 * Value)
{ 
A68_108  SUPACTR;  /* united object - for case conformity */
A68_BOOL  TUPACTR;  /* clause result */
A_PROC_ENTRY(istemp);
 /* line 130: */
SUPACTR = (*(&(Value->Extra))) ;
switch ( SUPACTR.mode )
{ 
case 5: /* STRUCT(MODE56,INT)  */
TUPACTR = A68_TRUE;
break;
default: 
TUPACTR = A68_FALSE;
break;
} 
A_PROC_EXIT(istemp);
return( TUPACTR );
} 
#undef NL

A68_BOOL  VUPACTR_iscfragment(A68_107 * Value)
{ 
A68_108  WUPACTR;  /* united object - for case conformity */
A68_BOOL  XUPACTR;  /* clause result */
A_PROC_ENTRY(iscfragment);
 /* line 133: */
WUPACTR = (*(&(Value->Extra))) ;
switch ( WUPACTR.mode )
{ 
case 6: /* VECTOR [] CHAR */
XUPACTR = A68_TRUE;
break;
default: 
XUPACTR = A68_FALSE;
break;
} 
A_PROC_EXIT(iscfragment);
return( XUPACTR );
} 
#undef NL

A68_BOOL  ZUPACTR_isskip(A68_107 * Value)
{ 
A68_108  AVPACTR;  /* united object - for case conformity */
A68_112  BVPACTR_tn;
A68_BOOL  CVPACTR;  /* clause result */
A_PROC_ENTRY(isskip);
 /* line 136: */
AVPACTR = (*(&(Value->Extra))) ;
switch ( AVPACTR.mode )
{ 
case 8: /* STRUCT(INT)  */
BVPACTR_tn = (AVPACTR.data.mode8);
CVPACTR = (BVPACTR_tn.Nse==2);
break;
default: 
CVPACTR = A68_FALSE;
break;
} 
A_PROC_EXIT(isskip);
return( CVPACTR );
} 
#undef NL

A68_BOOL  EVPACTR_isaname(A68_107 * Op)
{ 
A68_108  FVPACTR;  /* united object - for case conformity */
A68_BOOL  GVPACTR;  /* clause result */
A_PROC_ENTRY(isaname);
 /* line 139: */
 /* line 140: */
FVPACTR = (*(&(Op->Extra))) ;
switch ( FVPACTR.mode )
{ 
case 4: /* STRUCT(INT)  */
 /* line 141: */
GVPACTR = A68_TRUE;
break;
case 5: /* STRUCT(MODE56,INT)  */
 /* line 142: */
GVPACTR = A68_TRUE;
break;
default: 
 /* line 143: */
GVPACTR = A68_FALSE;
break;
} 
A_PROC_EXIT(isaname);
return( GVPACTR );
} 
#undef NL

A68_LBITS  IVPACTR_getconstant(A68_107 * Value)
{ 
A68_108  JVPACTR;  /* united object - for case conformity */
A68_LBITS  KVPACTR_b;
A68_LBITS  LVPACTR;  /* clause result */
A68_LBITS  OVPACTR;  /* OPERATORS - skip to mode */
A_PROC_ENTRY(getconstant);
 /* line 146: */
 /* line 147: */
JVPACTR = (*(&(Value->Extra))) ;
switch ( JVPACTR.mode )
{ 
case 1: /* LONG BITS */
KVPACTR_b = (JVPACTR.data.mode1);
 /* line 148: */
LVPACTR = KVPACTR_b;
break;
default: 
PXIACTR_assert(NVPACTR, A68_FALSE);
 /* line 149: */
LVPACTR = OVPACTR;
break;
} 
A_PROC_EXIT(getconstant);
return( LVPACTR );
} 
#undef NL

A_STATIC A68_VOID  QVPACTR_refstring(A68_INT  Level, A68_VC  *ReturnedValue)
{ 
A68_BOOL  SVPACTR;  /* optbool result */
A68_CHAR  UVPACTR;  /* clause result */
A68_VC  VVPACTR;  /* clause result */
A_PROC_ENTRY(refstring);
 /* line 161: */
 /* line 162: */
{ 
SVPACTR = (Level>=(-1));
if ( SVPACTR )
{SVPACTR = (Level<32);
}
PXIACTR_assert(TVPACTR, SVPACTR);
 /* line 163: */
if ( (Level>0) )
{ 
UVPACTR = '*';
} 
else
{ 
 /* line 164: */
UVPACTR = '&';
} 
VVPACTR = A_C_TIMES(UVPACTR,A_ABS(Level));
} 
A_PROC_EXIT(refstring);
*ReturnedValue = (VVPACTR);
return;
} 
#undef NL

A68_INT  YVPACTR_idreflevel(A68_INT  Mode, A68_INT  Ctype)
{ 
A68_BOOL  ZVPACTR_firmarray;
A68_INT  AWPACTR_diff;
A68_BOOL  CWPACTR;  /* optbool result */
A68_INT  EWPACTR;  /* clause result */
A_PROC_ENTRY(idreflevel);
 /* line 167: */
 /* line 168: */
{ 
ZVPACTR_firmarray = OPMACTR_isfirmarray(Mode);
 /* line 169: */
 /* line 170: */
 /* line 172: */
 /* line 173: */
 /* line 174: */
 /* line 175: */
AWPACTR_diff = (((Ctype/VFAACTR_refmark)+(ZVPACTR_firmarray))-((Mode/VFAACTR_refmark)+((ZVPACTR_firmarray&!ARMACTR_hasrefs(Mode)))));
 /* line 176: */
 /* line 177: */
CWPACTR = (AWPACTR_diff>=0);
if ( ! CWPACTR )
{CWPACTR = (AWPACTR_diff==(-1));
}
PXIACTR_assert(DWPACTR, CWPACTR);
 /* line 178: */
 /* line 179: */
EWPACTR = AWPACTR_diff;
} 
A_PROC_EXIT(idreflevel);
return( EWPACTR );
} 
#undef NL

A68_VOID  GWPACTR_nlmacro(A68_VC  Cf, A68_VC  *ReturnedValue)
{ 
A68_163  HWPACTR;  /* collateral clause result */
A68_VC  KWPACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  LWPACTR;  /* clause result */
A68_36  MWPACTR;  /* OPERATORS - istruct -> vector */
A68_VC  NWPACTR;  /* avoid structure result */
A_PROC_ENTRY(nlmacro);
HWPACTR.data[0] = JWPACTR;
HWPACTR.data[1] = Cf;
HWPACTR.data[2] = A_HVEC(KWPACTR,')',A68_CHAR );
JDAAOSF_concat( A_HISVEC(MWPACTR,HWPACTR,3,A68_VC ), &NWPACTR );
LWPACTR = NWPACTR;
A_PROC_EXIT(nlmacro);
*ReturnedValue = (LWPACTR);
return;
} 
#undef NL

A68_VOID  PWPACTR_getcfragment(A68_107 * Value, A68_VC  *ReturnedValue)
{ 
A68_108  SXPACTR;  /* united object - for case conformity */
A68_VC  TXPACTR_c;
A68_VC  UXPACTR;  /* clause result */
A68_111  VXPACTR_t;
A68_INT  WXPACTR_vmode;
A68_INT  XXPACTR;  /* clause result */
A68_INT  YXPACTR_rmode;
A68_INT  ZXPACTR_diff;
A68_VC  CYPACTR;  /* avoid structure result */
A68_VC  DYPACTR;  /* OPERATORS - istruct -> vector */
A68_56  EYPACTR;  /* OPERATORS - istruct -> vector */
A68_VC  FYPACTR_result;
A68_VC  GYPACTR;  /* avoid structure result */
A68_LBITS  HYPACTR_b;
A68_VC  IYPACTR;  /* avoid structure result */
A68_112  JYPACTR_nihil;
A68_109  SYPACTR_r;
A68_INT  TYPACTR_rd;
A68_BOOL  UYPACTR;  /* clause result */
A68_94 * VYPACTR_rdinfo;
A68_BITS  WYPACTR;  /* ADICOPS - >= */
A68_VC  XYPACTR;  /* avoid structure result */
A68_VC  YYPACTR;  /* avoid structure result */
A68_VC  ZYPACTR;  /* avoid structure result */
A68_VC  AZPACTR;  /* avoid structure result */
A68_VC  BZPACTR;  /* avoid structure result */
A68_110  EZPACTR_i;
A68_BOOL  FZPACTR_bracketsrequired;
A68_BOOL  GZPACTR_nonlocal;
A68_INT  HZPACTR_id;
A68_BOOL  JZPACTR;  /* optbool result */
A68_BOOL  KZPACTR;  /* optbool result */
A68_93 * MZPACTR_idinfo;
A68_BITS  NZPACTR;  /* ADICOPS - >= */
A68_BOOL  OZPACTR_isgproc;
A68_VC  RZPACTR;  /* clause result */
A68_VC  SZPACTR;  /* avoid structure result */
A68_VC  TZPACTR;  /* avoid structure result */
A68_INT  UZPACTR;  /* clause result */
A68_INT  VZPACTR_reqda68mode;
A68_INT  WZPACTR;  /* clause result */
A68_INT  XZPACTR_reqdcmode;
A68_INT  YZPACTR_diff;
A68_VC  ZZPACTR;  /* avoid structure result */
A68_VC  AAQACTR;  /* clause result */
A68_VC  BAQACTR;  /* avoid structure result */
A68_VC  CAQACTR;  /* avoid structure result */
A68_VC  FAQACTR;  /* avoid structure result */
A68_VC  GAQACTR_body;
A68_VC  HAQACTR;  /* avoid structure result */
A68_57  IAQACTR_label;
A68_INT  JAQACTR_l;
A68_VC  MAQACTR;  /* avoid structure result */
A68_61  NAQACTR;  /* avoid structure result */
A68_VC  OAQACTR;  /* avoid structure result */
A68_VC  PAQACTR;  /* avoid structure result */
A68_VC  QAQACTR;  /* avoid structure result */
A68_VC  RAQACTR;  /* avoid structure result */
A68_VC  UAQACTR;  /* OPERATORS - skip to mode */
A_PROC_ENTRY(getcfragment);
 /* line 187: */
 /* line 188: */
{ 
 /* line 199: */
 /* line 201: */
SXPACTR = (*(&(Value->Extra))) ;
switch ( SXPACTR.mode )
{ 
case 6: /* VECTOR [] CHAR */
TXPACTR_c = (SXPACTR.data.mode6);
 /* line 203: */
UXPACTR = TXPACTR_c;
break;
case 5: /* STRUCT(MODE56,INT)  */
VXPACTR_t = (SXPACTR.data.mode5);
 /* line 204: */
{ 
WXPACTR_vmode = (*(&(Value->Mode)));
 /* line 205: */
 /* line 206: */
 /* line 207: */
if ( DTPACTR_hasattribute(Value, EJJACTR_lvalue) )
{ 
 /* line 208: */
 /* line 209: */
XXPACTR = KRMACTR_derefmode(WXPACTR_vmode);
} 
else
{ 
XXPACTR = WXPACTR_vmode;
} 
YXPACTR_rmode = XXPACTR;
 /* line 210: */
ZXPACTR_diff = YVPACTR_idreflevel(YXPACTR_rmode, VXPACTR_t.Mode);
 /* line 211: */
 /* line 212: */
PXIACTR_assert(BYPACTR, (ZXPACTR_diff>=0));
 /* line 213: */
QVPACTR_refstring( ZXPACTR_diff, &CYPACTR );
EYPACTR = VXPACTR_t.Name ;
FYPACTR_result = A_VC_PLUS(CYPACTR,A_HISVEC(DYPACTR,EYPACTR,7,A68_CHAR ));
 /* line 214: */
if ( (ZXPACTR_diff>0) )
{ 
JIAACTR_bracket( FYPACTR_result, &GYPACTR );
UXPACTR = GYPACTR;
} 
else
{ 
 /* line 215: */
 /* line 217: */
UXPACTR = FYPACTR_result;
} 
} 
break;
case 1: /* LONG BITS */
HYPACTR_b = (SXPACTR.data.mode1);
 /* line 219: */
JPAAOSF_lwhole( (A68_LINT )HYPACTR_b, 0, &IYPACTR );
UXPACTR = IYPACTR;
break;
case 8: /* STRUCT(INT)  */
JYPACTR_nihil = (SXPACTR.data.mode8);
 /* line 220: */
 /* line 221: */
switch ( JYPACTR_nihil.Nse )
{ 
case 1: 
UXPACTR = LYPACTR;
break;
case 2: 
 /* line 222: */
UXPACTR = NYPACTR;
break;
case 3: 
 /* line 223: */
UXPACTR = PYPACTR;
break;
default: 
 /* line 225: */
UXPACTR = RYPACTR;
break;
} 
break;
case 2: /* STRUCT(INT)  */
SYPACTR_r = (SXPACTR.data.mode2);
 /* line 226: */
{ 
{ 
TYPACTR_rd = SYPACTR_r.Rdenno;
 /* line 227: */
 /* line 228: */
 /* line 229: */
 /* line 230: */
UYPACTR = ((TYPACTR_rd<=KAAACTR_maxrdno)&(TYPACTR_rd>=JAAACTR_minrdno));
if ( UYPACTR )
{ 
VYPACTR_rdinfo = (&A_R1INDEX(GOKACTR_rds,TYPACTR_rd));
 /* line 231: */
 /* line 232: */
WYPACTR = (*(&(VYPACTR_rdinfo->Flags))) ;
if ( A_LB_GE(WYPACTR,APKACTR_rdglobalflag) )
{ 
 /* line 233: */
DSKACTR_idfullname( TYPACTR_rd, &XYPACTR );
TWPACTR_makeprocvalue( XYPACTR, (*(&(VYPACTR_rdinfo->Mode))), &YYPACTR );
UXPACTR = YYPACTR;
} 
else
{ 
 /* line 234: */
if ( DTPACTR_hasattribute(Value, CJJACTR_nonloc) )
{ 
 /* line 235: */
DSKACTR_idfullname( TYPACTR_rd, &ZYPACTR );
GWPACTR_nlmacro( ZYPACTR, &AZPACTR );
UXPACTR = AZPACTR;
} 
else
{ 
 /* line 236: */
 /* line 237: */
 /* line 238: */
DSKACTR_idfullname( TYPACTR_rd, &BZPACTR );
UXPACTR = BZPACTR;
} 
} 
} 
else
{ 
 /* line 241: */
UXPACTR = DZPACTR;
} 
} 
} 
break;
case 4: /* STRUCT(INT)  */
EZPACTR_i = (SXPACTR.data.mode4);
 /* line 242: */
 /* line 243: */
{ 
FZPACTR_bracketsrequired = A68_FALSE;
 /* line 244: */
GZPACTR_nonlocal = DTPACTR_hasattribute(Value, CJJACTR_nonloc);
 /* line 246: */
HZPACTR_id = EZPACTR_i.Idno;
 /* line 247: */
 /* line 248: */
 /* line 239: */
JZPACTR = (HZPACTR_id<=IAAACTR_maxidno);
if ( ! JZPACTR )
{KZPACTR = (HZPACTR_id>=LAAACTR_minlibid);
if ( KZPACTR )
{KZPACTR = (HZPACTR_id<=MAAACTR_maxlibid);
}
JZPACTR = KZPACTR;
}
PXIACTR_assert(LZPACTR, JZPACTR);
 /* line 249: */
MZPACTR_idinfo = HPKACTR_get_idinfo(HZPACTR_id);
 /* line 250: */
NZPACTR = (*(&(MZPACTR_idinfo->Flags))) ;
OZPACTR_isgproc = A_LB_GE(NZPACTR,SOKACTR_idgprocflag);
 /* line 251: */
 /* line 252: */
 /* line 253: */
 /* line 254: */
if ( OZPACTR_isgproc )
{ 
PXIACTR_assert(QZPACTR, !GZPACTR_nonlocal);
 /* line 255: */
 /* line 256: */
 /* line 262: */
DSKACTR_idfullname( HZPACTR_id, &SZPACTR );
TWPACTR_makeprocvalue( SZPACTR, (*(&(MZPACTR_idinfo->Mode))), &TZPACTR );
RZPACTR = TZPACTR;
} 
else
{ 
 /* line 263: */
if ( DTPACTR_hasattribute(Value, EJJACTR_lvalue) )
{ 
 /* line 264: */
 /* line 265: */
UZPACTR = KRMACTR_derefmode((*(&(Value->Mode))));
} 
else
{ 
UZPACTR = (*(&(Value->Mode)));
} 
VZPACTR_reqda68mode = UZPACTR;
 /* line 266: */
 /* line 267: */
 /* line 268: */
if ( GZPACTR_nonlocal )
{ 
 /* line 269: */
WZPACTR = CJNACTR_givecvariabletype((*(&(HPKACTR_get_idinfo(HZPACTR_id)->Mode))), A68_TRUE);
} 
else
{ 
 /* line 270: */
WZPACTR = (*(&(HPKACTR_get_idinfo(HZPACTR_id)->Cvariabletype)));
} 
XZPACTR_reqdcmode = WZPACTR;
 /* line 271: */
YZPACTR_diff = YVPACTR_idreflevel(VZPACTR_reqda68mode, XZPACTR_reqdcmode);
 /* line 272: */
FZPACTR_bracketsrequired = (YZPACTR_diff!=0);
 /* line 273: */
 /* line 274: */
 /* line 276: */
QVPACTR_refstring( YZPACTR_diff, &ZZPACTR );
RZPACTR = ZZPACTR;
} 
if ( GZPACTR_nonlocal )
{ 
 /* line 277: */
 /* line 278: */
DSKACTR_idfullname( EZPACTR_i.Idno, &BAQACTR );
GWPACTR_nlmacro( BAQACTR, &CAQACTR );
AAQACTR = CAQACTR;
} 
else
{ 
 /* line 279: */
if ( OZPACTR_isgproc )
{ 
AAQACTR = EAQACTR;
} 
else
{ 
 /* line 280: */
DSKACTR_idfullname( EZPACTR_i.Idno, &FAQACTR );
AAQACTR = FAQACTR;
} 
} 
GAQACTR_body = A_VC_PLUS(RZPACTR,AAQACTR);
 /* line 281: */
 /* line 282: */
if ( FZPACTR_bracketsrequired )
{ 
 /* line 283: */
 /* line 284: */
JIAACTR_bracket( GAQACTR_body, &HAQACTR );
UXPACTR = HAQACTR;
} 
else
{ 
 /* line 285: */
 /* line 287: */
UXPACTR = GAQACTR_body;
} 
} 
break;
case 7: /* STRUCT(INT)  */
IAQACTR_label = (SXPACTR.data.mode7);
 /* line 288: */
 /* line 289: */
{ 
JAQACTR_l = IAQACTR_label.Labno;
 /* line 290: */
 /* line 291: */
 /* line 292: */
ROAAOSF_whole( JAQACTR_l, 0, &MAQACTR );
PXIACTR_assert(A_VC_PLUS(LAQACTR,MAQACTR), WRKACTR_labelisdeclared(JAQACTR_l));
 /* line 293: */
 /* line 294: */
ASKACTR_labelenviron( JAQACTR_l, &NAQACTR );
if ( (EQLACTR_currentlevel()==NAQACTR.Level) )
{ 
 /* line 295: */
FRKACTR_labelfullname( JAQACTR_l, &OAQACTR );
UXPACTR = OAQACTR;
} 
else
{ 
 /* line 296: */
if ( DTPACTR_hasattribute(Value, CJJACTR_nonloc) )
{ 
 /* line 297: */
MRKACTR_labelbuffername( JAQACTR_l, &PAQACTR );
GWPACTR_nlmacro( PAQACTR, &QAQACTR );
UXPACTR = QAQACTR;
} 
else
{ 
 /* line 298: */
 /* line 299: */
 /* line 300: */
 /* line 302: */
 /* line 303: */
MRKACTR_labelbuffername( JAQACTR_l, &RAQACTR );
UXPACTR = RAQACTR;
} 
} 
} 
break;
default: 
PXIACTR_assert(TAQACTR, A68_FALSE);
 /* line 304: */
 /* line 305: */
UXPACTR = UAQACTR;
break;
} 
} 
A_PROC_EXIT(getcfragment);
*ReturnedValue = (UXPACTR);
return;
} 
#undef NL

A68_VOID  WAQACTR_bracketcfragment(A68_107 * Value, A68_VC  *ReturnedValue)
{ 
A68_VC  XAQACTR;  /* clause result */
A68_VC  YAQACTR;  /* avoid structure result */
A68_VC  ZAQACTR;  /* avoid structure result */
A68_VC  ABQACTR;  /* avoid structure result */
A_PROC_ENTRY(bracketcfragment);
 /* line 308: */
 /* line 309: */
{ 
 /* line 310: */
 /* line 311: */
if ( IUPACTR_isatomic(Value) )
{ 
PWPACTR_getcfragment( Value, &YAQACTR );
XAQACTR = YAQACTR;
} 
else
{ 
 /* line 312: */
 /* line 313: */
PWPACTR_getcfragment( Value, &ZAQACTR );
JIAACTR_bracket( ZAQACTR, &ABQACTR );
XAQACTR = ABQACTR;
} 
} 
A_PROC_EXIT(bracketcfragment);
*ReturnedValue = (XAQACTR);
return;
} 
#undef NL

A68_107 * DBQACTR_indexvaluelist(A68_114 * List, A68_INT  Index)
{ 
A68_114 * EBQACTR_position;
A68_INT  FBQACTR;  /* to part of loop */
A68_INT  GBQACTR;  /* loop control */
A68_107 * HBQACTR;  /* clause result */
A_PROC_ENTRY(indexvaluelist);
 /* line 321: */
 /* line 322: */
{ 
EBQACTR_position = List;
 /* line 323: */
FBQACTR = (Index-1);
for ( GBQACTR = 1;
GBQACTR <= FBQACTR;
GBQACTR += 1 )
{ 
EBQACTR_position = (*(&(EBQACTR_position->Rest)));
}
 /* line 324: */
 /* line 325: */
HBQACTR = (&(EBQACTR_position->Value));
} 
A_PROC_EXIT(indexvaluelist);
return( HBQACTR );
} 
#undef NL

A68_114 * JBQACTR_reversevaluelist(A68_114 * List)
{ 
A68_114 * KBQACTR_last;
A68_114 * LBQACTR_this;
A68_114 * MBQACTR_next;
A68_114 ** NBQACTR;  /* YIELD */
A68_114 * OBQACTR;  /* clause result */
A_PROC_ENTRY(reversevaluelist);
 /* line 331: */
 /* line 332: */
{ 
KBQACTR_last = (A68_114 *)A68_NIL;
LBQACTR_this = List;
 /* line 333: */
for ( ;; )
{ 
 /* line 334: */
 /* line 335: */
if ( !((LBQACTR_this!=VIJACTR_nilvaluelist)) ) break;
MBQACTR_next = (*(&(LBQACTR_this->Rest)));
 /* line 336: */
NBQACTR = (&(LBQACTR_this->Rest)) ;
(*NBQACTR) = KBQACTR_last;
 /* line 337: */
KBQACTR_last = LBQACTR_this;
 /* line 338: */
 /* line 339: */
LBQACTR_this = MBQACTR_next;
}
 /* line 340: */
 /* line 341: */
OBQACTR = KBQACTR_last;
} 
A_PROC_EXIT(reversevaluelist);
return( OBQACTR );
} 
#undef NL

A68_INT  QBQACTR_operandsof(A68_113  Treeoper)
{ 
A68_INT  RBQACTR;  /* clause result */
A68_BITS  SBQACTR;  /* SHR */
A_PROC_ENTRY(operandsof);
 /* line 349: */
SBQACTR = (A68_BITS )Treeoper.Param ;
RBQACTR = (A68_INT )A_SHR(SBQACTR,WGAACTR_operandsshift);
A_PROC_EXIT(operandsof);
return( RBQACTR );
} 
#undef NL

A68_INT  UBQACTR_paramof(A68_113  Treeoper)
{ 
A68_INT  VBQACTR;  /* clause result */
A_PROC_ENTRY(paramof);
 /* line 356: */
VBQACTR = (A68_INT )(A68_BITS )((A68_BITS )Treeoper.Param&ZGAACTR_parammask);
A_PROC_EXIT(paramof);
return( VBQACTR );
} 
#undef NL

A68_107 * YBQACTR_operand(A68_107 * Oper, A68_INT  Rand)
{ 
A68_108  ZBQACTR;  /* united object - for case conformity */
A68_113  ACQACTR_rator;
A68_INT  BCQACTR_totalrands;
A68_107 * CCQACTR;  /* clause result */
A68_107 * FCQACTR;  /* OPERATORS - skip to mode */
A_PROC_ENTRY(operand);
 /* line 360: */
 /* line 361: */
ZBQACTR = (*(&(Oper->Extra))) ;
switch ( ZBQACTR.mode )
{ 
case 9: /* STRUCT(INT,INT,REF MODE114)  */
ACQACTR_rator = (ZBQACTR.data.mode9);
 /* line 362: */
 /* line 363: */
{ 
BCQACTR_totalrands = QBQACTR_operandsof(ACQACTR_rator);
 /* line 364: */
 /* line 365: */
 /* line 366: */
CCQACTR = DBQACTR_indexvaluelist(ACQACTR_rator.Operands, ((BCQACTR_totalrands+1)-Rand));
} 
break;
default: 
PXIACTR_assert(ECQACTR, A68_FALSE);
 /* line 367: */
CCQACTR = FCQACTR;
break;
} 
A_PROC_EXIT(operand);
return( CCQACTR );
} 
#undef NL

A68_VOID  HCQACTR_derefvalue(A68_107 * Value)
{ 
A68_INT * KCQACTR;  /* YIELD */
A_PROC_ENTRY(derefvalue);
 /* line 370: */
 /* line 372: */
{ 
PXIACTR_assert(JCQACTR, ((*(&(Value->Mode)))>VFAACTR_refmark));
 /* line 373: */
 /* line 374: */
KCQACTR = (&(Value->Mode)) ;
(*KCQACTR)-=VFAACTR_refmark;
} 
A_PROC_EXIT(derefvalue);
return;
} 
#undef NL

A68_VOID  MCQACTR_enrefvalue(A68_107 * Value)
{ 
A68_INT * NCQACTR;  /* YIELD */
A_PROC_ENTRY(enrefvalue);
 /* line 377: */
 /* line 378: */
 /* line 379: */
NCQACTR = (&(Value->Mode)) ;
(*NCQACTR)+=VFAACTR_refmark;
A_PROC_EXIT(enrefvalue);
return;
} 
#undef NL

A_STATIC A68_VOID  PCQACTR_fnname(A68_INT  Fn, A68_VC  *ReturnedValue)
{ 
A68_VC  SCQACTR_spare;
A68_INT  TCQACTR;  /* clause result */
A68_VC  VCQACTR;  /* clause result */
A68_VC  CGQACTR;  /* avoid structure result */
A_PROC_ENTRY(fnname);
 /* line 382: */
 /* line 383: */
{ 
SCQACTR_spare = RCQACTR;
 /* line 384: */
 /* line 385: */
 /* line 386: */
TCQACTR = Fn;
switch ( TCQACTR )
{ 
case 1: 
 /* line 387: */
VCQACTR = WCQACTR;
break;
case 2: 
 /* line 388: */
VCQACTR = YCQACTR;
break;
case 3: 
 /* line 389: */
VCQACTR = ADQACTR;
break;
case 4: 
 /* line 390: */
VCQACTR = CDQACTR;
break;
case 5: 
 /* line 391: */
VCQACTR = EDQACTR;
break;
case 6: 
 /* line 392: */
VCQACTR = GDQACTR;
break;
case 7: 
 /* line 393: */
VCQACTR = IDQACTR;
break;
case 8: 
 /* line 394: */
VCQACTR = KDQACTR;
break;
case 9: 
 /* line 395: */
VCQACTR = MDQACTR;
break;
case 10: 
 /* line 396: */
VCQACTR = ODQACTR;
break;
case 11: 
 /* line 397: */
VCQACTR = QDQACTR;
break;
case 12: 
 /* line 398: */
VCQACTR = SDQACTR;
break;
case 13: 
 /* line 399: */
VCQACTR = UDQACTR;
break;
case 14: 
 /* line 400: */
VCQACTR = WDQACTR;
break;
case 15: 
 /* line 401: */
VCQACTR = YDQACTR;
break;
case 16: 
 /* line 402: */
VCQACTR = AEQACTR;
break;
case 17: 
 /* line 403: */
VCQACTR = CEQACTR;
break;
case 18: 
 /* line 404: */
VCQACTR = EEQACTR;
break;
case 19: 
 /* line 405: */
VCQACTR = GEQACTR;
break;
case 20: 
 /* line 406: */
VCQACTR = IEQACTR;
break;
case 21: 
 /* line 407: */
VCQACTR = KEQACTR;
break;
case 22: 
 /* line 408: */
VCQACTR = MEQACTR;
break;
case 23: 
 /* line 409: */
VCQACTR = OEQACTR;
break;
case 24: 
 /* line 410: */
VCQACTR = QEQACTR;
break;
case 25: 
 /* line 411: */
VCQACTR = SEQACTR;
break;
case 26: 
 /* line 412: */
VCQACTR = UEQACTR;
break;
case 27: 
 /* line 413: */
VCQACTR = WEQACTR;
break;
case 28: 
 /* line 414: */
VCQACTR = YEQACTR;
break;
case 29: 
 /* line 415: */
VCQACTR = AFQACTR;
break;
case 30: 
 /* line 416: */
VCQACTR = CFQACTR;
break;
case 31: 
 /* line 417: */
VCQACTR = EFQACTR;
break;
case 32: 
 /* line 418: */
VCQACTR = GFQACTR;
break;
case 33: 
 /* line 419: */
VCQACTR = IFQACTR;
break;
case 34: 
 /* line 420: */
VCQACTR = KFQACTR;
break;
case 35: 
 /* line 421: */
VCQACTR = MFQACTR;
break;
case 36: 
 /* line 422: */
VCQACTR = OFQACTR;
break;
case 37: 
 /* line 423: */
VCQACTR = QFQACTR;
break;
case 38: 
 /* line 424: */
VCQACTR = SFQACTR;
break;
case 39: 
 /* line 425: */
VCQACTR = UFQACTR;
break;
case 40: 
 /* line 426: */
VCQACTR = WFQACTR;
break;
case 41: 
 /* line 427: */
VCQACTR = SCQACTR_spare;
break;
case 42: 
 /* line 428: */
VCQACTR = SCQACTR_spare;
break;
case 43: 
 /* line 429: */
VCQACTR = SCQACTR_spare;
break;
case 44: 
 /* line 430: */
VCQACTR = SCQACTR_spare;
break;
case 45: 
 /* line 431: */
VCQACTR = SCQACTR_spare;
break;
case 46: 
 /* line 432: */
VCQACTR = SCQACTR_spare;
break;
case 47: 
 /* line 433: */
VCQACTR = SCQACTR_spare;
break;
case 48: 
 /* line 434: */
VCQACTR = SCQACTR_spare;
break;
case 49: 
 /* line 436: */
VCQACTR = SCQACTR_spare;
break;
case 50: 
 /* line 438: */
VCQACTR = YFQACTR;
break;
case 51: 
VCQACTR = AGQACTR;
break;
default: 
 /* line 439: */
ROAAOSF_whole( Fn, 0, &CGQACTR );
VCQACTR = A_VC_PLUS(CGQACTR,DGQACTR);
break;
} 
} 
A_PROC_EXIT(fnname);
*ReturnedValue = (VCQACTR);
return;
} 
#undef NL

A68_VOID  GGQACTR_valuestring(A68_107 * Value, A68_BOOL  Brief, A68_VC  *ReturnedValue)
{ 
A68_VC  IGQACTR;  /* clause result */
union {  /* BIOP 99 */
A68_107   source;
A68_LINT   destination;
} KGQACTR; 
A68_LINT  LGQACTR;  /* OPERATORS - skip to mode */
A68_108  SGQACTR;  /* united object - for case conformity */
A68_VC  UGQACTR;  /* clause result */
A68_LBITS  WGQACTR_bb;
A68_VC  ZGQACTR;  /* avoid structure result */
A68_57  AHQACTR_l;
A68_VC  DHQACTR;  /* avoid structure result */
A68_110  EHQACTR_id;
A68_VC  HHQACTR;  /* avoid structure result */
A68_111  IHQACTR_tmp;
A68_VC  LHQACTR;  /* OPERATORS - istruct -> vector */
A68_56  MHQACTR;  /* OPERATORS - istruct -> vector */
A68_VC  NHQACTR_c;
A68_112  QHQACTR_s;
A68_109  ZHQACTR_r;
A68_VC  CIQACTR;  /* avoid structure result */
A68_VC  DIQACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  EIQACTR;  /* avoid structure result */
A68_VC  FIQACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_113  GIQACTR_o;
A68_VC  KIQACTR;  /* avoid structure result */
A68_VC  RIQACTR;  /* avoid structure result */
A68_BITS  TIQACTR;  /* SHR */
A68_VC  UIQACTR;  /* avoid structure result */
A68_VC  WIQACTR;  /* avoid structure result */
A68_VC  CJQACTR;  /* avoid structure result */
A_PROC_ENTRY(valuestring);
 /* line 444: */
 /* line 445: */
 /* line 446: */
if ( (Value==(A68_107 *)A68_NIL) )
{ 
IGQACTR = JGQACTR;
} 
else
{ 
 /* line 448: */
 /* line 449: */
KGQACTR.source = (*Value) ;
if ( ((KGQACTR.destination)==LGQACTR) )
{ 
IGQACTR = NGQACTR;
} 
else
{ 
 /* line 450: */
 /* line 451: */
if ( ITPACTR_(Value, ESPACTR_assignment(A_LOC(A68_107 ), MJJACTR_skipvalue)) )
{ 
IGQACTR = PGQACTR;
} 
else
{ 
 /* line 452: */
 /* line 453: */
 /* line 454: */
SGQACTR = (*(&(Value->Extra))) ;
switch ( SGQACTR.mode )
{ 
case 3: /* VOID */
 /* line 455: */
UGQACTR = VGQACTR;
break;
case 1: /* LONG BITS */
WGQACTR_bb = (SGQACTR.data.mode1);
 /* line 456: */
BQAAOSF_hex( WGQACTR_bb, 24, &ZGQACTR );
UGQACTR = A_VC_PLUS(YGQACTR,ZGQACTR);
break;
case 7: /* STRUCT(INT)  */
AHQACTR_l = (SGQACTR.data.mode7);
 /* line 457: */
DSKACTR_idfullname( (AHQACTR_l.Labno+OAAACTR_minlab), &DHQACTR );
UGQACTR = A_VC_PLUS(CHQACTR,DHQACTR);
break;
case 4: /* STRUCT(INT)  */
EHQACTR_id = (SGQACTR.data.mode4);
 /* line 458: */
DSKACTR_idfullname( EHQACTR_id.Idno, &HHQACTR );
UGQACTR = A_VC_PLUS(GHQACTR,HHQACTR);
break;
case 5: /* STRUCT(MODE56,INT)  */
IHQACTR_tmp = (SGQACTR.data.mode5);
 /* line 459: */
MHQACTR = IHQACTR_tmp.Name ;
UGQACTR = A_VC_PLUS(KHQACTR,A_HISVEC(LHQACTR,MHQACTR,7,A68_CHAR ));
break;
case 6: /* VECTOR [] CHAR */
NHQACTR_c = (SGQACTR.data.mode6);
 /* line 460: */
UGQACTR = A_VC_PLUS(PHQACTR,NHQACTR_c);
break;
case 8: /* STRUCT(INT)  */
QHQACTR_s = (SGQACTR.data.mode8);
 /* line 461: */
 /* line 462: */
switch ( QHQACTR_s.Nse )
{ 
case 1: 
UGQACTR = SHQACTR;
break;
case 2: 
 /* line 463: */
UGQACTR = UHQACTR;
break;
case 3: 
 /* line 464: */
UGQACTR = WHQACTR;
break;
default: 
 /* line 465: */
UGQACTR = YHQACTR;
break;
} 
break;
case 2: /* STRUCT(INT)  */
ZHQACTR_r = (SGQACTR.data.mode2);
 /* line 466: */
 /* line 467: */
 /* line 468: */
DSKACTR_idfullname( ZHQACTR_r.Rdenno, &CIQACTR );
ROAAOSF_whole( ZHQACTR_r.Rdenno, 0, &EIQACTR );
UGQACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(BIQACTR,CIQACTR),A_HVEC(DIQACTR,'(',A68_CHAR )),EIQACTR),A_HVEC(FIQACTR,')',A68_CHAR ));
break;
case 9: /* STRUCT(INT,INT,REF MODE114)  */
GIQACTR_o = (SGQACTR.data.mode9);
 /* line 469: */
 /* line 470: */
if ( Brief )
{ 
 /* line 471: */
PCQACTR_fnname( GIQACTR_o.Fn, &KIQACTR );
UGQACTR = A_VC_PLUS(A_VC_PLUS(JIQACTR,KIQACTR),LIQACTR);
} 
else
{ 
 /* line 472: */
 /* line 473: */
 /* line 474: */
 /* line 475: */
 /* line 477: */
 /* line 478: */
 /* line 479: */
PCQACTR_fnname( GIQACTR_o.Fn, &RIQACTR );
TIQACTR = (A68_BITS )GIQACTR_o.Param ;
ROAAOSF_whole( (A68_INT )A_SHR(TIQACTR,WGAACTR_operandsshift), 0, &UIQACTR );
ROAAOSF_whole( (A68_INT )(A68_BITS )((A68_BITS )GIQACTR_o.Param&ZGAACTR_parammask), 0, &WIQACTR );
UGQACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(QIQACTR,RIQACTR),SIQACTR),UIQACTR),VIQACTR),WIQACTR),XIQACTR);
} 
break;
default: 
 /* line 480: */
UGQACTR = ZIQACTR;
break;
} 
 /* line 481: */
FBNACTR_modename( (*(&(Value->Mode))), &CJQACTR );
IGQACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(BJQACTR,CJQACTR),DJQACTR),UGQACTR),EJQACTR);
} 
} 
} 
A_PROC_EXIT(valuestring);
*ReturnedValue = (IGQACTR);
return;
} 
#undef NL

A68_VOID  GJQACTR_uvaluetocfragment(A68_196  U, A68_VC  *ReturnedValue)
{ 
A68_196  HJQACTR;  /* united object - for case conformity */
A68_107 * IJQACTR_rv;
A68_VC  JJQACTR;  /* clause result */
A68_VC  KJQACTR;  /* avoid structure result */
A68_VC  LJQACTR_c;
A68_111  MJQACTR_t;
A68_VC  NJQACTR;  /* OPERATORS - istruct -> vector */
A68_56  OJQACTR;  /* OPERATORS - istruct -> vector */
A68_VC  RJQACTR;  /* OPERATORS - skip to mode */
A_PROC_ENTRY(uvaluetocfragment);
 /* line 492: */
 /* line 493: */
HJQACTR = U ;
switch ( HJQACTR.mode )
{ 
case 1: /* REF STRUCT(INT,BITS,MODE108)  */
IJQACTR_rv = (HJQACTR.data.mode1);
 /* line 494: */
PWPACTR_getcfragment( IJQACTR_rv, &KJQACTR );
JJQACTR = KJQACTR;
break;
case 2: /* VECTOR [] CHAR */
LJQACTR_c = (HJQACTR.data.mode2);
 /* line 495: */
JJQACTR = LJQACTR_c;
break;
case 3: /* STRUCT(MODE56,INT)  */
MJQACTR_t = (HJQACTR.data.mode3);
 /* line 496: */
 /* line 497: */
OJQACTR = MJQACTR_t.Name ;
JJQACTR = A_HISVEC(NJQACTR,OJQACTR,7,A68_CHAR );
break;
default: 
PXIACTR_assert(QJQACTR, A68_FALSE);
 /* line 498: */
JJQACTR = RJQACTR;
break;
} 
A_PROC_EXIT(uvaluetocfragment);
*ReturnedValue = (JJQACTR);
return;
} 
#undef NL

A68_VOID  TJQACTR_joinuvalue(A68_199  Items, A68_VC  *ReturnedValue)
{ 
A68_54  XJQACTR_generator;   /* proc value of non-global proc */
A68_153  DKQACTR;  /* avoid structure result */
A68_153  CKQACTR_result;
A68_196  EKQACTR_i;
A68_196 * FKQACTR;  /* forall control - []x */
A68_INT  GKQACTR;  /* forall loop counter */
A68_VC  HKQACTR;  /* avoid structure result */
A68_VC  IKQACTR;  /* clause result */
A_PROC_ENTRY(joinuvalue);
 /* line 501: */
 /* line 502: */
{ 
PXIACTR_assert(VJQACTR, (Items.upb>=1));
 /* line 503: */
A_CLOSURE( XJQACTR_generator, YJQACTR_generator, ZJQACTR_generator );
A_CALLPROC(XJQACTR_generator,(A68_TRUE, &DKQACTR),(A68_TRUE, &DKQACTR,(XJQACTR_generator).nonlocals));
CKQACTR_result = DKQACTR;
 /* line 504: */
 /* line 505: */
GKQACTR = Items.upb -1;
FKQACTR = Items.data;
for (;GKQACTR-- >= 0;
(FKQACTR++
) )
{
EKQACTR_i = *FKQACTR;
 /* line 506: */
GJQACTR_uvaluetocfragment( EKQACTR_i, &HKQACTR );
A_VC_PLUSAB(CKQACTR_result,HKQACTR);
}
 /* line 507: */
 /* line 508: */
IKQACTR = CKQACTR_result;
} 
A_PROC_EXIT(joinuvalue);
*ReturnedValue = (IKQACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  KKQACTR_commaseparate(A68_199  Items, A68_VC  *ReturnedValue)
{ 
A68_54  OKQACTR_generator;   /* proc value of non-global proc */
A68_153  UKQACTR;  /* avoid structure result */
A68_153  TKQACTR_result;
A68_INT  VKQACTR;  /* YIELD */
A68_VC  WKQACTR;  /* avoid structure result */
A68_VC  XKQACTR;  /* OPERATORS - copy to flex */
A68_196  YKQACTR_i;
A68_199  ZKQACTR;  /* OPERATORS - trim index */
A68_199  ALQACTR;  /* forall yield */
A68_196 * BLQACTR;  /* forall control - []x */
A68_INT  CLQACTR;  /* forall loop counter */
A68_VC  DLQACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  ELQACTR;  /* avoid structure result */
A68_VC  FLQACTR;  /* clause result */
A_PROC_ENTRY(commaseparate);
 /* line 511: */
 /* line 512: */
{ 
PXIACTR_assert(MKQACTR, (Items.upb>=1));
 /* line 519: */
A_CLOSURE( OKQACTR_generator, PKQACTR_generator, QKQACTR_generator );
A_CALLPROC(OKQACTR_generator,(A68_TRUE, &UKQACTR),(A68_TRUE, &UKQACTR,(OKQACTR_generator).nonlocals));
TKQACTR_result = UKQACTR;
 /* line 520: */
VKQACTR = 1 ;
GJQACTR_uvaluetocfragment( A_VINDEX(Items,VKQACTR), &WKQACTR );
TKQACTR_result = A_VCOPY(WKQACTR,XKQACTR,A68_CHAR );
 /* line 521: */
 /* line 522: */
if ( (Items.upb>1) )
{ 
 /* line 523: */
ALQACTR = A_VTRIM(ZKQACTR,(Items),A_VTSCRIPT(&(ZKQACTR.upb),(Items).upb,2,(Items).upb)) ;
CLQACTR = ALQACTR.upb -1;
BLQACTR = ALQACTR.data;
for (;CLQACTR-- >= 0;
(BLQACTR++
) )
{
YKQACTR_i = *BLQACTR;
 /* line 524: */
GJQACTR_uvaluetocfragment( YKQACTR_i, &ELQACTR );
A_VC_PLUSAB(TKQACTR_result,A_VC_PLUS(A_HVEC(DLQACTR,',',A68_CHAR ),ELQACTR));
}
 /* line 525: */
} 
 /* line 526: */
 /* line 527: */
FLQACTR = TKQACTR_result;
} 
A_PROC_EXIT(commaseparate);
*ReturnedValue = (FLQACTR);
return;
} 
#undef NL

A68_VOID  HLQACTR_commalist(A68_199  Items, A68_VC  *ReturnedValue)
{ 
A68_VC  ILQACTR;  /* clause result */
A68_VC  JLQACTR;  /* avoid structure result */
A68_VC  KLQACTR;  /* avoid structure result */
A_PROC_ENTRY(commalist);
 /* line 530: */
KKQACTR_commaseparate( Items, &JLQACTR );
JIAACTR_bracket( JLQACTR, &KLQACTR );
ILQACTR = KLQACTR;
A_PROC_EXIT(commalist);
*ReturnedValue = (ILQACTR);
return;
} 
#undef NL

A68_VOID  NLQACTR_usemacro(A68_VC  Macro, A68_199  Arguments, A68_VC  *ReturnedValue)
{ 
A68_VC  OLQACTR;  /* clause result */
A68_VC  PLQACTR;  /* avoid structure result */
A68_VC  QLQACTR;  /* avoid structure result */
A_PROC_ENTRY(usemacro);
 /* line 533: */
KKQACTR_commaseparate( Arguments, &PLQACTR );
JIAACTR_bracket( PLQACTR, &QLQACTR );
OLQACTR = A_VC_PLUS(Macro,QLQACTR);
A_PROC_EXIT(usemacro);
*ReturnedValue = (OLQACTR);
return;
} 
#undef NL

A68_VOID  SLQACTR_emitline(A68_199  Uv)
{ 
A68_205  TLQACTR;  /* collateral clause result */
A68_VC  ULQACTR;  /* avoid structure result */
A68_92  VLQACTR;  /* OPERATORS - mode -> union mode */
A68_92  WLQACTR;  /* OPERATORS - mode -> union mode */
A68_91  XLQACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(emitline);
 /* line 538: */
TJQACTR_joinuvalue( Uv, &ULQACTR );
TLQACTR.data[0] = A_UNITE(VLQACTR,mode2,2,ULQACTR);
TLQACTR.data[1] = A_UNITE(WLQACTR,mode4,4,EIAACTR_cnewline);
 /* line 540: */
VBMACTR_writecstream(A_HISVEC(XLQACTR,TLQACTR,2,A68_92 ), WQLACTR_codestream(EQLACTR_currentlevel()));
A_PROC_EXIT(emitline);
return;
} 
#undef NL
 /* line 544: */
 /* line 546: */

A68_VOID  BMQACTR_yieldtemporary(A68_VC  Comment, A68_INT  Mode, A68_199  Op, A68_111  *ReturnedValue)
{ 
A68_111  CMQACTR;  /* avoid structure result */
A68_111  DMQACTR_t;
A68_207  EMQACTR;  /* collateral clause result */
A68_196  FMQACTR;  /* OPERATORS - mode -> union mode */
A68_196  IMQACTR;  /* OPERATORS - mode -> union mode */
A68_VC  JMQACTR;  /* YIELD */
A68_VC  KMQACTR;  /* avoid structure result */
A68_196  LMQACTR;  /* OPERATORS - mode -> union mode */
A68_196  OMQACTR;  /* OPERATORS - mode -> union mode */
A68_VC  PMQACTR;  /* YIELD */
A68_199  QMQACTR;  /* OPERATORS - istruct -> vector */
A68_111  RMQACTR;  /* clause result */
A_PROC_ENTRY(yieldtemporary);
 /* line 547: */
 /* line 548: */
{ 
A_CALLPROC(TJOACTR_new,(Mode, Comment, &CMQACTR),(Mode, Comment, &CMQACTR,(TJOACTR_new).nonlocals));
DMQACTR_t = CMQACTR;
 /* line 549: */
EMQACTR.data[0] = A_UNITE(FMQACTR,mode3,3,DMQACTR_t);
JMQACTR = HMQACTR ;
EMQACTR.data[1] = A_UNITE(IMQACTR,mode2,2,JMQACTR);
TJQACTR_joinuvalue( Op, &KMQACTR );
EMQACTR.data[2] = A_UNITE(LMQACTR,mode2,2,KMQACTR);
PMQACTR = NMQACTR ;
EMQACTR.data[3] = A_UNITE(OMQACTR,mode2,2,PMQACTR);
SLQACTR_emitline(A_HISVEC(QMQACTR,EMQACTR,4,A68_196 ));
 /* line 550: */
 /* line 551: */
RMQACTR = DMQACTR_t;
} 
A_PROC_EXIT(yieldtemporary);
*ReturnedValue = (RMQACTR);
return;
} 
#undef NL

A68_107 * TMQACTR_yield(A68_107 * Op)
{ 
A68_196  VMQACTR;  /* OPERATORS - mode -> union mode */
A68_199  WMQACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_111  YMQACTR;  /* avoid structure result */
A68_108  ZMQACTR;  /* OPERATORS - mode -> union mode */
A68_BITS * ANQACTR;  /* YIELD */
A68_107 * BNQACTR;  /* clause result */
A_PROC_ENTRY(yield);
 /* line 554: */
{ 
 /* line 555: */
if ( !EVPACTR_isaname(Op) )
{ 
BMQACTR_yieldtemporary( XMQACTR, (*(&(Op->Mode))), A_HVEC(WMQACTR,A_UNITE(VMQACTR,mode1,1,Op),A68_196 ), &YMQACTR );
JSPACTR_assignment((&(Op->Extra)), A_UNITE(ZMQACTR,mode5,5,YMQACTR));
 /* line 556: */
 /* line 557: */
ANQACTR = (&(Op->Info)) ;
(*ANQACTR) = (A68_BITS )((A68_BITS )((*(&(Op->Info)))&GJJACTR_fxwarn)|AJJACTR_atomic);
} 
 /* line 558: */
 /* line 559: */
BNQACTR = Op;
} 
A_PROC_EXIT(yield);
return( BNQACTR );
} 
#undef NL

A68_107 * ENQACTR_yield(A68_VC  Comment, A68_107 * Op)
{ 
A68_196  FNQACTR;  /* OPERATORS - mode -> union mode */
A68_199  GNQACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_111  HNQACTR;  /* avoid structure result */
A68_108  INQACTR;  /* OPERATORS - mode -> union mode */
A68_BITS * JNQACTR;  /* YIELD */
A68_107 * KNQACTR;  /* clause result */
A_PROC_ENTRY(yield);
 /* line 562: */
{ 
 /* line 563: */
if ( !EVPACTR_isaname(Op) )
{ 
BMQACTR_yieldtemporary( Comment, (*(&(Op->Mode))), A_HVEC(GNQACTR,A_UNITE(FNQACTR,mode1,1,Op),A68_196 ), &HNQACTR );
JSPACTR_assignment((&(Op->Extra)), A_UNITE(INQACTR,mode5,5,HNQACTR));
 /* line 564: */
 /* line 565: */
JNQACTR = (&(Op->Info)) ;
(*JNQACTR) = (A68_BITS )((A68_BITS )((*(&(Op->Info)))&GJJACTR_fxwarn)|AJJACTR_atomic);
} 
 /* line 566: */
 /* line 567: */
KNQACTR = Op;
} 
A_PROC_EXIT(yield);
return( KNQACTR );
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 3: */
 /* line 4: */
 /* line 5: */
 /* line 6: */
 /* line 7: */
 /* line 9: */
void JRPACTR(void)   /* initialise DECS values */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/shields/projects/Algol68/Tools/Algol68toC/src/a68toc","-v","-uname","seedfile","-lib","/home/shields/projects/Algol68/Tools/Algol68toC/a68config","-dir","/home/shields/projects/Algol68/Tools/Algol68toC/a68config","-dir","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel","-dir",".","values.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/shields/projects/Algol68/Tools/Algol68toC/a68config","A68_CDIR=","A68_DIR=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/shields/projects/Algol68/Tools/Algol68toC/a68config/a68config.m","./modes.m","./incvalue.m","./incid.m","./incoperfn.m","./incmode.m","./idtable.m","./coutput.m","./environment.m","./environ.m","./centities.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/usefulops.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
MLMACTR();   /* USE modes */
PIJACTR();   /* USE incvalue */
BAAACTR();   /* USE incid */
XFAACTR();   /* USE incoperfn */
ZDAACTR();   /* USE incmode */
YNKACTR();   /* USE idtable */
YRLACTR();   /* USE coutput */
HPIACTR();   /* USE environment */
KNLACTR();   /* USE environ */
THAACTR();   /* USE centities */
IKAAOSF();   /* USE usefulops */
/* --- Initialise configuration information */
A_config.source_file = "/home/shields/projects/Algol68/Tools/Algol68toC/src/values.a68";
A_config.translation_time = "Sun Sep 26 21:51:01 2004";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "IRPACTR (from seed file) ";
A_config.spec_change_time = "Sun Sep 26 21:51:01 2004";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS values);
UEAALIB_a68config(LGAALIB_configinfo, NRPACTR);
 /* line 48: */
 /* line 77: */
 /* line 79: */
 /* line 89: */
 /* line 99: */
 /* line 103: */
 /* line 105: */
 /* line 108: */
 /* line 111: */
 /* line 114: */
 /* line 126: */
 /* line 129: */
 /* line 132: */
 /* line 135: */
 /* line 138: */
 /* line 145: */
 /* line 155: */
 /* line 166: */
 /* line 184: */
 /* line 186: */
 /* line 307: */
 /* line 317: */
 /* line 327: */
 /* line 345: */
 /* line 352: */
 /* line 358: */
 /* line 359: */
 /* line 369: */
 /* line 376: */
 /* line 381: */
 /* line 441: */
 /* line 443: */
 /* line 489: */
 /* line 491: */
 /* line 500: */
 /* line 510: */
 /* line 529: */
 /* line 532: */
 /* line 535: */
 /* line 542: */
 /* line 543: */
 /* line 553: */
 /* line 561: */
 /* line 569: */
 /* line 571: */
 /* line 607: */
/*SKIP*/;
A_PROC_EXIT(DECS values);
} 
#undef NL
/* end of translation of values.a68 */
