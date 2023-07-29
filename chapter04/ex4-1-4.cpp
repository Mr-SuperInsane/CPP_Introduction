#include <stdio.h>

int main(void) {
	int minute, hour;
	printf("時間(分)を入力してください\n");
	scanf("%d", &minute);
	hour = minute / 60;
	minute %= 60;
	printf("%d時間%d分 \n", hour, minute);
	return 0;
}