#include <stdio.h>
int main(){
    int a,b=12,n=5;
    a=b;
    printf("%d\n",a+=a);
    a=b;
    printf("%d\n",a-=2);
    a=b;
    printf("%d\n",a*=2+3);
    a=b;
    printf("%d\n",a/=a+a);
    a=b;
    printf("%d\n",a%=(n%=2));
    a=b;
    printf("%d\n",a+=a-=a*=a);
    return 0;
}