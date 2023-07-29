#include <stdio.h>

int main(void) {
	char a;
	printf("yまたはnを入力してください\n");
	scanf("%c", &a);
	switch (a) {
		case 'y':
			printf("Yesが入力されました");
			break;
		case 'n':
			printf("Noが入力されました");
			break;
		default:
			printf("yかnを入力してください");
			break;

	}
	return 0;
}