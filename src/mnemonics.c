/* UNAME:PUWACTR */
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
A68_INT  Mode;
A_PAD_INT(PAD_1)
A68_VC  String;
};
typedef struct A68t54  A68_54 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t55{
A68_INT  I;
A_PAD_INT(PAD_2)
};
typedef struct A68t55  A68_55 ;    /* STRUCT(INT)  */
A_ROW(A68_INT ,A68t57,1);
typedef struct A68t57  A68_57 ;    /* [] INT */
struct A68t56{
A68_INT  Body;
A_PAD_INT(PAD_3)
A68_INT  Moduleno;
A_PAD_INT(PAD_4)
struct A68t57  Actuals;
};
typedef struct A68t56  A68_56 ;    /* STRUCT(INT,INT,REF MODE57)  */
struct A68t58{
A68_INT  Mode;
A_PAD_INT(PAD_5)
A68_INT  Number;
A_PAD_INT(PAD_6)
A68_VC  Insert;
};
typedef struct A68t58  A68_58 ;    /* STRUCT(INT,INT,REF MODE26)  */
struct A68t60{
A68_INT  Moduleno;
A_PAD_INT(PAD_7)
A68_INT  I;
A_PAD_INT(PAD_8)
A68_INT  J;
A_PAD_INT(PAD_9)
};
typedef struct A68t60  A68_60 ;    /* STRUCT(INT,INT,INT)  */
A_ROW(A68_VC ,A68t62,1);
typedef struct A68t62  A68_62 ;    /* [] REF MODE26 */
struct A68t61{
A68_INT  Moduleno;
A_PAD_INT(PAD_10)
A68_VC  Name;
A68_VC  Uname;
A68_VC  Lname;
A68_VC  Gname;
struct A68t62  Ysnames;
};
typedef struct A68t61  A68_61 ;    /* STRUCT(INT,REF MODE26,REF MODE26,REF MODE26,REF MODE26,REF MODE62)  */
struct A68t59 { A68_INT mode; union {
struct A68t56  mode1;
struct A68t60  mode2;
struct A68t61  mode3;
} data; };
typedef struct A68t59  A68_59 ;    /* UNION(MODE56,MODE60,MODE61)  */
struct A68t64{
A68_INT  Nochars;
A_PAD_INT(PAD_11)
A68_INT  Nocases;
A_PAD_INT(PAD_12)
A68_INT  W;
A_PAD_INT(PAD_13)
};
typedef struct A68t64  A68_64 ;    /* STRUCT(INT,INT,INT)  */
struct A68t63{
struct A68t64  Info;
A68_VC  Text;
};
typedef struct A68t63  A68_63 ;    /* STRUCT(MODE64,REF MODE26)  */
struct A68t65{
A68_INT  Type;
A_PAD_INT(PAD_14)
A68_VC  Name;
A68_INT  Mode;
A_PAD_INT(PAD_15)
A68_INT  Decno;
A_PAD_INT(PAD_16)
};
typedef struct A68t65  A68_65 ;    /* STRUCT(INT,REF MODE26,INT,INT)  */
struct A68t66{
A68_VC  Representation;
};
typedef struct A68t66  A68_66 ;    /* STRUCT(REF MODE26)  */
struct A68t68{
A68_INT  Nse;
A_PAD_INT(PAD_17)
};
typedef struct A68t68  A68_68 ;    /* STRUCT(INT)  */
struct A68t69{
A68_INT  Labno;
A_PAD_INT(PAD_18)
};
typedef struct A68t69  A68_69 ;    /* STRUCT(INT)  */
struct A68t70{
A68_INT  Mode;
A_PAD_INT(PAD_19)
A68_VC  Nu;
};
typedef struct A68t70  A68_70 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t71{
A68_INT  Mode;
A_PAD_INT(PAD_20)
A68_LBITS  Denotation;
A_PAD_LBITS(PAD_21)
};
typedef struct A68t71  A68_71 ;    /* STRUCT(INT,LONG BITS)  */
struct A68t72{
A68_INT  Mode;
A_PAD_INT(PAD_22)
A68_VC  Denotation;
};
typedef struct A68t72  A68_72 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t73{
A68_INT  Fn;
A_PAD_INT(PAD_23)
A68_INT  Mode;
A_PAD_INT(PAD_24)
A68_INT  Param;
A_PAD_INT(PAD_25)
};
typedef struct A68t73  A68_73 ;    /* STRUCT(INT,INT,INT)  */
struct A68t74{
A68_VC  Name;
A68_BITS  Props;
A_PAD_BITS(PAD_26)
A68_INT  Mode;
A_PAD_INT(PAD_27)
A68_INT  Rdenno;
A_PAD_INT(PAD_28)
A68_INT  Maxname;
A_PAD_INT(PAD_29)
};
typedef struct A68t74  A68_74 ;    /* STRUCT(REF MODE26,BITS,INT,INT,INT)  */
struct A68t75{
A68_INT  W;
A_PAD_INT(PAD_30)
};
typedef struct A68t75  A68_75 ;    /* STRUCT(INT)  */
struct A68t76{
A68_VC  Name;
A68_INT  Labno;
A_PAD_INT(PAD_31)
A68_INT  Status;
A_PAD_INT(PAD_32)
A68_BOOL  Notsetting;
A_PAD_BOOL(PAD_33)
};
typedef struct A68t76  A68_76 ;    /* STRUCT(REF MODE26,INT,INT,BOOL)  */
struct A68t77{
A68_INT  Mode;
A_PAD_INT(PAD_34)
A68_BITS  Props;
A_PAD_BITS(PAD_35)
A68_INT  Param;
A_PAD_INT(PAD_36)
};
typedef struct A68t77  A68_77 ;    /* STRUCT(INT,BITS,INT)  */
struct A68t78{
A68_BOOL  Start;
A_PAD_BOOL(PAD_37)
};
typedef struct A68t78  A68_78 ;    /* STRUCT(BOOL)  */
struct A68t79{
A68_INT  Fn;
A_PAD_INT(PAD_38)
A68_INT  Mode;
A_PAD_INT(PAD_39)
A68_BITS  Props;
A_PAD_BITS(PAD_40)
A68_INT  Param;
A_PAD_INT(PAD_41)
};
typedef struct A68t79  A68_79 ;    /* STRUCT(INT,INT,BITS,INT)  */
struct A68t80{
A68_INT  Fn;
A_PAD_INT(PAD_42)
A68_INT  Mode;
A_PAD_INT(PAD_43)
A68_BITS  Props;
A_PAD_BITS(PAD_44)
A68_INT  Resultmode;
A_PAD_INT(PAD_45)
};
typedef struct A68t80  A68_80 ;    /* STRUCT(INT,INT,BITS,INT)  */
struct A68t81{
A68_INT  Fn;
A_PAD_INT(PAD_46)
A68_BITS  Props;
A_PAD_BITS(PAD_47)
};
typedef struct A68t81  A68_81 ;    /* STRUCT(INT,BITS)  */
struct A68t67 { A68_INT mode; union {
struct A68t68  mode1;
A68_INT  mode2;
A68_BOOL  mode3;
struct A68t66  mode4;
struct A68t69  mode5;
struct A68t70  mode6;
struct A68t54  mode7;
struct A68t71  mode8;
struct A68t72  mode9;
struct A68t73  mode10;
struct A68t65  mode11;
struct A68t74  mode12;
struct A68t75  mode13;
struct A68t76  mode14;
struct A68t77  mode15;
struct A68t55  mode16;
struct A68t78  mode17;
struct A68t63  mode18;
struct A68t58  mode19;
struct A68t79  mode20;
struct A68t80  mode21;
struct A68t81  mode22;
struct A68t56  mode23;
struct A68t60  mode24;
struct A68t61  mode25;
} data; };
typedef struct A68t67  A68_67 ;    /* UNION(MODE68,INT,BOOL,MODE66,MODE69,MODE70,MODE54,MODE71,MODE72,MODE73,MODE65,MODE74,MODE75,MODE76,MODE77,MODE55,MODE78,MODE63,MODE58,MODE79,MODE80,MODE81,MODE56,MODE60,MODE61,VOID)  */
struct A68t82 { A68_INT mode; union {
struct A68t68  mode1;
A68_INT  mode2;
A68_BOOL  mode3;
struct A68t66  mode4;
struct A68t69  mode5;
struct A68t70  mode6;
struct A68t54  mode7;
struct A68t71  mode8;
struct A68t72  mode9;
} data; };
typedef struct A68t82  A68_82 ;    /* UNION(MODE68,INT,BOOL,MODE66,MODE69,MODE70,MODE54,MODE71,MODE72)  */
struct A68t83 { A68_INT mode; union {
struct A68t68  mode1;
A68_INT  mode2;
A68_BOOL  mode3;
struct A68t66  mode4;
struct A68t69  mode5;
struct A68t70  mode6;
struct A68t54  mode7;
struct A68t71  mode8;
struct A68t72  mode9;
struct A68t73  mode10;
struct A68t65  mode11;
struct A68t74  mode12;
struct A68t75  mode13;
struct A68t76  mode14;
struct A68t77  mode15;
struct A68t55  mode16;
struct A68t78  mode17;
struct A68t63  mode18;
struct A68t58  mode19;
} data; };
typedef struct A68t83  A68_83 ;    /* UNION(MODE68,INT,BOOL,MODE66,MODE69,MODE70,MODE54,MODE71,MODE72,MODE73,MODE65,MODE74,MODE75,MODE76,MODE77,MODE55,MODE78,MODE63,MODE58)  */

A_PROCEDURE(A68_VOID ,A68t84,(A68_INT ),(A68_INT ,void *));
typedef struct A68t84  A68_84 ;    /* PROC(INT) VOID */
struct A68t86 ;

A_PROCEDURE(A68_VOID ,A68t85,(struct A68t65 ,struct A68t86 *,A68_INT ),(struct A68t65 ,struct A68t86 *,A68_INT ,void *));
typedef struct A68t85  A68_85 ;    /* PROC(MODE65,REF MODE86,INT) VOID */
struct A68t88{
A68_INT  Rdenno;
A_PAD_INT(PAD_48)
};
typedef struct A68t88  A68_88 ;    /* STRUCT(INT)  */
struct A68t89{
A68_INT  Idno;
A_PAD_INT(PAD_49)
};
typedef struct A68t89  A68_89 ;    /* STRUCT(INT)  */
A_ISTRUCT(A68_CHAR ,7,A68t93);
typedef struct A68t93  A68_93 ;    /* STRUCT 7 CHAR */
struct A68t90{
struct A68t93  Name;
A_PAD_ISTRUCT(A68_93 ,PAD_50)
A68_INT  Mode;
A_PAD_INT(PAD_51)
};
typedef struct A68t90  A68_90 ;    /* STRUCT(MODE93,INT)  */
struct A68t91{
A68_INT  Fn;
A_PAD_INT(PAD_52)
A68_INT  Param;
A_PAD_INT(PAD_53)
struct A68t92 * Operands;
};
typedef struct A68t91  A68_91 ;    /* STRUCT(INT,INT,REF MODE92)  */
struct A68t87 { A68_INT mode; union {
A68_LBITS  mode1;
struct A68t88  mode2;
struct A68t89  mode4;
struct A68t90  mode5;
A68_VC  mode6;
struct A68t69  mode7;
struct A68t68  mode8;
struct A68t91  mode9;
} data; };
typedef struct A68t87  A68_87 ;    /* UNION(LONG BITS,MODE88,VOID,MODE89,MODE90,MODE26,MODE69,MODE68,MODE91)  */
struct A68t86{
A68_INT  Mode;
A_PAD_INT(PAD_54)
A68_BITS  Info;
A_PAD_BITS(PAD_55)
struct A68t87  Extra;
};
typedef struct A68t86  A68_86 ;    /* STRUCT(INT,BITS,MODE87)  */
struct A68t92{
struct A68t86  Value;
struct A68t92 * Rest;
};
typedef struct A68t92  A68_92 ;    /* STRUCT(MODE86,REF MODE92)  */

A_PROCEDURE(A68_VOID ,A68t94,(void),(void *));
typedef struct A68t94  A68_94 ;    /* PROC VOID */
struct A68t96 ;

A_PROCEDURE(A68_VOID ,A68t95,(A68_INT ,struct A68t96 *),(A68_INT ,struct A68t96 *,void *));
typedef struct A68t95  A68_95 ;    /* PROC(INT) MODE96 */
struct A68t96{
A68_INT  Level;
A_PAD_INT(PAD_56)
A68_INT  Block;
A_PAD_INT(PAD_57)
};
typedef struct A68t96  A68_96 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t97,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t97  A68_97 ;    /* PROC(INT,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t98,(A68_VC ,struct A68t93 ,A68_INT ,A68_INT ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_VC ,A68_VC ),(A68_VC ,struct A68t93 ,A68_INT ,A68_INT ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_VC ,A68_VC ,void *));
typedef struct A68t98  A68_98 ;    /* PROC(REF MODE26,MODE93,INT,INT,BOOL,BOOL,BOOL,BOOL,BOOL,REF MODE26,REF MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t99,(struct A68t65 ,struct A68t92 **),(struct A68t65 ,struct A68t92 **,void *));
typedef struct A68t99  A68_99 ;    /* PROC(MODE65,REF REF MODE92) VOID */
A_ROW(struct A68t101 ,A68t100,1);
typedef struct A68t100  A68_100 ;    /* [] MODE101 */
struct A68t101{
A68_INT  Mode;
A_PAD_INT(PAD_58)
A68_INT  Cvariabletype;
A_PAD_INT(PAD_59)
struct A68t96  Environ;
A68_VC  Name;
A68_VC  C_name;
struct A68t93  Prefix;
A_PAD_ISTRUCT(A68_93 ,PAD_60)
A68_BITS  Flags;
A_PAD_BITS(PAD_61)
A68_VC  Definition;
A68_VC  Rhs;
};
typedef struct A68t101  A68_101 ;    /* STRUCT(INT,INT,MODE96,REF MODE26,REF MODE26,MODE93,BITS,REF MODE26,REF MODE26)  */

A_PROCEDURE(A68_VOID ,A68t102,(struct A68t65 ),(struct A68t65 ,void *));
typedef struct A68t102  A68_102 ;    /* PROC(MODE65) VOID */

A_PROCEDURE(A68_VOID ,A68t103,(struct A68t76 ),(struct A68t76 ,void *));
typedef struct A68t103  A68_103 ;    /* PROC(MODE76) VOID */

A_PROCEDURE(A68_INT ,A68t104,(A68_INT ),(A68_INT ,void *));
typedef struct A68t104  A68_104 ;    /* PROC(INT) INT */
struct A68t106 ;

A_PROCEDURE(A68_VOID ,A68t105,(A68_VC ,A68_INT ,struct A68t106 ,A68_INT ,A68_INT ,struct A68t96 ,A68_BITS ),(A68_VC ,A68_INT ,struct A68t106 ,A68_INT ,A68_INT ,struct A68t96 ,A68_BITS ,void *));
typedef struct A68t105  A68_105 ;    /* PROC(REF MODE26,INT,REF MODE106,INT,INT,MODE96,BITS) VOID */
A_VECTOR(A68_INT ,A68t106);
typedef struct A68t106  A68_106 ;    /* VECTOR [] INT */
A_ROW(struct A68t108 ,A68t107,1);
typedef struct A68t107  A68_107 ;    /* [] MODE108 */
struct A68t108{
A68_INT  Mode;
A_PAD_INT(PAD_62)
A68_INT  Resultmode;
A_PAD_INT(PAD_63)
A68_INT  Declevel;
A_PAD_INT(PAD_64)
struct A68t96  Environ;
A68_VC  Name;
struct A68t93  Prefix;
A_PAD_ISTRUCT(A68_93 ,PAD_65)
struct A68t93  Fnprefix;
A_PAD_ISTRUCT(A68_93 ,PAD_66)
struct A68t93  Envprefix;
A_PAD_ISTRUCT(A68_93 ,PAD_67)
A68_BITS  Flags;
A_PAD_BITS(PAD_68)
};
typedef struct A68t108  A68_108 ;    /* STRUCT(INT,INT,INT,MODE96,REF MODE26,MODE93,MODE93,MODE93,BITS)  */

A_PROCEDURE(A68_VOID ,A68t109,(A68_BOOL ,A68_VC *),(A68_BOOL ,A68_VC *,void *));
typedef struct A68t109  A68_109 ;    /* PROC(BOOL) MODE26 */

A_PROCEDURE(A68_VOID ,A68t110,(struct A68t94 ),(struct A68t94 ,void *));
typedef struct A68t110  A68_110 ;    /* PROC(MODE94) VOID */

A_PROCEDURE(A68_VOID ,A68t111,(A68_VC ),(A68_VC ,void *));
typedef struct A68t111  A68_111 ;    /* PROC(MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t112,(struct A68t111 ),(struct A68t111 ,void *));
typedef struct A68t112  A68_112 ;    /* PROC(MODE111) VOID */

