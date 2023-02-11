// Created by VoidEmpty on 2022/11/27.
#include <stdio.h>

#define N 40

int ReadScore(int score[], long num[]);

int FindMax(int score[], int n);

int main() {
    int score[N], n, k;
    long num[N];
    n = ReadScore(score, num); //调用函数ReadScore()输入成绩，返回学生人数
    printf("Total students are %d\n", n);
    k = FindMax(score, n);
    printf("The highest score of the grade:%d\nHis ID is:%04ld\n", score[k], num[k]);
    return 0;
}

int ReadScore(int score[], long num[]) {
    int i = -1;
    do {
        i++;
        printf("Input student's ID and score:");
        scanf("%ld%d", &num[i], &score[i]);
    } while (num[i] > 0 && score[i] >= 0);
    return i;
}

//函数功能：查找最高分
int FindMax(int score[], int n) {
    int k = 0;
    for (int i = 0; i < n; ++i) {
        if (score[i] > score[k])
            k = i;
    }
    return k;
}