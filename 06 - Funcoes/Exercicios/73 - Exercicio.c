#include <stdio.h>

typedef struct
{
    char sexo, cor_olhos, cor_cabelo;
    int idade;
} Pessoa;

void leitura_dados(Pessoa* pessoa)
{
    printf("Sexo (M-Masculino, F-Feminino): ");
    scanf(" %c", &pessoa->sexo);
    printf("Cor dos olhos (A-Azuis, C-Castanhos): ");
    scanf(" %c", &pessoa->cor_olhos);
    printf("Cor dos cabelos (L-Louros, P-Pretos, C-Castanhos): ");
    scanf(" %c", &pessoa->cor_cabelo);
    printf("Idade: ");
    scanf(" %d", &pessoa->idade);
}

double media_idade_olhos_castanhos_cabelo_preto(Pessoa* vetor)
{
    int soma, contador;
    double media;

    soma = 0;
    contador = 0;
    for (int i = 0; i < 5; i++)
    {
        if (vetor[i].cor_olhos == 'C' && vetor[i].cor_cabelo == 'P')
        {
            contador++;
            soma += vetor[i].idade;
        }
    }

    media = (double) soma/contador;

    return media;
}

int maior_idade(Pessoa* vetor)
{
    int maior_idade;

    maior_idade = vetor[0].idade;
    for (int i = 1; i < 5; i++)
    {
        if (vetor[i].idade > maior_idade)
        {
            maior_idade = vetor[i].idade;
        }
    }

    return maior_idade;
}

int loiras_entre_18_35(Pessoa* vetor)
{
    int contador;

    contador = 0;
    for (int i = 0; i < 5; i++)
    {
        if (vetor[i].sexo == 'F' && vetor[i].cor_olhos == 'A' && vetor[i].cor_cabelo == 'L' && vetor[i].idade > 18 && vetor[i].idade <= 35)
        {
            contador++;
        }
    }

    return contador;
}

int main()
{
    int maior, qtd_loiras_entre_18_35;
    double media;
    Pessoa vetor[5];

    for (int i = 0; i < 5; i++)
    {
        leitura_dados(&vetor[i]);
    }

    media = media_idade_olhos_castanhos_cabelo_preto(vetor);
    printf("Media olhos castanhos e cabelo preto: %.2lf\n", media);

    maior = maior_idade(vetor);
    printf("Maior idade: %d\n", maior);

    qtd_loiras_entre_18_35 = loiras_entre_18_35(vetor);
    printf("Quantidade de loiras de olhos azuis entre 18 e 35: %d\n", qtd_loiras_entre_18_35);

    return 0;
}