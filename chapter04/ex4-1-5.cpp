#include <stdio.h>

int main(void) {
	int m = 3;
	int x;
	double n = 5;
	double w;
	
	w = m / n;
	printf("%lf \n", w);

	// xはint型のため小数点以下は切り捨てられる仕様
	x = m / n;
	printf("%d \n", x);

	return 0;
}