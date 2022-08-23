#include <stdio.h>

void frac(float num, int* inteiro, float* frac)
{
    *(inteiro) = (int) num;
    *(frac) = num - *(inteiro); 
}

int main()
{
    int parte_inteira;
    float numero, parte_fracionaria;

    printf("Numero: ");
    scanf("%f", &numero);

    frac(numero, &parte_inteira, &parte_fracionaria);

    printf("Parte inteira: %d, parte fracionaria: %.2f\n", parte_inteira, parte_fracionaria);

    return 0;
}