#include <stdio.h>

int Fatorial(int* numero)
{
	int i, fatorial;

	fatorial = (*numero);
	for (i = fatorial-1; i > 0; i--)
	{
		fatorial *= i;
	}

	return fatorial;
}

int main()
{
	int numero, fatorial;

	printf("Numero: ");
	scanf("%d", &numero);

	fatorial = Fatorial(&numero);

	printf("Fatorial: %d", fatorial);

	return 0;
}
