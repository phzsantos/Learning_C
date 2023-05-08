#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    int i, ano_atual, ano, idade;
    char nome_arquivo[30], linha[50], nome[40], frase[30];

    FILE* arquivo;
    FILE* arquivo_saida;

    printf("Arquivo: ");
    scanf("%s", nome_arquivo);
    
    printf("Ano: ");
    scanf("%d", &ano_atual);

    arquivo = fopen(nome_arquivo, "r");
    arquivo_saida = fopen("resultado.txt", "w");

    if (arquivo && arquivo_saida)
    {
        while (fgets(linha, 50, arquivo) != NULL)
        {
            for (i = 0; !isdigit(linha[i]); i++)
            {
                nome[i] = linha[i];
            }
            nome[i] = '\0';

            sscanf(&linha[i], "%d", &ano);

            idade = ano_atual - ano;

            if (idade > 18)
            {
                strcpy(frase, "maior de idade");
            }
            else if (idade == 18)
            {
                strcpy(frase, "entrando na maior idade");
            }
            else
            {
                strcpy(frase, "menor de idade");
            }

            fprintf(arquivo_saida, "%s%s\n", nome, frase);
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