#include <stdio.h>

int encontra_maior_e_conta(int* vetor, int* tamanho_vetor, int* maior, int* quantidade)
{   
    *(maior) = *(vetor);
    for (int i = 1; i < *(tamanho_vetor); i++)
    {
        if (*(vetor+i) >= *(maior))
        {
            *(maior) = *(vetor+i);
        }
    }

    *(quantidade) = 0;
    for (int i = 0; i < *(tamanho_vetor); i++)
    {
        if (*(vetor+i) == *(maior))
        {
            (*(quantidade))++;
        }
    }
}

int main()
{
    int tamanho, maior, quantidade;

    printf("Tamanho: ");
    scanf("%d", &tamanho);

    int valores[tamanho];

    for (int i = 0; i < tamanho; i++)
    {
        printf("%d: ", i);
        scanf("%d", &valores[i]);
    }

    encontra_maior_e_conta(&valores[0], &tamanho, &maior, &quantidade);

    printf("Maior: %d, quantidade de vezes que apareceu: %d\n", maior, quantidade);

    return 0;
}