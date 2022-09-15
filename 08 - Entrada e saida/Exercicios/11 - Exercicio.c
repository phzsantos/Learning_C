#include <stdio.h>
#include <string.h>

int main()
{
    FILE *arquivo;
    char linha[100], caractere, nome_arquivo_entrada[30], palavra[30];
    int igual, contador;

    printf("Nome do arquivo: ");
    scanf("%s", &nome_arquivo_entrada);

    printf("Palavra: ");
    scanf("%s", &palavra);

    arquivo = fopen(nome_arquivo_entrada, "r");

    if (arquivo)
    {
        contador = 0;
        while ((caractere = getc(arquivo)) != EOF)
        {
            if (caractere == palavra[0])
            {
                fgets(linha, strlen(palavra), arquivo);
                for (int i = 1; i < strlen(palavra); i++)
                {
                    igual = 1;
                    if (linha[i-1] != palavra[i])
                    {
                        igual = 0;
                        break;
                    }
                }

                if (igual)
                {
                    contador++;
                }
            }
        }

        printf("Quantidade de vezes que %s aparece: %d", palavra, contador);

        fclose(arquivo);
    }
    else
    {
        printf("Arquivo nao existe :/\n");
    }
    
    return 0;
}