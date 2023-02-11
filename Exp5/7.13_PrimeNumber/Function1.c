// Created by VoidEmpty on 2022/11/15.
#include <stdio.h>
#include "IsPrime.h"

void Function1(){
    int m;
    printf("Input:");
    scanf("%d",&m);
    if(IsPrime(m)==1)
        printf("%d is a prime number\n", m);
    else
        printf("%d is not a prime number\n",m);
}