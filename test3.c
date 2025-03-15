#include <stdio.h>

int main(int argc, char *argv[]) {
	int c = 0;

	/* Copy input to output; 1st version, crtl + d to exit */
	c = getchar();
	while ( c != EOF) {
		putchar(c);
		c = getchar();
	}

}
