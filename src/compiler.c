/* UNAME:VWABCTR */
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

A_PROCEDURE(A68_VOID ,A68t60,(struct A68t59 ,struct A68t55 **,A68_BOOL *),(struct A68t59 ,struct A68t55 **,A68_BOOL *,void *));
typedef struct A68t60  A68_60 ;    /* PROC(MODE59,REF REF MODE55,REF BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t61,(struct A68t59 ,struct A68t55 *,struct A68t55 *,A68_BOOL ,A68_BOOL ),(struct A68t59 ,struct A68t55 *,struct A68t55 *,A68_BOOL ,A68_BOOL ,void *));
typedef struct A68t61  A68_61 ;    /* PROC(MODE59,REF MODE55,REF MODE55,BOOL,BOOL) VOID */
struct A68t63 ;

A_PROCEDURE(A68_VOID ,A68t62,(A68_BOOL ,A68_BOOL ,struct A68t63 ),(A68_BOOL ,A68_BOOL ,struct A68t63 ,void *));
typedef struct A68t62  A68_62 ;    /* PROC(BOOL,BOOL,MODE63) VOID */
struct A68t63{
struct A68t64 * Value;
struct A68t55 * End;
A68_INT  Type;
A_PAD_INT(PAD_8)
};
typedef struct A68t63  A68_63 ;    /* STRUCT(REF MODE64,REF MODE55,INT)  */
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
struct A68t56  Name;
A_PAD_ISTRUCT(A68_56 ,PAD_11)
A68_INT  Mode;
A_PAD_INT(PAD_12)
};
typedef struct A68t68  A68_68 ;    /* STRUCT(MODE56,INT)  */
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
struct A68t57  mode7;
struct A68t69  mode8;
struct A68t70  mode9;
} data; };
typedef struct A68t65  A68_65 ;    /* UNION(LONG BITS,MODE66,VOID,MODE67,MODE68,MODE26,MODE57,MODE69,MODE70)  */
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

A_PROCEDURE(A68_VOID ,A68t73,(A68_BOOL ,A68_BOOL ,A68_BOOL ,struct A68t55 *),(A68_BOOL ,A68_BOOL ,A68_BOOL ,struct A68t55 *,void *));
typedef struct A68t73  A68_73 ;    /* PROC(BOOL,BOOL,BOOL,REF MODE55) VOID */

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

A_PROCEDURE(A68_VOID ,A68t83,(struct A68t59 ,struct A68t63 ,struct A68t55 *,A68_BOOL ,A68_BOOL ,A68_BOOL ),(struct A68t59 ,struct A68t63 ,struct A68t55 *,A68_BOOL ,A68_BOOL ,A68_BOOL ,void *));
typedef struct A68t83  A68_83 ;    /* PROC(MODE59,MODE63,REF MODE55,BOOL,BOOL,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t84,(struct A68t71 **,struct A68t63 ),(struct A68t71 **,struct A68t63 ,void *));
typedef struct A68t84  A68_84 ;    /* PROC(REF REF MODE71,MODE63) VOID */

A_PROCEDURE(A68_VOID ,A68t85,(struct A68t71 **),(struct A68t71 **,void *));
typedef struct A68t85  A68_85 ;    /* PROC(REF REF MODE71) VOID */

A_PROCEDURE(A68_VOID ,A68t86,(A68_VC ,A68_INT ,struct A68t71 *,struct A68t68 *),(A68_VC ,A68_INT ,struct A68t71 *,struct A68t68 *,void *));
typedef struct A68t86  A68_86 ;    /* PROC(MODE26,INT,REF MODE71) MODE68 */
struct A68t87{
A68_INT  Rdenno;
A_PAD_INT(PAD_21)
A68_INT  Mode;
A_PAD_INT(PAD_22)
A68_INT  Nods;
A_PAD_INT(PAD_23)
A68_INT  Deflex;
A_PAD_INT(PAD_24)
};
typedef struct A68t87  A68_87 ;    /* STRUCT(INT,INT,INT,INT)  */
A_ISTRUCT(A68_CHAR ,32,A68t89);
typedef struct A68t89  A68_89 ;    /* STRUCT 32 CHAR */
struct A68t88{
struct A68t89  N;
A_PAD_ISTRUCT(A68_89 ,PAD_25)
struct A68t89  F;
A_PAD_ISTRUCT(A68_89 ,PAD_26)
A68_INT  Level;
A_PAD_INT(PAD_27)
};
typedef struct A68t88  A68_88 ;    /* STRUCT(MODE89,MODE89,INT)  */
struct A68t90{
struct A68t89  Name;
A_PAD_ISTRUCT(A68_89 ,PAD_28)
A68_INT  Decno;
A_PAD_INT(PAD_29)
A68_INT  Level;
A_PAD_INT(PAD_30)
A68_INT  Mode;
A_PAD_INT(PAD_31)
A68_INT  Scope;
A_PAD_INT(PAD_32)
struct A68t90 * Rest;
};
typedef struct A68t90  A68_90 ;    /* STRUCT(MODE89,INT,INT,INT,INT,REF MODE90)  */
struct A68t91{
A68_INT  Rdenno;
A_PAD_INT(PAD_33)
A68_INT  Imode;
A_PAD_INT(PAD_34)
A68_INT  Length;
A_PAD_INT(PAD_35)
A68_INT  Deflex;
A_PAD_INT(PAD_36)
};
typedef struct A68t91  A68_91 ;    /* STRUCT(INT,INT,INT,INT)  */
struct A68t100{
A68_INT  Mode;
A_PAD_INT(PAD_37)
};
typedef struct A68t100  A68_100 ;    /* STRUCT(INT)  */
struct A68t92 { A68_INT mode; union {
A68_INT  mode1;
struct A68t93 * mode2;
struct A68t94 * mode3;
struct A68t95 * mode4;
struct A68t91 * mode5;
struct A68t96 * mode6;
struct A68t97 * mode7;
struct A68t87 * mode8;
struct A68t98 * mode9;
struct A68t99 * mode10;
struct A68t100  mode11;
} data; };
typedef struct A68t92  A68_92 ;    /* UNION(INT,REF MODE93,REF MODE94,REF MODE95,REF MODE91,REF MODE96,REF MODE97,REF MODE87,REF MODE98,REF MODE99,MODE100)  */
struct A68t93{
A68_INT  Rdenno;
A_PAD_INT(PAD_38)
struct A68t104 * Modelist;
};
typedef struct A68t93  A68_93 ;    /* STRUCT(INT,REF MODE104)  */
struct A68t94{
A68_INT  Deproc;
A_PAD_INT(PAD_39)
struct A68t104 * Pars;
};
typedef struct A68t94  A68_94 ;    /* STRUCT(INT,REF MODE104)  */
struct A68t95{
A68_INT  Rdenno;
A_PAD_INT(PAD_40)
A68_INT  Deflex;
A_PAD_INT(PAD_41)
struct A68t103 * Sels;
};
typedef struct A68t95  A68_95 ;    /* STRUCT(INT,INT,REF MODE103)  */
struct A68t96{
A68_INT  Deproc;
A_PAD_INT(PAD_42)
};
typedef struct A68t96  A68_96 ;    /* STRUCT(INT)  */
struct A68t97{
A68_INT  Rdenno;
A_PAD_INT(PAD_43)
A68_INT  Vecmode;
A_PAD_INT(PAD_44)
A68_INT  Deflex;
A_PAD_INT(PAD_45)
};
typedef struct A68t97  A68_97 ;    /* STRUCT(INT,INT,INT)  */
struct A68t98{
A68_INT  Mode;
A_PAD_INT(PAD_46)
struct A68t102 * Stenlist;
};
typedef struct A68t98  A68_98 ;    /* STRUCT(INT,REF MODE102)  */
struct A68t99{
A68_INT  Mode;
A_PAD_INT(PAD_47)
A68_INT  Modeproc;
A_PAD_INT(PAD_48)
struct A68t101 * El;
};
typedef struct A68t99  A68_99 ;    /* STRUCT(INT,INT,REF MODE101)  */
struct A68t101{
struct A68t99 * Am;
struct A68t101 * Rest;
};
typedef struct A68t101  A68_101 ;    /* STRUCT(REF MODE99,REF MODE101)  */
struct A68t102{
A68_INT  Mode;
A_PAD_INT(PAD_49)
A68_INT  Rdenno;
A_PAD_INT(PAD_50)
struct A68t102 * Rest;
};
typedef struct A68t102  A68_102 ;    /* STRUCT(INT,INT,REF MODE102)  */
struct A68t103{
A68_INT  Mode;
A_PAD_INT(PAD_51)
A68_INT  Fieldno;
A_PAD_INT(PAD_52)
struct A68t89  Name;
A_PAD_ISTRUCT(A68_89 ,PAD_53)
struct A68t103 * Rest;
};
typedef struct A68t103  A68_103 ;    /* STRUCT(INT,INT,MODE89,REF MODE103)  */
struct A68t104{
A68_INT  Mode;
A_PAD_INT(PAD_54)
struct A68t104 * Rest;
};
typedef struct A68t104  A68_104 ;    /* STRUCT(INT,REF MODE104)  */
A_VECTOR(struct A68t108 ,A68t107);
typedef struct A68t107  A68_107 ;    /* VECTOR [] MODE108 */
A_VECTOR(struct A68t88 ,A68t114);
typedef struct A68t114  A68_114 ;    /* VECTOR [] MODE88 */
struct A68t113 { A68_INT mode; union {
A68_VC  mode1;
struct A68t114  mode2;
} data; };
typedef struct A68t113  A68_113 ;    /* UNION(REF MODE26,REF MODE114)  */
struct A68t109{
struct A68t89  F;
A_PAD_ISTRUCT(A68_89 ,PAD_55)
A68_INT  No;
A_PAD_INT(PAD_56)
A68_INT  Nl;
A_PAD_INT(PAD_57)
A68_INT  Ng;
A_PAD_INT(PAD_58)
struct A68t113  U;
};
typedef struct A68t109  A68_109 ;    /* STRUCT(MODE89,INT,INT,INT,MODE113)  */
A_VECTOR(struct A68t112 ,A68t110);
typedef struct A68t110  A68_110 ;    /* VECTOR [] MODE112 */
struct A68t112{
struct A68t56  Prefix;
A_PAD_ISTRUCT(A68_56 ,PAD_59)
A68_BOOL  Optimised;
A_PAD_BOOL(PAD_60)
A68_BOOL  Iddec;
A_PAD_BOOL(PAD_61)
A68_BOOL  Globalproc;
A_PAD_BOOL(PAD_62)
A68_BOOL  Keptgenproc;
A_PAD_BOOL(PAD_63)
A68_BOOL  Forceuse;
A_PAD_BOOL(PAD_64)
A68_VC  Definition;
A68_VC  Rhs;
};
typedef struct A68t112  A68_112 ;    /* STRUCT(MODE56,BOOL,BOOL,BOOL,BOOL,BOOL,REF MODE26,REF MODE26)  */
A_VECTOR(struct A68t56 ,A68t111);
typedef struct A68t111  A68_111 ;    /* VECTOR [] MODE56 */
struct A68t108{
struct A68t109  Xs;
struct A68t56  Ys;
A_PAD_ISTRUCT(A68_56 ,PAD_65)
A68_LINT  Timeoflastchange;
A_PAD_LINT(PAD_66)
struct A68t110  Keptinfo;
struct A68t111  Cnames;
};
typedef struct A68t108  A68_108 ;    /* STRUCT(MODE109,MODE56,LONG INT,REF MODE110,REF MODE111)  */
struct A68t106{
struct A68t56  Uname;
A_PAD_ISTRUCT(A68_56 ,PAD_67)
struct A68t56  Lname;
A_PAD_ISTRUCT(A68_56 ,PAD_68)
struct A68t56  Gname;
A_PAD_ISTRUCT(A68_56 ,PAD_69)
struct A68t107  Specs;
};
typedef struct A68t106  A68_106 ;    /* STRUCT(MODE56,MODE56,MODE56,REF MODE107)  */
struct A68t105{
struct A68t89  Name;
A_PAD_ISTRUCT(A68_89 ,PAD_70)
struct A68t106  Ym;
struct A68t89  Formal;
A_PAD_ISTRUCT(A68_89 ,PAD_71)
struct A68t56  Ys;
A_PAD_ISTRUCT(A68_56 ,PAD_72)
A68_INT  Level;
A_PAD_INT(PAD_73)
A68_INT  Ownlevel;
A_PAD_INT(PAD_74)
};
typedef struct A68t105  A68_105 ;    /* STRUCT(MODE89,MODE106,MODE89,MODE56,INT,INT)  */
struct A68t115{
struct A68t89  Name;
A_PAD_ISTRUCT(A68_89 ,PAD_75)
struct A68t88  L;
struct A68t88  G;
A68_INT  Type;
A_PAD_INT(PAD_76)
};
typedef struct A68t115  A68_115 ;    /* STRUCT(MODE89,MODE88,MODE88,INT)  */
struct A68t116{
A68_INT  Norden;
A_PAD_INT(PAD_77)
A68_INT  Nomodes;
A_PAD_INT(PAD_78)
A68_INT  Nolabs;
A_PAD_INT(PAD_79)
A68_INT  Nodecnos;
A_PAD_INT(PAD_80)
A68_INT  Nomodules;
A_PAD_INT(PAD_81)
A68_INT  Nolibinds;
A_PAD_INT(PAD_82)
};
typedef struct A68t116  A68_116 ;    /* STRUCT(INT,INT,INT,INT,INT,INT)  */
struct A68t117{
A68_INT  Type;
A_PAD_INT(PAD_83)
A68_INT  Moduleno;
A_PAD_INT(PAD_84)
struct A68t89  Name;
A_PAD_ISTRUCT(A68_89 ,PAD_85)
struct A68t106  Ym;
};
typedef struct A68t117  A68_117 ;    /* STRUCT(INT,INT,MODE89,MODE106)  */
struct A68t118{
struct A68t115  Xmi;
struct A68t106  Ym;
};
typedef struct A68t118  A68_118 ;    /* STRUCT(MODE115,MODE106)  */
struct A68t119{
struct A68t109  Xs;
struct A68t56  Ys;
A_PAD_ISTRUCT(A68_56 ,PAD_86)
};
typedef struct A68t119  A68_119 ;    /* STRUCT(MODE109,MODE56)  */

