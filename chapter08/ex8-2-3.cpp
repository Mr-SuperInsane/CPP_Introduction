#include <stdio.h>

int main(void) {
    int n, i;
    int isPrime = 1;

    printf("整数nを入力してください: ");
    scanf("%d", &n);

    if (n <= 1) {
        isPrime = 0;
    }
    else {
        for (i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }
    if (isPrime) {
        printf("%d は素数です。\n", n);
    }
    else {
        printf("%d は素数ではありません。\n", n);
    }

    return 0;
}
