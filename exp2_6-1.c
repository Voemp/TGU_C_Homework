#include <stdio.h>

#define PI 3.14159

int main() {
    double r;
    scanf("%lf", &r);
    printf("%f\n", 4 * PI * r * r * r / 3);
    printf("%f\n", 4 * PI * r * r);
    return 0;
}