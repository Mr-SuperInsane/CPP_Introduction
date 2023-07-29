#include <stdio.h>
#include <math.h>

int main(void)
{
	double x = 2.0;
	double y;

	y = sqrt(x);
	printf("sqrt(%f) = %f\n", x, y);

	y = log10(x);
	printf("log10(%f) = %f\n", x, y);

	return 0;
}