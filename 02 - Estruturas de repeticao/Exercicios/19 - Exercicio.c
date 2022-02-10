#include <stdio.h>

int main()
{
	int i, numero, numeros[3];

	printf("Numero: ");
	scanf("%d", &numero);

	if (numero >= 100 && numero <= 999)
	{
		numeros[0] = numero / 100;
		numeros[1] = numero / 10 - numeros[0] * 10;
		numeros[2] = numero % 10;

		for (i = 0; i < 3; i++)
		{
			printf("%dº Numero: %d\n", i+1, numeros[i]);
		}
	}
	else
	{
		printf("Numero invalido.");
	}

	return 0;
}
