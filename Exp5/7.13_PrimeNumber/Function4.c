// Created by VoidEmpty on 2022/11/15.
#include <stdio.h>
#include "IsPerfect.h"

void Function4(){
    int m;
    printf("Input:");
    scanf("%d",&m);
    if(IsPerfect(m)==1)
        printf("%d is a perfect number\n", m);
    else
        printf("%d is not a perfect number\n",m);
}