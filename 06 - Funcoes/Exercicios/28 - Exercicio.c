#include <stdio.h>
#include <math.h>

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

double Cosseno(double* angulo)
{
	int i;
	double cosseno;

	cosseno = 0;
	for (i = 0; i < 6; i++)
	{
		cosseno += pow(-1, i) * pow((*angulo), 2*i) / Fatorial(2*i);
	}

	return cosseno;
}

int main()
{
	double angulo, cosseno;

	printf("Angulo: ");
	scanf("%lf", &angulo);

	cosseno = Cosseno(&angulo);

	printf("Cosseno: %.2lf", cosseno);

	return 0;
}
