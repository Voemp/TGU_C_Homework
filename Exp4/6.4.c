#include <stdio.h>

int main(void) {
    int i, n;
    long p, l;
    printf("Please enter n:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        p = i * i;
        l = p * i;
        printf("%d的平方 = %ld,%d的立方 = %ld\n", i, p, i, l);
    }
    return 0;
}
