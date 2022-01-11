#include <stdio.h>

int main()
{
	double kg, libras;

	printf("Valor em kg que quer converter em libras: ");
	scanf("%lf", &kg);

	libras = kg / 0.45;

	printf("%.2lf kg em libras: %.2lf", kg, libras);

	return 0;
}
