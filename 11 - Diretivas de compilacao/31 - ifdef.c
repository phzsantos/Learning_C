#include <stdio.h>

#ifndef PI
    #define PI 3.1415
#endif

int main()
{
    int valor = 5;

    valor = 467;

    printf("Valor: %d\n", valor);

    printf("PI: %f\n", PI);

    #ifdef PI
        printf("PI: %f\n", PI);
    #endif

    return 0;
}