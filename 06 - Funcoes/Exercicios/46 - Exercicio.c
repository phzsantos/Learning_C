#include <stdio.h>

void ImprimeVetor(double* vetor, int* n)
{
	int i;

	for (i = 0; i < (*n); i++)
	{
		printf("%.2lf ", *(vetor+i));
	}
	printf("\n");
}

void ImprimeVetorInvertido(double* vetor, int* n)
{
	int i;

	for (i = ((*n)-1); i >= 0; i--)
	{
		printf("%.2lf ", *(vetor+i));
	}
	printf("\n");
}

double MediaVetor(double* vetor, int* n)
{
	int i;
	double soma, media;

	soma = 0;
	for (i = 0; i < (*n); i++)
	{
		soma += *(vetor+i);
	}

	media = soma / (*n);

	return media;
}

int main()
{
	int i, n;
	double media;

	printf("Quantidade de numeros no vetor: ");
	scanf("%d", &n);

	double valores[n];

	for (i = 0; i < n; i++)
	{
		printf("%d: ", i);
		scanf("%lf", &valores[i]);
	}

	ImprimeVetor(&valores[0], &n);
	ImprimeVetorInvertido(&valores[0], &n);
	media = MediaVetor(&valores[0], &n);

	printf("Media: %.2lf", media);

	return 0;
}
