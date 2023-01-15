#include <stdio.h>

int main() {
    int num;

    for (num = 1; num < 100; num++) {
        if (num % 3 == 0 && num % 7 == 0) {
            printf("3의 배수이면서 7의 배수 = %d\n", num);
            continue;
        }
        if (num % 3 == 0 || num % 7 == 0) {
            printf("3의 배수이거나 7의 배수 = %d\n", num);
        }
    }

    return 0;
}