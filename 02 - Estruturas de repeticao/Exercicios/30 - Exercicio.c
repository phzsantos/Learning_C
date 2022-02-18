#include <stdio.h>

int main()
{
	int i, soma, numero;

	printf("Numero: ");
	scanf("%d", &numero);

	soma = 0;
	for (i = 0; i <= numero; i++)
	{
		soma += i;
	}

	printf("Primeira soma: %d\n", soma);

	soma = 0;
	for (i = 0; i <= numero; i++)
	{
		if (i % 2 == 0)
		{
			soma -= i;
		}
		else
		{
			soma += i;
		}
	}

	printf("Segunda soma: %d\n", soma);

	soma = 0;
	for (i = 0; i <= numero; i++)
	{
		if (i % 2 != 0)
		{
			soma += i;
		}
	}

	printf("Terceiro soma: %d", soma);

	return 0;
}
