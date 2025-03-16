.PHONY: clean
CFLAGS=-Wall -g -Werror
CC=gcc

all:
	$(CC) test.c -o test
	$(CC) test2.c -o test2
	$(CC) test3.c -o test3
	$(CC) test4.c -o test4
	$(CC) test5.c -o test5
	$(CC) 1_two_sum.c -o 1_two_sum


clean:
	rm -rf *.o test test2 test3 test4 test5 1_two_sum
