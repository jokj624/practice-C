#include <stdio.h>

int main() {
    int n, i, j;

    printf("n을 입력하세요: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}