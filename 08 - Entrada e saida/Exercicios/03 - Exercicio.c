#include <stdio.h>

int main()
{
    FILE *arquivo;
    int contador;
    char caractere;

    arquivo = fopen("arq.txt", "r");

    contador = 0;
    while ((caractere = getc(arquivo)) != EOF)
    {
        if (caractere == 'a' || caractere == 'e' || caractere == 'i' || caractere == 'o' || caractere == 'u')
        {
            contador++;
        }
    }

    fclose(arquivo);

    printf("Total de vogais: %d\n", contador);

    return 0;
}