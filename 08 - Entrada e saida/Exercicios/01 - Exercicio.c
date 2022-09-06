#include <stdio.h>

int main()
{
    FILE *arquivo;
    char frase[100], caractere;

    arquivo = fopen("arq.txt", "a");

    if (arquivo)
    {
        do
        {
            fputs(frase, arquivo);
            printf("Escreva o caractere: ");
            fgets(frase, 100, stdin);
        } 
        while (frase[0] != '0');
    }
    else
    {
        printf("Nao foi possivel criar o arquivo.\n");
    }

    fclose(arquivo);


    arquivo = fopen("arq.txt", "r");

    if (arquivo)
    {
        while ((caractere = getc(arquivo)) != EOF)
        {
            printf("%c", caractere);
        }
    }

    fclose(arquivo);

    return 0;
}