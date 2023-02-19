#include<stdio.h>
#include<stdlib.h>
void InputA(int *pa,int n);
void OutputA(int *pa,int n);
int main(void)
{
    int a[5]={0};
    system("color f3");
    printf("Input five numbers: ");
    InputA(a,5);
    OutputA(a,5);
    system("pause");
    return 0;
}
void InputA(int *pa,int n)
{
    int *pb=pa+n;
    for (;pa<pb;pa++)
    {
        scanf("%d",pa);
    }
    return;
}
void OutputA(int *pa,int n)
{
    int *pb=pa+n;
    for (;pa<pb;pa++)
    {
        printf("%4d",*pa);
    }
    printf("\n");
    return;
}
