#include <stdio.h>
#include <math.h>

int main(void) {
	double e, pi;
	e = exp(1.0);
	pi = acos(-1.0);
	printf("自然対数の底e=%.5f \n", e);
	printf("円周率π=%.5f \n", pi);
	return 0;
}