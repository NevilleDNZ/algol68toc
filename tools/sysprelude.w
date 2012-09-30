@2Introduction.
This module is copyright &copy; 2013 Sian Mountbatten. It
may be freely distributed on the terms of the GNU Public
Licence.

The module is intended to be included into a Web 68 file
using the Web 68 include command. Its routines provide the
following:-
<ol>
   <li>Monitor routines.</li>
   <li>Byte order routines.</li>
   <li>Ownership declarations.</li>
   <li>Directory creation.</li>
   <li>Symbolic links.</li>
   <li>Scanning a directory.</li>
   <li>Process control.</li>
   <li>User and group identifiers.</li>
   <li>Time routines.</li>
   <li>File stream routines.</li>
   <li>File statting routines.</li>
   <li>Signals.</li>
   <li>Polling.</li>
</ol>
Macro identifiers adhere to naming conventions:
<ol>
   <li>Declarative macro identifiers start with the words "macro sys" </li>
   <li>Multi-use macros start with the word "sys" </li>
</ol>
This prelude includes the system error prelude and the general prelude.

@isyserr.w@>
@igprelude.w@>

@2Monitor routines.
The first routine outputs the parameters to the !monitor
file! file.  The file !monitor file! is declared globally.

@d macro sys monitor file = FILE monitor file

@d macro sys monitor =
macro sys monitor file;
PROC monitor=([]UNION(SIMPLOUT,PROC(REF FILE)VOID) s)BOOL:
IF open(monitor file,idf(monitor file),stand back channel)/=0
THEN FALSE
ELSE
   set(monitor file,0,0,logical end(monitor file));
   put(monitor file,s);
   close(monitor file);
   TRUE
FI

@ Before using !monitor!, the file should be established.
The user supplies the file identification.

@d macro sys start monitor =
macro sys monitor file;
macro sys monitor;
PROC start monitor = (STRING fn)BOOL:
IF establish(monitor file,fn,stand back channel,0,0,0)/=0
THEN FALSE
ELSE
   put(monitor file,("Monitor log",newline,
                     "===========",newline));
   close(monitor file);
   TRUE
FI

@2Byte order routines.
These are routines defined in the C library.

@d macro sys htonl =
PROC(BITS)BITS htonl = ALIEN "HTONL"
   "#define HTONL(hostlong) htonl(hostlong)"

@d macro sys htons =
PROC(SHORT BITS)SHORT BITS htons = ALIEN "HTONS"
   "#define HTONS(hostshort) htons(hostshort)"

@d macro sys ntohl =
PROC(BITS)BITS ntohl = ALIEN "NTOHL"
   "#define NTOHL(netlong) ntohl(netlong)"

@d macro sys ntohs =
PROC(SHORT BITS)SHORT BITS ntohs = ALIEN "NTOHS"
   "#define NTOHS(netshort) ntohs(netshort)"

@2Ownership routines.
This routine accesses a file using its identification and
changes its ownership to the user !owner! and group
!group! specified.

@d macro sys chown =
PROC chown = (STRING path, INT owner, group)INT:
BEGIN
   PROC(STR,INT,INT)INT posix chown
      = ALIEN "CHOWN"
      "#include <sys/types.h>"
      "#include <unistd.h>"
      "#define CHOWN(p,u,g) \"
      "  A_int_INT(chown(A_VC_charptr(p),\"
      "            A_INT_int(u),A_INT_int(g)))";

   posix chown(MAKERVC path,owner,group)
END #chown#

@ This routine accesses a file using an open !REF FILE! and
changes its ownership to the user !owner! and group !group!
specified.

@d macro sys fchown =
PROC fchown = (REF FILE f, INT owner, group)INT:
BEGIN
   PROC(INT,INT,INT)INT posix fchown
      = ALIEN "FCHOWN"
      "#define FCHOWN(fd,u,g) A_int_INT(fchown(fd,u,g))";

   posix fchown(sysfile OF f,owner,group)
END

@2Directory processing.
This routine creates a new directory. The permissions of
the created directory are !mode & NOT umask!. See the man
page for <tt>mkdir(2)</tt>.

@d macro sys mkdir =
PROC mkdir = (STRING s,BITS mode)INT:
BEGIN
   PROC(VECTOR[]CHAR,INT)INT posix mkdir
      = ALIEN "MKDIR"
      "#include <sys/stat.h>"
      "#include <sys/types.h>"
      "#define MKDIR(path,mode) A_int_INT(mkdir(A_VC_charptr(path),A_INT_int(mode)))";
   posix mkdir(Z MAKERVC s,ABS mode)
END

@ The next routine deletes a directory.

@d macro sys rmdir =
PROC rmdir = (STRING s)INT:
BEGIN
   PROC(VECTOR[]CHAR)INT posix rmdir
      = ALIEN "RMDIR"
      "#define RMDIR(path) A_int_INT(rmdir(A_VC_charptr(path)))";
   posix rmdir(Z MAKERVC s)
END

@ This routine changes the current working directory to the
specified string.

@d macro sys chdir =
PROC chdir = (STRING s)INT:
BEGIN
   PROC(VECTOR[]CHAR)INT posix chdir
      = ALIEN "CHDIR"
      "#define CHDIR(path) \"
      "   A_int_INT(chdir(A_VC_charptr(path)))";
   posix chdir(Z MAKERVC s)
END

@2Symbolic links.
The next routine dereferences a symbolic link to get the
identification of the referenced file. It yields a null
string if there is an error. It starts with the declaration
of the C&nbsp;function !readlink!.

@d macro sys read link =
syserr enametoolong;
PROC read link = (STRING link)STRING:
IF   PROC(VECTOR[]CHAR,RVC)INT bsd readlink@/
   = ALIEN "READLINK"@/
   "#include <fcntl.h>"@/
   "#define READLINK(path,buf) \"@/
   "  A_int_INT(readlink(A_VC_charptr(path),A_VC_charptr(buf),(buf).upb))";

   @<System: define a holder for an !RVC!@>
   @<System: loop until !bsd readlink! yields a positive value@>
   path len>0
THEN @<System: extract the string from the yielded value@>
ELSE ""
FI #read link#

@ The buffer !buf! (of mode !REF VECTOR[]CHAR!) must be big
enough to hold the referenced identification which is not
null-terminated. The buffer starts with !64! characters.
The !link! parameter is also converted to a !VECTOR[]CHAR!.

@<System: define a holder...@>=
REF VECTOR[]CHAR rrvc:=HEAP VECTOR[64]CHAR;

@ The !STRING! parameter must also be converted into an
!RVC! whose data component can be used by the
!A_VC_charptr! macro.

@<System: define a holder...@>=
RVC p link = MAKERVC link;

@ Finally, the actual number of characters in the yielded
path in a local name should be stored.

@<System: define a holder...@>=
INT path len;

@ @<System: loop until...@>=
WHILE
   IF (path len:=bsd readlink(p link,rrvc)) = -1
   THEN errno = syserr enametoolong
   ELSE FALSE
   FI
DO
   rrvc:=HEAP VECTOR[UPB rrvc * 2]CHAR
OD;

@ Extracting the string consists of a simple slice of a
!REF VECTOR[]CHAR! and coercing it to mode ![]CHAR!.

@<System: extract...@>=
rrvc[:path len]

