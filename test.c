#include <stdio.h>

/* print Fahrenheit-Celsius table, floating-point version */
int main(int argc, char *argv[]) {
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;
	
	fahr = lower;
	while (fahr <= upper) {
		celsius = (5.0/9.0) * (fahr - 32.0);
		printf("%3.0f\t%6.1f\n", fahr, celsius);
		fahr += step;
	}
	printf("hello ivan\n");

}
