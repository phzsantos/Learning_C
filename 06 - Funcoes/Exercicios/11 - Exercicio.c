#include <stdio.h>

double CalculaMedia(double* nota1, double* nota2, double* nota3, char* parametro)
{
	double media;

	if ((*parametro) == 'a')
	{
		media = ((*nota1) + (*nota2) + (*nota3)) / 3;
	}
	else
	{
		media = ((*nota1) * 5 + (*nota2) * 3 + (*nota3) * 2) / (5 + 3 + 2);
	}

	return media;
}

int main()
{
	double nota1, nota2, nota3, media;
	char parametro;

	printf("Parametro (a-aritimetica/p-ponderada: ");
	scanf("%c", &parametro);

	printf("Nota 1: ");
	scanf("%lf", &nota1);

	printf("Nota 2: ");
	scanf("%lf", &nota2);

	printf("Nota 3: ");
	scanf("%lf", &nota3);

	media = CalculaMedia(&nota1, &nota2, &nota3, &parametro);

	printf("Esta e a media: %.2lf", media);

	return 0;
}