A_PROCEDURE(A68_VOID ,A68t113,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t113  A68_113 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,64,A68t114);
typedef struct A68t114  A68_114 ;    /* STRUCT 64 CHAR */
struct A68t115{
A68_VC  Name;
A68_BITS  Value;
A_PAD_BITS(PAD_69)
};
typedef struct A68t115  A68_115 ;    /* STRUCT(MODE26,BITS)  */

A_PROCEDURE(A68_VOID ,A68t116,(A68_BOOL ,struct A68t115 *),(A68_BOOL ,struct A68t115 *,void *));
typedef struct A68t116  A68_116 ;    /* PROC(BOOL) MODE115 */
#define A68_117  A68_VC 
#define A68t117 A68t26            /* FLEX VECTOR [] CHAR */
#define A68_118  A68_115 
#define A68t118 A68t115            /* STRUCT(MODE117,BITS)  */
A_ROW(struct A68t115 ,A68t119,1);
typedef struct A68t119  A68_119 ;    /* [] MODE115 */
A_ISTRUCT(A68_CHAR ,3,A68t120);
typedef struct A68t120  A68_120 ;    /* STRUCT 3 CHAR */
A_ISTRUCT(A68_CHAR ,6,A68t121);
typedef struct A68t121  A68_121 ;    /* STRUCT 6 CHAR */
A_ISTRUCT(A68_CHAR ,8,A68t122);
typedef struct A68t122  A68_122 ;    /* STRUCT 8 CHAR */
A_ISTRUCT(A68_CHAR ,5,A68t123);
typedef struct A68t123  A68_123 ;    /* STRUCT 5 CHAR */
A_ISTRUCT(struct A68t115 ,16,A68t124);
typedef struct A68t124  A68_124 ;    /* STRUCT 16 MODE115 */
A_ISTRUCT(A68_CHAR ,2,A68t125);
typedef struct A68t125  A68_125 ;    /* STRUCT 2 CHAR */
A_ISTRUCT(A68_CHAR ,9,A68t126);
typedef struct A68t126  A68_126 ;    /* STRUCT 9 CHAR */
A_ISTRUCT(struct A68t115 ,6,A68t127);
typedef struct A68t127  A68_127 ;    /* STRUCT 6 MODE115 */

A_PROCEDURE(A68_VOID ,A68t128,(A68_BITS ,A68_BOOL ,A68_VC *),(A68_BITS ,A68_BOOL ,A68_VC *,void *));
typedef struct A68t128  A68_128 ;    /* PROC(BITS,BOOL) MODE26 */
A_ISTRUCT(A68_CHAR ,1,A68t129);
typedef struct A68t129  A68_129 ;    /* STRUCT 0 CHAR */

A_PROCEDURE(A68_VOID ,A68t130,(struct A68t67 ,A68_VC *),(struct A68t67 ,A68_VC *,void *));
typedef struct A68t130  A68_130 ;    /* PROC(MODE67) MODE26 */
A_ISTRUCT(A68_CHAR ,27,A68t131);
typedef struct A68t131  A68_131 ;    /* STRUCT 27 CHAR */
A_ISTRUCT(A68_CHAR ,11,A68t132);
typedef struct A68t132  A68_132 ;    /* STRUCT 11 CHAR */
A_ISTRUCT(A68_CHAR ,31,A68t133);
typedef struct A68t133  A68_133 ;    /* STRUCT 31 CHAR */
A_ISTRUCT(A68_CHAR ,29,A68t134);
typedef struct A68t134  A68_134 ;    /* STRUCT 29 CHAR */
A_ISTRUCT(A68_CHAR ,10,A68t135);
typedef struct A68t135  A68_135 ;    /* STRUCT 10 CHAR */
A_ISTRUCT(A68_CHAR ,12,A68t136);
typedef struct A68t136  A68_136 ;    /* STRUCT 12 CHAR */
A_ISTRUCT(A68_CHAR ,14,A68t137);
typedef struct A68t137  A68_137 ;    /* STRUCT 14 CHAR */
A_ISTRUCT(A68_CHAR ,15,A68t138);
typedef struct A68t138  A68_138 ;    /* STRUCT 15 CHAR */
A_ISTRUCT(A68_CHAR ,30,A68t139);
typedef struct A68t139  A68_139 ;    /* STRUCT 30 CHAR */
A_ISTRUCT(A68_CHAR ,23,A68t140);
typedef struct A68t140  A68_140 ;    /* STRUCT 23 CHAR */
A_ISTRUCT(A68_CHAR ,16,A68t141);
typedef struct A68t141  A68_141 ;    /* STRUCT 16 CHAR */
A_ISTRUCT(A68_CHAR ,24,A68t142);
typedef struct A68t142  A68_142 ;    /* STRUCT 24 CHAR */
A_ISTRUCT(A68_CHAR ,21,A68t143);
typedef struct A68t143  A68_143 ;    /* STRUCT 21 CHAR */
A_ISTRUCT(A68_CHAR ,22,A68t144);
typedef struct A68t144  A68_144 ;    /* STRUCT 22 CHAR */
A_ISTRUCT(A68_CHAR ,25,A68t145);
typedef struct A68t145  A68_145 ;    /* STRUCT 25 CHAR */
A_ISTRUCT(A68_CHAR ,13,A68t146);
typedef struct A68t146  A68_146 ;    /* STRUCT 13 CHAR */
A_ISTRUCT(A68_CHAR ,34,A68t147);
typedef struct A68t147  A68_147 ;    /* STRUCT 34 CHAR */
A_ISTRUCT(A68_CHAR ,20,A68t148);
typedef struct A68t148  A68_148 ;    /* STRUCT 20 CHAR */
A_ISTRUCT(A68_CHAR ,18,A68t149);
typedef struct A68t149  A68_149 ;    /* STRUCT 18 CHAR */
A_ISTRUCT(A68_CHAR ,37,A68t150);
typedef struct A68t150  A68_150 ;    /* STRUCT 37 CHAR */
A_ISTRUCT(A68_CHAR ,35,A68t151);
typedef struct A68t151  A68_151 ;    /* STRUCT 35 CHAR */
A_ISTRUCT(A68_CHAR ,28,A68t152);
typedef struct A68t152  A68_152 ;    /* STRUCT 28 CHAR */
A_ISTRUCT(A68_CHAR ,41,A68t153);
typedef struct A68t153  A68_153 ;    /* STRUCT 41 CHAR */
A_ISTRUCT(A68_CHAR ,19,A68t154);
typedef struct A68t154  A68_154 ;    /* STRUCT 19 CHAR */
A_ISTRUCT(A68_CHAR ,36,A68t155);
typedef struct A68t155  A68_155 ;    /* STRUCT 36 CHAR */
A_ISTRUCT(A68_CHAR ,33,A68t156);
typedef struct A68t156  A68_156 ;    /* STRUCT 33 CHAR */
A_ISTRUCT(A68_CHAR ,32,A68t157);
typedef struct A68t157  A68_157 ;    /* STRUCT 32 CHAR */
A_ISTRUCT(A68_CHAR ,38,A68t158);
typedef struct A68t158  A68_158 ;    /* STRUCT 38 CHAR */
A_ISTRUCT(A68_CHAR ,26,A68t159);
typedef struct A68t159  A68_159 ;    /* STRUCT 26 CHAR */
A_ISTRUCT(A68_CHAR ,17,A68t160);
typedef struct A68t160  A68_160 ;    /* STRUCT 17 CHAR */
A_ISTRUCT(A68_CHAR ,54,A68t161);
typedef struct A68t161  A68_161 ;    /* STRUCT 54 CHAR */
A_ISTRUCT(A68_CHAR ,47,A68t162);
typedef struct A68t162  A68_162 ;    /* STRUCT 47 CHAR */
A_ISTRUCT(A68_CHAR ,59,A68t163);
typedef struct A68t163  A68_163 ;    /* STRUCT 59 CHAR */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from identifiers --- */
extern A68_VOID  DSKACTR_idfullname(A68_INT ,A68_VC *);
extern A68_VOID  FBNACTR_modename(A68_INT ,A68_VC *);
/* --- End of imports from identifiers --- */


/* --- Imports from incimperatives --- */
#define NCAACTR_ccbit 002U
#define YCAACTR_compgenbit 0000400U
#define WCAACTR_decbit 0000100U
#define BDAACTR_dontpullbit 0004000U
#define EDAACTR_dydecbit 0040000U
#define CDAACTR_dyprocbit 0010000U
#define DDAACTR_dyvardecbit 0020000U
#define ZCAACTR_elifousebit 0001000U
#define TCAACTR_exitbit 0000010U
#define FDAACTR_genprocbit 0100000U
#define RCAACTR_globscopebit 040U
#define VCAACTR_heapbit 0000040U
#define QCAACTR_holebit 020U
#define ADAACTR_labbit 0002000U
#define GDAACTR_locgenbit 0200000U
#define HDAACTR_locdydecbit 0400000U
#define OCAACTR_operatorbit 004U
#define SCAACTR_priobit 0000040U
#define UCAACTR_semibit 0000020U
#define PCAACTR_valbit 010U
#define XCAACTR_vardecbit 0000200U
/* --- End of imports from incimperatives --- */


