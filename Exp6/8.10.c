// Created by VoidEmpty on 2022/12/2.
#include <stdio.h>
#include <stdlib.h>

#define M 4
#define N 3

int main() {
    int A[M][N], B[M][N];
    printf("ÇëÊäÈë2¸ö%d¡Á%dµÄ¾ØÕó...\n", M, N);
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            printf("Input A[%d][%d]:", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            printf("Input B[%d][%d]:", i, j);
            scanf("%d", &B[i][j]);
        }
    }
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            printf("%4d", A[i][j] + B[i][j]);
        }
        printf("\n");
    }
    system("pause");
    return 0;
}
