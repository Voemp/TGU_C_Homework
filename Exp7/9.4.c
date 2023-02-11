// Created by VoidEmpty on 2022/12/9.
#include <stdio.h>

// 函数声明
void ReadData(int a[], int n);

void PrintData(int a[], int n);

void MaxMinExchang(int a[], int n);

void Swap(int *x, int *y);

int main() {
    int a[10], n;
    printf("Input n(n<=10):");
    scanf("%d", &n);
    printf("Input %d numbers:", n);
    ReadData(a, n);

    // 调用MaxMinExchang函数，找到最大值、最小值，并交换其位置
    MaxMinExchang(a, n);
    printf("Exchange results:");
    PrintData(a, n);
    return 0;
}

/* 函数功能：输入数组a的n个元素值 */
void ReadData(int a[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
}

/* 函数功能：输出数组a的n个元素值 */
void PrintData(int a[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%5d", a[i]);
    }
    printf("\n");
}

/* 函数功能：将数组a中的最大数与最小数位置互换 */
void MaxMinExchang(int a[], int n) {
    int maxValue = a[0], minValue = a[0], maxPos = 0, minPos = 0;
    int i;
    for (i = 1; i < n; i++) {
        if (a[i] > maxValue) // 计算最大值maxValue及其下标maxPos
        {
            maxValue = a[i];
            maxPos = i;
        }
        if (a[i] < minValue) // 计算最小值minValue及其下标minPos
        {
            minValue = a[i];
            minPos = i;
        }
    }
    // maxPos和minPos交换
    Swap(&a[maxPos], &a[minPos]);
}

void Swap(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}