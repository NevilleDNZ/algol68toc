/* UNAME:VVKACTR */
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
struct A68t104{
A68_INT  Rdenno;
A_PAD_INT(PAD_16)
A68_INT  Mode;
A_PAD_INT(PAD_17)
A68_INT  Nods;
A_PAD_INT(PAD_18)
A68_INT  Deflex;
A_PAD_INT(PAD_19)
};
typedef struct A68t104  A68_104 ;    /* STRUCT(INT,INT,INT,INT)  */
A_ISTRUCT(A68_CHAR ,32,A68t106);
typedef struct A68t106  A68_106 ;    /* STRUCT 32 CHAR */
struct A68t105{
struct A68t106  N;
A_PAD_ISTRUCT(A68_106 ,PAD_20)
struct A68t106  F;
A_PAD_ISTRUCT(A68_106 ,PAD_21)
A68_INT  Level;
A_PAD_INT(PAD_22)
};
typedef struct A68t105  A68_105 ;    /* STRUCT(MODE106,MODE106,INT)  */
struct A68t107{
struct A68t106  Name;
A_PAD_ISTRUCT(A68_106 ,PAD_23)
A68_INT  Decno;
A_PAD_INT(PAD_24)
A68_INT  Level;
A_PAD_INT(PAD_25)
A68_INT  Mode;
A_PAD_INT(PAD_26)
A68_INT  Scope;
A_PAD_INT(PAD_27)
struct A68t107 * Rest;
};
typedef struct A68t107  A68_107 ;    /* STRUCT(MODE106,INT,INT,INT,INT,REF MODE107)  */
struct A68t108{
A68_INT  Rdenno;
A_PAD_INT(PAD_28)
A68_INT  Imode;
A_PAD_INT(PAD_29)
A68_INT  Length;
A_PAD_INT(PAD_30)
A68_INT  Deflex;
A_PAD_INT(PAD_31)
};
typedef struct A68t108  A68_108 ;    /* STRUCT(INT,INT,INT,INT)  */
struct A68t117{
A68_INT  Mode;
A_PAD_INT(PAD_32)
};
typedef struct A68t117  A68_117 ;    /* STRUCT(INT)  */
struct A68t109 { A68_INT mode; union {
A68_INT  mode1;
struct A68t110 * mode2;
struct A68t111 * mode3;
struct A68t112 * mode4;
struct A68t108 * mode5;
struct A68t113 * mode6;
struct A68t114 * mode7;
struct A68t104 * mode8;
struct A68t115 * mode9;
struct A68t116 * mode10;
struct A68t117  mode11;
} data; };
typedef struct A68t109  A68_109 ;    /* UNION(INT,REF MODE110,REF MODE111,REF MODE112,REF MODE108,REF MODE113,REF MODE114,REF MODE104,REF MODE115,REF MODE116,MODE117)  */
struct A68t110{
A68_INT  Rdenno;
A_PAD_INT(PAD_33)
struct A68t121 * Modelist;
};
typedef struct A68t110  A68_110 ;    /* STRUCT(INT,REF MODE121)  */
struct A68t111{
A68_INT  Deproc;
A_PAD_INT(PAD_34)
struct A68t121 * Pars;
};
typedef struct A68t111  A68_111 ;    /* STRUCT(INT,REF MODE121)  */
struct A68t112{
A68_INT  Rdenno;
A_PAD_INT(PAD_35)
A68_INT  Deflex;
A_PAD_INT(PAD_36)
struct A68t120 * Sels;
};
typedef struct A68t112  A68_112 ;    /* STRUCT(INT,INT,REF MODE120)  */
struct A68t113{
A68_INT  Deproc;
A_PAD_INT(PAD_37)
};
typedef struct A68t113  A68_113 ;    /* STRUCT(INT)  */
struct A68t114{
A68_INT  Rdenno;
A_PAD_INT(PAD_38)
A68_INT  Vecmode;
A_PAD_INT(PAD_39)
A68_INT  Deflex;
A_PAD_INT(PAD_40)
};
typedef struct A68t114  A68_114 ;    /* STRUCT(INT,INT,INT)  */
struct A68t115{
A68_INT  Mode;
A_PAD_INT(PAD_41)
struct A68t119 * Stenlist;
};
typedef struct A68t115  A68_115 ;    /* STRUCT(INT,REF MODE119)  */
struct A68t116{
A68_INT  Mode;
A_PAD_INT(PAD_42)
A68_INT  Modeproc;
A_PAD_INT(PAD_43)
struct A68t118 * El;
};
typedef struct A68t116  A68_116 ;    /* STRUCT(INT,INT,REF MODE118)  */
struct A68t118{
struct A68t116 * Am;
struct A68t118 * Rest;
};
typedef struct A68t118  A68_118 ;    /* STRUCT(REF MODE116,REF MODE118)  */
struct A68t119{
A68_INT  Mode;
A_PAD_INT(PAD_44)
A68_INT  Rdenno;
A_PAD_INT(PAD_45)
struct A68t119 * Rest;
};
typedef struct A68t119  A68_119 ;    /* STRUCT(INT,INT,REF MODE119)  */
struct A68t120{
A68_INT  Mode;
A_PAD_INT(PAD_46)
A68_INT  Fieldno;
A_PAD_INT(PAD_47)
struct A68t106  Name;
A_PAD_ISTRUCT(A68_106 ,PAD_48)
struct A68t120 * Rest;
};
typedef struct A68t120  A68_120 ;    /* STRUCT(INT,INT,MODE106,REF MODE120)  */
struct A68t121{
A68_INT  Mode;
A_PAD_INT(PAD_49)
struct A68t121 * Rest;
};
typedef struct A68t121  A68_121 ;    /* STRUCT(INT,REF MODE121)  */
A_ISTRUCT(A68_CHAR ,7,A68t122);
typedef struct A68t122  A68_122 ;    /* STRUCT 7 CHAR */
A_VECTOR(struct A68t126 ,A68t125);
typedef struct A68t125  A68_125 ;    /* VECTOR [] MODE126 */
A_VECTOR(struct A68t105 ,A68t132);
typedef struct A68t132  A68_132 ;    /* VECTOR [] MODE105 */
struct A68t131 { A68_INT mode; union {
A68_VC  mode1;
struct A68t132  mode2;
} data; };
typedef struct A68t131  A68_131 ;    /* UNION(REF MODE26,REF MODE132)  */
struct A68t127{
struct A68t106  F;
A_PAD_ISTRUCT(A68_106 ,PAD_50)
A68_INT  No;
A_PAD_INT(PAD_51)
A68_INT  Nl;
A_PAD_INT(PAD_52)
A68_INT  Ng;
A_PAD_INT(PAD_53)
struct A68t131  U;
};
typedef struct A68t127  A68_127 ;    /* STRUCT(MODE106,INT,INT,INT,MODE131)  */
A_VECTOR(struct A68t130 ,A68t128);
typedef struct A68t128  A68_128 ;    /* VECTOR [] MODE130 */
struct A68t130{
struct A68t122  Prefix;
A_PAD_ISTRUCT(A68_122 ,PAD_54)
A68_BOOL  Optimised;
A_PAD_BOOL(PAD_55)
A68_BOOL  Iddec;
A_PAD_BOOL(PAD_56)
A68_BOOL  Globalproc;
A_PAD_BOOL(PAD_57)
A68_BOOL  Keptgenproc;
A_PAD_BOOL(PAD_58)
A68_BOOL  Forceuse;
A_PAD_BOOL(PAD_59)
A68_VC  Definition;
A68_VC  Rhs;
};
typedef struct A68t130  A68_130 ;    /* STRUCT(MODE122,BOOL,BOOL,BOOL,BOOL,BOOL,REF MODE26,REF MODE26)  */
A_VECTOR(struct A68t122 ,A68t129);
typedef struct A68t129  A68_129 ;    /* VECTOR [] MODE122 */
struct A68t126{
struct A68t127  Xs;
struct A68t122  Ys;
A_PAD_ISTRUCT(A68_122 ,PAD_60)
A68_LINT  Timeoflastchange;
A_PAD_LINT(PAD_61)
struct A68t128  Keptinfo;
struct A68t129  Cnames;
};
typedef struct A68t126  A68_126 ;    /* STRUCT(MODE127,MODE122,LONG INT,REF MODE128,REF MODE129)  */
struct A68t124{
struct A68t122  Uname;
A_PAD_ISTRUCT(A68_122 ,PAD_62)
struct A68t122  Lname;
A_PAD_ISTRUCT(A68_122 ,PAD_63)
struct A68t122  Gname;
A_PAD_ISTRUCT(A68_122 ,PAD_64)
struct A68t125  Specs;
};
typedef struct A68t124  A68_124 ;    /* STRUCT(MODE122,MODE122,MODE122,REF MODE125)  */
struct A68t123{
struct A68t106  Name;
A_PAD_ISTRUCT(A68_106 ,PAD_65)
struct A68t124  Ym;
struct A68t106  Formal;
A_PAD_ISTRUCT(A68_106 ,PAD_66)
struct A68t122  Ys;
A_PAD_ISTRUCT(A68_122 ,PAD_67)
A68_INT  Level;
A_PAD_INT(PAD_68)
A68_INT  Ownlevel;
A_PAD_INT(PAD_69)
};
typedef struct A68t123  A68_123 ;    /* STRUCT(MODE106,MODE124,MODE106,MODE122,INT,INT)  */
struct A68t133{
struct A68t106  Name;
A_PAD_ISTRUCT(A68_106 ,PAD_70)
struct A68t105  L;
struct A68t105  G;
A68_INT  Type;
A_PAD_INT(PAD_71)
};
typedef struct A68t133  A68_133 ;    /* STRUCT(MODE106,MODE105,MODE105,INT)  */
struct A68t134{
A68_INT  Norden;
A_PAD_INT(PAD_72)
A68_INT  Nomodes;
A_PAD_INT(PAD_73)
A68_INT  Nolabs;
A_PAD_INT(PAD_74)
A68_INT  Nodecnos;
A_PAD_INT(PAD_75)
A68_INT  Nomodules;
A_PAD_INT(PAD_76)
A68_INT  Nolibinds;
A_PAD_INT(PAD_77)
};
typedef struct A68t134  A68_134 ;    /* STRUCT(INT,INT,INT,INT,INT,INT)  */
struct A68t135{
A68_INT  Type;
A_PAD_INT(PAD_78)
A68_INT  Moduleno;
A_PAD_INT(PAD_79)
struct A68t106  Name;
A_PAD_ISTRUCT(A68_106 ,PAD_80)
struct A68t124  Ym;
};
typedef struct A68t135  A68_135 ;    /* STRUCT(INT,INT,MODE106,MODE124)  */
struct A68t136{
struct A68t133  Xmi;
struct A68t124  Ym;
};
typedef struct A68t136  A68_136 ;    /* STRUCT(MODE133,MODE124)  */
struct A68t137{
struct A68t127  Xs;
struct A68t122  Ys;
A_PAD_ISTRUCT(A68_122 ,PAD_81)
};
typedef struct A68t137  A68_137 ;    /* STRUCT(MODE127,MODE122)  */

A_PROCEDURE(A68_VOID ,A68t138,(A68_VC ,A68_BOOL ),(A68_VC ,A68_BOOL ,void *));
typedef struct A68t138  A68_138 ;    /* PROC(MODE26,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t139,(A68_VC ,A68_INT ),(A68_VC ,A68_INT ,void *));
typedef struct A68t139  A68_139 ;    /* PROC(MODE26,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t140,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t140  A68_140 ;    /* PROC(INT) REF MODE26 */
struct A68t142 ;

A_PROCEDURE(A68_VOID ,A68t141,(A68_INT ,struct A68t142 ),(A68_INT ,struct A68t142 ,void *));
typedef struct A68t141  A68_141 ;    /* PROC(INT,MODE142) VOID */
A_ROW(A68_VC ,A68t142,1);
typedef struct A68t142  A68_142 ;    /* [] MODE26 */

