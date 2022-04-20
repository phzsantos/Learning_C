#include <stdio.h>

int main()
{
	int i, j, k, l, valores[3][3], transposta[3][3];

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
		l = 0;
		for (j = 0; j < 3; j++)
		{
			transposta[i][j] = valores[l][k];
			l++;
		}
		k++;
	}

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d ", transposta[i][j]);
		}
		printf("\n");
	}

	return 0;
}
