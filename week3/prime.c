#include <stdio.h>

int is_prime(int n) {
    int i;

    for (i = 2; i < n; i++) {
        if (!(n % i)) return 0;
    }

    return 1;
}
int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (is_prime(n)) {
        printf("%d is a prime number\n", n);
    } 
    else {
        printf("%d is not a prime number \n", n);
    }
    return 0;
}