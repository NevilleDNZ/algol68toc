#!/usr/bin/make
#
# $Id: $
#
.PHONY : clean all

A68_ROOT=$(ACD)
A68_DIRS=-dir $(A68_ROOT) -dir .
A68_FLAGS:=-v -s -uname seedfile

all : resetseed nameseed tang rs ca

tang: $(LBD)/Afirst.o tang.a68 $(QAD)/liba68s.a $(LBD)/liba68.a
	$(ALGOL) $(A68_FLAGS) -lib $(A68_ROOT) $(A68_DIRS) tang.a68
	$(CC) $(NOR) -DA68_CHECK -o tang.o -c tang.c
	$(CC) -o $@ $< tang.o -L$(QAD) -la68s -L$(LBD) -la68 -lm -lc

unicode.o: unicode.w68
	./tang -w. $<
	$(ALGOL) $(A68_FLAGS) -lib $(A68_ROOT) $(A68_DIRS) unicode.a68
	$(CC) $(NOR) -DA68_CHECK -o $@ -c unicode.c

ucharbag.o: ucharbag.w68
	./tang -w. $<
	$(ALGOL) $(A68_FLAGS) -lib $(A68_ROOT) $(A68_DIRS) ucharbag.a68
	$(CC) $(NOR) -DA68_CHECK -o $@ -c ucharbag.c

uregexpr.o: uregexpr.w68
	./tang -w. $<
	$(ALGOL) $(A68_FLAGS) -lib $(A68_ROOT) $(A68_DIRS) uregexpr.a68
	$(CC) $(NOR) -DA68_CHECK -o $@ -c uregexpr.c

uregex.o: uregex.w68
	./tang -w. $<
	$(ALGOL) $(A68_FLAGS) -lib $(A68_ROOT) $(A68_DIRS) uregex.a68
	$(CC) $(NOR) -DA68_CHECK -o $@ -c uregex.c

rs: $(LBD)/Afirst.o unicode.o ucharbag.o uregexpr.o uregex.o rs.w68 \
	$(QAD)/liba68s.a $(LBD)/liba68.a gprelude.w syserr.w sysprelude.w
	./tang -w. rs.w68
	$(ALGOL) $(A68_FLAGS) -lib $(A68_ROOT) $(A68_DIRS) rs.a68
	$(CC) $(NOR) -DA68_CHECK -o rs.o -c rs.c
	$(CC) -o $@ $< rs.o unicode.o ucharbag.o uregexpr.o uregex.o \
	  -L$(QAD) -la68s -L$(LBD) -la68 -lm -lc
	
ca: $(LBD)/Afirst.o ca.w68 $(QAD)/liba68s.a $(LBD)/liba68.a \
	gprelude.w syserr.w sysprelude.w
	./tang -w. ca.w68
	$(ALGOL) $(A68_FLAGS) -lib $(A68_ROOT) $(A68_DIRS) ca.a68
	$(CC) $(NOR) -DA68_CHECK -o ca.o -c ca.c
	$(CC) -o $@ $< ca.o -L$(QAD) -la68s -L$(LBD) -la68 -lm -lc

nameseed : rctr
	cp $< $@

install :
	$(INSTALLPROG) -p -s ca $(BINDIR)
	$(INSTALLPROG) -p -s rs $(BINDIR)
	$(INSTALLPROG) -p -s tang $(BINDIR)
	$(INSTALLPROG) -p resetseed $(BINDIR)

clean:
	rm -fv nameseed ca ca.a68 ca.c ca.o \
	  tang tang.c tang.o \
	  rs rs.a68 rs.c rs.o \
	  unicode.o unicode.c unicode.m unicode.a68 \
	  ucharbag.o ucharbag.c ucharbag.m ucharbag.a68 \
	  uregexpr.o uregexpr.c uregexpr.m uregexpr.a68 \
	  uregex.o uregex.c uregex.m uregex.a68
