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

int main()
{
	int numero, soma;

	printf("Numero: ");
	scanf("%d", &numero);

	if (numero)
	{
		soma = SomaAlgarismos(numero);

		printf("Soma: %d", soma);
	}
	else
	{
		printf("Numero invalido.");
	}

	return 0;
}
