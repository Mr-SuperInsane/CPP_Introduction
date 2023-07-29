#include <stdio.h>

int main(void) {
	int i, n;
	scanf("%d", &n);
	printf("%dまでの奇数を表示します\n",n);
	for (i = 1; i <= n; i+=2) {
		printf("%d\n", i);
	}
	return 0;
}