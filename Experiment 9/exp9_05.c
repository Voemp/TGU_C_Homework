#include<stdio.h>
#include<stdlib.h>
#define _for(i,a,b) for (int i=a;i<b;++i)
void Transpose(int (*a)[10],int (*at)[10],int m,int n);
int main(void)
{
    int num[10][10]={0},ans[10][10]={0};
    int n=0,m=0;
    system("color f3");
    printf("请输入m,n: ");
    scanf("%d %d",&m,&n);
    printf("请输入数据: \n");
    _for (i,0,m)
        _for (j,0,n)
            scanf("%d",&num[i][j]);
    Transpose(num,ans,m,n);
    printf("转置后的矩阵为: \n");
    _for (i,0,n)
    {
        _for (j,0,m)
            printf("%d ",ans[i][j]);
        printf("\n");
    }
    system("pause");
    return 0;
}
void Transpose(int (*a)[10],int (*at)[10],int m,int n)
{
    _for (i,0,n)
        _for (j,0,m)
            at[i][j]=a[j][i];
    return;
}