#include <stdio.h >
#include <stdlib.h>

#define N 30
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
    int sum;    //总分
    float aver; //平均分
} STUDENT;

void InputScore(STUDENT stu[], int n, int m);

void AverScore(STUDENT stu[], int n, int m);

void PrintScore(STUDENT stu[], int n, int m);

int main() {
    float aver[N];
    STUDENT stu[N];
    int n;
    printf("How many students? ");
    scanf("%d", &n);
    InputScore(stu, n, 4);
    AverScore(stu, n, 4);
    PrintScore(stu, n, 4);
    system("pause");
    return 0;
}

//输入n个学生的学号、姓名、性别、出生日期以及m门课程的成绩到结构体数组stu中
void InputScore(STUDENT stu[], int n, int m) {
    int i, j;
    for (i = 0; i < n; i++) {
        printf("Input record %d:\n", i + 1);
        scanf("% ld", &stu[i].studentID);
        scanf("%s", stu[i].studentName);
        scanf(" %c", &stu[i].studentSex);
        scanf("%d", &stu[i].birthday.year);
        scanf("%d", &stu[i].birthday.month);
        scanf("%d", &stu[i].birthday.day);
        for (j = 0; j < m; j++) {
            scanf("%d", &stu[i].score[j]);
        }
    }
}

//计算n个学生的m门课程的平均成绩，存入数组aver中
void AverScore(STUDENT stu[], int n, int m) {
    int i, j;
    for (i = 0; i < n; i++) {
        stu[i].sum = 0;
        for (j = 0; j < m; j++) {
            stu[i].sum += stu[i].score[j];
        }
        stu[i].aver = (float) stu[i].sum / m;
    }
}

//输出n个学生的学号、姓名、性别、出生日期、m门课程的成绩以及平均成绩
void PrintScore(STUDENT stu[], int n, int m) {
    int i, j;
    printf("Results:\n");
    for (i = 0; i < n; i++) {
        printf("%10ld%8s%3c%6d/%02d/%02d", stu[i].studentID, stu[i].studentName, stu[i].studentSex,
               stu[i].birthday.year, stu[i].birthday.month, stu[i].birthday.day);
        for (j = 0; j < m; j++) {
            printf("%4d", stu[i].score[j]);
        }
        printf("%6.1f\n", stu[i].aver);
    }
}