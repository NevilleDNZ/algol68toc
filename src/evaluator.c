/* UNAME:SCVACTR */
#include <algol68/Asupport.h>
struct A68t32 ;
struct A68t33 ;

A_PROCEDURE(A68_VOID ,A68t31,(struct A68t32 *,struct A68t33 ,struct A68t32 *),(struct A68t32 *,struct A68t33 ,struct A68t32 *,void *));
typedef struct A68t31  A68_31 ;    /* PROC(REF MODE32,MODE33) MODE32 */
struct A68t36{
A68_INT  Rdenno;
A_PAD_INT(PAD_1)
};
typedef struct A68t36  A68_36 ;    /* STRUCT(INT)  */
struct A68t37{
A68_INT  Idno;
A_PAD_INT(PAD_2)
};
typedef struct A68t37  A68_37 ;    /* STRUCT(INT)  */
A_ISTRUCT(A68_CHAR ,7,A68t41);
typedef struct A68t41  A68_41 ;    /* STRUCT 7 CHAR */
struct A68t38{
struct A68t41  Name;
A_PAD_ISTRUCT(A68_41 ,PAD_3)
A68_INT  Mode;
A_PAD_INT(PAD_4)
};
typedef struct A68t38  A68_38 ;    /* STRUCT(MODE41,INT)  */
struct A68t39{
A68_INT  Labno;
A_PAD_INT(PAD_5)
};
typedef struct A68t39  A68_39 ;    /* STRUCT(INT)  */
struct A68t40{
A68_INT  Nse;
A_PAD_INT(PAD_6)
};
typedef struct A68t40  A68_40 ;    /* STRUCT(INT)  */
struct A68t33{
A68_INT  Fn;
A_PAD_INT(PAD_7)
A68_INT  Param;
A_PAD_INT(PAD_8)
struct A68t34 * Operands;
};
typedef struct A68t33  A68_33 ;    /* STRUCT(INT,INT,REF MODE34)  */
struct A68t35 { A68_INT mode; union {
A68_LBITS  mode1;
struct A68t36  mode2;
struct A68t37  mode4;
struct A68t38  mode5;
A68_VC  mode6;
struct A68t39  mode7;
struct A68t40  mode8;
struct A68t33  mode9;
} data; };
typedef struct A68t35  A68_35 ;    /* UNION(LONG BITS,MODE36,VOID,MODE37,MODE38,MODE26,MODE39,MODE40,MODE33)  */
struct A68t32{
A68_INT  Mode;
A_PAD_INT(PAD_9)
A68_BITS  Info;
A_PAD_BITS(PAD_10)
struct A68t35  Extra;
};
typedef struct A68t32  A68_32 ;    /* STRUCT(INT,BITS,MODE35)  */
struct A68t34{
struct A68t32  Value;
struct A68t34 * Rest;
};
typedef struct A68t34  A68_34 ;    /* STRUCT(MODE32,REF MODE34)  */
struct A68t43{
A68_INT  Level;
A_PAD_INT(PAD_11)
A68_INT  Block;
A_PAD_INT(PAD_12)
};
typedef struct A68t43  A68_43 ;    /* STRUCT(INT,INT)  */
struct A68t42{
A68_INT  Mode;
A_PAD_INT(PAD_13)
A68_INT  Cvariabletype;
A_PAD_INT(PAD_14)
struct A68t43  Environ;
A68_VC  Name;
A68_VC  C_name;
struct A68t41  Prefix;
A_PAD_ISTRUCT(A68_41 ,PAD_15)
A68_BITS  Flags;
A_PAD_BITS(PAD_16)
A68_VC  Definition;
A68_VC  Rhs;
};
typedef struct A68t42  A68_42 ;    /* STRUCT(INT,INT,MODE43,REF MODE26,REF MODE26,MODE41,BITS,REF MODE26,REF MODE26)  */
struct A68t44{
A68_INT  Mode;
A_PAD_INT(PAD_17)
A68_INT  Resultmode;
A_PAD_INT(PAD_18)
A68_INT  Declevel;
A_PAD_INT(PAD_19)
struct A68t43  Environ;
A68_VC  Name;
struct A68t41  Prefix;
A_PAD_ISTRUCT(A68_41 ,PAD_20)
struct A68t41  Fnprefix;
A_PAD_ISTRUCT(A68_41 ,PAD_21)
struct A68t41  Envprefix;
A_PAD_ISTRUCT(A68_41 ,PAD_22)
A68_BITS  Flags;
A_PAD_BITS(PAD_23)
};
typedef struct A68t44  A68_44 ;    /* STRUCT(INT,INT,INT,MODE43,REF MODE26,MODE41,MODE41,MODE41,BITS)  */
struct A68t46{
struct A68t41  Name;
A_PAD_ISTRUCT(A68_41 ,PAD_24)
A68_BOOL  Set;
A_PAD_BOOL(PAD_25)
};
typedef struct A68t46  A68_46 ;    /* STRUCT(MODE41,BOOL)  */
struct A68t45{
struct A68t46  Label;
struct A68t43  Environ;
A68_VC  Name;
struct A68t41  Prefix;
A_PAD_ISTRUCT(A68_41 ,PAD_26)
A68_BITS  Flags;
A_PAD_BITS(PAD_27)
A68_INT  Alias;
A_PAD_INT(PAD_28)
};
typedef struct A68t45  A68_45 ;    /* STRUCT(MODE46,MODE43,REF MODE26,MODE41,BITS,INT)  */

A_PROCEDURE(struct A68t42 *,A68t47,(A68_INT ),(A68_INT ,void *));
typedef struct A68t47  A68_47 ;    /* PROC(INT) REF MODE42 */

