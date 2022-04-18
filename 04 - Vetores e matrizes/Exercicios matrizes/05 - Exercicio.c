#include <stdio.h>

int main()
{
	int i, j, x, encontrou, linha, coluna, valores[5][5];

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("Posicao[%d][%d]: ", i, j);
			scanf("%d", &valores[i][j]);
		}
	}

	printf("Valor a ser buscado: ");
	scanf("%d", &x);

	encontrou = 0;
	linha = 0;
	coluna = 0;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (valores[i][j] == x)
			{
				encontrou = 1;
				linha = i;
				coluna = j;
			}
		}
	}

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%d ", valores[i][j]);
		}
		printf("\n");
	}

	if (encontrou)
	{
		printf("Linha: %d, coluna: %d", linha, coluna);
	}
	else
	{
		printf("Nao encontrado");
	}

	return 0;
}
