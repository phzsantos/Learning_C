#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    int i, dia_atual, mes_atual, ano_atual, dia, mes, ano, idade;
    char nome_arquivo[30], linha[50], nome[30];

    FILE* arquivo;
    FILE* arquivo_saida;

    printf("Arquivo: ");
    scanf("%s", nome_arquivo);
    
    printf("Dia: ");
    scanf("%d", &dia_atual);
    printf("Mes: ");
    scanf("%d", &mes_atual);
    printf("Ano: ");
    scanf("%d", &ano_atual);

    arquivo = fopen(nome_arquivo, "r");
    arquivo_saida = fopen("idades.txt", "w");

    if (arquivo && arquivo_saida)
    {
        while (fgets(linha, 50, arquivo) != NULL)
        {
            for (i = 0; !isdigit(linha[i]); i++)
            {
                nome[i] = linha[i];
            }
            nome[i] = '\0';

            sscanf(&linha[i], "%d %d %d", &dia, &mes, &ano);

            idade = ano_atual - ano;

            if (mes > mes_atual || (mes == mes_atual && dia > dia_atual))
            {
                idade--;
            }

            fprintf(arquivo_saida, "%s %d\n", nome, idade);
        }
        fclose(arquivo_saida);
    }
    else
    {
        printf("Erro ao abrir o arquivo!\n");
    }

    fclose(arquivo);

    return 0;
}