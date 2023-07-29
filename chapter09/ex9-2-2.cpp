/*
// ex8-2-1
#include <stdio.h>

int main(void) {
    int i, j, n;
    printf("正の数を入力してください\n");
    scanf("%d", &n);

    i = 1;
    while (i <= n) {
        int result = 1;
        j = 1;
        while (j <= i) {
            result *= j;
            j++;
        }
        printf("%d\n", result);
        i++;
    }

    return 0;
}
*/

/*
// ex8-2-2
#include <stdio.h>

int main(void) {
    int n;
    printf("正数nを入力してください: ");
    scanf("%d", &n);

    int fib0 = 0;
    int fib1 = 1;
    int fib = 0;

    if (n == 0) {
        fib = fib0;
    } else if (n == 1) {
        fib = fib1;
    } else {
        int i = 2;
        while (i <= n) {
            fib = fib0 + fib1;
            fib0 = fib1;
            fib1 = fib;
            i++;
        }
    }

    printf("F(%d) = %d\n", n, fib);

    return 0;
}

*/

/*
// ex8-2-3
#include <stdio.h>

int main(void) {
    int n, i;
    int isPrime = 1;

    printf("整数nを入力してください: ");
    scanf("%d", &n);

    if (n <= 1) {
        isPrime = 0;
    } else {
        i = 2;
        while (i <= n / 2) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
            i++;
        }
    }

    if (isPrime) {
        printf("%d は素数です。\n", n);
    } else {
        printf("%d は素数ではありません。\n", n);
    }

    return 0;
}

*/

/*
// ex8-2-4
#include <stdio.h>

int main(void) {
    int i = 1, j;

    while (i <= 9) {
        j = 1;
        while (j <= 9) {
            printf("%d\t", i * j);
            j++;
        }
        printf("\n");
        i++;
    }

    return 0;
}

*/