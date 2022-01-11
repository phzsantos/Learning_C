#include <stdio.h>

int main()
{
	double kg, libras;

	printf("Valor em libras que quer converter em kg: ");
	scanf("%lf", &libras);

	kg = libras * 0.45;

	printf("%.2lf libras em kg: %.2lf", libras, kg);

	return 0;
}
