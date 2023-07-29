#include <stdio.h>

int main(void) {
	int i;
	char a[5];
	printf("5つの文字を入力してください\n");
	for (i = 0; i < 5; i++) {
		scanf(" %c", &a[i]);
	}
	printf("入力された値を逆順で表示します\n");
	for (i = 4; i>=0; i--) {
		printf("%c \n", a[i]);
	}
	return 0;
}