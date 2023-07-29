#include <stdio.h>

int main(void) {
	int num1, num2, s1, p1;
	printf("整数を入力してください\n");
	scanf("%d", &num1);
	printf("整数を入力してください\n");
	scanf("%d", &num2);
	s1 = num1 + num2;
	p1 = num1 * num2;
	printf("入力された%dと%dの和は%dです\n",num1,num2,s1);
	printf("入力された%dと%dの積は%dです\n", num1, num2, p1);
}
