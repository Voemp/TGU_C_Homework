#include<stdio.h>
#include<stdlib.h>
typedef struct student
{
    long stuID;
    char stuName[10];
    int score[4];
}STUDENT;
int main(void)
{
    STUDENT stu[30]=
    {
        {100310121,"王刚",{72,83,90,82}},
        {100310122,"李小明",{88,92,78,78}},
        {100310123,"王丽红",{98,72,89,66}},
        {100310124,"陈莉莉",{87,95,78,90}}
    };
    int sum[30]={0};
    FILE *fp=fopen("files\\exp11_02_score.txt","w");
    system("color f3");
    if (fp==NULL)
    {
        printf("Failure to open\n");
        system("pause");
        exit(0);
    }
    fprintf(fp,"%10s |%7s |%12s |%5s\n","ID","name","score","aver");
    for (int i=0;i<4;++i)
    {
        for (int j=0;j<4;++j)
            sum[i]+=stu[i].score[j];
        fprintf(fp,"%10ld |%7s |%3d%3d%3d%3d |%5.1f\n",stu[i].stuID,stu[i].stuName,
        stu[i].score[0],stu[i].score[1],stu[i].score[2],stu[i].score[3],(double)sum[i]/4);
    }
    fclose(fp);
    printf("文件写入完成,");
    system("pause");
    return 0;
}