/* --- Imports from usefulops --- */
extern A68_VOID  ROAAOSF_whole(A68_INT ,A68_INT ,A68_VC *);
extern A68_VOID  JPAAOSF_lwhole(A68_LINT ,A68_INT ,A68_VC *);
/* --- End of imports from usefulops --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void WIVACTR(void);   /* identifiers */
extern void UAAACTR(void);   /* incimperatives */
extern void IKAAOSF(void);   /* usefulops */
/* --- end of DECS initialisation functions --- */
static A68_114   TUWACTR = {"$Id: mnemonics.c,v 1.5.2.4 2004/09/27 03:04:19 teshields Exp $"}; 
A_GISVEC(A68_VC ,UUWACTR,TUWACTR,64)
static A68_116  VUWACTR_anonymous;
static A68_40   IVWACTR = {"prio"}; 
A_GISVEC(A68_VC ,JVWACTR,IVWACTR,4)
static A68_40   KVWACTR = {"exit"}; 
A_GISVEC(A68_VC ,LVWACTR,KVWACTR,4)
static A68_40   MVWACTR = {"semi"}; 
A_GISVEC(A68_VC ,NVWACTR,MVWACTR,4)
static A68_40   OVWACTR = {"heap"}; 
A_GISVEC(A68_VC ,PVWACTR,OVWACTR,4)
static A68_120   QVWACTR = {"dec"}; 
A_GISVEC(A68_VC ,RVWACTR,QVWACTR,3)
static A68_121   SVWACTR = {"vardec"}; 
A_GISVEC(A68_VC ,TVWACTR,SVWACTR,6)
static A68_93   UVWACTR = {"compgen"}; 
A_GISVEC(A68_VC ,VVWACTR,UVWACTR,7)
static A68_122   WVWACTR = {"elifouse"}; 
A_GISVEC(A68_VC ,XVWACTR,WVWACTR,8)
static A68_120   YVWACTR = {"lab"}; 
A_GISVEC(A68_VC ,ZVWACTR,YVWACTR,3)
static A68_122   AWWACTR = {"dontpull"}; 
A_GISVEC(A68_VC ,BWWACTR,AWWACTR,8)
static A68_121   CWWACTR = {"dyproc"}; 
A_GISVEC(A68_VC ,DWWACTR,CWWACTR,6)
static A68_122   EWWACTR = {"dyvardec"}; 
A_GISVEC(A68_VC ,FWWACTR,EWWACTR,8)
static A68_123   GWWACTR = {"dydec"}; 
A_GISVEC(A68_VC ,HWWACTR,GWWACTR,5)
static A68_93   IWWACTR = {"genproc"}; 
A_GISVEC(A68_VC ,JWWACTR,IWWACTR,7)
static A68_121   KWWACTR = {"locgen"}; 
A_GISVEC(A68_VC ,LWWACTR,KWWACTR,6)
static A68_122   MWWACTR = {"locdydec"}; 
A_GISVEC(A68_VC ,NWWACTR,MWWACTR,8)
static A68_119  PWWACTR_controlbits;
static A68_125   RWWACTR = {"cc"}; 
A_GISVEC(A68_VC ,SWWACTR,RWWACTR,2)
static A68_122   TWWACTR = {"operator"}; 
A_GISVEC(A68_VC ,UWWACTR,TWWACTR,8)
static A68_120   VWWACTR = {"val"}; 
A_GISVEC(A68_VC ,WWWACTR,VWWACTR,3)
static A68_40   XWWACTR = {"hole"}; 
A_GISVEC(A68_VC ,YWWACTR,XWWACTR,4)
static A68_93   ZWWACTR = {"genproc"}; 
A_GISVEC(A68_VC ,AXWACTR,ZWWACTR,7)
static A68_126   BXWACTR = {"globscope"}; 
A_GISVEC(A68_VC ,CXWACTR,BXWACTR,9)
static A68_119  EXWACTR_routinebits;
static A68_BITS  FXWACTR_maskgeneral;
static A68_BITS  GXWACTR_maskdynamica;
#define HXWACTR_maskdynamicb BDAACTR_dontpullbit
static A68_BITS  IXWACTR_maskdynamicc;
static A68_BITS  JXWACTR_maskroutine;
#define KXWACTR_maskspecial ZCAACTR_elifousebit
static A68_BITS  LXWACTR_maskxroutine;
#define MXWACTR_fieldlength 0
static A68_129   YXWACTR = {""}; 
A_GISVEC(A68_VC ,ZXWACTR,YXWACTR,0)
static A68_129   IYWACTR = {""}; 
A_GISVEC(A68_VC ,JYWACTR,IYWACTR,0)
static A68_129   KYWACTR = {""}; 
A_GISVEC(A68_VC ,MYWACTR,KYWACTR,0)
static A68_126   NYWACTR = {" | bits ("}; 
A_GISVEC(A68_VC ,OYWACTR,NYWACTR,9)
static A68_131   ZYWACTR = {"load:nse                  ("}; 
static A68_122   AZWACTR = {"EMPTY fn"}; 
A_GISVEC(A68_VC ,CZWACTR,AZWACTR,8)
static A68_93   DZWACTR = {"SKIP fn"}; 
A_GISVEC(A68_VC ,EZWACTR,DZWACTR,7)
static A68_121   FZWACTR = {"NIL fn"}; 
A_GISVEC(A68_VC ,GZWACTR,FZWACTR,6)
static A68_132   HZWACTR = {"ERROR: nse="}; 
A_GISVEC(A68_VC ,IZWACTR,HZWACTR,11)
A_GISVEC(A68_VC ,LZWACTR,ZYWACTR,27)
static A68_131   NZWACTR = {"load:int                  ("}; 
static A68_125   OZWACTR = {"=\""}; 
A_GISVEC(A68_VC ,PZWACTR,NZWACTR,27)
A_GISVEC(A68_VC ,RZWACTR,OZWACTR,2)
static A68_131   VZWACTR = {"load:bool                 ("}; 
static A68_40   WZWACTR = {"TRUE"}; 
A_GISVEC(A68_VC ,YZWACTR,WZWACTR,4)
static A68_123   ZZWACTR = {"FALSE"}; 
A_GISVEC(A68_VC ,AAXACTR,ZZWACTR,5)
A_GISVEC(A68_VC ,BAXACTR,VZWACTR,27)
static A68_131   DAXACTR = {"load:char                 ("}; 
A_GISVEC(A68_VC ,EAXACTR,DAXACTR,27)
static A68_131   GAXACTR = {"load:labno                ("}; 
A_GISVEC(A68_VC ,HAXACTR,GAXACTR,27)
static A68_133   KAXACTR = {"load:number               (mode"}; 
static A68_134   LAXACTR = {" (of surrounding clause too)="}; 
A_GISVEC(A68_VC ,NAXACTR,LAXACTR,29)
static A68_135   PAXACTR = {" | number="}; 
A_GISVEC(A68_VC ,QAXACTR,KAXACTR,31)
A_GISVEC(A68_VC ,WAXACTR,PAXACTR,10)
static A68_133   YAXACTR = {"load:alienx               (mode"}; 
static A68_134   ZAXACTR = {" (of surrounding clause too)="}; 
A_GISVEC(A68_VC ,BBXACTR,ZAXACTR,29)
static A68_136   DBXACTR = {" | string =\""}; 
A_GISVEC(A68_VC ,EBXACTR,YAXACTR,31)
A_GISVEC(A68_VC ,KBXACTR,DBXACTR,12)
static A68_133   NBXACTR = {"load:numeric denotation   (mode"}; 
static A68_134   OBXACTR = {" (of surrounding clause too)="}; 
A_GISVEC(A68_VC ,QBXACTR,OBXACTR,29)
static A68_137   SBXACTR = {" | denotation="}; 
A_GISVEC(A68_VC ,TBXACTR,NBXACTR,31)
A_GISVEC(A68_VC ,ZBXACTR,SBXACTR,14)
static A68_133   CCXACTR = {"load:string denotation    (mode"}; 
static A68_134   DCXACTR = {" (of surrounding clause too)="}; 
A_GISVEC(A68_VC ,FCXACTR,DCXACTR,29)
static A68_138   HCXACTR = {" | denotation=\""}; 
A_GISVEC(A68_VC ,ICXACTR,CCXACTR,31)
A_GISVEC(A68_VC ,OCXACTR,HCXACTR,15)
static A68_139   QCXACTR = {"ERROR: unknown LOAD imperative"}; 
A_GISVEC(A68_VC ,RCXACTR,QCXACTR,30)
static A68_120   ZCXACTR = {"UPB"}; 
A_GISVEC(A68_VC ,ADXACTR,ZCXACTR,3)
static A68_120   BDXACTR = {"LWB"}; 
A_GISVEC(A68_VC ,CDXACTR,BDXACTR,3)
static A68_123   DDXACTR = {"ANDTH"}; 
A_GISVEC(A68_VC ,EDXACTR,DDXACTR,5)
static A68_40   FDXACTR = {"OREL"}; 
A_GISVEC(A68_VC ,GDXACTR,FDXACTR,4)
static A68_125   JDXACTR = {"<="}; 
A_GISVEC(A68_VC ,KDXACTR,JDXACTR,2)
static A68_125   LDXACTR = {">="}; 
A_GISVEC(A68_VC ,MDXACTR,LDXACTR,2)
static A68_125   ODXACTR = {"/="}; 
A_GISVEC(A68_VC ,PDXACTR,ODXACTR,2)
static A68_40   SDXACTR = {"OVER"}; 
A_GISVEC(A68_VC ,TDXACTR,SDXACTR,4)
static A68_120   UDXACTR = {"MOD"}; 
A_GISVEC(A68_VC ,VDXACTR,UDXACTR,3)
static A68_125   WDXACTR = {"**"}; 
A_GISVEC(A68_VC ,XDXACTR,WDXACTR,2)
static A68_120   ZDXACTR = {"SHL"}; 
A_GISVEC(A68_VC ,AEXACTR,ZDXACTR,3)
static A68_120   BEXACTR = {"SHR"}; 
A_GISVEC(A68_VC ,CEXACTR,BEXACTR,3)
static A68_40   DEXACTR = {"ELEM"}; 
A_GISVEC(A68_VC ,EEXACTR,DEXACTR,4)
static A68_121   FEXACTR = {"PLUSAB"}; 
A_GISVEC(A68_VC ,GEXACTR,FEXACTR,6)
static A68_93   HEXACTR = {"MINUSAB"}; 
A_GISVEC(A68_VC ,IEXACTR,HEXACTR,7)
static A68_93   JEXACTR = {"TIMESAB"}; 
A_GISVEC(A68_VC ,KEXACTR,JEXACTR,7)
static A68_121   LEXACTR = {"OVERAB"}; 
A_GISVEC(A68_VC ,MEXACTR,LEXACTR,6)
static A68_123   NEXACTR = {"MODAB"}; 
A_GISVEC(A68_VC ,OEXACTR,NEXACTR,5)
static A68_123   PEXACTR = {"DIVAB"}; 
A_GISVEC(A68_VC ,QEXACTR,PEXACTR,5)
static A68_125   REXACTR = {"IS"}; 
A_GISVEC(A68_VC ,SEXACTR,REXACTR,2)
static A68_40   TEXACTR = {"ISNT"}; 
A_GISVEC(A68_VC ,UEXACTR,TEXACTR,4)
static A68_120   VEXACTR = {"AND"}; 
A_GISVEC(A68_VC ,WEXACTR,VEXACTR,3)
static A68_125   XEXACTR = {"OR"}; 
A_GISVEC(A68_VC ,YEXACTR,XEXACTR,2)
static A68_121   ZEXACTR = {"PLUSTO"}; 
A_GISVEC(A68_VC ,AFXACTR,ZEXACTR,6)
static A68_123   BFXACTR = {"CYCLE"}; 
A_GISVEC(A68_VC ,CFXACTR,BFXACTR,5)
static A68_140   DFXACTR = {"not in standard prelude"}; 
A_GISVEC(A68_VC ,EFXACTR,DFXACTR,23)
static A68_134   HFXACTR = {" (of surrounding clause too)="}; 
A_GISVEC(A68_VC ,JFXACTR,HFXACTR,29)
static A68_139   RFXACTR = {"oper                      (fn="}; 
static A68_140   SFXACTR = {"statgrab | 1 operand | "}; 
static A68_141   TFXACTR = {"local generation"}; 
A_GISVEC(A68_VC ,VFXACTR,TFXACTR,16)
static A68_138   WFXACTR = {"heap generation"}; 
A_GISVEC(A68_VC ,XFXACTR,WFXACTR,15)
A_GISVEC(A68_VC ,ZFXACTR,SFXACTR,23)
static A68_136   AGXACTR = {"parampack | "}; 
static A68_142   BGXACTR = {" operands | mode of proc"}; 
A_GISVEC(A68_VC ,CGXACTR,AGXACTR,12)
A_GISVEC(A68_VC ,DGXACTR,BGXACTR,24)
static A68_143   EGXACTR = {"select | 1 operand | "}; 
static A68_144   FGXACTR = {"th field | result mode"}; 
A_GISVEC(A68_VC ,GGXACTR,EGXACTR,21)
A_GISVEC(A68_VC ,HGXACTR,FGXACTR,22)
static A68_139   IGXACTR = {"copy | 1 operand | result mode"}; 
A_GISVEC(A68_VC ,JGXACTR,IGXACTR,30)
static A68_93   KGXACTR = {"trim | "}; 
static A68_136   LGXACTR = {" operands | "}; 
static A68_125   PGXACTR = {"a:"}; 
A_GISVEC(A68_VC ,RGXACTR,PGXACTR,2)
static A68_125   SGXACTR = {":b"}; 
A_GISVEC(A68_VC ,TGXACTR,SGXACTR,2)
static A68_120   UGXACTR = {"a:b"}; 
A_GISVEC(A68_VC ,VGXACTR,UGXACTR,3)
static A68_125   WGXACTR = {"@c"}; 
A_GISVEC(A68_VC ,XGXACTR,WGXACTR,2)
static A68_40   YGXACTR = {"a:@c"}; 
A_GISVEC(A68_VC ,ZGXACTR,YGXACTR,4)
static A68_40   AHXACTR = {":b@c"}; 
A_GISVEC(A68_VC ,BHXACTR,AHXACTR,4)
static A68_123   CHXACTR = {"a:b@c"}; 
A_GISVEC(A68_VC ,DHXACTR,CHXACTR,5)
static A68_129   EHXACTR = {""}; 
A_GISVEC(A68_VC ,FHXACTR,EHXACTR,0)
static A68_135   GHXACTR = {" (set LWB)"}; 
A_GISVEC(A68_VC ,IHXACTR,GHXACTR,10)
static A68_129   JHXACTR = {""}; 
A_GISVEC(A68_VC ,KHXACTR,JHXACTR,0)
A_GISVEC(A68_VC ,LHXACTR,KGXACTR,7)
A_GISVEC(A68_VC ,MHXACTR,LGXACTR,12)
static A68_138   NHXACTR = {"simple index | "}; 
static A68_136   OHXACTR = {" operands | "}; 
static A68_145   PHXACTR = {" subscripts | result mode"}; 
A_GISVEC(A68_VC ,QHXACTR,NHXACTR,15)
A_GISVEC(A68_VC ,SHXACTR,OHXACTR,12)
A_GISVEC(A68_VC ,THXACTR,PHXACTR,25)
static A68_146   UHXACTR = {"trim index | "}; 
static A68_140   VHXACTR = {" operands | result mode"}; 
A_GISVEC(A68_VC ,WHXACTR,UHXACTR,13)
A_GISVEC(A68_VC ,YHXACTR,VHXACTR,23)
static A68_147   ZHXACTR = {"dyngrab | 2 operands | result mode"}; 
A_GISVEC(A68_VC ,AIXACTR,ZHXACTR,34)
static A68_146   BIXACTR = {"bound pack | "}; 
static A68_140   CIXACTR = {" operands | result mode"}; 
A_GISVEC(A68_VC ,DIXACTR,BIXACTR,13)
A_GISVEC(A68_VC ,EIXACTR,CIXACTR,23)
static A68_143   FIXACTR = {"dyadic op | opnumber="}; 
static A68_125   GIXACTR = {"=\""}; 
static A68_136   HIXACTR = {"\" | version="}; 
static A68_137   IIXACTR = {" | result mode"}; 
A_GISVEC(A68_VC ,JIXACTR,FIXACTR,21)
A_GISVEC(A68_VC ,LIXACTR,GIXACTR,2)
A_GISVEC(A68_VC ,NIXACTR,HIXACTR,12)
A_GISVEC(A68_VC ,SIXACTR,IIXACTR,14)
static A68_144   TIXACTR = {"monadic op | opnumber="}; 
static A68_125   UIXACTR = {"=\""}; 
static A68_120   YIXACTR = {"UPB"}; 
A_GISVEC(A68_VC ,ZIXACTR,YIXACTR,3)
static A68_120   AJXACTR = {"LWB"}; 
A_GISVEC(A68_VC ,BJXACTR,AJXACTR,3)
static A68_120   CJXACTR = {"NOT"}; 
A_GISVEC(A68_VC ,DJXACTR,CJXACTR,3)
static A68_120   EJXACTR = {"ABS"}; 
A_GISVEC(A68_VC ,FJXACTR,EJXACTR,3)
static A68_120   GJXACTR = {"BIN"}; 
A_GISVEC(A68_VC ,HJXACTR,GJXACTR,3)
static A68_40   IJXACTR = {"REPR"}; 
A_GISVEC(A68_VC ,JJXACTR,IJXACTR,4)
static A68_40   KJXACTR = {"LENG"}; 
A_GISVEC(A68_VC ,LJXACTR,KJXACTR,4)
static A68_93   MJXACTR = {"SHORTEN"}; 
A_GISVEC(A68_VC ,NJXACTR,MJXACTR,7)
static A68_120   OJXACTR = {"ODD"}; 
A_GISVEC(A68_VC ,PJXACTR,OJXACTR,3)
static A68_40   QJXACTR = {"SIGN"}; 
A_GISVEC(A68_VC ,RJXACTR,QJXACTR,4)
static A68_123   SJXACTR = {"ROUND"}; 
A_GISVEC(A68_VC ,TJXACTR,SJXACTR,5)
static A68_121   UJXACTR = {"ENTIER"}; 
A_GISVEC(A68_VC ,VJXACTR,UJXACTR,6)
static A68_125   WJXACTR = {"RE"}; 
A_GISVEC(A68_VC ,XJXACTR,WJXACTR,2)
static A68_125   YJXACTR = {"IM"}; 
A_GISVEC(A68_VC ,ZJXACTR,YJXACTR,2)
static A68_120   AKXACTR = {"ARG"}; 
A_GISVEC(A68_VC ,BKXACTR,AKXACTR,3)
static A68_40   CKXACTR = {"CONJ"}; 
A_GISVEC(A68_VC ,DKXACTR,CKXACTR,4)
static A68_140   EKXACTR = {"not in standard prelude"}; 
A_GISVEC(A68_VC ,FKXACTR,EKXACTR,23)
static A68_136   GKXACTR = {"\" | version="}; 
static A68_137   HKXACTR = {" | result mode"}; 
A_GISVEC(A68_VC ,IKXACTR,TIXACTR,22)
A_GISVEC(A68_VC ,KKXACTR,UIXACTR,2)
A_GISVEC(A68_VC ,LKXACTR,GKXACTR,12)
A_GISVEC(A68_VC ,QKXACTR,HKXACTR,14)
static A68_143   RKXACTR = {"straight | 2 operands"}; 
static A68_148   SKXACTR = {" | mode of original="}; 
static A68_123   TKXACTR = {"UNION"}; 
A_GISVEC(A68_VC ,VKXACTR,TKXACTR,5)
static A68_121   WKXACTR = {"VECTOR"}; 
A_GISVEC(A68_VC ,XKXACTR,WKXACTR,6)
static A68_149   YKXACTR = {"STRUCT or I-STRUCT"}; 
A_GISVEC(A68_VC ,ZKXACTR,YKXACTR,18)
static A68_122   ALXACTR = {"ARRY of "}; 
static A68_132   BLXACTR = {" dimensions"}; 
A_GISVEC(A68_VC ,CLXACTR,ALXACTR,8)
A_GISVEC(A68_VC ,ELXACTR,BLXACTR,11)
A_GISVEC(A68_VC ,FLXACTR,RKXACTR,21)
A_GISVEC(A68_VC ,GLXACTR,SKXACTR,20)
static A68_150   HLXACTR = {"prestraight | 1 operand | result mode"}; 
A_GISVEC(A68_VC ,ILXACTR,HLXACTR,37)
static A68_151   JLXACTR = {"strindex | 2 operands | result mode"}; 
A_GISVEC(A68_VC ,KLXACTR,JLXACTR,35)
static A68_152   LLXACTR = {"assign | 2 operands | param="}; 
static A68_137   MLXACTR = {" | result mode"}; 
A_GISVEC(A68_VC ,NLXACTR,LLXACTR,28)
A_GISVEC(A68_VC ,OLXACTR,MLXACTR,14)
static A68_153   PLXACTR = {"default bound | no operands | result mode"}; 
A_GISVEC(A68_VC ,QLXACTR,PLXACTR,41)
static A68_154   RLXACTR = {"deref | result mode"}; 
A_GISVEC(A68_VC ,SLXACTR,RLXACTR,19)
static A68_149   TLXACTR = {"call | result mode"}; 
static A68_155   ULXACTR = {" | not operator or generator routine"}; 
A_GISVEC(A68_VC ,WLXACTR,ULXACTR,36)
static A68_156   XLXACTR = {" | invented local space generator"}; 
A_GISVEC(A68_VC ,YLXACTR,XLXACTR,33)
static A68_157   ZLXACTR = {" | invented heap space generator"}; 
A_GISVEC(A68_VC ,AMXACTR,ZLXACTR,32)
static A68_158   BMXACTR = {" | invented space generator within one"}; 
A_GISVEC(A68_VC ,CMXACTR,BMXACTR,38)
static A68_147   DMXACTR = {" | user defined or library routine"}; 
A_GISVEC(A68_VC ,EMXACTR,DMXACTR,34)
static A68_159   FMXACTR = {"ERROR: unknown PARAM field"}; 
A_GISVEC(A68_VC ,GMXACTR,FMXACTR,26)
A_GISVEC(A68_VC ,HMXACTR,TLXACTR,18)
static A68_40   IMXACTR = {"VOID"}; 
A_GISVEC(A68_VC ,JMXACTR,IMXACTR,4)
static A68_93   KMXACTR = {"NIL to "}; 
A_GISVEC(A68_VC ,LMXACTR,KMXACTR,7)
static A68_142   MMXACTR = {"GOTO | procedure to mode"}; 
A_GISVEC(A68_VC ,NMXACTR,MMXACTR,24)
static A68_143   OMXACTR = {"GOTO | coerce to mode"}; 
A_GISVEC(A68_VC ,PMXACTR,OMXACTR,21)
static A68_131   QMXACTR = {"REAL to COMPL | result mode"}; 
A_GISVEC(A68_VC ,RMXACTR,QMXACTR,27)
static A68_145   SMXACTR = {"INT to REAL | result mode"}; 
A_GISVEC(A68_VC ,TMXACTR,SMXACTR,25)
static A68_149   UMXACTR = {"xxib | result mode"}; 
A_GISVEC(A68_VC ,VMXACTR,UMXACTR,18)
static A68_152   WMXACTR = {"ARRAY to ARRAY | result mode"}; 
A_GISVEC(A68_VC ,XMXACTR,WMXACTR,28)
static A68_134   YMXACTR = {"VECTOR to ARRAY | result mode"}; 
A_GISVEC(A68_VC ,ZMXACTR,YMXACTR,29)
static A68_157   ANXACTR = {"I-STRUCT to VECTOR | result mode"}; 
A_GISVEC(A68_VC ,BNXACTR,ANXACTR,32)
static A68_144   CNXACTR = {"1 STRUCT | result mode"}; 
A_GISVEC(A68_VC ,DNXACTR,CNXACTR,22)
static A68_134   ENXACTR = {"unite | non UNION operand to "}; 
static A68_132   FNXACTR = {"th mode of "}; 
A_GISVEC(A68_VC ,GNXACTR,ENXACTR,29)
A_GISVEC(A68_VC ,HNXACTR,FNXACTR,11)
static A68_139   INXACTR = {"uniteu | UNION operand to mode"}; 
A_GISVEC(A68_VC ,JNXACTR,INXACTR,30)
static A68_149   KNXACTR = {"isarr | coerce to "}; 
static A68_157   LNXACTR = {" dimensional array | result mode"}; 
A_GISVEC(A68_VC ,MNXACTR,KNXACTR,18)
A_GISVEC(A68_VC ,NNXACTR,LNXACTR,32)
static A68_122   ONXACTR = {"SKIP to "}; 
A_GISVEC(A68_VC ,PNXACTR,ONXACTR,8)
static A68_148   QNXACTR = {"to VEC | result mode"}; 
A_GISVEC(A68_VC ,RNXACTR,QNXACTR,20)
static A68_144   SNXACTR = {"to ARRAY | result mode"}; 
A_GISVEC(A68_VC ,TNXACTR,SNXACTR,22)
static A68_132   UNXACTR = {"deunite to "}; 
A_GISVEC(A68_VC ,VNXACTR,UNXACTR,11)
static A68_139   WNXACTR = {"BITS to VEC BOOL | result mode"}; 
A_GISVEC(A68_VC ,XNXACTR,WNXACTR,30)
static A68_145   YNXACTR = {"vacuum | coerce EMPTY to "}; 
A_GISVEC(A68_VC ,ZNXACTR,YNXACTR,25)
static A68_135   AOXACTR = {"Y TYPE to "}; 
A_GISVEC(A68_VC ,BOXACTR,AOXACTR,10)
static A68_126   COXACTR = {"to X TYPE"}; 
A_GISVEC(A68_VC ,DOXACTR,COXACTR,9)
static A68_141   EOXACTR = {"static generator"}; 
A_GISVEC(A68_VC ,FOXACTR,EOXACTR,16)
static A68_121   GOXACTR = {"format"}; 
A_GISVEC(A68_VC ,HOXACTR,GOXACTR,6)
static A68_123   IOXACTR = {"SPARE"}; 
A_GISVEC(A68_VC ,JOXACTR,IOXACTR,5)
A_GISVEC(A68_VC ,KOXACTR,RFXACTR,30)
static A68_131   MOXACTR = {"transiddec                ("}; 
static A68_148   NOXACTR = {"identity declaration"}; 
A_GISVEC(A68_VC ,POXACTR,NOXACTR,20)
static A68_148   QOXACTR = {"variable declaration"}; 
A_GISVEC(A68_VC ,ROXACTR,QOXACTR,20)
static A68_141   SOXACTR = {"formal parameter"}; 
A_GISVEC(A68_VC ,TOXACTR,SOXACTR,16)
static A68_132   UOXACTR = {"FOR control"}; 
A_GISVEC(A68_VC ,VOXACTR,UOXACTR,11)
static A68_148   WOXACTR = {"initialised variable"}; 
A_GISVEC(A68_VC ,XOXACTR,WOXACTR,20)
static A68_152   YOXACTR = {"formal conformity identifier"}; 
A_GISVEC(A68_VC ,ZOXACTR,YOXACTR,28)
static A68_137   APXACTR = {"FORALL control"}; 
A_GISVEC(A68_VC ,BPXACTR,APXACTR,14)
static A68_160   CPXACTR = {"dummy declaration"}; 
A_GISVEC(A68_VC ,DPXACTR,CPXACTR,17)
static A68_133   EPXACTR = {"ERROR: unknown TRANSIDDEC type="}; 
A_GISVEC(A68_VC ,FPXACTR,EPXACTR,31)
static A68_126   HPXACTR = {" | name=\""}; 
static A68_122   IPXACTR = {"\" | mode"}; 
static A68_134   JPXACTR = {" (of surrounding clause too)="}; 
A_GISVEC(A68_VC ,LPXACTR,JPXACTR,29)
static A68_126   NPXACTR = {" | decno="}; 
A_GISVEC(A68_VC ,OPXACTR,MOXACTR,27)
A_GISVEC(A68_VC ,PPXACTR,HPXACTR,9)
A_GISVEC(A68_VC ,QPXACTR,IPXACTR,8)
A_GISVEC(A68_VC ,WPXACTR,NPXACTR,9)
static A68_156   ZPXACTR = {"routine                   (name=\""}; 
static A68_93   AQXACTR = {" | mode"}; 
static A68_134   BQXACTR = {" (of surrounding clause too)="}; 
A_GISVEC(A68_VC ,DQXACTR,BQXACTR,29)
static A68_134   FQXACTR = {" | proc of unlimited lifetime"}; 
A_GISVEC(A68_VC ,HQXACTR,FQXACTR,29)
static A68_161   IQXACTR = {" | only external id is declared in CONTEXT VOID module"}; 
A_GISVEC(A68_VC ,JQXACTR,IQXACTR,54)
static A68_162   KQXACTR = {" | decno of external id with smallest lifetime="}; 
static A68_125   LQXACTR = {"=\""}; 
A_GISVEC(A68_VC ,MQXACTR,KQXACTR,47)
A_GISVEC(A68_VC ,OQXACTR,LQXACTR,2)
static A68_135   RQXACTR = {" | rdenno="}; 
A_GISVEC(A68_VC ,SQXACTR,ZPXACTR,33)
A_GISVEC(A68_VC ,VQXACTR,AQXACTR,7)
A_GISVEC(A68_VC ,BRXACTR,RQXACTR,10)
static A68_131   ERXACTR = {"warn                      ("}; 
static A68_121   FRXACTR = {"assign"}; 
A_GISVEC(A68_VC ,HRXACTR,FRXACTR,6)
static A68_123   IRXACTR = {"ANDTH"}; 
A_GISVEC(A68_VC ,JRXACTR,IRXACTR,5)
static A68_40   KRXACTR = {"OREL"}; 
A_GISVEC(A68_VC ,LRXACTR,KRXACTR,4)
static A68_123   MRXACTR = {"index"}; 
A_GISVEC(A68_VC ,NRXACTR,MRXACTR,5)
static A68_135   ORXACTR = {"PLUSAB etc"}; 
A_GISVEC(A68_VC ,PRXACTR,ORXACTR,10)
static A68_121   QRXACTR = {"FORALL"}; 
A_GISVEC(A68_VC ,RRXACTR,QRXACTR,6)
static A68_40   SRXACTR = {"loop"}; 
A_GISVEC(A68_VC ,TRXACTR,SRXACTR,4)
static A68_145   URXACTR = {"ERROR: unknown WARN field"}; 
A_GISVEC(A68_VC ,VRXACTR,URXACTR,25)
A_GISVEC(A68_VC ,WRXACTR,ERXACTR,27)
static A68_156   YRXACTR = {"labdec                    (name=\""}; 
static A68_129   CSXACTR = {""}; 
A_GISVEC(A68_VC ,ESXACTR,CSXACTR,0)
static A68_156   FSXACTR = {" | at start serial clause; labno="}; 
A_GISVEC(A68_VC ,HSXACTR,FSXACTR,33)
static A68_163   JSXACTR = {"at start user written routine; GOTO external label | labno="}; 
A_GISVEC(A68_VC ,KSXACTR,JSXACTR,59)
static A68_126   MSXACTR = {" | labno "}; 
static A68_160   NSXACTR = {" is redefined as "}; 
A_GISVEC(A68_VC ,OSXACTR,MSXACTR,9)
A_GISVEC(A68_VC ,QSXACTR,NSXACTR,17)
static A68_156   SSXACTR = {" | actual label setting of labno="}; 
A_GISVEC(A68_VC ,TSXACTR,SSXACTR,33)
A_GISVEC(A68_VC ,VSXACTR,YRXACTR,33)
static A68_133   YSXACTR = {"uchoice                   (mode"}; 
static A68_134   ZSXACTR = {" (of surrounding clause too)="}; 
A_GISVEC(A68_VC ,BTXACTR,ZSXACTR,29)
static A68_126   DTXACTR = {" | param="}; 
A_GISVEC(A68_VC ,ETXACTR,YSXACTR,31)
A_GISVEC(A68_VC ,LTXACTR,DTXACTR,9)
static A68_131   OTXACTR = {"callmodule                ("}; 
A_GISVEC(A68_VC ,PTXACTR,OTXACTR,27)
static A68_156   STXACTR = {"keeps                     (start="}; 
static A68_40   TTXACTR = {"TRUE"}; 
A_GISVEC(A68_VC ,VTXACTR,TTXACTR,4)
static A68_123   WTXACTR = {"FALSE"}; 
A_GISVEC(A68_VC ,XTXACTR,WTXACTR,5)
A_GISVEC(A68_VC ,YTXACTR,STXACTR,33)
static A68_159   AUXACTR = {"load:code                 "}; 
static A68_93   BUXACTR = {"( mode="}; 
static A68_137   CUXACTR = {" | parameters="}; 
static A68_125   DUXACTR = {" )"}; 
A_GISVEC(A68_VC ,EUXACTR,AUXACTR,26)
A_GISVEC(A68_VC ,FUXACTR,BUXACTR,7)
A_GISVEC(A68_VC ,HUXACTR,CUXACTR,14)
A_GISVEC(A68_VC ,JUXACTR,DUXACTR,2)
static A68_153   LUXACTR = {"formatx                   (info=(nochars="}; 
static A68_132   MUXACTR = {" | nocases="}; 
static A68_138   NUXACTR = {" | max nesting="}; 
static A68_126   OUXACTR = {") | text="}; 
A_GISVEC(A68_VC ,PUXACTR,LUXACTR,41)
A_GISVEC(A68_VC ,RUXACTR,MUXACTR,11)
A_GISVEC(A68_VC ,TUXACTR,NUXACTR,15)
A_GISVEC(A68_VC ,VUXACTR,OUXACTR,9)
static A68_156   WUXACTR = {"ERROR: unknown PRIMARY imperative"}; 
A_GISVEC(A68_VC ,XUXACTR,WUXACTR,33)
static A68_131   ZUXACTR = {"separator                 ("}; 
static A68_40   AVXACTR = {"THEN"}; 
A_GISVEC(A68_VC ,CVXACTR,AVXACTR,4)
static A68_125   DVXACTR = {"IN"}; 
A_GISVEC(A68_VC ,EVXACTR,DVXACTR,2)
static A68_120   FVXACTR = {"INu"}; 
A_GISVEC(A68_VC ,GVXACTR,FVXACTR,3)
static A68_122   HVXACTR = {"ic comma"}; 
A_GISVEC(A68_VC ,IVXACTR,HVXACTR,8)
static A68_122   JVXACTR = {"cc comma"}; 
A_GISVEC(A68_VC ,KVXACTR,JVXACTR,8)
static A68_40   LVXACTR = {"EXIT"}; 
A_GISVEC(A68_VC ,MVXACTR,LVXACTR,4)
static A68_120   NVXACTR = {"OUT"}; 
A_GISVEC(A68_VC ,OVXACTR,NVXACTR,3)
static A68_40   PVXACTR = {"OUTu"}; 
A_GISVEC(A68_VC ,QVXACTR,PVXACTR,4)
static A68_40   RVXACTR = {"ELSE"}; 
A_GISVEC(A68_VC ,SVXACTR,RVXACTR,4)
static A68_135   TVXACTR = {"coll comma"}; 
A_GISVEC(A68_VC ,UVXACTR,TVXACTR,10)
static A68_40   VVXACTR = {"semi"}; 
A_GISVEC(A68_VC ,WVXACTR,VVXACTR,4)
static A68_125   XVXACTR = {"DO"}; 
A_GISVEC(A68_VC ,YVXACTR,XVXACTR,2)
static A68_123   ZVXACTR = {"WHILE"}; 
A_GISVEC(A68_VC ,AWXACTR,ZVXACTR,5)
static A68_152   BWXACTR = {"ERROR: unknown SEPARATOR fn="}; 
A_GISVEC(A68_VC ,CWXACTR,BWXACTR,28)
static A68_134   EWXACTR = {" | mode & param are undefined"}; 
A_GISVEC(A68_VC ,GWXACTR,EWXACTR,29)
static A68_93   HWXACTR = {" | mode"}; 
static A68_134   IWXACTR = {" (of surrounding clause too)="}; 
A_GISVEC(A68_VC ,KWXACTR,IWXACTR,29)
static A68_126   MWXACTR = {" | param="}; 
A_GISVEC(A68_VC ,NWXACTR,HWXACTR,7)
A_GISVEC(A68_VC ,TWXACTR,MWXACTR,9)
A_GISVEC(A68_VC ,VWXACTR,ZUXACTR,27)
static A68_131   YWXACTR = {"starter                   ("}; 
static A68_93   ZWXACTR = {"routine"}; 
A_GISVEC(A68_VC ,BXXACTR,ZWXACTR,7)
static A68_40   CXXACTR = {"decs"}; 
A_GISVEC(A68_VC ,DXXACTR,CXXACTR,4)
static A68_122   EXXACTR = {"IF/WHILE"}; 
A_GISVEC(A68_VC ,FXXACTR,EXXACTR,8)
static A68_40   GXXACTR = {"CASE"}; 
A_GISVEC(A68_VC ,HXXACTR,GXXACTR,4)
static A68_123   IXXACTR = {"CASEu"}; 
A_GISVEC(A68_VC ,JXXACTR,IXXACTR,5)
static A68_123   KXXACTR = {"BEGIN"}; 
A_GISVEC(A68_VC ,LXXACTR,KXXACTR,5)
static A68_135   MXXACTR = {"coll BEGIN"}; 
A_GISVEC(A68_VC ,NXXACTR,MXXACTR,10)
static A68_120   OXXACTR = {"FOR"}; 
A_GISVEC(A68_VC ,PXXACTR,OXXACTR,3)
static A68_121   QXXACTR = {"FORALL"}; 
A_GISVEC(A68_VC ,RXXACTR,QXXACTR,6)
static A68_159   SXXACTR = {"ERROR: unknown STARTER fn="}; 
A_GISVEC(A68_VC ,TXXACTR,SXXACTR,26)
static A68_93   VXXACTR = {" | mode"}; 
static A68_134   WXXACTR = {" (of surrounding clause too)="}; 
A_GISVEC(A68_VC ,YXXACTR,WXXACTR,29)
static A68_137   AYXACTR = {" | result mode"}; 
static A68_134   BYXACTR = {" (of surrounding clause too)="}; 
A_GISVEC(A68_VC ,DYXACTR,BYXACTR,29)
static A68_126   FYXACTR = {"undefined"}; 
A_GISVEC(A68_VC ,HYXACTR,FYXACTR,9)
A_GISVEC(A68_VC ,NYXACTR,YWXACTR,27)
A_GISVEC(A68_VC ,PYXACTR,VXXACTR,7)
A_GISVEC(A68_VC ,VYXACTR,AYXACTR,14)
static A68_131   XYXACTR = {"terminator                ("}; 
static A68_125   YYXACTR = {"FI"}; 
A_GISVEC(A68_VC ,AZXACTR,YYXACTR,2)
static A68_40   BZXACTR = {"ESAC"}; 
A_GISVEC(A68_VC ,CZXACTR,BZXACTR,4)
static A68_123   DZXACTR = {"ESACu"}; 
A_GISVEC(A68_VC ,EZXACTR,DZXACTR,5)
static A68_120   FZXACTR = {"END"}; 
A_GISVEC(A68_VC ,GZXACTR,FZXACTR,3)
static A68_122   HZXACTR = {"coll END"}; 
A_GISVEC(A68_VC ,IZXACTR,HZXACTR,8)
static A68_125   JZXACTR = {"OD"}; 
A_GISVEC(A68_VC ,KZXACTR,JZXACTR,2)
static A68_132   LZXACTR = {"routine end"}; 
A_GISVEC(A68_VC ,MZXACTR,LZXACTR,11)
static A68_121   NZXACTR = {"FINISH"}; 
A_GISVEC(A68_VC ,OZXACTR,NZXACTR,6)
static A68_122   PZXACTR = {"opt bool"}; 
A_GISVEC(A68_VC ,QZXACTR,PZXACTR,8)
static A68_134   RZXACTR = {"ERROR: unknown TERMINATOR fn="}; 
A_GISVEC(A68_VC ,SZXACTR,RZXACTR,29)
A_GISVEC(A68_VC ,UZXACTR,XYXACTR,27)
static A68_157   ZZXACTR = {"composer:closure          (body="}; 
static A68_136   AAYACTR = {" | moduleno="}; 
A_GISVEC(A68_VC ,BAYACTR,ZZXACTR,32)
A_GISVEC(A68_VC ,DAYACTR,AAYACTR,12)
static A68_155   GAYACTR = {"composer:synthetic module (moduleno="}; 
static A68_123   HAYACTR = {" | i="}; 
static A68_123   IAYACTR = {" | j="}; 
A_GISVEC(A68_VC ,JAYACTR,GAYACTR,36)
A_GISVEC(A68_VC ,LAYACTR,HAYACTR,5)
A_GISVEC(A68_VC ,NAYACTR,IAYACTR,5)
static A68_155   QAYACTR = {"composer:extern module    (moduleno="}; 
static A68_126   RAYACTR = {" | name=\""}; 
static A68_132   SAYACTR = {"\" | uname=\""}; 
static A68_132   TAYACTR = {"\" | lname=\""}; 
static A68_132   UAYACTR = {"\" | gname=\""}; 
A_GISVEC(A68_VC ,VAYACTR,QAYACTR,36)
A_GISVEC(A68_VC ,XAYACTR,RAYACTR,9)
A_GISVEC(A68_VC ,YAYACTR,SAYACTR,11)
A_GISVEC(A68_VC ,ZAYACTR,TAYACTR,11)
A_GISVEC(A68_VC ,ABYACTR,UAYACTR,11)
static A68_147   CBYACTR = {"ERROR: unknown COMPOSER imperative"}; 
A_GISVEC(A68_VC ,DBYACTR,CBYACTR,34)
static A68_40   EBYACTR = {"VOID"}; 
A_GISVEC(A68_VC ,FBYACTR,EBYACTR,4)
static A68_145   GBYACTR = {"ERROR: unknown imperative"}; 
A_GISVEC(A68_VC ,HBYACTR,GBYACTR,25)
typedef struct   /* env of non-global proc */
{
int dummy;
} TXWACTR_generator;

