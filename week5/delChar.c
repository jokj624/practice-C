#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void delChar(char str[], char c) {
    int i = 0;

    // for (i = 0; i < strlen(str); i++) {
    //     if (*(str + i) == c) {
    //         strcpy(str + i, str + i + 1);
    //         i--;
    //     }
    // }
    for (int i = 0; *(str + i); i++)
    {
        if (*(str + i) == c)
        {
            strcpy(str + i, str + i + 1);
            i--;
        }
    }

    // while(i < strlen(str)) {
    //     if (*(str + i) == c) {
    //         strcpy((str + i), (str + i + 1));
    //         i--;
    //     }
    //     i++;
    // }
}

int main() {
    char *str, c;
    str = (char *)malloc(21);

    printf("Enter any string >> ");
    
    fgets(str, 21, stdin);

    printf("Enter delete word >> ");
    scanf("%c", &c);

    delChar(str, c);

    printf("result : %s\n", str);

    free(str);

    return 0;
}