// Created by VoidEmpty on 2022/12/6.
#include <stdio.h>
#include <stdlib.h>

#define N 50

void swap(int *a, int *b);

int main() {
    int n, a[N], b[N];

    // 读入数组的长度
    printf("请定义数组大小：");
    scanf("%d", &n);

    // 读入第一个数组
    printf("请输入第一个数组的元素值：\n");
    for (int i = 0; i < n; ++i) {
        printf("Input a[%d]:", i);
        scanf("%d", &a[i]);
    }

    // 读入第二个数组
    printf("请输入第二个数组的元素值：\n");
    for (int i = 0; i < n; ++i) {
        printf("Input b[%d]:", i);
        scanf("%d", &b[i]);
    }

    // 交换两个数组
    printf("下面将会输出互换后的两个数组...\n");
    for (int i = 0; i < n; ++i) {
        swap(&a[i], &b[i]);
    }

    // 输出两个数组
    printf("a[]:");
    for (int i = 0; i < n; ++i) {
        printf("%3d", a[i]);
    }
    printf("\n");
    printf("b[]:");
    for (int i = 0; i < n; ++i) {
        printf("%3d", b[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}

// 函数功能：交换两个变量的值
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
