#include <stdio.h>

int negativos(float* vet, int N)
{
    int quantidade_negativos;

    quantidade_negativos = 0;
    for (int i = 0; i < N; i++)
    {
        if (*(vet+i) < 0)
        {
            quantidade_negativos++;
        }
    }

    return quantidade_negativos;
}

int main()
{
    int tamanho_vetor, quantidade_negativos;

    printf("Tamanho vetor: ");
    scanf("%d", &tamanho_vetor);

    float valores[tamanho_vetor];

    for (int i = 0; i < tamanho_vetor; i++)
    {
        printf("%d: ", i);
        scanf("%f", &valores[i]);
    }

    quantidade_negativos = negativos(&valores[0], tamanho_vetor);

    printf("Quantidade de negativos: %d\n", quantidade_negativos);

    return 0;
}