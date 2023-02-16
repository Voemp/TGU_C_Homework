// Created by VoidEmpty on 2023/2/14.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void MyStrdel1(char str[], char c);

void MyStrdel2(char *str, char c);

int main() {
    printf("此程序的功能是在字符串中删除与某字符相同的字符...\n");
    char str[100], ch, flag;
    printf("Please enter a line of characters:");
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = '\0';
    printf("Please enter a character:");
    ch = getchar();
    printf("Enter \"1\",字符数组作函数参数\nEnter \"2\",字符指针作函数参数\n");
    getchar();
    flag = getchar();
    if (flag == '1')
        MyStrdel1(str, ch);
    else if (flag == '2')
        MyStrdel2(str, ch);
    puts(str);
    system("pause");
    return 0;
}

//函数功能：在字符串中删除与某字符相同的字符
//字符数组作函数参数
void MyStrdel1(char str[], char c) {
    for (int i = 0; str[i] != '\0'; ++i) {
        if (str[i] == c) {
            for (int j = i; str[j] != '\0'; ++j) {
                str[j] = str[j + 1];
            }
        }
    }
}

//函数功能：在字符串中删除与某字符相同的字符
//字符指针作函数参数
void MyStrdel2(char *str, char c) {
    char *p = str;
    for (; *p != '\0'; ++p) {
        if (*p != c) {
            *str = *p;
            str++;
        }
    }
    *str = '\0';
}