A_PROCEDURE(A68_BITS ,A68t143,(void),(void *));
typedef struct A68t143  A68_143 ;    /* PROC BITS */
struct A68t144{
A68_INT  Cfile;
A_PAD_INT(PAD_82)
};
typedef struct A68t144  A68_144 ;    /* STRUCT(INT)  */
struct A68t145{
A68_INT  Seedfile;
A_PAD_INT(PAD_83)
};
typedef struct A68t145  A68_145 ;    /* STRUCT(INT)  */
struct A68t146 { A68_INT mode; union {
struct A68t144  mode1;
struct A68t145  mode2;
struct A68t122  mode3;
} data; };
typedef struct A68t146  A68_146 ;    /* UNION(MODE144,MODE145,MODE122,VOID)  */
struct A68t147{
A68_VC  Version;
A68_LINT  Translationtime;
A_PAD_LINT(PAD_84)
A68_VC  Sourcefile;
struct A68t122  Nameseed;
A_PAD_ISTRUCT(A68_122 ,PAD_85)
struct A68t146  Nameseedorigin;
struct A68t148 * Used_modules;
A68_VC  Commandline;
struct A68t149 * Environment;
};
typedef struct A68t147  A68_147 ;    /* STRUCT(REF MODE26,LONG INT,REF MODE26,MODE122,MODE146,REF MODE148,REF MODE26,REF MODE149)  */
struct A68t148{
A68_VC  Modinfo_file;
struct A68t148 * Next;
};
typedef struct A68t148  A68_148 ;    /* STRUCT(REF MODE26,REF MODE148)  */
struct A68t149{
A68_VC  Env_name;
A68_VC  Env_value;
struct A68t149 * Next;
};
typedef struct A68t149  A68_149 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE149)  */
struct A68t151 ;

A_PROCEDURE(struct A68t59 *,A68t150,(A68_VC ,struct A68t151 *,A68_VC *),(A68_VC ,struct A68t151 *,A68_VC *,void *));
typedef struct A68t150  A68_150 ;    /* PROC(MODE26,REF MODE151,REF REF MODE26) REF MODE59 */
struct A68t151{
A68_VC  Dir;
struct A68t151 * Next;
};
typedef struct A68t151  A68_151 ;    /* STRUCT(REF MODE26,REF MODE151)  */

A_PROCEDURE(A68_BOOL ,A68t152,(A68_INT ,A68_VC ),(A68_INT ,A68_VC ,void *));
typedef struct A68t152  A68_152 ;    /* PROC(INT,MODE26) BOOL */

A_PROCEDURE(A68_VOID ,A68t153,(A68_BOOL ,A68_VC *),(A68_BOOL ,A68_VC *,void *));
typedef struct A68t153  A68_153 ;    /* PROC(BOOL) MODE26 */

A_PROCEDURE(A68_VOID ,A68t154,(struct A68t96 ),(struct A68t96 ,void *));
typedef struct A68t154  A68_154 ;    /* PROC(MODE96) VOID */

A_PROCEDURE(A68_VOID ,A68t155,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t155  A68_155 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,64,A68t156);
typedef struct A68t156  A68_156 ;    /* STRUCT 64 CHAR */
struct A68t157{
A68_VC  Symbol;
struct A68t106 * Module;
struct A68t157 * Next;
};
typedef struct A68t157  A68_157 ;    /* STRUCT(REF MODE26,REF MODE106,REF MODE157)  */

A_PROCEDURE(A68_VOID ,A68t158,(A68_INT ,A68_VC ),(A68_INT ,A68_VC ,void *));
typedef struct A68t158  A68_158 ;    /* PROC(INT,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,9,A68t159);
typedef struct A68t159  A68_159 ;    /* STRUCT 9 CHAR */
A_ISTRUCT(A68_CHAR ,10,A68t160);
typedef struct A68t160  A68_160 ;    /* STRUCT 10 CHAR */
A_ISTRUCT(A68_CHAR ,3,A68t161);
typedef struct A68t161  A68_161 ;    /* STRUCT 3 CHAR */

A_PROCEDURE(A68_VOID ,A68t162,(A68_VC ,struct A68t158 ),(A68_VC ,struct A68t158 ,void *));
typedef struct A68t162  A68_162 ;    /* PROC(MODE26,MODE158) VOID */
A_ISTRUCT(A68_CHAR ,16,A68t163);
typedef struct A68t163  A68_163 ;    /* STRUCT 16 CHAR */
A_ISTRUCT(A68_CHAR ,13,A68t164);
typedef struct A68t164  A68_164 ;    /* STRUCT 13 CHAR */
A_ISTRUCT(A68_CHAR ,8,A68t165);
typedef struct A68t165  A68_165 ;    /* STRUCT 8 CHAR */
A_ISTRUCT(A68_CHAR ,15,A68t166);
typedef struct A68t166  A68_166 ;    /* STRUCT 15 CHAR */
A_ISTRUCT(A68_CHAR ,11,A68t167);
typedef struct A68t167  A68_167 ;    /* STRUCT 11 CHAR */
A_ISTRUCT(A68_CHAR ,5,A68t168);
typedef struct A68t168  A68_168 ;    /* STRUCT 5 CHAR */
A_ISTRUCT(A68_CHAR ,6,A68t169);
typedef struct A68t169  A68_169 ;    /* STRUCT 6 CHAR */
A_ISTRUCT(A68_CHAR ,12,A68t170);
typedef struct A68t170  A68_170 ;    /* STRUCT 12 CHAR */
A_ISTRUCT(A68_CHAR ,14,A68t171);
typedef struct A68t171  A68_171 ;    /* STRUCT 14 CHAR */
A_ISTRUCT(A68_CHAR ,17,A68t172);
typedef struct A68t172  A68_172 ;    /* STRUCT 17 CHAR */

A_PROCEDURE(A68_VOID ,A68t173,(A68_VC ,struct A68t106 *),(A68_VC ,struct A68t106 *,void *));
typedef struct A68t173  A68_173 ;    /* PROC(MODE26,REF MODE106) VOID */

A_PROCEDURE(A68_VOID ,A68t174,(struct A68t106 ,struct A68t59 *,A68_BOOL ,struct A68t136 *),(struct A68t106 ,struct A68t59 *,A68_BOOL ,struct A68t136 *,void *));
typedef struct A68t174  A68_174 ;    /* PROC(MODE106,REF MODE59,BOOL) MODE136 */

A_PROCEDURE(A68_VOID ,A68t175,(struct A68t174 ),(struct A68t174 ,void *));
typedef struct A68t175  A68_175 ;    /* PROC(MODE174) VOID */
A_ISTRUCT(A68_CHAR ,27,A68t176);
typedef struct A68t176  A68_176 ;    /* STRUCT 27 CHAR */
A_ISTRUCT(A68_CHAR ,2,A68t177);
typedef struct A68t177  A68_177 ;    /* STRUCT 2 CHAR */

A_PROCEDURE(A68_VOID ,A68t178,(struct A68t157 *),(struct A68t157 *,void *));
typedef struct A68t178  A68_178 ;    /* PROC(REF MODE157) VOID */
A_ISTRUCT(A68_CHAR ,18,A68t179);
typedef struct A68t179  A68_179 ;    /* STRUCT 18 CHAR */

A_PROCEDURE(struct A68t106 ,A68t180,(struct A68t106 ,struct A68t157 *),(struct A68t106 ,struct A68t157 *,void *));
typedef struct A68t180  A68_180 ;    /* PROC(MODE106,REF MODE157) MODE106 */

A_PROCEDURE(struct A68t106 ,A68t181,(struct A68t106 ,A68_INT ,struct A68t174 ),(struct A68t106 ,A68_INT ,struct A68t174 ,void *));
typedef struct A68t181  A68_181 ;    /* PROC(MODE106,INT,MODE174) MODE106 */

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


/* --- Imports from incinstallation --- */
#define XDAACTR_maxchar 256
/* --- End of imports from incinstallation --- */


/* --- Imports from environment --- */
extern A68_VOID  OWIACTR_pwarning(A68_INT ,struct A68t142 );
extern A68_99  FSIACTR_list;
extern A68_59 * KHJACTR_find_and_open_file(A68_VC ,struct A68t151 *,A68_VC *);
extern A68_151 * FRIACTR_library_directory;
extern A68_151 * CRIACTR_nil_dirlist;
/* --- End of imports from environment --- */


/* --- Imports from osif --- */
#include <errno.h>

