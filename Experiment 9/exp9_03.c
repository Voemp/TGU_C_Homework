#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int i=0;
    char *month[12]={"January","February","March","April","May","June",
          "July","August","September","October","November","December"};
    system("color f3");
    printf("请输入月份值: ");
    scanf("%d",&i);
    if (i>=1&&i<=12)
        printf(" %d月: %s\n",i,month[i-1]);
    else
        printf(" Illegal month\n");
    system("pause");
    return 0;
}