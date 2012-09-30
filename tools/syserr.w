@2Introduction.
This module is copyright (C) 2013 Sian Mountbatten.

This module provides error numbers for Linux and is intended to be
included into a Web 68 file. The usable macros follow the naming
convention that each macro starts with the word "syserr" and
the rest of the identifier is the C name of the error with upper-case
letters replaced by lower-case letters. So, for example, the error
value !ERFKILL! is accesed as !syserr erfkill!. All the macros are
multi-use macros.

@m syserr banner = "$Id: $"

@m syserr eperm           = 1 { Operation not permitted }
@m syserr enoent          = 2 { No such file or directory }
@m syserr esrch           = 3 { No such process }
@m syserr eintr           = 4 { Interrupted system call }
@m syserr eio             = 5 { I/O error }
@m syserr enxio           = 6 { No such device or address }
@m syserr e2big           = 7 { Argument list too long }
@m syserr enoexec         = 8 { Exec format error }
@m syserr ebadf           = 9 { Bad file number }
@m syserr echild          = 10 { No child processes }
@m syserr eagain          = 11 { Try again }
@m syserr enomem          = 12 { Out of memory }
@m syserr eacces          = 13 { Permission denied }
@m syserr efault          = 14 { Bad address }
@m syserr enotblk         = 15 { Block device required }
@m syserr ebusy           = 16 { Device or resource busy }
@m syserr eexist          = 17 { File exists }
@m syserr exdev           = 18 { Cross-device link }
@m syserr enodev          = 19 { No such device }
@m syserr enotdir         = 20 { Not a directory }
@m syserr eisdir          = 21 { Is a directory }
@m syserr einval          = 22 { Invalid argument }
@m syserr enfile          = 23 { File table overflow }
@m syserr emfile          = 24 { Too many open files }
@m syserr enotty          = 25 { Not a typewriter }
@m syserr etxtbsy         = 26 { Text file busy }
@m syserr efbig           = 27 { File too large }
@m syserr enospc          = 28 { No space left on device }
@m syserr espipe          = 29 { Illegal seek }
@m syserr erofs           = 30 { Read-only file system }
@m syserr emlink          = 31 { Too many links }
@m syserr epipe           = 32 { Broken pipe }
@m syserr edom            = 33 { Math argument out of domain of func }
@m syserr erange          = 34 { Math result not representable }
@m syserr edeadlk         = 35 { Resource deadlock would occur }
@m syserr enametoolong    = 36 { File name too long }
@m syserr enolck          = 37 { No record locks available }
@m syserr enosys          = 38 { Function not implemented }
@m syserr enotempty       = 39 { Directory not empty }
@m syserr eloop           = 40 { Too many symbolic links encountered }
@m syserr ewouldblock     = eagain { Operation would block }
@m syserr enomsg          = 42 { No message of desired type }
@m syserr eidrm           = 43 { Identifier removed }
@m syserr echrng          = 44 { Channel number out of range }
@m syserr el2nsync        = 45 { Level    = 2 not synchronized }
@m syserr el3hlt          = 46 { Level    = 3 halted }
@m syserr el3rst          = 47 { Level    = 3 reset }
@m syserr elnrng          = 48 { Link number out of range }
@m syserr eunatch         = 49 { Protocol driver not attached }
@m syserr enocsi          = 50 { No CSI structure available }
@m syserr el2hlt          = 51 { Level    = 2 halted }
@m syserr ebade           = 52 { Invalid exchange }
@m syserr ebadr           = 53 { Invalid request descriptor }
@m syserr exfull          = 54 { Exchange full }
@m syserr enoano          = 55 { No anode }
@m syserr ebadrqc         = 56 { Invalid request code }
@m syserr ebadslt         = 57 { Invalid slot }

@m syserr edeadlock       = edeadlk

