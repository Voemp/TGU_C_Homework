#include <stdio.h>
#include <math.h>

int main() {
    int a, b;
    float c;
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            if (i == j)
                continue;
            a = i * 1100;
            b = j * 11;
            c = sqrt(a + b);
            if ((int) c == c)
                printf("%d", a + b);
        }
    }
    return 0;
}
