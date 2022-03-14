#include <stdio.h>

int main()
{
	int soma, qtd, idade;
	double media;

	printf("Idade: ");
	scanf("%d", &idade);

	if (idade > 0)
	{
		soma = 0;
		for (qtd = 0; idade > 0; qtd++)
		{
			soma += idade;

			printf("Idade: ");
			scanf("%d", &idade);
		}

		media = (double) soma / qtd;

		printf("Media: %.2lf", media);
	}

	return 0;
}
