#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero = 9;

    printf("A variavel 'numero' vale %d e ocupa %ld bytes\n", numero, sizeof(numero));

    int numeros[3];
    numeros[0] = 55;
    numeros[1] = 43;
    numeros[2] = 2;

    printf("O array 'numeros' vale %d, %d e %d e ocupa %ld bytes\n", numeros[0], numeros[1], numeros[2], sizeof(numeros));

    for(int i = 0; i < 3; i++)
    {
        printf("Informe o valor para a posicao do array %d do vetor: ", i);
        scanf("%d", &numeros[i]);
    }

    for(int i = 0; i < 3; i++)
    {
        printf("O valor do array na posicao %d e %d\n", i, numeros[i]);
    }

    printf("A variavel 'numeros' ocupa %ld bytes\n", sizeof(numeros));

    int qtd, *vetor_dinamico, bytes;

    printf("Informe a quantidade de elementos para o vetor: ");
    scanf("%d", &qtd);

    bytes = qtd * sizeof(int);

    vetor_dinamico = (int *) malloc(bytes);

    for(int i = 0; i < qtd; i++)
    {
        printf("Informe o valor para a posicao %d do vetor: ", i);
        scanf("%d", &vetor_dinamico[i]);
    }

    for(int i = 0; i < qtd; i++)
    {
        printf("O valor do vetor na posicao %d e %d\n", i, vetor_dinamico[i]);
    }

    printf("A variavel 'vetor_dinamico' ocupa %d bytes\n", bytes);

    free(vetor_dinamico); // Libera a memoria alocada
    vetor_dinamico = NULL; // Medida de seguranca

    return 0;
}