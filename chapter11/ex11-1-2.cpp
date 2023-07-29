#include <stdio.h>

int main() {
    char a[6];
    char b[6];

    printf("文字列aを入力してください\n");
    scanf("%s", a);

    printf("文字列bを入力してください\n");
    scanf("%s", b);

    printf("交互に出力します\n");
    for (int i = 0; i < 5; i++) {
        printf("%c%c", a[i], b[i]);
    }

    return 0;
}
