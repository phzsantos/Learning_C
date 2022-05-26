#include <stdio.h>

double Fatorial(double numero)
{
	int i;
	double fatorial;

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

double Neperiano(double* numero)
{
	int i;
	double neperiano;

	for (i = 0; i < (*numero); i++)
	{
		neperiano += 1/Fatorial(i);
	}

	return neperiano;
}

int main()
{
	double numero, neperiano;

	printf("Numero: ");
	scanf("%lf", &numero);

	neperiano = Neperiano(&numero);

	printf("Neperiano: %.2lf", neperiano);

	return 0;
}
