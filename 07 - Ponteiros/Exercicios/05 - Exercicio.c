#include <stdio.h>

void troca_maior_numero(int* numero_1, int* numero_2)
{
    int troca;

    if ((*numero_2) > (*numero_1))
    {
        troca = (*numero_1);
        (*numero_1) = (*numero_2);
        (*numero_2) = troca;
    }
}

int main()
{
    int variavel_1, variavel_2;

    scanf("%d", &variavel_1);
    scanf("%d", &variavel_2);

    troca_maior_numero(&variavel_1, &variavel_2);

    printf("Maior: %d, Menor: %d\n", variavel_1, variavel_2);

    return 0;
}