A_STATIC A68_VOID  XUWACTR_generator(A68_BOOL  WUWACTR_anonymous, A68_115  *ReturnedValue);

A_STATIC A68_VOID  ZUWACTR_generator(A68_BOOL  YUWACTR_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  PXWACTR_bitmnemonic(A68_BITS  Props, A68_BOOL  Whichxbit, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  SXWACTR_generator(A68_BOOL  QXWACTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  SYWACTR_imperativemnemonic(A68_67  Imperative, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  VCXACTR_standardpreludeops(A68_INT  Opnumber, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  ZUWACTR_generator(A68_BOOL  YUWACTR_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  AVWACTR;  /* clause result */
A68_VC  BVWACTR;  /* OPERATORS - dynamic generator */
{ 
BVWACTR.upb = 0 ;
( YUWACTR_anonymous? A_VLOC(A68_CHAR ,BVWACTR): A_VHEAP(A68_CHAR ,BVWACTR) );
AVWACTR = BVWACTR;
} 
*ReturnedValue = (AVWACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  SXWACTR_generator(A68_BOOL  QXWACTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((TXWACTR_generator *)NonLocals)->x)
{ 
A68_VC  UXWACTR;  /* clause result */
A68_VC  VXWACTR;  /* OPERATORS - dynamic generator */
{ 
VXWACTR.upb = 0 ;
( QXWACTR_anonymous? A_VLOC(A68_CHAR ,VXWACTR): A_VHEAP(A68_CHAR ,VXWACTR) );
UXWACTR = VXWACTR;
} 
*ReturnedValue = (UXWACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  VCXACTR_standardpreludeops(A68_INT  Opnumber, A68_VC  *ReturnedValue)
{ 
A68_VC  WCXACTR;  /* clause result */
A68_VC  XCXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  YCXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  HDXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  IDXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  NDXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  QDXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  RDXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  YDXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(standardpreludeops);
 /* line 244: */
 /* line 245: */
switch ( Opnumber )
{ 
case 1: 
WCXACTR = A_HVEC(XCXACTR,'+',A68_CHAR );
break;
case 2: 
WCXACTR = A_HVEC(YCXACTR,'-',A68_CHAR );
break;
case 3: 
WCXACTR = ADXACTR;
break;
case 4: 
WCXACTR = CDXACTR;
break;
case 5: 
 /* line 246: */
WCXACTR = EDXACTR;
break;
case 6: 
WCXACTR = GDXACTR;
break;
case 7: 
WCXACTR = A_HVEC(HDXACTR,'<',A68_CHAR );
break;
case 8: 
WCXACTR = A_HVEC(IDXACTR,'>',A68_CHAR );
break;
case 9: 
WCXACTR = KDXACTR;
break;
case 10: 
 /* line 247: */
WCXACTR = MDXACTR;
break;
case 11: 
WCXACTR = A_HVEC(NDXACTR,'=',A68_CHAR );
break;
case 12: 
WCXACTR = PDXACTR;
break;
case 13: 
WCXACTR = A_HVEC(QDXACTR,'*',A68_CHAR );
break;
case 14: 
WCXACTR = A_HVEC(RDXACTR,'/',A68_CHAR );
break;
case 15: 
 /* line 248: */
WCXACTR = TDXACTR;
break;
case 16: 
WCXACTR = VDXACTR;
break;
case 17: 
WCXACTR = XDXACTR;
break;
case 18: 
WCXACTR = A_HVEC(YDXACTR,'I',A68_CHAR );
break;
case 19: 
WCXACTR = AEXACTR;
break;
case 20: 
 /* line 249: */
WCXACTR = CEXACTR;
break;
case 21: 
WCXACTR = EEXACTR;
break;
case 22: 
WCXACTR = GEXACTR;
break;
case 23: 
WCXACTR = IEXACTR;
break;
case 24: 
WCXACTR = KEXACTR;
break;
case 25: 
 /* line 250: */
WCXACTR = MEXACTR;
break;
case 26: 
WCXACTR = OEXACTR;
break;
case 27: 
WCXACTR = QEXACTR;
break;
case 28: 
WCXACTR = SEXACTR;
break;
case 29: 
WCXACTR = UEXACTR;
break;
case 30: 
 /* line 251: */
WCXACTR = WEXACTR;
break;
case 31: 
WCXACTR = YEXACTR;
break;
case 32: 
 /* line 252: */
WCXACTR = AFXACTR;
break;
case 33: 
 /* line 253: */
WCXACTR = CFXACTR;
break;
default: 
WCXACTR = EFXACTR;
break;
} 
A_PROC_EXIT(standardpreludeops);
*ReturnedValue = (WCXACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  XUWACTR_generator(A68_BOOL  WUWACTR_anonymous, A68_115  *ReturnedValue)
{ 
A68_118  CVWACTR_anonymous;
A68_VC  DVWACTR;  /* avoid structure result */
A68_117 * EVWACTR;  /* YIELD */
A68_115  FVWACTR;  /* clause result */
{ 
ZUWACTR_generator( WUWACTR_anonymous, &DVWACTR );
EVWACTR = (&((&CVWACTR_anonymous)->Name)) ;
(*EVWACTR) = DVWACTR;
FVWACTR = CVWACTR_anonymous;
} 
*ReturnedValue = (FVWACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  PXWACTR_bitmnemonic(A68_BITS  Props, A68_BOOL  Whichxbit, A68_VC  *ReturnedValue)
{ 
A68_109  RXWACTR_generator;   /* proc value of non-global proc */
A68_117  XXWACTR;  /* avoid structure result */
A68_117  WXWACTR_output;
A68_VC  AYWACTR;  /* YIELD */
A68_VC  BYWACTR;  /* OPERATORS - copy to flex */
A68_119  CYWACTR;  /* clause result */
A68_119  DYWACTR_whichimperative;
A68_115  EYWACTR_b;
A68_115 * FYWACTR;  /* forall control - []x */
A68_INT  GYWACTR;  /* forall loop counter */
A68_VC  HYWACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  LYWACTR;  /* clause result */
A68_VC  PYWACTR;  /* OPERATORS - trim index */
A68_VC  QYWACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(bitmnemonic);
 /* line 146: */
 /* line 147: */
{ 
A_CLOSURE( RXWACTR_generator, SXWACTR_generator, TXWACTR_generator );
A_CALLPROC(RXWACTR_generator,(A68_TRUE, &XXWACTR),(A68_TRUE, &XXWACTR,(RXWACTR_generator).nonlocals));
WXWACTR_output = XXWACTR;
AYWACTR = ZXWACTR ;
WXWACTR_output = A_VCOPY(AYWACTR,BYWACTR,A68_CHAR );
 /* line 148: */
if ( Whichxbit )
{ 
CYWACTR = PWWACTR_controlbits;
} 
else
{ 
CYWACTR = EXWACTR_routinebits;
} 
DYWACTR_whichimperative = CYWACTR;
 /* line 150: */
 /* line 151: */
GYWACTR = DYWACTR_whichimperative.dim[0].upb - DYWACTR_whichimperative.dim[0].lwb;
FYWACTR = DYWACTR_whichimperative.data;
for (;GYWACTR-- >= 0;
(FYWACTR += DYWACTR_whichimperative.dim[0].stride
) )
{
EYWACTR_b = *FYWACTR;
 /* line 152: */
 /* line 153: */
if ( ((A68_BITS )(EYWACTR_b.Value&Props)!=(A68_BITS )0) )
{ 
 /* line 154: */
 /* line 155: */
A_VC_PLUSAB(WXWACTR_output,A_VC_PLUS(EYWACTR_b.Name,A_HVEC(HYWACTR,',',A68_CHAR )));
} 
}
 /* line 156: */
 /* line 157: */
 /* line 158: */
if ( A_VC_EQ(WXWACTR_output,JYWACTR) )
{ 
 /* line 159: */
LYWACTR = MYWACTR;
} 
else
{ 
 /* line 160: */
 /* line 161: */
LYWACTR = A_VC_PLUS(A_VC_PLUS(OYWACTR,A_VTRIM(PYWACTR,(*(&WXWACTR_output)),A_VTSCRIPT(&(PYWACTR.upb),(*(&WXWACTR_output)).upb,1,(WXWACTR_output.upb-1)))),A_HVEC(QYWACTR,')',A68_CHAR ));
} 
} 
A_PROC_EXIT(bitmnemonic);
*ReturnedValue = (LYWACTR);
return;
} 
#undef NL

A68_VOID  SYWACTR_imperativemnemonic(A68_67  Imperative, A68_VC  *ReturnedValue)
{ 
A68_67  TYWACTR;  /* united object - for case conformity */
A68_83  UYWACTR_p;
A68_83  VYWACTR;  /* united object - for case conformity */
A68_82  WYWACTR_l;
A68_82  XYWACTR;  /* united object - for case conformity */
A68_68  YYWACTR_si;
A68_VC  BZWACTR;  /* clause result */
A68_VC  JZWACTR;  /* avoid structure result */
A68_VC  KZWACTR;  /* clause result */
A68_INT  MZWACTR_i;
A68_VC  QZWACTR;  /* avoid structure result */
A68_VC  SZWACTR;  /* avoid structure result */
A68_VC  TZWACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_BOOL  UZWACTR_b;
A68_VC  XZWACTR;  /* clause result */
A68_66  CAXACTR_c;
A68_69  FAXACTR_sl;
A68_VC  IAXACTR;  /* avoid structure result */
A68_70  JAXACTR_n;
A68_VC  MAXACTR;  /* clause result */
A68_VC  OAXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  RAXACTR;  /* ADICOPS - ABS INT */
A68_VC  SAXACTR;  /* avoid structure result */
A68_VC  TAXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  UAXACTR;  /* ADICOPS - ABS INT */
A68_VC  VAXACTR;  /* avoid structure result */
A68_54  XAXACTR_a;
A68_VC  ABXACTR;  /* clause result */
A68_VC  CBXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  FBXACTR;  /* ADICOPS - ABS INT */
A68_VC  GBXACTR;  /* avoid structure result */
A68_VC  HBXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  IBXACTR;  /* ADICOPS - ABS INT */
A68_VC  JBXACTR;  /* avoid structure result */
A68_VC  LBXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_71  MBXACTR_o;
A68_VC  PBXACTR;  /* clause result */
A68_VC  RBXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  UBXACTR;  /* ADICOPS - ABS INT */
A68_VC  VBXACTR;  /* avoid structure result */
A68_VC  WBXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  XBXACTR;  /* ADICOPS - ABS INT */
A68_VC  YBXACTR;  /* avoid structure result */
A68_VC  ACXACTR;  /* avoid structure result */
A68_72  BCXACTR_st;
A68_VC  ECXACTR;  /* clause result */
A68_VC  GCXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  JCXACTR;  /* ADICOPS - ABS INT */
A68_VC  KCXACTR;  /* avoid structure result */
A68_VC  LCXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  MCXACTR;  /* ADICOPS - ABS INT */
A68_VC  NCXACTR;  /* avoid structure result */
A68_VC  PCXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_73  SCXACTR_o;
A68_VC  FFXACTR;  /* avoid structure result */
A68_VC  GFXACTR_p;
A68_VC  IFXACTR;  /* clause result */
A68_VC  KFXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  LFXACTR;  /* ADICOPS - ABS INT */
A68_VC  MFXACTR;  /* avoid structure result */
A68_VC  NFXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  OFXACTR;  /* ADICOPS - ABS INT */
A68_VC  PFXACTR;  /* avoid structure result */
A68_VC  QFXACTR_m;
A68_VC  UFXACTR;  /* clause result */
A68_VC  YFXACTR;  /* clause result */
A68_INT  MGXACTR;  /* ADICOPS - MOD */
A68_INT  NGXACTR;  /* ADICOPS - MOD */
A68_INT  OGXACTR;  /* ADICOPS - MOD */
A68_VC  QGXACTR;  /* clause result */
A68_VC  HHXACTR;  /* clause result */
A68_VC  RHXACTR;  /* avoid structure result */
A68_VC  XHXACTR;  /* avoid structure result */
A68_VC  KIXACTR;  /* avoid structure result */
A68_VC  MIXACTR;  /* avoid structure result */
A68_INT  OIXACTR;  /* ADICOPS - MOD */
A68_INT  PIXACTR;  /* ADICOPS - MOD */
A68_INT  QIXACTR;  /* ADICOPS - MOD */
A68_VC  RIXACTR;  /* avoid structure result */
A68_VC  VIXACTR;  /* clause result */
A68_VC  WIXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  XIXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  JKXACTR;  /* avoid structure result */
A68_INT  MKXACTR;  /* ADICOPS - MOD */
A68_INT  NKXACTR;  /* ADICOPS - MOD */
A68_INT  OKXACTR;  /* ADICOPS - MOD */
A68_VC  PKXACTR;  /* avoid structure result */
A68_VC  UKXACTR;  /* clause result */
A68_VC  DLXACTR;  /* avoid structure result */
A68_VC  VLXACTR;  /* clause result */
A68_65  LOXACTR_t;
A68_VC  OOXACTR;  /* clause result */
A68_VC  GPXACTR;  /* avoid structure result */
A68_VC  KPXACTR;  /* clause result */
A68_VC  MPXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  RPXACTR;  /* ADICOPS - ABS INT */
A68_VC  SPXACTR;  /* avoid structure result */
A68_VC  TPXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  UPXACTR;  /* ADICOPS - ABS INT */
A68_VC  VPXACTR;  /* avoid structure result */
A68_VC  XPXACTR;  /* avoid structure result */
A68_74  YPXACTR_r;
A68_VC  CQXACTR;  /* clause result */
A68_VC  EQXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  GQXACTR;  /* clause result */
A68_VC  NQXACTR;  /* avoid structure result */
A68_VC  PQXACTR;  /* avoid structure result */
A68_VC  QQXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  TQXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  UQXACTR;  /* avoid structure result */
A68_INT  WQXACTR;  /* ADICOPS - ABS INT */
A68_VC  XQXACTR;  /* avoid structure result */
A68_VC  YQXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  ZQXACTR;  /* ADICOPS - ABS INT */
A68_VC  ARXACTR;  /* avoid structure result */
A68_VC  CRXACTR;  /* avoid structure result */
A68_75  DRXACTR_w;
A68_VC  GRXACTR;  /* clause result */
A68_76  XRXACTR_l;
A68_VC  ZRXACTR;  /* OPERATORS - nil -> mode */
A68_VC  ASXACTR;  /* == */
A68_VC  BSXACTR;  /* == */
A68_VC  DSXACTR;  /* clause result */
A68_VC  GSXACTR;  /* clause result */
A68_VC  ISXACTR;  /* avoid structure result */
A68_VC  LSXACTR;  /* avoid structure result */
A68_VC  PSXACTR;  /* avoid structure result */
A68_VC  RSXACTR;  /* avoid structure result */
A68_VC  USXACTR;  /* avoid structure result */
A68_VC  WSXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_77  XSXACTR_u;
A68_VC  ATXACTR;  /* clause result */
A68_VC  CTXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  FTXACTR;  /* ADICOPS - ABS INT */
A68_VC  GTXACTR;  /* avoid structure result */
A68_VC  HTXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  ITXACTR;  /* ADICOPS - ABS INT */
A68_VC  JTXACTR;  /* avoid structure result */
A68_VC  KTXACTR;  /* avoid structure result */
A68_VC  MTXACTR;  /* avoid structure result */
A68_55  NTXACTR_c;
A68_VC  QTXACTR;  /* avoid structure result */
A68_78  RTXACTR_k;
A68_VC  UTXACTR;  /* clause result */
A68_58  ZTXACTR_c;
A68_VC  GUXACTR;  /* avoid structure result */
A68_VC  IUXACTR;  /* avoid structure result */
A68_63  KUXACTR_f;
A68_VC  QUXACTR;  /* avoid structure result */
A68_VC  SUXACTR;  /* avoid structure result */
A68_VC  UUXACTR;  /* avoid structure result */
A68_79  YUXACTR_s;
A68_VC  BVXACTR;  /* clause result */
A68_VC  DWXACTR;  /* avoid structure result */
A68_VC  FWXACTR;  /* clause result */
A68_VC  JWXACTR;  /* clause result */
A68_VC  LWXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  OWXACTR;  /* ADICOPS - ABS INT */
A68_VC  PWXACTR;  /* avoid structure result */
A68_VC  QWXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  RWXACTR;  /* ADICOPS - ABS INT */
A68_VC  SWXACTR;  /* avoid structure result */
A68_VC  UWXACTR;  /* avoid structure result */
A68_VC  WWXACTR;  /* avoid structure result */
A68_80  XWXACTR_s;
A68_VC  AXXACTR;  /* clause result */
A68_VC  UXXACTR;  /* avoid structure result */
A68_VC  XXXACTR;  /* clause result */
A68_VC  ZXXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  CYXACTR;  /* clause result */
A68_VC  EYXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  GYXACTR;  /* clause result */
A68_INT  IYXACTR;  /* ADICOPS - ABS INT */
A68_VC  JYXACTR;  /* avoid structure result */
A68_VC  KYXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  LYXACTR;  /* ADICOPS - ABS INT */
A68_VC  MYXACTR;  /* avoid structure result */
A68_VC  OYXACTR;  /* avoid structure result */
A68_INT  QYXACTR;  /* ADICOPS - ABS INT */
A68_VC  RYXACTR;  /* avoid structure result */
A68_VC  SYXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  TYXACTR;  /* ADICOPS - ABS INT */
A68_VC  UYXACTR;  /* avoid structure result */
A68_81  WYXACTR_t;
A68_VC  ZYXACTR;  /* clause result */
A68_VC  TZXACTR;  /* avoid structure result */
A68_VC  VZXACTR;  /* avoid structure result */
A68_59  WZXACTR_c;
A68_59  XZXACTR;  /* united object - for case conformity */
A68_56  YZXACTR_c;
A68_VC  CAYACTR;  /* avoid structure result */
A68_VC  EAYACTR;  /* avoid structure result */
A68_60  FAYACTR_s;
A68_VC  KAYACTR;  /* avoid structure result */
A68_VC  MAYACTR;  /* avoid structure result */
A68_VC  OAYACTR;  /* avoid structure result */
A68_61  PAYACTR_e;
A68_VC  WAYACTR;  /* avoid structure result */
A68_VC  BBYACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  IBYACTR;  /* clause result */
A68_VC  JBYACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(imperativemnemonic);
 /* line 167: */
 /* line 168: */
TYWACTR = Imperative ;
switch ( TYWACTR.mode )
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
case 18: /* STRUCT(MODE64,REF MODE26)  */
case 19: /* STRUCT(INT,INT,REF MODE26)  */
A_UNCPY(UYWACTR_p,TYWACTR);
 /* line 169: */
 /* line 170: */
VYWACTR = UYWACTR_p ;
switch ( VYWACTR.mode )
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
A_UNCPY(WYWACTR_l,VYWACTR);
 /* line 171: */
 /* line 176: */
XYWACTR = WYWACTR_l ;
switch ( XYWACTR.mode )
{ 
case 1: /* STRUCT(INT)  */
YYWACTR_si = (XYWACTR.data.mode1);
 /* line 177: */
 /* line 179: */
switch ( YYWACTR_si.Nse )
{ 
case 1: 
BZWACTR = CZWACTR;
break;
case 2: 
 /* line 180: */
BZWACTR = EZWACTR;
break;
case 3: 
BZWACTR = GZWACTR;
break;
default: 
 /* line 181: */
ROAAOSF_whole( YYWACTR_si.Nse, MXWACTR_fieldlength, &JZWACTR );
BZWACTR = A_VC_PLUS(IZWACTR,JZWACTR);
break;
} 
 /* line 183: */
KZWACTR = A_VC_PLUS(LZWACTR,BZWACTR);
break;
case 2: /* INT */
MZWACTR_i = (XYWACTR.data.mode2);
 /* line 184: */
 /* line 185: */
 /* line 186: */
 /* line 188: */
ROAAOSF_whole( MZWACTR_i, MXWACTR_fieldlength, &QZWACTR );
DSKACTR_idfullname( MZWACTR_i, &SZWACTR );
KZWACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(PZWACTR,QZWACTR),RZWACTR),SZWACTR),A_HVEC(TZWACTR,'\"',A68_CHAR ));
break;
case 3: /* BOOL */
UZWACTR_b = (XYWACTR.data.mode3);
 /* line 189: */
 /* line 190: */
if ( UZWACTR_b )
{ 
XZWACTR = YZWACTR;
} 
else
{ 
XZWACTR = AAXACTR;
} 
 /* line 192: */
KZWACTR = A_VC_PLUS(BAXACTR,XZWACTR);
break;
case 4: /* STRUCT(REF MODE26)  */
CAXACTR_c = (XYWACTR.data.mode4);
 /* line 193: */
 /* line 195: */
KZWACTR = A_VC_PLUS(EAXACTR,CAXACTR_c.Representation);
break;
case 5: /* STRUCT(INT)  */
FAXACTR_sl = (XYWACTR.data.mode5);
 /* line 196: */
 /* line 197: */
 /* line 199: */
ROAAOSF_whole( FAXACTR_sl.Labno, MXWACTR_fieldlength, &IAXACTR );
KZWACTR = A_VC_PLUS(HAXACTR,IAXACTR);
break;
case 6: /* STRUCT(INT,REF MODE26)  */
JAXACTR_n = (XYWACTR.data.mode6);
 /* line 200: */
 /* line 201: */
 /* line 202: */
 /* line 203: */
if ( (JAXACTR_n.Mode<0) )
{ 
 /* line 204: */
MAXACTR = NAXACTR;
} 
else
{ 
MAXACTR = A_HVEC(OAXACTR,'=',A68_CHAR );
} 
 /* line 205: */
 /* line 206: */
 /* line 207: */
 /* line 209: */
RAXACTR = JAXACTR_n.Mode ;
ROAAOSF_whole( A_ABS(RAXACTR), MXWACTR_fieldlength, &SAXACTR );
UAXACTR = JAXACTR_n.Mode ;
FBNACTR_modename( A_ABS(UAXACTR), &VAXACTR );
KZWACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(QAXACTR,MAXACTR),SAXACTR),A_HVEC(TAXACTR,'=',A68_CHAR )),VAXACTR),WAXACTR),JAXACTR_n.Nu);
break;
case 7: /* STRUCT(INT,REF MODE26)  */
XAXACTR_a = (XYWACTR.data.mode7);
 /* line 210: */
 /* line 211: */
 /* line 212: */
 /* line 213: */
if ( (XAXACTR_a.Mode<0) )
{ 
 /* line 214: */
ABXACTR = BBXACTR;
} 
else
{ 
ABXACTR = A_HVEC(CBXACTR,'=',A68_CHAR );
} 
 /* line 215: */
 /* line 216: */
 /* line 218: */
FBXACTR = XAXACTR_a.Mode ;
ROAAOSF_whole( A_ABS(FBXACTR), MXWACTR_fieldlength, &GBXACTR );
IBXACTR = XAXACTR_a.Mode ;
FBNACTR_modename( A_ABS(IBXACTR), &JBXACTR );
KZWACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(EBXACTR,ABXACTR),GBXACTR),A_HVEC(HBXACTR,'=',A68_CHAR )),JBXACTR),KBXACTR),XAXACTR_a.String),A_HVEC(LBXACTR,'\"',A68_CHAR ));
break;
case 8: /* STRUCT(INT,LONG BITS)  */
MBXACTR_o = (XYWACTR.data.mode8);
 /* line 219: */
 /* line 220: */
 /* line 221: */
 /* line 222: */
if ( (MBXACTR_o.Mode<0) )
{ 
 /* line 223: */
PBXACTR = QBXACTR;
} 
else
{ 
PBXACTR = A_HVEC(RBXACTR,'=',A68_CHAR );
} 
 /* line 224: */
 /* line 225: */
 /* line 226: */
 /* line 229: */
UBXACTR = MBXACTR_o.Mode ;
ROAAOSF_whole( A_ABS(UBXACTR), MXWACTR_fieldlength, &VBXACTR );
XBXACTR = MBXACTR_o.Mode ;
FBNACTR_modename( A_ABS(XBXACTR), &YBXACTR );
JPAAOSF_lwhole( (A68_LINT )MBXACTR_o.Denotation, MXWACTR_fieldlength, &ACXACTR );
KZWACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(TBXACTR,PBXACTR),VBXACTR),A_HVEC(WBXACTR,'=',A68_CHAR )),YBXACTR),ZBXACTR),ACXACTR);
break;
case 9: /* STRUCT(INT,REF MODE26)  */
BCXACTR_st = (XYWACTR.data.mode9);
 /* line 230: */
 /* line 231: */
 /* line 232: */
 /* line 233: */
