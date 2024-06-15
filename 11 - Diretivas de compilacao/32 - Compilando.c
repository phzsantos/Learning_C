#include <stdio.h>

int main()
{
    int qtd, soma = 0;

    printf("Digite a quantidade de numeros que deseja somar: ");
    scanf("%d", &qtd);

    for (int i = 0; i < qtd; i++)
    {
        soma += i * 2 + 3;
    }

    printf("A soma é %d\n", soma);

    return 0;
}