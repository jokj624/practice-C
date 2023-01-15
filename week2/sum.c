#include <stdio.h>

int main() {
    int i, sum = 0;

    for (i = 1; ; i++) {
        sum += i;
        if (sum > 300) break;
    }

    printf("총합은 %d, 마지막으로 더한 값은 %d 입니다.", sum, i);

    return 0;
}