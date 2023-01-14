#include <stdio.h>

int main() {
    float celsius, fahrenheit; 
    
    printf("화씨온도를 입력하세요 : ");
    scanf("%f", &fahrenheit);
    celsius = (fahrenheit - 32) * 5/9;
    printf("섭씨온도: %.1f\n", celsius);

    return 0;
}