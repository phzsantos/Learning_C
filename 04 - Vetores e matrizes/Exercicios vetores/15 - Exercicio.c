#include <stdio.h>

int main()
{
	int i, j, k, l, valores[20], repetidos[10], incluir, nao_repetidos[20];

	for (i = 0; i < 20; i++)
	{
		printf("Posicao[%d]: ", i);
		scanf("%d", &valores[i]);
	}

	l = 0;
	for (i = 0; i < 20; i++)
	{
		for (j = 0; j < 20; j++)
		{
			incluir = 1;
			if (valores[i] == valores[j] && i != j)
			{
				for (k = 0; k < 10; k++)
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

	l = 0;
	for (i = 0; i < 20; i++)
	{
		incluir = 1;
		for (k = 0; k < 10; k++)
		{
			if (valores[i] == repetidos[k])
			{
				incluir = 0;
			}
		}
		if (incluir)
		{
			nao_repetidos[l] = valores[i];
			l++;
		}
	}

	printf("Nao repetidos: ");
	for (i = 0; i < l; i++)
	{
		printf("%d ", nao_repetidos[i]);
	}

	return 0;
}