#define RCBAOSF_errno errno
extern A68_54  RIBAOSF_ignore_msg;
extern A68_59 * TSBAOSF_nil_file;
extern A68_BITS * SRBAOSF_null_dirptr;
extern A68_BITS * HCCAOSF_open_directory(A68_VC ,struct A68t54 );
extern A68_VOID  QCCAOSF_close_directory(A68_BITS *,struct A68t54 );
extern A68_VOID  WCCAOSF_get_next_dir_entry(A68_BITS *,struct A68t54 ,A68_VC *);
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
/* --- End of imports from usefulops --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void BCHACTR(void);   /* moduletracer */
extern void ODAACTR(void);   /* incinstallation */
extern void HPIACTR(void);   /* environment */
extern void WSCAOSF(void);   /* osif */
extern void IKAAOSF(void);   /* usefulops */
/* --- end of DECS initialisation functions --- */
static A68_156   ZVKACTR = {"$Id: liblookup.c,v 1.5.2.4 2004/09/27 03:04:18 teshields Exp $"}; 
A_GISVEC(A68_VC ,AWKACTR,ZVKACTR,64)
#define BWKACTR_nilmap (A68_157 *)A68_NIL
static A68_106   CWKACTR = {"                                "}; 
static A68_106  DWKACTR_nullid;
static A68_157 * EWKACTR_idtable;
static A68_157 * FWKACTR_compoundtable;
static A68_157 * GWKACTR_boldtable;
static A68_159   KWKACTR = {"liblookup"}; 
A_GISVEC(A68_VC ,LWKACTR,KWKACTR,9)
static A68_160   MWKACTR = {"LIBLOOKUP("}; 
static A68_161   NWKACTR = {"): "}; 
A_GISVEC(A68_VC ,OWKACTR,MWKACTR,10)
A_GISVEC(A68_VC ,QWKACTR,NWKACTR,3)
static A68_163   BXKACTR = {"Decoded spec is:"}; 
A_GISVEC(A68_VC ,CXKACTR,BXKACTR,16)
static A68_164   OXKACTR = {"IDENTIFIER: \""}; 
static A68_122   PXKACTR = {"\" mode="}; 
A_GISVEC(A68_VC ,QXKACTR,OXKACTR,13)
A_GISVEC(A68_VC ,RXKACTR,PXKACTR,7)
static A68_165   GYKACTR = {"BIVAL: \""}; 
static A68_122   HYKACTR = {"\" mode="}; 
static A68_122   IYKACTR = {" bival="}; 
A_GISVEC(A68_VC ,JYKACTR,GYKACTR,8)
A_GISVEC(A68_VC ,KYKACTR,HYKACTR,7)
A_GISVEC(A68_VC ,MYKACTR,IYKACTR,7)
static A68_163   XYKACTR = {" has gen routine"}; 
A_GISVEC(A68_VC ,ZYKACTR,XYKACTR,16)
static A68_166   AZKACTR = {" no gen routine"}; 
A_GISVEC(A68_VC ,BZKACTR,AZKACTR,15)
static A68_167   DZKACTR = {"modename: \""}; 
static A68_122   EZKACTR = {"\" mode="}; 
A_GISVEC(A68_VC ,FZKACTR,DZKACTR,11)
A_GISVEC(A68_VC ,GZKACTR,EZKACTR,7)
static A68_167   AALACTR = {"OPERATOR: \""}; 
static A68_122   BALACTR = {"\" prio="}; 
static A68_168   CALACTR = {" lhs="}; 
static A68_168   DALACTR = {" rhs="}; 
static A68_168   EALACTR = {" res="}; 
A_GISVEC(A68_VC ,FALACTR,AALACTR,11)
A_GISVEC(A68_VC ,GALACTR,BALACTR,7)
A_GISVEC(A68_VC ,IALACTR,CALACTR,5)
A_GISVEC(A68_VC ,KALACTR,DALACTR,5)
A_GISVEC(A68_VC ,MALACTR,EALACTR,5)
static A68_122   KBLACTR = {"BIOP: \""}; 
static A68_122   LBLACTR = {"\" prio="}; 
static A68_168   MBLACTR = {" lhs="}; 
static A68_168   NBLACTR = {" rhs="}; 
static A68_168   OBLACTR = {" res="}; 
static A68_169   PBLACTR = {" biop="}; 
A_GISVEC(A68_VC ,QBLACTR,KBLACTR,7)
A_GISVEC(A68_VC ,RBLACTR,LBLACTR,7)
A_GISVEC(A68_VC ,TBLACTR,MBLACTR,5)
A_GISVEC(A68_VC ,VBLACTR,NBLACTR,5)
A_GISVEC(A68_VC ,XBLACTR,OBLACTR,5)
A_GISVEC(A68_VC ,ZBLACTR,PBLACTR,6)
static A68_167   JCLACTR = {"proc: mode="}; 
static A68_168   KCLACTR = {" res="}; 
A_GISVEC(A68_VC ,LCLACTR,JCLACTR,11)
A_GISVEC(A68_VC ,NCLACTR,KCLACTR,5)
static A68_170   YCLACTR = {"procp: mode="}; 
static A68_168   ZCLACTR = {" res="}; 
static A68_165   ADLACTR = {" params="}; 
A_GISVEC(A68_VC ,BDLACTR,YCLACTR,12)
A_GISVEC(A68_VC ,DDLACTR,ZCLACTR,5)
A_GISVEC(A68_VC ,FDLACTR,ADLACTR,8)
static A68_170   MDLACTR = {"union: mode="}; 
static A68_165   NDLACTR = {" nmodes="}; 
A_GISVEC(A68_VC ,ODLACTR,MDLACTR,12)
A_GISVEC(A68_VC ,QDLACTR,NDLACTR,8)
static A68_164   ZDLACTR = {"struct: mode="}; 
static A68_159   AELACTR = {" nfields="}; 
A_GISVEC(A68_VC ,BELACTR,ZDLACTR,13)
A_GISVEC(A68_VC ,DELACTR,AELACTR,9)
static A68_171   RELACTR = {"istruct: mode="}; 
static A68_160   SELACTR = {" elemmode="}; 
static A68_159   TELACTR = {" noelems="}; 
A_GISVEC(A68_VC ,UELACTR,RELACTR,14)
A_GISVEC(A68_VC ,WELACTR,SELACTR,10)
A_GISVEC(A68_VC ,YELACTR,TELACTR,9)
static A68_159   IFLACTR = {"non-flex "}; 
A_GISVEC(A68_VC ,KFLACTR,IFLACTR,9)
static A68_168   LFLACTR = {"flex "}; 
A_GISVEC(A68_VC ,MFLACTR,LFLACTR,5)
static A68_164   OFLACTR = {"vector: mode="}; 
static A68_160   PFLACTR = {" elemmode="}; 
A_GISVEC(A68_VC ,QFLACTR,OFLACTR,13)
A_GISVEC(A68_VC ,SFLACTR,PFLACTR,10)
static A68_159   DGLACTR = {"non-flex "}; 
A_GISVEC(A68_VC ,FGLACTR,DGLACTR,9)
static A68_168   GGLACTR = {"flex "}; 
A_GISVEC(A68_VC ,HGLACTR,GGLACTR,5)
static A68_170   JGLACTR = {"array: mode="}; 
static A68_160   KGLACTR = {" elemmode="}; 
static A68_169   LGLACTR = {" dims="}; 
A_GISVEC(A68_VC ,MGLACTR,JGLACTR,12)
A_GISVEC(A68_VC ,OGLACTR,KGLACTR,10)
A_GISVEC(A68_VC ,QGLACTR,LGLACTR,6)
static A68_166   AHLACTR = {"straight: mode="}; 
static A68_160   BHLACTR = {" elemmode="}; 
A_GISVEC(A68_VC ,CHLACTR,AHLACTR,15)
A_GISVEC(A68_VC ,EHLACTR,BHLACTR,10)
static A68_172   GHLACTR = {"   invalid type: "}; 
A_GISVEC(A68_VC ,HHLACTR,GHLACTR,17)
static A68_164   MHLACTR = {"process spec("}; 
A_GISVEC(A68_VC ,NHLACTR,MHLACTR,13)
static A68_BOOL  ZJLACTR_initialised;
static A68_176   FKLACTR = {"Initialising library lookup"}; 
A_GISVEC(A68_VC ,GKLACTR,FKLACTR,27)
static A68_166   MKLACTR = {"add_lib_module("}; 
A_GISVEC(A68_VC ,NKLACTR,MKLACTR,15)
static A68_177   QLLACTR = {".m"}; 
A_GISVEC(A68_VC ,SLLACTR,QLLACTR,2)
static A68_159   TLLACTR = {"liblookup"}; 
A_GISVEC(A68_VC ,ULLACTR,TLLACTR,9)
static A68_168   ZLLACTR = {" --> "}; 
A_GISVEC(A68_VC ,AMLACTR,ZLLACTR,5)
static A68_170   EMLACTR = {"id table is:"}; 
A_GISVEC(A68_VC ,FMLACTR,EMLACTR,12)
static A68_179   GMLACTR = {"compound table is:"}; 
A_GISVEC(A68_VC ,HMLACTR,GMLACTR,18)
static A68_171   IMLACTR = {"bold table is:"}; 
A_GISVEC(A68_VC ,JMLACTR,IMLACTR,14)
static A68_167   TMLACTR = {"looking up "}; 
A_GISVEC(A68_VC ,UMLACTR,TMLACTR,11)
static A68_160   WMLACTR = {" not found"}; 
A_GISVEC(A68_VC ,XMLACTR,WMLACTR,10)
static A68_160   ZMLACTR = {" found in "}; 
A_GISVEC(A68_VC ,ANLACTR,ZMLACTR,10)
typedef struct   /* env of non-global proc */
{
A68_174  Unpackmodinfo;
} LKLACTR_add_lib_module;

A_STATIC A68_VOID  JWKACTR_debugmessage(A68_INT  Level, A68_VC  M);

A_STATIC A68_INT  SWKACTR_vtoi(A68_VC  V);

A68_VOID  ZWKACTR_decodespec(A68_VC  Spec, A68_158  Debugmessage);

A_STATIC A68_VOID  LHLACTR_processspec(A68_VC  Spec, A68_106 * Currentmodule);

A_STATIC A68_VOID  BKLACTR_init_liblookup(A68_174  Unpackmodinfo);

A_STATIC A68_VOID  KKLACTR_add_lib_module(A68_VC  Filename, void *NonLocals);

A_STATIC A68_VOID  XLLACTR_printmap(A68_157 * Map);

A_STATIC A68_106  MMLACTR_lookup_in_table(A68_106  Id, A68_157 * Map);

A68_106  HNLACTR_lookup_library(A68_106  Id, A68_INT  Type, A68_174  Unpackmodinfo);

A_STATIC A68_VOID  KKLACTR_add_lib_module(A68_VC  Filename, void *NonLocals)
#define NL(x) (((LKLACTR_add_lib_module *)NonLocals)->x)
{ 
A68_VC  OKLACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  PKLACTR_fullname;
A68_59 * QKLACTR_f;
A68_BOOL  RKLACTR;  /* clause result */
A68_142  SKLACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_106  TKLACTR_currentmodule;
A68_VC  UKLACTR;  /* OPERATORS - istruct -> vector */
A68_VC  VKLACTR;  /* OPERATORS - trim index */
A68_VC  WKLACTR;  /* OPERATORS - trim index */
A68_VC  XKLACTR;  /* OPERATORS - trim index */
A68_VC  YKLACTR;  /* YIELD */
A68_VC  ZKLACTR;  /* OPERATORS - assign op */
A68_136  ALLACTR;  /* avoid structure result */
A68_136  BLLACTR_ymodinfo;
A68_BOOL  CLLACTR;  /* clause result */
A68_125  DLLACTR;  /* OPERATORS - simple index */
A68_INT  ELLACTR;  /* YIELD */
A68_131  FLLACTR;  /* united object - for case conformity */
A68_VC  GLLACTR_s;
A68_VC  HLLACTR;  /* clause result */
A68_VC  ILLACTR_spec;
A68_106 * JLLACTR;  /* YIELD */
A_PROC_ENTRY(add_lib_module);
 /* line 338: */
 /* line 339: */
{ 
 /* line 313: */
JWKACTR_debugmessage(5, A_VC_PLUS(A_VC_PLUS(NKLACTR,Filename),A_HVEC(OKLACTR,')',A68_CHAR )));
 /* line 340: */
 /* line 341: */
QKLACTR_f = KHJACTR_find_and_open_file(Filename, FRIACTR_library_directory, (&PKLACTR_fullname));
 /* line 342: */
 /* line 343: */
 /* line 344: */
RKLACTR = (QKLACTR_f==TSBAOSF_nil_file);
if ( RKLACTR )
{ 
 /* line 345: */
 /* line 346: */
OWIACTR_pwarning(817, A_HARR(SKLACTR,PKLACTR_fullname,A68_VC ));
} 
else
{ 
{ 
TKLACTR_currentmodule = DWKACTR_nullid;
 /* line 347: */
VKLACTR = A_ISVEC(UKLACTR,(&TKLACTR_currentmodule),32,A68_CHAR ) ;
YKLACTR = A_VTRIM(WKLACTR,(VKLACTR),A_VTSCRIPT(&(WKLACTR.upb),(VKLACTR).upb,1,(Filename.upb-2))) ;
ZKLACTR = A_VTRIM(XKLACTR,(Filename),A_VTSCRIPT(&(XKLACTR.upb),(Filename).upb,1,(Filename.upb-2))) ;
A_VASSIGN2(ZKLACTR,YKLACTR,A68_CHAR );
 /* line 348: */
A_CALLPROC(NL(Unpackmodinfo),(TKLACTR_currentmodule, QKLACTR_f, A68_TRUE, &ALLACTR),(TKLACTR_currentmodule, QKLACTR_f, A68_TRUE, &ALLACTR,(NL(Unpackmodinfo)).nonlocals));
BLLACTR_ymodinfo = ALLACTR;
 /* line 349: */
 /* line 350: */
 /* line 351: */
CLLACTR = (BLLACTR_ymodinfo.Ym.Specs.upb==1);
if ( CLLACTR )
{ 
DLLACTR = BLLACTR_ymodinfo.Ym.Specs ;
ELLACTR = 1 ;
FLLACTR = (*(&((&((&A_VINDEX(DLLACTR,ELLACTR))->Xs))->U))) ;
switch ( FLLACTR.mode )
{ 
case 1: /* REF VECTOR [] CHAR */
GLLACTR_s = (FLLACTR.data.mode1);
HLLACTR = GLLACTR_s;
break;
default: 
A_IMP_SKIP ;
break;
} 
ILLACTR_spec = HLLACTR;
 /* line 352: */
 /* line 356: */
JLLACTR = A_HEAP(A68_106 ) ;
(*JLLACTR) = TKLACTR_currentmodule ;
LHLACTR_processspec(ILLACTR_spec, JLLACTR);
} 
} 
} 
} 
A_PROC_EXIT(add_lib_module);
return;
} 
#undef NL

A_STATIC A68_VOID  XLLACTR_printmap(A68_157 * Map)
{ 
A68_157 * YLLACTR_current;
A68_VC  BMLACTR;  /* OPERATORS - istruct -> vector */
A68_106  CMLACTR;  /* OPERATORS - istruct -> vector */
A68_VC  DMLACTR;  /* avoid structure result */
A_PROC_ENTRY(printmap);
 /* line 375: */
 /* line 376: */
{ 
YLLACTR_current = Map;
 /* line 377: */
for ( ;; )
{ 
 /* line 378: */
 /* line 379: */
if ( !((YLLACTR_current!=(A68_157 *)A68_NIL)) ) break;
CMLACTR = (*(*(&(YLLACTR_current->Module)))) ;
BNAAOSF_before( A_HISVEC(BMLACTR,CMLACTR,32,A68_CHAR ), ' ', &DMLACTR );
JWKACTR_debugmessage(10, A_VC_PLUS(A_VC_PLUS((*(&(YLLACTR_current->Symbol))),AMLACTR),DMLACTR));
 /* line 380: */
 /* line 381: */
YLLACTR_current = (*(&(YLLACTR_current->Next)));
}
 /* line 382: */
} 
A_PROC_EXIT(printmap);
return;
} 
#undef NL

A_STATIC A68_VOID  JWKACTR_debugmessage(A68_INT  Level, A68_VC  M)
{ 
A68_VC  PWKACTR;  /* avoid structure result */
A_PROC_ENTRY(debugmessage);
 /* line 70: */
 /* line 71: */
if ( (ZCHACTR_tracelevel(LWKACTR)>=Level) )
{ 
 /* line 72: */
ROAAOSF_whole( Level, 0, &PWKACTR );
A_CALLPROC(FSIACTR_list,(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(OWKACTR,PWKACTR),QWKACTR),M)),(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(OWKACTR,PWKACTR),QWKACTR),M),(FSIACTR_list).nonlocals));
} 
A_PROC_EXIT(debugmessage);
return;
} 
#undef NL

