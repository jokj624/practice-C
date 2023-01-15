#include <stdio.h>

int main() {
    int x, i = 1;

    printf("Enter number of entries in table: ");
    scanf("%d", &x);

    while(i <= x) {
        printf("\t%d\t%d\n", i, i*i);
        i++;
    }

    return 0;
}