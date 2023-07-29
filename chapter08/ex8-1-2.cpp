#include <stdio.h>

int main(void) {
	int i,n;
	scanf("%d", &n);
	printf("%dから1までの数を表示します\n",n);
	for (i = n; i >0;i--) {
		printf("%d\n", i);
	}
	return 0;
}