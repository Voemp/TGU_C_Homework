// Created by VoidEmpty on 2022/11/20.
#include "Operator.h"
#include "MakeNumber.h"

/*	函数功能：  	生成随机的运算符
 	函数参数：  	无
   	函数返回值：	字符形式的运算符
 */

char Operator() {
    switch (MakeNumber(4)) {
        case 1:
            return '+';
        case 2:
            return '-';
        case 3:
            return '*';
        case 4:
            return '/';
    }
}