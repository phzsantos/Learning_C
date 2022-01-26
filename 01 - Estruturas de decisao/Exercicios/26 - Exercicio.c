#include <stdio.h>

int main()
{
	double km, litros, km_litro;

	printf("KM: ");
	scanf("%lf", &km);
	printf("Litros: ");
	scanf("%lf", &litros);

	km_litro = km/litros;

	if (km_litro < 8)
	{
		printf("Venda o carro.");
	}
	else if (km_litro < 14)
	{
		printf("Economico.");
	}
	else
	{
		printf("Super economico.");
	}

	return 0;
}
