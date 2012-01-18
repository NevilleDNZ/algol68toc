#!/usr/bin/make
#
# $Id: Makefile,v 1.8 2012/01/04 17:20:06 sian Exp $
#
#-------------- Documentation sources ---------------
ctrans_doc := compl.taylour star.txt

#--------------- Rules ---------------
.PHONY: install

all : rscompiler.dvi.gz ctrans.dvi.gz ctrans.info.gz \
	a68toc.1.gz ca68.1.gz $(ctrans_doc)

rscompiler.dvi.gz : rscompiler.texi
	tex rscompiler.texi
	gzip -9 rscompiler.dvi

ctrans.info.gz : ctrans.texi
	makeinfo $<
	gzip -9 ctrans.info

ctrans.dvi.gz : ctrans.texi
	tex $<
	tex $<
	texindex ctrans.??
	gzip -9 ctrans.dvi

a68toc.1.gz : a68toc.1
	gzip -9c $< >$@

ca68.1.gz : ca68.1
	gzip -9c $< >$@

install :
	$(INSTALLDATA) -p rscompiler.dvi.gz ctrans.dvi.gz \
	   compl.taylour star.txt $(DOCDIR)
	$(INSTALLDATA) -p ctrans.info.gz $(INFODIR)
	$(INSTALLDATA) -p a68toc.1.gz ca68.1.gz $(MANDIR)
