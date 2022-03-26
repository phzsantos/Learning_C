#include <stdio.h>

int main()
{
	int i;
	double valores[10], quadrados[10];

	for (i = 0; i < 10; i++)
	{
		printf("Posicao[%d]: ", i);
		scanf("%lf", &valores[i]);
	}

	for (i = 0; i < 10; i++)
	{
		quadrados[i] = valores[i] * valores[i];
	}

	for (i = 0; i < 10; i++)
	{
		printf("Posicao[%d]: %.2lf\n", i, quadrados[i]);
	}

	return 0;
}
