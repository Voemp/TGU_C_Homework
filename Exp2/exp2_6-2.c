#include <stdio.h>

int main() {
    double r;
    const double PI = 3.141592;
    scanf("%lf", &r);
    printf("%f\n", 4 * PI * r * r * r / 3);
    printf("%f\n", 4 * PI * r * r);
    return 0;
}