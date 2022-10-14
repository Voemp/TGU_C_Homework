#include <stdio.h>

int main() {
    float cm, m, foot, inch;
    scanf("%f", &cm);
    m = cm / 100;
    foot = m / 0.3048;
    inch = (foot - (int) foot) * 10 + 0.5;
    printf("%d %d\n", (int) foot, (int) inch);
    return 0;
}