/* UNAME:AAAALIB */
#include <algol68/Asupport.h>
A_ISTRUCT(A68_CHAR ,59,A68t31);
typedef struct A68t31  A68_31 ;    /* STRUCT 59 CHAR */
struct A68t32{
A68_VC  Data;
struct A68t32 * Rest;
};
typedef struct A68t32  A68_32 ;    /* STRUCT(REF MODE26,REF MODE32)  */

A_PROCEDURE(A68_VOID ,A68t33,(A68_BOOL ,A68_VC *),(A68_BOOL ,A68_VC *,void *));
typedef struct A68t33  A68_33 ;    /* PROC(BOOL) MODE26 */

A_PROCEDURE(A68_VOID ,A68t34,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t34  A68_34 ;    /* PROC(MODE26) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t35,(void),(void *));
typedef struct A68t35  A68_35 ;    /* PROC VOID */

A_PROCEDURE(A68_VOID ,A68t36,(struct A68t35 ),(struct A68t35 ,void *));
typedef struct A68t36  A68_36 ;    /* PROC(MODE35) VOID */
A_ISTRUCT(A68_CHAR ,227,A68t37);
typedef struct A68t37  A68_37 ;    /* STRUCT 227 CHAR */

A_PROCEDURE(A68_VOID ,A68t38,(A68_VC ),(A68_VC ,void *));
typedef struct A68t38  A68_38 ;    /* PROC(MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t39,(struct A68t38 ),(struct A68t38 ,void *));
typedef struct A68t39  A68_39 ;    /* PROC(MODE38) VOID */
A_ISTRUCT(A68_CHAR ,52,A68t40);
typedef struct A68t40  A68_40 ;    /* STRUCT 52 CHAR */
A_VECTOR(A68_VC ,A68t41);
typedef struct A68t41  A68_41 ;    /* VECTOR [] MODE26 */

A_PROCEDURE(A68_VOID ,A68t42,(struct A68t41 ,A68_VC *),(struct A68t41 ,A68_VC *,void *));
typedef struct A68t42  A68_42 ;    /* PROC(MODE41) REF MODE26 */
struct A68t43{
A68_CHAR * File;
A68_CHAR * Time;
A68_CHAR * Version;
A68_CHAR * Seed;
};
typedef struct A68t43  A68_43 ;    /* STRUCT(REF CHAR,REF CHAR,REF CHAR,REF CHAR)  */

A_PROCEDURE(A68_VOID ,A68t44,(A68_VC ,struct A68t43 *),(A68_VC ,struct A68t43 *,void *));
typedef struct A68t44  A68_44 ;    /* PROC(MODE26,REF MODE43) VOID */

A_PROCEDURE(A68_VOID ,A68t45,(A68_CHAR *,A68_VC *),(A68_CHAR *,A68_VC *,void *));
typedef struct A68t45  A68_45 ;    /* PROC(REF CHAR) MODE26 */

A_PROCEDURE(A68_INT ,A68t46,(A68_CHAR *),(A68_CHAR *,void *));
typedef struct A68t46  A68_46 ;    /* PROC(REF CHAR) INT */
A_ISTRUCT(A68_CHAR ,1000,A68t47);
typedef struct A68t47  A68_47 ;    /* STRUCT 1000 CHAR */

A_PROCEDURE(struct A68t47 *,A68t48,(A68_CHAR *),(A68_CHAR *,void *));
typedef struct A68t48  A68_48 ;    /* PROC(REF CHAR) REF MODE47 */

A_PROCEDURE(A68_VOID ,A68t49,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t49  A68_49 ;    /* PROC(MODE26) MODE26 */
A_ISTRUCT(A68_CHAR ,7,A68t50);
typedef struct A68t50  A68_50 ;    /* STRUCT 7 CHAR */
A_ISTRUCT(A68_VC ,6,A68t51);
typedef struct A68t51  A68_51 ;    /* STRUCT 6 MODE26 */

A_PROCEDURE(A68_VOID ,A68t52,(A68_VC ,A68_VC ,A68_VC *),(A68_VC ,A68_VC ,A68_VC *,void *));
typedef struct A68t52  A68_52 ;    /* PROC(MODE26,MODE26) REF MODE26 */
A_ISTRUCT(A68_CHAR ,2,A68t53);
typedef struct A68t53  A68_53 ;    /* STRUCT 2 CHAR */
A_ISTRUCT(A68_VC ,7,A68t54);
typedef struct A68t54  A68_54 ;    /* STRUCT 7 MODE26 */
A_ISTRUCT(A68_VC ,3,A68t55);
typedef struct A68t55  A68_55 ;    /* STRUCT 3 MODE26 */

A_PROCEDURE(A68_VOID ,A68t56,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t56  A68_56 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,4,A68t57);
typedef struct A68t57  A68_57 ;    /* STRUCT 4 CHAR */
static A68_31   CAAALIB = {"$Id: a68config.c,v 1.5 2003-05-30 21:20:44 sian Exp $"}; 
A_GISVEC(A68_VC ,DAAALIB,CAAALIB,59)
static A68_VC  EAAALIB_cfs;
A68_33  HAAALIB_anonymous;
A68_34  XAAALIB_makervc;
#define WAAALIB_nilconfigdata (A68_32 *)A68_NIL
static A68_37   YAAALIB = {"Start of the ALGOL68 RS Module chain - where a Module has been compiled using \"Ctrans\" the final three fields are the Ctrans version number, the seed for the unique name prefix for ALGOL68 identifiers and the translation date.\012"}; 
A_GISVEC(A68_VC ,ZAAALIB,YAAALIB,227)
static A68_32  BBAALIB_configdata;
static A68_32 ** CBAALIB_tail;
static A68_38  FBAALIB_show_proc;
static A68_40   IBAALIB = {"Initialisation sequence - configuration information:"}; 
A_GISVEC(A68_VC ,JBAALIB,IBAALIB,52)
#include <string.h>
#define STRLEN(cp) (A68_INT)(strlen((char *) cp))

#define JCAALIB_strlen STRLEN
static A68_50   TCAALIB = {"Ctrans_"}; 
A_GISVEC(A68_VC ,VCAALIB,TCAALIB,7)
static A68_53   TDAALIB = {"  "}; 
A_GISVEC(A68_VC ,UDAALIB,TDAALIB,2)
static A68_53   IEAALIB = {"  "}; 
A_GISVEC(A68_VC ,JEAALIB,IEAALIB,2)
static A68_57   QEAALIB = {"$Id:"}; 
A_GISVEC(A68_VC ,SEAALIB,QEAALIB,4)
static A68_57   EFAALIB = {"RSRE"}; 
A_GISVEC(A68_VC ,GFAALIB,EFAALIB,4)
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* configinfo without ACONFIG */

#define DGAALIB_a_configinfo A_configinfo
#define FGAALIB_configinfo DGAALIB_a_configinfo
typedef struct   /* env of non-global proc */
{
A68_VC  S;
} PAAALIB_generator;
typedef struct   /* env of non-global proc */
{
A68_INT * MBAALIB_l;
} TBAALIB_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  OEAALIB_top;
A_PAD_INT(PAD_1)
} WEAALIB_generator;

A_STATIC A68_VOID  GAAALIB_generator(A68_BOOL  FAAALIB_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  LAAALIB_anonymous(A68_VC  S, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  OAAALIB_generator(A68_BOOL  MAAALIB_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  ABAALIB_a68init(A68_35  Init_proc);

A_STATIC A68_VOID  EBAALIB_anonymous(A68_VC  S);

A68_VOID  NBAALIB_showa68config(A68_38  Show);

A_STATIC A68_VOID  LBAALIB_concat(A68_41  Strs, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  SBAALIB_generator(A68_BOOL  QBAALIB_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  GCAALIB_(A68_VC  Config, A68_43 * Td);

A_STATIC A68_VOID  ICAALIB_tostr(A68_CHAR * Cp, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  RCAALIB_version(A68_VC  V, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  ZCAALIB_time(A68_VC  T, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  LDAALIB_seed(A68_VC  S, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  QDAALIB_trans_config(A68_VC  C, A68_VC  S, A68_VC  *ReturnedValue);

A68_VOID  UEAALIB_a68config(A68_VC  C, A68_VC  S);

A_STATIC A68_VOID  VEAALIB_generator(A68_BOOL  TEAALIB_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  JGAALIB_show_a68config(A68_38  Show);

A_STATIC A68_VOID  EGAALIB_init(void);

A_STATIC A68_VOID  OAAALIB_generator(A68_BOOL  MAAALIB_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((PAAALIB_generator *)NonLocals)->x)
{ 
A68_VC  QAAALIB;  /* clause result */
A68_VC  RAAALIB;  /* OPERATORS - dynamic generator */
{ 
RAAALIB.upb = NL(S).upb ;
( MAAALIB_anonymous? A_VLOC(A68_CHAR ,RAAALIB): A_VHEAP(A68_CHAR ,RAAALIB) );
QAAALIB = RAAALIB;
} 
*ReturnedValue = (QAAALIB);
return;
} 
#undef NL

A_STATIC A68_VOID  SBAALIB_generator(A68_BOOL  QBAALIB_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((TBAALIB_generator *)NonLocals)->x)
{ 
A68_VC  UBAALIB;  /* clause result */
A68_VC  VBAALIB;  /* OPERATORS - dynamic generator */
{ 
VBAALIB.upb = (*NL(MBAALIB_l)) ;
( QBAALIB_anonymous? A_VLOC(A68_CHAR ,VBAALIB): A_VHEAP(A68_CHAR ,VBAALIB) );
UBAALIB = VBAALIB;
} 
*ReturnedValue = (UBAALIB);
return;
} 
#undef NL

A_STATIC A68_VOID  VEAALIB_generator(A68_BOOL  TEAALIB_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((WEAALIB_generator *)NonLocals)->x)
{ 
A68_VC  XEAALIB;  /* clause result */
A68_VC  YEAALIB;  /* OPERATORS - dynamic generator */
{ 
YEAALIB.upb = NL(OEAALIB_top) ;
( TEAALIB_anonymous? A_VLOC(A68_CHAR ,YEAALIB): A_VHEAP(A68_CHAR ,YEAALIB) );
XEAALIB = YEAALIB;
} 
*ReturnedValue = (XEAALIB);
return;
} 
#undef NL

A_STATIC A68_VOID  GAAALIB_generator(A68_BOOL  FAAALIB_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  HAAALIB;  /* clause result */
A68_VC  IAAALIB;  /* OPERATORS - dynamic generator */
{ 
 /* line 58: */
IAAALIB.upb = 0 ;
( FAAALIB_anonymous? A_VLOC(A68_CHAR ,IAAALIB): A_VHEAP(A68_CHAR ,IAAALIB) );
HAAALIB = IAAALIB;
} 
*ReturnedValue = (HAAALIB);
return;
} 
#undef NL

A_STATIC A68_VOID  LAAALIB_anonymous(A68_VC  S, A68_VC  *ReturnedValue)
{ 
A68_33  NAAALIB_generator;   /* proc value of non-global proc */
A68_VC  SAAALIB;  /* clause result */
A68_VC  TAAALIB;  /* avoid structure result */
A_CLOSURE( NAAALIB_generator, OAAALIB_generator, PAAALIB_generator );
(( PAAALIB_generator * ) ( NAAALIB_generator.nonlocals )) -> S = S;
A_CALLPROC(NAAALIB_generator,(A68_FALSE, &TAAALIB),(A68_FALSE, &TAAALIB,(NAAALIB_generator).nonlocals));
A_VASSIGN2(S,TAAALIB,A68_CHAR ) ;
SAAALIB = TAAALIB;
*ReturnedValue = (SAAALIB);
return;
} 
#undef NL

A68_VOID  ABAALIB_a68init(A68_35  Init_proc)
{ 
A_PROC_ENTRY(a68init);
A_CALLPROC(Init_proc,(),((Init_proc).nonlocals));
A_PROC_EXIT(a68init);
return;
} 
#undef NL

A_STATIC A68_VOID  EBAALIB_anonymous(A68_VC  S)
{ 
/*SKIP*/;
return;
} 
#undef NL

A68_VOID  NBAALIB_showa68config(A68_38  Show)
{ 
A_PROC_ENTRY(showa68config);
 /* line 83: */
 /* line 87: */
{ 
FBAALIB_show_proc = Show;
 /* line 88: */
 /* line 89: */
A_CALLPROC(FBAALIB_show_proc,(JBAALIB),(JBAALIB,(FBAALIB_show_proc).nonlocals));
} 
A_PROC_EXIT(showa68config);
return;
} 
#undef NL

A_STATIC A68_VOID  LBAALIB_concat(A68_41  Strs, A68_VC  *ReturnedValue)
{ 
A68_INT  MBAALIB_l;
A68_VC  NBAALIB_st;
A68_VC * OBAALIB;  /* forall control - []x */
A68_INT  PBAALIB;  /* forall loop counter */
A68_33  RBAALIB_generator;   /* proc value of non-global proc */
A68_VC  WBAALIB;  /* avoid structure result */
A68_VC  XBAALIB_ans;
A68_VC  YBAALIB_str;
A68_VC * ZBAALIB;  /* forall control - []x */
A68_INT  ACAALIB;  /* forall loop counter */
A68_VC  BCAALIB;  /* OPERATORS - trim index */
A68_VC  CCAALIB;  /* YIELD */
A68_VC  DCAALIB;  /* clause result */
A_PROC_ENTRY(concat);
 /* line 92: */
 /* line 94: */
{ 
MBAALIB_l = 0;
 /* line 95: */
 /* line 96: */
PBAALIB = Strs.upb -1;
OBAALIB = Strs.data;
for (;PBAALIB-- >= 0;
(OBAALIB++
) )
{
NBAALIB_st = *OBAALIB;
MBAALIB_l+=NBAALIB_st.upb;
}
 /* line 97: */
A_CLOSURE( RBAALIB_generator, SBAALIB_generator, TBAALIB_generator );
(( TBAALIB_generator * ) ( RBAALIB_generator.nonlocals )) -> MBAALIB_l = (&MBAALIB_l);
A_CALLPROC(RBAALIB_generator,(A68_FALSE, &WBAALIB),(A68_FALSE, &WBAALIB,(RBAALIB_generator).nonlocals));
XBAALIB_ans = WBAALIB;
 /* line 98: */
MBAALIB_l = 0;
 /* line 99: */
 /* line 100: */
ACAALIB = Strs.upb -1;
ZBAALIB = Strs.data;
for (;ACAALIB-- >= 0;
(ZBAALIB++
) )
{
YBAALIB_str = *ZBAALIB;
CCAALIB = A_VTRIM(BCAALIB,(XBAALIB_ans),A_VTSCRIPT(&(BCAALIB.upb),(XBAALIB_ans).upb,(MBAALIB_l+1),(MBAALIB_l+YBAALIB_str.upb))) ;
A_VASSIGN2(YBAALIB_str,CCAALIB,A68_CHAR );
 /* line 101: */
 /* line 102: */
MBAALIB_l+=YBAALIB_str.upb;
}
 /* line 103: */
 /* line 104: */
DCAALIB = XBAALIB_ans;
} 
A_PROC_EXIT(concat);
*ReturnedValue = (DCAALIB);
return;
} 
#undef NL

A_STATIC A68_VOID  GCAALIB_(A68_VC  Config, A68_43 * Td)
{ 
A_PROC_ENTRY(>>>);
 /* line 113: */
 /* line 114: */
 /* line 115: */
 /* line 116: */
 /* line 117: */
 /* line 118: */
 /* line 119: */
 /* line 120: */
#define config Config
#define td Td
{A_CONFIG_INFO *A_config = (A_CONFIG_INFO*)(config.data);
td->File = (A68_CHAR*)(A_config->source_file);
td->Time = (A68_CHAR*)(A_config->translation_time);
td->Version = (A68_CHAR*)(A_config->ctrans_version);
td->Seed = (A68_CHAR*)(A_config->name_seed);
}
#undef td
#undef config
A_PROC_EXIT(>>>);
return;
} 
#undef NL

A_STATIC A68_VOID  ICAALIB_tostr(A68_CHAR * Cp, A68_VC  *ReturnedValue)
{ 
A68_VC  KCAALIB;  /* clause result */
union {  /* BIOP 99 */
A68_CHAR *  source;
A68_47 *  destination;
} LCAALIB; 
A68_VC  MCAALIB;  /* OPERATORS - istruct -> vector */
A68_47 * NCAALIB;  /* OPERATORS - istruct -> vector */
A68_VC  OCAALIB;  /* OPERATORS - trim index */
A68_VC  PCAALIB;  /* OPERATORS - trim index */
A_PROC_ENTRY(tostr);
 /* line 123: */
 /* line 125: */
{ 
 /* line 126: */
 /* line 127: */
 /* line 128: */
 /* line 129: */
 /* line 130: */
LCAALIB.source = Cp ;
NCAALIB = (LCAALIB.destination) ;
OCAALIB = A_ISVEC(MCAALIB,NCAALIB,1000,A68_CHAR ) ;
KCAALIB = A_VTRIM(PCAALIB,(OCAALIB),A_VTSCRIPT(&(PCAALIB.upb),(OCAALIB).upb,1,JCAALIB_strlen(Cp)));
} 
A_PROC_EXIT(tostr);
*ReturnedValue = (KCAALIB);
return;
} 
#undef NL

A_STATIC A68_VOID  RCAALIB_version(A68_VC  V, A68_VC  *ReturnedValue)
{ 
A68_BOOL  SCAALIB;  /* optbool result */
A68_VC  UCAALIB;  /* OPERATORS - trim index */
A68_VC  WCAALIB;  /* clause result */
A68_VC  XCAALIB;  /* OPERATORS - trim index */
A_PROC_ENTRY(version);
 /* line 133: */
SCAALIB = (V.upb>7);
if ( SCAALIB )
{SCAALIB = A_VC_EQ(A_VTRIM(UCAALIB,(V),A_VTSCRIPT(&(UCAALIB.upb),(V).upb,1,7)),VCAALIB);
}
if ( SCAALIB )
{ 
WCAALIB = A_VTRIM(XCAALIB,(V),A_VTSCRIPT(&(XCAALIB.upb),(V).upb,8,(V).upb));
} 
else
{ 
WCAALIB = V;
} 
A_PROC_EXIT(version);
*ReturnedValue = (WCAALIB);
return;
} 
#undef NL

A_STATIC A68_VOID  ZCAALIB_time(A68_VC  T, A68_VC  *ReturnedValue)
{ 
A68_51  ADAALIB;  /* collateral clause result */
A68_VC  BDAALIB;  /* OPERATORS - trim index */
A68_VC  CDAALIB;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  DDAALIB;  /* OPERATORS - trim index */
A68_VC  EDAALIB;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  FDAALIB;  /* OPERATORS - trim index */
A68_VC  GDAALIB;  /* OPERATORS - trim index */
A68_VC  HDAALIB;  /* clause result */
A68_41  IDAALIB;  /* OPERATORS - istruct -> vector */
A68_VC  JDAALIB;  /* avoid structure result */
A_PROC_ENTRY(time);
 /* line 136: */
 /* line 137: */
if ( (T.upb==24) )
{ 
ADAALIB.data[0] = A_VTRIM(BDAALIB,(T),A_VTSCRIPT(&(BDAALIB.upb),(T).upb,9,10));
ADAALIB.data[1] = A_HVEC(CDAALIB,'-',A68_CHAR );
ADAALIB.data[2] = A_VTRIM(DDAALIB,(T),A_VTSCRIPT(&(DDAALIB.upb),(T).upb,5,7));
ADAALIB.data[3] = A_HVEC(EDAALIB,'-',A68_CHAR );
ADAALIB.data[4] = A_VTRIM(FDAALIB,(T),A_VTSCRIPT(&(FDAALIB.upb),(T).upb,21,24));
ADAALIB.data[5] = A_VTRIM(GDAALIB,(T),A_VTSCRIPT(&(GDAALIB.upb),(T).upb,11,16));
 /* line 138: */
 /* line 139: */
LBAALIB_concat( A_HISVEC(IDAALIB,ADAALIB,6,A68_VC ), &JDAALIB );
HDAALIB = JDAALIB;
} 
else
{ 
HDAALIB = T;
} 
A_PROC_EXIT(time);
*ReturnedValue = (HDAALIB);
return;
} 
#undef NL

A_STATIC A68_VOID  LDAALIB_seed(A68_VC  S, A68_VC  *ReturnedValue)
{ 
A68_VC  MDAALIB;  /* clause result */
A68_VC  NDAALIB;  /* OPERATORS - trim index */
A_PROC_ENTRY(seed);
 /* line 142: */
 /* line 143: */
if ( (S.upb>7) )
{ 
 /* line 144: */
 /* line 145: */
MDAALIB = A_VTRIM(NDAALIB,(S),A_VTSCRIPT(&(NDAALIB.upb),(S).upb,1,7));
} 
else
{ 
MDAALIB = S;
} 
A_PROC_EXIT(seed);
*ReturnedValue = (MDAALIB);
return;
} 
#undef NL

A_STATIC A68_VOID  QDAALIB_trans_config(A68_VC  C, A68_VC  S, A68_VC  *ReturnedValue)
{ 
A68_43  RDAALIB_td;
A68_54  SDAALIB;  /* collateral clause result */
A68_VC  VDAALIB;  /* avoid structure result */
A68_VC  WDAALIB;  /* avoid structure result */
A68_VC  XDAALIB;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  YDAALIB;  /* avoid structure result */
A68_VC  ZDAALIB;  /* avoid structure result */
A68_VC  AEAALIB;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  BEAALIB;  /* avoid structure result */
A68_VC  CEAALIB;  /* avoid structure result */
A68_VC  DEAALIB;  /* clause result */
A68_41  EEAALIB;  /* OPERATORS - istruct -> vector */
A68_VC  FEAALIB;  /* avoid structure result */
union {  /* BIOP 99 */
A68_VC   source;
A68_VC   destination;
} GEAALIB; 
A68_55  HEAALIB;  /* collateral clause result */
A68_41  KEAALIB;  /* OPERATORS - istruct -> vector */
A68_VC  LEAALIB;  /* avoid structure result */
A_PROC_ENTRY(trans_config);
 /* line 148: */
 /* line 149: */
if ( (C.upb==(-777)) )
{ 
 /* line 150: */
GCAALIB_(C, (&RDAALIB_td));
 /* line 151: */
SDAALIB.data[0] = S;
SDAALIB.data[1] = UDAALIB;
ICAALIB_tostr( (*(&((&RDAALIB_td)->Version))), &VDAALIB );
RCAALIB_version( VDAALIB, &WDAALIB );
SDAALIB.data[2] = WDAALIB;
 /* line 152: */
SDAALIB.data[3] = A_HVEC(XDAALIB,' ',A68_CHAR );
ICAALIB_tostr( (*(&((&RDAALIB_td)->Seed))), &YDAALIB );
LDAALIB_seed( YDAALIB, &ZDAALIB );
SDAALIB.data[4] = ZDAALIB;
SDAALIB.data[5] = A_HVEC(AEAALIB,' ',A68_CHAR );
ICAALIB_tostr( (*(&((&RDAALIB_td)->Time))), &BEAALIB );
ZCAALIB_time( BEAALIB, &CEAALIB );
SDAALIB.data[6] = CEAALIB;
 /* line 153: */
LBAALIB_concat( A_HISVEC(EEAALIB,SDAALIB,7,A68_VC ), &FEAALIB );
DEAALIB = FEAALIB;
} 
else
{ 
 /* line 154: */
 /* line 155: */
if ( (C.upb==0) )
{ 
GEAALIB.source = S ;
DEAALIB = (GEAALIB.destination);
} 
else
{ 
HEAALIB.data[0] = S;
HEAALIB.data[1] = JEAALIB;
HEAALIB.data[2] = C;
 /* line 156: */
LBAALIB_concat( A_HISVEC(KEAALIB,HEAALIB,3,A68_VC ), &LEAALIB );
DEAALIB = LEAALIB;
} 
} 
A_PROC_EXIT(trans_config);
*ReturnedValue = (DEAALIB);
return;
} 
#undef NL

A68_VOID  UEAALIB_a68config(A68_VC  C, A68_VC  S)
{ 
A68_INT  OEAALIB_top;
A68_BOOL  PEAALIB;  /* optbool result */
A68_VC  REAALIB;  /* OPERATORS - trim index */
A68_33  UEAALIB_generator;   /* proc value of non-global proc */
A68_VC  AFAALIB;  /* avoid structure result */
A68_VC  ZEAALIB_ns;
A68_INT  BFAALIB_p1;
A68_INT  CFAALIB_p2;
A68_CHAR  DFAALIB_ch;
A68_VC  FFAALIB;  /* OPERATORS - trim index */
A68_VC  HFAALIB;  /* YIELD */
A68_VC  IFAALIB;  /* OPERATORS - assign op */
A68_BOOL  JFAALIB;  /* optbool result */
A68_INT  KFAALIB;  /* YIELD */
A68_BOOL  LFAALIB;  /* optbool result */
A68_INT  MFAALIB;  /* YIELD */
A68_INT  NFAALIB;  /* loop control */
A68_INT  OFAALIB;  /* YIELD */
A68_CHAR * PFAALIB;  /* YIELD */
A68_BOOL  QFAALIB;  /* optbool result */
A68_INT  RFAALIB;  /* YIELD */
A68_BOOL  SFAALIB;  /* clause result */
A68_BOOL  TFAALIB;  /* clause result */
A68_VC  UFAALIB;  /* clause result */
A68_VC  VFAALIB;  /* OPERATORS - trim index */
A68_VC  WFAALIB;  /* avoid structure result */
A68_VC  XFAALIB;  /* avoid structure result */
A68_VC  YFAALIB_str;
A68_32  ZFAALIB;  /* collateral clause result */
A68_32 * AGAALIB;  /* YIELD */
A_PROC_ENTRY(a68config);
 /* line 164: */
 /* line 168: */
{ 
OEAALIB_top = S.upb;
 /* line 169: */
PEAALIB = (OEAALIB_top>4);
if ( PEAALIB )
{ /* line 170: */
PEAALIB = A_VC_EQ(A_VTRIM(REAALIB,(S),A_VTSCRIPT(&(REAALIB.upb),(S).upb,1,4)),SEAALIB);
}
if ( PEAALIB )
{ 
A_CLOSURE( UEAALIB_generator, VEAALIB_generator, WEAALIB_generator );
(( WEAALIB_generator * ) ( UEAALIB_generator.nonlocals )) -> OEAALIB_top = OEAALIB_top;
A_CALLPROC(UEAALIB_generator,(A68_TRUE, &AFAALIB),(A68_TRUE, &AFAALIB,(UEAALIB_generator).nonlocals));
ZEAALIB_ns = AFAALIB;
A_VASSIGN2(S,ZEAALIB_ns,A68_CHAR );
 /* line 171: */
BFAALIB_p1 = 4;
CFAALIB_p2 = 4;
 /* line 172: */
 /* line 173: */
HFAALIB = A_VTRIM(FFAALIB,(ZEAALIB_ns),A_VTSCRIPT(&(FFAALIB.upb),(ZEAALIB_ns).upb,1,4)) ;
IFAALIB = GFAALIB ;
A_VASSIGN2(IFAALIB,HFAALIB,A68_CHAR );
 /* line 175: */
for ( ;; )
{ 
JFAALIB = (CFAALIB_p2<OEAALIB_top);
if ( JFAALIB )
{KFAALIB = CFAALIB_p2+=1 ;
JFAALIB = (A_VINDEX(S,KFAALIB)!='.');
}
if ( !(JFAALIB) ) break;
/*SKIP*/;
}
 /* line 176: */
BFAALIB_p1 = (CFAALIB_p2-1);
 /* line 177: */
for ( ;; )
{ 
LFAALIB = (CFAALIB_p2<OEAALIB_top);
if ( LFAALIB )
{MFAALIB = CFAALIB_p2+=1 ;
LFAALIB = (A_VINDEX(S,MFAALIB)!=' ');
}
if ( !(LFAALIB) ) break;
/*SKIP*/;
}
 /* line 178: */
DFAALIB_ch = ' ';
 /* line 179: */
 /* line 180: */
for ( NFAALIB = 1;
NFAALIB <= 2;
NFAALIB += 1 )
{ 
 /* line 181: */
for ( ;; )
{ 
{ 
OFAALIB = BFAALIB_p1+=1 ;
PFAALIB = (&A_VINDEX(ZEAALIB_ns,OFAALIB)) ;
(*PFAALIB) = DFAALIB_ch;
 /* line 182: */
QFAALIB = (CFAALIB_p2<OEAALIB_top);
if ( QFAALIB )
{RFAALIB = CFAALIB_p2+=1 ;
QFAALIB = ((DFAALIB_ch = A_VINDEX(S,RFAALIB))!=':');
}
 /* line 183: */
SFAALIB = QFAALIB;
} 
TFAALIB = SFAALIB;
if ( !TFAALIB ) break;
/*SKIP*/;
}
 /* line 184: */
}
 /* line 185: */
 /* line 186: */
QDAALIB_trans_config( C, A_VTRIM(VFAALIB,(ZEAALIB_ns),A_VTSCRIPT(&(VFAALIB.upb),(ZEAALIB_ns).upb,1,BFAALIB_p1)), &WFAALIB );
UFAALIB = WFAALIB;
} 
else
{ 
 /* line 187: */
QDAALIB_trans_config( C, S, &XFAALIB );
UFAALIB = XFAALIB;
} 
YFAALIB_str = UFAALIB;
 /* line 188: */
 /* line 189: */
ZFAALIB.Data = YFAALIB_str;
ZFAALIB.Rest = WAAALIB_nilconfigdata;
AGAALIB = A_HEAP(A68_32 ) ;
(*AGAALIB) = ZFAALIB ;
CBAALIB_tail = (&(((*CBAALIB_tail) = AGAALIB)->Rest));
 /* line 190: */
 /* line 191: */
A_CALLPROC(FBAALIB_show_proc,(YFAALIB_str),(YFAALIB_str,(FBAALIB_show_proc).nonlocals));
} 
A_PROC_EXIT(a68config);
return;
} 
#undef NL

A68_VOID  JGAALIB_show_a68config(A68_38  Show)
{ 
A68_32 * CGAALIB_ptr;
A_PROC_ENTRY(show_a68config);
 /* line 194: */
 /* line 196: */
{ 
CGAALIB_ptr = (&BBAALIB_configdata);
 /* line 197: */
for ( ;; )
{ 
 /* line 198: */
if ( !((CGAALIB_ptr!=WAAALIB_nilconfigdata)) ) break;
A_CALLPROC(Show,((*(&(CGAALIB_ptr->Data)))),((*(&(CGAALIB_ptr->Data))),(Show).nonlocals));
CGAALIB_ptr = (*(&(CGAALIB_ptr->Rest)));
}
 /* line 199: */
} 
A_PROC_EXIT(show_a68config);
return;
} 
#undef NL

A_STATIC A68_VOID  EGAALIB_init(void)
{ 
A_PROC_ENTRY(init);
{ 
 /* line 235: */
UEAALIB_a68config(FGAALIB_configinfo, EAAALIB_cfs);
 /* line 236: */
 /* line 237: */
/*SKIP*/;
} 
A_PROC_EXIT(init);
return;
} 
#undef NL
 /* line 1: */
 /* line 3: */
void BAAALIB(void)   /* initialise DECS a68config */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/sian/src/algol68/algol68toc-1.6/src/a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/sian/src/algol68/algol68toc-1.6/a68config","-dir","/home/sian/src/algol68/algol68toc-1.6/a68config","-dir",".","a68config.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/sian/src/algol68/algol68toc-1.6/a68config","A68_CDIR=","A68_DIR=/usr/share/algol68toc/","A68_STAREDIT=1234ABCD","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/usr/share/algol68toc//a68config.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_33  JAAALIB;  /* procedure value */
A68_34  UAAALIB;  /* procedure value */
A68_32  XAAALIB;  /* collateral clause result */
union {  /* BIOP 99 */
A68_VC   source;
A68_VC   destination;
} ABAALIB; 
A68_38  GBAALIB;  /* procedure value */
if( A_invoked ) return;
A_invoked = A68_TRUE;
/* --- Initialise configuration information */
A_config.source_file = "/home/sian/src/algol68/algol68toc-1.6/a68config/a68config.a68";
A_config.translation_time = "Fri May 30 22:15:07 2003";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "AAAALIB (from seed file) ";
A_config.spec_change_time = "Sun Feb 24 14:02:00 2002";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS a68config);
EAAALIB_cfs = DAAALIB;
 /* line 56: */
JAAALIB.fn.fn_global = GAAALIB_generator;
JAAALIB.nonlocals = A68_NIL;
HAAALIB_anonymous = JAAALIB;
 /* line 63: */
 /* line 64: */
UAAALIB.fn.fn_global = LAAALIB_anonymous;
UAAALIB.nonlocals = A68_NIL;
XAAALIB_makervc = (UAAALIB);
 /* line 69: */
 /* line 71: */
 /* line 72: */
 /* line 73: */
 /* line 74: */
 /* line 75: */
 /* line 76: */
 /* line 77: */
ABAALIB.source = ZAAALIB ;
XAAALIB.Data = (ABAALIB.destination);
XAAALIB.Rest = WAAALIB_nilconfigdata;
BBAALIB_configdata = XAAALIB;
 /* line 78: */
CBAALIB_tail = (&((&BBAALIB_configdata)->Rest));
 /* line 79: */
GBAALIB.fn.fn_global = EBAALIB_anonymous;
GBAALIB.nonlocals = A68_NIL;
FBAALIB_show_proc = (GBAALIB);
 /* line 82: */
 /* line 91: */
 /* line 109: */
 /* line 110: */
 /* line 112: */
 /* line 122: */
 /* line 132: */
 /* line 135: */
 /* line 141: */
 /* line 147: */
 /* line 163: */
 /* line 193: */
 /* line 209: */
 /* line 210: */
 /* line 211: */
 /* line 212: */
 /* line 213: */
 /* line 222: */
 /* line 228: */
 /* line 229: */
 /* line 230: */
 /* line 243: */
 /* line 245: */
 /* line 246: */
 /* line 249: */
#define init EGAALIB_init
{ACONFIG;       /* Invoke the macro to setup A_configinfo */
init();
}
#undef init
 /* line 252: */
A_PROC_EXIT(DECS a68config);
} 
#undef NL
/* end of translation of a68config.a68 */
