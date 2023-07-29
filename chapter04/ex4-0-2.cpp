#include <stdio.h>

int main(void)
{
	int sum = 0;

	sum++;
	sum = sum + 1;
	sum += 1;

	printf("sumの値は%d\n", sum);

	return 0;
}