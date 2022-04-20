#include <stdio.h>

int main()
{
	int i, j, valores1[4][4], valores2[4][4], resultado[4][4];
	
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("Posicao[%d][%d]: ", i, j);
			scanf("%d", &valores1[i][j]);		
		}
	}

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("Posicao[%d][%d]: ", i, j);
			scanf("%d", &valores2[i][j]);		
		}
	}

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			if (valores1[i][j] > valores2[i][j])
			{
				resultado[i][j] = valores1[i][j];
			}
			else
			{
				resultado[i][j] = valores2[i][j];
			}
		}
	}

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%d ", resultado[i][j]);	
		}
		printf("\n");
	}

	return 0;
}
