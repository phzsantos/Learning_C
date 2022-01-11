#include <stdio.h>

int main()
{
	double graus, radianos;

	printf("Radianos para graus: ");
	scanf("%lf", &radianos);

	graus = radianos * 180/3.14;

	printf("%.2lf radianos em graus: %.2lf", radianos, graus);

	return 0;
}
