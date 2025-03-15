#include <stdio.h>


int main(int argc, char *argv[]) {
	int c = 0;
	int ndigits = 0, nother = 0, nwhite = 0;
	int ndigit[10] = {0};



	while ((c = getchar()) != EOF) {
		if (c >= '0' && c <= '9') {
			++ndigits;
			++ndigit[c - '0']; //count 1~9
		} else if (c == ' ' || c == '\n' || c == '\t')
			++nwhite;
		else
			++nother;
	}

	printf("ndigit = {");
	for (int i = 0; i < 10; i++)
		printf("%d ", ndigit[i]);
	printf("}\n");
	printf("ndigits:%d,nwhite:%d,nother:%d\n", ndigits, nwhite, nother);
}
