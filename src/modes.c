/* UNAME:LLMACTR */
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
struct A68t54{
A68_INT  Rdenno;
A_PAD_INT(PAD_1)
A68_INT  Mode;
A_PAD_INT(PAD_2)
A68_INT  Nods;
A_PAD_INT(PAD_3)
A68_INT  Deflex;
A_PAD_INT(PAD_4)
};
typedef struct A68t54  A68_54 ;    /* STRUCT(INT,INT,INT,INT)  */
A_ISTRUCT(A68_CHAR ,32,A68t56);
typedef struct A68t56  A68_56 ;    /* STRUCT 32 CHAR */
struct A68t55{
struct A68t56  N;
A_PAD_ISTRUCT(A68_56 ,PAD_5)
struct A68t56  F;
A_PAD_ISTRUCT(A68_56 ,PAD_6)
A68_INT  Level;
A_PAD_INT(PAD_7)
};
typedef struct A68t55  A68_55 ;    /* STRUCT(MODE56,MODE56,INT)  */
struct A68t57{
struct A68t56  Name;
A_PAD_ISTRUCT(A68_56 ,PAD_8)
A68_INT  Decno;
A_PAD_INT(PAD_9)
A68_INT  Level;
A_PAD_INT(PAD_10)
A68_INT  Mode;
A_PAD_INT(PAD_11)
A68_INT  Scope;
A_PAD_INT(PAD_12)
struct A68t57 * Rest;
};
typedef struct A68t57  A68_57 ;    /* STRUCT(MODE56,INT,INT,INT,INT,REF MODE57)  */
struct A68t58{
A68_INT  Rdenno;
A_PAD_INT(PAD_13)
A68_INT  Imode;
A_PAD_INT(PAD_14)
A68_INT  Length;
A_PAD_INT(PAD_15)
A68_INT  Deflex;
A_PAD_INT(PAD_16)
};
typedef struct A68t58  A68_58 ;    /* STRUCT(INT,INT,INT,INT)  */
struct A68t67{
A68_INT  Mode;
A_PAD_INT(PAD_17)
};
typedef struct A68t67  A68_67 ;    /* STRUCT(INT)  */
struct A68t59 { A68_INT mode; union {
A68_INT  mode1;
struct A68t60 * mode2;
struct A68t61 * mode3;
struct A68t62 * mode4;
struct A68t58 * mode5;
struct A68t63 * mode6;
struct A68t64 * mode7;
struct A68t54 * mode8;
struct A68t65 * mode9;
struct A68t66 * mode10;
struct A68t67  mode11;
} data; };
typedef struct A68t59  A68_59 ;    /* UNION(INT,REF MODE60,REF MODE61,REF MODE62,REF MODE58,REF MODE63,REF MODE64,REF MODE54,REF MODE65,REF MODE66,MODE67)  */
struct A68t60{
A68_INT  Rdenno;
A_PAD_INT(PAD_18)
struct A68t71 * Modelist;
};
typedef struct A68t60  A68_60 ;    /* STRUCT(INT,REF MODE71)  */
struct A68t61{
A68_INT  Deproc;
A_PAD_INT(PAD_19)
struct A68t71 * Pars;
};
typedef struct A68t61  A68_61 ;    /* STRUCT(INT,REF MODE71)  */
struct A68t62{
A68_INT  Rdenno;
A_PAD_INT(PAD_20)
A68_INT  Deflex;
A_PAD_INT(PAD_21)
struct A68t70 * Sels;
};
typedef struct A68t62  A68_62 ;    /* STRUCT(INT,INT,REF MODE70)  */
struct A68t63{
A68_INT  Deproc;
A_PAD_INT(PAD_22)
};
typedef struct A68t63  A68_63 ;    /* STRUCT(INT)  */
struct A68t64{
A68_INT  Rdenno;
A_PAD_INT(PAD_23)
A68_INT  Vecmode;
A_PAD_INT(PAD_24)
A68_INT  Deflex;
A_PAD_INT(PAD_25)
};
typedef struct A68t64  A68_64 ;    /* STRUCT(INT,INT,INT)  */
struct A68t65{
A68_INT  Mode;
A_PAD_INT(PAD_26)
struct A68t69 * Stenlist;
};
typedef struct A68t65  A68_65 ;    /* STRUCT(INT,REF MODE69)  */
struct A68t66{
A68_INT  Mode;
A_PAD_INT(PAD_27)
A68_INT  Modeproc;
A_PAD_INT(PAD_28)
struct A68t68 * El;
};
typedef struct A68t66  A68_66 ;    /* STRUCT(INT,INT,REF MODE68)  */
struct A68t68{
struct A68t66 * Am;
struct A68t68 * Rest;
};
typedef struct A68t68  A68_68 ;    /* STRUCT(REF MODE66,REF MODE68)  */
struct A68t69{
A68_INT  Mode;
A_PAD_INT(PAD_29)
A68_INT  Rdenno;
A_PAD_INT(PAD_30)
struct A68t69 * Rest;
};
typedef struct A68t69  A68_69 ;    /* STRUCT(INT,INT,REF MODE69)  */
struct A68t70{
A68_INT  Mode;
A_PAD_INT(PAD_31)
A68_INT  Fieldno;
A_PAD_INT(PAD_32)
struct A68t56  Name;
A_PAD_ISTRUCT(A68_56 ,PAD_33)
struct A68t70 * Rest;
};
typedef struct A68t70  A68_70 ;    /* STRUCT(INT,INT,MODE56,REF MODE70)  */
struct A68t71{
A68_INT  Mode;
A_PAD_INT(PAD_34)
struct A68t71 * Rest;
};
typedef struct A68t71  A68_71 ;    /* STRUCT(INT,REF MODE71)  */
A_ISTRUCT(A68_CHAR ,7,A68t72);
typedef struct A68t72  A68_72 ;    /* STRUCT 7 CHAR */
A_VECTOR(struct A68t76 ,A68t75);
typedef struct A68t75  A68_75 ;    /* VECTOR [] MODE76 */
A_VECTOR(struct A68t55 ,A68t82);
typedef struct A68t82  A68_82 ;    /* VECTOR [] MODE55 */
struct A68t81 { A68_INT mode; union {
A68_VC  mode1;
struct A68t82  mode2;
} data; };
typedef struct A68t81  A68_81 ;    /* UNION(REF MODE26,REF MODE82)  */
struct A68t77{
struct A68t56  F;
A_PAD_ISTRUCT(A68_56 ,PAD_35)
A68_INT  No;
A_PAD_INT(PAD_36)
A68_INT  Nl;
A_PAD_INT(PAD_37)
A68_INT  Ng;
A_PAD_INT(PAD_38)
struct A68t81  U;
};
typedef struct A68t77  A68_77 ;    /* STRUCT(MODE56,INT,INT,INT,MODE81)  */
A_VECTOR(struct A68t80 ,A68t78);
typedef struct A68t78  A68_78 ;    /* VECTOR [] MODE80 */
struct A68t80{
struct A68t72  Prefix;
A_PAD_ISTRUCT(A68_72 ,PAD_39)
A68_BOOL  Optimised;
A_PAD_BOOL(PAD_40)
A68_BOOL  Iddec;
A_PAD_BOOL(PAD_41)
A68_BOOL  Globalproc;
A_PAD_BOOL(PAD_42)
A68_BOOL  Keptgenproc;
A_PAD_BOOL(PAD_43)
A68_BOOL  Forceuse;
A_PAD_BOOL(PAD_44)
A68_VC  Definition;
A68_VC  Rhs;
};
typedef struct A68t80  A68_80 ;    /* STRUCT(MODE72,BOOL,BOOL,BOOL,BOOL,BOOL,REF MODE26,REF MODE26)  */
A_VECTOR(struct A68t72 ,A68t79);
typedef struct A68t79  A68_79 ;    /* VECTOR [] MODE72 */
struct A68t76{
struct A68t77  Xs;
struct A68t72  Ys;
A_PAD_ISTRUCT(A68_72 ,PAD_45)
A68_LINT  Timeoflastchange;
A_PAD_LINT(PAD_46)
struct A68t78  Keptinfo;
struct A68t79  Cnames;
};
typedef struct A68t76  A68_76 ;    /* STRUCT(MODE77,MODE72,LONG INT,REF MODE78,REF MODE79)  */
struct A68t74{
struct A68t72  Uname;
A_PAD_ISTRUCT(A68_72 ,PAD_47)
struct A68t72  Lname;
A_PAD_ISTRUCT(A68_72 ,PAD_48)
struct A68t72  Gname;
A_PAD_ISTRUCT(A68_72 ,PAD_49)
struct A68t75  Specs;
};
typedef struct A68t74  A68_74 ;    /* STRUCT(MODE72,MODE72,MODE72,REF MODE75)  */
struct A68t73{
struct A68t56  Name;
A_PAD_ISTRUCT(A68_56 ,PAD_50)
struct A68t74  Ym;
struct A68t56  Formal;
A_PAD_ISTRUCT(A68_56 ,PAD_51)
struct A68t72  Ys;
A_PAD_ISTRUCT(A68_72 ,PAD_52)
A68_INT  Level;
A_PAD_INT(PAD_53)
A68_INT  Ownlevel;
A_PAD_INT(PAD_54)
};
typedef struct A68t73  A68_73 ;    /* STRUCT(MODE56,MODE74,MODE56,MODE72,INT,INT)  */
struct A68t83{
struct A68t56  Name;
A_PAD_ISTRUCT(A68_56 ,PAD_55)
struct A68t55  L;
struct A68t55  G;
A68_INT  Type;
A_PAD_INT(PAD_56)
};
typedef struct A68t83  A68_83 ;    /* STRUCT(MODE56,MODE55,MODE55,INT)  */
struct A68t84{
A68_INT  Norden;
A_PAD_INT(PAD_57)
A68_INT  Nomodes;
A_PAD_INT(PAD_58)
A68_INT  Nolabs;
A_PAD_INT(PAD_59)
A68_INT  Nodecnos;
A_PAD_INT(PAD_60)
A68_INT  Nomodules;
A_PAD_INT(PAD_61)
A68_INT  Nolibinds;
A_PAD_INT(PAD_62)
};
typedef struct A68t84  A68_84 ;    /* STRUCT(INT,INT,INT,INT,INT,INT)  */
struct A68t85{
A68_INT  Type;
A_PAD_INT(PAD_63)
A68_INT  Moduleno;
A_PAD_INT(PAD_64)
struct A68t56  Name;
A_PAD_ISTRUCT(A68_56 ,PAD_65)
struct A68t74  Ym;
};
typedef struct A68t85  A68_85 ;    /* STRUCT(INT,INT,MODE56,MODE74)  */
struct A68t86{
struct A68t83  Xmi;
struct A68t74  Ym;
};
typedef struct A68t86  A68_86 ;    /* STRUCT(MODE83,MODE74)  */
struct A68t87{
struct A68t77  Xs;
struct A68t72  Ys;
A_PAD_ISTRUCT(A68_72 ,PAD_66)
};
typedef struct A68t87  A68_87 ;    /* STRUCT(MODE77,MODE72)  */

A_PROCEDURE(A68_INT ,A68t88,(A68_INT ),(A68_INT ,void *));
typedef struct A68t88  A68_88 ;    /* PROC(INT) INT */

A_PROCEDURE(A68_BOOL ,A68t89,(A68_INT ),(A68_INT ,void *));
typedef struct A68t89  A68_89 ;    /* PROC(INT) BOOL */
struct A68t90{
A68_INT  Level;
A_PAD_INT(PAD_67)
A68_INT  Block;
A_PAD_INT(PAD_68)
};
typedef struct A68t90  A68_90 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t91,(struct A68t90 *),(struct A68t90 *,void *));
typedef struct A68t91  A68_91 ;    /* PROC MODE90 */

A_PROCEDURE(A68_INT ,A68t92,(void),(void *));
typedef struct A68t92  A68_92 ;    /* PROC INT */

A_PROCEDURE(A68_VOID ,A68t93,(A68_INT ),(A68_INT ,void *));
typedef struct A68t93  A68_93 ;    /* PROC(INT) VOID */

A_PROCEDURE(A68_VOID ,A68t94,(void),(void *));
typedef struct A68t94  A68_94 ;    /* PROC VOID */

A_PROCEDURE(A68_BOOL ,A68t95,(void),(void *));
typedef struct A68t95  A68_95 ;    /* PROC BOOL */

