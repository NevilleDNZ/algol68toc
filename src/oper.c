/* UNAME:KNQACTR */
#include <algol68/Asupport.h>

A_PROCEDURE(A68_VOID ,A68t31,(A68_VC ,A68_BOOL ),(A68_VC ,A68_BOOL ,void *));
typedef struct A68t31  A68_31 ;    /* PROC(MODE26,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t32,(void),(void *));
typedef struct A68t32  A68_32 ;    /* PROC VOID */

A_PROCEDURE(A68_VOID ,A68t33,(A68_INT ),(A68_INT ,void *));
typedef struct A68t33  A68_33 ;    /* PROC(INT) VOID */

A_PROCEDURE(A68_VOID ,A68t34,(A68_VC ,A68_INT ),(A68_VC ,A68_INT ,void *));
typedef struct A68t34  A68_34 ;    /* PROC(MODE26,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t35,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t35  A68_35 ;    /* PROC(INT) REF MODE26 */
struct A68t37 ;

A_PROCEDURE(A68_VOID ,A68t36,(A68_INT ,struct A68t37 ),(A68_INT ,struct A68t37 ,void *));
typedef struct A68t36  A68_36 ;    /* PROC(INT,MODE37) VOID */
A_ROW(A68_VC ,A68t37,1);
typedef struct A68t37  A68_37 ;    /* [] MODE26 */

A_PROCEDURE(A68_BITS ,A68t38,(void),(void *));
typedef struct A68t38  A68_38 ;    /* PROC BITS */
struct A68t39{
A68_INT  Cfile;
A_PAD_INT(PAD_1)
};
typedef struct A68t39  A68_39 ;    /* STRUCT(INT)  */
struct A68t40{
A68_INT  Seedfile;
A_PAD_INT(PAD_2)
};
typedef struct A68t40  A68_40 ;    /* STRUCT(INT)  */
A_ISTRUCT(A68_CHAR ,7,A68t42);
typedef struct A68t42  A68_42 ;    /* STRUCT 7 CHAR */
struct A68t41 { A68_INT mode; union {
struct A68t39  mode1;
struct A68t40  mode2;
struct A68t42  mode3;
} data; };
typedef struct A68t41  A68_41 ;    /* UNION(MODE39,MODE40,MODE42,VOID)  */

A_PROCEDURE(A68_VOID ,A68t43,(A68_VC ),(A68_VC ,void *));
typedef struct A68t43  A68_43 ;    /* PROC(MODE26) VOID */
struct A68t44{
A68_VC  Version;
A68_LINT  Translationtime;
A_PAD_LINT(PAD_3)
A68_VC  Sourcefile;
struct A68t42  Nameseed;
A_PAD_ISTRUCT(A68_42 ,PAD_4)
struct A68t41  Nameseedorigin;
struct A68t45 * Used_modules;
A68_VC  Commandline;
struct A68t46 * Environment;
};
typedef struct A68t44  A68_44 ;    /* STRUCT(REF MODE26,LONG INT,REF MODE26,MODE42,MODE41,REF MODE45,REF MODE26,REF MODE46)  */
struct A68t45{
A68_VC  Modinfo_file;
struct A68t45 * Next;
};
typedef struct A68t45  A68_45 ;    /* STRUCT(REF MODE26,REF MODE45)  */
struct A68t46{
A68_VC  Env_name;
A68_VC  Env_value;
struct A68t46 * Next;
};
typedef struct A68t46  A68_46 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE46)  */
struct A68t48 ;
struct A68t49 ;

