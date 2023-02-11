#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    if (a % 2 != 0)
        printf("odd");
    else
        printf("even");
    return 0;
}
