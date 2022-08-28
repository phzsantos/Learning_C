#include <stdio.h>

int main()
{
    int inteiro = 1;
    float real = 2;

    int* ponteiro_inteiro;
    float* ponteiro_float;

    ponteiro_inteiro = &inteiro;
    ponteiro_float = &real;

    printf("Endereco de memoria: %p, valor do ponteiro: %d, endereco do ponteiro: %p, endereco apontado: %p\n", &inteiro, *ponteiro_inteiro, &ponteiro_inteiro, ponteiro_inteiro);
    printf("Endereco de memoria: %p, valor do ponteiro: %.f, endereco do ponteiro: %p, endereco apontado: %p\n", &real, *ponteiro_float, &ponteiro_float, ponteiro_float);

    return 0;
}