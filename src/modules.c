/* UNAME:UJOACTR */
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
struct A68t108{
A68_INT  Rdenno;
A_PAD_INT(PAD_19)
A68_INT  Mode;
A_PAD_INT(PAD_20)
A68_INT  Nods;
A_PAD_INT(PAD_21)
A68_INT  Deflex;
A_PAD_INT(PAD_22)
};
typedef struct A68t108  A68_108 ;    /* STRUCT(INT,INT,INT,INT)  */
A_ISTRUCT(A68_CHAR ,32,A68t110);
typedef struct A68t110  A68_110 ;    /* STRUCT 32 CHAR */
struct A68t109{
struct A68t110  N;
A_PAD_ISTRUCT(A68_110 ,PAD_23)
struct A68t110  F;
A_PAD_ISTRUCT(A68_110 ,PAD_24)
A68_INT  Level;
A_PAD_INT(PAD_25)
};
typedef struct A68t109  A68_109 ;    /* STRUCT(MODE110,MODE110,INT)  */
struct A68t111{
struct A68t110  Name;
A_PAD_ISTRUCT(A68_110 ,PAD_26)
A68_INT  Decno;
A_PAD_INT(PAD_27)
A68_INT  Level;
A_PAD_INT(PAD_28)
A68_INT  Mode;
A_PAD_INT(PAD_29)
A68_INT  Scope;
A_PAD_INT(PAD_30)
struct A68t111 * Rest;
};
typedef struct A68t111  A68_111 ;    /* STRUCT(MODE110,INT,INT,INT,INT,REF MODE111)  */
struct A68t112{
A68_INT  Rdenno;
A_PAD_INT(PAD_31)
A68_INT  Imode;
A_PAD_INT(PAD_32)
A68_INT  Length;
A_PAD_INT(PAD_33)
A68_INT  Deflex;
A_PAD_INT(PAD_34)
};
typedef struct A68t112  A68_112 ;    /* STRUCT(INT,INT,INT,INT)  */
struct A68t121{
A68_INT  Mode;
A_PAD_INT(PAD_35)
};
typedef struct A68t121  A68_121 ;    /* STRUCT(INT)  */
struct A68t113 { A68_INT mode; union {
A68_INT  mode1;
struct A68t114 * mode2;
struct A68t115 * mode3;
struct A68t116 * mode4;
struct A68t112 * mode5;
struct A68t117 * mode6;
struct A68t118 * mode7;
struct A68t108 * mode8;
struct A68t119 * mode9;
struct A68t120 * mode10;
struct A68t121  mode11;
} data; };
typedef struct A68t113  A68_113 ;    /* UNION(INT,REF MODE114,REF MODE115,REF MODE116,REF MODE112,REF MODE117,REF MODE118,REF MODE108,REF MODE119,REF MODE120,MODE121)  */
struct A68t114{
A68_INT  Rdenno;
A_PAD_INT(PAD_36)
struct A68t125 * Modelist;
};
typedef struct A68t114  A68_114 ;    /* STRUCT(INT,REF MODE125)  */
struct A68t115{
A68_INT  Deproc;
A_PAD_INT(PAD_37)
struct A68t125 * Pars;
};
typedef struct A68t115  A68_115 ;    /* STRUCT(INT,REF MODE125)  */
struct A68t116{
A68_INT  Rdenno;
A_PAD_INT(PAD_38)
A68_INT  Deflex;
A_PAD_INT(PAD_39)
struct A68t124 * Sels;
};
typedef struct A68t116  A68_116 ;    /* STRUCT(INT,INT,REF MODE124)  */
struct A68t117{
A68_INT  Deproc;
A_PAD_INT(PAD_40)
};
typedef struct A68t117  A68_117 ;    /* STRUCT(INT)  */
struct A68t118{
A68_INT  Rdenno;
A_PAD_INT(PAD_41)
A68_INT  Vecmode;
A_PAD_INT(PAD_42)
A68_INT  Deflex;
A_PAD_INT(PAD_43)
};
typedef struct A68t118  A68_118 ;    /* STRUCT(INT,INT,INT)  */
struct A68t119{
A68_INT  Mode;
A_PAD_INT(PAD_44)
struct A68t123 * Stenlist;
};
typedef struct A68t119  A68_119 ;    /* STRUCT(INT,REF MODE123)  */
struct A68t120{
A68_INT  Mode;
A_PAD_INT(PAD_45)
A68_INT  Modeproc;
A_PAD_INT(PAD_46)
struct A68t122 * El;
};
typedef struct A68t120  A68_120 ;    /* STRUCT(INT,INT,REF MODE122)  */
struct A68t122{
struct A68t120 * Am;
struct A68t122 * Rest;
};
typedef struct A68t122  A68_122 ;    /* STRUCT(REF MODE120,REF MODE122)  */
struct A68t123{
A68_INT  Mode;
A_PAD_INT(PAD_47)
A68_INT  Rdenno;
A_PAD_INT(PAD_48)
struct A68t123 * Rest;
};
typedef struct A68t123  A68_123 ;    /* STRUCT(INT,INT,REF MODE123)  */
struct A68t124{
A68_INT  Mode;
A_PAD_INT(PAD_49)
A68_INT  Fieldno;
A_PAD_INT(PAD_50)
struct A68t110  Name;
A_PAD_ISTRUCT(A68_110 ,PAD_51)
struct A68t124 * Rest;
};
typedef struct A68t124  A68_124 ;    /* STRUCT(INT,INT,MODE110,REF MODE124)  */
struct A68t125{
A68_INT  Mode;
A_PAD_INT(PAD_52)
struct A68t125 * Rest;
};
typedef struct A68t125  A68_125 ;    /* STRUCT(INT,REF MODE125)  */
A_VECTOR(struct A68t129 ,A68t128);
typedef struct A68t128  A68_128 ;    /* VECTOR [] MODE129 */
A_VECTOR(struct A68t109 ,A68t135);
typedef struct A68t135  A68_135 ;    /* VECTOR [] MODE109 */
struct A68t134 { A68_INT mode; union {
A68_VC  mode1;
struct A68t135  mode2;
} data; };
typedef struct A68t134  A68_134 ;    /* UNION(REF MODE26,REF MODE135)  */
struct A68t130{
struct A68t110  F;
A_PAD_ISTRUCT(A68_110 ,PAD_53)
A68_INT  No;
A_PAD_INT(PAD_54)
A68_INT  Nl;
A_PAD_INT(PAD_55)
A68_INT  Ng;
A_PAD_INT(PAD_56)
struct A68t134  U;
};
typedef struct A68t130  A68_130 ;    /* STRUCT(MODE110,INT,INT,INT,MODE134)  */
A_VECTOR(struct A68t133 ,A68t131);
typedef struct A68t131  A68_131 ;    /* VECTOR [] MODE133 */
struct A68t133{
struct A68t106  Prefix;
A_PAD_ISTRUCT(A68_106 ,PAD_57)
A68_BOOL  Optimised;
A_PAD_BOOL(PAD_58)
A68_BOOL  Iddec;
A_PAD_BOOL(PAD_59)
A68_BOOL  Globalproc;
A_PAD_BOOL(PAD_60)
A68_BOOL  Keptgenproc;
A_PAD_BOOL(PAD_61)
A68_BOOL  Forceuse;
A_PAD_BOOL(PAD_62)
A68_VC  Definition;
A68_VC  Rhs;
};
typedef struct A68t133  A68_133 ;    /* STRUCT(MODE106,BOOL,BOOL,BOOL,BOOL,BOOL,REF MODE26,REF MODE26)  */
A_VECTOR(struct A68t106 ,A68t132);
typedef struct A68t132  A68_132 ;    /* VECTOR [] MODE106 */
struct A68t129{
struct A68t130  Xs;
struct A68t106  Ys;
A_PAD_ISTRUCT(A68_106 ,PAD_63)
A68_LINT  Timeoflastchange;
A_PAD_LINT(PAD_64)
struct A68t131  Keptinfo;
struct A68t132  Cnames;
};
typedef struct A68t129  A68_129 ;    /* STRUCT(MODE130,MODE106,LONG INT,REF MODE131,REF MODE132)  */
struct A68t127{
struct A68t106  Uname;
A_PAD_ISTRUCT(A68_106 ,PAD_65)
struct A68t106  Lname;
A_PAD_ISTRUCT(A68_106 ,PAD_66)
struct A68t106  Gname;
A_PAD_ISTRUCT(A68_106 ,PAD_67)
struct A68t128  Specs;
};
typedef struct A68t127  A68_127 ;    /* STRUCT(MODE106,MODE106,MODE106,REF MODE128)  */
struct A68t126{
struct A68t110  Name;
A_PAD_ISTRUCT(A68_110 ,PAD_68)
struct A68t127  Ym;
struct A68t110  Formal;
A_PAD_ISTRUCT(A68_110 ,PAD_69)
struct A68t106  Ys;
A_PAD_ISTRUCT(A68_106 ,PAD_70)
A68_INT  Level;
A_PAD_INT(PAD_71)
A68_INT  Ownlevel;
A_PAD_INT(PAD_72)
};
typedef struct A68t126  A68_126 ;    /* STRUCT(MODE110,MODE127,MODE110,MODE106,INT,INT)  */
struct A68t136{
struct A68t110  Name;
A_PAD_ISTRUCT(A68_110 ,PAD_73)
struct A68t109  L;
struct A68t109  G;
A68_INT  Type;
A_PAD_INT(PAD_74)
};
typedef struct A68t136  A68_136 ;    /* STRUCT(MODE110,MODE109,MODE109,INT)  */
struct A68t137{
A68_INT  Norden;
A_PAD_INT(PAD_75)
A68_INT  Nomodes;
A_PAD_INT(PAD_76)
A68_INT  Nolabs;
A_PAD_INT(PAD_77)
A68_INT  Nodecnos;
A_PAD_INT(PAD_78)
A68_INT  Nomodules;
A_PAD_INT(PAD_79)
A68_INT  Nolibinds;
A_PAD_INT(PAD_80)
};
typedef struct A68t137  A68_137 ;    /* STRUCT(INT,INT,INT,INT,INT,INT)  */
struct A68t138{
A68_INT  Type;
A_PAD_INT(PAD_81)
A68_INT  Moduleno;
A_PAD_INT(PAD_82)
struct A68t110  Name;
A_PAD_ISTRUCT(A68_110 ,PAD_83)
struct A68t127  Ym;
};
typedef struct A68t138  A68_138 ;    /* STRUCT(INT,INT,MODE110,MODE127)  */
struct A68t139{
struct A68t136  Xmi;
struct A68t127  Ym;
};
typedef struct A68t139  A68_139 ;    /* STRUCT(MODE136,MODE127)  */
struct A68t140{
struct A68t130  Xs;
struct A68t106  Ys;
A_PAD_ISTRUCT(A68_106 ,PAD_84)
};
typedef struct A68t140  A68_140 ;    /* STRUCT(MODE130,MODE106)  */
struct A68t142 ;

A_PROCEDURE(A68_VOID ,A68t141,(struct A68t142 ),(struct A68t142 ,void *));
typedef struct A68t141  A68_141 ;    /* PROC(MODE142) VOID */
A_VECTOR(struct A68t143 ,A68t142);
typedef struct A68t142  A68_142 ;    /* VECTOR [] MODE143 */
struct A68t143 { A68_INT mode; union {
A68_CHAR  mode1;
A68_VC  mode2;
A68_SINT  mode3;
} data; };
typedef struct A68t143  A68_143 ;    /* UNION(CHAR,MODE26,SHORT INT)  */
struct A68t145 ;

A_PROCEDURE(A68_VOID ,A68t144,(struct A68t145 ,A68_INT ),(struct A68t145 ,A68_INT ,void *));
typedef struct A68t144  A68_144 ;    /* PROC(MODE145,INT) VOID */
A_VECTOR(struct A68t146 ,A68t145);
typedef struct A68t145  A68_145 ;    /* VECTOR [] MODE146 */
struct A68t146 { A68_INT mode; union {
A68_CHAR  mode1;
A68_VC  mode2;
A68_INT  mode3;
A68_SINT  mode4;
} data; };
typedef struct A68t146  A68_146 ;    /* UNION(CHAR,MODE26,INT,SHORT INT)  */

A_PROCEDURE(A68_INT ,A68t147,(A68_INT ),(A68_INT ,void *));
typedef struct A68t147  A68_147 ;    /* PROC(INT) INT */

A_PROCEDURE(A68_BOOL ,A68t148,(A68_INT ),(A68_INT ,void *));
typedef struct A68t148  A68_148 ;    /* PROC(INT) BOOL */
struct A68t149{
A68_INT  Level;
A_PAD_INT(PAD_85)
A68_INT  Block;
A_PAD_INT(PAD_86)
};
typedef struct A68t149  A68_149 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t150,(struct A68t149 *),(struct A68t149 *,void *));
typedef struct A68t150  A68_150 ;    /* PROC MODE149 */

A_PROCEDURE(A68_BOOL ,A68t151,(void),(void *));
typedef struct A68t151  A68_151 ;    /* PROC BOOL */

