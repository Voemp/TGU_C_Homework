// Created by VoidEmpty on 2023/2/16.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char str[20], min[20];
    printf("Input five countries' names:\n");
    gets(min); //作为最小的字符串暂存
    //读取其余4个字符串
    for (int i = 0; i < 4; ++i) {
        gets(str);
        if (strcmp(str, min) < 0) //比较两个字符串的大小
            strcpy(min, str);
    }
    printf("The mininum is:%s\n", min);
    system("pause");
    return 0;
}