#include <stdio.h>

int main() {
    int a[5];

    printf("5つの整数を入力してください\n");

    for (int i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4 - i; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    printf("昇順に並び替えられた整数\n");
    for (int i = 0; i < 5; i++) {
        printf("%d \n", a[i]);
    }

    return 0;
}
