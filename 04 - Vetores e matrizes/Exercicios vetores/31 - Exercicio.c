#include <stdio.h>

int main()
{
	int i, j, k, l, incluir, vetor1[10], vetor2[10], uniao[20];

	for (i = 0; i < 10; i++)
	{
		printf("Posicao[%d]: ", i);
		scanf("%d", &vetor1[i]);
	}

	for (i = 0; i < 10; i++)
	{
		printf("Posicao[%d]: ", i);
		scanf("%d", &vetor2[i]);
	}

	l = 0;
	for (i = 0; i < 10; i++)
	{
		incluir = 1;
		for (j = 0; j < l; j++)
		{
			if (vetor1[i] == uniao[j])
			{
				incluir = 0;
			}
		}

		if (incluir)
		{
			uniao[l] = vetor1[i];
			l++;
		}
	}

	k = l;
	for (i = 0; i < 10; i++)
	{
		incluir = 1;
		for (j = 0; j < k; j++)
		{
			if (vetor2[i] == uniao[j])
			{
				incluir = 0;
			}
		}

		if (incluir)
		{
			uniao[k] = vetor2[i];
			k++;
		}
	}

	printf("Uniao: ");
	for (i = 0; i < k; i++)
	{
		printf("%d ", uniao[i]);
	}

	return 0;
}
