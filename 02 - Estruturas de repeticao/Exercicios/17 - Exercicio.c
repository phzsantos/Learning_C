#include <stdio.h>

int main()
{
	int i, numero, soma;

	printf("Numero: ");
	scanf("%d", &numero);

	soma = 0;
	for (i = 0; i < numero; i++)
	{
		soma = soma + i;
	}

	printf("Soma: %d", soma);

	return 0;
}
