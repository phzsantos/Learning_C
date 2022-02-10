#include <stdio.h>

int main()
{
	int i, numero, cont, maior;

	printf("Quantos numeros vai digitar: ");
	scanf("%d", &numero);

	int numeros[numero];

	for (i = 0; i < numero; i++)
	{
		printf("%dº Numero: ", i+1);
		scanf("%d", &numeros[i]);
	}

	maior = numeros[0];
	for (i = 1; i < numero; i++)
	{
		if (numeros[i] > maior)
		{
			maior = numeros[i];
		}
	}

	for (i = 0; i < numero; i++)
	{
		if (numeros[i] == maior)
		{
			cont++;
		}
	}

	printf("Maior numero: %d, foi lido %d vezes", maior, cont);

	return 0;
}
