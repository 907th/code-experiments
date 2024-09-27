CC=gcc
CFLAGS=-g -Wall -W -ansi -pedantic
FLEXDIR=/usr/local/opt/flex

.PHONY: run
run: a.out
	./a.out

a.out: lex.yy.c
	$(CC) $(CFLAGS) -L$(FLEXDIR)/lib -lfl lex.yy.c

lex.yy.c: test.l
	$(FLEXDIR)/bin/flex test.l
