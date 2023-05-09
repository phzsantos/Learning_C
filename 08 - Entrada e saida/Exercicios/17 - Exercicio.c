#include <stdio.h>

int main()
{
    int i, j, linhas, colunas, quantidades_de_posicoes_anuladas;

    FILE *arquivo;

    printf("Digite o numero de linhas: ");
    scanf("%d", &linhas);
    printf("Digite o numero de colunas: ");
    scanf("%d", &colunas);
    printf("Digite a quantidade de posicoes a serem anuladas: ");
    scanf("%d", &quantidades_de_posicoes_anuladas);

    int matriz[linhas][colunas], posicoes_anuladas[quantidades_de_posicoes_anuladas*2];

    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
        {
            matriz[i][j] = 1;
        }
    }

    for (i = 0; i < quantidades_de_posicoes_anuladas*2; i++)
    {
        if (i % 2 == 0)
        {
            printf("Digite a linha a ser anulada: ");
        }
        else
        {
            printf("Digite a coluna a ser anulada: ");
        }

        scanf("%d", &posicoes_anuladas[i]);
    }

    for (i = 0; i < quantidades_de_posicoes_anuladas*2; i+=2)
    {
        matriz[posicoes_anuladas[i]][posicoes_anuladas[i+1]] = 0;
    }

    arquivo = fopen("matriz_saida.txt", "w");

    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
        {
            fprintf(arquivo, "%d ", matriz[i][j]);
        }
        fprintf(arquivo, "\n");
    }

    fclose(arquivo);

    return 0;
}