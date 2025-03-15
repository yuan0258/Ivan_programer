all:
	gcc test.c -o test
	gcc test2.c -o test2
clean:
	rm -rf *.o test test2
