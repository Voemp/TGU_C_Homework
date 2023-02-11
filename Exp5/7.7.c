#include <stdio.h>
#include <stdlib.h>

int Gcd1(int, int); //用穷举法计算两个正整数的最大公约数
int Gcd2(int, int); //用欧几里得算法计算两个正整数的最大公约数
int Gcd3(int, int); //用递归方法计算两个正整数的最大公约数

int main() {
    int a, b, s;
    printf("Input a b:");
    scanf("%d%d", &a, &b);
    printf("请选择计算方法。\n1.穷举法 2.欧几里得方法 3.递归方法\n输入数字（1、2、3），按回车键确认...\n");
    scanf("%d", &s);
    switch (s) {
        case 1:
            printf("GCD = %d\n", Gcd1(a, b));
            break;
        case 2:
            printf("GCD = %d\n", Gcd2(a, b));
            break;
        case 3:
            printf("GCD = %d\n", Gcd3(a, b));
            break;
    }
    system("pause");
    return 0;
}

//Gcd1函数功能：用穷举法计算两个正整数的最大公约数
int Gcd1(int a, int b) {
    int min(int, int); //引用min函数
    int t = min(a, b);
    for (int i = t; i > 0; --i) {
        if (a % i == 0 && b % i == 0)
            return i;
    }
}

//Gcd2函数功能：用欧几里得算法计算两个正整数的最大公约数
int Gcd2(int a, int b) {
    int r;
    do {
        r = a % b; //取余
        a = b;
        b = r;
    } while (r != 0); //辗转相除
    return a;
}

//Gcd3函数功能：用递归方法计算两个正整数的最大公约数
int Gcd3(int a, int b) {
    if (a > b) {
        a = a - b;
        return Gcd3(a, b);
    } else if (a < b) {
        b = b - a;
        return Gcd3(a, b);
    } else
        return a;
}

//min函数功能：计算并输出两个整数中较小的数
int min(int a, int b) {
    return a > b ? b : a;
}