A_STATIC A68_INT  SWKACTR_vtoi(A68_VC  V)
{ 
A68_INT  TWKACTR_res;
A68_INT  UWKACTR_i;
A68_INT  VWKACTR;  /* to part of loop */
A68_INT  WWKACTR;  /* clause result */
A_PROC_ENTRY(vtoi);
 /* line 80: */
 /* line 81: */
{ 
TWKACTR_res = 0;
 /* line 82: */
 /* line 83: */
VWKACTR = V.upb;
for ( UWKACTR_i = 1;
UWKACTR_i <= VWKACTR;
UWKACTR_i += 1 )
{ 
 /* line 84: */
 /* line 85: */
TWKACTR_res = ((XDAACTR_maxchar*TWKACTR_res)+(A68_INT)(unsigned char)A_VINDEX(V,UWKACTR_i));
}
 /* line 86: */
 /* line 87: */
WWKACTR = TWKACTR_res;
} 
A_PROC_EXIT(vtoi);
return( WWKACTR );
} 
#undef NL

A68_VOID  ZWKACTR_decodespec(A68_VC  Spec, A68_158  Debugmessage)
{ 
A68_INT  AXKACTR_index;
A68_INT  DXKACTR_type;
A68_INT  EXKACTR;  /* clause result */
A68_INT  FXKACTR_namelength;
A68_VC  GXKACTR;  /* OPERATORS - trim index */
A68_VC  HXKACTR;  /* OPERATORS - trim index */
A68_VC  IXKACTR;  /* OPERATORS - trim index */
A68_VC  JXKACTR_name;
A68_VC  KXKACTR;  /* OPERATORS - trim index */
A68_VC  LXKACTR;  /* OPERATORS - trim index */
A68_VC  MXKACTR;  /* OPERATORS - trim index */
A68_INT  NXKACTR_mode;
A68_VC  SXKACTR;  /* avoid structure result */
A68_INT  TXKACTR_namelength;
A68_VC  UXKACTR;  /* OPERATORS - trim index */
A68_VC  VXKACTR;  /* OPERATORS - trim index */
A68_VC  WXKACTR;  /* OPERATORS - trim index */
A68_VC  XXKACTR_name;
A68_VC  YXKACTR;  /* OPERATORS - trim index */
A68_VC  ZXKACTR;  /* OPERATORS - trim index */
A68_VC  AYKACTR;  /* OPERATORS - trim index */
A68_INT  BYKACTR_bival;
A68_VC  CYKACTR;  /* OPERATORS - trim index */
A68_VC  DYKACTR;  /* OPERATORS - trim index */
A68_VC  EYKACTR;  /* OPERATORS - trim index */
A68_INT  FYKACTR_mode;
A68_VC  LYKACTR;  /* avoid structure result */
A68_VC  NYKACTR;  /* avoid structure result */
A68_INT  OYKACTR_namelength;
A68_VC  PYKACTR;  /* OPERATORS - trim index */
A68_VC  QYKACTR;  /* OPERATORS - trim index */
A68_VC  RYKACTR;  /* OPERATORS - trim index */
A68_VC  SYKACTR_name;
A68_VC  TYKACTR;  /* OPERATORS - trim index */
A68_VC  UYKACTR;  /* OPERATORS - trim index */
A68_VC  VYKACTR;  /* OPERATORS - trim index */
A68_INT  WYKACTR_mode;
A68_VC  YYKACTR;  /* clause result */
A68_VC  CZKACTR_gen;
A68_VC  HZKACTR;  /* avoid structure result */
A68_INT  IZKACTR_namelength;
A68_VC  JZKACTR;  /* OPERATORS - trim index */
A68_VC  KZKACTR;  /* OPERATORS - trim index */
A68_VC  LZKACTR;  /* OPERATORS - trim index */
A68_VC  MZKACTR_name;
A68_INT  NZKACTR_prio;
A68_VC  OZKACTR;  /* OPERATORS - trim index */
A68_VC  PZKACTR;  /* OPERATORS - trim index */
A68_VC  QZKACTR;  /* OPERATORS - trim index */
A68_INT  RZKACTR_lhsmode;
A68_VC  SZKACTR;  /* OPERATORS - trim index */
A68_VC  TZKACTR;  /* OPERATORS - trim index */
A68_VC  UZKACTR;  /* OPERATORS - trim index */
A68_INT  VZKACTR_rhsmode;
A68_VC  WZKACTR;  /* OPERATORS - trim index */
A68_VC  XZKACTR;  /* OPERATORS - trim index */
A68_VC  YZKACTR;  /* OPERATORS - trim index */
A68_INT  ZZKACTR_resmode;
A68_VC  HALACTR;  /* avoid structure result */
A68_VC  JALACTR;  /* avoid structure result */
A68_VC  LALACTR;  /* avoid structure result */
A68_VC  NALACTR;  /* avoid structure result */
A68_INT  OALACTR_namelength;
A68_VC  PALACTR;  /* OPERATORS - trim index */
A68_VC  QALACTR;  /* OPERATORS - trim index */
A68_VC  RALACTR;  /* OPERATORS - trim index */
A68_VC  SALACTR_name;
A68_INT  TALACTR_prio;
A68_VC  UALACTR;  /* OPERATORS - trim index */
A68_VC  VALACTR;  /* OPERATORS - trim index */
A68_VC  WALACTR;  /* OPERATORS - trim index */
A68_INT  XALACTR_lhsmode;
A68_VC  YALACTR;  /* OPERATORS - trim index */
A68_VC  ZALACTR;  /* OPERATORS - trim index */
A68_VC  ABLACTR;  /* OPERATORS - trim index */
A68_INT  BBLACTR_rhsmode;
A68_VC  CBLACTR;  /* OPERATORS - trim index */
A68_VC  DBLACTR;  /* OPERATORS - trim index */
A68_VC  EBLACTR;  /* OPERATORS - trim index */
A68_INT  FBLACTR_resmode;
A68_VC  GBLACTR;  /* OPERATORS - trim index */
A68_VC  HBLACTR;  /* OPERATORS - trim index */
A68_VC  IBLACTR;  /* OPERATORS - trim index */
A68_INT  JBLACTR_biop;
A68_VC  SBLACTR;  /* avoid structure result */
A68_VC  UBLACTR;  /* avoid structure result */
A68_VC  WBLACTR;  /* avoid structure result */
A68_VC  YBLACTR;  /* avoid structure result */
A68_VC  ACLACTR;  /* avoid structure result */
A68_VC  BCLACTR;  /* OPERATORS - trim index */
A68_VC  CCLACTR;  /* OPERATORS - trim index */
A68_VC  DCLACTR;  /* OPERATORS - trim index */
A68_INT  ECLACTR_mode;
A68_VC  FCLACTR;  /* OPERATORS - trim index */
A68_VC  GCLACTR;  /* OPERATORS - trim index */
A68_VC  HCLACTR;  /* OPERATORS - trim index */
A68_INT  ICLACTR_res;
A68_VC  MCLACTR;  /* avoid structure result */
A68_VC  OCLACTR;  /* avoid structure result */
A68_VC  PCLACTR;  /* OPERATORS - trim index */
A68_VC  QCLACTR;  /* OPERATORS - trim index */
A68_VC  RCLACTR;  /* OPERATORS - trim index */
A68_INT  SCLACTR_mode;
A68_VC  TCLACTR;  /* OPERATORS - trim index */
A68_VC  UCLACTR;  /* OPERATORS - trim index */
A68_VC  VCLACTR;  /* OPERATORS - trim index */
A68_INT  WCLACTR_res;
A68_INT  XCLACTR_params;
A68_VC  CDLACTR;  /* avoid structure result */
A68_VC  EDLACTR;  /* avoid structure result */
A68_VC  GDLACTR;  /* avoid structure result */
A68_VC  HDLACTR;  /* OPERATORS - trim index */
A68_VC  IDLACTR;  /* OPERATORS - trim index */
A68_VC  JDLACTR;  /* OPERATORS - trim index */
A68_INT  KDLACTR_mode;
A68_INT  LDLACTR_nmodes;
A68_VC  PDLACTR;  /* avoid structure result */
A68_VC  RDLACTR;  /* avoid structure result */
A68_VC  SDLACTR;  /* OPERATORS - trim index */
A68_VC  TDLACTR;  /* OPERATORS - trim index */
A68_VC  UDLACTR;  /* OPERATORS - trim index */
A68_INT  VDLACTR_mode;
A68_INT  WDLACTR_nfields;
A68_INT  XDLACTR;  /* to part of loop */
A68_INT  YDLACTR;  /* loop control */
A68_VC  CELACTR;  /* avoid structure result */
A68_VC  EELACTR;  /* avoid structure result */
A68_VC  FELACTR;  /* OPERATORS - trim index */
A68_VC  GELACTR;  /* OPERATORS - trim index */
A68_VC  HELACTR;  /* OPERATORS - trim index */
A68_INT  IELACTR_mode;
A68_VC  JELACTR;  /* OPERATORS - trim index */
A68_VC  KELACTR;  /* OPERATORS - trim index */
A68_VC  LELACTR;  /* OPERATORS - trim index */
A68_INT  MELACTR_elemmode;
A68_VC  NELACTR;  /* OPERATORS - trim index */
A68_VC  OELACTR;  /* OPERATORS - trim index */
A68_VC  PELACTR;  /* OPERATORS - trim index */
A68_INT  QELACTR_noelems;
A68_VC  VELACTR;  /* avoid structure result */
A68_VC  XELACTR;  /* avoid structure result */
A68_VC  ZELACTR;  /* avoid structure result */
A68_VC  AFLACTR;  /* OPERATORS - trim index */
A68_VC  BFLACTR;  /* OPERATORS - trim index */
A68_VC  CFLACTR;  /* OPERATORS - trim index */
A68_INT  DFLACTR_mode;
A68_VC  EFLACTR;  /* OPERATORS - trim index */
A68_VC  FFLACTR;  /* OPERATORS - trim index */
A68_VC  GFLACTR;  /* OPERATORS - trim index */
A68_INT  HFLACTR_elemmode;
A68_VC  JFLACTR;  /* clause result */
A68_VC  NFLACTR_flex;
A68_VC  RFLACTR;  /* avoid structure result */
A68_VC  TFLACTR;  /* avoid structure result */
A68_VC  UFLACTR;  /* OPERATORS - trim index */
A68_VC  VFLACTR;  /* OPERATORS - trim index */
A68_VC  WFLACTR;  /* OPERATORS - trim index */
A68_INT  XFLACTR_mode;
A68_VC  YFLACTR;  /* OPERATORS - trim index */
A68_VC  ZFLACTR;  /* OPERATORS - trim index */
A68_VC  AGLACTR;  /* OPERATORS - trim index */
A68_INT  BGLACTR_elemmode;
A68_INT  CGLACTR_dims;
A68_VC  EGLACTR;  /* clause result */
A68_VC  IGLACTR_flex;
A68_VC  NGLACTR;  /* avoid structure result */
A68_VC  PGLACTR;  /* avoid structure result */
A68_VC  RGLACTR;  /* avoid structure result */
A68_VC  SGLACTR;  /* OPERATORS - trim index */
A68_VC  TGLACTR;  /* OPERATORS - trim index */
A68_VC  UGLACTR;  /* OPERATORS - trim index */
A68_INT  VGLACTR_mode;
A68_VC  WGLACTR;  /* OPERATORS - trim index */
A68_VC  XGLACTR;  /* OPERATORS - trim index */
A68_VC  YGLACTR;  /* OPERATORS - trim index */
A68_INT  ZGLACTR_elemmode;
A68_VC  DHLACTR;  /* avoid structure result */
A68_VC  FHLACTR;  /* avoid structure result */
A68_VC  IHLACTR;  /* avoid structure result */
A_PROC_ENTRY(decodespec);
 /* line 90: */
 /* line 91: */
{ 
AXKACTR_index = 1;
 /* line 92: */
A_CALLPROC(Debugmessage,(5, CXKACTR),(5, CXKACTR,(Debugmessage).nonlocals));
 /* line 93: */
for ( ;; )
{ 
 /* line 94: */
 /* line 95: */
if ( !((Spec.upb>AXKACTR_index)) ) break;
{ 
DXKACTR_type = (A68_INT)(unsigned char)A_VINDEX(Spec,AXKACTR_index);
AXKACTR_index+=1;
 /* line 96: */
EXKACTR = DXKACTR_type;
switch ( EXKACTR )
{ 
case 1: 
 /* line 97: */
{ 
FXKACTR_namelength = (A68_INT)(unsigned char)A_VINDEX(Spec,AXKACTR_index);
AXKACTR_index+=1;
 /* line 98: */
HXKACTR = A_VTRIM(GXKACTR,(Spec),A_VTSCRIPT(&(GXKACTR.upb),(Spec).upb,AXKACTR_index,(Spec).upb)) ;
JXKACTR_name = A_VTRIM(IXKACTR,(HXKACTR),A_VTSCRIPT(&(IXKACTR.upb),(HXKACTR).upb,1,FXKACTR_namelength));
 /* line 99: */
AXKACTR_index+=FXKACTR_namelength;
 /* line 100: */
LXKACTR = A_VTRIM(KXKACTR,(Spec),A_VTSCRIPT(&(KXKACTR.upb),(Spec).upb,AXKACTR_index,(Spec).upb)) ;
NXKACTR_mode = SWKACTR_vtoi(A_VTRIM(MXKACTR,(LXKACTR),A_VTSCRIPT(&(MXKACTR.upb),(LXKACTR).upb,1,2)));
AXKACTR_index+=2;
 /* line 101: */
 /* line 102: */
 /* line 103: */
 /* line 104: */
WRAAOSF_xc( NXKACTR_mode, &SXKACTR );
A_CALLPROC(Debugmessage,(5, A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(QXKACTR,JXKACTR_name),RXKACTR),SXKACTR)),(5, A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(QXKACTR,JXKACTR_name),RXKACTR),SXKACTR),(Debugmessage).nonlocals));
} 
break;
case 2: 
 /* line 105: */
{ 
TXKACTR_namelength = (A68_INT)(unsigned char)A_VINDEX(Spec,AXKACTR_index);
AXKACTR_index+=1;
 /* line 106: */
VXKACTR = A_VTRIM(UXKACTR,(Spec),A_VTSCRIPT(&(UXKACTR.upb),(Spec).upb,AXKACTR_index,(Spec).upb)) ;
XXKACTR_name = A_VTRIM(WXKACTR,(VXKACTR),A_VTSCRIPT(&(WXKACTR.upb),(VXKACTR).upb,1,TXKACTR_namelength));
 /* line 107: */
AXKACTR_index+=TXKACTR_namelength;
 /* line 108: */
ZXKACTR = A_VTRIM(YXKACTR,(Spec),A_VTSCRIPT(&(YXKACTR.upb),(Spec).upb,AXKACTR_index,(Spec).upb)) ;
BYKACTR_bival = SWKACTR_vtoi(A_VTRIM(AYKACTR,(ZXKACTR),A_VTSCRIPT(&(AYKACTR.upb),(ZXKACTR).upb,1,2)));
AXKACTR_index+=2;
 /* line 109: */
DYKACTR = A_VTRIM(CYKACTR,(Spec),A_VTSCRIPT(&(CYKACTR.upb),(Spec).upb,AXKACTR_index,(Spec).upb)) ;
FYKACTR_mode = SWKACTR_vtoi(A_VTRIM(EYKACTR,(DYKACTR),A_VTSCRIPT(&(EYKACTR.upb),(DYKACTR).upb,1,2)));
AXKACTR_index+=2;
 /* line 110: */
 /* line 111: */
 /* line 112: */
 /* line 113: */
 /* line 114: */
 /* line 115: */
WRAAOSF_xc( FYKACTR_mode, &LYKACTR );
WRAAOSF_xc( BYKACTR_bival, &NYKACTR );
A_CALLPROC(Debugmessage,(5, A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(JYKACTR,XXKACTR_name),KYKACTR),LYKACTR),MYKACTR),NYKACTR)),(5, A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(JYKACTR,XXKACTR_name),KYKACTR),LYKACTR),MYKACTR),NYKACTR),(Debugmessage).nonlocals));
} 
break;
case 3: 
 /* line 116: */
{ 
OYKACTR_namelength = (A68_INT)(unsigned char)A_VINDEX(Spec,AXKACTR_index);
AXKACTR_index+=1;
 /* line 117: */
QYKACTR = A_VTRIM(PYKACTR,(Spec),A_VTSCRIPT(&(PYKACTR.upb),(Spec).upb,AXKACTR_index,(Spec).upb)) ;
SYKACTR_name = A_VTRIM(RYKACTR,(QYKACTR),A_VTSCRIPT(&(RYKACTR.upb),(QYKACTR).upb,1,OYKACTR_namelength));
 /* line 118: */
AXKACTR_index+=OYKACTR_namelength;
 /* line 119: */
UYKACTR = A_VTRIM(TYKACTR,(Spec),A_VTSCRIPT(&(TYKACTR.upb),(Spec).upb,AXKACTR_index,(Spec).upb)) ;
WYKACTR_mode = SWKACTR_vtoi(A_VTRIM(VYKACTR,(UYKACTR),A_VTSCRIPT(&(VYKACTR.upb),(UYKACTR).upb,1,2)));
AXKACTR_index+=2;
 /* line 120: */
 /* line 121: */
 /* line 122: */
 /* line 123: */
if ( ((A68_INT)(unsigned char)A_VINDEX(Spec,AXKACTR_index)==1) )
{ 
 /* line 124: */
YYKACTR = ZYKACTR;
} 
else
{ 
YYKACTR = BZKACTR;
} 
CZKACTR_gen = YYKACTR;
 /* line 125: */
AXKACTR_index+=1;
 /* line 126: */
 /* line 127: */
 /* line 128: */
 /* line 129: */
WRAAOSF_xc( WYKACTR_mode, &HZKACTR );
A_CALLPROC(Debugmessage,(5, A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(FZKACTR,SYKACTR_name),GZKACTR),HZKACTR),CZKACTR_gen)),(5, A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(FZKACTR,SYKACTR_name),GZKACTR),HZKACTR),CZKACTR_gen),(Debugmessage).nonlocals));
} 
break;
case 4: 
 /* line 130: */
{ 
IZKACTR_namelength = (A68_INT)(unsigned char)A_VINDEX(Spec,AXKACTR_index);
AXKACTR_index+=1;
 /* line 131: */
KZKACTR = A_VTRIM(JZKACTR,(Spec),A_VTSCRIPT(&(JZKACTR.upb),(Spec).upb,AXKACTR_index,(Spec).upb)) ;
MZKACTR_name = A_VTRIM(LZKACTR,(KZKACTR),A_VTSCRIPT(&(LZKACTR.upb),(KZKACTR).upb,1,IZKACTR_namelength));
 /* line 132: */
AXKACTR_index+=IZKACTR_namelength;
 /* line 133: */
NZKACTR_prio = (A68_INT)(unsigned char)A_VINDEX(Spec,AXKACTR_index);
AXKACTR_index+=1;
 /* line 134: */
PZKACTR = A_VTRIM(OZKACTR,(Spec),A_VTSCRIPT(&(OZKACTR.upb),(Spec).upb,AXKACTR_index,(Spec).upb)) ;
RZKACTR_lhsmode = SWKACTR_vtoi(A_VTRIM(QZKACTR,(PZKACTR),A_VTSCRIPT(&(QZKACTR.upb),(PZKACTR).upb,1,2)));
AXKACTR_index+=2;
 /* line 135: */
TZKACTR = A_VTRIM(SZKACTR,(Spec),A_VTSCRIPT(&(SZKACTR.upb),(Spec).upb,AXKACTR_index,(Spec).upb)) ;
VZKACTR_rhsmode = SWKACTR_vtoi(A_VTRIM(UZKACTR,(TZKACTR),A_VTSCRIPT(&(UZKACTR.upb),(TZKACTR).upb,1,2)));
AXKACTR_index+=2;
 /* line 136: */
XZKACTR = A_VTRIM(WZKACTR,(Spec),A_VTSCRIPT(&(WZKACTR.upb),(Spec).upb,AXKACTR_index,(Spec).upb)) ;
ZZKACTR_resmode = SWKACTR_vtoi(A_VTRIM(YZKACTR,(XZKACTR),A_VTSCRIPT(&(YZKACTR.upb),(XZKACTR).upb,1,2)));
AXKACTR_index+=2;
 /* line 137: */
 /* line 138: */
 /* line 139: */
 /* line 140: */
 /* line 141: */
 /* line 142: */
 /* line 143: */
WRAAOSF_xc( NZKACTR_prio, &HALACTR );
WRAAOSF_xc( RZKACTR_lhsmode, &JALACTR );
WRAAOSF_xc( VZKACTR_rhsmode, &LALACTR );
WRAAOSF_xc( ZZKACTR_resmode, &NALACTR );
A_CALLPROC(Debugmessage,(5, A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(FALACTR,MZKACTR_name),GALACTR),HALACTR),IALACTR),JALACTR),KALACTR),LALACTR),MALACTR),NALACTR)),(5, A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(FALACTR,MZKACTR_name),GALACTR),HALACTR),IALACTR),JALACTR),KALACTR),LALACTR),MALACTR),NALACTR),(Debugmessage).nonlocals));
} 
break;
case 5: 
 /* line 144: */
{ 
OALACTR_namelength = (A68_INT)(unsigned char)A_VINDEX(Spec,AXKACTR_index);
AXKACTR_index+=1;
 /* line 145: */
QALACTR = A_VTRIM(PALACTR,(Spec),A_VTSCRIPT(&(PALACTR.upb),(Spec).upb,AXKACTR_index,(Spec).upb)) ;
SALACTR_name = A_VTRIM(RALACTR,(QALACTR),A_VTSCRIPT(&(RALACTR.upb),(QALACTR).upb,1,OALACTR_namelength));
 /* line 146: */
AXKACTR_index+=OALACTR_namelength;
 /* line 147: */
TALACTR_prio = (A68_INT)(unsigned char)A_VINDEX(Spec,AXKACTR_index);
AXKACTR_index+=1;
 /* line 148: */
VALACTR = A_VTRIM(UALACTR,(Spec),A_VTSCRIPT(&(UALACTR.upb),(Spec).upb,AXKACTR_index,(Spec).upb)) ;
XALACTR_lhsmode = SWKACTR_vtoi(A_VTRIM(WALACTR,(VALACTR),A_VTSCRIPT(&(WALACTR.upb),(VALACTR).upb,1,2)));
AXKACTR_index+=2;
 /* line 149: */
ZALACTR = A_VTRIM(YALACTR,(Spec),A_VTSCRIPT(&(YALACTR.upb),(Spec).upb,AXKACTR_index,(Spec).upb)) ;
BBLACTR_rhsmode = SWKACTR_vtoi(A_VTRIM(ABLACTR,(ZALACTR),A_VTSCRIPT(&(ABLACTR.upb),(ZALACTR).upb,1,2)));
AXKACTR_index+=2;
 /* line 150: */
DBLACTR = A_VTRIM(CBLACTR,(Spec),A_VTSCRIPT(&(CBLACTR.upb),(Spec).upb,AXKACTR_index,(Spec).upb)) ;
FBLACTR_resmode = SWKACTR_vtoi(A_VTRIM(EBLACTR,(DBLACTR),A_VTSCRIPT(&(EBLACTR.upb),(DBLACTR).upb,1,2)));
AXKACTR_index+=2;
 /* line 151: */
HBLACTR = A_VTRIM(GBLACTR,(Spec),A_VTSCRIPT(&(GBLACTR.upb),(Spec).upb,AXKACTR_index,(Spec).upb)) ;
JBLACTR_biop = SWKACTR_vtoi(A_VTRIM(IBLACTR,(HBLACTR),A_VTSCRIPT(&(IBLACTR.upb),(HBLACTR).upb,1,2)));
AXKACTR_index+=2;
 /* line 152: */
 /* line 153: */
 /* line 154: */
 /* line 155: */
 /* line 156: */
 /* line 157: */
 /* line 158: */
WRAAOSF_xc( TALACTR_prio, &SBLACTR );
WRAAOSF_xc( XALACTR_lhsmode, &UBLACTR );
WRAAOSF_xc( BBLACTR_rhsmode, &WBLACTR );
WRAAOSF_xc( FBLACTR_resmode, &YBLACTR );
WRAAOSF_xc( JBLACTR_biop, &ACLACTR );
A_CALLPROC(Debugmessage,(5, A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(QBLACTR,SALACTR_name),RBLACTR),SBLACTR),TBLACTR),UBLACTR),VBLACTR),WBLACTR),XBLACTR),YBLACTR),ZBLACTR),ACLACTR)),(5, A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(QBLACTR,SALACTR_name),RBLACTR),SBLACTR),TBLACTR),UBLACTR),VBLACTR),WBLACTR),XBLACTR),YBLACTR),ZBLACTR),ACLACTR),(Debugmessage).nonlocals));
} 
break;
case 6: 
 /* line 159: */
{ 
CCLACTR = A_VTRIM(BCLACTR,(Spec),A_VTSCRIPT(&(BCLACTR.upb),(Spec).upb,AXKACTR_index,(Spec).upb)) ;
ECLACTR_mode = SWKACTR_vtoi(A_VTRIM(DCLACTR,(CCLACTR),A_VTSCRIPT(&(DCLACTR.upb),(CCLACTR).upb,1,2)));
AXKACTR_index+=2;
 /* line 160: */
GCLACTR = A_VTRIM(FCLACTR,(Spec),A_VTSCRIPT(&(FCLACTR.upb),(Spec).upb,AXKACTR_index,(Spec).upb)) ;
ICLACTR_res = SWKACTR_vtoi(A_VTRIM(HCLACTR,(GCLACTR),A_VTSCRIPT(&(HCLACTR.upb),(GCLACTR).upb,1,2)));
AXKACTR_index+=2;
 /* line 161: */
 /* line 162: */
 /* line 163: */
 /* line 164: */
WRAAOSF_xc( ECLACTR_mode, &MCLACTR );
WRAAOSF_xc( ICLACTR_res, &OCLACTR );
A_CALLPROC(Debugmessage,(5, A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(LCLACTR,MCLACTR),NCLACTR),OCLACTR)),(5, A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(LCLACTR,MCLACTR),NCLACTR),OCLACTR),(Debugmessage).nonlocals));
} 
break;
case 7: 
 /* line 165: */
{ 
QCLACTR = A_VTRIM(PCLACTR,(Spec),A_VTSCRIPT(&(PCLACTR.upb),(Spec).upb,AXKACTR_index,(Spec).upb)) ;
SCLACTR_mode = SWKACTR_vtoi(A_VTRIM(RCLACTR,(QCLACTR),A_VTSCRIPT(&(RCLACTR.upb),(QCLACTR).upb,1,2)));
AXKACTR_index+=2;
 /* line 166: */
UCLACTR = A_VTRIM(TCLACTR,(Spec),A_VTSCRIPT(&(TCLACTR.upb),(Spec).upb,AXKACTR_index,(Spec).upb)) ;
WCLACTR_res = SWKACTR_vtoi(A_VTRIM(VCLACTR,(UCLACTR),A_VTSCRIPT(&(VCLACTR.upb),(UCLACTR).upb,1,2)));
AXKACTR_index+=2;
 /* line 167: */
XCLACTR_params = (A68_INT)(unsigned char)A_VINDEX(Spec,AXKACTR_index);
AXKACTR_index+=1;
 /* line 168: */
AXKACTR_index+=(2*XCLACTR_params);
 /* line 169: */
 /* line 170: */
 /* line 171: */
 /* line 172: */
 /* line 173: */
 /* line 174: */
WRAAOSF_xc( SCLACTR_mode, &CDLACTR );
WRAAOSF_xc( WCLACTR_res, &EDLACTR );
WRAAOSF_xc( XCLACTR_params, &GDLACTR );
A_CALLPROC(Debugmessage,(5, A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(BDLACTR,CDLACTR),DDLACTR),EDLACTR),FDLACTR),GDLACTR)),(5, A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(BDLACTR,CDLACTR),DDLACTR),EDLACTR),FDLACTR),GDLACTR),(Debugmessage).nonlocals));
} 
break;
case 8: 
 /* line 175: */
{ 
IDLACTR = A_VTRIM(HDLACTR,(Spec),A_VTSCRIPT(&(HDLACTR.upb),(Spec).upb,AXKACTR_index,(Spec).upb)) ;
KDLACTR_mode = SWKACTR_vtoi(A_VTRIM(JDLACTR,(IDLACTR),A_VTSCRIPT(&(JDLACTR.upb),(IDLACTR).upb,1,2)));
AXKACTR_index+=2;
 /* line 176: */
LDLACTR_nmodes = (A68_INT)(unsigned char)A_VINDEX(Spec,AXKACTR_index);
AXKACTR_index+=1;
 /* line 177: */
AXKACTR_index+=(2*LDLACTR_nmodes);
 /* line 178: */
 /* line 179: */
 /* line 180: */
 /* line 181: */
 /* line 182: */
WRAAOSF_xc( KDLACTR_mode, &PDLACTR );
WRAAOSF_xc( LDLACTR_nmodes, &RDLACTR );
A_CALLPROC(Debugmessage,(5, A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(ODLACTR,PDLACTR),QDLACTR),RDLACTR)),(5, A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(ODLACTR,PDLACTR),QDLACTR),RDLACTR),(Debugmessage).nonlocals));
} 
break;
case 9: 
 /* line 183: */
{ 
TDLACTR = A_VTRIM(SDLACTR,(Spec),A_VTSCRIPT(&(SDLACTR.upb),(Spec).upb,AXKACTR_index,(Spec).upb)) ;
VDLACTR_mode = SWKACTR_vtoi(A_VTRIM(UDLACTR,(TDLACTR),A_VTSCRIPT(&(UDLACTR.upb),(TDLACTR).upb,1,2)));
AXKACTR_index+=2;
 /* line 184: */
WDLACTR_nfields = (A68_INT)(unsigned char)A_VINDEX(Spec,AXKACTR_index);
AXKACTR_index+=1;
 /* line 185: */
 /* line 186: */
XDLACTR = WDLACTR_nfields;
for ( YDLACTR = 1;
YDLACTR <= XDLACTR;
YDLACTR += 1 )
{ 
AXKACTR_index+=2;
 /* line 187: */
 /* line 188: */
AXKACTR_index+=((A68_INT)(unsigned char)A_VINDEX(Spec,AXKACTR_index)+1);
}
 /* line 189: */
 /* line 190: */
 /* line 191: */
 /* line 192: */
 /* line 193: */
WRAAOSF_xc( VDLACTR_mode, &CELACTR );
WRAAOSF_xc( WDLACTR_nfields, &EELACTR );
A_CALLPROC(Debugmessage,(5, A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(BELACTR,CELACTR),DELACTR),EELACTR)),(5, A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(BELACTR,CELACTR),DELACTR),EELACTR),(Debugmessage).nonlocals));
} 
break;
case 10: 
 /* line 194: */
{ 
GELACTR = A_VTRIM(FELACTR,(Spec),A_VTSCRIPT(&(FELACTR.upb),(Spec).upb,AXKACTR_index,(Spec).upb)) ;
IELACTR_mode = SWKACTR_vtoi(A_VTRIM(HELACTR,(GELACTR),A_VTSCRIPT(&(HELACTR.upb),(GELACTR).upb,1,2)));
AXKACTR_index+=2;
 /* line 195: */
KELACTR = A_VTRIM(JELACTR,(Spec),A_VTSCRIPT(&(JELACTR.upb),(Spec).upb,AXKACTR_index,(Spec).upb)) ;
MELACTR_elemmode = SWKACTR_vtoi(A_VTRIM(LELACTR,(KELACTR),A_VTSCRIPT(&(LELACTR.upb),(KELACTR).upb,1,2)));
AXKACTR_index+=2;
 /* line 196: */
OELACTR = A_VTRIM(NELACTR,(Spec),A_VTSCRIPT(&(NELACTR.upb),(Spec).upb,AXKACTR_index,(Spec).upb)) ;
QELACTR_noelems = SWKACTR_vtoi(A_VTRIM(PELACTR,(OELACTR),A_VTSCRIPT(&(PELACTR.upb),(OELACTR).upb,1,3)));
AXKACTR_index+=3;
 /* line 197: */
 /* line 198: */
 /* line 199: */
 /* line 200: */
 /* line 201: */
 /* line 202: */
 /* line 203: */
WRAAOSF_xc( IELACTR_mode, &VELACTR );
WRAAOSF_xc( MELACTR_elemmode, &XELACTR );
WRAAOSF_xc( QELACTR_noelems, &ZELACTR );
A_CALLPROC(Debugmessage,(5, A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(UELACTR,VELACTR),WELACTR),XELACTR),YELACTR),ZELACTR)),(5, A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(UELACTR,VELACTR),WELACTR),XELACTR),YELACTR),ZELACTR),(Debugmessage).nonlocals));
} 
break;
case 11: 
 /* line 204: */
{ 
BFLACTR = A_VTRIM(AFLACTR,(Spec),A_VTSCRIPT(&(AFLACTR.upb),(Spec).upb,AXKACTR_index,(Spec).upb)) ;
DFLACTR_mode = SWKACTR_vtoi(A_VTRIM(CFLACTR,(BFLACTR),A_VTSCRIPT(&(CFLACTR.upb),(BFLACTR).upb,1,2)));
AXKACTR_index+=2;
 /* line 205: */
FFLACTR = A_VTRIM(EFLACTR,(Spec),A_VTSCRIPT(&(EFLACTR.upb),(Spec).upb,AXKACTR_index,(Spec).upb)) ;
HFLACTR_elemmode = SWKACTR_vtoi(A_VTRIM(GFLACTR,(FFLACTR),A_VTSCRIPT(&(GFLACTR.upb),(FFLACTR).upb,1,2)));
AXKACTR_index+=2;
 /* line 206: */
 /* line 207: */
if ( ((A68_INT)(unsigned char)A_VINDEX(Spec,AXKACTR_index)==2) )
{ 
JFLACTR = KFLACTR;
} 
else
{ 
JFLACTR = MFLACTR;
} 
NFLACTR_flex = JFLACTR;
 /* line 208: */
AXKACTR_index+=1;
 /* line 209: */
 /* line 210: */
 /* line 211: */
 /* line 212: */
 /* line 213: */
 /* line 214: */
WRAAOSF_xc( DFLACTR_mode, &RFLACTR );
WRAAOSF_xc( HFLACTR_elemmode, &TFLACTR );
A_CALLPROC(Debugmessage,(5, A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(NFLACTR_flex,QFLACTR),RFLACTR),SFLACTR),TFLACTR)),(5, A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(NFLACTR_flex,QFLACTR),RFLACTR),SFLACTR),TFLACTR),(Debugmessage).nonlocals));
} 
break;
case 12: 
 /* line 215: */
{ 
VFLACTR = A_VTRIM(UFLACTR,(Spec),A_VTSCRIPT(&(UFLACTR.upb),(Spec).upb,AXKACTR_index,(Spec).upb)) ;
XFLACTR_mode = SWKACTR_vtoi(A_VTRIM(WFLACTR,(VFLACTR),A_VTSCRIPT(&(WFLACTR.upb),(VFLACTR).upb,1,2)));
AXKACTR_index+=2;
 /* line 216: */
ZFLACTR = A_VTRIM(YFLACTR,(Spec),A_VTSCRIPT(&(YFLACTR.upb),(Spec).upb,AXKACTR_index,(Spec).upb)) ;
BGLACTR_elemmode = SWKACTR_vtoi(A_VTRIM(AGLACTR,(ZFLACTR),A_VTSCRIPT(&(AGLACTR.upb),(ZFLACTR).upb,1,2)));
AXKACTR_index+=2;
 /* line 217: */
CGLACTR_dims = (A68_INT)(unsigned char)A_VINDEX(Spec,AXKACTR_index);
AXKACTR_index+=1;
 /* line 218: */
 /* line 219: */
if ( ((A68_INT)(unsigned char)A_VINDEX(Spec,AXKACTR_index)==2) )
{ 
EGLACTR = FGLACTR;
} 
else
{ 
EGLACTR = HGLACTR;
} 
IGLACTR_flex = EGLACTR;
 /* line 220: */
AXKACTR_index+=1;
 /* line 221: */
 /* line 222: */
 /* line 223: */
 /* line 224: */
 /* line 225: */
 /* line 226: */
 /* line 227: */
WRAAOSF_xc( XFLACTR_mode, &NGLACTR );
WRAAOSF_xc( BGLACTR_elemmode, &PGLACTR );
WRAAOSF_xc( CGLACTR_dims, &RGLACTR );
A_CALLPROC(Debugmessage,(5, A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(IGLACTR_flex,MGLACTR),NGLACTR),OGLACTR),PGLACTR),QGLACTR),RGLACTR)),(5, A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(IGLACTR_flex,MGLACTR),NGLACTR),OGLACTR),PGLACTR),QGLACTR),RGLACTR),(Debugmessage).nonlocals));
} 
break;
case 13: 
 /* line 228: */
{ 
TGLACTR = A_VTRIM(SGLACTR,(Spec),A_VTSCRIPT(&(SGLACTR.upb),(Spec).upb,AXKACTR_index,(Spec).upb)) ;
VGLACTR_mode = SWKACTR_vtoi(A_VTRIM(UGLACTR,(TGLACTR),A_VTSCRIPT(&(UGLACTR.upb),(TGLACTR).upb,1,2)));
AXKACTR_index+=2;
 /* line 229: */
XGLACTR = A_VTRIM(WGLACTR,(Spec),A_VTSCRIPT(&(WGLACTR.upb),(Spec).upb,AXKACTR_index,(Spec).upb)) ;
ZGLACTR_elemmode = SWKACTR_vtoi(A_VTRIM(YGLACTR,(XGLACTR),A_VTSCRIPT(&(YGLACTR.upb),(XGLACTR).upb,1,2)));
AXKACTR_index+=2;
 /* line 230: */
 /* line 231: */
 /* line 232: */
 /* line 233: */
 /* line 234: */
WRAAOSF_xc( VGLACTR_mode, &DHLACTR );
WRAAOSF_xc( ZGLACTR_elemmode, &FHLACTR );
A_CALLPROC(Debugmessage,(5, A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(CHLACTR,DHLACTR),EHLACTR),FHLACTR)),(5, A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(CHLACTR,DHLACTR),EHLACTR),FHLACTR),(Debugmessage).nonlocals));
} 
break;
default: 
WRAAOSF_xc( DXKACTR_type, &IHLACTR );
A_CALLPROC(Debugmessage,(5, A_VC_PLUS(HHLACTR,IHLACTR)),(5, A_VC_PLUS(HHLACTR,IHLACTR),(Debugmessage).nonlocals));
 /* line 235: */
 /* line 236: */
