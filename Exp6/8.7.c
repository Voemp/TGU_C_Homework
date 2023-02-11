// Created by VoidEmpty on 2022/12/1.
#include <stdio.h>
#include <stdlib.h>

#define N 40

int main() {
    int grade[N];
    for (int i = 0; i < N; ++i) {
        printf("Input grade:");
        scanf("%d", &grade[i]);
    }
    printf("Grade    Count    Histogram\n");
    for (int i = 1; i <= 10; ++i) {
        int k = 0;
        for (int j = 0; j < N; ++j) {
            if (i == grade[j])
                k += 1;
        }
        printf("%3d      %3d      ", i, k);
        for (int j = 0; j < k; ++j) {
            printf("*");
        }
        printf("\n");
    }
    system("pause");
    return 0;
}