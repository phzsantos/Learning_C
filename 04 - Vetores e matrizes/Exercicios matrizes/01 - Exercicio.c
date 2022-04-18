#include <stdio.h>

int main()
{
	int i, j, valores[4][4], maiores_que_dez;

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("Posicao[%d][%d]: ", i, j);
			scanf("%d", &valores[i][j]);
		}
	}

	maiores_que_dez = 0;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			if (valores[i][j] > 10)
			{
				maiores_que_dez++;
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

	printf("Valores maiores que dez: %d", maiores_que_dez);

	return 0;
}
