/* UNAME:BSJACTR */
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

A_PROCEDURE(A68_VOID ,A68t50,(A68_BOOL ,A68_VC *),(A68_BOOL ,A68_VC *,void *));
typedef struct A68t50  A68_50 ;    /* PROC(BOOL) MODE26 */

A_PROCEDURE(A68_VOID ,A68t51,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t51  A68_51 ;    /* PROC(MODE26) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t52,(struct A68t32 ),(struct A68t32 ,void *));
typedef struct A68t52  A68_52 ;    /* PROC(MODE32) VOID */

A_PROCEDURE(A68_VOID ,A68t53,(struct A68t43 ),(struct A68t43 ,void *));
typedef struct A68t53  A68_53 ;    /* PROC(MODE43) VOID */

A_PROCEDURE(A68_VOID ,A68t54,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t54  A68_54 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,61,A68t55);
typedef struct A68t55  A68_55 ;    /* STRUCT 61 CHAR */
struct A68t56{
A68_VC  Word;
A68_INT  Value;
A_PAD_INT(PAD_5)
};
typedef struct A68t56  A68_56 ;    /* STRUCT(MODE26,INT)  */

A_PROCEDURE(A68_VOID ,A68t57,(A68_BOOL ,struct A68t56 *),(A68_BOOL ,struct A68t56 *,void *));
typedef struct A68t57  A68_57 ;    /* PROC(BOOL) MODE56 */
#define A68_58  A68_VC 
#define A68t58 A68t26            /* FLEX VECTOR [] CHAR */
#define A68_59  A68_56 
#define A68t59 A68t56            /* STRUCT(MODE58,INT)  */
A_ROW(struct A68t56 ,A68t60,1);
typedef struct A68t60  A68_60 ;    /* [] MODE56 */
A_ROW(struct A68t60 ,A68t61,1);
typedef struct A68t61  A68_61 ;    /* [] MODE60 */
A_ISTRUCT(A68_CHAR ,2,A68t62);
typedef struct A68t62  A68_62 ;    /* STRUCT 2 CHAR */
A_ISTRUCT(A68_CHAR ,3,A68t63);
typedef struct A68t63  A68_63 ;    /* STRUCT 3 CHAR */
A_ISTRUCT(A68_CHAR ,4,A68t64);
typedef struct A68t64  A68_64 ;    /* STRUCT 4 CHAR */
A_ISTRUCT(A68_CHAR ,5,A68t65);
typedef struct A68t65  A68_65 ;    /* STRUCT 5 CHAR */
A_ISTRUCT(A68_CHAR ,6,A68t66);
typedef struct A68t66  A68_66 ;    /* STRUCT 6 CHAR */
A_ISTRUCT(A68_CHAR ,8,A68t67);
typedef struct A68t67  A68_67 ;    /* STRUCT 8 CHAR */
A_ISTRUCT(struct A68t60 ,8,A68t68);
typedef struct A68t68  A68_68 ;    /* STRUCT 8 MODE60 */
A_ISTRUCT(struct A68t56 ,24,A68t69);
typedef struct A68t69  A68_69 ;    /* STRUCT 24 MODE56 */
A_ISTRUCT(struct A68t56 ,19,A68t70);
typedef struct A68t70  A68_70 ;    /* STRUCT 19 MODE56 */
A_ISTRUCT(struct A68t56 ,36,A68t71);
typedef struct A68t71  A68_71 ;    /* STRUCT 36 MODE56 */
A_ISTRUCT(struct A68t56 ,14,A68t72);
typedef struct A68t72  A68_72 ;    /* STRUCT 14 MODE56 */
A_ISTRUCT(struct A68t56 ,9,A68t73);
typedef struct A68t73  A68_73 ;    /* STRUCT 9 MODE56 */
A_ISTRUCT(struct A68t56 ,8,A68t74);
typedef struct A68t74  A68_74 ;    /* STRUCT 8 MODE56 */
A_ISTRUCT(struct A68t60 ,4,A68t75);
typedef struct A68t75  A68_75 ;    /* STRUCT 4 MODE60 */
A_ISTRUCT(struct A68t56 ,7,A68t76);
typedef struct A68t76  A68_76 ;    /* STRUCT 7 MODE56 */
A_ISTRUCT(struct A68t56 ,2,A68t77);
typedef struct A68t77  A68_77 ;    /* STRUCT 2 MODE56 */

A_PROCEDURE(A68_INT ,A68t78,(A68_VC ,A68_BOOL ),(A68_VC ,A68_BOOL ,void *));
typedef struct A68t78  A68_78 ;    /* PROC(REF MODE26,BOOL) INT */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from environment --- */
extern A68_BOOL  MQIACTR_longlongoption;
/* --- End of imports from environment --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void HPIACTR(void);   /* environment */
/* --- end of DECS initialisation functions --- */
static A68_55   FSJACTR = {"$Id: lookup.c,v 1.5.2.4 2004/09/27 03:04:18 teshields Exp $"}; 
A_GISVEC(A68_VC ,GSJACTR,FSJACTR,61)
static A68_57  HSJACTR_anonymous;
static A68_62   YSJACTR = {"of"}; 
A_GISVEC(A68_VC ,ZSJACTR,YSJACTR,2)
static A68_62   ATJACTR = {"co"}; 
A_GISVEC(A68_VC ,BTJACTR,ATJACTR,2)
static A68_62   CTJACTR = {"if"}; 
A_GISVEC(A68_VC ,DTJACTR,CTJACTR,2)
static A68_62   ETJACTR = {"fi"}; 
A_GISVEC(A68_VC ,FTJACTR,ETJACTR,2)
static A68_62   GTJACTR = {"do"}; 
A_GISVEC(A68_VC ,HTJACTR,GTJACTR,2)
static A68_62   ITJACTR = {"in"}; 
A_GISVEC(A68_VC ,JTJACTR,ITJACTR,2)
static A68_62   KTJACTR = {"or"}; 
A_GISVEC(A68_VC ,LTJACTR,KTJACTR,2)
static A68_62   MTJACTR = {"to"}; 
A_GISVEC(A68_VC ,NTJACTR,MTJACTR,2)
static A68_62   OTJACTR = {"od"}; 
A_GISVEC(A68_VC ,PTJACTR,OTJACTR,2)
static A68_62   QTJACTR = {"is"}; 
A_GISVEC(A68_VC ,RTJACTR,QTJACTR,2)
static A68_62   STJACTR = {"op"}; 
A_GISVEC(A68_VC ,TTJACTR,STJACTR,2)
static A68_62   UTJACTR = {"ge"}; 
A_GISVEC(A68_VC ,VTJACTR,UTJACTR,2)
static A68_62   WTJACTR = {"by"}; 
A_GISVEC(A68_VC ,XTJACTR,WTJACTR,2)
static A68_62   YTJACTR = {"at"}; 
A_GISVEC(A68_VC ,ZTJACTR,YTJACTR,2)
static A68_62   AUJACTR = {"ne"}; 
A_GISVEC(A68_VC ,BUJACTR,AUJACTR,2)
static A68_62   CUJACTR = {"up"}; 
A_GISVEC(A68_VC ,DUJACTR,CUJACTR,2)
static A68_62   EUJACTR = {"le"}; 
A_GISVEC(A68_VC ,FUJACTR,EUJACTR,2)
static A68_62   GUJACTR = {"eq"}; 
A_GISVEC(A68_VC ,HUJACTR,GUJACTR,2)
static A68_62   IUJACTR = {"im"}; 
A_GISVEC(A68_VC ,JUJACTR,IUJACTR,2)
static A68_62   KUJACTR = {"re"}; 
A_GISVEC(A68_VC ,LUJACTR,KUJACTR,2)
static A68_62   MUJACTR = {"go"}; 
A_GISVEC(A68_VC ,NUJACTR,MUJACTR,2)
static A68_62   OUJACTR = {"gt"}; 
A_GISVEC(A68_VC ,PUJACTR,OUJACTR,2)
static A68_62   QUJACTR = {"lt"}; 
A_GISVEC(A68_VC ,RUJACTR,QUJACTR,2)
static A68_62   SUJACTR = {"pr"}; 
A_GISVEC(A68_VC ,TUJACTR,SUJACTR,2)
static A68_63   WUJACTR = {"int"}; 
A_GISVEC(A68_VC ,XUJACTR,WUJACTR,3)
static A68_63   YUJACTR = {"ref"}; 
A_GISVEC(A68_VC ,ZUJACTR,YUJACTR,3)
static A68_63   AVJACTR = {"and"}; 
A_GISVEC(A68_VC ,BVJACTR,AVJACTR,3)
static A68_63   CVJACTR = {"abs"}; 
A_GISVEC(A68_VC ,DVJACTR,CVJACTR,3)
static A68_63   EVJACTR = {"nil"}; 
A_GISVEC(A68_VC ,FVJACTR,EVJACTR,3)
static A68_63   GVJACTR = {"bin"}; 
A_GISVEC(A68_VC ,HVJACTR,GVJACTR,3)
static A68_63   IVJACTR = {"end"}; 
A_GISVEC(A68_VC ,JVJACTR,IVJACTR,3)
static A68_63   KVJACTR = {"for"}; 
A_GISVEC(A68_VC ,LVJACTR,KVJACTR,3)
static A68_63   MVJACTR = {"not"}; 
A_GISVEC(A68_VC ,NVJACTR,MVJACTR,3)
static A68_63   OVJACTR = {"out"}; 
A_GISVEC(A68_VC ,PVJACTR,OVJACTR,3)
static A68_63   QVJACTR = {"loc"}; 
A_GISVEC(A68_VC ,RVJACTR,QVJACTR,3)
static A68_63   SVJACTR = {"upb"}; 
A_GISVEC(A68_VC ,TVJACTR,SVJACTR,3)
static A68_63   UVJACTR = {"mod"}; 
A_GISVEC(A68_VC ,VVJACTR,UVJACTR,3)
static A68_63   WVJACTR = {"shr"}; 
A_GISVEC(A68_VC ,XVJACTR,WVJACTR,3)
static A68_63   YVJACTR = {"odd"}; 
A_GISVEC(A68_VC ,ZVJACTR,YVJACTR,3)
static A68_63   AWJACTR = {"shl"}; 
A_GISVEC(A68_VC ,BWJACTR,AWJACTR,3)
static A68_63   CWJACTR = {"lwb"}; 
A_GISVEC(A68_VC ,DWJACTR,CWJACTR,3)
static A68_63   EWJACTR = {"arg"}; 
A_GISVEC(A68_VC ,FWJACTR,EWJACTR,3)
static A68_63   GWJACTR = {"use"}; 
A_GISVEC(A68_VC ,HWJACTR,GWJACTR,3)
static A68_64   KWJACTR = {"then"}; 
A_GISVEC(A68_VC ,LWJACTR,KWJACTR,4)
static A68_64   MWJACTR = {"else"}; 
A_GISVEC(A68_VC ,NWJACTR,MWJACTR,4)
static A68_64   OWJACTR = {"skip"}; 
A_GISVEC(A68_VC ,PWJACTR,OWJACTR,4)
static A68_64   QWJACTR = {"proc"}; 
A_GISVEC(A68_VC ,RWJACTR,QWJACTR,4)
static A68_64   SWJACTR = {"isnt"}; 
A_GISVEC(A68_VC ,TWJACTR,SWJACTR,4)
static A68_64   UWJACTR = {"case"}; 
A_GISVEC(A68_VC ,VWJACTR,UWJACTR,4)
static A68_64   WWJACTR = {"true"}; 
A_GISVEC(A68_VC ,XWJACTR,WWJACTR,4)
static A68_64   YWJACTR = {"esac"}; 
A_GISVEC(A68_VC ,ZWJACTR,YWJACTR,4)
static A68_64   AXJACTR = {"bool"}; 
A_GISVEC(A68_VC ,BXJACTR,AXJACTR,4)
static A68_64   CXJACTR = {"void"}; 
A_GISVEC(A68_VC ,DXJACTR,CXJACTR,4)
static A68_64   EXJACTR = {"char"}; 
A_GISVEC(A68_VC ,FXJACTR,EXJACTR,4)
static A68_64   GXJACTR = {"goto"}; 
A_GISVEC(A68_VC ,HXJACTR,GXJACTR,4)
static A68_64   IXJACTR = {"elif"}; 
A_GISVEC(A68_VC ,JXJACTR,IXJACTR,4)
static A68_64   KXJACTR = {"bits"}; 
A_GISVEC(A68_VC ,LXJACTR,KXJACTR,4)
static A68_64   MXJACTR = {"mode"}; 
A_GISVEC(A68_VC ,NXJACTR,MXJACTR,4)
static A68_64   OXJACTR = {"from"}; 
A_GISVEC(A68_VC ,PXJACTR,OXJACTR,4)
static A68_64   QXJACTR = {"real"}; 
A_GISVEC(A68_VC ,RXJACTR,QXJACTR,4)
static A68_64   SXJACTR = {"repr"}; 
A_GISVEC(A68_VC ,TXJACTR,SXJACTR,4)
static A68_64   UXJACTR = {"leng"}; 
A_GISVEC(A68_VC ,VXJACTR,UXJACTR,4)
static A68_64   WXJACTR = {"long"}; 
A_GISVEC(A68_VC ,XXJACTR,WXJACTR,4)
static A68_64   YXJACTR = {"elem"}; 
A_GISVEC(A68_VC ,ZXJACTR,YXJACTR,4)
static A68_64   AYJACTR = {"exit"}; 
A_GISVEC(A68_VC ,BYJACTR,AYJACTR,4)
static A68_64   CYJACTR = {"sign"}; 
A_GISVEC(A68_VC ,DYJACTR,CYJACTR,4)
static A68_64   EYJACTR = {"flex"}; 
A_GISVEC(A68_VC ,FYJACTR,EYJACTR,4)
static A68_64   GYJACTR = {"heap"}; 
A_GISVEC(A68_VC ,HYJACTR,GYJACTR,4)
static A68_64   IYJACTR = {"prio"}; 
A_GISVEC(A68_VC ,JYJACTR,IYJACTR,4)
static A68_64   KYJACTR = {"ouse"}; 
A_GISVEC(A68_VC ,LYJACTR,KYJACTR,4)
static A68_64   MYJACTR = {"over"}; 
A_GISVEC(A68_VC ,NYJACTR,MYJACTR,4)
static A68_64   OYJACTR = {"conj"}; 
A_GISVEC(A68_VC ,PYJACTR,OYJACTR,4)
static A68_64   QYJACTR = {"decs"}; 
A_GISVEC(A68_VC ,RYJACTR,QYJACTR,4)
static A68_64   SYJACTR = {"down"}; 
A_GISVEC(A68_VC ,TYJACTR,SYJACTR,4)
static A68_64   UYJACTR = {"here"}; 
A_GISVEC(A68_VC ,VYJACTR,UYJACTR,4)
static A68_64   WYJACTR = {"keep"}; 
A_GISVEC(A68_VC ,XYJACTR,WYJACTR,4)
static A68_64   YYJACTR = {"biop"}; 
A_GISVEC(A68_VC ,ZYJACTR,YYJACTR,4)
static A68_64   AZJACTR = {"orel"}; 
A_GISVEC(A68_VC ,BZJACTR,AZJACTR,4)
static A68_64   CZJACTR = {"code"}; 
A_GISVEC(A68_VC ,DZJACTR,CZJACTR,4)
static A68_65   GZJACTR = {"while"}; 
A_GISVEC(A68_VC ,HZJACTR,GZJACTR,5)
static A68_65   IZJACTR = {"false"}; 
A_GISVEC(A68_VC ,JZJACTR,IZJACTR,5)
static A68_65   KZJACTR = {"begin"}; 
A_GISVEC(A68_VC ,LZJACTR,KZJACTR,5)
static A68_65   MZJACTR = {"union"}; 
A_GISVEC(A68_VC ,NZJACTR,MZJACTR,5)
static A68_65   OZJACTR = {"compl"}; 
A_GISVEC(A68_VC ,PZJACTR,OZJACTR,5)
static A68_65   QZJACTR = {"round"}; 
A_GISVEC(A68_VC ,RZJACTR,QZJACTR,5)
static A68_65   SZJACTR = {"divab"}; 
A_GISVEC(A68_VC ,TZJACTR,SZJACTR,5)
static A68_65   UZJACTR = {"short"}; 
A_GISVEC(A68_VC ,VZJACTR,UZJACTR,5)
static A68_65   WZJACTR = {"modab"}; 
A_GISVEC(A68_VC ,XZJACTR,WZJACTR,5)
static A68_65   YZJACTR = {"empty"}; 
A_GISVEC(A68_VC ,ZZJACTR,YZJACTR,5)
static A68_65   AAKACTR = {"alien"}; 
A_GISVEC(A68_VC ,BAKACTR,AAKACTR,5)
static A68_65   CAKACTR = {"andth"}; 
A_GISVEC(A68_VC ,DAKACTR,CAKACTR,5)
static A68_65   EAKACTR = {"xtype"}; 
A_GISVEC(A68_VC ,FAKACTR,EAKACTR,5)
static A68_65   GAKACTR = {"ytype"}; 
A_GISVEC(A68_VC ,HAKACTR,GAKACTR,5)
static A68_66   KAKACTR = {"struct"}; 
A_GISVEC(A68_VC ,LAKACTR,KAKACTR,6)
static A68_66   MAKACTR = {"plusab"}; 
A_GISVEC(A68_VC ,NAKACTR,MAKACTR,6)
static A68_66   OAKACTR = {"entier"}; 
A_GISVEC(A68_VC ,PAKACTR,OAKACTR,6)
static A68_66   QAKACTR = {"finish"}; 
A_GISVEC(A68_VC ,RAKACTR,QAKACTR,6)
static A68_66   SAKACTR = {"format"}; 
A_GISVEC(A68_VC ,TAKACTR,SAKACTR,6)
static A68_66   UAKACTR = {"overab"}; 
A_GISVEC(A68_VC ,VAKACTR,UAKACTR,6)
static A68_66   WAKACTR = {"vector"}; 
A_GISVEC(A68_VC ,XAKACTR,WAKACTR,6)
static A68_66   YAKACTR = {"forall"}; 
A_GISVEC(A68_VC ,ZAKACTR,YAKACTR,6)
static A68_66   ABKACTR = {"plusto"}; 
A_GISVEC(A68_VC ,BBKACTR,ABKACTR,6)
static A68_42   EBKACTR = {"minusab"}; 
A_GISVEC(A68_VC ,FBKACTR,EBKACTR,7)
static A68_42   GBKACTR = {"comment"}; 
A_GISVEC(A68_VC ,HBKACTR,GBKACTR,7)
static A68_42   IBKACTR = {"timesab"}; 
A_GISVEC(A68_VC ,JBKACTR,IBKACTR,7)
static A68_42   KBKACTR = {"program"}; 
A_GISVEC(A68_VC ,LBKACTR,KBKACTR,7)
static A68_42   MBKACTR = {"shorten"}; 
A_GISVEC(A68_VC ,NBKACTR,MBKACTR,7)
static A68_42   OBKACTR = {"compose"}; 
A_GISVEC(A68_VC ,PBKACTR,OBKACTR,7)
static A68_42   QBKACTR = {"context"}; 
A_GISVEC(A68_VC ,RBKACTR,QBKACTR,7)
static A68_42   SBKACTR = {"pragmat"}; 
A_GISVEC(A68_VC ,TBKACTR,SBKACTR,7)
static A68_67   WBKACTR = {"straight"}; 
A_GISVEC(A68_VC ,XBKACTR,WBKACTR,8)
static A68_61  ACKACTR_longlongboldset;
static A68_62   GCKACTR = {"of"}; 
A_GISVEC(A68_VC ,HCKACTR,GCKACTR,2)
static A68_62   ICKACTR = {"co"}; 
A_GISVEC(A68_VC ,JCKACTR,ICKACTR,2)
static A68_62   KCKACTR = {"if"}; 
A_GISVEC(A68_VC ,LCKACTR,KCKACTR,2)
static A68_62   MCKACTR = {"fi"}; 
A_GISVEC(A68_VC ,NCKACTR,MCKACTR,2)
static A68_62   OCKACTR = {"do"}; 
A_GISVEC(A68_VC ,PCKACTR,OCKACTR,2)
static A68_62   QCKACTR = {"in"}; 
A_GISVEC(A68_VC ,RCKACTR,QCKACTR,2)
static A68_62   SCKACTR = {"or"}; 
A_GISVEC(A68_VC ,TCKACTR,SCKACTR,2)
static A68_62   UCKACTR = {"to"}; 
A_GISVEC(A68_VC ,VCKACTR,UCKACTR,2)
static A68_62   WCKACTR = {"od"}; 
A_GISVEC(A68_VC ,XCKACTR,WCKACTR,2)
static A68_62   YCKACTR = {"is"}; 
A_GISVEC(A68_VC ,ZCKACTR,YCKACTR,2)
static A68_62   ADKACTR = {"op"}; 
A_GISVEC(A68_VC ,BDKACTR,ADKACTR,2)
static A68_62   CDKACTR = {"ge"}; 
A_GISVEC(A68_VC ,DDKACTR,CDKACTR,2)
static A68_62   EDKACTR = {"by"}; 
A_GISVEC(A68_VC ,FDKACTR,EDKACTR,2)
static A68_62   GDKACTR = {"at"}; 
A_GISVEC(A68_VC ,HDKACTR,GDKACTR,2)
static A68_62   IDKACTR = {"ne"}; 
A_GISVEC(A68_VC ,JDKACTR,IDKACTR,2)
static A68_62   KDKACTR = {"up"}; 
A_GISVEC(A68_VC ,LDKACTR,KDKACTR,2)
static A68_62   MDKACTR = {"le"}; 
A_GISVEC(A68_VC ,NDKACTR,MDKACTR,2)
static A68_62   ODKACTR = {"eq"}; 
A_GISVEC(A68_VC ,PDKACTR,ODKACTR,2)
static A68_62   QDKACTR = {"im"}; 
A_GISVEC(A68_VC ,RDKACTR,QDKACTR,2)
static A68_62   SDKACTR = {"re"}; 
A_GISVEC(A68_VC ,TDKACTR,SDKACTR,2)
static A68_62   UDKACTR = {"go"}; 
A_GISVEC(A68_VC ,VDKACTR,UDKACTR,2)
static A68_62   WDKACTR = {"gt"}; 
A_GISVEC(A68_VC ,XDKACTR,WDKACTR,2)
static A68_62   YDKACTR = {"lt"}; 
A_GISVEC(A68_VC ,ZDKACTR,YDKACTR,2)
static A68_62   AEKACTR = {"pr"}; 
A_GISVEC(A68_VC ,BEKACTR,AEKACTR,2)
static A68_63   EEKACTR = {"int"}; 
A_GISVEC(A68_VC ,FEKACTR,EEKACTR,3)
static A68_63   GEKACTR = {"ref"}; 
A_GISVEC(A68_VC ,HEKACTR,GEKACTR,3)
static A68_63   IEKACTR = {"and"}; 
A_GISVEC(A68_VC ,JEKACTR,IEKACTR,3)
static A68_63   KEKACTR = {"abs"}; 
A_GISVEC(A68_VC ,LEKACTR,KEKACTR,3)
static A68_63   MEKACTR = {"nil"}; 
A_GISVEC(A68_VC ,NEKACTR,MEKACTR,3)
static A68_63   OEKACTR = {"bin"}; 
A_GISVEC(A68_VC ,PEKACTR,OEKACTR,3)
static A68_63   QEKACTR = {"end"}; 
A_GISVEC(A68_VC ,REKACTR,QEKACTR,3)
static A68_63   SEKACTR = {"for"}; 
A_GISVEC(A68_VC ,TEKACTR,SEKACTR,3)
static A68_63   UEKACTR = {"not"}; 
A_GISVEC(A68_VC ,VEKACTR,UEKACTR,3)
static A68_63   WEKACTR = {"out"}; 
A_GISVEC(A68_VC ,XEKACTR,WEKACTR,3)
static A68_63   YEKACTR = {"loc"}; 
A_GISVEC(A68_VC ,ZEKACTR,YEKACTR,3)
static A68_63   AFKACTR = {"upb"}; 
A_GISVEC(A68_VC ,BFKACTR,AFKACTR,3)
static A68_63   CFKACTR = {"mod"}; 
A_GISVEC(A68_VC ,DFKACTR,CFKACTR,3)
static A68_63   EFKACTR = {"shr"}; 
A_GISVEC(A68_VC ,FFKACTR,EFKACTR,3)
static A68_63   GFKACTR = {"odd"}; 
A_GISVEC(A68_VC ,HFKACTR,GFKACTR,3)
static A68_63   IFKACTR = {"shl"}; 
A_GISVEC(A68_VC ,JFKACTR,IFKACTR,3)
static A68_63   KFKACTR = {"lwb"}; 
A_GISVEC(A68_VC ,LFKACTR,KFKACTR,3)
static A68_63   MFKACTR = {"arg"}; 
A_GISVEC(A68_VC ,NFKACTR,MFKACTR,3)
static A68_63   OFKACTR = {"use"}; 
A_GISVEC(A68_VC ,PFKACTR,OFKACTR,3)
static A68_64   SFKACTR = {"then"}; 
A_GISVEC(A68_VC ,TFKACTR,SFKACTR,4)
static A68_64   UFKACTR = {"else"}; 
A_GISVEC(A68_VC ,VFKACTR,UFKACTR,4)
static A68_64   WFKACTR = {"skip"}; 
A_GISVEC(A68_VC ,XFKACTR,WFKACTR,4)
static A68_64   YFKACTR = {"proc"}; 
A_GISVEC(A68_VC ,ZFKACTR,YFKACTR,4)
static A68_64   AGKACTR = {"isnt"}; 
A_GISVEC(A68_VC ,BGKACTR,AGKACTR,4)
static A68_64   CGKACTR = {"case"}; 
A_GISVEC(A68_VC ,DGKACTR,CGKACTR,4)
static A68_64   EGKACTR = {"true"}; 
A_GISVEC(A68_VC ,FGKACTR,EGKACTR,4)
static A68_64   GGKACTR = {"esac"}; 
A_GISVEC(A68_VC ,HGKACTR,GGKACTR,4)
static A68_64   IGKACTR = {"bool"}; 
A_GISVEC(A68_VC ,JGKACTR,IGKACTR,4)
static A68_64   KGKACTR = {"void"}; 
A_GISVEC(A68_VC ,LGKACTR,KGKACTR,4)
static A68_64   MGKACTR = {"char"}; 
A_GISVEC(A68_VC ,NGKACTR,MGKACTR,4)
static A68_64   OGKACTR = {"goto"}; 
A_GISVEC(A68_VC ,PGKACTR,OGKACTR,4)
static A68_64   QGKACTR = {"elif"}; 
A_GISVEC(A68_VC ,RGKACTR,QGKACTR,4)
static A68_64   SGKACTR = {"bits"}; 
A_GISVEC(A68_VC ,TGKACTR,SGKACTR,4)
static A68_64   UGKACTR = {"mode"}; 
A_GISVEC(A68_VC ,VGKACTR,UGKACTR,4)
static A68_64   WGKACTR = {"from"}; 
A_GISVEC(A68_VC ,XGKACTR,WGKACTR,4)
static A68_64   YGKACTR = {"real"}; 
A_GISVEC(A68_VC ,ZGKACTR,YGKACTR,4)
static A68_64   AHKACTR = {"repr"}; 
A_GISVEC(A68_VC ,BHKACTR,AHKACTR,4)
static A68_64   CHKACTR = {"leng"}; 
A_GISVEC(A68_VC ,DHKACTR,CHKACTR,4)
static A68_64   EHKACTR = {"long"}; 
A_GISVEC(A68_VC ,FHKACTR,EHKACTR,4)
static A68_64   GHKACTR = {"elem"}; 
A_GISVEC(A68_VC ,HHKACTR,GHKACTR,4)
static A68_64   IHKACTR = {"exit"}; 
A_GISVEC(A68_VC ,JHKACTR,IHKACTR,4)
static A68_64   KHKACTR = {"sign"}; 
A_GISVEC(A68_VC ,LHKACTR,KHKACTR,4)
static A68_64   MHKACTR = {"flex"}; 
A_GISVEC(A68_VC ,NHKACTR,MHKACTR,4)
static A68_64   OHKACTR = {"heap"}; 
A_GISVEC(A68_VC ,PHKACTR,OHKACTR,4)
static A68_64   QHKACTR = {"prio"}; 
A_GISVEC(A68_VC ,RHKACTR,QHKACTR,4)
static A68_64   SHKACTR = {"ouse"}; 
A_GISVEC(A68_VC ,THKACTR,SHKACTR,4)
static A68_64   UHKACTR = {"over"}; 
A_GISVEC(A68_VC ,VHKACTR,UHKACTR,4)
static A68_64   WHKACTR = {"conj"}; 
A_GISVEC(A68_VC ,XHKACTR,WHKACTR,4)
static A68_64   YHKACTR = {"decs"}; 
A_GISVEC(A68_VC ,ZHKACTR,YHKACTR,4)
static A68_64   AIKACTR = {"down"}; 
A_GISVEC(A68_VC ,BIKACTR,AIKACTR,4)
static A68_64   CIKACTR = {"here"}; 
A_GISVEC(A68_VC ,DIKACTR,CIKACTR,4)
static A68_64   EIKACTR = {"keep"}; 
A_GISVEC(A68_VC ,FIKACTR,EIKACTR,4)
static A68_64   GIKACTR = {"biop"}; 
A_GISVEC(A68_VC ,HIKACTR,GIKACTR,4)
static A68_64   IIKACTR = {"orel"}; 
A_GISVEC(A68_VC ,JIKACTR,IIKACTR,4)
static A68_64   KIKACTR = {"code"}; 
A_GISVEC(A68_VC ,LIKACTR,KIKACTR,4)
static A68_65   OIKACTR = {"while"}; 
A_GISVEC(A68_VC ,PIKACTR,OIKACTR,5)
static A68_65   QIKACTR = {"false"}; 
A_GISVEC(A68_VC ,RIKACTR,QIKACTR,5)
static A68_65   SIKACTR = {"begin"}; 
A_GISVEC(A68_VC ,TIKACTR,SIKACTR,5)
static A68_65   UIKACTR = {"union"}; 
A_GISVEC(A68_VC ,VIKACTR,UIKACTR,5)
static A68_65   WIKACTR = {"compl"}; 
A_GISVEC(A68_VC ,XIKACTR,WIKACTR,5)
static A68_65   YIKACTR = {"round"}; 
A_GISVEC(A68_VC ,ZIKACTR,YIKACTR,5)
static A68_65   AJKACTR = {"divab"}; 
A_GISVEC(A68_VC ,BJKACTR,AJKACTR,5)
static A68_65   CJKACTR = {"short"}; 
A_GISVEC(A68_VC ,DJKACTR,CJKACTR,5)
static A68_65   EJKACTR = {"modab"}; 
A_GISVEC(A68_VC ,FJKACTR,EJKACTR,5)
static A68_65   GJKACTR = {"empty"}; 
A_GISVEC(A68_VC ,HJKACTR,GJKACTR,5)
static A68_65   IJKACTR = {"alien"}; 
A_GISVEC(A68_VC ,JJKACTR,IJKACTR,5)
static A68_65   KJKACTR = {"andth"}; 
A_GISVEC(A68_VC ,LJKACTR,KJKACTR,5)
static A68_65   MJKACTR = {"xtype"}; 
A_GISVEC(A68_VC ,NJKACTR,MJKACTR,5)
static A68_65   OJKACTR = {"ytype"}; 
A_GISVEC(A68_VC ,PJKACTR,OJKACTR,5)
static A68_66   SJKACTR = {"struct"}; 
A_GISVEC(A68_VC ,TJKACTR,SJKACTR,6)
static A68_66   UJKACTR = {"plusab"}; 
A_GISVEC(A68_VC ,VJKACTR,UJKACTR,6)
static A68_66   WJKACTR = {"entier"}; 
A_GISVEC(A68_VC ,XJKACTR,WJKACTR,6)
static A68_66   YJKACTR = {"finish"}; 
A_GISVEC(A68_VC ,ZJKACTR,YJKACTR,6)
static A68_66   AKKACTR = {"format"}; 
A_GISVEC(A68_VC ,BKKACTR,AKKACTR,6)
static A68_66   CKKACTR = {"overab"}; 
A_GISVEC(A68_VC ,DKKACTR,CKKACTR,6)
static A68_66   EKKACTR = {"vector"}; 
A_GISVEC(A68_VC ,FKKACTR,EKKACTR,6)
static A68_66   GKKACTR = {"forall"}; 
A_GISVEC(A68_VC ,HKKACTR,GKKACTR,6)
static A68_66   IKKACTR = {"plusto"}; 
A_GISVEC(A68_VC ,JKKACTR,IKKACTR,6)
static A68_42   MKKACTR = {"minusab"}; 
A_GISVEC(A68_VC ,NKKACTR,MKKACTR,7)
static A68_42   OKKACTR = {"comment"}; 
A_GISVEC(A68_VC ,PKKACTR,OKKACTR,7)
static A68_42   QKKACTR = {"timesab"}; 
A_GISVEC(A68_VC ,RKKACTR,QKKACTR,7)
static A68_42   SKKACTR = {"program"}; 
A_GISVEC(A68_VC ,TKKACTR,SKKACTR,7)
static A68_42   UKKACTR = {"shorten"}; 
A_GISVEC(A68_VC ,VKKACTR,UKKACTR,7)
static A68_42   WKKACTR = {"compose"}; 
A_GISVEC(A68_VC ,XKKACTR,WKKACTR,7)
static A68_42   YKKACTR = {"context"}; 
A_GISVEC(A68_VC ,ZKKACTR,YKKACTR,7)
static A68_42   ALKACTR = {"pragmat"}; 
A_GISVEC(A68_VC ,BLKACTR,ALKACTR,7)
static A68_67   ELKACTR = {"straight"}; 
A_GISVEC(A68_VC ,FLKACTR,ELKACTR,8)
static A68_61  ILKACTR_shortshortboldset;
static A68_62   MLKACTR = {":="}; 
A_GISVEC(A68_VC ,NLKACTR,MLKACTR,2)
static A68_62   OLKACTR = {"/="}; 
A_GISVEC(A68_VC ,PLKACTR,OLKACTR,2)
static A68_62   QLKACTR = {">="}; 
A_GISVEC(A68_VC ,RLKACTR,QLKACTR,2)
static A68_62   SLKACTR = {"<="}; 
A_GISVEC(A68_VC ,TLKACTR,SLKACTR,2)
static A68_62   ULKACTR = {"**"}; 
A_GISVEC(A68_VC ,VLKACTR,ULKACTR,2)
static A68_62   WLKACTR = {"%*"}; 
A_GISVEC(A68_VC ,XLKACTR,WLKACTR,2)
static A68_62   YLKACTR = {"+*"}; 
A_GISVEC(A68_VC ,ZLKACTR,YLKACTR,2)
static A68_63   CMKACTR = {"+:="}; 
A_GISVEC(A68_VC ,DMKACTR,CMKACTR,3)
static A68_63   EMKACTR = {"-:="}; 
A_GISVEC(A68_VC ,FMKACTR,EMKACTR,3)
static A68_63   GMKACTR = {":=:"}; 
A_GISVEC(A68_VC ,HMKACTR,GMKACTR,3)
static A68_63   IMKACTR = {"*:="}; 
A_GISVEC(A68_VC ,JMKACTR,IMKACTR,3)
static A68_63   KMKACTR = {"/:="}; 
A_GISVEC(A68_VC ,LMKACTR,KMKACTR,3)
static A68_63   MMKACTR = {"%:="}; 
A_GISVEC(A68_VC ,NMKACTR,MMKACTR,3)
static A68_63   OMKACTR = {"+=:"}; 
A_GISVEC(A68_VC ,PMKACTR,OMKACTR,3)
static A68_64   SMKACTR = {":/=:"}; 
A_GISVEC(A68_VC ,TMKACTR,SMKACTR,4)
static A68_64   UMKACTR = {"%*:="}; 
A_GISVEC(A68_VC ,VMKACTR,UMKACTR,4)
static A68_61  YMKACTR_symbolset;
static A68_62   SNKACTR = {"or"}; 
A_GISVEC(A68_VC ,TNKACTR,SNKACTR,2)
static A68_63   WNKACTR = {"and"}; 
A_GISVEC(A68_VC ,XNKACTR,WNKACTR,3)

A_STATIC A68_VOID  JSJACTR_generator(A68_BOOL  ISJACTR_anonymous, A68_56  *ReturnedValue);

A_STATIC A68_VOID  LSJACTR_generator(A68_BOOL  KSJACTR_anonymous, A68_VC  *ReturnedValue);

A68_INT  BNKACTR_lookup(A68_VC  Word, A68_BOOL  Bold);

A68_INT  QNKACTR_optboollookup(A68_VC  Word, A68_BOOL  Bold);

A_STATIC A68_VOID  LSJACTR_generator(A68_BOOL  KSJACTR_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  MSJACTR;  /* clause result */
A68_VC  NSJACTR;  /* OPERATORS - dynamic generator */
{ 
NSJACTR.upb = 0 ;
( KSJACTR_anonymous? A_VLOC(A68_CHAR ,NSJACTR): A_VHEAP(A68_CHAR ,NSJACTR) );
MSJACTR = NSJACTR;
} 
*ReturnedValue = (MSJACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  JSJACTR_generator(A68_BOOL  ISJACTR_anonymous, A68_56  *ReturnedValue)
{ 
A68_59  OSJACTR_anonymous;
A68_VC  PSJACTR;  /* avoid structure result */
A68_58 * QSJACTR;  /* YIELD */
A68_56  RSJACTR;  /* clause result */
{ 
LSJACTR_generator( ISJACTR_anonymous, &PSJACTR );
QSJACTR = (&((&OSJACTR_anonymous)->Word)) ;
(*QSJACTR) = PSJACTR;
RSJACTR = OSJACTR_anonymous;
} 
*ReturnedValue = (RSJACTR);
return;
} 
#undef NL

A68_INT  BNKACTR_lookup(A68_VC  Word, A68_BOOL  Bold)
{ 
A68_61  FNKACTR;  /* clause result */
A68_61  GNKACTR_set;
A68_INT  HNKACTR_answer;
A68_56  INKACTR_pair;
A68_INT  JNKACTR;  /* YIELD */
A68_60  KNKACTR;  /* forall yield */
A68_56 * LNKACTR;  /* forall control - []x */
A68_INT  MNKACTR;  /* forall loop counter */
A68_INT  NNKACTR;  /* clause result */
A_PROC_ENTRY(lookup);
 /* line 345: */
 /* line 347: */
{ 
 /* line 348: */
if ( Bold )
{ 
 /* line 349: */
if ( MQIACTR_longlongoption )
{ 
FNKACTR = ACKACTR_longlongboldset;
} 
else
{ 
 /* line 350: */
 /* line 351: */
FNKACTR = ILKACTR_shortshortboldset;
} 
} 
else
{ 
FNKACTR = YMKACTR_symbolset;
} 
GNKACTR_set = FNKACTR;
 /* line 353: */
 /* line 355: */
 /* line 356: */
 /* line 358: */
if ( (Word.upb<=GNKACTR_set.dim[0].upb) )
{ 
 /* line 359: */
JNKACTR = Word.upb ;
KNKACTR = A_R1INDEX(GNKACTR_set,JNKACTR) ;
MNKACTR = KNKACTR.dim[0].upb - KNKACTR.dim[0].lwb;
LNKACTR = KNKACTR.data;
for (;MNKACTR-- >= 0;
(LNKACTR += KNKACTR.dim[0].stride
) )
{
INKACTR_pair = *LNKACTR;
 /* line 360: */
 /* line 361: */
 /* line 363: */
if ( A_VC_EQ(Word,INKACTR_pair.Word) )
{ 
HNKACTR_answer = INKACTR_pair.Value;
 /* line 364: */
 /* line 365: */
 /* line 366: */
goto ENKACTR_foundit;
} 
}
 /* line 367: */
} 
 /* line 372: */
if ( Bold )
{ 
NNKACTR = 156;
} 
else
{ 
 /* line 373: */
 /* line 375: */
NNKACTR = 176;
} 
goto CNKACTR;
ENKACTR_foundit:
 /* line 377: */
NNKACTR = HNKACTR_answer;
CNKACTR: ;
} 
A_PROC_EXIT(lookup);
return( NNKACTR );
} 
#undef NL

A68_INT  QNKACTR_optboollookup(A68_VC  Word, A68_BOOL  Bold)
{ 
A68_BOOL  RNKACTR;  /* optbool result */
A68_INT  UNKACTR;  /* clause result */
A68_BOOL  VNKACTR;  /* optbool result */
A_PROC_ENTRY(optboollookup);
 /* line 387: */
RNKACTR = Bold;
if ( RNKACTR )
{ /* line 388: */
RNKACTR = A_VC_EQ(Word,TNKACTR);
}
 /* line 390: */
if ( RNKACTR )
{ 
UNKACTR = 205;
} 
else
{ 
VNKACTR = Bold;
if ( VNKACTR )
{ /* line 391: */
VNKACTR = A_VC_EQ(Word,XNKACTR);
}
 /* line 393: */
if ( VNKACTR )
{ 
 /* line 394: */
UNKACTR = 204;
} 
else
{ 
 /* line 395: */
UNKACTR = BNKACTR_lookup(Word, Bold);
} 
} 
A_PROC_EXIT(optboollookup);
return( UNKACTR );
} 
#undef NL
 /* line 1: */
 /* line 3: */
void CSJACTR(void)   /* initialise DECS lookup */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/shields/projects/Algol68/Tools/Algol68toC/src/a68toc","-v","-uname","seedfile","-lib","/home/shields/projects/Algol68/Tools/Algol68toC/a68config","-dir","/home/shields/projects/Algol68/Tools/Algol68toC/a68config","-dir","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel","-dir",".","lookup.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/shields/projects/Algol68/Tools/Algol68toC/a68config","A68_CDIR=","A68_DIR=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/shields/projects/Algol68/Tools/Algol68toC/a68config/a68config.m","./environment.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_57  SSJACTR;  /* procedure value */
A68_68  TSJACTR;  /* collateral clause result */
A68_56  USJACTR;  /* collateral clause result */
A68_VC  VSJACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_60  WSJACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_69  XSJACTR;  /* collateral clause result */
A68_60  UUJACTR;  /* OPERATORS - istruct to row */
A68_70  VUJACTR;  /* collateral clause result */
A68_60  IWJACTR;  /* OPERATORS - istruct to row */
A68_71  JWJACTR;  /* collateral clause result */
A68_60  EZJACTR;  /* OPERATORS - istruct to row */
A68_72  FZJACTR;  /* collateral clause result */
A68_60  IAKACTR;  /* OPERATORS - istruct to row */
A68_73  JAKACTR;  /* collateral clause result */
A68_60  CBKACTR;  /* OPERATORS - istruct to row */
A68_74  DBKACTR;  /* collateral clause result */
A68_60  UBKACTR;  /* OPERATORS - istruct to row */
A68_56  VBKACTR;  /* collateral clause result */
A68_60  YBKACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_61  ZBKACTR;  /* OPERATORS - istruct to row */
A68_68  BCKACTR;  /* collateral clause result */
A68_56  CCKACTR;  /* collateral clause result */
A68_VC  DCKACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_60  ECKACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_69  FCKACTR;  /* collateral clause result */
A68_60  CEKACTR;  /* OPERATORS - istruct to row */
A68_70  DEKACTR;  /* collateral clause result */
A68_60  QFKACTR;  /* OPERATORS - istruct to row */
A68_71  RFKACTR;  /* collateral clause result */
A68_60  MIKACTR;  /* OPERATORS - istruct to row */
A68_72  NIKACTR;  /* collateral clause result */
A68_60  QJKACTR;  /* OPERATORS - istruct to row */
A68_73  RJKACTR;  /* collateral clause result */
A68_60  KKKACTR;  /* OPERATORS - istruct to row */
A68_74  LKKACTR;  /* collateral clause result */
A68_60  CLKACTR;  /* OPERATORS - istruct to row */
A68_56  DLKACTR;  /* collateral clause result */
A68_60  GLKACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_61  HLKACTR;  /* OPERATORS - istruct to row */
A68_75  JLKACTR;  /* collateral clause result */
A68_60  KLKACTR;  /* OPERATORS - vacuum */
A68_76  LLKACTR;  /* collateral clause result */
A68_60  AMKACTR;  /* OPERATORS - istruct to row */
A68_76  BMKACTR;  /* collateral clause result */
A68_60  QMKACTR;  /* OPERATORS - istruct to row */
A68_77  RMKACTR;  /* collateral clause result */
A68_60  WMKACTR;  /* OPERATORS - istruct to row */
A68_61  XMKACTR;  /* OPERATORS - istruct to row */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
HPIACTR();   /* USE environment */
/* --- Initialise configuration information */
A_config.source_file = "/home/shields/projects/Algol68/Tools/Algol68toC/src/lookup.a68";
A_config.translation_time = "Sun Sep 26 21:50:56 2004";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "BSJACTR (from seed file) ";
A_config.spec_change_time = "Sun Sep 26 21:50:56 2004";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS lookup);
UEAALIB_a68config(LGAALIB_configinfo, GSJACTR);
 /* line 47: */
SSJACTR.fn.fn_global = JSJACTR_generator;
SSJACTR.nonlocals = A68_NIL;
HSJACTR_anonymous = SSJACTR;
 /* line 49: */
 /* line 50: */
 /* line 51: */
 /* line 52: */
USJACTR.Word = A_HVEC(VSJACTR,'i',A68_CHAR );
 /* line 53: */
USJACTR.Value = 217;
 /* line 54: */
TSJACTR.data[0] = A_HARR(WSJACTR,USJACTR,A68_56 );
 /* line 55: */
XSJACTR.data[0].Word = ZSJACTR;
 /* line 56: */
XSJACTR.data[0].Value = 116;
XSJACTR.data[1].Word = BTJACTR;
 /* line 57: */
XSJACTR.data[1].Value = 60;
XSJACTR.data[2].Word = DTJACTR;
 /* line 58: */
XSJACTR.data[2].Value = 52;
XSJACTR.data[3].Word = FTJACTR;
 /* line 59: */
XSJACTR.data[3].Value = 56;
XSJACTR.data[4].Word = HTJACTR;
 /* line 60: */
XSJACTR.data[4].Value = 147;
XSJACTR.data[5].Word = JTJACTR;
 /* line 61: */
XSJACTR.data[5].Value = 47;
XSJACTR.data[6].Word = LTJACTR;
 /* line 62: */
XSJACTR.data[6].Value = 230;
XSJACTR.data[7].Word = NTJACTR;
 /* line 63: */
XSJACTR.data[7].Value = 151;
XSJACTR.data[8].Word = PTJACTR;
 /* line 64: */
XSJACTR.data[8].Value = 145;
XSJACTR.data[9].Word = RTJACTR;
 /* line 65: */
XSJACTR.data[9].Value = 227;
XSJACTR.data[10].Word = TTJACTR;
 /* line 66: */
XSJACTR.data[10].Value = 167;
XSJACTR.data[11].Word = VTJACTR;
 /* line 67: */
XSJACTR.data[11].Value = 209;
XSJACTR.data[12].Word = XTJACTR;
 /* line 68: */
XSJACTR.data[12].Value = 150;
XSJACTR.data[13].Word = ZTJACTR;
 /* line 69: */
XSJACTR.data[13].Value = 154;
XSJACTR.data[14].Word = BUJACTR;
 /* line 70: */
XSJACTR.data[14].Value = 211;
XSJACTR.data[15].Word = DUJACTR;
 /* line 71: */
XSJACTR.data[15].Value = 233;
XSJACTR.data[16].Word = FUJACTR;
 /* line 72: */
XSJACTR.data[16].Value = 208;
XSJACTR.data[17].Word = HUJACTR;
 /* line 73: */
XSJACTR.data[17].Value = 210;
XSJACTR.data[18].Word = JUJACTR;
 /* line 74: */
XSJACTR.data[18].Value = 251;
XSJACTR.data[19].Word = LUJACTR;
 /* line 75: */
XSJACTR.data[19].Value = 250;
XSJACTR.data[20].Word = NUJACTR;
 /* line 76: */
XSJACTR.data[20].Value = 115;
XSJACTR.data[21].Word = PUJACTR;
 /* line 77: */
XSJACTR.data[21].Value = 207;
XSJACTR.data[22].Word = RUJACTR;
 /* line 78: */
XSJACTR.data[22].Value = 206;
XSJACTR.data[23].Word = TUJACTR;
 /* line 79: */
 /* line 80: */
XSJACTR.data[23].Value = 65;
TSJACTR.data[1] = A_HIS1ARR(UUJACTR,XSJACTR,A68_56 ,24);
 /* line 81: */
VUJACTR.data[0].Word = XUJACTR;
 /* line 82: */
VUJACTR.data[0].Value = 138;
VUJACTR.data[1].Word = ZUJACTR;
 /* line 83: */
VUJACTR.data[1].Value = 141;
VUJACTR.data[2].Word = BVJACTR;
 /* line 84: */
VUJACTR.data[2].Value = 229;
VUJACTR.data[3].Word = DVJACTR;
 /* line 85: */
VUJACTR.data[3].Value = 241;
VUJACTR.data[4].Word = FVJACTR;
 /* line 86: */
VUJACTR.data[4].Value = 121;
VUJACTR.data[5].Word = HVJACTR;
 /* line 87: */
VUJACTR.data[5].Value = 242;
VUJACTR.data[6].Word = JVJACTR;
 /* line 88: */
VUJACTR.data[6].Value = 55;
VUJACTR.data[7].Word = LVJACTR;
 /* line 89: */
VUJACTR.data[7].Value = 148;
VUJACTR.data[8].Word = NVJACTR;
 /* line 90: */
VUJACTR.data[8].Value = 240;
VUJACTR.data[9].Word = PVJACTR;
 /* line 91: */
VUJACTR.data[9].Value = 49;
VUJACTR.data[10].Word = RVJACTR;
 /* line 92: */
VUJACTR.data[10].Value = 157;
VUJACTR.data[11].Word = TVJACTR;
 /* line 93: */
VUJACTR.data[11].Value = 202;
VUJACTR.data[12].Word = VVJACTR;
 /* line 94: */
VUJACTR.data[12].Value = 215;
VUJACTR.data[13].Word = XVJACTR;
 /* line 95: */
VUJACTR.data[13].Value = 219;
VUJACTR.data[14].Word = ZVJACTR;
 /* line 96: */
VUJACTR.data[14].Value = 246;
VUJACTR.data[15].Word = BWJACTR;
 /* line 97: */
VUJACTR.data[15].Value = 218;
VUJACTR.data[16].Word = DWJACTR;
 /* line 98: */
VUJACTR.data[16].Value = 203;
VUJACTR.data[17].Word = FWJACTR;
 /* line 99: */
VUJACTR.data[17].Value = 252;
VUJACTR.data[18].Word = HWJACTR;
 /* line 100: */
 /* line 101: */
VUJACTR.data[18].Value = 183;
TSJACTR.data[2] = A_HIS1ARR(IWJACTR,VUJACTR,A68_56 ,19);
 /* line 102: */
JWJACTR.data[0].Word = LWJACTR;
 /* line 103: */
JWJACTR.data[0].Value = 46;
JWJACTR.data[1].Word = NWJACTR;
 /* line 104: */
JWJACTR.data[1].Value = 48;
JWJACTR.data[2].Word = PWJACTR;
 /* line 105: */
JWJACTR.data[2].Value = 122;
JWJACTR.data[3].Word = RWJACTR;
 /* line 106: */
JWJACTR.data[3].Value = 144;
JWJACTR.data[4].Word = TWJACTR;
 /* line 107: */
JWJACTR.data[4].Value = 228;
JWJACTR.data[5].Word = VWJACTR;
 /* line 108: */
JWJACTR.data[5].Value = 53;
JWJACTR.data[6].Word = XWJACTR;
 /* line 109: */
JWJACTR.data[6].Value = 119;
JWJACTR.data[7].Word = ZWJACTR;
 /* line 110: */
JWJACTR.data[7].Value = 57;
JWJACTR.data[8].Word = BXJACTR;
 /* line 111: */
JWJACTR.data[8].Value = 134;
JWJACTR.data[9].Word = DXJACTR;
 /* line 112: */
JWJACTR.data[9].Value = 133;
JWJACTR.data[10].Word = FXJACTR;
 /* line 113: */
JWJACTR.data[10].Value = 135;
JWJACTR.data[11].Word = HXJACTR;
 /* line 114: */
JWJACTR.data[11].Value = 126;
JWJACTR.data[12].Word = JXJACTR;
 /* line 115: */
JWJACTR.data[12].Value = 43;
JWJACTR.data[13].Word = LXJACTR;
 /* line 116: */
JWJACTR.data[13].Value = 137;
JWJACTR.data[14].Word = NXJACTR;
 /* line 117: */
JWJACTR.data[14].Value = 165;
JWJACTR.data[15].Word = PXJACTR;
 /* line 118: */
JWJACTR.data[15].Value = 149;
JWJACTR.data[16].Word = RXJACTR;
 /* line 119: */
JWJACTR.data[16].Value = 139;
JWJACTR.data[17].Word = TXJACTR;
 /* line 120: */
JWJACTR.data[17].Value = 243;
JWJACTR.data[18].Word = VXJACTR;
 /* line 121: */
JWJACTR.data[18].Value = 244;
JWJACTR.data[19].Word = XXJACTR;
 /* line 122: */
JWJACTR.data[19].Value = 155;
JWJACTR.data[20].Word = ZXJACTR;
 /* line 123: */
JWJACTR.data[20].Value = 220;
JWJACTR.data[21].Word = BYJACTR;
 /* line 124: */
JWJACTR.data[21].Value = 123;
JWJACTR.data[22].Word = DYJACTR;
 /* line 125: */
JWJACTR.data[22].Value = 247;
JWJACTR.data[23].Word = FYJACTR;
 /* line 126: */
JWJACTR.data[23].Value = 131;
JWJACTR.data[24].Word = HYJACTR;
 /* line 127: */
JWJACTR.data[24].Value = 178;
JWJACTR.data[25].Word = JYJACTR;
 /* line 128: */
JWJACTR.data[25].Value = 166;
JWJACTR.data[26].Word = LYJACTR;
 /* line 129: */
JWJACTR.data[26].Value = 44;
JWJACTR.data[27].Word = NYJACTR;
 /* line 130: */
JWJACTR.data[27].Value = 214;
JWJACTR.data[28].Word = PYJACTR;
 /* line 131: */
JWJACTR.data[28].Value = 253;
JWJACTR.data[29].Word = RYJACTR;
 /* line 132: */
JWJACTR.data[29].Value = 180;
JWJACTR.data[30].Word = TYJACTR;
 /* line 133: */
JWJACTR.data[30].Value = 219;
JWJACTR.data[31].Word = VYJACTR;
 /* line 134: */
JWJACTR.data[31].Value = 184;
JWJACTR.data[32].Word = XYJACTR;
 /* line 135: */
JWJACTR.data[32].Value = 113;
JWJACTR.data[33].Word = ZYJACTR;
 /* line 136: */
JWJACTR.data[33].Value = 192;
JWJACTR.data[34].Word = BZJACTR;
 /* line 137: */
JWJACTR.data[34].Value = 205;
JWJACTR.data[35].Word = DZJACTR;
 /* line 138: */
 /* line 139: */
JWJACTR.data[35].Value = 162;
TSJACTR.data[3] = A_HIS1ARR(EZJACTR,JWJACTR,A68_56 ,36);
 /* line 140: */
FZJACTR.data[0].Word = HZJACTR;
 /* line 141: */
FZJACTR.data[0].Value = 152;
FZJACTR.data[1].Word = JZJACTR;
 /* line 142: */
FZJACTR.data[1].Value = 120;
FZJACTR.data[2].Word = LZJACTR;
 /* line 143: */
FZJACTR.data[2].Value = 51;
FZJACTR.data[3].Word = NZJACTR;
 /* line 144: */
FZJACTR.data[3].Value = 142;
FZJACTR.data[4].Word = PZJACTR;
 /* line 145: */
FZJACTR.data[4].Value = 140;
FZJACTR.data[5].Word = RZJACTR;
 /* line 146: */
FZJACTR.data[5].Value = 248;
FZJACTR.data[6].Word = TZJACTR;
 /* line 147: */
FZJACTR.data[6].Value = 226;
FZJACTR.data[7].Word = VZJACTR;
 /* line 148: */
FZJACTR.data[7].Value = 172;
FZJACTR.data[8].Word = XZJACTR;
 /* line 149: */
FZJACTR.data[8].Value = 225;
FZJACTR.data[9].Word = ZZJACTR;
 /* line 150: */
FZJACTR.data[9].Value = 189;
FZJACTR.data[10].Word = BAKACTR;
 /* line 151: */
FZJACTR.data[10].Value = 112;
FZJACTR.data[11].Word = DAKACTR;
 /* line 152: */
FZJACTR.data[11].Value = 204;
FZJACTR.data[12].Word = FAKACTR;
 /* line 153: */
FZJACTR.data[12].Value = 194;
FZJACTR.data[13].Word = HAKACTR;
 /* line 155: */
 /* line 156: */
FZJACTR.data[13].Value = 195;
TSJACTR.data[4] = A_HIS1ARR(IAKACTR,FZJACTR,A68_56 ,14);
 /* line 157: */
JAKACTR.data[0].Word = LAKACTR;
 /* line 158: */
JAKACTR.data[0].Value = 143;
JAKACTR.data[1].Word = NAKACTR;
 /* line 159: */
JAKACTR.data[1].Value = 221;
JAKACTR.data[2].Word = PAKACTR;
 /* line 160: */
JAKACTR.data[2].Value = 249;
JAKACTR.data[3].Word = RAKACTR;
 /* line 161: */
JAKACTR.data[3].Value = 174;
JAKACTR.data[4].Word = TAKACTR;
 /* line 162: */
JAKACTR.data[4].Value = 136;
JAKACTR.data[5].Word = VAKACTR;
 /* line 163: */
JAKACTR.data[5].Value = 224;
JAKACTR.data[6].Word = XAKACTR;
 /* line 164: */
JAKACTR.data[6].Value = 164;
JAKACTR.data[7].Word = ZAKACTR;
 /* line 165: */
JAKACTR.data[7].Value = 170;
JAKACTR.data[8].Word = BBKACTR;
 /* line 166: */
 /* line 167: */
JAKACTR.data[8].Value = 231;
TSJACTR.data[5] = A_HIS1ARR(CBKACTR,JAKACTR,A68_56 ,9);
 /* line 168: */
DBKACTR.data[0].Word = FBKACTR;
 /* line 169: */
DBKACTR.data[0].Value = 222;
DBKACTR.data[1].Word = HBKACTR;
 /* line 170: */
DBKACTR.data[1].Value = 61;
DBKACTR.data[2].Word = JBKACTR;
 /* line 171: */
DBKACTR.data[2].Value = 223;
DBKACTR.data[3].Word = LBKACTR;
 /* line 172: */
DBKACTR.data[3].Value = 179;
DBKACTR.data[4].Word = NBKACTR;
 /* line 173: */
DBKACTR.data[4].Value = 245;
DBKACTR.data[5].Word = PBKACTR;
 /* line 174: */
DBKACTR.data[5].Value = 181;
DBKACTR.data[6].Word = RBKACTR;
 /* line 175: */
DBKACTR.data[6].Value = 182;
DBKACTR.data[7].Word = TBKACTR;
 /* line 176: */
 /* line 177: */
DBKACTR.data[7].Value = 66;
TSJACTR.data[6] = A_HIS1ARR(UBKACTR,DBKACTR,A68_56 ,8);
 /* line 178: */
VBKACTR.Word = XBKACTR;
 /* line 179: */
VBKACTR.Value = 169;
 /* line 180: */
TSJACTR.data[7] = A_HARR(YBKACTR,VBKACTR,A68_56 );
ACKACTR_longlongboldset = A_HIS1ARR(ZBKACTR,TSJACTR,A68_60 ,8);
 /* line 182: */
 /* line 183: */
 /* line 184: */
 /* line 185: */
CCKACTR.Word = A_HVEC(DCKACTR,'i',A68_CHAR );
 /* line 186: */
CCKACTR.Value = 217;
 /* line 187: */
BCKACTR.data[0] = A_HARR(ECKACTR,CCKACTR,A68_56 );
 /* line 188: */
FCKACTR.data[0].Word = HCKACTR;
 /* line 189: */
FCKACTR.data[0].Value = 116;
FCKACTR.data[1].Word = JCKACTR;
 /* line 190: */
FCKACTR.data[1].Value = 60;
FCKACTR.data[2].Word = LCKACTR;
 /* line 191: */
FCKACTR.data[2].Value = 52;
FCKACTR.data[3].Word = NCKACTR;
 /* line 192: */
FCKACTR.data[3].Value = 56;
FCKACTR.data[4].Word = PCKACTR;
 /* line 193: */
FCKACTR.data[4].Value = 147;
FCKACTR.data[5].Word = RCKACTR;
 /* line 194: */
FCKACTR.data[5].Value = 47;
FCKACTR.data[6].Word = TCKACTR;
 /* line 195: */
FCKACTR.data[6].Value = 230;
FCKACTR.data[7].Word = VCKACTR;
 /* line 196: */
FCKACTR.data[7].Value = 151;
FCKACTR.data[8].Word = XCKACTR;
 /* line 197: */
FCKACTR.data[8].Value = 145;
FCKACTR.data[9].Word = ZCKACTR;
 /* line 198: */
FCKACTR.data[9].Value = 227;
FCKACTR.data[10].Word = BDKACTR;
 /* line 199: */
FCKACTR.data[10].Value = 167;
FCKACTR.data[11].Word = DDKACTR;
 /* line 200: */
FCKACTR.data[11].Value = 209;
FCKACTR.data[12].Word = FDKACTR;
 /* line 201: */
FCKACTR.data[12].Value = 150;
FCKACTR.data[13].Word = HDKACTR;
 /* line 202: */
FCKACTR.data[13].Value = 154;
FCKACTR.data[14].Word = JDKACTR;
 /* line 203: */
FCKACTR.data[14].Value = 211;
FCKACTR.data[15].Word = LDKACTR;
 /* line 204: */
FCKACTR.data[15].Value = 233;
FCKACTR.data[16].Word = NDKACTR;
 /* line 205: */
FCKACTR.data[16].Value = 208;
FCKACTR.data[17].Word = PDKACTR;
 /* line 206: */
FCKACTR.data[17].Value = 210;
FCKACTR.data[18].Word = RDKACTR;
 /* line 207: */
FCKACTR.data[18].Value = 251;
FCKACTR.data[19].Word = TDKACTR;
 /* line 208: */
FCKACTR.data[19].Value = 250;
FCKACTR.data[20].Word = VDKACTR;
 /* line 209: */
FCKACTR.data[20].Value = 115;
FCKACTR.data[21].Word = XDKACTR;
 /* line 210: */
FCKACTR.data[21].Value = 207;
FCKACTR.data[22].Word = ZDKACTR;
 /* line 211: */
FCKACTR.data[22].Value = 206;
FCKACTR.data[23].Word = BEKACTR;
 /* line 212: */
 /* line 213: */
FCKACTR.data[23].Value = 65;
BCKACTR.data[1] = A_HIS1ARR(CEKACTR,FCKACTR,A68_56 ,24);
 /* line 214: */
DEKACTR.data[0].Word = FEKACTR;
 /* line 215: */
DEKACTR.data[0].Value = 138;
DEKACTR.data[1].Word = HEKACTR;
 /* line 216: */
DEKACTR.data[1].Value = 141;
DEKACTR.data[2].Word = JEKACTR;
 /* line 217: */
DEKACTR.data[2].Value = 229;
DEKACTR.data[3].Word = LEKACTR;
 /* line 218: */
DEKACTR.data[3].Value = 241;
DEKACTR.data[4].Word = NEKACTR;
 /* line 219: */
DEKACTR.data[4].Value = 121;
DEKACTR.data[5].Word = PEKACTR;
 /* line 220: */
DEKACTR.data[5].Value = 242;
DEKACTR.data[6].Word = REKACTR;
 /* line 221: */
DEKACTR.data[6].Value = 55;
DEKACTR.data[7].Word = TEKACTR;
 /* line 222: */
DEKACTR.data[7].Value = 148;
DEKACTR.data[8].Word = VEKACTR;
 /* line 223: */
DEKACTR.data[8].Value = 240;
DEKACTR.data[9].Word = XEKACTR;
 /* line 224: */
DEKACTR.data[9].Value = 49;
DEKACTR.data[10].Word = ZEKACTR;
 /* line 225: */
DEKACTR.data[10].Value = 157;
DEKACTR.data[11].Word = BFKACTR;
 /* line 226: */
DEKACTR.data[11].Value = 202;
DEKACTR.data[12].Word = DFKACTR;
 /* line 227: */
DEKACTR.data[12].Value = 215;
DEKACTR.data[13].Word = FFKACTR;
 /* line 228: */
DEKACTR.data[13].Value = 219;
DEKACTR.data[14].Word = HFKACTR;
 /* line 229: */
DEKACTR.data[14].Value = 246;
DEKACTR.data[15].Word = JFKACTR;
 /* line 230: */
DEKACTR.data[15].Value = 218;
DEKACTR.data[16].Word = LFKACTR;
 /* line 231: */
DEKACTR.data[16].Value = 203;
DEKACTR.data[17].Word = NFKACTR;
 /* line 232: */
DEKACTR.data[17].Value = 252;
DEKACTR.data[18].Word = PFKACTR;
 /* line 233: */
 /* line 234: */
DEKACTR.data[18].Value = 183;
BCKACTR.data[2] = A_HIS1ARR(QFKACTR,DEKACTR,A68_56 ,19);
 /* line 235: */
RFKACTR.data[0].Word = TFKACTR;
 /* line 236: */
RFKACTR.data[0].Value = 46;
RFKACTR.data[1].Word = VFKACTR;
 /* line 237: */
RFKACTR.data[1].Value = 48;
RFKACTR.data[2].Word = XFKACTR;
 /* line 238: */
RFKACTR.data[2].Value = 122;
RFKACTR.data[3].Word = ZFKACTR;
 /* line 239: */
RFKACTR.data[3].Value = 144;
RFKACTR.data[4].Word = BGKACTR;
 /* line 240: */
RFKACTR.data[4].Value = 228;
RFKACTR.data[5].Word = DGKACTR;
 /* line 241: */
RFKACTR.data[5].Value = 53;
RFKACTR.data[6].Word = FGKACTR;
 /* line 242: */
RFKACTR.data[6].Value = 119;
RFKACTR.data[7].Word = HGKACTR;
 /* line 243: */
RFKACTR.data[7].Value = 57;
RFKACTR.data[8].Word = JGKACTR;
 /* line 244: */
RFKACTR.data[8].Value = 134;
RFKACTR.data[9].Word = LGKACTR;
 /* line 245: */
RFKACTR.data[9].Value = 133;
RFKACTR.data[10].Word = NGKACTR;
 /* line 246: */
RFKACTR.data[10].Value = 135;
RFKACTR.data[11].Word = PGKACTR;
 /* line 247: */
RFKACTR.data[11].Value = 126;
RFKACTR.data[12].Word = RGKACTR;
 /* line 248: */
RFKACTR.data[12].Value = 43;
RFKACTR.data[13].Word = TGKACTR;
 /* line 249: */
RFKACTR.data[13].Value = 137;
RFKACTR.data[14].Word = VGKACTR;
 /* line 250: */
RFKACTR.data[14].Value = 165;
RFKACTR.data[15].Word = XGKACTR;
 /* line 251: */
RFKACTR.data[15].Value = 149;
RFKACTR.data[16].Word = ZGKACTR;
 /* line 252: */
RFKACTR.data[16].Value = 139;
RFKACTR.data[17].Word = BHKACTR;
 /* line 253: */
RFKACTR.data[17].Value = 243;
RFKACTR.data[18].Word = DHKACTR;
 /* line 254: */
RFKACTR.data[18].Value = 245;
RFKACTR.data[19].Word = FHKACTR;
 /* line 255: */
RFKACTR.data[19].Value = 172;
RFKACTR.data[20].Word = HHKACTR;
 /* line 256: */
RFKACTR.data[20].Value = 220;
RFKACTR.data[21].Word = JHKACTR;
 /* line 257: */
RFKACTR.data[21].Value = 123;
RFKACTR.data[22].Word = LHKACTR;
 /* line 258: */
RFKACTR.data[22].Value = 247;
RFKACTR.data[23].Word = NHKACTR;
 /* line 259: */
RFKACTR.data[23].Value = 131;
RFKACTR.data[24].Word = PHKACTR;
 /* line 260: */
RFKACTR.data[24].Value = 178;
RFKACTR.data[25].Word = RHKACTR;
 /* line 261: */
RFKACTR.data[25].Value = 166;
RFKACTR.data[26].Word = THKACTR;
 /* line 262: */
RFKACTR.data[26].Value = 44;
RFKACTR.data[27].Word = VHKACTR;
 /* line 263: */
RFKACTR.data[27].Value = 214;
RFKACTR.data[28].Word = XHKACTR;
 /* line 264: */
RFKACTR.data[28].Value = 253;
RFKACTR.data[29].Word = ZHKACTR;
 /* line 265: */
RFKACTR.data[29].Value = 180;
RFKACTR.data[30].Word = BIKACTR;
 /* line 266: */
RFKACTR.data[30].Value = 219;
RFKACTR.data[31].Word = DIKACTR;
 /* line 267: */
RFKACTR.data[31].Value = 184;
RFKACTR.data[32].Word = FIKACTR;
 /* line 268: */
RFKACTR.data[32].Value = 113;
RFKACTR.data[33].Word = HIKACTR;
 /* line 269: */
RFKACTR.data[33].Value = 192;
RFKACTR.data[34].Word = JIKACTR;
 /* line 270: */
RFKACTR.data[34].Value = 205;
RFKACTR.data[35].Word = LIKACTR;
 /* line 271: */
 /* line 272: */
RFKACTR.data[35].Value = 162;
BCKACTR.data[3] = A_HIS1ARR(MIKACTR,RFKACTR,A68_56 ,36);
 /* line 273: */
NIKACTR.data[0].Word = PIKACTR;
 /* line 274: */
NIKACTR.data[0].Value = 152;
NIKACTR.data[1].Word = RIKACTR;
 /* line 275: */
NIKACTR.data[1].Value = 120;
NIKACTR.data[2].Word = TIKACTR;
 /* line 276: */
NIKACTR.data[2].Value = 51;
NIKACTR.data[3].Word = VIKACTR;
 /* line 277: */
NIKACTR.data[3].Value = 142;
NIKACTR.data[4].Word = XIKACTR;
 /* line 278: */
NIKACTR.data[4].Value = 140;
NIKACTR.data[5].Word = ZIKACTR;
 /* line 279: */
NIKACTR.data[5].Value = 248;
NIKACTR.data[6].Word = BJKACTR;
 /* line 280: */
NIKACTR.data[6].Value = 226;
NIKACTR.data[7].Word = DJKACTR;
 /* line 281: */
NIKACTR.data[7].Value = 155;
NIKACTR.data[8].Word = FJKACTR;
 /* line 282: */
NIKACTR.data[8].Value = 225;
NIKACTR.data[9].Word = HJKACTR;
 /* line 283: */
NIKACTR.data[9].Value = 189;
NIKACTR.data[10].Word = JJKACTR;
 /* line 284: */
NIKACTR.data[10].Value = 112;
NIKACTR.data[11].Word = LJKACTR;
 /* line 285: */
NIKACTR.data[11].Value = 204;
NIKACTR.data[12].Word = NJKACTR;
 /* line 286: */
NIKACTR.data[12].Value = 194;
NIKACTR.data[13].Word = PJKACTR;
 /* line 288: */
 /* line 289: */
NIKACTR.data[13].Value = 195;
BCKACTR.data[4] = A_HIS1ARR(QJKACTR,NIKACTR,A68_56 ,14);
 /* line 290: */
RJKACTR.data[0].Word = TJKACTR;
 /* line 291: */
RJKACTR.data[0].Value = 143;
RJKACTR.data[1].Word = VJKACTR;
 /* line 292: */
RJKACTR.data[1].Value = 221;
RJKACTR.data[2].Word = XJKACTR;
 /* line 293: */
RJKACTR.data[2].Value = 249;
RJKACTR.data[3].Word = ZJKACTR;
 /* line 294: */
RJKACTR.data[3].Value = 174;
RJKACTR.data[4].Word = BKKACTR;
 /* line 295: */
RJKACTR.data[4].Value = 136;
RJKACTR.data[5].Word = DKKACTR;
 /* line 296: */
RJKACTR.data[5].Value = 224;
RJKACTR.data[6].Word = FKKACTR;
 /* line 297: */
RJKACTR.data[6].Value = 164;
RJKACTR.data[7].Word = HKKACTR;
 /* line 298: */
RJKACTR.data[7].Value = 170;
RJKACTR.data[8].Word = JKKACTR;
 /* line 299: */
 /* line 300: */
RJKACTR.data[8].Value = 231;
BCKACTR.data[5] = A_HIS1ARR(KKKACTR,RJKACTR,A68_56 ,9);
 /* line 301: */
LKKACTR.data[0].Word = NKKACTR;
 /* line 302: */
LKKACTR.data[0].Value = 222;
LKKACTR.data[1].Word = PKKACTR;
 /* line 303: */
LKKACTR.data[1].Value = 61;
LKKACTR.data[2].Word = RKKACTR;
 /* line 304: */
LKKACTR.data[2].Value = 223;
LKKACTR.data[3].Word = TKKACTR;
 /* line 305: */
LKKACTR.data[3].Value = 179;
LKKACTR.data[4].Word = VKKACTR;
 /* line 306: */
LKKACTR.data[4].Value = 244;
LKKACTR.data[5].Word = XKKACTR;
 /* line 307: */
LKKACTR.data[5].Value = 181;
LKKACTR.data[6].Word = ZKKACTR;
 /* line 308: */
LKKACTR.data[6].Value = 182;
LKKACTR.data[7].Word = BLKACTR;
 /* line 309: */
 /* line 310: */
LKKACTR.data[7].Value = 66;
BCKACTR.data[6] = A_HIS1ARR(CLKACTR,LKKACTR,A68_56 ,8);
 /* line 311: */
DLKACTR.Word = FLKACTR;
 /* line 312: */
DLKACTR.Value = 169;
 /* line 313: */
BCKACTR.data[7] = A_HARR(GLKACTR,DLKACTR,A68_56 );
ILKACTR_shortshortboldset = A_HIS1ARR(HLKACTR,BCKACTR,A68_60 ,8);
 /* line 315: */
 /* line 316: */
 /* line 317: */
 /* line 318: */
 /* line 319: */
JLKACTR.data[0] = A_R1VAC(KLKACTR);
 /* line 320: */
LLKACTR.data[0].Word = NLKACTR;
 /* line 321: */
LLKACTR.data[0].Value = 163;
LLKACTR.data[1].Word = PLKACTR;
 /* line 322: */
LLKACTR.data[1].Value = 211;
LLKACTR.data[2].Word = RLKACTR;
 /* line 323: */
LLKACTR.data[2].Value = 209;
LLKACTR.data[3].Word = TLKACTR;
 /* line 324: */
LLKACTR.data[3].Value = 208;
LLKACTR.data[4].Word = VLKACTR;
 /* line 325: */
LLKACTR.data[4].Value = 216;
LLKACTR.data[5].Word = XLKACTR;
 /* line 326: */
LLKACTR.data[5].Value = 215;
LLKACTR.data[6].Word = ZLKACTR;
 /* line 327: */
 /* line 328: */
LLKACTR.data[6].Value = 217;
JLKACTR.data[1] = A_HIS1ARR(AMKACTR,LLKACTR,A68_56 ,7);
 /* line 329: */
BMKACTR.data[0].Word = DMKACTR;
 /* line 330: */
BMKACTR.data[0].Value = 221;
BMKACTR.data[1].Word = FMKACTR;
 /* line 331: */
BMKACTR.data[1].Value = 222;
BMKACTR.data[2].Word = HMKACTR;
 /* line 332: */
BMKACTR.data[2].Value = 227;
BMKACTR.data[3].Word = JMKACTR;
 /* line 333: */
BMKACTR.data[3].Value = 223;
BMKACTR.data[4].Word = LMKACTR;
 /* line 334: */
BMKACTR.data[4].Value = 226;
BMKACTR.data[5].Word = NMKACTR;
 /* line 335: */
BMKACTR.data[5].Value = 224;
BMKACTR.data[6].Word = PMKACTR;
 /* line 336: */
 /* line 337: */
BMKACTR.data[6].Value = 231;
JLKACTR.data[2] = A_HIS1ARR(QMKACTR,BMKACTR,A68_56 ,7);
 /* line 338: */
RMKACTR.data[0].Word = TMKACTR;
 /* line 339: */
RMKACTR.data[0].Value = 228;
RMKACTR.data[1].Word = VMKACTR;
 /* line 340: */
 /* line 341: */
RMKACTR.data[1].Value = 225;
JLKACTR.data[3] = A_HIS1ARR(WMKACTR,RMKACTR,A68_56 ,2);
YMKACTR_symbolset = A_HIS1ARR(XMKACTR,JLKACTR,A68_60 ,4);
 /* line 344: */
 /* line 380: */
 /* line 409: */
 /* line 411: */
 /* line 413: */
/*SKIP*/;
A_PROC_EXIT(DECS lookup);
} 
#undef NL
/* end of translation of lookup.a68 */
