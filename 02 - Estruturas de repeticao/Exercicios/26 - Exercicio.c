#include <stdio.h>

int main()
{
	int i, numero, divisor, multiplo;

	printf("Numero: ");
	scanf("%d", &numero);

	divisor = 0;
	for (i = numero; divisor < 1; i++)
	{
		if (i % 11 == 0 || i % 13 == 0 || i % 17 == 0)
		{
			multiplo = i;
			divisor++;
		}
	}

	printf("Primeiro multiplo: %d", multiplo);

	return 0;
}
