#include <stdio.h>

int main() {
    int year, flag;
    printf("Enter year:");
    scanf("%d", &year);
    flag = (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) ? 1 : 0;
    (flag == 1) ? printf("%d is a leap year!\n", year) : printf("%d is not a leap year!\n", year);
    return 0;
}
