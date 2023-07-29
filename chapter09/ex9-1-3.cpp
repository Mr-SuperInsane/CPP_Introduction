// 9-1-3

#include <stdio.h>

int main(void) {
	int i, n;
	scanf("%d", &n);
	printf("%dから1までの数を表示します\n", n);
	i = n;
	do {
		printf("%d\n", i);
		i--;
	} while (i > 0);
	return 0;
}
