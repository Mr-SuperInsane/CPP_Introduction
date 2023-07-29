#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
	int x1, y1, x2, y2, result;
	printf("点Aのx座標を入力してください \n");
	scanf("%d", &x1);
	printf("点Aのy座標を入力してください \n");
	scanf("%d", &y1);
	printf("点Bのx座標を入力してください \n");
	scanf("%d", &x2);
	printf("点Bのy座標を入力してください \n");
	scanf("%d", &y2);
	result = fabs(x1 * y2 - x2 * y1) / 2;
	printf("三角形AOBの面積は%dです", result);
	return 0;
}