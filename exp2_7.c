#include <stdio.h>

int main() {
    char ch;
    ch = getchar();
    ch = ch - 32;
    printf("%c %d\n", ch, ch);
    return 0;
}