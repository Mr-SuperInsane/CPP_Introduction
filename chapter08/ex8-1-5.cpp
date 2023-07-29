#include <stdio.h>

int main(void) {
	int i, j;
	int result = 0;
	printf("数字を入力しろ\n");
	scanf("%d", &j);
	for (i = 0; i < j; i++) {
		result += i + 1;
		
	}
	printf("合計値は%d", result);
	return 0;
}