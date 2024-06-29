#include <stdio.h>

void select_sort(int vetor[], int tamanho)
{
    int menor, troca;

    for (int i = 0; i < tamanho - 1; i++)
    {
        menor = i;
        for (int j = i + 1; j < tamanho; j++)
        {
            if (vetor[j] < vetor[menor])
            {
                menor = j;
            }
        }

        if (i != menor)
        {
            troca = vetor[i];
            vetor[i] = vetor[menor];
            vetor[menor] = troca;
        }
    }
}

int main()
{
    int vetor[6] = {8, 3, 1, 42, 12, 5};

    select_sort(vetor, 6);

    for (int i = 0; i < 6; i++)
    {
        printf("%d ", vetor[i]);
    }

    return 0;
}
