#include <stdio.h>

int main()
{
    FILE *arquivo;
    int contador_vogais, contador_consoantes;
    char caractere;

    arquivo = fopen("arq.txt", "r");

    contador_vogais = 0;
    contador_consoantes = 0;
    while ((caractere = getc(arquivo)) != EOF)
    {
        if (caractere == 'a' || caractere == 'e' || caractere == 'i' || caractere == 'o' || caractere == 'u')
        {
            contador_vogais++;
        }
        else
        {
            if (caractere != '\n')
            {
                contador_consoantes++;
            }
        }
    }

    fclose(arquivo);

    printf("Total de vogais: %d\n", contador_vogais);
    printf("Total de consoantes: %d\n", contador_consoantes);

    return 0;
}