#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int mystrlen(char* str) {
    int cnt = 0, i;

    for(i = 0; *(str + i); i++) {
        cnt++;
    }

    return cnt;
}

int main() {
    char* str;
    int mylen;

    printf("Input any string >> ");

    str = (char*)malloc(21);
    fgets(str, 21, stdin);

    mylen = mystrlen(str);

    printf("strlen() : %d, mystrlen() : %d\n", strlen(str), mylen);

    free(str);
    return 0;
}