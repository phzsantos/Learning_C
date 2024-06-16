#include <stdio.h>
#include <stdlib.h>

int main()
{
    int qtd = 3, *vetor_dinamico, bytes;

    //vetor_dinamico = (int *)malloc(qtd * sizeof(int)); // nao remove o lixo de memoria
    vetor_dinamico = (int *) calloc(qtd, sizeof(int)); // remove o lixo de memoria

    if(vetor_dinamico)
    {
        printf("A variavel 'vetor_dinamico' ocupa %ld bytes\n", qtd * sizeof(int));
        printf("Valor de vetor_dinamico[0] = %d\n", vetor_dinamico[0]);
        printf("Valor de vetor_dinamico[1] = %d\n", vetor_dinamico[1]);
        printf("Valor de vetor_dinamico[2] = %d\n", vetor_dinamico[2]);
    }
    else
    {
        printf("Erro ao alocar memoria\n");
        return 1;
    }

    free(vetor_dinamico); // Libera a memoria alocada
    vetor_dinamico = NULL; // Medida de seguranca

    return 0;
}