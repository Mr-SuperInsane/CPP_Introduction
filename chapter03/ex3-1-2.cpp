#include <stdio.h>

int main(void) {
	char ch;
	printf("英文字を入力してください\n");
	scanf("%c", &ch);
	printf("入力された文字は%cです\n", ch);
	printf("文字コードは10進数で%dです\n", ch);
	printf("文字コードは16進数で%xです\n", ch);
	return 0;
}
// なぜ空白でこのような結果になったのか？
// ASCIIコード表を見てわかるようにNULL値に対応する10進数は10、16進数は0x0a(a)だから。
