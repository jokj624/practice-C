#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, sum = 0;
    int *p;

    printf("Enter a size : ");
    scanf("%d", &n);

    p = (int*)malloc(sizeof(int) * n);

    for (i = 0; i < n; i++) {
        scanf("%d", p + i);
    }
    for (i = 0; i < n; i++) {
        sum += *(p + i);
    }

    printf("sum = %d\n", sum);
    
    free(p);

    return 0;   
}