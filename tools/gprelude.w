<!DOCTYPE html>

<html>
<head>
<!-- copyright (c) 2013 by Sian Mountbatten -->
<meta name="generator" content="Epsilon 13.12" />
<meta name="revised" content="Sian Mountbatten, 2013-02-25" />
<meta name="keywords" content="Web 68,General prelude" />
<meta name="description" content="General prelude manual" />
<meta name="author" content="Sian Mountbatten (poenikatu@fastmail.co.uk)" />
<meta http-equiv="content-type" content="text/html; charset=UTF-8" />
<link rel="stylesheet" type="text/css" href="doc.css" />
<title>General Prelude</title>
</head>
@2Introduction.
This prelude is intended to be included from a Web 68 file.

   $Log: gprelude.w,v $
	Revision 1.7  2013/02/24 07:39:37  sian
	Removed binchop from the identifiers of the `binary chop'

   Revision 1.6  2012/03/13 18:25:00  sian
   Removed Xterm control sequences

   Revision 1.5  2012/02/01 11:20:36  sian
   Minor bugs

   Revision 1.4  2004/09/30 13:15:53  sian
   Minor changes to the text

   Revision 1.3  2004/08/08 20:52:14  sian
   Added `ref result' parameter to `binary chop'

   Revision 1.2  2003/12/26 16:41:37  sian
   Minor alterations

   Revision 1.1  2003/12/26 11:38:23  sian
   String operators, sorts and Xterm control sequences


This message should reflect the current version.

@m cvs gprelude = "$Id: $"

@ The prelude contains macros which provide extended <tt>[]CHAR</tt>
operators and various other constructs, including the <i>binary
chop</i> and sorts.

The description of each macro is given as follows:
<ol>
   <li>The macro identifier (and its type in parentheses)</li>
   <li>The identifier of the underlying code (unless the macro is
       multi-use)</li>
   <li>The type of object provided by the macro and its mode (if
       applicable)</li>
   <li>A description of what the code of the macro does</li>
</ol>

@ The prelude consists of definitions only which are used by the
mother Web 68 file. All the operator macro identifiers start with the
words "macro gp op" followed by the operator indicant in lower-case.
Where an operator is defined for more than one mode of operand(s), the
mode is included in the identifier. For example: !macro gp op uc row
char! has one operand whose mode is ![]CHAR!. The three exceptions
are !binary chop! and !insert value! because they are multi-use
macros, and !gp replace! which is a procedure, not an operator.

@2String operators.
These naturally fall into several different groups, viz:-
<dl>
   <dt>Case operators</dt>
   <dd>These change one or more characters to upper or lower case.</dd>
   <dt>Sub-string operators</dt>
   <dd>These select a sub-string according to different criteria.</dd>
	<dt>Sub-string enquiries</dt>
	<dd>These enquire about strings which begin or end a given string.</dd>
	<dt>Character ranges</dt>
	<dd></dd>
   <dt>Search operators</dt>
   <dd>These search a string for a given character or a given string, or
       search a row of strings for a given string.</dd>
   <dt>String manipulation</dt>
   <dd>These change a string according to certain criteria.</dd>
</dl>

@3Case operators.
These operators change the case of their operand.

@ Converts its operand to upper-case (ASCII characters only).

@d macro gp op uc char =
OP UC = (CHAR c)CHAR: (ABS c>=ABS "a" & ABS c<=ABS"z"|REPR(ABS c-32)|c)

@ Converts its operand to upper-case (ASCII characters only).

@d macro gp op uc row char =
macro gp op uc char;
OP UC = ([]CHAR s)[]CHAR:
(
   [LWB s:UPB s]CHAR ss;
   FOR i FROM LWB ss TO UPB ss
   DO
      ss[i]:=UC s[i]
   OD;
   ss
)

@ Converts its operand to lower-case (ASCII characters only).

@d macro gp op lc char =
OP LC = (CHAR c)CHAR: (ABS c>=ABS "A" & ABS c<=ABS "Z"|REPR(ABS c+32)|c)

@ Converts its operand to lower-case (ASCII characters only).

@d macro gp op lc row char =
macro gp op lc char;
OP LC = ([]CHAR s)[]CHAR:
(
   [LWB s:UPB s]CHAR ss;
   FOR i FROM LWB ss TO UPB ss
   DO
      ss[i]:=LC s[i]
   OD;
   ss
)

@3Substring operators.
These operators yield a part of their left operand, depending on their
right operand.

@ Priority of the operator !AFTER!.

