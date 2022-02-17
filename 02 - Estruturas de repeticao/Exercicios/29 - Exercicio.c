#include <stdio.h>

int main()
{
	int i, j, cont, fatorial;
	double soma;

	soma = 0;
	cont = 0;
	fatorial = 0;
	for (i = 1; i <= 5; i++)
	{
		cont += 2;
		fatorial = cont;
		for (j = cont-1; j > 0; j--)
		{
			fatorial *= j;
		}

	    printf("i: %d\n", i);
	    printf("fatorial: %d\n", fatorial);

		soma += (double) i/fatorial;
	}

	printf("Soma: %.2lf", soma);

	return 0;
}
