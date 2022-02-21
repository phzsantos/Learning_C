#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, n, dado1, dado2;
	char resultado;

	printf("Numero: ");
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		dado1 = 1 + (rand() % 6);
		dado2 = 1 + (rand() % 6);

		if (dado1 == dado2)
		{
			resultado = '=';
		}
		else if (dado1 > dado2)
		{
			resultado = '>';
		}
		else
		{
			resultado = '<';
		}

		printf("Dado1: %d %c dado2: %d\n", dado1, resultado, dado2);
	}

	return 0;
}
