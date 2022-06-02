#include <stdio.h>

double Media(double* vetor)
{
	int i;
	double soma, media;

	soma = 0;
	for (i = 0; i < 10; i++)
	{
		soma += *(vetor+i);
	}

	media = soma / 10;

	return media;
}

int main()
{
	int i;
	double valores[10], media;

	for (i = 0; i < 10; i++)
	{
		printf("%d: ", i);
		scanf("%lf", &valores[i]);
	}

	media = Media(&valores[0]);

	printf("Media: %.2lf", media);

	return 0;
}
