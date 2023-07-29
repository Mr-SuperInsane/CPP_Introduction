#include <stdio.h>
int main(void)
{
	int num1, num2, s1,p1;
	num1 = 12;
	num2 = 34;
	s1 = num1 + num2;
	p1 = num1 * num2;
	printf("%d+%d=%d \n", num1, num2, s1);
	printf("%d*%d=%d \n", num1, num2, p1);
	return 0;
}