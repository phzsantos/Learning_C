#include <stdio.h>

int ordena_valores(int* vetor)
{
    int troca, passo;

    for (int i = 1; i < 3; i++)
    {
        troca = *(vetor+i);
        passo = i - 1;

        while (troca < *(vetor+passo) && passo >= 0)
        {
            *(vetor+passo+1) = *(vetor+passo);
            passo--;
        }

        *(vetor+passo+1) = troca;
    }

    if (*(vetor) == *(vetor+1) && *(vetor+1) == *(vetor+2))
    {
        return 1;
    }

    return 0;
}

int main()
{
    int valores[3], resultado;

    for (int i = 0; i < 3; i++)
    {
        printf("%d: ", i);
        scanf("%d", &valores[i]);
    }

    resultado = ordena_valores(&valores[0]);

    printf("Resultado: %d\n", resultado);
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", valores[i]);
    }

    return 0;
}