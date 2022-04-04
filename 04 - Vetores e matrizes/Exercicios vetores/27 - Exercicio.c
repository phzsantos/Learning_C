#include <stdio.h>

int main()
{
	int i, j, valores[10], divisores;

	for (i = 0; i < 10; i++)
	{
		printf("Posicao[%d]: ", i);
		scanf("%d", &valores[i]);
	}

	for (i = 0; i < 10; i++)
	{
		divisores = 0;
		for (j = 1; j <= valores[i]; j++)
		{
			if (valores[i] % j == 0)
			{
				divisores++;
			}
		}

		if (divisores == 2)
		{
			printf("Primo: %d\n", valores[i]);
			printf("Posicao: %d\n", i);
		}
	}

	return 0;
}
