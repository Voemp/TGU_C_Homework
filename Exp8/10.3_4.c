// Created by VoidEmpty on 2023/2/14.
#include <stdio.h>
#include <stdlib.h>

int MyStrcmp(char s[], char t[]) {
    int i;
    for (i = 0; s[i] == t[i]; i++) {
        if (s[i] == '\0')
            return 0;
    }
    return (s[i] - t[i]);
}