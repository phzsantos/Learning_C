#include <stdio.h>

int main()
{
	int i;
	double notas[15], soma, media;

	for (i = 0; i < 15; i++)
	{
		do
		{
			printf("Nota %d: ", i+1);
			scanf("%lf", &notas[i]);
		}
		while (notas[i] < 0);
	}

	soma = 0;
	for (i = 0; i < 15; i++)
	{
		soma += notas[i];
	}

	media = soma / 15;

	printf("Media geral: %.2lf", media);

	return 0;
}
