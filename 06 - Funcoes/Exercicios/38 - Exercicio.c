#include <stdio.h>
#include <math.h>

double FatorialExponencial(int numero)
{
	int i, fatorial_exponencial, potencia;

	if (numero == 0)
	{
		fatorial_exponencial = 1;
	}
	else
	{
		potencia = 1;
		for (i = 2; i < numero; i++)
		{
			potencia = pow(i, potencia);
		}

		fatorial_exponencial = pow(numero, potencia);
	}

	return fatorial_exponencial;
}

int main()
{
	int numero, fatorial_exponencial;

	do
	{
		printf("Numero: ");
		scanf("%d", &numero);
	}
	while (numero < 0);

	fatorial_exponencial = FatorialExponencial(numero);

	printf("Fatorial exponencial: %d", fatorial_exponencial);

	return 0;
}