if ( (BCXACTR_st.Mode<0) )
{ 
 /* line 234: */
ECXACTR = FCXACTR;
} 
else
{ 
ECXACTR = A_HVEC(GCXACTR,'=',A68_CHAR );
} 
 /* line 235: */
 /* line 236: */
 /* line 237: */
 /* line 238: */
 /* line 239: */
JCXACTR = BCXACTR_st.Mode ;
ROAAOSF_whole( A_ABS(JCXACTR), MXWACTR_fieldlength, &KCXACTR );
MCXACTR = BCXACTR_st.Mode ;
FBNACTR_modename( A_ABS(MCXACTR), &NCXACTR );
KZWACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(ICXACTR,ECXACTR),KCXACTR),A_HVEC(LCXACTR,'=',A68_CHAR )),NCXACTR),OCXACTR),BCXACTR_st.Denotation),A_HVEC(PCXACTR,'\"',A68_CHAR ));
break;
default: 
 /* line 241: */
KZWACTR = RCXACTR;
break;
} 
break;
case 10: /* STRUCT(INT,INT,INT)  */
SCXACTR_o = (VYWACTR.data.mode10);
 /* line 242: */
 /* line 243: */
{ 
 /* line 254: */
ROAAOSF_whole( SCXACTR_o.Param, MXWACTR_fieldlength, &FFXACTR );
GFXACTR_p = FFXACTR;
 /* line 255: */
 /* line 256: */
 /* line 257: */
 /* line 258: */
if ( (SCXACTR_o.Mode<0) )
{ 
 /* line 259: */
IFXACTR = JFXACTR;
} 
else
{ 
 /* line 260: */
IFXACTR = A_HVEC(KFXACTR,'=',A68_CHAR );
} 
 /* line 261: */
LFXACTR = SCXACTR_o.Mode ;
ROAAOSF_whole( A_ABS(LFXACTR), MXWACTR_fieldlength, &MFXACTR );
OFXACTR = SCXACTR_o.Mode ;
FBNACTR_modename( A_ABS(OFXACTR), &PFXACTR );
QFXACTR_m = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(IFXACTR,MFXACTR),A_HVEC(NFXACTR,'=',A68_CHAR )),PFXACTR);
 /* line 263: */
 /* line 264: */
 /* line 265: */
