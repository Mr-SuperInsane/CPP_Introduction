#include <stdio.h>

int main(void) {
	int m = 3;
	int n = 5;
	double w1, w2, w3;
	
	// m,nはint型なので小数点以下の値は切り捨てられている
	w1 = m / n;
	printf("%lf \n", w1);
	
	w2 = (double)(m / n);
	printf("%lf \n", w2);

	w3 = (double)m / (double)n;
	printf("%lf \n", w3);

	return 0;
}