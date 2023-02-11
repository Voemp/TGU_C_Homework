// Created by VoidEmpty on 2022/11/17.
#include "IsRight.h"
#include <stdio.h>

/*	函数功能：  	判断计算是否正确
 	函数参数：  	a,b,operator,answer
   	函数返回值：	返回1或0
 */

int IsRight(int a, char operator, int b, float answer) {
    switch (operator) {
        case '+':
            return (a + b == answer) ? 1 : 0;
        case '-':
            return (a - b == answer) ? 1 : 0;
        case '*':
            return (a * b == answer) ? 1 : 0;
        case '/':
            return ((float)a / b == answer) ? 1 : 0;
    }
}