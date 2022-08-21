#include <stdio.h>

void imprime_vetor(int* vetor)
{
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", *(vetor+i));
    }
}

int main()
{
    int valores[5] = {1,2,3,4,5};

    imprime_vetor(&valores[0]);

    return 0;
}