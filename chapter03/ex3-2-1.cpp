#include <stdio.h>

int main(void) {
	char a;
	printf("小文字のアルファベットを入力してください\n");
	scanf("%c", &a);
	char temp = a - 32;
	printf("大文字は%cです", temp);
	return 0;
}
