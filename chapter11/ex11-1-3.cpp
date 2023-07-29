#include <stdio.h>

int main(void) {
	char a[100];
	int i;

	printf("英単語を入力してください\n");
	scanf("%s", a);
	for (i = 0; i <= 100; i++) {
		if (a[i] == '\0') {
			printf("文字数は%dだよ", i);
			break;
		}
	}
	return 0;
}