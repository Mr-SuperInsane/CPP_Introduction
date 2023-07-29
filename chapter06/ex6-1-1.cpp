#include <stdio.h>

int main(void)
{
	int res;
	printf("整数を入力して下さい。\n");
	scanf("%d", &res);
	if (res == 0) {
		printf("0が入力されました。\n");
	}
	else if (res >= 1) {
		printf("正の値が入力されました。\n");
	}
	else {
		printf("負の値が入力されました。\n");
	}
	return 0;
}