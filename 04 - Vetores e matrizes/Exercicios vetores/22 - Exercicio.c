#include <stdio.h>

int main()
{
	int i, j, k, valores1[10], valores2[10], resultante[20];

	for (i = 0; i < 10; i++)
	{
		printf("Posicao[%d]: ", i);
		scanf("%d", &valores1[i]);
	}

	for (i = 0; i < 10; i++)
	{
		printf("Posicao[%d]: ", i);
		scanf("%d", &valores2[i]);
	}

	j = 0;
	k = 0;
	for (i = 0; i < 20; i++)
	{
		if (i % 2 == 0)
		{
			resultante[i] = valores1[j];
			j++;
		}
		else
		{
			resultante[i] = valores2[k];
			k++;
		}
	}

	for (i = 0; i < 20; i++)
	{
		printf("Posicao[%d]: %d\n", i, resultante[i]);
	}

	return 0;
}
