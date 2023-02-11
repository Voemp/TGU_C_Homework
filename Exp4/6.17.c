#include <stdio.h>

int main() {
    int t, f, o, count = 0;
    for (int t = 0; t < 50; ++t) {
        for (int f = 0; f < 50; ++f) {
            for (int o = 0; o < 50; ++o) {
                if (t + f + o == 50 && t * 10 + f * 5 + o == 100) {
                    count++;
                    printf("ten = %d,five = %d,one = %d\n", t, f, o);
                }
            }
        }
    }
    printf("%d kind\n", count);
    return 0;
}
