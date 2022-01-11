#include <stdio.h>

int main()
{
	double metros_cubicos, litros;

	printf("Valor em litros que quer converter em metros cubicos: ");
	scanf("%lf", &litros);

	metros_cubicos = litros/1000;

	printf("%.2lf litros em metros cubicos: %.2lf", litros, metros_cubicos);

	return 0;
}
