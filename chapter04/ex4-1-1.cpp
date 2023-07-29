#include <stdio.h>
int main(void)
{
	int a = 1;
	//以下はすべてaに1を加える演算を行っている
	a = a + 1; //加算演算子と代入演算子
	a += 1; //加算代入(複合代入演算子)
	a++; //後置インクリメント
	++a; //前置インクリメント
	printf("%d \n", a);

	// --キャスト演算子--
	int x = 10, y = 20;
	float z;
	z = x / y;
	printf("%f \n", z);
	z = (float)x / (float)y;
	printf("%f \n", z);
	return 0;
}