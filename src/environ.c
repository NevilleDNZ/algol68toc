/* UNAME:JNLACTR */
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
A68_INT  Level;
A_PAD_INT(PAD_5)
A68_INT  Block;
A_PAD_INT(PAD_6)
};
typedef struct A68t50  A68_50 ;    /* STRUCT(INT,INT)  */
struct A68t51{
A68_INT  Decno;
A_PAD_INT(PAD_7)
struct A68t51 * Rest;
};
typedef struct A68t51  A68_51 ;    /* STRUCT(INT,REF MODE51)  */
struct A68t53{
A68_INT  Level;
A_PAD_INT(PAD_8)
A68_INT  Block;
A_PAD_INT(PAD_9)
A68_INT  Rdenno;
A_PAD_INT(PAD_10)
struct A68t51 * Nonlocals;
};
typedef struct A68t53  A68_53 ;    /* STRUCT(INT,INT,INT,REF MODE51)  */
struct A68t52{
struct A68t53  Env;
struct A68t52 * Rest;
};
typedef struct A68t52  A68_52 ;    /* STRUCT(MODE53,REF MODE52)  */
struct A68t54{
A68_INT  Mode;
A_PAD_INT(PAD_11)
A68_INT  Cvariabletype;
A_PAD_INT(PAD_12)
struct A68t50  Environ;
A68_VC  Name;
A68_VC  C_name;
struct A68t42  Prefix;
A_PAD_ISTRUCT(A68_42 ,PAD_13)
A68_BITS  Flags;
A_PAD_BITS(PAD_14)
A68_VC  Definition;
A68_VC  Rhs;
};
typedef struct A68t54  A68_54 ;    /* STRUCT(INT,INT,MODE50,REF MODE26,REF MODE26,MODE42,BITS,REF MODE26,REF MODE26)  */
struct A68t55{
A68_INT  Mode;
A_PAD_INT(PAD_15)
A68_INT  Resultmode;
A_PAD_INT(PAD_16)
A68_INT  Declevel;
A_PAD_INT(PAD_17)
struct A68t50  Environ;
A68_VC  Name;
struct A68t42  Prefix;
A_PAD_ISTRUCT(A68_42 ,PAD_18)
struct A68t42  Fnprefix;
A_PAD_ISTRUCT(A68_42 ,PAD_19)
struct A68t42  Envprefix;
A_PAD_ISTRUCT(A68_42 ,PAD_20)
A68_BITS  Flags;
A_PAD_BITS(PAD_21)
};
typedef struct A68t55  A68_55 ;    /* STRUCT(INT,INT,INT,MODE50,REF MODE26,MODE42,MODE42,MODE42,BITS)  */
struct A68t57{
struct A68t42  Name;
A_PAD_ISTRUCT(A68_42 ,PAD_22)
A68_BOOL  Set;
A_PAD_BOOL(PAD_23)
};
typedef struct A68t57  A68_57 ;    /* STRUCT(MODE42,BOOL)  */
struct A68t56{
struct A68t57  Label;
struct A68t50  Environ;
A68_VC  Name;
struct A68t42  Prefix;
A_PAD_ISTRUCT(A68_42 ,PAD_24)
A68_BITS  Flags;
A_PAD_BITS(PAD_25)
A68_INT  Alias;
A_PAD_INT(PAD_26)
};
typedef struct A68t56  A68_56 ;    /* STRUCT(MODE57,MODE50,REF MODE26,MODE42,BITS,INT)  */

A_PROCEDURE(struct A68t54 *,A68t58,(A68_INT ),(A68_INT ,void *));
typedef struct A68t58  A68_58 ;    /* PROC(INT) REF MODE54 */

