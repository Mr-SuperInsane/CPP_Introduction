#include <stdio.h>

int main(void) {
	int i, a[5];
	int res1 = 0, res2 = 1;
	printf("5つの数字を入力してください\n");
	for (i = 0; i < 5; i++) {
		scanf(" %d", &a[i]);
	}
	for (i = 0; i < 5; i++) {
		res1 += a[i];
		res2 *= a[i];
	}
	printf("要素5つの和は %d\n", res1);
	printf("要素5つの積は %d\n", res2);
	return 0;
}