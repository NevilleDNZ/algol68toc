/* UNAME:JBYACTR */
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

A_PROCEDURE(A68_VOID ,A68t54,(struct A68t55 ,struct A68t36 ),(struct A68t55 ,struct A68t36 ,void *));
typedef struct A68t54  A68_54 ;    /* PROC(MODE55,MODE36) VOID */
struct A68t55{
A68_INT  Number;
A_PAD_INT(PAD_1)
struct A68t56 * Facility;
A68_BITS  Class;
A_PAD_BITS(PAD_2)
};
typedef struct A68t55  A68_55 ;    /* STRUCT(INT,REF MODE56,BITS)  */
A_VECTOR(struct A68t58 ,A68t57);
typedef struct A68t57  A68_57 ;    /* VECTOR [] MODE58 */
struct A68t58{
struct A68t55  Msgno;
A68_VC  Text;
};
typedef struct A68t58  A68_58 ;    /* STRUCT(MODE55,REF MODE26)  */
struct A68t56{
A68_VC  Name;
struct A68t57  Messages;
};
typedef struct A68t56  A68_56 ;    /* STRUCT(REF MODE26,REF MODE57)  */
struct A68t59{
A68_VC  Name;
A68_BITS * Stdiofile;
};
typedef struct A68t59  A68_59 ;    /* STRUCT(REF MODE26,REF BITS)  */
struct A68t60{
A68_INT  Status;
A_PAD_INT(PAD_3)
};
typedef struct A68t60  A68_60 ;    /* STRUCT(INT)  */

A_PROCEDURE(A68_BOOL ,A68t61,(struct A68t60 ,struct A68t60 ),(struct A68t60 ,struct A68t60 ,void *));
typedef struct A68t61  A68_61 ;    /* PROC(MODE60,MODE60) BOOL */
struct A68t62{
struct A68t40  Access;
A_PAD_ISTRUCT(A68_40 ,PAD_4)
};
typedef struct A68t62  A68_62 ;    /* STRUCT(MODE40)  */

A_PROCEDURE(A68_VOID ,A68t63,(struct A68t59 *,A68_VC *),(struct A68t59 *,A68_VC *,void *));
typedef struct A68t63  A68_63 ;    /* PROC(REF MODE59) MODE26 */

A_PROCEDURE(struct A68t59 *,A68t64,(A68_VC ,struct A68t62 ,struct A68t54 ),(A68_VC ,struct A68t62 ,struct A68t54 ,void *));
typedef struct A68t64  A68_64 ;    /* PROC(MODE26,MODE62,MODE54) REF MODE59 */

A_PROCEDURE(A68_VOID ,A68t65,(struct A68t59 *,struct A68t54 ),(struct A68t59 *,struct A68t54 ,void *));
typedef struct A68t65  A68_65 ;    /* PROC(REF MODE59,MODE54) VOID */

A_PROCEDURE(A68_VOID ,A68t66,(struct A68t59 *,A68_VC ,A68_INT *,struct A68t54 ,struct A68t60 *),(struct A68t59 *,A68_VC ,A68_INT *,struct A68t54 ,struct A68t60 *,void *));
typedef struct A68t66  A68_66 ;    /* PROC(REF MODE59,REF MODE26,REF INT,MODE54) MODE60 */

A_PROCEDURE(A68_VOID ,A68t67,(struct A68t59 *,A68_VC ,struct A68t54 ,struct A68t60 *),(struct A68t59 *,A68_VC ,struct A68t54 ,struct A68t60 *,void *));
typedef struct A68t67  A68_67 ;    /* PROC(REF MODE59,MODE26,MODE54) MODE60 */

A_PROCEDURE(A68_VOID ,A68t68,(struct A68t59 *,A68_LINT ,struct A68t54 ,struct A68t60 *),(struct A68t59 *,A68_LINT ,struct A68t54 ,struct A68t60 *,void *));
typedef struct A68t68  A68_68 ;    /* PROC(REF MODE59,LONG INT,MODE54) MODE60 */

A_PROCEDURE(A68_VOID ,A68t69,(struct A68t59 *,A68_LINT *,struct A68t54 ,struct A68t60 *),(struct A68t59 *,A68_LINT *,struct A68t54 ,struct A68t60 *,void *));
typedef struct A68t69  A68_69 ;    /* PROC(REF MODE59,REF LONG INT,MODE54) MODE60 */

A_PROCEDURE(A68_VOID ,A68t70,(struct A68t59 *,struct A68t54 ,struct A68t60 *),(struct A68t59 *,struct A68t54 ,struct A68t60 *,void *));
typedef struct A68t70  A68_70 ;    /* PROC(REF MODE59,MODE54) MODE60 */

A_PROCEDURE(A68_VOID ,A68t71,(A68_VC ,struct A68t54 ,struct A68t60 *),(A68_VC ,struct A68t54 ,struct A68t60 *,void *));
typedef struct A68t71  A68_71 ;    /* PROC(MODE26,MODE54) MODE60 */

A_PROCEDURE(A68_VOID ,A68t72,(A68_VC ,A68_VC ,struct A68t54 ,struct A68t60 *),(A68_VC ,A68_VC ,struct A68t54 ,struct A68t60 *,void *));
typedef struct A68t72  A68_72 ;    /* PROC(MODE26,MODE26,MODE54) MODE60 */

A_PROCEDURE(A68_VOID ,A68t73,(A68_VC ,A68_VC ,struct A68t54 ,A68_VC *),(A68_VC ,A68_VC ,struct A68t54 ,A68_VC *,void *));
typedef struct A68t73  A68_73 ;    /* PROC(MODE26,MODE26,MODE54) MODE26 */
struct A68t74{
A68_SBITS  Permissions;
A_PAD_SBITS(PAD_5)
A68_LBITS  Inode;
A_PAD_LBITS(PAD_6)
A68_SINT  Device;
A_PAD_SINT(PAD_7)
A68_SINT  Links;
A_PAD_SINT(PAD_8)
A68_SBITS  Owning_user;
A_PAD_SBITS(PAD_9)
A68_SBITS  Owning_group;
A_PAD_SBITS(PAD_10)
A68_LINT  Size;
A_PAD_LINT(PAD_11)
A68_LINT  Accessed;
A_PAD_LINT(PAD_12)
A68_LINT  Data_modified;
A_PAD_LINT(PAD_13)
A68_LINT  Status_modified;
A_PAD_LINT(PAD_14)
};
typedef struct A68t74  A68_74 ;    /* STRUCT(SHORT BITS,LONG BITS,SHORT INT,SHORT INT,SHORT BITS,SHORT BITS,LONG INT,LONG INT,LONG INT,LONG INT)  */
struct A68t76 ;

A_PROCEDURE(struct A68t74 *,A68t75,(struct A68t76 ,struct A68t54 ),(struct A68t76 ,struct A68t54 ,void *));
typedef struct A68t75  A68_75 ;    /* PROC(MODE76,MODE54) REF MODE74 */
struct A68t76 { A68_INT mode; union {
struct A68t59 * mode1;
A68_VC  mode2;
} data; };
typedef struct A68t76  A68_76 ;    /* UNION(REF MODE59,MODE26)  */

A_PROCEDURE(A68_BOOL ,A68t77,(struct A68t59 *),(struct A68t59 *,void *));
typedef struct A68t77  A68_77 ;    /* PROC(REF MODE59) BOOL */

A_PROCEDURE(A68_BITS *,A68t78,(A68_VC ,struct A68t54 ),(A68_VC ,struct A68t54 ,void *));
typedef struct A68t78  A68_78 ;    /* PROC(MODE26,MODE54) REF BITS */

A_PROCEDURE(A68_VOID ,A68t79,(A68_BITS *,struct A68t54 ),(A68_BITS *,struct A68t54 ,void *));
typedef struct A68t79  A68_79 ;    /* PROC(REF BITS,MODE54) VOID */

A_PROCEDURE(A68_VOID ,A68t80,(A68_BITS *,struct A68t54 ,A68_VC *),(A68_BITS *,struct A68t54 ,A68_VC *,void *));
typedef struct A68t80  A68_80 ;    /* PROC(REF BITS,MODE54) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t81,(A68_VC *),(A68_VC *,void *));
typedef struct A68t81  A68_81 ;    /* PROC MODE26 */

A_PROCEDURE(A68_VOID ,A68t82,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t82  A68_82 ;    /* PROC(MODE26) MODE26 */

A_PROCEDURE(A68_LINT ,A68t83,(void),(void *));
typedef struct A68t83  A68_83 ;    /* PROC LONG INT */

A_PROCEDURE(A68_VOID ,A68t84,(A68_LINT ,A68_VC *),(A68_LINT ,A68_VC *,void *));
typedef struct A68t84  A68_84 ;    /* PROC(LONG INT) MODE26 */

A_PROCEDURE(A68_VOID ,A68t85,(A68_INT ),(A68_INT ,void *));
typedef struct A68t85  A68_85 ;    /* PROC(INT) VOID */

A_PROCEDURE(A68_INT ,A68t86,(A68_VC ,struct A68t54 ),(A68_VC ,struct A68t54 ,void *));
typedef struct A68t86  A68_86 ;    /* PROC(MODE26,MODE54) INT */

A_PROCEDURE(A68_INT ,A68t87,(void),(void *));
typedef struct A68t87  A68_87 ;    /* PROC INT */
struct A68t88{
A68_VC  Filename;
A68_VC  Directory;
A68_VC  Name;
A68_VC  Type;
};
typedef struct A68t88  A68_88 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE26,REF MODE26)  */

A_PROCEDURE(A68_VOID ,A68t89,(A68_VC ,A68_VC ,struct A68t54 ,struct A68t88 *),(A68_VC ,A68_VC ,struct A68t54 ,struct A68t88 *,void *));
typedef struct A68t89  A68_89 ;    /* PROC(MODE26,MODE26,MODE54) MODE88 */

A_PROCEDURE(A68_VOID ,A68t90,(struct A68t36 *),(struct A68t36 *,void *));
typedef struct A68t90  A68_90 ;    /* PROC MODE36 */

A_PROCEDURE(A68_VOID ,A68t91,(A68_VC ,struct A68t54 ,struct A68t36 *),(A68_VC ,struct A68t54 ,struct A68t36 *,void *));
typedef struct A68t91  A68_91 ;    /* PROC(MODE26,MODE54) MODE36 */
struct A68t93 ;

A_PROCEDURE(A68_VOID ,A68t92,(struct A68t93 ,struct A68t54 ,struct A68t54 ),(struct A68t93 ,struct A68t54 ,struct A68t54 ,void *));
typedef struct A68t92  A68_92 ;    /* PROC(MODE93,MODE54,MODE54) VOID */
A_VECTOR(A68_INT ,A68t93);
typedef struct A68t93  A68_93 ;    /* VECTOR [] INT */

A_PROCEDURE(A68_VOID ,A68t94,(struct A68t93 ,struct A68t54 ),(struct A68t93 ,struct A68t54 ,void *));
typedef struct A68t94  A68_94 ;    /* PROC(MODE93,MODE54) VOID */

A_PROCEDURE(A68_VOID ,A68t95,(A68_INT ,struct A68t54 ,struct A68t54 *),(A68_INT ,struct A68t54 ,struct A68t54 *,void *));
typedef struct A68t95  A68_95 ;    /* PROC(INT,MODE54) MODE54 */

A_PROCEDURE(A68_VOID ,A68t96,(void),(void *));
typedef struct A68t96  A68_96 ;    /* PROC VOID */

A_PROCEDURE(A68_VOID ,A68t97,(A68_BITS ),(A68_BITS ,void *));
typedef struct A68t97  A68_97 ;    /* PROC(BITS) VOID */
struct A68t99 ;

A_PROCEDURE(A68_VOID ,A68t98,(struct A68t99 ),(struct A68t99 ,void *));
typedef struct A68t98  A68_98 ;    /* PROC(MODE99) VOID */

A_PROCEDURE(A68_VOID ,A68t99,(A68_VC ),(A68_VC ,void *));
typedef struct A68t99  A68_99 ;    /* PROC(MODE26) VOID */
struct A68t100{
A68_VC  Name;
A68_INT  Value;
A_PAD_INT(PAD_15)
};
typedef struct A68t100  A68_100 ;    /* STRUCT(MODE26,INT)  */

A_PROCEDURE(A68_VOID ,A68t101,(A68_BOOL ,struct A68t100 *),(A68_BOOL ,struct A68t100 *,void *));
typedef struct A68t101  A68_101 ;    /* PROC(BOOL) MODE100 */
struct A68t103 ;

A_PROCEDURE(A68_VOID ,A68t102,(struct A68t103 ,struct A68t54 ),(struct A68t103 ,struct A68t54 ,void *));
typedef struct A68t102  A68_102 ;    /* PROC(MODE103,MODE54) VOID */
A_VECTOR(struct A68t100 ,A68t103);
typedef struct A68t103  A68_103 ;    /* VECTOR [] MODE100 */

A_PROCEDURE(A68_VOID ,A68t104,(A68_BOOL ,A68_VC *),(A68_BOOL ,A68_VC *,void *));
typedef struct A68t104  A68_104 ;    /* PROC(BOOL) MODE26 */
A_ISTRUCT(A68_CHAR ,7,A68t106);
typedef struct A68t106  A68_106 ;    /* STRUCT 7 CHAR */
struct A68t105{
struct A68t106  Name;
A_PAD_ISTRUCT(A68_106 ,PAD_16)
A68_BOOL  Set;
A_PAD_BOOL(PAD_17)
};
typedef struct A68t105  A68_105 ;    /* STRUCT(MODE106,BOOL)  */
struct A68t107{
A68_INT  Labno;
A_PAD_INT(PAD_18)
};
typedef struct A68t107  A68_107 ;    /* STRUCT(INT)  */

A_PROCEDURE(A68_INT ,A68t108,(A68_INT ),(A68_INT ,void *));
typedef struct A68t108  A68_108 ;    /* PROC(INT) INT */

A_PROCEDURE(A68_BOOL ,A68t109,(A68_INT ),(A68_INT ,void *));
typedef struct A68t109  A68_109 ;    /* PROC(INT) BOOL */
struct A68t110{
A68_INT  Level;
A_PAD_INT(PAD_19)
A68_INT  Block;
A_PAD_INT(PAD_20)
};
typedef struct A68t110  A68_110 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t111,(struct A68t110 *),(struct A68t110 *,void *));
typedef struct A68t111  A68_111 ;    /* PROC MODE110 */

A_PROCEDURE(A68_BOOL ,A68t112,(void),(void *));
typedef struct A68t112  A68_112 ;    /* PROC BOOL */

