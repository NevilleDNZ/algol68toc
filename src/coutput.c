/* UNAME:XRLACTR */
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
A68_INT  Number;
A_PAD_INT(PAD_1)
struct A68t55 * Facility;
A68_BITS  Class;
A_PAD_BITS(PAD_2)
};
typedef struct A68t54  A68_54 ;    /* STRUCT(INT,REF MODE55,BITS)  */
A_VECTOR(struct A68t57 ,A68t56);
typedef struct A68t56  A68_56 ;    /* VECTOR [] MODE57 */
struct A68t57{
struct A68t54  Msgno;
A68_VC  Text;
};
typedef struct A68t57  A68_57 ;    /* STRUCT(MODE54,REF MODE26)  */
struct A68t55{
A68_VC  Name;
struct A68t56  Messages;
};
typedef struct A68t55  A68_55 ;    /* STRUCT(REF MODE26,REF MODE56)  */

A_PROCEDURE(A68_VOID ,A68t58,(A68_BOOL ,A68_VC *),(A68_BOOL ,A68_VC *,void *));
typedef struct A68t58  A68_58 ;    /* PROC(BOOL) MODE26 */

A_PROCEDURE(A68_VOID ,A68t59,(A68_BOOL ,struct A68t36 *),(A68_BOOL ,struct A68t36 *,void *));
typedef struct A68t59  A68_59 ;    /* PROC(BOOL) MODE36 */

A_PROCEDURE(A68_VOID ,A68t60,(struct A68t54 ,struct A68t36 ),(struct A68t54 ,struct A68t36 ,void *));
typedef struct A68t60  A68_60 ;    /* PROC(MODE54,MODE36) VOID */
A_VECTOR(struct A68t63 ,A68t62);
typedef struct A68t62  A68_62 ;    /* VECTOR [] MODE63 */
struct A68t63{
A68_INT  Number;
A_PAD_INT(PAD_3)
A68_BITS  Class;
A_PAD_BITS(PAD_4)
A68_VC  Text;
};
typedef struct A68t63  A68_63 ;    /* STRUCT(INT,BITS,MODE26)  */
struct A68t61{
A68_VC  Name;
struct A68t56  Messages;
A68_BOOL * Initialised;
struct A68t62  Setup;
};
typedef struct A68t61  A68_61 ;    /* STRUCT(MODE26,REF MODE56,REF BOOL,MODE62)  */

A_PROCEDURE(A68_VOID ,A68t64,(A68_BOOL ,struct A68t61 *),(A68_BOOL ,struct A68t61 *,void *));
typedef struct A68t64  A68_64 ;    /* PROC(BOOL) MODE61 */
A_VECTOR(A68_VC ,A68t65);
typedef struct A68t65  A68_65 ;    /* VECTOR [] REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t66,(struct A68t36 ,struct A68t65 *),(struct A68t36 ,struct A68t65 *,void *));
typedef struct A68t66  A68_66 ;    /* PROC(MODE36) MODE65 */

A_PROCEDURE(A68_VOID ,A68t67,(struct A68t65 ,struct A68t36 *),(struct A68t65 ,struct A68t36 *,void *));
typedef struct A68t67  A68_67 ;    /* PROC(MODE65) MODE36 */
struct A68t69 ;

A_PROCEDURE(A68_BOOL ,A68t68,(struct A68t69 ),(struct A68t69 ,void *));
typedef struct A68t68  A68_68 ;    /* PROC(MODE69) BOOL */
struct A68t69 { A68_INT mode; union {
struct A68t54  mode1;
struct A68t57  mode2;
} data; };
typedef struct A68t69  A68_69 ;    /* UNION(MODE54,MODE57)  */

A_PROCEDURE(A68_INT ,A68t70,(struct A68t54 ),(struct A68t54 ,void *));
typedef struct A68t70  A68_70 ;    /* PROC(MODE54) INT */

A_PROCEDURE(A68_VOID ,A68t71,(A68_INT ,struct A68t61 ,struct A68t54 *),(A68_INT ,struct A68t61 ,struct A68t54 *,void *));
typedef struct A68t71  A68_71 ;    /* PROC(INT,MODE61) MODE54 */

A_PROCEDURE(A68_BOOL ,A68t72,(struct A68t54 ,struct A68t61 ),(struct A68t54 ,struct A68t61 ,void *));
typedef struct A68t72  A68_72 ;    /* PROC(MODE54,MODE61) BOOL */

A_PROCEDURE(A68_VOID ,A68t73,(struct A68t54 ,struct A68t36 ,struct A68t57 *),(struct A68t54 ,struct A68t36 ,struct A68t57 *,void *));
typedef struct A68t73  A68_73 ;    /* PROC(MODE54,MODE36) MODE57 */
struct A68t74{
A68_VC  Name;
A68_BITS * Stdiofile;
};
typedef struct A68t74  A68_74 ;    /* STRUCT(REF MODE26,REF BITS)  */
struct A68t75{
A68_INT  Status;
A_PAD_INT(PAD_5)
};
typedef struct A68t75  A68_75 ;    /* STRUCT(INT)  */

A_PROCEDURE(A68_BOOL ,A68t76,(struct A68t75 ,struct A68t75 ),(struct A68t75 ,struct A68t75 ,void *));
typedef struct A68t76  A68_76 ;    /* PROC(MODE75,MODE75) BOOL */
struct A68t77{
struct A68t40  Access;
A_PAD_ISTRUCT(A68_40 ,PAD_6)
};
typedef struct A68t77  A68_77 ;    /* STRUCT(MODE40)  */

A_PROCEDURE(A68_VOID ,A68t78,(struct A68t74 *,A68_VC *),(struct A68t74 *,A68_VC *,void *));
typedef struct A68t78  A68_78 ;    /* PROC(REF MODE74) MODE26 */

A_PROCEDURE(struct A68t74 *,A68t79,(A68_VC ,struct A68t77 ,struct A68t60 ),(A68_VC ,struct A68t77 ,struct A68t60 ,void *));
typedef struct A68t79  A68_79 ;    /* PROC(MODE26,MODE77,MODE60) REF MODE74 */

A_PROCEDURE(A68_VOID ,A68t80,(struct A68t74 *,struct A68t60 ),(struct A68t74 *,struct A68t60 ,void *));
typedef struct A68t80  A68_80 ;    /* PROC(REF MODE74,MODE60) VOID */

A_PROCEDURE(A68_VOID ,A68t81,(struct A68t74 *,A68_VC ,A68_INT *,struct A68t60 ,struct A68t75 *),(struct A68t74 *,A68_VC ,A68_INT *,struct A68t60 ,struct A68t75 *,void *));
typedef struct A68t81  A68_81 ;    /* PROC(REF MODE74,REF MODE26,REF INT,MODE60) MODE75 */

A_PROCEDURE(A68_VOID ,A68t82,(struct A68t74 *,A68_VC ,struct A68t60 ,struct A68t75 *),(struct A68t74 *,A68_VC ,struct A68t60 ,struct A68t75 *,void *));
typedef struct A68t82  A68_82 ;    /* PROC(REF MODE74,MODE26,MODE60) MODE75 */

A_PROCEDURE(A68_VOID ,A68t83,(struct A68t74 *,A68_LINT ,struct A68t60 ,struct A68t75 *),(struct A68t74 *,A68_LINT ,struct A68t60 ,struct A68t75 *,void *));
typedef struct A68t83  A68_83 ;    /* PROC(REF MODE74,LONG INT,MODE60) MODE75 */

A_PROCEDURE(A68_VOID ,A68t84,(struct A68t74 *,A68_LINT *,struct A68t60 ,struct A68t75 *),(struct A68t74 *,A68_LINT *,struct A68t60 ,struct A68t75 *,void *));
typedef struct A68t84  A68_84 ;    /* PROC(REF MODE74,REF LONG INT,MODE60) MODE75 */

A_PROCEDURE(A68_VOID ,A68t85,(struct A68t74 *,struct A68t60 ,struct A68t75 *),(struct A68t74 *,struct A68t60 ,struct A68t75 *,void *));
typedef struct A68t85  A68_85 ;    /* PROC(REF MODE74,MODE60) MODE75 */

A_PROCEDURE(A68_VOID ,A68t86,(A68_VC ,struct A68t60 ,struct A68t75 *),(A68_VC ,struct A68t60 ,struct A68t75 *,void *));
typedef struct A68t86  A68_86 ;    /* PROC(MODE26,MODE60) MODE75 */

A_PROCEDURE(A68_VOID ,A68t87,(A68_VC ,A68_VC ,struct A68t60 ,struct A68t75 *),(A68_VC ,A68_VC ,struct A68t60 ,struct A68t75 *,void *));
typedef struct A68t87  A68_87 ;    /* PROC(MODE26,MODE26,MODE60) MODE75 */

A_PROCEDURE(A68_VOID ,A68t88,(A68_VC ,A68_VC ,struct A68t60 ,A68_VC *),(A68_VC ,A68_VC ,struct A68t60 ,A68_VC *,void *));
typedef struct A68t88  A68_88 ;    /* PROC(MODE26,MODE26,MODE60) MODE26 */
struct A68t89{
A68_SBITS  Permissions;
A_PAD_SBITS(PAD_7)
A68_LBITS  Inode;
A_PAD_LBITS(PAD_8)
A68_SINT  Device;
A_PAD_SINT(PAD_9)
A68_SINT  Links;
A_PAD_SINT(PAD_10)
A68_SBITS  Owning_user;
A_PAD_SBITS(PAD_11)
A68_SBITS  Owning_group;
A_PAD_SBITS(PAD_12)
A68_LINT  Size;
A_PAD_LINT(PAD_13)
A68_LINT  Accessed;
A_PAD_LINT(PAD_14)
A68_LINT  Data_modified;
A_PAD_LINT(PAD_15)
A68_LINT  Status_modified;
A_PAD_LINT(PAD_16)
};
typedef struct A68t89  A68_89 ;    /* STRUCT(SHORT BITS,LONG BITS,SHORT INT,SHORT INT,SHORT BITS,SHORT BITS,LONG INT,LONG INT,LONG INT,LONG INT)  */
struct A68t91 ;

A_PROCEDURE(struct A68t89 *,A68t90,(struct A68t91 ,struct A68t60 ),(struct A68t91 ,struct A68t60 ,void *));
typedef struct A68t90  A68_90 ;    /* PROC(MODE91,MODE60) REF MODE89 */
struct A68t91 { A68_INT mode; union {
struct A68t74 * mode1;
A68_VC  mode2;
} data; };
typedef struct A68t91  A68_91 ;    /* UNION(REF MODE74,MODE26)  */

A_PROCEDURE(A68_BOOL ,A68t92,(struct A68t74 *),(struct A68t74 *,void *));
typedef struct A68t92  A68_92 ;    /* PROC(REF MODE74) BOOL */

A_PROCEDURE(A68_BITS *,A68t93,(A68_VC ,struct A68t60 ),(A68_VC ,struct A68t60 ,void *));
typedef struct A68t93  A68_93 ;    /* PROC(MODE26,MODE60) REF BITS */

A_PROCEDURE(A68_VOID ,A68t94,(A68_BITS *,struct A68t60 ),(A68_BITS *,struct A68t60 ,void *));
typedef struct A68t94  A68_94 ;    /* PROC(REF BITS,MODE60) VOID */

A_PROCEDURE(A68_VOID ,A68t95,(A68_BITS *,struct A68t60 ,A68_VC *),(A68_BITS *,struct A68t60 ,A68_VC *,void *));
typedef struct A68t95  A68_95 ;    /* PROC(REF BITS,MODE60) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t96,(A68_VC *),(A68_VC *,void *));
typedef struct A68t96  A68_96 ;    /* PROC MODE26 */

A_PROCEDURE(A68_VOID ,A68t97,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t97  A68_97 ;    /* PROC(MODE26) MODE26 */

A_PROCEDURE(A68_LINT ,A68t98,(void),(void *));
typedef struct A68t98  A68_98 ;    /* PROC LONG INT */

A_PROCEDURE(A68_VOID ,A68t99,(A68_LINT ,A68_VC *),(A68_LINT ,A68_VC *,void *));
typedef struct A68t99  A68_99 ;    /* PROC(LONG INT) MODE26 */

A_PROCEDURE(A68_VOID ,A68t100,(A68_INT ),(A68_INT ,void *));
typedef struct A68t100  A68_100 ;    /* PROC(INT) VOID */

A_PROCEDURE(A68_INT ,A68t101,(A68_VC ,struct A68t60 ),(A68_VC ,struct A68t60 ,void *));
typedef struct A68t101  A68_101 ;    /* PROC(MODE26,MODE60) INT */

A_PROCEDURE(A68_INT ,A68t102,(void),(void *));
typedef struct A68t102  A68_102 ;    /* PROC INT */
struct A68t103{
A68_VC  Filename;
A68_VC  Directory;
A68_VC  Name;
A68_VC  Type;
};
typedef struct A68t103  A68_103 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE26,REF MODE26)  */

