#include <stdio.h>

int main(void) {
	int num1 = 10, num2 = 5;
	int sub, prod;

	sub = num1 - num2;
	prod = num1 * num2;

	printf("subの値は%dです．\n", sub);
	printf("prodの値は%dです．\n", prod);

	return 0;
}