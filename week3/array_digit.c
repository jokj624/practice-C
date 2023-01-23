#include <stdio.h>

int main() {
    int n, i, a, digit[10] = {0};

    printf("Enter a number : ");    
    scanf("%d", &n);

    while (n > 0) {
        a = n % 10;
        digit[a]++;
        n /= 10;
    }

    printf("Repeated digit : ");

    for (i = 0; i < 10; i++) {
        if (digit[i] >= 2) {
            printf("%d ", i);
        }
    }

    return 0;
}