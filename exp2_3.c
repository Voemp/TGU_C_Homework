#include <stdio.h>
int main(){
    int n,a,b,c;
    scanf("%d",&n);
    if (n<0){
        n=-n;
    }
    a=n/100,b=(n-a*100)/10,c=n%10;
    n=c*100+b*10+a;
    printf("%d\n",n);
    return 0;
}