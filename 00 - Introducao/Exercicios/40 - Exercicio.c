#include <stdio.h>

int main()
{
	int dias;
	double valor_dia, valor_liquido;

	valor_dia = 30.00;

	printf("Digite quantos dias serao trabalhados: ");
	scanf("%d", &dias);

	valor_liquido = (valor_dia * dias) - (((valor_dia * dias) * 8)/100);

	printf("Valor liquido a ser pago: %.2lf", valor_liquido);

	return 0;
}
