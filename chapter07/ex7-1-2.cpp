#include <stdio.h>

int main(void) {
	int a;
	printf("整数を入力してください\n");
	scanf("%d", &a);
	if (a <= 0 || a > 10) {
		printf("1");
	}
	else {
		printf("0");
	}
	return 0;
}