A_PROCEDURE(A68_VOID ,A68t104,(A68_VC ,A68_VC ,struct A68t60 ,struct A68t103 *),(A68_VC ,A68_VC ,struct A68t60 ,struct A68t103 *,void *));
typedef struct A68t104  A68_104 ;    /* PROC(MODE26,MODE26,MODE60) MODE103 */

A_PROCEDURE(A68_VOID ,A68t105,(struct A68t36 *),(struct A68t36 *,void *));
typedef struct A68t105  A68_105 ;    /* PROC MODE36 */

A_PROCEDURE(A68_VOID ,A68t106,(A68_VC ,struct A68t60 ,struct A68t36 *),(A68_VC ,struct A68t60 ,struct A68t36 *,void *));
typedef struct A68t106  A68_106 ;    /* PROC(MODE26,MODE60) MODE36 */
struct A68t108 ;

A_PROCEDURE(A68_VOID ,A68t107,(struct A68t108 ,struct A68t60 ,struct A68t60 ),(struct A68t108 ,struct A68t60 ,struct A68t60 ,void *));
typedef struct A68t107  A68_107 ;    /* PROC(MODE108,MODE60,MODE60) VOID */
A_VECTOR(A68_INT ,A68t108);
typedef struct A68t108  A68_108 ;    /* VECTOR [] INT */

A_PROCEDURE(A68_VOID ,A68t109,(struct A68t108 ,struct A68t60 ),(struct A68t108 ,struct A68t60 ,void *));
typedef struct A68t109  A68_109 ;    /* PROC(MODE108,MODE60) VOID */

A_PROCEDURE(A68_VOID ,A68t110,(A68_INT ,struct A68t60 ,struct A68t60 *),(A68_INT ,struct A68t60 ,struct A68t60 *,void *));
typedef struct A68t110  A68_110 ;    /* PROC(INT,MODE60) MODE60 */

A_PROCEDURE(A68_VOID ,A68t111,(void),(void *));
typedef struct A68t111  A68_111 ;    /* PROC VOID */

A_PROCEDURE(A68_VOID ,A68t112,(A68_BITS ),(A68_BITS ,void *));
typedef struct A68t112  A68_112 ;    /* PROC(BITS) VOID */
struct A68t114 ;

A_PROCEDURE(A68_VOID ,A68t113,(struct A68t114 ),(struct A68t114 ,void *));
typedef struct A68t113  A68_113 ;    /* PROC(MODE114) VOID */

A_PROCEDURE(A68_VOID ,A68t114,(A68_VC ),(A68_VC ,void *));
typedef struct A68t114  A68_114 ;    /* PROC(MODE26) VOID */
struct A68t115{
A68_VC  Name;
A68_INT  Value;
A_PAD_INT(PAD_17)
};
typedef struct A68t115  A68_115 ;    /* STRUCT(MODE26,INT)  */

A_PROCEDURE(A68_VOID ,A68t116,(A68_BOOL ,struct A68t115 *),(A68_BOOL ,struct A68t115 *,void *));
typedef struct A68t116  A68_116 ;    /* PROC(BOOL) MODE115 */
struct A68t118 ;

A_PROCEDURE(A68_VOID ,A68t117,(struct A68t118 ,struct A68t60 ),(struct A68t118 ,struct A68t60 ,void *));
typedef struct A68t117  A68_117 ;    /* PROC(MODE118,MODE60) VOID */
A_VECTOR(struct A68t115 ,A68t118);
typedef struct A68t118  A68_118 ;    /* VECTOR [] MODE115 */
A_ISTRUCT(A68_CHAR ,7,A68t120);
typedef struct A68t120  A68_120 ;    /* STRUCT 7 CHAR */
struct A68t119{
struct A68t120  Name;
A_PAD_ISTRUCT(A68_120 ,PAD_18)
A68_BOOL  Set;
A_PAD_BOOL(PAD_19)
};
typedef struct A68t119  A68_119 ;    /* STRUCT(MODE120,BOOL)  */
struct A68t121{
A68_INT  Labno;
A_PAD_INT(PAD_20)
};
typedef struct A68t121  A68_121 ;    /* STRUCT(INT)  */

A_PROCEDURE(A68_INT ,A68t122,(A68_INT ),(A68_INT ,void *));
typedef struct A68t122  A68_122 ;    /* PROC(INT) INT */

A_PROCEDURE(A68_BOOL ,A68t123,(A68_INT ),(A68_INT ,void *));
typedef struct A68t123  A68_123 ;    /* PROC(INT) BOOL */
struct A68t124{
A68_INT  Level;
A_PAD_INT(PAD_21)
A68_INT  Block;
A_PAD_INT(PAD_22)
};
typedef struct A68t124  A68_124 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t125,(struct A68t124 *),(struct A68t124 *,void *));
typedef struct A68t125  A68_125 ;    /* PROC MODE124 */

A_PROCEDURE(A68_BOOL ,A68t126,(void),(void *));
typedef struct A68t126  A68_126 ;    /* PROC BOOL */

