#include <stdio.h>

int main()
{
	int i, j, valores[10], impares[10];

	for (i = 0; i < 10; i++)
	{
		do
		{
			printf("Posicao[%d]: ", i);
			scanf("%d", &valores[i]);
		}
		while (valores[i] < 0 || valores[i] > 50);
	}

	j = 0;
	for (i = 0; i < 10; i++)
	{
		if (valores[i] % 2)
		{
			impares[j] = valores[i];
			j++;
		}
	}

	printf("\nValores:\n");
	for (i = 0; i < 10; i += 2)
	{
		printf("%d %d\n", valores[i], valores[i+1]);
	}

	printf("\nImpares:\n");
	for (i = 0; i < j; i += 2)
	{
		if (impares[i+1] != 0)
		{
			printf("%d %d\n", impares[i], impares[i+1]);
		}
		else
		{
			printf("%d\n", impares[i]);
		}
	}

	return 0;
}
