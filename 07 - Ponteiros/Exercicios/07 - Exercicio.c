#include <stdio.h>

void soma(int* numero_1, int* numero_2)
{
    (*numero_1) += (*numero_2);
}

int main()
{
    int numero_1, numero_2;

    printf("Primeiro: ");
    scanf("%d", &numero_1);
    printf("Segundo: ");
    scanf("%d", &numero_2);
    
    soma(&numero_1, &numero_2);

    printf("Soma: %d, segundo: %d\n", numero_1, numero_2);

    return 0;
}