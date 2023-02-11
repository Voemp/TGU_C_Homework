#include <stdio.h>

int main() {
    for (int a = 1; a <= 9; ++a) {
        printf("%-2d ", a);
    }
    printf("\n");
    char c = '-';
    for (int b = 0; b < 9; ++b) {
        printf("%-2c ", c);
    }
    printf("\n");
    for (int i = 1; i <= 9; ++i) {
        for (int j = 1; j < i; ++j)
            printf("   ");
        for (int k = i; k <= 9; ++k) {
            printf("%-2d ", i * k);
        }
        printf("\n");
    }
    return 0;
}
