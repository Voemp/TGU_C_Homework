#include <stdio.h>
#include <math.h>

int main(void) {
    int n = 1, count = 1;
    float sign=-1;
    double sum=1, term;
    do {
        n=n+2;
        term = sign*((float)1/n);
        sum = sum + term;
        sign=-sign;
        ++count;
    } while (fabs(term) >= 1e-4);
    printf("π = %f, count = %d\n", sum*4, count);
    return 0;
}