@ The next routine gets the current working directory and
yields it as a !STRING!. Again, the buffer starts with
!256! bytes and is doubled until it is long enough.

@d macro sys getcwd =
macro gp op upto;
PROC getcwd = STRING:
BEGIN
   PROC(VECTOR[]CHAR)CSTR posix getcwd
      = ALIEN "GETCWD"
      "#define GETCWD(buf) \"
      " (void *)getcwd(A_VC_charptr(buf),A_INT_int(buf.upb))";

   RVC rvc:=HEAP VECTOR[256]CHAR;
   INT p;
   WHILE (posix getcwd(rvc) IS NIL|errno=syserr erange|FALSE)
   DO rvc:=HEAP VECTOR[UPB rvc * 2]CHAR OD;
   rvc UPTO nul ch
END #getcwd#

@ The operator !ENV! tries to open a file using the !env channel! with
the identification given as its operand.  If this succeeds, it reads
any value, closes the file and yields the value. If
the environment variable does not exist, or is empty, the operator
yields the empty string.

@d macro sys op env =
OP ENV = ([]CHAR @!en)[]CHAR:
IF FILE @!ef;
   open(ef,en,env channel)/=0
THEN put(stand err,("ENV: cannot open ef with en=[",en,"]",newline)); ""
ELSE STRING @!y;
   on logical file end(ef,(REF FILE f)BOOL: (GOTO eof; SKIP));
   make term(ef,nul ch);
   get(ef,y);
eof:
   close(ef);
   y
FI #ENV#

@ The operator !TC! converts a tilde in a file
identification into the user's home directory. If the given
string does not start with a tilde, it is returned
unchanged.

@d macro sys op tc =
macro sys op env;
OP TC = (STRING s)STRING:
IF   s=""
THEN s
ELIF s[LWB s]/="~"
THEN s
ELIF []CHAR home=ENV "HOME";
   s="~"
THEN home
ELSE home+s[LWB s+1:]
FI #TC#

@ The operator !NORM! normalises a path, replacing !..! and
!.! as appropriate.

@d macro sys op norm =
macro sys get cwd;
macro sys op tc;
macro gp op lop;
macro gp op begins char;
macro gp op ends char;
macro gp op find row char row char;
macro gp replace;
OP NORM = ([]CHAR s)[]CHAR:
IF STRING ss:=s[@@1];
   []CHAR
      cwd=getcwd,
      ds="./",
      sd="/.",
      dds="../",
      sdd="/..";
   INT p:=0;
   CHAR dot=".",stroke="/",tilde="~",flag dot=REPR 1;
   ss=""
THEN cwd
ELSE
   #Deal with a leading tilde#
   IF tilde BEGINS ss
   THEN ss:=TC ss
   FI;
   WHILE char in string(dot,p,ss)
   DO
      ss:=
         CASE UPB ss
         IN
#1#         cwd
            ,
#2#         IF ss=ds #./#
            THEN cwd
            ELIF ss=sd #/.#
            THEN stroke
            ELIF ss=".."
            THEN cwd LOP stroke
            ELIF dot BEGINS ss
            THEN flag dot+ss[2]
            ELSE ss[1]+flag dot
            FI
#>2#      OUT
            IF   ss=dds
            THEN cwd LOP stroke
            ELIF ss[:3]=dds
            THEN cwd LOP stroke + ss[3:]
            ELIF ss=sdd
            THEN stroke
            ELIF ss[:2]=ds
            THEN ss[3:]
            ELIF INT @!p1:=sd FIND ss;
               p1=UPB ss-1
            THEN
               #/. at the end, so remove it#
               ss[:p1-1]
            ELIF p1>=1 #p1=stroke#
            THEN #internal /.#
               IF (UPB ss>p1+1|ss[p1+2]=stroke|FALSE)
               THEN
                  (p1>1|ss[:p1-1]|"")+ss[p1+2:] #/./ => /#
               ELIF (UPB ss>=p1+2|ss[p1+2]=dot|FALSE)
               THEN
                  #/..#
                  ss[:p1-1] LOP stroke+(p1+2<UPB ss|ss[p1+3:]|"")
               ELSE
                  #meaningful dot#
                  ss[:p1]+flag dot+ss[p1+2:]
               FI
            ELIF INT p2:=ds FIND ss;
               p2 = 1 #ds=./#
            THEN
               #./ at the start#
               cwd+ss[p2 + 1:]
            ELIF p2 > 1
            THEN #internal ./ p2 at .#
               IF ss[p2 - 1]=dot
               THEN
                  #internal ../#
                  ss[:p2 - 2] LOP stroke+ss[p2 + 1:]
               ELSE
                  #internal dot#
                  ss[:p-1]+flag dot+ss[p+1:]
               FI
            ELSE
               #no ./ so meaningful dot#
               ss[:p - 1]+flag dot+ss[p + 1:]
            FI
         ESAC[@@1]
   OD;
   replace(ss,flag dot,dot)
FI #NORM#

@2Scanning a directory.
Directories can be opened, closed and their contents read.
The mode !DIRENT! stores the necessary details. The
equivalent C structure !dirent! has a !256! character
vector as its last field. Algol 68 transput is used to
ensure that the last field has the appropriate size.

@d macro sys mode dirent =
MODE DIRENT = STRUCT(INT d ino,               #inode number#
                         d off,               #offset to the next dirent#
                     SHORT BITS d reclen,     #length of this record#
                     SHORT SHORT BITS d type, #file type#
                     STRING d name)           #filename#

@ The routine !scan dir! has three parameters:-
<dl>
   <dt>dir</dt>
   <dd>The identification of the directory.</dd>

   <dt>do</dt>
   <dd>The routine to be executed for each entry in the
       directory.</dd>

   <dt>si</dt>
   <dd>The values to be passed to !do!. They must all start with !REF!.</dd>
</dl>

@d macro sys scan dir =
macro sys mode dirent;
PROC scan dir = (STRING dir,
                 PROC(REF DIRENT,[]SIMPLIN)BOOL do,
                 []SIMPLIN si)INT:
IF @<Scan: declare the !ALIEN! functions required for handling the directory@>
   CPTR dir stream = posix opendir(Z MAKERVC dir);
   dir stream IS CPTR(NIL)
THEN errno
ELSE
   @<Scan: use a memory file to extract the directory entry@>
   @<Scan: loop to get each directory entry@>
   posix closedir(dir stream);
   0
FI #scan dir#

@ This is the local routine which actually gets a directory
entry. The value !dirent sz! has been obtained by
consulting the C&nbsp;structure given in the man page for
<tt>readdir(3)</tt>.

A memory channel file is created and the contents of the
stream pointed to by !dirent! are read into !de!.

@<Scan: use a memory...@>=
PROC get dirent = (CPTR d)REF DIRENT:
IF INT dirent sz = 267;
   CSTR dirent=posix readdir(d);
   dirent IS CSTR(NIL)
THEN REF DIRENT(NIL)
ELSE
   HEAP DIRENT de;
   FILE mf;
   open(mf,dirent[:dirent sz],mem channel);
   make term(mf,nul ch);
   get bin(mf,de);
   close(mf);
   de
FI; #get dirent#

@ The principal part of !scan dir! consists of a loop whose
discriminant depends on whether the directory entry
obtained is !NIL!.

