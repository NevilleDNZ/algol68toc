/* UNAME:GPIACTR */
#include <algol68/Asupport.h>
A_ISTRUCT(A68_CHAR ,16000000,A68t31);
typedef struct A68t31  A68_31 ;    /* STRUCT 16000000 CHAR */
A_ISTRUCT(struct A68t31 *,16000000,A68t32);
typedef struct A68t32  A68_32 ;    /* STRUCT 16000000 REF MODE31 */

A_PROCEDURE(A68_VOID ,A68t33,(struct A68t31 *,A68_VC *),(struct A68t31 *,A68_VC *,void *));
typedef struct A68t33  A68_33 ;    /* PROC(REF MODE31) REF MODE26 */

A_PROCEDURE(A68_CHAR *,A68t34,(A68_VC ),(A68_VC ,void *));
typedef struct A68t34  A68_34 ;    /* PROC(MODE26) REF CHAR */
A_VECTOR(A68_INT ,A68t35);
typedef struct A68t35  A68_35 ;    /* VECTOR [] INT */

A_PROCEDURE(A68_INT *,A68t36,(struct A68t35 ),(struct A68t35 ,void *));
typedef struct A68t36  A68_36 ;    /* PROC(MODE35) REF INT */

A_PROCEDURE(A68_CHAR *,A68t37,(struct A68t31 *),(struct A68t31 *,void *));
typedef struct A68t37  A68_37 ;    /* PROC(REF MODE31) REF CHAR */

A_PROCEDURE(struct A68t31 *,A68t38,(A68_CHAR *),(A68_CHAR *,void *));
typedef struct A68t38  A68_38 ;    /* PROC(REF CHAR) REF MODE31 */

A_PROCEDURE(A68_VOID ,A68t39,(void),(void *));
typedef struct A68t39  A68_39 ;    /* PROC VOID */
struct A68t40{
A68_BITS * Cp;
struct A68t31 * Env;
};
typedef struct A68t40  A68_40 ;    /* STRUCT(REF BITS,REF MODE31)  */

A_PROCEDURE(struct A68t40 *,A68t41,(struct A68t39 *),(struct A68t39 *,void *));
typedef struct A68t41  A68_41 ;    /* PROC(REF MODE39) REF MODE40 */

A_PROCEDURE(A68_VOID ,A68t42,(struct A68t39 ,struct A68t40 *),(struct A68t39 ,struct A68t40 *,void *));
typedef struct A68t42  A68_42 ;    /* PROC(MODE39) MODE40 */

A_PROCEDURE(A68_VOID ,A68t43,(A68_INT ),(A68_INT ,void *));
typedef struct A68t43  A68_43 ;    /* PROC(INT) VOID */

A_PROCEDURE(A68_VOID ,A68t44,(struct A68t43 ,struct A68t40 *),(struct A68t43 ,struct A68t40 *,void *));
typedef struct A68t44  A68_44 ;    /* PROC(MODE43) MODE40 */

