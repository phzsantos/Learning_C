#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *arquivo, *resultado;
    int maior;
    char *maior_cidade, linha[40], nome_arquivo_entrada[30], nome_arquivo_saida[30];

    printf("Arquivo de entrada: ");
    scanf("%s", &nome_arquivo_entrada);
    printf("Arquivo de saida: ");
    scanf("%s", &nome_arquivo_saida);

    arquivo = fopen(nome_arquivo_entrada, "r");

    if (arquivo)
    {
        resultado = fopen(nome_arquivo_saida, "w");

        maior_cidade = fgets(linha, 40, arquivo);
        maior = atoi(linha);
        while (!feof(arquivo))
        {
            fgets(linha, 40, arquivo);
            if (atoi(linha) > maior)
            {
                maior_cidade = fgets(linha, 40, arquivo);
                maior = atoi(linha);
            }
        }

        fputs(maior_cidade, resultado);

        printf("Arquivo gerado com sucesso.\n");

        fclose(arquivo);
        fclose(resultado);
    }
    else
    {
        printf("Arquivo nao existe :/\n");
    }

    return 0;
}