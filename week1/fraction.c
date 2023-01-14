#include <stdio.h>

int main() {
    int a, b, c, d;
    int x, y;

    printf("분수의 합을 입력하세요 : ");
    scanf("%d/%d+%d/%d", &a, &b, &c, &d);

    y = b * d;
    x = a * d + b * c;

    printf("분수의 합: %d/%d\n", x, y);

    return 0;
}