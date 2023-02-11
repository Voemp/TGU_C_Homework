#include <stdio.h>
#include <math.h>

int main() {
    double capital, rate = 0.0225, n, deposit;
    printf("Please input \"capital years\":");
    scanf("%lf %lf", &capital, &n);
    deposit = capital * pow(1 + rate, n);
    printf("Deposit=%lf yuan.\n", deposit);
    return 0;
}