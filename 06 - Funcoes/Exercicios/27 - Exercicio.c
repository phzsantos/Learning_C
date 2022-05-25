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

	return fatorial;
}

double Seno(double* angulo)
{
	int i;
	double seno;

	for (i = 0; i < 6; i++)
	{
		seno += pow(-1.0, i) * pow((*angulo), 2*i+1)/Fatorial(2*i+1);
	}

	return seno;
}

int main()
{
	double angulo, seno;

	printf("Angulo: ");
	scanf("%lf", &angulo);

	seno = Seno(&angulo);

	printf("Seno: %.2lf", seno);

	return 0;
}
