#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int random_num = rand() % 52; //乱数関数
	int card_type = random_num / 13; //カードの種類
	int card_num = random_num % 13 + 1; //カードの数字
	switch (card_type) {
		case 0:
			printf("スペードの%d", card_num);
			break;
		case 1:
			printf("ダイアの%d", card_num);
			break;
		case 2:
			printf("ハートの%d", card_num);
			break;
		case 3:
			printf("クラブの%d", card_num);
			break;
	}
	return 0;
}