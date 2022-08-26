#include <stdio.h>

void le_variaveis(double* variavel, double* variavel2)
{
    printf("Nota 1: ");
    scanf("%lf", variavel);

    printf("Nota 2: ");
    scanf("%lf", variavel2);
}

void media_simples_e_ponderada(double* media, double* media_ponderada, double* nota, double* nota2)
{
    *(media) = (*(nota) + *(nota2)) / 2;
    *(media_ponderada) = (*(nota) + *(nota2) * 2) / 3;
}

int main()
{
    double nota, nota2, media, media_ponderada;

    le_variaveis(&nota, &nota2);
    media_simples_e_ponderada(&media, &media_ponderada, &nota, &nota2);

    printf("Media: %.2lf\n", media);
    printf("Media ponderada: %.2lf\n", media_ponderada);

    return 0;
}