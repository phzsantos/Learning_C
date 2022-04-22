#include <stdio.h>

int main()
{
	int i, j, k, valores[4][4];

	k = 1;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			valores[i][j] = k;
			k++;
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

	for (i = 0; i < 4; i++)
	{
		for (j = i+1; j < 4; j++)
		{
			valores[i][j] = 0;
		}
	}

	printf("\n");
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%d ", valores[i][j]);
		}
		printf("\n");
	}

	return 0;
}
