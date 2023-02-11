#include <stdio.h>

int main() {
    char sex, sports, diet;
    float faHeight, moHeight, height;
    printf("sex(F/M),faHeight(cm),moHeight(cm),do you sports(Y/N),if have a healthy diet(Y/N):\n");
    scanf("%c%f%f %c %c", &sex, &faHeight, &moHeight, &sports, &diet);
    if (sex == 'M')
        height = (faHeight + moHeight) * 0.54;
    if (sex == 'F')
        height = (faHeight * 0.923 + moHeight) / 2;
    if (sports == 'Y')
        height *= 1.02;
    if (diet == 'Y')
        height *= 1.015;
    printf("%f cm", height);
    return 0;
}
