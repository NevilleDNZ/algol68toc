/* UNAME:HSZACTR */
#include <algol68/Asupport.h>
struct A68t32 ;
struct A68t33 ;

A_PROCEDURE(A68_VOID ,A68t31,(struct A68t32 ,struct A68t33 ),(struct A68t32 ,struct A68t33 ,void *));
typedef struct A68t31  A68_31 ;    /* PROC(MODE32,MODE33) VOID */
struct A68t32{
A68_INT  Number;
A_PAD_INT(PAD_1)
struct A68t34 * Facility;
A68_BITS  Class;
A_PAD_BITS(PAD_2)
};
typedef struct A68t32  A68_32 ;    /* STRUCT(INT,REF MODE34,BITS)  */
A_VECTOR(A68_VC ,A68t33);
typedef struct A68t33  A68_33 ;    /* VECTOR [] MODE26 */
A_VECTOR(struct A68t36 ,A68t35);
typedef struct A68t35  A68_35 ;    /* VECTOR [] MODE36 */
struct A68t36{
struct A68t32  Msgno;
A68_VC  Text;
};
typedef struct A68t36  A68_36 ;    /* STRUCT(MODE32,REF MODE26)  */
struct A68t34{
A68_VC  Name;
struct A68t35  Messages;
};
typedef struct A68t34  A68_34 ;    /* STRUCT(REF MODE26,REF MODE35)  */
struct A68t37{
A68_VC  Name;
A68_BITS * Stdiofile;
};
typedef struct A68t37  A68_37 ;    /* STRUCT(REF MODE26,REF BITS)  */
struct A68t38{
A68_INT  Status;
A_PAD_INT(PAD_3)
};
typedef struct A68t38  A68_38 ;    /* STRUCT(INT)  */

A_PROCEDURE(A68_BOOL ,A68t39,(struct A68t38 ,struct A68t38 ),(struct A68t38 ,struct A68t38 ,void *));
typedef struct A68t39  A68_39 ;    /* PROC(MODE38,MODE38) BOOL */
A_ISTRUCT(A68_CHAR ,4,A68t41);
typedef struct A68t41  A68_41 ;    /* STRUCT 4 CHAR */
struct A68t40{
struct A68t41  Access;
A_PAD_ISTRUCT(A68_41 ,PAD_4)
};
typedef struct A68t40  A68_40 ;    /* STRUCT(MODE41)  */

A_PROCEDURE(A68_VOID ,A68t42,(struct A68t37 *,A68_VC *),(struct A68t37 *,A68_VC *,void *));
typedef struct A68t42  A68_42 ;    /* PROC(REF MODE37) MODE26 */

A_PROCEDURE(struct A68t37 *,A68t43,(A68_VC ,struct A68t40 ,struct A68t31 ),(A68_VC ,struct A68t40 ,struct A68t31 ,void *));
typedef struct A68t43  A68_43 ;    /* PROC(MODE26,MODE40,MODE31) REF MODE37 */

A_PROCEDURE(A68_VOID ,A68t44,(struct A68t37 *,struct A68t31 ),(struct A68t37 *,struct A68t31 ,void *));
typedef struct A68t44  A68_44 ;    /* PROC(REF MODE37,MODE31) VOID */

A_PROCEDURE(A68_VOID ,A68t45,(struct A68t37 *,A68_VC ,A68_INT *,struct A68t31 ,struct A68t38 *),(struct A68t37 *,A68_VC ,A68_INT *,struct A68t31 ,struct A68t38 *,void *));
typedef struct A68t45  A68_45 ;    /* PROC(REF MODE37,REF MODE26,REF INT,MODE31) MODE38 */

A_PROCEDURE(A68_VOID ,A68t46,(struct A68t37 *,A68_VC ,struct A68t31 ,struct A68t38 *),(struct A68t37 *,A68_VC ,struct A68t31 ,struct A68t38 *,void *));
typedef struct A68t46  A68_46 ;    /* PROC(REF MODE37,MODE26,MODE31) MODE38 */

A_PROCEDURE(A68_VOID ,A68t47,(struct A68t37 *,A68_LINT ,struct A68t31 ,struct A68t38 *),(struct A68t37 *,A68_LINT ,struct A68t31 ,struct A68t38 *,void *));
typedef struct A68t47  A68_47 ;    /* PROC(REF MODE37,LONG INT,MODE31) MODE38 */

A_PROCEDURE(A68_VOID ,A68t48,(struct A68t37 *,A68_LINT *,struct A68t31 ,struct A68t38 *),(struct A68t37 *,A68_LINT *,struct A68t31 ,struct A68t38 *,void *));
typedef struct A68t48  A68_48 ;    /* PROC(REF MODE37,REF LONG INT,MODE31) MODE38 */

A_PROCEDURE(A68_VOID ,A68t49,(struct A68t37 *,struct A68t31 ,struct A68t38 *),(struct A68t37 *,struct A68t31 ,struct A68t38 *,void *));
typedef struct A68t49  A68_49 ;    /* PROC(REF MODE37,MODE31) MODE38 */

A_PROCEDURE(A68_VOID ,A68t50,(A68_VC ,struct A68t31 ,struct A68t38 *),(A68_VC ,struct A68t31 ,struct A68t38 *,void *));
typedef struct A68t50  A68_50 ;    /* PROC(MODE26,MODE31) MODE38 */

A_PROCEDURE(A68_VOID ,A68t51,(A68_VC ,A68_VC ,struct A68t31 ,struct A68t38 *),(A68_VC ,A68_VC ,struct A68t31 ,struct A68t38 *,void *));
typedef struct A68t51  A68_51 ;    /* PROC(MODE26,MODE26,MODE31) MODE38 */

