#include <stdio.h>

int main()
{
	int i, j, maior, linha_maior, coluna_maior, valores[4][4];

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("Posicao[%d][%d]: ", i, j);
			scanf("%d", &valores[i][j]);
		}
	}

	maior = valores[0][0];
	linha_maior = 0;
	coluna_maior = 0;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			if (valores[i][j] > maior)
			{
				maior = valores[i][j];
				linha_maior = i;
				coluna_maior = j;
			}
		}
	}

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%d ", valores[i][j]);
		}
		printf("\n");
	}
	printf("Posicao maior: Linha %d Coluna %d", linha_maior, coluna_maior);

	return 0;
}