@<Scan: loop to get...@>=
WHILE
   REF DIRENT de = get dirent(dir stream);
   IF de IS REF DIRENT(NIL) THEN FALSE ELSE do(de,si) FI
DO SKIP OD;

@ These functions are used for the outer handling of the
directory.

@<Scan: declare the !ALIEN!...@>=
PROC(VECTOR[]CHAR)CPTR posix opendir@/
   = ALIEN "OPENDIR"@/
   "#include <dirent.h>"@/
   "#define OPENDIR(path) A_dirptr_DIRPTR(opendir(A_VC_charptr(path)))";

PROC(CPTR)INT posix closedir@/
   = ALIEN "CLOSEDIR"@/
   "#define CLOSEDIR(dir) A_int_INT(closedir(A_DIRPTR_dirptr(dir)))";

PROC(CPTR)CSTR posix readdir = ALIEN "READDIR"
"#define READDIR(dir) (void *)readdir(A_DIRPTR_dirptr(dir))";

@2Process control.
The next routine causes the calling process to sleep for
!secs! seconds.

@d macro sys posix sleep =
PROC(INT)INT posix sleep
   = ALIEN "SLEEP"
   "#define SLEEP(secs) A_int_INT(sleep(A_INT_int(secs)))"

@ The next routine sets an alarm for !secs! seconds time.

@d macro sys posix alarm =
PROC(INT)INT posix alarm
   = ALIEN "ALARM"
   "#define ALARM(secs) A_int_INT(alarm(A_INT_int(secs)))"

@ The next routine causes the current process to suspend
execution until a signal is received. Again, because the
routine has no parameters, a !CODE! insert is used.

@d macro sys posix pause =
PROC posix pause
   = INT: INT CODE "RESULT=pause();"

@ The next routine causes the current process to suspend
execution until a child has exited or until a signal is
delivered whose action is to terminate the current process
or to call a signal handling function.

@d macro sys posix wait =
PROC(REF INT)INT posix wait = ALIEN "WAIT"
   "#include <sys/wait.h>"
   "#define WAIT(status) A_int_INT(wait((int *)status))"

@ The next routine suspends execution of the current
process until a child as specified by the !pid! parameter
has exited, or until a signal is delivered whose action is
to terminate the current process or to call a signal
handling function.  If a child as requested by !pid! has
already exited by the time of the call (a "zombie"
process), the function returns immediately. Any system
resources used by the child are freed.

The value of pid can be one of:
<dl>
<dt>!< -1!</dt><dd>Wait for any child process whose process
group id. is equal to the absolute value of !pid!.</dd>
<dt>!-1!</dt><dd>Wait for any child process; this is the same
behaviour which !posix wait! exhibits.</dd>
<dt>0</dt><dd>Wait for any child process whose process group
id. is equal to that of the calling process.</dd>
<dt>!> 0!</dt><dd>Wait for the child whose process id. is equal
to the value of !pid!.</dd>
</dl>

The value of !options! is a logical !OR! of zero or more
of the following values.

@m w no hang  = 8r1  # Don't block waiting. #
@m w untraced = 8r2  # Report status of stopped children. #

@d macro sys posix wait pid =
PROC(INT,REF INT,BITS)INT posix wait pid = ALIEN "WAITPID"
   "#define WAITPID(pid,status,options) \"
   "  A_int_INT(waitpid(pid,(int *)status,options))"

@ The status returned by !posix wait pid! can be
evaluated using the following macros. Notice that the macros yield
a value of the following modes:
<ul>
   <li>!w exit status!: INT</li>
   <li>!w if exited!: BOOL</li>
   <li>!w if signaled!: BOOL</li>
   <li>!w if stopped!: BOOL<li>
   <li>!w term sig!: INT</li>
</ul>

@m w exit status(status)  = ABS((BIN status & 16rff00) SHR 8)
@m w if exited(status)    = (BIN status & 16r7f) = 16r0
@m w if signalled(status) = ((BIN status & 16rff) /= 16r7f)
                                       &
                                ((BIN status & 16r7f) /= 16r0)
@m w if stopped(status)   = (BIN status & 16rff) = 16r7f
@m w term sig(status)     = ABS(BIN status & 16r7f)

@ The following !ALIEN! declarations ensure that the
corresponding C routines are accessible to the wrapper
!PROC!s.

@d macro sys posix dup =
PROC(INT)INT posix dup
   = ALIEN "DUP"
   "#include <unistd.h>"
   "#define DUP(fd) A_int_INT(dup(A_INT_int(fd)))"

@d macro sys posix dup2 =
PROC(INT,INT)INT posix dup2
   = ALIEN "DUP2"
   "#define DUP2(ofd,nfd) \"
   "   A_int_INT(dup2(A_INT_int(ofd),A_INT_int(nfd)))"

@ Because !fork! has no parameters, a !CODE! insert is
used.

@d macro sys posix fork =
PROC posix fork
   = INT: INT CODE "RESULT=fork();"

@ The !PIPE! mode is used for communication with other
programs. The !r! tag stands for <tt>reader</tt> and the !w!
for <tt>writer</tt>.

@d macro sys mode pipe =
MODE PIPE=STRUCT(REF FILE r,w,INT pid)

@ The routine !create pipe! creates a pipe which is then
suitably initialised.

@d macro sys create pipe =
macro sys mode pipe;
PROC create pipe = ([]CHAR ridf,widf)PIPE:
IF PROC(REF STRUCT 2 INT)INT posix pipe = ALIEN "PIPE"
   "#define PIPE(fd) A_int_INT(pipe((void *)fd))";
   STRUCT 2 INT fd;
   INT res=posix pipe(fd);  res=-1
THEN (NIL,NIL,res)
ELSE
   PIPE pipe:=
      (HEAP FILE:=((MAKERVC ridf,
                    MAKERVC "",type OF book OF stand in),
                   fd[1],
                   sys OF stand error,
                   default io OF stand in channel,
                   (TRUE,FALSE,TRUE,FALSE,TRUE,-1,0,
                    (HEAP VECTOR[4]CHAR,4,0,0,FALSE,TRUE),0)),
       HEAP FILE:=((MAKERVC widf,
                    MAKERVC "",type OF book OF stand out),
                   fd[2],
                   sys OF stand error,
                   default io OF stand out channel,
                   (TRUE,FALSE,TRUE,FALSE,TRUE,-1,0,
                    (HEAP VECTOR[4]CHAR,4,0,0,FALSE,TRUE),0)),
       res);
   pipe
FI #create pipe#

@ The routine !execvp! creates a child program with
identification !prog! and parameters !params!. If the
filename given in !prog! does not contain the !"/"!
character, then it will be searched for in the current
path (as given in the environment string <tt>PATH</tt>).
Otherwise it will be taken as a relative or absolute
filename. The string !params! consists of individual
parameters separated by a vertical bar.

@m sys bar = "|"

