#include <stdio.h>

int main()
{
	int numero, pares, soma;

	numero = 0;
	pares = 0;
	soma = 0;
	while (pares <= 50)
	{
		if (numero % 2 == 0)
		{
			soma = soma + numero;
			pares++;
		}

		numero++;
	}

	printf("Soma: %d", soma);

	return 0;
}
