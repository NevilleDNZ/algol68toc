/* UNAME:WRBBCTR */
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
A_ISTRUCT(A68_CHAR ,32,A68t108);
typedef struct A68t108  A68_108 ;    /* STRUCT 32 CHAR */
struct A68t109{
A68_INT  Mode;
A_PAD_INT(PAD_19)
struct A68t109 * Rest;
};
typedef struct A68t109  A68_109 ;    /* STRUCT(INT,REF MODE109)  */
struct A68t110{
A68_INT  Deproc;
A_PAD_INT(PAD_20)
};
typedef struct A68t110  A68_110 ;    /* STRUCT(INT)  */
struct A68t111{
A68_INT  Rdenno;
A_PAD_INT(PAD_21)
struct A68t109 * Modelist;
};
typedef struct A68t111  A68_111 ;    /* STRUCT(INT,REF MODE109)  */
struct A68t112{
A68_INT  Deproc;
A_PAD_INT(PAD_22)
struct A68t109 * Pars;
};
typedef struct A68t112  A68_112 ;    /* STRUCT(INT,REF MODE109)  */
struct A68t113{
A68_INT  Mode;
A_PAD_INT(PAD_23)
A68_INT  Fieldno;
A_PAD_INT(PAD_24)
struct A68t108  Name;
A_PAD_ISTRUCT(A68_108 ,PAD_25)
struct A68t113 * Rest;
};
typedef struct A68t113  A68_113 ;    /* STRUCT(INT,INT,MODE108,REF MODE113)  */
struct A68t114{
A68_INT  Rdenno;
A_PAD_INT(PAD_26)
A68_INT  Deflex;
A_PAD_INT(PAD_27)
struct A68t113 * Sels;
};
typedef struct A68t114  A68_114 ;    /* STRUCT(INT,INT,REF MODE113)  */
struct A68t115{
A68_INT  Rdenno;
A_PAD_INT(PAD_28)
A68_INT  Imode;
A_PAD_INT(PAD_29)
A68_INT  Length;
A_PAD_INT(PAD_30)
A68_INT  Deflex;
A_PAD_INT(PAD_31)
};
typedef struct A68t115  A68_115 ;    /* STRUCT(INT,INT,INT,INT)  */
struct A68t116{
A68_INT  Rdenno;
A_PAD_INT(PAD_32)
A68_INT  Vecmode;
A_PAD_INT(PAD_33)
A68_INT  Deflex;
A_PAD_INT(PAD_34)
};
typedef struct A68t116  A68_116 ;    /* STRUCT(INT,INT,INT)  */
struct A68t117{
A68_INT  Rdenno;
A_PAD_INT(PAD_35)
A68_INT  Mode;
A_PAD_INT(PAD_36)
A68_INT  Nods;
A_PAD_INT(PAD_37)
A68_INT  Deflex;
A_PAD_INT(PAD_38)
};
typedef struct A68t117  A68_117 ;    /* STRUCT(INT,INT,INT,INT)  */
struct A68t118{
A68_INT  Mode;
A_PAD_INT(PAD_39)
struct A68t119 * Stenlist;
};
typedef struct A68t118  A68_118 ;    /* STRUCT(INT,REF MODE119)  */
struct A68t119{
A68_INT  Mode;
A_PAD_INT(PAD_40)
A68_INT  Rdenno;
A_PAD_INT(PAD_41)
struct A68t119 * Rest;
};
typedef struct A68t119  A68_119 ;    /* STRUCT(INT,INT,REF MODE119)  */
struct A68t120{
A68_INT  Mode;
A_PAD_INT(PAD_42)
};
typedef struct A68t120  A68_120 ;    /* STRUCT(INT)  */
struct A68t121 { A68_INT mode; union {
A68_INT  mode1;
struct A68t111 * mode2;
struct A68t112 * mode3;
struct A68t114 * mode4;
struct A68t115 * mode5;
struct A68t110 * mode6;
struct A68t116 * mode7;
struct A68t117 * mode8;
struct A68t118 * mode9;
struct A68t122 * mode10;
struct A68t120  mode11;
} data; };
typedef struct A68t121  A68_121 ;    /* UNION(INT,REF MODE111,REF MODE112,REF MODE114,REF MODE115,REF MODE110,REF MODE116,REF MODE117,REF MODE118,REF MODE122,MODE120)  */
struct A68t122{
A68_INT  Mode;
A_PAD_INT(PAD_43)
A68_INT  Modeproc;
A_PAD_INT(PAD_44)
struct A68t123 * El;
};
typedef struct A68t122  A68_122 ;    /* STRUCT(INT,INT,REF MODE123)  */
struct A68t123{
struct A68t122 * Am;
struct A68t123 * Rest;
};
typedef struct A68t123  A68_123 ;    /* STRUCT(REF MODE122,REF MODE123)  */
struct A68t124{
struct A68t108  Name;
A_PAD_ISTRUCT(A68_108 ,PAD_45)
A68_INT  Decno;
A_PAD_INT(PAD_46)
A68_INT  Level;
A_PAD_INT(PAD_47)
A68_INT  Mode;
A_PAD_INT(PAD_48)
A68_INT  Scope;
A_PAD_INT(PAD_49)
struct A68t124 * Rest;
};
typedef struct A68t124  A68_124 ;    /* STRUCT(MODE108,INT,INT,INT,INT,REF MODE124)  */
struct A68t125{
struct A68t108  Name;
A_PAD_ISTRUCT(A68_108 ,PAD_50)
A68_BITS  Props;
A_PAD_BITS(PAD_51)
A68_INT  Mode;
A_PAD_INT(PAD_52)
A68_INT  Rdenno;
A_PAD_INT(PAD_53)
A68_INT  Maxname;
A_PAD_INT(PAD_54)
A68_INT  Level;
A_PAD_INT(PAD_55)
struct A68t125 * Rest;
};
typedef struct A68t125  A68_125 ;    /* STRUCT(MODE108,BITS,INT,INT,INT,INT,REF MODE125)  */
struct A68t126{
struct A68t108  Name;
A_PAD_ISTRUCT(A68_108 ,PAD_56)
A68_INT  Labno;
A_PAD_INT(PAD_57)
A68_INT  Status;
A_PAD_INT(PAD_58)
struct A68t126 * Rest;
};
typedef struct A68t126  A68_126 ;    /* STRUCT(MODE108,INT,INT,REF MODE126)  */
A_VECTOR(struct A68t129 ,A68t128);
typedef struct A68t128  A68_128 ;    /* VECTOR [] MODE129 */
A_VECTOR(struct A68t136 ,A68t135);
typedef struct A68t135  A68_135 ;    /* VECTOR [] MODE136 */
struct A68t136{
struct A68t108  N;
A_PAD_ISTRUCT(A68_108 ,PAD_59)
struct A68t108  F;
A_PAD_ISTRUCT(A68_108 ,PAD_60)
A68_INT  Level;
A_PAD_INT(PAD_61)
};
typedef struct A68t136  A68_136 ;    /* STRUCT(MODE108,MODE108,INT)  */
struct A68t134 { A68_INT mode; union {
A68_VC  mode1;
struct A68t135  mode2;
} data; };
typedef struct A68t134  A68_134 ;    /* UNION(REF MODE26,REF MODE135)  */
struct A68t130{
struct A68t108  F;
A_PAD_ISTRUCT(A68_108 ,PAD_62)
A68_INT  No;
A_PAD_INT(PAD_63)
A68_INT  Nl;
A_PAD_INT(PAD_64)
A68_INT  Ng;
A_PAD_INT(PAD_65)
struct A68t134  U;
};
typedef struct A68t130  A68_130 ;    /* STRUCT(MODE108,INT,INT,INT,MODE134)  */
A_VECTOR(struct A68t133 ,A68t131);
typedef struct A68t131  A68_131 ;    /* VECTOR [] MODE133 */
struct A68t133{
struct A68t106  Prefix;
A_PAD_ISTRUCT(A68_106 ,PAD_66)
A68_BOOL  Optimised;
A_PAD_BOOL(PAD_67)
A68_BOOL  Iddec;
A_PAD_BOOL(PAD_68)
A68_BOOL  Globalproc;
A_PAD_BOOL(PAD_69)
A68_BOOL  Keptgenproc;
A_PAD_BOOL(PAD_70)
A68_BOOL  Forceuse;
A_PAD_BOOL(PAD_71)
A68_VC  Definition;
A68_VC  Rhs;
};
typedef struct A68t133  A68_133 ;    /* STRUCT(MODE106,BOOL,BOOL,BOOL,BOOL,BOOL,REF MODE26,REF MODE26)  */
A_VECTOR(struct A68t106 ,A68t132);
typedef struct A68t132  A68_132 ;    /* VECTOR [] MODE106 */
struct A68t129{
struct A68t130  Xs;
struct A68t106  Ys;
A_PAD_ISTRUCT(A68_106 ,PAD_72)
A68_LINT  Timeoflastchange;
A_PAD_LINT(PAD_73)
struct A68t131  Keptinfo;
struct A68t132  Cnames;
};
typedef struct A68t129  A68_129 ;    /* STRUCT(MODE130,MODE106,LONG INT,REF MODE131,REF MODE132)  */
struct A68t127{
struct A68t106  Uname;
A_PAD_ISTRUCT(A68_106 ,PAD_74)
struct A68t106  Lname;
A_PAD_ISTRUCT(A68_106 ,PAD_75)
struct A68t106  Gname;
A_PAD_ISTRUCT(A68_106 ,PAD_76)
struct A68t128  Specs;
};
typedef struct A68t127  A68_127 ;    /* STRUCT(MODE106,MODE106,MODE106,REF MODE128)  */
struct A68t137{
A68_INT  I;
A_PAD_INT(PAD_77)
A68_INT  J;
A_PAD_INT(PAD_78)
};
typedef struct A68t137  A68_137 ;    /* STRUCT(INT,INT)  */
struct A68t138{
A68_INT  I;
A_PAD_INT(PAD_79)
A68_INT  J;
A_PAD_INT(PAD_80)
A68_INT  K;
A_PAD_INT(PAD_81)
};
typedef struct A68t138  A68_138 ;    /* STRUCT(INT,INT,INT)  */
struct A68t139{
A68_INT  Mode;
A_PAD_INT(PAD_82)
A68_BOOL  Loc;
A_PAD_BOOL(PAD_83)
};
typedef struct A68t139  A68_139 ;    /* STRUCT(INT,BOOL)  */
struct A68t140{
A68_INT  Mode;
A_PAD_INT(PAD_84)
A68_INT  Nopars;
A_PAD_INT(PAD_85)
};
typedef struct A68t140  A68_140 ;    /* STRUCT(INT,INT)  */
struct A68t141{
A68_INT  Mode;
A_PAD_INT(PAD_86)
A68_VC  Nu;
};
typedef struct A68t141  A68_141 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t142{
A68_INT  Almode;
A_PAD_INT(PAD_87)
};
typedef struct A68t142  A68_142 ;    /* STRUCT(INT)  */
struct A68t143{
A68_INT  Nochars;
A_PAD_INT(PAD_88)
A68_INT  Base;
A_PAD_INT(PAD_89)
A68_VC  Chars;
};
typedef struct A68t143  A68_143 ;    /* STRUCT(INT,INT,REF MODE26)  */
struct A68t144{
A68_INT  Strmode;
A_PAD_INT(PAD_90)
};
typedef struct A68t144  A68_144 ;    /* STRUCT(INT)  */
struct A68t145{
A68_INT  Nochars;
A_PAD_INT(PAD_91)
A68_INT  Nocases;
A_PAD_INT(PAD_92)
A68_INT  W;
A_PAD_INT(PAD_93)
};
typedef struct A68t145  A68_145 ;    /* STRUCT(INT,INT,INT)  */
struct A68t147{
A68_INT  Nse;
A_PAD_INT(PAD_94)
};
typedef struct A68t147  A68_147 ;    /* STRUCT(INT)  */
struct A68t146 { A68_INT mode; union {
A68_BOOL  mode1;
A68_INT  mode2;
struct A68t126 * mode3;
struct A68t147  mode4;
struct A68t139  mode5;
struct A68t144  mode6;
struct A68t145  mode7;
struct A68t141  mode8;
struct A68t142  mode9;
struct A68t140  mode10;
} data; };
typedef struct A68t146  A68_146 ;    /* UNION(BOOL,INT,REF MODE126,MODE147,MODE139,MODE144,MODE145,MODE141,MODE142,MODE140)  */
struct A68t148{
A68_INT  Type;
A_PAD_INT(PAD_95)
struct A68t124 * Iddec;
};
typedef struct A68t148  A68_148 ;    /* STRUCT(INT,REF MODE124)  */
struct A68t149{
struct A68t126 * Lab;
A68_BOOL  Notsetting;
A_PAD_BOOL(PAD_96)
};
typedef struct A68t149  A68_149 ;    /* STRUCT(REF MODE126,BOOL)  */
struct A68t150 { A68_INT mode; union {
struct A68t148  mode1;
struct A68t149  mode2;
} data; };
typedef struct A68t150  A68_150 ;    /* UNION(MODE148,MODE149)  */
struct A68t151{
A68_BOOL  Up;
A_PAD_BOOL(PAD_97)
};
typedef struct A68t151  A68_151 ;    /* STRUCT(BOOL)  */
struct A68t152{
A68_INT  Fn;
A_PAD_INT(PAD_98)
A68_INT  M;
A_PAD_INT(PAD_99)
A68_INT  Param;
A_PAD_INT(PAD_100)
};
typedef struct A68t152  A68_152 ;    /* STRUCT(INT,INT,INT)  */
struct A68t153{
A68_INT  Charpos;
A_PAD_INT(PAD_101)
};
typedef struct A68t153  A68_153 ;    /* STRUCT(INT)  */
struct A68t154{
A68_BOOL  All;
A_PAD_BOOL(PAD_102)
A68_VC  Pr;
};
typedef struct A68t154  A68_154 ;    /* STRUCT(BOOL,REF MODE26)  */
struct A68t155{
A68_INT  W;
A_PAD_INT(PAD_103)
};
typedef struct A68t155  A68_155 ;    /* STRUCT(INT)  */
struct A68t156{
A68_INT  Fn;
A_PAD_INT(PAD_104)
A68_INT  M;
A_PAD_INT(PAD_105)
A68_BITS  Props;
A_PAD_BITS(PAD_106)
A68_INT  Param;
A_PAD_INT(PAD_107)
};
typedef struct A68t156  A68_156 ;    /* STRUCT(INT,INT,BITS,INT)  */
struct A68t157{
A68_INT  Norden;
A_PAD_INT(PAD_108)
A68_INT  Nomodes;
A_PAD_INT(PAD_109)
A68_INT  Nolabs;
A_PAD_INT(PAD_110)
A68_INT  Nodecnos;
A_PAD_INT(PAD_111)
A68_INT  Nomodules;
A_PAD_INT(PAD_112)
A68_INT  Nolibinds;
A_PAD_INT(PAD_113)
};
typedef struct A68t157  A68_157 ;    /* STRUCT(INT,INT,INT,INT,INT,INT)  */
struct A68t158{
struct A68t108  Name;
A_PAD_ISTRUCT(A68_108 ,PAD_114)
struct A68t136  L;
struct A68t136  G;
A68_INT  Type;
A_PAD_INT(PAD_115)
};
typedef struct A68t158  A68_158 ;    /* STRUCT(MODE108,MODE136,MODE136,INT)  */
struct A68t159{
struct A68t158  Xmi;
struct A68t127  Ym;
};
typedef struct A68t159  A68_159 ;    /* STRUCT(MODE158,MODE127)  */
struct A68t160{
struct A68t130  Xs;
struct A68t106  Ys;
A_PAD_ISTRUCT(A68_106 ,PAD_116)
};
typedef struct A68t160  A68_160 ;    /* STRUCT(MODE130,MODE106)  */
struct A68t161{
struct A68t108  Name;
A_PAD_ISTRUCT(A68_108 ,PAD_117)
A68_INT  Maxlevel;
A_PAD_INT(PAD_118)
A68_INT  Nof;
A_PAD_INT(PAD_119)
A68_INT  Moduleno;
A_PAD_INT(PAD_120)
};
typedef struct A68t161  A68_161 ;    /* STRUCT(MODE108,INT,INT,INT)  */
struct A68t162{
A68_INT  Moduleno;
A_PAD_INT(PAD_121)
A68_INT  Nof;
A_PAD_INT(PAD_122)
};
typedef struct A68t162  A68_162 ;    /* STRUCT(INT,INT)  */
struct A68t163{
A68_INT  Type;
A_PAD_INT(PAD_123)
A68_INT  Moduleno;
A_PAD_INT(PAD_124)
struct A68t108  Name;
A_PAD_ISTRUCT(A68_108 ,PAD_125)
struct A68t127  Ym;
};
typedef struct A68t163  A68_163 ;    /* STRUCT(INT,INT,MODE108,MODE127)  */
struct A68t164{
A68_BOOL  Bu;
A_PAD_BOOL(PAD_126)
A68_INT  Level;
A_PAD_INT(PAD_127)
struct A68t124 * Id;
};
typedef struct A68t164  A68_164 ;    /* STRUCT(BOOL,INT,REF MODE124)  */
A_VECTOR(struct A68t138 ,A68t166);
typedef struct A68t166  A68_166 ;    /* VECTOR [] MODE138 */
struct A68t165{
struct A68t137  Body;
struct A68t166  Kset;
struct A68t93  Keeps;
A68_INT  Last;
A_PAD_INT(PAD_128)
};
typedef struct A68t165  A68_165 ;    /* STRUCT(MODE137,REF MODE166,REF MODE93,INT)  */
struct A68t167{
A68_INT  Body;
A_PAD_INT(PAD_129)
struct A68t93  Actuals;
A68_INT  Moduleno;
A_PAD_INT(PAD_130)
};
typedef struct A68t167  A68_167 ;    /* STRUCT(INT,REF MODE93,INT)  */
struct A68t168{
struct A68t108  Name;
A_PAD_ISTRUCT(A68_108 ,PAD_131)
struct A68t127  Ym;
struct A68t108  Formal;
A_PAD_ISTRUCT(A68_108 ,PAD_132)
struct A68t106  Ys;
A_PAD_ISTRUCT(A68_106 ,PAD_133)
A68_INT  Level;
A_PAD_INT(PAD_134)
A68_INT  Ownlevel;
A_PAD_INT(PAD_135)
};
typedef struct A68t168  A68_168 ;    /* STRUCT(MODE108,MODE127,MODE108,MODE106,INT,INT)  */
struct A68t169{
A68_INT  Moduleno;
A_PAD_INT(PAD_136)
A68_INT  Type;
A_PAD_INT(PAD_137)
};
typedef struct A68t169  A68_169 ;    /* STRUCT(INT,INT)  */
struct A68t170{
struct A68t93  Decnos;
struct A68t93  Modes;
};
typedef struct A68t170  A68_170 ;    /* STRUCT(REF MODE93,REF MODE93)  */
struct A68t171{
A68_INT  Moduleno;
A_PAD_INT(PAD_138)
A68_INT  Type;
A_PAD_INT(PAD_139)
A68_INT  Maxmodule;
A_PAD_INT(PAD_140)
};
typedef struct A68t171  A68_171 ;    /* STRUCT(INT,INT,INT)  */
A_VECTOR(struct A68t121 ,A68t173);
typedef struct A68t173  A68_173 ;    /* VECTOR [] MODE121 */
struct A68t172 { A68_INT mode; union {
struct A68t151  mode1;
A68_BOOL  mode2;
A68_INT  mode3;
struct A68t126 * mode4;
struct A68t147  mode5;
struct A68t139  mode6;
struct A68t144  mode7;
struct A68t145  mode8;
struct A68t141  mode9;
struct A68t142  mode10;
struct A68t140  mode11;
struct A68t148  mode12;
struct A68t149  mode13;
struct A68t152  mode14;
struct A68t153  mode15;
struct A68t155  mode16;
struct A68t156  mode17;
struct A68t157  mode18;
struct A68t173  mode19;
struct A68t154  mode20;
struct A68t158  mode21;
struct A68t130  mode22;
struct A68t161  mode23;
struct A68t162  mode24;
struct A68t163  mode25;
struct A68t164  mode26;
struct A68t165  mode27;
struct A68t167  mode28;
struct A68t168  mode29;
struct A68t93  mode30;
struct A68t169  mode31;
struct A68t170  mode32;
struct A68t171  mode33;
struct A68t125 * mode34;
struct A68t143  mode35;
} data; };
typedef struct A68t172  A68_172 ;    /* UNION(MODE151,BOOL,INT,REF MODE126,MODE147,MODE139,MODE144,MODE145,MODE141,MODE142,MODE140,MODE148,MODE149,MODE152,MODE153,MODE155,MODE156,MODE157,REF MODE173,MODE154,MODE158,MODE130,MODE161,MODE162,MODE163,MODE164,MODE165,MODE167,MODE168,REF MODE93,MODE169,MODE170,MODE171,REF MODE125,MODE143)  */
struct A68t175 ;
struct A68t176 ;
struct A68t177 ;
struct A68t178 ;
struct A68t179 ;
struct A68t180 ;
struct A68t181 ;
struct A68t182 ;

A_PROCEDURE(A68_BOOL ,A68t174,(struct A68t175 ,struct A68t176 ,struct A68t177 ,struct A68t178 ,struct A68t179 ,struct A68t180 ,struct A68t181 ,struct A68t182 ),(struct A68t175 ,struct A68t176 ,struct A68t177 ,struct A68t178 ,struct A68t179 ,struct A68t180 ,struct A68t181 ,struct A68t182 ,void *));
typedef struct A68t174  A68_174 ;    /* PROC(MODE175,MODE176,MODE177,MODE178,MODE179,MODE180,MODE181,REF MODE182) BOOL */

A_PROCEDURE(A68_BOOL ,A68t175,(A68_VC ,A68_INT *),(A68_VC ,A68_INT *,void *));
typedef struct A68t175  A68_175 ;    /* PROC(REF MODE26,REF INT) BOOL */

A_PROCEDURE(A68_VOID ,A68t176,(struct A68t172 ,A68_INT ),(struct A68t172 ,A68_INT ,void *));
typedef struct A68t176  A68_176 ;    /* PROC(MODE172,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t177,(A68_VC ,A68_INT ),(A68_VC ,A68_INT ,void *));
typedef struct A68t177  A68_177 ;    /* PROC(MODE26,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t178,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t178  A68_178 ;    /* PROC(INT) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t179,(struct A68t108 ,A68_INT ,A68_BOOL ,struct A68t159 *),(struct A68t108 ,A68_INT ,A68_BOOL ,struct A68t159 *,void *));
typedef struct A68t179  A68_179 ;    /* PROC(MODE108,INT,BOOL) MODE159 */

A_PROCEDURE(A68_VOID ,A68t180,(struct A68t108 ,struct A68t108 ,struct A68t127 ,struct A68t160 *),(struct A68t108 ,struct A68t108 ,struct A68t127 ,struct A68t160 *,void *));
typedef struct A68t180  A68_180 ;    /* PROC(MODE108,MODE108,MODE127) MODE160 */

A_PROCEDURE(A68_INT ,A68t181,(A68_VC ,A68_BOOL ),(A68_VC ,A68_BOOL ,void *));
typedef struct A68t181  A68_181 ;    /* PROC(REF MODE26,BOOL) INT */
A_ROW(struct A68t183 ,A68t182,1);
typedef struct A68t182  A68_182 ;    /* [] MODE183 */
struct A68t183{
A68_INT  Type;
A_PAD_INT(PAD_141)
A68_INT  Value;
A_PAD_INT(PAD_142)
};
typedef struct A68t183  A68_183 ;    /* STRUCT(INT,INT)  */
struct A68t185 ;
struct A68t186 ;

A_PROCEDURE(A68_VOID ,A68t184,(struct A68t185 ,struct A68t157 *,struct A68t186 ),(struct A68t185 ,struct A68t157 *,struct A68t186 ,void *));
typedef struct A68t184  A68_184 ;    /* PROC(MODE185,REF MODE157,REF MODE186) VOID */
struct A68t187 ;

A_PROCEDURE(A68_VOID ,A68t185,(struct A68t187 *),(struct A68t187 *,void *));
typedef struct A68t185  A68_185 ;    /* PROC MODE187 */
A_ROW(A68_INT ,A68t186,1);
typedef struct A68t186  A68_186 ;    /* [] INT */
struct A68t188{
A68_VC  Representation;
};
typedef struct A68t188  A68_188 ;    /* STRUCT(REF MODE26)  */
struct A68t189{
A68_INT  Mode;
A_PAD_INT(PAD_143)
A68_VC  String;
};
typedef struct A68t189  A68_189 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t190{
A68_INT  Mode;
A_PAD_INT(PAD_144)
A68_LBITS  Denotation;
A_PAD_LBITS(PAD_145)
};
typedef struct A68t190  A68_190 ;    /* STRUCT(INT,LONG BITS)  */
struct A68t191{
A68_INT  Mode;
A_PAD_INT(PAD_146)
A68_VC  Denotation;
};
typedef struct A68t191  A68_191 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t192{
A68_INT  Fn;
A_PAD_INT(PAD_147)
A68_INT  Mode;
A_PAD_INT(PAD_148)
A68_INT  Param;
A_PAD_INT(PAD_149)
};
typedef struct A68t192  A68_192 ;    /* STRUCT(INT,INT,INT)  */
struct A68t193{
A68_INT  Type;
A_PAD_INT(PAD_150)
A68_VC  Name;
A68_INT  Mode;
A_PAD_INT(PAD_151)
A68_INT  Decno;
A_PAD_INT(PAD_152)
};
typedef struct A68t193  A68_193 ;    /* STRUCT(INT,REF MODE26,INT,INT)  */
struct A68t194{
A68_VC  Name;
A68_BITS  Props;
A_PAD_BITS(PAD_153)
A68_INT  Mode;
A_PAD_INT(PAD_154)
A68_INT  Rdenno;
A_PAD_INT(PAD_155)
A68_INT  Maxname;
A_PAD_INT(PAD_156)
};
typedef struct A68t194  A68_194 ;    /* STRUCT(REF MODE26,BITS,INT,INT,INT)  */
struct A68t195{
A68_VC  Name;
A68_INT  Labno;
A_PAD_INT(PAD_157)
A68_INT  Status;
A_PAD_INT(PAD_158)
A68_BOOL  Notsetting;
A_PAD_BOOL(PAD_159)
};
typedef struct A68t195  A68_195 ;    /* STRUCT(REF MODE26,INT,INT,BOOL)  */
struct A68t196{
A68_INT  Mode;
A_PAD_INT(PAD_160)
A68_BITS  Props;
A_PAD_BITS(PAD_161)
A68_INT  Param;
A_PAD_INT(PAD_162)
};
typedef struct A68t196  A68_196 ;    /* STRUCT(INT,BITS,INT)  */
struct A68t197{
A68_INT  I;
A_PAD_INT(PAD_163)
};
typedef struct A68t197  A68_197 ;    /* STRUCT(INT)  */
struct A68t198{
A68_BOOL  Start;
A_PAD_BOOL(PAD_164)
};
typedef struct A68t198  A68_198 ;    /* STRUCT(BOOL)  */
struct A68t199{
struct A68t145  Info;
A68_VC  Text;
};
typedef struct A68t199  A68_199 ;    /* STRUCT(MODE145,REF MODE26)  */
struct A68t200{
A68_INT  Mode;
A_PAD_INT(PAD_165)
A68_INT  Number;
A_PAD_INT(PAD_166)
A68_VC  Insert;
};
typedef struct A68t200  A68_200 ;    /* STRUCT(INT,INT,REF MODE26)  */
struct A68t201{
A68_INT  Fn;
A_PAD_INT(PAD_167)
A68_INT  Mode;
A_PAD_INT(PAD_168)
A68_BITS  Props;
A_PAD_BITS(PAD_169)
A68_INT  Param;
A_PAD_INT(PAD_170)
};
typedef struct A68t201  A68_201 ;    /* STRUCT(INT,INT,BITS,INT)  */
struct A68t202{
A68_INT  Fn;
A_PAD_INT(PAD_171)
A68_INT  Mode;
A_PAD_INT(PAD_172)
A68_BITS  Props;
A_PAD_BITS(PAD_173)
A68_INT  Resultmode;
A_PAD_INT(PAD_174)
};
typedef struct A68t202  A68_202 ;    /* STRUCT(INT,INT,BITS,INT)  */
struct A68t203{
A68_INT  Fn;
A_PAD_INT(PAD_175)
A68_BITS  Props;
A_PAD_BITS(PAD_176)
};
typedef struct A68t203  A68_203 ;    /* STRUCT(INT,BITS)  */
struct A68t204{
A68_INT  Body;
A_PAD_INT(PAD_177)
A68_INT  Moduleno;
A_PAD_INT(PAD_178)
struct A68t186  Actuals;
};
typedef struct A68t204  A68_204 ;    /* STRUCT(INT,INT,REF MODE186)  */
struct A68t205{
A68_INT  Moduleno;
A_PAD_INT(PAD_179)
A68_INT  I;
A_PAD_INT(PAD_180)
A68_INT  J;
A_PAD_INT(PAD_181)
};
typedef struct A68t205  A68_205 ;    /* STRUCT(INT,INT,INT)  */
A_ROW(A68_VC ,A68t207,1);
typedef struct A68t207  A68_207 ;    /* [] REF MODE26 */
struct A68t206{
A68_INT  Moduleno;
A_PAD_INT(PAD_182)
A68_VC  Name;
A68_VC  Uname;
A68_VC  Lname;
A68_VC  Gname;
struct A68t207  Ysnames;
};
typedef struct A68t206  A68_206 ;    /* STRUCT(INT,REF MODE26,REF MODE26,REF MODE26,REF MODE26,REF MODE207)  */
struct A68t187 { A68_INT mode; union {
struct A68t147  mode1;
A68_INT  mode2;
A68_BOOL  mode3;
struct A68t188  mode4;
struct A68t107  mode5;
struct A68t141  mode6;
struct A68t189  mode7;
struct A68t190  mode8;
struct A68t191  mode9;
struct A68t192  mode10;
struct A68t193  mode11;
struct A68t194  mode12;
struct A68t155  mode13;
struct A68t195  mode14;
struct A68t196  mode15;
struct A68t197  mode16;
struct A68t198  mode17;
struct A68t199  mode18;
struct A68t200  mode19;
struct A68t201  mode20;
struct A68t202  mode21;
struct A68t203  mode22;
struct A68t204  mode23;
struct A68t205  mode24;
struct A68t206  mode25;
} data; };
typedef struct A68t187  A68_187 ;    /* UNION(MODE147,INT,BOOL,MODE188,MODE107,MODE141,MODE189,MODE190,MODE191,MODE192,MODE193,MODE194,MODE155,MODE195,MODE196,MODE197,MODE198,MODE199,MODE200,MODE201,MODE202,MODE203,MODE204,MODE205,MODE206,VOID)  */
struct A68t209 ;

