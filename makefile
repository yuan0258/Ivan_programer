all:
	gcc test.c -o test
	gcc test2.c -o test2
	gcc test3.c -o test3
clean:
	rm -rf *.o test test2 test3
