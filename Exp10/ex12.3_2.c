#include <stdio.h >
#include <stdlib.h>

typedef struct date {
    int year;
    int month;
    int day;
} DATE;
typedef struct student {
    long studentID;    //学号
    char studentName[10];   //姓名
    char studentSex;    //性别
    DATE birthday;  //出生日期
    int score[4];   //4门课程的成绩
} STUDENT;

int main() {
    int i, j, sum[30];
    char M[]="男",F[]="女";
    STUDENT stu[30] = {
            {100310121, "王刚",   'M', {1991, 5, 19}, {72, 83, 90, 82}},
            {100310122, "李小明", 'M', {1992, 8, 20}, {88, 92, 78, 78}},
            {100310123, "王丽红", 'F', {1991, 9, 19}, {98, 72, 89, 66}},
            {100310124, "陈莉莉", 'F', {1992, 3, 22}, {87, 95, 78, 90}}
    };
    for (i = 0; i < 4; i++) {
        sum[i] = 0;
        for (j = 0; j < 4; j++) {
            sum[i] += stu[i].score[j];
        }
        printf("%10ld%8s%3s%6d/ %02d/ %02d%4d%4d%4d%4d%6.1f\n",
               stu[i].studentID,
               stu[i].studentName,
               stu[i].studentSex=='M'?M:F,
               stu[i].birthday.year,
               stu[i].birthday.month,
               stu[i].birthday.day,
               stu[i].score[0],
               stu[i].score[1],
               stu[i].score[2],
               stu[i].score[3],
               sum[i] / 4.0);
    }
    system("pause");
    return 0;
}
