#include <stdio.h>
#include <math.h>

int main()
{
	int numero;
	double logaritmo;

	printf("Digite um numero: ");
	scanf("%d", &numero);

	if (numero > 0)
	{
		logaritmo = log10(numero);

		printf("Logaritmo na base 10: %.2lf", logaritmo);
	}
	else
	{
		printf("Numero invalido.");
	}

	return 0;
}