AXKACTR_index = Spec.upb;
break;
} 
} 
}
 /* line 238: */
} 
A_PROC_EXIT(decodespec);
return;
} 
#undef NL

A_STATIC A68_VOID  LHLACTR_processspec(A68_VC  Spec, A68_106 * Currentmodule)
{ 
A68_VC  OHLACTR;  /* OPERATORS - istruct -> vector */
A68_VC  PHLACTR;  /* avoid structure result */
A68_VC  QHLACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  RHLACTR_index;
A68_INT  SHLACTR_type;
A68_INT  THLACTR;  /* clause result */
A68_INT  UHLACTR_namelength;
A68_VC  VHLACTR;  /* OPERATORS - trim index */
A68_VC  WHLACTR;  /* OPERATORS - trim index */
A68_VC  XHLACTR;  /* OPERATORS - trim index */
A68_VC  YHLACTR_name;
A68_157  ZHLACTR;  /* collateral clause result */
A68_VC  AILACTR;  /* avoid structure result */
A68_157 * BILACTR;  /* YIELD */
A68_INT  CILACTR_namelength;
A68_VC  DILACTR;  /* OPERATORS - trim index */
A68_VC  EILACTR;  /* OPERATORS - trim index */
A68_VC  FILACTR;  /* OPERATORS - trim index */
A68_VC  GILACTR_name;
A68_157  HILACTR;  /* collateral clause result */
A68_VC  IILACTR;  /* avoid structure result */
A68_157 * JILACTR;  /* YIELD */
A68_INT  KILACTR_namelength;
A68_VC  LILACTR;  /* OPERATORS - trim index */
A68_VC  MILACTR;  /* OPERATORS - trim index */
A68_VC  NILACTR;  /* OPERATORS - trim index */
A68_VC  OILACTR_name;
A68_157  PILACTR;  /* collateral clause result */
A68_VC  QILACTR;  /* avoid structure result */
A68_157 * RILACTR;  /* YIELD */
A68_INT  SILACTR_namelength;
A68_VC  TILACTR;  /* OPERATORS - trim index */
A68_VC  UILACTR;  /* OPERATORS - trim index */
A68_VC  VILACTR;  /* OPERATORS - trim index */
A68_VC  WILACTR_name;
A68_INT  XILACTR;  /* YIELD */
A68_CHAR  YILACTR_c;
A68_BOOL  ZILACTR;  /* optbool result */
A68_BOOL  AJLACTR;  /* clause result */
A68_157 ** BJLACTR;  /* clause result */
A68_157 ** CJLACTR_table;
A68_157  DJLACTR;  /* collateral clause result */
A68_VC  EJLACTR;  /* avoid structure result */
A68_157 * FJLACTR;  /* YIELD */
A68_INT  GJLACTR_namelength;
A68_VC  HJLACTR;  /* OPERATORS - trim index */
A68_VC  IJLACTR;  /* OPERATORS - trim index */
A68_VC  JJLACTR;  /* OPERATORS - trim index */
A68_VC  KJLACTR_name;
A68_INT  LJLACTR;  /* YIELD */
A68_CHAR  MJLACTR_c;
A68_BOOL  NJLACTR;  /* optbool result */
A68_BOOL  OJLACTR;  /* clause result */
A68_157 ** PJLACTR;  /* clause result */
A68_157 ** QJLACTR_table;
A68_157  RJLACTR;  /* collateral clause result */
A68_VC  SJLACTR;  /* avoid structure result */
A68_157 * TJLACTR;  /* YIELD */
A68_INT  UJLACTR_params;
A68_INT  VJLACTR_nmodes;
A68_INT  WJLACTR_nfields;
A68_INT  XJLACTR;  /* to part of loop */
A68_INT  YJLACTR;  /* loop control */
A_PROC_ENTRY(processspec);
 /* line 244: */
 /* line 245: */
{ 
 /* line 237: */
BNAAOSF_before( A_HISVEC(OHLACTR,(*Currentmodule),32,A68_CHAR ), ' ', &PHLACTR );
JWKACTR_debugmessage(10, A_VC_PLUS(A_VC_PLUS(NHLACTR,PHLACTR),A_HVEC(QHLACTR,')',A68_CHAR )));
 /* line 246: */
RHLACTR_index = 1;
 /* line 247: */
for ( ;; )
{ 
 /* line 248: */
 /* line 249: */
if ( !((Spec.upb>RHLACTR_index)) ) break;
{ 
SHLACTR_type = (A68_INT)(unsigned char)A_VINDEX(Spec,RHLACTR_index);
RHLACTR_index+=1;
 /* line 250: */
THLACTR = SHLACTR_type;
switch ( THLACTR )
{ 
case 1: 
 /* line 251: */
{ 
UHLACTR_namelength = (A68_INT)(unsigned char)A_VINDEX(Spec,RHLACTR_index);
RHLACTR_index+=1;
 /* line 252: */
WHLACTR = A_VTRIM(VHLACTR,(Spec),A_VTSCRIPT(&(VHLACTR.upb),(Spec).upb,RHLACTR_index,(Spec).upb)) ;
YHLACTR_name = A_VTRIM(XHLACTR,(WHLACTR),A_VTSCRIPT(&(XHLACTR.upb),(WHLACTR).upb,1,UHLACTR_namelength));
 /* line 253: */
ZCAAOSF_makervc( YHLACTR_name, &AILACTR );
ZHLACTR.Symbol = AILACTR;
ZHLACTR.Module = Currentmodule;
ZHLACTR.Next = EWKACTR_idtable;
BILACTR = A_HEAP(A68_157 ) ;
(*BILACTR) = ZHLACTR ;
EWKACTR_idtable = BILACTR;
 /* line 254: */
 /* line 255: */
 /* line 256: */
RHLACTR_index+=(UHLACTR_namelength+2);
} 
break;
case 2: 
 /* line 257: */
{ 
CILACTR_namelength = (A68_INT)(unsigned char)A_VINDEX(Spec,RHLACTR_index);
RHLACTR_index+=1;
 /* line 258: */
EILACTR = A_VTRIM(DILACTR,(Spec),A_VTSCRIPT(&(DILACTR.upb),(Spec).upb,RHLACTR_index,(Spec).upb)) ;
GILACTR_name = A_VTRIM(FILACTR,(EILACTR),A_VTSCRIPT(&(FILACTR.upb),(EILACTR).upb,1,CILACTR_namelength));
 /* line 259: */
ZCAAOSF_makervc( GILACTR_name, &IILACTR );
HILACTR.Symbol = IILACTR;
HILACTR.Module = Currentmodule;
HILACTR.Next = EWKACTR_idtable;
JILACTR = A_HEAP(A68_157 ) ;
(*JILACTR) = HILACTR ;
EWKACTR_idtable = JILACTR;
 /* line 260: */
 /* line 261: */
 /* line 262: */
RHLACTR_index+=(CILACTR_namelength+4);
} 
break;
case 3: 
 /* line 263: */
{ 
KILACTR_namelength = (A68_INT)(unsigned char)A_VINDEX(Spec,RHLACTR_index);
RHLACTR_index+=1;
 /* line 264: */
MILACTR = A_VTRIM(LILACTR,(Spec),A_VTSCRIPT(&(LILACTR.upb),(Spec).upb,RHLACTR_index,(Spec).upb)) ;
OILACTR_name = A_VTRIM(NILACTR,(MILACTR),A_VTSCRIPT(&(NILACTR.upb),(MILACTR).upb,1,KILACTR_namelength));
 /* line 265: */
ZCAAOSF_makervc( OILACTR_name, &QILACTR );
PILACTR.Symbol = QILACTR;
PILACTR.Module = Currentmodule;
PILACTR.Next = GWKACTR_boldtable;
RILACTR = A_HEAP(A68_157 ) ;
(*RILACTR) = PILACTR ;
GWKACTR_boldtable = RILACTR;
 /* line 266: */
 /* line 267: */
 /* line 268: */
RHLACTR_index+=(KILACTR_namelength+3);
} 
break;
case 4: 
 /* line 269: */
{ 
SILACTR_namelength = (A68_INT)(unsigned char)A_VINDEX(Spec,RHLACTR_index);
RHLACTR_index+=1;
 /* line 270: */
UILACTR = A_VTRIM(TILACTR,(Spec),A_VTSCRIPT(&(TILACTR.upb),(Spec).upb,RHLACTR_index,(Spec).upb)) ;
WILACTR_name = A_VTRIM(VILACTR,(UILACTR),A_VTSCRIPT(&(VILACTR.upb),(UILACTR).upb,1,SILACTR_namelength));
 /* line 271: */
{ 
XILACTR = 1 ;
YILACTR_c = A_VINDEX(WILACTR_name,XILACTR);
ZILACTR = (YILACTR_c>='a');
if ( ZILACTR )
{ZILACTR = (YILACTR_c<='z');
}
AJLACTR = ZILACTR;
if ( AJLACTR )
{ 
BJLACTR = (&GWKACTR_boldtable);
} 
else
{ 
BJLACTR = (&FWKACTR_compoundtable);
} 
} 
CJLACTR_table = BJLACTR;
 /* line 272: */
ZCAAOSF_makervc( WILACTR_name, &EJLACTR );
DJLACTR.Symbol = EJLACTR;
DJLACTR.Module = Currentmodule;
DJLACTR.Next = (*CJLACTR_table);
FJLACTR = A_HEAP(A68_157 ) ;
(*FJLACTR) = DJLACTR ;
(*CJLACTR_table) = FJLACTR;
 /* line 273: */
 /* line 274: */
 /* line 275: */
RHLACTR_index+=(SILACTR_namelength+7);
} 
break;
case 5: 
 /* line 276: */
{ 
GJLACTR_namelength = (A68_INT)(unsigned char)A_VINDEX(Spec,RHLACTR_index);
RHLACTR_index+=1;
 /* line 277: */
IJLACTR = A_VTRIM(HJLACTR,(Spec),A_VTSCRIPT(&(HJLACTR.upb),(Spec).upb,RHLACTR_index,(Spec).upb)) ;
KJLACTR_name = A_VTRIM(JJLACTR,(IJLACTR),A_VTSCRIPT(&(JJLACTR.upb),(IJLACTR).upb,1,GJLACTR_namelength));
 /* line 278: */
{ 
LJLACTR = 1 ;
MJLACTR_c = A_VINDEX(KJLACTR_name,LJLACTR);
NJLACTR = (MJLACTR_c>='a');
if ( NJLACTR )
{NJLACTR = (MJLACTR_c<='z');
}
OJLACTR = NJLACTR;
if ( OJLACTR )
{ 
PJLACTR = (&GWKACTR_boldtable);
} 
else
{ 
PJLACTR = (&FWKACTR_compoundtable);
} 
} 
QJLACTR_table = PJLACTR;
 /* line 279: */
ZCAAOSF_makervc( KJLACTR_name, &SJLACTR );
RJLACTR.Symbol = SJLACTR;
RJLACTR.Module = Currentmodule;
RJLACTR.Next = (*QJLACTR_table);
TJLACTR = A_HEAP(A68_157 ) ;
(*TJLACTR) = RJLACTR ;
(*QJLACTR_table) = TJLACTR;
 /* line 280: */
 /* line 281: */
 /* line 283: */
RHLACTR_index+=(GJLACTR_namelength+9);
} 
break;
case 6: 
 /* line 284: */
RHLACTR_index+=4;
break;
case 7: 
 /* line 285: */
{ 
RHLACTR_index+=4;
 /* line 286: */
UJLACTR_params = (A68_INT)(unsigned char)A_VINDEX(Spec,RHLACTR_index);
 /* line 287: */
 /* line 288: */
 /* line 289: */
RHLACTR_index+=((2*UJLACTR_params)+1);
} 
break;
case 8: 
 /* line 290: */
{ 
RHLACTR_index+=2;
 /* line 291: */
VJLACTR_nmodes = (A68_INT)(unsigned char)A_VINDEX(Spec,RHLACTR_index);
 /* line 292: */
 /* line 293: */
 /* line 294: */
RHLACTR_index+=((2*VJLACTR_nmodes)+1);
} 
break;
case 9: 
 /* line 295: */
{ 
RHLACTR_index+=2;
 /* line 296: */
WJLACTR_nfields = (A68_INT)(unsigned char)A_VINDEX(Spec,RHLACTR_index);
RHLACTR_index+=1;
 /* line 297: */
 /* line 298: */
XJLACTR = WJLACTR_nfields;
for ( YJLACTR = 1;
YJLACTR <= XJLACTR;
YJLACTR += 1 )
{ 
RHLACTR_index+=2;
 /* line 299: */
 /* line 300: */
RHLACTR_index+=((A68_INT)(unsigned char)A_VINDEX(Spec,RHLACTR_index)+1);
}
 /* line 301: */
 /* line 303: */
} 
break;
case 10: 
 /* line 305: */
RHLACTR_index+=7;
break;
case 11: 
 /* line 307: */
RHLACTR_index+=5;
break;
case 12: 
 /* line 309: */
RHLACTR_index+=6;
break;
case 13: 
 /* line 310: */
 /* line 311: */
RHLACTR_index+=4;
break;
default: 
 /* line 312: */
RHLACTR_index = Spec.upb;
break;
} 
} 
}
 /* line 314: */
} 
A_PROC_EXIT(processspec);
return;
} 
#undef NL

