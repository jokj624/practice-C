#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    float *p, max_f = 0.0f;

    printf("Enter a size: ");
    scanf("%d", &n);

    p = (float*)malloc(sizeof(float) * n);

    for (i = 0; i < n; i++) {
        scanf("%f", p + i);
    }

    for (i = 0; i < n; i++) {
        if (*(p + i) > max_f) {
            max_f = *(p + i);
        }
    }

    printf("max float number : %.2f", max_f);
    free(p);

    return 0;
}
