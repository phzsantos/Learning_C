#include <stdio.h>

int main()
{
	int i, j, soma, valores[3][3];

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("Posicao[%d][%d]: ", i, j);
			scanf("%d", &valores[i][j]);
		}
	}

	j = 0;
	soma = 0;
	for (i = 2; i >= 0; i--)
	{
		soma += valores[i][j];
		j++;
	}

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d ", valores[i][j]);
		}
		printf("\n");
	}

	printf("Soma: %d", soma);

	return 0;
}
