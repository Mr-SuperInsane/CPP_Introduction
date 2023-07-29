/*数学関数を使う*/
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>


int main(void)
{
	double x = 2.0;
	double y;
	y = sqrt(x); //平方根を求めてyに代入する
	printf("sqrt(%f) = %f \n", x, y);
	y = log10(x); //対数をとって yに代入する
	printf("log10(%f) = %f \n", x, y);

	srand((unsigned int)time(NULL));
	//0から9の範囲の乱数を発生させる
	printf("1回目： %d \n", rand() % 10);
	printf("2回目： %d \n", rand() % 10);
	printf("3回目： %d \n", rand() % 10);

	return 0;
}