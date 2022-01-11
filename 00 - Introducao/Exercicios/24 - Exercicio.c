#include <stdio.h>

int main()
{
	double metros_quadrados, acres;

	printf("Valor em metros quadrados que quer converter em acres: ");
	scanf("%lf", &metros_quadrados);

	acres = metros_quadrados * 0.000247;

	printf("%.lf metros quadrados em acres: %.2lf", metros_quadrados, acres);

	return 0;
}
