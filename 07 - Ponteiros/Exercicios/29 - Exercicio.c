#include <stdio.h>

int main()
{
    int primeiro = 1;
    float segundo = 2;
    char terceiro = '3';

    printf("Valor: %d, tamanho em bytes: %ld, endereco de memoria INT: %ld, hexa: %p\n", primeiro, sizeof(primeiro), (long int) &primeiro, &primeiro);
    printf("Valor: %.f, tamanho em bytes: %ld, endereco de memoria INT: %ld, hexa: %p\n", segundo, sizeof(segundo), (long int) &segundo, &segundo);
    printf("Valor: %c, tamanho em bytes: %ld, endereco de memoria INT: %ld, hexa: %p\n", terceiro, sizeof(terceiro), (long int) &terceiro, &terceiro);

    return 0;
}