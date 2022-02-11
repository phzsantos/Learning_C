#include <stdio.h>

int main()
{
	int i, soma, numero;

	printf("Numero: ");
	scanf("%d", &numero);

	soma = 0;
	for (i = 1; i < numero; i++)
	{
		if (numero % i == 0)
		{
			soma = soma + i;
		}
	}

	printf("Soma dos divisores: %d", soma);

	return 0;
}
