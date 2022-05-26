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

double CossenoHiperbolico(double* angulo)
{
	int i;
	double cosseno_hiperbolico;

	cosseno_hiperbolico = 0;
	for (i = 0; i < 6; i++)
	{
		cosseno_hiperbolico += pow((*angulo), 2*i)/Fatorial(2*i);
	}

	return cosseno_hiperbolico;
}

int main()
{
	double angulo, cosseno_hiperbolico;

	printf("Angulo: ");
	scanf("%lf", &angulo);

	cosseno_hiperbolico = CossenoHiperbolico(&angulo);

	printf("Cosseno Hiperbolico: %.2lf", cosseno_hiperbolico);

	return 0;
}
