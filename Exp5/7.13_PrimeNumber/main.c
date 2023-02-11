#include <stdio.h>
#include "Function.h"

int main() {
    int s;
    char reply;
    do{
        printf("请选择需要的功能：\n");
        printf("1.判断m是否为素数\n2.输出1~n之间所有素数的和\n3.输出非素数m的所有因子\n4.判断m是否为完全数\n5.以从小到大的乘积形式输出非素数m的质因数\n");
        printf("输入数字（1、2、3、4、5），按回车键确认...\n");
        scanf("%d",&s);
        switch (s) {
            case 1:Function1();break;
            case 2:Function2();break;
            case 3:Function3();break;
            case 4:Function4();break;
            case 5:Function5();break;
        }
        printf("是否返回到选择菜单(Y/y返回 N/n退出程序)?\n");
        scanf("%*c%c",&reply);
    } while (reply=='Y'||reply=='y'); //判断是否重新运行程序
    return 0;
}