A_PROCEDURE(A68_BOOL ,A68t127,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t127  A68_127 ;    /* PROC(INT,INT) BOOL */

A_PROCEDURE(A68_VOID ,A68t128,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t128  A68_128 ;    /* PROC(INT,INT) VOID */

A_PROCEDURE(A68_BOOL ,A68t129,(struct A68t124 ,struct A68t124 ),(struct A68t124 ,struct A68t124 ,void *));
typedef struct A68t129  A68_129 ;    /* PROC(MODE124,MODE124) BOOL */

A_PROCEDURE(A68_BOOL ,A68t130,(struct A68t124 ),(struct A68t124 ,void *));
typedef struct A68t130  A68_130 ;    /* PROC(MODE124) BOOL */

A_PROCEDURE(A68_VOID ,A68t131,(A68_VC ,A68_BOOL ),(A68_VC ,A68_BOOL ,void *));
typedef struct A68t131  A68_131 ;    /* PROC(MODE26,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t132,(A68_VC ,A68_INT ),(A68_VC ,A68_INT ,void *));
typedef struct A68t132  A68_132 ;    /* PROC(MODE26,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t133,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t133  A68_133 ;    /* PROC(INT) REF MODE26 */
struct A68t135 ;

A_PROCEDURE(A68_VOID ,A68t134,(A68_INT ,struct A68t135 ),(A68_INT ,struct A68t135 ,void *));
typedef struct A68t134  A68_134 ;    /* PROC(INT,MODE135) VOID */
A_ROW(A68_VC ,A68t135,1);
typedef struct A68t135  A68_135 ;    /* [] MODE26 */

A_PROCEDURE(A68_BITS ,A68t136,(void),(void *));
typedef struct A68t136  A68_136 ;    /* PROC BITS */
struct A68t137{
A68_INT  Cfile;
A_PAD_INT(PAD_23)
};
typedef struct A68t137  A68_137 ;    /* STRUCT(INT)  */
struct A68t138{
A68_INT  Seedfile;
A_PAD_INT(PAD_24)
};
typedef struct A68t138  A68_138 ;    /* STRUCT(INT)  */
struct A68t139 { A68_INT mode; union {
struct A68t137  mode1;
struct A68t138  mode2;
struct A68t120  mode3;
} data; };
typedef struct A68t139  A68_139 ;    /* UNION(MODE137,MODE138,MODE120,VOID)  */
struct A68t140{
A68_VC  Version;
A68_LINT  Translationtime;
A_PAD_LINT(PAD_25)
A68_VC  Sourcefile;
struct A68t120  Nameseed;
A_PAD_ISTRUCT(A68_120 ,PAD_26)
struct A68t139  Nameseedorigin;
struct A68t141 * Used_modules;
A68_VC  Commandline;
struct A68t142 * Environment;
};
typedef struct A68t140  A68_140 ;    /* STRUCT(REF MODE26,LONG INT,REF MODE26,MODE120,MODE139,REF MODE141,REF MODE26,REF MODE142)  */
struct A68t141{
A68_VC  Modinfo_file;
struct A68t141 * Next;
};
typedef struct A68t141  A68_141 ;    /* STRUCT(REF MODE26,REF MODE141)  */
struct A68t142{
A68_VC  Env_name;
A68_VC  Env_value;
struct A68t142 * Next;
};
typedef struct A68t142  A68_142 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE142)  */
struct A68t144 ;

A_PROCEDURE(struct A68t74 *,A68t143,(A68_VC ,struct A68t144 *,A68_VC *),(A68_VC ,struct A68t144 *,A68_VC *,void *));
typedef struct A68t143  A68_143 ;    /* PROC(MODE26,REF MODE144,REF REF MODE26) REF MODE74 */
struct A68t144{
A68_VC  Dir;
struct A68t144 * Next;
};
typedef struct A68t144  A68_144 ;    /* STRUCT(REF MODE26,REF MODE144)  */

A_PROCEDURE(A68_BOOL ,A68t145,(A68_INT ,A68_VC ),(A68_INT ,A68_VC ,void *));
typedef struct A68t145  A68_145 ;    /* PROC(INT,MODE26) BOOL */

A_PROCEDURE(A68_VOID ,A68t146,(struct A68t111 ),(struct A68t111 ,void *));
typedef struct A68t146  A68_146 ;    /* PROC(MODE111) VOID */

A_PROCEDURE(A68_VOID ,A68t147,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t147  A68_147 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,62,A68t148);
typedef struct A68t148  A68_148 ;    /* STRUCT 62 CHAR */
struct A68t149 { A68_INT mode; union {
A68_CHAR  mode1;
A68_VC  mode2;
A68_INT  mode3;
A68_SINT  mode4;
} data; };
typedef struct A68t149  A68_149 ;    /* UNION(CHAR,MODE26,INT,SHORT INT)  */
struct A68t150 { A68_INT mode; union {
A68_CHAR  mode1;
A68_VC  mode2;
A68_SINT  mode3;
} data; };
typedef struct A68t150  A68_150 ;    /* UNION(CHAR,MODE26,SHORT INT)  */
A_ISTRUCT(A68_CHAR ,19,A68t151);
typedef struct A68t151  A68_151 ;    /* STRUCT 19 CHAR */
A_VECTOR(struct A68t150 ,A68t152);
typedef struct A68t152  A68_152 ;    /* VECTOR [] MODE150 */

A_PROCEDURE(A68_VOID ,A68t153,(struct A68t152 ),(struct A68t152 ,void *));
typedef struct A68t153  A68_153 ;    /* PROC(MODE152) VOID */
A_ISTRUCT(A68_CHAR ,2,A68t154);
typedef struct A68t154  A68_154 ;    /* STRUCT 2 CHAR */
A_ISTRUCT(A68_CHAR ,1,A68t155);
typedef struct A68t155  A68_155 ;    /* STRUCT 0 CHAR */
struct A68t156{
A68_VC  Data;
struct A68t156 * Next;
};
typedef struct A68t156  A68_156 ;    /* STRUCT(REF MODE26,REF MODE156)  */
struct A68t157{
struct A68t156 * First_chunk;
struct A68t156 * Current_chunk;
A68_INT  Pos;
A_PAD_INT(PAD_27)
A68_INT  Status;
A_PAD_INT(PAD_28)
};
typedef struct A68t157  A68_157 ;    /* STRUCT(REF MODE156,REF MODE156,INT,INT)  */
struct A68t158{
struct A68t74 * File;
A68_INT  Status;
A_PAD_INT(PAD_29)
};
typedef struct A68t158  A68_158 ;    /* STRUCT(REF MODE74,INT)  */
struct A68t159 { A68_INT mode; union {
struct A68t158 * mode1;
struct A68t157 * mode2;
} data; };
typedef struct A68t159  A68_159 ;    /* UNION(REF MODE158,REF MODE157,VOID)  */
A_ISTRUCT(struct A68t159 ,21,A68t160);
typedef struct A68t160  A68_160 ;    /* STRUCT 21 MODE159 */
A_ROW(struct A68t159 ,A68t161,1);
typedef struct A68t161  A68_161 ;    /* [] MODE159 */
A_VECTOR(struct A68t159 ,A68t162);
typedef struct A68t162  A68_162 ;    /* VECTOR [] MODE159 */
A_ISTRUCT(A68_CHAR ,5,A68t163);
typedef struct A68t163  A68_163 ;    /* STRUCT 5 CHAR */

A_PROCEDURE(A68_VOID ,A68t164,(struct A68t149 ,struct A68t159 ),(struct A68t149 ,struct A68t159 ,void *));
typedef struct A68t164  A68_164 ;    /* PROC(MODE149,MODE159) VOID */
A_ISTRUCT(A68_CHAR ,6,A68t165);
typedef struct A68t165  A68_165 ;    /* STRUCT 6 CHAR */
A_ISTRUCT(A68_CHAR ,16,A68t166);
typedef struct A68t166  A68_166 ;    /* STRUCT 16 CHAR */

A_PROCEDURE(A68_VOID ,A68t167,(struct A68t157 *,A68_VC ),(struct A68t157 *,A68_VC ,void *));
typedef struct A68t167  A68_167 ;    /* PROC(REF MODE157,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,15,A68t168);
typedef struct A68t168  A68_168 ;    /* STRUCT 15 CHAR */

A_PROCEDURE(A68_VOID ,A68t169,(A68_INT ,struct A68t164 *),(A68_INT ,struct A68t164 *,void *));
typedef struct A68t169  A68_169 ;    /* PROC(INT) MODE164 */

A_PROCEDURE(A68_VOID ,A68t170,(A68_BOOL ,struct A68t161 *),(A68_BOOL ,struct A68t161 *,void *));
typedef struct A68t170  A68_170 ;    /* PROC(BOOL) MODE161 */
A_ISTRUCT(A68_CHAR ,23,A68t171);
typedef struct A68t171  A68_171 ;    /* STRUCT 23 CHAR */
A_ISTRUCT(A68_CHAR ,22,A68t172);
typedef struct A68t172  A68_172 ;    /* STRUCT 22 CHAR */
A_ISTRUCT(A68_CHAR ,18,A68t173);
typedef struct A68t173  A68_173 ;    /* STRUCT 18 CHAR */
A_ISTRUCT(A68_CHAR ,14,A68t174);
typedef struct A68t174  A68_174 ;    /* STRUCT 14 CHAR */
A_VECTOR(struct A68t149 ,A68t175);
typedef struct A68t175  A68_175 ;    /* VECTOR [] MODE149 */

A_PROCEDURE(A68_VOID ,A68t176,(struct A68t175 ,A68_INT ),(struct A68t175 ,A68_INT ,void *));
typedef struct A68t176  A68_176 ;    /* PROC(MODE175,INT) VOID */

A_PROCEDURE(A68_CHAR ,A68t177,(void),(void *));
typedef struct A68t177  A68_177 ;    /* PROC CHAR */
A_ISTRUCT(A68_CHAR ,42,A68t178);
typedef struct A68t178  A68_178 ;    /* STRUCT 42 CHAR */
A_ISTRUCT(A68_CHAR ,21,A68t179);
typedef struct A68t179  A68_179 ;    /* STRUCT 21 CHAR */
A_ISTRUCT(A68_CHAR ,32,A68t180);
typedef struct A68t180  A68_180 ;    /* STRUCT 32 CHAR */
A_ISTRUCT(A68_VC ,2,A68t181);
typedef struct A68t181  A68_181 ;    /* STRUCT 2 MODE26 */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from moduletracer --- */
extern A68_INT  ZCHACTR_tracelevel(A68_VC );
/* --- End of imports from moduletracer --- */


/* --- Imports from environment --- */
extern A68_VOID  PXIACTR_assert(A68_VC ,A68_BOOL );
extern A68_VC  YQIACTR_basenamesourcefile;
extern A68_VC  ZQIACTR_sourcefilesuffix;
extern A68_INT  QRIACTR_linenumber;
extern A68_BOOL  BQIACTR_lineoption;
extern A68_VOID  UWIACTR_pterminalerror(A68_INT ,struct A68t135 );
extern A68_INT  WQIACTR_cstream_policy;
extern A68_BOOL  QQIACTR_checkoption;
extern A68_BOOL  SQIACTR_tempfileoption;
/* --- End of imports from environment --- */


/* --- Imports from environ --- */
#define MQLACTR_streams_per_level 4
/* --- End of imports from environ --- */


/* --- Imports from centities --- */
/* --- End of imports from centities --- */


/* --- Imports from osif --- */
#include <errno.h>

#define RCBAOSF_errno errno
extern A68_60  RIBAOSF_ignore_msg;
extern A68_74 * TSBAOSF_nil_file;
#define HVBAOSF_newline_char '\012'
extern A68_BOOL  BVBAOSF_(struct A68t75 ,struct A68t75 );
extern A68_75  VUBAOSF_io_error;
extern A68_74 * RVBAOSF_open_file(A68_VC ,struct A68t77 ,struct A68t60 );
extern A68_VOID  JWBAOSF_close_file(struct A68t74 *,struct A68t60 );
extern A68_VOID  TWBAOSF_read_buffer(struct A68t74 *,A68_VC ,A68_INT *,struct A68t60 ,A68_75 *);
extern A68_VOID  VXBAOSF_write_buffer(struct A68t74 *,A68_VC ,struct A68t60 ,A68_75 *);
extern A68_77  BTBAOSF_read_access;
extern A68_77  FTBAOSF_write_access;
extern A68_VOID  HZBAOSF_delete_file(A68_VC ,struct A68t60 ,A68_75 *);
#include <unistd.h>
#define EXIT(status) exit(A_INT_int(status))

#define APBAOSF_exit EXIT
extern int A_argc;
extern char **A_argv;
extern char **A_envp;
#define A_prelude(argc,argv,envp) A_argc=argc; A_argv=argv; A_envp=envp

#define XHCAOSF_prelude A_prelude
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


/* --- Imports from messageproc --- */
extern A68_VOID  EABAOSF_translate_msg(struct A68t54 ,struct A68t36 ,A68_57 *);
/* --- End of imports from messageproc --- */


/* --- Imports from usefulops --- */
extern A68_INT  GOAAOSF_stringvalue(A68_VC );
extern A68_VOID  ROAAOSF_whole(A68_INT ,A68_INT ,A68_VC *);
/* --- End of imports from usefulops --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void BCHACTR(void);   /* moduletracer */
extern void HPIACTR(void);   /* environment */
extern void KNLACTR(void);   /* environ */
extern void THAACTR(void);   /* centities */
extern void WSCAOSF(void);   /* osif */
extern void ZRAAOSF(void);   /* messageproc */
extern void IKAAOSF(void);   /* usefulops */
/* --- end of DECS initialisation functions --- */
static A68_148   BSLACTR = {"$Id: coutput.c,v 1.5.2.4 2004/09/27 03:04:17 teshields Exp $"}; 
A_GISVEC(A68_VC ,CSLACTR,BSLACTR,62)
static A68_58  DSLACTR_anonymous;
static A68_58  ESLACTR_anonymous;
A68_111  PSLACTR_purgeoutputfiles;
static A68_VC  TSLACTR_modulename;
static A68_BOOL  USLACTR_initialised;
static A68_151   XSLACTR = {"already initialised"}; 
A_GISVEC(A68_VC ,YSLACTR,XSLACTR,19)
static A68_BOOL  GTLACTR_modinfoopen;
static A68_74 * HTLACTR_modinfo;
static A68_154   KTLACTR = {".m"}; 
A_GISVEC(A68_VC ,LTLACTR,KTLACTR,2)
static A68_154   NTLACTR = {".m"}; 
A_GISVEC(A68_VC ,OTLACTR,NTLACTR,2)
static A68_155   ZTLACTR = {""}; 
A_GISVEC(A68_VC ,AULACTR,ZTLACTR,0)
static A68_155   CULACTR = {""}; 
A_GISVEC(A68_VC ,DULACTR,CULACTR,0)
static A68_154   GULACTR = {".m"}; 
A_GISVEC(A68_VC ,HULACTR,GULACTR,2)
#define JULACTR_openforreading 1
#define KULACTR_openforwriting 2
#define LULACTR_notopen 3
static A68_160  MULACTR_initialcstreams;
static A68_161  NULACTR_cstreams;
static A68_159 * RULACTR_stream;
static A68_CHAR  UULACTR_ceditid;
static A68_163   XULACTR = {"/tmp/"}; 
A_GISVEC(A68_VC ,ZULACTR,XULACTR,5)
static A68_155   AVLACTR = {""}; 
A_GISVEC(A68_VC ,BVLACTR,AVLACTR,0)
#define FVLACTR_chunksize 5000
static A68_165   HWLACTR = {"#line "}; 
A_GISVEC(A68_VC ,IWLACTR,HWLACTR,6)
static A68_154   NWLACTR = {" \""}; 
A_GISVEC(A68_VC ,OWLACTR,NWLACTR,2)
static A68_151   WWLACTR = {"invalid COUTPUTMODE"}; 
A_GISVEC(A68_VC ,XWLACTR,WWLACTR,19)
static A68_166   YWLACTR = {"not a FILESTREAM"}; 
A_GISVEC(A68_VC ,ZWLACTR,YWLACTR,16)
static A68_165   XYLACTR = {"#line "}; 
A_GISVEC(A68_VC ,YYLACTR,XYLACTR,6)
static A68_154   BZLACTR = {" \""}; 
A_GISVEC(A68_VC ,CZLACTR,BZLACTR,2)
static A68_151   FZLACTR = {"invalid COUTPUTMODE"}; 
A_GISVEC(A68_VC ,GZLACTR,FZLACTR,19)
static A68_168   HZLACTR = {"not a MEMSTREAM"}; 
A_GISVEC(A68_VC ,IZLACTR,HZLACTR,15)
static A68_171   IAMACTR = {"FILESTREAM not writable"}; 
A_GISVEC(A68_VC ,JAMACTR,IAMACTR,23)
static A68_172   MAMACTR = {"MEMSTREAM not writable"}; 
A_GISVEC(A68_VC ,NAMACTR,MAMACTR,22)
static A68_173   NBMACTR = {"bad cstream policy"}; 
A_GISVEC(A68_VC ,OBMACTR,NBMACTR,18)
static A68_174   QBMACTR = {"corrupt stream"}; 
A_GISVEC(A68_VC ,RBMACTR,QBMACTR,14)
static A68_163   FCMACTR = {"/tmp/"}; 
A_GISVEC(A68_VC ,HCMACTR,FCMACTR,5)
static A68_155   ICMACTR = {""}; 
A_GISVEC(A68_VC ,JCMACTR,ICMACTR,0)
static A68_154   KCMACTR = {".c"}; 
A_GISVEC(A68_VC ,LCMACTR,KCMACTR,2)
static A68_154   NCMACTR = {".c"}; 
A_GISVEC(A68_VC ,OCMACTR,NCMACTR,2)
static A68_178   BEMACTR = {"attempt to read on stream open for writing"}; 
A_GISVEC(A68_VC ,CEMACTR,BEMACTR,42)
static A68_179   JEMACTR = {"invalid stream status"}; 
A_GISVEC(A68_VC ,KEMACTR,JEMACTR,21)
static A68_178   MEMACTR = {"attempt to read on stream open for writing"}; 
A_GISVEC(A68_VC ,NEMACTR,MEMACTR,42)
static A68_179   QEMACTR = {"invalid stream status"}; 
A_GISVEC(A68_VC ,REMACTR,QEMACTR,21)
static A68_180   SEMACTR = {"attempt to read unwritten stream"}; 
A_GISVEC(A68_VC ,TEMACTR,SEMACTR,32)
static A68_174   UEMACTR = {"corrupt stream"}; 
A_GISVEC(A68_VC ,VEMACTR,UEMACTR,14)
static A68_120   VFMACTR = {"coutput"}; 
A_GISVEC(A68_VC ,WFMACTR,VFMACTR,7)
typedef struct   /* env of non-global proc */
{
A68_VC  Modname;
} CTLACTR_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} SXLACTR_generator;
typedef struct   /* env of non-global proc */
{
A68_INT * NZLACTR_newupb;
} RZLACTR_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} CBMACTR_generator;
typedef struct   /* env of non-global proc */
{
A68_158 ** ADMACTR_currentfilestream;
A68_jmp_buf  DCMACTR_endofstreams;
A_PAD_jmp_buf(PAD_30)
} EDMACTR_filestreamchar;
typedef struct   /* env of non-global proc */
{
A68_157 ** BDMACTR_currentmemstream;
A68_jmp_buf  DCMACTR_endofstreams;
A_PAD_jmp_buf(PAD_31)
A68_177  KDMACTR_memstreamchar;
} MDMACTR_memstreamchar;
typedef struct   /* env of non-global proc */
{
A68_158 ** ADMACTR_currentfilestream;
A68_177 * UDMACTR_streamchar;
A68_177  CDMACTR_filestreamchar;
A68_157 ** BDMACTR_currentmemstream;
A68_177  KDMACTR_memstreamchar;
} YDMACTR_selectstream;

