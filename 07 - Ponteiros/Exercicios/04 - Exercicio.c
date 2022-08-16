#include <stdio.h>

void troca_numero(int* numero_1, int* numero_2)
{
    int troca;

    troca = (*numero_1);
    (*numero_1) = (*numero_2);
    (*numero_2) = troca;
}

int main()
{
    int variavel_1, variavel_2;

    scanf("%d", &variavel_1);
    scanf("%d", &variavel_2);

    troca_numero(&variavel_1, &variavel_2);

    printf("N1: %d, N2: %d\n", variavel_1, variavel_2);

    return 0;
}