// Created by VoidEmpty on 2022/11/27.
#include<stdio.h>

int main(void) {
    int a[10], n, max, min, maxPos, minPos;
    for (n = 0; n < 10; n++) {
        scanf("%d", &a[n]);
    }
    max = min = a[0];
    maxPos = minPos = 0;
    for (n = 0; n < 10; n++) {
        if (max < a[n]) {
            max = a[n];
            maxPos = n;
        } else if (min > a[n]) {
            min = a[n];
            minPos = n;
        }
    }
    printf("max = %d, pos = %d\n", max, maxPos);
    printf("min = %d, pos = %d\n", min, minPos);
    return 0;
}