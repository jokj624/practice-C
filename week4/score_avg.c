#include <stdio.h>

int avg();

int main() {
    int score[5], i;

    printf("Enter 5 scores : ");
    for (i = 0; i < 5; i++) {
        scanf("%d", &score[i]);
    }

    printf("Average Score: %d\n", avg(score));
}

int avg(int score[]) {
    int i, sum = 0;
    for (i = 0; i < 5; i++) {
        if (score[i] < 40) score[i] = 40;

        sum += score[i];
    }

    return sum / 5;
}   