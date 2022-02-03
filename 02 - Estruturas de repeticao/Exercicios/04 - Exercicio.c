#include <stdio.h>

int main()
{
	int numero;

	numero = 0;
	while (numero < 100000)
	{
		numero = numero + 1000;
		printf("%d\n", numero);
	}

	return 0;
}
