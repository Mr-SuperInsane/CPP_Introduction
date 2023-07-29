#include <stdio.h>

int main(void) {
	int i,j, n;
	printf("正の数を入力してください\n");
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		int result = 1;
		for (j = 1; j <= i; j++) {
			result *= j;
		}
		printf("%d\n", result);
	}
	return 0;
}