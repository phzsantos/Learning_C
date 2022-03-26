#include <stdio.h>

int main()
{
	int i, valores[5], maior, menor;
	double soma, media;

	for (i = 0; i < 5; i++)
	{
		printf("Posicao[%d]: ", i);
		scanf("%d", &valores[i]);
	}

	soma = 0;
	for (i = 0; i < 5; i++)
	{
		soma += valores[i];
	}

	maior = valores[0];
	menor = valores[0];
	for (i = 1; i < 5; i++)
	{
		if (valores[i] > maior)
		{
			maior = valores[i];
		}
		else
		{
			if (valores[i] < menor)
			{
				menor = valores[i];
			}
		}
	}

	media = soma / 5;

	printf("Soma: %.2lf\n", soma);
	printf("Maior: %d\n", maior);
	printf("Menor: %d\n", menor);
	printf("Media: %.2lf", media);

	return 0;
}
