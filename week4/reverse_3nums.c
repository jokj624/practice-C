#include <stdio.h>

int main() {
    int x, y, z;
    int *px, *py, *pz, *tmp;

    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &x, &y, &z);

    px = &x;
    py = &y;
    pz = &z;

    tmp = pz;
    pz = py;
    py = px;
    px = tmp;

    printf("Reverse 3 numbers : %d %d %d\n", *px, *py, *pz);

    return 0;
}