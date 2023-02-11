// Created by VoidEmpty on 2022/11/15.
#include <stdio.h>
#include "IsPrime.h"

void Function3(){
    int m;
    printf("Input:");
    scanf("%d",&m);
    if(IsPrime(m)==1)
        printf("No divisor! It is a prime number");
    for (int i = 2; i < m; ++i){
        if(m%i==0)
            printf("%d ",i);
    }
    printf("\n");
}