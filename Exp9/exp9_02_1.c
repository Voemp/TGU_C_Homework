#include<stdio.h>
#include<stdlib.h>
void Print(char *arr[],int len);
int main(void)
{
    char *pA[3]={"How","are","you"};
    int num=sizeof(pA)/sizeof(char*);
    system("color f3");
    printf("Total string numbers = %d\n",num);
    Print(pA,num);
    system("pause");
    return 0;
}
void Print(char *arr[],int len)
{
    for (int i=0;i<len;i++)
    {
        printf("%s ",arr[i]);
    }
    printf("\n");
}
