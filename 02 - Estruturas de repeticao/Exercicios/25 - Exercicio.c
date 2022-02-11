#include <stdio.h>

int main()
{
	int i, soma;

	soma = 0;
	for (i = 0; i < 1000; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			soma = soma + i;
		}
	}

	printf("Soma dos multiplos de 3 ou 5: %d", soma);

	return 0;
}
