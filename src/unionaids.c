/* UNAME:PRQACTR */
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
A68_INT  Parameters;
A_PAD_INT(PAD_5)
A68_INT  Result;
A_PAD_INT(PAD_6)
A68_BOOL  Hasdescriptors;
A_PAD_BOOL(PAD_7)
};
typedef struct A68t50  A68_50 ;    /* STRUCT(INT,INT,BOOL)  */
A_ISTRUCT(A68_CHAR ,32,A68t52);
typedef struct A68t52  A68_52 ;    /* STRUCT 32 CHAR */
struct A68t51{
A68_INT  Mode;
A_PAD_INT(PAD_8)
A68_INT  Offset;
A_PAD_INT(PAD_9)
struct A68t52  Name;
A_PAD_ISTRUCT(A68_52 ,PAD_10)
};
typedef struct A68t51  A68_51 ;    /* STRUCT(INT,INT,MODE52)  */
struct A68t54 ;

A_PROCEDURE(A68_VOID ,A68t53,(A68_INT ,struct A68t54 *),(A68_INT ,struct A68t54 *,void *));
typedef struct A68t53  A68_53 ;    /* PROC(INT) REF MODE54 */
A_VECTOR(A68_INT ,A68t54);
typedef struct A68t54  A68_54 ;    /* VECTOR [] INT */

