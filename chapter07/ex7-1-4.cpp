#include <stdio.h>

int main(void) {
	int a;
	printf("西暦年を入力してください");
	scanf("%d", &a);
	if ((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0)) {
		printf("%d年はうるう年です", a);
	}
	else {
		printf("%dはうるう年ではありません", a);
	}
	return 0;
}