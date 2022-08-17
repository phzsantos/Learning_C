#include <stdio.h>

void imprime_enderecos_vetor(float* vetor)
{
    for (int i = 0; i < 10; i++)
    {
        printf("%p\n", (vetor+i));
    }
}

int main()
{
    float vetor[10] = {1,2,3,4,5,6,7,8,9,10};

    imprime_enderecos_vetor(&vetor[0]);

    return 0;
}