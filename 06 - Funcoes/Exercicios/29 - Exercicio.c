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

double SenoHiperbolico(double* angulo)
{
	int i;
	double seno_hiperbolico;

	seno_hiperbolico = 0;
	for (i = 0; i < 6; i++)
	{
		seno_hiperbolico += pow((*angulo), 2*i+1)/Fatorial(2*i+1);
	}

	return seno_hiperbolico;
}

int main()
{
	double angulo, seno_hiperbolico;

	printf("Angulo: ");
	scanf("%lf", &angulo);

	seno_hiperbolico = SenoHiperbolico(&angulo);

	printf("Seno Hiperbolico: %.2lf", seno_hiperbolico);

	return 0;
}
