#include <stdio.h>

void input(int* x, int* y, int* z) {
    printf("Enter 3 numbers: ");
    scanf("%d %d %d", x, y, z);
}

void output(int* x, int* y, int* z) {
    printf("output: %d %d %d\n", *x, *y, *z);
}

int main() {
    int x, y, z;
    
    input(&x, &y, &z);
    output(&x, &y, &z);

    return 0;
}