// ex10-2-1
#include <stdio.h>

int main(void) {
    int a[5];
    int i;

    printf("5つの整数を入力してください：\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    for (i = 1; i < 5; i++) {
        a[i] += a[i - 1];
        /*
         

        a[1] = a[1] + a[0]
        a[2] = a[2] + a[1] = a[2] + a[1] + a[0]
        a[3] = a[3] + a[2] = a[3] + a[2] + a[1] +a[0]
        a[4] = a[4] + a[3] 
        */
    }

    printf("各要素の値とそれまでの和\n");
    for (i = 0; i < 5; i++) {
        printf("a[%d]: %d\n", i , a[i]);
    }

    return 0;
}
