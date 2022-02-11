#include <stdio.h>

int main()
{
	int cont;
	double nota, soma, media;

	printf("Nota: ");
	scanf("%lf", &nota);

	cont = 0;
	soma = 0;
	while ( nota >= 10 && nota <= 20)
	{
		cont++;
		soma = soma + nota;

		printf("Nota: ");
		scanf("%lf", &nota);
	}

	media = soma / cont;

	printf("Media das notas: %.2lf", media);

	return 0;
}
