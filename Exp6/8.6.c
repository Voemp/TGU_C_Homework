// Created by VoidEmpty on 2022/11/30.
#include <stdio.h>
#include <stdlib.h>

void Swap(int *a, int *b);

int FindMax(int a[], int n);

int FindMin(int a[], int n);

int main() {
    int a[10], max, min;
    for (int i = 0; i < 10; ++i) {
        printf("Input:");
        scanf("%d", &a[i]);
    }
    max = FindMax(a, 10);
    min = FindMin(a, 10);
    Swap(&a[max], &a[min]);
    for (int i = 0; i < 10; ++i) {
        printf("%5d", a[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}

void Swap(int *a, int *b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

int FindMax(int a[], int n) {
    int k = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i] > a[k])
            k = i;
    }
    return k;
}

int FindMin(int a[], int n) {
    int k = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i] < a[k])
            k = i;
    }
    return k;
}