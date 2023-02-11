#include <stdio.h>

int main(void) {
    int n = 0;
    float value = 1e6, rate;
    printf("Please enter rate:");
    scanf("%f", &rate);
    do {
        value = value * (1 + rate);
        ++n;
    } while (value < 2e6);
    if (n == 1)
        printf("1 year");
    else
        printf("%d years", n);
    return 0;
}