A_PROCEDURE(A68_VOID ,A68t59,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t59  A68_59 ;    /* PROC(REF MODE26) MODE26 */

A_PROCEDURE(A68_VOID ,A68t60,(A68_VC ,struct A68t42 ,A68_INT ,A68_INT ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_VC ,A68_VC ),(A68_VC ,struct A68t42 ,A68_INT ,A68_INT ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_VC ,A68_VC ,void *));
typedef struct A68t60  A68_60 ;    /* PROC(REF MODE26,MODE42,INT,INT,BOOL,BOOL,BOOL,BOOL,BOOL,REF MODE26,REF MODE26) VOID */
A_ROW(struct A68t54 ,A68t61,1);
typedef struct A68t61  A68_61 ;    /* [] MODE54 */
A_ROW(struct A68t55 ,A68t62,1);
typedef struct A68t62  A68_62 ;    /* [] MODE55 */
A_ROW(struct A68t56 ,A68t63,1);
typedef struct A68t63  A68_63 ;    /* [] MODE56 */

A_PROCEDURE(A68_BOOL ,A68t64,(A68_INT ),(A68_INT ,void *));
typedef struct A68t64  A68_64 ;    /* PROC(INT) BOOL */

A_PROCEDURE(A68_VOID ,A68t65,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t65  A68_65 ;    /* PROC(INT) MODE26 */
struct A68t67 ;

A_PROCEDURE(A68_VOID ,A68t66,(A68_INT ,A68_INT ,A68_INT ,A68_INT ,struct A68t67 ),(A68_INT ,A68_INT ,A68_INT ,A68_INT ,struct A68t67 ,void *));
typedef struct A68t66  A68_66 ;    /* PROC(INT,INT,INT,INT,REF MODE67) VOID */
A_ROW(A68_INT ,A68t67,1);
typedef struct A68t67  A68_67 ;    /* [] INT */

A_PROCEDURE(A68_BOOL ,A68t68,(A68_VC ),(A68_VC ,void *));
typedef struct A68t68  A68_68 ;    /* PROC(MODE26) BOOL */

A_PROCEDURE(A68_VOID ,A68t69,(A68_INT ,struct A68t50 *),(A68_INT ,struct A68t50 *,void *));
typedef struct A68t69  A68_69 ;    /* PROC(INT) MODE50 */

A_PROCEDURE(A68_VOID ,A68t70,(A68_BOOL ,A68_VC *),(A68_BOOL ,A68_VC *,void *));
typedef struct A68t70  A68_70 ;    /* PROC(BOOL) MODE26 */

A_PROCEDURE(A68_VOID ,A68t71,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t71  A68_71 ;    /* PROC(MODE26) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t72,(struct A68t32 ),(struct A68t32 ,void *));
typedef struct A68t72  A68_72 ;    /* PROC(MODE32) VOID */

A_PROCEDURE(A68_VOID ,A68t73,(struct A68t43 ),(struct A68t43 ,void *));
typedef struct A68t73  A68_73 ;    /* PROC(MODE43) VOID */

A_PROCEDURE(A68_VOID ,A68t74,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t74  A68_74 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,62,A68t75);
typedef struct A68t75  A68_75 ;    /* STRUCT 62 CHAR */

A_PROCEDURE(A68_VOID ,A68t79,(struct A68t50 *),(struct A68t50 *,void *));
typedef struct A68t79  A68_79 ;    /* PROC MODE50 */

A_PROCEDURE(struct A68t53 *,A68t80,(A68_INT ),(A68_INT ,void *));
typedef struct A68t80  A68_80 ;    /* PROC(INT) REF MODE53 */
A_ISTRUCT(A68_CHAR ,46,A68t81);
typedef struct A68t81  A68_81 ;    /* STRUCT 46 CHAR */

A_PROCEDURE(A68_INT ,A68t82,(void),(void *));
typedef struct A68t82  A68_82 ;    /* PROC INT */

A_PROCEDURE(A68_INT ,A68t83,(A68_INT ),(A68_INT ,void *));
typedef struct A68t83  A68_83 ;    /* PROC(INT) INT */

A_PROCEDURE(A68_VOID ,A68t84,(struct A68t53 ),(struct A68t53 ,void *));
typedef struct A68t84  A68_84 ;    /* PROC(MODE53) VOID */

A_PROCEDURE(A68_BOOL ,A68t85,(void),(void *));
typedef struct A68t85  A68_85 ;    /* PROC BOOL */

A_PROCEDURE(A68_BOOL ,A68t86,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t86  A68_86 ;    /* PROC(INT,INT) BOOL */

A_PROCEDURE(A68_BOOL ,A68t87,(A68_INT ,struct A68t51 *),(A68_INT ,struct A68t51 *,void *));
typedef struct A68t87  A68_87 ;    /* PROC(INT,REF MODE51) BOOL */

A_PROCEDURE(A68_VOID ,A68t88,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t88  A68_88 ;    /* PROC(INT,INT) VOID */

A_PROCEDURE(A68_BOOL ,A68t89,(struct A68t50 ),(struct A68t50 ,void *));
typedef struct A68t89  A68_89 ;    /* PROC(MODE50) BOOL */

A_PROCEDURE(A68_BOOL ,A68t90,(struct A68t50 ,struct A68t50 ),(struct A68t50 ,struct A68t50 ,void *));
typedef struct A68t90  A68_90 ;    /* PROC(MODE50,MODE50) BOOL */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from incid --- */
#define OAAACTR_minlab 16384
/* --- End of imports from incid --- */


/* --- Imports from idtable --- */
extern A68_63  IOKACTR_labels;
/* --- End of imports from idtable --- */


/* --- Imports from incenviron --- */
/* --- End of imports from incenviron --- */


/* --- Imports from environment --- */
extern A68_VOID  PXIACTR_assert(A68_VC ,A68_BOOL );
/* --- End of imports from environment --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void BAAACTR(void);   /* incid */
extern void YNKACTR(void);   /* idtable */
extern void AHAACTR(void);   /* incenviron */
extern void HPIACTR(void);   /* environment */
/* --- end of DECS initialisation functions --- */
static A68_75   NNLACTR = {"$Id: environ.c,v 1.5.2.4 2004/09/27 03:04:17 teshields Exp $"}; 
A_GISVEC(A68_VC ,ONLACTR,NNLACTR,62)
#define PNLACTR_emptynonloclist (A68_51 *)A68_NIL
#define QNLACTR_emptyenvironstack (A68_52 *)A68_NIL
A68_50  SNLACTR_nullenviron;
static A68_53  UNLACTR_globalenviron;
static A68_52 * WNLACTR_environstack;
A68_INT  YNLACTR_highestlevel;
static A68_81   FOLACTR = {"CENTITIES: find level: incorrect nesting level"}; 
A_GISVEC(A68_VC ,GOLACTR,FOLACTR,46)
A68_32  KQLACTR_reverttopreviouslevel;
#define MQLACTR_streams_per_level 4
#define NQLACTR_preamblestream 0
#define OQLACTR_modesstream 1
#define PQLACTR_importsstream 2
#define QQLACTR_externstream 3
#define RQLACTR_lastfixedstream 3
typedef struct   /* env of non-global proc */
{
A68_87  APLACTR_isinlist;
} CPLACTR_isinlist;

A68_VOID  ZNLACTR_currentenviron(A68_50  *ReturnedValue);

A_STATIC A68_53 * DOLACTR_findenviron(A68_INT  Level);

A68_INT  IOLACTR_currentroutine(void);

A68_INT  LOLACTR_findroutine(A68_INT  Level);

A_STATIC A68_VOID  OOLACTR_stackenviron(A68_53  Environ);

A_STATIC A68_VOID  ROLACTR_collapseenvironstack(void);

A68_BOOL  SOLACTR_nonlocalsused(void);

A68_BOOL  WOLACTR_nonlocaldeclared(A68_INT  Decno, A68_INT  Level);

A_STATIC A68_BOOL  BPLACTR_isinlist(A68_INT  Decno, A68_51 * List, void *NonLocals);

A68_VOID  NPLACTR_addnonlocal(A68_INT  Decno, A68_INT  Level);

A68_BOOL  VPLACTR_islocallevel(A68_50  E1);

A68_BOOL  YPLACTR_isgloballevel(A68_50  E1);

A68_BOOL  CQLACTR_isnewerthan(A68_50  E1, A68_50  E2);

A68_INT  EQLACTR_currentlevel(void);

A68_VOID  HQLACTR_startnewlevel(A68_INT  Rdenno);

A68_INT  TQLACTR_nonlocdecstream(A68_INT  Level);

A68_INT  WQLACTR_codestream(A68_INT  Level);

A68_INT  ZQLACTR_locdecstream(A68_INT  Level);

A68_INT  CRLACTR_labelstream(A68_INT  Level);

A68_BOOL  FRLACTR_isnonlocdecstream(A68_INT  Streamno);

A68_BOOL  KRLACTR_iscodestream(A68_INT  Streamno);

A68_BOOL  PRLACTR_islocdecstream(A68_INT  Streamno);

A68_BOOL  URLACTR_islabelstream(A68_INT  Streamno);

A_STATIC A68_BOOL  BPLACTR_isinlist(A68_INT  Decno, A68_51 * List, void *NonLocals)
#define NL(x) (((CPLACTR_isinlist *)NonLocals)->x)
{ 
A68_BOOL  DPLACTR;  /* optbool result */
A68_BOOL  EPLACTR;  /* optbool result */
A68_BOOL  FPLACTR;  /* clause result */
A_PROC_ENTRY(isinlist);
 /* line 120: */
 /* line 121: */
 /* line 123: */
DPLACTR = (List!=PNLACTR_emptynonloclist);
if ( DPLACTR )
{ /* line 124: */
 /* line 125: */
EPLACTR = (Decno==(*(&(List->Decno))));
if ( ! EPLACTR )
{EPLACTR = A_CALLPROC(NL(APLACTR_isinlist),(Decno, (*(&(List->Rest)))),(Decno, (*(&(List->Rest))),(NL(APLACTR_isinlist)).nonlocals));
}
 /* line 126: */
DPLACTR = EPLACTR;
}
FPLACTR = DPLACTR;
A_PROC_EXIT(isinlist);
return( FPLACTR );
} 
#undef NL

A68_VOID  ZNLACTR_currentenviron(A68_50  *ReturnedValue)
{ 
A68_50  AOLACTR;  /* collateral clause result */
A68_50  BOLACTR;  /* clause result */
A_PROC_ENTRY(currentenviron);
AOLACTR.Level = (*(&((&(WNLACTR_environstack->Env))->Level)));
AOLACTR.Block = (*(&((&(WNLACTR_environstack->Env))->Block)));
BOLACTR = AOLACTR;
A_PROC_EXIT(currentenviron);
*ReturnedValue = (BOLACTR);
return;
} 
#undef NL

A_STATIC A68_53 * DOLACTR_findenviron(A68_INT  Level)
{ 
A68_52 * EOLACTR_selectenviron;
A68_53 * HOLACTR;  /* clause result */
A_PROC_ENTRY(findenviron);
 /* line 74: */
 /* line 75: */
{ 
EOLACTR_selectenviron = WNLACTR_environstack;
 /* line 76: */
for ( ;; )
{ 
 /* line 77: */
if ( !(((*(&((&(EOLACTR_selectenviron->Env))->Level)))>Level)) ) break;
 /* line 78: */
 /* line 79: */
if ( ((*(&(EOLACTR_selectenviron->Rest)))==QNLACTR_emptyenvironstack) )
{ 
 /* line 80: */
PXIACTR_assert(GOLACTR, A68_FALSE);
} 
else
{ 
 /* line 81: */
 /* line 82: */
EOLACTR_selectenviron = (*(&(EOLACTR_selectenviron->Rest)));
} 
}
 /* line 83: */
 /* line 84: */
HOLACTR = (&(EOLACTR_selectenviron->Env));
} 
A_PROC_EXIT(findenviron);
return( HOLACTR );
} 
#undef NL

A68_INT  IOLACTR_currentroutine(void)
{ 
A68_INT  JOLACTR;  /* clause result */
A_PROC_ENTRY(currentroutine);
JOLACTR = (*(&((&(WNLACTR_environstack->Env))->Rdenno)));
A_PROC_EXIT(currentroutine);
return( JOLACTR );
} 
#undef NL

A68_INT  LOLACTR_findroutine(A68_INT  Level)
{ 
A68_INT  MOLACTR;  /* clause result */
A_PROC_ENTRY(findroutine);
MOLACTR = (*(&(DOLACTR_findenviron(Level)->Rdenno)));
A_PROC_EXIT(findroutine);
return( MOLACTR );
} 
#undef NL

A_STATIC A68_VOID  OOLACTR_stackenviron(A68_53  Environ)
{ 
A68_52  POLACTR;  /* collateral clause result */
A68_52 * QOLACTR;  /* YIELD */
A_PROC_ENTRY(stackenviron);
 /* line 94: */
 /* line 95: */
POLACTR.Env = Environ;
 /* line 96: */
POLACTR.Rest = WNLACTR_environstack;
QOLACTR = A_HEAP(A68_52 ) ;
(*QOLACTR) = POLACTR ;
WNLACTR_environstack = QOLACTR;
A_PROC_EXIT(stackenviron);
return;
} 
#undef NL

A_STATIC A68_VOID  ROLACTR_collapseenvironstack(void)
{ 
A_PROC_ENTRY(collapseenvironstack);
 /* line 104: */
WNLACTR_environstack = (*(&(WNLACTR_environstack->Rest)));
A_PROC_EXIT(collapseenvironstack);
return;
} 
#undef NL

A68_BOOL  SOLACTR_nonlocalsused(void)
{ 
A68_BOOL  TOLACTR;  /* clause result */
A_PROC_ENTRY(nonlocalsused);
TOLACTR = ((*(&((&(WNLACTR_environstack->Env))->Nonlocals)))!=PNLACTR_emptynonloclist);
A_PROC_EXIT(nonlocalsused);
return( TOLACTR );
} 
#undef NL

A68_BOOL  WOLACTR_nonlocaldeclared(A68_INT  Decno, A68_INT  Level)
{ 
A68_87  APLACTR_isinlist;   /* proc value of non-global proc */
A68_51 * GPLACTR_nonlocals;
A68_BOOL  HPLACTR;  /* optbool result */
A68_BOOL  IPLACTR;  /* optbool result */
A68_INT  JPLACTR;  /* YIELD */
A68_BOOL  KPLACTR;  /* clause result */
A_PROC_ENTRY(nonlocaldeclared);
 /* line 118: */
 /* line 119: */
{ 
A_CLOSURE( APLACTR_isinlist, BPLACTR_isinlist, CPLACTR_isinlist );
(( CPLACTR_isinlist * ) ( APLACTR_isinlist.nonlocals )) -> APLACTR_isinlist = APLACTR_isinlist;
 /* line 128: */
GPLACTR_nonlocals = (*(&(DOLACTR_findenviron(Level)->Nonlocals)));
 /* line 130: */
 /* line 131: */
 /* line 132: */
HPLACTR = A_CALLPROC(APLACTR_isinlist,(Decno, GPLACTR_nonlocals),(Decno, GPLACTR_nonlocals,(APLACTR_isinlist).nonlocals));
if ( ! HPLACTR )
{IPLACTR = (Decno>OAAACTR_minlab);
if ( IPLACTR )
{JPLACTR = (Decno-OAAACTR_minlab) ;
IPLACTR = A_CALLPROC(APLACTR_isinlist,(((*(&((&A_R1INDEX(IOKACTR_labels,JPLACTR))->Alias)))+OAAACTR_minlab), GPLACTR_nonlocals),(((*(&((&A_R1INDEX(IOKACTR_labels,JPLACTR))->Alias)))+OAAACTR_minlab), GPLACTR_nonlocals,(APLACTR_isinlist).nonlocals));
}
 /* line 133: */
HPLACTR = IPLACTR;
}
KPLACTR = HPLACTR;
} 
A_PROC_EXIT(nonlocaldeclared);
return( KPLACTR );
} 
#undef NL

A68_VOID  NPLACTR_addnonlocal(A68_INT  Decno, A68_INT  Level)
{ 
A68_INT  OPLACTR;  /* YIELD */
A68_INT  PPLACTR_alias;
A68_53 * QPLACTR_environ;
A68_51  RPLACTR;  /* collateral clause result */
A68_51 * SPLACTR;  /* YIELD */
A68_51 ** TPLACTR;  /* YIELD */
A_PROC_ENTRY(addnonlocal);
 /* line 140: */
 /* line 141: */
{ 
 /* line 142: */
 /* line 143: */
 /* line 144: */
if ( (Decno>OAAACTR_minlab) )
{ 
OPLACTR = (Decno-OAAACTR_minlab) ;
PPLACTR_alias = (*(&((&A_R1INDEX(IOKACTR_labels,OPLACTR))->Alias)));
 /* line 145: */
 /* line 146: */
 /* line 147: */
if ( (PPLACTR_alias>1) )
{ 
 /* line 148: */
 /* line 149: */
NPLACTR_addnonlocal((PPLACTR_alias+OAAACTR_minlab), Level);
} 
} 
 /* line 151: */
QPLACTR_environ = DOLACTR_findenviron(Level);
 /* line 152: */
RPLACTR.Decno = Decno;
 /* line 153: */
RPLACTR.Rest = (*(&(QPLACTR_environ->Nonlocals)));
SPLACTR = A_HEAP(A68_51 ) ;
(*SPLACTR) = RPLACTR ;
TPLACTR = (&(QPLACTR_environ->Nonlocals)) ;
(*TPLACTR) = SPLACTR;
} 
A_PROC_EXIT(addnonlocal);
return;
} 
#undef NL

A68_BOOL  VPLACTR_islocallevel(A68_50  E1)
{ 
A68_BOOL  WPLACTR;  /* clause result */
A_PROC_ENTRY(islocallevel);
 /* line 156: */
WPLACTR = (E1.Level==(*(&((&(WNLACTR_environstack->Env))->Level))));
A_PROC_EXIT(islocallevel);
return( WPLACTR );
} 
#undef NL

A68_BOOL  YPLACTR_isgloballevel(A68_50  E1)
{ 
A68_BOOL  ZPLACTR;  /* clause result */
A_PROC_ENTRY(isgloballevel);
ZPLACTR = (E1.Level==0);
A_PROC_EXIT(isgloballevel);
return( ZPLACTR );
} 
#undef NL

A68_BOOL  CQLACTR_isnewerthan(A68_50  E1, A68_50  E2)
{ 
A68_BOOL  DQLACTR;  /* clause result */
A_PROC_ENTRY(isnewerthan);
 /* line 161: */
 /* line 162: */
if ( (E1.Level==E2.Level) )
{ 
 /* line 163: */
DQLACTR = (E1.Block>E2.Block);
} 
else
{ 
 /* line 164: */
DQLACTR = (E1.Level>E2.Level);
} 
A_PROC_EXIT(isnewerthan);
return( DQLACTR );
} 
#undef NL

A68_INT  EQLACTR_currentlevel(void)
{ 
A68_INT  FQLACTR;  /* clause result */
A_PROC_ENTRY(currentlevel);
FQLACTR = (*(&((&(WNLACTR_environstack->Env))->Level)));
A_PROC_EXIT(currentlevel);
return( FQLACTR );
} 
#undef NL

A68_VOID  HQLACTR_startnewlevel(A68_INT  Rdenno)
{ 
A68_INT  IQLACTR_thislevel;
A68_53  JQLACTR;  /* collateral clause result */
A_PROC_ENTRY(startnewlevel);
 /* line 173: */
 /* line 174: */
{ 
IQLACTR_thislevel = ((*(&((&(WNLACTR_environstack->Env))->Level)))+1);
 /* line 175: */
JQLACTR.Level = IQLACTR_thislevel;
JQLACTR.Block = 0;
JQLACTR.Rdenno = Rdenno;
JQLACTR.Nonlocals = PNLACTR_emptynonloclist;
OOLACTR_stackenviron(JQLACTR);
 /* line 176: */
 /* line 177: */
 /* line 178: */
if ( (IQLACTR_thislevel>YNLACTR_highestlevel) )
{ 
 /* line 179: */
 /* line 180: */
YNLACTR_highestlevel = IQLACTR_thislevel;
} 
} 
A_PROC_EXIT(startnewlevel);
return;
} 
#undef NL

A68_INT  TQLACTR_nonlocdecstream(A68_INT  Level)
{ 
A68_INT  UQLACTR;  /* clause result */
A_PROC_ENTRY(nonlocdecstream);
 /* line 201: */
UQLACTR = (((Level*MQLACTR_streams_per_level)+1)+RQLACTR_lastfixedstream);
A_PROC_EXIT(nonlocdecstream);
return( UQLACTR );
} 
#undef NL

A68_INT  WQLACTR_codestream(A68_INT  Level)
{ 
A68_INT  XQLACTR;  /* clause result */
A_PROC_ENTRY(codestream);
 /* line 203: */
XQLACTR = (((Level*MQLACTR_streams_per_level)+2)+RQLACTR_lastfixedstream);
A_PROC_EXIT(codestream);
return( XQLACTR );
} 
#undef NL

A68_INT  ZQLACTR_locdecstream(A68_INT  Level)
{ 
A68_INT  ARLACTR;  /* clause result */
A_PROC_ENTRY(locdecstream);
 /* line 205: */
ARLACTR = (((Level*MQLACTR_streams_per_level)+3)+RQLACTR_lastfixedstream);
A_PROC_EXIT(locdecstream);
return( ARLACTR );
} 
#undef NL

A68_INT  CRLACTR_labelstream(A68_INT  Level)
{ 
A68_INT  DRLACTR;  /* clause result */
A_PROC_ENTRY(labelstream);
 /* line 207: */
DRLACTR = (((Level*MQLACTR_streams_per_level)+4)+RQLACTR_lastfixedstream);
A_PROC_EXIT(labelstream);
return( DRLACTR );
} 
#undef NL

A68_BOOL  FRLACTR_isnonlocdecstream(A68_INT  Streamno)
{ 
A68_BOOL  GRLACTR;  /* optbool result */
A68_INT  HRLACTR;  /* ADICOPS - MOD */
A68_BOOL  IRLACTR;  /* clause result */
A_PROC_ENTRY(isnonlocdecstream);
 /* line 210: */
GRLACTR = (Streamno>RQLACTR_lastfixedstream);
if ( GRLACTR )
{GRLACTR = (A_MOD(Streamno,MQLACTR_streams_per_level,HRLACTR)==3);
}
IRLACTR = GRLACTR;
A_PROC_EXIT(isnonlocdecstream);
return( IRLACTR );
} 
#undef NL

A68_BOOL  KRLACTR_iscodestream(A68_INT  Streamno)
{ 
A68_BOOL  LRLACTR;  /* optbool result */
A68_INT  MRLACTR;  /* ADICOPS - MOD */
A68_BOOL  NRLACTR;  /* clause result */
A_PROC_ENTRY(iscodestream);
 /* line 212: */
LRLACTR = (Streamno>RQLACTR_lastfixedstream);
if ( LRLACTR )
{LRLACTR = (A_MOD(Streamno,MQLACTR_streams_per_level,MRLACTR)==0);
}
NRLACTR = LRLACTR;
A_PROC_EXIT(iscodestream);
return( NRLACTR );
} 
#undef NL

A68_BOOL  PRLACTR_islocdecstream(A68_INT  Streamno)
{ 
A68_BOOL  QRLACTR;  /* optbool result */
A68_INT  RRLACTR;  /* ADICOPS - MOD */
A68_BOOL  SRLACTR;  /* clause result */
A_PROC_ENTRY(islocdecstream);
 /* line 214: */
QRLACTR = (Streamno>RQLACTR_lastfixedstream);
if ( QRLACTR )
{QRLACTR = (A_MOD(Streamno,MQLACTR_streams_per_level,RRLACTR)==1);
}
SRLACTR = QRLACTR;
A_PROC_EXIT(islocdecstream);
return( SRLACTR );
} 
#undef NL

A68_BOOL  URLACTR_islabelstream(A68_INT  Streamno)
{ 
A68_BOOL  VRLACTR;  /* optbool result */
A68_INT  WRLACTR;  /* ADICOPS - MOD */
A68_BOOL  XRLACTR;  /* clause result */
A_PROC_ENTRY(islabelstream);
 /* line 216: */
VRLACTR = (Streamno>RQLACTR_lastfixedstream);
if ( VRLACTR )
{VRLACTR = (A_MOD(Streamno,MQLACTR_streams_per_level,WRLACTR)==2);
}
XRLACTR = VRLACTR;
A_PROC_EXIT(islabelstream);
return( XRLACTR );
} 
#undef NL
 /* line 1: */
 /* line 3: */
void KNLACTR(void)   /* initialise DECS environ */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/shields/projects/Algol68/Tools/Algol68toC/src/a68toc","-v","-uname","seedfile","-lib","/home/shields/projects/Algol68/Tools/Algol68toC/a68config","-dir","/home/shields/projects/Algol68/Tools/Algol68toC/a68config","-dir","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel","-dir",".","environ.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/shields/projects/Algol68/Tools/Algol68toC/a68config","A68_CDIR=","A68_DIR=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/shields/projects/Algol68/Tools/Algol68toC/a68config/a68config.m","./incid.m","./idtable.m","./incenviron.m","./environment.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_50  RNLACTR;  /* collateral clause result */
A68_53  TNLACTR;  /* collateral clause result */
A68_52  VNLACTR;  /* collateral clause result */
A68_52 * XNLACTR;  /* YIELD */
A68_32  LQLACTR;  /* procedure value */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
BAAACTR();   /* USE incid */
YNKACTR();   /* USE idtable */
AHAACTR();   /* USE incenviron */
HPIACTR();   /* USE environment */
/* --- Initialise configuration information */
A_config.source_file = "/home/shields/projects/Algol68/Tools/Algol68toC/src/environ.a68";
A_config.translation_time = "Sun Sep 26 21:50:57 2004";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "JNLACTR (from seed file) ";
A_config.spec_change_time = "Sun Sep 26 21:50:57 2004";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS environ);
UEAALIB_a68config(LGAALIB_configinfo, ONLACTR);
 /* line 48: */
 /* line 56: */
 /* line 58: */
 /* line 59: */
 /* line 60: */
RNLACTR.Level = 0;
RNLACTR.Block = 0;
SNLACTR_nullenviron = RNLACTR;
 /* line 61: */
TNLACTR.Level = 0;
TNLACTR.Block = 0;
TNLACTR.Rdenno = 0;
TNLACTR.Nonlocals = (A68_51 *)A68_NIL;
UNLACTR_globalenviron = TNLACTR;
 /* line 62: */
 /* line 63: */
VNLACTR.Env = UNLACTR_globalenviron;
VNLACTR.Rest = QNLACTR_emptyenvironstack;
XNLACTR = A_HEAP(A68_52 ) ;
(*XNLACTR) = VNLACTR ;
WNLACTR_environstack = XNLACTR;
 /* line 65: */
YNLACTR_highestlevel = 0;
 /* line 67: */
 /* line 68: */
 /* line 70: */
 /* line 86: */
 /* line 88: */
 /* line 90: */
 /* line 98: */
 /* line 102: */
 /* line 103: */
 /* line 106: */
 /* line 110: */
 /* line 112: */
 /* line 135: */
 /* line 155: */
 /* line 158: */
 /* line 160: */
 /* line 167: */
 /* line 169: */
 /* line 182: */
LQLACTR.fn.fn_global = ROLACTR_collapseenvironstack;
LQLACTR.nonlocals = A68_NIL;
KQLACTR_reverttopreviouslevel = (LQLACTR);
 /* line 192: */
 /* line 193: */
 /* line 194: */
 /* line 195: */
 /* line 196: */
 /* line 197: */
 /* line 198: */
 /* line 200: */
 /* line 202: */
 /* line 204: */
 /* line 206: */
 /* line 209: */
 /* line 211: */
 /* line 213: */
 /* line 215: */
 /* line 218: */
 /* line 220: */
 /* line 232: */
/*SKIP*/;
A_PROC_EXIT(DECS environ);
} 
#undef NL
/* end of translation of environ.a68 */
