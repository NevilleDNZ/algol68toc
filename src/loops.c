/* UNAME:JAABCTR */
#include <algol68/Asupport.h>

A_PROCEDURE(A68_VOID ,A68t31,(A68_BOOL ,A68_VC *),(A68_BOOL ,A68_VC *,void *));
typedef struct A68t31  A68_31 ;    /* PROC(BOOL) MODE26 */
A_ISTRUCT(A68_CHAR ,7,A68t33);
typedef struct A68t33  A68_33 ;    /* STRUCT 7 CHAR */
struct A68t32{
struct A68t33  Name;
A_PAD_ISTRUCT(A68_33 ,PAD_1)
A68_BOOL  Set;
A_PAD_BOOL(PAD_2)
};
typedef struct A68t32  A68_32 ;    /* STRUCT(MODE33,BOOL)  */
struct A68t34{
A68_INT  Labno;
A_PAD_INT(PAD_3)
};
typedef struct A68t34  A68_34 ;    /* STRUCT(INT)  */

A_PROCEDURE(A68_VOID ,A68t35,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t35  A68_35 ;    /* PROC(MODE26) MODE26 */

A_PROCEDURE(A68_INT *,A68t36,(A68_INT *,A68_VC ),(A68_INT *,A68_VC ,void *));
typedef struct A68t36  A68_36 ;    /* PROC(REF INT,MODE26) REF INT */

A_PROCEDURE(A68_VOID ,A68t37,(A68_VC ,A68_INT ,A68_VC *),(A68_VC ,A68_INT ,A68_VC *,void *));
typedef struct A68t37  A68_37 ;    /* PROC(REF MODE26,INT) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t38,(A68_VC ,A68_CHAR ,A68_VC *),(A68_VC ,A68_CHAR ,A68_VC *,void *));
typedef struct A68t38  A68_38 ;    /* PROC(REF MODE26,CHAR) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t39,(A68_VC ,A68_CHAR ,A68_VC *),(A68_VC ,A68_CHAR ,A68_VC *,void *));
typedef struct A68t39  A68_39 ;    /* PROC(MODE26,CHAR) MODE26 */
struct A68t41 ;

A_PROCEDURE(A68_VOID ,A68t40,(struct A68t41 ,A68_VC *),(struct A68t41 ,A68_VC *,void *));
typedef struct A68t40  A68_40 ;    /* PROC(MODE41) REF MODE26 */
A_VECTOR(A68_VC ,A68t41);
typedef struct A68t41  A68_41 ;    /* VECTOR [] MODE26 */

A_PROCEDURE(A68_INT ,A68t42,(A68_CHAR ,A68_VC ),(A68_CHAR ,A68_VC ,void *));
typedef struct A68t42  A68_42 ;    /* PROC(CHAR,MODE26) INT */

A_PROCEDURE(A68_VOID ,A68t43,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t43  A68_43 ;    /* PROC(MODE26) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t44,(A68_VC ,A68_CHAR ),(A68_VC ,A68_CHAR ,void *));
typedef struct A68t44  A68_44 ;    /* PROC(REF MODE26,CHAR) VOID */
A_ISTRUCT(A68_CHAR ,4,A68t45);
typedef struct A68t45  A68_45 ;    /* STRUCT 4 CHAR */

A_PROCEDURE(struct A68t45 ,A68t46,(A68_INT ),(A68_INT ,void *));
typedef struct A68t46  A68_46 ;    /* PROC(INT) MODE45 */

A_PROCEDURE(A68_INT ,A68t47,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t47  A68_47 ;    /* PROC(INT,INT) INT */

A_PROCEDURE(A68_VOID ,A68t48,(A68_CHAR ,A68_VC ,A68_VC *),(A68_CHAR ,A68_VC ,A68_VC *,void *));
typedef struct A68t48  A68_48 ;    /* PROC(CHAR,REF MODE26) REF MODE26 */

A_PROCEDURE(A68_INT ,A68t49,(A68_VC ),(A68_VC ,void *));
typedef struct A68t49  A68_49 ;    /* PROC(MODE26) INT */

A_PROCEDURE(A68_BITS ,A68t50,(A68_BITS ,A68_BITS ),(A68_BITS ,A68_BITS ,void *));
typedef struct A68t50  A68_50 ;    /* PROC(BITS,BITS) BITS */

A_PROCEDURE(A68_LBITS ,A68t51,(A68_LBITS ,A68_LBITS ),(A68_LBITS ,A68_LBITS ,void *));
typedef struct A68t51  A68_51 ;    /* PROC(LONG BITS,LONG BITS) LONG BITS */

A_PROCEDURE(A68_BITS *,A68t52,(A68_BITS *,A68_BITS ),(A68_BITS *,A68_BITS ,void *));
typedef struct A68t52  A68_52 ;    /* PROC(REF BITS,BITS) REF BITS */

A_PROCEDURE(A68_VOID ,A68t53,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t53  A68_53 ;    /* PROC(INT) MODE26 */

A_PROCEDURE(A68_VOID ,A68t54,(A68_INT ,A68_INT ,A68_VC *),(A68_INT ,A68_INT ,A68_VC *,void *));
typedef struct A68t54  A68_54 ;    /* PROC(INT,INT) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t55,(A68_LINT ,A68_INT ,A68_VC *),(A68_LINT ,A68_INT ,A68_VC *,void *));
typedef struct A68t55  A68_55 ;    /* PROC(LONG INT,INT) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t56,(A68_CHAR ,A68_INT *,A68_VC ),(A68_CHAR ,A68_INT *,A68_VC ,void *));
typedef struct A68t56  A68_56 ;    /* PROC(CHAR,REF INT,MODE26) BOOL */

A_PROCEDURE(A68_VOID ,A68t57,(A68_LBITS ,A68_INT ,A68_VC *),(A68_LBITS ,A68_INT ,A68_VC *,void *));
typedef struct A68t57  A68_57 ;    /* PROC(LONG BITS,INT) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t58,(A68_INT *,A68_VC ),(A68_INT *,A68_VC ,void *));
typedef struct A68t58  A68_58 ;    /* PROC(REF INT,MODE26) BOOL */
struct A68t59{
A68_BOOL  Block;
A_PAD_BOOL(PAD_4)
A68_BOOL  Dynamicresult;
A_PAD_BOOL(PAD_5)
A68_BOOL  Discardeddynamicresult;
A_PAD_BOOL(PAD_6)
A68_INT  Type;
A_PAD_INT(PAD_7)
};
typedef struct A68t59  A68_59 ;    /* STRUCT(BOOL,BOOL,BOOL,INT)  */

A_PROCEDURE(A68_VOID ,A68t60,(struct A68t59 ,struct A68t32 **,A68_BOOL *),(struct A68t59 ,struct A68t32 **,A68_BOOL *,void *));
typedef struct A68t60  A68_60 ;    /* PROC(MODE59,REF REF MODE32,REF BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t61,(struct A68t59 ,struct A68t32 *,struct A68t32 *,A68_BOOL ,A68_BOOL ),(struct A68t59 ,struct A68t32 *,struct A68t32 *,A68_BOOL ,A68_BOOL ,void *));
typedef struct A68t61  A68_61 ;    /* PROC(MODE59,REF MODE32,REF MODE32,BOOL,BOOL) VOID */
struct A68t63 ;

A_PROCEDURE(A68_VOID ,A68t62,(A68_BOOL ,A68_BOOL ,struct A68t63 ),(A68_BOOL ,A68_BOOL ,struct A68t63 ,void *));
typedef struct A68t62  A68_62 ;    /* PROC(BOOL,BOOL,MODE63) VOID */
struct A68t63{
struct A68t64 * Value;
struct A68t32 * End;
A68_INT  Type;
A_PAD_INT(PAD_8)
};
typedef struct A68t63  A68_63 ;    /* STRUCT(REF MODE64,REF MODE32,INT)  */
struct A68t66{
A68_INT  Rdenno;
A_PAD_INT(PAD_9)
};
typedef struct A68t66  A68_66 ;    /* STRUCT(INT)  */
struct A68t67{
A68_INT  Idno;
A_PAD_INT(PAD_10)
};
typedef struct A68t67  A68_67 ;    /* STRUCT(INT)  */
struct A68t68{
struct A68t33  Name;
A_PAD_ISTRUCT(A68_33 ,PAD_11)
A68_INT  Mode;
A_PAD_INT(PAD_12)
};
typedef struct A68t68  A68_68 ;    /* STRUCT(MODE33,INT)  */
struct A68t69{
A68_INT  Nse;
A_PAD_INT(PAD_13)
};
typedef struct A68t69  A68_69 ;    /* STRUCT(INT)  */
struct A68t70{
A68_INT  Fn;
A_PAD_INT(PAD_14)
A68_INT  Param;
A_PAD_INT(PAD_15)
struct A68t71 * Operands;
};
typedef struct A68t70  A68_70 ;    /* STRUCT(INT,INT,REF MODE71)  */
struct A68t65 { A68_INT mode; union {
A68_LBITS  mode1;
struct A68t66  mode2;
struct A68t67  mode4;
struct A68t68  mode5;
A68_VC  mode6;
struct A68t34  mode7;
struct A68t69  mode8;
struct A68t70  mode9;
} data; };
typedef struct A68t65  A68_65 ;    /* UNION(LONG BITS,MODE66,VOID,MODE67,MODE68,MODE26,MODE34,MODE69,MODE70)  */
struct A68t64{
A68_INT  Mode;
A_PAD_INT(PAD_16)
A68_BITS  Info;
A_PAD_BITS(PAD_17)
struct A68t65  Extra;
};
typedef struct A68t64  A68_64 ;    /* STRUCT(INT,BITS,MODE65)  */
struct A68t71{
struct A68t64  Value;
struct A68t71 * Rest;
};
typedef struct A68t71  A68_71 ;    /* STRUCT(MODE64,REF MODE71)  */

A_PROCEDURE(A68_VOID ,A68t72,(A68_BOOL ,A68_BOOL ),(A68_BOOL ,A68_BOOL ,void *));
typedef struct A68t72  A68_72 ;    /* PROC(BOOL,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t73,(A68_BOOL ,A68_BOOL ,A68_BOOL ,struct A68t32 *),(A68_BOOL ,A68_BOOL ,A68_BOOL ,struct A68t32 *,void *));
typedef struct A68t73  A68_73 ;    /* PROC(BOOL,BOOL,BOOL,REF MODE32) VOID */

A_PROCEDURE(A68_VOID ,A68t74,(struct A68t64 *),(struct A68t64 *,void *));
typedef struct A68t74  A68_74 ;    /* PROC(REF MODE64) VOID */

A_PROCEDURE(A68_VOID ,A68t75,(void),(void *));
typedef struct A68t75  A68_75 ;    /* PROC VOID */

A_PROCEDURE(A68_VOID ,A68t76,(A68_BOOL ,struct A68t63 ),(A68_BOOL ,struct A68t63 ,void *));
typedef struct A68t76  A68_76 ;    /* PROC(BOOL,MODE63) VOID */

A_PROCEDURE(A68_VOID ,A68t77,(A68_INT ),(A68_INT ,void *));
typedef struct A68t77  A68_77 ;    /* PROC(INT) VOID */
struct A68t79 ;
struct A68t80 ;

A_PROCEDURE(A68_VOID ,A68t78,(struct A68t79 ,struct A68t64 *,struct A68t80 ),(struct A68t79 ,struct A68t64 *,struct A68t80 ,void *));
typedef struct A68t78  A68_78 ;    /* PROC(MODE79,REF MODE64,REF MODE80) VOID */
struct A68t79{
A68_INT  Mode;
A_PAD_INT(PAD_18)
A68_BITS  Props;
A_PAD_BITS(PAD_19)
A68_INT  Param;
A_PAD_INT(PAD_20)
};
typedef struct A68t79  A68_79 ;    /* STRUCT(INT,BITS,INT)  */
A_ROW(A68_BOOL ,A68t80,1);
typedef struct A68t80  A68_80 ;    /* [] BOOL */

A_PROCEDURE(A68_VOID ,A68t81,(struct A68t79 ,struct A68t64 ,struct A68t80 ),(struct A68t79 ,struct A68t64 ,struct A68t80 ,void *));
typedef struct A68t81  A68_81 ;    /* PROC(MODE79,MODE64,REF MODE80) VOID */

A_PROCEDURE(A68_VOID ,A68t82,(A68_BOOL ,struct A68t64 *),(A68_BOOL ,struct A68t64 *,void *));
typedef struct A68t82  A68_82 ;    /* PROC(BOOL,REF MODE64) VOID */

A_PROCEDURE(A68_VOID ,A68t83,(struct A68t59 ,struct A68t63 ,struct A68t32 *,A68_BOOL ,A68_BOOL ,A68_BOOL ),(struct A68t59 ,struct A68t63 ,struct A68t32 *,A68_BOOL ,A68_BOOL ,A68_BOOL ,void *));
typedef struct A68t83  A68_83 ;    /* PROC(MODE59,MODE63,REF MODE32,BOOL,BOOL,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t84,(struct A68t71 **,struct A68t63 ),(struct A68t71 **,struct A68t63 ,void *));
typedef struct A68t84  A68_84 ;    /* PROC(REF REF MODE71,MODE63) VOID */

A_PROCEDURE(A68_VOID ,A68t85,(struct A68t71 **),(struct A68t71 **,void *));
typedef struct A68t85  A68_85 ;    /* PROC(REF REF MODE71) VOID */

A_PROCEDURE(A68_VOID ,A68t86,(A68_VC ,A68_INT ,struct A68t71 *,struct A68t68 *),(A68_VC ,A68_INT ,struct A68t71 *,struct A68t68 *,void *));
typedef struct A68t86  A68_86 ;    /* PROC(MODE26,INT,REF MODE71) MODE68 */

A_PROCEDURE(A68_VOID ,A68t87,(A68_VC ),(A68_VC ,void *));
typedef struct A68t87  A68_87 ;    /* PROC(MODE26) VOID */
struct A68t89 ;

A_PROCEDURE(A68_VOID ,A68t88,(struct A68t89 ),(struct A68t89 ,void *));
typedef struct A68t88  A68_88 ;    /* PROC(MODE89) VOID */
A_VECTOR(struct A68t90 ,A68t89);
typedef struct A68t89  A68_89 ;    /* VECTOR [] MODE90 */
struct A68t90 { A68_INT mode; union {
A68_CHAR  mode1;
A68_VC  mode2;
A68_SINT  mode3;
} data; };
typedef struct A68t90  A68_90 ;    /* UNION(CHAR,MODE26,SHORT INT)  */
struct A68t92 ;

A_PROCEDURE(A68_VOID ,A68t91,(struct A68t92 ,A68_INT ),(struct A68t92 ,A68_INT ,void *));
typedef struct A68t91  A68_91 ;    /* PROC(MODE92,INT) VOID */
A_VECTOR(struct A68t93 ,A68t92);
typedef struct A68t92  A68_92 ;    /* VECTOR [] MODE93 */
struct A68t93 { A68_INT mode; union {
A68_CHAR  mode1;
A68_VC  mode2;
A68_INT  mode3;
A68_SINT  mode4;
} data; };
typedef struct A68t93  A68_93 ;    /* UNION(CHAR,MODE26,INT,SHORT INT)  */

A_PROCEDURE(A68_INT ,A68t94,(A68_INT ),(A68_INT ,void *));
typedef struct A68t94  A68_94 ;    /* PROC(INT) INT */

A_PROCEDURE(A68_BOOL ,A68t95,(A68_INT ),(A68_INT ,void *));
typedef struct A68t95  A68_95 ;    /* PROC(INT) BOOL */
struct A68t96{
A68_INT  Level;
A_PAD_INT(PAD_21)
A68_INT  Block;
A_PAD_INT(PAD_22)
};
typedef struct A68t96  A68_96 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t97,(struct A68t96 *),(struct A68t96 *,void *));
typedef struct A68t97  A68_97 ;    /* PROC MODE96 */

A_PROCEDURE(A68_INT ,A68t98,(void),(void *));
typedef struct A68t98  A68_98 ;    /* PROC INT */

A_PROCEDURE(A68_BOOL ,A68t99,(void),(void *));
typedef struct A68t99  A68_99 ;    /* PROC BOOL */

A_PROCEDURE(A68_BOOL ,A68t100,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t100  A68_100 ;    /* PROC(INT,INT) BOOL */

A_PROCEDURE(A68_VOID ,A68t101,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t101  A68_101 ;    /* PROC(INT,INT) VOID */

A_PROCEDURE(A68_BOOL ,A68t102,(struct A68t96 ,struct A68t96 ),(struct A68t96 ,struct A68t96 ,void *));
typedef struct A68t102  A68_102 ;    /* PROC(MODE96,MODE96) BOOL */

A_PROCEDURE(A68_BOOL ,A68t103,(struct A68t96 ),(struct A68t96 ,void *));
typedef struct A68t103  A68_103 ;    /* PROC(MODE96) BOOL */

A_PROCEDURE(A68_VOID ,A68t104,(A68_VC ,A68_BOOL ),(A68_VC ,A68_BOOL ,void *));
typedef struct A68t104  A68_104 ;    /* PROC(MODE26,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t105,(A68_VC ,A68_INT ),(A68_VC ,A68_INT ,void *));
typedef struct A68t105  A68_105 ;    /* PROC(MODE26,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t106,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t106  A68_106 ;    /* PROC(INT) REF MODE26 */
struct A68t108 ;

A_PROCEDURE(A68_VOID ,A68t107,(A68_INT ,struct A68t108 ),(A68_INT ,struct A68t108 ,void *));
typedef struct A68t107  A68_107 ;    /* PROC(INT,MODE108) VOID */
A_ROW(A68_VC ,A68t108,1);
typedef struct A68t108  A68_108 ;    /* [] MODE26 */

A_PROCEDURE(A68_BITS ,A68t109,(void),(void *));
typedef struct A68t109  A68_109 ;    /* PROC BITS */
struct A68t110{
A68_INT  Cfile;
A_PAD_INT(PAD_23)
};
typedef struct A68t110  A68_110 ;    /* STRUCT(INT)  */
struct A68t111{
A68_INT  Seedfile;
A_PAD_INT(PAD_24)
};
typedef struct A68t111  A68_111 ;    /* STRUCT(INT)  */
struct A68t112 { A68_INT mode; union {
struct A68t110  mode1;
struct A68t111  mode2;
struct A68t33  mode3;
} data; };
typedef struct A68t112  A68_112 ;    /* UNION(MODE110,MODE111,MODE33,VOID)  */
struct A68t113{
A68_VC  Version;
A68_LINT  Translationtime;
A_PAD_LINT(PAD_25)
A68_VC  Sourcefile;
struct A68t33  Nameseed;
A_PAD_ISTRUCT(A68_33 ,PAD_26)
struct A68t112  Nameseedorigin;
struct A68t114 * Used_modules;
A68_VC  Commandline;
struct A68t115 * Environment;
};
typedef struct A68t113  A68_113 ;    /* STRUCT(REF MODE26,LONG INT,REF MODE26,MODE33,MODE112,REF MODE114,REF MODE26,REF MODE115)  */
struct A68t114{
A68_VC  Modinfo_file;
struct A68t114 * Next;
};
typedef struct A68t114  A68_114 ;    /* STRUCT(REF MODE26,REF MODE114)  */
struct A68t115{
A68_VC  Env_name;
A68_VC  Env_value;
struct A68t115 * Next;
};
typedef struct A68t115  A68_115 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE115)  */
struct A68t117 ;
struct A68t118 ;

A_PROCEDURE(struct A68t117 *,A68t116,(A68_VC ,struct A68t118 *,A68_VC *),(A68_VC ,struct A68t118 *,A68_VC *,void *));
typedef struct A68t116  A68_116 ;    /* PROC(MODE26,REF MODE118,REF REF MODE26) REF MODE117 */
struct A68t117{
A68_VC  Name;
A68_BITS * Stdiofile;
};
typedef struct A68t117  A68_117 ;    /* STRUCT(REF MODE26,REF BITS)  */
struct A68t118{
A68_VC  Dir;
struct A68t118 * Next;
};
typedef struct A68t118  A68_118 ;    /* STRUCT(REF MODE26,REF MODE118)  */
struct A68t119{
A68_INT  Parameters;
A_PAD_INT(PAD_27)
A68_INT  Result;
A_PAD_INT(PAD_28)
A68_BOOL  Hasdescriptors;
A_PAD_BOOL(PAD_29)
};
typedef struct A68t119  A68_119 ;    /* STRUCT(INT,INT,BOOL)  */
A_ISTRUCT(A68_CHAR ,32,A68t121);
typedef struct A68t121  A68_121 ;    /* STRUCT 32 CHAR */
struct A68t120{
A68_INT  Mode;
A_PAD_INT(PAD_30)
A68_INT  Offset;
A_PAD_INT(PAD_31)
struct A68t121  Name;
A_PAD_ISTRUCT(A68_121 ,PAD_32)
};
typedef struct A68t120  A68_120 ;    /* STRUCT(INT,INT,MODE121)  */
struct A68t123 ;

A_PROCEDURE(A68_VOID ,A68t122,(A68_INT ,struct A68t123 *),(A68_INT ,struct A68t123 *,void *));
typedef struct A68t122  A68_122 ;    /* PROC(INT) REF MODE123 */
A_VECTOR(A68_INT ,A68t123);
typedef struct A68t123  A68_123 ;    /* VECTOR [] INT */

A_PROCEDURE(A68_VOID ,A68t124,(struct A68t120 *,A68_VC *),(struct A68t120 *,A68_VC *,void *));
typedef struct A68t124  A68_124 ;    /* PROC(REF MODE120) MODE26 */

A_PROCEDURE(A68_VOID ,A68t125,(A68_INT ,A68_VC ,struct A68t68 *),(A68_INT ,A68_VC ,struct A68t68 *,void *));
typedef struct A68t125  A68_125 ;    /* PROC(INT,MODE26) MODE68 */
struct A68t127 ;

A_PROCEDURE(A68_VOID ,A68t126,(struct A68t127 ,A68_INT ),(struct A68t127 ,A68_INT ,void *));
typedef struct A68t126  A68_126 ;    /* PROC(REF MODE127,INT) VOID */
A_ROW(struct A68t128 ,A68t127,1);
typedef struct A68t127  A68_127 ;    /* [] MODE128 */
struct A68t138{
A68_INT  Mode;
A_PAD_INT(PAD_33)
};
typedef struct A68t138  A68_138 ;    /* STRUCT(INT)  */
struct A68t128 { A68_INT mode; union {
A68_INT  mode1;
struct A68t129 * mode2;
struct A68t130 * mode3;
struct A68t131 * mode4;
struct A68t132 * mode5;
struct A68t133 * mode6;
struct A68t134 * mode7;
struct A68t135 * mode8;
struct A68t136 * mode9;
struct A68t137 * mode10;
struct A68t138  mode11;
} data; };
typedef struct A68t128  A68_128 ;    /* UNION(INT,REF MODE129,REF MODE130,REF MODE131,REF MODE132,REF MODE133,REF MODE134,REF MODE135,REF MODE136,REF MODE137,MODE138)  */
struct A68t129{
A68_INT  Rdenno;
A_PAD_INT(PAD_34)
struct A68t142 * Modelist;
};
typedef struct A68t129  A68_129 ;    /* STRUCT(INT,REF MODE142)  */
struct A68t130{
A68_INT  Deproc;
A_PAD_INT(PAD_35)
struct A68t142 * Pars;
};
typedef struct A68t130  A68_130 ;    /* STRUCT(INT,REF MODE142)  */
struct A68t131{
A68_INT  Rdenno;
A_PAD_INT(PAD_36)
A68_INT  Deflex;
A_PAD_INT(PAD_37)
struct A68t141 * Sels;
};
typedef struct A68t131  A68_131 ;    /* STRUCT(INT,INT,REF MODE141)  */
struct A68t132{
A68_INT  Rdenno;
A_PAD_INT(PAD_38)
A68_INT  Imode;
A_PAD_INT(PAD_39)
A68_INT  Length;
A_PAD_INT(PAD_40)
A68_INT  Deflex;
A_PAD_INT(PAD_41)
};
typedef struct A68t132  A68_132 ;    /* STRUCT(INT,INT,INT,INT)  */
struct A68t133{
A68_INT  Deproc;
A_PAD_INT(PAD_42)
};
typedef struct A68t133  A68_133 ;    /* STRUCT(INT)  */
struct A68t134{
A68_INT  Rdenno;
A_PAD_INT(PAD_43)
A68_INT  Vecmode;
A_PAD_INT(PAD_44)
A68_INT  Deflex;
A_PAD_INT(PAD_45)
};
typedef struct A68t134  A68_134 ;    /* STRUCT(INT,INT,INT)  */
struct A68t135{
A68_INT  Rdenno;
A_PAD_INT(PAD_46)
A68_INT  Mode;
A_PAD_INT(PAD_47)
A68_INT  Nods;
A_PAD_INT(PAD_48)
A68_INT  Deflex;
A_PAD_INT(PAD_49)
};
typedef struct A68t135  A68_135 ;    /* STRUCT(INT,INT,INT,INT)  */
struct A68t136{
A68_INT  Mode;
A_PAD_INT(PAD_50)
struct A68t140 * Stenlist;
};
typedef struct A68t136  A68_136 ;    /* STRUCT(INT,REF MODE140)  */
struct A68t137{
A68_INT  Mode;
A_PAD_INT(PAD_51)
A68_INT  Modeproc;
A_PAD_INT(PAD_52)
struct A68t139 * El;
};
typedef struct A68t137  A68_137 ;    /* STRUCT(INT,INT,REF MODE139)  */
struct A68t139{
struct A68t137 * Am;
struct A68t139 * Rest;
};
typedef struct A68t139  A68_139 ;    /* STRUCT(REF MODE137,REF MODE139)  */
struct A68t140{
A68_INT  Mode;
A_PAD_INT(PAD_53)
A68_INT  Rdenno;
A_PAD_INT(PAD_54)
struct A68t140 * Rest;
};
typedef struct A68t140  A68_140 ;    /* STRUCT(INT,INT,REF MODE140)  */
struct A68t141{
A68_INT  Mode;
A_PAD_INT(PAD_55)
A68_INT  Fieldno;
A_PAD_INT(PAD_56)
struct A68t121  Name;
A_PAD_ISTRUCT(A68_121 ,PAD_57)
struct A68t141 * Rest;
};
typedef struct A68t141  A68_141 ;    /* STRUCT(INT,INT,MODE121,REF MODE141)  */
struct A68t142{
A68_INT  Mode;
A_PAD_INT(PAD_58)
struct A68t142 * Rest;
};
typedef struct A68t142  A68_142 ;    /* STRUCT(INT,REF MODE142)  */

A_PROCEDURE(A68_VOID ,A68t143,(A68_INT ,struct A68t119 *),(A68_INT ,struct A68t119 *,void *));
typedef struct A68t143  A68_143 ;    /* PROC(INT) MODE119 */
struct A68t145 ;

A_PROCEDURE(A68_VOID ,A68t144,(A68_INT ,struct A68t145 *),(A68_INT ,struct A68t145 *,void *));
typedef struct A68t144  A68_144 ;    /* PROC(INT) REF MODE145 */
A_VECTOR(struct A68t120 ,A68t145);
typedef struct A68t145  A68_145 ;    /* VECTOR [] MODE120 */

A_PROCEDURE(A68_INT ,A68t146,(A68_INT ,A68_BOOL ),(A68_INT ,A68_BOOL ,void *));
typedef struct A68t146  A68_146 ;    /* PROC(INT,BOOL) INT */

A_PROCEDURE(A68_VOID ,A68t147,(A68_INT ,A68_INT ,A68_VC *),(A68_INT ,A68_INT ,A68_VC *,void *));
typedef struct A68t147  A68_147 ;    /* PROC(INT,INT) MODE26 */

A_PROCEDURE(A68_BOOL ,A68t148,(struct A68t64 *,struct A68t64 *),(struct A68t64 *,struct A68t64 *,void *));
typedef struct A68t148  A68_148 ;    /* PROC(REF MODE64,REF MODE64) BOOL */

A_PROCEDURE(A68_BOOL ,A68t149,(struct A68t64 *),(struct A68t64 *,void *));
typedef struct A68t149  A68_149 ;    /* PROC(REF MODE64) BOOL */

A_PROCEDURE(A68_BOOL ,A68t150,(struct A68t64 *,A68_LBITS ),(struct A68t64 *,A68_LBITS ,void *));
typedef struct A68t150  A68_150 ;    /* PROC(REF MODE64,LONG BITS) BOOL */

A_PROCEDURE(A68_LBITS ,A68t151,(struct A68t64 *),(struct A68t64 *,void *));
typedef struct A68t151  A68_151 ;    /* PROC(REF MODE64) LONG BITS */

A_PROCEDURE(A68_VOID ,A68t152,(struct A68t64 *,A68_VC *),(struct A68t64 *,A68_VC *,void *));
typedef struct A68t152  A68_152 ;    /* PROC(REF MODE64) MODE26 */

A_PROCEDURE(struct A68t64 *,A68t153,(struct A68t64 *,A68_INT ),(struct A68t64 *,A68_INT ,void *));
typedef struct A68t153  A68_153 ;    /* PROC(REF MODE64,INT) REF MODE64 */

A_PROCEDURE(A68_INT ,A68t154,(struct A68t70 ),(struct A68t70 ,void *));
typedef struct A68t154  A68_154 ;    /* PROC(MODE70) INT */

A_PROCEDURE(A68_BOOL ,A68t155,(struct A68t64 *,A68_BITS ),(struct A68t64 *,A68_BITS ,void *));
typedef struct A68t155  A68_155 ;    /* PROC(REF MODE64,BITS) BOOL */

A_PROCEDURE(struct A68t64 *,A68t156,(struct A68t71 *,A68_INT ),(struct A68t71 *,A68_INT ,void *));
typedef struct A68t156  A68_156 ;    /* PROC(REF MODE71,INT) REF MODE64 */

A_PROCEDURE(struct A68t71 *,A68t157,(struct A68t71 *),(struct A68t71 *,void *));
typedef struct A68t157  A68_157 ;    /* PROC(REF MODE71) REF MODE71 */
struct A68t159 ;

A_PROCEDURE(struct A68t64 *,A68t158,(A68_INT ,A68_INT ,A68_BITS ,struct A68t159 ),(A68_INT ,A68_INT ,A68_BITS ,struct A68t159 ,void *));
typedef struct A68t158  A68_158 ;    /* PROC(INT,INT,BITS,MODE159) REF MODE64 */
A_VECTOR(struct A68t64 *,A68t159);
typedef struct A68t159  A68_159 ;    /* VECTOR [] REF MODE64 */

A_PROCEDURE(A68_VOID ,A68t160,(struct A68t64 *,A68_BOOL ,A68_VC *),(struct A68t64 *,A68_BOOL ,A68_VC *,void *));
typedef struct A68t160  A68_160 ;    /* PROC(REF MODE64,BOOL) MODE26 */

A_PROCEDURE(A68_LINT ,A68t161,(struct A68t64 ),(struct A68t64 ,void *));
typedef struct A68t161  A68_161 ;    /* PROC(MODE64) LONG INT */
struct A68t162 { A68_INT mode; union {
struct A68t64 * mode1;
A68_VC  mode2;
struct A68t68  mode3;
} data; };
typedef struct A68t162  A68_162 ;    /* UNION(REF MODE64,MODE26,MODE68)  */

A_PROCEDURE(A68_VOID ,A68t163,(struct A68t162 ,A68_VC *),(struct A68t162 ,A68_VC *,void *));
typedef struct A68t163  A68_163 ;    /* PROC(MODE162) MODE26 */
struct A68t165 ;

A_PROCEDURE(A68_VOID ,A68t164,(struct A68t165 ,A68_VC *),(struct A68t165 ,A68_VC *,void *));
typedef struct A68t164  A68_164 ;    /* PROC(MODE165) MODE26 */
A_VECTOR(struct A68t162 ,A68t165);
typedef struct A68t165  A68_165 ;    /* VECTOR [] MODE162 */

A_PROCEDURE(A68_VOID ,A68t166,(A68_VC ,struct A68t165 ,A68_VC *),(A68_VC ,struct A68t165 ,A68_VC *,void *));
typedef struct A68t166  A68_166 ;    /* PROC(MODE26,MODE165) MODE26 */

A_PROCEDURE(A68_VOID ,A68t167,(struct A68t165 ),(struct A68t165 ,void *));
typedef struct A68t167  A68_167 ;    /* PROC(MODE165) VOID */

A_PROCEDURE(A68_VOID ,A68t168,(A68_VC ,A68_INT ,struct A68t165 ,struct A68t68 *),(A68_VC ,A68_INT ,struct A68t165 ,struct A68t68 *,void *));
typedef struct A68t168  A68_168 ;    /* PROC(MODE26,INT,MODE165) MODE68 */

A_PROCEDURE(struct A68t64 *,A68t169,(struct A68t64 *),(struct A68t64 *,void *));
typedef struct A68t169  A68_169 ;    /* PROC(REF MODE64) REF MODE64 */

A_PROCEDURE(struct A68t64 *,A68t170,(A68_VC ,struct A68t64 *),(A68_VC ,struct A68t64 *,void *));
typedef struct A68t170  A68_170 ;    /* PROC(MODE26,REF MODE64) REF MODE64 */

A_PROCEDURE(A68_VOID ,A68t171,(struct A68t75 ),(struct A68t75 ,void *));
typedef struct A68t171  A68_171 ;    /* PROC(MODE75) VOID */

A_PROCEDURE(A68_VOID ,A68t172,(struct A68t87 ),(struct A68t87 ,void *));
typedef struct A68t172  A68_172 ;    /* PROC(MODE87) VOID */

A_PROCEDURE(A68_VOID ,A68t173,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t173  A68_173 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,60,A68t174);
typedef struct A68t174  A68_174 ;    /* STRUCT 60 CHAR */
struct A68t175{
struct A68t64 * Control;
struct A68t64 * Step;
A68_BOOL  Forpart;
A_PAD_BOOL(PAD_59)
A68_BOOL  Frompart;
A_PAD_BOOL(PAD_60)
A68_BOOL  Bypart;
A_PAD_BOOL(PAD_61)
A68_BOOL  Topart;
A_PAD_BOOL(PAD_62)
};
typedef struct A68t175  A68_175 ;    /* STRUCT(REF MODE64,REF MODE64,BOOL,BOOL,BOOL,BOOL)  */
struct A68t176{
struct A68t64  Ident;
A68_VC  Control;
A68_BOOL  Needstemp;
A_PAD_BOOL(PAD_63)
};
typedef struct A68t176  A68_176 ;    /* STRUCT(MODE64,REF MODE26,BOOL)  */

A_PROCEDURE(struct A68t64 *,A68t177,(struct A68t64 *,struct A68t64 ),(struct A68t64 *,struct A68t64 ,void *));
typedef struct A68t177  A68_177 ;    /* PROC(REF MODE64,MODE64) REF MODE64 */

A_PROCEDURE(struct A68t65 *,A68t178,(struct A68t65 *,struct A68t65 ),(struct A68t65 *,struct A68t65 ,void *));
typedef struct A68t178  A68_178 ;    /* PROC(REF MODE65,MODE65) REF MODE65 */
#define A68_179  A68_VC 
#define A68t179 A68t26            /* FLEX VECTOR [] CHAR */

A_PROCEDURE(A68_VOID ,A68t180,(struct A68t175 *,A68_INT ,struct A68t71 **),(struct A68t175 *,A68_INT ,struct A68t71 **,void *));
typedef struct A68t180  A68_180 ;    /* PROC(REF MODE175,INT,REF REF MODE71) VOID */

A_PROCEDURE(A68_VOID ,A68t181,(struct A68t64 *,A68_BOOL ),(struct A68t64 *,A68_BOOL ,void *));
typedef struct A68t181  A68_181 ;    /* PROC(REF MODE64,BOOL) VOID */
A_ISTRUCT(A68_CHAR ,15,A68t182);
typedef struct A68t182  A68_182 ;    /* STRUCT 15 CHAR */
A_ISTRUCT(A68_CHAR ,3,A68t183);
typedef struct A68t183  A68_183 ;    /* STRUCT 3 CHAR */
A_ISTRUCT(struct A68t93 ,5,A68t184);
typedef struct A68t184  A68_184 ;    /* STRUCT 5 MODE93 */

A_PROCEDURE(A68_VOID ,A68t185,(A68_VC *),(A68_VC *,void *));
typedef struct A68t185  A68_185 ;    /* PROC MODE26 */
A_ISTRUCT(A68_CHAR ,12,A68t186);
typedef struct A68t186  A68_186 ;    /* STRUCT 12 CHAR */
A_ISTRUCT(A68_CHAR ,6,A68t187);
typedef struct A68t187  A68_187 ;    /* STRUCT 6 CHAR */
A_ISTRUCT(struct A68t93 ,6,A68t188);
typedef struct A68t188  A68_188 ;    /* STRUCT 6 MODE93 */
A_ISTRUCT(A68_CHAR ,2,A68t189);
typedef struct A68t189  A68_189 ;    /* STRUCT 2 CHAR */
A_ISTRUCT(struct A68t93 ,4,A68t190);
typedef struct A68t190  A68_190 ;    /* STRUCT 4 MODE93 */
A_ISTRUCT(A68_CHAR ,8,A68t191);
typedef struct A68t191  A68_191 ;    /* STRUCT 8 CHAR */
A_ISTRUCT(struct A68t93 ,8,A68t192);
typedef struct A68t192  A68_192 ;    /* STRUCT 8 MODE93 */
A_ISTRUCT(A68_CHAR ,9,A68t193);
typedef struct A68t193  A68_193 ;    /* STRUCT 9 CHAR */
A_ISTRUCT(struct A68t93 ,3,A68t194);
typedef struct A68t194  A68_194 ;    /* STRUCT 3 MODE93 */
A_ISTRUCT(A68_CHAR ,10,A68t195);
typedef struct A68t195  A68_195 ;    /* STRUCT 10 CHAR */
A_ISTRUCT(struct A68t93 ,2,A68t196);
typedef struct A68t196  A68_196 ;    /* STRUCT 2 MODE93 */
A_VECTOR(struct A68t176 ,A68t197);
typedef struct A68t197  A68_197 ;    /* VECTOR [] MODE176 */

A_PROCEDURE(A68_VOID ,A68t198,(struct A68t197 ,struct A68t71 **),(struct A68t197 ,struct A68t71 **,void *));
typedef struct A68t198  A68_198 ;    /* PROC(REF MODE197,REF REF MODE71) VOID */
A_VECTOR(A68_VC ,A68t199);
typedef struct A68t199  A68_199 ;    /* VECTOR [] REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t200,(A68_BOOL ,struct A68t199 *),(A68_BOOL ,struct A68t199 *,void *));
typedef struct A68t200  A68_200 ;    /* PROC(BOOL) MODE199 */

A_PROCEDURE(A68_VOID ,A68t201,(A68_BOOL ,struct A68t123 *),(A68_BOOL ,struct A68t123 *,void *));
typedef struct A68t201  A68_201 ;    /* PROC(BOOL) MODE123 */
A_ISTRUCT(A68_CHAR ,26,A68t202);
typedef struct A68t202  A68_202 ;    /* STRUCT 26 CHAR */
A_ISTRUCT(A68_CHAR ,20,A68t203);
typedef struct A68t203  A68_203 ;    /* STRUCT 20 CHAR */
A_ISTRUCT(A68_CHAR ,19,A68t204);
typedef struct A68t204  A68_204 ;    /* STRUCT 19 CHAR */
A_ISTRUCT(A68_CHAR ,11,A68t205);
typedef struct A68t205  A68_205 ;    /* STRUCT 11 CHAR */
A_ISTRUCT(A68_CHAR ,5,A68t206);
typedef struct A68t206  A68_206 ;    /* STRUCT 5 CHAR */
A_ISTRUCT(A68_CHAR ,48,A68t207);
typedef struct A68t207  A68_207 ;    /* STRUCT 48 CHAR */
A_ISTRUCT(struct A68t162 ,2,A68t208);
typedef struct A68t208  A68_208 ;    /* STRUCT 2 MODE162 */
A_ISTRUCT(A68_CHAR ,14,A68t209);
typedef struct A68t209  A68_209 ;    /* STRUCT 14 CHAR */
A_ISTRUCT(struct A68t93 ,7,A68t210);
typedef struct A68t210  A68_210 ;    /* STRUCT 7 MODE93 */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from values --- */
extern A68_BOOL  UTPACTR_isconstant(struct A68t64 *);
extern A68_BOOL  NUPACTR_isident(struct A68t64 *);
extern A68_BOOL  ZUPACTR_isskip(struct A68t64 *);
extern A68_BOOL  RUPACTR_istemp(struct A68t64 *);
extern A68_LBITS  IVPACTR_getconstant(struct A68t64 *);
extern A68_VOID  PWPACTR_getcfragment(struct A68t64 *,A68_VC *);
extern A68_BITS  YIJACTR_defaultinfo;
extern A68_VOID  WAQACTR_bracketcfragment(struct A68t64 *,A68_VC *);
extern A68_VOID  NLQACTR_usemacro(A68_VC ,struct A68t165 ,A68_VC *);
extern A68_64 * ENQACTR_yield(A68_VC ,struct A68t64 *);
/* --- End of imports from values --- */


/* --- Imports from modes --- */
extern A68_VOID  UIOACTR_declarectemporary(A68_INT ,A68_VC ,A68_68 *);
extern A68_INT  ZTMACTR_dimensions(A68_INT );
extern A68_94  DUMACTR_elementmode;
extern A68_BOOL  ARMACTR_hasrefs(A68_INT );
extern A68_BOOL  JPMACTR_isarray(A68_INT );
extern A68_BOOL  OPMACTR_isfirmarray(A68_INT );
extern A68_BOOL  TPMACTR_isflexarray(A68_INT );
extern A68_BOOL  ZOMACTR_isvector(A68_INT );
extern A68_BOOL  GQMACTR_isistruct(A68_INT );
extern A68_94  FUMACTR_istructlength;
extern A68_BOOL  VMMACTR_hasoneref(A68_INT );
/* --- End of imports from modes --- */


/* --- Imports from incmode --- */
#define EFAACTR_intmode 15
#define VFAACTR_refmark 1024
/* --- End of imports from incmode --- */


/* --- Imports from environment --- */
/* --- End of imports from environment --- */


/* --- Imports from environ --- */
extern A68_INT  WQLACTR_codestream(A68_INT );
extern A68_INT  EQLACTR_currentlevel(void);
/* --- End of imports from environ --- */


/* --- Imports from coutput --- */
extern A68_VOID  VBMACTR_writecstream(struct A68t92 ,A68_INT );
/* --- End of imports from coutput --- */


/* --- Imports from clauses --- */
extern A68_74  WUQACTR_evaluate;
/* --- End of imports from clauses --- */


/* --- Imports from usefulops --- */
extern A68_VOID  ROAAOSF_whole(A68_INT ,A68_INT ,A68_VC *);
/* --- End of imports from usefulops --- */


/* --- Imports from centities --- */
extern A68_SINT  EIAACTR_cnewline;
extern A68_VOID  JIAACTR_bracket(A68_VC ,A68_VC *);
/* --- End of imports from centities --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void JRPACTR(void);   /* values */
extern void MLMACTR(void);   /* modes */
extern void ZDAACTR(void);   /* incmode */
extern void HPIACTR(void);   /* environment */
extern void KNLACTR(void);   /* environ */
extern void YRLACTR(void);   /* coutput */
extern void KXYACTR(void);   /* clauses */
extern void IKAAOSF(void);   /* usefulops */
extern void THAACTR(void);   /* centities */
/* --- end of DECS initialisation functions --- */
static A68_174   NAABCTR = {"$Id: loops.c,v 1.5.2.4 2004/09/27 03:04:19 teshields Exp $"}; 
A_GISVEC(A68_VC ,OAABCTR,NAABCTR,60)
static A68_64 * GBABCTR_value1;
static A68_182   SBABCTR = {"to part of loop"}; 
A_GISVEC(A68_VC ,UBABCTR,SBABCTR,15)
static A68_182   VBABCTR = {"by part of loop"}; 
A_GISVEC(A68_VC ,WBABCTR,VBABCTR,15)
static A68_183   ECABCTR = {" = "}; 
A_GISVEC(A68_VC ,FCABCTR,ECABCTR,3)
static A68_186   IDABCTR = {"loop control"}; 
A_GISVEC(A68_VC ,JDABCTR,IDABCTR,12)
static A68_187   PDABCTR = {"for ( "}; 
A_GISVEC(A68_VC ,QDABCTR,PDABCTR,6)
static A68_183   UDABCTR = {" = "}; 
A_GISVEC(A68_VC ,VDABCTR,UDABCTR,3)
static A68_45   GEABCTR = {" <= "}; 
A_GISVEC(A68_VC ,HEABCTR,GEABCTR,4)
static A68_45   REABCTR = {" >= "}; 
A_GISVEC(A68_VC ,SEABCTR,REABCTR,4)
static A68_189   ZEABCTR = {"; "}; 
A_GISVEC(A68_VC ,AFABCTR,ZEABCTR,2)
static A68_45   IFABCTR = {" += "}; 
A_GISVEC(A68_VC ,JFABCTR,IFABCTR,4)
static A68_189   OFABCTR = {" )"}; 
A_GISVEC(A68_VC ,PFABCTR,OFABCTR,2)
static A68_189   XFABCTR = {"( "}; 
A_GISVEC(A68_VC ,YFABCTR,XFABCTR,2)
static A68_191   CGABCTR = {" > 0 && "}; 
A_GISVEC(A68_VC ,DGABCTR,CGABCTR,8)
static A68_45   HGABCTR = {" <= "}; 
A_GISVEC(A68_VC ,IGABCTR,HGABCTR,4)
static A68_45   MGABCTR = {") ||"}; 
A_GISVEC(A68_VC ,NGABCTR,MGABCTR,4)
static A68_189   TGABCTR = {"( "}; 
A_GISVEC(A68_VC ,UGABCTR,TGABCTR,2)
static A68_191   YGABCTR = {" < 0 && "}; 
A_GISVEC(A68_VC ,ZGABCTR,YGABCTR,8)
static A68_45   DHABCTR = {" >= "}; 
A_GISVEC(A68_VC ,EHABCTR,DHABCTR,4)
static A68_45   IHABCTR = {") ||"}; 
A_GISVEC(A68_VC ,JHABCTR,IHABCTR,4)
static A68_189   PHABCTR = {"( "}; 
A_GISVEC(A68_VC ,QHABCTR,PHABCTR,2)
static A68_193   UHABCTR = {" == 0 ) ;"}; 
A_GISVEC(A68_VC ,VHABCTR,UHABCTR,9)
static A68_45   CIABCTR = {" += "}; 
A_GISVEC(A68_VC ,DIABCTR,CIABCTR,4)
static A68_189   HIABCTR = {" )"}; 
A_GISVEC(A68_VC ,IIABCTR,HIABCTR,2)
static A68_187   SIABCTR = {"for ( "}; 
A_GISVEC(A68_VC ,TIABCTR,SIABCTR,6)
static A68_183   XIABCTR = {" = "}; 
A_GISVEC(A68_VC ,YIABCTR,XIABCTR,3)
static A68_189   CJABCTR = {";;"}; 
A_GISVEC(A68_VC ,DJABCTR,CJABCTR,2)
static A68_45   KJABCTR = {" += "}; 
A_GISVEC(A68_VC ,LJABCTR,KJABCTR,4)
static A68_183   QJABCTR = {" ) "}; 
A_GISVEC(A68_VC ,RJABCTR,QJABCTR,3)
static A68_195   JKABCTR = {"for ( ;; )"}; 
A_GISVEC(A68_VC ,KKABCTR,JKABCTR,10)
static A68_189   QKABCTR = {"{ "}; 
A_GISVEC(A68_VC ,RKABCTR,QKABCTR,2)
static A68_186   CMABCTR = {"forall yield"}; 
A_GISVEC(A68_VC ,DMABCTR,CMABCTR,12)
static A68_202   KNABCTR = {"forall control - ref [][]x"}; 
A_GISVEC(A68_VC ,LNABCTR,KNABCTR,26)
static A68_203   POABCTR = {"forall control - []x"}; 
A_GISVEC(A68_VC ,QOABCTR,POABCTR,20)
static A68_204   EPABCTR = {"forall loop counter"}; 
A_GISVEC(A68_VC ,FPABCTR,EPABCTR,19)
static A68_183   LPABCTR = {" = "}; 
static A68_33   RPABCTR = {".upb -1"}; 
A_GISVEC(A68_VC ,TPABCTR,RPABCTR,7)
static A68_205   UPABCTR = {".dim[0].upb"}; 
static A68_183   VPABCTR = {" - "}; 
static A68_205   WPABCTR = {".dim[0].lwb"}; 
A_GISVEC(A68_VC ,YPABCTR,UPABCTR,11)
A_GISVEC(A68_VC ,ZPABCTR,VPABCTR,3)
A_GISVEC(A68_VC ,BQABCTR,WPABCTR,11)
A_GISVEC(A68_VC ,CQABCTR,LPABCTR,3)
static A68_206   NQABCTR = {"if ( "}; 
static A68_45   OQABCTR = {" != "}; 
static A68_33   RQABCTR = {".upb -1"}; 
A_GISVEC(A68_VC ,SQABCTR,RQABCTR,7)
static A68_205   TQABCTR = {".dim[0].upb"}; 
static A68_183   UQABCTR = {" - "}; 
static A68_205   VQABCTR = {".dim[0].lwb"}; 
A_GISVEC(A68_VC ,WQABCTR,TQABCTR,11)
A_GISVEC(A68_VC ,XQABCTR,UQABCTR,3)
A_GISVEC(A68_VC ,YQABCTR,VQABCTR,11)
A_GISVEC(A68_VC ,ZQABCTR,NQABCTR,5)
A_GISVEC(A68_VC ,ARABCTR,OQABCTR,4)
static A68_189   DRABCTR = {" )"}; 
A_GISVEC(A68_VC ,ERABCTR,DRABCTR,2)
static A68_207   KRABCTR = {"{ A_ERROR( \"mismatched bounds in FORALL; row no "}; 
static A68_206   LRABCTR = {"\"); }"}; 
A_GISVEC(A68_VC ,MRABCTR,KRABCTR,48)
A_GISVEC(A68_VC ,ORABCTR,LRABCTR,5)
static A68_183   ZRABCTR = {"A_R"}; 
static A68_206   ASABCTR = {"STRIP"}; 
A_GISVEC(A68_VC ,HSABCTR,ZRABCTR,3)
A_GISVEC(A68_VC ,JSABCTR,ASABCTR,5)
static A68_183   LSABCTR = {" = "}; 
static A68_206   MSABCTR = {".data"}; 
A_GISVEC(A68_VC ,NSABCTR,LSABCTR,3)
A_GISVEC(A68_VC ,OSABCTR,MSABCTR,5)
static A68_193   XSABCTR = {".data += "}; 
static A68_209   YSABCTR = {".dim[0].stride"}; 
A_GISVEC(A68_VC ,ATABCTR,XSABCTR,9)
A_GISVEC(A68_VC ,BTABCTR,YSABCTR,14)
static A68_189   DTABCTR = {"++"}; 
A_GISVEC(A68_VC ,FTABCTR,DTABCTR,2)
static A68_45   GTABCTR = {" += "}; 
static A68_209   HTABCTR = {".dim[0].stride"}; 
A_GISVEC(A68_VC ,ITABCTR,GTABCTR,4)
A_GISVEC(A68_VC ,JTABCTR,HTABCTR,14)
static A68_187   UTABCTR = {"for (;"}; 
A_GISVEC(A68_VC ,VTABCTR,UTABCTR,6)
static A68_191   ZTABCTR = {"-- >= 0;"}; 
A_GISVEC(A68_VC ,AUABCTR,ZTABCTR,8)
static A68_183   UUABCTR = {") )"}; 
A_GISVEC(A68_VC ,VUABCTR,UUABCTR,3)
static A68_45   IVABCTR = {" = *"}; 
A_GISVEC(A68_VC ,JVABCTR,IVABCTR,4)
static A68_195   WVABCTR = {"A_ENQ_SKIP"}; 
A_GISVEC(A68_VC ,YVABCTR,WVABCTR,10)
static A68_187   CWABCTR = {"if ( !"}; 
A_GISVEC(A68_VC ,DWABCTR,CWABCTR,6)
static A68_193   HWABCTR = {" ) break;"}; 
A_GISVEC(A68_VC ,IWABCTR,HWABCTR,9)
A68_75  UWABCTR_od;
typedef struct   /* env of non-global proc */
{
A68_INT  LBABCTR_codestream;
A_PAD_INT(PAD_64)
} QBABCTR_evaluatetoorbypart;
typedef struct   /* env of non-global proc */
{
A68_175 * Loop;
A68_71 ** Frobytlist;
} RCABCTR_evaluatefrompart;
typedef struct   /* env of non-global proc */
{
A68_175 * Loop;
A68_71 ** Frobytlist;
A68_181  OBABCTR_evaluatetoorbypart;
} YCABCTR_setstep;
typedef struct   /* env of non-global proc */
{
A68_INT  LBABCTR_codestream;
A_PAD_INT(PAD_65)
} AKABCTR_voidresult;
typedef struct   /* env of non-global proc */
{
A68_197  Controls;
} CLABCTR_generator;
typedef struct   /* env of non-global proc */
{
A68_197  Controls;
} KLABCTR_generator;
typedef struct   /* env of non-global proc */
{
A68_VC  KMABCTR_rowname;
} OMABCTR_generator;
typedef struct   /* env of non-global proc */
{
A68_VC  VMABCTR_controlname;
} ZMABCTR_generator;
typedef struct   /* env of non-global proc */
{
A68_VC  PNABCTR_controlname;
} TNABCTR_generator;
typedef struct   /* env of non-global proc */
{
A68_VC  BOABCTR_controlname;
} FOABCTR_generator;
typedef struct   /* env of non-global proc */
{
A68_VC  UOABCTR_controlname;
} YOABCTR_generator;
typedef struct   /* env of non-global proc */
{
A68_197  Controls;
A68_123  NLABCTR_modeofrows;
A68_199  FLABCTR_rows;
} WRABCTR_initialise;
typedef struct   /* env of non-global proc */
{
A68_123  NLABCTR_modeofrows;
A68_197  Controls;
A68_199  FLABCTR_rows;
} SSABCTR_increment;

A_STATIC A68_64 * UAABCTR_assignment(A68_64 * SAABCTR_anonymous, A68_64  TAABCTR_anonymous);

A_STATIC A68_65 * ZAABCTR_assignment(A68_65 * XAABCTR_anonymous, A68_65  YAABCTR_anonymous);

A68_VOID  KBABCTR_for(A68_175 * Loop, A68_INT  Frobytcount, A68_71 ** Frobytlist);

A_STATIC A68_VOID  PBABCTR_evaluatetoorbypart(A68_64 * Part, A68_BOOL  Topart, void *NonLocals);

A_STATIC A68_VOID  QCABCTR_evaluatefrompart(A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  XCABCTR_setstep(void *NonLocals);

A_STATIC A68_VOID  ZJABCTR_voidresult(A68_64 * Value, void *NonLocals);

A68_VOID  YKABCTR_forall(A68_197  Controls, A68_71 ** Foralllist);

A_STATIC A68_VOID  BLABCTR_generator(A68_BOOL  ZKABCTR_anonymous, A68_199  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  JLABCTR_generator(A68_BOOL  HLABCTR_anonymous, A68_123  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  NMABCTR_generator(A68_BOOL  LMABCTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  YMABCTR_generator(A68_BOOL  WMABCTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  SNABCTR_generator(A68_BOOL  QNABCTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  EOABCTR_generator(A68_BOOL  COABCTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  XOABCTR_generator(A68_BOOL  VOABCTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  VRABCTR_initialise(A68_INT  I, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  RSABCTR_increment(A68_INT  I, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  SVABCTR_while(void);

A68_VOID  UVABCTR_whiledo(A68_64 * Enquiry);

A68_VOID  NWABCTR_whileod(void);

A_STATIC A68_65 * ZAABCTR_assignment(A68_65 * XAABCTR_anonymous, A68_65  YAABCTR_anonymous)
{ 
A68_65  ABABCTR;  /* united object - for case conformity */
A68_VC  BBABCTR_anonymous;
A68_VC  CBABCTR;  /* OPERATORS - copy to flex */
A68_179 * DBABCTR;  /* YIELD */
A68_65 * EBABCTR;  /* clause result */
{ 
(*XAABCTR_anonymous) = YAABCTR_anonymous;
ABABCTR = YAABCTR_anonymous ;
switch ( ABABCTR.mode )
{ 
case 6: /* VECTOR [] CHAR */
BBABCTR_anonymous = (ABABCTR.data.mode6);
DBABCTR = &(XAABCTR_anonymous-> data.mode6) ;
(*DBABCTR) = A_VCOPY(BBABCTR_anonymous,CBABCTR,A68_CHAR );
break;
default: 
/*SKIP*/;
break;
} 
EBABCTR = XAABCTR_anonymous;
} 
return( EBABCTR );
} 
#undef NL

A_STATIC A68_VOID  PBABCTR_evaluatetoorbypart(A68_64 * Part, A68_BOOL  Topart, void *NonLocals)
#define NL(x) (((QBABCTR_evaluatetoorbypart *)NonLocals)->x)
{ 
A68_BOOL  RBABCTR;  /* optbool result */
A68_VC  TBABCTR;  /* clause result */
A68_68  XBABCTR;  /* avoid structure result */
A68_68  YBABCTR_temp;
A68_184  ZBABCTR;  /* collateral clause result */
A68_VC  ACABCTR;  /* OPERATORS - istruct -> vector */
A68_33  BCABCTR;  /* OPERATORS - istruct -> vector */
A68_93  CCABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  DCABCTR;  /* YIELD */
A68_93  GCABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  HCABCTR;  /* YIELD */
A68_VC  ICABCTR;  /* avoid structure result */
A68_93  JCABCTR;  /* OPERATORS - mode -> union mode */
A68_93  KCABCTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  LCABCTR;  /* YIELD */
A68_93  MCABCTR;  /* OPERATORS - mode -> union mode */
A68_92  NCABCTR;  /* OPERATORS - istruct -> vector */
A68_65  OCABCTR;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(evaluatetoorbypart);
 /* line 91: */
 /* line 92: */
{ 
A_CALLPROC(WUQACTR_evaluate,(Part),(Part,(WUQACTR_evaluate).nonlocals));
 /* line 93: */
 /* line 94: */
RBABCTR = !UTPACTR_isconstant(Part);
if ( RBABCTR )
{RBABCTR = !RUPACTR_istemp(Part);
}
 /* line 96: */
if ( RBABCTR )
{ 
 /* line 97: */
 /* line 98: */
 /* line 99: */
if ( Topart )
{ 
TBABCTR = UBABCTR;
} 
else
{ 
TBABCTR = WBABCTR;
} 
UIOACTR_declarectemporary( (*(&(Part->Mode))), TBABCTR, &XBABCTR );
YBABCTR_temp = XBABCTR;
 /* line 100: */
 /* line 101: */
BCABCTR = YBABCTR_temp.Name ;
DCABCTR = A_HISVEC(ACABCTR,BCABCTR,7,A68_CHAR ) ;
ZBABCTR.data[0] = A_UNITE(CCABCTR,mode2,2,DCABCTR);
 /* line 102: */
HCABCTR = FCABCTR ;
ZBABCTR.data[1] = A_UNITE(GCABCTR,mode2,2,HCABCTR);
PWPACTR_getcfragment( Part, &ICABCTR );
ZBABCTR.data[2] = A_UNITE(JCABCTR,mode2,2,ICABCTR);
LCABCTR = ';' ;
ZBABCTR.data[3] = A_UNITE(KCABCTR,mode1,1,LCABCTR);
ZBABCTR.data[4] = A_UNITE(MCABCTR,mode4,4,EIAACTR_cnewline);
 /* line 103: */
VBMACTR_writecstream(A_HISVEC(NCABCTR,ZBABCTR,5,A68_93 ), NL(LBABCTR_codestream));
 /* line 104: */
 /* line 105: */
 /* line 106: */
ZAABCTR_assignment((&(Part->Extra)), A_UNITE(OCABCTR,mode5,5,YBABCTR_temp));
} 
} 
A_PROC_EXIT(evaluatetoorbypart);
return;
} 
#undef NL

A_STATIC A68_VOID  QCABCTR_evaluatefrompart(A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((RCABCTR_evaluatefrompart *)NonLocals)->x)
{ 
A68_64 * SCABCTR_value;
A68_VC  TCABCTR;  /* clause result */
A68_VC  UCABCTR;  /* avoid structure result */
A68_VC  VCABCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(evaluatefrompart);
{ 
 /* line 115: */
 /* line 116: */
if ( (*(&(NL(Loop)->Frompart))) )
{ 
SCABCTR_value = (&((*NL(Frobytlist))->Value));
 /* line 117: */
(*NL(Frobytlist)) = (*(&((*NL(Frobytlist))->Rest)));
 /* line 118: */
A_CALLPROC(WUQACTR_evaluate,(SCABCTR_value),(SCABCTR_value,(WUQACTR_evaluate).nonlocals));
 /* line 119: */
 /* line 120: */
 /* line 122: */
PWPACTR_getcfragment( SCABCTR_value, &UCABCTR );
TCABCTR = UCABCTR;
} 
else
{ 
 /* line 123: */
TCABCTR = A_HVEC(VCABCTR,'1',A68_CHAR );
} 
} 
A_PROC_EXIT(evaluatefrompart);
*ReturnedValue = (TCABCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  XCABCTR_setstep(void *NonLocals)
#define NL(x) (((YCABCTR_setstep *)NonLocals)->x)
{ 
A68_64 ** ZCABCTR;  /* YIELD */
A68_64 ** ADABCTR;  /* YIELD */
A_PROC_ENTRY(setstep);
{ 
 /* line 135: */
 /* line 136: */
if ( (*(&(NL(Loop)->Bypart))) )
{ 
ZCABCTR = (&(NL(Loop)->Step)) ;
(*ZCABCTR) = (&((*NL(Frobytlist))->Value));
 /* line 137: */
(*NL(Frobytlist)) = (*(&((*NL(Frobytlist))->Rest)));
 /* line 138: */
 /* line 139: */
 /* line 140: */
A_CALLPROC(NL(OBABCTR_evaluatetoorbypart),((*(&(NL(Loop)->Step))), A68_FALSE),((*(&(NL(Loop)->Step))), A68_FALSE,(NL(OBABCTR_evaluatetoorbypart)).nonlocals));
} 
else
{ 
 /* line 141: */
 /* line 142: */
ADABCTR = (&(NL(Loop)->Step)) ;
(*ADABCTR) = GBABCTR_value1;
} 
} 
A_PROC_EXIT(setstep);
return;
} 
#undef NL

A_STATIC A68_VOID  ZJABCTR_voidresult(A68_64 * Value, void *NonLocals)
#define NL(x) (((AKABCTR_voidresult *)NonLocals)->x)
{ 
A68_194  BKABCTR;  /* collateral clause result */
A68_VC  CKABCTR;  /* avoid structure result */
A68_93  DKABCTR;  /* OPERATORS - mode -> union mode */
A68_93  EKABCTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  FKABCTR;  /* YIELD */
A68_93  GKABCTR;  /* OPERATORS - mode -> union mode */
A68_92  HKABCTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(voidresult);
 /* line 244: */
 /* line 245: */
{ 
A_CALLPROC(WUQACTR_evaluate,(Value),(Value,(WUQACTR_evaluate).nonlocals));
 /* line 246: */
 /* line 247: */
PWPACTR_getcfragment( Value, &CKABCTR );
BKABCTR.data[0] = A_UNITE(DKABCTR,mode2,2,CKABCTR);
FKABCTR = ';' ;
BKABCTR.data[1] = A_UNITE(EKABCTR,mode1,1,FKABCTR);
BKABCTR.data[2] = A_UNITE(GKABCTR,mode4,4,EIAACTR_cnewline);
 /* line 248: */
 /* line 249: */
VBMACTR_writecstream(A_HISVEC(HKABCTR,BKABCTR,3,A68_93 ), NL(LBABCTR_codestream));
} 
A_PROC_EXIT(voidresult);
return;
} 
#undef NL

A_STATIC A68_VOID  BLABCTR_generator(A68_BOOL  ZKABCTR_anonymous, A68_199  *ReturnedValue, void *NonLocals)
#define NL(x) (((CLABCTR_generator *)NonLocals)->x)
{ 
A68_199  DLABCTR;  /* clause result */
A68_199  ELABCTR;  /* OPERATORS - dynamic generator */
{ 
ELABCTR.upb = NL(Controls).upb ;
( ZKABCTR_anonymous? A_VLOC(A68_VC ,ELABCTR): A_VHEAP(A68_VC ,ELABCTR) );
DLABCTR = ELABCTR;
} 
*ReturnedValue = (DLABCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  JLABCTR_generator(A68_BOOL  HLABCTR_anonymous, A68_123  *ReturnedValue, void *NonLocals)
#define NL(x) (((KLABCTR_generator *)NonLocals)->x)
{ 
A68_123  LLABCTR;  /* clause result */
A68_123  MLABCTR;  /* OPERATORS - dynamic generator */
{ 
MLABCTR.upb = NL(Controls).upb ;
( HLABCTR_anonymous? A_VLOC(A68_INT ,MLABCTR): A_VHEAP(A68_INT ,MLABCTR) );
LLABCTR = MLABCTR;
} 
*ReturnedValue = (LLABCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  NMABCTR_generator(A68_BOOL  LMABCTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((OMABCTR_generator *)NonLocals)->x)
{ 
A68_VC  PMABCTR;  /* clause result */
A68_VC  QMABCTR;  /* OPERATORS - dynamic generator */
{ 
QMABCTR.upb = NL(KMABCTR_rowname).upb ;
( LMABCTR_anonymous? A_VLOC(A68_CHAR ,QMABCTR): A_VHEAP(A68_CHAR ,QMABCTR) );
PMABCTR = QMABCTR;
} 
*ReturnedValue = (PMABCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  YMABCTR_generator(A68_BOOL  WMABCTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((ZMABCTR_generator *)NonLocals)->x)
{ 
A68_VC  ANABCTR;  /* clause result */
A68_VC  BNABCTR;  /* OPERATORS - dynamic generator */
{ 
BNABCTR.upb = NL(VMABCTR_controlname).upb ;
( WMABCTR_anonymous? A_VLOC(A68_CHAR ,BNABCTR): A_VHEAP(A68_CHAR ,BNABCTR) );
ANABCTR = BNABCTR;
} 
*ReturnedValue = (ANABCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  SNABCTR_generator(A68_BOOL  QNABCTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((TNABCTR_generator *)NonLocals)->x)
{ 
A68_VC  UNABCTR;  /* clause result */
A68_VC  VNABCTR;  /* OPERATORS - dynamic generator */
{ 
VNABCTR.upb = NL(PNABCTR_controlname).upb ;
( QNABCTR_anonymous? A_VLOC(A68_CHAR ,VNABCTR): A_VHEAP(A68_CHAR ,VNABCTR) );
UNABCTR = VNABCTR;
} 
*ReturnedValue = (UNABCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  EOABCTR_generator(A68_BOOL  COABCTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((FOABCTR_generator *)NonLocals)->x)
{ 
A68_VC  GOABCTR;  /* clause result */
A68_VC  HOABCTR;  /* OPERATORS - dynamic generator */
{ 
HOABCTR.upb = NL(BOABCTR_controlname).upb ;
( COABCTR_anonymous? A_VLOC(A68_CHAR ,HOABCTR): A_VHEAP(A68_CHAR ,HOABCTR) );
GOABCTR = HOABCTR;
} 
*ReturnedValue = (GOABCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  XOABCTR_generator(A68_BOOL  VOABCTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((YOABCTR_generator *)NonLocals)->x)
{ 
A68_VC  ZOABCTR;  /* clause result */
A68_VC  APABCTR;  /* OPERATORS - dynamic generator */
{ 
APABCTR.upb = NL(UOABCTR_controlname).upb ;
( VOABCTR_anonymous? A_VLOC(A68_CHAR ,APABCTR): A_VHEAP(A68_CHAR ,APABCTR) );
ZOABCTR = APABCTR;
} 
*ReturnedValue = (ZOABCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  VRABCTR_initialise(A68_INT  I, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((WRABCTR_initialise *)NonLocals)->x)
{ 
A68_VC  XRABCTR_ctrl;
A68_BOOL  YRABCTR;  /* clause result */
A68_208  BSABCTR;  /* collateral clause result */
A68_162  CSABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  DSABCTR;  /* YIELD */
A68_162  ESABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  FSABCTR;  /* clause result */
A68_165  GSABCTR;  /* OPERATORS - istruct -> vector */
A68_VC  ISABCTR;  /* avoid structure result */
A68_VC  KSABCTR;  /* avoid structure result */
A_PROC_ENTRY(initialise);
 /* line 442: */
{ 
XRABCTR_ctrl = (*(&((&A_VINDEX(NL(Controls),I))->Control)));
 /* line 443: */
 /* line 444: */
 /* line 445: */
YRABCTR = (JPMACTR_isarray((*(&A_VINDEX(NL(NLABCTR_modeofrows),I))))&(ZTMACTR_dimensions((*(&A_VINDEX(NL(NLABCTR_modeofrows),I))))>1));
if ( YRABCTR )
{ 
 /* line 446: */
DSABCTR = (*(&A_VINDEX(NL(FLABCTR_rows),I))) ;
BSABCTR.data[0] = A_UNITE(CSABCTR,mode2,2,DSABCTR);
 /* line 447: */
BSABCTR.data[1] = A_UNITE(ESABCTR,mode2,2,XRABCTR_ctrl);
 /* line 448: */
ROAAOSF_whole( ZTMACTR_dimensions((*(&A_VINDEX(NL(NLABCTR_modeofrows),I)))), 0, &ISABCTR );
NLQACTR_usemacro( A_VC_PLUS(A_VC_PLUS(HSABCTR,ISABCTR),JSABCTR), A_HISVEC(GSABCTR,BSABCTR,2,A68_162 ), &KSABCTR );
FSABCTR = KSABCTR;
} 
else
{ 
 /* line 449: */
FSABCTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(XRABCTR_ctrl,NSABCTR),(*(&A_VINDEX(NL(FLABCTR_rows),I)))),OSABCTR);
} 
} 
A_PROC_EXIT(initialise);
*ReturnedValue = (FSABCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  RSABCTR_increment(A68_INT  I, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((SSABCTR_increment *)NonLocals)->x)
{ 
A68_INT  TSABCTR_origmde;
A68_VC  USABCTR_ctrl;
A68_BOOL  VSABCTR;  /* optbool result */
A68_BOOL  WSABCTR;  /* clause result */
A68_VC  ZSABCTR;  /* clause result */
A68_BOOL  CTABCTR;  /* optbool result */
A68_VC  ETABCTR;  /* clause result */
A_PROC_ENTRY(increment);
 /* line 452: */
{ 
TSABCTR_origmde = (*(&A_VINDEX(NL(NLABCTR_modeofrows),I)));
 /* line 453: */
USABCTR_ctrl = (*(&((&A_VINDEX(NL(Controls),I))->Control)));
 /* line 454: */
 /* line 455: */
VSABCTR = JPMACTR_isarray(TSABCTR_origmde);
if ( VSABCTR )
{ /* line 456: */
VSABCTR = (ZTMACTR_dimensions(TSABCTR_origmde)>1);
}
WSABCTR = VSABCTR;
if ( WSABCTR )
{ 
 /* line 457: */
ZSABCTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(USABCTR_ctrl,ATABCTR),(*(&A_VINDEX(NL(FLABCTR_rows),I)))),BTABCTR);
} 
else
{ 
CTABCTR = ZOMACTR_isvector(TSABCTR_origmde);
if ( ! CTABCTR )
{ /* line 458: */
CTABCTR = GQMACTR_isistruct(TSABCTR_origmde);
}
 /* line 459: */
if ( CTABCTR )
{ 
ETABCTR = FTABCTR;
} 
else
{ 
 /* line 460: */
 /* line 461: */
ETABCTR = A_VC_PLUS(A_VC_PLUS(ITABCTR,(*(&A_VINDEX(NL(FLABCTR_rows),I)))),JTABCTR);
} 
ZSABCTR = A_VC_PLUS(USABCTR_ctrl,ETABCTR);
} 
} 
A_PROC_EXIT(increment);
*ReturnedValue = (ZSABCTR);
return;
} 
#undef NL

A_STATIC A68_64 * UAABCTR_assignment(A68_64 * SAABCTR_anonymous, A68_64  TAABCTR_anonymous)
{ 
A68_INT * VAABCTR;  /* YIELD */
A68_BITS * WAABCTR;  /* YIELD */
A68_64 * FBABCTR;  /* clause result */
{ 
VAABCTR = (&(SAABCTR_anonymous->Mode)) ;
(*VAABCTR) = TAABCTR_anonymous.Mode;
WAABCTR = (&(SAABCTR_anonymous->Info)) ;
(*WAABCTR) = TAABCTR_anonymous.Info;
ZAABCTR_assignment((&(SAABCTR_anonymous->Extra)), TAABCTR_anonymous.Extra);
FBABCTR = SAABCTR_anonymous;
} 
return( FBABCTR );
} 
#undef NL
 /* line 71: */
 /* line 73: */

A68_VOID  KBABCTR_for(A68_175 * Loop, A68_INT  Frobytcount, A68_71 ** Frobytlist)
{ 
A68_INT  LBABCTR_codestream;
A68_181  OBABCTR_evaluatetoorbypart;   /* proc value of non-global proc */
A68_185  PCABCTR_evaluatefrompart;   /* proc value of non-global proc */
A68_75  WCABCTR_setstep;   /* proc value of non-global proc */
A68_64 * BDABCTR_value;
A68_VC  CDABCTR;  /* avoid structure result */
A68_VC  DDABCTR_end;
A68_VC  EDABCTR;  /* avoid structure result */
A68_VC  FDABCTR_from;
A68_VC  GDABCTR;  /* clause result */
A68_VC  HDABCTR;  /* avoid structure result */
A68_68  KDABCTR;  /* avoid structure result */
A68_VC  LDABCTR;  /* OPERATORS - istruct -> vector */
A68_33  MDABCTR;  /* OPERATORS - istruct -> vector */
A68_VC  NDABCTR_loopcounter;
A68_188  ODABCTR;  /* collateral clause result */
A68_93  RDABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  SDABCTR;  /* YIELD */
A68_93  TDABCTR;  /* OPERATORS - mode -> union mode */
A68_93  WDABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  XDABCTR;  /* YIELD */
A68_93  YDABCTR;  /* OPERATORS - mode -> union mode */
A68_93  ZDABCTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  AEABCTR;  /* YIELD */
A68_93  BEABCTR;  /* OPERATORS - mode -> union mode */
A68_92  CEABCTR;  /* OPERATORS - istruct -> vector */
A68_LINT  DEABCTR_constantstep;
A68_190  EEABCTR;  /* collateral clause result */
A68_93  FEABCTR;  /* OPERATORS - mode -> union mode */
A68_93  IEABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  JEABCTR;  /* YIELD */
A68_93  KEABCTR;  /* OPERATORS - mode -> union mode */
A68_93  LEABCTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  MEABCTR;  /* YIELD */
A68_92  NEABCTR;  /* clause result */
A68_92  OEABCTR;  /* OPERATORS - istruct -> vector */
A68_190  PEABCTR;  /* collateral clause result */
A68_93  QEABCTR;  /* OPERATORS - mode -> union mode */
A68_93  TEABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  UEABCTR;  /* YIELD */
A68_93  VEABCTR;  /* OPERATORS - mode -> union mode */
A68_93  WEABCTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  XEABCTR;  /* YIELD */
A68_92  YEABCTR;  /* OPERATORS - istruct -> vector */
A68_93  BFABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  CFABCTR;  /* YIELD */
A68_92  DFABCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_93  EFABCTR;  /* OPERATORS - mode -> union mode */
A68_92  FFABCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_184  GFABCTR;  /* collateral clause result */
A68_93  HFABCTR;  /* OPERATORS - mode -> union mode */
A68_93  KFABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  LFABCTR;  /* YIELD */
A68_VC  MFABCTR;  /* avoid structure result */
A68_93  NFABCTR;  /* OPERATORS - mode -> union mode */
A68_93  QFABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  RFABCTR;  /* YIELD */
A68_93  SFABCTR;  /* OPERATORS - mode -> union mode */
A68_92  TFABCTR;  /* OPERATORS - istruct -> vector */
A68_VC  UFABCTR;  /* avoid structure result */
A68_VC  VFABCTR_step;
A68_192  WFABCTR;  /* collateral clause result */
A68_93  ZFABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  AGABCTR;  /* YIELD */
A68_93  BGABCTR;  /* OPERATORS - mode -> union mode */
A68_93  EGABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  FGABCTR;  /* YIELD */
A68_93  GGABCTR;  /* OPERATORS - mode -> union mode */
A68_93  JGABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  KGABCTR;  /* YIELD */
A68_93  LGABCTR;  /* OPERATORS - mode -> union mode */
A68_93  OGABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  PGABCTR;  /* YIELD */
A68_93  QGABCTR;  /* OPERATORS - mode -> union mode */
A68_92  RGABCTR;  /* OPERATORS - istruct -> vector */
A68_192  SGABCTR;  /* collateral clause result */
A68_93  VGABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  WGABCTR;  /* YIELD */
A68_93  XGABCTR;  /* OPERATORS - mode -> union mode */
A68_93  AHABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  BHABCTR;  /* YIELD */
A68_93  CHABCTR;  /* OPERATORS - mode -> union mode */
A68_93  FHABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  GHABCTR;  /* YIELD */
A68_93  HHABCTR;  /* OPERATORS - mode -> union mode */
A68_93  KHABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  LHABCTR;  /* YIELD */
A68_93  MHABCTR;  /* OPERATORS - mode -> union mode */
A68_92  NHABCTR;  /* OPERATORS - istruct -> vector */
A68_190  OHABCTR;  /* collateral clause result */
A68_93  RHABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  SHABCTR;  /* YIELD */
A68_93  THABCTR;  /* OPERATORS - mode -> union mode */
A68_93  WHABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  XHABCTR;  /* YIELD */
A68_93  YHABCTR;  /* OPERATORS - mode -> union mode */
A68_92  ZHABCTR;  /* OPERATORS - istruct -> vector */
A68_184  AIABCTR;  /* collateral clause result */
A68_93  BIABCTR;  /* OPERATORS - mode -> union mode */
A68_93  EIABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  FIABCTR;  /* YIELD */
A68_93  GIABCTR;  /* OPERATORS - mode -> union mode */
A68_93  JIABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  KIABCTR;  /* YIELD */
A68_93  LIABCTR;  /* OPERATORS - mode -> union mode */
A68_92  MIABCTR;  /* OPERATORS - istruct -> vector */
A68_VC  NIABCTR;  /* avoid structure result */
A68_VC  OIABCTR_from;
A68_VC  PIABCTR;  /* avoid structure result */
A68_VC  QIABCTR_loopcounter;
A68_188  RIABCTR;  /* collateral clause result */
A68_93  UIABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  VIABCTR;  /* YIELD */
A68_93  WIABCTR;  /* OPERATORS - mode -> union mode */
A68_93  ZIABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  AJABCTR;  /* YIELD */
A68_93  BJABCTR;  /* OPERATORS - mode -> union mode */
A68_93  EJABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  FJABCTR;  /* YIELD */
A68_93  GJABCTR;  /* OPERATORS - mode -> union mode */
A68_92  HJABCTR;  /* OPERATORS - istruct -> vector */
A68_184  IJABCTR;  /* collateral clause result */
A68_93  JJABCTR;  /* OPERATORS - mode -> union mode */
A68_93  MJABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  NJABCTR;  /* YIELD */
A68_VC  OJABCTR;  /* avoid structure result */
A68_93  PJABCTR;  /* OPERATORS - mode -> union mode */
A68_93  SJABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  TJABCTR;  /* YIELD */
A68_93  UJABCTR;  /* OPERATORS - mode -> union mode */
A68_92  VJABCTR;  /* OPERATORS - istruct -> vector */
A68_74  YJABCTR_voidresult;   /* proc value of non-global proc */
A68_196  IKABCTR;  /* collateral clause result */
A68_93  LKABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  MKABCTR;  /* YIELD */
A68_93  NKABCTR;  /* OPERATORS - mode -> union mode */
A68_92  OKABCTR;  /* OPERATORS - istruct -> vector */
A68_196  PKABCTR;  /* collateral clause result */
A68_93  SKABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  TKABCTR;  /* YIELD */
A68_93  UKABCTR;  /* OPERATORS - mode -> union mode */
A68_92  VKABCTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(for);
 /* line 81: */
 /* line 82: */
{ 
LBABCTR_codestream = WQLACTR_codestream(EQLACTR_currentlevel());
 /* line 84: */
A_CLOSURE( OBABCTR_evaluatetoorbypart, PBABCTR_evaluatetoorbypart, QBABCTR_evaluatetoorbypart );
(( QBABCTR_evaluatetoorbypart * ) ( OBABCTR_evaluatetoorbypart.nonlocals )) -> LBABCTR_codestream = LBABCTR_codestream;
 /* line 108: */
 /* line 113: */
 /* line 114: */
A_CLOSURE( PCABCTR_evaluatefrompart, QCABCTR_evaluatefrompart, RCABCTR_evaluatefrompart );
(( RCABCTR_evaluatefrompart * ) ( PCABCTR_evaluatefrompart.nonlocals )) -> Loop = Loop;
(( RCABCTR_evaluatefrompart * ) ( PCABCTR_evaluatefrompart.nonlocals )) -> Frobytlist = Frobytlist;
 /* line 125: */
 /* line 133: */
 /* line 134: */
A_CLOSURE( WCABCTR_setstep, XCABCTR_setstep, YCABCTR_setstep );
(( YCABCTR_setstep * ) ( WCABCTR_setstep.nonlocals )) -> Loop = Loop;
(( YCABCTR_setstep * ) ( WCABCTR_setstep.nonlocals )) -> Frobytlist = Frobytlist;
(( YCABCTR_setstep * ) ( WCABCTR_setstep.nonlocals )) -> OBABCTR_evaluatetoorbypart = OBABCTR_evaluatetoorbypart;
 /* line 146: */
 /* line 147: */
 /* line 159: */
if ( (*(&(Loop->Topart))) )
{ 
BDABCTR_value = (&((*Frobytlist)->Value));
 /* line 160: */
(*Frobytlist) = (*(&((*Frobytlist)->Rest)));
 /* line 161: */
A_CALLPROC(OBABCTR_evaluatetoorbypart,(BDABCTR_value, A68_TRUE),(BDABCTR_value, A68_TRUE,(OBABCTR_evaluatetoorbypart).nonlocals));
 /* line 162: */
PWPACTR_getcfragment( BDABCTR_value, &CDABCTR );
DDABCTR_end = CDABCTR;
 /* line 164: */
A_CALLPROC(WCABCTR_setstep,(),((WCABCTR_setstep).nonlocals));
 /* line 166: */
A_CALLPROC(PCABCTR_evaluatefrompart,( &EDABCTR),( &EDABCTR,(PCABCTR_evaluatefrompart).nonlocals));
FDABCTR_from = EDABCTR;
 /* line 168: */
 /* line 169: */
 /* line 170: */
 /* line 172: */
if ( (*(&(Loop->Forpart))) )
{ 
 /* line 174: */
PWPACTR_getcfragment( (*(&(Loop->Control))), &HDABCTR );
GDABCTR = HDABCTR;
} 
else
{ 
 /* line 175: */
 /* line 176: */
UIOACTR_declarectemporary( EFAACTR_intmode, JDABCTR, &KDABCTR );
MDABCTR = KDABCTR.Name ;
GDABCTR = A_HISVEC(LDABCTR,MDABCTR,7,A68_CHAR );
} 
NDABCTR_loopcounter = GDABCTR;
 /* line 178: */
 /* line 179: */
SDABCTR = QDABCTR ;
ODABCTR.data[0] = A_UNITE(RDABCTR,mode2,2,SDABCTR);
ODABCTR.data[1] = A_UNITE(TDABCTR,mode2,2,NDABCTR_loopcounter);
XDABCTR = VDABCTR ;
ODABCTR.data[2] = A_UNITE(WDABCTR,mode2,2,XDABCTR);
ODABCTR.data[3] = A_UNITE(YDABCTR,mode2,2,FDABCTR_from);
AEABCTR = ';' ;
ODABCTR.data[4] = A_UNITE(ZDABCTR,mode1,1,AEABCTR);
ODABCTR.data[5] = A_UNITE(BEABCTR,mode4,4,EIAACTR_cnewline);
 /* line 180: */
VBMACTR_writecstream(A_HISVEC(CEABCTR,ODABCTR,6,A68_93 ), LBABCTR_codestream);
 /* line 181: */
 /* line 182: */
 /* line 184: */
if ( UTPACTR_isconstant((*(&(Loop->Step)))) )
{ 
DEABCTR_constantstep = (A68_LINT )IVPACTR_getconstant((*(&(Loop->Step))));
 /* line 185: */
 /* line 186: */
 /* line 187: */
if ( (DEABCTR_constantstep>0) )
{ 
EEABCTR.data[0] = A_UNITE(FEABCTR,mode2,2,NDABCTR_loopcounter);
JEABCTR = HEABCTR ;
EEABCTR.data[1] = A_UNITE(IEABCTR,mode2,2,JEABCTR);
EEABCTR.data[2] = A_UNITE(KEABCTR,mode2,2,DDABCTR_end);
 /* line 188: */
MEABCTR = ';' ;
EEABCTR.data[3] = A_UNITE(LEABCTR,mode1,1,MEABCTR);
NEABCTR = A_HISVEC(OEABCTR,EEABCTR,4,A68_93 );
} 
else
{ 
 /* line 189: */
if ( (DEABCTR_constantstep<0) )
{ 
PEABCTR.data[0] = A_UNITE(QEABCTR,mode2,2,NDABCTR_loopcounter);
UEABCTR = SEABCTR ;
PEABCTR.data[1] = A_UNITE(TEABCTR,mode2,2,UEABCTR);
PEABCTR.data[2] = A_UNITE(VEABCTR,mode2,2,DDABCTR_end);
 /* line 190: */
 /* line 191: */
XEABCTR = ';' ;
PEABCTR.data[3] = A_UNITE(WEABCTR,mode1,1,XEABCTR);
NEABCTR = A_HISVEC(YEABCTR,PEABCTR,4,A68_93 );
} 
else
{ 
CFABCTR = AFABCTR ;
NEABCTR = A_HVEC(DFABCTR,A_UNITE(BFABCTR,mode2,2,CFABCTR),A68_93 );
} 
} 
 /* line 192: */
VBMACTR_writecstream(NEABCTR, LBABCTR_codestream);
 /* line 193: */
VBMACTR_writecstream(A_HVEC(FFABCTR,A_UNITE(EFABCTR,mode4,4,EIAACTR_cnewline),A68_93 ), LBABCTR_codestream);
 /* line 194: */
 /* line 195: */
GFABCTR.data[0] = A_UNITE(HFABCTR,mode2,2,NDABCTR_loopcounter);
LFABCTR = JFABCTR ;
GFABCTR.data[1] = A_UNITE(KFABCTR,mode2,2,LFABCTR);
PWPACTR_getcfragment( (*(&(Loop->Step))), &MFABCTR );
GFABCTR.data[2] = A_UNITE(NFABCTR,mode2,2,MFABCTR);
 /* line 196: */
RFABCTR = PFABCTR ;
GFABCTR.data[3] = A_UNITE(QFABCTR,mode2,2,RFABCTR);
GFABCTR.data[4] = A_UNITE(SFABCTR,mode4,4,EIAACTR_cnewline);
 /* line 197: */
 /* line 198: */
VBMACTR_writecstream(A_HISVEC(TFABCTR,GFABCTR,5,A68_93 ), LBABCTR_codestream);
} 
else
{ 
PWPACTR_getcfragment( (*(&(Loop->Step))), &UFABCTR );
VFABCTR_step = UFABCTR;
 /* line 199: */
 /* line 200: */
AGABCTR = YFABCTR ;
WFABCTR.data[0] = A_UNITE(ZFABCTR,mode2,2,AGABCTR);
WFABCTR.data[1] = A_UNITE(BGABCTR,mode2,2,VFABCTR_step);
 /* line 201: */
FGABCTR = DGABCTR ;
WFABCTR.data[2] = A_UNITE(EGABCTR,mode2,2,FGABCTR);
WFABCTR.data[3] = A_UNITE(GGABCTR,mode2,2,NDABCTR_loopcounter);
KGABCTR = IGABCTR ;
WFABCTR.data[4] = A_UNITE(JGABCTR,mode2,2,KGABCTR);
WFABCTR.data[5] = A_UNITE(LGABCTR,mode2,2,DDABCTR_end);
 /* line 202: */
PGABCTR = NGABCTR ;
WFABCTR.data[6] = A_UNITE(OGABCTR,mode2,2,PGABCTR);
WFABCTR.data[7] = A_UNITE(QGABCTR,mode4,4,EIAACTR_cnewline);
 /* line 203: */
VBMACTR_writecstream(A_HISVEC(RGABCTR,WFABCTR,8,A68_93 ), LBABCTR_codestream);
 /* line 204: */
 /* line 205: */
WGABCTR = UGABCTR ;
SGABCTR.data[0] = A_UNITE(VGABCTR,mode2,2,WGABCTR);
SGABCTR.data[1] = A_UNITE(XGABCTR,mode2,2,VFABCTR_step);
 /* line 206: */
BHABCTR = ZGABCTR ;
SGABCTR.data[2] = A_UNITE(AHABCTR,mode2,2,BHABCTR);
SGABCTR.data[3] = A_UNITE(CHABCTR,mode2,2,NDABCTR_loopcounter);
GHABCTR = EHABCTR ;
SGABCTR.data[4] = A_UNITE(FHABCTR,mode2,2,GHABCTR);
SGABCTR.data[5] = A_UNITE(HHABCTR,mode2,2,DDABCTR_end);
 /* line 207: */
LHABCTR = JHABCTR ;
SGABCTR.data[6] = A_UNITE(KHABCTR,mode2,2,LHABCTR);
SGABCTR.data[7] = A_UNITE(MHABCTR,mode4,4,EIAACTR_cnewline);
 /* line 208: */
VBMACTR_writecstream(A_HISVEC(NHABCTR,SGABCTR,8,A68_93 ), LBABCTR_codestream);
 /* line 209: */
 /* line 210: */
SHABCTR = QHABCTR ;
OHABCTR.data[0] = A_UNITE(RHABCTR,mode2,2,SHABCTR);
OHABCTR.data[1] = A_UNITE(THABCTR,mode2,2,VFABCTR_step);
XHABCTR = VHABCTR ;
OHABCTR.data[2] = A_UNITE(WHABCTR,mode2,2,XHABCTR);
OHABCTR.data[3] = A_UNITE(YHABCTR,mode4,4,EIAACTR_cnewline);
 /* line 211: */
VBMACTR_writecstream(A_HISVEC(ZHABCTR,OHABCTR,4,A68_93 ), LBABCTR_codestream);
 /* line 212: */
 /* line 213: */
AIABCTR.data[0] = A_UNITE(BIABCTR,mode2,2,NDABCTR_loopcounter);
FIABCTR = DIABCTR ;
AIABCTR.data[1] = A_UNITE(EIABCTR,mode2,2,FIABCTR);
AIABCTR.data[2] = A_UNITE(GIABCTR,mode2,2,VFABCTR_step);
KIABCTR = IIABCTR ;
AIABCTR.data[3] = A_UNITE(JIABCTR,mode2,2,KIABCTR);
AIABCTR.data[4] = A_UNITE(LIABCTR,mode4,4,EIAACTR_cnewline);
 /* line 214: */
 /* line 215: */
 /* line 216: */
 /* line 220: */
VBMACTR_writecstream(A_HISVEC(MIABCTR,AIABCTR,5,A68_93 ), LBABCTR_codestream);
} 
} 
else
{ 
 /* line 221: */
 /* line 227: */
if ( (*(&(Loop->Forpart))) )
{ 
A_CALLPROC(WCABCTR_setstep,(),((WCABCTR_setstep).nonlocals));
 /* line 228: */
A_CALLPROC(PCABCTR_evaluatefrompart,( &NIABCTR),( &NIABCTR,(PCABCTR_evaluatefrompart).nonlocals));
OIABCTR_from = NIABCTR;
 /* line 229: */
PWPACTR_getcfragment( (*(&(Loop->Control))), &PIABCTR );
QIABCTR_loopcounter = PIABCTR;
 /* line 230: */
 /* line 231: */
VIABCTR = TIABCTR ;
RIABCTR.data[0] = A_UNITE(UIABCTR,mode2,2,VIABCTR);
RIABCTR.data[1] = A_UNITE(WIABCTR,mode2,2,QIABCTR_loopcounter);
AJABCTR = YIABCTR ;
RIABCTR.data[2] = A_UNITE(ZIABCTR,mode2,2,AJABCTR);
RIABCTR.data[3] = A_UNITE(BJABCTR,mode2,2,OIABCTR_from);
FJABCTR = DJABCTR ;
RIABCTR.data[4] = A_UNITE(EJABCTR,mode2,2,FJABCTR);
RIABCTR.data[5] = A_UNITE(GJABCTR,mode4,4,EIAACTR_cnewline);
 /* line 232: */
VBMACTR_writecstream(A_HISVEC(HJABCTR,RIABCTR,6,A68_93 ), LBABCTR_codestream);
 /* line 233: */
 /* line 234: */
IJABCTR.data[0] = A_UNITE(JJABCTR,mode2,2,QIABCTR_loopcounter);
 /* line 235: */
NJABCTR = LJABCTR ;
IJABCTR.data[1] = A_UNITE(MJABCTR,mode2,2,NJABCTR);
PWPACTR_getcfragment( (*(&(Loop->Step))), &OJABCTR );
IJABCTR.data[2] = A_UNITE(PJABCTR,mode2,2,OJABCTR);
TJABCTR = RJABCTR ;
IJABCTR.data[3] = A_UNITE(SJABCTR,mode2,2,TJABCTR);
IJABCTR.data[4] = A_UNITE(UJABCTR,mode4,4,EIAACTR_cnewline);
 /* line 236: */
 /* line 237: */
 /* line 238: */
VBMACTR_writecstream(A_HISVEC(VJABCTR,IJABCTR,5,A68_93 ), LBABCTR_codestream);
} 
else
{ 
A_CLOSURE( YJABCTR_voidresult, ZJABCTR_voidresult, AKABCTR_voidresult );
(( AKABCTR_voidresult * ) ( YJABCTR_voidresult.nonlocals )) -> LBABCTR_codestream = LBABCTR_codestream;
 /* line 257: */
 /* line 258: */
 /* line 259: */
if ( (Frobytcount>0) )
{ 
A_CALLPROC(YJABCTR_voidresult,((&((*Frobytlist)->Value))),((&((*Frobytlist)->Value)),(YJABCTR_voidresult).nonlocals));
 /* line 260: */
 /* line 261: */
 /* line 262: */
if ( (Frobytcount>1) )
{ 
 /* line 263: */
 /* line 264: */
A_CALLPROC(YJABCTR_voidresult,((&((*(&((*Frobytlist)->Rest)))->Value))),((&((*(&((*Frobytlist)->Rest)))->Value)),(YJABCTR_voidresult).nonlocals));
} 
} 
 /* line 266: */
MKABCTR = KKABCTR ;
IKABCTR.data[0] = A_UNITE(LKABCTR,mode2,2,MKABCTR);
IKABCTR.data[1] = A_UNITE(NKABCTR,mode4,4,EIAACTR_cnewline);
 /* line 267: */
 /* line 268: */
VBMACTR_writecstream(A_HISVEC(OKABCTR,IKABCTR,2,A68_93 ), LBABCTR_codestream);
} 
} 
 /* line 270: */
TKABCTR = RKABCTR ;
PKABCTR.data[0] = A_UNITE(SKABCTR,mode2,2,TKABCTR);
PKABCTR.data[1] = A_UNITE(UKABCTR,mode4,4,EIAACTR_cnewline);
 /* line 271: */
VBMACTR_writecstream(A_HISVEC(VKABCTR,PKABCTR,2,A68_93 ), LBABCTR_codestream);
} 
A_PROC_EXIT(for);
return;
} 
#undef NL
 /* line 276: */

A68_VOID  YKABCTR_forall(A68_197  Controls, A68_71 ** Foralllist)
{ 
A68_200  ALABCTR_generator;   /* proc value of non-global proc */
A68_199  GLABCTR;  /* avoid structure result */
A68_199  FLABCTR_rows;
A68_201  ILABCTR_generator;   /* proc value of non-global proc */
A68_123  OLABCTR;  /* avoid structure result */
A68_123  NLABCTR_modeofrows;
A68_INT  PLABCTR_codestream;
A68_INT * QLABCTR_modeofrow;
A68_176 * RLABCTR_control;
A68_VC * SLABCTR_row;
A68_INT  TLABCTR;  /* forall loop counter */
A68_64 * ULABCTR_rowvalue;
A68_INT  VLABCTR_elemmode;
A68_BOOL  WLABCTR;  /* optbool result */
A68_VC  XLABCTR;  /* clause result */
A68_VC  YLABCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  ZLABCTR;  /* avoid structure result */
A68_VC  AMABCTR;  /* avoid structure result */
A68_VC  BMABCTR;  /* avoid structure result */
A68_64 * EMABCTR_temp;
A68_BOOL  FMABCTR;  /* optbool result */
A68_VC  GMABCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  HMABCTR;  /* avoid structure result */
A68_VC  IMABCTR;  /* avoid structure result */
A68_VC  JMABCTR;  /* avoid structure result */
A68_VC  KMABCTR_rowname;
A68_31  MMABCTR_generator;   /* proc value of non-global proc */
A68_VC  RMABCTR;  /* avoid structure result */
A68_BOOL  SMABCTR_originalhasrefs;
A68_BOOL * TMABCTR;  /* YIELD */
A68_VC  UMABCTR;  /* avoid structure result */
A68_VC  VMABCTR_controlname;
A68_31  XMABCTR_generator;   /* proc value of non-global proc */
A68_VC  CNABCTR;  /* clause result */
A68_VC  DNABCTR;  /* avoid structure result */
A68_VC * ENABCTR;  /* YIELD */
A68_INT  FNABCTR_forallmode;
A68_BOOL  GNABCTR;  /* optbool result */
A68_BOOL  HNABCTR;  /* optbool result */
A68_INT  INABCTR_controlmode;
A68_BOOL * JNABCTR;  /* YIELD */
A68_68  MNABCTR;  /* avoid structure result */
A68_VC  NNABCTR;  /* OPERATORS - istruct -> vector */
A68_33  ONABCTR;  /* OPERATORS - istruct -> vector */
A68_VC  PNABCTR_controlname;
A68_31  RNABCTR_generator;   /* proc value of non-global proc */
A68_VC  WNABCTR;  /* clause result */
A68_VC  XNABCTR;  /* avoid structure result */
A68_VC * YNABCTR;  /* YIELD */
A68_BOOL * ZNABCTR;  /* YIELD */
A68_VC  AOABCTR;  /* avoid structure result */
A68_VC  BOABCTR_controlname;
A68_31  DOABCTR_generator;   /* proc value of non-global proc */
A68_VC  IOABCTR;  /* clause result */
A68_VC  JOABCTR;  /* avoid structure result */
A68_VC * KOABCTR;  /* YIELD */
A68_BOOL  LOABCTR;  /* optbool result */
A68_INT  MOABCTR;  /* clause result */
A68_INT  NOABCTR_controlmode;
A68_BOOL * OOABCTR;  /* YIELD */
A68_68  ROABCTR;  /* avoid structure result */
A68_VC  SOABCTR;  /* OPERATORS - istruct -> vector */
A68_33  TOABCTR;  /* OPERATORS - istruct -> vector */
A68_VC  UOABCTR_controlname;
A68_31  WOABCTR_generator;   /* proc value of non-global proc */
A68_VC  BPABCTR;  /* clause result */
A68_VC  CPABCTR;  /* avoid structure result */
A68_VC * DPABCTR;  /* YIELD */
A68_68  GPABCTR;  /* avoid structure result */
A68_VC  HPABCTR;  /* OPERATORS - istruct -> vector */
A68_33  IPABCTR;  /* OPERATORS - istruct -> vector */
A68_VC  JPABCTR_loopcounter;
A68_194  KPABCTR;  /* collateral clause result */
A68_INT  MPABCTR;  /* YIELD */
A68_VC  NPABCTR;  /* clause result */
A68_INT  OPABCTR;  /* YIELD */
A68_VC  PPABCTR;  /* avoid structure result */
A68_INT  QPABCTR;  /* YIELD */
A68_INT  SPABCTR;  /* YIELD */
A68_INT  XPABCTR;  /* YIELD */
A68_INT  AQABCTR;  /* YIELD */
A68_93  DQABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  EQABCTR;  /* YIELD */
A68_93  FQABCTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  GQABCTR;  /* YIELD */
A68_93  HQABCTR;  /* OPERATORS - mode -> union mode */
A68_92  IQABCTR;  /* OPERATORS - istruct -> vector */
A68_INT  JQABCTR_i;
A68_INT  KQABCTR;  /* to part of loop */
A68_VC  LQABCTR_row;
A68_194  MQABCTR;  /* collateral clause result */
A68_VC  PQABCTR;  /* clause result */
A68_VC  QQABCTR;  /* avoid structure result */
A68_93  BRABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  CRABCTR;  /* YIELD */
A68_93  FRABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  GRABCTR;  /* YIELD */
A68_93  HRABCTR;  /* OPERATORS - mode -> union mode */
A68_92  IRABCTR;  /* OPERATORS - istruct -> vector */
A68_196  JRABCTR;  /* collateral clause result */
A68_VC  NRABCTR;  /* avoid structure result */
A68_93  PRABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  QRABCTR;  /* YIELD */
A68_93  RRABCTR;  /* OPERATORS - mode -> union mode */
A68_92  SRABCTR;  /* OPERATORS - istruct -> vector */
A68_53  URABCTR_initialise;   /* proc value of non-global proc */
A68_53  QSABCTR_increment;   /* proc value of non-global proc */
A68_INT  KTABCTR_i;
A68_INT  LTABCTR;  /* to part of loop */
A68_194  MTABCTR;  /* collateral clause result */
A68_VC  NTABCTR;  /* avoid structure result */
A68_93  OTABCTR;  /* OPERATORS - mode -> union mode */
A68_93  PTABCTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  QTABCTR;  /* YIELD */
A68_93  RTABCTR;  /* OPERATORS - mode -> union mode */
A68_92  STABCTR;  /* OPERATORS - istruct -> vector */
A68_210  TTABCTR;  /* collateral clause result */
A68_93  WTABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  XTABCTR;  /* YIELD */
A68_93  YTABCTR;  /* OPERATORS - mode -> union mode */
A68_93  BUABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  CUABCTR;  /* YIELD */
A68_93  DUABCTR;  /* OPERATORS - mode -> union mode */
A68_93  EUABCTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  FUABCTR;  /* YIELD */
A68_VC  GUABCTR;  /* avoid structure result */
A68_93  HUABCTR;  /* OPERATORS - mode -> union mode */
A68_93  IUABCTR;  /* OPERATORS - mode -> union mode */
A68_92  JUABCTR;  /* OPERATORS - istruct -> vector */
A68_INT  KUABCTR_i;
A68_INT  LUABCTR;  /* to part of loop */
A68_194  MUABCTR;  /* collateral clause result */
A68_93  NUABCTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  OUABCTR;  /* YIELD */
A68_VC  PUABCTR;  /* avoid structure result */
A68_93  QUABCTR;  /* OPERATORS - mode -> union mode */
A68_93  RUABCTR;  /* OPERATORS - mode -> union mode */
A68_92  SUABCTR;  /* OPERATORS - istruct -> vector */
A68_190  TUABCTR;  /* collateral clause result */
A68_93  WUABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  XUABCTR;  /* YIELD */
A68_93  YUABCTR;  /* OPERATORS - mode -> union mode */
A68_93  ZUABCTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  AVABCTR;  /* YIELD */
A68_93  BVABCTR;  /* OPERATORS - mode -> union mode */
A68_92  CVABCTR;  /* OPERATORS - istruct -> vector */
A68_176 * DVABCTR_control;
A68_INT  EVABCTR;  /* forall loop counter */
A68_184  FVABCTR;  /* collateral clause result */
A68_VC  GVABCTR;  /* avoid structure result */
A68_93  HVABCTR;  /* OPERATORS - mode -> union mode */
A68_93  KVABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  LVABCTR;  /* YIELD */
A68_93  MVABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  NVABCTR;  /* YIELD */
A68_93  OVABCTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  PVABCTR;  /* YIELD */
A68_93  QVABCTR;  /* OPERATORS - mode -> union mode */
A68_92  RVABCTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(forall);
 /* line 284: */
 /* line 285: */
{ 
A_CLOSURE( ALABCTR_generator, BLABCTR_generator, CLABCTR_generator );
(( CLABCTR_generator * ) ( ALABCTR_generator.nonlocals )) -> Controls = Controls;
A_CALLPROC(ALABCTR_generator,(A68_TRUE, &GLABCTR),(A68_TRUE, &GLABCTR,(ALABCTR_generator).nonlocals));
FLABCTR_rows = GLABCTR;
 /* line 286: */
A_CLOSURE( ILABCTR_generator, JLABCTR_generator, KLABCTR_generator );
(( KLABCTR_generator * ) ( ILABCTR_generator.nonlocals )) -> Controls = Controls;
A_CALLPROC(ILABCTR_generator,(A68_TRUE, &OLABCTR),(A68_TRUE, &OLABCTR,(ILABCTR_generator).nonlocals));
NLABCTR_modeofrows = OLABCTR;
 /* line 287: */
PLABCTR_codestream = WQLACTR_codestream(EQLACTR_currentlevel());
 /* line 291: */
 /* line 293: */
TLABCTR = NLABCTR_modeofrows.upb -1;
if ( TLABCTR != Controls.upb -1 )
{ A_ERROR( "mismatched bounds in FORALL; row no 2"); }
if ( TLABCTR != FLABCTR_rows.upb -1 )
{ A_ERROR( "mismatched bounds in FORALL; row no 3"); }
QLABCTR_modeofrow = NLABCTR_modeofrows.data;
RLABCTR_control = Controls.data;
SLABCTR_row = FLABCTR_rows.data;
for (;TLABCTR-- >= 0;
(QLABCTR_modeofrow++
,RLABCTR_control++
,SLABCTR_row++
) )
{
 /* line 294: */
ULABCTR_rowvalue = (&((*Foralllist)->Value));
 /* line 295: */
(*Foralllist) = (*(&((*Foralllist)->Rest)));
 /* line 296: */
A_CALLPROC(WUQACTR_evaluate,(ULABCTR_rowvalue),(ULABCTR_rowvalue,(WUQACTR_evaluate).nonlocals));
 /* line 297: */
(*QLABCTR_modeofrow) = (*(&(ULABCTR_rowvalue->Mode)));
 /* line 298: */
VLABCTR_elemmode = A_CALLPROC(DUMACTR_elementmode,((*QLABCTR_modeofrow)),((*QLABCTR_modeofrow),(DUMACTR_elementmode).nonlocals));
 /* line 305: */
 /* line 306: */
 /* line 307: */
 /* line 308: */
if ( NUPACTR_isident(ULABCTR_rowvalue) )
{ 
 /* line 309: */
WLABCTR = ARMACTR_hasrefs((*QLABCTR_modeofrow));
if ( WLABCTR )
{ /* line 310: */
WLABCTR = TPMACTR_isflexarray((*QLABCTR_modeofrow));
}
if ( WLABCTR )
{ 
 /* line 311: */
 /* line 312: */
PWPACTR_getcfragment( ULABCTR_rowvalue, &ZLABCTR );
JIAACTR_bracket( A_VC_PLUS(A_HVEC(YLABCTR,'*',A68_CHAR ),ZLABCTR), &AMABCTR );
XLABCTR = AMABCTR;
} 
else
{ 
 /* line 313: */
 /* line 314: */
PWPACTR_getcfragment( ULABCTR_rowvalue, &BMABCTR );
XLABCTR = BMABCTR;
} 
} 
else
{ 
EMABCTR_temp = ENQACTR_yield(DMABCTR, ULABCTR_rowvalue);
 /* line 316: */
 /* line 317: */
FMABCTR = VMMACTR_hasoneref((*QLABCTR_modeofrow));
if ( FMABCTR )
{ /* line 318: */
FMABCTR = TPMACTR_isflexarray((*QLABCTR_modeofrow));
}
 /* line 319: */
if ( FMABCTR )
{ 
 /* line 320: */
 /* line 321: */
PWPACTR_getcfragment( EMABCTR_temp, &HMABCTR );
JIAACTR_bracket( A_VC_PLUS(A_HVEC(GMABCTR,'*',A68_CHAR ),HMABCTR), &IMABCTR );
XLABCTR = IMABCTR;
} 
else
{ 
 /* line 322: */
PWPACTR_getcfragment( EMABCTR_temp, &JMABCTR );
XLABCTR = JMABCTR;
} 
} 
KMABCTR_rowname = XLABCTR;
 /* line 323: */
A_CLOSURE( MMABCTR_generator, NMABCTR_generator, OMABCTR_generator );
(( OMABCTR_generator * ) ( MMABCTR_generator.nonlocals )) -> KMABCTR_rowname = KMABCTR_rowname;
A_CALLPROC(MMABCTR_generator,(A68_TRUE, &RMABCTR),(A68_TRUE, &RMABCTR,(MMABCTR_generator).nonlocals));
A_VASSIGN2(KMABCTR_rowname,RMABCTR,A68_CHAR ) ;
(*SLABCTR_row) = RMABCTR;
 /* line 325: */
SMABCTR_originalhasrefs = ARMACTR_hasrefs((*QLABCTR_modeofrow));
 /* line 327: */
 /* line 328: */
 /* line 329: */
 /* line 335: */
if ( (JPMACTR_isarray((*QLABCTR_modeofrow))&(ZTMACTR_dimensions((*QLABCTR_modeofrow))>1)) )
{ 
TMABCTR = (&(RLABCTR_control->Needstemp)) ;
(*TMABCTR) = A68_FALSE;
 /* line 336: */
 /* line 337: */
 /* line 338: */
{ 
PWPACTR_getcfragment( (&(RLABCTR_control->Ident)), &UMABCTR );
VMABCTR_controlname = UMABCTR;
 /* line 339: */
A_CLOSURE( XMABCTR_generator, YMABCTR_generator, ZMABCTR_generator );
(( ZMABCTR_generator * ) ( XMABCTR_generator.nonlocals )) -> VMABCTR_controlname = VMABCTR_controlname;
 /* line 340: */
 /* line 342: */
A_CALLPROC(XMABCTR_generator,(A68_TRUE, &DNABCTR),(A68_TRUE, &DNABCTR,(XMABCTR_generator).nonlocals));
A_VASSIGN2(VMABCTR_controlname,DNABCTR,A68_CHAR ) ;
CNABCTR = DNABCTR;
} 
 /* line 343: */
ENABCTR = (&(RLABCTR_control->Control)) ;
(*ENABCTR) = CNABCTR;
} 
else
{ 
 /* line 353: */
if ( SMABCTR_originalhasrefs )
{ 
FNABCTR_forallmode = (*(&((&(RLABCTR_control->Ident))->Mode)));
 /* line 355: */
 /* line 356: */
GNABCTR = OPMACTR_isfirmarray(VLABCTR_elemmode);
if ( GNABCTR )
{GNABCTR = (VLABCTR_elemmode<VFAACTR_refmark);
}
 /* line 357: */
if ( GNABCTR )
{ /* line 359: */
HNABCTR = TPMACTR_isflexarray(FNABCTR_forallmode);
if ( HNABCTR )
{HNABCTR = VMMACTR_hasoneref(FNABCTR_forallmode);
}
 /* line 360: */
GNABCTR = !HNABCTR;
}
 /* line 361: */
if ( GNABCTR )
{ 
INABCTR_controlmode = ((VLABCTR_elemmode+VFAACTR_refmark)+VFAACTR_refmark);
 /* line 362: */
JNABCTR = (&(RLABCTR_control->Needstemp)) ;
(*JNABCTR) = A68_TRUE;
 /* line 363: */
 /* line 364: */
 /* line 366: */
{ 
UIOACTR_declarectemporary( INABCTR_controlmode, LNABCTR, &MNABCTR );
ONABCTR = MNABCTR.Name ;
PNABCTR_controlname = A_HISVEC(NNABCTR,ONABCTR,7,A68_CHAR );
 /* line 367: */
A_CLOSURE( RNABCTR_generator, SNABCTR_generator, TNABCTR_generator );
(( TNABCTR_generator * ) ( RNABCTR_generator.nonlocals )) -> PNABCTR_controlname = PNABCTR_controlname;
 /* line 368: */
 /* line 369: */
A_CALLPROC(RNABCTR_generator,(A68_TRUE, &XNABCTR),(A68_TRUE, &XNABCTR,(RNABCTR_generator).nonlocals));
A_VASSIGN2(PNABCTR_controlname,XNABCTR,A68_CHAR ) ;
WNABCTR = XNABCTR;
} 
 /* line 370: */
YNABCTR = (&(RLABCTR_control->Control)) ;
(*YNABCTR) = WNABCTR;
} 
else
{ 
ZNABCTR = (&(RLABCTR_control->Needstemp)) ;
(*ZNABCTR) = A68_FALSE;
 /* line 371: */
 /* line 372: */
 /* line 373: */
{ 
PWPACTR_getcfragment( (&(RLABCTR_control->Ident)), &AOABCTR );
BOABCTR_controlname = AOABCTR;
 /* line 374: */
A_CLOSURE( DOABCTR_generator, EOABCTR_generator, FOABCTR_generator );
(( FOABCTR_generator * ) ( DOABCTR_generator.nonlocals )) -> BOABCTR_controlname = BOABCTR_controlname;
 /* line 375: */
 /* line 376: */
A_CALLPROC(DOABCTR_generator,(A68_TRUE, &JOABCTR),(A68_TRUE, &JOABCTR,(DOABCTR_generator).nonlocals));
A_VASSIGN2(BOABCTR_controlname,JOABCTR,A68_CHAR ) ;
IOABCTR = JOABCTR;
} 
 /* line 377: */
 /* line 383: */
KOABCTR = (&(RLABCTR_control->Control)) ;
(*KOABCTR) = IOABCTR;
} 
} 
else
{ 
 /* line 384: */
 /* line 385: */
LOABCTR = OPMACTR_isfirmarray(VLABCTR_elemmode);
if ( LOABCTR )
{ /* line 386: */
LOABCTR = !ARMACTR_hasrefs(VLABCTR_elemmode);
}
if ( LOABCTR )
{ 
 /* line 388: */
 /* line 390: */
MOABCTR = (VFAACTR_refmark+VFAACTR_refmark);
} 
else
{ 
MOABCTR = VFAACTR_refmark;
} 
NOABCTR_controlmode = (VLABCTR_elemmode+MOABCTR);
 /* line 392: */
OOABCTR = (&(RLABCTR_control->Needstemp)) ;
(*OOABCTR) = A68_TRUE;
 /* line 393: */
 /* line 394: */
 /* line 396: */
{ 
UIOACTR_declarectemporary( NOABCTR_controlmode, QOABCTR, &ROABCTR );
TOABCTR = ROABCTR.Name ;
UOABCTR_controlname = A_HISVEC(SOABCTR,TOABCTR,7,A68_CHAR );
 /* line 397: */
A_CLOSURE( WOABCTR_generator, XOABCTR_generator, YOABCTR_generator );
(( YOABCTR_generator * ) ( WOABCTR_generator.nonlocals )) -> UOABCTR_controlname = UOABCTR_controlname;
 /* line 398: */
 /* line 399: */
A_CALLPROC(WOABCTR_generator,(A68_TRUE, &CPABCTR),(A68_TRUE, &CPABCTR,(WOABCTR_generator).nonlocals));
A_VASSIGN2(UOABCTR_controlname,CPABCTR,A68_CHAR ) ;
BPABCTR = CPABCTR;
} 
 /* line 400: */
DPABCTR = (&(RLABCTR_control->Control)) ;
(*DPABCTR) = BPABCTR;
} 
} 
}
 /* line 404: */
 /* line 405: */
UIOACTR_declarectemporary( EFAACTR_intmode, FPABCTR, &GPABCTR );
IPABCTR = GPABCTR.Name ;
JPABCTR_loopcounter = A_HISVEC(HPABCTR,IPABCTR,7,A68_CHAR );
 /* line 407: */
 /* line 408: */
 /* line 409: */
 /* line 410: */
MPABCTR = 1 ;
if ( GQMACTR_isistruct((*(&A_VINDEX(NLABCTR_modeofrows,MPABCTR)))) )
{ 
 /* line 411: */
OPABCTR = 1 ;
ROAAOSF_whole( A_CALLPROC(FUMACTR_istructlength,((*(&A_VINDEX(NLABCTR_modeofrows,OPABCTR)))),((*(&A_VINDEX(NLABCTR_modeofrows,OPABCTR))),(FUMACTR_istructlength).nonlocals)), 0, &PPABCTR );
NPABCTR = PPABCTR;
} 
else
{ 
 /* line 412: */
QPABCTR = 1 ;
if ( ZOMACTR_isvector((*(&A_VINDEX(NLABCTR_modeofrows,QPABCTR)))) )
{ 
 /* line 413: */
SPABCTR = 1 ;
NPABCTR = A_VC_PLUS((*(&A_VINDEX(FLABCTR_rows,SPABCTR))),TPABCTR);
} 
else
{ 
 /* line 414: */
XPABCTR = 1 ;
AQABCTR = 1 ;
NPABCTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS((*(&A_VINDEX(FLABCTR_rows,XPABCTR))),YPABCTR),ZPABCTR),(*(&A_VINDEX(FLABCTR_rows,AQABCTR)))),BQABCTR);
} 
} 
EQABCTR = A_VC_PLUS(A_VC_PLUS(JPABCTR_loopcounter,CQABCTR),NPABCTR) ;
KPABCTR.data[0] = A_UNITE(DQABCTR,mode2,2,EQABCTR);
GQABCTR = ';' ;
KPABCTR.data[1] = A_UNITE(FQABCTR,mode1,1,GQABCTR);
KPABCTR.data[2] = A_UNITE(HQABCTR,mode4,4,EIAACTR_cnewline);
 /* line 416: */
VBMACTR_writecstream(A_HISVEC(IQABCTR,KPABCTR,3,A68_93 ), PLABCTR_codestream);
 /* line 421: */
 /* line 422: */
KQABCTR = FLABCTR_rows.upb;
for ( JQABCTR_i = 2;
JQABCTR_i <= KQABCTR;
JQABCTR_i += 1 )
{ 
 /* line 423: */
LQABCTR_row = (*(&A_VINDEX(FLABCTR_rows,JQABCTR_i)));
 /* line 424: */
 /* line 425: */
 /* line 426: */
 /* line 427: */
if ( GQMACTR_isistruct((*(&A_VINDEX(NLABCTR_modeofrows,JQABCTR_i)))) )
{ 
 /* line 428: */
ROAAOSF_whole( A_CALLPROC(FUMACTR_istructlength,((*(&A_VINDEX(NLABCTR_modeofrows,JQABCTR_i)))),((*(&A_VINDEX(NLABCTR_modeofrows,JQABCTR_i))),(FUMACTR_istructlength).nonlocals)), 0, &QQABCTR );
PQABCTR = QQABCTR;
} 
else
{ 
 /* line 429: */
if ( ZOMACTR_isvector((*(&A_VINDEX(NLABCTR_modeofrows,JQABCTR_i)))) )
{ 
 /* line 430: */
PQABCTR = A_VC_PLUS(LQABCTR_row,SQABCTR);
} 
else
{ 
 /* line 431: */
PQABCTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(LQABCTR_row,WQABCTR),XQABCTR),LQABCTR_row),YQABCTR);
} 
} 
CRABCTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(ZQABCTR,JPABCTR_loopcounter),ARABCTR),PQABCTR) ;
MQABCTR.data[0] = A_UNITE(BRABCTR,mode2,2,CRABCTR);
GRABCTR = ERABCTR ;
MQABCTR.data[1] = A_UNITE(FRABCTR,mode2,2,GRABCTR);
MQABCTR.data[2] = A_UNITE(HRABCTR,mode4,4,EIAACTR_cnewline);
 /* line 433: */
VBMACTR_writecstream(A_HISVEC(IRABCTR,MQABCTR,3,A68_93 ), PLABCTR_codestream);
 /* line 434: */
 /* line 435: */
 /* line 436: */
ROAAOSF_whole( JQABCTR_i, 0, &NRABCTR );
QRABCTR = A_VC_PLUS(A_VC_PLUS(MRABCTR,NRABCTR),ORABCTR) ;
JRABCTR.data[0] = A_UNITE(PRABCTR,mode2,2,QRABCTR);
JRABCTR.data[1] = A_UNITE(RRABCTR,mode4,4,EIAACTR_cnewline);
 /* line 437: */
 /* line 438: */
VBMACTR_writecstream(A_HISVEC(SRABCTR,JRABCTR,2,A68_93 ), PLABCTR_codestream);
}
 /* line 441: */
A_CLOSURE( URABCTR_initialise, VRABCTR_initialise, WRABCTR_initialise );
(( WRABCTR_initialise * ) ( URABCTR_initialise.nonlocals )) -> Controls = Controls;
(( WRABCTR_initialise * ) ( URABCTR_initialise.nonlocals )) -> NLABCTR_modeofrows = NLABCTR_modeofrows;
(( WRABCTR_initialise * ) ( URABCTR_initialise.nonlocals )) -> FLABCTR_rows = FLABCTR_rows;
 /* line 451: */
A_CLOSURE( QSABCTR_increment, RSABCTR_increment, SSABCTR_increment );
(( SSABCTR_increment * ) ( QSABCTR_increment.nonlocals )) -> NLABCTR_modeofrows = NLABCTR_modeofrows;
(( SSABCTR_increment * ) ( QSABCTR_increment.nonlocals )) -> Controls = Controls;
(( SSABCTR_increment * ) ( QSABCTR_increment.nonlocals )) -> FLABCTR_rows = FLABCTR_rows;
 /* line 464: */
 /* line 465: */
LTABCTR = Controls.upb;
for ( KTABCTR_i = 1;
KTABCTR_i <= LTABCTR;
KTABCTR_i += 1 )
{ 
 /* line 466: */
A_CALLPROC(URABCTR_initialise,(KTABCTR_i, &NTABCTR),(KTABCTR_i, &NTABCTR,(URABCTR_initialise).nonlocals));
MTABCTR.data[0] = A_UNITE(OTABCTR,mode2,2,NTABCTR);
QTABCTR = ';' ;
MTABCTR.data[1] = A_UNITE(PTABCTR,mode1,1,QTABCTR);
MTABCTR.data[2] = A_UNITE(RTABCTR,mode4,4,EIAACTR_cnewline);
 /* line 467: */
VBMACTR_writecstream(A_HISVEC(STABCTR,MTABCTR,3,A68_93 ), PLABCTR_codestream);
}
 /* line 469: */
XTABCTR = VTABCTR ;
TTABCTR.data[0] = A_UNITE(WTABCTR,mode2,2,XTABCTR);
TTABCTR.data[1] = A_UNITE(YTABCTR,mode2,2,JPABCTR_loopcounter);
CUABCTR = AUABCTR ;
TTABCTR.data[2] = A_UNITE(BUABCTR,mode2,2,CUABCTR);
 /* line 470: */
TTABCTR.data[3] = A_UNITE(DUABCTR,mode4,4,EIAACTR_cnewline);
FUABCTR = '(' ;
TTABCTR.data[4] = A_UNITE(EUABCTR,mode1,1,FUABCTR);
A_CALLPROC(QSABCTR_increment,(1, &GUABCTR),(1, &GUABCTR,(QSABCTR_increment).nonlocals));
TTABCTR.data[5] = A_UNITE(HUABCTR,mode2,2,GUABCTR);
TTABCTR.data[6] = A_UNITE(IUABCTR,mode4,4,EIAACTR_cnewline);
VBMACTR_writecstream(A_HISVEC(JUABCTR,TTABCTR,7,A68_93 ), PLABCTR_codestream);
 /* line 472: */
 /* line 473: */
LUABCTR = Controls.upb;
for ( KUABCTR_i = 2;
KUABCTR_i <= LUABCTR;
KUABCTR_i += 1 )
{ 
 /* line 474: */
OUABCTR = ',' ;
MUABCTR.data[0] = A_UNITE(NUABCTR,mode1,1,OUABCTR);
A_CALLPROC(QSABCTR_increment,(KUABCTR_i, &PUABCTR),(KUABCTR_i, &PUABCTR,(QSABCTR_increment).nonlocals));
MUABCTR.data[1] = A_UNITE(QUABCTR,mode2,2,PUABCTR);
MUABCTR.data[2] = A_UNITE(RUABCTR,mode4,4,EIAACTR_cnewline);
 /* line 475: */
VBMACTR_writecstream(A_HISVEC(SUABCTR,MUABCTR,3,A68_93 ), PLABCTR_codestream);
}
 /* line 477: */
XUABCTR = VUABCTR ;
TUABCTR.data[0] = A_UNITE(WUABCTR,mode2,2,XUABCTR);
TUABCTR.data[1] = A_UNITE(YUABCTR,mode4,4,EIAACTR_cnewline);
AVABCTR = '{' ;
TUABCTR.data[2] = A_UNITE(ZUABCTR,mode1,1,AVABCTR);
TUABCTR.data[3] = A_UNITE(BVABCTR,mode4,4,EIAACTR_cnewline);
VBMACTR_writecstream(A_HISVEC(CVABCTR,TUABCTR,4,A68_93 ), PLABCTR_codestream);
 /* line 481: */
 /* line 482: */
EVABCTR = Controls.upb -1;
DVABCTR_control = Controls.data;
for (;EVABCTR-- >= 0;
(DVABCTR_control++
) )
{
 /* line 483: */
 /* line 484: */
 /* line 485: */
if ( (*(&(DVABCTR_control->Needstemp))) )
{ 
PWPACTR_getcfragment( (&(DVABCTR_control->Ident)), &GVABCTR );
FVABCTR.data[0] = A_UNITE(HVABCTR,mode2,2,GVABCTR);
 /* line 486: */
LVABCTR = JVABCTR ;
FVABCTR.data[1] = A_UNITE(KVABCTR,mode2,2,LVABCTR);
NVABCTR = (*(&(DVABCTR_control->Control))) ;
FVABCTR.data[2] = A_UNITE(MVABCTR,mode2,2,NVABCTR);
PVABCTR = ';' ;
FVABCTR.data[3] = A_UNITE(OVABCTR,mode1,1,PVABCTR);
FVABCTR.data[4] = A_UNITE(QVABCTR,mode4,4,EIAACTR_cnewline);
 /* line 487: */
 /* line 488: */
 /* line 489: */
VBMACTR_writecstream(A_HISVEC(RVABCTR,FVABCTR,5,A68_93 ), PLABCTR_codestream);
} 
}
 /* line 490: */
} 
A_PROC_EXIT(forall);
return;
} 
#undef NL

A68_VOID  SVABCTR_while(void)
{ 
A_PROC_ENTRY(while);
/*SKIP*/;
A_PROC_EXIT(while);
return;
} 
#undef NL

A68_VOID  UVABCTR_whiledo(A68_64 * Enquiry)
{ 
A68_INT  VVABCTR_codestream;
A68_VC  XVABCTR;  /* clause result */
A68_VC  ZVABCTR;  /* avoid structure result */
A68_VC  AWABCTR_booleanexpr;
A68_190  BWABCTR;  /* collateral clause result */
A68_93  EWABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  FWABCTR;  /* YIELD */
A68_93  GWABCTR;  /* OPERATORS - mode -> union mode */
A68_93  JWABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  KWABCTR;  /* YIELD */
A68_93  LWABCTR;  /* OPERATORS - mode -> union mode */
A68_92  MWABCTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(whiledo);
 /* line 495: */
 /* line 496: */
{ 
VVABCTR_codestream = WQLACTR_codestream(EQLACTR_currentlevel());
 /* line 497: */
 /* line 498: */
 /* line 499: */
 /* line 501: */
if ( ZUPACTR_isskip(Enquiry) )
{ 
 /* line 502: */
XVABCTR = YVABCTR;
} 
else
{ 
 /* line 503: */
WAQACTR_bracketcfragment( Enquiry, &ZVABCTR );
XVABCTR = ZVABCTR;
} 
AWABCTR_booleanexpr = XVABCTR;
 /* line 504: */
 /* line 505: */
FWABCTR = DWABCTR ;
BWABCTR.data[0] = A_UNITE(EWABCTR,mode2,2,FWABCTR);
BWABCTR.data[1] = A_UNITE(GWABCTR,mode2,2,AWABCTR_booleanexpr);
KWABCTR = IWABCTR ;
BWABCTR.data[2] = A_UNITE(JWABCTR,mode2,2,KWABCTR);
BWABCTR.data[3] = A_UNITE(LWABCTR,mode4,4,EIAACTR_cnewline);
 /* line 506: */
VBMACTR_writecstream(A_HISVEC(MWABCTR,BWABCTR,4,A68_93 ), VVABCTR_codestream);
} 
A_PROC_EXIT(whiledo);
return;
} 
#undef NL

A68_VOID  NWABCTR_whileod(void)
{ 
A68_INT  OWABCTR_codestream;
A68_196  PWABCTR;  /* collateral clause result */
A68_93  QWABCTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  RWABCTR;  /* YIELD */
A68_93  SWABCTR;  /* OPERATORS - mode -> union mode */
A68_92  TWABCTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(whileod);
{ 
OWABCTR_codestream = WQLACTR_codestream(EQLACTR_currentlevel());
 /* line 511: */
RWABCTR = '}' ;
PWABCTR.data[0] = A_UNITE(QWABCTR,mode1,1,RWABCTR);
PWABCTR.data[1] = A_UNITE(SWABCTR,mode4,4,EIAACTR_cnewline);
 /* line 512: */
VBMACTR_writecstream(A_HISVEC(TWABCTR,PWABCTR,2,A68_93 ), OWABCTR_codestream);
} 
A_PROC_EXIT(whileod);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 3: */
 /* line 5: */
void KAABCTR(void)   /* initialise DECS loops */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/shields/projects/Algol68/Tools/Algol68toC/src/a68toc","-v","-uname","seedfile","-lib","/home/shields/projects/Algol68/Tools/Algol68toC/a68config","-dir","/home/shields/projects/Algol68/Tools/Algol68toC/a68config","-dir","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel","-dir",".","loops.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/shields/projects/Algol68/Tools/Algol68toC/a68config","A68_CDIR=","A68_DIR=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/shields/projects/Algol68/Tools/Algol68toC/a68config/a68config.m","./values.m","./modes.m","./incmode.m","./environment.m","./environ.m","./coutput.m","./clauses.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/usefulops.m","./centities.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_64  PAABCTR;  /* collateral clause result */
A68_65  QAABCTR;  /* OPERATORS - mode -> union mode */
A68_LBITS  RAABCTR;  /* YIELD */
A68_75  VWABCTR;  /* procedure value */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
JRPACTR();   /* USE values */
MLMACTR();   /* USE modes */
ZDAACTR();   /* USE incmode */
HPIACTR();   /* USE environment */
KNLACTR();   /* USE environ */
YRLACTR();   /* USE coutput */
KXYACTR();   /* USE clauses */
IKAAOSF();   /* USE usefulops */
THAACTR();   /* USE centities */
/* --- Initialise configuration information */
A_config.source_file = "/home/shields/projects/Algol68/Tools/Algol68toC/src/loops.a68";
A_config.translation_time = "Sun Sep 26 21:51:10 2004";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "JAABCTR (from seed file) ";
A_config.spec_change_time = "Sun Sep 26 21:51:10 2004";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS loops);
UEAALIB_a68config(LGAALIB_configinfo, OAABCTR);
 /* line 49: */
 /* line 59: */
 /* line 62: */
PAABCTR.Mode = EFAACTR_intmode;
PAABCTR.Info = YIJACTR_defaultinfo;
RAABCTR = (A68_LBITS )01U ;
PAABCTR.Extra = A_UNITE(QAABCTR,mode1,1,RAABCTR);
GBABCTR_value1 = UAABCTR_assignment(A_LOC(A68_64 ), PAABCTR);
 /* line 69: */
 /* line 70: */
 /* line 273: */
 /* line 274: */
 /* line 492: */
 /* line 494: */
 /* line 508: */
 /* line 509: */
 /* line 510: */
 /* line 514: */
VWABCTR.fn.fn_global = NWABCTR_whileod;
VWABCTR.nonlocals = A68_NIL;
UWABCTR_od = (VWABCTR);
 /* line 516: */
 /* line 518: */
 /* line 521: */
/*SKIP*/;
A_PROC_EXIT(DECS loops);
} 
#undef NL
/* end of translation of loops.a68 */
