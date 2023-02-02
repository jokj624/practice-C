#include <stdio.h>

void max_min();

int main() {
    int a[10], i;
    int max_n = 0, min_n = 999999999;
    printf("Enter 10 numbers : ");
    for (i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }

    max_min(a, 10, &max_n, &min_n);
    return 0;
}

void max_min(int a[], int n, int* max, int* min) {
    int i;

    for (i = 0; i < n; i++) {
        if (*max < a[i]) {
            *max = a[i];
        } 
        if (*min > a[i]) {
            *min = a[i];
        }
    }

    printf("Max: %d, Min: %d\n", *max, *min);
}