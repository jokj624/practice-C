#include <stdio.h>
int main() {
    int month, date, year;
    
    printf("Enter Data (mm/dd/yy): ");
    scanf("%d/%d/%d", &month, &date, &year);

    printf("Dated this %d", date);
    switch (date) {
        case 1:
        case 11:
        case 21:
        case 31:
            printf("st");   break;
        case 2: 
        case 12:
        case 22:
            printf("nd");   break;
        case 3:
        case 13:
        case 23:
            printf("rd");   break;
        default: 
            printf("th");
    }

    printf(" day of ");
    
    switch (month) {
        case 1:
            printf("January");
            break;
        case 2:
            printf("February");
            break;
        case 3:
            printf("March");
            break;
        case 4:
            printf("April");
            break;
        case 5:
            printf("May");
            break;
        case 6:
            printf("June");
            break;
        case 7:
            printf("July");
            break;
        case 8:
            printf("August");
            break;
        case 9:
            printf("September");
            break;
        case 10:
            printf("October");
            break;
        case 11:
            printf("November");
            break;
        case 12:
            printf("December");
            break;
    }

    printf(", %d\n", year + 2000);
    return 0;
}