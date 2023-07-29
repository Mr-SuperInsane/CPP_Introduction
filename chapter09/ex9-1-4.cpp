#include<stdio.h>
int main(void)
{
    int i, n;
    printf("整数を入力してください\n");
    scanf("%d", &n);

    i = 1;
    while (i <= n) {
        if (i % 7 != 0) {
            printf("%d\n", i);
        }
        i++;
    }
    return 0;
}