A_STATIC A68_VOID  BKLACTR_init_liblookup(A68_174  Unpackmodinfo)
{ 
A68_BITS * CKLACTR_d;
A68_BOOL  DKLACTR;  /* clause result */
A68_142  EKLACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_99  JKLACTR_add_lib_module;   /* proc value of non-global proc */
A68_VC  KLLACTR;  /* avoid structure result */
A68_VC  LLLACTR_filename;
A68_BOOL  MLLACTR;  /* clause result */
A68_VC  NLLACTR;  /* OPERATORS - nil -> mode */
A68_VC  OLLACTR;  /* != */
A68_BOOL  PLLACTR;  /* optbool result */
A68_VC  RLLACTR;  /* OPERATORS - trim index */
A_PROC_ENTRY(init_liblookup);
 /* line 327: */
 /* line 328: */
{ 
ZJLACTR_initialised = A68_TRUE;
 /* line 329: */
CKLACTR_d = HCCAOSF_open_directory((*(&(FRIACTR_library_directory->Dir))), RIBAOSF_ignore_msg);
 /* line 330: */
 /* line 331: */
 /* line 332: */
DKLACTR = (CKLACTR_d==SRBAOSF_null_dirptr);
if ( DKLACTR )
{ 
OWIACTR_pwarning(816, A_HARR(EKLACTR,(*(&(FRIACTR_library_directory->Dir))),A68_VC ));
 /* line 333: */
 /* line 334: */
 /* line 335: */
FRIACTR_library_directory = CRIACTR_nil_dirlist;
} 
else
{ 
JWKACTR_debugmessage(1, GKLACTR);
 /* line 337: */
A_CLOSURE( JKLACTR_add_lib_module, KKLACTR_add_lib_module, LKLACTR_add_lib_module );
(( LKLACTR_add_lib_module * ) ( JKLACTR_add_lib_module.nonlocals )) -> Unpackmodinfo = Unpackmodinfo;
 /* line 358: */
for ( ;; )
{ 
 /* line 359: */
WCCAOSF_get_next_dir_entry( CKLACTR_d, RIBAOSF_ignore_msg, &KLLACTR );
LLLACTR_filename = KLLACTR;
 /* line 360: */
 /* line 361: */
 /* line 362: */
OLLACTR = A_VVAC(NLLACTR) ;
MLLACTR = ! A_VSTRUCTCOMP(LLLACTR_filename,OLLACTR);
if ( !MLLACTR ) break;
 /* line 363: */
 /* line 364: */
PLLACTR = (LLLACTR_filename.upb>2);
if ( PLLACTR )
{ /* line 365: */
PLLACTR = A_VC_EQ(A_VTRIM(RLLACTR,(LLLACTR_filename),A_VTSCRIPT(&(RLLACTR.upb),(LLLACTR_filename).upb,(LLLACTR_filename.upb-1),(LLLACTR_filename).upb)),SLLACTR);
}
 /* line 366: */
if ( PLLACTR )
{ 
 /* line 367: */
 /* line 368: */
A_CALLPROC(JKLACTR_add_lib_module,(LLLACTR_filename),(LLLACTR_filename,(JKLACTR_add_lib_module).nonlocals));
} 
}
 /* line 370: */
QCCAOSF_close_directory(CKLACTR_d, RIBAOSF_ignore_msg);
 /* line 372: */
 /* line 373: */
 /* line 374: */
if ( (ZCHACTR_tracelevel(ULLACTR)>=10) )
{ 
 /* line 384: */
JWKACTR_debugmessage(10, FMLACTR);
XLLACTR_printmap(EWKACTR_idtable);
 /* line 385: */
JWKACTR_debugmessage(10, HMLACTR);
XLLACTR_printmap(FWKACTR_compoundtable);
 /* line 386: */
JWKACTR_debugmessage(10, JMLACTR);
 /* line 387: */
 /* line 388: */
XLLACTR_printmap(GWKACTR_boldtable);
} 
} 
} 
A_PROC_EXIT(init_liblookup);
return;
} 
#undef NL

