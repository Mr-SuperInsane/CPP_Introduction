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
	printf("num1��num2�̍��v�� % d�ł�\n", goukei);
	printf("float�^�ϐ�sr_num�̒l�� % f�ł�\n", sr_num);
	printf("double�^�ϐ�dr_num�̒l�� % f�ł�\n", dr_num);
	return 0;
}