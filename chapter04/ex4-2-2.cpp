#include <stdio.h>

int main(void) {
	int n, result;
	printf("整数を入力してください \n");
	scanf("%d", &n);
	result = 1 << 3*n;
	printf("8^%dは%dです \n", n, result);
	return 0;
}

// 0001 3*n分だけ左に移動するからn=1の場合は3つ移動して1000で8
// n=2の場合は6つ移動して1000000で64になる