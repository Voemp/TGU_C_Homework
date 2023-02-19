#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct candidate
{
    char name[10];
    int vote;
}CANDIDATE;
int main(void)
{
    CANDIDATE candidate[3]=
    {
        {.name="zhang",.vote=0},
        {.name="li",.vote=0},
        {.name="wang",.vote=0}
    };
    int Invalid=0,k=0;
    char str[10]={0};
    system("color f3");
    printf("请输入选票: \n");
    for (int i=0;i<10;++i)
    {
        memset(str,0,10);
        gets(str);
        for (int j=0;j<3;++j)
        {
            if (strcmp(str,candidate[j].name)==0)
            {
                candidate[j].vote++;
                k=1;
            }
        }
        if (k==0)
            Invalid++;
        k=0;
    }
    printf("\n投票结果为: \n");
    for (int i=0;i<3;++i)
        printf("| %5s: %2d票 |\n",candidate[i].name,candidate[i].vote);
    printf("| %5s: %2d票 |\n","作废",Invalid);
    system("pause");
    return 0;
}