// Created by VoidEmpty on 2023/3/9.
#include <stdio.h>
#include <stdlib.h>

#define N 10

void Swap(int *x, int *y);

void Transpose(int (*a)[N], int n);

int main() {
    int a[N][N], i, j, n;
    printf("Enter the order of the matrix:");
    scanf("%d", &n);
    printf("Enter the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    Transpose(a, n);
    printf("The transpose of the matrix is:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    system("pause");
    return 0;
}

void Swap(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void Transpose(int (*a)[N], int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            Swap(&a[i][j], &a[j][i]);
        }
    }
}