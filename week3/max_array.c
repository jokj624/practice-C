#include <stdio.h>

int main() {
    int i, j, max_n = 0;
    int arr[3][3];

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &arr[i][j]);
            if (arr[i][j] > max_n) max_n = arr[i][j];
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (max_n == arr[i][j]) {
                printf("max number: %d\n", arr[i][j]);
                printf("row %d, column %d\n", i, j);
            }
        }
    }
    return 0;
}