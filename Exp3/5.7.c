#include <stdio.h>

int main() {
    char ch;
    ch = getchar();
    if (ch >= 'A' && ch <= 'Z') {
        ch += 32;
        printf("%c %d", ch, ch);
    } else if (ch >= 'a' && ch <= 'z') {
        ch -= 32;
        printf("%c %d", ch, ch);
    } else
        printf("%d", ch);
    return 0;
}
