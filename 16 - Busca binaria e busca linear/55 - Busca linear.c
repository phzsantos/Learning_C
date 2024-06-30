#include <stdio.h>

int busca_linear(int vetor[], int chave, int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        if (vetor[i] == chave)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    int vetor[6] = {1, 3, 5, 8, 12, 42};
    int chave = 12;

    int resultado = busca_linear(vetor, chave, 6);

    printf("O valor %d esta na posicao %d\n", chave, resultado);

    return 0;
}