A_PROCEDURE(struct A68t48 *,A68t47,(A68_VC ,struct A68t49 *,A68_VC *),(A68_VC ,struct A68t49 *,A68_VC *,void *));
typedef struct A68t47  A68_47 ;    /* PROC(MODE26,REF MODE49,REF REF MODE26) REF MODE48 */
struct A68t48{
A68_VC  Name;
A68_BITS * Stdiofile;
};
typedef struct A68t48  A68_48 ;    /* STRUCT(REF MODE26,REF BITS)  */
struct A68t49{
A68_VC  Dir;
struct A68t49 * Next;
};
typedef struct A68t49  A68_49 ;    /* STRUCT(REF MODE26,REF MODE49)  */
struct A68t50{
A68_INT  Mode;
A_PAD_INT(PAD_5)
A68_VC  String;
};
typedef struct A68t50  A68_50 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t51{
A68_INT  I;
A_PAD_INT(PAD_6)
};
typedef struct A68t51  A68_51 ;    /* STRUCT(INT)  */
A_ROW(A68_INT ,A68t53,1);
typedef struct A68t53  A68_53 ;    /* [] INT */
struct A68t52{
A68_INT  Body;
A_PAD_INT(PAD_7)
A68_INT  Moduleno;
A_PAD_INT(PAD_8)
struct A68t53  Actuals;
};
typedef struct A68t52  A68_52 ;    /* STRUCT(INT,INT,REF MODE53)  */
struct A68t54{
A68_INT  Mode;
A_PAD_INT(PAD_9)
A68_INT  Number;
A_PAD_INT(PAD_10)
A68_VC  Insert;
};
typedef struct A68t54  A68_54 ;    /* STRUCT(INT,INT,REF MODE26)  */
struct A68t56{
A68_INT  Moduleno;
A_PAD_INT(PAD_11)
A68_INT  I;
A_PAD_INT(PAD_12)
A68_INT  J;
A_PAD_INT(PAD_13)
};
typedef struct A68t56  A68_56 ;    /* STRUCT(INT,INT,INT)  */
A_ROW(A68_VC ,A68t58,1);
typedef struct A68t58  A68_58 ;    /* [] REF MODE26 */
struct A68t57{
A68_INT  Moduleno;
A_PAD_INT(PAD_14)
A68_VC  Name;
A68_VC  Uname;
A68_VC  Lname;
A68_VC  Gname;
struct A68t58  Ysnames;
};
typedef struct A68t57  A68_57 ;    /* STRUCT(INT,REF MODE26,REF MODE26,REF MODE26,REF MODE26,REF MODE58)  */
struct A68t55 { A68_INT mode; union {
struct A68t52  mode1;
struct A68t56  mode2;
struct A68t57  mode3;
} data; };
typedef struct A68t55  A68_55 ;    /* UNION(MODE52,MODE56,MODE57)  */
struct A68t60{
A68_INT  Nochars;
A_PAD_INT(PAD_15)
A68_INT  Nocases;
A_PAD_INT(PAD_16)
A68_INT  W;
A_PAD_INT(PAD_17)
};
typedef struct A68t60  A68_60 ;    /* STRUCT(INT,INT,INT)  */
struct A68t59{
struct A68t60  Info;
A68_VC  Text;
};
typedef struct A68t59  A68_59 ;    /* STRUCT(MODE60,REF MODE26)  */
struct A68t61{
A68_INT  Type;
A_PAD_INT(PAD_18)
A68_VC  Name;
A68_INT  Mode;
A_PAD_INT(PAD_19)
A68_INT  Decno;
A_PAD_INT(PAD_20)
};
typedef struct A68t61  A68_61 ;    /* STRUCT(INT,REF MODE26,INT,INT)  */
struct A68t62{
A68_VC  Representation;
};
typedef struct A68t62  A68_62 ;    /* STRUCT(REF MODE26)  */
struct A68t64{
A68_INT  Nse;
A_PAD_INT(PAD_21)
};
typedef struct A68t64  A68_64 ;    /* STRUCT(INT)  */
struct A68t65{
A68_INT  Labno;
A_PAD_INT(PAD_22)
};
typedef struct A68t65  A68_65 ;    /* STRUCT(INT)  */
struct A68t66{
A68_INT  Mode;
A_PAD_INT(PAD_23)
A68_VC  Nu;
};
typedef struct A68t66  A68_66 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t67{
A68_INT  Mode;
A_PAD_INT(PAD_24)
A68_LBITS  Denotation;
A_PAD_LBITS(PAD_25)
};
typedef struct A68t67  A68_67 ;    /* STRUCT(INT,LONG BITS)  */
struct A68t68{
A68_INT  Mode;
A_PAD_INT(PAD_26)
A68_VC  Denotation;
};
typedef struct A68t68  A68_68 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t69{
A68_INT  Fn;
A_PAD_INT(PAD_27)
A68_INT  Mode;
A_PAD_INT(PAD_28)
A68_INT  Param;
A_PAD_INT(PAD_29)
};
typedef struct A68t69  A68_69 ;    /* STRUCT(INT,INT,INT)  */
struct A68t70{
A68_VC  Name;
A68_BITS  Props;
A_PAD_BITS(PAD_30)
A68_INT  Mode;
A_PAD_INT(PAD_31)
A68_INT  Rdenno;
A_PAD_INT(PAD_32)
A68_INT  Maxname;
A_PAD_INT(PAD_33)
};
typedef struct A68t70  A68_70 ;    /* STRUCT(REF MODE26,BITS,INT,INT,INT)  */
struct A68t71{
A68_INT  W;
A_PAD_INT(PAD_34)
};
typedef struct A68t71  A68_71 ;    /* STRUCT(INT)  */
struct A68t72{
A68_VC  Name;
A68_INT  Labno;
A_PAD_INT(PAD_35)
A68_INT  Status;
A_PAD_INT(PAD_36)
A68_BOOL  Notsetting;
A_PAD_BOOL(PAD_37)
};
typedef struct A68t72  A68_72 ;    /* STRUCT(REF MODE26,INT,INT,BOOL)  */
struct A68t73{
A68_INT  Mode;
A_PAD_INT(PAD_38)
A68_BITS  Props;
A_PAD_BITS(PAD_39)
A68_INT  Param;
A_PAD_INT(PAD_40)
};
typedef struct A68t73  A68_73 ;    /* STRUCT(INT,BITS,INT)  */
struct A68t74{
A68_BOOL  Start;
A_PAD_BOOL(PAD_41)
};
typedef struct A68t74  A68_74 ;    /* STRUCT(BOOL)  */
struct A68t75{
A68_INT  Fn;
A_PAD_INT(PAD_42)
A68_INT  Mode;
A_PAD_INT(PAD_43)
A68_BITS  Props;
A_PAD_BITS(PAD_44)
A68_INT  Param;
A_PAD_INT(PAD_45)
};
typedef struct A68t75  A68_75 ;    /* STRUCT(INT,INT,BITS,INT)  */
struct A68t76{
A68_INT  Fn;
A_PAD_INT(PAD_46)
A68_INT  Mode;
A_PAD_INT(PAD_47)
A68_BITS  Props;
A_PAD_BITS(PAD_48)
A68_INT  Resultmode;
A_PAD_INT(PAD_49)
};
typedef struct A68t76  A68_76 ;    /* STRUCT(INT,INT,BITS,INT)  */
struct A68t77{
A68_INT  Fn;
A_PAD_INT(PAD_50)
A68_BITS  Props;
A_PAD_BITS(PAD_51)
};
typedef struct A68t77  A68_77 ;    /* STRUCT(INT,BITS)  */
struct A68t63 { A68_INT mode; union {
struct A68t64  mode1;
A68_INT  mode2;
A68_BOOL  mode3;
struct A68t62  mode4;
struct A68t65  mode5;
struct A68t66  mode6;
struct A68t50  mode7;
struct A68t67  mode8;
struct A68t68  mode9;
struct A68t69  mode10;
struct A68t61  mode11;
struct A68t70  mode12;
struct A68t71  mode13;
struct A68t72  mode14;
struct A68t73  mode15;
struct A68t51  mode16;
struct A68t74  mode17;
struct A68t59  mode18;
struct A68t54  mode19;
struct A68t75  mode20;
struct A68t76  mode21;
struct A68t77  mode22;
struct A68t52  mode23;
struct A68t56  mode24;
struct A68t57  mode25;
} data; };
typedef struct A68t63  A68_63 ;    /* UNION(MODE64,INT,BOOL,MODE62,MODE65,MODE66,MODE50,MODE67,MODE68,MODE69,MODE61,MODE70,MODE71,MODE72,MODE73,MODE51,MODE74,MODE59,MODE54,MODE75,MODE76,MODE77,MODE52,MODE56,MODE57,VOID)  */
struct A68t78 { A68_INT mode; union {
struct A68t64  mode1;
A68_INT  mode2;
A68_BOOL  mode3;
struct A68t62  mode4;
struct A68t65  mode5;
struct A68t66  mode6;
struct A68t50  mode7;
struct A68t67  mode8;
struct A68t68  mode9;
} data; };
typedef struct A68t78  A68_78 ;    /* UNION(MODE64,INT,BOOL,MODE62,MODE65,MODE66,MODE50,MODE67,MODE68)  */
struct A68t79 { A68_INT mode; union {
struct A68t64  mode1;
A68_INT  mode2;
A68_BOOL  mode3;
struct A68t62  mode4;
struct A68t65  mode5;
struct A68t66  mode6;
struct A68t50  mode7;
struct A68t67  mode8;
struct A68t68  mode9;
struct A68t69  mode10;
struct A68t61  mode11;
struct A68t70  mode12;
struct A68t71  mode13;
struct A68t72  mode14;
struct A68t73  mode15;
struct A68t51  mode16;
struct A68t74  mode17;
struct A68t59  mode18;
struct A68t54  mode19;
} data; };
typedef struct A68t79  A68_79 ;    /* UNION(MODE64,INT,BOOL,MODE62,MODE65,MODE66,MODE50,MODE67,MODE68,MODE69,MODE61,MODE70,MODE71,MODE72,MODE73,MODE51,MODE74,MODE59,MODE54)  */
struct A68t82{
A68_INT  Rdenno;
A_PAD_INT(PAD_52)
};
typedef struct A68t82  A68_82 ;    /* STRUCT(INT)  */
struct A68t83{
A68_INT  Idno;
A_PAD_INT(PAD_53)
};
typedef struct A68t83  A68_83 ;    /* STRUCT(INT)  */
struct A68t84{
struct A68t42  Name;
A_PAD_ISTRUCT(A68_42 ,PAD_54)
A68_INT  Mode;
A_PAD_INT(PAD_55)
};
typedef struct A68t84  A68_84 ;    /* STRUCT(MODE42,INT)  */
struct A68t85{
A68_INT  Fn;
A_PAD_INT(PAD_56)
A68_INT  Param;
A_PAD_INT(PAD_57)
struct A68t86 * Operands;
};
typedef struct A68t85  A68_85 ;    /* STRUCT(INT,INT,REF MODE86)  */
struct A68t81 { A68_INT mode; union {
A68_LBITS  mode1;
struct A68t82  mode2;
struct A68t83  mode4;
struct A68t84  mode5;
A68_VC  mode6;
struct A68t65  mode7;
struct A68t64  mode8;
struct A68t85  mode9;
} data; };
typedef struct A68t81  A68_81 ;    /* UNION(LONG BITS,MODE82,VOID,MODE83,MODE84,MODE26,MODE65,MODE64,MODE85)  */
struct A68t80{
A68_INT  Mode;
A_PAD_INT(PAD_58)
A68_BITS  Info;
A_PAD_BITS(PAD_59)
struct A68t81  Extra;
};
typedef struct A68t80  A68_80 ;    /* STRUCT(INT,BITS,MODE81)  */
struct A68t86{
struct A68t80  Value;
struct A68t86 * Rest;
};
typedef struct A68t86  A68_86 ;    /* STRUCT(MODE80,REF MODE86)  */

