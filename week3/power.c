#include <stdio.h>

int power(int x, int n) {
    int result = 1;
    while (n-- > 0) {
        result *= x;
    }
    return result;
}

int main() {
    int a = 5, k = 4;
    printf("%d\n", power(a, k)); // 625
    printf("%d\n", k);           // 4
    return 0;
}