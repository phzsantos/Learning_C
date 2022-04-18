#include <stdio.h>

int main()
{
	int i, j, valores[5][5];

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (j == i)
			{
				valores[i][j] = 1;
			}
			else
			{
				valores[i][j] = 0;
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

	return 0;
}
