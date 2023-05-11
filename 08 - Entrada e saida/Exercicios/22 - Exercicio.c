#include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef struct 
{
    char nome[40];
    int notas[3];
} 
Aluno;

int main() 
{
    int i, j;
    double temp;
    char nome_arquivo_entrada[40], nome_arquivo_saida[40], nome[40], linha[50];

    Aluno aluno;

    FILE *arquivo_entrada, *arquivo_saida;

    printf("Digite o nome do arquivo de entrada: ");
    scanf("%s", nome_arquivo_entrada);

    printf("Digite o nome do arquivo de saída: ");
    scanf("%s", nome_arquivo_saida);

    arquivo_entrada = fopen(nome_arquivo_entrada, "r");
    arquivo_saida = fopen(nome_arquivo_saida, "w");

    while (fgets(linha, 50, arquivo_entrada) != NULL)
    {
        for (i = 0; !isdigit(linha[i]); i++)
        {
            nome[i] = linha[i];
        }
        nome[i] = '\0';

        sscanf(&linha[i], "%d %d %d", &aluno.notas[0], &aluno.notas[1], &aluno.notas[2]);

        for (i = 0; i < 3-1; i++)
        {
            for (j = 0; j < 3-i-1; j++)
            {
                if (aluno.notas[j] > aluno.notas[j+1])
                {
                    temp = aluno.notas[j];
                    aluno.notas[j] = aluno.notas[j+1];
                    aluno.notas[j+1] = temp;
                }
            }
        }

        fprintf(arquivo_saida, "%s%d %d %d\n", nome, aluno.notas[0], aluno.notas[1], aluno.notas[2]);
    }

    fclose(arquivo_entrada);
    fclose(arquivo_saida);
    
    return 0;
}