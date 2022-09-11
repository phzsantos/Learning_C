#include <stdio.h>

int main()
{
    FILE *arquivo, *criado;
    char caractere;

    arquivo = fopen("arq.txt", "r");
    criado = fopen("resultado.txt", "w");

    while ((caractere = getc(arquivo)) != EOF)
    {        
        if (caractere == 'a' || caractere == 'e' || caractere == 'i' || caractere == 'o' || caractere == 'u')
        {
            caractere = '*';
        }

        fputc(caractere, criado);
    }

    fclose(arquivo);
    fclose(criado);

    printf("Terminou.\n");

    return 0;
}