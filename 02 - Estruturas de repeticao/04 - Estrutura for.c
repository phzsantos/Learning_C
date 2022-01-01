#include <stdio.h>

int main()
{
	int soma = 0, i, numero;

	for (i = 0; i < 5; i++)
	{
		printf("Informe um numero: ");
		scanf("%d", &numero);

		soma = soma + numero;
	}

	printf("A soma e: %d", soma);

	return 0;
}
