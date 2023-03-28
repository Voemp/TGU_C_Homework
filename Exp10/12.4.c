// Created by VoidEmpty on 2023/3/14.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

#define NAME_LEN 20
#define MAX_LEADER 3

VOID SetTitle(LPCSTR lpTitle) {
    SetConsoleTitle(lpTitle);
}

int strcmpl(char *s1, char *s2);

void IfNull(void *p);

typedef struct canidate {
    char name[NAME_LEN];
    int count;
} CANIDATE;

int main() {
    SetTitle("投票系统");
    system("color f9");
    CANIDATE *leader = NULL;
    int n = MAX_LEADER, discard = 0;
    char name[NAME_LEN];
    IfNull(leader = (CANIDATE *) malloc(n * sizeof(CANIDATE)));
    strcpy(leader[0].name, "zhang");
    leader[0].count = 0;
    strcpy(leader[1].name, "li");
    leader[1].count = 0;
    strcpy(leader[2].name, "wang");
    leader[2].count = 0;
    printf("有三位候选人：zhang, li, wang\n");
    while (1) {
        printf("请输入你想投票的候选人的名字：");
        scanf("%s", name);
        if (strcmpl(name, "0") == 0) {
            break;
        }
        int i;
        //检查是否为候选人
        for (i = 0; i < n; i++) {
            if (strcmpl(name, leader[i].name) == 0) {
                leader[i].count++;
                break;
            }
        }
        //如果不是候选人
        if (i == n) {
            discard++;  //废票数加一
        }
        printf("提示：输入0结束投票\n");
    }
    //输出投票结果
    printf("**********************\n");
    printf("投票结果如下：\n");
    for (int i = 0; i < n; i++) {
        printf("%s: %d\n", leader[i].name, leader[i].count);
    }
    printf("废票数：%d\n", discard);
    printf("**********************\n");
    system("pause");
    return 0;
}

//不区分大小写的字符串比较
int strcmpl(char *s1, char *s2) {
    int i = 0;
    while (s1[i] != '\0' && s2[i] != '\0') {
        if (s1[i] == s2[i] || s1[i] == s2[i] + 32 || s1[i] == s2[i] - 32) {
            i++;
        } else {
            return s1[i] - s2[i];
        }
    }
    if (s1[i] == '\0' && s2[i] == '\0') {
        return 0;
    } else if (s1[i] == '\0') {
        return -1;
    } else {
        return 1;
    }
}

//检查内存分配是否成功
void IfNull(void *p) {
    if (p == NULL) {
        printf("Memory allocation failed!");
        exit(1);
    }
}