A_STATIC A68_106  MMLACTR_lookup_in_table(A68_106  Id, A68_157 * Map)
{ 
A68_VC  QMLACTR;  /* OPERATORS - istruct -> vector */
A68_VC  RMLACTR;  /* avoid structure result */
A68_VC  SMLACTR_reqd_symbol;
A68_157 * VMLACTR_current_map;
A68_106  YMLACTR;  /* clause result */
A68_VC  BNLACTR;  /* OPERATORS - istruct -> vector */
A68_106  CNLACTR;  /* OPERATORS - istruct -> vector */
A68_VC  DNLACTR;  /* avoid structure result */
A_PROC_ENTRY(lookup_in_table);
 /* line 391: */
 /* line 392: */
{ 
BNAAOSF_before( A_HISVEC(QMLACTR,Id,32,A68_CHAR ), ' ', &RMLACTR );
SMLACTR_reqd_symbol = RMLACTR;
 /* line 394: */
JWKACTR_debugmessage(1, A_VC_PLUS(UMLACTR,SMLACTR_reqd_symbol));
 /* line 396: */
VMLACTR_current_map = Map;
 /* line 398: */
for ( ;; )
{ 
 /* line 399: */
 /* line 400: */
if ( !((VMLACTR_current_map!=BWKACTR_nilmap)) ) break;
if ( A_VC_EQ((*(&(VMLACTR_current_map->Symbol))),SMLACTR_reqd_symbol) )
{ 
goto PMLACTR_found;
} 
 /* line 401: */
 /* line 402: */
VMLACTR_current_map = (*(&(VMLACTR_current_map->Next)));
}
 /* line 404: */
JWKACTR_debugmessage(1, A_VC_PLUS(SMLACTR_reqd_symbol,XMLACTR));
 /* line 405: */
 /* line 406: */
YMLACTR = DWKACTR_nullid;
goto NMLACTR;
PMLACTR_found:
 /* line 407: */
CNLACTR = (*(*(&(VMLACTR_current_map->Module)))) ;
BNAAOSF_before( A_VC_PLUS(A_VC_PLUS(SMLACTR_reqd_symbol,ANLACTR),A_HISVEC(BNLACTR,CNLACTR,32,A68_CHAR )), ' ', &DNLACTR );
JWKACTR_debugmessage(1, DNLACTR);
 /* line 408: */
 /* line 409: */
YMLACTR = (*(*(&(VMLACTR_current_map->Module))));
NMLACTR: ;
} 
A_PROC_EXIT(lookup_in_table);
return( YMLACTR );
} 
#undef NL

