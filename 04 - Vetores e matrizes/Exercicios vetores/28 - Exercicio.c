#include <stdio.h>

int main()
{
	int i, j, k, valores[10], pares[10], impares[10];

	for (i = 0; i < 10; i++)
	{
		printf("Posicao[%d]: ", i);
		scanf("%d", &valores[i]);
	}

	j = 0;
	k = 0;
	for (i = 0; i < 10; i++)
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

	printf("Impares: ");
	for (i = 0; i < j; i++)
	{
		printf("%d ", impares[i]);
	}

	printf("\nPares: ");
	for (i = 0; i < k; i++)
	{
		printf("%d ", pares[i]);
	}

	return 0;
}