A_PROCEDURE(A68_VOID ,A68t120,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t120  A68_120 ;    /* PROC(REF MODE26,REF MODE26) VOID */
struct A68t122 ;
struct A68t123 ;
struct A68t124 ;

A_PROCEDURE(A68_VOID ,A68t121,(struct A68t122 ,struct A68t123 ,struct A68t124 ,A68_INT ,struct A68t64 *),(struct A68t122 ,struct A68t123 ,struct A68t124 ,A68_INT ,struct A68t64 *,void *));
typedef struct A68t121  A68_121 ;    /* PROC(MODE122,MODE123,REF MODE124,INT,REF MODE64) VOID */
struct A68t122{
A68_VC  Name;
A68_BITS  Props;
A_PAD_BITS(PAD_87)
A68_INT  Mode;
A_PAD_INT(PAD_88)
A68_INT  Rdenno;
A_PAD_INT(PAD_89)
A68_INT  Maxname;
A_PAD_INT(PAD_90)
};
typedef struct A68t122  A68_122 ;    /* STRUCT(REF MODE26,BITS,INT,INT,INT)  */
struct A68t123{
A68_INT  Level;
A_PAD_INT(PAD_91)
A68_INT  Block;
A_PAD_INT(PAD_92)
};
typedef struct A68t123  A68_123 ;    /* STRUCT(INT,INT)  */
A_VECTOR(A68_INT ,A68t124);
typedef struct A68t124  A68_124 ;    /* VECTOR [] INT */

A_PROCEDURE(A68_VOID ,A68t125,(struct A68t122 ,struct A68t64 *),(struct A68t122 ,struct A68t64 *,void *));
typedef struct A68t125  A68_125 ;    /* PROC(MODE122,REF MODE64) VOID */

A_PROCEDURE(A68_VOID ,A68t126,(struct A68t122 ,A68_VC ,A68_VC ,struct A68t64 *),(struct A68t122 ,A68_VC ,A68_VC ,struct A68t64 *,void *));
typedef struct A68t126  A68_126 ;    /* PROC(MODE122,REF MODE26,REF MODE26,REF MODE64) VOID */

A_PROCEDURE(A68_VOID ,A68t127,(A68_VC ),(A68_VC ,void *));
typedef struct A68t127  A68_127 ;    /* PROC(REF MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t128,(A68_VC ,A68_VC ,A68_BOOL ),(A68_VC ,A68_VC ,A68_BOOL ,void *));
typedef struct A68t128  A68_128 ;    /* PROC(REF MODE26,REF MODE26,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t129,(A68_VC ,struct A68t55 *),(A68_VC ,struct A68t55 *,void *));
typedef struct A68t129  A68_129 ;    /* PROC(REF MODE26,REF MODE55) VOID */

A_PROCEDURE(A68_INT ,A68t130,(A68_INT ),(A68_INT ,void *));
typedef struct A68t130  A68_130 ;    /* PROC(INT) INT */

A_PROCEDURE(A68_BOOL ,A68t131,(A68_INT ),(A68_INT ,void *));
typedef struct A68t131  A68_131 ;    /* PROC(INT) BOOL */

A_PROCEDURE(A68_VOID ,A68t132,(struct A68t123 *),(struct A68t123 *,void *));
typedef struct A68t132  A68_132 ;    /* PROC MODE123 */

A_PROCEDURE(A68_INT ,A68t133,(void),(void *));
typedef struct A68t133  A68_133 ;    /* PROC INT */

A_PROCEDURE(A68_BOOL ,A68t134,(void),(void *));
typedef struct A68t134  A68_134 ;    /* PROC BOOL */

A_PROCEDURE(A68_BOOL ,A68t135,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t135  A68_135 ;    /* PROC(INT,INT) BOOL */

A_PROCEDURE(A68_VOID ,A68t136,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t136  A68_136 ;    /* PROC(INT,INT) VOID */

A_PROCEDURE(A68_BOOL ,A68t137,(struct A68t123 ,struct A68t123 ),(struct A68t123 ,struct A68t123 ,void *));
typedef struct A68t137  A68_137 ;    /* PROC(MODE123,MODE123) BOOL */

A_PROCEDURE(A68_BOOL ,A68t138,(struct A68t123 ),(struct A68t123 ,void *));
typedef struct A68t138  A68_138 ;    /* PROC(MODE123) BOOL */

A_PROCEDURE(A68_VOID ,A68t139,(A68_VC ,A68_BOOL ),(A68_VC ,A68_BOOL ,void *));
typedef struct A68t139  A68_139 ;    /* PROC(MODE26,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t140,(A68_VC ,A68_INT ),(A68_VC ,A68_INT ,void *));
typedef struct A68t140  A68_140 ;    /* PROC(MODE26,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t141,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t141  A68_141 ;    /* PROC(INT) REF MODE26 */
struct A68t143 ;

A_PROCEDURE(A68_VOID ,A68t142,(A68_INT ,struct A68t143 ),(A68_INT ,struct A68t143 ,void *));
typedef struct A68t142  A68_142 ;    /* PROC(INT,MODE143) VOID */
A_ROW(A68_VC ,A68t143,1);
typedef struct A68t143  A68_143 ;    /* [] MODE26 */

A_PROCEDURE(A68_BITS ,A68t144,(void),(void *));
typedef struct A68t144  A68_144 ;    /* PROC BITS */
struct A68t145{
A68_INT  Cfile;
A_PAD_INT(PAD_93)
};
typedef struct A68t145  A68_145 ;    /* STRUCT(INT)  */
struct A68t146{
A68_INT  Seedfile;
A_PAD_INT(PAD_94)
};
typedef struct A68t146  A68_146 ;    /* STRUCT(INT)  */
struct A68t147 { A68_INT mode; union {
struct A68t145  mode1;
struct A68t146  mode2;
struct A68t56  mode3;
} data; };
typedef struct A68t147  A68_147 ;    /* UNION(MODE145,MODE146,MODE56,VOID)  */

A_PROCEDURE(A68_VOID ,A68t148,(A68_VC ),(A68_VC ,void *));
typedef struct A68t148  A68_148 ;    /* PROC(MODE26) VOID */
struct A68t149{
A68_VC  Version;
A68_LINT  Translationtime;
A_PAD_LINT(PAD_95)
A68_VC  Sourcefile;
struct A68t56  Nameseed;
A_PAD_ISTRUCT(A68_56 ,PAD_96)
struct A68t147  Nameseedorigin;
struct A68t150 * Used_modules;
A68_VC  Commandline;
struct A68t151 * Environment;
};
typedef struct A68t149  A68_149 ;    /* STRUCT(REF MODE26,LONG INT,REF MODE26,MODE56,MODE147,REF MODE150,REF MODE26,REF MODE151)  */
struct A68t150{
A68_VC  Modinfo_file;
struct A68t150 * Next;
};
typedef struct A68t150  A68_150 ;    /* STRUCT(REF MODE26,REF MODE150)  */
struct A68t151{
A68_VC  Env_name;
A68_VC  Env_value;
struct A68t151 * Next;
};
typedef struct A68t151  A68_151 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE151)  */
struct A68t153 ;
struct A68t154 ;

A_PROCEDURE(struct A68t153 *,A68t152,(A68_VC ,struct A68t154 *,A68_VC *),(A68_VC ,struct A68t154 *,A68_VC *,void *));
typedef struct A68t152  A68_152 ;    /* PROC(MODE26,REF MODE154,REF REF MODE26) REF MODE153 */
struct A68t153{
A68_VC  Name;
A68_BITS * Stdiofile;
};
typedef struct A68t153  A68_153 ;    /* STRUCT(REF MODE26,REF BITS)  */
struct A68t154{
A68_VC  Dir;
struct A68t154 * Next;
};
typedef struct A68t154  A68_154 ;    /* STRUCT(REF MODE26,REF MODE154)  */
struct A68t156 ;

A_PROCEDURE(A68_VOID ,A68t155,(struct A68t156 ,struct A68t64 *,A68_INT ),(struct A68t156 ,struct A68t64 *,A68_INT ,void *));
typedef struct A68t155  A68_155 ;    /* PROC(MODE156,REF MODE64,INT) VOID */
struct A68t156{
A68_INT  Type;
A_PAD_INT(PAD_97)
A68_VC  Name;
A68_INT  Mode;
A_PAD_INT(PAD_98)
A68_INT  Decno;
A_PAD_INT(PAD_99)
};
typedef struct A68t156  A68_156 ;    /* STRUCT(INT,REF MODE26,INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t157,(A68_INT ,struct A68t123 *),(A68_INT ,struct A68t123 *,void *));
typedef struct A68t157  A68_157 ;    /* PROC(INT) MODE123 */

A_PROCEDURE(A68_VOID ,A68t158,(A68_VC ,struct A68t56 ,A68_INT ,A68_INT ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_VC ,A68_VC ),(A68_VC ,struct A68t56 ,A68_INT ,A68_INT ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_VC ,A68_VC ,void *));
typedef struct A68t158  A68_158 ;    /* PROC(REF MODE26,MODE56,INT,INT,BOOL,BOOL,BOOL,BOOL,BOOL,REF MODE26,REF MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t159,(struct A68t156 ,struct A68t71 **),(struct A68t156 ,struct A68t71 **,void *));
typedef struct A68t159  A68_159 ;    /* PROC(MODE156,REF REF MODE71) VOID */
A_ROW(struct A68t161 ,A68t160,1);
typedef struct A68t160  A68_160 ;    /* [] MODE161 */
struct A68t161{
A68_INT  Mode;
A_PAD_INT(PAD_100)
A68_INT  Cvariabletype;
A_PAD_INT(PAD_101)
struct A68t123  Environ;
A68_VC  Name;
A68_VC  C_name;
struct A68t56  Prefix;
A_PAD_ISTRUCT(A68_56 ,PAD_102)
A68_BITS  Flags;
A_PAD_BITS(PAD_103)
A68_VC  Definition;
A68_VC  Rhs;
};
typedef struct A68t161  A68_161 ;    /* STRUCT(INT,INT,MODE123,REF MODE26,REF MODE26,MODE56,BITS,REF MODE26,REF MODE26)  */

A_PROCEDURE(A68_VOID ,A68t162,(struct A68t156 ),(struct A68t156 ,void *));
typedef struct A68t162  A68_162 ;    /* PROC(MODE156) VOID */
struct A68t164 ;

A_PROCEDURE(A68_VOID ,A68t163,(struct A68t164 ),(struct A68t164 ,void *));
typedef struct A68t163  A68_163 ;    /* PROC(MODE164) VOID */
struct A68t164{
A68_VC  Name;
A68_INT  Labno;
A_PAD_INT(PAD_104)
A68_INT  Status;
A_PAD_INT(PAD_105)
A68_BOOL  Notsetting;
A_PAD_BOOL(PAD_106)
};
typedef struct A68t164  A68_164 ;    /* STRUCT(REF MODE26,INT,INT,BOOL)  */

A_PROCEDURE(A68_VOID ,A68t165,(A68_VC ,A68_INT ,struct A68t124 ,A68_INT ,A68_INT ,struct A68t123 ,A68_BITS ),(A68_VC ,A68_INT ,struct A68t124 ,A68_INT ,A68_INT ,struct A68t123 ,A68_BITS ,void *));
typedef struct A68t165  A68_165 ;    /* PROC(REF MODE26,INT,REF MODE124,INT,INT,MODE123,BITS) VOID */
A_ROW(struct A68t167 ,A68t166,1);
typedef struct A68t166  A68_166 ;    /* [] MODE167 */
struct A68t167{
A68_INT  Mode;
A_PAD_INT(PAD_107)
A68_INT  Resultmode;
A_PAD_INT(PAD_108)
A68_INT  Declevel;
A_PAD_INT(PAD_109)
struct A68t123  Environ;
A68_VC  Name;
struct A68t56  Prefix;
A_PAD_ISTRUCT(A68_56 ,PAD_110)
struct A68t56  Fnprefix;
A_PAD_ISTRUCT(A68_56 ,PAD_111)
struct A68t56  Envprefix;
A_PAD_ISTRUCT(A68_56 ,PAD_112)
A68_BITS  Flags;
A_PAD_BITS(PAD_113)
};
typedef struct A68t167  A68_167 ;    /* STRUCT(INT,INT,INT,MODE123,REF MODE26,MODE56,MODE56,MODE56,BITS)  */
struct A68t168{
A68_INT  Mode;
A_PAD_INT(PAD_114)
A68_VC  String;
};
typedef struct A68t168  A68_168 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t169{
A68_INT  I;
A_PAD_INT(PAD_115)
};
typedef struct A68t169  A68_169 ;    /* STRUCT(INT)  */
A_ROW(A68_INT ,A68t171,1);
typedef struct A68t171  A68_171 ;    /* [] INT */
struct A68t170{
A68_INT  Body;
A_PAD_INT(PAD_116)
A68_INT  Moduleno;
A_PAD_INT(PAD_117)
struct A68t171  Actuals;
};
typedef struct A68t170  A68_170 ;    /* STRUCT(INT,INT,REF MODE171)  */
struct A68t172{
A68_INT  Mode;
A_PAD_INT(PAD_118)
A68_INT  Number;
A_PAD_INT(PAD_119)
A68_VC  Insert;
};
typedef struct A68t172  A68_172 ;    /* STRUCT(INT,INT,REF MODE26)  */
struct A68t174{
A68_INT  Moduleno;
A_PAD_INT(PAD_120)
A68_INT  I;
A_PAD_INT(PAD_121)
A68_INT  J;
A_PAD_INT(PAD_122)
};
typedef struct A68t174  A68_174 ;    /* STRUCT(INT,INT,INT)  */
A_ROW(A68_VC ,A68t176,1);
typedef struct A68t176  A68_176 ;    /* [] REF MODE26 */
struct A68t175{
A68_INT  Moduleno;
A_PAD_INT(PAD_123)
A68_VC  Name;
A68_VC  Uname;
A68_VC  Lname;
A68_VC  Gname;
struct A68t176  Ysnames;
};
typedef struct A68t175  A68_175 ;    /* STRUCT(INT,REF MODE26,REF MODE26,REF MODE26,REF MODE26,REF MODE176)  */
struct A68t173 { A68_INT mode; union {
struct A68t170  mode1;
struct A68t174  mode2;
struct A68t175  mode3;
} data; };
typedef struct A68t173  A68_173 ;    /* UNION(MODE170,MODE174,MODE175)  */
struct A68t178{
A68_INT  Nochars;
A_PAD_INT(PAD_124)
A68_INT  Nocases;
A_PAD_INT(PAD_125)
A68_INT  W;
A_PAD_INT(PAD_126)
};
typedef struct A68t178  A68_178 ;    /* STRUCT(INT,INT,INT)  */
struct A68t177{
struct A68t178  Info;
A68_VC  Text;
};
typedef struct A68t177  A68_177 ;    /* STRUCT(MODE178,REF MODE26)  */
struct A68t179{
A68_VC  Representation;
};
typedef struct A68t179  A68_179 ;    /* STRUCT(REF MODE26)  */
struct A68t181{
A68_INT  Mode;
A_PAD_INT(PAD_127)
A68_VC  Nu;
};
typedef struct A68t181  A68_181 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t182{
A68_INT  Mode;
A_PAD_INT(PAD_128)
A68_LBITS  Denotation;
A_PAD_LBITS(PAD_129)
};
typedef struct A68t182  A68_182 ;    /* STRUCT(INT,LONG BITS)  */
struct A68t183{
A68_INT  Mode;
A_PAD_INT(PAD_130)
A68_VC  Denotation;
};
typedef struct A68t183  A68_183 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t184{
A68_INT  Fn;
A_PAD_INT(PAD_131)
A68_INT  Mode;
A_PAD_INT(PAD_132)
A68_INT  Param;
A_PAD_INT(PAD_133)
};
typedef struct A68t184  A68_184 ;    /* STRUCT(INT,INT,INT)  */
struct A68t185{
A68_INT  W;
A_PAD_INT(PAD_134)
};
typedef struct A68t185  A68_185 ;    /* STRUCT(INT)  */
struct A68t186{
A68_BOOL  Start;
A_PAD_BOOL(PAD_135)
};
typedef struct A68t186  A68_186 ;    /* STRUCT(BOOL)  */
struct A68t187{
A68_INT  Fn;
A_PAD_INT(PAD_136)
A68_INT  Mode;
A_PAD_INT(PAD_137)
A68_BITS  Props;
A_PAD_BITS(PAD_138)
A68_INT  Param;
A_PAD_INT(PAD_139)
};
typedef struct A68t187  A68_187 ;    /* STRUCT(INT,INT,BITS,INT)  */
struct A68t188{
A68_INT  Fn;
A_PAD_INT(PAD_140)
A68_INT  Mode;
A_PAD_INT(PAD_141)
A68_BITS  Props;
A_PAD_BITS(PAD_142)
A68_INT  Resultmode;
A_PAD_INT(PAD_143)
};
typedef struct A68t188  A68_188 ;    /* STRUCT(INT,INT,BITS,INT)  */
struct A68t189{
A68_INT  Fn;
A_PAD_INT(PAD_144)
A68_BITS  Props;
A_PAD_BITS(PAD_145)
};
typedef struct A68t189  A68_189 ;    /* STRUCT(INT,BITS)  */
struct A68t180 { A68_INT mode; union {
struct A68t69  mode1;
A68_INT  mode2;
A68_BOOL  mode3;
struct A68t179  mode4;
struct A68t57  mode5;
struct A68t181  mode6;
struct A68t168  mode7;
struct A68t182  mode8;
struct A68t183  mode9;
struct A68t184  mode10;
struct A68t156  mode11;
struct A68t122  mode12;
struct A68t185  mode13;
struct A68t164  mode14;
struct A68t79  mode15;
struct A68t169  mode16;
struct A68t186  mode17;
struct A68t177  mode18;
struct A68t172  mode19;
struct A68t187  mode20;
struct A68t188  mode21;
struct A68t189  mode22;
struct A68t170  mode23;
struct A68t174  mode24;
struct A68t175  mode25;
} data; };
typedef struct A68t180  A68_180 ;    /* UNION(MODE69,INT,BOOL,MODE179,MODE57,MODE181,MODE168,MODE182,MODE183,MODE184,MODE156,MODE122,MODE185,MODE164,MODE79,MODE169,MODE186,MODE177,MODE172,MODE187,MODE188,MODE189,MODE170,MODE174,MODE175,VOID)  */
struct A68t190 { A68_INT mode; union {
struct A68t69  mode1;
A68_INT  mode2;
A68_BOOL  mode3;
struct A68t179  mode4;
struct A68t57  mode5;
struct A68t181  mode6;
struct A68t168  mode7;
struct A68t182  mode8;
struct A68t183  mode9;
} data; };
typedef struct A68t190  A68_190 ;    /* UNION(MODE69,INT,BOOL,MODE179,MODE57,MODE181,MODE168,MODE182,MODE183)  */
struct A68t191 { A68_INT mode; union {
struct A68t69  mode1;
A68_INT  mode2;
A68_BOOL  mode3;
struct A68t179  mode4;
struct A68t57  mode5;
struct A68t181  mode6;
struct A68t168  mode7;
struct A68t182  mode8;
struct A68t183  mode9;
struct A68t184  mode10;
struct A68t156  mode11;
struct A68t122  mode12;
struct A68t185  mode13;
struct A68t164  mode14;
struct A68t79  mode15;
struct A68t169  mode16;
struct A68t186  mode17;
struct A68t177  mode18;
struct A68t172  mode19;
} data; };
typedef struct A68t191  A68_191 ;    /* UNION(MODE69,INT,BOOL,MODE179,MODE57,MODE181,MODE168,MODE182,MODE183,MODE184,MODE156,MODE122,MODE185,MODE164,MODE79,MODE169,MODE186,MODE177,MODE172)  */

A_PROCEDURE(A68_VOID ,A68t192,(struct A68t116 *,struct A68t180 *,struct A68t171 ),(struct A68t116 *,struct A68t180 *,struct A68t171 ,void *));
typedef struct A68t192  A68_192 ;    /* PROC(REF MODE116,REF MODE180,REF MODE171) VOID */

A_PROCEDURE(A68_VOID ,A68t193,(struct A68t190 ,struct A68t64 *),(struct A68t190 ,struct A68t64 *,void *));
typedef struct A68t193  A68_193 ;    /* PROC(MODE190) MODE64 */
struct A68t194{
struct A68t64 * Control;
struct A68t64 * Step;
A68_BOOL  Forpart;
A_PAD_BOOL(PAD_146)
A68_BOOL  Frompart;
A_PAD_BOOL(PAD_147)
A68_BOOL  Bypart;
A_PAD_BOOL(PAD_148)
A68_BOOL  Topart;
A_PAD_BOOL(PAD_149)
};
typedef struct A68t194  A68_194 ;    /* STRUCT(REF MODE64,REF MODE64,BOOL,BOOL,BOOL,BOOL)  */
struct A68t195{
struct A68t64  Ident;
A68_VC  Control;
A68_BOOL  Needstemp;
A_PAD_BOOL(PAD_150)
};
typedef struct A68t195  A68_195 ;    /* STRUCT(MODE64,REF MODE26,BOOL)  */

A_PROCEDURE(A68_VOID ,A68t196,(struct A68t194 *,A68_INT ,struct A68t71 **),(struct A68t194 *,A68_INT ,struct A68t71 **,void *));
typedef struct A68t196  A68_196 ;    /* PROC(REF MODE194,INT,REF REF MODE71) VOID */
struct A68t198 ;

A_PROCEDURE(A68_VOID ,A68t197,(struct A68t198 ,struct A68t71 **),(struct A68t198 ,struct A68t71 **,void *));
typedef struct A68t197  A68_197 ;    /* PROC(REF MODE198,REF REF MODE71) VOID */
A_VECTOR(struct A68t195 ,A68t198);
typedef struct A68t198  A68_198 ;    /* VECTOR [] MODE195 */
struct A68t199{
A68_INT  Parameters;
A_PAD_INT(PAD_151)
A68_INT  Result;
A_PAD_INT(PAD_152)
A68_BOOL  Hasdescriptors;
A_PAD_BOOL(PAD_153)
};
typedef struct A68t199  A68_199 ;    /* STRUCT(INT,INT,BOOL)  */
struct A68t200{
A68_INT  Mode;
A_PAD_INT(PAD_154)
A68_INT  Offset;
A_PAD_INT(PAD_155)
struct A68t89  Name;
A_PAD_ISTRUCT(A68_89 ,PAD_156)
};
typedef struct A68t200  A68_200 ;    /* STRUCT(INT,INT,MODE89)  */

A_PROCEDURE(A68_VOID ,A68t201,(A68_INT ,struct A68t124 *),(A68_INT ,struct A68t124 *,void *));
typedef struct A68t201  A68_201 ;    /* PROC(INT) REF MODE124 */

A_PROCEDURE(A68_VOID ,A68t202,(struct A68t200 *,A68_VC *),(struct A68t200 *,A68_VC *,void *));
typedef struct A68t202  A68_202 ;    /* PROC(REF MODE200) MODE26 */

A_PROCEDURE(A68_VOID ,A68t203,(A68_INT ,A68_VC ,struct A68t68 *),(A68_INT ,A68_VC ,struct A68t68 *,void *));
typedef struct A68t203  A68_203 ;    /* PROC(INT,MODE26) MODE68 */
struct A68t205 ;

A_PROCEDURE(A68_VOID ,A68t204,(struct A68t205 ,A68_INT ),(struct A68t205 ,A68_INT ,void *));
typedef struct A68t204  A68_204 ;    /* PROC(REF MODE205,INT) VOID */
A_ROW(struct A68t92 ,A68t205,1);
typedef struct A68t205  A68_205 ;    /* [] MODE92 */

A_PROCEDURE(A68_VOID ,A68t206,(A68_INT ,struct A68t199 *),(A68_INT ,struct A68t199 *,void *));
typedef struct A68t206  A68_206 ;    /* PROC(INT) MODE199 */
struct A68t208 ;

A_PROCEDURE(A68_VOID ,A68t207,(A68_INT ,struct A68t208 *),(A68_INT ,struct A68t208 *,void *));
typedef struct A68t207  A68_207 ;    /* PROC(INT) REF MODE208 */
A_VECTOR(struct A68t200 ,A68t208);
typedef struct A68t208  A68_208 ;    /* VECTOR [] MODE200 */

A_PROCEDURE(A68_INT ,A68t209,(A68_INT ,A68_BOOL ),(A68_INT ,A68_BOOL ,void *));
typedef struct A68t209  A68_209 ;    /* PROC(INT,BOOL) INT */

A_PROCEDURE(A68_VOID ,A68t210,(A68_INT ,A68_INT ,A68_VC *),(A68_INT ,A68_INT ,A68_VC *,void *));
typedef struct A68t210  A68_210 ;    /* PROC(INT,INT) MODE26 */
struct A68t211{
struct A68t89  Name;
A_PAD_ISTRUCT(A68_89 ,PAD_157)
struct A68t106  Ym;
struct A68t56  Ys;
A_PAD_ISTRUCT(A68_56 ,PAD_158)
A68_INT  Level;
A_PAD_INT(PAD_159)
struct A68t212 * Ids;
struct A68t213 * Uses;
struct A68t211 * Rest;
};
typedef struct A68t211  A68_211 ;    /* STRUCT(MODE89,MODE106,MODE56,INT,REF MODE212,REF MODE213,REF MODE211)  */
struct A68t212{
struct A68t89  Name;
A_PAD_ISTRUCT(A68_89 ,PAD_160)
struct A68t56  Uname;
A_PAD_ISTRUCT(A68_56 ,PAD_161)
A68_BOOL  Optimised;
A_PAD_BOOL(PAD_162)
A68_BOOL  Iddec;
A_PAD_BOOL(PAD_163)
A68_BOOL  Globalproc;
A_PAD_BOOL(PAD_164)
A68_BOOL  Genproc;
A_PAD_BOOL(PAD_165)
A68_BOOL  Forceuse;
A_PAD_BOOL(PAD_166)
A68_INT  Mode;
A_PAD_INT(PAD_167)
A68_INT  Decno;
A_PAD_INT(PAD_168)
A68_VC  Definition;
A68_VC  Rhs;
struct A68t212 * Rest;
};
typedef struct A68t212  A68_212 ;    /* STRUCT(MODE89,MODE56,BOOL,BOOL,BOOL,BOOL,BOOL,INT,INT,REF MODE26,REF MODE26,REF MODE212)  */
struct A68t213{
struct A68t89  Name;
A_PAD_ISTRUCT(A68_89 ,PAD_169)
struct A68t56  Uname;
A_PAD_ISTRUCT(A68_56 ,PAD_170)
struct A68t212 * Ids;
struct A68t213 * Rest;
};
typedef struct A68t213  A68_213 ;    /* STRUCT(MODE89,MODE56,REF MODE212,REF MODE213)  */
struct A68t215{
struct A68t56  L;
A_PAD_ISTRUCT(A68_56 ,PAD_171)
struct A68t56  G;
A_PAD_ISTRUCT(A68_56 ,PAD_172)
};
typedef struct A68t215  A68_215 ;    /* STRUCT(MODE56,MODE56)  */
struct A68t214{
struct A68t56  Uname;
A_PAD_ISTRUCT(A68_56 ,PAD_173)
struct A68t115  Xmi;
struct A68t215  Checkinfo;
};
typedef struct A68t214  A68_214 ;    /* STRUCT(MODE56,MODE115,MODE215)  */

A_PROCEDURE(A68_VOID ,A68t216,(struct A68t105 ),(struct A68t105 ,void *));
typedef struct A68t216  A68_216 ;    /* PROC(MODE105) VOID */

A_PROCEDURE(A68_VOID ,A68t217,(struct A68t117 ,A68_INT ),(struct A68t117 ,A68_INT ,void *));
typedef struct A68t217  A68_217 ;    /* PROC(MODE117,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t218,(struct A68t90 ),(struct A68t90 ,void *));
typedef struct A68t218  A68_218 ;    /* PROC(MODE90) VOID */
A_ROW(struct A68t211 *,A68t219,1);
typedef struct A68t219  A68_219 ;    /* [] REF MODE211 */

A_PROCEDURE(A68_VOID ,A68t220,(struct A68t89 ,A68_INT ,A68_BOOL ,struct A68t118 *),(struct A68t89 ,A68_INT ,A68_BOOL ,struct A68t118 *,void *));
typedef struct A68t220  A68_220 ;    /* PROC(MODE89,INT,BOOL) MODE118 */

A_PROCEDURE(A68_VOID ,A68t221,(struct A68t89 ,struct A68t89 ,struct A68t106 ,struct A68t119 *),(struct A68t89 ,struct A68t89 ,struct A68t106 ,struct A68t119 *,void *));
typedef struct A68t221  A68_221 ;    /* PROC(MODE89,MODE89,MODE106) MODE119 */

A_PROCEDURE(A68_VOID ,A68t222,(struct A68t115 ),(struct A68t115 ,void *));
typedef struct A68t222  A68_222 ;    /* PROC(MODE115) VOID */

A_PROCEDURE(A68_VOID ,A68t223,(struct A68t109 ),(struct A68t109 ,void *));
typedef struct A68t223  A68_223 ;    /* PROC(MODE109) VOID */
A_ROW(struct A68t108 ,A68t224,1);
typedef struct A68t224  A68_224 ;    /* [] MODE108 */

A_PROCEDURE(A68_BOOL ,A68t225,(A68_INT ,A68_VC ),(A68_INT ,A68_VC ,void *));
typedef struct A68t225  A68_225 ;    /* PROC(INT,MODE26) BOOL */

A_PROCEDURE(A68_VOID ,A68t226,(struct A68t184 ,struct A68t71 **,struct A68t71 *),(struct A68t184 ,struct A68t71 **,struct A68t71 *,void *));
typedef struct A68t226  A68_226 ;    /* PROC(MODE184,REF REF MODE71,REF MODE71) VOID */

A_PROCEDURE(A68_VOID ,A68t227,(struct A68t147 ),(struct A68t147 ,void *));
typedef struct A68t227  A68_227 ;    /* PROC(MODE147) VOID */

A_PROCEDURE(struct A68t56 ,A68t228,(void),(void *));
typedef struct A68t228  A68_228 ;    /* PROC MODE56 */

A_PROCEDURE(A68_VOID ,A68t229,(struct A68t56 ),(struct A68t56 ,void *));
typedef struct A68t229  A68_229 ;    /* PROC(MODE56) VOID */

A_PROCEDURE(A68_VOID ,A68t230,(struct A68t147 ,A68_VC *),(struct A68t147 ,A68_VC *,void *));
typedef struct A68t230  A68_230 ;    /* PROC(MODE147) MODE26 */
struct A68t232 ;

A_PROCEDURE(A68_VOID ,A68t231,(struct A68t232 ),(struct A68t232 ,void *));
typedef struct A68t231  A68_231 ;    /* PROC(MODE232) VOID */
A_VECTOR(struct A68t233 ,A68t232);
typedef struct A68t232  A68_232 ;    /* VECTOR [] MODE233 */
struct A68t233 { A68_INT mode; union {
A68_CHAR  mode1;
A68_VC  mode2;
A68_SINT  mode3;
} data; };
typedef struct A68t233  A68_233 ;    /* UNION(CHAR,MODE26,SHORT INT)  */
struct A68t235 ;

A_PROCEDURE(A68_VOID ,A68t234,(struct A68t235 ,A68_INT ),(struct A68t235 ,A68_INT ,void *));
typedef struct A68t234  A68_234 ;    /* PROC(MODE235,INT) VOID */
A_VECTOR(struct A68t236 ,A68t235);
typedef struct A68t235  A68_235 ;    /* VECTOR [] MODE236 */
struct A68t236 { A68_INT mode; union {
A68_CHAR  mode1;
A68_VC  mode2;
A68_INT  mode3;
A68_SINT  mode4;
} data; };
typedef struct A68t236  A68_236 ;    /* UNION(CHAR,MODE26,INT,SHORT INT)  */

A_PROCEDURE(A68_BOOL ,A68t237,(struct A68t64 *,struct A68t64 *),(struct A68t64 *,struct A68t64 *,void *));
typedef struct A68t237  A68_237 ;    /* PROC(REF MODE64,REF MODE64) BOOL */

A_PROCEDURE(A68_BOOL ,A68t238,(struct A68t64 *),(struct A68t64 *,void *));
typedef struct A68t238  A68_238 ;    /* PROC(REF MODE64) BOOL */

A_PROCEDURE(A68_BOOL ,A68t239,(struct A68t64 *,A68_LBITS ),(struct A68t64 *,A68_LBITS ,void *));
typedef struct A68t239  A68_239 ;    /* PROC(REF MODE64,LONG BITS) BOOL */

A_PROCEDURE(A68_LBITS ,A68t240,(struct A68t64 *),(struct A68t64 *,void *));
typedef struct A68t240  A68_240 ;    /* PROC(REF MODE64) LONG BITS */

A_PROCEDURE(A68_VOID ,A68t241,(struct A68t64 *,A68_VC *),(struct A68t64 *,A68_VC *,void *));
typedef struct A68t241  A68_241 ;    /* PROC(REF MODE64) MODE26 */

A_PROCEDURE(struct A68t64 *,A68t242,(struct A68t64 *,A68_INT ),(struct A68t64 *,A68_INT ,void *));
typedef struct A68t242  A68_242 ;    /* PROC(REF MODE64,INT) REF MODE64 */

A_PROCEDURE(A68_INT ,A68t243,(struct A68t70 ),(struct A68t70 ,void *));
typedef struct A68t243  A68_243 ;    /* PROC(MODE70) INT */

A_PROCEDURE(A68_BOOL ,A68t244,(struct A68t64 *,A68_BITS ),(struct A68t64 *,A68_BITS ,void *));
typedef struct A68t244  A68_244 ;    /* PROC(REF MODE64,BITS) BOOL */

A_PROCEDURE(struct A68t64 *,A68t245,(struct A68t71 *,A68_INT ),(struct A68t71 *,A68_INT ,void *));
typedef struct A68t245  A68_245 ;    /* PROC(REF MODE71,INT) REF MODE64 */

A_PROCEDURE(struct A68t71 *,A68t246,(struct A68t71 *),(struct A68t71 *,void *));
typedef struct A68t246  A68_246 ;    /* PROC(REF MODE71) REF MODE71 */
struct A68t248 ;

A_PROCEDURE(struct A68t64 *,A68t247,(A68_INT ,A68_INT ,A68_BITS ,struct A68t248 ),(A68_INT ,A68_INT ,A68_BITS ,struct A68t248 ,void *));
typedef struct A68t247  A68_247 ;    /* PROC(INT,INT,BITS,MODE248) REF MODE64 */
A_VECTOR(struct A68t64 *,A68t248);
typedef struct A68t248  A68_248 ;    /* VECTOR [] REF MODE64 */

A_PROCEDURE(A68_VOID ,A68t249,(struct A68t64 *,A68_BOOL ,A68_VC *),(struct A68t64 *,A68_BOOL ,A68_VC *,void *));
typedef struct A68t249  A68_249 ;    /* PROC(REF MODE64,BOOL) MODE26 */

A_PROCEDURE(A68_LINT ,A68t250,(struct A68t64 ),(struct A68t64 ,void *));
typedef struct A68t250  A68_250 ;    /* PROC(MODE64) LONG INT */
struct A68t251 { A68_INT mode; union {
struct A68t64 * mode1;
A68_VC  mode2;
struct A68t68  mode3;
} data; };
typedef struct A68t251  A68_251 ;    /* UNION(REF MODE64,MODE26,MODE68)  */

A_PROCEDURE(A68_VOID ,A68t252,(struct A68t251 ,A68_VC *),(struct A68t251 ,A68_VC *,void *));
typedef struct A68t252  A68_252 ;    /* PROC(MODE251) MODE26 */
struct A68t254 ;

A_PROCEDURE(A68_VOID ,A68t253,(struct A68t254 ,A68_VC *),(struct A68t254 ,A68_VC *,void *));
typedef struct A68t253  A68_253 ;    /* PROC(MODE254) MODE26 */
A_VECTOR(struct A68t251 ,A68t254);
typedef struct A68t254  A68_254 ;    /* VECTOR [] MODE251 */

A_PROCEDURE(A68_VOID ,A68t255,(A68_VC ,struct A68t254 ,A68_VC *),(A68_VC ,struct A68t254 ,A68_VC *,void *));
typedef struct A68t255  A68_255 ;    /* PROC(MODE26,MODE254) MODE26 */

A_PROCEDURE(A68_VOID ,A68t256,(struct A68t254 ),(struct A68t254 ,void *));
typedef struct A68t256  A68_256 ;    /* PROC(MODE254) VOID */

A_PROCEDURE(A68_VOID ,A68t257,(A68_VC ,A68_INT ,struct A68t254 ,struct A68t68 *),(A68_VC ,A68_INT ,struct A68t254 ,struct A68t68 *,void *));
typedef struct A68t257  A68_257 ;    /* PROC(MODE26,INT,MODE254) MODE68 */

A_PROCEDURE(struct A68t64 *,A68t258,(struct A68t64 *),(struct A68t64 *,void *));
typedef struct A68t258  A68_258 ;    /* PROC(REF MODE64) REF MODE64 */

A_PROCEDURE(struct A68t64 *,A68t259,(A68_VC ,struct A68t64 *),(A68_VC ,struct A68t64 *,void *));
typedef struct A68t259  A68_259 ;    /* PROC(MODE26,REF MODE64) REF MODE64 */

A_PROCEDURE(A68_VOID ,A68t260,(struct A68t75 ),(struct A68t75 ,void *));
typedef struct A68t260  A68_260 ;    /* PROC(MODE75) VOID */

A_PROCEDURE(A68_VOID ,A68t261,(struct A68t148 ),(struct A68t148 ,void *));
typedef struct A68t261  A68_261 ;    /* PROC(MODE148) VOID */

A_PROCEDURE(A68_VOID ,A68t262,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t262  A68_262 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,63,A68t263);
typedef struct A68t263  A68_263 ;    /* STRUCT 63 CHAR */

A_PROCEDURE(A68_VOID ,A68t264,(struct A68t180 *),(struct A68t180 *,void *));
typedef struct A68t264  A68_264 ;    /* PROC MODE180 */

A_PROCEDURE(A68_VOID ,A68t265,(struct A68t264 ,struct A68t116 *,struct A68t171 ),(struct A68t264 ,struct A68t116 *,struct A68t171 ,void *));
typedef struct A68t265  A68_265 ;    /* PROC(MODE264,REF MODE116,REF MODE171) VOID */
A_ISTRUCT(A68_CHAR ,33,A68t266);
typedef struct A68t266  A68_266 ;    /* STRUCT 33 CHAR */

A_PROCEDURE(A68_VOID ,A68t267,(A68_VC ,A68_BOOL ,A68_BOOL ),(A68_VC ,A68_BOOL ,A68_BOOL ,void *));
typedef struct A68t267  A68_267 ;    /* PROC(REF MODE26,BOOL,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t268,(A68_BOOL ,struct A68t63 ,A68_BOOL ),(A68_BOOL ,struct A68t63 ,A68_BOOL ,void *));
typedef struct A68t268  A68_268 ;    /* PROC(BOOL,MODE63,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t269,(struct A68t122 ),(struct A68t122 ,void *));
typedef struct A68t269  A68_269 ;    /* PROC(MODE122) VOID */
A_ISTRUCT(A68_CHAR ,17,A68t270);
typedef struct A68t270  A68_270 ;    /* STRUCT 17 CHAR */
A_ISTRUCT(A68_CHAR ,10,A68t271);
typedef struct A68t271  A68_271 ;    /* STRUCT 10 CHAR */

A_PROCEDURE(A68_VOID ,A68t272,(A68_BOOL ,struct A68t124 *),(A68_BOOL ,struct A68t124 *,void *));
typedef struct A68t272  A68_272 ;    /* PROC(BOOL) MODE124 */
A_ISTRUCT(A68_CHAR ,23,A68t273);
typedef struct A68t273  A68_273 ;    /* STRUCT 23 CHAR */
A_ISTRUCT(A68_CHAR ,34,A68t274);
typedef struct A68t274  A68_274 ;    /* STRUCT 34 CHAR */
A_ISTRUCT(A68_CHAR ,41,A68t275);
typedef struct A68t275  A68_275 ;    /* STRUCT 41 CHAR */

A_PROCEDURE(A68_VOID ,A68t276,(struct A68t59 ,struct A68t63 ),(struct A68t59 ,struct A68t63 ,void *));
typedef struct A68t276  A68_276 ;    /* PROC(MODE59,MODE63) VOID */
A_ISTRUCT(A68_CHAR ,22,A68t277);
typedef struct A68t277  A68_277 ;    /* STRUCT 22 CHAR */

A_PROCEDURE(A68_VOID ,A68t278,(struct A68t63 ),(struct A68t63 ,void *));
typedef struct A68t278  A68_278 ;    /* PROC(MODE63) VOID */
A_ISTRUCT(A68_CHAR ,38,A68t279);
typedef struct A68t279  A68_279 ;    /* STRUCT 38 CHAR */

A_PROCEDURE(A68_VOID ,A68t280,(struct A68t188 ,A68_BOOL ,struct A68t63 ,struct A68t71 *),(struct A68t188 ,A68_BOOL ,struct A68t63 ,struct A68t71 *,void *));
typedef struct A68t280  A68_280 ;    /* PROC(MODE188,BOOL,MODE63,REF MODE71) VOID */

A_PROCEDURE(A68_VOID ,A68t281,(struct A68t188 ,A68_BOOL ,struct A68t63 ),(struct A68t188 ,A68_BOOL ,struct A68t63 ,void *));
typedef struct A68t281  A68_281 ;    /* PROC(MODE188,BOOL,MODE63) VOID */

A_PROCEDURE(A68_VOID ,A68t282,(struct A68t156 *),(struct A68t156 *,void *));
typedef struct A68t282  A68_282 ;    /* PROC MODE156 */

A_PROCEDURE(struct A68t64 *,A68t283,(struct A68t64 *,struct A68t64 ),(struct A68t64 *,struct A68t64 ,void *));
typedef struct A68t283  A68_283 ;    /* PROC(REF MODE64,MODE64) REF MODE64 */

A_PROCEDURE(struct A68t65 *,A68t284,(struct A68t65 *,struct A68t65 ),(struct A68t65 *,struct A68t65 ,void *));
typedef struct A68t284  A68_284 ;    /* PROC(REF MODE65,MODE65) REF MODE65 */
#define A68_285  A68_VC 
#define A68t285 A68t26            /* FLEX VECTOR [] CHAR */
A_ISTRUCT(A68_CHAR ,24,A68t286);
typedef struct A68t286  A68_286 ;    /* STRUCT 24 CHAR */

A_PROCEDURE(A68_VOID ,A68t287,(A68_BOOL ,struct A68t80 *),(A68_BOOL ,struct A68t80 *,void *));
typedef struct A68t287  A68_287 ;    /* PROC(BOOL) MODE80 */

A_PROCEDURE(A68_VOID ,A68t288,(struct A68t188 ,struct A68t63 ),(struct A68t188 ,struct A68t63 ,void *));
typedef struct A68t288  A68_288 ;    /* PROC(MODE188,MODE63) VOID */
struct A68t289 { A68_INT mode; union {
struct A68t200 * mode1;
A68_INT  mode2;
} data; };
typedef struct A68t289  A68_289 ;    /* UNION(REF MODE200,INT,VOID)  */

A_PROCEDURE(A68_VOID ,A68t290,(A68_VC ,struct A68t289 ,A68_VC *),(A68_VC ,struct A68t289 ,A68_VC *,void *));
typedef struct A68t290  A68_290 ;    /* PROC(MODE26,MODE289) MODE26 */
A_ISTRUCT(A68_CHAR ,6,A68t291);
typedef struct A68t291  A68_291 ;    /* STRUCT 6 CHAR */
A_ISTRUCT(A68_CHAR ,1,A68t292);
typedef struct A68t292  A68_292 ;    /* STRUCT 0 CHAR */
A_ISTRUCT(A68_CHAR ,45,A68t293);
typedef struct A68t293  A68_293 ;    /* STRUCT 45 CHAR */
A_ISTRUCT(A68_CHAR ,73,A68t294);
typedef struct A68t294  A68_294 ;    /* STRUCT 73 CHAR */
A_ISTRUCT(A68_CHAR ,21,A68t295);
typedef struct A68t295  A68_295 ;    /* STRUCT 21 CHAR */
A_ISTRUCT(A68_CHAR ,15,A68t296);
typedef struct A68t296  A68_296 ;    /* STRUCT 15 CHAR */

A_PROCEDURE(A68_VOID ,A68t297,(struct A68t188 ,A68_BOOL ,struct A68t63 ,struct A68t71 **),(struct A68t188 ,A68_BOOL ,struct A68t63 ,struct A68t71 **,void *));
typedef struct A68t297  A68_297 ;    /* PROC(MODE188,BOOL,MODE63,REF REF MODE71) VOID */

A_PROCEDURE(A68_VOID ,A68t298,(A68_BOOL ,struct A68t198 *),(A68_BOOL ,struct A68t198 *,void *));
typedef struct A68t298  A68_298 ;    /* PROC(BOOL) MODE198 */

A_PROCEDURE(struct A68t71 *,A68t299,(struct A68t71 *,struct A68t71 ),(struct A68t71 *,struct A68t71 ,void *));
typedef struct A68t299  A68_299 ;    /* PROC(REF MODE71,MODE71) REF MODE71 */
A_ISTRUCT(A68_CHAR ,26,A68t300);
typedef struct A68t300  A68_300 ;    /* STRUCT 26 CHAR */
A_ISTRUCT(A68_CHAR ,37,A68t301);
typedef struct A68t301  A68_301 ;    /* STRUCT 37 CHAR */
A_ISTRUCT(A68_CHAR ,30,A68t302);
typedef struct A68t302  A68_302 ;    /* STRUCT 30 CHAR */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from values --- */
extern A68_VOID  PWPACTR_getcfragment(struct A68t64 *,A68_VC *);
extern A68_BITS  YIJACTR_defaultinfo;
extern A68_71 * VIJACTR_nilvaluelist;
extern A68_64  MJJACTR_skipvalue;
/* --- End of imports from values --- */


/* --- Imports from coutput --- */
/* --- End of imports from coutput --- */


/* --- Imports from uniquenameserver --- */
extern A68_56  ZGMACTR_newuniquename(void);
/* --- End of imports from uniquenameserver --- */


/* --- Imports from oper --- */
extern A68_VOID  VOQACTR_oper(struct A68t184 ,struct A68t71 **,struct A68t71 *);
/* --- End of imports from oper --- */


/* --- Imports from moduletracer --- */
/* --- End of imports from moduletracer --- */


/* --- Imports from modules --- */
extern A68_115 * KZOACTR_currentmodinfo;
extern A68_BOOL  FLOACTR_composition;
extern A68_214  JZOACTR_currentmodule;
extern A68_VOID  RCPACTR_initialiseunames(void);
/* --- End of imports from modules --- */


/* --- Imports from modes --- */
extern A68_201  HUMACTR_constituents;
extern A68_VOID  AENACTR_cfieldname(struct A68t200 *,A68_VC *);
extern A68_VOID  UIOACTR_declarectemporary(A68_INT ,A68_VC ,A68_68 *);
extern A68_BOOL  XRMACTR_dynamic(A68_INT );
extern A68_INT  RMMACTR_modetype(A68_INT );
extern A68_201  JUMACTR_parameters;
extern A68_VOID  BSMACTR_procinfo(A68_INT ,A68_199 *);
extern A68_VOID  NTMACTR_structfields(A68_INT ,A68_208 *);
extern A68_INT  QANACTR_finddeflexmode(A68_INT );
/* --- End of imports from modes --- */


/* --- Imports from incmode --- */
#define WEAACTR_boolmode 7
#define YEAACTR_formatmode 9
#define EFAACTR_intmode 15
#define JEAACTR_istruct 6
#define FEAACTR_proc 2
#define GEAACTR_procp 3
#define IEAACTR_struct 5
#define UEAACTR_voidmode 5
/* --- End of imports from incmode --- */


/* --- Imports from loops --- */
extern A68_VOID  KBABCTR_for(struct A68t194 *,A68_INT ,struct A68t71 **);
extern A68_VOID  YKABCTR_forall(struct A68t198 ,struct A68t71 **);
extern A68_VOID  SVABCTR_while(void);
extern A68_VOID  UVABCTR_whiledo(struct A68t64 *);
extern A68_VOID  NWABCTR_whileod(void);
extern A68_75  UWABCTR_od;
/* --- End of imports from loops --- */


/* --- Imports from loads --- */
extern A68_VOID  HUZACTR_load(struct A68t190 ,A68_64 *);
/* --- End of imports from loads --- */


/* --- Imports from initialiser --- */
extern A68_VOID  DSZACTR_initialise(struct A68t116 *,struct A68t180 *,struct A68t171 );
/* --- End of imports from initialiser --- */


/* --- Imports from incvalue --- */
#define NJJACTR_voidresult 0
#define OJJACTR_memoryresult 1
#define QJJACTR_routineresult 3
#define RJJACTR_enquiryresult 4
#define SJJACTR_optboolresult 5
#define TJJACTR_noparticularresult 6
/* --- End of imports from incvalue --- */


/* --- Imports from incoperfn --- */
#define QGAACTR_formatfn 51
/* --- End of imports from incoperfn --- */


/* --- Imports from incimperatives --- */
#define JCAACTR_andthwarn 2
#define HBAACTR_beginfn 4
#define KDAACTR_bypartbit 004U
#define FBAACTR_casefn 2
#define GBAACTR_caseufn 3
#define NCAACTR_ccbit 002U
#define IBAACTR_collbeginfn 5
#define VBAACTR_collcommafn 10
#define WCAACTR_decbit 0000100U
#define DBAACTR_decsfn 0
#define XBAACTR_dofn 12
#define BDAACTR_dontpullbit 0004000U
extern A68_BITS  MDAACTR_dybits;
#define ECAACTR_endcollfn 5
#define BCAACTR_esacfn 2
#define CCAACTR_esacufn 3
#define RBAACTR_exitfn 6
#define TCAACTR_exitbit 0000010U
#define HCAACTR_finishfn 8
#define JBAACTR_forfn 6
#define IDAACTR_forpartbit 001U
#define KBAACTR_forallfn 7
#define JDAACTR_frompartbit 002U
#define EBAACTR_iffn 1
#define ADAACTR_labbit 0002000U
#define KCAACTR_orelwarn 3
#define GCAACTR_routinendfn 7
#define WBAACTR_semifn 11
#define LBAACTR_separatoroffset 7
extern A68_INT  ZBAACTR_terminatoroffset;
#define LDAACTR_topartbit 010U
#define PCAACTR_valbit 010U
#define YBAACTR_whilefn 13
/* --- End of imports from incimperatives --- */


/* --- Imports from identifiers --- */
extern A68_VOID  CUVACTR_ccdec(struct A68t156 ,struct A68t64 *,A68_INT );
extern A68_VOID  OUWACTR_environoflabel(A68_INT ,A68_123 *);
extern A68_VOID  LSVACTR_iddec(struct A68t156 ,struct A68t71 **);
extern A68_160  FOKACTR_ids;
extern A68_VOID  MJVACTR_initialdummydec(struct A68t156 );
extern A68_VOID  ZNWACTR_labdec(struct A68t164 );
/* --- End of imports from identifiers --- */


/* --- Imports from environment --- */
extern A68_VOID  PXIACTR_assert(A68_VC ,A68_BOOL );
extern A68_VOID  IXIACTR_error(A68_INT );
extern A68_VOID  KDHACTR_message(A68_INT ,A68_VC *);
extern A68_VOID  LXIACTR_terminalerror(A68_INT );
/* --- End of imports from environment --- */


/* --- Imports from environ --- */
extern A68_VOID  HQLACTR_startnewlevel(A68_INT );
extern A68_75  KQLACTR_reverttopreviouslevel;
extern A68_BOOL  CQLACTR_isnewerthan(struct A68t123 ,struct A68t123 );
/* --- End of imports from environ --- */


/* --- Imports from entryandreturn --- */
extern A68_VOID  SNYACTR_startmodule(A68_VC ,A68_VC );
extern A68_VOID  ERYACTR_endmodule(void);
extern A68_VOID  BLYACTR_startroutine(struct A68t122 ,struct A68t123 ,struct A68t124 ,A68_INT ,struct A68t64 *);
extern A68_VOID  ULYACTR_endroutine(struct A68t122 ,struct A68t64 *);
extern A68_VOID  DPYACTR_startdecsmodule(A68_VC ,A68_VC );
extern A68_VOID  ZQYACTR_startprocmodule(struct A68t122 ,A68_VC ,A68_VC ,struct A68t64 *);
extern A68_VOID  ESYACTR_enddecsmodule(A68_VC );
/* --- End of imports from entryandreturn --- */


/* --- Imports from clauses --- */
extern A68_VOID  TOZACTR_exit(A68_BOOL ,A68_BOOL ,struct A68t63 );
extern A68_VOID  POZACTR_semi(A68_BOOL ,A68_BOOL );
extern A68_VOID  IBZACTR_begin(A68_BOOL ,A68_BOOL );
extern A68_VOID  UBZACTR_end(A68_BOOL ,A68_BOOL ,A68_BOOL ,struct A68t55 *);
extern A68_VOID  SEZACTR_then(struct A68t64 *);
extern A68_VOID  PFZACTR_else(void);
extern A68_VOID  MLZACTR_fi(A68_BOOL ,struct A68t63 );
extern A68_VOID  IGZACTR_casein(struct A68t64 *);
extern A68_VOID  PIZACTR_comma(A68_INT );
extern A68_VOID  UJZACTR_out(void);
extern A68_VOID  MKZACTR_esac(A68_BOOL ,struct A68t63 );
extern A68_VOID  NHZACTR_inu(struct A68t79 ,struct A68t64 *,struct A68t80 );
extern A68_VOID  LJZACTR_commau(struct A68t79 ,struct A68t64 ,struct A68t80 );
extern A68_75  IKZACTR_outu;
extern A68_76  ILZACTR_esacu;
extern A68_VOID  FMZACTR_optboolwarning(A68_BOOL ,struct A68t64 *);
extern A68_VOID  YNZACTR_optbooloper(void);
extern A68_60  EOZACTR_startseries;
extern A68_VOID  MOZACTR_endseries(struct A68t59 ,struct A68t63 ,struct A68t55 *,A68_BOOL ,A68_BOOL ,A68_BOOL );
extern A68_VOID  CZYACTR_evaluateresult(struct A68t71 **,struct A68t63 );
extern A68_VOID  EYYACTR_evaluatenoresult(struct A68t71 **);
extern A68_VOID  ABZACTR_evaluatesimpleenquiry(struct A68t71 **,struct A68t63 );
extern A68_VOID  MPZACTR_codeinsert(A68_VC ,A68_INT ,struct A68t71 *,A68_68 *);
/* --- End of imports from clauses --- */


/* --- Imports from centities --- */
extern A68_55  HIAACTR_unsetlabel;
/* --- End of imports from centities --- */


/* --- Imports from usefulops --- */
extern A68_VOID  RMAAOSF_scanto(A68_CHAR ,A68_VC ,A68_VC *);
extern A68_VOID  ROAAOSF_whole(A68_INT ,A68_INT ,A68_VC *);
/* --- End of imports from usefulops --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void JRPACTR(void);   /* values */
extern void YRLACTR(void);   /* coutput */
extern void AGMACTR(void);   /* uniquenameserver */
extern void LNQACTR(void);   /* oper */
extern void BCHACTR(void);   /* moduletracer */
extern void VJOACTR(void);   /* modules */
extern void MLMACTR(void);   /* modes */
extern void ZDAACTR(void);   /* incmode */
extern void KAABCTR(void);   /* loops */
extern void ISZACTR(void);   /* loads */
extern void URZACTR(void);   /* initialiser */
extern void PIJACTR(void);   /* incvalue */
extern void XFAACTR(void);   /* incoperfn */
extern void UAAACTR(void);   /* incimperatives */
extern void WIVACTR(void);   /* identifiers */
extern void HPIACTR(void);   /* environment */
extern void KNLACTR(void);   /* environ */
extern void KBYACTR(void);   /* entryandreturn */
extern void KXYACTR(void);   /* clauses */
extern void THAACTR(void);   /* centities */
extern void IKAAOSF(void);   /* usefulops */
/* --- end of DECS initialisation functions --- */
static A68_263   ZWABCTR = {"$Id: compiler.c,v 1.5.2.4 2004/09/27 03:04:17 teshields Exp $"}; 
A_GISVEC(A68_VC ,AXABCTR,ZWABCTR,63)
static A68_266   VXABCTR = {"Composition modules not supported"}; 
A_GISVEC(A68_VC ,WXABCTR,VXABCTR,33)
static A68_270   XYABCTR = {"generator routine"}; 
static A68_271   YYABCTR = {"!generator"}; 
A_GISVEC(A68_VC ,ZYABCTR,YYABCTR,10)
A_GISVEC(A68_VC ,AZABCTR,XYABCTR,17)
static A68_273   EABBCTR = {"COMPILER: fdec expected"}; 
A_GISVEC(A68_VC ,FABBCTR,EABBCTR,23)
static A68_274   GABBCTR = {"COMPILER: fdec has unexpected mode"}; 
A_GISVEC(A68_VC ,HABBCTR,GABBCTR,34)
static A68_275   JABBCTR = {"COMPILER: TRANSIDDEC (fdec) expected here"}; 
A_GISVEC(A68_VC ,KABBCTR,JABBCTR,41)
static A68_277   CBBBCTR = {"end OF answer ISNT NIL"}; 
A_GISVEC(A68_VC ,DBBBCTR,CBBBCTR,22)
static A68_279   RBBBCTR = {"exit not permitted in <enquiry clause>"}; 
A_GISVEC(A68_VC ,SBBBCTR,RBBBCTR,38)
static A68_286   XEBBCTR = {"fn OF starter = caseu fn"}; 
A_GISVEC(A68_VC ,YEBBCTR,XEBBCTR,24)
static A68_291   TGBBCTR = {".data["}; 
A_GISVEC(A68_VC ,UGBBCTR,TGBBCTR,6)
static A68_292   XGBBCTR = {""}; 
A_GISVEC(A68_VC ,YGBBCTR,XGBBCTR,0)
static A68_293   ZGBBCTR = {"compiler:collateral clause - unknown selector"}; 
A_GISVEC(A68_VC ,AHBBCTR,ZGBBCTR,45)
static A68_292   BHBBCTR = {""}; 
A_GISVEC(A68_VC ,CHBBCTR,BHBBCTR,0)
static A68_294   JHBBCTR = {"compiler: collateral clause result is neither struct nor istruct nor void"}; 
A_GISVEC(A68_VC ,KHBBCTR,JHBBCTR,73)
static A68_292   OHBBCTR = {""}; 
A_GISVEC(A68_VC ,QHBBCTR,OHBBCTR,0)
static A68_286   SHBBCTR = {"collateral clause result"}; 
A_GISVEC(A68_VC ,THBBCTR,SHBBCTR,24)
static A68_273   QIBBCTR = {"fn OF s = coll comma fn"}; 
A_GISVEC(A68_VC ,RIBBCTR,QIBBCTR,23)
static A68_295   FJBBCTR = {"fn OF t = end coll fn"}; 
A_GISVEC(A68_VC ,GJBBCTR,FJBBCTR,21)
static A68_296   ZJBBCTR = {"fn OF s = do fn"}; 
A_GISVEC(A68_VC ,AKBBCTR,ZJBBCTR,15)
static A68_89   SMBBCTR = {"no closed clause OPTBOOL results"}; 
A_GISVEC(A68_VC ,TMBBCTR,SMBBCTR,32)
static A68_89   QNBBCTR = {"no choice clause OPTBOOL results"}; 
A_GISVEC(A68_VC ,RNBBCTR,QNBBCTR,32)
static A68_300   OPBBCTR = {"PROC modules not supported"}; 
A_GISVEC(A68_VC ,PPBBCTR,OPBBCTR,26)
static A68_301   SPBBCTR = {"rest OF value stack IS nil value list"}; 
A_GISVEC(A68_VC ,TPBBCTR,SPBBCTR,37)
static A68_302   WPBBCTR = {"invalid imperative in 'phrase'"}; 
A_GISVEC(A68_VC ,XPBBCTR,WPBBCTR,30)
static A68_296   TQBBCTR = {"module: ROUTINE"}; 
A_GISVEC(A68_VC ,UQBBCTR,TQBBCTR,15)
static A68_270   ZQBBCTR = {"generator routine"}; 
static A68_271   ARBBCTR = {"!generator"}; 
A_GISVEC(A68_VC ,BRBBCTR,ARBBCTR,10)
A_GISVEC(A68_VC ,CRBBCTR,ZQBBCTR,17)
typedef struct   /* env of non-global proc */
{
A68_180 * HXABCTR_nextimperative;
A68_180 * FXABCTR_currentimperative;
A68_264  Nextstreamimperative;
} LXABCTR_read;
typedef struct   /* env of non-global proc */
{
A68_180 * HXABCTR_nextimperative;
A68_264  Nextstreamimperative;
} RXABCTR_lookahead;
typedef struct   /* env of non-global proc */
{
A68_75  JXABCTR_read;
A68_180 * FXABCTR_currentimperative;
A68_75  PXABCTR_lookahead;
A68_180 * HXABCTR_nextimperative;
} CYABCTR_module;
typedef struct   /* env of non-global proc */
{
A68_75  JXABCTR_read;
A68_180 * FXABCTR_currentimperative;
A68_75  EYABCTR_skiproutine;
} GYABCTR_skiproutine;
typedef struct   /* env of non-global proc */
{
A68_75  PXABCTR_lookahead;
A68_180 * HXABCTR_nextimperative;
A68_75  JXABCTR_read;
A68_75  EYABCTR_skiproutine;
A68_180 * FXABCTR_currentimperative;
A68_268 * DYABCTR_phrase_;
} OYABCTR_routine;
typedef struct   /* env of non-global proc */
{
A68_268 * DYABCTR_phrase_;
A68_180 * FXABCTR_currentimperative;
} RABBCTR_serialclause;
typedef struct   /* env of non-global proc */
{
A68_268 * DYABCTR_phrase_;
A68_180 * FXABCTR_currentimperative;
} LBBBCTR_enquiryclause;
typedef struct   /* env of non-global proc */
{
A68_276  PABBCTR_serialclause;
A68_75  JXABCTR_read;
A68_180 * FXABCTR_currentimperative;
A68_278  JBBBCTR_enquiryclause;
A68_268  XBBBCTR_phrase;
A68_269  MYABCTR_routine;
} ZBBBCTR_phrase;
typedef struct   /* env of non-global proc */
{
int dummy;
} LZABCTR_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  HZABCTR_paramcount;
A_PAD_INT(PAD_174)
} WZABCTR_generator;
typedef struct   /* env of non-global proc */
{
A68_276  PABBCTR_serialclause;
A68_75  JXABCTR_read;
A68_180 * FXABCTR_currentimperative;
A68_278  JBBBCTR_enquiryclause;
A68_268  XBBBCTR_phrase;
A68_71 ** ACBBCTR_valuestack;
} HCBBCTR_enclosedclause;
typedef struct   /* env of non-global proc */
{
A68_71 ** ACBBCTR_valuestack;
A68_268  XBBBCTR_phrase;
} XNBBCTR_optboolexpression;
typedef struct   /* env of non-global proc */
{
A68_276  PABBCTR_serialclause;
} OCBBCTR_closedclause;
typedef struct   /* env of non-global proc */
{
A68_75  JXABCTR_read;
A68_180 * FXABCTR_currentimperative;
A68_278  JBBBCTR_enquiryclause;
A68_276  PABBCTR_serialclause;
} FDBBCTR_choiceclause;
typedef struct   /* env of non-global proc */
{
A68_268  XBBBCTR_phrase;
A68_180 * FXABCTR_currentimperative;
} IGBBCTR_collateralclause;
typedef struct   /* env of non-global proc */
{
A68_75  JXABCTR_read;
A68_180 * FXABCTR_currentimperative;
A68_278  JBBBCTR_enquiryclause;
A68_276  PABBCTR_serialclause;
} MJBBCTR_loopbody;
typedef struct   /* env of non-global proc */
{
A68_75  JXABCTR_read;
A68_180 * FXABCTR_currentimperative;
A68_76  KJBBCTR_loopbody;
} MKBBCTR_loopclause;
typedef struct   /* env of non-global proc */
{
A68_75  JXABCTR_read;
A68_180 * FXABCTR_currentimperative;
A68_76  KJBBCTR_loopbody;
} KLBBCTR_forallclause;
typedef struct   /* env of non-global proc */
{
A68_75  JXABCTR_read;
A68_180 * FXABCTR_currentimperative;
A68_79 * GDBBCTR_uchoice;
} JDBBCTR_readuchoiceimperative;
typedef struct   /* env of non-global proc */
{
A68_75  JXABCTR_read;
A68_180 * FXABCTR_currentimperative;
} RDBBCTR_iddecimperative;
typedef struct   /* env of non-global proc */
{
A68_124  KFBBCTR_cons;
} OFBBCTR_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  NLBBCTR_controlcount;
A_PAD_INT(PAD_175)
} RLBBCTR_generator;

