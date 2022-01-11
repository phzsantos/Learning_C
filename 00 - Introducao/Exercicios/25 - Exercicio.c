#include <stdio.h>

int main()
{
	double metros_quadrados, acres;

	printf("Valor em metros quadrados que quer converter em acres: ");
	scanf("%lf", &acres);

	metros_quadrados = acres * 4048.58;

	printf("%.lf acres em metros quadrados: %.2lf", acres, metros_quadrados);

	return 0;
}
