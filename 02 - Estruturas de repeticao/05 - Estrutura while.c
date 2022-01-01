#include <stdio.h>

int main()
{
	int numero, soma = 0;

	printf("Informe um numero: ");
	scanf("%d", &numero);

	while (numero != 0)
	{
		soma = soma + numero;

		printf("Informe um numero: ");
		scanf("%d", &numero);
	}

	printf("A soma e: %d", soma);

	return 0;
}
