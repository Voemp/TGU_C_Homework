// Created by VoidEmpty on 2023/2/15.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverse_str1(char str[]);

void reverse_str2(char *str);

int main() {
    printf("此程序的功能是将字符串逆向存放...\n");
    char str[100], flag;
    printf("Please enter a line of characters:");
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = '\0'; // 将换行符替换为字符串结尾符号
    printf("Enter \"1\",字符数组作函数参数\nEnter \"2\",字符指针作函数参数\n");
    flag = getchar();
    if (flag == '1')
        reverse_str1(str);
    else if (flag == '2') {
        reverse_str2(str);
    }
    puts(str);
    system("pause");
    return 0;
}

//函数功能：将字符串逆向存放
//字符数组作函数参数
void reverse_str1(char str[]) {
    int len = strlen(str);
    char new_str[len + 1];
    for (int i = 0, j = len - 1; i < len; ++i, --j) {
        new_str[i] = str[j];
    }
    new_str[len] = '\0';
    strcpy(str, new_str);
}

//函数功能：将字符串逆向存放
//字符指针作函数参数
void reverse_str2(char *str) {
    int len = strlen(str);
    char temp;
    for (int i = 0; i < len / 2; ++i) {
        temp = *(str + i);
        *(str + i) = *(str + len - 1 - i);
        *(str + len - 1 - i) = temp;
    }
}