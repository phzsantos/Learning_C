#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int data, dia_atual, mes_atual, ano_atual, posicao_do_primeiro_numero;
    char data_string[9], dia_string[3], nome_arquivo[30], linha[50];

    FILE* arquivo;

    printf("Arquivo: ");
    scanf("%s", &nome_arquivo);
    
    printf("Dia: ");
    scanf("%d", &dia_atual);
    printf("Mes: ");
    scanf("%d", &mes_atual);
    printf("Ano: ");
    scanf("%d", &ano_atual);

    arquivo = fopen(nome_arquivo, "r");

    if (arquivo)
    {
        while (!feof(arquivo))
        {
            fgets(linha, 50, arquivo);
            // char * splited = strtok(linha, " ");
            // while (splited != NULL)
            // {
            //     printf("%s\n", splited);
            //     splited = strtok(NULL, " ");
            // }
            // for (int i = 0; i < strlen(linha); i++)
            // {
            //     if (linha[i] == '0' ||
            //         linha[i] == '1' ||
            //         linha[i] == '2' ||
            //         linha[i] == '3' ||
            //         linha[i] == '4' ||
            //         linha[i] == '5' ||
            //         linha[i] == '6' ||
            //         linha[i] == '7' ||
            //         linha[i] == '8' ||
            //         linha[i] == '9')
            //     {
            //         posicao_do_primeiro_numero = i;
            //     }
            // }
            // data = atoi(&linha[posicao_do_primeiro_numero-7]);
            // printf("%d\n", data);

            // sprintf(data_string, "%d", data);

            // strcpy(dia_string, &data_string[1]);
            // printf("%s\n", dia_string);
        }
    }

    fclose(arquivo);

    return 0;
}