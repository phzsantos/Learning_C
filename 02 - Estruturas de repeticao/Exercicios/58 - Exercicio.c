#include <stdio.h>

int main()
{
	int i, j, primeiro, segundo, divisores, soma;

	printf("Primeiro: ");
	scanf("%d", &primeiro);
	printf("Segundo: ");
	scanf("%d", &segundo);

	soma = 0;
	for (i = primeiro+1; i < segundo; i++)
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
