#include <stdio.h>

void quick_sort(int vetor[], int tamanho)
{
    int i, j, grupo, troca;

    if (tamanho < 2)
    {
        return;
    }
    else
    {
        grupo = vetor[tamanho / 2];
    }

    for (i = 0, j = tamanho - 1;; i++, j--)
    {
        while (vetor[i] < grupo)
        {
            i++;
        }

        while (grupo < vetor[j])
        {
            j--;
        }

        if (i >= j)
        {
            break;
        }
        else
        {
            troca = vetor[i];
            vetor[i] = vetor[j];
            vetor[j] = troca;
        }
    }

    quick_sort(vetor, i);
    quick_sort(vetor + i, tamanho - i);
}

int main()
{
    int vetor[6] = {8, 3, 1, 42, 12, 5};

    quick_sort(vetor, 6);

    for (int i = 0; i < 6; i++)
    {
        printf("%d ", vetor[i]);
    }

    return 0;
}