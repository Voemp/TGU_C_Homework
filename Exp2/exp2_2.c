#include <stdio.h>
int main(){
    int a,b;
    float x,y;
    a=7,x=2.5,y=4.7;
    printf("%f\n",a%3*(int)(x+y)%2/4);
    a=2,b=3,x=3.5,y=2.5;
    printf("%f\n",(float)(a+b)/2+(int)x%(int)y);
    return 0;
}