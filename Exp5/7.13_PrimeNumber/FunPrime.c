// Created by VoidEmpty on 2022/11/16.
#include "FunPrime.h"
#include <stdio.h>
//函数功能：将一个数质因数分解，以质因数从小到大顺序排列的乘积形式输出

void FunPrime(int n){
    printf("%d=",n);
    int m=n;
    for (int i = 2; i <= m/2; ++i) {
        while (n%i==0) {
            printf("%d", i);
            if (n / i >= 2)
                printf("*");
            n /= i;
        }
    }
}