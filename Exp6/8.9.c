// Created by VoidEmpty on 2022/12/2.
#include <stdio.h>
#include <stdlib.h>

#define N 3

int Diagonal(int a[N][N]);

int main() {
    int a[N][N] = {0}, add;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            printf("Input:");
            scanf("%d", &a[i][j]);
        }
    }
    add = Diagonal(a);
    printf("Add = %d\n", add);
    system("pause");
    return 0;
}

int Diagonal(int a[N][N]) {
    int add = 0;
    for (int i = 0; i < N; ++i) {
        add += a[i][i];
        add += a[i][N - 1 - i];
    }
    if (N % 2 != 0)
        add -= a[N / 2][N / 2];
    return add;
}