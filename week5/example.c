#include <stdio.h>
#include <string.h>

int main() {
    // strcpy
    // int len;
    // char st1[10], st2[10];
    
    // strcpy(st1, "abcdefg");
    // strcpy(st2, st1);

    // printf("%s %s\n", st1, st2);
    
    // len = strlen(st1); // len becomes 7
    // printf("len - %d\n", len);

    // len = strlen(st2); // len becomes 7
    // printf("len - %d\n", len);

    // st1[4] = '\0';
    
    // len = strlen(st1); // len becomes 4
    // printf("len - %d\n", len);

    // len = strlen(st2); // len becomes 7
    // printf("len - %d\n", len);

    // strcat
    // char st1[10], st2[10];

    // strcpy(st1, "abc"); // st1 becomes "abc"
    // printf("st1 - %s\n", st1);

    // strcat(st1, "def"); // st1 becomes "abcdef"
    // printf("st1 - %s\n", st1);

    // strcpy(st1, "abc"); // st1 becomes "abc"
    // printf("st1 - %s\n", st1);

    // strcpy(st2, "def"); // st2 becomes "def"
    // printf("st2 - %s\n", st2);

    // strcat(st1, st2); // st1 becomes "abcdef"
    // printf("st1 - %s\n", st1);

    // strcpy(st1, "abc");
    // strcpy(st2, "def");

    // strcat(st1, strcat(st2, "ghi")); // st2 becomees "defghi", st1 becomes "abcdefghi"
    // printf("st1 - %s, st2 - %s\n", st1, st2);

    // strcmp
    int a;
    a = strcmp("ABC", "ABC"); // a is now 0
    printf("%d\n", a);

    a = strcmp("XY", "XYZ"); // a is now -1
    printf("%d\n", a);

    a = strcmp("abd", "abcd"); // a is now 1
    printf("%d\n", a);

    return 0;
}