@d macro prio after = PRIO AFTER = 6

@ Priority of the operator !UPTO!.

@d macro prio upto = PRIO UPTO = 5

@ Priority of the operator !DOWNTO!.

@d macro prio downto = PRIO DOWNTO = 5

@ This operator yields its left operand upto, but not including, its
right operand. If the right operand is not found, it yields the whole
of its left operand. The lower bound of the yield is always the lower
bound of the left operand.

@d macro gp op upto =
macro prio upto;
OP UPTO = ([]CHAR s, CHAR t)[]CHAR: #but not including#
IF s=""
THEN ""
ELIF INT to ix; char in string(t,to ix,s)
THEN s [ : to ix-1@@LWB s]
ELSE s
FI

@ This operator searches for its right operand starting from the end of
its left operand. If the right operand is found, the left operand from
its end downto, but not including, the right operand is yielded. If
the right operand is not found, the whole of the left operand is
yielded. A sub-string yield reflects the bounds of the position of
the right operand.

@d macro gp op downto =
macro prio downto;
OP DOWNTO = ([]CHAR s, CHAR t)[]CHAR: #but not including#
IF s=""
THEN ""
ELIF
   INT to ix:=UPB s+1;
   FOR i FROM UPB s BY ---1 TO LWB s WHILE s[i]/=t
   DO
      to ix:=i
   OD;
   to ix>UPB s
THEN s
ELSE s[to ix : @@to ix]
FI

@ This operator yields the part of its left operand which is after
the character of its right operand. If its right operand cannot be
found, then the yield is the empty string. The bounds of a non-empty
string are kept from the left operand.

@d macro gp op after =
macro prio after;
OP AFTER = ([]CHAR s, CHAR t)[]CHAR:
IF INT to ix; char in string(t,to ix,s)
THEN
   IF to ix=UPB s
   THEN ""
   ELSE s [to ix+1:@@to ix+1]
   FI
ELSE ""
FI

@ This operator creates a range of characters whose lower bound is the
absolute value of the operand with the lower absolute value and whose
upper bound is the absolute value of the operand with the higher
absolute value. Thus the order of the operands does not matter. The
lower bound of the yielded string is always <span class="r">1</span>.

@d macro gp op minus =
OP - = (CHAR a,b)[]CHAR:
IF ABS a <= ABS b
THEN
   [ABS a:ABS b]CHAR s;
   FOR i FROM LWB s TO UPB s DO s[i]:=REPR i OD;
   s[@@1]
ELSE
   [ABS b:ABS a]CHAR s;
   FOR i FROM LWB s TO UPB s DO s[i]:=REPR i OD;
   s[@@1]
FI

@ This operator removes leading, trailing and internal spaces and control
characters, replacing multiple such with a single blank. The lower
bound of the yielded string is always <span class="r">1</span>.

@d macro gp op trim =
OP TRIM = ([] CHAR s)[] CHAR:
(
	INT lwb:=LWB s, upb:=UPB s;
	BOOL in ws:=FALSE;

	FROM lwb TO upb WHILE ABS s[lwb] <= ABS blank DO lwb+:=1 OD;
	FROM upb BY -1 TO lwb WHILE ABS s[upb] <= ABS blank DO upb-:=1 OD;

	[lwb:upb]CHAR ss;
	INT ss sz:=lwb-1;

	FOR i FROM lwb TO upb
	DO
		CHAR si=s[i];
		IF ABS si <= ABS blank
		THEN in ws:=TRUE
		ELSE
			IF #ABS si > ABS blank# in ws
			THEN ss[ss sz+:=1]:=blank; in ws:=FALSE
			FI;
			ss[ss sz+:=1]:=si
		FI
	OD;
	ss[:ss sz]
)

@ These operators yield the first or the last character of a string. Here are
their priorities.

@d macro prio begins = PRIO @!BEGINS = 4
@d macro prio ends = PRIO @!ENDS = 4

@d macro gp op begins char =
macro prio begins;
OP BEGINS = (CHAR c,[]CHAR s)BOOL: c=s[LWB s]

@d macro gp op begins row char =
macro prio begins;
OP BEGINS = ([]CHAR a,b)BOOL:
IF a="" THEN TRUE
ELIF b="" THEN FALSE
ELIF UPB a[:] > UPB b[:]
THEN FALSE
ELSE a=b[:UPB a[:]]
FI

@d macro gp op ends char =
macro prio ends;
OP ENDS = (CHAR c,[]CHAR s)BOOL: c=s[UPB s]

