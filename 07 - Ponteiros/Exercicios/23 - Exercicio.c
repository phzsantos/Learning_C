#include <stdio.h>

void acha_maior_e_imprime_por_demanda(int* vetor, int* tamanho_vetor, int* quantidade_linha, int* maior)
{
    *(maior) = *(vetor);
    for (int i = 0; i < *(tamanho_vetor); i++)
    {
        if (*(vetor+i) > *(maior))
        {
            *(maior) = *(vetor+i);
        }
    }

    printf("Maior: %d\n", *(maior));
    for (int i = 0; i < *(tamanho_vetor); i += *(quantidade_linha))
    {
        for (int j = i; j < i+(*(quantidade_linha)); j++)
        {
            if (j+1 > *(tamanho_vetor))
            {
                printf("");
            }
            else
            {
                printf("%d ", *(vetor+j));
            }
        }
        printf("\n");
    }
}

int main()
{
    int tamanho_vetor, quantidade_elementos_linha, maior;

    printf("Tamanho: ");
    scanf("%d", &tamanho_vetor);

    printf("Quantidade para imprimir por linha: ");
    scanf("%d", &quantidade_elementos_linha);

    int valores[tamanho_vetor];

    for (int i = 0; i < tamanho_vetor; i++)
    {
        printf("%d: ", i);
        scanf("%d", &valores[i]);
    }

    acha_maior_e_imprime_por_demanda(&valores[0], &tamanho_vetor, &quantidade_elementos_linha, &maior);

    return 0;
}