A_PROCEDURE(A68_VOID ,A68t45,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t45  A68_45 ;    /* PROC(MODE26) MODE26 */
struct A68t47 ;
struct A68t48 ;

A_PROCEDURE(A68_VOID ,A68t46,(struct A68t47 ,struct A68t48 ),(struct A68t47 ,struct A68t48 ,void *));
typedef struct A68t46  A68_46 ;    /* PROC(MODE47,MODE48) VOID */
struct A68t47{
A68_INT  Number;
A_PAD_INT(PAD_1)
struct A68t49 * Facility;
A68_BITS  Class;
A_PAD_BITS(PAD_2)
};
typedef struct A68t47  A68_47 ;    /* STRUCT(INT,REF MODE49,BITS)  */
A_VECTOR(A68_VC ,A68t48);
typedef struct A68t48  A68_48 ;    /* VECTOR [] MODE26 */
A_VECTOR(struct A68t51 ,A68t50);
typedef struct A68t50  A68_50 ;    /* VECTOR [] MODE51 */
struct A68t51{
struct A68t47  Msgno;
A68_VC  Text;
};
typedef struct A68t51  A68_51 ;    /* STRUCT(MODE47,REF MODE26)  */
struct A68t49{
A68_VC  Name;
struct A68t50  Messages;
};
typedef struct A68t49  A68_49 ;    /* STRUCT(REF MODE26,REF MODE50)  */
struct A68t52{
A68_VC  Name;
A68_BITS * Stdiofile;
};
typedef struct A68t52  A68_52 ;    /* STRUCT(REF MODE26,REF BITS)  */
struct A68t53{
A68_INT  Status;
A_PAD_INT(PAD_3)
};
typedef struct A68t53  A68_53 ;    /* STRUCT(INT)  */

A_PROCEDURE(A68_BOOL ,A68t54,(struct A68t53 ,struct A68t53 ),(struct A68t53 ,struct A68t53 ,void *));
typedef struct A68t54  A68_54 ;    /* PROC(MODE53,MODE53) BOOL */
A_ISTRUCT(A68_CHAR ,4,A68t56);
typedef struct A68t56  A68_56 ;    /* STRUCT 4 CHAR */
struct A68t55{
struct A68t56  Access;
A_PAD_ISTRUCT(A68_56 ,PAD_4)
};
typedef struct A68t55  A68_55 ;    /* STRUCT(MODE56)  */

A_PROCEDURE(A68_VOID ,A68t57,(struct A68t52 *,A68_VC *),(struct A68t52 *,A68_VC *,void *));
typedef struct A68t57  A68_57 ;    /* PROC(REF MODE52) MODE26 */

A_PROCEDURE(struct A68t52 *,A68t58,(A68_VC ,struct A68t55 ,struct A68t46 ),(A68_VC ,struct A68t55 ,struct A68t46 ,void *));
typedef struct A68t58  A68_58 ;    /* PROC(MODE26,MODE55,MODE46) REF MODE52 */

A_PROCEDURE(A68_VOID ,A68t59,(struct A68t52 *,struct A68t46 ),(struct A68t52 *,struct A68t46 ,void *));
typedef struct A68t59  A68_59 ;    /* PROC(REF MODE52,MODE46) VOID */

A_PROCEDURE(A68_VOID ,A68t60,(struct A68t52 *,A68_VC ,A68_INT *,struct A68t46 ,struct A68t53 *),(struct A68t52 *,A68_VC ,A68_INT *,struct A68t46 ,struct A68t53 *,void *));
typedef struct A68t60  A68_60 ;    /* PROC(REF MODE52,REF MODE26,REF INT,MODE46) MODE53 */

A_PROCEDURE(A68_VOID ,A68t61,(struct A68t52 *,A68_VC ,struct A68t46 ,struct A68t53 *),(struct A68t52 *,A68_VC ,struct A68t46 ,struct A68t53 *,void *));
typedef struct A68t61  A68_61 ;    /* PROC(REF MODE52,MODE26,MODE46) MODE53 */

A_PROCEDURE(A68_VOID ,A68t62,(struct A68t52 *,A68_LINT ,struct A68t46 ,struct A68t53 *),(struct A68t52 *,A68_LINT ,struct A68t46 ,struct A68t53 *,void *));
typedef struct A68t62  A68_62 ;    /* PROC(REF MODE52,LONG INT,MODE46) MODE53 */

A_PROCEDURE(A68_VOID ,A68t63,(struct A68t52 *,A68_LINT *,struct A68t46 ,struct A68t53 *),(struct A68t52 *,A68_LINT *,struct A68t46 ,struct A68t53 *,void *));
typedef struct A68t63  A68_63 ;    /* PROC(REF MODE52,REF LONG INT,MODE46) MODE53 */

A_PROCEDURE(A68_VOID ,A68t64,(struct A68t52 *,struct A68t46 ,struct A68t53 *),(struct A68t52 *,struct A68t46 ,struct A68t53 *,void *));
typedef struct A68t64  A68_64 ;    /* PROC(REF MODE52,MODE46) MODE53 */

A_PROCEDURE(A68_VOID ,A68t65,(A68_VC ,struct A68t46 ,struct A68t53 *),(A68_VC ,struct A68t46 ,struct A68t53 *,void *));
typedef struct A68t65  A68_65 ;    /* PROC(MODE26,MODE46) MODE53 */

A_PROCEDURE(A68_VOID ,A68t66,(A68_VC ,A68_VC ,struct A68t46 ,struct A68t53 *),(A68_VC ,A68_VC ,struct A68t46 ,struct A68t53 *,void *));
typedef struct A68t66  A68_66 ;    /* PROC(MODE26,MODE26,MODE46) MODE53 */

A_PROCEDURE(A68_VOID ,A68t67,(A68_VC ,A68_VC ,struct A68t46 ,A68_VC *),(A68_VC ,A68_VC ,struct A68t46 ,A68_VC *,void *));
typedef struct A68t67  A68_67 ;    /* PROC(MODE26,MODE26,MODE46) MODE26 */
struct A68t68{
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
typedef struct A68t68  A68_68 ;    /* STRUCT(SHORT BITS,LONG BITS,SHORT INT,SHORT INT,SHORT BITS,SHORT BITS,LONG INT,LONG INT,LONG INT,LONG INT)  */
struct A68t70 ;

A_PROCEDURE(struct A68t68 *,A68t69,(struct A68t70 ,struct A68t46 ),(struct A68t70 ,struct A68t46 ,void *));
typedef struct A68t69  A68_69 ;    /* PROC(MODE70,MODE46) REF MODE68 */
struct A68t70 { A68_INT mode; union {
struct A68t52 * mode1;
A68_VC  mode2;
} data; };
typedef struct A68t70  A68_70 ;    /* UNION(REF MODE52,MODE26)  */

A_PROCEDURE(A68_BOOL ,A68t71,(struct A68t52 *),(struct A68t52 *,void *));
typedef struct A68t71  A68_71 ;    /* PROC(REF MODE52) BOOL */

A_PROCEDURE(A68_BITS *,A68t72,(A68_VC ,struct A68t46 ),(A68_VC ,struct A68t46 ,void *));
typedef struct A68t72  A68_72 ;    /* PROC(MODE26,MODE46) REF BITS */

A_PROCEDURE(A68_VOID ,A68t73,(A68_BITS *,struct A68t46 ),(A68_BITS *,struct A68t46 ,void *));
typedef struct A68t73  A68_73 ;    /* PROC(REF BITS,MODE46) VOID */

A_PROCEDURE(A68_VOID ,A68t74,(A68_BITS *,struct A68t46 ,A68_VC *),(A68_BITS *,struct A68t46 ,A68_VC *,void *));
typedef struct A68t74  A68_74 ;    /* PROC(REF BITS,MODE46) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t75,(A68_VC *),(A68_VC *,void *));
typedef struct A68t75  A68_75 ;    /* PROC MODE26 */

A_PROCEDURE(A68_LINT ,A68t76,(void),(void *));
typedef struct A68t76  A68_76 ;    /* PROC LONG INT */

A_PROCEDURE(A68_VOID ,A68t77,(A68_LINT ,A68_VC *),(A68_LINT ,A68_VC *,void *));
typedef struct A68t77  A68_77 ;    /* PROC(LONG INT) MODE26 */

A_PROCEDURE(A68_INT ,A68t78,(A68_VC ,struct A68t46 ),(A68_VC ,struct A68t46 ,void *));
typedef struct A68t78  A68_78 ;    /* PROC(MODE26,MODE46) INT */

A_PROCEDURE(A68_INT ,A68t79,(void),(void *));
typedef struct A68t79  A68_79 ;    /* PROC INT */
struct A68t80{
A68_VC  Filename;
A68_VC  Directory;
A68_VC  Name;
A68_VC  Type;
};
typedef struct A68t80  A68_80 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE26,REF MODE26)  */

A_PROCEDURE(A68_VOID ,A68t81,(A68_VC ,A68_VC ,struct A68t46 ,struct A68t80 *),(A68_VC ,A68_VC ,struct A68t46 ,struct A68t80 *,void *));
typedef struct A68t81  A68_81 ;    /* PROC(MODE26,MODE26,MODE46) MODE80 */

A_PROCEDURE(A68_VOID ,A68t82,(struct A68t48 *),(struct A68t48 *,void *));
typedef struct A68t82  A68_82 ;    /* PROC MODE48 */

A_PROCEDURE(A68_VOID ,A68t83,(A68_VC ,struct A68t46 ,struct A68t48 *),(A68_VC ,struct A68t46 ,struct A68t48 *,void *));
typedef struct A68t83  A68_83 ;    /* PROC(MODE26,MODE46) MODE48 */

A_PROCEDURE(A68_VOID ,A68t84,(struct A68t35 ,struct A68t46 ,struct A68t46 ),(struct A68t35 ,struct A68t46 ,struct A68t46 ,void *));
typedef struct A68t84  A68_84 ;    /* PROC(MODE35,MODE46,MODE46) VOID */

A_PROCEDURE(A68_VOID ,A68t85,(struct A68t35 ,struct A68t46 ),(struct A68t35 ,struct A68t46 ,void *));
typedef struct A68t85  A68_85 ;    /* PROC(MODE35,MODE46) VOID */

A_PROCEDURE(A68_VOID ,A68t86,(A68_INT ,struct A68t46 ,struct A68t46 *),(A68_INT ,struct A68t46 ,struct A68t46 *,void *));
typedef struct A68t86  A68_86 ;    /* PROC(INT,MODE46) MODE46 */

A_PROCEDURE(A68_VOID ,A68t87,(A68_BITS ),(A68_BITS ,void *));
typedef struct A68t87  A68_87 ;    /* PROC(BITS) VOID */
struct A68t89 ;

A_PROCEDURE(A68_VOID ,A68t88,(struct A68t89 ),(struct A68t89 ,void *));
typedef struct A68t88  A68_88 ;    /* PROC(MODE89) VOID */

A_PROCEDURE(A68_VOID ,A68t89,(A68_VC ),(A68_VC ,void *));
typedef struct A68t89  A68_89 ;    /* PROC(MODE26) VOID */
struct A68t90{
A68_VC  Name;
A68_INT  Value;
A_PAD_INT(PAD_15)
};
typedef struct A68t90  A68_90 ;    /* STRUCT(MODE26,INT)  */

A_PROCEDURE(A68_VOID ,A68t91,(A68_BOOL ,struct A68t90 *),(A68_BOOL ,struct A68t90 *,void *));
typedef struct A68t91  A68_91 ;    /* PROC(BOOL) MODE90 */
struct A68t93 ;

A_PROCEDURE(A68_VOID ,A68t92,(struct A68t93 ,struct A68t46 ),(struct A68t93 ,struct A68t46 ,void *));
typedef struct A68t92  A68_92 ;    /* PROC(MODE93,MODE46) VOID */
A_VECTOR(struct A68t90 ,A68t93);
typedef struct A68t93  A68_93 ;    /* VECTOR [] MODE90 */

A_PROCEDURE(A68_INT *,A68t94,(A68_INT *,A68_VC ),(A68_INT *,A68_VC ,void *));
typedef struct A68t94  A68_94 ;    /* PROC(REF INT,MODE26) REF INT */

A_PROCEDURE(A68_VOID ,A68t95,(A68_VC ,A68_INT ,A68_VC *),(A68_VC ,A68_INT ,A68_VC *,void *));
typedef struct A68t95  A68_95 ;    /* PROC(REF MODE26,INT) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t96,(A68_VC ,A68_CHAR ,A68_VC *),(A68_VC ,A68_CHAR ,A68_VC *,void *));
typedef struct A68t96  A68_96 ;    /* PROC(REF MODE26,CHAR) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t97,(A68_VC ,A68_CHAR ,A68_VC *),(A68_VC ,A68_CHAR ,A68_VC *,void *));
typedef struct A68t97  A68_97 ;    /* PROC(MODE26,CHAR) MODE26 */

A_PROCEDURE(A68_VOID ,A68t98,(struct A68t48 ,A68_VC *),(struct A68t48 ,A68_VC *,void *));
typedef struct A68t98  A68_98 ;    /* PROC(MODE48) REF MODE26 */

A_PROCEDURE(A68_INT ,A68t99,(A68_CHAR ,A68_VC ),(A68_CHAR ,A68_VC ,void *));
typedef struct A68t99  A68_99 ;    /* PROC(CHAR,MODE26) INT */

A_PROCEDURE(A68_VOID ,A68t100,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t100  A68_100 ;    /* PROC(MODE26) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t101,(A68_VC ,A68_CHAR ),(A68_VC ,A68_CHAR ,void *));
typedef struct A68t101  A68_101 ;    /* PROC(REF MODE26,CHAR) VOID */

A_PROCEDURE(struct A68t56 ,A68t102,(A68_INT ),(A68_INT ,void *));
typedef struct A68t102  A68_102 ;    /* PROC(INT) MODE56 */

A_PROCEDURE(A68_INT ,A68t103,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t103  A68_103 ;    /* PROC(INT,INT) INT */

A_PROCEDURE(A68_VOID ,A68t104,(A68_CHAR ,A68_VC ,A68_VC *),(A68_CHAR ,A68_VC ,A68_VC *,void *));
typedef struct A68t104  A68_104 ;    /* PROC(CHAR,REF MODE26) REF MODE26 */

A_PROCEDURE(A68_INT ,A68t105,(A68_VC ),(A68_VC ,void *));
typedef struct A68t105  A68_105 ;    /* PROC(MODE26) INT */

A_PROCEDURE(A68_BITS ,A68t106,(A68_BITS ,A68_BITS ),(A68_BITS ,A68_BITS ,void *));
typedef struct A68t106  A68_106 ;    /* PROC(BITS,BITS) BITS */

A_PROCEDURE(A68_LBITS ,A68t107,(A68_LBITS ,A68_LBITS ),(A68_LBITS ,A68_LBITS ,void *));
typedef struct A68t107  A68_107 ;    /* PROC(LONG BITS,LONG BITS) LONG BITS */

A_PROCEDURE(A68_BITS *,A68t108,(A68_BITS *,A68_BITS ),(A68_BITS *,A68_BITS ,void *));
typedef struct A68t108  A68_108 ;    /* PROC(REF BITS,BITS) REF BITS */

A_PROCEDURE(A68_VOID ,A68t109,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t109  A68_109 ;    /* PROC(INT) MODE26 */

A_PROCEDURE(A68_VOID ,A68t110,(A68_INT ,A68_INT ,A68_VC *),(A68_INT ,A68_INT ,A68_VC *,void *));
typedef struct A68t110  A68_110 ;    /* PROC(INT,INT) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t111,(A68_LINT ,A68_INT ,A68_VC *),(A68_LINT ,A68_INT ,A68_VC *,void *));
typedef struct A68t111  A68_111 ;    /* PROC(LONG INT,INT) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t112,(A68_CHAR ,A68_INT *,A68_VC ),(A68_CHAR ,A68_INT *,A68_VC ,void *));
typedef struct A68t112  A68_112 ;    /* PROC(CHAR,REF INT,MODE26) BOOL */

A_PROCEDURE(A68_VOID ,A68t113,(A68_LBITS ,A68_INT ,A68_VC *),(A68_LBITS ,A68_INT ,A68_VC *,void *));
typedef struct A68t113  A68_113 ;    /* PROC(LONG BITS,INT) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t114,(A68_INT *,A68_VC ),(A68_INT *,A68_VC ,void *));
typedef struct A68t114  A68_114 ;    /* PROC(REF INT,MODE26) BOOL */
A_ISTRUCT(A68_CHAR ,32,A68t115);
typedef struct A68t115  A68_115 ;    /* STRUCT 32 CHAR */
A_ISTRUCT(A68_CHAR ,7,A68t117);
typedef struct A68t117  A68_117 ;    /* STRUCT 7 CHAR */
struct A68t116{
struct A68t117  Prefix;
A_PAD_ISTRUCT(A68_117 ,PAD_16)
A68_BOOL  Optimised;
A_PAD_BOOL(PAD_17)
A68_BOOL  Iddec;
A_PAD_BOOL(PAD_18)
A68_BOOL  Globalproc;
A_PAD_BOOL(PAD_19)
A68_BOOL  Keptgenproc;
A_PAD_BOOL(PAD_20)
A68_BOOL  Forceuse;
A_PAD_BOOL(PAD_21)
A68_VC  Definition;
A68_VC  Rhs;
};
typedef struct A68t116  A68_116 ;    /* STRUCT(MODE117,BOOL,BOOL,BOOL,BOOL,BOOL,REF MODE26,REF MODE26)  */
A_VECTOR(struct A68t120 ,A68t119);
typedef struct A68t119  A68_119 ;    /* VECTOR [] MODE120 */
A_VECTOR(struct A68t126 ,A68t125);
typedef struct A68t125  A68_125 ;    /* VECTOR [] MODE126 */
struct A68t126{
struct A68t115  N;
A_PAD_ISTRUCT(A68_115 ,PAD_22)
struct A68t115  F;
A_PAD_ISTRUCT(A68_115 ,PAD_23)
A68_INT  Level;
A_PAD_INT(PAD_24)
};
typedef struct A68t126  A68_126 ;    /* STRUCT(MODE115,MODE115,INT)  */
struct A68t124 { A68_INT mode; union {
A68_VC  mode1;
struct A68t125  mode2;
} data; };
typedef struct A68t124  A68_124 ;    /* UNION(REF MODE26,REF MODE125)  */
struct A68t121{
struct A68t115  F;
A_PAD_ISTRUCT(A68_115 ,PAD_25)
A68_INT  No;
A_PAD_INT(PAD_26)
A68_INT  Nl;
A_PAD_INT(PAD_27)
A68_INT  Ng;
A_PAD_INT(PAD_28)
struct A68t124  U;
};
typedef struct A68t121  A68_121 ;    /* STRUCT(MODE115,INT,INT,INT,MODE124)  */
A_VECTOR(struct A68t116 ,A68t122);
typedef struct A68t122  A68_122 ;    /* VECTOR [] MODE116 */
A_VECTOR(struct A68t117 ,A68t123);
typedef struct A68t123  A68_123 ;    /* VECTOR [] MODE117 */
struct A68t120{
struct A68t121  Xs;
struct A68t117  Ys;
A_PAD_ISTRUCT(A68_117 ,PAD_29)
A68_LINT  Timeoflastchange;
A_PAD_LINT(PAD_30)
struct A68t122  Keptinfo;
struct A68t123  Cnames;
};
typedef struct A68t120  A68_120 ;    /* STRUCT(MODE121,MODE117,LONG INT,REF MODE122,REF MODE123)  */
struct A68t118{
struct A68t117  Uname;
A_PAD_ISTRUCT(A68_117 ,PAD_31)
struct A68t117  Lname;
A_PAD_ISTRUCT(A68_117 ,PAD_32)
struct A68t117  Gname;
A_PAD_ISTRUCT(A68_117 ,PAD_33)
struct A68t119  Specs;
};
typedef struct A68t118  A68_118 ;    /* STRUCT(MODE117,MODE117,MODE117,REF MODE119)  */

A_PROCEDURE(A68_BOOL ,A68t127,(A68_INT ,A68_VC ),(A68_INT ,A68_VC ,void *));
typedef struct A68t127  A68_127 ;    /* PROC(INT,MODE26) BOOL */

A_PROCEDURE(A68_VOID ,A68t128,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t128  A68_128 ;    /* PROC(INT) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t129,(A68_BOOL ),(A68_BOOL ,void *));
typedef struct A68t129  A68_129 ;    /* PROC(BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t130,(A68_BOOL ,A68_VC *),(A68_BOOL ,A68_VC *,void *));
typedef struct A68t130  A68_130 ;    /* PROC(BOOL) MODE26 */

A_PROCEDURE(A68_VOID ,A68t131,(struct A68t39 ),(struct A68t39 ,void *));
typedef struct A68t131  A68_131 ;    /* PROC(MODE39) VOID */

A_PROCEDURE(A68_VOID ,A68t132,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t132  A68_132 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,66,A68t133);
typedef struct A68t133  A68_133 ;    /* STRUCT 66 CHAR */
struct A68t134{
A68_VC  Dir;
struct A68t134 * Next;
};
typedef struct A68t134  A68_134 ;    /* STRUCT(REF MODE26,REF MODE134)  */
struct A68t135{
A68_INT  Cfile;
A_PAD_INT(PAD_34)
};
typedef struct A68t135  A68_135 ;    /* STRUCT(INT)  */
struct A68t136{
A68_INT  Seedfile;
A_PAD_INT(PAD_35)
};
typedef struct A68t136  A68_136 ;    /* STRUCT(INT)  */
struct A68t137 { A68_INT mode; union {
struct A68t135  mode1;
struct A68t136  mode2;
struct A68t117  mode3;
} data; };
typedef struct A68t137  A68_137 ;    /* UNION(MODE135,MODE136,MODE117,VOID)  */
A_ISTRUCT(A68_CHAR ,10,A68t138);
typedef struct A68t138  A68_138 ;    /* STRUCT 10 CHAR */
A_ISTRUCT(A68_CHAR ,1,A68t139);
typedef struct A68t139  A68_139 ;    /* STRUCT 0 CHAR */
A_ISTRUCT(A68_CHAR ,8,A68t140);
typedef struct A68t140  A68_140 ;    /* STRUCT 8 CHAR */
A_ISTRUCT(A68_CHAR ,20,A68t141);
typedef struct A68t141  A68_141 ;    /* STRUCT 20 CHAR */
A_ISTRUCT(A68_CHAR ,15,A68t142);
typedef struct A68t142  A68_142 ;    /* STRUCT 15 CHAR */

A_PROCEDURE(A68_VOID ,A68t143,(A68_INT ,A68_VC ,A68_INT ),(A68_INT ,A68_VC ,A68_INT ,void *));
typedef struct A68t143  A68_143 ;    /* PROC(INT,MODE26,INT) VOID */
A_ISTRUCT(A68_CHAR ,2,A68t144);
typedef struct A68t144  A68_144 ;    /* STRUCT 2 CHAR */
A_ISTRUCT(A68_CHAR ,18,A68t145);
typedef struct A68t145  A68_145 ;    /* STRUCT 18 CHAR */
A_ISTRUCT(A68_CHAR ,6,A68t146);
typedef struct A68t146  A68_146 ;    /* STRUCT 6 CHAR */
A_ISTRUCT(A68_CHAR ,12,A68t147);
typedef struct A68t147  A68_147 ;    /* STRUCT 12 CHAR */
A_ISTRUCT(A68_CHAR ,26,A68t148);
typedef struct A68t148  A68_148 ;    /* STRUCT 26 CHAR */
A_ROW(A68_VC ,A68t149,1);
typedef struct A68t149  A68_149 ;    /* [] MODE26 */

A_PROCEDURE(A68_VOID ,A68t150,(A68_INT ,struct A68t149 ,A68_INT ),(A68_INT ,struct A68t149 ,A68_INT ,void *));
typedef struct A68t150  A68_150 ;    /* PROC(INT,MODE149,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t151,(A68_INT ,struct A68t149 ),(A68_INT ,struct A68t149 ,void *));
typedef struct A68t151  A68_151 ;    /* PROC(INT,MODE149) VOID */

A_PROCEDURE(A68_VOID ,A68t152,(A68_VC ,A68_INT ),(A68_VC ,A68_INT ,void *));
typedef struct A68t152  A68_152 ;    /* PROC(MODE26,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t153,(A68_VC ,A68_BOOL ),(A68_VC ,A68_BOOL ,void *));
typedef struct A68t153  A68_153 ;    /* PROC(MODE26,BOOL) VOID */
struct A68t154{
A68_VC  Modinfo_file;
struct A68t154 * Next;
};
typedef struct A68t154  A68_154 ;    /* STRUCT(REF MODE26,REF MODE154)  */
struct A68t155{
A68_VC  Env_name;
A68_VC  Env_value;
struct A68t155 * Next;
};
typedef struct A68t155  A68_155 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE155)  */
struct A68t156{
A68_VC  Version;
A68_LINT  Translationtime;
A_PAD_LINT(PAD_36)
A68_VC  Sourcefile;
struct A68t117  Nameseed;
A_PAD_ISTRUCT(A68_117 ,PAD_37)
struct A68t137  Nameseedorigin;
struct A68t154 * Used_modules;
A68_VC  Commandline;
struct A68t155 * Environment;
};
typedef struct A68t156  A68_156 ;    /* STRUCT(REF MODE26,LONG INT,REF MODE26,MODE117,MODE137,REF MODE154,REF MODE26,REF MODE155)  */

A_PROCEDURE(A68_VOID ,A68t157,(A68_VC ),(A68_VC ,void *));
typedef struct A68t157  A68_157 ;    /* PROC(REF MODE26) VOID */
A_ISTRUCT(A68_CHAR ,5,A68t158);
typedef struct A68t158  A68_158 ;    /* STRUCT 5 CHAR */
A_ISTRUCT(A68_CHAR ,14,A68t159);
typedef struct A68t159  A68_159 ;    /* STRUCT 14 CHAR */
A_ISTRUCT(A68_CHAR ,9,A68t160);
typedef struct A68t160  A68_160 ;    /* STRUCT 9 CHAR */
A_ISTRUCT(A68_CHAR ,13,A68t161);
typedef struct A68t161  A68_161 ;    /* STRUCT 13 CHAR */

A_PROCEDURE(struct A68t52 *,A68t162,(A68_VC ,struct A68t134 *,A68_VC *),(A68_VC ,struct A68t134 *,A68_VC *,void *));
typedef struct A68t162  A68_162 ;    /* PROC(MODE26,REF MODE134,REF REF MODE26) REF MODE52 */

A_PROCEDURE(A68_BITS ,A68t163,(void),(void *));
typedef struct A68t163  A68_163 ;    /* PROC BITS */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
extern A68_VOID  JGAALIB_show_a68config(struct A68t89 );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from ctrans_version --- */
extern A68_VC  SHAACTR_ctrans_version;
/* --- End of imports from ctrans_version --- */


/* --- Imports from message --- */
extern A68_VOID  KDHACTR_message(A68_INT ,A68_VC *);
extern A68_VOID  GPIACTR_initialisemessages(A68_BOOL );
/* --- End of imports from message --- */


/* --- Imports from moduletracer --- */
extern A68_BOOL  TCHACTR_settracelevel(A68_INT ,A68_VC );
/* --- End of imports from moduletracer --- */


/* --- Imports from incinstallation --- */
#define VDAACTR_maxid 32
#define WDAACTR_maxuname 7
/* --- End of imports from incinstallation --- */


/* --- Imports from usefulops --- */
extern A68_VOID  ROAAOSF_whole(A68_INT ,A68_INT ,A68_VC *);
extern A68_BOOL  TQAAOSF_vcdectoint(A68_INT *,A68_VC );
/* --- End of imports from usefulops --- */


/* --- Imports from osif --- */
#include <errno.h>

#define RCBAOSF_errno errno
extern A68_46  RIBAOSF_ignore_msg;
extern A68_52 * VSBAOSF_stdout;
extern A68_52 * WSBAOSF_stderr;
extern A68_52 * TSBAOSF_nil_file;
#define HVBAOSF_newline_char '\012'
extern A68_52 * RVBAOSF_open_file(A68_VC ,struct A68t55 ,struct A68t46 );
extern A68_VOID  VXBAOSF_write_buffer(struct A68t52 *,A68_VC ,struct A68t46 ,A68_53 *);
extern A68_55  BTBAOSF_read_access;
extern A68_VOID  EPBAOSF_get_working_directory(A68_VC *);
extern A68_VOID  QPBAOSF_get_env_var(A68_VC ,A68_VC *);
extern A68_LINT  VPBAOSF_get_time(void);
#include <unistd.h>
#define EXIT(status) exit(A_INT_int(status))

#define APBAOSF_exit EXIT
extern int A_argc;
extern char **A_argv;
extern char **A_envp;
#define A_prelude(argc,argv,envp) A_argc=argc; A_argv=argv; A_envp=envp

#define XHCAOSF_prelude A_prelude
extern A68_VOID  LICAOSF_get_args(A68_48 *);
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


/* --- Imports from cif --- */
#include <stdio.h>

#define IAAAOSF_nullccharptr NULL
/**/

#define VBAAOSF_shortshortmaxint (A68_SSINT)A68_MAX_SSINT
/**/

#define WBAAOSF_shortmaxint (A68_SINT)A68_MAX_SINT
/**/

#define XBAAOSF_maxint (A68_INT)A68_MAX_INT
/**/

#define YBAAOSF_longmaxint (A68_LINT)A68_MAX_LINT
/**/

#define ZBAAOSF_maxabschar (A68_INT)A68_MAX_CHAR
/**/

#define ACAAOSF_bitswidth A_SZ_BITS
/* --- End of imports from cif --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void LHAACTR(void);   /* ctrans_version */
extern void DDHACTR(void);   /* message */
extern void BCHACTR(void);   /* moduletracer */
extern void ODAACTR(void);   /* incinstallation */
extern void IKAAOSF(void);   /* usefulops */
extern void WSCAOSF(void);   /* osif */
extern void BAAAOSF(void);   /* cif */
/* --- end of DECS initialisation functions --- */
static A68_133   KPIACTR = {"$Id: environment.c,v 1.5.2.4 2004/09/27 03:04:17 teshields Exp $"}; 
A_GISVEC(A68_VC ,LPIACTR,KPIACTR,66)
static A68_130  MPIACTR_anonymous;
static A68_VC  XPIACTR_nullstr;
static A68_VC  ZPIACTR_nilstr;
A68_BOOL  AQIACTR_verboseoption;
A68_BOOL  BQIACTR_lineoption;
A68_BOOL  CQIACTR_dotoption;
A68_BOOL  DQIACTR_quoteoption;
A68_BOOL  EQIACTR_skipoption;
A68_BOOL  FQIACTR_tildeoption;
A68_BOOL  GQIACTR_streamoption;
A68_BOOL  HQIACTR_streamoutoption;
A68_BOOL  IQIACTR_optbooloption;
A68_BOOL  JQIACTR_traceoption;
A68_BOOL  KQIACTR_keeplistoption;
static A68_BOOL  LQIACTR_portableoption;
A68_BOOL  MQIACTR_longlongoption;
A68_BOOL  NQIACTR_nostructresultoption;
A68_BOOL  OQIACTR_closuremarkoption;
A68_BOOL  PQIACTR_closureonstackoption;
A68_BOOL  QQIACTR_checkoption;
A68_BOOL  RQIACTR_oldalienoption;
A68_BOOL  SQIACTR_tempfileoption;
static A68_BOOL  TQIACTR_filename_expected;
#define UQIACTR_file_cstreams 1
#define VQIACTR_memory_cstreams 2
A68_INT  WQIACTR_cstream_policy;
A68_VC  XQIACTR_sourcefilename;
A68_VC  YQIACTR_basenamesourcefile;
A68_VC  ZQIACTR_sourcefilesuffix;
A68_VC  ARIACTR_seedfilename;
A68_VC  BRIACTR_current_directory;
A68_134 * CRIACTR_nil_dirlist;
A68_134 * DRIACTR_modinfo_dirlist;
A68_134 * ERIACTR_cfile_dirlist;
A68_134 * FRIACTR_library_directory;
static A68_135  GRIACTR_fromcfile;
static A68_136  HRIACTR_fromseedfile;
static A68_117   IRIACTR = {"AAAAAAA"}; 
A68_137  JRIACTR_uname_option;
A68_INT  LRIACTR_filenametruncate;
A68_INT  MRIACTR_tracelevel;
#define NRIACTR_defaulttracelevel 2
#define ORIACTR_maxtracelevel 7
A68_INT  PRIACTR_debuglevel;
A68_INT  QRIACTR_linenumber;
#define RRIACTR_commentseverity 0
#define SRIACTR_warningseverity 1
#define TRIACTR_recoverableerrorseverity 2
#define URIACTR_errorseverity 3
#define VRIACTR_terminalerrorseverity 4
A68_INT  WRIACTR_greatestseverity;
static A68_INT  XRIACTR_comment_count;
static A68_INT  YRIACTR_warning_count;
static A68_INT  ZRIACTR_error_count;
A68_89  FSIACTR_list;
static A68_138   MSIACTR = {"comment(s)"}; 
A_GISVEC(A68_VC ,OSIACTR,MSIACTR,10)
static A68_139   PSIACTR = {""}; 
A_GISVEC(A68_VC ,QSIACTR,PSIACTR,0)
static A68_138   RSIACTR = {"warning(s)"}; 
A_GISVEC(A68_VC ,SSIACTR,RSIACTR,10)
static A68_139   TSIACTR = {""}; 
A_GISVEC(A68_VC ,USIACTR,TSIACTR,0)
static A68_140   VSIACTR = {"error(s)"}; 
A_GISVEC(A68_VC ,WSIACTR,VSIACTR,8)
static A68_139   XSIACTR = {""}; 
A_GISVEC(A68_VC ,YSIACTR,XSIACTR,0)
static A68_141   ATIACTR = {"End of diagnostics: "}; 
static A68_142   BTIACTR = {" in compilation"}; 
A_GISVEC(A68_VC ,CTIACTR,ATIACTR,20)
A_GISVEC(A68_VC ,FTIACTR,BTIACTR,15)
static A68_117   MTIACTR = {", line "}; 
A_GISVEC(A68_VC ,OTIACTR,MTIACTR,7)
static A68_139   QTIACTR = {""}; 
A_GISVEC(A68_VC ,RTIACTR,QTIACTR,0)
static A68_144   STIACTR = {": "}; 
static A68_140   TTIACTR = {"COMMENT "}; 
A_GISVEC(A68_VC ,VTIACTR,TTIACTR,8)
static A68_140   WTIACTR = {"WARNING "}; 
A_GISVEC(A68_VC ,XTIACTR,WTIACTR,8)
static A68_145   YTIACTR = {"RECOVERABLE ERROR "}; 
A_GISVEC(A68_VC ,ZTIACTR,YTIACTR,18)
static A68_146   AUIACTR = {"ERROR "}; 
A_GISVEC(A68_VC ,BUIACTR,AUIACTR,6)
static A68_147   CUIACTR = {"FATAL ERROR "}; 
A_GISVEC(A68_VC ,DUIACTR,CUIACTR,12)
static A68_148   EUIACTR = {"ERROR OF UNKNOWN SEVERITY "}; 
A_GISVEC(A68_VC ,FUIACTR,EUIACTR,26)
static A68_139   GUIACTR = {""}; 
A_GISVEC(A68_VC ,IUIACTR,GUIACTR,0)
static A68_142   JUIACTR = {" (at character "}; 
A_GISVEC(A68_VC ,KUIACTR,JUIACTR,15)
A_GISVEC(A68_VC ,PUIACTR,STIACTR,2)
A68_151  HWIACTR_perror;
A68_154 * VXIACTR_nil_modinfolist;
A68_155 * WXIACTR_nil_envinfo;
static A68_117   ZXIACTR = {"       "}; 
A68_156  BYIACTR_config_info;
static A68_142   BZIACTR = {"CTRANS_NAMESEED"}; 
A_GISVEC(A68_VC ,CZIACTR,BZIACTR,15)
static A68_147   EZIACTR = {"A68_NAMESEED"}; 
A_GISVEC(A68_VC ,FZIACTR,EZIACTR,12)
static A68_117   OZIACTR = {"A68_DIR"}; 
A_GISVEC(A68_VC ,PZIACTR,OZIACTR,7)
static A68_140   EAJACTR = {"A68_CDIR"}; 
A_GISVEC(A68_VC ,FAJACTR,EAJACTR,8)
static A68_117   PAJACTR = {"A68_LIB"}; 
A_GISVEC(A68_VC ,QAJACTR,PAJACTR,7)
static A68_144   HBJACTR = {"-v"}; 
A_GISVEC(A68_VC ,IBJACTR,HBJACTR,2)
static A68_140   KBJACTR = {"-verbose"}; 
A_GISVEC(A68_VC ,LBJACTR,KBJACTR,8)
static A68_144   MBJACTR = {"-n"}; 
A_GISVEC(A68_VC ,NBJACTR,MBJACTR,2)
static A68_158   PBJACTR = {"-line"}; 
A_GISVEC(A68_VC ,QBJACTR,PBJACTR,5)
static A68_144   RBJACTR = {"-f"}; 
A_GISVEC(A68_VC ,SBJACTR,RBJACTR,2)
static A68_145   UBJACTR = {"-filename_truncate"}; 
A_GISVEC(A68_VC ,VBJACTR,UBJACTR,18)
static A68_144   XBJACTR = {"-l"}; 
A_GISVEC(A68_VC ,YBJACTR,XBJACTR,2)
static A68_158   ACJACTR = {"-long"}; 
A_GISVEC(A68_VC ,BCJACTR,ACJACTR,5)
static A68_144   CCJACTR = {"-s"}; 
A_GISVEC(A68_VC ,DCJACTR,CCJACTR,2)
static A68_146   FCJACTR = {"-short"}; 
A_GISVEC(A68_VC ,GCJACTR,FCJACTR,6)
static A68_144   HCJACTR = {"-r"}; 
A_GISVEC(A68_VC ,ICJACTR,HCJACTR,2)
static A68_142   KCJACTR = {"-return_structs"}; 
A_GISVEC(A68_VC ,LCJACTR,KCJACTR,15)
static A68_144   MCJACTR = {"-c"}; 
A_GISVEC(A68_VC ,NCJACTR,MCJACTR,2)
static A68_159   PCJACTR = {"-mark_closures"}; 
A_GISVEC(A68_VC ,QCJACTR,PCJACTR,14)
static A68_144   RCJACTR = {"-C"}; 
A_GISVEC(A68_VC ,SCJACTR,RCJACTR,2)
static A68_142   UCJACTR = {"-stack_closures"}; 
A_GISVEC(A68_VC ,VCJACTR,UCJACTR,15)
static A68_144   WCJACTR = {"-V"}; 
A_GISVEC(A68_VC ,XCJACTR,WCJACTR,2)
static A68_140   YCJACTR = {"-Version"}; 
A_GISVEC(A68_VC ,ZCJACTR,YCJACTR,8)
static A68_140   BDJACTR = {"-version"}; 
A_GISVEC(A68_VC ,CDJACTR,BDJACTR,8)
static A68_139   EDJACTR = {""}; 
A_GISVEC(A68_VC ,FDJACTR,EDJACTR,0)
static A68_56   GDJACTR = {"-dir"}; 
A_GISVEC(A68_VC ,HDJACTR,GDJACTR,4)
static A68_158   LDJACTR = {"-cdir"}; 
A_GISVEC(A68_VC ,MDJACTR,LDJACTR,5)
static A68_56   QDJACTR = {"-lib"}; 
A_GISVEC(A68_VC ,RDJACTR,QDJACTR,4)
static A68_146   VDJACTR = {"-nolib"}; 
A_GISVEC(A68_VC ,WDJACTR,VDJACTR,6)
static A68_146   XDJACTR = {"-uname"}; 
A_GISVEC(A68_VC ,YDJACTR,XDJACTR,6)
static A68_140   AEJACTR = {"seedfile"}; 
A_GISVEC(A68_VC ,CEJACTR,AEJACTR,8)
static A68_158   EEJACTR = {"cfile"}; 
A_GISVEC(A68_VC ,FEJACTR,EEJACTR,5)
static A68_117   JFJACTR = {"-stream"}; 
A_GISVEC(A68_VC ,KFJACTR,JFJACTR,7)
static A68_56   LFJACTR = {"-dot"}; 
A_GISVEC(A68_VC ,MFJACTR,LFJACTR,4)
static A68_146   NFJACTR = {"-quote"}; 
A_GISVEC(A68_VC ,OFJACTR,NFJACTR,6)
static A68_158   PFJACTR = {"-skip"}; 
A_GISVEC(A68_VC ,QFJACTR,PFJACTR,5)
static A68_146   RFJACTR = {"-tilde"}; 
A_GISVEC(A68_VC ,SFJACTR,RFJACTR,6)
static A68_140   TFJACTR = {"-optbool"}; 
A_GISVEC(A68_VC ,UFJACTR,TFJACTR,8)
static A68_160   VFJACTR = {"-keeplist"}; 
A_GISVEC(A68_VC ,WFJACTR,VFJACTR,9)
static A68_144   XFJACTR = {"-t"}; 
A_GISVEC(A68_VC ,YFJACTR,XFJACTR,2)
static A68_146   AGJACTR = {"-trace"}; 
A_GISVEC(A68_VC ,BGJACTR,AGJACTR,6)
static A68_144   DGJACTR = {"-d"}; 
A_GISVEC(A68_VC ,EGJACTR,DGJACTR,2)
static A68_147   GGJACTR = {"-debug_level"}; 
A_GISVEC(A68_VC ,HGJACTR,GGJACTR,12)
static A68_144   JGJACTR = {"-m"}; 
A_GISVEC(A68_VC ,KGJACTR,JGJACTR,2)
static A68_161   MGJACTR = {"-debug_module"}; 
A_GISVEC(A68_VC ,NGJACTR,MGJACTR,13)
static A68_140   RGJACTR = {"-cstream"}; 
A_GISVEC(A68_VC ,SGJACTR,RGJACTR,8)
static A68_56   UGJACTR = {"file"}; 
A_GISVEC(A68_VC ,WGJACTR,UGJACTR,4)
static A68_146   XGJACTR = {"memory"}; 
A_GISVEC(A68_VC ,YGJACTR,XGJACTR,6)
static A68_56   AHJACTR = {"-tmp"}; 
A_GISVEC(A68_VC ,BHJACTR,AHJACTR,4)
static A68_146   CHJACTR = {"-check"}; 
A_GISVEC(A68_VC ,DHJACTR,CHJACTR,6)
static A68_160   EHJACTR = {"-oldalien"}; 
A_GISVEC(A68_VC ,FHJACTR,EHJACTR,9)
A68_BOOL  UHJACTR_traceon;
A68_INT  VHJACTR_startline;
#define ZHJACTR_tracealllevels 0X800000U
#define AIJACTR_tracespace 0X400000U
#define BIJACTR_traceids 0X1000000U
#define CIJACTR_longiddec 0X2000000U
#define DIJACTR_tracetree 0X4000000U
#define EIJACTR_tracetreeafter 0X8000000U
#define FIJACTR_traceregsbefore 0X10000000U
#define GIJACTR_traceregsafter 0X20000000U
#define HIJACTR_allregenvirons 0X100000U
#define IIJACTR_fullregister 0X200000U
typedef struct   /* env of non-global proc */
{
int dummy;
} CVIACTR_generator;
typedef struct   /* env of non-global proc */
{
A68_VC  FVIACTR_m;
A68_INT * HVIACTR_mind;
} PVIACTR_outchars;

A_STATIC A68_VOID  OPIACTR_generator(A68_BOOL  NPIACTR_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  TPIACTR_generator(A68_BOOL  SPIACTR_anonymous, A68_VC  *ReturnedValue);

A68_VOID  BSIACTR_typelineonterminal(A68_VC  Line);

A68_VOID  ISIACTR_list_nonl(A68_VC  Line);

A68_VOID  KSIACTR_finishmessage(void);

A68_VOID  GTIACTR_abort(void);

A68_VOID  HTIACTR_terminatenormally(void);

A_STATIC A68_VOID  LTIACTR_primitivefault(A68_INT  Thisseverity, A68_VC  Message, A68_INT  Charposition);

A_STATIC A68_VOID  WUIACTR_parameterisedmessage(A68_INT  Messagenumber, A68_149  Parameters, A68_INT  Thisseverity);

A_STATIC A68_VOID  BVIACTR_generator(A68_BOOL  ZUIACTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  OVIACTR_outchars(A68_VC  V, void *NonLocals);

A68_VOID  GWIACTR_pmessage(A68_INT  Messagenumber, A68_149  Parameters);

A68_VOID  LWIACTR_pcomment(A68_INT  Messagenumber, A68_149  Parameters);

A68_VOID  OWIACTR_pwarning(A68_INT  Messagenumber, A68_149  Parameters);

A68_VOID  RWIACTR_pportabilitywarning(A68_INT  Messagenumber, A68_149  Parameters);

A68_VOID  UWIACTR_pterminalerror(A68_INT  Messagenumber, A68_149  Parameters);

A68_VOID  XWIACTR_fault(A68_VC  Message, A68_INT  Charposition);

A68_VOID  ZWIACTR_comment(A68_INT  Messagenumber);

A68_VOID  CXIACTR_warning(A68_INT  Messagenumber);

A68_VOID  FXIACTR_portabilitywarning(A68_INT  Messagenumber);

A68_VOID  IXIACTR_error(A68_INT  Messagenumber);

A68_VOID  LXIACTR_terminalerror(A68_INT  Messagenumber);

A68_VOID  PXIACTR_assert(A68_VC  Assertion, A68_BOOL  Valid);

A_STATIC A68_VOID  RXIACTR_write_stdout(A68_VC  S);

A68_VOID  CYIACTR_setparams(void);

A_STATIC A68_VOID  FYIACTR_setfilename(A68_VC  Filespec);

A_STATIC A68_VOID  PYIACTR_readenvvariables(void);

A_STATIC A68_VOID  SYIACTR_readenv(A68_VC  Envname, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  LZIACTR_pushdir(A68_VC  Dir);

A_STATIC A68_VOID  BAJACTR_pushdir(A68_VC  Dir);

A68_52 * KHJACTR_find_and_open_file(A68_VC  Basename, A68_134 * Dirlist, A68_VC * Full_filename);

A68_VOID  WHJACTR_initialisetrace(void);

A68_BITS  YHJACTR_tracelevelflags(void);

A_STATIC A68_VOID  SYIACTR_readenv(A68_VC  Envname, A68_VC  *ReturnedValue)
{ 
A68_VC  TYIACTR;  /* avoid structure result */
union {  /* BIOP 99 */
A68_VC   source;
A68_VC   destination;
} UYIACTR; 
A68_VC  VYIACTR_value;
A68_155  WYIACTR;  /* collateral clause result */
union {  /* BIOP 99 */
A68_VC   source;
A68_VC   destination;
} XYIACTR; 
A68_155 * YYIACTR;  /* YIELD */
A68_155 ** ZYIACTR;  /* YIELD */
A68_VC  AZIACTR;  /* clause result */
A_PROC_ENTRY(readenv);
 /* line 454: */
{ 
QPBAOSF_get_env_var( Envname, &TYIACTR );
UYIACTR.source = TYIACTR ;
VYIACTR_value = (UYIACTR.destination);
 /* line 455: */
 /* line 456: */
XYIACTR.source = Envname ;
WYIACTR.Env_name = (XYIACTR.destination);
WYIACTR.Env_value = VYIACTR_value;
WYIACTR.Next = (*(&((&BYIACTR_config_info)->Environment)));
YYIACTR = A_HEAP(A68_155 ) ;
(*YYIACTR) = WYIACTR ;
ZYIACTR = (&((&BYIACTR_config_info)->Environment)) ;
(*ZYIACTR) = YYIACTR;
 /* line 457: */
 /* line 458: */
AZIACTR = VYIACTR_value;
} 
A_PROC_EXIT(readenv);
*ReturnedValue = (AZIACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  LZIACTR_pushdir(A68_VC  Dir)
{ 
A68_134  MZIACTR;  /* collateral clause result */
A68_134 * NZIACTR;  /* YIELD */
A_PROC_ENTRY(pushdir);
 /* line 472: */
MZIACTR.Dir = Dir;
MZIACTR.Next = DRIACTR_modinfo_dirlist;
NZIACTR = A_HEAP(A68_134 ) ;
(*NZIACTR) = MZIACTR ;
DRIACTR_modinfo_dirlist = NZIACTR;
A_PROC_EXIT(pushdir);
return;
} 
#undef NL

A_STATIC A68_VOID  BAJACTR_pushdir(A68_VC  Dir)
{ 
A68_134  CAJACTR;  /* collateral clause result */
A68_134 * DAJACTR;  /* YIELD */
A_PROC_ENTRY(pushdir);
 /* line 499: */
CAJACTR.Dir = Dir;
CAJACTR.Next = ERIACTR_cfile_dirlist;
DAJACTR = A_HEAP(A68_134 ) ;
(*DAJACTR) = CAJACTR ;
ERIACTR_cfile_dirlist = DAJACTR;
A_PROC_EXIT(pushdir);
return;
} 
#undef NL

A_STATIC A68_VOID  BVIACTR_generator(A68_BOOL  ZUIACTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((CVIACTR_generator *)NonLocals)->x)
{ 
A68_VC  DVIACTR;  /* clause result */
A68_VC  EVIACTR;  /* OPERATORS - dynamic generator */
{ 
EVIACTR.upb = 240 ;
( ZUIACTR_anonymous? A_VLOC(A68_CHAR ,EVIACTR): A_VHEAP(A68_CHAR ,EVIACTR) );
DVIACTR = EVIACTR;
} 
*ReturnedValue = (DVIACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  OVIACTR_outchars(A68_VC  V, void *NonLocals)
#define NL(x) (((PVIACTR_outchars *)NonLocals)->x)
{ 
A68_INT  QVIACTR_u;
A68_VC  RVIACTR;  /* OPERATORS - trim index */
A68_VC  SVIACTR;  /* YIELD */
A_PROC_ENTRY(outchars);
 /* line 269: */
{ 
QVIACTR_u = V.upb;
 /* line 270: */
SVIACTR = A_VTRIM(RVIACTR,(NL(FVIACTR_m)),A_VTSCRIPT(&(RVIACTR.upb),(NL(FVIACTR_m)).upb,((*NL(HVIACTR_mind))+1),((*NL(HVIACTR_mind))+QVIACTR_u))) ;
A_VASSIGN2(V,SVIACTR,A68_CHAR );
 /* line 271: */
 /* line 272: */
(*NL(HVIACTR_mind))+=QVIACTR_u;
} 
A_PROC_EXIT(outchars);
return;
} 
#undef NL

A_STATIC A68_VOID  FYIACTR_setfilename(A68_VC  Filespec)
{ 
union {  /* BIOP 99 */
A68_VC   source;
A68_VC   destination;
} GYIACTR; 
A68_INT  HYIACTR_start;
A68_BOOL  IYIACTR;  /* optbool result */
A68_INT  JYIACTR_end;
A68_BOOL  KYIACTR;  /* optbool result */
A68_VC  LYIACTR;  /* OPERATORS - trim index */
union {  /* BIOP 99 */
A68_VC   source;
A68_VC   destination;
} MYIACTR; 
A68_VC  NYIACTR;  /* OPERATORS - trim index */
union {  /* BIOP 99 */
A68_VC   source;
A68_VC   destination;
} OYIACTR; 
A_PROC_ENTRY(setfilename);
 /* line 426: */
 /* line 427: */
{ 
GYIACTR.source = Filespec ;
XQIACTR_sourcefilename = (GYIACTR.destination);
 /* line 429: */
HYIACTR_start = XQIACTR_sourcefilename.upb;
 /* line 430: */
for ( ;; )
{ 
IYIACTR = (HYIACTR_start>=1);
if ( IYIACTR )
{ /* line 431: */
IYIACTR = ((*(&A_VINDEX(XQIACTR_sourcefilename,HYIACTR_start)))!='/');
}
 /* line 432: */
if ( !(IYIACTR) ) break;
 /* line 433: */
HYIACTR_start-=1;
}
 /* line 434: */
if ( (HYIACTR_start==0) )
{ 
HYIACTR_start = 1;
} 
 /* line 435: */
if ( ((*(&A_VINDEX(XQIACTR_sourcefilename,HYIACTR_start)))=='/') )
{ 
HYIACTR_start+=1;
} 
 /* line 437: */
JYIACTR_end = XQIACTR_sourcefilename.upb;
 /* line 438: */
for ( ;; )
{ 
KYIACTR = (JYIACTR_end>HYIACTR_start);
if ( KYIACTR )
{ /* line 439: */
KYIACTR = ((*(&A_VINDEX(XQIACTR_sourcefilename,JYIACTR_end)))!='.');
}
if ( !(KYIACTR) ) break;
JYIACTR_end-=1;
}
 /* line 440: */
if ( (HYIACTR_start!=JYIACTR_end) )
{ 
JYIACTR_end-=1;
} 
 /* line 442: */
MYIACTR.source = A_VTRIM(LYIACTR,(XQIACTR_sourcefilename),A_VTSCRIPT(&(LYIACTR.upb),(XQIACTR_sourcefilename).upb,HYIACTR_start,JYIACTR_end)) ;
YQIACTR_basenamesourcefile = (MYIACTR.destination);
 /* line 443: */
 /* line 444: */
OYIACTR.source = A_VTRIM(NYIACTR,(XQIACTR_sourcefilename),A_VTSCRIPT(&(NYIACTR.upb),(XQIACTR_sourcefilename).upb,(JYIACTR_end+1),(XQIACTR_sourcefilename).upb)) ;
ZQIACTR_sourcefilesuffix = (OYIACTR.destination);
} 
A_PROC_EXIT(setfilename);
return;
} 
#undef NL

A_STATIC A68_VOID  PYIACTR_readenvvariables(void)
{ 
A68_VC  DZIACTR;  /* avoid structure result */
A68_VC  GZIACTR;  /* avoid structure result */
A68_VC  HZIACTR_a68_nameseed;
A68_BOOL  IZIACTR;  /* clause result */
A68_VC  QZIACTR;  /* avoid structure result */
A68_VC  RZIACTR_a68_dir;
A68_BOOL  SZIACTR;  /* clause result */
A68_INT  TZIACTR_i;
A68_INT  UZIACTR_end;
A68_INT  VZIACTR;  /* by part of loop */
A68_INT  WZIACTR;  /* loop control */
A68_VC  XZIACTR;  /* OPERATORS - trim index */
A68_VC  YZIACTR;  /* OPERATORS - trim index */
A68_VC  GAJACTR;  /* avoid structure result */
A68_VC  HAJACTR_a68_cdir;
A68_BOOL  IAJACTR;  /* clause result */
A68_INT  JAJACTR_i;
A68_INT  KAJACTR_end;
A68_INT  LAJACTR;  /* by part of loop */
A68_INT  MAJACTR;  /* loop control */
A68_VC  NAJACTR;  /* OPERATORS - trim index */
A68_VC  OAJACTR;  /* OPERATORS - trim index */
A68_VC  RAJACTR;  /* avoid structure result */
A68_VC  SAJACTR_libdir;
A68_BOOL  TAJACTR;  /* clause result */
A68_134  UAJACTR;  /* collateral clause result */
A68_134 * VAJACTR;  /* YIELD */
A_PROC_ENTRY(readenvvariables);
{ 
 /* line 461: */
 /* line 462: */
{ 
SYIACTR_readenv( CZIACTR, &DZIACTR );
ARIACTR_seedfilename = DZIACTR;
 /* line 463: */
SYIACTR_readenv( FZIACTR, &GZIACTR );
HZIACTR_a68_nameseed = GZIACTR;
 /* line 464: */
 /* line 465: */
 /* line 466: */
IZIACTR = (HZIACTR_a68_nameseed.upb>0);
if ( IZIACTR )
{ 
 /* line 467: */
ARIACTR_seedfilename = HZIACTR_a68_nameseed;
} 
} 
 /* line 470: */
 /* line 471: */
{ 
 /* line 474: */
LZIACTR_pushdir(BRIACTR_current_directory);
 /* line 476: */
SYIACTR_readenv( PZIACTR, &QZIACTR );
RZIACTR_a68_dir = QZIACTR;
 /* line 477: */
 /* line 478: */
 /* line 480: */
SZIACTR = (RZIACTR_a68_dir.upb>0);
if ( SZIACTR )
{ 
TZIACTR_i = RZIACTR_a68_dir.upb;
 /* line 481: */
UZIACTR_end = TZIACTR_i;
 /* line 483: */
 /* line 484: */
VZIACTR = (-1);
for ( WZIACTR = TZIACTR_i;
( VZIACTR > 0 && WZIACTR <= 1) ||
( VZIACTR < 0 && WZIACTR >= 1) ||
( VZIACTR == 0 ) ;
WZIACTR += VZIACTR )
{ 
 /* line 485: */
 /* line 486: */
 /* line 487: */
if ( ((*(&A_VINDEX(RZIACTR_a68_dir,TZIACTR_i)))==':') )
{ 
LZIACTR_pushdir(A_VTRIM(XZIACTR,(RZIACTR_a68_dir),A_VTSCRIPT(&(XZIACTR.upb),(RZIACTR_a68_dir).upb,(TZIACTR_i+1),UZIACTR_end)));
 /* line 488: */
 /* line 489: */
UZIACTR_end = (TZIACTR_i-1);
} 
 /* line 490: */
 /* line 491: */
TZIACTR_i-=1;
}
 /* line 493: */
 /* line 494: */
LZIACTR_pushdir(A_VTRIM(YZIACTR,(RZIACTR_a68_dir),A_VTSCRIPT(&(YZIACTR.upb),(RZIACTR_a68_dir).upb,1,UZIACTR_end)));
} 
} 
 /* line 497: */
 /* line 498: */
{ 
 /* line 501: */
BAJACTR_pushdir(BRIACTR_current_directory);
 /* line 503: */
SYIACTR_readenv( FAJACTR, &GAJACTR );
HAJACTR_a68_cdir = GAJACTR;
 /* line 504: */
 /* line 505: */
 /* line 507: */
IAJACTR = (HAJACTR_a68_cdir.upb>0);
if ( IAJACTR )
{ 
JAJACTR_i = HAJACTR_a68_cdir.upb;
 /* line 508: */
KAJACTR_end = JAJACTR_i;
 /* line 510: */
 /* line 511: */
LAJACTR = (-1);
for ( MAJACTR = JAJACTR_i;
( LAJACTR > 0 && MAJACTR <= 1) ||
( LAJACTR < 0 && MAJACTR >= 1) ||
( LAJACTR == 0 ) ;
MAJACTR += LAJACTR )
{ 
 /* line 512: */
 /* line 513: */
 /* line 514: */
if ( ((*(&A_VINDEX(HAJACTR_a68_cdir,JAJACTR_i)))==':') )
{ 
BAJACTR_pushdir(A_VTRIM(NAJACTR,(HAJACTR_a68_cdir),A_VTSCRIPT(&(NAJACTR.upb),(HAJACTR_a68_cdir).upb,(JAJACTR_i+1),KAJACTR_end)));
 /* line 515: */
 /* line 516: */
KAJACTR_end = (JAJACTR_i-1);
} 
 /* line 517: */
 /* line 518: */
JAJACTR_i-=1;
}
 /* line 520: */
 /* line 521: */
BAJACTR_pushdir(A_VTRIM(OAJACTR,(HAJACTR_a68_cdir),A_VTSCRIPT(&(OAJACTR.upb),(HAJACTR_a68_cdir).upb,1,KAJACTR_end)));
} 
} 
 /* line 524: */
 /* line 525: */
{ 
SYIACTR_readenv( QAJACTR, &RAJACTR );
SAJACTR_libdir = RAJACTR;
 /* line 526: */
 /* line 527: */
 /* line 528: */
TAJACTR = (SAJACTR_libdir.upb>0);
if ( TAJACTR )
{ 
UAJACTR.Dir = SAJACTR_libdir;
 /* line 529: */
UAJACTR.Next = CRIACTR_nil_dirlist;
VAJACTR = A_HEAP(A68_134 ) ;
(*VAJACTR) = UAJACTR ;
FRIACTR_library_directory = VAJACTR;
} 
} 
} 
A_PROC_EXIT(readenvvariables);
return;
} 
#undef NL

A_STATIC A68_VOID  OPIACTR_generator(A68_BOOL  NPIACTR_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  PPIACTR;  /* clause result */
A68_VC  QPIACTR;  /* OPERATORS - dynamic generator */
{ 
 /* line 54: */
QPIACTR.upb = 0 ;
( NPIACTR_anonymous? A_VLOC(A68_CHAR ,QPIACTR): A_VHEAP(A68_CHAR ,QPIACTR) );
PPIACTR = QPIACTR;
} 
*ReturnedValue = (PPIACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  TPIACTR_generator(A68_BOOL  SPIACTR_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  UPIACTR;  /* clause result */
A68_VC  VPIACTR;  /* OPERATORS - dynamic generator */
{ 
VPIACTR.upb = 0 ;
( SPIACTR_anonymous? A_VLOC(A68_CHAR ,VPIACTR): A_VHEAP(A68_CHAR ,VPIACTR) );
UPIACTR = VPIACTR;
} 
*ReturnedValue = (UPIACTR);
return;
} 
#undef NL

A68_VOID  BSIACTR_typelineonterminal(A68_VC  Line)
{ 
A68_53  CSIACTR;  /* avoid structure result */
A68_VC  DSIACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_53  ESIACTR;  /* avoid structure result */
A_PROC_ENTRY(typelineonterminal);
 /* line 173: */
{ 
VXBAOSF_write_buffer( VSBAOSF_stdout, Line, RIBAOSF_ignore_msg, &CSIACTR );
CSIACTR;
VXBAOSF_write_buffer( VSBAOSF_stdout, A_HVEC(DSIACTR,HVBAOSF_newline_char,A68_CHAR ), RIBAOSF_ignore_msg, &ESIACTR );
ESIACTR;
} 
A_PROC_EXIT(typelineonterminal);
return;
} 
#undef NL

A68_VOID  ISIACTR_list_nonl(A68_VC  Line)
{ 
A68_53  JSIACTR;  /* avoid structure result */
A_PROC_ENTRY(list_nonl);
VXBAOSF_write_buffer( VSBAOSF_stdout, Line, RIBAOSF_ignore_msg, &JSIACTR );
JSIACTR;
A_PROC_EXIT(list_nonl);
return;
} 
#undef NL

A68_VOID  KSIACTR_finishmessage(void)
{ 
A68_INT  LSIACTR_number;
A68_VC  NSIACTR;  /* clause result */
A68_VC  ZSIACTR_type;
A68_VC  DTIACTR;  /* avoid structure result */
A68_VC  ETIACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(finishmessage);
{ 
 /* line 185: */
 /* line 186: */
 /* line 187: */
switch ( (WRIACTR_greatestseverity+1) )
{ 
case 1: 
 /* line 188: */
if ( (XRIACTR_comment_count>0) )
{ 
LSIACTR_number = XRIACTR_comment_count;
 /* line 189: */
NSIACTR = OSIACTR;
} 
else
{ 
LSIACTR_number = 0;
 /* line 190: */
 /* line 191: */
NSIACTR = QSIACTR;
} 
break;
case 2: 
{ 
LSIACTR_number = YRIACTR_warning_count;
 /* line 192: */
NSIACTR = SSIACTR;
} 
break;
case 3: 
{ 
LSIACTR_number = 0;
 /* line 193: */
NSIACTR = USIACTR;
} 
break;
case 4: 
{ 
LSIACTR_number = ZRIACTR_error_count;
 /* line 194: */
NSIACTR = WSIACTR;
} 
break;
default: 
LSIACTR_number = 0;
 /* line 195: */
NSIACTR = YSIACTR;
break;
} 
ZSIACTR_type = NSIACTR;
 /* line 196: */
 /* line 197: */
if ( (LSIACTR_number>0) )
{ 
 /* line 198: */
 /* line 199: */
 /* line 200: */
 /* line 201: */
ROAAOSF_whole( LSIACTR_number, 0, &DTIACTR );
BSIACTR_typelineonterminal(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(CTIACTR,DTIACTR),A_HVEC(ETIACTR,' ',A68_CHAR )),ZSIACTR_type),FTIACTR));
} 
} 
A_PROC_EXIT(finishmessage);
return;
} 
#undef NL

A68_VOID  GTIACTR_abort(void)
{ 
A_PROC_ENTRY(abort);
APBAOSF_exit(1);
A_PROC_EXIT(abort);
return;
} 
#undef NL

A68_VOID  HTIACTR_terminatenormally(void)
{ 
A_PROC_ENTRY(terminatenormally);
APBAOSF_exit(0);
A_PROC_EXIT(terminatenormally);
return;
} 
#undef NL

A_STATIC A68_VOID  LTIACTR_primitivefault(A68_INT  Thisseverity, A68_VC  Message, A68_INT  Charposition)
{ 
A68_VC  NTIACTR;  /* clause result */
A68_VC  PTIACTR;  /* avoid structure result */
A68_VC  UTIACTR;  /* clause result */
A68_VC  HUIACTR;  /* clause result */
A68_VC  LUIACTR;  /* avoid structure result */
A68_VC  MUIACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  NUIACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  OUIACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_53  QUIACTR;  /* avoid structure result */
A68_VC  RUIACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_53  SUIACTR;  /* avoid structure result */
A_PROC_ENTRY(primitivefault);
 /* line 210: */
 /* line 211: */
{ 
 /* line 212: */
if ( (Thisseverity>WRIACTR_greatestseverity) )
{ 
 /* line 213: */
WRIACTR_greatestseverity = Thisseverity;
} 
 /* line 214: */
 /* line 215: */
switch ( (Thisseverity+1) )
{ 
case 1: 
 /* line 216: */
XRIACTR_comment_count+=1;
break;
case 2: 
 /* line 217: */
YRIACTR_warning_count+=1;
break;
case 3: 
 /* line 218: */
/*SKIP*/;
break;
case 4: 
 /* line 219: */
 /* line 221: */
ZRIACTR_error_count+=1;
break;
default: 
/*SKIP*/;
break;
} 
 /* line 222: */
 /* line 223: */
 /* line 224: */
 /* line 225: */
if ( (Thisseverity!=RRIACTR_commentseverity) )
{ 
 /* line 226: */
 /* line 227: */
ROAAOSF_whole( QRIACTR_linenumber, 0, &PTIACTR );
NTIACTR = A_VC_PLUS(OTIACTR,PTIACTR);
} 
else
{ 
NTIACTR = RTIACTR;
} 
 /* line 228: */
 /* line 229: */
switch ( (Thisseverity+1) )
{ 
case 1: 
 /* line 230: */
UTIACTR = VTIACTR;
break;
case 2: 
 /* line 231: */
UTIACTR = XTIACTR;
break;
case 3: 
 /* line 232: */
UTIACTR = ZTIACTR;
break;
case 4: 
 /* line 234: */
UTIACTR = BUIACTR;
break;
case 5: 
 /* line 235: */
UTIACTR = DUIACTR;
break;
default: 
UTIACTR = FUIACTR;
break;
} 
 /* line 237: */
 /* line 238: */
 /* line 239: */
 /* line 240: */
if ( (Charposition==0) )
{ 
HUIACTR = IUIACTR;
} 
else
{ 
 /* line 241: */
ROAAOSF_whole( Charposition, 0, &LUIACTR );
HUIACTR = A_VC_PLUS(A_VC_PLUS(KUIACTR,LUIACTR),A_HVEC(MUIACTR,')',A68_CHAR ));
} 
 /* line 243: */
VXBAOSF_write_buffer( WSBAOSF_stderr, A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_HVEC(NUIACTR,'\"',A68_CHAR ),XQIACTR_sourcefilename),A_HVEC(OUIACTR,'\"',A68_CHAR )),NTIACTR),PUIACTR),UTIACTR),Message),HUIACTR), RIBAOSF_ignore_msg, &QUIACTR );
QUIACTR;
 /* line 244: */
 /* line 245: */
VXBAOSF_write_buffer( WSBAOSF_stderr, A_HVEC(RUIACTR,HVBAOSF_newline_char,A68_CHAR ), RIBAOSF_ignore_msg, &SUIACTR );
SUIACTR;
} 
A_PROC_EXIT(primitivefault);
return;
} 
#undef NL

A_STATIC A68_VOID  WUIACTR_parameterisedmessage(A68_INT  Messagenumber, A68_149  Parameters, A68_INT  Thisseverity)
{ 
A68_VC  XUIACTR;  /* avoid structure result */
A68_VC  YUIACTR_mess;
A68_130  AVIACTR_generator;   /* proc value of non-global proc */
A68_VC  GVIACTR;  /* avoid structure result */
A68_VC  FVIACTR_m;
A68_INT  HVIACTR_mind;
A68_BOOL  IVIACTR_hat;
A68_CHAR  JVIACTR_c;
A68_INT  KVIACTR_paramcount;
A68_INT  LVIACTR_nextparam;
A68_89  NVIACTR_outchars;   /* proc value of non-global proc */
A68_INT  TVIACTR_i;
A68_INT  UVIACTR;  /* to part of loop */
A68_BOOL  VVIACTR;  /* optbool result */
A68_BOOL  WVIACTR;  /* optbool result */
A68_VC  XVIACTR;  /* OPERATORS - trim index */
A68_VC  YVIACTR;  /* YIELD */
A68_VC  ZVIACTR;  /* OPERATORS - assign op */
A68_BOOL  AWIACTR;  /* optbool result */
A68_INT  BWIACTR;  /* YIELD */
A68_CHAR * CWIACTR;  /* YIELD */
A68_VC  DWIACTR;  /* OPERATORS - trim index */
A_PROC_ENTRY(parameterisedmessage);
 /* line 257: */
 /* line 258: */
{ 
KDHACTR_message( Messagenumber, &XUIACTR );
YUIACTR_mess = XUIACTR;
 /* line 259: */
A_CLOSURE( AVIACTR_generator, BVIACTR_generator, CVIACTR_generator );
A_CALLPROC(AVIACTR_generator,(A68_TRUE, &GVIACTR),(A68_TRUE, &GVIACTR,(AVIACTR_generator).nonlocals));
FVIACTR_m = GVIACTR;
 /* line 261: */
HVIACTR_mind = 0;
 /* line 262: */
IVIACTR_hat = A68_FALSE;
 /* line 263: */
 /* line 265: */
KVIACTR_paramcount = Parameters.dim[0].upb;
 /* line 266: */
LVIACTR_nextparam = 0;
 /* line 268: */
A_CLOSURE( NVIACTR_outchars, OVIACTR_outchars, PVIACTR_outchars );
(( PVIACTR_outchars * ) ( NVIACTR_outchars.nonlocals )) -> FVIACTR_m = FVIACTR_m;
(( PVIACTR_outchars * ) ( NVIACTR_outchars.nonlocals )) -> HVIACTR_mind = (&HVIACTR_mind);
 /* line 274: */
 /* line 275: */
UVIACTR = YUIACTR_mess.upb;
for ( TVIACTR_i = 1;
TVIACTR_i <= UVIACTR;
TVIACTR_i += 1 )
{ 
JVIACTR_c = A_VINDEX(YUIACTR_mess,TVIACTR_i);
 /* line 276: */
VVIACTR = IVIACTR_hat;
if ( VVIACTR )
{ /* line 277: */
VVIACTR = (JVIACTR_c!='^');
}
if ( VVIACTR )
{ 
IVIACTR_hat = A68_FALSE;
 /* line 278: */
 /* line 279: */
WVIACTR = (JVIACTR_c=='a');
if ( WVIACTR )
{ /* line 280: */
WVIACTR = ((LVIACTR_nextparam+=1)<=KVIACTR_paramcount);
}
if ( WVIACTR )
{ 
 /* line 281: */
 /* line 282: */
A_CALLPROC(NVIACTR_outchars,(A_R1INDEX(Parameters,LVIACTR_nextparam)),(A_R1INDEX(Parameters,LVIACTR_nextparam),(NVIACTR_outchars).nonlocals));
} 
else
{ 
YVIACTR = A_VTRIM(XVIACTR,(FVIACTR_m),A_VTSCRIPT(&(XVIACTR.upb),(FVIACTR_m).upb,(HVIACTR_mind+1),(HVIACTR_mind+2))) ;
ZVIACTR = A_C_PLUS('^',JVIACTR_c) ;
A_VASSIGN2(ZVIACTR,YVIACTR,A68_CHAR );
 /* line 283: */
 /* line 284: */
 /* line 285: */
HVIACTR_mind+=2;
} 
} 
else
{ 
AWIACTR = !IVIACTR_hat;
if ( AWIACTR )
{ /* line 286: */
AWIACTR = (JVIACTR_c=='^');
}
if ( AWIACTR )
{ 
 /* line 287: */
IVIACTR_hat = A68_TRUE;
} 
else
{ 
BWIACTR = HVIACTR_mind+=1 ;
CWIACTR = (&A_VINDEX(FVIACTR_m,BWIACTR)) ;
(*CWIACTR) = JVIACTR_c;
 /* line 288: */
 /* line 289: */
 /* line 290: */
IVIACTR_hat = A68_FALSE;
} 
} 
}
 /* line 291: */
 /* line 292: */
LTIACTR_primitivefault(Thisseverity, A_VTRIM(DWIACTR,(FVIACTR_m),A_VTSCRIPT(&(DWIACTR.upb),(FVIACTR_m).upb,1,HVIACTR_mind)), 0);
} 
A_PROC_EXIT(parameterisedmessage);
return;
} 
#undef NL

A68_VOID  GWIACTR_pmessage(A68_INT  Messagenumber, A68_149  Parameters)
{ 
A_PROC_ENTRY(pmessage);
 /* line 299: */
WUIACTR_parameterisedmessage(Messagenumber, Parameters, URIACTR_errorseverity);
A_PROC_EXIT(pmessage);
return;
} 
#undef NL

A68_VOID  LWIACTR_pcomment(A68_INT  Messagenumber, A68_149  Parameters)
{ 
A_PROC_ENTRY(pcomment);
 /* line 307: */
WUIACTR_parameterisedmessage(Messagenumber, Parameters, RRIACTR_commentseverity);
A_PROC_EXIT(pcomment);
return;
} 
#undef NL

A68_VOID  OWIACTR_pwarning(A68_INT  Messagenumber, A68_149  Parameters)
{ 
A_PROC_ENTRY(pwarning);
 /* line 313: */
WUIACTR_parameterisedmessage(Messagenumber, Parameters, SRIACTR_warningseverity);
A_PROC_EXIT(pwarning);
return;
} 
#undef NL

A68_VOID  RWIACTR_pportabilitywarning(A68_INT  Messagenumber, A68_149  Parameters)
{ 
A_PROC_ENTRY(pportabilitywarning);
 /* line 319: */
 /* line 320: */
 /* line 321: */
if ( LQIACTR_portableoption )
{ 
 /* line 322: */
WUIACTR_parameterisedmessage(Messagenumber, Parameters, SRIACTR_warningseverity);
} 
A_PROC_EXIT(pportabilitywarning);
return;
} 
#undef NL
 /* line 325: */

A68_VOID  UWIACTR_pterminalerror(A68_INT  Messagenumber, A68_149  Parameters)
{ 
A_PROC_ENTRY(pterminalerror);
 /* line 329: */
 /* line 332: */
{ 
 /* line 333: */
 /* line 335: */
WUIACTR_parameterisedmessage(Messagenumber, Parameters, VRIACTR_terminalerrorseverity);
 /* line 336: */
 /* line 337: */
APBAOSF_exit(1);
} 
A_PROC_EXIT(pterminalerror);
return;
} 
#undef NL

A68_VOID  XWIACTR_fault(A68_VC  Message, A68_INT  Charposition)
{ 
A_PROC_ENTRY(fault);
 /* line 341: */
LTIACTR_primitivefault(URIACTR_errorseverity, Message, Charposition);
A_PROC_EXIT(fault);
return;
} 
#undef NL

A68_VOID  ZWIACTR_comment(A68_INT  Messagenumber)
{ 
A68_VC  AXIACTR;  /* avoid structure result */
A_PROC_ENTRY(comment);
 /* line 344: */
KDHACTR_message( Messagenumber, &AXIACTR );
LTIACTR_primitivefault(RRIACTR_commentseverity, AXIACTR, 0);
A_PROC_EXIT(comment);
return;
} 
#undef NL

A68_VOID  CXIACTR_warning(A68_INT  Messagenumber)
{ 
A68_VC  DXIACTR;  /* avoid structure result */
A_PROC_ENTRY(warning);
 /* line 347: */
KDHACTR_message( Messagenumber, &DXIACTR );
LTIACTR_primitivefault(SRIACTR_warningseverity, DXIACTR, 0);
A_PROC_EXIT(warning);
return;
} 
#undef NL

A68_VOID  FXIACTR_portabilitywarning(A68_INT  Messagenumber)
{ 
A68_VC  GXIACTR;  /* avoid structure result */
A_PROC_ENTRY(portabilitywarning);
 /* line 350: */
 /* line 351: */
 /* line 352: */
if ( LQIACTR_portableoption )
{ 
 /* line 353: */
KDHACTR_message( Messagenumber, &GXIACTR );
LTIACTR_primitivefault(SRIACTR_warningseverity, GXIACTR, 0);
} 
A_PROC_EXIT(portabilitywarning);
return;
} 
#undef NL

A68_VOID  IXIACTR_error(A68_INT  Messagenumber)
{ 
A68_VC  JXIACTR;  /* avoid structure result */
A_PROC_ENTRY(error);
 /* line 356: */
KDHACTR_message( Messagenumber, &JXIACTR );
LTIACTR_primitivefault(URIACTR_errorseverity, JXIACTR, 0);
A_PROC_EXIT(error);
return;
} 
#undef NL

A68_VOID  LXIACTR_terminalerror(A68_INT  Messagenumber)
{ 
A68_VC  MXIACTR;  /* avoid structure result */
A_PROC_ENTRY(terminalerror);
 /* line 359: */
 /* line 360: */
{ 
KDHACTR_message( Messagenumber, &MXIACTR );
LTIACTR_primitivefault(VRIACTR_terminalerrorseverity, MXIACTR, 0);
 /* line 361: */
 /* line 362: */
APBAOSF_exit(1);
} 
A_PROC_EXIT(terminalerror);
return;
} 
#undef NL

A68_VOID  PXIACTR_assert(A68_VC  Assertion, A68_BOOL  Valid)
{ 
A_PROC_ENTRY(assert);
 /* line 365: */
 /* line 366: */
if ( !Valid )
{ 
BSIACTR_typelineonterminal(Assertion);
 /* line 367: */
 /* line 368: */
LXIACTR_terminalerror(661);
} 
A_PROC_EXIT(assert);
return;
} 
#undef NL

A_STATIC A68_VOID  RXIACTR_write_stdout(A68_VC  S)
{ 
A68_53  SXIACTR;  /* avoid structure result */
A68_VC  TXIACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_53  UXIACTR;  /* avoid structure result */
A_PROC_ENTRY(write_stdout);
 /* line 371: */
 /* line 372: */
{ 
VXBAOSF_write_buffer( VSBAOSF_stdout, S, RIBAOSF_ignore_msg, &SXIACTR );
SXIACTR;
 /* line 373: */
 /* line 374: */
VXBAOSF_write_buffer( VSBAOSF_stdout, A_HVEC(TXIACTR,HVBAOSF_newline_char,A68_CHAR ), RIBAOSF_ignore_msg, &UXIACTR );
UXIACTR;
} 
A_PROC_EXIT(write_stdout);
return;
} 
#undef NL

A68_VOID  CYIACTR_setparams(void)
{ 
A68_48  WAJACTR;  /* avoid structure result */
A68_48  XAJACTR_argv;
A68_INT  YAJACTR_argc;
A68_LINT * ZAJACTR;  /* YIELD */
A68_VC  ABJACTR;  /* avoid structure result */
union {  /* BIOP 99 */
A68_VC   source;
A68_VC   destination;
} BBJACTR; 
A68_INT  CBJACTR_fileargindex;
A68_INT  DBJACTR_argindex;
A68_BOOL  EBJACTR;  /* optbool result */
A68_VC  FBJACTR_thisarg;
A68_INT  GBJACTR;  /* YIELD */
A68_BOOL  JBJACTR;  /* optbool result */
A68_BOOL  OBJACTR;  /* optbool result */
A68_BOOL  TBJACTR;  /* optbool result */
A68_149  WBJACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_BOOL  ZBJACTR;  /* optbool result */
A68_BOOL  ECJACTR;  /* optbool result */
A68_BOOL  JCJACTR;  /* optbool result */
A68_BOOL  OCJACTR;  /* optbool result */
A68_BOOL  TCJACTR;  /* optbool result */
A68_BOOL  ADJACTR;  /* optbool result */
A68_89  DDJACTR;  /* procedure value */
A68_134  IDJACTR;  /* collateral clause result */
union {  /* BIOP 99 */
A68_VC   source;
A68_VC   destination;
} JDJACTR; 
A68_134 * KDJACTR;  /* YIELD */
A68_134  NDJACTR;  /* collateral clause result */
union {  /* BIOP 99 */
A68_VC   source;
A68_VC   destination;
} ODJACTR; 
A68_134 * PDJACTR;  /* YIELD */
A68_134  SDJACTR;  /* collateral clause result */
union {  /* BIOP 99 */
A68_VC   source;
A68_VC   destination;
} TDJACTR; 
A68_134 * UDJACTR;  /* YIELD */
A68_VC  ZDJACTR_uname;
A68_BOOL  BEJACTR;  /* clause result */
A68_137  DEJACTR;  /* OPERATORS - mode -> union mode */
A68_137  GEJACTR;  /* OPERATORS - mode -> union mode */
A68_INT  HEJACTR_uname_len;
A68_BOOL  IEJACTR;  /* clause result */
A68_117  JEJACTR_u;
A68_VC  KEJACTR;  /* OPERATORS - istruct -> vector */
A68_VC  LEJACTR;  /* OPERATORS - trim index */
A68_VC  MEJACTR;  /* YIELD */
A68_VC  NEJACTR;  /* OPERATORS - assign op */
A68_137  OEJACTR;  /* OPERATORS - mode -> union mode */
A68_117  PEJACTR_u;
A68_VC  QEJACTR;  /* OPERATORS - istruct -> vector */
A68_VC  REJACTR;  /* YIELD */
A68_VC  SEJACTR;  /* OPERATORS - assign op */
A68_137  TEJACTR;  /* OPERATORS - mode -> union mode */
A68_BOOL  UEJACTR_ok;
A68_137  VEJACTR;  /* united object - for case conformity */
A68_117  WEJACTR_uname;
A68_117  XEJACTR;  /* clause result */
A68_CHAR  YEJACTR_c;
A68_VC  ZEJACTR;  /* OPERATORS - istruct -> vector */
A68_VC  AFJACTR;  /* forall yield */
A68_CHAR * BFJACTR;  /* forall control - []x */
A68_INT  CFJACTR;  /* forall loop counter */
A68_BOOL  DFJACTR;  /* optbool result */
A68_137  EFJACTR;  /* united object - for case conformity */
A68_117  FFJACTR_uname;
A68_149  GFJACTR;  /* clause result */
A68_VC  HFJACTR;  /* OPERATORS - istruct -> vector */
A68_149  IFJACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_BOOL  ZFJACTR;  /* optbool result */
A68_149  CGJACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_BOOL  FGJACTR;  /* optbool result */
A68_149  IGJACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_BOOL  LGJACTR;  /* optbool result */
A68_VC  OGJACTR_module;
A68_BOOL  PGJACTR_foundmodule;
A68_149  QGJACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  TGJACTR_policy;
A68_BOOL  VGJACTR;  /* clause result */
A68_149  ZGJACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_149  GHJACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(setparams);
{ 
 /* line 446: */
 /* line 451: */
 /* line 452: */
 /* line 532: */
LICAOSF_get_args(  &WAJACTR );
XAJACTR_argv = WAJACTR;
 /* line 533: */
YAJACTR_argc = XAJACTR_argv.upb;
 /* line 536: */
ZAJACTR = (&((&BYIACTR_config_info)->Translationtime)) ;
(*ZAJACTR) = VPBAOSF_get_time();
 /* line 537: */
EPBAOSF_get_working_directory(  &ABJACTR );
BBJACTR.source = ABJACTR ;
BRIACTR_current_directory = (BBJACTR.destination);
 /* line 539: */
PYIACTR_readenvvariables();
 /* line 541: */
CBJACTR_fileargindex = 0;
 /* line 542: */
DBJACTR_argindex = 2;
 /* line 544: */
for ( ;; )
{ 
EBJACTR = (CBJACTR_fileargindex==0);
if ( EBJACTR )
{ /* line 545: */
 /* line 530: */
EBJACTR = (DBJACTR_argindex<=YAJACTR_argc);
}
 /* line 546: */
if ( !(EBJACTR) ) break;
FBJACTR_thisarg = A_VINDEX(XAJACTR_argv,DBJACTR_argindex);
 /* line 548: */
 /* line 549: */
 /* line 550: */
 /* line 551: */
GBJACTR = 1 ;
if ( (A_VINDEX(FBJACTR_thisarg,GBJACTR)=='-') )
{ 
DBJACTR_argindex+=1;
 /* line 553: */
JBJACTR = A_VC_EQ(FBJACTR_thisarg,IBJACTR);
if ( ! JBJACTR )
{ /* line 554: */
JBJACTR = A_VC_EQ(FBJACTR_thisarg,LBJACTR);
}
if ( JBJACTR )
{ 
 /* line 556: */
AQIACTR_verboseoption = A68_TRUE;
} 
else
{ 
OBJACTR = A_VC_EQ(FBJACTR_thisarg,NBJACTR);
if ( ! OBJACTR )
{ /* line 557: */
OBJACTR = A_VC_EQ(FBJACTR_thisarg,QBJACTR);
}
if ( OBJACTR )
{ 
 /* line 559: */
BQIACTR_lineoption = A68_TRUE;
} 
else
{ 
TBJACTR = A_VC_EQ(FBJACTR_thisarg,SBJACTR);
if ( ! TBJACTR )
{ /* line 560: */
TBJACTR = A_VC_EQ(FBJACTR_thisarg,VBJACTR);
}
if ( TBJACTR )
{ 
 /* line 561: */
if ( !TQAAOSF_vcdectoint((&LRIACTR_filenametruncate), A_VINDEX(XAJACTR_argv,DBJACTR_argindex)) )
{ 
 /* line 562: */
UWIACTR_pterminalerror(277, A_HARR(WBJACTR,A_VINDEX(XAJACTR_argv,DBJACTR_argindex),A68_VC ));
} 
 /* line 563: */
 /* line 565: */
DBJACTR_argindex+=1;
} 
else
{ 
ZBJACTR = A_VC_EQ(FBJACTR_thisarg,YBJACTR);
if ( ! ZBJACTR )
{ /* line 566: */
ZBJACTR = A_VC_EQ(FBJACTR_thisarg,BCJACTR);
}
if ( ZBJACTR )
{ 
 /* line 568: */
MQIACTR_longlongoption = A68_TRUE;
} 
else
{ 
ECJACTR = A_VC_EQ(FBJACTR_thisarg,DCJACTR);
if ( ! ECJACTR )
{ /* line 569: */
ECJACTR = A_VC_EQ(FBJACTR_thisarg,GCJACTR);
}
if ( ECJACTR )
{ 
 /* line 571: */
MQIACTR_longlongoption = A68_FALSE;
} 
else
{ 
JCJACTR = A_VC_EQ(FBJACTR_thisarg,ICJACTR);
if ( ! JCJACTR )
{ /* line 572: */
JCJACTR = A_VC_EQ(FBJACTR_thisarg,LCJACTR);
}
if ( JCJACTR )
{ 
 /* line 574: */
NQIACTR_nostructresultoption = A68_FALSE;
} 
else
{ 
OCJACTR = A_VC_EQ(FBJACTR_thisarg,NCJACTR);
if ( ! OCJACTR )
{ /* line 575: */
OCJACTR = A_VC_EQ(FBJACTR_thisarg,QCJACTR);
}
if ( OCJACTR )
{ 
 /* line 577: */
OQIACTR_closuremarkoption = A68_TRUE;
} 
else
{ 
TCJACTR = A_VC_EQ(FBJACTR_thisarg,SCJACTR);
if ( ! TCJACTR )
{ /* line 578: */
TCJACTR = A_VC_EQ(FBJACTR_thisarg,VCJACTR);
}
if ( TCJACTR )
{ 
 /* line 580: */
PQIACTR_closureonstackoption = A68_TRUE;
} 
else
{ 
 /* line 581: */
 /* line 582: */
if ( A_VC_EQ(FBJACTR_thisarg,XCJACTR) )
{ 
RXIACTR_write_stdout(SHAACTR_ctrans_version);
 /* line 583: */
 /* line 585: */
TQIACTR_filename_expected = A68_FALSE;
} 
else
{ 
ADJACTR = A_VC_EQ(FBJACTR_thisarg,ZCJACTR);
if ( ! ADJACTR )
{ /* line 586: */
ADJACTR = A_VC_EQ(FBJACTR_thisarg,CDJACTR);
}
 /* line 587: */
if ( ADJACTR )
{ 
RXIACTR_write_stdout(SHAACTR_ctrans_version);
 /* line 588: */
DDJACTR.fn.fn_global = RXIACTR_write_stdout;
DDJACTR.nonlocals = A68_NIL;
JGAALIB_show_a68config(DDJACTR);
 /* line 589: */
RXIACTR_write_stdout(FDJACTR);
 /* line 590: */
 /* line 592: */
TQIACTR_filename_expected = A68_FALSE;
} 
else
{ 
 /* line 593: */
 /* line 594: */
if ( A_VC_EQ(FBJACTR_thisarg,HDJACTR) )
{ 
JDJACTR.source = A_VINDEX(XAJACTR_argv,DBJACTR_argindex) ;
IDJACTR.Dir = (JDJACTR.destination);
IDJACTR.Next = DRIACTR_modinfo_dirlist;
KDJACTR = A_HEAP(A68_134 ) ;
(*KDJACTR) = IDJACTR ;
DRIACTR_modinfo_dirlist = KDJACTR;
 /* line 595: */
 /* line 597: */
DBJACTR_argindex+=1;
} 
else
{ 
 /* line 598: */
 /* line 599: */
if ( A_VC_EQ(FBJACTR_thisarg,MDJACTR) )
{ 
ODJACTR.source = A_VINDEX(XAJACTR_argv,DBJACTR_argindex) ;
NDJACTR.Dir = (ODJACTR.destination);
NDJACTR.Next = ERIACTR_cfile_dirlist;
PDJACTR = A_HEAP(A68_134 ) ;
(*PDJACTR) = NDJACTR ;
ERIACTR_cfile_dirlist = PDJACTR;
 /* line 600: */
 /* line 602: */
DBJACTR_argindex+=1;
} 
else
{ 
 /* line 603: */
 /* line 604: */
if ( A_VC_EQ(FBJACTR_thisarg,RDJACTR) )
{ 
TDJACTR.source = A_VINDEX(XAJACTR_argv,DBJACTR_argindex) ;
SDJACTR.Dir = (TDJACTR.destination);
SDJACTR.Next = CRIACTR_nil_dirlist;
UDJACTR = A_HEAP(A68_134 ) ;
(*UDJACTR) = SDJACTR ;
FRIACTR_library_directory = UDJACTR;
 /* line 605: */
 /* line 607: */
DBJACTR_argindex+=1;
} 
else
{ 
 /* line 608: */
 /* line 609: */
if ( A_VC_EQ(FBJACTR_thisarg,WDJACTR) )
{ 
 /* line 611: */
FRIACTR_library_directory = CRIACTR_nil_dirlist;
} 
else
{ 
 /* line 612: */
 /* line 613: */
if ( A_VC_EQ(FBJACTR_thisarg,YDJACTR) )
{ 
 /* line 614: */
{ 
ZDJACTR_uname = A_VINDEX(XAJACTR_argv,DBJACTR_argindex);
 /* line 615: */
DBJACTR_argindex+=1;
 /* line 616: */
 /* line 617: */
 /* line 618: */
BEJACTR = A_VC_EQ(ZDJACTR_uname,CEJACTR);
if ( BEJACTR )
{ 
 /* line 619: */
JRIACTR_uname_option = A_UNITE(DEJACTR,mode2,2,HRIACTR_fromseedfile);
} 
else
{ 
 /* line 620: */
 /* line 621: */
if ( A_VC_EQ(ZDJACTR_uname,FEJACTR) )
{ 
 /* line 622: */
 /* line 624: */
JRIACTR_uname_option = A_UNITE(GEJACTR,mode1,1,GRIACTR_fromcfile);
} 
else
{ 
 /* line 625: */
{ 
HEJACTR_uname_len = ZDJACTR_uname.upb;
 /* line 626: */
 /* line 627: */
 /* line 628: */
IEJACTR = (HEJACTR_uname_len>=WDAACTR_maxuname);
if ( IEJACTR )
{ 
MEJACTR = A_ISVEC(KEJACTR,(&JEJACTR_u),7,A68_CHAR ) ;
NEJACTR = A_VTRIM(LEJACTR,(ZDJACTR_uname),A_VTSCRIPT(&(LEJACTR.upb),(ZDJACTR_uname).upb,1,WDAACTR_maxuname)) ;
A_VASSIGN2(NEJACTR,MEJACTR,A68_CHAR );
 /* line 629: */
 /* line 630: */
 /* line 631: */
JRIACTR_uname_option = A_UNITE(OEJACTR,mode3,3,JEJACTR_u);
} 
else
{ 
 /* line 632: */
 /* line 633: */
if ( (HEJACTR_uname_len<WDAACTR_maxuname) )
{ 
REJACTR = A_ISVEC(QEJACTR,(&PEJACTR_u),7,A68_CHAR ) ;
SEJACTR = A_VC_PLUS(ZDJACTR_uname,A_C_TIMES('A',(WDAACTR_maxuname-HEJACTR_uname_len))) ;
A_VASSIGN2(SEJACTR,REJACTR,A68_CHAR );
 /* line 634: */
 /* line 635: */
JRIACTR_uname_option = A_UNITE(TEJACTR,mode3,3,PEJACTR_u);
} 
} 
} 
 /* line 637: */
UEJACTR_ok = A68_TRUE;
 /* line 638: */
VEJACTR = JRIACTR_uname_option ;
switch ( VEJACTR.mode )
{ 
case 3: /* STRUCT 7 CHAR */
WEJACTR_uname = (VEJACTR.data.mode3);
XEJACTR = WEJACTR_uname;
break;
default: 
A_IMP_SKIP ;
break;
} 
AFJACTR = A_HISVEC(ZEJACTR,XEJACTR,7,A68_CHAR ) ;
CFJACTR = AFJACTR.upb -1;
BFJACTR = AFJACTR.data;
for (;CFJACTR-- >= 0;
(BFJACTR++
) )
{
YEJACTR_c = *BFJACTR;
 /* line 639: */
 /* line 640: */
if ( !(UEJACTR_ok) ) break;
DFJACTR = ((A68_INT)(unsigned char)YEJACTR_c>=(A68_INT)(unsigned char)'A');
if ( DFJACTR )
{ /* line 641: */
DFJACTR = ((A68_INT)(unsigned char)YEJACTR_c<=(A68_INT)(unsigned char)'Z');
}
UEJACTR_ok = DFJACTR;
}
 /* line 643: */
if ( !UEJACTR_ok )
{ 
EFJACTR = JRIACTR_uname_option ;
switch ( EFJACTR.mode )
{ 
case 3: /* STRUCT 7 CHAR */
FFJACTR_uname = (EFJACTR.data.mode3);
GFJACTR = A_HARR(IFJACTR,A_HISVEC(HFJACTR,FFJACTR_uname,7,A68_CHAR ),A68_VC );
break;
default: 
A_IMP_SKIP ;
break;
} 
 /* line 644: */
UWIACTR_pterminalerror(286, GFJACTR);
} 
} 
} 
} 
} 
else
{ 
 /* line 645: */
if ( A_VC_EQ(FBJACTR_thisarg,KFJACTR) )
{ 
 /* line 646: */
GQIACTR_streamoption = A68_TRUE;
} 
else
{ 
if ( A_VC_EQ(FBJACTR_thisarg,MFJACTR) )
{ 
 /* line 647: */
CQIACTR_dotoption = A68_TRUE;
} 
else
{ 
if ( A_VC_EQ(FBJACTR_thisarg,OFJACTR) )
{ 
 /* line 648: */
DQIACTR_quoteoption = A68_TRUE;
} 
else
{ 
if ( A_VC_EQ(FBJACTR_thisarg,QFJACTR) )
{ 
 /* line 649: */
EQIACTR_skipoption = A68_TRUE;
} 
else
{ 
if ( A_VC_EQ(FBJACTR_thisarg,SFJACTR) )
{ 
 /* line 650: */
FQIACTR_tildeoption = A68_TRUE;
} 
else
{ 
if ( A_VC_EQ(FBJACTR_thisarg,UFJACTR) )
{ 
 /* line 651: */
IQIACTR_optbooloption = A68_TRUE;
} 
else
{ 
if ( A_VC_EQ(FBJACTR_thisarg,WFJACTR) )
{ 
 /* line 652: */
KQIACTR_keeplistoption = A68_TRUE;
} 
else
{ 
ZFJACTR = A_VC_EQ(FBJACTR_thisarg,YFJACTR);
if ( ! ZFJACTR )
{ /* line 653: */
ZFJACTR = A_VC_EQ(FBJACTR_thisarg,BGJACTR);
}
 /* line 654: */
if ( ZFJACTR )
{ 
 /* line 655: */
 /* line 656: */
if ( !TQAAOSF_vcdectoint((&MRIACTR_tracelevel), A_VINDEX(XAJACTR_argv,DBJACTR_argindex)) )
{ 
 /* line 657: */
UWIACTR_pterminalerror(277, A_HARR(CGJACTR,A_VINDEX(XAJACTR_argv,DBJACTR_argindex),A68_VC ));
} 
 /* line 658: */
 /* line 659: */
DBJACTR_argindex+=1;
} 
else
{ 
FGJACTR = A_VC_EQ(FBJACTR_thisarg,EGJACTR);
if ( ! FGJACTR )
{ /* line 660: */
FGJACTR = A_VC_EQ(FBJACTR_thisarg,HGJACTR);
}
 /* line 661: */
if ( FGJACTR )
{ 
 /* line 662: */
 /* line 663: */
if ( !TQAAOSF_vcdectoint((&PRIACTR_debuglevel), A_VINDEX(XAJACTR_argv,DBJACTR_argindex)) )
{ 
 /* line 664: */
UWIACTR_pterminalerror(277, A_HARR(IGJACTR,A_VINDEX(XAJACTR_argv,DBJACTR_argindex),A68_VC ));
} 
 /* line 665: */
 /* line 666: */
DBJACTR_argindex+=1;
} 
else
{ 
LGJACTR = A_VC_EQ(FBJACTR_thisarg,KGJACTR);
if ( ! LGJACTR )
{ /* line 667: */
LGJACTR = A_VC_EQ(FBJACTR_thisarg,NGJACTR);
}
 /* line 668: */
if ( LGJACTR )
{ 
OGJACTR_module = A_VINDEX(XAJACTR_argv,DBJACTR_argindex);
 /* line 669: */
PGJACTR_foundmodule = TCHACTR_settracelevel(PRIACTR_debuglevel, OGJACTR_module);
 /* line 670: */
DBJACTR_argindex+=1;
 /* line 671: */
if ( !PGJACTR_foundmodule )
{ 
 /* line 672: */
OWIACTR_pwarning(280, A_HARR(QGJACTR,OGJACTR_module,A68_VC ));
} 
} 
else
{ 
 /* line 673: */
 /* line 674: */
if ( A_VC_EQ(FBJACTR_thisarg,SGJACTR) )
{ 
 /* line 675: */
{ 
TGJACTR_policy = A_VINDEX(XAJACTR_argv,DBJACTR_argindex);
 /* line 676: */
DBJACTR_argindex+=1;
 /* line 677: */
 /* line 678: */
VGJACTR = A_VC_EQ(TGJACTR_policy,WGJACTR);
if ( VGJACTR )
{ 
 /* line 679: */
WQIACTR_cstream_policy = UQIACTR_file_cstreams;
} 
else
{ 
 /* line 680: */
if ( A_VC_EQ(TGJACTR_policy,YGJACTR) )
{ 
 /* line 681: */
 /* line 682: */
WQIACTR_cstream_policy = VQIACTR_memory_cstreams;
} 
else
{ 
 /* line 683: */
UWIACTR_pterminalerror(285, A_HARR(ZGJACTR,TGJACTR_policy,A68_VC ));
} 
} 
} 
} 
else
{ 
 /* line 686: */
 /* line 685: */
 /* line 687: */
if ( A_VC_EQ(FBJACTR_thisarg,BHJACTR) )
{ 
 /* line 689: */
SQIACTR_tempfileoption = A68_TRUE;
} 
else
{ 
 /* line 690: */
 /* line 691: */
if ( A_VC_EQ(FBJACTR_thisarg,DHJACTR) )
{ 
 /* line 693: */
QQIACTR_checkoption = A68_TRUE;
} 
else
{ 
 /* line 694: */
 /* line 695: */
if ( A_VC_EQ(FBJACTR_thisarg,FHJACTR) )
{ 
 /* line 697: */
 /* line 698: */
RQIACTR_oldalienoption = A68_TRUE;
} 
else
{ 
 /* line 699: */
 /* line 700: */
 /* line 701: */
UWIACTR_pterminalerror(271, A_HARR(GHJACTR,FBJACTR_thisarg,A68_VC ));
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
else
{ 
 /* line 702: */
 /* line 703: */
CBJACTR_fileargindex = DBJACTR_argindex;
} 
}
 /* line 705: */
 /* line 706: */
 /* line 707: */
 /* line 708: */
if ( (YAJACTR_argc==CBJACTR_fileargindex) )
{ 
 /* line 709: */
 /* line 710: */
FYIACTR_setfilename(A_VINDEX(XAJACTR_argv,YAJACTR_argc));
} 
else
{ 
 /* line 711: */
if ( TQIACTR_filename_expected )
{ 
 /* line 712: */
 /* line 714: */
LXIACTR_terminalerror(274);
} 
else
{ 
HTIACTR_terminatenormally();
} 
} 
 /* line 716: */
 /* line 717: */
GPIACTR_initialisemessages(MQIACTR_longlongoption);
} 
A_PROC_EXIT(setparams);
return;
} 
#undef NL

A68_52 * KHJACTR_find_and_open_file(A68_VC  Basename, A68_134 * Dirlist, A68_VC * Full_filename)
{ 
A68_134 * OHJACTR_this_dir;
A68_52 * PHJACTR_file;
A68_VC  QHJACTR;  /* OPERATORS - scalar -> [] or VEC[] */
union {  /* BIOP 99 */
A68_VC   source;
A68_VC   destination;
} RHJACTR; 
A68_BOOL  SHJACTR;  /* clause result */
A68_52 * THJACTR;  /* clause result */
A_PROC_ENTRY(find_and_open_file);
 /* line 729: */
 /* line 730: */
{ 
OHJACTR_this_dir = Dirlist;
 /* line 731: */
 /* line 733: */
for ( ;; )
{ 
 /* line 734: */
 /* line 735: */
 /* line 736: */
if ( !((OHJACTR_this_dir!=CRIACTR_nil_dirlist)) ) break;
 /* line 737: */
RHJACTR.source = A_VC_PLUS(A_VC_PLUS((*(&(OHJACTR_this_dir->Dir))),A_HVEC(QHJACTR,'/',A68_CHAR )),Basename) ;
(*Full_filename) = (RHJACTR.destination);
 /* line 738: */
 /* line 739: */
PHJACTR_file = RVBAOSF_open_file((*Full_filename), BTBAOSF_read_access, RIBAOSF_ignore_msg);
 /* line 740: */
 /* line 741: */
 /* line 742: */
SHJACTR = (PHJACTR_file!=TSBAOSF_nil_file);
if ( SHJACTR )
{ 
 /* line 743: */
goto NHJACTR_file_found;
} 
 /* line 744: */
 /* line 745: */
OHJACTR_this_dir = (*(&(OHJACTR_this_dir->Next)));
}
 /* line 747: */
 /* line 748: */
 /* line 749: */
THJACTR = TSBAOSF_nil_file;
goto LHJACTR;
NHJACTR_file_found:
 /* line 751: */
THJACTR = PHJACTR_file;
LHJACTR: ;
} 
A_PROC_EXIT(find_and_open_file);
return( THJACTR );
} 
#undef NL

A68_VOID  WHJACTR_initialisetrace(void)
{ 
A68_INT  XHJACTR;  /* clause result */
A_PROC_ENTRY(initialisetrace);
{ 
 /* line 766: */
 /* line 767: */
if ( (MRIACTR_tracelevel>0) )
{ 
 /* line 768: */
XHJACTR = 1;
} 
else
{ 
XHJACTR = (-1);
} 
VHJACTR_startline = XHJACTR;
 /* line 769: */
 /* line 770: */
UHJACTR_traceon = (VHJACTR_startline>=0);
} 
A_PROC_EXIT(initialisetrace);
return;
} 
#undef NL

A68_BITS  YHJACTR_tracelevelflags(void)
{ 
A68_BITS  JIJACTR;  /* clause result */
A_PROC_ENTRY(tracelevelflags);
{ 
 /* line 778: */
 /* line 779: */
 /* line 780: */
 /* line 781: */
 /* line 782: */
 /* line 783: */
 /* line 784: */
 /* line 785: */
 /* line 786: */
 /* line 788: */
 /* line 789: */
 /* line 790: */
switch ( MRIACTR_tracelevel )
{ 
case 1: 
 /* line 791: */
JIJACTR = DIJACTR_tracetree;
break;
case 2: 
 /* line 792: */
JIJACTR = (A68_BITS )(DIJACTR_tracetree|BIJACTR_traceids);
break;
case 3: 
 /* line 793: */
JIJACTR = (A68_BITS )((A68_BITS )((A68_BITS )(DIJACTR_tracetree|ZHJACTR_tracealllevels)|BIJACTR_traceids)|CIJACTR_longiddec);
break;
case 4: 
 /* line 794: */
JIJACTR = (A68_BITS )((A68_BITS )(DIJACTR_tracetree|BIJACTR_traceids)|EIJACTR_tracetreeafter);
break;
case 5: 
 /* line 795: */
JIJACTR = (A68_BITS )((A68_BITS )((A68_BITS )((A68_BITS )(DIJACTR_tracetree|ZHJACTR_tracealllevels)|BIJACTR_traceids)|CIJACTR_longiddec)|EIJACTR_tracetreeafter);
break;
case 6: 
 /* line 797: */
JIJACTR = 00U;
break;
case 7: 
 /* line 799: */
JIJACTR = ~00U;
break;
default: 
 /* line 801: */
JIJACTR = 00U;
break;
} 
} 
A_PROC_EXIT(tracelevelflags);
return( JIJACTR );
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 3: */
 /* line 5: */
void HPIACTR(void)   /* initialise DECS environment */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/shields/projects/Algol68/Tools/Algol68toC/src/a68toc","-v","-uname","seedfile","-lib","/home/shields/projects/Algol68/Tools/Algol68toC/a68config","-dir","/home/shields/projects/Algol68/Tools/Algol68toC/a68config","-dir","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel","-dir",".","environment.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/shields/projects/Algol68/Tools/Algol68toC/a68config","A68_CDIR=","A68_DIR=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/shields/projects/Algol68/Tools/Algol68toC/a68config/a68config.m","./ctrans_version.m","./message.m","./moduletracer.m","./incinstallation.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/usefulops.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/osif.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/cif.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_130  RPIACTR;  /* procedure value */
A68_VC  WPIACTR;  /* avoid structure result */
A68_VC  YPIACTR;  /* OPERATORS - nil -> mode */
A68_137  KRIACTR;  /* OPERATORS - mode -> union mode */
A68_89  GSIACTR;  /* procedure value */
A68_151  IWIACTR;  /* procedure value */
A68_156  XXIACTR;  /* collateral clause result */
union {  /* BIOP 99 */
A68_VC   source;
A68_VC   destination;
} YXIACTR; 
A68_137  AYIACTR;  /* OPERATORS - mode -> union mode */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
LHAACTR();   /* USE ctrans_version */
DDHACTR();   /* USE message */
BCHACTR();   /* USE moduletracer */
ODAACTR();   /* USE incinstallation */
IKAAOSF();   /* USE usefulops */
WSCAOSF();   /* USE osif */
BAAAOSF();   /* USE cif */
/* --- Initialise configuration information */
A_config.source_file = "/home/shields/projects/Algol68/Tools/Algol68toC/src/environment.a68";
A_config.translation_time = "Sun Sep 26 21:50:55 2004";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "GPIACTR (from seed file) ";
A_config.spec_change_time = "Sun Sep 26 21:50:55 2004";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS environment);
UEAALIB_a68config(LGAALIB_configinfo, LPIACTR);
 /* line 53: */
RPIACTR.fn.fn_global = OPIACTR_generator;
RPIACTR.nonlocals = A68_NIL;
MPIACTR_anonymous = RPIACTR;
 /* line 55: */
TPIACTR_generator( A68_FALSE, &WPIACTR );
XPIACTR_nullstr = WPIACTR;
 /* line 56: */
ZPIACTR_nilstr = (A_VVAC(YPIACTR));
 /* line 62: */
 /* line 63: */
AQIACTR_verboseoption = A68_FALSE;
 /* line 64: */
BQIACTR_lineoption = A68_FALSE;
 /* line 65: */
CQIACTR_dotoption = A68_FALSE;
 /* line 66: */
DQIACTR_quoteoption = A68_FALSE;
 /* line 67: */
EQIACTR_skipoption = A68_FALSE;
 /* line 69: */
FQIACTR_tildeoption = A68_FALSE;
 /* line 71: */
GQIACTR_streamoption = A68_FALSE;
 /* line 73: */
HQIACTR_streamoutoption = A68_FALSE;
 /* line 74: */
IQIACTR_optbooloption = A68_FALSE;
 /* line 75: */
JQIACTR_traceoption = A68_FALSE;
 /* line 76: */
KQIACTR_keeplistoption = A68_FALSE;
 /* line 78: */
LQIACTR_portableoption = A68_FALSE;
 /* line 80: */
MQIACTR_longlongoption = A68_FALSE;
 /* line 82: */
NQIACTR_nostructresultoption = A68_TRUE;
 /* line 84: */
OQIACTR_closuremarkoption = A68_FALSE;
 /* line 87: */
PQIACTR_closureonstackoption = A68_FALSE;
 /* line 89: */
QQIACTR_checkoption = A68_FALSE;
 /* line 90: */
RQIACTR_oldalienoption = A68_FALSE;
 /* line 91: */
SQIACTR_tempfileoption = A68_FALSE;
 /* line 95: */
TQIACTR_filename_expected = A68_TRUE;
 /* line 101: */
 /* line 102: */
 /* line 103: */
 /* line 105: */
WQIACTR_cstream_policy = VQIACTR_memory_cstreams;
 /* line 108: */
XQIACTR_sourcefilename = ZPIACTR_nilstr;
 /* line 109: */
YQIACTR_basenamesourcefile = ZPIACTR_nilstr;
 /* line 110: */
ZQIACTR_sourcefilesuffix = ZPIACTR_nilstr;
 /* line 111: */
ARIACTR_seedfilename = ZPIACTR_nilstr;
 /* line 113: */
BRIACTR_current_directory = ZPIACTR_nilstr;
 /* line 116: */
 /* line 117: */
CRIACTR_nil_dirlist = (A68_134 *)A68_NIL;
 /* line 118: */
DRIACTR_modinfo_dirlist = CRIACTR_nil_dirlist;
 /* line 119: */
ERIACTR_cfile_dirlist = CRIACTR_nil_dirlist;
 /* line 122: */
FRIACTR_library_directory = CRIACTR_nil_dirlist;
 /* line 125: */
 /* line 128: */
 /* line 130: */
 /* line 131: */
 /* line 132: */
JRIACTR_uname_option = A_UNITE(KRIACTR,mode3,3,IRIACTR);
 /* line 136: */
LRIACTR_filenametruncate = VDAACTR_maxid;
 /* line 149: */
MRIACTR_tracelevel = 0;
 /* line 150: */
 /* line 151: */
 /* line 153: */
PRIACTR_debuglevel = 0;
 /* line 158: */
QRIACTR_linenumber = 0;
 /* line 160: */
 /* line 161: */
 /* line 162: */
 /* line 163: */
 /* line 164: */
 /* line 166: */
WRIACTR_greatestseverity = 0;
 /* line 168: */
XRIACTR_comment_count = 0;
 /* line 169: */
YRIACTR_warning_count = 0;
 /* line 170: */
ZRIACTR_error_count = 0;
 /* line 172: */
 /* line 175: */
GSIACTR.fn.fn_global = BSIACTR_typelineonterminal;
GSIACTR.nonlocals = A68_NIL;
FSIACTR_list = (GSIACTR);
 /* line 177: */
 /* line 179: */
 /* line 183: */
 /* line 184: */
 /* line 204: */
 /* line 206: */
 /* line 208: */
 /* line 209: */
 /* line 249: */
 /* line 250: */
 /* line 294: */
 /* line 301: */
IWIACTR.fn.fn_global = GWIACTR_pmessage;
IWIACTR.nonlocals = A68_NIL;
HWIACTR_perror = (IWIACTR);
 /* line 303: */
 /* line 309: */
 /* line 315: */
 /* line 324: */
 /* line 339: */
 /* line 343: */
 /* line 346: */
 /* line 349: */
 /* line 355: */
 /* line 358: */
 /* line 364: */
 /* line 370: */
 /* line 382: */
 /* line 394: */
 /* line 396: */
VXIACTR_nil_modinfolist = (A68_154 *)A68_NIL;
 /* line 397: */
WXIACTR_nil_envinfo = (A68_155 *)A68_NIL;
 /* line 399: */
 /* line 400: */
 /* line 401: */
YXIACTR.source = SHAACTR_ctrans_version ;
XXIACTR.Version = (YXIACTR.destination);
 /* line 402: */
XXIACTR.Translationtime = 0;
 /* line 403: */
XXIACTR.Sourcefile = ZPIACTR_nilstr;
 /* line 404: */
XXIACTR.Nameseed = ZXIACTR;
 /* line 405: */
XXIACTR.Nameseedorigin = A_EMPTY(AYIACTR,4);
 /* line 406: */
XXIACTR.Used_modules = VXIACTR_nil_modinfolist;
 /* line 408: */
XXIACTR.Commandline = ZPIACTR_nilstr;
XXIACTR.Environment = WXIACTR_nil_envinfo;
BYIACTR_config_info = XXIACTR;
 /* line 413: */
 /* line 420: */
 /* line 421: */
 /* line 724: */
 /* line 756: */
UHJACTR_traceon = A68_FALSE;
 /* line 757: */
 /* line 759: */
 /* line 764: */
 /* line 765: */
 /* line 773: */
 /* line 774: */
 /* line 777: */
 /* line 803: */
 /* line 805: */
 /* line 833: */
/*SKIP*/;
A_PROC_EXIT(DECS environment);
} 
#undef NL
/* end of translation of environment.a68 */
