// Created by VoidEmpty on 2023/2/14.
#include <stdio.h>
#include <stdlib.h>

unsigned int MyStrlen(char *p) {
    unsigned int len;
    len = 0;
    for (; *p != '\0'; p++) {
        len += 1;
    }
    return len;
}
