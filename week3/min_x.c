#include <stdio.h>
void check_min(int a[], int x) {
    for (int i = 0; i < 10; i++) {
        if (a[i] < x) printf("%d ", a[i]);
    }
}
int main() {
    int n, x;
    int arr[10];

    scanf("%d", &x);

    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    check_min(arr, x);
    return 0;
}