A_STATIC A68_VOID  GSLACTR_generator(A68_BOOL  FSLACTR_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  LSLACTR_generator(A68_BOOL  KSLACTR_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  SSLACTR_coutputerror(A68_INT  Message, A68_135  Parameters);

A68_VOID  WSLACTR_initcoutput(A68_VC  Modname);

A_STATIC A68_VOID  BTLACTR_generator(A68_BOOL  ZSLACTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  JTLACTR_writemodinfo(A68_152  Params);

A_STATIC A68_VOID  WULACTR_streamfilename(A68_INT  Streamno, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  IVLACTR_writefilestream(A68_149  Item, A68_159  Stream);

A_STATIC A68_VOID  LVLACTR_anonymous(A68_54  Msgno, A68_36  Params);

A_STATIC A68_VOID  CXLACTR_write_mem(A68_157 * Ms, A68_VC  Buf);

A_STATIC A68_VOID  RXLACTR_generator(A68_BOOL  PXLACTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  CYLACTR_writememstream(A68_149  Item, A68_159  Stream);

A_STATIC A68_VOID  FYLACTR_anonymous(A68_54  Msgno, A68_36  Params);

A_STATIC A68_VOID  KZLACTR_checkstreamwritable(A68_INT  Streamno, A68_164  *ReturnedValue);

A_STATIC A68_VOID  QZLACTR_generator(A68_BOOL  OZLACTR_anonymous, A68_161  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  BBMACTR_generator(A68_BOOL  ZAMACTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  VBMACTR_writecstream(A68_175  Params, A68_INT  Streamno);

A68_VOID  BCMACTR_closecoutput(void);

A_STATIC A68_CHAR  DDMACTR_filestreamchar(void *NonLocals);

A_STATIC A68_CHAR  LDMACTR_memstreamchar(void *NonLocals);

A_STATIC A68_VOID  XDMACTR_selectstream(A68_INT  Streamno, void *NonLocals);

A_STATIC A68_VOID  YEMACTR_anonymous(A68_54  Msgno, A68_36  Params);

A_STATIC A68_VOID  PFMACTR_anonymous(void);

A_STATIC A68_VOID  BTLACTR_generator(A68_BOOL  ZSLACTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((CTLACTR_generator *)NonLocals)->x)
{ 
A68_VC  DTLACTR;  /* clause result */
A68_VC  ETLACTR;  /* OPERATORS - dynamic generator */
{ 
ETLACTR.upb = NL(Modname).upb ;
( ZSLACTR_anonymous? A_VLOC(A68_CHAR ,ETLACTR): A_VHEAP(A68_CHAR ,ETLACTR) );
DTLACTR = ETLACTR;
} 
*ReturnedValue = (DTLACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  LVLACTR_anonymous(A68_54  Msgno, A68_36  Params)
{ 
A68_57  MVLACTR;  /* avoid structure result */
A68_57  NVLACTR_mess;
A68_135  OVLACTR;  /* OPERATORS - scalar -> [] or VEC[] */
 /* line 170: */
{ 
EABAOSF_translate_msg( Msgno, Params, &MVLACTR );
NVLACTR_mess = MVLACTR;
 /* line 171: */
 /* line 172: */
SSLACTR_coutputerror(714, A_HARR(OVLACTR,NVLACTR_mess.Text,A68_VC ));
} 
return;
} 
#undef NL

A_STATIC A68_VOID  RXLACTR_generator(A68_BOOL  PXLACTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((SXLACTR_generator *)NonLocals)->x)
{ 
A68_VC  TXLACTR;  /* clause result */
A68_VC  UXLACTR;  /* OPERATORS - dynamic generator */
{ 
UXLACTR.upb = FVLACTR_chunksize ;
( PXLACTR_anonymous? A_VLOC(A68_CHAR ,UXLACTR): A_VHEAP(A68_CHAR ,UXLACTR) );
TXLACTR = UXLACTR;
} 
*ReturnedValue = (TXLACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  FYLACTR_anonymous(A68_54  Msgno, A68_36  Params)
{ 
A68_57  GYLACTR;  /* avoid structure result */
A68_57  HYLACTR_mess;
A68_135  IYLACTR;  /* OPERATORS - scalar -> [] or VEC[] */
 /* line 234: */
{ 
EABAOSF_translate_msg( Msgno, Params, &GYLACTR );
HYLACTR_mess = GYLACTR;
 /* line 235: */
 /* line 236: */
SSLACTR_coutputerror(714, A_HARR(IYLACTR,HYLACTR_mess.Text,A68_VC ));
} 
return;
} 
#undef NL

A_STATIC A68_VOID  QZLACTR_generator(A68_BOOL  OZLACTR_anonymous, A68_161  *ReturnedValue, void *NonLocals)
#define NL(x) (((RZLACTR_generator *)NonLocals)->x)
{ 
A68_161  SZLACTR;  /* clause result */
A68_161  TZLACTR;  /* OPERATORS - dynamic generator */
{ 
TZLACTR.dim[0].upb = (*NL(NZLACTR_newupb)) ;
TZLACTR.dim[0].lwb = 0 ;
A_1INITSTRIDES(TZLACTR) ;
( OZLACTR_anonymous? A_R1LOC(A68_159 ,TZLACTR): A_R1HEAP(A68_159 ,TZLACTR) );
SZLACTR = TZLACTR;
} 
*ReturnedValue = (SZLACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  BBMACTR_generator(A68_BOOL  ZAMACTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((CBMACTR_generator *)NonLocals)->x)
{ 
A68_VC  DBMACTR;  /* clause result */
A68_VC  EBMACTR;  /* OPERATORS - dynamic generator */
{ 
EBMACTR.upb = FVLACTR_chunksize ;
( ZAMACTR_anonymous? A_VLOC(A68_CHAR ,EBMACTR): A_VHEAP(A68_CHAR ,EBMACTR) );
DBMACTR = EBMACTR;
} 
*ReturnedValue = (DBMACTR);
return;
} 
#undef NL

A_STATIC A68_CHAR  DDMACTR_filestreamchar(void *NonLocals)
#define NL(x) (((EDMACTR_filestreamchar *)NonLocals)->x)
{ 
A68_CHAR  FDMACTR_c;
A68_INT  GDMACTR_charsread;
A68_VC  HDMACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_75  IDMACTR;  /* avoid structure result */
A68_CHAR  JDMACTR;  /* clause result */
A_PROC_ENTRY(filestreamchar);
{ 
 /* line 388: */
TWBAOSF_read_buffer( (*(&((*NL(ADMACTR_currentfilestream))->File))), A_VEC(HDMACTR,(&FDMACTR_c),A68_CHAR *), (&GDMACTR_charsread), RIBAOSF_ignore_msg, &IDMACTR );
IDMACTR;
 /* line 389: */
if ( (GDMACTR_charsread!=1) )
{ 
siglongjmp(NL(DCMACTR_endofstreams).label,1);
} 
 /* line 390: */
 /* line 391: */
JDMACTR = FDMACTR_c;
} 
A_PROC_EXIT(filestreamchar);
return( JDMACTR );
} 
#undef NL

A_STATIC A68_CHAR  LDMACTR_memstreamchar(void *NonLocals)
#define NL(x) (((MDMACTR_memstreamchar *)NonLocals)->x)
{ 
A68_156 * NDMACTR_current_chunk;
A68_VC  ODMACTR_current_data;
A68_INT * PDMACTR_pos;
A68_BOOL  QDMACTR;  /* clause result */
A68_CHAR  RDMACTR_c;
A68_CHAR  SDMACTR;  /* clause result */
A68_156 ** TDMACTR;  /* YIELD */
A_PROC_ENTRY(memstreamchar);
{ 
NDMACTR_current_chunk = (*(&((*NL(BDMACTR_currentmemstream))->Current_chunk)));
 /* line 399: */
ODMACTR_current_data = (*(&(NDMACTR_current_chunk->Data)));
 /* line 400: */
PDMACTR_pos = (&((*NL(BDMACTR_currentmemstream))->Pos));
 /* line 401: */
 /* line 402: */
 /* line 404: */
QDMACTR = ((*PDMACTR_pos)<=ODMACTR_current_data.upb);
if ( QDMACTR )
{ 
RDMACTR_c = (*(&A_VINDEX(ODMACTR_current_data,(*PDMACTR_pos))));
 /* line 405: */
(*PDMACTR_pos)+=1;
 /* line 406: */
 /* line 407: */
 /* line 408: */
SDMACTR = RDMACTR_c;
} 
else
{ 
 /* line 409: */
 /* line 411: */
if ( ((*(&(NDMACTR_current_chunk->Next)))==(A68_156 *)A68_NIL) )
{ 
 /* line 412: */
 /* line 414: */
siglongjmp(NL(DCMACTR_endofstreams).label,1) ;
SDMACTR = (*(A68_CHAR *)A68_NIL);
} 
else
{ 
TDMACTR = (&((*NL(BDMACTR_currentmemstream))->Current_chunk)) ;
(*TDMACTR) = (*(&(NDMACTR_current_chunk->Next)));
 /* line 415: */
(*PDMACTR_pos) = 1;
 /* line 416: */
 /* line 417: */
SDMACTR = A_CALLPROC(NL(KDMACTR_memstreamchar),(),((NL(KDMACTR_memstreamchar)).nonlocals));
} 
} 
} 
A_PROC_EXIT(memstreamchar);
return( SDMACTR );
} 
#undef NL

A_STATIC A68_VOID  XDMACTR_selectstream(A68_INT  Streamno, void *NonLocals)
#define NL(x) (((YDMACTR_selectstream *)NonLocals)->x)
{ 
A68_159  ZDMACTR;  /* united object - for case conformity */
A68_158 * AEMACTR_fs;
A68_VC  DEMACTR;  /* avoid structure result */
A68_74 * EEMACTR_f;
A68_BOOL  FEMACTR;  /* clause result */
A68_VC  GEMACTR;  /* avoid structure result */
A68_135  HEMACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_158  IEMACTR;  /* collateral clause result */
A68_157 * LEMACTR_ms;
A68_156 * OEMACTR_first_chunk;
A68_157  PEMACTR;  /* collateral clause result */
A_PROC_ENTRY(selectstream);
 /* line 425: */
 /* line 426: */
 /* line 427: */
 /* line 428: */
ZDMACTR = (*(&A_R1INDEX(NULACTR_cstreams,Streamno))) ;
switch ( ZDMACTR.mode )
{ 
case 1: /* REF STRUCT(REF MODE74,INT)  */
AEMACTR_fs = (ZDMACTR.data.mode1);
 /* line 429: */
 /* line 431: */
 /* line 433: */
switch ( (*(&(AEMACTR_fs->Status))) )
{ 
case 1: 
{ 
(*NL(ADMACTR_currentfilestream)) = AEMACTR_fs;
 /* line 435: */
(*NL(UDMACTR_streamchar)) = NL(CDMACTR_filestreamchar);
} 
break;
case 2: 
 /* line 437: */
PXIACTR_assert(CEMACTR, A68_FALSE);
break;
case 3: 
 /* line 438: */
{ 
WULACTR_streamfilename( Streamno, &DEMACTR );
EEMACTR_f = RVBAOSF_open_file(DEMACTR, BTBAOSF_read_access, RIBAOSF_ignore_msg);
 /* line 439: */
 /* line 440: */
 /* line 441: */
FEMACTR = (EEMACTR_f==TSBAOSF_nil_file);
if ( FEMACTR )
{ 
 /* line 442: */
 /* line 443: */
ROAAOSF_whole( Streamno, 0, &GEMACTR );
SSLACTR_coutputerror(704, A_HARR(HEMACTR,GEMACTR,A68_VC ));
} 
else
{ 
IEMACTR.File = EEMACTR_f;
IEMACTR.Status = JULACTR_openforreading;
(*AEMACTR_fs) = IEMACTR;
 /* line 444: */
(*NL(ADMACTR_currentfilestream)) = AEMACTR_fs;
 /* line 445: */
 /* line 446: */
 /* line 448: */
(*NL(UDMACTR_streamchar)) = NL(CDMACTR_filestreamchar);
} 
} 
break;
default: 
 /* line 447: */
 /* line 449: */
 /* line 450: */
PXIACTR_assert(KEMACTR, A68_FALSE);
break;
} 
break;
case 2: /* REF STRUCT(REF MODE156,REF MODE156,INT,INT)  */
LEMACTR_ms = (ZDMACTR.data.mode2);
 /* line 451: */
 /* line 453: */
 /* line 455: */
switch ( (*(&(LEMACTR_ms->Status))) )
{ 
case 1: 
{ 
(*NL(BDMACTR_currentmemstream)) = LEMACTR_ms;
 /* line 457: */
(*NL(UDMACTR_streamchar)) = NL(KDMACTR_memstreamchar);
} 
break;
case 2: 
 /* line 459: */
PXIACTR_assert(NEMACTR, A68_FALSE);
break;
case 3: 
 /* line 460: */
{ 
OEMACTR_first_chunk = (*(&(LEMACTR_ms->First_chunk)));
 /* line 461: */
PEMACTR.First_chunk = OEMACTR_first_chunk;
PEMACTR.Current_chunk = OEMACTR_first_chunk;
PEMACTR.Pos = 1;
PEMACTR.Status = JULACTR_openforreading;
(*LEMACTR_ms) = PEMACTR;
 /* line 462: */
(*NL(BDMACTR_currentmemstream)) = LEMACTR_ms;
 /* line 463: */
 /* line 464: */
 /* line 465: */
 /* line 466: */
(*NL(UDMACTR_streamchar)) = NL(KDMACTR_memstreamchar);
} 
break;
default: 
 /* line 467: */
 /* line 468: */
PXIACTR_assert(REMACTR, A68_FALSE);
break;
} 
break;
case 3: /* VOID */
 /* line 469: */
 /* line 470: */
 /* line 471: */
PXIACTR_assert(TEMACTR, A68_FALSE);
break;
default: 
 /* line 472: */
PXIACTR_assert(VEMACTR, A68_FALSE);
break;
} 
A_PROC_EXIT(selectstream);
return;
} 
#undef NL

A_STATIC A68_VOID  YEMACTR_anonymous(A68_54  Msgno, A68_36  Params)
{ 
A68_57  ZEMACTR;  /* avoid structure result */
A68_57  AFMACTR_mess;
A68_181  BFMACTR;  /* collateral clause result */
A68_135  CFMACTR;  /* OPERATORS - istruct to row */
 /* line 475: */
{ 
EABAOSF_translate_msg( Msgno, Params, &ZEMACTR );
AFMACTR_mess = ZEMACTR;
 /* line 476: */
BFMACTR.data[0] = YQIACTR_basenamesourcefile;
BFMACTR.data[1] = AFMACTR_mess.Text;
 /* line 477: */
SSLACTR_coutputerror(709, A_HIS1ARR(CFMACTR,BFMACTR,A68_VC ,2));
} 
return;
} 
#undef NL

A_STATIC A68_VOID  GSLACTR_generator(A68_BOOL  FSLACTR_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  HSLACTR;  /* clause result */
A68_VC  ISLACTR;  /* OPERATORS - dynamic generator */
{ 
 /* line 47: */
ISLACTR.upb = 0 ;
( FSLACTR_anonymous? A_VLOC(A68_CHAR ,ISLACTR): A_VHEAP(A68_CHAR ,ISLACTR) );
HSLACTR = ISLACTR;
} 
*ReturnedValue = (HSLACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  LSLACTR_generator(A68_BOOL  KSLACTR_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  MSLACTR;  /* clause result */
A68_VC  NSLACTR;  /* OPERATORS - dynamic generator */
{ 
 /* line 59: */
NSLACTR.upb = 0 ;
( KSLACTR_anonymous? A_VLOC(A68_CHAR ,NSLACTR): A_VHEAP(A68_CHAR ,NSLACTR) );
MSLACTR = NSLACTR;
} 
*ReturnedValue = (MSLACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  SSLACTR_coutputerror(A68_INT  Message, A68_135  Parameters)
{ 
A_PROC_ENTRY(coutputerror);
 /* line 71: */
 /* line 72: */
{ 
A_CALLPROC(PSLACTR_purgeoutputfiles,(),((PSLACTR_purgeoutputfiles).nonlocals));
 /* line 73: */
 /* line 74: */
UWIACTR_pterminalerror(Message, Parameters);
} 
A_PROC_EXIT(coutputerror);
return;
} 
#undef NL

A68_VOID  WSLACTR_initcoutput(A68_VC  Modname)
{ 
A68_58  ATLACTR_generator;   /* proc value of non-global proc */
A68_VC  FTLACTR;  /* avoid structure result */
A_PROC_ENTRY(initcoutput);
 /* line 83: */
 /* line 84: */
{ 
PXIACTR_assert(YSLACTR, !USLACTR_initialised);
 /* line 85: */
USLACTR_initialised = A68_TRUE;
 /* line 86: */
A_CLOSURE( ATLACTR_generator, BTLACTR_generator, CTLACTR_generator );
(( CTLACTR_generator * ) ( ATLACTR_generator.nonlocals )) -> Modname = Modname;
 /* line 87: */
A_CALLPROC(ATLACTR_generator,(A68_FALSE, &FTLACTR),(A68_FALSE, &FTLACTR,(ATLACTR_generator).nonlocals));
A_VASSIGN2(Modname,FTLACTR,A68_CHAR ) ;
TSLACTR_modulename = FTLACTR;
} 
A_PROC_EXIT(initcoutput);
return;
} 
#undef NL

A68_VOID  JTLACTR_writemodinfo(A68_152  Params)
{ 
A68_BOOL  MTLACTR;  /* clause result */
A68_135  PTLACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_150  QTLACTR_p;
A68_150 * RTLACTR;  /* forall control - []x */
A68_INT  STLACTR;  /* forall loop counter */
A68_150  TTLACTR;  /* united object - for case conformity */
A68_CHAR  UTLACTR_c;
A68_VC  VTLACTR;  /* clause result */
A68_VC  WTLACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  XTLACTR_mf;
A68_VC  YTLACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_135  BULACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_BOOL  EULACTR;  /* clause result */
A68_75  FULACTR;  /* avoid structure result */
A68_135  IULACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(writemodinfo);
 /* line 95: */
 /* line 96: */
{ 
 /* line 97: */
 /* line 98: */
if ( !GTLACTR_modinfoopen )
{ 
 /* line 99: */
HTLACTR_modinfo = RVBAOSF_open_file(A_VC_PLUS(TSLACTR_modulename,LTLACTR), FTBAOSF_write_access, RIBAOSF_ignore_msg);
 /* line 100: */
 /* line 101: */
 /* line 102: */
MTLACTR = (HTLACTR_modinfo==TSBAOSF_nil_file);
if ( MTLACTR )
{ 
 /* line 103: */
SSLACTR_coutputerror(700, A_HARR(PTLACTR,A_VC_PLUS(TSLACTR_modulename,OTLACTR),A68_VC ));
} 
 /* line 104: */
 /* line 105: */
GTLACTR_modinfoopen = A68_TRUE;
} 
 /* line 107: */
 /* line 108: */
STLACTR = Params.upb -1;
RTLACTR = Params.data;
for (;STLACTR-- >= 0;
(RTLACTR++
) )
{
QTLACTR_p = *RTLACTR;
 /* line 109: */
 /* line 110: */
 /* line 111: */
 /* line 112: */
 /* line 113: */
TTLACTR = QTLACTR_p ;
switch ( TTLACTR.mode )
{ 
case 1: /* CHAR */
UTLACTR_c = (TTLACTR.data.mode1);
 /* line 114: */
VTLACTR = A_HVEC(WTLACTR,UTLACTR_c,A68_CHAR );
break;
case 2: /* VECTOR [] CHAR */
XTLACTR_mf = (TTLACTR.data.mode2);
 /* line 115: */
VTLACTR = XTLACTR_mf;
break;
case 3: /* SHORT INT */
 /* line 116: */
 /* line 117: */
VTLACTR = A_HVEC(YTLACTR,HVBAOSF_newline_char,A68_CHAR );
break;
default: 
SSLACTR_coutputerror(715, A_HARR(BULACTR,AULACTR,A68_VC ));
 /* line 118: */
VTLACTR = DULACTR;
break;
} 
 /* line 120: */
 /* line 121: */
 /* line 122: */
VXBAOSF_write_buffer( HTLACTR_modinfo, VTLACTR, RIBAOSF_ignore_msg, &FULACTR );
EULACTR = BVBAOSF_(FULACTR, VUBAOSF_io_error);
if ( EULACTR )
{ 
 /* line 123: */
 /* line 124: */
UWIACTR_pterminalerror(750, A_HARR(IULACTR,A_VC_PLUS(TSLACTR_modulename,HULACTR),A68_VC ));
} 
}
 /* line 125: */
} 
A_PROC_EXIT(writemodinfo);
return;
} 
#undef NL

A_STATIC A68_VOID  WULACTR_streamfilename(A68_INT  Streamno, A68_VC  *ReturnedValue)
{ 
A68_VC  YULACTR;  /* clause result */
A68_VC  CVLACTR;  /* clause result */
A68_VC  DVLACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  EVLACTR;  /* avoid structure result */
A_PROC_ENTRY(streamfilename);
 /* line 161: */
if ( SQIACTR_tempfileoption )
{ 
YULACTR = ZULACTR;
} 
else
{ 
YULACTR = BVLACTR;
} 
ROAAOSF_whole( Streamno, 0, &EVLACTR );
CVLACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(YULACTR,TSLACTR_modulename),A_HVEC(DVLACTR,'.',A68_CHAR )),EVLACTR);
A_PROC_EXIT(streamfilename);
*ReturnedValue = (CVLACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  IVLACTR_writefilestream(A68_149  Item, A68_159  Stream)
{ 
A68_60  PVLACTR_msg;
A68_60  QVLACTR;  /* procedure value */
A68_159  RVLACTR;  /* clause result */
A68_158 * SVLACTR_f;
A68_149  TVLACTR;  /* united object - for case conformity */
A68_INT  UVLACTR_ce;
A68_VC  VVLACTR;  /* OPERATORS - scalar -> [] or VEC[] */
union {  /* BIOP 99 */
A68_INT   source;
A68_40   destination;
} WVLACTR; 
A68_VC  XVLACTR;  /* OPERATORS - istruct -> vector */
A68_40  YVLACTR;  /* OPERATORS - istruct -> vector */
A68_75  ZVLACTR;  /* avoid structure result */
A68_CHAR  AWLACTR_c;
A68_VC  BWLACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_75  CWLACTR;  /* avoid structure result */
A68_VC  DWLACTR_cf;
A68_75  EWLACTR;  /* avoid structure result */
A68_VC  FWLACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_75  GWLACTR;  /* avoid structure result */
A68_75  JWLACTR;  /* avoid structure result */
A68_INT  KWLACTR;  /* clause result */
A68_VC  LWLACTR;  /* avoid structure result */
A68_75  MWLACTR;  /* avoid structure result */
A68_75  PWLACTR;  /* avoid structure result */
A68_75  QWLACTR;  /* avoid structure result */
A68_75  RWLACTR;  /* avoid structure result */
A68_VC  SWLACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_75  TWLACTR;  /* avoid structure result */
A68_VC  UWLACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_75  VWLACTR;  /* avoid structure result */
A_PROC_ENTRY(writefilestream);
 /* line 168: */
 /* line 169: */
QVLACTR.fn.fn_global = LVLACTR_anonymous;
QVLACTR.nonlocals = A68_NIL;
PVLACTR_msg = (QVLACTR);
 /* line 173: */
 /* line 174: */
 /* line 175: */
RVLACTR = Stream;
switch ( RVLACTR.mode )
{ 
case 1: /* REF STRUCT(REF MODE74,INT)  */
SVLACTR_f = (RVLACTR.data.mode1);
 /* line 176: */
 /* line 177: */
TVLACTR = Item ;
switch ( TVLACTR.mode )
{ 
case 3: /* INT */
UVLACTR_ce = (TVLACTR.data.mode3);
 /* line 178: */
 /* line 179: */
WVLACTR.source = UVLACTR_ce ;
YVLACTR = (WVLACTR.destination) ;
VXBAOSF_write_buffer( (*(&(SVLACTR_f->File))), A_VC_PLUS(A_HVEC(VVLACTR,UULACTR_ceditid,A68_CHAR ),A_HISVEC(XVLACTR,YVLACTR,4,A68_CHAR )), PVLACTR_msg, &ZVLACTR );
ZVLACTR;
break;
case 1: /* CHAR */
AWLACTR_c = (TVLACTR.data.mode1);
 /* line 180: */
 /* line 181: */
VXBAOSF_write_buffer( (*(&(SVLACTR_f->File))), A_HVEC(BWLACTR,AWLACTR_c,A68_CHAR ), PVLACTR_msg, &CWLACTR );
CWLACTR;
break;
case 2: /* VECTOR [] CHAR */
DWLACTR_cf = (TVLACTR.data.mode2);
 /* line 182: */
 /* line 183: */
VXBAOSF_write_buffer( (*(&(SVLACTR_f->File))), DWLACTR_cf, PVLACTR_msg, &EWLACTR );
EWLACTR;
break;
case 4: /* SHORT INT */
 /* line 184: */
{ 
VXBAOSF_write_buffer( (*(&(SVLACTR_f->File))), A_HVEC(FWLACTR,HVBAOSF_newline_char,A68_CHAR ), PVLACTR_msg, &GWLACTR );
GWLACTR;
 /* line 185: */
 /* line 186: */
 /* line 187: */
if ( BQIACTR_lineoption )
{ 
VXBAOSF_write_buffer( (*(&(SVLACTR_f->File))), IWLACTR, PVLACTR_msg, &JWLACTR );
JWLACTR;
 /* line 188: */
if ( (QRIACTR_linenumber==0) )
{ 
KWLACTR = 1;
} 
else
{ 
KWLACTR = QRIACTR_linenumber;
} 
ROAAOSF_whole( KWLACTR, 0, &LWLACTR );
VXBAOSF_write_buffer( (*(&(SVLACTR_f->File))), LWLACTR, PVLACTR_msg, &MWLACTR );
MWLACTR;
 /* line 189: */
VXBAOSF_write_buffer( (*(&(SVLACTR_f->File))), OWLACTR, PVLACTR_msg, &PWLACTR );
PWLACTR;
 /* line 190: */
VXBAOSF_write_buffer( (*(&(SVLACTR_f->File))), YQIACTR_basenamesourcefile, PVLACTR_msg, &QWLACTR );
QWLACTR;
 /* line 191: */
VXBAOSF_write_buffer( (*(&(SVLACTR_f->File))), ZQIACTR_sourcefilesuffix, PVLACTR_msg, &RWLACTR );
RWLACTR;
 /* line 192: */
VXBAOSF_write_buffer( (*(&(SVLACTR_f->File))), A_HVEC(SWLACTR,'\"',A68_CHAR ), PVLACTR_msg, &TWLACTR );
TWLACTR;
 /* line 193: */
 /* line 194: */
 /* line 195: */
 /* line 196: */
 /* line 197: */
VXBAOSF_write_buffer( (*(&(SVLACTR_f->File))), A_HVEC(UWLACTR,HVBAOSF_newline_char,A68_CHAR ), PVLACTR_msg, &VWLACTR );
VWLACTR;
} 
} 
break;
default: 
 /* line 198: */
 /* line 199: */
 /* line 200: */
PXIACTR_assert(XWLACTR, A68_FALSE);
break;
} 
break;
default: 
 /* line 201: */
PXIACTR_assert(ZWLACTR, A68_FALSE);
break;
} 
A_PROC_EXIT(writefilestream);
return;
} 
#undef NL

A_STATIC A68_VOID  CXLACTR_write_mem(A68_157 * Ms, A68_VC  Buf)
{ 
A68_INT * DXLACTR_pos;
A68_VC  EXLACTR;  /* OPERATORS - trim index */
A68_VC  FXLACTR;  /* OPERATORS - trim index */
A68_VC  GXLACTR_usable_data;
A68_INT  HXLACTR_upb_usable_data;
A68_INT  IXLACTR_upb_buf;
A68_BOOL  JXLACTR;  /* clause result */
A68_VC  KXLACTR;  /* OPERATORS - trim index */
A68_VC  LXLACTR;  /* YIELD */
A68_VC  MXLACTR;  /* OPERATORS - trim index */
A68_VC  NXLACTR;  /* OPERATORS - assign op */
A68_156  OXLACTR;  /* collateral clause result */
A68_58  QXLACTR_generator;   /* proc value of non-global proc */
A68_VC  VXLACTR;  /* avoid structure result */
A68_156 * WXLACTR;  /* YIELD */
A68_156 ** XXLACTR;  /* YIELD */
A68_156 ** YXLACTR;  /* YIELD */
A68_VC  ZXLACTR;  /* OPERATORS - trim index */
A_PROC_ENTRY(write_mem);
 /* line 207: */
 /* line 208: */
{ 
DXLACTR_pos = (&(Ms->Pos));
 /* line 209: */
EXLACTR = (*(&((*(&(Ms->Current_chunk)))->Data))) ;
GXLACTR_usable_data = A_VTRIM(FXLACTR,(EXLACTR),A_VTSCRIPT(&(FXLACTR.upb),(EXLACTR).upb,(*DXLACTR_pos),(EXLACTR).upb));
 /* line 210: */
 /* line 211: */
HXLACTR_upb_usable_data = GXLACTR_usable_data.upb;
 /* line 212: */
IXLACTR_upb_buf = Buf.upb;
 /* line 213: */
 /* line 214: */
 /* line 216: */
JXLACTR = (IXLACTR_upb_buf<=HXLACTR_upb_usable_data);
if ( JXLACTR )
{ 
LXLACTR = A_VTRIM(KXLACTR,(GXLACTR_usable_data),A_VTSCRIPT(&(KXLACTR.upb),(GXLACTR_usable_data).upb,1,IXLACTR_upb_buf)) ;
A_VASSIGN2(Buf,LXLACTR,A68_CHAR );
 /* line 217: */
 /* line 218: */
 /* line 220: */
(*DXLACTR_pos)+=IXLACTR_upb_buf;
} 
else
{ 
NXLACTR = A_VTRIM(MXLACTR,(Buf),A_VTSCRIPT(&(MXLACTR.upb),(Buf).upb,1,HXLACTR_upb_usable_data)) ;
A_VASSIGN2(NXLACTR,GXLACTR_usable_data,A68_CHAR );
 /* line 223: */
A_CLOSURE( QXLACTR_generator, RXLACTR_generator, SXLACTR_generator );
A_CALLPROC(QXLACTR_generator,(A68_FALSE, &VXLACTR),(A68_FALSE, &VXLACTR,(QXLACTR_generator).nonlocals));
OXLACTR.Data = VXLACTR;
OXLACTR.Next = (A68_156 *)A68_NIL;
WXLACTR = A_HEAP(A68_156 ) ;
(*WXLACTR) = OXLACTR ;
XXLACTR = (&((*(&(Ms->Current_chunk)))->Next)) ;
(*XXLACTR) = WXLACTR;
 /* line 224: */
YXLACTR = (&(Ms->Current_chunk)) ;
(*YXLACTR) = (*(&((*(&(Ms->Current_chunk)))->Next)));
 /* line 225: */
(*DXLACTR_pos) = 1;
 /* line 228: */
 /* line 229: */
CXLACTR_write_mem(Ms, A_VTRIM(ZXLACTR,(Buf),A_VTSCRIPT(&(ZXLACTR.upb),(Buf).upb,(HXLACTR_upb_usable_data+1),(Buf).upb)));
} 
} 
A_PROC_EXIT(write_mem);
return;
} 
#undef NL

A_STATIC A68_VOID  CYLACTR_writememstream(A68_149  Item, A68_159  Stream)
{ 
A68_60  JYLACTR_msg;
A68_60  KYLACTR;  /* procedure value */
A68_159  LYLACTR;  /* clause result */
A68_157 * MYLACTR_ms;
A68_149  NYLACTR;  /* united object - for case conformity */
A68_INT  OYLACTR_ce;
A68_VC  PYLACTR;  /* OPERATORS - scalar -> [] or VEC[] */
union {  /* BIOP 99 */
A68_INT   source;
A68_40   destination;
} QYLACTR; 
A68_VC  RYLACTR;  /* OPERATORS - istruct -> vector */
A68_40  SYLACTR;  /* OPERATORS - istruct -> vector */
A68_CHAR  TYLACTR_c;
A68_VC  UYLACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  VYLACTR_cf;
A68_VC  WYLACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  ZYLACTR;  /* clause result */
A68_VC  AZLACTR;  /* avoid structure result */
A68_VC  DZLACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  EZLACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(writememstream);
 /* line 232: */
 /* line 233: */
KYLACTR.fn.fn_global = FYLACTR_anonymous;
KYLACTR.nonlocals = A68_NIL;
JYLACTR_msg = (KYLACTR);
 /* line 237: */
 /* line 238: */
 /* line 239: */
LYLACTR = Stream;
switch ( LYLACTR.mode )
{ 
case 2: /* REF STRUCT(REF MODE156,REF MODE156,INT,INT)  */
MYLACTR_ms = (LYLACTR.data.mode2);
 /* line 240: */
 /* line 241: */
NYLACTR = Item ;
switch ( NYLACTR.mode )
{ 
case 3: /* INT */
OYLACTR_ce = (NYLACTR.data.mode3);
 /* line 242: */
 /* line 243: */
QYLACTR.source = OYLACTR_ce ;
SYLACTR = (QYLACTR.destination) ;
CXLACTR_write_mem(MYLACTR_ms, A_VC_PLUS(A_HVEC(PYLACTR,UULACTR_ceditid,A68_CHAR ),A_HISVEC(RYLACTR,SYLACTR,4,A68_CHAR )));
break;
case 1: /* CHAR */
TYLACTR_c = (NYLACTR.data.mode1);
 /* line 244: */
 /* line 245: */
CXLACTR_write_mem(MYLACTR_ms, A_HVEC(UYLACTR,TYLACTR_c,A68_CHAR ));
break;
case 2: /* VECTOR [] CHAR */
VYLACTR_cf = (NYLACTR.data.mode2);
 /* line 246: */
 /* line 247: */
CXLACTR_write_mem(MYLACTR_ms, VYLACTR_cf);
break;
case 4: /* SHORT INT */
 /* line 248: */
{ 
CXLACTR_write_mem(MYLACTR_ms, A_HVEC(WYLACTR,HVBAOSF_newline_char,A68_CHAR ));
 /* line 249: */
 /* line 250: */
 /* line 251: */
if ( BQIACTR_lineoption )
{ 
CXLACTR_write_mem(MYLACTR_ms, YYLACTR);
 /* line 252: */
if ( (QRIACTR_linenumber==0) )
{ 
ZYLACTR = 1;
} 
else
{ 
ZYLACTR = QRIACTR_linenumber;
} 
ROAAOSF_whole( ZYLACTR, 0, &AZLACTR );
CXLACTR_write_mem(MYLACTR_ms, AZLACTR);
 /* line 253: */
CXLACTR_write_mem(MYLACTR_ms, CZLACTR);
 /* line 254: */
CXLACTR_write_mem(MYLACTR_ms, YQIACTR_basenamesourcefile);
 /* line 255: */
CXLACTR_write_mem(MYLACTR_ms, ZQIACTR_sourcefilesuffix);
 /* line 256: */
CXLACTR_write_mem(MYLACTR_ms, A_HVEC(DZLACTR,'\"',A68_CHAR ));
 /* line 257: */
 /* line 258: */
 /* line 259: */
 /* line 260: */
 /* line 261: */
CXLACTR_write_mem(MYLACTR_ms, A_HVEC(EZLACTR,HVBAOSF_newline_char,A68_CHAR ));
} 
} 
break;
default: 
 /* line 262: */
 /* line 263: */
 /* line 264: */
PXIACTR_assert(GZLACTR, A68_FALSE);
break;
} 
break;
default: 
 /* line 265: */
PXIACTR_assert(IZLACTR, A68_FALSE);
break;
} 
A_PROC_EXIT(writememstream);
return;
} 
#undef NL

A_STATIC A68_VOID  KZLACTR_checkstreamwritable(A68_INT  Streamno, A68_164  *ReturnedValue)
{ 
A68_INT  LZLACTR_oldupb;
A68_BOOL  MZLACTR;  /* clause result */
A68_INT  NZLACTR_newupb;
A68_170  PZLACTR_generator;   /* proc value of non-global proc */
A68_161  UZLACTR;  /* avoid structure result */
A68_161  VZLACTR_newcstreams;
A68_161  WZLACTR;  /* OPERATORS - trim index */
A68_161  XZLACTR;  /* YIELD */
A68_159 * YZLACTR_s;
A68_161  ZZLACTR;  /* OPERATORS - trim index */
A68_161  AAMACTR;  /* forall yield */
A68_INT  BAMACTR;  /* forall loop counter */
A68_159  CAMACTR;  /* OPERATORS - mode -> union mode */
A68_164  DAMACTR;  /* clause result */
A68_164  EAMACTR;  /* avoid structure result */
A68_159 * FAMACTR_s;
A68_159  GAMACTR;  /* clause result */
A68_158 * HAMACTR_fs;
A68_164  KAMACTR;  /* procedure value */
A68_157 * LAMACTR_ms;
A68_164  OAMACTR;  /* procedure value */
A68_VC  PAMACTR;  /* avoid structure result */
A68_74 * QAMACTR_f;
A68_BOOL  RAMACTR;  /* clause result */
A68_VC  SAMACTR;  /* avoid structure result */
A68_135  TAMACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_164  UAMACTR;  /* OPERATORS - skip to mode */
A68_158  VAMACTR;  /* collateral clause result */
A68_158 * WAMACTR;  /* YIELD */
A68_159  XAMACTR;  /* OPERATORS - mode -> union mode */
A68_164  YAMACTR;  /* procedure value */
A68_58  ABMACTR_generator;   /* proc value of non-global proc */
A68_VC  FBMACTR;  /* avoid structure result */
A68_VC  GBMACTR_data;
A68_156 * HBMACTR_initialchunk;
A68_156  IBMACTR;  /* collateral clause result */
A68_157  JBMACTR;  /* collateral clause result */
A68_157 * KBMACTR;  /* YIELD */
A68_159  LBMACTR;  /* OPERATORS - mode -> union mode */
A68_164  MBMACTR;  /* procedure value */
A68_164  PBMACTR;  /* OPERATORS - skip to mode */
A68_164  SBMACTR;  /* OPERATORS - skip to mode */
A_PROC_ENTRY(checkstreamwritable);
 /* line 272: */
 /* line 273: */
{ 
LZLACTR_oldupb = NULACTR_cstreams.dim[0].upb;
 /* line 274: */
 /* line 275: */
 /* line 277: */
MZLACTR = (Streamno>LZLACTR_oldupb);
if ( MZLACTR )
{ 
NZLACTR_newupb = LZLACTR_oldupb;
 /* line 278: */
for ( ;; )
{ 
if ( !((NZLACTR_newupb<Streamno)) ) break;
NZLACTR_newupb+=(5*MQLACTR_streams_per_level);
}
 /* line 279: */
A_CLOSURE( PZLACTR_generator, QZLACTR_generator, RZLACTR_generator );
(( RZLACTR_generator * ) ( PZLACTR_generator.nonlocals )) -> NZLACTR_newupb = (&NZLACTR_newupb);
A_CALLPROC(PZLACTR_generator,(A68_FALSE, &UZLACTR),(A68_FALSE, &UZLACTR,(PZLACTR_generator).nonlocals));
VZLACTR_newcstreams = UZLACTR;
 /* line 280: */
XZLACTR = A_R1TRIM(WZLACTR,(VZLACTR_newcstreams),A_RTSCRIPT(&(WZLACTR.dim[0]),&((VZLACTR_newcstreams).dim[0]),(VZLACTR_newcstreams).dim[0].lwb,LZLACTR_oldupb,1)) ;
A_R1ASSIGN2(NULACTR_cstreams,XZLACTR,A68_159 );
 /* line 281: */
AAMACTR = A_R1TRIM(ZZLACTR,(VZLACTR_newcstreams),A_RTSCRIPT(&(ZZLACTR.dim[0]),&((VZLACTR_newcstreams).dim[0]),(LZLACTR_oldupb+1),(VZLACTR_newcstreams).dim[0].upb,1)) ;
BAMACTR = AAMACTR.dim[0].upb - AAMACTR.dim[0].lwb;
YZLACTR_s = AAMACTR.data;
for (;BAMACTR-- >= 0;
(YZLACTR_s += AAMACTR.dim[0].stride
) )
{
(*YZLACTR_s) = A_EMPTY(CAMACTR,3);
}
 /* line 282: */
NULACTR_cstreams = VZLACTR_newcstreams;
 /* line 285: */
 /* line 286: */
 /* line 287: */
KZLACTR_checkstreamwritable( Streamno, &EAMACTR );
DAMACTR = EAMACTR;
} 
else
{ 
 /* line 288: */
FAMACTR_s = (&A_R1INDEX(NULACTR_cstreams,Streamno));
 /* line 289: */
 /* line 290: */
 /* line 291: */
GAMACTR = (*FAMACTR_s);
switch ( GAMACTR.mode )
{ 
case 1: /* REF STRUCT(REF MODE74,INT)  */
HAMACTR_fs = (GAMACTR.data.mode1);
 /* line 292: */
{ 
PXIACTR_assert(JAMACTR, ((*(&(HAMACTR_fs->Status)))==KULACTR_openforwriting));
 /* line 293: */
 /* line 294: */
 /* line 295: */
KAMACTR.fn.fn_global = IVLACTR_writefilestream;
KAMACTR.nonlocals = A68_NIL;
DAMACTR = KAMACTR;
} 
break;
case 2: /* REF STRUCT(REF MODE156,REF MODE156,INT,INT)  */
LAMACTR_ms = (GAMACTR.data.mode2);
 /* line 296: */
{ 
PXIACTR_assert(NAMACTR, ((*(&(LAMACTR_ms->Status)))==KULACTR_openforwriting));
 /* line 297: */
 /* line 298: */
 /* line 299: */
OAMACTR.fn.fn_global = CYLACTR_writememstream;
OAMACTR.nonlocals = A68_NIL;
DAMACTR = OAMACTR;
} 
break;
case 3: /* VOID */
 /* line 300: */
 /* line 302: */
 /* line 304: */
switch ( WQIACTR_cstream_policy )
{ 
case 1: 
 /* line 305: */
{ 
WULACTR_streamfilename( Streamno, &PAMACTR );
QAMACTR_f = RVBAOSF_open_file(PAMACTR, FTBAOSF_write_access, RIBAOSF_ignore_msg);
 /* line 306: */
 /* line 307: */
 /* line 308: */
RAMACTR = (QAMACTR_f==TSBAOSF_nil_file);
if ( RAMACTR )
{ 
WULACTR_streamfilename( Streamno, &SAMACTR );
UWIACTR_pterminalerror(702, A_HARR(TAMACTR,SAMACTR,A68_VC ));
 /* line 309: */
 /* line 310: */
 /* line 311: */
DAMACTR = UAMACTR;
} 
else
{ 
VAMACTR.File = QAMACTR_f;
VAMACTR.Status = KULACTR_openforwriting;
WAMACTR = A_HEAP(A68_158 ) ;
(*WAMACTR) = VAMACTR ;
(*FAMACTR_s) = A_UNITE(XAMACTR,mode1,1,WAMACTR);
 /* line 312: */
 /* line 313: */
 /* line 315: */
YAMACTR.fn.fn_global = IVLACTR_writefilestream;
YAMACTR.nonlocals = A68_NIL;
DAMACTR = YAMACTR;
} 
} 
break;
case 2: 
 /* line 316: */
{ 
A_CLOSURE( ABMACTR_generator, BBMACTR_generator, CBMACTR_generator );
A_CALLPROC(ABMACTR_generator,(A68_FALSE, &FBMACTR),(A68_FALSE, &FBMACTR,(ABMACTR_generator).nonlocals));
GBMACTR_data = FBMACTR;
 /* line 317: */
HBMACTR_initialchunk = (A_HEAP(A68_156 ));
IBMACTR.Data = GBMACTR_data;
IBMACTR.Next = (A68_156 *)A68_NIL;
(*HBMACTR_initialchunk) = IBMACTR;
 /* line 318: */
JBMACTR.First_chunk = HBMACTR_initialchunk;
JBMACTR.Current_chunk = HBMACTR_initialchunk;
JBMACTR.Pos = 1;
JBMACTR.Status = KULACTR_openforwriting;
KBMACTR = A_HEAP(A68_157 ) ;
(*KBMACTR) = JBMACTR ;
(*FAMACTR_s) = A_UNITE(LBMACTR,mode2,2,KBMACTR);
 /* line 319: */
 /* line 320: */
 /* line 321: */
 /* line 322: */
MBMACTR.fn.fn_global = CYLACTR_writememstream;
MBMACTR.nonlocals = A68_NIL;
DAMACTR = MBMACTR;
} 
break;
default: 
PXIACTR_assert(OBMACTR, A68_FALSE);
 /* line 323: */
 /* line 324: */
 /* line 325: */
DAMACTR = PBMACTR;
break;
} 
break;
default: 
PXIACTR_assert(RBMACTR, A68_FALSE);
 /* line 326: */
DAMACTR = SBMACTR;
break;
} 
} 
} 
A_PROC_EXIT(checkstreamwritable);
*ReturnedValue = (DAMACTR);
return;
} 
#undef NL

A68_VOID  VBMACTR_writecstream(A68_175  Params, A68_INT  Streamno)
{ 
A68_164  WBMACTR;  /* avoid structure result */
A68_164  XBMACTR_outputdata;
A68_149  YBMACTR_p;
A68_149 * ZBMACTR;  /* forall control - []x */
A68_INT  ACMACTR;  /* forall loop counter */
A_PROC_ENTRY(writecstream);
 /* line 331: */
 /* line 332: */
 /* line 333: */
if ( !QQIACTR_checkoption )
{ 
KZLACTR_checkstreamwritable( Streamno, &WBMACTR );
XBMACTR_outputdata = WBMACTR;
 /* line 334: */
 /* line 335: */
ACMACTR = Params.upb -1;
ZBMACTR = Params.data;
for (;ACMACTR-- >= 0;
(ZBMACTR++
) )
{
YBMACTR_p = *ZBMACTR;
 /* line 336: */
 /* line 327: */
 /* line 337: */
A_CALLPROC(XBMACTR_outputdata,(YBMACTR_p, (*(&A_R1INDEX(NULACTR_cstreams,Streamno)))),(YBMACTR_p, (*(&A_R1INDEX(NULACTR_cstreams,Streamno))),(XBMACTR_outputdata).nonlocals));
}
 /* line 338: */
} 
A_PROC_EXIT(writecstream);
return;
} 
#undef NL

A68_VOID  BCMACTR_closecoutput(void)
{ 
A68_BOOL  CCMACTR;  /* clause result */
A68_VC  GCMACTR;  /* clause result */
A68_74 * MCMACTR_cfile;
A68_135  PCMACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_159 * QCMACTR_s;
A68_INT  RCMACTR;  /* forall loop counter */
A68_159  SCMACTR;  /* united object - for case conformity */
A68_158 * TCMACTR_fs;
A68_INT * UCMACTR;  /* YIELD */
A68_157 * VCMACTR_ms;
A68_VC  WCMACTR;  /* OPERATORS - trim index */
A68_VC  XCMACTR;  /* OPERATORS - trim index */
A68_VC * YCMACTR;  /* YIELD */
A68_INT * ZCMACTR;  /* YIELD */
A68_158 * ADMACTR_currentfilestream;
A68_157 * BDMACTR_currentmemstream;
A68_177  CDMACTR_filestreamchar;   /* proc value of non-global proc */
A68_jmp_buf DCMACTR_endofstreams;
A68_177  KDMACTR_memstreamchar;   /* proc value of non-global proc */
A68_177  UDMACTR_streamchar;
A68_100  WDMACTR_selectstream;   /* proc value of non-global proc */
A68_60  DFMACTR_cfile_msg;
A68_60  EFMACTR;  /* procedure value */
A68_CHAR  FFMACTR_c;
A68_BOOL  GFMACTR;  /* clause result */
A68_40  HFMACTR_stream;
A68_CHAR * IFMACTR_i;
A68_VC  JFMACTR;  /* OPERATORS - istruct -> vector */
A68_VC  KFMACTR;  /* forall yield */
A68_INT  LFMACTR;  /* forall loop counter */
A68_VC  MFMACTR;  /* OPERATORS - istruct -> vector */
A68_VC  NFMACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_75  OFMACTR;  /* avoid structure result */
if ( sigsetjmp( DCMACTR_endofstreams.label,1) ) goto ECMACTR_endofstreams;
A_PROC_ENTRY(closecoutput);
if ( (HTLACTR_modinfo!=TSBAOSF_nil_file) )
{ 
JWBAOSF_close_file(HTLACTR_modinfo, RIBAOSF_ignore_msg);
} 
 /* line 356: */
 /* line 357: */
 /* line 359: */
CCMACTR = !QQIACTR_checkoption;
if ( CCMACTR )
{ 
if ( SQIACTR_tempfileoption )
{ 
GCMACTR = HCMACTR;
} 
else
{ 
GCMACTR = JCMACTR;
} 
MCMACTR_cfile = RVBAOSF_open_file(A_VC_PLUS(A_VC_PLUS(GCMACTR,TSLACTR_modulename),LCMACTR), FTBAOSF_write_access, RIBAOSF_ignore_msg);
 /* line 360: */
if ( (MCMACTR_cfile==TSBAOSF_nil_file) )
{ 
SSLACTR_coutputerror(703, A_HARR(PCMACTR,A_VC_PLUS(TSLACTR_modulename,OCMACTR),A68_VC ));
} 
 /* line 363: */
 /* line 364: */
RCMACTR = NULACTR_cstreams.dim[0].upb - NULACTR_cstreams.dim[0].lwb;
QCMACTR_s = NULACTR_cstreams.data;
for (;RCMACTR-- >= 0;
(QCMACTR_s += NULACTR_cstreams.dim[0].stride
) )
{
 /* line 365: */
 /* line 366: */
SCMACTR = (*QCMACTR_s) ;
switch ( SCMACTR.mode )
{ 
case 1: /* REF STRUCT(REF MODE74,INT)  */
TCMACTR_fs = (SCMACTR.data.mode1);
 /* line 367: */
{ 
JWBAOSF_close_file((*(&(TCMACTR_fs->File))), RIBAOSF_ignore_msg);
 /* line 368: */
UCMACTR = (&(TCMACTR_fs->Status)) ;
(*UCMACTR) = LULACTR_notopen;
} 
break;
case 2: /* REF STRUCT(REF MODE156,REF MODE156,INT,INT)  */
VCMACTR_ms = (SCMACTR.data.mode2);
 /* line 369: */
 /* line 370: */
{ 
 /* line 371: */
WCMACTR = (*(&((*(&(VCMACTR_ms->Current_chunk)))->Data))) ;
YCMACTR = (&((*(&(VCMACTR_ms->Current_chunk)))->Data)) ;
(*YCMACTR) = A_VTRIM(XCMACTR,(WCMACTR),A_VTSCRIPT(&(XCMACTR.upb),(WCMACTR).upb,1,((*(&(VCMACTR_ms->Pos)))-1)));
 /* line 372: */
 /* line 373: */
 /* line 374: */
 /* line 376: */
ZCMACTR = (&(VCMACTR_ms->Status)) ;
(*ZCMACTR) = LULACTR_notopen;
} 
break;
default: 
 /* line 377: */
/*SKIP*/;
break;
} 
}
 /* line 379: */
 /* line 380: */
 /* line 382: */
 /* line 386: */
 /* line 387: */
A_CLOSURE( CDMACTR_filestreamchar, DDMACTR_filestreamchar, EDMACTR_filestreamchar );
(( EDMACTR_filestreamchar * ) ( CDMACTR_filestreamchar.nonlocals )) -> ADMACTR_currentfilestream = (&ADMACTR_currentfilestream);
(( EDMACTR_filestreamchar * ) ( CDMACTR_filestreamchar.nonlocals )) -> DCMACTR_endofstreams = DCMACTR_endofstreams;
 /* line 393: */
 /* line 397: */
 /* line 398: */
A_CLOSURE( KDMACTR_memstreamchar, LDMACTR_memstreamchar, MDMACTR_memstreamchar );
(( MDMACTR_memstreamchar * ) ( KDMACTR_memstreamchar.nonlocals )) -> BDMACTR_currentmemstream = (&BDMACTR_currentmemstream);
(( MDMACTR_memstreamchar * ) ( KDMACTR_memstreamchar.nonlocals )) -> DCMACTR_endofstreams = DCMACTR_endofstreams;
(( MDMACTR_memstreamchar * ) ( KDMACTR_memstreamchar.nonlocals )) -> KDMACTR_memstreamchar = KDMACTR_memstreamchar;
 /* line 419: */
 /* line 421: */
A_CLOSURE( WDMACTR_selectstream, XDMACTR_selectstream, YDMACTR_selectstream );
(( YDMACTR_selectstream * ) ( WDMACTR_selectstream.nonlocals )) -> ADMACTR_currentfilestream = (&ADMACTR_currentfilestream);
(( YDMACTR_selectstream * ) ( WDMACTR_selectstream.nonlocals )) -> UDMACTR_streamchar = (&UDMACTR_streamchar);
(( YDMACTR_selectstream * ) ( WDMACTR_selectstream.nonlocals )) -> CDMACTR_filestreamchar = CDMACTR_filestreamchar;
(( YDMACTR_selectstream * ) ( WDMACTR_selectstream.nonlocals )) -> BDMACTR_currentmemstream = (&BDMACTR_currentmemstream);
(( YDMACTR_selectstream * ) ( WDMACTR_selectstream.nonlocals )) -> KDMACTR_memstreamchar = KDMACTR_memstreamchar;
 /* line 474: */
EFMACTR.fn.fn_global = YEMACTR_anonymous;
EFMACTR.nonlocals = A68_NIL;
DFMACTR_cfile_msg = (EFMACTR);
 /* line 480: */
A_CALLPROC(WDMACTR_selectstream,(0),(0,(WDMACTR_selectstream).nonlocals));
 /* line 483: */
for ( ;; )
{ 
 /* line 484: */
 /* line 485: */
{ 
FFMACTR_c = A_CALLPROC(UDMACTR_streamchar,(),((UDMACTR_streamchar).nonlocals));
 /* line 486: */
 /* line 487: */
 /* line 488: */
GFMACTR = (FFMACTR_c==UULACTR_ceditid);
if ( GFMACTR )
{ 
 /* line 489: */
KFMACTR = A_ISVEC(JFMACTR,(&HFMACTR_stream),4,A68_CHAR ) ;
LFMACTR = KFMACTR.upb -1;
IFMACTR_i = KFMACTR.data;
for (;LFMACTR-- >= 0;
(IFMACTR_i++
) )
{
(*IFMACTR_i) = A_CALLPROC(UDMACTR_streamchar,(),((UDMACTR_streamchar).nonlocals));
}
 /* line 490: */
 /* line 491: */
 /* line 492: */
A_CALLPROC(WDMACTR_selectstream,(GOAAOSF_stringvalue(A_HISVEC(MFMACTR,HFMACTR_stream,4,A68_CHAR ))),(GOAAOSF_stringvalue(A_HISVEC(MFMACTR,HFMACTR_stream,4,A68_CHAR )),(WDMACTR_selectstream).nonlocals));
} 
else
{ 
 /* line 493: */
VXBAOSF_write_buffer( MCMACTR_cfile, A_HVEC(NFMACTR,FFMACTR_c,A68_CHAR ), DFMACTR_cfile_msg, &OFMACTR );
OFMACTR;
} 
} 
}
 /* line 496: */
ECMACTR_endofstreams:
 /* line 497: */
JWBAOSF_close_file(MCMACTR_cfile, RIBAOSF_ignore_msg);
 /* line 498: */
 /* line 499: */
A_CALLPROC(PSLACTR_purgeoutputfiles,(),((PSLACTR_purgeoutputfiles).nonlocals));
} 
A_PROC_EXIT(closecoutput);
return;
} 
#undef NL

A_STATIC A68_VOID  PFMACTR_anonymous(void)
{ 
A68_INT  QFMACTR_i;
A68_INT  RFMACTR;  /* to part of loop */
A68_159  SFMACTR_s;
A68_159  TFMACTR;  /* clause result */
A68_158 * UFMACTR_f;
A68_VC  XFMACTR;  /* avoid structure result */
A68_75  YFMACTR;  /* avoid structure result */
 /* line 503: */
RFMACTR = NULACTR_cstreams.dim[0].upb;
for ( QFMACTR_i = NULACTR_cstreams.dim[0].lwb;
QFMACTR_i <= RFMACTR;
QFMACTR_i += 1 )
{ 
 /* line 504: */
 /* line 505: */
SFMACTR_s = (*(&A_R1INDEX(NULACTR_cstreams,QFMACTR_i)));
 /* line 506: */
 /* line 507: */
TFMACTR = SFMACTR_s;
switch ( TFMACTR.mode )
{ 
case 1: /* REF STRUCT(REF MODE74,INT)  */
UFMACTR_f = (TFMACTR.data.mode1);
 /* line 508: */
{ 
 /* line 494: */
JWBAOSF_close_file((*(&(UFMACTR_f->File))), RIBAOSF_ignore_msg);
 /* line 509: */
if ( (ZCHACTR_tracelevel(WFMACTR)<5) )
{ 
 /* line 510: */
 /* line 511: */
 /* line 513: */
WULACTR_streamfilename( QFMACTR_i, &XFMACTR );
HZBAOSF_delete_file( XFMACTR, RIBAOSF_ignore_msg, &YFMACTR );
YFMACTR;
} 
} 
break;
default: 
/*SKIP*/;
break;
} 
}
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 3: */
 /* line 5: */
void YRLACTR(void)   /* initialise DECS coutput */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/shields/projects/Algol68/Tools/Algol68toC/src/a68toc","-v","-uname","seedfile","-lib","/home/shields/projects/Algol68/Tools/Algol68toC/a68config","-dir","/home/shields/projects/Algol68/Tools/Algol68toC/a68config","-dir","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel","-dir",".","coutput.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/shields/projects/Algol68/Tools/Algol68toC/a68config","A68_CDIR=","A68_DIR=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/shields/projects/Algol68/Tools/Algol68toC/a68config/a68config.m","./moduletracer.m","./environment.m","./environ.m","./centities.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/osif.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/messageproc.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/usefulops.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_58  JSLACTR;  /* procedure value */
A68_58  OSLACTR;  /* procedure value */
A68_162  OULACTR;  /* OPERATORS - istruct -> vector */
A68_162  PULACTR;  /* OPERATORS - trim index */
A68_161  QULACTR;  /* OPERATORS - trim index */
A68_INT  SULACTR;  /* forall loop counter */
A68_159  TULACTR;  /* OPERATORS - mode -> union mode */
A68_111  ZFMACTR;  /* procedure value */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
BCHACTR();   /* USE moduletracer */
HPIACTR();   /* USE environment */
KNLACTR();   /* USE environ */
THAACTR();   /* USE centities */
WSCAOSF();   /* USE osif */
ZRAAOSF();   /* USE messageproc */
IKAAOSF();   /* USE usefulops */
/* --- Initialise configuration information */
A_config.source_file = "/home/shields/projects/Algol68/Tools/Algol68toC/src/coutput.a68";
A_config.translation_time = "Sun Sep 26 21:50:58 2004";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "XRLACTR (from seed file) ";
A_config.spec_change_time = "Sun Sep 26 21:50:58 2004";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS coutput);
UEAALIB_a68config(LGAALIB_configinfo, CSLACTR);
 /* line 45: */
 /* line 46: */
JSLACTR.fn.fn_global = GSLACTR_generator;
JSLACTR.nonlocals = A68_NIL;
DSLACTR_anonymous = JSLACTR;
OSLACTR.fn.fn_global = LSLACTR_generator;
OSLACTR.nonlocals = A68_NIL;
ESLACTR_anonymous = OSLACTR;
 /* line 63: */
 /* line 65: */
 /* line 78: */
 /* line 80: */
USLACTR_initialised = A68_FALSE;
 /* line 82: */
 /* line 91: */
GTLACTR_modinfoopen = A68_FALSE;
 /* line 92: */
 /* line 94: */
 /* line 129: */
 /* line 144: */
 /* line 147: */
 /* line 148: */
 /* line 149: */
 /* line 150: */
 /* line 154: */
 /* line 155: */
PULACTR = A_ISVEC(OULACTR,(&MULACTR_initialcstreams),21,A68_159 ) ;
NULACTR_cstreams = A_VTRIM(QULACTR,(PULACTR),A_VRTSCRIPT(&(QULACTR.dim[0]),(PULACTR).upb,1,(PULACTR).upb,0));
 /* line 156: */
SULACTR = NULACTR_cstreams.dim[0].upb - NULACTR_cstreams.dim[0].lwb;
RULACTR_stream = NULACTR_cstreams.data;
for (;SULACTR-- >= 0;
(RULACTR_stream += NULACTR_cstreams.dim[0].stride
) )
{
(*RULACTR_stream) = A_EMPTY(TULACTR,3);
}
 /* line 158: */
UULACTR_ceditid = (A68_SSBITS)26;
 /* line 160: */
 /* line 163: */
 /* line 167: */
 /* line 203: */
 /* line 231: */
 /* line 267: */
 /* line 330: */
 /* line 342: */
 /* line 352: */
 /* line 354: */
 /* line 501: */
 /* line 502: */
ZFMACTR.fn.fn_global = PFMACTR_anonymous;
ZFMACTR.nonlocals = A68_NIL;
PSLACTR_purgeoutputfiles = ZFMACTR;
 /* line 516: */
 /* line 518: */
 /* line 524: */
/*SKIP*/;
A_PROC_EXIT(DECS coutput);
} 
#undef NL
/* end of translation of coutput.a68 */
