#include <stdio.h>

void DeterminaTriangulo(double *primeiro, double *segundo, double *terceiro)
{
	if (((*primeiro) < ((*segundo) + (*terceiro))) && ((*segundo) < ((*primeiro) + (*terceiro))) && ((*terceiro) < ((*primeiro) + (*segundo))))
	{
		if ((*primeiro) == (*segundo) && (*segundo) == (*terceiro))
		{
			printf("Triangulo equilatero.");
		}
		else if ((*primeiro) == (*segundo) || (*segundo) == (*terceiro) || (*primeiro) == (*terceiro))
		{
			printf("Triangulo isosceles.");
		}
		else
		{
			printf("Triangulo escaleno.");
		}
	}
	else
	{
		printf("Nao e triangulo.");
	}
}

int main()
{
	double primeiro, segundo, terceiro;

	do
	{
		printf("Primeiro: ");
		scanf("%lf", &primeiro);
	}
	while(primeiro <= 0);

	do
	{
		printf("Segundo: ");
		scanf("%lf", &segundo);
	}
	while(segundo <= 0);

	do
	{
		printf("Terceiro: ");
		scanf("%lf", &terceiro);
	}
	while(terceiro <= 0);

	DeterminaTriangulo(&primeiro, &segundo, &terceiro);

	return 0;
}
