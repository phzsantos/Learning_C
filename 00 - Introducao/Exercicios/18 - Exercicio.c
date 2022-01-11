#include <stdio.h>

int main()
{
	double metros_cubicos, litros;

	printf("Valor em metros cubicos que quer converter em litros: ");
	scanf("%lf", &metros_cubicos);

	litros = metros_cubicos * 1000;

	printf("%.2lf metros cubicos em litros: %.2lf", metros_cubicos, litros);

	return 0;
}
