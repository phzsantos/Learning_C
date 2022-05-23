#include <stdio.h>
#include <math.h>

double SomaSerie(int* numero)
{
	double soma_serie;
	int i;

	soma_serie = 0;
	for (i = 1; i <= (*numero); i++)
	{
		soma_serie += (pow(i, 2) + 1)/(i + 3);
	}

	return soma_serie;
}

int main()
{
	int numero;
	double soma_serie;

	printf("Numero: ");
	scanf("%d", &numero);

	soma_serie = SomaSerie(&numero);

	printf("Soma: %.2lf", soma_serie);

	return 0;
}
