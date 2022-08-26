#include <stdio.h>

void encontra_maior_e_menor(int* vetor, int* tamanho_vetor, int* maior, int* menor)
{
    *(maior) = *(vetor);
    *(menor) = *(maior);
    for (int i = 1; i < *(tamanho_vetor); i++)
    {
        if (*(vetor+i) > *(maior))
        {
            *(maior) = *(vetor+i);
        }

        if (*(vetor+i) < *(menor))
        {
            *(menor) = *(vetor+i);
        }
    }
}

int main()
{
    int tamanho_vetor, maior, menor;

    printf("Tamanho vetor: ");
    scanf("%d", &tamanho_vetor);

    int valores[tamanho_vetor];

    for (int i = 0; i < tamanho_vetor; i++)
    {
        printf("%d: ", i);
        scanf("%d", &valores[i]);
    }

    encontra_maior_e_menor(&valores[0], &tamanho_vetor, &maior, &menor);

    printf("Maior: %d\n", maior);
    printf("Menor: %d\n", menor);
    for (int i = 0; i < tamanho_vetor; i++)
    {
        printf("%d ", valores[i]);
    }
    printf("\n");

    return 0;
}