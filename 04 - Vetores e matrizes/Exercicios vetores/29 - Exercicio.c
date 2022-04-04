#include <stdio.h>

int main()
{
	int i, j, k, valores[6], pares[6], soma_pares, impares[6];

	for (i = 0; i < 6; i++)
	{
		printf("Posicao[%d]: ", i);
		scanf("%d", &valores[i]);
	}

	j = 0;
	k = 0;
	for (i = 0; i < 6; i++)
	{
		if (valores[i] % 2)
		{
			impares[j] = valores[i];
			j++;
		}
		else
		{
			pares[k] = valores[i];
			k++;
		}
	}

	soma_pares = 0;
	for (i = 0; i < k; i++)
	{
		soma_pares += pares[i];
	}

	printf("Pares: ");
	for (i = 0; i < k; i++)
	{
		printf("%d ", pares[i]);
	}

	printf("\nSoma dos numeros pares: %d\n", soma_pares);

	printf("Impares: ");
	for (i = 0; i < j; i++)
	{
		printf("%d ", impares[i]);
	}

	printf("\nQuantidade de impares digitados: %d", j);

	return 0;
}
