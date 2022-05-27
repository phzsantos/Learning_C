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

int SuperFatorial(int numero)
{
	int i, super_fatorial;

	super_fatorial = 1;
	for (i = numero; i > 0; i--)
	{
		super_fatorial *= Fatorial(i);
	}

	return super_fatorial;
}

int main()
{
	int numero, super_fatorial;

	printf("Numero: ");
	scanf("%d", &numero);

	super_fatorial = SuperFatorial(numero);

	printf("Super fatorial: %d", super_fatorial);

	return 0;
}
