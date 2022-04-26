#include <stdio.h>

int main()
{
	int i, j, k, valores[3][3], soma[3];

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("Posicao[%d][%d]: ", i, j);
			scanf("%d", &valores[i][j]);
		}
	}

	k = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			soma[i] += valores[j][k];
		}
		k++;
	}

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d ", valores[i][j]);
		}
		printf("\n");
	}

	printf("Soma vertical: ");
	for (i = 0; i < 3; i++)
	{
		printf("%d ", soma[i]);
	}

	return 0;
}
