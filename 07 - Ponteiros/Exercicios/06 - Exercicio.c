#include <stdio.h>

int soma_dobro(int* numero_1, int* numero_2)
{
    int soma;

    (*numero_1) *= 2;
    (*numero_2) *= 2; 
    soma = (*numero_1) + (*numero_2);

    return soma;
}

int main()
{
    int numero_1, numero_2, soma;

    printf("Primeiro: ");
    scanf("%d", &numero_1);
    printf("Segundo: ");
    scanf("%d", &numero_2);

    soma = soma_dobro(&numero_1, &numero_2);

    printf("Soma: %d, dobro primeiro %d, dobro segundo: %d\n", soma, numero_1, numero_2);

    return 0;
}