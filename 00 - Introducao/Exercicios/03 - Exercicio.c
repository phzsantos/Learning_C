#include <stdio.h>

int main()
{
	int numero, soma = 0, i;

	for (i = 0; i < 3; i++)
	{
		printf("Digite o %dº valor: ", i+1);
		scanf("%d", &numero);

		soma = soma + numero;
	}

	printf("A soma dos numeros e: %d", soma);

	return 0;
}
