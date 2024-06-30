#include <stdio.h>

int busca_binaria(int vetor[], int chave, int tamanho)
{
    int inicio = 0;
    int fim = tamanho - 1;

    while (inicio <= fim)
    {
        int meio = (inicio + fim) / 2;

        if (chave == vetor[meio])
        {
            return meio;
        }

        if (chave < vetor[meio])
        {
            fim = meio - 1;
        }
        else
        {
            inicio = meio + 1;
        }
    }

    return -1;
}

int main()
{
    int vetor[6] = {1, 3, 5, 8, 12, 42};
    int chave = 12;

    int resultado = busca_binaria(vetor, chave, 6);

    printf("O valor %d esta na posicao %d\n", chave, resultado);

    return 0;
}