#include <stdio.h>
#include <string.h>

int main() {
    char s1[21], s2[21];
    int cmp = 0;
    
    scanf("%s %s", s1, s2);

    cmp = strcmp(s1, s2);

    if (cmp == 0 || cmp < 0) {
        strcat(s1, s2);
        printf("result >> %s\n", s1);
    }
    else if (cmp > 0) {
        strcat(s2, s1);
        printf("result >> %s\n", s2);
    }

    return 0;
}