#include <stdio.h>

int main()
{
    int inteiro;
    float real;
    char caractere;

    int* inteiro_p = &inteiro;
    float* real_p = &real;
    char* caractere_p = &caractere;

    printf("int: %d, float: %.2f, char: %c\n", inteiro, real, caractere);

    *inteiro_p = 1;
    *real_p = 2.3;
    *caractere_p = 'C';

    printf("int: %d, float: %.2f, char: %c\n", inteiro, real, caractere);

    return 0;
}