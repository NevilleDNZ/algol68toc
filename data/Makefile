#!/usr/bin/make
#
# $Id: Makefile,v 1.1 2002-02-19 11:40:11 sian Exp $
#
#------------ Algol 68 sources -------------
data_f := algol68.ssh lf.a68 m_algol.fte main.fte sheets.map \
          test.lf ui_k_fte.fte ui_m_kb.fte algol68.e algol68.h

algol_make := Algol68.mk

#------------ Rules ---------------
.PHONY : install

all : $(data_f) $(algol_make)

install :
	$(INSTALLDATA) -p $(data_f) $(DOCDIR)
	$(INSTALLDATA) -p $(algol_make) $(PKGDIR)
