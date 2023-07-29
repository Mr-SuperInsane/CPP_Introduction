#include <stdio.h>

int main(void){
	int xi;
	float xf;
	double xd;
	printf("整数・実数・実数を入力してください\n");
	scanf("%d %f %lf", &xi, &xf, &xd);
	printf("入力された値は%d,%f,%lfです", xi, xf, xd);
	return 0;
}
