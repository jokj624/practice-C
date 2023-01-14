#include <stdio.h>

int main() {
    int a, b;
    int r, x, y, z;

    scanf("%d %d", &a, &b);

    r = a * (b % 10);
    x = a * ((b / 10) % 10);
    y = a * (b / 100);
    z = a * b;

    printf("%d\n%d\n%d\n%d", r, x, y, z);
    return 0;
}