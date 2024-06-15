#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// atof - converte uma string para um valor double
// atoi - converte uma string para um valor inteiro
// atol - converte uma string para um valor longo
// rand - gera um número aleatório
// srand - inicializa o gerador de números aleatórios
// malloc - aloca memória
// calloc - aloca memória e inicializa com 0
// realloc - realoca memória
// free - libera memória
// qsort - ordena um vetor
// abs - retorna o valor absoluto
// div - retorna o quociente e o resto da divisão

int compare(int *x, int *y) 
{
    if (*x > *y) 
    {
        return 1;
    } 
    else if (*x == *y) 
    {
        return 0;
    } 
    else
    {
        return -1;
    }
}

int main() 
{
    char valor_s[5];
    char valor_s_li[300];
    double valor_d;
    int valor_i;
    long int valor_li;

    strcpy(valor_s, "4.a");

    valor_d = atof(valor_s);

    printf("Valor double: %.2f\n", valor_d);

    valor_i = atoi(valor_s);

    printf("Valor inteiro: %d\n", valor_i);

    strcpy(valor_s_li, "321312312312331");

    valor_li = atol(valor_s_li);

    printf("Valor longo: %ld\n", valor_li);

    time_t t;

    srand((unsigned) time(&t));

    for (int i = 0; i < 6; i++) 
    {
        printf("Número aleatório: %d\n", rand() % 61);
    }

    int numeros[] = {6, 2, 9, 3, 7, 1, 5};

    for (int i = 0; i < 7; i++) 
    {
        printf("Número: %d\n", numeros[i]);
    }

    qsort(numeros, 7, sizeof(int), (void *)compare);

    for (int i = 0; i < 7; i++) 
    {
        printf("Número ordenado: %d\n", numeros[i]);
    }

    int valor_a, valor_b;
    
    valor_a = abs(5);
    printf("Valor absoluto de 5: %d\n", valor_a);

    valor_b = abs(-5);
    printf("Valor absoluto de -5: %d\n", valor_b);

    div_t saida;

    saida = div(27, 4);
    printf("Quociente: %d\n", saida.quot);
    printf("Resto: %d\n", saida.rem);

    saida = div(27, 3);
    printf("Quociente: %d\n", saida.quot);
    printf("Resto: %d\n", saida.rem);

    return 0;
}