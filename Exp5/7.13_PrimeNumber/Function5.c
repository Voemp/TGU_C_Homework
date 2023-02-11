// Created by VoidEmpty on 2022/11/15.
#include <stdio.h>
#include "IsPrime.h"
#include "FunPrime.h"

void Function5(){
    int m;
    printf("Input:");
    scanf("%d",&m);
    if(IsPrime(m))
        printf("It is a prime number");
    else
        FunPrime(m);
    printf("\n");
}