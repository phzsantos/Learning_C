#include <stdio.h>

int main()
{
	int i, j, k, l, f, d, g, incluir, vetor1[5], vetor2[5], soma[5], produto[5], diferenca[5], intersecao[5], uniao[10];

	for (i = 0; i < 5; i++)
	{
		printf("Posicao[%d]: ", i);
		scanf("%d", &vetor1[i]);
	}

	for (i = 0; i < 5; i++)
	{
		printf("Posicao[%d]: ", i);
		scanf("%d", &vetor2[i]);
	}

	for (i = 0; i < 5; i++)
	{
		soma[i] = vetor1[i] + vetor2[i];
	}

	for (i = 0; i < 5; i++)
	{
		produto[i] = vetor1[i] * vetor2[i];
	}

	k = 0;
	for (i = 0; i < 5; i++)
	{
		incluir = 1;
		for (j = 0; j < 5; j++)
		{
			if (vetor1[i] == vetor2[j])
			{
				incluir = 0;
			}
		}

		if (incluir)
		{
			diferenca[k] = vetor1[i];
			k++;
		}
	}

	l = 0;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (vetor1[i] == vetor2[j])
			{
				incluir = 1;
				for (f = 0; f < 5; f++)
				{
					if (vetor1[i] == intersecao[f])
					{
						incluir = 0;
					}
				}

				if (incluir)
				{
					intersecao[l] = vetor1[i];
					l++;
				}
			}
		}
	}

	d = 0;
	for (i = 0; i < 5; i++)
	{
		incluir = 1;
		for (j = 0; j < d; j++)
		{
			if (vetor1[i] == uniao[j])
			{
				incluir = 0;
			}
		}

		if (incluir)
		{
			uniao[d] = vetor1[i];
			d++;
		}
	}

	g = d;
	for (i = 0; i < 5; i++)
	{
		incluir = 1;
		for (j = 0; j < g; j++)
		{
			if (vetor2[i] == uniao[j])
			{
				incluir = 0;
			}
		}

		if (incluir)
		{
			uniao[g] = vetor2[i];
			g++;
		}
	}

	printf("Soma: ");
	for (i = 0; i < 5; i++)
	{
		printf("%d ", soma[i]);
	}

	printf("\nProduto: ");
	for (i = 0; i < 5; i++)
	{
		printf("%d ", produto[i]);
	}

	printf("\nDiferenca: ");
	for (i = 0; i < k; i++)
	{
		printf("%d ", diferenca[i]);
	}

	printf("\nInterseccao: ");
	for (i = 0; i < l; i++)
	{
		printf("%d ", intersecao[i]);
	}

	printf("\nUniao: ");
	for (i = 0; i < g; i++)
	{
		printf("%d ", uniao[i]);
	}

	return 0;
}
