#include <stdio.h>

int main()
{
	int numero_base, numeros[4], i;

	printf("Digite o numero base: ");
	scanf("%d", &numero_base);

	numeros[0] = numero_base / 1000;
	numeros[1] = (numero_base / 100) - (numeros[0] * 10);
	numeros[2] = (numero_base / 10) - (numeros[0] * 100) - (numeros[1] * 10);
	numeros[3] = numero_base % 10;

	for (i = 0; i < 4; i++)
	{
		printf("%dº Numero: %d\n", i+1, numeros[i]);
	}

	return 0;
}
