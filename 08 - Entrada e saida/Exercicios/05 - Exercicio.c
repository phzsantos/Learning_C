#include <stdio.h>

int main()
{
    FILE *arquivo;
    int contador;
    char caractere, caractere_escolhido;

    arquivo = fopen("arq.txt", "r");

    printf("Caractere: ");
    scanf("%c", &caractere_escolhido);

    contador = 0;
    while ((caractere = getc(arquivo)) != EOF)
    {
        if (caractere == caractere_escolhido)
        {
            contador++;
        }
    }

    fclose(arquivo);

    printf("Quantidade de vezes que %c apareceu: %d\n", caractere_escolhido, contador);

    return 0;
}