A68_106  HNLACTR_lookup_library(A68_106  Id, A68_INT  Type, A68_174  Unpackmodinfo)
{ 
A68_106  INLACTR;  /* clause result */
A68_157 * JNLACTR;  /* clause result */
A_PROC_ENTRY(lookup_library);
 /* line 419: */
 /* line 420: */
 /* line 421: */
 /* line 423: */
if ( (FRIACTR_library_directory==CRIACTR_nil_dirlist) )
{ 
 /* line 424: */
INLACTR = DWKACTR_nullid;
} 
else
{ 
if ( !ZJLACTR_initialised )
{ 
BKLACTR_init_liblookup(Unpackmodinfo);
} 
 /* line 426: */
switch ( Type )
{ 
case 1: 
JNLACTR = EWKACTR_idtable;
break;
case 2: 
JNLACTR = FWKACTR_compoundtable;
break;
case 3: 
JNLACTR = GWKACTR_boldtable;
break;
default: 
A_IMP_SKIP ;
break;
} 
 /* line 427: */
INLACTR = MMLACTR_lookup_in_table(Id, JNLACTR);
} 
A_PROC_EXIT(lookup_library);
return( INLACTR );
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 3: */
 /* line 5: */
void WVKACTR(void)   /* initialise DECS liblookup */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/shields/projects/Algol68/Tools/Algol68toC/src/a68toc","-v","-uname","seedfile","-lib","/home/shields/projects/Algol68/Tools/Algol68toC/a68config","-dir","/home/shields/projects/Algol68/Tools/Algol68toC/a68config","-dir","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel","-dir",".","liblookup.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/shields/projects/Algol68/Tools/Algol68toC/a68config","A68_CDIR=","A68_DIR=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/shields/projects/Algol68/Tools/Algol68toC/a68config/a68config.m","./moduletracer.m","./incinstallation.m","./environment.m","./common.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/osif.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/usefulops.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
BCHACTR();   /* USE moduletracer */
ODAACTR();   /* USE incinstallation */
HPIACTR();   /* USE environment */
WSCAOSF();   /* USE osif */
IKAAOSF();   /* USE usefulops */
/* --- Initialise configuration information */
A_config.source_file = "/home/shields/projects/Algol68/Tools/Algol68toC/src/liblookup.a68";
A_config.translation_time = "Sun Sep 26 21:50:57 2004";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "VVKACTR (from seed file) ";
A_config.spec_change_time = "Sun Sep 26 21:50:57 2004";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS liblookup);
UEAALIB_a68config(LGAALIB_configinfo, AWKACTR);
 /* line 53: */
 /* line 55: */
 /* line 56: */
DWKACTR_nullid = CWKACTR;
 /* line 58: */
 /* line 59: */
EWKACTR_idtable = BWKACTR_nilmap;
 /* line 60: */
FWKACTR_compoundtable = BWKACTR_nilmap;
 /* line 61: */
GWKACTR_boldtable = BWKACTR_nilmap;
 /* line 66: */
 /* line 79: */
 /* line 89: */
 /* line 240: */
 /* line 321: */
ZJLACTR_initialised = A68_FALSE;
 /* line 323: */
 /* line 390: */
 /* line 411: */
 /* line 429: */
 /* line 431: */
 /* line 433: */
/*SKIP*/;
A_PROC_EXIT(DECS liblookup);
} 
#undef NL
/* end of translation of liblookup.a68 */
