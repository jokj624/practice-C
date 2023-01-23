#include <stdio.h>

int main(void) {
    int n, sum = 0;

    while(1) {
        printf("종료하려면 0, 더하려면 자연수를 입력하세요 : ");
        scanf("%d", &n);
        if (!n) break;

        sum += n;
    }

    printf("지금까지 총 합은 %d 입니다.\n", sum);
    return 0;
}