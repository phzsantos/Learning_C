#include <stdio.h>

void calc_esfera(float R, float* area, float* volume)
{
    float pi = 3.142;

    *(area) = 4 * pi * R*R;
    *(volume) = 4 * pi * R*R*R/3;
}

int main()
{
    float raio, area, volume;

    printf("Raio: ");
    scanf("%f", &raio);

    calc_esfera(raio, &area, &volume);

    printf("Area: %.2f cm2, Volume: %.2f cm3\n", area, volume);

    return 0;
}