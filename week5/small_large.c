#include <stdio.h>
#include <string.h>

void replace(char* str) {
    int i;

    for (i = 0; i < strlen(str); i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = (str[i] - 'a' + 'A');
        }

        else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = (str[i] - 'A' + 'a');
        }
    }
}

int main() {
    char str[21];

    printf("Enter any string >> ");
    scanf("%s", str);

    replace(str);

    printf("result >> %s\n", str);

    return 0;
}