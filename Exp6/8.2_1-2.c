// Created by VoidEmpty on 2022/11/20.

//用于统计n个整数中正数的个数
int PositiveNum(int a[],int n){
    int count=0;
    for (int i = 0; i < n; ++i) {
        if(a[i]>0)
            count+=1;
    }
    return count;
}

//使用迭代法计算Fibonacci数列前n项的值
void Fib(long f[],int n){
    f[0]=0;
    f[1]=1;
    for (int i = 2; i < n; ++i) {
         f[i]=f[i-1]+f[i-2];
    }
}