#include <stdio.h>
#include <stdlib.h>

int main()
{
    int qtd, *vetor_dinamico, bytes;

    printf("Digite a quantidade de elementos: ");
    scanf("%d", &qtd);

    vetor_dinamico = (int *)malloc(qtd * sizeof(int));

    if(vetor_dinamico)
    {
        printf("A variavel 'vetor_dinamico' ocupa %ld bytes\n", qtd * sizeof(int));

        printf("Digite a quantidade de elementos: ");
        scanf("%d", &qtd);

        vetor_dinamico = (int *)realloc(vetor_dinamico, qtd * sizeof(int));

        if(vetor_dinamico)
        {
            printf("A variavel 'vetor_dinamico' ocupa %ld bytes\n", qtd * sizeof(int));
        }
        else
        {
            printf("Erro ao alocar memoria\n");
            return 1;
        }
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