#include <stdio.h>
int main(void)
{
	int sw;
	printf("あなたは何派? \n");
	printf("番号を選んでください\n");
	printf("1:野菜派 2:スナック菓子派 3:どちらでもない\n");
	scanf("%d", &sw);
	switch (sw) {
	case 1:
		printf("大変優秀です\n");
		break;
	case 2:
		printf("少し控えましょう\n");
		break;
	case 3:
		printf("さらに上を目指しましょう\n");
		break;
	default:
		printf("正しい番号を選んでください\n");
		break;
	}

	//-----------------------

	char input;
	printf("文字を入力して下さい\n");
	scanf("%c", &input);
	switch (input) /* 入力された文字に応じた分岐 */
	{
	case 'a': /* 'a'のとき */
		printf("aが入力されました\n");
		break;
	case 'b': /* 'b'のとき */
		printf("bが入力されました\n");
		break;
	default: /* 'a'でも'b'でもないとき */
		printf("ab以外の文字が入力されました\n");
		break;
	}
	return 0;
}