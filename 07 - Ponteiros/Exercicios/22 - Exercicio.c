#include <stdio.h>

int soma_arrays(int* vetor, int* tamanho_vetor1, int* vetor2, int* tamanho_vetor2, int* soma, int* maior_array)
{
    for (int i = 0; i < *(maior_array); i++)
    {
        if (*(tamanho_vetor1) < i+1)
        {
            *(soma+i) = 0 + *(vetor2+i);
        }
        else if (*(tamanho_vetor2) < i+1)
        {
            *(soma+i) = *(vetor+i) + 0;
        }
        else
        {
            *(soma+i) = *(vetor+i) + *(vetor2+i);
        }
    }

    if (*(tamanho_vetor1) == *(tamanho_vetor2))
    {
        return 0;
    }

    return 1;
}

int main()
{
    int tamanho_vetor, tamanho_vetor2, maior_array, resultado;

    printf("Tamanho vetores: \n");
    scanf("%d", &tamanho_vetor);
    scanf("%d", &tamanho_vetor2);

    if (tamanho_vetor > tamanho_vetor2)
    {
        maior_array = tamanho_vetor;
    }
    else
    {
        maior_array = tamanho_vetor2;
    }

    int valores[tamanho_vetor], valores2[tamanho_vetor2], soma[maior_array];

    printf("Vetor 1: \n");
    for (int i = 0; i < tamanho_vetor; i++)
    {
        printf("%d: ", i);
        scanf("%d", &valores[i]);
    }

    printf("Vetor 2: \n");
    for (int i = 0; i < tamanho_vetor2; i++)
    {
        printf("%d: ", i);
        scanf("%d", &valores2[i]);
    }

    resultado = soma_arrays(&valores[0], &tamanho_vetor, &valores2[0], &tamanho_vetor2, &soma[0], &maior_array);

    printf("Resultado: %d\n", resultado);
    for (int i = 0; i < maior_array; i++)
    {
        printf("%d\n", soma[i]);
    }

    return 0;
}