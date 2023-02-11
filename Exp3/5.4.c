#include <stdio.h>

int main() {
    float capital;
    int year;
    printf("capital and years:");
    scanf("%f%d", &capital, &year);
    switch (year) {
        case 1:
            printf("%f", capital * (1 + 0.0225));
            break;
        case 2:
            printf("%f", capital * (1 + 0.0243));
            break;
        case 3:
            printf("%f", capital * (1 + 0.0270));
            break;
        case 5:
            printf("%f", capital * (1 + 0.0288));
            break;
        case 8:
            printf("%f", capital * (1 + 0.0300));
            break;
    }
    return 0;
}
