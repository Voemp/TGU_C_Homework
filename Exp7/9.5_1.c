// Created by VoidEmpty on 2022/12/9.
#include <stdio.h>

// 函数声明
int DayofYear(int year, int month, int day);

int main() {
    int year, month, day, yearDay;
    printf("Please enter year, month, day:");
    scanf("%d,%d,%d", &year, &month, &day);

    // 调用DayofYear函数，计算出天数，返回值给yearDay
    yearDay = DayofYear(year, month, day);
    printf("yearDay = %d\n", yearDay);
    return 0;
}

/* 函数功能：对给定的某年某月某日，计算并返回它是这一年的第几天（考虑闰年） */
int DayofYear(int year, int month, int day) {
    int i, leap;

    int dayTab[2][13] = {{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
                         {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}};

    /* 若year为闰年，即leap值为1，则用第1行元素dayTab[1][i]计算；
    否则leap值为0，用第0行dayTab[0][i]计算 */

    // 能被4整除、不能被100整除，或者能被400整除，year为闰年
    leap = (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;

    for (i = 1; i < month; i++) {
        day = day + dayTab[leap][i];
    }
    return day;         /* 返回计算出的day的值 */
}
