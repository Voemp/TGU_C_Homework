#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int k=-1;
    char day[7][10]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
    char Input[10]={0};
    system("color f3");
    printf("请输入数据: ");
    gets(Input);
    for (int i=0;i<7;++i)
    {
        if (strcmp(day[i],Input)==0)
            k=i;
    }
    if (k!=-1)
        printf("结果为: %d\n",k);
    else
        printf("未找到结果\n");
    system("pause");
    return 0;
}
