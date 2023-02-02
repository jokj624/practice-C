#include <stdio.h>

void swap(int* a, int* b) {
    int temp;
    temp = *b;
    *b = *a;
    *a = temp;
}

int main() {
    int a, b;

    printf("Input A, B: ");
    scanf("%d %d", &a, &b);

    swap(&a, &b);

    printf("Swap A, B: %d %d", a, b);

    return 0;
}