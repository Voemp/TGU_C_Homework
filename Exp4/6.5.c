#include <stdio.h>

int main(void) {
    float c;
    for (int i = 0; i <= 300; i += 10) {
        c = (float) 5 / 9 * (i - 32);
        printf("%d°F = %f°C\n", i, c);
    }
    return 0;
}
