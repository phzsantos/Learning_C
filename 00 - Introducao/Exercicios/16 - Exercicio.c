#include <stdio.h>

int main()
{
	double cm, polegadas;

	printf("Valor em polegadas que quer converter em cm: ");
	scanf("%lf", &polegadas);

	cm = polegadas * 2.54;

	printf("%.2lf polegadas em cm: %.2lf", polegadas, cm);

	return 0;
}
