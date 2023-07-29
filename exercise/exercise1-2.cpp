#include <stdio.h>

int main(void) {
    int a, b = 0;

    printf("国語の成績を入力\n");
    scanf("%d", &a);
    b += a;
    printf("数学の成績を入力\n");
    scanf("%d", &a);
    b += a;
    printf("英語の成績を入力\n");
    scanf("%d", &a);
    b += a;
    printf("３教科の平均点は%.1f点です\n", (float)b / 3);
    return 0;
}
