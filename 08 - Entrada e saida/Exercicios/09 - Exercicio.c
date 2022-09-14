#include <stdio.h>

void escreve_no_arquivo(FILE *arquivo, FILE *resultado)
{
    char caractere;

    while ((caractere = getc(arquivo)) != EOF)
    {
        fputc(caractere, resultado);
    }
}

int main()
{
    FILE *primeiro, *segundo, *resultado;

    resultado = fopen("resultado.txt", "w");
    
    primeiro = fopen("arq.txt", "r");
    escreve_no_arquivo(primeiro, resultado);
    segundo = fopen("arq2.txt", "r");
    escreve_no_arquivo(segundo, resultado);

    fclose(primeiro);
    fclose(segundo);
    fclose(resultado);

    printf("Arquivo gerado com sucesso.\n");

    return 0;
}