#include <stdio.h>
int main(void)
{
	int num1, num2;
	int goukei = 0;
	float sr_num = 3.14;
	double dr_num = 3.141592653589;
	num1 = 1;
	num2 = -2;
	goukei = num1 + num2;
	printf("num1‚Ænum2‚Ì‡Œv‚Í % d‚Å‚·\n", goukei);
	printf("floatŒ^•Ï”sr_num‚Ì’l‚Í % f‚Å‚·\n", sr_num);
	printf("doubleŒ^•Ï”dr_num‚Ì’l‚Í % f‚Å‚·\n", dr_num);
	return 0;
}