#include <stdio.h>

int main()
{
	int km_hora;
	double metros_segundo;

	printf("Velocidade em km/h que quer converter em m/s: ");
	scanf("%d", &km_hora);

	metros_segundo = km_hora / 3.6;

	printf("%d km/h em m/s: %.0lf", km_hora, metros_segundo);

	return 0;
}
