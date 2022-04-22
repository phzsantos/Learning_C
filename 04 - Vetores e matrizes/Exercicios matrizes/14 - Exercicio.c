#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, j, k, l, numero, incluir, valores[5][5];

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			do
			{
				incluir = 1;
				numero = (rand() % 99);

				for (k = 0; k < 5; k++)
				{
					for (l = 0; l < 5; l++)
					{
						if (numero == valores[k][l])
						{
							incluir = 0;
						}
					}
				}
			} while (incluir == 0);

			valores[i][j] = numero;
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

	return 0;
}
