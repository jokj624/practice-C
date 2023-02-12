#include <stdio.h>
#include <string.h>

int main() {
    int i;
    char str[21];

    printf("Enter any string >> ");
    fgets(str, 21, stdin);

    for (i = strlen(str) - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    return 0;
}