A_PROCEDURE(A68_VOID ,A68t55,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t55  A68_55 ;    /* PROC(INT) MODE26 */

A_PROCEDURE(A68_VOID ,A68t56,(struct A68t51 *,A68_VC *),(struct A68t51 *,A68_VC *,void *));
typedef struct A68t56  A68_56 ;    /* PROC(REF MODE51) MODE26 */
struct A68t58 ;

A_PROCEDURE(A68_VOID ,A68t57,(A68_INT ,A68_VC ,struct A68t58 *),(A68_INT ,A68_VC ,struct A68t58 *,void *));
typedef struct A68t57  A68_57 ;    /* PROC(INT,MODE26) MODE58 */
struct A68t58{
struct A68t42  Name;
A_PAD_ISTRUCT(A68_42 ,PAD_11)
A68_INT  Mode;
A_PAD_INT(PAD_12)
};
typedef struct A68t58  A68_58 ;    /* STRUCT(MODE42,INT)  */

A_PROCEDURE(A68_INT ,A68t59,(A68_INT ),(A68_INT ,void *));
typedef struct A68t59  A68_59 ;    /* PROC(INT) INT */

A_PROCEDURE(A68_BOOL ,A68t60,(A68_INT ),(A68_INT ,void *));
typedef struct A68t60  A68_60 ;    /* PROC(INT) BOOL */
struct A68t62 ;

A_PROCEDURE(A68_VOID ,A68t61,(struct A68t62 ,A68_INT ),(struct A68t62 ,A68_INT ,void *));
typedef struct A68t61  A68_61 ;    /* PROC(REF MODE62,INT) VOID */
A_ROW(struct A68t63 ,A68t62,1);
typedef struct A68t62  A68_62 ;    /* [] MODE63 */
struct A68t73{
A68_INT  Mode;
A_PAD_INT(PAD_13)
};
typedef struct A68t73  A68_73 ;    /* STRUCT(INT)  */
struct A68t63 { A68_INT mode; union {
A68_INT  mode1;
struct A68t64 * mode2;
struct A68t65 * mode3;
struct A68t66 * mode4;
struct A68t67 * mode5;
struct A68t68 * mode6;
struct A68t69 * mode7;
struct A68t70 * mode8;
struct A68t71 * mode9;
struct A68t72 * mode10;
struct A68t73  mode11;
} data; };
typedef struct A68t63  A68_63 ;    /* UNION(INT,REF MODE64,REF MODE65,REF MODE66,REF MODE67,REF MODE68,REF MODE69,REF MODE70,REF MODE71,REF MODE72,MODE73)  */
struct A68t64{
A68_INT  Rdenno;
A_PAD_INT(PAD_14)
struct A68t77 * Modelist;
};
typedef struct A68t64  A68_64 ;    /* STRUCT(INT,REF MODE77)  */
struct A68t65{
A68_INT  Deproc;
A_PAD_INT(PAD_15)
struct A68t77 * Pars;
};
typedef struct A68t65  A68_65 ;    /* STRUCT(INT,REF MODE77)  */
struct A68t66{
A68_INT  Rdenno;
A_PAD_INT(PAD_16)
A68_INT  Deflex;
A_PAD_INT(PAD_17)
struct A68t76 * Sels;
};
typedef struct A68t66  A68_66 ;    /* STRUCT(INT,INT,REF MODE76)  */
struct A68t67{
A68_INT  Rdenno;
A_PAD_INT(PAD_18)
A68_INT  Imode;
A_PAD_INT(PAD_19)
A68_INT  Length;
A_PAD_INT(PAD_20)
A68_INT  Deflex;
A_PAD_INT(PAD_21)
};
typedef struct A68t67  A68_67 ;    /* STRUCT(INT,INT,INT,INT)  */
struct A68t68{
A68_INT  Deproc;
A_PAD_INT(PAD_22)
};
typedef struct A68t68  A68_68 ;    /* STRUCT(INT)  */
struct A68t69{
A68_INT  Rdenno;
A_PAD_INT(PAD_23)
A68_INT  Vecmode;
A_PAD_INT(PAD_24)
A68_INT  Deflex;
A_PAD_INT(PAD_25)
};
typedef struct A68t69  A68_69 ;    /* STRUCT(INT,INT,INT)  */
struct A68t70{
A68_INT  Rdenno;
A_PAD_INT(PAD_26)
A68_INT  Mode;
A_PAD_INT(PAD_27)
A68_INT  Nods;
A_PAD_INT(PAD_28)
A68_INT  Deflex;
A_PAD_INT(PAD_29)
};
typedef struct A68t70  A68_70 ;    /* STRUCT(INT,INT,INT,INT)  */
struct A68t71{
A68_INT  Mode;
A_PAD_INT(PAD_30)
struct A68t75 * Stenlist;
};
typedef struct A68t71  A68_71 ;    /* STRUCT(INT,REF MODE75)  */
struct A68t72{
A68_INT  Mode;
A_PAD_INT(PAD_31)
A68_INT  Modeproc;
A_PAD_INT(PAD_32)
struct A68t74 * El;
};
typedef struct A68t72  A68_72 ;    /* STRUCT(INT,INT,REF MODE74)  */
struct A68t74{
struct A68t72 * Am;
struct A68t74 * Rest;
};
typedef struct A68t74  A68_74 ;    /* STRUCT(REF MODE72,REF MODE74)  */
struct A68t75{
A68_INT  Mode;
A_PAD_INT(PAD_33)
A68_INT  Rdenno;
A_PAD_INT(PAD_34)
struct A68t75 * Rest;
};
typedef struct A68t75  A68_75 ;    /* STRUCT(INT,INT,REF MODE75)  */
struct A68t76{
A68_INT  Mode;
A_PAD_INT(PAD_35)
A68_INT  Fieldno;
A_PAD_INT(PAD_36)
struct A68t52  Name;
A_PAD_ISTRUCT(A68_52 ,PAD_37)
struct A68t76 * Rest;
};
typedef struct A68t76  A68_76 ;    /* STRUCT(INT,INT,MODE52,REF MODE76)  */
struct A68t77{
A68_INT  Mode;
A_PAD_INT(PAD_38)
struct A68t77 * Rest;
};
typedef struct A68t77  A68_77 ;    /* STRUCT(INT,REF MODE77)  */

A_PROCEDURE(A68_VOID ,A68t78,(A68_INT ,struct A68t50 *),(A68_INT ,struct A68t50 *,void *));
typedef struct A68t78  A68_78 ;    /* PROC(INT) MODE50 */
struct A68t80 ;

A_PROCEDURE(A68_VOID ,A68t79,(A68_INT ,struct A68t80 *),(A68_INT ,struct A68t80 *,void *));
typedef struct A68t79  A68_79 ;    /* PROC(INT) REF MODE80 */
A_VECTOR(struct A68t51 ,A68t80);
typedef struct A68t80  A68_80 ;    /* VECTOR [] MODE51 */

A_PROCEDURE(A68_INT ,A68t81,(A68_INT ,A68_BOOL ),(A68_INT ,A68_BOOL ,void *));
typedef struct A68t81  A68_81 ;    /* PROC(INT,BOOL) INT */

A_PROCEDURE(A68_VOID ,A68t82,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t82  A68_82 ;    /* PROC(INT,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t83,(A68_INT ,A68_INT ,A68_VC *),(A68_INT ,A68_INT ,A68_VC *,void *));
typedef struct A68t83  A68_83 ;    /* PROC(INT,INT) MODE26 */
struct A68t86{
A68_INT  Rdenno;
A_PAD_INT(PAD_39)
};
typedef struct A68t86  A68_86 ;    /* STRUCT(INT)  */
struct A68t87{
A68_INT  Idno;
A_PAD_INT(PAD_40)
};
typedef struct A68t87  A68_87 ;    /* STRUCT(INT)  */
struct A68t88{
A68_INT  Labno;
A_PAD_INT(PAD_41)
};
typedef struct A68t88  A68_88 ;    /* STRUCT(INT)  */
struct A68t89{
A68_INT  Nse;
A_PAD_INT(PAD_42)
};
typedef struct A68t89  A68_89 ;    /* STRUCT(INT)  */
struct A68t90{
A68_INT  Fn;
A_PAD_INT(PAD_43)
A68_INT  Param;
A_PAD_INT(PAD_44)
struct A68t91 * Operands;
};
typedef struct A68t90  A68_90 ;    /* STRUCT(INT,INT,REF MODE91)  */
struct A68t85 { A68_INT mode; union {
A68_LBITS  mode1;
struct A68t86  mode2;
struct A68t87  mode4;
struct A68t58  mode5;
A68_VC  mode6;
struct A68t88  mode7;
struct A68t89  mode8;
struct A68t90  mode9;
} data; };
typedef struct A68t85  A68_85 ;    /* UNION(LONG BITS,MODE86,VOID,MODE87,MODE58,MODE26,MODE88,MODE89,MODE90)  */
struct A68t84{
A68_INT  Mode;
A_PAD_INT(PAD_45)
A68_BITS  Info;
A_PAD_BITS(PAD_46)
struct A68t85  Extra;
};
typedef struct A68t84  A68_84 ;    /* STRUCT(INT,BITS,MODE85)  */
struct A68t91{
struct A68t84  Value;
struct A68t91 * Rest;
};
typedef struct A68t91  A68_91 ;    /* STRUCT(MODE84,REF MODE91)  */

A_PROCEDURE(A68_BOOL ,A68t92,(struct A68t84 *,struct A68t84 *),(struct A68t84 *,struct A68t84 *,void *));
typedef struct A68t92  A68_92 ;    /* PROC(REF MODE84,REF MODE84) BOOL */

A_PROCEDURE(A68_BOOL ,A68t93,(struct A68t84 *),(struct A68t84 *,void *));
typedef struct A68t93  A68_93 ;    /* PROC(REF MODE84) BOOL */

A_PROCEDURE(A68_BOOL ,A68t94,(struct A68t84 *,A68_LBITS ),(struct A68t84 *,A68_LBITS ,void *));
typedef struct A68t94  A68_94 ;    /* PROC(REF MODE84,LONG BITS) BOOL */

A_PROCEDURE(A68_LBITS ,A68t95,(struct A68t84 *),(struct A68t84 *,void *));
typedef struct A68t95  A68_95 ;    /* PROC(REF MODE84) LONG BITS */

A_PROCEDURE(A68_VOID ,A68t96,(struct A68t84 *,A68_VC *),(struct A68t84 *,A68_VC *,void *));
typedef struct A68t96  A68_96 ;    /* PROC(REF MODE84) MODE26 */

A_PROCEDURE(struct A68t84 *,A68t97,(struct A68t84 *,A68_INT ),(struct A68t84 *,A68_INT ,void *));
typedef struct A68t97  A68_97 ;    /* PROC(REF MODE84,INT) REF MODE84 */

A_PROCEDURE(A68_INT ,A68t98,(struct A68t90 ),(struct A68t90 ,void *));
typedef struct A68t98  A68_98 ;    /* PROC(MODE90) INT */
struct A68t99{
struct A68t84 * Value;
struct A68t100 * End;
A68_INT  Type;
A_PAD_INT(PAD_47)
};
typedef struct A68t99  A68_99 ;    /* STRUCT(REF MODE84,REF MODE100,INT)  */
struct A68t100{
struct A68t42  Name;
A_PAD_ISTRUCT(A68_42 ,PAD_48)
A68_BOOL  Set;
A_PAD_BOOL(PAD_49)
};
typedef struct A68t100  A68_100 ;    /* STRUCT(MODE42,BOOL)  */

A_PROCEDURE(A68_BOOL ,A68t101,(struct A68t84 *,A68_BITS ),(struct A68t84 *,A68_BITS ,void *));
typedef struct A68t101  A68_101 ;    /* PROC(REF MODE84,BITS) BOOL */

A_PROCEDURE(struct A68t84 *,A68t102,(struct A68t91 *,A68_INT ),(struct A68t91 *,A68_INT ,void *));
typedef struct A68t102  A68_102 ;    /* PROC(REF MODE91,INT) REF MODE84 */

A_PROCEDURE(A68_INT ,A68t103,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t103  A68_103 ;    /* PROC(INT,INT) INT */

A_PROCEDURE(struct A68t91 *,A68t104,(struct A68t91 *),(struct A68t91 *,void *));
typedef struct A68t104  A68_104 ;    /* PROC(REF MODE91) REF MODE91 */
struct A68t106 ;

A_PROCEDURE(struct A68t84 *,A68t105,(A68_INT ,A68_INT ,A68_BITS ,struct A68t106 ),(A68_INT ,A68_INT ,A68_BITS ,struct A68t106 ,void *));
typedef struct A68t105  A68_105 ;    /* PROC(INT,INT,BITS,MODE106) REF MODE84 */
A_VECTOR(struct A68t84 *,A68t106);
typedef struct A68t106  A68_106 ;    /* VECTOR [] REF MODE84 */

A_PROCEDURE(A68_VOID ,A68t107,(struct A68t84 *),(struct A68t84 *,void *));
typedef struct A68t107  A68_107 ;    /* PROC(REF MODE84) VOID */

A_PROCEDURE(A68_VOID ,A68t108,(struct A68t84 *,A68_BOOL ,A68_VC *),(struct A68t84 *,A68_BOOL ,A68_VC *,void *));
typedef struct A68t108  A68_108 ;    /* PROC(REF MODE84,BOOL) MODE26 */

A_PROCEDURE(A68_LINT ,A68t109,(struct A68t84 ),(struct A68t84 ,void *));
typedef struct A68t109  A68_109 ;    /* PROC(MODE84) LONG INT */

A_PROCEDURE(A68_VOID ,A68t110,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t110  A68_110 ;    /* PROC(MODE26) MODE26 */
struct A68t111 { A68_INT mode; union {
struct A68t84 * mode1;
A68_VC  mode2;
struct A68t58  mode3;
} data; };
typedef struct A68t111  A68_111 ;    /* UNION(REF MODE84,MODE26,MODE58)  */

A_PROCEDURE(A68_VOID ,A68t112,(struct A68t111 ,A68_VC *),(struct A68t111 ,A68_VC *,void *));
typedef struct A68t112  A68_112 ;    /* PROC(MODE111) MODE26 */
struct A68t114 ;

A_PROCEDURE(A68_VOID ,A68t113,(struct A68t114 ,A68_VC *),(struct A68t114 ,A68_VC *,void *));
typedef struct A68t113  A68_113 ;    /* PROC(MODE114) MODE26 */
A_VECTOR(struct A68t111 ,A68t114);
typedef struct A68t114  A68_114 ;    /* VECTOR [] MODE111 */

A_PROCEDURE(A68_VOID ,A68t115,(A68_VC ,struct A68t114 ,A68_VC *),(A68_VC ,struct A68t114 ,A68_VC *,void *));
typedef struct A68t115  A68_115 ;    /* PROC(MODE26,MODE114) MODE26 */

A_PROCEDURE(A68_VOID ,A68t116,(struct A68t114 ),(struct A68t114 ,void *));
typedef struct A68t116  A68_116 ;    /* PROC(MODE114) VOID */

A_PROCEDURE(A68_VOID ,A68t117,(A68_VC ,A68_INT ,struct A68t114 ,struct A68t58 *),(A68_VC ,A68_INT ,struct A68t114 ,struct A68t58 *,void *));
typedef struct A68t117  A68_117 ;    /* PROC(MODE26,INT,MODE114) MODE58 */

A_PROCEDURE(struct A68t84 *,A68t118,(struct A68t84 *),(struct A68t84 *,void *));
typedef struct A68t118  A68_118 ;    /* PROC(REF MODE84) REF MODE84 */

A_PROCEDURE(struct A68t84 *,A68t119,(A68_VC ,struct A68t84 *),(A68_VC ,struct A68t84 *,void *));
typedef struct A68t119  A68_119 ;    /* PROC(MODE26,REF MODE84) REF MODE84 */

A_PROCEDURE(A68_VOID ,A68t120,(A68_BOOL ,A68_VC *),(A68_BOOL ,A68_VC *,void *));
typedef struct A68t120  A68_120 ;    /* PROC(BOOL) MODE26 */

A_PROCEDURE(A68_VOID ,A68t121,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t121  A68_121 ;    /* PROC(MODE26) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t122,(struct A68t32 ),(struct A68t32 ,void *));
typedef struct A68t122  A68_122 ;    /* PROC(MODE32) VOID */

A_PROCEDURE(A68_VOID ,A68t123,(struct A68t43 ),(struct A68t43 ,void *));
typedef struct A68t123  A68_123 ;    /* PROC(MODE43) VOID */

A_PROCEDURE(A68_VOID ,A68t124,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t124  A68_124 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,64,A68t125);
typedef struct A68t125  A68_125 ;    /* STRUCT 64 CHAR */
A_ROW(A68_INT ,A68t126,1);
typedef struct A68t126  A68_126 ;    /* [] INT */

A_PROCEDURE(A68_VOID ,A68t127,(A68_INT ,struct A68t54 ,struct A68t126 *),(A68_INT ,struct A68t54 ,struct A68t126 *,void *));
typedef struct A68t127  A68_127 ;    /* PROC(INT,REF MODE54) MODE126 */

A_PROCEDURE(A68_VOID ,A68t128,(A68_BOOL ,struct A68t126 *),(A68_BOOL ,struct A68t126 *,void *));
typedef struct A68t128  A68_128 ;    /* PROC(BOOL) MODE126 */
A_ISTRUCT(A68_CHAR ,39,A68t129);
typedef struct A68t129  A68_129 ;    /* STRUCT 39 CHAR */

A_PROCEDURE(A68_INT ,A68t130,(struct A68t54 ,struct A68t54 ),(struct A68t54 ,struct A68t54 ,void *));
typedef struct A68t130  A68_130 ;    /* PROC(REF MODE54,REF MODE54) INT */

A_PROCEDURE(A68_VOID ,A68t131,(struct A68t54 ,struct A68t54 ,A68_VC *),(struct A68t54 ,struct A68t54 ,A68_VC *,void *));
typedef struct A68t131  A68_131 ;    /* PROC(REF MODE54,REF MODE54) REF MODE26 */
A_ISTRUCT(A68_CHAR ,40,A68t132);
typedef struct A68t132  A68_132 ;    /* STRUCT 40 CHAR */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from values --- */
/* --- End of imports from values --- */


/* --- Imports from modes --- */
extern A68_53  HUMACTR_constituents;
/* --- End of imports from modes --- */


/* --- Imports from environment --- */
extern A68_VOID  PXIACTR_assert(A68_VC ,A68_BOOL );
/* --- End of imports from environment --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void JRPACTR(void);   /* values */
extern void MLMACTR(void);   /* modes */
extern void HPIACTR(void);   /* environment */
/* --- end of DECS initialisation functions --- */
static A68_125   TRQACTR = {"$Id: unionaids.c,v 1.5.2.4 2004/09/27 03:04:24 teshields Exp $"}; 
A_GISVEC(A68_VC ,URQACTR,TRQACTR,64)
static A68_129   WSQACTR = {"UNIONAIDS - find mode: mode not present"}; 
A_GISVEC(A68_VC ,XSQACTR,WSQACTR,39)
static A68_132   LUQACTR = {"too many modes in union for table change"}; 
A_GISVEC(A68_VC ,MUQACTR,LUQACTR,40)
typedef struct   /* env of non-global proc */
{
A68_54  U;
} BSQACTR_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  STQACTR_fromlength;
A_PAD_INT(PAD_50)
} XTQACTR_generator;

A68_VOID  XRQACTR_findoccurances(A68_INT  Mode, A68_54  U, A68_126  *ReturnedValue);

A_STATIC A68_VOID  ASQACTR_generator(A68_BOOL  YRQACTR_anonymous, A68_126  *ReturnedValue, void *NonLocals);

A68_INT  PSQACTR_findmode(A68_INT  Find, A68_INT  Inmode);

A68_INT  BTQACTR_findints(A68_54  A, A68_54  B);

A68_VOID  RTQACTR_uniontouniontable(A68_54  From, A68_54  To, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  WTQACTR_generator(A68_BOOL  UTQACTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  ASQACTR_generator(A68_BOOL  YRQACTR_anonymous, A68_126  *ReturnedValue, void *NonLocals)
#define NL(x) (((BSQACTR_generator *)NonLocals)->x)
{ 
A68_126  CSQACTR;  /* clause result */
A68_126  DSQACTR;  /* OPERATORS - dynamic generator */
{ 
DSQACTR.dim[0].upb = NL(U).upb ;
DSQACTR.dim[0].lwb = 1 ;
A_1INITSTRIDES(DSQACTR) ;
( YRQACTR_anonymous? A_R1LOC(A68_INT ,DSQACTR): A_R1HEAP(A68_INT ,DSQACTR) );
CSQACTR = DSQACTR;
} 
*ReturnedValue = (CSQACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  WTQACTR_generator(A68_BOOL  UTQACTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((XTQACTR_generator *)NonLocals)->x)
{ 
A68_VC  YTQACTR;  /* clause result */
A68_VC  ZTQACTR;  /* OPERATORS - dynamic generator */
{ 
ZTQACTR.upb = NL(STQACTR_fromlength) ;
( UTQACTR_anonymous? A_VLOC(A68_CHAR ,ZTQACTR): A_VHEAP(A68_CHAR ,ZTQACTR) );
YTQACTR = ZTQACTR;
} 
*ReturnedValue = (YTQACTR);
return;
} 
#undef NL

A68_VOID  XRQACTR_findoccurances(A68_INT  Mode, A68_54  U, A68_126  *ReturnedValue)
{ 
A68_128  ZRQACTR_generator;   /* proc value of non-global proc */
A68_126  FSQACTR;  /* avoid structure result */
A68_126  ESQACTR_indicies;
A68_INT  GSQACTR_numberindicies;
A68_INT  HSQACTR_i;
A68_INT  ISQACTR;  /* to part of loop */
A68_INT  JSQACTR;  /* YIELD */
A68_INT * KSQACTR;  /* YIELD */
A68_126  LSQACTR;  /* clause result */
A68_126  MSQACTR;  /* OPERATORS - trim index */
A_PROC_ENTRY(findoccurances);
 /* line 57: */
 /* line 58: */
{ 
A_CLOSURE( ZRQACTR_generator, ASQACTR_generator, BSQACTR_generator );
(( BSQACTR_generator * ) ( ZRQACTR_generator.nonlocals )) -> U = U;
A_CALLPROC(ZRQACTR_generator,(A68_TRUE, &FSQACTR),(A68_TRUE, &FSQACTR,(ZRQACTR_generator).nonlocals));
ESQACTR_indicies = FSQACTR;
 /* line 59: */
GSQACTR_numberindicies = 0;
 /* line 60: */
 /* line 61: */
ISQACTR = U.upb;
for ( HSQACTR_i = 1;
HSQACTR_i <= ISQACTR;
HSQACTR_i += 1 )
{ 
 /* line 62: */
 /* line 63: */
if ( (Mode==(*(&A_VINDEX(U,HSQACTR_i)))) )
{ 
 /* line 64: */
 /* line 65: */
JSQACTR = GSQACTR_numberindicies+=1 ;
KSQACTR = (&A_R1INDEX(ESQACTR_indicies,JSQACTR)) ;
(*KSQACTR) = HSQACTR_i;
} 
}
 /* line 66: */
 /* line 67: */
LSQACTR = A_R1TRIM(MSQACTR,(ESQACTR_indicies),A_RTSCRIPT(&(MSQACTR.dim[0]),&((ESQACTR_indicies).dim[0]),(ESQACTR_indicies).dim[0].lwb,GSQACTR_numberindicies,1));
} 
A_PROC_EXIT(findoccurances);
*ReturnedValue = (LSQACTR);
return;
} 
#undef NL

A68_INT  PSQACTR_findmode(A68_INT  Find, A68_INT  Inmode)
{ 
A68_54  QSQACTR;  /* avoid structure result */
A68_126  RSQACTR;  /* OPERATORS - vector -> row */
A68_126  SSQACTR_a;
A68_INT  TSQACTR_pos;
A68_INT  USQACTR_i;
A68_INT  VSQACTR;  /* to part of loop */
A68_INT  YSQACTR;  /* clause result */
A_PROC_ENTRY(findmode);
 /* line 70: */
 /* line 71: */
{ 
A_CALLPROC(HUMACTR_constituents,(Inmode, &QSQACTR),(Inmode, &QSQACTR,(HUMACTR_constituents).nonlocals));
SSQACTR_a = A_VECARR(QSQACTR,RSQACTR);
 /* line 72: */
TSQACTR_pos = 1;
 /* line 73: */
VSQACTR = SSQACTR_a.dim[0].upb;
for ( USQACTR_i = 1;
USQACTR_i <= VSQACTR;
USQACTR_i += 1 )
{ 
if ( !((A_R1INDEX(SSQACTR_a,USQACTR_i)!=Find)) ) break;
TSQACTR_pos+=1;
}
 /* line 74: */
PXIACTR_assert(XSQACTR, (TSQACTR_pos<=SSQACTR_a.dim[0].upb));
 /* line 75: */
 /* line 76: */
YSQACTR = TSQACTR_pos;
} 
A_PROC_EXIT(findmode);
return( YSQACTR );
} 
#undef NL

A68_INT  BTQACTR_findints(A68_54  A, A68_54  B)
{ 
A68_INT  CTQACTR_lengtha;
A68_INT  DTQACTR_lengthb;
A68_INT  ETQACTR_find;
A68_INT  FTQACTR_i;
A68_INT  GTQACTR;  /* to part of loop */
A68_BOOL  HTQACTR_equal;
A68_INT  ITQACTR_j;
A68_INT  JTQACTR;  /* to part of loop */
A68_126  KTQACTR;  /* avoid structure result */
A68_INT  LTQACTR;  /* YIELD */
A68_BOOL  MTQACTR;  /* clause result */
A68_BOOL  NTQACTR;  /* clause result */
A68_INT  OTQACTR;  /* clause result */
A_PROC_ENTRY(findints);
 /* line 85: */
 /* line 86: */
{ 
CTQACTR_lengtha = A.upb;
DTQACTR_lengthb = B.upb;
 /* line 87: */
ETQACTR_find = 0;
 /* line 88: */
 /* line 89: */
GTQACTR = ((DTQACTR_lengthb-CTQACTR_lengtha)+1);
for ( FTQACTR_i = 1;
FTQACTR_i <= GTQACTR;
FTQACTR_i += 1 )
{ 
 /* line 90: */
HTQACTR_equal = A68_FALSE;
 /* line 91: */
 /* line 92: */
JTQACTR = CTQACTR_lengtha;
for ( ITQACTR_j = 1;
ITQACTR_j <= JTQACTR;
ITQACTR_j += 1 )
{ 
 /* line 93: */
 /* line 94: */
 /* line 95: */
 /* line 96: */
XRQACTR_findoccurances( (*(&A_VINDEX(A,ITQACTR_j))), B, &KTQACTR );
LTQACTR = 1 ;
if ( !(HTQACTR_equal = (A_R1INDEX(KTQACTR,LTQACTR)==((FTQACTR_i+ITQACTR_j)-1))) ) break;
/*SKIP*/;
}
 /* line 97: */
 /* line 98: */
if ( HTQACTR_equal )
{ 
ETQACTR_find = FTQACTR_i;
 /* line 99: */
MTQACTR = A68_FALSE;
} 
else
{ 
 /* line 100: */
 /* line 101: */
MTQACTR = A68_TRUE;
} 
 /* line 102: */
NTQACTR = MTQACTR;
if ( !NTQACTR ) break;
/*SKIP*/;
}
 /* line 103: */
 /* line 104: */
OTQACTR = ETQACTR_find;
} 
A_PROC_EXIT(findints);
return( OTQACTR );
} 
#undef NL

A68_VOID  RTQACTR_uniontouniontable(A68_54  From, A68_54  To, A68_VC  *ReturnedValue)
{ 
A68_INT  STQACTR_fromlength;
A68_INT  TTQACTR_tolength;
A68_120  VTQACTR_generator;   /* proc value of non-global proc */
A68_VC  AUQACTR;  /* avoid structure result */
A68_VC  BUQACTR_table;
A68_INT  CUQACTR_i;
A68_INT  DUQACTR;  /* to part of loop */
A68_CHAR * EUQACTR;  /* YIELD */
A68_INT  FUQACTR_fromi;
A68_INT  GUQACTR;  /* to part of loop */
A68_INT  HUQACTR_frommode;
A68_INT  IUQACTR_toi;
A68_INT  JUQACTR;  /* to part of loop */
A68_INT  KUQACTR_tomode;
A68_CHAR * NUQACTR;  /* YIELD */
A68_BOOL  OUQACTR;  /* clause result */
A68_BOOL  PUQACTR;  /* clause result */
A68_VC  QUQACTR;  /* clause result */
A_PROC_ENTRY(uniontouniontable);
 /* line 119: */
 /* line 120: */
{ 
STQACTR_fromlength = From.upb;
TTQACTR_tolength = To.upb;
 /* line 121: */
A_CLOSURE( VTQACTR_generator, WTQACTR_generator, XTQACTR_generator );
(( XTQACTR_generator * ) ( VTQACTR_generator.nonlocals )) -> STQACTR_fromlength = STQACTR_fromlength;
A_CALLPROC(VTQACTR_generator,(A68_FALSE, &AUQACTR),(A68_FALSE, &AUQACTR,(VTQACTR_generator).nonlocals));
BUQACTR_table = AUQACTR;
 /* line 122: */
 /* line 123: */
DUQACTR = STQACTR_fromlength;
for ( CUQACTR_i = 1;
CUQACTR_i <= DUQACTR;
CUQACTR_i += 1 )
{ 
 /* line 124: */
EUQACTR = (&A_VINDEX(BUQACTR_table,CUQACTR_i)) ;
(*EUQACTR) = (A68_SSBITS)0;
}
 /* line 125: */
 /* line 126: */
GUQACTR = STQACTR_fromlength;
for ( FUQACTR_fromi = 1;
FUQACTR_fromi <= GUQACTR;
FUQACTR_fromi += 1 )
{ 
 /* line 127: */
HUQACTR_frommode = (*(&A_VINDEX(From,FUQACTR_fromi)));
 /* line 128: */
 /* line 129: */
JUQACTR = TTQACTR_tolength;
for ( IUQACTR_toi = 1;
IUQACTR_toi <= JUQACTR;
IUQACTR_toi += 1 )
{ 
 /* line 130: */
KUQACTR_tomode = (*(&A_VINDEX(To,IUQACTR_toi)));
 /* line 131: */
 /* line 132: */
 /* line 133: */
if ( (HUQACTR_frommode==KUQACTR_tomode) )
{ 
PXIACTR_assert(MUQACTR, (IUQACTR_toi<256));
 /* line 134: */
NUQACTR = (&A_VINDEX(BUQACTR_table,FUQACTR_fromi)) ;
(*NUQACTR) = (A68_SSBITS)IUQACTR_toi;
 /* line 135: */
 /* line 136: */
OUQACTR = A68_FALSE;
} 
else
{ 
 /* line 137: */
 /* line 138: */
OUQACTR = A68_TRUE;
} 
 /* line 139: */
PUQACTR = OUQACTR;
if ( !PUQACTR ) break;
/*SKIP*/;
}
 /* line 140: */
}
 /* line 141: */
 /* line 142: */
QUQACTR = BUQACTR_table;
} 
A_PROC_EXIT(uniontouniontable);
*ReturnedValue = (QUQACTR);
return;
} 
#undef NL
 /* line 1: */
 /* line 3: */
void QRQACTR(void)   /* initialise DECS unionaids */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/shields/projects/Algol68/Tools/Algol68toC/src/a68toc","-v","-uname","seedfile","-lib","/home/shields/projects/Algol68/Tools/Algol68toC/a68config","-dir","/home/shields/projects/Algol68/Tools/Algol68toC/a68config","-dir","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel","-dir",".","unionaids.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/shields/projects/Algol68/Tools/Algol68toC/a68config","A68_CDIR=","A68_DIR=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/shields/projects/Algol68/Tools/Algol68toC/a68config/a68config.m","./values.m","./modes.m","./environment.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
JRPACTR();   /* USE values */
MLMACTR();   /* USE modes */
HPIACTR();   /* USE environment */
/* --- Initialise configuration information */
A_config.source_file = "/home/shields/projects/Algol68/Tools/Algol68toC/src/unionaids.a68";
A_config.translation_time = "Sun Sep 26 21:51:02 2004";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "PRQACTR (from seed file) ";
A_config.spec_change_time = "Sun Sep 26 21:51:02 2004";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS unionaids);
UEAALIB_a68config(LGAALIB_configinfo, URQACTR);
 /* line 51: */
 /* line 53: */
 /* line 69: */
 /* line 78: */
 /* line 106: */
 /* line 144: */
 /* line 146: */
 /* line 148: */
/*SKIP*/;
A_PROC_EXIT(DECS unionaids);
} 
#undef NL
/* end of translation of unionaids.a68 */
