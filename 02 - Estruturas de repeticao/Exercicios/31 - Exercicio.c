#include <stdio.h>

int main()
{
	int i, impar;
	double soma;

	soma = 0;
	impar = 1;
	for (i = 1; i <= 50; i++)
	{
		soma += (double) impar/i;
		impar += 2;
	}

	printf("Soma: %.2lf", soma);

	return 0;
}
