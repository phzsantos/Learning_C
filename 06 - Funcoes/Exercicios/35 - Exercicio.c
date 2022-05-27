#include <stdio.h>

int Fatorial(int numero)
{
	int i, fatorial;

	fatorial = numero;
	for (i = numero-1; i > 0; i--)
	{
		fatorial *= i;
	}

	if (fatorial == 0)
	{
		fatorial = 1;
	}

	return fatorial;
}

int FatorialQuadruplo(int numero)
{
	int fatorial_quadruplo;

	fatorial_quadruplo = Fatorial(2*numero)/Fatorial(numero);

	return fatorial_quadruplo;
}

int main()
{
	int numero, fatorial_quadruplo;

	printf("Numero: ");
	scanf("%d", &numero);

	fatorial_quadruplo = FatorialQuadruplo(numero);

	printf("Fatorial quadruplo: %d", fatorial_quadruplo);

	return 0;
}
