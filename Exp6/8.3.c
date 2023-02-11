// Created by VoidEmpty on 2022/11/20.
#include <stdio.h>

void Pass(int a[], int n);

int main() {
    int a[40] = {0};
    int n;
    printf("Input n:");
    scanf("%d", &n);
    printf("Input score:");
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
    }
    Pass(a, n);
    return 0;
}

void Pass(int a[], int n) {
    int count = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i] < 60)
            count += 1;
    }
    printf("%d", count);
}