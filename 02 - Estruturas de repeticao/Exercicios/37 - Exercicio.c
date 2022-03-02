#include <stdio.h>

int main()
{
	int i, primeira_parte, segunda_parte, soma, quadrado;

	for (i = 1000; i <= 9999; i++)
	{
		primeira_parte = i / 100;
		segunda_parte = i % 100;
		soma = primeira_parte + segunda_parte;
		quadrado = soma * soma;

		if (quadrado == i)
		{
			printf("%d\n", quadrado);
		}
	}

	return 0;
}
