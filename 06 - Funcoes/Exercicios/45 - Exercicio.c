#include <stdio.h>
#include <math.h>

double DesvioPadrao(double* vetor, int* n)
{
	int i;
	double desvios[*n], media, soma, desvio, varianca, desvio_padrao;

	soma = 0;
	for (i = 0; i < (*n); i++)
	{
		soma += *(vetor+i);
	}

	media = soma / (*n);

	for (i = 0; i < (*n); i++)
	{
		desvio = media - *(vetor+i);

		if (desvio < 0)
		{
			desvio *= -1;
		}

		desvios[i] = desvio;
	}

	soma = 0;
	for (i = 0; i < (*n); i++)
	{
		soma += pow(desvios[i], 2);
	}

	varianca = soma / ((*n)-1);

	desvio_padrao = sqrt(varianca);

	return desvio_padrao;
}

int main()
{
	int i, n;
	double desvio_padrao;

	printf("Quantos numeros terao no vetor: ");
	scanf("%d", &n);

	double valores[n];

	for (i = 0; i < n; i++)
	{
		printf("Posicao[%d]: ", i);
		scanf("%lf", &valores[i]);
	}

	desvio_padrao = DesvioPadrao(&valores[0], &n);

	printf("Desvio padrao: %.2lf", desvio_padrao);

	return 0;
}
