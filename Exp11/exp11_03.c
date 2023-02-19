#include<stdio.h>
#include<stdlib.h>
#define N 4 // 学生人数
typedef struct student
{
    long stuID;
    char stuName[10];
    int score[4];
    double aver;
}STUDENT;
void Write(STUDENT *stu);
int Search(STUDENT *stu,long ID);
int main(void)
{
    int k=0;
    long ID=0;
    STUDENT stu1[N],stu2[N]=
    {
        {100310121,"王刚",{72,83,90,82},81.8},
        {100310122,"李小明",{88,92,78,78},84.0},
        {100310123,"王丽红",{98,72,89,66},81.3},
        {100310124,"陈莉莉",{87,95,78,90},87.5}
    };
    system("color f3");
    Write(stu2);
    printf("请输入要查找的学生ID: ");
    scanf("%ld",&ID);
    k=Search(stu1,ID);
    if (k==-1)
        printf("未找到该学生ID\n");
    system("pause");
    return 0;
}
void Write(STUDENT *stu)
{
    FILE *fp=fopen("files\\exp11_03_student.txt","wb");
    if (fp==NULL)
    {
        printf("Failure to open\n");
        system("pause");
        exit(0);
    }
    fwrite(stu,sizeof(STUDENT),N,fp);
    fclose(fp);
    return;
}
int Search(STUDENT *stu,long ID)
{
    FILE *fp=fopen("files\\exp11_03_student.txt","r");
    if (fp==NULL)
    {
        printf("Failure to open\n");
        system("pause");
        exit(0);
    }
    for (int i=0;i<N;++i)
    {
        fread(&stu[i],sizeof(STUDENT),1,fp);
        if (ID==stu[i].stuID)
        {
            printf("找到ID: %d\n",stu[i].stuID);
            printf("%10ld |%7s |%3d%3d%3d%3d |%5.1f\n",stu[i].stuID,stu[i].stuName,
            stu[i].score[0],stu[i].score[1],stu[i].score[2],stu[i].score[3],stu[i].aver);
            fclose(fp);
            return 0;
        }
    }
    fclose(fp);
    return -1;
}