@d macro gp op ends row char =
macro prio ends;
OP ENDS = ([]CHAR a,b)BOOL:
IF a="" THEN TRUE
ELIF b="" THEN FALSE
ELIF UPB a[:] > UPB b[:]
THEN FALSE
ELSE a=b[UPB b[:]-UPB a[:]+1:]
FI

@3Search operators.
The following operators are all dyadic, so here is  the priority declaration.

@d macro prio find = PRIO @!FIND = 6

@ The !FIND! operator uses the routine !char in string! to provide useful
infix forms. In each case, the routine yields one less than the lower
bound of the string if the character or characters cannot be found. Of
course, this presumes that the lower bound of the given multiple is
greater than !-maxint!, a likely occurrence.@^system dependencies@>
<ol>
   <li>With mode !PROC(CHAR,[]CHAR)INT!, this is the equivalent of
      !char in string!, but yields the index of the character in the string.
   <li>With mode !PROC([]CHAR,[]CHAR)INT!, this yields the index of
      the left-hand operand in the right-hand operand.</li>
   <li>With mode !PROC([]CHAR,[][]CHAR)INT!, this yields the index of
      the string which is the same as the required string.</li>
</ol>

@d macro gp op find char row char =
macro prio find;
OP FIND = (CHAR c, [] CHAR s)INT:
   (INT p; char in string(c,p,s)|p|LWB s-1)

@d macro gp op find row char row char =
macro gp op find char row char;
OP FIND = ([]CHAR a,b)INT:
IF a = ""                                   THEN LWB b
ELIF b = ""                                 THEN LWB b-1
ELIF INT st1 = a[LWB a] FIND b; st1 < LWB b THEN st1
ELIF st1+UPB a-LWB a <= UPB b
THEN #a could be at position st1: in b#
   IF a = b[st1:st1+UPB a-LWB a]
   THEN st1
   ELIF INT st2 = a FIND b[st1+1:@@st1+1];  st2=st1
   THEN LWB b-1
   ELSE st2
   FI
ELSE LWB b-1
FI #FIND#

@d macro gp op find row char row row char =
macro prio find;
OP FIND = ([]CHAR s, [][]CHAR set) INT:
(
    INT p := LWB set - 1;
    FOR n FROM LWB set TO UPB set
    WHILE NOT(s = set [n] | p := n; TRUE | FALSE) DO SKIP OD;
    p
)

@3String manipulation.
This procedure replaces all characters in !x! which occur in !s! with the
corresponding character in !y!.

@d macro gp replace =
PROC replace = ([] CHAR s, x, y)[] CHAR:
(
   [LWB s : UPB s] CHAR ss;

   FOR n FROM LWB s TO UPB s
   DO
       ss [n] :=
           (INT ix:=LWB s-1; char in string(s[n],ix,x)| y [ix] | s [n])
   OD;

   ss
) #replace#

@ This operator reverses the characters in its !STRING! operand.

@d macro gp op reverse =
OP REVERSE = ([]CHAR s) []CHAR:
IF s = ""
THEN ""
ELSE
   [LWB s:UPB s]CHAR ss;
   FOR i FROM UPB s BY ---1 TO LWB s
   DO
      ss[LWB s+UPB s-i]:=s[i]
   OD;
   ss
FI #REVERSE#

@ The operator !LOP! removes all characters following the last !c! character
including !c!.

@d macro prio lop = PRIO LOP = 7

@d macro gp op lop =
macro gp op reverse;
macro gp op after;
macro prio lop;
OP LOP = ([]CHAR s,CHAR c)[]CHAR:
   REVERSE(REVERSE s AFTER c)

@2The !XOR! operator.
Here is its priority.

@d macro prio xor = PRIO @!XOR = 4

@ Here are its definitions for all the various lengths of !BITS!.

@d macro gp op xor bits =
macro prio xor;
OP XOR = (BITS a,b)BITS: a & NOT b OR NOT a & b
@d macro gp op xor long bits =
macro prio xor;
OP XOR = (LONG BITS a,b)LONG BITS: a & NOT b OR NOT a & b
@d macro gp op xor short bits =
macro prio xor;
OP XOR = (SHORT BITS a,b)SHORT BITS: a & NOT b OR NOT a & b
@d macro gp op xor short short bits =
macro prio xor;
OP XOR = (SHORT SHORT BITS a,b)SHORT SHORT BITS: a & NOT b OR NOT a & b

@2Sorts for Algol 68.
This part was originally developed by Dave Lloyd of Oxford and
Cambridge Compilers Limited to which full credit should be given for
this ingenious solution to sorts in Algol 68.

