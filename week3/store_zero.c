#include <stdio.h>

void store_zeros(int a[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        a[i] = 0;
    }
}

int main() {
    int a[4] = {1, 2, 3, 4};
    store_zeros(a, 4);
    printf("%d %d %d %d\n", a[0], a[1], a[2], a[3]);
    return 0;
}