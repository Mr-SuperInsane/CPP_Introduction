#include <stdio.h>

int main(void) {
	int input_num, result, hundred, ten, one;
	printf("3桁の整数を入力してください \n");
	scanf("%d", &input_num);
	hundred = input_num / 100;
	ten = (input_num - 100 * hundred) / 10;
	one = (input_num - 100 * hundred - 10 * ten) / 1;
	result = hundred + ten + one;
	printf("%d \n", result);
	return 0;
}

//頭悪いコードかもしれん