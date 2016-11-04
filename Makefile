.DEFAULT_GOAL := all

CFLAGS=-g -O0 -std=c11 -Wall -Wextra -Wpedantic -Werror -Wshadow

clean:
	rm -rf dst/*

all: clean
	gcc $(CFLAGS) src/01-binary-search.c -o dst/01-binary-search
