#include <stdio.h>

int main() {
    char input[100];
    int i,len;
    int isPalindrome = 1;

    printf("文字列を入力してください\n");
    scanf("%s", input);


    for (i = 0; i <= 100; i++) {
        if (input[i] == '\0') {
            len = i;
            break;
        }
    }

    for (i = 0; i < len / 2; i++) {
        if (input[i] != input[len - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome) {
        printf("入力された文字列は回文です\n");
    }
    else {
        printf("入力された文字列は回文ではありません\n");
    }

    return 0;
}
