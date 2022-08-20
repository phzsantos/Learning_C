#include <stdio.h>

void imprime_endereco_valores_pares(int* vetor)
{
    for (int i = 0; i < 5; i++)
    {
        if (*(vetor+i) % 2 == 0)
        {
            printf("%p\n", (vetor+i));
        }
    }
}

int main()
{
    int valores[5];

    for (int i = 0; i < 5; i++)
    {
        printf("%d: ", i);
        scanf("%d", &valores[i]);
    }

    imprime_endereco_valores_pares(&valores[0]);

    return 0;
}