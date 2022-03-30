#include <stdio.h>

int main()
{
	int i;
	double valores1[5], valores2[5], soma;

	for (i = 0; i < 5; i++)
	{
		printf("Posicao[%d]: ", i);
		scanf("%lf", &valores1[i]);
	}

	for (i = 0; i < 5; i++)
	{
		printf("Posicao[%d]: ", i);
		scanf("%lf", &valores2[i]);
	}

	for (i = 0; i < 5; i++)
	{
		printf("Posicao[%d]: %.2lf\n", i, valores1[i]);
	}

	for (i = 0; i < 5; i++)
	{
		printf("Posicao[%d]: %.2lf\n", i, valores2[i]);
	}

	soma = 0;
	for (i = 0; i < 5; i++)
	{
		soma += valores1[i] * valores2[i];
	}

	printf("Produto escalar: %.2lf", soma);

	return 0;
}
