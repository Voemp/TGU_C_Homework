#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include "MakeNumber.h"
#include "IsRight.h"
#include "RorW.h"
#include "Operator.h"

int main() {
    srand(time(NULL));
    printf("欢迎来到小学生计算机辅助教学系统!\n共有十道计算题，请做好答题准备。\n");
    int a,b,score;
    char o;
    float answer;
    do{
        score=0; //得分初始化为0
        system("pause");

        for (int i = 1; i <= 10; ++i) {
            a= MakeNumber(10);
            b= MakeNumber(10);
            o=Operator();
            printf("第%d题:\n",i);
            printf("%d%c%d = ?\n",a,o,b);
            scanf("%f",&answer);
            RorW(IsRight(a,o,b,answer)); //输出正确或错误的提示语
            if(IsRight(a,o,b,answer)==1){
                score+=10; //每答对一道题加10分
            }
        }
        printf("得分：%d，正确率：%d%%\n",score,score); //输出总分和正确率
        //判断正确率是否大于75%，是否需要重新答题
        if(score<75)
            printf("正确率小于75%，请重新答题。\n");
        else
            printf("恭喜你，过关了！\n");
    } while (score<75);
    printf("请按任意键退出程序...");
    getch();
    return 0;
}