@d macro sys execvp =
macro gp op begins char;
macro gp op ends char;
macro gp op after;
macro gp op trim;
macro gp op upto;
PROC execvp = ([]CHAR prog,params)INT:
BEGIN
   PROC(VECTOR[]CHAR#path#,CCHARPTR#argv#)INT sys execvp = ALIEN "EXECVP"
   "#define EXECVP(path,argv) \"
   "   A_int_INT(execvp(A_VC_charptr(path),(char **)argv))";
   STRING pars:=(TRIM params)[@@1];
   IF sys bar BEGINS pars
   THEN pars:=pars[2:]
   FI;
   IF sys bar ENDS pars
   THEN pars:=pars[:UPB pars-1]
   FI;
   IF pars[:UPB prog[:]]/=prog
   THEN pars:=prog+sys bar+pars
   FI;
   INT num bars:=0;
   FOR i FROM LWB pars TO UPB pars
   DO
      num bars+:=ABS(pars[i]=sys bar)
   OD;
   [num bars+1]REF VECTOR[]CHAR params z;
   @<Execvp: insert the parameters as null-terminated strings into !params z!@>;
   VECTOR[UPB prog[:]+1]CHAR prog z:=Z MAKERVC prog;
   VECTOR[UPB params z+1]CCHARPTR ptrs;
   @<Execvp: create a vector of pointers to the strings@>;
   OP(VECTOR[]CCHARPTR)VDESC TOVDESC = BIOP 99;
   sys execvp(prog z, data OF TOVDESC ptrs)
END #execvp#

@ @<Execvp: insert the param...@>=
FOR i WHILE pars/=""
DO
   []CHAR par=pars UPTO sys bar;
   params z[i]:=HEAP VECTOR[UPB par[:]+1]CHAR:=Z MAKERVC par;
   pars:=pars AFTER sys bar
OD

@ @<Execvp: create a vector...@>=
FOR i TO UPB params z
DO
   ptrs[i]:=VCTOCHARPTR params z[i]
OD;
ptrs[UPB ptrs]:=CSTRTOCCHARPTR TOCSTR TOCPTR 0

@3Piped child processes.
Getting data to and from a child process uses pipes as defined above.
Firstly, the new mode, !CHILDPIPE!, contains 3 !REF FILE! fields instead
of the two used by a !PIPE!. This ensures that the output from !stand err!
can also be captured.

Firstly, define the new mode. The !r! field refers to a reader, the !w! field to a
writer and the !e! field to a reader which captures the !stand err! output of the
child.

@d macro sys mode childpipe =
MODE CHILDPIPE=STRUCT(REF FILE r,w,e,INT pid)

@ The next routine creates a piped child. Various error
situations are catered for and passed to the calling
program as the value of the !pid! field of the yielded
!CHILDPIPE!. The value of !pid OF child pipe! is:
<dl>
   <dt>-2</dt><dd>create pipe failure</dd>
   <dt>-1</dt><dd>fork failure</dd>
   <dt> 0</dt><dd>execvp has failed</dd>
   <dt>&gt;0</dt><dd>pid of the child process</dd>
</dl>

@d macro sys exec piped child =
macro sys mode childpipe;
macro sys create pipe;
macro sys posix dup;
macro sys execvp;
macro sys posix fork;
PROC exec piped child = ([]CHAR prog,args)CHILDPIPE:
IF PIPE child in pipe,
       child out pipe,
       child err pipe;
   INT res;
   IF pid OF (child in pipe:=create pipe("r child in pipe","w child in pipe")) = -1
                       OR
      pid OF (child out pipe:=create pipe("r child out pipe","w child out pipe")) = -1
                       OR
      pid OF (child err pipe:=create pipe("r child err pipe","w child err pipe")) = -1
   THEN res:=-2;  TRUE
   ELIF (res:=posix fork) = -1
   THEN TRUE
   ELSE FALSE
   FI
THEN (NIL,NIL,NIL,res) # fork/create pipe failed#
ELIF res=0
THEN @<Execpipe: child process@>
ELSE @<Execpipe: parent process@>
FI #exec piped child#

@ The child process needs to make its !stand in! the same
as the reader of the !child in pipe! and its !stand out!
the writer of the !child out pipe! and close the other
descriptors. The same refers also to its !stand err! and the
!child err pipe!.

@<Execpipe: child...@>=
close(stand in); #this frees file descriptor 0 (!stand in!)#
posix dup(sys file OF r OF child in pipe); #uses the freed !stand in!#

close(r OF child in pipe); #fd 0 now reads from !child in pipe!#
close(w OF child in pipe);

close(stand out);
posix dup(sys file OF w OF child out pipe); #uses the freed !stand out!#

close(r OF child out pipe);
close(w OF child out pipe);

close(stand err);
posix dup(sys file OF w OF child err pipe); #uses the freed !stand err!#

close(r OF child err pipe);
close(w OF child err pipe);
@<Execpipe: call the program@>

@ If the call returns, it must have failed, so yield a
null childpipe.

@<Execpipe: call the...@>=
execvp(prog,args);
(NIL,NIL,NIL,res)

@ The parent process closes the unwanted descriptors and then yields a
!CHILDPIPE! consisting of the reader of !child out pipe!, the writer
of !child in pipe!, the reader of !child err pipe! and the !pid! of
the child process.

@<Execpipe: parent...@>=
close(r OF child in pipe);
close(w OF child out pipe);
close(w OF child err pipe);
(r OF child out pipe,w OF child in pipe,r OF child err pipe,res)

@3Fork and system.
The next routine forks the current process and calls a
program to replace the child process. It yields the !pid!
of the child process.

@d macro sys fork exec =
macro sys execvp;
macro sys posix fork;
PROC fork exec = ([]CHAR prog,args)INT:
IF INT child pid = posix fork;  child pid = -1
THEN -1
ELIF child pid = 0
THEN execvp(prog,args); 0
ELSE child pid
FI #fork exec#

@ And now, a routine to execute an arbitrary command. The
!command! is executed with a login shell so that any
abbreviations can be appropriately expanded.

@d macro sys system =
macro sys posix fork;
macro sys execvp;
macro sys posix wait pid;
PROC system = ([]CHAR command)INT:
IF command = ""
THEN 1
ELIF INT pid = posix fork;  pid = -1
THEN -1
ELIF pid = 0
THEN #child process#
   execvp("bash","--login|-c|"+command);
   #If !execvp! returns, there has been an error#
   exit(255);
   SKIP
ELSE #parent process#
   INT ret:=0,status;
   WHILE
      IF posix wait pid(pid,status,2r0) = -1
      THEN
         macro eintr;
         IF errno /= syserr eintr
         THEN ret:=-1; GOTO end
         FI
      ELSE ret:=status; GOTO end
      FI;
      ret = 0
   DO SKIP OD;
end:
   ret
FI #system#

@2User and group identifiers.
These routines give access to a pid, ppid, uid and gid
using the !/etc/passwd! and !/etc/group! files. These
modes group the necessary data.

@d macro sys mode group =
MODE GROUP =
   STRUCT(STRING gr name,   # group id #
                 gr passwd, # group password #
          INT    gr gid,    # group id #
          STRING gr mem)    # group members "," delimited #

@d macro sys mode passwd =
MODE PASSWD =
   STRUCT(STRING pw name,            # user name #
                 pw passwd,          # user password #
          INT    pw uid,             # user id #
                 pw gid,             # group id #
          STRING pw gecos,           # real name #
                 pw dir,             # home directory #
                 pw shell)           # shell program #

@ These routines set the user id or the group id.

@d macro sys posix set uid =
PROC(INT)INT posix set uid
   = ALIEN "SETUID" # 0: Ok, -1: err #
   "#include <unistd.h>"
   "#define SETUID(u) A_int_INT(setuid(A_INT_int(u)))"

@d macro sys posix set gid =
PROC(INT)INT posix set gid
   = ALIEN "SETGID" # 0: Ok, -1: err #
   "#include <sys/types.h>"
   "#define SETGID(g) A_int_INT(setgid(A_INT_int(g)))"

@ These routines get the (effective) user id and the
(effective) group id as well as the parent pid or the pid.

@d macro sys posix get uid =
PROC posix get uid  = INT: INT CODE "RESULT=getuid();"
@d macro sys posix get euid=
PROC posix get euid = INT: INT CODE "RESULT=geteuid();"
@d macro sys posix get gid =
PROC posix get gid  = INT: INT CODE "RESULT=getgid();"
@d macro sys posix get egid=
PROC posix get egid = INT: INT CODE "RESULT=getegid();"
@d macro sys posix get ppid=
PROC posix get ppid = INT: INT CODE "RESULT=getppid();"
@d macro sys posix get pid =
PROC posix get pid =  INT: INT CODE "RESULT=getpid();"

@ The next routine is used internally by other routines.

@d macro sys process pw line =
macro sys mode passwd;
PROC sys process pw line = (STRING line)REF PASSWD:
IF FILE mf;
   open(mf,MAKERVC(line+":"),mem channel)/=0
THEN NIL
ELSE
   HEAP PASSWD p;
   on logical file end(mf,
                       (REF FILE f)BOOL:
                       (
                        close(f); GOTO eof; SKIP
                       ));
   make term(mf,":");
   get(mf,(pw name OF p, skip terminators,
           pw passwd OF p, skip terminators,
           pw uid OF p, skip terminators,
           pw gid OF p, skip terminators,
           pw gecos OF p, skip terminators,
           pw dir OF p, skip terminators,
           pw shell OF p));
   close(mf);
   p EXIT
eof:
   NIL
FI # sys process pw line #

@ The next two routines get the password structure from
the user name or the user id.

@d macro sys get pw nam =
macro gp op upto;
macro sys process pw line;
PROC sys get pw nam = (STRING name)REF PASSWD:
IF FILE pwf;
   open(pwf,"/etc/passwd",stand in channel)/=0
THEN NIL
ELSE
   on logical file end(pwf,
                       (REF FILE f)BOOL:
                       (
                        close(f); GOTO eof; SKIP
                       ));
   STRING line;
   WHILE
      get(pwf,(line,newline));
      line UPTO ":"/=name
   DO SKIP OD;
   close(pwf);
   sys process pw line(line)  EXIT
eof:
   NIL
FI # sys get pw nam #

@d macro sys get pw uid =
macro sys process pw line;
PROC sys get pw uid = (INT uid)REF PASSWD:
IF FILE pwf;
   open(pwf,"/etc/passwd",stand in channel)/=0
THEN NIL
ELSE
   on logical file end(pwf,
                       (REF FILE f)BOOL:
                       (
                        close(f); GOTO eof; SKIP
                       ));
   STRING line;  REF PASSWD pw;
   WHILE
      get(pwf,(line,newline));
      IF REF PASSWD(pw:=sys process pw line(line)) IS NIL
      THEN FALSE
      ELSE pw uid OF pw /= uid
      FI
   DO SKIP OD;
   close(pwf);
   pw EXIT
eof:
   NIL
FI # sys get pw uid #

@ The next routine is used by dependent routines.

@d macro sys process gr line =
macro sys mode group;
PROC sys process gr line = (STRING line)REF GROUP:
IF FILE gf;
   open(gf,MAKERVC(line+":"),mem channel)/=0
THEN NIL
ELSE
   HEAP GROUP group;
   on logical file end(gf,
                       (REF FILE f)BOOL:
                       (
                        close(gf); GOTO eof; SKIP
                       ));
   make term(gf,":");
     get(gf,(gr name OF group,LOC CHAR,
             gr passwd OF group,LOC CHAR,
             gr gid OF group,LOC CHAR,
             gr mem OF group));
   close(gf);
   group EXIT
eof:
   NIL
FI #sys process gr line#

@ Here are two routines to get the group structure from
the group name or the group id.

@d macro sys get gr nam =
macro sys process gr line;
PROC sys get gr nam = (STRING name)REF GROUP:
IF FILE grpf;
   open(grpf,"/etc/group",stand in channel)/=0
THEN NIL
ELSE
   STRING line;  REF GROUP group;
   on logical file end(grpf,
                       (REF FILE f)BOOL:
                       (
                        close(f); GOTO eof; SKIP
                       ));
     WHILE
        get(grpf,(line,newline));
        group:=sys process gr line(line);
        IF REF GROUP(group) IS NIL
        THEN FALSE
        ELSE gr name OF group/=name
        FI
     DO SKIP OD;
  close(grpf);
  group EXIT
eof:
   NIL
FI # sys get gr nam #

@d macro sys get gr gid =
macro sys process gr line;
PROC sys get gr gid = (INT gid)REF GROUP:
IF FILE grpf;
   open(grpf,"/etc/group",stand in channel)/=0
THEN NIL
ELSE
   STRING line;  HEAP GROUP group;
   on logical file end(grpf,
                       (REF FILE f)BOOL:
                       (
                        close(f); GOTO eof; SKIP
                       ));
   WHILE
      get(grpf,(line,newline));
      group:=sys process gr line(line);
      IF REF GROUP(group) IS NIL
      THEN FALSE
      ELSE gr gid OF group /= gid
      FI
   DO SKIP OD;
   close(grpf);
   group EXIT
eof:
   NIL
FI # sys get grp gid #

@2Time routines.
The current or a specified time is best expressed by the
mode !TIME!. Its size is given by the macro !tm sz!.

@d macro sys mode time =
MODE TIME = STRUCT(INT secs, mins,  hours,
                       day,  month, year,
                       wday, yday,  isdst, gmt off,
                   INT#CPTR#zone)

@m tm sz = 44

@ These routines manipulate the system or a specified
time.

@d macro sys op tocptr = OP(CSTR)CPTR TOCPTR = BIOP 99

@d macro sys op utc int =
macro sys mode time;
OP UTC = (INT t)TIME:
BEGIN
   PROC(REF INT)CSTR linux gmtime
      = ALIEN "GMTIME"
      "#include <time.h>"
      "#define GMTIME(time) \"
      "   (void *)gmtime(A_RI_time_tptr(time))";

  CSTR tm=linux gmtime(LOC INT:=t);
  TIME ht;
  FILE mf;  open(mf,tm[:tm sz],mem channel);
  get bin(mf,ht);
  close(mf);
  year OF ht+:=1900;  month OF ht+:=1;
  ht
END #UTC#

@d macro sys op utc time =
macro sys mode time;
OP UTC = (TIME t)INT:
BEGIN
   PROC(CSTR)INT linux mktime
      = ALIEN "MKTIME"
      "#define MKTIME(time) A_time_t_INT(mktime((struct tm*)time))";

   TIME tt:=t;
   month OF tt-:=1;  year OF tt-:=1900;
   FILE mf;  establish(mf,"",mem channel,1,1,tm sz);
   put bin(mf,tt);
   INT lt=linux mktime(STRTOCSTR file buffer(mf));
   close(mf);
   lt
END #UTC#

@d macro sys get time =
macro sys mode time;
macro sys op utc int;
PROC sys get time = TIME:  UTC posix time(NIL)

@d macro sys ctime =
PROC ctime = (REF INT t)[]CHAR:
BEGIN
   PROC(REF INT)CSTR linux ctime
        = ALIEN "CTIME"
        "#define CTIME(time) \"
        "   (void *)ctime(A_RI_time_tptr(time))";

   CSTRTORVC linux ctime(t)
END

@2C file streams.
The following macros provide access to C file streams. The mode !CFILE! replaces
the C mode FILE.

@d macro sys mode cfile =
MODE CFILE = CSTR

@ Here are the procedures for opening, closing, reading characters and putting
characters.

@m file eof = -1

@d macro sys fopen =
macro sys mode cfile;
PROC fopen = ([]CHAR name,mode)CFILE:
BEGIN
   PROC(VECTOR[]CHAR,VECTOR[]CHAR)CFILE sys fopen = ALIEN "FOPEN"
      "#define FOPEN(nm,md) (void *)fopen(A_VC_charptr(nm),A_VC_charptr(md))";
   sys fopen(Z MAKERVC name,Z MAKERVC mode)
END

@d macro sys getc =
macro sys mode cfile;
PROC(CFILE)INT getc = ALIEN "GETC"
      "#define GETC(fp) getc((void *)fp)"

@d macro sys putc =
macro sys mode cfile;
PROC(CHAR,CFILE)INT putc = ALIEN "PUTC"
   "#define PUTC(c,fp) putc(c,(void *)fp)"

@d macro sys fclose =
macro sys mode cfile;
PROC(CFILE)INT fclose = ALIEN "FCLOSE"
   "#define FCLOSE(fp) fclose((void *)fp)"

@2Getting the status of files.
The following routines use the !STAT! mode to store
details about a file.

@d macro sys mode stat =
MODE STAT = STRUCT(LONG INT  st dev, #device#
                   SHORT INT pad1,
                   INT       st ino,     #inode#
                   BITS      st mode,    #protection#
                   INT       st nlink,   #no. of hard links#
                             st uid,     #user ID of owner#
                             st gid,     #group ID of owner#
                   LONG INT  st rdev,     #device type (if inode device)#
                   SHORT INT pad2,
                   INT       st size,    #total size, in bytes#
                             st blksize, #blocksize for filesystem transput#
                             st blocks,  #no. of blocks allocated#
                             st atime,   #time of last access (kernel uses 64-bits)#
                   INT       unused1,
                   INT       st mtime,   #time of last modification (kernel uses 64-bits)#
                   INT       unused2,
                   INT       st ctime,   #time of last change (kernel uses 64-bits)#
                   INT       unused3, unused4, unused5)

@ Here is the relevant !NIL!.

@d macro sys no stat =
macro sys mode stat;
REF STAT no stat = NIL

@ The following declarations provide the standard
identifiers.

@m s ifmt   = 16rf000 #bitmask for the file type bit fields#

@m s ifsock = 8r0140000 #socket#
@m s iflnk  = 8r0120000 #symbolic link#
@m s ifnor  = 8r0100000 #normal file#
@m s ifblk  = 8r0060000 #block device#
@m s ifdir  = 8r0040000 #directory#
@m s ifchr  = 8r0020000 #character device#
@m s ififo  = 8r0010000 #fifo#

@m s isuid = 21 #set UID bit#
@m s isgid = 22 #set GID bit#
@m s isvtx = 23 #sticky bit#

@m s irusr = 24 #user has read permission#
@m s iwusr = 25 #user has write permission#
@m s ixusr = 26 #user has execute permission#

@m s irgrp = 27 #group has read permission#
@m s iwgrp = 28 #group has write permission#
@m s ixgrp = 29 #group has execute permission#

@m s iroth = 30 #others have read permission#
@m s iwoth = 31 #others have write permisson#
@m s ixoth = 32 #others have execute permission#

@ The parameter of all the macros defined in this section should have
the mode !REF STAT!. Their yield is always !BOOL!. They can be used with
!stat!, !lstat! or !fstat!.

@d macro sys islnk =
macro sys mode stat;
PROC islnk = (REF STAT st)BOOL: (st mode OF st & s ifmt) = s iflnk

@d macro sys isnor =
macro sys mode stat;
PROC isnor = (REF STAT st)BOOL: (st mode OF st & s ifmt) = s ifnor

@d macro sys isdir =
macro sys mode stat;
PROC isdir = (REF STAT st)BOOL: (st mode OF st & s ifmt) = s ifdir

@d macro sys ischr =
macro sys mode stat;
PROC ischr = (REF STAT st)BOOL: (st mode OF st & s ifmt) = s ifchr

@d macro sys isblk =
macro sys mode stat;
PROC isblk = (REF STAT st)BOOL: (st mode OF st & s ifmt) = s ifblk

@d macro sys isfifo =
macro sys mode stat;
PROC isfifo = (REF STAT st)BOOL: (st mode OF st & s ifmt) = s ififo

@d macro sys issock =
macro sys mode stat;
PROC issock = (REF STAT st)BOOL: (st mode OF st & s ifmt) = s ifsock

@ Here is the procedure to !stat! a file.

@d macro sys stat =
macro sys no stat;
PROC stat = (STRING fn)REF STAT:
IF HEAP STAT st;
   PROC(VECTOR[]CHAR#fn#,REF STAT)INT linux stat
      = ALIEN "STAT"
      "#include <sys/stat.h>"
      "#define STAT(fn,buff) \"
      "   A_int_INT(stat(A_VC_charptr(fn),(void *)buff))";

   linux stat(Z MAKERVC fn,st) /= 0
THEN NIL
ELSE st
FI # stat #

@ Here is !lstat!.

@d macro sys lstat =
macro sys mode stat;
PROC lstat = (STRING fn)REF STAT:
IF HEAP STAT st;
   PROC(VECTOR[]CHAR#fn#,REF STAT)INT linux lstat
      = ALIEN "LSTAT"
      "#include <sys/stat.h>"
      "#define LSTAT(fn,buff) \"
      "   A_int_INT(lstat(A_VC_charptr(fn),(void *)buff))";

   linux lstat(Z MAKERVC fn,st) /= 0
THEN NIL
ELSE st
FI # lstat #

@ And, lastly, !fstat!.

@d macro sys fstat =
macro sys mode stat;
PROC fstat = (FILE f)REF STAT:
IF HEAP STAT st;
   PROC(INT#fd#,REF STAT)INT linux fstat
      = ALIEN "FSTAT"
      "#define FSTAT(fd,buff) \"
      "   A_int_INT(fstat(fd,(void *)buff))";

   linux fstat(sys file OF f,st) /= 0
THEN NIL
ELSE st
FI # fstat #

@ This operator expresses a file type, obtained from a !STAT!
structure, as a single character.

@d macro sys op ftypelet =
OP FTYPELET = (BITS mode)CHAR:
IF   (mode & s ifmt) = s ifblk THEN "b"
ELIF (mode & s ifmt) = s ifchr THEN "c"
ELIF (mode & s ifmt) = s ifdir THEN "d"
ELIF (mode & s ifmt) = s ifnor THEN "-"
ELIF (mode & s ifmt) = s ififo THEN "p"
ELIF (mode & s ifmt) = s ifsockTHEN "s"
ELIF (mode & s ifmt) = s iflnk THEN "l"
ELSE "?"
FI #FTYPELET#

@ This routine expresses the mode of a file as a mode
string.

@d macro sys mode string =
macro sys op ftypelet;
PROC mode string = (BITS mode)[]CHAR:
   (FTYPELET mode,
    (s irusr ELEM mode|"r"|"-"),
    (s iwusr ELEM mode|"w"|"-"),
    (s ixusr ELEM mode|"x"|"-"),
    (s irgrp ELEM mode|"r"|"-"),
    (s iwgrp ELEM mode|"w"|"-"),
    (s ixgrp ELEM mode|"x"|"-"),
    (s iroth ELEM mode|"r"|"-"),
    (s iwoth ELEM mode|"w"|"-"),
    (s ixoth ELEM mode|"x"|"-"))

@2Signals.
The routine !posix terminate! sends signal !sig! to the
process whose process identifier is !pid!. If !pid! is
zero, send !sig! to all the processes in the current
process's process group. If !pid! is !-1!,
send !sig! to all processes in the process group !-pid!.

@d macro sys posix terminate =
PROC(INT,INT)INT posix terminate
   = ALIEN "TERMINATE"
   "#include <sys/types.h>"
   "#include <signal.h>"
   "#define TERMINATE(pid,sig) kill(pid,sig)"

@ Send signal !sig! to all processes in process group
!pgrp!. If !pgrp! is zero, send !sig! to all processes
in the current process's process group.

@d macro sys bsd terminate pg =
PROC(INT,INT)INT bsd terminate pg
   = ALIEN "TERMINATEPG"
   "#define TERMINATEPG(pgrp,sig) \"
   "  A_int_INT(killpg(A_INT_int(pgrp),A_INT_int(sig)))"

@3Signal modes.
These definitions provide access to the C library
functions which use the !sigaction! structure. Firstly,
here are the relevant modes.

@d macro sys mode sigset =
MODE SIGSET    = STRUCT(STRUCT 32 BITS sig)

@d macro sys mode sigaction =
MODE SIGACTION =
   STRUCT(CPTR sa sigaction,#PROC(INT,REF SIGINFO,CPTR)VOID#
          STRUCT 32 BITS sa mask,
          BITS sa flags)

@d macro sys mode siginfo =
MODE SIGINFO   = STRUCT(INT
                       si signo, #Signal number#
                       si errno, #Errno value#
                       si code,  #Signal code#
                       si band,  #Band event#
                       si fd)    #File descriptor#

@ The next two routines provide mapping facilities for
the signal routines.

@d macro sys op topdesc proc int ref siginfo cptr =
macro sys mode siginfo;
OP(PROC(INT,REF SIGINFO,CPTR)VOID)PDESC TOPDESC = BIOP 99

@d macro sys op tocptr proc int ref siginfo cptr =
macro sys mode siginfo;
OP TOCPTR = (PROC(INT,REF SIGINFO,CPTR)VOID p)CPTR:
   cp OF TOPDESC p

@ Here's the !sigaction! routine itself. Note that
!signum! can be neither !sigkill! nor !sigstop!.

@d macro sys posix sigaction =
macro sys mode sigaction;
PROC(INT,REF SIGACTION,REF SIGACTION)INT posix sigaction
   = ALIEN "SIGACTION"
   "#include <signal.h>"
   "#define SIGACTION(signum,act,oact) \"
   "        sigaction(signum,act,oact)"

@ !no sigaction! is defined here.

@d macro sys no sigaction = REF SIGACTION no sigaction = NIL

@ Here are some fake signal functions for
!sa sigaction OF SIGACTION!.

@m sig err = TOCPTR -1  # Error return.   #
@m sig dfl = TOCPTR  0  # Default action. #
@m sig ign = TOCPTR  1  # Ignore signal.  #

@ These values set bits in the !sa flags! field in a
!SIGACTION! structure.

@m sa nocldstop = 16r00000001  # Don't send `sigchld' when children stop #
@m sa siginfo   = 16r00000004  # Use sa_sigaction#
@m sa stack     = 16r08000000  # Use signal stack by using `sa restorer' #
@m sa restart   = 16r10000000  # Don't restart syscall on signal return. #
@m sa interrupt = 16r20000000  # Historical no-op. #
@m sa nodefer   = 16r40000000  # Don't automatically block the signal when
                                    its handler is being executed #
@m sa resethand = 16r80000000  # Reset to `sig dfl' on entry to handler. #
@m sa no mask   = sa no defer
@m sa one shot  = sa reset hand

@ Here are some general values.

@m si user      = 0;   # sent by kill, sigsend, raise #
@m si kernel = ABS 16r80; # sent by the kernel from somewhere #
@m si queue     = -1;  # sent by sigqueue #
@m si timer     = -2;  # sent by timer expiration #
@m si mesgq     = -3;  # sent by real time mesq state change #
@m si asyncio   = -4;  # sent by AIO completion #
@m si sigio     = -5;  # sent by queued SIGIO #

@ These routines perform simple tests.

@d macro sys si fromuser =
macro sys mode siginfo;
PROC si fromuser   = (SIGINFO si)BOOL: si code OF si <= 0

@d macro sys si fromkernel =
macro sys mode siginfo;
PROC si fromkernel = (SIGINFO si)BOOL: si code OF si > 0

@ The following are possible values for !si code! in the
!SIGINFO! structure for a !sigill! signal.

@m ill illopc = 1   # illegal opcode #
@m ill illopn = 2   # illegal operand #
@m ill illadr = 3   # illegal addressing mode #
@m ill illtrp = 4   # illegal trap #
@m ill prvopc = 5   # privileged opcode #
@m ill prvreg = 6   # privileged register #
@m ill coproc = 7   # coprocessor error #
@m ill badstk = 8   # internal stack error #
@m nsigill = 8

@ Here are the possible values for !si code! for a
!sigfpe! signal.

@m fpe intdiv = 1   # integer divide by zero #
@m fpe intovf = 2   # integer overflow #
@m fpe fltdiv = 3   # floating point divide by zero #
@m fpe fltovf = 4   # floating point overflow #
@m fpe fltund = 5   # floating point underflow #
@m fpe fltres = 6   # floating point inexact result #
@m fpe fltinv = 7   # floating point invalid operation #
@m fpe fltsub = 8   # subscript out of range #
@m nsigfpe = 8

@ Here are the possible values for !si code! for a
!sigsegv! signal.

@m segv maperr = 1   # address not mapped to object #
@m segv accerr = 2   # invalid permissions for mapped object #
@m nsigsegv = 2

@ Here are the possible values for !si code! for a
!sigbus! signal.

@m bus adraln = 1   # invalid address alignment #
@m bus adrerr = 2   # non-existant physical address #
@m bus objerr = 3   # object specific hardware error #
@m nsigbus = 3

@ Here are the possible values for !si code! for a
!sigtrap! signal.

@m trap brkpt = 1   # process breakpoint #
@m trap trace = 2   # process trace trap #
@m nsigtrap = 2

@ Here are the possible values for !si code! for a
!sigchld! signal.

@m cld exited  = 1   # child has exited #
@m cld killed  = 2   # child was killed #
@m cld dumped  = 3   # child terminated abnormally #
@m cld trapped = 4   # traced child has trapped #
@m cld stopped = 5   # child has stopped #
@m cld continued = 6 # stopped child has continued #
@m nsigchld = 6

@ Here are the possible values for !si code! for a
!sigpoll! signal.

@m poll in  = 1   # data input available #
@m poll out = 2   # output buffers available #
@m poll msg = 3   # input message available #
@m poll err = 4   # i/o error #
@m poll pri = 5   # high priority input available #
@m poll hup = 6   # device disconnected #
@m nsigpoll = 6

@ Here is the definition of !posix sigprocmask! which gets
or changes the set of blocked signals.

@d macro sys posix sigprocmask =
macro sys mode sigset;
PROC(INT,REF SIGSET,REF SIGSET)INT posix sigprocmask =
   ALIEN "SIGPROCMASK"
   "#define SIGPROCMASK(how,set,oldset) \"
   "  sigprocmask(how,(void *)set,\"
   "                  (void *)oldset)"

@ Here are values for the !how! argument to !sigprocmask!.

@m sig block     = 0  # Block   signals #
@m sig unblock   = 1  # Unblock signals #
@m sig setmask   = 2  # Set the set of blocked signals #

@ The next procedure puts into !set! all signals that are
blocked and waiting to be delivered.

@d macro sys posix sigpending =
macro sys mode sigset;
PROC(REF SIGSET#set#)INT posix sigpending =
   ALIEN "SIGPENDING"
   "#define SIGPENDING(set) sigpending(set)"

@ The next procedure changes the set of blocked signals
to !set!, waits until a signal arrives, and then restores
the set of blocked signals.

@d macro sys posix sigsuspend =
macro sys mode sigset;
PROC(REF SIGSET#set#)INT posix sigsuspend =
   ALIEN "SIGSUSPEND"
   "#define SIGSUSPEND(set) sigsuspend((void *)set)"

@ The next group of routines perform useful manipulation
and tests on a set of signals.

@d macro sys sig empty set =
macro sys mode sigset;
PROC(REF SIGSET)INT sig empty set = ALIEN "SIGEMPTYSET"
   "#define SIGEMPTYSET(set) sigemptyset((void *)set)"

@d macro sys sig fill set =
macro sys mode sigset;
PROC(REF SIGSET)INT sig fill set = ALIEN "SIGFILLSET"
   "#define SIGFILLSET(set) sigfillset((void *)set)"

@d macro sys sig is empty set =
macro sys mode sigset;
PROC(REF SIGSET)INT sig is empty set =
   ALIEN "SIGISEMPTYSET"
   "#define SIGISEMPTYSET(set) \"
   "   sigisemptyset((void *)set)"

@d macro sys sig add set =
macro sys mode sigset;
PROC(REF SIGSET,INT)INT sig add set = ALIEN "SIGADDSET"
   "#define SIGADDSET(set,sig) \"
   "   sigaddset((void *)set,sig)"

@d macro sys sig del set =
macro sys mode sigset;
PROC(REF SIGSET,INT)INT sig del set = ALIEN "SIGDELSET"
   "#define SIGDELSET(set,sig) \"
   "   sigdelset((void *)set,sig)"

@d macro sys sig is member =
macro sys mode sigset;
PROC(REF SIGSET,INT)INT sig is member = ALIEN "SIGISMEMBER"
   "#define SIGISMEMBER(set,sig) \"
   "   sigismember((void *)set,sig)"

@d macro sys sig and set =
macro sys mode sigset;
PROC(REF SIGSET,REF SIGSET,REF SIGSET)INT sig and set =
   ALIEN "SIGANDSET"
   "#define SIGANDSET(set,left,right) \"
   "   sigandset((void *)set,\"
   "             (void *)left,\"
   "             (void *)right)"

@d macro sys sig or set =
macro sys mode sigset;
PROC(REF SIGSET,REF SIGSET,REF SIGSET)INT sig or set =
   ALIEN "SIGORSET"
   "#define SIGORSET(set,left,right) \"
   "   sigorset((void *)set,(void *)left,\"
   "   (void *)right)"

@2Polling.
Firstly, the mode !FDSET! is defined.

@m fdset sz = 32

@d macro sys mode fdset =
MODE FDSET = STRUCT(STRUCT fdset sz BITS fds bits)

@ The !TIMEVAL! mode is also needed.

@d macro sys mode timeval =
MODE TIMEVAL = STRUCT(INT tv sec,tv usec)

@ The operators !SET! and !CLEAR! must also be defined.

@d macro sys op set =
OP SET = (INT n,BITS b)BITS: (b OR ELEM n)

@d macro sys op clear =
OP CLEAR = (INT n,BITS b)BITS: (b AND NOT ELEM n)

@ The procedure for clearing descriptors in the set
is straightforward.

@d macro sys fd zero =
macro sys mode fdset;
PROC fd zero = (REF FDSET fds)REF FDSET:
(
   FOR i TO fdset sz DO (fds bits OF fds)[i]:=2r0 OD;
   fds
)

@ With setting, clearing or interrogating bits, the
mapping between Algol 68 bits and&nbsp;C bits must be kept in
mind. For example, a descriptor of&nbsp;8 in&nbsp;C terms
will set bit&nbsp;24 in Algol 68 terms.

@d macro sys fd set =
macro sys mode fdset;
macro sys op set;
PROC fd set = (INT n,REF FDSET fds)REF FDSET:
(
   REF BITS b=(fds bits OF fds)[1+(n-1)%fdset sz];
   b:=(bits width-n MOD bits width) SET b;
   fds
)

@d macro sys fd clr =
macro sys mode fdset;
macro sys op clear;
PROC fd clr = (INT n,REF FDSET fds)REF FDSET:
(
   REF BITS b=(fds bits OF fds)[1+(n-1)%fdset sz];
   b:=(bits width-n MOD bits width) CLEAR b;
   fds
)

@d macro sys fd is set =
macro sys mode fdset;
PROC fd is set = (INT n,REF FDSET fds)BOOL:
(
   (bits width-n MOD bits width) ELEM
      (fds bits OF fds)[1+(n-1)%fdset sz]
)

@ Now define the procedure !select!.
Check the first !nfds! descriptors each in !readfds! (if
it is not !NIL!) for read readiness, in !writefds! (if not
!NIL!) for write readiness and in !exceptfds! (if not
!NIL!) for exceptional conditions. If !timeout! is not
!NIL!, time out after waiting the interval specified
therein. Yields the number of ready descriptors or&nbsp;-1 for
errors.

@d macro sys posix select =
macro sys mode fdset;
macro sys mode timeval;
PROC(INT,
     REF FDSET,REF FDSET,REF FDSET,
     REF TIMEVAL)INT posix select
   = ALIEN "SELECT"
   "#define SELECT(nfds,readfds,writefds,exceptfds,timeout) \"
   "   select(nfds,(void *)readfds,(void *)writefds,\"
   "          (void *)exceptfds,(void *)timeout)"

@ End of sysprelude.w
