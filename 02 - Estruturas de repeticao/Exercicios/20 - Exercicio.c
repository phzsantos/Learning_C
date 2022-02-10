#include <stdio.h>

int main()
{
	int numero, pares, cont;

	cont = 0;
	pares = 0;
	do
	{
		printf("Numero: ");
		scanf("%d", &numero);

		if (numero % 2 == 0)
		{
			pares++;
		}

		cont++;
	}
	while (numero != 1000);

	printf("Pares lidos: %d\n", pares);
	printf("Numeros lidos: %d", cont);

	return 0;
}
