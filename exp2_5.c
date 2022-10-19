#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    scanf("%f%f%f", &a, &b, &c);
    printf("%.0f %.0f", (-b + sqrt(b * b - 4 * a * c)) / 2 / a, (-b - sqrt(b * b - 4 * a * c)) / 2 / a);
    return 0;
}