A_PROCEDURE(A68_BOOL ,A68t96,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t96  A68_96 ;    /* PROC(INT,INT) BOOL */

A_PROCEDURE(A68_VOID ,A68t97,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t97  A68_97 ;    /* PROC(INT,INT) VOID */

A_PROCEDURE(A68_BOOL ,A68t98,(struct A68t90 ,struct A68t90 ),(struct A68t90 ,struct A68t90 ,void *));
typedef struct A68t98  A68_98 ;    /* PROC(MODE90,MODE90) BOOL */

A_PROCEDURE(A68_BOOL ,A68t99,(struct A68t90 ),(struct A68t90 ,void *));
typedef struct A68t99  A68_99 ;    /* PROC(MODE90) BOOL */

A_PROCEDURE(A68_VOID ,A68t100,(A68_VC ,A68_BOOL ),(A68_VC ,A68_BOOL ,void *));
typedef struct A68t100  A68_100 ;    /* PROC(MODE26,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t101,(A68_VC ,A68_INT ),(A68_VC ,A68_INT ,void *));
typedef struct A68t101  A68_101 ;    /* PROC(MODE26,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t102,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t102  A68_102 ;    /* PROC(INT) REF MODE26 */
struct A68t104 ;

A_PROCEDURE(A68_VOID ,A68t103,(A68_INT ,struct A68t104 ),(A68_INT ,struct A68t104 ,void *));
typedef struct A68t103  A68_103 ;    /* PROC(INT,MODE104) VOID */
A_ROW(A68_VC ,A68t104,1);
typedef struct A68t104  A68_104 ;    /* [] MODE26 */

A_PROCEDURE(A68_BITS ,A68t105,(void),(void *));
typedef struct A68t105  A68_105 ;    /* PROC BITS */
struct A68t106{
A68_INT  Cfile;
A_PAD_INT(PAD_69)
};
typedef struct A68t106  A68_106 ;    /* STRUCT(INT)  */
struct A68t107{
A68_INT  Seedfile;
A_PAD_INT(PAD_70)
};
typedef struct A68t107  A68_107 ;    /* STRUCT(INT)  */
struct A68t108 { A68_INT mode; union {
struct A68t106  mode1;
struct A68t107  mode2;
struct A68t72  mode3;
} data; };
typedef struct A68t108  A68_108 ;    /* UNION(MODE106,MODE107,MODE72,VOID)  */

A_PROCEDURE(A68_VOID ,A68t109,(A68_VC ),(A68_VC ,void *));
typedef struct A68t109  A68_109 ;    /* PROC(MODE26) VOID */
struct A68t110{
A68_VC  Version;
A68_LINT  Translationtime;
A_PAD_LINT(PAD_71)
A68_VC  Sourcefile;
struct A68t72  Nameseed;
A_PAD_ISTRUCT(A68_72 ,PAD_72)
struct A68t108  Nameseedorigin;
struct A68t111 * Used_modules;
A68_VC  Commandline;
struct A68t112 * Environment;
};
typedef struct A68t110  A68_110 ;    /* STRUCT(REF MODE26,LONG INT,REF MODE26,MODE72,MODE108,REF MODE111,REF MODE26,REF MODE112)  */
struct A68t111{
A68_VC  Modinfo_file;
struct A68t111 * Next;
};
typedef struct A68t111  A68_111 ;    /* STRUCT(REF MODE26,REF MODE111)  */
struct A68t112{
A68_VC  Env_name;
A68_VC  Env_value;
struct A68t112 * Next;
};
typedef struct A68t112  A68_112 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE112)  */
struct A68t114 ;
struct A68t115 ;

A_PROCEDURE(struct A68t114 *,A68t113,(A68_VC ,struct A68t115 *,A68_VC *),(A68_VC ,struct A68t115 *,A68_VC *,void *));
typedef struct A68t113  A68_113 ;    /* PROC(MODE26,REF MODE115,REF REF MODE26) REF MODE114 */
struct A68t114{
A68_VC  Name;
A68_BITS * Stdiofile;
};
typedef struct A68t114  A68_114 ;    /* STRUCT(REF MODE26,REF BITS)  */
struct A68t115{
A68_VC  Dir;
struct A68t115 * Next;
};
typedef struct A68t115  A68_115 ;    /* STRUCT(REF MODE26,REF MODE115)  */

A_PROCEDURE(A68_VOID ,A68t116,(struct A68t108 ),(struct A68t108 ,void *));
typedef struct A68t116  A68_116 ;    /* PROC(MODE108) VOID */

A_PROCEDURE(struct A68t72 ,A68t117,(void),(void *));
typedef struct A68t117  A68_117 ;    /* PROC MODE72 */

A_PROCEDURE(A68_VOID ,A68t118,(struct A68t72 ),(struct A68t72 ,void *));
typedef struct A68t118  A68_118 ;    /* PROC(MODE72) VOID */

A_PROCEDURE(A68_VOID ,A68t119,(struct A68t108 ,A68_VC *),(struct A68t108 ,A68_VC *,void *));
typedef struct A68t119  A68_119 ;    /* PROC(MODE108) MODE26 */
struct A68t120{
struct A68t121 * Value;
struct A68t122 * End;
A68_INT  Type;
A_PAD_INT(PAD_73)
};
typedef struct A68t120  A68_120 ;    /* STRUCT(REF MODE121,REF MODE122,INT)  */
struct A68t124{
A68_INT  Rdenno;
A_PAD_INT(PAD_74)
};
typedef struct A68t124  A68_124 ;    /* STRUCT(INT)  */
struct A68t125{
A68_INT  Idno;
A_PAD_INT(PAD_75)
};
typedef struct A68t125  A68_125 ;    /* STRUCT(INT)  */
struct A68t126{
struct A68t72  Name;
A_PAD_ISTRUCT(A68_72 ,PAD_76)
A68_INT  Mode;
A_PAD_INT(PAD_77)
};
typedef struct A68t126  A68_126 ;    /* STRUCT(MODE72,INT)  */
struct A68t127{
A68_INT  Labno;
A_PAD_INT(PAD_78)
};
typedef struct A68t127  A68_127 ;    /* STRUCT(INT)  */
struct A68t128{
A68_INT  Nse;
A_PAD_INT(PAD_79)
};
typedef struct A68t128  A68_128 ;    /* STRUCT(INT)  */
struct A68t129{
A68_INT  Fn;
A_PAD_INT(PAD_80)
A68_INT  Param;
A_PAD_INT(PAD_81)
struct A68t130 * Operands;
};
typedef struct A68t129  A68_129 ;    /* STRUCT(INT,INT,REF MODE130)  */
struct A68t123 { A68_INT mode; union {
A68_LBITS  mode1;
struct A68t124  mode2;
struct A68t125  mode4;
struct A68t126  mode5;
A68_VC  mode6;
struct A68t127  mode7;
struct A68t128  mode8;
struct A68t129  mode9;
} data; };
typedef struct A68t123  A68_123 ;    /* UNION(LONG BITS,MODE124,VOID,MODE125,MODE126,MODE26,MODE127,MODE128,MODE129)  */
struct A68t121{
A68_INT  Mode;
A_PAD_INT(PAD_82)
A68_BITS  Info;
A_PAD_BITS(PAD_83)
struct A68t123  Extra;
};
typedef struct A68t121  A68_121 ;    /* STRUCT(INT,BITS,MODE123)  */
struct A68t122{
struct A68t72  Name;
A_PAD_ISTRUCT(A68_72 ,PAD_84)
A68_BOOL  Set;
A_PAD_BOOL(PAD_85)
};
typedef struct A68t122  A68_122 ;    /* STRUCT(MODE72,BOOL)  */
struct A68t130{
struct A68t121  Value;
struct A68t130 * Rest;
};
typedef struct A68t130  A68_130 ;    /* STRUCT(MODE121,REF MODE130)  */
struct A68t132 ;

A_PROCEDURE(A68_VOID ,A68t131,(struct A68t132 ),(struct A68t132 ,void *));
typedef struct A68t131  A68_131 ;    /* PROC(MODE132) VOID */
A_VECTOR(struct A68t133 ,A68t132);
typedef struct A68t132  A68_132 ;    /* VECTOR [] MODE133 */
struct A68t133 { A68_INT mode; union {
A68_CHAR  mode1;
A68_VC  mode2;
A68_SINT  mode3;
} data; };
typedef struct A68t133  A68_133 ;    /* UNION(CHAR,MODE26,SHORT INT)  */
struct A68t135 ;

A_PROCEDURE(A68_VOID ,A68t134,(struct A68t135 ,A68_INT ),(struct A68t135 ,A68_INT ,void *));
typedef struct A68t134  A68_134 ;    /* PROC(MODE135,INT) VOID */
A_VECTOR(struct A68t136 ,A68t135);
typedef struct A68t135  A68_135 ;    /* VECTOR [] MODE136 */
struct A68t136 { A68_INT mode; union {
A68_CHAR  mode1;
A68_VC  mode2;
A68_INT  mode3;
A68_SINT  mode4;
} data; };
typedef struct A68t136  A68_136 ;    /* UNION(CHAR,MODE26,INT,SHORT INT)  */

A_PROCEDURE(A68_BOOL ,A68t137,(A68_INT ,A68_VC ),(A68_INT ,A68_VC ,void *));
typedef struct A68t137  A68_137 ;    /* PROC(INT,MODE26) BOOL */

A_PROCEDURE(A68_VOID ,A68t138,(A68_BOOL ,A68_VC *),(A68_BOOL ,A68_VC *,void *));
typedef struct A68t138  A68_138 ;    /* PROC(BOOL) MODE26 */

A_PROCEDURE(A68_VOID ,A68t139,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t139  A68_139 ;    /* PROC(MODE26) MODE26 */

A_PROCEDURE(A68_VOID ,A68t140,(struct A68t94 ),(struct A68t94 ,void *));
typedef struct A68t140  A68_140 ;    /* PROC(MODE94) VOID */

A_PROCEDURE(A68_VOID ,A68t141,(struct A68t109 ),(struct A68t109 ,void *));
typedef struct A68t141  A68_141 ;    /* PROC(MODE109) VOID */

A_PROCEDURE(A68_VOID ,A68t142,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t142  A68_142 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,60,A68t143);
typedef struct A68t143  A68_143 ;    /* STRUCT 60 CHAR */

A_PROCEDURE(A68_VOID ,A68t144,(A68_INT ,A68_VC ),(A68_INT ,A68_VC ,void *));
typedef struct A68t144  A68_144 ;    /* PROC(INT,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,5,A68t145);
typedef struct A68t145  A68_145 ;    /* STRUCT 5 CHAR */
A_ISTRUCT(A68_CHAR ,6,A68t146);
typedef struct A68t146  A68_146 ;    /* STRUCT 6 CHAR */
A_ISTRUCT(A68_CHAR ,3,A68t147);
typedef struct A68t147  A68_147 ;    /* STRUCT 3 CHAR */
struct A68t148{
A68_INT  Mode;
A_PAD_INT(PAD_86)
A68_INT  Offset;
A_PAD_INT(PAD_87)
struct A68t56  Name;
A_PAD_ISTRUCT(A68_56 ,PAD_88)
};
typedef struct A68t148  A68_148 ;    /* STRUCT(INT,INT,MODE56)  */
A_VECTOR(A68_INT ,A68t150);
typedef struct A68t150  A68_150 ;    /* VECTOR [] INT */
A_VECTOR(struct A68t148 ,A68t151);
typedef struct A68t151  A68_151 ;    /* VECTOR [] MODE148 */
struct A68t149 { A68_INT mode; union {
A68_INT  mode1;
struct A68t150  mode2;
struct A68t151  mode3;
} data; };
typedef struct A68t149  A68_149 ;    /* UNION(INT,REF MODE150,REF MODE151,VOID)  */
struct A68t152{
A68_INT  Type;
A_PAD_INT(PAD_89)
A68_INT  Auxmode;
A_PAD_INT(PAD_90)
A68_INT  Deflexedmode;
A_PAD_INT(PAD_91)
A68_BOOL  Finalised;
A_PAD_BOOL(PAD_92)
struct A68t149  Extra;
A68_BITS  Flags;
A_PAD_BITS(PAD_93)
};
typedef struct A68t152  A68_152 ;    /* STRUCT(INT,INT,INT,BOOL,MODE149,BITS)  */
struct A68t153{
A68_INT  Parameters;
A_PAD_INT(PAD_94)
A68_INT  Result;
A_PAD_INT(PAD_95)
A68_BOOL  Hasdescriptors;
A_PAD_BOOL(PAD_96)
};
typedef struct A68t153  A68_153 ;    /* STRUCT(INT,INT,BOOL)  */
A_ROW(struct A68t152 ,A68t154,1);
typedef struct A68t154  A68_154 ;    /* [] MODE152 */

A_PROCEDURE(A68_BITS ,A68t155,(A68_INT ),(A68_INT ,void *));
typedef struct A68t155  A68_155 ;    /* PROC(INT) BITS */

A_PROCEDURE(A68_VOID ,A68t156,(A68_INT ,struct A68t153 *),(A68_INT ,struct A68t153 *,void *));
typedef struct A68t156  A68_156 ;    /* PROC(INT) MODE153 */
A_ISTRUCT(A68_CHAR ,31,A68t157);
typedef struct A68t157  A68_157 ;    /* STRUCT 31 CHAR */
A_ISTRUCT(A68_CHAR ,45,A68t158);
typedef struct A68t158  A68_158 ;    /* STRUCT 45 CHAR */

A_PROCEDURE(A68_VOID ,A68t159,(A68_INT ,struct A68t150 *),(A68_INT ,struct A68t150 *,void *));
typedef struct A68t159  A68_159 ;    /* PROC(INT) REF MODE150 */
A_ISTRUCT(A68_CHAR ,19,A68t160);
typedef struct A68t160  A68_160 ;    /* STRUCT 19 CHAR */
A_ISTRUCT(A68_CHAR ,30,A68t161);
typedef struct A68t161  A68_161 ;    /* STRUCT 30 CHAR */

A_PROCEDURE(A68_VOID ,A68t162,(A68_INT ,struct A68t151 *),(A68_INT ,struct A68t151 *,void *));
typedef struct A68t162  A68_162 ;    /* PROC(INT) REF MODE151 */
A_ISTRUCT(A68_CHAR ,42,A68t163);
typedef struct A68t163  A68_163 ;    /* STRUCT 42 CHAR */
A_ISTRUCT(A68_CHAR ,49,A68t164);
typedef struct A68t164  A68_164 ;    /* STRUCT 49 CHAR */
struct A68t165{
A68_INT  Thismode;
A_PAD_INT(PAD_97)
struct A68t150  Auxmode;
A68_INT  Dims;
A_PAD_INT(PAD_98)
struct A68t165 * Next;
};
typedef struct A68t165  A68_165 ;    /* STRUCT(INT,REF MODE150,INT,REF MODE165)  */

A_PROCEDURE(A68_VOID ,A68t166,(A68_INT ,struct A68t150 ,A68_INT ,struct A68t165 **),(A68_INT ,struct A68t150 ,A68_INT ,struct A68t165 **,void *));
typedef struct A68t166  A68_166 ;    /* PROC(INT,MODE150,INT,REF REF MODE165) VOID */

A_PROCEDURE(A68_VOID ,A68t167,(A68_BOOL ,struct A68t150 *),(A68_BOOL ,struct A68t150 *,void *));
typedef struct A68t167  A68_167 ;    /* PROC(BOOL) MODE150 */

A_PROCEDURE(A68_BOOL ,A68t168,(struct A68t150 ,struct A68t150 ),(struct A68t150 ,struct A68t150 ,void *));
typedef struct A68t168  A68_168 ;    /* PROC(MODE150,MODE150) BOOL */

A_PROCEDURE(A68_INT ,A68t169,(A68_INT ,struct A68t150 ,A68_INT ),(A68_INT ,struct A68t150 ,A68_INT ,void *));
typedef struct A68t169  A68_169 ;    /* PROC(INT,MODE150,INT) INT */
A_ISTRUCT(A68_CHAR ,28,A68t170);
typedef struct A68t170  A68_170 ;    /* STRUCT 28 CHAR */
A_ISTRUCT(A68_CHAR ,36,A68t171);
typedef struct A68t171  A68_171 ;    /* STRUCT 36 CHAR */
A_VECTOR(struct A68t56 ,A68t172);
typedef struct A68t172  A68_172 ;    /* VECTOR [] MODE56 */

A_PROCEDURE(A68_VOID ,A68t173,(A68_BOOL ,struct A68t172 *),(A68_BOOL ,struct A68t172 *,void *));
typedef struct A68t173  A68_173 ;    /* PROC(BOOL) MODE172 */
A_ISTRUCT(A68_CHAR ,54,A68t174);
typedef struct A68t174  A68_174 ;    /* STRUCT 54 CHAR */

A_PROCEDURE(A68_INT ,A68t175,(A68_INT ,A68_BOOL ),(A68_INT ,A68_BOOL ,void *));
typedef struct A68t175  A68_175 ;    /* PROC(INT,BOOL) INT */
A_ISTRUCT(A68_CHAR ,46,A68t176);
typedef struct A68t176  A68_176 ;    /* STRUCT 46 CHAR */
A_ISTRUCT(A68_CHAR ,48,A68t177);
typedef struct A68t177  A68_177 ;    /* STRUCT 48 CHAR */
A_ISTRUCT(A68_CHAR ,57,A68t178);
typedef struct A68t178  A68_178 ;    /* STRUCT 57 CHAR */
A_ISTRUCT(A68_CHAR ,1,A68t179);
typedef struct A68t179  A68_179 ;    /* STRUCT 0 CHAR */

A_PROCEDURE(A68_VOID ,A68t180,(struct A68t150 ,A68_VC *),(struct A68t150 ,A68_VC *,void *));
typedef struct A68t180  A68_180 ;    /* PROC(MODE150) MODE26 */
#define A68_181  A68_VC 
#define A68t181 A68t26            /* FLEX VECTOR [] CHAR */

A_PROCEDURE(A68_VOID ,A68t182,(struct A68t151 ,A68_VC *),(struct A68t151 ,A68_VC *,void *));
typedef struct A68t182  A68_182 ;    /* PROC(MODE151) MODE26 */

A_PROCEDURE(A68_VOID ,A68t183,(struct A68t148 *,A68_VC *),(struct A68t148 *,A68_VC *,void *));
typedef struct A68t183  A68_183 ;    /* PROC(REF MODE148) MODE26 */

A_PROCEDURE(A68_VOID ,A68t184,(A68_INT ,A68_INT ,A68_VC *),(A68_INT ,A68_INT ,A68_VC *,void *));
typedef struct A68t184  A68_184 ;    /* PROC(INT,INT) MODE26 */
A_ISTRUCT(A68_CHAR ,18,A68t185);
typedef struct A68t185  A68_185 ;    /* STRUCT 18 CHAR */
A_ISTRUCT(A68_CHAR ,20,A68t186);
typedef struct A68t186  A68_186 ;    /* STRUCT 20 CHAR */
A_ISTRUCT(A68_CHAR ,2,A68t187);
typedef struct A68t187  A68_187 ;    /* STRUCT 2 CHAR */
A_ISTRUCT(A68_CHAR ,21,A68t188);
typedef struct A68t188  A68_188 ;    /* STRUCT 21 CHAR */
A_ISTRUCT(A68_CHAR ,16,A68t189);
typedef struct A68t189  A68_189 ;    /* STRUCT 16 CHAR */

A_PROCEDURE(A68_VOID ,A68t190,(A68_INT ,A68_BOOL ,A68_VC *),(A68_INT ,A68_BOOL ,A68_VC *,void *));
typedef struct A68t190  A68_190 ;    /* PROC(INT,BOOL) MODE26 */
A_ISTRUCT(A68_CHAR ,11,A68t191);
typedef struct A68t191  A68_191 ;    /* STRUCT 11 CHAR */
A_ISTRUCT(struct A68t136 ,6,A68t192);
typedef struct A68t192  A68_192 ;    /* STRUCT 6 MODE136 */
A_ISTRUCT(A68_CHAR ,14,A68t193);
typedef struct A68t193  A68_193 ;    /* STRUCT 14 CHAR */

A_PROCEDURE(A68_VOID ,A68t194,(A68_INT ,A68_INT ,A68_BOOL ),(A68_INT ,A68_INT ,A68_BOOL ,void *));
typedef struct A68t194  A68_194 ;    /* PROC(INT,INT,BOOL) VOID */
A_ISTRUCT(A68_CHAR ,8,A68t195);
typedef struct A68t195  A68_195 ;    /* STRUCT 8 CHAR */
A_ISTRUCT(struct A68t136 ,7,A68t196);
typedef struct A68t196  A68_196 ;    /* STRUCT 7 MODE136 */
A_ISTRUCT(A68_CHAR ,12,A68t197);
typedef struct A68t197  A68_197 ;    /* STRUCT 12 CHAR */
A_ISTRUCT(struct A68t136 ,12,A68t198);
typedef struct A68t198  A68_198 ;    /* STRUCT 12 MODE136 */
A_ISTRUCT(struct A68t136 ,3,A68t199);
typedef struct A68t199  A68_199 ;    /* STRUCT 3 MODE136 */
A_ISTRUCT(struct A68t136 ,2,A68t200);
typedef struct A68t200  A68_200 ;    /* STRUCT 2 MODE136 */
A_ISTRUCT(A68_CHAR ,9,A68t201);
typedef struct A68t201  A68_201 ;    /* STRUCT 9 CHAR */
A_ISTRUCT(A68_CHAR ,24,A68t202);
typedef struct A68t202  A68_202 ;    /* STRUCT 24 CHAR */
A_ISTRUCT(struct A68t136 ,4,A68t203);
typedef struct A68t203  A68_203 ;    /* STRUCT 4 MODE136 */
A_ISTRUCT(struct A68t136 ,5,A68t204);
typedef struct A68t204  A68_204 ;    /* STRUCT 5 MODE136 */
A_ISTRUCT(A68_CHAR ,10,A68t205);
typedef struct A68t205  A68_205 ;    /* STRUCT 10 CHAR */
A_ROW(struct A68t59 ,A68t206,1);
typedef struct A68t206  A68_206 ;    /* [] MODE59 */

A_PROCEDURE(A68_VOID ,A68t207,(struct A68t206 ,A68_INT ),(struct A68t206 ,A68_INT ,void *));
typedef struct A68t207  A68_207 ;    /* PROC(REF MODE206,INT) VOID */
A_ISTRUCT(A68_CHAR ,27,A68t208);
typedef struct A68t208  A68_208 ;    /* STRUCT 27 CHAR */

A_PROCEDURE(A68_VOID ,A68t209,(struct A68t71 *,struct A68t150 *),(struct A68t71 *,struct A68t150 *,void *));
typedef struct A68t209  A68_209 ;    /* PROC(REF MODE71) REF MODE150 */

A_PROCEDURE(A68_VOID ,A68t210,(struct A68t70 *,struct A68t151 *),(struct A68t70 *,struct A68t151 *,void *));
typedef struct A68t210  A68_210 ;    /* PROC(REF MODE70) REF MODE151 */

A_PROCEDURE(A68_VOID ,A68t211,(A68_BOOL ,struct A68t151 *),(A68_BOOL ,struct A68t151 *,void *));
typedef struct A68t211  A68_211 ;    /* PROC(BOOL) MODE151 */

A_PROCEDURE(A68_VOID ,A68t212,(A68_BOOL ,struct A68t154 *),(A68_BOOL ,struct A68t154 *,void *));
typedef struct A68t212  A68_212 ;    /* PROC(BOOL) MODE154 */

A_PROCEDURE(A68_VOID ,A68t213,(A68_INT ,A68_VC ,struct A68t126 *),(A68_INT ,A68_VC ,struct A68t126 *,void *));
typedef struct A68t213  A68_213 ;    /* PROC(INT,MODE26) MODE126 */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from centities --- */
extern A68_SINT  EIAACTR_cnewline;
extern A68_VOID  JIAACTR_bracket(A68_VC ,A68_VC *);
/* --- End of imports from centities --- */


/* --- Imports from moduletracer --- */
extern A68_INT  ZCHACTR_tracelevel(A68_VC );
/* --- End of imports from moduletracer --- */


/* --- Imports from coutput --- */
extern A68_VOID  VBMACTR_writecstream(struct A68t135 ,A68_INT );
/* --- End of imports from coutput --- */


/* --- Imports from incvalue --- */
/* --- End of imports from incvalue --- */


/* --- Imports from uniquenameserver --- */
extern A68_72  ZGMACTR_newuniquename(void);
/* --- End of imports from uniquenameserver --- */


/* --- Imports from incmode --- */
#define AFAACTR_bitsmode 11
#define WEAACTR_boolmode 7
#define XEAACTR_charmode 8
#define MFAACTR_complmode 23
#define VEAACTR_faultmode 6
#define UFAACTR_firstnonfixedmode 31
#define MEAACTR_flexrow 9
#define NEAACTR_flexvector 10
#define TEAACTR_gotomode 4
#define EFAACTR_intmode 15
#define JEAACTR_istruct 6
#define BFAACTR_longbitsmode 12
#define NFAACTR_longcomplmode 24
#define FFAACTR_longintmode 16
#define CFAACTR_longlongbitsmode 13
#define OFAACTR_longlongcomplmode 25
#define GFAACTR_longlongintmode 17
#define KFAACTR_longlongrealmode 21
#define JFAACTR_longrealmode 20
#define PEAACTR_nomode 0
#define EEAACTR_primitive 1
#define FEAACTR_proc 2
#define GEAACTR_procp 3
#define IFAACTR_realmode 19
extern A68_INT  WFAACTR_refrefmark;
#define VFAACTR_refmark 1024
#define KEAACTR_row 7
#define ZEAACTR_shortbitsmode 10
#define LFAACTR_shortcomplmode 22
#define DFAACTR_shortintmode 14
#define HFAACTR_shortrealmode 18
#define OEAACTR_straight 11
#define IEAACTR_struct 5
#define HEAACTR_union 4
#define LEAACTR_vector 8
#define PFAACTR_vectorrowofcharmode 26
#define UEAACTR_voidmode 5
#define SFAACTR_xtypemode 29
#define TFAACTR_ytypemode 30
/* --- End of imports from incmode --- */


/* --- Imports from incinstallation --- */
/* --- End of imports from incinstallation --- */


/* --- Imports from environment --- */
extern A68_VOID  PXIACTR_assert(A68_VC ,A68_BOOL );
extern A68_BOOL  MQIACTR_longlongoption;
extern A68_VOID  KDHACTR_message(A68_INT ,A68_VC *);
extern A68_VOID  LXIACTR_terminalerror(A68_INT );
extern A68_BOOL  AQIACTR_verboseoption;
extern A68_BOOL  NQIACTR_nostructresultoption;
extern A68_109  FSIACTR_list;
/* --- End of imports from environment --- */


/* --- Imports from environ --- */
#define OQLACTR_modesstream 1
extern A68_INT  ZQLACTR_locdecstream(A68_INT );
extern A68_INT  EQLACTR_currentlevel(void);
/* --- End of imports from environ --- */


/* --- Imports from usefulops --- */
extern A68_VOID  RMAAOSF_scanto(A68_CHAR ,A68_VC ,A68_VC *);
extern A68_VOID  SNAAOSF_capitalised(A68_VC ,A68_VC *);
extern A68_VOID  ROAAOSF_whole(A68_INT ,A68_INT ,A68_VC *);
/* --- End of imports from usefulops --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void THAACTR(void);   /* centities */
extern void BCHACTR(void);   /* moduletracer */
extern void YRLACTR(void);   /* coutput */
extern void PIJACTR(void);   /* incvalue */
extern void AGMACTR(void);   /* uniquenameserver */
extern void ZDAACTR(void);   /* incmode */
extern void ODAACTR(void);   /* incinstallation */
extern void HPIACTR(void);   /* environment */
extern void KNLACTR(void);   /* environ */
extern void IKAAOSF(void);   /* usefulops */
/* --- end of DECS initialisation functions --- */
static A68_143   PLMACTR = {"$Id: modes.c,v 1.5.2.4 2004/09/27 03:04:20 teshields Exp $"}; 
A_GISVEC(A68_VC ,QLMACTR,PLMACTR,60)
static A68_145   ULMACTR = {"modes"}; 
A_GISVEC(A68_VC ,VLMACTR,ULMACTR,5)
static A68_146   WLMACTR = {"MODES("}; 
static A68_147   XLMACTR = {"): "}; 
A_GISVEC(A68_VC ,YLMACTR,WLMACTR,6)
A_GISVEC(A68_VC ,AMMACTR,XLMACTR,3)
static A68_145   CMMACTR = {"modes"}; 
A_GISVEC(A68_VC ,EMMACTR,CMMACTR,5)
static A68_154  FMMACTR_modes;
#define GMMACTR_dynamicbit 0X4U
#define HMMACTR_needsinitbit 0X8U
#define IMMACTR_hasdescriptors 0X10U
#define JMMACTR_typedefoutput 0X20U
#define KMMACTR_deflexoutput 0X40U
#define LMMACTR_incompletetypeoutput 0X80U
static A68_157   CSMACTR = {"MODES - proc info: non-REF mode"}; 
A_GISVEC(A68_VC ,DSMACTR,CSMACTR,31)
static A68_158   FSMACTR = {"MODES - proc info: mode type is proc or procp"}; 
A_GISVEC(A68_VC ,GSMACTR,FSMACTR,45)
static A68_160   XSMACTR = {"union or procp mode"}; 
A_GISVEC(A68_VC ,YSMACTR,XSMACTR,19)
static A68_161   HTMACTR = {"istruct, row, or flex row mode"}; 
A_GISVEC(A68_VC ,ITMACTR,HTMACTR,30)
static A68_163   QTMACTR = {"MODES - struct field: mode is not a struct"}; 
A_GISVEC(A68_VC ,RTMACTR,QTMACTR,42)
static A68_164   VTMACTR = {"MODES - struct fields: mode table is inconsistent"}; 
A_GISVEC(A68_VC ,WTMACTR,VTMACTR,49)
A68_88  BUMACTR_deproc;
A68_88  DUMACTR_elementmode;
A68_88  FUMACTR_istructlength;
A68_159  HUMACTR_constituents;
A68_159  JUMACTR_parameters;
static A68_165 * LUMACTR_rowlist;
static A68_165 * MUMACTR_vectorlist;
static A68_165 * NUMACTR_structlist;
static A68_165 * OUMACTR_unionlist;
static A68_170   AWMACTR = {"MODES - lookup: unknown list"}; 
A_GISVEC(A68_VC ,BWMACTR,AWMACTR,28)
static A68_171   IWMACTR = {"MODES - lookup: struct fields is NIL"}; 
A_GISVEC(A68_VC ,LWMACTR,IWMACTR,36)
static A68_171   CXMACTR = {"MODES - lookup: struct fields is NIL"}; 
A_GISVEC(A68_VC ,FXMACTR,CXMACTR,36)
static A68_174   PXMACTR = {"MODES - lookup: mode isnt row, vector, struct or union"}; 
A_GISVEC(A68_VC ,QXMACTR,PXMACTR,54)
static A68_176   QYMACTR = {"MODES - find deflex mode: struct fields is NIL"}; 
A_GISVEC(A68_VC ,TYMACTR,QYMACTR,46)
static A68_176   KZMACTR = {"MODES - find deflex mode: struct fields is NIL"}; 
A_GISVEC(A68_VC ,NZMACTR,KZMACTR,46)
static A68_177   YZMACTR = {"MODES - find deflex mode: mode list extra is NIL"}; 
A_GISVEC(A68_VC ,BANACTR,YZMACTR,48)
static A68_178   LANACTR = {"MODES - find deflex mode: deflexed mode is undefined for "}; 
A_GISVEC(A68_VC ,MANACTR,LANACTR,57)
static A68_179   YANACTR = {""}; 
A_GISVEC(A68_VC ,ZANACTR,YANACTR,0)
static A68_40   BBNACTR = {"MODE"}; 
A_GISVEC(A68_VC ,CBNACTR,BBNACTR,4)
static A68_179   KBNACTR = {""}; 
A_GISVEC(A68_VC ,LBNACTR,KBNACTR,0)
static A68_185   PENACTR = {"cannot map vacmode"}; 
A_GISVEC(A68_VC ,QENACTR,PENACTR,18)
static A68_160   TENACTR = {"cannot map skipmode"}; 
A_GISVEC(A68_VC ,UENACTR,TENACTR,19)
static A68_147   WENACTR = {"NIL"}; 
A_GISVEC(A68_VC ,XENACTR,WENACTR,3)
static A68_72   YENACTR = {"jmp_buf"}; 
A_GISVEC(A68_VC ,ZENACTR,YENACTR,7)
static A68_40   AFNACTR = {"VOID"}; 
A_GISVEC(A68_VC ,BFNACTR,AFNACTR,4)
static A68_186   CFNACTR = {"cannot map faultmode"}; 
A_GISVEC(A68_VC ,DFNACTR,CFNACTR,20)
static A68_40   FFNACTR = {"BOOL"}; 
A_GISVEC(A68_VC ,GFNACTR,FFNACTR,4)
static A68_40   HFNACTR = {"CHAR"}; 
A_GISVEC(A68_VC ,IFNACTR,HFNACTR,4)
static A68_186   JFNACTR = {"FORMAT not supported"}; 
A_GISVEC(A68_VC ,KFNACTR,JFNACTR,20)
static A68_145   MFNACTR = {"SBITS"}; 
A_GISVEC(A68_VC ,NFNACTR,MFNACTR,5)
static A68_145   OFNACTR = {"LBITS"}; 
A_GISVEC(A68_VC ,PFNACTR,OFNACTR,5)
static A68_40   QFNACTR = {"BITS"}; 
A_GISVEC(A68_VC ,RFNACTR,QFNACTR,4)
static A68_145   SFNACTR = {"LBITS"}; 
A_GISVEC(A68_VC ,TFNACTR,SFNACTR,5)
static A68_145   UFNACTR = {"SBITS"}; 
A_GISVEC(A68_VC ,VFNACTR,UFNACTR,5)
static A68_146   WFNACTR = {"LLBITS"}; 
A_GISVEC(A68_VC ,XFNACTR,WFNACTR,6)
static A68_146   YFNACTR = {"SSBITS"}; 
A_GISVEC(A68_VC ,ZFNACTR,YFNACTR,6)
static A68_40   AGNACTR = {"SINT"}; 
A_GISVEC(A68_VC ,BGNACTR,AGNACTR,4)
static A68_40   CGNACTR = {"LINT"}; 
A_GISVEC(A68_VC ,DGNACTR,CGNACTR,4)
static A68_147   EGNACTR = {"INT"}; 
A_GISVEC(A68_VC ,FGNACTR,EGNACTR,3)
static A68_40   GGNACTR = {"LINT"}; 
A_GISVEC(A68_VC ,HGNACTR,GGNACTR,4)
static A68_40   IGNACTR = {"SINT"}; 
A_GISVEC(A68_VC ,JGNACTR,IGNACTR,4)
static A68_145   KGNACTR = {"LLINT"}; 
A_GISVEC(A68_VC ,LGNACTR,KGNACTR,5)
static A68_145   MGNACTR = {"SSINT"}; 
A_GISVEC(A68_VC ,NGNACTR,MGNACTR,5)
static A68_145   OGNACTR = {"SREAL"}; 
A_GISVEC(A68_VC ,PGNACTR,OGNACTR,5)
static A68_145   QGNACTR = {"LREAL"}; 
A_GISVEC(A68_VC ,RGNACTR,QGNACTR,5)
static A68_40   SGNACTR = {"REAL"}; 
A_GISVEC(A68_VC ,TGNACTR,SGNACTR,4)
static A68_145   UGNACTR = {"LREAL"}; 
A_GISVEC(A68_VC ,VGNACTR,UGNACTR,5)
static A68_145   WGNACTR = {"SREAL"}; 
A_GISVEC(A68_VC ,XGNACTR,WGNACTR,5)
static A68_146   YGNACTR = {"LLREAL"}; 
A_GISVEC(A68_VC ,ZGNACTR,YGNACTR,6)
static A68_146   AHNACTR = {"SSREAL"}; 
A_GISVEC(A68_VC ,BHNACTR,AHNACTR,6)
static A68_146   CHNACTR = {"SCOMPL"}; 
A_GISVEC(A68_VC ,DHNACTR,CHNACTR,6)
static A68_146   EHNACTR = {"LCOMPL"}; 
A_GISVEC(A68_VC ,FHNACTR,EHNACTR,6)
static A68_145   GHNACTR = {"COMPL"}; 
A_GISVEC(A68_VC ,HHNACTR,GHNACTR,5)
static A68_146   IHNACTR = {"LCOMPL"}; 
A_GISVEC(A68_VC ,JHNACTR,IHNACTR,6)
static A68_146   KHNACTR = {"SCOMPL"}; 
A_GISVEC(A68_VC ,LHNACTR,KHNACTR,6)
static A68_72   MHNACTR = {"LLCOMPL"}; 
A_GISVEC(A68_VC ,NHNACTR,MHNACTR,7)
static A68_72   OHNACTR = {"SSCOMPL"}; 
A_GISVEC(A68_VC ,PHNACTR,OHNACTR,7)
static A68_187   QHNACTR = {"VC"}; 
A_GISVEC(A68_VC ,RHNACTR,QHNACTR,2)
static A68_187   SHNACTR = {"RC"}; 
A_GISVEC(A68_VC ,THNACTR,SHNACTR,2)
static A68_188   UHNACTR = {"cannot map collatmode"}; 
A_GISVEC(A68_VC ,VHNACTR,UHNACTR,21)
static A68_160   XHNACTR = {"XTYPE not supported"}; 
A_GISVEC(A68_VC ,YHNACTR,XHNACTR,19)
static A68_160   AINACTR = {"YTYPE not supported"}; 
A_GISVEC(A68_VC ,BINACTR,AINACTR,19)
static A68_145   DINACTR = {"mode "}; 
static A68_189   EINACTR = {" is not built in"}; 
A_GISVEC(A68_VC ,FINACTR,DINACTR,5)
A_GISVEC(A68_VC ,HINACTR,EINACTR,16)
static A68_40   OINACTR = {"A68_"}; 
A_GISVEC(A68_VC ,QINACTR,OINACTR,4)
static A68_191   SINACTR = {"struct A68t"}; 
A_GISVEC(A68_VC ,UINACTR,SINACTR,11)
static A68_40   VINACTR = {"A68_"}; 
A_GISVEC(A68_VC ,WINACTR,VINACTR,4)
static A68_145   UJNACTR = {"A_SZ_"}; 
A_GISVEC(A68_VC ,WJNACTR,UJNACTR,5)
static A68_40   AKNACTR = {"A68t"}; 
A_GISVEC(A68_VC ,CKNACTR,AKNACTR,4)
static A68_INT  IKNACTR_padno;
static A68_146   NKNACTR = {"A_PAD_"}; 
A_GISVEC(A68_VC ,OKNACTR,NKNACTR,6)
static A68_145   TKNACTR = {"(PAD_"}; 
A_GISVEC(A68_VC ,UKNACTR,TKNACTR,5)
static A68_193   FLNACTR = {"A_PAD_ISTRUCT("}; 
A_GISVEC(A68_VC ,GLNACTR,FLNACTR,14)
static A68_145   LLNACTR = {",PAD_"}; 
A_GISVEC(A68_VC ,MLNACTR,LLNACTR,5)
static A68_189   DMNACTR = {"write c typedef("}; 
A_GISVEC(A68_VC ,EMNACTR,DMNACTR,16)
static A68_195   IMNACTR = {"typedef "}; 
A_GISVEC(A68_VC ,JMNACTR,IMNACTR,8)
static A68_147   LMNACTR = {"/* "}; 
static A68_147   MMNACTR = {" */"}; 
A_GISVEC(A68_VC ,OMNACTR,LMNACTR,3)
A_GISVEC(A68_VC ,QMNACTR,MMNACTR,3)
static A68_179   RMNACTR = {""}; 
A_GISVEC(A68_VC ,SMNACTR,RMNACTR,0)
static A68_145   INNACTR = {";    "}; 
A_GISVEC(A68_VC ,JNNACTR,INNACTR,5)
static A68_195   WNNACTR = {"#define "}; 
A_GISVEC(A68_VC ,XNNACTR,WNNACTR,8)
static A68_195   HONACTR = {"#define "}; 
A_GISVEC(A68_VC ,IONACTR,HONACTR,8)
static A68_197   RONACTR = {"            "}; 
A_GISVEC(A68_VC ,SONACTR,RONACTR,12)
static A68_197   FQNACTR = {"A_PROCEDURE("}; 
A_GISVEC(A68_VC ,GQNACTR,FQNACTR,12)
static A68_187   QQNACTR = {",("}; 
A_GISVEC(A68_VC ,RQNACTR,QQNACTR,2)
static A68_40   WQNACTR = {"void"}; 
A_GISVEC(A68_VC ,XQNACTR,WQNACTR,4)
static A68_179   HRNACTR = {""}; 
A_GISVEC(A68_VC ,IRNACTR,HRNACTR,0)
static A68_179   RRNACTR = {""}; 
A_GISVEC(A68_VC ,SRNACTR,RRNACTR,0)
static A68_147   ASNACTR = {"),("}; 
A_GISVEC(A68_VC ,BSNACTR,ASNACTR,3)
static A68_179   LSNACTR = {""}; 
A_GISVEC(A68_VC ,MSNACTR,LSNACTR,0)
static A68_179   VSNACTR = {""}; 
A_GISVEC(A68_VC ,WSNACTR,VSNACTR,0)
static A68_179   HTNACTR = {""}; 
A_GISVEC(A68_VC ,ITNACTR,HTNACTR,0)
static A68_201   LTNACTR = {"void *));"}; 
A_GISVEC(A68_VC ,MTNACTR,LTNACTR,9)
static A68_201   YTNACTR = {"A_VECTOR("}; 
A_GISVEC(A68_VC ,ZTNACTR,YTNACTR,9)
static A68_187   IUNACTR = {");"}; 
A_GISVEC(A68_VC ,JUNACTR,IUNACTR,2)
static A68_146   WUNACTR = {"A_ROW("}; 
A_GISVEC(A68_VC ,XUNACTR,WUNACTR,6)
static A68_187   JVNACTR = {");"}; 
A_GISVEC(A68_VC ,KVNACTR,JVNACTR,2)
static A68_72   XVNACTR = {";      "}; 
A_GISVEC(A68_VC ,YVNACTR,XVNACTR,7)
static A68_72   LWNACTR = {"struct "}; 
A_GISVEC(A68_VC ,MWNACTR,LWNACTR,7)
static A68_202   RWNACTR = {" { A68_INT mode; union {"}; 
A_GISVEC(A68_VC ,SWNACTR,RWNACTR,24)
static A68_145   EXNACTR = {" mode"}; 
A_GISVEC(A68_VC ,FXNACTR,EXNACTR,5)
static A68_205   PXNACTR = {"} data; };"}; 
A_GISVEC(A68_VC ,QXNACTR,PXNACTR,10)
static A68_72   DYNACTR = {"struct "}; 
A_GISVEC(A68_VC ,EYNACTR,DYNACTR,7)
static A68_187   ZYNACTR = {"};"}; 
A_GISVEC(A68_VC ,AZNACTR,ZYNACTR,2)
static A68_205   IZNACTR = {"A_ISTRUCT("}; 
A_GISVEC(A68_VC ,JZNACTR,IZNACTR,10)
static A68_187   XZNACTR = {");"}; 
A_GISVEC(A68_VC ,YZNACTR,XZNACTR,2)
static A68_191   FAOACTR = {"A_STRAIGHT("}; 
static A68_195   GAOACTR = {"A68_VOID"}; 
A_GISVEC(A68_VC ,IAOACTR,GAOACTR,8)
A_GISVEC(A68_VC ,KAOACTR,FAOACTR,11)
static A68_187   RAOACTR = {");"}; 
A_GISVEC(A68_VC ,SAOACTR,RAOACTR,2)
static A68_208   CBOACTR = {"initialise mode table(REF ["}; 
static A68_146   DBOACTR = {"] MDE)"}; 
A_GISVEC(A68_VC ,EBOACTR,CBOACTR,27)
A_GISVEC(A68_VC ,GBOACTR,DBOACTR,6)
static A68_187   ZHOACTR = {": "}; 
A_GISVEC(A68_VC ,BIOACTR,ZHOACTR,2)
static A68_185   DIOACTR = {"------------------"}; 
A_GISVEC(A68_VC ,EIOACTR,DIOACTR,18)
static A68_187   IIOACTR = {": "}; 
static A68_193   JIOACTR = {" ---deflex--> "}; 
static A68_187   KIOACTR = {": "}; 
A_GISVEC(A68_VC ,MIOACTR,IIOACTR,2)
A_GISVEC(A68_VC ,OIOACTR,JIOACTR,14)
A_GISVEC(A68_VC ,QIOACTR,KIOACTR,2)
static A68_145   JJOACTR = {"  /* "}; 
static A68_147   KJOACTR = {" */"}; 
A_GISVEC(A68_VC ,LJOACTR,JJOACTR,5)
A_GISVEC(A68_VC ,MJOACTR,KJOACTR,3)
A68_213  TJOACTR_new;
typedef struct   /* env of non-global proc */
{
A68_150  AVMACTR_xmodes;
} FVMACTR_generator;
typedef struct   /* env of non-global proc */
{
A68_151  HWMACTR_strctfields;
} PWMACTR_generator;
typedef struct   /* env of non-global proc */
{
A68_151  PYMACTR_strctfields;
} XYMACTR_generator;
typedef struct   /* env of non-global proc */
{
A68_150  PZMACTR_deflexedmodestemp;
} TZMACTR_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  Mode;
A_PAD_INT(PAD_99)
} RBNACTR_rowmodename;
typedef struct   /* env of non-global proc */
{
A68_VC  KMNACTR_typedef;
A68_VC  TMNACTR_comment;
A68_INT  Stream;
A_PAD_INT(PAD_100)
} ZMNACTR_emittagtypedef;
typedef struct   /* env of non-global proc */
{
A68_INT  Stream;
A_PAD_INT(PAD_101)
A68_VC  TMNACTR_comment;
} TNNACTR_emitdeflextypedef;
typedef struct   /* env of non-global proc */
{
A68_152 * HMNACTR_entry;
A68_INT  ZLNACTR_mode;
A_PAD_INT(PAD_102)
A68_INT  Stream;
A_PAD_INT(PAD_103)
} APNACTR_emitincompletetype;
typedef struct   /* env of non-global proc */
{
A68_BOOL  Pre_declare;
A_PAD_BOOL(PAD_104)
A68_94  YONACTR_emitincompletetype;
A68_152 * HMNACTR_entry;
A68_INT  ZLNACTR_mode;
A_PAD_INT(PAD_105)
A68_INT  Stream;
A_PAD_INT(PAD_106)
A68_93  XMNACTR_emittagtypedef;
} MPNACTR_emitproctypedef;
typedef struct   /* env of non-global proc */
{
A68_BOOL  Pre_declare;
A_PAD_BOOL(PAD_107)
A68_94  YONACTR_emitincompletetype;
A68_INT  ZLNACTR_mode;
A_PAD_INT(PAD_108)
A68_INT  Stream;
A_PAD_INT(PAD_109)
A68_93  XMNACTR_emittagtypedef;
A68_152 * HMNACTR_entry;
A68_97  RNNACTR_emitdeflextypedef;
} TTNACTR_emitvectortypedef;
typedef struct   /* env of non-global proc */
{
A68_BOOL  Pre_declare;
A_PAD_BOOL(PAD_110)
A68_94  YONACTR_emitincompletetype;
A68_INT  ZLNACTR_mode;
A_PAD_INT(PAD_111)
A68_INT  Stream;
A_PAD_INT(PAD_112)
A68_93  XMNACTR_emittagtypedef;
A68_152 * HMNACTR_entry;
A68_97  RNNACTR_emitdeflextypedef;
} RUNACTR_emitarraytypedef;
typedef struct   /* env of non-global proc */
{
A68_INT  HBOACTR_unset;
A_PAD_INT(PAD_113)
A68_206  Mdes;
} KBOACTR_initialisemodes;
typedef struct   /* env of non-global proc */
{
A68_93  UFOACTR_finalisemode;
} WFOACTR_finalisemode;
typedef struct   /* env of non-global proc */
{
A68_INT  Nomodes;
A_PAD_INT(PAD_114)
} KHOACTR_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} ACNACTR_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} RCNACTR_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} WPNACTR_generator;
typedef struct   /* env of non-global proc */
{
A68_INT * RCOACTR_i;
} WCOACTR_generator;
typedef struct   /* env of non-global proc */
{
A68_INT * GDOACTR_i;
} LDOACTR_generator;

A_STATIC A68_VOID  TLMACTR_debugmessage(A68_INT  Level, A68_VC  M);

A_STATIC A68_BOOL  BMMACTR_debugging(void);

A68_INT  NMMACTR_deref(A68_INT  Mode);

A68_INT  RMMACTR_modetype(A68_INT  Mode);

A68_BOOL  VMMACTR_hasoneref(A68_INT  M);

A68_BOOL  ZMMACTR_isbool(A68_INT  M);

A68_BOOL  CNMACTR_ischar(A68_INT  M);

A68_BOOL  FNMACTR_isint(A68_INT  M);

A68_BOOL  INMACTR_islbits(A68_INT  M);

A68_BOOL  MNMACTR_islint(A68_INT  M);

A68_BOOL  QNMACTR_islreal(A68_INT  M);

A68_BOOL  UNMACTR_islcompl(A68_INT  M);

A68_BOOL  YNMACTR_isvec(A68_INT  M);

A68_BOOL  COMACTR_isrow(A68_INT  M);

A68_BOOL  GOMACTR_isfirmarray(A68_INT  M);

A68_BOOL  KOMACTR_isstraight(A68_INT  M);

A68_BOOL  NOMACTR_isflexvec(A68_INT  M);

A68_BOOL  ROMACTR_isflexrow(A68_INT  M);

A68_BOOL  VOMACTR_isflexarray(A68_INT  M);

A68_BOOL  ZOMACTR_isvector(A68_INT  Mode);

A68_BOOL  EPMACTR_isrow(A68_INT  Mode);

A68_BOOL  JPMACTR_isarray(A68_INT  Mode);

A68_BOOL  OPMACTR_isfirmarray(A68_INT  Mode);

A68_BOOL  TPMACTR_isflexarray(A68_INT  Mode);

A68_BOOL  YPMACTR_isstruct(A68_INT  Mode);

A68_BOOL  CQMACTR_isunion(A68_INT  Mode);

A68_BOOL  GQMACTR_isistruct(A68_INT  Mode);

A_STATIC A68_BOOL  KQMACTR_isstraight(A68_INT  Mode);

A68_BOOL  OQMACTR_iscompl(A68_INT  Mode);

A68_BOOL  SQMACTR_isproc(A68_INT  Mode);

A68_BOOL  WQMACTR_isprocp(A68_INT  Mode);

A68_BOOL  ARMACTR_hasrefs(A68_INT  Mode);

A68_BOOL  ERMACTR_iscstruct(A68_INT  Mode);

A68_INT  KRMACTR_derefmode(A68_INT  Mode);

A68_INT  NRMACTR_derefmodeok(A68_INT  Mode);

A_STATIC A68_INT  QRMACTR_auxmode(A68_INT  Mode);

A_STATIC A68_BITS  URMACTR_flags(A68_INT  Mode);

A68_BOOL  XRMACTR_dynamic(A68_INT  Mode);

A68_VOID  BSMACTR_procinfo(A68_INT  Mode, A68_153  *ReturnedValue);

A_STATIC A68_BOOL  PSMACTR_dynamicdescriptor(A68_INT  Mode);

A_STATIC A68_VOID  USMACTR_modelistextra(A68_INT  Mode, A68_150  *ReturnedValue);

A_STATIC A68_INT  ETMACTR_intextra(A68_INT  Mode);

A68_VOID  NTMACTR_structfields(A68_INT  Mode, A68_151  *ReturnedValue);

A68_INT  ZTMACTR_dimensions(A68_INT  Mode);

A_STATIC A68_VOID  TUMACTR_addtolist(A68_INT  Thismode, A68_150  Auxmodes, A68_INT  Dims, A68_165 ** List);

A_STATIC A68_VOID  EVMACTR_generator(A68_BOOL  CVMACTR_anonymous, A68_150  *ReturnedValue, void *NonLocals);

A_STATIC A68_BOOL  MVMACTR_(A68_150  A, A68_150  B);

A_STATIC A68_BOOL  TVMACTR_(A68_150  A, A68_150  B);

A_STATIC A68_INT  YVMACTR_lookup(A68_INT  Mode, A68_150  Auxmode, A68_INT  Dims);

A_STATIC A68_VOID  OWMACTR_generator(A68_BOOL  MWMACTR_anonymous, A68_172  *ReturnedValue, void *NonLocals);

A_STATIC A68_INT  UXMACTR_deflexedmode(A68_INT  Mode, A68_BOOL  Toplevel);

A_STATIC A68_INT  BYMACTR_findthedeflexmode(A68_INT  Mode, A68_BOOL  Toplevel);

