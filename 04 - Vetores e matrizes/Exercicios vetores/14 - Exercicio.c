#include <stdio.h>

int main()
{
	int i, j, k, l, valores[10], repetidos[5], incluir;

	for (i = 0; i < 10; i++)
	{
		printf("Posicao[%d]: ", i);
		scanf("%d", &valores[i]);
	}

	l = 0;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			incluir = 1;
			if (valores[i] == valores[j] && i != j)
			{
				for (k = 0; k < 5; k++)
				{
					if (valores[i] == repetidos[k])
					{
						incluir = 0;
					}
				}
				if (incluir)
				{
					repetidos[l] = valores[i];
					l++;
				}
			}
		}
	}

	printf("Repetidos: ");
	for (i = 0; i < l; i++)
	{
		printf("%d ", repetidos[i]);
	}

	return 0;
}
