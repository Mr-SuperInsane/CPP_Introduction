#include <stdio.h>

int main(void) {
	int x;
	printf("試験の点数を入力してください\n");
	scanf("%d", &x);
	if (x >= 80 && x <= 100) {
		printf("A");
	}
	else if (x >= 70 && x <= 79) {
		printf("B");
	}
	else if (x >= 60 && x <= 69) {
		printf("C");
	}
	else {
		printf("D(不合格)");
	}
	return 0;
}
