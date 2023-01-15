#include <stdio.h>

int main() {
    // 관계 연산자 및 동치 연산자 사용 시 주의점
    // int i = 4, j = 6, k = 3;
    // printf("%d\n", i < j < k);

    // switch - case
    // int grade = -2;
    // switch (grade) {
    //     case 4:
    //         printf("A");
    //     case 3:
    //         printf("B");
    //     case 2:
    //         printf("C");
    //     case 1:
    //         printf("D");
    //     case 0:
    //         printf("E");
    //     default:
    //         printf("F");
    // }

    // switch (grade)
    // {
    // case 4:
    //     printf("Excellent");
    // case 3:
    // case 2:
    // case 1:
    //     printf("Passing");
    //     break;
    // case 0:
    //     printf("Fail");
    //     break;
    // default:
    //     printf("Illegal grade");
    // }

    // int s = 0, i = -2;
    // while (i > 0)
    // {
    //     s += i;
    //     i--;
    // }

    // int s = 0, i = 10;
    // do {
    //     s += i;
    //     i--;
    // } while (i > 0);

    // printf("s : %d, i : %d\n", s, i);

    // ascii
    // char ch;
    // scanf("%c", &ch);
    // printf("%c", ch);

    // scanf getchar
    char command;
    int i;

    printf("Enter an integer: ");
    scanf("%d", &i);
    getchar(); 
    printf("Enter an commnad: ");
    command = getchar();


    printf("%d %c", i, command);
    return 0;
}