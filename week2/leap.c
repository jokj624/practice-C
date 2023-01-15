#include <stdio.h>

int main() {
    int year; 

    printf("연도를 입력하세요 : ");
    scanf("%d", &year);

    if (!(year % 4) && (year % 100)) {
        printf("1");
    }
    else if (!(year % 400)) {
        printf("1");
    }
    else {
        printf("0");
    }

    return 0;
}