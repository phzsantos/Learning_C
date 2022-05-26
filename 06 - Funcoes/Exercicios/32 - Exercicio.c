#include <stdio.h>

void Simplificar(int* numerador, int* denominador)
{
	int i, j, mdc, numerador_tmp, denominador_tmp, divisores[10];

	numerador_tmp = (*numerador);
	denominador_tmp = (*denominador);

	i = 2;
	j = 0;
	while (numerador_tmp != 1 && denominador_tmp != 1)
	{
		if (numerador_tmp % i == 0 && denominador_tmp % i == 0)
		{
			divisores[j] = i;
			j++;
			denominador_tmp /= i;
			numerador_tmp /= i;
		}
		else if (denominador_tmp % i == 0)
		{
			denominador_tmp /= i;
		}
		else if (numerador_tmp % i == 0)
		{
			numerador_tmp /= i;
		}
		else
		{
			i++;
		}
	}

	mdc = 1;
	for (i = 0; i < j; i++)
	{
		mdc *= divisores[i];
	}

	(*numerador) /= mdc;
	(*denominador) /= mdc;
}

int main()
{
	int numerador, denominador;

	printf("Numerador: ");
	scanf("%d", &numerador);

	printf("Denominador: ");
	scanf("%d", &denominador);

	Simplificar(&numerador, &denominador);

	printf("Simplificada: %d/%d", numerador, denominador);

	return 0;
}
