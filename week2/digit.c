#include <stdio.h>

int main() {
    int x, i = 0;

    printf("Enter a non-negative integer: ");
    scanf("%d", &x);

    do {
        x /= 10;
        i++;
    } while (x > 0);

    printf("The number has %d digit(s)\n", i);

    return 0;
}