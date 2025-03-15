#include <stdio.h>

int main(int argc, char *argv[]) {
	int c = 0;
	long nc = 0; /* count character in input; 1st version */

	while (getchar() != EOF)
		++nc;

	printf("nc is %ld\n", nc);

}
