#include <stdio.h>

void VerificaAutonomiaDoCarro(double* km, double* litros)
{
	double km_por_litro;

	km_por_litro = (*km) / (*litros);

	if (km_por_litro < 8)
	{
		printf("Venda o carro!");
	}
	else if (km_por_litro < 14)
	{
		printf("Economico!");
	}
	else
	{
		printf("Super economico!");
	}
}

int main()
{
	double km, litros;

	printf("KM: ");
	scanf("%lf", &km);

	printf("Litros: ");
	scanf("%lf", &litros);

	VerificaAutonomiaDoCarro(&km, &litros);

	return 0;
}
