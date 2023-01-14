#include <stdio.h>

int main() {
    int money;

    printf("--------------------\n");
    printf("|      자판기     |\n");
    printf("| 밀크 커피 200원 |\n");
    printf("|                 |\n");
    printf("--------------------\n");

    printf("동전을 넣어주세요 : ");
    scanf("%d", &money);

    printf("잔돈을 받아가세요 : %d", money - 200);

    return 0;
}