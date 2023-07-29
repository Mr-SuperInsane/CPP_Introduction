#include <stdio.h>

int main(void) {
	int x, y;
	printf("1(真)または0(偽)を2つ入力してください\n");
	scanf("%d %d", &x, &y);
	if (x == 1 && y == 1) {
		printf("論理積(AND):両方とも真\n");
	}
	else {
		printf("論理積(AND)):偽\n");
	}
	if (x == 0 && y == 0) {
		printf("論理和(OR):両方とも偽\n");
	}
	else {
		printf("論理和(OR):真\n");
	}
	if ((x == 1 && y == 0) || (x == 0 && y == 1)) {
		printf("排他的論理和(EXOR):1つだけが真");
	}
	else {
		printf("排他的論理和(EXOR):偽");
	}
	return 0;
}