A_STATIC A68_VOID  WYMACTR_generator(A68_BOOL  UYMACTR_anonymous, A68_150  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  SZMACTR_generator(A68_BOOL  QZMACTR_anonymous, A68_150  *ReturnedValue, void *NonLocals);

A68_INT  QANACTR_finddeflexmode(A68_INT  Mode);

A_STATIC A68_VOID  TANACTR_auxmodename(A68_INT  Mode, A68_VC  *ReturnedValue);

A68_VOID  FBNACTR_modename(A68_INT  Mode, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  QBNACTR_rowmodename(A68_VC  Rowtype, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  WBNACTR_modelist(A68_150  Modelist, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  ZBNACTR_generator(A68_BOOL  XBNACTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  NCNACTR_fieldlist(A68_151  Fields, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  QCNACTR_generator(A68_BOOL  OCNACTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  AENACTR_cfieldname(A68_148 * Sf, A68_VC  *ReturnedValue);

A68_VOID  IENACTR_select(A68_INT  Mode, A68_INT  Field, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  NENACTR_builtinmode(A68_INT  Mode, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  LINACTR_givectype(A68_INT  Mode, A68_BOOL  Tagged, A68_VC  *ReturnedValue);

A68_INT  CJNACTR_givecvariabletype(A68_INT  Mode, A68_BOOL  Identity);

A68_VOID  GJNACTR_ctype(A68_INT  Mode, A68_VC  *ReturnedValue);

A68_VOID  KJNACTR_cvartype(A68_INT  Mode, A68_VC  *ReturnedValue);

A68_VOID  OJNACTR_cast(A68_INT  Mode, A68_VC  *ReturnedValue);

A68_VOID  TJNACTR_csizeof(A68_INT  Mode, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  ZJNACTR_ctag(A68_INT  Mode, A68_VC  *ReturnedValue);

A68_VOID  FKNACTR_ctaggedtype(A68_INT  Mode, A68_VC  *ReturnedValue);

A68_VOID  LKNACTR_alignnextstructfield(A68_INT  Fieldmode, A68_INT  Stream);

A_STATIC A68_VOID  YLNACTR_writectypedef(A68_INT  Underefedmode, A68_INT  Stream, A68_BOOL  Pre_declare);

A_STATIC A68_VOID  YMNACTR_emittagtypedef(A68_INT  Mode, void *NonLocals);

A_STATIC A68_VOID  SNNACTR_emitdeflextypedef(A68_INT  Mode, A68_INT  Deflexmode, void *NonLocals);

A_STATIC A68_VOID  ZONACTR_emitincompletetype(void *NonLocals);

A_STATIC A68_VOID  LPNACTR_emitproctypedef(void *NonLocals);

A_STATIC A68_VOID  VPNACTR_generator(A68_BOOL  TPNACTR_anonymous, A68_150  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  STNACTR_emitvectortypedef(void *NonLocals);

A_STATIC A68_VOID  QUNACTR_emitarraytypedef(void *NonLocals);

A68_VOID  BBOACTR_initialisemodetable(A68_206  Mdes, A68_INT  Nomodes);

A_STATIC A68_VOID  JBOACTR_initialisemodes(void *NonLocals);

A_STATIC A68_VOID  QCOACTR_reducedmodelist(A68_71 * Modelist, A68_150  *ReturnedValue);

A_STATIC A68_VOID  VCOACTR_generator(A68_BOOL  TCOACTR_anonymous, A68_150  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  FDOACTR_reducedselist(A68_70 * Selist, A68_151  *ReturnedValue);

A_STATIC A68_VOID  KDOACTR_generator(A68_BOOL  IDOACTR_anonymous, A68_151  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  VFOACTR_finalisemode(A68_INT  Mode, void *NonLocals);

A_STATIC A68_VOID  JHOACTR_generator(A68_BOOL  HHOACTR_anonymous, A68_154  *ReturnedValue, void *NonLocals);

A68_VOID  UIOACTR_declarectemporary(A68_INT  Mode, A68_VC  Commenttext, A68_126  *ReturnedValue);

A_STATIC A68_VOID  VCOACTR_generator(A68_BOOL  TCOACTR_anonymous, A68_150  *ReturnedValue, void *NonLocals)
#define NL(x) (((WCOACTR_generator *)NonLocals)->x)
{ 
A68_150  XCOACTR;  /* clause result */
A68_150  YCOACTR;  /* OPERATORS - dynamic generator */
{ 
YCOACTR.upb = (*NL(RCOACTR_i)) ;
( TCOACTR_anonymous? A_VLOC(A68_INT ,YCOACTR): A_VHEAP(A68_INT ,YCOACTR) );
XCOACTR = YCOACTR;
} 
*ReturnedValue = (XCOACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  KDOACTR_generator(A68_BOOL  IDOACTR_anonymous, A68_151  *ReturnedValue, void *NonLocals)
#define NL(x) (((LDOACTR_generator *)NonLocals)->x)
{ 
A68_151  MDOACTR;  /* clause result */
A68_151  NDOACTR;  /* OPERATORS - dynamic generator */
{ 
NDOACTR.upb = (*NL(GDOACTR_i)) ;
( IDOACTR_anonymous? A_VLOC(A68_148 ,NDOACTR): A_VHEAP(A68_148 ,NDOACTR) );
MDOACTR = NDOACTR;
} 
*ReturnedValue = (MDOACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  ZBNACTR_generator(A68_BOOL  XBNACTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((ACNACTR_generator *)NonLocals)->x)
{ 
A68_VC  BCNACTR;  /* clause result */
A68_VC  CCNACTR;  /* OPERATORS - dynamic generator */
{ 
CCNACTR.upb = 0 ;
( XBNACTR_anonymous? A_VLOC(A68_CHAR ,CCNACTR): A_VHEAP(A68_CHAR ,CCNACTR) );
BCNACTR = CCNACTR;
} 
*ReturnedValue = (BCNACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  QCNACTR_generator(A68_BOOL  OCNACTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((RCNACTR_generator *)NonLocals)->x)
{ 
A68_VC  SCNACTR;  /* clause result */
A68_VC  TCNACTR;  /* OPERATORS - dynamic generator */
{ 
TCNACTR.upb = 0 ;
( OCNACTR_anonymous? A_VLOC(A68_CHAR ,TCNACTR): A_VHEAP(A68_CHAR ,TCNACTR) );
SCNACTR = TCNACTR;
} 
*ReturnedValue = (SCNACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  VPNACTR_generator(A68_BOOL  TPNACTR_anonymous, A68_150  *ReturnedValue, void *NonLocals)
#define NL(x) (((WPNACTR_generator *)NonLocals)->x)
{ 
A68_150  XPNACTR;  /* clause result */
A68_150  YPNACTR;  /* OPERATORS - dynamic generator */
{ 
YPNACTR.upb = 0 ;
( TPNACTR_anonymous? A_VLOC(A68_INT ,YPNACTR): A_VHEAP(A68_INT ,YPNACTR) );
XPNACTR = YPNACTR;
} 
*ReturnedValue = (XPNACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  QCOACTR_reducedmodelist(A68_71 * Modelist, A68_150  *ReturnedValue)
{ 
A68_INT  RCOACTR_i;
A68_71 * SCOACTR_list;
A68_167  UCOACTR_generator;   /* proc value of non-global proc */
A68_150  ZCOACTR;  /* avoid structure result */
A68_150  ADOACTR_extra;
A68_INT * BDOACTR_mode;
A68_INT  CDOACTR;  /* forall loop counter */
A68_150  DDOACTR;  /* clause result */
A_PROC_ENTRY(reducedmodelist);
 /* line 1179: */
 /* line 1180: */
{ 
RCOACTR_i = 0;
 /* line 1181: */
SCOACTR_list = Modelist;
 /* line 1183: */
for ( ;; )
{ 
 /* line 1184: */
 /* line 1185: */
if ( !((SCOACTR_list!=(A68_71 *)A68_NIL)) ) break;
SCOACTR_list = (*(&(SCOACTR_list->Rest)));
 /* line 1186: */
 /* line 1187: */
RCOACTR_i+=1;
}
 /* line 1189: */
A_CLOSURE( UCOACTR_generator, VCOACTR_generator, WCOACTR_generator );
(( WCOACTR_generator * ) ( UCOACTR_generator.nonlocals )) -> RCOACTR_i = (&RCOACTR_i);
A_CALLPROC(UCOACTR_generator,(A68_FALSE, &ZCOACTR),(A68_FALSE, &ZCOACTR,(UCOACTR_generator).nonlocals));
ADOACTR_extra = ZCOACTR;
 /* line 1190: */
SCOACTR_list = Modelist;
 /* line 1192: */
 /* line 1193: */
CDOACTR = ADOACTR_extra.upb -1;
BDOACTR_mode = ADOACTR_extra.data;
for (;CDOACTR-- >= 0;
(BDOACTR_mode++
) )
{
 /* line 1194: */
(*BDOACTR_mode) = (*(&(SCOACTR_list->Mode)));
 /* line 1195: */
 /* line 1196: */
SCOACTR_list = (*(&(SCOACTR_list->Rest)));
}
 /* line 1198: */
 /* line 1200: */
DDOACTR = ADOACTR_extra;
} 
A_PROC_EXIT(reducedmodelist);
*ReturnedValue = (DDOACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  FDOACTR_reducedselist(A68_70 * Selist, A68_151  *ReturnedValue)
{ 
A68_INT  GDOACTR_i;
A68_70 * HDOACTR_list;
A68_211  JDOACTR_generator;   /* proc value of non-global proc */
A68_151  ODOACTR;  /* avoid structure result */
A68_151  PDOACTR_fields;
A68_148 * QDOACTR_field;
A68_INT  RDOACTR;  /* forall loop counter */
A68_INT * SDOACTR;  /* YIELD */
A68_56 * TDOACTR;  /* YIELD */
A68_151  UDOACTR;  /* clause result */
A_PROC_ENTRY(reducedselist);
 /* line 1206: */
 /* line 1207: */
{ 
GDOACTR_i = 0;
 /* line 1208: */
HDOACTR_list = Selist;
 /* line 1210: */
for ( ;; )
{ 
 /* line 1211: */
 /* line 1212: */
if ( !((HDOACTR_list!=(A68_70 *)A68_NIL)) ) break;
HDOACTR_list = (*(&(HDOACTR_list->Rest)));
 /* line 1213: */
 /* line 1214: */
GDOACTR_i+=1;
}
 /* line 1216: */
A_CLOSURE( JDOACTR_generator, KDOACTR_generator, LDOACTR_generator );
(( LDOACTR_generator * ) ( JDOACTR_generator.nonlocals )) -> GDOACTR_i = (&GDOACTR_i);
A_CALLPROC(JDOACTR_generator,(A68_FALSE, &ODOACTR),(A68_FALSE, &ODOACTR,(JDOACTR_generator).nonlocals));
PDOACTR_fields = ODOACTR;
 /* line 1217: */
HDOACTR_list = Selist;
 /* line 1219: */
 /* line 1220: */
RDOACTR = PDOACTR_fields.upb -1;
QDOACTR_field = PDOACTR_fields.data;
for (;RDOACTR-- >= 0;
(QDOACTR_field++
) )
{
 /* line 1221: */
SDOACTR = (&(QDOACTR_field->Mode)) ;
(*SDOACTR) = (*(&(HDOACTR_list->Mode)));
 /* line 1222: */
TDOACTR = (&(QDOACTR_field->Name)) ;
(*TDOACTR) = (*(&(HDOACTR_list->Name)));
 /* line 1223: */
 /* line 1224: */
HDOACTR_list = (*(&(HDOACTR_list->Rest)));
}
 /* line 1226: */
 /* line 1228: */
UDOACTR = PDOACTR_fields;
} 
A_PROC_EXIT(reducedselist);
*ReturnedValue = (UDOACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  EVMACTR_generator(A68_BOOL  CVMACTR_anonymous, A68_150  *ReturnedValue, void *NonLocals)
#define NL(x) (((FVMACTR_generator *)NonLocals)->x)
{ 
A68_150  GVMACTR;  /* clause result */
A68_150  HVMACTR;  /* OPERATORS - dynamic generator */
{ 
HVMACTR.upb = NL(AVMACTR_xmodes).upb ;
( CVMACTR_anonymous? A_VLOC(A68_INT ,HVMACTR): A_VHEAP(A68_INT ,HVMACTR) );
GVMACTR = HVMACTR;
} 
*ReturnedValue = (GVMACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  OWMACTR_generator(A68_BOOL  MWMACTR_anonymous, A68_172  *ReturnedValue, void *NonLocals)
#define NL(x) (((PWMACTR_generator *)NonLocals)->x)
{ 
A68_172  QWMACTR;  /* clause result */
A68_172  RWMACTR;  /* OPERATORS - dynamic generator */
{ 
RWMACTR.upb = NL(HWMACTR_strctfields).upb ;
( MWMACTR_anonymous? A_VLOC(A68_56 ,RWMACTR): A_VHEAP(A68_56 ,RWMACTR) );
QWMACTR = RWMACTR;
} 
*ReturnedValue = (QWMACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  WYMACTR_generator(A68_BOOL  UYMACTR_anonymous, A68_150  *ReturnedValue, void *NonLocals)
#define NL(x) (((XYMACTR_generator *)NonLocals)->x)
{ 
A68_150  YYMACTR;  /* clause result */
A68_150  ZYMACTR;  /* OPERATORS - dynamic generator */
{ 
ZYMACTR.upb = NL(PYMACTR_strctfields).upb ;
( UYMACTR_anonymous? A_VLOC(A68_INT ,ZYMACTR): A_VHEAP(A68_INT ,ZYMACTR) );
YYMACTR = ZYMACTR;
} 
*ReturnedValue = (YYMACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  SZMACTR_generator(A68_BOOL  QZMACTR_anonymous, A68_150  *ReturnedValue, void *NonLocals)
#define NL(x) (((TZMACTR_generator *)NonLocals)->x)
{ 
A68_150  UZMACTR;  /* clause result */
A68_150  VZMACTR;  /* OPERATORS - dynamic generator */
{ 
VZMACTR.upb = NL(PZMACTR_deflexedmodestemp).upb ;
( QZMACTR_anonymous? A_VLOC(A68_INT ,VZMACTR): A_VHEAP(A68_INT ,VZMACTR) );
UZMACTR = VZMACTR;
} 
*ReturnedValue = (UZMACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  QBNACTR_rowmodename(A68_VC  Rowtype, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((RBNACTR_rowmodename *)NonLocals)->x)
{ 
A68_VC  SBNACTR;  /* clause result */
A68_VC  TBNACTR;  /* avoid structure result */
A68_VC  UBNACTR;  /* avoid structure result */
A_PROC_ENTRY(rowmodename);
 /* line 624: */
 /* line 625: */
 /* line 626: */
 /* line 627: */
KDHACTR_message( 44, &TBNACTR );
TANACTR_auxmodename( A_CALLPROC(DUMACTR_elementmode,(NL(Mode)),(NL(Mode),(DUMACTR_elementmode).nonlocals)), &UBNACTR );
SBNACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(Rowtype,A_C_TIMES(',',(ZTMACTR_dimensions(NL(Mode))-1))),TBNACTR),UBNACTR);
A_PROC_EXIT(rowmodename);
*ReturnedValue = (SBNACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  WBNACTR_modelist(A68_150  Modelist, A68_VC  *ReturnedValue)
{ 
A68_138  YBNACTR_generator;   /* proc value of non-global proc */
A68_181  ECNACTR;  /* avoid structure result */
A68_181  DCNACTR_result;
A68_INT  FCNACTR_mode;
A68_INT * GCNACTR;  /* forall control - []x */
A68_INT  HCNACTR;  /* forall loop counter */
A68_VC  ICNACTR;  /* avoid structure result */
A68_VC  JCNACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  KCNACTR;  /* clause result */
A68_VC  LCNACTR;  /* OPERATORS - trim index */
A_PROC_ENTRY(modelist);
 /* line 630: */
 /* line 631: */
{ 
A_CLOSURE( YBNACTR_generator, ZBNACTR_generator, ACNACTR_generator );
A_CALLPROC(YBNACTR_generator,(A68_TRUE, &ECNACTR),(A68_TRUE, &ECNACTR,(YBNACTR_generator).nonlocals));
DCNACTR_result = ECNACTR;
 /* line 632: */
 /* line 633: */
HCNACTR = Modelist.upb -1;
GCNACTR = Modelist.data;
for (;HCNACTR-- >= 0;
(GCNACTR++
) )
{
FCNACTR_mode = *GCNACTR;
 /* line 634: */
 /* line 635: */
TANACTR_auxmodename( FCNACTR_mode, &ICNACTR );
A_VC_PLUSAB(DCNACTR_result,A_VC_PLUS(ICNACTR,A_HVEC(JCNACTR,',',A68_CHAR )));
}
 /* line 636: */
 /* line 637: */
KCNACTR = A_VTRIM(LCNACTR,(*(&DCNACTR_result)),A_VTSCRIPT(&(LCNACTR.upb),(*(&DCNACTR_result)).upb,1,(DCNACTR_result.upb-1)));
} 
A_PROC_EXIT(modelist);
*ReturnedValue = (KCNACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  NCNACTR_fieldlist(A68_151  Fields, A68_VC  *ReturnedValue)
{ 
A68_138  PCNACTR_generator;   /* proc value of non-global proc */
A68_181  VCNACTR;  /* avoid structure result */
A68_181  UCNACTR_result;
A68_148  WCNACTR_field;
A68_148 * XCNACTR;  /* forall control - []x */
A68_INT  YCNACTR;  /* forall loop counter */
A68_VC  ZCNACTR;  /* avoid structure result */
A68_VC  ADNACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  BDNACTR;  /* clause result */
A68_VC  CDNACTR;  /* OPERATORS - trim index */
A_PROC_ENTRY(fieldlist);
 /* line 640: */
 /* line 641: */
{ 
A_CLOSURE( PCNACTR_generator, QCNACTR_generator, RCNACTR_generator );
A_CALLPROC(PCNACTR_generator,(A68_TRUE, &VCNACTR),(A68_TRUE, &VCNACTR,(PCNACTR_generator).nonlocals));
UCNACTR_result = VCNACTR;
 /* line 642: */
 /* line 643: */
YCNACTR = Fields.upb -1;
XCNACTR = Fields.data;
for (;YCNACTR-- >= 0;
(XCNACTR++
) )
{
WCNACTR_field = *XCNACTR;
 /* line 644: */
 /* line 645: */
TANACTR_auxmodename( WCNACTR_field.Mode, &ZCNACTR );
A_VC_PLUSAB(UCNACTR_result,A_VC_PLUS(ZCNACTR,A_HVEC(ADNACTR,',',A68_CHAR )));
}
 /* line 646: */
 /* line 647: */
BDNACTR = A_VTRIM(CDNACTR,(*(&UCNACTR_result)),A_VTSCRIPT(&(CDNACTR.upb),(*(&UCNACTR_result)).upb,1,(UCNACTR_result.upb-1)));
} 
A_PROC_EXIT(fieldlist);
*ReturnedValue = (BDNACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  YMNACTR_emittagtypedef(A68_INT  Mode, void *NonLocals)
#define NL(x) (((ZMNACTR_emittagtypedef *)NonLocals)->x)
{ 
A68_196  ANNACTR;  /* collateral clause result */
A68_136  BNNACTR;  /* OPERATORS - mode -> union mode */
A68_VC  CNNACTR;  /* avoid structure result */
A68_136  DNNACTR;  /* OPERATORS - mode -> union mode */
A68_136  ENNACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  FNNACTR;  /* YIELD */
A68_VC  GNNACTR;  /* avoid structure result */
A68_136  HNNACTR;  /* OPERATORS - mode -> union mode */
A68_136  KNNACTR;  /* OPERATORS - mode -> union mode */
A68_VC  LNNACTR;  /* YIELD */
A68_136  MNNACTR;  /* OPERATORS - mode -> union mode */
A68_136  NNNACTR;  /* OPERATORS - mode -> union mode */
A68_135  ONNACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(emittagtypedef);
 /* line 851: */
ANNACTR.data[0] = A_UNITE(BNNACTR,mode2,2,NL(KMNACTR_typedef));
 /* line 852: */
FKNACTR_ctaggedtype( Mode, &CNNACTR );
ANNACTR.data[1] = A_UNITE(DNNACTR,mode2,2,CNNACTR);
FNNACTR = ' ' ;
ANNACTR.data[2] = A_UNITE(ENNACTR,mode1,1,FNNACTR);
KJNACTR_cvartype( Mode, &GNNACTR );
ANNACTR.data[3] = A_UNITE(HNNACTR,mode2,2,GNNACTR);
LNNACTR = JNNACTR ;
ANNACTR.data[4] = A_UNITE(KNNACTR,mode2,2,LNNACTR);
 /* line 854: */
ANNACTR.data[5] = A_UNITE(MNNACTR,mode2,2,NL(TMNACTR_comment));
ANNACTR.data[6] = A_UNITE(NNNACTR,mode4,4,EIAACTR_cnewline);
 /* line 855: */
VBMACTR_writecstream(A_HISVEC(ONNACTR,ANNACTR,7,A68_136 ), NL(Stream));
A_PROC_EXIT(emittagtypedef);
return;
} 
#undef NL

A_STATIC A68_VOID  SNNACTR_emitdeflextypedef(A68_INT  Mode, A68_INT  Deflexmode, void *NonLocals)
#define NL(x) (((TNNACTR_emitdeflextypedef *)NonLocals)->x)
{ 
A68_BITS  UNNACTR;  /* ADICOPS - >= */
A68_198  VNNACTR;  /* collateral clause result */
A68_136  YNNACTR;  /* OPERATORS - mode -> union mode */
A68_VC  ZNNACTR;  /* YIELD */
A68_VC  AONACTR;  /* avoid structure result */
A68_136  BONACTR;  /* OPERATORS - mode -> union mode */
A68_136  CONACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  DONACTR;  /* YIELD */
A68_VC  EONACTR;  /* avoid structure result */
A68_136  FONACTR;  /* OPERATORS - mode -> union mode */
A68_136  GONACTR;  /* OPERATORS - mode -> union mode */
A68_136  JONACTR;  /* OPERATORS - mode -> union mode */
A68_VC  KONACTR;  /* YIELD */
A68_VC  LONACTR;  /* avoid structure result */
A68_136  MONACTR;  /* OPERATORS - mode -> union mode */
A68_136  NONACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  OONACTR;  /* YIELD */
A68_VC  PONACTR;  /* avoid structure result */
A68_136  QONACTR;  /* OPERATORS - mode -> union mode */
A68_136  TONACTR;  /* OPERATORS - mode -> union mode */
A68_VC  UONACTR;  /* YIELD */
A68_136  VONACTR;  /* OPERATORS - mode -> union mode */
A68_136  WONACTR;  /* OPERATORS - mode -> union mode */
A68_135  XONACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(emitdeflextypedef);
 /* line 858: */
 /* line 859: */
{ 
YLNACTR_writectypedef(Deflexmode, NL(Stream), A68_FALSE);
 /* line 861: */
 /* line 862: */
 /* line 864: */
UNNACTR = URMACTR_flags(Mode) ;
if ( !A_LB_GE(UNNACTR,JMMACTR_typedefoutput) )
{ 
ZNNACTR = XNNACTR ;
VNNACTR.data[0] = A_UNITE(YNNACTR,mode2,2,ZNNACTR);
KJNACTR_cvartype( Mode, &AONACTR );
VNNACTR.data[1] = A_UNITE(BONACTR,mode2,2,AONACTR);
DONACTR = ' ' ;
VNNACTR.data[2] = A_UNITE(CONACTR,mode1,1,DONACTR);
 /* line 865: */
KJNACTR_cvartype( Deflexmode, &EONACTR );
VNNACTR.data[3] = A_UNITE(FONACTR,mode2,2,EONACTR);
VNNACTR.data[4] = A_UNITE(GONACTR,mode4,4,EIAACTR_cnewline);
KONACTR = IONACTR ;
VNNACTR.data[5] = A_UNITE(JONACTR,mode2,2,KONACTR);
ZJNACTR_ctag( Mode, &LONACTR );
VNNACTR.data[6] = A_UNITE(MONACTR,mode2,2,LONACTR);
OONACTR = ' ' ;
VNNACTR.data[7] = A_UNITE(NONACTR,mode1,1,OONACTR);
 /* line 866: */
ZJNACTR_ctag( Deflexmode, &PONACTR );
VNNACTR.data[8] = A_UNITE(QONACTR,mode2,2,PONACTR);
UONACTR = SONACTR ;
VNNACTR.data[9] = A_UNITE(TONACTR,mode2,2,UONACTR);
 /* line 867: */
VNNACTR.data[10] = A_UNITE(VONACTR,mode2,2,NL(TMNACTR_comment));
VNNACTR.data[11] = A_UNITE(WONACTR,mode4,4,EIAACTR_cnewline);
 /* line 868: */
 /* line 869: */
 /* line 870: */
VBMACTR_writecstream(A_HISVEC(XONACTR,VNNACTR,12,A68_136 ), NL(Stream));
} 
} 
A_PROC_EXIT(emitdeflextypedef);
return;
} 
#undef NL

A_STATIC A68_VOID  ZONACTR_emitincompletetype(void *NonLocals)
#define NL(x) (((APNACTR_emitincompletetype *)NonLocals)->x)
{ 
A68_BITS  BPNACTR;  /* ADICOPS - >= */
A68_199  CPNACTR;  /* collateral clause result */
A68_VC  DPNACTR;  /* avoid structure result */
A68_136  EPNACTR;  /* OPERATORS - mode -> union mode */
A68_136  FPNACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  GPNACTR;  /* YIELD */
A68_136  HPNACTR;  /* OPERATORS - mode -> union mode */
A68_135  IPNACTR;  /* OPERATORS - istruct -> vector */
A68_BITS * JPNACTR;  /* YIELD */
A_PROC_ENTRY(emitincompletetype);
 /* line 874: */
 /* line 875: */
BPNACTR = (*(&(NL(HMNACTR_entry)->Flags))) ;
if ( !A_LB_GE(BPNACTR,LMMACTR_incompletetypeoutput) )
{ 
FKNACTR_ctaggedtype( NL(ZLNACTR_mode), &DPNACTR );
CPNACTR.data[0] = A_UNITE(EPNACTR,mode2,2,DPNACTR);
GPNACTR = ';' ;
CPNACTR.data[1] = A_UNITE(FPNACTR,mode1,1,GPNACTR);
CPNACTR.data[2] = A_UNITE(HPNACTR,mode4,4,EIAACTR_cnewline);
VBMACTR_writecstream(A_HISVEC(IPNACTR,CPNACTR,3,A68_136 ), NL(Stream));
 /* line 876: */
 /* line 877: */
JPNACTR = (&(NL(HMNACTR_entry)->Flags)) ;
(*JPNACTR) = (A68_BITS )((*(&(NL(HMNACTR_entry)->Flags)))|LMMACTR_incompletetypeoutput);
} 
A_PROC_EXIT(emitincompletetype);
return;
} 
#undef NL

A_STATIC A68_VOID  LPNACTR_emitproctypedef(void *NonLocals)
#define NL(x) (((MPNACTR_emitproctypedef *)NonLocals)->x)
{ 
A68_BITS * NPNACTR;  /* YIELD */
A68_INT  OPNACTR_deprocmode;
A68_BOOL  PPNACTR;  /* optbool result */
A68_BOOL  QPNACTR_needsstructresultparam;
A68_150  RPNACTR;  /* clause result */
A68_150  SPNACTR;  /* avoid structure result */
A68_167  UPNACTR_generator;   /* proc value of non-global proc */
A68_150  ZPNACTR;  /* avoid structure result */
A68_150  AQNACTR_params;
A68_INT * BQNACTR_p;
A68_INT  CQNACTR;  /* forall loop counter */
A68_192  DQNACTR;  /* collateral clause result */
A68_136  EQNACTR;  /* OPERATORS - mode -> union mode */
A68_136  HQNACTR;  /* OPERATORS - mode -> union mode */
A68_VC  IQNACTR;  /* YIELD */
A68_INT  JQNACTR;  /* clause result */
A68_VC  KQNACTR;  /* avoid structure result */
A68_136  LQNACTR;  /* OPERATORS - mode -> union mode */
A68_136  MQNACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  NQNACTR;  /* YIELD */
A68_VC  OQNACTR;  /* avoid structure result */
A68_136  PQNACTR;  /* OPERATORS - mode -> union mode */
A68_136  SQNACTR;  /* OPERATORS - mode -> union mode */
A68_VC  TQNACTR;  /* YIELD */
A68_135  UQNACTR;  /* OPERATORS - istruct -> vector */
A68_BOOL  VQNACTR;  /* optbool result */
A68_136  YQNACTR;  /* OPERATORS - mode -> union mode */
A68_VC  ZQNACTR;  /* YIELD */
A68_135  ARNACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_BOOL  BRNACTR_comma;
A68_INT * CRNACTR_p;
A68_INT  DRNACTR;  /* forall loop counter */
A68_200  ERNACTR;  /* collateral clause result */
A68_136  FRNACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  GRNACTR;  /* YIELD */
A68_136  JRNACTR;  /* OPERATORS - mode -> union mode */
A68_VC  KRNACTR;  /* YIELD */
A68_VC  LRNACTR;  /* avoid structure result */
A68_136  MRNACTR;  /* OPERATORS - mode -> union mode */
A68_135  NRNACTR;  /* OPERATORS - istruct -> vector */
A68_199  ORNACTR;  /* collateral clause result */
A68_136  PRNACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  QRNACTR;  /* YIELD */
A68_136  TRNACTR;  /* OPERATORS - mode -> union mode */
A68_VC  URNACTR;  /* YIELD */
A68_VC  VRNACTR;  /* avoid structure result */
A68_136  WRNACTR;  /* OPERATORS - mode -> union mode */
A68_136  XRNACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  YRNACTR;  /* YIELD */
A68_135  ZRNACTR;  /* OPERATORS - istruct -> vector */
A68_136  CSNACTR;  /* OPERATORS - mode -> union mode */
A68_VC  DSNACTR;  /* YIELD */
A68_135  ESNACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_BOOL  FSNACTR_comma;
A68_INT * GSNACTR_p;
A68_INT  HSNACTR;  /* forall loop counter */
A68_200  ISNACTR;  /* collateral clause result */
A68_136  JSNACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  KSNACTR;  /* YIELD */
A68_136  NSNACTR;  /* OPERATORS - mode -> union mode */
A68_VC  OSNACTR;  /* YIELD */
A68_VC  PSNACTR;  /* avoid structure result */
A68_136  QSNACTR;  /* OPERATORS - mode -> union mode */
A68_135  RSNACTR;  /* OPERATORS - istruct -> vector */
A68_199  SSNACTR;  /* collateral clause result */
A68_136  TSNACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  USNACTR;  /* YIELD */
A68_136  XSNACTR;  /* OPERATORS - mode -> union mode */
A68_VC  YSNACTR;  /* YIELD */
A68_VC  ZSNACTR;  /* avoid structure result */
A68_136  ATNACTR;  /* OPERATORS - mode -> union mode */
A68_136  BTNACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  CTNACTR;  /* YIELD */
A68_135  DTNACTR;  /* OPERATORS - istruct -> vector */
A68_199  ETNACTR;  /* collateral clause result */
A68_136  FTNACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  GTNACTR;  /* YIELD */
A68_136  JTNACTR;  /* OPERATORS - mode -> union mode */
A68_VC  KTNACTR;  /* YIELD */
A68_136  NTNACTR;  /* OPERATORS - mode -> union mode */
A68_VC  OTNACTR;  /* YIELD */
A68_136  PTNACTR;  /* OPERATORS - mode -> union mode */
A68_135  QTNACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(emitproctypedef);
 /* line 884: */
if ( NL(Pre_declare) )
{ 
 /* line 885: */
A_CALLPROC(NL(YONACTR_emitincompletetype),(),((NL(YONACTR_emitincompletetype)).nonlocals));
} 
else
{ 
NPNACTR = (&(NL(HMNACTR_entry)->Flags)) ;
(*NPNACTR) = (A68_BITS )((*(&(NL(HMNACTR_entry)->Flags)))|JMMACTR_typedefoutput);
 /* line 887: */
OPNACTR_deprocmode = A_CALLPROC(BUMACTR_deproc,(NL(ZLNACTR_mode)),(NL(ZLNACTR_mode),(BUMACTR_deproc).nonlocals));
 /* line 888: */
PPNACTR = NQIACTR_nostructresultoption;
if ( PPNACTR )
{PPNACTR = ERMACTR_iscstruct(OPNACTR_deprocmode);
}
QPNACTR_needsstructresultparam = PPNACTR;
 /* line 890: */
if ( WQMACTR_isprocp(NL(ZLNACTR_mode)) )
{ 
A_CALLPROC(JUMACTR_parameters,(NL(ZLNACTR_mode), &SPNACTR),(NL(ZLNACTR_mode), &SPNACTR,(JUMACTR_parameters).nonlocals));
RPNACTR = SPNACTR;
} 
else
{ 
A_CLOSURE( UPNACTR_generator, VPNACTR_generator, WPNACTR_generator );
A_CALLPROC(UPNACTR_generator,(A68_FALSE, &ZPNACTR),(A68_FALSE, &ZPNACTR,(UPNACTR_generator).nonlocals));
RPNACTR = ZPNACTR;
} 
AQNACTR_params = RPNACTR;
 /* line 894: */
YLNACTR_writectypedef(NMMACTR_deref(OPNACTR_deprocmode), NL(Stream), A68_TRUE);
 /* line 896: */
 /* line 897: */
CQNACTR = AQNACTR_params.upb -1;
BQNACTR_p = AQNACTR_params.data;
for (;CQNACTR-- >= 0;
(BQNACTR_p++
) )
{
 /* line 898: */
 /* line 899: */
YLNACTR_writectypedef(NMMACTR_deref((*BQNACTR_p)), NL(Stream), A68_TRUE);
}
 /* line 903: */
 /* line 904: */
 /* line 905: */
DQNACTR.data[0] = A_UNITE(EQNACTR,mode4,4,EIAACTR_cnewline);
 /* line 906: */
IQNACTR = GQNACTR ;
DQNACTR.data[1] = A_UNITE(HQNACTR,mode2,2,IQNACTR);
if ( QPNACTR_needsstructresultparam )
{ 
JQNACTR = UEAACTR_voidmode;
} 
else
{ 
JQNACTR = OPNACTR_deprocmode;
} 
FKNACTR_ctaggedtype( JQNACTR, &KQNACTR );
DQNACTR.data[2] = A_UNITE(LQNACTR,mode2,2,KQNACTR);
 /* line 907: */
NQNACTR = ',' ;
DQNACTR.data[3] = A_UNITE(MQNACTR,mode1,1,NQNACTR);
 /* line 908: */
ZJNACTR_ctag( NL(ZLNACTR_mode), &OQNACTR );
DQNACTR.data[4] = A_UNITE(PQNACTR,mode2,2,OQNACTR);
TQNACTR = RQNACTR ;
DQNACTR.data[5] = A_UNITE(SQNACTR,mode2,2,TQNACTR);
VBMACTR_writecstream(A_HISVEC(UQNACTR,DQNACTR,6,A68_136 ), NL(Stream));
 /* line 910: */
 /* line 911: */
VQNACTR = (AQNACTR_params.upb==0);
if ( VQNACTR )
{VQNACTR = !QPNACTR_needsstructresultparam;
}
 /* line 912: */
if ( VQNACTR )
{ 
 /* line 913: */
 /* line 914: */
ZQNACTR = XQNACTR ;
VBMACTR_writecstream(A_HVEC(ARNACTR,A_UNITE(YQNACTR,mode2,2,ZQNACTR),A68_136 ), NL(Stream));
} 
else
{ 
BRNACTR_comma = A68_FALSE;
 /* line 915: */
 /* line 916: */
DRNACTR = AQNACTR_params.upb -1;
CRNACTR_p = AQNACTR_params.data;
for (;DRNACTR-- >= 0;
(CRNACTR_p++
) )
{
 /* line 917: */
if ( BRNACTR_comma )
{ 
GRNACTR = ',' ;
ERNACTR.data[0] = A_UNITE(FRNACTR,mode1,1,GRNACTR);
} 
else
{ 
KRNACTR = IRNACTR ;
ERNACTR.data[0] = A_UNITE(JRNACTR,mode2,2,KRNACTR);
} 
FKNACTR_ctaggedtype( (*CRNACTR_p), &LRNACTR );
ERNACTR.data[1] = A_UNITE(MRNACTR,mode2,2,LRNACTR);
VBMACTR_writecstream(A_HISVEC(NRNACTR,ERNACTR,2,A68_136 ), NL(Stream));
 /* line 918: */
 /* line 919: */
BRNACTR_comma = A68_TRUE;
}
 /* line 921: */
 /* line 922: */
 /* line 923: */
if ( QPNACTR_needsstructresultparam )
{ 
if ( BRNACTR_comma )
{ 
QRNACTR = ',' ;
ORNACTR.data[0] = A_UNITE(PRNACTR,mode1,1,QRNACTR);
} 
else
{ 
URNACTR = SRNACTR ;
ORNACTR.data[0] = A_UNITE(TRNACTR,mode2,2,URNACTR);
} 
FKNACTR_ctaggedtype( OPNACTR_deprocmode, &VRNACTR );
ORNACTR.data[1] = A_UNITE(WRNACTR,mode2,2,VRNACTR);
YRNACTR = '*' ;
ORNACTR.data[2] = A_UNITE(XRNACTR,mode1,1,YRNACTR);
 /* line 924: */
 /* line 925: */
VBMACTR_writecstream(A_HISVEC(ZRNACTR,ORNACTR,3,A68_136 ), NL(Stream));
} 
} 
 /* line 927: */
DSNACTR = BSNACTR ;
VBMACTR_writecstream(A_HVEC(ESNACTR,A_UNITE(CSNACTR,mode2,2,DSNACTR),A68_136 ), NL(Stream));
 /* line 929: */
FSNACTR_comma = A68_FALSE;
 /* line 930: */
 /* line 931: */
HSNACTR = AQNACTR_params.upb -1;
GSNACTR_p = AQNACTR_params.data;
for (;HSNACTR-- >= 0;
(GSNACTR_p++
) )
{
 /* line 932: */
if ( FSNACTR_comma )
{ 
KSNACTR = ',' ;
ISNACTR.data[0] = A_UNITE(JSNACTR,mode1,1,KSNACTR);
} 
else
{ 
OSNACTR = MSNACTR ;
ISNACTR.data[0] = A_UNITE(NSNACTR,mode2,2,OSNACTR);
} 
FKNACTR_ctaggedtype( (*GSNACTR_p), &PSNACTR );
ISNACTR.data[1] = A_UNITE(QSNACTR,mode2,2,PSNACTR);
VBMACTR_writecstream(A_HISVEC(RSNACTR,ISNACTR,2,A68_136 ), NL(Stream));
 /* line 933: */
 /* line 934: */
FSNACTR_comma = A68_TRUE;
}
 /* line 936: */
 /* line 937: */
 /* line 938: */
if ( QPNACTR_needsstructresultparam )
{ 
if ( FSNACTR_comma )
{ 
USNACTR = ',' ;
SSNACTR.data[0] = A_UNITE(TSNACTR,mode1,1,USNACTR);
} 
else
{ 
YSNACTR = WSNACTR ;
SSNACTR.data[0] = A_UNITE(XSNACTR,mode2,2,YSNACTR);
} 
FKNACTR_ctaggedtype( OPNACTR_deprocmode, &ZSNACTR );
SSNACTR.data[1] = A_UNITE(ATNACTR,mode2,2,ZSNACTR);
CTNACTR = '*' ;
SSNACTR.data[2] = A_UNITE(BTNACTR,mode1,1,CTNACTR);
VBMACTR_writecstream(A_HISVEC(DTNACTR,SSNACTR,3,A68_136 ), NL(Stream));
 /* line 939: */
 /* line 940: */
FSNACTR_comma = A68_TRUE;
} 
 /* line 942: */
if ( FSNACTR_comma )
{ 
GTNACTR = ',' ;
ETNACTR.data[0] = A_UNITE(FTNACTR,mode1,1,GTNACTR);
} 
else
{ 
KTNACTR = ITNACTR ;
ETNACTR.data[0] = A_UNITE(JTNACTR,mode2,2,KTNACTR);
} 
OTNACTR = MTNACTR ;
ETNACTR.data[1] = A_UNITE(NTNACTR,mode2,2,OTNACTR);
ETNACTR.data[2] = A_UNITE(PTNACTR,mode4,4,EIAACTR_cnewline);
VBMACTR_writecstream(A_HISVEC(QTNACTR,ETNACTR,3,A68_136 ), NL(Stream));
 /* line 944: */
 /* line 946: */
A_CALLPROC(NL(XMNACTR_emittagtypedef),(NL(ZLNACTR_mode)),(NL(ZLNACTR_mode),(NL(XMNACTR_emittagtypedef)).nonlocals));
} 
A_PROC_EXIT(emitproctypedef);
return;
} 
#undef NL

A_STATIC A68_VOID  STNACTR_emitvectortypedef(void *NonLocals)
#define NL(x) (((TTNACTR_emitvectortypedef *)NonLocals)->x)
{ 
A68_INT  UTNACTR_deflexmode;
A68_BOOL  VTNACTR;  /* clause result */
A68_INT  WTNACTR_elemmode;
A68_192  XTNACTR;  /* collateral clause result */
A68_136  AUNACTR;  /* OPERATORS - mode -> union mode */
A68_VC  BUNACTR;  /* YIELD */
A68_VC  CUNACTR;  /* avoid structure result */
A68_136  DUNACTR;  /* OPERATORS - mode -> union mode */
A68_136  EUNACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  FUNACTR;  /* YIELD */
A68_VC  GUNACTR;  /* avoid structure result */
A68_136  HUNACTR;  /* OPERATORS - mode -> union mode */
A68_136  KUNACTR;  /* OPERATORS - mode -> union mode */
A68_VC  LUNACTR;  /* YIELD */
A68_136  MUNACTR;  /* OPERATORS - mode -> union mode */
A68_135  NUNACTR;  /* OPERATORS - istruct -> vector */
A68_BITS * OUNACTR;  /* YIELD */
A_PROC_ENTRY(emitvectortypedef);
 /* line 952: */
if ( NL(Pre_declare) )
{ 
A_CALLPROC(NL(YONACTR_emitincompletetype),(),((NL(YONACTR_emitincompletetype)).nonlocals));
} 
else
{ 
{ 
UTNACTR_deflexmode = QANACTR_finddeflexmode(NL(ZLNACTR_mode));
 /* line 953: */
 /* line 955: */
 /* line 957: */
VTNACTR = (UTNACTR_deflexmode==NL(ZLNACTR_mode));
if ( VTNACTR )
{ 
WTNACTR_elemmode = A_CALLPROC(DUMACTR_elementmode,(NL(ZLNACTR_mode)),(NL(ZLNACTR_mode),(DUMACTR_elementmode).nonlocals));
 /* line 959: */
 /* line 960: */
BUNACTR = ZTNACTR ;
XTNACTR.data[0] = A_UNITE(AUNACTR,mode2,2,BUNACTR);
 /* line 961: */
FKNACTR_ctaggedtype( WTNACTR_elemmode, &CUNACTR );
XTNACTR.data[1] = A_UNITE(DUNACTR,mode2,2,CUNACTR);
FUNACTR = ',' ;
XTNACTR.data[2] = A_UNITE(EUNACTR,mode1,1,FUNACTR);
 /* line 962: */
ZJNACTR_ctag( NL(ZLNACTR_mode), &GUNACTR );
XTNACTR.data[3] = A_UNITE(HUNACTR,mode2,2,GUNACTR);
 /* line 963: */
LUNACTR = JUNACTR ;
XTNACTR.data[4] = A_UNITE(KUNACTR,mode2,2,LUNACTR);
XTNACTR.data[5] = A_UNITE(MUNACTR,mode4,4,EIAACTR_cnewline);
 /* line 964: */
VBMACTR_writecstream(A_HISVEC(NUNACTR,XTNACTR,6,A68_136 ), NL(Stream));
 /* line 965: */
A_CALLPROC(NL(XMNACTR_emittagtypedef),(NL(ZLNACTR_mode)),(NL(ZLNACTR_mode),(NL(XMNACTR_emittagtypedef)).nonlocals));
 /* line 967: */
OUNACTR = (&(NL(HMNACTR_entry)->Flags)) ;
(*OUNACTR) = (A68_BITS )((*(&(NL(HMNACTR_entry)->Flags)))|JMMACTR_typedefoutput);
 /* line 968: */
 /* line 969: */
 /* line 970: */
YLNACTR_writectypedef(WTNACTR_elemmode, NL(Stream), A68_FALSE);
} 
else
{ 
 /* line 971: */
A_CALLPROC(NL(RNNACTR_emitdeflextypedef),(NL(ZLNACTR_mode), UTNACTR_deflexmode),(NL(ZLNACTR_mode), UTNACTR_deflexmode,(NL(RNNACTR_emitdeflextypedef)).nonlocals));
} 
} 
} 
A_PROC_EXIT(emitvectortypedef);
return;
} 
#undef NL

A_STATIC A68_VOID  QUNACTR_emitarraytypedef(void *NonLocals)
#define NL(x) (((RUNACTR_emitarraytypedef *)NonLocals)->x)
{ 
A68_INT  SUNACTR_deflexmode;
A68_BOOL  TUNACTR;  /* clause result */
A68_INT  UUNACTR_elemmode;
A68_196  VUNACTR;  /* collateral clause result */
A68_VC  YUNACTR;  /* avoid structure result */
A68_136  ZUNACTR;  /* OPERATORS - mode -> union mode */
A68_VC  AVNACTR;  /* YIELD */
A68_136  BVNACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  CVNACTR;  /* YIELD */
A68_VC  DVNACTR;  /* avoid structure result */
A68_136  EVNACTR;  /* OPERATORS - mode -> union mode */
A68_136  FVNACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  GVNACTR;  /* YIELD */
A68_VC  HVNACTR;  /* avoid structure result */
A68_136  IVNACTR;  /* OPERATORS - mode -> union mode */
A68_136  LVNACTR;  /* OPERATORS - mode -> union mode */
A68_VC  MVNACTR;  /* YIELD */
A68_136  NVNACTR;  /* OPERATORS - mode -> union mode */
A68_135  OVNACTR;  /* OPERATORS - istruct -> vector */
A68_BITS * PVNACTR;  /* YIELD */
A_PROC_ENTRY(emitarraytypedef);
 /* line 977: */
if ( NL(Pre_declare) )
{ 
A_CALLPROC(NL(YONACTR_emitincompletetype),(),((NL(YONACTR_emitincompletetype)).nonlocals));
} 
else
{ 
{ 
SUNACTR_deflexmode = QANACTR_finddeflexmode(NL(ZLNACTR_mode));
 /* line 978: */
 /* line 980: */
 /* line 981: */
TUNACTR = (SUNACTR_deflexmode==NL(ZLNACTR_mode));
if ( TUNACTR )
{ 
UUNACTR_elemmode = A_CALLPROC(DUMACTR_elementmode,(NL(ZLNACTR_mode)),(NL(ZLNACTR_mode),(DUMACTR_elementmode).nonlocals));
 /* line 983: */
 /* line 984: */
 /* line 985: */
FKNACTR_ctaggedtype( UUNACTR_elemmode, &YUNACTR );
AVNACTR = A_VC_PLUS(XUNACTR,YUNACTR) ;
VUNACTR.data[0] = A_UNITE(ZUNACTR,mode2,2,AVNACTR);
CVNACTR = ',' ;
VUNACTR.data[1] = A_UNITE(BVNACTR,mode1,1,CVNACTR);
 /* line 986: */
ZJNACTR_ctag( NL(ZLNACTR_mode), &DVNACTR );
VUNACTR.data[2] = A_UNITE(EVNACTR,mode2,2,DVNACTR);
GVNACTR = ',' ;
VUNACTR.data[3] = A_UNITE(FVNACTR,mode1,1,GVNACTR);
 /* line 987: */
ROAAOSF_whole( ZTMACTR_dimensions(NL(ZLNACTR_mode)), 0, &HVNACTR );
VUNACTR.data[4] = A_UNITE(IVNACTR,mode2,2,HVNACTR);
 /* line 988: */
MVNACTR = KVNACTR ;
VUNACTR.data[5] = A_UNITE(LVNACTR,mode2,2,MVNACTR);
VUNACTR.data[6] = A_UNITE(NVNACTR,mode4,4,EIAACTR_cnewline);
 /* line 989: */
VBMACTR_writecstream(A_HISVEC(OVNACTR,VUNACTR,7,A68_136 ), NL(Stream));
 /* line 990: */
A_CALLPROC(NL(XMNACTR_emittagtypedef),(NL(ZLNACTR_mode)),(NL(ZLNACTR_mode),(NL(XMNACTR_emittagtypedef)).nonlocals));
 /* line 992: */
PVNACTR = (&(NL(HMNACTR_entry)->Flags)) ;
(*PVNACTR) = (A68_BITS )((*(&(NL(HMNACTR_entry)->Flags)))|JMMACTR_typedefoutput);
 /* line 993: */
 /* line 994: */
 /* line 995: */
YLNACTR_writectypedef(UUNACTR_elemmode, NL(Stream), A68_FALSE);
} 
else
{ 
 /* line 996: */
A_CALLPROC(NL(RNNACTR_emitdeflextypedef),(NL(ZLNACTR_mode), SUNACTR_deflexmode),(NL(ZLNACTR_mode), SUNACTR_deflexmode,(NL(RNNACTR_emitdeflextypedef)).nonlocals));
} 
} 
} 
A_PROC_EXIT(emitarraytypedef);
return;
} 
#undef NL

A_STATIC A68_VOID  JBOACTR_initialisemodes(void *NonLocals)
#define NL(x) (((KBOACTR_initialisemodes *)NonLocals)->x)
{ 
A68_152  LBOACTR;  /* collateral clause result */
A68_149  MBOACTR;  /* OPERATORS - mode -> union mode */
A68_152  NBOACTR_primitiveentry;
A68_152  OBOACTR;  /* collateral clause result */
A68_149  PBOACTR;  /* OPERATORS - mode -> union mode */
A68_152  QBOACTR_procentry;
A68_152  RBOACTR;  /* collateral clause result */
A68_149  SBOACTR;  /* OPERATORS - mode -> union mode */
A68_152  TBOACTR_procpentry;
A68_152  UBOACTR;  /* collateral clause result */
A68_149  VBOACTR;  /* OPERATORS - mode -> union mode */
A68_152  WBOACTR_unionentry;
A68_152  XBOACTR;  /* collateral clause result */
A68_149  YBOACTR;  /* OPERATORS - mode -> union mode */
A68_152  ZBOACTR_structentry;
A68_152  ACOACTR;  /* collateral clause result */
A68_149  BCOACTR;  /* OPERATORS - mode -> union mode */
A68_152  CCOACTR_istructentry;
A68_152  DCOACTR;  /* collateral clause result */
A68_149  ECOACTR;  /* OPERATORS - mode -> union mode */
A68_152  FCOACTR_vectorentry;
A68_152  GCOACTR;  /* collateral clause result */
A68_149  HCOACTR;  /* OPERATORS - mode -> union mode */
A68_152  ICOACTR_rowentry;
A68_152  JCOACTR;  /* collateral clause result */
A68_149  KCOACTR;  /* OPERATORS - mode -> union mode */
A68_152  LCOACTR_straightentry;
A68_152  MCOACTR;  /* collateral clause result */
A68_149  NCOACTR;  /* OPERATORS - mode -> union mode */
A68_152  OCOACTR_dummyentry;
A68_INT  VDOACTR_i;
A68_59 * WDOACTR_mde;
A68_152 * XDOACTR_mode;
A68_206  YDOACTR;  /* OPERATORS - trim index */
A68_206  ZDOACTR;  /* forall yield */
A68_154  AEOACTR;  /* OPERATORS - trim index */
A68_154  BEOACTR;  /* forall yield */
A68_INT  CEOACTR;  /* forall loop counter */
A68_59  DEOACTR;  /* united object - for case conformity */
A68_INT  EEOACTR_primitive;
A68_INT * FEOACTR;  /* YIELD */
A68_152  GEOACTR;  /* clause result */
A68_63 * HEOACTR_proc;
A68_INT * IEOACTR;  /* YIELD */
A68_61 * JEOACTR_procp;
A68_INT * KEOACTR;  /* YIELD */
A68_150  LEOACTR;  /* avoid structure result */
A68_149  MEOACTR;  /* OPERATORS - mode -> union mode */
A68_149 * NEOACTR;  /* YIELD */
A68_60 * OEOACTR_union;
A68_150  PEOACTR;  /* avoid structure result */
A68_149  QEOACTR;  /* OPERATORS - mode -> union mode */
A68_149 * REOACTR;  /* YIELD */
A68_62 * SEOACTR_struct;
A68_151  TEOACTR;  /* avoid structure result */
A68_149  UEOACTR;  /* OPERATORS - mode -> union mode */
A68_149 * VEOACTR;  /* YIELD */
A68_58 * WEOACTR_istruct;
A68_INT * XEOACTR;  /* YIELD */
A68_149  YEOACTR;  /* OPERATORS - mode -> union mode */
A68_INT  ZEOACTR;  /* YIELD */
A68_149 * AFOACTR;  /* YIELD */
A68_54 * BFOACTR_array;
A68_150  CFOACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  DFOACTR;  /* clause result */
A68_INT * EFOACTR;  /* YIELD */
A68_INT * FFOACTR;  /* YIELD */
A68_149  GFOACTR;  /* OPERATORS - mode -> union mode */
A68_INT  HFOACTR;  /* YIELD */
A68_149 * IFOACTR;  /* YIELD */
A68_64 * JFOACTR_vctor;
A68_150  KFOACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  LFOACTR;  /* clause result */
A68_INT * MFOACTR;  /* YIELD */
A68_INT * NFOACTR;  /* YIELD */
A68_65 * OFOACTR_straight;
A68_INT * PFOACTR;  /* YIELD */
A68_152 * QFOACTR;  /* YIELD */
A68_152 * RFOACTR;  /* YIELD */
A68_152 * SFOACTR;  /* YIELD */
A_PROC_ENTRY(initialisemodes);
{ 
LBOACTR.Type = EEAACTR_primitive;
LBOACTR.Auxmode = NL(HBOACTR_unset);
LBOACTR.Deflexedmode = PEAACTR_nomode;
LBOACTR.Finalised = A68_TRUE;
LBOACTR.Extra = A_EMPTY(MBOACTR,4);
LBOACTR.Flags = 0X0U;
NBOACTR_primitiveentry = LBOACTR;
 /* line 1165: */
OBOACTR.Type = FEAACTR_proc;
OBOACTR.Auxmode = NL(HBOACTR_unset);
OBOACTR.Deflexedmode = PEAACTR_nomode;
OBOACTR.Finalised = A68_FALSE;
OBOACTR.Extra = A_EMPTY(PBOACTR,4);
OBOACTR.Flags = 0X0U;
QBOACTR_procentry = OBOACTR;
 /* line 1166: */
RBOACTR.Type = GEAACTR_procp;
RBOACTR.Auxmode = NL(HBOACTR_unset);
RBOACTR.Deflexedmode = PEAACTR_nomode;
RBOACTR.Finalised = A68_FALSE;
RBOACTR.Extra = A_UNITE(SBOACTR,mode1,1,NL(HBOACTR_unset));
RBOACTR.Flags = 0X0U;
TBOACTR_procpentry = RBOACTR;
 /* line 1167: */
UBOACTR.Type = HEAACTR_union;
UBOACTR.Auxmode = NL(HBOACTR_unset);
UBOACTR.Deflexedmode = PEAACTR_nomode;
UBOACTR.Finalised = A68_FALSE;
UBOACTR.Extra = A_UNITE(VBOACTR,mode1,1,NL(HBOACTR_unset));
UBOACTR.Flags = 0X0U;
WBOACTR_unionentry = UBOACTR;
 /* line 1168: */
XBOACTR.Type = IEAACTR_struct;
XBOACTR.Auxmode = NL(HBOACTR_unset);
XBOACTR.Deflexedmode = PEAACTR_nomode;
XBOACTR.Finalised = A68_FALSE;
XBOACTR.Extra = A_UNITE(YBOACTR,mode1,1,NL(HBOACTR_unset));
XBOACTR.Flags = 0X0U;
ZBOACTR_structentry = XBOACTR;
 /* line 1169: */
ACOACTR.Type = JEAACTR_istruct;
ACOACTR.Auxmode = NL(HBOACTR_unset);
ACOACTR.Deflexedmode = PEAACTR_nomode;
ACOACTR.Finalised = A68_FALSE;
ACOACTR.Extra = A_UNITE(BCOACTR,mode1,1,NL(HBOACTR_unset));
ACOACTR.Flags = 0X0U;
CCOACTR_istructentry = ACOACTR;
 /* line 1170: */
DCOACTR.Type = NL(HBOACTR_unset);
DCOACTR.Auxmode = NL(HBOACTR_unset);
DCOACTR.Deflexedmode = PEAACTR_nomode;
DCOACTR.Finalised = A68_TRUE;
DCOACTR.Extra = A_EMPTY(ECOACTR,4);
DCOACTR.Flags = GMMACTR_dynamicbit;
FCOACTR_vectorentry = DCOACTR;
 /* line 1171: */
GCOACTR.Type = NL(HBOACTR_unset);
GCOACTR.Auxmode = NL(HBOACTR_unset);
GCOACTR.Deflexedmode = PEAACTR_nomode;
GCOACTR.Finalised = A68_FALSE;
GCOACTR.Extra = A_UNITE(HCOACTR,mode1,1,NL(HBOACTR_unset));
GCOACTR.Flags = GMMACTR_dynamicbit;
ICOACTR_rowentry = GCOACTR;
 /* line 1172: */
JCOACTR.Type = OEAACTR_straight;
JCOACTR.Auxmode = NL(HBOACTR_unset);
JCOACTR.Deflexedmode = PEAACTR_nomode;
JCOACTR.Finalised = A68_TRUE;
JCOACTR.Extra = A_EMPTY(KCOACTR,4);
JCOACTR.Flags = GMMACTR_dynamicbit;
LCOACTR_straightentry = JCOACTR;
 /* line 1173: */
MCOACTR.Type = NL(HBOACTR_unset);
MCOACTR.Auxmode = NL(HBOACTR_unset);
MCOACTR.Deflexedmode = PEAACTR_nomode;
MCOACTR.Finalised = A68_TRUE;
MCOACTR.Extra = A_UNITE(NCOACTR,mode1,1,NL(HBOACTR_unset));
MCOACTR.Flags = 0X0U;
OCOACTR_dummyentry = MCOACTR;
 /* line 1175: */
 /* line 1202: */
 /* line 1232: */
VDOACTR_i = 1;
 /* line 1234: */
 /* line 1235: */
ZDOACTR = A_R1TRIM(YDOACTR,(NL(Mdes)),A_RTSCRIPT(&(YDOACTR.dim[0]),&((NL(Mdes)).dim[0]),VDOACTR_i,(NL(Mdes)).dim[0].upb,1)) ;
BEOACTR = A_R1TRIM(AEOACTR,(FMMACTR_modes),A_RTSCRIPT(&(AEOACTR.dim[0]),&((FMMACTR_modes).dim[0]),VDOACTR_i,(FMMACTR_modes).dim[0].upb,1)) ;
CEOACTR = ZDOACTR.dim[0].upb - ZDOACTR.dim[0].lwb;
if ( CEOACTR != BEOACTR.dim[0].upb - BEOACTR.dim[0].lwb )
{ A_ERROR( "mismatched bounds in FORALL; row no 2"); }
WDOACTR_mde = ZDOACTR.data;
XDOACTR_mode = BEOACTR.data;
for (;CEOACTR-- >= 0;
(WDOACTR_mde += ZDOACTR.dim[0].stride
,XDOACTR_mode += BEOACTR.dim[0].stride
) )
{
 /* line 1236: */
 /* line 1238: */
 /* line 1239: */
DEOACTR = (*WDOACTR_mde) ;
switch ( DEOACTR.mode )
{ 
case 1: /* INT */
EEOACTR_primitive = (DEOACTR.data.mode1);
 /* line 1240: */
{ 
FEOACTR = (&((&NBOACTR_primitiveentry)->Auxmode)) ;
(*FEOACTR) = EEOACTR_primitive;
 /* line 1241: */
 /* line 1242: */
 /* line 1244: */
GEOACTR = NBOACTR_primitiveentry;
} 
break;
case 6: /* REF STRUCT(INT)  */
HEOACTR_proc = (DEOACTR.data.mode6);
 /* line 1245: */
{ 
IEOACTR = (&((&QBOACTR_procentry)->Auxmode)) ;
(*IEOACTR) = (*(&(HEOACTR_proc->Deproc)));
 /* line 1246: */
 /* line 1247: */
 /* line 1249: */
GEOACTR = QBOACTR_procentry;
} 
break;
case 3: /* REF STRUCT(INT,REF MODE71)  */
JEOACTR_procp = (DEOACTR.data.mode3);
 /* line 1250: */
{ 
KEOACTR = (&((&TBOACTR_procpentry)->Auxmode)) ;
(*KEOACTR) = (*(&(JEOACTR_procp->Deproc)));
 /* line 1251: */
QCOACTR_reducedmodelist( (*(&(JEOACTR_procp->Pars))), &LEOACTR );
NEOACTR = (&((&TBOACTR_procpentry)->Extra)) ;
(*NEOACTR) = A_UNITE(MEOACTR,mode2,2,LEOACTR);
 /* line 1252: */
 /* line 1253: */
 /* line 1255: */
GEOACTR = TBOACTR_procpentry;
} 
break;
case 2: /* REF STRUCT(INT,REF MODE71)  */
OEOACTR_union = (DEOACTR.data.mode2);
 /* line 1256: */
{ 
QCOACTR_reducedmodelist( (*(&(OEOACTR_union->Modelist))), &PEOACTR );
REOACTR = (&((&WBOACTR_unionentry)->Extra)) ;
(*REOACTR) = A_UNITE(QEOACTR,mode2,2,PEOACTR);
 /* line 1257: */
 /* line 1258: */
 /* line 1260: */
GEOACTR = WBOACTR_unionentry;
} 
break;
case 4: /* REF STRUCT(INT,INT,REF MODE70)  */
SEOACTR_struct = (DEOACTR.data.mode4);
 /* line 1261: */
{ 
FDOACTR_reducedselist( (*(&(SEOACTR_struct->Sels))), &TEOACTR );
VEOACTR = (&((&ZBOACTR_structentry)->Extra)) ;
(*VEOACTR) = A_UNITE(UEOACTR,mode3,3,TEOACTR);
 /* line 1262: */
 /* line 1263: */
 /* line 1265: */
GEOACTR = ZBOACTR_structentry;
} 
break;
case 5: /* REF STRUCT(INT,INT,INT,INT)  */
WEOACTR_istruct = (DEOACTR.data.mode5);
 /* line 1266: */
{ 
XEOACTR = (&((&CCOACTR_istructentry)->Auxmode)) ;
(*XEOACTR) = (*(&(WEOACTR_istruct->Imode)));
 /* line 1267: */
ZEOACTR = (*(&(WEOACTR_istruct->Length))) ;
AFOACTR = (&((&CCOACTR_istructentry)->Extra)) ;
(*AFOACTR) = A_UNITE(YEOACTR,mode1,1,ZEOACTR);
 /* line 1268: */
 /* line 1269: */
 /* line 1271: */
GEOACTR = CCOACTR_istructentry;
} 
break;
case 8: /* REF STRUCT(INT,INT,INT,INT)  */
BFOACTR_array = (DEOACTR.data.mode8);
 /* line 1272: */
{ 
 /* line 1273: */
 /* line 1274: */
if ( ((*(&(BFOACTR_array->Deflex)))>=0) )
{ 
TUMACTR_addtolist(VDOACTR_i, A_HVEC(CFOACTR,(*(&(BFOACTR_array->Mode))),A68_INT ), (*(&(BFOACTR_array->Nods))), (&LUMACTR_rowlist));
 /* line 1275: */
 /* line 1276: */
 /* line 1277: */
DFOACTR = KEAACTR_row;
} 
else
{ 
DFOACTR = MEAACTR_flexrow;
} 
EFOACTR = (&((&ICOACTR_rowentry)->Type)) ;
(*EFOACTR) = DFOACTR;
 /* line 1278: */
FFOACTR = (&((&ICOACTR_rowentry)->Auxmode)) ;
(*FFOACTR) = (*(&(BFOACTR_array->Mode)));
 /* line 1279: */
HFOACTR = (*(&(BFOACTR_array->Nods))) ;
IFOACTR = (&((&ICOACTR_rowentry)->Extra)) ;
(*IFOACTR) = A_UNITE(GFOACTR,mode1,1,HFOACTR);
 /* line 1280: */
 /* line 1281: */
 /* line 1283: */
GEOACTR = ICOACTR_rowentry;
} 
break;
case 7: /* REF STRUCT(INT,INT,INT)  */
JFOACTR_vctor = (DEOACTR.data.mode7);
 /* line 1284: */
{ 
 /* line 1285: */
 /* line 1286: */
if ( ((*(&(JFOACTR_vctor->Deflex)))>=0) )
{ 
TUMACTR_addtolist(VDOACTR_i, A_HVEC(KFOACTR,(*(&(JFOACTR_vctor->Vecmode))),A68_INT ), 1, (&MUMACTR_vectorlist));
 /* line 1287: */
 /* line 1288: */
 /* line 1289: */
LFOACTR = LEAACTR_vector;
} 
else
{ 
LFOACTR = NEAACTR_flexvector;
} 
MFOACTR = (&((&FCOACTR_vectorentry)->Type)) ;
(*MFOACTR) = LFOACTR;
 /* line 1290: */
NFOACTR = (&((&FCOACTR_vectorentry)->Auxmode)) ;
(*NFOACTR) = (*(&(JFOACTR_vctor->Vecmode)));
 /* line 1291: */
 /* line 1292: */
 /* line 1294: */
GEOACTR = FCOACTR_vectorentry;
} 
break;
case 9: /* REF STRUCT(INT,REF MODE69)  */
OFOACTR_straight = (DEOACTR.data.mode9);
 /* line 1295: */
{ 
PFOACTR = (&((&LCOACTR_straightentry)->Auxmode)) ;
(*PFOACTR) = (*(&(OFOACTR_straight->Mode)));
 /* line 1296: */
 /* line 1297: */
 /* line 1299: */
GEOACTR = LCOACTR_straightentry;
} 
break;
case 11: /* STRUCT(INT)  */
 /* line 1301: */
GEOACTR = OCOACTR_dummyentry;
break;
default: 
LXIACTR_terminalerror(630);
 /* line 1302: */
 /* line 1303: */
GEOACTR = OCOACTR_dummyentry;
break;
} 
(*XDOACTR_mode) = GEOACTR;
 /* line 1304: */
 /* line 1305: */
VDOACTR_i+=1;
}
 /* line 1307: */
QFOACTR = (&A_R1INDEX(FMMACTR_modes,TFAACTR_ytypemode)) ;
RFOACTR = (&A_R1INDEX(FMMACTR_modes,SFAACTR_xtypemode)) ;
(*RFOACTR) = (*QFOACTR) = (*(&A_R1INDEX(FMMACTR_modes,PFAACTR_vectorrowofcharmode)));
 /* line 1308: */
 /* line 1310: */
SFOACTR = (&A_R1INDEX(FMMACTR_modes,PEAACTR_nomode)) ;
(*SFOACTR) = OCOACTR_dummyentry;
} 
A_PROC_EXIT(initialisemodes);
return;
} 
#undef NL

A_STATIC A68_VOID  VFOACTR_finalisemode(A68_INT  Mode, void *NonLocals)
#define NL(x) (((WFOACTR_finalisemode *)NonLocals)->x)
{ 
A68_INT  XFOACTR;  /* YIELD */
A68_152 * YFOACTR_entry;
A68_BOOL * ZFOACTR;  /* YIELD */
A68_INT  AGOACTR;  /* clause result */
A68_INT  BGOACTR;  /* clause result */
A68_INT  CGOACTR;  /* YIELD */
A68_INT  DGOACTR_type;
A68_BITS * EGOACTR;  /* YIELD */
A68_149  FGOACTR;  /* united object - for case conformity */
A68_150  GGOACTR_params;
A68_INT  HGOACTR;  /* YIELD */
A68_INT  IGOACTR_type;
A68_BITS * JGOACTR;  /* YIELD */
A68_INT * KGOACTR_param;
A68_INT  LGOACTR;  /* forall loop counter */
A68_BITS  MGOACTR;  /* ADICOPS - >= */
A68_BITS * NGOACTR;  /* YIELD */
A68_149  OGOACTR;  /* united object - for case conformity */
A68_150  PGOACTR_constituents;
A68_INT * QGOACTR_constituent;
A68_INT  RGOACTR;  /* forall loop counter */
A68_BITS * SGOACTR;  /* YIELD */
A68_149  TGOACTR;  /* united object - for case conformity */
A68_151  UGOACTR_fields;
A68_148 * VGOACTR_field;
A68_INT  WGOACTR;  /* forall loop counter */
A68_INT  XGOACTR_fieldmode;
A68_BITS * YGOACTR;  /* YIELD */
A68_149  ZGOACTR;  /* united object - for case conformity */
A68_INT  AHOACTR_istructlength;
A68_INT  BHOACTR_imode;
A68_BITS * CHOACTR;  /* YIELD */
A68_149  DHOACTR;  /* united object - for case conformity */
A68_INT  EHOACTR_nods;
A68_INT  FHOACTR;  /* YIELD */
A68_INT * GHOACTR;  /* YIELD */
A_PROC_ENTRY(finalisemode);
 /* line 1320: */
 /* line 1322: */
{ 
XFOACTR = NMMACTR_deref(Mode) ;
YFOACTR_entry = (&A_R1INDEX(FMMACTR_modes,XFOACTR));
 /* line 1324: */
 /* line 1325: */
 /* line 1326: */
if ( !(*(&(YFOACTR_entry->Finalised))) )
{ 
ZFOACTR = (&(YFOACTR_entry->Finalised)) ;
(*ZFOACTR) = A68_TRUE;
 /* line 1328: */
if ( ((*(&(YFOACTR_entry->Type)))==MEAACTR_flexrow) )
{ 
AGOACTR = 3;
} 
else
{ 
 /* line 1329: */
AGOACTR = 1;
} 
 /* line 1332: */
BGOACTR = ((*(&(YFOACTR_entry->Type)))-AGOACTR);
switch ( BGOACTR )
{ 
case 1: 
{ 
 /* line 1333: */
if ( ((*(&(YFOACTR_entry->Auxmode)))<VFAACTR_refmark) )
{ 
CGOACTR = (*(&(YFOACTR_entry->Auxmode))) ;
DGOACTR_type = (*(&((&A_R1INDEX(FMMACTR_modes,CGOACTR))->Type)));
 /* line 1334: */
 /* line 1335: */
 /* line 1336: */
if ( ((((DGOACTR_type==KEAACTR_row)|(DGOACTR_type==LEAACTR_vector))|(DGOACTR_type==MEAACTR_flexrow))|(DGOACTR_type==NEAACTR_flexvector)) )
{ 
 /* line 1337: */
 /* line 1338: */
 /* line 1339: */
 /* line 1342: */
EGOACTR = (&(YFOACTR_entry->Flags)) ;
(*EGOACTR) = (A68_BITS )((*(&(YFOACTR_entry->Flags)))|IMMACTR_hasdescriptors);
} 
} 
} 
break;
case 2: 
FGOACTR = (*(&(YFOACTR_entry->Extra))) ;
switch ( FGOACTR.mode )
{ 
case 2: /* REF VECTOR [] INT */
GGOACTR_params = (FGOACTR.data.mode2);
 /* line 1343: */
{ 
 /* line 1344: */
if ( ((*(&(YFOACTR_entry->Auxmode)))<VFAACTR_refmark) )
{ 
HGOACTR = (*(&(YFOACTR_entry->Auxmode))) ;
IGOACTR_type = (*(&((&A_R1INDEX(FMMACTR_modes,HGOACTR))->Type)));
 /* line 1345: */
 /* line 1346: */
 /* line 1347: */
if ( ((((IGOACTR_type==KEAACTR_row)|(IGOACTR_type==LEAACTR_vector))|(IGOACTR_type==MEAACTR_flexrow))|(IGOACTR_type==NEAACTR_flexvector)) )
{ 
 /* line 1348: */
 /* line 1349: */
JGOACTR = (&(YFOACTR_entry->Flags)) ;
(*JGOACTR) = (A68_BITS )((*(&(YFOACTR_entry->Flags)))|IMMACTR_hasdescriptors);
} 
} 
 /* line 1350: */
 /* line 1351: */
LGOACTR = GGOACTR_params.upb -1;
KGOACTR_param = GGOACTR_params.data;
for (;LGOACTR-- >= 0;
(KGOACTR_param++
) )
{
 /* line 1352: */
 /* line 1353: */
MGOACTR = ~(*(&(YFOACTR_entry->Flags))) ;
if ( !(A_LB_GE(MGOACTR,IMMACTR_hasdescriptors)) ) break;
 /* line 1354: */
if ( PSMACTR_dynamicdescriptor((*KGOACTR_param)) )
{ 
 /* line 1355: */
 /* line 1356: */
NGOACTR = (&(YFOACTR_entry->Flags)) ;
(*NGOACTR) = (A68_BITS )((*(&(YFOACTR_entry->Flags)))|IMMACTR_hasdescriptors);
} 
}
 /* line 1357: */
 /* line 1359: */
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
break;
case 3: 
OGOACTR = (*(&(YFOACTR_entry->Extra))) ;
switch ( OGOACTR.mode )
{ 
case 2: /* REF VECTOR [] INT */
PGOACTR_constituents = (OGOACTR.data.mode2);
 /* line 1361: */
 /* line 1362: */
RGOACTR = PGOACTR_constituents.upb -1;
QGOACTR_constituent = PGOACTR_constituents.data;
for (;RGOACTR-- >= 0;
(QGOACTR_constituent++
) )
{
 /* line 1363: */
A_CALLPROC(NL(UFOACTR_finalisemode),((*QGOACTR_constituent)),((*QGOACTR_constituent),(NL(UFOACTR_finalisemode)).nonlocals));
 /* line 1364: */
 /* line 1365: */
SGOACTR = (&(YFOACTR_entry->Flags)) ;
(*SGOACTR) = (A68_BITS )((*(&(YFOACTR_entry->Flags)))|URMACTR_flags((*QGOACTR_constituent)));
}
 /* line 1366: */
 /* line 1368: */
break;
default: 
A_IMP_SKIP ;
break;
} 
break;
case 4: 
TGOACTR = (*(&(YFOACTR_entry->Extra))) ;
switch ( TGOACTR.mode )
{ 
case 3: /* REF VECTOR [] MODE148 */
UGOACTR_fields = (TGOACTR.data.mode3);
 /* line 1370: */
 /* line 1371: */
WGOACTR = UGOACTR_fields.upb -1;
VGOACTR_field = UGOACTR_fields.data;
for (;WGOACTR-- >= 0;
(VGOACTR_field++
) )
{
 /* line 1372: */
XGOACTR_fieldmode = (*(&(VGOACTR_field->Mode)));
 /* line 1373: */
A_CALLPROC(NL(UFOACTR_finalisemode),(XGOACTR_fieldmode),(XGOACTR_fieldmode,(NL(UFOACTR_finalisemode)).nonlocals));
 /* line 1374: */
 /* line 1375: */
YGOACTR = (&(YFOACTR_entry->Flags)) ;
(*YGOACTR) = (A68_BITS )((*(&(YFOACTR_entry->Flags)))|URMACTR_flags(XGOACTR_fieldmode));
}
 /* line 1376: */
 /* line 1378: */
break;
default: 
A_IMP_SKIP ;
break;
} 
break;
case 5: 
ZGOACTR = (*(&(YFOACTR_entry->Extra))) ;
switch ( ZGOACTR.mode )
{ 
case 1: /* INT */
AHOACTR_istructlength = (ZGOACTR.data.mode1);
 /* line 1380: */
{ 
BHOACTR_imode = (*(&(YFOACTR_entry->Auxmode)));
 /* line 1381: */
A_CALLPROC(NL(UFOACTR_finalisemode),(BHOACTR_imode),(BHOACTR_imode,(NL(UFOACTR_finalisemode)).nonlocals));
 /* line 1382: */
 /* line 1383: */
 /* line 1385: */
CHOACTR = (&(YFOACTR_entry->Flags)) ;
(*CHOACTR) = (A68_BITS )((*(&(YFOACTR_entry->Flags)))|URMACTR_flags(BHOACTR_imode));
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
break;
case 6: 
DHOACTR = (*(&(YFOACTR_entry->Extra))) ;
switch ( DHOACTR.mode )
{ 
case 1: /* INT */
EHOACTR_nods = (DHOACTR.data.mode1);
 /* line 1387: */
 /* line 1388: */
{ 
 /* line 1389: */
 /* line 1390: */
if ( (EHOACTR_nods>1) )
{ 
A_CALLPROC(NL(UFOACTR_finalisemode),((*(&(YFOACTR_entry->Auxmode)))),((*(&(YFOACTR_entry->Auxmode))),(NL(UFOACTR_finalisemode)).nonlocals));
 /* line 1391: */
 /* line 1392: */
 /* line 1393: */
 /* line 1394: */
FHOACTR = (*(&(YFOACTR_entry->Auxmode))) ;
GHOACTR = (&(YFOACTR_entry->Auxmode)) ;
(*GHOACTR) = (*(&((&A_R1INDEX(FMMACTR_modes,FHOACTR))->Auxmode)));
} 
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
break;
default: 
 /* line 1395: */
 /* line 1396: */
 /* line 1397: */
LXIACTR_terminalerror(631);
break;
} 
} 
} 
A_PROC_EXIT(finalisemode);
return;
} 
#undef NL

A_STATIC A68_VOID  JHOACTR_generator(A68_BOOL  HHOACTR_anonymous, A68_154  *ReturnedValue, void *NonLocals)
#define NL(x) (((KHOACTR_generator *)NonLocals)->x)
{ 
A68_154  LHOACTR;  /* clause result */
A68_154  MHOACTR;  /* OPERATORS - dynamic generator */
{ 
MHOACTR.dim[0].upb = NL(Nomodes) ;
MHOACTR.dim[0].lwb = PEAACTR_nomode ;
A_1INITSTRIDES(MHOACTR) ;
( HHOACTR_anonymous? A_R1LOC(A68_152 ,MHOACTR): A_R1HEAP(A68_152 ,MHOACTR) );
LHOACTR = MHOACTR;
} 
*ReturnedValue = (LHOACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  TLMACTR_debugmessage(A68_INT  Level, A68_VC  M)
{ 
A68_VC  ZLMACTR;  /* avoid structure result */
A_PROC_ENTRY(debugmessage);
 /* line 53: */
if ( (ZCHACTR_tracelevel(VLMACTR)>=Level) )
{ 
ROAAOSF_whole( Level, 0, &ZLMACTR );
A_CALLPROC(FSIACTR_list,(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(YLMACTR,ZLMACTR),AMMACTR),M)),(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(YLMACTR,ZLMACTR),AMMACTR),M),(FSIACTR_list).nonlocals));
} 
A_PROC_EXIT(debugmessage);
return;
} 
#undef NL

A_STATIC A68_BOOL  BMMACTR_debugging(void)
{ 
A68_BOOL  DMMACTR;  /* clause result */
A_PROC_ENTRY(debugging);
DMMACTR = (ZCHACTR_tracelevel(EMMACTR)>0);
A_PROC_EXIT(debugging);
return( DMMACTR );
} 
#undef NL

A68_INT  NMMACTR_deref(A68_INT  Mode)
{ 
A68_INT  OMMACTR;  /* clause result */
A68_INT  PMMACTR;  /* ADICOPS - MOD */
A_PROC_ENTRY(deref);
 /* line 92: */
if ( (Mode==PEAACTR_nomode) )
{ 
OMMACTR = PEAACTR_nomode;
} 
else
{ 
OMMACTR = A_MOD(Mode,VFAACTR_refmark,PMMACTR);
} 
A_PROC_EXIT(deref);
return( OMMACTR );
} 
#undef NL

A68_INT  RMMACTR_modetype(A68_INT  Mode)
{ 
A68_INT  SMMACTR;  /* clause result */
A68_INT  TMMACTR;  /* YIELD */
A_PROC_ENTRY(modetype);
 /* line 98: */
TMMACTR = NMMACTR_deref(Mode) ;
SMMACTR = (*(&((&A_R1INDEX(FMMACTR_modes,TMMACTR))->Type)));
A_PROC_EXIT(modetype);
return( SMMACTR );
} 
#undef NL

A68_BOOL  VMMACTR_hasoneref(A68_INT  M)
{ 
A68_BOOL  WMMACTR;  /* optbool result */
A68_BOOL  XMMACTR;  /* clause result */
A_PROC_ENTRY(hasoneref);
WMMACTR = (M>=VFAACTR_refmark);
if ( WMMACTR )
{WMMACTR = (M<WFAACTR_refrefmark);
}
XMMACTR = WMMACTR;
A_PROC_EXIT(hasoneref);
return( XMMACTR );
} 
#undef NL

A68_BOOL  ZMMACTR_isbool(A68_INT  M)
{ 
A68_BOOL  ANMACTR;  /* clause result */
A_PROC_ENTRY(isbool);
ANMACTR = (M==WEAACTR_boolmode);
A_PROC_EXIT(isbool);
return( ANMACTR );
} 
#undef NL

A68_BOOL  CNMACTR_ischar(A68_INT  M)
{ 
A68_BOOL  DNMACTR;  /* clause result */
A_PROC_ENTRY(ischar);
DNMACTR = (M==XEAACTR_charmode);
A_PROC_EXIT(ischar);
return( DNMACTR );
} 
#undef NL

A68_BOOL  FNMACTR_isint(A68_INT  M)
{ 
A68_BOOL  GNMACTR;  /* clause result */
A_PROC_ENTRY(isint);
GNMACTR = (M==EFAACTR_intmode);
A_PROC_EXIT(isint);
return( GNMACTR );
} 
#undef NL

A68_BOOL  INMACTR_islbits(A68_INT  M)
{ 
A68_BOOL  JNMACTR;  /* optbool result */
A68_BOOL  KNMACTR;  /* clause result */
A_PROC_ENTRY(islbits);
JNMACTR = (M==ZEAACTR_shortbitsmode);
if ( ! JNMACTR )
{JNMACTR = (M==AFAACTR_bitsmode);
}
 /* line 110: */
if ( ! JNMACTR )
{JNMACTR = (M==BFAACTR_longbitsmode);
}
if ( ! JNMACTR )
{JNMACTR = (M==CFAACTR_longlongbitsmode);
}
KNMACTR = JNMACTR;
A_PROC_EXIT(islbits);
return( KNMACTR );
} 
#undef NL

A68_BOOL  MNMACTR_islint(A68_INT  M)
{ 
A68_BOOL  NNMACTR;  /* optbool result */
A68_BOOL  ONMACTR;  /* clause result */
A_PROC_ENTRY(islint);
NNMACTR = (M==DFAACTR_shortintmode);
if ( ! NNMACTR )
{NNMACTR = (M==EFAACTR_intmode);
}
 /* line 112: */
if ( ! NNMACTR )
{NNMACTR = (M==FFAACTR_longintmode);
}
if ( ! NNMACTR )
{NNMACTR = (M==GFAACTR_longlongintmode);
}
ONMACTR = NNMACTR;
A_PROC_EXIT(islint);
return( ONMACTR );
} 
#undef NL

A68_BOOL  QNMACTR_islreal(A68_INT  M)
{ 
A68_BOOL  RNMACTR;  /* optbool result */
A68_BOOL  SNMACTR;  /* clause result */
A_PROC_ENTRY(islreal);
RNMACTR = (M==HFAACTR_shortrealmode);
if ( ! RNMACTR )
{RNMACTR = (M==IFAACTR_realmode);
}
 /* line 114: */
if ( ! RNMACTR )
{RNMACTR = (M==JFAACTR_longrealmode);
}
if ( ! RNMACTR )
{RNMACTR = (M==KFAACTR_longlongrealmode);
}
SNMACTR = RNMACTR;
A_PROC_EXIT(islreal);
return( SNMACTR );
} 
#undef NL

A68_BOOL  UNMACTR_islcompl(A68_INT  M)
{ 
A68_BOOL  VNMACTR;  /* optbool result */
A68_BOOL  WNMACTR;  /* clause result */
A_PROC_ENTRY(islcompl);
VNMACTR = (M==LFAACTR_shortcomplmode);
if ( ! VNMACTR )
{VNMACTR = (M==MFAACTR_complmode);
}
 /* line 116: */
if ( ! VNMACTR )
{VNMACTR = (M==NFAACTR_longcomplmode);
}
if ( ! VNMACTR )
{VNMACTR = (M==OFAACTR_longlongcomplmode);
}
WNMACTR = VNMACTR;
A_PROC_EXIT(islcompl);
return( WNMACTR );
} 
#undef NL

A68_BOOL  YNMACTR_isvec(A68_INT  M)
{ 
A68_BOOL  ZNMACTR;  /* optbool result */
A68_BOOL  AOMACTR;  /* clause result */
A_PROC_ENTRY(isvec);
ZNMACTR = (M<VFAACTR_refmark);
if ( ZNMACTR )
{ZNMACTR = ((*(&((&A_R1INDEX(FMMACTR_modes,M))->Type)))==LEAACTR_vector);
}
AOMACTR = ZNMACTR;
A_PROC_EXIT(isvec);
return( AOMACTR );
} 
#undef NL

A68_BOOL  COMACTR_isrow(A68_INT  M)
{ 
A68_BOOL  DOMACTR;  /* optbool result */
A68_BOOL  EOMACTR;  /* clause result */
A_PROC_ENTRY(isrow);
DOMACTR = (M<VFAACTR_refmark);
if ( DOMACTR )
{DOMACTR = ((*(&((&A_R1INDEX(FMMACTR_modes,M))->Type)))==KEAACTR_row);
}
EOMACTR = DOMACTR;
A_PROC_EXIT(isrow);
return( EOMACTR );
} 
#undef NL

A68_BOOL  GOMACTR_isfirmarray(A68_INT  M)
{ 
A68_BOOL  HOMACTR;  /* optbool result */
A68_BOOL  IOMACTR;  /* clause result */
A_PROC_ENTRY(isfirmarray);
HOMACTR = YNMACTR_isvec(M);
if ( ! HOMACTR )
{HOMACTR = COMACTR_isrow(M);
}
IOMACTR = HOMACTR;
A_PROC_EXIT(isfirmarray);
return( IOMACTR );
} 
#undef NL

A68_BOOL  KOMACTR_isstraight(A68_INT  M)
{ 
A68_BOOL  LOMACTR;  /* clause result */
A_PROC_ENTRY(isstraight);
LOMACTR = ((*(&((&A_R1INDEX(FMMACTR_modes,M))->Type)))==OEAACTR_straight);
A_PROC_EXIT(isstraight);
return( LOMACTR );
} 
#undef NL

A68_BOOL  NOMACTR_isflexvec(A68_INT  M)
{ 
A68_BOOL  OOMACTR;  /* optbool result */
A68_BOOL  POMACTR;  /* clause result */
A_PROC_ENTRY(isflexvec);
OOMACTR = (M>=VFAACTR_refmark);
if ( OOMACTR )
{OOMACTR = (M<WFAACTR_refrefmark);
}
 /* line 130: */
if ( OOMACTR )
{OOMACTR = (RMMACTR_modetype(M)==NEAACTR_flexvector);
}
POMACTR = OOMACTR;
A_PROC_EXIT(isflexvec);
return( POMACTR );
} 
#undef NL

A68_BOOL  ROMACTR_isflexrow(A68_INT  M)
{ 
A68_BOOL  SOMACTR;  /* optbool result */
A68_BOOL  TOMACTR;  /* clause result */
A_PROC_ENTRY(isflexrow);
SOMACTR = (M>=VFAACTR_refmark);
if ( SOMACTR )
{SOMACTR = (M<WFAACTR_refrefmark);
}
 /* line 132: */
if ( SOMACTR )
{SOMACTR = (RMMACTR_modetype(M)==MEAACTR_flexrow);
}
TOMACTR = SOMACTR;
A_PROC_EXIT(isflexrow);
return( TOMACTR );
} 
#undef NL

A68_BOOL  VOMACTR_isflexarray(A68_INT  M)
{ 
A68_BOOL  WOMACTR;  /* optbool result */
A68_BOOL  XOMACTR;  /* clause result */
A_PROC_ENTRY(isflexarray);
WOMACTR = NOMACTR_isflexvec(M);
if ( ! WOMACTR )
{WOMACTR = ROMACTR_isflexrow(M);
}
XOMACTR = WOMACTR;
A_PROC_EXIT(isflexarray);
return( XOMACTR );
} 
#undef NL

A68_BOOL  ZOMACTR_isvector(A68_INT  Mode)
{ 
A68_INT  APMACTR_type;
A68_BOOL  BPMACTR;  /* optbool result */
A68_BOOL  CPMACTR;  /* clause result */
A_PROC_ENTRY(isvector);
 /* line 141: */
 /* line 142: */
{ 
APMACTR_type = RMMACTR_modetype(Mode);
 /* line 143: */
BPMACTR = (APMACTR_type==LEAACTR_vector);
if ( ! BPMACTR )
{ /* line 144: */
BPMACTR = (APMACTR_type==NEAACTR_flexvector);
}
CPMACTR = BPMACTR;
} 
A_PROC_EXIT(isvector);
return( CPMACTR );
} 
#undef NL

A68_BOOL  EPMACTR_isrow(A68_INT  Mode)
{ 
A68_INT  FPMACTR_type;
A68_BOOL  GPMACTR;  /* optbool result */
A68_BOOL  HPMACTR;  /* clause result */
A_PROC_ENTRY(isrow);
 /* line 151: */
 /* line 152: */
{ 
FPMACTR_type = RMMACTR_modetype(Mode);
 /* line 153: */
GPMACTR = (FPMACTR_type==KEAACTR_row);
if ( ! GPMACTR )
{ /* line 154: */
GPMACTR = (FPMACTR_type==MEAACTR_flexrow);
}
HPMACTR = GPMACTR;
} 
A_PROC_EXIT(isrow);
return( HPMACTR );
} 
#undef NL

A68_BOOL  JPMACTR_isarray(A68_INT  Mode)
{ 
A68_INT  KPMACTR_type;
A68_BOOL  LPMACTR;  /* optbool result */
A68_BOOL  MPMACTR;  /* clause result */
A_PROC_ENTRY(isarray);
 /* line 162: */
 /* line 163: */
{ 
KPMACTR_type = RMMACTR_modetype(Mode);
 /* line 164: */
LPMACTR = (KPMACTR_type==KEAACTR_row);
if ( ! LPMACTR )
{LPMACTR = (KPMACTR_type==LEAACTR_vector);
}
 /* line 165: */
if ( ! LPMACTR )
{LPMACTR = (KPMACTR_type==MEAACTR_flexrow);
}
if ( ! LPMACTR )
{ /* line 166: */
LPMACTR = (KPMACTR_type==NEAACTR_flexvector);
}
MPMACTR = LPMACTR;
} 
A_PROC_EXIT(isarray);
return( MPMACTR );
} 
#undef NL

A68_BOOL  OPMACTR_isfirmarray(A68_INT  Mode)
{ 
A68_INT  PPMACTR_type;
A68_BOOL  QPMACTR;  /* optbool result */
A68_BOOL  RPMACTR;  /* clause result */
A_PROC_ENTRY(isfirmarray);
 /* line 173: */
 /* line 174: */
{ 
PPMACTR_type = RMMACTR_modetype(Mode);
 /* line 175: */
QPMACTR = (PPMACTR_type==KEAACTR_row);
if ( ! QPMACTR )
{ /* line 176: */
QPMACTR = (PPMACTR_type==LEAACTR_vector);
}
RPMACTR = QPMACTR;
} 
A_PROC_EXIT(isfirmarray);
return( RPMACTR );
} 
#undef NL

A68_BOOL  TPMACTR_isflexarray(A68_INT  Mode)
{ 
A68_INT  UPMACTR_type;
A68_BOOL  VPMACTR;  /* optbool result */
A68_BOOL  WPMACTR;  /* clause result */
A_PROC_ENTRY(isflexarray);
 /* line 183: */
 /* line 184: */
{ 
UPMACTR_type = RMMACTR_modetype(Mode);
 /* line 185: */
VPMACTR = (UPMACTR_type==MEAACTR_flexrow);
if ( ! VPMACTR )
{ /* line 186: */
VPMACTR = (UPMACTR_type==NEAACTR_flexvector);
}
WPMACTR = VPMACTR;
} 
A_PROC_EXIT(isflexarray);
return( WPMACTR );
} 
#undef NL

A68_BOOL  YPMACTR_isstruct(A68_INT  Mode)
{ 
A68_INT  ZPMACTR_type;
A68_BOOL  AQMACTR;  /* clause result */
A_PROC_ENTRY(isstruct);
 /* line 193: */
 /* line 194: */
{ 
ZPMACTR_type = RMMACTR_modetype(Mode);
 /* line 195: */
 /* line 196: */
AQMACTR = (ZPMACTR_type==IEAACTR_struct);
} 
A_PROC_EXIT(isstruct);
return( AQMACTR );
} 
#undef NL

A68_BOOL  CQMACTR_isunion(A68_INT  Mode)
{ 
A68_INT  DQMACTR_type;
A68_BOOL  EQMACTR;  /* clause result */
A_PROC_ENTRY(isunion);
 /* line 203: */
 /* line 204: */
{ 
DQMACTR_type = RMMACTR_modetype(Mode);
 /* line 205: */
 /* line 206: */
EQMACTR = (DQMACTR_type==HEAACTR_union);
} 
A_PROC_EXIT(isunion);
return( EQMACTR );
} 
#undef NL

A68_BOOL  GQMACTR_isistruct(A68_INT  Mode)
{ 
A68_INT  HQMACTR_type;
A68_BOOL  IQMACTR;  /* clause result */
A_PROC_ENTRY(isistruct);
 /* line 213: */
 /* line 214: */
{ 
HQMACTR_type = RMMACTR_modetype(Mode);
 /* line 215: */
 /* line 216: */
IQMACTR = (HQMACTR_type==JEAACTR_istruct);
} 
A_PROC_EXIT(isistruct);
return( IQMACTR );
} 
#undef NL

A_STATIC A68_BOOL  KQMACTR_isstraight(A68_INT  Mode)
{ 
A68_INT  LQMACTR_type;
A68_BOOL  MQMACTR;  /* clause result */
A_PROC_ENTRY(isstraight);
 /* line 223: */
 /* line 224: */
{ 
LQMACTR_type = RMMACTR_modetype(Mode);
 /* line 225: */
 /* line 226: */
MQMACTR = (LQMACTR_type==OEAACTR_straight);
} 
A_PROC_EXIT(isstraight);
return( MQMACTR );
} 
#undef NL

A68_BOOL  OQMACTR_iscompl(A68_INT  Mode)
{ 
A68_INT  PQMACTR_norefmode;
A68_BOOL  QQMACTR;  /* clause result */
A_PROC_ENTRY(iscompl);
 /* line 233: */
 /* line 234: */
{ 
PQMACTR_norefmode = NMMACTR_deref(Mode);
 /* line 235: */
 /* line 236: */
QQMACTR = ((PQMACTR_norefmode>=LFAACTR_shortcomplmode)&(PQMACTR_norefmode<=OFAACTR_longlongcomplmode));
} 
A_PROC_EXIT(iscompl);
return( QQMACTR );
} 
#undef NL

A68_BOOL  SQMACTR_isproc(A68_INT  Mode)
{ 
A68_INT  TQMACTR_m;
A68_BOOL  UQMACTR;  /* clause result */
A_PROC_ENTRY(isproc);
 /* line 243: */
 /* line 244: */
{ 
TQMACTR_m = RMMACTR_modetype(Mode);
 /* line 245: */
 /* line 246: */
UQMACTR = (TQMACTR_m==FEAACTR_proc);
} 
A_PROC_EXIT(isproc);
return( UQMACTR );
} 
#undef NL

A68_BOOL  WQMACTR_isprocp(A68_INT  Mode)
{ 
A68_INT  XQMACTR_m;
A68_BOOL  YQMACTR;  /* clause result */
A_PROC_ENTRY(isprocp);
 /* line 253: */
 /* line 254: */
{ 
XQMACTR_m = RMMACTR_modetype(Mode);
 /* line 255: */
 /* line 256: */
YQMACTR = (XQMACTR_m==GEAACTR_procp);
} 
A_PROC_EXIT(isprocp);
return( YQMACTR );
} 
#undef NL

A68_BOOL  ARMACTR_hasrefs(A68_INT  Mode)
{ 
A68_BOOL  BRMACTR;  /* clause result */
A68_INT  CRMACTR;  /* ADICOPS - MOD */
A_PROC_ENTRY(hasrefs);
 /* line 262: */
BRMACTR = !(A_MOD(Mode,VFAACTR_refmark,CRMACTR)==Mode);
A_PROC_EXIT(hasrefs);
return( BRMACTR );
} 
#undef NL

A68_BOOL  ERMACTR_iscstruct(A68_INT  Mode)
{ 
A68_BOOL  FRMACTR;  /* optbool result */
A68_BOOL  GRMACTR;  /* optbool result */
A68_BOOL  HRMACTR;  /* optbool result */
A68_BOOL  IRMACTR;  /* clause result */
A_PROC_ENTRY(iscstruct);
 /* line 274: */
FRMACTR = VMMACTR_hasoneref(Mode);
if ( FRMACTR )
{FRMACTR = OPMACTR_isfirmarray(Mode);
}
 /* line 276: */
if ( ! FRMACTR )
{ /* line 277: */
GRMACTR = (Mode<VFAACTR_refmark);
if ( GRMACTR )
{HRMACTR = JPMACTR_isarray(Mode);
if ( ! HRMACTR )
{HRMACTR = CQMACTR_isunion(Mode);
}
if ( ! HRMACTR )
{ /* line 278: */
HRMACTR = YPMACTR_isstruct(Mode);
}
if ( ! HRMACTR )
{HRMACTR = SQMACTR_isproc(Mode);
}
if ( ! HRMACTR )
{HRMACTR = WQMACTR_isprocp(Mode);
}
GRMACTR = HRMACTR;
}
FRMACTR = GRMACTR;
}
IRMACTR = FRMACTR;
A_PROC_EXIT(iscstruct);
return( IRMACTR );
} 
#undef NL

A68_INT  KRMACTR_derefmode(A68_INT  Mode)
{ 
A68_INT  LRMACTR;  /* clause result */
A_PROC_ENTRY(derefmode);
 /* line 284: */
 /* line 285: */
{ 
 /* line 286: */
if ( (Mode<VFAACTR_refmark) )
{ 
 /* line 287: */
LXIACTR_terminalerror(632);
} 
 /* line 288: */
 /* line 289: */
LRMACTR = (Mode-VFAACTR_refmark);
} 
A_PROC_EXIT(derefmode);
return( LRMACTR );
} 
#undef NL

A68_INT  NRMACTR_derefmodeok(A68_INT  Mode)
{ 
A68_INT  ORMACTR;  /* clause result */
A_PROC_ENTRY(derefmodeok);
 /* line 293: */
if ( (Mode>VFAACTR_refmark) )
{ 
ORMACTR = (Mode-VFAACTR_refmark);
} 
else
{ 
ORMACTR = Mode;
} 
A_PROC_EXIT(derefmodeok);
return( ORMACTR );
} 
#undef NL

A_STATIC A68_INT  QRMACTR_auxmode(A68_INT  Mode)
{ 
A68_INT  RRMACTR;  /* clause result */
A68_INT  SRMACTR;  /* YIELD */
A_PROC_ENTRY(auxmode);
 /* line 299: */
SRMACTR = NMMACTR_deref(Mode) ;
RRMACTR = (*(&((&A_R1INDEX(FMMACTR_modes,SRMACTR))->Auxmode)));
A_PROC_EXIT(auxmode);
return( RRMACTR );
} 
#undef NL

A_STATIC A68_BITS  URMACTR_flags(A68_INT  Mode)
{ 
A68_BITS  VRMACTR;  /* clause result */
A_PROC_ENTRY(flags);
 /* line 305: */
 /* line 306: */
if ( (Mode<VFAACTR_refmark) )
{ 
 /* line 307: */
 /* line 308: */
VRMACTR = (*(&((&A_R1INDEX(FMMACTR_modes,Mode))->Flags)));
} 
else
{ 
VRMACTR = (A68_BITS )0;
} 
A_PROC_EXIT(flags);
return( VRMACTR );
} 
#undef NL

A68_BOOL  XRMACTR_dynamic(A68_INT  Mode)
{ 
A68_BOOL  YRMACTR;  /* clause result */
A68_BITS  ZRMACTR;  /* ADICOPS - >= */
A_PROC_ENTRY(dynamic);
 /* line 316: */
 /* line 317: */
if ( (Mode<VFAACTR_refmark) )
{ 
 /* line 318: */
ZRMACTR = (*(&((&A_R1INDEX(FMMACTR_modes,Mode))->Flags))) ;
YRMACTR = A_LB_GE(ZRMACTR,GMMACTR_dynamicbit);
} 
else
{ 
 /* line 319: */
YRMACTR = A68_FALSE;
} 
A_PROC_EXIT(dynamic);
return( YRMACTR );
} 
#undef NL

A68_VOID  BSMACTR_procinfo(A68_INT  Mode, A68_153  *ReturnedValue)
{ 
A68_152 * ESMACTR_m;
A68_149  HSMACTR;  /* united object - for case conformity */
A68_150  ISMACTR_params;
A68_INT  JSMACTR;  /* clause result */
A68_INT  KSMACTR_parameters;
A68_153  LSMACTR;  /* collateral clause result */
A68_BITS  MSMACTR;  /* ADICOPS - >= */
A68_153  NSMACTR;  /* clause result */
A_PROC_ENTRY(procinfo);
 /* line 325: */
 /* line 326: */
{ 
PXIACTR_assert(DSMACTR, (Mode<VFAACTR_refmark));
 /* line 327: */
ESMACTR_m = (&A_R1INDEX(FMMACTR_modes,Mode));
 /* line 328: */
 /* line 329: */
PXIACTR_assert(GSMACTR, (((*(&(ESMACTR_m->Type)))==FEAACTR_proc)|((*(&(ESMACTR_m->Type)))==GEAACTR_procp)));
 /* line 331: */
HSMACTR = (*(&(ESMACTR_m->Extra))) ;
switch ( HSMACTR.mode )
{ 
case 2: /* REF VECTOR [] INT */
ISMACTR_params = (HSMACTR.data.mode2);
JSMACTR = ISMACTR_params.upb;
break;
default: 
JSMACTR = 0;
break;
} 
KSMACTR_parameters = JSMACTR;
 /* line 333: */
LSMACTR.Parameters = KSMACTR_parameters;
LSMACTR.Result = (*(&(ESMACTR_m->Auxmode)));
 /* line 334: */
MSMACTR = (*(&(ESMACTR_m->Flags))) ;
LSMACTR.Hasdescriptors = A_LB_GE(MSMACTR,IMMACTR_hasdescriptors);
NSMACTR = LSMACTR;
} 
A_PROC_EXIT(procinfo);
*ReturnedValue = (NSMACTR);
return;
} 
#undef NL

A_STATIC A68_BOOL  PSMACTR_dynamicdescriptor(A68_INT  Mode)
{ 
A68_INT  QSMACTR;  /* YIELD */
A68_INT  RSMACTR_type;
A68_BOOL  SSMACTR;  /* clause result */
A_PROC_ENTRY(dynamicdescriptor);
 /* line 341: */
 /* line 342: */
if ( (Mode<WFAACTR_refrefmark) )
{ 
QSMACTR = NMMACTR_deref(Mode) ;
RSMACTR_type = (*(&((&A_R1INDEX(FMMACTR_modes,QSMACTR))->Type)));
 /* line 343: */
 /* line 344: */
 /* line 345: */
SSMACTR = (((RSMACTR_type==LEAACTR_vector)|(RSMACTR_type==KEAACTR_row))|((Mode<VFAACTR_refmark)&((RSMACTR_type==NEAACTR_flexvector)|(RSMACTR_type==MEAACTR_flexrow))));
} 
else
{ 
 /* line 346: */
SSMACTR = A68_FALSE;
} 
A_PROC_EXIT(dynamicdescriptor);
return( SSMACTR );
} 
#undef NL

A_STATIC A68_VOID  USMACTR_modelistextra(A68_INT  Mode, A68_150  *ReturnedValue)
{ 
A68_INT  VSMACTR;  /* YIELD */
A68_152 * WSMACTR_m;
A68_149  ZSMACTR;  /* united object - for case conformity */
A68_150  ATMACTR_modelist;
A68_150  BTMACTR;  /* clause result */
A68_150  CTMACTR;  /* OPERATORS - nil -> mode */
A_PROC_ENTRY(modelistextra);
 /* line 352: */
 /* line 353: */
{ 
VSMACTR = NMMACTR_deref(Mode) ;
WSMACTR_m = (&A_R1INDEX(FMMACTR_modes,VSMACTR));
 /* line 354: */
PXIACTR_assert(YSMACTR, (((*(&(WSMACTR_m->Type)))==GEAACTR_procp)|((*(&(WSMACTR_m->Type)))==HEAACTR_union)));
 /* line 356: */
ZSMACTR = (*(&(WSMACTR_m->Extra))) ;
switch ( ZSMACTR.mode )
{ 
case 2: /* REF VECTOR [] INT */
ATMACTR_modelist = (ZSMACTR.data.mode2);
BTMACTR = ATMACTR_modelist;
break;
default: 
 /* line 357: */
BTMACTR = A_VVAC(CTMACTR);
break;
} 
} 
A_PROC_EXIT(modelistextra);
*ReturnedValue = (BTMACTR);
return;
} 
#undef NL

A_STATIC A68_INT  ETMACTR_intextra(A68_INT  Mode)
{ 
A68_INT  FTMACTR;  /* YIELD */
A68_152 * GTMACTR_m;
A68_149  JTMACTR;  /* united object - for case conformity */
A68_INT  KTMACTR_i;
A68_INT  LTMACTR;  /* clause result */
A_PROC_ENTRY(intextra);
 /* line 363: */
 /* line 364: */
{ 
FTMACTR = NMMACTR_deref(Mode) ;
GTMACTR_m = (&A_R1INDEX(FMMACTR_modes,FTMACTR));
 /* line 365: */
 /* line 366: */
PXIACTR_assert(ITMACTR, ((((*(&(GTMACTR_m->Type)))==JEAACTR_istruct)|((*(&(GTMACTR_m->Type)))==KEAACTR_row))|((*(&(GTMACTR_m->Type)))==MEAACTR_flexrow)));
 /* line 367: */
JTMACTR = (*(&(GTMACTR_m->Extra))) ;
switch ( JTMACTR.mode )
{ 
case 1: /* INT */
KTMACTR_i = (JTMACTR.data.mode1);
LTMACTR = KTMACTR_i;
break;
default: 
 /* line 368: */
LTMACTR = 0;
break;
} 
} 
A_PROC_EXIT(intextra);
return( LTMACTR );
} 
#undef NL

A68_VOID  NTMACTR_structfields(A68_INT  Mode, A68_151  *ReturnedValue)
{ 
A68_INT  OTMACTR;  /* YIELD */
A68_152 * PTMACTR_m;
A68_149  STMACTR;  /* united object - for case conformity */
A68_151  TTMACTR_fields;
A68_151  UTMACTR;  /* clause result */
A68_151  XTMACTR;  /* OPERATORS - skip to mode */
A_PROC_ENTRY(structfields);
 /* line 374: */
 /* line 375: */
{ 
OTMACTR = NMMACTR_deref(Mode) ;
PTMACTR_m = (&A_R1INDEX(FMMACTR_modes,OTMACTR));
 /* line 376: */
PXIACTR_assert(RTMACTR, ((*(&(PTMACTR_m->Type)))==IEAACTR_struct));
 /* line 377: */
 /* line 378: */
STMACTR = (*(&(PTMACTR_m->Extra))) ;
switch ( STMACTR.mode )
{ 
case 3: /* REF VECTOR [] MODE148 */
TTMACTR_fields = (STMACTR.data.mode3);
 /* line 379: */
UTMACTR = TTMACTR_fields;
break;
default: 
PXIACTR_assert(WTMACTR, A68_FALSE);
 /* line 380: */
 /* line 381: */
 /* line 382: */
UTMACTR = XTMACTR;
break;
} 
} 
A_PROC_EXIT(structfields);
*ReturnedValue = (UTMACTR);
return;
} 
#undef NL

A68_INT  ZTMACTR_dimensions(A68_INT  Mode)
{ 
A68_INT  AUMACTR;  /* clause result */
A_PROC_ENTRY(dimensions);
 /* line 388: */
if ( ZOMACTR_isvector(NMMACTR_deref(Mode)) )
{ 
AUMACTR = 1;
} 
else
{ 
AUMACTR = ETMACTR_intextra(Mode);
} 
A_PROC_EXIT(dimensions);
return( AUMACTR );
} 
#undef NL
 /* line 403: */

A_STATIC A68_VOID  TUMACTR_addtolist(A68_INT  Thismode, A68_150  Auxmodes, A68_INT  Dims, A68_165 ** List)
{ 
A68_INT  VUMACTR;  /* YIELD */
A68_INT  UUMACTR_xmde;
A68_INT  WUMACTR;  /* to part of loop */
A68_INT  XUMACTR;  /* loop control */
A68_150  YUMACTR;  /* clause result */
A68_150  ZUMACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_150  AVMACTR_xmodes;
A68_165  BVMACTR;  /* collateral clause result */
A68_167  DVMACTR_generator;   /* proc value of non-global proc */
A68_150  IVMACTR;  /* avoid structure result */
A68_165 * JVMACTR;  /* YIELD */
A_PROC_ENTRY(addtolist);
 /* line 404: */
 /* line 406: */
{ 
 /* line 407: */
if ( (List==(&LUMACTR_rowlist)) )
{ 
VUMACTR = 1 ;
UUMACTR_xmde = A_VINDEX(Auxmodes,VUMACTR);
 /* line 408: */
WUMACTR = (Dims-1);
for ( XUMACTR = 1;
XUMACTR <= WUMACTR;
XUMACTR += 1 )
{ 
UUMACTR_xmde = QRMACTR_auxmode(UUMACTR_xmde);
}
 /* line 409: */
 /* line 410: */
YUMACTR = A_HVEC(ZUMACTR,UUMACTR_xmde,A68_INT );
} 
else
{ 
YUMACTR = Auxmodes;
} 
AVMACTR_xmodes = YUMACTR;
 /* line 412: */
 /* line 413: */
 /* line 414: */
BVMACTR.Thismode = NMMACTR_deref(Thismode);
A_CLOSURE( DVMACTR_generator, EVMACTR_generator, FVMACTR_generator );
(( FVMACTR_generator * ) ( DVMACTR_generator.nonlocals )) -> AVMACTR_xmodes = AVMACTR_xmodes;
 /* line 415: */
A_CALLPROC(DVMACTR_generator,(A68_FALSE, &IVMACTR),(A68_FALSE, &IVMACTR,(DVMACTR_generator).nonlocals));
A_VASSIGN2(AVMACTR_xmodes,IVMACTR,A68_INT ) ;
BVMACTR.Auxmode = IVMACTR;
 /* line 416: */
BVMACTR.Dims = Dims;
 /* line 417: */
BVMACTR.Next = (*List);
JVMACTR = A_HEAP(A68_165 ) ;
(*JVMACTR) = BVMACTR ;
(*List) = JVMACTR;
} 
A_PROC_EXIT(addtolist);
return;
} 
#undef NL

A_STATIC A68_BOOL  MVMACTR_(A68_150  A, A68_150  B)
{ 
A68_BOOL  NVMACTR_eq;
A68_INT  OVMACTR_i;
A68_INT  PVMACTR;  /* to part of loop */
A68_BOOL  QVMACTR;  /* clause result */
A_PROC_ENTRY(=);
 /* line 420: */
 /* line 421: */
 /* line 422: */
if ( (A.upb==B.upb) )
{ 
 /* line 423: */
PVMACTR = A.upb;
for ( OVMACTR_i = 1;
OVMACTR_i <= PVMACTR;
OVMACTR_i += 1 )
{ 
 /* line 424: */
if ( !(NVMACTR_eq = (A_VINDEX(A,OVMACTR_i)==A_VINDEX(B,OVMACTR_i))) ) break;
/*SKIP*/;
}
 /* line 425: */
 /* line 426: */
QVMACTR = NVMACTR_eq;
} 
else
{ 
 /* line 427: */
QVMACTR = A68_FALSE;
} 
A_PROC_EXIT(=);
return( QVMACTR );
} 
#undef NL

A_STATIC A68_BOOL  TVMACTR_(A68_150  A, A68_150  B)
{ 
A68_BOOL  UVMACTR;  /* clause result */
A_PROC_ENTRY(/=);
UVMACTR = !MVMACTR_(A, B);
A_PROC_EXIT(/=);
return( UVMACTR );
} 
#undef NL

A_STATIC A68_INT  YVMACTR_lookup(A68_INT  Mode, A68_150  Auxmode, A68_INT  Dims)
{ 
A68_165 * ZVMACTR;  /* clause result */
A68_165 * CWMACTR;  /* OPERATORS - skip to mode */
A68_165 * DWMACTR_current;
A68_BOOL  EWMACTR;  /* optbool result */
A68_BOOL  FWMACTR;  /* optbool result */
A68_151  GWMACTR;  /* avoid structure result */
A68_151  HWMACTR_strctfields;
A68_151  JWMACTR;  /* OPERATORS - nil -> mode */
A68_151  KWMACTR;  /* != */
A68_173  NWMACTR_generator;   /* proc value of non-global proc */
A68_172  TWMACTR;  /* avoid structure result */
A68_172  SWMACTR_fieldnames;
A68_148 * UWMACTR_strctfield;
A68_56 * VWMACTR_fieldname;
A68_INT  WWMACTR;  /* forall loop counter */
A68_BOOL  XWMACTR;  /* optbool result */
A68_BOOL  YWMACTR;  /* optbool result */
A68_BOOL  ZWMACTR_equal;
A68_151  AXMACTR;  /* avoid structure result */
A68_151  BXMACTR_strctfields;
A68_151  DXMACTR;  /* OPERATORS - nil -> mode */
A68_151  EXMACTR;  /* != */
A68_56 * GXMACTR_fieldname;
A68_148 * HXMACTR_strctfield;
A68_INT  IXMACTR;  /* forall loop counter */
A68_VC  JXMACTR;  /* OPERATORS - istruct -> vector */
A68_VC  KXMACTR;  /* OPERATORS - istruct -> vector */
A68_56  LXMACTR;  /* OPERATORS - istruct -> vector */
A68_BOOL  MXMACTR;  /* clause result */
A68_BOOL  NXMACTR;  /* optbool result */
A68_BOOL  OXMACTR;  /* optbool result */
A68_INT  RXMACTR;  /* clause result */
A_PROC_ENTRY(lookup);
 /* line 432: */
 /* line 433: */
{ 
 /* line 434: */
if ( EPMACTR_isrow(Mode) )
{ 
ZVMACTR = LUMACTR_rowlist;
} 
else
{ 
 /* line 435: */
if ( ZOMACTR_isvector(Mode) )
{ 
ZVMACTR = MUMACTR_vectorlist;
} 
else
{ 
 /* line 436: */
if ( YPMACTR_isstruct(Mode) )
{ 
ZVMACTR = NUMACTR_structlist;
} 
else
{ 
 /* line 437: */
if ( CQMACTR_isunion(Mode) )
{ 
ZVMACTR = OUMACTR_unionlist;
} 
else
{ 
PXIACTR_assert(BWMACTR, A68_FALSE);
 /* line 438: */
 /* line 439: */
ZVMACTR = CWMACTR;
} 
} 
} 
} 
DWMACTR_current = ZVMACTR;
 /* line 441: */
 /* line 442: */
 /* line 443: */
if ( EPMACTR_isrow(Mode) )
{ 
for ( ;; )
{ 
 /* line 444: */
EWMACTR = (DWMACTR_current!=(A68_165 *)A68_NIL);
if ( EWMACTR )
{ /* line 445: */
FWMACTR = TVMACTR_((*(&(DWMACTR_current->Auxmode))), Auxmode);
if ( ! FWMACTR )
{ /* line 446: */
FWMACTR = ((*(&(DWMACTR_current->Dims)))!=Dims);
}
 /* line 447: */
EWMACTR = FWMACTR;
}
 /* line 448: */
if ( !(EWMACTR) ) break;
 /* line 449: */
DWMACTR_current = (*(&(DWMACTR_current->Next)));
}
 /* line 450: */
} 
else
{ 
 /* line 451: */
 /* line 456: */
if ( YPMACTR_isstruct(Mode) )
{ 
NTMACTR_structfields( Mode, &GWMACTR );
HWMACTR_strctfields = GWMACTR;
 /* line 457: */
 /* line 458: */
KWMACTR = A_VVAC(JWMACTR) ;
PXIACTR_assert(LWMACTR, ! A_VSTRUCTCOMP(HWMACTR_strctfields,KWMACTR));
 /* line 459: */
A_CLOSURE( NWMACTR_generator, OWMACTR_generator, PWMACTR_generator );
(( PWMACTR_generator * ) ( NWMACTR_generator.nonlocals )) -> HWMACTR_strctfields = HWMACTR_strctfields;
A_CALLPROC(NWMACTR_generator,(A68_TRUE, &TWMACTR),(A68_TRUE, &TWMACTR,(NWMACTR_generator).nonlocals));
SWMACTR_fieldnames = TWMACTR;
 /* line 461: */
 /* line 462: */
WWMACTR = HWMACTR_strctfields.upb -1;
if ( WWMACTR != SWMACTR_fieldnames.upb -1 )
{ A_ERROR( "mismatched bounds in FORALL; row no 2"); }
UWMACTR_strctfield = HWMACTR_strctfields.data;
VWMACTR_fieldname = SWMACTR_fieldnames.data;
for (;WWMACTR-- >= 0;
(UWMACTR_strctfield++
,VWMACTR_fieldname++
) )
{
 /* line 463: */
(*VWMACTR_fieldname) = (*(&(UWMACTR_strctfield->Name)));
}
 /* line 465: */
for ( ;; )
{ 
 /* line 466: */
XWMACTR = (DWMACTR_current!=(A68_165 *)A68_NIL);
if ( XWMACTR )
{ /* line 467: */
YWMACTR = MVMACTR_((*(&(DWMACTR_current->Auxmode))), Auxmode);
if ( YWMACTR )
{{ 
 /* line 468: */
 /* line 469: */
NTMACTR_structfields( (*(&(DWMACTR_current->Thismode))), &AXMACTR );
BXMACTR_strctfields = AXMACTR;
 /* line 470: */
 /* line 471: */
EXMACTR = A_VVAC(DXMACTR) ;
PXIACTR_assert(FXMACTR, ! A_VSTRUCTCOMP(BXMACTR_strctfields,EXMACTR));
 /* line 473: */
 /* line 474: */
IXMACTR = SWMACTR_fieldnames.upb -1;
if ( IXMACTR != BXMACTR_strctfields.upb -1 )
{ A_ERROR( "mismatched bounds in FORALL; row no 2"); }
GXMACTR_fieldname = SWMACTR_fieldnames.data;
HXMACTR_strctfield = BXMACTR_strctfields.data;
for (;IXMACTR-- >= 0;
(GXMACTR_fieldname++
,HXMACTR_strctfield++
) )
{
 /* line 475: */
 /* line 476: */
LXMACTR = (*(&(HXMACTR_strctfield->Name))) ;
if ( !(ZWMACTR_equal = A_VC_EQ(A_HISVEC(JXMACTR,(*GXMACTR_fieldname),32,A68_CHAR ),A_HISVEC(KXMACTR,LXMACTR,32,A68_CHAR ))) ) break;
/*SKIP*/;
}
 /* line 477: */
 /* line 478: */
 /* line 479: */
MXMACTR = ZWMACTR_equal;
} 
YWMACTR = MXMACTR;
}
 /* line 480: */
XWMACTR = !YWMACTR;
}
 /* line 481: */
if ( !(XWMACTR) ) break;
 /* line 482: */
DWMACTR_current = (*(&(DWMACTR_current->Next)));
}
 /* line 483: */
} 
else
{ 
NXMACTR = ZOMACTR_isvector(Mode);
if ( ! NXMACTR )
{ /* line 484: */
NXMACTR = CQMACTR_isunion(Mode);
}
 /* line 485: */
if ( NXMACTR )
{ 
for ( ;; )
{ 
 /* line 486: */
OXMACTR = (DWMACTR_current!=(A68_165 *)A68_NIL);
if ( OXMACTR )
{ /* line 487: */
OXMACTR = TVMACTR_((*(&(DWMACTR_current->Auxmode))), Auxmode);
}
 /* line 488: */
if ( !(OXMACTR) ) break;
 /* line 489: */
DWMACTR_current = (*(&(DWMACTR_current->Next)));
}
 /* line 490: */
} 
else
{ 
 /* line 491: */
PXIACTR_assert(QXMACTR, A68_FALSE);
} 
} 
} 
 /* line 493: */
 /* line 494: */
 /* line 495: */
if ( (DWMACTR_current==(A68_165 *)A68_NIL) )
{ 
 /* line 496: */
RXMACTR = VEAACTR_faultmode;
} 
else
{ 
 /* line 498: */
RXMACTR = (*(&(DWMACTR_current->Thismode)));
} 
} 
A_PROC_EXIT(lookup);
return( RXMACTR );
} 
#undef NL

A_STATIC A68_INT  UXMACTR_deflexedmode(A68_INT  Mode, A68_BOOL  Toplevel)
{ 
A68_INT  VXMACTR;  /* YIELD */
A68_INT  WXMACTR;  /* clause result */
A68_BOOL  XXMACTR;  /* optbool result */
A68_INT  YXMACTR;  /* YIELD */
A_PROC_ENTRY(deflexedmode);
 /* line 506: */
 /* line 507: */
 /* line 508: */
VXMACTR = NMMACTR_deref(Mode) ;
if ( ((*(&((&A_R1INDEX(FMMACTR_modes,VXMACTR))->Deflexedmode)))==PEAACTR_nomode) )
{ 
WXMACTR = PEAACTR_nomode;
} 
else
{ 
XXMACTR = !Toplevel;
if ( XXMACTR )
{XXMACTR = TPMACTR_isflexarray(Mode);
}
if ( XXMACTR )
{ /* line 509: */
XXMACTR = (Mode>VFAACTR_refmark);
}
 /* line 511: */
if ( XXMACTR )
{ 
WXMACTR = Mode;
} 
else
{ 
 /* line 512: */
YXMACTR = NMMACTR_deref(Mode) ;
WXMACTR = ((*(&((&A_R1INDEX(FMMACTR_modes,YXMACTR))->Deflexedmode)))+((Mode/VFAACTR_refmark)*VFAACTR_refmark));
} 
} 
A_PROC_EXIT(deflexedmode);
return( WXMACTR );
} 
#undef NL

A_STATIC A68_INT  BYMACTR_findthedeflexmode(A68_INT  Mode, A68_BOOL  Toplevel)
{ 
A68_INT  CYMACTR_d;
A68_BOOL  DYMACTR;  /* clause result */
A68_INT  EYMACTR;  /* clause result */
A68_BITS  FYMACTR;  /* ADICOPS - >= */
A68_INT  GYMACTR_derefedmode;
A68_INT  HYMACTR_refs;
A68_BITS * IYMACTR;  /* YIELD */
A68_BOOL  JYMACTR;  /* clause result */
A68_150  KYMACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  LYMACTR_l;
A68_INT  MYMACTR;  /* clause result */
A68_INT * NYMACTR;  /* YIELD */
A68_151  OYMACTR;  /* avoid structure result */
A68_151  PYMACTR_strctfields;
A68_151  RYMACTR;  /* OPERATORS - nil -> mode */
A68_151  SYMACTR;  /* != */
A68_167  VYMACTR_generator;   /* proc value of non-global proc */
A68_150  BZMACTR;  /* avoid structure result */
A68_150  AZMACTR_deflexedmodes;
A68_INT * CZMACTR_thisdeflexedmode;
A68_148 * DZMACTR_strct;
A68_INT  EZMACTR;  /* forall loop counter */
A68_INT  FZMACTR_l;
A68_INT  GZMACTR;  /* clause result */
A68_INT * HZMACTR;  /* YIELD */
A68_151  IZMACTR;  /* avoid structure result */
A68_151  JZMACTR_deflexedstrctfields;
A68_151  LZMACTR;  /* OPERATORS - nil -> mode */
A68_151  MZMACTR;  /* != */
A68_150  OZMACTR;  /* avoid structure result */
A68_150  PZMACTR_deflexedmodestemp;
A68_167  RZMACTR_generator;   /* proc value of non-global proc */
A68_150  XZMACTR;  /* avoid structure result */
A68_150  WZMACTR_deflexedmodes;
A68_150  ZZMACTR;  /* OPERATORS - nil -> mode */
A68_150  AANACTR;  /* != */
A68_INT * CANACTR_thisdeflexedmode;
A68_INT  DANACTR;  /* forall loop counter */
A68_INT  EANACTR_l;
A68_INT  FANACTR;  /* clause result */
A68_INT * GANACTR;  /* YIELD */
A68_BOOL  HANACTR;  /* optbool result */
A68_INT * IANACTR;  /* YIELD */
A68_INT * JANACTR;  /* YIELD */
A68_INT * KANACTR;  /* YIELD */
A68_VC  NANACTR;  /* avoid structure result */
A68_INT  OANACTR;  /* OPERATORS - skip to mode */
A_PROC_ENTRY(findthedeflexmode);
 /* line 515: */
{ 
CYMACTR_d = UXMACTR_deflexedmode(Mode, Toplevel);
 /* line 516: */
 /* line 517: */
 /* line 518: */
DYMACTR = (CYMACTR_d!=PEAACTR_nomode);
if ( DYMACTR )
{ 
EYMACTR = CYMACTR_d;
} 
else
{ 
 /* line 519: */
 /* line 526: */
FYMACTR = URMACTR_flags(NMMACTR_deref(Mode)) ;
if ( A_LB_GE(FYMACTR,KMMACTR_deflexoutput) )
{ 
EYMACTR = Mode;
} 
else
{ 
{ 
GYMACTR_derefedmode = NMMACTR_deref(Mode);
 /* line 527: */
HYMACTR_refs = ((Mode/VFAACTR_refmark)*VFAACTR_refmark);
 /* line 529: */
IYMACTR = (&((&A_R1INDEX(FMMACTR_modes,GYMACTR_derefedmode))->Flags)) ;
(*IYMACTR) = (A68_BITS )((*(&((&A_R1INDEX(FMMACTR_modes,GYMACTR_derefedmode))->Flags)))|KMMACTR_deflexoutput);
 /* line 530: */
 /* line 531: */
 /* line 532: */
JYMACTR = JPMACTR_isarray(Mode);
if ( JYMACTR )
{ 
 /* line 533: */
 /* line 534: */
 /* line 535: */
LYMACTR_l = YVMACTR_lookup(Mode, A_HVEC(KYMACTR,BYMACTR_findthedeflexmode(A_CALLPROC(DUMACTR_elementmode,(Mode),(Mode,(DUMACTR_elementmode).nonlocals)), A68_FALSE),A68_INT ), ZTMACTR_dimensions(Mode));
 /* line 536: */
 /* line 537: */
 /* line 538: */
if ( (LYMACTR_l==VEAACTR_faultmode) )
{ 
 /* line 539: */
MYMACTR = GYMACTR_derefedmode;
} 
else
{ 
MYMACTR = LYMACTR_l;
} 
NYMACTR = (&((&A_R1INDEX(FMMACTR_modes,GYMACTR_derefedmode))->Deflexedmode)) ;
(*NYMACTR) = MYMACTR;
 /* line 540: */
 /* line 541: */
EYMACTR = UXMACTR_deflexedmode(Mode, Toplevel);
} 
else
{ 
 /* line 542: */
 /* line 543: */
if ( YPMACTR_isstruct(Mode) )
{ 
NTMACTR_structfields( Mode, &OYMACTR );
PYMACTR_strctfields = OYMACTR;
 /* line 544: */
 /* line 545: */
SYMACTR = A_VVAC(RYMACTR) ;
PXIACTR_assert(TYMACTR, ! A_VSTRUCTCOMP(PYMACTR_strctfields,SYMACTR));
 /* line 546: */
A_CLOSURE( VYMACTR_generator, WYMACTR_generator, XYMACTR_generator );
(( XYMACTR_generator * ) ( VYMACTR_generator.nonlocals )) -> PYMACTR_strctfields = PYMACTR_strctfields;
A_CALLPROC(VYMACTR_generator,(A68_TRUE, &BZMACTR),(A68_TRUE, &BZMACTR,(VYMACTR_generator).nonlocals));
AZMACTR_deflexedmodes = BZMACTR;
 /* line 548: */
 /* line 549: */
EZMACTR = AZMACTR_deflexedmodes.upb -1;
if ( EZMACTR != PYMACTR_strctfields.upb -1 )
{ A_ERROR( "mismatched bounds in FORALL; row no 2"); }
CZMACTR_thisdeflexedmode = AZMACTR_deflexedmodes.data;
DZMACTR_strct = PYMACTR_strctfields.data;
for (;EZMACTR-- >= 0;
(CZMACTR_thisdeflexedmode++
,DZMACTR_strct++
) )
{
 /* line 550: */
(*CZMACTR_thisdeflexedmode) = BYMACTR_findthedeflexmode((*(&(DZMACTR_strct->Mode))), A68_FALSE);
}
 /* line 551: */
FZMACTR_l = YVMACTR_lookup(Mode, AZMACTR_deflexedmodes, 0);
 /* line 552: */
 /* line 553: */
if ( (FZMACTR_l==VEAACTR_faultmode) )
{ 
TUMACTR_addtolist(Mode, AZMACTR_deflexedmodes, 0, (&NUMACTR_structlist));
 /* line 554: */
 /* line 555: */
 /* line 556: */
GZMACTR = GYMACTR_derefedmode;
} 
else
{ 
GZMACTR = FZMACTR_l;
} 
HZMACTR = (&((&A_R1INDEX(FMMACTR_modes,GYMACTR_derefedmode))->Deflexedmode)) ;
(*HZMACTR) = GZMACTR;
 /* line 558: */
 /* line 559: */
 /* line 562: */
if ( (UXMACTR_deflexedmode(Mode, Toplevel)!=Mode) )
{ 
NTMACTR_structfields( UXMACTR_deflexedmode(Mode, Toplevel), &IZMACTR );
JZMACTR_deflexedstrctfields = IZMACTR;
 /* line 563: */
 /* line 564: */
 /* line 565: */
MZMACTR = A_VVAC(LZMACTR) ;
PXIACTR_assert(NZMACTR, ! A_VSTRUCTCOMP(JZMACTR_deflexedstrctfields,MZMACTR));
} 
 /* line 567: */
 /* line 568: */
EYMACTR = UXMACTR_deflexedmode(Mode, Toplevel);
} 
else
{ 
 /* line 569: */
 /* line 570: */
if ( CQMACTR_isunion(Mode) )
{ 
USMACTR_modelistextra( Mode, &OZMACTR );
PZMACTR_deflexedmodestemp = OZMACTR;
 /* line 571: */
A_CLOSURE( RZMACTR_generator, SZMACTR_generator, TZMACTR_generator );
(( TZMACTR_generator * ) ( RZMACTR_generator.nonlocals )) -> PZMACTR_deflexedmodestemp = PZMACTR_deflexedmodestemp;
A_CALLPROC(RZMACTR_generator,(A68_TRUE, &XZMACTR),(A68_TRUE, &XZMACTR,(RZMACTR_generator).nonlocals));
WZMACTR_deflexedmodes = XZMACTR;
A_VASSIGN2(PZMACTR_deflexedmodestemp,WZMACTR_deflexedmodes,A68_INT );
 /* line 572: */
 /* line 573: */
AANACTR = A_VVAC(ZZMACTR) ;
PXIACTR_assert(BANACTR, ! A_VSTRUCTCOMP(WZMACTR_deflexedmodes,AANACTR));
 /* line 575: */
 /* line 576: */
DANACTR = WZMACTR_deflexedmodes.upb -1;
CANACTR_thisdeflexedmode = WZMACTR_deflexedmodes.data;
for (;DANACTR-- >= 0;
(CANACTR_thisdeflexedmode++
) )
{
 /* line 577: */
(*CANACTR_thisdeflexedmode) = BYMACTR_findthedeflexmode((*CANACTR_thisdeflexedmode), A68_FALSE);
}
 /* line 579: */
EANACTR_l = YVMACTR_lookup(Mode, WZMACTR_deflexedmodes, 0);
 /* line 580: */
 /* line 581: */
if ( (EANACTR_l==VEAACTR_faultmode) )
{ 
TUMACTR_addtolist(Mode, WZMACTR_deflexedmodes, 0, (&OUMACTR_unionlist));
 /* line 582: */
 /* line 583: */
 /* line 584: */
FANACTR = GYMACTR_derefedmode;
} 
else
{ 
FANACTR = EANACTR_l;
} 
GANACTR = (&((&A_R1INDEX(FMMACTR_modes,GYMACTR_derefedmode))->Deflexedmode)) ;
(*GANACTR) = FANACTR;
 /* line 586: */
 /* line 587: */
EYMACTR = UXMACTR_deflexedmode(Mode, Toplevel);
} 
else
{ 
HANACTR = SQMACTR_isproc(Mode);
if ( ! HANACTR )
{ /* line 588: */
HANACTR = WQMACTR_isprocp(Mode);
}
if ( HANACTR )
{ 
IANACTR = (&((&A_R1INDEX(FMMACTR_modes,GYMACTR_derefedmode))->Deflexedmode)) ;
(*IANACTR) = GYMACTR_derefedmode;
 /* line 589: */
 /* line 590: */
EYMACTR = Mode;
} 
else
{ 
 /* line 591: */
if ( GQMACTR_isistruct(Mode) )
{ 
JANACTR = (&((&A_R1INDEX(FMMACTR_modes,GYMACTR_derefedmode))->Deflexedmode)) ;
(*JANACTR) = GYMACTR_derefedmode;
 /* line 592: */
 /* line 593: */
EYMACTR = Mode;
} 
else
{ 
 /* line 594: */
if ( KQMACTR_isstraight(Mode) )
{ 
KANACTR = (&((&A_R1INDEX(FMMACTR_modes,GYMACTR_derefedmode))->Deflexedmode)) ;
(*KANACTR) = GYMACTR_derefedmode;
 /* line 595: */
 /* line 596: */
EYMACTR = Mode;
} 
else
{ 
ROAAOSF_whole( Mode, 0, &NANACTR );
PXIACTR_assert(A_VC_PLUS(MANACTR,NANACTR), A68_FALSE);
 /* line 597: */
 /* line 598: */
EYMACTR = OANACTR;
} 
} 
} 
} 
} 
} 
} 
} 
} 
} 
A_PROC_EXIT(findthedeflexmode);
return( EYMACTR );
} 
#undef NL

A68_INT  QANACTR_finddeflexmode(A68_INT  Mode)
{ 
A68_INT  RANACTR;  /* clause result */
A_PROC_ENTRY(finddeflexmode);
 /* line 601: */
RANACTR = BYMACTR_findthedeflexmode(Mode, A68_TRUE);
A_PROC_EXIT(finddeflexmode);
return( RANACTR );
} 
#undef NL

A_STATIC A68_VOID  TANACTR_auxmodename(A68_INT  Mode, A68_VC  *ReturnedValue)
{ 
A68_VC  UANACTR;  /* clause result */
A68_VC  VANACTR;  /* avoid structure result */
A68_VC  WANACTR;  /* avoid structure result */
A68_INT  XANACTR_type;
A68_VC  ABNACTR;  /* avoid structure result */
A68_VC  DBNACTR;  /* avoid structure result */
A_PROC_ENTRY(auxmodename);
 /* line 604: */
 /* line 605: */
if ( (Mode>VFAACTR_refmark) )
{ 
 /* line 606: */
KDHACTR_message( 92, &VANACTR );
TANACTR_auxmodename( (Mode-VFAACTR_refmark), &WANACTR );
UANACTR = A_VC_PLUS(VANACTR,WANACTR);
} 
else
{ 
XANACTR_type = RMMACTR_modetype(Mode);
 /* line 607: */
 /* line 608: */
if ( ((Mode<=OFAACTR_longlongcomplmode)|(XANACTR_type==EEAACTR_primitive)) )
{ 
if ( (Mode==TEAACTR_gotomode) )
{ 
UANACTR = ZANACTR;
} 
else
{ 
 /* line 609: */
 /* line 610: */
KDHACTR_message( (66+Mode), &ABNACTR );
UANACTR = ABNACTR;
} 
} 
else
{ 
 /* line 611: */
 /* line 612: */
ROAAOSF_whole( Mode, 0, &DBNACTR );
UANACTR = A_VC_PLUS(CBNACTR,DBNACTR);
} 
} 
A_PROC_EXIT(auxmodename);
*ReturnedValue = (UANACTR);
return;
} 
#undef NL

A68_VOID  FBNACTR_modename(A68_INT  Mode, A68_VC  *ReturnedValue)
{ 
A68_VC  GBNACTR;  /* clause result */
A68_VC  HBNACTR;  /* avoid structure result */
A68_VC  IBNACTR;  /* avoid structure result */
A68_INT  JBNACTR_type;
A68_VC  MBNACTR;  /* avoid structure result */
A68_139  PBNACTR_rowmodename;   /* proc value of non-global proc */
A68_VC  DDNACTR;  /* avoid structure result */
A68_VC  EDNACTR_typemess;
A68_VC  FDNACTR;  /* avoid structure result */
A68_150  GDNACTR;  /* avoid structure result */
A68_VC  HDNACTR;  /* avoid structure result */
A68_VC  IDNACTR;  /* avoid structure result */
A68_VC  JDNACTR;  /* avoid structure result */
A68_150  KDNACTR;  /* avoid structure result */
A68_VC  LDNACTR;  /* avoid structure result */
A68_VC  MDNACTR;  /* avoid structure result */
A68_151  NDNACTR;  /* avoid structure result */
A68_VC  ODNACTR;  /* avoid structure result */
A68_VC  PDNACTR;  /* avoid structure result */
A68_VC  QDNACTR;  /* avoid structure result */
A68_VC  RDNACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  SDNACTR;  /* avoid structure result */
A68_VC  TDNACTR;  /* avoid structure result */
A68_VC  UDNACTR;  /* avoid structure result */
A68_VC  VDNACTR;  /* avoid structure result */
A68_VC  WDNACTR;  /* avoid structure result */
A68_VC  XDNACTR;  /* avoid structure result */
A68_VC  YDNACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(modename);
 /* line 615: */
 /* line 616: */
 /* line 617: */
if ( (Mode>VFAACTR_refmark) )
{ 
 /* line 618: */
 /* line 619: */
KDHACTR_message( 92, &HBNACTR );
FBNACTR_modename( (Mode-VFAACTR_refmark), &IBNACTR );
GBNACTR = A_VC_PLUS(HBNACTR,IBNACTR);
} 
else
{ 
JBNACTR_type = RMMACTR_modetype(Mode);
 /* line 620: */
 /* line 621: */
if ( ((Mode<=OFAACTR_longlongcomplmode)|(JBNACTR_type==EEAACTR_primitive)) )
{ 
if ( (Mode==TEAACTR_gotomode) )
{ 
GBNACTR = LBNACTR;
} 
else
{ 
 /* line 622: */
 /* line 623: */
KDHACTR_message( (66+Mode), &MBNACTR );
GBNACTR = MBNACTR;
} 
} 
else
{ 
A_CLOSURE( PBNACTR_rowmodename, QBNACTR_rowmodename, RBNACTR_rowmodename );
(( RBNACTR_rowmodename * ) ( PBNACTR_rowmodename.nonlocals )) -> Mode = Mode;
 /* line 629: */
 /* line 639: */
 /* line 649: */
KDHACTR_message( (550+JBNACTR_type), &DDNACTR );
EDNACTR_typemess = DDNACTR;
 /* line 650: */
 /* line 651: */
 /* line 653: */
switch ( (JBNACTR_type-1) )
{ 
case 1: 
 /* line 655: */
TANACTR_auxmodename( A_CALLPROC(BUMACTR_deproc,(Mode),(Mode,(BUMACTR_deproc).nonlocals)), &FDNACTR );
GBNACTR = A_VC_PLUS(EDNACTR_typemess,FDNACTR);
break;
case 2: 
 /* line 656: */
 /* line 658: */
USMACTR_modelistextra( Mode, &GDNACTR );
WBNACTR_modelist( GDNACTR, &HDNACTR );
KDHACTR_message( 562, &IDNACTR );
TANACTR_auxmodename( A_CALLPROC(BUMACTR_deproc,(Mode),(Mode,(BUMACTR_deproc).nonlocals)), &JDNACTR );
GBNACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(EDNACTR_typemess,HDNACTR),IDNACTR),JDNACTR);
break;
case 3: 
 /* line 660: */
USMACTR_modelistextra( Mode, &KDNACTR );
WBNACTR_modelist( KDNACTR, &LDNACTR );
KDHACTR_message( 562, &MDNACTR );
GBNACTR = A_VC_PLUS(A_VC_PLUS(EDNACTR_typemess,LDNACTR),MDNACTR);
break;
case 4: 
 /* line 662: */
NTMACTR_structfields( Mode, &NDNACTR );
NCNACTR_fieldlist( NDNACTR, &ODNACTR );
KDHACTR_message( 562, &PDNACTR );
GBNACTR = A_VC_PLUS(A_VC_PLUS(EDNACTR_typemess,ODNACTR),PDNACTR);
break;
case 5: 
 /* line 663: */
 /* line 665: */
ROAAOSF_whole( A_CALLPROC(FUMACTR_istructlength,(Mode),(Mode,(FUMACTR_istructlength).nonlocals)), 0, &QDNACTR );
TANACTR_auxmodename( A_CALLPROC(DUMACTR_elementmode,(Mode),(Mode,(DUMACTR_elementmode).nonlocals)), &SDNACTR );
GBNACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(EDNACTR_typemess,QDNACTR),A_HVEC(RDNACTR,' ',A68_CHAR )),SDNACTR);
break;
case 6: 
 /* line 667: */
A_CALLPROC(PBNACTR_rowmodename,(EDNACTR_typemess, &TDNACTR),(EDNACTR_typemess, &TDNACTR,(PBNACTR_rowmodename).nonlocals));
GBNACTR = TDNACTR;
break;
case 7: 
 /* line 669: */
A_CALLPROC(PBNACTR_rowmodename,(EDNACTR_typemess, &UDNACTR),(EDNACTR_typemess, &UDNACTR,(PBNACTR_rowmodename).nonlocals));
GBNACTR = UDNACTR;
break;
case 8: 
 /* line 671: */
A_CALLPROC(PBNACTR_rowmodename,(EDNACTR_typemess, &VDNACTR),(EDNACTR_typemess, &VDNACTR,(PBNACTR_rowmodename).nonlocals));
GBNACTR = VDNACTR;
break;
case 9: 
 /* line 673: */
A_CALLPROC(PBNACTR_rowmodename,(EDNACTR_typemess, &WDNACTR),(EDNACTR_typemess, &WDNACTR,(PBNACTR_rowmodename).nonlocals));
GBNACTR = WDNACTR;
break;
case 10: 
 /* line 674: */
 /* line 676: */
TANACTR_auxmodename( A_CALLPROC(DUMACTR_elementmode,(Mode),(Mode,(DUMACTR_elementmode).nonlocals)), &XDNACTR );
GBNACTR = A_VC_PLUS(EDNACTR_typemess,XDNACTR);
break;
default: 
 /* line 677: */
 /* line 678: */
GBNACTR = A_HVEC(YDNACTR,'?',A68_CHAR );
break;
} 
} 
} 
A_PROC_EXIT(modename);
*ReturnedValue = (GBNACTR);
return;
} 
#undef NL

A68_VOID  AENACTR_cfieldname(A68_148 * Sf, A68_VC  *ReturnedValue)
{ 
A68_VC  BENACTR;  /* clause result */
A68_VC  CENACTR;  /* OPERATORS - istruct -> vector */
A68_56 * DENACTR;  /* OPERATORS - istruct -> vector */
A68_VC  EENACTR;  /* avoid structure result */
A68_VC  FENACTR;  /* avoid structure result */
A_PROC_ENTRY(cfieldname);
 /* line 684: */
 /* line 685: */
 /* line 686: */
DENACTR = (&(Sf->Name)) ;
RMAAOSF_scanto( ' ', A_ISVEC(CENACTR,DENACTR,32,A68_CHAR ), &EENACTR );
SNAAOSF_capitalised( EENACTR, &FENACTR );
BENACTR = FENACTR;
A_PROC_EXIT(cfieldname);
*ReturnedValue = (BENACTR);
return;
} 
#undef NL

A68_VOID  IENACTR_select(A68_INT  Mode, A68_INT  Field, A68_VC  *ReturnedValue)
{ 
A68_VC  JENACTR;  /* clause result */
A68_151  KENACTR;  /* avoid structure result */
A68_VC  LENACTR;  /* avoid structure result */
A_PROC_ENTRY(select);
 /* line 692: */
 /* line 693: */
 /* line 694: */
NTMACTR_structfields( Mode, &KENACTR );
AENACTR_cfieldname( (&A_VINDEX(KENACTR,Field)), &LENACTR );
JENACTR = LENACTR;
A_PROC_EXIT(select);
*ReturnedValue = (JENACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  NENACTR_builtinmode(A68_INT  Mode, A68_VC  *ReturnedValue)
{ 
A68_INT  OENACTR_m;
A68_VC  RENACTR;  /* clause result */
A68_VC  SENACTR;  /* OPERATORS - skip to mode */
A68_VC  VENACTR;  /* OPERATORS - skip to mode */
A68_VC  EFNACTR;  /* OPERATORS - skip to mode */
A68_VC  LFNACTR;  /* OPERATORS - skip to mode */
A68_VC  WHNACTR;  /* OPERATORS - skip to mode */
A68_VC  ZHNACTR;  /* OPERATORS - skip to mode */
A68_VC  CINACTR;  /* OPERATORS - skip to mode */
A68_VC  GINACTR;  /* avoid structure result */
A68_VC  IINACTR;  /* OPERATORS - skip to mode */
A_PROC_ENTRY(builtinmode);
 /* line 697: */
 /* line 698: */
{ 
OENACTR_m = NMMACTR_deref(Mode);
 /* line 699: */
 /* line 700: */
switch ( OENACTR_m )
{ 
case 1: 
{ 
PXIACTR_assert(QENACTR, A68_FALSE);
 /* line 701: */
RENACTR = SENACTR;
} 
break;
case 2: 
{ 
PXIACTR_assert(UENACTR, A68_FALSE);
 /* line 702: */
RENACTR = VENACTR;
} 
break;
case 3: 
 /* line 703: */
RENACTR = XENACTR;
break;
case 4: 
 /* line 704: */
RENACTR = ZENACTR;
break;
case 5: 
 /* line 705: */
RENACTR = BFNACTR;
break;
case 6: 
{ 
PXIACTR_assert(DFNACTR, A68_FALSE);
 /* line 706: */
RENACTR = EFNACTR;
} 
break;
case 7: 
 /* line 707: */
RENACTR = GFNACTR;
break;
case 8: 
 /* line 708: */
RENACTR = IFNACTR;
break;
case 9: 
{ 
PXIACTR_assert(KFNACTR, A68_FALSE);
 /* line 709: */
RENACTR = LFNACTR;
} 
break;
case 10: 
if ( MQIACTR_longlongoption )
{ 
RENACTR = NFNACTR;
} 
else
{ 
 /* line 710: */
RENACTR = PFNACTR;
} 
break;
case 11: 
 /* line 711: */
RENACTR = RFNACTR;
break;
case 12: 
if ( MQIACTR_longlongoption )
{ 
RENACTR = TFNACTR;
} 
else
{ 
 /* line 712: */
RENACTR = VFNACTR;
} 
break;
case 13: 
if ( MQIACTR_longlongoption )
{ 
RENACTR = XFNACTR;
} 
else
{ 
 /* line 713: */
RENACTR = ZFNACTR;
} 
break;
case 14: 
if ( MQIACTR_longlongoption )
{ 
RENACTR = BGNACTR;
} 
else
{ 
 /* line 714: */
RENACTR = DGNACTR;
} 
break;
case 15: 
 /* line 715: */
RENACTR = FGNACTR;
break;
case 16: 
if ( MQIACTR_longlongoption )
{ 
RENACTR = HGNACTR;
} 
else
{ 
 /* line 716: */
RENACTR = JGNACTR;
} 
break;
case 17: 
if ( MQIACTR_longlongoption )
{ 
RENACTR = LGNACTR;
} 
else
{ 
 /* line 717: */
RENACTR = NGNACTR;
} 
break;
case 18: 
if ( MQIACTR_longlongoption )
{ 
RENACTR = PGNACTR;
} 
else
{ 
 /* line 718: */
RENACTR = RGNACTR;
} 
break;
case 19: 
 /* line 719: */
RENACTR = TGNACTR;
break;
case 20: 
if ( MQIACTR_longlongoption )
{ 
RENACTR = VGNACTR;
} 
else
{ 
 /* line 720: */
RENACTR = XGNACTR;
} 
break;
case 21: 
if ( MQIACTR_longlongoption )
{ 
RENACTR = ZGNACTR;
} 
else
{ 
 /* line 721: */
RENACTR = BHNACTR;
} 
break;
case 22: 
if ( MQIACTR_longlongoption )
{ 
RENACTR = DHNACTR;
} 
else
{ 
 /* line 722: */
RENACTR = FHNACTR;
} 
break;
case 23: 
 /* line 723: */
RENACTR = HHNACTR;
break;
case 24: 
if ( MQIACTR_longlongoption )
{ 
RENACTR = JHNACTR;
} 
else
{ 
 /* line 724: */
RENACTR = LHNACTR;
} 
break;
case 25: 
if ( MQIACTR_longlongoption )
{ 
RENACTR = NHNACTR;
} 
else
{ 
 /* line 725: */
RENACTR = PHNACTR;
} 
break;
case 26: 
 /* line 726: */
RENACTR = RHNACTR;
break;
case 27: 
 /* line 727: */
RENACTR = THNACTR;
break;
case 28: 
{ 
PXIACTR_assert(VHNACTR, A68_FALSE);
 /* line 728: */
RENACTR = WHNACTR;
} 
break;
case 29: 
{ 
PXIACTR_assert(YHNACTR, A68_FALSE);
 /* line 729: */
RENACTR = ZHNACTR;
} 
break;
case 30: 
{ 
PXIACTR_assert(BINACTR, A68_FALSE);
 /* line 730: */
RENACTR = CINACTR;
} 
break;
default: 
ROAAOSF_whole( Mode, 0, &GINACTR );
PXIACTR_assert(A_VC_PLUS(A_VC_PLUS(FINACTR,GINACTR),HINACTR), A68_FALSE);
 /* line 731: */
 /* line 732: */
RENACTR = IINACTR;
break;
} 
} 
A_PROC_EXIT(builtinmode);
*ReturnedValue = (RENACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  LINACTR_givectype(A68_INT  Mode, A68_BOOL  Tagged, A68_VC  *ReturnedValue)
{ 
A68_INT  MINACTR_basicmode;
A68_BOOL  NINACTR;  /* clause result */
A68_VC  PINACTR;  /* clause result */
A68_VC  RINACTR;  /* avoid structure result */
A68_VC  TINACTR;  /* clause result */
A68_VC  XINACTR;  /* avoid structure result */
A68_VC  YINACTR;  /* clause result */
A68_VC  ZINACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(givectype);
 /* line 738: */
 /* line 739: */
 /* line 740: */
{ 
MINACTR_basicmode = NMMACTR_deref(Mode);
 /* line 741: */
 /* line 742: */
 /* line 743: */
NINACTR = (MINACTR_basicmode<UFAACTR_firstnonfixedmode);
if ( NINACTR )
{ 
 /* line 744: */
 /* line 745: */
NENACTR_builtinmode( MINACTR_basicmode, &RINACTR );
PINACTR = A_VC_PLUS(QINACTR,RINACTR);
} 
else
{ 
if ( Tagged )
{ 
TINACTR = UINACTR;
} 
else
{ 
TINACTR = WINACTR;
} 
 /* line 746: */
ROAAOSF_whole( MINACTR_basicmode, 0, &XINACTR );
PINACTR = A_VC_PLUS(TINACTR,XINACTR);
} 
} 
 /* line 747: */
 /* line 748: */
YINACTR = A_VC_PLUS(A_VC_PLUS(PINACTR,A_HVEC(ZINACTR,' ',A68_CHAR )),A_C_TIMES('*',(Mode/VFAACTR_refmark)));
A_PROC_EXIT(givectype);
*ReturnedValue = (YINACTR);
return;
} 
#undef NL

A68_INT  CJNACTR_givecvariabletype(A68_INT  Mode, A68_BOOL  Identity)
{ 
A68_INT  DJNACTR;  /* clause result */
A68_INT  EJNACTR;  /* clause result */
A_PROC_ENTRY(givecvariabletype);
 /* line 751: */
 /* line 753: */
 /* line 754: */
if ( Identity )
{ 
if ( OPMACTR_isfirmarray(Mode) )
{ 
DJNACTR = NRMACTR_derefmodeok(Mode);
} 
else
{ 
 /* line 755: */
 /* line 756: */
DJNACTR = Mode;
} 
} 
else
{ 
if ( OPMACTR_isfirmarray(Mode) )
{ 
EJNACTR = NRMACTR_derefmodeok(Mode);
} 
else
{ 
EJNACTR = Mode;
} 
 /* line 757: */
DJNACTR = NRMACTR_derefmodeok(EJNACTR);
} 
A_PROC_EXIT(givecvariabletype);
return( DJNACTR );
} 
#undef NL

A68_VOID  GJNACTR_ctype(A68_INT  Mode, A68_VC  *ReturnedValue)
{ 
A68_VC  HJNACTR;  /* clause result */
A68_VC  IJNACTR;  /* avoid structure result */
A_PROC_ENTRY(ctype);
 /* line 760: */
LINACTR_givectype( CJNACTR_givecvariabletype(Mode, A68_TRUE), A68_FALSE, &IJNACTR );
HJNACTR = IJNACTR;
A_PROC_EXIT(ctype);
*ReturnedValue = (HJNACTR);
return;
} 
#undef NL

A68_VOID  KJNACTR_cvartype(A68_INT  Mode, A68_VC  *ReturnedValue)
{ 
A68_VC  LJNACTR;  /* clause result */
A68_VC  MJNACTR;  /* avoid structure result */
A_PROC_ENTRY(cvartype);
 /* line 763: */
LINACTR_givectype( Mode, A68_FALSE, &MJNACTR );
LJNACTR = MJNACTR;
A_PROC_EXIT(cvartype);
*ReturnedValue = (LJNACTR);
return;
} 
#undef NL

A68_VOID  OJNACTR_cast(A68_INT  Mode, A68_VC  *ReturnedValue)
{ 
A68_VC  PJNACTR;  /* clause result */
A68_VC  QJNACTR;  /* avoid structure result */
A68_VC  RJNACTR;  /* avoid structure result */
A_PROC_ENTRY(cast);
 /* line 766: */
GJNACTR_ctype( Mode, &QJNACTR );
JIAACTR_bracket( QJNACTR, &RJNACTR );
PJNACTR = RJNACTR;
A_PROC_EXIT(cast);
*ReturnedValue = (PJNACTR);
return;
} 
#undef NL

A68_VOID  TJNACTR_csizeof(A68_INT  Mode, A68_VC  *ReturnedValue)
{ 
A68_VC  VJNACTR;  /* clause result */
A68_VC  XJNACTR;  /* avoid structure result */
A_PROC_ENTRY(csizeof);
NENACTR_builtinmode( Mode, &XJNACTR );
VJNACTR = A_VC_PLUS(WJNACTR,XJNACTR);
A_PROC_EXIT(csizeof);
*ReturnedValue = (VJNACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  ZJNACTR_ctag(A68_INT  Mode, A68_VC  *ReturnedValue)
{ 
A68_VC  BKNACTR;  /* clause result */
A68_VC  DKNACTR;  /* avoid structure result */
A_PROC_ENTRY(ctag);
 /* line 771: */
ROAAOSF_whole( Mode, 0, &DKNACTR );
BKNACTR = A_VC_PLUS(CKNACTR,DKNACTR);
A_PROC_EXIT(ctag);
*ReturnedValue = (BKNACTR);
return;
} 
#undef NL

A68_VOID  FKNACTR_ctaggedtype(A68_INT  Mode, A68_VC  *ReturnedValue)
{ 
A68_VC  GKNACTR;  /* clause result */
A68_VC  HKNACTR;  /* avoid structure result */
A_PROC_ENTRY(ctaggedtype);
 /* line 774: */
LINACTR_givectype( CJNACTR_givecvariabletype(Mode, A68_TRUE), A68_TRUE, &HKNACTR );
GKNACTR = HKNACTR;
A_PROC_EXIT(ctaggedtype);
*ReturnedValue = (GKNACTR);
return;
} 
#undef NL

A68_VOID  LKNACTR_alignnextstructfield(A68_INT  Fieldmode, A68_INT  Stream)
{ 
A68_192  MKNACTR;  /* collateral clause result */
A68_136  PKNACTR;  /* OPERATORS - mode -> union mode */
A68_VC  QKNACTR;  /* YIELD */
A68_VC  RKNACTR;  /* avoid structure result */
A68_136  SKNACTR;  /* OPERATORS - mode -> union mode */
A68_136  VKNACTR;  /* OPERATORS - mode -> union mode */
A68_VC  WKNACTR;  /* YIELD */
A68_VC  XKNACTR;  /* avoid structure result */
A68_136  YKNACTR;  /* OPERATORS - mode -> union mode */
A68_136  ZKNACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  ALNACTR;  /* YIELD */
A68_136  BLNACTR;  /* OPERATORS - mode -> union mode */
A68_135  CLNACTR;  /* OPERATORS - istruct -> vector */
A68_BOOL  DLNACTR;  /* optbool result */
A68_192  ELNACTR;  /* collateral clause result */
A68_136  HLNACTR;  /* OPERATORS - mode -> union mode */
A68_VC  ILNACTR;  /* YIELD */
A68_VC  JLNACTR;  /* avoid structure result */
A68_136  KLNACTR;  /* OPERATORS - mode -> union mode */
A68_136  NLNACTR;  /* OPERATORS - mode -> union mode */
A68_VC  OLNACTR;  /* YIELD */
A68_VC  PLNACTR;  /* avoid structure result */
A68_136  QLNACTR;  /* OPERATORS - mode -> union mode */
A68_136  RLNACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  SLNACTR;  /* YIELD */
A68_136  TLNACTR;  /* OPERATORS - mode -> union mode */
A68_135  ULNACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(alignnextstructfield);
 /* line 785: */
 /* line 786: */
 /* line 787: */
if ( (Fieldmode<PFAACTR_vectorrowofcharmode) )
{ 
 /* line 788: */
QKNACTR = OKNACTR ;
MKNACTR.data[0] = A_UNITE(PKNACTR,mode2,2,QKNACTR);
NENACTR_builtinmode( Fieldmode, &RKNACTR );
MKNACTR.data[1] = A_UNITE(SKNACTR,mode2,2,RKNACTR);
 /* line 789: */
WKNACTR = UKNACTR ;
MKNACTR.data[2] = A_UNITE(VKNACTR,mode2,2,WKNACTR);
ROAAOSF_whole( IKNACTR_padno+=1, 0, &XKNACTR );
MKNACTR.data[3] = A_UNITE(YKNACTR,mode2,2,XKNACTR);
 /* line 790: */
ALNACTR = ')' ;
MKNACTR.data[4] = A_UNITE(ZKNACTR,mode1,1,ALNACTR);
MKNACTR.data[5] = A_UNITE(BLNACTR,mode4,4,EIAACTR_cnewline);
 /* line 791: */
VBMACTR_writecstream(A_HISVEC(CLNACTR,MKNACTR,6,A68_136 ), Stream);
} 
else
{ 
DLNACTR = (Fieldmode<VFAACTR_refmark);
if ( DLNACTR )
{ /* line 792: */
DLNACTR = GQMACTR_isistruct(Fieldmode);
}
 /* line 793: */
if ( DLNACTR )
{ 
 /* line 794: */
ILNACTR = GLNACTR ;
ELNACTR.data[0] = A_UNITE(HLNACTR,mode2,2,ILNACTR);
LINACTR_givectype( Fieldmode, A68_FALSE, &JLNACTR );
ELNACTR.data[1] = A_UNITE(KLNACTR,mode2,2,JLNACTR);
 /* line 795: */
OLNACTR = MLNACTR ;
ELNACTR.data[2] = A_UNITE(NLNACTR,mode2,2,OLNACTR);
ROAAOSF_whole( IKNACTR_padno+=1, 0, &PLNACTR );
ELNACTR.data[3] = A_UNITE(QLNACTR,mode2,2,PLNACTR);
 /* line 796: */
SLNACTR = ')' ;
ELNACTR.data[4] = A_UNITE(RLNACTR,mode1,1,SLNACTR);
ELNACTR.data[5] = A_UNITE(TLNACTR,mode4,4,EIAACTR_cnewline);
 /* line 797: */
VBMACTR_writecstream(A_HISVEC(ULNACTR,ELNACTR,6,A68_136 ), Stream);
} 
} 
A_PROC_EXIT(alignnextstructfield);
return;
} 
#undef NL

A_STATIC A68_VOID  YLNACTR_writectypedef(A68_INT  Underefedmode, A68_INT  Stream, A68_BOOL  Pre_declare)
{ 
A68_INT  ZLNACTR_mode;
A68_BOOL  AMNACTR;  /* optbool result */
A68_BITS  BMNACTR;  /* ADICOPS - >= */
A68_BOOL  CMNACTR;  /* clause result */
A68_VC  FMNACTR;  /* avoid structure result */
A68_VC  GMNACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_152 * HMNACTR_entry;
A68_VC  KMNACTR_typedef;
A68_VC  NMNACTR;  /* clause result */
A68_VC  PMNACTR;  /* avoid structure result */
A68_VC  TMNACTR_comment;
A68_VC  UMNACTR;  /* avoid structure result */
A68_VC  VMNACTR_typedefname;
A68_93  XMNACTR_emittagtypedef;   /* proc value of non-global proc */
A68_97  RNNACTR_emitdeflextypedef;   /* proc value of non-global proc */
A68_94  YONACTR_emitincompletetype;   /* proc value of non-global proc */
A68_94  KPNACTR_emitproctypedef;   /* proc value of non-global proc */
A68_94  RTNACTR_emitvectortypedef;   /* proc value of non-global proc */
A68_94  PUNACTR_emitarraytypedef;   /* proc value of non-global proc */
A68_192  QVNACTR;  /* collateral clause result */
A68_136  RVNACTR;  /* OPERATORS - mode -> union mode */
A68_VC  SVNACTR;  /* avoid structure result */
A68_136  TVNACTR;  /* OPERATORS - mode -> union mode */
A68_136  UVNACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  VVNACTR;  /* YIELD */
A68_136  WVNACTR;  /* OPERATORS - mode -> union mode */
A68_136  ZVNACTR;  /* OPERATORS - mode -> union mode */
A68_VC  AWNACTR;  /* YIELD */
A68_136  BWNACTR;  /* OPERATORS - mode -> union mode */
A68_135  CWNACTR;  /* OPERATORS - istruct -> vector */
A68_INT  DWNACTR_deflexmode;
A68_BOOL  EWNACTR;  /* clause result */
A68_150  FWNACTR;  /* avoid structure result */
A68_150  GWNACTR_umodes;
A68_INT * HWNACTR_umode;
A68_INT  IWNACTR;  /* forall loop counter */
A68_BITS  JWNACTR;  /* ADICOPS - >= */
A68_203  KWNACTR;  /* collateral clause result */
A68_136  NWNACTR;  /* OPERATORS - mode -> union mode */
A68_VC  OWNACTR;  /* YIELD */
A68_VC  PWNACTR;  /* avoid structure result */
A68_136  QWNACTR;  /* OPERATORS - mode -> union mode */
A68_136  TWNACTR;  /* OPERATORS - mode -> union mode */
A68_VC  UWNACTR;  /* YIELD */
A68_136  VWNACTR;  /* OPERATORS - mode -> union mode */
A68_135  WWNACTR;  /* OPERATORS - istruct -> vector */
A68_INT  XWNACTR_i;
A68_INT  YWNACTR;  /* to part of loop */
A68_INT  ZWNACTR_thismode;
A68_BOOL  AXNACTR;  /* clause result */
A68_204  BXNACTR;  /* collateral clause result */
A68_VC  CXNACTR;  /* avoid structure result */
A68_136  DXNACTR;  /* OPERATORS - mode -> union mode */
A68_136  GXNACTR;  /* OPERATORS - mode -> union mode */
A68_VC  HXNACTR;  /* YIELD */
A68_VC  IXNACTR;  /* avoid structure result */
A68_136  JXNACTR;  /* OPERATORS - mode -> union mode */
A68_136  KXNACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  LXNACTR;  /* YIELD */
A68_136  MXNACTR;  /* OPERATORS - mode -> union mode */
A68_135  NXNACTR;  /* OPERATORS - istruct -> vector */
A68_200  OXNACTR;  /* collateral clause result */
A68_136  RXNACTR;  /* OPERATORS - mode -> union mode */
A68_VC  SXNACTR;  /* YIELD */
A68_136  TXNACTR;  /* OPERATORS - mode -> union mode */
A68_135  UXNACTR;  /* OPERATORS - istruct -> vector */
A68_INT  VXNACTR_deflexmode;
A68_BOOL  WXNACTR;  /* clause result */
A68_151  XXNACTR;  /* avoid structure result */
A68_151  YXNACTR_fields;
A68_148 * ZXNACTR_field;
A68_INT  AYNACTR;  /* forall loop counter */
A68_BITS  BYNACTR;  /* ADICOPS - >= */
A68_200  CYNACTR;  /* collateral clause result */
A68_VC  FYNACTR;  /* avoid structure result */
A68_VC  GYNACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_136  HYNACTR;  /* OPERATORS - mode -> union mode */
A68_VC  IYNACTR;  /* YIELD */
A68_136  JYNACTR;  /* OPERATORS - mode -> union mode */
A68_135  KYNACTR;  /* OPERATORS - istruct -> vector */
A68_148 * LYNACTR_field;
A68_INT  MYNACTR;  /* forall loop counter */
A68_204  NYNACTR;  /* collateral clause result */
A68_VC  OYNACTR;  /* avoid structure result */
A68_136  PYNACTR;  /* OPERATORS - mode -> union mode */
A68_136  QYNACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  RYNACTR;  /* YIELD */
A68_VC  SYNACTR;  /* avoid structure result */
A68_136  TYNACTR;  /* OPERATORS - mode -> union mode */
A68_136  UYNACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  VYNACTR;  /* YIELD */
A68_136  WYNACTR;  /* OPERATORS - mode -> union mode */
A68_135  XYNACTR;  /* OPERATORS - istruct -> vector */
A68_200  YYNACTR;  /* collateral clause result */
A68_136  BZNACTR;  /* OPERATORS - mode -> union mode */
A68_VC  CZNACTR;  /* YIELD */
A68_136  DZNACTR;  /* OPERATORS - mode -> union mode */
A68_135  EZNACTR;  /* OPERATORS - istruct -> vector */
A68_INT  FZNACTR_elemmode;
A68_BITS  GZNACTR;  /* ADICOPS - >= */
A68_196  HZNACTR;  /* collateral clause result */
A68_VC  KZNACTR;  /* avoid structure result */
A68_136  LZNACTR;  /* OPERATORS - mode -> union mode */
A68_VC  MZNACTR;  /* YIELD */
A68_136  NZNACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  OZNACTR;  /* YIELD */
A68_136  PZNACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  QZNACTR;  /* YIELD */
A68_VC  RZNACTR;  /* avoid structure result */
A68_136  SZNACTR;  /* OPERATORS - mode -> union mode */
A68_136  TZNACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  UZNACTR;  /* YIELD */
A68_VC  VZNACTR;  /* avoid structure result */
A68_136  WZNACTR;  /* OPERATORS - mode -> union mode */
A68_136  ZZNACTR;  /* OPERATORS - mode -> union mode */
A68_VC  AAOACTR;  /* YIELD */
A68_136  BAOACTR;  /* OPERATORS - mode -> union mode */
A68_135  CAOACTR;  /* OPERATORS - istruct -> vector */
A68_INT  DAOACTR_elemmode;
A68_204  EAOACTR;  /* collateral clause result */
A68_VC  HAOACTR;  /* clause result */
A68_VC  JAOACTR;  /* avoid structure result */
A68_136  LAOACTR;  /* OPERATORS - mode -> union mode */
A68_VC  MAOACTR;  /* YIELD */
A68_136  NAOACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  OAOACTR;  /* YIELD */
A68_VC  PAOACTR;  /* avoid structure result */
A68_136  QAOACTR;  /* OPERATORS - mode -> union mode */
A68_136  TAOACTR;  /* OPERATORS - mode -> union mode */
A68_VC  UAOACTR;  /* YIELD */
A68_136  VAOACTR;  /* OPERATORS - mode -> union mode */
A68_135  WAOACTR;  /* OPERATORS - istruct -> vector */
A68_BITS * XAOACTR;  /* YIELD */
A68_BITS * YAOACTR;  /* YIELD */
A_PROC_ENTRY(writectypedef);
 /* line 827: */
{ 
ZLNACTR_mode = NMMACTR_deref(Underefedmode);
 /* line 834: */
 /* line 835: */
AMNACTR = (CJNACTR_givecvariabletype(Underefedmode, A68_TRUE)<VFAACTR_refmark);
if ( AMNACTR )
{ /* line 836: */
AMNACTR = (ZLNACTR_mode>=UFAACTR_firstnonfixedmode);
}
if ( AMNACTR )
{ /* line 837: */
BMNACTR = URMACTR_flags(ZLNACTR_mode) ;
AMNACTR = !A_LB_GE(BMNACTR,JMMACTR_typedefoutput);
}
 /* line 838: */
CMNACTR = AMNACTR;
if ( CMNACTR )
{ 
ROAAOSF_whole( ZLNACTR_mode, 0, &FMNACTR );
TLMACTR_debugmessage(5, A_VC_PLUS(A_VC_PLUS(EMNACTR,FMNACTR),A_HVEC(GMNACTR,')',A68_CHAR )));
 /* line 840: */
HMNACTR_entry = (&A_R1INDEX(FMMACTR_modes,ZLNACTR_mode));
 /* line 842: */
KMNACTR_typedef = JMNACTR;
 /* line 843: */
 /* line 844: */
if ( AQIACTR_verboseoption )
{ 
 /* line 845: */
 /* line 846: */
FBNACTR_modename( ZLNACTR_mode, &PMNACTR );
NMNACTR = A_VC_PLUS(A_VC_PLUS(OMNACTR,PMNACTR),QMNACTR);
} 
else
{ 
NMNACTR = SMNACTR;
} 
TMNACTR_comment = NMNACTR;
 /* line 847: */
KJNACTR_cvartype( ZLNACTR_mode, &UMNACTR );
VMNACTR_typedefname = UMNACTR;
 /* line 849: */
A_CLOSURE( XMNACTR_emittagtypedef, YMNACTR_emittagtypedef, ZMNACTR_emittagtypedef );
(( ZMNACTR_emittagtypedef * ) ( XMNACTR_emittagtypedef.nonlocals )) -> KMNACTR_typedef = KMNACTR_typedef;
(( ZMNACTR_emittagtypedef * ) ( XMNACTR_emittagtypedef.nonlocals )) -> TMNACTR_comment = TMNACTR_comment;
(( ZMNACTR_emittagtypedef * ) ( XMNACTR_emittagtypedef.nonlocals )) -> Stream = Stream;
 /* line 857: */
A_CLOSURE( RNNACTR_emitdeflextypedef, SNNACTR_emitdeflextypedef, TNNACTR_emitdeflextypedef );
(( TNNACTR_emitdeflextypedef * ) ( RNNACTR_emitdeflextypedef.nonlocals )) -> Stream = Stream;
(( TNNACTR_emitdeflextypedef * ) ( RNNACTR_emitdeflextypedef.nonlocals )) -> TMNACTR_comment = TMNACTR_comment;
 /* line 872: */
 /* line 873: */
A_CLOSURE( YONACTR_emitincompletetype, ZONACTR_emitincompletetype, APNACTR_emitincompletetype );
(( APNACTR_emitincompletetype * ) ( YONACTR_emitincompletetype.nonlocals )) -> HMNACTR_entry = HMNACTR_entry;
(( APNACTR_emitincompletetype * ) ( YONACTR_emitincompletetype.nonlocals )) -> ZLNACTR_mode = ZLNACTR_mode;
(( APNACTR_emitincompletetype * ) ( YONACTR_emitincompletetype.nonlocals )) -> Stream = Stream;
 /* line 879: */
 /* line 880: */
 /* line 882: */
A_CLOSURE( KPNACTR_emitproctypedef, LPNACTR_emitproctypedef, MPNACTR_emitproctypedef );
(( MPNACTR_emitproctypedef * ) ( KPNACTR_emitproctypedef.nonlocals )) -> Pre_declare = Pre_declare;
(( MPNACTR_emitproctypedef * ) ( KPNACTR_emitproctypedef.nonlocals )) -> YONACTR_emitincompletetype = YONACTR_emitincompletetype;
(( MPNACTR_emitproctypedef * ) ( KPNACTR_emitproctypedef.nonlocals )) -> HMNACTR_entry = HMNACTR_entry;
(( MPNACTR_emitproctypedef * ) ( KPNACTR_emitproctypedef.nonlocals )) -> ZLNACTR_mode = ZLNACTR_mode;
(( MPNACTR_emitproctypedef * ) ( KPNACTR_emitproctypedef.nonlocals )) -> Stream = Stream;
(( MPNACTR_emitproctypedef * ) ( KPNACTR_emitproctypedef.nonlocals )) -> XMNACTR_emittagtypedef = XMNACTR_emittagtypedef;
 /* line 948: */
 /* line 949: */
 /* line 950: */
A_CLOSURE( RTNACTR_emitvectortypedef, STNACTR_emitvectortypedef, TTNACTR_emitvectortypedef );
(( TTNACTR_emitvectortypedef * ) ( RTNACTR_emitvectortypedef.nonlocals )) -> Pre_declare = Pre_declare;
(( TTNACTR_emitvectortypedef * ) ( RTNACTR_emitvectortypedef.nonlocals )) -> YONACTR_emitincompletetype = YONACTR_emitincompletetype;
(( TTNACTR_emitvectortypedef * ) ( RTNACTR_emitvectortypedef.nonlocals )) -> ZLNACTR_mode = ZLNACTR_mode;
(( TTNACTR_emitvectortypedef * ) ( RTNACTR_emitvectortypedef.nonlocals )) -> Stream = Stream;
(( TTNACTR_emitvectortypedef * ) ( RTNACTR_emitvectortypedef.nonlocals )) -> XMNACTR_emittagtypedef = XMNACTR_emittagtypedef;
(( TTNACTR_emitvectortypedef * ) ( RTNACTR_emitvectortypedef.nonlocals )) -> HMNACTR_entry = HMNACTR_entry;
(( TTNACTR_emitvectortypedef * ) ( RTNACTR_emitvectortypedef.nonlocals )) -> RNNACTR_emitdeflextypedef = RNNACTR_emitdeflextypedef;
 /* line 973: */
 /* line 974: */
 /* line 975: */
A_CLOSURE( PUNACTR_emitarraytypedef, QUNACTR_emitarraytypedef, RUNACTR_emitarraytypedef );
(( RUNACTR_emitarraytypedef * ) ( PUNACTR_emitarraytypedef.nonlocals )) -> Pre_declare = Pre_declare;
(( RUNACTR_emitarraytypedef * ) ( PUNACTR_emitarraytypedef.nonlocals )) -> YONACTR_emitincompletetype = YONACTR_emitincompletetype;
(( RUNACTR_emitarraytypedef * ) ( PUNACTR_emitarraytypedef.nonlocals )) -> ZLNACTR_mode = ZLNACTR_mode;
(( RUNACTR_emitarraytypedef * ) ( PUNACTR_emitarraytypedef.nonlocals )) -> Stream = Stream;
(( RUNACTR_emitarraytypedef * ) ( PUNACTR_emitarraytypedef.nonlocals )) -> XMNACTR_emittagtypedef = XMNACTR_emittagtypedef;
(( RUNACTR_emitarraytypedef * ) ( PUNACTR_emitarraytypedef.nonlocals )) -> HMNACTR_entry = HMNACTR_entry;
(( RUNACTR_emitarraytypedef * ) ( PUNACTR_emitarraytypedef.nonlocals )) -> RNNACTR_emitdeflextypedef = RNNACTR_emitdeflextypedef;
 /* line 998: */
 /* line 1000: */
switch ( RMMACTR_modetype(ZLNACTR_mode) )
{ 
case 1: 
 /* line 1002: */
QVNACTR.data[0] = A_UNITE(RVNACTR,mode2,2,KMNACTR_typedef);
GJNACTR_ctype( QRMACTR_auxmode(ZLNACTR_mode), &SVNACTR );
QVNACTR.data[1] = A_UNITE(TVNACTR,mode2,2,SVNACTR);
VVNACTR = ' ' ;
QVNACTR.data[2] = A_UNITE(UVNACTR,mode1,1,VVNACTR);
 /* line 1003: */
QVNACTR.data[3] = A_UNITE(WVNACTR,mode2,2,VMNACTR_typedefname);
 /* line 1004: */
AWNACTR = A_VC_PLUS(YVNACTR,TMNACTR_comment) ;
QVNACTR.data[4] = A_UNITE(ZVNACTR,mode2,2,AWNACTR);
QVNACTR.data[5] = A_UNITE(BWNACTR,mode4,4,EIAACTR_cnewline);
 /* line 1005: */
 /* line 1006: */
 /* line 1008: */
VBMACTR_writecstream(A_HISVEC(CWNACTR,QVNACTR,6,A68_136 ), Stream);
break;
case 2: 
 /* line 1010: */
A_CALLPROC(KPNACTR_emitproctypedef,(),((KPNACTR_emitproctypedef).nonlocals));
break;
case 3: 
 /* line 1012: */
A_CALLPROC(KPNACTR_emitproctypedef,(),((KPNACTR_emitproctypedef).nonlocals));
break;
case 4: 
 /* line 1013: */
 /* line 1015: */
if ( Pre_declare )
{ 
A_CALLPROC(YONACTR_emitincompletetype,(),((YONACTR_emitincompletetype).nonlocals));
} 
else
{ 
{ 
DWNACTR_deflexmode = QANACTR_finddeflexmode(ZLNACTR_mode);
 /* line 1016: */
 /* line 1017: */
 /* line 1018: */
EWNACTR = (DWNACTR_deflexmode==ZLNACTR_mode);
if ( EWNACTR )
{ 
USMACTR_modelistextra( ZLNACTR_mode, &FWNACTR );
GWNACTR_umodes = FWNACTR;
 /* line 1020: */
 /* line 1021: */
IWNACTR = GWNACTR_umodes.upb -1;
HWNACTR_umode = GWNACTR_umodes.data;
for (;IWNACTR-- >= 0;
(HWNACTR_umode++
) )
{
 /* line 1022: */
YLNACTR_writectypedef((*HWNACTR_umode), Stream, A68_FALSE);
}
 /* line 1024: */
 /* line 1025: */
 /* line 1027: */
JWNACTR = URMACTR_flags(ZLNACTR_mode) ;
if ( !A_LB_GE(JWNACTR,JMMACTR_typedefoutput) )
{ 
OWNACTR = MWNACTR ;
KWNACTR.data[0] = A_UNITE(NWNACTR,mode2,2,OWNACTR);
 /* line 1028: */
ZJNACTR_ctag( ZLNACTR_mode, &PWNACTR );
KWNACTR.data[1] = A_UNITE(QWNACTR,mode2,2,PWNACTR);
 /* line 1030: */
UWNACTR = SWNACTR ;
KWNACTR.data[2] = A_UNITE(TWNACTR,mode2,2,UWNACTR);
KWNACTR.data[3] = A_UNITE(VWNACTR,mode4,4,EIAACTR_cnewline);
 /* line 1031: */
VBMACTR_writecstream(A_HISVEC(WWNACTR,KWNACTR,4,A68_136 ), Stream);
 /* line 1032: */
 /* line 1033: */
YWNACTR = GWNACTR_umodes.upb;
for ( XWNACTR_i = 1;
XWNACTR_i <= YWNACTR;
XWNACTR_i += 1 )
{ 
 /* line 1034: */
{ 
ZWNACTR_thismode = (*(&A_VINDEX(GWNACTR_umodes,XWNACTR_i)));
 /* line 1035: */
 /* line 1036: */
 /* line 1038: */
AXNACTR = (ZWNACTR_thismode!=UEAACTR_voidmode);
if ( AXNACTR )
{ 
FKNACTR_ctaggedtype( ZWNACTR_thismode, &CXNACTR );
BXNACTR.data[0] = A_UNITE(DXNACTR,mode2,2,CXNACTR);
 /* line 1039: */
HXNACTR = FXNACTR ;
BXNACTR.data[1] = A_UNITE(GXNACTR,mode2,2,HXNACTR);
ROAAOSF_whole( XWNACTR_i, 0, &IXNACTR );
BXNACTR.data[2] = A_UNITE(JXNACTR,mode2,2,IXNACTR);
 /* line 1041: */
LXNACTR = ';' ;
BXNACTR.data[3] = A_UNITE(KXNACTR,mode1,1,LXNACTR);
BXNACTR.data[4] = A_UNITE(MXNACTR,mode4,4,EIAACTR_cnewline);
 /* line 1042: */
 /* line 1043: */
VBMACTR_writecstream(A_HISVEC(NXNACTR,BXNACTR,5,A68_136 ), Stream);
} 
} 
}
 /* line 1045: */
 /* line 1044: */
SXNACTR = QXNACTR ;
OXNACTR.data[0] = A_UNITE(RXNACTR,mode2,2,SXNACTR);
OXNACTR.data[1] = A_UNITE(TXNACTR,mode4,4,EIAACTR_cnewline);
VBMACTR_writecstream(A_HISVEC(UXNACTR,OXNACTR,2,A68_136 ), Stream);
 /* line 1046: */
 /* line 1047: */
 /* line 1048: */
A_CALLPROC(XMNACTR_emittagtypedef,(ZLNACTR_mode),(ZLNACTR_mode,(XMNACTR_emittagtypedef).nonlocals));
} 
} 
else
{ 
 /* line 1049: */
 /* line 1051: */
A_CALLPROC(RNNACTR_emitdeflextypedef,(ZLNACTR_mode, DWNACTR_deflexmode),(ZLNACTR_mode, DWNACTR_deflexmode,(RNNACTR_emitdeflextypedef).nonlocals));
} 
} 
} 
break;
case 5: 
 /* line 1052: */
 /* line 1054: */
if ( Pre_declare )
{ 
A_CALLPROC(YONACTR_emitincompletetype,(),((YONACTR_emitincompletetype).nonlocals));
} 
else
{ 
{ 
VXNACTR_deflexmode = QANACTR_finddeflexmode(ZLNACTR_mode);
 /* line 1055: */
 /* line 1056: */
 /* line 1057: */
WXNACTR = (VXNACTR_deflexmode==ZLNACTR_mode);
if ( WXNACTR )
{ 
NTMACTR_structfields( ZLNACTR_mode, &XXNACTR );
YXNACTR_fields = XXNACTR;
 /* line 1059: */
 /* line 1060: */
AYNACTR = YXNACTR_fields.upb -1;
ZXNACTR_field = YXNACTR_fields.data;
for (;AYNACTR-- >= 0;
(ZXNACTR_field++
) )
{
 /* line 1061: */
 /* line 1062: */
YLNACTR_writectypedef((*(&(ZXNACTR_field->Mode))), Stream, A68_FALSE);
}
 /* line 1064: */
 /* line 1065: */
 /* line 1067: */
BYNACTR = URMACTR_flags(ZLNACTR_mode) ;
if ( !A_LB_GE(BYNACTR,JMMACTR_typedefoutput) )
{ 
ZJNACTR_ctag( ZLNACTR_mode, &FYNACTR );
IYNACTR = A_VC_PLUS(A_VC_PLUS(EYNACTR,FYNACTR),A_HVEC(GYNACTR,'{',A68_CHAR )) ;
CYNACTR.data[0] = A_UNITE(HYNACTR,mode2,2,IYNACTR);
CYNACTR.data[1] = A_UNITE(JYNACTR,mode4,4,EIAACTR_cnewline);
VBMACTR_writecstream(A_HISVEC(KYNACTR,CYNACTR,2,A68_136 ), Stream);
 /* line 1068: */
 /* line 1069: */
MYNACTR = YXNACTR_fields.upb -1;
LYNACTR_field = YXNACTR_fields.data;
for (;MYNACTR-- >= 0;
(LYNACTR_field++
) )
{
 /* line 1071: */
FKNACTR_ctaggedtype( (*(&(LYNACTR_field->Mode))), &OYNACTR );
NYNACTR.data[0] = A_UNITE(PYNACTR,mode2,2,OYNACTR);
 /* line 1072: */
RYNACTR = ' ' ;
NYNACTR.data[1] = A_UNITE(QYNACTR,mode1,1,RYNACTR);
AENACTR_cfieldname( LYNACTR_field, &SYNACTR );
NYNACTR.data[2] = A_UNITE(TYNACTR,mode2,2,SYNACTR);
 /* line 1073: */
VYNACTR = ';' ;
NYNACTR.data[3] = A_UNITE(UYNACTR,mode1,1,VYNACTR);
NYNACTR.data[4] = A_UNITE(WYNACTR,mode4,4,EIAACTR_cnewline);
 /* line 1074: */
VBMACTR_writecstream(A_HISVEC(XYNACTR,NYNACTR,5,A68_136 ), Stream);
 /* line 1075: */
 /* line 1076: */
LKNACTR_alignnextstructfield((*(&(LYNACTR_field->Mode))), Stream);
}
 /* line 1077: */
CZNACTR = AZNACTR ;
YYNACTR.data[0] = A_UNITE(BZNACTR,mode2,2,CZNACTR);
YYNACTR.data[1] = A_UNITE(DZNACTR,mode4,4,EIAACTR_cnewline);
VBMACTR_writecstream(A_HISVEC(EZNACTR,YYNACTR,2,A68_136 ), Stream);
 /* line 1078: */
 /* line 1079: */
 /* line 1080: */
A_CALLPROC(XMNACTR_emittagtypedef,(ZLNACTR_mode),(ZLNACTR_mode,(XMNACTR_emittagtypedef).nonlocals));
} 
} 
else
{ 
 /* line 1081: */
 /* line 1083: */
A_CALLPROC(RNNACTR_emitdeflextypedef,(ZLNACTR_mode, VXNACTR_deflexmode),(ZLNACTR_mode, VXNACTR_deflexmode,(RNNACTR_emitdeflextypedef).nonlocals));
} 
} 
} 
break;
case 6: 
 /* line 1084: */
 /* line 1086: */
if ( Pre_declare )
{ 
 /* line 1087: */
A_CALLPROC(YONACTR_emitincompletetype,(),((YONACTR_emitincompletetype).nonlocals));
} 
else
{ 
FZNACTR_elemmode = A_CALLPROC(DUMACTR_elementmode,(ZLNACTR_mode),(ZLNACTR_mode,(DUMACTR_elementmode).nonlocals));
 /* line 1088: */
YLNACTR_writectypedef(FZNACTR_elemmode, Stream, A68_FALSE);
 /* line 1090: */
 /* line 1091: */
 /* line 1093: */
GZNACTR = URMACTR_flags(ZLNACTR_mode) ;
if ( !A_LB_GE(GZNACTR,JMMACTR_typedefoutput) )
{ 
 /* line 1094: */
FKNACTR_ctaggedtype( FZNACTR_elemmode, &KZNACTR );
MZNACTR = A_VC_PLUS(JZNACTR,KZNACTR) ;
HZNACTR.data[0] = A_UNITE(LZNACTR,mode2,2,MZNACTR);
 /* line 1095: */
OZNACTR = ',' ;
HZNACTR.data[1] = A_UNITE(NZNACTR,mode1,1,OZNACTR);
 /* line 1096: */
 /* line 1097: */
if ( (ETMACTR_intextra(ZLNACTR_mode)==0) )
{ 
QZNACTR = '1' ;
HZNACTR.data[2] = A_UNITE(PZNACTR,mode1,1,QZNACTR);
} 
else
{ 
 /* line 1098: */
ROAAOSF_whole( ETMACTR_intextra(ZLNACTR_mode), 0, &RZNACTR );
HZNACTR.data[2] = A_UNITE(SZNACTR,mode2,2,RZNACTR);
} 
 /* line 1099: */
UZNACTR = ',' ;
HZNACTR.data[3] = A_UNITE(TZNACTR,mode1,1,UZNACTR);
ZJNACTR_ctag( ZLNACTR_mode, &VZNACTR );
HZNACTR.data[4] = A_UNITE(WZNACTR,mode2,2,VZNACTR);
 /* line 1101: */
AAOACTR = YZNACTR ;
HZNACTR.data[5] = A_UNITE(ZZNACTR,mode2,2,AAOACTR);
HZNACTR.data[6] = A_UNITE(BAOACTR,mode4,4,EIAACTR_cnewline);
 /* line 1102: */
VBMACTR_writecstream(A_HISVEC(CAOACTR,HZNACTR,7,A68_136 ), Stream);
 /* line 1103: */
 /* line 1104: */
 /* line 1105: */
 /* line 1107: */
A_CALLPROC(XMNACTR_emittagtypedef,(ZLNACTR_mode),(ZLNACTR_mode,(XMNACTR_emittagtypedef).nonlocals));
} 
} 
break;
case 7: 
 /* line 1109: */
A_CALLPROC(PUNACTR_emitarraytypedef,(),((PUNACTR_emitarraytypedef).nonlocals));
break;
case 8: 
 /* line 1111: */
A_CALLPROC(RTNACTR_emitvectortypedef,(),((RTNACTR_emitvectortypedef).nonlocals));
break;
case 9: 
 /* line 1113: */
A_CALLPROC(PUNACTR_emitarraytypedef,(),((PUNACTR_emitarraytypedef).nonlocals));
break;
case 10: 
 /* line 1115: */
A_CALLPROC(RTNACTR_emitvectortypedef,(),((RTNACTR_emitvectortypedef).nonlocals));
break;
case 11: 
 /* line 1116: */
 /* line 1118: */
if ( Pre_declare )
{ 
 /* line 1119: */
A_CALLPROC(YONACTR_emitincompletetype,(),((YONACTR_emitincompletetype).nonlocals));
} 
else
{ 
DAOACTR_elemmode = A_CALLPROC(DUMACTR_elementmode,(ZLNACTR_mode),(ZLNACTR_mode,(DUMACTR_elementmode).nonlocals));
 /* line 1121: */
 /* line 1122: */
 /* line 1124: */
 /* line 1125: */
if ( NQIACTR_nostructresultoption )
{ 
HAOACTR = IAOACTR;
} 
else
{ 
 /* line 1126: */
FKNACTR_ctaggedtype( DAOACTR_elemmode, &JAOACTR );
HAOACTR = JAOACTR;
} 
MAOACTR = A_VC_PLUS(KAOACTR,HAOACTR) ;
EAOACTR.data[0] = A_UNITE(LAOACTR,mode2,2,MAOACTR);
 /* line 1127: */
OAOACTR = ',' ;
EAOACTR.data[1] = A_UNITE(NAOACTR,mode1,1,OAOACTR);
ZJNACTR_ctag( ZLNACTR_mode, &PAOACTR );
EAOACTR.data[2] = A_UNITE(QAOACTR,mode2,2,PAOACTR);
 /* line 1129: */
UAOACTR = SAOACTR ;
EAOACTR.data[3] = A_UNITE(TAOACTR,mode2,2,UAOACTR);
EAOACTR.data[4] = A_UNITE(VAOACTR,mode4,4,EIAACTR_cnewline);
 /* line 1130: */
VBMACTR_writecstream(A_HISVEC(WAOACTR,EAOACTR,5,A68_136 ), Stream);
 /* line 1131: */
A_CALLPROC(XMNACTR_emittagtypedef,(ZLNACTR_mode),(ZLNACTR_mode,(XMNACTR_emittagtypedef).nonlocals));
 /* line 1132: */
XAOACTR = (&(HMNACTR_entry->Flags)) ;
(*XAOACTR) = (A68_BITS )((*(&(HMNACTR_entry->Flags)))|JMMACTR_typedefoutput);
 /* line 1134: */
 /* line 1135: */
 /* line 1136: */
 /* line 1137: */
YLNACTR_writectypedef(DAOACTR_elemmode, Stream, A68_FALSE);
} 
break;
default: 
/*SKIP*/;
break;
} 
 /* line 1139: */
 /* line 1140: */
 /* line 1141: */
if ( !Pre_declare )
{ 
 /* line 1142: */
 /* line 1143: */
YAOACTR = (&(HMNACTR_entry->Flags)) ;
(*YAOACTR) = (A68_BITS )((*(&(HMNACTR_entry->Flags)))|JMMACTR_typedefoutput);
} 
} 
} 
A_PROC_EXIT(writectypedef);
return;
} 
#undef NL

A68_VOID  BBOACTR_initialisemodetable(A68_206  Mdes, A68_INT  Nomodes)
{ 
A68_VC  FBOACTR;  /* avoid structure result */
A68_INT  HBOACTR_unset;
A68_94  IBOACTR_initialisemodes;   /* proc value of non-global proc */
A68_93  UFOACTR_finalisemode;   /* proc value of non-global proc */
A68_212  IHOACTR_generator;   /* proc value of non-global proc */
A68_154  NHOACTR;  /* avoid structure result */
A68_INT  OHOACTR_i;
A68_INT  PHOACTR;  /* to part of loop */
A68_INT  QHOACTR_i;
A68_INT  RHOACTR;  /* to part of loop */
A68_INT * SHOACTR;  /* YIELD */
A68_BITS * THOACTR;  /* YIELD */
A68_INT  UHOACTR_i;
A68_INT  VHOACTR;  /* to part of loop */
A68_INT * WHOACTR;  /* YIELD */
A68_INT  XHOACTR_i;
A68_INT  YHOACTR;  /* to part of loop */
A68_VC  AIOACTR;  /* avoid structure result */
A68_VC  CIOACTR;  /* avoid structure result */
A68_INT  FIOACTR_i;
A68_INT  GIOACTR;  /* to part of loop */
A68_INT  HIOACTR_deflex;
A68_VC  LIOACTR;  /* avoid structure result */
A68_VC  NIOACTR;  /* avoid structure result */
A68_VC  PIOACTR;  /* avoid structure result */
A68_VC  RIOACTR;  /* avoid structure result */
A_PROC_ENTRY(initialisemodetable);
 /* line 1154: */
 /* line 1155: */
{ 
ROAAOSF_whole( Mdes.dim[0].upb, 0, &FBOACTR );
TLMACTR_debugmessage(1, A_VC_PLUS(A_VC_PLUS(EBOACTR,FBOACTR),GBOACTR));
 /* line 1157: */
HBOACTR_unset = (-1);
 /* line 1159: */
 /* line 1160: */
 /* line 1164: */
A_CLOSURE( IBOACTR_initialisemodes, JBOACTR_initialisemodes, KBOACTR_initialisemodes );
(( KBOACTR_initialisemodes * ) ( IBOACTR_initialisemodes.nonlocals )) -> HBOACTR_unset = HBOACTR_unset;
(( KBOACTR_initialisemodes * ) ( IBOACTR_initialisemodes.nonlocals )) -> Mdes = Mdes;
 /* line 1312: */
A_CLOSURE( UFOACTR_finalisemode, VFOACTR_finalisemode, WFOACTR_finalisemode );
(( WFOACTR_finalisemode * ) ( UFOACTR_finalisemode.nonlocals )) -> UFOACTR_finalisemode = UFOACTR_finalisemode;
 /* line 1401: */
A_CLOSURE( IHOACTR_generator, JHOACTR_generator, KHOACTR_generator );
(( KHOACTR_generator * ) ( IHOACTR_generator.nonlocals )) -> Nomodes = Nomodes;
A_CALLPROC(IHOACTR_generator,(A68_FALSE, &NHOACTR),(A68_FALSE, &NHOACTR,(IHOACTR_generator).nonlocals));
FMMACTR_modes = NHOACTR;
 /* line 1402: */
A_CALLPROC(IBOACTR_initialisemodes,(),((IBOACTR_initialisemodes).nonlocals));
 /* line 1404: */
 /* line 1405: */
PHOACTR = Nomodes;
for ( OHOACTR_i = LFAACTR_shortcomplmode;
OHOACTR_i <= PHOACTR;
OHOACTR_i += 1 )
{ 
 /* line 1406: */
 /* line 1407: */
A_CALLPROC(UFOACTR_finalisemode,(OHOACTR_i),(OHOACTR_i,(UFOACTR_finalisemode).nonlocals));
}
 /* line 1414: */
 /* line 1415: */
RHOACTR = (UFAACTR_firstnonfixedmode-1);
for ( QHOACTR_i = PEAACTR_nomode;
QHOACTR_i <= RHOACTR;
QHOACTR_i += 1 )
{ 
SHOACTR = (&((&A_R1INDEX(FMMACTR_modes,QHOACTR_i))->Deflexedmode)) ;
(*SHOACTR) = QHOACTR_i;
 /* line 1416: */
 /* line 1417: */
THOACTR = (&((&A_R1INDEX(FMMACTR_modes,QHOACTR_i))->Flags)) ;
(*THOACTR) = (A68_BITS )((*(&((&A_R1INDEX(FMMACTR_modes,QHOACTR_i))->Flags)))|KMMACTR_deflexoutput);
}
 /* line 1418: */
 /* line 1419: */
VHOACTR = Nomodes;
for ( UHOACTR_i = UFAACTR_firstnonfixedmode;
UHOACTR_i <= VHOACTR;
UHOACTR_i += 1 )
{ 
WHOACTR = (&((&A_R1INDEX(FMMACTR_modes,UHOACTR_i))->Deflexedmode)) ;
(*WHOACTR) = PEAACTR_nomode;
}
 /* line 1421: */
 /* line 1422: */
 /* line 1423: */
if ( BMMACTR_debugging() )
{ 
 /* line 1424: */
YHOACTR = Nomodes;
for ( XHOACTR_i = UFAACTR_firstnonfixedmode;
XHOACTR_i <= YHOACTR;
XHOACTR_i += 1 )
{ 
 /* line 1425: */
 /* line 1426: */
ROAAOSF_whole( XHOACTR_i, 0, &AIOACTR );
FBNACTR_modename( XHOACTR_i, &CIOACTR );
TLMACTR_debugmessage(1, A_VC_PLUS(A_VC_PLUS(AIOACTR,BIOACTR),CIOACTR));
}
 /* line 1427: */
 /* line 1428: */
TLMACTR_debugmessage(5, EIOACTR);
} 
 /* line 1431: */
 /* line 1432: */
GIOACTR = Nomodes;
for ( FIOACTR_i = UFAACTR_firstnonfixedmode;
FIOACTR_i <= GIOACTR;
FIOACTR_i += 1 )
{ 
 /* line 1433: */
YLNACTR_writectypedef(FIOACTR_i, OQLACTR_modesstream, A68_FALSE);
 /* line 1434: */
 /* line 1435: */
 /* line 1436: */
if ( BMMACTR_debugging() )
{ 
HIOACTR_deflex = UXMACTR_deflexedmode(FIOACTR_i, A68_TRUE);
 /* line 1437: */
 /* line 1438: */
 /* line 1439: */
 /* line 1440: */
 /* line 1441: */
 /* line 1442: */
ROAAOSF_whole( FIOACTR_i, 0, &LIOACTR );
FBNACTR_modename( FIOACTR_i, &NIOACTR );
ROAAOSF_whole( HIOACTR_deflex, 0, &PIOACTR );
FBNACTR_modename( HIOACTR_deflex, &RIOACTR );
TLMACTR_debugmessage(5, A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(LIOACTR,MIOACTR),NIOACTR),OIOACTR),PIOACTR),QIOACTR),RIOACTR));
} 
}
 /* line 1443: */
} 
A_PROC_EXIT(initialisemodetable);
return;
} 
#undef NL

A68_VOID  UIOACTR_declarectemporary(A68_INT  Mode, A68_VC  Commenttext, A68_126  *ReturnedValue)
{ 
A68_INT  VIOACTR_locdecstream;
A68_INT  WIOACTR_cvt;
A68_126  XIOACTR_newtemp;
A68_72 * YIOACTR;  /* YIELD */
A68_INT * ZIOACTR;  /* YIELD */
A68_VC  AJOACTR;  /* avoid structure result */
A68_VC  BJOACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  CJOACTR;  /* OPERATORS - istruct -> vector */
A68_72  DJOACTR;  /* OPERATORS - istruct -> vector */
A68_VC  EJOACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_136  FJOACTR;  /* OPERATORS - mode -> union mode */
A68_VC  GJOACTR;  /* YIELD */
A68_135  HJOACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_BOOL  IJOACTR;  /* optbool result */
A68_136  NJOACTR;  /* OPERATORS - mode -> union mode */
A68_VC  OJOACTR;  /* YIELD */
A68_135  PJOACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_136  QJOACTR;  /* OPERATORS - mode -> union mode */
A68_135  RJOACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_126  SJOACTR;  /* clause result */
A_PROC_ENTRY(declarectemporary);
 /* line 1452: */
 /* line 1453: */
{ 
VIOACTR_locdecstream = ZQLACTR_locdecstream(EQLACTR_currentlevel());
 /* line 1454: */
WIOACTR_cvt = CJNACTR_givecvariabletype(Mode, A68_TRUE);
 /* line 1455: */
 /* line 1456: */
YIOACTR = (&((&XIOACTR_newtemp)->Name)) ;
(*YIOACTR) = ZGMACTR_newuniquename();
 /* line 1457: */
ZIOACTR = (&((&XIOACTR_newtemp)->Mode)) ;
(*ZIOACTR) = WIOACTR_cvt;
 /* line 1458: */
 /* line 1459: */
 /* line 1461: */
KJNACTR_cvartype( WIOACTR_cvt, &AJOACTR );
DJOACTR = (*(&((&XIOACTR_newtemp)->Name))) ;
GJOACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(AJOACTR,A_HVEC(BJOACTR,' ',A68_CHAR )),A_HISVEC(CJOACTR,DJOACTR,7,A68_CHAR )),A_HVEC(EJOACTR,';',A68_CHAR )) ;
VBMACTR_writecstream(A_HVEC(HJOACTR,A_UNITE(FJOACTR,mode2,2,GJOACTR),A68_136 ), VIOACTR_locdecstream);
 /* line 1462: */
IJOACTR = AQIACTR_verboseoption;
if ( IJOACTR )
{ /* line 1463: */
IJOACTR = (Commenttext.upb>0);
}
 /* line 1464: */
if ( IJOACTR )
{ 
 /* line 1466: */
 /* line 1467: */
OJOACTR = A_VC_PLUS(A_VC_PLUS(LJOACTR,Commenttext),MJOACTR) ;
VBMACTR_writecstream(A_HVEC(PJOACTR,A_UNITE(NJOACTR,mode2,2,OJOACTR),A68_136 ), VIOACTR_locdecstream);
} 
 /* line 1468: */
VBMACTR_writecstream(A_HVEC(RJOACTR,A_UNITE(QJOACTR,mode4,4,EIAACTR_cnewline),A68_136 ), VIOACTR_locdecstream);
 /* line 1469: */
 /* line 1470: */
SJOACTR = XIOACTR_newtemp;
} 
A_PROC_EXIT(declarectemporary);
*ReturnedValue = (SJOACTR);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 3: */
 /* line 4: */
 /* line 6: */
void MLMACTR(void)   /* initialise DECS modes */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/shields/projects/Algol68/Tools/Algol68toC/src/a68toc","-v","-uname","seedfile","-lib","/home/shields/projects/Algol68/Tools/Algol68toC/a68config","-dir","/home/shields/projects/Algol68/Tools/Algol68toC/a68config","-dir","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel","-dir",".","modes.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/shields/projects/Algol68/Tools/Algol68toC/a68config","A68_CDIR=","A68_DIR=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/shields/projects/Algol68/Tools/Algol68toC/a68config/a68config.m","./centities.m","./moduletracer.m","./coutput.m","./incvalue.m","./uniquenameserver.m","./incmode.m","./incinstallation.m","./environment.m","./environ.m","./common.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/usefulops.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_88  CUMACTR;  /* procedure value */
A68_88  EUMACTR;  /* procedure value */
A68_88  GUMACTR;  /* procedure value */
A68_159  IUMACTR;  /* procedure value */
A68_159  KUMACTR;  /* procedure value */
A68_213  UJOACTR;  /* procedure value */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
THAACTR();   /* USE centities */
BCHACTR();   /* USE moduletracer */
YRLACTR();   /* USE coutput */
PIJACTR();   /* USE incvalue */
AGMACTR();   /* USE uniquenameserver */
ZDAACTR();   /* USE incmode */
ODAACTR();   /* USE incinstallation */
HPIACTR();   /* USE environment */
KNLACTR();   /* USE environ */
IKAAOSF();   /* USE usefulops */
/* --- Initialise configuration information */
A_config.source_file = "/home/shields/projects/Algol68/Tools/Algol68toC/src/modes.a68";
A_config.translation_time = "Sun Sep 26 21:50:59 2004";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "LLMACTR (from seed file) ";
A_config.spec_change_time = "Sun Sep 26 21:50:59 2004";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS modes);
UEAALIB_a68config(LGAALIB_configinfo, QLMACTR);
 /* line 52: */
 /* line 55: */
 /* line 57: */
 /* line 76: */
 /* line 78: */
 /* line 80: */
 /* line 81: */
 /* line 82: */
 /* line 83: */
 /* line 84: */
 /* line 85: */
 /* line 86: */
 /* line 88: */
 /* line 94: */
 /* line 105: */
 /* line 106: */
 /* line 107: */
 /* line 108: */
 /* line 109: */
 /* line 111: */
 /* line 113: */
 /* line 115: */
 /* line 121: */
 /* line 122: */
 /* line 123: */
 /* line 125: */
 /* line 129: */
 /* line 131: */
 /* line 133: */
 /* line 136: */
 /* line 146: */
 /* line 156: */
 /* line 168: */
 /* line 178: */
 /* line 188: */
 /* line 198: */
 /* line 208: */
 /* line 218: */
 /* line 228: */
 /* line 238: */
 /* line 248: */
 /* line 258: */
 /* line 264: */
 /* line 280: */
 /* line 291: */
 /* line 295: */
 /* line 301: */
 /* line 310: */
 /* line 321: */
 /* line 336: */
 /* line 348: */
 /* line 359: */
 /* line 370: */
 /* line 384: */
 /* line 390: */
CUMACTR.fn.fn_global = QRMACTR_auxmode;
CUMACTR.nonlocals = A68_NIL;
BUMACTR_deproc = (CUMACTR);
 /* line 391: */
EUMACTR.fn.fn_global = QRMACTR_auxmode;
EUMACTR.nonlocals = A68_NIL;
DUMACTR_elementmode = (EUMACTR);
 /* line 392: */
GUMACTR.fn.fn_global = ETMACTR_intextra;
GUMACTR.nonlocals = A68_NIL;
FUMACTR_istructlength = (GUMACTR);
 /* line 394: */
IUMACTR.fn.fn_global = USMACTR_modelistextra;
IUMACTR.nonlocals = A68_NIL;
HUMACTR_constituents = (IUMACTR);
 /* line 395: */
KUMACTR.fn.fn_global = USMACTR_modelistextra;
KUMACTR.nonlocals = A68_NIL;
JUMACTR_parameters = (KUMACTR);
 /* line 397: */
 /* line 399: */
LUMACTR_rowlist = (A68_165 *)A68_NIL;
MUMACTR_vectorlist = (A68_165 *)A68_NIL;
 /* line 400: */
NUMACTR_structlist = (A68_165 *)A68_NIL;
OUMACTR_unionlist = (A68_165 *)A68_NIL;
 /* line 402: */
 /* line 419: */
 /* line 429: */
 /* line 431: */
 /* line 500: */
 /* line 514: */
 /* line 600: */
 /* line 603: */
 /* line 614: */
 /* line 680: */
 /* line 688: */
 /* line 696: */
 /* line 734: */
 /* line 750: */
 /* line 759: */
 /* line 762: */
 /* line 765: */
 /* line 768: */
 /* line 770: */
 /* line 773: */
 /* line 776: */
IKNACTR_padno = 0;
 /* line 778: */
 /* line 799: */
 /* line 1145: */
 /* line 1445: */
 /* line 1472: */
UJOACTR.fn.fn_global = UIOACTR_declarectemporary;
UJOACTR.nonlocals = A68_NIL;
TJOACTR_new = (UJOACTR);
 /* line 1474: */
 /* line 1476: */
 /* line 1492: */
/*SKIP*/;
A_PROC_EXIT(DECS modes);
} 
#undef NL
/* end of translation of modes.a68 */
