#include <stdio.h>

int main()
{
	int i;
	double valores[10], soma;

	for (i = 0; i < 10; i++)
	{
		printf("Digite um numero: ");
		scanf("%lf", &valores[i]);
	}

	soma = 0;
	for (i = 0; i < 10; i++)
	{
		soma = soma + valores[i];
	}

	printf("Soma: %.2lf", soma);

	return 0;
}
