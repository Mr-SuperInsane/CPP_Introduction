#include <stdio.h>

int main(void) {
	int x1, y1, x2, y2;
	float a, b;
	printf("点Aの座標をx,yの順で入力してください\n");
	scanf("%d %d", &x1, &y1);
	printf("点Bの座標をx,yの順で入力してください\n");
	scanf("%d %d", &x2, &y2);
	a = y2-y1 / x2-x1 +0.5;
	b = y1 - a * x1 + 0.5;
	printf("2点A,Bの直線の方程式はY=%dX+(%d)", a, b);
	return 0;
}
