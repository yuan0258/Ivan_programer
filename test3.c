#include <stdio.h>

#define IN 1
#define OUT 0

int main(int argc, char *argv[]) {
	int c = 0, nc = 0, nl = 0, nw = 0;
	int state = OUT;

	while ((c = getchar()) != EOF) {
		++nc;
		if (c == '\n')
			++nl;
		if (c == ' ' || c == '\n' || c == '\t')
			state = OUT;
		else if(state == OUT){
			++nw;
			state = IN;
		}	
	}	

	printf("nc:%d, nl:%d, nw:%d\n", nc, nl, nw);

}
