#include <stdio.h>
#include <string.h>

int main() {
    char s1[21], s2[21];
    int isSame = 0;

    scanf("%s %s", s1, s2);

    printf("s1 len: %d\n", strlen(s1));

    isSame = !strcmp(s1, s2) ? 1 : 0;

    printf("s1, s2 is same : %d\n", isSame);

    return 0;
}