switch ( SCXACTR_o.Fn )
{ 
case 1: 
 /* line 266: */
 /* line 267: */
 /* line 268: */
if ( (SCXACTR_o.Param==(A68_TRUE)) )
{ 
 /* line 269: */
UFXACTR = VFXACTR;
} 
else
{ 
UFXACTR = XFXACTR;
} 
 /* line 271: */
YFXACTR = A_VC_PLUS(A_VC_PLUS(ZFXACTR,UFXACTR),QFXACTR_m);
break;
case 2: 
 /* line 273: */
YFXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(CGXACTR,GFXACTR_p),DGXACTR),QFXACTR_m);
break;
case 3: 
 /* line 274: */
 /* line 276: */
YFXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(GGXACTR,GFXACTR_p),HGXACTR),QFXACTR_m);
break;
case 4: 
 /* line 278: */
YFXACTR = A_VC_PLUS(JGXACTR,QFXACTR_m);
break;
case 5: 
 /* line 279: */
 /* line 280: */
NGXACTR = SCXACTR_o.Mode ;
OGXACTR = 8 ;
switch ( A_MOD(NGXACTR,OGXACTR,MGXACTR) )
{ 
case 1: 
QGXACTR = RGXACTR;
break;
case 2: 
QGXACTR = TGXACTR;
break;
case 3: 
 /* line 281: */
QGXACTR = VGXACTR;
break;
case 4: 
QGXACTR = XGXACTR;
break;
case 5: 
QGXACTR = ZGXACTR;
break;
case 6: 
 /* line 283: */
QGXACTR = BHXACTR;
break;
case 7: 
 /* line 284: */
QGXACTR = DHXACTR;
break;
default: 
QGXACTR = FHXACTR;
break;
} 
 /* line 285: */
if ( (SCXACTR_o.Mode>7) )
{ 
HHXACTR = IHXACTR;
} 
else
{ 
HHXACTR = KHXACTR;
} 
 /* line 287: */
YFXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(LHXACTR,GFXACTR_p),MHXACTR),QGXACTR),HHXACTR);
break;
case 6: 
 /* line 288: */
 /* line 290: */
ROAAOSF_whole( (1+SCXACTR_o.Param), 0, &RHXACTR );
YFXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(QHXACTR,RHXACTR),SHXACTR),GFXACTR_p),THXACTR),QFXACTR_m);
break;
case 7: 
 /* line 291: */
 /* line 293: */
ROAAOSF_whole( (1+SCXACTR_o.Param), 0, &XHXACTR );
YFXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(WHXACTR,XHXACTR),YHXACTR),QFXACTR_m);
break;
case 8: 
 /* line 295: */
YFXACTR = A_VC_PLUS(AIXACTR,QFXACTR_m);
break;
case 9: 
 /* line 297: */
YFXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(DIXACTR,GFXACTR_p),EIXACTR),QFXACTR_m);
break;
case 10: 
 /* line 298: */
 /* line 299: */
 /* line 300: */
 /* line 301: */
 /* line 302: */
 /* line 304: */
ROAAOSF_whole( (SCXACTR_o.Param/16), MXWACTR_fieldlength, &KIXACTR );
VCXACTR_standardpreludeops( ((SCXACTR_o.Param/16)+1), &MIXACTR );
PIXACTR = SCXACTR_o.Param ;
QIXACTR = 16 ;
ROAAOSF_whole( A_MOD(PIXACTR,QIXACTR,OIXACTR), MXWACTR_fieldlength, &RIXACTR );
YFXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(JIXACTR,KIXACTR),LIXACTR),MIXACTR),NIXACTR),RIXACTR),SIXACTR),QFXACTR_m);
break;
case 11: 
 /* line 305: */
 /* line 306: */
 /* line 307: */
switch ( ((SCXACTR_o.Param/16)+1) )
{ 
case 1: 
VIXACTR = A_HVEC(WIXACTR,'+',A68_CHAR );
break;
case 2: 
VIXACTR = A_HVEC(XIXACTR,'-',A68_CHAR );
break;
case 3: 
VIXACTR = ZIXACTR;
break;
case 4: 
VIXACTR = BJXACTR;
break;
case 5: 
 /* line 308: */
VIXACTR = DJXACTR;
break;
case 6: 
VIXACTR = FJXACTR;
break;
case 7: 
VIXACTR = HJXACTR;
break;
case 8: 
VIXACTR = JJXACTR;
break;
case 9: 
VIXACTR = LJXACTR;
break;
case 10: 
 /* line 309: */
VIXACTR = NJXACTR;
break;
case 11: 
VIXACTR = PJXACTR;
break;
case 12: 
VIXACTR = RJXACTR;
break;
case 13: 
VIXACTR = TJXACTR;
break;
case 14: 
VIXACTR = VJXACTR;
break;
case 15: 
 /* line 310: */
VIXACTR = XJXACTR;
break;
case 16: 
VIXACTR = ZJXACTR;
break;
case 17: 
 /* line 311: */
VIXACTR = BKXACTR;
break;
case 18: 
 /* line 312: */
VIXACTR = DKXACTR;
break;
default: 
VIXACTR = FKXACTR;
break;
} 
 /* line 313: */
 /* line 314: */
 /* line 315: */
 /* line 317: */
ROAAOSF_whole( (SCXACTR_o.Param/16), MXWACTR_fieldlength, &JKXACTR );
NKXACTR = SCXACTR_o.Param ;
OKXACTR = 16 ;
ROAAOSF_whole( A_MOD(NKXACTR,OKXACTR,MKXACTR), MXWACTR_fieldlength, &PKXACTR );
YFXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(IKXACTR,JKXACTR),KKXACTR),VIXACTR),LKXACTR),PKXACTR),QKXACTR),QFXACTR_m);
break;
case 12: 
 /* line 318: */
 /* line 319: */
