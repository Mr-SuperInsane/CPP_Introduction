#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(static_cast<unsigned int>(time(0)));

    int dice1, dice2;
    bool zorome = false;

    do {
        dice1 = rand() % 6 + 1;
        dice2 = rand() % 6 + 1;

        printf("%d & %d\n", dice1, dice2);

        if (dice1 == dice2) {
            printf("ぞろ目が出ました！\n");
        }

    } while (dice1 != dice2);

    return 0;
}
