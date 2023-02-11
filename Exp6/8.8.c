// Created by VoidEmpty on 2022/12/1.
#include <stdio.h>
#include <stdlib.h>

#define N 40

float Mean(int a[], int n);

float Median(int a[], int n);

int Mode(int a[], int n);

void quick_sort(int a[], int low, int high);

int main() {
    int feedback[N];
    for (int i = 0; i < N; ++i) {
        printf("Input grade:");
        scanf("%d", &feedback[i]);
    }
    printf("Mean = %.1f\nMedian = %.1f\nMode = %d\n",
           Mean(feedback, N), Median(feedback, N), Mode(feedback, N));
    system("pause");
    return 0;
}

//函数功能：计算平均数
float Mean(int a[], int n) {
    int k = 0;
    for (int i = 0; i < n; ++i) {
        k += a[i];
    }
    return (float) k / n;
}

//函数功能：计算中位数
float Median(int a[], int n) {
    quick_sort(a, 0, n - 1);
    if (n % 2 != 0)
        return a[n / 2];
    else
        return (float) (a[n / 2] + a[n / 2 - 1]) / 2;
}

//函数功能：计算众数
int Mode(int a[], int n) {
    int b[N + 1] = {0};
    for (int i = 0; i < n; ++i) {
        b[a[i]]++;
    }
    int max = 0, j;
    for (int i = 0; i < n + 1; ++i) {
        if (max < b[i]) {
            max = b[i];
            j = i;
        }
    }
    return j;
}

//函数功能：升序（快速排序法）
void quick_sort(int a[], int low, int high) {
    int i = low;     //第一位
    int j = high;    //最后一位
    int key = a[i];  //将第一个数作为基准值

    while (i < j) {
        while (i < j && a[j] >= key) {
            j--;
        }
        a[i] = a[j];

        while (i < j && a[i] <= key) {
            i++;
        }
        a[j] = a[i];
    }
    a[i] = key;
    if (i - 1 > low) {
        quick_sort(a, low, i - 1);
    }

    if (i + 1 < high) {
        quick_sort(a, i + 1, high);
    }
}
