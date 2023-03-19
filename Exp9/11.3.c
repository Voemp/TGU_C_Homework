// Created by VoidEmpty on 2023/3/8.
#include <stdio.h>
#include <stdlib.h>

int main() {
    char *month_name[13] = {"Null", "January", "February", "March", "April", "May", "June", "July",
                            "August", "September", "October", "November", "December"};
    int month;
    printf("Enter the number of a month:");
    scanf("%d", &month);
    if (month <= 1 || month >= 12) {
        printf("Illegal month\n");
    } else {
        printf("%s\n", month_name[month]);
    }
    system("pause");
    return 0;
}