#include <stdio.h>

int main()
{
	int i, j, k, l, incluir, vetor1[10], vetor2[10], repetidos[10];

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
		for (j = 0; j < 10; j++)
		{
			if (vetor1[i] == vetor2[j])
			{
				incluir = 1;
				for (k = 0; k < 10; k++)
				{
					if (vetor1[i] == repetidos[k])
					{
						incluir = 0;
					}
				}
				if (incluir)
				{
					repetidos[l] = vetor1[i];
					l++;
				}
			}
		}
	}

	printf("Interseccao: ");
	for (i = 0; i < l; i++)
	{
		printf("%d ", repetidos[i]);
	}

	return 0;
}
