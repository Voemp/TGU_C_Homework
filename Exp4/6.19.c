#include <stdio.h>

int main() {
    double m = 0, f = 0, fg = 0.01;
    for (int i = 0; i < 30; ++i) {
        m = m + 100000;
        f = f + fg;
        fg = fg * 2;
    }
    printf("%lf %lf", m, f);
    return 0;
}
