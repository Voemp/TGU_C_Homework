// Created by VoidEmpty on 2022/11/15.
#include "IsPerfect.h"
#include "IsPrime.h"
#include <stdio.h>

int IsPerfect(int m){
    int sum=1;
    if(IsPrime(m)==1)
        return 0;
    for (int i = 2; i < m; ++i) {
        if(m%i==0)
            sum+=i;
    }
    if(sum==m)
        return 1;
    else
        return 0;
}