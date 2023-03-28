#include <stdio.h >
#include <stdlib.h>
#include <windows.h>

VOID SetTitle(LPCSTR lpTitle) {
    SetConsoleTitle(lpTitle);
}

void IfNull(void *p);

typedef struct date {
    int year;
    int month;
    int day;
} Date;
typedef struct student {
    long studentID;    //学号
    char studentName[10];   //姓名
    char studentSex;    //性别
    Date birthday;  //出生日期
    int score[4];   //4门课程的成绩
} STUDENT;

int main() {
    SetTitle("学生成绩管理系统Lite版");
    system("color f9");
    int i, j, num;
    printf("请输入学生数量：");
    scanf("%d", &num);
    int *sum = (int *) calloc(num, sizeof(int));
    IfNull(sum);
    STUDENT *stu = (STUDENT *) malloc(num * sizeof(STUDENT));
    IfNull(stu);
    for (i = 0; i < num; i++) {
        printf("请输入第%d个学生的学号、姓名、性别、出生日期、4门课程的成绩：\n", i + 1);
        scanf("%ld%s %c%d/%d/%d%d%d%d%d",
              &stu[i].studentID,
              stu[i].studentName,
              &stu[i].studentSex,
              &stu[i].birthday.year,
              &stu[i].birthday.month,
              &stu[i].birthday.day,
              &stu[i].score[0],
              &stu[i].score[1],
              &stu[i].score[2],
              &stu[i].score[3]);
    }
    for (i = 0; i < num; i++) {
        sum[i] = 0;
        for (j = 0; j < 4; j++) {
            sum[i] += stu[i].score[j];
        }
        printf("学生信息如下：\n");
        printf("%10ld%8s%3c%6d/ %02d/ %02d%4d%4d%4d%4d%6.1f\n",
               stu[i].studentID,
               stu[i].studentName,
               stu[i].studentSex,
               stu[i].birthday.year,
               stu[i].birthday.month,
               stu[i].birthday.day,
               stu[i].score[0],
               stu[i].score[1],
               stu[i].score[2],
               stu[i].score[3],
               sum[i] / 4.0);
    }
    free(stu);
    free(sum);
    system("pause");
    return 0;
}

void IfNull(void *p) {
    if (p == NULL) {
        printf("内存分配失败！\n");
        exit(1);
    }
}