#include <stdio.h>

int main(void) {
    int x;
    printf("正数xを入力してください: ");
    scanf("%d", &x);

    int fib0 = 0;
    int fib1 = 1; 
    int fib;      

    if (x == 0) {
        fib = fib0;
    }
    else if (x == 1) {
        fib = fib1;
    }
    else {
        for (int i = 2; i <= x; i++) {
            fib = fib0 + fib1;
            fib0 = fib1;
            fib1 = fib;
        }
    }

    printf("F(%d) = %d\n", x, fib);

    return 0;
}
