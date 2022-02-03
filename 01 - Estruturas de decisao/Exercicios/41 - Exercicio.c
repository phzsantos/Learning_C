#include <stdio.h>

int main()
{
	double imc, altura, peso;

	printf("Peso: ");
	scanf("%lf", &peso);
	printf("Altura: ");
	scanf("%lf", &altura);

	imc = peso / (altura * altura);

	if (imc <= 18.5)
	{
		printf("Abaixo do peso.");
	}
	else if (imc <= 24.9)
	{
		printf("Saudavel.");
	}
	else if (imc <= 29.9)
	{
		printf("Peso em excesso.");
	}
	else if (imc <= 34.9)
	{
		printf("Obesidade grau 1.");
	}
	else if (imc <= 39.9)
	{
		printf("Obesidade grau 2 severa.");
	}
	else
	{
		printf("Obesidade grau 3 morbida.");
	}

	return 0;
}
