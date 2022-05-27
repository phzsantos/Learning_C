#include <stdio.h>

int FatorialDuplo(int numero)
{
	int i, fatorial_duplo;

	fatorial_duplo = 1;
	for (i = 1; i <= numero; i+=2)
	{
		fatorial_duplo *= i;
	}

	if (numero == 0)
	{
		fatorial_duplo = 1;
	}

	return fatorial_duplo;
}

int main()
{
	int numero, fatorial_duplo;

	printf("Numero: ");
	scanf("%d", &numero);

	fatorial_duplo = FatorialDuplo(numero);

	printf("Fatorial duplo: %d", fatorial_duplo);

	return 0;
}
