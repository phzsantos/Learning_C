#include <stdio.h>

int converte_em_binario(int numero)
{
    int i, binario;

    binario = 0;
    for (i = 1; numero > 0; i *= 10)
    {
        binario += (numero % 2) * i;
        numero /= 2;
    }

    return binario;
}

int main()
{
    int i, numeros[10];

    FILE* arquivo;

    arquivo = fopen("numeros_em_binario.txt", "w");

    for (i = 0; i < 10; i++)
    {
        printf("Digite o %d numero: ", i+1);
        scanf("%d", &numeros[i]);
    }

    for (i = 0; i < 10; i++)
    {
        fprintf(arquivo, "%d\n", converte_em_binario(numeros[i]));
    }

    fclose(arquivo);

    return 0;
}