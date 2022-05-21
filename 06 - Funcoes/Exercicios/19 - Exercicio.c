#include <stdio.h>

int MaiorFatorPrimo(int* numero)
{
	int i, j, k, divisores[100], divisor, maior_fator;

	j = 0;
	for (i = 2; i < (*numero); i++)
	{
		if ((*numero) % i == 0)
		{
			divisores[j] = i;
			j++;
		}
	}

	maior_fator = divisores[0];
	for (i = 0; i < j; i++)
	{
		if (divisores[i] % 2)
		{
			divisor = 0;
			for (k = 1; k < divisores[i]; k++)
			{
				if (divisores[i] % k == 0)
				{
					divisor++;
				}
			}

			if (divisor == 1)
			{
				maior_fator = divisores[i];
			}
		}
	}

	return maior_fator;
}

int main()
{
	int numero, maior_fator;

	printf("Numero: ");
	scanf("%d", &numero);

	maior_fator = MaiorFatorPrimo(&numero);

	printf("Maior fator primo: %d", maior_fator);

	return 0;
}
