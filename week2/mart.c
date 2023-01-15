#include <stdio.h>

int main() {
    int money, n, i = 1, sum = 0;
    
    printf("돈을 입력하세요: ");
    scanf("%d", &money);

    printf("물건 개수를 입력하세요: ");
    scanf("%d", &n);

    while (i <= n) {
        int goods_money, goods_n;
        printf("상품 가격과 개수를 입력하세요 : ");
        scanf("%d %d", &goods_money, &goods_n);

        sum += (goods_money * goods_n);

        i++;
    }

    if (money == sum) printf("yes\n");
    else printf("no\n");

    return 0;
}