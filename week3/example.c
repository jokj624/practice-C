#include <stdio.h>

void print_name(void) {
    printf("My name is Alice\n");
}

void print_countdown(int n) {
    print_name();
    do {
        printf("%d ", n--);
    } while (n);
}

int main() {
    // array
    // int a[3][4] = {0, 1, 3, 2, 5, 100, 98, -2, 10, 3, 4, 23};
    // int i, j;

    // for (int i = 0; i < 3; i++) {
    //     for (int j = 0; j < 4; j++) {
    //         printf("%d ", a[i][j]);
    //     }
    //     printf("\n");
    // }

    // function

    print_countdown(10);

    return 0;
}