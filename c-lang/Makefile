CC=gcc-14
CFLAGS=-g -Wall -W -ansi -pedantic -std=c2x

.PHONY: run
run: a.out
	./a.out

.PHONY: clean
clean:
	rm -rf a.out*

a.out: test.c
	$(CC) $(CFLAGS) test.c
