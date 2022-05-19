#include <stdio.h>

double Operacoes(double* numero1, double* numero2, char* parametro)
{
	double resultado;

	if ((*parametro) == '+')
	{
		resultado = ((*numero1) + (*numero2));
	}
	else if ((*parametro) == '-')
	{
		resultado = ((*numero1) - (*numero2));
	}
	else if ((*parametro) == '/')
	{
		resultado = ((*numero1) / (*numero2));
	}
	else
	{
		resultado = ((*numero1) * (*numero2));
	}

	return resultado;
}

int main()
{
	double numero1, numero2, parametro, resultado;

	printf("1 Numero: ");
	scanf("%lf", &numero1);

	printf("2 Numero: ");
	scanf("%lf", &numero2);

	printf("Parametro: ");
	scanf(" %c", &parametro);

	resultado = Operacoes(&numero1, &numero2, &parametro);

	printf("Resultado: %.2lf", resultado);

	return 0;
}