A_PROCEDURE(A68_BOOL ,A68t87,(struct A68t80 *,struct A68t80 *),(struct A68t80 *,struct A68t80 *,void *));
typedef struct A68t87  A68_87 ;    /* PROC(REF MODE80,REF MODE80) BOOL */

A_PROCEDURE(A68_BOOL ,A68t88,(struct A68t80 *),(struct A68t80 *,void *));
typedef struct A68t88  A68_88 ;    /* PROC(REF MODE80) BOOL */

A_PROCEDURE(A68_BOOL ,A68t89,(struct A68t80 *,A68_LBITS ),(struct A68t80 *,A68_LBITS ,void *));
typedef struct A68t89  A68_89 ;    /* PROC(REF MODE80,LONG BITS) BOOL */

A_PROCEDURE(A68_LBITS ,A68t90,(struct A68t80 *),(struct A68t80 *,void *));
typedef struct A68t90  A68_90 ;    /* PROC(REF MODE80) LONG BITS */

A_PROCEDURE(A68_VOID ,A68t91,(struct A68t80 *,A68_VC *),(struct A68t80 *,A68_VC *,void *));
typedef struct A68t91  A68_91 ;    /* PROC(REF MODE80) MODE26 */

A_PROCEDURE(struct A68t80 *,A68t92,(struct A68t80 *,A68_INT ),(struct A68t80 *,A68_INT ,void *));
typedef struct A68t92  A68_92 ;    /* PROC(REF MODE80,INT) REF MODE80 */

A_PROCEDURE(A68_INT ,A68t93,(struct A68t85 ),(struct A68t85 ,void *));
typedef struct A68t93  A68_93 ;    /* PROC(MODE85) INT */
struct A68t94{
struct A68t80 * Value;
struct A68t95 * End;
A68_INT  Type;
A_PAD_INT(PAD_60)
};
typedef struct A68t94  A68_94 ;    /* STRUCT(REF MODE80,REF MODE95,INT)  */
struct A68t95{
struct A68t42  Name;
A_PAD_ISTRUCT(A68_42 ,PAD_61)
A68_BOOL  Set;
A_PAD_BOOL(PAD_62)
};
typedef struct A68t95  A68_95 ;    /* STRUCT(MODE42,BOOL)  */

A_PROCEDURE(A68_BOOL ,A68t96,(struct A68t80 *,A68_BITS ),(struct A68t80 *,A68_BITS ,void *));
typedef struct A68t96  A68_96 ;    /* PROC(REF MODE80,BITS) BOOL */

A_PROCEDURE(struct A68t80 *,A68t97,(struct A68t86 *,A68_INT ),(struct A68t86 *,A68_INT ,void *));
typedef struct A68t97  A68_97 ;    /* PROC(REF MODE86,INT) REF MODE80 */

