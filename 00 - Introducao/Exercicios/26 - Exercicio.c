#include <stdio.h>

int main()
{
	double metros_quadrados, hectares;

	printf("Valor em metros quadrados que quer converter em hectares: ");
	scanf("%lf", &metros_quadrados);

	hectares = metros_quadrados * 0.0001;

	printf("%.2lf metros quadrados em hectares: %.2lf", metros_quadrados, hectares);

	return 0;
}
