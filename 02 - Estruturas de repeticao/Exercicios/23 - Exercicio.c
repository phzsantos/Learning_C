#include <stdio.h>

int main()
{
	int i, cont, numero;

	printf("Numero: ");
	scanf("%d", &numero);

	cont = 0;
	for (i = 1; i <= numero; i++)
	{
		if (numero % i == 0)
		{
			cont++;
			printf("%dº Divisor: %d\n", cont, i);
		}
	}

	return 0;
}
