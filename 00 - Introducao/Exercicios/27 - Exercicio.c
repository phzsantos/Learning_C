#include <stdio.h>

int main()
{
	double metros_quadrados, hectares;

	printf("Valor em hectares que quer converter em metros quadrados: ");
	scanf("%lf", &hectares);

	metros_quadrados = hectares / 0.0001;

	printf("%.2lf hectares em metros quadrados: %.2lf", hectares, metros_quadrados);

	return 0;
}
