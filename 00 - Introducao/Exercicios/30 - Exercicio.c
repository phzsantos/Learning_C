#include <stdio.h>

int main()
{
	double valor_convertido, real, dolar;

	printf("Valor em real que quer converter em dolar: ");
	scanf("%lf", &real);
	printf("Valor da cotacao atual do dolar: ");
	scanf("%lf", &dolar);

	valor_convertido = real / dolar;

	printf("Valor em dolar: %.2lf", valor_convertido);

	return 0;
}
