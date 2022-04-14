#include <stdio.h>

int main()
{
	int i, j, posicao_menor;
	double menor, valores[10], ordenado[10];

	for (i = 0; i < 10; i++)
	{
		printf("Posicao[%d]: ", i);
		scanf("%lf", &valores[i]);
	}

	for (i = 0; i < 10; i++)
	{
		menor = valores[i];
		for (j = i+1; j < 10; j++)
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

		ordenado[i] = menor;
	}

	printf("Vetor ordenado: ");
	for (i = 0; i < 10; i++)
	{
		printf("%.2lf ", ordenado[i]);
	}

	return 0;
}
