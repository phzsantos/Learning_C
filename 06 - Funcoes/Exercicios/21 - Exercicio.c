#include <stdio.h>

int QuantidadePrimosAnteriores(int* numero)
{
	int i, j, divisores, quantidade_primos;

	quantidade_primos = 0;
	for (i = 1; i < (*numero); i++)
	{
		divisores = 0;
		for (j = 1; j < i; j++)
		{
			if (i % j == 0)
			{
				divisores++;
			}
		}

		if (divisores == 1)
		{
			quantidade_primos++;
		}
	}

	return quantidade_primos;
}

int main()
{
	int numero, quantidade_primos;

	printf("Numero: ");
	scanf("%d", &numero);

	quantidade_primos = QuantidadePrimosAnteriores(&numero);

	printf("Quantidade de numeros primos anteriores: %d", quantidade_primos);

	return 0;
}
