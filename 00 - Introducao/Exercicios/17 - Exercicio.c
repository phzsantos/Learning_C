#include <stdio.h>

int main()
{
	double cm, polegadas;

	printf("Valor em cm que quer converter em polegadas: ");
	scanf("%lf", &cm);

	polegadas = cm / 2.54;

	printf("%.2lf cm em polegadas: %.2lf", cm, polegadas);

	return 0;
}
