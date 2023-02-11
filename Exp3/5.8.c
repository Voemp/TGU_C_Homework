#include <stdio.h>

int main() {
    char ch;
    ch = getchar();
    if (ch >= '0' && ch <= '9')
        printf("number");
    else if (ch >= 'A' && ch <= 'Z')
        printf("capital");
    else if (ch >= 'a' && ch <= 'z')
        printf("lower case");
    else if (ch == ' ')
        printf("space");
    else
        printf("other character");
    return 0;
}
