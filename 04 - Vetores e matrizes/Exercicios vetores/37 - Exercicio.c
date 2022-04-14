#include <stdio.h>

int main()
{
	int i, j, k, posicao_menor, menor, valores[11], ordenado[11];

	for (i = 0; i < 11; i++)
	{
		printf("Posicao[%d]: ", i);
		scanf("%d", &valores[i]);
	}

	k = 10;
	for (i = 0; i < 11; i++)
	{
		menor = valores[i];
		for (j = i+1; j < 11; j++)
		{
			if (valores[j] < menor)
			{
				menor = valores[j];
				posicao_menor = j;
			}
		}

		if (valores[i] != menor)
		{
			valores[posicao_menor] = valores[i];
		}

		if (i < 5)
		{
			ordenado[i] = menor;
		}
		else
		{
			ordenado[k] = menor;
			k--;
		}
	}

	printf("Vetor ordenado: ");
	for (i = 0; i < 11; i++)
	{
		printf("%d ", ordenado[i]);
	}

	return 0;
}
