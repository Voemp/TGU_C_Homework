#include <stdio.h>

int main() {
    int m, f, c;
    for (m = 1; m < 30; ++m) {
        for (f = 1; f < 30; ++f) {
            for (c = 1; c < 30; ++c) {
                if (m + f + c == 30 && m * 3 + f * 2 + c == 50)
                    printf("m = %d,f = %d,c = %d\n", m, f, c);
            }
        }
    }
    return 0;
}
