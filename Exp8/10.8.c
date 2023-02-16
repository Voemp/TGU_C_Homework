// Created by VoidEmpty on 2023/2/16.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 80

void MyStrcat(char *dstStr, const char *srcStr);

int main() {
    char first[2 * N];
    char second[N];
    printf("Input the first string:");
    gets(first);
    printf("Input the second string:");
    gets(second);
    MyStrcat(first, second);
    printf("The result is: %s\n", first);
    return 0;
}

void MyStrcat(char *dstStr, const char *srcStr) {
    char *pStr = dstStr;
    while (*dstStr != '\0') {
        dstStr++;
    }
    for (; *srcStr != '\0'; dstStr++, srcStr++) {
        *dstStr = *srcStr;
    }
    *dstStr = '\0';
}