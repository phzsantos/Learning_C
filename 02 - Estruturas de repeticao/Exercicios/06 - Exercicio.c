#include <stdio.h>

int main()
{
	int i;
	double valores[10], soma, media;

	for (i = 0; i < 10; i++)
	{
		printf("Digite um numero: ");
		scanf("%lf", &valores[i]);
	}

	soma = 0;
	for (i = 0; i < 10; i++)
	{
		soma = soma + valores[i];
	}

	media = soma / 10;

	printf("Media: %.2lf", media);

	return 0;
}
