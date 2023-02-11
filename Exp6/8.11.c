// Created by VoidEmpty on 2022/11/20.
#include <stdio.h>
#include <stdlib.h>

#define N 7

int main() {
    int a[N][N] = {0};
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (j == 0 || i == j) {
                a[i][j] = 1;
            }
            if (i >= 2 && j >= 1) {
                a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
            }
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%-3d ", a[i][j]);
        }
        printf("\n");
    }
    system("pause");
    return 0;
}