A_PROCEDURE(A68_BOOL ,A68t152,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t152  A68_152 ;    /* PROC(INT,INT) BOOL */

A_PROCEDURE(A68_VOID ,A68t153,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t153  A68_153 ;    /* PROC(INT,INT) VOID */

A_PROCEDURE(A68_BOOL ,A68t154,(struct A68t149 ,struct A68t149 ),(struct A68t149 ,struct A68t149 ,void *));
typedef struct A68t154  A68_154 ;    /* PROC(MODE149,MODE149) BOOL */

A_PROCEDURE(A68_BOOL ,A68t155,(struct A68t149 ),(struct A68t149 ,void *));
typedef struct A68t155  A68_155 ;    /* PROC(MODE149) BOOL */

A_PROCEDURE(A68_VOID ,A68t156,(A68_VC ,A68_BOOL ),(A68_VC ,A68_BOOL ,void *));
typedef struct A68t156  A68_156 ;    /* PROC(MODE26,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t157,(A68_VC ,A68_INT ),(A68_VC ,A68_INT ,void *));
typedef struct A68t157  A68_157 ;    /* PROC(MODE26,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t158,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t158  A68_158 ;    /* PROC(INT) REF MODE26 */
struct A68t160 ;

A_PROCEDURE(A68_VOID ,A68t159,(A68_INT ,struct A68t160 ),(A68_INT ,struct A68t160 ,void *));
typedef struct A68t159  A68_159 ;    /* PROC(INT,MODE160) VOID */
A_ROW(A68_VC ,A68t160,1);
typedef struct A68t160  A68_160 ;    /* [] MODE26 */

A_PROCEDURE(A68_BITS ,A68t161,(void),(void *));
typedef struct A68t161  A68_161 ;    /* PROC BITS */
struct A68t162{
A68_INT  Cfile;
A_PAD_INT(PAD_87)
};
typedef struct A68t162  A68_162 ;    /* STRUCT(INT)  */
struct A68t163{
A68_INT  Seedfile;
A_PAD_INT(PAD_88)
};
typedef struct A68t163  A68_163 ;    /* STRUCT(INT)  */
struct A68t164 { A68_INT mode; union {
struct A68t162  mode1;
struct A68t163  mode2;
struct A68t106  mode3;
} data; };
typedef struct A68t164  A68_164 ;    /* UNION(MODE162,MODE163,MODE106,VOID)  */
struct A68t165{
A68_VC  Version;
A68_LINT  Translationtime;
A_PAD_LINT(PAD_89)
A68_VC  Sourcefile;
struct A68t106  Nameseed;
A_PAD_ISTRUCT(A68_106 ,PAD_90)
struct A68t164  Nameseedorigin;
struct A68t166 * Used_modules;
A68_VC  Commandline;
struct A68t167 * Environment;
};
typedef struct A68t165  A68_165 ;    /* STRUCT(REF MODE26,LONG INT,REF MODE26,MODE106,MODE164,REF MODE166,REF MODE26,REF MODE167)  */
struct A68t166{
A68_VC  Modinfo_file;
struct A68t166 * Next;
};
typedef struct A68t166  A68_166 ;    /* STRUCT(REF MODE26,REF MODE166)  */
struct A68t167{
A68_VC  Env_name;
A68_VC  Env_value;
struct A68t167 * Next;
};
typedef struct A68t167  A68_167 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE167)  */
struct A68t169 ;

A_PROCEDURE(struct A68t59 *,A68t168,(A68_VC ,struct A68t169 *,A68_VC *),(A68_VC ,struct A68t169 *,A68_VC *,void *));
typedef struct A68t168  A68_168 ;    /* PROC(MODE26,REF MODE169,REF REF MODE26) REF MODE59 */
struct A68t169{
A68_VC  Dir;
struct A68t169 * Next;
};
typedef struct A68t169  A68_169 ;    /* STRUCT(REF MODE26,REF MODE169)  */
struct A68t170{
A68_INT  Mode;
A_PAD_INT(PAD_91)
A68_INT  Cvariabletype;
A_PAD_INT(PAD_92)
struct A68t149  Environ;
A68_VC  Name;
A68_VC  C_name;
struct A68t106  Prefix;
A_PAD_ISTRUCT(A68_106 ,PAD_93)
A68_BITS  Flags;
A_PAD_BITS(PAD_94)
A68_VC  Definition;
A68_VC  Rhs;
};
typedef struct A68t170  A68_170 ;    /* STRUCT(INT,INT,MODE149,REF MODE26,REF MODE26,MODE106,BITS,REF MODE26,REF MODE26)  */
struct A68t171{
A68_INT  Mode;
A_PAD_INT(PAD_95)
A68_INT  Resultmode;
A_PAD_INT(PAD_96)
A68_INT  Declevel;
A_PAD_INT(PAD_97)
struct A68t149  Environ;
A68_VC  Name;
struct A68t106  Prefix;
A_PAD_ISTRUCT(A68_106 ,PAD_98)
struct A68t106  Fnprefix;
A_PAD_ISTRUCT(A68_106 ,PAD_99)
struct A68t106  Envprefix;
A_PAD_ISTRUCT(A68_106 ,PAD_100)
A68_BITS  Flags;
A_PAD_BITS(PAD_101)
};
typedef struct A68t171  A68_171 ;    /* STRUCT(INT,INT,INT,MODE149,REF MODE26,MODE106,MODE106,MODE106,BITS)  */
struct A68t172{
struct A68t105  Label;
struct A68t149  Environ;
A68_VC  Name;
struct A68t106  Prefix;
A_PAD_ISTRUCT(A68_106 ,PAD_102)
A68_BITS  Flags;
A_PAD_BITS(PAD_103)
A68_INT  Alias;
A_PAD_INT(PAD_104)
};
typedef struct A68t172  A68_172 ;    /* STRUCT(MODE105,MODE149,REF MODE26,MODE106,BITS,INT)  */

A_PROCEDURE(struct A68t170 *,A68t173,(A68_INT ),(A68_INT ,void *));
typedef struct A68t173  A68_173 ;    /* PROC(INT) REF MODE170 */

A_PROCEDURE(A68_VOID ,A68t174,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t174  A68_174 ;    /* PROC(REF MODE26) MODE26 */

A_PROCEDURE(A68_VOID ,A68t175,(A68_VC ,struct A68t106 ,A68_INT ,A68_INT ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_VC ,A68_VC ),(A68_VC ,struct A68t106 ,A68_INT ,A68_INT ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_VC ,A68_VC ,void *));
typedef struct A68t175  A68_175 ;    /* PROC(REF MODE26,MODE106,INT,INT,BOOL,BOOL,BOOL,BOOL,BOOL,REF MODE26,REF MODE26) VOID */
A_ROW(struct A68t170 ,A68t176,1);
typedef struct A68t176  A68_176 ;    /* [] MODE170 */
A_ROW(struct A68t171 ,A68t177,1);
typedef struct A68t177  A68_177 ;    /* [] MODE171 */
A_ROW(struct A68t172 ,A68t178,1);
typedef struct A68t178  A68_178 ;    /* [] MODE172 */
struct A68t180 ;

A_PROCEDURE(A68_VOID ,A68t179,(A68_INT ,A68_INT ,A68_INT ,A68_INT ,struct A68t180 ),(A68_INT ,A68_INT ,A68_INT ,A68_INT ,struct A68t180 ,void *));
typedef struct A68t179  A68_179 ;    /* PROC(INT,INT,INT,INT,REF MODE180) VOID */
A_ROW(A68_INT ,A68t180,1);
typedef struct A68t180  A68_180 ;    /* [] INT */

A_PROCEDURE(A68_BOOL ,A68t181,(A68_VC ),(A68_VC ,void *));
typedef struct A68t181  A68_181 ;    /* PROC(MODE26) BOOL */

A_PROCEDURE(A68_VOID ,A68t182,(A68_INT ,struct A68t149 *),(A68_INT ,struct A68t149 *,void *));
typedef struct A68t182  A68_182 ;    /* PROC(INT) MODE149 */
struct A68t184 ;

A_PROCEDURE(struct A68t110 ,A68t183,(struct A68t110 ,A68_INT ,struct A68t184 ),(struct A68t110 ,A68_INT ,struct A68t184 ,void *));
typedef struct A68t183  A68_183 ;    /* PROC(MODE110,INT,MODE184) MODE110 */

A_PROCEDURE(A68_VOID ,A68t184,(struct A68t110 ,struct A68t59 *,A68_BOOL ,struct A68t139 *),(struct A68t110 ,struct A68t59 *,A68_BOOL ,struct A68t139 *,void *));
typedef struct A68t184  A68_184 ;    /* PROC(MODE110,REF MODE59,BOOL) MODE139 */
struct A68t186 ;

A_PROCEDURE(A68_VOID ,A68t185,(A68_VC ,struct A68t186 ),(A68_VC ,struct A68t186 ,void *));
typedef struct A68t185  A68_185 ;    /* PROC(MODE26,MODE186) VOID */

A_PROCEDURE(A68_VOID ,A68t186,(A68_INT ,A68_VC ),(A68_INT ,A68_VC ,void *));
typedef struct A68t186  A68_186 ;    /* PROC(INT,MODE26) VOID */

A_PROCEDURE(A68_BOOL ,A68t187,(A68_INT ,A68_VC ),(A68_INT ,A68_VC ,void *));
typedef struct A68t187  A68_187 ;    /* PROC(INT,MODE26) BOOL */

A_PROCEDURE(A68_VOID ,A68t188,(struct A68t164 ),(struct A68t164 ,void *));
typedef struct A68t188  A68_188 ;    /* PROC(MODE164) VOID */

A_PROCEDURE(struct A68t106 ,A68t189,(void),(void *));
typedef struct A68t189  A68_189 ;    /* PROC MODE106 */

A_PROCEDURE(A68_VOID ,A68t190,(struct A68t106 ),(struct A68t106 ,void *));
typedef struct A68t190  A68_190 ;    /* PROC(MODE106) VOID */

A_PROCEDURE(A68_VOID ,A68t191,(struct A68t164 ,A68_VC *),(struct A68t164 ,A68_VC *,void *));
typedef struct A68t191  A68_191 ;    /* PROC(MODE164) MODE26 */

A_PROCEDURE(A68_VOID ,A68t192,(struct A68t96 ),(struct A68t96 ,void *));
typedef struct A68t192  A68_192 ;    /* PROC(MODE96) VOID */

A_PROCEDURE(A68_VOID ,A68t193,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t193  A68_193 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,62,A68t194);
typedef struct A68t194  A68_194 ;    /* STRUCT 62 CHAR */
struct A68t195{
struct A68t106  L;
A_PAD_ISTRUCT(A68_106 ,PAD_105)
struct A68t106  G;
A_PAD_ISTRUCT(A68_106 ,PAD_106)
};
typedef struct A68t195  A68_195 ;    /* STRUCT(MODE106,MODE106)  */
struct A68t196{
struct A68t106  Uname;
A_PAD_ISTRUCT(A68_106 ,PAD_107)
struct A68t136  Xmi;
struct A68t195  Checkinfo;
};
typedef struct A68t196  A68_196 ;    /* STRUCT(MODE106,MODE136,MODE195)  */
struct A68t197{
struct A68t110  Name;
A_PAD_ISTRUCT(A68_110 ,PAD_108)
struct A68t106  Uname;
A_PAD_ISTRUCT(A68_106 ,PAD_109)
A68_BOOL  Optimised;
A_PAD_BOOL(PAD_110)
A68_BOOL  Iddec;
A_PAD_BOOL(PAD_111)
A68_BOOL  Globalproc;
A_PAD_BOOL(PAD_112)
A68_BOOL  Genproc;
A_PAD_BOOL(PAD_113)
A68_BOOL  Forceuse;
A_PAD_BOOL(PAD_114)
A68_INT  Mode;
A_PAD_INT(PAD_115)
A68_INT  Decno;
A_PAD_INT(PAD_116)
A68_VC  Definition;
A68_VC  Rhs;
struct A68t197 * Rest;
};
typedef struct A68t197  A68_197 ;    /* STRUCT(MODE110,MODE106,BOOL,BOOL,BOOL,BOOL,BOOL,INT,INT,REF MODE26,REF MODE26,REF MODE197)  */
struct A68t198{
struct A68t110  Name;
A_PAD_ISTRUCT(A68_110 ,PAD_117)
struct A68t106  Uname;
A_PAD_ISTRUCT(A68_106 ,PAD_118)
struct A68t197 * Ids;
struct A68t198 * Rest;
};
typedef struct A68t198  A68_198 ;    /* STRUCT(MODE110,MODE106,REF MODE197,REF MODE198)  */
struct A68t199{
struct A68t110  Name;
A_PAD_ISTRUCT(A68_110 ,PAD_119)
struct A68t127  Ym;
struct A68t106  Ys;
A_PAD_ISTRUCT(A68_106 ,PAD_120)
A68_INT  Level;
A_PAD_INT(PAD_121)
struct A68t197 * Ids;
struct A68t198 * Uses;
struct A68t199 * Rest;
};
typedef struct A68t199  A68_199 ;    /* STRUCT(MODE110,MODE127,MODE106,INT,REF MODE197,REF MODE198,REF MODE199)  */
A_ISTRUCT(A68_CHAR ,8,A68t200);
typedef struct A68t200  A68_200 ;    /* STRUCT 8 CHAR */
A_ISTRUCT(A68_CHAR ,3,A68t201);
typedef struct A68t201  A68_201 ;    /* STRUCT 3 CHAR */
A_ISTRUCT(A68_CHAR ,5,A68t202);
typedef struct A68t202  A68_202 ;    /* STRUCT 5 CHAR */

A_PROCEDURE(A68_VOID ,A68t203,(struct A68t110 ,struct A68t110 ,struct A68t127 ,struct A68t140 *),(struct A68t110 ,struct A68t110 ,struct A68t127 ,struct A68t140 *,void *));
typedef struct A68t203  A68_203 ;    /* PROC(MODE110,MODE110,MODE127) MODE140 */

A_PROCEDURE(A68_VOID ,A68t204,(struct A68t59 *,A68_INT *),(struct A68t59 *,A68_INT *,void *));
typedef struct A68t204  A68_204 ;    /* PROC(REF MODE59,REF INT) VOID */

A_PROCEDURE(A68_VOID ,A68t205,(struct A68t59 *,A68_VC ),(struct A68t59 *,A68_VC ,void *));
typedef struct A68t205  A68_205 ;    /* PROC(REF MODE59,REF MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t206,(struct A68t59 *,struct A68t129 *,A68_BOOL ),(struct A68t59 *,struct A68t129 *,A68_BOOL ,void *));
typedef struct A68t206  A68_206 ;    /* PROC(REF MODE59,REF MODE129,BOOL) VOID */
A_ISTRUCT(A68_CHAR ,17,A68t207);
typedef struct A68t207  A68_207 ;    /* STRUCT 17 CHAR */
A_ISTRUCT(A68_CHAR ,14,A68t208);
typedef struct A68t208  A68_208 ;    /* STRUCT 14 CHAR */

A_PROCEDURE(A68_CHAR ,A68t209,(A68_RC ),(A68_RC ,void *));
typedef struct A68t209  A68_209 ;    /* PROC(MODE27) CHAR */

A_PROCEDURE(A68_VOID ,A68t210,(A68_BOOL ,struct A68t180 *),(A68_BOOL ,struct A68t180 *,void *));
typedef struct A68t210  A68_210 ;    /* PROC(BOOL) MODE180 */
A_ISTRUCT(A68_CHAR ,13,A68t211);
typedef struct A68t211  A68_211 ;    /* STRUCT 13 CHAR */

A_PROCEDURE(A68_VOID ,A68t212,(A68_BOOL ,struct A68t131 *),(A68_BOOL ,struct A68t131 *,void *));
typedef struct A68t212  A68_212 ;    /* PROC(BOOL) MODE131 */

A_PROCEDURE(A68_VOID ,A68t213,(struct A68t110 ,struct A68t139 *),(struct A68t110 ,struct A68t139 *,void *));
typedef struct A68t213  A68_213 ;    /* PROC(MODE110) MODE139 */
A_ISTRUCT(A68_CHAR ,27,A68t214);
typedef struct A68t214  A68_214 ;    /* STRUCT 27 CHAR */
A_ISTRUCT(A68_CHAR ,19,A68t215);
typedef struct A68t215  A68_215 ;    /* STRUCT 19 CHAR */
A_ISTRUCT(A68_CHAR ,21,A68t216);
typedef struct A68t216  A68_216 ;    /* STRUCT 21 CHAR */
A_ISTRUCT(A68_CHAR ,24,A68t217);
typedef struct A68t217  A68_217 ;    /* STRUCT 24 CHAR */
A_ISTRUCT(A68_CHAR ,18,A68t218);
typedef struct A68t218  A68_218 ;    /* STRUCT 18 CHAR */

A_PROCEDURE(A68_VOID ,A68t219,(A68_BOOL ,struct A68t128 *),(A68_BOOL ,struct A68t128 *,void *));
typedef struct A68t219  A68_219 ;    /* PROC(BOOL) MODE128 */
A_ISTRUCT(A68_CHAR ,20,A68t220);
typedef struct A68t220  A68_220 ;    /* STRUCT 20 CHAR */

A_PROCEDURE(A68_VOID ,A68t221,(struct A68t110 ,struct A68t169 *,struct A68t139 *),(struct A68t110 ,struct A68t169 *,struct A68t139 *,void *));
typedef struct A68t221  A68_221 ;    /* PROC(MODE110,REF MODE169) MODE139 */
A_ISTRUCT(A68_CHAR ,2,A68t222);
typedef struct A68t222  A68_222 ;    /* STRUCT 2 CHAR */
A_ISTRUCT(A68_CHAR ,12,A68t223);
typedef struct A68t223  A68_223 ;    /* STRUCT 12 CHAR */

A_PROCEDURE(A68_VOID ,A68t224,(struct A68t110 ,A68_INT ,A68_BOOL ,struct A68t139 *),(struct A68t110 ,A68_INT ,A68_BOOL ,struct A68t139 *,void *));
typedef struct A68t224  A68_224 ;    /* PROC(MODE110,INT,BOOL) MODE139 */
A_ISTRUCT(A68_CHAR ,51,A68t225);
typedef struct A68t225  A68_225 ;    /* STRUCT 51 CHAR */
A_ROW(struct A68t199 *,A68t226,1);
typedef struct A68t226  A68_226 ;    /* [] REF MODE199 */
A_ROW(struct A68t133 ,A68t227,1);
typedef struct A68t227  A68_227 ;    /* [] MODE133 */
A_ROW(struct A68t129 ,A68t228,1);
typedef struct A68t228  A68_228 ;    /* [] MODE129 */

A_PROCEDURE(A68_VOID ,A68t229,(struct A68t136 ),(struct A68t136 ,void *));
typedef struct A68t229  A68_229 ;    /* PROC(MODE136) VOID */
A_ISTRUCT(A68_CHAR ,31,A68t230);
typedef struct A68t230  A68_230 ;    /* STRUCT 31 CHAR */

A_PROCEDURE(A68_VOID ,A68t231,(A68_BOOL ,struct A68t228 *),(A68_BOOL ,struct A68t228 *,void *));
typedef struct A68t231  A68_231 ;    /* PROC(BOOL) MODE228 */

A_PROCEDURE(A68_VOID ,A68t232,(A68_BOOL ,struct A68t226 *),(A68_BOOL ,struct A68t226 *,void *));
typedef struct A68t232  A68_232 ;    /* PROC(BOOL) MODE226 */

A_PROCEDURE(A68_VOID ,A68t233,(struct A68t130 ),(struct A68t130 ,void *));
typedef struct A68t233  A68_233 ;    /* PROC(MODE130) VOID */
A_ISTRUCT(A68_CHAR ,15,A68t234);
typedef struct A68t234  A68_234 ;    /* STRUCT 15 CHAR */

A_PROCEDURE(A68_VOID ,A68t235,(struct A68t138 ,A68_INT ),(struct A68t138 ,A68_INT ,void *));
typedef struct A68t235  A68_235 ;    /* PROC(MODE138,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t236,(struct A68t126 ),(struct A68t126 ,void *));
typedef struct A68t236  A68_236 ;    /* PROC(MODE126) VOID */

A_PROCEDURE(A68_VOID ,A68t237,(struct A68t111 ),(struct A68t111 ,void *));
typedef struct A68t237  A68_237 ;    /* PROC(MODE111) VOID */

A_PROCEDURE(A68_BOOL ,A68t238,(struct A68t127 ),(struct A68t127 ,void *));
typedef struct A68t238  A68_238 ;    /* PROC(MODE127) BOOL */
A_ISTRUCT(A68_VC ,2,A68t239);
typedef struct A68t239  A68_239 ;    /* STRUCT 2 MODE26 */

A_PROCEDURE(A68_BOOL ,A68t240,(struct A68t139 ),(struct A68t139 ,void *));
typedef struct A68t240  A68_240 ;    /* PROC(MODE139) BOOL */
A_ISTRUCT(A68_CHAR ,25,A68t241);
typedef struct A68t241  A68_241 ;    /* STRUCT 25 CHAR */

A_PROCEDURE(A68_VOID ,A68t242,(struct A68t129 ),(struct A68t129 ,void *));
typedef struct A68t242  A68_242 ;    /* PROC(MODE129) VOID */
A_ISTRUCT(struct A68t143 ,8,A68t243);
typedef struct A68t243  A68_243 ;    /* STRUCT 8 MODE143 */
A_ISTRUCT(struct A68t143 ,4,A68t244);
typedef struct A68t244  A68_244 ;    /* STRUCT 4 MODE143 */
A_ISTRUCT(struct A68t143 ,7,A68t245);
typedef struct A68t245  A68_245 ;    /* STRUCT 7 MODE143 */
A_ISTRUCT(struct A68t143 ,9,A68t246);
typedef struct A68t246  A68_246 ;    /* STRUCT 9 MODE143 */
A_ISTRUCT(struct A68t143 ,26,A68t247);
typedef struct A68t247  A68_247 ;    /* STRUCT 26 MODE143 */
A_ISTRUCT(A68_CHAR ,30,A68t248);
typedef struct A68t248  A68_248 ;    /* STRUCT 30 CHAR */
A_ISTRUCT(A68_CHAR ,26,A68t249);
typedef struct A68t249  A68_249 ;    /* STRUCT 26 CHAR */

A_PROCEDURE(A68_VOID ,A68t250,(struct A68t197 *),(struct A68t197 *,void *));
typedef struct A68t250  A68_250 ;    /* PROC(REF MODE197) VOID */

A_PROCEDURE(A68_VOID ,A68t251,(struct A68t198 *),(struct A68t198 *,void *));
typedef struct A68t251  A68_251 ;    /* PROC(REF MODE198) VOID */
A_ISTRUCT(A68_CHAR ,43,A68t252);
typedef struct A68t252  A68_252 ;    /* STRUCT 43 CHAR */
A_ISTRUCT(struct A68t146 ,3,A68t253);
typedef struct A68t253  A68_253 ;    /* STRUCT 3 MODE146 */
A_ISTRUCT(A68_CHAR ,6,A68t254);
typedef struct A68t254  A68_254 ;    /* STRUCT 6 CHAR */
A_ISTRUCT(A68_CHAR ,1,A68t255);
typedef struct A68t255  A68_255 ;    /* STRUCT 0 CHAR */
A_ISTRUCT(struct A68t146 ,5,A68t256);
typedef struct A68t256  A68_256 ;    /* STRUCT 5 MODE146 */
A_ISTRUCT(A68_CHAR ,10,A68t257);
typedef struct A68t257  A68_257 ;    /* STRUCT 10 CHAR */
A_ISTRUCT(struct A68t146 ,4,A68t258);
typedef struct A68t258  A68_258 ;    /* STRUCT 4 MODE146 */
A_ISTRUCT(A68_CHAR ,50,A68t259);
typedef struct A68t259  A68_259 ;    /* STRUCT 50 CHAR */
A_ISTRUCT(struct A68t146 ,2,A68t260);
typedef struct A68t260  A68_260 ;    /* STRUCT 2 MODE146 */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from uniquenameserver --- */
extern A68_106  ZGMACTR_newuniquename(void);
/* --- End of imports from uniquenameserver --- */


/* --- Imports from moduletracer --- */
extern A68_INT  ZCHACTR_tracelevel(A68_VC );
/* --- End of imports from moduletracer --- */


/* --- Imports from liblookup --- */
extern A68_110  HNLACTR_lookup_library(struct A68t110 ,A68_INT ,struct A68t184 );
extern A68_VOID  ZWKACTR_decodespec(A68_VC ,struct A68t186 );
/* --- End of imports from liblookup --- */


/* --- Imports from incinstallation --- */
#define VDAACTR_maxid 32
#define WDAACTR_maxuname 7
/* --- End of imports from incinstallation --- */


/* --- Imports from incid --- */
#define IAAACTR_maxidno 2000
#define MAAACTR_maxlibid 6000
#define KAAACTR_maxrdno 4000
/* --- End of imports from incid --- */


/* --- Imports from idtable --- */
extern A68_175  UVKACTR_externaldec;
extern A68_85  VVKACTR_externalcdec;
extern A68_176  FOKACTR_ids;
extern A68_177  GOKACTR_rds;
#define KOKACTR_ididentityflag 0X1U
#define QOKACTR_idoptimisedflag 0X40U
#define SOKACTR_idgprocflag 0X100U
#define TOKACTR_idkeptgenprocflag 0X200U
#define VOKACTR_idforceuseflag 0X800U
#define APKACTR_rdglobalflag 0X8U
/* --- End of imports from idtable --- */


/* --- Imports from environment --- */
extern A68_VOID  PXIACTR_assert(A68_VC ,A68_BOOL );
extern A68_VC  YQIACTR_basenamesourcefile;
extern A68_VOID  IXIACTR_error(A68_INT );
extern A68_BOOL  KQIACTR_keeplistoption;
extern A68_VOID  GWIACTR_pmessage(A68_INT ,struct A68t160 );
extern A68_VOID  OWIACTR_pwarning(A68_INT ,struct A68t160 );
extern A68_VOID  LXIACTR_terminalerror(A68_INT );
extern A68_INT  LRIACTR_filenametruncate;
extern A68_BOOL  AQIACTR_verboseoption;
extern A68_VOID  CXIACTR_warning(A68_INT );
extern A68_99  FSIACTR_list;
extern A68_165  BYIACTR_config_info;
extern A68_59 * KHJACTR_find_and_open_file(A68_VC ,struct A68t169 *,A68_VC *);
extern A68_169 * DRIACTR_modinfo_dirlist;
extern A68_169 * FRIACTR_library_directory;
/* --- End of imports from environment --- */


/* --- Imports from environ --- */
#define PQLACTR_importsstream 2
extern A68_INT  TQLACTR_nonlocdecstream(A68_INT );
extern A68_INT  WQLACTR_codestream(A68_INT );
extern A68_INT  EQLACTR_currentlevel(void);
/* --- End of imports from environ --- */


/* --- Imports from coutput --- */
extern A68_VOID  JTLACTR_writemodinfo(struct A68t142 );
extern A68_VOID  VBMACTR_writecstream(struct A68t145 ,A68_INT );
/* --- End of imports from coutput --- */


/* --- Imports from centities --- */
extern A68_SINT  EIAACTR_cnewline;
/* --- End of imports from centities --- */


/* --- Imports from osif --- */
#include <errno.h>

#define RCBAOSF_errno errno
extern A68_54  RIBAOSF_ignore_msg;
extern A68_59 * TSBAOSF_nil_file;
extern A68_BOOL  BVBAOSF_(struct A68t60 ,struct A68t60 );
extern A68_BOOL  FVBAOSF_(struct A68t60 ,struct A68t60 );
extern A68_60  PUBAOSF_io_ok;
extern A68_60  YUBAOSF_io_no_newline;
extern A68_VOID  JWBAOSF_close_file(struct A68t59 *,struct A68t54 );
extern A68_VOID  EXBAOSF_read_line(struct A68t59 *,A68_VC ,A68_INT *,struct A68t54 ,A68_60 *);
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


/* --- Imports from usefulops --- */
extern A68_VOID  BNAAOSF_before(A68_VC ,A68_CHAR ,A68_VC *);
extern A68_VOID  ZCAAOSF_makervc(A68_VC ,A68_VC *);
extern A68_VOID  WRAAOSF_xc(A68_INT ,A68_VC *);
extern A68_VOID  ROAAOSF_whole(A68_INT ,A68_INT ,A68_VC *);
extern A68_VOID  JPAAOSF_lwhole(A68_LINT ,A68_INT ,A68_VC *);
extern A68_VOID  BQAAOSF_hex(A68_LBITS ,A68_INT ,A68_VC *);
extern A68_BOOL  TQAAOSF_vcdectoint(A68_INT *,A68_VC );
/* --- End of imports from usefulops --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void AGMACTR(void);   /* uniquenameserver */
extern void BCHACTR(void);   /* moduletracer */
extern void WVKACTR(void);   /* liblookup */
extern void ODAACTR(void);   /* incinstallation */
extern void BAAACTR(void);   /* incid */
extern void YNKACTR(void);   /* idtable */
extern void HPIACTR(void);   /* environment */
extern void KNLACTR(void);   /* environ */
extern void YRLACTR(void);   /* coutput */
extern void THAACTR(void);   /* centities */
extern void WSCAOSF(void);   /* osif */
extern void IKAAOSF(void);   /* usefulops */
/* --- end of DECS initialisation functions --- */
static A68_194   YJOACTR = {"$Id: modules.c,v 1.5.2.4 2004/09/27 03:04:20 teshields Exp $"}; 
A_GISVEC(A68_VC ,ZJOACTR,YJOACTR,62)
#define AKOACTR_idlength VDAACTR_maxid
#define BKOACTR_unamelength WDAACTR_maxuname
static A68_INT  CKOACTR_checkinfolength;
static A68_110   DKOACTR = {"                                "}; 
A68_110  EKOACTR_nullid;
static A68_110   FKOACTR = {"anonymous                       "}; 
static A68_110  GKOACTR_anonymousid;
static A68_110   HKOACTR = {"a68_stdprelude_                 "}; 
A68_110  IKOACTR_stdpreludename;
static A68_110   JKOACTR = {"$                               "}; 
static A68_110  KKOACTR_stdpreludeid;
static A68_106   LKOACTR = {"       "}; 
A68_106  MKOACTR_nulluname;
#define NKOACTR_flip 't'
#define OKOACTR_flop 'f'
static A68_106   SKOACTR = {"modules"}; 
A_GISVEC(A68_VC ,TKOACTR,SKOACTR,7)
static A68_200   UKOACTR = {"MODULES("}; 
static A68_201   VKOACTR = {"): "}; 
A_GISVEC(A68_VC ,WKOACTR,UKOACTR,8)
A_GISVEC(A68_VC ,YKOACTR,VKOACTR,3)
#define ZKOACTR_currentmodinfoversion 8
static A68_200   ALOACTR = {"mod_info"}; 
static A68_200  BLOACTR_modinfomagic;
static A68_202   CLOACTR = {"-----"}; 
A_GISVEC(A68_VC ,DLOACTR,CLOACTR,5)
static A68_VC  ELOACTR_alien_termination_string;
A68_BOOL  FLOACTR_composition;
static A68_134  HLOACTR_nilspec;
static A68_140  JLOACTR_nullspec;
static A68_VC  IMOACTR_modinfo_buf;
static A68_207   LNOACTR = {"  f OF xspec is \""}; 
A_GISVEC(A68_VC ,MNOACTR,LNOACTR,17)
static A68_207   QNOACTR = {"  no OF xspec is "}; 
A_GISVEC(A68_VC ,RNOACTR,QNOACTR,17)
static A68_207   TNOACTR = {"  nl OF xspec is "}; 
A_GISVEC(A68_VC ,UNOACTR,TNOACTR,17)
static A68_207   WNOACTR = {"  ng OF xspec is "}; 
A_GISVEC(A68_VC ,XNOACTR,WNOACTR,17)
static A68_208   ZNOACTR = {"  spectype is "}; 
A_GISVEC(A68_VC ,AOOACTR,ZNOACTR,14)
static A68_211   YOOACTR = {"  ubound  is "}; 
A_GISVEC(A68_VC ,ZOOACTR,YOOACTR,13)
static A68_106   CQOACTR = {"modules"}; 
A_GISVEC(A68_VC ,DQOACTR,CQOACTR,7)
static A68_207   JSOACTR = {"unpack REF [] CAT"}; 
A_GISVEC(A68_VC ,KSOACTR,JSOACTR,17)
static A68_207   CTOACTR = {"   version no is "}; 
A_GISVEC(A68_VC ,DTOACTR,CTOACTR,17)
static A68_211   FTOACTR = {"   magic is \""}; 
A_GISVEC(A68_VC ,GTOACTR,FTOACTR,13)
static A68_214   QTOACTR = {"   version and magic are ok"}; 
A_GISVEC(A68_VC ,RTOACTR,QTOACTR,27)
static A68_207   STOACTR = {"   version no is "}; 
A_GISVEC(A68_VC ,TTOACTR,STOACTR,17)
static A68_211   VTOACTR = {"   magic is \""}; 
A_GISVEC(A68_VC ,WTOACTR,VTOACTR,13)
static A68_215   EUOACTR = {"   uname OF ym is \""}; 
A_GISVEC(A68_VC ,FUOACTR,EUOACTR,19)
static A68_215   LUOACTR = {"   name OF xmi is \""}; 
A_GISVEC(A68_VC ,MUOACTR,LUOACTR,19)
static A68_216   SUOACTR = {"   n OF l OF xmi is \""}; 
A_GISVEC(A68_VC ,TUOACTR,SUOACTR,21)
static A68_216   ZUOACTR = {"   f OF l OF xmi is \""}; 
A_GISVEC(A68_VC ,AVOACTR,ZUOACTR,21)
static A68_217   EVOACTR = {"   level OF l OF xmi is "}; 
A_GISVEC(A68_VC ,FVOACTR,EVOACTR,24)
static A68_216   JVOACTR = {"   n OF g OF xmi is \""}; 
A_GISVEC(A68_VC ,KVOACTR,JVOACTR,21)
static A68_216   QVOACTR = {"   f OF g OF xmi is \""}; 
A_GISVEC(A68_VC ,RVOACTR,QVOACTR,21)
static A68_217   VVOACTR = {"   level OF g OF xmi is "}; 
A_GISVEC(A68_VC ,WVOACTR,VVOACTR,24)
static A68_218   YVOACTR = {"   type OF xmi is "}; 
A_GISVEC(A68_VC ,ZVOACTR,YVOACTR,18)
static A68_215   DWOACTR = {"   lname OF ym is \""}; 
A_GISVEC(A68_VC ,EWOACTR,DWOACTR,19)
static A68_215   KWOACTR = {"   gname OF ym is \""}; 
A_GISVEC(A68_VC ,LWOACTR,KWOACTR,19)
static A68_220   BXOACTR = {"about to unpack spec"}; 
A_GISVEC(A68_VC ,CXOACTR,BXOACTR,20)
static A68_222   KXOACTR = {".m"}; 
A_GISVEC(A68_VC ,NXOACTR,KXOACTR,2)
static A68_223   QXOACTR = {"get modinfo("}; 
A_GISVEC(A68_VC ,RXOACTR,QXOACTR,12)
static A68_139  EYOACTR_lastmoduledetails;
static A68_225   JYOACTR = {"'give module details' called for composition module"}; 
A_GISVEC(A68_VC ,KYOACTR,JYOACTR,51)
static A68_199 * YYOACTR_contextlist;
A68_226  AZOACTR_contexts;
static A68_197 ** BZOACTR_idlist;
static A68_227  CZOACTR_currentkeptinfo;
A68_180  DZOACTR_keptdecnos;
A68_BOOL  FZOACTR_previousversionfound;
A68_BOOL  GZOACTR_rscompatiblewithpreviousversion;
A68_BOOL  HZOACTR_transcompatiblewithpreviousversi;
static A68_BOOL  IZOACTR_currentmoduleinitialised;
A68_196  JZOACTR_currentmodule;
A68_136 * KZOACTR_currentmodinfo;
static A68_195 * LZOACTR_checkinfo;
A68_228  MZOACTR_specs;
static A68_230   TZOACTR = {"maxlevel > 0 (not context void)"}; 
A_GISVEC(A68_VC ,UZOACTR,TZOACTR,31)
static A68_207   VZOACTR = {"holes not allowed"}; 
A_GISVEC(A68_VC ,XZOACTR,VZOACTR,17)
static A68_218   OAPACTR = {"level <= max level"}; 
A_GISVEC(A68_VC ,PAPACTR,OAPACTR,18)
static A68_234   ZAPACTR = {"no <= UPB specs"}; 
A_GISVEC(A68_VC ,ABPACTR,ZAPACTR,15)
static A68_214   GCPACTR = {"'add context module' called"}; 
A_GISVEC(A68_VC ,HCPACTR,GCPACTR,27)
static A68_106   LEPACTR = {"context"}; 
A_GISVEC(A68_VC ,MEPACTR,LEPACTR,7)
static A68_200   NEPACTR = {"keeplist"}; 
A_GISVEC(A68_VC ,OEPACTR,NEPACTR,8)
static A68_207   IFPACTR = {"Previous version:"}; 
A_GISVEC(A68_VC ,JFPACTR,IFPACTR,17)
static A68_241   MFPACTR = {"no previous version found"}; 
A_GISVEC(A68_VC ,NFPACTR,MFPACTR,25)
static A68_106   WGPACTR = {"modules"}; 
A_GISVEC(A68_VC ,XGPACTR,WGPACTR,7)
static A68_234   YGPACTR = {"Writing spec..."}; 
A_GISVEC(A68_VC ,ZGPACTR,YGPACTR,15)
static A68_207   HJPACTR = {"output REF [] CAT"}; 
A_GISVEC(A68_VC ,IJPACTR,HJPACTR,17)
static A68_248   PLPACTR = {"MODULES: only one spec allowed"}; 
A_GISVEC(A68_VC ,QLPACTR,PLPACTR,30)
static A68_249   PMPACTR = {"kept decno is a library id"}; 
A_GISVEC(A68_VC ,QMPACTR,PMPACTR,26)
static A68_216   SMPACTR = {"kept decno is a label"}; 
A_GISVEC(A68_VC ,TMPACTR,SMPACTR,21)
static A68_252   INPACTR = {"/* --- DECS initialisation functions --- */"}; 
A_GISVEC(A68_VC ,JNPACTR,INPACTR,43)
static A68_223   WNPACTR = {"extern void "}; 
A_GISVEC(A68_VC ,XNPACTR,WNPACTR,12)
static A68_106   BOPACTR = {"(void);"}; 
A_GISVEC(A68_VC ,COPACTR,BOPACTR,7)
static A68_254   FOPACTR = {"   /* "}; 
static A68_201   GOPACTR = {" */"}; 
A_GISVEC(A68_VC ,HOPACTR,FOPACTR,6)
A_GISVEC(A68_VC ,IOPACTR,GOPACTR,3)
static A68_255   LOPACTR = {""}; 
A_GISVEC(A68_VC ,MOPACTR,LOPACTR,0)
static A68_201   TOPACTR = {"();"}; 
A_GISVEC(A68_VC ,UOPACTR,TOPACTR,3)
static A68_257   XOPACTR = {"   /* USE "}; 
static A68_201   YOPACTR = {" */"}; 
A_GISVEC(A68_VC ,ZOPACTR,XOPACTR,10)
A_GISVEC(A68_VC ,APPACTR,YOPACTR,3)
static A68_255   DPPACTR = {""}; 
A_GISVEC(A68_VC ,EPPACTR,DPPACTR,0)
static A68_259   KPPACTR = {"/* --- end of DECS initialisation functions --- */"}; 
A_GISVEC(A68_VC ,LPPACTR,KPPACTR,50)
static A68_220   EQPACTR = {"/* --- Imports from "}; 
A_GISVEC(A68_VC ,FQPACTR,EQPACTR,20)
static A68_106   JQPACTR = {" --- */"}; 
A_GISVEC(A68_VC ,KQPACTR,JQPACTR,7)
static A68_214   RQPACTR = {"/* --- End of imports from "}; 
A_GISVEC(A68_VC ,SQPACTR,RQPACTR,27)
static A68_106   WQPACTR = {" --- */"}; 
A_GISVEC(A68_VC ,XQPACTR,WQPACTR,7)
static A68_214   HRPACTR = {"processing non-VOID context"}; 
A_GISVEC(A68_VC ,IRPACTR,HRPACTR,27)
typedef struct   /* env of non-global proc */
{
A68_INT * WOOACTR_ubound;
} EPOACTR_generator;
typedef struct   /* env of non-global proc */
{
A68_INT * WOOACTR_ubound;
} OPOACTR_generator;
typedef struct   /* env of non-global proc */
{
A68_INT * XOOACTR_cbound;
} OQOACTR_generator;
typedef struct   /* env of non-global proc */
{
A68_136 * AUOACTR_xmi;
} SWOACTR_generator;
typedef struct   /* env of non-global proc */
{
A68_136  Xmodinfo;
} BAPACTR_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  SZOACTR_maxlevel;
A_PAD_INT(PAD_122)
} JAPACTR_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} XLPACTR_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} IOOACTR_generator;

