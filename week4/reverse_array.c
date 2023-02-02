#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, *ptr, i, *arr;

    printf("Enter a size: ");
    scanf("%d", &n);

    arr = (int*)malloc(sizeof(int) * n);

    for (i = 0; i < n; i++) {
        scanf("%d", arr + i);
    }

    ptr = arr + n - 1;

    for (; ptr >= arr; --ptr) {
        printf("%d ", *ptr);
    }

    free(arr);
    return 0;
}