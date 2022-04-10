#include <stdio.h>

int main()
{
	int i, j, k, qtd_zeros, contador, total, valores[15];

	for (i = 0; i < 15; i++)
	{
		printf("Posicao[%d]: ", i);
		scanf("%d", &valores[i]);
	}

	qtd_zeros = 0;
	for (i = 0; i < 15; i++)
	{
		if (valores[i] == 0)
		{
			qtd_zeros++;
		}
	}

	total = 15;
	contador = 0;
	for (i = 0; i < (total-contador); i++)
	{
		while (valores[i] == 0)
		{
			if (contador != qtd_zeros)
			{
				k = i;
				contador++;
				for (j = i+1; j < 15; j++)
				{
					valores[k] = valores[j];
					k++;
				}
			}
			else
			{
				break;
			}
		}
	}

	printf("Vetor: ");
	for (i = 0; i < (total-contador); i++)
	{
		printf("%d ", valores[i]);
	}

	return 0;
}
