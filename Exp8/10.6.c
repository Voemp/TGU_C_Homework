// Created by VoidEmpty on 2023/2/15.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void insert_space1(char str[]);

void insert_space2(char *str);

int main() {
    printf("此程序的功能是在字符串每个字符间插入一个空格...\n");
    char str[100], flag;
    printf("Please enter a line of characters:");
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = '\0'; // 将换行符替换为字符串结尾符号
    printf("Enter \"1\",字符数组作函数参数\nEnter \"2\",字符指针作函数参数\n");
    flag = getchar();
    if (flag == '1')
        insert_space1(str);
    else if (flag == '2') {
        insert_space2(str);
    }
    puts(str);
    system("pause");
    return 0;
}

//函数功能：在字符串每个字符间插入一个空格
//字符数组作函数参数
void insert_space1(char str[]) {
    int len = strlen(str);
    char new_str[len * 2 + 1];
    int j = 0;
    for (int i = 0; i < len; ++i) {
        new_str[j++] = str[i];
        new_str[j++] = ' ';
    }
    new_str[--j] = '\0';
    strcpy(str, new_str);
}

//函数功能：在字符串每个字符间插入一个空格
//字符指针作函数参数
void insert_space2(char *str) {
    char s[strlen(str) + 1];
    char *t = s;
    strcpy(t, str);
    for (; *t != '\0'; ++t) {
        *str++ = *t;
        *str++ = ' ';
    }
    *--str = '\0';
}
