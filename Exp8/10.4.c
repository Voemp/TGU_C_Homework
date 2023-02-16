// Created by VoidEmpty on 2023/2/14.
#include <stdio.h>
#include <stdlib.h>

int main() {
    char str[100];
    int word_num = 0;
    printf("Please enter a line of characters:");
    fgets(str, 100, stdin);
    for (char *p = str; *p != '\0'; p++) {
        if (*p == ' ' || *p == '\t' || *p == '\n')
            word_num += 1;
    }
    printf("Total number of words:%d\n", word_num);
    system("pause");
    return 0;
}