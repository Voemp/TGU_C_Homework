#include<stdio.h>
#include<stdlib.h>
#define _for(i,a,b) for (int i=a;i<b;++i)
void InputArray(int *p,int m,int n);
int FindMax(int *p,int m,int n,int *pRow,int *pCol);
int main(void)
{
    int arr[10][10]={0},m=0,n=0;
    int max=0,maxRow=0,maxCol=0;
    system("color f3");
    printf("请输入m,n: ");
    scanf("%d %d",&m,&n);
    printf("请输入数据: \n");
    InputArray(arr[0],m,n);
    max=FindMax(arr[0],m,n,&maxRow,&maxCol);
    printf("数组元素的最大值为: arr[%d][%d] = %d\n",maxRow,maxCol,max);
    system("pause");
    return 0;
}
void InputArray(int *p,int m,int n)
{
    _for (i,0,m)
        _for (j,0,n)
            scanf("%d",p+i*n+j);
    return;
}
int FindMax(int *p,int m,int n,int *pRow,int *pCol)
{
    int max=p[0];
    _for (i,0,m)
        _for (j,0,n)
            if (max<p[i*n+j])
            {
                max=p[i*n+j];
                *pRow=i;
                *pCol=j;
            }
    return max;
}