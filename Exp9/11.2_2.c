// Created by VoidEmpty on 2023/3/8.
#include <stdio.h>
#include <stdlib.h>

void InputArray(int *pa, int n);

void OutputArray(int *pa, int n);

int main() {
    int a[5];
    printf("Input five numbers:");
    InputArray(a, 5);
    OutputArray(a, 5);
    return 0;
}

void InputArray(int *pa, int n) {
    for (int i = 0; i < n; i++, pa++) {
        scanf("%d", pa);
    }
}

void OutputArray(int *pa, int n) {
    for (int i = 0; i < n; i++, pa++) {
        printf("%4d", *pa);
    }
    printf("\n");
}