@m syserr ebfont          = 59 { Bad font file format }
@m syserr enostr          = 60 { Device not a stream }
@m syserr enodata         = 61 { No data available }
@m syserr etime           = 62 { Timer expired }
@m syserr enosr           = 63 { Out of streams resources }
@m syserr enonet          = 64 { Machine is not on the network }
@m syserr enopkg          = 65 { Package not installed }
@m syserr eremote         = 66 { Object is remote }
@m syserr enolink         = 67 { Link has been severed }
@m syserr eadv            = 68 { Advertise error }
@m syserr esrmnt          = 69 { Srmount error }
@m syserr ecomm           = 70 { Communication error on send }
@m syserr eproto          = 71 { Protocol error }
@m syserr emultihop       = 72 { Multihop attempted }
@m syserr edotdot         = 73 { RFS specific error }
@m syserr ebadmsg         = 74 { Not a data message }
@m syserr eoverflow       = 75 { Value too large for defined data type }
@m syserr enotuniq        = 76 { Name not unique on network }
@m syserr ebadfd          = 77 { File descriptor in bad state }
@m syserr eremchg         = 78 { Remote address changed }
@m syserr elibacc         = 79 { Can not access a needed shared library }
@m syserr elibbad         = 80 { Accessing a corrupted shared library }
@m syserr elibscn         = 81 { .lib section in a.out corrupted }
@m syserr elibmax         = 82 { Attempting to link in too many shared libraries }
@m syserr elibexec        = 83 { Cannot exec a shared library directly }
@m syserr eilseq          = 84 { Illegal byte sequence }
@m syserr erestart        = 85 { Interrupted system call should be restarted }
@m syserr estrpipe        = 86 { Streams pipe error }
@m syserr eusers          = 87 { Too many users }
@m syserr enotsock        = 88 { Socket operation on non-socket }
@m syserr edestaddrreq    = 89 { Destination address required }
@m syserr emsgsize        = 90 { Message too long }
@m syserr eprototype      = 91 { Protocol wrong type for socket }
@m syserr enoprotoopt     = 92 { Protocol not available }
@m syserr eprotonosupport = 93 { Protocol not supported }
@m syserr esocktnosupport = 94 { Socket type not supported }
@m syserr eopnotsupp      = 95 { Operation not supported on transport endpoint }
@m syserr epfnosupport    = 96 { Protocol family not supported }
@m syserr eafnosupport    = 97 { Address family not supported by protocol }
@m syserr eaddrinuse      = 98 { Address already in use }
@m syserr eaddrnotavail   = 99 { Cannot assign requested address }
@m syserr enetdown        = 100 { Network is down }
@m syserr enetunreach     = 101 { Network is unreachable }
@m syserr enetreset       = 102 { Network dropped connection because of reset }
@m syserr econnaborted    = 103 { Software caused connection abort }
@m syserr econnreset      = 104 { Connection reset by peer }
@m syserr enobufs         = 105 { No buffer space available }
@m syserr eisconn         = 106 { Transport endpoint is already connected }
@m syserr enotconn        = 107 { Transport endpoint is not connected }
@m syserr eshutdown       = 108 { Cannot send after transport endpoint shutdown }
@m syserr etoomanyrefs    = 109 { Too many references: cannot splice }
@m syserr etimedout       = 110 { Connection timed out }
@m syserr econnrefused    = 111 { Connection refused }
@m syserr ehostdown       = 112 { Host is down }
@m syserr ehostunreach    = 113 { No route to host }
@m syserr ealready        = 114 { Operation already in progress }
@m syserr einprogress     = 115 { Operation now in progress }
@m syserr estale          = 116 { Stale NFS file handle }
@m syserr euclean         = 117 { Structure needs cleaning }
@m syserr enotnam         = 118 { Not a XENIX named type file }
@m syserr enavail         = 119 { No XENIX semaphores available }
@m syserr eisnam          = 120 { Is a named type file }
@m syserr eremoteio       = 121 { Remote I/O error }
@m syserr edquot          = 122 { Quota exceeded }

@m syserr enomedium       = 123 { No medium found }
@m syserr emediumtype     = 124 { Wrong medium type }
@m syserr ecanceled       = 125 { Operation Canceled }
@m syserr enokey          = 126 { Required key not available }
@m syserr ekeyexpired     = 127 { Key has expired }
@m syserr ekeyrevoked     = 128 { Key has been revoked }
@m syserr ekeyrejected    = 129 { Key was rejected by service }

{ for robust mutexes }
@m syserr eownerdead      = 130 { Owner died }
@m syserr enotrecoverable = 131 { State not recoverable }
@m syserr erfkill         = 132 { Operation not possible due to RF-kill }
@m syserr ehwpoison       = 133 { Memory page has hardware error }

@ End of syserr.w
