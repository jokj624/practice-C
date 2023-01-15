#include <stdio.h>

int main() {
    char ch;

    printf("종료하려면 0, 시작하려면 대문자를 입력하세요: ");
    while((ch = getchar()) != '0') {
        printf("%c\n", ch - 'A' + 'a');
        getchar(); // 엔터를 먹음
    }

    return 0;
}