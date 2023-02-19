#include<stdio.h>
#include<stdlib.h>
#define _for(i,a,b) for (int i=a;i<b;++i)
void Ifnull(int **p1,int *p2);
void InputScore(int **arr,int m,int n);
int FindMax(int **arr,int m,int n,int *pRow,int *pCol);
int main(void)
{
    int m=0,n=0,max=0,mClass=0,mScore=0;
    int **class=NULL,*student=NULL;
    system("color f3");
    printf("请输入m,n: ");
    scanf("%d %d",&m,&n);
    class=(int**)calloc(m,sizeof(int*));
    student=(int*)calloc(m*n,sizeof(int));
    Ifnull(class,student);
    _for (i,0,m)
        class[i]=&student[i*n];
    printf("请输入分数: \n");
    InputScore(class,m,n);
    max=FindMax(class,m,n,&mClass,&mScore);
    printf("最高分为%d班%d号,总分: %d\n",mClass+1,mScore+1,max);
    free(class[0]);
    free(class);
    class=NULL;
    system("pause");
    return 0;
}
void Ifnull(int **p1,int *p2)
{
    if (p1==NULL||p2==NULL)
    {
        printf("就离谱\n");
        exit(1);
    }
    return;
}
void InputScore(int **arr,int m,int n)
{
    _for (i,0,m)
        _for (j,0,n)
            scanf("%d",&arr[i][j]);
    return;
}
int FindMax(int **arr,int m,int n,int *pRow,int *pCol)
{
    int max=arr[0][0];
    _for (i,0,m)
        _for (j,0,n)
            if (max<arr[i][j])
            {
                max=arr[i][j];
                *pRow=i;
                *pCol=j;
            }
    return max;
}