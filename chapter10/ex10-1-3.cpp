#include <stdio.h>

int main(void) {
	int i;
	int a[5], b[5], c[5];

	printf("10個の数字を入力してください\n");
	for (i = 0; i < 5; i++) {
		scanf("%d%d", &a[i], &b[i]);
	}
	for (i = 0; i < 5; i++) {
		c[i] = a[i] + b[i];
		printf("a[%d]+b[%d]=%d\n", i, i, c[i]);
	}

}