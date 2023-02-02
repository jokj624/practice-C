#include <stdio.h>

int* changeToDouble(int* a) {
    *a *= 2;

    return a;
}
int main() {
    int x; 

    printf("Enter a number x: ");
    scanf("%d", &x);

    int *ptr = changeToDouble(&x);
    
    printf("Change to double x : %d\n", *ptr);

    return 0;
}