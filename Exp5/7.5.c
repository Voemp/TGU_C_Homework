#include <stdio.h>
#include <stdlib.h>

unsigned long Fact(unsigned int);

int main() {
    int n;
    do {
        printf("Input n (n>=0):");
        scanf("%d", &n);
        if (n < 0)
            printf("Input data error!\n");
    } while (n < 0);

    for (int i = 1; i <= n; ++i) {
        printf("%d! = %d\n", i, Fact(i));
    }
    system("pause");
    return 0;
}

//Fact函数功能；用迭代法计算无符号整形变量n的阶乘
unsigned long Fact(unsigned int n) {
    unsigned long term = 1;
    for (unsigned int i = 1; i <= n; ++i) {
        term *= i;
    }
    return term;
}