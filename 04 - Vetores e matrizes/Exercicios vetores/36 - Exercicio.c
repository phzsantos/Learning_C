#include <stdio.h>

int main()
{
	int i, j, valores[10], ordenado[10], menor;

	for (i = 0; i < 10; i++)
	{
		printf("Posicao[%d]: ", i);
		scanf("%d", &valores[i]);
	}

	for (i = 0; i < 10; i++)
	{
		menor = valores[i];
		for (j = i+1; j < 10; j++)
		{
			if (valores[j] < menor)
			{
				menor = valores[j];

				if (j-1 == i)
				{
					valores[i+1] = valores[i];
				}
			}
		}

		ordenado[i] = menor;
	}

	printf("Vetor ordenado: ");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", ordenado[i]);
	}

	return 0;
}
