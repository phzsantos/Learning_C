#include <stdio.h>

int main()
{
	double nota1, nota2, media;

	printf("Digite a primeira nota: ");
	scanf("%lf", &nota1);
	printf("Digite a segunda nota: ");
	scanf("%lf", &nota2);

	if ((nota1 >= 0) && (nota1 <= 10) && (nota2 >= 0) && (nota2 <= 10))
	{
		media = (nota1 + nota2) / 2;

		printf("Media: %.2lf", media);
	}
	else
	{
		printf("Notas invalidas.");
	}

	return 0;
}