if ( (SCXACTR_o.Param==1) )
{ 
UKXACTR = VKXACTR;
} 
else
{ 
 /* line 320: */
if ( (SCXACTR_o.Param==(-1)) )
{ 
UKXACTR = XKXACTR;
} 
else
{ 
 /* line 321: */
if ( (SCXACTR_o.Param>1) )
{ 
UKXACTR = ZKXACTR;
} 
else
{ 
 /* line 322: */
 /* line 323: */
ROAAOSF_whole( ((-1)-SCXACTR_o.Param), MXWACTR_fieldlength, &DLXACTR );
UKXACTR = A_VC_PLUS(A_VC_PLUS(CLXACTR,DLXACTR),ELXACTR);
} 
} 
} 
 /* line 325: */
YFXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(FLXACTR,QFXACTR_m),GLXACTR),UKXACTR);
break;
case 13: 
 /* line 327: */
YFXACTR = A_VC_PLUS(ILXACTR,QFXACTR_m);
break;
case 14: 
 /* line 329: */
YFXACTR = A_VC_PLUS(KLXACTR,QFXACTR_m);
break;
case 15: 
 /* line 331: */
YFXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(NLXACTR,GFXACTR_p),OLXACTR),QFXACTR_m);
break;
case 16: 
 /* line 333: */
YFXACTR = A_VC_PLUS(QLXACTR,QFXACTR_m);
break;
case 17: 
 /* line 335: */
YFXACTR = A_VC_PLUS(SLXACTR,QFXACTR_m);
break;
case 18: 
 /* line 336: */
 /* line 337: */
switch ( (SCXACTR_o.Param+1) )
{ 
case 1: 
 /* line 338: */
VLXACTR = WLXACTR;
break;
case 2: 
 /* line 339: */
VLXACTR = YLXACTR;
break;
case 3: 
 /* line 340: */
VLXACTR = AMXACTR;
break;
case 4: 
 /* line 342: */
VLXACTR = CMXACTR;
break;
case 5: 
VLXACTR = EMXACTR;
break;
default: 
 /* line 343: */
VLXACTR = A_VC_PLUS(GMXACTR,GFXACTR_p);
break;
} 
 /* line 345: */
YFXACTR = A_VC_PLUS(A_VC_PLUS(HMXACTR,QFXACTR_m),VLXACTR);
break;
case 19: 
 /* line 347: */
YFXACTR = JMXACTR;
break;
case 20: 
 /* line 349: */
YFXACTR = A_VC_PLUS(LMXACTR,QFXACTR_m);
break;
case 21: 
 /* line 351: */
YFXACTR = A_VC_PLUS(NMXACTR,QFXACTR_m);
break;
case 22: 
 /* line 353: */
YFXACTR = A_VC_PLUS(PMXACTR,QFXACTR_m);
break;
case 23: 
 /* line 355: */
YFXACTR = A_VC_PLUS(RMXACTR,QFXACTR_m);
break;
case 24: 
 /* line 357: */
YFXACTR = A_VC_PLUS(TMXACTR,QFXACTR_m);
break;
case 25: 
 /* line 359: */
YFXACTR = A_VC_PLUS(VMXACTR,QFXACTR_m);
break;
case 26: 
 /* line 361: */
YFXACTR = A_VC_PLUS(XMXACTR,QFXACTR_m);
break;
case 27: 
 /* line 363: */
YFXACTR = A_VC_PLUS(ZMXACTR,QFXACTR_m);
break;
case 28: 
 /* line 365: */
YFXACTR = A_VC_PLUS(BNXACTR,QFXACTR_m);
break;
case 29: 
 /* line 367: */
YFXACTR = A_VC_PLUS(DNXACTR,QFXACTR_m);
break;
case 30: 
 /* line 369: */
YFXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(GNXACTR,GFXACTR_p),HNXACTR),QFXACTR_m);
break;
case 31: 
 /* line 371: */
YFXACTR = A_VC_PLUS(JNXACTR,QFXACTR_m);
break;
case 32: 
 /* line 372: */
 /* line 374: */
YFXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(MNXACTR,GFXACTR_p),NNXACTR),QFXACTR_m);
break;
case 33: 
 /* line 376: */
YFXACTR = A_VC_PLUS(PNXACTR,QFXACTR_m);
break;
case 34: 
 /* line 378: */
YFXACTR = A_VC_PLUS(RNXACTR,QFXACTR_m);
break;
case 35: 
 /* line 380: */
YFXACTR = A_VC_PLUS(TNXACTR,QFXACTR_m);
break;
case 36: 
 /* line 382: */
YFXACTR = A_VC_PLUS(VNXACTR,QFXACTR_m);
break;
case 37: 
 /* line 384: */
YFXACTR = A_VC_PLUS(XNXACTR,QFXACTR_m);
break;
case 38: 
 /* line 386: */
YFXACTR = A_VC_PLUS(ZNXACTR,QFXACTR_m);
break;
case 39: 
 /* line 388: */
YFXACTR = A_VC_PLUS(BOXACTR,QFXACTR_m);
break;
case 40: 
 /* line 390: */
 /* line 391: */
YFXACTR = A_VC_PLUS(QFXACTR_m,DOXACTR);
break;
default: 
 /* line 392: */
 /* line 393: */
if ( (SCXACTR_o.Fn==50) )
{ 
YFXACTR = FOXACTR;
} 
else
{ 
 /* line 394: */
 /* line 395: */
if ( (SCXACTR_o.Fn==51) )
{ 
 /* line 396: */
YFXACTR = HOXACTR;
} 
else
{ 
 /* line 397: */
 /* line 398: */
YFXACTR = JOXACTR;
} 
} 
break;
} 
 /* line 400: */
KZWACTR = A_VC_PLUS(KOXACTR,YFXACTR);
} 
break;
case 11: /* STRUCT(INT,REF MODE26,INT,INT)  */
LOXACTR_t = (VYWACTR.data.mode11);
 /* line 401: */
 /* line 402: */
 /* line 403: */
switch ( LOXACTR_t.Type )
{ 
case 1: 
 /* line 404: */
OOXACTR = POXACTR;
break;
case 2: 
 /* line 405: */
OOXACTR = ROXACTR;
break;
case 3: 
 /* line 406: */
OOXACTR = TOXACTR;
break;
case 4: 
 /* line 407: */
OOXACTR = VOXACTR;
break;
case 5: 
 /* line 408: */
OOXACTR = XOXACTR;
break;
case 6: 
 /* line 409: */
OOXACTR = ZOXACTR;
break;
case 7: 
 /* line 411: */
OOXACTR = BPXACTR;
break;
case 8: 
OOXACTR = DPXACTR;
break;
default: 
 /* line 412: */
 /* line 413: */
ROAAOSF_whole( LOXACTR_t.Type, MXWACTR_fieldlength, &GPXACTR );
OOXACTR = A_VC_PLUS(FPXACTR,GPXACTR);
break;
} 
 /* line 414: */
 /* line 415: */
 /* line 416: */
if ( (LOXACTR_t.Mode<0) )
{ 
KPXACTR = LPXACTR;
} 
else
{ 
KPXACTR = A_HVEC(MPXACTR,'=',A68_CHAR );
} 
 /* line 417: */
 /* line 418: */
 /* line 419: */
 /* line 421: */
RPXACTR = LOXACTR_t.Mode ;
ROAAOSF_whole( A_ABS(RPXACTR), MXWACTR_fieldlength, &SPXACTR );
UPXACTR = LOXACTR_t.Mode ;
FBNACTR_modename( A_ABS(UPXACTR), &VPXACTR );
ROAAOSF_whole( LOXACTR_t.Decno, MXWACTR_fieldlength, &XPXACTR );
KZWACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(OPXACTR,OOXACTR),PPXACTR),LOXACTR_t.Name),QPXACTR),KPXACTR),SPXACTR),A_HVEC(TPXACTR,'=',A68_CHAR )),VPXACTR),WPXACTR),XPXACTR);
break;
case 12: /* STRUCT(REF MODE26,BITS,INT,INT,INT)  */
YPXACTR_r = (VYWACTR.data.mode12);
 /* line 422: */
 /* line 423: */
 /* line 424: */
 /* line 425: */
if ( (YPXACTR_r.Mode<0) )
{ 
CQXACTR = DQXACTR;
} 
else
{ 
CQXACTR = A_HVEC(EQXACTR,'=',A68_CHAR );
} 
 /* line 426: */
 /* line 427: */
 /* line 430: */
 /* line 431: */
 /* line 432: */
if ( (YPXACTR_r.Maxname<3) )
{ 
GQXACTR = HQXACTR;
} 
else
{ 
 /* line 433: */
 /* line 434: */
if ( (YPXACTR_r.Maxname==3) )
{ 
GQXACTR = JQXACTR;
} 
else
{ 
 /* line 435: */
 /* line 436: */
 /* line 437: */
ROAAOSF_whole( YPXACTR_r.Maxname, MXWACTR_fieldlength, &NQXACTR );
DSKACTR_idfullname( YPXACTR_r.Maxname, &PQXACTR );
GQXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(MQXACTR,NQXACTR),OQXACTR),PQXACTR),A_HVEC(QQXACTR,'\"',A68_CHAR ));
} 
} 
 /* line 438: */
 /* line 440: */
PXWACTR_bitmnemonic( (A68_BITS )(YPXACTR_r.Props&LXWACTR_maskxroutine), A68_FALSE, &UQXACTR );
WQXACTR = YPXACTR_r.Mode ;
ROAAOSF_whole( A_ABS(WQXACTR), MXWACTR_fieldlength, &XQXACTR );
ZQXACTR = YPXACTR_r.Mode ;
FBNACTR_modename( A_ABS(ZQXACTR), &ARXACTR );
ROAAOSF_whole( YPXACTR_r.Rdenno, MXWACTR_fieldlength, &CRXACTR );
KZWACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(SQXACTR,YPXACTR_r.Name),A_HVEC(TQXACTR,'\"',A68_CHAR )),UQXACTR),VQXACTR),CQXACTR),XQXACTR),A_HVEC(YQXACTR,'=',A68_CHAR )),ARXACTR),GQXACTR),BRXACTR),CRXACTR);
break;
case 13: /* STRUCT(INT)  */
DRXACTR_w = (VYWACTR.data.mode13);
 /* line 441: */
 /* line 442: */
 /* line 443: */
switch ( DRXACTR_w.W )
{ 
case 1: 
GRXACTR = HRXACTR;
break;
case 2: 
GRXACTR = JRXACTR;
break;
case 3: 
GRXACTR = LRXACTR;
break;
case 4: 
 /* line 444: */
GRXACTR = NRXACTR;
break;
case 5: 
GRXACTR = PRXACTR;
break;
case 6: 
 /* line 445: */
GRXACTR = RRXACTR;
break;
case 7: 
 /* line 446: */
GRXACTR = TRXACTR;
break;
default: 
GRXACTR = VRXACTR;
break;
} 
 /* line 448: */
KZWACTR = A_VC_PLUS(WRXACTR,GRXACTR);
break;
case 14: /* STRUCT(REF MODE26,INT,INT,BOOL)  */
XRXACTR_l = (VYWACTR.data.mode14);
 /* line 449: */
 /* line 450: */
ASXACTR = A_VVAC(ZRXACTR) ;
BSXACTR = XRXACTR_l.Name ;
if ( A_VSTRUCTCOMP(BSXACTR,ASXACTR) )
{ 
DSXACTR = ESXACTR;
} 
else
{ 
 /* line 451: */
DSXACTR = XRXACTR_l.Name;
} 
 /* line 453: */
if ( XRXACTR_l.Notsetting )
{ 
 /* line 455: */
switch ( (XRXACTR_l.Status+1) )
{ 
case 1: 
 /* line 457: */
ROAAOSF_whole( XRXACTR_l.Labno, MXWACTR_fieldlength, &ISXACTR );
GSXACTR = A_VC_PLUS(HSXACTR,ISXACTR);
break;
case 2: 
 /* line 458: */
 /* line 459: */
 /* line 460: */
ROAAOSF_whole( XRXACTR_l.Labno, MXWACTR_fieldlength, &LSXACTR );
GSXACTR = A_VC_PLUS(KSXACTR,LSXACTR);
break;
default: 
 /* line 461: */
 /* line 462: */
 /* line 463: */
 /* line 464: */
ROAAOSF_whole( XRXACTR_l.Status, MXWACTR_fieldlength, &PSXACTR );
ROAAOSF_whole( XRXACTR_l.Labno, MXWACTR_fieldlength, &RSXACTR );
GSXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(OSXACTR,PSXACTR),QSXACTR),RSXACTR);
break;
} 
} 
else
{ 
 /* line 465: */
 /* line 466: */
ROAAOSF_whole( XRXACTR_l.Labno, MXWACTR_fieldlength, &USXACTR );
GSXACTR = A_VC_PLUS(TSXACTR,USXACTR);
} 
 /* line 468: */
KZWACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(VSXACTR,DSXACTR),A_HVEC(WSXACTR,'\"',A68_CHAR )),GSXACTR);
break;
case 15: /* STRUCT(INT,BITS,INT)  */
XSXACTR_u = (VYWACTR.data.mode15);
 /* line 469: */
 /* line 470: */
if ( (XSXACTR_u.Mode<0) )
{ 
ATXACTR = BTXACTR;
} 
else
{ 
ATXACTR = A_HVEC(CTXACTR,'=',A68_CHAR );
} 
 /* line 471: */
 /* line 472: */
 /* line 473: */
 /* line 474: */
 /* line 476: */
FTXACTR = XSXACTR_u.Mode ;
ROAAOSF_whole( A_ABS(FTXACTR), MXWACTR_fieldlength, &GTXACTR );
ITXACTR = XSXACTR_u.Mode ;
FBNACTR_modename( A_ABS(ITXACTR), &JTXACTR );
PXWACTR_bitmnemonic( (A68_BITS )(XSXACTR_u.Props&WCAACTR_decbit), A68_TRUE, &KTXACTR );
ROAAOSF_whole( XSXACTR_u.Param, MXWACTR_fieldlength, &MTXACTR );
KZWACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(ETXACTR,ATXACTR),GTXACTR),A_HVEC(HTXACTR,'=',A68_CHAR )),JTXACTR),KTXACTR),LTXACTR),MTXACTR);
break;
case 16: /* STRUCT(INT)  */
NTXACTR_c = (VYWACTR.data.mode16);
 /* line 477: */
 /* line 478: */
 /* line 480: */
ROAAOSF_whole( NTXACTR_c.I, MXWACTR_fieldlength, &QTXACTR );
KZWACTR = A_VC_PLUS(PTXACTR,QTXACTR);
break;
case 17: /* STRUCT(BOOL)  */
RTXACTR_k = (VYWACTR.data.mode17);
 /* line 481: */
 /* line 482: */
if ( RTXACTR_k.Start )
{ 
UTXACTR = VTXACTR;
} 
else
{ 
UTXACTR = XTXACTR;
} 
 /* line 484: */
KZWACTR = A_VC_PLUS(YTXACTR,UTXACTR);
break;
case 19: /* STRUCT(INT,INT,REF MODE26)  */
ZTXACTR_c = (VYWACTR.data.mode19);
 /* line 485: */
 /* line 486: */
 /* line 487: */
 /* line 488: */
 /* line 490: */
ROAAOSF_whole( ZTXACTR_c.Mode, 0, &GUXACTR );
ROAAOSF_whole( ZTXACTR_c.Number, 0, &IUXACTR );
KZWACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(EUXACTR,FUXACTR),GUXACTR),HUXACTR),IUXACTR),JUXACTR);
break;
case 18: /* STRUCT(MODE64,REF MODE26)  */
KUXACTR_f = (VYWACTR.data.mode18);
 /* line 491: */
 /* line 492: */
 /* line 493: */
 /* line 494: */
 /* line 495: */
 /* line 496: */
 /* line 497: */
 /* line 498: */
 /* line 499: */
ROAAOSF_whole( KUXACTR_f.Info.Nochars, MXWACTR_fieldlength, &QUXACTR );
ROAAOSF_whole( KUXACTR_f.Info.Nocases, MXWACTR_fieldlength, &SUXACTR );
ROAAOSF_whole( KUXACTR_f.Info.W, MXWACTR_fieldlength, &UUXACTR );
KZWACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(PUXACTR,QUXACTR),RUXACTR),SUXACTR),TUXACTR),UUXACTR),VUXACTR),KUXACTR_f.Text);
break;
default: 
 /* line 502: */
KZWACTR = XUXACTR;
break;
} 
break;
case 20: /* STRUCT(INT,INT,BITS,INT)  */
YUXACTR_s = (TYWACTR.data.mode20);
 /* line 503: */
 /* line 504: */
