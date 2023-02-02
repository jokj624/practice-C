#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b) {
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

void sort_three_items(int *x) {
    int i, j, *tmp;

    for (i = 0; i < 2; i++) {
        for (j = i + 1; j < 3; j++) {
            if (*(x + i) > *(x + j)) {
                swap(x + i, x + j);
            }
        }
    }
}

int main() {
    int i;
    int *a = (int *)malloc(sizeof(int) * 3);
    
    for (i = 0; i < 3; i++) {
        scanf("%d", a + i);
    }
    
    sort_three_items(a);

    for (i = 0; i < 3; i++) {
        printf("%d ", *(a + i));
    }

    free(a);
    return 0;
}

