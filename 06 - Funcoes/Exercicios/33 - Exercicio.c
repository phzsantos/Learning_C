#include <stdio.h>
#include <math.h>

int SomaAlgarismos(int numero)
{
	int i, j, soma, contador, auxiliar, numeros[100];

	for (i = 0; numero; i++)
	{
		auxiliar = numero;
		for (contador = 0; auxiliar >= 10; contador++)
		{
			auxiliar /= 10;
		}

		numeros[i] = auxiliar;

		numero -= (auxiliar * pow(10, contador));
	}

	soma = 0;
	for (j = 0; j < i; j++)
	{
		soma += numeros[j];
	}

	return soma;
}

int Fatorial(int numero)
{
	int i, fatorial;

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

int main()
{
	int numero, soma_algarismos;

	printf("Numero: ");
	scanf("%d", &numero);

	soma_algarismos = SomaAlgarismos(Fatorial(numero));

	printf("Soma algarismos: %d", soma_algarismos);

	return 0;
}
