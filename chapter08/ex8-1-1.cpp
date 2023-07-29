#include <stdio.h>

int main(void) {
	/*
	int i;
	for (i = 0; i < 10; i++) {
		printf("この文字列は10回表示されます\n");
		printf("これは%d回目の表示です\n", i+1);
	}
	*/

	/*
	//入力した数字×2回ループ
	int i, n;
	scanf("%d", &n);
	for (i = 0; i < n * 2; i++) {
		printf("この文字列は%d回表示されます\n", n * 2);
		printf("これは%d回目の表示です\n", i + 1);
	}
	*/

	int i, j;
	for (i = 0; i < 10; i++) {
		for (j = 0; j < 5; j++) {
			printf("%d行, %d列\n", i + 1, j + 1);
		}
		printf("\n");
	}
	return 0;
}

