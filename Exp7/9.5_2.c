// Created by VoidEmpty on 2022/12/9.
//输入某一年的第几天，计算并输出它是这一年的第几月第几日
#include <stdio.h>

void MonthDay(int year, int yearDay, int *pMonth, int *pDay);

int main() {
    int year, month, day, yearDay;
    printf("Please enter year, yearDay:");
    scanf("%d,%d", &year, &yearDay);
    MonthDay(year, yearDay, &month, &day); //调用MonthDay函数，计算第几月month、第几日day
    printf("month = %d, day = %d\n", month, day);
    return 0;
}

/* 函数功能：对给定的某一年的第几天，计算它是这一年的第几月第几日 */
void MonthDay(int year, int yearDay, int *pMonth, int *pDay) {
    int i, leap;
    int dayTab[2][13] = {{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
                         {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}};

    leap = ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);

    for (i = 1; yearDay > dayTab[leap][i]; i++) {
        yearDay = yearDay - dayTab[leap][i];
    }

    *pMonth = i;        /* 将计算出的月份值赋值给pMonth所指向的变量 */
    *pDay = yearDay;        /* 将计算出的日号赋值给pDay所指向的变量 */
}