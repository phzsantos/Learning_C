#include <stdio.h>

int main()
{
	double area, base, altura;

	printf("Base: ");
	scanf("%lf", &base);
	printf("Altura: ");
	scanf("%lf", &altura);

	while (base > 0 && altura > 0)
	{
		area = base * altura / 2;

		printf("Area: %.2lf\n", area);

		printf("Base: ");
		scanf("%lf", &base);
		printf("Altura: ");
		scanf("%lf", &altura);
	}

	return 0;
}
