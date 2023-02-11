#include <stdio.h>

int main() {
    float t, w, h;
    printf("weight(kg) height(m):");
    scanf("%f%f", &w, &h);
    t = w / (h * h);
    if (t < 18)
        printf("低体重");
    else if (t >= 18 && t < 25)
        printf("正常体重");
    else if (t >= 25 && t < 27)
        printf("超重体重");
    else if (t >= 27)
        printf("肥胖");
    return 0;
}
