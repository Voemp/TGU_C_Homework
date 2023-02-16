// Created by VoidEmpty on 2023/2/14.
#include <stdio.h>
#include <stdlib.h>

int MyStrcmp(char *p1, char *p2) {
    for (; *p1 == *p2; p1++, p2++) {
        if (*p1 == '\0')
            return 0;
    }
    return (*p1 - *p2);
}