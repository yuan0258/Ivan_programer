all:
	gcc test.c -o test
	gcc test2.c -o test2
	gcc test3.c -o test3
	gcc test4.c -o test4
	gcc test5.c -o test5
clean:
	rm -rf *.o test test2 test3 test4 test5
