#include <stdio.h>

void troca_valores(int* vetor, int valor)
{
    for (int i = 0; i < 5; i++)
    {
        *(vetor+i) = valor;
    }
}

int main()
{
    int valores[5] = {1,2,3,4,5};

    troca_valores(&valores[0], 3);

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", valores[i]);
    }

    return 0;
}