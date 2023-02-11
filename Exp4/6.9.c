#include <stdio.h>
#include <math.h>

int main(void) {
    int n = 1, count = 1;
    double sum = 1, term = 1;
    do {
        term = term / n;
        sum = sum + term;
        ++n;
        ++count;
    } while (fabs(term) >= 1e-5);
    printf("e = %f, count = %d\n", sum, count);
    return 0;
}