A_PROCEDURE(A68_VOID ,A68t208,(struct A68t209 ),(struct A68t209 ,void *));
typedef struct A68t208  A68_208 ;    /* PROC(MODE209) VOID */
A_VECTOR(struct A68t210 ,A68t209);
typedef struct A68t209  A68_209 ;    /* VECTOR [] MODE210 */
struct A68t210 { A68_INT mode; union {
A68_CHAR  mode1;
A68_VC  mode2;
A68_SINT  mode3;
} data; };
typedef struct A68t210  A68_210 ;    /* UNION(CHAR,MODE26,SHORT INT)  */
struct A68t212 ;

A_PROCEDURE(A68_VOID ,A68t211,(struct A68t212 ,A68_INT ),(struct A68t212 ,A68_INT ,void *));
typedef struct A68t211  A68_211 ;    /* PROC(MODE212,INT) VOID */
A_VECTOR(struct A68t213 ,A68t212);
typedef struct A68t212  A68_212 ;    /* VECTOR [] MODE213 */
struct A68t213 { A68_INT mode; union {
A68_CHAR  mode1;
A68_VC  mode2;
A68_INT  mode3;
A68_SINT  mode4;
} data; };
typedef struct A68t213  A68_213 ;    /* UNION(CHAR,MODE26,INT,SHORT INT)  */

A_PROCEDURE(A68_VOID ,A68t214,(A68_VC ,A68_INT ,A68_VC *),(A68_VC ,A68_INT ,A68_VC *,void *));
typedef struct A68t214  A68_214 ;    /* PROC(REF MODE26,INT) MODE26 */

A_PROCEDURE(A68_VOID ,A68t215,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t215  A68_215 ;    /* PROC(REF MODE26) MODE26 */

A_PROCEDURE(A68_VOID ,A68t216,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t216  A68_216 ;    /* PROC(REF MODE26) REF MODE26 */

A_PROCEDURE(A68_INT ,A68t217,(A68_INT ),(A68_INT ,void *));
typedef struct A68t217  A68_217 ;    /* PROC(INT) INT */

A_PROCEDURE(A68_BOOL ,A68t218,(A68_INT ),(A68_INT ,void *));
typedef struct A68t218  A68_218 ;    /* PROC(INT) BOOL */
struct A68t219{
A68_INT  Level;
A_PAD_INT(PAD_183)
A68_INT  Block;
A_PAD_INT(PAD_184)
};
typedef struct A68t219  A68_219 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t220,(struct A68t219 *),(struct A68t219 *,void *));
typedef struct A68t220  A68_220 ;    /* PROC MODE219 */

A_PROCEDURE(A68_BOOL ,A68t221,(void),(void *));
typedef struct A68t221  A68_221 ;    /* PROC BOOL */

A_PROCEDURE(A68_BOOL ,A68t222,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t222  A68_222 ;    /* PROC(INT,INT) BOOL */

A_PROCEDURE(A68_VOID ,A68t223,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t223  A68_223 ;    /* PROC(INT,INT) VOID */

A_PROCEDURE(A68_BOOL ,A68t224,(struct A68t219 ,struct A68t219 ),(struct A68t219 ,struct A68t219 ,void *));
typedef struct A68t224  A68_224 ;    /* PROC(MODE219,MODE219) BOOL */

A_PROCEDURE(A68_BOOL ,A68t225,(struct A68t219 ),(struct A68t219 ,void *));
typedef struct A68t225  A68_225 ;    /* PROC(MODE219) BOOL */

A_PROCEDURE(A68_VOID ,A68t226,(A68_VC ,A68_BOOL ),(A68_VC ,A68_BOOL ,void *));
typedef struct A68t226  A68_226 ;    /* PROC(MODE26,BOOL) VOID */
struct A68t228 ;

A_PROCEDURE(A68_VOID ,A68t227,(A68_INT ,struct A68t228 ),(A68_INT ,struct A68t228 ,void *));
typedef struct A68t227  A68_227 ;    /* PROC(INT,MODE228) VOID */
A_ROW(A68_VC ,A68t228,1);
typedef struct A68t228  A68_228 ;    /* [] MODE26 */

A_PROCEDURE(A68_BITS ,A68t229,(void),(void *));
typedef struct A68t229  A68_229 ;    /* PROC BITS */
struct A68t230{
A68_INT  Cfile;
A_PAD_INT(PAD_185)
};
typedef struct A68t230  A68_230 ;    /* STRUCT(INT)  */
struct A68t231{
A68_INT  Seedfile;
A_PAD_INT(PAD_186)
};
typedef struct A68t231  A68_231 ;    /* STRUCT(INT)  */
struct A68t232 { A68_INT mode; union {
struct A68t230  mode1;
struct A68t231  mode2;
struct A68t106  mode3;
} data; };
typedef struct A68t232  A68_232 ;    /* UNION(MODE230,MODE231,MODE106,VOID)  */
struct A68t233{
A68_VC  Version;
A68_LINT  Translationtime;
A_PAD_LINT(PAD_187)
A68_VC  Sourcefile;
struct A68t106  Nameseed;
A_PAD_ISTRUCT(A68_106 ,PAD_188)
struct A68t232  Nameseedorigin;
struct A68t234 * Used_modules;
A68_VC  Commandline;
struct A68t235 * Environment;
};
typedef struct A68t233  A68_233 ;    /* STRUCT(REF MODE26,LONG INT,REF MODE26,MODE106,MODE232,REF MODE234,REF MODE26,REF MODE235)  */
struct A68t234{
A68_VC  Modinfo_file;
struct A68t234 * Next;
};
typedef struct A68t234  A68_234 ;    /* STRUCT(REF MODE26,REF MODE234)  */
struct A68t235{
A68_VC  Env_name;
A68_VC  Env_value;
struct A68t235 * Next;
};
typedef struct A68t235  A68_235 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE235)  */
struct A68t237 ;

A_PROCEDURE(struct A68t59 *,A68t236,(A68_VC ,struct A68t237 *,A68_VC *),(A68_VC ,struct A68t237 *,A68_VC *,void *));
typedef struct A68t236  A68_236 ;    /* PROC(MODE26,REF MODE237,REF REF MODE26) REF MODE59 */
struct A68t237{
A68_VC  Dir;
struct A68t237 * Next;
};
typedef struct A68t237  A68_237 ;    /* STRUCT(REF MODE26,REF MODE237)  */
struct A68t238 { A68_INT mode; union {
struct A68t204  mode1;
struct A68t205  mode2;
struct A68t206  mode3;
} data; };
typedef struct A68t238  A68_238 ;    /* UNION(MODE204,MODE205,MODE206)  */
struct A68t239 { A68_INT mode; union {
struct A68t147  mode1;
A68_INT  mode2;
A68_BOOL  mode3;
struct A68t188  mode4;
struct A68t107  mode5;
struct A68t141  mode6;
struct A68t189  mode7;
struct A68t190  mode8;
struct A68t191  mode9;
} data; };
typedef struct A68t239  A68_239 ;    /* UNION(MODE147,INT,BOOL,MODE188,MODE107,MODE141,MODE189,MODE190,MODE191)  */
struct A68t240 { A68_INT mode; union {
struct A68t147  mode1;
A68_INT  mode2;
A68_BOOL  mode3;
struct A68t188  mode4;
struct A68t107  mode5;
struct A68t141  mode6;
struct A68t189  mode7;
struct A68t190  mode8;
struct A68t191  mode9;
struct A68t192  mode10;
struct A68t193  mode11;
struct A68t194  mode12;
struct A68t155  mode13;
struct A68t195  mode14;
struct A68t196  mode15;
struct A68t197  mode16;
struct A68t198  mode17;
struct A68t199  mode18;
struct A68t200  mode19;
} data; };
typedef struct A68t240  A68_240 ;    /* UNION(MODE147,INT,BOOL,MODE188,MODE107,MODE141,MODE189,MODE190,MODE191,MODE192,MODE193,MODE194,MODE155,MODE195,MODE196,MODE197,MODE198,MODE199,MODE200)  */

A_PROCEDURE(A68_VOID ,A68t241,(struct A68t187 ,A68_VC *),(struct A68t187 ,A68_VC *,void *));
typedef struct A68t241  A68_241 ;    /* PROC(MODE187) MODE26 */
struct A68t242{
A68_INT  Parameters;
A_PAD_INT(PAD_189)
A68_INT  Result;
A_PAD_INT(PAD_190)
A68_BOOL  Hasdescriptors;
A_PAD_BOOL(PAD_191)
};
typedef struct A68t242  A68_242 ;    /* STRUCT(INT,INT,BOOL)  */
struct A68t243{
A68_INT  Mode;
A_PAD_INT(PAD_192)
A68_INT  Offset;
A_PAD_INT(PAD_193)
struct A68t108  Name;
A_PAD_ISTRUCT(A68_108 ,PAD_194)
};
typedef struct A68t243  A68_243 ;    /* STRUCT(INT,INT,MODE108)  */

A_PROCEDURE(A68_VOID ,A68t244,(A68_INT ,struct A68t93 *),(A68_INT ,struct A68t93 *,void *));
typedef struct A68t244  A68_244 ;    /* PROC(INT) REF MODE93 */

A_PROCEDURE(A68_VOID ,A68t245,(struct A68t243 *,A68_VC *),(struct A68t243 *,A68_VC *,void *));
typedef struct A68t245  A68_245 ;    /* PROC(REF MODE243) MODE26 */
struct A68t247 ;

A_PROCEDURE(A68_VOID ,A68t246,(A68_INT ,A68_VC ,struct A68t247 *),(A68_INT ,A68_VC ,struct A68t247 *,void *));
typedef struct A68t246  A68_246 ;    /* PROC(INT,MODE26) MODE247 */
struct A68t247{
struct A68t106  Name;
A_PAD_ISTRUCT(A68_106 ,PAD_195)
A68_INT  Mode;
A_PAD_INT(PAD_196)
};
typedef struct A68t247  A68_247 ;    /* STRUCT(MODE106,INT)  */
struct A68t249 ;

A_PROCEDURE(A68_VOID ,A68t248,(struct A68t249 ,A68_INT ),(struct A68t249 ,A68_INT ,void *));
typedef struct A68t248  A68_248 ;    /* PROC(REF MODE249,INT) VOID */
A_ROW(struct A68t121 ,A68t249,1);
typedef struct A68t249  A68_249 ;    /* [] MODE121 */

A_PROCEDURE(A68_VOID ,A68t250,(A68_INT ,struct A68t242 *),(A68_INT ,struct A68t242 *,void *));
typedef struct A68t250  A68_250 ;    /* PROC(INT) MODE242 */
struct A68t252 ;

A_PROCEDURE(A68_VOID ,A68t251,(A68_INT ,struct A68t252 *),(A68_INT ,struct A68t252 *,void *));
typedef struct A68t251  A68_251 ;    /* PROC(INT) REF MODE252 */
A_VECTOR(struct A68t243 ,A68t252);
typedef struct A68t252  A68_252 ;    /* VECTOR [] MODE243 */

A_PROCEDURE(A68_INT ,A68t253,(A68_INT ,A68_BOOL ),(A68_INT ,A68_BOOL ,void *));
typedef struct A68t253  A68_253 ;    /* PROC(INT,BOOL) INT */

A_PROCEDURE(A68_VOID ,A68t254,(A68_INT ,A68_INT ,A68_VC *),(A68_INT ,A68_INT ,A68_VC *,void *));
typedef struct A68t254  A68_254 ;    /* PROC(INT,INT) MODE26 */
struct A68t255{
struct A68t108  Name;
A_PAD_ISTRUCT(A68_108 ,PAD_197)
struct A68t127  Ym;
struct A68t106  Ys;
A_PAD_ISTRUCT(A68_106 ,PAD_198)
A68_INT  Level;
A_PAD_INT(PAD_199)
struct A68t256 * Ids;
struct A68t257 * Uses;
struct A68t255 * Rest;
};
typedef struct A68t255  A68_255 ;    /* STRUCT(MODE108,MODE127,MODE106,INT,REF MODE256,REF MODE257,REF MODE255)  */
struct A68t256{
struct A68t108  Name;
A_PAD_ISTRUCT(A68_108 ,PAD_200)
struct A68t106  Uname;
A_PAD_ISTRUCT(A68_106 ,PAD_201)
A68_BOOL  Optimised;
A_PAD_BOOL(PAD_202)
A68_BOOL  Iddec;
A_PAD_BOOL(PAD_203)
A68_BOOL  Globalproc;
A_PAD_BOOL(PAD_204)
A68_BOOL  Genproc;
A_PAD_BOOL(PAD_205)
A68_BOOL  Forceuse;
A_PAD_BOOL(PAD_206)
A68_INT  Mode;
A_PAD_INT(PAD_207)
A68_INT  Decno;
A_PAD_INT(PAD_208)
A68_VC  Definition;
A68_VC  Rhs;
struct A68t256 * Rest;
};
typedef struct A68t256  A68_256 ;    /* STRUCT(MODE108,MODE106,BOOL,BOOL,BOOL,BOOL,BOOL,INT,INT,REF MODE26,REF MODE26,REF MODE256)  */
struct A68t257{
struct A68t108  Name;
A_PAD_ISTRUCT(A68_108 ,PAD_209)
struct A68t106  Uname;
A_PAD_ISTRUCT(A68_106 ,PAD_210)
struct A68t256 * Ids;
struct A68t257 * Rest;
};
typedef struct A68t257  A68_257 ;    /* STRUCT(MODE108,MODE106,REF MODE256,REF MODE257)  */
struct A68t259{
struct A68t106  L;
A_PAD_ISTRUCT(A68_106 ,PAD_211)
struct A68t106  G;
A_PAD_ISTRUCT(A68_106 ,PAD_212)
};
typedef struct A68t259  A68_259 ;    /* STRUCT(MODE106,MODE106)  */
struct A68t258{
struct A68t106  Uname;
A_PAD_ISTRUCT(A68_106 ,PAD_213)
struct A68t158  Xmi;
struct A68t259  Checkinfo;
};
typedef struct A68t258  A68_258 ;    /* STRUCT(MODE106,MODE158,MODE259)  */

A_PROCEDURE(A68_VOID ,A68t260,(struct A68t168 ),(struct A68t168 ,void *));
typedef struct A68t260  A68_260 ;    /* PROC(MODE168) VOID */

A_PROCEDURE(A68_VOID ,A68t261,(struct A68t163 ,A68_INT ),(struct A68t163 ,A68_INT ,void *));
typedef struct A68t261  A68_261 ;    /* PROC(MODE163,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t262,(struct A68t124 ),(struct A68t124 ,void *));
typedef struct A68t262  A68_262 ;    /* PROC(MODE124) VOID */
A_ROW(struct A68t255 *,A68t263,1);
typedef struct A68t263  A68_263 ;    /* [] REF MODE255 */

A_PROCEDURE(A68_VOID ,A68t264,(struct A68t158 ),(struct A68t158 ,void *));
typedef struct A68t264  A68_264 ;    /* PROC(MODE158) VOID */

A_PROCEDURE(A68_VOID ,A68t265,(struct A68t130 ),(struct A68t130 ,void *));
typedef struct A68t265  A68_265 ;    /* PROC(MODE130) VOID */
A_ROW(struct A68t129 ,A68t266,1);
typedef struct A68t266  A68_266 ;    /* [] MODE129 */

A_PROCEDURE(A68_BOOL ,A68t267,(A68_INT ,A68_VC ),(A68_INT ,A68_VC ,void *));
typedef struct A68t267  A68_267 ;    /* PROC(INT,MODE26) BOOL */

A_PROCEDURE(A68_VOID ,A68t268,(struct A68t232 ),(struct A68t232 ,void *));
typedef struct A68t268  A68_268 ;    /* PROC(MODE232) VOID */

A_PROCEDURE(struct A68t106 ,A68t269,(void),(void *));
typedef struct A68t269  A68_269 ;    /* PROC MODE106 */

A_PROCEDURE(A68_VOID ,A68t270,(struct A68t106 ),(struct A68t106 ,void *));
typedef struct A68t270  A68_270 ;    /* PROC(MODE106) VOID */

A_PROCEDURE(A68_VOID ,A68t271,(struct A68t232 ,A68_VC *),(struct A68t232 ,A68_VC *,void *));
typedef struct A68t271  A68_271 ;    /* PROC(MODE232) MODE26 */

A_PROCEDURE(A68_VOID ,A68t272,(struct A68t96 ),(struct A68t96 ,void *));
typedef struct A68t272  A68_272 ;    /* PROC(MODE96) VOID */

A_PROCEDURE(A68_VOID ,A68t273,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t273  A68_273 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,61,A68t274);
typedef struct A68t274  A68_274 ;    /* STRUCT 61 CHAR */
A_VECTOR(A68_VC ,A68t276);
typedef struct A68t276  A68_276 ;    /* VECTOR [] REF MODE26 */
struct A68t275{
A68_VC  Streambuffer;
A68_INT  Streamptr;
A_PAD_INT(PAD_214)
struct A68t276  Buffers;
A68_INT  Currentbuffer;
A_PAD_INT(PAD_215)
};
typedef struct A68t275  A68_275 ;    /* STRUCT(REF MODE26,INT,REF MODE276,INT)  */

A_PROCEDURE(A68_VOID ,A68t277,(A68_BOOL ,struct A68t276 *),(A68_BOOL ,struct A68t276 *,void *));
typedef struct A68t277  A68_277 ;    /* PROC(BOOL) MODE276 */
A_ISTRUCT(struct A68t275 ,20,A68t278);
typedef struct A68t278  A68_278 ;    /* STRUCT 20 MODE275 */
A_ROW(struct A68t275 ,A68t279,1);
typedef struct A68t279  A68_279 ;    /* [] MODE275 */
A_VECTOR(struct A68t275 ,A68t280);
typedef struct A68t280  A68_280 ;    /* VECTOR [] MODE275 */
A_ISTRUCT(A68_CHAR ,11,A68t281);
typedef struct A68t281  A68_281 ;    /* STRUCT 11 CHAR */
#define A68_282  A68_VC 
#define A68t282 A68t26            /* FLEX VECTOR [] CHAR */

A_PROCEDURE(A68_VOID ,A68t283,(A68_BOOL ,struct A68t182 *),(A68_BOOL ,struct A68t182 *,void *));
typedef struct A68t283  A68_283 ;    /* PROC(BOOL) MODE182 */
A_ISTRUCT(struct A68t183 ,128,A68t284);
typedef struct A68t284  A68_284 ;    /* STRUCT 128 MODE183 */
A_ISTRUCT(A68_CHAR ,31,A68t285);
typedef struct A68t285  A68_285 ;    /* STRUCT 31 CHAR */

A_PROCEDURE(A68_VOID ,A68t286,(A68_VC ),(A68_VC ,void *));
typedef struct A68t286  A68_286 ;    /* PROC(REF MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t287,(A68_INT ,struct A68t186 ),(A68_INT ,struct A68t186 ,void *));
typedef struct A68t287  A68_287 ;    /* PROC(INT,MODE186) VOID */
A_ISTRUCT(A68_INT ,3,A68t288);
typedef struct A68t288  A68_288 ;    /* STRUCT 3 INT */

A_PROCEDURE(A68_VOID ,A68t289,(A68_BOOL ,struct A68t279 *),(A68_BOOL ,struct A68t279 *,void *));
typedef struct A68t289  A68_289 ;    /* PROC(BOOL) MODE279 */
A_ISTRUCT(A68_INT ,2,A68t290);
typedef struct A68t290  A68_290 ;    /* STRUCT 2 INT */
A_ISTRUCT(A68_INT ,4,A68t291);
typedef struct A68t291  A68_291 ;    /* STRUCT 4 INT */

A_PROCEDURE(A68_VOID ,A68t292,(A68_BOOL ,struct A68t186 *),(A68_BOOL ,struct A68t186 *,void *));
typedef struct A68t292  A68_292 ;    /* PROC(BOOL) MODE186 */
A_ISTRUCT(A68_CHAR ,160,A68t293);
typedef struct A68t293  A68_293 ;    /* STRUCT 160 CHAR */
A_ISTRUCT(A68_CHAR ,22,A68t294);
typedef struct A68t294  A68_294 ;    /* STRUCT 22 CHAR */
A_ISTRUCT(A68_CHAR ,24,A68t295);
typedef struct A68t295  A68_295 ;    /* STRUCT 24 CHAR */

A_PROCEDURE(A68_VOID ,A68t296,(A68_VC *),(A68_VC *,void *));
typedef struct A68t296  A68_296 ;    /* PROC REF MODE26 */
A_ISTRUCT(A68_CHAR ,5,A68t297);
typedef struct A68t297  A68_297 ;    /* STRUCT 5 CHAR */
A_ISTRUCT(A68_CHAR ,8,A68t298);
typedef struct A68t298  A68_298 ;    /* STRUCT 8 CHAR */
A_ISTRUCT(A68_CHAR ,3,A68t299);
typedef struct A68t299  A68_299 ;    /* STRUCT 3 CHAR */
A_ISTRUCT(A68_CHAR ,9,A68t300);
typedef struct A68t300  A68_300 ;    /* STRUCT 9 CHAR */
A_ISTRUCT(struct A68t213 ,4,A68t301);
typedef struct A68t301  A68_301 ;    /* STRUCT 4 MODE213 */
A_ISTRUCT(A68_CHAR ,21,A68t302);
typedef struct A68t302  A68_302 ;    /* STRUCT 21 CHAR */

A_PROCEDURE(A68_VOID ,A68t303,(A68_BOOL ,struct A68t207 *),(A68_BOOL ,struct A68t207 *,void *));
typedef struct A68t303  A68_303 ;    /* PROC(BOOL) MODE207 */
A_ISTRUCT(A68_CHAR ,29,A68t304);
typedef struct A68t304  A68_304 ;    /* STRUCT 29 CHAR */
A_ISTRUCT(struct A68t213 ,2,A68t305);
typedef struct A68t305  A68_305 ;    /* STRUCT 2 MODE213 */
A_ISTRUCT(A68_CHAR ,25,A68t306);
typedef struct A68t306  A68_306 ;    /* STRUCT 25 CHAR */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from uniquenameserver --- */
extern A68_268  BJMACTR_initialiseuniquenameserver;
extern A68_VOID  BLMACTR_closedownuniquenameserver(void);
extern A68_VOID  PIMACTR_write_cfile_uname(struct A68t106 );
/* --- End of imports from uniquenameserver --- */


/* --- Imports from moduletracer --- */
extern A68_INT  ZCHACTR_tracelevel(A68_VC );
/* --- End of imports from moduletracer --- */


/* --- Imports from modules --- */
extern A68_VOID  EBPACTR_adddecsmodule(struct A68t163 ,A68_INT );
extern A68_VOID  JCPACTR_addexternalid(struct A68t124 );
extern A68_BOOL  FLOACTR_composition;
extern A68_VOID  QPPACTR_declareusedids(void);
extern A68_VOID  IYOACTR_givemoduledetails(struct A68t108 ,A68_INT ,A68_BOOL ,A68_159 *);
extern A68_VOID  NLOACTR_givespec(struct A68t108 ,struct A68t108 ,struct A68t127 ,A68_160 *);
extern A68_VOID  OZOACTR_initialisecurrentmodule(struct A68t158 );
extern A68_VOID  WAPACTR_initialisespec(struct A68t130 );
extern A68_186  DZOACTR_keptdecnos;
/* --- End of imports from modules --- */


/* --- Imports from modes --- */
extern A68_VOID  BBOACTR_initialisemodetable(struct A68t249 ,A68_INT );
/* --- End of imports from modes --- */


/* --- Imports from mnemonics --- */
extern A68_VOID  SYWACTR_imperativemnemonic(struct A68t187 ,A68_VC *);
/* --- End of imports from mnemonics --- */


/* --- Imports from lookup --- */
extern A68_INT  BNKACTR_lookup(A68_VC ,A68_BOOL );
extern A68_INT  QNKACTR_optboollookup(A68_VC ,A68_BOOL );
/* --- End of imports from lookup --- */


/* --- Imports from incoperfn --- */
#define LGAACTR_voidfn 19
#define PGAACTR_generatorfn 50
/* --- End of imports from incoperfn --- */


/* --- Imports from incmode --- */
#define UEAACTR_voidmode 5
/* --- End of imports from incmode --- */


/* --- Imports from incinstallation --- */
/* --- End of imports from incinstallation --- */


/* --- Imports from incimperatives --- */
#define ZAAACTR_emptyfn 1
#define BBAACTR_nilfn 3
#define ICAACTR_optboolfn 9
#define WBAACTR_semifn 11
#define ABAACTR_skipfn 2
/* --- End of imports from incimperatives --- */


/* --- Imports from incid --- */
#define HAAACTR_minidno 3
/* --- End of imports from incid --- */


/* --- Imports from environment --- */
extern A68_VOID  PXIACTR_assert(A68_VC ,A68_BOOL );
extern A68_VOID  GTIACTR_abort(void);
extern A68_VC  YQIACTR_basenamesourcefile;
extern A68_BOOL  CQIACTR_dotoption;
extern A68_VOID  IXIACTR_error(A68_INT );
extern A68_VOID  XWIACTR_fault(A68_VC ,A68_INT );
extern A68_VOID  KSIACTR_finishmessage(void);
extern A68_INT  WRIACTR_greatestseverity;
extern A68_INT  QRIACTR_linenumber;
extern A68_VOID  KDHACTR_message(A68_INT ,A68_VC *);
extern A68_BOOL  BQIACTR_lineoption;
extern A68_BOOL  IQIACTR_optbooloption;
extern A68_BOOL  DQIACTR_quoteoption;
extern A68_VOID  CYIACTR_setparams(void);
extern A68_VC  XQIACTR_sourcefilename;
extern A68_BOOL  GQIACTR_streamoption;
extern A68_BOOL  HQIACTR_streamoutoption;
extern A68_VOID  LXIACTR_terminalerror(A68_INT );
extern A68_BOOL  FQIACTR_tildeoption;
extern A68_232  JRIACTR_uname_option;
extern A68_99  FSIACTR_list;
extern A68_VOID  BSIACTR_typelineonterminal(A68_VC );
extern A68_233  BYIACTR_config_info;
/* --- End of imports from environment --- */


/* --- Imports from environ --- */
#define NQLACTR_preamblestream 0
#define PQLACTR_importsstream 2
#define OQLACTR_modesstream 1
#define QQLACTR_externstream 3
extern A68_INT  TQLACTR_nonlocdecstream(A68_INT );
extern A68_INT  WQLACTR_codestream(A68_INT );
extern A68_INT  EQLACTR_currentlevel(void);
extern A68_INT  YNLACTR_highestlevel;
/* --- End of imports from environ --- */


/* --- Imports from denotations --- */
extern A68_VOID  PLJACTR_convertradixstring(A68_VC ,A68_INT ,A68_VC *);
extern A68_VOID  MPJACTR_replacecontrolchars(A68_VC ,A68_VC *);
/* --- End of imports from denotations --- */


/* --- Imports from coutput --- */
extern A68_VOID  WSLACTR_initcoutput(A68_VC );
extern A68_VOID  BCMACTR_closecoutput(void);
extern A68_VOID  VBMACTR_writecstream(struct A68t212 ,A68_INT );
extern A68_96  PSLACTR_purgeoutputfiles;
/* --- End of imports from coutput --- */


/* --- Imports from compiler --- */
extern A68_VOID  EXABCTR_translator(struct A68t185 ,struct A68t157 *,struct A68t186 );
/* --- End of imports from compiler --- */


/* --- Imports from rscompiler --- */
extern A68_BOOL  URAACTR_compile(struct A68t175 ,struct A68t176 ,struct A68t177 ,struct A68t178 ,struct A68t179 ,struct A68t180 ,struct A68t181 ,struct A68t182 );
/* --- End of imports from rscompiler --- */


/* --- Imports from centities --- */
extern A68_SINT  EIAACTR_cnewline;
/* --- End of imports from centities --- */


/* --- Imports from osif --- */
#include <errno.h>

#define RCBAOSF_errno errno
extern A68_54  RIBAOSF_ignore_msg;
#define HVBAOSF_newline_char '\012'
extern A68_BOOL  BVBAOSF_(struct A68t60 ,struct A68t60 );
extern A68_60  SUBAOSF_io_eof;
extern A68_60  VUBAOSF_io_error;
extern A68_60  YUBAOSF_io_no_newline;
extern A68_59 * RVBAOSF_open_file(A68_VC ,struct A68t62 ,struct A68t54 );
extern A68_VOID  JWBAOSF_close_file(struct A68t59 *,struct A68t54 );
extern A68_VOID  EXBAOSF_read_line(struct A68t59 *,A68_VC ,A68_INT *,struct A68t54 ,A68_60 *);
extern A68_62  BTBAOSF_read_access;
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
extern A68_INT  PLAAOSF_max(A68_INT ,A68_INT );
extern A68_INT  GOAAOSF_stringvalue(A68_VC );
extern A68_INT  KMAAOSF_truncate(A68_CHAR ,A68_VC );
extern A68_VOID  ROAAOSF_whole(A68_INT ,A68_INT ,A68_VC *);
/* --- End of imports from usefulops --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void AGMACTR(void);   /* uniquenameserver */
extern void BCHACTR(void);   /* moduletracer */
extern void VJOACTR(void);   /* modules */
extern void MLMACTR(void);   /* modes */
extern void QUWACTR(void);   /* mnemonics */
extern void CSJACTR(void);   /* lookup */
extern void XFAACTR(void);   /* incoperfn */
extern void ZDAACTR(void);   /* incmode */
extern void ODAACTR(void);   /* incinstallation */
extern void UAAACTR(void);   /* incimperatives */
extern void BAAACTR(void);   /* incid */
extern void HPIACTR(void);   /* environment */
extern void KNLACTR(void);   /* environ */
extern void UJJACTR(void);   /* denotations */
extern void YRLACTR(void);   /* coutput */
extern void WWABCTR(void);   /* compiler */
extern void ZJAACTR(void);   /* rscompiler */
extern void THAACTR(void);   /* centities */
extern void WSCAOSF(void);   /* osif */
extern void IKAAOSF(void);   /* usefulops */
/* --- end of DECS initialisation functions --- */
static A68_274   ZRBBCTR = {"$Id: a68toc.c,v 1.5.2.4 2004/09/27 03:04:16 teshields Exp $"}; 
A_GISVEC(A68_VC ,ASBBCTR,ZRBBCTR,61)
static A68_157  CSBBCTR_xsizes;
static A68_275  KSBBCTR_unsetstream;
static A68_278  LSBBCTR_streams_area;
static A68_279  MSBBCTR_streams;
static A68_275  QSBBCTR_current;
#define RSBBCTR_fixedstreams 1
static A68_275 * SSBBCTR_stream;
static A68_275 * JTBBCTR_stream;
static A68_VC * NTBBCTR_streambuffer;
static A68_INT * OTBBCTR_strptr;
static A68_INT * PTBBCTR_currentbuffer;
static A68_276 * QTBBCTR_buffers;
static A68_275 * RTBBCTR_curstradd;
#define RUBBCTR_separatorbase 16
#define SUBBCTR_terminatorbase 32
#define TUBBCTR_semibase 48
#define UUBBCTR_loadbase 64
#define VUBBCTR_idbase 80
#define WUBBCTR_numberbase 90
#define XUBBCTR_operbase 128
#define YUBBCTR_miscellaneousbase 192
#define ZUBBCTR_warnbase 208
#define AVBBCTR_iddecbase 224
#define BVBBCTR_starterbase 240
#define CVBBCTR_rangesize 64
#define DVBBCTR_subrangesize 16
#define EVBBCTR_linetype 10
#define FVBBCTR_maptype 11
#define GVBBCTR_notlastxcharstype 112
#define HVBBCTR_lastxcharstype 113
#define IVBBCTR_xcallmoduletype 200
#define JVBBCTR_xclosuretype 203
#define KVBBCTR_xtmoduletype 204
static A68_59 * LVBBCTR_inputfile;
static A68_INT  MVBBCTR_line_start;
static A68_INT  NVBBCTR_line_length;
static A68_BOOL  OVBBCTR_line_pending;
static A68_282  TVBBCTR_flexinputline;
static A68_182  HWBBCTR_charset;
static A68_183 * QWBBCTR_c;
static A68_INT  EXBBCTR_i;
static A68_285   LXBBCTR = {"\0\361\362\363\364\021\022\023\024\025\026\027\030\031!\"#$\365\032\366\035%\367&\033\0'\301\034("}; 
A_GISVEC(A68_VC ,MXBBCTR,LXBBCTR,31)
static A68_VC  NXBBCTR_contval;
static A68_BOOL  OXBBCTR_upped;
static A68_163  PXBBCTR_lastxtmodule;
static A68_BOOL  QXBBCTR_xtmodulepending;
static A68_BOOL  RXBBCTR_timeschecked;
static A68_INT  SXBBCTR_syntheticmoduleno;
static A68_293  CFCBCTR_wasteline;
static A68_INT  DFCBCTR_wastesize;
static A68_BOOL  GFCBCTR_printstream;
static A68_INT  HFCBCTR_level;
static A68_INT  IFCBCTR_s;
static A68_275 * JFCBCTR_stream;
static A68_INT * OFCBCTR_streamptr;
static A68_INT * PFCBCTR_currentbuffer;
static A68_VC * QFCBCTR_streambuffer;
static A68_276 * RFCBCTR_buffers;
static A68_INT  VFCBCTR_bytesused;
static A68_VC * WFCBCTR_b;
static A68_294   YFCBCTR = {" bytes used in stream "}; 
A_GISVEC(A68_VC ,AGCBCTR,YFCBCTR,22)
static A68_INT  DGCBCTR_upbstring;
static A68_VC  EGCBCTR_string;
static A68_295   GGCBCTR = {"SHELL: incomplete stream"}; 
A_GISVEC(A68_VC ,HGCBCTR,GGCBCTR,24)
static A68_87  RGCBCTR_next;
static A68_INT  XGCBCTR_line_start;
static A68_INT  YGCBCTR_line_length;
static A68_INT  ZGCBCTR_statement_number;
static A68_INT  AHCBCTR_hundred_counter;
static A68_297   HHCBCTR = {"shell"}; 
A_GISVEC(A68_VC ,IHCBCTR,HHCBCTR,5)
static A68_298   KHCBCTR = {"At line "}; 
static A68_299   LHCBCTR = {"..."}; 
A_GISVEC(A68_VC ,MHCBCTR,KHCBCTR,8)
A_GISVEC(A68_VC ,OHCBCTR,LHCBCTR,3)
static A68_300   SHCBCTR = {" /* line "}; 
A_GISVEC(A68_VC ,THCBCTR,SHCBCTR,9)
static A68_40   YHCBCTR = {": */"}; 
A_GISVEC(A68_VC ,ZHCBCTR,YHCBCTR,4)
static A68_295   IICBCTR = {"invalid stream directive"}; 
A_GISVEC(A68_VC ,JICBCTR,IICBCTR,24)
static A68_302   CKCBCTR = {"SHELL: no last xchars"}; 
A_GISVEC(A68_VC ,DKCBCTR,CKCBCTR,21)
static A68_297   IKCBCTR = {"]    "}; 
A_GISVEC(A68_VC ,LKCBCTR,IKCBCTR,5)
static A68_108   XOCBCTR = {"chars should be absorbed by load"}; 
A_GISVEC(A68_VC ,YOCBCTR,XOCBCTR,32)
static A68_304   ZRCBCTR = {"#include <algol68/Asupport.h>"}; 
A_GISVEC(A68_VC ,ASCBCTR,ZRCBCTR,29)
static A68_306   GSCBCTR = {"/* end of translation of "}; 
A_GISVEC(A68_VC ,HSCBCTR,GSCBCTR,25)
static A68_299   LSCBCTR = {" */"}; 
A_GISVEC(A68_VC ,MSCBCTR,LSCBCTR,3)
static A68_INT  DTCBCTR_level;
typedef struct   /* env of non-global proc */
{
A68_INT  WTBBCTR_upbbuffers;
A_PAD_INT(PAD_216)
} AUBBCTR_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  VTBBCTR_size;
A_PAD_INT(PAD_217)
} KUBBCTR_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  Ll;
A_PAD_INT(PAD_218)
} FYBBCTR_outprep;
typedef struct   /* env of non-global proc */
{
A68_223  DYBBCTR_outprep;
} WYBBCTR_putints;
typedef struct   /* env of non-global proc */
{
A68_223  DYBBCTR_outprep;
} MZBBCTR_putint;
typedef struct   /* env of non-global proc */
{
A68_223  DYBBCTR_outprep;
} YZBBCTR_putchars;
typedef struct   /* env of non-global proc */
{
A68_223  DYBBCTR_outprep;
} FACBCTR_puttruncatedchars;
typedef struct   /* env of non-global proc */
{
A68_INT  QACBCTR_upbstreams;
A_PAD_INT(PAD_219)
} UACBCTR_generator;
typedef struct   /* env of non-global proc */
{
A68_170  HECBCTR_xbu;
} LECBCTR_generator;
typedef struct   /* env of non-global proc */
{
A68_INT * QICBCTR_resultsize;
} UICBCTR_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  MJCBCTR_newresultsize;
A_PAD_INT(PAD_220)
} QJCBCTR_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} UPCBCTR_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} IQCBCTR_generator;

