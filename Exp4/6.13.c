#include <stdio.h>

int main() {
    int a, m = 0;
    do {
        scanf("%d", &a);
        if (a > 0) {
            m = m + a;
        }
    } while (a != 0);
    printf("%d", m);
    return 0;
}
