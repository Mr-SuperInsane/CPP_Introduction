#include <stdio.h>

int main(void) {
    int i, n;
    printf("整数を入力してください\n");
    scanf("%d", &n);

    i = 1;
    do {
        if (i % 7 != 0) {
            printf("%d\n", i);
        }
        i++;
    } while (i <= n);

    return 0;
}