A_STATIC A68_VOID  GSBBCTR_generator(A68_BOOL  FSBBCTR_anonymous, A68_276  *ReturnedValue);

A_STATIC A68_VOID  XSBBCTR_generator(A68_BOOL  WSBBCTR_anonymous, A68_276  *ReturnedValue);

A_STATIC A68_VOID  TTBBCTR_extendcurrent(void);

A_STATIC A68_VOID  ZTBBCTR_generator(A68_BOOL  XTBBCTR_anonymous, A68_276  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  JUBBCTR_generator(A68_BOOL  HUBBCTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  QVBBCTR_generator(A68_BOOL  PVBBCTR_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_BOOL  XVBBCTR_input(A68_VC  Line, A68_INT * Size);

A_STATIC A68_VOID  EWBBCTR_generator(A68_BOOL  DWBBCTR_anonymous, A68_182  *ReturnedValue);

A_STATIC A68_VOID  VXBBCTR_output(A68_172  Op, A68_INT  Ll);

A_STATIC A68_VOID  YXBBCTR_invert(A68_VC  String);

A_STATIC A68_VOID  EYBBCTR_outprep(A68_INT  Size, A68_INT  Type, void *NonLocals);

A_STATIC A68_VOID  VYBBCTR_putints(A68_INT  K, A68_186  A, void *NonLocals);

A_STATIC A68_VOID  LZBBCTR_putint(A68_INT  Type, A68_INT  I, void *NonLocals);

A_STATIC A68_VOID  XZBBCTR_putchars(A68_VC  S, void *NonLocals);

A_STATIC A68_VOID  EACBCTR_puttruncatedchars(A68_VC  S, void *NonLocals);

A_STATIC A68_VOID  TACBCTR_generator(A68_BOOL  RACBCTR_anonymous, A68_279  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  KECBCTR_generator(A68_BOOL  IECBCTR_anonymous, A68_186  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  FGCBCTR_positioncurrent(void);

A_STATIC A68_INT  IGCBCTR_nextbyte(void);

A_STATIC A68_INT  LGCBCTR_nextint(void);

A_STATIC A68_VOID  TGCBCTR_nextstring(A68_VC  *ReturnedValue);

A_STATIC A68_INT  BHCBCTR_nexttype(void);

A_STATIC A68_VOID  NICBCTR_nextxchars(A68_INT  Suggestedsize, A68_INT  Insertion, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  TICBCTR_generator(A68_BOOL  RICBCTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  PJCBCTR_generator(A68_BOOL  NJCBCTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  GKCBCTR_nextstreamimperative(A68_187  *ReturnedValue);

A_STATIC A68_VOID  TPCBCTR_generator(A68_BOOL  RPCBCTR_anonymous, A68_186  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  HQCBCTR_generator(A68_BOOL  FQCBCTR_anonymous, A68_207  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  ZTBBCTR_generator(A68_BOOL  XTBBCTR_anonymous, A68_276  *ReturnedValue, void *NonLocals)
#define NL(x) (((AUBBCTR_generator *)NonLocals)->x)
{ 
A68_276  BUBBCTR;  /* clause result */
A68_276  CUBBCTR;  /* OPERATORS - dynamic generator */
{ 
CUBBCTR.upb = (NL(WTBBCTR_upbbuffers)+1) ;
( XTBBCTR_anonymous? A_VLOC(A68_VC ,CUBBCTR): A_VHEAP(A68_VC ,CUBBCTR) );
BUBBCTR = CUBBCTR;
} 
*ReturnedValue = (BUBBCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  JUBBCTR_generator(A68_BOOL  HUBBCTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((KUBBCTR_generator *)NonLocals)->x)
{ 
A68_VC  LUBBCTR;  /* clause result */
A68_VC  MUBBCTR;  /* OPERATORS - dynamic generator */
{ 
MUBBCTR.upb = NL(VTBBCTR_size) ;
( HUBBCTR_anonymous? A_VLOC(A68_CHAR ,MUBBCTR): A_VHEAP(A68_CHAR ,MUBBCTR) );
LUBBCTR = MUBBCTR;
} 
*ReturnedValue = (LUBBCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  YXBBCTR_invert(A68_VC  String)
{ 
A68_CHAR * ZXBBCTR_c;
A68_INT  AYBBCTR;  /* forall loop counter */
A_PROC_ENTRY(invert);
 /* line 246: */
 /* line 247: */
AYBBCTR = String.upb -1;
ZXBBCTR_c = String.data;
for (;AYBBCTR-- >= 0;
(ZXBBCTR_c++
) )
{
 /* line 248: */
 /* line 249: */
if ( (((*ZXBBCTR_c)>='a')&((*ZXBBCTR_c)<='z')) )
{ 
 /* line 250: */
(*ZXBBCTR_c) = (A68_SSBITS)(((A68_INT)(unsigned char)(*ZXBBCTR_c)-(A68_INT)(unsigned char)'a')+(A68_INT)(unsigned char)'A');
} 
else
{ 
 /* line 251: */
if ( (((*ZXBBCTR_c)>='A')&((*ZXBBCTR_c)<='Z')) )
{ 
 /* line 252: */
 /* line 253: */
(*ZXBBCTR_c) = (A68_SSBITS)(((A68_INT)(unsigned char)(*ZXBBCTR_c)-(A68_INT)(unsigned char)'A')+(A68_INT)(unsigned char)'a');
} 
} 
}
A_PROC_EXIT(invert);
return;
} 
#undef NL

A_STATIC A68_VOID  EYBBCTR_outprep(A68_INT  Size, A68_INT  Type, void *NonLocals)
#define NL(x) (((FYBBCTR_outprep *)NonLocals)->x)
{ 
A68_VC  GYBBCTR;  /* OPERATORS - nil -> mode */
A68_VC  HYBBCTR;  /* == */
A68_VC  IYBBCTR;  /* OPERATORS - trim index */
A68_VC  JYBBCTR;  /* OPERATORS - trim index */
A68_VC * KYBBCTR;  /* YIELD */
A68_VC  LYBBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  MYBBCTR;  /* avoid structure result */
A68_VC  NYBBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  OYBBCTR;  /* avoid structure result */
A68_VC  PYBBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  QYBBCTR;  /* YIELD */
A68_CHAR * RYBBCTR;  /* YIELD */
A_PROC_ENTRY(outprep);
 /* line 264: */
 /* line 265: */
{ 
 /* line 266: */
 /* line 268: */
HYBBCTR = A_VVAC(GYBBCTR) ;
if ( A_VSTRUCTCOMP((*NTBBCTR_streambuffer),HYBBCTR) )
{ 
TTBBCTR_extendcurrent();
} 
else
{ 
 /* line 269: */
 /* line 270: */
if ( ((Size+(*OTBBCTR_strptr))>(*NTBBCTR_streambuffer).upb) )
{ 
 /* line 271: */
IYBBCTR = (*(&A_VINDEX((*QTBBCTR_buffers),(*PTBBCTR_currentbuffer)))) ;
KYBBCTR = (&A_VINDEX((*QTBBCTR_buffers),(*PTBBCTR_currentbuffer))) ;
(*KYBBCTR) = A_VTRIM(JYBBCTR,(IYBBCTR),A_VTSCRIPT(&(JYBBCTR.upb),(IYBBCTR).upb,1,(*OTBBCTR_strptr)));
 /* line 272: */
 /* line 273: */
TTBBCTR_extendcurrent();
} 
} 
 /* line 275: */
 /* line 276: */
 /* line 277: */
if ( HQIACTR_streamoutoption )
{ 
 /* line 278: */
ROAAOSF_whole( Type, 0, &MYBBCTR );
ROAAOSF_whole( NL(Ll), 0, &OYBBCTR );
A_CALLPROC(FSIACTR_list,(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_HVEC(LYBBCTR,'%',A68_CHAR ),MYBBCTR),A_HVEC(NYBBCTR,'(',A68_CHAR )),OYBBCTR),A_HVEC(PYBBCTR,')',A68_CHAR ))),(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_HVEC(LYBBCTR,'%',A68_CHAR ),MYBBCTR),A_HVEC(NYBBCTR,'(',A68_CHAR )),OYBBCTR),A_HVEC(PYBBCTR,')',A68_CHAR )),(FSIACTR_list).nonlocals));
} 
 /* line 280: */
 /* line 281: */
QYBBCTR = (*OTBBCTR_strptr)+=1 ;
RYBBCTR = (&A_VINDEX((*NTBBCTR_streambuffer),QYBBCTR)) ;
(*RYBBCTR) = (A68_SSBITS)Type;
} 
A_PROC_EXIT(outprep);
return;
} 
#undef NL

A_STATIC A68_VOID  VYBBCTR_putints(A68_INT  K, A68_186  A, void *NonLocals)
#define NL(x) (((WYBBCTR_putints *)NonLocals)->x)
{ 
A68_INT  XYBBCTR_v;
A68_INT * YYBBCTR;  /* forall control - []x */
A68_INT  ZYBBCTR;  /* forall loop counter */
A68_VC  AZBBCTR;  /* OPERATORS - trim index */
A68_VC  BZBBCTR;  /* OPERATORS - trim index */
A68_VC  CZBBCTR;  /* OPERATORS - trim index */
union {  /* BIOP 99 */
A68_INT   source;
A68_40   destination;
} DZBBCTR; 
A68_VC  EZBBCTR;  /* OPERATORS - istruct -> vector */
A68_40  FZBBCTR;  /* OPERATORS - istruct -> vector */
A68_VC  GZBBCTR;  /* YIELD */
A68_VC  HZBBCTR;  /* OPERATORS - assign op */
A_PROC_ENTRY(putints);
 /* line 297: */
 /* line 298: */
{ 
A_CALLPROC(NL(DYBBCTR_outprep),(((4*A.dim[0].upb)+1), K),(((4*A.dim[0].upb)+1), K,(NL(DYBBCTR_outprep)).nonlocals));
 /* line 299: */
 /* line 300: */
ZYBBCTR = A.dim[0].upb - A.dim[0].lwb;
YYBBCTR = A.data;
for (;ZYBBCTR-- >= 0;
(YYBBCTR += A.dim[0].stride
) )
{
XYBBCTR_v = *YYBBCTR;
BZBBCTR = A_VTRIM(AZBBCTR,((*NTBBCTR_streambuffer)),A_VTSCRIPT(&(AZBBCTR.upb),((*NTBBCTR_streambuffer)).upb,((*OTBBCTR_strptr)+1),((*NTBBCTR_streambuffer)).upb)) ;
DZBBCTR.source = XYBBCTR_v ;
FZBBCTR = (DZBBCTR.destination) ;
GZBBCTR = A_VTRIM(CZBBCTR,(BZBBCTR),A_VTSCRIPT(&(CZBBCTR.upb),(BZBBCTR).upb,1,4)) ;
HZBBCTR = A_HISVEC(EZBBCTR,FZBBCTR,4,A68_CHAR ) ;
A_VASSIGN2(HZBBCTR,GZBBCTR,A68_CHAR );
 /* line 301: */
 /* line 302: */
(*OTBBCTR_strptr)+=4;
}
 /* line 303: */
} 
A_PROC_EXIT(putints);
return;
} 
#undef NL

A_STATIC A68_VOID  LZBBCTR_putint(A68_INT  Type, A68_INT  I, void *NonLocals)
#define NL(x) (((MZBBCTR_putint *)NonLocals)->x)
{ 
A68_VC  NZBBCTR;  /* OPERATORS - trim index */
A68_VC  OZBBCTR;  /* OPERATORS - trim index */
A68_VC  PZBBCTR;  /* OPERATORS - trim index */
union {  /* BIOP 99 */
A68_INT   source;
A68_40   destination;
} QZBBCTR; 
A68_VC  RZBBCTR;  /* OPERATORS - istruct -> vector */
A68_40  SZBBCTR;  /* OPERATORS - istruct -> vector */
A68_VC  TZBBCTR;  /* YIELD */
A68_VC  UZBBCTR;  /* OPERATORS - assign op */
A_PROC_ENTRY(putint);
 /* line 306: */
 /* line 307: */
{ 
A_CALLPROC(NL(DYBBCTR_outprep),(5, Type),(5, Type,(NL(DYBBCTR_outprep)).nonlocals));
 /* line 308: */
OZBBCTR = A_VTRIM(NZBBCTR,((*NTBBCTR_streambuffer)),A_VTSCRIPT(&(NZBBCTR.upb),((*NTBBCTR_streambuffer)).upb,((*OTBBCTR_strptr)+1),((*NTBBCTR_streambuffer)).upb)) ;
QZBBCTR.source = I ;
SZBBCTR = (QZBBCTR.destination) ;
TZBBCTR = A_VTRIM(PZBBCTR,(OZBBCTR),A_VTSCRIPT(&(PZBBCTR.upb),(OZBBCTR).upb,1,4)) ;
UZBBCTR = A_HISVEC(RZBBCTR,SZBBCTR,4,A68_CHAR ) ;
A_VASSIGN2(UZBBCTR,TZBBCTR,A68_CHAR );
 /* line 309: */
 /* line 310: */
(*OTBBCTR_strptr)+=4;
} 
A_PROC_EXIT(putint);
return;
} 
#undef NL

A_STATIC A68_VOID  XZBBCTR_putchars(A68_VC  S, void *NonLocals)
#define NL(x) (((YZBBCTR_putchars *)NonLocals)->x)
{ 
A68_INT  ZZBBCTR_up;
A68_VC  AACBCTR;  /* OPERATORS - trim index */
A68_VC  BACBCTR;  /* YIELD */
A_PROC_ENTRY(putchars);
 /* line 313: */
{ 
ZZBBCTR_up = S.upb;
 /* line 314: */
A_CALLPROC(NL(DYBBCTR_outprep),((ZZBBCTR_up+1), ZZBBCTR_up),((ZZBBCTR_up+1), ZZBBCTR_up,(NL(DYBBCTR_outprep)).nonlocals));
 /* line 315: */
BACBCTR = A_VTRIM(AACBCTR,((*NTBBCTR_streambuffer)),A_VTSCRIPT(&(AACBCTR.upb),((*NTBBCTR_streambuffer)).upb,((*OTBBCTR_strptr)+1),((*OTBBCTR_strptr)+ZZBBCTR_up))) ;
A_VASSIGN2(S,BACBCTR,A68_CHAR );
 /* line 316: */
 /* line 317: */
(*OTBBCTR_strptr)+=ZZBBCTR_up;
} 
A_PROC_EXIT(putchars);
return;
} 
#undef NL

A_STATIC A68_VOID  EACBCTR_puttruncatedchars(A68_VC  S, void *NonLocals)
#define NL(x) (((FACBCTR_puttruncatedchars *)NonLocals)->x)
{ 
A68_INT  GACBCTR_up;
A68_VC  HACBCTR;  /* OPERATORS - trim index */
A68_VC  IACBCTR;  /* OPERATORS - trim index */
A68_VC  JACBCTR;  /* YIELD */
A68_VC  KACBCTR;  /* OPERATORS - assign op */
A_PROC_ENTRY(puttruncatedchars);
 /* line 320: */
{ 
GACBCTR_up = KMAAOSF_truncate(' ', S);
 /* line 321: */
A_CALLPROC(NL(DYBBCTR_outprep),((GACBCTR_up+1), GACBCTR_up),((GACBCTR_up+1), GACBCTR_up,(NL(DYBBCTR_outprep)).nonlocals));
 /* line 322: */
JACBCTR = A_VTRIM(HACBCTR,((*NTBBCTR_streambuffer)),A_VTSCRIPT(&(HACBCTR.upb),((*NTBBCTR_streambuffer)).upb,((*OTBBCTR_strptr)+1),((*OTBBCTR_strptr)+GACBCTR_up))) ;
KACBCTR = A_VTRIM(IACBCTR,(S),A_VTSCRIPT(&(IACBCTR.upb),(S).upb,1,GACBCTR_up)) ;
A_VASSIGN2(KACBCTR,JACBCTR,A68_CHAR );
 /* line 323: */
 /* line 324: */
(*OTBBCTR_strptr)+=GACBCTR_up;
} 
A_PROC_EXIT(puttruncatedchars);
return;
} 
#undef NL

A_STATIC A68_VOID  TACBCTR_generator(A68_BOOL  RACBCTR_anonymous, A68_279  *ReturnedValue, void *NonLocals)
#define NL(x) (((UACBCTR_generator *)NonLocals)->x)
{ 
A68_279  VACBCTR;  /* clause result */
A68_279  WACBCTR;  /* OPERATORS - dynamic generator */
{ 
WACBCTR.dim[0].upb = (NL(QACBCTR_upbstreams)+NL(QACBCTR_upbstreams)) ;
WACBCTR.dim[0].lwb = 0 ;
A_1INITSTRIDES(WACBCTR) ;
( RACBCTR_anonymous? A_R1LOC(A68_275 ,WACBCTR): A_R1HEAP(A68_275 ,WACBCTR) );
VACBCTR = WACBCTR;
} 
*ReturnedValue = (VACBCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  KECBCTR_generator(A68_BOOL  IECBCTR_anonymous, A68_186  *ReturnedValue, void *NonLocals)
#define NL(x) (((LECBCTR_generator *)NonLocals)->x)
{ 
A68_186  MECBCTR;  /* clause result */
A68_186  NECBCTR;  /* OPERATORS - dynamic generator */
{ 
NECBCTR.dim[0].upb = NL(HECBCTR_xbu).Decnos.upb ;
NECBCTR.dim[0].lwb = 1 ;
A_1INITSTRIDES(NECBCTR) ;
( IECBCTR_anonymous? A_R1LOC(A68_INT ,NECBCTR): A_R1HEAP(A68_INT ,NECBCTR) );
MECBCTR = NECBCTR;
} 
*ReturnedValue = (MECBCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  TICBCTR_generator(A68_BOOL  RICBCTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((UICBCTR_generator *)NonLocals)->x)
{ 
A68_VC  VICBCTR;  /* clause result */
A68_VC  WICBCTR;  /* OPERATORS - dynamic generator */
{ 
WICBCTR.upb = (*NL(QICBCTR_resultsize)) ;
( RICBCTR_anonymous? A_VLOC(A68_CHAR ,WICBCTR): A_VHEAP(A68_CHAR ,WICBCTR) );
VICBCTR = WICBCTR;
} 
*ReturnedValue = (VICBCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  PJCBCTR_generator(A68_BOOL  NJCBCTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((QJCBCTR_generator *)NonLocals)->x)
{ 
A68_VC  RJCBCTR;  /* clause result */
A68_VC  SJCBCTR;  /* OPERATORS - dynamic generator */
{ 
SJCBCTR.upb = NL(MJCBCTR_newresultsize) ;
( NJCBCTR_anonymous? A_VLOC(A68_CHAR ,SJCBCTR): A_VHEAP(A68_CHAR ,SJCBCTR) );
RJCBCTR = SJCBCTR;
} 
*ReturnedValue = (RJCBCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  TPCBCTR_generator(A68_BOOL  RPCBCTR_anonymous, A68_186  *ReturnedValue, void *NonLocals)
#define NL(x) (((UPCBCTR_generator *)NonLocals)->x)
{ 
A68_186  VPCBCTR;  /* clause result */
A68_186  WPCBCTR;  /* OPERATORS - dynamic generator */
{ 
WPCBCTR.dim[0].upb = A_CALLPROC(RGCBCTR_next,(),((RGCBCTR_next).nonlocals)) ;
WPCBCTR.dim[0].lwb = 1 ;
A_1INITSTRIDES(WPCBCTR) ;
( RPCBCTR_anonymous? A_R1LOC(A68_INT ,WPCBCTR): A_R1HEAP(A68_INT ,WPCBCTR) );
VPCBCTR = WPCBCTR;
} 
*ReturnedValue = (VPCBCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  HQCBCTR_generator(A68_BOOL  FQCBCTR_anonymous, A68_207  *ReturnedValue, void *NonLocals)
#define NL(x) (((IQCBCTR_generator *)NonLocals)->x)
{ 
A68_207  JQCBCTR;  /* clause result */
A68_207  KQCBCTR;  /* OPERATORS - dynamic generator */
{ 
KQCBCTR.dim[0].upb = A_CALLPROC(RGCBCTR_next,(),((RGCBCTR_next).nonlocals)) ;
KQCBCTR.dim[0].lwb = 1 ;
A_1INITSTRIDES(KQCBCTR) ;
( FQCBCTR_anonymous? A_R1LOC(A68_VC ,KQCBCTR): A_R1HEAP(A68_VC ,KQCBCTR) );
JQCBCTR = KQCBCTR;
} 
*ReturnedValue = (JQCBCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  GSBBCTR_generator(A68_BOOL  FSBBCTR_anonymous, A68_276  *ReturnedValue)
{ 
A68_276  HSBBCTR;  /* clause result */
A68_276  ISBBCTR;  /* OPERATORS - dynamic generator */
{ 
ISBBCTR.upb = 0 ;
( FSBBCTR_anonymous? A_VLOC(A68_VC ,ISBBCTR): A_VHEAP(A68_VC ,ISBBCTR) );
HSBBCTR = ISBBCTR;
} 
*ReturnedValue = (HSBBCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  XSBBCTR_generator(A68_BOOL  WSBBCTR_anonymous, A68_276  *ReturnedValue)
{ 
A68_276  YSBBCTR;  /* clause result */
A68_276  ZSBBCTR;  /* OPERATORS - dynamic generator */
{ 
ZSBBCTR.upb = 1 ;
( WSBBCTR_anonymous? A_VLOC(A68_VC ,ZSBBCTR): A_VHEAP(A68_VC ,ZSBBCTR) );
YSBBCTR = ZSBBCTR;
} 
*ReturnedValue = (YSBBCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  TTBBCTR_extendcurrent(void)
{ 
A68_INT  UTBBCTR;  /* clause result */
A68_INT  VTBBCTR_size;
A68_INT  WTBBCTR_upbbuffers;
A68_277  YTBBCTR_generator;   /* proc value of non-global proc */
A68_276  DUBBCTR;  /* avoid structure result */
A68_276  EUBBCTR_new;
A68_276  FUBBCTR;  /* OPERATORS - trim index */
A68_276  GUBBCTR;  /* YIELD */
A68_104  IUBBCTR_generator;   /* proc value of non-global proc */
A68_INT  NUBBCTR;  /* YIELD */
A68_VC  OUBBCTR;  /* avoid structure result */
A68_VC * PUBBCTR;  /* YIELD */
A68_276  QUBBCTR;  /* clause result */
A_PROC_ENTRY(extendcurrent);
{ 
if ( ((*PTBBCTR_currentbuffer)==0) )
{ 
UTBBCTR = 1000;
} 
else
{ 
UTBBCTR = 10000;
} 
VTBBCTR_size = UTBBCTR;
 /* line 101: */
 /* line 102: */
{ 
WTBBCTR_upbbuffers = (*QTBBCTR_buffers).upb;
 /* line 103: */
A_CLOSURE( YTBBCTR_generator, ZTBBCTR_generator, AUBBCTR_generator );
(( AUBBCTR_generator * ) ( YTBBCTR_generator.nonlocals )) -> WTBBCTR_upbbuffers = WTBBCTR_upbbuffers;
A_CALLPROC(YTBBCTR_generator,(A68_FALSE, &DUBBCTR),(A68_FALSE, &DUBBCTR,(YTBBCTR_generator).nonlocals));
EUBBCTR_new = DUBBCTR;
 /* line 104: */
GUBBCTR = A_VTRIM(FUBBCTR,(EUBBCTR_new),A_VTSCRIPT(&(FUBBCTR.upb),(EUBBCTR_new).upb,1,WTBBCTR_upbbuffers)) ;
A_VASSIGN2((*QTBBCTR_buffers),GUBBCTR,A68_VC );
 /* line 105: */
 /* line 106: */
 /* line 107: */
A_CLOSURE( IUBBCTR_generator, JUBBCTR_generator, KUBBCTR_generator );
(( KUBBCTR_generator * ) ( IUBBCTR_generator.nonlocals )) -> VTBBCTR_size = VTBBCTR_size;
NUBBCTR = (*PTBBCTR_currentbuffer) = (WTBBCTR_upbbuffers+1) ;
A_CALLPROC(IUBBCTR_generator,(A68_FALSE, &OUBBCTR),(A68_FALSE, &OUBBCTR,(IUBBCTR_generator).nonlocals));
PUBBCTR = (&A_VINDEX(EUBBCTR_new,NUBBCTR)) ;
(*NTBBCTR_streambuffer) = (*PUBBCTR) = OUBBCTR;
 /* line 108: */
(*OTBBCTR_strptr) = 0;
 /* line 109: */
 /* line 110: */
 /* line 111: */
QUBBCTR = EUBBCTR_new;
} 
(*QTBBCTR_buffers) = QUBBCTR;
} 
A_PROC_EXIT(extendcurrent);
return;
} 
#undef NL

A_STATIC A68_VOID  QVBBCTR_generator(A68_BOOL  PVBBCTR_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  RVBBCTR;  /* clause result */
A68_VC  SVBBCTR;  /* OPERATORS - dynamic generator */
{ 
SVBBCTR.upb = 0 ;
( PVBBCTR_anonymous? A_VLOC(A68_CHAR ,SVBBCTR): A_VHEAP(A68_CHAR ,SVBBCTR) );
RVBBCTR = SVBBCTR;
} 
*ReturnedValue = (RVBBCTR);
return;
} 
#undef NL

A_STATIC A68_BOOL  XVBBCTR_input(A68_VC  Line, A68_INT * Size)
{ 
A68_60  YVBBCTR;  /* avoid structure result */
A68_60  ZVBBCTR_read_status;
A68_BOOL  AWBBCTR;  /* optbool result */
A68_BOOL  BWBBCTR;  /* clause result */
A68_BOOL  CWBBCTR;  /* clause result */
A_PROC_ENTRY(input);
 /* line 159: */
 /* line 160: */
{ 
EXBAOSF_read_line( LVBBCTR_inputfile, Line, Size, RIBAOSF_ignore_msg, &YVBBCTR );
ZVBBCTR_read_status = YVBBCTR;
 /* line 161: */
AWBBCTR = BVBAOSF_(ZVBBCTR_read_status, VUBAOSF_io_error);
if ( ! AWBBCTR )
{ /* line 162: */
AWBBCTR = BVBAOSF_(ZVBBCTR_read_status, SUBAOSF_io_eof);
}
 /* line 163: */
BWBBCTR = AWBBCTR;
if ( BWBBCTR )
{ 
 /* line 164: */
 /* line 165: */
CWBBCTR = A68_FALSE;
} 
else
{ 
QRIACTR_linenumber+=1;
 /* line 166: */
 /* line 167: */
 /* line 168: */
 /* line 169: */
if ( BVBAOSF_(ZVBBCTR_read_status, YUBAOSF_io_no_newline) )
{ 
 /* line 170: */
IXIACTR_error(253);
} 
 /* line 172: */
OVBBCTR_line_pending = A68_TRUE;
 /* line 175: */
 /* line 176: */
CWBBCTR = A68_TRUE;
} 
} 
A_PROC_EXIT(input);
return( CWBBCTR );
} 
#undef NL

A_STATIC A68_VOID  EWBBCTR_generator(A68_BOOL  DWBBCTR_anonymous, A68_182  *ReturnedValue)
{ 
A68_182  FWBBCTR;  /* clause result */
A68_182  GWBBCTR;  /* OPERATORS - dynamic generator */
{ 
GWBBCTR.dim[0].upb = 511 ;
GWBBCTR.dim[0].lwb = 0 ;
A_1INITSTRIDES(GWBBCTR) ;
( DWBBCTR_anonymous? A_R1LOC(A68_183 ,GWBBCTR): A_R1HEAP(A68_183 ,GWBBCTR) );
FWBBCTR = GWBBCTR;
} 
*ReturnedValue = (FWBBCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  VXBBCTR_output(A68_172  Op, A68_INT  Ll)
{ 
A68_223  DYBBCTR_outprep;   /* proc value of non-global proc */
A68_287  UYBBCTR_putints;   /* proc value of non-global proc */
A68_223  KZBBCTR_putint;   /* proc value of non-global proc */
A68_99  WZBBCTR_putchars;   /* proc value of non-global proc */
A68_99  DACBCTR_puttruncatedchars;   /* proc value of non-global proc */
A68_172  LACBCTR;  /* united object - for case conformity */
A68_156  MACBCTR_c;
A68_BOOL  NACBCTR;  /* clause result */
A68_288  OACBCTR;  /* collateral clause result */
A68_186  PACBCTR;  /* OPERATORS - istruct to row */
A68_INT  QACBCTR_upbstreams;
A68_289  SACBCTR_generator;   /* proc value of non-global proc */
A68_279  XACBCTR;  /* avoid structure result */
A68_279  YACBCTR_newstreams;
A68_275 * ZACBCTR_stream;
A68_279  ABCBCTR;  /* OPERATORS - trim index */
A68_279  BBCBCTR;  /* forall yield */
A68_INT  CBCBCTR;  /* forall loop counter */
A68_279  DBCBCTR;  /* OPERATORS - trim index */
A68_279  EBCBCTR;  /* YIELD */
A68_172  FBCBCTR;  /* united object - for case conformity */
A68_151  GBCBCTR_e;
A68_152  HBCBCTR_xop;
A68_290  IBCBCTR;  /* collateral clause result */
A68_186  JBCBCTR;  /* OPERATORS - istruct to row */
A68_156  KBCBCTR_c;
A68_288  LBCBCTR;  /* collateral clause result */
A68_186  MBCBCTR;  /* OPERATORS - istruct to row */
A68_INT  NBCBCTR;  /* YIELD */
A68_INT  OBCBCTR_fnval;
A68_288  PBCBCTR;  /* collateral clause result */
A68_186  QBCBCTR;  /* OPERATORS - istruct to row */
A68_INT  RBCBCTR_id;
A68_141  SBCBCTR_number;
A68_INT  TBCBCTR_type;
A68_INT  UBCBCTR_exp;
A68_CHAR * VBCBCTR_c;
A68_VC  WBCBCTR;  /* forall yield */
A68_INT  XBCBCTR;  /* forall loop counter */
A68_BOOL  YBCBCTR;  /* optbool result */
A68_VC  ZBCBCTR;  /* OPERATORS - trim index */
A68_VC  ACCBCTR;  /* OPERATORS - trim index */
A68_VC  BCCBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  CCCBCTR;  /* OPERATORS - trim index */
A68_VC  DCCBCTR;  /* OPERATORS - trim index */
A68_155  ECCBCTR_xw;
A68_148  FCCBCTR_idd;
A68_290  GCCBCTR;  /* collateral clause result */
A68_186  HCCBCTR;  /* OPERATORS - istruct to row */
A68_VC  ICCBCTR;  /* OPERATORS - istruct -> vector */
A68_108  JCCBCTR;  /* OPERATORS - istruct -> vector */
A68_143  KCCBCTR_chars;
A68_INT  LCCBCTR;  /* clause result */
A68_VC  MCCBCTR;  /* clause result */
A68_VC  NCCBCTR;  /* avoid structure result */
A68_VC  OCCBCTR_string;
A68_144  PCCBCTR_str;
A68_125 * QCCBCTR_rd;
A68_291  RCCBCTR;  /* collateral clause result */
A68_186  SCCBCTR;  /* OPERATORS - istruct to row */
A68_VC  TCCBCTR;  /* OPERATORS - istruct -> vector */
A68_108  UCCBCTR;  /* OPERATORS - istruct -> vector */
A68_147  VCCBCTR_nse;
A68_BOOL  WCCBCTR_b;
A68_139  XCCBCTR_generator;
A68_290  YCCBCTR;  /* collateral clause result */
A68_186  ZCCBCTR;  /* OPERATORS - istruct to row */
A68_142  ADCBCTR_al;
A68_140  BDCBCTR_c;
A68_290  CDCBCTR;  /* collateral clause result */
A68_186  DDCBCTR;  /* OPERATORS - istruct to row */
A68_149  EDCBCTR_xl;
A68_126 * FDCBCTR_rl;
A68_VC  GDCBCTR;  /* OPERATORS - istruct -> vector */
A68_108  HDCBCTR;  /* OPERATORS - istruct -> vector */
A68_290  IDCBCTR;  /* collateral clause result */
A68_186  JDCBCTR;  /* OPERATORS - istruct to row */
A68_126 * KDCBCTR_lb;
A68_157  LDCBCTR_xs;
A68_173  MDCBCTR_mdes;
A68_249  NDCBCTR;  /* OPERATORS - vector -> row */
A68_164  ODCBCTR_xtd;
A68_163  PDCBCTR_xtm;
A68_290  QDCBCTR;  /* collateral clause result */
A68_186  RDCBCTR;  /* OPERATORS - istruct to row */
A68_VC  SDCBCTR;  /* OPERATORS - istruct -> vector */
A68_108  TDCBCTR;  /* OPERATORS - istruct -> vector */
A68_VC  UDCBCTR;  /* OPERATORS - istruct -> vector */
A68_106  VDCBCTR;  /* OPERATORS - istruct -> vector */
A68_VC  WDCBCTR;  /* OPERATORS - istruct -> vector */
A68_106  XDCBCTR;  /* OPERATORS - istruct -> vector */
A68_VC  YDCBCTR;  /* OPERATORS - istruct -> vector */
A68_106  ZDCBCTR;  /* OPERATORS - istruct -> vector */
A68_129 * AECBCTR_spec;
A68_128  BECBCTR;  /* forall yield */
A68_INT  CECBCTR;  /* forall loop counter */
A68_VC  DECBCTR;  /* OPERATORS - istruct -> vector */
A68_106  EECBCTR;  /* OPERATORS - istruct -> vector */
A68_161  FECBCTR_open;
A68_158  GECBCTR_xm;
A68_170  HECBCTR_xbu;
A68_292  JECBCTR_generator;   /* proc value of non-global proc */
A68_186  OECBCTR;  /* avoid structure result */
A68_93  PECBCTR;  /* YIELD */
A68_186  QECBCTR;  /* OPERATORS - vector -> row */
A68_186  RECBCTR;  /* OPERATORS - assign op */
A68_130  SECBCTR_s;
A_PROC_ENTRY(output);
 /* line 239: */
 /* line 240: */
 /* line 242: */
if ( (WRIACTR_greatestseverity<=2) )
{ 
 /* line 255: */
A_CLOSURE( DYBBCTR_outprep, EYBBCTR_outprep, FYBBCTR_outprep );
(( FYBBCTR_outprep * ) ( DYBBCTR_outprep.nonlocals )) -> Ll = Ll;
 /* line 296: */
A_CLOSURE( UYBBCTR_putints, VYBBCTR_putints, WYBBCTR_putints );
(( WYBBCTR_putints * ) ( UYBBCTR_putints.nonlocals )) -> DYBBCTR_outprep = DYBBCTR_outprep;
 /* line 305: */
A_CLOSURE( KZBBCTR_putint, LZBBCTR_putint, MZBBCTR_putint );
(( MZBBCTR_putint * ) ( KZBBCTR_putint.nonlocals )) -> DYBBCTR_outprep = DYBBCTR_outprep;
 /* line 312: */
A_CLOSURE( WZBBCTR_putchars, XZBBCTR_putchars, YZBBCTR_putchars );
(( YZBBCTR_putchars * ) ( WZBBCTR_putchars.nonlocals )) -> DYBBCTR_outprep = DYBBCTR_outprep;
 /* line 319: */
A_CLOSURE( DACBCTR_puttruncatedchars, EACBCTR_puttruncatedchars, FACBCTR_puttruncatedchars );
(( FACBCTR_puttruncatedchars * ) ( DACBCTR_puttruncatedchars.nonlocals )) -> DYBBCTR_outprep = DYBBCTR_outprep;
 /* line 328: */
 /* line 329: */
 /* line 330: */
if ( OVBBCTR_line_pending )
{ 
 /* line 331: */
LACBCTR = Op ;
switch ( LACBCTR.mode )
{ 
case 17: /* STRUCT(INT,INT,BITS,INT)  */
MACBCTR_c = (LACBCTR.data.mode17);
 /* line 332: */
NACBCTR = (MACBCTR_c.Fn!=25);
break;
default: 
 /* line 333: */
 /* line 334: */
 /* line 336: */
NACBCTR = A68_TRUE;
break;
} 
if ( NACBCTR )
{ 
 /* line 337: */
OACBCTR.data[0] = QRIACTR_linenumber;
OACBCTR.data[1] = MVBBCTR_line_start;
 /* line 338: */
OACBCTR.data[2] = NVBBCTR_line_length;
A_CALLPROC(UYBBCTR_putints,(EVBBCTR_linetype, A_HIS1ARR(PACBCTR,OACBCTR,A68_INT ,3)),(EVBBCTR_linetype, A_HIS1ARR(PACBCTR,OACBCTR,A68_INT ,3),(UYBBCTR_putints).nonlocals));
 /* line 339: */
 /* line 340: */
 /* line 341: */
OVBBCTR_line_pending = A68_FALSE;
} 
} 
 /* line 343: */
 /* line 344: */
if ( OXBBCTR_upped )
{ 
A_CALLPROC(DYBBCTR_outprep,(1, 2),(1, 2,(DYBBCTR_outprep).nonlocals));
 /* line 345: */
 /* line 346: */
OXBBCTR_upped = A68_FALSE;
} 
 /* line 348: */
(*RTBBCTR_curstradd) = QSBBCTR_current;
 /* line 350: */
for ( ;; )
{ 
 /* line 351: */
if ( !((Ll>MSBBCTR_streams.dim[0].upb)) ) break;
QACBCTR_upbstreams = MSBBCTR_streams.dim[0].upb;
 /* line 352: */
A_CLOSURE( SACBCTR_generator, TACBCTR_generator, UACBCTR_generator );
(( UACBCTR_generator * ) ( SACBCTR_generator.nonlocals )) -> QACBCTR_upbstreams = QACBCTR_upbstreams;
A_CALLPROC(SACBCTR_generator,(A68_FALSE, &XACBCTR),(A68_FALSE, &XACBCTR,(SACBCTR_generator).nonlocals));
YACBCTR_newstreams = XACBCTR;
 /* line 353: */
 /* line 354: */
BBCBCTR = A_R1TRIM(ABCBCTR,(YACBCTR_newstreams),A_RTSCRIPT(&(ABCBCTR.dim[0]),&((YACBCTR_newstreams).dim[0]),(QACBCTR_upbstreams+1),(YACBCTR_newstreams).dim[0].upb,1)) ;
CBCBCTR = BBCBCTR.dim[0].upb - BBCBCTR.dim[0].lwb;
ZACBCTR_stream = BBCBCTR.data;
for (;CBCBCTR-- >= 0;
(ZACBCTR_stream += BBCBCTR.dim[0].stride
) )
{
 /* line 355: */
(*ZACBCTR_stream) = KSBBCTR_unsetstream;
}
 /* line 356: */
EBCBCTR = A_R1TRIM(DBCBCTR,(YACBCTR_newstreams),A_RTSCRIPT(&(DBCBCTR.dim[0]),&((YACBCTR_newstreams).dim[0]),(YACBCTR_newstreams).dim[0].lwb,QACBCTR_upbstreams,0)) ;
A_R1ASSIGN2(MSBBCTR_streams,EBCBCTR,A68_275 );
 /* line 357: */
 /* line 358: */
MSBBCTR_streams = YACBCTR_newstreams;
}
 /* line 359: */
QSBBCTR_current = (*(RTBBCTR_curstradd = (&A_R1INDEX(MSBBCTR_streams,Ll))));
 /* line 361: */
 /* line 362: */
FBCBCTR = Op ;
switch ( FBCBCTR.mode )
{ 
case 1: /* STRUCT(BOOL)  */
GBCBCTR_e = (FBCBCTR.data.mode1);
 /* line 363: */
 /* line 364: */
if ( !(OXBBCTR_upped = GBCBCTR_e.Up) )
{ 
 /* line 365: */
 /* line 366: */
A_CALLPROC(DYBBCTR_outprep,(1, 1),(1, 1,(DYBBCTR_outprep).nonlocals));
} 
break;
case 14: /* STRUCT(INT,INT,INT)  */
HBCBCTR_xop = (FBCBCTR.data.mode14);
 /* line 367: */
 /* line 368: */
if ( (HBCBCTR_xop.Fn==LGAACTR_voidfn) )
{ 
 /* line 369: */
A_CALLPROC(DYBBCTR_outprep,(1, 202),(1, 202,(DYBBCTR_outprep).nonlocals));
} 
else
{ 
IBCBCTR.data[0] = HBCBCTR_xop.M;
IBCBCTR.data[1] = HBCBCTR_xop.Param;
 /* line 370: */
 /* line 371: */
A_CALLPROC(UYBBCTR_putints,((128+HBCBCTR_xop.Fn), A_HIS1ARR(JBCBCTR,IBCBCTR,A68_INT ,2)),((128+HBCBCTR_xop.Fn), A_HIS1ARR(JBCBCTR,IBCBCTR,A68_INT ,2),(UYBBCTR_putints).nonlocals));
} 
break;
case 17: /* STRUCT(INT,INT,BITS,INT)  */
KBCBCTR_c = (FBCBCTR.data.mode17);
 /* line 372: */
{ 
 /* line 373: */
if ( (KBCBCTR_c.Fn==25) )
{ 
A_CALLPROC(DYBBCTR_outprep,(1, (48+((A68_INT )KBCBCTR_c.Props/2048))),(1, (48+((A68_INT )KBCBCTR_c.Props/2048)),(DYBBCTR_outprep).nonlocals));
 /* line 374: */
 /* line 375: */
 /* line 376: */
if ( OVBBCTR_line_pending )
{ 
 /* line 377: */
LBCBCTR.data[0] = QRIACTR_linenumber;
LBCBCTR.data[1] = MVBBCTR_line_start;
 /* line 378: */
LBCBCTR.data[2] = NVBBCTR_line_length;
A_CALLPROC(UYBBCTR_putints,(EVBBCTR_linetype, A_HIS1ARR(MBCBCTR,LBCBCTR,A68_INT ,3)),(EVBBCTR_linetype, A_HIS1ARR(MBCBCTR,LBCBCTR,A68_INT ,3),(UYBBCTR_putints).nonlocals));
 /* line 379: */
 /* line 380: */
 /* line 381: */
 /* line 382: */
OVBBCTR_line_pending = A68_FALSE;
} 
} 
else
{ 
NBCBCTR = (KBCBCTR_c.Fn+1) ;
OBCBCTR_fnval = (A68_INT)(unsigned char)A_VINDEX(NXBBCTR_contval,NBCBCTR);
 /* line 383: */
PBCBCTR.data[0] = KBCBCTR_c.M;
PBCBCTR.data[1] = (A68_INT )KBCBCTR_c.Props;
PBCBCTR.data[2] = KBCBCTR_c.Param;
 /* line 384: */
 /* line 385: */
 /* line 386: */
A_CALLPROC(UYBBCTR_putints,(OBCBCTR_fnval, A_HIS1ARR(QBCBCTR,PBCBCTR,A68_INT ,3)),(OBCBCTR_fnval, A_HIS1ARR(QBCBCTR,PBCBCTR,A68_INT ,3),(UYBBCTR_putints).nonlocals));
} 
} 
break;
case 3: /* INT */
RBCBCTR_id = (FBCBCTR.data.mode3);
 /* line 387: */
 /* line 388: */
if ( (RBCBCTR_id<0) )
{ 
 /* line 389: */
A_CALLPROC(KZBBCTR_putint,(78, RBCBCTR_id),(78, RBCBCTR_id,(KZBBCTR_putint).nonlocals));
} 
else
{ 
 /* line 390: */
 /* line 391: */
A_CALLPROC(KZBBCTR_putint,(80, RBCBCTR_id),(80, RBCBCTR_id,(KZBBCTR_putint).nonlocals));
} 
break;
case 9: /* STRUCT(INT,REF MODE26)  */
SBCBCTR_number = (FBCBCTR.data.mode9);
 /* line 392: */
 /* line 393: */
{ 
TBCBCTR_type = (SBCBCTR_number.Mode+WUBBCTR_numberbase);
 /* line 394: */
A_CALLPROC(DYBBCTR_outprep,(1, TBCBCTR_type),(1, TBCBCTR_type,(DYBBCTR_outprep).nonlocals));
 /* line 399: */
UBCBCTR_exp = (-1);
 /* line 400: */
WBCBCTR = SBCBCTR_number.Nu ;
XBCBCTR = WBCBCTR.upb -1;
VBCBCTR_c = WBCBCTR.data;
for (;XBCBCTR-- >= 0;
(VBCBCTR_c++
) )
{
 /* line 401: */
if ( !(((UBCBCTR_exp-=1)<0)) ) break;
YBCBCTR = ((*VBCBCTR_c)=='+');
if ( ! YBCBCTR )
{YBCBCTR = ((*VBCBCTR_c)=='-');
}
if ( YBCBCTR )
{ 
UBCBCTR_exp = (-UBCBCTR_exp);
} 
}
 /* line 402: */
 /* line 403: */
 /* line 404: */
if ( (UBCBCTR_exp<0) )
{ 
 /* line 405: */
 /* line 406: */
A_CALLPROC(WZBBCTR_putchars,(SBCBCTR_number.Nu),(SBCBCTR_number.Nu,(WZBBCTR_putchars).nonlocals));
} 
else
{ 
 /* line 407: */
 /* line 408: */
 /* line 409: */
 /* line 410: */
ZBCBCTR = SBCBCTR_number.Nu ;
CCCBCTR = SBCBCTR_number.Nu ;
A_CALLPROC(WZBBCTR_putchars,(A_VC_PLUS(A_VC_PLUS(A_VTRIM(ACCBCTR,(ZBCBCTR),A_VTSCRIPT(&(ACCBCTR.upb),(ZBCBCTR).upb,1,(UBCBCTR_exp-1))),A_HVEC(BCCBCTR,'e',A68_CHAR )),A_VTRIM(DCCBCTR,(CCCBCTR),A_VTSCRIPT(&(DCCBCTR.upb),(CCCBCTR).upb,UBCBCTR_exp,(CCCBCTR).upb)))),(A_VC_PLUS(A_VC_PLUS(A_VTRIM(ACCBCTR,(ZBCBCTR),A_VTSCRIPT(&(ACCBCTR.upb),(ZBCBCTR).upb,1,(UBCBCTR_exp-1))),A_HVEC(BCCBCTR,'e',A68_CHAR )),A_VTRIM(DCCBCTR,(CCCBCTR),A_VTSCRIPT(&(DCCBCTR.upb),(CCCBCTR).upb,UBCBCTR_exp,(CCCBCTR).upb))),(WZBBCTR_putchars).nonlocals));
} 
} 
break;
case 16: /* STRUCT(INT)  */
ECCBCTR_xw = (FBCBCTR.data.mode16);
 /* line 411: */
 /* line 412: */
if ( (ECCBCTR_xw.W<=3) )
{ 
 /* line 413: */
 /* line 414: */
A_CALLPROC(DYBBCTR_outprep,(1, (208+ECCBCTR_xw.W)),(1, (208+ECCBCTR_xw.W),(DYBBCTR_outprep).nonlocals));
} 
break;
case 12: /* STRUCT(INT,REF MODE124)  */
FCCBCTR_idd = (FBCBCTR.data.mode12);
 /* line 415: */
 /* line 417: */
{ 
 /* line 418: */
GCCBCTR.data[0] = (*(&(FCCBCTR_idd.Iddec->Mode)));
 /* line 419: */
GCCBCTR.data[1] = (*(&(FCCBCTR_idd.Iddec->Decno)));
A_CALLPROC(UYBBCTR_putints,((AVBBCTR_iddecbase+FCCBCTR_idd.Type), A_HIS1ARR(HCCBCTR,GCCBCTR,A68_INT ,2)),((AVBBCTR_iddecbase+FCCBCTR_idd.Type), A_HIS1ARR(HCCBCTR,GCCBCTR,A68_INT ,2),(UYBBCTR_putints).nonlocals));
 /* line 420: */
 /* line 421: */
 /* line 422: */
JCCBCTR = (*(&(FCCBCTR_idd.Iddec->Name))) ;
A_CALLPROC(DACBCTR_puttruncatedchars,(A_HISVEC(ICCBCTR,JCCBCTR,32,A68_CHAR )),(A_HISVEC(ICCBCTR,JCCBCTR,32,A68_CHAR ),(DACBCTR_puttruncatedchars).nonlocals));
} 
break;
case 35: /* STRUCT(INT,INT,REF MODE26)  */
KCCBCTR_chars = (FBCBCTR.data.mode35);
 /* line 423: */
 /* line 425: */
{ 
 /* line 426: */
 /* line 427: */
 /* line 428: */
if ( (KCCBCTR_chars.Nochars<0) )
{ 
 /* line 429: */
LCCBCTR = GVBBCTR_notlastxcharstype;
} 
else
{ 
 /* line 430: */
LCCBCTR = HVBBCTR_lastxcharstype;
} 
A_CALLPROC(DYBBCTR_outprep,(1, LCCBCTR),(1, LCCBCTR,(DYBBCTR_outprep).nonlocals));
 /* line 431: */
 /* line 432: */
 /* line 433: */
if ( (KCCBCTR_chars.Base!=0) )
{ 
 /* line 434: */
 /* line 435: */
PLJACTR_convertradixstring( KCCBCTR_chars.Chars, KCCBCTR_chars.Base, &NCCBCTR );
MCCBCTR = NCCBCTR;
} 
else
{ 
MCCBCTR = KCCBCTR_chars.Chars;
} 
OCCBCTR_string = MCCBCTR;
 /* line 436: */
 /* line 437: */
 /* line 438: */
A_CALLPROC(WZBBCTR_putchars,(OCCBCTR_string),(OCCBCTR_string,(WZBBCTR_putchars).nonlocals));
} 
break;
case 7: /* STRUCT(INT)  */
PCCBCTR_str = (FBCBCTR.data.mode7);
 /* line 439: */
 /* line 440: */
if ( (PCCBCTR_str.Strmode==8) )
{ 
 /* line 441: */
A_CALLPROC(DYBBCTR_outprep,(1, 76),(1, 76,(DYBBCTR_outprep).nonlocals));
} 
else
{ 
 /* line 442: */
 /* line 444: */
A_CALLPROC(KZBBCTR_putint,(77, PCCBCTR_str.Strmode),(77, PCCBCTR_str.Strmode,(KZBBCTR_putint).nonlocals));
} 
break;
case 34: /* REF STRUCT(MODE108,BITS,INT,INT,INT,INT,REF MODE125)  */
QCCBCTR_rd = (FBCBCTR.data.mode34);
 /* line 445: */
 /* line 446: */
{ 
 /* line 447: */
 /* line 448: */
RCCBCTR.data[0] = (*(&(QCCBCTR_rd->Rdenno)));
 /* line 449: */
RCCBCTR.data[1] = (*(&(QCCBCTR_rd->Mode)));
 /* line 450: */
RCCBCTR.data[2] = (A68_INT )(*(&(QCCBCTR_rd->Props)));
 /* line 451: */
 /* line 452: */
RCCBCTR.data[3] = PLAAOSF_max((*(&(QCCBCTR_rd->Maxname))), HAAACTR_minidno);
A_CALLPROC(UYBBCTR_putints,(197, A_HIS1ARR(SCCBCTR,RCCBCTR,A68_INT ,4)),(197, A_HIS1ARR(SCCBCTR,RCCBCTR,A68_INT ,4),(UYBBCTR_putints).nonlocals));
 /* line 453: */
 /* line 454: */
 /* line 456: */
UCCBCTR = (*(&(QCCBCTR_rd->Name))) ;
A_CALLPROC(DACBCTR_puttruncatedchars,(A_HISVEC(TCCBCTR,UCCBCTR,32,A68_CHAR )),(A_HISVEC(TCCBCTR,UCCBCTR,32,A68_CHAR ),(DACBCTR_puttruncatedchars).nonlocals));
} 
break;
case 5: /* STRUCT(INT)  */
VCCBCTR_nse = (FBCBCTR.data.mode5);
 /* line 457: */
 /* line 458: */
A_CALLPROC(DYBBCTR_outprep,(1, (66+VCCBCTR_nse.Nse)),(1, (66+VCCBCTR_nse.Nse),(DYBBCTR_outprep).nonlocals));
break;
case 2: /* BOOL */
WCCBCTR_b = (FBCBCTR.data.mode2);
 /* line 459: */
 /* line 460: */
A_CALLPROC(DYBBCTR_outprep,(1, (65+(WCCBCTR_b))),(1, (65+(WCCBCTR_b)),(DYBBCTR_outprep).nonlocals));
break;
case 6: /* STRUCT(INT,BOOL)  */
XCCBCTR_generator = (FBCBCTR.data.mode6);
 /* line 461: */
 /* line 464: */
 /* line 465: */
YCCBCTR.data[0] = XCCBCTR_generator.Mode;
 /* line 466: */
YCCBCTR.data[1] = (XCCBCTR_generator.Loc);
 /* line 467: */
 /* line 468: */
A_CALLPROC(UYBBCTR_putints,((128+PGAACTR_generatorfn), A_HIS1ARR(ZCCBCTR,YCCBCTR,A68_INT ,2)),((128+PGAACTR_generatorfn), A_HIS1ARR(ZCCBCTR,YCCBCTR,A68_INT ,2),(UYBBCTR_putints).nonlocals));
break;
case 8: /* STRUCT(INT,INT,INT)  */
 /* line 469: */
 /* line 470: */
IXIACTR_error(808);
break;
case 10: /* STRUCT(INT)  */
ADCBCTR_al = (FBCBCTR.data.mode10);
 /* line 471: */
 /* line 472: */
A_CALLPROC(KZBBCTR_putint,(75, ADCBCTR_al.Almode),(75, ADCBCTR_al.Almode,(KZBBCTR_putint).nonlocals));
break;
case 11: /* STRUCT(INT,INT)  */
BDCBCTR_c = (FBCBCTR.data.mode11);
 /* line 474: */
CDCBCTR.data[0] = BDCBCTR_c.Mode;
CDCBCTR.data[1] = BDCBCTR_c.Nopars;
 /* line 475: */
A_CALLPROC(UYBBCTR_putints,(70, A_HIS1ARR(DDCBCTR,CDCBCTR,A68_INT ,2)),(70, A_HIS1ARR(DDCBCTR,CDCBCTR,A68_INT ,2),(UYBBCTR_putints).nonlocals));
break;
case 13: /* STRUCT(REF MODE126,BOOL)  */
EDCBCTR_xl = (FBCBCTR.data.mode13);
 /* line 476: */
 /* line 477: */
if ( EDCBCTR_xl.Notsetting )
{ 
FDCBCTR_rl = EDCBCTR_xl.Lab;
 /* line 478: */
 /* line 479: */
if ( ((*(&(FDCBCTR_rl->Status)))==0) )
{ 
A_CALLPROC(KZBBCTR_putint,(194, (*(&(FDCBCTR_rl->Labno)))),(194, (*(&(FDCBCTR_rl->Labno))),(KZBBCTR_putint).nonlocals));
 /* line 480: */
 /* line 481: */
HDCBCTR = (*(&(FDCBCTR_rl->Name))) ;
A_CALLPROC(DACBCTR_puttruncatedchars,(A_HISVEC(GDCBCTR,HDCBCTR,32,A68_CHAR )),(A_HISVEC(GDCBCTR,HDCBCTR,32,A68_CHAR ),(DACBCTR_puttruncatedchars).nonlocals));
} 
else
{ 
IDCBCTR.data[0] = (*(&(FDCBCTR_rl->Labno)));
IDCBCTR.data[1] = (*(&(FDCBCTR_rl->Status)));
 /* line 482: */
 /* line 483: */
A_CALLPROC(UYBBCTR_putints,(195, A_HIS1ARR(JDCBCTR,IDCBCTR,A68_INT ,2)),(195, A_HIS1ARR(JDCBCTR,IDCBCTR,A68_INT ,2),(UYBBCTR_putints).nonlocals));
} 
} 
else
{ 
 /* line 484: */
 /* line 485: */
A_CALLPROC(KZBBCTR_putint,(196, (*(&(EDCBCTR_xl.Lab->Labno)))),(196, (*(&(EDCBCTR_xl.Lab->Labno))),(KZBBCTR_putint).nonlocals));
} 
break;
case 4: /* REF STRUCT(MODE108,INT,INT,REF MODE126)  */
KDCBCTR_lb = (FBCBCTR.data.mode4);
 /* line 486: */
A_CALLPROC(KZBBCTR_putint,(74, (*(&(KDCBCTR_lb->Labno)))),(74, (*(&(KDCBCTR_lb->Labno))),(KZBBCTR_putint).nonlocals));
break;
case 18: /* STRUCT(INT,INT,INT,INT,INT,INT)  */
LDCBCTR_xs = (FBCBCTR.data.mode18);
 /* line 488: */
CSBBCTR_xsizes = LDCBCTR_xs;
break;
case 19: /* REF VECTOR [] MODE121 */
MDCBCTR_mdes = (FBCBCTR.data.mode19);
 /* line 489: */
{ 
A_CALLPROC(BJMACTR_initialiseuniquenameserver,(JRIACTR_uname_option),(JRIACTR_uname_option,(BJMACTR_initialiseuniquenameserver).nonlocals));
 /* line 490: */
 /* line 491: */
 /* line 493: */
BBOACTR_initialisemodetable(A_VECARR(MDCBCTR_mdes,NDCBCTR), (*(&((&CSBBCTR_xsizes)->Nomodes))));
} 
break;
case 26: /* STRUCT(BOOL,INT,REF MODE124)  */
ODCBCTR_xtd = (FBCBCTR.data.mode26);
 /* line 494: */
{ 
 /* line 495: */
if ( QXBBCTR_xtmodulepending )
{ 
QXBBCTR_xtmodulepending = A68_FALSE;
 /* line 496: */
 /* line 497: */
EBPACTR_adddecsmodule(PXBBCTR_lastxtmodule, ODCBCTR_xtd.Level);
} 
 /* line 498: */
 /* line 499: */
 /* line 500: */
JCPACTR_addexternalid((*ODCBCTR_xtd.Id));
} 
break;
case 25: /* STRUCT(INT,INT,MODE108,MODE127)  */
PDCBCTR_xtm = (FBCBCTR.data.mode25);
 /* line 501: */
 /* line 502: */
if ( (PDCBCTR_xtm.Type<0) )
{ 
PXBBCTR_lastxtmodule = PDCBCTR_xtm;
 /* line 503: */
 /* line 505: */
QXBBCTR_xtmodulepending = A68_TRUE;
} 
else
{ 
 /* line 506: */
QDCBCTR.data[0] = PDCBCTR_xtm.Moduleno;
 /* line 507: */
QDCBCTR.data[1] = PDCBCTR_xtm.Ym.Specs.upb;
A_CALLPROC(UYBBCTR_putints,(KVBBCTR_xtmoduletype, A_HIS1ARR(RDCBCTR,QDCBCTR,A68_INT ,2)),(KVBBCTR_xtmoduletype, A_HIS1ARR(RDCBCTR,QDCBCTR,A68_INT ,2),(UYBBCTR_putints).nonlocals));
 /* line 508: */
TDCBCTR = PDCBCTR_xtm.Name ;
A_CALLPROC(DACBCTR_puttruncatedchars,(A_HISVEC(SDCBCTR,TDCBCTR,32,A68_CHAR )),(A_HISVEC(SDCBCTR,TDCBCTR,32,A68_CHAR ),(DACBCTR_puttruncatedchars).nonlocals));
 /* line 509: */
VDCBCTR = PDCBCTR_xtm.Ym.Uname ;
A_CALLPROC(WZBBCTR_putchars,(A_HISVEC(UDCBCTR,VDCBCTR,7,A68_CHAR )),(A_HISVEC(UDCBCTR,VDCBCTR,7,A68_CHAR ),(WZBBCTR_putchars).nonlocals));
 /* line 510: */
XDCBCTR = PDCBCTR_xtm.Ym.Lname ;
A_CALLPROC(WZBBCTR_putchars,(A_HISVEC(WDCBCTR,XDCBCTR,7,A68_CHAR )),(A_HISVEC(WDCBCTR,XDCBCTR,7,A68_CHAR ),(WZBBCTR_putchars).nonlocals));
 /* line 511: */
ZDCBCTR = PDCBCTR_xtm.Ym.Gname ;
A_CALLPROC(WZBBCTR_putchars,(A_HISVEC(YDCBCTR,ZDCBCTR,7,A68_CHAR )),(A_HISVEC(YDCBCTR,ZDCBCTR,7,A68_CHAR ),(WZBBCTR_putchars).nonlocals));
 /* line 512: */
 /* line 513: */
BECBCTR = PDCBCTR_xtm.Ym.Specs ;
CECBCTR = BECBCTR.upb -1;
AECBCTR_spec = BECBCTR.data;
for (;CECBCTR-- >= 0;
(AECBCTR_spec++
) )
{
 /* line 514: */
EECBCTR = (*(&(AECBCTR_spec->Ys))) ;
A_CALLPROC(WZBBCTR_putchars,(A_HISVEC(DECBCTR,EECBCTR,7,A68_CHAR )),(A_HISVEC(DECBCTR,EECBCTR,7,A68_CHAR ),(WZBBCTR_putchars).nonlocals));
}
 /* line 515: */
 /* line 516: */
} 
break;
case 29: /* STRUCT(MODE108,MODE127,MODE108,MODE106,INT,INT)  */
 /* line 517: */
 /* line 518: */
IXIACTR_error(804);
break;
case 28: /* STRUCT(INT,REF MODE93,INT)  */
 /* line 519: */
 /* line 520: */
IXIACTR_error(805);
break;
case 23: /* STRUCT(MODE108,INT,INT,INT)  */
FECBCTR_open = (FBCBCTR.data.mode23);
 /* line 521: */
 /* line 522: */
SXBBCTR_syntheticmoduleno = FECBCTR_open.Moduleno;
break;
case 33: /* STRUCT(INT,INT,INT)  */
 /* line 523: */
 /* line 524: */
IXIACTR_error(806);
break;
case 27: /* STRUCT(MODE137,REF MODE166,REF MODE93,INT)  */
 /* line 525: */
 /* line 526: */
IXIACTR_error(807);
break;
case 21: /* STRUCT(MODE108,MODE136,MODE136,INT)  */
GECBCTR_xm = (FBCBCTR.data.mode21);
 /* line 527: */
 /* line 528: */
OZOACTR_initialisecurrentmodule(GECBCTR_xm);
break;
case 32: /* STRUCT(REF MODE93,REF MODE93)  */
HECBCTR_xbu = (FBCBCTR.data.mode32);
 /* line 529: */
A_CLOSURE( JECBCTR_generator, KECBCTR_generator, LECBCTR_generator );
(( LECBCTR_generator * ) ( JECBCTR_generator.nonlocals )) -> HECBCTR_xbu = HECBCTR_xbu;
 /* line 530: */
A_CALLPROC(JECBCTR_generator,(A68_FALSE, &OECBCTR),(A68_FALSE, &OECBCTR,(JECBCTR_generator).nonlocals));
PECBCTR = HECBCTR_xbu.Decnos ;
RECBCTR = A_VECARR(PECBCTR,QECBCTR) ;
A_R1ASSIGN2(RECBCTR,OECBCTR,A68_INT ) ;
DZOACTR_keptdecnos = OECBCTR;
break;
case 22: /* STRUCT(MODE108,INT,INT,INT,MODE134)  */
SECBCTR_s = (FBCBCTR.data.mode22);
 /* line 531: */
 /* line 532: */
 /* line 533: */
WAPACTR_initialisespec(SECBCTR_s);
break;
default: 
 /* line 534: */
 /* line 540: */
/*SKIP*/;
break;
} 
} 
else
{ 
/*SKIP*/;
} 
A_PROC_EXIT(output);
return;
} 
#undef NL

A_STATIC A68_VOID  FGCBCTR_positioncurrent(void)
{ 
A_PROC_ENTRY(positioncurrent);
 /* line 611: */
 /* line 613: */
if ( ((*OTBBCTR_strptr)<(*NTBBCTR_streambuffer).upb) )
{ 
 /* line 614: */
/*SKIP*/;
} 
else
{ 
 /* line 615: */
 /* line 616: */
if ( (((*PTBBCTR_currentbuffer)+=1)>(*QTBBCTR_buffers).upb) )
{ 
 /* line 617: */
 /* line 618: */
PXIACTR_assert(HGCBCTR, A68_FALSE);
} 
else
{ 
(*NTBBCTR_streambuffer) = (*(&A_VINDEX((*QTBBCTR_buffers),(*PTBBCTR_currentbuffer))));
 /* line 619: */
 /* line 620: */
(*OTBBCTR_strptr) = 0;
} 
} 
A_PROC_EXIT(positioncurrent);
return;
} 
#undef NL

A_STATIC A68_INT  IGCBCTR_nextbyte(void)
{ 
A68_INT  JGCBCTR;  /* clause result */
A68_INT  KGCBCTR;  /* YIELD */
A_PROC_ENTRY(nextbyte);
{ 
FGCBCTR_positioncurrent();
KGCBCTR = (*OTBBCTR_strptr)+=1 ;
JGCBCTR = (A68_INT)(unsigned char)(*(&A_VINDEX((*NTBBCTR_streambuffer),KGCBCTR)));
} 
A_PROC_EXIT(nextbyte);
return( JGCBCTR );
} 
#undef NL

A_STATIC A68_INT  LGCBCTR_nextint(void)
{ 
A68_VC  NGCBCTR;  /* OPERATORS - trim index */
A68_VC  OGCBCTR;  /* OPERATORS - trim index */
A68_VC  PGCBCTR;  /* OPERATORS - trim index */
A68_INT  MGCBCTR_nexti;
A68_INT  QGCBCTR;  /* clause result */
A_PROC_ENTRY(nextint);
{ 
FGCBCTR_positioncurrent();
 /* line 629: */
OGCBCTR = A_VTRIM(NGCBCTR,((*NTBBCTR_streambuffer)),A_VTSCRIPT(&(NGCBCTR.upb),((*NTBBCTR_streambuffer)).upb,((*OTBBCTR_strptr)+1),((*NTBBCTR_streambuffer)).upb)) ;
MGCBCTR_nexti = GOAAOSF_stringvalue(A_VTRIM(PGCBCTR,(OGCBCTR),A_VTSCRIPT(&(PGCBCTR.upb),(OGCBCTR).upb,1,4)));
 /* line 630: */
(*OTBBCTR_strptr)+=4;
 /* line 631: */
 /* line 632: */
QGCBCTR = MGCBCTR_nexti;
} 
A_PROC_EXIT(nextint);
return( QGCBCTR );
} 
#undef NL

A_STATIC A68_VOID  TGCBCTR_nextstring(A68_VC  *ReturnedValue)
{ 
A68_INT  UGCBCTR;  /* YIELD */
A68_VC  VGCBCTR;  /* OPERATORS - trim index */
A68_VC  WGCBCTR;  /* clause result */
A_PROC_ENTRY(nextstring);
{ 
FGCBCTR_positioncurrent();
 /* line 640: */
UGCBCTR = (*OTBBCTR_strptr)+=1 ;
DGCBCTR_upbstring = (A68_INT)(unsigned char)(*(&A_VINDEX((*NTBBCTR_streambuffer),UGCBCTR)));
 /* line 641: */
EGCBCTR_string = A_VTRIM(VGCBCTR,((*NTBBCTR_streambuffer)),A_VTSCRIPT(&(VGCBCTR.upb),((*NTBBCTR_streambuffer)).upb,((*OTBBCTR_strptr)+1),((*OTBBCTR_strptr)+DGCBCTR_upbstring)));
 /* line 642: */
(*OTBBCTR_strptr)+=DGCBCTR_upbstring;
 /* line 643: */
 /* line 644: */
WGCBCTR = EGCBCTR_string;
} 
A_PROC_EXIT(nextstring);
*ReturnedValue = (WGCBCTR);
return;
} 
#undef NL

A_STATIC A68_INT  BHCBCTR_nexttype(void)
{ 
A68_INT  CHCBCTR_t;
A68_INT  DHCBCTR;  /* YIELD */
A68_BOOL  EHCBCTR;  /* clause result */
A68_275 * FHCBCTR;  /* YIELD */
A68_INT  GHCBCTR;  /* YIELD */
A68_BOOL  JHCBCTR;  /* optbool result */
A68_VC  NHCBCTR;  /* avoid structure result */
A68_213  PHCBCTR;  /* OPERATORS - mode -> union mode */
A68_212  QHCBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_301  RHCBCTR;  /* collateral clause result */
A68_213  UHCBCTR;  /* OPERATORS - mode -> union mode */
A68_VC  VHCBCTR;  /* YIELD */
A68_VC  WHCBCTR;  /* avoid structure result */
A68_213  XHCBCTR;  /* OPERATORS - mode -> union mode */
A68_213  AICBCTR;  /* OPERATORS - mode -> union mode */
A68_VC  BICBCTR;  /* YIELD */
A68_213  CICBCTR;  /* OPERATORS - mode -> union mode */
A68_212  DICBCTR;  /* OPERATORS - istruct -> vector */
A68_VC  EICBCTR;  /* avoid structure result */
A68_VC  FICBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  GICBCTR;  /* avoid structure result */
A68_VC  HICBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  KICBCTR;  /* clause result */
A_PROC_ENTRY(nexttype);
{ 
 /* line 655: */
for ( ;; )
{ 
 /* line 656: */
FGCBCTR_positioncurrent();
 /* line 657: */
DHCBCTR = (*OTBBCTR_strptr)+=1 ;
CHCBCTR_t = (A68_INT)(unsigned char)(*(&A_VINDEX((*NTBBCTR_streambuffer),DHCBCTR)));
 /* line 658: */
 /* line 659: */
EHCBCTR = (CHCBCTR_t<RUBBCTR_separatorbase);
if ( !EHCBCTR ) break;
 /* line 660: */
if ( (CHCBCTR_t<3) )
{ 
FHCBCTR = (&A_R1INDEX(MSBBCTR_streams,HFCBCTR_level)) ;
(*FHCBCTR) = QSBBCTR_current;
 /* line 661: */
 /* line 663: */
GHCBCTR = HFCBCTR_level+=((3-CHCBCTR_t)-CHCBCTR_t) ;
QSBBCTR_current = (*(&A_R1INDEX(MSBBCTR_streams,GHCBCTR)));
} 
else
{ 
 /* line 664: */
 /* line 665: */
if ( (CHCBCTR_t==EVBBCTR_linetype) )
{ 
QRIACTR_linenumber = A_CALLPROC(RGCBCTR_next,(),((RGCBCTR_next).nonlocals));
 /* line 666: */
XGCBCTR_line_start = A_CALLPROC(RGCBCTR_next,(),((RGCBCTR_next).nonlocals));
 /* line 667: */
YGCBCTR_line_length = A_CALLPROC(RGCBCTR_next,(),((RGCBCTR_next).nonlocals));
 /* line 668: */
ZGCBCTR_statement_number = 0;
 /* line 670: */
 /* line 671: */
JHCBCTR = (ZCHACTR_tracelevel(IHCBCTR)!=0);
if ( JHCBCTR )
{ /* line 672: */
JHCBCTR = ((QRIACTR_linenumber/100)>AHCBCTR_hundred_counter);
}
if ( JHCBCTR )
{ 
AHCBCTR_hundred_counter = (QRIACTR_linenumber/100);
 /* line 673: */
 /* line 674: */
 /* line 675: */
ROAAOSF_whole( QRIACTR_linenumber, 0, &NHCBCTR );
BSIACTR_typelineonterminal(A_VC_PLUS(A_VC_PLUS(MHCBCTR,NHCBCTR),OHCBCTR));
} 
 /* line 677: */
 /* line 678: */
 /* line 680: */
if ( BQIACTR_lineoption )
{ 
 /* line 681: */
 /* line 682: */
 /* line 683: */
 /* line 685: */
VBMACTR_writecstream(A_HVEC(QHCBCTR,A_UNITE(PHCBCTR,mode4,4,EIAACTR_cnewline),A68_213 ), WQLACTR_codestream(EQLACTR_currentlevel()));
} 
else
{ 
 /* line 686: */
 /* line 687: */
VHCBCTR = THCBCTR ;
RHCBCTR.data[0] = A_UNITE(UHCBCTR,mode2,2,VHCBCTR);
 /* line 688: */
ROAAOSF_whole( QRIACTR_linenumber, 0, &WHCBCTR );
RHCBCTR.data[1] = A_UNITE(XHCBCTR,mode2,2,WHCBCTR);
 /* line 689: */
BICBCTR = ZHCBCTR ;
RHCBCTR.data[2] = A_UNITE(AICBCTR,mode2,2,BICBCTR);
RHCBCTR.data[3] = A_UNITE(CICBCTR,mode4,4,EIAACTR_cnewline);
 /* line 690: */
 /* line 691: */
VBMACTR_writecstream(A_HISVEC(DICBCTR,RHCBCTR,4,A68_213 ), WQLACTR_codestream(EQLACTR_currentlevel()));
} 
 /* line 693: */
 /* line 694: */
if ( GFCBCTR_printstream )
{ 
 /* line 695: */
 /* line 696: */
ROAAOSF_whole( QRIACTR_linenumber, 0, &EICBCTR );
A_CALLPROC(FSIACTR_list,(A_VC_PLUS(EICBCTR,A_HVEC(FICBCTR,':',A68_CHAR ))),(A_VC_PLUS(EICBCTR,A_HVEC(FICBCTR,':',A68_CHAR )),(FSIACTR_list).nonlocals));
} 
} 
else
{ 
 /* line 697: */
 /* line 698: */
if ( (CHCBCTR_t==FVBBCTR_maptype) )
{ 
ZGCBCTR_statement_number+=1;
 /* line 699: */
 /* line 700: */
if ( GFCBCTR_printstream )
{ 
 /* line 701: */
 /* line 702: */
ROAAOSF_whole( QRIACTR_linenumber, 0, &GICBCTR );
A_CALLPROC(FSIACTR_list,(A_VC_PLUS(GICBCTR,A_HVEC(HICBCTR,':',A68_CHAR ))),(A_VC_PLUS(GICBCTR,A_HVEC(HICBCTR,':',A68_CHAR )),(FSIACTR_list).nonlocals));
} 
} 
else
{ 
 /* line 703: */
 /* line 704: */
PXIACTR_assert(JICBCTR, A68_FALSE);
} 
} 
} 
}
 /* line 705: */
 /* line 706: */
KICBCTR = CHCBCTR_t;
} 
A_PROC_EXIT(nexttype);
return( KICBCTR );
} 
#undef NL

A_STATIC A68_VOID  NICBCTR_nextxchars(A68_INT  Suggestedsize, A68_INT  Insertion, A68_VC  *ReturnedValue)
{ 
A68_INT  OICBCTR_type;
A68_INT  PICBCTR_used;
A68_INT  QICBCTR_resultsize;
A68_104  SICBCTR_generator;   /* proc value of non-global proc */
A68_VC  YICBCTR;  /* avoid structure result */
A68_VC  XICBCTR_result;
A68_VC  ZICBCTR;  /* clause result */
A68_VC  AJCBCTR;  /* avoid structure result */
A68_VC  BJCBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  CJCBCTR;  /* avoid structure result */
A68_VC  DJCBCTR;  /* avoid structure result */
A68_VC  EJCBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  FJCBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  GJCBCTR;  /* avoid structure result */
A68_VC  HJCBCTR;  /* avoid structure result */
A68_VC  IJCBCTR;  /* avoid structure result */
A68_VC  JJCBCTR_string;
A68_INT  KJCBCTR_size;
A68_INT  LJCBCTR_newused;
A68_INT  MJCBCTR_newresultsize;
A68_104  OJCBCTR_generator;   /* proc value of non-global proc */
A68_VC  TJCBCTR;  /* avoid structure result */
A68_VC  UJCBCTR_newresult;
A68_VC  VJCBCTR;  /* OPERATORS - trim index */
A68_VC  WJCBCTR;  /* OPERATORS - trim index */
A68_VC  XJCBCTR;  /* YIELD */
A68_VC  YJCBCTR;  /* OPERATORS - assign op */
A68_VC  ZJCBCTR;  /* OPERATORS - trim index */
A68_VC  AKCBCTR;  /* YIELD */
A68_BOOL  BKCBCTR;  /* clause result */
A68_VC  EKCBCTR;  /* clause result */
A68_VC  FKCBCTR;  /* OPERATORS - trim index */
A_PROC_ENTRY(nextxchars);
 /* line 722: */
 /* line 723: */
{ 
OICBCTR_type = BHCBCTR_nexttype();
 /* line 724: */
PICBCTR_used = 0;
QICBCTR_resultsize = Suggestedsize;
 /* line 725: */
A_CLOSURE( SICBCTR_generator, TICBCTR_generator, UICBCTR_generator );
(( UICBCTR_generator * ) ( SICBCTR_generator.nonlocals )) -> QICBCTR_resultsize = (&QICBCTR_resultsize);
A_CALLPROC(SICBCTR_generator,(A68_FALSE, &YICBCTR),(A68_FALSE, &YICBCTR,(SICBCTR_generator).nonlocals));
XICBCTR_result = YICBCTR;
 /* line 727: */
for ( ;; )
{ 
 /* line 729: */
 /* line 730: */
switch ( Insertion )
{ 
case 1: 
 /* line 731: */
TGCBCTR_nextstring(  &AJCBCTR );
ZICBCTR = A_VC_PLUS(AJCBCTR,A_HVEC(BJCBCTR,HVBAOSF_newline_char,A68_CHAR ));
break;
case 2: 
 /* line 732: */
TGCBCTR_nextstring(  &CJCBCTR );
MPJACTR_replacecontrolchars( CJCBCTR, &DJCBCTR );
ZICBCTR = A_VC_PLUS(A_VC_PLUS(DJCBCTR,A_HVEC(EJCBCTR,'\\',A68_CHAR )),A_HVEC(FJCBCTR,HVBAOSF_newline_char,A68_CHAR ));
break;
case 3: 
 /* line 733: */
 /* line 734: */
TGCBCTR_nextstring(  &GJCBCTR );
MPJACTR_replacecontrolchars( GJCBCTR, &HJCBCTR );
ZICBCTR = HJCBCTR;
break;
default: 
TGCBCTR_nextstring(  &IJCBCTR );
ZICBCTR = IJCBCTR;
break;
} 
JJCBCTR_string = ZICBCTR;
 /* line 735: */
KJCBCTR_size = JJCBCTR_string.upb;
 /* line 736: */
LJCBCTR_newused = (PICBCTR_used+KJCBCTR_size);
 /* line 738: */
 /* line 739: */
 /* line 740: */
if ( (LJCBCTR_newused>QICBCTR_resultsize) )
{ 
MJCBCTR_newresultsize = (2*PLAAOSF_max(LJCBCTR_newused, QICBCTR_resultsize));
 /* line 741: */
A_CLOSURE( OJCBCTR_generator, PJCBCTR_generator, QJCBCTR_generator );
(( QJCBCTR_generator * ) ( OJCBCTR_generator.nonlocals )) -> MJCBCTR_newresultsize = MJCBCTR_newresultsize;
A_CALLPROC(OJCBCTR_generator,(A68_FALSE, &TJCBCTR),(A68_FALSE, &TJCBCTR,(OJCBCTR_generator).nonlocals));
UJCBCTR_newresult = TJCBCTR;
 /* line 742: */
XJCBCTR = A_VTRIM(VJCBCTR,(UJCBCTR_newresult),A_VTSCRIPT(&(VJCBCTR.upb),(UJCBCTR_newresult).upb,1,PICBCTR_used)) ;
YJCBCTR = A_VTRIM(WJCBCTR,(XICBCTR_result),A_VTSCRIPT(&(WJCBCTR.upb),(XICBCTR_result).upb,1,PICBCTR_used)) ;
A_VASSIGN2(YJCBCTR,XJCBCTR,A68_CHAR );
 /* line 743: */
XICBCTR_result = UJCBCTR_newresult;
 /* line 744: */
 /* line 745: */
QICBCTR_resultsize = MJCBCTR_newresultsize;
} 
 /* line 746: */
AKCBCTR = A_VTRIM(ZJCBCTR,(XICBCTR_result),A_VTSCRIPT(&(ZJCBCTR.upb),(XICBCTR_result).upb,(PICBCTR_used+1),LJCBCTR_newused)) ;
A_VASSIGN2(JJCBCTR_string,AKCBCTR,A68_CHAR );
 /* line 747: */
PICBCTR_used = LJCBCTR_newused;
 /* line 748: */
 /* line 749: */
 /* line 750: */
BKCBCTR = (OICBCTR_type==GVBBCTR_notlastxcharstype);
if ( !BKCBCTR ) break;
 /* line 751: */
OICBCTR_type = BHCBCTR_nexttype();
}
 /* line 752: */
PXIACTR_assert(DKCBCTR, (OICBCTR_type==HVBBCTR_lastxcharstype));
 /* line 753: */
 /* line 754: */
EKCBCTR = A_VTRIM(FKCBCTR,(XICBCTR_result),A_VTSCRIPT(&(FKCBCTR.upb),(XICBCTR_result).upb,1,PICBCTR_used));
} 
A_PROC_EXIT(nextxchars);
*ReturnedValue = (EKCBCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  GKCBCTR_nextstreamimperative(A68_187  *ReturnedValue)
{ 
A68_INT  HKCBCTR_type;
A68_VC  JKCBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  KKCBCTR;  /* avoid structure result */
A68_201  MKCBCTR_s;
A68_INT * NKCBCTR;  /* YIELD */
A68_INT * OKCBCTR;  /* YIELD */
A68_BITS * PKCBCTR;  /* YIELD */
A68_INT * QKCBCTR;  /* YIELD */
A68_187  RKCBCTR;  /* clause result */
A68_187  SKCBCTR;  /* OPERATORS - mode -> union mode */
A68_203  TKCBCTR_t;
A68_INT * UKCBCTR;  /* YIELD */
A68_BITS * VKCBCTR;  /* YIELD */
A68_187  WKCBCTR;  /* OPERATORS - mode -> union mode */
A68_201  XKCBCTR_semi;
A68_INT * YKCBCTR;  /* YIELD */
A68_BITS * ZKCBCTR;  /* YIELD */
A68_187  ALCBCTR;  /* OPERATORS - mode -> union mode */
A68_INT  BLCBCTR_loadtype;
A68_INT  CLCBCTR;  /* clause result */
A68_187  DLCBCTR;  /* OPERATORS - mode -> union mode */
A68_BOOL  ELCBCTR;  /* YIELD */
A68_187  FLCBCTR;  /* OPERATORS - mode -> union mode */
A68_BOOL  GLCBCTR;  /* YIELD */
A68_147  HLCBCTR_e;
A68_INT * ILCBCTR;  /* YIELD */
A68_187  JLCBCTR;  /* OPERATORS - mode -> union mode */
A68_147  KLCBCTR_s;
A68_INT * LLCBCTR;  /* YIELD */
A68_187  MLCBCTR;  /* OPERATORS - mode -> union mode */
A68_147  NLCBCTR_n;
A68_INT * OLCBCTR;  /* YIELD */
A68_187  PLCBCTR;  /* OPERATORS - mode -> union mode */
A68_200  QLCBCTR_c;
A68_INT * RLCBCTR;  /* YIELD */
A68_INT * SLCBCTR;  /* YIELD */
A68_VC  TLCBCTR;  /* avoid structure result */
A68_VC * ULCBCTR;  /* YIELD */
A68_187  VLCBCTR;  /* OPERATORS - mode -> union mode */
A68_187  WLCBCTR;  /* OPERATORS - mode -> union mode */
A68_187  XLCBCTR;  /* OPERATORS - mode -> union mode */
A68_187  YLCBCTR;  /* OPERATORS - mode -> union mode */
A68_107  ZLCBCTR_l;
A68_INT * AMCBCTR;  /* YIELD */
A68_187  BMCBCTR;  /* OPERATORS - mode -> union mode */
A68_189  CMCBCTR_a;
A68_INT * DMCBCTR;  /* YIELD */
A68_VC  EMCBCTR;  /* avoid structure result */
A68_VC * FMCBCTR;  /* YIELD */
A68_187  GMCBCTR;  /* OPERATORS - mode -> union mode */
A68_188  HMCBCTR_c;
A68_VC  IMCBCTR;  /* avoid structure result */
A68_VC * JMCBCTR;  /* YIELD */
A68_187  KMCBCTR;  /* OPERATORS - mode -> union mode */
A68_191  LMCBCTR_s;
A68_INT * MMCBCTR;  /* YIELD */
A68_VC  NMCBCTR;  /* avoid structure result */
A68_VC * OMCBCTR;  /* YIELD */
A68_187  PMCBCTR;  /* OPERATORS - mode -> union mode */
A68_187  QMCBCTR;  /* OPERATORS - mode -> union mode */
A68_INT  RMCBCTR;  /* YIELD */
A68_187  SMCBCTR;  /* OPERATORS - mode -> union mode */
A68_187  TMCBCTR;  /* OPERATORS - mode -> union mode */
A68_INT  UMCBCTR;  /* YIELD */
A68_187  VMCBCTR;  /* OPERATORS - mode -> union mode */
A68_INT  WMCBCTR_mode;
A68_141  XMCBCTR;  /* collateral clause result */
A68_VC  YMCBCTR;  /* avoid structure result */
A68_187  ZMCBCTR;  /* OPERATORS - mode -> union mode */
A68_192  ANCBCTR_o;
A68_INT * BNCBCTR;  /* YIELD */
A68_INT * CNCBCTR;  /* YIELD */
A68_INT * DNCBCTR;  /* YIELD */
A68_INT  ENCBCTR_n;
A68_BOOL  FNCBCTR;  /* clause result */
A68_BOOL  GNCBCTR;  /* clause result */
A68_INT  HNCBCTR;  /* ADICOPS - MOD */
A68_INT  INCBCTR;  /* ADICOPS - MOD */
A68_INT  JNCBCTR;  /* ADICOPS - MOD */
A68_203  KNCBCTR;  /* collateral clause result */
A68_187  LNCBCTR;  /* OPERATORS - mode -> union mode */
A68_187  MNCBCTR;  /* OPERATORS - mode -> union mode */
A68_INT  NNCBCTR_miscellaneoustype;
A68_INT  ONCBCTR;  /* clause result */
A68_196  PNCBCTR_u;
A68_INT * QNCBCTR;  /* YIELD */
A68_BITS * RNCBCTR;  /* YIELD */
A68_INT * SNCBCTR;  /* YIELD */
A68_187  TNCBCTR;  /* OPERATORS - mode -> union mode */
A68_195  UNCBCTR_s;
A68_INT * VNCBCTR;  /* YIELD */
A68_VC  WNCBCTR;  /* avoid structure result */
A68_VC * XNCBCTR;  /* YIELD */
A68_INT * YNCBCTR;  /* YIELD */
A68_BOOL * ZNCBCTR;  /* YIELD */
A68_187  AOCBCTR;  /* OPERATORS - mode -> union mode */
A68_195  BOCBCTR_e;
A68_INT * COCBCTR;  /* YIELD */
A68_VC  DOCBCTR;  /* OPERATORS - nil -> mode */
A68_VC * EOCBCTR;  /* YIELD */
A68_INT * FOCBCTR;  /* YIELD */
A68_BOOL * GOCBCTR;  /* YIELD */
A68_187  HOCBCTR;  /* OPERATORS - mode -> union mode */
A68_195  IOCBCTR_d;
A68_INT * JOCBCTR;  /* YIELD */
A68_VC  KOCBCTR;  /* OPERATORS - nil -> mode */
A68_VC * LOCBCTR;  /* YIELD */
A68_INT * MOCBCTR;  /* YIELD */
A68_BOOL * NOCBCTR;  /* YIELD */
A68_187  OOCBCTR;  /* OPERATORS - mode -> union mode */
A68_194  POCBCTR_r;
A68_INT * QOCBCTR;  /* YIELD */
A68_INT * ROCBCTR;  /* YIELD */
A68_BITS * SOCBCTR;  /* YIELD */
A68_INT * TOCBCTR;  /* YIELD */
A68_VC  UOCBCTR;  /* avoid structure result */
A68_VC * VOCBCTR;  /* YIELD */
A68_187  WOCBCTR;  /* OPERATORS - mode -> union mode */
A68_187  ZOCBCTR;  /* OPERATORS - mode -> union mode */
A68_187  APCBCTR;  /* OPERATORS - mode -> union mode */
A68_205  BPCBCTR_s;
A68_INT * CPCBCTR;  /* YIELD */
A68_INT * DPCBCTR;  /* YIELD */
A68_INT * EPCBCTR;  /* YIELD */
A68_187  FPCBCTR;  /* OPERATORS - mode -> union mode */
A68_197  GPCBCTR_c;
A68_INT * HPCBCTR;  /* YIELD */
A68_187  IPCBCTR;  /* OPERATORS - mode -> union mode */
A68_187  JPCBCTR;  /* OPERATORS - mode -> union mode */
A68_192  KPCBCTR_v;
A68_INT * LPCBCTR;  /* YIELD */
A68_INT * MPCBCTR;  /* YIELD */
A68_187  NPCBCTR;  /* OPERATORS - mode -> union mode */
A68_204  OPCBCTR_cl;
A68_INT * PPCBCTR;  /* YIELD */
A68_INT * QPCBCTR;  /* YIELD */
A68_292  SPCBCTR_generator;   /* proc value of non-global proc */
A68_186  XPCBCTR;  /* avoid structure result */
A68_186 * YPCBCTR;  /* YIELD */
A68_INT * ZPCBCTR_actual;
A68_186  AQCBCTR;  /* forall yield */
A68_INT  BQCBCTR;  /* forall loop counter */
A68_187  CQCBCTR;  /* OPERATORS - mode -> union mode */
A68_206  DQCBCTR_x;
A68_INT * EQCBCTR;  /* YIELD */
A68_303  GQCBCTR_generator;   /* proc value of non-global proc */
A68_207  LQCBCTR;  /* avoid structure result */
A68_207 * MQCBCTR;  /* YIELD */
A68_VC  NQCBCTR;  /* avoid structure result */
A68_VC * OQCBCTR;  /* YIELD */
A68_VC  PQCBCTR;  /* avoid structure result */
A68_VC * QQCBCTR;  /* YIELD */
A68_VC  RQCBCTR;  /* avoid structure result */
A68_VC * SQCBCTR;  /* YIELD */
A68_VC  TQCBCTR;  /* avoid structure result */
A68_VC * UQCBCTR;  /* YIELD */
A68_VC * VQCBCTR_ysname;
A68_207  WQCBCTR;  /* forall yield */
A68_INT  XQCBCTR;  /* forall loop counter */
A68_VC  YQCBCTR;  /* avoid structure result */
A68_187  ZQCBCTR;  /* OPERATORS - mode -> union mode */
A68_187  ARCBCTR;  /* OPERATORS - mode -> union mode */
A68_155  BRCBCTR_w;
A68_INT * CRCBCTR;  /* YIELD */
A68_187  DRCBCTR;  /* OPERATORS - mode -> union mode */
A68_193  ERCBCTR_i;
A68_INT * FRCBCTR;  /* YIELD */
A68_INT * GRCBCTR;  /* YIELD */
A68_INT * HRCBCTR;  /* YIELD */
A68_VC  IRCBCTR;  /* avoid structure result */
A68_VC * JRCBCTR;  /* YIELD */
A68_187  KRCBCTR;  /* OPERATORS - mode -> union mode */
A68_202  LRCBCTR_s;
A68_INT * MRCBCTR;  /* YIELD */
A68_INT * NRCBCTR;  /* YIELD */
A68_BITS * ORCBCTR;  /* YIELD */
A68_INT * PRCBCTR;  /* YIELD */
A68_187  QRCBCTR;  /* OPERATORS - mode -> union mode */
A68_187  RRCBCTR_imperative;
A68_VC  SRCBCTR;  /* avoid structure result */
A68_VC  TRCBCTR_string;
A68_VC  URCBCTR;  /* OPERATORS - trim index */
A68_VC  VRCBCTR;  /* OPERATORS - trim index */
A68_187  WRCBCTR;  /* clause result */
A_PROC_ENTRY(nextstreamimperative);
{ 
HKCBCTR_type = BHCBCTR_nexttype();
 /* line 763: */
 /* line 764: */
if ( GFCBCTR_printstream )
{ 
 /* line 765: */
ROAAOSF_whole( HKCBCTR_type, (-3), &KKCBCTR );
A_CALLPROC(FSIACTR_list,(A_VC_PLUS(A_VC_PLUS(A_HVEC(JKCBCTR,'[',A68_CHAR ),KKCBCTR),LKCBCTR)),(A_VC_PLUS(A_VC_PLUS(A_HVEC(JKCBCTR,'[',A68_CHAR ),KKCBCTR),LKCBCTR),(FSIACTR_list).nonlocals));
} 
 /* line 767: */
 /* line 769: */
 /* line 770: */
 /* line 772: */
switch ( ((HKCBCTR_type/CVBBCTR_rangesize)+1) )
{ 
case 1: 
 /* line 773: */
 /* line 776: */
switch ( (HKCBCTR_type/DVBBCTR_subrangesize) )
{ 
case 1: 
{ 
NKCBCTR = (&((&MKCBCTR_s)->Fn)) ;
(*NKCBCTR) = (HKCBCTR_type-RUBBCTR_separatorbase);
 /* line 777: */
OKCBCTR = (&((&MKCBCTR_s)->Mode)) ;
(*OKCBCTR) = A_CALLPROC(RGCBCTR_next,(),((RGCBCTR_next).nonlocals));
PKCBCTR = (&((&MKCBCTR_s)->Props)) ;
(*PKCBCTR) = (A68_BITS )A_CALLPROC(RGCBCTR_next,(),((RGCBCTR_next).nonlocals));
 /* line 778: */
QKCBCTR = (&((&MKCBCTR_s)->Param)) ;
(*QKCBCTR) = A_CALLPROC(RGCBCTR_next,(),((RGCBCTR_next).nonlocals));
 /* line 779: */
 /* line 780: */
 /* line 783: */
RKCBCTR = A_UNITE(SKCBCTR,mode20,20,MKCBCTR_s);
} 
break;
case 2: 
{ 
UKCBCTR = (&((&TKCBCTR_t)->Fn)) ;
(*UKCBCTR) = (HKCBCTR_type-SUBBCTR_terminatorbase);
 /* line 784: */
A_CALLPROC(RGCBCTR_next,(),((RGCBCTR_next).nonlocals));
VKCBCTR = (&((&TKCBCTR_t)->Props)) ;
(*VKCBCTR) = (A68_BITS )A_CALLPROC(RGCBCTR_next,(),((RGCBCTR_next).nonlocals));
A_CALLPROC(RGCBCTR_next,(),((RGCBCTR_next).nonlocals));
 /* line 785: */
 /* line 786: */
 /* line 789: */
RKCBCTR = A_UNITE(WKCBCTR,mode22,22,TKCBCTR_t);
} 
break;
case 3: 
{ 
YKCBCTR = (&((&XKCBCTR_semi)->Fn)) ;
(*YKCBCTR) = WBAACTR_semifn;
 /* line 790: */
ZKCBCTR = (&((&XKCBCTR_semi)->Props)) ;
(*ZKCBCTR) = (A68_BITS )((HKCBCTR_type-TUBBCTR_semibase)*2048);
 /* line 791: */
 /* line 792: */
 /* line 793: */
 /* line 796: */
RKCBCTR = A_UNITE(ALCBCTR,mode20,20,XKCBCTR_semi);
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
break;
case 2: 
 /* line 797: */
{ 
BLCBCTR_loadtype = (HKCBCTR_type-UUBBCTR_loadbase);
 /* line 798: */
 /* line 799: */
 /* line 801: */
CLCBCTR = ((BLCBCTR_loadtype/DVBBCTR_subrangesize)+1);
switch ( CLCBCTR )
{ 
case 1: 
 /* line 802: */
 /* line 803: */
switch ( BLCBCTR_loadtype )
{ 
case 1: 
 /* line 805: */
ELCBCTR = A68_FALSE ;
RKCBCTR = A_UNITE(DLCBCTR,mode3,3,ELCBCTR);
break;
case 2: 
 /* line 807: */
GLCBCTR = A68_TRUE ;
RKCBCTR = A_UNITE(FLCBCTR,mode3,3,GLCBCTR);
break;
case 3: 
{ 
ILCBCTR = (&((&HLCBCTR_e)->Nse)) ;
(*ILCBCTR) = ZAAACTR_emptyfn;
 /* line 809: */
RKCBCTR = A_UNITE(JLCBCTR,mode1,1,HLCBCTR_e);
} 
break;
case 4: 
{ 
LLCBCTR = (&((&KLCBCTR_s)->Nse)) ;
(*LLCBCTR) = ABAACTR_skipfn;
 /* line 811: */
RKCBCTR = A_UNITE(MLCBCTR,mode1,1,KLCBCTR_s);
} 
break;
case 5: 
{ 
OLCBCTR = (&((&NLCBCTR_n)->Nse)) ;
(*OLCBCTR) = BBAACTR_nilfn;
 /* line 813: */
RKCBCTR = A_UNITE(PLCBCTR,mode1,1,NLCBCTR_n);
} 
break;
case 6: 
{ 
RLCBCTR = (&((&QLCBCTR_c)->Mode)) ;
(*RLCBCTR) = A_CALLPROC(RGCBCTR_next,(),((RGCBCTR_next).nonlocals));
SLCBCTR = (&((&QLCBCTR_c)->Number)) ;
(*SLCBCTR) = A_CALLPROC(RGCBCTR_next,(),((RGCBCTR_next).nonlocals));
NICBCTR_nextxchars( 128, 1, &TLCBCTR );
ULCBCTR = (&((&QLCBCTR_c)->Insert)) ;
(*ULCBCTR) = TLCBCTR;
 /* line 815: */
RKCBCTR = A_UNITE(VLCBCTR,mode19,19,QLCBCTR_c);
} 
break;
case 7: 
 /* line 817: */
LXIACTR_terminalerror(600) ;
RKCBCTR = A_EMPTY(WLCBCTR,26);
break;
case 8: 
 /* line 819: */
LXIACTR_terminalerror(600) ;
RKCBCTR = A_EMPTY(XLCBCTR,26);
break;
case 9: 
 /* line 821: */
LXIACTR_terminalerror(600) ;
RKCBCTR = A_EMPTY(YLCBCTR,26);
break;
case 10: 
{ 
AMCBCTR = (&((&ZLCBCTR_l)->Labno)) ;
(*AMCBCTR) = A_CALLPROC(RGCBCTR_next,(),((RGCBCTR_next).nonlocals));
 /* line 823: */
RKCBCTR = A_UNITE(BMCBCTR,mode5,5,ZLCBCTR_l);
} 
break;
case 11: 
{ 
DMCBCTR = (&((&CMCBCTR_a)->Mode)) ;
(*DMCBCTR) = A_CALLPROC(RGCBCTR_next,(),((RGCBCTR_next).nonlocals));
NICBCTR_nextxchars( 400, 1, &EMCBCTR );
FMCBCTR = (&((&CMCBCTR_a)->String)) ;
(*FMCBCTR) = EMCBCTR;
 /* line 825: */
RKCBCTR = A_UNITE(GMCBCTR,mode7,7,CMCBCTR_a);
} 
break;
case 12: 
{ 
NICBCTR_nextxchars( 1, 3, &IMCBCTR );
JMCBCTR = (&((&HMCBCTR_c)->Representation)) ;
(*JMCBCTR) = IMCBCTR;
 /* line 827: */
RKCBCTR = A_UNITE(KMCBCTR,mode4,4,HMCBCTR_c);
} 
break;
case 13: 
{ 
MMCBCTR = (&((&LMCBCTR_s)->Mode)) ;
(*MMCBCTR) = A_CALLPROC(RGCBCTR_next,(),((RGCBCTR_next).nonlocals));
NICBCTR_nextxchars( 160, 0, &NMCBCTR );
OMCBCTR = (&((&LMCBCTR_s)->Denotation)) ;
(*OMCBCTR) = NMCBCTR;
 /* line 830: */
RKCBCTR = A_UNITE(PMCBCTR,mode9,9,LMCBCTR_s);
} 
break;
case 14: 
 /* line 832: */
RMCBCTR = A_CALLPROC(RGCBCTR_next,(),((RGCBCTR_next).nonlocals)) ;
RKCBCTR = A_UNITE(QMCBCTR,mode2,2,RMCBCTR);
break;
case 15: 
 /* line 833: */
 /* line 836: */
LXIACTR_terminalerror(600) ;
RKCBCTR = A_EMPTY(SMCBCTR,26);
break;
default: 
A_IMP_SKIP ;
break;
} 
break;
case 2: 
 /* line 837: */
 /* line 838: */
 /* line 839: */
if ( (HKCBCTR_type==80) )
{ 
 /* line 840: */
UMCBCTR = A_CALLPROC(RGCBCTR_next,(),((RGCBCTR_next).nonlocals)) ;
RKCBCTR = A_UNITE(TMCBCTR,mode2,2,UMCBCTR);
} 
else
{ 
 /* line 841: */
 /* line 844: */
LXIACTR_terminalerror(600) ;
RKCBCTR = A_EMPTY(VMCBCTR,26);
} 
break;
case 3: 
{ 
WMCBCTR_mode = (HKCBCTR_type-WUBBCTR_numberbase);
XMCBCTR.Mode = WMCBCTR_mode;
TGCBCTR_nextstring(  &YMCBCTR );
XMCBCTR.Nu = YMCBCTR;
 /* line 845: */
 /* line 848: */
RKCBCTR = A_UNITE(ZMCBCTR,mode6,6,XMCBCTR);
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
} 
break;
case 3: 
 /* line 849: */
{ 
 /* line 850: */
BNCBCTR = (&((&ANCBCTR_o)->Fn)) ;
(*BNCBCTR) = (HKCBCTR_type-XUBBCTR_operbase);
 /* line 851: */
CNCBCTR = (&((&ANCBCTR_o)->Mode)) ;
(*CNCBCTR) = A_CALLPROC(RGCBCTR_next,(),((RGCBCTR_next).nonlocals));
 /* line 852: */
DNCBCTR = (&((&ANCBCTR_o)->Param)) ;
(*DNCBCTR) = A_CALLPROC(RGCBCTR_next,(),((RGCBCTR_next).nonlocals));
 /* line 853: */
 /* line 854: */
{ 
ENCBCTR_n = ((*(&((&ANCBCTR_o)->Param)))/16);
 /* line 855: */
FNCBCTR = ((ENCBCTR_n==4)|(ENCBCTR_n==5));
} 
 /* line 856: */
INCBCTR = (*(&((&ANCBCTR_o)->Param))) ;
JNCBCTR = 16 ;
GNCBCTR = ((((*(&((&ANCBCTR_o)->Fn)))==10)&FNCBCTR)&(A_MOD(INCBCTR,JNCBCTR,HNCBCTR)==1));
if ( GNCBCTR )
{ 
KNCBCTR.Fn = ICAACTR_optboolfn;
 /* line 857: */
KNCBCTR.Props = 0X0U;
 /* line 858: */
RKCBCTR = A_UNITE(LNCBCTR,mode22,22,KNCBCTR);
} 
else
{ 
 /* line 861: */
RKCBCTR = A_UNITE(MNCBCTR,mode10,10,ANCBCTR_o);
} 
} 
break;
case 4: 
 /* line 862: */
{ 
NNCBCTR_miscellaneoustype = (HKCBCTR_type-YUBBCTR_miscellaneousbase);
 /* line 863: */
 /* line 864: */
 /* line 866: */
ONCBCTR = ((NNCBCTR_miscellaneoustype/DVBBCTR_subrangesize)+1);
switch ( ONCBCTR )
{ 
case 1: 
 /* line 867: */
 /* line 869: */
switch ( NNCBCTR_miscellaneoustype )
{ 
case 1: 
{ 
QNCBCTR = (&((&PNCBCTR_u)->Mode)) ;
(*QNCBCTR) = A_CALLPROC(RGCBCTR_next,(),((RGCBCTR_next).nonlocals));
RNCBCTR = (&((&PNCBCTR_u)->Props)) ;
(*RNCBCTR) = (A68_BITS )A_CALLPROC(RGCBCTR_next,(),((RGCBCTR_next).nonlocals));
SNCBCTR = (&((&PNCBCTR_u)->Param)) ;
(*SNCBCTR) = A_CALLPROC(RGCBCTR_next,(),((RGCBCTR_next).nonlocals));
 /* line 872: */
RKCBCTR = A_UNITE(TNCBCTR,mode15,15,PNCBCTR_u);
} 
break;
case 2: 
{ 
VNCBCTR = (&((&UNCBCTR_s)->Labno)) ;
(*VNCBCTR) = A_CALLPROC(RGCBCTR_next,(),((RGCBCTR_next).nonlocals));
TGCBCTR_nextstring(  &WNCBCTR );
XNCBCTR = (&((&UNCBCTR_s)->Name)) ;
(*XNCBCTR) = WNCBCTR;
 /* line 873: */
YNCBCTR = (&((&UNCBCTR_s)->Status)) ;
(*YNCBCTR) = 0;
ZNCBCTR = (&((&UNCBCTR_s)->Notsetting)) ;
(*ZNCBCTR) = A68_TRUE;
 /* line 874: */
 /* line 875: */
 /* line 878: */
RKCBCTR = A_UNITE(AOCBCTR,mode14,14,UNCBCTR_s);
} 
break;
case 3: 
{ 
COCBCTR = (&((&BOCBCTR_e)->Labno)) ;
(*COCBCTR) = A_CALLPROC(RGCBCTR_next,(),((RGCBCTR_next).nonlocals));
EOCBCTR = (&((&BOCBCTR_e)->Name)) ;
(*EOCBCTR) = A_VVAC(DOCBCTR);
 /* line 879: */
FOCBCTR = (&((&BOCBCTR_e)->Status)) ;
(*FOCBCTR) = A_CALLPROC(RGCBCTR_next,(),((RGCBCTR_next).nonlocals));
GOCBCTR = (&((&BOCBCTR_e)->Notsetting)) ;
(*GOCBCTR) = A68_TRUE;
 /* line 880: */
 /* line 881: */
 /* line 884: */
RKCBCTR = A_UNITE(HOCBCTR,mode14,14,BOCBCTR_e);
} 
break;
case 4: 
{ 
JOCBCTR = (&((&IOCBCTR_d)->Labno)) ;
(*JOCBCTR) = A_CALLPROC(RGCBCTR_next,(),((RGCBCTR_next).nonlocals));
LOCBCTR = (&((&IOCBCTR_d)->Name)) ;
(*LOCBCTR) = A_VVAC(KOCBCTR);
 /* line 885: */
MOCBCTR = (&((&IOCBCTR_d)->Status)) ;
(*MOCBCTR) = 0;
NOCBCTR = (&((&IOCBCTR_d)->Notsetting)) ;
(*NOCBCTR) = A68_FALSE;
 /* line 886: */
 /* line 887: */
 /* line 890: */
RKCBCTR = A_UNITE(OOCBCTR,mode14,14,IOCBCTR_d);
} 
break;
case 5: 
{ 
QOCBCTR = (&((&POCBCTR_r)->Rdenno)) ;
(*QOCBCTR) = A_CALLPROC(RGCBCTR_next,(),((RGCBCTR_next).nonlocals));
ROCBCTR = (&((&POCBCTR_r)->Mode)) ;
(*ROCBCTR) = A_CALLPROC(RGCBCTR_next,(),((RGCBCTR_next).nonlocals));
SOCBCTR = (&((&POCBCTR_r)->Props)) ;
(*SOCBCTR) = (A68_BITS )A_CALLPROC(RGCBCTR_next,(),((RGCBCTR_next).nonlocals));
 /* line 891: */
TOCBCTR = (&((&POCBCTR_r)->Maxname)) ;
(*TOCBCTR) = A_CALLPROC(RGCBCTR_next,(),((RGCBCTR_next).nonlocals));
TGCBCTR_nextstring(  &UOCBCTR );
VOCBCTR = (&((&POCBCTR_r)->Name)) ;
(*VOCBCTR) = UOCBCTR;
 /* line 892: */
 /* line 893: */
 /* line 895: */
RKCBCTR = A_UNITE(WOCBCTR,mode12,12,POCBCTR_r);
} 
break;
case 6: 
 /* line 897: */
PXIACTR_assert(YOCBCTR, A68_FALSE) ;
RKCBCTR = A_EMPTY(ZOCBCTR,26);
break;
case 7: 
 /* line 900: */
LXIACTR_terminalerror(600) ;
RKCBCTR = A_EMPTY(APCBCTR,26);
break;
case 8: 
 /* line 901: */
if ( FLOACTR_composition )
{ 
CPCBCTR = (&((&BPCBCTR_s)->Moduleno)) ;
(*CPCBCTR) = A_CALLPROC(RGCBCTR_next,(),((RGCBCTR_next).nonlocals));
DPCBCTR = (&((&BPCBCTR_s)->I)) ;
(*DPCBCTR) = A_CALLPROC(RGCBCTR_next,(),((RGCBCTR_next).nonlocals));
EPCBCTR = (&((&BPCBCTR_s)->J)) ;
(*EPCBCTR) = A_CALLPROC(RGCBCTR_next,(),((RGCBCTR_next).nonlocals));
 /* line 902: */
RKCBCTR = A_UNITE(FPCBCTR,mode24,24,BPCBCTR_s);
} 
else
{ 
A_CALLPROC(RGCBCTR_next,(),((RGCBCTR_next).nonlocals));
HPCBCTR = (&((&GPCBCTR_c)->I)) ;
(*HPCBCTR) = A_CALLPROC(RGCBCTR_next,(),((RGCBCTR_next).nonlocals));
A_CALLPROC(RGCBCTR_next,(),((RGCBCTR_next).nonlocals));
 /* line 903: */
 /* line 905: */
RKCBCTR = A_UNITE(IPCBCTR,mode16,16,GPCBCTR_c);
} 
break;
case 9: 
 /* line 907: */
LXIACTR_terminalerror(600) ;
RKCBCTR = A_EMPTY(JPCBCTR,26);
break;
case 10: 
{ 
LPCBCTR = (&((&KPCBCTR_v)->Fn)) ;
(*LPCBCTR) = LGAACTR_voidfn;
MPCBCTR = (&((&KPCBCTR_v)->Mode)) ;
(*MPCBCTR) = UEAACTR_voidmode;
 /* line 910: */
RKCBCTR = A_UNITE(NPCBCTR,mode10,10,KPCBCTR_v);
} 
break;
case 11: 
{ 
PPCBCTR = (&((&OPCBCTR_cl)->Body)) ;
(*PPCBCTR) = A_CALLPROC(RGCBCTR_next,(),((RGCBCTR_next).nonlocals));
QPCBCTR = (&((&OPCBCTR_cl)->Moduleno)) ;
(*QPCBCTR) = A_CALLPROC(RGCBCTR_next,(),((RGCBCTR_next).nonlocals));
 /* line 911: */
A_CLOSURE( SPCBCTR_generator, TPCBCTR_generator, UPCBCTR_generator );
A_CALLPROC(SPCBCTR_generator,(A68_FALSE, &XPCBCTR),(A68_FALSE, &XPCBCTR,(SPCBCTR_generator).nonlocals));
YPCBCTR = (&((&OPCBCTR_cl)->Actuals)) ;
(*YPCBCTR) = XPCBCTR;
BHCBCTR_nexttype();
 /* line 912: */
AQCBCTR = (*(&((&OPCBCTR_cl)->Actuals))) ;
BQCBCTR = AQCBCTR.dim[0].upb - AQCBCTR.dim[0].lwb;
ZPCBCTR_actual = AQCBCTR.data;
for (;BQCBCTR-- >= 0;
(ZPCBCTR_actual += AQCBCTR.dim[0].stride
) )
{
(*ZPCBCTR_actual) = A_CALLPROC(RGCBCTR_next,(),((RGCBCTR_next).nonlocals));
}
 /* line 913: */
 /* line 914: */
 /* line 917: */
RKCBCTR = A_UNITE(CQCBCTR,mode23,23,OPCBCTR_cl);
} 
break;
case 12: 
{ 
EQCBCTR = (&((&DQCBCTR_x)->Moduleno)) ;
(*EQCBCTR) = A_CALLPROC(RGCBCTR_next,(),((RGCBCTR_next).nonlocals));
 /* line 918: */
A_CLOSURE( GQCBCTR_generator, HQCBCTR_generator, IQCBCTR_generator );
A_CALLPROC(GQCBCTR_generator,(A68_FALSE, &LQCBCTR),(A68_FALSE, &LQCBCTR,(GQCBCTR_generator).nonlocals));
MQCBCTR = (&((&DQCBCTR_x)->Ysnames)) ;
(*MQCBCTR) = LQCBCTR;
TGCBCTR_nextstring(  &NQCBCTR );
OQCBCTR = (&((&DQCBCTR_x)->Name)) ;
(*OQCBCTR) = NQCBCTR;
 /* line 919: */
TGCBCTR_nextstring(  &PQCBCTR );
QQCBCTR = (&((&DQCBCTR_x)->Uname)) ;
(*QQCBCTR) = PQCBCTR;
TGCBCTR_nextstring(  &RQCBCTR );
SQCBCTR = (&((&DQCBCTR_x)->Lname)) ;
(*SQCBCTR) = RQCBCTR;
 /* line 920: */
TGCBCTR_nextstring(  &TQCBCTR );
UQCBCTR = (&((&DQCBCTR_x)->Gname)) ;
(*UQCBCTR) = TQCBCTR;
 /* line 921: */
WQCBCTR = (*(&((&DQCBCTR_x)->Ysnames))) ;
XQCBCTR = WQCBCTR.dim[0].upb - WQCBCTR.dim[0].lwb;
VQCBCTR_ysname = WQCBCTR.data;
for (;XQCBCTR-- >= 0;
(VQCBCTR_ysname += WQCBCTR.dim[0].stride
) )
{
TGCBCTR_nextstring(  &YQCBCTR );
(*VQCBCTR_ysname) = YQCBCTR;
}
 /* line 922: */
 /* line 923: */
 /* line 924: */
 /* line 925: */
RKCBCTR = A_UNITE(ZQCBCTR,mode25,25,DQCBCTR_x);
} 
break;
default: 
 /* line 926: */
 /* line 929: */
LXIACTR_terminalerror(601) ;
RKCBCTR = A_EMPTY(ARCBCTR,26);
break;
} 
break;
case 2: 
{ 
CRCBCTR = (&((&BRCBCTR_w)->W)) ;
(*CRCBCTR) = (HKCBCTR_type-ZUBBCTR_warnbase);
 /* line 932: */
RKCBCTR = A_UNITE(DRCBCTR,mode13,13,BRCBCTR_w);
} 
break;
case 3: 
{ 
FRCBCTR = (&((&ERCBCTR_i)->Type)) ;
(*FRCBCTR) = (HKCBCTR_type-AVBBCTR_iddecbase);
 /* line 933: */
GRCBCTR = (&((&ERCBCTR_i)->Mode)) ;
(*GRCBCTR) = A_CALLPROC(RGCBCTR_next,(),((RGCBCTR_next).nonlocals));
HRCBCTR = (&((&ERCBCTR_i)->Decno)) ;
(*HRCBCTR) = A_CALLPROC(RGCBCTR_next,(),((RGCBCTR_next).nonlocals));
 /* line 934: */
TGCBCTR_nextstring(  &IRCBCTR );
JRCBCTR = (&((&ERCBCTR_i)->Name)) ;
(*JRCBCTR) = IRCBCTR;
 /* line 935: */
 /* line 936: */
 /* line 939: */
RKCBCTR = A_UNITE(KRCBCTR,mode11,11,ERCBCTR_i);
} 
break;
case 4: 
{ 
MRCBCTR = (&((&LRCBCTR_s)->Fn)) ;
(*MRCBCTR) = (HKCBCTR_type-BVBBCTR_starterbase);
 /* line 940: */
NRCBCTR = (&((&LRCBCTR_s)->Mode)) ;
(*NRCBCTR) = A_CALLPROC(RGCBCTR_next,(),((RGCBCTR_next).nonlocals));
ORCBCTR = (&((&LRCBCTR_s)->Props)) ;
(*ORCBCTR) = (A68_BITS )A_CALLPROC(RGCBCTR_next,(),((RGCBCTR_next).nonlocals));
 /* line 941: */
PRCBCTR = (&((&LRCBCTR_s)->Resultmode)) ;
(*PRCBCTR) = A_CALLPROC(RGCBCTR_next,(),((RGCBCTR_next).nonlocals));
 /* line 942: */
 /* line 943: */
 /* line 944: */
RKCBCTR = A_UNITE(QRCBCTR,mode21,21,LRCBCTR_s);
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
RRCBCTR_imperative = RKCBCTR;
 /* line 947: */
 /* line 948: */
 /* line 949: */
if ( GFCBCTR_printstream )
{ 
SYWACTR_imperativemnemonic( RRCBCTR_imperative, &SRCBCTR );
TRCBCTR_string = SRCBCTR;
 /* line 951: */
 /* line 945: */
 /* line 952: */
if ( (TRCBCTR_string.upb<120) )
{ 
 /* line 953: */
 /* line 954: */
A_CALLPROC(FSIACTR_list,(TRCBCTR_string),(TRCBCTR_string,(FSIACTR_list).nonlocals));
} 
else
{ 
A_CALLPROC(FSIACTR_list,(A_VTRIM(URCBCTR,(TRCBCTR_string),A_VTSCRIPT(&(URCBCTR.upb),(TRCBCTR_string).upb,1,120))),(A_VTRIM(URCBCTR,(TRCBCTR_string),A_VTSCRIPT(&(URCBCTR.upb),(TRCBCTR_string).upb,1,120)),(FSIACTR_list).nonlocals));
 /* line 955: */
 /* line 956: */
 /* line 957: */
A_CALLPROC(FSIACTR_list,(A_VC_PLUS(A_C_TIMES(' ',35),A_VTRIM(VRCBCTR,(TRCBCTR_string),A_VTSCRIPT(&(VRCBCTR.upb),(TRCBCTR_string).upb,121,(TRCBCTR_string).upb)))),(A_VC_PLUS(A_C_TIMES(' ',35),A_VTRIM(VRCBCTR,(TRCBCTR_string),A_VTSCRIPT(&(VRCBCTR.upb),(TRCBCTR_string).upb,121,(TRCBCTR_string).upb))),(FSIACTR_list).nonlocals));
} 
} 
 /* line 958: */
 /* line 959: */
WRCBCTR = RRCBCTR_imperative;
} 
A_PROC_EXIT(nextstreamimperative);
*ReturnedValue = (WRCBCTR);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 3: */
 /* line 4: */
 /* line 5: */
 /* line 6: */
 /* line 7: */
 /* line 8: */
 /* line 10: */
int main(int argc, char *argv[], char *envp[])
{ 

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/shields/projects/Algol68/Tools/Algol68toC/src/a68toc","-v","-uname","seedfile","-lib","/home/shields/projects/Algol68/Tools/Algol68toC/a68config","-dir","/home/shields/projects/Algol68/Tools/Algol68toC/a68config","-dir","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel","-dir",".","a68toc.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/shields/projects/Algol68/Tools/Algol68toC/a68config","A68_CDIR=","A68_DIR=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/shields/projects/Algol68/Tools/Algol68toC/a68config/a68config.m","./uniquenameserver.m","./moduletracer.m","./modules.m","./modes.m","./mnemonics.m","./lookup.m","./incoperfn.m","./incmode.m","./incinstallation.m","./incimperatives.m","./incid.m","./environment.m","./environ.m","./denotations.m","./coutput.m","./compiler.m","./rscompiler.m","./centities.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/osif.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/usefulops.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_157  BSBBCTR;  /* collateral clause result */
A68_275  DSBBCTR;  /* collateral clause result */
A68_VC  ESBBCTR;  /* OPERATORS - nil -> mode */
A68_276  JSBBCTR;  /* avoid structure result */
A68_280  NSBBCTR;  /* OPERATORS - istruct -> vector */
A68_280  OSBBCTR;  /* OPERATORS - trim index */
A68_279  PSBBCTR;  /* OPERATORS - trim index */
A68_279  TSBBCTR;  /* OPERATORS - trim index */
A68_279  USBBCTR;  /* forall yield */
A68_INT  VSBBCTR;  /* forall loop counter */
A68_276  ATBBCTR;  /* avoid structure result */
A68_276 * BTBBCTR;  /* YIELD */
A68_276  CTBBCTR;  /* OPERATORS - simple index */
A68_INT * DTBBCTR;  /* YIELD */
A68_INT  ETBBCTR;  /* YIELD */
A68_VC  FTBBCTR;  /* OPERATORS - istruct -> vector */
A68_281 * GTBBCTR;  /* OPERATORS - istruct -> vector */
A68_VC * HTBBCTR;  /* YIELD */
A68_VC * ITBBCTR;  /* YIELD */
A68_279  KTBBCTR;  /* OPERATORS - trim index */
A68_279  LTBBCTR;  /* forall yield */
A68_INT  MTBBCTR;  /* forall loop counter */
A68_INT  STBBCTR;  /* YIELD */
A68_282  UVBBCTR;  /* avoid structure result */
A68_182  IWBBCTR;  /* avoid structure result */
A68_284  JWBBCTR;  /* collateral clause result */
A68_182  KWBBCTR;  /* OPERATORS - trim index */
A68_182  LWBBCTR;  /* OPERATORS - istruct to row */
A68_182  MWBBCTR;  /* OPERATORS - trim index */
A68_182  NWBBCTR;  /* OPERATORS - trim index */
A68_182  OWBBCTR;  /* YIELD */
A68_182  PWBBCTR;  /* OPERATORS - assign op */
A68_182  RWBBCTR;  /* OPERATORS - trim index */
A68_182  SWBBCTR;  /* forall yield */
A68_INT  TWBBCTR;  /* forall loop counter */
A68_183  UWBBCTR;  /* collateral clause result */
A68_183  VWBBCTR;  /* collateral clause result */
A68_INT  WWBBCTR;  /* YIELD */
A68_183 * XWBBCTR;  /* YIELD */
A68_BOOL  YWBBCTR;  /* clause result */
A68_183  ZWBBCTR;  /* collateral clause result */
A68_INT  AXBBCTR;  /* YIELD */
A68_183 * BXBBCTR;  /* YIELD */
A68_BOOL  CXBBCTR;  /* clause result */
A68_BOOL  DXBBCTR;  /* clause result */
A68_INT  FXBBCTR;  /* to part of loop */
A68_183  GXBBCTR;  /* collateral clause result */
A68_183 * HXBBCTR;  /* YIELD */
A68_183  IXBBCTR;  /* collateral clause result */
A68_INT  JXBBCTR;  /* YIELD */
A68_183 * KXBBCTR;  /* YIELD */
A68_181  TECBCTR;  /* clause result */
A68_181  UECBCTR;  /* procedure value */
A68_181  VECBCTR;  /* procedure value */
A68_175  WECBCTR;  /* procedure value */
A68_176  XECBCTR;  /* procedure value */
A68_177  YECBCTR;  /* procedure value */
A68_178  ZECBCTR;  /* procedure value */
A68_179  AFCBCTR;  /* procedure value */
A68_180  BFCBCTR;  /* procedure value */
A68_VC  EFCBCTR;  /* OPERATORS - istruct -> vector */
A68_BOOL  FFCBCTR;  /* clause result */
A68_INT  KFCBCTR;  /* forall loop counter */
A68_VC  LFCBCTR;  /* OPERATORS - nil -> mode */
A68_VC  MFCBCTR;  /* != */
A68_VC  NFCBCTR;  /* != */
A68_VC  SFCBCTR;  /* OPERATORS - trim index */
A68_VC  TFCBCTR;  /* OPERATORS - trim index */
A68_VC * UFCBCTR;  /* YIELD */
A68_INT  XFCBCTR;  /* forall loop counter */
A68_VC  ZFCBCTR;  /* avoid structure result */
A68_VC  BGCBCTR;  /* avoid structure result */
A68_INT  CGCBCTR;  /* YIELD */
A68_87  SGCBCTR;  /* procedure value */
A68_185  XRCBCTR;  /* procedure value */
A68_305  YRCBCTR;  /* collateral clause result */
A68_213  BSCBCTR;  /* OPERATORS - mode -> union mode */
A68_VC  CSCBCTR;  /* YIELD */
A68_213  DSCBCTR;  /* OPERATORS - mode -> union mode */
A68_212  ESCBCTR;  /* OPERATORS - istruct -> vector */
A68_301  FSCBCTR;  /* collateral clause result */
A68_213  ISCBCTR;  /* OPERATORS - mode -> union mode */
A68_VC  JSCBCTR;  /* YIELD */
A68_213  KSCBCTR;  /* OPERATORS - mode -> union mode */
A68_213  NSCBCTR;  /* OPERATORS - mode -> union mode */
A68_VC  OSCBCTR;  /* YIELD */
A68_213  PSCBCTR;  /* OPERATORS - mode -> union mode */
A68_212  QSCBCTR;  /* OPERATORS - istruct -> vector */
A68_213  RSCBCTR;  /* OPERATORS - mode -> union mode */
A68_212  SSCBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_213  TSCBCTR;  /* OPERATORS - mode -> union mode */
A68_212  USCBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_213  VSCBCTR;  /* OPERATORS - mode -> union mode */
A68_INT  WSCBCTR;  /* YIELD */
A68_212  XSCBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_213  YSCBCTR;  /* OPERATORS - mode -> union mode */
A68_212  ZSCBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_213  ATCBCTR;  /* OPERATORS - mode -> union mode */
A68_INT  BTCBCTR;  /* YIELD */
A68_212  CTCBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  ETCBCTR;  /* to part of loop */
A68_213  FTCBCTR;  /* OPERATORS - mode -> union mode */
A68_INT  GTCBCTR;  /* YIELD */
A68_212  HTCBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_213  ITCBCTR;  /* OPERATORS - mode -> union mode */
A68_INT  JTCBCTR;  /* YIELD */
A68_212  KTCBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A_GC_STARTUP(argc);
BAAALIB();   /* USE a68config */
AGMACTR();   /* USE uniquenameserver */
BCHACTR();   /* USE moduletracer */
VJOACTR();   /* USE modules */
MLMACTR();   /* USE modes */
QUWACTR();   /* USE mnemonics */
CSJACTR();   /* USE lookup */
XFAACTR();   /* USE incoperfn */
ZDAACTR();   /* USE incmode */
ODAACTR();   /* USE incinstallation */
UAAACTR();   /* USE incimperatives */
BAAACTR();   /* USE incid */
HPIACTR();   /* USE environment */
KNLACTR();   /* USE environ */
UJJACTR();   /* USE denotations */
YRLACTR();   /* USE coutput */
WWABCTR();   /* USE compiler */
ZJAACTR();   /* USE rscompiler */
THAACTR();   /* USE centities */
WSCAOSF();   /* USE osif */
IKAAOSF();   /* USE usefulops */
/* --- Initialise configuration information */
A_config.source_file = "/home/shields/projects/Algol68/Tools/Algol68toC/src/a68toc.a68";
A_config.translation_time = "Sun Sep 26 21:51:12 2004";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "WRBBCTR (from seed file) ";
A_config.spec_change_time = "no spec";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
#ifdef A_prelude
A_prelude(argc,argv,envp);
#endif
A_PROC_ENTRY(MAIN);
{ 
UEAALIB_a68config(LGAALIB_configinfo, ASBBCTR);
 /* line 53: */
BSBBCTR.Norden = 0;
BSBBCTR.Nomodes = 0;
BSBBCTR.Nolabs = 0;
BSBBCTR.Nodecnos = HAAACTR_minidno;
BSBBCTR.Nomodules = 0;
BSBBCTR.Nolibinds = 0;
CSBBCTR_xsizes = BSBBCTR;
 /* line 60: */
 /* line 65: */
 /* line 67: */
DSBBCTR.Streambuffer = A_VVAC(ESBBCTR);
DSBBCTR.Streamptr = 0;
GSBBCTR_generator( A68_FALSE, &JSBBCTR );
DSBBCTR.Buffers = JSBBCTR;
DSBBCTR.Currentbuffer = 0;
KSBBCTR_unsetstream = DSBBCTR;
 /* line 69: */
 /* line 70: */
OSBBCTR = A_ISVEC(NSBBCTR,(&LSBBCTR_streams_area),20,A68_275 ) ;
MSBBCTR_streams = A_VTRIM(PSBBCTR,(OSBBCTR),A_VRTSCRIPT(&(PSBBCTR.dim[0]),(OSBBCTR).upb,1,(OSBBCTR).upb,0));
 /* line 72: */
 /* line 74: */
 /* line 76: */
 /* line 77: */
USBBCTR = A_R1TRIM(TSBBCTR,(MSBBCTR_streams),A_RTSCRIPT(&(TSBBCTR.dim[0]),&((MSBBCTR_streams).dim[0]),(MSBBCTR_streams).dim[0].lwb,RSBBCTR_fixedstreams,1)) ;
VSBBCTR = USBBCTR.dim[0].upb - USBBCTR.dim[0].lwb;
SSBBCTR_stream = USBBCTR.data;
for (;VSBBCTR-- >= 0;
(SSBBCTR_stream += USBBCTR.dim[0].stride
) )
{
 /* line 78: */
 /* line 79: */
 /* line 82: */
XSBBCTR_generator( A68_FALSE, &ATBBCTR );
BTBBCTR = (&(SSBBCTR_stream->Buffers)) ;
CTBBCTR = (*BTBBCTR) = ATBBCTR ;
DTBBCTR = (&(SSBBCTR_stream->Currentbuffer)) ;
ETBBCTR = (*DTBBCTR) = 1 ;
GTBBCTR = A_LOC(A68_281 ) ;
HTBBCTR = (&A_VINDEX(CTBBCTR,ETBBCTR)) ;
ITBBCTR = (&(SSBBCTR_stream->Streambuffer)) ;
(*ITBBCTR) = (*HTBBCTR) = A_ISVEC(FTBBCTR,GTBBCTR,11,A68_CHAR );
}
 /* line 84: */
LTBBCTR = A_R1TRIM(KTBBCTR,(MSBBCTR_streams),A_RTSCRIPT(&(KTBBCTR.dim[0]),&((MSBBCTR_streams).dim[0]),(RSBBCTR_fixedstreams+1),(MSBBCTR_streams).dim[0].upb,1)) ;
MTBBCTR = LTBBCTR.dim[0].upb - LTBBCTR.dim[0].lwb;
JTBBCTR_stream = LTBBCTR.data;
for (;MTBBCTR-- >= 0;
(JTBBCTR_stream += LTBBCTR.dim[0].stride
) )
{
(*JTBBCTR_stream) = KSBBCTR_unsetstream;
}
 /* line 85: */
QSBBCTR_current = KSBBCTR_unsetstream;
 /* line 87: */
NTBBCTR_streambuffer = (&((&QSBBCTR_current)->Streambuffer));
 /* line 88: */
OTBBCTR_strptr = (&((&QSBBCTR_current)->Streamptr));
 /* line 89: */
PTBBCTR_currentbuffer = (&((&QSBBCTR_current)->Currentbuffer));
 /* line 90: */
QTBBCTR_buffers = (&((&QSBBCTR_current)->Buffers));
 /* line 92: */
STBBCTR = 0 ;
RTBBCTR_curstradd = (&A_R1INDEX(MSBBCTR_streams,STBBCTR));
 /* line 94: */
 /* line 98: */
 /* line 99: */
 /* line 115: */
 /* line 116: */
 /* line 117: */
 /* line 118: */
 /* line 119: */
 /* line 120: */
 /* line 121: */
 /* line 122: */
 /* line 123: */
 /* line 124: */
 /* line 125: */
 /* line 127: */
 /* line 128: */
 /* line 129: */
 /* line 130: */
 /* line 131: */
 /* line 132: */
 /* line 133: */
 /* line 134: */
 /* line 135: */
 /* line 136: */
 /* line 138: */
 /* line 139: */
 /* line 143: */
{ 
CYIACTR_setparams();
 /* line 145: */
LVBBCTR_inputfile = RVBAOSF_open_file(XQIACTR_sourcefilename, BTBAOSF_read_access, RIBAOSF_ignore_msg);
 /* line 147: */
if ( (LVBBCTR_inputfile==(A68_59 *)A68_NIL) )
{ 
LXIACTR_terminalerror(250);
} 
 /* line 149: */
MVBBCTR_line_start = 1;
 /* line 150: */
NVBBCTR_line_length = 0;
 /* line 152: */
OVBBCTR_line_pending = A68_FALSE;
 /* line 154: */
QRIACTR_linenumber = 0;
 /* line 156: */
QVBBCTR_generator( A68_TRUE, &UVBBCTR );
TVBBCTR_flexinputline = UVBBCTR;
 /* line 158: */
 /* line 188: */
EWBBCTR_generator( A68_TRUE, &IWBBCTR );
HWBBCTR_charset = IWBBCTR;
 /* line 189: */
 /* line 191: */
JWBBCTR.data[0].Type = 2;
JWBBCTR.data[0].Value = 37;
JWBBCTR.data[1].Type = 1;
JWBBCTR.data[1].Value = 100;
JWBBCTR.data[2].Type = 1;
JWBBCTR.data[2].Value = 100;
JWBBCTR.data[3].Type = 1;
JWBBCTR.data[3].Value = 100;
JWBBCTR.data[4].Type = 1;
JWBBCTR.data[4].Value = 100;
JWBBCTR.data[5].Type = 1;
JWBBCTR.data[5].Value = 100;
JWBBCTR.data[6].Type = 1;
JWBBCTR.data[6].Value = 100;
JWBBCTR.data[7].Type = 1;
 /* line 192: */
JWBBCTR.data[7].Value = 100;
JWBBCTR.data[8].Type = 1;
JWBBCTR.data[8].Value = 100;
JWBBCTR.data[9].Type = 2;
JWBBCTR.data[9].Value = 37;
JWBBCTR.data[10].Type = 2;
JWBBCTR.data[10].Value = 37;
JWBBCTR.data[11].Type = 2;
JWBBCTR.data[11].Value = 37;
JWBBCTR.data[12].Type = 2;
JWBBCTR.data[12].Value = 37;
JWBBCTR.data[13].Type = 1;
JWBBCTR.data[13].Value = 100;
JWBBCTR.data[14].Type = 1;
JWBBCTR.data[14].Value = 100;
JWBBCTR.data[15].Type = 1;
 /* line 193: */
JWBBCTR.data[15].Value = 100;
JWBBCTR.data[16].Type = 1;
JWBBCTR.data[16].Value = 100;
JWBBCTR.data[17].Type = 1;
JWBBCTR.data[17].Value = 100;
JWBBCTR.data[18].Type = 1;
JWBBCTR.data[18].Value = 100;
JWBBCTR.data[19].Type = 1;
JWBBCTR.data[19].Value = 100;
JWBBCTR.data[20].Type = 1;
JWBBCTR.data[20].Value = 100;
JWBBCTR.data[21].Type = 1;
JWBBCTR.data[21].Value = 100;
JWBBCTR.data[22].Type = 1;
JWBBCTR.data[22].Value = 100;
JWBBCTR.data[23].Type = 1;
 /* line 194: */
JWBBCTR.data[23].Value = 100;
JWBBCTR.data[24].Type = 1;
JWBBCTR.data[24].Value = 100;
JWBBCTR.data[25].Type = 1;
JWBBCTR.data[25].Value = 100;
JWBBCTR.data[26].Type = 1;
JWBBCTR.data[26].Value = 100;
JWBBCTR.data[27].Type = 1;
JWBBCTR.data[27].Value = 100;
JWBBCTR.data[28].Type = 1;
JWBBCTR.data[28].Value = 100;
JWBBCTR.data[29].Type = 1;
JWBBCTR.data[29].Value = 100;
JWBBCTR.data[30].Type = 1;
JWBBCTR.data[30].Value = 100;
JWBBCTR.data[31].Type = 1;
 /* line 195: */
JWBBCTR.data[31].Value = 100;
JWBBCTR.data[32].Type = 2;
JWBBCTR.data[32].Value = 37;
JWBBCTR.data[33].Type = 20;
JWBBCTR.data[33].Value = 45;
JWBBCTR.data[34].Type = 5;
JWBBCTR.data[34].Value = 100;
JWBBCTR.data[35].Type = 20;
JWBBCTR.data[35].Value = 62;
JWBBCTR.data[36].Type = 20;
JWBBCTR.data[36].Value = 160;
JWBBCTR.data[37].Type = 21;
JWBBCTR.data[37].Value = 214;
JWBBCTR.data[38].Type = 21;
JWBBCTR.data[38].Value = 229;
JWBBCTR.data[39].Type = 1;
 /* line 196: */
JWBBCTR.data[39].Value = 100;
JWBBCTR.data[40].Type = 20;
JWBBCTR.data[40].Value = 50;
JWBBCTR.data[41].Type = 20;
JWBBCTR.data[41].Value = 54;
JWBBCTR.data[42].Type = 22;
JWBBCTR.data[42].Value = 212;
JWBBCTR.data[43].Type = 21;
JWBBCTR.data[43].Value = 200;
JWBBCTR.data[44].Type = 20;
JWBBCTR.data[44].Value = 128;
JWBBCTR.data[45].Type = 21;
JWBBCTR.data[45].Value = 201;
JWBBCTR.data[46].Type = 20;
JWBBCTR.data[46].Value = 130;
JWBBCTR.data[47].Type = 22;
 /* line 197: */
JWBBCTR.data[47].Value = 213;
JWBBCTR.data[48].Type = 4;
JWBBCTR.data[48].Value = 0;
JWBBCTR.data[49].Type = 4;
JWBBCTR.data[49].Value = 1;
JWBBCTR.data[50].Type = 4;
JWBBCTR.data[50].Value = 2;
JWBBCTR.data[51].Type = 4;
JWBBCTR.data[51].Value = 3;
JWBBCTR.data[52].Type = 4;
JWBBCTR.data[52].Value = 4;
JWBBCTR.data[53].Type = 4;
JWBBCTR.data[53].Value = 5;
JWBBCTR.data[54].Type = 4;
JWBBCTR.data[54].Value = 6;
JWBBCTR.data[55].Type = 4;
 /* line 198: */
JWBBCTR.data[55].Value = 7;
JWBBCTR.data[56].Type = 4;
JWBBCTR.data[56].Value = 8;
JWBBCTR.data[57].Type = 4;
JWBBCTR.data[57].Value = 9;
JWBBCTR.data[58].Type = 22;
JWBBCTR.data[58].Value = 84;
JWBBCTR.data[59].Type = 20;
JWBBCTR.data[59].Value = 111;
JWBBCTR.data[60].Type = 22;
JWBBCTR.data[60].Value = 206;
JWBBCTR.data[61].Type = 22;
JWBBCTR.data[61].Value = 210;
JWBBCTR.data[62].Type = 22;
JWBBCTR.data[62].Value = 207;
JWBBCTR.data[63].Type = 21;
 /* line 199: */
JWBBCTR.data[63].Value = 217;
JWBBCTR.data[64].Type = 20;
JWBBCTR.data[64].Value = 154;
JWBBCTR.data[65].Type = 6;
JWBBCTR.data[65].Value = (-98);
JWBBCTR.data[66].Type = 6;
JWBBCTR.data[66].Value = (-99);
JWBBCTR.data[67].Type = 6;
JWBBCTR.data[67].Value = (-100);
JWBBCTR.data[68].Type = 6;
JWBBCTR.data[68].Value = (-101);
JWBBCTR.data[69].Type = 6;
JWBBCTR.data[69].Value = (-102);
JWBBCTR.data[70].Type = 6;
JWBBCTR.data[70].Value = (-103);
JWBBCTR.data[71].Type = 6;
 /* line 200: */
JWBBCTR.data[71].Value = (-104);
JWBBCTR.data[72].Type = 6;
JWBBCTR.data[72].Value = (-105);
JWBBCTR.data[73].Type = 6;
JWBBCTR.data[73].Value = (-106);
JWBBCTR.data[74].Type = 6;
JWBBCTR.data[74].Value = (-107);
JWBBCTR.data[75].Type = 6;
JWBBCTR.data[75].Value = (-108);
JWBBCTR.data[76].Type = 6;
JWBBCTR.data[76].Value = (-109);
JWBBCTR.data[77].Type = 6;
JWBBCTR.data[77].Value = (-110);
JWBBCTR.data[78].Type = 6;
JWBBCTR.data[78].Value = (-111);
JWBBCTR.data[79].Type = 6;
 /* line 201: */
JWBBCTR.data[79].Value = (-112);
JWBBCTR.data[80].Type = 6;
JWBBCTR.data[80].Value = (-113);
JWBBCTR.data[81].Type = 6;
JWBBCTR.data[81].Value = (-114);
JWBBCTR.data[82].Type = 6;
JWBBCTR.data[82].Value = (-115);
JWBBCTR.data[83].Type = 6;
JWBBCTR.data[83].Value = (-116);
JWBBCTR.data[84].Type = 6;
JWBBCTR.data[84].Value = (-117);
JWBBCTR.data[85].Type = 6;
JWBBCTR.data[85].Value = (-118);
JWBBCTR.data[86].Type = 6;
JWBBCTR.data[86].Value = (-119);
JWBBCTR.data[87].Type = 6;
 /* line 202: */
JWBBCTR.data[87].Value = (-120);
JWBBCTR.data[88].Type = 6;
JWBBCTR.data[88].Value = (-121);
JWBBCTR.data[89].Type = 6;
JWBBCTR.data[89].Value = (-122);
JWBBCTR.data[90].Type = 6;
JWBBCTR.data[90].Value = (-123);
JWBBCTR.data[91].Type = 20;
JWBBCTR.data[91].Value = 159;
JWBBCTR.data[92].Type = 20;
JWBBCTR.data[92].Value = 175;
JWBBCTR.data[93].Type = 20;
JWBBCTR.data[93].Value = 161;
JWBBCTR.data[94].Type = 20;
JWBBCTR.data[94].Value = 233;
JWBBCTR.data[95].Type = 3;
 /* line 203: */
JWBBCTR.data[95].Value = 36;
JWBBCTR.data[96].Type = 1;
JWBBCTR.data[96].Value = 100;
JWBBCTR.data[97].Type = 3;
JWBBCTR.data[97].Value = 10;
JWBBCTR.data[98].Type = 3;
JWBBCTR.data[98].Value = 11;
JWBBCTR.data[99].Type = 3;
JWBBCTR.data[99].Value = 12;
JWBBCTR.data[100].Type = 3;
JWBBCTR.data[100].Value = 13;
JWBBCTR.data[101].Type = 3;
JWBBCTR.data[101].Value = 14;
JWBBCTR.data[102].Type = 3;
JWBBCTR.data[102].Value = 15;
JWBBCTR.data[103].Type = 3;
 /* line 204: */
JWBBCTR.data[103].Value = 16;
JWBBCTR.data[104].Type = 3;
JWBBCTR.data[104].Value = 17;
JWBBCTR.data[105].Type = 3;
JWBBCTR.data[105].Value = 18;
JWBBCTR.data[106].Type = 3;
JWBBCTR.data[106].Value = 19;
JWBBCTR.data[107].Type = 3;
JWBBCTR.data[107].Value = 20;
JWBBCTR.data[108].Type = 3;
JWBBCTR.data[108].Value = 21;
JWBBCTR.data[109].Type = 3;
JWBBCTR.data[109].Value = 22;
JWBBCTR.data[110].Type = 3;
JWBBCTR.data[110].Value = 23;
JWBBCTR.data[111].Type = 3;
 /* line 205: */
JWBBCTR.data[111].Value = 24;
JWBBCTR.data[112].Type = 3;
JWBBCTR.data[112].Value = 25;
JWBBCTR.data[113].Type = 3;
JWBBCTR.data[113].Value = 26;
JWBBCTR.data[114].Type = 3;
JWBBCTR.data[114].Value = 27;
JWBBCTR.data[115].Type = 3;
JWBBCTR.data[115].Value = 28;
JWBBCTR.data[116].Type = 3;
JWBBCTR.data[116].Value = 29;
JWBBCTR.data[117].Type = 3;
JWBBCTR.data[117].Value = 30;
JWBBCTR.data[118].Type = 3;
JWBBCTR.data[118].Value = 31;
JWBBCTR.data[119].Type = 3;
 /* line 206: */
JWBBCTR.data[119].Value = 32;
JWBBCTR.data[120].Type = 3;
JWBBCTR.data[120].Value = 33;
JWBBCTR.data[121].Type = 3;
JWBBCTR.data[121].Value = 34;
JWBBCTR.data[122].Type = 3;
JWBBCTR.data[122].Value = 35;
JWBBCTR.data[123].Type = 20;
JWBBCTR.data[123].Value = 67;
JWBBCTR.data[124].Type = 20;
JWBBCTR.data[124].Value = 45;
JWBBCTR.data[125].Type = 20;
JWBBCTR.data[125].Value = 68;
JWBBCTR.data[126].Type = 1;
JWBBCTR.data[126].Value = 100;
JWBBCTR.data[127].Type = 1;
JWBBCTR.data[127].Value = 100;
MWBBCTR = A_HIS1ARR(LWBBCTR,JWBBCTR,A68_183 ,128) ;
OWBBCTR = A_R1TRIM(KWBBCTR,(HWBBCTR_charset),A_RTSCRIPT(&(KWBBCTR.dim[0]),&((HWBBCTR_charset).dim[0]),(HWBBCTR_charset).dim[0].lwb,127,0)) ;
PWBBCTR = A_R1TRIM(NWBBCTR,(MWBBCTR),A_RTSCRIPT(&(NWBBCTR.dim[0]),&((MWBBCTR).dim[0]),(MWBBCTR).dim[0].lwb,(MWBBCTR).dim[0].upb,0)) ;
A_R1ASSIGN2(PWBBCTR,OWBBCTR,A68_183 );
 /* line 208: */
 /* line 209: */
SWBBCTR = A_R1TRIM(RWBBCTR,(HWBBCTR_charset),A_RTSCRIPT(&(RWBBCTR.dim[0]),&((HWBBCTR_charset).dim[0]),128,(HWBBCTR_charset).dim[0].upb,1)) ;
TWBBCTR = SWBBCTR.dim[0].upb - SWBBCTR.dim[0].lwb;
QWBBCTR_c = SWBBCTR.data;
for (;TWBBCTR-- >= 0;
(QWBBCTR_c += SWBBCTR.dim[0].stride
) )
{
 /* line 210: */
UWBBCTR.Type = 1;
 /* line 211: */
UWBBCTR.Value = 100;
(*QWBBCTR_c) = UWBBCTR;
}
 /* line 213: */
if ( CQIACTR_dotoption )
{ 
VWBBCTR.Type = 7;
VWBBCTR.Value = 130;
WWBBCTR = (A68_INT)(unsigned char)'.' ;
XWBBCTR = (&A_R1INDEX(HWBBCTR_charset,WWBBCTR)) ;
(*XWBBCTR) = VWBBCTR;
YWBBCTR = A68_TRUE;
} 
else
{ 
YWBBCTR = A68_FALSE;
} 
if ( DQIACTR_quoteoption )
{ 
ZWBBCTR.Type = 8;
ZWBBCTR.Value = 100;
AXBBCTR = (A68_INT)(unsigned char)'\'' ;
BXBBCTR = (&A_R1INDEX(HWBBCTR_charset,AXBBCTR)) ;
(*BXBBCTR) = ZWBBCTR;
CXBBCTR = A68_TRUE;
} 
else
{ 
CXBBCTR = A68_FALSE;
} 
 /* line 214: */
DXBBCTR = (YWBBCTR|CXBBCTR);
if ( DXBBCTR )
{ 
FXBBCTR = (A68_INT)(unsigned char)'Z';
for ( EXBBCTR_i = (A68_INT)(unsigned char)'A';
EXBBCTR_i <= FXBBCTR;
EXBBCTR_i += 1 )
{ 
 /* line 215: */
GXBBCTR.Type = 1;
GXBBCTR.Value = 100;
HXBBCTR = (&A_R1INDEX(HWBBCTR_charset,EXBBCTR_i)) ;
(*HXBBCTR) = GXBBCTR;
}
 /* line 216: */
} 
 /* line 217: */
if ( FQIACTR_tildeoption )
{ 
IXBBCTR.Type = 3;
IXBBCTR.Value = 36;
JXBBCTR = (A68_INT)(unsigned char)'~' ;
KXBBCTR = (&A_R1INDEX(HWBBCTR_charset,JXBBCTR)) ;
(*KXBBCTR) = IXBBCTR;
} 
 /* line 226: */
NXBBCTR_contval = MXBBCTR;
 /* line 228: */
OXBBCTR_upped = A68_FALSE;
 /* line 230: */
 /* line 231: */
QXBBCTR_xtmodulepending = A68_FALSE;
 /* line 233: */
RXBBCTR_timeschecked = A68_FALSE;
 /* line 235: */
 /* line 238: */
 /* line 544: */
WSLACTR_initcoutput(YQIACTR_basenamesourcefile);
 /* line 547: */
 /* line 548: */
if ( IQIACTR_optbooloption )
{ 
UECBCTR.fn.fn_global = QNKACTR_optboollookup;
UECBCTR.nonlocals = A68_NIL;
TECBCTR = UECBCTR;
} 
else
{ 
VECBCTR.fn.fn_global = BNKACTR_lookup;
VECBCTR.nonlocals = A68_NIL;
TECBCTR = VECBCTR;
} 
WECBCTR.fn.fn_global = XVBBCTR_input;
WECBCTR.nonlocals = A68_NIL;
XECBCTR.fn.fn_global = VXBBCTR_output;
XECBCTR.nonlocals = A68_NIL;
YECBCTR.fn.fn_global = XWIACTR_fault;
YECBCTR.nonlocals = A68_NIL;
ZECBCTR.fn.fn_global = KDHACTR_message;
ZECBCTR.nonlocals = A68_NIL;
AFCBCTR.fn.fn_global = IYOACTR_givemoduledetails;
AFCBCTR.nonlocals = A68_NIL;
BFCBCTR.fn.fn_global = NLOACTR_givespec;
BFCBCTR.nonlocals = A68_NIL;
URAACTR_compile(WECBCTR, XECBCTR, YECBCTR, ZECBCTR, AFCBCTR, BFCBCTR, TECBCTR, HWBBCTR_charset);
 /* line 550: */
 /* line 551: */
{ 
 /* line 552: */
 /* line 553: */
 /* line 554: */
XVBBCTR_input(A_ISVEC(EFCBCTR,(&CFCBCTR_wasteline),160,A68_CHAR ), (&DFCBCTR_wastesize));
} 
 /* line 556: */
JWBAOSF_close_file(LVBBCTR_inputfile, RIBAOSF_ignore_msg);
 /* line 558: */
 /* line 559: */
 /* line 560: */
 /* line 564: */
FFCBCTR = (WRIACTR_greatestseverity<=2);
} 
if ( FFCBCTR )
{ 
QRIACTR_linenumber = 1;
 /* line 566: */
GFCBCTR_printstream = GQIACTR_streamoption;
 /* line 572: */
(*RTBBCTR_curstradd) = QSBBCTR_current;
 /* line 574: */
HFCBCTR_level = 0;
 /* line 575: */
IFCBCTR_s = 0;
 /* line 577: */
 /* line 578: */
KFCBCTR = MSBBCTR_streams.dim[0].upb - MSBBCTR_streams.dim[0].lwb;
JFCBCTR_stream = MSBBCTR_streams.data;
for (;KFCBCTR-- >= 0;
(JFCBCTR_stream += MSBBCTR_streams.dim[0].stride
) )
{
 /* line 579: */
 /* line 580: */
MFCBCTR = A_VVAC(LFCBCTR) ;
NFCBCTR = (*(&(JFCBCTR_stream->Streambuffer))) ;
if ( !(! A_VSTRUCTCOMP(NFCBCTR,MFCBCTR)) ) break;
OFCBCTR_streamptr = (&(JFCBCTR_stream->Streamptr));
 /* line 581: */
PFCBCTR_currentbuffer = (&(JFCBCTR_stream->Currentbuffer));
 /* line 582: */
QFCBCTR_streambuffer = (&(JFCBCTR_stream->Streambuffer));
 /* line 583: */
RFCBCTR_buffers = (&(JFCBCTR_stream->Buffers));
 /* line 585: */
SFCBCTR = (*(&A_VINDEX((*RFCBCTR_buffers),(*PFCBCTR_currentbuffer)))) ;
UFCBCTR = (&A_VINDEX((*RFCBCTR_buffers),(*PFCBCTR_currentbuffer))) ;
(*UFCBCTR) = A_VTRIM(TFCBCTR,(SFCBCTR),A_VTSCRIPT(&(TFCBCTR.upb),(SFCBCTR).upb,1,(*OFCBCTR_streamptr)));
 /* line 587: */
 /* line 588: */
 /* line 589: */
if ( GFCBCTR_printstream )
{ 
VFCBCTR_bytesused = 0;
 /* line 590: */
XFCBCTR = (*RFCBCTR_buffers).upb -1;
WFCBCTR_b = (*RFCBCTR_buffers).data;
for (;XFCBCTR-- >= 0;
(WFCBCTR_b++
) )
{
VFCBCTR_bytesused+=(*WFCBCTR_b).upb;
}
 /* line 591: */
 /* line 592: */
 /* line 593: */
ROAAOSF_whole( VFCBCTR_bytesused, (-7), &ZFCBCTR );
ROAAOSF_whole( IFCBCTR_s, 0, &BGCBCTR );
A_CALLPROC(FSIACTR_list,(A_VC_PLUS(A_VC_PLUS(ZFCBCTR,AGCBCTR),BGCBCTR)),(A_VC_PLUS(A_VC_PLUS(ZFCBCTR,AGCBCTR),BGCBCTR),(FSIACTR_list).nonlocals));
} 
 /* line 594: */
CGCBCTR = (*PFCBCTR_currentbuffer) = 1 ;
(*QFCBCTR_streambuffer) = (*(&A_VINDEX((*RFCBCTR_buffers),CGCBCTR)));
 /* line 595: */
(*OFCBCTR_streamptr) = 0;
 /* line 596: */
 /* line 597: */
IFCBCTR_s+=1;
}
 /* line 599: */
QSBBCTR_current = (*(&A_R1INDEX(MSBBCTR_streams,HFCBCTR_level)));
 /* line 601: */
 /* line 605: */
 /* line 609: */
 /* line 610: */
 /* line 622: */
 /* line 625: */
 /* line 627: */
 /* line 628: */
 /* line 635: */
SGCBCTR.fn.fn_global = LGCBCTR_nextint;
SGCBCTR.nonlocals = A68_NIL;
RGCBCTR_next = (SGCBCTR);
 /* line 637: */
 /* line 638: */
 /* line 639: */
 /* line 646: */
XGCBCTR_line_start = 0;
 /* line 647: */
YGCBCTR_line_length = 0;
 /* line 648: */
ZGCBCTR_statement_number = 0;
 /* line 650: */
AHCBCTR_hundred_counter = (-1);
 /* line 652: */
 /* line 653: */
 /* line 654: */
 /* line 708: */
 /* line 756: */
 /* line 760: */
 /* line 761: */
 /* line 961: */
 /* line 962: */
 /* line 964: */
if ( (WRIACTR_greatestseverity<=2) )
{ 
 /* line 966: */
XRCBCTR.fn.fn_global = GKCBCTR_nextstreamimperative;
XRCBCTR.nonlocals = A68_NIL;
EXABCTR_translator(XRCBCTR, (&CSBBCTR_xsizes), DZOACTR_keptdecnos);
} 
 /* line 968: */
 /* line 969: */
 /* line 972: */
if ( (WRIACTR_greatestseverity<=2) )
{ 
PIMACTR_write_cfile_uname((*(&((&BYIACTR_config_info)->Nameseed))));
 /* line 976: */
CSCBCTR = ASCBCTR ;
YRCBCTR.data[0] = A_UNITE(BSCBCTR,mode2,2,CSCBCTR);
YRCBCTR.data[1] = A_UNITE(DSCBCTR,mode4,4,EIAACTR_cnewline);
VBMACTR_writecstream(A_HISVEC(ESCBCTR,YRCBCTR,2,A68_213 ), NQLACTR_preamblestream);
 /* line 979: */
QPPACTR_declareusedids();
 /* line 1009: */
JSCBCTR = HSCBCTR ;
FSCBCTR.data[0] = A_UNITE(ISCBCTR,mode2,2,JSCBCTR);
 /* line 1010: */
FSCBCTR.data[1] = A_UNITE(KSCBCTR,mode2,2,XQIACTR_sourcefilename);
OSCBCTR = MSCBCTR ;
FSCBCTR.data[2] = A_UNITE(NSCBCTR,mode2,2,OSCBCTR);
FSCBCTR.data[3] = A_UNITE(PSCBCTR,mode4,4,EIAACTR_cnewline);
VBMACTR_writecstream(A_HISVEC(QSCBCTR,FSCBCTR,4,A68_213 ), WQLACTR_codestream(0));
 /* line 1012: */
VBMACTR_writecstream(A_HVEC(SSCBCTR,A_UNITE(RSCBCTR,mode3,3,OQLACTR_modesstream),A68_213 ), NQLACTR_preamblestream);
 /* line 1013: */
VBMACTR_writecstream(A_HVEC(USCBCTR,A_UNITE(TSCBCTR,mode3,3,PQLACTR_importsstream),A68_213 ), OQLACTR_modesstream);
 /* line 1014: */
WSCBCTR = TQLACTR_nonlocdecstream(0) ;
VBMACTR_writecstream(A_HVEC(XSCBCTR,A_UNITE(VSCBCTR,mode3,3,WSCBCTR),A68_213 ), PQLACTR_importsstream);
 /* line 1015: */
VBMACTR_writecstream(A_HVEC(ZSCBCTR,A_UNITE(YSCBCTR,mode3,3,QQLACTR_externstream),A68_213 ), TQLACTR_nonlocdecstream(YNLACTR_highestlevel));
 /* line 1016: */
BTCBCTR = WQLACTR_codestream(YNLACTR_highestlevel) ;
VBMACTR_writecstream(A_HVEC(CTCBCTR,A_UNITE(ATCBCTR,mode3,3,BTCBCTR),A68_213 ), QQLACTR_externstream);
 /* line 1018: */
 /* line 1019: */
 /* line 1020: */
if ( (YNLACTR_highestlevel>0) )
{ 
 /* line 1021: */
ETCBCTR = (YNLACTR_highestlevel-1);
for ( DTCBCTR_level = 0;
DTCBCTR_level <= ETCBCTR;
DTCBCTR_level += 1 )
{ 
 /* line 1022: */
GTCBCTR = TQLACTR_nonlocdecstream((DTCBCTR_level+1)) ;
VBMACTR_writecstream(A_HVEC(HTCBCTR,A_UNITE(FTCBCTR,mode3,3,GTCBCTR),A68_213 ), TQLACTR_nonlocdecstream(DTCBCTR_level));
 /* line 1023: */
 /* line 1024: */
JTCBCTR = WQLACTR_codestream(DTCBCTR_level) ;
VBMACTR_writecstream(A_HVEC(KTCBCTR,A_UNITE(ITCBCTR,mode3,3,JTCBCTR),A68_213 ), WQLACTR_codestream((DTCBCTR_level+1)));
}
 /* line 1025: */
} 
 /* line 1027: */
BCMACTR_closecoutput();
 /* line 1029: */
 /* line 1030: */
 /* line 1031: */
BLMACTR_closedownuniquenameserver();
} 
else
{ 
 /* line 1032: */
A_CALLPROC(PSLACTR_purgeoutputfiles,(),((PSLACTR_purgeoutputfiles).nonlocals));
} 
} 
 /* line 1034: */
KSIACTR_finishmessage();
 /* line 1036: */
 /* line 1037: */
 /* line 1038: */
if ( (WRIACTR_greatestseverity>2) )
{ 
 /* line 1040: */
 /* line 1041: */
GTIACTR_abort();
} 
} 
A_PROC_EXIT(MAIN);
#ifdef A_postlude
A_postlude;
#endif
return(0);
} 
#undef NL
/* end of translation of a68toc.a68 */
