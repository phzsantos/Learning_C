#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *arquivo, *resultado;
    char caractere, nome_arquivo[30];

    printf("Nome do arquivo: ");
    scanf("%s", &nome_arquivo);

    arquivo = fopen(nome_arquivo, "r");

    if (arquivo)
    {
        resultado = fopen("resultado.txt", "w");

        while ((caractere = getc(arquivo)) != EOF)
        {
            fputc(toupper(caractere), resultado);
        }

        fclose(arquivo);
        fclose(resultado);
    }
    else
    {
        printf("Arquivo nao existe :/\n");
    }

    return 0;
}