A68_VOID  EXABCTR_translator(A68_264  Nextstreamimperative, A68_116 * Xsizes, A68_171  Keptdecnos);

A_STATIC A68_VOID  KXABCTR_read(void *NonLocals);

A_STATIC A68_VOID  QXABCTR_lookahead(void *NonLocals);

A_STATIC A68_VOID  UXABCTR_compositionmodule(void);

A_STATIC A68_VOID  BYABCTR_module(A68_VC  Modulename, A68_BOOL  Decsmodule, A68_BOOL  Prelude, void *NonLocals);

A_STATIC A68_VOID  FYABCTR_skiproutine(void *NonLocals);

A_STATIC A68_VOID  NYABCTR_routine(A68_122  Routine, void *NonLocals);

A_STATIC A68_VOID  KZABCTR_generator(A68_BOOL  IZABCTR_anonymous, A68_124  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  VZABCTR_generator(A68_BOOL  TZABCTR_anonymous, A68_124  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  QABBCTR_serialclause(A68_59  Properties, A68_63  Answer, void *NonLocals);

A_STATIC A68_VOID  KBBBCTR_enquiryclause(A68_63  Answer, void *NonLocals);

A_STATIC A68_VOID  YBBBCTR_phrase(A68_BOOL  Body, A68_63  Answer, A68_BOOL  Simple, void *NonLocals);

A_STATIC A68_VOID  GCBBCTR_enclosedclause(A68_188  Starter, A68_BOOL  Body, A68_63  Answer, A68_71 * Newvalue, void *NonLocals);

A_STATIC A68_VOID  NCBBCTR_closedclause(A68_188  Starter, A68_BOOL  Body, A68_63  Answer, void *NonLocals);

A_STATIC A68_VOID  EDBBCTR_choiceclause(A68_188  Starter, A68_BOOL  Body, A68_63  Answer, void *NonLocals);

A_STATIC A68_VOID  IDBBCTR_readuchoiceimperative(void *NonLocals);

A_STATIC A68_VOID  QDBBCTR_iddecimperative(A68_156  *ReturnedValue, void *NonLocals);

A_STATIC A68_64 * JEBBCTR_assignment(A68_64 * HEBBCTR_anonymous, A68_64  IEBBCTR_anonymous);

A_STATIC A68_65 * OEBBCTR_assignment(A68_65 * MEBBCTR_anonymous, A68_65  NEBBCTR_anonymous);

A_STATIC A68_VOID  NFBBCTR_generator(A68_BOOL  LFBBCTR_anonymous, A68_80  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  HGBBCTR_collateralclause(A68_188  Starter, A68_63  Answer, void *NonLocals);

A_STATIC A68_VOID  MGBBCTR_collateralunitassignee(A68_VC  Temp, A68_289  Selector, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  LJBBCTR_loopbody(A68_BOOL  Body, A68_63  Answer, void *NonLocals);

A_STATIC A68_VOID  LKBBCTR_loopclause(A68_188  Starter, A68_BOOL  Body, A68_63  Answer, A68_71 ** Frobytlist, void *NonLocals);

A_STATIC A68_VOID  JLBBCTR_forallclause(A68_188  Starter, A68_BOOL  Body, A68_63  Answer, A68_71 ** Foralllist, void *NonLocals);

A_STATIC A68_VOID  QLBBCTR_generator(A68_BOOL  OLBBCTR_anonymous, A68_198  *ReturnedValue, void *NonLocals);

A_STATIC A68_71 * OMBBCTR_assignment(A68_71 * MMBBCTR_anonymous, A68_71  NMBBCTR_anonymous);

A_STATIC A68_VOID  WNBBCTR_optboolexpression(A68_INT  Warn, void *NonLocals);

A_STATIC A68_65 * OEBBCTR_assignment(A68_65 * MEBBCTR_anonymous, A68_65  NEBBCTR_anonymous)
{ 
A68_65  PEBBCTR;  /* united object - for case conformity */
A68_VC  QEBBCTR_anonymous;
A68_VC  REBBCTR;  /* OPERATORS - copy to flex */
A68_285 * SEBBCTR;  /* YIELD */
A68_65 * TEBBCTR;  /* clause result */
{ 
(*MEBBCTR_anonymous) = NEBBCTR_anonymous;
PEBBCTR = NEBBCTR_anonymous ;
switch ( PEBBCTR.mode )
{ 
case 6: /* VECTOR [] CHAR */
QEBBCTR_anonymous = (PEBBCTR.data.mode6);
SEBBCTR = &(MEBBCTR_anonymous-> data.mode6) ;
(*SEBBCTR) = A_VCOPY(QEBBCTR_anonymous,REBBCTR,A68_CHAR );
break;
default: 
/*SKIP*/;
break;
} 
TEBBCTR = MEBBCTR_anonymous;
} 
return( TEBBCTR );
} 
#undef NL

A_STATIC A68_VOID  IDBBCTR_readuchoiceimperative(void *NonLocals)
#define NL(x) (((JDBBCTR_readuchoiceimperative *)NonLocals)->x)
{ 
A68_180  KDBBCTR;  /* united object - for case conformity */
A68_79  LDBBCTR_u;
A68_BOOL  MDBBCTR;  /* clause result */
A68_164  NDBBCTR_l;
A68_BOOL  ODBBCTR;  /* clause result */
A_PROC_ENTRY(readuchoiceimperative);
for ( ;; )
{ 
 /* line 460: */
A_CALLPROC(NL(JXABCTR_read),(),((NL(JXABCTR_read)).nonlocals));
 /* line 461: */
 /* line 462: */
KDBBCTR = (*NL(FXABCTR_currentimperative)) ;
switch ( KDBBCTR.mode )
{ 
case 15: /* STRUCT(INT,BITS,INT)  */
LDBBCTR_u = (KDBBCTR.data.mode15);
{ 
(*NL(GDBBCTR_uchoice)) = LDBBCTR_u;
 /* line 463: */
MDBBCTR = A68_FALSE;
} 
break;
case 14: /* STRUCT(REF MODE26,INT,INT,BOOL)  */
NDBBCTR_l = (KDBBCTR.data.mode14);
{ 
ZNWACTR_labdec(NDBBCTR_l);
 /* line 464: */
 /* line 465: */
MDBBCTR = A68_TRUE;
} 
break;
default: 
LXIACTR_terminalerror(668);
 /* line 466: */
 /* line 467: */
 /* line 468: */
MDBBCTR = A68_FALSE;
break;
} 
 /* line 469: */
ODBBCTR = MDBBCTR;
if ( !ODBBCTR ) break;
/*SKIP*/;
}
A_PROC_EXIT(readuchoiceimperative);
return;
} 
#undef NL

A_STATIC A68_VOID  QDBBCTR_iddecimperative(A68_156  *ReturnedValue, void *NonLocals)
#define NL(x) (((RDBBCTR_iddecimperative *)NonLocals)->x)
{ 
A68_180  SDBBCTR;  /* united object - for case conformity */
A68_156  TDBBCTR_iddec;
A68_156  UDBBCTR;  /* clause result */
A68_156  VDBBCTR;  /* OPERATORS - skip to mode */
A_PROC_ENTRY(iddecimperative);
{ 
A_CALLPROC(NL(JXABCTR_read),(),((NL(JXABCTR_read)).nonlocals));
 /* line 476: */
 /* line 477: */
SDBBCTR = (*NL(FXABCTR_currentimperative)) ;
switch ( SDBBCTR.mode )
{ 
case 11: /* STRUCT(INT,REF MODE26,INT,INT)  */
TDBBCTR_iddec = (SDBBCTR.data.mode11);
 /* line 478: */
 /* line 479: */
UDBBCTR = TDBBCTR_iddec;
break;
default: 
LXIACTR_terminalerror(669);
 /* line 480: */
 /* line 481: */
UDBBCTR = VDBBCTR;
break;
} 
} 
A_PROC_EXIT(iddecimperative);
*ReturnedValue = (UDBBCTR);
return;
} 
#undef NL

A_STATIC A68_64 * JEBBCTR_assignment(A68_64 * HEBBCTR_anonymous, A68_64  IEBBCTR_anonymous)
{ 
A68_INT * KEBBCTR;  /* YIELD */
A68_BITS * LEBBCTR;  /* YIELD */
A68_64 * UEBBCTR;  /* clause result */
{ 
KEBBCTR = (&(HEBBCTR_anonymous->Mode)) ;
(*KEBBCTR) = IEBBCTR_anonymous.Mode;
LEBBCTR = (&(HEBBCTR_anonymous->Info)) ;
(*LEBBCTR) = IEBBCTR_anonymous.Info;
OEBBCTR_assignment((&(HEBBCTR_anonymous->Extra)), IEBBCTR_anonymous.Extra);
UEBBCTR = HEBBCTR_anonymous;
} 
return( UEBBCTR );
} 
#undef NL

A_STATIC A68_VOID  NFBBCTR_generator(A68_BOOL  LFBBCTR_anonymous, A68_80  *ReturnedValue, void *NonLocals)
#define NL(x) (((OFBBCTR_generator *)NonLocals)->x)
{ 
A68_80  PFBBCTR;  /* clause result */
A68_80  QFBBCTR;  /* OPERATORS - dynamic generator */
{ 
QFBBCTR.dim[0].upb = NL(KFBBCTR_cons).upb ;
QFBBCTR.dim[0].lwb = 1 ;
A_1INITSTRIDES(QFBBCTR) ;
( LFBBCTR_anonymous? A_R1LOC(A68_BOOL ,QFBBCTR): A_R1HEAP(A68_BOOL ,QFBBCTR) );
PFBBCTR = QFBBCTR;
} 
*ReturnedValue = (PFBBCTR);
return;
} 
#undef NL
 /* line 628: */

A_STATIC A68_VOID  MGBBCTR_collateralunitassignee(A68_VC  Temp, A68_289  Selector, A68_VC  *ReturnedValue)
{ 
A68_289  NGBBCTR;  /* united object - for case conformity */
A68_200 * OGBBCTR_sf;
A68_VC  PGBBCTR;  /* clause result */
A68_VC  QGBBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  RGBBCTR;  /* avoid structure result */
A68_INT  SGBBCTR_i;
A68_VC  VGBBCTR;  /* avoid structure result */
A68_VC  WGBBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(collateralunitassignee);
 /* line 635: */
 /* line 636: */
NGBBCTR = Selector ;
switch ( NGBBCTR.mode )
{ 
case 1: /* REF STRUCT(INT,INT,MODE89)  */
OGBBCTR_sf = (NGBBCTR.data.mode1);
 /* line 637: */
 /* line 638: */
AENACTR_cfieldname( OGBBCTR_sf, &RGBBCTR );
PGBBCTR = A_VC_PLUS(A_VC_PLUS(Temp,A_HVEC(QGBBCTR,'.',A68_CHAR )),RGBBCTR);
break;
case 2: /* INT */
SGBBCTR_i = (NGBBCTR.data.mode2);
 /* line 639: */
 /* line 640: */
ROAAOSF_whole( (SGBBCTR_i-1), 0, &VGBBCTR );
PGBBCTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(Temp,UGBBCTR),VGBBCTR),A_HVEC(WGBBCTR,']',A68_CHAR ));
break;
case 3: /* VOID */
 /* line 641: */
 /* line 642: */
PGBBCTR = YGBBCTR;
break;
default: 
PXIACTR_assert(AHBBCTR, A68_FALSE);
 /* line 643: */
PGBBCTR = CHBBCTR;
break;
} 
A_PROC_EXIT(collateralunitassignee);
*ReturnedValue = (PGBBCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  QLBBCTR_generator(A68_BOOL  OLBBCTR_anonymous, A68_198  *ReturnedValue, void *NonLocals)
#define NL(x) (((RLBBCTR_generator *)NonLocals)->x)
{ 
A68_198  SLBBCTR;  /* clause result */
A68_198  TLBBCTR;  /* OPERATORS - dynamic generator */
{ 
TLBBCTR.upb = NL(NLBBCTR_controlcount) ;
( OLBBCTR_anonymous? A_VLOC(A68_195 ,TLBBCTR): A_VHEAP(A68_195 ,TLBBCTR) );
SLBBCTR = TLBBCTR;
} 
*ReturnedValue = (SLBBCTR);
return;
} 
#undef NL
 /* line 396: */
 /* line 398: */

A_STATIC A68_VOID  NCBBCTR_closedclause(A68_188  Starter, A68_BOOL  Body, A68_63  Answer, void *NonLocals)
#define NL(x) (((OCBBCTR_closedclause *)NonLocals)->x)
{ 
A68_59  PCBBCTR;  /* collateral clause result */
A68_BITS  QCBBCTR;  /* ADICOPS - >= */
A68_INT  RCBBCTR;  /* ADICOPS - ABS INT */
A68_59  SCBBCTR_properties;
A68_63  TCBBCTR_ccanswer;
A68_BITS  UCBBCTR;  /* ADICOPS - >= */
A68_BOOL  VCBBCTR_seriescontainsexit;
A68_55  WCBBCTR;  /* collateral clause result */
A68_55 * XCBBCTR;  /* YIELD */
A68_55 ** YCBBCTR;  /* YIELD */
A68_BITS  ZCBBCTR;  /* ADICOPS - >= */
A_PROC_ENTRY(closedclause);
 /* line 404: */
 /* line 406: */
{ 
 /* line 407: */
QCBBCTR = Starter.Props ;
PCBBCTR.Block = (A_LB_GE(QCBBCTR,WCAACTR_decbit)&!Body);
 /* line 408: */
RCBBCTR = Starter.Resultmode ;
PCBBCTR.Dynamicresult = XRMACTR_dynamic(A_ABS(RCBBCTR));
 /* line 410: */
PCBBCTR.Discardeddynamicresult = ((A68_BITS )(Starter.Props&MDAACTR_dybits)!=0X0U);
PCBBCTR.Type = Starter.Fn;
SCBBCTR_properties = PCBBCTR;
 /* line 411: */
TCBBCTR_ccanswer = Answer;
 /* line 412: */
 /* line 413: */
UCBBCTR = Starter.Props ;
VCBBCTR_seriescontainsexit = A_LB_GE(UCBBCTR,TCAACTR_exitbit);
 /* line 414: */
 /* line 415: */
 /* line 416: */
if ( VCBBCTR_seriescontainsexit )
{ 
 /* line 417: */
WCBBCTR.Name = ZGMACTR_newuniquename();
 /* line 418: */
WCBBCTR.Set = A68_TRUE;
XCBBCTR = A_HEAP(A68_55 ) ;
(*XCBBCTR) = WCBBCTR ;
YCBBCTR = (&((&TCBBCTR_ccanswer)->End)) ;
(*YCBBCTR) = XCBBCTR;
} 
 /* line 419: */
ZCBBCTR = Starter.Props ;
IBZACTR_begin(A_LB_GE(ZCBBCTR,ADAACTR_labbit), Body);
 /* line 420: */
A_CALLPROC(NL(PABBCTR_serialclause),(SCBBCTR_properties, TCBBCTR_ccanswer),(SCBBCTR_properties, TCBBCTR_ccanswer,(NL(PABBCTR_serialclause)).nonlocals));
 /* line 421: */
 /* line 422: */
 /* line 423: */
 /* line 424: */
 /* line 426: */
 /* line 427: */
UBZACTR_end(SCBBCTR_properties.Dynamicresult, VCBBCTR_seriescontainsexit, Body, (*(&((&TCBBCTR_ccanswer)->End))));
} 
A_PROC_EXIT(closedclause);
return;
} 
#undef NL
 /* line 431: */
 /* line 433: */

A_STATIC A68_VOID  EDBBCTR_choiceclause(A68_188  Starter, A68_BOOL  Body, A68_63  Answer, void *NonLocals)
#define NL(x) (((FDBBCTR_choiceclause *)NonLocals)->x)
{ 
A68_79  GDBBCTR_uchoice;
A68_75  HDBBCTR_readuchoiceimperative;   /* proc value of non-global proc */
A68_282  PDBBCTR_iddecimperative;   /* proc value of non-global proc */
A68_INT  WDBBCTR;  /* ADICOPS - ABS INT */
A68_INT  XDBBCTR_resultmode;
A68_BOOL  YDBBCTR_discardlevelactivated;
A68_INT  ZDBBCTR_enquirytype;
A68_64  AEBBCTR_enquiry;
A68_80  BEBBCTR_case;
A68_55 * CEBBCTR_endofchoiceclause;
A68_BOOL  DEBBCTR_elsepart;
A68_BOOL  EEBBCTR_outpart;
A68_64  FEBBCTR;  /* collateral clause result */
A68_65  GEBBCTR;  /* OPERATORS - mode -> union mode */
A68_64  VEBBCTR;  /* collateral clause result */
A68_65  WEBBCTR;  /* OPERATORS - mode -> union mode */
A68_INT  ZEBBCTR;  /* ADICOPS - ABS INT */
A68_INT  AFBBCTR_umode;
A68_64  BFBBCTR;  /* collateral clause result */
A68_65  CFBBCTR;  /* OPERATORS - mode -> union mode */
A68_63  DFBBCTR;  /* collateral clause result */
A68_63  EFBBCTR;  /* collateral clause result */
A68_63  FFBBCTR_seriesanswer;
A68_59  GFBBCTR_seriesproperties;
A68_180  HFBBCTR;  /* united object - for case conformity */
A68_187  IFBBCTR_s;
A68_124  JFBBCTR;  /* avoid structure result */
A68_124  KFBBCTR_cons;
A68_287  MFBBCTR_generator;   /* proc value of non-global proc */
A68_80  RFBBCTR;  /* avoid structure result */
A68_BOOL * SFBBCTR_c;
A68_INT  TFBBCTR;  /* forall loop counter */
A68_BITS  UFBBCTR;  /* ADICOPS - >= */
A68_156  VFBBCTR;  /* avoid structure result */
A68_BITS  WFBBCTR;  /* ADICOPS - >= */
A68_156  XFBBCTR;  /* avoid structure result */
A68_59  YFBBCTR;  /* collateral clause result */
A68_BITS  ZFBBCTR;  /* ADICOPS - >= */
A68_INT  AGBBCTR;  /* ADICOPS - ABS INT */
A68_BOOL  BGBBCTR;  /* clause result */
A68_189  CGBBCTR_t;
A68_BOOL  DGBBCTR;  /* clause result */
A_PROC_ENTRY(choiceclause);
 /* line 445: */
 /* line 447: */
{ 
 /* line 452: */
 /* line 459: */
A_CLOSURE( HDBBCTR_readuchoiceimperative, IDBBCTR_readuchoiceimperative, JDBBCTR_readuchoiceimperative );
(( JDBBCTR_readuchoiceimperative * ) ( HDBBCTR_readuchoiceimperative.nonlocals )) -> JXABCTR_read = NL(JXABCTR_read);
(( JDBBCTR_readuchoiceimperative * ) ( HDBBCTR_readuchoiceimperative.nonlocals )) -> FXABCTR_currentimperative = NL(FXABCTR_currentimperative);
(( JDBBCTR_readuchoiceimperative * ) ( HDBBCTR_readuchoiceimperative.nonlocals )) -> GDBBCTR_uchoice = (&GDBBCTR_uchoice);
 /* line 471: */
 /* line 475: */
A_CLOSURE( PDBBCTR_iddecimperative, QDBBCTR_iddecimperative, RDBBCTR_iddecimperative );
(( RDBBCTR_iddecimperative * ) ( PDBBCTR_iddecimperative.nonlocals )) -> JXABCTR_read = NL(JXABCTR_read);
(( RDBBCTR_iddecimperative * ) ( PDBBCTR_iddecimperative.nonlocals )) -> FXABCTR_currentimperative = NL(FXABCTR_currentimperative);
 /* line 483: */
WDBBCTR = Starter.Resultmode ;
XDBBCTR_resultmode = A_ABS(WDBBCTR);
 /* line 484: */
YDBBCTR_discardlevelactivated = A68_FALSE;
 /* line 485: */
 /* line 486: */
 /* line 487: */
 /* line 488: */
CEBBCTR_endofchoiceclause = Answer.End;
 /* line 489: */
DEBBCTR_elsepart = A68_FALSE;
 /* line 490: */
EEBBCTR_outpart = A68_FALSE;
 /* line 492: */
 /* line 493: */
if ( (Starter.Fn==EBAACTR_iffn) )
{ 
FEBBCTR.Mode = WEAACTR_boolmode;
FEBBCTR.Info = YIJACTR_defaultinfo;
FEBBCTR.Extra = A_EMPTY(GEBBCTR,3);
JEBBCTR_assignment((&AEBBCTR_enquiry), FEBBCTR);
 /* line 494: */
 /* line 496: */
ZDBBCTR_enquirytype = RJJACTR_enquiryresult;
} 
else
{ 
 /* line 497: */
if ( (Starter.Fn==FBAACTR_casefn) )
{ 
VEBBCTR.Mode = EFAACTR_intmode;
VEBBCTR.Info = YIJACTR_defaultinfo;
VEBBCTR.Extra = A_EMPTY(WEBBCTR,3);
JEBBCTR_assignment((&AEBBCTR_enquiry), VEBBCTR);
 /* line 498: */
 /* line 500: */
ZDBBCTR_enquirytype = RJJACTR_enquiryresult;
} 
else
{ 
PXIACTR_assert(YEBBCTR, (Starter.Fn==GBAACTR_caseufn));
 /* line 501: */
ZEBBCTR = Starter.Mode ;
AFBBCTR_umode = A_ABS(ZEBBCTR);
 /* line 502: */
BFBBCTR.Mode = AFBBCTR_umode;
BFBBCTR.Info = YIJACTR_defaultinfo;
BFBBCTR.Extra = A_EMPTY(CFBBCTR,3);
JEBBCTR_assignment((&AEBBCTR_enquiry), BFBBCTR);
 /* line 503: */
 /* line 505: */
ZDBBCTR_enquirytype = RJJACTR_enquiryresult;
} 
} 
 /* line 507: */
DFBBCTR.Value = (&AEBBCTR_enquiry);
DFBBCTR.End = (A68_55 *)A68_NIL;
DFBBCTR.Type = ZDBBCTR_enquirytype;
A_CALLPROC(NL(JBBBCTR_enquiryclause),(DFBBCTR),(DFBBCTR,(NL(JBBBCTR_enquiryclause)).nonlocals));
 /* line 509: */
 /* line 510: */
 /* line 511: */
EFBBCTR.Value = Answer.Value;
 /* line 513: */
EFBBCTR.End = CEBBCTR_endofchoiceclause;
EFBBCTR.Type = Answer.Type;
FFBBCTR_seriesanswer = EFBBCTR;
 /* line 514: */
 /* line 516: */
for ( ;; )
{ 
 /* line 517: */
HFBBCTR = (*NL(FXABCTR_currentimperative)) ;
switch ( HFBBCTR.mode )
{ 
case 20: /* STRUCT(INT,INT,BITS,INT)  */
IFBBCTR_s = (HFBBCTR.data.mode20);
 /* line 518: */
{ 
 /* line 519: */
 /* line 521: */
switch ( IFBBCTR_s.Fn )
{ 
case 1: 
 /* line 522: */
{ 
DEBBCTR_elsepart = (IFBBCTR_s.Param==2);
 /* line 523: */
 /* line 524: */
 /* line 527: */
SEZACTR_then((&AEBBCTR_enquiry));
} 
break;
case 2: 
 /* line 528: */
{ 
EEBBCTR_outpart = (IFBBCTR_s.Param<0);
 /* line 529: */
 /* line 530: */
 /* line 533: */
IGZACTR_casein((&AEBBCTR_enquiry));
} 
break;
case 3: 
 /* line 534: */
{ 
EEBBCTR_outpart = (IFBBCTR_s.Param<0);
 /* line 535: */
A_CALLPROC(HDBBCTR_readuchoiceimperative,(),((HDBBCTR_readuchoiceimperative).nonlocals));
 /* line 536: */
A_CALLPROC(HUMACTR_constituents,((*(&((&AEBBCTR_enquiry)->Mode))), &JFBBCTR),((*(&((&AEBBCTR_enquiry)->Mode))), &JFBBCTR,(HUMACTR_constituents).nonlocals));
KFBBCTR_cons = JFBBCTR;
 /* line 537: */
 /* line 538: */
A_CLOSURE( MFBBCTR_generator, NFBBCTR_generator, OFBBCTR_generator );
(( OFBBCTR_generator * ) ( MFBBCTR_generator.nonlocals )) -> KFBBCTR_cons = KFBBCTR_cons;
A_CALLPROC(MFBBCTR_generator,(A68_TRUE, &RFBBCTR),(A68_TRUE, &RFBBCTR,(MFBBCTR_generator).nonlocals));
BEBBCTR_case = RFBBCTR;
 /* line 539: */
 /* line 540: */
TFBBCTR = BEBBCTR_case.dim[0].upb - BEBBCTR_case.dim[0].lwb;
SFBBCTR_c = BEBBCTR_case.data;
for (;TFBBCTR-- >= 0;
(SFBBCTR_c += BEBBCTR_case.dim[0].stride
) )
{
(*SFBBCTR_c) = A68_FALSE;
}
 /* line 541: */
 /* line 542: */
 /* line 543: */
 /* line 545: */
NHZACTR_inu(GDBBCTR_uchoice, (&AEBBCTR_enquiry), BEBBCTR_case);
 /* line 546: */
 /* line 547: */
 /* line 548: */
UFBBCTR = (*(&((&GDBBCTR_uchoice)->Props))) ;
if ( A_LB_GE(UFBBCTR,WCAACTR_decbit) )
{ 
 /* line 549: */
 /* line 551: */
 /* line 552: */
 /* line 553: */
 /* line 556: */
A_CALLPROC(PDBBCTR_iddecimperative,( &VFBBCTR),( &VFBBCTR,(PDBBCTR_iddecimperative).nonlocals));
CUVACTR_ccdec(VFBBCTR, (&AEBBCTR_enquiry), (*(&((&GDBBCTR_uchoice)->Param))));
} 
} 
break;
case 4: 
 /* line 558: */
PIZACTR_comma(IFBBCTR_s.Param);
break;
case 5: 
 /* line 559: */
{ 
A_CALLPROC(HDBBCTR_readuchoiceimperative,(),((HDBBCTR_readuchoiceimperative).nonlocals));
 /* line 560: */
 /* line 561: */
 /* line 562: */
 /* line 564: */
LJZACTR_commau(GDBBCTR_uchoice, AEBBCTR_enquiry, BEBBCTR_case);
 /* line 565: */
 /* line 566: */
 /* line 567: */
WFBBCTR = (*(&((&GDBBCTR_uchoice)->Props))) ;
if ( A_LB_GE(WFBBCTR,WCAACTR_decbit) )
{ 
 /* line 568: */
 /* line 570: */
 /* line 571: */
 /* line 572: */
 /* line 575: */
A_CALLPROC(PDBBCTR_iddecimperative,( &XFBBCTR),( &XFBBCTR,(PDBBCTR_iddecimperative).nonlocals));
CUVACTR_ccdec(XFBBCTR, (&AEBBCTR_enquiry), (*(&((&GDBBCTR_uchoice)->Param))));
} 
} 
break;
case 6: 
 /* line 577: */
LXIACTR_terminalerror(665);
break;
case 7: 
 /* line 579: */
UJZACTR_out();
break;
case 8: 
 /* line 583: */
A_CALLPROC(IKZACTR_outu,(),((IKZACTR_outu).nonlocals));
break;
case 9: 
 /* line 584: */
PFZACTR_else();
break;
default: 
 /* line 585: */
LXIACTR_terminalerror(665);
break;
} 
 /* line 587: */
 /* line 588: */
 /* line 589: */
ZFBBCTR = IFBBCTR_s.Props ;
YFBBCTR.Block = A_LB_GE(ZFBBCTR,WCAACTR_decbit);
 /* line 590: */
AGBBCTR = IFBBCTR_s.Mode ;
YFBBCTR.Dynamicresult = XRMACTR_dynamic(A_ABS(AGBBCTR));
 /* line 591: */
YFBBCTR.Discardeddynamicresult = ((A68_BITS )(IFBBCTR_s.Props&MDAACTR_dybits)!=0X0U);
 /* line 592: */
YFBBCTR.Type = (IFBBCTR_s.Fn+LBAACTR_separatoroffset);
GFBBCTR_seriesproperties = YFBBCTR;
 /* line 593: */
 /* line 594: */
 /* line 596: */
BGBBCTR = A68_TRUE;
} 
break;
case 22: /* STRUCT(INT,BITS)  */
CGBBCTR_t = (HFBBCTR.data.mode22);
 /* line 597: */
{ 
 /* line 598: */
 /* line 599: */
if ( (CGBBCTR_t.Fn==CCAACTR_esacufn) )
{ 
 /* line 600: */
A_CALLPROC(ILZACTR_esacu,(EEBBCTR_outpart, Answer),(EEBBCTR_outpart, Answer,(ILZACTR_esacu).nonlocals));
} 
else
{ 
 /* line 601: */
 /* line 602: */
if ( (CGBBCTR_t.Fn==BCAACTR_esacfn) )
{ 
 /* line 603: */
 /* line 604: */
MKZACTR_esac(EEBBCTR_outpart, Answer);
} 
else
{ 
 /* line 605: */
MLZACTR_fi(DEBBCTR_elsepart, Answer);
} 
} 
 /* line 607: */
 /* line 608: */
 /* line 609: */
 /* line 610: */
BGBBCTR = A68_FALSE;
} 
break;
default: 
LXIACTR_terminalerror(657);
 /* line 611: */
 /* line 612: */
 /* line 613: */
BGBBCTR = A68_FALSE;
break;
} 
 /* line 614: */
DGBBCTR = BGBBCTR;
if ( !DGBBCTR ) break;
 /* line 615: */
A_CALLPROC(NL(PABBCTR_serialclause),(GFBBCTR_seriesproperties, FFBBCTR_seriesanswer),(GFBBCTR_seriesproperties, FFBBCTR_seriesanswer,(NL(PABBCTR_serialclause)).nonlocals));
}
 /* line 616: */
} 
A_PROC_EXIT(choiceclause);
return;
} 
#undef NL

A_STATIC A68_VOID  HGBBCTR_collateralclause(A68_188  Starter, A68_63  Answer, void *NonLocals)
#define NL(x) (((IGBBCTR_collateralclause *)NonLocals)->x)
{ 
A68_INT  DHBBCTR;  /* ADICOPS - ABS INT */
A68_INT  EHBBCTR_resultmode;
A68_INT  FHBBCTR_resulttype;
A68_BOOL  GHBBCTR_structure;
A68_BOOL  HHBBCTR_istruct;
A68_BOOL  IHBBCTR_void;
A68_208  LHBBCTR_fields;
A68_208  MHBBCTR;  /* avoid structure result */
A68_64 * NHBBCTR_collateralvalue;
A68_VC  PHBBCTR;  /* clause result */
A68_65  RHBBCTR;  /* united object - for case conformity */
A68_68  UHBBCTR;  /* avoid structure result */
A68_65  VHBBCTR;  /* OPERATORS - mode -> union mode */
A68_VC  WHBBCTR;  /* avoid structure result */
A68_VC  XHBBCTR_collateraltemp;
A68_64  YHBBCTR;  /* collateral clause result */
A68_INT  ZHBBCTR;  /* ADICOPS - ABS INT */
A68_289  AIBBCTR;  /* clause result */
A68_INT  BIBBCTR;  /* YIELD */
A68_289  CIBBCTR;  /* OPERATORS - mode -> union mode */
A68_200 * DIBBCTR;  /* YIELD */
A68_289  EIBBCTR;  /* OPERATORS - mode -> union mode */
A68_INT  FIBBCTR;  /* YIELD */
A68_289  GIBBCTR;  /* OPERATORS - mode -> union mode */
A68_VC  HIBBCTR;  /* avoid structure result */
A68_65  IIBBCTR;  /* OPERATORS - mode -> union mode */
A68_64  JIBBCTR_phrasevalue;
A68_55  KIBBCTR_endofphrase;
A68_63  LIBBCTR;  /* collateral clause result */
A68_63  MIBBCTR_phraseanswer;
A68_INT  NIBBCTR_i;
A68_180  OIBBCTR;  /* united object - for case conformity */
A68_187  PIBBCTR_s;
A68_64  SIBBCTR;  /* collateral clause result */
A68_INT  TIBBCTR;  /* ADICOPS - ABS INT */
A68_289  UIBBCTR;  /* clause result */
A68_INT  VIBBCTR;  /* YIELD */
A68_289  WIBBCTR;  /* OPERATORS - mode -> union mode */
A68_200 * XIBBCTR;  /* YIELD */
A68_289  YIBBCTR;  /* OPERATORS - mode -> union mode */
A68_INT  ZIBBCTR;  /* YIELD */
A68_289  AJBBCTR;  /* OPERATORS - mode -> union mode */
A68_VC  BJBBCTR;  /* avoid structure result */
A68_65  CJBBCTR;  /* OPERATORS - mode -> union mode */
A68_BOOL  DJBBCTR;  /* clause result */
A68_189  EJBBCTR_t;
A68_BOOL  HJBBCTR;  /* clause result */
A_PROC_ENTRY(collateralclause);
 /* line 623: */
 /* line 624: */
{ 
 /* line 625: */
 /* line 626: */
 /* line 645: */
DHBBCTR = Starter.Resultmode ;
EHBBCTR_resultmode = A_ABS(DHBBCTR);
 /* line 646: */
FHBBCTR_resulttype = RMMACTR_modetype(EHBBCTR_resultmode);
 /* line 647: */
GHBBCTR_structure = (FHBBCTR_resulttype==IEAACTR_struct);
 /* line 648: */
HHBBCTR_istruct = (FHBBCTR_resulttype==JEAACTR_istruct);
 /* line 649: */
IHBBCTR_void = (EHBBCTR_resultmode==UEAACTR_voidmode);
 /* line 651: */
 /* line 652: */
 /* line 653: */
PXIACTR_assert(KHBBCTR, ((GHBBCTR_structure|HHBBCTR_istruct)|IHBBCTR_void));
 /* line 655: */
 /* line 656: */
 /* line 657: */
if ( GHBBCTR_structure )
{ 
 /* line 658: */
NTMACTR_structfields( EHBBCTR_resultmode, &MHBBCTR );
LHBBCTR_fields = MHBBCTR;
} 
 /* line 660: */
NHBBCTR_collateralvalue = Answer.Value;
 /* line 667: */
 /* line 668: */
 /* line 669: */
 /* line 670: */
if ( ((*(&(NHBBCTR_collateralvalue->Mode)))==UEAACTR_voidmode) )
{ 
PHBBCTR = QHBBCTR;
} 
else
{ 
 /* line 671: */
RHBBCTR = (*(&(NHBBCTR_collateralvalue->Extra))) ;
switch ( RHBBCTR.mode )
{ 
case 3: /* VOID */
 /* line 673: */
 /* line 675: */
 /* line 676: */
 /* line 677: */
UIOACTR_declarectemporary( (*(&(NHBBCTR_collateralvalue->Mode))), THBBCTR, &UHBBCTR );
OEBBCTR_assignment((&(NHBBCTR_collateralvalue->Extra)), A_UNITE(VHBBCTR,mode5,5,UHBBCTR));
break;
default: 
/*SKIP*/;
break;
} 
 /* line 678: */
 /* line 679: */
PWPACTR_getcfragment( NHBBCTR_collateralvalue, &WHBBCTR );
PHBBCTR = WHBBCTR;
} 
XHBBCTR_collateraltemp = PHBBCTR;
 /* line 682: */
 /* line 683: */
 /* line 684: */
ZHBBCTR = Starter.Mode ;
YHBBCTR.Mode = A_ABS(ZHBBCTR);
 /* line 686: */
YHBBCTR.Info = YIJACTR_defaultinfo;
 /* line 687: */
if ( GHBBCTR_structure )
{ 
 /* line 688: */
BIBBCTR = 1 ;
DIBBCTR = (&A_VINDEX(LHBBCTR_fields,BIBBCTR)) ;
AIBBCTR = A_UNITE(CIBBCTR,mode1,1,DIBBCTR);
} 
else
{ 
 /* line 689: */
if ( HHBBCTR_istruct )
{ 
 /* line 690: */
FIBBCTR = 1 ;
AIBBCTR = A_UNITE(EIBBCTR,mode2,2,FIBBCTR);
} 
else
{ 
 /* line 691: */
AIBBCTR = A_EMPTY(GIBBCTR,3);
} 
} 
 /* line 692: */
MGBBCTR_collateralunitassignee( XHBBCTR_collateraltemp, AIBBCTR, &HIBBCTR );
YHBBCTR.Extra = A_UNITE(IIBBCTR,mode6,6,HIBBCTR);
JIBBCTR_phrasevalue = YHBBCTR;
 /* line 694: */
KIBBCTR_endofphrase = HIAACTR_unsetlabel;
 /* line 696: */
 /* line 697: */
LIBBCTR.Value = (&JIBBCTR_phrasevalue);
LIBBCTR.End = (&KIBBCTR_endofphrase);
LIBBCTR.Type = Answer.Type;
MIBBCTR_phraseanswer = LIBBCTR;
 /* line 699: */
 /* line 700: */
for ( NIBBCTR_i = 1;;
NIBBCTR_i += 1 ) 
{ 
A_CALLPROC(NL(XBBBCTR_phrase),(A68_FALSE, MIBBCTR_phraseanswer, A68_FALSE),(A68_FALSE, MIBBCTR_phraseanswer, A68_FALSE,(NL(XBBBCTR_phrase)).nonlocals));
 /* line 701: */
 /* line 702: */
OIBBCTR = (*NL(FXABCTR_currentimperative)) ;
switch ( OIBBCTR.mode )
{ 
case 20: /* STRUCT(INT,INT,BITS,INT)  */
PIBBCTR_s = (OIBBCTR.data.mode20);
 /* line 703: */
 /* line 704: */
{ 
PXIACTR_assert(RIBBCTR, (PIBBCTR_s.Fn==VBAACTR_collcommafn));
 /* line 706: */
 /* line 707: */
 /* line 708: */
TIBBCTR = PIBBCTR_s.Mode ;
SIBBCTR.Mode = A_ABS(TIBBCTR);
 /* line 710: */
SIBBCTR.Info = YIJACTR_defaultinfo;
 /* line 711: */
if ( GHBBCTR_structure )
{ 
 /* line 712: */
VIBBCTR = PIBBCTR_s.Param ;
XIBBCTR = (&A_VINDEX(LHBBCTR_fields,VIBBCTR)) ;
UIBBCTR = A_UNITE(WIBBCTR,mode1,1,XIBBCTR);
} 
else
{ 
 /* line 713: */
if ( HHBBCTR_istruct )
{ 
 /* line 714: */
ZIBBCTR = PIBBCTR_s.Param ;
UIBBCTR = A_UNITE(YIBBCTR,mode2,2,ZIBBCTR);
} 
else
{ 
 /* line 715: */
UIBBCTR = A_EMPTY(AJBBCTR,3);
} 
} 
 /* line 716: */
MGBBCTR_collateralunitassignee( XHBBCTR_collateraltemp, UIBBCTR, &BJBBCTR );
SIBBCTR.Extra = A_UNITE(CJBBCTR,mode6,6,BJBBCTR);
JEBBCTR_assignment((&JIBBCTR_phrasevalue), SIBBCTR);
 /* line 717: */
 /* line 718: */
 /* line 720: */
DJBBCTR = A68_TRUE;
} 
break;
case 22: /* STRUCT(INT,BITS)  */
EJBBCTR_t = (OIBBCTR.data.mode22);
 /* line 721: */
 /* line 722: */
{ 
PXIACTR_assert(GJBBCTR, (EJBBCTR_t.Fn==ECAACTR_endcollfn));
 /* line 723: */
 /* line 724: */
 /* line 725: */
 /* line 726: */
DJBBCTR = A68_FALSE;
} 
break;
default: 
LXIACTR_terminalerror(658);
 /* line 727: */
 /* line 728: */
 /* line 729: */
DJBBCTR = A68_FALSE;
break;
} 
 /* line 731: */
HJBBCTR = DJBBCTR;
if ( !HJBBCTR ) break;
/*SKIP*/;
}
 /* line 732: */
} 
A_PROC_EXIT(collateralclause);
return;
} 
#undef NL
 /* line 737: */

A_STATIC A68_VOID  LJBBCTR_loopbody(A68_BOOL  Body, A68_63  Answer, void *NonLocals)
#define NL(x) (((MJBBCTR_loopbody *)NonLocals)->x)
{ 
A68_55  NJBBCTR_endofseries;
A68_180  OJBBCTR;  /* united object - for case conformity */
A68_187  PJBBCTR_whileordo;
A68_59  QJBBCTR;  /* collateral clause result */
A68_BITS  RJBBCTR;  /* ADICOPS - >= */
A68_59  SJBBCTR_loopproperties;
A68_64  TJBBCTR;  /* collateral clause result */
A68_65  UJBBCTR;  /* OPERATORS - mode -> union mode */
A68_64  VJBBCTR_enquiry;
A68_63  WJBBCTR;  /* collateral clause result */
A68_180  XJBBCTR;  /* united object - for case conformity */
A68_187  YJBBCTR_s;
A68_59  BKBBCTR;  /* collateral clause result */
A68_BITS  CKBBCTR;  /* ADICOPS - >= */
A68_59  DKBBCTR_seriesproperties;
A68_63  EKBBCTR;  /* collateral clause result */
A68_63  FKBBCTR;  /* collateral clause result */
A_PROC_ENTRY(loopbody);
 /* line 742: */
 /* line 743: */
{ 
NJBBCTR_endofseries = HIAACTR_unsetlabel;
 /* line 744: */
A_CALLPROC(NL(JXABCTR_read),(),((NL(JXABCTR_read)).nonlocals));
 /* line 745: */
 /* line 746: */
OJBBCTR = (*NL(FXABCTR_currentimperative)) ;
switch ( OJBBCTR.mode )
{ 
case 20: /* STRUCT(INT,INT,BITS,INT)  */
PJBBCTR_whileordo = (OJBBCTR.data.mode20);
 /* line 747: */
 /* line 748: */
{ 
 /* line 749: */
RJBBCTR = PJBBCTR_whileordo.Props ;
QJBBCTR.Block = (A_LB_GE(RJBBCTR,WCAACTR_decbit)&!Body);
 /* line 750: */
QJBBCTR.Dynamicresult = A68_FALSE;
 /* line 751: */
QJBBCTR.Discardeddynamicresult = ((A68_BITS )(PJBBCTR_whileordo.Props&MDAACTR_dybits)!=0X0U);
 /* line 752: */
QJBBCTR.Type = (PJBBCTR_whileordo.Fn+LBAACTR_separatoroffset);
SJBBCTR_loopproperties = QJBBCTR;
 /* line 754: */
 /* line 755: */
 /* line 756: */
if ( (PJBBCTR_whileordo.Fn==YBAACTR_whilefn) )
{ 
TJBBCTR.Mode = WEAACTR_boolmode;
TJBBCTR.Info = YIJACTR_defaultinfo;
TJBBCTR.Extra = A_EMPTY(UJBBCTR,3);
VJBBCTR_enquiry = TJBBCTR;
 /* line 757: */
SVABCTR_while();
 /* line 758: */
 /* line 759: */
WJBBCTR.Value = (&VJBBCTR_enquiry);
WJBBCTR.End = (A68_55 *)A68_NIL;
WJBBCTR.Type = RJJACTR_enquiryresult;
A_CALLPROC(NL(JBBBCTR_enquiryclause),(WJBBCTR),(WJBBCTR,(NL(JBBBCTR_enquiryclause)).nonlocals));
 /* line 760: */
UVABCTR_whiledo((&VJBBCTR_enquiry));
 /* line 762: */
 /* line 763: */
XJBBCTR = (*NL(FXABCTR_currentimperative)) ;
switch ( XJBBCTR.mode )
{ 
case 20: /* STRUCT(INT,INT,BITS,INT)  */
YJBBCTR_s = (XJBBCTR.data.mode20);
 /* line 764: */
 /* line 765: */
{ 
PXIACTR_assert(AKBBCTR, (YJBBCTR_s.Fn==XBAACTR_dofn));
 /* line 766: */
 /* line 767: */
 /* line 768: */
 /* line 769: */
CKBBCTR = YJBBCTR_s.Props ;
BKBBCTR.Block = (A_LB_GE(CKBBCTR,WCAACTR_decbit)&!SJBBCTR_loopproperties.Block);
 /* line 770: */
BKBBCTR.Dynamicresult = A68_FALSE;
 /* line 771: */
BKBBCTR.Discardeddynamicresult = ((A68_BITS )(YJBBCTR_s.Props&MDAACTR_dybits)!=0X0U);
 /* line 772: */
BKBBCTR.Type = (YJBBCTR_s.Fn+LBAACTR_separatoroffset);
DKBBCTR_seriesproperties = BKBBCTR;
 /* line 773: */
 /* line 774: */
 /* line 775: */
EKBBCTR.Value = Answer.Value;
EKBBCTR.End = (&NJBBCTR_endofseries);
 /* line 776: */
EKBBCTR.Type = NJJACTR_voidresult;
 /* line 777: */
 /* line 778: */
 /* line 779: */
A_CALLPROC(NL(PABBCTR_serialclause),(DKBBCTR_seriesproperties, EKBBCTR),(DKBBCTR_seriesproperties, EKBBCTR,(NL(PABBCTR_serialclause)).nonlocals));
} 
break;
default: 
 /* line 780: */
LXIACTR_terminalerror(666);
break;
} 
 /* line 782: */
 /* line 784: */
 /* line 786: */
NWABCTR_whileod();
} 
else
{ 
 /* line 787: */
FKBBCTR.Value = Answer.Value;
FKBBCTR.End = (&NJBBCTR_endofseries);
 /* line 788: */
FKBBCTR.Type = NJJACTR_voidresult;
A_CALLPROC(NL(PABBCTR_serialclause),(SJBBCTR_loopproperties, FKBBCTR),(SJBBCTR_loopproperties, FKBBCTR,(NL(PABBCTR_serialclause)).nonlocals));
 /* line 789: */
 /* line 790: */
 /* line 791: */
 /* line 792: */
 /* line 793: */
A_CALLPROC(UWABCTR_od,(),((UWABCTR_od).nonlocals));
} 
} 
break;
default: 
 /* line 794: */
 /* line 795: */
LXIACTR_terminalerror(666);
break;
} 
} 
A_PROC_EXIT(loopbody);
return;
} 
#undef NL
 /* line 799: */
 /* line 800: */
 /* line 802: */

A_STATIC A68_VOID  LKBBCTR_loopclause(A68_188  Starter, A68_BOOL  Body, A68_63  Answer, A68_71 ** Frobytlist, void *NonLocals)
#define NL(x) (((MKBBCTR_loopclause *)NonLocals)->x)
{ 
A68_55  NKBBCTR_startofloop;
A68_55 * OKBBCTR_endofloop;
A68_64  PKBBCTR_control;
A68_64  QKBBCTR_step;
A68_194  RKBBCTR;  /* collateral clause result */
A68_BITS  SKBBCTR;  /* ADICOPS - >= */
A68_BITS  TKBBCTR;  /* ADICOPS - >= */
A68_BITS  UKBBCTR;  /* ADICOPS - >= */
A68_BITS  VKBBCTR;  /* ADICOPS - >= */
A68_194  WKBBCTR_loop;
A68_180  XKBBCTR;  /* united object - for case conformity */
A68_156  YKBBCTR_id;
A68_64  ZKBBCTR;  /* collateral clause result */
A68_INT  ALBBCTR;  /* YIELD */
A68_67  BLBBCTR_iden;
A68_INT * CLBBCTR;  /* YIELD */
A68_65  DLBBCTR;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(loopclause);
 /* line 806: */
 /* line 807: */
{ 
NKBBCTR_startofloop = HIAACTR_unsetlabel;
 /* line 808: */
OKBBCTR_endofloop = Answer.End;
 /* line 809: */
PKBBCTR_control = MJJACTR_skipvalue;
 /* line 810: */
QKBBCTR_step = MJJACTR_skipvalue;
 /* line 812: */
 /* line 813: */
RKBBCTR.Control = (&PKBBCTR_control);
 /* line 814: */
RKBBCTR.Step = (&QKBBCTR_step);
 /* line 815: */
SKBBCTR = Starter.Props ;
RKBBCTR.Forpart = A_LB_GE(SKBBCTR,IDAACTR_forpartbit);
 /* line 816: */
TKBBCTR = Starter.Props ;
RKBBCTR.Frompart = A_LB_GE(TKBBCTR,JDAACTR_frompartbit);
 /* line 817: */
UKBBCTR = Starter.Props ;
RKBBCTR.Bypart = A_LB_GE(UKBBCTR,KDAACTR_bypartbit);
 /* line 818: */
VKBBCTR = Starter.Props ;
RKBBCTR.Topart = A_LB_GE(VKBBCTR,LDAACTR_topartbit);
WKBBCTR_loop = RKBBCTR;
 /* line 820: */
 /* line 821: */
if ( (*(&((&WKBBCTR_loop)->Forpart))) )
{ 
A_CALLPROC(NL(JXABCTR_read),(),((NL(JXABCTR_read)).nonlocals));
 /* line 822: */
 /* line 823: */
XKBBCTR = (*NL(FXABCTR_currentimperative)) ;
switch ( XKBBCTR.mode )
{ 
case 11: /* STRUCT(INT,REF MODE26,INT,INT)  */
YKBBCTR_id = (XKBBCTR.data.mode11);
 /* line 824: */
{ 
LSVACTR_iddec(YKBBCTR_id, (A68_71 **)A68_NIL);
 /* line 825: */
 /* line 826: */
 /* line 827: */
ALBBCTR = YKBBCTR_id.Decno ;
ZKBBCTR.Mode = (*(&((&A_R1INDEX(FOKACTR_ids,ALBBCTR))->Mode)));
 /* line 828: */
ZKBBCTR.Info = YIJACTR_defaultinfo;
{ 
 /* line 829: */
CLBBCTR = (&((&BLBBCTR_iden)->Idno)) ;
(*CLBBCTR) = YKBBCTR_id.Decno;
 /* line 830: */
 /* line 831: */
 /* line 832: */
ZKBBCTR.Extra = A_UNITE(DLBBCTR,mode4,4,BLBBCTR_iden);
} 
 /* line 833: */
 /* line 834: */
JEBBCTR_assignment((&PKBBCTR_control), ZKBBCTR);
} 
break;
default: 
 /* line 835: */
 /* line 836: */
LXIACTR_terminalerror(666);
break;
} 
} 
 /* line 838: */
KBABCTR_for((&WKBBCTR_loop), Starter.Resultmode, Frobytlist);
 /* line 839: */
 /* line 840: */
A_CALLPROC(NL(KJBBCTR_loopbody),(Body, Answer),(Body, Answer,(NL(KJBBCTR_loopbody)).nonlocals));
} 
A_PROC_EXIT(loopclause);
return;
} 
#undef NL
 /* line 844: */
 /* line 845: */
 /* line 847: */

A_STATIC A68_VOID  JLBBCTR_forallclause(A68_188  Starter, A68_BOOL  Body, A68_63  Answer, A68_71 ** Foralllist, void *NonLocals)
#define NL(x) (((KLBBCTR_forallclause *)NonLocals)->x)
{ 
A68_55  LLBBCTR_startofloop;
A68_55 * MLBBCTR_endofloop;
A68_INT  NLBBCTR_controlcount;
A68_298  PLBBCTR_generator;   /* proc value of non-global proc */
A68_198  VLBBCTR;  /* avoid structure result */
A68_198  ULBBCTR_controls;
A68_71 ** WLBBCTR_thisforalllist;
A68_195 * XLBBCTR_control;
A68_INT  YLBBCTR;  /* forall loop counter */
A68_180  ZLBBCTR;  /* united object - for case conformity */
A68_156  AMBBCTR_id;
A68_64  BMBBCTR;  /* collateral clause result */
A68_INT  CMBBCTR;  /* YIELD */
A68_67  DMBBCTR_iden;
A68_INT * EMBBCTR;  /* YIELD */
A68_65  FMBBCTR;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(forallclause);
 /* line 851: */
 /* line 852: */
{ 
LLBBCTR_startofloop = HIAACTR_unsetlabel;
 /* line 853: */
MLBBCTR_endofloop = Answer.End;
 /* line 854: */
NLBBCTR_controlcount = Starter.Resultmode;
 /* line 855: */
A_CLOSURE( PLBBCTR_generator, QLBBCTR_generator, RLBBCTR_generator );
(( RLBBCTR_generator * ) ( PLBBCTR_generator.nonlocals )) -> NLBBCTR_controlcount = NLBBCTR_controlcount;
A_CALLPROC(PLBBCTR_generator,(A68_TRUE, &VLBBCTR),(A68_TRUE, &VLBBCTR,(PLBBCTR_generator).nonlocals));
ULBBCTR_controls = VLBBCTR;
 /* line 857: */
WLBBCTR_thisforalllist = Foralllist;
 /* line 859: */
 /* line 860: */
YLBBCTR = ULBBCTR_controls.upb -1;
XLBBCTR_control = ULBBCTR_controls.data;
for (;YLBBCTR-- >= 0;
(XLBBCTR_control++
) )
{
 /* line 861: */
A_CALLPROC(NL(JXABCTR_read),(),((NL(JXABCTR_read)).nonlocals));
 /* line 862: */
 /* line 863: */
ZLBBCTR = (*NL(FXABCTR_currentimperative)) ;
switch ( ZLBBCTR.mode )
{ 
case 11: /* STRUCT(INT,REF MODE26,INT,INT)  */
AMBBCTR_id = (ZLBBCTR.data.mode11);
 /* line 864: */
 /* line 871: */
{ 
LSVACTR_iddec(AMBBCTR_id, WLBBCTR_thisforalllist);
 /* line 872: */
WLBBCTR_thisforalllist = (&((*WLBBCTR_thisforalllist)->Rest));
 /* line 874: */
 /* line 875: */
 /* line 876: */
CMBBCTR = AMBBCTR_id.Decno ;
BMBBCTR.Mode = (*(&((&A_R1INDEX(FOKACTR_ids,CMBBCTR))->Mode)));
 /* line 877: */
BMBBCTR.Info = YIJACTR_defaultinfo;
{ 
 /* line 878: */
EMBBCTR = (&((&DMBBCTR_iden)->Idno)) ;
(*EMBBCTR) = AMBBCTR_id.Decno;
 /* line 879: */
 /* line 880: */
 /* line 881: */
BMBBCTR.Extra = A_UNITE(FMBBCTR,mode4,4,DMBBCTR_iden);
} 
 /* line 882: */
 /* line 883: */
JEBBCTR_assignment((&(XLBBCTR_control->Ident)), BMBBCTR);
} 
break;
default: 
 /* line 884: */
 /* line 885: */
LXIACTR_terminalerror(666);
break;
} 
}
 /* line 887: */
YKABCTR_forall(ULBBCTR_controls, Foralllist);
 /* line 888: */
 /* line 889: */
A_CALLPROC(NL(KJBBCTR_loopbody),(Body, Answer),(Body, Answer,(NL(KJBBCTR_loopbody)).nonlocals));
} 
A_PROC_EXIT(forallclause);
return;
} 
#undef NL

A_STATIC A68_71 * OMBBCTR_assignment(A68_71 * MMBBCTR_anonymous, A68_71  NMBBCTR_anonymous)
{ 
A68_71 ** PMBBCTR;  /* YIELD */
A68_71 * QMBBCTR;  /* clause result */
{ 
JEBBCTR_assignment((&(MMBBCTR_anonymous->Value)), NMBBCTR_anonymous.Value);
PMBBCTR = (&(MMBBCTR_anonymous->Rest)) ;
(*PMBBCTR) = NMBBCTR_anonymous.Rest;
QMBBCTR = MMBBCTR_anonymous;
} 
return( QMBBCTR );
} 
#undef NL

A_STATIC A68_VOID  KZABCTR_generator(A68_BOOL  IZABCTR_anonymous, A68_124  *ReturnedValue, void *NonLocals)
#define NL(x) (((LZABCTR_generator *)NonLocals)->x)
{ 
A68_124  MZABCTR;  /* clause result */
A68_124  NZABCTR;  /* OPERATORS - dynamic generator */
{ 
NZABCTR.upb = 0 ;
( IZABCTR_anonymous? A_VLOC(A68_INT ,NZABCTR): A_VHEAP(A68_INT ,NZABCTR) );
MZABCTR = NZABCTR;
} 
*ReturnedValue = (MZABCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  VZABCTR_generator(A68_BOOL  TZABCTR_anonymous, A68_124  *ReturnedValue, void *NonLocals)
#define NL(x) (((WZABCTR_generator *)NonLocals)->x)
{ 
A68_124  XZABCTR;  /* clause result */
A68_124  YZABCTR;  /* OPERATORS - dynamic generator */
{ 
YZABCTR.upb = NL(HZABCTR_paramcount) ;
( TZABCTR_anonymous? A_VLOC(A68_INT ,YZABCTR): A_VHEAP(A68_INT ,YZABCTR) );
XZABCTR = YZABCTR;
} 
*ReturnedValue = (XZABCTR);
return;
} 
#undef NL
 /* line 369: */
 /* line 370: */
 /* line 372: */

A_STATIC A68_VOID  GCBBCTR_enclosedclause(A68_188  Starter, A68_BOOL  Body, A68_63  Answer, A68_71 * Newvalue, void *NonLocals)
#define NL(x) (((HCBBCTR_enclosedclause *)NonLocals)->x)
{ 
A68_281  MCBBCTR_closedclause;   /* proc value of non-global proc */
A68_281  DDBBCTR_choiceclause;   /* proc value of non-global proc */
A68_288  GGBBCTR_collateralclause;   /* proc value of non-global proc */
A68_76  KJBBCTR_loopbody;   /* proc value of non-global proc */
A68_297  KKBBCTR_loopclause;   /* proc value of non-global proc */
A68_297  ILBBCTR_forallclause;   /* proc value of non-global proc */
A68_55  GMBBCTR_endofclause;
A68_INT  HMBBCTR;  /* ADICOPS - ABS INT */
A68_INT  IMBBCTR_resultmode;
A68_INT  JMBBCTR_type;
A68_71  KMBBCTR;  /* collateral clause result */
A68_65  LMBBCTR;  /* OPERATORS - mode -> union mode */
A68_63  RMBBCTR;  /* collateral clause result */
A68_63  UMBBCTR;  /* collateral clause result */
A68_BITS  VMBBCTR;  /* ADICOPS - >= */
A68_INT  WMBBCTR;  /* ADICOPS - ABS INT */
A68_INT  XMBBCTR;  /* ADICOPS - ABS INT */
A68_INT  YMBBCTR_resultmode;
A68_BOOL  ZMBBCTR_newanswer;
A68_71  ANBBCTR;  /* collateral clause result */
A68_65  BNBBCTR;  /* OPERATORS - mode -> union mode */
A68_63  CNBBCTR;  /* collateral clause result */
A68_63  DNBBCTR;  /* collateral clause result */
A68_71 * ENBBCTR_valuelist;
A68_INT  FNBBCTR;  /* to part of loop */
A68_INT  GNBBCTR;  /* loop control */
A68_71  HNBBCTR;  /* collateral clause result */
A68_65  INBBCTR;  /* OPERATORS - mode -> union mode */
A68_297  JNBBCTR;  /* clause result */
A68_63  KNBBCTR;  /* collateral clause result */
A68_INT  LNBBCTR;  /* ADICOPS - ABS INT */
A68_INT  MNBBCTR_resultmode;
A68_71  NNBBCTR;  /* collateral clause result */
A68_65  ONBBCTR;  /* OPERATORS - mode -> union mode */
A68_63  PNBBCTR;  /* collateral clause result */
A68_63  SNBBCTR;  /* collateral clause result */
A68_INT  TNBBCTR;  /* ADICOPS - ABS INT */
A_PROC_ENTRY(enclosedclause);
 /* line 392: */
 /* line 394: */
{ 
 /* line 395: */
A_CLOSURE( MCBBCTR_closedclause, NCBBCTR_closedclause, OCBBCTR_closedclause );
(( OCBBCTR_closedclause * ) ( MCBBCTR_closedclause.nonlocals )) -> PABBCTR_serialclause = NL(PABBCTR_serialclause);
 /* line 429: */
 /* line 430: */
A_CLOSURE( DDBBCTR_choiceclause, EDBBCTR_choiceclause, FDBBCTR_choiceclause );
(( FDBBCTR_choiceclause * ) ( DDBBCTR_choiceclause.nonlocals )) -> JXABCTR_read = NL(JXABCTR_read);
(( FDBBCTR_choiceclause * ) ( DDBBCTR_choiceclause.nonlocals )) -> FXABCTR_currentimperative = NL(FXABCTR_currentimperative);
(( FDBBCTR_choiceclause * ) ( DDBBCTR_choiceclause.nonlocals )) -> JBBBCTR_enquiryclause = NL(JBBBCTR_enquiryclause);
(( FDBBCTR_choiceclause * ) ( DDBBCTR_choiceclause.nonlocals )) -> PABBCTR_serialclause = NL(PABBCTR_serialclause);
 /* line 618: */
A_CLOSURE( GGBBCTR_collateralclause, HGBBCTR_collateralclause, IGBBCTR_collateralclause );
(( IGBBCTR_collateralclause * ) ( GGBBCTR_collateralclause.nonlocals )) -> XBBBCTR_phrase = NL(XBBBCTR_phrase);
(( IGBBCTR_collateralclause * ) ( GGBBCTR_collateralclause.nonlocals )) -> FXABCTR_currentimperative = NL(FXABCTR_currentimperative);
 /* line 734: */
 /* line 735: */
A_CLOSURE( KJBBCTR_loopbody, LJBBCTR_loopbody, MJBBCTR_loopbody );
(( MJBBCTR_loopbody * ) ( KJBBCTR_loopbody.nonlocals )) -> JXABCTR_read = NL(JXABCTR_read);
(( MJBBCTR_loopbody * ) ( KJBBCTR_loopbody.nonlocals )) -> FXABCTR_currentimperative = NL(FXABCTR_currentimperative);
(( MJBBCTR_loopbody * ) ( KJBBCTR_loopbody.nonlocals )) -> JBBBCTR_enquiryclause = NL(JBBBCTR_enquiryclause);
(( MJBBCTR_loopbody * ) ( KJBBCTR_loopbody.nonlocals )) -> PABBCTR_serialclause = NL(PABBCTR_serialclause);
 /* line 797: */
 /* line 798: */
A_CLOSURE( KKBBCTR_loopclause, LKBBCTR_loopclause, MKBBCTR_loopclause );
(( MKBBCTR_loopclause * ) ( KKBBCTR_loopclause.nonlocals )) -> JXABCTR_read = NL(JXABCTR_read);
(( MKBBCTR_loopclause * ) ( KKBBCTR_loopclause.nonlocals )) -> FXABCTR_currentimperative = NL(FXABCTR_currentimperative);
(( MKBBCTR_loopclause * ) ( KKBBCTR_loopclause.nonlocals )) -> KJBBCTR_loopbody = KJBBCTR_loopbody;
 /* line 842: */
 /* line 843: */
A_CLOSURE( ILBBCTR_forallclause, JLBBCTR_forallclause, KLBBCTR_forallclause );
(( KLBBCTR_forallclause * ) ( ILBBCTR_forallclause.nonlocals )) -> JXABCTR_read = NL(JXABCTR_read);
(( KLBBCTR_forallclause * ) ( ILBBCTR_forallclause.nonlocals )) -> FXABCTR_currentimperative = NL(FXABCTR_currentimperative);
(( KLBBCTR_forallclause * ) ( ILBBCTR_forallclause.nonlocals )) -> KJBBCTR_loopbody = KJBBCTR_loopbody;
 /* line 893: */
GMBBCTR_endofclause = HIAACTR_unsetlabel;
 /* line 895: */
 /* line 896: */
if ( (Starter.Fn==HBAACTR_beginfn) )
{ 
 /* line 897: */
if ( ((Starter.Mode>0)&!Body) )
{ 
HMBBCTR = Starter.Resultmode ;
IMBBCTR_resultmode = A_ABS(HMBBCTR);
 /* line 898: */
JMBBCTR_type = TJJACTR_noparticularresult;
 /* line 900: */
 /* line 901: */
KMBBCTR.Value.Mode = IMBBCTR_resultmode;
KMBBCTR.Value.Info = YIJACTR_defaultinfo;
KMBBCTR.Value.Extra = A_EMPTY(LMBBCTR,3);
KMBBCTR.Rest = (*NL(ACBBCTR_valuestack));
(*NL(ACBBCTR_valuestack)) = OMBBCTR_assignment(Newvalue, KMBBCTR);
 /* line 903: */
 /* line 904: */
 /* line 905: */
 /* line 906: */
 /* line 907: */
RMBBCTR.Value = (&((*NL(ACBBCTR_valuestack))->Value));
 /* line 909: */
RMBBCTR.End = (&GMBBCTR_endofclause);
 /* line 910: */
RMBBCTR.Type = Answer.Type;
 /* line 911: */
 /* line 912: */
A_CALLPROC(MCBBCTR_closedclause,(Starter, Body, RMBBCTR),(Starter, Body, RMBBCTR,(MCBBCTR_closedclause).nonlocals));
} 
else
{ 
PXIACTR_assert(TMBBCTR, (Answer.Type!=SJJACTR_optboolresult));
 /* line 913: */
 /* line 914: */
 /* line 915: */
 /* line 916: */
 /* line 917: */
UMBBCTR.Value = Answer.Value;
 /* line 918: */
 /* line 919: */
if ( (Answer.End==(A68_55 *)A68_NIL) )
{ 
 /* line 920: */
UMBBCTR.End = (&GMBBCTR_endofclause);
} 
else
{ 
 /* line 921: */
UMBBCTR.End = Answer.End;
} 
 /* line 922: */
 /* line 923: */
VMBBCTR = Starter.Props ;
if ( A_LB_GE(VMBBCTR,TCAACTR_exitbit) )
{ 
 /* line 924: */
WMBBCTR = Answer.Type ;
UMBBCTR.Type = A_ABS(WMBBCTR);
} 
else
{ 
 /* line 925: */
 /* line 926: */
UMBBCTR.Type = Answer.Type;
} 
 /* line 927: */
 /* line 928: */
A_CALLPROC(MCBBCTR_closedclause,(Starter, Body, UMBBCTR),(Starter, Body, UMBBCTR,(MCBBCTR_closedclause).nonlocals));
} 
} 
else
{ 
 /* line 929: */
if ( (Starter.Fn==IBAACTR_collbeginfn) )
{ 
XMBBCTR = Starter.Resultmode ;
YMBBCTR_resultmode = A_ABS(XMBBCTR);
 /* line 930: */
ZMBBCTR_newanswer = (Starter.Mode>0);
 /* line 932: */
 /* line 933: */
 /* line 934: */
if ( (ZMBBCTR_newanswer|(Answer.Type==QJJACTR_routineresult)) )
{ 
 /* line 935: */
 /* line 936: */
ANBBCTR.Value.Mode = YMBBCTR_resultmode;
 /* line 938: */
ANBBCTR.Value.Info = YIJACTR_defaultinfo;
 /* line 940: */
ANBBCTR.Value.Extra = A_EMPTY(BNBBCTR,3);
ANBBCTR.Rest = (*NL(ACBBCTR_valuestack));
(*NL(ACBBCTR_valuestack)) = OMBBCTR_assignment(Newvalue, ANBBCTR);
 /* line 941: */
 /* line 942: */
 /* line 943: */
 /* line 944: */
CNBBCTR.Value = (&((*NL(ACBBCTR_valuestack))->Value));
CNBBCTR.End = (A68_55 *)A68_NIL;
 /* line 945: */
CNBBCTR.Type = TJJACTR_noparticularresult;
 /* line 946: */
 /* line 948: */
A_CALLPROC(GGBBCTR_collateralclause,(Starter, CNBBCTR),(Starter, CNBBCTR,(GGBBCTR_collateralclause).nonlocals));
} 
else
{ 
 /* line 949: */
 /* line 950: */
DNBBCTR.Value = Answer.Value;
DNBBCTR.End = (A68_55 *)A68_NIL;
 /* line 951: */
DNBBCTR.Type = TJJACTR_noparticularresult;
 /* line 952: */
 /* line 953: */
A_CALLPROC(GGBBCTR_collateralclause,(Starter, DNBBCTR),(Starter, DNBBCTR,(GGBBCTR_collateralclause).nonlocals));
} 
} 
else
{ 
 /* line 954: */
 /* line 955: */
if ( ((Starter.Fn==JBAACTR_forfn)|(Starter.Fn==KBAACTR_forallfn)) )
{ 
ENBBCTR_valuelist = (*NL(ACBBCTR_valuestack));
 /* line 957: */
 /* line 958: */
FNBBCTR = Starter.Resultmode;
for ( GNBBCTR = 1;
GNBBCTR <= FNBBCTR;
GNBBCTR += 1 )
{ 
 /* line 959: */
(*NL(ACBBCTR_valuestack)) = (*(&((*NL(ACBBCTR_valuestack))->Rest)));
}
 /* line 961: */
 /* line 962: */
HNBBCTR.Value.Mode = UEAACTR_voidmode;
HNBBCTR.Value.Info = YIJACTR_defaultinfo;
HNBBCTR.Value.Extra = A_EMPTY(INBBCTR,3);
HNBBCTR.Rest = (*NL(ACBBCTR_valuestack));
(*NL(ACBBCTR_valuestack)) = OMBBCTR_assignment(Newvalue, HNBBCTR);
 /* line 964: */
 /* line 965: */
 /* line 966: */
if ( (Starter.Fn==JBAACTR_forfn) )
{ 
 /* line 967: */
JNBBCTR = KKBBCTR_loopclause;
} 
else
{ 
JNBBCTR = ILBBCTR_forallclause;
} 
 /* line 968: */
 /* line 969: */
KNBBCTR.Value = (&((*NL(ACBBCTR_valuestack))->Value));
KNBBCTR.End = (&GMBBCTR_endofclause);
KNBBCTR.Type = NJJACTR_voidresult;
 /* line 971: */
 /* line 973: */
 /* line 974: */
A_CALLPROC(JNBBCTR,(Starter, Body, KNBBCTR, (&ENBBCTR_valuelist)),(Starter, Body, KNBBCTR, (&ENBBCTR_valuelist),(JNBBCTR).nonlocals));
} 
else
{ 
 /* line 975: */
 /* line 976: */
if ( ((Starter.Mode>0)&!Body) )
{ 
LNBBCTR = Starter.Resultmode ;
MNBBCTR_resultmode = A_ABS(LNBBCTR);
 /* line 978: */
 /* line 979: */
NNBBCTR.Value.Mode = MNBBCTR_resultmode;
NNBBCTR.Value.Info = YIJACTR_defaultinfo;
NNBBCTR.Value.Extra = A_EMPTY(ONBBCTR,3);
NNBBCTR.Rest = (*NL(ACBBCTR_valuestack));
(*NL(ACBBCTR_valuestack)) = OMBBCTR_assignment(Newvalue, NNBBCTR);
 /* line 981: */
 /* line 982: */
 /* line 983: */
 /* line 984: */
 /* line 985: */
PNBBCTR.Value = (&((*NL(ACBBCTR_valuestack))->Value));
 /* line 987: */
PNBBCTR.End = (&GMBBCTR_endofclause);
 /* line 988: */
PNBBCTR.Type = OJJACTR_memoryresult;
 /* line 989: */
 /* line 990: */
A_CALLPROC(DDBBCTR_choiceclause,(Starter, Body, PNBBCTR),(Starter, Body, PNBBCTR,(DDBBCTR_choiceclause).nonlocals));
} 
else
{ 
PXIACTR_assert(RNBBCTR, (Answer.Type!=SJJACTR_optboolresult));
 /* line 991: */
 /* line 992: */
 /* line 993: */
 /* line 994: */
 /* line 995: */
SNBBCTR.Value = Answer.Value;
 /* line 996: */
 /* line 997: */
if ( (Answer.End==(A68_55 *)A68_NIL) )
{ 
 /* line 998: */
SNBBCTR.End = (&GMBBCTR_endofclause);
} 
else
{ 
 /* line 1000: */
SNBBCTR.End = Answer.End;
} 
 /* line 1001: */
TNBBCTR = Answer.Type ;
SNBBCTR.Type = A_ABS(TNBBCTR);
 /* line 1002: */
 /* line 1003: */
A_CALLPROC(DDBBCTR_choiceclause,(Starter, Body, SNBBCTR),(Starter, Body, SNBBCTR,(DDBBCTR_choiceclause).nonlocals));
} 
} 
} 
} 
} 
A_PROC_EXIT(enclosedclause);
return;
} 
#undef NL

A_STATIC A68_VOID  WNBBCTR_optboolexpression(A68_INT  Warn, void *NonLocals)
#define NL(x) (((XNBBCTR_optboolexpression *)NonLocals)->x)
{ 
A68_64 * YNBBCTR_operand;
A68_BOOL  ZNBBCTR_orel;
A68_63  AOBBCTR;  /* collateral clause result */
A_PROC_ENTRY(optboolexpression);
 /* line 1009: */
 /* line 1010: */
{ 
YNBBCTR_operand = (&((*NL(ACBBCTR_valuestack))->Value));
 /* line 1011: */
ZNBBCTR_orel = (Warn==KCAACTR_orelwarn);
 /* line 1012: */
FMZACTR_optboolwarning(ZNBBCTR_orel, YNBBCTR_operand);
 /* line 1014: */
 /* line 1015: */
 /* line 1016: */
AOBBCTR.Value = YNBBCTR_operand;
AOBBCTR.End = (A68_55 *)A68_NIL;
AOBBCTR.Type = TJJACTR_noparticularresult;
 /* line 1017: */
 /* line 1018: */
A_CALLPROC(NL(XBBBCTR_phrase),(A68_FALSE, AOBBCTR, A68_FALSE),(A68_FALSE, AOBBCTR, A68_FALSE,(NL(XBBBCTR_phrase)).nonlocals));
 /* line 1019: */
 /* line 1020: */
YNZACTR_optbooloper();
} 
A_PROC_EXIT(optboolexpression);
return;
} 
#undef NL

A_STATIC A68_VOID  FYABCTR_skiproutine(void *NonLocals)
#define NL(x) (((GYABCTR_skiproutine *)NonLocals)->x)
{ 
A68_180  HYABCTR;  /* united object - for case conformity */
A68_BOOL  IYABCTR;  /* clause result */
A68_189  JYABCTR_t;
A68_BOOL  KYABCTR;  /* clause result */
A_PROC_ENTRY(skiproutine);
for ( ;; )
{ 
A_CALLPROC(NL(JXABCTR_read),(),((NL(JXABCTR_read)).nonlocals));
 /* line 133: */
 /* line 134: */
HYABCTR = (*NL(FXABCTR_currentimperative)) ;
switch ( HYABCTR.mode )
{ 
case 12: /* STRUCT(REF MODE26,BITS,INT,INT,INT)  */
{ 
A_CALLPROC(NL(EYABCTR_skiproutine),(),((NL(EYABCTR_skiproutine)).nonlocals));
 /* line 135: */
IYABCTR = A68_TRUE;
} 
break;
case 22: /* STRUCT(INT,BITS)  */
JYABCTR_t = (HYABCTR.data.mode22);
 /* line 136: */
IYABCTR = (JYABCTR_t.Fn!=GCAACTR_routinendfn);
break;
default: 
 /* line 137: */
 /* line 138: */
IYABCTR = A68_TRUE;
break;
} 
 /* line 140: */
KYABCTR = IYABCTR;
if ( !KYABCTR ) break;
/*SKIP*/;
}
A_PROC_EXIT(skiproutine);
return;
} 
#undef NL

A_STATIC A68_VOID  NYABCTR_routine(A68_122  Routine, void *NonLocals)
#define NL(x) (((OYABCTR_routine *)NonLocals)->x)
{ 
A68_INT  QYABCTR;  /* YIELD */
A68_123  PYABCTR_environ;
A68_180  RYABCTR;  /* united object - for case conformity */
A68_164  SYABCTR_label;
A68_123  TYABCTR;  /* avoid structure result */
A68_123  UYABCTR_labelenviron;
A68_BOOL  VYABCTR;  /* clause result */
A68_122  WYABCTR_r;
A68_BOOL  BZABCTR;  /* clause result */
A68_INT  CZABCTR_resulttype;
A68_64  DZABCTR_result;
A68_55 * EZABCTR_endofroutine;
A68_199  FZABCTR;  /* avoid structure result */
A68_199  GZABCTR_proc;
A68_INT  HZABCTR_paramcount;
A68_272  JZABCTR_generator;   /* proc value of non-global proc */
A68_124  OZABCTR;  /* avoid structure result */
A68_124  PZABCTR_nulllist;
A68_124  QZABCTR_parammodes;
A68_124  RZABCTR_paramdecnos;
A68_124  SZABCTR;  /* avoid structure result */
A68_272  UZABCTR_generator;   /* proc value of non-global proc */
A68_124  ZZABCTR;  /* avoid structure result */
A68_INT  AABBCTR_i;
A68_INT  BABBCTR;  /* to part of loop */
A68_180  CABBCTR;  /* united object - for case conformity */
A68_156  DABBCTR_id;
A68_INT * IABBCTR;  /* YIELD */
A68_63  LABBCTR;  /* collateral clause result */
A68_BITS  MABBCTR;  /* ADICOPS - >= */
A_PROC_ENTRY(routine);
 /* line 147: */
 /* line 148: */
{ 
QYABCTR = Routine.Maxname ;
PYABCTR_environ = (*(&((&A_R1INDEX(FOKACTR_ids,QYABCTR))->Environ)));
 /* line 150: */
for ( ;; )
{ 
A_CALLPROC(NL(PXABCTR_lookahead),(),((NL(PXABCTR_lookahead)).nonlocals));
 /* line 151: */
 /* line 152: */
RYABCTR = (*NL(HXABCTR_nextimperative)) ;
switch ( RYABCTR.mode )
{ 
case 14: /* STRUCT(REF MODE26,INT,INT,BOOL)  */
SYABCTR_label = (RYABCTR.data.mode14);
 /* line 153: */
 /* line 154: */
{ 
ZNWACTR_labdec(SYABCTR_label);
 /* line 155: */
 /* line 156: */
OUWACTR_environoflabel( SYABCTR_label.Labno, &TYABCTR );
UYABCTR_labelenviron = TYABCTR;
 /* line 157: */
 /* line 158: */
if ( CQLACTR_isnewerthan(UYABCTR_labelenviron, PYABCTR_environ) )
{ 
 /* line 159: */
PYABCTR_environ = UYABCTR_labelenviron;
} 
 /* line 160: */
A_CALLPROC(NL(JXABCTR_read),(),((NL(JXABCTR_read)).nonlocals));
 /* line 161: */
 /* line 163: */
VYABCTR = A68_TRUE;
} 
break;
case 12: /* STRUCT(REF MODE26,BITS,INT,INT,INT)  */
WYABCTR_r = (RYABCTR.data.mode12);
 /* line 164: */
 /* line 165: */
 /* line 167: */
if ( (RMMACTR_modetype(Routine.Mode)==GEAACTR_procp) )
{ 
PXIACTR_assert(AZABCTR, A_VC_EQ(WYABCTR_r.Name,ZYABCTR));
 /* line 168: */
A_CALLPROC(NL(JXABCTR_read),(),((NL(JXABCTR_read)).nonlocals));
 /* line 169: */
A_CALLPROC(NL(EYABCTR_skiproutine),(),((NL(EYABCTR_skiproutine)).nonlocals));
 /* line 170: */
 /* line 171: */
VYABCTR = A68_TRUE;
} 
else
{ 
 /* line 172: */
 /* line 173: */
VYABCTR = A68_FALSE;
} 
break;
default: 
 /* line 174: */
 /* line 175: */
VYABCTR = A68_FALSE;
break;
} 
 /* line 177: */
BZABCTR = VYABCTR;
if ( !BZABCTR ) break;
/*SKIP*/;
}
 /* line 179: */
CZABCTR_resulttype = QJJACTR_routineresult;
 /* line 180: */
 /* line 181: */
 /* line 183: */
HQLACTR_startnewlevel(Routine.Rdenno);
 /* line 185: */
BSMACTR_procinfo( Routine.Mode, &FZABCTR );
GZABCTR_proc = FZABCTR;
 /* line 186: */
HZABCTR_paramcount = GZABCTR_proc.Parameters;
 /* line 187: */
A_CLOSURE( JZABCTR_generator, KZABCTR_generator, LZABCTR_generator );
A_CALLPROC(JZABCTR_generator,(A68_FALSE, &OZABCTR),(A68_FALSE, &OZABCTR,(JZABCTR_generator).nonlocals));
PZABCTR_nulllist = OZABCTR;
 /* line 188: */
 /* line 189: */
 /* line 191: */
 /* line 192: */
 /* line 193: */
if ( (HZABCTR_paramcount>0) )
{ 
A_CALLPROC(JUMACTR_parameters,(Routine.Mode, &SZABCTR),(Routine.Mode, &SZABCTR,(JUMACTR_parameters).nonlocals));
QZABCTR_parammodes = SZABCTR;
 /* line 194: */
A_CLOSURE( UZABCTR_generator, VZABCTR_generator, WZABCTR_generator );
(( WZABCTR_generator * ) ( UZABCTR_generator.nonlocals )) -> HZABCTR_paramcount = HZABCTR_paramcount;
A_CALLPROC(UZABCTR_generator,(A68_FALSE, &ZZABCTR),(A68_FALSE, &ZZABCTR,(UZABCTR_generator).nonlocals));
RZABCTR_paramdecnos = ZZABCTR;
 /* line 195: */
 /* line 196: */
BABBCTR = HZABCTR_paramcount;
for ( AABBCTR_i = 1;
AABBCTR_i <= BABBCTR;
AABBCTR_i += 1 )
{ 
 /* line 197: */
A_CALLPROC(NL(JXABCTR_read),(),((NL(JXABCTR_read)).nonlocals));
 /* line 198: */
 /* line 199: */
CABBCTR = (*NL(FXABCTR_currentimperative)) ;
switch ( CABBCTR.mode )
{ 
case 11: /* STRUCT(INT,REF MODE26,INT,INT)  */
DABBCTR_id = (CABBCTR.data.mode11);
 /* line 200: */
 /* line 201: */
{ 
 /* line 202: */
PXIACTR_assert(FABBCTR, (DABBCTR_id.Type==3));
 /* line 203: */
 /* line 204: */
PXIACTR_assert(HABBCTR, (QANACTR_finddeflexmode(DABBCTR_id.Mode)==QANACTR_finddeflexmode((*(&A_VINDEX(QZABCTR_parammodes,AABBCTR_i))))));
 /* line 205: */
IABBCTR = (&A_VINDEX(RZABCTR_paramdecnos,AABBCTR_i)) ;
(*IABBCTR) = DABBCTR_id.Decno;
 /* line 206: */
 /* line 207: */
 /* line 208: */
 /* line 210: */
LSVACTR_iddec(DABBCTR_id, (A68_71 **)A68_NIL);
} 
break;
default: 
 /* line 211: */
 /* line 212: */
PXIACTR_assert(KABBCTR, A68_FALSE);
break;
} 
}
 /* line 213: */
 /* line 214: */
} 
else
{ 
 /* line 215: */
RZABCTR_paramdecnos = PZABCTR_nulllist;
} 
 /* line 217: */
 /* line 218: */
 /* line 219: */
 /* line 220: */
 /* line 221: */
 /* line 223: */
BLYACTR_startroutine(Routine, PYABCTR_environ, RZABCTR_paramdecnos, GZABCTR_proc.Result, (&DZABCTR_result));
 /* line 228: */
 /* line 229: */
 /* line 230: */
LABBCTR.Value = (&DZABCTR_result);
LABBCTR.End = EZABCTR_endofroutine;
LABBCTR.Type = CZABCTR_resulttype;
 /* line 231: */
 /* line 232: */
MABBCTR = Routine.Props ;
A_CALLPROC((*NL(DYABCTR_phrase_)),(A_LB_GE(MABBCTR,NCAACTR_ccbit), LABBCTR, A68_FALSE),(A_LB_GE(MABBCTR,NCAACTR_ccbit), LABBCTR, A68_FALSE,((*NL(DYABCTR_phrase_))).nonlocals));
 /* line 235: */
ULYACTR_endroutine(Routine, (&DZABCTR_result));
 /* line 236: */
 /* line 237: */
A_CALLPROC(KQLACTR_reverttopreviouslevel,(),((KQLACTR_reverttopreviouslevel).nonlocals));
} 
A_PROC_EXIT(routine);
return;
} 
#undef NL

A_STATIC A68_VOID  QABBCTR_serialclause(A68_59  Properties, A68_63  Answer, void *NonLocals)
#define NL(x) (((RABBCTR_serialclause *)NonLocals)->x)
{ 
A68_55 * SABBCTR_endofseries;
A68_BOOL  TABBCTR_discardlevelactivated;
A68_BOOL  UABBCTR_firstexit;
A68_63  VABBCTR;  /* collateral clause result */
A68_63  WABBCTR_seriesanswer;
A68_180  XABBCTR;  /* united object - for case conformity */
A68_187  YABBCTR_s;
A68_BITS  ZABBCTR;  /* ADICOPS - >= */
A68_BOOL  ABBBCTR_dontpullbitset;
A68_BOOL  BBBBCTR;  /* clause result */
A68_189  EBBBCTR_t;
A68_59  FBBBCTR;  /* collateral clause result */
A68_BITS  GBBBCTR;  /* ADICOPS - >= */
A68_BOOL  HBBBCTR;  /* clause result */
A_PROC_ENTRY(serialclause);
 /* line 246: */
 /* line 247: */
{ 
SABBCTR_endofseries = Answer.End;
 /* line 248: */
TABBCTR_discardlevelactivated = A68_FALSE;
 /* line 249: */
UABBCTR_firstexit = A68_TRUE;
 /* line 251: */
 /* line 252: */
 /* line 253: */
 /* line 255: */
A_CALLPROC(EOZACTR_startseries,(Properties, (&SABBCTR_endofseries), (&TABBCTR_discardlevelactivated)),(Properties, (&SABBCTR_endofseries), (&TABBCTR_discardlevelactivated),(EOZACTR_startseries).nonlocals));
 /* line 257: */
 /* line 258: */
VABBCTR.Value = Answer.Value;
VABBCTR.End = SABBCTR_endofseries;
VABBCTR.Type = Answer.Type;
WABBCTR_seriesanswer = VABBCTR;
 /* line 260: */
for ( ;; )
{ 
A_CALLPROC((*NL(DYABCTR_phrase_)),(A68_FALSE, WABBCTR_seriesanswer, A68_FALSE),(A68_FALSE, WABBCTR_seriesanswer, A68_FALSE,((*NL(DYABCTR_phrase_))).nonlocals));
 /* line 262: */
 /* line 263: */
XABBCTR = (*NL(FXABCTR_currentimperative)) ;
switch ( XABBCTR.mode )
{ 
case 20: /* STRUCT(INT,INT,BITS,INT)  */
YABBCTR_s = (XABBCTR.data.mode20);
 /* line 264: */
 /* line 266: */
{ 
ZABBCTR = YABBCTR_s.Props ;
ABBBCTR_dontpullbitset = A_LB_GE(ZABBCTR,BDAACTR_dontpullbit);
 /* line 267: */
 /* line 268: */
 /* line 269: */
if ( (YABBCTR_s.Fn==WBAACTR_semifn) )
{ 
 /* line 271: */
POZACTR_semi(((A68_BITS )(YABBCTR_s.Props&MDAACTR_dybits)!=0X0U), ABBBCTR_dontpullbitset);
 /* line 272: */
 /* line 273: */
BBBBCTR = A68_TRUE;
} 
else
{ 
 /* line 274: */
 /* line 275: */
if ( (YABBCTR_s.Fn==RBAACTR_exitfn) )
{ 
PXIACTR_assert(DBBBCTR, (Answer.End!=(A68_55 *)A68_NIL));
 /* line 276: */
 /* line 277: */
 /* line 278: */
 /* line 280: */
TOZACTR_exit(ABBBCTR_dontpullbitset, UABBCTR_firstexit, WABBCTR_seriesanswer);
 /* line 281: */
UABBCTR_firstexit = A68_FALSE;
 /* line 282: */
 /* line 283: */
 /* line 284: */
BBBBCTR = A68_TRUE;
} 
else
{ 
 /* line 285: */
 /* line 286: */
 /* line 287: */
 /* line 288: */
 /* line 290: */
MOZACTR_endseries(Properties, Answer, SABBCTR_endofseries, TABBCTR_discardlevelactivated, ABBBCTR_dontpullbitset, !UABBCTR_firstexit);
 /* line 291: */
 /* line 292: */
 /* line 293: */
 /* line 295: */
BBBBCTR = A68_FALSE;
} 
} 
} 
break;
case 22: /* STRUCT(INT,BITS)  */
EBBBCTR_t = (XABBCTR.data.mode22);
 /* line 296: */
 /* line 298: */
{ 
 /* line 299: */
FBBBCTR.Block = Properties.Block;
 /* line 300: */
FBBBCTR.Dynamicresult = Properties.Dynamicresult;
 /* line 301: */
FBBBCTR.Discardeddynamicresult = Properties.Discardeddynamicresult;
 /* line 302: */
FBBBCTR.Type = (EBBBCTR_t.Fn+ZBAACTR_terminatoroffset);
 /* line 303: */
 /* line 304: */
 /* line 305: */
 /* line 306: */
 /* line 308: */
GBBBCTR = ~EBBBCTR_t.Props ;
MOZACTR_endseries(FBBBCTR, Answer, SABBCTR_endofseries, TABBCTR_discardlevelactivated, A_LB_GE(GBBBCTR,BDAACTR_dontpullbit), !UABBCTR_firstexit);
 /* line 309: */
 /* line 310: */
 /* line 311: */
 /* line 312: */
BBBBCTR = A68_FALSE;
} 
break;
default: 
LXIACTR_terminalerror(656);
 /* line 313: */
 /* line 314: */
 /* line 315: */
BBBBCTR = A68_FALSE;
break;
} 
 /* line 317: */
HBBBCTR = BBBBCTR;
if ( !HBBBCTR ) break;
/*SKIP*/;
}
 /* line 318: */
} 
A_PROC_EXIT(serialclause);
return;
} 
#undef NL

A_STATIC A68_VOID  KBBBCTR_enquiryclause(A68_63  Answer, void *NonLocals)
#define NL(x) (((LBBBCTR_enquiryclause *)NonLocals)->x)
{ 
A68_BOOL  MBBBCTR_simple;
A68_180  NBBBCTR;  /* united object - for case conformity */
A68_187  OBBBCTR_s;
A68_BITS  PBBBCTR;  /* ADICOPS - >= */
A68_BOOL  QBBBCTR;  /* clause result */
A68_BOOL  TBBBCTR;  /* clause result */
A_PROC_ENTRY(enquiryclause);
 /* line 330: */
 /* line 331: */
{ 
MBBBCTR_simple = A68_TRUE;
 /* line 332: */
for ( ;; )
{ 
A_CALLPROC((*NL(DYABCTR_phrase_)),(A68_FALSE, Answer, MBBBCTR_simple),(A68_FALSE, Answer, MBBBCTR_simple,((*NL(DYABCTR_phrase_))).nonlocals));
 /* line 333: */
 /* line 334: */
NBBBCTR = (*NL(FXABCTR_currentimperative)) ;
switch ( NBBBCTR.mode )
{ 
case 20: /* STRUCT(INT,INT,BITS,INT)  */
OBBBCTR_s = (NBBBCTR.data.mode20);
 /* line 335: */
 /* line 336: */
 /* line 337: */
if ( (OBBBCTR_s.Fn==WBAACTR_semifn) )
{ 
 /* line 338: */
 /* line 339: */
PBBBCTR = OBBBCTR_s.Props ;
POZACTR_semi(((A68_BITS )(OBBBCTR_s.Props&MDAACTR_dybits)!=0X0U), A_LB_GE(PBBBCTR,BDAACTR_dontpullbit));
 /* line 340: */
 /* line 341: */
 /* line 342: */
QBBBCTR = A68_TRUE;
} 
else
{ 
PXIACTR_assert(SBBBCTR, (OBBBCTR_s.Fn!=RBAACTR_exitfn));
 /* line 343: */
 /* line 344: */
 /* line 345: */
QBBBCTR = A68_FALSE;
} 
break;
default: 
 /* line 346: */
 /* line 347: */
QBBBCTR = A68_FALSE;
break;
} 
 /* line 348: */
TBBBCTR = QBBBCTR;
if ( !TBBBCTR ) break;
MBBBCTR_simple = A68_FALSE;
 /* line 349: */
 /* line 350: */
/*SKIP*/;
}
 /* line 351: */
} 
A_PROC_EXIT(enquiryclause);
return;
} 
#undef NL

A_STATIC A68_VOID  YBBBCTR_phrase(A68_BOOL  Body, A68_63  Answer, A68_BOOL  Simple, void *NonLocals)
#define NL(x) (((ZBBBCTR_phrase *)NonLocals)->x)
{ 
A68_71 * ACBBCTR_valuestack;
A68_280  FCBBCTR_enclosedclause;   /* proc value of non-global proc */
A68_77  VNBBCTR_optboolexpression;   /* proc value of non-global proc */
A68_BOOL  BOBBCTR_simpleenquiry;
A68_180  COBBCTR;  /* united object - for case conformity */
A68_191  DOBBCTR_p;
A68_191  EOBBCTR;  /* united object - for case conformity */
A68_190  FOBBCTR_l;
A68_71  GOBBCTR;  /* collateral clause result */
A68_64  HOBBCTR;  /* avoid structure result */
A68_184  IOBBCTR_op;
A68_156  JOBBCTR_id;
A68_172  KOBBCTR_c;
A68_71 * LOBBCTR_visible;
A68_INT  MOBBCTR_i;
A68_INT  NOBBCTR;  /* to part of loop */
A68_71  OOBBCTR;  /* collateral clause result */
A68_68  POBBCTR;  /* avoid structure result */
A68_68  QOBBCTR_temp;
A68_71  ROBBCTR;  /* collateral clause result */
A68_65  SOBBCTR;  /* OPERATORS - mode -> union mode */
A68_177  TOBBCTR_format;
A68_71  UOBBCTR;  /* collateral clause result */
A68_183  VOBBCTR;  /* collateral clause result */
A68_190  WOBBCTR;  /* OPERATORS - mode -> union mode */
A68_64  XOBBCTR;  /* avoid structure result */
A68_71  YOBBCTR;  /* collateral clause result */
A68_182  ZOBBCTR;  /* collateral clause result */
A68_190  APBBCTR;  /* OPERATORS - mode -> union mode */
A68_64  BPBBCTR;  /* avoid structure result */
A68_184  CPBBCTR;  /* collateral clause result */
A68_122  DPBBCTR_r;
A68_122  EPBBCTR_savedr;
A68_BITS  FPBBCTR;  /* ADICOPS - >= */
A68_71  GPBBCTR;  /* collateral clause result */
A68_190  HPBBCTR;  /* OPERATORS - mode -> union mode */
A68_INT  IPBBCTR;  /* YIELD */
A68_64  JPBBCTR;  /* avoid structure result */
A68_185  KPBBCTR_w;
A68_164  LPBBCTR_l;
A68_79  MPBBCTR_u;
A68_169  NPBBCTR_c;
A68_BOOL  QPBBCTR;  /* clause result */
A68_187  RPBBCTR_s;
A68_BOOL  UPBBCTR;  /* optbool result */
A68_188  VPBBCTR_s;
A68_BOOL  YPBBCTR;  /* clause result */
A_PROC_ENTRY(phrase);
 /* line 364: */
 /* line 365: */
{ 
ACBBCTR_valuestack = (A68_71 *)A68_NIL;
 /* line 367: */
 /* line 368: */
A_CLOSURE( FCBBCTR_enclosedclause, GCBBCTR_enclosedclause, HCBBCTR_enclosedclause );
(( HCBBCTR_enclosedclause * ) ( FCBBCTR_enclosedclause.nonlocals )) -> PABBCTR_serialclause = NL(PABBCTR_serialclause);
(( HCBBCTR_enclosedclause * ) ( FCBBCTR_enclosedclause.nonlocals )) -> JXABCTR_read = NL(JXABCTR_read);
(( HCBBCTR_enclosedclause * ) ( FCBBCTR_enclosedclause.nonlocals )) -> FXABCTR_currentimperative = NL(FXABCTR_currentimperative);
(( HCBBCTR_enclosedclause * ) ( FCBBCTR_enclosedclause.nonlocals )) -> JBBBCTR_enquiryclause = NL(JBBBCTR_enquiryclause);
(( HCBBCTR_enclosedclause * ) ( FCBBCTR_enclosedclause.nonlocals )) -> XBBBCTR_phrase = NL(XBBBCTR_phrase);
(( HCBBCTR_enclosedclause * ) ( FCBBCTR_enclosedclause.nonlocals )) -> ACBBCTR_valuestack = (&ACBBCTR_valuestack);
 /* line 1005: */
A_CLOSURE( VNBBCTR_optboolexpression, WNBBCTR_optboolexpression, XNBBCTR_optboolexpression );
(( XNBBCTR_optboolexpression * ) ( VNBBCTR_optboolexpression.nonlocals )) -> ACBBCTR_valuestack = (&ACBBCTR_valuestack);
(( XNBBCTR_optboolexpression * ) ( VNBBCTR_optboolexpression.nonlocals )) -> XBBBCTR_phrase = NL(XBBBCTR_phrase);
 /* line 1024: */
BOBBCTR_simpleenquiry = Simple;
 /* line 1025: */
for ( ;; )
{ 
A_CALLPROC(NL(JXABCTR_read),(),((NL(JXABCTR_read)).nonlocals));
 /* line 1026: */
 /* line 1027: */
COBBCTR = (*NL(FXABCTR_currentimperative)) ;
switch ( COBBCTR.mode )
{ 
case 1: /* STRUCT(INT)  */
case 2: /* INT */
case 3: /* BOOL */
case 4: /* STRUCT(REF MODE26)  */
case 5: /* STRUCT(INT)  */
case 6: /* STRUCT(INT,REF MODE26)  */
case 7: /* STRUCT(INT,REF MODE26)  */
case 8: /* STRUCT(INT,LONG BITS)  */
case 9: /* STRUCT(INT,REF MODE26)  */
case 10: /* STRUCT(INT,INT,INT)  */
case 11: /* STRUCT(INT,REF MODE26,INT,INT)  */
case 12: /* STRUCT(REF MODE26,BITS,INT,INT,INT)  */
case 13: /* STRUCT(INT)  */
case 14: /* STRUCT(REF MODE26,INT,INT,BOOL)  */
case 15: /* STRUCT(INT,BITS,INT)  */
case 16: /* STRUCT(INT)  */
case 17: /* STRUCT(BOOL)  */
case 18: /* STRUCT(MODE178,REF MODE26)  */
case 19: /* STRUCT(INT,INT,REF MODE26)  */
A_UNCPY(DOBBCTR_p,COBBCTR);
 /* line 1028: */
{ 
 /* line 1029: */
EOBBCTR = DOBBCTR_p ;
switch ( EOBBCTR.mode )
{ 
case 1: /* STRUCT(INT)  */
case 2: /* INT */
case 3: /* BOOL */
case 4: /* STRUCT(REF MODE26)  */
case 5: /* STRUCT(INT)  */
case 6: /* STRUCT(INT,REF MODE26)  */
case 7: /* STRUCT(INT,REF MODE26)  */
case 8: /* STRUCT(INT,LONG BITS)  */
case 9: /* STRUCT(INT,REF MODE26)  */
A_UNCPY(FOBBCTR_l,EOBBCTR);
 /* line 1030: */
 /* line 1031: */
HUZACTR_load( FOBBCTR_l, &HOBBCTR );
GOBBCTR.Value = HOBBCTR;
GOBBCTR.Rest = ACBBCTR_valuestack;
 /* line 1032: */
ACBBCTR_valuestack = OMBBCTR_assignment(A_LOC(A68_71 ), GOBBCTR);
break;
case 10: /* STRUCT(INT,INT,INT)  */
IOBBCTR_op = (EOBBCTR.data.mode10);
 /* line 1033: */
 /* line 1034: */
VOQACTR_oper(IOBBCTR_op, (&ACBBCTR_valuestack), A_LOC(A68_71 ));
break;
case 11: /* STRUCT(INT,REF MODE26,INT,INT)  */
JOBBCTR_id = (EOBBCTR.data.mode11);
 /* line 1035: */
 /* line 1037: */
LSVACTR_iddec(JOBBCTR_id, (&ACBBCTR_valuestack));
break;
case 19: /* STRUCT(INT,INT,REF MODE26)  */
KOBBCTR_c = (EOBBCTR.data.mode19);
 /* line 1038: */
 /* line 1039: */
{ 
LOBBCTR_visible = VIJACTR_nilvaluelist;
 /* line 1040: */
 /* line 1041: */
NOBBCTR = KOBBCTR_c.Number;
for ( MOBBCTR_i = 1;
MOBBCTR_i <= NOBBCTR;
MOBBCTR_i += 1 )
{ 
 /* line 1042: */
OOBBCTR.Value = (*(&(ACBBCTR_valuestack->Value)));
OOBBCTR.Rest = LOBBCTR_visible;
LOBBCTR_visible = OMBBCTR_assignment(A_LOC(A68_71 ), OOBBCTR);
 /* line 1043: */
 /* line 1044: */
ACBBCTR_valuestack = (*(&(ACBBCTR_valuestack->Rest)));
}
 /* line 1045: */
 /* line 1046: */
MPZACTR_codeinsert( KOBBCTR_c.Insert, KOBBCTR_c.Mode, LOBBCTR_visible, &POBBCTR );
QOBBCTR_temp = POBBCTR;
 /* line 1047: */
 /* line 1048: */
if ( (KOBBCTR_c.Mode!=UEAACTR_voidmode) )
{ 
 /* line 1049: */
ROBBCTR.Value.Mode = KOBBCTR_c.Mode;
ROBBCTR.Value.Info = YIJACTR_defaultinfo;
ROBBCTR.Value.Extra = A_UNITE(SOBBCTR,mode5,5,QOBBCTR_temp);
 /* line 1050: */
ROBBCTR.Rest = ACBBCTR_valuestack;
 /* line 1051: */
 /* line 1052: */
ACBBCTR_valuestack = OMBBCTR_assignment(A_LOC(A68_71 ), ROBBCTR);
} 
} 
break;
case 18: /* STRUCT(MODE178,REF MODE26)  */
TOBBCTR_format = (EOBBCTR.data.mode18);
 /* line 1053: */
 /* line 1054: */
{ 
 /* line 1055: */
 /* line 1056: */
 /* line 1057: */
 /* line 1058: */
VOBBCTR.Mode = YEAACTR_formatmode;
 /* line 1059: */
VOBBCTR.Denotation = TOBBCTR_format.Text;
 /* line 1060: */
HUZACTR_load( A_UNITE(WOBBCTR,mode9,9,VOBBCTR), &XOBBCTR );
UOBBCTR.Value = XOBBCTR;
 /* line 1061: */
 /* line 1062: */
 /* line 1063: */
ZOBBCTR.Mode = EFAACTR_intmode;
 /* line 1064: */
 /* line 1065: */
ZOBBCTR.Denotation = (A68_LBITS )(A68_BITS )TOBBCTR_format.Info.W;
 /* line 1067: */
HUZACTR_load( A_UNITE(APBBCTR,mode8,8,ZOBBCTR), &BPBBCTR );
YOBBCTR.Value = BPBBCTR;
 /* line 1068: */
YOBBCTR.Rest = ACBBCTR_valuestack;
UOBBCTR.Rest = OMBBCTR_assignment(A_LOC(A68_71 ), YOBBCTR);
ACBBCTR_valuestack = OMBBCTR_assignment(A_LOC(A68_71 ), UOBBCTR);
 /* line 1070: */
 /* line 1071: */
 /* line 1072: */
 /* line 1073: */
CPBBCTR.Fn = QGAACTR_formatfn;
 /* line 1075: */
CPBBCTR.Mode = YEAACTR_formatmode;
CPBBCTR.Param = TOBBCTR_format.Info.Nocases;
 /* line 1076: */
 /* line 1078: */
 /* line 1079: */
 /* line 1081: */
VOQACTR_oper(CPBBCTR, (&ACBBCTR_valuestack), A_LOC(A68_71 ));
} 
break;
case 12: /* STRUCT(REF MODE26,BITS,INT,INT,INT)  */
DPBBCTR_r = (EOBBCTR.data.mode12);
 /* line 1092: */
 /* line 1093: */
{ 
EPBBCTR_savedr = DPBBCTR_r;
 /* line 1094: */
A_CALLPROC(NL(MYABCTR_routine),(DPBBCTR_r),(DPBBCTR_r,(NL(MYABCTR_routine)).nonlocals));
 /* line 1095: */
 /* line 1096: */
FPBBCTR = (*(&((&EPBBCTR_savedr)->Props))) ;
if ( A_LB_GE(FPBBCTR,PCAACTR_valbit) )
{ 
 /* line 1097: */
IPBBCTR = (*(&((&EPBBCTR_savedr)->Rdenno))) ;
HUZACTR_load( A_UNITE(HPBBCTR,mode2,2,IPBBCTR), &JPBBCTR );
GPBBCTR.Value = JPBBCTR;
 /* line 1098: */
GPBBCTR.Rest = ACBBCTR_valuestack;
 /* line 1099: */
 /* line 1101: */
ACBBCTR_valuestack = OMBBCTR_assignment(A_LOC(A68_71 ), GPBBCTR);
} 
} 
break;
case 13: /* STRUCT(INT)  */
KPBBCTR_w = (EOBBCTR.data.mode13);
 /* line 1102: */
 /* line 1103: */
 /* line 1104: */
if ( ((KPBBCTR_w.W==KCAACTR_orelwarn)|(KPBBCTR_w.W==JCAACTR_andthwarn)) )
{ 
 /* line 1105: */
 /* line 1107: */
A_CALLPROC(VNBBCTR_optboolexpression,(KPBBCTR_w.W),(KPBBCTR_w.W,(VNBBCTR_optboolexpression).nonlocals));
} 
break;
case 14: /* STRUCT(REF MODE26,INT,INT,BOOL)  */
LPBBCTR_l = (EOBBCTR.data.mode14);
 /* line 1108: */
 /* line 1110: */
ZNWACTR_labdec(LPBBCTR_l);
break;
case 15: /* STRUCT(INT,BITS,INT)  */
MPBBCTR_u = (EOBBCTR.data.mode15);
 /* line 1112: */
 /* line 1114: */
LXIACTR_terminalerror(670);
break;
case 16: /* STRUCT(INT)  */
NPBBCTR_c = (EOBBCTR.data.mode16);
 /* line 1115: */
 /* line 1117: */
PXIACTR_assert(PPBBCTR, A68_FALSE);
break;
default: 
A_IMP_SKIP ;
break;
} 
 /* line 1118: */
 /* line 1119: */
 /* line 1121: */
QPBBCTR = A68_TRUE;
} 
break;
case 20: /* STRUCT(INT,INT,BITS,INT)  */
RPBBCTR_s = (COBBCTR.data.mode20);
 /* line 1122: */
{ 
 /* line 1123: */
 /* line 1124: */
if ( (ACBBCTR_valuestack!=VIJACTR_nilvaluelist) )
{ 
PXIACTR_assert(TPBBCTR, ((*(&(ACBBCTR_valuestack->Rest)))==VIJACTR_nilvaluelist));
 /* line 1125: */
 /* line 1126: */
if ( (RPBBCTR_s.Fn==WBAACTR_semifn) )
{ 
 /* line 1127: */
EYYACTR_evaluatenoresult((&ACBBCTR_valuestack));
} 
else
{ 
 /* line 1128: */
 /* line 1129: */
UPBBCTR = (Answer.Type==RJJACTR_enquiryresult);
if ( UPBBCTR )
{UPBBCTR = BOBBCTR_simpleenquiry;
}
 /* line 1130: */
if ( UPBBCTR )
{ 
 /* line 1131: */
ABZACTR_evaluatesimpleenquiry((&ACBBCTR_valuestack), Answer);
} 
else
{ 
 /* line 1132: */
 /* line 1133: */
CZYACTR_evaluateresult((&ACBBCTR_valuestack), Answer);
} 
} 
} 
 /* line 1134: */
 /* line 1135: */
 /* line 1137: */
QPBBCTR = A68_FALSE;
} 
break;
case 22: /* STRUCT(INT,BITS)  */
 /* line 1138: */
{ 
 /* line 1139: */
if ( (ACBBCTR_valuestack!=VIJACTR_nilvaluelist) )
{ 
 /* line 1140: */
CZYACTR_evaluateresult((&ACBBCTR_valuestack), Answer);
} 
 /* line 1141: */
 /* line 1142: */
 /* line 1144: */
QPBBCTR = A68_FALSE;
} 
break;
case 21: /* STRUCT(INT,INT,BITS,INT)  */
VPBBCTR_s = (COBBCTR.data.mode21);
 /* line 1145: */
{ 
A_CALLPROC(FCBBCTR_enclosedclause,(VPBBCTR_s, Body, Answer, A_LOC(A68_71 )),(VPBBCTR_s, Body, Answer, A_LOC(A68_71 ),(FCBBCTR_enclosedclause).nonlocals));
 /* line 1146: */
BOBBCTR_simpleenquiry = A68_FALSE;
 /* line 1147: */
 /* line 1148: */
 /* line 1150: */
QPBBCTR = A68_TRUE;
} 
break;
default: 
PXIACTR_assert(XPBBCTR, A68_FALSE);
 /* line 1151: */
 /* line 1152: */
 /* line 1153: */
QPBBCTR = A68_FALSE;
break;
} 
 /* line 1155: */
YPBBCTR = QPBBCTR;
if ( !YPBBCTR ) break;
/*SKIP*/;
}
 /* line 1157: */
} 
A_PROC_EXIT(phrase);
return;
} 
#undef NL

A_STATIC A68_VOID  KXABCTR_read(void *NonLocals)
#define NL(x) (((LXABCTR_read *)NonLocals)->x)
{ 
A68_180  MXABCTR;  /* united object - for case conformity */
A68_180  NXABCTR;  /* avoid structure result */
A68_180  OXABCTR;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(read);
 /* line 75: */
MXABCTR = (*NL(HXABCTR_nextimperative)) ;
switch ( MXABCTR.mode )
{ 
case 26: /* VOID */
 /* line 76: */
 /* line 77: */
A_CALLPROC(NL(Nextstreamimperative),( &NXABCTR),( &NXABCTR,(NL(Nextstreamimperative)).nonlocals));
(*NL(FXABCTR_currentimperative)) = NXABCTR;
break;
default: 
(*NL(FXABCTR_currentimperative)) = (*NL(HXABCTR_nextimperative));
 /* line 78: */
 /* line 79: */
(*NL(HXABCTR_nextimperative)) = A_EMPTY(OXABCTR,26);
break;
} 
A_PROC_EXIT(read);
return;
} 
#undef NL

A_STATIC A68_VOID  QXABCTR_lookahead(void *NonLocals)
#define NL(x) (((RXABCTR_lookahead *)NonLocals)->x)
{ 
A68_180  SXABCTR;  /* united object - for case conformity */
A68_180  TXABCTR;  /* avoid structure result */
A_PROC_ENTRY(lookahead);
 /* line 89: */
SXABCTR = (*NL(HXABCTR_nextimperative)) ;
switch ( SXABCTR.mode )
{ 
case 26: /* VOID */
 /* line 90: */
 /* line 91: */
A_CALLPROC(NL(Nextstreamimperative),( &TXABCTR),( &TXABCTR,(NL(Nextstreamimperative)).nonlocals));
(*NL(HXABCTR_nextimperative)) = TXABCTR;
break;
default: 
 /* line 92: */
LXIACTR_terminalerror(602);
break;
} 
A_PROC_EXIT(lookahead);
return;
} 
#undef NL

A_STATIC A68_VOID  UXABCTR_compositionmodule(void)
{ 
A_PROC_ENTRY(compositionmodule);
PXIACTR_assert(WXABCTR, A68_FALSE);
A_PROC_EXIT(compositionmodule);
return;
} 
#undef NL
 /* line 105: */
 /* line 106: */

A_STATIC A68_VOID  BYABCTR_module(A68_VC  Modulename, A68_BOOL  Decsmodule, A68_BOOL  Prelude, void *NonLocals)
#define NL(x) (((CYABCTR_module *)NonLocals)->x)
{ 
A68_268  DYABCTR_phrase_;
A68_75  EYABCTR_skiproutine;   /* proc value of non-global proc */
A68_269  MYABCTR_routine;   /* proc value of non-global proc */
A68_276  PABBCTR_serialclause;   /* proc value of non-global proc */
A68_278  JBBBCTR_enquiryclause;   /* proc value of non-global proc */
A68_268  XBBBCTR_phrase;   /* proc value of non-global proc */
A68_55 * ZPBBCTR_endofmodule;
A68_64 * AQBBCTR_result;
A68_59  BQBBCTR;  /* collateral clause result */
A68_59  CQBBCTR_properties;
A68_VC  DQBBCTR;  /* OPERATORS - istruct -> vector */
A68_56 * EQBBCTR;  /* OPERATORS - istruct -> vector */
A68_64  FQBBCTR;  /* collateral clause result */
A68_65  GQBBCTR;  /* OPERATORS - mode -> union mode */
A68_63  HQBBCTR;  /* collateral clause result */
A68_180  IQBBCTR;  /* united object - for case conformity */
A68_156  JQBBCTR_id;
A68_180  KQBBCTR;  /* united object - for case conformity */
A68_122  LQBBCTR_r;
A68_BOOL  MQBBCTR;  /* clause result */
A68_VC  NQBBCTR;  /* avoid structure result */
A68_122  OQBBCTR_r;
A68_VC  PQBBCTR;  /* avoid structure result */
A68_180  QQBBCTR;  /* united object - for case conformity */
A68_122  RQBBCTR_r;
A68_122  SQBBCTR;  /* clause result */
A68_122  VQBBCTR;  /* OPERATORS - skip to mode */
A68_122  WQBBCTR_routine;
A68_180  XQBBCTR;  /* united object - for case conformity */
A68_122  YQBBCTR_r;
A68_BOOL  DRBBCTR;  /* clause result */
A68_BOOL  ERBBCTR;  /* clause result */
A68_VC  FRBBCTR;  /* OPERATORS - istruct -> vector */
A68_56 * GRBBCTR;  /* OPERATORS - istruct -> vector */
A68_63  HRBBCTR;  /* collateral clause result */
A68_BITS  IRBBCTR;  /* ADICOPS - >= */
A68_180  JRBBCTR;  /* united object - for case conformity */
A68_189  KRBBCTR_t;
A68_BOOL  LRBBCTR;  /* clause result */
A68_VC  MRBBCTR;  /* OPERATORS - istruct -> vector */
A68_56 * NRBBCTR;  /* OPERATORS - istruct -> vector */
A68_64  ORBBCTR;  /* collateral clause result */
A68_65  PRBBCTR;  /* OPERATORS - mode -> union mode */
A68_63  QRBBCTR;  /* collateral clause result */
A_PROC_ENTRY(module);
 /* line 122: */
 /* line 123: */
{ 
 /* line 128: */
 /* line 132: */
A_CLOSURE( EYABCTR_skiproutine, FYABCTR_skiproutine, GYABCTR_skiproutine );
(( GYABCTR_skiproutine * ) ( EYABCTR_skiproutine.nonlocals )) -> JXABCTR_read = NL(JXABCTR_read);
(( GYABCTR_skiproutine * ) ( EYABCTR_skiproutine.nonlocals )) -> FXABCTR_currentimperative = NL(FXABCTR_currentimperative);
(( GYABCTR_skiproutine * ) ( EYABCTR_skiproutine.nonlocals )) -> EYABCTR_skiproutine = EYABCTR_skiproutine;
 /* line 142: */
A_CLOSURE( MYABCTR_routine, NYABCTR_routine, OYABCTR_routine );
(( OYABCTR_routine * ) ( MYABCTR_routine.nonlocals )) -> PXABCTR_lookahead = NL(PXABCTR_lookahead);
(( OYABCTR_routine * ) ( MYABCTR_routine.nonlocals )) -> HXABCTR_nextimperative = NL(HXABCTR_nextimperative);
(( OYABCTR_routine * ) ( MYABCTR_routine.nonlocals )) -> JXABCTR_read = NL(JXABCTR_read);
(( OYABCTR_routine * ) ( MYABCTR_routine.nonlocals )) -> EYABCTR_skiproutine = EYABCTR_skiproutine;
(( OYABCTR_routine * ) ( MYABCTR_routine.nonlocals )) -> FXABCTR_currentimperative = NL(FXABCTR_currentimperative);
(( OYABCTR_routine * ) ( MYABCTR_routine.nonlocals )) -> DYABCTR_phrase_ = (&DYABCTR_phrase_);
 /* line 239: */
A_CLOSURE( PABBCTR_serialclause, QABBCTR_serialclause, RABBCTR_serialclause );
(( RABBCTR_serialclause * ) ( PABBCTR_serialclause.nonlocals )) -> DYABCTR_phrase_ = (&DYABCTR_phrase_);
(( RABBCTR_serialclause * ) ( PABBCTR_serialclause.nonlocals )) -> FXABCTR_currentimperative = NL(FXABCTR_currentimperative);
 /* line 320: */
A_CLOSURE( JBBBCTR_enquiryclause, KBBBCTR_enquiryclause, LBBBCTR_enquiryclause );
(( LBBBCTR_enquiryclause * ) ( JBBBCTR_enquiryclause.nonlocals )) -> DYABCTR_phrase_ = (&DYABCTR_phrase_);
(( LBBBCTR_enquiryclause * ) ( JBBBCTR_enquiryclause.nonlocals )) -> FXABCTR_currentimperative = NL(FXABCTR_currentimperative);
 /* line 353: */
A_CLOSURE( XBBBCTR_phrase, YBBBCTR_phrase, ZBBBCTR_phrase );
(( ZBBBCTR_phrase * ) ( XBBBCTR_phrase.nonlocals )) -> PABBCTR_serialclause = PABBCTR_serialclause;
(( ZBBBCTR_phrase * ) ( XBBBCTR_phrase.nonlocals )) -> JXABCTR_read = NL(JXABCTR_read);
(( ZBBBCTR_phrase * ) ( XBBBCTR_phrase.nonlocals )) -> FXABCTR_currentimperative = NL(FXABCTR_currentimperative);
(( ZBBBCTR_phrase * ) ( XBBBCTR_phrase.nonlocals )) -> JBBBCTR_enquiryclause = JBBBCTR_enquiryclause;
(( ZBBBCTR_phrase * ) ( XBBBCTR_phrase.nonlocals )) -> XBBBCTR_phrase = XBBBCTR_phrase;
(( ZBBBCTR_phrase * ) ( XBBBCTR_phrase.nonlocals )) -> MYABCTR_routine = MYABCTR_routine;
 /* line 1159: */
DYABCTR_phrase_ = XBBBCTR_phrase;
 /* line 1164: */
 /* line 1165: */
 /* line 1167: */
A_CALLPROC(NL(PXABCTR_lookahead),(),((NL(PXABCTR_lookahead)).nonlocals));
 /* line 1169: */
 /* line 1170: */
 /* line 1171: */
if ( Decsmodule )
{ 
BQBBCTR.Block = A68_FALSE;
BQBBCTR.Dynamicresult = A68_FALSE;
BQBBCTR.Discardeddynamicresult = A68_TRUE;
BQBBCTR.Type = DBAACTR_decsfn;
CQBBCTR_properties = BQBBCTR;
 /* line 1173: */
EQBBCTR = (&((&JZOACTR_currentmodule)->Uname)) ;
DPYACTR_startdecsmodule(A_ISVEC(DQBBCTR,EQBBCTR,7,A68_CHAR ), Modulename);
 /* line 1175: */
FQBBCTR.Mode = UEAACTR_voidmode;
FQBBCTR.Info = YIJACTR_defaultinfo;
FQBBCTR.Extra = A_EMPTY(GQBBCTR,3);
AQBBCTR_result = JEBBCTR_assignment(A_LOC(A68_64 ), FQBBCTR);
 /* line 1177: */
 /* line 1178: */
HQBBCTR.Value = AQBBCTR_result;
HQBBCTR.End = ZPBBCTR_endofmodule;
HQBBCTR.Type = NJJACTR_voidresult;
A_CALLPROC(PABBCTR_serialclause,(CQBBCTR_properties, HQBBCTR),(CQBBCTR_properties, HQBBCTR,(PABBCTR_serialclause).nonlocals));
 /* line 1180: */
 /* line 1181: */
 /* line 1182: */
ESYACTR_enddecsmodule(Modulename);
} 
else
{ 
 /* line 1183: */
IQBBCTR = (*NL(HXABCTR_nextimperative)) ;
switch ( IQBBCTR.mode )
{ 
case 11: /* STRUCT(INT,REF MODE26,INT,INT)  */
JQBBCTR_id = (IQBBCTR.data.mode11);
 /* line 1184: */
{ 
MJVACTR_initialdummydec(JQBBCTR_id);
A_CALLPROC(NL(JXABCTR_read),(),((NL(JXABCTR_read)).nonlocals));
A_CALLPROC(NL(PXABCTR_lookahead),(),((NL(PXABCTR_lookahead)).nonlocals));
 /* line 1185: */
 /* line 1186: */
KQBBCTR = (*NL(HXABCTR_nextimperative)) ;
switch ( KQBBCTR.mode )
{ 
case 12: /* STRUCT(REF MODE26,BITS,INT,INT,INT)  */
LQBBCTR_r = (KQBBCTR.data.mode12);
 /* line 1187: */
KDHACTR_message( 59, &NQBBCTR );
MQBBCTR = A_VC_EQ(LQBBCTR_r.Name,NQBBCTR);
break;
default: 
 /* line 1188: */
 /* line 1189: */
 /* line 1190: */
MQBBCTR = A68_FALSE;
break;
} 
} 
break;
case 12: /* STRUCT(REF MODE26,BITS,INT,INT,INT)  */
OQBBCTR_r = (IQBBCTR.data.mode12);
 /* line 1191: */
 /* line 1192: */
KDHACTR_message( 59, &PQBBCTR );
MQBBCTR = A_VC_EQ(OQBBCTR_r.Name,PQBBCTR);
break;
default: 
 /* line 1193: */
 /* line 1194: */
 /* line 1196: */
MQBBCTR = A68_FALSE;
break;
} 
if ( MQBBCTR )
{ 
A_CALLPROC(NL(JXABCTR_read),(),((NL(JXABCTR_read)).nonlocals));
 /* line 1197: */
 /* line 1198: */
 /* line 1199: */
QQBBCTR = (*NL(FXABCTR_currentimperative)) ;
switch ( QQBBCTR.mode )
{ 
case 12: /* STRUCT(REF MODE26,BITS,INT,INT,INT)  */
RQBBCTR_r = (QQBBCTR.data.mode12);
 /* line 1200: */
SQBBCTR = RQBBCTR_r;
break;
default: 
PXIACTR_assert(UQBBCTR, A68_FALSE);
 /* line 1201: */
SQBBCTR = VQBBCTR;
break;
} 
WQBBCTR_routine = SQBBCTR;
 /* line 1203: */
 /* line 1204: */
 /* line 1206: */
if ( (RMMACTR_modetype(WQBBCTR_routine.Mode)==GEAACTR_procp) )
{ 
for ( ;; )
{ 
 /* line 1207: */
A_CALLPROC(NL(PXABCTR_lookahead),(),((NL(PXABCTR_lookahead)).nonlocals));
 /* line 1208: */
 /* line 1209: */
 /* line 1210: */
XQBBCTR = (*NL(HXABCTR_nextimperative)) ;
switch ( XQBBCTR.mode )
{ 
case 12: /* STRUCT(REF MODE26,BITS,INT,INT,INT)  */
YQBBCTR_r = (XQBBCTR.data.mode12);
 /* line 1211: */
 /* line 1212: */
{ 
PXIACTR_assert(CRBBCTR, A_VC_EQ(YQBBCTR_r.Name,BRBBCTR));
 /* line 1213: */
A_CALLPROC(NL(JXABCTR_read),(),((NL(JXABCTR_read)).nonlocals));
 /* line 1214: */
A_CALLPROC(EYABCTR_skiproutine,(),((EYABCTR_skiproutine).nonlocals));
 /* line 1215: */
 /* line 1216: */
 /* line 1217: */
DRBBCTR = A68_TRUE;
} 
break;
default: 
 /* line 1218: */
 /* line 1219: */
DRBBCTR = A68_FALSE;
break;
} 
 /* line 1221: */
ERBBCTR = DRBBCTR;
if ( !ERBBCTR ) break;
/*SKIP*/;
}
 /* line 1222: */
} 
 /* line 1224: */
 /* line 1225: */
 /* line 1226: */
 /* line 1227: */
 /* line 1229: */
GRBBCTR = (&((&JZOACTR_currentmodule)->Uname)) ;
ZQYACTR_startprocmodule(WQBBCTR_routine, A_ISVEC(FRBBCTR,GRBBCTR,7,A68_CHAR ), Modulename, AQBBCTR_result);
 /* line 1231: */
 /* line 1232: */
if ( XRMACTR_dynamic((*(&(AQBBCTR_result->Mode)))) )
{ 
 /* line 1233: */
IXIACTR_error(340);
} 
 /* line 1235: */
 /* line 1236: */
 /* line 1237: */
HRBBCTR.Value = AQBBCTR_result;
HRBBCTR.End = ZPBBCTR_endofmodule;
HRBBCTR.Type = QJJACTR_routineresult;
 /* line 1238: */
 /* line 1239: */
IRBBCTR = WQBBCTR_routine.Props ;
A_CALLPROC(XBBBCTR_phrase,(A_LB_GE(IRBBCTR,NCAACTR_ccbit), HRBBCTR, A68_FALSE),(A_LB_GE(IRBBCTR,NCAACTR_ccbit), HRBBCTR, A68_FALSE,(XBBBCTR_phrase).nonlocals));
 /* line 1240: */
ERYACTR_endmodule();
 /* line 1243: */
A_CALLPROC(NL(JXABCTR_read),(),((NL(JXABCTR_read)).nonlocals));
 /* line 1244: */
 /* line 1245: */
 /* line 1246: */
 /* line 1247: */
if ( ((RMMACTR_modetype(WQBBCTR_routine.Mode)==FEAACTR_proc)&((*(&(AQBBCTR_result->Mode)))!=UEAACTR_voidmode)) )
{ 
A_CALLPROC(NL(JXABCTR_read),(),((NL(JXABCTR_read)).nonlocals));
} 
 /* line 1248: */
A_CALLPROC(NL(JXABCTR_read),(),((NL(JXABCTR_read)).nonlocals));
 /* line 1249: */
 /* line 1250: */
JRBBCTR = (*NL(FXABCTR_currentimperative)) ;
switch ( JRBBCTR.mode )
{ 
case 22: /* STRUCT(INT,BITS)  */
KRBBCTR_t = (JRBBCTR.data.mode22);
 /* line 1251: */
LRBBCTR = (KRBBCTR_t.Fn!=HCAACTR_finishfn);
break;
default: 
 /* line 1252: */
 /* line 1253: */
LRBBCTR = A68_TRUE;
break;
} 
if ( LRBBCTR )
{ 
 /* line 1254: */
 /* line 1255: */
 /* line 1257: */
LXIACTR_terminalerror(628);
} 
} 
else
{ 
NRBBCTR = (&((&JZOACTR_currentmodule)->Uname)) ;
SNYACTR_startmodule(A_ISVEC(MRBBCTR,NRBBCTR,7,A68_CHAR ), Modulename);
 /* line 1258: */
ORBBCTR.Mode = UEAACTR_voidmode;
ORBBCTR.Info = YIJACTR_defaultinfo;
ORBBCTR.Extra = A_EMPTY(PRBBCTR,3);
AQBBCTR_result = JEBBCTR_assignment(A_LOC(A68_64 ), ORBBCTR);
 /* line 1259: */
 /* line 1260: */
 /* line 1261: */
 /* line 1262: */
QRBBCTR.Value = AQBBCTR_result;
 /* line 1264: */
QRBBCTR.End = ZPBBCTR_endofmodule;
QRBBCTR.Type = NJJACTR_voidresult;
 /* line 1265: */
 /* line 1266: */
A_CALLPROC(XBBBCTR_phrase,(A68_FALSE, QRBBCTR, A68_FALSE),(A68_FALSE, QRBBCTR, A68_FALSE,(XBBBCTR_phrase).nonlocals));
 /* line 1267: */
 /* line 1268: */
 /* line 1269: */
ERYACTR_endmodule();
} 
} 
} 
A_PROC_EXIT(module);
return;
} 
#undef NL
 /* line 59: */
 /* line 61: */

A68_VOID  EXABCTR_translator(A68_264  Nextstreamimperative, A68_116 * Xsizes, A68_171  Keptdecnos)
{ 
A68_180  GXABCTR;  /* OPERATORS - mode -> union mode */
A68_180  FXABCTR_currentimperative;
A68_180  IXABCTR;  /* OPERATORS - mode -> union mode */
A68_180  HXABCTR_nextimperative;
A68_75  JXABCTR_read;   /* proc value of non-global proc */
A68_75  PXABCTR_lookahead;   /* proc value of non-global proc */
A68_267  AYABCTR_module;   /* proc value of non-global proc */
A68_VC  RRBBCTR;  /* OPERATORS - istruct -> vector */
A68_89 * SRBBCTR;  /* OPERATORS - istruct -> vector */
A68_VC  TRBBCTR;  /* avoid structure result */
A68_VC  URBBCTR_modulename;
A68_BOOL  VRBBCTR_decsmodule;
A68_BOOL  WRBBCTR_contextvoid;
A_PROC_ENTRY(translator);
 /* line 62: */
 /* line 64: */
{ 
FXABCTR_currentimperative = A_EMPTY(GXABCTR,26);
 /* line 65: */
HXABCTR_nextimperative = A_EMPTY(IXABCTR,26);
 /* line 67: */
 /* line 73: */
 /* line 74: */
A_CLOSURE( JXABCTR_read, KXABCTR_read, LXABCTR_read );
(( LXABCTR_read * ) ( JXABCTR_read.nonlocals )) -> HXABCTR_nextimperative = (&HXABCTR_nextimperative);
(( LXABCTR_read * ) ( JXABCTR_read.nonlocals )) -> FXABCTR_currentimperative = (&FXABCTR_currentimperative);
(( LXABCTR_read * ) ( JXABCTR_read.nonlocals )) -> Nextstreamimperative = Nextstreamimperative;
 /* line 81: */
 /* line 87: */
 /* line 88: */
A_CLOSURE( PXABCTR_lookahead, QXABCTR_lookahead, RXABCTR_lookahead );
(( RXABCTR_lookahead * ) ( PXABCTR_lookahead.nonlocals )) -> HXABCTR_nextimperative = (&HXABCTR_nextimperative);
(( RXABCTR_lookahead * ) ( PXABCTR_lookahead.nonlocals )) -> Nextstreamimperative = Nextstreamimperative;
 /* line 94: */
 /* line 100: */
 /* line 103: */
 /* line 104: */
A_CLOSURE( AYABCTR_module, BYABCTR_module, CYABCTR_module );
(( CYABCTR_module * ) ( AYABCTR_module.nonlocals )) -> JXABCTR_read = JXABCTR_read;
(( CYABCTR_module * ) ( AYABCTR_module.nonlocals )) -> FXABCTR_currentimperative = (&FXABCTR_currentimperative);
(( CYABCTR_module * ) ( AYABCTR_module.nonlocals )) -> PXABCTR_lookahead = PXABCTR_lookahead;
(( CYABCTR_module * ) ( AYABCTR_module.nonlocals )) -> HXABCTR_nextimperative = (&HXABCTR_nextimperative);
 /* line 1273: */
SRBBCTR = (&(KZOACTR_currentmodinfo->Name)) ;
RMAAOSF_scanto( ' ', A_ISVEC(RRBBCTR,SRBBCTR,32,A68_CHAR ), &TRBBCTR );
URBBCTR_modulename = TRBBCTR;
 /* line 1275: */
VRBBCTR_decsmodule = ((*(&(KZOACTR_currentmodinfo->Type)))==(-1));
 /* line 1276: */
WRBBCTR_contextvoid = ((*(&((&(KZOACTR_currentmodinfo->L))->Level)))==0);
 /* line 1278: */
DSZACTR_initialise(Xsizes, (&FXABCTR_currentimperative), Keptdecnos);
 /* line 1280: */
 /* line 1281: */
 /* line 1282: */
if ( FLOACTR_composition )
{ 
 /* line 1283: */
 /* line 1284: */
LXIACTR_terminalerror(806);
} 
else
{ 
RCPACTR_initialiseunames();
 /* line 1285: */
 /* line 1286: */
 /* line 1288: */
 /* line 1290: */
A_CALLPROC(AYABCTR_module,(URBBCTR_modulename, VRBBCTR_decsmodule, WRBBCTR_contextvoid),(URBBCTR_modulename, VRBBCTR_decsmodule, WRBBCTR_contextvoid,(AYABCTR_module).nonlocals));
} 
} 
A_PROC_EXIT(translator);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 3: */
 /* line 4: */
 /* line 5: */
 /* line 6: */
 /* line 8: */
void WWABCTR(void)   /* initialise DECS compiler */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/shields/projects/Algol68/Tools/Algol68toC/src/a68toc","-v","-uname","seedfile","-lib","/home/shields/projects/Algol68/Tools/Algol68toC/a68config","-dir","/home/shields/projects/Algol68/Tools/Algol68toC/a68config","-dir","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel","-dir",".","compiler.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/shields/projects/Algol68/Tools/Algol68toC/a68config","A68_CDIR=","A68_DIR=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/shields/projects/Algol68/Tools/Algol68toC/a68config/a68config.m","./values.m","./coutput.m","./uniquenameserver.m","./oper.m","./moduletracer.m","./modules.m","./modes.m","./incmode.m","./loops.m","./loads.m","./initialiser.m","./incvalue.m","./incoperfn.m","./incimperatives.m","./identifiers.m","./environment.m","./environ.m","./entryandreturn.m","./common.m","./clauses.m","./centities.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/usefulops.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
JRPACTR();   /* USE values */
YRLACTR();   /* USE coutput */
AGMACTR();   /* USE uniquenameserver */
LNQACTR();   /* USE oper */
BCHACTR();   /* USE moduletracer */
VJOACTR();   /* USE modules */
MLMACTR();   /* USE modes */
ZDAACTR();   /* USE incmode */
KAABCTR();   /* USE loops */
ISZACTR();   /* USE loads */
URZACTR();   /* USE initialiser */
PIJACTR();   /* USE incvalue */
XFAACTR();   /* USE incoperfn */
UAAACTR();   /* USE incimperatives */
WIVACTR();   /* USE identifiers */
HPIACTR();   /* USE environment */
KNLACTR();   /* USE environ */
KBYACTR();   /* USE entryandreturn */
KXYACTR();   /* USE clauses */
THAACTR();   /* USE centities */
IKAAOSF();   /* USE usefulops */
/* --- Initialise configuration information */
A_config.source_file = "/home/shields/projects/Algol68/Tools/Algol68toC/src/compiler.a68";
A_config.translation_time = "Sun Sep 26 21:51:11 2004";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "VWABCTR (from seed file) ";
A_config.spec_change_time = "Sun Sep 26 21:51:11 2004";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS compiler);
UEAALIB_a68config(LGAALIB_configinfo, AXABCTR);
 /* line 57: */
 /* line 58: */
 /* line 1292: */
A_PROC_EXIT(DECS compiler);
} 
#undef NL
/* end of translation of compiler.a68 */
