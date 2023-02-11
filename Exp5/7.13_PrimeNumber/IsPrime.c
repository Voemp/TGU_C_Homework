// Created by VoidEmpty on 2022/11/14.
#include "IsPrime.h"

#include <math.h>
#include <stdio.h>
//函数功能：判断是否为素数

int IsPrime(int m) {
    if(m<=0||m==1){
        return 0;
    }
    else{
        int i;
        for (i = 2; i < sqrt(m); ++i) {
            if(m%i!=0)
                continue;
            else
                break;
        }
        if(i>sqrt(m))
            return 1;
        else
            return 0;
    }
}
