#include <stdio.h>

int main(void) {
    int a, b = 0;

    printf("コンピュータ基礎演習の学習時間を分で入力\n");
    scanf("%d", &a);
    b += a;
    printf("プログラミング入門演習の学習時間を分で入力\n");
    scanf("%d", &a);
    b += a;
    printf("情報工学入門の学習時間を分で入力\n");
    scanf("%d", &a);
    b += a;
    printf("専門科目の学習時間は%.1f時間です\n", (float)b / 60);
    return 0;
}
