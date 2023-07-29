#include <stdio.h>
#include <math.h>

int main(void) {
	int num, result;
	printf("0より大きい実数を入力してください \n");
	scanf("%d", &num);
	result = log10(num) + 1;
	printf("%dの桁数は%dです", num, result);
	return 0;
}