#include <stdio.h>
#include <stdlib.h>

void IfNull(void *p);

void InputArray(int **p, int m, int n);

int FindMax(int **p, int m, int n, int *pRow, int *pCol);


int main() {
    int m, n, row, col, max;
    int **class=NULL;
    IfNull(class = (int **) calloc(m, sizeof(int *)));
    int *students=NULL;
    IfNull(students = (int *) calloc(m * n, sizeof(int)));
    //将二维数组的每一行的首地址存入一维数组中
    for (int i = 0; i < m; ++i) {
        class[i] = students + i * n;
    }
    printf("Please input the number of classes: ");
    scanf("%d", &m);
    printf("Please input the number of students in each class: ");
    scanf("%d", &n);
    printf("Please input the scores of students in each class: ");
    InputArray(class, m, n);
    max = FindMax(class, m, n, &row, &col);
    printf("The max score is %d, which is in class %d, student %d\n", max, row + 1, col + 1);
    free(class);
    free(students);
    system("pause");
    return 0;
}
//检查内存分配是否成功
void IfNull(void *p) {
    if (p == NULL) {
        printf("Memory allocation failed!");
        exit(1);
    }
}
//输入数组
void InputArray(int **p, int m, int n) {
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            scanf("%d", &p[i][j]);
        }
    }
}
//返回最大值，通过指针参数修改下标变量的大小
int FindMax(int **p, int m, int n, int *pRow, int *pCol) {
    int max = p[0][0];
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (p[i][j] > max) {
                max = p[i][j];
                *pRow = i;
                *pCol = j;
            }
        }
    }
    return max;
}