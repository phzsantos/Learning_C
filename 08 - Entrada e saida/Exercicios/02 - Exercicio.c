#include <stdio.h>

int main()
{
    FILE *arquivo;
    int contador;
    char caractere;

    arquivo = fopen("arq.txt", "r");

    contador = 1;
    if (arquivo)
    {
        while ((caractere = getc(arquivo)) != EOF)
        {
            if (caractere == '\n')
            {
                contador++;
            }
        }
    }

    fclose(arquivo);

    printf("Quantidade de linhas: %d\n", contador);

    return 0;
}