#include <stdio.h>

int main() {
    int x, m = 0;
    do {
        scanf("%d", &x);
        if (x <= 0) {
            printf("End......\n");
            break;
        }
        m = m + x;
        printf("%d\n", m);
    } while (x > 0);
    return 0;
}
