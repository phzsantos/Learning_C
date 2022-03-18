#include <stdio.h>

int main()
{
	int n, i, j, divisores, soma;

	printf("Numero: ");
	scanf("%d", &n);

	soma = 0;
	for (i = 1; i < n; i++)
	{
		divisores = 0;
		for (j = 1; j <= i; j++)
		{
			if (i % j == 0)
			{
				divisores++;
			}
		}

		if (divisores == 2)
		{
			soma += i;
		}
	}

	printf("Soma: %d", soma);

	return 0;
}
