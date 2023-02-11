#include <stdio.h>

int main() {
    int a, b, c, d, sum;
    float average;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    sum = a + b + c + d, average = (float) sum / 4;
    printf("Sum = %d; Average = %.1f", sum, average);
    return 0;
}