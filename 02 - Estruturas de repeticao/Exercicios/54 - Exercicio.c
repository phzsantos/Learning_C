#include <stdio.h>

int main()
{
	int n, i, divisores;

	printf("Numero: ");
	scanf("%d", &n);

	divisores = 0;
	for (i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			divisores++;
		}
	}

	if (divisores > 2)
	{
		printf("Numero nao primo.");
	}
	else
	{
		printf("Numero primo.");
	}

	return 0;
}
