#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand((unsigned int)time(NULL));

	printf("1回目の乱数呼び出し：%d\n", rand());
	printf("2回目の乱数呼び出し：%d\n", rand());
	printf("3回目の乱数呼び出し：%d\n", rand());
	printf("4回目の乱数呼び出し：%d\n", rand());
	printf("5回目の乱数呼び出し：%d\n", rand());

	return 0;
}