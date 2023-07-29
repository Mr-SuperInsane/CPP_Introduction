#include <stdio.h>

int main(void) {
	int a;
	printf("整数を入力してください\n");
	scanf("%d", &a);
	if (a % 7 == 0) {
		printf("7で割り切れる");
	}
	else {
		printf("7で割り切れない");
	}
	return 0;
}