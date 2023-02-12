#include <stdio.h>
#include <stdlib.h>

int count_space(int len, char* str) {
    int i = 0, cnt = 0;

    for(; i < len; i++) {
        if (*(str + i) == ' ') cnt++; 
    }

    return cnt;
}

int main() {
    int n;
    char *p, c;

    printf("length of string: ");
    scanf("%d", &n);
    scanf("%c", &c);
    
    p = (char*)malloc(n + 1);

    fgets(p, n + 1, stdin);

    printf("count : %d", count_space(n + 1, p));

    free(p);
    return 0;
}