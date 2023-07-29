#include <stdio.h>

int main(void) {
    int a[100];
    int i, len;
    int max, min;
    double sum, average;

    for (i = 0; i < 100; i++) {
        scanf("%d", &a[i]);
        if (a[i] == 0) {
            len = i;
            break;
        }
    }

    max = min = a[0];
    sum = a[0];

    for (i = 1; i < len; i++) {
        if (a[i] > max) {
            max = a[i];
        }
        if (a[i] < min) {
            min = a[i];
        }
        sum += a[i];
    }

    average = sum / len;

    printf("最大値: %d\n", max);
    printf("最小値: %d\n", min);
    printf("平均値: %.3f\n", average);

    return 0;
}
