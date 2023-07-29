#include <stdio.h>

int main(void) {
	int num;
	float sr_num;
	double dr_num;
	//整数の入力
	printf("整数を入力してください\n");
	scanf("%d", &num);
	//単精度実数の入力
	printf("単精度実数を入力してください\n");
	scanf("%f", &sr_num);
	//倍精度実数の入力
	printf("倍精度実数を入力してください\n");
	scanf("%lf", &dr_num);
	//表示
	printf("入力された単精度実数は%fです\n", sr_num);
	printf("入力された倍精度実数は%fです\n", dr_num);
	return 0;
}
