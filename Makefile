.DEFAULT_GOAL := all

CFLAGS=-g -O0 -std=c11 -Wall -Wextra -Wpedantic -Werror -Wshadow

clean:
	rm -rf dst/*

all: clean
	gcc $(CFLAGS) src/01-binary-search.c -o dst/01-binary-search
	gcc $(CFLAGS) src/02-linked-list.c -o dst/02-linked-list
