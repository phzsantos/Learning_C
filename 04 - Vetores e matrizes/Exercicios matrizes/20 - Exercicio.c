#include <stdio.h>

int main()
{
	int i, j;
	double soma_colunas_impares, soma_segunda_quarta, media_segunda_quarta, valores[3][6];

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 6; j++)
		{
			printf("Posicao[%d][%d]: ", i, j);
			scanf("%lf", &valores[i][j]);
		}
	}

	soma_colunas_impares = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 1; j < 6; j+=2)
		{
			soma_colunas_impares += valores[i][j];
		}
	}

	printf("Soma das colunas impares: %.2lf\n", soma_colunas_impares);

	soma_segunda_quarta = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 2; j < 6; j+=2)
		{
			soma_segunda_quarta += valores[i][j];
		}
	}

	media_segunda_quarta = soma_segunda_quarta / 6;

	printf("Media elementos segunda e quarta coluna: %.2lf\n", media_segunda_quarta);

	for (i = 0; i < 3; i++)
	{
		valores[i][5] = valores[i][1] + valores[i][2];
	}

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 6; j++)
		{
			printf("%.2lf ", valores[i][j]);
		}
		printf("\n");
	}

	return 0;
}