A_STATIC A68_VOID  RKOACTR_debugmessage(A68_INT  Level, A68_VC  M);

A68_VOID  NLOACTR_givespec(A68_110  N, A68_110  F, A68_127  Ym, A68_140  *ReturnedValue);

A_STATIC A68_VOID  AMOACTR_filter(A68_VC  Name, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  FMOACTR_generator(A68_BOOL  EMOACTR_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  MMOACTR_read_int(A68_59 * F, A68_INT * Ri);

A_STATIC A68_VOID  UMOACTR_read_str(A68_59 * F, A68_VC  Str);

A_STATIC A68_VOID  ENOACTR_unpackspec(A68_59 * F, A68_129 * Ymspec, A68_BOOL  Lib_init);

A_STATIC A68_CHAR  EOOACTR_hexchar(A68_RC  S);

A_STATIC A68_VOID  HOOACTR_generator(A68_BOOL  FOOACTR_anonymous, A68_180  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  DPOACTR_generator(A68_BOOL  BPOACTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  NPOACTR_generator(A68_BOOL  LPOACTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  NQOACTR_generator(A68_BOOL  LQOACTR_anonymous, A68_131  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  MSOACTR_nullmodinfo(A68_110  Name, A68_139  *ReturnedValue);

A_STATIC A68_VOID  TSOACTR_unpackmodinfo(A68_110  Name, A68_59 * F, A68_BOOL  Lib_init, A68_139  *ReturnedValue);

A_STATIC A68_VOID  RWOACTR_generator(A68_BOOL  PWOACTR_anonymous, A68_128  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  FXOACTR_getmodinfo(A68_110  Name, A68_169 * Dirlist, A68_139  *ReturnedValue);

A68_VOID  IYOACTR_givemoduledetails(A68_110  Name, A68_INT  Nametype, A68_BOOL  Closure, A68_139  *ReturnedValue);

A68_VOID  OZOACTR_initialisecurrentmodule(A68_136  Xmodinfo);

A_STATIC A68_VOID  AAPACTR_generator(A68_BOOL  YZOACTR_anonymous, A68_228  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  IAPACTR_generator(A68_BOOL  GAPACTR_anonymous, A68_226  *ReturnedValue, void *NonLocals);

A68_VOID  WAPACTR_initialisespec(A68_130  Xspec);

A68_VOID  EBPACTR_adddecsmodule(A68_138  Decsmodule, A68_INT  Level);

A68_VOID  FCPACTR_addcontextmodule(A68_126  Context);

A68_VOID  JCPACTR_addexternalid(A68_111  Id);

A68_VOID  RCPACTR_initialiseunames(void);

A_STATIC A68_BOOL  UCPACTR_setspecs(A68_127  Previousym);

A_STATIC A68_BOOL  WEPACTR_matchmodules(A68_139  Previousversion);

A68_VOID  YFPACTR_outputmoduleinformation(void);

A_STATIC A68_VOID  BGPACTR_outputspec(A68_129  Ymspec);

A_STATIC A68_VOID  WLPACTR_generator(A68_BOOL  ULPACTR_anonymous, A68_131  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  XMPACTR_declareidlist(A68_197 * Idlist);

A_STATIC A68_VOID  CNPACTR_processuselist(A68_198 * Uselist);

A68_VOID  QPPACTR_declareusedids(void);

A68_VOID  DRPACTR_processcontexts(void);

A_STATIC A68_VOID  HOOACTR_generator(A68_BOOL  FOOACTR_anonymous, A68_180  *ReturnedValue, void *NonLocals)
#define NL(x) (((IOOACTR_generator *)NonLocals)->x)
{ 
A68_180  JOOACTR;  /* clause result */
A68_180  KOOACTR;  /* OPERATORS - dynamic generator */
{ 
KOOACTR.dim[0].upb = 2 ;
KOOACTR.dim[0].lwb = 1 ;
A_1INITSTRIDES(KOOACTR) ;
( FOOACTR_anonymous? A_R1LOC(A68_INT ,KOOACTR): A_R1HEAP(A68_INT ,KOOACTR) );
JOOACTR = KOOACTR;
} 
*ReturnedValue = (JOOACTR);
return;
} 
#undef NL

A_STATIC A68_CHAR  EOOACTR_hexchar(A68_RC  S)
{ 
A68_210  GOOACTR_generator;   /* proc value of non-global proc */
A68_180  MOOACTR;  /* avoid structure result */
A68_180  LOOACTR_ir;
A68_INT * NOOACTR_i;
A68_CHAR  OOOACTR_c;
A68_CHAR * POOACTR;  /* forall control - []x */
A68_INT  QOOACTR;  /* forall loop counter */
A68_BOOL  ROOACTR;  /* optbool result */
A68_BOOL  SOOACTR;  /* optbool result */
A68_CHAR  TOOACTR;  /* clause result */
A68_INT  UOOACTR;  /* YIELD */
A68_INT  VOOACTR;  /* YIELD */
A_PROC_ENTRY(hexchar);
 /* line 255: */
{ 
A_CLOSURE( GOOACTR_generator, HOOACTR_generator, IOOACTR_generator );
A_CALLPROC(GOOACTR_generator,(A68_TRUE, &MOOACTR),(A68_TRUE, &MOOACTR,(GOOACTR_generator).nonlocals));
LOOACTR_ir = MOOACTR;
 /* line 256: */
 /* line 257: */
QOOACTR = LOOACTR_ir.dim[0].upb - LOOACTR_ir.dim[0].lwb;
if ( QOOACTR != S.dim[0].upb - S.dim[0].lwb )
{ A_ERROR( "mismatched bounds in FORALL; row no 2"); }
NOOACTR_i = LOOACTR_ir.data;
POOACTR = S.data;
for (;QOOACTR-- >= 0;
(NOOACTR_i += LOOACTR_ir.dim[0].stride
,POOACTR += S.dim[0].stride
) )
{
OOOACTR_c = *POOACTR;
 /* line 258: */
ROOACTR = ((A68_INT)(unsigned char)OOOACTR_c>=(A68_INT)(unsigned char)'0');
if ( ROOACTR )
{ /* line 259: */
ROOACTR = ((A68_INT)(unsigned char)OOOACTR_c<=(A68_INT)(unsigned char)'9');
}
if ( ROOACTR )
{ 
 /* line 260: */
(*NOOACTR_i) = ((A68_INT)(unsigned char)OOOACTR_c-(A68_INT)(unsigned char)'0');
} 
else
{ 
 /* line 261: */
SOOACTR = ((A68_INT)(unsigned char)OOOACTR_c>=(A68_INT)(unsigned char)'a');
if ( SOOACTR )
{ /* line 262: */
SOOACTR = ((A68_INT)(unsigned char)OOOACTR_c<=(A68_INT)(unsigned char)'f');
}
if ( SOOACTR )
{ 
 /* line 263: */
(*NOOACTR_i) = (((A68_INT)(unsigned char)OOOACTR_c-(A68_INT)(unsigned char)'a')+10);
} 
else
{ 
 /* line 264: */
 /* line 265: */
LXIACTR_terminalerror(261);
} 
} 
}
 /* line 266: */
 /* line 267: */
UOOACTR = 1 ;
VOOACTR = 2 ;
TOOACTR = (A68_SSBITS)((16*(*(&A_R1INDEX(LOOACTR_ir,UOOACTR))))+(*(&A_R1INDEX(LOOACTR_ir,VOOACTR))));
} 
A_PROC_EXIT(hexchar);
return( TOOACTR );
} 
#undef NL

A_STATIC A68_VOID  DPOACTR_generator(A68_BOOL  BPOACTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((EPOACTR_generator *)NonLocals)->x)
{ 
A68_VC  FPOACTR;  /* clause result */
A68_VC  GPOACTR;  /* OPERATORS - dynamic generator */
{ 
GPOACTR.upb = (*NL(WOOACTR_ubound)) ;
( BPOACTR_anonymous? A_VLOC(A68_CHAR ,GPOACTR): A_VHEAP(A68_CHAR ,GPOACTR) );
FPOACTR = GPOACTR;
} 
*ReturnedValue = (FPOACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  NPOACTR_generator(A68_BOOL  LPOACTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((OPOACTR_generator *)NonLocals)->x)
{ 
A68_VC  PPOACTR;  /* clause result */
A68_VC  QPOACTR;  /* OPERATORS - dynamic generator */
{ 
QPOACTR.upb = ((2*(*NL(WOOACTR_ubound)))+2) ;
( LPOACTR_anonymous? A_VLOC(A68_CHAR ,QPOACTR): A_VHEAP(A68_CHAR ,QPOACTR) );
PPOACTR = QPOACTR;
} 
*ReturnedValue = (PPOACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  NQOACTR_generator(A68_BOOL  LQOACTR_anonymous, A68_131  *ReturnedValue, void *NonLocals)
#define NL(x) (((OQOACTR_generator *)NonLocals)->x)
{ 
A68_131  PQOACTR;  /* clause result */
A68_131  QQOACTR;  /* OPERATORS - dynamic generator */
{ 
QQOACTR.upb = (*NL(XOOACTR_cbound)) ;
( LQOACTR_anonymous? A_VLOC(A68_133 ,QQOACTR): A_VHEAP(A68_133 ,QQOACTR) );
PQOACTR = QQOACTR;
} 
*ReturnedValue = (PQOACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  RWOACTR_generator(A68_BOOL  PWOACTR_anonymous, A68_128  *ReturnedValue, void *NonLocals)
#define NL(x) (((SWOACTR_generator *)NonLocals)->x)
{ 
A68_128  TWOACTR;  /* clause result */
A68_128  UWOACTR;  /* OPERATORS - dynamic generator */
A68_INT  VWOACTR;  /* ADICOPS - ABS INT */
{ 
VWOACTR = (*(&(NL(AUOACTR_xmi)->Type))) ;
UWOACTR.upb = A_ABS(VWOACTR) ;
( PWOACTR_anonymous? A_VLOC(A68_129 ,UWOACTR): A_VHEAP(A68_129 ,UWOACTR) );
TWOACTR = UWOACTR;
} 
*ReturnedValue = (TWOACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  AAPACTR_generator(A68_BOOL  YZOACTR_anonymous, A68_228  *ReturnedValue, void *NonLocals)
#define NL(x) (((BAPACTR_generator *)NonLocals)->x)
{ 
A68_228  CAPACTR;  /* clause result */
A68_228  DAPACTR;  /* OPERATORS - dynamic generator */
A68_INT  EAPACTR;  /* ADICOPS - ABS INT */
{ 
EAPACTR = NL(Xmodinfo).Type ;
DAPACTR.dim[0].upb = A_ABS(EAPACTR) ;
DAPACTR.dim[0].lwb = 1 ;
A_1INITSTRIDES(DAPACTR) ;
( YZOACTR_anonymous? A_R1LOC(A68_129 ,DAPACTR): A_R1HEAP(A68_129 ,DAPACTR) );
CAPACTR = DAPACTR;
} 
*ReturnedValue = (CAPACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  IAPACTR_generator(A68_BOOL  GAPACTR_anonymous, A68_226  *ReturnedValue, void *NonLocals)
#define NL(x) (((JAPACTR_generator *)NonLocals)->x)
{ 
A68_226  KAPACTR;  /* clause result */
A68_226  LAPACTR;  /* OPERATORS - dynamic generator */
{ 
LAPACTR.dim[0].upb = NL(SZOACTR_maxlevel) ;
LAPACTR.dim[0].lwb = 0 ;
A_1INITSTRIDES(LAPACTR) ;
( GAPACTR_anonymous? A_R1LOC(A68_199 *,LAPACTR): A_R1HEAP(A68_199 *,LAPACTR) );
KAPACTR = LAPACTR;
} 
*ReturnedValue = (KAPACTR);
return;
} 
#undef NL

A_STATIC A68_BOOL  UCPACTR_setspecs(A68_127  Previousym)
{ 
A68_BOOL  VCPACTR_specsmatch;
A68_BOOL  WCPACTR_outoforder;
A68_BOOL  XCPACTR_previousispartcomperror;
A68_BOOL  YCPACTR_previousiscompilationerror;
A68_129 * ZCPACTR_currentspec;
A68_INT  ADPACTR;  /* forall loop counter */
A68_140  BDPACTR;  /* avoid structure result */
A68_140  CDPACTR_previousspec;
A68_BOOL  DDPACTR;  /* clause result */
A68_VC  EDPACTR;  /* OPERATORS - istruct -> vector */
A68_110  FDPACTR;  /* OPERATORS - istruct -> vector */
A68_160  GDPACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_106 * HDPACTR;  /* YIELD */
A68_LINT * IDPACTR;  /* YIELD */
A68_134  JDPACTR;  /* united object - for case conformity */
A68_VC  KDPACTR_keeps;
A68_134  LDPACTR;  /* united object - for case conformity */
A68_VC  MDPACTR_previouskeeps;
A68_BOOL  NDPACTR;  /* clause result */
A68_VC  ODPACTR;  /* OPERATORS - trim index */
A68_134  PDPACTR;  /* united object - for case conformity */
A68_128  QDPACTR;  /* OPERATORS - simple index */
A68_INT  RDPACTR;  /* YIELD */
A68_132  SDPACTR_previouscnames;
A68_BOOL  TDPACTR;  /* clause result */
A68_BOOL  UDPACTR_cnamesmatch;
A68_106 * VDPACTR_previouscname;
A68_106 * WDPACTR_cname;
A68_132  XDPACTR;  /* forall yield */
A68_INT  YDPACTR;  /* forall loop counter */
A68_VC  ZDPACTR;  /* OPERATORS - istruct -> vector */
A68_VC  AEPACTR;  /* OPERATORS - istruct -> vector */
A68_128  BEPACTR;  /* OPERATORS - simple index */
A68_INT  CEPACTR;  /* YIELD */
A68_129 * DEPACTR_previousymspec;
A68_131 * EEPACTR;  /* YIELD */
A68_106 * FEPACTR;  /* YIELD */
A68_LINT * GEPACTR;  /* YIELD */
A68_239  HEPACTR;  /* collateral clause result */
A68_VC  IEPACTR;  /* OPERATORS - istruct -> vector */
A68_110  JEPACTR;  /* OPERATORS - istruct -> vector */
A68_VC  KEPACTR;  /* avoid structure result */
A68_160  PEPACTR;  /* OPERATORS - istruct to row */
A68_131  QEPACTR;  /* OPERATORS - nil -> mode */
A68_131 * REPACTR;  /* YIELD */
A68_106 * SEPACTR;  /* YIELD */
A68_LINT * TEPACTR;  /* YIELD */
A68_BOOL  UEPACTR;  /* clause result */
A_PROC_ENTRY(setspecs);
 /* line 679: */
 /* line 681: */
{ 
VCPACTR_specsmatch = A68_TRUE;
 /* line 682: */
WCPACTR_outoforder = A68_FALSE;
 /* line 683: */
XCPACTR_previousispartcomperror = A68_FALSE;
 /* line 684: */
YCPACTR_previousiscompilationerror = A68_FALSE;
 /* line 686: */
 /* line 687: */
ADPACTR = MZOACTR_specs.dim[0].upb - MZOACTR_specs.dim[0].lwb;
ZCPACTR_currentspec = MZOACTR_specs.data;
for (;ADPACTR-- >= 0;
(ZCPACTR_currentspec += MZOACTR_specs.dim[0].stride
) )
{
 /* line 688: */
 /* line 690: */
{ 
NLOACTR_givespec( (*(&(KZOACTR_currentmodinfo->Name))), (*(&((&(ZCPACTR_currentspec->Xs))->F))), Previousym, &BDPACTR );
CDPACTR_previousspec = BDPACTR;
 /* line 691: */
 /* line 692: */
 /* line 693: */
DDPACTR = (CDPACTR_previousspec.Xs.No==(-2));
if ( DDPACTR )
{ 
 /* line 694: */
FDPACTR = (*(&((&(ZCPACTR_currentspec->Xs))->F))) ;
GWIACTR_pmessage(323, A_HARR(GDPACTR,A_HISVEC(EDPACTR,FDPACTR,32,A68_CHAR ),A68_VC ));
 /* line 695: */
HDPACTR = (&(ZCPACTR_currentspec->Ys)) ;
(*HDPACTR) = ZGMACTR_newuniquename();
 /* line 696: */
IDPACTR = (&(ZCPACTR_currentspec->Timeoflastchange)) ;
(*IDPACTR) = (*(&((&BYIACTR_config_info)->Translationtime)));
 /* line 697: */
 /* line 698: */
 /* line 699: */
VCPACTR_specsmatch = A68_FALSE;
} 
else
{ 
 /* line 700: */
JDPACTR = (*(&((&(ZCPACTR_currentspec->Xs))->U))) ;
switch ( JDPACTR.mode )
{ 
case 1: /* REF VECTOR [] CHAR */
KDPACTR_keeps = (JDPACTR.data.mode1);
 /* line 701: */
 /* line 702: */
LDPACTR = CDPACTR_previousspec.Xs.U ;
switch ( LDPACTR.mode )
{ 
case 1: /* REF VECTOR [] CHAR */
MDPACTR_previouskeeps = (LDPACTR.data.mode1);
 /* line 703: */
 /* line 704: */
 /* line 705: */
if ( KQIACTR_keeplistoption )
{ 
 /* line 706: */
if ( (KDPACTR_keeps.upb>MDPACTR_previouskeeps.upb) )
{ 
 /* line 707: */
NDPACTR = A_VC_EQ(A_VTRIM(ODPACTR,(KDPACTR_keeps),A_VTSCRIPT(&(ODPACTR.upb),(KDPACTR_keeps).upb,1,MDPACTR_previouskeeps.upb)),MDPACTR_previouskeeps);
} 
else
{ 
 /* line 708: */
 /* line 709: */
NDPACTR = A_VC_EQ(KDPACTR_keeps,MDPACTR_previouskeeps);
} 
} 
else
{ 
 /* line 710: */
 /* line 712: */
NDPACTR = A_VC_EQ(KDPACTR_keeps,MDPACTR_previouskeeps);
} 
break;
case 2: /* REF VECTOR [] MODE109 */
 /* line 713: */
 /* line 714: */
 /* line 716: */
NDPACTR = !(XCPACTR_previousispartcomperror = A68_TRUE);
break;
default: 
A_IMP_SKIP ;
break;
} 
break;
case 2: /* REF VECTOR [] MODE109 */
 /* line 717: */
 /* line 718: */
PDPACTR = CDPACTR_previousspec.Xs.U ;
switch ( PDPACTR.mode )
{ 
case 2: /* REF VECTOR [] MODE109 */
 /* line 719: */
 /* line 721: */
{ 
QDPACTR = Previousym.Specs ;
RDPACTR = CDPACTR_previousspec.Xs.No ;
SDPACTR_previouscnames = (*(&((&A_VINDEX(QDPACTR,RDPACTR))->Cnames)));
 /* line 722: */
 /* line 723: */
TDPACTR = ((*(&(ZCPACTR_currentspec->Cnames))).upb!=SDPACTR_previouscnames.upb);
if ( TDPACTR )
{ 
 /* line 724: */
 /* line 725: */
NDPACTR = A68_FALSE;
} 
else
{ 
UDPACTR_cnamesmatch = A68_TRUE;
 /* line 726: */
 /* line 727: */
XDPACTR = (*(&(ZCPACTR_currentspec->Cnames))) ;
YDPACTR = SDPACTR_previouscnames.upb -1;
if ( YDPACTR != XDPACTR.upb -1 )
{ A_ERROR( "mismatched bounds in FORALL; row no 2"); }
VDPACTR_previouscname = SDPACTR_previouscnames.data;
WDPACTR_cname = XDPACTR.data;
for (;YDPACTR-- >= 0;
(VDPACTR_previouscname++
,WDPACTR_cname++
) )
{
 /* line 728: */
 /* line 729: */
if ( !(UDPACTR_cnamesmatch) ) break;
 /* line 730: */
UDPACTR_cnamesmatch = A_VC_EQ(A_HISVEC(ZDPACTR,(*WDPACTR_cname),7,A68_CHAR ),A_HISVEC(AEPACTR,(*VDPACTR_previouscname),7,A68_CHAR ));
}
 /* line 731: */
 /* line 732: */
 /* line 734: */
NDPACTR = UDPACTR_cnamesmatch;
} 
} 
break;
case 1: /* REF VECTOR [] CHAR */
 /* line 735: */
 /* line 736: */
 /* line 737: */
 /* line 738: */
 /* line 739: */
NDPACTR = !(YCPACTR_previousiscompilationerror = A68_TRUE);
break;
default: 
A_IMP_SKIP ;
break;
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
if ( NDPACTR )
{ 
WCPACTR_outoforder = (WCPACTR_outoforder|((*(&((&(ZCPACTR_currentspec->Xs))->No)))!=CDPACTR_previousspec.Xs.No));
 /* line 740: */
BEPACTR = Previousym.Specs ;
CEPACTR = 1 ;
DEPACTR_previousymspec = (&A_VINDEX(BEPACTR,CEPACTR));
 /* line 741: */
EEPACTR = (&(ZCPACTR_currentspec->Keptinfo)) ;
(*EEPACTR) = (*(&(DEPACTR_previousymspec->Keptinfo)));
 /* line 742: */
FEPACTR = (&(ZCPACTR_currentspec->Ys)) ;
(*FEPACTR) = CDPACTR_previousspec.Ys;
 /* line 743: */
 /* line 745: */
 /* line 746: */
GEPACTR = (&(ZCPACTR_currentspec->Timeoflastchange)) ;
(*GEPACTR) = (*(&(DEPACTR_previousymspec->Timeoflastchange)));
} 
else
{ 
 /* line 747: */
JEPACTR = (*(&((&(ZCPACTR_currentspec->Xs))->F))) ;
BNAAOSF_before( A_HISVEC(IEPACTR,JEPACTR,32,A68_CHAR ), ' ', &KEPACTR );
HEPACTR.data[0] = KEPACTR;
if ( FLOACTR_composition )
{ 
HEPACTR.data[1] = MEPACTR;
} 
else
{ 
HEPACTR.data[1] = OEPACTR;
} 
OWIACTR_pwarning(324, A_HIS1ARR(PEPACTR,HEPACTR,A68_VC ,2));
 /* line 748: */
REPACTR = (&(ZCPACTR_currentspec->Keptinfo)) ;
(*REPACTR) = A_VVAC(QEPACTR);
 /* line 749: */
SEPACTR = (&(ZCPACTR_currentspec->Ys)) ;
(*SEPACTR) = ZGMACTR_newuniquename();
 /* line 750: */
VCPACTR_specsmatch = A68_FALSE;
 /* line 751: */
 /* line 752: */
TEPACTR = (&(ZCPACTR_currentspec->Timeoflastchange)) ;
(*TEPACTR) = (*(&((&BYIACTR_config_info)->Translationtime)));
} 
} 
} 
}
 /* line 755: */
 /* line 756: */
if ( XCPACTR_previousispartcomperror )
{ 
 /* line 757: */
 /* line 758: */
CXIACTR_warning(327);
} 
else
{ 
if ( YCPACTR_previousiscompilationerror )
{ 
 /* line 759: */
 /* line 760: */
CXIACTR_warning(345);
} 
else
{ 
if ( WCPACTR_outoforder )
{ 
 /* line 761: */
CXIACTR_warning(328);
} 
} 
} 
 /* line 763: */
 /* line 764: */
UEPACTR = (VCPACTR_specsmatch&!WCPACTR_outoforder);
} 
A_PROC_EXIT(setspecs);
return( UEPACTR );
} 
#undef NL

A_STATIC A68_BOOL  WEPACTR_matchmodules(A68_139  Previousversion)
{ 
A68_VC  XEPACTR;  /* OPERATORS - istruct -> vector */
A68_106  YEPACTR;  /* OPERATORS - istruct -> vector */
A68_VC  ZEPACTR;  /* OPERATORS - istruct -> vector */
A68_106  AFPACTR;  /* OPERATORS - istruct -> vector */
A68_BOOL  BFPACTR_localcontextsmatch;
A68_VC  CFPACTR;  /* OPERATORS - istruct -> vector */
A68_106  DFPACTR;  /* OPERATORS - istruct -> vector */
A68_VC  EFPACTR;  /* OPERATORS - istruct -> vector */
A68_106  FFPACTR;  /* OPERATORS - istruct -> vector */
A68_BOOL  GFPACTR_globalcontextsmatch;
A68_BOOL  HFPACTR;  /* clause result */
A_PROC_ENTRY(matchmodules);
 /* line 772: */
 /* line 774: */
{ 
 /* line 753: */
YEPACTR = (*(&(LZOACTR_checkinfo->L))) ;
AFPACTR = Previousversion.Ym.Lname ;
BFPACTR_localcontextsmatch = A_VC_EQ(A_HISVEC(XEPACTR,YEPACTR,7,A68_CHAR ),A_HISVEC(ZEPACTR,AFPACTR,7,A68_CHAR ));
 /* line 775: */
 /* line 776: */
DFPACTR = (*(&(LZOACTR_checkinfo->G))) ;
FFPACTR = Previousversion.Ym.Gname ;
GFPACTR_globalcontextsmatch = A_VC_EQ(A_HISVEC(CFPACTR,DFPACTR,7,A68_CHAR ),A_HISVEC(EFPACTR,FFPACTR,7,A68_CHAR ));
 /* line 778: */
 /* line 779: */
if ( !BFPACTR_localcontextsmatch )
{ 
 /* line 780: */
CXIACTR_warning(334);
} 
 /* line 782: */
 /* line 783: */
if ( !GFPACTR_globalcontextsmatch )
{ 
 /* line 784: */
CXIACTR_warning(335);
} 
 /* line 786: */
 /* line 787: */
if ( ((*(&(KZOACTR_currentmodinfo->Type)))==Previousversion.Xmi.Type) )
{ 
 /* line 788: */
HFPACTR = (BFPACTR_localcontextsmatch&GFPACTR_globalcontextsmatch);
} 
else
{ 
 /* line 789: */
if ( ((*(&(KZOACTR_currentmodinfo->Type)))==(-1)) )
{ 
 /* line 790: */
CXIACTR_warning(321);
} 
else
{ 
 /* line 791: */
if ( (Previousversion.Xmi.Type==(-1)) )
{ 
 /* line 792: */
CXIACTR_warning(322);
} 
else
{ 
 /* line 793: */
CXIACTR_warning(329);
} 
} 
 /* line 794: */
 /* line 795: */
 /* line 796: */
HFPACTR = A68_FALSE;
} 
} 
A_PROC_EXIT(matchmodules);
return( HFPACTR );
} 
#undef NL

A_STATIC A68_VOID  BGPACTR_outputspec(A68_129  Ymspec)
{ 
A68_130  CGPACTR_xspec;
A68_106  DGPACTR_ys;
A68_243  EGPACTR;  /* collateral clause result */
A68_VC  FGPACTR;  /* OPERATORS - istruct -> vector */
A68_110  GGPACTR;  /* OPERATORS - istruct -> vector */
A68_143  HGPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  IGPACTR;  /* YIELD */
A68_143  JGPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  KGPACTR;  /* avoid structure result */
A68_143  LGPACTR;  /* OPERATORS - mode -> union mode */
A68_143  MGPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  NGPACTR;  /* avoid structure result */
A68_143  OGPACTR;  /* OPERATORS - mode -> union mode */
A68_143  PGPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  QGPACTR;  /* avoid structure result */
A68_143  RGPACTR;  /* OPERATORS - mode -> union mode */
A68_143  SGPACTR;  /* OPERATORS - mode -> union mode */
A68_142  TGPACTR;  /* OPERATORS - istruct -> vector */
A68_134  UGPACTR;  /* united object - for case conformity */
A68_VC  VGPACTR_rc;
A68_186  AHPACTR;  /* procedure value */
A68_244  BHPACTR;  /* collateral clause result */
A68_VC  CHPACTR;  /* avoid structure result */
A68_143  DHPACTR;  /* OPERATORS - mode -> union mode */
A68_143  EHPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  FHPACTR;  /* avoid structure result */
A68_143  GHPACTR;  /* OPERATORS - mode -> union mode */
A68_143  HHPACTR;  /* OPERATORS - mode -> union mode */
A68_142  IHPACTR;  /* OPERATORS - istruct -> vector */
A68_CHAR * JHPACTR_c;
A68_INT  KHPACTR;  /* forall loop counter */
A68_VC  LHPACTR;  /* avoid structure result */
A68_143  MHPACTR;  /* OPERATORS - mode -> union mode */
A68_142  NHPACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_245  OHPACTR;  /* collateral clause result */
A68_143  PHPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  QHPACTR;  /* OPERATORS - istruct -> vector */
A68_143  RHPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  SHPACTR;  /* YIELD */
A68_143  THPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  UHPACTR;  /* avoid structure result */
A68_143  VHPACTR;  /* OPERATORS - mode -> union mode */
A68_143  WHPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  XHPACTR;  /* avoid structure result */
A68_143  YHPACTR;  /* OPERATORS - mode -> union mode */
A68_143  ZHPACTR;  /* OPERATORS - mode -> union mode */
A68_142  AIPACTR;  /* OPERATORS - istruct -> vector */
A68_133 * BIPACTR_keptitem;
A68_131  CIPACTR;  /* forall yield */
A68_INT  DIPACTR;  /* forall loop counter */
A68_BOOL  EIPACTR_rhspresent;
A68_246  FIPACTR;  /* collateral clause result */
A68_VC  GIPACTR;  /* OPERATORS - istruct -> vector */
A68_106  HIPACTR;  /* OPERATORS - istruct -> vector */
A68_143  IIPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  JIPACTR;  /* YIELD */
A68_143  KIPACTR;  /* OPERATORS - mode -> union mode */
A68_143  LIPACTR;  /* OPERATORS - mode -> union mode */
A68_143  MIPACTR;  /* OPERATORS - mode -> union mode */
A68_143  NIPACTR;  /* OPERATORS - mode -> union mode */
A68_143  OIPACTR;  /* OPERATORS - mode -> union mode */
A68_143  PIPACTR;  /* OPERATORS - mode -> union mode */
A68_143  QIPACTR;  /* OPERATORS - mode -> union mode */
A68_143  RIPACTR;  /* OPERATORS - mode -> union mode */
A68_143  SIPACTR;  /* OPERATORS - mode -> union mode */
A68_143  TIPACTR;  /* OPERATORS - mode -> union mode */
A68_143  UIPACTR;  /* OPERATORS - mode -> union mode */
A68_143  VIPACTR;  /* OPERATORS - mode -> union mode */
A68_143  WIPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  XIPACTR;  /* YIELD */
A68_143  YIPACTR;  /* OPERATORS - mode -> union mode */
A68_142  ZIPACTR;  /* OPERATORS - istruct -> vector */
A68_244  AJPACTR;  /* collateral clause result */
A68_143  BJPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  CJPACTR;  /* YIELD */
A68_143  DJPACTR;  /* OPERATORS - mode -> union mode */
A68_143  EJPACTR;  /* OPERATORS - mode -> union mode */
A68_143  FJPACTR;  /* OPERATORS - mode -> union mode */
A68_142  GJPACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(outputspec);
 /* line 835: */
 /* line 836: */
{ 
CGPACTR_xspec = Ymspec.Xs;
 /* line 837: */
DGPACTR_ys = Ymspec.Ys;
 /* line 838: */
GGPACTR = CGPACTR_xspec.F ;
IGPACTR = A_HISVEC(FGPACTR,GGPACTR,32,A68_CHAR ) ;
EGPACTR.data[0] = A_UNITE(HGPACTR,mode2,2,IGPACTR);
EGPACTR.data[1] = A_UNITE(JGPACTR,mode3,3,EIAACTR_cnewline);
WRAAOSF_xc( CGPACTR_xspec.No, &KGPACTR );
EGPACTR.data[2] = A_UNITE(LGPACTR,mode2,2,KGPACTR);
 /* line 839: */
EGPACTR.data[3] = A_UNITE(MGPACTR,mode3,3,EIAACTR_cnewline);
WRAAOSF_xc( CGPACTR_xspec.Nl, &NGPACTR );
EGPACTR.data[4] = A_UNITE(OGPACTR,mode2,2,NGPACTR);
EGPACTR.data[5] = A_UNITE(PGPACTR,mode3,3,EIAACTR_cnewline);
WRAAOSF_xc( CGPACTR_xspec.Ng, &QGPACTR );
EGPACTR.data[6] = A_UNITE(RGPACTR,mode2,2,QGPACTR);
EGPACTR.data[7] = A_UNITE(SGPACTR,mode3,3,EIAACTR_cnewline);
JTLACTR_writemodinfo(A_HISVEC(TGPACTR,EGPACTR,8,A68_143 ));
 /* line 841: */
 /* line 842: */
UGPACTR = CGPACTR_xspec.U ;
switch ( UGPACTR.mode )
{ 
case 1: /* REF VECTOR [] CHAR */
VGPACTR_rc = (UGPACTR.data.mode1);
 /* line 843: */
 /* line 844: */
{ 
 /* line 845: */
 /* line 846: */
if ( (ZCHACTR_tracelevel(XGPACTR)!=0) )
{ 
RKOACTR_debugmessage(1, ZGPACTR);
 /* line 847: */
 /* line 848: */
AHPACTR.fn.fn_global = RKOACTR_debugmessage;
AHPACTR.nonlocals = A68_NIL;
ZWKACTR_decodespec(VGPACTR_rc, AHPACTR);
} 
 /* line 850: */
WRAAOSF_xc( 1, &CHPACTR );
BHPACTR.data[0] = A_UNITE(DHPACTR,mode2,2,CHPACTR);
BHPACTR.data[1] = A_UNITE(EHPACTR,mode3,3,EIAACTR_cnewline);
WRAAOSF_xc( VGPACTR_rc.upb, &FHPACTR );
BHPACTR.data[2] = A_UNITE(GHPACTR,mode2,2,FHPACTR);
BHPACTR.data[3] = A_UNITE(HHPACTR,mode3,3,EIAACTR_cnewline);
JTLACTR_writemodinfo(A_HISVEC(IHPACTR,BHPACTR,4,A68_143 ));
 /* line 852: */
KHPACTR = VGPACTR_rc.upb -1;
JHPACTR_c = VGPACTR_rc.data;
for (;KHPACTR-- >= 0;
(JHPACTR_c++
) )
{
BQAAOSF_hex( (A68_LBITS )(A68_BITS )(A68_INT)(unsigned char)(*JHPACTR_c), 2, &LHPACTR );
JTLACTR_writemodinfo(A_HVEC(NHPACTR,A_UNITE(MHPACTR,mode2,2,LHPACTR),A68_143 ));
}
 /* line 854: */
 /* line 855: */
 /* line 856: */
OHPACTR.data[0] = A_UNITE(PHPACTR,mode3,3,EIAACTR_cnewline);
SHPACTR = A_HISVEC(QHPACTR,DGPACTR_ys,7,A68_CHAR ) ;
OHPACTR.data[1] = A_UNITE(RHPACTR,mode2,2,SHPACTR);
 /* line 857: */
OHPACTR.data[2] = A_UNITE(THPACTR,mode3,3,EIAACTR_cnewline);
JPAAOSF_lwhole( Ymspec.Timeoflastchange, 0, &UHPACTR );
OHPACTR.data[3] = A_UNITE(VHPACTR,mode2,2,UHPACTR);
 /* line 858: */
OHPACTR.data[4] = A_UNITE(WHPACTR,mode3,3,EIAACTR_cnewline);
 /* line 859: */
ROAAOSF_whole( Ymspec.Keptinfo.upb, 0, &XHPACTR );
OHPACTR.data[5] = A_UNITE(YHPACTR,mode2,2,XHPACTR);
OHPACTR.data[6] = A_UNITE(ZHPACTR,mode3,3,EIAACTR_cnewline);
JTLACTR_writemodinfo(A_HISVEC(AIPACTR,OHPACTR,7,A68_143 ));
 /* line 861: */
 /* line 862: */
CIPACTR = Ymspec.Keptinfo ;
DIPACTR = CIPACTR.upb -1;
BIPACTR_keptitem = CIPACTR.data;
for (;DIPACTR-- >= 0;
(BIPACTR_keptitem++
) )
{
 /* line 864: */
EIPACTR_rhspresent = ((*(&(BIPACTR_keptitem->Rhs))).upb>0);
 /* line 866: */
 /* line 867: */
 /* line 868: */
HIPACTR = (*(&(BIPACTR_keptitem->Prefix))) ;
JIPACTR = A_HISVEC(GIPACTR,HIPACTR,7,A68_CHAR ) ;
FIPACTR.data[0] = A_UNITE(IIPACTR,mode2,2,JIPACTR);
if ( (*(&(BIPACTR_keptitem->Optimised))) )
{ 
FIPACTR.data[1] = A_UNITE(KIPACTR,mode1,1,NKOACTR_flip);
} 
else
{ 
 /* line 869: */
FIPACTR.data[1] = A_UNITE(LIPACTR,mode1,1,OKOACTR_flop);
} 
if ( (*(&(BIPACTR_keptitem->Iddec))) )
{ 
FIPACTR.data[2] = A_UNITE(MIPACTR,mode1,1,NKOACTR_flip);
} 
else
{ 
 /* line 870: */
FIPACTR.data[2] = A_UNITE(NIPACTR,mode1,1,OKOACTR_flop);
} 
if ( (*(&(BIPACTR_keptitem->Globalproc))) )
{ 
FIPACTR.data[3] = A_UNITE(OIPACTR,mode1,1,NKOACTR_flip);
} 
else
{ 
 /* line 871: */
FIPACTR.data[3] = A_UNITE(PIPACTR,mode1,1,OKOACTR_flop);
} 
if ( (*(&(BIPACTR_keptitem->Keptgenproc))) )
{ 
FIPACTR.data[4] = A_UNITE(QIPACTR,mode1,1,NKOACTR_flip);
} 
else
{ 
 /* line 872: */
FIPACTR.data[4] = A_UNITE(RIPACTR,mode1,1,OKOACTR_flop);
} 
if ( (*(&(BIPACTR_keptitem->Forceuse))) )
{ 
FIPACTR.data[5] = A_UNITE(SIPACTR,mode1,1,NKOACTR_flip);
} 
else
{ 
 /* line 873: */
FIPACTR.data[5] = A_UNITE(TIPACTR,mode1,1,OKOACTR_flop);
} 
if ( EIPACTR_rhspresent )
{ 
FIPACTR.data[6] = A_UNITE(UIPACTR,mode1,1,NKOACTR_flip);
} 
else
{ 
 /* line 874: */
FIPACTR.data[6] = A_UNITE(VIPACTR,mode1,1,OKOACTR_flop);
} 
 /* line 876: */
XIPACTR = (*(&(BIPACTR_keptitem->Definition))) ;
FIPACTR.data[7] = A_UNITE(WIPACTR,mode2,2,XIPACTR);
FIPACTR.data[8] = A_UNITE(YIPACTR,mode3,3,EIAACTR_cnewline);
JTLACTR_writemodinfo(A_HISVEC(ZIPACTR,FIPACTR,9,A68_143 ));
 /* line 878: */
 /* line 879: */
 /* line 880: */
if ( EIPACTR_rhspresent )
{ 
CJPACTR = (*(&(BIPACTR_keptitem->Rhs))) ;
AJPACTR.data[0] = A_UNITE(BJPACTR,mode2,2,CJPACTR);
AJPACTR.data[1] = A_UNITE(DJPACTR,mode3,3,EIAACTR_cnewline);
AJPACTR.data[2] = A_UNITE(EJPACTR,mode2,2,ELOACTR_alien_termination_string);
AJPACTR.data[3] = A_UNITE(FJPACTR,mode3,3,EIAACTR_cnewline);
 /* line 881: */
 /* line 882: */
JTLACTR_writemodinfo(A_HISVEC(GJPACTR,AJPACTR,4,A68_143 ));
} 
}
 /* line 883: */
 /* line 884: */
} 
break;
case 2: /* REF VECTOR [] MODE109 */
 /* line 885: */
 /* line 886: */
 /* line 887: */
PXIACTR_assert(IJPACTR, A68_FALSE);
break;
default: 
A_IMP_SKIP ;
break;
} 
} 
A_PROC_EXIT(outputspec);
return;
} 
#undef NL

A_STATIC A68_VOID  WLPACTR_generator(A68_BOOL  ULPACTR_anonymous, A68_131  *ReturnedValue, void *NonLocals)
#define NL(x) (((XLPACTR_generator *)NonLocals)->x)
{ 
A68_131  YLPACTR;  /* clause result */
A68_131  ZLPACTR;  /* OPERATORS - dynamic generator */
{ 
ZLPACTR.upb = DZOACTR_keptdecnos.dim[0].upb ;
( ULPACTR_anonymous? A_VLOC(A68_133 ,ZLPACTR): A_VHEAP(A68_133 ,ZLPACTR) );
YLPACTR = ZLPACTR;
} 
*ReturnedValue = (YLPACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  RKOACTR_debugmessage(A68_INT  Level, A68_VC  M)
{ 
A68_VC  XKOACTR;  /* avoid structure result */
A_PROC_ENTRY(debugmessage);
 /* line 113: */
 /* line 114: */
if ( (ZCHACTR_tracelevel(TKOACTR)>=Level) )
{ 
 /* line 115: */
ROAAOSF_whole( Level, 0, &XKOACTR );
A_CALLPROC(FSIACTR_list,(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(WKOACTR,XKOACTR),YKOACTR),M)),(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(WKOACTR,XKOACTR),YKOACTR),M),(FSIACTR_list).nonlocals));
} 
A_PROC_EXIT(debugmessage);
return;
} 
#undef NL

A68_VOID  NLOACTR_givespec(A68_110  N, A68_110  F, A68_127  Ym, A68_140  *ReturnedValue)
{ 
A68_INT  OLOACTR_no;
A68_129 * PLOACTR_spec;
A68_128  QLOACTR;  /* forall yield */
A68_INT  RLOACTR;  /* forall loop counter */
A68_VC  SLOACTR;  /* OPERATORS - istruct -> vector */
A68_110  TLOACTR;  /* OPERATORS - istruct -> vector */
A68_VC  ULOACTR;  /* OPERATORS - istruct -> vector */
A68_140  VLOACTR;  /* clause result */
A68_128  WLOACTR;  /* OPERATORS - simple index */
A68_129 * XLOACTR_spec;
A68_140  YLOACTR;  /* collateral clause result */
A_PROC_ENTRY(givespec);
 /* line 135: */
 /* line 136: */
{ 
OLOACTR_no = 1;
 /* line 137: */
 /* line 138: */
QLOACTR = Ym.Specs ;
RLOACTR = QLOACTR.upb -1;
PLOACTR_spec = QLOACTR.data;
for (;RLOACTR-- >= 0;
(PLOACTR_spec++
) )
{
 /* line 139: */
TLOACTR = (*(&((&(PLOACTR_spec->Xs))->F))) ;
if ( !(A_VC_NE(A_HISVEC(SLOACTR,TLOACTR,32,A68_CHAR ),A_HISVEC(ULOACTR,F,32,A68_CHAR ))) ) break;
 /* line 140: */
OLOACTR_no+=1;
}
 /* line 141: */
 /* line 142: */
 /* line 143: */
if ( (OLOACTR_no>Ym.Specs.upb) )
{ 
VLOACTR = JLOACTR_nullspec;
} 
else
{ 
WLOACTR = Ym.Specs ;
XLOACTR_spec = (&A_VINDEX(WLOACTR,OLOACTR_no));
 /* line 144: */
YLOACTR.Xs = (*(&(XLOACTR_spec->Xs)));
 /* line 145: */
 /* line 146: */
YLOACTR.Ys = (*(&(XLOACTR_spec->Ys)));
VLOACTR = YLOACTR;
} 
} 
A_PROC_EXIT(givespec);
*ReturnedValue = (VLOACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  AMOACTR_filter(A68_VC  Name, A68_VC  *ReturnedValue)
{ 
A68_VC  BMOACTR;  /* clause result */
A68_VC  CMOACTR;  /* OPERATORS - trim index */
A68_VC  DMOACTR;  /* avoid structure result */
A_PROC_ENTRY(filter);
 /* line 149: */
BNAAOSF_before( A_VTRIM(CMOACTR,(Name),A_VTSCRIPT(&(CMOACTR.upb),(Name).upb,1,LRIACTR_filenametruncate)), ' ', &DMOACTR );
BMOACTR = DMOACTR;
A_PROC_EXIT(filter);
*ReturnedValue = (BMOACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  FMOACTR_generator(A68_BOOL  EMOACTR_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  GMOACTR;  /* clause result */
A68_VC  HMOACTR;  /* OPERATORS - dynamic generator */
{ 
HMOACTR.upb = 500 ;
( EMOACTR_anonymous? A_VLOC(A68_CHAR ,HMOACTR): A_VHEAP(A68_CHAR ,HMOACTR) );
GMOACTR = HMOACTR;
} 
*ReturnedValue = (GMOACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  MMOACTR_read_int(A68_59 * F, A68_INT * Ri)
{ 
A68_INT  NMOACTR_chars_read;
A68_60  OMOACTR;  /* avoid structure result */
A68_BOOL  PMOACTR;  /* optbool result */
A68_VC  QMOACTR;  /* OPERATORS - trim index */
A68_BOOL  RMOACTR;  /* clause result */
A_PROC_ENTRY(read_int);
 /* line 210: */
 /* line 211: */
{ 
 /* line 212: */
 /* line 213: */
EXBAOSF_read_line( F, IMOACTR_modinfo_buf, (&NMOACTR_chars_read), RIBAOSF_ignore_msg, &OMOACTR );
PMOACTR = FVBAOSF_(OMOACTR, PUBAOSF_io_ok);
if ( ! PMOACTR )
{ /* line 214: */
PMOACTR = !TQAAOSF_vcdectoint(Ri, A_VTRIM(QMOACTR,(IMOACTR_modinfo_buf),A_VTSCRIPT(&(QMOACTR.upb),(IMOACTR_modinfo_buf).upb,1,NMOACTR_chars_read)));
}
 /* line 215: */
RMOACTR = PMOACTR;
if ( RMOACTR )
{ 
 /* line 216: */
LXIACTR_terminalerror(261);
} 
} 
A_PROC_EXIT(read_int);
return;
} 
#undef NL

A_STATIC A68_VOID  UMOACTR_read_str(A68_59 * F, A68_VC  Str)
{ 
A68_INT  VMOACTR_chars_read;
A68_60  WMOACTR;  /* avoid structure result */
A68_BOOL  XMOACTR;  /* optbool result */
A68_BOOL  YMOACTR;  /* clause result */
A68_VC  ZMOACTR;  /* OPERATORS - trim index */
A68_VC  ANOACTR;  /* OPERATORS - assign op */
A_PROC_ENTRY(read_str);
 /* line 220: */
 /* line 221: */
{ 
 /* line 222: */
 /* line 223: */
EXBAOSF_read_line( F, IMOACTR_modinfo_buf, (&VMOACTR_chars_read), RIBAOSF_ignore_msg, &WMOACTR );
XMOACTR = FVBAOSF_(WMOACTR, PUBAOSF_io_ok);
if ( ! XMOACTR )
{ /* line 224: */
XMOACTR = (VMOACTR_chars_read!=Str.upb);
}
 /* line 225: */
YMOACTR = XMOACTR;
if ( YMOACTR )
{ 
 /* line 226: */
 /* line 227: */
LXIACTR_terminalerror(261);
} 
else
{ 
 /* line 228: */
ANOACTR = A_VTRIM(ZMOACTR,(IMOACTR_modinfo_buf),A_VTSCRIPT(&(ZMOACTR.upb),(IMOACTR_modinfo_buf).upb,1,VMOACTR_chars_read)) ;
A_VASSIGN2(ANOACTR,Str,A68_CHAR );
} 
} 
A_PROC_EXIT(read_str);
return;
} 
#undef NL

A_STATIC A68_VOID  ENOACTR_unpackspec(A68_59 * F, A68_129 * Ymspec, A68_BOOL  Lib_init)
{ 
A68_130 * FNOACTR_xspec;
A68_106 * GNOACTR_ys;
A68_INT  HNOACTR_spectype;
A68_INT  INOACTR_chars_read;
A68_VC  JNOACTR;  /* OPERATORS - istruct -> vector */
A68_110 * KNOACTR;  /* OPERATORS - istruct -> vector */
A68_VC  NNOACTR;  /* OPERATORS - istruct -> vector */
A68_110  ONOACTR;  /* OPERATORS - istruct -> vector */
A68_VC  PNOACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  SNOACTR;  /* avoid structure result */
A68_VC  VNOACTR;  /* avoid structure result */
A68_VC  YNOACTR;  /* avoid structure result */
A68_VC  BOOACTR;  /* avoid structure result */
A68_INT  WOOACTR_ubound;
A68_INT  XOOACTR_cbound;
A68_VC  APOACTR;  /* avoid structure result */
A68_104  CPOACTR_generator;   /* proc value of non-global proc */
A68_VC  HPOACTR;  /* avoid structure result */
A68_VC  IPOACTR_xs;
A68_134  JPOACTR;  /* OPERATORS - mode -> union mode */
A68_134 * KPOACTR;  /* YIELD */
A68_104  MPOACTR_generator;   /* proc value of non-global proc */
A68_VC  RPOACTR;  /* avoid structure result */
A68_VC  SPOACTR_hex_spec;
A68_60  TPOACTR;  /* avoid structure result */
A68_INT  UPOACTR_i;
A68_INT  VPOACTR;  /* to part of loop */
A68_VC  WPOACTR;  /* OPERATORS - trim index */
A68_VC  XPOACTR;  /* OPERATORS - trim index */
A68_VC  YPOACTR;  /* OPERATORS - trim index */
A68_VC  ZPOACTR;  /* YIELD */
A68_RC  AQOACTR;  /* OPERATORS - vector -> row */
A68_CHAR * BQOACTR;  /* YIELD */
A68_134  EQOACTR;  /* united object - for case conformity */
A68_VC  FQOACTR_r;
A68_VC  GQOACTR;  /* clause result */
A68_186  HQOACTR;  /* procedure value */
A68_VC  IQOACTR;  /* OPERATORS - istruct -> vector */
A68_INT  JQOACTR_i;
A68_LINT * KQOACTR;  /* YIELD */
A68_212  MQOACTR_generator;   /* proc value of non-global proc */
A68_131  RQOACTR;  /* avoid structure result */
A68_131 * SQOACTR;  /* YIELD */
A68_133 * TQOACTR_keptitem;
A68_131  UQOACTR;  /* forall yield */
A68_INT  VQOACTR;  /* forall loop counter */
A68_INT  WQOACTR_chars_read;
A68_60  XQOACTR;  /* avoid structure result */
A68_INT  YQOACTR_i;
A68_VC  ZQOACTR;  /* OPERATORS - istruct -> vector */
A68_106 * AROACTR;  /* OPERATORS - istruct -> vector */
A68_VC  BROACTR;  /* OPERATORS - trim index */
A68_VC  CROACTR;  /* OPERATORS - trim index */
A68_VC  DROACTR;  /* OPERATORS - trim index */
A68_VC  EROACTR;  /* OPERATORS - istruct -> vector */
A68_106  FROACTR;  /* OPERATORS - istruct -> vector */
A68_VC  GROACTR;  /* YIELD */
A68_VC  HROACTR;  /* OPERATORS - assign op */
A68_INT  IROACTR;  /* YIELD */
A68_BOOL * JROACTR;  /* YIELD */
A68_INT  KROACTR;  /* YIELD */
A68_BOOL * LROACTR;  /* YIELD */
A68_INT  MROACTR;  /* YIELD */
A68_BOOL * NROACTR;  /* YIELD */
A68_INT  OROACTR;  /* YIELD */
A68_BOOL * PROACTR;  /* YIELD */
A68_INT  QROACTR;  /* YIELD */
A68_BOOL * RROACTR;  /* YIELD */
A68_INT  SROACTR;  /* YIELD */
A68_BOOL  TROACTR_rhspresent;
A68_VC  UROACTR;  /* OPERATORS - trim index */
A68_VC  VROACTR;  /* avoid structure result */
A68_VC * WROACTR;  /* YIELD */
A68_60  XROACTR;  /* avoid structure result */
A68_60  YROACTR_read_status;
A68_BOOL  ZROACTR;  /* clause result */
A68_VC  ASOACTR;  /* OPERATORS - trim index */
A68_VC  BSOACTR_line;
A68_BOOL  CSOACTR;  /* optbool result */
A68_VC  DSOACTR;  /* OPERATORS - trim index */
A68_BOOL  ESOACTR;  /* clause result */
A68_VC  FSOACTR;  /* avoid structure result */
A68_VC * GSOACTR;  /* YIELD */
A68_VC * HSOACTR_rhs;
A68_VC  ISOACTR;  /* OPERATORS - trim index */
A_PROC_ENTRY(unpackspec);
 /* line 238: */
 /* line 240: */
{ 
FNOACTR_xspec = (&(Ymspec->Xs));
 /* line 241: */
GNOACTR_ys = (&(Ymspec->Ys));
 /* line 243: */
 /* line 244: */
 /* line 246: */
KNOACTR = (&(FNOACTR_xspec->F)) ;
UMOACTR_read_str(F, A_ISVEC(JNOACTR,KNOACTR,32,A68_CHAR ));
ONOACTR = (*(&(FNOACTR_xspec->F))) ;
RKOACTR_debugmessage(1, A_VC_PLUS(A_VC_PLUS(MNOACTR,A_HISVEC(NNOACTR,ONOACTR,32,A68_CHAR )),A_HVEC(PNOACTR,'\"',A68_CHAR )));
 /* line 247: */
MMOACTR_read_int(F, (&(FNOACTR_xspec->No)));
WRAAOSF_xc( (*(&(FNOACTR_xspec->No))), &SNOACTR );
RKOACTR_debugmessage(1, A_VC_PLUS(RNOACTR,SNOACTR));
 /* line 248: */
MMOACTR_read_int(F, (&(FNOACTR_xspec->Nl)));
WRAAOSF_xc( (*(&(FNOACTR_xspec->Nl))), &VNOACTR );
RKOACTR_debugmessage(1, A_VC_PLUS(UNOACTR,VNOACTR));
 /* line 249: */
MMOACTR_read_int(F, (&(FNOACTR_xspec->Ng)));
WRAAOSF_xc( (*(&(FNOACTR_xspec->Ng))), &YNOACTR );
RKOACTR_debugmessage(1, A_VC_PLUS(XNOACTR,YNOACTR));
 /* line 250: */
MMOACTR_read_int(F, (&HNOACTR_spectype));
WRAAOSF_xc( HNOACTR_spectype, &BOOACTR );
RKOACTR_debugmessage(1, A_VC_PLUS(AOOACTR,BOOACTR));
 /* line 252: */
 /* line 253: */
switch ( HNOACTR_spectype )
{ 
case 1: 
 /* line 254: */
{ 
 /* line 269: */
 /* line 271: */
MMOACTR_read_int(F, (&WOOACTR_ubound));
 /* line 272: */
WRAAOSF_xc( WOOACTR_ubound, &APOACTR );
RKOACTR_debugmessage(1, A_VC_PLUS(ZOOACTR,APOACTR));
 /* line 273: */
A_CLOSURE( CPOACTR_generator, DPOACTR_generator, EPOACTR_generator );
(( EPOACTR_generator * ) ( CPOACTR_generator.nonlocals )) -> WOOACTR_ubound = (&WOOACTR_ubound);
A_CALLPROC(CPOACTR_generator,(A68_FALSE, &HPOACTR),(A68_FALSE, &HPOACTR,(CPOACTR_generator).nonlocals));
IPOACTR_xs = HPOACTR;
 /* line 274: */
KPOACTR = (&(FNOACTR_xspec->U)) ;
(*KPOACTR) = A_UNITE(JPOACTR,mode1,1,IPOACTR_xs);
 /* line 275: */
A_CLOSURE( MPOACTR_generator, NPOACTR_generator, OPOACTR_generator );
(( OPOACTR_generator * ) ( MPOACTR_generator.nonlocals )) -> WOOACTR_ubound = (&WOOACTR_ubound);
A_CALLPROC(MPOACTR_generator,(A68_FALSE, &RPOACTR),(A68_FALSE, &RPOACTR,(MPOACTR_generator).nonlocals));
SPOACTR_hex_spec = RPOACTR;
 /* line 276: */
 /* line 277: */
 /* line 278: */
EXBAOSF_read_line( F, SPOACTR_hex_spec, (&INOACTR_chars_read), RIBAOSF_ignore_msg, &TPOACTR );
if ( FVBAOSF_(TPOACTR, PUBAOSF_io_ok) )
{ 
 /* line 279: */
LXIACTR_terminalerror(261);
} 
 /* line 281: */
 /* line 282: */
VPOACTR = IPOACTR_xs.upb;
for ( UPOACTR_i = 1;
UPOACTR_i <= VPOACTR;
UPOACTR_i += 1 )
{ 
 /* line 283: */
 /* line 284: */
XPOACTR = A_VTRIM(WPOACTR,(SPOACTR_hex_spec),A_VTSCRIPT(&(WPOACTR.upb),(SPOACTR_hex_spec).upb,((2*UPOACTR_i)-1),(SPOACTR_hex_spec).upb)) ;
ZPOACTR = A_VTRIM(YPOACTR,(XPOACTR),A_VTSCRIPT(&(YPOACTR.upb),(XPOACTR).upb,1,2)) ;
BQOACTR = (&A_VINDEX(IPOACTR_xs,UPOACTR_i)) ;
(*BQOACTR) = EOOACTR_hexchar(A_VECARR(ZPOACTR,AQOACTR));
}
 /* line 286: */
 /* line 287: */
 /* line 288: */
if ( !Lib_init )
{ 
 /* line 289: */
 /* line 290: */
if ( (ZCHACTR_tracelevel(DQOACTR)>5) )
{ 
EQOACTR = (*(&(FNOACTR_xspec->U))) ;
switch ( EQOACTR.mode )
{ 
case 1: /* REF VECTOR [] CHAR */
FQOACTR_r = (EQOACTR.data.mode1);
GQOACTR = FQOACTR_r;
break;
default: 
A_IMP_SKIP ;
break;
} 
 /* line 291: */
HQOACTR.fn.fn_global = RKOACTR_debugmessage;
HQOACTR.nonlocals = A68_NIL;
ZWKACTR_decodespec(GQOACTR, HQOACTR);
} 
 /* line 293: */
UMOACTR_read_str(F, A_ISVEC(IQOACTR,GNOACTR_ys,7,A68_CHAR ));
 /* line 295: */
 /* line 296: */
MMOACTR_read_int(F, (&JQOACTR_i));
 /* line 297: */
KQOACTR = (&(Ymspec->Timeoflastchange)) ;
(*KQOACTR) = (A68_LINT )JQOACTR_i;
 /* line 299: */
MMOACTR_read_int(F, (&XOOACTR_cbound));
 /* line 301: */
A_CLOSURE( MQOACTR_generator, NQOACTR_generator, OQOACTR_generator );
(( OQOACTR_generator * ) ( MQOACTR_generator.nonlocals )) -> XOOACTR_cbound = (&XOOACTR_cbound);
A_CALLPROC(MQOACTR_generator,(A68_FALSE, &RQOACTR),(A68_FALSE, &RQOACTR,(MQOACTR_generator).nonlocals));
SQOACTR = (&(Ymspec->Keptinfo)) ;
(*SQOACTR) = RQOACTR;
 /* line 302: */
 /* line 303: */
UQOACTR = (*(&(Ymspec->Keptinfo))) ;
VQOACTR = UQOACTR.upb -1;
TQOACTR_keptitem = UQOACTR.data;
for (;VQOACTR-- >= 0;
(TQOACTR_keptitem++
) )
{
 /* line 304: */
 /* line 305: */
 /* line 306: */
 /* line 307: */
EXBAOSF_read_line( F, IMOACTR_modinfo_buf, (&WQOACTR_chars_read), RIBAOSF_ignore_msg, &XQOACTR );
if ( FVBAOSF_(XQOACTR, PUBAOSF_io_ok) )
{ 
 /* line 308: */
LXIACTR_terminalerror(261);
} 
 /* line 310: */
 /* line 311: */
AROACTR = (&(TQOACTR_keptitem->Prefix)) ;
CROACTR = A_VTRIM(BROACTR,(IMOACTR_modinfo_buf),A_VTSCRIPT(&(BROACTR.upb),(IMOACTR_modinfo_buf).upb,1,(IMOACTR_modinfo_buf).upb)) ;
FROACTR = (*(&(TQOACTR_keptitem->Prefix))) ;
GROACTR = A_ISVEC(ZQOACTR,AROACTR,7,A68_CHAR ) ;
HROACTR = A_VTRIM(DROACTR,(CROACTR),A_VTSCRIPT(&(DROACTR.upb),(CROACTR).upb,1,(YQOACTR_i = A_HISVEC(EROACTR,FROACTR,7,A68_CHAR ).upb))) ;
A_VASSIGN2(HROACTR,GROACTR,A68_CHAR );
 /* line 312: */
IROACTR = YQOACTR_i+=1 ;
JROACTR = (&(TQOACTR_keptitem->Optimised)) ;
(*JROACTR) = ((*(&A_VINDEX(IMOACTR_modinfo_buf,IROACTR)))==NKOACTR_flip);
 /* line 313: */
KROACTR = YQOACTR_i+=1 ;
LROACTR = (&(TQOACTR_keptitem->Iddec)) ;
(*LROACTR) = ((*(&A_VINDEX(IMOACTR_modinfo_buf,KROACTR)))==NKOACTR_flip);
 /* line 314: */
MROACTR = YQOACTR_i+=1 ;
NROACTR = (&(TQOACTR_keptitem->Globalproc)) ;
(*NROACTR) = ((*(&A_VINDEX(IMOACTR_modinfo_buf,MROACTR)))==NKOACTR_flip);
 /* line 315: */
OROACTR = YQOACTR_i+=1 ;
PROACTR = (&(TQOACTR_keptitem->Keptgenproc)) ;
(*PROACTR) = ((*(&A_VINDEX(IMOACTR_modinfo_buf,OROACTR)))==NKOACTR_flip);
 /* line 316: */
QROACTR = YQOACTR_i+=1 ;
RROACTR = (&(TQOACTR_keptitem->Forceuse)) ;
(*RROACTR) = ((*(&A_VINDEX(IMOACTR_modinfo_buf,QROACTR)))==NKOACTR_flip);
 /* line 318: */
SROACTR = YQOACTR_i+=1 ;
TROACTR_rhspresent = ((*(&A_VINDEX(IMOACTR_modinfo_buf,SROACTR)))==NKOACTR_flip);
 /* line 319: */
ZCAAOSF_makervc( A_VTRIM(UROACTR,(IMOACTR_modinfo_buf),A_VTSCRIPT(&(UROACTR.upb),(IMOACTR_modinfo_buf).upb,(YQOACTR_i+=1),WQOACTR_chars_read)), &VROACTR );
WROACTR = (&(TQOACTR_keptitem->Definition)) ;
(*WROACTR) = VROACTR;
 /* line 321: */
 /* line 322: */
 /* line 323: */
if ( TROACTR_rhspresent )
{ 
for ( ;; )
{ 
 /* line 324: */
 /* line 325: */
{ 
EXBAOSF_read_line( F, IMOACTR_modinfo_buf, (&WQOACTR_chars_read), RIBAOSF_ignore_msg, &XROACTR );
YROACTR_read_status = XROACTR;
 /* line 326: */
 /* line 327: */
 /* line 328: */
ZROACTR = BVBAOSF_(YROACTR_read_status, PUBAOSF_io_ok);
if ( ZROACTR )
{ 
 /* line 329: */
WQOACTR_chars_read+=1;
} 
else
{ 
 /* line 330: */
 /* line 331: */
if ( FVBAOSF_(YROACTR_read_status, YUBAOSF_io_no_newline) )
{ 
 /* line 332: */
LXIACTR_terminalerror(261);
} 
} 
} 
 /* line 333: */
BSOACTR_line = A_VTRIM(ASOACTR,(IMOACTR_modinfo_buf),A_VTSCRIPT(&(ASOACTR.upb),(IMOACTR_modinfo_buf).upb,1,WQOACTR_chars_read));
 /* line 335: */
 /* line 336: */
CSOACTR = (WQOACTR_chars_read!=(ELOACTR_alien_termination_string.upb+1));
if ( ! CSOACTR )
{ /* line 337: */
CSOACTR = A_VC_NE(A_VTRIM(DSOACTR,(BSOACTR_line),A_VTSCRIPT(&(DSOACTR.upb),(BSOACTR_line).upb,1,ELOACTR_alien_termination_string.upb)),ELOACTR_alien_termination_string);
}
 /* line 338: */
ESOACTR = CSOACTR;
if ( !ESOACTR ) break;
 /* line 339: */
ZCAAOSF_makervc( A_VC_PLUS((*(&(TQOACTR_keptitem->Rhs))),BSOACTR_line), &FSOACTR );
GSOACTR = (&(TQOACTR_keptitem->Rhs)) ;
(*GSOACTR) = FSOACTR;
}
 /* line 340: */
} 
 /* line 342: */
HSOACTR_rhs = (&(TQOACTR_keptitem->Rhs));
 /* line 343: */
 /* line 344: */
(*HSOACTR_rhs) = A_VTRIM(ISOACTR,((*HSOACTR_rhs)),A_VTSCRIPT(&(ISOACTR.upb),((*HSOACTR_rhs)).upb,1,((*HSOACTR_rhs).upb-1)));
}
 /* line 345: */
 /* line 346: */
 /* line 349: */
} 
} 
break;
case 2: 
 /* line 350: */
PXIACTR_assert(KSOACTR, A68_FALSE);
break;
default: 
 /* line 351: */
 /* line 352: */
LXIACTR_terminalerror(261);
break;
} 
} 
A_PROC_EXIT(unpackspec);
return;
} 
#undef NL

A_STATIC A68_VOID  MSOACTR_nullmodinfo(A68_110  Name, A68_139  *ReturnedValue)
{ 
A68_139  NSOACTR;  /* collateral clause result */
A68_128  OSOACTR;  /* OPERATORS - nil -> mode */
A68_139  PSOACTR;  /* clause result */
A_PROC_ENTRY(nullmodinfo);
 /* line 356: */
NSOACTR.Xmi.Name = Name;
NSOACTR.Xmi.L.N = EKOACTR_nullid;
NSOACTR.Xmi.L.F = EKOACTR_nullid;
NSOACTR.Xmi.L.Level = 0;
NSOACTR.Xmi.G.N = EKOACTR_nullid;
NSOACTR.Xmi.G.F = EKOACTR_nullid;
NSOACTR.Xmi.G.Level = 0;
 /* line 357: */
NSOACTR.Xmi.Type = (-2);
NSOACTR.Ym.Uname = MKOACTR_nulluname;
NSOACTR.Ym.Lname = MKOACTR_nulluname;
NSOACTR.Ym.Gname = MKOACTR_nulluname;
NSOACTR.Ym.Specs = A_VVAC(OSOACTR);
PSOACTR = NSOACTR;
A_PROC_EXIT(nullmodinfo);
*ReturnedValue = (PSOACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  TSOACTR_unpackmodinfo(A68_110  Name, A68_59 * F, A68_BOOL  Lib_init, A68_139  *ReturnedValue)
{ 
A68_INT  USOACTR_version;
A68_BOOL  VSOACTR;  /* optbool result */
A68_200  WSOACTR_magic;
A68_VC  XSOACTR;  /* OPERATORS - istruct -> vector */
A68_BOOL  YSOACTR;  /* clause result */
A68_VC  ZSOACTR;  /* OPERATORS - istruct -> vector */
A68_VC  ATOACTR;  /* OPERATORS - istruct -> vector */
A68_BOOL  BTOACTR;  /* clause result */
A68_VC  ETOACTR;  /* avoid structure result */
A68_VC  HTOACTR;  /* OPERATORS - istruct -> vector */
A68_VC  ITOACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  JTOACTR;  /* OPERATORS - istruct -> vector */
A68_VC  KTOACTR;  /* avoid structure result */
A68_160  LTOACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_139  MTOACTR;  /* clause result */
A68_139  NTOACTR;  /* avoid structure result */
A68_VC  UTOACTR;  /* avoid structure result */
A68_VC  XTOACTR;  /* OPERATORS - istruct -> vector */
A68_VC  YTOACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_139  ZTOACTR_ymodinfo;
A68_136 * AUOACTR_xmi;
A68_127 * BUOACTR_ym;
A68_VC  CUOACTR;  /* OPERATORS - istruct -> vector */
A68_106 * DUOACTR;  /* OPERATORS - istruct -> vector */
A68_VC  GUOACTR;  /* OPERATORS - istruct -> vector */
A68_106  HUOACTR;  /* OPERATORS - istruct -> vector */
A68_VC  IUOACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  JUOACTR;  /* OPERATORS - istruct -> vector */
A68_110 * KUOACTR;  /* OPERATORS - istruct -> vector */
A68_VC  NUOACTR;  /* OPERATORS - istruct -> vector */
A68_110  OUOACTR;  /* OPERATORS - istruct -> vector */
A68_VC  PUOACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  QUOACTR;  /* OPERATORS - istruct -> vector */
A68_110 * RUOACTR;  /* OPERATORS - istruct -> vector */
A68_VC  UUOACTR;  /* OPERATORS - istruct -> vector */
A68_110  VUOACTR;  /* OPERATORS - istruct -> vector */
A68_VC  WUOACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  XUOACTR;  /* OPERATORS - istruct -> vector */
A68_110 * YUOACTR;  /* OPERATORS - istruct -> vector */
A68_VC  BVOACTR;  /* OPERATORS - istruct -> vector */
A68_110  CVOACTR;  /* OPERATORS - istruct -> vector */
A68_VC  DVOACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  GVOACTR;  /* avoid structure result */
A68_VC  HVOACTR;  /* OPERATORS - istruct -> vector */
A68_110 * IVOACTR;  /* OPERATORS - istruct -> vector */
A68_VC  LVOACTR;  /* OPERATORS - istruct -> vector */
A68_110  MVOACTR;  /* OPERATORS - istruct -> vector */
A68_VC  NVOACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  OVOACTR;  /* OPERATORS - istruct -> vector */
A68_110 * PVOACTR;  /* OPERATORS - istruct -> vector */
A68_VC  SVOACTR;  /* OPERATORS - istruct -> vector */
A68_110  TVOACTR;  /* OPERATORS - istruct -> vector */
A68_VC  UVOACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  XVOACTR;  /* avoid structure result */
A68_VC  AWOACTR;  /* avoid structure result */
A68_VC  BWOACTR;  /* OPERATORS - istruct -> vector */
A68_106 * CWOACTR;  /* OPERATORS - istruct -> vector */
A68_VC  FWOACTR;  /* OPERATORS - istruct -> vector */
A68_106  GWOACTR;  /* OPERATORS - istruct -> vector */
A68_VC  HWOACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  IWOACTR;  /* OPERATORS - istruct -> vector */
A68_106 * JWOACTR;  /* OPERATORS - istruct -> vector */
A68_VC  MWOACTR;  /* OPERATORS - istruct -> vector */
A68_106  NWOACTR;  /* OPERATORS - istruct -> vector */
A68_VC  OWOACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_219  QWOACTR_generator;   /* proc value of non-global proc */
A68_128  WWOACTR;  /* avoid structure result */
A68_128 * XWOACTR;  /* YIELD */
A68_129 * YWOACTR_spec;
A68_128  ZWOACTR;  /* forall yield */
A68_INT  AXOACTR;  /* forall loop counter */
A_PROC_ENTRY(unpackmodinfo);
 /* line 363: */
 /* line 364: */
{ 
{ 
MMOACTR_read_int(F, (&USOACTR_version));
 /* line 365: */
 /* line 366: */
 /* line 367: */
VSOACTR = (USOACTR_version!=ZKOACTR_currentmodinfoversion);
if ( ! VSOACTR )
{{ 
UMOACTR_read_str(F, A_ISVEC(XSOACTR,(&WSOACTR_magic),8,A68_CHAR ));
 /* line 368: */
 /* line 369: */
YSOACTR = A_VC_NE(A_HISVEC(ZSOACTR,WSOACTR_magic,8,A68_CHAR ),A_HISVEC(ATOACTR,BLOACTR_modinfomagic,8,A68_CHAR ));
} 
VSOACTR = YSOACTR;
}
 /* line 370: */
BTOACTR = VSOACTR;
if ( BTOACTR )
{ 
WRAAOSF_xc( USOACTR_version, &ETOACTR );
RKOACTR_debugmessage(1, A_VC_PLUS(DTOACTR,ETOACTR));
 /* line 371: */
RKOACTR_debugmessage(1, A_VC_PLUS(A_VC_PLUS(GTOACTR,A_HISVEC(HTOACTR,BLOACTR_modinfomagic,8,A68_CHAR )),A_HVEC(ITOACTR,'\"',A68_CHAR )));
 /* line 373: */
JWBAOSF_close_file(F, RIBAOSF_ignore_msg);
 /* line 374: */
 /* line 375: */
BNAAOSF_before( A_HISVEC(JTOACTR,Name,32,A68_CHAR ), ' ', &KTOACTR );
GWIACTR_pmessage(262, A_HARR(LTOACTR,KTOACTR,A68_VC ));
 /* line 376: */
 /* line 377: */
 /* line 378: */
MSOACTR_nullmodinfo( Name, &NTOACTR );
MTOACTR = NTOACTR;
} 
else
{ 
RKOACTR_debugmessage(1, RTOACTR);
 /* line 379: */
WRAAOSF_xc( USOACTR_version, &UTOACTR );
RKOACTR_debugmessage(1, A_VC_PLUS(TTOACTR,UTOACTR));
 /* line 380: */
RKOACTR_debugmessage(1, A_VC_PLUS(A_VC_PLUS(WTOACTR,A_HISVEC(XTOACTR,BLOACTR_modinfomagic,8,A68_CHAR )),A_HVEC(YTOACTR,'\"',A68_CHAR )));
 /* line 382: */
 /* line 383: */
AUOACTR_xmi = (&((&ZTOACTR_ymodinfo)->Xmi));
 /* line 384: */
BUOACTR_ym = (&((&ZTOACTR_ymodinfo)->Ym));
 /* line 386: */
DUOACTR = (&(BUOACTR_ym->Uname)) ;
UMOACTR_read_str(F, A_ISVEC(CUOACTR,DUOACTR,7,A68_CHAR ));
 /* line 387: */
HUOACTR = (*(&(BUOACTR_ym->Uname))) ;
RKOACTR_debugmessage(1, A_VC_PLUS(A_VC_PLUS(FUOACTR,A_HISVEC(GUOACTR,HUOACTR,7,A68_CHAR )),A_HVEC(IUOACTR,'\"',A68_CHAR )));
 /* line 388: */
KUOACTR = (&(AUOACTR_xmi->Name)) ;
UMOACTR_read_str(F, A_ISVEC(JUOACTR,KUOACTR,32,A68_CHAR ));
 /* line 389: */
OUOACTR = (*(&(AUOACTR_xmi->Name))) ;
RKOACTR_debugmessage(1, A_VC_PLUS(A_VC_PLUS(MUOACTR,A_HISVEC(NUOACTR,OUOACTR,32,A68_CHAR )),A_HVEC(PUOACTR,'\"',A68_CHAR )));
 /* line 390: */
RUOACTR = (&((&(AUOACTR_xmi->L))->N)) ;
UMOACTR_read_str(F, A_ISVEC(QUOACTR,RUOACTR,32,A68_CHAR ));
 /* line 391: */
 /* line 392: */
VUOACTR = (*(&((&(AUOACTR_xmi->L))->N))) ;
RKOACTR_debugmessage(1, A_VC_PLUS(A_VC_PLUS(TUOACTR,A_HISVEC(UUOACTR,VUOACTR,32,A68_CHAR )),A_HVEC(WUOACTR,'\"',A68_CHAR )));
 /* line 393: */
YUOACTR = (&((&(AUOACTR_xmi->L))->F)) ;
UMOACTR_read_str(F, A_ISVEC(XUOACTR,YUOACTR,32,A68_CHAR ));
 /* line 394: */
 /* line 395: */
CVOACTR = (*(&((&(AUOACTR_xmi->L))->F))) ;
RKOACTR_debugmessage(1, A_VC_PLUS(A_VC_PLUS(AVOACTR,A_HISVEC(BVOACTR,CVOACTR,32,A68_CHAR )),A_HVEC(DVOACTR,'\"',A68_CHAR )));
 /* line 396: */
MMOACTR_read_int(F, (&((&(AUOACTR_xmi->L))->Level)));
 /* line 397: */
 /* line 398: */
WRAAOSF_xc( (*(&((&(AUOACTR_xmi->L))->Level))), &GVOACTR );
RKOACTR_debugmessage(1, A_VC_PLUS(FVOACTR,GVOACTR));
 /* line 399: */
IVOACTR = (&((&(AUOACTR_xmi->G))->N)) ;
UMOACTR_read_str(F, A_ISVEC(HVOACTR,IVOACTR,32,A68_CHAR ));
 /* line 400: */
 /* line 401: */
MVOACTR = (*(&((&(AUOACTR_xmi->G))->N))) ;
RKOACTR_debugmessage(1, A_VC_PLUS(A_VC_PLUS(KVOACTR,A_HISVEC(LVOACTR,MVOACTR,32,A68_CHAR )),A_HVEC(NVOACTR,'\"',A68_CHAR )));
 /* line 402: */
PVOACTR = (&((&(AUOACTR_xmi->G))->F)) ;
UMOACTR_read_str(F, A_ISVEC(OVOACTR,PVOACTR,32,A68_CHAR ));
 /* line 403: */
 /* line 404: */
TVOACTR = (*(&((&(AUOACTR_xmi->G))->F))) ;
RKOACTR_debugmessage(1, A_VC_PLUS(A_VC_PLUS(RVOACTR,A_HISVEC(SVOACTR,TVOACTR,32,A68_CHAR )),A_HVEC(UVOACTR,'\"',A68_CHAR )));
 /* line 405: */
MMOACTR_read_int(F, (&((&(AUOACTR_xmi->G))->Level)));
 /* line 406: */
 /* line 407: */
WRAAOSF_xc( (*(&((&(AUOACTR_xmi->G))->Level))), &XVOACTR );
RKOACTR_debugmessage(1, A_VC_PLUS(WVOACTR,XVOACTR));
 /* line 408: */
MMOACTR_read_int(F, (&(AUOACTR_xmi->Type)));
 /* line 409: */
 /* line 410: */
WRAAOSF_xc( (*(&(AUOACTR_xmi->Type))), &AWOACTR );
RKOACTR_debugmessage(1, A_VC_PLUS(ZVOACTR,AWOACTR));
 /* line 411: */
CWOACTR = (&(BUOACTR_ym->Lname)) ;
UMOACTR_read_str(F, A_ISVEC(BWOACTR,CWOACTR,7,A68_CHAR ));
 /* line 412: */
 /* line 413: */
GWOACTR = (*(&(BUOACTR_ym->Lname))) ;
RKOACTR_debugmessage(1, A_VC_PLUS(A_VC_PLUS(EWOACTR,A_HISVEC(FWOACTR,GWOACTR,7,A68_CHAR )),A_HVEC(HWOACTR,'\"',A68_CHAR )));
 /* line 414: */
JWOACTR = (&(BUOACTR_ym->Gname)) ;
UMOACTR_read_str(F, A_ISVEC(IWOACTR,JWOACTR,7,A68_CHAR ));
 /* line 415: */
 /* line 416: */
NWOACTR = (*(&(BUOACTR_ym->Gname))) ;
RKOACTR_debugmessage(1, A_VC_PLUS(A_VC_PLUS(LWOACTR,A_HISVEC(MWOACTR,NWOACTR,7,A68_CHAR )),A_HVEC(OWOACTR,'\"',A68_CHAR )));
 /* line 418: */
A_CLOSURE( QWOACTR_generator, RWOACTR_generator, SWOACTR_generator );
(( SWOACTR_generator * ) ( QWOACTR_generator.nonlocals )) -> AUOACTR_xmi = AUOACTR_xmi;
A_CALLPROC(QWOACTR_generator,(A68_FALSE, &WWOACTR),(A68_FALSE, &WWOACTR,(QWOACTR_generator).nonlocals));
XWOACTR = (&(BUOACTR_ym->Specs)) ;
(*XWOACTR) = WWOACTR;
 /* line 420: */
 /* line 421: */
ZWOACTR = (*(&(BUOACTR_ym->Specs))) ;
AXOACTR = ZWOACTR.upb -1;
YWOACTR_spec = ZWOACTR.data;
for (;AXOACTR-- >= 0;
(YWOACTR_spec++
) )
{
 /* line 422: */
RKOACTR_debugmessage(1, CXOACTR);
 /* line 423: */
 /* line 424: */
ENOACTR_unpackspec(F, YWOACTR_spec, Lib_init);
}
 /* line 425: */
PTOACTR_return:
 /* line 426: */
JWBAOSF_close_file(F, RIBAOSF_ignore_msg);
 /* line 427: */
 /* line 428: */
MTOACTR = ZTOACTR_ymodinfo;
} 
} 
} 
A_PROC_EXIT(unpackmodinfo);
*ReturnedValue = (MTOACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  FXOACTR_getmodinfo(A68_110  Name, A68_169 * Dirlist, A68_139  *ReturnedValue)
{ 
A68_VC  GXOACTR;  /* OPERATORS - istruct -> vector */
A68_VC  HXOACTR;  /* OPERATORS - istruct -> vector */
A68_139  IXOACTR;  /* clause result */
A68_139  JXOACTR;  /* OPERATORS - skip to mode */
A68_VC  LXOACTR;  /* OPERATORS - istruct -> vector */
A68_VC  MXOACTR;  /* avoid structure result */
A68_VC  OXOACTR_modinfobasename;
A68_VC  PXOACTR_full_filename;
A68_VC  SXOACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_59 * TXOACTR_modinfofile;
A68_BOOL  UXOACTR;  /* clause result */
A68_139  VXOACTR;  /* avoid structure result */
A68_166  WXOACTR;  /* collateral clause result */
A68_166 * XXOACTR;  /* YIELD */
A68_166 ** YXOACTR;  /* YIELD */
A68_139  ZXOACTR;  /* avoid structure result */
A_PROC_ENTRY(getmodinfo);
 /* line 439: */
 /* line 440: */
 /* line 429: */
 /* line 441: */
if ( A_VC_EQ(A_HISVEC(GXOACTR,Name,32,A68_CHAR ),A_HISVEC(HXOACTR,KKOACTR_stdpreludeid,32,A68_CHAR )) )
{ 
LXIACTR_terminalerror(804);
 /* line 442: */
 /* line 443: */
 /* line 444: */
IXOACTR = JXOACTR;
} 
else
{ 
{ 
AMOACTR_filter( A_HISVEC(LXOACTR,Name,32,A68_CHAR ), &MXOACTR );
OXOACTR_modinfobasename = A_VC_PLUS(MXOACTR,NXOACTR);
 /* line 445: */
 /* line 446: */
RKOACTR_debugmessage(1, A_VC_PLUS(A_VC_PLUS(RXOACTR,OXOACTR_modinfobasename),A_HVEC(SXOACTR,')',A68_CHAR )));
 /* line 447: */
TXOACTR_modinfofile = KHJACTR_find_and_open_file(OXOACTR_modinfobasename, Dirlist, (&PXOACTR_full_filename));
 /* line 448: */
 /* line 449: */
 /* line 450: */
UXOACTR = (TXOACTR_modinfofile==TSBAOSF_nil_file);
if ( UXOACTR )
{ 
 /* line 451: */
 /* line 452: */
MSOACTR_nullmodinfo( Name, &VXOACTR );
IXOACTR = VXOACTR;
} 
else
{ 
WXOACTR.Modinfo_file = PXOACTR_full_filename;
WXOACTR.Next = (*(&((&BYIACTR_config_info)->Used_modules)));
XXOACTR = A_HEAP(A68_166 ) ;
(*XXOACTR) = WXOACTR ;
YXOACTR = (&((&BYIACTR_config_info)->Used_modules)) ;
(*YXOACTR) = XXOACTR;
 /* line 453: */
 /* line 454: */
TSOACTR_unpackmodinfo( Name, TXOACTR_modinfofile, A68_FALSE, &ZXOACTR );
IXOACTR = ZXOACTR;
} 
} 
} 
A_PROC_EXIT(getmodinfo);
*ReturnedValue = (IXOACTR);
return;
} 
#undef NL

A68_VOID  IYOACTR_givemoduledetails(A68_110  Name, A68_INT  Nametype, A68_BOOL  Closure, A68_139  *ReturnedValue)
{ 
A68_139  LYOACTR;  /* clause result */
A68_139  MYOACTR;  /* OPERATORS - skip to mode */
A68_139  NYOACTR;  /* avoid structure result */
A68_184  OYOACTR;  /* procedure value */
A68_110  PYOACTR_lib_module;
A68_BOOL  QYOACTR;  /* clause result */
A68_VC  RYOACTR;  /* OPERATORS - istruct -> vector */
A68_VC  SYOACTR;  /* OPERATORS - simple index */
A68_INT  TYOACTR;  /* YIELD */
A68_139  UYOACTR;  /* avoid structure result */
A68_139  VYOACTR;  /* avoid structure result */
A_PROC_ENTRY(givemoduledetails);
 /* line 469: */
 /* line 471: */
 /* line 472: */
if ( Closure )
{ 
PXIACTR_assert(KYOACTR, A68_FALSE);
 /* line 473: */
 /* line 474: */
 /* line 475: */
LYOACTR = MYOACTR;
} 
else
{ 
 /* line 476: */
 /* line 477: */
if ( (Nametype==0) )
{ 
 /* line 478: */
 /* line 479: */
FXOACTR_getmodinfo( Name, DRIACTR_modinfo_dirlist, &NYOACTR );
LYOACTR = NYOACTR;
} 
else
{ 
{ 
OYOACTR.fn.fn_global = TSOACTR_unpackmodinfo;
OYOACTR.nonlocals = A68_NIL;
PYOACTR_lib_module = HNLACTR_lookup_library(Name, Nametype, OYOACTR);
 /* line 480: */
 /* line 481: */
 /* line 482: */
SYOACTR = A_HISVEC(RYOACTR,PYOACTR_lib_module,32,A68_CHAR ) ;
TYOACTR = 1 ;
QYOACTR = (A_VINDEX(SYOACTR,TYOACTR)==' ');
if ( QYOACTR )
{ 
 /* line 483: */
 /* line 484: */
MSOACTR_nullmodinfo( Name, &UYOACTR );
LYOACTR = UYOACTR;
} 
else
{ 
 /* line 485: */
FXOACTR_getmodinfo( PYOACTR_lib_module, FRIACTR_library_directory, &VYOACTR );
LYOACTR = VYOACTR;
} 
} 
} 
} 
A_PROC_EXIT(givemoduledetails);
*ReturnedValue = (LYOACTR);
return;
} 
#undef NL

A68_VOID  OZOACTR_initialisecurrentmodule(A68_136  Xmodinfo)
{ 
A68_VC  PZOACTR;  /* OPERATORS - istruct -> vector */
A68_110  QZOACTR;  /* OPERATORS - istruct -> vector */
A68_VC  RZOACTR;  /* avoid structure result */
A68_INT  SZOACTR_maxlevel;
A68_INT  WZOACTR;  /* ADICOPS - ABS INT */
A68_231  ZZOACTR_generator;   /* proc value of non-global proc */
A68_228  FAPACTR;  /* avoid structure result */
A68_232  HAPACTR_generator;   /* proc value of non-global proc */
A68_226  MAPACTR;  /* avoid structure result */
A68_INT  NAPACTR_level;
A68_199 ** QAPACTR;  /* YIELD */
A68_BOOL  RAPACTR;  /* clause result */
A68_195  SAPACTR;  /* collateral clause result */
A68_INT  TAPACTR;  /* YIELD */
A68_195 * UAPACTR;  /* YIELD */
A_PROC_ENTRY(initialisecurrentmodule);
 /* line 542: */
 /* line 543: */
{ 
 /* line 544: */
QZOACTR = Xmodinfo.Name ;
AMOACTR_filter( A_HISVEC(PZOACTR,QZOACTR,32,A68_CHAR ), &RZOACTR );
if ( A_VC_NE(RZOACTR,YQIACTR_basenamesourcefile) )
{ 
 /* line 545: */
CXIACTR_warning(337);
} 
 /* line 547: */
SZOACTR_maxlevel = (Xmodinfo.L.Level+Xmodinfo.G.Level);
 /* line 548: */
PXIACTR_assert(UZOACTR, (SZOACTR_maxlevel==0));
 /* line 549: */
(*KZOACTR_currentmodinfo) = Xmodinfo;
 /* line 550: */
WZOACTR = Xmodinfo.Type ;
PXIACTR_assert(XZOACTR, (A_ABS(WZOACTR)<=1));
 /* line 551: */
A_CLOSURE( ZZOACTR_generator, AAPACTR_generator, BAPACTR_generator );
(( BAPACTR_generator * ) ( ZZOACTR_generator.nonlocals )) -> Xmodinfo = Xmodinfo;
A_CALLPROC(ZZOACTR_generator,(A68_FALSE, &FAPACTR),(A68_FALSE, &FAPACTR,(ZZOACTR_generator).nonlocals));
MZOACTR_specs = FAPACTR;
 /* line 552: */
 /* line 553: */
 /* line 554: */
if ( !FLOACTR_composition )
{ 
A_CLOSURE( HAPACTR_generator, IAPACTR_generator, JAPACTR_generator );
(( JAPACTR_generator * ) ( HAPACTR_generator.nonlocals )) -> SZOACTR_maxlevel = SZOACTR_maxlevel;
A_CALLPROC(HAPACTR_generator,(A68_FALSE, &MAPACTR),(A68_FALSE, &MAPACTR,(HAPACTR_generator).nonlocals));
AZOACTR_contexts = MAPACTR;
 /* line 555: */
for ( ;; )
{ 
NAPACTR_level = (*(&(YYOACTR_contextlist->Level)));
 /* line 556: */
PXIACTR_assert(PAPACTR, (NAPACTR_level<=SZOACTR_maxlevel));
 /* line 557: */
QAPACTR = (&A_R1INDEX(AZOACTR_contexts,NAPACTR_level)) ;
(*QAPACTR) = YYOACTR_contextlist;
 /* line 558: */
 /* line 559: */
 /* line 560: */
RAPACTR = (NAPACTR_level!=0);
if ( !RAPACTR ) break;
 /* line 561: */
YYOACTR_contextlist = (*(&(YYOACTR_contextlist->Rest)));
}
 /* line 562: */
 /* line 563: */
 /* line 564: */
SAPACTR.L = (*(&((*(&A_R1INDEX(AZOACTR_contexts,SZOACTR_maxlevel)))->Ys)));
 /* line 565: */
 /* line 566: */
TAPACTR = Xmodinfo.G.Level ;
SAPACTR.G = (*(&((*(&A_R1INDEX(AZOACTR_contexts,TAPACTR)))->Ys)));
UAPACTR = (&((&JZOACTR_currentmodule)->Checkinfo)) ;
(*UAPACTR) = SAPACTR;
} 
 /* line 567: */
 /* line 568: */
IZOACTR_currentmoduleinitialised = A68_TRUE;
} 
A_PROC_EXIT(initialisecurrentmodule);
return;
} 
#undef NL

A68_VOID  WAPACTR_initialisespec(A68_130  Xspec)
{ 
A68_INT  XAPACTR;  /* clause result */
A68_INT  YAPACTR_no;
A68_130 * BBPACTR;  /* YIELD */
A_PROC_ENTRY(initialisespec);
 /* line 575: */
 /* line 576: */
{ 
if ( (Xspec.No==0) )
{ 
XAPACTR = 1;
} 
else
{ 
XAPACTR = Xspec.No;
} 
YAPACTR_no = XAPACTR;
 /* line 577: */
PXIACTR_assert(ABPACTR, (YAPACTR_no<=MZOACTR_specs.dim[0].upb));
 /* line 578: */
 /* line 579: */
BBPACTR = (&((&A_R1INDEX(MZOACTR_specs,YAPACTR_no))->Xs)) ;
(*BBPACTR) = Xspec;
} 
A_PROC_EXIT(initialisespec);
return;
} 
#undef NL

A68_VOID  EBPACTR_adddecsmodule(A68_138  Decsmodule, A68_INT  Level)
{ 
A68_BOOL  FBPACTR;  /* clause result */
A68_199 * GBPACTR_context;
A68_VC  HBPACTR;  /* OPERATORS - istruct -> vector */
A68_106  IBPACTR;  /* OPERATORS - istruct -> vector */
A68_VC  JBPACTR;  /* OPERATORS - istruct -> vector */
A68_VC  KBPACTR;  /* clause result */
A68_VC  LBPACTR;  /* OPERATORS - istruct -> vector */
A68_106  MBPACTR;  /* OPERATORS - istruct -> vector */
A68_VC  NBPACTR;  /* OPERATORS - istruct -> vector */
A68_106  OBPACTR;  /* OPERATORS - istruct -> vector */
A68_BOOL  PBPACTR;  /* clause result */
A68_VC  QBPACTR;  /* OPERATORS - istruct -> vector */
A68_106  RBPACTR;  /* OPERATORS - istruct -> vector */
A68_VC  SBPACTR;  /* OPERATORS - istruct -> vector */
A68_106  TBPACTR;  /* OPERATORS - istruct -> vector */
A68_VC  UBPACTR;  /* OPERATORS - istruct -> vector */
A68_106  VBPACTR;  /* OPERATORS - istruct -> vector */
A68_BOOL  WBPACTR_contextaccessible;
A68_198 ** XBPACTR_uselist;
A68_198  YBPACTR;  /* collateral clause result */
A68_198 * ZBPACTR;  /* YIELD */
A68_128  ACPACTR;  /* OPERATORS - simple index */
A68_INT  BCPACTR;  /* YIELD */
A68_131  CCPACTR;  /* YIELD */
A68_227  DCPACTR;  /* OPERATORS - vector -> row */
A_PROC_ENTRY(adddecsmodule);
 /* line 590: */
 /* line 592: */
{ 
 /* line 593: */
 /* line 597: */
if ( (Level==0) )
{ 
 /* line 598: */
FBPACTR = IZOACTR_currentmoduleinitialised;
} 
else
{ 
if ( !IZOACTR_currentmoduleinitialised )
{ 
 /* line 600: */
FBPACTR = A68_FALSE;
} 
else
{ 
 /* line 601: */
if ( (Level>AZOACTR_contexts.dim[0].upb) )
{ 
IXIACTR_error(341);
 /* line 603: */
FBPACTR = A68_FALSE;
} 
else
{ 
{ 
GBPACTR_context = (*(&A_R1INDEX(AZOACTR_contexts,Level)));
 /* line 604: */
 /* line 605: */
 /* line 606: */
 /* line 607: */
 /* line 608: */
IBPACTR = (*(&((&(GBPACTR_context->Ym))->Gname))) ;
if ( A_VC_EQ(A_HISVEC(HBPACTR,IBPACTR,7,A68_CHAR ),A_HISVEC(JBPACTR,MKOACTR_nulluname,7,A68_CHAR )) )
{ 
 /* line 609: */
MBPACTR = (*(&((&(GBPACTR_context->Ym))->Lname))) ;
KBPACTR = A_HISVEC(LBPACTR,MBPACTR,7,A68_CHAR );
} 
else
{ 
 /* line 610: */
OBPACTR = (*(&((&(GBPACTR_context->Ym))->Gname))) ;
KBPACTR = A_HISVEC(NBPACTR,OBPACTR,7,A68_CHAR );
} 
RBPACTR = Decsmodule.Ym.Lname ;
TBPACTR = (*(&((*(&A_R1INDEX(AZOACTR_contexts,Level)))->Ys))) ;
VBPACTR = Decsmodule.Ym.Gname ;
PBPACTR = (A_VC_NE(A_HISVEC(QBPACTR,RBPACTR,7,A68_CHAR ),A_HISVEC(SBPACTR,TBPACTR,7,A68_CHAR ))|A_VC_NE(A_HISVEC(UBPACTR,VBPACTR,7,A68_CHAR ),KBPACTR));
if ( PBPACTR )
{ 
IXIACTR_error(342);
 /* line 611: */
FBPACTR = A68_FALSE;
} 
else
{ 
 /* line 612: */
FBPACTR = A68_TRUE;
} 
} 
} 
} 
} 
WBPACTR_contextaccessible = FBPACTR;
 /* line 614: */
 /* line 615: */
if ( WBPACTR_contextaccessible )
{ 
XBPACTR_uselist = (&((*(&A_R1INDEX(AZOACTR_contexts,Level)))->Uses));
 /* line 616: */
 /* line 617: */
YBPACTR.Name = Decsmodule.Name;
YBPACTR.Uname = Decsmodule.Ym.Uname;
YBPACTR.Ids = (A68_197 *)A68_NIL;
YBPACTR.Rest = (*XBPACTR_uselist);
ZBPACTR = A_HEAP(A68_198 ) ;
(*ZBPACTR) = YBPACTR ;
(*XBPACTR_uselist) = ZBPACTR;
 /* line 618: */
BZOACTR_idlist = (&((*XBPACTR_uselist)->Ids));
 /* line 619: */
 /* line 620: */
 /* line 621: */
ACPACTR = Decsmodule.Ym.Specs ;
BCPACTR = 1 ;
CCPACTR = (*(&((&A_VINDEX(ACPACTR,BCPACTR))->Keptinfo))) ;
CZOACTR_currentkeptinfo = A_VECARR(CCPACTR,DCPACTR);
} 
else
{ 
 /* line 622: */
 /* line 623: */
BZOACTR_idlist = A_HEAP(A68_197 *);
} 
} 
A_PROC_EXIT(adddecsmodule);
return;
} 
#undef NL

A68_VOID  FCPACTR_addcontextmodule(A68_126  Context)
{ 
A_PROC_ENTRY(addcontextmodule);
 /* line 631: */
 /* line 632: */
{ 
PXIACTR_assert(HCPACTR, A68_FALSE);
 /* line 633: */
/*SKIP*/;
} 
A_PROC_EXIT(addcontextmodule);
return;
} 
#undef NL

A68_VOID  JCPACTR_addexternalid(A68_111  Id)
{ 
A68_INT  KCPACTR;  /* YIELD */
A68_133 * LCPACTR_currentidinfo;
A68_197  MCPACTR;  /* collateral clause result */
A68_197 * NCPACTR;  /* YIELD */
A68_227  OCPACTR;  /* clause result */
A68_227  PCPACTR;  /* OPERATORS - trim index */
A68_227  QCPACTR;  /* OPERATORS - nil -> mode */
A_PROC_ENTRY(addexternalid);
 /* line 640: */
 /* line 641: */
{ 
KCPACTR = 1 ;
LCPACTR_currentidinfo = (&A_R1INDEX(CZOACTR_currentkeptinfo,KCPACTR));
 /* line 643: */
 /* line 644: */
if ( (*(&(LCPACTR_currentidinfo->Keptgenproc))) )
{ 
MCPACTR.Name = GKOACTR_anonymousid;
} 
else
{ 
 /* line 645: */
MCPACTR.Name = Id.Name;
} 
 /* line 646: */
MCPACTR.Uname = (*(&(LCPACTR_currentidinfo->Prefix)));
 /* line 647: */
MCPACTR.Optimised = (*(&(LCPACTR_currentidinfo->Optimised)));
 /* line 648: */
MCPACTR.Iddec = (*(&(LCPACTR_currentidinfo->Iddec)));
 /* line 649: */
MCPACTR.Globalproc = (*(&(LCPACTR_currentidinfo->Globalproc)));
 /* line 650: */
MCPACTR.Genproc = (*(&(LCPACTR_currentidinfo->Keptgenproc)));
 /* line 651: */
MCPACTR.Forceuse = (*(&(LCPACTR_currentidinfo->Forceuse)));
 /* line 652: */
MCPACTR.Mode = Id.Mode;
 /* line 653: */
MCPACTR.Decno = Id.Decno;
 /* line 654: */
MCPACTR.Definition = (*(&(LCPACTR_currentidinfo->Definition)));
 /* line 656: */
MCPACTR.Rhs = (*(&(LCPACTR_currentidinfo->Rhs)));
MCPACTR.Rest = (A68_197 *)A68_NIL;
NCPACTR = A_HEAP(A68_197 ) ;
(*NCPACTR) = MCPACTR ;
(*BZOACTR_idlist) = NCPACTR;
 /* line 657: */
BZOACTR_idlist = (&((*BZOACTR_idlist)->Rest));
 /* line 658: */
 /* line 659: */
if ( (CZOACTR_currentkeptinfo.dim[0].upb>1) )
{ 
OCPACTR = A_R1TRIM(PCPACTR,(CZOACTR_currentkeptinfo),A_RTSCRIPT(&(PCPACTR.dim[0]),&((CZOACTR_currentkeptinfo).dim[0]),2,(CZOACTR_currentkeptinfo).dim[0].upb,1));
} 
else
{ 
 /* line 660: */
OCPACTR = A_R1VAC(QCPACTR);
} 
CZOACTR_currentkeptinfo = OCPACTR;
} 
A_PROC_EXIT(addexternalid);
return;
} 
#undef NL

A68_VOID  RCPACTR_initialiseunames(void)
{ 
A68_139  KFPACTR;  /* avoid structure result */
A68_139  LFPACTR_previousversion;
A68_106 * OFPACTR;  /* YIELD */
A68_129 * PFPACTR_spec;
A68_INT  QFPACTR;  /* forall loop counter */
A68_LINT * RFPACTR;  /* YIELD */
A68_106 * SFPACTR;  /* YIELD */
A68_BOOL  TFPACTR_specsmatch;
A68_BOOL  UFPACTR_modulesmatch;
A68_BOOL  VFPACTR;  /* clause result */
A68_106 * WFPACTR;  /* YIELD */
A68_106 * XFPACTR;  /* YIELD */
A_PROC_ENTRY(initialiseunames);
{ 
 /* line 767: */
 /* line 801: */
RKOACTR_debugmessage(1, JFPACTR);
 /* line 803: */
FXOACTR_getmodinfo( (*(&(KZOACTR_currentmodinfo->Name))), DRIACTR_modinfo_dirlist, &KFPACTR );
LFPACTR_previousversion = KFPACTR;
 /* line 805: */
 /* line 806: */
 /* line 808: */
if ( (LFPACTR_previousversion.Xmi.Type==(-2)) )
{ 
RKOACTR_debugmessage(1, NFPACTR);
 /* line 810: */
FZOACTR_previousversionfound = A68_FALSE;
 /* line 811: */
OFPACTR = (&((&JZOACTR_currentmodule)->Uname)) ;
(*OFPACTR) = ZGMACTR_newuniquename();
 /* line 812: */
 /* line 813: */
QFPACTR = MZOACTR_specs.dim[0].upb - MZOACTR_specs.dim[0].lwb;
PFPACTR_spec = MZOACTR_specs.data;
for (;QFPACTR-- >= 0;
(PFPACTR_spec += MZOACTR_specs.dim[0].stride
) )
{
 /* line 814: */
RFPACTR = (&(PFPACTR_spec->Timeoflastchange)) ;
(*RFPACTR) = (*(&((&BYIACTR_config_info)->Translationtime)));
 /* line 815: */
 /* line 816: */
SFPACTR = (&(PFPACTR_spec->Ys)) ;
(*SFPACTR) = ZGMACTR_newuniquename();
}
 /* line 818: */
} 
else
{ 
{ 
TFPACTR_specsmatch = UCPACTR_setspecs(LFPACTR_previousversion.Ym);
 /* line 819: */
FZOACTR_previousversionfound = A68_TRUE;
 /* line 820: */
UFPACTR_modulesmatch = WEPACTR_matchmodules(LFPACTR_previousversion);
 /* line 821: */
 /* line 822: */
 /* line 823: */
VFPACTR = (TFPACTR_specsmatch&UFPACTR_modulesmatch);
if ( VFPACTR )
{ 
GZOACTR_rscompatiblewithpreviousversion = A68_TRUE;
 /* line 824: */
 /* line 825: */
 /* line 826: */
WFPACTR = (&((&JZOACTR_currentmodule)->Uname)) ;
(*WFPACTR) = LFPACTR_previousversion.Ym.Uname;
} 
else
{ 
GZOACTR_rscompatiblewithpreviousversion = A68_FALSE;
 /* line 827: */
 /* line 828: */
XFPACTR = (&((&JZOACTR_currentmodule)->Uname)) ;
(*XFPACTR) = ZGMACTR_newuniquename();
} 
} 
} 
} 
A_PROC_EXIT(initialiseunames);
return;
} 
#undef NL

A68_VOID  YFPACTR_outputmoduleinformation(void)
{ 
A68_247  JJPACTR;  /* collateral clause result */
A68_VC  KJPACTR;  /* avoid structure result */
A68_143  LJPACTR;  /* OPERATORS - mode -> union mode */
A68_143  MJPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  NJPACTR;  /* OPERATORS - istruct -> vector */
A68_143  OJPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  PJPACTR;  /* YIELD */
A68_143  QJPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  RJPACTR;  /* OPERATORS - istruct -> vector */
A68_106  SJPACTR;  /* OPERATORS - istruct -> vector */
A68_143  TJPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  UJPACTR;  /* YIELD */
A68_143  VJPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  WJPACTR;  /* OPERATORS - istruct -> vector */
A68_110  XJPACTR;  /* OPERATORS - istruct -> vector */
A68_143  YJPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  ZJPACTR;  /* YIELD */
A68_143  AKPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  BKPACTR;  /* OPERATORS - istruct -> vector */
A68_110  CKPACTR;  /* OPERATORS - istruct -> vector */
A68_143  DKPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  EKPACTR;  /* YIELD */
A68_143  FKPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  GKPACTR;  /* OPERATORS - istruct -> vector */
A68_110  HKPACTR;  /* OPERATORS - istruct -> vector */
A68_143  IKPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  JKPACTR;  /* YIELD */
A68_143  KKPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  LKPACTR;  /* avoid structure result */
A68_143  MKPACTR;  /* OPERATORS - mode -> union mode */
A68_143  NKPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  OKPACTR;  /* OPERATORS - istruct -> vector */
A68_110  PKPACTR;  /* OPERATORS - istruct -> vector */
A68_143  QKPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  RKPACTR;  /* YIELD */
A68_143  SKPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  TKPACTR;  /* OPERATORS - istruct -> vector */
A68_110  UKPACTR;  /* OPERATORS - istruct -> vector */
A68_143  VKPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  WKPACTR;  /* YIELD */
A68_143  XKPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  YKPACTR;  /* avoid structure result */
A68_143  ZKPACTR;  /* OPERATORS - mode -> union mode */
A68_143  ALPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  BLPACTR;  /* avoid structure result */
A68_143  CLPACTR;  /* OPERATORS - mode -> union mode */
A68_143  DLPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  ELPACTR;  /* OPERATORS - istruct -> vector */
A68_106  FLPACTR;  /* OPERATORS - istruct -> vector */
A68_143  GLPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  HLPACTR;  /* YIELD */
A68_143  ILPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  JLPACTR;  /* OPERATORS - istruct -> vector */
A68_106  KLPACTR;  /* OPERATORS - istruct -> vector */
A68_143  LLPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  MLPACTR;  /* YIELD */
A68_143  NLPACTR;  /* OPERATORS - mode -> union mode */
A68_142  OLPACTR;  /* OPERATORS - istruct -> vector */
A68_BOOL  RLPACTR;  /* optbool result */
A68_INT  SLPACTR;  /* YIELD */
A68_131 * TLPACTR_keptinfo;
A68_212  VLPACTR_generator;   /* proc value of non-global proc */
A68_131  AMPACTR;  /* avoid structure result */
A68_INT * BMPACTR_decno;
A68_133 * CMPACTR_item;
A68_INT  DMPACTR;  /* forall loop counter */
A68_170 * EMPACTR_id;
A68_133  FMPACTR;  /* collateral clause result */
A68_BITS  GMPACTR;  /* ADICOPS - >= */
A68_BITS  HMPACTR;  /* ADICOPS - >= */
A68_BITS  IMPACTR;  /* ADICOPS - >= */
A68_BITS  JMPACTR;  /* ADICOPS - >= */
A68_BITS  KMPACTR;  /* ADICOPS - >= */
A68_171 * LMPACTR_rd;
A68_BITS  MMPACTR;  /* ADICOPS - >= */
A68_VC  NMPACTR;  /* OPERATORS - nil -> mode */
A68_VC  OMPACTR;  /* OPERATORS - nil -> mode */
A68_133  RMPACTR;  /* OPERATORS - skip to mode */
A68_133  UMPACTR;  /* OPERATORS - skip to mode */
A68_INT  VMPACTR;  /* YIELD */
A_PROC_ENTRY(outputmoduleinformation);
{ 
 /* line 829: */
 /* line 889: */
 /* line 890: */
ROAAOSF_whole( ZKOACTR_currentmodinfoversion, 0, &KJPACTR );
JJPACTR.data[0] = A_UNITE(LJPACTR,mode2,2,KJPACTR);
 /* line 891: */
JJPACTR.data[1] = A_UNITE(MJPACTR,mode3,3,EIAACTR_cnewline);
PJPACTR = A_HISVEC(NJPACTR,BLOACTR_modinfomagic,8,A68_CHAR ) ;
JJPACTR.data[2] = A_UNITE(OJPACTR,mode2,2,PJPACTR);
 /* line 892: */
JJPACTR.data[3] = A_UNITE(QJPACTR,mode3,3,EIAACTR_cnewline);
SJPACTR = (*(&((&JZOACTR_currentmodule)->Uname))) ;
UJPACTR = A_HISVEC(RJPACTR,SJPACTR,7,A68_CHAR ) ;
JJPACTR.data[4] = A_UNITE(TJPACTR,mode2,2,UJPACTR);
 /* line 893: */
JJPACTR.data[5] = A_UNITE(VJPACTR,mode3,3,EIAACTR_cnewline);
XJPACTR = (*(&(KZOACTR_currentmodinfo->Name))) ;
ZJPACTR = A_HISVEC(WJPACTR,XJPACTR,32,A68_CHAR ) ;
JJPACTR.data[6] = A_UNITE(YJPACTR,mode2,2,ZJPACTR);
 /* line 894: */
JJPACTR.data[7] = A_UNITE(AKPACTR,mode3,3,EIAACTR_cnewline);
CKPACTR = (*(&((&(KZOACTR_currentmodinfo->L))->N))) ;
EKPACTR = A_HISVEC(BKPACTR,CKPACTR,32,A68_CHAR ) ;
JJPACTR.data[8] = A_UNITE(DKPACTR,mode2,2,EKPACTR);
 /* line 895: */
JJPACTR.data[9] = A_UNITE(FKPACTR,mode3,3,EIAACTR_cnewline);
HKPACTR = (*(&((&(KZOACTR_currentmodinfo->L))->F))) ;
JKPACTR = A_HISVEC(GKPACTR,HKPACTR,32,A68_CHAR ) ;
JJPACTR.data[10] = A_UNITE(IKPACTR,mode2,2,JKPACTR);
 /* line 896: */
JJPACTR.data[11] = A_UNITE(KKPACTR,mode3,3,EIAACTR_cnewline);
ROAAOSF_whole( (*(&((&(KZOACTR_currentmodinfo->L))->Level))), 0, &LKPACTR );
JJPACTR.data[12] = A_UNITE(MKPACTR,mode2,2,LKPACTR);
 /* line 897: */
JJPACTR.data[13] = A_UNITE(NKPACTR,mode3,3,EIAACTR_cnewline);
PKPACTR = (*(&((&(KZOACTR_currentmodinfo->G))->N))) ;
RKPACTR = A_HISVEC(OKPACTR,PKPACTR,32,A68_CHAR ) ;
JJPACTR.data[14] = A_UNITE(QKPACTR,mode2,2,RKPACTR);
 /* line 898: */
JJPACTR.data[15] = A_UNITE(SKPACTR,mode3,3,EIAACTR_cnewline);
UKPACTR = (*(&((&(KZOACTR_currentmodinfo->G))->F))) ;
WKPACTR = A_HISVEC(TKPACTR,UKPACTR,32,A68_CHAR ) ;
JJPACTR.data[16] = A_UNITE(VKPACTR,mode2,2,WKPACTR);
 /* line 899: */
JJPACTR.data[17] = A_UNITE(XKPACTR,mode3,3,EIAACTR_cnewline);
ROAAOSF_whole( (*(&((&(KZOACTR_currentmodinfo->G))->Level))), 0, &YKPACTR );
JJPACTR.data[18] = A_UNITE(ZKPACTR,mode2,2,YKPACTR);
 /* line 900: */
JJPACTR.data[19] = A_UNITE(ALPACTR,mode3,3,EIAACTR_cnewline);
ROAAOSF_whole( (*(&(KZOACTR_currentmodinfo->Type))), 0, &BLPACTR );
JJPACTR.data[20] = A_UNITE(CLPACTR,mode2,2,BLPACTR);
 /* line 901: */
JJPACTR.data[21] = A_UNITE(DLPACTR,mode3,3,EIAACTR_cnewline);
FLPACTR = (*(&(LZOACTR_checkinfo->L))) ;
HLPACTR = A_HISVEC(ELPACTR,FLPACTR,7,A68_CHAR ) ;
JJPACTR.data[22] = A_UNITE(GLPACTR,mode2,2,HLPACTR);
 /* line 902: */
JJPACTR.data[23] = A_UNITE(ILPACTR,mode3,3,EIAACTR_cnewline);
 /* line 903: */
KLPACTR = (*(&(LZOACTR_checkinfo->G))) ;
MLPACTR = A_HISVEC(JLPACTR,KLPACTR,7,A68_CHAR ) ;
JJPACTR.data[24] = A_UNITE(LLPACTR,mode2,2,MLPACTR);
JJPACTR.data[25] = A_UNITE(NLPACTR,mode3,3,EIAACTR_cnewline);
JTLACTR_writemodinfo(A_HISVEC(OLPACTR,JJPACTR,26,A68_143 ));
 /* line 905: */
PXIACTR_assert(QLPACTR, (MZOACTR_specs.dim[0].upb==1));
 /* line 907: */
 /* line 908: */
 /* line 909: */
RLPACTR = !GZOACTR_rscompatiblewithpreviousversion;
if ( ! RLPACTR )
{RLPACTR = !HZOACTR_transcompatiblewithpreviousversi;
}
 /* line 912: */
if ( RLPACTR )
{ 
SLPACTR = 1 ;
TLPACTR_keptinfo = (&((&A_R1INDEX(MZOACTR_specs,SLPACTR))->Keptinfo));
 /* line 913: */
A_CLOSURE( VLPACTR_generator, WLPACTR_generator, XLPACTR_generator );
A_CALLPROC(VLPACTR_generator,(A68_FALSE, &AMPACTR),(A68_FALSE, &AMPACTR,(VLPACTR_generator).nonlocals));
(*TLPACTR_keptinfo) = AMPACTR;
 /* line 914: */
 /* line 915: */
DMPACTR = DZOACTR_keptdecnos.dim[0].upb - DZOACTR_keptdecnos.dim[0].lwb;
if ( DMPACTR != (*TLPACTR_keptinfo).upb -1 )
{ A_ERROR( "mismatched bounds in FORALL; row no 2"); }
BMPACTR_decno = DZOACTR_keptdecnos.data;
CMPACTR_item = (*TLPACTR_keptinfo).data;
for (;DMPACTR-- >= 0;
(BMPACTR_decno += DZOACTR_keptdecnos.dim[0].stride
,CMPACTR_item++
) )
{
 /* line 916: */
 /* line 917: */
 /* line 918: */
 /* line 919: */
if ( ((*BMPACTR_decno)<=IAAACTR_maxidno) )
{ 
EMPACTR_id = (&A_R1INDEX(FOKACTR_ids,(*BMPACTR_decno)));
 /* line 920: */
 /* line 921: */
FMPACTR.Prefix = (*(&(EMPACTR_id->Prefix)));
 /* line 922: */
GMPACTR = (*(&(EMPACTR_id->Flags))) ;
FMPACTR.Optimised = A_LB_GE(GMPACTR,QOKACTR_idoptimisedflag);
 /* line 923: */
HMPACTR = (*(&(EMPACTR_id->Flags))) ;
FMPACTR.Iddec = A_LB_GE(HMPACTR,KOKACTR_ididentityflag);
 /* line 924: */
IMPACTR = (*(&(EMPACTR_id->Flags))) ;
FMPACTR.Globalproc = A_LB_GE(IMPACTR,SOKACTR_idgprocflag);
 /* line 925: */
JMPACTR = (*(&(EMPACTR_id->Flags))) ;
FMPACTR.Keptgenproc = A_LB_GE(JMPACTR,TOKACTR_idkeptgenprocflag);
 /* line 926: */
KMPACTR = (*(&(EMPACTR_id->Flags))) ;
FMPACTR.Forceuse = A_LB_GE(KMPACTR,VOKACTR_idforceuseflag);
 /* line 928: */
FMPACTR.Definition = (*(&(EMPACTR_id->Definition)));
 /* line 929: */
FMPACTR.Rhs = (*(&(EMPACTR_id->Rhs)));
} 
else
{ 
 /* line 930: */
 /* line 931: */
if ( ((*BMPACTR_decno)<=KAAACTR_maxrdno) )
{ 
LMPACTR_rd = (&A_R1INDEX(GOKACTR_rds,(*BMPACTR_decno)));
 /* line 932: */
 /* line 933: */
FMPACTR.Prefix = (*(&(LMPACTR_rd->Prefix)));
 /* line 934: */
FMPACTR.Optimised = A68_FALSE;
 /* line 935: */
FMPACTR.Iddec = A68_FALSE;
 /* line 936: */
MMPACTR = (*(&(LMPACTR_rd->Flags))) ;
FMPACTR.Globalproc = A_LB_GE(MMPACTR,APKACTR_rdglobalflag);
 /* line 937: */
FMPACTR.Keptgenproc = A68_FALSE;
 /* line 938: */
FMPACTR.Forceuse = A68_FALSE;
 /* line 940: */
FMPACTR.Definition = A_VVAC(NMPACTR);
 /* line 941: */
FMPACTR.Rhs = A_VVAC(OMPACTR);
} 
else
{ 
 /* line 942: */
if ( ((*BMPACTR_decno)<=MAAACTR_maxlibid) )
{ 
PXIACTR_assert(QMPACTR, A68_FALSE);
 /* line 943: */
FMPACTR = RMPACTR;
} 
else
{ 
PXIACTR_assert(TMPACTR, A68_FALSE);
 /* line 944: */
 /* line 945: */
FMPACTR = UMPACTR;
} 
} 
} 
(*CMPACTR_item) = FMPACTR;
}
 /* line 946: */
} 
 /* line 949: */
 /* line 950: */
VMPACTR = 1 ;
BGPACTR_outputspec((*(&A_R1INDEX(MZOACTR_specs,VMPACTR))));
} 
A_PROC_EXIT(outputmoduleinformation);
return;
} 
#undef NL

A_STATIC A68_VOID  XMPACTR_declareidlist(A68_197 * Idlist)
{ 
A68_197 * YMPACTR_id;
A68_VC  ZMPACTR;  /* OPERATORS - istruct -> vector */
A68_110 * ANPACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(declareidlist);
 /* line 961: */
 /* line 962: */
{ 
YMPACTR_id = Idlist;
 /* line 964: */
for ( ;; )
{ 
 /* line 965: */
 /* line 966: */
if ( !((YMPACTR_id!=(A68_197 *)A68_NIL)) ) break;
 /* line 967: */
 /* line 968: */
 /* line 969: */
 /* line 970: */
 /* line 971: */
 /* line 972: */
 /* line 973: */
 /* line 974: */
 /* line 975: */
 /* line 976: */
 /* line 978: */
ANPACTR = (&(YMPACTR_id->Name)) ;
A_CALLPROC(UVKACTR_externaldec,(A_ISVEC(ZMPACTR,ANPACTR,32,A68_CHAR ), (*(&(YMPACTR_id->Uname))), (*(&(YMPACTR_id->Mode))), (*(&(YMPACTR_id->Decno))), (*(&(YMPACTR_id->Optimised))), (*(&(YMPACTR_id->Iddec))), (*(&(YMPACTR_id->Globalproc))), (*(&(YMPACTR_id->Genproc))), (*(&(YMPACTR_id->Forceuse))), (*(&(YMPACTR_id->Definition))), (*(&(YMPACTR_id->Rhs)))),(A_ISVEC(ZMPACTR,ANPACTR,32,A68_CHAR ), (*(&(YMPACTR_id->Uname))), (*(&(YMPACTR_id->Mode))), (*(&(YMPACTR_id->Decno))), (*(&(YMPACTR_id->Optimised))), (*(&(YMPACTR_id->Iddec))), (*(&(YMPACTR_id->Globalproc))), (*(&(YMPACTR_id->Genproc))), (*(&(YMPACTR_id->Forceuse))), (*(&(YMPACTR_id->Definition))), (*(&(YMPACTR_id->Rhs))),(UVKACTR_externaldec).nonlocals));
 /* line 980: */
 /* line 981: */
YMPACTR_id = (*(&(YMPACTR_id->Rest)));
}
 /* line 982: */
} 
A_PROC_EXIT(declareidlist);
return;
} 
#undef NL

A_STATIC A68_VOID  CNPACTR_processuselist(A68_198 * Uselist)
{ 
A68_INT  DNPACTR_codestream;
A68_INT  ENPACTR_nonlocdecstream;
A68_198 * FNPACTR_use;
A68_253  GNPACTR;  /* collateral clause result */
A68_146  HNPACTR;  /* OPERATORS - mode -> union mode */
A68_146  KNPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  LNPACTR;  /* YIELD */
A68_146  MNPACTR;  /* OPERATORS - mode -> union mode */
A68_145  NNPACTR;  /* OPERATORS - istruct -> vector */
A68_VC  ONPACTR;  /* OPERATORS - istruct -> vector */
A68_106  PNPACTR;  /* OPERATORS - istruct -> vector */
A68_VC  QNPACTR_decsinit;
A68_VC  RNPACTR;  /* OPERATORS - istruct -> vector */
A68_110  SNPACTR;  /* OPERATORS - istruct -> vector */
A68_VC  TNPACTR;  /* avoid structure result */
A68_VC  UNPACTR_decsname;
A68_256  VNPACTR;  /* collateral clause result */
A68_146  YNPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  ZNPACTR;  /* YIELD */
A68_146  AOPACTR;  /* OPERATORS - mode -> union mode */
A68_146  DOPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  EOPACTR;  /* YIELD */
A68_146  JOPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  KOPACTR;  /* YIELD */
A68_146  NOPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  OOPACTR;  /* YIELD */
A68_146  POPACTR;  /* OPERATORS - mode -> union mode */
A68_145  QOPACTR;  /* OPERATORS - istruct -> vector */
A68_258  ROPACTR;  /* collateral clause result */
A68_146  SOPACTR;  /* OPERATORS - mode -> union mode */
A68_146  VOPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  WOPACTR;  /* YIELD */
A68_146  BPPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  CPPACTR;  /* YIELD */
A68_146  FPPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  GPPACTR;  /* YIELD */
A68_146  HPPACTR;  /* OPERATORS - mode -> union mode */
A68_145  IPPACTR;  /* OPERATORS - istruct -> vector */
A68_260  JPPACTR;  /* collateral clause result */
A68_146  MPPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  NPPACTR;  /* YIELD */
A68_146  OPPACTR;  /* OPERATORS - mode -> union mode */
A68_145  PPPACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(processuselist);
 /* line 990: */
 /* line 991: */
{ 
DNPACTR_codestream = WQLACTR_codestream(EQLACTR_currentlevel());
 /* line 992: */
ENPACTR_nonlocdecstream = TQLACTR_nonlocdecstream(EQLACTR_currentlevel());
 /* line 994: */
FNPACTR_use = Uselist;
 /* line 996: */
 /* line 997: */
 /* line 998: */
if ( AQIACTR_verboseoption )
{ 
 /* line 999: */
GNPACTR.data[0] = A_UNITE(HNPACTR,mode4,4,EIAACTR_cnewline);
LNPACTR = JNPACTR ;
GNPACTR.data[1] = A_UNITE(KNPACTR,mode2,2,LNPACTR);
GNPACTR.data[2] = A_UNITE(MNPACTR,mode4,4,EIAACTR_cnewline);
 /* line 1000: */
 /* line 1001: */
VBMACTR_writecstream(A_HISVEC(NNPACTR,GNPACTR,3,A68_146 ), ENPACTR_nonlocdecstream);
} 
 /* line 1003: */
for ( ;; )
{ 
 /* line 1004: */
 /* line 1005: */
if ( !((FNPACTR_use!=(A68_198 *)A68_NIL)) ) break;
PNPACTR = (*(&(FNPACTR_use->Uname))) ;
QNPACTR_decsinit = A_HISVEC(ONPACTR,PNPACTR,7,A68_CHAR );
 /* line 1006: */
SNPACTR = (*(&(FNPACTR_use->Name))) ;
BNAAOSF_before( A_HISVEC(RNPACTR,SNPACTR,32,A68_CHAR ), ' ', &TNPACTR );
UNPACTR_decsname = TNPACTR;
 /* line 1008: */
 /* line 1009: */
ZNPACTR = XNPACTR ;
VNPACTR.data[0] = A_UNITE(YNPACTR,mode2,2,ZNPACTR);
VNPACTR.data[1] = A_UNITE(AOPACTR,mode2,2,QNPACTR_decsinit);
 /* line 1010: */
EOPACTR = COPACTR ;
VNPACTR.data[2] = A_UNITE(DOPACTR,mode2,2,EOPACTR);
if ( AQIACTR_verboseoption )
{ 
KOPACTR = A_VC_PLUS(A_VC_PLUS(HOPACTR,UNPACTR_decsname),IOPACTR) ;
VNPACTR.data[3] = A_UNITE(JOPACTR,mode2,2,KOPACTR);
} 
else
{ 
 /* line 1012: */
OOPACTR = MOPACTR ;
VNPACTR.data[3] = A_UNITE(NOPACTR,mode2,2,OOPACTR);
} 
VNPACTR.data[4] = A_UNITE(POPACTR,mode4,4,EIAACTR_cnewline);
 /* line 1013: */
VBMACTR_writecstream(A_HISVEC(QOPACTR,VNPACTR,5,A68_146 ), ENPACTR_nonlocdecstream);
 /* line 1015: */
XMPACTR_declareidlist((*(&(FNPACTR_use->Ids))));
 /* line 1017: */
 /* line 1018: */
ROPACTR.data[0] = A_UNITE(SOPACTR,mode2,2,QNPACTR_decsinit);
 /* line 1019: */
WOPACTR = UOPACTR ;
ROPACTR.data[1] = A_UNITE(VOPACTR,mode2,2,WOPACTR);
if ( AQIACTR_verboseoption )
{ 
CPPACTR = A_VC_PLUS(A_VC_PLUS(ZOPACTR,UNPACTR_decsname),APPACTR) ;
ROPACTR.data[2] = A_UNITE(BPPACTR,mode2,2,CPPACTR);
} 
else
{ 
 /* line 1021: */
GPPACTR = EPPACTR ;
ROPACTR.data[2] = A_UNITE(FPPACTR,mode2,2,GPPACTR);
} 
ROPACTR.data[3] = A_UNITE(HPPACTR,mode4,4,EIAACTR_cnewline);
 /* line 1022: */
VBMACTR_writecstream(A_HISVEC(IPPACTR,ROPACTR,4,A68_146 ), DNPACTR_codestream);
 /* line 1024: */
 /* line 1025: */
FNPACTR_use = (*(&(FNPACTR_use->Rest)));
}
 /* line 1027: */
 /* line 1028: */
 /* line 1029: */
if ( AQIACTR_verboseoption )
{ 
 /* line 1030: */
NPPACTR = LPPACTR ;
JPPACTR.data[0] = A_UNITE(MPPACTR,mode2,2,NPPACTR);
JPPACTR.data[1] = A_UNITE(OPPACTR,mode4,4,EIAACTR_cnewline);
 /* line 1031: */
 /* line 1032: */
 /* line 1033: */
VBMACTR_writecstream(A_HISVEC(PPPACTR,JPPACTR,2,A68_146 ), ENPACTR_nonlocdecstream);
} 
} 
A_PROC_EXIT(processuselist);
return;
} 
#undef NL

A68_VOID  QPPACTR_declareusedids(void)
{ 
A68_INT  RPPACTR_codestream;
A68_INT  SPPACTR;  /* YIELD */
A68_198 * TPPACTR_uselist;
A68_198 * UPPACTR_use;
A68_VC  VPPACTR;  /* OPERATORS - istruct -> vector */
A68_106  WPPACTR;  /* OPERATORS - istruct -> vector */
A68_VC  XPPACTR_decsinit;
A68_VC  YPPACTR;  /* OPERATORS - istruct -> vector */
A68_110  ZPPACTR;  /* OPERATORS - istruct -> vector */
A68_VC  AQPACTR;  /* avoid structure result */
A68_VC  BQPACTR_decsname;
A68_256  CQPACTR;  /* collateral clause result */
A68_146  DQPACTR;  /* OPERATORS - mode -> union mode */
A68_146  GQPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  HQPACTR;  /* YIELD */
A68_146  IQPACTR;  /* OPERATORS - mode -> union mode */
A68_146  LQPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  MQPACTR;  /* YIELD */
A68_146  NQPACTR;  /* OPERATORS - mode -> union mode */
A68_145  OQPACTR;  /* OPERATORS - istruct -> vector */
A68_197 * PQPACTR_id;
A68_256  QQPACTR;  /* collateral clause result */
A68_146  TQPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  UQPACTR;  /* YIELD */
A68_146  VQPACTR;  /* OPERATORS - mode -> union mode */
A68_146  YQPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  ZQPACTR;  /* YIELD */
A68_146  ARPACTR;  /* OPERATORS - mode -> union mode */
A68_146  BRPACTR;  /* OPERATORS - mode -> union mode */
A68_145  CRPACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(declareusedids);
{ 
RPPACTR_codestream = WQLACTR_codestream(EQLACTR_currentlevel());
 /* line 1043: */
SPPACTR = 0 ;
TPPACTR_uselist = (*(&((*(&A_R1INDEX(AZOACTR_contexts,SPPACTR)))->Uses)));
 /* line 1045: */
UPPACTR_use = TPPACTR_uselist;
 /* line 1048: */
for ( ;; )
{ 
 /* line 1049: */
 /* line 1050: */
if ( !((UPPACTR_use!=(A68_198 *)A68_NIL)) ) break;
WPPACTR = (*(&(UPPACTR_use->Uname))) ;
XPPACTR_decsinit = A_HISVEC(VPPACTR,WPPACTR,7,A68_CHAR );
 /* line 1051: */
ZPPACTR = (*(&(UPPACTR_use->Name))) ;
BNAAOSF_before( A_HISVEC(YPPACTR,ZPPACTR,32,A68_CHAR ), ' ', &AQPACTR );
BQPACTR_decsname = AQPACTR;
 /* line 1053: */
 /* line 1054: */
 /* line 1055: */
if ( AQIACTR_verboseoption )
{ 
CQPACTR.data[0] = A_UNITE(DQPACTR,mode4,4,EIAACTR_cnewline);
HQPACTR = FQPACTR ;
CQPACTR.data[1] = A_UNITE(GQPACTR,mode2,2,HQPACTR);
CQPACTR.data[2] = A_UNITE(IQPACTR,mode2,2,BQPACTR_decsname);
MQPACTR = KQPACTR ;
CQPACTR.data[3] = A_UNITE(LQPACTR,mode2,2,MQPACTR);
CQPACTR.data[4] = A_UNITE(NQPACTR,mode4,4,EIAACTR_cnewline);
 /* line 1056: */
 /* line 1057: */
VBMACTR_writecstream(A_HISVEC(OQPACTR,CQPACTR,5,A68_146 ), PQLACTR_importsstream);
} 
 /* line 1059: */
PQPACTR_id = (*(&(UPPACTR_use->Ids)));
 /* line 1060: */
for ( ;; )
{ 
 /* line 1061: */
 /* line 1062: */
if ( !((PQPACTR_id!=(A68_197 *)A68_NIL)) ) break;
A_CALLPROC(VVKACTR_externalcdec,((*(&(PQPACTR_id->Decno)))),((*(&(PQPACTR_id->Decno))),(VVKACTR_externalcdec).nonlocals));
 /* line 1063: */
 /* line 1064: */
PQPACTR_id = (*(&(PQPACTR_id->Rest)));
}
 /* line 1066: */
 /* line 1067: */
 /* line 1068: */
if ( AQIACTR_verboseoption )
{ 
UQPACTR = SQPACTR ;
QQPACTR.data[0] = A_UNITE(TQPACTR,mode2,2,UQPACTR);
QQPACTR.data[1] = A_UNITE(VQPACTR,mode2,2,BQPACTR_decsname);
ZQPACTR = XQPACTR ;
QQPACTR.data[2] = A_UNITE(YQPACTR,mode2,2,ZQPACTR);
QQPACTR.data[3] = A_UNITE(ARPACTR,mode4,4,EIAACTR_cnewline);
QQPACTR.data[4] = A_UNITE(BRPACTR,mode4,4,EIAACTR_cnewline);
 /* line 1069: */
 /* line 1070: */
VBMACTR_writecstream(A_HISVEC(CRPACTR,QQPACTR,5,A68_146 ), PQLACTR_importsstream);
} 
 /* line 1072: */
 /* line 1073: */
UPPACTR_use = (*(&(UPPACTR_use->Rest)));
}
 /* line 1074: */
} 
A_PROC_EXIT(declareusedids);
return;
} 
#undef NL

A68_VOID  DRPACTR_processcontexts(void)
{ 
A68_BOOL  ERPACTR_decsmodule;
A68_INT  FRPACTR;  /* YIELD */
A68_198 * GRPACTR_contextvoiduselist;
A_PROC_ENTRY(processcontexts);
{ 
ERPACTR_decsmodule = ((*(&(KZOACTR_currentmodinfo->Type)))==(-1));
 /* line 1082: */
FRPACTR = 0 ;
GRPACTR_contextvoiduselist = (*(&((*(&A_R1INDEX(AZOACTR_contexts,FRPACTR)))->Uses)));
 /* line 1084: */
 /* line 1085: */
 /* line 1086: */
if ( ((*(&((&(KZOACTR_currentmodinfo->L))->Level)))!=0) )
{ 
 /* line 1087: */
PXIACTR_assert(IRPACTR, A68_FALSE);
} 
 /* line 1089: */
 /* line 1090: */
if ( (GRPACTR_contextvoiduselist!=(A68_198 *)A68_NIL) )
{ 
 /* line 1091: */
 /* line 1092: */
CNPACTR_processuselist(GRPACTR_contextvoiduselist);
} 
} 
A_PROC_EXIT(processcontexts);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 3: */
 /* line 4: */
 /* line 6: */
void VJOACTR(void)   /* initialise DECS modules */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/shields/projects/Algol68/Tools/Algol68toC/src/a68toc","-v","-uname","seedfile","-lib","/home/shields/projects/Algol68/Tools/Algol68toC/a68config","-dir","/home/shields/projects/Algol68/Tools/Algol68toC/a68config","-dir","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel","-dir",".","modules.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/shields/projects/Algol68/Tools/Algol68toC/a68config","A68_CDIR=","A68_DIR=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/shields/projects/Algol68/Tools/Algol68toC/a68config/a68config.m","./uniquenameserver.m","./moduletracer.m","./liblookup.m","./incinstallation.m","./incid.m","./idtable.m","./environment.m","./environ.m","./coutput.m","./common.m","./centities.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/osif.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/usefulops.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_134  GLOACTR;  /* OPERATORS - skip to mode */
A68_140  ILOACTR;  /* collateral clause result */
A68_VC  JMOACTR;  /* avoid structure result */
A68_139  AYOACTR;  /* collateral clause result */
A68_109  BYOACTR;  /* OPERATORS - skip to mode */
A68_109  CYOACTR;  /* OPERATORS - skip to mode */
A68_127  DYOACTR;  /* OPERATORS - skip to mode */
A68_199  WYOACTR;  /* collateral clause result */
A68_128  XYOACTR;  /* OPERATORS - nil -> mode */
A68_199 * ZYOACTR;  /* YIELD */
A68_180  EZOACTR;  /* OPERATORS - nil -> mode */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
AGMACTR();   /* USE uniquenameserver */
BCHACTR();   /* USE moduletracer */
WVKACTR();   /* USE liblookup */
ODAACTR();   /* USE incinstallation */
BAAACTR();   /* USE incid */
YNKACTR();   /* USE idtable */
HPIACTR();   /* USE environment */
KNLACTR();   /* USE environ */
YRLACTR();   /* USE coutput */
THAACTR();   /* USE centities */
WSCAOSF();   /* USE osif */
IKAAOSF();   /* USE usefulops */
/* --- Initialise configuration information */
A_config.source_file = "/home/shields/projects/Algol68/Tools/Algol68toC/src/modules.a68";
A_config.translation_time = "Sun Sep 26 21:51:00 2004";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "UJOACTR (from seed file) ";
A_config.spec_change_time = "Sun Sep 26 21:51:00 2004";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS modules);
UEAALIB_a68config(LGAALIB_configinfo, ZJOACTR);
 /* line 52: */
 /* line 92: */
 /* line 94: */
 /* line 95: */
 /* line 96: */
CKOACTR_checkinfolength = (2*(BKOACTR_unamelength+1));
 /* line 98: */
EKOACTR_nullid = DKOACTR;
 /* line 99: */
GKOACTR_anonymousid = FKOACTR;
 /* line 100: */
IKOACTR_stdpreludename = HKOACTR;
 /* line 101: */
KKOACTR_stdpreludeid = JKOACTR;
 /* line 103: */
MKOACTR_nulluname = LKOACTR;
 /* line 105: */
 /* line 109: */
 /* line 119: */
 /* line 120: */
BLOACTR_modinfomagic = ALOACTR;
 /* line 121: */
ELOACTR_alien_termination_string = DLOACTR;
 /* line 123: */
FLOACTR_composition = A68_FALSE;
 /* line 126: */
HLOACTR_nilspec = GLOACTR;
 /* line 127: */
ILOACTR.Xs.F = EKOACTR_nullid;
ILOACTR.Xs.No = (-2);
ILOACTR.Xs.Nl = 0;
ILOACTR.Xs.Ng = 0;
ILOACTR.Xs.U = HLOACTR_nilspec;
ILOACTR.Ys = MKOACTR_nulluname;
JLOACTR_nullspec = ILOACTR;
 /* line 129: */
 /* line 148: */
 /* line 206: */
FMOACTR_generator( A68_TRUE, &JMOACTR );
IMOACTR_modinfo_buf = JMOACTR;
 /* line 208: */
 /* line 218: */
 /* line 231: */
 /* line 355: */
 /* line 359: */
 /* line 432: */
 /* line 456: */
AYOACTR.Xmi.Name = EKOACTR_nullid;
AYOACTR.Xmi.L = BYOACTR;
AYOACTR.Xmi.G = CYOACTR;
AYOACTR.Xmi.Type = (-2);
AYOACTR.Ym = DYOACTR;
EYOACTR_lastmoduledetails = AYOACTR;
 /* line 459: */
 /* line 487: */
 /* line 488: */
WYOACTR.Name = EKOACTR_nullid;
WYOACTR.Ym.Uname = MKOACTR_nulluname;
WYOACTR.Ym.Lname = MKOACTR_nulluname;
WYOACTR.Ym.Gname = MKOACTR_nulluname;
 /* line 489: */
WYOACTR.Ym.Specs = A_VVAC(XYOACTR);
WYOACTR.Ys = MKOACTR_nulluname;
WYOACTR.Level = 0;
WYOACTR.Ids = (A68_197 *)A68_NIL;
WYOACTR.Uses = (A68_198 *)A68_NIL;
WYOACTR.Rest = (A68_199 *)A68_NIL;
ZYOACTR = A_LOC(A68_199 ) ;
(*ZYOACTR) = WYOACTR ;
YYOACTR_contextlist = ZYOACTR;
 /* line 492: */
 /* line 495: */
BZOACTR_idlist = (A68_197 **)A68_NIL;
 /* line 499: */
 /* line 503: */
DZOACTR_keptdecnos = (A_R1VAC(EZOACTR));
 /* line 508: */
FZOACTR_previousversionfound = A68_FALSE;
 /* line 513: */
GZOACTR_rscompatiblewithpreviousversion = A68_FALSE;
 /* line 517: */
HZOACTR_transcompatiblewithpreviousversi = A68_TRUE;
 /* line 522: */
IZOACTR_currentmoduleinitialised = A68_FALSE;
 /* line 525: */
 /* line 526: */
KZOACTR_currentmodinfo = (&((&JZOACTR_currentmodule)->Xmi));
 /* line 527: */
LZOACTR_checkinfo = (&((&JZOACTR_currentmodule)->Checkinfo));
 /* line 528: */
 /* line 531: */
 /* line 571: */
 /* line 582: */
 /* line 626: */
 /* line 636: */
 /* line 662: */
 /* line 668: */
 /* line 670: */
 /* line 831: */
 /* line 832: */
 /* line 834: */
 /* line 957: */
 /* line 984: */
 /* line 1035: */
 /* line 1040: */
 /* line 1041: */
 /* line 1076: */
 /* line 1080: */
 /* line 1081: */
 /* line 1094: */
 /* line 1096: */
 /* line 1106: */
/*SKIP*/;
A_PROC_EXIT(DECS modules);
} 
#undef NL
/* end of translation of modules.a68 */
