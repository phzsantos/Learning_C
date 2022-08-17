#include <stdio.h>

void imprime_dobro_vetor(int* vetor)
{
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", *(vetor+i) * 2);
    }
}

int main()
{
    int vetor[5] = {1,2,3,4,5};
    
    imprime_dobro_vetor(&vetor[0]);

    return 0;
}