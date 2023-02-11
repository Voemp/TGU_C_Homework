#include <stdio.h>

int main() {
    int n, m;
    int sum = 0, term = 1;
    printf("Please enter n:");
    scanf("%d", &n);
    for (m = 1;; ++m) {
        term = term * m;
        sum = sum + term;
        if (sum >= n)
            break;
    }
    printf("%d", m - 1);
    return 0;
}
