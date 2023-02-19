#include<stdio.h>
#include<stdlib.h>
#define _for(i,a,b) for (int i=a;i<b;++i)
void Transpose(int a[10][10],int n);
void Swap(int *x,int *y);
int main(void)
{
    int num[10][10]={0},n=0;
    system("color f3");
    printf("请输入n: ");
    scanf("%d",&n);
    printf("请输入数据: \n");
    _for (i,0,n)
        _for (j,0,n)
            scanf("%d",&num[i][j]);
    Transpose(num,n);
    printf("转置后的矩阵为: \n");
    _for (i,0,n)
    {
        _for (j,0,n)
            printf("%d ",num[i][j]);
        printf("\n");
    }
    system("pause");
    return 0;
}
void Swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    return;
}
void Transpose(int a[10][10],int n)
{
    _for (i,0,n)
        _for (j,i+1,n)
            Swap(&a[i][j],&a[j][i]);
    return;
}
