#include <stdio.h>

int main()
{
	int numero, soma;

	printf("Digite um numero: ");
	scanf("%d", &numero);

	if (numero > 0)
	{
		soma = (numero / 100) + ((numero / 10) - ((numero / 100) * 10) ) + (numero % 10);

		printf("Essa e a soma: %d", soma);
	}
	else
	{
		printf("Numero invalido.");
	}

	return 0;
}
