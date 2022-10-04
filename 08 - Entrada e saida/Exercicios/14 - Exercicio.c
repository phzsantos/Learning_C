#include <stdio.h>

int main()
{
    int dia, mes, ano;
    char nome_arquivo[30], linha[50];

    FILE* arquivo;

    printf("Arquivo: ");
    scanf("%s", &nome_arquivo);

    arquivo = fopen(nome_arquivo, "r");

    printf("Dia: ");
    scanf("%d", &dia);
    printf("Mes: ");
    scanf("%d", &mes);
    printf("Ano: ");
    scanf("%d", &ano);

    if (arquivo)
    {

    }

    fclose(arquivo);

    return 0;
}