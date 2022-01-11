#include <stdio.h>

int main()
{
	int i, numero, soma = 0;

	for (i = 0; i < 3; i++)
	{
		printf("Digite o %dº numero: ", i+1);
		scanf("%d", &numero);

		soma = soma + (numero * numero);
	}

	printf("Quadrados dos 3 numeros somados: %d", soma);

	return 0;
}
