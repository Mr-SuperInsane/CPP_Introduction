#include <stdio.h>

int main(void) {
    int a[100];
    int i, num;

    printf("正の整数を入力してください（0を入力すると終了します）：\n");
    for (i = 0; i < 100; i++) {
        scanf("%d", &num);
        a[i] = num;
        if (num == 0) {
            break;
        } 
    }

    printf("配列aの内容を順に出力します：\n");

    for (i = 0; i < 100; i++) {
        if (a[i] == 0) {
            break;
        }
        printf("%d\n", a[i]);
    }

    return 0;
}
