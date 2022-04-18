#include <stdio.h>

int main()
{
	int i, j, valores[4][4];

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			valores[i][j] = i * j;
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

	return 0;
}
