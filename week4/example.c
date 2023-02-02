#include <stdio.h>

int* max(int* a, int* b) {
    if (*a > *b) return a;
    else return b;
}

int main() {

    // int n;
    // n = 1234;
    // printf("%d, %.8x, %.8X\n", n, n, &n);

    // int n, *p;
    // p = &n;
    // *p = 13;
    // printf("%d, %d\n", n, *p);
    // n = 20;
    // printf("%d, %d\n", n, *p);

    // int *k;
    // *k = 10;

    // printf("%d", k);

    // return pointer max();
    // int *p, i = 12, j = 9;
    // p = max(&i, &j);

    // printf("max i vs j : %d\n", *p);

    int i = 1;
    int *p = &i;

    *p = 128;

    printf("%d\n", i);

    return 0;
}