Writing sorting algorithms in Algol 68 suffers from the need to
specify the modes of the items being sorted. Unfortunately, modals are
not available in the language, so something special needs to be done.
The following routines use a multiple containing simple integers which
is re-ordered according to a procedure given as a parameter to the
sort.

Both sort routines have the same interface:-
   !PROC sort = (INT l, u, PROC(INT,INT)BOOL before)[]INT:!
yielding a row of integer indices from ![l:u]! sorted so that
   !before(i,j)! implies !i < j!

To get sorted values, do something like this:-
<pre>
   [n]COMPL z;
   ... code to assign values to z ...
   []INT index=sort(LWB z,UPB z,(INT i,j)BOOL: ABS z[i] < ABS z[j]);

   FOR i FROM LWB z TO UPB z
   DO
      put bin(f,z[index[i]])
   OD
</pre>

@ Here is the procedure for the !bubble sort!.

@d macro gp bubble sort =
PROC bubble sort = (INT @!l,@!u, PROC(INT,INT)BOOL @!before)[]INT:
BEGIN
   [l:u]INT @!keys; FOR i FROM l TO u DO keys[i]:=i OD;

   WHILE
      BOOL @!ordered:=TRUE;

      FOR n FROM l TO u-1
      DO
         IF INT @!i = keys[n], j=keys[n+1]; before(j,i)
         THEN@/
            keys[n]:=j;  keys[n+1]:=i;
            ordered:=FALSE
         FI
      OD;

      NOT ordered
   DO SKIP OD;

   keys
END #bubble sort#

@ Here is the procedure for the shell sort.

@d macro gp shell sort =
PROC shell sort = (INT @!l,@!u, PROC(INT,INT)BOOL @!before)[]INT:
BEGIN
   [l:u]INT @!keys;  FOR i FROM l TO u DO keys[i]:=i OD;
   INT @!inc:=(u+l)%2;  #initial value#

   WHILE
      WHILE
         BOOL @!ordered:=TRUE;

         FOR n FROM LWB keys TO UPB keys - inc
         DO
            IF INT @!i = keys[n], j = keys[n+inc]; before(j,i)
            THEN
               keys[n]:=j;  keys[n+inc]:=i;
               ordered:=FALSE
            FI
         OD;

         NOT ordered
      DO SKIP OD;

      inc /= 1
   DO
      inc %:= 2
   OD;

   keys
END #shell sort#

@2Binary chop for Algol 68.
The binary chop is an efficient means of searching a sorted multiple.
The macro below has four parameters:-
<ol>
   <li>An expression yielding a one-dimensional multiple.</li>
   <li>The discriminant: an expression yielding a value to be compared.</li>
   <li>An expression which yields a meek primary which will be
      followed by an indexer. The indexed third parameter should yield a
      value whose mode is relevant to the mode of the discriminant for the
      operations of !=!  and !&lt;!.</li>
   <li>An expression yielding a name of mode !REF INT! which will
      contain the index of the insertion point if the discriminant has not
      been found.</li>
</ol>
The macro yields the index of the element in !multiple! which equals
!discriminant! or one less than the lower bound of !multiple! if
!discriminant! cannot be found.

@m binary chop(multiple,discriminant,meek primary,ref result) =
   BEGIN
      INT l:=LWB multiple,u:=UPB multiple,m;

      WHILE
         IF l <= u
         THEN
            m:=ABS(BIN(l+u) SHR 1);
            discriminant /= meek primary[m]
         ELSE FALSE
         FI
      DO
         IF discriminant < meek primary[m]
         THEN u:=m-1
         ELSE l:=m+1
         FI
      OD;

      ref result:=(l>u|u|m);
      (l>u|LWB multiple-1|m)
   END

@ This macro facilitates the insertion of a new value into a flexible
multiple. The input flexible multiple and the local multiple which
will have an upper bound 1 more than the input multiple, must be
declared before using the macro.

@m insert value(input mult,local mult,value,ins pt) =
	(IF ins pt >= LWB input mult
	 THEN local mult[:ins pt]:=input mult[:ins pt]
	 FI;
	 IF ins pt+1 <= UPB local mult
	 THEN local mult[ins pt+1]:=value
	 FI;
	 IF ins pt+2 <= UPB local mult
	 THEN local mult[ins pt+2:]:=input mult[ins pt+1:]
	 FI;
	 input mult:=local mult)

@ End of gprelude.w

</body>

</html>
