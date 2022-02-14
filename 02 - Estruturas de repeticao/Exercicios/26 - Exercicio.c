#include <stdio.h>

int main()
{
	int numero;

	printf("Numero: ");
	scanf("%d", &numero);

	do
	{
		numero++;
	}
	while (numero % 11 && numero % 13 && numero % 17);

	printf("Primeiro multiplo: %d", numero);

	return 0;
}
