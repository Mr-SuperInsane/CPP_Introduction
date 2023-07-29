#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	srand((unsigned int)time(NULL));
	int a[10];
	int i;
	int count = 0;

	for (i = 0; i < 10; i++) {
		a[i] = rand() % 3 + 1;
	}
	for (i = 0; i < 10; i++) {
		printf("%d \n", a[i]);
		if (a[i] == 2) {
			count += 1;
		}
	}
	printf("配列aの中に2は %d 個あります\n", count);
	return 0;
}