// Created by VoidEmpty on 2022/11/15.
#include "NumPrime.h"
#include "IsPrime.h"
#include <stdio.h>

int NumPrime(int n) {
    int num=0;
    for (int i = 1; i <= n; ++i) {
        if(IsPrime(i)==1)
            num+=i;
    }
    return num;
}