A_PROCEDURE(A68_VOID ,A68t48,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t48  A68_48 ;    /* PROC(REF MODE26) MODE26 */

A_PROCEDURE(A68_VOID ,A68t49,(A68_VC ,struct A68t41 ,A68_INT ,A68_INT ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_VC ,A68_VC ),(A68_VC ,struct A68t41 ,A68_INT ,A68_INT ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_VC ,A68_VC ,void *));
typedef struct A68t49  A68_49 ;    /* PROC(REF MODE26,MODE41,INT,INT,BOOL,BOOL,BOOL,BOOL,BOOL,REF MODE26,REF MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t50,(A68_INT ),(A68_INT ,void *));
typedef struct A68t50  A68_50 ;    /* PROC(INT) VOID */
A_ROW(struct A68t42 ,A68t51,1);
typedef struct A68t51  A68_51 ;    /* [] MODE42 */
A_ROW(struct A68t44 ,A68t52,1);
typedef struct A68t52  A68_52 ;    /* [] MODE44 */
A_ROW(struct A68t45 ,A68t53,1);
typedef struct A68t53  A68_53 ;    /* [] MODE45 */

A_PROCEDURE(A68_BOOL ,A68t54,(A68_INT ),(A68_INT ,void *));
typedef struct A68t54  A68_54 ;    /* PROC(INT) BOOL */

A_PROCEDURE(A68_VOID ,A68t55,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t55  A68_55 ;    /* PROC(INT) MODE26 */
struct A68t57 ;

A_PROCEDURE(A68_VOID ,A68t56,(A68_INT ,A68_INT ,A68_INT ,A68_INT ,struct A68t57 ),(A68_INT ,A68_INT ,A68_INT ,A68_INT ,struct A68t57 ,void *));
typedef struct A68t56  A68_56 ;    /* PROC(INT,INT,INT,INT,REF MODE57) VOID */
A_ROW(A68_INT ,A68t57,1);
typedef struct A68t57  A68_57 ;    /* [] INT */

A_PROCEDURE(A68_BOOL ,A68t58,(A68_VC ),(A68_VC ,void *));
typedef struct A68t58  A68_58 ;    /* PROC(MODE26) BOOL */

A_PROCEDURE(A68_VOID ,A68t59,(A68_INT ,struct A68t43 *),(A68_INT ,struct A68t43 *,void *));
typedef struct A68t59  A68_59 ;    /* PROC(INT) MODE43 */

A_PROCEDURE(A68_VOID ,A68t60,(A68_BOOL ,A68_VC *),(A68_BOOL ,A68_VC *,void *));
typedef struct A68t60  A68_60 ;    /* PROC(BOOL) MODE26 */

A_PROCEDURE(A68_VOID ,A68t61,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t61  A68_61 ;    /* PROC(MODE26) MODE26 */

A_PROCEDURE(A68_VOID ,A68t62,(A68_VC ,A68_BOOL ),(A68_VC ,A68_BOOL ,void *));
typedef struct A68t62  A68_62 ;    /* PROC(MODE26,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t63,(void),(void *));
typedef struct A68t63  A68_63 ;    /* PROC VOID */

A_PROCEDURE(A68_VOID ,A68t64,(A68_VC ,A68_INT ),(A68_VC ,A68_INT ,void *));
typedef struct A68t64  A68_64 ;    /* PROC(MODE26,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t65,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t65  A68_65 ;    /* PROC(INT) REF MODE26 */
struct A68t67 ;

A_PROCEDURE(A68_VOID ,A68t66,(A68_INT ,struct A68t67 ),(A68_INT ,struct A68t67 ,void *));
typedef struct A68t66  A68_66 ;    /* PROC(INT,MODE67) VOID */
A_ROW(A68_VC ,A68t67,1);
typedef struct A68t67  A68_67 ;    /* [] MODE26 */

A_PROCEDURE(A68_BITS ,A68t68,(void),(void *));
typedef struct A68t68  A68_68 ;    /* PROC BITS */
struct A68t69{
A68_INT  Cfile;
A_PAD_INT(PAD_29)
};
typedef struct A68t69  A68_69 ;    /* STRUCT(INT)  */
struct A68t70{
A68_INT  Seedfile;
A_PAD_INT(PAD_30)
};
typedef struct A68t70  A68_70 ;    /* STRUCT(INT)  */
struct A68t71 { A68_INT mode; union {
struct A68t69  mode1;
struct A68t70  mode2;
struct A68t41  mode3;
} data; };
typedef struct A68t71  A68_71 ;    /* UNION(MODE69,MODE70,MODE41,VOID)  */

A_PROCEDURE(A68_VOID ,A68t72,(A68_VC ),(A68_VC ,void *));
typedef struct A68t72  A68_72 ;    /* PROC(MODE26) VOID */
struct A68t73{
A68_VC  Version;
A68_LINT  Translationtime;
A_PAD_LINT(PAD_31)
A68_VC  Sourcefile;
struct A68t41  Nameseed;
A_PAD_ISTRUCT(A68_41 ,PAD_32)
struct A68t71  Nameseedorigin;
struct A68t74 * Used_modules;
A68_VC  Commandline;
struct A68t75 * Environment;
};
typedef struct A68t73  A68_73 ;    /* STRUCT(REF MODE26,LONG INT,REF MODE26,MODE41,MODE71,REF MODE74,REF MODE26,REF MODE75)  */
struct A68t74{
A68_VC  Modinfo_file;
struct A68t74 * Next;
};
typedef struct A68t74  A68_74 ;    /* STRUCT(REF MODE26,REF MODE74)  */
struct A68t75{
A68_VC  Env_name;
A68_VC  Env_value;
struct A68t75 * Next;
};
typedef struct A68t75  A68_75 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE75)  */
struct A68t77 ;
struct A68t78 ;

A_PROCEDURE(struct A68t77 *,A68t76,(A68_VC ,struct A68t78 *,A68_VC *),(A68_VC ,struct A68t78 *,A68_VC *,void *));
typedef struct A68t76  A68_76 ;    /* PROC(MODE26,REF MODE78,REF REF MODE26) REF MODE77 */
struct A68t77{
A68_VC  Name;
A68_BITS * Stdiofile;
};
typedef struct A68t77  A68_77 ;    /* STRUCT(REF MODE26,REF BITS)  */
struct A68t78{
A68_VC  Dir;
struct A68t78 * Next;
};
typedef struct A68t78  A68_78 ;    /* STRUCT(REF MODE26,REF MODE78)  */

A_PROCEDURE(A68_VOID ,A68t79,(struct A68t32 *,struct A68t32 **),(struct A68t32 *,struct A68t32 **,void *));
typedef struct A68t79  A68_79 ;    /* PROC(REF MODE32,REF REF MODE32) VOID */

A_PROCEDURE(A68_VOID ,A68t80,(struct A68t32 *,struct A68t32 **,A68_BITS ),(struct A68t32 *,struct A68t32 **,A68_BITS ,void *));
typedef struct A68t80  A68_80 ;    /* PROC(REF MODE32,REF REF MODE32,BITS) VOID */

A_PROCEDURE(A68_VOID ,A68t81,(struct A68t32 *,struct A68t32 **,struct A68t32 **),(struct A68t32 *,struct A68t32 **,struct A68t32 **,void *));
typedef struct A68t81  A68_81 ;    /* PROC(REF MODE32,REF REF MODE32,REF REF MODE32) VOID */

A_PROCEDURE(A68_VOID ,A68t82,(struct A68t32 *),(struct A68t32 *,void *));
typedef struct A68t82  A68_82 ;    /* PROC(REF MODE32) VOID */
struct A68t84 ;

A_PROCEDURE(A68_VOID ,A68t83,(struct A68t84 ),(struct A68t84 ,void *));
typedef struct A68t83  A68_83 ;    /* PROC(MODE84) VOID */
A_VECTOR(struct A68t85 ,A68t84);
typedef struct A68t84  A68_84 ;    /* VECTOR [] MODE85 */
struct A68t85 { A68_INT mode; union {
A68_CHAR  mode1;
A68_VC  mode2;
A68_SINT  mode3;
} data; };
typedef struct A68t85  A68_85 ;    /* UNION(CHAR,MODE26,SHORT INT)  */
struct A68t87 ;

A_PROCEDURE(A68_VOID ,A68t86,(struct A68t87 ,A68_INT ),(struct A68t87 ,A68_INT ,void *));
typedef struct A68t86  A68_86 ;    /* PROC(MODE87,INT) VOID */
A_VECTOR(struct A68t88 ,A68t87);
typedef struct A68t87  A68_87 ;    /* VECTOR [] MODE88 */
struct A68t88 { A68_INT mode; union {
A68_CHAR  mode1;
A68_VC  mode2;
A68_INT  mode3;
A68_SINT  mode4;
} data; };
typedef struct A68t88  A68_88 ;    /* UNION(CHAR,MODE26,INT,SHORT INT)  */

A_PROCEDURE(A68_VOID ,A68t89,(struct A68t71 ),(struct A68t71 ,void *));
typedef struct A68t89  A68_89 ;    /* PROC(MODE71) VOID */

A_PROCEDURE(struct A68t41 ,A68t90,(void),(void *));
typedef struct A68t90  A68_90 ;    /* PROC MODE41 */

A_PROCEDURE(A68_VOID ,A68t91,(struct A68t41 ),(struct A68t41 ,void *));
typedef struct A68t91  A68_91 ;    /* PROC(MODE41) VOID */

A_PROCEDURE(A68_VOID ,A68t92,(struct A68t71 ,A68_VC *),(struct A68t71 ,A68_VC *,void *));
typedef struct A68t92  A68_92 ;    /* PROC(MODE71) MODE26 */
struct A68t93{
A68_INT  Parameters;
A_PAD_INT(PAD_33)
A68_INT  Result;
A_PAD_INT(PAD_34)
A68_BOOL  Hasdescriptors;
A_PAD_BOOL(PAD_35)
};
typedef struct A68t93  A68_93 ;    /* STRUCT(INT,INT,BOOL)  */
A_ISTRUCT(A68_CHAR ,32,A68t95);
typedef struct A68t95  A68_95 ;    /* STRUCT 32 CHAR */
struct A68t94{
A68_INT  Mode;
A_PAD_INT(PAD_36)
A68_INT  Offset;
A_PAD_INT(PAD_37)
struct A68t95  Name;
A_PAD_ISTRUCT(A68_95 ,PAD_38)
};
typedef struct A68t94  A68_94 ;    /* STRUCT(INT,INT,MODE95)  */
struct A68t97 ;

A_PROCEDURE(A68_VOID ,A68t96,(A68_INT ,struct A68t97 *),(A68_INT ,struct A68t97 *,void *));
typedef struct A68t96  A68_96 ;    /* PROC(INT) REF MODE97 */
A_VECTOR(A68_INT ,A68t97);
typedef struct A68t97  A68_97 ;    /* VECTOR [] INT */

A_PROCEDURE(A68_VOID ,A68t98,(struct A68t94 *,A68_VC *),(struct A68t94 *,A68_VC *,void *));
typedef struct A68t98  A68_98 ;    /* PROC(REF MODE94) MODE26 */

A_PROCEDURE(A68_VOID ,A68t99,(A68_INT ,A68_VC ,struct A68t38 *),(A68_INT ,A68_VC ,struct A68t38 *,void *));
typedef struct A68t99  A68_99 ;    /* PROC(INT,MODE26) MODE38 */

A_PROCEDURE(A68_INT ,A68t100,(A68_INT ),(A68_INT ,void *));
typedef struct A68t100  A68_100 ;    /* PROC(INT) INT */
struct A68t102 ;

A_PROCEDURE(A68_VOID ,A68t101,(struct A68t102 ,A68_INT ),(struct A68t102 ,A68_INT ,void *));
typedef struct A68t101  A68_101 ;    /* PROC(REF MODE102,INT) VOID */
A_ROW(struct A68t103 ,A68t102,1);
typedef struct A68t102  A68_102 ;    /* [] MODE103 */
struct A68t113{
A68_INT  Mode;
A_PAD_INT(PAD_39)
};
typedef struct A68t113  A68_113 ;    /* STRUCT(INT)  */
struct A68t103 { A68_INT mode; union {
A68_INT  mode1;
struct A68t104 * mode2;
struct A68t105 * mode3;
struct A68t106 * mode4;
struct A68t107 * mode5;
struct A68t108 * mode6;
struct A68t109 * mode7;
struct A68t110 * mode8;
struct A68t111 * mode9;
struct A68t112 * mode10;
struct A68t113  mode11;
} data; };
typedef struct A68t103  A68_103 ;    /* UNION(INT,REF MODE104,REF MODE105,REF MODE106,REF MODE107,REF MODE108,REF MODE109,REF MODE110,REF MODE111,REF MODE112,MODE113)  */
struct A68t104{
A68_INT  Rdenno;
A_PAD_INT(PAD_40)
struct A68t117 * Modelist;
};
typedef struct A68t104  A68_104 ;    /* STRUCT(INT,REF MODE117)  */
struct A68t105{
A68_INT  Deproc;
A_PAD_INT(PAD_41)
struct A68t117 * Pars;
};
typedef struct A68t105  A68_105 ;    /* STRUCT(INT,REF MODE117)  */
struct A68t106{
A68_INT  Rdenno;
A_PAD_INT(PAD_42)
A68_INT  Deflex;
A_PAD_INT(PAD_43)
struct A68t116 * Sels;
};
typedef struct A68t106  A68_106 ;    /* STRUCT(INT,INT,REF MODE116)  */
struct A68t107{
A68_INT  Rdenno;
A_PAD_INT(PAD_44)
A68_INT  Imode;
A_PAD_INT(PAD_45)
A68_INT  Length;
A_PAD_INT(PAD_46)
A68_INT  Deflex;
A_PAD_INT(PAD_47)
};
typedef struct A68t107  A68_107 ;    /* STRUCT(INT,INT,INT,INT)  */
struct A68t108{
A68_INT  Deproc;
A_PAD_INT(PAD_48)
};
typedef struct A68t108  A68_108 ;    /* STRUCT(INT)  */
struct A68t109{
A68_INT  Rdenno;
A_PAD_INT(PAD_49)
A68_INT  Vecmode;
A_PAD_INT(PAD_50)
A68_INT  Deflex;
A_PAD_INT(PAD_51)
};
typedef struct A68t109  A68_109 ;    /* STRUCT(INT,INT,INT)  */
struct A68t110{
A68_INT  Rdenno;
A_PAD_INT(PAD_52)
A68_INT  Mode;
A_PAD_INT(PAD_53)
A68_INT  Nods;
A_PAD_INT(PAD_54)
A68_INT  Deflex;
A_PAD_INT(PAD_55)
};
typedef struct A68t110  A68_110 ;    /* STRUCT(INT,INT,INT,INT)  */
struct A68t111{
A68_INT  Mode;
A_PAD_INT(PAD_56)
struct A68t115 * Stenlist;
};
typedef struct A68t111  A68_111 ;    /* STRUCT(INT,REF MODE115)  */
struct A68t112{
A68_INT  Mode;
A_PAD_INT(PAD_57)
A68_INT  Modeproc;
A_PAD_INT(PAD_58)
struct A68t114 * El;
};
typedef struct A68t112  A68_112 ;    /* STRUCT(INT,INT,REF MODE114)  */
struct A68t114{
struct A68t112 * Am;
struct A68t114 * Rest;
};
typedef struct A68t114  A68_114 ;    /* STRUCT(REF MODE112,REF MODE114)  */
struct A68t115{
A68_INT  Mode;
A_PAD_INT(PAD_59)
A68_INT  Rdenno;
A_PAD_INT(PAD_60)
struct A68t115 * Rest;
};
typedef struct A68t115  A68_115 ;    /* STRUCT(INT,INT,REF MODE115)  */
struct A68t116{
A68_INT  Mode;
A_PAD_INT(PAD_61)
A68_INT  Fieldno;
A_PAD_INT(PAD_62)
struct A68t95  Name;
A_PAD_ISTRUCT(A68_95 ,PAD_63)
struct A68t116 * Rest;
};
typedef struct A68t116  A68_116 ;    /* STRUCT(INT,INT,MODE95,REF MODE116)  */
struct A68t117{
A68_INT  Mode;
A_PAD_INT(PAD_64)
struct A68t117 * Rest;
};
typedef struct A68t117  A68_117 ;    /* STRUCT(INT,REF MODE117)  */

A_PROCEDURE(A68_VOID ,A68t118,(A68_INT ,struct A68t93 *),(A68_INT ,struct A68t93 *,void *));
typedef struct A68t118  A68_118 ;    /* PROC(INT) MODE93 */
struct A68t120 ;

A_PROCEDURE(A68_VOID ,A68t119,(A68_INT ,struct A68t120 *),(A68_INT ,struct A68t120 *,void *));
typedef struct A68t119  A68_119 ;    /* PROC(INT) REF MODE120 */
A_VECTOR(struct A68t94 ,A68t120);
typedef struct A68t120  A68_120 ;    /* VECTOR [] MODE94 */

A_PROCEDURE(A68_INT ,A68t121,(A68_INT ,A68_BOOL ),(A68_INT ,A68_BOOL ,void *));
typedef struct A68t121  A68_121 ;    /* PROC(INT,BOOL) INT */

A_PROCEDURE(A68_VOID ,A68t122,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t122  A68_122 ;    /* PROC(INT,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t123,(A68_INT ,A68_INT ,A68_VC *),(A68_INT ,A68_INT ,A68_VC *,void *));
typedef struct A68t123  A68_123 ;    /* PROC(INT,INT) MODE26 */
struct A68t124{
struct A68t32 * Value;
struct A68t46 * End;
A68_INT  Type;
A_PAD_INT(PAD_65)
};
typedef struct A68t124  A68_124 ;    /* STRUCT(REF MODE32,REF MODE46,INT)  */

A_PROCEDURE(A68_BOOL ,A68t125,(struct A68t32 *,struct A68t32 *),(struct A68t32 *,struct A68t32 *,void *));
typedef struct A68t125  A68_125 ;    /* PROC(REF MODE32,REF MODE32) BOOL */

A_PROCEDURE(A68_BOOL ,A68t126,(struct A68t32 *),(struct A68t32 *,void *));
typedef struct A68t126  A68_126 ;    /* PROC(REF MODE32) BOOL */

A_PROCEDURE(A68_BOOL ,A68t127,(struct A68t32 *,A68_LBITS ),(struct A68t32 *,A68_LBITS ,void *));
typedef struct A68t127  A68_127 ;    /* PROC(REF MODE32,LONG BITS) BOOL */

A_PROCEDURE(A68_LBITS ,A68t128,(struct A68t32 *),(struct A68t32 *,void *));
typedef struct A68t128  A68_128 ;    /* PROC(REF MODE32) LONG BITS */

A_PROCEDURE(A68_VOID ,A68t129,(struct A68t32 *,A68_VC *),(struct A68t32 *,A68_VC *,void *));
typedef struct A68t129  A68_129 ;    /* PROC(REF MODE32) MODE26 */

A_PROCEDURE(struct A68t32 *,A68t130,(struct A68t32 *,A68_INT ),(struct A68t32 *,A68_INT ,void *));
typedef struct A68t130  A68_130 ;    /* PROC(REF MODE32,INT) REF MODE32 */

A_PROCEDURE(A68_INT ,A68t131,(struct A68t33 ),(struct A68t33 ,void *));
typedef struct A68t131  A68_131 ;    /* PROC(MODE33) INT */

A_PROCEDURE(A68_BOOL ,A68t132,(struct A68t32 *,A68_BITS ),(struct A68t32 *,A68_BITS ,void *));
typedef struct A68t132  A68_132 ;    /* PROC(REF MODE32,BITS) BOOL */

A_PROCEDURE(struct A68t32 *,A68t133,(struct A68t34 *,A68_INT ),(struct A68t34 *,A68_INT ,void *));
typedef struct A68t133  A68_133 ;    /* PROC(REF MODE34,INT) REF MODE32 */

A_PROCEDURE(A68_INT ,A68t134,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t134  A68_134 ;    /* PROC(INT,INT) INT */

A_PROCEDURE(struct A68t34 *,A68t135,(struct A68t34 *),(struct A68t34 *,void *));
typedef struct A68t135  A68_135 ;    /* PROC(REF MODE34) REF MODE34 */
struct A68t137 ;

A_PROCEDURE(struct A68t32 *,A68t136,(A68_INT ,A68_INT ,A68_BITS ,struct A68t137 ),(A68_INT ,A68_INT ,A68_BITS ,struct A68t137 ,void *));
typedef struct A68t136  A68_136 ;    /* PROC(INT,INT,BITS,MODE137) REF MODE32 */
A_VECTOR(struct A68t32 *,A68t137);
typedef struct A68t137  A68_137 ;    /* VECTOR [] REF MODE32 */

A_PROCEDURE(A68_VOID ,A68t138,(struct A68t32 *,A68_BOOL ,A68_VC *),(struct A68t32 *,A68_BOOL ,A68_VC *,void *));
typedef struct A68t138  A68_138 ;    /* PROC(REF MODE32,BOOL) MODE26 */

A_PROCEDURE(A68_LINT ,A68t139,(struct A68t32 ),(struct A68t32 ,void *));
typedef struct A68t139  A68_139 ;    /* PROC(MODE32) LONG INT */
struct A68t140 { A68_INT mode; union {
struct A68t32 * mode1;
A68_VC  mode2;
struct A68t38  mode3;
} data; };
typedef struct A68t140  A68_140 ;    /* UNION(REF MODE32,MODE26,MODE38)  */

A_PROCEDURE(A68_VOID ,A68t141,(struct A68t140 ,A68_VC *),(struct A68t140 ,A68_VC *,void *));
typedef struct A68t141  A68_141 ;    /* PROC(MODE140) MODE26 */
struct A68t143 ;

A_PROCEDURE(A68_VOID ,A68t142,(struct A68t143 ,A68_VC *),(struct A68t143 ,A68_VC *,void *));
typedef struct A68t142  A68_142 ;    /* PROC(MODE143) MODE26 */
A_VECTOR(struct A68t140 ,A68t143);
typedef struct A68t143  A68_143 ;    /* VECTOR [] MODE140 */

A_PROCEDURE(A68_VOID ,A68t144,(A68_VC ,struct A68t143 ,A68_VC *),(A68_VC ,struct A68t143 ,A68_VC *,void *));
typedef struct A68t144  A68_144 ;    /* PROC(MODE26,MODE143) MODE26 */

A_PROCEDURE(A68_VOID ,A68t145,(struct A68t143 ),(struct A68t143 ,void *));
typedef struct A68t145  A68_145 ;    /* PROC(MODE143) VOID */

A_PROCEDURE(A68_VOID ,A68t146,(A68_VC ,A68_INT ,struct A68t143 ,struct A68t38 *),(A68_VC ,A68_INT ,struct A68t143 ,struct A68t38 *,void *));
typedef struct A68t146  A68_146 ;    /* PROC(MODE26,INT,MODE143) MODE38 */

A_PROCEDURE(struct A68t32 *,A68t147,(struct A68t32 *),(struct A68t32 *,void *));
typedef struct A68t147  A68_147 ;    /* PROC(REF MODE32) REF MODE32 */

A_PROCEDURE(struct A68t32 *,A68t148,(A68_VC ,struct A68t32 *),(A68_VC ,struct A68t32 *,void *));
typedef struct A68t148  A68_148 ;    /* PROC(MODE26,REF MODE32) REF MODE32 */

A_PROCEDURE(A68_INT ,A68t149,(struct A68t97 ,struct A68t97 ),(struct A68t97 ,struct A68t97 ,void *));
typedef struct A68t149  A68_149 ;    /* PROC(REF MODE97,REF MODE97) INT */

A_PROCEDURE(A68_VOID ,A68t150,(A68_INT ,struct A68t97 ,struct A68t57 *),(A68_INT ,struct A68t97 ,struct A68t57 *,void *));
typedef struct A68t150  A68_150 ;    /* PROC(INT,REF MODE97) MODE57 */

A_PROCEDURE(A68_VOID ,A68t151,(struct A68t97 ,struct A68t97 ,A68_VC *),(struct A68t97 ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t151  A68_151 ;    /* PROC(REF MODE97,REF MODE97) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t152,(A68_INT ,A68_VC ),(A68_INT ,A68_VC ,void *));
typedef struct A68t152  A68_152 ;    /* PROC(INT,MODE26) BOOL */

A_PROCEDURE(A68_INT ,A68t153,(A68_VC ),(A68_VC ,void *));
typedef struct A68t153  A68_153 ;    /* PROC(MODE26) INT */

A_PROCEDURE(A68_VOID ,A68t154,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t154  A68_154 ;    /* PROC(MODE26) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t155,(struct A68t63 ),(struct A68t63 ,void *));
typedef struct A68t155  A68_155 ;    /* PROC(MODE63) VOID */

A_PROCEDURE(A68_VOID ,A68t156,(struct A68t72 ),(struct A68t72 ,void *));
typedef struct A68t156  A68_156 ;    /* PROC(MODE72) VOID */

A_PROCEDURE(A68_VOID ,A68t157,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t157  A68_157 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,64,A68t158);
typedef struct A68t158  A68_158 ;    /* STRUCT 64 CHAR */
A_ISTRUCT(A68_CHAR ,24,A68t159);
typedef struct A68t159  A68_159 ;    /* STRUCT 24 CHAR */

A_PROCEDURE(A68_VOID ,A68t160,(struct A68t32 *,A68_BOOL ),(struct A68t32 *,A68_BOOL ,void *));
typedef struct A68t160  A68_160 ;    /* PROC(REF MODE32,BOOL) VOID */
A_ISTRUCT(A68_CHAR ,26,A68t161);
typedef struct A68t161  A68_161 ;    /* STRUCT 26 CHAR */
A_ROW(struct A68t31 ,A68t162,1);
typedef struct A68t162  A68_162 ;    /* [] MODE31 */
A_ISTRUCT(A68_CHAR ,40,A68t163);
typedef struct A68t163  A68_163 ;    /* STRUCT 40 CHAR */
A_ISTRUCT(A68_CHAR ,53,A68t164);
typedef struct A68t164  A68_164 ;    /* STRUCT 53 CHAR */
A_ISTRUCT(A68_CHAR ,48,A68t165);
typedef struct A68t165  A68_165 ;    /* STRUCT 48 CHAR */
A_ISTRUCT(A68_CHAR ,44,A68t166);
typedef struct A68t166  A68_166 ;    /* STRUCT 44 CHAR */
A_ISTRUCT(A68_CHAR ,49,A68t167);
typedef struct A68t167  A68_167 ;    /* STRUCT 49 CHAR */
A_ISTRUCT(struct A68t31 ,51,A68t168);
typedef struct A68t168  A68_168 ;    /* STRUCT 51 MODE31 */
A_ISTRUCT(A68_CHAR ,43,A68t169);
typedef struct A68t169  A68_169 ;    /* STRUCT 43 CHAR */

A_PROCEDURE(struct A68t32 *,A68t170,(struct A68t32 *,struct A68t32 ),(struct A68t32 *,struct A68t32 ,void *));
typedef struct A68t170  A68_170 ;    /* PROC(REF MODE32,MODE32) REF MODE32 */

A_PROCEDURE(struct A68t35 *,A68t171,(struct A68t35 *,struct A68t35 ),(struct A68t35 *,struct A68t35 ,void *));
typedef struct A68t171  A68_171 ;    /* PROC(REF MODE35,MODE35) REF MODE35 */
#define A68_172  A68_VC 
#define A68t172 A68t26            /* FLEX VECTOR [] CHAR */
A_ISTRUCT(A68_CHAR ,22,A68t173);
typedef struct A68t173  A68_173 ;    /* STRUCT 22 CHAR */
A_ISTRUCT(A68_CHAR ,11,A68t174);
typedef struct A68t174  A68_174 ;    /* STRUCT 11 CHAR */

A_PROCEDURE(A68_VOID ,A68t175,(struct A68t34 **),(struct A68t34 **,void *));
typedef struct A68t175  A68_175 ;    /* PROC(REF REF MODE34) VOID */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from moduletracer --- */
/* --- End of imports from moduletracer --- */


/* --- Imports from unionaids --- */
/* --- End of imports from unionaids --- */


/* --- Imports from values --- */
extern A68_BITS  YIJACTR_defaultinfo;
extern A68_34 * VIJACTR_nilvaluelist;
extern A68_34 * JBQACTR_reversevaluelist(struct A68t34 *);
extern A68_32  MJJACTR_skipvalue;
/* --- End of imports from values --- */


/* --- Imports from incvalue --- */
/* --- End of imports from incvalue --- */


/* --- Imports from modes --- */
/* --- End of imports from modes --- */


/* --- Imports from incmode --- */
/* --- End of imports from incmode --- */


/* --- Imports from uniquenameserver --- */
/* --- End of imports from uniquenameserver --- */


/* --- Imports from coutput --- */
/* --- End of imports from coutput --- */


/* --- Imports from evalbase --- */
extern A68_82  WUQACTR_evaluate;
/* --- End of imports from evalbase --- */


/* --- Imports from environment --- */
extern A68_VOID  PXIACTR_assert(A68_VC ,A68_BOOL );
extern A68_BITS  YHJACTR_tracelevelflags(void);
extern A68_BOOL  UHJACTR_traceon;
extern A68_VOID  CXIACTR_warning(A68_INT );
/* --- End of imports from environment --- */


/* --- Imports from centities --- */
/* --- End of imports from centities --- */


/* --- Imports from idtable --- */
/* --- End of imports from idtable --- */


/* --- Imports from operators --- */
extern A68_VOID  QCRACTR_simpleindexop(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  OIRACTR_trimindexop(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  VPRACTR_straightindexop(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  ERRACTR_straighten(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  DVRACTR_assignop(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  GXRACTR_derefop(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  HYRACTR_callop(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  RESACTR_voidop(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  BGSACTR_niltomodeop(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  XJSACTR_rowstorowrows(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  WKSACTR_vectortorow(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_31  QUSACTR_scalartovector;
extern A68_VOID  MLSACTR_modetostruct1mode(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  BMSACTR_unitesimple(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  SNSACTR_uniteunion(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  ZQSACTR_istructtorow(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  HPSACTR_istructtovector(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  UUSACTR_skiptomode(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_31  OUSACTR_scalartorow;
extern A68_VOID  XWSACTR_vacuum(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  WXSACTR_staticgenerator(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  JZQACTR_staticpartgenerator(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  HARACTR_selectop(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  FBRACTR_copytoflex(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  KNRACTR_dynamicgenerator(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  RGSACTR_gototoproc(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  EHSACTR_gototomode(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  VISACTR_inttoreal(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  FJSACTR_realtocomplex(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  CVSACTR_deunite(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  RVSACTR_bitstorowbool(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  KXSACTR_ytypetom(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  QXSACTR_mtoxtype(struct A68t32 *,struct A68t33 ,A68_32 *);
/* --- End of imports from operators --- */


/* --- Imports from adicops --- */
extern A68_VOID  FCVACTR_dyadicsem(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  VXTACTR_monadicsem(struct A68t32 *,struct A68t33 ,A68_32 *);
/* --- End of imports from adicops --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void BCHACTR(void);   /* moduletracer */
extern void QRQACTR(void);   /* unionaids */
extern void JRPACTR(void);   /* values */
extern void PIJACTR(void);   /* incvalue */
extern void MLMACTR(void);   /* modes */
extern void ZDAACTR(void);   /* incmode */
extern void AGMACTR(void);   /* uniquenameserver */
extern void YRLACTR(void);   /* coutput */
extern void RUQACTR(void);   /* evalbase */
extern void HPIACTR(void);   /* environment */
extern void THAACTR(void);   /* centities */
extern void YNKACTR(void);   /* idtable */
extern void MWQACTR(void);   /* operators */
extern void BETACTR(void);   /* adicops */
/* --- end of DECS initialisation functions --- */
static A68_158   WCVACTR = {"$Id: evaluator.c,v 1.5.2.4 2004/09/27 03:04:17 teshields Exp $"}; 
A_GISVEC(A68_VC ,XCVACTR,WCVACTR,64)
static A68_159   CDVACTR = {"/* UNIMPLEMENTED OPER */"}; 
A_GISVEC(A68_VC ,DDVACTR,CDVACTR,24)
A68_160  HDVACTR_calltrace;
#define IDVACTR_tracealllevels 0X800000U
static A68_161   MDVACTR = {"EVALUATE - spare op number"}; 
A_GISVEC(A68_VC ,NDVACTR,MDVACTR,26)
static A68_163   XDVACTR = {"EVALUATE - trim implemented by trimindex"}; 
A_GISVEC(A68_VC ,YDVACTR,XDVACTR,40)
static A68_164   HEVACTR = {"EVALUATE - boundpack implemented by dynamic generator"}; 
A_GISVEC(A68_VC ,IEVACTR,HEVACTR,53)
static A68_165   SEVACTR = {"EVALUATE - prestraight implemented by straighten"}; 
A_GISVEC(A68_VC ,TEVACTR,SEVACTR,48)
static A68_166   BFVACTR = {"EVALUATE - default bound implemented by load"}; 
A_GISVEC(A68_VC ,CFVACTR,BFVACTR,44)
static A68_167   RFVACTR = {"EVALUATE - 25 68R inttobits no longer implemented"}; 
A_GISVEC(A68_VC ,SFVACTR,RFVACTR,49)
static A68_162  UGVACTR_opersemantics;
static A68_169   XGVACTR = {"EVALUATE - evaluator passed a NIL reference"}; 
A_GISVEC(A68_VC ,YGVACTR,XGVACTR,43)
static A68_41   THVACTR = {"A68_NIL"}; 
A_GISVEC(A68_VC ,UHVACTR,THVACTR,7)
static A68_173   XHVACTR = {"EVALUATE - Unknown NSE"}; 
A_GISVEC(A68_VC ,YHVACTR,XHVACTR,22)
static A68_174   EIVACTR = {"/* VOID? */"}; 
A_GISVEC(A68_VC ,FIVACTR,EIVACTR,11)
static A68_165   IIVACTR = {"EVALUATE - evaluation not defined for this value"}; 
A_GISVEC(A68_VC ,JIVACTR,IIVACTR,48)

A_STATIC A68_VOID  ADVACTR_unimplementedop(A68_32 * Root, A68_33  Oper, A68_32  *ReturnedValue);

A_STATIC A68_VOID  LDVACTR_spareop(A68_32 * Value, A68_33  Oper, A68_32  *ReturnedValue);

A_STATIC A68_VOID  WDVACTR_anonymous(A68_32 * V, A68_33  Param, A68_32  *ReturnedValue);

A_STATIC A68_VOID  GEVACTR_anonymous(A68_32 * V, A68_33  Param, A68_32  *ReturnedValue);

A_STATIC A68_VOID  REVACTR_anonymous(A68_32 * V, A68_33  Param, A68_32  *ReturnedValue);

A_STATIC A68_VOID  AFVACTR_anonymous(A68_32 * V, A68_33  Param, A68_32  *ReturnedValue);

A_STATIC A68_VOID  QFVACTR_anonymous(A68_32 * V, A68_33  Param, A68_32  *ReturnedValue);

A_STATIC A68_VOID  WGVACTR_evalnotrace(A68_32 * Root);

A_STATIC A68_32 * DHVACTR_assignment(A68_32 * BHVACTR_anonymous, A68_32  CHVACTR_anonymous);

A_STATIC A68_35 * IHVACTR_assignment(A68_35 * GHVACTR_anonymous, A68_35  HHVACTR_anonymous);

A_STATIC A68_VOID  LIVACTR_evaltrace(A68_32 * Root);

A68_VOID  QIVACTR_evaluatestack(A68_34 ** Valuestack);

A68_VOID  SIVACTR_initialiseevaluator(void);

A_STATIC A68_35 * IHVACTR_assignment(A68_35 * GHVACTR_anonymous, A68_35  HHVACTR_anonymous)
{ 
A68_35  JHVACTR;  /* united object - for case conformity */
A68_VC  KHVACTR_anonymous;
A68_VC  LHVACTR;  /* OPERATORS - copy to flex */
A68_172 * MHVACTR;  /* YIELD */
A68_35 * NHVACTR;  /* clause result */
{ 
(*GHVACTR_anonymous) = HHVACTR_anonymous;
JHVACTR = HHVACTR_anonymous ;
switch ( JHVACTR.mode )
{ 
case 6: /* VECTOR [] CHAR */
KHVACTR_anonymous = (JHVACTR.data.mode6);
MHVACTR = &(GHVACTR_anonymous-> data.mode6) ;
(*MHVACTR) = A_VCOPY(KHVACTR_anonymous,LHVACTR,A68_CHAR );
break;
default: 
/*SKIP*/;
break;
} 
NHVACTR = GHVACTR_anonymous;
} 
return( NHVACTR );
} 
#undef NL

A_STATIC A68_32 * DHVACTR_assignment(A68_32 * BHVACTR_anonymous, A68_32  CHVACTR_anonymous)
{ 
A68_INT * EHVACTR;  /* YIELD */
A68_BITS * FHVACTR;  /* YIELD */
A68_32 * OHVACTR;  /* clause result */
{ 
EHVACTR = (&(BHVACTR_anonymous->Mode)) ;
(*EHVACTR) = CHVACTR_anonymous.Mode;
FHVACTR = (&(BHVACTR_anonymous->Info)) ;
(*FHVACTR) = CHVACTR_anonymous.Info;
IHVACTR_assignment((&(BHVACTR_anonymous->Extra)), CHVACTR_anonymous.Extra);
OHVACTR = BHVACTR_anonymous;
} 
return( OHVACTR );
} 
#undef NL

A_STATIC A68_VOID  ADVACTR_unimplementedop(A68_32 * Root, A68_33  Oper, A68_32  *ReturnedValue)
{ 
A68_32  BDVACTR;  /* collateral clause result */
A68_35  EDVACTR;  /* OPERATORS - mode -> union mode */
A68_VC  FDVACTR;  /* YIELD */
A68_32  GDVACTR;  /* clause result */
A_PROC_ENTRY(unimplementedop);
 /* line 47: */
 /* line 48: */
{ 
BDVACTR.Mode = (*(&(Root->Mode)));
BDVACTR.Info = YIJACTR_defaultinfo;
 /* line 49: */
FDVACTR = DDVACTR ;
BDVACTR.Extra = A_UNITE(EDVACTR,mode6,6,FDVACTR);
GDVACTR = BDVACTR;
} 
A_PROC_EXIT(unimplementedop);
*ReturnedValue = (GDVACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  LDVACTR_spareop(A68_32 * Value, A68_33  Oper, A68_32  *ReturnedValue)
{ 
A68_32  ODVACTR;  /* clause result */
A_PROC_ENTRY(spareop);
 /* line 56: */
{ 
PXIACTR_assert(NDVACTR, A68_FALSE);
ODVACTR = MJJACTR_skipvalue;
} 
A_PROC_EXIT(spareop);
*ReturnedValue = (ODVACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  WDVACTR_anonymous(A68_32 * V, A68_33  Param, A68_32  *ReturnedValue)
{ 
A68_32  ZDVACTR;  /* clause result */
 /* line 64: */
{ 
PXIACTR_assert(YDVACTR, A68_FALSE);
ZDVACTR = MJJACTR_skipvalue;
} 
*ReturnedValue = (ZDVACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  GEVACTR_anonymous(A68_32 * V, A68_33  Param, A68_32  *ReturnedValue)
{ 
A68_32  JEVACTR;  /* clause result */
A68_32  KEVACTR;  /* OPERATORS - skip to mode */
 /* line 69: */
{ 
PXIACTR_assert(IEVACTR, A68_FALSE);
JEVACTR = KEVACTR;
} 
*ReturnedValue = (JEVACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  REVACTR_anonymous(A68_32 * V, A68_33  Param, A68_32  *ReturnedValue)
{ 
A68_32  UEVACTR;  /* clause result */
 /* line 74: */
{ 
PXIACTR_assert(TEVACTR, A68_FALSE);
UEVACTR = MJJACTR_skipvalue;
} 
*ReturnedValue = (UEVACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  AFVACTR_anonymous(A68_32 * V, A68_33  Param, A68_32  *ReturnedValue)
{ 
A68_32  DFVACTR;  /* clause result */
A68_32  EFVACTR;  /* OPERATORS - skip to mode */
 /* line 78: */
{ 
PXIACTR_assert(CFVACTR, A68_FALSE);
DFVACTR = EFVACTR;
} 
*ReturnedValue = (DFVACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  QFVACTR_anonymous(A68_32 * V, A68_33  Param, A68_32  *ReturnedValue)
{ 
A68_32  TFVACTR;  /* clause result */
 /* line 88: */
{ 
PXIACTR_assert(SFVACTR, A68_FALSE);
TFVACTR = MJJACTR_skipvalue;
} 
*ReturnedValue = (TFVACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  WGVACTR_evalnotrace(A68_32 * Root)
{ 
A68_35  ZGVACTR;  /* united object - for case conformity */
A68_33  AHVACTR_rator;
A68_INT  PHVACTR;  /* YIELD */
A68_31  QHVACTR;  /* CALL */
A68_32  RHVACTR;  /* avoid structure result */
A68_40  SHVACTR_nihil;
A68_35  VHVACTR;  /* OPERATORS - mode -> union mode */
A68_VC  WHVACTR;  /* YIELD */
A68_36  ZHVACTR_r;
A68_37  AIVACTR_id;
A68_38  BIVACTR_temp;
A68_39  CIVACTR_label;
A68_VC  DIVACTR_cf;
A68_35  GIVACTR;  /* OPERATORS - mode -> union mode */
A68_VC  HIVACTR;  /* YIELD */
A_PROC_ENTRY(evalnotrace);
 /* line 120: */
 /* line 121: */
{ 
PXIACTR_assert(YGVACTR, (Root!=(A68_32 *)A68_NIL));
 /* line 122: */
 /* line 123: */
ZGVACTR = (*(&(Root->Extra))) ;
switch ( ZGVACTR.mode )
{ 
case 9: /* STRUCT(INT,INT,REF MODE34)  */
AHVACTR_rator = (ZGVACTR.data.mode9);
 /* line 124: */
 /* line 126: */
PHVACTR = AHVACTR_rator.Fn ;
QHVACTR = A_R1INDEX(UGVACTR_opersemantics,PHVACTR) ;
A_CALLPROC(QHVACTR,(Root, AHVACTR_rator, &RHVACTR),(Root, AHVACTR_rator, &RHVACTR,(QHVACTR).nonlocals));
DHVACTR_assignment(Root, RHVACTR);
break;
case 8: /* STRUCT(INT)  */
SHVACTR_nihil = (ZGVACTR.data.mode8);
 /* line 127: */
 /* line 128: */
switch ( SHVACTR_nihil.Nse )
{ 
case 1: 
 /* line 129: */
/*SKIP*/;
break;
case 2: 
 /* line 130: */
/*SKIP*/;
break;
case 3: 
 /* line 131: */
WHVACTR = UHVACTR ;
IHVACTR_assignment((&(Root->Extra)), A_UNITE(VHVACTR,mode6,6,WHVACTR));
break;
default: 
PXIACTR_assert(YHVACTR, A68_FALSE);
 /* line 132: */
 /* line 134: */
/*SKIP*/;
break;
} 
break;
case 1: /* LONG BITS */
 /* line 135: */
 /* line 137: */
/*SKIP*/;
break;
case 2: /* STRUCT(INT)  */
ZHVACTR_r = (ZGVACTR.data.mode2);
 /* line 138: */
 /* line 140: */
/*SKIP*/;
break;
case 4: /* STRUCT(INT)  */
AIVACTR_id = (ZGVACTR.data.mode4);
 /* line 141: */
 /* line 143: */
/*SKIP*/;
break;
case 5: /* STRUCT(MODE41,INT)  */
BIVACTR_temp = (ZGVACTR.data.mode5);
 /* line 144: */
 /* line 146: */
/*SKIP*/;
break;
case 7: /* STRUCT(INT)  */
CIVACTR_label = (ZGVACTR.data.mode7);
 /* line 147: */
 /* line 149: */
/*SKIP*/;
break;
case 6: /* VECTOR [] CHAR */
DIVACTR_cf = (ZGVACTR.data.mode6);
 /* line 150: */
 /* line 152: */
/*SKIP*/;
break;
case 3: /* VOID */
 /* line 153: */
 /* line 155: */
HIVACTR = FIVACTR ;
IHVACTR_assignment((&(Root->Extra)), A_UNITE(GIVACTR,mode6,6,HIVACTR));
break;
default: 
 /* line 156: */
 /* line 157: */
PXIACTR_assert(JIVACTR, A68_FALSE);
break;
} 
} 
A_PROC_EXIT(evalnotrace);
return;
} 
#undef NL

A_STATIC A68_VOID  LIVACTR_evaltrace(A68_32 * Root)
{ 
A68_BITS  MIVACTR;  /* ADICOPS - >= */
A68_82  NIVACTR;  /* procedure value */
A68_82  OIVACTR;  /* procedure value */
A_PROC_ENTRY(evaltrace);
 /* line 164: */
 /* line 165: */
{ 
A_CALLPROC(HDVACTR_calltrace,(Root, A68_FALSE),(Root, A68_FALSE,(HDVACTR_calltrace).nonlocals));
 /* line 166: */
 /* line 167: */
MIVACTR = YHJACTR_tracelevelflags() ;
if ( A_LB_GE(MIVACTR,IDVACTR_tracealllevels) )
{ 
 /* line 169: */
 /* line 170: */
WGVACTR_evalnotrace(Root);
} 
else
{ 
NIVACTR.fn.fn_global = WGVACTR_evalnotrace;
NIVACTR.nonlocals = A68_NIL;
WUQACTR_evaluate = NIVACTR;
 /* line 171: */
WGVACTR_evalnotrace(Root);
 /* line 172: */
 /* line 173: */
OIVACTR.fn.fn_global = LIVACTR_evaltrace;
OIVACTR.nonlocals = A68_NIL;
WUQACTR_evaluate = OIVACTR;
} 
 /* line 174: */
 /* line 175: */
A_CALLPROC(HDVACTR_calltrace,(Root, A68_TRUE),(Root, A68_TRUE,(HDVACTR_calltrace).nonlocals));
} 
A_PROC_EXIT(evaltrace);
return;
} 
#undef NL

A68_VOID  QIVACTR_evaluatestack(A68_34 ** Valuestack)
{ 
A68_34 * RIVACTR_kcatseulav;
A_PROC_ENTRY(evaluatestack);
 /* line 185: */
 /* line 186: */
 /* line 187: */
if ( ((*(&((*Valuestack)->Rest)))==VIJACTR_nilvaluelist) )
{ 
 /* line 188: */
 /* line 189: */
A_CALLPROC(WUQACTR_evaluate,((&((*Valuestack)->Value))),((&((*Valuestack)->Value)),(WUQACTR_evaluate).nonlocals));
} 
else
{ 
RIVACTR_kcatseulav = JBQACTR_reversevaluelist((*Valuestack));
 /* line 190: */
for ( ;; )
{ 
 /* line 191: */
 /* line 192: */
if ( !(((*(&(RIVACTR_kcatseulav->Rest)))!=VIJACTR_nilvaluelist)) ) break;
A_CALLPROC(WUQACTR_evaluate,((&(RIVACTR_kcatseulav->Value))),((&(RIVACTR_kcatseulav->Value)),(WUQACTR_evaluate).nonlocals));
 /* line 193: */
 /* line 194: */
RIVACTR_kcatseulav = (*(&(RIVACTR_kcatseulav->Rest)));
}
 /* line 195: */
CXIACTR_warning(799);
 /* line 197: */
(*Valuestack) = RIVACTR_kcatseulav;
 /* line 198: */
 /* line 199: */
A_CALLPROC(WUQACTR_evaluate,((&((*Valuestack)->Value))),((&((*Valuestack)->Value)),(WUQACTR_evaluate).nonlocals));
} 
A_PROC_EXIT(evaluatestack);
return;
} 
#undef NL

A68_VOID  SIVACTR_initialiseevaluator(void)
{ 
A68_82  TIVACTR;  /* clause result */
A68_82  UIVACTR;  /* procedure value */
A68_82  VIVACTR;  /* procedure value */
A_PROC_ENTRY(initialiseevaluator);
if ( UHJACTR_traceon )
{ 
UIVACTR.fn.fn_global = LIVACTR_evaltrace;
UIVACTR.nonlocals = A68_NIL;
TIVACTR = UIVACTR;
} 
else
{ 
 /* line 204: */
VIVACTR.fn.fn_global = WGVACTR_evalnotrace;
VIVACTR.nonlocals = A68_NIL;
TIVACTR = VIVACTR;
} 
WUQACTR_evaluate = TIVACTR;
A_PROC_EXIT(initialiseevaluator);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 3: */
 /* line 4: */
 /* line 6: */
void TCVACTR(void)   /* initialise DECS evaluator */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/shields/projects/Algol68/Tools/Algol68toC/src/a68toc","-v","-uname","seedfile","-lib","/home/shields/projects/Algol68/Tools/Algol68toC/a68config","-dir","/home/shields/projects/Algol68/Tools/Algol68toC/a68config","-dir","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel","-dir",".","evaluator.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/shields/projects/Algol68/Tools/Algol68toC/a68config","A68_CDIR=","A68_DIR=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/shields/projects/Algol68/Tools/Algol68toC/a68config/a68config.m","./moduletracer.m","./unionaids.m","./values.m","./incvalue.m","./modes.m","./incmode.m","./uniquenameserver.m","./coutput.m","./evalbase.m","./environment.m","./centities.m","./idtable.m","./operators.m","./adicops.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_168  PDVACTR;  /* collateral clause result */
A68_31  QDVACTR;  /* procedure value */
A68_31  RDVACTR;  /* procedure value */
A68_31  SDVACTR;  /* procedure value */
A68_31  TDVACTR;  /* procedure value */
A68_31  AEVACTR;  /* procedure value */
A68_31  BEVACTR;  /* procedure value */
A68_31  CEVACTR;  /* procedure value */
A68_31  DEVACTR;  /* procedure value */
A68_31  LEVACTR;  /* procedure value */
A68_31  MEVACTR;  /* procedure value */
A68_31  NEVACTR;  /* procedure value */
A68_31  OEVACTR;  /* procedure value */
A68_31  VEVACTR;  /* procedure value */
A68_31  WEVACTR;  /* procedure value */
A68_31  XEVACTR;  /* procedure value */
A68_31  FFVACTR;  /* procedure value */
A68_31  GFVACTR;  /* procedure value */
A68_31  HFVACTR;  /* procedure value */
A68_31  IFVACTR;  /* procedure value */
A68_31  JFVACTR;  /* procedure value */
A68_31  KFVACTR;  /* procedure value */
A68_31  LFVACTR;  /* procedure value */
A68_31  MFVACTR;  /* procedure value */
A68_31  NFVACTR;  /* procedure value */
A68_31  UFVACTR;  /* procedure value */
A68_31  VFVACTR;  /* procedure value */
A68_31  WFVACTR;  /* procedure value */
A68_31  XFVACTR;  /* procedure value */
A68_31  YFVACTR;  /* procedure value */
A68_31  ZFVACTR;  /* procedure value */
A68_31  AGVACTR;  /* procedure value */
A68_31  BGVACTR;  /* procedure value */
A68_31  CGVACTR;  /* procedure value */
A68_31  DGVACTR;  /* procedure value */
A68_31  EGVACTR;  /* procedure value */
A68_31  FGVACTR;  /* procedure value */
A68_31  GGVACTR;  /* procedure value */
A68_31  HGVACTR;  /* procedure value */
A68_31  IGVACTR;  /* procedure value */
A68_31  JGVACTR;  /* procedure value */
A68_31  KGVACTR;  /* procedure value */
A68_31  LGVACTR;  /* procedure value */
A68_31  MGVACTR;  /* procedure value */
A68_31  NGVACTR;  /* procedure value */
A68_31  OGVACTR;  /* procedure value */
A68_31  PGVACTR;  /* procedure value */
A68_31  QGVACTR;  /* procedure value */
A68_31  RGVACTR;  /* procedure value */
A68_31  SGVACTR;  /* procedure value */
A68_162  TGVACTR;  /* OPERATORS - istruct to row */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
BCHACTR();   /* USE moduletracer */
QRQACTR();   /* USE unionaids */
JRPACTR();   /* USE values */
PIJACTR();   /* USE incvalue */
MLMACTR();   /* USE modes */
ZDAACTR();   /* USE incmode */
AGMACTR();   /* USE uniquenameserver */
YRLACTR();   /* USE coutput */
RUQACTR();   /* USE evalbase */
HPIACTR();   /* USE environment */
THAACTR();   /* USE centities */
YNKACTR();   /* USE idtable */
MWQACTR();   /* USE operators */
BETACTR();   /* USE adicops */
/* --- Initialise configuration information */
A_config.source_file = "/home/shields/projects/Algol68/Tools/Algol68toC/src/evaluator.a68";
A_config.translation_time = "Sun Sep 26 21:51:05 2004";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "SCVACTR (from seed file) ";
A_config.spec_change_time = "Sun Sep 26 21:51:05 2004";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS evaluator);
UEAALIB_a68config(LGAALIB_configinfo, XCVACTR);
 /* line 46: */
 /* line 51: */
 /* line 53: */
 /* line 55: */
 /* line 58: */
 /* line 59: */
 /* line 60: */
QDVACTR.fn.fn_global = JZQACTR_staticpartgenerator;
QDVACTR.nonlocals = A68_NIL;
PDVACTR.data[0] = QDVACTR;
 /* line 61: */
RDVACTR.fn.fn_global = LDVACTR_spareop;
RDVACTR.nonlocals = A68_NIL;
PDVACTR.data[1] = RDVACTR;
 /* line 62: */
SDVACTR.fn.fn_global = HARACTR_selectop;
SDVACTR.nonlocals = A68_NIL;
PDVACTR.data[2] = SDVACTR;
 /* line 63: */
TDVACTR.fn.fn_global = FBRACTR_copytoflex;
TDVACTR.nonlocals = A68_NIL;
PDVACTR.data[3] = TDVACTR;
 /* line 65: */
AEVACTR.fn.fn_global = WDVACTR_anonymous;
AEVACTR.nonlocals = A68_NIL;
PDVACTR.data[4] = AEVACTR;
 /* line 66: */
BEVACTR.fn.fn_global = QCRACTR_simpleindexop;
BEVACTR.nonlocals = A68_NIL;
PDVACTR.data[5] = BEVACTR;
 /* line 67: */
CEVACTR.fn.fn_global = OIRACTR_trimindexop;
CEVACTR.nonlocals = A68_NIL;
PDVACTR.data[6] = CEVACTR;
 /* line 68: */
DEVACTR.fn.fn_global = KNRACTR_dynamicgenerator;
DEVACTR.nonlocals = A68_NIL;
PDVACTR.data[7] = DEVACTR;
 /* line 70: */
LEVACTR.fn.fn_global = GEVACTR_anonymous;
LEVACTR.nonlocals = A68_NIL;
PDVACTR.data[8] = LEVACTR;
 /* line 71: */
MEVACTR.fn.fn_global = FCVACTR_dyadicsem;
MEVACTR.nonlocals = A68_NIL;
PDVACTR.data[9] = MEVACTR;
 /* line 72: */
NEVACTR.fn.fn_global = VXTACTR_monadicsem;
NEVACTR.nonlocals = A68_NIL;
PDVACTR.data[10] = NEVACTR;
 /* line 73: */
OEVACTR.fn.fn_global = ERRACTR_straighten;
OEVACTR.nonlocals = A68_NIL;
PDVACTR.data[11] = OEVACTR;
 /* line 75: */
VEVACTR.fn.fn_global = REVACTR_anonymous;
VEVACTR.nonlocals = A68_NIL;
PDVACTR.data[12] = VEVACTR;
 /* line 76: */
WEVACTR.fn.fn_global = VPRACTR_straightindexop;
WEVACTR.nonlocals = A68_NIL;
PDVACTR.data[13] = WEVACTR;
 /* line 77: */
XEVACTR.fn.fn_global = DVRACTR_assignop;
XEVACTR.nonlocals = A68_NIL;
PDVACTR.data[14] = XEVACTR;
 /* line 79: */
FFVACTR.fn.fn_global = AFVACTR_anonymous;
FFVACTR.nonlocals = A68_NIL;
PDVACTR.data[15] = FFVACTR;
 /* line 80: */
GFVACTR.fn.fn_global = GXRACTR_derefop;
GFVACTR.nonlocals = A68_NIL;
PDVACTR.data[16] = GFVACTR;
 /* line 81: */
HFVACTR.fn.fn_global = HYRACTR_callop;
HFVACTR.nonlocals = A68_NIL;
PDVACTR.data[17] = HFVACTR;
 /* line 82: */
IFVACTR.fn.fn_global = RESACTR_voidop;
IFVACTR.nonlocals = A68_NIL;
PDVACTR.data[18] = IFVACTR;
 /* line 83: */
JFVACTR.fn.fn_global = BGSACTR_niltomodeop;
JFVACTR.nonlocals = A68_NIL;
PDVACTR.data[19] = JFVACTR;
 /* line 84: */
KFVACTR.fn.fn_global = RGSACTR_gototoproc;
KFVACTR.nonlocals = A68_NIL;
PDVACTR.data[20] = KFVACTR;
 /* line 85: */
LFVACTR.fn.fn_global = EHSACTR_gototomode;
LFVACTR.nonlocals = A68_NIL;
PDVACTR.data[21] = LFVACTR;
 /* line 86: */
MFVACTR.fn.fn_global = FJSACTR_realtocomplex;
MFVACTR.nonlocals = A68_NIL;
PDVACTR.data[22] = MFVACTR;
 /* line 87: */
NFVACTR.fn.fn_global = VISACTR_inttoreal;
NFVACTR.nonlocals = A68_NIL;
PDVACTR.data[23] = NFVACTR;
 /* line 89: */
UFVACTR.fn.fn_global = QFVACTR_anonymous;
UFVACTR.nonlocals = A68_NIL;
PDVACTR.data[24] = UFVACTR;
 /* line 90: */
VFVACTR.fn.fn_global = XJSACTR_rowstorowrows;
VFVACTR.nonlocals = A68_NIL;
PDVACTR.data[25] = VFVACTR;
 /* line 91: */
WFVACTR.fn.fn_global = WKSACTR_vectortorow;
WFVACTR.nonlocals = A68_NIL;
PDVACTR.data[26] = WFVACTR;
 /* line 92: */
XFVACTR.fn.fn_global = HPSACTR_istructtovector;
XFVACTR.nonlocals = A68_NIL;
PDVACTR.data[27] = XFVACTR;
 /* line 93: */
YFVACTR.fn.fn_global = MLSACTR_modetostruct1mode;
YFVACTR.nonlocals = A68_NIL;
PDVACTR.data[28] = YFVACTR;
 /* line 94: */
ZFVACTR.fn.fn_global = BMSACTR_unitesimple;
ZFVACTR.nonlocals = A68_NIL;
PDVACTR.data[29] = ZFVACTR;
 /* line 95: */
AGVACTR.fn.fn_global = SNSACTR_uniteunion;
AGVACTR.nonlocals = A68_NIL;
PDVACTR.data[30] = AGVACTR;
 /* line 96: */
BGVACTR.fn.fn_global = ZQSACTR_istructtorow;
BGVACTR.nonlocals = A68_NIL;
PDVACTR.data[31] = BGVACTR;
 /* line 97: */
CGVACTR.fn.fn_global = UUSACTR_skiptomode;
CGVACTR.nonlocals = A68_NIL;
PDVACTR.data[32] = CGVACTR;
 /* line 98: */
PDVACTR.data[33] = QUSACTR_scalartovector;
 /* line 99: */
PDVACTR.data[34] = OUSACTR_scalartorow;
 /* line 100: */
DGVACTR.fn.fn_global = CVSACTR_deunite;
DGVACTR.nonlocals = A68_NIL;
PDVACTR.data[35] = DGVACTR;
 /* line 101: */
EGVACTR.fn.fn_global = RVSACTR_bitstorowbool;
EGVACTR.nonlocals = A68_NIL;
PDVACTR.data[36] = EGVACTR;
 /* line 102: */
FGVACTR.fn.fn_global = XWSACTR_vacuum;
FGVACTR.nonlocals = A68_NIL;
PDVACTR.data[37] = FGVACTR;
 /* line 103: */
GGVACTR.fn.fn_global = KXSACTR_ytypetom;
GGVACTR.nonlocals = A68_NIL;
PDVACTR.data[38] = GGVACTR;
 /* line 104: */
HGVACTR.fn.fn_global = QXSACTR_mtoxtype;
HGVACTR.nonlocals = A68_NIL;
PDVACTR.data[39] = HGVACTR;
 /* line 105: */
IGVACTR.fn.fn_global = LDVACTR_spareop;
IGVACTR.nonlocals = A68_NIL;
PDVACTR.data[40] = IGVACTR;
 /* line 106: */
JGVACTR.fn.fn_global = LDVACTR_spareop;
JGVACTR.nonlocals = A68_NIL;
PDVACTR.data[41] = JGVACTR;
 /* line 107: */
KGVACTR.fn.fn_global = LDVACTR_spareop;
KGVACTR.nonlocals = A68_NIL;
PDVACTR.data[42] = KGVACTR;
 /* line 108: */
LGVACTR.fn.fn_global = LDVACTR_spareop;
LGVACTR.nonlocals = A68_NIL;
PDVACTR.data[43] = LGVACTR;
 /* line 109: */
MGVACTR.fn.fn_global = LDVACTR_spareop;
MGVACTR.nonlocals = A68_NIL;
PDVACTR.data[44] = MGVACTR;
 /* line 110: */
NGVACTR.fn.fn_global = LDVACTR_spareop;
NGVACTR.nonlocals = A68_NIL;
PDVACTR.data[45] = NGVACTR;
 /* line 111: */
OGVACTR.fn.fn_global = LDVACTR_spareop;
OGVACTR.nonlocals = A68_NIL;
PDVACTR.data[46] = OGVACTR;
 /* line 112: */
PGVACTR.fn.fn_global = LDVACTR_spareop;
PGVACTR.nonlocals = A68_NIL;
PDVACTR.data[47] = PGVACTR;
 /* line 114: */
QGVACTR.fn.fn_global = LDVACTR_spareop;
QGVACTR.nonlocals = A68_NIL;
PDVACTR.data[48] = QGVACTR;
 /* line 116: */
RGVACTR.fn.fn_global = WXSACTR_staticgenerator;
RGVACTR.nonlocals = A68_NIL;
PDVACTR.data[49] = RGVACTR;
SGVACTR.fn.fn_global = ADVACTR_unimplementedop;
SGVACTR.nonlocals = A68_NIL;
PDVACTR.data[50] = SGVACTR;
UGVACTR_opersemantics = A_HIS1ARR(TGVACTR,PDVACTR,A68_31 ,51);
 /* line 119: */
 /* line 163: */
 /* line 184: */
 /* line 201: */
 /* line 202: */
 /* line 207: */
A_PROC_EXIT(DECS evaluator);
} 
#undef NL
/* end of translation of evaluator.a68 */
