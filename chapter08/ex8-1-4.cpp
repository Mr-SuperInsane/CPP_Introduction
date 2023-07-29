#include <stdio.h>

int main(void) {
    int num, min, max, i;
    printf("整数を10個入力してください:\n");
    scanf("%d", &num);
    min = num;
    max = num;
    for (i = 1; i < 10; i++) {
        scanf("%d", &num);
        if (num < min) {
            min = num;
        }
        if (num > max) {
            max = num;
        }
    }

    printf("最小値: %d\n", min);
    printf("最大値: %d\n", max);

    return 0;
}