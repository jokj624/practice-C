#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char p[21], a[21];
    int i, idx = 0; 

    scanf("%s", p);

    for (i = 0; i < strlen(p); i++) {
        if (p[i] >= 'a' && p[i] <= 'z') {
            a[idx++] = p[i];
        }
    }

    printf("%s\n", a);

    return 0;
}