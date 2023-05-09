#include <stdio.h>
#include <ctype.h>

int main()
{
    int i, preco, centavos;
    double total_da_compra, total_centavos;
    char linha[50], nome[40];

    FILE *arquivo;

    arquivo = fopen("compras.txt", "r");

    total_da_compra = 0;
    while (fgets(linha, 50, arquivo) != NULL)
    {
        for (i = 0; !isdigit(linha[i]); i++)
        {
            nome[i] = linha[i];
        }
        nome[i] = '\0';

        sscanf(&linha[i], "%d, %d", &preco, &centavos);

        total_da_compra += preco;
        total_centavos += centavos;
    }

    fclose(arquivo);

    total_da_compra += total_centavos / 100;

    printf("Total da compra: %.2lf\n", total_da_compra);

    return 0;
}