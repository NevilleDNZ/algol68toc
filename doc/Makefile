#!/usr/bin/make
#
#-------------- Documentation sources ---------------
ctrans_doc := compl.taylour star.txt

#--------------- Rules ---------------
.PHONY: install clean

all : rscompiler.html ctrans.info.gz a68toc.1.gz resetseed.1.gz \
	ca.html tang.html Web68man.html a68toc.desktop $(ctrans_doc)

a68toc.1.gz: a68toc.1
	gzip -9c $< >$@

resetseed.1.gz : resetseed.1
	gzip -9c $< >$@

install :
	$(INSTALLDATA) -p ca.html tang.html rscompiler.html Web68man.html $(DOCDIR)
	$(INSTALLDATA) -p $(ctrans_doc) $(DOCDIR)
	$(INSTALLDATA) -p ctrans.info.gz $(INFODIR)
	$(INSTALLDATA) -p a68toc.1.gz resetseed.1.gz $(MANDIR)
	$(INSTALLDATA) -p pame/* $(DOCDIR)/pame
	$(INSTALLDATA) -p a68toc.desktop $(APPDIR)

clean:
	$(RM) -v a68toc.1.gz resetseed.1.gz
