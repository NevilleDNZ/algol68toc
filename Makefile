#!/usr/bin/make

#------------ Debug value -------------
DEBUG=no
#------------ Debian values -----------
DESTDIR=
VERSION=1.15
NODEPENDS=
PKGDIR=$(DESTDIR)/usr/share/algol68toc
DOCDIR=$(DESTDIR)/usr/share/doc/algol68toc
BINDIR=$(DESTDIR)/usr/bin
LIBDIR=$(DESTDIR)/usr/lib
INFODIR=$(DESTDIR)/usr/share/info
MANDIR=$(DESTDIR)/usr/share/man/man1
INCDIR=$(DESTDIR)/usr/include/algol68
APPDIR=$(DESTDIR)/usr/share/applications

#------------- Absolute directories ------------
TOP:=$(shell pwd)
VPATH:=$(TOP)/include
INCS:=-I $(VPATH)

#------------- sub-directories --------------
ACD=$(TOP)/a68config
CTD=$(TOP)/src
DAD=$(TOP)/data
DOD=$(TOP)/doc
EXD=$(TOP)/examples
LBD=$(TOP)/library
LPD=$(TOP)/liba68prel
QAD=$(TOP)/qad

ADIRS=a68config liba68prel src qad
CDIRS=library a68config liba68prel src
DDIRS=doc data examples scripts

#------------- a68toc environment --------------
A68_GC_POLICY:=1
A68_GC_DEBUG:=0
A68_NAMESEED=nameseed
A68_LIB:=$(ACD)

#------------ Flags ------------
ifeq ($(DEBUG),no)
override CFLAGS=-O0
else
override CFLAGS=-O0 -g
endif
NOR=$(CFLAGS) $(INCS)
CTSTAR=59LR
QADSTAR=1234ABCD
CTFLAGS=-v -uname seedfile -staredit $(CTSTAR)
QADFLAGS=-v -s -uname seedfile -staredit $(QADSTAR)

#------------ Programs -----------
ALGOL=$(CTD)/a68toc
SHELL=/bin/sh
INSTALL=$(shell which install) -g root -o root
INSTALLDATA=$(INSTALL) -m 644
INSTALLPROG=$(INSTALL) -m 555

# Export all macros
export

#-------------- Rules --------------
.PHONY : clean info uninstall

all : c-stamp q-stamp d-stamp

Translate : remove nameseed
	-for d in $(ADIRS); do $(MAKE) -C $$d Translate; done

c-stamp:
	-for d in $(CDIRS); do $(MAKE) -C $$d; done
	touch c-stamp

q-stamp : nameseed
	-$(MAKE) -C $(QAD)
	touch q-stamp

d-stamp :
	-$(MAKE) -C $(DOD)
	touch d-stamp

install : c-stamp q-stamp d-stamp
	$(INSTALL) -m 755 -d $(PKGDIR)
	$(INSTALL) -m 755 -d $(INCDIR)
	$(INSTALL) -m 755 -d $(INCDIR)/linux
	$(INSTALL) -m 755 -d $(BINDIR)
	$(INSTALL) -m 755 -d $(LIBDIR)
	$(INSTALL) -m 755 -d $(INFODIR)
	$(INSTALL) -m 755 -d $(DOCDIR)
	$(INSTALL) -m 755 -d $(DOCDIR)/examples
	$(INSTALL) -m 755 -d $(DOCDIR)/pame
	$(INSTALL) -m 755 -d $(APPDIR)
	$(INSTALL) -m 755 -d $(MANDIR)
	$(INSTALLDATA) -p README $(DOCDIR)
	for d in include library $(ADIRS) $(DDIRS); do $(MAKE) -C $$d install; done

info :
	install-info --quiet $(INFODIR)/ctrans.info.gz

uninstall :
	-$(RM) $(BINDIR)/a68toc $(BINDIR)/resetseed $(BINDIR)/ca
	-install-info --quiet --remove $(INFODIR)/ctrans.info.gz
	-$(RM) -r $(PKGDIR) $(DOCDIR)
	-$(RM) $(INFODIR)/ctrans.info.gz $(LIBDIR)/liba68.a $(LIBDIR)/liba68s.a \
		$(MANDIR)/a68toc.1.gz $(MANDIR)/ca.1.gz

dist-clean: clean
	-$(RM) -v c-stamp q-stamp d-stamp
	-$(RM) -r DEBIAN debian/tmp debian/algol68toc

nameseed : a68config/rctr liba68prel/rctr src/rctr qad/rctr
	for d in $(ADIRS); do cp $$d/rctr $$d/nameseed; done

remove :
	for d in $(ADIRS); do $(RM) $$d/*.c $$d/*.m; done

clean:
	find $(TOP) \( -name '*~' -o -name '*.asv' -o -name '*##' \) \
		-exec $(RM) -v '{}' ';'
	-for d in $(ADIRS) $(DDIRS) library; do $(MAKE) -C $$d clean; done

# $Log: Makefile,v $
# Revision 1.12  2012/01/04 17:18:45  sian
# *** empty log message ***
#
# Revision 1.11  2004-08-06 23:48:41  sian
# *** empty log message ***
#
# Revision 1.10  2003/05/31 13:02:41  sian
# Removal of compiled libraries and binaries
#
# Revision 1.9  2003/04/23 08:57:20  sian
# Debian release 1.5
#
# Revision 1.8  2002/06/20 13:16:57  sian
# Minor alterations to make files
#
# Revision 1.7  2002/06/20 11:49:27  sian
# mm removed, padding removed, ca68 added
#
# Revision 1.6  2002/06/06 12:46:19  sian
# Minor alterations
#
# Revision 1.5  2002/02/23 17:50:42  sian
# Release 1.1
#
# Revision 1.4  2002/02/19 11:40:11  sian
# *** empty log message ***
#
# Revision 1.2  2001/05/11 18:55:32  sian
# Changed INFODIR to /usr/share/info
#
# Revision 1.1.1.1  2001/05/07 10:16:10  sian
# Import of Ctrans v1.0.4
#
# Revision 1.9  2000/07/06 14:46:57  sian
# Added uninstall
#
# Revision 1.8  2000/07/06 13:08:21  sian
# Should be ready for release
#
# Revision 1.7  2000/07/05 19:20:35  sian
# Minor corrections to Makefiles
#
# Revision 1.6  2000/07/05 15:52:57  sian
# Altered the installation tarball to ctrans-bin_$(VERSION).tar.gz
#
# Revision 1.5  2000/07/05 14:37:53  sian
# Ready for release 0.1.0
#
# Revision 1.3  2000/01/19 17:51:20  sian
# New versions for Phoenix Engineering release of Ctrans
#
# End of Makefile
