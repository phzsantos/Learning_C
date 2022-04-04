#include <stdio.h>
#include <math.h>

int main()
{
	int i;
	double desvios[10], valores[10], media, soma, desvio, varianca, desvio_padrao;

	for (i = 0; i < 10; i++)
	{
		printf("Posicao[%d]: ", i);
		scanf("%lf", &valores[i]);
	}

	soma = 0;
	for (i = 0; i < 10; i++)
	{
		soma += valores[i];
	}

	media = soma / 10;

	for (i = 0; i < 10; i++)
	{
		desvio = media - valores[i];

		if (desvio < 0)
		{
			desvio *= -1;
		}

		desvios[i] = desvio;
	}

	soma = 0;
	for (i = 0; i < 10; i++)
	{
		soma += pow(desvios[i], 2);
	}

	varianca = soma / 9;

	desvio_padrao = sqrt(varianca);

	printf("Media: %.2lf\n", media);
	printf("Varianca: %.2lf\n", varianca);
	printf("Desvio padrao: %.2lf", desvio_padrao);

	return 0;
}