A_PROCEDURE(A68_VOID ,A68t52,(A68_VC ,A68_VC ,struct A68t31 ,A68_VC *),(A68_VC ,A68_VC ,struct A68t31 ,A68_VC *,void *));
typedef struct A68t52  A68_52 ;    /* PROC(MODE26,MODE26,MODE31) MODE26 */
struct A68t53{
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
typedef struct A68t53  A68_53 ;    /* STRUCT(SHORT BITS,LONG BITS,SHORT INT,SHORT INT,SHORT BITS,SHORT BITS,LONG INT,LONG INT,LONG INT,LONG INT)  */
struct A68t55 ;

A_PROCEDURE(struct A68t53 *,A68t54,(struct A68t55 ,struct A68t31 ),(struct A68t55 ,struct A68t31 ,void *));
typedef struct A68t54  A68_54 ;    /* PROC(MODE55,MODE31) REF MODE53 */
struct A68t55 { A68_INT mode; union {
struct A68t37 * mode1;
A68_VC  mode2;
} data; };
typedef struct A68t55  A68_55 ;    /* UNION(REF MODE37,MODE26)  */

A_PROCEDURE(A68_BOOL ,A68t56,(struct A68t37 *),(struct A68t37 *,void *));
typedef struct A68t56  A68_56 ;    /* PROC(REF MODE37) BOOL */

A_PROCEDURE(A68_BITS *,A68t57,(A68_VC ,struct A68t31 ),(A68_VC ,struct A68t31 ,void *));
typedef struct A68t57  A68_57 ;    /* PROC(MODE26,MODE31) REF BITS */

A_PROCEDURE(A68_VOID ,A68t58,(A68_BITS *,struct A68t31 ),(A68_BITS *,struct A68t31 ,void *));
typedef struct A68t58  A68_58 ;    /* PROC(REF BITS,MODE31) VOID */

A_PROCEDURE(A68_VOID ,A68t59,(A68_BITS *,struct A68t31 ,A68_VC *),(A68_BITS *,struct A68t31 ,A68_VC *,void *));
typedef struct A68t59  A68_59 ;    /* PROC(REF BITS,MODE31) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t60,(A68_VC *),(A68_VC *,void *));
typedef struct A68t60  A68_60 ;    /* PROC MODE26 */

A_PROCEDURE(A68_VOID ,A68t61,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t61  A68_61 ;    /* PROC(MODE26) MODE26 */

A_PROCEDURE(A68_LINT ,A68t62,(void),(void *));
typedef struct A68t62  A68_62 ;    /* PROC LONG INT */

A_PROCEDURE(A68_VOID ,A68t63,(A68_LINT ,A68_VC *),(A68_LINT ,A68_VC *,void *));
typedef struct A68t63  A68_63 ;    /* PROC(LONG INT) MODE26 */

A_PROCEDURE(A68_VOID ,A68t64,(A68_INT ),(A68_INT ,void *));
typedef struct A68t64  A68_64 ;    /* PROC(INT) VOID */

A_PROCEDURE(A68_INT ,A68t65,(A68_VC ,struct A68t31 ),(A68_VC ,struct A68t31 ,void *));
typedef struct A68t65  A68_65 ;    /* PROC(MODE26,MODE31) INT */

A_PROCEDURE(A68_INT ,A68t66,(void),(void *));
typedef struct A68t66  A68_66 ;    /* PROC INT */
struct A68t67{
A68_VC  Filename;
A68_VC  Directory;
A68_VC  Name;
A68_VC  Type;
};
typedef struct A68t67  A68_67 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE26,REF MODE26)  */

A_PROCEDURE(A68_VOID ,A68t68,(A68_VC ,A68_VC ,struct A68t31 ,struct A68t67 *),(A68_VC ,A68_VC ,struct A68t31 ,struct A68t67 *,void *));
typedef struct A68t68  A68_68 ;    /* PROC(MODE26,MODE26,MODE31) MODE67 */

A_PROCEDURE(A68_VOID ,A68t69,(struct A68t33 *),(struct A68t33 *,void *));
typedef struct A68t69  A68_69 ;    /* PROC MODE33 */

A_PROCEDURE(A68_VOID ,A68t70,(A68_VC ,struct A68t31 ,struct A68t33 *),(A68_VC ,struct A68t31 ,struct A68t33 *,void *));
typedef struct A68t70  A68_70 ;    /* PROC(MODE26,MODE31) MODE33 */
struct A68t72 ;

A_PROCEDURE(A68_VOID ,A68t71,(struct A68t72 ,struct A68t31 ,struct A68t31 ),(struct A68t72 ,struct A68t31 ,struct A68t31 ,void *));
typedef struct A68t71  A68_71 ;    /* PROC(MODE72,MODE31,MODE31) VOID */
A_VECTOR(A68_INT ,A68t72);
typedef struct A68t72  A68_72 ;    /* VECTOR [] INT */

A_PROCEDURE(A68_VOID ,A68t73,(struct A68t72 ,struct A68t31 ),(struct A68t72 ,struct A68t31 ,void *));
typedef struct A68t73  A68_73 ;    /* PROC(MODE72,MODE31) VOID */

A_PROCEDURE(A68_VOID ,A68t74,(A68_INT ,struct A68t31 ,struct A68t31 *),(A68_INT ,struct A68t31 ,struct A68t31 *,void *));
typedef struct A68t74  A68_74 ;    /* PROC(INT,MODE31) MODE31 */

A_PROCEDURE(A68_VOID ,A68t75,(void),(void *));
typedef struct A68t75  A68_75 ;    /* PROC VOID */

A_PROCEDURE(A68_VOID ,A68t76,(A68_BITS ),(A68_BITS ,void *));
typedef struct A68t76  A68_76 ;    /* PROC(BITS) VOID */
struct A68t78 ;

A_PROCEDURE(A68_VOID ,A68t77,(struct A68t78 ),(struct A68t78 ,void *));
typedef struct A68t77  A68_77 ;    /* PROC(MODE78) VOID */

A_PROCEDURE(A68_VOID ,A68t78,(A68_VC ),(A68_VC ,void *));
typedef struct A68t78  A68_78 ;    /* PROC(MODE26) VOID */
struct A68t79{
A68_VC  Name;
A68_INT  Value;
A_PAD_INT(PAD_15)
};
typedef struct A68t79  A68_79 ;    /* STRUCT(MODE26,INT)  */

A_PROCEDURE(A68_VOID ,A68t80,(A68_BOOL ,struct A68t79 *),(A68_BOOL ,struct A68t79 *,void *));
typedef struct A68t80  A68_80 ;    /* PROC(BOOL) MODE79 */
struct A68t82 ;

A_PROCEDURE(A68_VOID ,A68t81,(struct A68t82 ,struct A68t31 ),(struct A68t82 ,struct A68t31 ,void *));
typedef struct A68t81  A68_81 ;    /* PROC(MODE82,MODE31) VOID */
A_VECTOR(struct A68t79 ,A68t82);
typedef struct A68t82  A68_82 ;    /* VECTOR [] MODE79 */

A_PROCEDURE(A68_VOID ,A68t83,(A68_BOOL ,A68_VC *),(A68_BOOL ,A68_VC *,void *));
typedef struct A68t83  A68_83 ;    /* PROC(BOOL) MODE26 */
A_ISTRUCT(A68_CHAR ,7,A68t85);
typedef struct A68t85  A68_85 ;    /* STRUCT 7 CHAR */
struct A68t84{
struct A68t85  Name;
A_PAD_ISTRUCT(A68_85 ,PAD_16)
A68_BOOL  Set;
A_PAD_BOOL(PAD_17)
};
typedef struct A68t84  A68_84 ;    /* STRUCT(MODE85,BOOL)  */
struct A68t86{
A68_INT  Labno;
A_PAD_INT(PAD_18)
};
typedef struct A68t86  A68_86 ;    /* STRUCT(INT)  */
struct A68t87{
A68_INT  Rdenno;
A_PAD_INT(PAD_19)
A68_INT  Mode;
A_PAD_INT(PAD_20)
A68_INT  Nods;
A_PAD_INT(PAD_21)
A68_INT  Deflex;
A_PAD_INT(PAD_22)
};
typedef struct A68t87  A68_87 ;    /* STRUCT(INT,INT,INT,INT)  */
A_ISTRUCT(A68_CHAR ,32,A68t89);
typedef struct A68t89  A68_89 ;    /* STRUCT 32 CHAR */
struct A68t88{
struct A68t89  N;
A_PAD_ISTRUCT(A68_89 ,PAD_23)
struct A68t89  F;
A_PAD_ISTRUCT(A68_89 ,PAD_24)
A68_INT  Level;
A_PAD_INT(PAD_25)
};
typedef struct A68t88  A68_88 ;    /* STRUCT(MODE89,MODE89,INT)  */
struct A68t90{
struct A68t89  Name;
A_PAD_ISTRUCT(A68_89 ,PAD_26)
A68_INT  Decno;
A_PAD_INT(PAD_27)
A68_INT  Level;
A_PAD_INT(PAD_28)
A68_INT  Mode;
A_PAD_INT(PAD_29)
A68_INT  Scope;
A_PAD_INT(PAD_30)
struct A68t90 * Rest;
};
typedef struct A68t90  A68_90 ;    /* STRUCT(MODE89,INT,INT,INT,INT,REF MODE90)  */
struct A68t91{
A68_INT  Rdenno;
A_PAD_INT(PAD_31)
A68_INT  Imode;
A_PAD_INT(PAD_32)
A68_INT  Length;
A_PAD_INT(PAD_33)
A68_INT  Deflex;
A_PAD_INT(PAD_34)
};
typedef struct A68t91  A68_91 ;    /* STRUCT(INT,INT,INT,INT)  */
struct A68t100{
A68_INT  Mode;
A_PAD_INT(PAD_35)
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
A_PAD_INT(PAD_36)
struct A68t104 * Modelist;
};
typedef struct A68t93  A68_93 ;    /* STRUCT(INT,REF MODE104)  */
struct A68t94{
A68_INT  Deproc;
A_PAD_INT(PAD_37)
struct A68t104 * Pars;
};
typedef struct A68t94  A68_94 ;    /* STRUCT(INT,REF MODE104)  */
struct A68t95{
A68_INT  Rdenno;
A_PAD_INT(PAD_38)
A68_INT  Deflex;
A_PAD_INT(PAD_39)
struct A68t103 * Sels;
};
typedef struct A68t95  A68_95 ;    /* STRUCT(INT,INT,REF MODE103)  */
struct A68t96{
A68_INT  Deproc;
A_PAD_INT(PAD_40)
};
typedef struct A68t96  A68_96 ;    /* STRUCT(INT)  */
struct A68t97{
A68_INT  Rdenno;
A_PAD_INT(PAD_41)
A68_INT  Vecmode;
A_PAD_INT(PAD_42)
A68_INT  Deflex;
A_PAD_INT(PAD_43)
};
typedef struct A68t97  A68_97 ;    /* STRUCT(INT,INT,INT)  */
struct A68t98{
A68_INT  Mode;
A_PAD_INT(PAD_44)
struct A68t102 * Stenlist;
};
typedef struct A68t98  A68_98 ;    /* STRUCT(INT,REF MODE102)  */
struct A68t99{
A68_INT  Mode;
A_PAD_INT(PAD_45)
A68_INT  Modeproc;
A_PAD_INT(PAD_46)
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
A_PAD_INT(PAD_47)
A68_INT  Rdenno;
A_PAD_INT(PAD_48)
struct A68t102 * Rest;
};
typedef struct A68t102  A68_102 ;    /* STRUCT(INT,INT,REF MODE102)  */
struct A68t103{
A68_INT  Mode;
A_PAD_INT(PAD_49)
A68_INT  Fieldno;
A_PAD_INT(PAD_50)
struct A68t89  Name;
A_PAD_ISTRUCT(A68_89 ,PAD_51)
struct A68t103 * Rest;
};
typedef struct A68t103  A68_103 ;    /* STRUCT(INT,INT,MODE89,REF MODE103)  */
struct A68t104{
A68_INT  Mode;
A_PAD_INT(PAD_52)
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
A_PAD_ISTRUCT(A68_89 ,PAD_53)
A68_INT  No;
A_PAD_INT(PAD_54)
A68_INT  Nl;
A_PAD_INT(PAD_55)
A68_INT  Ng;
A_PAD_INT(PAD_56)
struct A68t113  U;
};
typedef struct A68t109  A68_109 ;    /* STRUCT(MODE89,INT,INT,INT,MODE113)  */
A_VECTOR(struct A68t112 ,A68t110);
typedef struct A68t110  A68_110 ;    /* VECTOR [] MODE112 */
struct A68t112{
struct A68t85  Prefix;
A_PAD_ISTRUCT(A68_85 ,PAD_57)
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
typedef struct A68t112  A68_112 ;    /* STRUCT(MODE85,BOOL,BOOL,BOOL,BOOL,BOOL,REF MODE26,REF MODE26)  */
A_VECTOR(struct A68t85 ,A68t111);
typedef struct A68t111  A68_111 ;    /* VECTOR [] MODE85 */
struct A68t108{
struct A68t109  Xs;
struct A68t85  Ys;
A_PAD_ISTRUCT(A68_85 ,PAD_63)
A68_LINT  Timeoflastchange;
A_PAD_LINT(PAD_64)
struct A68t110  Keptinfo;
struct A68t111  Cnames;
};
typedef struct A68t108  A68_108 ;    /* STRUCT(MODE109,MODE85,LONG INT,REF MODE110,REF MODE111)  */
struct A68t106{
struct A68t85  Uname;
A_PAD_ISTRUCT(A68_85 ,PAD_65)
struct A68t85  Lname;
A_PAD_ISTRUCT(A68_85 ,PAD_66)
struct A68t85  Gname;
A_PAD_ISTRUCT(A68_85 ,PAD_67)
struct A68t107  Specs;
};
typedef struct A68t106  A68_106 ;    /* STRUCT(MODE85,MODE85,MODE85,REF MODE107)  */
struct A68t105{
struct A68t89  Name;
A_PAD_ISTRUCT(A68_89 ,PAD_68)
struct A68t106  Ym;
struct A68t89  Formal;
A_PAD_ISTRUCT(A68_89 ,PAD_69)
struct A68t85  Ys;
A_PAD_ISTRUCT(A68_85 ,PAD_70)
A68_INT  Level;
A_PAD_INT(PAD_71)
A68_INT  Ownlevel;
A_PAD_INT(PAD_72)
};
typedef struct A68t105  A68_105 ;    /* STRUCT(MODE89,MODE106,MODE89,MODE85,INT,INT)  */
struct A68t115{
struct A68t89  Name;
A_PAD_ISTRUCT(A68_89 ,PAD_73)
struct A68t88  L;
struct A68t88  G;
A68_INT  Type;
A_PAD_INT(PAD_74)
};
typedef struct A68t115  A68_115 ;    /* STRUCT(MODE89,MODE88,MODE88,INT)  */
struct A68t116{
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
typedef struct A68t116  A68_116 ;    /* STRUCT(INT,INT,INT,INT,INT,INT)  */
struct A68t117{
A68_INT  Type;
A_PAD_INT(PAD_81)
A68_INT  Moduleno;
A_PAD_INT(PAD_82)
struct A68t89  Name;
A_PAD_ISTRUCT(A68_89 ,PAD_83)
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
struct A68t85  Ys;
A_PAD_ISTRUCT(A68_85 ,PAD_84)
};
typedef struct A68t119  A68_119 ;    /* STRUCT(MODE109,MODE85)  */
struct A68t121 ;

A_PROCEDURE(A68_VOID ,A68t120,(struct A68t121 ),(struct A68t121 ,void *));
typedef struct A68t120  A68_120 ;    /* PROC(MODE121) VOID */
A_VECTOR(struct A68t122 ,A68t121);
typedef struct A68t121  A68_121 ;    /* VECTOR [] MODE122 */
struct A68t122 { A68_INT mode; union {
A68_CHAR  mode1;
A68_VC  mode2;
A68_SINT  mode3;
} data; };
typedef struct A68t122  A68_122 ;    /* UNION(CHAR,MODE26,SHORT INT)  */
struct A68t124 ;

A_PROCEDURE(A68_VOID ,A68t123,(struct A68t124 ,A68_INT ),(struct A68t124 ,A68_INT ,void *));
typedef struct A68t123  A68_123 ;    /* PROC(MODE124,INT) VOID */
A_VECTOR(struct A68t125 ,A68t124);
typedef struct A68t124  A68_124 ;    /* VECTOR [] MODE125 */
struct A68t125 { A68_INT mode; union {
A68_CHAR  mode1;
A68_VC  mode2;
A68_INT  mode3;
A68_SINT  mode4;
} data; };
typedef struct A68t125  A68_125 ;    /* UNION(CHAR,MODE26,INT,SHORT INT)  */

A_PROCEDURE(A68_INT ,A68t126,(A68_INT ),(A68_INT ,void *));
typedef struct A68t126  A68_126 ;    /* PROC(INT) INT */

A_PROCEDURE(A68_BOOL ,A68t127,(A68_INT ),(A68_INT ,void *));
typedef struct A68t127  A68_127 ;    /* PROC(INT) BOOL */
struct A68t128{
A68_INT  Level;
A_PAD_INT(PAD_85)
A68_INT  Block;
A_PAD_INT(PAD_86)
};
typedef struct A68t128  A68_128 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t129,(struct A68t128 *),(struct A68t128 *,void *));
typedef struct A68t129  A68_129 ;    /* PROC MODE128 */

A_PROCEDURE(A68_BOOL ,A68t130,(void),(void *));
typedef struct A68t130  A68_130 ;    /* PROC BOOL */

A_PROCEDURE(A68_BOOL ,A68t131,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t131  A68_131 ;    /* PROC(INT,INT) BOOL */

A_PROCEDURE(A68_VOID ,A68t132,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t132  A68_132 ;    /* PROC(INT,INT) VOID */

A_PROCEDURE(A68_BOOL ,A68t133,(struct A68t128 ,struct A68t128 ),(struct A68t128 ,struct A68t128 ,void *));
typedef struct A68t133  A68_133 ;    /* PROC(MODE128,MODE128) BOOL */

A_PROCEDURE(A68_BOOL ,A68t134,(struct A68t128 ),(struct A68t128 ,void *));
typedef struct A68t134  A68_134 ;    /* PROC(MODE128) BOOL */

A_PROCEDURE(A68_VOID ,A68t135,(A68_VC ,A68_BOOL ),(A68_VC ,A68_BOOL ,void *));
typedef struct A68t135  A68_135 ;    /* PROC(MODE26,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t136,(A68_VC ,A68_INT ),(A68_VC ,A68_INT ,void *));
typedef struct A68t136  A68_136 ;    /* PROC(MODE26,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t137,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t137  A68_137 ;    /* PROC(INT) REF MODE26 */
struct A68t139 ;

A_PROCEDURE(A68_VOID ,A68t138,(A68_INT ,struct A68t139 ),(A68_INT ,struct A68t139 ,void *));
typedef struct A68t138  A68_138 ;    /* PROC(INT,MODE139) VOID */
A_ROW(A68_VC ,A68t139,1);
typedef struct A68t139  A68_139 ;    /* [] MODE26 */

A_PROCEDURE(A68_BITS ,A68t140,(void),(void *));
typedef struct A68t140  A68_140 ;    /* PROC BITS */
struct A68t141{
A68_INT  Cfile;
A_PAD_INT(PAD_87)
};
typedef struct A68t141  A68_141 ;    /* STRUCT(INT)  */
struct A68t142{
A68_INT  Seedfile;
A_PAD_INT(PAD_88)
};
typedef struct A68t142  A68_142 ;    /* STRUCT(INT)  */
struct A68t143 { A68_INT mode; union {
struct A68t141  mode1;
struct A68t142  mode2;
struct A68t85  mode3;
} data; };
typedef struct A68t143  A68_143 ;    /* UNION(MODE141,MODE142,MODE85,VOID)  */
struct A68t144{
A68_VC  Version;
A68_LINT  Translationtime;
A_PAD_LINT(PAD_89)
A68_VC  Sourcefile;
struct A68t85  Nameseed;
A_PAD_ISTRUCT(A68_85 ,PAD_90)
struct A68t143  Nameseedorigin;
struct A68t145 * Used_modules;
A68_VC  Commandline;
struct A68t146 * Environment;
};
typedef struct A68t144  A68_144 ;    /* STRUCT(REF MODE26,LONG INT,REF MODE26,MODE85,MODE143,REF MODE145,REF MODE26,REF MODE146)  */
struct A68t145{
A68_VC  Modinfo_file;
struct A68t145 * Next;
};
typedef struct A68t145  A68_145 ;    /* STRUCT(REF MODE26,REF MODE145)  */
struct A68t146{
A68_VC  Env_name;
A68_VC  Env_value;
struct A68t146 * Next;
};
typedef struct A68t146  A68_146 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE146)  */
struct A68t148 ;

A_PROCEDURE(struct A68t37 *,A68t147,(A68_VC ,struct A68t148 *,A68_VC *),(A68_VC ,struct A68t148 *,A68_VC *,void *));
typedef struct A68t147  A68_147 ;    /* PROC(MODE26,REF MODE148,REF REF MODE26) REF MODE37 */
struct A68t148{
A68_VC  Dir;
struct A68t148 * Next;
};
typedef struct A68t148  A68_148 ;    /* STRUCT(REF MODE26,REF MODE148)  */

A_PROCEDURE(A68_VOID ,A68t149,(A68_VC ,A68_INT ,A68_VC *),(A68_VC ,A68_INT ,A68_VC *,void *));
typedef struct A68t149  A68_149 ;    /* PROC(REF MODE26,INT) MODE26 */

A_PROCEDURE(A68_VOID ,A68t150,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t150  A68_150 ;    /* PROC(REF MODE26) MODE26 */

A_PROCEDURE(A68_VOID ,A68t151,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t151  A68_151 ;    /* PROC(REF MODE26) REF MODE26 */
struct A68t153 ;
struct A68t154 ;

A_PROCEDURE(A68_VOID ,A68t152,(struct A68t153 ,struct A68t154 *,A68_INT ),(struct A68t153 ,struct A68t154 *,A68_INT ,void *));
typedef struct A68t152  A68_152 ;    /* PROC(MODE153,REF MODE154,INT) VOID */
struct A68t153{
A68_INT  Type;
A_PAD_INT(PAD_91)
A68_VC  Name;
A68_INT  Mode;
A_PAD_INT(PAD_92)
A68_INT  Decno;
A_PAD_INT(PAD_93)
};
typedef struct A68t153  A68_153 ;    /* STRUCT(INT,REF MODE26,INT,INT)  */
struct A68t156{
A68_INT  Rdenno;
A_PAD_INT(PAD_94)
};
typedef struct A68t156  A68_156 ;    /* STRUCT(INT)  */
struct A68t157{
A68_INT  Idno;
A_PAD_INT(PAD_95)
};
typedef struct A68t157  A68_157 ;    /* STRUCT(INT)  */
struct A68t158{
struct A68t85  Name;
A_PAD_ISTRUCT(A68_85 ,PAD_96)
A68_INT  Mode;
A_PAD_INT(PAD_97)
};
typedef struct A68t158  A68_158 ;    /* STRUCT(MODE85,INT)  */
struct A68t159{
A68_INT  Nse;
A_PAD_INT(PAD_98)
};
typedef struct A68t159  A68_159 ;    /* STRUCT(INT)  */
struct A68t160{
A68_INT  Fn;
A_PAD_INT(PAD_99)
A68_INT  Param;
A_PAD_INT(PAD_100)
struct A68t161 * Operands;
};
typedef struct A68t160  A68_160 ;    /* STRUCT(INT,INT,REF MODE161)  */
struct A68t155 { A68_INT mode; union {
A68_LBITS  mode1;
struct A68t156  mode2;
struct A68t157  mode4;
struct A68t158  mode5;
A68_VC  mode6;
struct A68t86  mode7;
struct A68t159  mode8;
struct A68t160  mode9;
} data; };
typedef struct A68t155  A68_155 ;    /* UNION(LONG BITS,MODE156,VOID,MODE157,MODE158,MODE26,MODE86,MODE159,MODE160)  */
struct A68t154{
A68_INT  Mode;
A_PAD_INT(PAD_101)
A68_BITS  Info;
A_PAD_BITS(PAD_102)
struct A68t155  Extra;
};
typedef struct A68t154  A68_154 ;    /* STRUCT(INT,BITS,MODE155)  */
struct A68t161{
struct A68t154  Value;
struct A68t161 * Rest;
};
typedef struct A68t161  A68_161 ;    /* STRUCT(MODE154,REF MODE161)  */

A_PROCEDURE(A68_VOID ,A68t162,(A68_INT ,struct A68t128 *),(A68_INT ,struct A68t128 *,void *));
typedef struct A68t162  A68_162 ;    /* PROC(INT) MODE128 */

A_PROCEDURE(A68_VOID ,A68t163,(A68_VC ,struct A68t85 ,A68_INT ,A68_INT ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_VC ,A68_VC ),(A68_VC ,struct A68t85 ,A68_INT ,A68_INT ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_VC ,A68_VC ,void *));
typedef struct A68t163  A68_163 ;    /* PROC(REF MODE26,MODE85,INT,INT,BOOL,BOOL,BOOL,BOOL,BOOL,REF MODE26,REF MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t164,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t164  A68_164 ;    /* PROC(INT) MODE26 */

A_PROCEDURE(A68_VOID ,A68t165,(struct A68t153 ,struct A68t161 **),(struct A68t153 ,struct A68t161 **,void *));
typedef struct A68t165  A68_165 ;    /* PROC(MODE153,REF REF MODE161) VOID */
A_ROW(struct A68t167 ,A68t166,1);
typedef struct A68t166  A68_166 ;    /* [] MODE167 */
struct A68t167{
A68_INT  Mode;
A_PAD_INT(PAD_103)
A68_INT  Cvariabletype;
A_PAD_INT(PAD_104)
struct A68t128  Environ;
A68_VC  Name;
A68_VC  C_name;
struct A68t85  Prefix;
A_PAD_ISTRUCT(A68_85 ,PAD_105)
A68_BITS  Flags;
A_PAD_BITS(PAD_106)
A68_VC  Definition;
A68_VC  Rhs;
};
typedef struct A68t167  A68_167 ;    /* STRUCT(INT,INT,MODE128,REF MODE26,REF MODE26,MODE85,BITS,REF MODE26,REF MODE26)  */

A_PROCEDURE(A68_VOID ,A68t168,(struct A68t153 ),(struct A68t153 ,void *));
typedef struct A68t168  A68_168 ;    /* PROC(MODE153) VOID */
struct A68t170 ;

A_PROCEDURE(A68_VOID ,A68t169,(struct A68t170 ),(struct A68t170 ,void *));
typedef struct A68t169  A68_169 ;    /* PROC(MODE170) VOID */
struct A68t170{
A68_VC  Name;
A68_INT  Labno;
A_PAD_INT(PAD_107)
A68_INT  Status;
A_PAD_INT(PAD_108)
A68_BOOL  Notsetting;
A_PAD_BOOL(PAD_109)
};
typedef struct A68t170  A68_170 ;    /* STRUCT(REF MODE26,INT,INT,BOOL)  */

A_PROCEDURE(A68_VOID ,A68t171,(A68_VC ,A68_INT ,struct A68t72 ,A68_INT ,A68_INT ,struct A68t128 ,A68_BITS ),(A68_VC ,A68_INT ,struct A68t72 ,A68_INT ,A68_INT ,struct A68t128 ,A68_BITS ,void *));
typedef struct A68t171  A68_171 ;    /* PROC(REF MODE26,INT,REF MODE72,INT,INT,MODE128,BITS) VOID */
A_ROW(struct A68t173 ,A68t172,1);
typedef struct A68t172  A68_172 ;    /* [] MODE173 */
struct A68t173{
A68_INT  Mode;
A_PAD_INT(PAD_110)
A68_INT  Resultmode;
A_PAD_INT(PAD_111)
A68_INT  Declevel;
A_PAD_INT(PAD_112)
struct A68t128  Environ;
A68_VC  Name;
struct A68t85  Prefix;
A_PAD_ISTRUCT(A68_85 ,PAD_113)
struct A68t85  Fnprefix;
A_PAD_ISTRUCT(A68_85 ,PAD_114)
struct A68t85  Envprefix;
A_PAD_ISTRUCT(A68_85 ,PAD_115)
A68_BITS  Flags;
A_PAD_BITS(PAD_116)
};
typedef struct A68t173  A68_173 ;    /* STRUCT(INT,INT,INT,MODE128,REF MODE26,MODE85,MODE85,MODE85,BITS)  */
struct A68t174{
struct A68t84  Label;
struct A68t128  Environ;
A68_VC  Name;
struct A68t85  Prefix;
A_PAD_ISTRUCT(A68_85 ,PAD_117)
A68_BITS  Flags;
A_PAD_BITS(PAD_118)
A68_INT  Alias;
A_PAD_INT(PAD_119)
};
typedef struct A68t174  A68_174 ;    /* STRUCT(MODE84,MODE128,REF MODE26,MODE85,BITS,INT)  */

A_PROCEDURE(struct A68t167 *,A68t175,(A68_INT ),(A68_INT ,void *));
typedef struct A68t175  A68_175 ;    /* PROC(INT) REF MODE167 */
A_ROW(struct A68t174 ,A68t176,1);
typedef struct A68t176  A68_176 ;    /* [] MODE174 */
struct A68t178 ;

A_PROCEDURE(A68_VOID ,A68t177,(A68_INT ,A68_INT ,A68_INT ,A68_INT ,struct A68t178 ),(A68_INT ,A68_INT ,A68_INT ,A68_INT ,struct A68t178 ,void *));
typedef struct A68t177  A68_177 ;    /* PROC(INT,INT,INT,INT,REF MODE178) VOID */
A_ROW(A68_INT ,A68t178,1);
typedef struct A68t178  A68_178 ;    /* [] INT */

A_PROCEDURE(A68_BOOL ,A68t179,(A68_VC ),(A68_VC ,void *));
typedef struct A68t179  A68_179 ;    /* PROC(MODE26) BOOL */
struct A68t180{
A68_INT  Mode;
A_PAD_INT(PAD_120)
A68_VC  String;
};
typedef struct A68t180  A68_180 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t181{
A68_INT  I;
A_PAD_INT(PAD_121)
};
typedef struct A68t181  A68_181 ;    /* STRUCT(INT)  */
struct A68t182{
A68_INT  Body;
A_PAD_INT(PAD_122)
A68_INT  Moduleno;
A_PAD_INT(PAD_123)
struct A68t178  Actuals;
};
typedef struct A68t182  A68_182 ;    /* STRUCT(INT,INT,REF MODE178)  */
struct A68t183{
A68_INT  Mode;
A_PAD_INT(PAD_124)
A68_INT  Number;
A_PAD_INT(PAD_125)
A68_VC  Insert;
};
typedef struct A68t183  A68_183 ;    /* STRUCT(INT,INT,REF MODE26)  */
struct A68t185{
A68_INT  Moduleno;
A_PAD_INT(PAD_126)
A68_INT  I;
A_PAD_INT(PAD_127)
A68_INT  J;
A_PAD_INT(PAD_128)
};
typedef struct A68t185  A68_185 ;    /* STRUCT(INT,INT,INT)  */
A_ROW(A68_VC ,A68t187,1);
typedef struct A68t187  A68_187 ;    /* [] REF MODE26 */
struct A68t186{
A68_INT  Moduleno;
A_PAD_INT(PAD_129)
A68_VC  Name;
A68_VC  Uname;
A68_VC  Lname;
A68_VC  Gname;
struct A68t187  Ysnames;
};
typedef struct A68t186  A68_186 ;    /* STRUCT(INT,REF MODE26,REF MODE26,REF MODE26,REF MODE26,REF MODE187)  */
struct A68t184 { A68_INT mode; union {
struct A68t182  mode1;
struct A68t185  mode2;
struct A68t186  mode3;
} data; };
typedef struct A68t184  A68_184 ;    /* UNION(MODE182,MODE185,MODE186)  */
struct A68t189{
A68_INT  Nochars;
A_PAD_INT(PAD_130)
A68_INT  Nocases;
A_PAD_INT(PAD_131)
A68_INT  W;
A_PAD_INT(PAD_132)
};
typedef struct A68t189  A68_189 ;    /* STRUCT(INT,INT,INT)  */
struct A68t188{
struct A68t189  Info;
A68_VC  Text;
};
typedef struct A68t188  A68_188 ;    /* STRUCT(MODE189,REF MODE26)  */
struct A68t190{
A68_VC  Representation;
};
typedef struct A68t190  A68_190 ;    /* STRUCT(REF MODE26)  */
struct A68t192{
A68_INT  Mode;
A_PAD_INT(PAD_133)
A68_VC  Nu;
};
typedef struct A68t192  A68_192 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t193{
A68_INT  Mode;
A_PAD_INT(PAD_134)
A68_LBITS  Denotation;
A_PAD_LBITS(PAD_135)
};
typedef struct A68t193  A68_193 ;    /* STRUCT(INT,LONG BITS)  */
struct A68t194{
A68_INT  Mode;
A_PAD_INT(PAD_136)
A68_VC  Denotation;
};
typedef struct A68t194  A68_194 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t195{
A68_INT  Fn;
A_PAD_INT(PAD_137)
A68_INT  Mode;
A_PAD_INT(PAD_138)
A68_INT  Param;
A_PAD_INT(PAD_139)
};
typedef struct A68t195  A68_195 ;    /* STRUCT(INT,INT,INT)  */
struct A68t196{
A68_VC  Name;
A68_BITS  Props;
A_PAD_BITS(PAD_140)
A68_INT  Mode;
A_PAD_INT(PAD_141)
A68_INT  Rdenno;
A_PAD_INT(PAD_142)
A68_INT  Maxname;
A_PAD_INT(PAD_143)
};
typedef struct A68t196  A68_196 ;    /* STRUCT(REF MODE26,BITS,INT,INT,INT)  */
struct A68t197{
A68_INT  W;
A_PAD_INT(PAD_144)
};
typedef struct A68t197  A68_197 ;    /* STRUCT(INT)  */
struct A68t198{
A68_INT  Mode;
A_PAD_INT(PAD_145)
A68_BITS  Props;
A_PAD_BITS(PAD_146)
A68_INT  Param;
A_PAD_INT(PAD_147)
};
typedef struct A68t198  A68_198 ;    /* STRUCT(INT,BITS,INT)  */
struct A68t199{
A68_BOOL  Start;
A_PAD_BOOL(PAD_148)
};
typedef struct A68t199  A68_199 ;    /* STRUCT(BOOL)  */
struct A68t200{
A68_INT  Fn;
A_PAD_INT(PAD_149)
A68_INT  Mode;
A_PAD_INT(PAD_150)
A68_BITS  Props;
A_PAD_BITS(PAD_151)
A68_INT  Param;
A_PAD_INT(PAD_152)
};
typedef struct A68t200  A68_200 ;    /* STRUCT(INT,INT,BITS,INT)  */
struct A68t201{
A68_INT  Fn;
A_PAD_INT(PAD_153)
A68_INT  Mode;
A_PAD_INT(PAD_154)
A68_BITS  Props;
A_PAD_BITS(PAD_155)
A68_INT  Resultmode;
A_PAD_INT(PAD_156)
};
typedef struct A68t201  A68_201 ;    /* STRUCT(INT,INT,BITS,INT)  */
struct A68t202{
A68_INT  Fn;
A_PAD_INT(PAD_157)
A68_BITS  Props;
A_PAD_BITS(PAD_158)
};
typedef struct A68t202  A68_202 ;    /* STRUCT(INT,BITS)  */
struct A68t191 { A68_INT mode; union {
struct A68t159  mode1;
A68_INT  mode2;
A68_BOOL  mode3;
struct A68t190  mode4;
struct A68t86  mode5;
struct A68t192  mode6;
struct A68t180  mode7;
struct A68t193  mode8;
struct A68t194  mode9;
struct A68t195  mode10;
struct A68t153  mode11;
struct A68t196  mode12;
struct A68t197  mode13;
struct A68t170  mode14;
struct A68t198  mode15;
struct A68t181  mode16;
struct A68t199  mode17;
struct A68t188  mode18;
struct A68t183  mode19;
struct A68t200  mode20;
struct A68t201  mode21;
struct A68t202  mode22;
struct A68t182  mode23;
struct A68t185  mode24;
struct A68t186  mode25;
} data; };
typedef struct A68t191  A68_191 ;    /* UNION(MODE159,INT,BOOL,MODE190,MODE86,MODE192,MODE180,MODE193,MODE194,MODE195,MODE153,MODE196,MODE197,MODE170,MODE198,MODE181,MODE199,MODE188,MODE183,MODE200,MODE201,MODE202,MODE182,MODE185,MODE186,VOID)  */
struct A68t203 { A68_INT mode; union {
struct A68t159  mode1;
A68_INT  mode2;
A68_BOOL  mode3;
struct A68t190  mode4;
struct A68t86  mode5;
struct A68t192  mode6;
struct A68t180  mode7;
struct A68t193  mode8;
struct A68t194  mode9;
} data; };
typedef struct A68t203  A68_203 ;    /* UNION(MODE159,INT,BOOL,MODE190,MODE86,MODE192,MODE180,MODE193,MODE194)  */
struct A68t204 { A68_INT mode; union {
struct A68t159  mode1;
A68_INT  mode2;
A68_BOOL  mode3;
struct A68t190  mode4;
struct A68t86  mode5;
struct A68t192  mode6;
struct A68t180  mode7;
struct A68t193  mode8;
struct A68t194  mode9;
struct A68t195  mode10;
struct A68t153  mode11;
struct A68t196  mode12;
struct A68t197  mode13;
struct A68t170  mode14;
struct A68t198  mode15;
struct A68t181  mode16;
struct A68t199  mode17;
struct A68t188  mode18;
struct A68t183  mode19;
} data; };
typedef struct A68t204  A68_204 ;    /* UNION(MODE159,INT,BOOL,MODE190,MODE86,MODE192,MODE180,MODE193,MODE194,MODE195,MODE153,MODE196,MODE197,MODE170,MODE198,MODE181,MODE199,MODE188,MODE183)  */
struct A68t205{
A68_INT  Parameters;
A_PAD_INT(PAD_159)
A68_INT  Result;
A_PAD_INT(PAD_160)
A68_BOOL  Hasdescriptors;
A_PAD_BOOL(PAD_161)
};
typedef struct A68t205  A68_205 ;    /* STRUCT(INT,INT,BOOL)  */
struct A68t206{
A68_INT  Mode;
A_PAD_INT(PAD_162)
A68_INT  Offset;
A_PAD_INT(PAD_163)
struct A68t89  Name;
A_PAD_ISTRUCT(A68_89 ,PAD_164)
};
typedef struct A68t206  A68_206 ;    /* STRUCT(INT,INT,MODE89)  */

A_PROCEDURE(A68_VOID ,A68t207,(A68_INT ,struct A68t72 *),(A68_INT ,struct A68t72 *,void *));
typedef struct A68t207  A68_207 ;    /* PROC(INT) REF MODE72 */

A_PROCEDURE(A68_VOID ,A68t208,(struct A68t206 *,A68_VC *),(struct A68t206 *,A68_VC *,void *));
typedef struct A68t208  A68_208 ;    /* PROC(REF MODE206) MODE26 */

A_PROCEDURE(A68_VOID ,A68t209,(A68_INT ,A68_VC ,struct A68t158 *),(A68_INT ,A68_VC ,struct A68t158 *,void *));
typedef struct A68t209  A68_209 ;    /* PROC(INT,MODE26) MODE158 */
struct A68t211 ;

A_PROCEDURE(A68_VOID ,A68t210,(struct A68t211 ,A68_INT ),(struct A68t211 ,A68_INT ,void *));
typedef struct A68t210  A68_210 ;    /* PROC(REF MODE211,INT) VOID */
A_ROW(struct A68t92 ,A68t211,1);
typedef struct A68t211  A68_211 ;    /* [] MODE92 */

A_PROCEDURE(A68_VOID ,A68t212,(A68_INT ,struct A68t205 *),(A68_INT ,struct A68t205 *,void *));
typedef struct A68t212  A68_212 ;    /* PROC(INT) MODE205 */
struct A68t214 ;

A_PROCEDURE(A68_VOID ,A68t213,(A68_INT ,struct A68t214 *),(A68_INT ,struct A68t214 *,void *));
typedef struct A68t213  A68_213 ;    /* PROC(INT) REF MODE214 */
A_VECTOR(struct A68t206 ,A68t214);
typedef struct A68t214  A68_214 ;    /* VECTOR [] MODE206 */

A_PROCEDURE(A68_INT ,A68t215,(A68_INT ,A68_BOOL ),(A68_INT ,A68_BOOL ,void *));
typedef struct A68t215  A68_215 ;    /* PROC(INT,BOOL) INT */

A_PROCEDURE(A68_VOID ,A68t216,(A68_INT ,A68_INT ,A68_VC *),(A68_INT ,A68_INT ,A68_VC *,void *));
typedef struct A68t216  A68_216 ;    /* PROC(INT,INT) MODE26 */

A_PROCEDURE(A68_VOID ,A68t217,(struct A68t143 ),(struct A68t143 ,void *));
typedef struct A68t217  A68_217 ;    /* PROC(MODE143) VOID */

A_PROCEDURE(struct A68t85 ,A68t218,(void),(void *));
typedef struct A68t218  A68_218 ;    /* PROC MODE85 */

A_PROCEDURE(A68_VOID ,A68t219,(struct A68t85 ),(struct A68t85 ,void *));
typedef struct A68t219  A68_219 ;    /* PROC(MODE85) VOID */

A_PROCEDURE(A68_VOID ,A68t220,(struct A68t143 ,A68_VC *),(struct A68t143 ,A68_VC *,void *));
typedef struct A68t220  A68_220 ;    /* PROC(MODE143) MODE26 */

A_PROCEDURE(A68_BOOL ,A68t221,(struct A68t154 *,struct A68t154 *),(struct A68t154 *,struct A68t154 *,void *));
typedef struct A68t221  A68_221 ;    /* PROC(REF MODE154,REF MODE154) BOOL */

A_PROCEDURE(A68_BOOL ,A68t222,(struct A68t154 *),(struct A68t154 *,void *));
typedef struct A68t222  A68_222 ;    /* PROC(REF MODE154) BOOL */

A_PROCEDURE(A68_BOOL ,A68t223,(struct A68t154 *,A68_LBITS ),(struct A68t154 *,A68_LBITS ,void *));
typedef struct A68t223  A68_223 ;    /* PROC(REF MODE154,LONG BITS) BOOL */

A_PROCEDURE(A68_LBITS ,A68t224,(struct A68t154 *),(struct A68t154 *,void *));
typedef struct A68t224  A68_224 ;    /* PROC(REF MODE154) LONG BITS */

A_PROCEDURE(A68_VOID ,A68t225,(struct A68t154 *,A68_VC *),(struct A68t154 *,A68_VC *,void *));
typedef struct A68t225  A68_225 ;    /* PROC(REF MODE154) MODE26 */

A_PROCEDURE(struct A68t154 *,A68t226,(struct A68t154 *,A68_INT ),(struct A68t154 *,A68_INT ,void *));
typedef struct A68t226  A68_226 ;    /* PROC(REF MODE154,INT) REF MODE154 */

A_PROCEDURE(A68_INT ,A68t227,(struct A68t160 ),(struct A68t160 ,void *));
typedef struct A68t227  A68_227 ;    /* PROC(MODE160) INT */
struct A68t228{
struct A68t154 * Value;
struct A68t84 * End;
A68_INT  Type;
A_PAD_INT(PAD_165)
};
typedef struct A68t228  A68_228 ;    /* STRUCT(REF MODE154,REF MODE84,INT)  */

A_PROCEDURE(A68_BOOL ,A68t229,(struct A68t154 *,A68_BITS ),(struct A68t154 *,A68_BITS ,void *));
typedef struct A68t229  A68_229 ;    /* PROC(REF MODE154,BITS) BOOL */

A_PROCEDURE(struct A68t154 *,A68t230,(struct A68t161 *,A68_INT ),(struct A68t161 *,A68_INT ,void *));
typedef struct A68t230  A68_230 ;    /* PROC(REF MODE161,INT) REF MODE154 */

A_PROCEDURE(A68_INT ,A68t231,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t231  A68_231 ;    /* PROC(INT,INT) INT */

A_PROCEDURE(struct A68t161 *,A68t232,(struct A68t161 *),(struct A68t161 *,void *));
typedef struct A68t232  A68_232 ;    /* PROC(REF MODE161) REF MODE161 */
struct A68t234 ;

A_PROCEDURE(struct A68t154 *,A68t233,(A68_INT ,A68_INT ,A68_BITS ,struct A68t234 ),(A68_INT ,A68_INT ,A68_BITS ,struct A68t234 ,void *));
typedef struct A68t233  A68_233 ;    /* PROC(INT,INT,BITS,MODE234) REF MODE154 */
A_VECTOR(struct A68t154 *,A68t234);
typedef struct A68t234  A68_234 ;    /* VECTOR [] REF MODE154 */

A_PROCEDURE(A68_VOID ,A68t235,(struct A68t154 *),(struct A68t154 *,void *));
typedef struct A68t235  A68_235 ;    /* PROC(REF MODE154) VOID */

A_PROCEDURE(A68_VOID ,A68t236,(struct A68t154 *,A68_BOOL ,A68_VC *),(struct A68t154 *,A68_BOOL ,A68_VC *,void *));
typedef struct A68t236  A68_236 ;    /* PROC(REF MODE154,BOOL) MODE26 */

A_PROCEDURE(A68_LINT ,A68t237,(struct A68t154 ),(struct A68t154 ,void *));
typedef struct A68t237  A68_237 ;    /* PROC(MODE154) LONG INT */
struct A68t238 { A68_INT mode; union {
struct A68t154 * mode1;
A68_VC  mode2;
struct A68t158  mode3;
} data; };
typedef struct A68t238  A68_238 ;    /* UNION(REF MODE154,MODE26,MODE158)  */

A_PROCEDURE(A68_VOID ,A68t239,(struct A68t238 ,A68_VC *),(struct A68t238 ,A68_VC *,void *));
typedef struct A68t239  A68_239 ;    /* PROC(MODE238) MODE26 */
struct A68t241 ;

A_PROCEDURE(A68_VOID ,A68t240,(struct A68t241 ,A68_VC *),(struct A68t241 ,A68_VC *,void *));
typedef struct A68t240  A68_240 ;    /* PROC(MODE241) MODE26 */
A_VECTOR(struct A68t238 ,A68t241);
typedef struct A68t241  A68_241 ;    /* VECTOR [] MODE238 */

A_PROCEDURE(A68_VOID ,A68t242,(A68_VC ,struct A68t241 ,A68_VC *),(A68_VC ,struct A68t241 ,A68_VC *,void *));
typedef struct A68t242  A68_242 ;    /* PROC(MODE26,MODE241) MODE26 */

A_PROCEDURE(A68_VOID ,A68t243,(struct A68t241 ),(struct A68t241 ,void *));
typedef struct A68t243  A68_243 ;    /* PROC(MODE241) VOID */

A_PROCEDURE(A68_VOID ,A68t244,(A68_VC ,A68_INT ,struct A68t241 ,struct A68t158 *),(A68_VC ,A68_INT ,struct A68t241 ,struct A68t158 *,void *));
typedef struct A68t244  A68_244 ;    /* PROC(MODE26,INT,MODE241) MODE158 */

A_PROCEDURE(struct A68t154 *,A68t245,(struct A68t154 *),(struct A68t154 *,void *));
typedef struct A68t245  A68_245 ;    /* PROC(REF MODE154) REF MODE154 */

A_PROCEDURE(struct A68t154 *,A68t246,(A68_VC ,struct A68t154 *),(A68_VC ,struct A68t154 *,void *));
typedef struct A68t246  A68_246 ;    /* PROC(MODE26,REF MODE154) REF MODE154 */

A_PROCEDURE(A68_VOID ,A68t247,(struct A68t154 *,A68_BOOL ),(struct A68t154 *,A68_BOOL ,void *));
typedef struct A68t247  A68_247 ;    /* PROC(REF MODE154,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t248,(struct A68t191 ,struct A68t154 *,A68_BOOL ),(struct A68t191 ,struct A68t154 *,A68_BOOL ,void *));
typedef struct A68t248  A68_248 ;    /* PROC(MODE191,REF MODE154,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t249,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t249  A68_249 ;    /* PROC(MODE26) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t250,(struct A68t75 ),(struct A68t75 ,void *));
typedef struct A68t250  A68_250 ;    /* PROC(MODE75) VOID */

A_PROCEDURE(A68_VOID ,A68t251,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t251  A68_251 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,60,A68t252);
typedef struct A68t252  A68_252 ;    /* STRUCT 60 CHAR */

A_PROCEDURE(A68_VOID ,A68t253,(struct A68t180 ,struct A68t154 *),(struct A68t180 ,struct A68t154 *,void *));
typedef struct A68t253  A68_253 ;    /* PROC(MODE180) MODE154 */

A_PROCEDURE(A68_VOID ,A68t254,(A68_VC ,A68_VC *,A68_VC *),(A68_VC ,A68_VC *,A68_VC *,void *));
typedef struct A68t254  A68_254 ;    /* PROC(REF MODE26,REF REF MODE26,REF REF MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t255,(struct A68t203 ,struct A68t154 *),(struct A68t203 ,struct A68t154 *,void *));
typedef struct A68t255  A68_255 ;    /* PROC(MODE203) MODE154 */
A_ISTRUCT(A68_CHAR ,18,A68t256);
typedef struct A68t256  A68_256 ;    /* STRUCT 18 CHAR */
A_ISTRUCT(A68_CHAR ,2,A68t257);
typedef struct A68t257  A68_257 ;    /* STRUCT 2 CHAR */
A_ISTRUCT(A68_CHAR ,3,A68t258);
typedef struct A68t258  A68_258 ;    /* STRUCT 3 CHAR */
A_ISTRUCT(struct A68t125 ,5,A68t259);
typedef struct A68t259  A68_259 ;    /* STRUCT 5 MODE125 */
A_ISTRUCT(struct A68t125 ,2,A68t260);
typedef struct A68t260  A68_260 ;    /* STRUCT 2 MODE125 */
A_ISTRUCT(A68_CHAR ,31,A68t261);
typedef struct A68t261  A68_261 ;    /* STRUCT 31 CHAR */
A_ISTRUCT(A68_CHAR ,8,A68t262);
typedef struct A68t262  A68_262 ;    /* STRUCT 8 CHAR */
A_ISTRUCT(A68_CHAR ,9,A68t263);
typedef struct A68t263  A68_263 ;    /* STRUCT 9 CHAR */
A_ISTRUCT(A68_CHAR ,28,A68t264);
typedef struct A68t264  A68_264 ;    /* STRUCT 28 CHAR */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from tracer --- */
/* --- End of imports from tracer --- */


/* --- Imports from values --- */
extern A68_BITS  YIJACTR_defaultinfo;
#define ZIJACTR_constant 0X1U
#define CJJACTR_nonloc 0X8U
#define FJJACTR_isnil 0X40U
extern A68_154  MJJACTR_skipvalue;
/* --- End of imports from values --- */


/* --- Imports from uniquenameserver --- */
extern A68_85  ZGMACTR_newuniquename(void);
/* --- End of imports from uniquenameserver --- */


/* --- Imports from modes --- */
extern A68_VOID  GJNACTR_ctype(A68_INT ,A68_VC *);
extern A68_INT  KRMACTR_derefmode(A68_INT );
extern A68_INT  RMMACTR_modetype(A68_INT );
extern A68_INT  CJNACTR_givecvariabletype(A68_INT ,A68_BOOL );
/* --- End of imports from modes --- */


/* --- Imports from incoperfn --- */
/* --- End of imports from incoperfn --- */


/* --- Imports from incmode --- */
#define WEAACTR_boolmode 7
#define XEAACTR_charmode 8
#define TEAACTR_gotomode 4
#define SEAACTR_nilmode 3
#define FEAACTR_proc 2
#define GEAACTR_procp 3
#define VFAACTR_refmark 1024
#define REAACTR_skipmode 2
#define UEAACTR_voidmode 5
/* --- End of imports from incmode --- */


/* --- Imports from incimperatives --- */
/* --- End of imports from incimperatives --- */


/* --- Imports from idtable --- */
extern A68_INT  EOKACTR_alienidno;
extern A68_167  DOKACTR_alienidinfo;
extern A68_166  FOKACTR_ids;
extern A68_172  GOKACTR_rds;
extern A68_166  HOKACTR_libraryids;
extern A68_176  IOKACTR_labels;
#define JOKACTR_idnoflags 0X0U
#define QOKACTR_idoptimisedflag 0X40U
#define SOKACTR_idgprocflag 0X100U
#define UOKACTR_idloadedflag 0X400U
#define APKACTR_rdglobalflag 0X8U
#define CPKACTR_rdloadedflag 0X20U
/* --- End of imports from idtable --- */


/* --- Imports from incid --- */
#define NAAACTR_keptgeneratorproccorrection 6000
#define IAAACTR_maxidno 2000
extern A68_INT  TAAACTR_maxkeptgeneratorproc;
#define MAAACTR_maxlibid 6000
#define KAAACTR_maxrdno 4000
#define HAAACTR_minidno 3
#define OAAACTR_minlab 16384
/* --- End of imports from incid --- */


/* --- Imports from identifiers --- */
extern A68_VOID  PXVACTR_declarenonlocallabel(A68_INT );
extern A68_VOID  CZVACTR_nonlocaldec(A68_INT ,A68_INT );
/* --- End of imports from identifiers --- */


/* --- Imports from denotations --- */
extern A68_VOID  RMJACTR_translatedenotation(A68_VC ,A68_VC *);
extern A68_VOID  MPJACTR_replacecontrolchars(A68_VC ,A68_VC *);
/* --- End of imports from denotations --- */


/* --- Imports from environment --- */
extern A68_VOID  PXIACTR_assert(A68_VC ,A68_BOOL );
extern A68_BOOL  RQIACTR_oldalienoption;
/* --- End of imports from environment --- */


/* --- Imports from environ --- */
extern A68_INT  TQLACTR_nonlocdecstream(A68_INT );
extern A68_128  SNLACTR_nullenviron;
extern A68_INT  EQLACTR_currentlevel(void);
extern A68_BOOL  WOLACTR_nonlocaldeclared(A68_INT ,A68_INT );
extern A68_VOID  NPLACTR_addnonlocal(A68_INT ,A68_INT );
extern A68_BOOL  VPLACTR_islocallevel(struct A68t128 );
extern A68_BOOL  YPLACTR_isgloballevel(struct A68t128 );
/* --- End of imports from environ --- */


/* --- Imports from coutput --- */
extern A68_VOID  VBMACTR_writecstream(struct A68t124 ,A68_INT );
/* --- End of imports from coutput --- */


/* --- Imports from centities --- */
extern A68_SINT  EIAACTR_cnewline;
extern A68_VOID  QJAACTR_singlequote(A68_VC ,A68_VC *);
extern A68_VOID  LJAACTR_doublequote(A68_VC ,A68_VC *);
extern A68_VOID  VJAACTR_curly(A68_VC ,A68_VC *);
/* --- End of imports from centities --- */


/* --- Imports from osif --- */
#include <errno.h>

#define RCBAOSF_errno errno
#define HVBAOSF_newline_char '\012'
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


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void QSYACTR(void);   /* tracer */
extern void JRPACTR(void);   /* values */
extern void AGMACTR(void);   /* uniquenameserver */
extern void MLMACTR(void);   /* modes */
extern void XFAACTR(void);   /* incoperfn */
extern void ZDAACTR(void);   /* incmode */
extern void UAAACTR(void);   /* incimperatives */
extern void YNKACTR(void);   /* idtable */
extern void BAAACTR(void);   /* incid */
extern void WIVACTR(void);   /* identifiers */
extern void UJJACTR(void);   /* denotations */
extern void HPIACTR(void);   /* environment */
extern void KNLACTR(void);   /* environ */
extern void YRLACTR(void);   /* coutput */
extern void THAACTR(void);   /* centities */
extern void WSCAOSF(void);   /* osif */
/* --- end of DECS initialisation functions --- */
static A68_252   LSZACTR = {"$Id: loads.c,v 1.5.2.4 2004/09/27 03:04:18 teshields Exp $"}; 
A_GISVEC(A68_VC ,MSZACTR,LSZACTR,60)
static A68_256   QVZACTR = {"unknown load of id"}; 
A_GISVEC(A68_VC ,RVZACTR,QVZACTR,18)
static A68_85   GWZACTR = {"static "}; 
A_GISVEC(A68_VC ,HWZACTR,GWZACTR,7)
static A68_257   MWZACTR = {"  "}; 
A_GISVEC(A68_VC ,NWZACTR,MWZACTR,2)
static A68_258   TWZACTR = {" = "}; 
A_GISVEC(A68_VC ,UWZACTR,TWZACTR,3)
static A68_257   FXZACTR = {"{ "}; 
A_GISVEC(A68_VC ,GXZACTR,FXZACTR,2)
static A68_257   PXZACTR = {" '"}; 
A_GISVEC(A68_VC ,QXZACTR,PXZACTR,2)
static A68_257   UXZACTR = {"' "}; 
A_GISVEC(A68_VC ,VXZACTR,UXZACTR,2)
static A68_257   YXZACTR = {"',"}; 
A_GISVEC(A68_VC ,ZXZACTR,YXZACTR,2)
static A68_257   HYZACTR = {"  "}; 
A_GISVEC(A68_VC ,IYZACTR,HYZACTR,2)
static A68_257   OYZACTR = {"} "}; 
A_GISVEC(A68_VC ,PYZACTR,OYZACTR,2)
static A68_257   UYZACTR = {"; "}; 
A_GISVEC(A68_VC ,VYZACTR,UYZACTR,2)
static A68_261   FZZACTR = {"LOADS - invalid STRUCT(INT nse)"}; 
A_GISVEC(A68_VC ,GZZACTR,FZZACTR,31)
static A68_262   NZZACTR = {"A68_TRUE"}; 
A_GISVEC(A68_VC ,OZZACTR,NZZACTR,8)
static A68_263   RZZACTR = {"A68_FALSE"}; 
A_GISVEC(A68_VC ,SZZACTR,RZZACTR,9)
static A68_264   HAABCTR = {"LOADS - unknown mode in load"}; 
A_GISVEC(A68_VC ,IAABCTR,HAABCTR,28)

A_STATIC A68_VOID  PSZACTR_checknonlocaldeclared(A68_INT  Decno, A68_INT  Declevel);

A_STATIC A68_VOID  USZACTR_alien(A68_180  Alienx, A68_154  *ReturnedValue);

A_STATIC A68_VOID  ZSZACTR_parsealienstring(A68_VC  String, A68_VC * Name, A68_VC * Definition);

A68_VOID  HUZACTR_load(A68_203  L, A68_154  *ReturnedValue);

A_STATIC A68_VOID  ZSZACTR_parsealienstring(A68_VC  String, A68_VC * Name, A68_VC * Definition)
{ 
A68_INT  ATZACTR_namestart;
A68_INT  BTZACTR_nameend;
A68_INT  CTZACTR_defstart;
A68_INT  DTZACTR;  /* to part of loop */
A68_INT  ETZACTR;  /* loop control */
A68_INT  FTZACTR;  /* to part of loop */
A68_INT  GTZACTR;  /* loop control */
A68_BOOL  HTZACTR;  /* optbool result */
A68_VC  ITZACTR;  /* OPERATORS - trim index */
A68_INT  JTZACTR;  /* to part of loop */
A68_INT  KTZACTR;  /* loop control */
A68_BOOL  LTZACTR;  /* optbool result */
A68_VC  MTZACTR;  /* clause result */
A68_VC  NTZACTR;  /* OPERATORS - nil -> mode */
A68_VC  OTZACTR;  /* OPERATORS - trim index */
A_PROC_ENTRY(parsealienstring);
 /* line 87: */
 /* line 88: */
{ 
 /* line 91: */
 /* line 92: */
DTZACTR = String.upb;
for ( ETZACTR = ATZACTR_namestart = 1;
ETZACTR <= DTZACTR;
ETZACTR += 1 )
{ 
 /* line 93: */
 /* line 94: */
if ( !(((*(&A_VINDEX(String,ATZACTR_namestart)))==' ')) ) break;
 /* line 95: */
ATZACTR_namestart+=1;
}
 /* line 98: */
 /* line 99: */
FTZACTR = String.upb;
for ( GTZACTR = BTZACTR_nameend = ATZACTR_namestart;
GTZACTR <= FTZACTR;
GTZACTR += 1 )
{ 
HTZACTR = !RQIACTR_oldalienoption;
if ( ! HTZACTR )
{HTZACTR = ((*(&A_VINDEX(String,BTZACTR_nameend)))!=' ');
}
if ( HTZACTR )
{ /* line 100: */
HTZACTR = ((*(&A_VINDEX(String,BTZACTR_nameend)))!=HVBAOSF_newline_char);
}
 /* line 101: */
if ( !(HTZACTR) ) break;
 /* line 102: */
BTZACTR_nameend+=1;
}
 /* line 104: */
(*Name) = A_VTRIM(ITZACTR,(String),A_VTSCRIPT(&(ITZACTR.upb),(String).upb,ATZACTR_namestart,(BTZACTR_nameend-1)));
 /* line 107: */
 /* line 108: */
JTZACTR = String.upb;
for ( KTZACTR = CTZACTR_defstart = BTZACTR_nameend;
KTZACTR <= JTZACTR;
KTZACTR += 1 )
{ 
LTZACTR = ((*(&A_VINDEX(String,CTZACTR_defstart)))==HVBAOSF_newline_char);
if ( ! LTZACTR )
{ /* line 109: */
LTZACTR = ((*(&A_VINDEX(String,CTZACTR_defstart)))==' ');
}
 /* line 110: */
if ( !(LTZACTR) ) break;
 /* line 111: */
CTZACTR_defstart+=1;
}
 /* line 113: */
if ( (CTZACTR_defstart>String.upb) )
{ 
MTZACTR = A_VVAC(NTZACTR);
} 
else
{ 
 /* line 114: */
MTZACTR = A_VTRIM(OTZACTR,(String),A_VTSCRIPT(&(OTZACTR.upb),(String).upb,CTZACTR_defstart,(String).upb));
} 
(*Definition) = MTZACTR;
} 
A_PROC_EXIT(parsealienstring);
return;
} 
#undef NL

A_STATIC A68_VOID  PSZACTR_checknonlocaldeclared(A68_INT  Decno, A68_INT  Declevel)
{ 
A68_INT  QSZACTR_curlev;
A68_INT  RSZACTR_i;
A68_INT  SSZACTR;  /* to part of loop */
A_PROC_ENTRY(checknonlocaldeclared);
 /* line 52: */
 /* line 53: */
{ 
QSZACTR_curlev = EQLACTR_currentlevel();
 /* line 54: */
 /* line 55: */
 /* line 56: */
if ( !WOLACTR_nonlocaldeclared(Decno, QSZACTR_curlev) )
{ 
NPLACTR_addnonlocal(Decno, QSZACTR_curlev);
 /* line 57: */
CZVACTR_nonlocaldec(Decno, QSZACTR_curlev);
 /* line 59: */
 /* line 60: */
SSZACTR = (QSZACTR_curlev-1);
for ( RSZACTR_i = (Declevel+1);
RSZACTR_i <= SSZACTR;
RSZACTR_i += 1 )
{ 
 /* line 61: */
 /* line 62: */
if ( !WOLACTR_nonlocaldeclared(Decno, RSZACTR_i) )
{ 
NPLACTR_addnonlocal(Decno, RSZACTR_i);
 /* line 63: */
 /* line 64: */
 /* line 65: */
CZVACTR_nonlocaldec(Decno, RSZACTR_i);
} 
}
 /* line 66: */
 /* line 68: */
} 
} 
A_PROC_EXIT(checknonlocaldeclared);
return;
} 
#undef NL

A_STATIC A68_VOID  USZACTR_alien(A68_180  Alienx, A68_154  *ReturnedValue)
{ 
A68_INT  PTZACTR_alienmode;
A68_INT  QTZACTR_alienmodetype;
A68_VC  RTZACTR_alienname;
A68_VC  STZACTR_aliendefinition;
A68_BOOL  TTZACTR;  /* optbool result */
A68_BOOL  UTZACTR;  /* optbool result */
A68_BITS  VTZACTR;  /* clause result */
A68_BITS  WTZACTR_alienflags;
A68_167  XTZACTR;  /* collateral clause result */
A68_VC  YTZACTR;  /* OPERATORS - nil -> mode */
A68_85  ZTZACTR;  /* OPERATORS - skip to mode */
A68_VC  AUZACTR;  /* OPERATORS - nil -> mode */
A68_154  BUZACTR;  /* collateral clause result */
A68_157  CUZACTR_alien;
A68_INT * DUZACTR;  /* YIELD */
A68_155  EUZACTR;  /* OPERATORS - mode -> union mode */
A68_154  FUZACTR;  /* clause result */
A_PROC_ENTRY(alien);
 /* line 81: */
 /* line 83: */
{ 
 /* line 116: */
PTZACTR_alienmode = Alienx.Mode;
 /* line 117: */
QTZACTR_alienmodetype = RMMACTR_modetype(PTZACTR_alienmode);
 /* line 119: */
 /* line 121: */
ZSZACTR_parsealienstring(Alienx.String, (&RTZACTR_alienname), (&STZACTR_aliendefinition));
 /* line 123: */
 /* line 124: */
TTZACTR = (PTZACTR_alienmode<VFAACTR_refmark);
if ( TTZACTR )
{UTZACTR = (QTZACTR_alienmodetype==FEAACTR_proc);
if ( ! UTZACTR )
{UTZACTR = (QTZACTR_alienmodetype==GEAACTR_procp);
}
 /* line 125: */
TTZACTR = UTZACTR;
}
 /* line 126: */
if ( TTZACTR )
{ 
 /* line 127: */
VTZACTR = SOKACTR_idgprocflag;
} 
else
{ 
VTZACTR = JOKACTR_idnoflags;
} 
WTZACTR_alienflags = VTZACTR;
 /* line 129: */
 /* line 130: */
 /* line 131: */
XTZACTR.Mode = PTZACTR_alienmode;
 /* line 132: */
XTZACTR.Cvariabletype = CJNACTR_givecvariabletype(PTZACTR_alienmode, A68_FALSE);
 /* line 133: */
XTZACTR.Environ = SNLACTR_nullenviron;
 /* line 134: */
XTZACTR.Name = RTZACTR_alienname;
 /* line 135: */
XTZACTR.C_name = A_VVAC(YTZACTR);
 /* line 136: */
XTZACTR.Prefix = ZTZACTR;
 /* line 137: */
XTZACTR.Flags = WTZACTR_alienflags;
 /* line 139: */
XTZACTR.Definition = STZACTR_aliendefinition;
XTZACTR.Rhs = A_VVAC(AUZACTR);
DOKACTR_alienidinfo = XTZACTR;
 /* line 141: */
 /* line 142: */
BUZACTR.Mode = PTZACTR_alienmode;
 /* line 143: */
BUZACTR.Info = YIJACTR_defaultinfo;
{ 
DUZACTR = (&((&CUZACTR_alien)->Idno)) ;
(*DUZACTR) = EOKACTR_alienidno;
 /* line 144: */
 /* line 145: */
BUZACTR.Extra = A_UNITE(EUZACTR,mode4,4,CUZACTR_alien);
} 
FUZACTR = BUZACTR;
} 
A_PROC_EXIT(alien);
*ReturnedValue = (FUZACTR);
return;
} 
#undef NL

A68_VOID  HUZACTR_load(A68_203  L, A68_154  *ReturnedValue)
{ 
A68_203  IUZACTR;  /* united object - for case conformity */
A68_INT  JUZACTR_i;
A68_154  KUZACTR;  /* clause result */
A68_167 * LUZACTR_idinfo;
A68_BITS * MUZACTR;  /* YIELD */
A68_154  NUZACTR;  /* collateral clause result */
A68_128  OUZACTR_env;
A68_BITS  PUZACTR;  /* ADICOPS - >= */
A68_BOOL  QUZACTR;  /* optbool result */
A68_157  RUZACTR_id;
A68_INT * SUZACTR;  /* YIELD */
A68_155  TUZACTR;  /* OPERATORS - mode -> union mode */
A68_173 * UUZACTR_rdinfo;
A68_BITS * VUZACTR;  /* YIELD */
A68_154  WUZACTR;  /* collateral clause result */
A68_BITS  XUZACTR;  /* ADICOPS - >= */
A68_BOOL  YUZACTR;  /* optbool result */
A68_156  ZUZACTR_rd;
A68_INT * AVZACTR;  /* YIELD */
A68_155  BVZACTR;  /* OPERATORS - mode -> union mode */
A68_167 * CVZACTR_idinfo;
A68_BITS * DVZACTR;  /* YIELD */
A68_154  EVZACTR;  /* collateral clause result */
A68_128  FVZACTR_env;
A68_BITS  GVZACTR;  /* ADICOPS - >= */
A68_BOOL  HVZACTR;  /* optbool result */
A68_157  IVZACTR_id;
A68_INT * JVZACTR;  /* YIELD */
A68_155  KVZACTR;  /* OPERATORS - mode -> union mode */
A68_154  LVZACTR;  /* collateral clause result */
A68_INT  MVZACTR;  /* YIELD */
A68_157  NVZACTR_id;
A68_INT * OVZACTR;  /* YIELD */
A68_155  PVZACTR;  /* OPERATORS - mode -> union mode */
A68_154  SVZACTR;  /* OPERATORS - skip to mode */
A68_192  TVZACTR_number;
A68_154  UVZACTR;  /* collateral clause result */
A68_VC  VVZACTR;  /* avoid structure result */
A68_155  WVZACTR;  /* OPERATORS - mode -> union mode */
A68_193  XVZACTR_numeric;
A68_154  YVZACTR;  /* collateral clause result */
A68_155  ZVZACTR;  /* OPERATORS - mode -> union mode */
A68_LBITS  AWZACTR;  /* YIELD */
A68_194  BWZACTR_s;
A68_INT  CWZACTR_stream;
A68_85  DWZACTR_name;
A68_VC  EWZACTR_string;
A68_259  FWZACTR;  /* collateral clause result */
A68_125  IWZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  JWZACTR;  /* YIELD */
A68_VC  KWZACTR;  /* avoid structure result */
A68_125  LWZACTR;  /* OPERATORS - mode -> union mode */
A68_125  OWZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  PWZACTR;  /* YIELD */
A68_VC  QWZACTR;  /* OPERATORS - istruct -> vector */
A68_125  RWZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  SWZACTR;  /* YIELD */
A68_125  VWZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  WWZACTR;  /* YIELD */
A68_124  XWZACTR;  /* OPERATORS - istruct -> vector */
A68_VC  YWZACTR;  /* avoid structure result */
A68_VC  ZWZACTR;  /* avoid structure result */
A68_VC  AXZACTR;  /* avoid structure result */
A68_125  BXZACTR;  /* OPERATORS - mode -> union mode */
A68_124  CXZACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_260  DXZACTR;  /* collateral clause result */
A68_125  EXZACTR;  /* OPERATORS - mode -> union mode */
A68_125  HXZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  IXZACTR;  /* YIELD */
A68_124  JXZACTR;  /* OPERATORS - istruct -> vector */
A68_INT  KXZACTR_i;
A68_INT  LXZACTR;  /* to part of loop */
A68_VC  MXZACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  NXZACTR_rvc;
A68_260  OXZACTR;  /* collateral clause result */
A68_VC  RXZACTR;  /* avoid structure result */
A68_125  SXZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  TXZACTR;  /* YIELD */
A68_125  WXZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  XXZACTR;  /* YIELD */
A68_125  AYZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  BYZACTR;  /* YIELD */
A68_124  CYZACTR;  /* OPERATORS - istruct -> vector */
A68_INT  DYZACTR;  /* ADICOPS - MOD */
A68_INT  EYZACTR;  /* ADICOPS - MOD */
A68_260  FYZACTR;  /* collateral clause result */
A68_125  GYZACTR;  /* OPERATORS - mode -> union mode */
A68_125  JYZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  KYZACTR;  /* YIELD */
A68_124  LYZACTR;  /* OPERATORS - istruct -> vector */
A68_260  MYZACTR;  /* collateral clause result */
A68_125  NYZACTR;  /* OPERATORS - mode -> union mode */
A68_125  QYZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  RYZACTR;  /* YIELD */
A68_124  SYZACTR;  /* OPERATORS - istruct -> vector */
A68_260  TYZACTR;  /* collateral clause result */
A68_125  WYZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  XYZACTR;  /* YIELD */
A68_125  YYZACTR;  /* OPERATORS - mode -> union mode */
A68_124  ZYZACTR;  /* OPERATORS - istruct -> vector */
A68_154  AZZACTR;  /* collateral clause result */
A68_158  BZZACTR;  /* collateral clause result */
A68_155  CZZACTR;  /* OPERATORS - mode -> union mode */
A68_159  DZZACTR_nilskiporempty;
A68_INT  EZZACTR;  /* clause result */
A68_INT  HZZACTR;  /* OPERATORS - skip to mode */
A68_INT  IZZACTR_mode;
A68_154  JZZACTR;  /* collateral clause result */
A68_155  KZZACTR;  /* OPERATORS - mode -> union mode */
A68_BOOL  LZZACTR_bool;
A68_154  MZZACTR;  /* collateral clause result */
A68_155  PZZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  QZZACTR;  /* YIELD */
A68_155  TZZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  UZZACTR;  /* YIELD */
A68_190  VZZACTR_char;
A68_154  WZZACTR;  /* collateral clause result */
A68_VC  XZZACTR;  /* avoid structure result */
A68_155  YZZACTR;  /* OPERATORS - mode -> union mode */
A68_180  ZZZACTR_alienx;
A68_154  AAABCTR;  /* avoid structure result */
A68_86  BAABCTR_label;
A68_INT  CAABCTR;  /* YIELD */
A68_128  DAABCTR_env;
A68_154  EAABCTR;  /* collateral clause result */
A68_BOOL  FAABCTR;  /* optbool result */
A68_155  GAABCTR;  /* OPERATORS - mode -> union mode */
A68_154  JAABCTR;  /* OPERATORS - skip to mode */
A_PROC_ENTRY(load);
 /* line 151: */
 /* line 152: */
IUZACTR = L ;
switch ( IUZACTR.mode )
{ 
case 2: /* INT */
JUZACTR_i = (IUZACTR.data.mode2);
 /* line 153: */
 /* line 154: */
 /* line 155: */
if ( (JUZACTR_i<HAAACTR_minidno) )
{ 
KUZACTR = MJJACTR_skipvalue;
} 
else
{ 
 /* line 156: */
 /* line 157: */
if ( (JUZACTR_i<=IAAACTR_maxidno) )
{ 
LUZACTR_idinfo = (&A_R1INDEX(FOKACTR_ids,JUZACTR_i));
 /* line 158: */
MUZACTR = (&(LUZACTR_idinfo->Flags)) ;
(*MUZACTR) = (A68_BITS )((*(&(LUZACTR_idinfo->Flags)))|UOKACTR_idloadedflag);
 /* line 159: */
 /* line 160: */
NUZACTR.Mode = (*(&(LUZACTR_idinfo->Mode)));
{ 
OUZACTR_env = (*(&(LUZACTR_idinfo->Environ)));
 /* line 161: */
 /* line 163: */
PUZACTR = (*(&(LUZACTR_idinfo->Flags))) ;
QUZACTR = A_LB_GE(PUZACTR,QOKACTR_idoptimisedflag);
if ( ! QUZACTR )
{QUZACTR = YPLACTR_isgloballevel(OUZACTR_env);
}
 /* line 164: */
if ( ! QUZACTR )
{QUZACTR = VPLACTR_islocallevel(OUZACTR_env);
}
 /* line 165: */
if ( QUZACTR )
{ 
NUZACTR.Info = YIJACTR_defaultinfo;
} 
else
{ 
PSZACTR_checknonlocaldeclared(JUZACTR_i, OUZACTR_env.Level);
 /* line 166: */
 /* line 167: */
 /* line 168: */
 /* line 169: */
NUZACTR.Info = CJJACTR_nonloc;
} 
} 
{ 
SUZACTR = (&((&RUZACTR_id)->Idno)) ;
(*SUZACTR) = JUZACTR_i;
 /* line 170: */
 /* line 171: */
NUZACTR.Extra = A_UNITE(TUZACTR,mode4,4,RUZACTR_id);
} 
KUZACTR = NUZACTR;
} 
else
{ 
 /* line 172: */
 /* line 173: */
if ( (JUZACTR_i<=KAAACTR_maxrdno) )
{ 
UUZACTR_rdinfo = (&A_R1INDEX(GOKACTR_rds,JUZACTR_i));
 /* line 174: */
VUZACTR = (&(UUZACTR_rdinfo->Flags)) ;
(*VUZACTR) = (A68_BITS )((*(&(UUZACTR_rdinfo->Flags)))|CPKACTR_rdloadedflag);
 /* line 175: */
 /* line 176: */
WUZACTR.Mode = (*(&(UUZACTR_rdinfo->Mode)));
 /* line 177: */
XUZACTR = (*(&(UUZACTR_rdinfo->Flags))) ;
YUZACTR = A_LB_GE(XUZACTR,APKACTR_rdglobalflag);
if ( ! YUZACTR )
{ /* line 178: */
YUZACTR = ((*(&(UUZACTR_rdinfo->Declevel)))==EQLACTR_currentlevel());
}
 /* line 179: */
if ( YUZACTR )
{ 
WUZACTR.Info = YIJACTR_defaultinfo;
} 
else
{ 
PSZACTR_checknonlocaldeclared(JUZACTR_i, (*(&(UUZACTR_rdinfo->Declevel))));
 /* line 180: */
 /* line 181: */
 /* line 182: */
WUZACTR.Info = CJJACTR_nonloc;
} 
{ 
AVZACTR = (&((&ZUZACTR_rd)->Rdenno)) ;
(*AVZACTR) = JUZACTR_i;
 /* line 183: */
 /* line 184: */
WUZACTR.Extra = A_UNITE(BVZACTR,mode2,2,ZUZACTR_rd);
} 
KUZACTR = WUZACTR;
} 
else
{ 
 /* line 185: */
 /* line 186: */
if ( (JUZACTR_i<=MAAACTR_maxlibid) )
{ 
CVZACTR_idinfo = (&A_R1INDEX(HOKACTR_libraryids,JUZACTR_i));
 /* line 187: */
DVZACTR = (&(CVZACTR_idinfo->Flags)) ;
(*DVZACTR) = (A68_BITS )((*(&(CVZACTR_idinfo->Flags)))|UOKACTR_idloadedflag);
 /* line 188: */
 /* line 189: */
EVZACTR.Mode = (*(&(CVZACTR_idinfo->Mode)));
{ 
FVZACTR_env = (*(&(CVZACTR_idinfo->Environ)));
 /* line 190: */
 /* line 192: */
GVZACTR = (*(&(CVZACTR_idinfo->Flags))) ;
HVZACTR = A_LB_GE(GVZACTR,QOKACTR_idoptimisedflag);
if ( ! HVZACTR )
{HVZACTR = YPLACTR_isgloballevel(FVZACTR_env);
}
 /* line 193: */
if ( ! HVZACTR )
{HVZACTR = VPLACTR_islocallevel(FVZACTR_env);
}
 /* line 194: */
if ( HVZACTR )
{ 
EVZACTR.Info = YIJACTR_defaultinfo;
} 
else
{ 
PSZACTR_checknonlocaldeclared(JUZACTR_i, FVZACTR_env.Level);
 /* line 195: */
 /* line 196: */
 /* line 197: */
 /* line 198: */
EVZACTR.Info = CJJACTR_nonloc;
} 
} 
{ 
JVZACTR = (&((&IVZACTR_id)->Idno)) ;
(*JVZACTR) = JUZACTR_i;
 /* line 199: */
 /* line 200: */
EVZACTR.Extra = A_UNITE(KVZACTR,mode4,4,IVZACTR_id);
} 
KUZACTR = EVZACTR;
} 
else
{ 
 /* line 201: */
 /* line 202: */
if ( (JUZACTR_i<=TAAACTR_maxkeptgeneratorproc) )
{ 
 /* line 203: */
 /* line 204: */
 /* line 205: */
 /* line 206: */
 /* line 207: */
MVZACTR = (JUZACTR_i-NAAACTR_keptgeneratorproccorrection) ;
LVZACTR.Mode = KRMACTR_derefmode(KRMACTR_derefmode((*(&((&A_R1INDEX(FOKACTR_ids,MVZACTR))->Mode)))));
 /* line 208: */
LVZACTR.Info = YIJACTR_defaultinfo;
{ 
OVZACTR = (&((&NVZACTR_id)->Idno)) ;
(*OVZACTR) = JUZACTR_i;
 /* line 209: */
 /* line 210: */
 /* line 211: */
LVZACTR.Extra = A_UNITE(PVZACTR,mode4,4,NVZACTR_id);
} 
KUZACTR = LVZACTR;
} 
else
{ 
PXIACTR_assert(RVZACTR, A68_FALSE);
 /* line 212: */
 /* line 214: */
KUZACTR = SVZACTR;
} 
} 
} 
} 
} 
break;
case 6: /* STRUCT(INT,REF MODE26)  */
TVZACTR_number = (IUZACTR.data.mode6);
 /* line 215: */
UVZACTR.Mode = TVZACTR_number.Mode;
UVZACTR.Info = ZIJACTR_constant;
 /* line 217: */
RMJACTR_translatedenotation( TVZACTR_number.Nu, &VVZACTR );
UVZACTR.Extra = A_UNITE(WVZACTR,mode6,6,VVZACTR);
KUZACTR = UVZACTR;
break;
case 8: /* STRUCT(INT,LONG BITS)  */
XVZACTR_numeric = (IUZACTR.data.mode8);
 /* line 218: */
YVZACTR.Mode = XVZACTR_numeric.Mode;
YVZACTR.Info = ZIJACTR_constant;
 /* line 220: */
AWZACTR = XVZACTR_numeric.Denotation ;
YVZACTR.Extra = A_UNITE(ZVZACTR,mode1,1,AWZACTR);
KUZACTR = YVZACTR;
break;
case 9: /* STRUCT(INT,REF MODE26)  */
BWZACTR_s = (IUZACTR.data.mode9);
 /* line 221: */
 /* line 222: */
{ 
CWZACTR_stream = TQLACTR_nonlocdecstream(0);
 /* line 223: */
DWZACTR_name = ZGMACTR_newuniquename();
 /* line 224: */
EWZACTR_string = BWZACTR_s.Denotation;
 /* line 225: */
 /* line 226: */
JWZACTR = HWZACTR ;
FWZACTR.data[0] = A_UNITE(IWZACTR,mode2,2,JWZACTR);
GJNACTR_ctype( BWZACTR_s.Mode, &KWZACTR );
FWZACTR.data[1] = A_UNITE(LWZACTR,mode2,2,KWZACTR);
PWZACTR = NWZACTR ;
FWZACTR.data[2] = A_UNITE(OWZACTR,mode2,2,PWZACTR);
 /* line 227: */
SWZACTR = A_HISVEC(QWZACTR,DWZACTR_name,7,A68_CHAR ) ;
FWZACTR.data[3] = A_UNITE(RWZACTR,mode2,2,SWZACTR);
WWZACTR = UWZACTR ;
FWZACTR.data[4] = A_UNITE(VWZACTR,mode2,2,WWZACTR);
 /* line 228: */
VBMACTR_writecstream(A_HISVEC(XWZACTR,FWZACTR,5,A68_125 ), TQLACTR_nonlocdecstream(0));
 /* line 229: */
 /* line 230: */
 /* line 231: */
if ( (EWZACTR_string.upb<256) )
{ 
 /* line 233: */
 /* line 234: */
MPJACTR_replacecontrolchars( EWZACTR_string, &YWZACTR );
LJAACTR_doublequote( YWZACTR, &ZWZACTR );
VJAACTR_curly( ZWZACTR, &AXZACTR );
VBMACTR_writecstream(A_HVEC(CXZACTR,A_UNITE(BXZACTR,mode2,2,AXZACTR),A68_125 ), CWZACTR_stream);
} 
else
{ 
DXZACTR.data[0] = A_UNITE(EXZACTR,mode4,4,EIAACTR_cnewline);
IXZACTR = GXZACTR ;
DXZACTR.data[1] = A_UNITE(HXZACTR,mode2,2,IXZACTR);
VBMACTR_writecstream(A_HISVEC(JXZACTR,DXZACTR,2,A68_125 ), CWZACTR_stream);
 /* line 235: */
 /* line 236: */
LXZACTR = EWZACTR_string.upb;
for ( KXZACTR_i = 1;
KXZACTR_i <= LXZACTR;
KXZACTR_i += 1 )
{ 
NXZACTR_rvc = A_VEC(MXZACTR,(&A_VINDEX(EWZACTR_string,KXZACTR_i)),A68_CHAR *);
 /* line 237: */
 /* line 238: */
 /* line 239: */
MPJACTR_replacecontrolchars( NXZACTR_rvc, &RXZACTR );
TXZACTR = A_VC_PLUS(QXZACTR,RXZACTR) ;
OXZACTR.data[0] = A_UNITE(SXZACTR,mode2,2,TXZACTR);
if ( (KXZACTR_i==EWZACTR_string.upb) )
{ 
XXZACTR = VXZACTR ;
OXZACTR.data[1] = A_UNITE(WXZACTR,mode2,2,XXZACTR);
} 
else
{ 
 /* line 240: */
BYZACTR = ZXZACTR ;
OXZACTR.data[1] = A_UNITE(AYZACTR,mode2,2,BYZACTR);
} 
 /* line 241: */
VBMACTR_writecstream(A_HISVEC(CYZACTR,OXZACTR,2,A68_125 ), CWZACTR_stream);
 /* line 242: */
 /* line 243: */
EYZACTR = 8 ;
if ( (A_MOD(KXZACTR_i,EYZACTR,DYZACTR)==0) )
{ 
FYZACTR.data[0] = A_UNITE(GYZACTR,mode4,4,EIAACTR_cnewline);
KYZACTR = IYZACTR ;
FYZACTR.data[1] = A_UNITE(JYZACTR,mode2,2,KYZACTR);
 /* line 244: */
 /* line 245: */
VBMACTR_writecstream(A_HISVEC(LYZACTR,FYZACTR,2,A68_125 ), CWZACTR_stream);
} 
}
 /* line 246: */
MYZACTR.data[0] = A_UNITE(NYZACTR,mode4,4,EIAACTR_cnewline);
RYZACTR = PYZACTR ;
MYZACTR.data[1] = A_UNITE(QYZACTR,mode2,2,RYZACTR);
 /* line 247: */
VBMACTR_writecstream(A_HISVEC(SYZACTR,MYZACTR,2,A68_125 ), CWZACTR_stream);
} 
 /* line 248: */
XYZACTR = VYZACTR ;
TYZACTR.data[0] = A_UNITE(WYZACTR,mode2,2,XYZACTR);
TYZACTR.data[1] = A_UNITE(YYZACTR,mode4,4,EIAACTR_cnewline);
VBMACTR_writecstream(A_HISVEC(ZYZACTR,TYZACTR,2,A68_125 ), CWZACTR_stream);
 /* line 249: */
AZZACTR.Mode = BWZACTR_s.Mode;
AZZACTR.Info = ZIJACTR_constant;
BZZACTR.Name = DWZACTR_name;
BZZACTR.Mode = BWZACTR_s.Mode;
 /* line 250: */
 /* line 252: */
AZZACTR.Extra = A_UNITE(CZZACTR,mode5,5,BZZACTR);
KUZACTR = AZZACTR;
} 
break;
case 1: /* STRUCT(INT)  */
DZZACTR_nilskiporempty = (IUZACTR.data.mode1);
 /* line 253: */
 /* line 255: */
{ 
 /* line 256: */
switch ( DZZACTR_nilskiporempty.Nse )
{ 
case 1: 
EZZACTR = UEAACTR_voidmode;
break;
case 2: 
 /* line 257: */
EZZACTR = REAACTR_skipmode;
break;
case 3: 
EZZACTR = SEAACTR_nilmode;
break;
default: 
PXIACTR_assert(GZZACTR, A68_FALSE);
 /* line 258: */
EZZACTR = HZZACTR;
break;
} 
IZZACTR_mode = EZZACTR;
 /* line 259: */
 /* line 260: */
 /* line 261: */
JZZACTR.Mode = IZZACTR_mode;
if ( (IZZACTR_mode==SEAACTR_nilmode) )
{ 
JZZACTR.Info = (A68_BITS )(ZIJACTR_constant|FJJACTR_isnil);
} 
else
{ 
 /* line 262: */
JZZACTR.Info = YIJACTR_defaultinfo;
} 
 /* line 263: */
 /* line 264: */
JZZACTR.Extra = A_UNITE(KZZACTR,mode8,8,DZZACTR_nilskiporempty);
 /* line 266: */
KUZACTR = JZZACTR;
} 
break;
case 3: /* BOOL */
LZZACTR_bool = (IUZACTR.data.mode3);
 /* line 267: */
MZZACTR.Mode = WEAACTR_boolmode;
MZZACTR.Info = ZIJACTR_constant;
if ( LZZACTR_bool )
{ 
QZZACTR = OZZACTR ;
MZZACTR.Extra = A_UNITE(PZZACTR,mode6,6,QZZACTR);
} 
else
{ 
 /* line 269: */
UZZACTR = SZZACTR ;
MZZACTR.Extra = A_UNITE(TZZACTR,mode6,6,UZZACTR);
} 
KUZACTR = MZZACTR;
break;
case 4: /* STRUCT(REF MODE26)  */
VZZACTR_char = (IUZACTR.data.mode4);
 /* line 270: */
WZZACTR.Mode = XEAACTR_charmode;
WZZACTR.Info = ZIJACTR_constant;
 /* line 272: */
QJAACTR_singlequote( VZZACTR_char.Representation, &XZZACTR );
WZZACTR.Extra = A_UNITE(YZZACTR,mode6,6,XZZACTR);
KUZACTR = WZZACTR;
break;
case 7: /* STRUCT(INT,REF MODE26)  */
ZZZACTR_alienx = (IUZACTR.data.mode7);
 /* line 274: */
USZACTR_alien( ZZZACTR_alienx, &AAABCTR );
KUZACTR = AAABCTR;
break;
case 5: /* STRUCT(INT)  */
BAABCTR_label = (IUZACTR.data.mode5);
 /* line 275: */
 /* line 276: */
{ 
CAABCTR = BAABCTR_label.Labno ;
DAABCTR_env = (*(&((&A_R1INDEX(IOKACTR_labels,CAABCTR))->Environ)));
 /* line 277: */
 /* line 278: */
if ( (DAABCTR_env.Level!=EQLACTR_currentlevel()) )
{ 
 /* line 279: */
PXVACTR_declarenonlocallabel(BAABCTR_label.Labno);
} 
 /* line 281: */
 /* line 282: */
 /* line 283: */
EAABCTR.Mode = TEAACTR_gotomode;
 /* line 284: */
FAABCTR = YPLACTR_isgloballevel(DAABCTR_env);
if ( ! FAABCTR )
{FAABCTR = VPLACTR_islocallevel(DAABCTR_env);
}
 /* line 285: */
if ( FAABCTR )
{ 
EAABCTR.Info = YIJACTR_defaultinfo;
} 
else
{ 
PSZACTR_checknonlocaldeclared((BAABCTR_label.Labno+OAAACTR_minlab), DAABCTR_env.Level);
 /* line 286: */
 /* line 287: */
 /* line 289: */
EAABCTR.Info = CJJACTR_nonloc;
} 
 /* line 290: */
EAABCTR.Extra = A_UNITE(GAABCTR,mode7,7,BAABCTR_label);
 /* line 291: */
KUZACTR = EAABCTR;
} 
break;
default: 
PXIACTR_assert(IAABCTR, A68_FALSE);
 /* line 292: */
KUZACTR = JAABCTR;
break;
} 
A_PROC_EXIT(load);
*ReturnedValue = (KUZACTR);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 3: */
 /* line 4: */
 /* line 5: */
 /* line 7: */
void ISZACTR(void)   /* initialise DECS loads */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/shields/projects/Algol68/Tools/Algol68toC/src/a68toc","-v","-uname","seedfile","-lib","/home/shields/projects/Algol68/Tools/Algol68toC/a68config","-dir","/home/shields/projects/Algol68/Tools/Algol68toC/a68config","-dir","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel","-dir",".","loads.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/shields/projects/Algol68/Tools/Algol68toC/a68config","A68_CDIR=","A68_DIR=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/shields/projects/Algol68/Tools/Algol68toC/a68config/a68config.m","./tracer.m","./values.m","./uniquenameserver.m","./modes.m","./incoperfn.m","./incmode.m","./incimperatives.m","./idtable.m","./incid.m","./identifiers.m","./denotations.m","./environment.m","./environ.m","./coutput.m","./common.m","./centities.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/osif.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
QSYACTR();   /* USE tracer */
JRPACTR();   /* USE values */
AGMACTR();   /* USE uniquenameserver */
MLMACTR();   /* USE modes */
XFAACTR();   /* USE incoperfn */
ZDAACTR();   /* USE incmode */
UAAACTR();   /* USE incimperatives */
YNKACTR();   /* USE idtable */
BAAACTR();   /* USE incid */
WIVACTR();   /* USE identifiers */
UJJACTR();   /* USE denotations */
HPIACTR();   /* USE environment */
KNLACTR();   /* USE environ */
YRLACTR();   /* USE coutput */
THAACTR();   /* USE centities */
WSCAOSF();   /* USE osif */
/* --- Initialise configuration information */
A_config.source_file = "/home/shields/projects/Algol68/Tools/Algol68toC/src/loads.a68";
A_config.translation_time = "Sun Sep 26 21:51:10 2004";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "HSZACTR (from seed file) ";
A_config.spec_change_time = "Sun Sep 26 21:51:10 2004";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS loads);
UEAALIB_a68config(LGAALIB_configinfo, MSZACTR);
 /* line 46: */
 /* line 70: */
 /* line 147: */
 /* line 294: */
 /* line 296: */
 /* line 298: */
/*SKIP*/;
A_PROC_EXIT(DECS loads);
} 
#undef NL
/* end of translation of loads.a68 */
