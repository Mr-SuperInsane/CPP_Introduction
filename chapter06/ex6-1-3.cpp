#include <stdio.h>

int main(void) {
	int n, m;
	printf("2つの値を入力してください\n");
	scanf("%d %d", &n, &m);
	if (n > m) {
		printf("%dのほうが大きい", n);
	}
	else if (n < m) {
		printf("%dのほうが大きい", m);
	}
	else {
		printf("%dと%dは同じ値です", n, m);
	}
	return 0;
}