switch ( YUXACTR_s.Fn )
{ 
case 1: 
BVXACTR = CVXACTR;
break;
case 2: 
BVXACTR = EVXACTR;
break;
case 3: 
 /* line 505: */
BVXACTR = GVXACTR;
break;
case 4: 
BVXACTR = IVXACTR;
break;
case 5: 
BVXACTR = KVXACTR;
break;
case 6: 
 /* line 506: */
BVXACTR = MVXACTR;
break;
case 7: 
BVXACTR = OVXACTR;
break;
case 8: 
BVXACTR = QVXACTR;
break;
case 9: 
 /* line 507: */
BVXACTR = SVXACTR;
break;
case 10: 
BVXACTR = UVXACTR;
break;
case 11: 
BVXACTR = WVXACTR;
break;
case 12: 
 /* line 509: */
BVXACTR = YVXACTR;
break;
case 13: 
 /* line 510: */
BVXACTR = AWXACTR;
break;
default: 
 /* line 511: */
 /* line 512: */
 /* line 513: */
ROAAOSF_whole( YUXACTR_s.Fn, MXWACTR_fieldlength, &DWXACTR );
BVXACTR = A_VC_PLUS(CWXACTR,DWXACTR);
break;
} 
 /* line 514: */
 /* line 515: */
 /* line 516: */
 /* line 518: */
if ( (YUXACTR_s.Fn==11) )
{ 
 /* line 519: */
FWXACTR = GWXACTR;
} 
else
{ 
 /* line 520: */
if ( (YUXACTR_s.Mode<0) )
{ 
JWXACTR = KWXACTR;
} 
else
{ 
JWXACTR = A_HVEC(LWXACTR,'=',A68_CHAR );
} 
 /* line 521: */
 /* line 522: */
 /* line 523: */
 /* line 524: */
OWXACTR = YUXACTR_s.Mode ;
ROAAOSF_whole( A_ABS(OWXACTR), MXWACTR_fieldlength, &PWXACTR );
RWXACTR = YUXACTR_s.Mode ;
FBNACTR_modename( A_ABS(RWXACTR), &SWXACTR );
ROAAOSF_whole( YUXACTR_s.Param, MXWACTR_fieldlength, &UWXACTR );
FWXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(NWXACTR,JWXACTR),PWXACTR),A_HVEC(QWXACTR,'=',A68_CHAR )),SWXACTR),TWXACTR),UWXACTR);
} 
 /* line 528: */
PXWACTR_bitmnemonic( (A68_BITS )(YUXACTR_s.Props&(A68_BITS )((A68_BITS )(FXWACTR_maskgeneral|GXWACTR_maskdynamica)|KXWACTR_maskspecial)), A68_TRUE, &WWXACTR );
KZWACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(VWXACTR,BVXACTR),WWXACTR),FWXACTR);
break;
case 21: /* STRUCT(INT,INT,BITS,INT)  */
XWXACTR_s = (TYWACTR.data.mode21);
 /* line 529: */
 /* line 530: */
switch ( (XWXACTR_s.Fn+2) )
{ 
case 1: 
AXXACTR = BXXACTR;
break;
case 2: 
 /* line 531: */
AXXACTR = DXXACTR;
break;
case 3: 
 /* line 532: */
AXXACTR = FXXACTR;
break;
case 4: 
 /* line 533: */
AXXACTR = HXXACTR;
break;
case 5: 
 /* line 534: */
AXXACTR = JXXACTR;
break;
case 6: 
 /* line 535: */
AXXACTR = LXXACTR;
break;
case 7: 
 /* line 536: */
AXXACTR = NXXACTR;
break;
case 8: 
 /* line 538: */
AXXACTR = PXXACTR;
break;
case 9: 
 /* line 539: */
AXXACTR = RXXACTR;
break;
default: 
 /* line 540: */
 /* line 541: */
 /* line 542: */
ROAAOSF_whole( XWXACTR_s.Fn, MXWACTR_fieldlength, &UXXACTR );
AXXACTR = A_VC_PLUS(TXXACTR,UXXACTR);
break;
} 
 /* line 543: */
 /* line 544: */
if ( (XWXACTR_s.Mode<0) )
{ 
XXXACTR = YXXACTR;
} 
else
{ 
XXXACTR = A_HVEC(ZXXACTR,'=',A68_CHAR );
} 
 /* line 545: */
 /* line 546: */
 /* line 547: */
if ( (XWXACTR_s.Resultmode<0) )
{ 
CYXACTR = DYXACTR;
} 
else
{ 
CYXACTR = A_HVEC(EYXACTR,'=',A68_CHAR );
} 
 /* line 548: */
 /* line 549: */
 /* line 550: */
if ( ((XWXACTR_s.Fn==6)|(XWXACTR_s.Fn==7)) )
{ 
GYXACTR = HYXACTR;
} 
else
{ 
 /* line 551: */
 /* line 552: */
IYXACTR = XWXACTR_s.Resultmode ;
ROAAOSF_whole( A_ABS(IYXACTR), MXWACTR_fieldlength, &JYXACTR );
LYXACTR = XWXACTR_s.Resultmode ;
FBNACTR_modename( A_ABS(LYXACTR), &MYXACTR );
GYXACTR = A_VC_PLUS(A_VC_PLUS(JYXACTR,A_HVEC(KYXACTR,'=',A68_CHAR )),MYXACTR);
} 
 /* line 555: */
PXWACTR_bitmnemonic( XWXACTR_s.Props, A68_TRUE, &OYXACTR );
QYXACTR = XWXACTR_s.Mode ;
ROAAOSF_whole( A_ABS(QYXACTR), MXWACTR_fieldlength, &RYXACTR );
TYXACTR = XWXACTR_s.Mode ;
FBNACTR_modename( A_ABS(TYXACTR), &UYXACTR );
KZWACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(NYXACTR,AXXACTR),OYXACTR),PYXACTR),XXXACTR),RYXACTR),A_HVEC(SYXACTR,'=',A68_CHAR )),UYXACTR),VYXACTR),CYXACTR),GYXACTR);
break;
case 22: /* STRUCT(INT,BITS)  */
WYXACTR_t = (TYWACTR.data.mode22);
 /* line 556: */
 /* line 557: */
switch ( WYXACTR_t.Fn )
{ 
case 1: 
ZYXACTR = AZXACTR;
break;
case 2: 
ZYXACTR = CZXACTR;
break;
case 3: 
 /* line 558: */
ZYXACTR = EZXACTR;
break;
case 4: 
ZYXACTR = GZXACTR;
break;
case 5: 
ZYXACTR = IZXACTR;
break;
case 6: 
 /* line 559: */
ZYXACTR = KZXACTR;
break;
case 7: 
ZYXACTR = MZXACTR;
break;
case 8: 
 /* line 560: */
ZYXACTR = OZXACTR;
break;
case 9: 
 /* line 561: */
ZYXACTR = QZXACTR;
break;
default: 
 /* line 562: */
 /* line 563: */
 /* line 564: */
ROAAOSF_whole( WYXACTR_t.Fn, MXWACTR_fieldlength, &TZXACTR );
ZYXACTR = A_VC_PLUS(SZXACTR,TZXACTR);
break;
} 
 /* line 568: */
PXWACTR_bitmnemonic( WYXACTR_t.Props, A68_TRUE, &VZXACTR );
KZWACTR = A_VC_PLUS(A_VC_PLUS(UZXACTR,ZYXACTR),VZXACTR);
break;
case 23: /* STRUCT(INT,INT,REF MODE57)  */
case 24: /* STRUCT(INT,INT,INT)  */
case 25: /* STRUCT(INT,REF MODE26,REF MODE26,REF MODE26,REF MODE26,REF MODE62)  */
A_UNCPY(WZXACTR_c,TYWACTR);
WZXACTR_c.mode -= 22;
 /* line 569: */
XZXACTR = WZXACTR_c ;
switch ( XZXACTR.mode )
{ 
case 1: /* STRUCT(INT,INT,REF MODE57)  */
YZXACTR_c = (XZXACTR.data.mode1);
 /* line 570: */
 /* line 571: */
 /* line 572: */
 /* line 574: */
ROAAOSF_whole( YZXACTR_c.Body, MXWACTR_fieldlength, &CAYACTR );
ROAAOSF_whole( YZXACTR_c.Moduleno, MXWACTR_fieldlength, &EAYACTR );
KZWACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(BAYACTR,CAYACTR),DAYACTR),EAYACTR);
break;
case 2: /* STRUCT(INT,INT,INT)  */
FAYACTR_s = (XZXACTR.data.mode2);
 /* line 575: */
 /* line 576: */
 /* line 577: */
 /* line 578: */
ROAAOSF_whole( FAYACTR_s.Moduleno, MXWACTR_fieldlength, &KAYACTR );
ROAAOSF_whole( FAYACTR_s.I, MXWACTR_fieldlength, &MAYACTR );
ROAAOSF_whole( FAYACTR_s.J, MXWACTR_fieldlength, &OAYACTR );
KZWACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(JAYACTR,KAYACTR),LAYACTR),MAYACTR),NAYACTR),OAYACTR);
break;
case 3: /* STRUCT(INT,REF MODE26,REF MODE26,REF MODE26,REF MODE26,REF MODE62)  */
PAYACTR_e = (XZXACTR.data.mode3);
 /* line 579: */
 /* line 580: */
 /* line 581: */
 /* line 582: */
 /* line 583: */
 /* line 585: */
 /* line 587: */
ROAAOSF_whole( PAYACTR_e.Moduleno, MXWACTR_fieldlength, &WAYACTR );
KZWACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(VAYACTR,WAYACTR),XAYACTR),PAYACTR_e.Name),YAYACTR),PAYACTR_e.Uname),ZAYACTR),PAYACTR_e.Lname),ABYACTR),PAYACTR_e.Gname),A_HVEC(BBYACTR,'\"',A68_CHAR ));
break;
default: 
 /* line 591: */
KZWACTR = DBYACTR;
break;
} 
break;
case 26: /* VOID */
 /* line 592: */
 /* line 593: */
KZWACTR = FBYACTR;
break;
default: 
 /* line 598: */
KZWACTR = HBYACTR;
break;
} 
IBYACTR = A_VC_PLUS(KZWACTR,A_HVEC(JBYACTR,')',A68_CHAR ));
A_PROC_EXIT(imperativemnemonic);
*ReturnedValue = (IBYACTR);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 3: */
 /* line 5: */
void QUWACTR(void)   /* initialise DECS mnemonics */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/shields/projects/Algol68/Tools/Algol68toC/src/a68toc","-v","-uname","seedfile","-lib","/home/shields/projects/Algol68/Tools/Algol68toC/a68config","-dir","/home/shields/projects/Algol68/Tools/Algol68toC/a68config","-dir","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel","-dir",".","mnemonics.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/shields/projects/Algol68/Tools/Algol68toC/a68config","A68_CDIR=","A68_DIR=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/shields/projects/Algol68/Tools/Algol68toC/a68config/a68config.m","./identifiers.m","./incimperatives.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/usefulops.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_116  GVWACTR;  /* procedure value */
A68_124  HVWACTR;  /* collateral clause result */
A68_119  OWWACTR;  /* OPERATORS - istruct to row */
A68_127  QWWACTR;  /* collateral clause result */
A68_119  DXWACTR;  /* OPERATORS - istruct to row */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
WIVACTR();   /* USE identifiers */
UAAACTR();   /* USE incimperatives */
IKAAOSF();   /* USE usefulops */
/* --- Initialise configuration information */
A_config.source_file = "/home/shields/projects/Algol68/Tools/Algol68toC/src/mnemonics.a68";
A_config.translation_time = "Sun Sep 26 21:51:07 2004";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "PUWACTR (from seed file) ";
A_config.spec_change_time = "Sun Sep 26 21:51:07 2004";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS mnemonics);
UEAALIB_a68config(LGAALIB_configinfo, UUWACTR);
 /* line 64: */
GVWACTR.fn.fn_global = XUWACTR_generator;
GVWACTR.nonlocals = A68_NIL;
VUWACTR_anonymous = GVWACTR;
 /* line 66: */
 /* line 67: */
 /* line 68: */
HVWACTR.data[0].Name = JVWACTR;
 /* line 69: */
HVWACTR.data[0].Value = SCAACTR_priobit;
HVWACTR.data[1].Name = LVWACTR;
 /* line 70: */
HVWACTR.data[1].Value = TCAACTR_exitbit;
HVWACTR.data[2].Name = NVWACTR;
 /* line 71: */
HVWACTR.data[2].Value = UCAACTR_semibit;
HVWACTR.data[3].Name = PVWACTR;
 /* line 72: */
HVWACTR.data[3].Value = VCAACTR_heapbit;
HVWACTR.data[4].Name = RVWACTR;
 /* line 73: */
HVWACTR.data[4].Value = WCAACTR_decbit;
HVWACTR.data[5].Name = TVWACTR;
 /* line 74: */
HVWACTR.data[5].Value = XCAACTR_vardecbit;
HVWACTR.data[6].Name = VVWACTR;
 /* line 75: */
HVWACTR.data[6].Value = YCAACTR_compgenbit;
HVWACTR.data[7].Name = XVWACTR;
 /* line 76: */
HVWACTR.data[7].Value = ZCAACTR_elifousebit;
HVWACTR.data[8].Name = ZVWACTR;
 /* line 77: */
HVWACTR.data[8].Value = ADAACTR_labbit;
HVWACTR.data[9].Name = BWWACTR;
 /* line 78: */
HVWACTR.data[9].Value = BDAACTR_dontpullbit;
HVWACTR.data[10].Name = DWWACTR;
 /* line 79: */
HVWACTR.data[10].Value = CDAACTR_dyprocbit;
HVWACTR.data[11].Name = FWWACTR;
 /* line 80: */
HVWACTR.data[11].Value = DDAACTR_dyvardecbit;
HVWACTR.data[12].Name = HWWACTR;
 /* line 81: */
HVWACTR.data[12].Value = EDAACTR_dydecbit;
HVWACTR.data[13].Name = JWWACTR;
 /* line 82: */
HVWACTR.data[13].Value = FDAACTR_genprocbit;
HVWACTR.data[14].Name = LWWACTR;
 /* line 83: */
HVWACTR.data[14].Value = GDAACTR_locgenbit;
HVWACTR.data[15].Name = NWWACTR;
 /* line 84: */
HVWACTR.data[15].Value = HDAACTR_locdydecbit;
PWWACTR_controlbits = A_HIS1ARR(OWWACTR,HVWACTR,A68_115 ,16);
 /* line 86: */
 /* line 87: */
 /* line 88: */
QWWACTR.data[0].Name = SWWACTR;
 /* line 89: */
QWWACTR.data[0].Value = NCAACTR_ccbit;
QWWACTR.data[1].Name = UWWACTR;
 /* line 90: */
QWWACTR.data[1].Value = OCAACTR_operatorbit;
QWWACTR.data[2].Name = WWWACTR;
 /* line 91: */
QWWACTR.data[2].Value = PCAACTR_valbit;
QWWACTR.data[3].Name = YWWACTR;
 /* line 92: */
QWWACTR.data[3].Value = QCAACTR_holebit;
QWWACTR.data[4].Name = AXWACTR;
 /* line 93: */
QWWACTR.data[4].Value = FDAACTR_genprocbit;
QWWACTR.data[5].Name = CXWACTR;
 /* line 94: */
QWWACTR.data[5].Value = RCAACTR_globscopebit;
EXWACTR_routinebits = A_HIS1ARR(DXWACTR,QWWACTR,A68_115 ,6);
 /* line 108: */
 /* line 109: */
 /* line 110: */
 /* line 111: */
FXWACTR_maskgeneral = (A68_BITS )((A68_BITS )((A68_BITS )((A68_BITS )((A68_BITS )((A68_BITS )((A68_BITS )(SCAACTR_priobit|UCAACTR_semibit)|WCAACTR_decbit)|XCAACTR_vardecbit)|ADAACTR_labbit)|TCAACTR_exitbit)|GDAACTR_locgenbit)|HDAACTR_locdydecbit);
 /* line 112: */
 /* line 113: */
GXWACTR_maskdynamica = (A68_BITS )((A68_BITS )(CDAACTR_dyprocbit|DDAACTR_dyvardecbit)|EDAACTR_dydecbit);
 /* line 114: */
 /* line 115: */
 /* line 116: */
IXWACTR_maskdynamicc = (A68_BITS )((A68_BITS )((A68_BITS )(BDAACTR_dontpullbit|CDAACTR_dyprocbit)|DDAACTR_dyvardecbit)|EDAACTR_dydecbit);
 /* line 117: */
 /* line 118: */
JXWACTR_maskroutine = (A68_BITS )((A68_BITS )(FDAACTR_genprocbit|RCAACTR_globscopebit)|PCAACTR_valbit);
 /* line 119: */
 /* line 120: */
 /* line 121: */
 /* line 122: */
LXWACTR_maskxroutine = (A68_BITS )((A68_BITS )((A68_BITS )((A68_BITS )((A68_BITS )(NCAACTR_ccbit|OCAACTR_operatorbit)|PCAACTR_valbit)|QCAACTR_holebit)|RCAACTR_globscopebit)|FDAACTR_genprocbit);
 /* line 124: */
 /* line 145: */
 /* line 163: */
 /* line 602: */
A_PROC_EXIT(DECS mnemonics);
} 
#undef NL
/* end of translation of mnemonics.a68 */
