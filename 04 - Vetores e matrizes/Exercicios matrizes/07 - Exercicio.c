#include <stdio.h>

int main()
{
	int i, j, valores[10][10];

	for	(i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			printf("Posicao[%d][%d]: ", i, j);
			scanf("%d", &valores[i][j]);
		}
	}

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (i < j)
			{
				valores[i][j] = 2 * i + 7 * j - 2;
			}
			else if (i > j)
			{
				valores[i][j] = 4 * (i * i * i) - 5 * (j * j) + 1;
			}
			else
			{
				valores[i][j] = 3 * (i * i) - 1;
			}
		}
	}

	for	(i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			printf("%d ", valores[i][j]);
		}
		printf("\n");
	}

	return 0;
}
