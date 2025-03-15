#include <stdio.h>

/* power: raise base to n-th power; n >=0) */
int power(int base, int n)
{
	int i, p = base;
	for (i=1 ;i < n;i++)
		p *= base;
	return p;
}

int main(int argc, char *argv[]) {
	printf("2^10 = %d\n", power(2,10));
}
