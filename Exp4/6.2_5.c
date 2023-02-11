#include <stdio.h>
#include <math.h>

int main(void) {
    int n = 1, count = 1;
    double x;
    double sum, term;
    printf("Input x:");
    scanf("%lf", &x);
    sum = x;
    term = x;
    do {
        term = -term * (x * x / ((n + 2) * (n +1)));
        sum = sum + term;
        n = n + 2;
        count++;
    } while (fabs(term) >= 1e-5);
    printf("sin(x) = %f, count = %d\n", sum, count);
    return 0;
}
