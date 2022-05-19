#include <stdio.h>
#include <math.h>

double CalculaHipotenusa(double* catetoA, double* catetoB)
{
	double hipotenusa;

	hipotenusa = sqrt(pow((*catetoA), 2) + pow((*catetoB), 2));

	return hipotenusa;
}

int main()
{
	double catetoA, catetoB, hipotenusa;

	printf("Cateto A: ");
	scanf("%lf", &catetoA);

	printf("Cateto B: ");
	scanf("%lf", &catetoB);

	hipotenusa = CalculaHipotenusa(&catetoA, &catetoB);

	printf("Hipotenusa: %.2lf", hipotenusa);

	return 0;
}
