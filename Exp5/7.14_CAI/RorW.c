// Created by VoidEmpty on 2022/11/20.
#include "RorW.h"
#include "MakeNumber.h"
#include <stdio.h>

/*	函数功能：  	随机返回正确或错误的提示
 	函数参数：  	无
   	函数返回值：	无
 */

void RorW(int answer){
    switch (answer) {
        case 1:
            switch (MakeNumber(4)) {
                case 1:
                    printf("Very good!\n");
                    break;
                case 2:
                    printf("Excellent!\n");
                    break;
                case 3:
                    printf("Nice work!\n");
                    break;
                case 4:
                    printf("Keep up the good work!\n");
                    break;
            }
            break;
        case 0:
            switch (MakeNumber(4)) {
                case 1:
                    printf("No. Please try again.\n");
                    break;
                case 2:
                    printf("Wrong. try once more.\n");
                    break;
                case 3:
                    printf("Don't give up!\n");
                    break;
                case 4:
                    printf("Not correct.Keep trying.\n");
                    break;
            }
            break;
    }
}