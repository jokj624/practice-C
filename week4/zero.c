#include <stdio.h>

int main() {
    int arr[50] = {0}, n;
    int *p, *arr_end, *pN = &n;

    scanf("%d", pN);

    arr_end = arr + *pN;

    for (p = arr; p < arr_end; p++) {
        scanf("%d", p);
    }
    for (p = arr; p < arr_end; p++) {
        if (*p == 0) {
            printf("%ld", p - arr);
        }
    }

    return 0;
}