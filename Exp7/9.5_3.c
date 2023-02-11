// Created by VoidEmpty on 2022/12/9.
#include <stdio.h>
#include <stdlib.h>

int DayofYear(int year, int month, int day);

void MonthDay(int year, int yearDay, int *pMonth, int *pDay);

void Menu(void);

int dayTab[2][13] = {{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
                     {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}};

int main() {
    int year, month, day, yearDay;
    char c;
    Menu(); /* 调用Menu函数显示一个固定式菜单 */
    c = getchar(); /* 输入选择 */
    switch (c) /* 判断选择的是何种操作 */
    {
        case '1':
            printf("Please enter year, month, day:");
            scanf("%d,%d,%d", &year, &month, &day);
            yearDay = DayofYear(year, month, day);
            printf("yearDay = %d\n", yearDay);
            break;
        case '2':
            printf("Please enter year, yearDay:");
            scanf("%d,%d", &year, &yearDay);
            MonthDay(year, yearDay, &month, &day);
            printf("month = %d, day = %d\n", month, day);
            break;
        case '3':
            exit(0); /* 退出程序的运行 */
        default:
            printf("Input error!");
    }
    return 0;
}

/* 函数功能：对给定的某年某月某日，计算并返回它是这一年的第几天 */
int DayofYear(int year, int month, int day) {
    int leap;
    leap = (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
    while (--month > 0)
        day += dayTab[leap][month];
    return day;
}

/* 函数功能：对给定的某一年的第几天，计算它是这一年的第几月第几日 */
void MonthDay(int year, int yearDay, int *pMonth, int *pDay) {
    int leap, i;
    leap = (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
    for (i = 1; yearDay > dayTab[leap][i]; i++)
        yearDay -= dayTab[leap][i];
    *pMonth = i;
    *pDay = yearDay;
}

/* 函数功能：显示菜单 */
void Menu(void) {
    printf("1. year/month/day -> yearDay\n");
    printf("2. yearDay -> year/month/day\n");
    printf("3. Exit\n");
    printf("Please enter your choice:");
}