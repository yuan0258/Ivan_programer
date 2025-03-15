#include <stdio.h>

int main(int argc, char *argv[]) {
	int c = 0;
	long nc = 0; /* count character in input; 1st version */
	int nl = 0;

	while ((c = getchar()) != EOF) {
		++nc;
		if ( c == '\n')
			++nl;
	}	

	printf("nc:%ld, nl:%d\n", nc, nl);

}
