#include <stdio.h>

int main()
{
	int numero, resultado;

	numero = 2;
	printf("%d\n", numero);

	resultado = numero << 2;
	printf("%d\n", resultado);

	resultado = numero >> 1;
	printf("%d\n", resultado);

	resultado = ~numero;
	printf("%d\n", resultado);

	return 0;
}
