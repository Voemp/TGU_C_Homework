// Created by VoidEmpty on 2023/3/9.
#include <stdio.h>
#include <stdlib.h>
#define M 10
#define N 10

void Swap(int *x, int *y);

void Transpose(int *a,int *at, int m, int n);

int main(){
    int a[M][N],at[N][M],i,j,m,n;
    printf("Enter the order of the matrix:");
    scanf("%d %d",&m,&n);
    printf("Enter the matrix:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    Transpose(a,at,m,n);
    printf("The transpose of the matrix is:\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d ",at[i][j]);
        }
        printf("\n");
    }
    system("pause");
    return 0;
}

void Swap(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void Transpose(int *a,int *at, int m, int n){
    int i,j;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            at[j*M+i]=a[i*N+j];
        }
    }
}