A_PROCEDURE(A68_BOOL ,A68t113,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t113  A68_113 ;    /* PROC(INT,INT) BOOL */

A_PROCEDURE(A68_VOID ,A68t114,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t114  A68_114 ;    /* PROC(INT,INT) VOID */

A_PROCEDURE(A68_BOOL ,A68t115,(struct A68t110 ,struct A68t110 ),(struct A68t110 ,struct A68t110 ,void *));
typedef struct A68t115  A68_115 ;    /* PROC(MODE110,MODE110) BOOL */

A_PROCEDURE(A68_BOOL ,A68t116,(struct A68t110 ),(struct A68t110 ,void *));
typedef struct A68t116  A68_116 ;    /* PROC(MODE110) BOOL */
struct A68t118 ;

A_PROCEDURE(A68_VOID ,A68t117,(struct A68t118 ),(struct A68t118 ,void *));
typedef struct A68t117  A68_117 ;    /* PROC(MODE118) VOID */
A_VECTOR(struct A68t119 ,A68t118);
typedef struct A68t118  A68_118 ;    /* VECTOR [] MODE119 */
struct A68t119 { A68_INT mode; union {
A68_CHAR  mode1;
A68_VC  mode2;
A68_SINT  mode3;
} data; };
typedef struct A68t119  A68_119 ;    /* UNION(CHAR,MODE26,SHORT INT)  */
struct A68t121 ;

A_PROCEDURE(A68_VOID ,A68t120,(struct A68t121 ,A68_INT ),(struct A68t121 ,A68_INT ,void *));
typedef struct A68t120  A68_120 ;    /* PROC(MODE121,INT) VOID */
A_VECTOR(struct A68t122 ,A68t121);
typedef struct A68t121  A68_121 ;    /* VECTOR [] MODE122 */
struct A68t122 { A68_INT mode; union {
A68_CHAR  mode1;
A68_VC  mode2;
A68_INT  mode3;
A68_SINT  mode4;
} data; };
typedef struct A68t122  A68_122 ;    /* UNION(CHAR,MODE26,INT,SHORT INT)  */
struct A68t123{
A68_INT  Parameters;
A_PAD_INT(PAD_21)
A68_INT  Result;
A_PAD_INT(PAD_22)
A68_BOOL  Hasdescriptors;
A_PAD_BOOL(PAD_23)
};
typedef struct A68t123  A68_123 ;    /* STRUCT(INT,INT,BOOL)  */
A_ISTRUCT(A68_CHAR ,32,A68t125);
typedef struct A68t125  A68_125 ;    /* STRUCT 32 CHAR */
struct A68t124{
A68_INT  Mode;
A_PAD_INT(PAD_24)
A68_INT  Offset;
A_PAD_INT(PAD_25)
struct A68t125  Name;
A_PAD_ISTRUCT(A68_125 ,PAD_26)
};
typedef struct A68t124  A68_124 ;    /* STRUCT(INT,INT,MODE125)  */

A_PROCEDURE(A68_VOID ,A68t126,(A68_INT ,struct A68t93 *),(A68_INT ,struct A68t93 *,void *));
typedef struct A68t126  A68_126 ;    /* PROC(INT) REF MODE93 */

A_PROCEDURE(A68_VOID ,A68t127,(struct A68t124 *,A68_VC *),(struct A68t124 *,A68_VC *,void *));
typedef struct A68t127  A68_127 ;    /* PROC(REF MODE124) MODE26 */
struct A68t129 ;

A_PROCEDURE(A68_VOID ,A68t128,(A68_INT ,A68_VC ,struct A68t129 *),(A68_INT ,A68_VC ,struct A68t129 *,void *));
typedef struct A68t128  A68_128 ;    /* PROC(INT,MODE26) MODE129 */
struct A68t129{
struct A68t106  Name;
A_PAD_ISTRUCT(A68_106 ,PAD_27)
A68_INT  Mode;
A_PAD_INT(PAD_28)
};
typedef struct A68t129  A68_129 ;    /* STRUCT(MODE106,INT)  */
struct A68t131 ;

A_PROCEDURE(A68_VOID ,A68t130,(struct A68t131 ,A68_INT ),(struct A68t131 ,A68_INT ,void *));
typedef struct A68t130  A68_130 ;    /* PROC(REF MODE131,INT) VOID */
A_ROW(struct A68t132 ,A68t131,1);
typedef struct A68t131  A68_131 ;    /* [] MODE132 */
struct A68t142{
A68_INT  Mode;
A_PAD_INT(PAD_29)
};
typedef struct A68t142  A68_142 ;    /* STRUCT(INT)  */
struct A68t132 { A68_INT mode; union {
A68_INT  mode1;
struct A68t133 * mode2;
struct A68t134 * mode3;
struct A68t135 * mode4;
struct A68t136 * mode5;
struct A68t137 * mode6;
struct A68t138 * mode7;
struct A68t139 * mode8;
struct A68t140 * mode9;
struct A68t141 * mode10;
struct A68t142  mode11;
} data; };
typedef struct A68t132  A68_132 ;    /* UNION(INT,REF MODE133,REF MODE134,REF MODE135,REF MODE136,REF MODE137,REF MODE138,REF MODE139,REF MODE140,REF MODE141,MODE142)  */
struct A68t133{
A68_INT  Rdenno;
A_PAD_INT(PAD_30)
struct A68t146 * Modelist;
};
typedef struct A68t133  A68_133 ;    /* STRUCT(INT,REF MODE146)  */
struct A68t134{
A68_INT  Deproc;
A_PAD_INT(PAD_31)
struct A68t146 * Pars;
};
typedef struct A68t134  A68_134 ;    /* STRUCT(INT,REF MODE146)  */
struct A68t135{
A68_INT  Rdenno;
A_PAD_INT(PAD_32)
A68_INT  Deflex;
A_PAD_INT(PAD_33)
struct A68t145 * Sels;
};
typedef struct A68t135  A68_135 ;    /* STRUCT(INT,INT,REF MODE145)  */
struct A68t136{
A68_INT  Rdenno;
A_PAD_INT(PAD_34)
A68_INT  Imode;
A_PAD_INT(PAD_35)
A68_INT  Length;
A_PAD_INT(PAD_36)
A68_INT  Deflex;
A_PAD_INT(PAD_37)
};
typedef struct A68t136  A68_136 ;    /* STRUCT(INT,INT,INT,INT)  */
struct A68t137{
A68_INT  Deproc;
A_PAD_INT(PAD_38)
};
typedef struct A68t137  A68_137 ;    /* STRUCT(INT)  */
struct A68t138{
A68_INT  Rdenno;
A_PAD_INT(PAD_39)
A68_INT  Vecmode;
A_PAD_INT(PAD_40)
A68_INT  Deflex;
A_PAD_INT(PAD_41)
};
typedef struct A68t138  A68_138 ;    /* STRUCT(INT,INT,INT)  */
struct A68t139{
A68_INT  Rdenno;
A_PAD_INT(PAD_42)
A68_INT  Mode;
A_PAD_INT(PAD_43)
A68_INT  Nods;
A_PAD_INT(PAD_44)
A68_INT  Deflex;
A_PAD_INT(PAD_45)
};
typedef struct A68t139  A68_139 ;    /* STRUCT(INT,INT,INT,INT)  */
struct A68t140{
A68_INT  Mode;
A_PAD_INT(PAD_46)
struct A68t144 * Stenlist;
};
typedef struct A68t140  A68_140 ;    /* STRUCT(INT,REF MODE144)  */
struct A68t141{
A68_INT  Mode;
A_PAD_INT(PAD_47)
A68_INT  Modeproc;
A_PAD_INT(PAD_48)
struct A68t143 * El;
};
typedef struct A68t141  A68_141 ;    /* STRUCT(INT,INT,REF MODE143)  */
struct A68t143{
struct A68t141 * Am;
struct A68t143 * Rest;
};
typedef struct A68t143  A68_143 ;    /* STRUCT(REF MODE141,REF MODE143)  */
struct A68t144{
A68_INT  Mode;
A_PAD_INT(PAD_49)
A68_INT  Rdenno;
A_PAD_INT(PAD_50)
struct A68t144 * Rest;
};
typedef struct A68t144  A68_144 ;    /* STRUCT(INT,INT,REF MODE144)  */
struct A68t145{
A68_INT  Mode;
A_PAD_INT(PAD_51)
A68_INT  Fieldno;
A_PAD_INT(PAD_52)
struct A68t125  Name;
A_PAD_ISTRUCT(A68_125 ,PAD_53)
struct A68t145 * Rest;
};
typedef struct A68t145  A68_145 ;    /* STRUCT(INT,INT,MODE125,REF MODE145)  */
struct A68t146{
A68_INT  Mode;
A_PAD_INT(PAD_54)
struct A68t146 * Rest;
};
typedef struct A68t146  A68_146 ;    /* STRUCT(INT,REF MODE146)  */

A_PROCEDURE(A68_VOID ,A68t147,(A68_INT ,struct A68t123 *),(A68_INT ,struct A68t123 *,void *));
typedef struct A68t147  A68_147 ;    /* PROC(INT) MODE123 */
struct A68t149 ;

A_PROCEDURE(A68_VOID ,A68t148,(A68_INT ,struct A68t149 *),(A68_INT ,struct A68t149 *,void *));
typedef struct A68t148  A68_148 ;    /* PROC(INT) REF MODE149 */
A_VECTOR(struct A68t124 ,A68t149);
typedef struct A68t149  A68_149 ;    /* VECTOR [] MODE124 */

A_PROCEDURE(A68_INT ,A68t150,(A68_INT ,A68_BOOL ),(A68_INT ,A68_BOOL ,void *));
typedef struct A68t150  A68_150 ;    /* PROC(INT,BOOL) INT */

A_PROCEDURE(A68_VOID ,A68t151,(A68_INT ,A68_INT ,A68_VC *),(A68_INT ,A68_INT ,A68_VC *,void *));
typedef struct A68t151  A68_151 ;    /* PROC(INT,INT) MODE26 */
struct A68t153 ;
struct A68t154 ;

A_PROCEDURE(A68_VOID ,A68t152,(struct A68t153 ,struct A68t154 *,A68_INT ),(struct A68t153 ,struct A68t154 *,A68_INT ,void *));
typedef struct A68t152  A68_152 ;    /* PROC(MODE153,REF MODE154,INT) VOID */
struct A68t153{
A68_INT  Type;
A_PAD_INT(PAD_55)
A68_VC  Name;
A68_INT  Mode;
A_PAD_INT(PAD_56)
A68_INT  Decno;
A_PAD_INT(PAD_57)
};
typedef struct A68t153  A68_153 ;    /* STRUCT(INT,REF MODE26,INT,INT)  */
struct A68t156{
A68_INT  Rdenno;
A_PAD_INT(PAD_58)
};
typedef struct A68t156  A68_156 ;    /* STRUCT(INT)  */
struct A68t157{
A68_INT  Idno;
A_PAD_INT(PAD_59)
};
typedef struct A68t157  A68_157 ;    /* STRUCT(INT)  */
struct A68t158{
A68_INT  Nse;
A_PAD_INT(PAD_60)
};
typedef struct A68t158  A68_158 ;    /* STRUCT(INT)  */
struct A68t159{
A68_INT  Fn;
A_PAD_INT(PAD_61)
A68_INT  Param;
A_PAD_INT(PAD_62)
struct A68t160 * Operands;
};
typedef struct A68t159  A68_159 ;    /* STRUCT(INT,INT,REF MODE160)  */
struct A68t155 { A68_INT mode; union {
A68_LBITS  mode1;
struct A68t156  mode2;
struct A68t157  mode4;
struct A68t129  mode5;
A68_VC  mode6;
struct A68t107  mode7;
struct A68t158  mode8;
struct A68t159  mode9;
} data; };
typedef struct A68t155  A68_155 ;    /* UNION(LONG BITS,MODE156,VOID,MODE157,MODE129,MODE26,MODE107,MODE158,MODE159)  */
struct A68t154{
A68_INT  Mode;
A_PAD_INT(PAD_63)
A68_BITS  Info;
A_PAD_BITS(PAD_64)
struct A68t155  Extra;
};
typedef struct A68t154  A68_154 ;    /* STRUCT(INT,BITS,MODE155)  */
struct A68t160{
struct A68t154  Value;
struct A68t160 * Rest;
};
typedef struct A68t160  A68_160 ;    /* STRUCT(MODE154,REF MODE160)  */

A_PROCEDURE(A68_VOID ,A68t161,(A68_INT ,struct A68t110 *),(A68_INT ,struct A68t110 *,void *));
typedef struct A68t161  A68_161 ;    /* PROC(INT) MODE110 */

A_PROCEDURE(A68_VOID ,A68t162,(A68_VC ,struct A68t106 ,A68_INT ,A68_INT ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_VC ,A68_VC ),(A68_VC ,struct A68t106 ,A68_INT ,A68_INT ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_VC ,A68_VC ,void *));
typedef struct A68t162  A68_162 ;    /* PROC(REF MODE26,MODE106,INT,INT,BOOL,BOOL,BOOL,BOOL,BOOL,REF MODE26,REF MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t163,(struct A68t153 ,struct A68t160 **),(struct A68t153 ,struct A68t160 **,void *));
typedef struct A68t163  A68_163 ;    /* PROC(MODE153,REF REF MODE160) VOID */
A_ROW(struct A68t165 ,A68t164,1);
typedef struct A68t164  A68_164 ;    /* [] MODE165 */
struct A68t165{
A68_INT  Mode;
A_PAD_INT(PAD_65)
A68_INT  Cvariabletype;
A_PAD_INT(PAD_66)
struct A68t110  Environ;
A68_VC  Name;
A68_VC  C_name;
struct A68t106  Prefix;
A_PAD_ISTRUCT(A68_106 ,PAD_67)
A68_BITS  Flags;
A_PAD_BITS(PAD_68)
A68_VC  Definition;
A68_VC  Rhs;
};
typedef struct A68t165  A68_165 ;    /* STRUCT(INT,INT,MODE110,REF MODE26,REF MODE26,MODE106,BITS,REF MODE26,REF MODE26)  */

A_PROCEDURE(A68_VOID ,A68t166,(struct A68t153 ),(struct A68t153 ,void *));
typedef struct A68t166  A68_166 ;    /* PROC(MODE153) VOID */
struct A68t168 ;

A_PROCEDURE(A68_VOID ,A68t167,(struct A68t168 ),(struct A68t168 ,void *));
typedef struct A68t167  A68_167 ;    /* PROC(MODE168) VOID */
struct A68t168{
A68_VC  Name;
A68_INT  Labno;
A_PAD_INT(PAD_69)
A68_INT  Status;
A_PAD_INT(PAD_70)
A68_BOOL  Notsetting;
A_PAD_BOOL(PAD_71)
};
typedef struct A68t168  A68_168 ;    /* STRUCT(REF MODE26,INT,INT,BOOL)  */

A_PROCEDURE(A68_VOID ,A68t169,(A68_VC ,A68_INT ,struct A68t93 ,A68_INT ,A68_INT ,struct A68t110 ,A68_BITS ),(A68_VC ,A68_INT ,struct A68t93 ,A68_INT ,A68_INT ,struct A68t110 ,A68_BITS ,void *));
typedef struct A68t169  A68_169 ;    /* PROC(REF MODE26,INT,REF MODE93,INT,INT,MODE110,BITS) VOID */
A_ROW(struct A68t171 ,A68t170,1);
typedef struct A68t170  A68_170 ;    /* [] MODE171 */
struct A68t171{
A68_INT  Mode;
A_PAD_INT(PAD_72)
A68_INT  Resultmode;
A_PAD_INT(PAD_73)
A68_INT  Declevel;
A_PAD_INT(PAD_74)
struct A68t110  Environ;
A68_VC  Name;
struct A68t106  Prefix;
A_PAD_ISTRUCT(A68_106 ,PAD_75)
struct A68t106  Fnprefix;
A_PAD_ISTRUCT(A68_106 ,PAD_76)
struct A68t106  Envprefix;
A_PAD_ISTRUCT(A68_106 ,PAD_77)
A68_BITS  Flags;
A_PAD_BITS(PAD_78)
};
typedef struct A68t171  A68_171 ;    /* STRUCT(INT,INT,INT,MODE110,REF MODE26,MODE106,MODE106,MODE106,BITS)  */

A_PROCEDURE(A68_VOID ,A68t172,(A68_VC ,A68_BOOL ),(A68_VC ,A68_BOOL ,void *));
typedef struct A68t172  A68_172 ;    /* PROC(MODE26,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t173,(A68_VC ,A68_INT ),(A68_VC ,A68_INT ,void *));
typedef struct A68t173  A68_173 ;    /* PROC(MODE26,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t174,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t174  A68_174 ;    /* PROC(INT) REF MODE26 */
struct A68t176 ;

A_PROCEDURE(A68_VOID ,A68t175,(A68_INT ,struct A68t176 ),(A68_INT ,struct A68t176 ,void *));
typedef struct A68t175  A68_175 ;    /* PROC(INT,MODE176) VOID */
A_ROW(A68_VC ,A68t176,1);
typedef struct A68t176  A68_176 ;    /* [] MODE26 */

A_PROCEDURE(A68_BITS ,A68t177,(void),(void *));
typedef struct A68t177  A68_177 ;    /* PROC BITS */
struct A68t178{
A68_INT  Cfile;
A_PAD_INT(PAD_79)
};
typedef struct A68t178  A68_178 ;    /* STRUCT(INT)  */
struct A68t179{
A68_INT  Seedfile;
A_PAD_INT(PAD_80)
};
typedef struct A68t179  A68_179 ;    /* STRUCT(INT)  */
struct A68t180 { A68_INT mode; union {
struct A68t178  mode1;
struct A68t179  mode2;
struct A68t106  mode3;
} data; };
typedef struct A68t180  A68_180 ;    /* UNION(MODE178,MODE179,MODE106,VOID)  */
struct A68t181{
A68_VC  Version;
A68_LINT  Translationtime;
A_PAD_LINT(PAD_81)
A68_VC  Sourcefile;
struct A68t106  Nameseed;
A_PAD_ISTRUCT(A68_106 ,PAD_82)
struct A68t180  Nameseedorigin;
struct A68t182 * Used_modules;
A68_VC  Commandline;
struct A68t183 * Environment;
};
typedef struct A68t181  A68_181 ;    /* STRUCT(REF MODE26,LONG INT,REF MODE26,MODE106,MODE180,REF MODE182,REF MODE26,REF MODE183)  */
struct A68t182{
A68_VC  Modinfo_file;
struct A68t182 * Next;
};
typedef struct A68t182  A68_182 ;    /* STRUCT(REF MODE26,REF MODE182)  */
struct A68t183{
A68_VC  Env_name;
A68_VC  Env_value;
struct A68t183 * Next;
};
typedef struct A68t183  A68_183 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE183)  */
struct A68t185 ;

A_PROCEDURE(struct A68t59 *,A68t184,(A68_VC ,struct A68t185 *,A68_VC *),(A68_VC ,struct A68t185 *,A68_VC *,void *));
typedef struct A68t184  A68_184 ;    /* PROC(MODE26,REF MODE185,REF REF MODE26) REF MODE59 */
struct A68t185{
A68_VC  Dir;
struct A68t185 * Next;
};
typedef struct A68t185  A68_185 ;    /* STRUCT(REF MODE26,REF MODE185)  */
struct A68t186{
A68_INT  Mode;
A_PAD_INT(PAD_83)
A68_VC  String;
};
typedef struct A68t186  A68_186 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t187{
A68_INT  I;
A_PAD_INT(PAD_84)
};
typedef struct A68t187  A68_187 ;    /* STRUCT(INT)  */
A_ROW(A68_INT ,A68t189,1);
typedef struct A68t189  A68_189 ;    /* [] INT */
struct A68t188{
A68_INT  Body;
A_PAD_INT(PAD_85)
A68_INT  Moduleno;
A_PAD_INT(PAD_86)
struct A68t189  Actuals;
};
typedef struct A68t188  A68_188 ;    /* STRUCT(INT,INT,REF MODE189)  */
struct A68t190{
A68_INT  Mode;
A_PAD_INT(PAD_87)
A68_INT  Number;
A_PAD_INT(PAD_88)
A68_VC  Insert;
};
typedef struct A68t190  A68_190 ;    /* STRUCT(INT,INT,REF MODE26)  */
struct A68t192{
A68_INT  Moduleno;
A_PAD_INT(PAD_89)
A68_INT  I;
A_PAD_INT(PAD_90)
A68_INT  J;
A_PAD_INT(PAD_91)
};
typedef struct A68t192  A68_192 ;    /* STRUCT(INT,INT,INT)  */
A_ROW(A68_VC ,A68t194,1);
typedef struct A68t194  A68_194 ;    /* [] REF MODE26 */
struct A68t193{
A68_INT  Moduleno;
A_PAD_INT(PAD_92)
A68_VC  Name;
A68_VC  Uname;
A68_VC  Lname;
A68_VC  Gname;
struct A68t194  Ysnames;
};
typedef struct A68t193  A68_193 ;    /* STRUCT(INT,REF MODE26,REF MODE26,REF MODE26,REF MODE26,REF MODE194)  */
struct A68t191 { A68_INT mode; union {
struct A68t188  mode1;
struct A68t192  mode2;
struct A68t193  mode3;
} data; };
typedef struct A68t191  A68_191 ;    /* UNION(MODE188,MODE192,MODE193)  */
struct A68t196{
A68_INT  Nochars;
A_PAD_INT(PAD_93)
A68_INT  Nocases;
A_PAD_INT(PAD_94)
A68_INT  W;
A_PAD_INT(PAD_95)
};
typedef struct A68t196  A68_196 ;    /* STRUCT(INT,INT,INT)  */
struct A68t195{
struct A68t196  Info;
A68_VC  Text;
};
typedef struct A68t195  A68_195 ;    /* STRUCT(MODE196,REF MODE26)  */
struct A68t197{
A68_VC  Representation;
};
typedef struct A68t197  A68_197 ;    /* STRUCT(REF MODE26)  */
struct A68t199{
A68_INT  Mode;
A_PAD_INT(PAD_96)
A68_VC  Nu;
};
typedef struct A68t199  A68_199 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t200{
A68_INT  Mode;
A_PAD_INT(PAD_97)
A68_LBITS  Denotation;
A_PAD_LBITS(PAD_98)
};
typedef struct A68t200  A68_200 ;    /* STRUCT(INT,LONG BITS)  */
struct A68t201{
A68_INT  Mode;
A_PAD_INT(PAD_99)
A68_VC  Denotation;
};
typedef struct A68t201  A68_201 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t202{
A68_INT  Fn;
A_PAD_INT(PAD_100)
A68_INT  Mode;
A_PAD_INT(PAD_101)
A68_INT  Param;
A_PAD_INT(PAD_102)
};
typedef struct A68t202  A68_202 ;    /* STRUCT(INT,INT,INT)  */
struct A68t203{
A68_VC  Name;
A68_BITS  Props;
A_PAD_BITS(PAD_103)
A68_INT  Mode;
A_PAD_INT(PAD_104)
A68_INT  Rdenno;
A_PAD_INT(PAD_105)
A68_INT  Maxname;
A_PAD_INT(PAD_106)
};
typedef struct A68t203  A68_203 ;    /* STRUCT(REF MODE26,BITS,INT,INT,INT)  */
struct A68t204{
A68_INT  W;
A_PAD_INT(PAD_107)
};
typedef struct A68t204  A68_204 ;    /* STRUCT(INT)  */
struct A68t205{
A68_INT  Mode;
A_PAD_INT(PAD_108)
A68_BITS  Props;
A_PAD_BITS(PAD_109)
A68_INT  Param;
A_PAD_INT(PAD_110)
};
typedef struct A68t205  A68_205 ;    /* STRUCT(INT,BITS,INT)  */
struct A68t206{
A68_BOOL  Start;
A_PAD_BOOL(PAD_111)
};
typedef struct A68t206  A68_206 ;    /* STRUCT(BOOL)  */
struct A68t207{
A68_INT  Fn;
A_PAD_INT(PAD_112)
A68_INT  Mode;
A_PAD_INT(PAD_113)
A68_BITS  Props;
A_PAD_BITS(PAD_114)
A68_INT  Param;
A_PAD_INT(PAD_115)
};
typedef struct A68t207  A68_207 ;    /* STRUCT(INT,INT,BITS,INT)  */
struct A68t208{
A68_INT  Fn;
A_PAD_INT(PAD_116)
A68_INT  Mode;
A_PAD_INT(PAD_117)
A68_BITS  Props;
A_PAD_BITS(PAD_118)
A68_INT  Resultmode;
A_PAD_INT(PAD_119)
};
typedef struct A68t208  A68_208 ;    /* STRUCT(INT,INT,BITS,INT)  */
struct A68t209{
A68_INT  Fn;
A_PAD_INT(PAD_120)
A68_BITS  Props;
A_PAD_BITS(PAD_121)
};
typedef struct A68t209  A68_209 ;    /* STRUCT(INT,BITS)  */
struct A68t198 { A68_INT mode; union {
struct A68t158  mode1;
A68_INT  mode2;
A68_BOOL  mode3;
struct A68t197  mode4;
struct A68t107  mode5;
struct A68t199  mode6;
struct A68t186  mode7;
struct A68t200  mode8;
struct A68t201  mode9;
struct A68t202  mode10;
struct A68t153  mode11;
struct A68t203  mode12;
struct A68t204  mode13;
struct A68t168  mode14;
struct A68t205  mode15;
struct A68t187  mode16;
struct A68t206  mode17;
struct A68t195  mode18;
struct A68t190  mode19;
struct A68t207  mode20;
struct A68t208  mode21;
struct A68t209  mode22;
struct A68t188  mode23;
struct A68t192  mode24;
struct A68t193  mode25;
} data; };
typedef struct A68t198  A68_198 ;    /* UNION(MODE158,INT,BOOL,MODE197,MODE107,MODE199,MODE186,MODE200,MODE201,MODE202,MODE153,MODE203,MODE204,MODE168,MODE205,MODE187,MODE206,MODE195,MODE190,MODE207,MODE208,MODE209,MODE188,MODE192,MODE193,VOID)  */
struct A68t210 { A68_INT mode; union {
struct A68t158  mode1;
A68_INT  mode2;
A68_BOOL  mode3;
struct A68t197  mode4;
struct A68t107  mode5;
struct A68t199  mode6;
struct A68t186  mode7;
struct A68t200  mode8;
struct A68t201  mode9;
} data; };
typedef struct A68t210  A68_210 ;    /* UNION(MODE158,INT,BOOL,MODE197,MODE107,MODE199,MODE186,MODE200,MODE201)  */
struct A68t211 { A68_INT mode; union {
struct A68t158  mode1;
A68_INT  mode2;
A68_BOOL  mode3;
struct A68t197  mode4;
struct A68t107  mode5;
struct A68t199  mode6;
struct A68t186  mode7;
struct A68t200  mode8;
struct A68t201  mode9;
struct A68t202  mode10;
struct A68t153  mode11;
struct A68t203  mode12;
struct A68t204  mode13;
struct A68t168  mode14;
struct A68t205  mode15;
struct A68t187  mode16;
struct A68t206  mode17;
struct A68t195  mode18;
struct A68t190  mode19;
} data; };
typedef struct A68t211  A68_211 ;    /* UNION(MODE158,INT,BOOL,MODE197,MODE107,MODE199,MODE186,MODE200,MODE201,MODE202,MODE153,MODE203,MODE204,MODE168,MODE205,MODE187,MODE206,MODE195,MODE190)  */
struct A68t212{
struct A68t154 * Value;
struct A68t105 * End;
A68_INT  Type;
A_PAD_INT(PAD_122)
};
typedef struct A68t212  A68_212 ;    /* STRUCT(REF MODE154,REF MODE105,INT)  */
A_VECTOR(struct A68t218 ,A68t217);
typedef struct A68t217  A68_217 ;    /* VECTOR [] MODE218 */
A_VECTOR(struct A68t225 ,A68t224);
typedef struct A68t224  A68_224 ;    /* VECTOR [] MODE225 */
struct A68t225{
struct A68t125  N;
A_PAD_ISTRUCT(A68_125 ,PAD_123)
struct A68t125  F;
A_PAD_ISTRUCT(A68_125 ,PAD_124)
A68_INT  Level;
A_PAD_INT(PAD_125)
};
typedef struct A68t225  A68_225 ;    /* STRUCT(MODE125,MODE125,INT)  */
struct A68t223 { A68_INT mode; union {
A68_VC  mode1;
struct A68t224  mode2;
} data; };
typedef struct A68t223  A68_223 ;    /* UNION(REF MODE26,REF MODE224)  */
struct A68t219{
struct A68t125  F;
A_PAD_ISTRUCT(A68_125 ,PAD_126)
A68_INT  No;
A_PAD_INT(PAD_127)
A68_INT  Nl;
A_PAD_INT(PAD_128)
A68_INT  Ng;
A_PAD_INT(PAD_129)
struct A68t223  U;
};
typedef struct A68t219  A68_219 ;    /* STRUCT(MODE125,INT,INT,INT,MODE223)  */
A_VECTOR(struct A68t222 ,A68t220);
typedef struct A68t220  A68_220 ;    /* VECTOR [] MODE222 */
struct A68t222{
struct A68t106  Prefix;
A_PAD_ISTRUCT(A68_106 ,PAD_130)
A68_BOOL  Optimised;
A_PAD_BOOL(PAD_131)
A68_BOOL  Iddec;
A_PAD_BOOL(PAD_132)
A68_BOOL  Globalproc;
A_PAD_BOOL(PAD_133)
A68_BOOL  Keptgenproc;
A_PAD_BOOL(PAD_134)
A68_BOOL  Forceuse;
A_PAD_BOOL(PAD_135)
A68_VC  Definition;
A68_VC  Rhs;
};
typedef struct A68t222  A68_222 ;    /* STRUCT(MODE106,BOOL,BOOL,BOOL,BOOL,BOOL,REF MODE26,REF MODE26)  */
A_VECTOR(struct A68t106 ,A68t221);
typedef struct A68t221  A68_221 ;    /* VECTOR [] MODE106 */
struct A68t218{
struct A68t219  Xs;
struct A68t106  Ys;
A_PAD_ISTRUCT(A68_106 ,PAD_136)
A68_LINT  Timeoflastchange;
A_PAD_LINT(PAD_137)
struct A68t220  Keptinfo;
struct A68t221  Cnames;
};
typedef struct A68t218  A68_218 ;    /* STRUCT(MODE219,MODE106,LONG INT,REF MODE220,REF MODE221)  */
struct A68t214{
struct A68t106  Uname;
A_PAD_ISTRUCT(A68_106 ,PAD_138)
struct A68t106  Lname;
A_PAD_ISTRUCT(A68_106 ,PAD_139)
struct A68t106  Gname;
A_PAD_ISTRUCT(A68_106 ,PAD_140)
struct A68t217  Specs;
};
typedef struct A68t214  A68_214 ;    /* STRUCT(MODE106,MODE106,MODE106,REF MODE217)  */
struct A68t213{
struct A68t125  Name;
A_PAD_ISTRUCT(A68_125 ,PAD_141)
struct A68t214  Ym;
struct A68t106  Ys;
A_PAD_ISTRUCT(A68_106 ,PAD_142)
A68_INT  Level;
A_PAD_INT(PAD_143)
struct A68t215 * Ids;
struct A68t216 * Uses;
struct A68t213 * Rest;
};
typedef struct A68t213  A68_213 ;    /* STRUCT(MODE125,MODE214,MODE106,INT,REF MODE215,REF MODE216,REF MODE213)  */
struct A68t215{
struct A68t125  Name;
A_PAD_ISTRUCT(A68_125 ,PAD_144)
struct A68t106  Uname;
A_PAD_ISTRUCT(A68_106 ,PAD_145)
A68_BOOL  Optimised;
A_PAD_BOOL(PAD_146)
A68_BOOL  Iddec;
A_PAD_BOOL(PAD_147)
A68_BOOL  Globalproc;
A_PAD_BOOL(PAD_148)
A68_BOOL  Genproc;
A_PAD_BOOL(PAD_149)
A68_BOOL  Forceuse;
A_PAD_BOOL(PAD_150)
A68_INT  Mode;
A_PAD_INT(PAD_151)
A68_INT  Decno;
A_PAD_INT(PAD_152)
A68_VC  Definition;
A68_VC  Rhs;
struct A68t215 * Rest;
};
typedef struct A68t215  A68_215 ;    /* STRUCT(MODE125,MODE106,BOOL,BOOL,BOOL,BOOL,BOOL,INT,INT,REF MODE26,REF MODE26,REF MODE215)  */
struct A68t216{
struct A68t125  Name;
A_PAD_ISTRUCT(A68_125 ,PAD_153)
struct A68t106  Uname;
A_PAD_ISTRUCT(A68_106 ,PAD_154)
struct A68t215 * Ids;
struct A68t216 * Rest;
};
typedef struct A68t216  A68_216 ;    /* STRUCT(MODE125,MODE106,REF MODE215,REF MODE216)  */
struct A68t227{
struct A68t125  Name;
A_PAD_ISTRUCT(A68_125 ,PAD_155)
struct A68t225  L;
struct A68t225  G;
A68_INT  Type;
A_PAD_INT(PAD_156)
};
typedef struct A68t227  A68_227 ;    /* STRUCT(MODE125,MODE225,MODE225,INT)  */
struct A68t228{
struct A68t106  L;
A_PAD_ISTRUCT(A68_106 ,PAD_157)
struct A68t106  G;
A_PAD_ISTRUCT(A68_106 ,PAD_158)
};
typedef struct A68t228  A68_228 ;    /* STRUCT(MODE106,MODE106)  */
struct A68t226{
struct A68t106  Uname;
A_PAD_ISTRUCT(A68_106 ,PAD_159)
struct A68t227  Xmi;
struct A68t228  Checkinfo;
};
typedef struct A68t226  A68_226 ;    /* STRUCT(MODE106,MODE227,MODE228)  */
struct A68t230 ;

A_PROCEDURE(A68_VOID ,A68t229,(struct A68t230 ),(struct A68t230 ,void *));
typedef struct A68t229  A68_229 ;    /* PROC(MODE230) VOID */
struct A68t230{
struct A68t125  Name;
A_PAD_ISTRUCT(A68_125 ,PAD_160)
struct A68t214  Ym;
struct A68t125  Formal;
A_PAD_ISTRUCT(A68_125 ,PAD_161)
struct A68t106  Ys;
A_PAD_ISTRUCT(A68_106 ,PAD_162)
A68_INT  Level;
A_PAD_INT(PAD_163)
A68_INT  Ownlevel;
A_PAD_INT(PAD_164)
};
typedef struct A68t230  A68_230 ;    /* STRUCT(MODE125,MODE214,MODE125,MODE106,INT,INT)  */
struct A68t232 ;

A_PROCEDURE(A68_VOID ,A68t231,(struct A68t232 ,A68_INT ),(struct A68t232 ,A68_INT ,void *));
typedef struct A68t231  A68_231 ;    /* PROC(MODE232,INT) VOID */
struct A68t232{
A68_INT  Type;
A_PAD_INT(PAD_165)
A68_INT  Moduleno;
A_PAD_INT(PAD_166)
struct A68t125  Name;
A_PAD_ISTRUCT(A68_125 ,PAD_167)
struct A68t214  Ym;
};
typedef struct A68t232  A68_232 ;    /* STRUCT(INT,INT,MODE125,MODE214)  */
struct A68t234 ;

A_PROCEDURE(A68_VOID ,A68t233,(struct A68t234 ),(struct A68t234 ,void *));
typedef struct A68t233  A68_233 ;    /* PROC(MODE234) VOID */
struct A68t234{
struct A68t125  Name;
A_PAD_ISTRUCT(A68_125 ,PAD_168)
A68_INT  Decno;
A_PAD_INT(PAD_169)
A68_INT  Level;
A_PAD_INT(PAD_170)
A68_INT  Mode;
A_PAD_INT(PAD_171)
A68_INT  Scope;
A_PAD_INT(PAD_172)
struct A68t234 * Rest;
};
typedef struct A68t234  A68_234 ;    /* STRUCT(MODE125,INT,INT,INT,INT,REF MODE234)  */
A_ROW(struct A68t213 *,A68t235,1);
typedef struct A68t235  A68_235 ;    /* [] REF MODE213 */
struct A68t237 ;

A_PROCEDURE(A68_VOID ,A68t236,(struct A68t125 ,A68_INT ,A68_BOOL ,struct A68t237 *),(struct A68t125 ,A68_INT ,A68_BOOL ,struct A68t237 *,void *));
typedef struct A68t236  A68_236 ;    /* PROC(MODE125,INT,BOOL) MODE237 */
struct A68t237{
struct A68t227  Xmi;
struct A68t214  Ym;
};
typedef struct A68t237  A68_237 ;    /* STRUCT(MODE227,MODE214)  */
struct A68t239 ;

A_PROCEDURE(A68_VOID ,A68t238,(struct A68t125 ,struct A68t125 ,struct A68t214 ,struct A68t239 *),(struct A68t125 ,struct A68t125 ,struct A68t214 ,struct A68t239 *,void *));
typedef struct A68t238  A68_238 ;    /* PROC(MODE125,MODE125,MODE214) MODE239 */
struct A68t239{
struct A68t219  Xs;
struct A68t106  Ys;
A_PAD_ISTRUCT(A68_106 ,PAD_173)
};
typedef struct A68t239  A68_239 ;    /* STRUCT(MODE219,MODE106)  */

A_PROCEDURE(A68_VOID ,A68t240,(struct A68t227 ),(struct A68t227 ,void *));
typedef struct A68t240  A68_240 ;    /* PROC(MODE227) VOID */

A_PROCEDURE(A68_VOID ,A68t241,(struct A68t219 ),(struct A68t219 ,void *));
typedef struct A68t241  A68_241 ;    /* PROC(MODE219) VOID */
A_ROW(struct A68t218 ,A68t242,1);
typedef struct A68t242  A68_242 ;    /* [] MODE218 */

A_PROCEDURE(A68_VOID ,A68t243,(struct A68t180 ),(struct A68t180 ,void *));
typedef struct A68t243  A68_243 ;    /* PROC(MODE180) VOID */

A_PROCEDURE(struct A68t106 ,A68t244,(void),(void *));
typedef struct A68t244  A68_244 ;    /* PROC MODE106 */

A_PROCEDURE(A68_VOID ,A68t245,(struct A68t106 ),(struct A68t106 ,void *));
typedef struct A68t245  A68_245 ;    /* PROC(MODE106) VOID */

A_PROCEDURE(A68_VOID ,A68t246,(struct A68t180 ,A68_VC *),(struct A68t180 ,A68_VC *,void *));
typedef struct A68t246  A68_246 ;    /* PROC(MODE180) MODE26 */

A_PROCEDURE(A68_BOOL ,A68t247,(struct A68t154 *,struct A68t154 *),(struct A68t154 *,struct A68t154 *,void *));
typedef struct A68t247  A68_247 ;    /* PROC(REF MODE154,REF MODE154) BOOL */

A_PROCEDURE(A68_BOOL ,A68t248,(struct A68t154 *),(struct A68t154 *,void *));
typedef struct A68t248  A68_248 ;    /* PROC(REF MODE154) BOOL */

A_PROCEDURE(A68_BOOL ,A68t249,(struct A68t154 *,A68_LBITS ),(struct A68t154 *,A68_LBITS ,void *));
typedef struct A68t249  A68_249 ;    /* PROC(REF MODE154,LONG BITS) BOOL */

A_PROCEDURE(A68_LBITS ,A68t250,(struct A68t154 *),(struct A68t154 *,void *));
typedef struct A68t250  A68_250 ;    /* PROC(REF MODE154) LONG BITS */

A_PROCEDURE(A68_VOID ,A68t251,(struct A68t154 *,A68_VC *),(struct A68t154 *,A68_VC *,void *));
typedef struct A68t251  A68_251 ;    /* PROC(REF MODE154) MODE26 */

A_PROCEDURE(struct A68t154 *,A68t252,(struct A68t154 *,A68_INT ),(struct A68t154 *,A68_INT ,void *));
typedef struct A68t252  A68_252 ;    /* PROC(REF MODE154,INT) REF MODE154 */

A_PROCEDURE(A68_INT ,A68t253,(struct A68t159 ),(struct A68t159 ,void *));
typedef struct A68t253  A68_253 ;    /* PROC(MODE159) INT */

A_PROCEDURE(A68_BOOL ,A68t254,(struct A68t154 *,A68_BITS ),(struct A68t154 *,A68_BITS ,void *));
typedef struct A68t254  A68_254 ;    /* PROC(REF MODE154,BITS) BOOL */

A_PROCEDURE(struct A68t154 *,A68t255,(struct A68t160 *,A68_INT ),(struct A68t160 *,A68_INT ,void *));
typedef struct A68t255  A68_255 ;    /* PROC(REF MODE160,INT) REF MODE154 */

A_PROCEDURE(struct A68t160 *,A68t256,(struct A68t160 *),(struct A68t160 *,void *));
typedef struct A68t256  A68_256 ;    /* PROC(REF MODE160) REF MODE160 */
struct A68t258 ;

A_PROCEDURE(struct A68t154 *,A68t257,(A68_INT ,A68_INT ,A68_BITS ,struct A68t258 ),(A68_INT ,A68_INT ,A68_BITS ,struct A68t258 ,void *));
typedef struct A68t257  A68_257 ;    /* PROC(INT,INT,BITS,MODE258) REF MODE154 */
A_VECTOR(struct A68t154 *,A68t258);
typedef struct A68t258  A68_258 ;    /* VECTOR [] REF MODE154 */

A_PROCEDURE(A68_VOID ,A68t259,(struct A68t154 *),(struct A68t154 *,void *));
typedef struct A68t259  A68_259 ;    /* PROC(REF MODE154) VOID */

A_PROCEDURE(A68_VOID ,A68t260,(struct A68t154 *,A68_BOOL ,A68_VC *),(struct A68t154 *,A68_BOOL ,A68_VC *,void *));
typedef struct A68t260  A68_260 ;    /* PROC(REF MODE154,BOOL) MODE26 */

A_PROCEDURE(A68_LINT ,A68t261,(struct A68t154 ),(struct A68t154 ,void *));
typedef struct A68t261  A68_261 ;    /* PROC(MODE154) LONG INT */
struct A68t262 { A68_INT mode; union {
struct A68t154 * mode1;
A68_VC  mode2;
struct A68t129  mode3;
} data; };
typedef struct A68t262  A68_262 ;    /* UNION(REF MODE154,MODE26,MODE129)  */

A_PROCEDURE(A68_VOID ,A68t263,(struct A68t262 ,A68_VC *),(struct A68t262 ,A68_VC *,void *));
typedef struct A68t263  A68_263 ;    /* PROC(MODE262) MODE26 */
struct A68t265 ;

A_PROCEDURE(A68_VOID ,A68t264,(struct A68t265 ,A68_VC *),(struct A68t265 ,A68_VC *,void *));
typedef struct A68t264  A68_264 ;    /* PROC(MODE265) MODE26 */
A_VECTOR(struct A68t262 ,A68t265);
typedef struct A68t265  A68_265 ;    /* VECTOR [] MODE262 */

A_PROCEDURE(A68_VOID ,A68t266,(A68_VC ,struct A68t265 ,A68_VC *),(A68_VC ,struct A68t265 ,A68_VC *,void *));
typedef struct A68t266  A68_266 ;    /* PROC(MODE26,MODE265) MODE26 */

A_PROCEDURE(A68_VOID ,A68t267,(struct A68t265 ),(struct A68t265 ,void *));
typedef struct A68t267  A68_267 ;    /* PROC(MODE265) VOID */

A_PROCEDURE(A68_VOID ,A68t268,(A68_VC ,A68_INT ,struct A68t265 ,struct A68t129 *),(A68_VC ,A68_INT ,struct A68t265 ,struct A68t129 *,void *));
typedef struct A68t268  A68_268 ;    /* PROC(MODE26,INT,MODE265) MODE129 */

A_PROCEDURE(struct A68t154 *,A68t269,(struct A68t154 *),(struct A68t154 *,void *));
typedef struct A68t269  A68_269 ;    /* PROC(REF MODE154) REF MODE154 */

A_PROCEDURE(struct A68t154 *,A68t270,(A68_VC ,struct A68t154 *),(A68_VC ,struct A68t154 *,void *));
typedef struct A68t270  A68_270 ;    /* PROC(MODE26,REF MODE154) REF MODE154 */

A_PROCEDURE(A68_VOID ,A68t271,(struct A68t96 ),(struct A68t96 ,void *));
typedef struct A68t271  A68_271 ;    /* PROC(MODE96) VOID */

A_PROCEDURE(A68_VOID ,A68t272,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t272  A68_272 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,69,A68t273);
typedef struct A68t273  A68_273 ;    /* STRUCT 69 CHAR */
A_ISTRUCT(A68_CHAR ,2,A68t274);
typedef struct A68t274  A68_274 ;    /* STRUCT 2 CHAR */
A_ISTRUCT(struct A68t122 ,2,A68t275);
typedef struct A68t275  A68_275 ;    /* STRUCT 2 MODE122 */
A_ISTRUCT(A68_CHAR ,9,A68t276);
typedef struct A68t276  A68_276 ;    /* STRUCT 9 CHAR */
A_ISTRUCT(struct A68t122 ,4,A68t277);
typedef struct A68t277  A68_277 ;    /* STRUCT 4 MODE122 */
A_ISTRUCT(A68_CHAR ,13,A68t278);
typedef struct A68t278  A68_278 ;    /* STRUCT 13 CHAR */
A_ISTRUCT(A68_CHAR ,12,A68t279);
typedef struct A68t279  A68_279 ;    /* STRUCT 12 CHAR */
A_ISTRUCT(A68_CHAR ,51,A68t280);
typedef struct A68t280  A68_280 ;    /* STRUCT 51 CHAR */
A_ISTRUCT(A68_CHAR ,37,A68t281);
typedef struct A68t281  A68_281 ;    /* STRUCT 37 CHAR */
A_ISTRUCT(struct A68t122 ,3,A68t282);
typedef struct A68t282  A68_282 ;    /* STRUCT 3 MODE122 */
A_ISTRUCT(A68_CHAR ,39,A68t283);
typedef struct A68t283  A68_283 ;    /* STRUCT 39 CHAR */
A_ISTRUCT(struct A68t122 ,5,A68t284);
typedef struct A68t284  A68_284 ;    /* STRUCT 5 MODE122 */
A_ISTRUCT(A68_CHAR ,41,A68t285);
typedef struct A68t285  A68_285 ;    /* STRUCT 41 CHAR */
A_ISTRUCT(A68_CHAR ,30,A68t286);
typedef struct A68t286  A68_286 ;    /* STRUCT 30 CHAR */
A_ISTRUCT(A68_CHAR ,42,A68t287);
typedef struct A68t287  A68_287 ;    /* STRUCT 42 CHAR */
A_ISTRUCT(struct A68t122 ,6,A68t288);
typedef struct A68t288  A68_288 ;    /* STRUCT 6 MODE122 */
A_ISTRUCT(A68_CHAR ,46,A68t289);
typedef struct A68t289  A68_289 ;    /* STRUCT 46 CHAR */
A_ISTRUCT(A68_CHAR ,24,A68t290);
typedef struct A68t290  A68_290 ;    /* STRUCT 24 CHAR */
A_ISTRUCT(A68_CHAR ,29,A68t291);
typedef struct A68t291  A68_291 ;    /* STRUCT 29 CHAR */
A_ISTRUCT(A68_CHAR ,27,A68t292);
typedef struct A68t292  A68_292 ;    /* STRUCT 27 CHAR */
A_ISTRUCT(A68_CHAR ,22,A68t293);
typedef struct A68t293  A68_293 ;    /* STRUCT 22 CHAR */
A_ISTRUCT(A68_CHAR ,40,A68t294);
typedef struct A68t294  A68_294 ;    /* STRUCT 40 CHAR */
A_ISTRUCT(A68_CHAR ,44,A68t295);
typedef struct A68t295  A68_295 ;    /* STRUCT 44 CHAR */
A_ISTRUCT(A68_CHAR ,48,A68t296);
typedef struct A68t296  A68_296 ;    /* STRUCT 48 CHAR */
A_ISTRUCT(struct A68t122 ,31,A68t297);
typedef struct A68t297  A68_297 ;    /* STRUCT 31 MODE122 */

A_PROCEDURE(A68_VOID ,A68t298,(struct A68t203 ,struct A68t110 ,struct A68t93 ,A68_INT ,struct A68t154 *),(struct A68t203 ,struct A68t110 ,struct A68t93 ,A68_INT ,struct A68t154 *,void *));
typedef struct A68t298  A68_298 ;    /* PROC(MODE203,MODE110,REF MODE93,INT,REF MODE154) VOID */

A_PROCEDURE(struct A68t154 *,A68t299,(struct A68t154 *,struct A68t154 ),(struct A68t154 *,struct A68t154 ,void *));
typedef struct A68t299  A68_299 ;    /* PROC(REF MODE154,MODE154) REF MODE154 */

A_PROCEDURE(struct A68t155 *,A68t300,(struct A68t155 *,struct A68t155 ),(struct A68t155 *,struct A68t155 ,void *));
typedef struct A68t300  A68_300 ;    /* PROC(REF MODE155,MODE155) REF MODE155 */
#define A68_301  A68_VC 
#define A68t301 A68t26            /* FLEX VECTOR [] CHAR */

A_PROCEDURE(A68_VOID ,A68t302,(struct A68t203 ,struct A68t154 *),(struct A68t203 ,struct A68t154 *,void *));
typedef struct A68t302  A68_302 ;    /* PROC(MODE203,REF MODE154) VOID */
A_ISTRUCT(A68_CHAR ,18,A68t303);
typedef struct A68t303  A68_303 ;    /* STRUCT 18 CHAR */
A_ISTRUCT(A68_CHAR ,8,A68t304);
typedef struct A68t304  A68_304 ;    /* STRUCT 8 CHAR */
A_ISTRUCT(A68_CHAR ,3,A68t305);
typedef struct A68t305  A68_305 ;    /* STRUCT 3 CHAR */

A_PROCEDURE(A68_VOID ,A68t306,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t306  A68_306 ;    /* PROC(REF MODE26,REF MODE26) VOID */
A_ISTRUCT(A68_CHAR ,19,A68t307);
typedef struct A68t307  A68_307 ;    /* STRUCT 19 CHAR */
A_ISTRUCT(A68_CHAR ,16,A68t308);
typedef struct A68t308  A68_308 ;    /* STRUCT 16 CHAR */
A_ISTRUCT(A68_CHAR ,26,A68t309);
typedef struct A68t309  A68_309 ;    /* STRUCT 26 CHAR */
A_ISTRUCT(A68_CHAR ,6,A68t310);
typedef struct A68t310  A68_310 ;    /* STRUCT 6 CHAR */
A_ISTRUCT(A68_CHAR ,5,A68t311);
typedef struct A68t311  A68_311 ;    /* STRUCT 5 CHAR */
A_ISTRUCT(A68_CHAR ,28,A68t312);
typedef struct A68t312  A68_312 ;    /* STRUCT 28 CHAR */
A_ISTRUCT(A68_CHAR ,38,A68t313);
typedef struct A68t313  A68_313 ;    /* STRUCT 38 CHAR */
A_ISTRUCT(A68_CHAR ,23,A68t314);
typedef struct A68t314  A68_314 ;    /* STRUCT 23 CHAR */
A_ISTRUCT(A68_CHAR ,21,A68t315);
typedef struct A68t315  A68_315 ;    /* STRUCT 21 CHAR */
A_ISTRUCT(A68_VC ,2,A68t316);
typedef struct A68t316  A68_316 ;    /* STRUCT 2 MODE26 */

A_PROCEDURE(A68_VOID ,A68t317,(struct A68t203 ,A68_VC ,A68_VC ,struct A68t154 *),(struct A68t203 ,A68_VC ,A68_VC ,struct A68t154 *,void *));
typedef struct A68t317  A68_317 ;    /* PROC(MODE203,REF MODE26,REF MODE26,REF MODE154) VOID */

A_PROCEDURE(A68_VOID ,A68t318,(A68_VC ,A68_VC ,A68_BOOL ),(A68_VC ,A68_VC ,A68_BOOL ,void *));
typedef struct A68t318  A68_318 ;    /* PROC(REF MODE26,REF MODE26,BOOL) VOID */
A_ISTRUCT(A68_CHAR ,17,A68t319);
typedef struct A68t319  A68_319 ;    /* STRUCT 17 CHAR */
A_ISTRUCT(A68_CHAR ,11,A68t320);
typedef struct A68t320  A68_320 ;    /* STRUCT 11 CHAR */
A_ISTRUCT(A68_CHAR ,10,A68t321);
typedef struct A68t321  A68_321 ;    /* STRUCT 10 CHAR */
A_ISTRUCT(struct A68t122 ,8,A68t322);
typedef struct A68t322  A68_322 ;    /* STRUCT 8 MODE122 */

A_PROCEDURE(A68_VOID ,A68t323,(A68_VC ),(A68_VC ,void *));
typedef struct A68t323  A68_323 ;    /* PROC(REF MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t324,(A68_VC ,struct A68t105 *),(A68_VC ,struct A68t105 *,void *));
typedef struct A68t324  A68_324 ;    /* PROC(REF MODE26,REF MODE105) VOID */
A_ISTRUCT(A68_CHAR ,25,A68t325);
typedef struct A68t325  A68_325 ;    /* STRUCT 25 CHAR */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from values --- */
extern A68_VOID  PWPACTR_getcfragment(struct A68t154 *,A68_VC *);
extern A68_BITS  YIJACTR_defaultinfo;
/* --- End of imports from values --- */


/* --- Imports from uniquenameserver --- */
extern A68_VOID  NKMACTR_nameseedoriginstring(struct A68t180 ,A68_VC *);
/* --- End of imports from uniquenameserver --- */


/* --- Imports from modules --- */
extern A68_VOID  DRPACTR_processcontexts(void);
extern A68_VOID  YFPACTR_outputmoduleinformation(void);
extern A68_BOOL  GZOACTR_rscompatiblewithpreviousversion;
extern A68_242  MZOACTR_specs;
extern A68_BOOL  HZOACTR_transcompatiblewithpreviousversi;
extern A68_BOOL  FZOACTR_previousversionfound;
/* --- End of imports from modules --- */


/* --- Imports from incmode --- */
#define UEAACTR_voidmode 5
/* --- End of imports from incmode --- */


/* --- Imports from incvalue --- */
/* --- End of imports from incvalue --- */


/* --- Imports from incimperatives --- */
#define FDAACTR_genprocbit 0100000U
/* --- End of imports from incimperatives --- */


/* --- Imports from incid --- */
#define GAAACTR_globalidno 2
/* --- End of imports from incid --- */


/* --- Imports from environment --- */
extern A68_VOID  PXIACTR_assert(A68_VC ,A68_BOOL );
extern A68_VOID  ZWIACTR_comment(A68_INT );
extern A68_VC  XQIACTR_sourcefilename;
extern A68_VOID  LXIACTR_terminalerror(A68_INT );
extern A68_VOID  CXIACTR_warning(A68_INT );
extern A68_BOOL  NQIACTR_nostructresultoption;
extern A68_181  BYIACTR_config_info;
extern A68_182 * VXIACTR_nil_modinfolist;
extern A68_183 * WXIACTR_nil_envinfo;
extern A68_VC  BRIACTR_current_directory;
/* --- End of imports from environment --- */


/* --- Imports from identifiers --- */
extern A68_VOID  ZLWACTR_completerddec(void);
extern A68_164  FOKACTR_ids;
extern A68_VOID  DNWACTR_rddec(A68_VC ,A68_INT ,struct A68t93 ,A68_INT ,A68_INT ,struct A68t110 ,A68_BITS );
/* --- End of imports from identifiers --- */


/* --- Imports from modes --- */
extern A68_BOOL  XRMACTR_dynamic(A68_INT );
extern A68_BOOL  JPMACTR_isarray(A68_INT );
extern A68_BOOL  ERMACTR_iscstruct(A68_INT );
/* --- End of imports from modes --- */


/* --- Imports from coutput --- */
extern A68_VOID  VBMACTR_writecstream(struct A68t121 ,A68_INT );
/* --- End of imports from coutput --- */


/* --- Imports from environ --- */
extern A68_INT  WQLACTR_codestream(A68_INT );
extern A68_INT  ZQLACTR_locdecstream(A68_INT );
extern A68_INT  CRLACTR_labelstream(A68_INT );
extern A68_INT  EQLACTR_currentlevel(void);
/* --- End of imports from environ --- */


/* --- Imports from centities --- */
extern A68_SINT  EIAACTR_cnewline;
/* --- End of imports from centities --- */


/* --- Imports from osif --- */
#include <errno.h>

#define RCBAOSF_errno errno
extern A68_VOID  YPBAOSF_local_time_str(A68_LINT ,A68_VC *);
#include <unistd.h>
#define EXIT(status) exit(A_INT_int(status))

#define APBAOSF_exit EXIT
extern int A_argc;
extern char **A_argv;
extern char **A_envp;
#define A_prelude(argc,argv,envp) A_argc=argc; A_argv=argv; A_envp=envp

#define XHCAOSF_prelude A_prelude
extern A68_VOID  LICAOSF_get_args(A68_36 *);
#include <signal.h>

#define QLCAOSF_sighup SIGHUP
/**/

#define RLCAOSF_sigint SIGINT
/**/

#define SLCAOSF_sigquit SIGQUIT
/**/

#define TLCAOSF_sigill SIGILL
/**/

#define ULCAOSF_sigtrap SIGTRAP
/**/

#define VLCAOSF_sigabrt SIGABRT
/**/

#define WLCAOSF_sigbus SIGBUS
/**/

#define XLCAOSF_sigfpe SIGFPE
/**/

#define YLCAOSF_sigkill SIGKILL
/**/

#define ZLCAOSF_sigusr1 SIGUSR1
/**/

#define AMCAOSF_sigsegv SIGSEGV
/**/

#define BMCAOSF_sigusr2 SIGUSR2
/**/

#define CMCAOSF_sigpipe SIGPIPE
/**/

#define DMCAOSF_sigalrm SIGALRM
/**/

#define EMCAOSF_sigterm SIGTERM
/**/

#define FMCAOSF_sigstkflt SIGSTKFLT
/**/

#define GMCAOSF_sigchld SIGCHLD
/**/

#define HMCAOSF_sigcont SIGCONT
/**/

#define IMCAOSF_sigstop SIGSTOP
/**/

#define JMCAOSF_sigtstp SIGTSTP
/**/

#define KMCAOSF_sigttin SIGTTIN
/**/

#define LMCAOSF_sigttou SIGTTOU
/**/

#define MMCAOSF_sigurg SIGURG
/**/

#define NMCAOSF_sigxcpu SIGXCPU
/**/

#define OMCAOSF_sigxfsz SIGXFSZ
/**/

#define PMCAOSF_sigvtalrm SIGVTALRM
/**/

#define QMCAOSF_sigprof SIGPROF
/**/

#define RMCAOSF_sigwinch SIGWINCH
/**/

#define SMCAOSF_sigio SIGIO
/**/

#define TMCAOSF_sigpwr SIGPWR
#include <algol68/Alibrary.h>

#define GMBAOSF_garbage_collect Agc_collect
#include <algol68/Alibrary.h>

#define BOBAOSF_alwayscollect A_ALWAYS_COLLECT
#include <algol68/Alibrary.h>

#define COBAOSF_alwaysgrowheap A_ALWAYS_GROW_HEAP
#include <algol68/Alibrary.h>

#define DOBAOSF_defaultpolicy A_DEFAULT_POLICY
/* --- End of imports from osif --- */


/* --- Imports from usefulops --- */
extern A68_VOID  JDAAOSF_concat(struct A68t36 ,A68_VC *);
/* --- End of imports from usefulops --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void JRPACTR(void);   /* values */
extern void AGMACTR(void);   /* uniquenameserver */
extern void VJOACTR(void);   /* modules */
extern void ZDAACTR(void);   /* incmode */
extern void PIJACTR(void);   /* incvalue */
extern void UAAACTR(void);   /* incimperatives */
extern void BAAACTR(void);   /* incid */
extern void HPIACTR(void);   /* environment */
extern void WIVACTR(void);   /* identifiers */
extern void MLMACTR(void);   /* modes */
extern void YRLACTR(void);   /* coutput */
extern void KNLACTR(void);   /* environ */
extern void THAACTR(void);   /* centities */
extern void WSCAOSF(void);   /* osif */
extern void IKAAOSF(void);   /* usefulops */
/* --- end of DECS initialisation functions --- */
static A68_273   NBYACTR = {"$Id: entryandreturn.c,v 1.6.2.4 2004/09/27 03:04:17 teshields Exp $"}; 
A_GISVEC(A68_VC ,OBYACTR,NBYACTR,69)
static A68_274   SBYACTR = {"{ "}; 
A_GISVEC(A68_VC ,TBYACTR,SBYACTR,2)
static A68_274   GCYACTR = {"} "}; 
A_GISVEC(A68_VC ,HCYACTR,GCYACTR,2)
static A68_276   LCYACTR = {"#undef NL"}; 
A_GISVEC(A68_VC ,MCYACTR,LCYACTR,9)
static A68_278   ZCYACTR = {"A_PROC_ENTRY("}; 
A_GISVEC(A68_VC ,ADYACTR,ZCYACTR,13)
static A68_274   EDYACTR = {");"}; 
A_GISVEC(A68_VC ,FDYACTR,EDYACTR,2)
static A68_279   ODYACTR = {"A_PROC_EXIT("}; 
A_GISVEC(A68_VC ,PDYACTR,ODYACTR,12)
static A68_274   TDYACTR = {");"}; 
A_GISVEC(A68_VC ,UDYACTR,TDYACTR,2)
static A68_280   CEYACTR = {"/* --- Configuration information for this module */"}; 
A_GISVEC(A68_VC ,DEYACTR,CEYACTR,51)
static A68_281   HEYACTR = {"static char *A_config_arguments[] = {"}; 
A_GISVEC(A68_VC ,IEYACTR,HEYACTR,37)
static A68_274   UEYACTR = {"\","}; 
A_GISVEC(A68_VC ,VEYACTR,UEYACTR,2)
static A68_40   AFYACTR = {"\"\"};"}; 
A_GISVEC(A68_VC ,BFYACTR,AFYACTR,4)
static A68_283   FFYACTR = {"static char *A_config_environment[] = {"}; 
A_GISVEC(A68_VC ,GFYACTR,FFYACTR,39)
static A68_274   UFYACTR = {"\","}; 
A_GISVEC(A68_VC ,VFYACTR,UFYACTR,2)
static A68_40   AGYACTR = {"\"\"};"}; 
A_GISVEC(A68_VC ,BGYACTR,AGYACTR,4)
static A68_285   FGYACTR = {"static char *A_config_modinfo_files[] = {"}; 
A_GISVEC(A68_VC ,GGYACTR,FGYACTR,41)
static A68_274   QGYACTR = {"\","}; 
A_GISVEC(A68_VC ,RGYACTR,QGYACTR,2)
static A68_40   WGYACTR = {"\"\"};"}; 
A_GISVEC(A68_VC ,XGYACTR,WGYACTR,4)
static A68_286   BHYACTR = {"static A_CONFIG_INFO A_config;"}; 
A_GISVEC(A68_VC ,CHYACTR,BHYACTR,30)
static A68_287   GHYACTR = {"/* --- end of configuration information */"}; 
A_GISVEC(A68_VC ,HHYACTR,GHYACTR,42)
static A68_289   NHYACTR = {"/* --- Initialise configuration information */"}; 
A_GISVEC(A68_VC ,OHYACTR,NHYACTR,46)
static A68_290   SHYACTR = {"A_config.source_file = \""}; 
A_GISVEC(A68_VC ,THYACTR,SHYACTR,24)
static A68_274   AIYACTR = {"\";"}; 
A_GISVEC(A68_VC ,BIYACTR,AIYACTR,2)
static A68_291   FIYACTR = {"A_config.translation_time = \""}; 
A_GISVEC(A68_VC ,GIYACTR,FIYACTR,29)
static A68_274   LIYACTR = {"\";"}; 
A_GISVEC(A68_VC ,MIYACTR,LIYACTR,2)
static A68_292   QIYACTR = {"A_config.ctrans_version = \""}; 
A_GISVEC(A68_VC ,RIYACTR,QIYACTR,27)
static A68_274   WIYACTR = {"\";"}; 
A_GISVEC(A68_VC ,XIYACTR,WIYACTR,2)
static A68_293   BJYACTR = {"A_config.name_seed = \""}; 
A_GISVEC(A68_VC ,CJYACTR,BJYACTR,22)
static A68_274   LJYACTR = {"\";"}; 
A_GISVEC(A68_VC ,MJYACTR,LJYACTR,2)
static A68_291   QJYACTR = {"A_config.spec_change_time = \""}; 
A_GISVEC(A68_VC ,RJYACTR,QJYACTR,29)
static A68_106   UJYACTR = {"no spec"}; 
A_GISVEC(A68_VC ,VJYACTR,UJYACTR,7)
static A68_274   BKYACTR = {"\";"}; 
A_GISVEC(A68_VC ,CKYACTR,BKYACTR,2)
static A68_294   GKYACTR = {"A_config.arguments = A_config_arguments;"}; 
A_GISVEC(A68_VC ,HKYACTR,GKYACTR,40)
static A68_295   LKYACTR = {"A_config.environment = A_config_environment;"}; 
A_GISVEC(A68_VC ,MKYACTR,LKYACTR,44)
static A68_296   QKYACTR = {"A_config.modinfo_files = A_config_modinfo_files;"}; 
A_GISVEC(A68_VC ,RKYACTR,QKYACTR,48)
static A68_106   BMYACTR = {"return;"}; 
A_GISVEC(A68_VC ,CMYACTR,BMYACTR,7)
static A68_303   IMYACTR = {"*ReturnedValue = ("}; 
A_GISVEC(A68_VC ,JMYACTR,IMYACTR,18)
static A68_274   OMYACTR = {");"}; 
A_GISVEC(A68_VC ,PMYACTR,OMYACTR,2)
static A68_106   VMYACTR = {"return;"}; 
A_GISVEC(A68_VC ,WMYACTR,VMYACTR,7)
static A68_304   CNYACTR = {"return( "}; 
A_GISVEC(A68_VC ,DNYACTR,CNYACTR,8)
static A68_305   INYACTR = {" );"}; 
A_GISVEC(A68_VC ,JNYACTR,INYACTR,3)
static A68_289   VNYACTR = {"int main(int argc, char *argv[], char *envp[])"}; 
A_GISVEC(A68_VC ,WNYACTR,VNYACTR,46)
static A68_307   COYACTR = {"A_GC_STARTUP(argc);"}; 
A_GISVEC(A68_VC ,DOYACTR,COYACTR,19)
static A68_308   JOYACTR = {"#ifdef A_prelude"}; 
A_GISVEC(A68_VC ,KOYACTR,JOYACTR,16)
static A68_309   OOYACTR = {"A_prelude(argc,argv,envp);"}; 
A_GISVEC(A68_VC ,POYACTR,OOYACTR,26)
static A68_310   TOYACTR = {"#endif"}; 
A_GISVEC(A68_VC ,UOYACTR,TOYACTR,6)
static A68_40   ZOYACTR = {"MAIN"}; 
A_GISVEC(A68_VC ,APYACTR,ZOYACTR,4)
static A68_311   HPYACTR = {"void "}; 
A_GISVEC(A68_VC ,IPYACTR,HPYACTR,5)
static A68_312   MPYACTR = {"(void)   /* initialise DECS "}; 
A_GISVEC(A68_VC ,NPYACTR,MPYACTR,28)
static A68_305   RPYACTR = {" */"}; 
A_GISVEC(A68_VC ,SPYACTR,RPYACTR,3)
static A68_313   YPYACTR = {"static A68_BOOL A_invoked = A68_FALSE;"}; 
A_GISVEC(A68_VC ,ZPYACTR,YPYACTR,38)
static A68_314   FQYACTR = {"if( A_invoked ) return;"}; 
A_GISVEC(A68_VC ,GQYACTR,FQYACTR,23)
static A68_315   KQYACTR = {"A_invoked = A68_TRUE;"}; 
A_GISVEC(A68_VC ,LQYACTR,KQYACTR,21)
static A68_311   RQYACTR = {"DECS "}; 
A_GISVEC(A68_VC ,SQYACTR,RQYACTR,5)
static A68_40   FRYACTR = {"MAIN"}; 
A_GISVEC(A68_VC ,GRYACTR,FRYACTR,4)
static A68_319   IRYACTR = {"#ifdef A_postlude"}; 
A_GISVEC(A68_VC ,JRYACTR,IRYACTR,17)
static A68_320   NRYACTR = {"A_postlude;"}; 
A_GISVEC(A68_VC ,ORYACTR,NRYACTR,11)
static A68_310   SRYACTR = {"#endif"}; 
A_GISVEC(A68_VC ,TRYACTR,SRYACTR,6)
static A68_321   XRYACTR = {"return(0);"}; 
A_GISVEC(A68_VC ,YRYACTR,XRYACTR,10)
static A68_311   HSYACTR = {"DECS "}; 
A_GISVEC(A68_VC ,ISYACTR,HSYACTR,5)
static A68_325   OSYACTR = {"'complete program' called"}; 
A_GISVEC(A68_VC ,PSYACTR,OSYACTR,25)

A_STATIC A68_VOID  PBYACTR_writeinitialopencurly(void);

A_STATIC A68_VOID  BCYACTR_writeclosingcurly(void);

A_STATIC A68_VOID  WCYACTR_routine_entry_hook(A68_VC  Routinename);

A_STATIC A68_VOID  LDYACTR_routine_exit_hook(A68_VC  Routinename);

A_STATIC A68_VOID  ZDYACTR_writeconfiginfo(void);

A68_VOID  BLYACTR_startroutine(A68_203  Routine, A68_110  Environ, A68_93  Paramdecnos, A68_INT  Resultmode, A68_154 * Resultvalue);

A_STATIC A68_154 * GLYACTR_assignment(A68_154 * ELYACTR_anonymous, A68_154  FLYACTR_anonymous);

A_STATIC A68_155 * LLYACTR_assignment(A68_155 * JLYACTR_anonymous, A68_155  KLYACTR_anonymous);

A68_VOID  ULYACTR_endroutine(A68_203  Routine, A68_154 * Result);

A_STATIC A68_VOID  ONYACTR_globalenviron(A68_110  *ReturnedValue);

A68_VOID  SNYACTR_startmodule(A68_VC  Uniquename, A68_VC  Modulename);

A68_VOID  DPYACTR_startdecsmodule(A68_VC  Uniquename, A68_VC  Modulename);

A68_VOID  ZQYACTR_startprocmodule(A68_203  Routine, A68_VC  Uniquename, A68_VC  Modulename, A68_154 * Resultvalue);

A68_VOID  DRYACTR_startcompositionmodule(A68_VC  Uniquename, A68_VC  Modulename, A68_BOOL  Partialcomposition);

A68_VOID  ERYACTR_endmodule(void);

A68_VOID  ESYACTR_enddecsmodule(A68_VC  Modulename);

A68_VOID  NSYACTR_completeprogram(A68_VC  Modulename, A68_105 * Autocomplabel);

A_STATIC A68_155 * LLYACTR_assignment(A68_155 * JLYACTR_anonymous, A68_155  KLYACTR_anonymous)
{ 
A68_155  MLYACTR;  /* united object - for case conformity */
A68_VC  NLYACTR_anonymous;
A68_VC  OLYACTR;  /* OPERATORS - copy to flex */
A68_301 * PLYACTR;  /* YIELD */
A68_155 * QLYACTR;  /* clause result */
{ 
(*JLYACTR_anonymous) = KLYACTR_anonymous;
MLYACTR = KLYACTR_anonymous ;
switch ( MLYACTR.mode )
{ 
case 6: /* VECTOR [] CHAR */
NLYACTR_anonymous = (MLYACTR.data.mode6);
PLYACTR = &(JLYACTR_anonymous-> data.mode6) ;
(*PLYACTR) = A_VCOPY(NLYACTR_anonymous,OLYACTR,A68_CHAR );
break;
default: 
/*SKIP*/;
break;
} 
QLYACTR = JLYACTR_anonymous;
} 
return( QLYACTR );
} 
#undef NL

A_STATIC A68_154 * GLYACTR_assignment(A68_154 * ELYACTR_anonymous, A68_154  FLYACTR_anonymous)
{ 
A68_INT * HLYACTR;  /* YIELD */
A68_BITS * ILYACTR;  /* YIELD */
A68_154 * RLYACTR;  /* clause result */
{ 
HLYACTR = (&(ELYACTR_anonymous->Mode)) ;
(*HLYACTR) = FLYACTR_anonymous.Mode;
ILYACTR = (&(ELYACTR_anonymous->Info)) ;
(*ILYACTR) = FLYACTR_anonymous.Info;
LLYACTR_assignment((&(ELYACTR_anonymous->Extra)), FLYACTR_anonymous.Extra);
RLYACTR = ELYACTR_anonymous;
} 
return( RLYACTR );
} 
#undef NL

A_STATIC A68_VOID  PBYACTR_writeinitialopencurly(void)
{ 
A68_INT  QBYACTR_codestream;
A68_275  RBYACTR;  /* collateral clause result */
A68_122  UBYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  VBYACTR;  /* YIELD */
A68_122  WBYACTR;  /* OPERATORS - mode -> union mode */
A68_121  XBYACTR;  /* OPERATORS - istruct -> vector */
A68_122  YBYACTR;  /* OPERATORS - mode -> union mode */
A68_INT  ZBYACTR;  /* YIELD */
A68_121  ACYACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(writeinitialopencurly);
{ 
QBYACTR_codestream = WQLACTR_codestream(EQLACTR_currentlevel());
 /* line 55: */
VBYACTR = TBYACTR ;
RBYACTR.data[0] = A_UNITE(UBYACTR,mode2,2,VBYACTR);
RBYACTR.data[1] = A_UNITE(WBYACTR,mode4,4,EIAACTR_cnewline);
VBMACTR_writecstream(A_HISVEC(XBYACTR,RBYACTR,2,A68_122 ), QBYACTR_codestream);
 /* line 56: */
 /* line 57: */
ZBYACTR = ZQLACTR_locdecstream(EQLACTR_currentlevel()) ;
VBMACTR_writecstream(A_HVEC(ACYACTR,A_UNITE(YBYACTR,mode3,3,ZBYACTR),A68_122 ), QBYACTR_codestream);
} 
A_PROC_EXIT(writeinitialopencurly);
return;
} 
#undef NL

A_STATIC A68_VOID  BCYACTR_writeclosingcurly(void)
{ 
A68_INT  CCYACTR_codestream;
A68_INT  DCYACTR_locdecstream;
A68_INT  ECYACTR_labelstream;
A68_277  FCYACTR;  /* collateral clause result */
A68_122  ICYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  JCYACTR;  /* YIELD */
A68_122  KCYACTR;  /* OPERATORS - mode -> union mode */
A68_122  NCYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  OCYACTR;  /* YIELD */
A68_122  PCYACTR;  /* OPERATORS - mode -> union mode */
A68_121  QCYACTR;  /* OPERATORS - istruct -> vector */
A68_122  RCYACTR;  /* OPERATORS - mode -> union mode */
A68_121  SCYACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_122  TCYACTR;  /* OPERATORS - mode -> union mode */
A68_121  UCYACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(writeclosingcurly);
{ 
CCYACTR_codestream = WQLACTR_codestream(EQLACTR_currentlevel());
 /* line 68: */
DCYACTR_locdecstream = ZQLACTR_locdecstream(EQLACTR_currentlevel());
 /* line 69: */
ECYACTR_labelstream = CRLACTR_labelstream(EQLACTR_currentlevel());
 /* line 71: */
JCYACTR = HCYACTR ;
FCYACTR.data[0] = A_UNITE(ICYACTR,mode2,2,JCYACTR);
FCYACTR.data[1] = A_UNITE(KCYACTR,mode4,4,EIAACTR_cnewline);
OCYACTR = MCYACTR ;
FCYACTR.data[2] = A_UNITE(NCYACTR,mode2,2,OCYACTR);
FCYACTR.data[3] = A_UNITE(PCYACTR,mode4,4,EIAACTR_cnewline);
VBMACTR_writecstream(A_HISVEC(QCYACTR,FCYACTR,4,A68_122 ), CCYACTR_codestream);
 /* line 72: */
VBMACTR_writecstream(A_HVEC(SCYACTR,A_UNITE(RCYACTR,mode3,3,ECYACTR_labelstream),A68_122 ), DCYACTR_locdecstream);
 /* line 73: */
 /* line 74: */
VBMACTR_writecstream(A_HVEC(UCYACTR,A_UNITE(TCYACTR,mode3,3,CCYACTR_codestream),A68_122 ), ECYACTR_labelstream);
} 
A_PROC_EXIT(writeclosingcurly);
return;
} 
#undef NL

A_STATIC A68_VOID  WCYACTR_routine_entry_hook(A68_VC  Routinename)
{ 
A68_INT  XCYACTR;  /* YIELD */
A68_277  YCYACTR;  /* collateral clause result */
A68_122  BDYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  CDYACTR;  /* YIELD */
A68_122  DDYACTR;  /* OPERATORS - mode -> union mode */
A68_122  GDYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  HDYACTR;  /* YIELD */
A68_122  IDYACTR;  /* OPERATORS - mode -> union mode */
A68_121  JDYACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(routine_entry_hook);
 /* line 77: */
 /* line 78: */
 /* line 79: */
XCYACTR = 1 ;
if ( (A_VINDEX(Routinename,XCYACTR)!='!') )
{ 
CDYACTR = ADYACTR ;
YCYACTR.data[0] = A_UNITE(BDYACTR,mode2,2,CDYACTR);
YCYACTR.data[1] = A_UNITE(DDYACTR,mode2,2,Routinename);
HDYACTR = FDYACTR ;
YCYACTR.data[2] = A_UNITE(GDYACTR,mode2,2,HDYACTR);
YCYACTR.data[3] = A_UNITE(IDYACTR,mode4,4,EIAACTR_cnewline);
 /* line 80: */
VBMACTR_writecstream(A_HISVEC(JDYACTR,YCYACTR,4,A68_122 ), WQLACTR_codestream(EQLACTR_currentlevel()));
} 
A_PROC_EXIT(routine_entry_hook);
return;
} 
#undef NL

A_STATIC A68_VOID  LDYACTR_routine_exit_hook(A68_VC  Routinename)
{ 
A68_INT  MDYACTR;  /* YIELD */
A68_277  NDYACTR;  /* collateral clause result */
A68_122  QDYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  RDYACTR;  /* YIELD */
A68_122  SDYACTR;  /* OPERATORS - mode -> union mode */
A68_122  VDYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  WDYACTR;  /* YIELD */
A68_122  XDYACTR;  /* OPERATORS - mode -> union mode */
A68_121  YDYACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(routine_exit_hook);
 /* line 83: */
 /* line 84: */
 /* line 85: */
MDYACTR = 1 ;
if ( (A_VINDEX(Routinename,MDYACTR)!='!') )
{ 
RDYACTR = PDYACTR ;
NDYACTR.data[0] = A_UNITE(QDYACTR,mode2,2,RDYACTR);
NDYACTR.data[1] = A_UNITE(SDYACTR,mode2,2,Routinename);
WDYACTR = UDYACTR ;
NDYACTR.data[2] = A_UNITE(VDYACTR,mode2,2,WDYACTR);
NDYACTR.data[3] = A_UNITE(XDYACTR,mode4,4,EIAACTR_cnewline);
 /* line 86: */
VBMACTR_writecstream(A_HISVEC(YDYACTR,NDYACTR,4,A68_122 ), WQLACTR_codestream(EQLACTR_currentlevel()));
} 
A_PROC_EXIT(routine_exit_hook);
return;
} 
#undef NL

A_STATIC A68_VOID  ZDYACTR_writeconfiginfo(void)
{ 
A68_277  AEYACTR;  /* collateral clause result */
A68_122  BEYACTR;  /* OPERATORS - mode -> union mode */
A68_122  EEYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  FEYACTR;  /* YIELD */
A68_122  GEYACTR;  /* OPERATORS - mode -> union mode */
A68_122  JEYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  KEYACTR;  /* YIELD */
A68_121  LEYACTR;  /* OPERATORS - istruct -> vector */
A68_VC  MEYACTR_arg;
A68_36  NEYACTR;  /* avoid structure result */
A68_VC * OEYACTR;  /* forall control - []x */
A68_INT  PEYACTR;  /* forall loop counter */
A68_282  QEYACTR;  /* collateral clause result */
A68_122  REYACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  SEYACTR;  /* YIELD */
A68_122  TEYACTR;  /* OPERATORS - mode -> union mode */
A68_122  WEYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  XEYACTR;  /* YIELD */
A68_121  YEYACTR;  /* OPERATORS - istruct -> vector */
A68_282  ZEYACTR;  /* collateral clause result */
A68_122  CFYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  DFYACTR;  /* YIELD */
A68_122  EFYACTR;  /* OPERATORS - mode -> union mode */
A68_122  HFYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  IFYACTR;  /* YIELD */
A68_121  JFYACTR;  /* OPERATORS - istruct -> vector */
A68_183 * KFYACTR_env;
A68_284  LFYACTR;  /* collateral clause result */
A68_122  MFYACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  NFYACTR;  /* YIELD */
A68_122  OFYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  PFYACTR;  /* YIELD */
A68_122  QFYACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  RFYACTR;  /* YIELD */
A68_122  SFYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  TFYACTR;  /* YIELD */
A68_122  WFYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  XFYACTR;  /* YIELD */
A68_121  YFYACTR;  /* OPERATORS - istruct -> vector */
A68_282  ZFYACTR;  /* collateral clause result */
A68_122  CGYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  DGYACTR;  /* YIELD */
A68_122  EGYACTR;  /* OPERATORS - mode -> union mode */
A68_122  HGYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  IGYACTR;  /* YIELD */
A68_121  JGYACTR;  /* OPERATORS - istruct -> vector */
A68_182 * KGYACTR_mlist;
A68_282  LGYACTR;  /* collateral clause result */
A68_122  MGYACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  NGYACTR;  /* YIELD */
A68_122  OGYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  PGYACTR;  /* YIELD */
A68_122  SGYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  TGYACTR;  /* YIELD */
A68_121  UGYACTR;  /* OPERATORS - istruct -> vector */
A68_288  VGYACTR;  /* collateral clause result */
A68_122  YGYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  ZGYACTR;  /* YIELD */
A68_122  AHYACTR;  /* OPERATORS - mode -> union mode */
A68_122  DHYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  EHYACTR;  /* YIELD */
A68_122  FHYACTR;  /* OPERATORS - mode -> union mode */
A68_122  IHYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  JHYACTR;  /* YIELD */
A68_122  KHYACTR;  /* OPERATORS - mode -> union mode */
A68_121  LHYACTR;  /* OPERATORS - istruct -> vector */
A68_297  MHYACTR;  /* collateral clause result */
A68_122  PHYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  QHYACTR;  /* YIELD */
A68_122  RHYACTR;  /* OPERATORS - mode -> union mode */
A68_122  UHYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  VHYACTR;  /* YIELD */
A68_122  WHYACTR;  /* OPERATORS - mode -> union mode */
A68_122  XHYACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  YHYACTR;  /* YIELD */
A68_122  ZHYACTR;  /* OPERATORS - mode -> union mode */
A68_122  CIYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  DIYACTR;  /* YIELD */
A68_122  EIYACTR;  /* OPERATORS - mode -> union mode */
A68_122  HIYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  IIYACTR;  /* YIELD */
A68_VC  JIYACTR;  /* avoid structure result */
A68_122  KIYACTR;  /* OPERATORS - mode -> union mode */
A68_122  NIYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  OIYACTR;  /* YIELD */
A68_122  PIYACTR;  /* OPERATORS - mode -> union mode */
A68_122  SIYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  TIYACTR;  /* YIELD */
A68_122  UIYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  VIYACTR;  /* YIELD */
A68_122  YIYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  ZIYACTR;  /* YIELD */
A68_122  AJYACTR;  /* OPERATORS - mode -> union mode */
A68_122  DJYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  EJYACTR;  /* YIELD */
A68_VC  FJYACTR;  /* OPERATORS - istruct -> vector */
A68_106  GJYACTR;  /* OPERATORS - istruct -> vector */
A68_122  HJYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  IJYACTR;  /* YIELD */
A68_VC  JJYACTR;  /* avoid structure result */
A68_122  KJYACTR;  /* OPERATORS - mode -> union mode */
A68_122  NJYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  OJYACTR;  /* YIELD */
A68_122  PJYACTR;  /* OPERATORS - mode -> union mode */
A68_122  SJYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  TJYACTR;  /* YIELD */
A68_122  WJYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  XJYACTR;  /* YIELD */
A68_INT  YJYACTR;  /* YIELD */
A68_VC  ZJYACTR;  /* avoid structure result */
A68_122  AKYACTR;  /* OPERATORS - mode -> union mode */
A68_122  DKYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  EKYACTR;  /* YIELD */
A68_122  FKYACTR;  /* OPERATORS - mode -> union mode */
A68_122  IKYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  JKYACTR;  /* YIELD */
A68_122  KKYACTR;  /* OPERATORS - mode -> union mode */
A68_122  NKYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  OKYACTR;  /* YIELD */
A68_122  PKYACTR;  /* OPERATORS - mode -> union mode */
A68_122  SKYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  TKYACTR;  /* YIELD */
A68_122  UKYACTR;  /* OPERATORS - mode -> union mode */
A68_121  VKYACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(writeconfiginfo);
{ 
 /* line 94: */
AEYACTR.data[0] = A_UNITE(BEYACTR,mode4,4,EIAACTR_cnewline);
FEYACTR = DEYACTR ;
AEYACTR.data[1] = A_UNITE(EEYACTR,mode2,2,FEYACTR);
 /* line 96: */
AEYACTR.data[2] = A_UNITE(GEYACTR,mode4,4,EIAACTR_cnewline);
KEYACTR = IEYACTR ;
AEYACTR.data[3] = A_UNITE(JEYACTR,mode2,2,KEYACTR);
VBMACTR_writecstream(A_HISVEC(LEYACTR,AEYACTR,4,A68_122 ), ZQLACTR_locdecstream(0));
 /* line 98: */
 /* line 99: */
LICAOSF_get_args(  &NEYACTR );
PEYACTR = NEYACTR.upb -1;
OEYACTR = NEYACTR.data;
for (;PEYACTR-- >= 0;
(OEYACTR++
) )
{
MEYACTR_arg = *OEYACTR;
 /* line 100: */
SEYACTR = '\"' ;
QEYACTR.data[0] = A_UNITE(REYACTR,mode1,1,SEYACTR);
QEYACTR.data[1] = A_UNITE(TEYACTR,mode2,2,MEYACTR_arg);
XEYACTR = VEYACTR ;
QEYACTR.data[2] = A_UNITE(WEYACTR,mode2,2,XEYACTR);
 /* line 101: */
VBMACTR_writecstream(A_HISVEC(YEYACTR,QEYACTR,3,A68_122 ), ZQLACTR_locdecstream(0));
}
 /* line 103: */
 /* line 104: */
DFYACTR = BFYACTR ;
ZEYACTR.data[0] = A_UNITE(CFYACTR,mode2,2,DFYACTR);
 /* line 106: */
ZEYACTR.data[1] = A_UNITE(EFYACTR,mode4,4,EIAACTR_cnewline);
IFYACTR = GFYACTR ;
ZEYACTR.data[2] = A_UNITE(HFYACTR,mode2,2,IFYACTR);
VBMACTR_writecstream(A_HISVEC(JFYACTR,ZEYACTR,3,A68_122 ), ZQLACTR_locdecstream(0));
 /* line 108: */
KFYACTR_env = (*(&((&BYIACTR_config_info)->Environment)));
 /* line 109: */
for ( ;; )
{ 
 /* line 110: */
 /* line 111: */
if ( !((KFYACTR_env!=WXIACTR_nil_envinfo)) ) break;
 /* line 112: */
NFYACTR = '\"' ;
LFYACTR.data[0] = A_UNITE(MFYACTR,mode1,1,NFYACTR);
PFYACTR = (*(&(KFYACTR_env->Env_name))) ;
LFYACTR.data[1] = A_UNITE(OFYACTR,mode2,2,PFYACTR);
RFYACTR = '=' ;
LFYACTR.data[2] = A_UNITE(QFYACTR,mode1,1,RFYACTR);
 /* line 113: */
TFYACTR = (*(&(KFYACTR_env->Env_value))) ;
LFYACTR.data[3] = A_UNITE(SFYACTR,mode2,2,TFYACTR);
XFYACTR = VFYACTR ;
LFYACTR.data[4] = A_UNITE(WFYACTR,mode2,2,XFYACTR);
VBMACTR_writecstream(A_HISVEC(YFYACTR,LFYACTR,5,A68_122 ), ZQLACTR_locdecstream(0));
 /* line 114: */
 /* line 115: */
KFYACTR_env = (*(&(KFYACTR_env->Next)));
}
 /* line 117: */
 /* line 118: */
DGYACTR = BGYACTR ;
ZFYACTR.data[0] = A_UNITE(CGYACTR,mode2,2,DGYACTR);
 /* line 120: */
ZFYACTR.data[1] = A_UNITE(EGYACTR,mode4,4,EIAACTR_cnewline);
IGYACTR = GGYACTR ;
ZFYACTR.data[2] = A_UNITE(HGYACTR,mode2,2,IGYACTR);
VBMACTR_writecstream(A_HISVEC(JGYACTR,ZFYACTR,3,A68_122 ), ZQLACTR_locdecstream(0));
 /* line 122: */
KGYACTR_mlist = (*(&((&BYIACTR_config_info)->Used_modules)));
 /* line 123: */
for ( ;; )
{ 
 /* line 124: */
 /* line 125: */
if ( !((KGYACTR_mlist!=VXIACTR_nil_modinfolist)) ) break;
 /* line 126: */
NGYACTR = '\"' ;
LGYACTR.data[0] = A_UNITE(MGYACTR,mode1,1,NGYACTR);
 /* line 127: */
PGYACTR = (*(&(KGYACTR_mlist->Modinfo_file))) ;
LGYACTR.data[1] = A_UNITE(OGYACTR,mode2,2,PGYACTR);
TGYACTR = RGYACTR ;
LGYACTR.data[2] = A_UNITE(SGYACTR,mode2,2,TGYACTR);
VBMACTR_writecstream(A_HISVEC(UGYACTR,LGYACTR,3,A68_122 ), ZQLACTR_locdecstream(0));
 /* line 128: */
 /* line 129: */
KGYACTR_mlist = (*(&(KGYACTR_mlist->Next)));
}
 /* line 131: */
 /* line 132: */
ZGYACTR = XGYACTR ;
VGYACTR.data[0] = A_UNITE(YGYACTR,mode2,2,ZGYACTR);
 /* line 133: */
VGYACTR.data[1] = A_UNITE(AHYACTR,mode4,4,EIAACTR_cnewline);
EHYACTR = CHYACTR ;
VGYACTR.data[2] = A_UNITE(DHYACTR,mode2,2,EHYACTR);
 /* line 134: */
VGYACTR.data[3] = A_UNITE(FHYACTR,mode4,4,EIAACTR_cnewline);
 /* line 135: */
JHYACTR = HHYACTR ;
VGYACTR.data[4] = A_UNITE(IHYACTR,mode2,2,JHYACTR);
VGYACTR.data[5] = A_UNITE(KHYACTR,mode4,4,EIAACTR_cnewline);
VBMACTR_writecstream(A_HISVEC(LHYACTR,VGYACTR,6,A68_122 ), ZQLACTR_locdecstream(0));
 /* line 137: */
 /* line 138: */
QHYACTR = OHYACTR ;
MHYACTR.data[0] = A_UNITE(PHYACTR,mode2,2,QHYACTR);
 /* line 139: */
MHYACTR.data[1] = A_UNITE(RHYACTR,mode4,4,EIAACTR_cnewline);
VHYACTR = THYACTR ;
MHYACTR.data[2] = A_UNITE(UHYACTR,mode2,2,VHYACTR);
MHYACTR.data[3] = A_UNITE(WHYACTR,mode2,2,BRIACTR_current_directory);
YHYACTR = '/' ;
MHYACTR.data[4] = A_UNITE(XHYACTR,mode1,1,YHYACTR);
MHYACTR.data[5] = A_UNITE(ZHYACTR,mode2,2,XQIACTR_sourcefilename);
DIYACTR = BIYACTR ;
MHYACTR.data[6] = A_UNITE(CIYACTR,mode2,2,DIYACTR);
 /* line 140: */
MHYACTR.data[7] = A_UNITE(EIYACTR,mode4,4,EIAACTR_cnewline);
IIYACTR = GIYACTR ;
MHYACTR.data[8] = A_UNITE(HIYACTR,mode2,2,IIYACTR);
YPBAOSF_local_time_str( (*(&((&BYIACTR_config_info)->Translationtime))), &JIYACTR );
MHYACTR.data[9] = A_UNITE(KIYACTR,mode2,2,JIYACTR);
OIYACTR = MIYACTR ;
MHYACTR.data[10] = A_UNITE(NIYACTR,mode2,2,OIYACTR);
 /* line 141: */
MHYACTR.data[11] = A_UNITE(PIYACTR,mode4,4,EIAACTR_cnewline);
TIYACTR = RIYACTR ;
MHYACTR.data[12] = A_UNITE(SIYACTR,mode2,2,TIYACTR);
VIYACTR = (*(&((&BYIACTR_config_info)->Version))) ;
MHYACTR.data[13] = A_UNITE(UIYACTR,mode2,2,VIYACTR);
ZIYACTR = XIYACTR ;
MHYACTR.data[14] = A_UNITE(YIYACTR,mode2,2,ZIYACTR);
 /* line 142: */
MHYACTR.data[15] = A_UNITE(AJYACTR,mode4,4,EIAACTR_cnewline);
EJYACTR = CJYACTR ;
MHYACTR.data[16] = A_UNITE(DJYACTR,mode2,2,EJYACTR);
 /* line 143: */
GJYACTR = (*(&((&BYIACTR_config_info)->Nameseed))) ;
IJYACTR = A_HISVEC(FJYACTR,GJYACTR,7,A68_CHAR ) ;
MHYACTR.data[17] = A_UNITE(HJYACTR,mode2,2,IJYACTR);
NKMACTR_nameseedoriginstring( (*(&((&BYIACTR_config_info)->Nameseedorigin))), &JJYACTR );
MHYACTR.data[18] = A_UNITE(KJYACTR,mode2,2,JJYACTR);
OJYACTR = MJYACTR ;
MHYACTR.data[19] = A_UNITE(NJYACTR,mode2,2,OJYACTR);
 /* line 144: */
MHYACTR.data[20] = A_UNITE(PJYACTR,mode4,4,EIAACTR_cnewline);
 /* line 145: */
TJYACTR = RJYACTR ;
MHYACTR.data[21] = A_UNITE(SJYACTR,mode2,2,TJYACTR);
if ( (MZOACTR_specs.dim[0].upb==0) )
{ 
XJYACTR = VJYACTR ;
MHYACTR.data[22] = A_UNITE(WJYACTR,mode2,2,XJYACTR);
} 
else
{ 
YJYACTR = 1 ;
YPBAOSF_local_time_str( (*(&((&A_R1INDEX(MZOACTR_specs,YJYACTR))->Timeoflastchange))), &ZJYACTR );
MHYACTR.data[22] = A_UNITE(AKYACTR,mode2,2,ZJYACTR);
} 
EKYACTR = CKYACTR ;
MHYACTR.data[23] = A_UNITE(DKYACTR,mode2,2,EKYACTR);
 /* line 146: */
MHYACTR.data[24] = A_UNITE(FKYACTR,mode4,4,EIAACTR_cnewline);
JKYACTR = HKYACTR ;
MHYACTR.data[25] = A_UNITE(IKYACTR,mode2,2,JKYACTR);
 /* line 147: */
MHYACTR.data[26] = A_UNITE(KKYACTR,mode4,4,EIAACTR_cnewline);
OKYACTR = MKYACTR ;
MHYACTR.data[27] = A_UNITE(NKYACTR,mode2,2,OKYACTR);
 /* line 148: */
MHYACTR.data[28] = A_UNITE(PKYACTR,mode4,4,EIAACTR_cnewline);
 /* line 149: */
TKYACTR = RKYACTR ;
MHYACTR.data[29] = A_UNITE(SKYACTR,mode2,2,TKYACTR);
MHYACTR.data[30] = A_UNITE(UKYACTR,mode4,4,EIAACTR_cnewline);
 /* line 150: */
VBMACTR_writecstream(A_HISVEC(VKYACTR,MHYACTR,31,A68_122 ), WQLACTR_codestream(0));
} 
A_PROC_EXIT(writeconfiginfo);
return;
} 
#undef NL
 /* line 154: */
 /* line 155: */
 /* line 156: */
 /* line 158: */

A68_VOID  BLYACTR_startroutine(A68_203  Routine, A68_110  Environ, A68_93  Paramdecnos, A68_INT  Resultmode, A68_154 * Resultvalue)
{ 
A68_154  CLYACTR;  /* collateral clause result */
A68_155  DLYACTR;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(startroutine);
 /* line 159: */
 /* line 161: */
{ 
 /* line 162: */
 /* line 163: */
 /* line 164: */
 /* line 165: */
 /* line 166: */
 /* line 168: */
DNWACTR_rddec(Routine.Name, Routine.Mode, Paramdecnos, Resultmode, Routine.Rdenno, Environ, Routine.Props);
 /* line 169: */
PBYACTR_writeinitialopencurly();
 /* line 170: */
WCYACTR_routine_entry_hook(Routine.Name);
 /* line 172: */
CLYACTR.Mode = Resultmode;
CLYACTR.Info = YIJACTR_defaultinfo;
 /* line 173: */
CLYACTR.Extra = A_EMPTY(DLYACTR,3);
GLYACTR_assignment(Resultvalue, (*GLYACTR_assignment(A_LOC(A68_154 ), CLYACTR)));
} 
A_PROC_EXIT(startroutine);
return;
} 
#undef NL

A68_VOID  ULYACTR_endroutine(A68_203  Routine, A68_154 * Result)
{ 
A68_BITS  VLYACTR;  /* ADICOPS - >= */
A68_BOOL  WLYACTR_generator;
A68_INT  XLYACTR_codestream;
A68_BOOL  YLYACTR;  /* optbool result */
A68_BOOL  ZLYACTR_usetempforresult;
A68_275  AMYACTR;  /* collateral clause result */
A68_122  DMYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  EMYACTR;  /* YIELD */
A68_122  FMYACTR;  /* OPERATORS - mode -> union mode */
A68_121  GMYACTR;  /* OPERATORS - istruct -> vector */
A68_277  HMYACTR;  /* collateral clause result */
A68_122  KMYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  LMYACTR;  /* YIELD */
A68_VC  MMYACTR;  /* avoid structure result */
A68_122  NMYACTR;  /* OPERATORS - mode -> union mode */
A68_122  QMYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  RMYACTR;  /* YIELD */
A68_122  SMYACTR;  /* OPERATORS - mode -> union mode */
A68_121  TMYACTR;  /* OPERATORS - istruct -> vector */
A68_275  UMYACTR;  /* collateral clause result */
A68_122  XMYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  YMYACTR;  /* YIELD */
A68_122  ZMYACTR;  /* OPERATORS - mode -> union mode */
A68_121  ANYACTR;  /* OPERATORS - istruct -> vector */
A68_277  BNYACTR;  /* collateral clause result */
A68_122  ENYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  FNYACTR;  /* YIELD */
A68_VC  GNYACTR;  /* avoid structure result */
A68_122  HNYACTR;  /* OPERATORS - mode -> union mode */
A68_122  KNYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  LNYACTR;  /* YIELD */
A68_122  MNYACTR;  /* OPERATORS - mode -> union mode */
A68_121  NNYACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(endroutine);
 /* line 176: */
 /* line 177: */
{ 
VLYACTR = Routine.Props ;
WLYACTR_generator = A_LB_GE(VLYACTR,FDAACTR_genprocbit);
 /* line 178: */
XLYACTR_codestream = WQLACTR_codestream(EQLACTR_currentlevel());
 /* line 179: */
 /* line 180: */
 /* line 181: */
if ( WLYACTR_generator )
{ 
/*SKIP*/;
} 
else
{ 
 /* line 182: */
if ( XRMACTR_dynamic((*(&(Result->Mode)))) )
{ 
 /* line 183: */
 /* line 184: */
if ( JPMACTR_isarray((*(&(Result->Mode)))) )
{ 
 /* line 185: */
/*SKIP*/;
} 
else
{ 
 /* line 186: */
 /* line 187: */
/*SKIP*/;
} 
} 
else
{ 
/*SKIP*/;
} 
} 
 /* line 189: */
LDYACTR_routine_exit_hook(Routine.Name);
 /* line 192: */
 /* line 193: */
YLYACTR = NQIACTR_nostructresultoption;
if ( YLYACTR )
{YLYACTR = ERMACTR_iscstruct((*(&(Result->Mode))));
}
ZLYACTR_usetempforresult = YLYACTR;
 /* line 195: */
 /* line 196: */
if ( ((*(&(Result->Mode)))==UEAACTR_voidmode) )
{ 
EMYACTR = CMYACTR ;
AMYACTR.data[0] = A_UNITE(DMYACTR,mode2,2,EMYACTR);
AMYACTR.data[1] = A_UNITE(FMYACTR,mode4,4,EIAACTR_cnewline);
 /* line 197: */
 /* line 198: */
VBMACTR_writecstream(A_HISVEC(GMYACTR,AMYACTR,2,A68_122 ), XLYACTR_codestream);
} 
else
{ 
 /* line 199: */
if ( ZLYACTR_usetempforresult )
{ 
 /* line 200: */
LMYACTR = JMYACTR ;
HMYACTR.data[0] = A_UNITE(KMYACTR,mode2,2,LMYACTR);
 /* line 201: */
PWPACTR_getcfragment( Result, &MMYACTR );
HMYACTR.data[1] = A_UNITE(NMYACTR,mode2,2,MMYACTR);
RMYACTR = PMYACTR ;
HMYACTR.data[2] = A_UNITE(QMYACTR,mode2,2,RMYACTR);
HMYACTR.data[3] = A_UNITE(SMYACTR,mode4,4,EIAACTR_cnewline);
VBMACTR_writecstream(A_HISVEC(TMYACTR,HMYACTR,4,A68_122 ), XLYACTR_codestream);
 /* line 202: */
YMYACTR = WMYACTR ;
UMYACTR.data[0] = A_UNITE(XMYACTR,mode2,2,YMYACTR);
UMYACTR.data[1] = A_UNITE(ZMYACTR,mode4,4,EIAACTR_cnewline);
 /* line 203: */
 /* line 204: */
VBMACTR_writecstream(A_HISVEC(ANYACTR,UMYACTR,2,A68_122 ), XLYACTR_codestream);
} 
else
{ 
 /* line 205: */
FNYACTR = DNYACTR ;
BNYACTR.data[0] = A_UNITE(ENYACTR,mode2,2,FNYACTR);
 /* line 206: */
PWPACTR_getcfragment( Result, &GNYACTR );
BNYACTR.data[1] = A_UNITE(HNYACTR,mode2,2,GNYACTR);
LNYACTR = JNYACTR ;
BNYACTR.data[2] = A_UNITE(KNYACTR,mode2,2,LNYACTR);
BNYACTR.data[3] = A_UNITE(MNYACTR,mode4,4,EIAACTR_cnewline);
 /* line 207: */
VBMACTR_writecstream(A_HISVEC(NNYACTR,BNYACTR,4,A68_122 ), XLYACTR_codestream);
} 
} 
 /* line 209: */
BCYACTR_writeclosingcurly();
 /* line 211: */
 /* line 212: */
ZLWACTR_completerddec();
} 
A_PROC_EXIT(endroutine);
return;
} 
#undef NL

A_STATIC A68_VOID  ONYACTR_globalenviron(A68_110  *ReturnedValue)
{ 
A68_110  PNYACTR;  /* clause result */
A_PROC_ENTRY(globalenviron);
PNYACTR = (*(&((&A_R1INDEX(FOKACTR_ids,GAAACTR_globalidno))->Environ)));
A_PROC_EXIT(globalenviron);
*ReturnedValue = (PNYACTR);
return;
} 
#undef NL

A68_VOID  SNYACTR_startmodule(A68_VC  Uniquename, A68_VC  Modulename)
{ 
A68_INT  TNYACTR_codestream;
A68_275  UNYACTR;  /* collateral clause result */
A68_122  XNYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  YNYACTR;  /* YIELD */
A68_122  ZNYACTR;  /* OPERATORS - mode -> union mode */
A68_121  AOYACTR;  /* OPERATORS - istruct -> vector */
A68_275  BOYACTR;  /* collateral clause result */
A68_122  EOYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  FOYACTR;  /* YIELD */
A68_122  GOYACTR;  /* OPERATORS - mode -> union mode */
A68_121  HOYACTR;  /* OPERATORS - istruct -> vector */
A68_288  IOYACTR;  /* collateral clause result */
A68_122  LOYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  MOYACTR;  /* YIELD */
A68_122  NOYACTR;  /* OPERATORS - mode -> union mode */
A68_122  QOYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  ROYACTR;  /* YIELD */
A68_122  SOYACTR;  /* OPERATORS - mode -> union mode */
A68_122  VOYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  WOYACTR;  /* YIELD */
A68_122  XOYACTR;  /* OPERATORS - mode -> union mode */
A68_121  YOYACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(startmodule);
 /* line 220: */
 /* line 221: */
{ 
TNYACTR_codestream = WQLACTR_codestream(EQLACTR_currentlevel());
 /* line 223: */
 /* line 226: */
 /* line 227: */
YNYACTR = WNYACTR ;
UNYACTR.data[0] = A_UNITE(XNYACTR,mode2,2,YNYACTR);
UNYACTR.data[1] = A_UNITE(ZNYACTR,mode4,4,EIAACTR_cnewline);
 /* line 228: */
VBMACTR_writecstream(A_HISVEC(AOYACTR,UNYACTR,2,A68_122 ), TNYACTR_codestream);
 /* line 230: */
PBYACTR_writeinitialopencurly();
 /* line 235: */
FOYACTR = DOYACTR ;
BOYACTR.data[0] = A_UNITE(EOYACTR,mode2,2,FOYACTR);
BOYACTR.data[1] = A_UNITE(GOYACTR,mode4,4,EIAACTR_cnewline);
VBMACTR_writecstream(A_HISVEC(HOYACTR,BOYACTR,2,A68_122 ), TNYACTR_codestream);
 /* line 237: */
DRPACTR_processcontexts();
 /* line 239: */
ZDYACTR_writeconfiginfo();
 /* line 241: */
 /* line 242: */
MOYACTR = KOYACTR ;
IOYACTR.data[0] = A_UNITE(LOYACTR,mode2,2,MOYACTR);
 /* line 245: */
IOYACTR.data[1] = A_UNITE(NOYACTR,mode4,4,EIAACTR_cnewline);
ROYACTR = POYACTR ;
IOYACTR.data[2] = A_UNITE(QOYACTR,mode2,2,ROYACTR);
 /* line 246: */
IOYACTR.data[3] = A_UNITE(SOYACTR,mode4,4,EIAACTR_cnewline);
 /* line 247: */
WOYACTR = UOYACTR ;
IOYACTR.data[4] = A_UNITE(VOYACTR,mode2,2,WOYACTR);
IOYACTR.data[5] = A_UNITE(XOYACTR,mode4,4,EIAACTR_cnewline);
VBMACTR_writecstream(A_HISVEC(YOYACTR,IOYACTR,6,A68_122 ), TNYACTR_codestream);
 /* line 249: */
 /* line 250: */
WCYACTR_routine_entry_hook(APYACTR);
} 
A_PROC_EXIT(startmodule);
return;
} 
#undef NL

A68_VOID  DPYACTR_startdecsmodule(A68_VC  Uniquename, A68_VC  Modulename)
{ 
A68_INT  EPYACTR_codestream;
A68_INT  FPYACTR_locdecstream;
A68_288  GPYACTR;  /* collateral clause result */
A68_122  JPYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  KPYACTR;  /* YIELD */
A68_122  LPYACTR;  /* OPERATORS - mode -> union mode */
A68_122  OPYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  PPYACTR;  /* YIELD */
A68_122  QPYACTR;  /* OPERATORS - mode -> union mode */
A68_122  TPYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  UPYACTR;  /* YIELD */
A68_122  VPYACTR;  /* OPERATORS - mode -> union mode */
A68_121  WPYACTR;  /* OPERATORS - istruct -> vector */
A68_275  XPYACTR;  /* collateral clause result */
A68_122  AQYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  BQYACTR;  /* YIELD */
A68_122  CQYACTR;  /* OPERATORS - mode -> union mode */
A68_121  DQYACTR;  /* OPERATORS - istruct -> vector */
A68_277  EQYACTR;  /* collateral clause result */
A68_122  HQYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  IQYACTR;  /* YIELD */
A68_122  JQYACTR;  /* OPERATORS - mode -> union mode */
A68_122  MQYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  NQYACTR;  /* YIELD */
A68_122  OQYACTR;  /* OPERATORS - mode -> union mode */
A68_121  PQYACTR;  /* OPERATORS - istruct -> vector */
A68_316  QQYACTR;  /* collateral clause result */
A68_36  TQYACTR;  /* OPERATORS - istruct -> vector */
A68_VC  UQYACTR;  /* avoid structure result */
A_PROC_ENTRY(startdecsmodule);
 /* line 260: */
 /* line 261: */
{ 
EPYACTR_codestream = WQLACTR_codestream(EQLACTR_currentlevel());
 /* line 262: */
FPYACTR_locdecstream = ZQLACTR_locdecstream(EQLACTR_currentlevel());
 /* line 266: */
 /* line 267: */
KPYACTR = IPYACTR ;
GPYACTR.data[0] = A_UNITE(JPYACTR,mode2,2,KPYACTR);
GPYACTR.data[1] = A_UNITE(LPYACTR,mode2,2,Uniquename);
PPYACTR = NPYACTR ;
GPYACTR.data[2] = A_UNITE(OPYACTR,mode2,2,PPYACTR);
GPYACTR.data[3] = A_UNITE(QPYACTR,mode2,2,Modulename);
 /* line 269: */
UPYACTR = SPYACTR ;
GPYACTR.data[4] = A_UNITE(TPYACTR,mode2,2,UPYACTR);
GPYACTR.data[5] = A_UNITE(VPYACTR,mode4,4,EIAACTR_cnewline);
 /* line 270: */
VBMACTR_writecstream(A_HISVEC(WPYACTR,GPYACTR,6,A68_122 ), EPYACTR_codestream);
 /* line 272: */
PBYACTR_writeinitialopencurly();
 /* line 274: */
 /* line 275: */
 /* line 276: */
BQYACTR = ZPYACTR ;
XPYACTR.data[0] = A_UNITE(AQYACTR,mode2,2,BQYACTR);
XPYACTR.data[1] = A_UNITE(CQYACTR,mode4,4,EIAACTR_cnewline);
 /* line 277: */
VBMACTR_writecstream(A_HISVEC(DQYACTR,XPYACTR,2,A68_122 ), FPYACTR_locdecstream);
 /* line 279: */
 /* line 280: */
IQYACTR = GQYACTR ;
EQYACTR.data[0] = A_UNITE(HQYACTR,mode2,2,IQYACTR);
 /* line 281: */
EQYACTR.data[1] = A_UNITE(JQYACTR,mode4,4,EIAACTR_cnewline);
 /* line 282: */
NQYACTR = LQYACTR ;
EQYACTR.data[2] = A_UNITE(MQYACTR,mode2,2,NQYACTR);
EQYACTR.data[3] = A_UNITE(OQYACTR,mode4,4,EIAACTR_cnewline);
 /* line 283: */
VBMACTR_writecstream(A_HISVEC(PQYACTR,EQYACTR,4,A68_122 ), EPYACTR_codestream);
 /* line 285: */
DRPACTR_processcontexts();
 /* line 287: */
ZDYACTR_writeconfiginfo();
 /* line 289: */
QQYACTR.data[0] = SQYACTR;
QQYACTR.data[1] = Modulename;
 /* line 290: */
JDAAOSF_concat( A_HISVEC(TQYACTR,QQYACTR,2,A68_VC ), &UQYACTR );
WCYACTR_routine_entry_hook(UQYACTR);
} 
A_PROC_EXIT(startdecsmodule);
return;
} 
#undef NL
 /* line 294: */
 /* line 296: */

A68_VOID  ZQYACTR_startprocmodule(A68_203  Routine, A68_VC  Uniquename, A68_VC  Modulename, A68_154 * Resultvalue)
{ 
A_PROC_ENTRY(startprocmodule);
 /* line 297: */
 /* line 298: */
 /* line 299: */
LXIACTR_terminalerror(809);
A_PROC_EXIT(startprocmodule);
return;
} 
#undef NL
 /* line 304: */

A68_VOID  DRYACTR_startcompositionmodule(A68_VC  Uniquename, A68_VC  Modulename, A68_BOOL  Partialcomposition)
{ 
A_PROC_ENTRY(startcompositionmodule);
 /* line 308: */
 /* line 309: */
 /* line 310: */
LXIACTR_terminalerror(806);
A_PROC_EXIT(startcompositionmodule);
return;
} 
#undef NL

A68_VOID  ERYACTR_endmodule(void)
{ 
A68_322  HRYACTR;  /* collateral clause result */
A68_122  KRYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  LRYACTR;  /* YIELD */
A68_122  MRYACTR;  /* OPERATORS - mode -> union mode */
A68_122  PRYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  QRYACTR;  /* YIELD */
A68_122  RRYACTR;  /* OPERATORS - mode -> union mode */
A68_122  URYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  VRYACTR;  /* YIELD */
A68_122  WRYACTR;  /* OPERATORS - mode -> union mode */
A68_122  ZRYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  ASYACTR;  /* YIELD */
A68_122  BSYACTR;  /* OPERATORS - mode -> union mode */
A68_121  CSYACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(endmodule);
{ 
LDYACTR_routine_exit_hook(GRYACTR);
 /* line 315: */
 /* line 316: */
LRYACTR = JRYACTR ;
HRYACTR.data[0] = A_UNITE(KRYACTR,mode2,2,LRYACTR);
 /* line 317: */
HRYACTR.data[1] = A_UNITE(MRYACTR,mode4,4,EIAACTR_cnewline);
QRYACTR = ORYACTR ;
HRYACTR.data[2] = A_UNITE(PRYACTR,mode2,2,QRYACTR);
 /* line 318: */
HRYACTR.data[3] = A_UNITE(RRYACTR,mode4,4,EIAACTR_cnewline);
VRYACTR = TRYACTR ;
HRYACTR.data[4] = A_UNITE(URYACTR,mode2,2,VRYACTR);
 /* line 319: */
HRYACTR.data[5] = A_UNITE(WRYACTR,mode4,4,EIAACTR_cnewline);
 /* line 320: */
ASYACTR = YRYACTR ;
HRYACTR.data[6] = A_UNITE(ZRYACTR,mode2,2,ASYACTR);
HRYACTR.data[7] = A_UNITE(BSYACTR,mode4,4,EIAACTR_cnewline);
VBMACTR_writecstream(A_HISVEC(CSYACTR,HRYACTR,8,A68_122 ), WQLACTR_codestream(EQLACTR_currentlevel()));
 /* line 321: */
 /* line 322: */
BCYACTR_writeclosingcurly();
} 
A_PROC_EXIT(endmodule);
return;
} 
#undef NL

A68_VOID  ESYACTR_enddecsmodule(A68_VC  Modulename)
{ 
A68_BOOL  FSYACTR;  /* optbool result */
A68_316  GSYACTR;  /* collateral clause result */
A68_36  JSYACTR;  /* OPERATORS - istruct -> vector */
A68_VC  KSYACTR;  /* avoid structure result */
A_PROC_ENTRY(enddecsmodule);
 /* line 325: */
 /* line 326: */
{ 
 /* line 327: */
if ( FZOACTR_previousversionfound )
{ 
 /* line 328: */
 /* line 330: */
FSYACTR = GZOACTR_rscompatiblewithpreviousversion;
if ( FSYACTR )
{FSYACTR = HZOACTR_transcompatiblewithpreviousversi;
}
if ( FSYACTR )
{ 
 /* line 331: */
ZWIACTR_comment(319);
} 
else
{ 
 /* line 332: */
 /* line 333: */
CXIACTR_warning(320);
} 
} 
 /* line 335: */
GSYACTR.data[0] = ISYACTR;
GSYACTR.data[1] = Modulename;
JDAAOSF_concat( A_HISVEC(JSYACTR,GSYACTR,2,A68_VC ), &KSYACTR );
LDYACTR_routine_exit_hook(KSYACTR);
 /* line 337: */
BCYACTR_writeclosingcurly();
 /* line 339: */
 /* line 340: */
YFPACTR_outputmoduleinformation();
} 
A_PROC_EXIT(enddecsmodule);
return;
} 
#undef NL
 /* line 345: */

A68_VOID  NSYACTR_completeprogram(A68_VC  Modulename, A68_105 * Autocomplabel)
{ 
A_PROC_ENTRY(completeprogram);
 /* line 351: */
 /* line 352: */
 /* line 353: */
PXIACTR_assert(PSYACTR, A68_FALSE);
A_PROC_EXIT(completeprogram);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 3: */
 /* line 4: */
 /* line 6: */
void KBYACTR(void)   /* initialise DECS entryandreturn */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/shields/projects/Algol68/Tools/Algol68toC/src/a68toc","-v","-uname","seedfile","-lib","/home/shields/projects/Algol68/Tools/Algol68toC/a68config","-dir","/home/shields/projects/Algol68/Tools/Algol68toC/a68config","-dir","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel","-dir",".","entryandreturn.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/shields/projects/Algol68/Tools/Algol68toC/a68config","A68_CDIR=","A68_DIR=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/shields/projects/Algol68/Tools/Algol68toC/a68config/a68config.m","./values.m","./uniquenameserver.m","./modules.m","./incmode.m","./incvalue.m","./incimperatives.m","./incid.m","./environment.m","./identifiers.m","./modes.m","./coutput.m","./environ.m","./centities.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/osif.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/usefulops.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
JRPACTR();   /* USE values */
AGMACTR();   /* USE uniquenameserver */
VJOACTR();   /* USE modules */
ZDAACTR();   /* USE incmode */
PIJACTR();   /* USE incvalue */
UAAACTR();   /* USE incimperatives */
BAAACTR();   /* USE incid */
HPIACTR();   /* USE environment */
WIVACTR();   /* USE identifiers */
MLMACTR();   /* USE modes */
YRLACTR();   /* USE coutput */
KNLACTR();   /* USE environ */
THAACTR();   /* USE centities */
WSCAOSF();   /* USE osif */
IKAAOSF();   /* USE usefulops */
/* --- Initialise configuration information */
A_config.source_file = "/home/shields/projects/Algol68/Tools/Algol68toC/src/entryandreturn.a68";
A_config.translation_time = "Sun Sep 26 21:51:07 2004";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "JBYACTR (from seed file) ";
A_config.spec_change_time = "Sun Sep 26 21:51:07 2004";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS entryandreturn);
UEAALIB_a68config(LGAALIB_configinfo, OBYACTR);
 /* line 46: */
 /* line 53: */
 /* line 54: */
 /* line 59: */
 /* line 66: */
 /* line 67: */
 /* line 76: */
 /* line 82: */
 /* line 88: */
 /* line 92: */
 /* line 93: */
 /* line 152: */
 /* line 153: */
 /* line 175: */
 /* line 214: */
 /* line 216: */
 /* line 252: */
 /* line 292: */
 /* line 293: */
 /* line 301: */
 /* line 302: */
 /* line 312: */
 /* line 313: */
 /* line 314: */
 /* line 324: */
 /* line 342: */
 /* line 343: */
 /* line 355: */
 /* line 357: */
 /* line 361: */
/*SKIP*/;
A_PROC_EXIT(DECS entryandreturn);
} 
#undef NL
/* end of translation of entryandreturn.a68 */