A_PROCEDURE(A68_INT ,A68t98,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t98  A68_98 ;    /* PROC(INT,INT) INT */

A_PROCEDURE(struct A68t86 *,A68t99,(struct A68t86 *),(struct A68t86 *,void *));
typedef struct A68t99  A68_99 ;    /* PROC(REF MODE86) REF MODE86 */
struct A68t101 ;

A_PROCEDURE(struct A68t80 *,A68t100,(A68_INT ,A68_INT ,A68_BITS ,struct A68t101 ),(A68_INT ,A68_INT ,A68_BITS ,struct A68t101 ,void *));
typedef struct A68t100  A68_100 ;    /* PROC(INT,INT,BITS,MODE101) REF MODE80 */
A_VECTOR(struct A68t80 *,A68t101);
typedef struct A68t101  A68_101 ;    /* VECTOR [] REF MODE80 */

A_PROCEDURE(A68_VOID ,A68t102,(struct A68t80 *),(struct A68t80 *,void *));
typedef struct A68t102  A68_102 ;    /* PROC(REF MODE80) VOID */

A_PROCEDURE(A68_VOID ,A68t103,(struct A68t80 *,A68_BOOL ,A68_VC *),(struct A68t80 *,A68_BOOL ,A68_VC *,void *));
typedef struct A68t103  A68_103 ;    /* PROC(REF MODE80,BOOL) MODE26 */

A_PROCEDURE(A68_LINT ,A68t104,(struct A68t80 ),(struct A68t80 ,void *));
typedef struct A68t104  A68_104 ;    /* PROC(MODE80) LONG INT */

A_PROCEDURE(A68_VOID ,A68t105,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t105  A68_105 ;    /* PROC(MODE26) MODE26 */
struct A68t106 { A68_INT mode; union {
struct A68t80 * mode1;
A68_VC  mode2;
struct A68t84  mode3;
} data; };
typedef struct A68t106  A68_106 ;    /* UNION(REF MODE80,MODE26,MODE84)  */

A_PROCEDURE(A68_VOID ,A68t107,(struct A68t106 ,A68_VC *),(struct A68t106 ,A68_VC *,void *));
typedef struct A68t107  A68_107 ;    /* PROC(MODE106) MODE26 */
struct A68t109 ;

A_PROCEDURE(A68_VOID ,A68t108,(struct A68t109 ,A68_VC *),(struct A68t109 ,A68_VC *,void *));
typedef struct A68t108  A68_108 ;    /* PROC(MODE109) MODE26 */
A_VECTOR(struct A68t106 ,A68t109);
typedef struct A68t109  A68_109 ;    /* VECTOR [] MODE106 */

A_PROCEDURE(A68_VOID ,A68t110,(A68_VC ,struct A68t109 ,A68_VC *),(A68_VC ,struct A68t109 ,A68_VC *,void *));
typedef struct A68t110  A68_110 ;    /* PROC(MODE26,MODE109) MODE26 */

A_PROCEDURE(A68_VOID ,A68t111,(struct A68t109 ),(struct A68t109 ,void *));
typedef struct A68t111  A68_111 ;    /* PROC(MODE109) VOID */

A_PROCEDURE(A68_VOID ,A68t112,(A68_VC ,A68_INT ,struct A68t109 ,struct A68t84 *),(A68_VC ,A68_INT ,struct A68t109 ,struct A68t84 *,void *));
typedef struct A68t112  A68_112 ;    /* PROC(MODE26,INT,MODE109) MODE84 */

A_PROCEDURE(struct A68t80 *,A68t113,(struct A68t80 *),(struct A68t80 *,void *));
typedef struct A68t113  A68_113 ;    /* PROC(REF MODE80) REF MODE80 */

A_PROCEDURE(struct A68t80 *,A68t114,(A68_VC ,struct A68t80 *),(A68_VC ,struct A68t80 *,void *));
typedef struct A68t114  A68_114 ;    /* PROC(MODE26,REF MODE80) REF MODE80 */

A_PROCEDURE(A68_VOID ,A68t115,(A68_BOOL ,A68_VC *),(A68_BOOL ,A68_VC *,void *));
typedef struct A68t115  A68_115 ;    /* PROC(BOOL) MODE26 */

A_PROCEDURE(A68_VOID ,A68t116,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t116  A68_116 ;    /* PROC(MODE26) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t117,(struct A68t32 ),(struct A68t32 ,void *));
typedef struct A68t117  A68_117 ;    /* PROC(MODE32) VOID */

A_PROCEDURE(A68_VOID ,A68t118,(struct A68t43 ),(struct A68t43 ,void *));
typedef struct A68t118  A68_118 ;    /* PROC(MODE43) VOID */

A_PROCEDURE(A68_VOID ,A68t119,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t119  A68_119 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,59,A68t120);
typedef struct A68t120  A68_120 ;    /* STRUCT 59 CHAR */
A_ISTRUCT(A68_INT ,51,A68t121);
typedef struct A68t121  A68_121 ;    /* STRUCT 51 INT */
struct A68t122{
A68_INT  Number;
A_PAD_INT(PAD_63)
A68_INT  Procmode;
A_PAD_INT(PAD_64)
struct A68t86 * Parameters;
};
typedef struct A68t122  A68_122 ;    /* STRUCT(INT,INT,REF MODE86)  */

A_PROCEDURE(struct A68t86 *,A68t123,(struct A68t86 *,struct A68t86 *,A68_INT ,struct A68t86 **),(struct A68t86 *,struct A68t86 *,A68_INT ,struct A68t86 **,void *));
typedef struct A68t123  A68_123 ;    /* PROC(REF MODE86,REF MODE86,INT,REF REF MODE86) REF MODE86 */

A_PROCEDURE(A68_VOID ,A68t124,(struct A68t69 ,struct A68t86 **,struct A68t86 *),(struct A68t69 ,struct A68t86 **,struct A68t86 *,void *));
typedef struct A68t124  A68_124 ;    /* PROC(MODE69,REF REF MODE86,REF MODE86) VOID */

A_PROCEDURE(A68_VOID ,A68t125,(A68_INT ,A68_INT ,A68_INT ,struct A68t86 *),(A68_INT ,A68_INT ,A68_INT ,struct A68t86 *,void *));
typedef struct A68t125  A68_125 ;    /* PROC(INT,INT,INT,REF MODE86) VOID */

A_PROCEDURE(struct A68t86 *,A68t126,(struct A68t86 *,struct A68t86 ),(struct A68t86 *,struct A68t86 ,void *));
typedef struct A68t126  A68_126 ;    /* PROC(REF MODE86,MODE86) REF MODE86 */

A_PROCEDURE(struct A68t80 *,A68t127,(struct A68t80 *,struct A68t80 ),(struct A68t80 *,struct A68t80 ,void *));
typedef struct A68t127  A68_127 ;    /* PROC(REF MODE80,MODE80) REF MODE80 */

A_PROCEDURE(struct A68t81 *,A68t128,(struct A68t81 *,struct A68t81 ),(struct A68t81 *,struct A68t81 ,void *));
typedef struct A68t128  A68_128 ;    /* PROC(REF MODE81,MODE81) REF MODE81 */
#define A68_129  A68_VC 
#define A68t129 A68t26            /* FLEX VECTOR [] CHAR */

A_PROCEDURE(A68_VOID ,A68t130,(struct A68t86 **,A68_INT ,A68_INT ,A68_INT ,A68_BITS ,struct A68t86 *),(struct A68t86 **,A68_INT ,A68_INT ,A68_INT ,A68_BITS ,struct A68t86 *,void *));
typedef struct A68t130  A68_130 ;    /* PROC(REF REF MODE86,INT,INT,INT,BITS,REF MODE86) VOID */
A_ISTRUCT(A68_CHAR ,22,A68t131);
typedef struct A68t131  A68_131 ;    /* STRUCT 22 CHAR */
A_ISTRUCT(A68_CHAR ,26,A68t132);
typedef struct A68t132  A68_132 ;    /* STRUCT 26 CHAR */
A_ISTRUCT(A68_CHAR ,20,A68t133);
typedef struct A68t133  A68_133 ;    /* STRUCT 20 CHAR */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from values --- */
extern A68_BITS  YIJACTR_defaultinfo;
/* --- End of imports from values --- */


/* --- Imports from incoperfn --- */
#define DGAACTR_trimfn 5
#define EGAACTR_boundpackfn 9
#define KGAACTR_callfn 18
#define WGAACTR_operandsshift 18
extern A68_BITS  ZGAACTR_parammask;
/* --- End of imports from incoperfn --- */


/* --- Imports from incmode --- */
#define VEAACTR_faultmode 6
#define EFAACTR_intmode 15
#define OFAACTR_longlongcomplmode 25
#define PEAACTR_nomode 0
/* --- End of imports from incmode --- */


/* --- Imports from incimperatives --- */
/* --- End of imports from incimperatives --- */


/* --- Imports from environment --- */
extern A68_VOID  PXIACTR_assert(A68_VC ,A68_BOOL );
/* --- End of imports from environment --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void JRPACTR(void);   /* values */
extern void XFAACTR(void);   /* incoperfn */
extern void ZDAACTR(void);   /* incmode */
extern void UAAACTR(void);   /* incimperatives */
extern void HPIACTR(void);   /* environment */
/* --- end of DECS initialisation functions --- */
static A68_120   ONQACTR = {"$Id: oper.c,v 1.5.2.4 2004/09/27 03:04:20 teshields Exp $"}; 
A_GISVEC(A68_VC ,PNQACTR,ONQACTR,59)
#define QNQACTR_oneop 1
#define RNQACTR_twoop 2
#define SNQACTR_paramop 3
#define TNQACTR_paramplusoneop 4
#define UNQACTR_defaultbound 5
#define VNQACTR_boundpack 6
#define WNQACTR_trim 7
#define XNQACTR_parameterpack 8
#define YNQACTR_call 9
#define ZNQACTR_nullop 10
#define AOQACTR_zeroop 11
#define BOQACTR_formatop 12
static A68_53  EOQACTR_opertype;
static A68_122  GOQACTR_noparameterinfo;
static A68_122  HOQACTR_parameters;
static A68_131   FRQACTR = {"parampack without call"}; 
A_GISVEC(A68_VC ,GRQACTR,FRQACTR,22)
static A68_132   JRQACTR = {"wrong parampack for a call"}; 
A_GISVEC(A68_VC ,KRQACTR,JRQACTR,26)
static A68_133   ORQACTR = {"invalid type in oper"}; 
A_GISVEC(A68_VC ,PRQACTR,ORQACTR,20)
typedef struct   /* env of non-global proc */
{
A68_86 ** Valuestack;
A68_86 * Newspace;
} DPQACTR_newstackitem;
typedef struct   /* env of non-global proc */
{
A68_125  BPQACTR_newstackitem;
} IQQACTR_simpleoper;

A_STATIC A68_86 * MOQACTR_breakvaluelist(A68_86 * List, A68_86 * Newbackoffrontlist, A68_INT  Index, A68_86 ** Backlistpointer);

A68_VOID  VOQACTR_oper(A68_69  Oper, A68_86 ** Valuestack, A68_86 * Newspace);

A_STATIC A68_VOID  CPQACTR_newstackitem(A68_INT  Mode, A68_INT  Fn, A68_INT  Param, A68_86 * Operands, void *NonLocals);

A_STATIC A68_86 * JPQACTR_assignment(A68_86 * HPQACTR_anonymous, A68_86  IPQACTR_anonymous);

A_STATIC A68_80 * MPQACTR_assignment(A68_80 * KPQACTR_anonymous, A68_80  LPQACTR_anonymous);

A_STATIC A68_81 * RPQACTR_assignment(A68_81 * PPQACTR_anonymous, A68_81  QPQACTR_anonymous);

A_STATIC A68_VOID  HQQACTR_simpleoper(A68_86 ** Valuestack, A68_INT  Mode, A68_INT  Operfn, A68_INT  Numberoperands, A68_BITS  Param, A68_86 * Newspace, void *NonLocals);

A_STATIC A68_81 * RPQACTR_assignment(A68_81 * PPQACTR_anonymous, A68_81  QPQACTR_anonymous)
{ 
A68_81  SPQACTR;  /* united object - for case conformity */
A68_VC  TPQACTR_anonymous;
A68_VC  UPQACTR;  /* OPERATORS - copy to flex */
A68_129 * VPQACTR;  /* YIELD */
A68_81 * WPQACTR;  /* clause result */
{ 
(*PPQACTR_anonymous) = QPQACTR_anonymous;
SPQACTR = QPQACTR_anonymous ;
switch ( SPQACTR.mode )
{ 
case 6: /* VECTOR [] CHAR */
TPQACTR_anonymous = (SPQACTR.data.mode6);
VPQACTR = &(PPQACTR_anonymous-> data.mode6) ;
(*VPQACTR) = A_VCOPY(TPQACTR_anonymous,UPQACTR,A68_CHAR );
break;
default: 
/*SKIP*/;
break;
} 
WPQACTR = PPQACTR_anonymous;
} 
return( WPQACTR );
} 
#undef NL

A_STATIC A68_80 * MPQACTR_assignment(A68_80 * KPQACTR_anonymous, A68_80  LPQACTR_anonymous)
{ 
A68_INT * NPQACTR;  /* YIELD */
A68_BITS * OPQACTR;  /* YIELD */
A68_80 * XPQACTR;  /* clause result */
{ 
NPQACTR = (&(KPQACTR_anonymous->Mode)) ;
(*NPQACTR) = LPQACTR_anonymous.Mode;
OPQACTR = (&(KPQACTR_anonymous->Info)) ;
(*OPQACTR) = LPQACTR_anonymous.Info;
RPQACTR_assignment((&(KPQACTR_anonymous->Extra)), LPQACTR_anonymous.Extra);
XPQACTR = KPQACTR_anonymous;
} 
return( XPQACTR );
} 
#undef NL

A_STATIC A68_86 * JPQACTR_assignment(A68_86 * HPQACTR_anonymous, A68_86  IPQACTR_anonymous)
{ 
A68_86 ** YPQACTR;  /* YIELD */
A68_86 * ZPQACTR;  /* clause result */
{ 
MPQACTR_assignment((&(HPQACTR_anonymous->Value)), IPQACTR_anonymous.Value);
YPQACTR = (&(HPQACTR_anonymous->Rest)) ;
(*YPQACTR) = IPQACTR_anonymous.Rest;
ZPQACTR = HPQACTR_anonymous;
} 
return( ZPQACTR );
} 
#undef NL

A_STATIC A68_VOID  CPQACTR_newstackitem(A68_INT  Mode, A68_INT  Fn, A68_INT  Param, A68_86 * Operands, void *NonLocals)
#define NL(x) (((DPQACTR_newstackitem *)NonLocals)->x)
{ 
A68_86  EPQACTR;  /* collateral clause result */
A68_85  FPQACTR;  /* collateral clause result */
A68_81  GPQACTR;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(newstackitem);
 /* line 171: */
 /* line 172: */
 /* line 173: */
 /* line 174: */
EPQACTR.Value.Mode = Mode;
 /* line 175: */
EPQACTR.Value.Info = YIJACTR_defaultinfo;
FPQACTR.Fn = Fn;
FPQACTR.Param = Param;
 /* line 176: */
FPQACTR.Operands = Operands;
 /* line 178: */
EPQACTR.Value.Extra = A_UNITE(GPQACTR,mode9,9,FPQACTR);
 /* line 179: */
EPQACTR.Rest = (*NL(Valuestack));
(*NL(Valuestack)) = JPQACTR_assignment(NL(Newspace), EPQACTR);
A_PROC_EXIT(newstackitem);
return;
} 
#undef NL
 /* line 183: */
 /* line 184: */
 /* line 186: */

A_STATIC A68_VOID  HQQACTR_simpleoper(A68_86 ** Valuestack, A68_INT  Mode, A68_INT  Operfn, A68_INT  Numberoperands, A68_BITS  Param, A68_86 * Newspace, void *NonLocals)
#define NL(x) (((IQQACTR_simpleoper *)NonLocals)->x)
{ 
A68_86 * JQQACTR_operands;
A68_86 ** KQQACTR_breakpoint;
A68_INT  LQQACTR;  /* to part of loop */
A68_INT  MQQACTR;  /* loop control */
A68_BITS  NQQACTR;  /* SHL */
A_PROC_ENTRY(simpleoper);
 /* line 191: */
 /* line 193: */
{ 
JQQACTR_operands = (*Valuestack);
 /* line 194: */
KQQACTR_breakpoint = Valuestack;
 /* line 195: */
LQQACTR = Numberoperands;
for ( MQQACTR = 1;
MQQACTR <= LQQACTR;
MQQACTR += 1 )
{ 
KQQACTR_breakpoint = (&((*KQQACTR_breakpoint)->Rest));
}
 /* line 196: */
(*Valuestack) = (*KQQACTR_breakpoint);
 /* line 197: */
(*KQQACTR_breakpoint) = (A68_86 *)A68_NIL;
 /* line 199: */
 /* line 200: */
 /* line 201: */
 /* line 202: */
 /* line 204: */
 /* line 205: */
NQQACTR = (A68_BITS )Numberoperands ;
A_CALLPROC(NL(BPQACTR_newstackitem),(Mode, Operfn, (A68_INT )(A68_BITS )(A_SHL(NQQACTR,WGAACTR_operandsshift)|Param), JQQACTR_operands),(Mode, Operfn, (A68_INT )(A68_BITS )(A_SHL(NQQACTR,WGAACTR_operandsshift)|Param), JQQACTR_operands,(NL(BPQACTR_newstackitem)).nonlocals));
} 
A_PROC_EXIT(simpleoper);
return;
} 
#undef NL
 /* line 120: */
 /* line 122: */

A_STATIC A68_86 * MOQACTR_breakvaluelist(A68_86 * List, A68_86 * Newbackoffrontlist, A68_INT  Index, A68_86 ** Backlistpointer)
{ 
A68_86 * NOQACTR_front;
A68_86 ** OOQACTR_breakpoint;
A68_INT  POQACTR;  /* to part of loop */
A68_INT  QOQACTR;  /* loop control */
A68_86 * ROQACTR;  /* clause result */
A_PROC_ENTRY(breakvaluelist);
 /* line 131: */
 /* line 132: */
{ 
NOQACTR_front = List;
 /* line 133: */
OOQACTR_breakpoint = (&NOQACTR_front);
 /* line 134: */
POQACTR = Index;
for ( QOQACTR = 1;
QOQACTR <= POQACTR;
QOQACTR += 1 )
{ 
OOQACTR_breakpoint = (&((*OOQACTR_breakpoint)->Rest));
}
 /* line 135: */
(*Backlistpointer) = (*OOQACTR_breakpoint);
 /* line 136: */
(*OOQACTR_breakpoint) = Newbackoffrontlist;
 /* line 137: */
 /* line 138: */
ROQACTR = NOQACTR_front;
} 
A_PROC_EXIT(breakvaluelist);
return( ROQACTR );
} 
#undef NL
 /* line 142: */
 /* line 144: */

A68_VOID  VOQACTR_oper(A68_69  Oper, A68_86 ** Valuestack, A68_86 * Newspace)
{ 
A68_125  BPQACTR_newstackitem;   /* proc value of non-global proc */
A68_130  GQQACTR_simpleoper;   /* proc value of non-global proc */
A68_BITS  OQQACTR_param;
A68_INT  PQQACTR_operfn;
A68_INT  QQQACTR_opermode;
A68_86 * RQQACTR_operands;
A68_86 ** SQQACTR;  /* YIELD */
A68_BITS  TQQACTR;  /* SHL */
A68_86 * UQQACTR_operands;
A68_86 ** VQQACTR;  /* YIELD */
A68_BITS  WQQACTR;  /* SHL */
A68_86 * XQQACTR_operands;
A68_86 * YQQACTR_operands;
A68_BITS  ZQQACTR;  /* SHL */
A68_80  ARQACTR;  /* collateral clause result */
A68_81  BRQACTR;  /* OPERATORS - mode -> union mode */
A68_LBITS  CRQACTR;  /* YIELD */
A68_86 * DRQACTR_operands;
A68_86 * ERQACTR_operands;
A68_122  HRQACTR;  /* collateral clause result */
A68_INT * IRQACTR_procmode;
A68_86 * LRQACTR_operands;
A68_BITS  MRQACTR;  /* SHL */
A68_INT  NRQACTR;  /* clause result */
A_PROC_ENTRY(oper);
 /* line 167: */
 /* line 169: */
{ 
 /* line 170: */
A_CLOSURE( BPQACTR_newstackitem, CPQACTR_newstackitem, DPQACTR_newstackitem );
(( DPQACTR_newstackitem * ) ( BPQACTR_newstackitem.nonlocals )) -> Valuestack = Valuestack;
(( DPQACTR_newstackitem * ) ( BPQACTR_newstackitem.nonlocals )) -> Newspace = Newspace;
 /* line 181: */
 /* line 182: */
A_CLOSURE( GQQACTR_simpleoper, HQQACTR_simpleoper, IQQACTR_simpleoper );
(( IQQACTR_simpleoper * ) ( GQQACTR_simpleoper.nonlocals )) -> BPQACTR_newstackitem = BPQACTR_newstackitem;
 /* line 206: */
OQQACTR_param = (A68_BITS )((A68_BITS )Oper.Param&ZGAACTR_parammask);
 /* line 207: */
PQQACTR_operfn = Oper.Fn;
QQQACTR_opermode = Oper.Mode;
 /* line 208: */
 /* line 209: */
 /* line 211: */
switch ( A_R1INDEX(EOQACTR_opertype,PQQACTR_operfn) )
{ 
case 1: 
 /* line 212: */
{ 
RQQACTR_operands = (*Valuestack);
 /* line 213: */
(*Valuestack) = (*(&((*Valuestack)->Rest)));
 /* line 214: */
SQQACTR = (&(RQQACTR_operands->Rest)) ;
(*SQQACTR) = (A68_86 *)A68_NIL;
 /* line 216: */
 /* line 217: */
 /* line 218: */
 /* line 219: */
 /* line 221: */
 /* line 222: */
 /* line 223: */
 /* line 225: */
TQQACTR = 01U ;
A_CALLPROC(BPQACTR_newstackitem,(QQQACTR_opermode, PQQACTR_operfn, (A68_INT )(A68_BITS )(A_SHL(TQQACTR,WGAACTR_operandsshift)|OQQACTR_param), RQQACTR_operands),(QQQACTR_opermode, PQQACTR_operfn, (A68_INT )(A68_BITS )(A_SHL(TQQACTR,WGAACTR_operandsshift)|OQQACTR_param), RQQACTR_operands,(BPQACTR_newstackitem).nonlocals));
} 
break;
case 2: 
 /* line 226: */
{ 
UQQACTR_operands = (*Valuestack);
 /* line 227: */
(*Valuestack) = (*(&((*(&((*Valuestack)->Rest)))->Rest)));
 /* line 228: */
VQQACTR = (&((*(&(UQQACTR_operands->Rest)))->Rest)) ;
(*VQQACTR) = (A68_86 *)A68_NIL;
 /* line 229: */
 /* line 230: */
 /* line 231: */
 /* line 232: */
 /* line 234: */
 /* line 235: */
 /* line 236: */
 /* line 238: */
WQQACTR = 02U ;
A_CALLPROC(BPQACTR_newstackitem,(QQQACTR_opermode, PQQACTR_operfn, (A68_INT )(A68_BITS )(A_SHL(WQQACTR,WGAACTR_operandsshift)|OQQACTR_param), UQQACTR_operands),(QQQACTR_opermode, PQQACTR_operfn, (A68_INT )(A68_BITS )(A_SHL(WQQACTR,WGAACTR_operandsshift)|OQQACTR_param), UQQACTR_operands,(BPQACTR_newstackitem).nonlocals));
} 
break;
case 3: 
 /* line 240: */
{ 
XQQACTR_operands = MOQACTR_breakvaluelist((*Valuestack), (A68_86 *)A68_NIL, (A68_INT )OQQACTR_param, Valuestack);
 /* line 241: */
 /* line 242: */
 /* line 243: */
 /* line 244: */
 /* line 246: */
 /* line 247: */
 /* line 248: */
 /* line 250: */
A_CALLPROC(BPQACTR_newstackitem,(QQQACTR_opermode, PQQACTR_operfn, (A68_INT )(A68_BITS )(A_SHL(OQQACTR_param,WGAACTR_operandsshift)|OQQACTR_param), XQQACTR_operands),(QQQACTR_opermode, PQQACTR_operfn, (A68_INT )(A68_BITS )(A_SHL(OQQACTR_param,WGAACTR_operandsshift)|OQQACTR_param), XQQACTR_operands,(BPQACTR_newstackitem).nonlocals));
} 
break;
case 4: 
 /* line 252: */
{ 
YQQACTR_operands = MOQACTR_breakvaluelist((*Valuestack), (A68_86 *)A68_NIL, ((A68_INT )OQQACTR_param+1), Valuestack);
 /* line 253: */
 /* line 254: */
 /* line 255: */
 /* line 256: */
 /* line 258: */
 /* line 259: */
 /* line 260: */
 /* line 262: */
ZQQACTR = (A68_BITS )((A68_INT )OQQACTR_param+1) ;
A_CALLPROC(BPQACTR_newstackitem,(QQQACTR_opermode, PQQACTR_operfn, (A68_INT )(A68_BITS )(A_SHL(ZQQACTR,WGAACTR_operandsshift)|OQQACTR_param), YQQACTR_operands),(QQQACTR_opermode, PQQACTR_operfn, (A68_INT )(A68_BITS )(A_SHL(ZQQACTR,WGAACTR_operandsshift)|OQQACTR_param), YQQACTR_operands,(BPQACTR_newstackitem).nonlocals));
} 
break;
case 5: 
 /* line 263: */
{ 
ARQACTR.Mode = EFAACTR_intmode;
ARQACTR.Info = YIJACTR_defaultinfo;
CRQACTR = (A68_LBITS )0X1U ;
ARQACTR.Extra = A_UNITE(BRQACTR,mode1,1,CRQACTR);
MPQACTR_assignment((&(Newspace->Value)), ARQACTR);
 /* line 264: */
 /* line 265: */
 /* line 266: */
 /* line 268: */
MOQACTR_breakvaluelist((*Valuestack), Newspace, 1, (&(Newspace->Rest)));
} 
break;
case 6: 
 /* line 270: */
{ 
DRQACTR_operands = MOQACTR_breakvaluelist((*Valuestack), (A68_86 *)A68_NIL, (A68_INT )OQQACTR_param, Valuestack);
 /* line 271: */
 /* line 272: */
 /* line 273: */
 /* line 274: */
 /* line 276: */
 /* line 277: */
 /* line 278: */
 /* line 280: */
A_CALLPROC(BPQACTR_newstackitem,(VEAACTR_faultmode, EGAACTR_boundpackfn, (A68_INT )(A68_BITS )(A_SHL(OQQACTR_param,WGAACTR_operandsshift)|OQQACTR_param), DRQACTR_operands),(VEAACTR_faultmode, EGAACTR_boundpackfn, (A68_INT )(A68_BITS )(A_SHL(OQQACTR_param,WGAACTR_operandsshift)|OQQACTR_param), DRQACTR_operands,(BPQACTR_newstackitem).nonlocals));
} 
break;
case 7: 
 /* line 282: */
{ 
ERQACTR_operands = MOQACTR_breakvaluelist((*Valuestack), (A68_86 *)A68_NIL, (A68_INT )OQQACTR_param, Valuestack);
 /* line 283: */
 /* line 284: */
 /* line 285: */
 /* line 286: */
 /* line 288: */
 /* line 289: */
 /* line 290: */
 /* line 292: */
A_CALLPROC(BPQACTR_newstackitem,(VEAACTR_faultmode, DGAACTR_trimfn, (A68_INT )(A68_BITS )(A_SHL(OQQACTR_param,WGAACTR_operandsshift)|(A68_BITS )QQQACTR_opermode), ERQACTR_operands),(VEAACTR_faultmode, DGAACTR_trimfn, (A68_INT )(A68_BITS )(A_SHL(OQQACTR_param,WGAACTR_operandsshift)|(A68_BITS )QQQACTR_opermode), ERQACTR_operands,(BPQACTR_newstackitem).nonlocals));
} 
break;
case 8: 
 /* line 294: */
{ 
PXIACTR_assert(GRQACTR, ((*(&((&HOQACTR_parameters)->Parameters)))==(A68_86 *)A68_NIL));
 /* line 295: */
 /* line 296: */
 /* line 297: */
HRQACTR.Number = (A68_INT )OQQACTR_param;
 /* line 298: */
HRQACTR.Procmode = QQQACTR_opermode;
 /* line 299: */
 /* line 300: */
HRQACTR.Parameters = MOQACTR_breakvaluelist((*Valuestack), (A68_86 *)A68_NIL, (A68_INT )OQQACTR_param, Valuestack);
 /* line 301: */
 /* line 303: */
HOQACTR_parameters = HRQACTR;
} 
break;
case 9: 
 /* line 304: */
{ 
IRQACTR_procmode = (&((&((*Valuestack)->Value))->Mode));
 /* line 305: */
 /* line 307: */
if ( ((*IRQACTR_procmode)==OFAACTR_longlongcomplmode) )
{ 
 /* line 308: */
(*IRQACTR_procmode) = (*(&((&HOQACTR_parameters)->Procmode)));
} 
else
{ 
 /* line 309: */
 /* line 310: */
 /* line 311: */
 /* line 312: */
 /* line 313: */
 /* line 315: */
PXIACTR_assert(KRQACTR, ((((((*(&((&HOQACTR_parameters)->Procmode)))==PEAACTR_nomode)|((*(&((&HOQACTR_parameters)->Procmode)))==(*IRQACTR_procmode)))|(OQQACTR_param==01U))|(OQQACTR_param==02U))|(OQQACTR_param==03U)));
} 
 /* line 316: */
LRQACTR_operands = MOQACTR_breakvaluelist((*Valuestack), (*(&((&HOQACTR_parameters)->Parameters))), 1, Valuestack);
 /* line 317: */
 /* line 318: */
 /* line 319: */
 /* line 320: */
 /* line 322: */
MRQACTR = (A68_BITS )((*(&((&HOQACTR_parameters)->Number)))+1) ;
A_CALLPROC(BPQACTR_newstackitem,(QQQACTR_opermode, KGAACTR_callfn, (A68_INT )(A68_BITS )(A_SHL(MRQACTR,WGAACTR_operandsshift)|OQQACTR_param), LRQACTR_operands),(QQQACTR_opermode, KGAACTR_callfn, (A68_INT )(A68_BITS )(A_SHL(MRQACTR,WGAACTR_operandsshift)|OQQACTR_param), LRQACTR_operands,(BPQACTR_newstackitem).nonlocals));
 /* line 323: */
 /* line 324: */
 /* line 327: */
HOQACTR_parameters = GOQACTR_noparameterinfo;
} 
break;
case 10: 
 /* line 330: */
/*SKIP*/;
break;
case 11: 
 /* line 331: */
 /* line 332: */
 /* line 334: */
 /* line 338: */
A_CALLPROC(BPQACTR_newstackitem,(QQQACTR_opermode, PQQACTR_operfn, (A68_INT )OQQACTR_param, (A68_86 *)A68_NIL),(QQQACTR_opermode, PQQACTR_operfn, (A68_INT )OQQACTR_param, (A68_86 *)A68_NIL,(BPQACTR_newstackitem).nonlocals));
break;
case 12: 
 /* line 339: */
 /* line 340: */
 /* line 341: */
 /* line 342: */
 /* line 343: */
if ( (OQQACTR_param==0X0U) )
{ 
 /* line 344: */
NRQACTR = 2;
} 
else
{ 
NRQACTR = 3;
} 
 /* line 345: */
 /* line 347: */
 /* line 348: */
A_CALLPROC(GQQACTR_simpleoper,(Valuestack, QQQACTR_opermode, PQQACTR_operfn, NRQACTR, OQQACTR_param, Newspace),(Valuestack, QQQACTR_opermode, PQQACTR_operfn, NRQACTR, OQQACTR_param, Newspace,(GQQACTR_simpleoper).nonlocals));
break;
default: 
 /* line 349: */
 /* line 351: */
 /* line 353: */
PXIACTR_assert(PRQACTR, A68_FALSE);
break;
} 
} 
A_PROC_EXIT(oper);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 4: */
void LNQACTR(void)   /* initialise DECS oper */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/shields/projects/Algol68/Tools/Algol68toC/src/a68toc","-v","-uname","seedfile","-lib","/home/shields/projects/Algol68/Tools/Algol68toC/a68config","-dir","/home/shields/projects/Algol68/Tools/Algol68toC/a68config","-dir","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel","-dir",".","oper.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/shields/projects/Algol68/Tools/Algol68toC/a68config","A68_CDIR=","A68_DIR=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/shields/projects/Algol68/Tools/Algol68toC/a68config/a68config.m","./values.m","./incoperfn.m","./incmode.m","./incimperatives.m","./environment.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_121  COQACTR;  /* collateral clause result */
A68_53  DOQACTR;  /* OPERATORS - istruct to row */
A68_122  FOQACTR;  /* collateral clause result */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
JRPACTR();   /* USE values */
XFAACTR();   /* USE incoperfn */
ZDAACTR();   /* USE incmode */
UAAACTR();   /* USE incimperatives */
HPIACTR();   /* USE environment */
/* --- Initialise configuration information */
A_config.source_file = "/home/shields/projects/Algol68/Tools/Algol68toC/src/oper.a68";
A_config.translation_time = "Sun Sep 26 21:51:02 2004";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "KNQACTR (from seed file) ";
A_config.spec_change_time = "Sun Sep 26 21:51:02 2004";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS oper);
UEAALIB_a68config(LGAALIB_configinfo, PNQACTR);
 /* line 43: */
 /* line 44: */
 /* line 45: */
 /* line 46: */
 /* line 47: */
 /* line 48: */
 /* line 49: */
 /* line 50: */
 /* line 51: */
 /* line 52: */
 /* line 53: */
 /* line 54: */
 /* line 56: */
 /* line 57: */
 /* line 58: */
 /* line 59: */
COQACTR.data[0] = QNQACTR_oneop;
 /* line 60: */
COQACTR.data[1] = XNQACTR_parameterpack;
 /* line 61: */
COQACTR.data[2] = QNQACTR_oneop;
 /* line 62: */
COQACTR.data[3] = QNQACTR_oneop;
 /* line 63: */
COQACTR.data[4] = WNQACTR_trim;
 /* line 64: */
COQACTR.data[5] = TNQACTR_paramplusoneop;
 /* line 65: */
COQACTR.data[6] = TNQACTR_paramplusoneop;
 /* line 66: */
COQACTR.data[7] = RNQACTR_twoop;
 /* line 67: */
COQACTR.data[8] = VNQACTR_boundpack;
 /* line 68: */
COQACTR.data[9] = RNQACTR_twoop;
 /* line 69: */
COQACTR.data[10] = QNQACTR_oneop;
 /* line 70: */
COQACTR.data[11] = RNQACTR_twoop;
 /* line 71: */
COQACTR.data[12] = ZNQACTR_nullop;
 /* line 72: */
COQACTR.data[13] = RNQACTR_twoop;
 /* line 73: */
COQACTR.data[14] = RNQACTR_twoop;
 /* line 74: */
COQACTR.data[15] = UNQACTR_defaultbound;
 /* line 75: */
COQACTR.data[16] = QNQACTR_oneop;
 /* line 76: */
COQACTR.data[17] = YNQACTR_call;
 /* line 77: */
COQACTR.data[18] = QNQACTR_oneop;
 /* line 78: */
COQACTR.data[19] = QNQACTR_oneop;
 /* line 79: */
COQACTR.data[20] = QNQACTR_oneop;
 /* line 80: */
COQACTR.data[21] = QNQACTR_oneop;
 /* line 81: */
COQACTR.data[22] = QNQACTR_oneop;
 /* line 82: */
COQACTR.data[23] = QNQACTR_oneop;
 /* line 83: */
COQACTR.data[24] = QNQACTR_oneop;
 /* line 84: */
COQACTR.data[25] = QNQACTR_oneop;
 /* line 85: */
COQACTR.data[26] = QNQACTR_oneop;
 /* line 86: */
COQACTR.data[27] = QNQACTR_oneop;
 /* line 87: */
COQACTR.data[28] = QNQACTR_oneop;
 /* line 88: */
COQACTR.data[29] = QNQACTR_oneop;
 /* line 89: */
COQACTR.data[30] = QNQACTR_oneop;
 /* line 90: */
COQACTR.data[31] = QNQACTR_oneop;
 /* line 91: */
COQACTR.data[32] = QNQACTR_oneop;
 /* line 92: */
COQACTR.data[33] = QNQACTR_oneop;
 /* line 93: */
COQACTR.data[34] = QNQACTR_oneop;
 /* line 94: */
COQACTR.data[35] = QNQACTR_oneop;
 /* line 95: */
COQACTR.data[36] = QNQACTR_oneop;
 /* line 96: */
COQACTR.data[37] = QNQACTR_oneop;
 /* line 97: */
COQACTR.data[38] = QNQACTR_oneop;
 /* line 98: */
COQACTR.data[39] = QNQACTR_oneop;
 /* line 99: */
COQACTR.data[40] = 999;
 /* line 100: */
COQACTR.data[41] = 999;
 /* line 101: */
COQACTR.data[42] = 999;
 /* line 102: */
COQACTR.data[43] = 999;
 /* line 103: */
COQACTR.data[44] = 999;
 /* line 104: */
COQACTR.data[45] = 999;
 /* line 105: */
COQACTR.data[46] = 999;
 /* line 106: */
COQACTR.data[47] = 999;
 /* line 108: */
COQACTR.data[48] = 999;
 /* line 110: */
COQACTR.data[49] = AOQACTR_zeroop;
COQACTR.data[50] = BOQACTR_formatop;
EOQACTR_opertype = A_HIS1ARR(DOQACTR,COQACTR,A68_INT ,51);
 /* line 112: */
 /* line 114: */
FOQACTR.Number = 0;
FOQACTR.Procmode = PEAACTR_nomode;
FOQACTR.Parameters = (A68_86 *)A68_NIL;
GOQACTR_noparameterinfo = FOQACTR;
 /* line 116: */
HOQACTR_parameters = GOQACTR_noparameterinfo;
 /* line 118: */
 /* line 119: */
 /* line 140: */
 /* line 141: */
 /* line 355: */
A_PROC_EXIT(DECS oper);
} 
#undef NL
/* end of translation of oper.a68 */
