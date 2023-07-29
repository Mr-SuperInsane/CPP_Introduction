#include <stdio.h>

int main(void) {
	int a;
	printf("整数を入力してください\n");
	scanf("%d", &a);
	if (a % 3 == 0 && a % 5 == 0) {
		printf("%dは3と5で割り切れます", a);
	}
	else {
		printf("%dは3と5で割り切れません", a);
	}
	return 0;
}