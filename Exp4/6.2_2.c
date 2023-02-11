#include <stdio.h>

int main(void) {
    long i;
    long term, sum = 0;
    for (int i = 1; i <= 99; i = i + 2) {
        term = i * (i + 1) * (i + 2);
        sum = sum + term;
    }
    printf("sum = %ld", sum);
    return 0;
}
