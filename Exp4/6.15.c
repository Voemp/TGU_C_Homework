#include <stdio.h>

int main() {
    int c, r;
    for (c = 0; c <= 98; ++c) {
        for (r = 0; r <= 98; ++r) {
            if (c + r == 98 && c * 2 + r * 4 == 386)
                printf("c = %d,r = %d\n", c, r);
        }
    }
    return 0;
}
