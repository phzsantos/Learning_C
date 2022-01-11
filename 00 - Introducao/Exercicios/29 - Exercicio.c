#include <stdio.h>

int main()
{
	int i;
	double nota, media, soma = 0;

	for (i = 0; i < 4; i++)
	{
		printf("Digite a %dº nota: ", i+1);
		scanf("%lf", &nota);

		soma = soma + nota;
	}

	media = soma / 4;

	printf("Essa e a media das notas apresentadas: %.2lf", media);

	return 0;
}
